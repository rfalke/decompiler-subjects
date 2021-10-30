#include <cassert>
#include <condition_variable>
#include <iostream>
#include <memory>
#include <mutex>
#include <thread>
#include <vector>

#include <unistd.h>
#include <sys/sysinfo.h>
#include <sys/uio.h>

// Select a number of decimal digits to use.  If we produce one billion
// numbers per second, then we'll finish all the 18-digit numbers in
// just 30 years.  24 digits should suffice until the next geological
// epoch, at least.
static constexpr int numlen = 25; // 24 digits plus newline

static constexpr int write_size = 0x10000; // this is fastest on my system

static_assert('0' - '\n' > 1, "Character coding incompatible with the arithmetic");

#define unlikely(e) __builtin_expect((e), 0)


struct worker
{
    // Storage for the character string we maintain
    std::string lines{""};
    // Iterators to each newline in 'lines'
    std::vector<std::string::iterator> nl{};

    int units_offset{};         // significant figures in the step
    char digit{};               // the single non-zero digit of step

    // We coordinate with the next and previous threads in the ring.
    // The iovec is used for writing a block of lines that straddles
    // the previous thread and this one.
    std::mutex mutex{};
    std::condition_variable cv{};
    struct iovec iov[2] = { { 0, 0 }, { 0, 0 } };
    worker *next{};

    // The functions
    worker(std::size_t first, std::size_t count, std::size_t step);
    worker(const worker&) = delete;
    worker& operator=(const worker&) = delete;
    void loop();
};


static constexpr auto buf_len(std::size_t digits, std::size_t count)
{
    // each group of 15 lines has 8 numbers and 39 chars of Fizz and Buzz
    return (8 * digits + 39) * count / 15;
}

static constexpr std::size_t optimal_step(long thread_count)
{
    // We need each thread to produce at least write_size each iteration
    for (std::size_t tens = 1000;  tens < 10'000'000;  tens *= 10) {
        auto const digits = std::snprintf(0, 0, "%zu", tens);
        for (std::size_t digit = 3;  digit < 10;  digit += 3) {
            if (buf_len(digits, digit * tens) / thread_count > write_size) {
                return digit * tens;
            }
        }
    }
    return 9'000'000; // fallback (perhaps we should limit thread count?)
}

int main()
{
    // How many threads will we have?
    auto const nprocs = get_nprocs();
    auto const step = optimal_step(nprocs);

    // Write output the slow way, until we have enough digits for the
    // format strings.
    auto n = 1;
    const auto step_len = std::to_string(step).size();
    // Finish the loop just before a FizzBuzz, so that the lines buffer
    // doesn't start with a number (we need a newline preceding for it
    // to overflow correctly).
    for (;  std::to_string(n).size() <= step_len;  ++n) {
        if ((n % 15) == 0) {
            std::cout << "FizzBuzz\n";
        } else if ((n % 5) == 0) {
            std::cout << "Buzz\n";
        } else if ((n % 3) == 0) {
            std::cout << "Fizz\n";
        } else {
            std::cout << n << '\n';
        }
    }
    std::cout.flush();          // use Unix write() from here on

    // create the workers
    auto workers = std::vector<std::unique_ptr<worker>>{};
    workers.reserve(nprocs);
    for (int i = 0;  i < nprocs;  ++i) {
        auto const a = i * step / nprocs;
        auto const z = (i+1) * step / nprocs;
        workers.emplace_back(std::make_unique<worker>(n + a, z - a, step));
    }
    // and connect them in a loop
    workers.back()->next = workers.front().get();
    for (int i = 1;  i < nprocs;  ++i) {
        workers[i-1]->next = workers[i].get();
    }

    // a thread for each worker
    auto threads = std::vector<std::unique_ptr<std::thread>>{};
    threads.reserve(nprocs);
    auto const loop = [](worker *w) { w->loop(); };
    for (auto const& w: workers) {
        threads.emplace_back(std::make_unique<std::thread>(loop, w.get()));
    }

    // start them writing
    auto &first = workers.front();
    {
        std::unique_lock lock{first->mutex};
        first->iov[0] = { &first->lines.front(), 0 };
    }
    first->cv.notify_one();

    threads.front()->join();
}

worker::worker(std::size_t first, std::size_t count, std::size_t step)
{
    auto s = std::to_string(step);
    units_offset = s.size() + 1;
    digit = s.front() - '0';

    lines.reserve(buf_len(numlen, count) + 1);
    nl.reserve(count);
    assert(lines.capacity() >= write_size);

    for (auto n = first;  n < first + count;  ++n) {
        if ((n % 15) == 0) {
            lines += "FizzBuzz\n";
        } else if ((n % 5) == 0) {
            lines += "Buzz\n";
        } else if ((n % 3) == 0) {
            lines += "Fizz\n";
        } else {
            lines += std::to_string(n) + '\n';
        }
        nl.push_back(lines.end());
    }
    assert(lines.size() >= write_size);

    // Second half of a straddle write is always from the beginning of our buffer.
    iov[1].iov_base = &lines.front();
}

void worker::loop()
{
    assert(next);
    for (;;) {
        {
            // We can write when the previous thread passes its buffer offcut.
            std::unique_lock lock{mutex};
            cv.wait(lock, [this]{ return iov[0].iov_base; });

            iov[1].iov_len = write_size - iov[0].iov_len;
            assert(iov[1].iov_len < lines.size());
            writev(1, iov, 2);
            // Tell the previous thread that we've finished with its buffer.
            iov[0].iov_base = 0;
        }
        cv.notify_one();

        auto p = lines.begin() + iov[1].iov_len;
        while (unlikely(p + write_size < lines.end())) {
            ::write(1, &*p, write_size);
            p += write_size;
        }

        {
            // Tell the next thread that we have leftover data for it to write.
            std::unique_lock lock{next->mutex};
            next->iov[0] = { &*p, static_cast<std::size_t>(lines.end() - p) };
        }
        next->cv.notify_one();

        {
            // Now wait until next worker has written, and released buffer back to us.
            std::unique_lock lock{next->mutex};
            next->cv.wait(lock, [this]{ return !next->iov[0].iov_base; });
        }


        // Update the numbers in the buffer.
        auto rollover = 0u;
        for (auto const& i: nl) {
            if (i[-2] == 'z') {
                // fizz and/or buzz - not a number
                continue;
            }
            // else add 'step' to the number
            auto p = i - units_offset;
            *p += digit;
            while (*p > '9') {
                *p-- -= 10;
                ++*p;
            }
            if (unlikely(*p == '\n'+1)) {
                // digit rollover
                ++rollover;
            }
        }
        if (unlikely(rollover)) {
            // Add a leading one to each overflowing number.
            auto nlp = nl.end();
            auto p = lines.end();
            assert(lines.size() + rollover < lines.capacity());
            lines.resize(lines.size() + rollover);
            auto dest = lines.end();
            while (--p < --dest) {
                if (*p == '\n'+1) {
                    --*p;
                    *dest-- = '1';
                }
                if (*p == '\n') {
                    *nlp-- = dest + 1;
                }
                *dest = *p;
            }
        }
    }
}

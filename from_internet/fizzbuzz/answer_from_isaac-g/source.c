#include <unistd.h>

#define unlikely(e)      __builtin_expect((e), 0)
#define mcpy(d, s, n)    __builtin_memcpy((d), (s), (n))

#define CACHELINE 64
#define PGSIZE 4096
#define ALIGNED_BUF 65536
#define FIZZ "Fizz"
#define BUZZ "Buzz"
#define DELIM "\n"

typedef struct {
    unsigned char offset;
    char data[CACHELINE - sizeof(unsigned char)];
} counters_t;

static inline void os_write(int out, void *buf, unsigned int n)
{
    while (n)
    {
        ssize_t written = write(out, buf, n);

        if (written >= 0)
        {
            buf += written;
            n -= written;
        }
    }
}

int main(void)
{
    const int out = 1;

    __attribute__((aligned(CACHELINE))) static counters_t counter = {
        sizeof(counter.data) - 1, "00000000000000000000000000000000000000000000000000000000000000"
    };
    __attribute__((aligned(PGSIZE))) static char buf[ALIGNED_BUF + (sizeof(counter.data) * 15 * 3)] = { 0 };
    char *off = buf;

    for (;;)
    {
        // Write chunks of 30 counters until we reach `ALIGNED_BUF`
        while (off - buf < ALIGNED_BUF)
        {
            #define NN (sizeof(counter.data) - 2)

            // Hand-rolled counter copy, because with non-constant sizes the compiler
            // just calls memcpy, which is too much overhead.
            #define CTRCPY(i) do { \
                const char *src = end; \
                char *dst = off; \
                unsigned _n = n; \
                switch (_n & 3) { \
                case 3: *dst++ = *src++; \
                case 2: \
                    mcpy(dst, src, 2); \
                    dst += 2; src += 2; \
                    break; \
                case 1: *dst++ = *src++; \
                case 0: break; \
                } \
                for (_n &= ~3; _n; _n -= 4, dst += 4, src += 4) { \
                    mcpy(dst, src, 4); \
                } \
                mcpy(off + n, i DELIM, sizeof(i DELIM) - 1); \
                off += n + sizeof(i DELIM) - 1; \
            } while (0)

            // Write the first 10 counters of the group (need to separate the
            // first 10 counters from the rest of the chunk due to possible decimal
            // order increase at the end of this block)
            {
                const char *const end = counter.data + counter.offset;
                const unsigned int n = sizeof(counter.data) - counter.offset - 1;

                CTRCPY("1"); // 1
                CTRCPY("2"); // 2

                mcpy(off, FIZZ DELIM, sizeof(FIZZ DELIM) - 1); // Fizz (3)
                off += sizeof(FIZZ DELIM) - 1;

                CTRCPY("4"); // 4

                mcpy(off, BUZZ DELIM FIZZ DELIM, sizeof(BUZZ DELIM FIZZ DELIM) - 1); // Buzz (5) Fizz (6)
                off += sizeof(BUZZ DELIM FIZZ DELIM) - 1;

                CTRCPY("7"); // 7
                CTRCPY("8"); // 8

                mcpy(off, FIZZ DELIM BUZZ DELIM, sizeof(FIZZ DELIM BUZZ DELIM) - 1); // Fizz (9) Buzz (10)
                off += sizeof(FIZZ DELIM BUZZ DELIM) - 1;

                // Carry handling on MOD 10
                for (unsigned d = NN; ; --d)
                {
                    if (counter.data[d] != '9')
                    {
                        ++counter.data[d];
                        break;
                    }
                    counter.data[d] = '0';
                }

                // Decimal order increases only when `counter MOD 30 == 10`
                if (unlikely(counter.data[counter.offset - 1] != '0'))
                {
                    if (unlikely(counter.offset == 1))
                    {
                        goto end;
                    }

                    --counter.offset;
                }
            }

            // Write the chunk's remaining 20 counters
            {
                const char *const end = counter.data + counter.offset;
                const unsigned int n = sizeof(counter.data) - counter.offset - 1;

                CTRCPY("1"); // 11

                mcpy(off, FIZZ DELIM, sizeof(FIZZ DELIM) - 1); // Fizz (12)
                off += sizeof(FIZZ DELIM) - 1;

                CTRCPY("3"); // 13
                CTRCPY("4"); // 14

                mcpy(off, FIZZ BUZZ DELIM, sizeof(FIZZ BUZZ DELIM) - 1); // FizzBuzz (15)
                off += sizeof(FIZZ BUZZ DELIM) - 1;

                CTRCPY("6"); // 16
                CTRCPY("7"); // 17

                mcpy(off, FIZZ DELIM, sizeof(FIZZ DELIM) - 1); // Fizz (18)
                off += sizeof(FIZZ DELIM) - 1;

                CTRCPY("9"); // 19

                mcpy(off, BUZZ DELIM FIZZ DELIM, sizeof(BUZZ DELIM FIZZ DELIM) - 1); // Buzz (20) Fizz (21)
                off += sizeof(BUZZ DELIM FIZZ DELIM) - 1;

                // Carry handling on MOD 10
                for (unsigned d = NN; ; --d)
                {
                    if (counter.data[d] != '9')
                    {
                        ++counter.data[d];
                        break;
                    }
                    counter.data[d] = '0';
                }

                CTRCPY("2"); // 22
                CTRCPY("3"); // 23

                mcpy(off, FIZZ DELIM BUZZ DELIM, sizeof(FIZZ DELIM BUZZ DELIM) - 1); // Fizz (24) Buzz (25)
                off += sizeof(FIZZ DELIM BUZZ DELIM) - 1;

                CTRCPY("6"); // 26

                mcpy(off, FIZZ DELIM, sizeof(FIZZ DELIM) - 1); // Fizz (27)
                off += sizeof(FIZZ DELIM) - 1;

                CTRCPY("8"); // 28
                CTRCPY("9"); // 29

                mcpy(off, FIZZ BUZZ DELIM, sizeof(FIZZ BUZZ DELIM) - 1); // FizzBuzz (30)
                off += sizeof(FIZZ BUZZ DELIM) - 1;

                // Carry handling on MOD 10
                for (unsigned d = NN; ; --d)
                {
                    if (counter.data[d] != '9')
                    {
                        ++counter.data[d];
                        break;
                    }
                    counter.data[d] = '0';
                }
            }
        }

        os_write(out, buf, ALIGNED_BUF);
        mcpy(buf, buf + ALIGNED_BUF, (off - buf) % ALIGNED_BUF);
        off -= ALIGNED_BUF;
    }

end:
    os_write(out, buf, off - buf);

    return 0;
}
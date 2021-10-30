#include <vector>
#include <thread>
#include <iostream>
#include <unistd.h>

class worker
{
public:
    worker(size_t size)
    {
        workersize = size;
        buf = new char[workersize * 40];
    }

    ~worker()
    {
        delete buf;
    }

    void run()
    {
        char thisMod = 0;
        char ibMod;
        char ib[20];
        size_t ibStart;
        size_t s;
        size_t last_ib = -100;            
        char* ptr = buf;

        for (size_t i = start; i < end; i++)
        {
            size_t m3 = i % 3;
            size_t m5 = i % 5;
            if (m3 == 0 && m5 == 0)
            {
                *ptr++ = 'F';
                *ptr++ = 'i';
                *ptr++ = 'z';
                *ptr++ = 'z';
                *ptr++ = 'B';
                *ptr++ = 'u';
                *ptr++ = 'z';
                *ptr++ = 'z';
            }
            else if (m3 == 0)
            {
                *ptr++ = 'F';
                *ptr++ = 'i';
                *ptr++ = 'z';
                *ptr++ = 'z';
            }
            else if (m5 == 0)
            {
                *ptr++ = 'B';
                *ptr++ = 'u';
                *ptr++ = 'z';
                *ptr++ = 'z';
            }
            else
            {
                if (i - last_ib < 10 && ibMod + thisMod < 10)
                {
                    // uses previous ib
                    for (s = ibStart; s <= 14; s++)
                        *ptr++ = ib[s];
                    *ptr++ = ib[s] + thisMod - ibMod;
                }
                else
                {
                    // calc new ib
                    size_t x = i;
                    size_t s = 15;
                    ibMod = x % 10;
                    ib[s--] = ibMod + '0';
                    x /= 10;
                    while (x > 0)
                    {
                        ib[s--] = (x % 10) + '0';
                        x /= 10;
                    }
                    ibStart = ++s;
                    for (ibStart; s <= 15; s++)
                        *ptr++ = ib[s];
                    last_ib = i;
                }
            }

            *ptr++ = '\n';
            thisMod++;
            if (thisMod > 9)
                thisMod = 0;
        }
        buflen = ptr - buf;
    }

    size_t start;
    size_t end;
    size_t workersize;
    char* buf;
    size_t buflen;
};

void task(worker* w)
{
    w->run();
}

int main() 
{
    size_t workercount = std::thread::hardware_concurrency();
    size_t workersize = 10000000;

    // create workers
    std::vector<worker*> workers;
    for (size_t i = 0; i < workercount; i++)
        workers.push_back(new worker(workersize));
   
    // main loop
    size_t cur = 0;
    for (;;)
    {
        // init workers
        for (worker* worker : workers)
        {
            worker->start = cur;
            cur += workersize;
            worker->end = cur;
        }

        std::vector<std::thread> threads;
        for (worker* worker : workers)
            threads.emplace_back(task, worker);

        for (std::thread& thread : threads)
            thread.join();


        // write output
        for (worker* worker : workers)
             write(1, worker->buf, worker->buflen);

        // write progress to cerr
        std::cerr << cur << "\n";
    }
}

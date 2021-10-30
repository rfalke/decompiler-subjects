#include <stdatomic.h>
#include <stdio.h>              /* sprintf */
#include <string.h>             /* memset */
#include <unistd.h>

/* This is the single tunable you need to adjust for your platform */
#define chunk 6000 /* must be multiple of 3*5, with only one nonzero digit */
/* i.e. 3, 6 or 9 times an exact power of ten */

/* Select a number of digits to use.  If we produce one billion numbers
   per second, then we'll finish all the 18-digit numbers in just 30
   years.  24 digits should suffice until next geological epoch, at least. */
#define numlen 25               /* 24 decimal digits plus newline */

#define STR_(x) #x
#define STR(x) STR_(x)
#define chunk_str STR(chunk)

#define unlikely(e) __builtin_expect((e), 0)

char format[chunk * numlen];
char *nl[chunk+1];

int main()
{
    /* Create the format string. */
    /* We do this twice, as the numbers written first time round are
       too short for the addition. */
    for (int j = 0, n = 1;  j < 2;  ++j)
    {
        nl[0] = format;
        char *p = format;
        for (int i = 0;  i <= chunk;  ++i, ++n) {
            if ((n % 15) == 0) {
                p += sprintf(p, "FizzBuzz\n");
            } else if ((n % 5) == 0) {
                p += sprintf(p, "Buzz\n");
            } else if ((n % 3) == 0) {
                p += sprintf(p, "Fizz\n");
            } else {
                p += sprintf(p, "%d\n", n);
            }
            nl[i] = p;
        }
        write(1, format, nl[chunk] - format);
    }

    atomic_int shuffle = 0;
    for (;;) {
#pragma omp parallel for schedule(static)
        for (int i = 0;  i < chunk;  ++i) {
            if (nl[i+1][-2] == 'z') {
                /* fizz and/or buzz - not a number */
                continue;
            }
            /* else add 'chunk' to the number */
            static const int units_offset = sizeof chunk_str;
            static const int digit = chunk_str[0] - '0';
            char *p = nl[i+1] - units_offset;
            *p += digit;
            while (*p > '9') {
                *p-- -= 10;
                ++*p;
            }
            if (unlikely(p < nl[i])) {
                /* digit rollover */
                ++shuffle;
            }
        }
        if (unlikely(shuffle)) {
            /* add a leading one to each overflowing number */
            char **nlp = nl + chunk;
            char *p = *nlp;
            char *dest = p + shuffle;
            while (p < dest) {
                if (*p == '\n') {
                    *nlp-- = dest + 1;
                } else if (*p == '\n'+1) {
                    --*p;
                    *dest-- = '1';
                    *nlp-- = dest + 1;
                }
                *dest-- = *p--;
            }
            shuffle = 0;
        }
        write(1, format, nl[chunk] - format);
    }
}

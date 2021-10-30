#include <stdio.h>
#include <string.h>
#include <unistd.h>
char buf[416];
char out[65536 + 4096] = "1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\n";
int main(int argc, char **argv) {
  const int o[16] = { 4, 7, 2, 11, 2, 7, 12, 2, 12, 7, 2, 11, 2, 7, 12, 2 };
  char *t = out + 30;
  unsigned long long i = 1, j = 1;
  for (int l = 1; l < 20; l++) {
    int n = sprintf(buf, "Buzz\n%llu1\nFizz\n%llu3\n%llu4\nFizzBuzz\n%llu6\n%llu7\nFizz\n%llu9\nBuzz\nFizz\n%llu2\n%llu3\nFizz\nBuzz\n%llu6\nFizz\n%llu8\n%llu9\nFizzBuzz\n%llu1\n%llu2\nFizz\n%llu4\nBuzz\nFizz\n%llu7\n%llu8\nFizz\n", i, i, i, i, i, i, i + 1, i + 1, i + 1, i + 1, i + 1, i + 2, i + 2, i + 2, i + 2, i + 2);
    i *= 10;
    while (j < i) {
      memcpy(t, buf, n);
      t += n;
      if (t >= &out[65536]) {
        char *u = out;
        do {
          int w = write(1, u, &out[65536] - u);
          if (w > 0) u += w;
        } while (u < &out[65536]);
        memcpy(out, out + 65536, t - &out[65536]);
        t -= 65536;
      }
      char *q = buf;
      for (int k = 0; k < 16; k++) {
        char *p = q += o[k] + l;
        if (*p < '7') *p += 3;
        else {
          *p-- -= 7;
          while (*p == '9') *p-- = '0';
          ++*p;
        }
      }
      j += 3;
    }
  }
}

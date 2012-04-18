#include <stdlib.h>
#include <string.h>

void copy1_four_times(short *to, short *from, int count)
{
  int n = (count + 3) / 4;
  switch (count % 4) {
  case 0:
    do {
      *to++ = *from++;
  case 3:
      *to++ = *from++;
  case 2:
      *to++ = *from++;
  case 1:
      *to++ = *from++;
    } while (--n > 0);
  }
}

void copy1_eight_times(short *to, short *from, int count)
{
  int n = (count + 7) / 8;
  switch (count % 8) {
  case 0:
    do {
      *to++ = *from++;
  case 7:
      *to++ = *from++;
  case 6:
      *to++ = *from++;
  case 5:
      *to++ = *from++;
  case 4:
      *to++ = *from++;
  case 3:
      *to++ = *from++;
  case 2:
      *to++ = *from++;
  case 1:
      *to++ = *from++;
    } while (--n > 0);
  }
}

void copy2_four_times(short *to, short *from, int n)
{
  if (n <= 0)
    goto DUFF_END;

  while (1) {
    if (n == 0)
      goto DUFF_END;
    switch (4 - n) {
    case 1:
      goto DUFF_1;
      break;
    case 2:
      goto DUFF_2;
      break;
    case 3:
      goto DUFF_3;
      break;
    }
    *to++ = *from++;
  DUFF_1:
      *to++ = *from++;
  DUFF_2:
      *to++ = *from++;
  DUFF_3:
      *to++ = *from++;
    n -= 4;
  }
DUFF_END:
  return;
}


void copy2_eight_times(short *to, short *from, int n)
{
  if (n <= 0)
    goto DUFF_END;

  while (1) {
    if (n == 0)
      goto DUFF_END;
    switch (8 - n) {
    case 1:
      goto DUFF_1;
    case 2:
      goto DUFF_2;
    case 3:   goto DUFF_3;

    case 4:   goto DUFF_4;
    case 5:   goto DUFF_5;
    case 6:   goto DUFF_6;
    case 7:   goto DUFF_7;
    }
    *to++ = *from++;
  DUFF_1:
      *to++ = *from++;
  DUFF_2:
      *to++ = *from++;
  DUFF_3:      *to++ = *from++;
  DUFF_4:      *to++ = *from++;
  DUFF_5:      *to++ = *from++;
  DUFF_6:      *to++ = *from++;
  DUFF_7:      *to++ = *from++;
    n -= 8;
  }
DUFF_END:
  return;
}

int main(int argc, char *argv[]) {
    size_t size = sizeof(short) * 100;
    short *src = malloc(size);
    short *dest = malloc(size);
    copy1_four_times(dest, src, 100);
    copy1_eight_times(dest, src, 100);
    copy2_four_times(dest, src, 100);
    copy2_eight_times(dest, src, 100);
    return memcmp(src, dest, size);
}

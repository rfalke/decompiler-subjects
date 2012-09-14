
#include <stdio.h>
#include <assert.h>
#include <math.h>

#define add(src,dest) do{tmp=src;   dest=dest+tmp;cf=dest<tmp;}while(0)
#define adc(src,dest) do{tmp=src+cf;dest=dest+tmp;cf=dest<tmp;}while(0)
#define sub(src,dest) do{cf=dest<src;dest=dest-src;}while(0)
#define sbb(src,dest) do{tmp=src+cf;cf=dest<tmp;dest=dest-tmp;}while(0)

static unsigned int integer_sqrt_in_c(unsigned int n)
{
  unsigned short tmp;
  unsigned short ax = n & 0xffff;
  unsigned short dx = (n >> 16) & 0xffff;
  unsigned short bx = 0;
  unsigned short si = 0;
  unsigned short cx = 0;
  unsigned short cf;
  int i;
  for (i = 0; i < 16; i++) {
    sub(0x4000, dx);
    sbb(si, bx);
    sbb(0, cx);
    if (cf != 0) {
      add(0x4000, dx);
      adc(si, bx);
      adc(0, cx);
    }
    cf = 1 - cf;
    si += si + cf;

    add(ax, ax);
    adc(dx, dx);
    adc(bx, bx);
    adc(cx, cx);

    add(ax, ax);
    adc(dx, dx);
    adc(bx, bx);
    adc(cx, cx);
  }
  return si;
}

static unsigned int integer_sqrt_in_c_cleaned_up(unsigned int n)
{
  unsigned long long current = n;
  unsigned short result = 0;
  int i;

  for (i = 0; i < 16; i++) {
    unsigned long long cmp = ((unsigned long long) result << 32) + 0x40000000;
    unsigned long long masked = current & ~0xffff;

    result *= 2;
    if (masked >= cmp) {
      result++;
      current -= cmp;
    }

    current *= 4;
  }
  return result;
}

int main()
{
  unsigned int x;
  for (x = 0; x < 1000; x++) {
    int y, c1, c2, check;

    asm("call integer_sqrt_in_asm": "=a"(y):"a"(x));
    c1 = integer_sqrt_in_c(x);
    c2 = integer_sqrt_in_c_cleaned_up(x);
    check = sqrt(x);
    printf("f(%3u) = %d | c1=%d | c2=%d | using-float=%d\n", x, y, c1, c2,
	   check);
    assert(check == y);
    assert(check == c1);
    assert(check == c2);
  }
  return 0;
}

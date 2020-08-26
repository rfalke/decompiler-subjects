
#include <stdio.h>

extern int do_cmp(unsigned char a, unsigned char b);
extern int do_signed(unsigned char a, unsigned char b);
extern int do_cmp_const(unsigned char a);
extern int do_signed_const(unsigned char a);

int main() {
  for (int i = 0; i < 256; i++) {
    signed char ci=i;
    int cvcmp = do_cmp_const(i);
    int cvsigned = do_signed_const(i);
    int cvcmp_c=ci<10;

    if (cvcmp != cvcmp_c) {
      printf("CONST C and setl differ: %3d = 0x%02x  ->  ", i, i);
      printf("x<10 = %d %d\n", cvcmp,cvcmp_c);
    }

    if (cvcmp != cvsigned) {
      printf("CONST %3d = 0x%02x  ->  ", i, i);
      printf("x<10 = %d %d ", cvcmp,cvcmp_c);
      printf("x-10<0 =%d\n", cvsigned);
    }

    for (int j = 0; j < 256; j++) {
      signed char cj=j;
      int vcmp = do_cmp(i, j);
      int vsigned = do_signed(i, j);
      int vcmp_c=ci<cj;

      if (vcmp != vcmp_c) {
        printf("C and setl differ: %3d = 0x%02x %3d = 0x%02x  ->  ", i, i, j, j);
        printf("x<y = %d %d\n", vcmp, vcmp_c);
      }

      if (vcmp != vsigned) {
        printf("%3d = 0x%02x %3d = 0x%02x  ->  ", i, i, j, j);
        printf("x<y = %d ", vcmp);
        printf("x-y<0 =%d\n", vsigned);
      }
    }
  }
  return 0;
}

#include <stdio.h>

// From: https://community.arm.com/developer/tools-software/oss-platforms/b/android-blog/posts/arm-neon-programming-quick-reference

void add_float_neon3(float *dst, float *src1, float *src2, int count) {
  asm volatile("1: \n"
               "ld1 {v0.4s}, [%[src1]], #16 \n"
               "ld1 {v1.4s}, [%[src2]], #16 \n"
               "fadd v0.4s, v0.4s, v1.4s \n"
               "subs %w[count], %w[count], #4 \n"
               "st1 {v0.4s}, [%[dst]], #16 \n"
               "bgt 1b \n"
               : [dst] "+r"(dst)
               : [src1] "r"(src1), [src2] "r"(src2), [count] "r"(count)
               : "memory", "v0", "v1");
}

int main() {
  float f1[] = {1.2, 2.3, 3.4, 5.6};
  float f2[] = {0.1, 0.2, 0.3, 0.4};
  float dest[4];

  add_float_neon3(dest, f1, f2, 4);

  for (int i = 0; i < 4; i++) {
    printf("%f + %f = %f\n", f1[i], f2[i], dest[i]);
  }
  return 0;
}

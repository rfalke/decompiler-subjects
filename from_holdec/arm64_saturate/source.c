extern void inst_sqadd(long input1, long input2);
extern void inst_uqadd(long input1, long input2);
extern void inst_sshl(long input1, long input2);
extern void inst_srshl(long input1, long input2);
extern void inst_sqshl(long input1, long input2);
extern void inst_sqrshl(long input1, long input2);
extern void inst_ushl(long input1, long input2);
extern void inst_urshl(long input1, long input2);
extern void inst_uqshl(long input1, long input2);
extern void inst_uqrshl(long input1, long input2);

#include <assert.h>
#include <stdio.h>

signed char dest_signed_output;
unsigned char dest_unsigned_output;
unsigned long dest_qc;

int main(int argc, char *argv[]) {
  signed char signed_values[] = {-128, -127, -2, -1, 0, 1, 2, 126, 127};
  unsigned char unsigned_values[] = {0, 1, 2, 126, 127, 128, 129, 254, 255};
  unsigned char shift_values[] = {1, 0x80, 0xff, 0x8, 0x41};
  int NUM = 9;

  printf("=== signed add with saturation\n");
  for (int i = 0; i < NUM; i++) {
    signed char v1 = signed_values[i];
    for (int j = 0; j < NUM; j++) {
      signed char v2 = signed_values[j];
      inst_sqadd(v1, v2);
      signed char sum = v1 + v2;
      printf("%4d + %4d = (%4d/%4d) %4d/0x%02x %ld \n", v1, v2, sum, v1 + v2,
             dest_signed_output, dest_signed_output & 0xff, dest_qc);
    }
  }
  printf("=== unsigned add with saturation\n");
  for (int i = 0; i < NUM; i++) {
    unsigned char v1 = unsigned_values[i];
    for (int j = 0; j < NUM; j++) {
      unsigned char v2 = unsigned_values[j];
      inst_uqadd(v1, v2);
      unsigned char sum = v1 + v2;
      printf("%4d - %4d = (%4d/%4d) %4d/0x%02x %ld\n", v1, v2, sum, v1 + v2,
             dest_unsigned_output, dest_unsigned_output & 0xff, dest_qc);
    }
  }
  printf("=== left shift variants with saturation\n");
  for (int i = 0; i < 5; i++) {
    unsigned char value = shift_values[i];
    for (int amount = -8; amount <= 8; amount++) {
      if (amount < 0) {
        printf("0x%02x>>%d", value, -amount);
      } else {
        printf("0x%02x<<%d", value, amount);
      }
      printf(" || ");
      inst_sshl(value, amount);
      printf("0x%02x", dest_unsigned_output & 0xff);
      inst_srshl(value, amount);
      printf(" | 0x%02x", dest_unsigned_output & 0xff);
      inst_sqshl(value, amount);
      printf(" | 0x%02x %ld", dest_unsigned_output & 0xff, dest_qc);
      inst_sqrshl(value, amount);
      printf(" | 0x%02x %ld", dest_unsigned_output & 0xff, dest_qc);

      printf(" || ");

      inst_ushl(value, amount);
      printf("0x%02x", dest_unsigned_output & 0xff);
      inst_urshl(value, amount);
      printf(" | 0x%02x", dest_unsigned_output & 0xff);
      inst_uqshl(value, amount);
      printf(" | 0x%02x %ld", dest_unsigned_output & 0xff, dest_qc);
      inst_uqrshl(value, amount);
      printf(" | 0x%02x %ld", dest_unsigned_output & 0xff, dest_qc);
    puts("");
    }
    puts("");
  }

  return 0;
}

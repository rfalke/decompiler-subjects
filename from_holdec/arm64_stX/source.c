#include <stdio.h>

unsigned char buffer[16 * 4];

#include "source_decl.inc"

static void print_word(int index) {
  printf("0x");
  for (int i = 0; i < 8; i++) {
    printf("%02x", buffer[8 - 1 - i + index]);
  }
}
static void dump(char *instr, char *descr) {
  printf("===== %s === %s\n", instr, descr);
  printf("memory (rev):\n");
  int index = 0;
  for (int row = 0; row < 4; row++) {
    printf("  [%d] ", row);
    print_word(index + 8);
    printf(" ");
    print_word(index);
    index += 16;
    puts("");
  }
  puts("");
}

static void prepare() {
  for (int i = 0; i < sizeof(buffer); i++) {
    buffer[i] = 0xee;
  }
}

int main() {
#include "source_main.inc"
  return 0;
}

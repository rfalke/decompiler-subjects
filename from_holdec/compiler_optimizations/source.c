
#include <stdio.h>
#include <stdbool.h>

extern unsigned divideByThree(unsigned);
extern bool divisibleBy3(unsigned);
extern unsigned countSetBits(unsigned);
extern bool isWhitespace(char);
extern bool isWhitespace2(char);

int main()
{
  printf("divideByThree:  f(0)=%d f(99)=%d f(100)=%d f(101)=%d f(102)=%d\n", divideByThree(0), divideByThree(99), divideByThree(100), divideByThree(101), divideByThree(102));
  printf("divisibleBy3:   f(0)=%d f(42)=%d f(43)=%d f(44)=%d\n", divisibleBy3(0), divisibleBy3(42), divisibleBy3(43), divisibleBy3(44));
  printf("countSetBits:   f(0)=%d f(0xff)=%d f(0xffffffff)=%d f(0x10101)=%d\n", countSetBits(0), countSetBits(0xff), countSetBits(0xffffffff), countSetBits(0x10101));
  printf("isWhitespace:   f(' ')=%d f(tab)=%d f('a')=%d\n", isWhitespace(' '), isWhitespace('\t'), isWhitespace('a'));
  printf("isWhitespace2:  f(' ')=%d f(tab)=%d f('a')=%d\n", isWhitespace2(' '), isWhitespace2('\t'), isWhitespace2('a'));
  return 0;
}

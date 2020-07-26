// compile with 'gcc -O2 -Wall  -static source.c' or 'gcc -O2 -Wall  -static -m32 source.c'
#include <stdio.h>

int main(int argc, char *argv[]) {
    puts("Hello World");
    printf("argc=%d\n", argc);
    return 0;
}

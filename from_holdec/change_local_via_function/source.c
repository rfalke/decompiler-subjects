#include <stdio.h>

int inc(int *p) {
    (*p)++;
    return 0;
}

int main() {
    int x=41;
    inc(&x);
    printf("The answer should be 42 and is %d\n", x);
    return 0;
}

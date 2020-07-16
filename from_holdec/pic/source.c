#include <stdio.h>

int a_global=42;

void a_func() {
    printf("in func: %d\n", a_global);
}

int main() {
    printf("in main: %d\n", a_global);
    a_global++;
    a_func();
    return 0;
}

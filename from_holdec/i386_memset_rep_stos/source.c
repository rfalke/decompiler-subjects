#include <stdio.h>
#include <string.h>

#define SIZE 30

extern void i386_memset_forward_b(void *s, int c, size_t n);
extern void i386_memset_forward_w(void *s, int c, size_t n);
extern void i386_memset_forward_l(void *s, int c, size_t n);

extern void i386_memset_backward_b(void *s, int c, size_t n);
extern void i386_memset_backward_w(void *s, int c, size_t n);
extern void i386_memset_backward_l(void *s, int c, size_t n);

extern void i386_memset_both_b(void *s, int c, size_t n, int backward);
extern void i386_memset_both_w(void *s, int c, size_t n, int backward);
extern void i386_memset_both_l(void *s, int c, size_t n, int backward);

char buffer[SIZE];

void print(char *msg) {
    for(int i=0;i<SIZE;i++) {
        putchar(buffer[i]);
    }
    printf(" : %s\n", msg);
}
    
int main() {
    for(int i=0;i<SIZE;i++) {
        printf("%d", i%10);
    }
    puts("");

    memset(buffer, '_', SIZE);
    print("initial");


    i386_memset_forward_b(buffer+3, 'x', 5);
    print("5 'x' from 3");

    i386_memset_forward_w(buffer+10, '(' + (')'<<8), 3);
    print("3 '()' from 10");

    i386_memset_forward_l(buffer+20, '<'+('a'<<8)+('b'<<16)+('>'<<24), 2);
    print("2 '<ab>' from 20");



    memset(buffer, '_', SIZE);
    print("reset for following backward tests");

    i386_memset_backward_b(buffer+7, 'x', 5);
    print("5 'x' from 3");

    i386_memset_backward_w(buffer+14, '(' + (')'<<8), 3);
    print("3 '()' from 10");

    i386_memset_backward_l(buffer+24, '<'+('a'<<8)+('b'<<16)+('>'<<24), 2);
    print("2 '<ab>' from 20");



    memset(buffer, '_', SIZE);
    print("reset for following bi directional tests");

    i386_memset_both_b(buffer+3, 'x', 5, 0);
    print("5 'x' from 3");
    i386_memset_both_b(buffer+7, 'y', 5, 1);
    print("5 'y' from 3");

    memset(buffer, '_', SIZE);
    print("reset for following bi directional tests");

    i386_memset_both_w(buffer+10, '(' + (')'<<8), 3, 0);
    print("3 '()' from 10");
    i386_memset_both_w(buffer+14, '{' + ('}'<<8), 3, 1);
    print("3 '{}' from 10");

    memset(buffer, '_', SIZE);
    print("reset for following bi directional tests");

    i386_memset_both_l(buffer+20, '<'+('a'<<8)+('b'<<16)+('>'<<24), 2, 0);
    print("2 '<ab>' from 20");
    i386_memset_both_l(buffer+24, '['+('A'<<8)+('B'<<16)+(']'<<24), 2, 1);
    print("2 '[AB]' from 20");

    return 0;
}

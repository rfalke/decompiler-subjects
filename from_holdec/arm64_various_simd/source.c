#include <stdio.h>

unsigned char buffer[16] = { 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xaa };
long high;
long low;

extern void modify1(long* high, long* low, float* buffer);
extern void modify2(long* high, long* low, float* buffer);
extern void modify3(long* high, long* low, float* buffer);
extern void modify4(long* high, long* low, float* buffer);
extern void cmp_bytes(long* high, long* low, float* buffer);
extern char input1[];
extern char input2[];

static void dump(char* msg)
{
    printf("===== %s\n", msg);
    printf("x1/x0 (high/low):       0x%016lx 0x%016lx\n", high, low);
    printf("memory:                 0x");
    for (int i = 0; i < 16; i++) {
        printf("%02x", buffer[i]);
        if (i == 7)
            printf(" 0x");
    }
    puts("");

    float* f = (float*)buffer;
    printf("as float (s, 4 byte):   ");
    for (int i = 0; i < 4; i++) {
        printf("[%d]=%f ", i, f[i]);
    }
    puts("");

    double* d = (double*)buffer;
    printf("as double (d, 8 byte):  ");
    for (int i = 0; i < 2; i++) {
        printf("[%d]=%f ", i, d[i]);
    }
    puts("");
    puts("");
}

int main()
{
    modify1(&high, &low, (void*)buffer);
    dump("2x double values of 0.75");

    modify2(&high, &low, (void*)buffer);
    dump("4x float values of 0.75");

    modify3(&high, &low, (void*)buffer);
    dump("4x float values of 123, 456, 789, 543 divided by 100");

    modify4(&high, &low, (void*)buffer);
    dump("4x float values of 123, 456, 789, 543 divided by 100 and than add 2 to every byte");

                                                              
printf("first input:  '%s'\n", input1);
printf("second input: '%s'\n", input2);        
    cmp_bytes(&high, &low, (void*)buffer);
    dump("compare first 16 bytes of two strings (ff=eq, 00=ne)");

    return 0;
}

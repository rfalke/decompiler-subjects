#include <stdio.h>
#include <assert.h>
#include <stdarg.h>

union floatu {
    float fv;
    unsigned char bytes[4];
};

union doubleu {
    double fv;
    unsigned char bytes[8];
};


union long_doubleu {
    long double fv;
    unsigned char bytes[10];
};

int __attribute__ ((noinline)) print_char(unsigned char c) {
    printf("got a char '%c'\n", c);
    return 0;
}

int __attribute__ ((noinline)) print_short(unsigned short s) {
    printf("got a short %d\n", s);
    return 0;
}

int __attribute__ ((noinline)) print_float_as_hex(float fv) {
    union floatu u;
    assert(sizeof(float)==4);
    u.fv=fv;
    printf("got a float with       0x%02x 0x%02x 0x%02x 0x%02x\n", u.bytes[3],u.bytes[2],u.bytes[1],u.bytes[0]);
    return 0;
}

int __attribute__ ((noinline)) print_double_as_hex(double fv) {
    union doubleu u;
    assert(sizeof(double)==8);
    u.fv=fv;
    printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", u.bytes[7],u.bytes[6],u.bytes[5],u.bytes[4], u.bytes[3],u.bytes[2],u.bytes[1],u.bytes[0]);
    return 0;
}

int __attribute__ ((noinline)) print_long_double_as_hex(long double fv) {
    union long_doubleu u;
    assert(sizeof(long double)==12);
    u.fv=fv;
    printf("got a long double with 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", u.bytes[9],u.bytes[8],u.bytes[7],u.bytes[6],u.bytes[5],u.bytes[4], u.bytes[3],u.bytes[2],u.bytes[1],u.bytes[0]);
    return 0;
}

int __attribute__ ((noinline)) print_varargs(char *format,...) {
    va_list argp;
    union floatu u;

    va_start(argp, format);  
    assert(sizeof(float)==4);
    
    float f = va_arg(argp, double);
    u.fv=f;
    printf("promo because of vargs: converted a float with 0x%02x 0x%02x 0x%02x 0x%02x\n", u.bytes[3],u.bytes[2],u.bytes[1],u.bytes[0]);
    va_end(argp);
    return 0;
}

int __attribute__ ((noinline)) print_without_prototype();

int main(int argc, char *argv[]) {
    float f=1.23f+argc;
    double d=4.56+argc;
    long double ld=7.89+argc;
    print_char('a');
    print_short(42);
    print_float_as_hex(f);
    print_double_as_hex(d);
    print_long_double_as_hex(ld);
    print_varargs("dummy", f);
    print_without_prototype(f);
    return 0;
}

int __attribute__ ((noinline)) print_without_prototype(double fv) {
    union floatu u;
    assert(sizeof(float)==4);
    u.fv=fv;
    printf("promo because of no prototype: converted to a float with 0x%02x 0x%02x 0x%02x 0x%02x\n", u.bytes[3],u.bytes[2],u.bytes[1],u.bytes[0]);
    return 0;
}

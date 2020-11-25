#include <stdio.h>
#include <assert.h>

union doubleu {
    double fv;
    unsigned char bytes[8];
};


int __attribute__ ((noinline)) unknown_to_unknown(double fv) {
    union doubleu u;
    assert(sizeof(double)==8);
    u.fv=fv;
    printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", u.bytes[7],u.bytes[6],u.bytes[5],u.bytes[4], u.bytes[3],u.bytes[2],u.bytes[1],u.bytes[0]);
    return 0;
}

int __attribute__ ((noinline)) double_to_unknown(double fv) {
    union doubleu u;
    assert(sizeof(double)==8);
    u.fv=fv;
    printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", u.bytes[7],u.bytes[6],u.bytes[5],u.bytes[4], u.bytes[3],u.bytes[2],u.bytes[1],u.bytes[0]);
    return 0;
}

int __attribute__ ((noinline)) unknown_to_double(double fv) {
    printf("got 2*x=%f\n", 2*fv);
    return 0;
}

int __attribute__ ((noinline)) double_to_double(double fv) {
    printf("got 2*x=%f\n", 2*fv);
    return 0;
}

int main(int argc, char *argv[]) {
    unknown_to_unknown(1.21);
    double_to_unknown(1.22+argc);
    unknown_to_double(1.23);
    double_to_double(1.24+argc);

    printf("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 100, 2.31, 101, (long double)2.32, 102);
    printf("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 200, 2.41+argc, 201, (long double)(2.42+argc), 202);
    return 0;
}

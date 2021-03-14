
int main(unsigned int param0) {
    test(0xfffffffb);
    test(0xfffffffe);
    test(0);
    test(param0);
    test(5);
    return 0;
}

void sub_8048248() {
    jump gvar_804957C;
}

int sub_804825E() {
    /*BAD_CALL!*/ sub_8048248();
}

int sub_804826E() {
    /*BAD_CALL!*/ sub_8048248();
}

void sub_80482FA() {
}

int sub_804841A() {
    int result;
    int v0;
    int v1;
    int v2;
    do {
        *(int*)(v1 * 4 + (int)&data_start)();
        v0 = v1;
        --v1;
    }
    while(v0);
    finalizer_0(v2, 0);
    return result;
}

int test(unsigned int param0) {
    unsigned int v0 = (unsigned int)(-2 - ((-2 - param0) & (-1 - ((param0 >> 31) + (unsigned int)(param0 > 0xfffffffe)))));
    return →printf("MinMax result %d\n", (((v0 >> 31) - (unsigned int)(v0 < 3)) & (v0 - 3)) + 3);
}

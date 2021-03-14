
int main(int param0) {
    test(-5);
    test(-2);
    test(0);
    test(param0);
    test(5);
    return 0;
}

void sub_8048248() {
    jump gvar_804956C;
}

int sub_804825E() {
    /*BAD_CALL!*/ sub_8048248();
}

int sub_804826E() {
    /*BAD_CALL!*/ sub_8048248();
}

void sub_80482FA() {
}

int sub_804840A() {
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

int test(int param0) {
    if(param0 < -2) {
        param0 = -2;
    }
    if(param0 > 3) {
        param0 = 3;
    }
    return →printf("MinMax result %d\n", param0);
}

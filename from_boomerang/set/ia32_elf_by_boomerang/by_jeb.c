
int main(int param0) {
    →printf("Result is %d\n", param0 <= 1 ? 0: 1);
    return param0 <= 1 ? 0: 1;
}

void sub_8048248() {
    jump gvar_8049500;
}

int sub_804825E() {
    /*BAD_CALL!*/ sub_8048248();
}

int sub_804826E() {
    /*BAD_CALL!*/ sub_8048248();
}

void sub_80482FA() {
}

int sub_80483A2() {
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

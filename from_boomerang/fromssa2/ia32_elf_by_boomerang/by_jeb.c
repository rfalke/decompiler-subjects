
int main(int param0, int param1) {
    int v0;
    int v1;
    int v2 = 0;
    do {
        ++v2;
        int v3 = →printf((char*)&gvar_8048410, v2, v0, v1);
    }
    while(v2 <= 9);
    →printf("a is %d, x is %d\n", 10, 10);
    return 0;
}

void sub_8048248() {
    jump gvar_804951C;
}

int sub_804825E() {
    /*BAD_CALL!*/ sub_8048248();
}

int sub_804826E() {
    /*BAD_CALL!*/ sub_8048248();
}

void sub_80482FA() {
}

int sub_80483B6() {
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

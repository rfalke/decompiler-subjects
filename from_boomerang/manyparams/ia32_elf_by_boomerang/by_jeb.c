
int main() {
    int v0 = 0x40119999;
    int v1 = 0x9999999a;
    int v2 = 4;
    int v3 = 0x400a6666;
    int v4 = 0x66666666;
    int v5 = 3;
    int v6 = 0x40019999;
    int v7 = 0x9999999a;
    int v8 = 2;
    int v9 = 0x3ff19999;
    int v10 = 0x9999999a;
    →printf("Many parameters: %d, %.1f, %d, %.1f, %d, %.1f, %d, %.1f\n", 1, *(double*)&v10, 2, *(double*)&v7, 3, *(double*)&v4, 4, *(double*)&v1);
    return 0;
}

void sub_8048248() {
    jump gvar_8049570;
}

int sub_804825E() {
    /*BAD_CALL!*/ sub_8048248();
}

int sub_804826E() {
    /*BAD_CALL!*/ sub_8048248();
}

void sub_80482FA() {
}

int sub_80483C6() {
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

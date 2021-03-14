
int main(int param0, int param1) {
    char v0;
    int v1;
    int result = →__xstat(3, "test/source/stattest.c", &v0);
    →printf("Stat returns %d; size of file is %d\n", result, v1);
    return result;
}

void sub_804826C() {
    jump gvar_804957C;
}

int sub_8048282() {
    /*BAD_CALL!*/ sub_804826C();
}

int sub_8048292() {
    /*BAD_CALL!*/ sub_804826C();
}

int sub_80482A2() {
    /*BAD_CALL!*/ sub_804826C();
}

void sub_804832E() {
}

int sub_80483E6() {
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

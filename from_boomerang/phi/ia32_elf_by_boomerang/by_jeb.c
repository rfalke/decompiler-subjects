
int fib(int param0) {
    int result1;
    int v0;
    int v1 = v0;
    int v2 = v0;
    int result = param0;
    if(result <= 1) {
        result1 = 1;
        if(result != 1) {
            return result;
        }
    }
    else {
        int v3 = fib(result - 1);
        result = v3;
        int v4 = fib(v3 - 1);
        →printf((char*)&gvar_80484E7, v4 + result);
        result1 = result;
    }
    return result1;
}

int main() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    →printf("Input number: ");
    →scanf((char*)&gvar_80484E7, &v1, v2, v3);
    int v5 = v4;
    if(v5 <= 1) {
        v0 = 1;
        if(v5 != 1) {
            v0 = v5;
            →printf("fibonacci(%d) = %d\n", v4, v0);
            return 0;
        }
    }
    else {
        int v6 = fib(v5 - 1);
        v5 = v6;
        int v7 = fib(v6 - 1);
        →printf((char*)&gvar_80484E7, v7 + v5, v2, v3);
        v0 = v5;
    }
    →printf("fibonacci(%d) = %d\n", v4, v0);
    return 0;
}

void sub_804826C() {
    jump gvar_80495F4;
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

int sub_80483AE() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int* ptr0;
    int v5 = fib(v3 - 1);
    int v6 = fib(v5 - 1);
    →printf((char*)&gvar_80484E7, v5 + v6, v0, v1);
    v1 = v4;
    →printf("fibonacci(%d) = %d\n", *(ptr0 - 2), v5);
    jump v2;
}

void sub_80483DE() {
}

int sub_80483FE() {
    int v0;
    int v1;
    int v2 = fib(v1 - 1);
    int v3 = fib(v2 - 1);
    →printf((char*)&gvar_80484E7, v2 + v3);
    jump v0;
}

int sub_804847E() {
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

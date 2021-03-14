
// Stale decompilation - Refresh this view to re-decompile this code
int fib1(int param0) {
    return fib2(param0);
}

int fib2(int param0) {
    int result;
    if(param0 <= 1) {
        result = param0;
    }
    else {
        int v0 = fib1(param0 - 1);
        int v1 = fib1(param0 - 2);
        result = v1 + v0;
    }
    return result;
}

int main() {
    int v0;
    →printf("Input number: ");
    →scanf((char*)&gvar_804849F);
    int v1 = fib1(v0);
    →printf("fibonacci(%d) = %d\n", v0, v1);
    return 0;
}

void sub_804826C() {
    jump gvar_80495AC;
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

int sub_804837E() {
    int v0;
    int v1;
    int v2 = fib1(v1 - 1);
    int v3 = fib1(v1 - 2);
    jump v0;
}

void sub_804839E() {
}

int sub_8048436() {
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

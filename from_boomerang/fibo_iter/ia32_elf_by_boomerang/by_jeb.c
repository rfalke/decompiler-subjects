
int fib(int param0) {
    int result;
    if(param0 > 1) {
        int v0 = 1;
        int v1 = 1;
        if(param0 > 2) {
            int v2 = param0 - 2;
            do {
                result = v0;
                v0 += v1;
                --v2;
                v1 = result;
            }
            while(v2);
        }
    }
    return result;
}

int main() {
    int v0;
    →printf("Input number: ");
    →scanf((char*)&gvar_804848B);
    int v1 = fib(v0);
    →printf("fibonacci(%d) = %d\n", v0, v1);
    return 0;
}

void sub_804826C() {
    jump gvar_8049598;
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

void sub_804838A() {
}

int sub_8048422() {
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

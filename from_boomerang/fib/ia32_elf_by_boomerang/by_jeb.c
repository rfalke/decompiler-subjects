
int fib(int param0) {
    int result;
    if(param0 > 1) {
        int v0 = fib(param0 - 1);
        int v1 = fib(param0 - 2);
        result = v1 + v0;
    }
    else {
        result = param0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int main() {
    int v0 = fib(10);
    →printf((char*)&gvar_8048468, v0);
    return 0;
}

int start(int param0, int param1) {
    →__libc_start_main();
    hlt();
}

void sub_8048248() {
    jump gvar_8049560;
}

int sub_804825E() {
    /*BAD_CALL!*/ sub_8048248();
}

int sub_804826E() {
    /*BAD_CALL!*/ sub_8048248();
}

void sub_80482A2() {
}

void sub_80482C6() {
}

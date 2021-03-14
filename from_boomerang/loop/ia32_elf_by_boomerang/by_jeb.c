
int main() {
    int i;
    for(i = 0; i <= 9; ++i) {
    }
    →printf((char*)&gvar_8048428, i);
    return 0;
}

int start(int param0, int param1) {
    →__libc_start_main();
    hlt();
}

void sub_8048248() {
    jump gvar_8049520;
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

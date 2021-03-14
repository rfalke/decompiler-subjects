
int main(unsigned int param0) {
    int v0;
    int v1;
    int v2;
    if(param0 > 3999999999) {
        →printf("Population exceeds %u\n", -294967296);
    }
    if(param0 <= 0xefffffff) {
        →printf("The mask is %x\n", 0xf0000000);
    }
    if(param0 > 1) {
        →printf("Arguments supplied\n", v0, v1, v2);
    }
    if(0 - param0 < -2) {
        →printf("Three or more arguments\n", v0, v1, v2);
    }
    return 0;
}

void sub_8048248() {
    jump gvar_80495A8;
}

int sub_804825E() {
    /*BAD_CALL!*/ sub_8048248();
}

int sub_804826E() {
    /*BAD_CALL!*/ sub_8048248();
}

void sub_80482FA() {
}

int sub_8048406() {
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

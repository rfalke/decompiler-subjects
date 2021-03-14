
int main(int param0) {
    int v0;
    int v1;
    int v2;
    if(param0 > 2) {
        do {
            if(1) {
                →printf((char*)&gvar_804849E, v0, v1, v2);
            loc_804837D:
                →printf((char*)&gvar_804849C, v0, v1, v2);
            }
            else if(param0 > 4) {
                goto loc_804837D;
            }
        }
        while(param0 <= 5);
    }
    else {
        while(param0 < 11) {
        }
    }
    return 7;
}

void sub_8048248() {
    jump gvar_8049594;
}

int sub_804825E() {
    /*BAD_CALL!*/ sub_8048248();
}

int sub_804826E() {
    /*BAD_CALL!*/ sub_8048248();
}

void sub_80482FA() {
}

int sub_8048442() {
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

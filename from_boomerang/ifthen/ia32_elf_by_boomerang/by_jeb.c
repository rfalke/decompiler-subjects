
int main(int param0) {
    int v0;
    int v1;
    int v2;
    →printf("Figure 19.2\n", v0, v1, v2);
    int v3 = 0;
    →printf((char*)&gvar_804846D, v0, v1, v2);
    if(param0 <= 3) {
        v3 = param0;
    }
    return →printf("C is %d\n", v3 + param0);
}

void sub_8048248() {
    jump gvar_804956C;
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

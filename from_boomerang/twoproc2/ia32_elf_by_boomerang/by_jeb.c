
int main() {
    int v0;
    int v1;
    int v2 = proc1(3, 4);
    →printf((char*)&gvar_804842C, v2, v0, v1);
    int v3 = proc1(5, 6);
    return →printf((char*)&gvar_804842C, v3, v0, v1);
}

int proc1(int param0, int param1) {
    return param0 + param1;
}

void sub_8048248() {
    jump gvar_8049524;
}

int sub_804825E() {
    /*BAD_CALL!*/ sub_8048248();
}

int sub_804826E() {
    /*BAD_CALL!*/ sub_8048248();
}

void sub_80482FA() {
}

int sub_80483D2() {
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

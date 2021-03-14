
int main() {
    int v0 = 0;
    for(int i = 0; i <= 9; ++i) {
        v0 += *(int*)(i * 4 + (int)&a);
    }
    →printf("Sum is %d\n", v0);
    return 0;
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

int sub_80483D2() {
    int result;
    int v0;
    int v1;
    int v2;
    do {
        *(int*)(v1 * 4 + 134517820)();
        v0 = v1;
        --v1;
    }
    while(v0);
    finalizer_0(v2, 0);
    return result;
}

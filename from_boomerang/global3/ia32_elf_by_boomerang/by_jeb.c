
int foo1() {
    return foo2();
}

int foo2() {
    b = 12;
    return →printf("a = %lld\n", *(int*)&a);
}

int main() {
    foo1();
    →printf("b = %i\n", b);
    return 0;
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

void sub_80482FA() {
}

int sub_80483EA() {
    int result;
    int v0;
    int v1;
    int v2;
    do {
        *(int*)(v1 * 4 + 134517852)();
        v0 = v1;
        --v1;
    }
    while(v0);
    finalizer_0(v2, 0);
    return result;
}

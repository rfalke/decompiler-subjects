
int main() {
    int v0 = 0;
    int v1 = 0;
    do {
        v0 += *(int*)(v1 * 4 + (int)&a);
        ++v1;
    }
    while(v1 <= 9);
    →printf("Sum is %d\n", v0);
    return 0;
}

void sub_8048248() {
    jump gvar_804954C;
}

int sub_804825E() {
    /*BAD_CALL!*/ sub_8048248();
}

int sub_804826E() {
    /*BAD_CALL!*/ sub_8048248();
}

void sub_80482FA() {
}

int sub_80483AA() {
    int result;
    int v0;
    int v1;
    int v2;
    do {
        *(int*)(v1 * 4 + 134517780)();
        v0 = v1;
        --v1;
    }
    while(v0);
    finalizer_0(v2, 0);
    return result;
}

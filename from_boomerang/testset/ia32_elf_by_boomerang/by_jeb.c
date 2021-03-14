
int main(unsigned int param0) {
    →printf("Hello, set\n");
    →printf("argc <u 3: %d\n", param0 < 3 ? 1: 0);
    →printf("(argc - 4) >= 0: %d\n", (int)param0 < 4 ? 0: 1);
    return 0;
}

void sub_8048290() {
    jump gvar_80495B8;
}

void sub_8048342() {
}

int sub_8048442(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v0;
    do {
        *(int*)(v4 * 4 + v2 - 224)();
        v1 = v4;
        --v4;
    }
    while(v1);
    return finalizer_0(v3, 0);
}

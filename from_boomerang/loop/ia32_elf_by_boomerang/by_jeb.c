
int main() {
    unsigned int i;
    for(i = 0; (int)i <= 9; ++i) {
    }
    →printf((char*)&gvar_8048428, i);
    return 0;
}

int start(int param0, int param1) {
    int v0;
    char v1;
    void* ptr0;
    int v2;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    int v9 = v0;
    int* ptr1 = &v1;
    char v10 = &v0 ? 0: 1;
    char v11 = (int)&v0 < 0;
    char v12 = __parity__((unsigned char)&v0);
    char v13 = 0;
    char v14 = 0;
    int v15 = v2;
    int* ptr2 = &v15;
    int* ptr3 = &v15;
    int v16 = param1;
    int v17 = &finalizer_0;
    int v18 = &initializer_0;
    int* ptr4 = &v1;
    int v19 = &main;
    int* ptr5 = &ptr0;
    int v20 = →__libc_start_main();
    hlt();
}

int sub_804824E() {
    return gvar_8049520();
}

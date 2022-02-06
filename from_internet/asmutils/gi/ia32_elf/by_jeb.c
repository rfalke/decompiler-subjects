
int start(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    char v3;
    int v4 = v2;
    int v5 = param0;
    int v6 = param1;
    int v7 = param1;
    char v8 = v7 ? 0: 1;
    char v9 = v7 < 0;
    char v10 = __parity__((unsigned char)v7);
    char v11 = 0;
    char v12 = 0;
    if(!v8) {
        param1 = 0;
        param0 = 2;
        v2 = 2;
        int* ptr1 = &v2;
        v1 = 1;
        int v13 = 102;
        v0 = 102;
        ptr0 = &v2;
        interrupt(128);
    }
    v1 = v4;
    param1 = 1;
    v0 = 1;
    ptr0 = &v3;
    interrupt(128);
}

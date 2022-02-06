
int start(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    char v4;
    int v5 = v2;
    int v6 = v2;
    int v7 = v5 - 1;
    char v8 = v7 ? 0: 1;
    char v9 = v7 < 0;
    char v10 = __parity__((unsigned char)v7);
    char v11 = ((~v7 ^ ~v6) >>> 4) & 0x1;
    char v12 = ((v7 ^ v6) & v6) < 0;
    if(!v8) {
        int v13 = param0;
        v1 = param1;
        param1 = 61;
        v0 = 61;
        ptr0 = &v4;
        interrupt(128);
    }
    v1 = v3;
    v2 = 1;
    v0 = 1;
    ptr0 = &param0;
    interrupt(128);
}

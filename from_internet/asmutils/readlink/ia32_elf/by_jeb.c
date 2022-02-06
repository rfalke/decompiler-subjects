
int start(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    int v7;
    char v8;
    int v9 = v7;
    int v10 = param0;
    int v11 = v9;
    int v12 = v9 - 1;
    char v13 = v12 ? 0: 1;
    char v14 = v12 < 0;
    char v15 = __parity__((unsigned char)v12);
    char v16 = ((~v12 ^ ~v11) >>> 4) & 0x1;
    char v17 = ((v12 ^ v11) & v11) < 0;
    if(!v13) {
        int v18 = 0;
        v6 = 1;
        v5 = 0;
        v4 = 1;
        v3 = 0;
        v2 = 0;
        int v19 = 0x400;
        int v20 = 134512771;
        v1 = param1;
        param1 = 85;
        v0 = 85;
        ptr0 = &v8;
        interrupt(128);
    }
    v1 = 0;
    v6 = 1;
    v5 = 0;
    v4 = 1;
    v3 = 0;
    v2 = 0;
    param0 = 1;
    v0 = 1;
    ptr0 = &param1;
    interrupt(128);
}

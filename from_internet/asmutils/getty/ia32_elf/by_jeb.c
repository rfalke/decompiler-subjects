
int start(int param0, unsigned int param1) {
    int* ptr0;
    unsigned int v0;
    int v1;
    unsigned int v2;
    char v3;
    unsigned int v4 = v2;
    int* ptr1 = (int*)(v4 * 4 + (int)&param1);
    gvar_804826F = (int*)(v4 * 4 + (int)&param1);
    unsigned int v5 = v4;
    int v6 = (int)(v4 - 1);
    char v7 = v6 ? 0: 1;
    char v8 = v6 < 0;
    char v9 = __parity__((unsigned char)v6);
    char v10 = ((~v6 ^ ~v5) >>> 4) & 0x1;
    char v11 = ((v6 ^ v5) & v5) < 0;
    if(!v7) {
        int v12 = param0;
        gvar_804826B = param1;
        v1 = 134513267;
        param1 = 122;
        v0 = 122;
        ptr0 = &v3;
        interrupt(128);
    }
    v1 = 0;
    v7 = 1;
    v8 = 0;
    v9 = 1;
    v11 = 0;
    char v13 = 0;
    v2 = 1;
    v0 = 1;
    ptr0 = &param0;
    interrupt(128);
}

int sub_8048070() {
    char v0;
    int v1 = 134513657;
    int v2 = 0;
    char v3 = 1;
    char v4 = 0;
    char v5 = 1;
    char v6 = 0;
    char v7 = 0;
    int v8 = "/etc/issue";
    int v9 = 5;
    int v10 = 5;
    int* ptr0 = &v0;
    interrupt(128);
}

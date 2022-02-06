
int start(int param0, int param1) {
    int* ptr0;
    int v0;
    char* ptr1;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    char v7;
    int v8 = v6;
    int v9 = param0;
    int v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 1;
    char v14 = 0;
    char v15 = 0;
    int v16 = v8;
    int v17 = v8 - 1;
    char v18 = v17 ? 0: 1;
    char v19 = v17 < 0;
    char v20 = __parity__((unsigned char)v17);
    char v21 = ((~v17 ^ ~v16) >>> 4) & 0x1;
    char v22 = ((v17 ^ v16) & v16) < 0;
    if(!v18) {
        int v23 = param1;
        v10 = param1;
        v5 = v10 ? 0: 1;
        v4 = v10 < 0;
        v3 = __parity__((unsigned char)v10);
        v2 = 0;
        v1 = 0;
        if(!v5) {
            ptr1 = NULL;
            v5 = 1;
            v4 = 0;
            v3 = 1;
            v2 = 0;
            v1 = 0;
            param1 = 5;
            v0 = 5;
            ptr0 = &v7;
            interrupt(128);
        }
        param1 = 1;
        v0 = 1;
        ptr0 = &v7;
        interrupt(128);
    }
    int v24 = 0;
    v5 = 1;
    v4 = 0;
    v3 = 1;
    v2 = 0;
    v1 = 0;
    char* ptr2 = (char*)&gvar_80480F0;
    int v25 = &gvar_80480F0;
    int v26 = 51;
    v17 = (unsigned int)32 | ((unsigned int)((v17 >>> 8) & 0xffffff) << 8);
    while(v26 != 0) {
        *ptr2 = (unsigned char)v17;
        ++ptr2;
        --v26;
    }
    ptr1 = ptr2;
    int v27 = 16;
    param0 = 3;
    v0 = 3;
    ptr0 = &param1;
    interrupt(128);
}


char start(char* param0, int param1) {
    char* ptr0;
    int* ptr1;
    int v0;
    char v1;
    int v2;
    char v3;
    int v4;
    char v5;
    int v6 = v2;
    char* ptr2 = param0;
    do {
        v1 = *ptr2;
        ++ptr2;
        v3 = v1 ? 0: 1;
        char v7 = v1 < 0;
        char v8 = __parity__(v1);
        char v9 = 0;
        char v10 = 0;
    }
    while(!v3);
    char v11 = *(short*)(ptr2 - 6) == 29548;
    char v12 = *(short*)(ptr2 - 6) < 29548;
    char v13 = __parity__((unsigned char)*(short*)(ptr2 - 6) - 108);
    char v14 = *(unsigned short*)(ptr2 - 6) < 29548;
    char v15 = (((*(short*)(ptr2 - 6) - 29548) ^ *(short*)(ptr2 - 6)) & (*(short*)(ptr2 - 6) ^ 0x736c)) < 0;
    char v16 = (((*(short*)(ptr2 - 6) - 29548) ^ (*(short*)(ptr2 - 6) ^ 0x736c)) >>> 4) & 0x1;
    if(!v11) {
        int v17 = v6;
        --v6;
        v11 = v6 ? 0: 1;
        v12 = v6 < 0;
        v13 = __parity__((unsigned char)v6);
        v16 = ((~v6 ^ ~v17) >>> 4) & 0x1;
        v15 = ((v6 ^ v17) & v17) < 0;
        if(!v11) {
            v0 = param1;
            ptr1 = &v5;
            v11 = 1;
            v12 = 0;
            v13 = 1;
            v15 = 0;
            v14 = 0;
            ptr0 = (char*)0x81;
            interrupt(128);
        }
        v0 = (unsigned int)v1 | ((unsigned int)v4 << 8);
        param0 = (char*)0x1;
        ptr0 = (char*)0x1;
        ptr1 = &param1;
        interrupt(128);
    }
    int v18 = 38;
    int v19 = &gvar_804804C;
    v0 = 1;
    param0 = (char*)0x4;
    ptr0 = (char*)0x4;
    ptr1 = &param1;
    interrupt(128);
}

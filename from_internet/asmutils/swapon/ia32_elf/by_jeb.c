
char start(char* param0, char param1) {
    int* ptr0;
    char v0;
    char v1;
    int v2;
    char v3;
    int v4;
    char v5;
    int v6 = v2;
    char* ptr1 = param0;
    do {
        v1 = *ptr1;
        ++ptr1;
        v3 = v1 ? 0: 1;
        char v7 = v1 < 0;
        char v8 = __parity__(v1);
        char v9 = 0;
        char v10 = 0;
    }
    while(!v3);
    char v11 = param1;
    char v12 = param1;
    char v13 = v12 ? 0: 1;
    char v14 = v12 < 0;
    char v15 = __parity__((unsigned char)v12);
    char v16 = 0;
    char v17 = 0;
    if(!v13) {
        v13 = *(short*)(ptr1 - 7) == 0x6b6d;
        v14 = *(short*)(ptr1 - 7) < 0x6b6d;
        v15 = __parity__((unsigned char)*(short*)(ptr1 - 7) - 109);
        v17 = *(unsigned short*)(ptr1 - 7) < 0x6b6d;
        v16 = (((*(short*)(ptr1 - 7) - 0x6b6d) ^ *(short*)(ptr1 - 7)) & (*(short*)(ptr1 - 7) ^ 0x6b6d)) < 0;
        char v18 = (((*(short*)(ptr1 - 7) - 0x6b6d) ^ (*(short*)(ptr1 - 7) ^ 0x6b6d)) >>> 4) & 0x1;
        if(!v13) {
            v13 = *(short*)(ptr1 - 3) == 0x6666;
            v14 = *(short*)(ptr1 - 3) < 0x6666;
            v15 = __parity__((unsigned char)*(short*)(ptr1 - 3) - 102);
            v17 = *(unsigned short*)(ptr1 - 3) < 0x6666;
            v16 = (((*(short*)(ptr1 - 3) - 0x6666) ^ *(short*)(ptr1 - 3)) & (*(short*)(ptr1 - 3) ^ 0x6666)) < 0;
            v18 = (((*(short*)(ptr1 - 3) - 0x6666) ^ (*(short*)(ptr1 - 3) ^ 0x6666)) >>> 4) & 0x1;
            if(v13) {
                param1 = 115;
                v0 = 115;
                ptr0 = &v5;
                interrupt(128);
            }
            param1 = 87;
            v0 = 87;
            ptr0 = &v5;
            interrupt(128);
        }
        int v19 = 2;
        param1 = 5;
        v0 = 5;
        ptr0 = &v5;
        interrupt(128);
    }
    v12 = (unsigned int)v1 | ((unsigned int)v4 << 8);
    param1 = 1;
    v0 = 1;
    ptr0 = &v5;
    interrupt(128);
}

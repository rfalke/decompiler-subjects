
int start() {
    char v0;
    int v1 = 0x4b000;
    int v2 = "/dev/fb0";
    int v3 = "/dev/fb0";
    int v4 = 2;
    int v5 = 5;
    int v6 = 5;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_8048376(char* param0, int param1) {
    char v0;
    int v1;
    char v2;
    int v3;
    unsigned int v4;
    int* ptr0 = &v0;
    unsigned int v5 = v4;
    char* ptr1 = param0;
    int v6 = param1;
    int v7 = v3;
    int* ptr2 = &v0;
    char v8 = 1;
    char v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 0;
    int v13 = 0;
    int v14 = 10;
    do {
        --param0;
        ++v13;
        int v15 = 0;
        unsigned int v16 = v4 % 10;
        v4 /= 10;
        param1 = (unsigned int)((unsigned char)v16 | 0x30) | ((unsigned int)((v16 >>> 8) & 0xffffff) << 8);
        char v17 = (unsigned char)v16 | 0x30 ? 0: 1;
        char v18 = (param1 >>> 7) & 0x1;
        char v19 = __parity__((unsigned char)param1);
        char v20 = 0;
        char v21 = 0;
        *param0 = (unsigned char)param1;
        v2 = v4 ? 0: 1;
        char v22 = v4 >= 0x80000000;
        char v23 = __parity__((unsigned char)v4);
        char v24 = 0;
        char v25 = 0;
    }
    while(!v2);
    int v26 = v13;
    int v27 = 1;
    v13 = 4;
    int v28 = 4;
    int* ptr3 = &v1;
    interrupt(128);
}

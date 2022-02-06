
int start(unsigned int param0) {
    int* ptr0;
    unsigned int v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    void* ptr1;
    int v7;
    unsigned int v8 = v2;
    char v9 = v8 == 4;
    char v10 = (int)v8 < 4;
    char v11 = __parity__((unsigned char)v8 - 4);
    char v12 = v8 < 4;
    char v13 = (((v8 - 4) ^ v8) & (v8 ^ 0x4)) < 0;
    char v14 = (((v8 - 4) ^ (v8 ^ 0x4)) >>> 4) & 0x1;
    if(v9) {
        unsigned int v15 = param0;
        void* ptr2 = ptr1;
        int v16 = sub_80480E5();
        int v17 = v5;
        int v18 = v3;
        int v19 = sub_80480D1(v4, v6);
        gvar_8048211 = v6;
        int v20 = v7;
        int v21 = sub_80480E5();
        char v22 = (unsigned char)v5;
        v5 = (unsigned int)(unsigned char)(v5 >>> 8) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
        int v23 = (unsigned int)(unsigned char)v5 | ((unsigned int)v22 << 8) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
        int v24 = (unsigned int)(unsigned char)v5 | ((unsigned int)v22 << 8) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
        char v25 = (v24 >>> 16) & 0x1;
        char v26 = v13;
        char v27 = (unsigned int)(v23 * 0x10000) ? 0: 1;
        char v28 = (v23 >>> 15) & 0x1;
        char v29 = 1;
        unsigned int v30 = (unsigned int)2 | ((unsigned int)(((unsigned int)0 | ((unsigned int)(unsigned short)v23 << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
        gvar_804820D = (unsigned int)2 | ((unsigned int)(((unsigned int)0 | ((unsigned int)(unsigned short)v23 << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
        char v31 = (unsigned char)v17;
        int v32 = (unsigned int)(unsigned char)(v17 >>> 8) | ((unsigned int)((v17 >>> 8) & 0xffffff) << 8);
        int v33 = (unsigned int)(unsigned char)(v17 >>> 8) | ((unsigned int)v31 << 8) | ((unsigned int)(unsigned short)(v32 >>> 16) << 16);
        int v34 = (unsigned int)(unsigned char)(v17 >>> 8) | ((unsigned int)v31 << 8) | ((unsigned int)(unsigned short)(v32 >>> 16) << 16);
        v12 = (v34 >>> 16) & 0x1;
        v9 = (unsigned int)(v33 * 0x10000) ? 0: 1;
        v10 = (v33 >>> 15) & 0x1;
        v11 = 1;
        unsigned int v35 = (unsigned int)2 | ((unsigned int)(((unsigned int)0 | ((unsigned int)(unsigned short)v33 << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
        gvar_80481FD = (unsigned int)2 | ((unsigned int)(((unsigned int)0 | ((unsigned int)(unsigned short)v33 << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
        v7 = 6;
        v3 = 1;
        int* ptr3 = &ptr1;
        v1 = 1;
        param0 = 102;
        v0 = 102;
        ptr0 = &ptr1;
        interrupt(128);
    }
    v1 = 1;
    v2 = 1;
    v0 = 1;
    ptr0 = &param0;
    interrupt(128);
}

int sub_80480D1(int param0, int param1) {
    int result;
    char v0;
    int v1;
    do {
        result = sub_80480E5();
        param1 = (unsigned int)v0 | ((unsigned int)((param1 >>> 8) & 0xffffff) << 8);
    }
    while(v1 != 1);
    return result;
}

int sub_80480E5() {
    char* ptr0;
    int result = 0;
    int v0 = 0;
    while(1) {
        result = (unsigned int)*ptr0 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        ++ptr0;
        unsigned char v1 = (unsigned char)result;
        result = (unsigned int)((unsigned char)result - 48) | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        if(v1 < 48 || (unsigned char)result > 9) {
            return result;
        }
        v0 = v0 * 10 + result;
    }
    return result;
}

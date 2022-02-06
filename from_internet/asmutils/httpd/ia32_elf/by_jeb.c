
int start(int param0, unsigned int param1, char* param2) {
    int* ptr0;
    unsigned int v0;
    int v1;
    char v2;
    unsigned int v3;
    unsigned int v4 = v3;
    char v5 = v4 == 3;
    char v6 = (int)v4 < 3;
    char v7 = __parity__((unsigned char)v4 - 3);
    char v8 = v4 < 3;
    char v9 = (((v4 - 3) ^ v4) & (v4 ^ 0x3)) < 0;
    char v10 = (((v4 - 3) ^ (v4 ^ 0x3)) >>> 4) & 0x1;
    if(!v8) {
        int v11 = param0;
        gvar_8048410 = param1;
        char* ptr1 = param2;
        int v12 = 0;
        int v13 = 0;
        char v14 = 1;
        char v15 = 0;
        char v16 = 1;
        char v17 = 0;
        char v18 = 0;
        while(1) {
            v12 = (unsigned int)*ptr1 | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
            ++ptr1;
            unsigned char v19 = (unsigned char)v12;
            v12 = (unsigned int)((unsigned char)v12 - 48) | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
            char v20 = (unsigned char)v12 ? 0: 1;
            char v21 = (v12 >>> 7) & 0x1;
            char v22 = __parity__((unsigned char)v12);
            v10 = (((v19 ^ 0x30) ^ (unsigned char)v12) >>> 4) & 0x1;
            char v23 = v19 < 48;
            v2 = (((unsigned char)v12 ^ v19) & (v19 ^ 0x30)) < 0;
            if(v23) {
                break;
            }
            else {
                v20 = (unsigned char)v12 == 9;
                v21 = (unsigned char)v12 < 9;
                v22 = __parity__((unsigned char)v12 - 9);
                v23 = (unsigned char)v12 < 9;
                v2 = ((((unsigned char)v12 - 9) ^ (unsigned char)v12) & ((unsigned char)v12 ^ 0x9)) < 0;
                v10 = ((((unsigned char)v12 - 9) ^ ((unsigned char)v12 ^ 0x9)) >>> 4) & 0x1;
                if(!v23 && !v20) {
                    break;
                }
                else {
                    int v24 = v13;
                    int v25 = v13 * 10;
                    int v26 = v13 * 10;
                    v13 = v12 + v25;
                    char v27 = v13 ? 0: 1;
                    char v28 = v13 < 0;
                    char v29 = __parity__((unsigned char)v13);
                    char v30 = (((v12 ^ v26) ^ v13) >>> 4) & 0x1;
                    char v31 = __carry__(v12, v26);
                    char v32 = ((v13 ^ v26) & ~(v12 ^ v26)) < 0;
                }
            }
        }
        char v33 = (unsigned char)v13;
        v13 = (unsigned int)(unsigned char)(v13 >>> 8) | ((unsigned int)((v13 >>> 8) & 0xffffff) << 8);
        int v34 = (unsigned int)(unsigned char)v13 | ((unsigned int)v33 << 8) | ((unsigned int)(unsigned short)(v13 >>> 16) << 16);
        int v35 = (unsigned int)(unsigned char)v13 | ((unsigned int)v33 << 8) | ((unsigned int)(unsigned short)(v13 >>> 16) << 16);
        v8 = (v35 >>> 16) & 0x1;
        v9 = v2;
        v5 = (unsigned int)(v34 * 0x10000) ? 0: 1;
        v6 = (v34 >>> 15) & 0x1;
        v7 = 1;
        unsigned int v36 = (unsigned int)2 | ((unsigned int)(((unsigned int)0 | ((unsigned int)(unsigned short)v34 << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
        gvar_8048414 = (unsigned int)2 | ((unsigned int)(((unsigned int)0 | ((unsigned int)(unsigned short)v34 << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
        param2 = (char*)0x6;
        param1 = 1;
        param0 = 2;
        int* ptr2 = &param0;
        v1 = 1;
        v3 = 102;
        v0 = 102;
        ptr0 = &param0;
        interrupt(128);
    }
    v1 = 1;
    v3 = 1;
    v0 = 1;
    ptr0 = &param0;
    interrupt(128);
}

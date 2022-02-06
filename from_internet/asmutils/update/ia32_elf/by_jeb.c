
int start(int param0, char* param1) {
    int v0;
    char v1;
    unsigned int v2 = 30;
    unsigned int v3 = 30;
    int v4 = v0;
    int* ptr0 = &param0;
    int v5 = v4;
    char* ptr1 = (char*)(v4 - 1);
    char v6 = ptr1 ? 0: 1;
    char v7 = (int)ptr1 < 0;
    char v8 = __parity__((unsigned char)ptr1);
    char v9 = (((char*)~(int)ptr1 ^ ~v5) >>> 4) & 0x1;
    char v10 = (int)(int*)((int)(int*)((int)ptr1 ^ v5) & v5) < 0;
    if(!v6) {
        int v11 = param0;
        ptr1 = param1;
        ptr0 = &v1;
        int v12 = 0;
        unsigned int v13 = 0;
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
            v9 = (((v19 ^ 0x30) ^ (unsigned char)v12) >>> 4) & 0x1;
            char v23 = v19 < 48;
            char v24 = (((unsigned char)v12 ^ v19) & (v19 ^ 0x30)) < 0;
            if(v23) {
                break;
            }
            else {
                char v25 = (unsigned char)v12 == 9;
                char v26 = (unsigned char)v12 < 9;
                char v27 = __parity__((unsigned char)v12 - 9);
                char v28 = (unsigned char)v12 < 9;
                char v29 = ((((unsigned char)v12 - 9) ^ (unsigned char)v12) & ((unsigned char)v12 ^ 0x9)) < 0;
                v9 = ((((unsigned char)v12 - 9) ^ ((unsigned char)v12 ^ 0x9)) >>> 4) & 0x1;
                if(!v28 && !v25) {
                    break;
                }
                else {
                    unsigned int v30 = v13;
                    int v31 = v13 * 10;
                    v5 = v13 * 10;
                    v13 = (unsigned int)(v12 + v31);
                    char v32 = v13 ? 0: 1;
                    char v33 = v13 >= 0x80000000;
                    char v34 = __parity__((unsigned char)v13);
                    char v35 = (((v12 ^ v5) ^ v13) >>> 4) & 0x1;
                    char v36 = __carry__(v12, v5);
                    char v37 = ((v13 ^ v5) & ~(v12 ^ v5)) < 0;
                }
            }
        }
        unsigned int v38 = v13;
        v6 = v38 ? 0: 1;
        v7 = v38 >= 0x80000000;
        v8 = __parity__((unsigned char)v38);
        v10 = 0;
        char v39 = 0;
        if(!v6) {
            v3 = v38;
        }
    }
    gvar_804809B = v3;
    --ptr0;
    *ptr0 = 2;
    int v40 = *ptr0;
    ++ptr0;
    interrupt(128);
}


// Stale decompilation - Refresh this view to re-decompile this code
int start(int param0, void* param1, char* param2) {
    int* ptr0;
    int v0;
    int v1;
    int* ptr1;
    int v2;
    int v3;
    int v4;
    int v5 = sub_80482C1();
    int v6 = v3;
    int v7 = v3;
    int v8 = v6 - 1;
    char v9 = v8 ? 0: 1;
    char v10 = v8 < 0;
    char v11 = __parity__((unsigned char)v8);
    char v12 = ((~v8 ^ ~v7) >>> 4) & 0x1;
    char v13 = ((v8 ^ v7) & v7) < 0;
    if(v9) {
        v2 = 24;
        ptr1 = (int*)&gvar_804806F;
        v1 = 1;
        v3 = 4;
        v0 = 4;
        ptr0 = &param0;
        interrupt(128);
    }
    int v14 = param0;
    void* ptr2 = param1;
    int v15 = &gvar_8048315;
    int v16 = sub_804829F(v4, v2);
    char* ptr3 = param2;
    v14 = (unsigned int)23 | ((unsigned int)((v14 >>> 8) & 0xffffff) << 8);
    char* ptr4 = ptr3;
    v9 = ptr4 ? 0: 1;
    v10 = (int)ptr4 < 0;
    v11 = __parity__((unsigned char)ptr4);
    v13 = 0;
    char v17 = 0;
    if(!v9) {
        v14 = 0;
        int v18 = 0;
        char v19 = 1;
        char v20 = 0;
        char v21 = 1;
        char v22 = 0;
        char v23 = 0;
        while(1) {
            v18 = (unsigned int)*ptr4 | ((unsigned int)((v18 >>> 8) & 0xffffff) << 8);
            ++ptr4;
            unsigned char v24 = (unsigned char)v18;
            v18 = (unsigned int)((unsigned char)v18 - 48) | ((unsigned int)((v18 >>> 8) & 0xffffff) << 8);
            v9 = (unsigned char)v18 ? 0: 1;
            v10 = (v18 >>> 7) & 0x1;
            v11 = __parity__((unsigned char)v18);
            v12 = (((v24 ^ 0x30) ^ (unsigned char)v18) >>> 4) & 0x1;
            v17 = v24 < 48;
            v13 = (((unsigned char)v18 ^ v24) & (v24 ^ 0x30)) < 0;
            if(v17) {
                break;
            }
            else {
                v9 = (unsigned char)v18 == 9;
                v10 = (unsigned char)v18 < 9;
                v11 = __parity__((unsigned char)v18 - 9);
                v17 = (unsigned char)v18 < 9;
                v13 = ((((unsigned char)v18 - 9) ^ (unsigned char)v18) & ((unsigned char)v18 ^ 0x9)) < 0;
                v12 = ((((unsigned char)v18 - 9) ^ ((unsigned char)v18 ^ 0x9)) >>> 4) & 0x1;
                if(!v17 && !v9) {
                    break;
                }
                else {
                    int v25 = v14;
                    int v26 = v14 * 10;
                    v7 = v14 * 10;
                    v14 = v18 + v26;
                    char v27 = v14 ? 0: 1;
                    char v28 = v14 < 0;
                    char v29 = __parity__((unsigned char)v14);
                    char v30 = (((v18 ^ v7) ^ v14) >>> 4) & 0x1;
                    char v31 = __carry__(v18, v7);
                    char v32 = ((v14 ^ v7) & ~(v18 ^ v7)) < 0;
                }
            }
        }
    }
    gvar_8048315 = 2;
    *((char*)&gvar_8048315 + 3) = (unsigned char)v14;
    param2 = NULL;
    param0 = 2;
    ptr1 = &param0;
    v1 = 1;
    v3 = 102;
    v0 = 102;
    ptr0 = &param0;
    interrupt(128);
}

int sub_804829F() {
    int v0;
    int v1;
    int v2 = 0;
    int v3 = 0;
    while(1) {
        int v4 = 0;
        while(1) {
            v2 = (unsigned int)*(char*)(v3 + v0) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
            ++v3;
            unsigned char v5 = (unsigned char)v2;
            v2 = (unsigned int)((unsigned char)v2 - 48) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
            if(v5 < 48) {
                break;
            }
            else {
                v4 = v4 * 10 + v2;
            }
        }
        *(char*)(v1 + 4) = (unsigned char)v4;
    }
}

void sub_80482C0() {
}

int sub_80482C1() {
    char v0;
    int v1 = 134513445;
    int v2 = 21505;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    int v9 = 54;
    int v10 = 54;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_80482F3() {
    char v0;
    int v1 = 134513445;
    int v2 = 21506;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    int v9 = 54;
    int v10 = 54;
    int* ptr0 = &v0;
    interrupt(128);
}

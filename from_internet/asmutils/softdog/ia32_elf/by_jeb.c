
int start(int param0, char* param1) {
    int* ptr0;
    char v0;
    char* ptr1 = (char*)0xA;
    char* ptr2 = (char*)0xA;
    int* ptr3 = ptr0;
    int* ptr4 = &param0;
    int* ptr5 = ptr3;
    char* ptr6 = (char*)((char*)ptr3 - 1);
    char v1 = ptr6 ? 0: 1;
    char v2 = (int)ptr6 < 0;
    char v3 = __parity__((unsigned char)ptr6);
    char v4 = (((char*)~(int)ptr6 ^ (int*)~(int)ptr5) >>> 4) & 0x1;
    char v5 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr5) & (int)ptr5) < 0;
    if(!v1) {
        int v6 = param0;
        ptr6 = param1;
        ptr4 = &v0;
        int v7 = 0;
        char* ptr7 = NULL;
        char v8 = 1;
        char v9 = 0;
        char v10 = 1;
        char v11 = 0;
        char v12 = 0;
        while(1) {
            v7 = (unsigned int)*ptr6 | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
            ++ptr6;
            unsigned char v13 = (unsigned char)v7;
            v7 = (unsigned int)((unsigned char)v7 - 48) | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
            char v14 = (unsigned char)v7 ? 0: 1;
            char v15 = (v7 >>> 7) & 0x1;
            char v16 = __parity__((unsigned char)v7);
            v4 = (((v13 ^ 0x30) ^ (unsigned char)v7) >>> 4) & 0x1;
            char v17 = v13 < 48;
            char v18 = (((unsigned char)v7 ^ v13) & (v13 ^ 0x30)) < 0;
            if(v17) {
                break;
            }
            else {
                char v19 = (unsigned char)v7 == 9;
                char v20 = (unsigned char)v7 < 9;
                char v21 = __parity__((unsigned char)v7 - 9);
                char v22 = (unsigned char)v7 < 9;
                char v23 = ((((unsigned char)v7 - 9) ^ (unsigned char)v7) & ((unsigned char)v7 ^ 0x9)) < 0;
                v4 = ((((unsigned char)v7 - 9) ^ ((unsigned char)v7 ^ 0x9)) >>> 4) & 0x1;
                if(!v22 && !v19) {
                    break;
                }
                else {
                    char* ptr8 = ptr7;
                    int* ptr9 = (int*)((int)ptr7 * 10);
                    ptr5 = (int*)((int)ptr7 * 10);
                    ptr7 = (char*)(v7 + (int)ptr9);
                    char v24 = ptr7 ? 0: 1;
                    char v25 = (int)ptr7 < 0;
                    char v26 = __parity__((unsigned char)ptr7);
                    char v27 = (int*)((int)(int*)((int)(int*)((int)(int*)(v7 ^ (int)ptr5) ^ (int)ptr7) >>> 4) & 0x1);
                    char v28 = __carry__(v7, (int)ptr5);
                    char v29 = (int)(int*)((int)(int*)((int)ptr7 ^ (int)ptr5) & (int*)~(int)(int*)(v7 ^ (int)ptr5)) < 0;
                }
            }
        }
        char* ptr10 = ptr7;
        v1 = ptr10 ? 0: 1;
        v2 = (int)ptr10 < 0;
        v3 = __parity__((unsigned char)ptr10);
        v5 = 0;
        char v30 = 0;
        if(!v1) {
            param1 = (char*)0x3C;
            char* ptr11 = (char*)0x3C;
            ptr4 = &v0;
            v1 = ptr10 == (char*)0x3C;
            v2 = (int)ptr10 < (int)(char*)0x3C;
            v3 = __parity__((unsigned char)ptr10 - 60);
            v30 = ptr10 < (char*)0x3C;
            v5 = (int)(int*)((int)(int*)((int)(int*)(ptr10 - (char*)0x3C) ^ (int)ptr10) & (int)(int*)((int)ptr10 ^ (int)(char*)0x3C)) < 0;
            v4 = (int*)((int)(int*)((int)(int*)((int)(int*)(ptr10 - (char*)0x3C) ^ (int)(int*)((int)ptr10 ^ (int)(char*)0x3C)) >>> 4) & 0x1);
            if(!v30) {
                ptr10 = (char*)0x3C;
            }
            ptr2 = ptr10;
        }
    }
    gvar_80480CB = ptr2;
    --ptr4;
    *ptr4 = 1;
    int v31 = 1;
    int v32 = "/dev/watchdog";
    *ptr4 = 5;
    int v33 = *ptr4;
    ++ptr4;
    interrupt(128);
}

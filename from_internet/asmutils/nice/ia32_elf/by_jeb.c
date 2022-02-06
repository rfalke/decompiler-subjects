
char start(int param0, unsigned char* param1, unsigned char* param2) {
    unsigned int v0;
    int v1;
    int v2;
    unsigned int* ptr0;
    unsigned int v3;
    char v4;
    unsigned int v5 = v3;
    int* ptr1 = (int*)(v5 * 4 + (int)&param0);
    int* ptr2 = ptr1 + 1;
    char v6 = v5 == 1;
    char v7 = (int)v5 < 1;
    char v8 = __parity__((unsigned char)v5 - 1);
    char v9 = v5 < 1;
    char v10 = (((v5 - 1) ^ v5) & (v5 ^ 0x1)) < 0;
    char v11 = (((v5 - 1) ^ (v5 ^ 0x1)) >>> 4) & 0x1;
    if(!v6) {
        int v12 = param0;
        unsigned char* ptr3 = param1;
        ptr0 = &param2;
        unsigned char v13 = *ptr3;
        unsigned char* ptr4 = ptr3 + 1;
        char v14 = v13 == 45;
        char v15 = (char)v13 < 45;
        char v16 = __parity__(v13 - 45);
        char v17 = v13 < 45;
        char v18 = (((v13 - 45) ^ v13) & (v13 ^ 0x2d)) < 0;
        char v19 = (((v13 - 45) ^ (v13 ^ 0x2d)) >>> 4) & 0x1;
        if(v14) {
            v13 = *ptr4;
            int* ptr5 = (int*)(ptr4 + 1);
            ptr4 = (unsigned char*)((unsigned char*)ptr5 - 1);
            char v20 = v13 == 110;
            char v21 = (char)v13 < 110;
            char v22 = __parity__(v13 - 110);
            char v23 = v13 < 110;
            char v24 = (((v13 - 110) ^ v13) & (v13 ^ 0x6e)) < 0;
            v11 = (((v13 - 110) ^ (v13 ^ 0x6e)) >>> 4) & 0x1;
            if(v20) {
                ptr4 = param2;
                ptr0 = &v4;
            }
            --ptr0;
            *ptr0 = &loc_8048099;
            v2 = /*BAD_CALL!*/ sub_804804C();
        }
        else {
            unsigned int* ptr6 = &param2;
            ptr0 = &param1;
            char v25 = &param1 ? 0: 1;
            char v26 = (int)&param1 < 0;
            char v27 = __parity__((unsigned char)&v3 + 8);
            v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param2 ^ 0x4) ^ (int)&param1) >>> 4) & 0x1);
            char v28 = (unsigned int)&param2 < 4;
            char v29 = (int)(int*)((int)(int*)((int)&param1 ^ (int)&param2) & (int)(int*)((int)&param2 ^ 0x4)) < 0;
            v2 = 10;
        }
        int v30 = v2;
        v5 = 0;
        v1 = 0;
        v6 = 1;
        v7 = 0;
        v8 = 1;
        v10 = 0;
        v9 = 0;
        --ptr0;
        *ptr0 = 97;
        v0 = *ptr0;
        ++ptr0;
        interrupt(128);
    }
    v1 = 127;
    v3 = 1;
    v0 = 1;
    ptr0 = &param0;
    interrupt(128);
}

int sub_804804C() {
    char* ptr0;
    int v0 = 0;
    int result = 0;
    do {
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr0;
    }
    while((unsigned char)v0 <= 33);
    while((unsigned char)v0 > 47 && (unsigned char)v0 <= 58) {
        v0 = (unsigned int)((unsigned char)v0 - 48) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        result += v0;
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr0;
        if((unsigned char)v0 <= 47 || (unsigned char)v0 > 58) {
            return result;
        }
        result *= 10;
    }
    return result;
}

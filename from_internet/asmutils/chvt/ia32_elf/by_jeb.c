
int start(void* param0, void* param1) {
    void* ptr0;
    int v0;
    int v1;
    int v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    unsigned int* ptr1;
    unsigned int v9;
    char v10;
    char v11;
    char v12;
    void* ptr2;
    int v13 = "/dev/tty0";
    int v14 = /*BAD_CALL!*/ sub_8048068();
    int v15 = (unsigned int)((v14 >>> 8) & 0xffffff);
    if(!v11) {
        v13 = "/dev/console";
        ptr1 = &ptr2;
        int v16 = /*BAD_CALL!*/ sub_8048068();
        v8 = (unsigned char)v16;
        v15 = (unsigned int)((v16 >>> 8) & 0xffffff);
    }
    else {
        int v17 = "/dev/tty0";
        unsigned int v18 = v9;
        void* ptr3 = param0;
        ptr1 = &param1;
        do {
            v8 = *(char*)ptr3;
            ptr3 = (void*)((int)ptr3 + 1);
            v10 = v8 ? 0: 1;
            char v19 = v8 < 0;
            char v20 = __parity__(v8);
            char v21 = 0;
            char v22 = 0;
        }
        while(!v10);
        char v23 = *(int*)((int)ptr3 - 5) == 0x74766863;
        char v24 = *(int*)((int)ptr3 - 5) < 0x74766863;
        char v25 = __parity__((unsigned char)*(int*)((int)ptr3 - 5) - 99);
        char v26 = *(unsigned int*)((int)ptr3 - 5) < 0x74766863;
        char v27 = (((*(int*)((int)ptr3 - 5) - 0x74766863) ^ *(int*)((int)ptr3 - 5)) & (*(int*)((int)ptr3 - 5) ^ 0x74766863)) < 0;
        char v28 = (((*(int*)((int)ptr3 - 5) - 0x74766863) ^ (*(int*)((int)ptr3 - 5) ^ 0x74766863)) >>> 4) & 0x1;
        if(v23) {
            v11 = v18 == 2;
            v7 = (int)v18 < 2;
            v6 = __parity__((unsigned char)v18 - 2);
            v5 = v18 < 2;
            v4 = (((v18 - 2) ^ v18) & (v18 ^ 0x2)) < 0;
            v3 = (((v18 - 2) ^ (v18 ^ 0x2)) >>> 4) & 0x1;
            if(!v11) {
                goto loc_8048086;
            }
            else {
                void* ptr4 = param1;
                ptr3 = param1;
                v11 = ptr3 ? 0: 1;
                v7 = (int)ptr3 < 0;
                v6 = __parity__((unsigned char)ptr3);
                v4 = 0;
                v5 = 0;
                if(v11) {
                    goto loc_80480DF;
                }
                else {
                    int v29 = sub_804804C();
                    v2 = v29;
                    v1 = 22022;
                    v0 = "/dev/tty0";
                    ptr0 = (void*)0x36;
                    ptr1 = &v12;
                    interrupt(128);
                }
            }
        }
        int v30 = 0;
        char v31 = 1;
        char v32 = 0;
        char v33 = 1;
        char v34 = 0;
        v5 = 0;
        unsigned int v35 = v18;
        --v18;
        v11 = v18 ? 0: 1;
        v7 = v18 >= 0x80000000;
        v6 = __parity__((unsigned char)v18);
        v3 = ((~v18 ^ ~v35) >>> 4) & 0x1;
        v4 = (int)((v18 ^ v35) & v35) < 0;
        if(!v11) {
            void* ptr5 = param1;
            ptr3 = param1;
            v11 = ptr3 ? 0: 1;
            v7 = (int)ptr3 < 0;
            v6 = __parity__((unsigned char)ptr3);
            v4 = 0;
            v5 = 0;
            if(!v11) {
                ptr1 = &param1;
                v30 = sub_804804C();
            }
            else {
            loc_80480DF:
                v0 = 0;
                v11 = 1;
                v7 = 0;
                v6 = 1;
                v4 = 0;
                v5 = 0;
                ptr0 = (void*)0x1;
                ptr1 = &v12;
                interrupt(128);
            }
        }
        v2 = v30;
        v1 = 22024;
        v0 = "/dev/tty0";
        --ptr1;
        *ptr1 = 54;
        ptr0 = *ptr1;
        ++ptr1;
        interrupt(128);
    }
loc_8048086:
    --ptr1;
    *ptr1 = 1;
    v0 = 1;
    *ptr1 = 1;
    ptr0 = *ptr1;
    ++ptr1;
    interrupt(128);
}

int sub_804804C() {
    unsigned char* ptr0;
    int result = 0;
    int v0 = 10;
    int i = 0;
    for(i = (unsigned int)(*ptr0 - 48) | ((unsigned int)((i >>> 8) & 0xffffff) << 8); *ptr0 >= 48 && (unsigned char)(*ptr0 - 48) <= 9; i = (unsigned int)(*ptr0 - 48) | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
        result = ((unsigned int)((unsigned short)result * 10) | ((unsigned int)(unsigned short)(result >>> 16) << 16)) + i;
        ++ptr0;
    }
    return result;
}

int sub_8048068() {
    char v0;
    int v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 0;
    int v7 = 5;
    int v8 = 5;
    int* ptr0 = &v0;
    interrupt(128);
}

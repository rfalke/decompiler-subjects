
int start(int param0, void* param1) {
    void* ptr0;
    int v0;
    void* ptr1;
    char v1;
    int v2 = v0;
    int v3 = param0;
    void* ptr2 = param1;
    unsigned int* ptr3 = &ptr1;
    void* ptr4 = ptr2;
    char v4 = ptr4 ? 0: 1;
    char v5 = (int)ptr4 < 0;
    char v6 = __parity__((unsigned char)ptr4);
    char v7 = 0;
    char v8 = 0;
    if(!v4) {
        v4 = *(short*)ptr4 == 26925;
        v5 = *(short*)ptr4 < 26925;
        v6 = __parity__((unsigned char)*(short*)ptr4 - 45);
        v8 = *(unsigned short*)ptr4 < 26925;
        v7 = (((*(short*)ptr4 - 26925) ^ *(short*)ptr4) & (*(short*)ptr4 ^ 0x692d)) < 0;
        char v9 = (((*(short*)ptr4 - 26925) ^ (*(short*)ptr4 ^ 0x692d)) >>> 4) & 0x1;
        if(v4) {
            void* ptr5 = ptr1;
            ptr3 = &v1;
            ptr4 = ptr5;
            v4 = ptr4 ? 0: 1;
            v5 = (int)ptr4 < 0;
            v6 = __parity__((unsigned char)ptr4);
            v7 = 0;
            v8 = 0;
            if(!v4) {
                /*NO_RETURN*/ sub_8048374();
            }
        }
        else {
            int v10 = 2;
            ptr0 = (void*)0x5;
            ptr3 = &ptr1;
            interrupt(128);
        }
    }
    --ptr3;
    *ptr3 = 1;
    ptr4 = *ptr3;
    *ptr3 = 1;
    ptr0 = *ptr3;
    ++ptr3;
    interrupt(128);
}

void sub_8048374() {
    char* ptr0;
    int v0 = 10;
    char* ptr1 = ptr0;
    int v1 = 0;
    int v2 = 0;
    while(1) {
        v1 = (unsigned int)*ptr1 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
        ++ptr1;
        v1 = (unsigned int)((unsigned char)v1 - 48) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
        v2 = v2 * 10 + v1;
    }
}

int sub_804838B() {
    char v0;
    char* ptr0;
    unsigned int v1;
    int v2 = 0;
    unsigned int v3 = 10;
    unsigned int* ptr1 = &v0;
    do {
        ++v2;
        --ptr1;
        *ptr1 = v1 % 10;
        v1 /= 10;
    }
    while(v1);
    while(1) {
        char v4 = (unsigned char)*ptr1;
        ++ptr1;
        *ptr0 = v4 + 48;
        jump v2 != 1 ? &loc_804839A: &sub_80483A0;
    }
}

void sub_80483A0() {
}

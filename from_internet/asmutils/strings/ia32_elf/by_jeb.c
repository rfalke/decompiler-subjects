
int start(int param0, int param1, int param2) {
    int v0;
    char v1;
    int v2;
    unsigned short* ptr0;
    unsigned int* ptr1;
    int v3;
    int v4 = v3;
    int v5 = v3;
    unsigned short* ptr2 = (unsigned short*)(v4 - 1);
    char v6 = ptr2 ? 0: 1;
    char v7 = (int)ptr2 < 0;
    char v8 = __parity__((unsigned char)ptr2);
    char v9 = (((unsigned short*)~(int)ptr2 ^ ~v5) >>> 4) & 0x1;
    char v10 = (int)(int*)((int)(int*)((int)ptr2 ^ v5) & v5) < 0;
    if(!v6) {
        int v11 = param0;
        ptr1 = &param1;
        while(1) {
            ptr0 = *ptr1;
            ++ptr1;
            char v12 = ptr0 ? 0: 1;
            char v13 = (int)ptr0 < 0;
            char v14 = __parity__((unsigned char)ptr0);
            char v15 = 0;
            char v16 = 0;
            if(v12) {
                break;
            }
            else {
                char v17 = *ptr0 == 28205;
                char v18 = *ptr0 < 28205;
                char v19 = __parity__((unsigned char)*ptr0 - 45);
                char v20 = *ptr0 < 28205;
                char v21 = (((*ptr0 - 28205) ^ *ptr0) & (*ptr0 ^ 0x6e2d)) < 0;
                v9 = (((*ptr0 - 28205) ^ (*ptr0 ^ 0x6e2d)) >>> 4) & 0x1;
                if(v17) {
                    int v22 = *ptr1;
                    *ptr1 = &loc_8048067;
                    int v23 = /*BAD_CALL!*/ sub_8048106();
                    gvar_804811B = v23;
                }
                else {
                    v2 = 0;
                    v6 = 1;
                    v7 = 0;
                    v8 = 1;
                    v10 = 0;
                    v1 = 0;
                    --ptr1;
                    *ptr1 = 5;
                    v0 = *ptr1;
                    ++ptr1;
                    interrupt(128);
                }
            }
        }
        ptr0 = NULL;
        v6 = 1;
        v7 = 0;
        v8 = 1;
        v10 = 0;
        v1 = 0;
        --ptr1;
        *ptr1 = 1;
        v0 = *ptr1;
        ++ptr1;
        interrupt(128);
    }
    unsigned short* ptr3 = ptr2;
    int v24 = 0x1000;
    v2 = 134512931;
    ptr0 = ptr3;
    v3 = 3;
    v0 = 3;
    ptr1 = &param0;
    interrupt(128);
}

int sub_8048106() {
    char* ptr0;
    int v0 = 0;
    int result = 0;
    while(1) {
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr0;
        if(!(unsigned char)v0) {
            return result;
        }
        v0 = (unsigned int)((unsigned char)v0 - 48) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        result = result * 10 + v0;
    }
    return result;
}

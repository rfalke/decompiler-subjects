
int start(int param0, int param1, int param2, void* param3, int param4) {
    int v0;
    int v1;
    int v2;
    unsigned int v3;
    char v4;
    unsigned int v5 = v3;
    int* ptr0 = &param2;
    char v6 = v5 == 3;
    char v7 = (int)v5 < 3;
    char v8 = __parity__((unsigned char)v5 - 3);
    char v9 = v5 < 3;
    char v10 = (((v5 - 3) ^ v5) & (v5 ^ 0x3)) < 0;
    char v11 = (((v5 - 3) ^ (v5 ^ 0x3)) >>> 4) & 0x1;
    if(!v9) {
        int v12 = param2;
        ptr0 = &param3;
        void* ptr1 = param3;
        v2 = sub_8048073(param0, param1);
        v6 = v2 == -1;
        v7 = v2 < -1;
        v8 = __parity__((unsigned char)v2 - 0xff);
        v9 = (unsigned int)v2 < 0xffffffff;
        v10 = (((v2 + 1) ^ v2) & ~v2) < 0;
        v11 = (((v2 + 1) ^ ~v2) >>> 4) & 0x1;
        if(!v6) {
            param0 = v2;
            int v13 = param4;
            ptr0 = &v4;
            v1 = v13;
            v6 = v1 ? 0: 1;
            v7 = v1 < 0;
            v8 = __parity__((unsigned char)v1);
            v10 = 0;
            v9 = 0;
            if(!v6) {
                param4 = 15;
                v0 = 15;
                ptr0 = &v4;
                interrupt(128);
            }
        }
    }
    v1 = v2;
    --ptr0;
    *ptr0 = 1;
    v0 = *ptr0;
    ++ptr0;
    interrupt(128);
}

int sub_8048073(int param0, int param1) {
    char* ptr0;
    char* ptr1 = ptr0;
    int v0 = 0;
    int result = 0;
    int v1 = 8;
    v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
    while(*ptr0) {
        unsigned char v2 = (unsigned char)v0;
        v0 = (unsigned int)((unsigned char)v0 - 48) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        if(v2 < 48 || (unsigned char)v0 > 7) {
            return -1;
        }
        ptr1 = (unsigned int)(unsigned short)((unsigned int)(unsigned short)result >>> 13) | ((unsigned int)(unsigned short)(int*)((int)ptr1 >>> 16) << 16);
        result = ((unsigned int)((unsigned short)result * 8) | ((unsigned int)(unsigned short)(result >>> 16) << 16)) + v0;
        ++ptr0;
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
    }
    if(ptr1 == ptr0) {
        result = -1;
    }
    return result;
}

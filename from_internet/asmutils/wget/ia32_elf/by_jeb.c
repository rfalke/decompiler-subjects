
int start(int param0, int param1, int* param2) {
    int* ptr0;
    int* ptr1;
    int v0;
    int* ptr2;
    char v1;
    int* ptr3 = ptr2;
    int v2 = param0;
    int v3 = param1;
    int* ptr4 = param2;
    char v4 = ptr3 == 3;
    char v5 = (int)ptr3 < 3;
    char v6 = __parity__((unsigned char)ptr3 - 3);
    char v7 = (unsigned int)ptr3 < 3;
    char v8 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr3 - 3) ^ (int)ptr3) & (int)(int*)((int)ptr3 ^ 0x3)) < 0;
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr3 - 3) ^ (int)(int*)((int)ptr3 ^ 0x3)) >>> 4) & 0x1);
    if(v4) {
        param2 = (int*)0x6;
        param1 = 1;
        param0 = 2;
        ptr3 = &param0;
        v0 = 1;
        ptr2 = (int*)0x66;
        ptr1 = (int*)0x66;
        ptr0 = &param0;
        interrupt(128);
    }
    v0 = 0;
    v4 = 1;
    v5 = 0;
    v6 = 1;
    v8 = 0;
    v7 = 0;
    param2 = (int*)0x1;
    ptr1 = (int*)0x1;
    ptr0 = &v1;
    interrupt(128);
}

int sub_804817C() {
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

void sub_804819D() {
}

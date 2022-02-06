
int start() {
    char v0;
    int v1;
    int* ptr0 = &v0;
    int* ptr1 = &v0;
    char v2 = &v0 == 16;
    char v3 = (int)&v1 < 0;
    char v4 = __parity__((unsigned char)&v0 - 16);
    char v5 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x10) ^ (int)&v1) >>> 4) & 0x1);
    char v6 = (unsigned int)&v0 < 16;
    char v7 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x10)) < 0;
    v1 = 134512993;
    int v8 = 24;
    int v9 = 24;
    int* ptr2 = &v1;
    interrupt(128);
}

int sub_8048120(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    char* ptr0;
    int v3 = v1;
    int v4 = param0;
    int v5 = param1;
    int v6 = v2;
    int* ptr1 = &v0;
    int result = 0;
    int i = 0;
    for(i = (unsigned int)*ptr0 | ((unsigned int)((i >>> 8) & 0xffffff) << 8); *ptr0; i = (unsigned int)*ptr0 | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
        i = (unsigned int)((unsigned char)i & 0xcf) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
        result = result * 10 + i;
        ++ptr0;
    }
    return result;
}

int sub_804813C(int param0, int param1) {
    int v0;
    int v1;
    unsigned char* ptr0;
    int v2;
    int v3 = v2;
    int v4 = param0;
    int v5 = param1;
    int v6 = v1;
    int* ptr1 = &v0;
    unsigned int v7 = 200;
    unsigned char* ptr2 = ptr0;
    while(v7 != 0) {
        char v8 = *ptr2 == 0;
        ++ptr2;
        --v7;
        if(!~v8) {
            break;
        }
    }
    return 199 - v7;
}

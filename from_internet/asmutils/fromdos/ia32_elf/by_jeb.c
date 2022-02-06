
int start(char* param0) {
    int* ptr0;
    char* ptr1;
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int v5;
    char* ptr2;
    char v6;
    char v7;
    char* ptr3 = ptr2;
    char* ptr4 = ptr2;
    int* ptr5 = (int*)(ptr3 - 1);
    char v8 = ptr5 ? 0: 1;
    char v9 = (int)ptr5 < 0;
    char v10 = __parity__((unsigned char)ptr5);
    char v11 = (((int*)~(int)ptr5 ^ (char*)~(int)ptr4) >>> 4) & 0x1;
    char v12 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr4) & (int)ptr4) < 0;
    if(v8) {
        char* ptr6 = param0;
        do {
            ptr5 = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)ptr5 >>> 8) & 0xffffff) << 8);
            ++ptr6;
            v6 = (unsigned char)ptr5 ? 0: 1;
            char v13 = (int*)((int)(int*)((int)ptr5 >>> 7) & 0x1);
            char v14 = __parity__((unsigned char)ptr5);
            char v15 = 0;
            char v16 = 0;
        }
        while(!v6);
        int v17 = &loc_80480A4;
        int v18 = 1;
        v5 = 0;
        v4 = 1;
        v3 = 0;
        v2 = 1;
        v1 = 0;
        v0 = 0;
        param0 = (char*)0x3;
        ptr1 = (char*)0x3;
        ptr0 = &v7;
        interrupt(128);
    }
    v5 = 0;
    v4 = 1;
    v3 = 0;
    v2 = 1;
    v1 = 0;
    v0 = 0;
    ptr2 = (char*)0x1;
    ptr1 = (char*)0x1;
    ptr0 = &param0;
    interrupt(128);
}

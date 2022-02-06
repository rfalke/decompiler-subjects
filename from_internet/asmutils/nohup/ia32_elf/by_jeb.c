
int start(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    char v3;
    int v4 = v2;
    int* ptr1 = (int*)(v4 * 4 + (int)&param0);
    int* ptr2 = ptr1 + 1;
    int* ptr3 = &param0;
    char v5 = &v3 ? 0: 1;
    char v6 = (int)&v3 < 0;
    char v7 = __parity__((unsigned char)&v2 + 8);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x4) ^ (int)&v3) >>> 4) & 0x1);
    char v9 = (unsigned int)&param0 >= 0xfffffffc;
    char v10 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&v3) & (int*)~(int)(int*)((int)&param0 ^ 0x4)) < 0;
    int v11 = v4;
    int v12 = v4 - 1;
    char v13 = v12 ? 0: 1;
    char v14 = v12 < 0;
    char v15 = __parity__((unsigned char)v12);
    char v16 = ((~v12 ^ ~v11) >>> 4) & 0x1;
    char v17 = ((v12 ^ v11) & v11) < 0;
    if(!v13) {
        v12 = 1;
        v1 = 1;
        param0 = 48;
        v0 = 48;
        ptr0 = &v3;
        interrupt(128);
    }
    v1 = 1;
    param0 = 1;
    v0 = 1;
    ptr0 = &v3;
    interrupt(128);
}

int sub_8048054() {
    int v0;
    int v1 = v0;
    int v2 = 134513015;
    int v3 = 21505;
    int v4 = v0;
    int v5 = 54;
    int v6 = 54;
    int* ptr0 = &v1;
    interrupt(128);
}

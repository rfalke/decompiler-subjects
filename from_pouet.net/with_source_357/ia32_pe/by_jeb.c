
int sub_40722F(int param0, short param1) {
    char v0;
    int v1;
    unsigned int* ptr0;
    int* ptr1 = &v1;
    int* ptr2 = &v1;
    int v2 = 0;
    int v3 = 0x16eeffb;
    int v4 = 1979669138;
    *((unsigned int)((unsigned char)(param0 >>> 8) | (unsigned char)ptr0) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8)) = (int*)((int)((unsigned int)((unsigned char)(param0 >>> 8) | (unsigned char)ptr0) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8)) + *((unsigned int)((unsigned char)(param0 >>> 8) | (unsigned char)ptr0) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8)));
    unsigned char v5 = (unsigned char)((unsigned int)((unsigned char)(param0 >>> 8) | (unsigned char)ptr0) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8));
    ptr0 = (unsigned int)((unsigned char)((unsigned int)((unsigned char)(param0 >>> 8) | (unsigned char)ptr0) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8)) + 4) | ((unsigned int)((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) & 0xffffff) << 8);
    char v6 = (unsigned char)ptr0 ? 0: 1;
    char v7 = (int*)((int)(int*)((int)ptr0 >>> 7) & 0x1);
    char v8 = __parity__((unsigned char)ptr0);
    char v9 = (((v5 ^ 0x4) ^ (unsigned char)ptr0) >>> 4) & 0x1;
    char v10 = v5 >= 252;
    char v11 = (((unsigned char)ptr0 ^ v5) & ~(v5 ^ 0x4)) < 0;
    int v12 = v4;
    unsigned char v13 = (unsigned char)ptr0;
    ptr0 = (unsigned int)((unsigned char)ptr0 - ((unsigned char)v10 + 137)) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
    char v14 = (unsigned char)ptr0 ? 0: 1;
    char v15 = (int*)((int)(int*)((int)ptr0 >>> 7) & 0x1);
    char v16 = __parity__((unsigned char)ptr0);
    char v17 = (((v13 ^ 0x89) ^ (unsigned char)ptr0) >>> 4) & 0x1;
    char v18 = v13 < 137;
    char v19 = (((unsigned char)ptr0 ^ v13) & (v13 ^ 0x89)) < 0;
    char v21 = read_IO(param1);
    int v20 = v2;
    int* ptr3 = ptr2;
    int* ptr4 = &v0;
    jump ptr3;
}

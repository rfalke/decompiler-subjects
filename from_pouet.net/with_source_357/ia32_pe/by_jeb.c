
char sub_40722F(int param0, short param1) {
    int v0;
    unsigned int* ptr0;
    int* ptr1 = &v0;
    int v1 = 0;
    int v2 = 1979669138;
    *((unsigned int)((unsigned char)(param0 >>> 8) | (unsigned char)ptr0) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8)) = (int*)((int)((unsigned int)((unsigned char)(param0 >>> 8) | (unsigned char)ptr0) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8)) + *((unsigned int)((unsigned char)(param0 >>> 8) | (unsigned char)ptr0) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8)));
    char v3 = in(((unsigned char)(param0 >>> 8) | (unsigned char)ptr0) + 123 - (unsigned char)((unsigned char)((unsigned char)(param0 >>> 8) | (unsigned char)ptr0) >= 252), param1);
    jump ptr1;
}

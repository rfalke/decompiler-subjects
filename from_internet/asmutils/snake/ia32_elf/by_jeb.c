
int sub_804804C(char* param0) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4 = 0;
    int v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 1;
    char v9 = 0;
    char v10 = 0;
    *param0 = 0;
    int* ptr0 = &v0;
    int v11 = v2;
    char* ptr1 = param0;
    int v12 = 0;
    int v13 = 0;
    int* ptr2 = &v0;
    int* ptr3 = &v1;
    int v14 = &gvar_804B775;
    char v15 = gvar_804B775 & 0x1;
    gvar_804B775 = (unsigned int)((gvar_804B775 & 0xfffffffe) | 0x1);
    int v16 = 1;
    int v17 = 0;
    char v18 = 1;
    char v19 = 0;
    char v20 = 1;
    char v21 = 0;
    char v22 = 0;
    int* ptr4 = (int*)(v3 - 36);
    *ptr4 = 0;
    *(ptr4 + 1) = 0;
    char v23 = 1;
    char v24 = 0;
    char v25 = 1;
    char v26 = 0;
    char v27 = 0;
    int v28 = 142;
    interrupt(128);
}

int sub_8048083() {
    int* ptr0;
    int v0;
    int v1 = (unsigned int)((unsigned char)v0 / 78) | ((unsigned int)((unsigned char)v0 % 78) << 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    *ptr0 = ((unsigned int)(unsigned char)((((unsigned int)((unsigned char)v0 / 78) | ((unsigned int)((unsigned char)v0 % 78) << 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)) + 1) >>> 24) | ((unsigned int)(unsigned char)((((unsigned int)((unsigned char)v0 / 78) | ((unsigned int)((unsigned char)v0 % 78) << 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)) + 1) >>> 16) << 8) | ((unsigned int)(((unsigned char)v0 / 78 + 1) / 10) << 16) | ((unsigned int)(((unsigned char)v0 / 78 + 1) % 10) << 24)) + 0x30305b1b;
    int result = ((unsigned int)(unsigned char)((((unsigned int)(unsigned char)(v1 >>> 8) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8)) + 1) >>> 16) | ((unsigned int)((unsigned char)((unsigned char)(v1 >>> 8) + 1) / 10) << 8) | ((unsigned int)((unsigned char)((unsigned char)(v1 >>> 8) + 1) % 10) << 16) | ((unsigned int)0 << 24)) + 1211117627;
    *(ptr0 + 1) = ((unsigned int)(unsigned char)((((unsigned int)(unsigned char)(v1 >>> 8) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8)) + 1) >>> 16) | ((unsigned int)((unsigned char)((unsigned char)(v1 >>> 8) + 1) / 10) << 8) | ((unsigned int)((unsigned char)((unsigned char)(v1 >>> 8) + 1) % 10) << 16) | ((unsigned int)0 << 24)) + 1211117627;
    return result;
}

int sub_80480A5(int param0, int param1) {
    int v0;
    int v1;
    char* ptr0;
    int v2 = param1;
    *(char*)(v0 + v1 + 44) = (unsigned char)param1;
    sub_8048083();
    char v3 = a_xqmxxltqjqvkuw[(unsigned int)(unsigned char)v2];
    *ptr0 = a_xqmxxltqjqvkuw[(unsigned int)(unsigned char)v2];
    return (int)v3;
}

int sub_80480BA() {
    char v0;
    int* ptr0;
    int v1 = 0x34325b1b;
    *ptr0 = 0x34325b1b;
    int* ptr1 = ptr0 + 1;
    int v2 = 0xf48303b;
    *ptr1 = 0xf48303b;
    int* ptr2 = ptr1 + 1;
    int* ptr3 = ptr1 + 1;
    int v3 = 134516156;
    int v4 = 134516156;
    int* ptr4 = ptr3;
    int* ptr5 = ptr3 - 0x201236f;
    char v5 = ptr5 ? 0: 1;
    char v6 = (int)ptr5 < 0;
    char v7 = __parity__((unsigned char)ptr5);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 ^ 0x8048dbc) ^ (int)ptr5) >>> 4) & 0x1);
    char v9 = (unsigned int)ptr4 < 134516156;
    char v10 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr4) & (int)(int*)((int)ptr4 ^ 0x8048dbc)) < 0;
    int v11 = 1;
    int v12 = 4;
    int v13 = 4;
    int* ptr6 = &v0;
    interrupt(128);
}


int sub_41D3B7(int param0, int param1, int param2, char* param3) {
    int v0;
    short v1;
    char* ptr0;
    unsigned char* ptr1;
    int v2;
    unsigned int* ptr2;
    char* ptr3;
    char* ptr4 = ptr0;
    v1 = outsb(v1, *ptr1);
    char* ptr5 = ptr4;
    if((v0 - 1)) {
        char v3 = (unsigned char)(v2 >>> 8);
        v2 = (unsigned int)(unsigned char)v2 | ((unsigned int)((unsigned char)(v2 >>> 8) + (unsigned char)ptr3) << 8) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
        *ptr5 = *ptr5 - ((unsigned char)__carry__((unsigned char)ptr3, v3) + (unsigned char)v2);
        char v4 = (unsigned char)(int*)((int)ptr5 >>> 8) < *(unsigned char*)((unsigned char*)ptr2 - 0x68d33d37);
        ptr2 = (unsigned int*)((char*)ptr2 - 1);
        ptr3 = in(ptr3, (unsigned short)ptr2);
        char v5 = *ptr3;
        *ptr3 = (unsigned char)ptr3 + (unsigned char)v4 + *ptr3;
        unsigned int v6 = *ptr2;
        *ptr2 = (unsigned int)__carry__((unsigned char)ptr3, v5) + *ptr2 + 0x1175d15d;
        *(char*)(ptr1 + 433034221) = (unsigned char)(v6 >= 4002033315) + *(char*)(ptr1 + 433034221) + 6;
    }
    char v7 = *(char*)(v2 + 1976655122);
    *(char*)(v2 + 1976655122) = (unsigned char)ptr3 + *(char*)(v2 + 1976655122);
    int v8 = *(int*)(ptr3 - 812388970);
    *(unsigned int*)(ptr3 - 812388970) = (int*)((unsigned int)__carry__((unsigned char)ptr3, v7) + *(int*)(ptr3 - 812388970) + (int)ptr3);
    *(int**)ptr1 = (int*)(*(int*)ptr1 - (int)(int*)((unsigned int)(char*)__carry__((int)ptr3, v8) + (int)ptr3));
    jump param3;
}

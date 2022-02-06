
char start(char* param0) {
    int v0;
    char v1;
    char v2;
    int v3 = v0;
    char* ptr0 = param0;
    do {
        char v4 = *ptr0;
        ++ptr0;
        v1 = v4 ? 0: 1;
        char v5 = v4 < 0;
        char v6 = __parity__(v4);
        char v7 = 0;
        char v8 = 0;
    }
    while(!v1);
    char v9 = *(ptr0 - 8) == 105;
    char v10 = *(ptr0 - 8) < 105;
    char v11 = __parity__(*(ptr0 - 8) - 105);
    char v12 = *(unsigned char*)(ptr0 - 8) < 105;
    char v13 = (((*(ptr0 - 8) - 105) ^ *(ptr0 - 8)) & (*(ptr0 - 8) ^ 0x69)) < 0;
    char v14 = (((*(ptr0 - 8) - 105) ^ (*(ptr0 - 8) ^ 0x69)) >>> 4) & 0x1;
    int v15 = v9 ? &gvar_80480AB: 134512752;
    v15();
    param0 = (char*)0x1;
    char* ptr1 = (char*)0x1;
    int* ptr2 = &v2;
    interrupt(128);
}

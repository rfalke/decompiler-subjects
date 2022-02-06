
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
    int v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 1;
    char v13 = 0;
    char v14 = 0;
    char v15 = *(ptr0 - 5);
    *(ptr0 - 5) = *(ptr0 - 5) >>> 1;
    char v16 = v15 & 0x1;
    char v17 = v15 < 0;
    char v18 = *(ptr0 - 5) ? 0: 1;
    char v19 = *(ptr0 - 5) < 0;
    char v20 = __parity__(*(ptr0 - 5));
    long long v21 = (unsigned long long)__rol__((unsigned long long)0 | ((unsigned long long)v16 << 32), 1);
    int v22 = (unsigned int)v21;
    char v23 = (v21 >>> 32L) & 0x1L;
    char v24 = v22 < 0 ^ v23;
    param0 = (char*)0x1;
    char* ptr1 = (char*)0x1;
    int* ptr2 = &v2;
    interrupt(128);
}

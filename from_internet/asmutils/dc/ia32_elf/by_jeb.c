
int sub_8048117() {
    unsigned char v0;
    unsigned int v1;
    int v2;
    char v3;
    int counter = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    unsigned int v9 = 10;
    unsigned int v10 = 10;
    unsigned int* ptr0 = &v2;
    char* ptr1 = (char*)&gvar_80483DA;
    do {
        int v11 = 0;
        unsigned int v12 = v1 % 10;
        unsigned int v13 = v1 / 10;
        unsigned int v14 = v12;
        --ptr0;
        *ptr0 = v14;
        ++counter;
        v1 = v13;
        v3 = v1 ? 0: 1;
        char v15 = v1 >= 0x80000000;
        char v16 = __parity__((unsigned char)v1);
        char v17 = 0;
        char v18 = 0;
    }
    while(!v3);
    int v19 = counter;
    int v20 = counter;
    int v21 = v19 + 1;
    char v22 = v21 ? 0: 1;
    char v23 = v21 < 0;
    char v24 = __parity__((unsigned char)v21);
    char v25 = (((v20 ^ 0x1) ^ v21) >>> 4) & 0x1;
    char v26 = ((v21 ^ v20) & ~(v20 ^ 0x1)) < 0;
    do {
        v0 = (unsigned char)*ptr0;
        int v27 = (unsigned int)((*ptr0 >>> 8) & 0xffffff);
        ++ptr0;
        unsigned char v28 = v0;
        v0 += 48;
        char v29 = v0 ? 0: 1;
        char v30 = (char)v0 < 0;
        char v31 = __parity__(v0);
        char v32 = (((v28 ^ 0x30) ^ v0) >>> 4) & 0x1;
        char v33 = v28 >= 208;
        char v34 = (char)((v0 ^ v28) & ~(v28 ^ 0x30)) < 0;
        *ptr1 = v0;
        ++ptr1;
        --counter;
    }
    while(counter);
    v0 = 10;
    *ptr1 = 10;
    int* ptr2 = (int*)(ptr1 + 1);
    int v35 = &gvar_80483DA;
    --ptr0;
    *ptr0 = 1;
    int v36 = 1;
    *ptr0 = 4;
    int v37 = *ptr0;
    ++ptr0;
    interrupt(128);
}

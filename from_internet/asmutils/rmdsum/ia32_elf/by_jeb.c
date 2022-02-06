
int start(unsigned int param0, unsigned int param1) {
    int* ptr0;
    unsigned int v0;
    unsigned int v1;
    int v2;
    char v3;
    int v4;
    int v5;
    int v6 = sub_80483E9(v4, v5);
    int v7 = 0;
    int v8 = 0;
    char v9 = 1;
    char v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 0;
    int v14 = v2;
    int v15 = v2;
    int v16 = v14 - 1;
    char v17 = v16 ? 0: 1;
    char v18 = v16 < 0;
    char v19 = __parity__((unsigned char)v16);
    char v20 = ((~v16 ^ ~v15) >>> 4) & 0x1;
    char v21 = ((v16 ^ v15) & v15) < 0;
    unsigned int v22 = param0;
    if(!v17) {
        unsigned int v23 = param1;
        v1 = param1;
        v17 = v1 ? 0: 1;
        v18 = v1 >= 0x80000000;
        v19 = __parity__((unsigned char)v1);
        v21 = 0;
        v13 = 0;
        if(!v17) {
            gvar_8050BC0 = v1;
            v4 = 0;
            v17 = 1;
            v18 = 0;
            v19 = 1;
            v21 = 0;
            v13 = 0;
            param1 = 5;
            v0 = 5;
            ptr0 = &v3;
            interrupt(128);
        }
        param1 = 1;
        v0 = 1;
        ptr0 = &v3;
        interrupt(128);
    }
    v4 = &gvar_8048B80;
    v5 = 0x2000;
    v1 = 0;
    param0 = 3;
    v0 = 3;
    ptr0 = &param1;
    interrupt(128);
}

int sub_80482F3(int param0, int param1) {
    unsigned int v0;
    int v1;
    unsigned int v2;
    char v3;
    int v4;
    int v5;
    int result = v4;
    int v6 = param0;
    int v7 = param1;
    int v8 = v5;
    int* ptr0 = &v1;
    int* ptr1 = &v2;
    int* ptr2 = (int*)&gvar_80484E4;
    int* ptr3 = &v3;
    int* ptr4 = (int*)&gvar_80484E4;
    void* ptr5 = (void*)0x5;
    void* ptr6 = (void*)0x5;
    while(ptr5 != 0) {
        *ptr3 = *ptr2;
        ++ptr2;
        ++ptr3;
        ptr5 = (void*)((int)ptr5 - 1);
    }
    void* ptr7 = ptr6;
    int* ptr8 = ptr4;
    while(ptr7 != 0) {
        *ptr3 = *ptr8;
        ++ptr8;
        ++ptr3;
        ptr7 = (void*)((int)ptr7 - 1);
    }
    unsigned int v9 = 2;
    do {
        v0 = v9;
        int* ptr9 = (int*)0x10;
        do {
            ptr4 = ptr9;
            int v10 = *(ptr8 + 18)((int)ptr9);
            *(ptr1 - 10) = *(ptr1 - 6) + v10;
            *(ptr1 - 8) = __rol__(*(ptr1 - 8), 10);
            int v11 = *(ptr8 + 18)();
            *(ptr1 - 6) = *(ptr1 - 7) + v11;
            *(ptr1 - 9) = __rol__(*(ptr1 - 9), 10);
            int v12 = *(ptr8 + 18)();
            *(ptr1 - 7) = *(ptr1 - 8) + v12;
            *(ptr1 - 10) = __rol__(*(ptr1 - 10), 10);
            int v13 = *(ptr8 + 18)();
            *(ptr1 - 8) = *(ptr1 - 9) + v13;
            *(ptr1 - 6) = __rol__(*(ptr1 - 6), 10);
            int v14 = *(ptr8 + 18)();
            *(ptr1 - 9) = *(ptr1 - 10) + v14;
            *(ptr1 - 7) = __rol__(*(ptr1 - 7), 10);
            ptr9 = (int*)((char*)ptr4 - 1);
        }
        while(ptr9);
        ptr1 += 5;
        v9 = v0 - 1;
    }
    while(v9);
    v0 = (unsigned int)(*(ptr1 - 18) + *(ptr1 - 12) + gvar_80484E8);
    gvar_80484E8 = (unsigned int)(*(ptr1 - 17) + *(ptr1 - 11) + gvar_80484EC);
    gvar_80484EC = (unsigned int)(*(ptr1 - 16) + *(ptr1 - 15) + gvar_80484F0);
    gvar_80484F0 = (unsigned int)(*(ptr1 - 20) + *(ptr1 - 14) + gvar_80484F4);
    gvar_80484F4 = (unsigned int)(*(ptr1 - 19) + *(ptr1 - 13) + gvar_80484E4);
    gvar_80484E4 = v0;
    return result;
}

int sub_80483E9(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int result = v2;
    int v3 = param0;
    int v4 = param1;
    int v5 = v1;
    int* ptr0 = &v0;
    gvar_80484E4 = 1732584193;
    gvar_80484E8 = 4023233417;
    gvar_80484EC = 2562383102;
    gvar_80484F0 = 271733878;
    gvar_80484F4 = 3285377520;
    gvar_80484F8 = 0;
    gvar_80484FC = 0;
    int* ptr1 = (int*)&gvar_8048500;
    int v6 = 16;
    do {
        *ptr1 = 0;
        ++ptr1;
        --v6;
    }
    while(v6 == 0);
    int* ptr2 = (int*)&loc_8048126;
    int v7 = 10;
    do {
        int v8 = v7;
        int v9 = *ptr2;
        int v10 = *(ptr2 + 1);
        ptr2 += 2;
        int v11 = 16;
        int counter = 16;
        do {
            short v12 = *(short*)ptr2;
            ptr2 = (int*)((char*)ptr2 + 2);
            *ptr1 = v9;
            *(ptr1 + 1) = v10;
            *(short*)(ptr1 + 2) = v12;
            ptr1 = (int*)((char*)ptr1 + 10);
            --counter;
        }
        while(counter);
        v7 = v8 - 1;
    }
    while(v7);
    return result;
}

int sub_8048440(int param0, int param1) {
    int result;
    int v0;
    int v1 = v0;
    int v2 = param0 >>> 6;
    if(v2) {
        do {
            sub_80482F3(v2, param0);
            v1 += 64;
            v2 = param0 - 1;
        }
        while(v2);
    }
    unsigned int v3 = gvar_80484F8 + param0;
    if((int)(v3 + param0) < (int)v3) {
        ++gvar_80484FC;
    }
    gvar_80484F8 = v3;
    return result;
}

int sub_804846A(int param0, int param1) {
    int v0;
    int* ptr0;
    int v1;
    int v2;
    int result = v1;
    int v3 = param0;
    int v4 = param1;
    int v5 = v2;
    int* ptr1 = &v0;
    int* ptr2 = ptr0;
    unsigned int v6 = gvar_80484F8;
    unsigned int v7 = gvar_80484F8;
    char* ptr3 = (char*)((v6 & 0x1fc0) + &gvar_8048B80);
    int v8 = v6 & 0x3f;
    char* ptr4 = (char*)&gvar_8048500;
    int* ptr5 = (int*)&gvar_8048500;
    while(v8 != 0) {
        *ptr4 = *ptr3;
        ++ptr3;
        ++ptr4;
        --v8;
    }
    int v9 = (v6 & 0x3) * 8 + 7;
    int* ptr6 = ptr5;
    *(int*)(((v6 >>> 2) & 0xf) * 4 + (int)ptr6) = (1 << (v9 & 0x1f)) ^ *(int*)(((v6 >>> 2) & 0xf) * 4 + (int)ptr6);
    if((int)(v6 & 0x3f) > 55) {
        sub_80482F3(v9, (v6 >>> 2) & 0xf);
        ptr5 = ptr6;
        int v10 = 16;
        v9 = 16;
        do {
            *ptr6 = 0;
            ++ptr6;
            --v9;
        }
        while(v9 == 0);
        ptr6 = ptr5;
    }
    *(ptr6 + 14) = v7 * 8;
    *(ptr6 + 15) = gvar_80484FC >>> 29;
    sub_80482F3(v9, (v6 >>> 2) & 0xf);
    int* ptr7 = ptr2;
    ptr2 = (int*)0x5;
    int* ptr8 = (int*)0x5;
    int* ptr9 = (int*)&gvar_80484E4;
    while(ptr8 != 0) {
        *ptr7 = *ptr9;
        ++ptr9;
        ++ptr7;
        ptr8 = (int*)((char*)ptr8 - 1);
    }
    return result;
}

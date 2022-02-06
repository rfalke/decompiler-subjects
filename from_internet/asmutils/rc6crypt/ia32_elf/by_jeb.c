
int start(void* param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    int v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    unsigned char v9;
    unsigned int v10;
    char v11;
    unsigned int v12 = v10;
    int* ptr0 = &param0;
    char v13 = v12 == 4;
    char v14 = (int)v12 < 4;
    char v15 = __parity__((unsigned char)v12 - 4);
    char v16 = v12 < 4;
    char v17 = (((v12 - 4) ^ v12) & (v12 ^ 0x4)) < 0;
    char v18 = (((v12 - 4) ^ (v12 ^ 0x4)) >>> 4) & 0x1;
    if(v16) {
        goto loc_8048101;
    }
    else {
        void* ptr1 = param0;
        int v19 = param1;
        ptr0 = &param2;
        v9 = *(unsigned char*)v19;
        gvar_8055014 = *(unsigned char*)v19;
        v8 = v9 == 100;
        char v20 = (char)v9 < 100;
        char v21 = __parity__(v9 - 100);
        char v22 = v9 < 100;
        char v23 = (((v9 - 100) ^ v9) & (v9 ^ 0x64)) < 0;
        char v24 = (((v9 - 100) ^ (v9 ^ 0x64)) >>> 4) & 0x1;
    }
    if(!v8) {
        char v25 = v9 == 101;
        char v26 = (char)v9 < 101;
        char v27 = __parity__(v9 - 101);
        char v28 = v9 < 101;
        char v29 = (((v9 - 101) ^ v9) & (v9 ^ 0x65)) < 0;
        v18 = (((v9 - 101) ^ (v9 ^ 0x65)) >>> 4) & 0x1;
        if(!v25) {
        loc_8048101:
            v7 = 1;
            v6 = 0;
            v5 = 1;
            v4 = 0;
            v3 = 0;
            int v30 = 144;
            v2 = &gvar_804804C;
            --ptr0;
            *ptr0 = 1;
            v1 = *ptr0;
            *ptr0 = 4;
            v0 = *ptr0;
            ++ptr0;
            interrupt(128);
        }
    }
    int v31 = param2;
    int v32 = sub_80482B7(v31);
    int* ptr2 = &param2;
    char v33 = &param3 ? 0: 1;
    char v34 = (int)&param3 < 0;
    char v35 = __parity__((unsigned char)&v10 + 16);
    char v36 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param2 ^ 0x4) ^ (int)&param3) >>> 4) & 0x1);
    char v37 = (unsigned int)&param2 >= 0xfffffffc;
    char v38 = (int)(int*)((int)(int*)((int)&param3 ^ (int)&param2) & (int*)~(int)(int*)((int)&param2 ^ 0x4)) < 0;
    param2 = 0x100;
    param1 = &gvar_8055041;
    int v39 = sub_8048329(&gvar_8055041, 0x100);
    int* ptr3 = &param1;
    char v40 = &param3 ? 0: 1;
    char v41 = (int)&param3 < 0;
    char v42 = __parity__((unsigned char)&v10 + 16);
    v18 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param1 ^ 0x8) ^ (int)&param3) >>> 4) & 0x1);
    char v43 = (unsigned int)&param1 >= 0xfffffff8;
    char v44 = (int)(int*)((int)(int*)((int)&param3 ^ (int)&param1) & (int*)~(int)(int*)((int)&param1 ^ 0x8)) < 0;
    v1 = param3;
    v7 = v1 ? 0: 1;
    v6 = v1 < 0;
    v5 = __parity__((unsigned char)v1);
    v4 = 0;
    v3 = 0;
    if(!v7) {
        v2 = 2;
        param3 = 5;
        v0 = 5;
        ptr0 = &v11;
        interrupt(128);
    }
    v1 = 0;
    v7 = 1;
    v6 = 0;
    v5 = 1;
    v4 = 0;
    v3 = 0;
    param3 = 1;
    v0 = 1;
    ptr0 = &v11;
    interrupt(128);
}

int sub_80482B7(int param0) {
    int v0;
    int v1;
    int v2;
    int result;
    int v3;
    int v4;
    char v5;
    int v6 = result;
    int v7 = v2;
    int v8 = v3;
    int v9 = v4;
    int* ptr0 = &v1;
    int* ptr1 = &v1;
    int v10 = 0;
    do {
        v5 = *(unsigned char*)(v10 + param0) < 1;
        ++v10;
    }
    while(!v5);
    sub_80487A5(v10 - 1, v3);
    sub_80487FC(v2 >>> 1, v3);
    sub_8048826(v2, v3);
    sub_80487A5(v2, v2);
    if((v3 & 0x1)) {
        v0 = v2 + 1;
    }
    sub_80487FC(v0, v3);
    sub_8048826(v2, v3);
    gvar_8055041 = gvar_8055019;
    gvar_8055045 = gvar_805501D;
    gvar_8055049 = gvar_8055021;
    gvar_805504D = gvar_8055025 ^ gvar_805502D;
    gvar_8055051 = gvar_8055029 ^ gvar_8055031;
    gvar_8055055 = gvar_8055035;
    gvar_8055059 = gvar_8055039;
    gvar_805505D = gvar_805503D;
    return result;
}

int sub_8048329(int param0, int param1) {
    gvar_8050F3C = 3084996963;
    unsigned int v0 = 1;
    do {
        *(unsigned int*)(v0 * 4 + (int)&gvar_8050F3C) = (unsigned int)(*(int*)(v0 * 4 + 134549304) - 0x61c88647);
        ++v0;
    }
    while(v0 < 44);
    unsigned int v1 = 0;
    do {
        *(unsigned int*)(v1 * 4 + (int)&gvar_8050F3C) = *(unsigned int*)(v1 * 4 + param0);
        ++v1;
    }
    while((unsigned int)(param1 >>> 5) > v1);
    unsigned int v2 = 0;
    unsigned int v3 = 0;
    unsigned int v4 = 0;
    unsigned int v5 = 0;
    unsigned int v6 = 0;
    do {
        unsigned int v7 = __rol__(*(unsigned int*)(v5 * 4 + (int)&gvar_8050F3C) + v4 + v3, 3);
        v4 += v7;
        v3 = v7;
        v4 = __rol__(*(unsigned int*)(v6 * 4 + (int)&gvar_8050FF0) + v4, v4 & 0x1f);
        *(unsigned int*)(v5 * 4 + (int)&gvar_8050F3C) = v3;
        *(unsigned int*)(v6 * 4 + (int)&gvar_8050FF0) = v4;
        unsigned int v8 = v5 + 1;
        if(v8 == 43) {
            v8 = 0;
        }
        v5 = v8;
        unsigned int v9 = v6 + 1;
        if((unsigned int)(param1 >>> 5) - 1 == v9) {
            v9 = 0;
        }
        v6 = v9;
        ++v2;
    }
    while(v2 < 132);
    return &gvar_8050F3C;
}

int sub_80483DE(int* param0, int* param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int result = v1;
    int v5 = v0;
    int v6 = v3;
    int v7 = v4;
    int* ptr0 = &v2;
    int* ptr1 = &v2;
    int* ptr2 = param1;
    int v8 = *param0;
    int v9 = *(param0 + 1) + gvar_8050F3C;
    int v10 = *(param0 + 2);
    int v11 = *(param0 + 3) + gvar_8050F40;
    int* ptr3 = (int*)&gvar_8050F44;
    do {
        int v12 = __rol__((__rol__((v9 * 2 + 1) * v9, 5)) ^ v8, (__rol__((v11 * 2 + 1) * v11, 5)) & 0x1f) + *ptr3;
        v13 = __rol__((__rol__((v9 * 2 + 1) * v9, 5)) ^ v8, (__rol__((v11 * 2 + 1) * v11, 5)) & 0x1f) + *ptr3;
        v8 = v9;
        v9 = __rol__((__rol__((v11 * 2 + 1) * v11, 5)) ^ v10, (__rol__((v9 * 2 + 1) * v9, 5)) & 0x1f) + *(ptr3 + 1);
        v10 = v11;
        v11 = v12;
        ptr3 += 2;
    }
    while(ptr3 != &gvar_8050FE4);
    int* ptr4 = param1;
    *ptr4 = gvar_8050FE4 + v8;
    *(ptr4 + 1) = v9;
    *(ptr4 + 2) = gvar_8050FE8 + v10;
    *(ptr4 + 3) = v11;
    return result;
}

int sub_8048460(unsigned int* param0, unsigned int* param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int result = v4;
    int v5 = v0;
    int v6 = v1;
    int v7 = v2;
    int* ptr0 = &v3;
    int* ptr1 = &v3;
    unsigned int* ptr2 = param1;
    unsigned int v8 = *(param0 + 3);
    unsigned int v9 = *(param0 + 2) - gvar_8050FE8;
    unsigned int v10 = *(param0 + 1);
    unsigned int v11 = *param0 - gvar_8050FE4;
    unsigned int* ptr3 = (unsigned int*)&gvar_8050FDC;
    do {
        unsigned int v12 = v8;
        v8 = v9;
        unsigned int v13 = v10;
        v10 = v11;
        unsigned int v14 = v12;
        v12 = (unsigned int)((__ror__(v13 - *(int*)(ptr3 + 1), (__rol__((v10 * 2 + 1) * v10, 5)) & 0x1f)) ^ (__rol__((v8 * 2 + 1) * v8, 5)));
        v11 = (unsigned int)((__ror__(v14 - *ptr3, (__rol__((v8 * 2 + 1) * v8, 5)) & 0x1f)) ^ (__rol__((v10 * 2 + 1) * v10, 5)));
        v9 = (unsigned int)((__ror__(v13 - *(int*)(ptr3 + 1), (__rol__((v10 * 2 + 1) * v10, 5)) & 0x1f)) ^ (__rol__((v8 * 2 + 1) * v8, 5)));
        ptr3 -= 2;
    }
    while(ptr3 != &gvar_8050F3C);
    unsigned int* ptr4 = param1;
    *(ptr4 + 3) = v8 - gvar_8050F40;
    *(ptr4 + 2) = v9;
    *(ptr4 + 1) = v10 - gvar_8050F3C;
    *ptr4 = v11;
    return result;
}

int sub_80486AF(int param0, int param1) {
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
    int* ptr2 = (int*)&gvar_80488A0;
    int* ptr3 = &v3;
    int* ptr4 = (int*)&gvar_80488A0;
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
    v0 = (unsigned int)(*(ptr1 - 18) + *(ptr1 - 12) + gvar_80488A4);
    gvar_80488A4 = (unsigned int)(*(ptr1 - 17) + *(ptr1 - 11) + gvar_80488A8);
    gvar_80488A8 = (unsigned int)(*(ptr1 - 16) + *(ptr1 - 15) + gvar_80488AC);
    gvar_80488AC = (unsigned int)(*(ptr1 - 20) + *(ptr1 - 14) + gvar_80488B0);
    gvar_80488B0 = (unsigned int)(*(ptr1 - 19) + *(ptr1 - 13) + gvar_80488A0);
    gvar_80488A0 = v0;
    return result;
}

int sub_80487A5(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int result = v2;
    int v3 = param0;
    int v4 = param1;
    int v5 = v1;
    int* ptr0 = &v0;
    gvar_80488A0 = 1732584193;
    gvar_80488A4 = 4023233417;
    gvar_80488A8 = 2562383102;
    gvar_80488AC = 271733878;
    gvar_80488B0 = 3285377520;
    gvar_80488B4 = 0;
    gvar_80488B8 = 0;
    int* ptr1 = (int*)&gvar_80488BC;
    int v6 = 16;
    do {
        *ptr1 = 0;
        ++ptr1;
        --v6;
    }
    while(v6 == 0);
    int* ptr2 = (int*)&gvar_80484E2;
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

int sub_80487FC(int param0, int param1) {
    int result;
    int v0;
    int v1 = v0;
    int v2 = param0 >>> 6;
    if(v2) {
        do {
            sub_80486AF(v2, param0);
            v1 += 64;
            v2 = param0 - 1;
        }
        while(v2);
    }
    unsigned int v3 = gvar_80488B4 + param0;
    if((int)(v3 + param0) < (int)v3) {
        ++gvar_80488B8;
    }
    gvar_80488B4 = v3;
    return result;
}

int sub_8048826(int param0, int param1) {
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
    unsigned int v6 = gvar_80488B4;
    unsigned int v7 = gvar_80488B4;
    char* ptr3 = (char*)((v6 & 0x1fc0) + &gvar_8048F3C);
    int v8 = v6 & 0x3f;
    char* ptr4 = (char*)&gvar_80488BC;
    int* ptr5 = (int*)&gvar_80488BC;
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
        sub_80486AF(v9, (v6 >>> 2) & 0xf);
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
    *(ptr6 + 15) = gvar_80488B8 >>> 29;
    sub_80486AF(v9, (v6 >>> 2) & 0xf);
    int* ptr7 = ptr2;
    ptr2 = (int*)0x5;
    int* ptr8 = (int*)0x5;
    int* ptr9 = (int*)&gvar_80488A0;
    while(ptr8 != 0) {
        *ptr7 = *ptr9;
        ++ptr9;
        ++ptr7;
        ptr8 = (int*)((char*)ptr8 - 1);
    }
    return result;
}

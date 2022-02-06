
int start() {
    char v0;
    int v1 = 134513755;
    gvar_8048440 = 134558892;
    int v2 = 134513755;
    int v3 = 21505;
    int v4 = 1;
    int v5 = 54;
    int v6 = 54;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_80480C7(int param0, char param1) {
    char* ptr0;
    char v0;
    char* ptr1;
    char* ptr2;
    int v1;
    char* ptr3 = ptr1;
    *ptr3 = 10;
    char* ptr4 = ptr3 + 1;
    char* ptr5 = ptr3 + 1;
    do {
        char v2 = *ptr2;
        ++ptr2;
        *ptr4 = v2;
        ++ptr4;
        v0 = v2 ? 0: 1;
        char v3 = v2 < 0;
        char v4 = __parity__(v2);
        char v5 = 0;
        char v6 = 0;
    }
    while(!v0);
    char* ptr6 = ptr0;
    char* ptr7 = ptr0;
    char* ptr8 = ptr5;
    char* ptr9 = ptr4;
    char* ptr10 = (char*)((int)ptr4 - (int)ptr5);
    char v7 = ptr10 ? 0: 1;
    char v8 = (int)ptr10 < 0;
    char v9 = __parity__((unsigned char)ptr10);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr9) ^ (int)ptr10) >>> 4) & 0x1);
    char v11 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr9) & (int)(int*)((int)ptr10 ^ (int)ptr9)) < 0;
    char* ptr11 = ptr10;
    int* ptr12 = (int*)(ptr10 - 1);
    int result = sub_804827F();
    if(ptr5 <= ptr9) {
        char v12 = (unsigned char)result == *(ptr1 - 14);
        char v13 = (unsigned char)result < *(ptr1 - 14);
        char v14 = __parity__((unsigned char)result - *(ptr1 - 14));
        char v15 = (unsigned char)result < *(unsigned char*)(ptr1 - 14);
        char v16 = ((((unsigned char)result - *(ptr1 - 14)) ^ (unsigned char)result) & ((unsigned char)result ^ *(ptr1 - 14))) < 0;
        char v17 = ((((unsigned char)result - *(ptr1 - 14)) ^ ((unsigned char)result ^ *(ptr1 - 14))) >>> 4) & 0x1;
        char v18 = v1 ? 0: 1;
        char v19 = v1 < 0;
        char v20 = __parity__(param1);
        char v21 = 0;
        char v22 = 0;
        jump v18 ? &loc_80482B6: &sub_80480F2;
    }
    return result;
}

int sub_80480F2() {
    char v0;
    char v1;
    int v2;
    char* ptr0;
    char* ptr1 = *(unsigned int*)(v2 - 27);
    do {
        char v3 = *ptr0;
        ++ptr0;
        *ptr1 = v3;
        ++ptr1;
        v1 = v3 ? 0: 1;
        char v4 = v3 < 0;
        char v5 = __parity__(v3);
        char v6 = 0;
        char v7 = 0;
    }
    while(!v1);
    *(unsigned int*)(v2 - 27) = ptr1;
    int* ptr2 = (int*)(ptr1 + 0x1000);
    int v8 = 45;
    int v9 = 45;
    int* ptr3 = &v0;
    interrupt(128);
}

void sub_804810A() {
    // Decompilation error
}

int sub_804827F() {
    char v0;
    int v1;
    int v2 = v1 - 91;
    int v3 = 107;
    int v4 = 107;
    int* ptr0 = &v0;
    interrupt(128);
}

void sub_80482A0() {
    int v0;
    int v1;
    int v2 = 0;
    char v3 = 1;
    char v4 = 0;
    char v5 = 1;
    char v6 = 0;
    char v7 = 0;
    int v8 = 1;
    char v9 = *(char*)(v1 - 1) == 0;
    char v10 = *(char*)(v1 - 1) > 0;
    char v11 = __parity__(0 - *(char*)(v1 - 1));
    char v12 = *(unsigned char*)(v1 - 1) > 0;
    char v13 = ((0 - *(char*)(v1 - 1)) & *(char*)(v1 - 1)) < 0;
    char v14 = (((0 - *(char*)(v1 - 1)) ^ *(char*)(v1 - 1)) >>> 4) & 0x1;
    if(!v9) {
        *(char*)(v1 - 1) = 0;
        int v15 = v1;
        int v16 = 1;
        int v17 = 4;
        int v18 = 4;
        int* ptr0 = &v0;
        interrupt(128);
    }
}

int sub_8048354(int param0) {
    int result;
    int v0;
    char* ptr0;
    char* ptr1;
    int v1 = *(int*)(v0 - 12);
    do {
        result = (unsigned int)*ptr0 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        ++ptr0;
        if(!(unsigned char)v1) {
            result = (unsigned int)(unsigned char)result | ((unsigned int)92 << 8) | ((unsigned int)(unsigned short)(result >>> 16) << 16);
            if(((unsigned char)(result >>> 8) == (unsigned char)result || (unsigned char)result == 34)) {
            loc_8048387:
                if((unsigned char)(v1 >>> 8)) {
                    *ptr1 = (unsigned char)(result >>> 8);
                    ++ptr1;
                }
            }
            else if((unsigned char)result > 126 || (unsigned char)result < 32) {
                if((unsigned char)(v1 >>> 8)) {
                    *ptr1 = (unsigned char)__ror__(result, 8);
                    *(ptr1 + 1) = (unsigned char)__rol__((unsigned int)12 | ((unsigned int)(((__ror__(result, 8)) >>> 8) & 0xffffff) << 8), 2);
                    ptr1 += 2;
                    result = (unsigned int)(((unsigned short)((unsigned char)((__rol__((unsigned int)12 | ((unsigned int)(((__ror__(result, 8)) >>> 8) & 0xffffff) << 8), 2)) >>> 26) % 8) | ((unsigned short)((unsigned char)((__rol__((unsigned int)12 | ((unsigned int)(((__ror__(result, 8)) >>> 8) & 0xffffff) << 8), 2)) >>> 26) / 8) << 8)) + 12336) | ((unsigned int)(unsigned short)(((__rol__((unsigned int)12 | ((unsigned int)(((__ror__(result, 8)) >>> 8) & 0xffffff) << 8), 2)) >>> 26) >>> 16) << 16);
                    goto loc_8048387;
                }
                else {
                    result = (unsigned int)63 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
                }
            }
        }
        *ptr1 = (unsigned char)result;
        ++ptr1;
        --param0;
    }
    while(param0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048395() {
    void* ptr0;
    unsigned int v0;
    int v1;
    unsigned int* ptr1 = &ptr0;
    sub_80482A0();
    unsigned int v2 = *(unsigned int*)(v1 - 27);
    while(1) {
        char v3 = v2 == v0;
        char v4 = (int)v2 > (int)v0;
        char v5 = __parity__((unsigned char)v0 - (unsigned char)v2);
        char v6 = v2 > v0;
        char v7 = (int)(((v0 - v2) ^ v0) & (v2 ^ v0)) < 0;
        char v8 = (((v0 - v2) ^ (v2 ^ v0)) >>> 4) & 0x1;
        if(!v6) {
            break;
        }
        else {
            --ptr1;
            *ptr1 = v2;
            int v9 = 0;
            char v10 = 1;
            char v11 = 0;
            char v12 = 1;
            char v13 = 0;
            char v14 = 0;
            --ptr1;
            *ptr1 = &loc_80483A9;
            int v15 = /*BAD_CALL!*/ sub_80480C7();
            int v16 = *(int*)(ptr1 + 1);
            --ptr1;
            *ptr1 = &loc_80483B2;
            int v17 = /*BAD_CALL!*/ sub_8048395();
            v0 = *ptr1;
            ++ptr1;
            v2 = *ptr1;
            ++ptr1;
            *(unsigned int*)(v1 - 27) = v2;
        }
    }
    int v18 = *ptr1;
    ++ptr1;
    jump v18;
}

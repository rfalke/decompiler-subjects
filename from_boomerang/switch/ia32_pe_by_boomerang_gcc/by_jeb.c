
int start() {
    char v0;
    void* ptr0;
    int v1;
    int v2;
    short v3;
    int* ptr1 = &v1;
    int* ptr2 = &v1;
    int* ptr3 = &v2;
    char v4 = &v0 == 12;
    char v5 = (int)&v2 < 0;
    char v6 = __parity__((unsigned char)&v0 - 12);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x8) ^ (int)&v2) >>> 4) & 0x1);
    char v8 = (unsigned int)&v1 < 8;
    char v9 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v2) & (int)(int*)((int)&v1 ^ 0x8)) < 0;
    unsigned int v10 = gvar_403000;
    char v11 = v10 ? 0: 1;
    char v12 = v10 >= 0x80000000;
    char v13 = __parity__((unsigned char)v10);
    char v14 = 0;
    char v15 = 0;
    if(!v11) {
        interrupt(3);
    }
    short v3 = fnstcw();
    int v16 = (unsigned int)v3;
    int v17 = v16 & 0xfffff0c0;
    char v18 = v17 ? 0: 1;
    char v19 = v17 < 0;
    char v20 = __parity__((unsigned char)v17);
    char v21 = 0;
    char v22 = 0;
    int v23 = (unsigned int)(unsigned short)v17;
    int v24 = v23 | 0x33f;
    v11 = v24 ? 0: 1;
    v12 = v24 < 0;
    v13 = __parity__((unsigned char)v24);
    v14 = 0;
    v15 = 0;
    v3 = (unsigned short)v24;
    fldcw(v3);
    ptr3 = &ptr0;
    /*NO_RETURN*/ sub_401470(&gvar_401080);
}

int sub_401040() {
    return sub_4011D0();
}

int sub_401140() {
    return *(int*)(gvar_403040 + 4)();
}

int sub_401410() {
    int* ptr0;
    int* ptr1;
    int v0;
    void* ptr2;
    int* ptr3 = &ptr0;
    int* ptr4 = &ptr0;
    char v1 = &ptr1 == 12;
    char v2 = (int)&v0 < 0;
    char v3 = __parity__((unsigned char)&ptr1 - 12);
    char v4 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v0) >>> 4) & 0x1);
    char v5 = (unsigned int)&ptr0 < 8;
    char v6 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v0) & (int)(int*)((int)&ptr0 ^ 0x8)) < 0;
    unsigned int v7 = gvar_403040;
    int result = sub_401310((int)v7);
    char v8 = (unsigned short)result ? 0: 1;
    char v9 = (unsigned short)result < 0;
    char v10 = __parity__((unsigned char)result);
    char v11 = 0;
    char v12 = 0;
    if(v8) {
        int* ptr5 = &ptr2;
        /*NO_RETURN*/ →cygwin1.dll!abort();
    }
    return result;
}

void sub_401470(int param0) {
    int v0;
    int v1;
    int v2 = param0;
    int v3 = v1;
    int v4 = sub_401530(v2, 0);
    unsigned int* ptr0 = &v0;
    if(v4) {
        v0 = 0;
    loc_40149D:
        --ptr0;
        *ptr0 = &loc_4014A3;
        /*BAD_CALL!*/ cygwin1.dll!dll_crt0__FP11per_process();
    }
    ptr0 -= 44;
    int* ptr1 = (int*)(ptr0 + 2);
    *(int*)(ptr0 + 2) = 0;
    *(ptr0 + 1) = ptr1;
    *ptr0 = v2;
    --ptr0;
    *ptr0 = &loc_4014C1;
    /*BAD_CALL!*/ sub_401530(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2));
    ptr0 -= 2;
    *ptr0 = ptr1;
    goto loc_40149D;
}

int sub_401530(int param0, int param1) {
    int result;
    int v0;
    int v1;
    int v2 = v1;
    int v3 = 0;
    int v4 = v0;
    int v5 = param1;
    if(!v5) {
        int v6 = 8;
        int v7 = →cygwin1.dll!cygwin_internal();
        result = 0;
        if(v7 != -1) {
            v5 = v7;
            v3 = 1;
            goto loc_401544;
        }
    }
    else {
    loc_401544:
        *(int*)(v5 + 4) = 168;
        *(int*)(v5 + 8) = 1005;
        *(int*)(v5 + 12) = 9;
        *(int*)(v5 + 128) = 0;
        *(int*)(v5 + 132) = 112;
        *(int*)(v5 + 44) = &gvar_4017A0;
        *(int*)(v5 + 48) = &gvar_4017AC;
        *(int*)(v5 + 20) = 4206624;
        if(v3) {
            gvar_403024 = *(unsigned int*)(v5 + 164);
        }
        else {
            *(int*)(v5 + 16) = &gvar_403024;
        }
        *(int*)(v5 + 120) = 0;
        int v8 = param0;
        *(int*)(v5 + 72) = &sub_401730;
        *(int*)(v5 + 76) = &sub_401720;
        *(int*)(v5 + 40) = v8;
        int v9 = v2;
        *(int*)(v5 + 80) = &sub_401710;
        *(int*)(v5 + 84) = &sub_401700;
        *(int*)(v5 + 36) = 4206632;
        *(int*)v5 = v9;
        *(int*)(v5 + 24) = &→cygwin1.dll!malloc;
        *(int*)(v5 + 28) = &→cygwin1.dll!free;
        *(int*)(v5 + 32) = &→cygwin1.dll!realloc;
        *(int*)(v5 + 68) = &→cygwin1.dll!calloc;
        HMODULE v10 = →KERNEL32.dll!GetModuleHandleA(NULL);
        *(HMODULE*)(v5 + 124) = v10;
        *(int*)(v5 + 52) = &gvar_402000;
        *(int*)(v5 + 56) = 0x402010;
        *(int*)(v5 + 60) = &gvar_403000;
        *(int*)(v5 + 64) = 0x403080;
        sub_4016B0();
        result = 1;
    }
    return result;
}

int sub_401670(int* param0, unsigned int param1, int param2) {
    int result;
    int v0;
    int* ptr0 = param0;
    int v1 = v0;
    unsigned int v2 = param1;
    if((unsigned int)ptr0 < v2) {
        int v3 = param2;
        do {
            int* ptr1 = (int*)(*(ptr0 + 1) + v3);
            result = *ptr0;
            ptr0 += 2;
            *ptr1 = *ptr1 + result;
        }
        while((unsigned int)ptr0 < v2);
    }
    return result;
}

int sub_4016B0() {
    return sub_401670((int*)&gvar_403000, &gvar_403000, &MZHeader);
}

void sub_401700() {
}

void sub_401710() {
}

void sub_401720() {
}

void sub_401730() {
}

int sub_401790() {
    return sub_401040();
}

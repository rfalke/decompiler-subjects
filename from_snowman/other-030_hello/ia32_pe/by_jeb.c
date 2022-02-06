
// Stale decompilation - Refresh this view to re-decompile this code
int __tls_callback_0(int param0, unsigned int param1, int param2) {
    if(param1 != 2 && !(param1 - 1)) {
        sub_401B04(param0, 1);
    }
    return 1;
}

int __tls_callback_1(int param0, unsigned int param1, int param2) {
    if(param1 == 3 || !param1) {
        sub_401B04(param0, param1);
    }
    return 1;
}

int start() {
    int v0;
    char v1;
    int v2;
    void* ptr0;
    int* ptr1 = &v0;
    int* ptr2 = &v0;
    char v3 = &v1 == 28;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&v1 - 28);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x18) ^ (int)&v2) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 24;
    char v8 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v2) & (int)(int*)((int)&v0 ^ 0x18)) < 0;
    _set_app_type(1);
    int* ptr3 = &ptr0;
    /*NO_RETURN*/ sub_401000();
}

void sub_401000() {
    char v0;
    void* ptr0;
    int v1;
    __tls_callback_0(0, 2, 0);
    →KERNEL32.dll!SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&sub_401110);
    sub_401514(v1);
    sub_4015F4();
    int v2 = 0;
    int* ptr1 = &v2;
    unsigned int v3 = gvar_402000;
    int* ptr2 = &v0;
    unsigned int v4 = &gvar_405004;
    →msvcrt.dll!__getmainargs();
    unsigned int v5 = gvar_405034;
    if(!v5) {
    loc_40107E:
        int* ptr3 = →msvcrt.dll!__p__fmode();
        ptr3[0] = gvar_402004;
        sub_40172C();
        sub_401974();
        *((int*)((int)&ptr0 & 0xfffffff0) - 2) = &loc_40109D;
        char*** ptr4 = /*BAD_CALL!*/ →msvcrt.dll!__p__environ();
        *(char***)((int)&ptr0 & 0xfffffff0) = ptr4[0];
        *(unsigned int*)((int*)((int)&ptr0 & 0xfffffff0) - 1) = gvar_405004;
        *(unsigned int*)((int*)((int)&ptr0 & 0xfffffff0) - 2) = gvar_405000;
        *((int*)((int)&ptr0 & 0xfffffff0) - 3) = &loc_4010B9;
        int v6 = /*BAD_CALL!*/ sub_40138C();
        *((int*)((int)&ptr0 & 0xfffffff0) - 4) = &loc_4010C0;
        /*BAD_CALL!*/ →msvcrt.dll!_cexit();
        *((int*)((int)&ptr0 & 0xfffffff0) - 4) = v6;
        *((int*)((int)&ptr0 & 0xfffffff0) - 5) = &loc_4010C8;
        /*NO_RETURN*/ →KERNEL32.dll!ExitProcess(*(UINT*)((int*)((int)&ptr0 & 0xfffffff0) - 4));
    }
    gvar_402004 = v5;
    →msvcrt.dll!_setmode();
    →msvcrt.dll!_setmode();
    v4 = gvar_405034;
    →msvcrt.dll!_setmode();
    goto loc_40107E;
}

int sub_401110(unsigned int* param0) {
    int v0;
    int result;
    int v0;
    int v1;
    int v2 = v1;
    _crt_signal_t v3 = **param0;
    if((unsigned int)v3 <= 3221225617) {
        if((unsigned int)v3 >= 3221225613) {
            v0 = 1;
            goto loc_401140;
        }
        else if(v3 == 0xc0000005) {
            v3 = →msvcrt.dll!signal(11, NULL);
            if(v3 == 1) {
                →msvcrt.dll!signal(11, (_crt_signal_t)0x1);
            }
            else if(!v3) {
                goto loc_401156;
            }
            else {
                v3(11);
                return -1;
            }
        }
        else if(v3 != 0xc000001d) {
            goto loc_401156;
        }
        else {
            goto loc_401195;
        }
    }
    else if(v3 == 0xc0000094) {
        v0 = 0;
    loc_401140:
        v3 = →msvcrt.dll!signal(8, NULL);
        if(v3 != 1) {
            if(!v3) {
            loc_401156:
                result = 0;
            }
            else {
                v3(8);
                result = -1;
            }
            return result;
        }
        →msvcrt.dll!signal(8, (_crt_signal_t)0x1);
        if(v0) {
            sub_4015F4();
        }
    }
    else if(v3 == 0xc0000096) {
    loc_401195:
        v3 = →msvcrt.dll!signal(4, NULL);
        if(v3 == 1) {
            →msvcrt.dll!signal(4, (_crt_signal_t)0x1);
            return -1;
        }
        else if(!v3) {
            goto loc_401156;
        }
        else {
            v3(4);
            return -1;
        }
    }
    else if(v3 != 0xc0000093) {
        goto loc_401156;
    }
    else {
        v0 = 1;
        goto loc_401140;
    }
    return -1;
}

int sub_401284() {
    int v0;
    char v1;
    int v2;
    void* ptr0;
    int* ptr1 = &v0;
    int* ptr2 = &v0;
    char v3 = &v1 == 28;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&v1 - 28);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x18) ^ (int)&v2) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 24;
    char v8 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v2) & (int)(int*)((int)&v0 ^ 0x18)) < 0;
    _set_app_type(2);
    int* ptr3 = &ptr0;
    /*NO_RETURN*/ sub_401000();
}

int sub_40129C(FUNCPTR _) {
    return atexit(_);
}

_onexit_t sub_4012AC(_onexit_t _Func) {
    return _onexit(_Func);
}

FARPROC sub_4012BC() {
    FARPROC result;
    HMODULE hModule = →KERNEL32.dll!GetModuleHandleA("libgcc_s_dw2-1.dll");
    if(hModule) {
        result = →KERNEL32.dll!GetProcAddress(hModule, "__register_frame_info");
        if(result) {
            goto loc_4012F9;
        }
    }
    else {
        result = (FARPROC)&→libgcc_s_dw2-1.dll!__register_frame_info;
    loc_4012F9:
        result = (FARPROC)result{→libgcc_s_dw2-1.dll!__register_frame_info}();
    }
    if(gvar_40200C) {
        HMODULE hModule1 = →KERNEL32.dll!GetModuleHandleA("libgcj-13.dll");
        if(hModule1) {
            result = →KERNEL32.dll!GetProcAddress(hModule1, "_Jv_RegisterClasses");
            if(result) {
                result = (FARPROC)result(&gvar_40200C);
            }
        }
        else {
            result = NULL;
        }
    }
    return result;
}

FARPROC sub_401348() {
    FARPROC result;
    HMODULE hModule = →KERNEL32.dll!GetModuleHandleA("libgcc_s_dw2-1.dll");
    if(hModule) {
        result = →KERNEL32.dll!GetProcAddress(hModule, "__deregister_frame_info");
        if(result) {
            return (FARPROC)result{→libgcc_s_dw2-1.dll!__deregister_frame_info}();
        }
    }
    else {
        result = (FARPROC)&→libgcc_s_dw2-1.dll!__deregister_frame_info;
        result = (FARPROC)result{→libgcc_s_dw2-1.dll!__deregister_frame_info}();
    }
    return result;
}

int sub_40138C() {
    sub_401974();
    int v0 = →libstdc++-6.dll!_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc();
    →libstdc++-6.dll!_ZNSolsEPFRSoS_E();
    return 0;
}

int sub_4013D4() {
    return →libstdc++-6.dll!_ZNSt8ios_base4InitD1Ev();
}

int sub_4013E6(unsigned int param0, unsigned int param1) {
    int result;
    if(param0 == 1 && param1 == 0xffff) {
        →libstdc++-6.dll!_ZNSt8ios_base4InitC1Ev();
        result = sub_40129C((void __cdecl (*_)())&sub_4013D4);
    }
    return result;
}

int sub_401413() {
    return sub_4013E6(1, 0xffff);
}

int sub_40150C() {
    return 0;
}

unsigned int sub_401514(int param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    int v9;
    char v10;
    char v11;
    char v12;
    char v13;
    int v14;
    int v15;
    char v16;
    unsigned int result = (unsigned int)(((unsigned int)v16 | ((unsigned int)1 << 1) | ((unsigned int)(((((unsigned int)v16 | ((unsigned int)1 << 1) | ((unsigned int)v0 << 2) | ((unsigned int)0 << 3) | ((unsigned int)v1 << 4) | ((unsigned int)0 << 5) | ((unsigned int)v2 << 6) | ((unsigned int)v4 << 7) | ((unsigned int)v3 << 8) | ((unsigned int)v5 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v7 << 11) | ((unsigned int)v6 << 12) | ((unsigned int)v8 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v10 << 18) | ((unsigned int)v12 << 19) | ((unsigned int)v11 << 20) | ((unsigned int)v13 << 21) | ((unsigned int)0 << 22)) ^ 0x200000) >>> 2) & 0x1) << 2) | ((unsigned int)0 << 3) | ((unsigned int)(((((unsigned int)v16 | ((unsigned int)1 << 1) | ((unsigned int)v0 << 2) | ((unsigned int)0 << 3) | ((unsigned int)v1 << 4) | ((unsigned int)0 << 5) | ((unsigned int)v2 << 6) | ((unsigned int)v4 << 7) | ((unsigned int)v3 << 8) | ((unsigned int)v5 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v7 << 11) | ((unsigned int)v6 << 12) | ((unsigned int)v8 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v10 << 18) | ((unsigned int)v12 << 19) | ((unsigned int)v11 << 20) | ((unsigned int)v13 << 21) | ((unsigned int)0 << 22)) ^ 0x200000) >>> 4) & 0x1) << 4) | ((unsigned int)0 << 5) | ((unsigned int)(unsigned char)(((((unsigned int)v16 | ((unsigned int)1 << 1) | ((unsigned int)v0 << 2) | ((unsigned int)0 << 3) | ((unsigned int)v1 << 4) | ((unsigned int)0 << 5) | ((unsigned int)v2 << 6) | ((unsigned int)v4 << 7) | ((unsigned int)v3 << 8) | ((unsigned int)v5 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v7 << 11) | ((unsigned int)v6 << 12) | ((unsigned int)v8 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v10 << 18) | ((unsigned int)v12 << 19) | ((unsigned int)v11 << 20) | ((unsigned int)v13 << 21) | ((unsigned int)0 << 22)) ^ 0x200000) >>> 6) & 0x3f) << 6) | ((unsigned int)v6 << 12) | ((unsigned int)(((((unsigned int)v16 | ((unsigned int)1 << 1) | ((unsigned int)v0 << 2) | ((unsigned int)0 << 3) | ((unsigned int)v1 << 4) | ((unsigned int)0 << 5) | ((unsigned int)v2 << 6) | ((unsigned int)v4 << 7) | ((unsigned int)v3 << 8) | ((unsigned int)v5 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v7 << 11) | ((unsigned int)v6 << 12) | ((unsigned int)v8 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v10 << 18) | ((unsigned int)v12 << 19) | ((unsigned int)v11 << 20) | ((unsigned int)v13 << 21) | ((unsigned int)0 << 22)) ^ 0x200000) >>> 14) & 0x1) << 14) | ((unsigned int)0 << 15) | ((unsigned int)(((((unsigned int)v16 | ((unsigned int)1 << 1) | ((unsigned int)v0 << 2) | ((unsigned int)0 << 3) | ((unsigned int)v1 << 4) | ((unsigned int)0 << 5) | ((unsigned int)v2 << 6) | ((unsigned int)v4 << 7) | ((unsigned int)v3 << 8) | ((unsigned int)v5 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v7 << 11) | ((unsigned int)v6 << 12) | ((unsigned int)v8 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v10 << 18) | ((unsigned int)v12 << 19) | ((unsigned int)v11 << 20) | ((unsigned int)v13 << 21) | ((unsigned int)0 << 22)) ^ 0x200000) >>> 18) & 0x1) << 18) | ((unsigned int)v12 << 19) | ((unsigned int)v11 << 20) | ((unsigned int)(((((unsigned int)v16 | ((unsigned int)1 << 1) | ((unsigned int)v0 << 2) | ((unsigned int)0 << 3) | ((unsigned int)v1 << 4) | ((unsigned int)0 << 5) | ((unsigned int)v2 << 6) | ((unsigned int)v4 << 7) | ((unsigned int)v3 << 8) | ((unsigned int)v5 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v7 << 11) | ((unsigned int)v6 << 12) | ((unsigned int)v8 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v10 << 18) | ((unsigned int)v12 << 19) | ((unsigned int)v11 << 20) | ((unsigned int)v13 << 21) | ((unsigned int)0 << 22)) ^ 0x200000) >>> 21) & 0x1) << 21) | ((unsigned int)0 << 22)) ^ ((unsigned int)v16 | ((unsigned int)1 << 1) | ((unsigned int)v0 << 2) | ((unsigned int)0 << 3) | ((unsigned int)v1 << 4) | ((unsigned int)0 << 5) | ((unsigned int)v2 << 6) | ((unsigned int)v4 << 7) | ((unsigned int)v3 << 8) | ((unsigned int)v5 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v7 << 11) | ((unsigned int)v6 << 12) | ((unsigned int)v8 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v10 << 18) | ((unsigned int)v12 << 19) | ((unsigned int)v11 << 20) | ((unsigned int)v13 << 21) | ((unsigned int)0 << 22)));
    if((result & 0x200000)) {
        (result, int v21, param0, int v22) = cpuid(0, param0);
        if(result) {
            (int v20, int v19, int v14, int v15) = cpuid(1, param0);
            if(((unsigned char)(v15 >>> 8) & 0x1)) {
                gvar_405038 |= 1;
            }
            if(((unsigned char)(v15 >>> 8) & 0x80)) {
                gvar_405038 |= 2;
            }
            if((v15 & 0x800000)) {
                gvar_405038 |= 4;
            }
            if((v15 & 0x1000000)) {
                gvar_405038 |= 8;
            }
            if((v15 & 0x2000000)) {
                gvar_405038 |= 16;
            }
            if((v15 & 0x4000000)) {
                gvar_405038 |= 32;
            }
            if(((unsigned char)v14 & 0x1)) {
                gvar_405038 |= 64;
            }
            if((unsigned char)(v14 >>> 8) & 0x20) {
                gvar_405038 |= 128;
            }
            (result, int v17, param0, v22) = cpuid(0x80000000, (unsigned int)(unsigned char)v14 | ((unsigned int)((unsigned char)(v14 >>> 8) & 0x20) << 8) | ((unsigned int)(unsigned short)(v14 >>> 16) << 16));
            if(result > 0x80000000) {
                (result, int v18, param0, int v9) = cpuid(0x80000001, param0);
                if(v9 < 0) {
                    gvar_405038 |= 0x100;
                }
                if((v9 & 0x40000000)) {
                    gvar_405038 |= 0x200;
                }
            }
        }
    }
    return result;
}

void sub_4015F4() {
    fninit();
}

int sub_4015FC(char* param0) {
    char v0;
    void* ptr0;
    int v1;
    int v2;
    int v3;
    char v4;
    int* ptr1 = &v2;
    int v5 = v1;
    int* ptr2 = &v5;
    char v6 = &v0 == 28;
    char v7 = (int)&v3 < 0;
    char v8 = __parity__((unsigned char)&v0 - 28);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x10) ^ (int)&v3) >>> 4) & 0x1);
    char v10 = (unsigned int)&v5 < 16;
    char v11 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v3) & (int)(int*)((int)&v5 ^ 0x10)) < 0;
    va_list v12 = &v4;
    int v13 = 25308;
    int v14 = 25308;
    int v15 = 25372;
    char v16 = 0;
    char v17 = 0;
    char v18 = 0;
    char v19 = 0;
    char v20 = 0;
    char v21 = 0;
    size_t v22 = →msvcrt.dll!fwrite("Mingw runtime failure:\n", 1, 23, (FILE*)0x631C);
    char* _Format = param0;
    int v23 = →msvcrt.dll!vfprintf((FILE*)0x631C, _Format, &v4);
    int* ptr3 = &ptr0;
    /*NO_RETURN*/ →msvcrt.dll!abort();
}

BOOL sub_401648(int param0, PDWORD param1) {
    char v0;
    int v1;
    BOOL v2;
    int* ptr0;
    DWORD flNewProtect;
    SIZE_T dwSize;
    void* ptr1;
    LPCVOID v3;
    int* ptr2;
    int v4;
    LPVOID lpAddress1;
    BOOL result;
    int* ptr3 = &ptr2;
    LPCVOID v5 = v3;
    int* ptr4 = &v5;
    char v6 = &ptr0 == 92;
    char v7 = (int)&v4 < 0;
    char v8 = __parity__((unsigned char)&ptr0 - 92);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x4c) ^ (int)&v4) >>> 4) & 0x1);
    char v10 = (unsigned int)&v5 < 76;
    char v11 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v4) & (int)(int*)((int)&v5 ^ 0x4c)) < 0;
    LPCVOID lpAddress = (LPCVOID)result;
    PDWORD v12 = param1;
    if(!param0) {
        return result;
    }
    PMEMORY_BASIC_INFORMATION v13 = &lpAddress1;
    v1 = param0;
    SIZE_T v14 = →KERNEL32.dll!VirtualQuery(lpAddress, &lpAddress1, 28);
    v0 = v14 ? 0: 1;
    char v15 = v14 >= 0x80000000;
    char v16 = __parity__((unsigned char)v14);
    char v17 = 0;
    char v18 = 0;
    param0 = v1;
    if(!v0) {
        result = v2;
        if(result != 64 && result != 4) {
            PDWORD lpflOldProtect = &flNewProtect;
            v1 = param0;
            →KERNEL32.dll!VirtualProtect(lpAddress1, dwSize, 64, &flNewProtect);
            result = v2;
            param0 = v1;
            LPCVOID v19 = lpAddress;
            while(param0 != 0) {
                *(char*)v19 = *(char*)&v12[0];
                v12 = (PDWORD)((char*)v12 + 1);
                v19 = (LPCVOID)((int)v19 + 1);
                --param0;
            }
            if(result != 64 && result != 4) {
                result = →KERNEL32.dll!VirtualProtect(lpAddress1, dwSize, flNewProtect, lpflOldProtect);
            }
        }
        else {
            LPCVOID v20 = lpAddress;
            while(param0 != 0) {
                *(char*)v20 = *(char*)&v12[0];
                v12 = (PDWORD)((char*)v12 + 1);
                v20 = (LPCVOID)((int)v20 + 1);
                --param0;
            }
        }
        return result;
    }
    LPCVOID v21 = lpAddress;
    int v22 = 28;
    int* ptr5 = &ptr1;
    result = /*NO_RETURN*/ sub_4015FC("  VirtualQuery failed for %d bytes at address %p");
}

unsigned int sub_40172C() {
    unsigned int v0;
    int v1;
    unsigned int result = gvar_40503C;
    if(!result) {
        gvar_40503C = 1;
        unsigned int* ptr0 = (unsigned int*)&gvar_403134;
        do {
            int v2 = *(int*)(ptr0 + 1) + &MZHeader;
            unsigned int v3 = *ptr0;
            int v4 = *(int*)((int)&MZHeader + v3);
            unsigned int v5 = (unsigned int)(unsigned char)*(int*)(ptr0 + 2);
            if(v5 == 16) {
                v0 = (unsigned int)*(short*)v2;
                if(!(v0 & 0x8000)) {
                loc_40186F:
                    v1 = v0 - v3 - &MZHeader + v4;
                    if(v5 != 16) {
                        if(v5 == 8) {
                        loc_401889:
                            sub_401648(1, &v1);
                        }
                        else if(v5 == 32) {
                            sub_401648(4, &v1);
                        }
                        goto loc_4018AC;
                    }
                }
                else {
                    v1 = (unsigned int)((v0 | 0xffff0000) - v3) - &MZHeader + v4;
                }
                sub_401648(2, &v1);
            }
            else if(v5 != 32) {
                if(v5 != 8) {
                    v1 = 0;
                    unsigned int v6 = v5;
                    v2 = /*NO_RETURN*/ sub_4015FC("  Unknown pseudo relocation bit size %d.\n");
                }
                v0 = (unsigned int)*(char*)v2;
                if(!(v0 & 0x80)) {
                    goto loc_40186F;
                }
                else {
                    v1 = (unsigned int)((v0 | 0xffffff00) - v3) - &MZHeader + v4;
                    goto loc_401889;
                }
            }
            else {
                v1 = *(int*)v2 - v3 - &MZHeader + v4;
                sub_401648(4, &v1);
            }
        loc_4018AC:
            ptr0 += 3;
            result = 0x403140;
        }
        while((unsigned int)ptr0 < 0x403140);
    }
    return result;
}

int sub_4018F8() {
    int v0 = *gvar_402008;
    if(v0) {
        do {
            v0();
            unsigned int v1 = gvar_402008;
            gvar_402008 = v1 + 4;
            v0 = *(int*)(v1 + 4);
        }
        while(v0);
    }
    return 0;
}

int sub_401928() {
    int i;
    for(i = 0; *(unsigned int*)((i + 1) * 4 + (int)&gvar_401C60); ++i) {
    }
    if(i) {
        do {
            *(unsigned int*)(i * 4 + (int)&gvar_401C60)();
            --i;
        }
        while(i);
    }
    return sub_40129C((void __cdecl (*_)())&sub_4018F8);
}

void sub_401974() {
    if(!gvar_405040) {
        gvar_405040 = 1;
        sub_401928();
    }
}

unsigned int sub_401998() {
    int v0;
    unsigned int result;
    unsigned int v1;
    unsigned int v2;
    int v3 = v0;
    if(!gvar_405048) {
        return 0;
    }
    →KERNEL32.dll!EnterCriticalSection((LPCRITICAL_SECTION)0x40504C);
    unsigned int v4 = v1;
    unsigned int* ptr0 = gvar_405064;
    if(ptr0) {
        do {
            LPVOID v5 = →KERNEL32.dll!TlsGetValue(*ptr0);
            v4 = v2;
            DWORD v6 = →KERNEL32.dll!GetLastError();
            if(!v6 && v5) {
                *(int*)(ptr0 + 1)((int)v5);
            }
            ptr0 = *(ptr0 + 2);
        }
        while(ptr0);
    }
    →KERNEL32.dll!LeaveCriticalSection((LPCRITICAL_SECTION)0x40504C);
    return result;
}

int sub_401A08(int param0, int param1) {
    int result;
    if(!gvar_405048) {
        result = 0;
    }
    else {
        void* ptr0 = →msvcrt.dll!calloc(1, 12);
        if(ptr0) {
            *(int*)ptr0 = param0;
            *(int*)((int)ptr0 + 4) = param1;
            →KERNEL32.dll!EnterCriticalSection((LPCRITICAL_SECTION)0x40504C);
            *(unsigned int*)((int)ptr0 + 8) = gvar_405064;
            gvar_405064 = ptr0;
            →KERNEL32.dll!LeaveCriticalSection((LPCRITICAL_SECTION)0x40504C);
            result = 0;
        }
        else {
            result = -1;
        }
    }
    return result;
}

int sub_401A78(unsigned int param0) {
    void* _Block;
    int v0;
    int v1;
    int v2 = v0;
    if(gvar_405048) {
        →KERNEL32.dll!EnterCriticalSection((LPCRITICAL_SECTION)0x40504C);
        int v3 = v1;
        void* ptr0 = gvar_405064;
        if(!ptr0) {
            →KERNEL32.dll!LeaveCriticalSection((LPCRITICAL_SECTION)0x40504C);
        }
        else if(*(unsigned int*)ptr0 == param0) {
            gvar_405064 = *(unsigned int*)((int)ptr0 + 8);
            _Block = ptr0;
            →msvcrt.dll!free(_Block);
            →KERNEL32.dll!LeaveCriticalSection((LPCRITICAL_SECTION)0x40504C);
            return 0;
        }
        else {
            while(1) {
                _Block = *(void**)((int)ptr0 + 8);
                if(!_Block) {
                    →KERNEL32.dll!LeaveCriticalSection((LPCRITICAL_SECTION)0x40504C);
                    return 0;
                }
                else if(*(unsigned int*)_Block != param0) {
                    ptr0 = _Block;
                }
                else {
                    *(int*)((int)ptr0 + 8) = *(int*)((int)_Block + 8);
                    →msvcrt.dll!free(_Block);
                    →KERNEL32.dll!LeaveCriticalSection((LPCRITICAL_SECTION)0x40504C);
                    return 0;
                }
            }
        }
    }
    return 0;
}

int sub_401B04(int param0, unsigned int param1) {
    if(param1 == 1) {
        if(!gvar_405048) {
            →KERNEL32.dll!InitializeCriticalSection((LPCRITICAL_SECTION)0x40504C);
        }
        gvar_405048 = 1;
    }
    else if(param1 == 3) {
        sub_401998();
    }
    else if(param1 < 1) {
        sub_401998();
        if(!(gvar_405048 - 1)) {
            gvar_405048 = 0;
            →KERNEL32.dll!DeleteCriticalSection((LPCRITICAL_SECTION)0x40504C);
        }
    }
    return 1;
}

int sub_401C44() {
    sub_4012BC();
    return sub_40129C((void __cdecl (*_)())&sub_401348);
}

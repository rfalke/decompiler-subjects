
// Stale decompilation - Refresh this view to re-decompile this code
long long __tls_callback_0(long long param0, long long param1, long long param2, long long param3) {
    if(gvar_403050 != 2) {
        gvar_403050 = 2;
    }
    if((unsigned int)param2 != 2 && (unsigned int)param2 == 1) {
        sub_402A90(param3, param2);
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long __tls_callback_1(long long param0, long long param1) {
    if((!(unsigned int)param1 || (unsigned int)param1 == 3)) {
        sub_402A90(param0, param1);
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long start(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    gvar_407080 = 0;
    sub_402730(param0, param1);
    return sub_401180(param0, param1, v0, v1, v2);
}

long long sub_401180(long long param0, long long param1, long long param2, long long param3, long long param4) {
    char v0;
    short v1;
    unsigned long long v2;
    long long v3;
    long long v4;
    char v5;
    char v6;
    long long v7;
    long long v8 = 13L;
    char v9 = gvar_407080 ? 0: 1;
    long long v10 = &v0;
    while(v8 != 0L) {
        *(long long*)v10 = 0L;
        v10 += 8L;
        --v8;
    }
    if(!v9) {
        GetStartupInfoA((LPSTARTUPINFOA)&v0);
    }
    unsigned long long v11 = *(unsigned long long*)(*(long long*)(__GS_BASE + (long long)(long long*)0x30) + 8L);
    unsigned long long v12 = 0L;
    if(gvar_4079C0 == 0L) {
        gvar_4079C0 = v11;
    }
    else {
        v12 = gvar_4079C0;
    }
    long long v13 = 0L;
    if(v12) {
        v13 = 1L;
        if(v12 == v11) {
            goto loc_40120D;
        }
        else {
            v10 = 34294L;
            do {
                Sleep(1000);
                v2 = 0L;
                if(gvar_4079C0 == 0L) {
                    gvar_4079C0 = v11;
                }
                else {
                    v2 = gvar_4079C0;
                }
                if(!v2) {
                    v13 = 0L;
                    goto loc_40120D;
                }
            }
            while(v2 == v11);
            v13 = 1L;
            if(gvar_4079B8 != 1) {
                goto loc_40121B;
            }
            else {
                goto loc_401439;
            }
        }
    }
    else {
    loc_40120D:
        if(gvar_4079B8 == 1) {
        loc_401439:
            /*NO_RETURN*/ →msvcrt.dll!_amsg_exit(31);
        }
    loc_40121B:
        if(gvar_4079B8) {
            gvar_407000 = 1;
        }
        else {
            gvar_4079B8 = 1;
            →msvcrt.dll!_initterm((_PVFV*)&gvar_409018, (_PVFV*)&gvar_409030);
        }
        if(gvar_4079B8 == 1) {
            →msvcrt.dll!_initterm((_PVFV*)&gvar_409000, (_PVFV*)&gvar_409010);
            gvar_4079B8 = 2;
        }
    }
    if(!(unsigned int)v13) {
        gvar_4079C0 = 0L;
    }
    unsigned long long v14 = gvar_403000;
    if(v14) {
        v14{__tls_callback_0}(v10, v13, 2L, 0L);
    }
    sub_401F60(v10, v13, &v0, 0L, param4);
    LPTOP_LEVEL_EXCEPTION_FILTER v15 = SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&gvar_401A30);
    gvar_4070A0 = v15;
    sub_401920(v3, v7);
    HMODULE hModule = sub_402590(v3, v7, v4);
    FARPROC v16 = GetProcAddress(hModule, "_set_invalid_parameter_handler");
    if(v16) {
        v16(&gvar_401000);
    }
    sub_402660();
    if(gvar_407080) {
        int v17 = 0;
        char* ptr0 = *(unsigned long long*)0x86E4;
        while(1) {
            char v18 = *ptr0;
            if(v18 > 32) {
                v17 = v18 == 34 ? v17 ^ 0x1: v17;
                goto loc_4012C8;
            }
            if(!v18) {
                goto loc_401300;
            }
            else if(!(unsigned char)v17) {
                break;
            }
            else {
            loc_4012C8:
                ++ptr0;
            }
        }
        do {
            ++ptr0;
            v6 = *ptr0;
        }
        while(v6 <= 32 && !v6);
    loc_401300:
        gvar_407990 = ptr0;
        long long v19 = 10L;
        gvar_4079A0 = &MZHeader;
        if(v5 & 0x1) {
            v19 = (unsigned long long)v1;
        }
        gvar_407998 = (unsigned int)v19;
    }
    long long v20 = (long long)gvar_407004;
    void* ptr1 = →msvcrt.dll!malloc((size_t)((long long)((unsigned int)v20 + 1) * 8L));
    long long v21 = 0L;
    long long v22 = gvar_407008;
    if(!((unsigned int)v20 ? 0: 1) && (unsigned int)v20 >= 0) {
        v11 = 0L;
        do {
            size_t v23 = →msvcrt.dll!strlen(*(char**)(v11 * 8L + v22));
            size_t v24 = (size_t)((unsigned int)v23 + 1);
            void* _Dst = →msvcrt.dll!malloc((size_t)((unsigned int)v23 + 1));
            *(void**)(v11 * 8L + (long long)ptr1) = _Dst;
            void* _Src = *(void**)(v11 * 8L + v22);
            ++v11;
            →msvcrt.dll!memcpy(_Dst, _Src, (size_t)((unsigned int)v23 + 1));
        }
        while((unsigned int)v11 < (unsigned int)v20);
        v20 = (long long)(unsigned int)v20;
        v21 = v20 * 8L;
    }
    *(long long*)(v21 + (long long)ptr1) = 0L;
    gvar_407008 = ptr1;
    sub_402710(v20, v22);
    *(unsigned long long*)0x8694 = gvar_407010;
    long long result = sub_4014F0(v3, v7);
    unsigned int v25 = gvar_40701C;
    gvar_407018 = (unsigned int)result;
    if(!v25) {
        /*NO_RETURN*/ →msvcrt.dll!exit((int)result);
    }
    if(!gvar_407000) {
        →msvcrt.dll!_cexit();
        result = (long long)gvar_407018;
    }
    return result;
}

long long sub_4014F0(long long param0, long long param1) {
    sub_402710(param0, param1);
    →libstdc++-6.dll!_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc();
    →libstdc++-6.dll!_ZNSolsEPFRSoS_E();
    return 0L;
}

long long sub_40152A() {
    return →libstdc++-6.dll!_ZNSt8ios_base4InitD1Ev();
}

long long sub_401545(int param0, int param1) {
    long long result;
    if(param0 == 1 && param1 == 0xffff) {
        →libstdc++-6.dll!_ZNSt8ios_base4InitC1Ev();
        result = sub_401760(&sub_40152A);
    }
    return result;
}

long long sub_401581() {
    return sub_401545(1L, 0xffffL);
}

long long sub_401690(long long param0) {
    return param0;
}

long long sub_4016A0(long long param0) {
    return param0;
}

long long sub_4016B0(_onexit_t param0) {
    _onexit_t _Func;
    long long v0 = sub_401690(gvar_4079A8);
    long long v1 = v0;
    if(v0 != -1L) {
        →msvcrt.dll!_lock();
        long long v2 = sub_401690(gvar_4079A8);
        long long v3 = sub_401690(gvar_4079B0);
        long long result = →msvcrt.dll!__dllonexit();
        long long v4 = sub_4016A0(v2);
        gvar_4079A8 = v4;
        long long v5 = sub_4016A0(v3);
        gvar_4079B0 = v5;
        →msvcrt.dll!_unlock();
        return result;
    }
    return (long long)_onexit(_Func);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_401760(long long param0) {
    unsigned long long v0 = (unsigned long long)sub_4016B0(param0);
    return v0 < 1L ? 0xffffffffL: 0L;
}

long long sub_401920(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2 = sub_402480();
    long long result = (unsigned long long)gvar_4070A8;
    if(v2 && !(unsigned int)result) {
        gvar_4070A8 = 1;
        char* ptr0 = sub_4022F0(param0, param1, v1, ".pdata");
        result = 1L;
        if(!ptr0) {
            long long i = 48L;
            unsigned long long* ptr1 = (unsigned long long*)&gvar_4070C0;
            int* ptr2 = (int*)&gvar_4070C0;
            while(i != 0L) {
                *ptr1 = NULL;
                ++ptr1;
                --i;
            }
            unsigned long long* ptr3 = (unsigned long long*)&gvar_407240;
            for(i = 32L; i != 0L; --i) {
                *ptr3 = NULL;
                ++ptr3;
            }
            long long v3 = 0L;
            do {
                long long v4 = sub_402400(v3);
                if(v4) {
                    *(unsigned char*)(v3 * 8L + (long long)&gvar_407240) = 9;
                    *(int*)(v3 * 8L + (long long)&gvar_407244) = &gvar_401780 - (unsigned int)v2;
                    int v5 = *(int*)(v4 + 12L);
                    *ptr2 = *(int*)(v4 + 12L);
                    int v6 = *(int*)(v4 + 8L) + v5;
                    long long v7 = v3 * 8L + &gvar_407240;
                    ++v3;
                    *(ptr2 + 2) = (unsigned int)v7 - (unsigned int)v2;
                    *(ptr2 + 1) = v6;
                    ptr2 += 3;
                }
                else {
                    if(v3) {
                        v0 = v3 & 0xffffffffL;
                        RtlAddFunctionTable((PRUNTIME_FUNCTION)&gvar_4070C0, (DWORD)v0, (DWORD64)v2);
                    }
                    result = 1L;
                }
                return result;
            }
            while(v3 == 32L);
            v0 = 32L;
            RtlAddFunctionTable((PRUNTIME_FUNCTION)&gvar_4070C0, (DWORD)v0, (DWORD64)v2);
            return 1L;
        }
    }
    return result;
}

long long sub_401D80(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6, long long param7, long long param8, long long param9) {
    long long v0 = →msvcrt.dll!__iob_func();
    →msvcrt.dll!fwrite("Mingw-w64 runtime failure:\n", 1L, 27L, (FILE*)(v0 + 96L));
    →msvcrt.dll!__iob_func();
    →msvcrt.dll!vfprintf();
    /*NO_RETURN*/ →msvcrt.dll!abort();
}

long long sub_401DF0(long long param0, long long param1, void* _Src, long long param3, long long param4, long long param5, long long param6, long long param7, long long param8, long long param9, long long param10, long long param11, long long param12, long long param13) {
    long long v0;
    unsigned long long v1;
    long long v2;
    void* ptr0;
    char v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    int v8;
    int result;
    long long* ptr1 = &v2;
    long long v9 = param3;
    if(!param4) {
        return result;
    }
    int v10 = gvar_407360;
    if(v10 > 0) {
        v1 = gvar_407358;
        v0 = 0L;
    }
    else {
        v0 = 0L;
        goto loc_401E6D;
    }
    do {
        unsigned long long v11 = *(unsigned long long*)(v1 + 8L);
        if(v11 <= (unsigned long long)v9 && (unsigned long long)((unsigned long long)*(int*)(*(long long*)(v1 + 16L) + 8L) + v11) > (unsigned long long)v9) {
            goto loc_401EE6;
        }
        else {
            v0 = (unsigned long long)((unsigned int)v0 + 1);
            v1 += 24L;
        }
    }
    while((unsigned int)v0 != v10);
loc_401E6D:
    long long v12 = sub_402390(v9);
    if(!v12) {
        /*NO_RETURN*/ sub_401D80((long long)_Src, param4, v9, "Address %p has no image-section", param4, v7, v2, v4, v5, v6);
    }
    v0 = (long long)(unsigned int)v0 * 8L;
    int* ptr2 = (int*)(gvar_407358 + v0);
    *(long long*)(ptr2 + 4) = v12;
    *ptr2 = 0;
    long long v13 = sub_402480();
    *(long long*)(ptr2 + 2) = (unsigned long long)*(int*)(v12 + 12L) + v13;
    ptr1 = &ptr0;
    SIZE_T v14 = VirtualQuery(*(LPCVOID*)(gvar_407358 + 8L), &v3, 48L);
    if(v14) {
        result = v8;
        if(result != 4) {
        loc_401F03:
            if(result != 64) {
                SIZE_T dwSize = *(SIZE_T*)(ptr1 + 7);
                LPVOID lpAddress = *(LPVOID*)(ptr1 + 4);
                PDWORD lpflOldProtect = (PDWORD)(gvar_407358 + v0);
                --ptr1;
                *ptr1 = &loc_401F25;
                /*BAD_CALL!*/ VirtualProtect(lpAddress, dwSize, 64, lpflOldProtect);
            }
        }
    }
    else {
        /*NO_RETURN*/ sub_401D80((long long)_Src, param4, (long long)*(int*)(v12 + 8L), "  VirtualQuery failed for %d bytes at address %p", *(long long*)(gvar_407358 + 8L), v7, v2, v4, v5, v6);
    loc_401EE6:
        void* _Dst = (void*)v9;
        ptr1 += 11;
        v9 = *ptr1;
        ptr1 += 4;
        v0 = *ptr1;
        ptr1 += 2;
        /*BAD_CALL!*/ →msvcrt.dll!memcpy(_Dst, _Src, (size_t)param4);
        goto loc_401F03;
    }
    ++gvar_407360;
    goto loc_401EE6;
}

BOOL sub_401F60(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long v0;
    int* ptr0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    BOOL result;
    long long v9;
    char v10;
    long long v11;
    long long v12;
    long long v13;
    long long v14 = v13;
    long long v15 = v9;
    if(!gvar_407350) {
        gvar_407350 = 1;
        sub_4023D0();
        sub_402B30(v12);
        gvar_407360 = 0;
        gvar_407358 = &v1;
        ptr0 = (int*)&gvar_404294;
    }
    else {
        return result;
    }
loc_402118:
    long long v16 = (long long)*(ptr0 + 2);
    result = (BOOL)(v16 & 0xffL);
    long long v17 = (unsigned long long)*ptr0 + &MZHeader;
    long long v18 = (unsigned long long)*(ptr0 + 1) + &MZHeader;
    long long v19 = *(long long*)v17;
    if((unsigned int)result == 16) {
        long long v20 = (unsigned long long)*(short*)v18;
        if(((unsigned int)v20 & 0x8000)) {
            v0 = (v20 | 0xffffffffffff0000L) - v17 + v19;
            result = (BOOL)sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v18, 2L, v19, v3, v4, v5, v6, v1, v7, v8, v2);
            goto loc_402178;
        loc_402209:
            v20 = (unsigned long long)*(char*)v18;
            if((*(char*)v18 & 0x80)) {
                v0 = (v20 | 0xffffffffffffff00L) - v17 + v19;
                result = (BOOL)sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v18, 1L, v19, v3, v4, v5, v6, v1, v7, v8, v2);
                goto loc_402178;
            loc_402154:
                if((unsigned int)result == 32) {
                    v20 = (unsigned long long)*(int*)v18;
                    if((*(int*)v18 & 0x80000000)) {
                        v0 = (v20 | 0xffffffff00000000L) - v17 + v19;
                        goto loc_4021FF;
                    }
                }
                else if((unsigned int)result != 64) {
                    v0 = 0L;
                    result = (BOOL)/*NO_RETURN*/ sub_401D80(&MZHeader, &gvar_4042A0, v16 & 0xffL, "  Unknown pseudo relocation bit size %d.\n", v16, v19, v3, v4, v5, v6);
                    goto loc_402154;
                }
                else {
                    v19 = v19 - v17 + *(long long*)v18;
                    v0 = v19;
                    result = (BOOL)sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v18, 8L, v19, v3, v4, v5, v6, v1, v7, v8, v2);
                    goto loc_402178;
                }
            }
        }
        param4 = v20 - v17;
        v19 += param4;
        char v21 = (unsigned int)result < 16;
        v0 = v19;
        if((unsigned int)result == 16) {
            result = (BOOL)sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v18, 2L, v19, v3, v4, v5, v6, v1, v7, v8, v2);
        }
        else if(v21 != 0) {
            if((unsigned int)result == 8) {
                result = (BOOL)sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v18, 1L, v19, v3, v4, v5, v6, v1, v7, v8, v2);
            }
        }
        else if((unsigned int)result == 32) {
        loc_4021FF:
            result = (BOOL)sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v18, 4L, v19, v3, v4, v5, v6, v1, v7, v8, v2);
        }
        else if((unsigned int)result == 64) {
            result = (BOOL)sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v18, 8L, v19, v3, v4, v5, v6, v1, v7, v8, v2);
        }
    }
    else if((unsigned int)result >= 16) {
        goto loc_402154;
    }
    else if((unsigned int)result == 8) {
        goto loc_402209;
    }
    else {
        v0 = 0L;
        result = (BOOL)/*NO_RETURN*/ sub_401D80(&MZHeader, &gvar_4042A0, v16 & 0xffL, "  Unknown pseudo relocation bit size %d.\n", v16, v19, v3, v4, v5, v6);
        goto loc_402154;
    }
loc_402178:
    ptr0 += 3;
    if((unsigned long long)ptr0 < &gvar_4042A0) {
        goto loc_402118;
    }
    else if(gvar_407360 <= 0) {
        return result;
    }
    else {
        long long v22 = 0L;
        long long v23 = 0L;
        do {
            result = (BOOL)(gvar_407358 + v22);
            v17 = (long long)*(int*)result;
            if(*(int*)result) {
                SIZE_T v24 = VirtualQuery(*(LPCVOID*)(result + 8L), &v1, 48L);
                if(!v24) {
                    ptr0 = (int*)(gvar_407358 + v22);
                    /*NO_RETURN*/ sub_401D80(34364L, v23, (long long)*(int*)(*(long long*)(ptr0 + 4) + 8L), "  VirtualQuery failed for %d bytes at address %p", *(long long*)(ptr0 + 2), v11, v3, v4, v5, v6);
                    /*NO_RETURN*/ sub_401D80(0L, &gvar_4042A0, v17, "  Unknown pseudo relocation protocol version %d.\n", param4, v19, v3, v4, v5, v6);
                }
                result = VirtualProtect((LPVOID)v1, (SIZE_T)v2, *(DWORD*)(gvar_407358 + v22), &v10);
            }
            v23 = (long long)((unsigned int)v23 + 1);
            v22 += 24L;
        }
        while((unsigned int)v23 >= gvar_407360);
    }
}

long long sub_402270(short* param0) {
    if(*param0 == 23117) {
        param0 = (short*)((long long)*(int*)(param0 + 30) + (long long)param0);
        if(*(int*)param0 == 0x4550) {
            return *(param0 + 12) == 523 ? 1L: 0L;
        }
    }
    return 0L;
}

long long sub_4022A0(long long param0, unsigned long long param1) {
    long long v0 = (long long)*(int*)(param0 + 60L) + param0;
    long long result = 0L;
    long long v1 = (unsigned long long)*(short*)(v0 + 6L);
    long long v2 = (unsigned long long)*(short*)(v0 + 20L);
    if((unsigned int)v1) {
        result = (v2 & 0xffffL) + v0 + 24L;
        v2 = (unsigned long long)((unsigned int)v1 - 1) * 40L + result + 40L;
        while((unsigned long long)*(int*)(result + 12L) > param1 || (unsigned long long)(*(int*)(result + 12L) + *(int*)(result + 8L)) <= param1) {
            result += 40L;
            if(result == v2) {
                return 0L;
            }
        }
    }
    return result;
}

char* sub_4022F0(long long param0, long long param1, long long param2, char* _Str) {
    char* _Str1 = NULL;
    size_t v0 = →msvcrt.dll!strlen(_Str);
    if(v0 <= 8L) {
        long long v1 = sub_402270((short*)&MZHeader);
        if((unsigned int)v1) {
            _Str1 = (char*)&SectionHeader00;
            do {
                int v2 = →msvcrt.dll!strncmp(_Str1, _Str, 8L);
                if(!(unsigned int)v2) {
                    return _Str1;
                }
                _Str1 += 40L;
            }
            while(_Str1 == 0x400430L);
            return NULL;
        }
    }
    return _Str1;
}

long long sub_402390(long long param0) {
    long long v0;
    long long v1 = sub_402270((short*)&MZHeader);
    if((unsigned int)v1) {
        return sub_4022A0(&MZHeader, (unsigned long long)(v0 - &MZHeader));
    }
    return 0L;
}

long long sub_4023D0() {
    long long v0 = sub_402270((short*)&MZHeader);
    return !(unsigned int)v0 ? 0L: 17L;
}

long long sub_402400(long long param0) {
    long long v0 = param0;
    long long v1 = sub_402270((short*)&MZHeader);
    long long result = 0L;
    if((unsigned int)v1) {
        result = &SectionHeader00;
        do {
            if(!(*(char*)(result + 39L) & 0x20)) {
            loc_40245F:
                result += 40L;
            }
            else if(v0) {
                --v0;
                goto loc_40245F;
            }
            return result;
        }
        while(result != 0x400430L);
        result = 0L;
    }
    return result;
}

long long sub_402480() {
    long long v0 = sub_402270((short*)&MZHeader);
    return (unsigned int)v0 ? &MZHeader: 0L;
}

long long sub_402500(long long param0, long long param1, long long param2, int param3) {
    long long result = 0L;
    int v0 = param3;
    long long v1 = sub_402270((short*)&MZHeader);
    if((unsigned int)v1) {
        long long v2 = sub_4022A0(&MZHeader, 0x8000L);
        if(v2) {
            long long v3 = &ImportDirectory_KERNEL32.dll;
            while(*(int*)(v3 + 4L) || *(int*)(v3 + 12L)) {
                if(v0 <= 0) {
                    return (unsigned long long)*(int*)(v3 + 12L) + &MZHeader;
                }
                --v0;
                v3 += 20L;
            }
            return 0L;
        }
    }
    return result;
}

HMODULE sub_402590(long long param0, long long param1, long long param2) {
    HMODULE result = gvar_407370;
    if(!result) {
        long long v0 = 0L;
        for(long long i = sub_402500(param0, param1, param2, (int)v0); i; i = sub_402500(param0, param1, param2, (int)v0)) {
            param2 = (long long)*(char*)i;
            if(*(char*)i == 77 || *(char*)i == 109) {
                param2 = (long long)*(char*)(i + 1L);
                if(*(char*)(i + 1L) == 83 || *(char*)(i + 1L) == 115) {
                    param2 = (long long)*(char*)(i + 2L);
                    if(*(char*)(i + 2L) == 86 || *(char*)(i + 2L) == 118) {
                        param2 = (long long)*(char*)(i + 3L);
                        if(*(char*)(i + 3L) == 67 || *(char*)(i + 3L) == 99) {
                            param2 = (long long)*(char*)(i + 4L);
                            if(*(char*)(i + 4L) == 82 || *(char*)(i + 4L) == 114) {
                                long long v1 = (unsigned long long)*(char*)(i + 5L);
                                if(*(char*)(i + 5L) != 84 && *(char*)(i + 5L) != 116) {
                                    param2 = (long long)((unsigned int)v1 - 48);
                                    if((unsigned char)param2 > 9) {
                                        goto loc_402620;
                                    }
                                }
                                result = GetModuleHandleA((LPCSTR)i);
                                gvar_407370 = result;
                                if(result) {
                                    return result;
                                }
                                break;
                            }
                        }
                    }
                }
            }
        loc_402620:
            v0 = (unsigned long long)((unsigned int)v0 + 1);
        }
        result = LoadLibraryW("msvcrt.dll");
        gvar_407370 = result;
    }
    return result;
}

void sub_402660() {
    fninit();
}

unsigned int sub_402710(long long param0, long long param1) {
    char v0;
    long long v1;
    unsigned int result = gvar_407380;
    if(result) {
        return result;
    }
    gvar_407380 = 1;
    long long v2 = v1;
    unsigned long long* ptr0 = &v0;
    while(1) {
        long long v3 = 0L;
        for(int i = (unsigned int)v3 + 1; *(unsigned long long*)((unsigned long long)i * 8L + (long long)&gvar_402D10); i = (unsigned int)v3 + 1) {
            v3 = (unsigned long long)i;
        }
        if((unsigned int)v3) {
            do {
                --ptr0;
                *ptr0 = &loc_4026D5;
                /*BAD_CALL!*/ *(unsigned long long*)((v3 & 0xffffffffL) * 8L + (long long)&gvar_402D10)();
                v3 = (unsigned long long)((unsigned int)v3 - 1);
            }
            while((unsigned int)v3);
        }
        ptr0 += 7;
        /*BAD_CALL!*/ sub_401760(&gvar_402670);
    }
}

unsigned long long sub_402730(long long param0, long long param1) {
    long long v0;
    unsigned long long v1 = gvar_403070;
    long long v2 = 0L;
    if(v1 != 0x2b992ddfa232L) {
        gvar_403080 = ~v1;
        return 0x2b992ddfa232L;
    }
    GetSystemTimeAsFileTime(&v2);
    DWORD v3 = GetCurrentProcessId();
    DWORD v4 = GetCurrentThreadId();
    DWORD v5 = GetTickCount();
    QueryPerformanceCounter(&v0);
    unsigned long long v6 = (unsigned long long)(((v5 & 0xffffffffL) ^ ((v4 & 0xffffffffL) ^ ((v3 & 0xffffffffL) ^ (v2 ^ v0)))) & 0xffffffffffffL);
    unsigned long long result = ~v6;
    if(v6 == 0x2b992ddfa232L) {
        result = 18446696136809930188L;
        v6 = 0x2b992ddfa233L;
    }
    gvar_403070 = v6;
    gvar_403080 = result;
    return result;
}

void sub_402800(long long param0, long long param1, long long param2, unsigned long long param3) {
    DWORD64 ImageBase;
    char v0;
    char v1;
    unsigned long long v2;
    unsigned long long v3;
    RtlCaptureContext((PCONTEXT)&gvar_4073A0);
    DWORD64 ControlPc = gvar_407498;
    PRUNTIME_FUNCTION FunctionEntry = RtlLookupFunctionEntry(ControlPc, &ImageBase, NULL);
    if(FunctionEntry) {
        PKNONVOLATILE_CONTEXT_POINTERS v4 = NULL;
        PDWORD64 EstablisherFrame = &v0;
        PVOID* HandlerData = &v1;
        PCONTEXT v5 = (PCONTEXT)&gvar_4073A0;
        RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, (PCONTEXT)&gvar_4073A0, HandlerData, EstablisherFrame, NULL);
    loc_402873:
        unsigned long long v6 = gvar_407498;
        gvar_407420 = v3;
        gvar_407880 = 3221226505;
        gvar_407884 = 1;
        gvar_407890 = v6;
        unsigned long long v7 = gvar_403070;
        unsigned long long v8 = gvar_403080;
        SetUnhandledExceptionFilter(NULL);
        UnhandledExceptionFilter((_EXCEPTION_POINTERS*)&gvar_403040);
        HANDLE hProcess = GetCurrentProcess();
        TerminateProcess(hProcess, 3221226505);
        /*NO_RETURN*/ →msvcrt.dll!abort();
    }
    gvar_407498 = v2;
    gvar_407438 = &v2;
    goto loc_402873;
}

long long sub_402900(long long param0, long long param1) {
    long long result;
    EnterCriticalSection((LPCRITICAL_SECTION)&gvar_407940);
    DWORD* ptr0 = gvar_407968;
    if(ptr0) {
        do {
            LPVOID v0 = TlsGetValue(ptr0[0]);
            DWORD v1 = GetLastError();
            if(!(unsigned int)v1 && v0) {
                *(long long*)&ptr0[2]((long long)v0);
            }
            ptr0 = *(long long*)&ptr0[4];
        }
        while(ptr0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&gvar_407940);
    return result;
}

long long sub_402A90(long long param0, long long param1, long long param2) {
    if((unsigned int)param2 == 1) {
        if(!gvar_407920) {
            InitializeCriticalSection((LPCRITICAL_SECTION)&gvar_407940);
        }
        gvar_407920 = 1;
    }
    else if((unsigned int)param2 < 1) {
        if(gvar_407920) {
            sub_402900(param0, param1);
        }
        if(gvar_407920 == 1) {
            gvar_407920 = 0;
            DeleteCriticalSection((LPCRITICAL_SECTION)&gvar_407940);
        }
    }
    else if((unsigned int)param2 == 3 && gvar_407920) {
        sub_402900(param0, param1);
    }
    return 1L;
}

unsigned long long sub_402B30(long long param0) {
    unsigned long long v0;
    char v1;
    unsigned long long result = v0;
    long long* ptr0 = &v1;
    if(v0 >= 0x1000L) {
        do {
            ptr0 -= 0x200;
            v0 -= 0x1000L;
        }
        while(v0 > 0x1000L);
    }
    return result;
}

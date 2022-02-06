
// Stale decompilation - Refresh this view to re-decompile this code
int DebuggerKnownHandle() {
    long long v0;
    BOOL v1 = /*BAD_CALL!*/ IsDebuggerPresent();
    if((unsigned int)v1) {
        long long v2 = /*BAD_CALL!*/ DebuggerProbe(0x1004L, v0);
        return (unsigned int)v2 ? 1: 0;
    }
    return 0;
}

long long FindPESection(long long param0, unsigned long long param1) {
    unsigned long long v0 = param1;
    long long v1 = param0;
    long long v2 = (long long)*(int*)(param0 + 60L) + param0;
    unsigned int v3 = 0;
    long long result = (unsigned long long)*(short*)(v2 + 20L) + v2 + 24L;
    while((unsigned int)*(short*)(v2 + 6L) > v3) {
        if((unsigned long long)*(int*)(result + 12L) <= param1 && (unsigned long long)(*(int*)(result + 8L) + *(unsigned int*)(result + 12L)) > param1) {
            return result;
        }
        ++v3;
        result += 40L;
    }
    return 0L;
}

long long GetPdbDll(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6, long long param7, long long param8) {
    char v0;
    long long v1;
    int v2;
    char v3;
    char v4;
    long long result;
    long long v5;
    long long v6;
    long long* ptr0 = (long long*)(__security_cookie ^ (long long)&v0);
    if(!gvar_140009724) {
        LPCSTR lpLibFileName = mspdbName;
        gvar_140009724 = 1;
        HMODULE v7 = LoadLibraryA(lpLibFileName);
        if(!v7) {
            HMODULE hModule = /*BAD_CALL!*/ LoadLibraryA("ADVAPI32.DLL");
            if(hModule) {
                param6 = v5;
                FARPROC v8 = /*BAD_CALL!*/ GetProcAddress(hModule, "RegOpenKeyExA");
                if(v8) {
                    FARPROC v9 = /*BAD_CALL!*/ GetProcAddress(hModule, "RegQueryValueExA");
                    if(v9) {
                        long long v10 = v6;
                        FARPROC v11 = /*BAD_CALL!*/ GetProcAddress(hModule, "RegCloseKey");
                        if(v11) {
                            LPCSTR v12 = &v1;
                            INT_PTR v13 = v8(0xffffffff80000002L, "SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS", 0L, 1L);
                            if((unsigned int)v13) {
                                FreeLibrary(hModule);
                            }
                            else {
                                int* ptr1 = &v2;
                                unsigned long long v14 = 0L;
                                v12 = NULL;
                                INT_PTR v15 = v9(v1, "EnvironmentDirectory", 0L, &v4);
                                if(!(unsigned int)v15 && (unsigned int)(0x7fffffff - v2) >= 13 && (unsigned int)(v2 + 13) < 260) {
                                    ptr1 = &v2;
                                    v12 = &v3;
                                    INT_PTR v16 = /*BAD_CALL!*/ v9(v1, "EnvironmentDirectory", 0L, &v4);
                                    v11(v1);
                                    FreeLibrary(hModule);
                                    if(!(unsigned int)v16) {
                                        int v17 = v2;
                                        if(*(char*)((unsigned long long)(v2 - 2) + (long long)&v3) != 92) {
                                            *(char*)((unsigned long long)(v17 - 1) + (long long)&v3) = '\\';
                                        }
                                        else {
                                            --v17;
                                            v2 = v17;
                                        }
                                        unsigned long long v18 = mspdbName;
                                        do {
                                            char v19 = *(char*)(v14 + v18);
                                            long long v20 = (unsigned long long)v17;
                                            ++v14;
                                            ++v17;
                                            *(char*)(v20 + (long long)&v3) = v19;
                                        }
                                        while((long long)v14 <= 11L);
                                        LoadLibraryA(&v3);
                                    }
                                }
                                else {
                                    FreeLibrary(hModule);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    security_check_cookie((long long)(long long*)((long long)&v0 ^ (long long)ptr0));
    return result;
}

long long IsNonwritableInCurrentImage(unsigned long long param0) {
    long long result;
    unsigned long long v0 = param0;
    short* ptr0 = (short*)&MZHeader;
    long long v1 = /*BAD_CALL!*/ ValidateImageBase((short*)&MZHeader);
    if(!(unsigned int)v1) {
        result = 0L;
    }
    else {
        unsigned long long v2 = param0 - (long long)(short*)&MZHeader;
        long long v3 = FindPESection(&MZHeader, param0 - (long long)(short*)&MZHeader);
        result = !v3 ? 0L: !(*(int*)(v3 + 36L) & 0x80000000 ? 0: 1) ? 0L: 1L;
    }
    return result;
}

_TEB* NtCurrentTeb() {
    return *(_TEB**)(__GS_BASE + (long long)(_TEB**)0x30);
}

char RTC_AllocaHelper(long long param0, long long param1, char* param2, char* i, unsigned long long* param4) {
    char result;
    char* ptr0 = i;
    if(i && param2 && param4) {
        char* ptr1 = i;
        for(i = param2; i != 0L; --i) {
            *ptr1 = 0xcc;
            ++ptr1;
        }
        result = (unsigned char)*param4;
        *(long long*)(ptr0 + 4L) = (unsigned long long)result | ((unsigned long long)((*param4 >>> 8L) & 0xffffffffffffffL) << 8);
        *(unsigned long long*)(ptr0 + 12L) = param2;
        *param4 = ptr0;
    }
    return result;
}

unsigned int* RTC_CheckStackVars2(long long param0, long long param1, unsigned int* param2, long long param3, unsigned int* param4, long long param5, long long param6, long long param7, long long param8) {
    long long v0;
    long long v1;
    long long v2;
    param8 = v2;
    long long v3 = 0L;
    long long v4 = v1;
    long long v5 = param3;
    unsigned int* ptr0 = param4;
    if(param2) {
        unsigned int v6 = 0;
        if(*param2 > 0) {
            param7 = param1;
            long long v7 = 0L;
            do {
                long long v8 = *(long long*)(param2 + 2);
                param3 = (long long)*(int*)(v8 + v7);
                if(*(int*)(param3 + v5 - 4L) != 0xcccccccc || *(int*)((long long)*(int*)(v8 + v7 + 4L) + param3 + v5) != 0xcccccccc) {
                    RTC_StackFailure(0L, v7, *(long long*)(*(long long*)(param2 + 2) + v7 + 8L), v0);
                }
                ++v6;
                v7 += 16L;
            }
            while(*param2 > (int)v6);
            param1 = param7;
        }
    }
    unsigned int* result = ptr0;
    if(ptr0) {
        do {
            result = *(unsigned long long*)(result + 1);
            v3 = (unsigned long long)((unsigned int)v3 + 1);
        }
        while(result);
    }
    if(ptr0) {
        do {
            if(*ptr0 != 0xcccccccc || *(int*)(ptr0 + 5) != 0xcccccccc || *(int*)(ptr0 + 6) != 0xcccccccc || *(int*)(ptr0 + 7) != 0xcccccccc) {
                _RTC_AllocaFailure(v3, param1, (long long)ptr0, v0, (unsigned long long)(unsigned int)v3);
            }
            result = *(unsigned long long*)(ptr0 + 3);
            if(*(int*)((char*)((long long)result + (long long)ptr0) - 4L) != 0xcccccccc) {
                result = (unsigned int*)_RTC_AllocaFailure(v3, param1, (long long)ptr0, v0, (unsigned long long)(unsigned int)v3);
            }
            ptr0 = *(unsigned long long*)(ptr0 + 1);
            v3 = (unsigned long long)((unsigned int)v3 - 1);
        }
        while(ptr0);
    }
    return result;
}

unsigned long long RTC_InitBase() {
    unsigned long long result;
    if(!gvar_140009150) {
        gvar_140009150 = 1;
        long long v0 = →MSVCR90D.dll!_CRT_RTC_INITW();
        result = RTC_SetErrorFuncW((unsigned long long)v0);
    }
    return result;
}

long long RTC_Initialize(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6) {
    long long result;
    long long* ptr0 = (long long*)&gvar_1400075C0;
    do {
        result = *ptr0;
        if(result) {
            result = result();
        }
        ++ptr0;
    }
    while((unsigned long long)ptr0 < &__rtc_izz);
    return result;
}

unsigned long long RTC_SetErrorFuncW(unsigned long long param0) {
    unsigned long long result = _RTC_ErrorReportFuncW;
    _RTC_ErrorReportFunc = 0L;
    _RTC_ErrorReportFuncW = param0;
    return result;
}

long long RTC_Shutdown() {
    return →MSVCR90D.dll!_CRT_RTC_INITW();
}

long long RTC_Terminate(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6) {
    long long result;
    long long* ptr0 = (long long*)&gvar_1400078F0;
    do {
        result = *ptr0;
        if(result) {
            result = result();
        }
        ++ptr0;
    }
    while((unsigned long long)ptr0 < &__rtc_tzz);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long RTC_UninitUse(unsigned char* param0, long long param1, long long param2, unsigned char* param3) {
    unsigned char* ptr0;
    char v0;
    char v1;
    long long v2;
    char v3;
    char v4;
    char v5;
    char v6;
    long long result;
    long long* ptr1 = (long long*)(__security_cookie ^ (long long)&v0);
    unsigned int v7 = gvar_14000901C;
    if(v7 != -1) {
        if(param3) {
            long long v8 = -1L;
            param0 = param3;
            while(v8 != 0L) {
                char v9 = *param0 == 0;
                ++param0;
                --v8;
                if(!~v9) {
                    break;
                }
            }
            if((unsigned long long)(56L - v8) > 0x400L) {
                ptr0 = "A variable is being used without being initialized.";
                failwithmessage((long long)param0, param1, (unsigned long long)v7, v2, 3L, (long long)ptr0);
                security_check_cookie((long long)(long long*)((long long)&v0 ^ (long long)ptr1));
                return result;
            }
            ptr0 = &v1;
            long long v10 = 0L;
            do {
                v4 = aThe_variable__[v10];
                ++v10;
                *(char*)(v10 + (long long)&v3) = v4;
            }
            while(v4);
            long long v11 = -1L;
            unsigned char* ptr2 = &v1;
            while(v11 != 0L) {
                char v12 = *ptr2 == 0;
                ++ptr2;
                --v11;
                if(!~v12) {
                    break;
                }
            }
            long long v13 = 0L;
            do {
                v5 = *(char*)((long long)param3 + v13);
                ++v13;
                *(char*)((char*)(v13 + (long long)ptr2) - 2L) = v5;
            }
            while(v5);
            long long v14 = -1L;
            param0 = &v1;
            while(v14 != 0L) {
                char v15 = *param0 == 0;
                ++param0;
                --v14;
                if(!~v15) {
                    break;
                }
            }
            long long v16 = 0L;
            do {
                v6 = a__is_being_used[v16];
                ++v16;
                *((char*)(v16 + (long long)param0) - 2L) = v6;
            }
            while(v6);
        }
        else {
            ptr0 = "A variable is being used without being initialized.";
        }
        failwithmessage((long long)param0, param1, (unsigned long long)v7, v2, 3L, (long long)ptr0);
    }
    security_check_cookie((long long)(long long*)((long long)&v0 ^ (long long)ptr1));
    return result;
}

long long ValidateImageBase(short* param0) {
    long long result;
    short* ptr0 = param0;
    short* ptr1 = param0;
    if((unsigned int)*param0 != 23117) {
        result = 0L;
    }
    else {
        unsigned int* ptr2 = (unsigned int*)((long long)(short*)*(int*)(param0 + 30) + (long long)param0);
        if(*ptr2 != 0x4550) {
            result = 0L;
        }
        else {
            short* ptr3 = (short*)(ptr2 + 6);
            result = (unsigned int)*(short*)(ptr2 + 6) != 523 ? 0L: 1L;
        }
    }
    return result;
}

long long _CxxSetUnhandledExceptionFilter() {
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&__CxxUnhandledExceptionFilter);
    return 0L;
}

long long _GSHandlerCheck(long long param0, long long param1, long long param2, long long param3) {
    long long v0 = param3;
    long long v1 = param1;
    _GSHandlerCheckCommon(param1, param3, *(unsigned int**)(param3 + 56L));
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long _GSHandlerCheckCommon(long long param0, long long param1, unsigned int* param2) {
    long long result;
    unsigned int* ptr0 = param2;
    long long v0 = param1;
    long long v1 = param0;
    int v2 = *param2 & 0xfffffff8;
    v6 = (*param2 >>> 2) & 0x1 ? ((long long)*(int*)(param2 + 1) + param0) & (long long)(0 - *(int*)(param2 + 2)): param0;
    uintptr_t v3 = *(uintptr_t*)((long long)v2 + v6);
    long long v4 = (unsigned long long)*(int*)(*(long long*)(param1 + 16L) + 8L) + *(long long*)(param1 + 8L);
    long long v5 = param0;
    if((unsigned int)(*(char*)(v4 + 3L) & 0xf)) {
        v5 += (long long)((unsigned int)((*(char*)(v4 + 3L) >>> 4) & 0xf) * 16);
    }
    _security_check_cookie(v3 ^ v5);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long _RTC_AllocaFailure(long long par0, long long par1, long long par2, long long par3, long long par4) {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long RTC_Failure(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    if((unsigned int)param2 <= 4) {
        result = (long long)(unsigned int)param2;
        long long v0 = (unsigned long long)*(int*)(result * 4L + &?_RTC_ErrorLevels@@3PAHA);
        void* ptr0 = *(void**)(result * 8L + (long long)&_RTC_ErrorMessages);
        if((unsigned int)v0 != -1) {
            return failwithmessage(param0, param1, (unsigned long long)(unsigned int)v0, param3, (unsigned long long)(unsigned int)param2, (long long)ptr0);
        }
    }
    else {
        result = failwithmessage(param0, param1, 1L, param3, 5L, "Unknown Runtime Check Error\n\r");
    }
    return result;
}

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS* param0) {
    if(param0->ExceptionRecord->ExceptionCode == -529697949 && param0->ExceptionRecord->NumberParameters == 4 && (*(int*)&param0->ExceptionRecord->ExceptionInformation[0] == 429065504 || *(int*)&param0->ExceptionRecord->ExceptionInformation[0] == 429065505 || *(int*)&param0->ExceptionRecord->ExceptionInformation[0] == 429065506 || *(int*)&param0->ExceptionRecord->ExceptionInformation[0] == 0x1994000)) {
        /*NO_RETURN*/ →MSVCR90D.dll!?terminate@@YAXXZ();
    }
    return 0;
}

void _getMemBlockDataString(char* param0, char* param1, char* param2, unsigned long long param3) {
    long long v0;
    long long v1;
    unsigned long long v2 = 0L;
    unsigned long long counter = param3 < 16L ? param3: 16L;
    if(counter) {
        long long v3 = v0;
        long long v4 = v1;
        char* ptr0 = param1;
        char* ptr1 = param0;
        long long* ptr2 = (long long*)((long long)param2 - (long long)param0);
        v2 = counter;
        do {
            long long v5 = (unsigned long long)ptr1[ptr2];
            wsprintffp[0](ptr0, "%.2X ", (unsigned long long)(unsigned int)v5);
            ptr1[0] = (char)v5;
            ++ptr1;
            ptr0 += 3L;
            --counter;
        }
        while(counter);
    }
    param0[v2] = 0;
    param1[v2 * 3L] = 0;
}

void _security_init_cookie() {
    long long v0;
    unsigned long long v1 = 0L;
    if(__security_cookie != 0x2b992ddfa232L) {
        __security_cookie_complement = ~__security_cookie;
    }
    else {
        GetSystemTimeAsFileTime(&v1);
        DWORD v2 = /*BAD_CALL!*/ GetCurrentProcessId();
        DWORD v3 = /*BAD_CALL!*/ GetCurrentThreadId();
        DWORD v4 = /*BAD_CALL!*/ GetTickCount();
        QueryPerformanceCounter(&v0);
        unsigned long long v5 = (unsigned long long)(((((unsigned long long)((unsigned long long)(unsigned int)v2 ^ v1) ^ (unsigned long long)(unsigned int)v3) ^ (unsigned long long)(unsigned int)v4) ^ v0) & 0xffffffffffffL);
        if(v5 == 0x2b992ddfa232L) {
            v5 = 0x2b992ddfa233L;
        }
        __security_cookie = v5;
        __security_cookie_complement = ~v5;
    }
}

long long _tmainCRTStartup() {
    long long result;
    long long* ptr0;
    char v0;
    void* ptr1;
    long long* ptr2 = &ptr0;
    char v1 = &ptr0 == 104L;
    char v2 = (long long)&v0 < 0L;
    char v3 = __parity__((unsigned char)&ptr0 - 104);
    char v4 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)&ptr0 ^ 0x68L) ^ (long long)&v0) >>> 4L) & 0x1L);
    char v5 = (unsigned long long)&ptr0 < 104L;
    char v6 = (long long)(long long*)((long long)(long long*)((long long)&ptr0 ^ (long long)&v0) & (long long)(long long*)((long long)&ptr0 ^ 0x68L)) < 0L;
    unsigned long long v7 = 0L;  // __try{ (see __except:140001D2Eh)
    _TEB* ptr3 = NtCurrentTeb();
    void* ptr4 = ptr3->Reserved1[1];
    void* ptr5 = ptr3->Reserved1[1];
    unsigned int v8 = 0;
    while(1) {
        void* ptr6 = ptr5;
        long long v9 = &__native_startup_lock;
        unsigned long long v10 = 0L;
        char v11 = 1;
        char v12 = 0;
        char v13 = 1;
        char v14 = 0;
        char v15 = 0;
        char v16 = *(long long*)&__native_startup_lock == 0L;
        char v17 = (char)*(long long*)&__native_startup_lock > 0L;
        char v18 = __parity__(0 - (unsigned char)*(long long*)&__native_startup_lock);
        char v19 = *(long long*)&__native_startup_lock > 0L;
        char v20 = ((0L - *(long long*)&__native_startup_lock) & *(long long*)&__native_startup_lock) < 0L;
        char v21 = (((0L - *(long long*)&__native_startup_lock) ^ *(long long*)&__native_startup_lock) >>> 4L) & 0x1L;
        if(v16 != 0) {
            *(long long*)&__native_startup_lock = ptr6;
        }
        else {
            v10 = *(long long*)&__native_startup_lock;
        }
        v7 = v10;
        char v22 = v7 ? 0: 1;
        char v23 = v7 >= 0x8000000000000000L;
        char v24 = __parity__((unsigned char)v7);
        char v25 = v7 < 0L;
        char v26 = 0;
        char v27 = 0;
        if(v22) {
            break;
        }
        else {
            void* ptr7 = ptr5;
            char v28 = ptr7 == v7;
            char v29 = (long long)ptr7 > (long long)v7;
            char v30 = __parity__((unsigned char)v7 - (unsigned char)ptr7);
            char v31 = (unsigned long long)ptr7 > v7;
            char v32 = (long long)(long long*)((long long)(long long*)((long long)(long long*)(v7 - (long long)ptr7) ^ v7) & (long long)(long long*)((long long)ptr7 ^ v7)) < 0L;
            char v33 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)(v7 - (long long)ptr7) ^ (long long)(long long*)((long long)ptr7 ^ v7)) >>> 4L) & 0x1L);
            if(v28) {
                v8 = 1;
                break;
            }
            else {
                long long v34 = 1000L;
                Sleep(1000);
            }
        }
    }
    unsigned int v35 = __native_startup_state;
    int v36 = 0;
    char v37 = __native_startup_state == 1;
    char v38 = (int)v35 < 1;
    char v39 = __parity__((unsigned char)v35 - 1);
    char v40 = v35 < 1;
    char v41 = (((v35 - 1) ^ v35) & (v35 ^ 0x1)) < 0;
    char v42 = (((v35 - 1) ^ (v35 ^ 0x1)) >>> 4) & 0x1;
    if(v37) {
        long long v43 = 31L;
        /*NO_RETURN*/ →MSVCR90D.dll!_amsg_exit(31);
    }
    unsigned int v44 = __native_startup_state;
    int v45 = 0;
    char v46 = __native_startup_state ? 0: 1;
    char v47 = v44 >= 0x80000000;
    char v48 = __parity__((unsigned char)v44);
    char v49 = 0;
    char v50 = 0;
    if(v46) {
        __native_startup_state = 1;
        long long v51 = &__xi_z;
        long long v52 = &__xi_a;
        int v53 = /*BAD_CALL!*/ →MSVCR90D.dll!_initterm_e((_PIFV*)&__xi_a, (_PIFV*)&__xi_z);
        int v54 = (unsigned int)v53;
        int v55 = (unsigned int)(v53 >>> 32L);
        char v56 = v54 ? 0: 1;
        char v57 = v54 < 0;
        char v58 = __parity__((unsigned char)v54);
        char v59 = 0;
        char v60 = 0;
        if(v56) {
            goto loc_140001C2E;
        }
        else {
            result = 0xffL;
        }
    }
    else {
        has_cctor = 1;
    loc_140001C2E:
        unsigned int v61 = __native_startup_state;
        int v62 = 0;
        char v63 = __native_startup_state == 1;
        char v64 = (int)v61 < 1;
        char v65 = __parity__((unsigned char)v61 - 1);
        char v66 = v61 < 1;
        char v67 = (((v61 - 1) ^ v61) & (v61 ^ 0x1)) < 0;
        char v68 = (((v61 - 1) ^ (v61 ^ 0x1)) >>> 4) & 0x1;
        if(v63) {
            long long v69 = &__xc_z;
            long long v70 = &__xc_a;
            →MSVCR90D.dll!_initterm((_PVFV*)&__xc_a, (_PVFV*)&__xc_z);
            __native_startup_state = 2;
        }
        unsigned int v71 = __native_startup_state;
        int v72 = 0;
        char v73 = __native_startup_state == 2;
        char v74 = (int)v71 < 2;
        char v75 = __parity__((unsigned char)v71 - 2);
        char v76 = v71 < 2;
        char v77 = (((v71 - 2) ^ v71) & (v71 ^ 0x2)) < 0;
        char v78 = (((v71 - 2) ^ (v71 ^ 0x2)) >>> 4) & 0x1;
        if(!v73) {
            long long v79 = "__native_startup_state == __initialized";
            long long v80 = "__native_startup_state == __initialized";
            long long v81 = 0L;
            char v82 = 1;
            char v83 = 0;
            char v84 = 1;
            char v85 = 0;
            char v86 = 0;
            long long v87 = 500L;
            long long v88 = "f:\\dd\\vctools\\crt_bld\\self_64_amd64\\crt\\src\\crtexe.c";
            long long v89 = 2L;
            long long* ptr8 = &ptr1;
            result = MSVCR90D.dll!_CrtDbgReportW();
            char v90 = (unsigned int)result == 1;
            char v91 = (unsigned int)result < 1;
            char v92 = __parity__((unsigned char)result - 1);
            char v93 = (unsigned int)result < 1;
            char v94 = ((((unsigned int)result - 1) ^ (unsigned int)result) & ((unsigned int)result ^ 0x1)) < 0;
            char v95 = ((((unsigned int)result - 1) ^ ((unsigned int)result ^ 0x1)) >>> 4) & 0x1;
            if(v90) {
                interrupt(3);
            }
        }
        if(!v8) {
            *(long long*)&__native_startup_lock = 0;
        }
        if(__dyn_tls_init_callback) {
            long long v96 = /*BAD_CALL!*/ IsNonwritableInCurrentImage(&__dyn_tls_init_callback);
            int v97 = (unsigned int)v96;
            if(v97) {
                __dyn_tls_init_callback(0L, 2L, 0L);
            }
        }
        MSVCR90D.dll!_CrtSetCheckCount();
        *(unsigned long long*)0xB796 = envp;
        int v98 = main();
        mainret = (unsigned int)v98;
        if(!managedapp) {
            /*NO_RETURN*/ exit(mainret);
        }
        if(!has_cctor) {
            cexit();
        }
        result = (unsigned long long)mainret;
    }
    return result;
}

int atexit(FUNCPTR _) {
    _onexit_t v0 = onexit((_onexit_t)_);
    return v0 ? 0: -1;
}

long long check_managed_app() {
    return 0L;
}

long long failwithmessage(long long param0, LPCCH param1, long long param2, long long param3, long long param4, LPCCH param5) {
    char v0;
    LPWSTR v1;
    long long v2;
    long long v3;
    long long v4;
    char v5;
    char v6;
    char v7;
    char v8;
    int v9;
    char v10;
    long long v11;
    long long result;
    LPCCH lpMultiByteStr;
    long long v12;
    long long v13;
    long long v14;
    long long* ptr0 = (long long*)(__security_cookie ^ (long long)&v3);
    long long v15 = 0L;
    long long v16 = /*BAD_CALL!*/ RTC_GetErrorFuncW();
    if(!v16) {
        v15 = RTC_GetErrorFunc();
    }
    int v17 = 0;
    LPWSTR v18 = NULL;
    int v19 = MultiByteToWideChar(65001, 0, lpMultiByteStr, -1, NULL, 0);
    if((unsigned int)(int)v19 < 0x200) {
        v17 = (int)v19;
        v18 = &v5;
        int v20 = MultiByteToWideChar(65001, 0, lpMultiByteStr, -1, &v5, (int)v19);
        if(!(unsigned int)v20) {
            goto loc_14000215F;
        }
        else {
            v1 = &v5;
        }
    }
    else {
    loc_14000215F:
        v1 = "Runtime Check Error.\n\r Unable to display RTC Message.";
    }
    long long v21 = DebuggerProbe(0x1002L, v12);
    if((unsigned int)v21) {
        v21 = DebuggerRuntime((unsigned long long)(unsigned int)v13, (unsigned long long)*(int*)((long long)(unsigned int)v13 * 4L + (long long)&_RTC_NoFalsePositives), v14, (long long)v1);
        if(!(unsigned int)v21) {
            goto loc_14000219A;
        }
    }
    else {
        v21 = (unsigned long long)1 | ((unsigned long long)((v21 >>> 8L) & 0xffffffffffffffL) << 8);
    loc_14000219A:
        if(v15 || v16) {
            if((unsigned char)v21) {
                BOOL v22 = IsDebuggerPresent();
                if((unsigned int)v22) {
                    DebugBreak();
                    security_check_cookie((long long)(long long*)((long long)&v3 ^ (long long)ptr0));
                    return result;
                }
            }
            v17 = 260;
            RTC_GetSrcLine(v14, (long long)v1, (long long)&v7, v14 - 5L, 260L, (long long)&v9, v3, v11, v2, v4, (long long)&v10, *(long long*)&v17);
            if(v16) {
                v17 = (int)v13;
                v18 = "Run-Time Check Failure #%d - %s";
                long long v23 = v16((unsigned long long)(unsigned int)v12, (long long)&v7, (unsigned long long)v9, (long long)&v10);
                v0 = (unsigned int)v23 == 1;
            }
            else {
                int v24 = WideCharToMultiByte(65001, 0, &v7, -1, &v8, 778, NULL, NULL);
                LPBOOL v25 = NULL;
                int v26 = WideCharToMultiByte(65001, 0, &v10, -1, &v6, 778, NULL, NULL);
                LPCCH v27 = lpMultiByteStr;
                v17 = (int)v13;
                v18 = "Run-Time Check Failure #%d - %s";
                long long v28 = v15((unsigned long long)(unsigned int)v12, (long long)((unsigned int)v24 ? &v8: "Unknown Filename"), (unsigned long long)v9, (long long)((unsigned int)v26 ? &v6: "Unknown Module Name"));
                v0 = (unsigned int)v28 == 1;
            }
            if(v0) {
                DebugBreak();
                security_check_cookie((long long)(long long*)((long long)&v3 ^ (long long)ptr0));
                return result;
            }
        }
        else {
            DebugBreak();
        }
    }
    security_check_cookie((long long)(long long*)((long long)&v3 ^ (long long)ptr0));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int main() {
    long long v0;
    unsigned int v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v2;
    unsigned int v7 = v1;
    long long* ptr0 = &v0;
    long long v8 = 12L;
    do {
        *(int*)ptr0 = 0xcccccccc;
        ptr0 = (long long*)((char*)ptr0 + 4L);
        --v8;
    }
    while(v8 == 0L);
    int result = 0;
    for(unsigned int i = 1; (int)i < (int)v7; ++i) {
        long long v9 = sub_14000100F((long long)ptr0, v3, v2, *(long long*)((long long)i * 8L + v6), v4, v5, v0);
        result += (unsigned int)v9;
    }
    return result;
}

_onexit_t onexit(_onexit_t _Func) {
    _onexit_t result;
    _onexit_t _Func1;
    unsigned long long v0 = (unsigned long long)MSVCR90D.dll!_decode_pointer();
    if(v0 == -1L) {
        result = onexit(_Func1);
    }
    else {
        →MSVCR90D.dll!_lock();
        v0 = (unsigned long long)MSVCR90D.dll!_decode_pointer();
        long long v1 = MSVCR90D.dll!_decode_pointer();
        long long v2 = MSVCR90D.dll!_encode_pointer();
        long long v3 = →MSVCR90D.dll!__dllonexit();
        unsigned long long v4 = (unsigned long long)MSVCR90D.dll!_encode_pointer();
        __onexitbegin = v4;
        unsigned long long v5 = (unsigned long long)MSVCR90D.dll!_encode_pointer();
        __onexitend = v5;  // } (starts at 140002A0Eh)
        →MSVCR90D.dll!_unlock();
        result = (_onexit_t)v3;
    }
    return result;
}

long long pre_cpp_init() {
    atexit((void __stdcall (*_)())&RTC_Terminate);
    startinfo = _newmode;
    long long result = MSVCR90D.dll!__getmainargs();
    argret = (unsigned int)result;
    if(argret >= 0x80000000) {
        /*NO_RETURN*/ →MSVCR90D.dll!_amsg_exit(8);
    }
    return result;
}

long long setargv() {
    return 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long start() {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    _security_init_cookie();
    return _tmainCRTStartup(v0, v1, v2, v3);
}

long long sub_14000100A(long long param0, long long param1, int param2, long long param3, unsigned int param4, long long param5, long long param6, int param7, unsigned int param8) {
    long long v0;
    char v1;
    long long v2;
    long long v3;
    long long result;
    char v4;
    char v5;
    long long v6;
    long long v7;
    param8 = param4;
    param7 = param2;
    param6 = param3;
    long long* ptr0 = &v0;
    long long v8 = 44L;
    do {
        *(int*)ptr0 = 0xcccccccc;
        ptr0 = (long long*)((char*)ptr0 + 4L);
        --v8;
    }
    while(v8 == 0L);
    long long* ptr1 = (long long*)(__security_cookie ^ (long long)&v0);
    sprintf(&v1, "%08lX:", (unsigned long long)param7);
    if((int)param8 > 16) {
        param8 = 16;
    }
    unsigned int i;
    for(i = 0; (int)i < (int)param8; ++i) {
        sprintf((char*)((long long)(i * 3) + (long long)&v5), " %02lX");
    }
    while(1) {
        unsigned int v9 = i;
        ++i;
        unsigned int v10 = (int)v9 >= 16 ? 0: 1;
        if((int)v9 >= 16) {
            break;
        }
        else {
            →MSVCR90D.dll!strcat(&v1, (char*)&gvar_1400067A0);
        }
    }
    size_t v11 = →MSVCR90D.dll!strlen(&v1);
    unsigned int v12 = (unsigned int)v11;
    →MSVCR90D.dll!strcpy((char*)((long long)v12 + (long long)&v1), (char*)&gvar_1400067A4);
    v12 += 3;
    for(i = 0; (int)i < (int)param8; ++i) {
        *(int*)&v4 = (unsigned int)*(char*)((long long)i + param6) >= 32 && (unsigned int)*(char*)((long long)i + param6) <= 126 ? (unsigned int)*(char*)((long long)i + param6): 46;
        *(char*)((long long)(i + v12) + (long long)&v1) = v4;
    }
    while((int)i < 16) {
        *(char*)((long long)(i + v12) + (long long)&v1) = ' ';
        ++i;
    }
    →MSVCR90D.dll!strcpy((char*)((long long)i + (long long)v12 + (long long)&v1), (char*)&gvar_1400067A8);
    printf((char*)&gvar_1400067AC);
    RTC_CheckStackVars((long long)ptr0, param1, &gvar_140006800, (long long)&v0, v6, v7, v0, v2, v3);
    security_check_cookie((long long)(long long*)((long long)&v0 ^ (long long)ptr1));
    return result;
}

long long sub_14000100F(long long param0, long long param1, long long param2, char* param3, long long param4, long long param5, char* _ErrMsg) {
    long long v0;
    char* _FileName;
    char v1;
    int v2;
    char v3;
    unsigned int v4;
    long long result;
    unsigned int v5;
    long long v6;
    _ErrMsg = param3;
    long long v7 = &_FileName;
    long long v8 = 44L;
    do {
        *(int*)v7 = 0xcccccccc;
        v7 += 4L;
        --v8;
    }
    while(v8 == 0L);
    long long v9 = __security_cookie ^ &_FileName;
    int v10 = /*BAD_CALL!*/ sub_140001430(v7, param1, &v1, _ErrMsg, param4, param5, _FileName, *(_stat64i32**)&v2);
    if((unsigned int)v10) {
        perror(_ErrMsg);
        v0 = 1L;
    }
    else {
        FILE* _Stream = fopen(_ErrMsg, (char*)&gvar_1400067B0);
        if(!_Stream) {
            perror(_ErrMsg);
            v0 = 1L;
        }
        else {
            unsigned int v11 = 0;
            while(v11 < v5) {
                size_t v12 = fread(&v3, 1L, 16L, _Stream);
                unsigned int v13 = (unsigned int)v12;
                if(!v13) {
                    break;
                }
                else {
                    sub_14000100A(v6, param1, (long long)v11, (long long)&v3, v13, param5, (long long)_FileName, v2, v4);
                    v11 += v13;
                }
            }
            fclose(_Stream);
            v0 = 0L;
        }
    }
    RTC_CheckStackVars(v0, param1, &gvar_1400068A0, &_FileName, param4, param5, (long long)_FileName, *(long long*)&v2, *(long long*)&v4);
    security_check_cookie(&_FileName ^ v9);
    return result;
}

int sub_140001430(long long param0, long long param1, _stat64i32* param2, char* param3, long long param4, long long param5, char* _FileName, _stat64i32* _Stat) {
    char v0;
    _Stat = param2;
    _FileName = param3;
    int* ptr0 = &v0;
    long long v1 = 8L;
    do {
        *ptr0 = 0xcccccccc;
        ++ptr0;
        --v1;
    }
    while(v1 == 0L);
    return stat64i32(_FileName, _Stat);
}

long long unk_lib_sub(long long param0, long long param1) {
    *(long long*)(param1 + 80L) = param0;
    *(int*)(param1 + 72L) = ***(unsigned long long*)(param1 + 80L);
    return →MSVCR90D.dll!_XcptFilter();
}

long long unk_lib_sub2(long long param0, long long param1) {
    return →MSVCR90D.dll!_unlock();
}

long long unk_lib_sub3(long long param0, long long param1) {
    *(long long*)(param1 + 56L) = param0;
    *(int*)(param1 + 64L) = ***(unsigned long long*)(param1 + 56L);
    *(int*)(param1 + 72L) = *(int*)(param1 + 64L) == 0xc0000005 ? 1: 0;
    return (unsigned long long)*(int*)(param1 + 72L);
}

long long unk_lib_sub4(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = check_managed_app();
    managedapp = (unsigned int)v4;
    set_app_type(1);
    unsigned long long v5 = (unsigned long long)MSVCR90D.dll!_encode_pointer();
    __onexitend = v5;
    __onexitbegin = __onexitend;
    *(unsigned int*)0xB70A = _fmode;
    *(unsigned int*)0xB6FE = _commode;
    RTC_Initialize(param0, param1, v1, 46846L, v2, v3, v0);
    setargv();
    if(!__defaultmatherr) {
        _setusermatherr((_UserMathErrorFunctionPointer)&_matherr);
    }
    if(__globallocalestatus == -1) {
        configthreadlocale(-1);
    }
    return 0L;
}

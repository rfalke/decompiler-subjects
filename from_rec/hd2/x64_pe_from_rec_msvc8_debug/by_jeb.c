
long long DebuggerKnownHandle() {
    BOOL v0 = IsDebuggerPresent();
    if((unsigned int)v0) {
        v0 = DebuggerProbe(0x1004);
        if((unsigned int)v0) {
            return 1L;
        }
    }
    return 0L;
}

int DebuggerProbe(unsigned long param0) {
    char v0;
    int v1 = 0x1001;
    unsigned long v2 = param0;
    char* ptr0 = &v0;
    RaiseException(1080890248, 0, 10, &v1);
    return 0;
}

int DebuggerRuntime(unsigned long param0, int param1, void* param2, wchar_t* param3) {
    char v0;
    int v1 = 0x1002;
    unsigned long v2 = param0;
    int v3 = param1;
    void* ptr0 = param2;
    char* ptr1 = &v0;
    wchar_t* ptr2 = param3;
    RaiseException(1080890248, 0, 10, &v1);
    return 0;
}

long long FindPESection(long long param0, unsigned long long param1) {
    unsigned long long v0 = param1;
    long long v1 = param0;
    long long v2 = (long long)*(int*)(param0 + 60L) + param0;
    unsigned int v3 = 0;
    long long result = (unsigned long long)*(short*)(v2 + 20L) + v2 + 24L;
    while((unsigned int)*(short*)(v2 + 6L) > v3) {
        if((unsigned long long)*(int*)(result + 12L) <= v0 && (unsigned long long)(*(int*)(result + 12L) + *(int*)(result + 8L)) > v0) {
            return result;
        }
        ++v3;
        result += 40L;
    }
    return 0L;
}

HINSTANCE__* GetPdbDll() {
    char v0;
    long long v1;
    int v2;
    char v3;
    HINSTANCE__* result;
    char v4;
    long long v5;
    long long v6;
    long long* ptr0 = (long long*)(__security_cookie ^ (long long)&v0);
    if(!gvar_140009724) {
        LPCSTR lpLibFileName = mspdbName;
        gvar_140009724 = 1;
        HMODULE v7 = LoadLibraryA(lpLibFileName);
        if(!v7) {
            HMODULE hModule = LoadLibraryA("ADVAPI32.DLL");
            if(hModule) {
                long long v8 = v5;
                FARPROC v9 = GetProcAddress(hModule, "RegOpenKeyExA");
                if(v9) {
                    FARPROC v10 = GetProcAddress(hModule, "RegQueryValueExA");
                    if(v10) {
                        long long v11 = v6;
                        FARPROC v12 = GetProcAddress(hModule, "RegCloseKey");
                        if(v12) {
                            LPCSTR v13 = &v1;
                            INT_PTR v14 = v9(0xffffffff80000002L, "SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS", 0L, 1L);
                            if((unsigned int)v14) {
                                FreeLibrary(hModule);
                            }
                            else {
                                int* ptr1 = &v2;
                                long long v15 = 0L;
                                v13 = NULL;
                                INT_PTR v16 = v10(v1, "EnvironmentDirectory", 0L, &v4);
                                if(!(unsigned int)v16 && (unsigned int)(0x7fffffff - v2) >= 13 && (unsigned int)(v2 + 13) < 260) {
                                    ptr1 = &v2;
                                    v13 = &v3;
                                    INT_PTR v17 = v10(v1, "EnvironmentDirectory", 0L, &v4);
                                    v12(v1);
                                    FreeLibrary(hModule);
                                    if(!(unsigned int)v17) {
                                        long long v18 = (unsigned long long)v2;
                                        if(*(char*)(((v18 - 2L) & 0xFFFFFFFFL) + (long long)&v3) != 92) {
                                            *(char*)(((v18 - 1L) & 0xFFFFFFFFL) + (long long)&v3) = '\\';
                                        }
                                        else {
                                            v18 = (unsigned long long)((unsigned int)v18 - 1);
                                            v2 = (unsigned int)v18;
                                        }
                                        unsigned long long v19 = mspdbName;
                                        do {
                                            char v20 = *(char*)(v15 + v19);
                                            long long v21 = v18 & 0xFFFFFFFFL;
                                            ++v15;
                                            v18 = (unsigned long long)((unsigned int)v18 + 1);
                                            *(char*)(v21 + (long long)&v3) = v20;
                                        }
                                        while(v15 <= 11L);
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
    _security_check_cookie((uintptr_t)((long long)&v0 ^ (long long)ptr0));
    return result;
}

long long IsNonwritableInCurrentImage(long long param0) {
    long long result;
    long long v0 = param0;
    long long v1 = &MZHeader;
    long long v2 = ValidateImageBase((short*)&MZHeader);
    if(!(unsigned int)v2) {
        result = 0L;
    }
    else {
        unsigned long long v3 = (unsigned long long)(param0 - &MZHeader);
        long long v4 = FindPESection(&MZHeader, (unsigned long long)(param0 - &MZHeader));
        result = !v4 ? 0L: !(*(int*)(v4 + 36L) & 0x80000000) ? 1L: 0L;
    }
    return result;
}

long long NtCurrentTeb() {
    return *(long long*)(__GS_BASE + (long long)(long long*)0x30);
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

long long RTC_CheckStackVars(long long param0, long long param1, int* param2, long long param3, long long param4, long long param5, long long param6, long long param7, long long param8) {
    long long result;
    void* ptr0;
    long long v0;
    int v1 = 0;
    long long v2 = param3;
    if(*param2 > 0) {
        param6 = v0;
        long long v3 = 0L;
        do {
            long long v4 = *(long long*)(param2 + 2);
            param3 = (long long)*(int*)(v4 + v3);
            if(*(int*)(param3 + v2 - 4L) == 0xcccccccc) {
                result = (long long)*(int*)(v4 + v3 + 4L) + param3;
                if(*(int*)(result + v2) != 0xcccccccc) {
                    goto loc_140001821;
                }
            }
            else {
            loc_140001821:
                _RTC_StackFailure(ptr0, *(char**)(*(long long*)(param2 + 2) + v3 + 8L));
            }
            ++v1;
            v3 += 16L;
        }
        while(*param2 > v1);
    }
    return result;
}

long long RTC_CheckStackVars2(long long param0, long long param1, int* param2, long long param3, int* param4, long long param5, long long param6, long long param7, long long param8) {
    long long result;
    void* ptr0;
    long long v0;
    long long v1;
    param8 = v1;
    long long v2 = 0L;
    long long v3 = v0;
    long long v4 = param3;
    int* ptr1 = param4;
    if(param2) {
        int v5 = 0;
        if(*param2 > 0) {
            param7 = param1;
            long long v6 = 0L;
            do {
                long long v7 = *(long long*)(param2 + 2);
                param3 = (long long)*(int*)(v7 + v6);
                if(*(int*)(param3 + v4 - 4L) != 0xcccccccc || *(int*)((long long)*(int*)(v7 + v6 + 4L) + param3 + v4) != 0xcccccccc) {
                    _RTC_StackFailure(ptr0, *(char**)(*(long long*)(param2 + 2) + v6 + 8L));
                }
                ++v5;
                v6 += 16L;
            }
            while(*param2 > v5);
            param1 = param7;
        }
    }
    int* ptr2 = ptr1;
    if(ptr1) {
        do {
            ptr2 = *(unsigned long long*)(ptr2 + 1);
            v2 = (unsigned long long)((unsigned int)v2 + 1);
        }
        while(ptr2);
    }
    if(ptr1) {
        do {
            if(*ptr1 != 0xcccccccc || *(ptr1 + 5) != 0xcccccccc || *(ptr1 + 6) != 0xcccccccc || *(ptr1 + 7) != 0xcccccccc) {
                result = _RTC_AllocaFailure(v2, param1, (long long)ptr1, (long long)ptr0, v2 & 0xFFFFFFFFL);
            }
            if(*(int*)((char*)(*(long long*)(ptr1 + 3) + (long long)ptr1) - 4L) != 0xcccccccc) {
                _RTC_AllocaFailure(v2, param1, (long long)ptr1, (long long)ptr0, v2 & 0xFFFFFFFFL);
            }
            ptr1 = *(unsigned long long*)(ptr1 + 1);
            v2 = (unsigned long long)((unsigned int)v2 - 1);
        }
        while(ptr1);
    }
    return result;
}

long long RTC_GetErrDesc(unsigned int param0) {
    if(param0 <= 4) {
        return *(long long*)((long long)param0 * 8L + (long long)&_RTC_errlist);
    }
    return 0L;
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

long long RTC_NumErrors() {
    return 5L;
}

unsigned long long RTC_SetErrorFunc(unsigned long long param0) {
    unsigned long long result = _RTC_ErrorReportFunc;
    _RTC_ErrorReportFuncW = 0L;
    _RTC_ErrorReportFunc = param0;
    return result;
}

unsigned long long RTC_SetErrorFuncW(unsigned long long param0) {
    unsigned long long result = _RTC_ErrorReportFuncW;
    _RTC_ErrorReportFunc = 0L;
    _RTC_ErrorReportFuncW = param0;
    return result;
}

long long RTC_SetErrorType(long long param0, int param1) {
    if((unsigned int)param0 <= 4) {
        param0 = (long long)(unsigned int)param0;
        long long result = (unsigned long long)_RTC_ErrorLevels[param0];
        _RTC_ErrorLevels[param0] = param1;
        return result;
    }
    return 0xFFFFFFFFL;
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

long long RTC_UninitUse(long long param0, long long param1, long long param2, char* param3) {
    char* ptr0;
    char v0;
    char v1;
    void* ptr1;
    char v2;
    char v3;
    char v4;
    char v5;
    long long result;
    long long* ptr2 = (long long*)(__security_cookie ^ (long long)&v0);
    int v6 = gvar_14000901C;
    if(v6 != -1) {
        if(param3) {
            long long v7 = -1L;
            char* ptr3 = param3;
            while(v7 != 0L) {
                char v8 = *ptr3 == 0;
                ++ptr3;
                --v7;
                if(!~v8) {
                    break;
                }
            }
            if((unsigned long long)(~v7 + 57L) > 0x400L) {
                ptr0 = "A variable is being used without being initialized.";
                failwithmessage(ptr1, v6, 3, ptr0);
                _security_check_cookie((uintptr_t)((long long)&v0 ^ (long long)ptr2));
                return result;
            }
            ptr0 = &v1;
            long long v9 = 0L;
            do {
                v3 = aThe_variable__[v9];
                ++v9;
                *(char*)(v9 + (long long)&v2) = v3;
            }
            while(v3);
            long long v10 = -1L;
            char* ptr4 = &v1;
            while(v10 != 0L) {
                char v11 = ptr4[0] == 0;
                ++ptr4;
                --v10;
                if(!~v11) {
                    break;
                }
            }
            long long v12 = 0L;
            do {
                v4 = *(char*)((long long)param3 + v12);
                ++v12;
                ptr4[v12 - 2L] = v4;
            }
            while(v4);
            long long v13 = -1L;
            char* ptr5 = &v1;
            while(v13 != 0L) {
                char v14 = ptr5[0] == 0;
                ++ptr5;
                --v13;
                if(!~v14) {
                    break;
                }
            }
            long long v15 = 0L;
            do {
                v5 = a__is_being_used[v15];
                ++v15;
                ptr5[v15 - 2L] = v5;
            }
            while(v5);
        }
        else {
            ptr0 = "A variable is being used without being initialized.";
        }
        failwithmessage(ptr1, v6, 3, ptr0);
    }
    _security_check_cookie((uintptr_t)((long long)&v0 ^ (long long)ptr2));
    return result;
}

long long ValidateImageBase(short* param0) {
    long long result;
    short* ptr0 = param0;
    short* ptr1 = param0;
    if(*param0 != 23117) {
        result = 0L;
    }
    else {
        int* ptr2 = (int*)((long long)(short*)*(int*)(param0 + 30) + (long long)param0);
        result = *ptr2 != 0x4550 ? 0L: *(short*)(ptr2 + 6) != 523 ? 0L: 1L;
    }
    return result;
}

long long _CxxSetUnhandledExceptionFilter() {
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&__CxxUnhandledExceptionFilter);
    return 0L;
}

long long _GSHandlerCheck(long long param0, long long param1, long long param2, long long param3) {
    _GSHandlerCheckCommon(param1, param3, *(int**)(param3 + 56L));
    return 1L;
}

long long _GSHandlerCheckCommon(long long param0, long long param1, int* param2) {
    long long result;
    int* ptr0 = param2;
    long long v0 = param1;
    long long v1 = param0;
    int v2 = *param2 & 0xfffffff8;
    long long v3 = !((*param2 >>> 2) & 0x1) ? v1: ((long long)*(param2 + 1) + v1) & (long long)(0 - *(param2 + 2));
    uintptr_t v4 = *(uintptr_t*)((long long)v2 + v3);
    long long v5 = (unsigned long long)*(int*)(*(long long*)(v0 + 16L) + 8L) + *(long long*)(v0 + 8L);
    long long v6 = v1;
    if((*(char*)(v5 + 3L) & 0xf)) {
        v6 += (unsigned long long)((unsigned int)((*(char*)(v5 + 3L) >>> 4) & 0xf) * 16);
    }
    _security_check_cookie(v4 ^ v6);
    return result;
}

long long _RTC_AllocaFailure(long long par0, long long par1, long long par2, long long par3, long long par4) {
    // Decompilation error
}

void _RTC_Failure(void* param0, int param1) {
    char v0;
    unsigned long long* ptr0 = &v0;
    if((unsigned int)param1 <= 4) {
        int v1 = _RTC_ErrorLevels[(long long)(unsigned int)param1];
        char* ptr1 = *(char**)((long long)(unsigned int)param1 * 8L + (long long)&_RTC_ErrorMessages);
        if(v1 != -1) {
            failwithmessage(param0, v1, (int)param1, ptr1);
            return;
        }
    }
    else {
        --ptr0;
        *ptr0 = &loc_1400020A5;
        /*BAD_CALL!*/ failwithmessage(param0, 1, 5, "Unknown Runtime Check Error\n\r");
    }
    jump *(long long*)(ptr0 + 5);
}

unsigned long long _RTC_GetErrorFunc() {
    return _RTC_ErrorReportFunc;
}

unsigned long long _RTC_GetErrorFuncW() {
    return _RTC_ErrorReportFuncW;
}

int _RTC_GetSrcLine(unsigned char* param0, wchar_t* param1, unsigned long param2, int* param3, wchar_t* param4, unsigned long nSize) {
    int result;
    unsigned long long* ptr0;
    char v0;
    long long* ptr1;
    long long* ptr2;
    long long v1;
    long long v2;
    short v3;
    unsigned long v4;
    HMODULE hModule;
    int v5;
    char v6;
    int v7;
    unsigned long v8;
    unsigned int v9;
    unsigned int v10;
    long long v11 = 0L;
    param3[0] = 0;
    param1[0] = 0;
    SIZE_T v12 = VirtualQuery((LPCVOID)(param0 - 1L), &v0, 48L);
    if(v12) {
        v12 = (SIZE_T)GetModuleFileNameW(hModule, (LPWSTR)param4, nSize);
        if((unsigned int)v12 && *(short*)&hModule->unused == 23117) {
            v12 = (SIZE_T)hModule[15].unused;
            if(!(hModule[15].unused ? 0: 1) && hModule[15].unused >= 0) {
                long long* ptr3 = (long long*)(v12 + (long long)hModule);
                if(*(int*)(v12 + (long long)hModule) == 0x4550) {
                    long long v13 = (unsigned long long)*(short*)((char*)ptr3 + 6L);
                    HINSTANCE__* hModule1 = (HINSTANCE__*)*(short*)((char*)ptr3 + 20L);
                    long long v14 = v2;
                    unsigned int v15 = (unsigned int)((unsigned int)param0 - 1 - (unsigned int)hModule);
                    unsigned int v16 = 0;
                    long long* ptr4 = (long long*)((long long)hModule1 + (long long)ptr3) + 3;
                    unsigned int v17 = 0;
                    if((unsigned int)v13) {
                        do {
                            ptr3 = (long long*)((unsigned long long)v16 * 5L);
                            hModule1 = (HINSTANCE__*)*(int*)((char*)((long long)(long long*)((long long)ptr3 * 8L) + (long long)ptr4) + 12L);
                            if(*(unsigned int*)((char*)((long long)(long long*)((long long)ptr3 * 8L) + (long long)ptr4) + 12L) <= v15) {
                                v17 = v15 - (unsigned int)hModule1;
                                if(*(unsigned int*)((long long*)((long long)(long long*)((long long)ptr3 * 8L) + (long long)ptr4) + 1) <= v15) {
                                    goto loc_140002EC8;
                                }
                            }
                            else {
                            loc_140002EC8:
                                ++v16;
                            }
                            break;
                        }
                        while((unsigned int)v13 > v16);
                    }
                    if((unsigned int)v13 != v16) {
                        if(gvar_140009720 != 0) {
                            hModule1 = mspdb;
                        }
                        else if(mspdb != 0L) {
                            return 0;
                        }
                        else {
                            hModule1 = GetPdbDll();
                            mspdb = hModule1;
                            if(!hModule1) {
                                return 0;
                            }
                            gvar_140009720 = 1;
                        }
                        hModule1 = (HINSTANCE__*)GetProcAddress(hModule1, "PDBOpenValidate5");
                        if(!hModule1) {
                            return 0;
                        }
                        long long* ptr5 = &ptr0;
                        LPVOID v18 = NULL;
                        int* ptr6 = NULL;
                        int* ptr7 = &v6;
                        hModule1 = (HINSTANCE__*)hModule1((long long)param4, 0L, 0L, 0L);
                        if(!(unsigned int)hModule1) {
                            return 0;
                        }
                        long long v19 = **ptr0((long long)ptr0);
                        if((unsigned int)v19 == 20030901) {
                            long long v20 = *(long long*)(*ptr0 + 56L)((long long)ptr0, 0L, &r, (long long)&ptr2);
                            if((unsigned int)v20) {
                                v18 = NULL;
                                long long v21 = *ptr2;
                                ptr6 = NULL;
                                ptr7 = NULL;
                                long long v22 = *(long long*)(v21 + 64L)((long long)ptr2, (unsigned long long)((unsigned short)v16 + 1), (unsigned long long)v17, (long long)&ptr1);
                                if((unsigned int)v22) {
                                    unsigned long long* ptr8 = NULL;
                                    long long v23 = *(long long*)(*ptr1 + 208L)((long long)ptr1, (long long)&ptr8, (long long)v8, (long long)param3);
                                    if((unsigned char)v23 && ptr8) {
                                        LPVOID lpMem = NULL;
                                        long long v24 = *(long long*)(*ptr8 + 16L)((long long)ptr8);
                                        if((unsigned int)v24) {
                                            do {
                                                v18 = NULL;
                                                long long v25 = *ptr8;
                                                ptr6 = &v9;
                                                ptr7 = &v7;
                                                long long v26 = *(long long*)(v25 + 24L)((long long)ptr8, 0L, (long long)&v10, (long long)&v3);
                                                if(!(unsigned char)v26) {
                                                    goto loc_14000317D;
                                                }
                                                else if(v16 + 1 == (unsigned int)v3 && v17 >= v10 && (unsigned int)(v7 + v10) > v17) {
                                                    if(v9 && (unsigned long long)v9 < 0x1fffffffffffffffL) {
                                                        HANDLE hHeap = GetProcessHeap();
                                                        LPVOID v27 = HeapAlloc(hHeap, 0, (SIZE_T)((unsigned long long)v9 * 8L));
                                                        lpMem = v27;
                                                        if(v27) {
                                                            v18 = v27;
                                                            long long v28 = *ptr8;
                                                            ptr6 = &v9;
                                                            ptr7 = NULL;
                                                            long long v29 = *(long long*)(v28 + 24L)((long long)ptr8, (long long)&v5, 0L, 0L);
                                                            if((unsigned char)v29) {
                                                                unsigned int v30 = v17 - v10;
                                                                if(*(unsigned int*)lpMem <= v30) {
                                                                    long long v31 = 1L;
                                                                    if(v9 > 1) {
                                                                        unsigned int* ptr9 = (unsigned int*)((long long)lpMem + 8L);
                                                                        while(*ptr9 <= v30) {
                                                                            v31 = (unsigned long long)((unsigned int)v31 + 1);
                                                                            ptr9 += 2;
                                                                            if((unsigned int)v31 >= v9) {
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                    long long v32 = (unsigned long long)*(int*)((char*)(((v31 - 1L) & 0xFFFFFFFFL) * 8L + (long long)lpMem) + 4L);
                                                                    v18 = NULL;
                                                                    ptr6 = NULL;
                                                                    param3[0] = (int)(unsigned int)(v32 & 0xffffffL);
                                                                    long long v33 = *ptr1;
                                                                    ptr7 = NULL;
                                                                    long long v34 = *(long long*)(v33 + 224L)((long long)ptr1, (unsigned long long)v5, (long long)param1, (long long)&v4);
                                                                    v11 = (unsigned char)v34 ? 1L: 0L;
                                                                }
                                                            }
                                                            break;
                                                        }
                                                    }
                                                    goto loc_14000317D;
                                                }
                                                else {
                                                    v1 = *(long long*)(*ptr8 + 16L)((long long)ptr8);
                                                }
                                            }
                                            while((unsigned int)v1);
                                            goto loc_140003161;
                                        }
                                        else {
                                        loc_140003161:
                                            HANDLE hHeap1 = GetProcessHeap();
                                            HeapFree(hHeap1, 0, lpMem);
                                        }
                                    loc_14000317D:
                                        **ptr8((long long)ptr8);
                                    }
                                    *(long long*)(*ptr1 + 128L)((long long)ptr1);
                                }
                                *(long long*)(*ptr2 + 112L)((long long)ptr2);
                            }
                        }
                        *(long long*)(*ptr0 + 80L)((long long)ptr0);
                        result = (int)(v11 & 0xFFFFFFFFL);
                    }
                    else {
                        result = 0;
                    }
                    return result;
                }
            }
        }
    }
    return 0;
}

void _RTC_StackFailure(void* param0, char* param1) {
    char* ptr0;
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    long long* ptr1 = (long long*)(__security_cookie ^ (long long)&v0);
    int v6 = gvar_140009018;
    if(v6 != -1) {
        if(param1[0]) {
            long long v7 = -1L;
            char* ptr2 = param1;
            while(v7 != 0L) {
                char v8 = ptr2[0] == 0;
                ++ptr2;
                --v7;
                if(!~v8) {
                    break;
                }
            }
            if((unsigned long long)(~v7 + 44L) > 0x400L) {
                goto loc_140002431;
            }
            else {
                ptr0 = &v1;
                long long v9 = 0L;
                do {
                    v2 = aStack_around_th[v9];
                    ++v9;
                    *(char*)(v9 + (long long)&v3) = v2;
                }
                while(v2);
                long long v10 = -1L;
                char* ptr3 = &v1;
                while(v10 != 0L) {
                    char v11 = ptr3[0] == 0;
                    ++ptr3;
                    --v10;
                    if(!~v11) {
                        break;
                    }
                }
                long long v12 = 0L;
                do {
                    v4 = param1[v12];
                    ++v12;
                    ptr3[v12 - 2L] = v4;
                }
                while(v4);
                long long v13 = -1L;
                char* ptr4 = &v1;
                while(v13 != 0L) {
                    char v14 = ptr4[0] == 0;
                    ++ptr4;
                    --v13;
                    if(!~v14) {
                        break;
                    }
                }
                long long v15 = 0L;
                do {
                    v5 = a__was_corrupted[v15];
                    ++v15;
                    ptr4[v15 - 2L] = v5;
                }
                while(v5);
            }
        }
        else {
        loc_140002431:
            ptr0 = "Stack corrupted near unknown variable";
        }
        failwithmessage(param0, v6, 2, ptr0);
    }
    _security_check_cookie((uintptr_t)((long long)&v0 ^ (long long)ptr1));
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
            wsprintffp[0](ptr0, "%.2X ", v5 & 0xFFFFFFFFL);
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

void _report_gsfailure(uintptr_t _StackCookie) {
    DWORD64 ImageBase;
    char v0;
    char v1;
    unsigned long long v2;
    uintptr_t v3;
    uintptr_t v4;
    RtlCaptureContext((PCONTEXT)&GS_ContextRecord);
    DWORD64 ControlPc = gvar_140009318;
    PRUNTIME_FUNCTION FunctionEntry = →KERNEL32.dll!RtlLookupFunctionEntry(ControlPc, &ImageBase, NULL);
    if(FunctionEntry) {
        PKNONVOLATILE_CONTEXT_POINTERS v5 = NULL;
        PDWORD64 EstablisherFrame = &v0;
        PVOID* HandlerData = &v1;
        PCONTEXT v6 = (PCONTEXT)&GS_ContextRecord;
        →KERNEL32.dll!RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, (PCONTEXT)&GS_ContextRecord, HandlerData, EstablisherFrame, NULL);
    }
    else {
        gvar_140009318 = v2;
        gvar_1400092B8 = &v4;
    }
    gvar_140009190 = gvar_140009318;
    gvar_1400092A0 = v3;
    GS_ExceptionRecord = 3221226505;
    gvar_140009184 = 1;
    unsigned long long v7 = __security_cookie;
    unsigned long long v8 = __security_cookie_complement;
    BOOL v9 = IsDebuggerPresent();
    DebuggerWasPresent = (unsigned int)v9;
    →MSVCR90D.dll!__crt_debugger_hook();
    SetUnhandledExceptionFilter(NULL);
    UnhandledExceptionFilter((_EXCEPTION_POINTERS*)&GS_ExceptionPointers);
    if(!DebuggerWasPresent) {
        →MSVCR90D.dll!__crt_debugger_hook();
    }
    HANDLE hProcess = GetCurrentProcess();
    TerminateProcess(hProcess, 3221226505);
}

void _security_check_cookie(uintptr_t _StackCookie) {
    if(__security_cookie == _StackCookie) {
        if(!(unsigned short)__rol__(_StackCookie, 16)) {
            return;
        }
        _StackCookie = (uintptr_t)__ror__(__rol__(_StackCookie, 16), 16);
    }
    /*NO_RETURN*/ _report_gsfailure(_StackCookie);
}

void _security_init_cookie() {
    long long v0;
    unsigned long long v1 = 0L;
    if(__security_cookie != 0x2b992ddfa232L) {
        __security_cookie_complement = ~__security_cookie;
    }
    else {
        GetSystemTimeAsFileTime(&v1);
        DWORD v2 = GetCurrentProcessId();
        unsigned long long v3 = (unsigned long long)((v2 & 0xFFFFFFFFL) ^ v1);
        DWORD v4 = GetCurrentThreadId();
        v3 = (unsigned long long)((v4 & 0xFFFFFFFFL) ^ v3);
        DWORD v5 = GetTickCount();
        v3 = (unsigned long long)((v5 & 0xFFFFFFFFL) ^ v3);
        QueryPerformanceCounter(&v0);
        v3 = (unsigned long long)((v3 ^ v0) & 0xffffffffffffL);
        if(v3 == 0x2b992ddfa232L) {
            v3 = 0x2b992ddfa233L;
        }
        __security_cookie = v3;
        __security_cookie_complement = ~v3;
    }
}

int _tmainCRTStartup(long long param0, long long param1) {
    int result;
    long long v0;
    long long v1;
    long long v2;
    unsigned char v3 = 0;  // __try{ (see __except:140001D2Eh)
    long long v4 = NtCurrentTeb();
    unsigned char v5 = *(unsigned char*)(v4 + 8L);
    int v6 = 0;
    while(1) {
        unsigned char v7 = 0;
        if(*(long long*)&__native_startup_lock == 0L) {
            *(long long*)&__native_startup_lock = v5;
        }
        else {
            v7 = *(long long*)&__native_startup_lock;
        }
        v3 = v7;
        if(!v3) {
            break;
        }
        else if(v5 == v3) {
            v6 = 1;
            break;
        }
        else {
            Sleep(1000);
        }
    }
    if(__native_startup_state == 1) {
        /*NO_RETURN*/ →MSVCR90D.dll!_amsg_exit(31);
    }
    if(!__native_startup_state) {
        __native_startup_state = 1;
        result = →MSVCR90D.dll!_initterm_e((_PIFV*)&__xi_a, (_PIFV*)&__xi_z);
        if(!(unsigned int)result) {
            goto loc_140001C37;
        }
    }
    else {
        has_cctor = 1;
    loc_140001C37:
        if(__native_startup_state == 1) {
            →MSVCR90D.dll!_initterm((_PVFV*)&__xc_a, (_PVFV*)&__xc_z);
            __native_startup_state = 2;
        }
        if(__native_startup_state != 2) {
            long long v8 = "__native_startup_state == __initialized";
            long long v9 = MSVCR90D.dll!_CrtDbgReportW();
            if((unsigned int)v9 == 1) {
                int3();
            }
        }
        if(!v6) {
            *(long long*)&__native_startup_lock = 0;
        }
        if(__dyn_tls_init_callback) {
            long long v10 = IsNonwritableInCurrentImage(&__dyn_tls_init_callback);
            if((unsigned int)v10) {
                __dyn_tls_init_callback(0L, 2L, 0L);
            }
        }
        MSVCR90D.dll!_CrtSetCheckCount();
        *(unsigned long long*)0xB796 = envp;
        long long v11 = main(param0, param1, argv, (long long)argc, envp, v2, v0, v1);
        mainret = (unsigned int)v11;
        if(!managedapp) {
            /*NO_RETURN*/ exit(mainret);
        }
        if(!has_cctor) {
            cexit();
        }
    }
    return result;
}

int atexit(FUNCPTR _) {
    _onexit_t v0 = onexit((_onexit_t)_);
    return !v0 ? -1: 0;
}

long long check_managed_app() {
    return 0L;
}

void dumpline(unsigned char* param0, unsigned long param1, int param2) {
    long long v0;
    char v1;
    long long v2;
    long long v3;
    char v4;
    char v5;
    long long v6;
    int v7;
    long long v8;
    int max = param2;
    unsigned long v9 = param1;
    unsigned char* ptr0 = param0;
    long long v10 = &v0;
    for(long long i = 44L; i != 0L; --i) {
        *(int*)v10 = 0xcccccccc;
        v10 += 4L;
    }
    long long v11 = __security_cookie ^ &v0;
    sprintf(&v1, "%08lX:", (unsigned long long)v9);
    if(max > 16) {
        max = 16;
    }
    int j;
    for(j = 0; j < max; ++j) {
        sprintf((char*)((long long)(j * 3) + (long long)&v5), " %02lX");
    }
    while(1) {
        int v12 = j;
        ++j;
        int v13 = v12 < 16 ? 1: 0;
        if(!v13) {
            break;
        }
        else {
            →MSVCR90D.dll!strcat(&v1, (char*)&gvar_1400067A0);
        }
    }
    size_t v14 = →MSVCR90D.dll!strlen(&v1);
    int v15 = (unsigned int)v14;
    →MSVCR90D.dll!strcpy((char*)((long long)v15 + (long long)&v1), (char*)&gvar_1400067A4);
    v15 += 3;
    for(j = 0; j < max; ++j) {
        *(int*)&v4 = ptr0[(long long)j] >= 32 && (unsigned int)ptr0[(long long)j] <= 126 ? (unsigned int)ptr0[(long long)j]: 46;
        *(char*)((long long)(j + v15) + (long long)&v1) = v4;
    }
    while(j < 16) {
        *(char*)((long long)(j + v15) + (long long)&v1) = ' ';
        ++j;
    }
    →MSVCR90D.dll!strcpy((char*)((long long)j + (long long)v15 + (long long)&v1), (char*)&gvar_1400067A8);
    MSVCR90D.dll!printf();
    RTC_CheckStackVars(v10, v6, (int*)&gvar_140006800, &v0, (long long)v7, v8, v0, v2, v3);
    _security_check_cookie((uintptr_t)(&v0 ^ v11));
}

void failwithmessage(void* param0, int param1, int param2, char* param3) {
    char v0;
    wchar_t* ptr0;
    char v1;
    char v2;
    char v3;
    char v4;
    int v5;
    char v6;
    char v7;
    char* ptr1;
    void* ptr2;
    long long* ptr3 = (long long*)(__security_cookie ^ (long long)&v1);
    unsigned long long v8 = 0L;
    unsigned long long v9 = _RTC_GetErrorFuncW();
    if(!v9) {
        v8 = _RTC_GetErrorFunc();
    }
    int cchWideChar = 0;
    LPWSTR lpWideCharStr = NULL;
    int v10 = MultiByteToWideChar(65001, 0, (LPCCH)ptr1, -1, NULL, 0);
    if((unsigned int)v10 < 0x200) {
        cchWideChar = (int)v10;
        lpWideCharStr = &v2;
        int v11 = MultiByteToWideChar(65001, 0, (LPCCH)ptr1, -1, lpWideCharStr, cchWideChar);
        if(!(unsigned int)v11) {
            goto loc_14000215F;
        }
        else {
            ptr0 = (wchar_t*)&v2;
        }
    }
    else {
    loc_14000215F:
        ptr0 = "Runtime Check Error.\n\r Unable to display RTC Message.";
    }
    int v12 = DebuggerProbe(0x1002);
    if((unsigned int)v12) {
        v12 = DebuggerRuntime((unsigned long)param2, *(int*)((long long)param2 * 4L + (long long)&_RTC_NoFalsePositives), ptr2, ptr0);
        if(!(unsigned int)v12) {
            goto loc_14000219A;
        }
    }
    else {
        v12 = (unsigned long long)1 | ((unsigned long long)((v12 >>> 8L) & 0xffffffffffffffL) << 8);
    loc_14000219A:
        if(v8 || v9) {
            if((unsigned char)v12) {
                BOOL v13 = IsDebuggerPresent();
                if((unsigned int)v13) {
                    goto loc_1400022DD;
                }
            }
            _RTC_GetSrcLine((unsigned char*)((long long)ptr2 - 5L), &v4, 260, &v5, &v6, 260);
            if(v9) {
                cchWideChar = param2;
                lpWideCharStr = "Run-Time Check Failure #%d - %s";
                long long v14 = v9((unsigned long long)param1, (long long)&v4, (unsigned long long)v5, (long long)&v6);
                v0 = (unsigned int)v14 == 1;
            }
            else {
                int v15 = WideCharToMultiByte(65001, 0, (LPCWCH)&v4, -1, &v7, 778, NULL, NULL);
                LPBOOL v16 = NULL;
                int v17 = WideCharToMultiByte(65001, 0, (LPCWCH)&v6, -1, &v3, 778, NULL, NULL);
                wchar_t* ptr4 = (wchar_t*)ptr1;
                cchWideChar = param2;
                lpWideCharStr = "Run-Time Check Failure #%d - %s";
                long long v18 = v8((unsigned long long)param1, (long long)((unsigned int)v15 ? &v7: "Unknown Filename"), (unsigned long long)v5, (long long)((unsigned int)v17 ? &v3: "Unknown Module Name"));
                v0 = (unsigned int)v18 == 1;
            }
            if(v0) {
                goto loc_1400022DD;
            }
        }
        else {
        loc_1400022DD:
            DebugBreak();
        }
    }
    _security_check_cookie((uintptr_t)((long long)&v1 ^ (long long)ptr3));
}

int hexdump(char* param0) {
    long long v0;
    char* _FileName;
    char v1;
    _stat64i32* _Stat;
    char v2;
    long long v3;
    unsigned int v4;
    long long v5;
    long long v6;
    long long v7;
    char* _ErrMsg = param0;
    long long v8 = &_FileName;
    for(long long i = 44L; i != 0L; --i) {
        *(int*)v8 = 0xcccccccc;
        v8 += 4L;
    }
    long long v9 = __security_cookie ^ &_FileName;
    int v10 = sub_140001430(v8, v5, &v1, _ErrMsg, v6, v7, _FileName, _Stat);
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
            unsigned long v11 = 0;
            while(v11 < v4) {
                size_t v12 = fread(&v2, 1L, 16L, _Stream);
                int v13 = (int)v12;
                if(!v13) {
                    break;
                }
                else {
                    dumpline((unsigned char*)&v2, v11, v13);
                    v11 += v13;
                }
            }
            fclose(_Stream);
            v0 = 0L;
        }
    }
    int result = (int)RTC_CheckStackVars(v0, v5, (int*)&gvar_1400068A0, &_FileName, v6, v7, (long long)_FileName, (long long)_Stat, v3);
    _security_check_cookie((uintptr_t)(&_FileName ^ v9));
    return result;
}

long long main(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6, long long param7) {
    char v0;
    param7 = param2;
    param6 & 0xFFFFFFFFL = (unsigned int)param3;
    int* ptr0 = &v0;
    for(long long i = 12L; i != 0L; --i) {
        *ptr0 = 0xcccccccc;
        ++ptr0;
    }
    int v1 = 0;
    for(int j = 1; j < (unsigned int)param6; ++j) {
        int v2 = hexdump(*(char**)((long long)j * 8L + param7));
        v1 += (unsigned int)v2;
    }
    return (unsigned long long)v1;
}

int matherr(_exception* _Except) {
    return 0;
}

_onexit_t onexit(_onexit_t _Func) {
    _onexit_t result;
    _onexit_t _Func1;
    long long v0 = MSVCR90D.dll!_decode_pointer();
    if(v0 == -1L) {
        result = onexit(_Func1);
    }
    else {
        →MSVCR90D.dll!_lock();
        MSVCR90D.dll!_decode_pointer();
        MSVCR90D.dll!_decode_pointer();
        MSVCR90D.dll!_encode_pointer();
        long long v1 = →MSVCR90D.dll!__dllonexit();
        unsigned long long v2 = (unsigned long long)MSVCR90D.dll!_encode_pointer();
        __onexitbegin = v2;
        unsigned long long v3 = (unsigned long long)MSVCR90D.dll!_encode_pointer();
        __onexitend = v3;  // } (starts at 140002A0Eh)
        →MSVCR90D.dll!_unlock();
        result = (_onexit_t)v1;
    }
    return result;
}

long long pre_cpp_init() {
    long long result;
    atexit((void __stdcall (*_)())&RTC_Terminate);
    startinfo = _newmode;
    long long v0 = MSVCR90D.dll!__getmainargs();
    argret = (unsigned int)v0;
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

int sub_140001430(long long param0, long long param1, _stat64i32* param2, char* param3, long long param4, long long param5, char* _FileName, _stat64i32* _Stat) {
    char v0;
    _Stat = param2;
    _FileName = param3;
    int* ptr0 = &v0;
    for(long long i = 8L; i != 0L; --i) {
        *ptr0 = 0xcccccccc;
        ++ptr0;
    }
    return stat64i32(_FileName, _Stat);
}

long long sub_140001BEB(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6, long long param7, long long param8, long long param9, long long param10, int param11, long long param12, long long param13, long long param14, long long param15, long long param16, long long param17, long long param18) {
    long long v0;
    long long v1;
    if(__native_startup_state == 1) {
        →MSVCR90D.dll!_initterm((_PVFV*)&__xc_a, (_PVFV*)&__xc_z);
        __native_startup_state = 2;
    }
    if(__native_startup_state != 2) {
        long long v2 = MSVCR90D.dll!_CrtDbgReportW();
        if((unsigned int)v2 == 1) {
            int3();
        }
    }
    if(!param11) {
        *(long long*)&__native_startup_lock = 0;
    }
    if(__dyn_tls_init_callback) {
        long long v3 = IsNonwritableInCurrentImage(&__dyn_tls_init_callback);
        if((unsigned int)v3) {
            __dyn_tls_init_callback(0L, 2L, 0L);
        }
    }
    MSVCR90D.dll!_CrtSetCheckCount();
    *(unsigned long long*)0xB796 = envp;
    long long v4 = main(param0, param1, argv, (long long)argc, envp, v1, v0, param6);
    mainret = (unsigned int)v4;
    if(!managedapp) {
        /*NO_RETURN*/ exit(mainret);
    }
    if(!has_cctor) {
        cexit();
    }
    jump param18;
}

long long sub_140001C8E(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6, long long param7, long long param8, long long param9, long long param10, int param11, long long param12, long long param13, long long param14, long long param15, long long param16, long long param17, long long param18) {
    long long v0;
    long long v1;
    if(!param11) {
        *(long long*)&__native_startup_lock = 0;
    }
    if(__dyn_tls_init_callback) {
        long long v2 = IsNonwritableInCurrentImage(&__dyn_tls_init_callback);
        if((unsigned int)v2) {
            __dyn_tls_init_callback(0L, 2L, 0L);
        }
    }
    MSVCR90D.dll!_CrtSetCheckCount();
    *(unsigned long long*)0xB796 = envp;
    long long v3 = main(param0, param1, argv, (long long)argc, envp, v1, v0, param6);
    mainret = (unsigned int)v3;
    if(!managedapp) {
        /*NO_RETURN*/ exit(mainret);
    }
    if(!has_cctor) {
        cexit();
    }
    jump param18;
}

long long sub_140001D2E(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6, long long param7, unsigned int param8, long long param9, long long param10, long long param11, long long param12) {
    unsigned int v0;
    mainret = v0;
    if(!managedapp) {
        /*NO_RETURN*/ exit(mainret);
    }
    if(!has_cctor) {
        cexit();
    }
    jump param12;
}

long long sub_1400028F0(long long param0, long long param1, long long param2, long long param3, long long param4) {
    jump param4;
}

long long sub_140002DC2(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6, long long param7, long long param8, long long param9, long long param10) {
    jump param10;
}

long long unk_lib_sub(long long param0, long long param1) {
    *(long long*)(param1 + 80L) = param0;
    *(int*)(param1 + 72L) = ***(unsigned long long*)(param1 + 80L);
    return →MSVCR90D.dll!_XcptFilter();
}

long long unk_lib_sub2() {
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
        _setusermatherr((_UserMathErrorFunctionPointer)&matherr);
    }
    if(__globallocalestatus == -1) {
        configthreadlocale(-1);
    }
    return 0L;
}

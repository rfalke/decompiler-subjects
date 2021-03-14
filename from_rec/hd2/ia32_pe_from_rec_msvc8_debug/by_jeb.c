
int DebuggerProbe(unsigned long param0) {
    int v0;
    int v1;
    int v2 = &→_except_handler4;
    int v3 = *(int*)__FS_BASE;
    int v4 = v1;
    unsigned int v5 = ___security_cookie;
    int v6 = v5 ^ &gvar_416AD8;
    int* ptr0 = (int*)(v5 ^ (int)&v0);
    *(int**)__FS_BASE = &v3;
    int* ptr1 = &ptr0;
    char v7 = 0;
    int v8 = 0x1001;
    unsigned long v9 = param0;
    char* ptr2 = &v7;
    int v10 = 0;  // __try{ (see __except:41233Ah)
    /*BAD_CALL!*/ RaiseException(1080890248, 0, 6, &v8);
    *(int*)__FS_BASE = v3;
    return (int)v7;
}

int DebuggerRuntime(unsigned long param0, int param1, void* param2, wchar_t* param3) {
    int v0;
    int v1;
    int v2 = &→_except_handler4;
    int v3 = *(int*)__FS_BASE;
    int v4 = v1;
    unsigned int v5 = ___security_cookie;
    int v6 = v5 ^ &gvar_416AF8;
    int* ptr0 = (int*)(v5 ^ (int)&v0);
    *(int**)__FS_BASE = &v3;
    int* ptr1 = &ptr0;
    char v7 = 0;
    int v8 = 0x1002;
    unsigned long v9 = param0;
    int v10 = param1;
    void* ptr2 = param2;
    char* ptr3 = &v7;
    wchar_t* ptr4 = param3;
    int v11 = 0;  // __try{ (see __except:4126FCh)
    /*BAD_CALL!*/ RaiseException(1080890248, 0, 6, &v8);
    *(int*)__FS_BASE = v3;
    return (int)v7;
}

HINSTANCE__* GetPdbDll() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char v6;
    HINSTANCE__* result;
    LPCSTR v7;
    int* ptr0 = (int*)(___security_cookie ^ (int)&v3);
    if(!gvar_41755C) {
        LPCSTR lpLibFileName = mspdbName;
        int v8 = v2;
        gvar_41755C = 1;
        HMODULE v9 = LoadLibraryA(lpLibFileName);
        if(!v9) {
            HMODULE hModule = LoadLibraryA("ADVAPI32.DLL");
            if(!hModule) {
                sub_411023((int)&v3 ^ (int)ptr0);
                return result;
            }
            LPCSTR v10 = v7;
            FARPROC v11 = GetProcAddress(hModule, "RegOpenKeyExA");
            int v12 = (int)v11;
            if(!v11) {
                sub_411023((int)&v3 ^ (int)ptr0);
                return result;
            }
            int v13 = v1;
            FARPROC v14 = GetProcAddress(hModule, "RegQueryValueExA");
            if(v14) {
                FARPROC v15 = GetProcAddress(hModule, "RegCloseKey");
                if(v15) {
                    int v16 = v12(0x80000002, "SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS", 0, 1, &v4);
                    if(!v16) {
                        int v17 = v14(v4, "EnvironmentDirectory", 0, &v5, 0, &v0);
                        if(v17 || (unsigned int)(0x7fffffff - v0) < 13 || (unsigned int)(v0 + 13) >= 260) {
                            FreeLibrary(hModule);
                            sub_411023((int)&v3 ^ (int)ptr0);
                            return result;
                        }
                        int v18 = v14(v4, "EnvironmentDirectory", 0, &v5, &v6, &v0);
                        v15(v4, v13, (int)v10, v8, v5, v12, v4);
                        BOOL v19 = FreeLibrary(hModule);
                        if(!v18) {
                            int v20 = v0;
                            v19 = (unsigned int)92 | ((unsigned int)((v19 >>> 8) & 0xffffff) << 8);
                            if((unsigned char)v19 != *(char*)((char*)(v20 + (int)&v0) + 2)) {
                                *(char*)((char*)(v20 + (int)&v0) + 3) = (unsigned char)v19;
                            }
                            else {
                                --v20;
                                v0 = v20;
                            }
                            unsigned int v21 = mspdbName;
                            int v22 = 0;
                            int* ptr1 = (int*)(v20 + (int)&v6);
                            do {
                                *(char*)(v22 + (int)ptr1) = *(char*)(v22 + v21);
                                ++v22;
                            }
                            while(v22 <= 11);
                            LoadLibraryA(&v6);
                            sub_411023((int)&v3 ^ (int)ptr0);
                            return result;
                        }
                    }
                    else {
                        FreeLibrary(hModule);
                    }
                }
            }
        }
    }
    sub_411023((int)&v3 ^ (int)ptr0);
    return result;
}

int NtCurrentTeb() {
    return *(int*)(__FS_BASE + (int)(int*)0x18);
}

unsigned int _FindPESection(int param0, unsigned int param1) {
    unsigned int v0 = (unsigned int)(*(int*)(param0 + 60) + param0);
    unsigned int v1 = 0;
    unsigned int result = (unsigned int)((unsigned int)*(short*)(v0 + 20) + v0 + 24);
    while((unsigned int)*(short*)(v0 + 6) > v1) {
        if(*(unsigned int*)(result + 12) <= param1 && (unsigned int)(*(int*)(result + 8) + *(int*)(result + 12)) > param1) {
            return result;
        }
        ++v1;
        result += 40;
    }
    return 0;
}

int _IsNonwritableInCurrentImage(int param0) {
    int result;
    int v0;
    int v1;
    int v2 = &→_except_handler4;
    int v3 = *(int*)__FS_BASE;
    int v4 = v1;
    unsigned int v5 = ___security_cookie;
    int v6 = v5 ^ &gvar_416B38;
    int* ptr0 = (int*)(v5 ^ (int)&v0);
    *(int**)__FS_BASE = &v3;
    int* ptr1 = &ptr0;
    short* ptr2 = (short*)&MZHeader;
    int v7 = 0;  // __try{ (see __except:413333h)
    int v8 = _ValidateImageBase((short*)&MZHeader);
    if(!v8) {
        result = 0;
    }
    else {
        unsigned int v9 = (unsigned int)(param0 - (int)(short*)&MZHeader);
        unsigned int v10 = _FindPESection(&MZHeader, (unsigned int)(param0 - (int)(short*)&MZHeader));
        result = !v10 ? 0: (unsigned int)(*(int*)(v10 + 36) & 0x80000000) > 0 ? 0: 1;
    }
    *(int*)__FS_BASE = v3;
    return result;
}

int _RTC_AllocaFailure(int par0, int par1, int par2) {
    // Decompilation error
}

char _RTC_AllocaHelper(char* i, char* param1, unsigned int* param2) {
    char result;
    int v0;
    char* ptr0 = i;
    if(ptr0 && param1) {
        int v1 = v0;
        unsigned int* ptr1 = param2;
        if(ptr1) {
            char* ptr2 = ptr0;
            for(i = param1; i != 0; --i) {
                *ptr2 = 0xcc;
                ++ptr2;
            }
            result = (unsigned char)*ptr1;
            *(int*)(ptr0 + 4) = (unsigned int)result | ((unsigned int)((*ptr1 >>> 8) & 0xffffff) << 8);
            *(unsigned int*)(ptr0 + 12) = param1;
            *ptr1 = ptr0;
        }
    }
    return result;
}

int _RTC_CheckStackVars(int param0, int* param1) {
    int result;
    void* ptr0;
    char v0;
    int v1 = 0;
    char v2 = *param1 == 0;
    char v3 = *param1 < 0;
    int v4 = param0;
    v6 = 0;
    if(!v2 && v3 == 0) {
        do {
            int v5 = *(param1 + 1);
            param0 = *(int*)(v5 + v1);
            if(*(int*)(param0 + v4 - 4) != 0xcccccccc || *(int*)(*(int*)(v5 + v1 + 4) + param0 + v4) != 0xcccccccc) {
                _RTC_StackFailure(ptr0, *(char**)(*(param1 + 1) + v1 + 8));
            }
            result = v6 + 1;
            v1 += 12;
            v3 = *param1 > result;
            v0 = (((result - *param1) ^ result) & (*param1 ^ result)) < 0;
            v6 = result;
        }
        while(v3 != v0);
    }
    return result;
}

int* _RTC_CheckStackVars2(int param0, int* param1, int* param2) {
    void* ptr0;
    char v0;
    char v1;
    int v2 = param0;
    int v3 = 0;
    if(param1 != 0) {
        char v4 = *param1 == 0;
        char v5 = *param1 < 0;
        v2 = 0;
        if(!v4 && v5 == 0) {
            int v6 = param0;
            do {
                int v7 = *(param1 + 1);
                param0 = *(int*)(v7 + v3);
                if(*(int*)(param0 + v6 - 4) != 0xcccccccc || *(int*)(*(int*)(v7 + v3 + 4) + param0 + v6) != 0xcccccccc) {
                    _RTC_StackFailure(ptr0, *(char**)(*(param1 + 1) + v3 + 8));
                }
                v3 += 12;
                v0 = v2 + 1 < *param1;
                v1 = (((v2 + 1) ^ (v2 + 1 - *param1)) & ((v2 + 1) ^ *param1)) < 0;
                ++v2;
            }
            while(v0 != v1);
        }
    }
    int* ptr1 = param2;
    int v8 = 0;
    int* result = ptr1;
    if(ptr1) {
        do {
            result = *(unsigned int*)(result + 1);
            ++v8;
        }
        while(result);
        if(ptr1) {
            do {
                if(*ptr1 != 0xcccccccc || *(ptr1 + 5) != 0xcccccccc || *(ptr1 + 6) != 0xcccccccc || *(ptr1 + 7) != 0xcccccccc) {
                    _RTC_AllocaFailure((int)ptr0, (int)ptr1, v8);
                }
                result = *(unsigned int*)(ptr1 + 3);
                if(*((int*)((int)result + (int)ptr1) - 1) != 0xcccccccc) {
                    result = (int*)_RTC_AllocaFailure((int)ptr0, (int)ptr1, v8);
                }
                ptr1 = *(unsigned int*)(ptr1 + 1);
                --v8;
            }
            while(ptr1);
        }
    }
    return result;
}

void _RTC_Failure(void* param0, int param1) {
    if((unsigned int)param1 <= 4) {
        int v0 = _RTC_ErrorLevels[param1];
        char* ptr0 = *(char**)(param1 * 4 + (int)&_RTC_ErrorMessages);
        if(v0 != -1) {
            failwithmessage(param0, v0, param1, ptr0);
        }
    }
    else {
        failwithmessage(param0, 1, 5, "Unknown Runtime Check Error\n\r");
    }
}

unsigned int _RTC_GetErrDesc(unsigned int param0) {
    if(param0 <= 4) {
        return *(unsigned int*)(param0 * 4 + (int)&_RTC_errlist);
    }
    return 0;
}

unsigned int _RTC_GetErrorFunc() {
    return _RTC_ErrorReportFunc;
}

unsigned int _RTC_GetErrorFuncW() {
    return _RTC_ErrorReportFuncW;
}

int _RTC_GetSrcLine(unsigned char* param0, wchar_t* param1, unsigned long param2, int* param3, wchar_t* param4, unsigned long nSize) {
    int* ptr0;
    void* ptr1;
    SIZE_T v0;
    HMODULE hModule;
    unsigned int* ptr2;
    int v1;
    int v2;
    char v3;
    unsigned int v4;
    int v5;
    int v6;
    char v7;
    int* ptr3;
    int v8;
    unsigned int v9;
    wchar_t* ptr4 = param1;
    unsigned char* ptr5 = param0;
    param3[0] = 0;
    SIZE_T dwLength = 28;
    PMEMORY_BASIC_INFORMATION lpBuffer = &v3;
    LPCVOID lpAddress = (LPCVOID)(ptr5 - 1);
    ptr4[0] = 0;
    SIZE_T v10 = VirtualQuery(lpAddress, lpBuffer, dwLength);
    if(v10) {
        v10 = GetModuleFileNameW(hModule, (LPWSTR)param4, nSize);
        if(v10 && *(short*)&hModule->unused == 23117) {
            v10 = (SIZE_T)hModule[15].unused;
            if((int)v10 > 0) {
                v10 += (int)hModule;
                if(*(int*)v10 == 0x4550) {
                    unsigned int v11 = (unsigned int)*(short*)(v10 + 6);
                    dwLength = v0;
                    HINSTANCE__* hModule1 = (HINSTANCE__*)((unsigned int)*(short*)(v10 + 20) + v10 + 24);
                    int* ptr6 = (int*)((int)(LPCVOID)(ptr5 - 1) - (int)hModule);
                    int* ptr7 = NULL;
                    unsigned int v12 = 0;
                    if(v11 != 0) {
                        hModule1 += 3;
                        do {
                            HMODULE v13 = (HMODULE)hModule1->unused;
                            if((unsigned int)v13 <= (unsigned int)ptr6) {
                                ptr7 = (int*)((int)ptr6 - (int)v13);
                                if((unsigned int)hModule1[-1].unused <= (unsigned int)ptr6) {
                                    goto loc_413494;
                                }
                            }
                            else {
                            loc_413494:
                                ++v12;
                                hModule1 += 10;
                            }
                            break;
                        }
                        while(v11 > v12);
                    }
                    if(v11 != v12) {
                        if(gvar_417558) {
                            hModule1 = mspdb;
                        }
                        else if(mspdb) {
                            return 0;
                        }
                        else {
                            hModule1 = GetPdbDll();
                            mspdb = hModule1;
                            if(!hModule1) {
                                return 0;
                            }
                            gvar_417558 = 1;
                        }
                        hModule1 = (HINSTANCE__*)GetProcAddress(hModule1, "PDBOpenValidate5");
                        LPVOID v14 = NULL;
                        if(hModule1 != 0) {
                            lpAddress = &ptr2;
                            hModule1 = (HINSTANCE__*)hModule1((int)param4, 0, 0, 0, (int)&v7, 0, 0);
                            if(hModule1) {
                                int v15 = **ptr2;
                                int result = 0;
                                unsigned int* ptr8 = &lpAddress;
                                lpAddress = (LPCVOID)&loc_413510;
                                int v16 = v15();
                                if(v16 == 20030901) {
                                    ptr8 = &v1;
                                    int v17 = *(int*)(*ptr2 + 28)(0, &r, (int)&ptr3);
                                    if(v17) {
                                        ptr8 = &v8;
                                        int v18 = *(int*)(*ptr3 + 32)(v12 + 1, (int)ptr7, (int)&ptr0, 0, 0, 0);
                                        if(v18) {
                                            unsigned int* ptr9 = NULL;
                                            ptr8 = &ptr1;
                                            int v19 = *(int*)(*ptr0 + 104)((int)&ptr9);
                                            if((unsigned char)v19 && ptr9 != 0) {
                                                ptr8 = &ptr1;
                                                int v20 = *(int*)(*ptr9 + 8)();
                                                if(v20) {
                                                    do {
                                                        int v21 = *(int*)(*ptr9 + 12);
                                                        --ptr8;
                                                        *ptr8 = 0;
                                                        --ptr8;
                                                        *ptr8 = &v9;
                                                        --ptr8;
                                                        *ptr8 = &v2;
                                                        --ptr8;
                                                        *ptr8 = &param0;
                                                        --ptr8;
                                                        *ptr8 = &v4;
                                                        --ptr8;
                                                        *ptr8 = 0;
                                                        --ptr8;
                                                        *ptr8 = &loc_4135A3;
                                                        int v22 = /*BAD_CALL!*/ v21(*(int*)(ptr8 + 1), *(int*)(ptr8 + 2), *(int*)(ptr8 + 3), *(int*)(ptr8 + 4), *(int*)(ptr8 + 5), *(int*)(ptr8 + 6));
                                                        if(!(unsigned char)v22) {
                                                            goto loc_413694;
                                                        }
                                                        else if(v12 + 1 == (unsigned int)(unsigned short)param0 && (unsigned int)ptr7 >= v4 && (unsigned int)(v2 + v4) > (unsigned int)ptr7) {
                                                            if(v9 && v9 < 0x1fffffff) {
                                                                --ptr8;
                                                                *ptr8 = v9 * 8;
                                                                --ptr8;
                                                                *ptr8 = 0;
                                                                --ptr8;
                                                                *ptr8 = &loc_4135FC;
                                                                HANDLE v23 = /*BAD_CALL!*/ GetProcessHeap();
                                                                --ptr8;
                                                                *ptr8 = v23;
                                                                --ptr8;
                                                                *ptr8 = &loc_413603;
                                                                v14 = /*BAD_CALL!*/ HeapAlloc(*(HANDLE*)(ptr8 + 1), *(DWORD*)(ptr8 + 2), *(SIZE_T*)(ptr8 + 3));
                                                                if(v14) {
                                                                    int v24 = *(int*)(*ptr9 + 12);
                                                                    --ptr8;
                                                                    *ptr8 = v14;
                                                                    --ptr8;
                                                                    *ptr8 = &v9;
                                                                    --ptr8;
                                                                    *ptr8 = 0;
                                                                    --ptr8;
                                                                    *ptr8 = 0;
                                                                    --ptr8;
                                                                    *ptr8 = 0;
                                                                    --ptr8;
                                                                    *ptr8 = &v5;
                                                                    --ptr8;
                                                                    *ptr8 = &loc_413626;
                                                                    int v25 = /*BAD_CALL!*/ v24(*(int*)(ptr8 + 1), *(int*)(ptr8 + 2), *(int*)(ptr8 + 3), *(int*)(ptr8 + 4), *(int*)(ptr8 + 5), *(int*)(ptr8 + 6));
                                                                    if((unsigned char)v25) {
                                                                        int* ptr10 = (int*)((int)ptr7 - v4);
                                                                        if(*(unsigned int*)v14 <= (unsigned int)ptr10) {
                                                                            unsigned int v26 = 1;
                                                                            if(v9 > 1) {
                                                                                while(*(unsigned int*)(v26 * 8 + (int)v14) <= (unsigned int)ptr10) {
                                                                                    ++v26;
                                                                                    if(v26 >= v9) {
                                                                                        break;
                                                                                    }
                                                                                }
                                                                            }
                                                                            int v27 = *((int*)(v26 * 8 + (int)v14) - 1);
                                                                            --ptr8;
                                                                            *ptr8 = 0;
                                                                            param3[0] = (int)(unsigned int)(v27 & 0xffffff);
                                                                            int v28 = *(int*)(*ptr0 + 112);
                                                                            --ptr8;
                                                                            *ptr8 = 0;
                                                                            --ptr8;
                                                                            *ptr8 = 0;
                                                                            --ptr8;
                                                                            *ptr8 = &param2;
                                                                            --ptr8;
                                                                            *ptr8 = param1;
                                                                            --ptr8;
                                                                            *ptr8 = v5;
                                                                            --ptr8;
                                                                            *ptr8 = &loc_413674;
                                                                            int v29 = /*BAD_CALL!*/ v28(*(int*)(ptr8 + 1), *(int*)(ptr8 + 2), *(int*)(ptr8 + 3), *(int*)(ptr8 + 4), *(int*)(ptr8 + 5));
                                                                            if((unsigned char)v29) {
                                                                                result = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                            }
                                                            goto loc_413694;
                                                        }
                                                        else {
                                                            int v30 = *(int*)(*ptr9 + 8);
                                                            --ptr8;
                                                            *ptr8 = &loc_4135CD;
                                                            v6 = /*BAD_CALL!*/ v30();
                                                        }
                                                    }
                                                    while(v6);
                                                    goto loc_41367F;
                                                }
                                                else {
                                                loc_41367F:
                                                    --ptr8;
                                                    *ptr8 = v14;
                                                    --ptr8;
                                                    *ptr8 = 0;
                                                    --ptr8;
                                                    *ptr8 = &loc_413688;
                                                    HANDLE v31 = /*BAD_CALL!*/ GetProcessHeap();
                                                    --ptr8;
                                                    *ptr8 = v31;
                                                    --ptr8;
                                                    *ptr8 = &loc_41368F;
                                                    /*BAD_CALL!*/ HeapFree(*(HANDLE*)(ptr8 + 1), *(DWORD*)(ptr8 + 2), *(LPVOID*)(ptr8 + 3));
                                                }
                                            loc_413694:
                                                int v32 = **ptr9;
                                                --ptr8;
                                                *ptr8 = &loc_413698;
                                                /*BAD_CALL!*/ v32();
                                            }
                                            int v33 = *(int*)(*ptr0 + 64);
                                            --ptr8;
                                            *ptr8 = &loc_4136A2;
                                            /*BAD_CALL!*/ v33();
                                        }
                                        int v34 = *(int*)(*ptr3 + 56);
                                        --ptr8;
                                        *ptr8 = &loc_4136AC;
                                        /*BAD_CALL!*/ v34();
                                    }
                                }
                                int v35 = *(int*)(*ptr2 + 40);
                                --ptr8;
                                *ptr8 = &loc_4136B6;
                                /*BAD_CALL!*/ v35();
                                return result;
                            }
                        }
                    }
                    return 0;
                }
            }
        }
    }
    return 0;
}

unsigned int _RTC_SetErrorFunc(unsigned int param0) {
    unsigned int result = _RTC_ErrorReportFunc;
    _RTC_ErrorReportFunc = param0;
    _RTC_ErrorReportFuncW = 0;
    return result;
}

unsigned int _RTC_SetErrorFuncW(unsigned int param0) {
    unsigned int result = _RTC_ErrorReportFuncW;
    _RTC_ErrorReportFuncW = param0;
    _RTC_ErrorReportFunc = 0;
    return result;
}

int _RTC_SetErrorType(unsigned int param0, int param1) {
    if(param0 <= 4) {
        int result = _RTC_ErrorLevels[param0];
        _RTC_ErrorLevels[param0] = param1;
        return result;
    }
    return -1;
}

void _RTC_StackFailure(void* param0, char* param1) {
    char* ptr0;
    char v0;
    char v1;
    int v2;
    char v3;
    int v4;
    int* ptr1 = (int*)(___security_cookie ^ (int)&v2);
    char v5 = gvar_417010 == -1;
    void* ptr2 = param0;
    char* ptr3 = param1;
    if(!v5) {
        char v6 = ptr3[0] ? 0: 1;
        int v7 = v4;
        if(!v6) {
            char* ptr4 = ptr3;
            int* ptr5 = (int*)(ptr4 + 1);
            do {
                v3 = ptr4[0];
                ++ptr4;
            }
            while(v3);
            if((unsigned int)(int*)((char*)((int)ptr4 - (int)ptr5) + 45) > 0x400) {
                goto loc_41281F;
            }
            else {
                ptr0 = &v0;
                int v8 = 0;
                do {
                    v3 = aStack_around_th[v8];
                    *(char*)(v8 + (int)&v0) = aStack_around_th[v8];
                    ++v8;
                }
                while(v3);
                char* ptr6 = ptr3;
                do {
                    v8 = (unsigned int)ptr3[0] | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
                    ++ptr3;
                }
                while((unsigned char)v8);
                int* ptr7 = (int*)((int)ptr3 - (int)ptr6);
                int* ptr8 = (int*)((char*)&ptr2 + 3);
                do {
                    v8 = (unsigned int)*(char*)((char*)ptr8 + 1) | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
                    ptr8 = (int*)((char*)ptr8 + 1);
                }
                while((unsigned char)v8);
                int* ptr9 = (int*)((int)ptr7 >>> 2);
                char* ptr10 = ptr6;
                while(ptr9 != 0) {
                    *ptr8 = *(int*)&ptr10[0];
                    ptr10 += 4;
                    ++ptr8;
                    ptr9 = (int*)((char*)ptr9 - 1);
                }
                int* ptr11 = (int*)((int)ptr7 & 0x3);
                char* ptr12 = "\' was corrupted.";
                while(ptr11 != 0) {
                    *(char*)ptr8 = ptr10[0];
                    ++ptr10;
                    ptr8 = (int*)((char*)ptr8 + 1);
                    ptr11 = (int*)((char*)ptr11 - 1);
                }
                do {
                    ptr6 = (unsigned int)*ptr12 | ((unsigned int)(int*)((int)(int*)((int)ptr6 >>> 8) & 0xffffff) << 8);
                    ++ptr12;
                }
                while((unsigned char)ptr6);
                int* ptr13 = "\' was corrupted.";
                int* ptr14 = (int*)((char*)&ptr2 + 3);
                do {
                    v1 = *(char*)((char*)ptr14 + 1);
                    ptr14 = (int*)((char*)ptr14 + 1);
                }
                while(v1);
                for(int* i = (int*)((int)(int*)(ptr12 - &a__was_corrupted) >>> 2); i != 0; i = (int*)((char*)i - 1)) {
                    *ptr14 = *ptr13;
                    ++ptr13;
                    ++ptr14;
                }
                for(int* j = (int*)((int)(int*)(ptr12 - &a__was_corrupted) & 0x3); j != 0; j = (int*)((char*)j - 1)) {
                    *(char*)ptr14 = *(char*)ptr13;
                    ptr13 = (int*)((char*)ptr13 + 1);
                    ptr14 = (int*)((char*)ptr14 + 1);
                }
            }
        }
        else {
        loc_41281F:
            ptr0 = "Stack corrupted near unknown variable";
        }
        failwithmessage(ptr2, gvar_417010, 2, ptr0);
    }
    sub_411023((int)&v2 ^ (int)ptr1);
}

int _RTC_UninitUse(char* param0) {
    char* ptr0;
    char v0;
    void* ptr1;
    char v1;
    int v2;
    int v3;
    int result;
    char v4;
    int* ptr2 = (int*)(___security_cookie ^ (int)&v3);
    char* ptr3 = param0;
    if(gvar_417014 != -1) {
        int v5 = v2;
        if(ptr3) {
            char* ptr4 = ptr3;
            int* ptr5 = (int*)(ptr4 + 1);
            do {
                v4 = *ptr4;
                ++ptr4;
            }
            while(v4);
            if((unsigned int)(int*)((char*)((int)ptr4 - (int)ptr5) + 58) > 0x400) {
                ptr0 = "A variable is being used without being initialized.";
                failwithmessage(ptr1, gvar_417014, 3, ptr0);
                sub_411023((int)&v3 ^ (int)ptr2);
                return result;
            }
            ptr0 = &v0;
            int v6 = 0;
            do {
                v4 = aThe_variable__[v6];
                *(char*)(v6 + (int)&v0) = aThe_variable__[v6];
                ++v6;
            }
            while(v4);
            char* ptr6 = ptr3;
            do {
                v6 = (unsigned int)*ptr3 | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
                ++ptr3;
            }
            while((unsigned char)v6);
            int* ptr7 = (int*)((int)ptr3 - (int)ptr6);
            int* ptr8 = (int*)((char*)&v5 + 3);
            do {
                v6 = (unsigned int)*(char*)((char*)ptr8 + 1) | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
                ptr8 = (int*)((char*)ptr8 + 1);
            }
            while((unsigned char)v6);
            int* ptr9 = (int*)((int)ptr7 >>> 2);
            char* ptr10 = ptr6;
            while(ptr9 != 0) {
                *ptr8 = *(int*)ptr10;
                ptr10 += 4;
                ++ptr8;
                ptr9 = (int*)((char*)ptr9 - 1);
            }
            int* ptr11 = (int*)((int)ptr7 & 0x3);
            char* ptr12 = "\' is being used without being initialized.";
            while(ptr11 != 0) {
                *(char*)ptr8 = *ptr10;
                ++ptr10;
                ptr8 = (int*)((char*)ptr8 + 1);
                ptr11 = (int*)((char*)ptr11 - 1);
            }
            do {
                ptr6 = (unsigned int)*ptr12 | ((unsigned int)(int*)((int)(int*)((int)ptr6 >>> 8) & 0xffffff) << 8);
                ++ptr12;
            }
            while((unsigned char)ptr6);
            int* ptr13 = "\' is being used without being initialized.";
            int* ptr14 = (int*)((char*)&v5 + 3);
            do {
                v1 = *(char*)((char*)ptr14 + 1);
                ptr14 = (int*)((char*)ptr14 + 1);
            }
            while(v1);
            for(int* i = (int*)((int)(int*)(ptr12 - &a__is_being_used) >>> 2); i != 0; i = (int*)((char*)i - 1)) {
                *ptr14 = *ptr13;
                ++ptr13;
                ++ptr14;
            }
            for(int* j = (int*)((int)(int*)(ptr12 - &a__is_being_used) & 0x3); j != 0; j = (int*)((char*)j - 1)) {
                *(char*)ptr14 = *(char*)ptr13;
                ptr13 = (int*)((char*)ptr13 + 1);
                ptr14 = (int*)((char*)ptr14 + 1);
            }
        }
        else {
            ptr0 = "A variable is being used without being initialized.";
        }
        failwithmessage(ptr1, gvar_417014, 3, ptr0);
    }
    sub_411023((int)&v3 ^ (int)ptr2);
    return result;
}

int _ValidateImageBase(short* param0) {
    int result;
    short* ptr0 = param0;
    if(*param0 != 23117) {
        result = 0;
    }
    else {
        short* ptr1 = (short*)(*(int*)(param0 + 30) + (int)param0);
        result = *(int*)ptr1 != 0x4550 ? 0: *(ptr1 + 12) != 267 ? 0: 1;
    }
    return result;
}

int __CxxSetUnhandledExceptionFilter() {
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&→__CxxUnhandledExceptionFilter);
    return 0;
}

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS* param0) {
    long result;
    if(param0->ExceptionRecord->ExceptionCode == -529697949 && param0->ExceptionRecord->NumberParameters == 3 && (param0->ExceptionRecord->ExceptionInformation[0] == 429065504 || param0->ExceptionRecord->ExceptionInformation[0] == 429065505 || param0->ExceptionRecord->ExceptionInformation[0] == 429065506 || param0->ExceptionRecord->ExceptionInformation[0] == 0x1994000)) {
        sub_4110A5();
        result = 1;
    }
    else {
        result = 0;
    }
    return result;
}

int __dllonexit() {
    return MSVCR90D.dll!__dllonexit();
}

void __report_gsfailure() {
    unsigned int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    unsigned short v9;
    unsigned short v10;
    unsigned short v11;
    char v12;
    unsigned int v13;
    unsigned int v14;
    unsigned int v15;
    unsigned int v16;
    unsigned int v17;
    unsigned int v18;
    unsigned int v19;
    unsigned int v20;
    unsigned short v21;
    unsigned short v22;
    unsigned short v23;
    unsigned int v24 = v15;
    gvar_417278 = v14;
    gvar_417274 = v16;
    gvar_417270 = v17;
    gvar_41726C = v18;
    gvar_417268 = v19;
    gvar_417264 = v20;
    gvar_417290 = v21;
    gvar_417284 = v9;
    gvar_417260 = v10;
    gvar_41725C = v22;
    gvar_417258 = v23;
    gvar_417254 = v11;
    gvar_417288 = (unsigned int)((unsigned int)&v24 < 808) | ((unsigned int)1 << 1) | ((unsigned int)__parity__((unsigned char)&v13) << 2) | ((unsigned int)0 << 3) | ((unsigned int)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v24 ^ 0x328) ^ (int)&v13) >>> 4) & 0x1) << 4) | ((unsigned int)0 << 5) | ((unsigned int)(&v0 == 812) << 6) | ((unsigned int)((int)&v13 < 0) << 7) | ((unsigned int)v1 << 8) | ((unsigned int)v2 << 9) | ((unsigned int)0 << 10) | ((unsigned int)((int)(int*)((int)(int*)((int)&v24 ^ (int)&v13) & (int)(int*)((int)&v24 ^ 0x328)) < 0) << 11) | ((unsigned int)v3 << 12) | ((unsigned int)v4 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v5 << 18) | ((unsigned int)v7 << 19) | ((unsigned int)v6 << 20) | ((unsigned int)v8 << 21) | ((unsigned int)0 << 22);
    gvar_41727C = v24;
    gvar_417280 = v0;
    gvar_41728C = &v12;
    GS_ContextRecord = 0x10001;
    gvar_41717C = gvar_417280;
    GS_ExceptionRecord = 3221226505;
    gvar_417174 = 1;
    v13 = ___security_cookie;
    unsigned int v25 = ___security_cookie_complement;
    BOOL v26 = IsDebuggerPresent();
    DebuggerWasPresent = v26;
    _crt_debugger_hook();
    SetUnhandledExceptionFilter(NULL);
    UnhandledExceptionFilter((_EXCEPTION_POINTERS*)&GS_ExceptionPointers);
    if(!DebuggerWasPresent) {
        _crt_debugger_hook();
    }
    HANDLE hProcess = GetCurrentProcess();
    TerminateProcess(hProcess, 3221226505);
}

void __security_init_cookie() {
    int v0;
    int v1;
    int v2 = 0;
    int v3 = 0;
    if(___security_cookie != -1153374642 && (___security_cookie & 0xffff0000)) {
        ___security_cookie_complement = ~___security_cookie;
    }
    else {
        GetSystemTimeAsFileTime(&v2);
        unsigned int v4 = (unsigned int)(v2 ^ v3);
        DWORD v5 = GetCurrentProcessId();
        v4 = (unsigned int)(v5 ^ v4);
        DWORD v6 = GetCurrentThreadId();
        v4 = (unsigned int)(v6 ^ v4);
        DWORD v7 = GetTickCount();
        v4 = (unsigned int)(v7 ^ v4);
        QueryPerformanceCounter(&v0);
        v4 = (unsigned int)(v0 ^ v4) ^ v1;
        if(v4 == -1153374642) {
            v4 = 3141592655;
        }
        else if(!(v4 & 0xffff0000)) {
            v4 = (unsigned int)((v4 * 0x10000) | v4);
        }
        ___security_cookie = v4;
        ___security_cookie_complement = ~v4;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int _crt_debugger_hook() {
    return MSVCR90D.dll!_crt_debugger_hook();
}

int _except_handler4(int param0, int param1, int param2, int param3) {
    return sub_4111C7();
}

void _getMemBlockDataString(char* param0, char* param1, char* param2, unsigned int param3) {
    char v0;
    int v1;
    int v2 = (unsigned int)v0 | ((unsigned int)v1 << 8);
    char* ptr0 = param0;
    char* ptr1 = param1;
    int* ptr2 = (int*)((int)param2 - (int)ptr0);
    int* ptr3 = (int*)((int)param2 - (int)ptr0);
    unsigned int v3 = 0;
    while(1) {
        unsigned int v4 = param3;
        if(v4 >= 16) {
            v4 = 16;
        }
        if(v4 <= v3) {
            break;
        }
        else {
            v0 = ptr0[ptr2];
            wsprintffp[0](ptr1, "%.2X ", (unsigned int)v0);
            ptr1 += 3;
            ptr2 = ptr3;
            ptr0[0] = v0;
            ++v3;
            ++ptr0;
        }
    }
    int* ptr4 = (int*)(v3 * 2 + (int)param1);
    param0[v3] = 0;
    *(char*)((int)ptr4 + v3) = 0;
}

int _invoke_watson_if_error(int param0, wchar_t* _Expression, wchar_t* _FunctionName, wchar_t* _FileName, unsigned int _LineNo, uintptr_t _Reserved) {
    int result;
    if(param0) {
        result = sub_41118B(_Expression, _FunctionName, _FileName, _LineNo, _Reserved);
    }
    return result;
}

int _lock() {
    return MSVCR90D.dll!_lock();
}

int _matherr(_exception* _Except) {
    return 0;
}

_onexit_t _onexit(_onexit_t _Func) {
    _onexit_t result;
    int v0;
    int v1;
    int v2 = -2;
    int v3 = &→_except_handler4;
    int v4 = *(int*)__FS_BASE;
    int v5 = v1;
    unsigned int v6 = ___security_cookie;
    int v7 = v6 ^ &gvar_416B18;
    int* ptr0 = (int*)(v6 ^ (int)&v0);
    *(int**)__FS_BASE = &v4;
    int v8 = MSVCR90D.dll!_decode_pointer();
    if(v8 == -1) {
        result = onexit(_Func);
    }
    else {
        _lock();
        int v9 = MSVCR90D.dll!_decode_pointer();
        int v10 = MSVCR90D.dll!_decode_pointer();
        int v11 = MSVCR90D.dll!_encode_pointer();
        int v12 = __dllonexit();
        unsigned int v13 = (unsigned int)MSVCR90D.dll!_encode_pointer();
        ___onexitbegin = v13;
        unsigned int v14 = (unsigned int)MSVCR90D.dll!_encode_pointer();
        ___onexitend = v14;
        sub_412F55();
        result = (_onexit_t)v12;
    }
    *(int*)__FS_BASE = v4;
    return result;
}

int _setargv() {
    return 0;
}

int _setdefaultprecision() {
    uintptr_t v0 = 0;
    unsigned int v1 = 31;
    wchar_t* ptr0 = "f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\intel\\fp8.c";
    wchar_t* ptr1 = "_setdefaultprecision";
    wchar_t* ptr2 = "_controlfp_s(((void *)0), 0x00010000, 0x00030000)";
    errno_t v2 = sub_41117C(NULL, 0x10000, 0x30000);
    return _invoke_watson_if_error(v2, "_controlfp_s(((void *)0), 0x00010000, 0x00030000)", "_setdefaultprecision", "f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\intel\\fp8.c", 31, 0);
}

int atexit(FUNCPTR _) {
    _onexit_t v0 = _onexit((_onexit_t)_);
    return 0 - ((unsigned int)v0 > 0 ? -1: 0) - 1;
}

int* check_managed_app() {
    return NULL;
}

void dumpline(unsigned char* param0, unsigned long param1, int param2) {
    int v0;
    int v1;
    char v2;
    int v3;
    char v4;
    int v5;
    int v6;
    int v7 = v5;
    int* ptr0 = &v0;
    for(int i = 78; i != 0; --i) {
        *ptr0 = 0xcccccccc;
        ++ptr0;
    }
    int v8 = ___security_cookie ^ &v1;
    sprintf(&v2, "%08lX:", param1);
    sub_411168(v3, v6);
    if(param2 > 16) {
        param2 = 16;
    }
    int j;
    for(j = 0; j < param2; ++j) {
        int v9 = (int)param0[j];
        sprintf((char*)(j * 3 + (int)&v4), " %02lX");
        sub_411168(v3, v6);
    }
    while(1) {
        int v10 = j;
        ++j;
        v0 = v10 < 16 ? 1: 0;
        if(!v0) {
            break;
        }
        else {
            sub_4110AA(&v2, (char*)&   );
        }
    }
    size_t v11 = sub_4110BE(&v2);
    sub_4110C8((char*)((int)&v2 + v11), (char*)&  |);
    v11 += 3;
    for(j = 0; j < param2; ++j) {
        v0 = (char)param0[j] >= 32 && (char)param0[j] <= 126 ? (unsigned int)param0[j]: 46;
        *(char*)((int)(int*)((int)&v2 + v11) + j) = (char)v0;
    }
    while(j < 16) {
        *(char*)((int)(int*)((int)&v2 + v11) + j) = ' ';
        ++j;
    }
    sub_4110C8((char*)((int)(int*)((int)&v2 + v11) + j), (char*)&|);
    MSVCR90D.dll!printf();
    int v12 = sub_411168(v3, v6);
    _RTC_CheckStackVars(&v1, (int*)&sub_411600);
    sub_411023(&v1 ^ v8);
    sub_411168(v3, v6);
}

void failwithmessage(void* param0, int param1, int param2, char* param3) {
    int v0;
    LPWSTR v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    int v7;
    char v8;
    int* ptr0 = (int*)(___security_cookie ^ (int)&v7);
    int v9 = v6;
    LPCCH v10 = (LPCCH)param3;
    unsigned int v11 = 0;
    unsigned int v12 = _RTC_GetErrorFuncW();
    unsigned int v13 = v12;
    if(!v12) {
        v11 = _RTC_GetErrorFunc();
    }
    int cchWideChar = MultiByteToWideChar(65001, 0, (LPCCH)param3, -1, NULL, 0);
    if((unsigned int)cchWideChar < 0x200) {
        int v14 = MultiByteToWideChar(65001, 0, (LPCCH)param3, -1, &v2, cchWideChar);
        if(!v14) {
            goto loc_412483;
        }
        else {
            v1 = &v2;
        }
    }
    else {
    loc_412483:
        v1 = "Runtime Check Error.\n\r Unable to display RTC Message.";
    }
    int v15 = DebuggerProbe(0x1002);
    if(v15) {
        v15 = DebuggerRuntime((unsigned long)param2, *(int*)(param2 * 4 + (int)&_RTC_NoFalsePositives), param0, (wchar_t*)v1);
        if(!v15) {
            v15 = 0;
            goto loc_4124D5;
        }
    }
    else {
        v15 = 1;
    loc_4124D5:
        if(v11 || v13) {
            if((unsigned char)v15) {
                BOOL v16 = IsDebuggerPresent();
                if(v16) {
                    goto loc_4125E0;
                }
            }
            _RTC_GetSrcLine((unsigned char*)((int)param0 - 5), &v3, 260, &v13, &v4, 260);
            if(v13) {
                v0 = v13(param1, (int)&v3, (int)v13, (int)&v4, "Run-Time Check Failure #%d - %s", param2, v1);
            }
            else {
                LPSTR v17 = "Unknown Filename";
                int v18 = WideCharToMultiByte(65001, 0, (LPCWCH)&v3, -1, &v5, 778, NULL, NULL);
                if(v18) {
                    v17 = &v5;
                }
                LPSTR v19 = "Unknown Module Name";
                int v20 = WideCharToMultiByte(65001, 0, (LPCWCH)&v4, -1, &v8, 778, NULL, NULL);
                if(v20) {
                    v19 = &v8;
                }
                v0 = v11(param1, (int)v17, (int)v13, (int)v19, "Run-Time Check Failure #%d - %s", param2, v10);
            }
            if(v0 == 1) {
                goto loc_4125E0;
            }
        }
        else {
        loc_4125E0:
            DebugBreak();
        }
    }
    sub_411023((int)&v7 ^ (int)ptr0);
}

int hexdump(char* _FileName) {
    unsigned int v0;
    char v1;
    int v2;
    char v3;
    char v4;
    int v5;
    int v6;
    int v7;
    int v8 = v6;
    int* ptr0 = &v1;
    for(int i = 78; i != 0; --i) {
        *ptr0 = 0xcccccccc;
        ++ptr0;
    }
    int v9 = ___security_cookie ^ &v2;
    int v10 = sub_411860(_FileName, &v3);
    if(v10) {
        perror(_FileName);
    }
    else {
        fopen(_FileName, (char*)&rb);
        FILE* _Stream = (FILE*)sub_411168(v5, v7);
        if(!_Stream) {
            perror(_FileName);
        }
        else {
            unsigned long v11 = 0;
            while(v0 > v11) {
                fread(&v4, 1, 16, _Stream);
                int v12 = sub_411168(v5, v7);
                if(!v12) {
                    break;
                }
                else {
                    dumpline((unsigned char*)&v4, v11, v12);
                    v11 = (unsigned long)(v12 + v11);
                }
            }
            fclose(_Stream);
        }
    }
    sub_411168(v5, v7);
    _RTC_CheckStackVars(&v2, (int*)&loc_4117DC);
    sub_411023(&v2 ^ v9);
    return sub_411168(v5, v7);
}

int main(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3 = v1;
    int* ptr0 = &v0;
    for(int i = 54; i != 0; --i) {
        *ptr0 = 0xcccccccc;
        ++ptr0;
    }
    int v4 = 0;
    for(int j = 1; j < param0; ++j) {
        int v5 = hexdump(*(char**)(j * 4 + param1));
        v4 += v5;
    }
    return sub_411168(0, v2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int mainCRTStartup() {
    __security_init_cookie();
    return sub_411D70();
}

int pre_c_init() {
    int* ptr0 = check_managed_app();
    managedapp = ptr0;
    set_app_type(1);
    unsigned int v0 = (unsigned int)MSVCR90D.dll!_encode_pointer();
    ___onexitend = v0;
    ___onexitbegin = ___onexitend;
    int* ptr1 = _p__fmode();
    ptr1[0] = __fmode;
    int* ptr2 = _p__commode();
    ptr2[0] = __commode;
    __adjust_fdiv = *(unsigned int*)0x18402;
    sub_411172();
    _setargv();
    if(!___defaultmatherr) {
        _setusermatherr((_UserMathErrorFunctionPointer)&→_matherr);
    }
    _setdefaultprecision();
    if(___globallocalestatus == -1) {
        configthreadlocale(-1);
    }
    return 0;
}

void sub_411023(int param0) {
    while(___security_cookie != param0) {
        /*NO_RETURN*/ __report_gsfailure();
    }
}

BOOL sub_411028() {
    return IsDebuggerPresent();
}

int sub_41102D() {
    int result;
    int* ptr0 = (int*)&gvar_4167AC;
    do {
        result = *ptr0;
        if(result) {
            result = result();
        }
        ++ptr0;
    }
    while((unsigned int)ptr0 < &___rtc_tzz);
    return result;
}

int sub_411032(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar) {
    return WideCharToMultiByte(CodePage, dwFlags, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, lpDefaultChar, lpUsedDefaultChar);
}

int sub_411041() {
    return 5;
}

int sub_411046(_UserMathErrorFunctionPointer _UserMathErrorFunction) {
    int result;
    _setusermatherr(_UserMathErrorFunction);
    return result;
}

int sub_41104B(DWORD dwMilliseconds) {
    int result;
    Sleep(dwMilliseconds);
    return result;
}

DWORD sub_411050(HMODULE hModule, LPWSTR lpFilename, DWORD nSize) {
    return GetModuleFileNameW(hModule, lpFilename, nSize);
}

int sub_41105A(FILE* _Stream) {
    return fclose(_Stream);
}

LPTOP_LEVEL_EXCEPTION_FILTER sub_41105F(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter) {
    return SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}

int sub_411064() {
    int result;
    cexit();
    return result;
}

int sub_411069() {
    return MSVCR90D.dll!_CrtDbgReportW();
}

SIZE_T sub_41106E(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength) {
    return VirtualQuery(lpAddress, lpBuffer, dwLength);
}

int sub_411078(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar) {
    return MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}

int sub_41107D(char* _ErrMsg) {
    int result;
    perror(_ErrMsg);
    return result;
}

FARPROC sub_411091(HMODULE hModule, LPCSTR lpProcName) {
    return GetProcAddress(hModule, lpProcName);
}

FILE* sub_41109B(char* _FileName, char* _Mode) {
    return fopen(_FileName, _Mode);
}

int sub_4110A5() {
    /*NO_RETURN*/ terminate();
}

char* sub_4110AA(char* _Destination, char* _Source) {
    return strcat(_Destination, _Source);
}

int sub_4110AF(int _Code) {
    /*NO_RETURN*/ exit(_Code);
}

DWORD sub_4110B4() {
    return GetCurrentThreadId();
}

int sub_4110B9(_PVFV* _First, _PVFV* _Last) {
    int result;
    initterm(_First, _Last);
    return result;
}

size_t sub_4110BE(char* _Str) {
    return strlen(_Str);
}

char* sub_4110C8(char* _Destination, char* _Source) {
    return strcpy(_Destination, _Source);
}

HANDLE sub_4110CD() {
    return GetCurrentProcess();
}

int sub_4110D2() {
    return MSVCR90D.dll!_encode_pointer();
}

int sub_4110DC() {
    return sub_411195();
}

int sub_4110E6(int _Flag) {
    return configthreadlocale(_Flag);
}

unsigned int sub_4110EB() {
    unsigned int result;
    if(!gvar_417140) {
        gvar_417140 = 1;
        int v0 = sub_411195();
        result = _RTC_SetErrorFuncW((unsigned int)v0);
    }
    return result;
}

HMODULE sub_4110F5(LPCSTR lpLibFileName) {
    return LoadLibraryA(lpLibFileName);
}

int sub_4110FA(DWORD dwExceptionCode, DWORD dwExceptionFlags, DWORD nNumberOfArguments, ULONG_PTR* lpArguments) {
    int result;
    RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, lpArguments);
    return result;
}

LONG sub_411109(LONG* Destination, LONG ExChange, LONG Comperand) {
    return InterlockedCompareExchange(Destination, ExChange, Comperand);
}

HANDLE sub_41110E() {
    return GetProcessHeap();
}

BOOL sub_411122(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem) {
    return HeapFree(hHeap, dwFlags, lpMem);
}

BOOL sub_411131(HANDLE hProcess, UINT uExitCode) {
    return TerminateProcess(hProcess, uExitCode);
}

BOOL sub_411145(LARGE_INTEGER* lpPerformanceCount) {
    return QueryPerformanceCounter(lpPerformanceCount);
}

int* sub_41114A() {
    return _p__commode();
}

int sub_41114F() {
    return MSVCR90D.dll!_unlock();
}

DWORD sub_411154() {
    return GetCurrentProcessId();
}

int sub_41115E(_crt_app_type _Type) {
    int result;
    set_app_type(_Type);
    return result;
}

int sub_411168(int param0, int param1) {
    void* ptr0;
    char v0;
    int result1;
    int v1;
    int result;
    if(v0) {
        return result;
    }
    int v2 = result;
    int v3 = param1;
    int v4 = v1;
    _RTC_Failure(ptr0, 0);
    return result1;
}

int sub_411172() {
    int result;
    int* ptr0 = (int*)&gvar_4164A0;
    do {
        result = *ptr0;
        if(result) {
            result = result();
        }
        ++ptr0;
    }
    while((unsigned int)ptr0 < &___rtc_izz);
    return result;
}

int sub_411177(char* _Buffer, char* _Format) {
    return sprintf(_Buffer, _Format);
}

errno_t sub_41117C(unsigned int* _CurrentState, unsigned int _NewValue, unsigned int _Mask) {
    return controlfp_s(_CurrentState, _NewValue, _Mask);
}

int sub_411181(LPFILETIME lpSystemTimeAsFileTime) {
    int result;
    GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
    return result;
}

int sub_411186() {
    return MSVCR90D.dll!_decode_pointer();
}

int sub_41118B(wchar_t* _Expression, wchar_t* _FunctionName, wchar_t* _FileName, unsigned int _LineNo, uintptr_t _Reserved) {
    /*NO_RETURN*/ invoke_watson(_Expression, _FunctionName, _FileName, _LineNo, _Reserved);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_411195() {
    return MSVCR90D.dll!_CRT_RTC_INITW();
}

DWORD sub_41119A() {
    return GetTickCount();
}

LPVOID sub_4111A4(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes) {
    return HeapAlloc(hHeap, dwFlags, dwBytes);
}

int sub_4111A9(int errnum) {
    /*NO_RETURN*/ amsg_exit(errnum);
}

int sub_4111AE() {
    return MSVCR90D.dll!_XcptFilter();
}

int sub_4111B3() {
    return MSVCR90D.dll!_CrtSetCheckCount();
}

LONG sub_4111B8(LONG* Target, LONG Value) {
    return InterlockedExchange(Target, Value);
}

LONG sub_4111BD(_EXCEPTION_POINTERS* ExceptionInfo) {
    return UnhandledExceptionFilter(ExceptionInfo);
}

int sub_4111C2() {
    return MSVCR90D.dll!printf();
}

int sub_4111C7() {
    return MSVCR90D.dll!_except_handler4_common();
}

int sub_4111CC(char* _FileName, _stat64i32* _Stat) {
    return stat64i32(_FileName, _Stat);
}

int sub_4111D6() {
    return MSVCR90D.dll!__getmainargs();
}

int sub_4111DB(LPCSTR lpString) {
    return lstrlenA(lpString);
}

int sub_4111EA() {
    BOOL v0 = IsDebuggerPresent();
    if(v0) {
        v0 = DebuggerProbe(0x1004);
        if(v0) {
            return 1;
        }
    }
    return 0;
}

int sub_4111EF(int _Code) {
    /*NO_RETURN*/ exit(_Code);
}

BOOL sub_4111F9(HMODULE hLibModule) {
    return FreeLibrary(hLibModule);
}

int sub_4111FE(_PIFV* _First, _PIFV* _Last) {
    return initterm_e(_First, _Last);
}

int sub_411600(int param0, int param1) {
    char* ptr0;
    unsigned int* ptr1;
    *ptr1 = (int*)(*ptr1 + (int)ptr1);
    *(char*)ptr1 = (unsigned char)ptr1 + *(char*)ptr1;
    *ptr0 = (unsigned char)param1 | *ptr0;
    *(char*)((char*)ptr1 + 0x50ffffff) = (unsigned char)((param0 + 1) >>> 8) + *(char*)((char*)ptr1 + 0x50ffffff);
    *(char*)ptr1 = (unsigned char)ptr1 + *(char*)ptr1;
    *(char*)(param1 + (int)ptr0) = (unsigned char)param1 + *(char*)(param1 + (int)ptr0);
    *(char*)(param1 + 117) = (unsigned char)(int*)((int)ptr1 >>> 8) + *(char*)(param1 + 117);
    int3();
}

int sub_411860(char* _FileName, _stat64i32* _Stat) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4 = v2;
    int* ptr0 = &v0;
    for(int i = 48; i != 0; --i) {
        *ptr0 = 0xcccccccc;
        ++ptr0;
    }
    stat64i32(_FileName, _Stat);
    sub_411168(v1, v3);
    return sub_411168(v1, v3);
}

int sub_411CE0() {
    atexit((void __cdecl (*_)())&sub_41102D);
    startinfo = __newmode;
    int result = MSVCR90D.dll!__getmainargs();
    argret = result;
    if(argret >= 0x80000000) {
        result = sub_4111A9(8);
    }
    return result;
}

int sub_411D70() {
    int result;
    int* ptr0;
    void* ptr1;
    int v0;
    int v1 = &→_except_handler4;
    int v2 = *(int*)__FS_BASE;
    int v3 = v0;
    unsigned int v4 = ___security_cookie;
    int v5 = v4 ^ &gvar_416AB8;
    int* ptr2 = (int*)(v4 ^ (int)&ptr0);
    *(int**)__FS_BASE = &v2;
    int* ptr3 = &ptr2;
    int v6 = 0;  // __try{ (see __except:411F68h)
    LONG v7 = 0;
    unsigned int* ptr4 = &ptr1;
    int v8 = NtCurrentTeb();
    int v9 = *(int*)(v8 + 4);
    int v10 = 0;
    while(1) {
        --ptr4;
        *ptr4 = 0;
        --ptr4;
        *ptr4 = v9;
        --ptr4;
        *ptr4 = &___native_startup_lock;
        --ptr4;
        *ptr4 = &loc_411DD6;
        v7 = /*BAD_CALL!*/ InterlockedCompareExchange(*(LONG**)(ptr4 + 1), *(LONG*)(ptr4 + 2), *(LONG*)(ptr4 + 3));
        if(!v7) {
            break;
        }
        else if(v7 == v9) {
            v10 = 1;
            break;
        }
        else {
            --ptr4;
            *ptr4 = 1000;
            --ptr4;
            *ptr4 = &loc_411DFB;
            /*BAD_CALL!*/ Sleep(*(DWORD*)(ptr4 + 1));
        }
    }
    if(___native_startup_state == 1) {
        --ptr4;
        *ptr4 = 31;
        --ptr4;
        *ptr4 = &loc_411E0D;
        /*BAD_CALL!*/ sub_4111A9(*(int*)(ptr4 + 1));
        ++ptr4;
        goto loc_411E64;
    }
    else {
        if(!___native_startup_state) {
            ___native_startup_state = 1;
            --ptr4;
            *ptr4 = &___xi_z;
            --ptr4;
            *ptr4 = &___xi_a;
            --ptr4;
            *ptr4 = &loc_411E34;
            result = /*BAD_CALL!*/ sub_4111FE(*(_PIFV**)(ptr4 + 1), *(_PIFV**)(ptr4 + 2));
            ptr4 += 2;
            if(result) {
                *(int*)__FS_BASE = v2;
                return result;
            }
        }
        else {
            has_cctor = 1;
        }
    loc_411E64:
        if(___native_startup_state == 1) {
            --ptr4;
            *ptr4 = &___xc_z;
            --ptr4;
            *ptr4 = &___xc_a;
            --ptr4;
            *ptr4 = &loc_411E75;
            /*BAD_CALL!*/ sub_4110B9(*(_PVFV**)(ptr4 + 1), *(_PVFV**)(ptr4 + 2));
            ptr4 += 2;
            ___native_startup_state = 2;
        }
        if(___native_startup_state != 2) {
            --ptr4;
            *ptr4 = "__native_startup_state == __initialized";
            --ptr4;
            *ptr4 = 0;
            --ptr4;
            *ptr4 = 500;
            --ptr4;
            *ptr4 = "f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\crtexe.c";
            --ptr4;
            *ptr4 = 2;
            --ptr4;
            *ptr4 = &loc_411EA4;
            int v11 = /*BAD_CALL!*/ MSVCR90D.dll!_CrtDbgReportW();
            ptr4 += 5;
            if(v11 == 1) {
                int3();
            }
        }
        if(!v10) {
            --ptr4;
            *ptr4 = 0;
            --ptr4;
            *ptr4 = &___native_startup_lock;
            --ptr4;
            *ptr4 = &loc_411EC0;
            /*BAD_CALL!*/ InterlockedExchange(*(LONG**)(ptr4 + 1), *(LONG*)(ptr4 + 2));
        }
        if(___dyn_tls_init_callback) {
            --ptr4;
            *ptr4 = &___dyn_tls_init_callback;
            --ptr4;
            *ptr4 = &loc_411ED3;
            int v12 = /*BAD_CALL!*/ _IsNonwritableInCurrentImage(*(int*)(ptr4 + 1));
            ++ptr4;
            if(v12) {
                --ptr4;
                *ptr4 = 0;
                --ptr4;
                *ptr4 = 2;
                --ptr4;
                *ptr4 = 0;
                --ptr4;
                *ptr4 = &loc_411EE6;
                /*BAD_CALL!*/ ___dyn_tls_init_callback(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3));
            }
        }
        --ptr4;
        *ptr4 = 1;
        --ptr4;
        *ptr4 = &loc_411EEE;
        /*BAD_CALL!*/ MSVCR90D.dll!_CrtSetCheckCount();
        *(unsigned int*)0x1849A = envp;
        *ptr4 = envp;
        --ptr4;
        *ptr4 = argv;
        --ptr4;
        *ptr4 = argc;
        --ptr4;
        *ptr4 = &loc_411F18;
        int v13 = /*BAD_CALL!*/ main(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2));
        ptr4 += 3;
        mainret = v13;
        if(!managedapp) {
            --ptr4;
            *ptr4 = mainret;
            --ptr4;
            *ptr4 = &loc_411F35;
            /*NO_RETURN*/ exit(*(int*)(ptr4 + 1));
        }
        if(!has_cctor) {
            --ptr4;
            *ptr4 = &loc_411F44;
            /*BAD_CALL!*/ cexit();
        }
    }
    *(int*)__FS_BASE = v2;
    return result;
}

int sub_411F4D() {
    int v0;
    *(int*)(v0 - 40) = ***(unsigned int*)(v0 - 20);
    return sub_4111AE();
}

int sub_411F68(int param0, int param1, int param2) {
    int* ptr0;
    mainret = *(unsigned int*)(ptr0 - 10);
    if(!managedapp) {
        /*NO_RETURN*/ exit(mainret);
    }
    if(!has_cctor) {
        cexit();
    }
    *(ptr0 - 1) = -2;
    *(int*)__FS_BASE = *(ptr0 - 4);
    jump param1;
}

int sub_412334() {
    return 1;
}

int sub_41233A(int param0, int param1, int param2) {
    int* ptr0;
    *(ptr0 - 1) = -2;  // } (starts at 41231Dh)
    *(int*)__FS_BASE = *(ptr0 - 4);
    jump param1;
}

int sub_4126F6() {
    return 1;
}

int sub_4126FC(int param0, int param1, int param2) {
    int* ptr0;
    *(ptr0 - 1) = -2;  // } (starts at 4126DFh)
    *(int*)__FS_BASE = *(ptr0 - 4);
    jump param1;
}

int sub_412F55() {
    return sub_41114F();
}

void sub_413310(int param0, int param1, int param2) {
    int* ptr0;
    *(ptr0 - 1) = -2;
    *(int*)__FS_BASE = *(ptr0 - 4);
    jump param1;
}

int sub_413319() {
    int v0;
    *(int*)(v0 - 40) = ***(unsigned int*)(v0 - 20);
    return *(int*)(v0 - 40) == 0xc0000005 ? 1: 0;
}

int sub_413333(int param0, int param1, int param2) {
    int* ptr0;
    *(ptr0 - 14) = 0;
    *(ptr0 - 1) = -2;
    *(int*)__FS_BASE = *(ptr0 - 4);
    jump param1;
}

void sub_413349(int param0, int param1, int param2) {
    int* ptr0;
    *(ptr0 - 1) = -2;
    *(int*)__FS_BASE = *(ptr0 - 4);
    jump param1;
}

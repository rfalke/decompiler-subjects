
int DebuggerProbe(unsigned long param0) {
    int* ptr0;
    int v0 = &gvar_411087;
    int v1 = *(int*)__FS_BASE;
    int v2 = ___security_cookie ^ &gvar_416AD8;
    *(int**)__FS_BASE = &v1;
    int* ptr1 = &ptr0;
    char v3 = 0;
    int v4 = 0x1001;
    unsigned long v5 = param0;
    char* ptr2 = &v3;
    int v6 = 0;  // __try{ (see __except:41233Ah)
    RaiseException(1080890248, 0, 6, &v4);
    *(int*)__FS_BASE = v1;
    return (int)v3;
}

int DebuggerRuntime(unsigned long param0, int param1, void* param2, wchar_t* param3) {
    int* ptr0;
    int v0 = &gvar_411087;
    int v1 = *(int*)__FS_BASE;
    int v2 = ___security_cookie ^ &gvar_416AF8;
    *(int**)__FS_BASE = &v1;
    int* ptr1 = &ptr0;
    char v3 = 0;
    int v4 = 0x1002;
    unsigned long v5 = param0;
    int v6 = param1;
    void* ptr2 = param2;
    char* ptr3 = &v3;
    wchar_t* ptr4 = param3;
    int v7 = 0;  // __try{ (see __except:4126FCh)
    RaiseException(1080890248, 0, 6, &v4);
    *(int*)__FS_BASE = v1;
    return (int)v3;
}

HINSTANCE__* GetPdbDll() {
    char v0;
    void* ptr0;
    HINSTANCE__* result;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char v6;
    char v7;
    int v8;
    int* ptr1 = (int*)(___security_cookie ^ (int)&v2);
    if(!gvar_41755C) {
        LPCSTR lpLibFileName = mspdbName;
        int v9 = v1;
        gvar_41755C = 1;
        HMODULE v10 = LoadLibraryA(lpLibFileName);
        if(!v10) {
            HMODULE hModule = LoadLibraryA("ADVAPI32.DLL");
            if(!hModule) {
                sub_411023((unsigned int)((int)&v2 ^ (int)ptr1));
                return result;
            }
            int v11 = v8;
            FARPROC v12 = GetProcAddress(hModule, "RegOpenKeyExA");
            int v13 = (int)v12;
            if(!v12) {
                sub_411023((unsigned int)((int)&v2 ^ (int)ptr1));
                return result;
            }
            void* ptr2 = ptr0;
            FARPROC v14 = GetProcAddress(hModule, "RegQueryValueExA");
            if(v14) {
                FARPROC v15 = GetProcAddress(hModule, "RegCloseKey");
                if(v15) {
                    int v16 = v13(0x80000002, "SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS", 0, 1, &v3);
                    if(!v16) {
                        int v17 = v14(v3, "EnvironmentDirectory", 0, &v4, 0, &v0);
                        if(v17) {
                            FreeLibrary(hModule);
                            sub_411023((unsigned int)((int)&v2 ^ (int)ptr1));
                            return result;
                        }
                        char v18 = *(int*)&v0;
                        if((unsigned int)(0x7fffffff - v18) < 13 || (unsigned int)(v18 + 13) >= 260) {
                            FreeLibrary(hModule);
                            sub_411023((unsigned int)((int)&v2 ^ (int)ptr1));
                            return result;
                        }
                        int v19 = v14(v3, "EnvironmentDirectory", 0, &v4, &v5, &v0);
                        v15(v3, (int)ptr2, v11, v9, v4, v13, v3);
                        FARPROC v20 = (FARPROC)FreeLibrary(hModule);
                        if(!v19) {
                            char v21 = *(int*)&v0;
                            v20 = (unsigned int)92 | ((unsigned int)(int*)((int)(int*)((int)v20 >>> 8) & 0xffffff) << 8);
                            if(*(char*)(v21 + (int)&v7) != 92) {
                                *(char*)(v21 + (int)&v6) = (unsigned char)v20;
                            }
                            else {
                                --v21;
                                *(int*)&v0 = v21;
                            }
                            unsigned int v22 = mspdbName;
                            unsigned int v23 = 0;
                            int* ptr3 = (int*)(v21 + (int)&v5);
                            do {
                                *(char*)(v23 + (int)ptr3) = *(char*)(v23 + v22);
                                ++v23;
                            }
                            while((int)v23 <= 11);
                            LoadLibraryA(&v5);
                            sub_411023((unsigned int)((int)&v2 ^ (int)ptr1));
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
    sub_411023((unsigned int)((int)&v2 ^ (int)ptr1));
    return result;
}

_TEB* NtCurrentTeb() {
    return *(_TEB**)(__FS_BASE + (int)(_TEB**)0x18);
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

int _IsNonwritableInCurrentImage(unsigned int param0) {
    int result;
    int v0;
    int v1;
    int v2 = &gvar_411087;
    int v3 = *(int*)__FS_BASE;
    int v4 = v1;
    unsigned int v5 = ___security_cookie;
    int v6 = v5 ^ &gvar_416B38;
    int* ptr0 = (int*)(v5 ^ (int)&v0);
    *(int**)__FS_BASE = &v3;
    int* ptr1 = &ptr0;
    unsigned short* ptr2 = (unsigned short*)&MZHeader;
    int v7 = 0;  // __try{ (see __except:413333h)
    int v8 = _ValidateImageBase((unsigned short*)&MZHeader);
    if(!v8) {
        result = 0;
    }
    else {
        unsigned int v9 = param0 - (int)(unsigned short*)&MZHeader;
        unsigned int v10 = _FindPESection(&MZHeader, param0 - (int)(unsigned short*)&MZHeader);
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

unsigned int _RTC_CheckStackVars(unsigned int param0, unsigned int* param1) {
    unsigned int result;
    void* ptr0;
    char v0;
    int v1;
    int v2 = v1;
    int v3 = 0;
    char v4 = *param1 == 0;
    char v5 = *param1 < 0;
    unsigned int v6 = param0;
    v8 = 0;
    if(!v4 && v5 == 0) {
        do {
            int v7 = *(int*)(param1 + 1);
            param0 = *(unsigned int*)(v7 + v3);
            if(*(int*)(param0 + v6 - 4) != 0xcccccccc || *(int*)((int)(unsigned int*)(*(int*)(v7 + v3 + 4) + param0) + v6) != 0xcccccccc) {
                _RTC_StackFailure(ptr0, *(char**)(*(int*)(param1 + 1) + v3 + 8));
            }
            result = v8 + 1;
            v3 += 12;
            v5 = *param1 > (int)result;
            v0 = (((result - *param1) ^ result) & (*param1 ^ result)) < 0;
            v8 = result;
        }
        while(v5 != v0);
    }
    return result;
}

unsigned int* _RTC_CheckStackVars2(unsigned int param0, unsigned int* param1, unsigned int* param2) {
    void* ptr0;
    char v0;
    int v1;
    char v2;
    unsigned int v3 = param0;
    int v4 = v1;
    int v5 = 0;
    if(param1 != 0) {
        char v6 = *param1 == 0;
        char v7 = *param1 < 0;
        v3 = 0;
        if(!v6 && v7 == 0) {
            unsigned int v8 = param0;
            do {
                int v9 = *(int*)(param1 + 1);
                param0 = *(unsigned int*)(v9 + v5);
                if(*(int*)(param0 + v8 - 4) != 0xcccccccc || *(int*)(*(int*)(v9 + v5 + 4) + param0 + v8) != 0xcccccccc) {
                    _RTC_StackFailure(ptr0, *(char**)(*(int*)(param1 + 1) + v5 + 8));
                }
                v5 += 12;
                v0 = (int)(v3 + 1) < *param1;
                v2 = (((v3 + 1) ^ (v3 + 1 - *param1)) & ((v3 + 1) ^ *param1)) < 0;
                ++v3;
            }
            while(v0 != v2);
        }
    }
    unsigned int* ptr1 = param2;
    int v10 = 0;
    unsigned int* result = ptr1;
    if(ptr1) {
        do {
            result = *(result + 1);
            ++v10;
        }
        while(result);
        if(ptr1) {
            do {
                if(*ptr1 != 0xcccccccc || *(int*)(ptr1 + 5) != 0xcccccccc || *(int*)(ptr1 + 6) != 0xcccccccc || *(int*)(ptr1 + 7) != 0xcccccccc) {
                    _RTC_AllocaFailure((int)ptr0, (int)ptr1, v10);
                }
                result = *(ptr1 + 3);
                if(*((int*)((int)result + (int)ptr1) - 1) != 0xcccccccc) {
                    result = (unsigned int*)_RTC_AllocaFailure((int)ptr0, (int)ptr1, v10);
                }
                ptr1 = *(ptr1 + 1);
                --v10;
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
    return param0 <= 4 ? *(unsigned int*)(param0 * 4 + (int)&_RTC_errlist): 0;
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
    HMODULE hModule;
    SIZE_T v0;
    unsigned int* ptr2;
    void* ptr3;
    int v1;
    int v2;
    char v3;
    unsigned int v4;
    int v5;
    unsigned int v6;
    char v7;
    int* ptr4;
    int v8;
    wchar_t* ptr5 = param1;
    unsigned char* ptr6 = param0;
    param3[0] = 0;
    SIZE_T dwLength = 28;
    PMEMORY_BASIC_INFORMATION lpBuffer = &v3;
    LPCVOID v9 = (LPCVOID)(ptr6 - 1);
    LPCVOID lpAddress = (LPCVOID)(ptr6 - 1);
    ptr5[0] = 0;
    SIZE_T v10 = VirtualQuery(lpAddress, lpBuffer, dwLength);
    if(v10) {
        v10 = GetModuleFileNameW(hModule, (LPWSTR)param4, nSize);
        if(v10) {
            HMODULE v11 = hModule;
            if(*(short*)&v11->unused == 23117) {
                v10 = (SIZE_T)v11[15].unused;
                if((int)v10 > 0) {
                    v10 += (int)v11;
                    if(*(int*)v10 == 0x4550) {
                        unsigned int v12 = (unsigned int)*(short*)(v10 + 6);
                        dwLength = v0;
                        HINSTANCE__* hModule1 = (HINSTANCE__*)((unsigned int)*(short*)(v10 + 20) + v10 + 24);
                        int* ptr7 = (int*)((int)v9 - (int)v11);
                        int* ptr8 = NULL;
                        unsigned int v13 = 0;
                        if(v12 != 0) {
                            hModule1 += 3;
                            do {
                                v11 = (HMODULE)hModule1->unused;
                                if((unsigned int)v11 <= (unsigned int)ptr7) {
                                    ptr8 = (int*)((int)ptr7 - (int)v11);
                                    if((unsigned int)hModule1[-1].unused <= (unsigned int)ptr7) {
                                        goto loc_413494;
                                    }
                                }
                                else {
                                loc_413494:
                                    ++v13;
                                    hModule1 += 10;
                                }
                                break;
                            }
                            while(v12 > v13);
                        }
                        if(v12 != v13) {
                            unsigned int v14 = v13 + 1;
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
                            LPVOID v15 = NULL;
                            if(hModule1 != 0) {
                                lpAddress = &ptr2;
                                hModule1 = (HINSTANCE__*)hModule1((int)param4, 0, 0, 0, (int)&v7, 0, 0);
                                if(hModule1) {
                                    int v16 = **ptr2;
                                    int result = 0;
                                    unsigned int* ptr9 = &lpAddress;
                                    lpAddress = (LPCVOID)&loc_413510;
                                    unsigned int v17 = (unsigned int)v16();
                                    if(v17 == 20030901) {
                                        ptr9 = &ptr3;
                                        int v18 = *(int*)(*ptr2 + 28)(0, &r, (int)&ptr4);
                                        if(v18) {
                                            ptr9 = &v8;
                                            int v19 = *(int*)(*ptr4 + 32)((int)v14, (int)ptr8, (int)&ptr0, 0, 0, 0);
                                            if(v19) {
                                                unsigned int* ptr10 = NULL;
                                                ptr9 = &ptr1;
                                                int v20 = /*BAD_CALL!*/ *(int*)(*ptr0 + 104)((int)&ptr10);
                                                char v21 = (unsigned char)v20;
                                                if(v21) {
                                                    unsigned int* ptr11 = ptr10;
                                                    if(ptr11 != 0) {
                                                        ptr9 = &ptr1;
                                                        int v22 = *(int*)(*ptr11 + 8)();
                                                        if(v22) {
                                                            do {
                                                                int v23 = *(int*)(*ptr10 + 12);
                                                                --ptr9;
                                                                *ptr9 = 0;
                                                                --ptr9;
                                                                *ptr9 = &v6;
                                                                --ptr9;
                                                                *ptr9 = &v1;
                                                                --ptr9;
                                                                *ptr9 = &param0;
                                                                --ptr9;
                                                                *ptr9 = &v4;
                                                                --ptr9;
                                                                *ptr9 = 0;
                                                                --ptr9;
                                                                *ptr9 = &loc_4135A3;
                                                                int v24 = /*BAD_CALL!*/ v23(*(int*)(ptr9 + 1), *(int*)(ptr9 + 2), *(int*)(ptr9 + 3), *(int*)(ptr9 + 4), *(int*)(ptr9 + 5), *(int*)(ptr9 + 6));
                                                                char v25 = (unsigned char)v24;
                                                                if(!v25) {
                                                                    goto loc_413694;
                                                                }
                                                                else if((unsigned int)(unsigned short)param0 == v14 && (unsigned int)ptr8 >= v4 && (unsigned int)(v1 + v4) > (unsigned int)ptr8) {
                                                                    unsigned int v26 = v6;
                                                                    if(v26 && v26 < 0x1fffffff) {
                                                                        --ptr9;
                                                                        *ptr9 = v26 * 8;
                                                                        --ptr9;
                                                                        *ptr9 = 0;
                                                                        --ptr9;
                                                                        *ptr9 = &loc_4135FC;
                                                                        HANDLE v27 = /*BAD_CALL!*/ GetProcessHeap();
                                                                        --ptr9;
                                                                        *ptr9 = v27;
                                                                        --ptr9;
                                                                        *ptr9 = &loc_413603;
                                                                        v15 = /*BAD_CALL!*/ HeapAlloc(*(HANDLE*)(ptr9 + 1), *(DWORD*)(ptr9 + 2), *(SIZE_T*)(ptr9 + 3));
                                                                        if(v15) {
                                                                            int v28 = *(int*)(*ptr10 + 12);
                                                                            --ptr9;
                                                                            *ptr9 = v15;
                                                                            --ptr9;
                                                                            *ptr9 = &v6;
                                                                            --ptr9;
                                                                            *ptr9 = 0;
                                                                            --ptr9;
                                                                            *ptr9 = 0;
                                                                            --ptr9;
                                                                            *ptr9 = 0;
                                                                            --ptr9;
                                                                            *ptr9 = &v5;
                                                                            --ptr9;
                                                                            *ptr9 = &loc_413626;
                                                                            int v29 = /*BAD_CALL!*/ v28(*(int*)(ptr9 + 1), *(int*)(ptr9 + 2), *(int*)(ptr9 + 3), *(int*)(ptr9 + 4), *(int*)(ptr9 + 5), *(int*)(ptr9 + 6));
                                                                            char v30 = (unsigned char)v29;
                                                                            if(v30) {
                                                                                int* ptr12 = (int*)((int)ptr8 - v4);
                                                                                if(*(unsigned int*)v15 <= (unsigned int)ptr12) {
                                                                                    unsigned int v31 = v6;
                                                                                    unsigned int v32 = 1;
                                                                                    if(v31 > 1) {
                                                                                        unsigned int v33 = v31;
                                                                                        while(*(unsigned int*)(v32 * 8 + (int)v15) <= (unsigned int)ptr12) {
                                                                                            ++v32;
                                                                                            if(v32 >= v33) {
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    int v34 = *((int*)(v32 * 8 + (int)v15) - 1);
                                                                                    int* ptr13 = param3;
                                                                                    --ptr9;
                                                                                    *ptr9 = 0;
                                                                                    ptr13[0] = (int)(unsigned int)(v34 & 0xffffff);
                                                                                    int v35 = *(int*)(*ptr0 + 112);
                                                                                    --ptr9;
                                                                                    *ptr9 = 0;
                                                                                    --ptr9;
                                                                                    *ptr9 = 0;
                                                                                    --ptr9;
                                                                                    *ptr9 = &param2;
                                                                                    --ptr9;
                                                                                    *ptr9 = param1;
                                                                                    --ptr9;
                                                                                    *ptr9 = v5;
                                                                                    --ptr9;
                                                                                    *ptr9 = &loc_413674;
                                                                                    int v36 = /*BAD_CALL!*/ v35(*(int*)(ptr9 + 1), *(int*)(ptr9 + 2), *(int*)(ptr9 + 3), *(int*)(ptr9 + 4), *(int*)(ptr9 + 5));
                                                                                    char v37 = (unsigned char)v36;
                                                                                    if(v37) {
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
                                                                    int v38 = *(int*)(*ptr10 + 8);
                                                                    --ptr9;
                                                                    *ptr9 = &loc_4135CD;
                                                                    v2 = /*BAD_CALL!*/ v38();
                                                                }
                                                            }
                                                            while(v2);
                                                            goto loc_41367F;
                                                        }
                                                        else {
                                                        loc_41367F:
                                                            --ptr9;
                                                            *ptr9 = v15;
                                                            --ptr9;
                                                            *ptr9 = 0;
                                                            --ptr9;
                                                            *ptr9 = &loc_413688;
                                                            HANDLE v39 = /*BAD_CALL!*/ GetProcessHeap();
                                                            --ptr9;
                                                            *ptr9 = v39;
                                                            --ptr9;
                                                            *ptr9 = &loc_41368F;
                                                            /*BAD_CALL!*/ HeapFree(*(HANDLE*)(ptr9 + 1), *(DWORD*)(ptr9 + 2), *(LPVOID*)(ptr9 + 3));
                                                        }
                                                    loc_413694:
                                                        int v40 = **ptr10;
                                                        --ptr9;
                                                        *ptr9 = &loc_413698;
                                                        /*BAD_CALL!*/ v40();
                                                    }
                                                }
                                                int v41 = *(int*)(*ptr0 + 64);
                                                --ptr9;
                                                *ptr9 = &loc_4136A2;
                                                /*BAD_CALL!*/ v41();
                                            }
                                            int v42 = *(int*)(*ptr4 + 56);
                                            --ptr9;
                                            *ptr9 = &loc_4136AC;
                                            /*BAD_CALL!*/ v42();
                                        }
                                    }
                                    int v43 = *(int*)(*ptr2 + 40);
                                    --ptr9;
                                    *ptr9 = &loc_4136B6;
                                    /*BAD_CALL!*/ v43();
                                    return result;
                                }
                            }
                        }
                        return 0;
                    }
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
    int v3;
    char v4;
    int* ptr1 = (int*)(___security_cookie ^ (int)&v3);
    char v5 = gvar_417010 == -1;
    void* ptr2 = param0;
    char* ptr3 = param1;
    if(!v5) {
        char v6 = ptr3[0] ? 0: 1;
        int v7 = v2;
        if(!v6) {
            char* ptr4 = ptr3;
            int* ptr5 = (int*)(ptr4 + 1);
            do {
                v4 = ptr4[0];
                ++ptr4;
            }
            while(v4);
            if((unsigned int)(int*)((char*)((int)ptr4 - (int)ptr5) + 45) > 0x400) {
                goto loc_41281F;
            }
            else {
                ptr0 = &v0;
                int v8 = 0;
                do {
                    v4 = aStack_around_th[v8];
                    *(char*)(v8 + (int)&v0) = aStack_around_th[v8];
                    ++v8;
                }
                while(v4);
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
    sub_411023((unsigned int)((int)&v3 ^ (int)ptr1));
}

int _RTC_Terminate() {
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

int _RTC_UninitUse(char* param0) {
    char* ptr0;
    char v0;
    void* ptr1;
    char v1;
    int v2;
    int v3;
    char v4;
    int result;
    int* ptr2 = (int*)(___security_cookie ^ (int)&v2);
    char* ptr3 = param0;
    if(gvar_417014 != -1) {
        int v5 = v3;
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
                sub_411023((unsigned int)((int)&v2 ^ (int)ptr2));
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
    sub_411023((unsigned int)((int)&v2 ^ (int)ptr2));
    return result;
}

int _ValidateImageBase(unsigned short* param0) {
    int result;
    unsigned short* ptr0 = param0;
    if(*param0 != 23117) {
        result = 0;
    }
    else {
        unsigned short* ptr1 = (unsigned short*)(*(int*)(param0 + 30) + (int)param0);
        if(*(int*)ptr1 != 0x4550) {
            result = 0;
        }
        else {
            unsigned short* ptr2 = ptr1 + 12;
            result = *(ptr1 + 12) != 267 ? 0: 1;
        }
    }
    return result;
}

int __CxxSetUnhandledExceptionFilter() {
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&gvar_41113B);
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
    unsigned int v24;
    gvar_417278 = v15;
    gvar_417274 = v17;
    gvar_417270 = v18;
    gvar_41726C = v19;
    gvar_417268 = v16;
    gvar_417264 = v20;
    gvar_417290 = v21;
    gvar_417284 = v9;
    gvar_417260 = v10;
    gvar_41725C = v22;
    gvar_417258 = v23;
    gvar_417254 = v11;
    gvar_417288 = (unsigned int)((unsigned int)&v13 < 808) | ((unsigned int)1 << 1) | ((unsigned int)__parity__((unsigned char)&v0 - 44) << 2) | ((unsigned int)0 << 3) | ((unsigned int)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v13 ^ 0x328) ^ (int)&v14) >>> 4) & 0x1) << 4) | ((unsigned int)0 << 5) | ((unsigned int)(&v0 == 812) << 6) | ((unsigned int)((int)&v14 < 0) << 7) | ((unsigned int)v1 << 8) | ((unsigned int)v2 << 9) | ((unsigned int)0 << 10) | ((unsigned int)((int)(int*)((int)(int*)((int)&v13 ^ (int)&v14) & (int)(int*)((int)&v13 ^ 0x328)) < 0) << 11) | ((unsigned int)v3 << 12) | ((unsigned int)v4 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v5 << 18) | ((unsigned int)v7 << 19) | ((unsigned int)v6 << 20) | ((unsigned int)v8 << 21) | ((unsigned int)0 << 22);
    gvar_41727C = v24;
    gvar_417280 = v0;
    gvar_41728C = &v12;
    GS_ContextRecord = 0x10001;
    gvar_41717C = gvar_417280;
    GS_ExceptionRecord = 3221226505;
    gvar_417174 = 1;
    v14 = ___security_cookie;
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
        /*BAD_CALL!*/ GetSystemTimeAsFileTime(&v2);
        DWORD v4 = /*BAD_CALL!*/ GetCurrentProcessId();
        DWORD v5 = /*BAD_CALL!*/ GetCurrentThreadId();
        DWORD v6 = GetTickCount();
        unsigned int v7 = (((unsigned int)(v2 ^ v3) ^ v4) ^ v5) ^ v6;
        QueryPerformanceCounter(&v0);
        v7 = (unsigned int)(v0 ^ v7) ^ v1;
        if(v7 == -1153374642) {
            v7 = 3141592655;
        }
        else if(!(v7 & 0xffff0000)) {
            v7 = (unsigned int)((v7 * 0x10000) | v7);
        }
        ___security_cookie = v7;
        ___security_cookie_complement = ~v7;
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

int _invoke_watson_if_error(unsigned int param0, wchar_t* _Expression, wchar_t* _FunctionName, wchar_t* _FileName, unsigned int _LineNo, uintptr_t _Reserved) {
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
    int v3 = &gvar_411087;
    int v4 = *(int*)__FS_BASE;
    int v5 = v1;
    unsigned int v6 = ___security_cookie;
    int v7 = v6 ^ &gvar_416B18;
    int* ptr0 = (int*)(v6 ^ (int)&v0);
    *(int**)__FS_BASE = &v4;
    unsigned int v8 = (unsigned int)MSVCR90D.dll!_decode_pointer();
    if(v8 == -1) {
        result = onexit(_Func);
    }
    else {
        _lock();
        unsigned int v9 = (unsigned int)MSVCR90D.dll!_decode_pointer();
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
    errno_t v0 = sub_41117C(NULL, 0x10000, 0x30000);
    return _invoke_watson_if_error((unsigned int)v0, "_controlfp_s(((void *)0), 0x00010000, 0x00030000)", "_setdefaultprecision", "f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\intel\\fp8.c", 31, 0);
}

int atexit(FUNCPTR _) {
    _onexit_t v0 = _onexit((_onexit_t)_);
    return -1 - ((unsigned int)v0 > 0 ? -1: 0);
}

unsigned int* check_managed_app() {
    return NULL;
}

void dumpline(unsigned char* param0, unsigned long param1, int param2) {
    int v0;
    char v1;
    char v2;
    int v3;
    char v4;
    int v5;
    int v6;
    int v7;
    int v8 = v6;
    unsigned char* ptr0 = &v2;
    int v9 = 78;
    do {
        *(int*)ptr0 = 0xcccccccc;
        ptr0 += 4;
        --v9;
    }
    while(v9 == 0);
    unsigned int v10 = ___security_cookie ^ &v3;
    sprintf(&v4, "%08lX:", param1);
    sub_411168(v5, v7);
    if(param2 > 16) {
        param2 = 16;
    }
    unsigned int i;
    for(i = 0; (int)i < param2; ++i) {
        v0 = (int)param0[i];
        sprintf((char*)(i * 3 + (int)&v1), " %02lX");
        sub_411168(v5, v7);
    }
    while(1) {
        unsigned int v11 = i;
        ++i;
        *(int*)&v2 = (int)v11 < 16 ? 1: 0;
        if(!*(int*)&v2) {
            break;
        }
        else {
            →MSVCR90D.dll!strcat(&v4, (char*)&   );
        }
    }
    size_t v12 = →MSVCR90D.dll!strlen(&v4);
    →MSVCR90D.dll!strcpy((char*)((int)&v4 + v12), (char*)&  |);
    v12 += 3;
    for(i = 0; (int)i < param2; ++i) {
        *(int*)&v2 = (char)param0[i] >= 32 && (char)param0[i] <= 126 ? (unsigned int)param0[i]: 46;
        *(char*)((int)(int*)((int)&v4 + v12) + i) = v2;
    }
    while((int)i < 16) {
        *(char*)((int)(int*)((int)&v4 + v12) + i) = ' ';
        ++i;
    }
    →MSVCR90D.dll!strcpy((char*)((int)(int*)((int)&v4 + v12) + i), (char*)&|);
    printf((char*)&%s/, &v4);
    int v13 = sub_411168(v5, v7);
    v0 = v7;
    int v14 = v13;
    _RTC_CheckStackVars(&v3, (unsigned int*)&gvar_411600);
    sub_411023(&v3 ^ v10);
    sub_411168(v5, v7);
}

void failwithmessage(void* param0, int param1, int param2, char* param3) {
    unsigned int v0;
    LPWSTR v1;
    int v2;
    char v3;
    char v4;
    char v5;
    char v6;
    int v7;
    char v8;
    int* ptr0 = (int*)(___security_cookie ^ (int)&v7);
    int v9 = v2;
    LPCCH v10 = (LPCCH)param3;
    unsigned int v11 = 0;
    unsigned int v12 = _RTC_GetErrorFuncW();
    unsigned int v13 = v12;
    if(!v12) {
        v11 = _RTC_GetErrorFunc();
    }
    int cchWideChar = MultiByteToWideChar(65001, 0, (LPCCH)param3, -1, NULL, 0);
    if((unsigned int)cchWideChar < 0x200) {
        int v14 = MultiByteToWideChar(65001, 0, (LPCCH)param3, -1, &v3, cchWideChar);
        if(!v14) {
            goto loc_412483;
        }
        else {
            v1 = &v3;
        }
    }
    else {
    loc_412483:
        v1 = "Runtime Check Error.\n\r Unable to display RTC Message.";
    }
    int v15 = /*BAD_CALL!*/ DebuggerProbe(0x1002);
    if(v15) {
        v15 = DebuggerRuntime((unsigned long)param2, *(int*)(param2 * 4 + (int)&_RTC_NoFalsePositives), param0, (wchar_t*)v1);
        if(!v15) {
            v15 = 0;
            goto loc_4124CF;
        }
    }
    else {
        v15 = 1;
    loc_4124CF:
        unsigned int v16 = v13;
        if(v11 || v16) {
            if((unsigned char)v15) {
                BOOL v17 = IsDebuggerPresent();
                if(v17) {
                    goto loc_4125E0;
                }
            }
            _RTC_GetSrcLine((unsigned char*)((int)param0 - 5), &v4, 260, &v13, &v5, 260);
            if(v16) {
                v0 = (unsigned int)v16(param1, (int)&v4, (int)v13, (int)&v5, "Run-Time Check Failure #%d - %s", param2, v1);
            }
            else {
                LPSTR v18 = "Unknown Filename";
                int v19 = WideCharToMultiByte(65001, 0, (LPCWCH)&v4, -1, &v6, 778, NULL, NULL);
                if(v19) {
                    v18 = &v6;
                }
                LPSTR v20 = "Unknown Module Name";
                int v21 = WideCharToMultiByte(65001, 0, (LPCWCH)&v5, -1, &v8, 778, NULL, NULL);
                if(v21) {
                    v20 = &v8;
                }
                v0 = (unsigned int)v11(param1, (int)v18, (int)v13, (int)v20, "Run-Time Check Failure #%d - %s", param2, v10);
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
    sub_411023((unsigned int)((int)&v7 ^ (int)ptr0));
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
    int v9 = 78;
    do {
        *ptr0 = 0xcccccccc;
        ++ptr0;
        --v9;
    }
    while(v9 == 0);
    unsigned int v10 = ___security_cookie ^ &v2;
    int v11 = sub_411860(_FileName, &v3);
    if(v11) {
        perror(_FileName);
    }
    else {
        fopen(_FileName, (char*)&rb);
        int v12 = sub_411168(v5, v7);
        if(!v12) {
            perror(_FileName);
        }
        else {
            unsigned long v13 = 0;
            while(v0 > v13) {
                fread(&v4, 1, 16, (FILE*)v12);
                int v14 = sub_411168(v5, v7);
                if(!v14) {
                    break;
                }
                else {
                    dumpline((unsigned char*)&v4, v13, v14);
                    v13 = (unsigned long)(v14 + v13);
                }
            }
            fclose((FILE*)v12);
        }
    }
    sub_411168(v5, v7);
    _RTC_CheckStackVars(&v2, (unsigned int*)&gvar_4117DC);
    sub_411023(&v2 ^ v10);
    return sub_411168(v5, v7);
}

int main() {
    char v0;
    int v1;
    int v2;
    unsigned int v3;
    int v4;
    int v5 = v1;
    int* ptr0 = &v0;
    int v6 = 54;
    do {
        *ptr0 = 0xcccccccc;
        ++ptr0;
        --v6;
    }
    while(v6 == 0);
    int v7 = 0;
    for(unsigned int i = 1; (int)i < (int)v3; ++i) {
        int v8 = hexdump(*(char**)(i * 4 + v4));
        v7 += v8;
    }
    return sub_411168(0, v2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int mainCRTStartup() {
    __security_init_cookie();
    return sub_411D70();
}

int pre_c_init() {
    unsigned int* ptr0 = check_managed_app();
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
        _setusermatherr((_UserMathErrorFunctionPointer)&gvar_4111D1);
    }
    _setdefaultprecision();
    if(___globallocalestatus == -1) {
        configthreadlocale(-1);
    }
    return 0;
}

void sub_411023(unsigned int param0) {
    char v0 = ___security_cookie == param0;
    char v1 = (int)___security_cookie > (int)param0;
    char v2 = __parity__((unsigned char)param0 - (unsigned char)___security_cookie);
    char v3 = ___security_cookie > param0;
    char v4 = (int)(((param0 - ___security_cookie) ^ param0) & (___security_cookie ^ param0)) < 0;
    char v5 = (((param0 - ___security_cookie) ^ (___security_cookie ^ param0)) >>> 4) & 0x1;
    if(!v0) {
        /*NO_RETURN*/ →__report_gsfailure();
    }
}

int sub_4110A5() {
    /*NO_RETURN*/ terminate();
}

int sub_4110B9(_PVFV* _First, _PVFV* _Last) {
    int result;
    initterm(_First, _Last);
    return result;
}

int sub_41114F() {
    return MSVCR90D.dll!_unlock();
}

int sub_411168(int param0, int param1) {
    void* ptr0;
    char v0;
    int v1;
    int result;
    if(v0) {
        return result;
    }
    int result1 = result;
    int v2 = param1;
    int v3 = v1;
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

errno_t sub_41117C(unsigned int* _CurrentState, unsigned int _NewValue, unsigned int _Mask) {
    return controlfp_s(_CurrentState, _NewValue, _Mask);
}

int sub_41118B(wchar_t* _Expression, wchar_t* _FunctionName, wchar_t* _FileName, unsigned int _LineNo, uintptr_t _Reserved) {
    /*NO_RETURN*/ invoke_watson(_Expression, _FunctionName, _FileName, _LineNo, _Reserved);
}

int sub_411195() {
    return MSVCR90D.dll!_CRT_RTC_INITW();
}

int sub_4111A9(int errnum) {
    /*NO_RETURN*/ amsg_exit(errnum);
}

int sub_4111C7() {
    return MSVCR90D.dll!_except_handler4_common();
}

int sub_4111FE(_PIFV* _First, _PIFV* _Last) {
    return initterm_e(_First, _Last);
}

int sub_411860(char* _FileName, _stat64i32* _Stat) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4 = v2;
    int* ptr0 = &v0;
    int v5 = 48;
    do {
        *ptr0 = 0xcccccccc;
        ++ptr0;
        --v5;
    }
    while(v5 == 0);
    stat64i32(_FileName, _Stat);
    sub_411168(v1, v3);
    return sub_411168(v1, v3);
}

int sub_411BD6(int param0, int param1, int param2) {
    char v0;
    char v1;
    int v2 = 0;
    int v3 = 0;
    int v4 = sub_411195();
    int* ptr0 = &v3;
    char v5 = &param2 ? 0: 1;
    char v6 = (int)&param2 < 0;
    char v7 = __parity__((unsigned char)&v0 + 12);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0x14) ^ (int)&param2) >>> 4) & 0x1);
    char v9 = (unsigned int)&v3 >= 0xffffffec;
    char v10 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&param2) & (int*)~(int)(int*)((int)&v3 ^ 0x14)) < 0;
    int v11 = param2;
    int* ptr1 = &v1;
    jump v11;
}

int sub_411CE0() {
    atexit((void __cdecl (*_)())&gvar_41102D);
    startinfo = __newmode;
    int result = MSVCR90D.dll!__getmainargs();
    argret = result;
    if(argret >= 0x80000000) {
        result = sub_4111A9(8);
    }
    return result;
}

unsigned int sub_411D70() {
    unsigned int result;
    int* ptr0;
    int* ptr1;
    void* ptr2;
    int v0;
    unsigned int v1;
    int v2;
    int v3 = v0;
    int* ptr3 = &ptr1;
    int v4 = &gvar_411087;
    int v5 = *(int*)__FS_BASE;
    int v6 = *(int*)__FS_BASE;
    unsigned int* ptr4 = &v6;
    char v7 = &ptr0 == 48;
    char v8 = (int)&v1 < 0;
    char v9 = __parity__((unsigned char)&ptr0 - 48);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v6 ^ 0xffffffe4) ^ (int)&v1) >>> 4) & 0x1);
    char v11 = (unsigned int)&v6 >= 28;
    char v12 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&v1) & (int*)~(int)(int*)((int)&v6 ^ 0xffffffe4)) < 0;
    int v13 = v2;
    unsigned int v14 = ___security_cookie;
    int v15 = v14 ^ &gvar_416AB8;
    int* ptr5 = (int*)(v14 ^ (int)&ptr1);
    char v16 = ptr5 ? 0: 1;
    char v17 = (int)ptr5 < 0;
    char v18 = __parity__((unsigned char)ptr5);
    char v19 = 0;
    char v20 = 0;
    int* ptr6 = ptr5;
    unsigned int* ptr7 = &v6;
    *(unsigned int**)__FS_BASE = &v6;
    int* ptr8 = &ptr6;
    int v21 = 0;  // __try{ (see __except:411F68h)
    LONG v22 = 0;
    unsigned int* ptr9 = &ptr2;
    _TEB* ptr10 = NtCurrentTeb();
    void* ptr11 = ptr10->Reserved1[1];
    void* ptr12 = ptr10->Reserved1[1];
    unsigned int v23 = 0;
    while(1) {
        --ptr9;
        *ptr9 = 0;
        void* ptr13 = ptr12;
        --ptr9;
        *ptr9 = ptr13;
        --ptr9;
        *ptr9 = &___native_startup_lock;
        --ptr9;
        *ptr9 = &loc_411DD6;
        LONG v24 = /*BAD_CALL!*/ InterlockedCompareExchange(*(LONG**)(ptr9 + 1), *(LONG*)(ptr9 + 2), *(LONG*)(ptr9 + 3));
        v22 = v24;
        char v25 = v22 ? 0: 1;
        char v26 = v22 < 0;
        char v27 = __parity__((unsigned char)v22);
        char v28 = (unsigned int)v22 < 0;
        char v29 = 0;
        char v30 = 0;
        if(v25) {
            break;
        }
        else {
            LONG v31 = v22;
            char v32 = v31 == ptr12;
            char v33 = v31 < (int)ptr12;
            char v34 = __parity__((unsigned char)v31 - (unsigned char)ptr12);
            char v35 = (unsigned int)v31 < (unsigned int)ptr12;
            char v36 = (int)(int*)((int)(int*)((int)(int*)(v31 - (int)ptr12) ^ v31) & (int)(int*)(v31 ^ (int)ptr12)) < 0;
            char v37 = (int*)((int)(int*)((int)(int*)((int)(int*)(v31 - (int)ptr12) ^ (int)(int*)(v31 ^ (int)ptr12)) >>> 4) & 0x1);
            if(v32) {
                v23 = 1;
                break;
            }
            else {
                --ptr9;
                *ptr9 = 1000;
                --ptr9;
                *ptr9 = &loc_411DFB;
                /*BAD_CALL!*/ Sleep(*(DWORD*)(ptr9 + 1));
            }
        }
    }
    char v38 = ___native_startup_state == 1;
    char v39 = (int)___native_startup_state < 1;
    char v40 = __parity__((unsigned char)___native_startup_state - 1);
    char v41 = ___native_startup_state < 1;
    char v42 = (((___native_startup_state - 1) ^ ___native_startup_state) & (___native_startup_state ^ 0x1)) < 0;
    char v43 = (((___native_startup_state - 1) ^ (___native_startup_state ^ 0x1)) >>> 4) & 0x1;
    if(v38) {
        --ptr9;
        *ptr9 = 31;
        --ptr9;
        *ptr9 = &loc_411E0D;
        int v44 = /*BAD_CALL!*/ sub_4111A9(*(int*)(ptr9 + 1));
        ptr4 = ptr9;
        ++ptr9;
        char v45 = ptr9 ? 0: 1;
        char v46 = (int)ptr9 < 0;
        char v47 = __parity__((unsigned char)ptr9);
        char v48 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 ^ 0x4) ^ (int)ptr9) >>> 4) & 0x1);
        char v49 = (unsigned int)ptr4 >= 0xfffffffc;
        char v50 = (int)(int*)((int)(int*)((int)ptr9 ^ (int)ptr4) & (int*)~(int)(int*)((int)ptr4 ^ 0x4)) < 0;
        goto loc_411E5D;
    }
    else {
        char v51 = ___native_startup_state ? 0: 1;
        char v52 = ___native_startup_state >= 0x80000000;
        char v53 = __parity__((unsigned char)___native_startup_state);
        char v54 = ___native_startup_state < 0;
        char v55 = 0;
        if(v51) {
            ___native_startup_state = 1;
            --ptr9;
            *ptr9 = &___xi_z;
            --ptr9;
            *ptr9 = &___xi_a;
            --ptr9;
            *ptr9 = &loc_411E34;
            int v56 = /*BAD_CALL!*/ sub_4111FE(*(_PIFV**)(ptr9 + 1), *(_PIFV**)(ptr9 + 2));
            ptr9 += 2;
            if(v56) {
                result = 0xff;
                *(int*)__FS_BASE = v6;
                return result;
            }
        }
        else {
            has_cctor = 1;
        }
    loc_411E5D:
        char v57 = ___native_startup_state == 1;
        char v58 = (int)___native_startup_state < 1;
        char v59 = __parity__((unsigned char)___native_startup_state - 1);
        char v60 = ___native_startup_state < 1;
        char v61 = (((___native_startup_state - 1) ^ ___native_startup_state) & (___native_startup_state ^ 0x1)) < 0;
        char v62 = (((___native_startup_state - 1) ^ (___native_startup_state ^ 0x1)) >>> 4) & 0x1;
        if(v57) {
            --ptr9;
            *ptr9 = &___xc_z;
            --ptr9;
            *ptr9 = &___xc_a;
            --ptr9;
            *ptr9 = &loc_411E75;
            int v63 = /*BAD_CALL!*/ sub_4110B9(*(_PVFV**)(ptr9 + 1), *(_PVFV**)(ptr9 + 2));
            ptr4 = ptr9;
            ptr9 += 2;
            char v64 = ptr9 ? 0: 1;
            char v65 = (int)ptr9 < 0;
            char v66 = __parity__((unsigned char)ptr9);
            char v67 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 ^ 0x8) ^ (int)ptr9) >>> 4) & 0x1);
            char v68 = (unsigned int)ptr4 >= 0xfffffff8;
            char v69 = (int)(int*)((int)(int*)((int)ptr9 ^ (int)ptr4) & (int*)~(int)(int*)((int)ptr4 ^ 0x8)) < 0;
            ___native_startup_state = 2;
        }
        char v70 = ___native_startup_state == 2;
        char v71 = (int)___native_startup_state < 2;
        char v72 = __parity__((unsigned char)___native_startup_state - 2);
        char v73 = ___native_startup_state < 2;
        char v74 = (((___native_startup_state - 2) ^ ___native_startup_state) & (___native_startup_state ^ 0x2)) < 0;
        char v75 = (((___native_startup_state - 2) ^ (___native_startup_state ^ 0x2)) >>> 4) & 0x1;
        if(!v70) {
            --ptr9;
            *ptr9 = "__native_startup_state == __initialized";
            --ptr9;
            *ptr9 = 0;
            --ptr9;
            *ptr9 = 500;
            --ptr9;
            *ptr9 = "f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\crtexe.c";
            --ptr9;
            *ptr9 = 2;
            --ptr9;
            *ptr9 = &loc_411EA4;
            result = (unsigned int)/*BAD_CALL!*/ MSVCR90D.dll!_CrtDbgReportW();
            ptr9 += 5;
            char v76 = result == 1;
            char v77 = (int)result < 1;
            char v78 = __parity__((unsigned char)result - 1);
            char v79 = result < 1;
            char v80 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
            char v81 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
            if(v76) {
                interrupt(3);
            }
        }
        if(!v23) {
            --ptr9;
            *ptr9 = 0;
            --ptr9;
            *ptr9 = &___native_startup_lock;
            --ptr9;
            *ptr9 = &loc_411EC0;
            /*BAD_CALL!*/ InterlockedExchange(*(LONG**)(ptr9 + 1), *(LONG*)(ptr9 + 2));
        }
        if(___dyn_tls_init_callback) {
            --ptr9;
            *ptr9 = &___dyn_tls_init_callback;
            --ptr9;
            *ptr9 = &loc_411ED3;
            int v82 = /*BAD_CALL!*/ _IsNonwritableInCurrentImage(*(ptr9 + 1));
            ++ptr9;
            if(v82) {
                --ptr9;
                *ptr9 = 0;
                --ptr9;
                *ptr9 = 2;
                --ptr9;
                *ptr9 = 0;
                --ptr9;
                *ptr9 = &loc_411EE6;
                /*BAD_CALL!*/ ___dyn_tls_init_callback(*(int*)(ptr9 + 1), *(int*)(ptr9 + 2), *(int*)(ptr9 + 3));
            }
        }
        --ptr9;
        *ptr9 = 1;
        --ptr9;
        *ptr9 = &loc_411EEE;
        /*BAD_CALL!*/ MSVCR90D.dll!_CrtSetCheckCount();
        *(unsigned int*)0x1849A = envp;
        *ptr9 = envp;
        --ptr9;
        *ptr9 = argv;
        --ptr9;
        *ptr9 = argc;
        --ptr9;
        *ptr9 = &loc_411F18;
        int v83 = /*BAD_CALL!*/ main();
        ptr9 += 3;
        mainret = v83;
        if(!managedapp) {
            --ptr9;
            *ptr9 = mainret;
            --ptr9;
            *ptr9 = &loc_411F35;
            /*NO_RETURN*/ exit(*(int*)(ptr9 + 1));
        }
        if(!has_cctor) {
            --ptr9;
            *ptr9 = &loc_411F44;
            /*BAD_CALL!*/ cexit();
        }
        result = mainret;
    }
    *(int*)__FS_BASE = v6;
    return result;
}

int sub_412F55() {
    return sub_41114F();
}

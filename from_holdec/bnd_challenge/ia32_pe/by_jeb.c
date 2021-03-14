
void sub_40F28C() {
    // Decompilation error
}

wchar_t* CPtoLocaleName(int param0) {
    switch(param0) {
        case 932: {
            return "ja-JP";
        }
        case 936: {
            return "zh-CN";
        }
        case 949: {
            return "ko-KR";
        }
        default: {
            if(param0 != 950) {
                return NULL;
            }
            return "zh-TW";
        }
    }
}

// Package: Concurrency::details::platform

void Concurrency::details::platform::__Sleep(unsigned long dwMilliseconds) {
    Sleep(dwMilliseconds);
}

unsigned int GetTableIndexFromLocaleName(int param0) {
    int v0 = 0;
    int v1 = 227;
    do {
        int v2 = v1 + v0;
        int v3 = __wcsnicmp_ascii(param0, *(short**)(((v2 - (v2 < 0 ? -1: 0)) >> 1) * 8 + (int)&gvar_413368), 85);
        if(!v3) {
            return *(unsigned int*)(((v2 - (v2 < 0 ? -1: 0)) >> 1) * 8 + (int)&gvar_41336C);
        }
        else if(v3 < 0) {
            v1 = ((v2 - (v2 < 0 ? -1: 0)) >> 1) - 1;
        }
        else {
            v0 = ((v2 - (v2 < 0 ? -1: 0)) >> 1) + 1;
        }
    }
    while(v1 >= v0);
    return 0xffffffff;
}

int _EH4_CallFilterFunc(int param0) {
    return param0();
}

int _EH4_GlobalUnwind2(PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord) {
    int result;
    →KERNEL32.dll!RtlUnwind(TargetFrame, (PVOID)&loc_4048C6, ExceptionRecord, NULL);
    return result;
}

int _EH4_LocalUnwind(int param0, int* param1, int param2, int* param3) {
    return _local_unwind4(param3, param0, param1);
}

int _EH4_TransferToHandler(int param0, int param1) {
    _NLG_Notify(param0, 1);
    jump param0;
}

void _EH_epilog3(int param0, int param1, int param2, int param3) {
    int v0;
    int* ptr0;
    *(int*)__FS_BASE = *(ptr0 - 4);
    *ptr0 = v0;
    jump *ptr0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _FF_MSGBANNER() {
    int result;
    int v0 = _set_error_mode(3);
    if(v0 != 1) {
        result = _set_error_mode(3);
        if(!result && gvar_419308 == 1) {
            _NMSG_WRITE(252);
            return _NMSG_WRITE(0xFF);
        }
    }
    else {
        _NMSG_WRITE(252);
        result = _NMSG_WRITE(0xFF);
    }
    return result;
}

int _FindPESection(int param0, unsigned int param1) {
    int v0;
    unsigned int v1 = 0;
    int v2 = v0;
    int v3 = *(int*)(param0 + 60) + param0;
    unsigned int v4 = (unsigned int)*(short*)(v3 + 6);
    int result = (unsigned int)*(short*)(v3 + 20) + v3 + 24;
    if(v4) {
        do {
            unsigned int v5 = *(unsigned int*)(result + 12);
            if(v5 <= param1 && (unsigned int)(*(int*)(result + 8) + v5) > param1) {
                return result;
            }
            ++v1;
            result += 40;
        }
        while(v1 < v4);
    }
    else {
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int _GET_RTERRMSG(int param0) {
    unsigned int v0 = 0;
    while(*(unsigned int*)(v0 * 8 + (int)&gvar_411198) != param0) {
        ++v0;
        if(v0 >= 23) {
            return 0;
        }
    }
    return *(unsigned int*)(v0 * 8 + (int)&gvar_41119C);
}

// Stale decompilation - Refresh this view to re-decompile this code
int _IsNonwritableInCurrentImage(int param0) {
    int v0;
    int v1;
    int v2 = &_except_handler4;
    int v3 = *(int*)__FS_BASE;
    int v4 = v1;
    unsigned int v5 = gvar_4183F0;
    int v6 = v5 ^ &gvar_4178D8;
    int* ptr0 = (int*)(v5 ^ (int)&v0);
    *(int**)__FS_BASE = &v3;
    int* ptr1 = &ptr0;
    int v7 = 0;  // __try{ (see __except:40982Ch)
    int v8 = _ValidateImageBase((short*)&MZHeader);
    if(v8) {
        v8 = _FindPESection(&MZHeader, (unsigned int)(param0 - &MZHeader));
        if(v8) {
            int result = ~(*(int*)(v8 + 36) >>> 31) & 0x1;
            *(int*)__FS_BASE = v3;
            return result;
        }
    }
    *(int*)__FS_BASE = v3;
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
// Package: _LocaleUpdate

int* _LocaleUpdate::_LocaleUpdate(int* param0, int* param1) {
    int* ptr0 = param1;
    *(char*)(param0 + 3) = 0;
    if(!ptr0) {
        int v0 = _getptd();
        *(param0 + 2) = v0;
        int v1 = *(int*)(v0 + 108);
        *param0 = *(int*)(v0 + 108);
        *(param0 + 1) = *(int*)(v0 + 104);
        if(gvar_418BDC != v1 && !(*(int*)(v0 + 112) & gvar_418C98)) {
            int v2 = __updatetlocinfo();
            *param0 = v2;
        }
        if(*(param0 + 1) != gvar_418974 && !(*(int*)(*(param0 + 2) + 112) & gvar_418C98)) {
            void* ptr1 = __updatetmbcinfo();
            *(void**)(param0 + 1) = ptr1;
        }
        ptr0 = *(unsigned int*)(param0 + 2);
        int v3 = *(ptr0 + 28);
        if(!((unsigned char)v3 & 0x2)) {
            *(ptr0 + 28) = v3 | 0x2;
            *(char*)(param0 + 3) = 1;
        }
    }
    else {
        *param0 = *ptr0;
        *(param0 + 1) = *(ptr0 + 1);
    }
    return param0;
}

int _NLG_Call() {
    int v0;
    return v0();
}

unsigned int _NLG_Notify(int param0, unsigned int param1) {
    unsigned int v0;
    unsigned int result;
    gvar_418DF8 = param1;
    gvar_418DF4 = result;
    gvar_418DFC = v0;
    return result;
}

unsigned int _NLG_Notify1(unsigned int param0, int param1) {
    unsigned int v0;
    unsigned int result;
    gvar_418DF8 = param0;
    gvar_418DF4 = result;
    gvar_418DFC = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _NMSG_WRITE(int param0) {
    char v0;
    int result;
    int* ptr0;
    char v1;
    int v2;
    int* ptr1 = (int*)(gvar_4183F0 ^ (int)&ptr0);
    unsigned int v3 = _GET_RTERRMSG(param0);
    if(v3) {
        int v4 = v2;
        int v5 = _set_error_mode(3);
        if(v5 != 1) {
            int v6 = _set_error_mode(3);
            if(!v6 && gvar_419308 == 1) {
                goto loc_407167;
            }
            else if(param0 != 252) {
                errno_t v7 = wcscpy_s((wchar_t*)0x419310, 788, "Runtime Error!\n\nProgram: ");
                if(!v7) {
                    gvar_41954A = 0;
                    DWORD v8 = GetModuleFileNameW(NULL, (LPWSTR)0x419342, 260);
                    if(!v8) {
                        errno_t v9 = wcscpy_s((wchar_t*)0x419342, 763, "<program name unknown>");
                        if(v9) {
                            goto loc_4071D2;
                        }
                    }
                    size_t v10 = wcslen((wchar_t*)0x419342);
                    if((unsigned int)(v10 + 1) > 60) {
                        size_t v11 = wcslen((wchar_t*)0x419342);
                        errno_t v12 = wcsncpy_s((wchar_t*)(v11 * 2 + &gvar_4192CC), (rsize_t)(763 - (int)(int*)((int)(int*)(v11 * 2 - 118) >> 1)), (wchar_t*)&gvar_411B9C, 3);
                        if(v12) {
                            goto loc_4071D2;
                        }
                    }
                    errno_t v13 = wcscat_s((wchar_t*)0x419310, 788, (wchar_t*)&gvar_411BA4);
                    if(!v13) {
                        errno_t v14 = wcscat_s((wchar_t*)0x419310, 788, (wchar_t*)v3);
                        if(!v14) {
                            __crtMessageBoxW(4297488, "Microsoft Visual C++ Runtime Library", 0x12010);
                            __security_check_cookie((uintptr_t)((int)&ptr0 ^ (int)ptr1));
                            return result;
                        }
                    }
                }
            loc_4071D2:
                /*NO_RETURN*/ _invoke_watson(NULL, NULL, NULL, 0, 0);
            }
        }
        else {
        loc_407167:
            HANDLE v15 = GetStdHandle(0xfffffff4);
            HANDLE hFile = v15;
            if(hFile && hFile != -1) {
                unsigned int v16 = 0;
                do {
                    v15 = (unsigned int)*(char*)(v16 * 2 + v3) | ((unsigned int)(int*)((int)(int*)((int)v15 >>> 8) & 0xffffff) << 8);
                    *(char*)(v16 + (int)&v1) = (char)v15;
                    if(*(short*)(v16 * 2 + v3) == 0) {
                        break;
                    }
                    else {
                        ++v16;
                    }
                }
                while(v16 < 500);
                DWORD v17 = 0;
                char v18 = 0;
                LPWSTR v19 = &v0;
                size_t v20 = strlen(&v1);
                WriteFile(hFile, &v1, (DWORD)v20, (LPDWORD)v19, (LPOVERLAPPED)v17);
            }
        }
    }
    __security_check_cookie((uintptr_t)((int)&ptr0 ^ (int)ptr1));
    return result;
}

int* _SEH_prolog4(int param0, int param1) {
    int v0;
    *(int**)__FS_BASE = &v0;
    return &v0;
}

int _ValidateImageBase(short* param0) {
    if(*param0 != 23117) {
        return 0;
    }
    int* ptr0 = (int*)(*(int*)(param0 + 30) + (int)param0);
    return *ptr0 != 0x4550 ? 0: *(short*)(ptr0 + 6) == 267 ? 1: 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _XcptFilter(int param0, int param1) {
    int v0;
    int result = _getptd_noexit();
    if(result) {
        int* ptr0 = *(unsigned int*)(result + 92);
        int* ptr1 = *(unsigned int*)(result + 92);
        while(*ptr1 != param0) {
            ptr1 += 3;
            if(ptr0 + 36 <= ptr1) {
                break;
            }
        }
        if(ptr0 + 36 <= ptr1 || *ptr1 != param0) {
            ptr1 = NULL;
        }
        if(ptr1) {
            ptr0 = *(unsigned int*)(ptr1 + 2);
            if(!ptr0) {
                return 0;
            }
            else if(ptr0 == 1) {
                result = -1;
            }
            else if(ptr0 == 5) {
                *(ptr1 + 2) = 0;
                result = 1;
            }
            else {
                int v1 = v0;
                int v2 = *(int*)(result + 96);
                *(int*)(result + 96) = param1;
                if(*(ptr1 + 1) == 8) {
                    int* ptr2 = (int*)0x24;
                    int* ptr3 = (int*)0x24;
                    do {
                        *((int*)(*(int*)(result + 92) + (int)ptr3) + 2) = 0;
                        ptr3 += 3;
                    }
                    while((int)ptr3 < 144);
                    int v3 = *(int*)(result + 100);
                    switch(*ptr1) {
                        case -1073741683: {
                            *(int*)(result + 100) = 130;
                            break;
                        }
                        case -1073741682: {
                            *(int*)(result + 100) = 131;
                            break;
                        }
                        case -1073741681: {
                            *(int*)(result + 100) = 134;
                            break;
                        }
                        case -1073741680: {
                            *(int*)(result + 100) = 129;
                            break;
                        }
                        case -1073741679: {
                            *(int*)(result + 100) = 132;
                            break;
                        }
                        case -1073741678: {
                            *(int*)(result + 100) = 138;
                            break;
                        }
                        case -1073741677: {
                            *(int*)(result + 100) = 133;
                            break;
                        }
                        case -1073741132: {
                            *(int*)(result + 100) = 142;
                            break;
                        }
                        case -1073741131: {
                            *(int*)(result + 100) = 141;
                            break;
                        }
                    }
                    ptr0(8, *(int*)(result + 100));
                    *(int*)(result + 100) = v3;
                loc_4075BB:
                    *(int*)(result + 96) = v2;
                    result = -1;
                }
                else {
                    *(ptr1 + 2) = 0;
                    ptr0();
                    goto loc_4075BB;
                }
            }
        }
        else {
            return 0;
        }
    }
    return result;
}

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS* param0) {
    EXCEPTION_RECORD* ptr0 = param0->ExceptionRecord;
    if(ptr0->ExceptionCode == -529697949 && ptr0->NumberParameters == 3) {
        ptr0 = (EXCEPTION_RECORD*)ptr0->ExceptionInformation[0];
        if((ptr0 >= 429065504 && ptr0 <= 429065506) || ptr0 == 0x1994000) {
            /*NO_RETURN*/ terminate();
        }
    }
    return 0;
}

int* __addlocaleref(int* param0) {
    int v0;
    int* ptr0 = param0;
    int v1 = v0;
    *ptr0 = *ptr0 + 1;
    int* ptr1 = *(unsigned int*)(ptr0 + 30);
    if(ptr1) {
        *ptr1 = *ptr1 + 1;
    }
    int* ptr2 = *(unsigned int*)(ptr0 + 32);
    if(ptr2) {
        *ptr2 = *ptr2 + 1;
    }
    int* ptr3 = *(unsigned int*)(ptr0 + 31);
    if(ptr3) {
        *ptr3 = *ptr3 + 1;
    }
    int* ptr4 = *(unsigned int*)(ptr0 + 34);
    if(ptr4) {
        *ptr4 = *ptr4 + 1;
    }
    int v2 = 6;
    unsigned int* ptr5 = (unsigned int*)(ptr0 + 7);
    int counter = 6;
    do {
        if(*(int*)(ptr5 - 2) != &gvar_418A74) {
            int* ptr6 = *ptr5;
            if(ptr6) {
                *ptr6 = *ptr6 + 1;
            }
        }
        if(*(int*)(ptr5 - 3)) {
            int* ptr7 = *(ptr5 - 1);
            if(ptr7) {
                *ptr7 = *ptr7 + 1;
            }
        }
        ptr5 += 4;
        --counter;
    }
    while(counter);
    int* result = (int*)(*(ptr0 + 39) + 176);
    *result = *result + 1;
    return result;
}

int __ascii_strnicmp(char* param0, char* param1, int param2) {
    char v0;
    int v1;
    int v2;
    int v3 = v2;
    int result = param2;
    if(result) {
        char* ptr0 = param0;
        char* ptr1 = param1;
        int v4 = (unsigned int)(unsigned char)v4 | ((unsigned int)32 << 8) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
        int v5 = result;
        do {
            v1 = (unsigned int)(unsigned char)v1 | ((unsigned int)*ptr0 << 8) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
            char v6 = (unsigned char)(v1 >>> 8) ? 0: 1;
            v1 = (unsigned int)*ptr1 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
            if(v6 || !(unsigned char)v1) {
                break;
            }
            else {
                ++ptr0;
                ++ptr1;
                if((unsigned char)(v1 >>> 8) >= 65 && (unsigned char)(v1 >>> 8) <= 90) {
                    v1 = (unsigned int)(unsigned char)v1 | ((unsigned int)((unsigned char)(v1 >>> 8) + (unsigned char)(v4 >>> 8)) << 8) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
                }
                if((unsigned char)v1 >= 65 && (unsigned char)v1 <= 90) {
                    v1 = (unsigned int)((unsigned char)(v4 >>> 8) + (unsigned char)v1) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                }
                v0 = (unsigned char)(v1 >>> 8) < (unsigned char)v1;
                if((unsigned char)(v1 >>> 8) != (unsigned char)v1) {
                    return v0 ? -1: 1;
                }
                --v5;
            }
        }
        while(v5);
        result = 0;
        v0 = (unsigned char)(v1 >>> 8) < (unsigned char)v1;
        if((unsigned char)(v1 >>> 8) != (unsigned char)v1) {
            result = v0 ? -1: 1;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int __check_float_string(int param0, unsigned int* param1, unsigned int* param2, unsigned char* param3, int* param4) {
    int result;
    unsigned int* ptr0 = param1;
    unsigned int v0 = *ptr0;
    if(v0 == param0) {
        unsigned int* ptr1 = param2;
        int v1 = 2;
        int v2 = (int)v0;
        int v3 = *ptr1;
        if(v3 == param3) {
            v0 = sub_408F5B(v2, 2);
            *ptr1 = v0;
            if(!v0) {
                goto loc_402DFC;
            }
            else {
                *param4 = 1;
                unk_lib_sub2(*ptr1, param3, *ptr0);
                *ptr0 = *ptr0 * 2;
                return 1;
            }
        }
        else {
            v0 = (unsigned int)_recalloc_crt(v3, v2, 2);
        }
        if(v0) {
            *ptr1 = v0;
            *ptr0 = *ptr0 * 2;
            return 1;
        }
    loc_402DFC:
        result = 0;
    }
    else {
        result = 1;
    }
    return result;
}

int __copy_path_to_wide_string(LPCCH lpMultiByteStr1, unsigned int* param1) {
    int result;
    int v0;
    int cchWideChar = v0;
    UINT CodePage = 0;
    if(lpMultiByteStr1 != 0) {
        unsigned int* ptr0 = param1;
        if(!ptr0) {
            int* ptr1 = _errno();
            ptr1[0] = 22;
            _invalid_parameter_noinfo();
            return 22;
        }
        int v1 = __crtIsPackagedApp(v0);
        if(!v1) {
            v1 = AreFileApisANSI();
            if(!v1) {
                CodePage = 1;
            }
        }
        void* ptr2 = NULL;
        LPWSTR lpWideCharStr = NULL;
        int cbMultiByte = -1;
        LPCCH lpMultiByteStr = lpMultiByteStr1;
        *ptr0 = 0;
        int v2 = MultiByteToWideChar(CodePage, 0, lpMultiByteStr, cbMultiByte, lpWideCharStr, (int)ptr2);
        cchWideChar = v2;
        if(!v2) {
            DWORD v3 = GetLastError();
            _dosmaperr((unsigned int)v3);
            goto loc_406C72;
        }
        else {
            int* ptr3 = (int*)_malloc_crt((size_t)(v2 * 2));
            *ptr0 = ptr3;
            if(ptr3) {
                int v4 = MultiByteToWideChar(CodePage, 0, lpMultiByteStr1, -1, (LPWSTR)ptr3, cchWideChar);
                if(!v4) {
                    DWORD v5 = GetLastError();
                    _dosmaperr((unsigned int)v5);
                    free(*ptr0);
                    *ptr0 = 0;
                    goto loc_406C72;
                }
                else {
                    result = 1;
                }
            }
            else {
            loc_406C72:
                result = 0;
            }
        }
    }
    else {
        int* ptr1 = _errno();
        ptr1[0] = 22;
        _invalid_parameter_noinfo();
        result = 22;
    }
    return result;
}

int __createFile(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, int param5, int param6) {
    int result;
    int v0;
    int v1;
    int v2 = __crtIsPackagedApp(v1);
    if(v2) {
        HMODULE hModule = GetModuleHandleW("kernel32.dll");
        FARPROC v3 = GetProcAddress(hModule, "CreateFile2");
        if(!v3) {
            result = -1;
        }
        else {
            int v4 = 0;
            int v5 = 0;
            int v6 = param6;
            LPSECURITY_ATTRIBUTES v7 = lpSecurityAttributes;
            result = v3(lpFileName, dwDesiredAccess, dwShareMode, dwCreationDisposition, &v0, 24, param5);
        }
    }
    else {
        result = (int)CreateFileW(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, (DWORD)(param5 | param6), NULL);
    }
    return result;
}

BOOL __crtCorExitProcess(int param0) {
    HMODULE v0;
    HMODULE hModule = v0;
    BOOL result = GetModuleHandleExW(0, "mscoree.dll", &hModule);
    if(result) {
        result = (BOOL)GetProcAddress(hModule, "CorExitProcess");
        if(result) {
            result = result(param0);
        }
    }
    return result;
}

unsigned int __crtDownlevelLocaleNameToLCID(int param0) {
    if(param0) {
        unsigned int v0 = GetTableIndexFromLocaleName(param0);
        if(v0 < 0x80000000) {
            return *(unsigned int*)(v0 * 8 + (int)&gvar_412C48);
        }
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
void __crtExitProcess(int status) {
    __crtCorExitProcess(status);
    /*NO_RETURN*/ ExitProcess((UINT)status);
}

DWORD __crtFlsAlloc(int param0) {
    int v0;
    unsigned int v1 = gvar_4183F0 ^ gvar_419F60;
    if(v1) {
        v1(param0);
        jump v0;
    }
    return TlsAlloc();
}

BOOL __crtFlsFree(DWORD dwTlsIndex) {
    DWORD v0;
    unsigned int v1 = gvar_4183F0 ^ gvar_419F64;
    if(v1) {
        v1((int)dwTlsIndex);
        jump v0;
    }
    return TlsFree(dwTlsIndex);
}

LPVOID __crtFlsGetValue(DWORD dwTlsIndex) {
    DWORD v0;
    unsigned int v1 = gvar_4183F0 ^ gvar_419F68;
    if(v1) {
        v1((int)dwTlsIndex);
        jump v0;
    }
    return TlsGetValue(dwTlsIndex);
}

BOOL __crtFlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue) {
    unsigned int v0 = gvar_4183F0 ^ gvar_419F6C;
    if(v0) {
        v0((int)dwTlsIndex, (int)lpTlsValue);
        jump lpTlsValue;
    }
    return TlsSetValue(dwTlsIndex, lpTlsValue);
}

void* __crtGetEnvironmentStringsA(int param0) {
    int v0;
    LPWCH lpWideCharStr = GetEnvironmentStringsW();
    void* result = NULL;
    if(lpWideCharStr) {
        LPWCH v1 = lpWideCharStr;
        if(lpWideCharStr[0] != 0) {
        loc_407D20:
            do {
                ++v1;
                if(v1[0] != 0) {
                    goto loc_407D20;
                }
                else {
                    ++v1;
                }
            }
            while(v1[0] != 0);
        }
        int v2 = v0;
        int cchWideChar = (int)((char*)((int)(int*)((int)v1 - (int)lpWideCharStr) >> 1) + 1);
        int cbMultiByte = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, NULL, 0, NULL, NULL);
        if(cbMultiByte) {
            void* _Block = _malloc_crt((size_t)cbMultiByte);
            if(!_Block) {
                FreeEnvironmentStringsW(lpWideCharStr);
                return NULL;
            }
            int v3 = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, (LPSTR)_Block, cbMultiByte, NULL, NULL);
            if(!v3) {
                free(_Block);
                _Block = NULL;
            }
            FreeEnvironmentStringsW(lpWideCharStr);
            result = _Block;
        }
        else {
            FreeEnvironmentStringsW(lpWideCharStr);
            result = NULL;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int __crtGetStringTypeA(int* param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    char v0;
    char v1;
    int v2;
    _LocaleUpdate::_LocaleUpdate(&v0, param0);
    int result = __crtGetStringTypeA_stat((int)&v0, param1, param2, param3, param4, param5, param6);
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

int __crtGetStringTypeA_stat(int* param0, DWORD dwInfoType, LPCCH lpMultiByteStr, int cbMultiByte, LPWORD lpCharType, UINT CodePage1, int param6) {
    void* _Dst;
    void* _Dst;
    void* ptr0;
    int v0;
    int v1;
    int v2;
    int result;
    int* ptr1 = (int*)(gvar_4183F0 ^ (int)&v0);
    UINT CodePage = CodePage1;
    int v3 = v2;
    if(!CodePage) {
        CodePage = *(UINT*)(*param0 + 4);
        CodePage1 = *(UINT*)(*param0 + 4);
    }
    int cchWideChar = MultiByteToWideChar(CodePage, (DWORD)((param6 == 0 ? 0: 1) * 8 + 1), lpMultiByteStr, cbMultiByte, NULL, 0);
    if(cchWideChar != 0) {
        if(cchWideChar >= 0 && (unsigned int)cchWideChar <= 0x7ffffff0 && (unsigned int)(cchWideChar * 2 + 8) > (unsigned int)(cchWideChar * 2)) {
            if((size_t)(cchWideChar * 2 + 8) <= 0x400) {
                _alloca_probe_162(cchWideChar * 2);
                ptr0 = &v1;
                if(ptr0 == 0) {
                    __security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr1));
                    return result;
                }
                v1 = 0xcccc;
                _Dst = (void*)((int)ptr0 + 8);
                goto loc_40B2C8;
            }
            else {
                ptr0 = malloc((size_t)(cchWideChar * 2 + 8));
            }
            if(ptr0) {
                *(int*)ptr0 = 0xdddd;
                _Dst = (void*)((int)ptr0 + 8);
                goto loc_40B2C8;
            }
        }
        else {
            _Dst = NULL;
        loc_40B2C8:
            if(_Dst) {
                memset(_Dst, 0, (size_t)(cchWideChar * 2));
                int cchSrc = MultiByteToWideChar(CodePage1, 1, lpMultiByteStr, cbMultiByte, (LPWSTR)_Dst, cchWideChar);
                if(cchSrc) {
                    GetStringTypeW(dwInfoType, (LPCWCH)_Dst, cchSrc, lpCharType);
                }
                unk_lib_sub18(_Dst);
            }
        }
    }
    __security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr1));
    return result;
}

int __crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int param2) {
    int v0;
    unsigned int v1 = gvar_4183F0 ^ gvar_419F70;
    if(v1) {
        v1((int)lpCriticalSection, (int)dwSpinCount, param2);
        jump v0;
    }
    InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
    return 1;
}

int __crtIsPackagedApp(int param0) {
    int v0;
    int v1 = gvar_418544;
    if(v1 < 0) {
        v1 = 0;
        unsigned int v2 = gvar_4183F0 ^ gvar_419FD4;
        if(v2) {
            v2 = (unsigned int)v2((int)&v0, 0);
            if(v2 == 122) {
                v1 = 1;
            }
        }
        gvar_418544 = v1;
    }
    return v1 <= 0 ? 0: 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int __crtLCMapStringA(int* param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8) {
    char v0;
    char v1;
    int v2;
    _LocaleUpdate::_LocaleUpdate(&v0, param0);
    int result = __crtLCMapStringA_stat((int)&v0, param1, param2, param3, param4, param5, param6, param7, param8);
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

int __crtLCMapStringA_stat(int* param0, int param1, DWORD dwMapFlags, LPCCH lpMultiByteStr, int param4, LPWSTR lpDestStr, int cchDest, UINT CodePage1, int param8) {
    LPSTR lpMultiByteStr1;
    int cbMultiByte1;
    LPWSTR lpDestStr1;
    LPWSTR lpDestStr1;
    void* ptr0;
    void* ptr1;
    int v0;
    int v1;
    int result;
    int v2;
    int* ptr2 = (int*)(gvar_4183F0 ^ (int)&v2);
    int v3 = v1;
    int cbMultiByte = param4;
    if(cbMultiByte > 0) {
        LPCCH v4 = lpMultiByteStr;
        int v5 = cbMultiByte;
        do {
            --v5;
            if(!v4[0]) {
                goto loc_40AFEC;
            }
            else {
                ++v4;
            }
        }
        while(v5);
        v5 = -1;
    loc_40AFEC:
        UINT v6 = (UINT)(cbMultiByte - v5 - 1);
        cbMultiByte = (int)v6 < cbMultiByte ? (int)(v6 + 1): v6;
    }
    UINT CodePage = CodePage1;
    if(!CodePage) {
        CodePage = *(UINT*)(*param0 + 4);
        CodePage1 = *(UINT*)(*param0 + 4);
    }
    int cchWideChar = MultiByteToWideChar(CodePage, (DWORD)((param8 == 0 ? 0: 1) * 8 + 1), lpMultiByteStr, cbMultiByte, NULL, 0);
    int cchSrc = cchWideChar;
    if(cchWideChar != 0) {
        if((cchWideChar < 0 || (unsigned int)(int*)((int)(unsigned int)(LPBOOL)0xFFFFFFE0 / (unsigned int)cchWideChar) < 2)) {
        loc_40B094:
            ptr1 = NULL;
        }
        else if((unsigned int)(cchWideChar * 2 + 8) > (unsigned int)(cchWideChar * 2)) {
            if((size_t)(cchSrc * 2 + 8) <= 0x400) {
                _alloca_probe_162(cchWideChar * 2);
                ptr1 = &v0;
                if(ptr1 != 0) {
                    v0 = 0xcccc;
                    goto loc_40B089;
                }
            }
            else {
                ptr1 = malloc((size_t)(cchSrc * 2 + 8));
                if(ptr1) {
                    *(int*)ptr1 = 0xdddd;
                loc_40B089:
                    ptr1 = (void*)((int)ptr1 + 8);
                }
            }
            cchWideChar = cchSrc;
        }
        else {
            cchWideChar = cchSrc;
            goto loc_40B094;
        }
        if(ptr1) {
            int v7 = MultiByteToWideChar(CodePage1, 1, lpMultiByteStr, cbMultiByte, (LPWSTR)ptr1, cchWideChar);
            if(v7) {
                int cchDest1 = __crtLCMapStringEx(param1, dwMapFlags, (LPCWSTR)ptr1, cchSrc, NULL, 0);
                if(cchDest1) {
                    if((dwMapFlags & 0x400)) {
                        if(cchDest && cchDest1 <= cchDest) {
                            __crtLCMapStringEx(param1, dwMapFlags, (LPCWSTR)ptr1, cchSrc, lpDestStr, cchDest);
                        }
                    }
                    else if(cchDest1 > 0 && 0xffffffe0 / (unsigned int)cchDest1 >= 2 && (unsigned int)(cchDest1 * 2 + 8) > (unsigned int)(cchDest1 * 2)) {
                        if((size_t)(cchDest1 * 2 + 8) <= 0x400) {
                            _alloca_probe_162(cchDest1 * 2);
                            ptr0 = &v0;
                            if(ptr0 == 0) {
                                unk_lib_sub18(ptr1);
                                __security_check_cookie((uintptr_t)((int)&v2 ^ (int)ptr2));
                                return result;
                            }
                            v0 = 0xcccc;
                            lpDestStr1 = (LPWSTR)((int)ptr0 + 8);
                            goto loc_40B160;
                        }
                        else {
                            ptr0 = malloc((size_t)(cchDest1 * 2 + 8));
                        }
                        if(ptr0) {
                            *(int*)ptr0 = 0xdddd;
                            lpDestStr1 = (LPWSTR)((int)ptr0 + 8);
                            goto loc_40B160;
                        }
                    }
                    else {
                        lpDestStr1 = NULL;
                    loc_40B160:
                        if(lpDestStr1) {
                            int v8 = __crtLCMapStringEx(param1, dwMapFlags, (LPCWSTR)ptr1, cchSrc, lpDestStr1, cchDest1);
                            if(v8) {
                                if(cchDest == 0) {
                                    cbMultiByte1 = 0;
                                    lpMultiByteStr1 = NULL;
                                }
                                else {
                                    cbMultiByte1 = cchDest;
                                    lpMultiByteStr1 = (LPSTR)lpDestStr;
                                }
                                WideCharToMultiByte(CodePage1, 0, lpDestStr1, cchDest1, lpMultiByteStr1, cbMultiByte1, NULL, NULL);
                            }
                            unk_lib_sub18(lpDestStr1);
                        }
                    }
                }
            }
            unk_lib_sub18(ptr1);
        }
    }
    __security_check_cookie((uintptr_t)((int)&v2 ^ (int)ptr2));
    return result;
}

int __crtLCMapStringEx(int param0, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest) {
    int v0;
    unsigned int v1 = gvar_4183F0 ^ gvar_419FD0;
    if(v1) {
        int v2 = 0;
        LPWSTR v3 = NULL;
        v1(param0, (int)dwMapFlags, (int)lpSrcStr, cchSrc, (int)lpDestStr, cchDest, 0);
        jump v0;
    }
    unsigned int v4 = __crtDownlevelLocaleNameToLCID(param0);
    return LCMapStringW((LCID)v4, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}

DWORD __crtMessageBoxW(LPCWSTR param0, int param1, int param2) {
    int v0;
    unsigned int* ptr0;
    HMODULE hModule1;
    DWORD result;
    PVOID Ptr5;
    char v1;
    int v2;
    int v3;
    char v4;
    char v5;
    int v6;
    int v7;
    int v8;
    int* ptr1 = (int*)(gvar_4183F0 ^ (int)&v3);
    int v9 = v8;
    LPCWSTR lpOutputString = param0;
    int v10 = 0;
    int v11 = param1;
    PVOID v12 = EncodePointer(NULL);
    PVOID v13 = v12;
    int v14 = __crtIsPackagedApp(v2);
    if(gvar_419F18 == 0) {
        HMODULE hModule = LoadLibraryExW("USER32.DLL", NULL, 0x800);
        if(!hModule) {
            Ptr5 = (PVOID)&loc_40A7C6;
            result = GetLastError();
            if(result != 87) {
                ptr0 += 2;
                uintptr_t _StackCookie = (uintptr_t)((int)&v3 ^ (int)ptr1);
                *ptr0 = &loc_40A948;
                /*BAD_CALL!*/ __security_check_cookie(_StackCookie);
                return result;
            }
            hModule = LoadLibraryExW("USER32.DLL", NULL, 0);
            if(!hModule) {
                ptr0 += 2;
                uintptr_t _StackCookie = (uintptr_t)((int)&v3 ^ (int)ptr1);
                *ptr0 = &loc_40A948;
                /*BAD_CALL!*/ __security_check_cookie(_StackCookie);
                return result;
            }
        }
        result = (DWORD)GetProcAddress(hModule, "MessageBoxW");
        if(result) {
            PVOID v15 = EncodePointer((PVOID)result);
            gvar_419F18 = v15;
            FARPROC Ptr = GetProcAddress(hModule, "GetActiveWindow");
            PVOID v16 = EncodePointer(Ptr);
            gvar_419F1C = v16;
            FARPROC Ptr1 = GetProcAddress(hModule, "GetLastActivePopup");
            PVOID v17 = EncodePointer(Ptr1);
            hModule1 = hModule;
            gvar_419F20 = v17;
            FARPROC Ptr2 = GetProcAddress(hModule1, "GetUserObjectInformationW");
            PVOID v18 = EncodePointer(Ptr2);
            gvar_419F28 = v18;
            if(v18) {
                FARPROC Ptr3 = GetProcAddress(hModule, "GetProcessWindowStation");
                PVOID v19 = EncodePointer(Ptr3);
                gvar_419F24 = v19;
            }
            v12 = v13;
            goto loc_40A859;
        }
    }
    else {
    loc_40A859:
        Ptr5 = (PVOID)&loc_40A85F;
        BOOL v20 = IsDebuggerPresent();
        if(v20) {
            if(lpOutputString) {
                OutputDebugStringW(lpOutputString);
            }
            if(v14 == 0) {
                goto loc_40A893;
            }
            else {
                Ptr5 = (PVOID)0x4;
                goto loc_40A878;
            }
        }
        else if(v14 != 0) {
            DecodePointer(gvar_419F18);
            Ptr5 = (PVOID)0x3;
        loc_40A878:
            ptr0 = &v7;
        }
        else {
        loc_40A893:
            PVOID Ptr4 = gvar_419F24;
            if(Ptr4 != v12 && gvar_419F28 != v12) {
                PVOID v21 = DecodePointer(Ptr4);
                Ptr5 = gvar_419F28;
                v14 = (int)v21;
                PVOID v22 = DecodePointer(Ptr5);
                v13 = v22;
                if(!v14 || !v22) {
                    goto loc_40A8F1;
                }
                else {
                    ptr0 = &Ptr5;
                    Ptr5 = (PVOID)&loc_40A8C8;
                    int v23 = v14();
                    if(v23) {
                        ptr0 = &v6;
                        int v24 = v13(v23, 1, (int)&v5, 12, (int)&v1);
                        if(v24 && (v4 & 0x1)) {
                            goto loc_40A8F1;
                        }
                    }
                    v0 = param2 | 0x200000;
                }
            }
            else {
            loc_40A8F1:
                PVOID Ptr6 = gvar_419F1C;
                if(Ptr6 != v12) {
                    PVOID v25 = DecodePointer(Ptr6);
                    if(v25) {
                        ptr0 = &Ptr5;
                        Ptr5 = (PVOID)&loc_40A903;
                        v10 = v25();
                        if(v10) {
                            PVOID Ptr7 = gvar_419F20;
                            if(Ptr7 != v12) {
                                PVOID v26 = DecodePointer(Ptr7);
                                if(v26) {
                                    ptr0 = &hModule1;
                                    v10 = v26(v10);
                                }
                            }
                        }
                    }
                }
                v0 = param2;
            }
            --ptr0;
            *ptr0 = gvar_419F18;
            --ptr0;
            *ptr0 = &loc_40A929;
            result = (DWORD)/*BAD_CALL!*/ DecodePointer(*(PVOID*)(ptr0 + 1));
            if(result) {
                --ptr0;
                *ptr0 = v0;
                --ptr0;
                *ptr0 = v11;
                --ptr0;
                *ptr0 = lpOutputString;
                --ptr0;
                *ptr0 = v10;
                --ptr0;
                *ptr0 = &loc_40A937;
                /*BAD_CALL!*/ result(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2), *(int*)(ptr0 + 3), *(int*)(ptr0 + 4));
            }
        }
    }
    ptr0 += 2;
    uintptr_t _StackCookie = (uintptr_t)((int)&v3 ^ (int)ptr1);
    *ptr0 = &loc_40A948;
    /*BAD_CALL!*/ __security_check_cookie(_StackCookie);
    return result;
}

LPTOP_LEVEL_EXCEPTION_FILTER __crtSetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter) {
    return SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}

BOOL __crtTerminateProcess(UINT uExitCode) {
    HANDLE hProcess = GetCurrentProcess();
    return TerminateProcess(hProcess, uExitCode);
}

LONG __crtUnhandledException(_EXCEPTION_POINTERS* ExceptionInfo) {
    SetUnhandledExceptionFilter(NULL);
    return UnhandledExceptionFilter(ExceptionInfo);
}

// Stale decompilation - Refresh this view to re-decompile this code
int __crt_atoflt_l(int* param0, void* param1, int param2, int* param3) {
    char v0;
    int v1;
    int v2;
    char v3;
    int v4;
    char v5;
    int result;
    int v6;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v2);
    int v7 = v6;
    int v8 = param2;
    int* ptr1 = param0;
    int* ptr2 = param3;
    _LocaleUpdate::_LocaleUpdate((int)&v0, v8);
    int v9 = /*BAD_CALL!*/ __strgtold12_l(&v3, &v4, param1, 0, 0, 0, 0, &v0);
    if(ptr2) {
        *ptr2 = v4;
    }
    int v10 = unk_lib_sub12(&v3, ptr1);
    if(((unsigned char)v9 & 0x3)) {
        if(((unsigned char)v9 & 0x1)) {
        loc_40C708:
            v8 = 4;
        }
        else if(((unsigned char)v9 & 0x2)) {
        loc_40C716:
            v8 = 3;
        }
    }
    else if(v10 == 1) {
        goto loc_40C716;
    }
    else if(v10 == 2) {
        goto loc_40C708;
    }
    if(v5) {
        *(int*)(v1 + 112) = *(int*)(v1 + 112) & 0xfffffffd;
    }
    __security_check_cookie((uintptr_t)((int)&v2 ^ (int)ptr0));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long* __doserrno() {
    int v0 = _getptd_noexit();
    if(!v0) {
        return (unsigned long*)&gvar_41816C;
    }
    return (unsigned long*)(v0 + 12);
}

int* __dtold(int* param0, int* param1) {
    int* result;
    int v0;
    int v1;
    int* ptr0 = param1;
    int v2 = v1;
    int v3 = (unsigned int)*(short*)((char*)ptr0 + 6);
    int v4 = 0x80000000;
    int v5 = *ptr0;
    int v6 = v3 & 0x8000;
    int v7 = *(ptr0 + 1) & 0xfffff;
    int v8 = (v3 >>> 4) & 0x7ff;
    v12 = v6;
    int v9 = v8;
    v11 = v5;
    if(v9) {
        if(v9 != 0x7ff) {
            v0 = v8 + 0x3c00;
            goto loc_40F048;
        }
        else {
            result = (int*)0x7FFF;
            goto loc_40F058;
        }
    }
    else if(!v7 && !v5) {
        result = param0;
        *(result + 1) = 0;
        *result = 0;
        *(short*)(result + 2) = (unsigned short)v6;
    }
    else {
        v0 = v8 + 15361;
        v4 = 0;
    loc_40F048:
        result = (unsigned int)(v0 & 0xFFFF);
    loc_40F058:
        v8 = v11 * 0x800;
        int v10 = (v7 * 0x800) | (v11 >>> 21) | v4;
        param1 = result;
        int* ptr1 = param0;
        *(ptr1 + 1) = v10;
        *ptr1 = v8;
        if(v10 >= 0) {
            int* ptr2 = result;
            do {
                v7 = *ptr1;
                ptr2 = (int*)((char*)ptr2 + 0xFFFF);
                v10 = (v10 * 2) | (v7 >>> 31);
                *ptr1 = v7 * 2;
            }
            while(v10 >= 0);
            v6 = v12;
            result = ptr2;
            *(ptr1 + 1) = v10;
        }
        *(short*)(ptr1 + 2) = (unsigned short)(int*)((int)result | v6);
    }
    return result;
}

int __endstdio() {
    int result;
    _flushall();
    if(gvar_4192F8) {
        _fcloseall();
    }
    free(gvar_41B000);
    gvar_41B000 = 0;
    return result;
}

int __free_lc_time(void** param0) {
    int result;
    if(param0) {
        free(param0[1]);
        free(param0[2]);
        free(param0[3]);
        free(param0[4]);
        free(param0[5]);
        free(param0[6]);
        free(param0[0]);
        free(param0[8]);
        free(param0[9]);
        free(param0[10]);
        free(param0[11]);
        free(param0[12]);
        free(param0[13]);
        free(param0[7]);
        free(param0[14]);
        free(param0[15]);
        free(param0[16]);
        free(param0[17]);
        free(param0[18]);
        free(param0[19]);
        free(param0[20]);
        free(param0[21]);
        free(param0[22]);
        free(param0[23]);
        free(param0[24]);
        free(param0[25]);
        free(param0[26]);
        free(param0[27]);
        free(param0[28]);
        free(param0[29]);
        free(param0[30]);
        free(param0[31]);
        free(param0[32]);
        free(param0[33]);
        free(param0[34]);
        free(param0[35]);
        free(param0[36]);
        free(param0[37]);
        free(param0[38]);
        free(param0[39]);
        free(param0[40]);
        free(param0[41]);
        free(param0[42]);
        free(param0[46]);
        free(param0[47]);
        free(param0[48]);
        free(param0[49]);
        free(param0[50]);
        free(param0[51]);
        free(param0[45]);
        free(param0[53]);
        free(param0[54]);
        free(param0[55]);
        free(param0[56]);
        free(param0[57]);
        free(param0[58]);
        free(param0[52]);
        free(param0[59]);
        free(param0[60]);
        free(param0[61]);
        free(param0[62]);
        free(param0[63]);
        free(param0[64]);
        free(param0[65]);
        free(param0[66]);
        free(param0[67]);
        free(param0[68]);
        free(param0[69]);
        free(param0[70]);
        free(param0[71]);
        free(param0[72]);
        free(param0[73]);
        free(param0[74]);
        free(param0[75]);
        free(param0[76]);
        free(param0[77]);
        free(param0[78]);
        free(param0[79]);
        free(param0[80]);
        free(param0[81]);
        free(param0[82]);
        free(param0[83]);
        free(param0[84]);
        free(param0[85]);
        free(param0[86]);
        free(param0[87]);
        free(param0[88]);
    }
    return result;
}

void* __free_lconv_mon(int param0) {
    void* _Block12;
    if(param0) {
        void* _Block = *(void**)(param0 + 12);
        if(gvar_418E1C != _Block) {
            free(_Block);
        }
        void* _Block1 = *(void**)(param0 + 16);
        if(gvar_418E20 != _Block1) {
            free(_Block1);
        }
        void* _Block2 = *(void**)(param0 + 20);
        if(gvar_418E24 != _Block2) {
            free(_Block2);
        }
        void* _Block3 = *(void**)(param0 + 24);
        if(gvar_418E28 != _Block3) {
            free(_Block3);
        }
        void* _Block4 = *(void**)(param0 + 28);
        if(gvar_418E2C != _Block4) {
            free(_Block4);
        }
        void* _Block5 = *(void**)(param0 + 32);
        if(gvar_418E30 != _Block5) {
            free(_Block5);
        }
        void* _Block6 = *(void**)(param0 + 36);
        if(gvar_418E34 != _Block6) {
            free(_Block6);
        }
        void* _Block7 = *(void**)(param0 + 56);
        if(gvar_418E48 != _Block7) {
            free(_Block7);
        }
        void* _Block8 = *(void**)(param0 + 60);
        if(gvar_418E4C != _Block8) {
            free(_Block8);
        }
        void* _Block9 = *(void**)(param0 + 64);
        if(gvar_418E50 != _Block9) {
            free(_Block9);
        }
        void* _Block10 = *(void**)(param0 + 68);
        if(gvar_418E54 != _Block10) {
            free(_Block10);
        }
        void* _Block11 = *(void**)(param0 + 72);
        if(gvar_418E58 != _Block11) {
            free(_Block11);
        }
        _Block12 = *(void**)(param0 + 76);
        if(gvar_418E5C != _Block12) {
            free(_Block12);
        }
    }
    return _Block12;
}

void* __free_lconv_num(unsigned int* param0) {
    void* _Block4;
    if(param0) {
        void* _Block = *param0;
        if(gvar_418E10 != _Block) {
            free(_Block);
        }
        void* _Block1 = *(void**)(param0 + 1);
        if(gvar_418E14 != _Block1) {
            free(_Block1);
        }
        void* _Block2 = *(void**)(param0 + 2);
        if(gvar_418E18 != _Block2) {
            free(_Block2);
        }
        void* _Block3 = *(void**)(param0 + 12);
        if(gvar_418E40 != _Block3) {
            free(_Block3);
        }
        _Block4 = *(void**)(param0 + 13);
        if(gvar_418E44 != _Block4) {
            free(_Block4);
        }
    }
    return _Block4;
}

int __freetlocinfo(void* param0) {
    int result;
    void* _Block4 = param0;
    int v0 = *(int*)((int)_Block4 + 132);
    if(v0 && v0 != &gvar_418E10) {
        int* ptr0 = *(unsigned int*)((int)_Block4 + 120);
        if(ptr0 && *ptr0 == 0) {
            void* _Block = *(void**)((int)_Block4 + 128);
            if(_Block && *(int*)_Block == 0) {
                free(_Block);
                __free_lconv_mon(*(int*)((int)_Block4 + 132));
            }
            void* _Block1 = *(void**)((int)_Block4 + 124);
            if(_Block1 && *(int*)_Block1 == 0) {
                free(_Block1);
                __free_lconv_num(*(unsigned int**)((int)_Block4 + 132));
            }
            free(*(void**)((int)_Block4 + 120));
            free(*(void**)((int)_Block4 + 132));
        }
    }
    int* ptr1 = *(unsigned int*)((int)_Block4 + 0x88);
    if(ptr1 && *ptr1 == 0) {
        free((void*)(*(int*)((int)_Block4 + 140) - 254));
        free((void*)(*(int*)((int)_Block4 + 148) - 128));
        free((void*)(*(int*)((int)_Block4 + 152) - 128));
        free(*(void**)((int)_Block4 + 0x88));
    }
    void** ptr2 = *(void***)((int)_Block4 + 156);
    if(ptr2 != 4295288 && ptr2[44] == 0) {
        __free_lc_time(ptr2);
        free(*(void**)((int)_Block4 + 156));
    }
    void* ptr3 = (void*)0x6;
    unsigned int* ptr4 = (unsigned int*)((int)_Block4 + 160);
    param0 = (void*)0x6;
    unsigned int* ptr5 = (unsigned int*)((int)_Block4 + 28);
    do {
        if(*(int*)(ptr5 - 2) != &gvar_418A74) {
            void* _Block2 = *ptr5;
            if(_Block2 && !*(int*)_Block2) {
                free(_Block2);
                free(*ptr4);
            }
            ptr3 = param0;
        }
        if(*(int*)(ptr5 - 3)) {
            void* _Block3 = *(void**)(ptr5 - 1);
            if(_Block3 && !*(int*)_Block3) {
                free(_Block3);
            }
            ptr3 = param0;
        }
        ++ptr4;
        ptr5 += 4;
        ptr3 = (void*)((int)ptr3 - 1);
        param0 = ptr3;
    }
    while(ptr3);
    free(_Block4);
    return result;
}

PVOID __get_sigabrt() {
    return DecodePointer(gvar_419F00);
}

int __hw_cw_sse2(int param0) {
    int result = !((unsigned char)param0 & 0x10) ? 0: 128;
    if(((unsigned char)param0 & 0x8)) {
        result |= 0x200;
    }
    if(((unsigned char)param0 & 0x4)) {
        result |= 0x400;
    }
    if(((unsigned char)param0 & 0x2)) {
        result |= 0x800;
    }
    if(((unsigned char)param0 & 0x1)) {
        result |= 0x1000;
    }
    if((param0 & 0x80000)) {
        result |= 0x100;
    }
    if((param0 & 0x300)) {
        switch(param0 & 0x300) {
            case 256: {
                result |= 0x2000;
                break;
            }
            case 512: {
                result |= 0x4000;
                break;
            }
            case 768: {
                result |= 0x6000;
                break;
            }
        }
    }
    switch(param0 & 0x3000000) {
        case 16777216: {
            return result | 0x8040;
        }
        case 33554432: {
            return result | 0x40;
        }
        case 50331648: {
            return result | 0x8000;
        }
        default: {
            return result;
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int __initmbctable() {
    if(!gvar_419FF0) {
        _setmbcp(-3);
        gvar_419FF0 = 1;
    }
    return 0;
}

int __initstdio() {
    int v0 = gvar_41B004;
    if(!v0) {
        v0 = 0x200;
        goto loc_404094;
    }
    else if(v0 < 20) {
        v0 = 20;
    loc_404094:
        gvar_41B004 = v0;
    }
    unsigned int v1 = sub_408F5B(v0, 4);
    gvar_41B000 = v1;
    if(!v1) {
        gvar_41B004 = 20;
        v1 = sub_408F5B(20, 4);
        gvar_41B000 = v1;
        if(!v1) {
            return 26;
        }
    }
    int v2 = 0;
    int v3 = &gvar_418170;
    while(1) {
        *(int*)(v1 + v2) = v3;
        v3 += 32;
        v2 += 4;
        if(v3 >= &gvar_4183F0) {
            return 0;
        }
        v1 = gvar_41B000;
    }
    return 0;
}

int __iob_func() {
    return &gvar_418170;
}

int __isa_available_init() {
    gvar_419EE8 = 0;
    gvar_418E00 |= 1;
    BOOL v0 = →KERNEL32.dll!IsProcessorFeaturePresent(10);
    if(v0) {
        gvar_419EE8 = 1;
        cpuid();
        gvar_418E00 |= 2;
        cpuid();
    }
    return 0;
}

int __lock_fhandle(int param0) {
    int v0;
    int v1;
    int v2 = &gvar_417920;
    int v3 = v1;
    int v4 = param0;
    int v5 = (v4 & 0x1f) * 64 + *(unsigned int*)((v4 >> 5) * 4 + (int)&gvar_4191D0);
    if(*(int*)(v5 + 8) == 0) {
        _lock(10);
        v2 = 0;  // __try{ (see __finally:409A49h)
        if(*(int*)(v5 + 8) == 0) {
            __crtInitializeCriticalSectionEx((LPCRITICAL_SECTION)(v5 + 12), 4000, 0);
            *(int*)(v5 + 8) = *(int*)(v5 + 8) + 1;
        }
        v2 = -2;  // } (starts at 4099F9h)
        sub_409A4C();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((v4 & 0x1f) * 64 + *(unsigned int*)((v4 >> 5) * 4 + (int)&gvar_4191D0) + 12));
    *(int*)__FS_BASE = v0;
    return 1;
}

int __mtold12(char* param0, unsigned int param1, unsigned int* param2) {
    int v0;
    int v1;
    unsigned int v2;
    unsigned int v3;
    unsigned int* ptr0 = param2;
    int result = 0x404e;
    int v4 = 0x404e;
    *ptr0 = 0;
    *(int*)(ptr0 + 1) = 0;
    *(int*)(ptr0 + 2) = 0;
    if(param1 > 0) {
        int* ptr1 = NULL;
        param2 = NULL;
        int* ptr2 = NULL;
        int* ptr3 = NULL;
        do {
            unsigned int v5 = *ptr0;
            *(&v5 + 1) = *(int*)(ptr0 + 1);
            *(&v5 + 2) = *(int*)(ptr0 + 2);
            int* ptr4 = (int*)((int)(int*)((int)param2 * 2) | (int)(int*)((int)ptr1 >>> 31));
            int* ptr5 = (int*)((int)(int*)((int)ptr3 * 2) | (int)(int*)((int)param2 >>> 31));
            int* ptr6 = (int*)((int)(int*)((int)ptr4 * 2) | (int)(int*)((int)(int*)((int)ptr2 >>> 30) & 0x1));
            *ptr0 = (int*)((int)ptr2 * 4);
            int* ptr7 = (int*)((int)(int*)((int)ptr5 * 2) | (int)(int*)((int)ptr4 >>> 31));
            *(ptr0 + 1) = ptr6;
            unsigned int* ptr8 = (unsigned int*)((int)(int*)((int)ptr2 * 4) + v5);
            *(ptr0 + 2) = ptr7;
            int v6 = 0;
            param2 = ptr8;
            if((unsigned int)(int*)((int)ptr2 * 4) > (unsigned int)ptr8 || (unsigned int)ptr8 < v5) {
                v6 = 1;
            }
            *ptr0 = ptr8;
            if(v6) {
                int v7 = 0;
                ptr6 = (int*)((char*)ptr6 + 1);
                if((int*)((char*)ptr6 + 1) < ptr6 || (unsigned int)ptr6 < 1) {
                    v7 = 1;
                }
                *(ptr0 + 1) = ptr6;
                if(v7) {
                    ptr7 = (int*)((char*)ptr7 + 1);
                    *(ptr0 + 2) = ptr7;
                }
            }
            int v8 = 0;
            int* ptr9 = (int*)((int)ptr6 + v2);
            ptr2 = (int*)((int)ptr6 + v2);
            if(ptr9 < ptr6 || (unsigned int)ptr9 < v2) {
                v8 = 1;
            }
            *(ptr0 + 1) = ptr9;
            if(v8) {
                ptr7 = (int*)((char*)ptr7 + 1);
                *(ptr0 + 2) = ptr7;
            }
            int* ptr10 = (int*)((int)param2 * 2);
            int* ptr11 = (int*)((int)ptr7 + v0);
            int v9 = 0;
            unsigned int* ptr12 = (unsigned int*)((int)(int*)((int)ptr2 * 2) | (int)(int*)((int)param2 >>> 31));
            int* ptr13 = (int*)((int)(int*)((int)ptr11 * 2) | (int)(int*)((int)ptr9 >>> 31));
            *ptr0 = ptr10;
            *(ptr0 + 1) = ptr12;
            *(ptr0 + 2) = ptr13;
            unsigned int v10 = (unsigned int)*param0;
            param2 = ptr12;
            ptr3 = ptr13;
            v5 = v10;
            ptr1 = (int*)(v10 + (int)ptr10);
            ptr2 = (int*)(v10 + (int)ptr10);
            int v11 = ptr1 < ptr10 || v10 > (unsigned int)ptr1 ? 1: v9;
            *ptr0 = ptr1;
            if(v11) {
                unsigned int* ptr14 = ptr12;
                ptr10 = NULL;
                ptr12 = (unsigned int*)((char*)ptr14 + 1);
                param2 = (unsigned int*)((char*)ptr14 + 1);
                if(ptr14 > ptr12 || (unsigned int)ptr12 < 1) {
                    ptr10 = (int*)0x1;
                }
                *(ptr0 + 1) = ptr12;
                if(ptr10) {
                    ptr13 = (int*)((char*)ptr13 + 1);
                    ptr3 = ptr13;
                    *(ptr0 + 2) = ptr13;
                }
            }
            v3 = param1 - 1;
            *(ptr0 + 1) = ptr12;
            ++param0;
            *(ptr0 + 2) = ptr13;
            param1 = v3;
        }
        while(v3);
        result = 0x404e;
    }
    if(*(int*)(ptr0 + 2) == 0) {
        int v12 = *(int*)(ptr0 + 1);
        do {
            int v13 = *ptr0;
            v1 = v12;
            v12 = (v12 * 0x10000) | (v13 >>> 16);
            result = v4 + 0xfff0;
            *ptr0 = (int*)(v13 * 0x10000);
            v4 = result;
        }
        while(!(v1 >>> 16));
        *(int*)(ptr0 + 1) = v12;
        *(int*)(ptr0 + 2) = v1 >>> 16;
    }
    int* ptr15 = *(ptr0 + 2);
    if(!(int*)((int)ptr15 & 0x8000)) {
        int v14 = *ptr0;
        int v15 = *(int*)(ptr0 + 1);
        do {
            int v16 = v15;
            v15 = (v15 * 2) | (v14 >>> 31);
            ptr15 = (int*)((int)(int*)((int)ptr15 * 2) | (int)(int*)(v16 >>> 31));
            result = v4 + 0xFFFF;
            v14 *= 2;
            v4 = result;
        }
        while(!(int*)((int)ptr15 & 0x8000));
        *ptr0 = v14;
        *(int*)(ptr0 + 1) = v15;
        *(ptr0 + 2) = ptr15;
    }
    *(short*)((char*)ptr0 + 10) = (unsigned short)result;
    return result;
}

BOOL __raise_securityfailure(_EXCEPTION_POINTERS* ExceptionInfo) {
    BOOL v0 = IsDebuggerPresent();
    int v1 = 1;
    gvar_419EE4 = v0;
    _crt_debugger_hook();
    __crtUnhandledException(ExceptionInfo);
    if(!gvar_419EE4) {
        _crt_debugger_hook();
    }
    return __crtTerminateProcess(3221226505);
}

int* __removelocaleref(int* param0) {
    int v0;
    int* result = param0;
    if(result) {
        int v1 = v0;
        *result = *result - 1;
        int* ptr0 = *(unsigned int*)(result + 30);
        if(ptr0) {
            *ptr0 = *ptr0 - 1;
        }
        int* ptr1 = *(unsigned int*)(result + 32);
        if(ptr1) {
            *ptr1 = *ptr1 - 1;
        }
        int* ptr2 = *(unsigned int*)(result + 31);
        if(ptr2) {
            *ptr2 = *ptr2 - 1;
        }
        int* ptr3 = *(unsigned int*)(result + 34);
        if(ptr3) {
            *ptr3 = *ptr3 - 1;
        }
        int v2 = 6;
        unsigned int* ptr4 = (unsigned int*)(result + 7);
        int counter = 6;
        do {
            if(*(int*)(ptr4 - 2) != &gvar_418A74) {
                int* ptr5 = *ptr4;
                if(ptr5) {
                    *ptr5 = *ptr5 - 1;
                }
            }
            if(*(int*)(ptr4 - 3)) {
                int* ptr6 = *(ptr4 - 1);
                if(ptr6) {
                    *ptr6 = *ptr6 - 1;
                }
            }
            ptr4 += 4;
            --counter;
        }
        while(counter);
        int* ptr7 = (int*)(*(result + 39) + 176);
        *ptr7 = *ptr7 - 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void __report_gsfailure() {
    char v0;
    unsigned int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    char v9;
    unsigned short v10;
    unsigned short v11;
    unsigned short v12;
    char v13;
    int* ptr0;
    unsigned int v14;
    unsigned int v15;
    unsigned int v16;
    unsigned int v17;
    unsigned int v18;
    unsigned int v19;
    unsigned short v20;
    unsigned short v21;
    unsigned short v22;
    int* ptr1;
    char v23 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x324) ^ (int)&v0) >>> 4) & 0x1);
    BOOL v24 = →KERNEL32.dll!IsProcessorFeaturePresent(23);
    if(v24) {
        41 = int(41);
    }
    gvar_419CC8 = 0;
    gvar_419CC4 = v16;
    gvar_419CC0 = v17;
    gvar_419CBC = v18;
    gvar_419CB8 = v15;
    gvar_419CB4 = v19;
    gvar_419CE0 = v20;
    gvar_419CD4 = v10;
    gvar_419CB0 = v11;
    gvar_419CAC = v21;
    gvar_419CA8 = v22;
    gvar_419CA4 = v12;
    gvar_419CD8 = (unsigned int)6 | ((unsigned int)v23 << 4) | ((unsigned int)2 << 5) | ((unsigned int)v2 << 8) | ((unsigned int)v3 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v4 << 12) | ((unsigned int)v5 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v6 << 18) | ((unsigned int)v8 << 19) | ((unsigned int)v7 << 20) | ((unsigned int)v9 << 21) | ((unsigned int)0 << 22);
    gvar_419CCC = ptr1;
    gvar_419CD0 = v1;
    gvar_419CDC = &v13;
    gvar_419C18 = 0x10001;
    gvar_419BD4 = gvar_419CD0;
    gvar_419BC8 = 3221226505;
    gvar_419BCC = 1;
    gvar_419BD8 = 1;
    gvar_419BDC = 2;
    *(unsigned int*)(&v14 + 1) = gvar_4183F4;
    __raise_securityfailure(&gvar_41231C);
}

void __security_check_cookie(uintptr_t _StackCookie) {
    if(gvar_4183F0 != _StackCookie) {
        /*NO_RETURN*/ __report_gsfailure();
    }
}

void __security_init_cookie() {
    int v0;
    int v1;
    int v2 = 0;
    int v3 = 0;
    unsigned int v4 = gvar_4183F0;
    if(v4 != -1153374642 && (v4 & 0xffff0000)) {
        gvar_4183F4 = (int*)~v4;
    }
    else {
        GetSystemTimeAsFileTime(&v2);
        int v5 = v2 ^ v3;
        DWORD v6 = GetCurrentThreadId();
        v5 ^= v6;
        DWORD v7 = GetCurrentProcessId();
        v5 ^= v7;
        QueryPerformanceCounter(&v0);
        int* ptr0 = (int*)(((v0 ^ v1) ^ v5) ^ (int)&v5);
        if(ptr0 == -1153374642) {
            ptr0 = (int*)0xBB40E64F;
        }
        else if(!(int*)((int)ptr0 & 0xffff0000)) {
            ptr0 = (int*)((int)(int*)((int)(int*)((int)ptr0 | 0x4711) * 0x10000) | (int)ptr0);
        }
        gvar_4183F0 = ptr0;
        gvar_4183F4 = (unsigned int)~(int)ptr0;
    }
}

int _set_fpsr_sse2(int param0) {
    int v0;
    if(gvar_419EE8 >= 1) {
        if(((unsigned char)param0 & 0x40) && gvar_4191A8) {
            param0 = ldmxcsr(param0);
        }
        else {
            param0 = ldmxcsr(param0 & 0xffffffbf);
        }
    }
    *(int*)__FS_BASE = v0;
    sub_410117();
}

int __strgtold12_l(short* param0, void* param1, void* param2, int param3, int param4, int param5, int param6, int* param7) {
    int v0;
    int v1;
    int* ptr0;
    int v2;
    unsigned int v3;
    int v4;
    char v5;
    char v6;
    char v7;
    unsigned int v8;
    void* ptr1;
    void* ptr1;
    void* ptr2;
    int v9;
    char v10;
    int result;
    int v11;
    char v12;
    int v13;
    void* ptr3;
    void* ptr4;
    int* ptr5 = (int*)(gvar_4183F0 ^ (int)&v9);
    short* ptr6 = param0;
    void* ptr7 = param1;
    int v14 = v13;
    int v15 = 1;
    int* ptr8 = NULL;
    void* ptr9 = NULL;
    int v16 = 0;
    char* ptr10 = &v10;
    unsigned int v17 = 0;
    int v18 = 0;
    void* ptr11 = NULL;
    short* ptr12 = NULL;
    int v19 = 0;
    if(param7 == 0) {
        int* ptr13 = _errno();
        ptr13[0] = 22;
        _invalid_parameter_noinfo();
    }
    else {
        void* ptr14 = param2;
        void* i = param2;
        void* ptr15 = param2;
        for(i = (unsigned int)*(char*)ptr14 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8); (unsigned char)i == 32 || (unsigned char)i == 9 || (unsigned char)i == 10 || (unsigned char)i == 13; i = (unsigned int)*(char*)ptr14 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8)) {
            ptr14 = (void*)((int)ptr14 + 1);
        }
    loc_40D3C4:
        i = (unsigned int)*(char*)ptr14 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
        ptr14 = (void*)((int)ptr14 + 1);
        char v20 = (unsigned char)i;
        switch(ptr9) {
            case 0: {
                if((unsigned char)((unsigned char)i + 207) <= 8) {
                    ptr1 = (void*)0x3;
                    ptr9 = ptr1;
                    ptr14 = (void*)((int)ptr14 - 1);
                    goto loc_40D3C4;
                }
                else if((unsigned char)i == ***(unsigned int*)(*param7 + 132)) {
                    ptr1 = (void*)0x5;
                    ptr9 = ptr1;
                    goto loc_40D3C4;
                }
                else {
                    int v21 = (int)(unsigned char)i - 43;
                    if(((int)(unsigned char)i - 43)) {
                        int v22 = (int)(unsigned char)i - 43 - 2;
                        if(!((int)(unsigned char)i - 43 - 2)) {
                            i = (void*)0x8000;
                            ptr9 = (void*)0x2;
                            v16 = 0x8000;
                            goto loc_40D3C4;
                        }
                        else if((int)(unsigned char)i - 43 - 2 != 3) {
                        loc_40D6A0:
                            ptr14 = (void*)((int)ptr14 - 1);
                        loc_40D6A1:
                            v8 = v17;
                            break;
                        }
                        else {
                            ptr9 = (void*)0x1;
                            goto loc_40D3C4;
                        }
                    }
                    else {
                        ptr9 = (void*)0x2;
                        v16 = 0;
                        goto loc_40D3C4;
                    }
                }
            }
            case 1: {
                v18 = 1;
                if((unsigned char)((unsigned char)i + 207) <= 8) {
                    ptr1 = (void*)0x3;
                    ptr9 = ptr1;
                    ptr14 = (void*)((int)ptr14 - 1);
                    goto loc_40D3C4;
                }
                else if((unsigned char)i == ***(unsigned int*)(*param7 + 132)) {
                    ptr1 = (void*)0x4;
                    ptr9 = ptr1;
                    goto loc_40D3C4;
                }
                else if((unsigned char)i == 43 || (unsigned char)i == 45) {
                    ptr14 = (void*)((int)ptr14 - 1);
                    ptr1 = (void*)0xB;
                    ptr9 = ptr1;
                    goto loc_40D3C4;
                }
                else if((unsigned char)i == 48) {
                    ptr9 = (void*)0x1;
                    goto loc_40D3C4;
                }
                else {
                    goto loc_40D460;
                }
            }
            case 2: {
                if((unsigned char)((unsigned char)i + 207) <= 8) {
                    ptr1 = (void*)0x3;
                    ptr9 = ptr1;
                    ptr14 = (void*)((int)ptr14 - 1);
                    goto loc_40D3C4;
                }
                else if((unsigned char)i == ***(unsigned int*)(*param7 + 132)) {
                    ptr1 = (void*)0x5;
                    ptr9 = ptr1;
                    goto loc_40D3C4;
                }
                else if((unsigned char)i != 48) {
                    ptr14 = ptr15;
                    goto loc_40D6A1;
                }
                else {
                    ptr9 = (void*)0x1;
                    goto loc_40D3C4;
                }
            }
            case 3: {
                v18 = 1;
                if((unsigned char)i >= 48) {
                    unsigned int v23 = v17;
                    int v24 = v19;
                    while((unsigned char)i <= 57) {
                        if(v23 < 25) {
                            i = (unsigned int)((unsigned char)i - 48) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                            ++v23;
                            ptr10[0] = (char)i;
                            ++ptr10;
                        }
                        else {
                            ++v24;
                        }
                        i = (unsigned int)*(char*)ptr14 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                        ptr14 = (void*)((int)ptr14 + 1);
                        if((unsigned char)i < 48) {
                        loc_40D4E4:
                            v19 = v24;
                            ptr8 = NULL;
                            v17 = v23;
                        loc_40D4FB:
                            if((unsigned char)i == ***(unsigned int*)(*param7 + 132)) {
                                ptr1 = (void*)0x4;
                                ptr9 = ptr1;
                                goto loc_40D3C4;
                            }
                            else if((unsigned char)i != 43 && (unsigned char)i != 45) {
                            loc_40D460:
                                if((unsigned char)i <= 67) {
                                    goto loc_40D6A0;
                                }
                                else {
                                    if((unsigned char)i > 69) {
                                        i = (unsigned int)((unsigned char)i - 100) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                        if((unsigned char)i > 1) {
                                            goto loc_40D6A0;
                                        }
                                    }
                                    ptr1 = (void*)0x6;
                                    ptr9 = ptr1;
                                    goto loc_40D3C4;
                                }
                            }
                            else {
                                ptr14 = (void*)((int)ptr14 - 1);
                                ptr1 = (void*)0xB;
                                ptr9 = ptr1;
                                goto loc_40D3C4;
                            }
                        }
                    }
                    goto loc_40D4E4;
                }
                else {
                    goto loc_40D4FB;
                }
            }
            case 4: {
                v18 = 1;
                ptr11 = (void*)0x1;
                v8 = v17;
                if(!v8) {
                    v7 = (unsigned char)i < 48;
                    v6 = ((((unsigned char)i - 48) ^ (unsigned char)i) & ((unsigned char)i ^ 0x30)) < 0;
                    if((unsigned char)i == 48) {
                        int v25 = v19;
                        do {
                            i = (unsigned int)*(char*)ptr14 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                            --v25;
                            ptr14 = (void*)((int)ptr14 + 1);
                        }
                        while((unsigned char)i == 48);
                        v19 = v25;
                        v8 = v17;
                        goto loc_40D53F;
                    loc_40D685:
                        while((unsigned char)i >= 48) {
                            if((unsigned char)i <= 57) {
                                i = (void*)((int)ptr8 * 10);
                                ptr8 = (int*)((int)v20 + (int)i) - 12;
                                if((int)ptr8 <= 5200) {
                                    i = (unsigned int)*(char*)ptr14 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                    ptr14 = (void*)((int)ptr14 + 1);
                                    v20 = (unsigned char)i;
                                    continue;
                                }
                                else {
                                    i = (unsigned int)v20 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                    ptr8 = (int*)0x1451;
                                }
                            }
                            break;
                        }
                        while(1) {
                            if((unsigned char)i < 48) {
                                goto loc_40D6A0;
                            }
                            else if((unsigned char)i > 57) {
                                goto loc_40D6A0;
                            }
                            else {
                                i = (unsigned int)*(char*)ptr14 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                ptr14 = (void*)((int)ptr14 + 1);
                            }
                        }
                    }
                }
                else {
                loc_40D53F:
                    v7 = (unsigned char)i < 48;
                    v6 = ((((unsigned char)i - 48) ^ (unsigned char)i) & ((unsigned char)i ^ 0x30)) < 0;
                }
                if(v7 == v6) {
                    int v26 = v19;
                    while((unsigned char)i <= 57) {
                        if(v8 < 25) {
                            i = (unsigned int)((unsigned char)i - 48) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                            ++v8;
                            ptr10[0] = (char)i;
                            ++ptr10;
                            --v26;
                        }
                        i = (unsigned int)*(char*)ptr14 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                        ptr14 = (void*)((int)ptr14 + 1);
                        if((unsigned char)i < 48) {
                            break;
                        }
                    }
                    v19 = v26;
                    ptr8 = NULL;
                    v17 = v8;
                }
                if((unsigned char)i != 43 && (unsigned char)i != 45) {
                    if((unsigned char)i > 67) {
                        if((unsigned char)i <= 69) {
                            ptr1 = (void*)0x6;
                            ptr9 = ptr1;
                            goto loc_40D3C4;
                        }
                        else {
                            i = (unsigned int)((unsigned char)i - 100) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                            if((unsigned char)i <= 1) {
                                ptr1 = (void*)0x6;
                                ptr9 = ptr1;
                                goto loc_40D3C4;
                            }
                        }
                    }
                    ptr14 = (void*)((int)ptr14 - 1);
                    break;
                }
                else {
                    ptr14 = (void*)((int)ptr14 - 1);
                    ptr1 = (void*)0xB;
                    ptr9 = ptr1;
                    goto loc_40D3C4;
                }
            }
            case 5: {
                i = (unsigned int)((unsigned char)i - 48) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                ptr11 = (void*)0x1;
                if((unsigned char)i > 9) {
                    ptr14 = ptr15;
                    goto loc_40D6A1;
                }
                else {
                    ptr1 = (void*)0x4;
                    ptr9 = ptr1;
                    ptr14 = (void*)((int)ptr14 - 1);
                    goto loc_40D3C4;
                }
            }
            case 6: {
                ptr15 = (void*)((int)ptr14 - 2);
                if((unsigned char)((unsigned char)i + 207) <= 8) {
                    ptr1 = (void*)0x9;
                    ptr9 = ptr1;
                    ptr14 = (void*)((int)ptr14 - 1);
                    goto loc_40D3C4;
                }
                else {
                    int v27 = (int)(unsigned char)i - 43;
                    if(((int)(unsigned char)i - 43)) {
                        int v28 = (int)(unsigned char)i - 43 - 2;
                        if(((int)(unsigned char)i - 43 - 2)) {
                            v5 = (int)(unsigned char)i - 43 - 2 == 3;
                        loc_40D5D7:
                            if(v5) {
                                ptr1 = (void*)0x8;
                                ptr9 = ptr1;
                                goto loc_40D3C4;
                            }
                            else {
                                ptr14 = ptr15;
                                goto loc_40D6A1;
                            }
                        }
                        else {
                            i = (void*)0xFFFFFFFF;
                            ptr9 = (void*)0x7;
                            v15 = -1;
                            goto loc_40D3C4;
                        }
                    }
                    else {
                        ptr1 = (void*)0x7;
                        ptr9 = ptr1;
                        goto loc_40D3C4;
                    }
                }
            }
            case 7: {
                if((unsigned char)((unsigned char)i + 207) <= 8) {
                    ptr1 = (void*)0x9;
                    ptr9 = ptr1;
                    ptr14 = (void*)((int)ptr14 - 1);
                    goto loc_40D3C4;
                }
                else {
                    v5 = (unsigned char)i == 48;
                    goto loc_40D5D7;
                }
            }
            case 8: {
                ptr12 = (short*)0x1;
                while((unsigned char)i == 48) {
                    i = (unsigned int)*(char*)ptr14 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                    ptr14 = (void*)((int)ptr14 + 1);
                }
                i = (unsigned int)((unsigned char)i - 49) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                if((unsigned char)i > 8) {
                    goto loc_40D6A0;
                }
                else {
                    ptr1 = (void*)0x9;
                    ptr9 = ptr1;
                    ptr14 = (void*)((int)ptr14 - 1);
                    goto loc_40D3C4;
                }
            }
            case 9: {
                ptr8 = NULL;
                ptr12 = (short*)0x1;
                goto loc_40D685;
            }
            case 11: {
                if(param6 != 0) {
                    ptr15 = (void*)((int)ptr14 - 1);
                    int v29 = (int)(unsigned char)i - 43;
                    if(!((int)(unsigned char)i - 43)) {
                        ptr1 = (void*)0x7;
                        ptr9 = ptr1;
                        goto loc_40D3C4;
                    }
                    else if((int)(unsigned char)i - 43 != 2) {
                        ptr14 = ptr15;
                        goto loc_40D6A1;
                    }
                    else {
                        v15 = -1;
                        ptr9 = (void*)0x7;
                        goto loc_40D3C4;
                    }
                }
                else {
                    ptr9 = (void*)0xA;
                    ptr14 = (void*)((int)ptr14 - 1);
                }
            }
            default: {
                if(ptr9 != 10) {
                    goto loc_40D3C4;
                }
                else {
                    goto loc_40D6A1;
                }
            }
        }
        *(void**)ptr7 = ptr14;
        if(v18) {
            if(v8 > 24) {
                v8 = (unsigned int)v12 | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
                if((unsigned char)v8 >= 5) {
                    v12 = (unsigned char)v8 + 1;
                }
                --ptr10;
                v4 = v19 + 1;
                v8 = (unsigned int)(void*)0x18;
                v19 = v4;
            }
            else {
                v4 = v19;
            }
            if(!v8) {
                v2 = 0;
                ptr0 = NULL;
                v1 = 0;
                v0 = 0;
                goto loc_40DA96;
            }
            else {
                char* ptr16 = ptr10 - 1;
                if(*ptr16 == 0) {
                    do {
                        --v8;
                        ++v4;
                        --ptr16;
                    }
                    while(*ptr16 == 0);
                    v19 = v4;
                }
                __mtold12(&v10, v8, &ptr2);
                if(v15 < 0) {
                    ptr8 = (int*)(0 - (int)ptr8);
                }
                v3 = (unsigned int)((int)ptr8 + v19);
                if(!ptr12) {
                    v3 += param4;
                }
                if(!ptr11) {
                    v3 -= param5;
                }
                if((int)v3 > 5200) {
                    ptr0 = (int*)0x7FFF;
                    v1 = 0x80000000;
                    goto loc_40DA91;
                }
            }
            if((int)v3 >= -5200) {
                int v30 = 4296296;
                char v31 = v3 >= 0x80000000;
                if(v3) {
                    if((v3 >= 0x80000000)) {
                        v3 = (unsigned int)(0 - v3);
                        v30 = 4296648;
                    }
                    if(param3 == 0) {
                        (void*)(ptr2 & 0xFFFF) = 0;
                    }
                    while(v3) {
                        unsigned int v32 = v3;
                        v30 += 84;
                        v3 >>= 3;
                        v19 = v30;
                        v17 = v3;
                        int v33 = v32 & 0x7;
                        if((v32 & 0x7)) {
                            void* ptr17 = (void*)((v32 & 0x7) * 12 + v30);
                            ptr15 = (void*)((v32 & 0x7) * 12 + v30);
                            if(*(unsigned short*)ptr17 >= 0x8000) {
                                void* ptr18 = ptr17;
                                ptr17 = &v11;
                                ptr15 = &v11;
                                v11 = *(int*)ptr18;
                                int* ptr19 = (int*)((int)ptr18 + 4);
                                int* ptr20 = (int*)((int)&v11 + 4);
                                *(int*)((int)&v11 + 4) = *(int*)((int)ptr18 + 4);
                                *((int*)((int)&v11 + 4) + 1) = *((int*)((int)ptr18 + 4) + 1);
                                *(int*)((int)&v11 + 2) = *(int*)((int)&v11 + 2) - 1;
                            }
                            int v34 = (unsigned int)*(short*)((int)ptr17 + 10);
                            int v35 = *(int*)((char*)&ptr3 + 2);
                            void* ptr21 = NULL;
                            void* ptr22 = NULL;
                            v18 = (v35 ^ v34) & 0x8000;
                            int v36 = v35 & 0x7fff;
                            void* ptr23 = NULL;
                            int v37 = v34 & 0x7fff;
                            void* ptr24 = NULL;
                            int v38 = (unsigned int)((unsigned short)(v35 & 0x7fff) + (unsigned short)(v34 & 0x7fff));
                            v15 = (unsigned int)((unsigned short)(v35 & 0x7fff) + (unsigned short)(v34 & 0x7fff));
                            if((unsigned short)(v35 & 0x7fff) < 0x7fff && (unsigned short)(v34 & 0x7fff) < 0x7fff && (unsigned short)v38 <= 49149) {
                                if((unsigned short)v38 <= 0x3fbf) {
                                    ptr3 = NULL;
                                    goto loc_40DA3E;
                                }
                                else if(!(unsigned short)(v35 & 0x7fff)) {
                                    ++v38;
                                    char v39 = (int*)((int)ptr3 & 0x7fffffff) ? 0: 1;
                                    v15 = v38;
                                    if(((int*)((int)ptr3 & 0x7fffffff) ? 0: 1) && !ptr4 && !ptr2) {
                                        (void*)((ptr3 >>> 16) & 0xFFFF) = 0;
                                        goto loc_40DA44;
                                    }
                                }
                                if(!(unsigned short)(v34 & 0x7fff)) {
                                    char v40 = *(int*)((int)ptr17 + 8) & 0x7fffffff ? 0: 1;
                                    v15 = v38 + 1;
                                    if(!v40 || *(int*)((int)ptr17 + 4) != NULL || *(int*)ptr17 != NULL) {
                                        goto loc_40D84D;
                                    }
                                    else {
                                        ptr3 = NULL;
                                        goto loc_40DA3E;
                                    }
                                }
                                else {
                                loc_40D84D:
                                    void* ptr25 = NULL;
                                    int* ptr26 = &ptr23;
                                    void* ptr27 = (void*)0x5;
                                    void* ptr28 = NULL;
                                    ptr7 = (void*)0x5;
                                    do {
                                        if((int)ptr27 > 0) {
                                            short* ptr29 = (short*)((int)(int*)((int)ptr25 * 2) + (int)&ptr2);
                                            ptr12 = (short*)((int)ptr17 + 8);
                                            do {
                                                void* ptr30 = (void*)((int)(void*)*ptr29 * (unsigned int)*ptr12);
                                                ptr11 = (void*)((int)(void*)*ptr29 * (unsigned int)*ptr12);
                                                int* ptr31 = (int*)(*(ptr26 - 1) + (int)ptr30);
                                                void* ptr32 = *(unsigned int*)(ptr26 - 1) > (unsigned int)ptr31 || (unsigned int)ptr31 < (unsigned int)ptr11 ? (void*)0x1: NULL;
                                                *(unsigned int*)(ptr26 - 1) = ptr31;
                                                if(ptr32) {
                                                    *(short*)ptr26 = *(short*)ptr26 + 1;
                                                }
                                                --ptr12;
                                                ++ptr29;
                                                ptr27 = (void*)((int)ptr27 - 1);
                                            }
                                            while((int)ptr27 > 0);
                                            ptr17 = ptr15;
                                            ptr27 = ptr7;
                                            ptr25 = ptr28;
                                        }
                                        ptr26 = (int*)((char*)ptr26 + 2);
                                        ptr25 = (void*)((int)ptr25 + 1);
                                        ptr27 = (void*)((int)ptr27 - 1);
                                        ptr28 = ptr25;
                                        ptr7 = ptr27;
                                    }
                                    while((int)ptr27 > 0);
                                    void* ptr33 = ptr24;
                                    int* ptr34 = (int*)(v15 + 0xc002);
                                    void* ptr35 = ptr22;
                                    ptr15 = ptr33;
                                    if(!((unsigned short)ptr34 ? 0: 1) && (unsigned short)ptr34 >= 0) {
                                        while((int)ptr33 >= 0) {
                                            void* ptr36 = ptr23;
                                            void* ptr37 = (void*)((int)(int*)((int)ptr36 * 2) | (int)(int*)((int)ptr35 >>> 31));
                                            ptr35 = (void*)((int)ptr35 * 2);
                                            void* ptr38 = ptr15;
                                            ptr23 = ptr37;
                                            ptr25 = (void*)0xFFFF;
                                            ptr22 = ptr35;
                                            ptr33 = (void*)((int)(int*)((int)ptr15 * 2) | (int)(int*)((int)ptr36 >>> 31));
                                            ptr34 = (int*)((char*)ptr34 + 0xFFFF);
                                            ptr15 = ptr33;
                                            ptr24 = ptr33;
                                            if((((unsigned short)ptr34 ? 0: 1) || (unsigned short)ptr34 < 0)) {
                                                break;
                                            }
                                        }
                                        if(!((unsigned short)ptr34 ? 0: 1) && (unsigned short)ptr34 >= 0) {
                                            ptr25 = (unsigned int)(unsigned short)ptr22 | ((unsigned int)(unsigned short)(int*)((int)ptr25 >>> 16) << 16);
                                        }
                                        else {
                                            goto loc_40D919;
                                        }
                                    }
                                    else {
                                    loc_40D919:
                                        ptr25 = (void*)0xFFFF;
                                        ptr34 = (int*)((char*)ptr34 + 0xFFFF);
                                        if((unsigned short)ptr34 < 0) {
                                            void* ptr39 = ptr21;
                                            void* ptr40 = (void*)(0 - (unsigned short)ptr34);
                                            ptr7 = (void*)(0 - (unsigned short)ptr34);
                                            ptr34 = (int*)((int)(void*)(0 - (unsigned short)ptr34) + (int)ptr34);
                                            do {
                                                if(((unsigned char)ptr22 & 0x1)) {
                                                    ptr39 = (void*)((int)ptr39 + 1);
                                                }
                                                ptr25 = (void*)((int)(int*)((int)ptr33 * 0x80000000) | (int)(int*)((int)ptr23 >>> 1));
                                                ptr33 = (void*)((int)ptr33 >>> 1);
                                                ptr35 = (void*)((int)(int*)((int)ptr23 * 0x80000000) | (int)(int*)((int)ptr35 >>> 1));
                                                ptr7 = (void*)((int)ptr7 - 1);
                                                char v41 = ptr7 ? 0: 1;
                                                ptr24 = ptr33;
                                                ptr23 = ptr25;
                                                ptr22 = ptr35;
                                            }
                                            while(!(ptr7 ? 0: 1));
                                            ptr15 = ptr33;
                                            if(ptr39) {
                                                ptr25 = (unsigned int)((unsigned short)ptr35 | 0x1) | ((unsigned int)(unsigned short)(int*)((int)ptr25 >>> 16) << 16);
                                                (void*)(ptr22 & 0xFFFF) = (unsigned short)ptr25;
                                                ptr35 = ptr22;
                                            loc_40D98E:
                                                if((unsigned short)ptr25 > 0x8000 || (int*)((int)ptr35 & 0x1ffff) == 0x18000) {
                                                    int v42 = *(int*)((char*)&ptr22 + 2);
                                                    if(v42 == -1) {
                                                        int v43 = *(int*)((char*)&ptr23 + 2);
                                                        *(void**)((char*)&ptr22 + 2) = NULL;
                                                        if(v43 == -1) {
                                                            v43 = (unsigned int)(unsigned short)(int*)((int)ptr24 >>> 16) | ((unsigned int)0xFFFF << 16);
                                                            *(void**)((char*)&ptr23 + 2) = NULL;
                                                            if((unsigned short)v43 == 0xFFFF) {
                                                                (void*)((ptr24 >>> 16) & 0xFFFF) = 0x8000;
                                                                ptr34 = (int*)((char*)ptr34 + 1);
                                                            }
                                                            else {
                                                                (void*)((ptr24 >>> 16) & 0xFFFF) = (unsigned short)v43 + 1;
                                                            }
                                                        }
                                                        else {
                                                            *(int*)((char*)&ptr23 + 2) = v43 + 1;
                                                        }
                                                        ptr17 = ptr24;
                                                    }
                                                    else {
                                                        *(int*)((char*)&ptr22 + 2) = v42 + 1;
                                                        goto loc_40D9DE;
                                                    }
                                                }
                                                else {
                                                loc_40D9DE:
                                                    ptr17 = ptr15;
                                                }
                                                v30 = v19;
                                                if((unsigned short)ptr34 >= 0x7fff) {
                                                    ptr4 = NULL;
                                                    char v44 = (unsigned short)v18 == 0;
                                                    ptr2 = NULL;
                                                    ptr3 = (void*)(((((unsigned short)v18 == 0 ? 1: 0) - 1) & 0x80000000) + 0x7fff8000);
                                                }
                                                else {
                                                    int* ptr41 = (int*)((int)ptr34 | v18);
                                                    (void*)(ptr2 & 0xFFFF) = (unsigned short)(int*)((int)ptr22 >>> 16);
                                                    *(int*)((char*)&ptr2 + 2) = ptr23;
                                                    *(void**)((char*)&ptr4 + 2) = ptr17;
                                                    (void*)((ptr3 >>> 16) & 0xFFFF) = (unsigned short)ptr41;
                                                }
                                                goto loc_40DA47;
                                            }
                                        }
                                        ptr25 = (unsigned int)(unsigned short)ptr22 | ((unsigned int)(unsigned short)(int*)((int)ptr25 >>> 16) << 16);
                                    }
                                    goto loc_40D98E;
                                }
                            }
                            else {
                                ptr3 = (void*)(((((unsigned short)v18 == 0 ? 1: 0) - 1) & 0x80000000) + 0x7fff8000);
                            loc_40DA3E:
                                ptr4 = NULL;
                                ptr2 = NULL;
                            loc_40DA44:
                                v30 = v19;
                            }
                        loc_40DA47:
                            v3 = v17;
                        }
                    }
                loc_40DA55:
                    v2 = (unsigned int)(unsigned short)ptr2;
                    v0 = *(int*)((char*)&ptr2 + 2);
                    v1 = *(int*)((char*)&ptr4 + 2);
                    ptr0 = (int*)((int)ptr3 >>> 16);
                }
                else {
                    goto loc_40DA55;
                }
            }
            else {
                v2 = 0;
                ptr0 = NULL;
                v1 = 0;
                v0 = 0;
            }
        }
        else {
            ptr0 = NULL;
            v1 = 0;
        loc_40DA91:
            v2 = 0;
            v0 = 0;
        }
    loc_40DA96:
        short* ptr42 = ptr6;
        *(ptr6 + 5) = (unsigned short)(int*)((int)ptr0 | v16);
        *ptr6 = (unsigned short)v2;
        *(int*)(ptr6 + 1) = v0;
        *(int*)(ptr6 + 3) = v1;
    }
    __security_check_cookie((uintptr_t)((int)&v9 ^ (int)ptr5));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* __updatetlocinfo() {
    int* result;
    int v0;
    int v1;
    int v2 = &gvar_417818;
    int v3 = v1;
    int* ptr0 = NULL;
    int v4 = _getptd();
    if((*(int*)(v4 + 112) & gvar_418C98) && *(int*)(v4 + 108)) {
        int v5 = _getptd();
        result = *(int**)(v5 + 108);
    }
    else {
        _lock(12);
        v2 = 0;  // __try{ (see __finally:40853Dh)
        result = _updatetlocinfoEx_nolock((unsigned int*)(v4 + 108), gvar_418BDC);
        sub_408540();
    }
    if(!result) {
        /*NO_RETURN*/ _amsg_exit(32);
    }
    *(int*)__FS_BASE = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* __updatetmbcinfo() {
    void* _Block;
    int v0;
    int v1;
    int v2 = &gvar_417838;
    int v3 = v1;
    int v4 = _getptd();
    if((*(int*)(v4 + 112) & gvar_418C98) && *(int*)(v4 + 108) != 0) {
        _Block = *(void**)(v4 + 104);
    }
    else {
        _lock(13);
        v2 = 0;  // __try{ (see __finally:4088E5h)
        _Block = *(void**)(v4 + 104);
        if(gvar_418974 != _Block) {
            if(_Block) {
                *(int*)_Block = *(int*)_Block - 1;
                if(!*(int*)_Block && _Block != &gvar_418750) {
                    free(_Block);
                }
            }
            *(unsigned int*)(v4 + 104) = gvar_418974;
            _Block = gvar_418974;
            *(int*)_Block = *(int*)_Block + 1;
        }
        sub_4088E8();
    }
    if(!_Block) {
        /*NO_RETURN*/ _amsg_exit(32);
    }
    *(int*)__FS_BASE = v0;
    return _Block;
}

int __wcsnicmp_ascii(int param0, short* param1, int param2) {
    int result;
    int v0;
    int v1 = param2;
    if(v1) {
        short* ptr0 = param1;
        int v2 = v0;
        int v3 = param0;
        int v4 = 90;
        int* ptr1 = (int*)(v3 - (int)ptr0);
        param2 = 90;
        while(1) {
            int v5 = (unsigned int)*(short*)((int)ptr0 + (int)ptr1);
            int v6 = (unsigned short)v5 >= 65 && (unsigned short)v5 <= 90 ? (unsigned int)((v5 + 32) & 0xFFFF): v5;
            int v7 = (unsigned int)*ptr0;
            if((unsigned short)v7 >= 65 && (unsigned short)v7 <= 90) {
                v7 = (unsigned int)((v7 + 32) & 0xFFFF);
            }
            ++ptr0;
            --v1;
            if(!v1 || !(unsigned short)v6 || (unsigned short)v7 != (unsigned short)v6) {
                return (unsigned int)(v6 & 0xFFFF);
            }
            v4 = 90;
        }
    }
    return result;
}

int _abnormal_termination() {
    int result = 0;
    int v0 = *(int*)__FS_BASE;
    if(*(int*)(v0 + 4) == &_unwind_handler && *(int*)(*(int*)(v0 + 12) + 12) == *(int*)(v0 + 8)) {
        result = 1;
    }
    return result;
}

int _alldvrm(unsigned int param0, unsigned int param1, unsigned int param2, int param3) {
    unsigned int v0;
    int v1 = 0;
    if(param1 >= 0x80000000) {
        v1 = 1;
        param1 = (unsigned int)(0 - param1 - (unsigned int)(param0 > 0));
        param0 = (unsigned int)(0 - param0);
    }
    int v2 = param3;
    if(v2 < 0) {
        ++v1;
        v2 = 0 - v2 - (unsigned int)(param2 > 0);
        param3 = v2;
        param2 = (unsigned int)(0 - param2);
    }
    if(!v2) {
        v0 = (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param1 % param2) << 32)) / param2;
    }
    else {
        int v3 = v2;
        unsigned int v4 = param2;
        unsigned int v5 = param1;
        unsigned int v6 = param0;
        do {
            v4 = (unsigned int)__ror__((unsigned long long)v4 | ((unsigned long long)(v3 & 0x1) << 32), 1);
            unsigned int v7 = v5;
            v5 >>>= 1;
            v6 = (unsigned int)__ror__((unsigned long long)v6 | ((unsigned long long)(v7 & 0x1) << 32), 1);
            v3 >>>= 1;
        }
        while(v3);
        v0 = (unsigned int)((unsigned long long)v6 | ((unsigned long long)v5 << 32)) / v4;
        unsigned int v8 = v0 * param2;
        int v9 = (unsigned int)(((unsigned long long)v0 * (unsigned long long)param2) >>> 32L);
        unsigned int v10 = (unsigned int)((unsigned int)((unsigned long long)v6 | ((unsigned long long)v5 << 32)) / v4 * param3 + v9);
        if(!__carry__(v9 * 2, v10)) {
            char v11 = v10 < param1;
            if((!v11 && v10 != param1) || (!v11 && v8 > param0)) {
                goto loc_40F1D8;
            }
        }
        else {
        loc_40F1D8:
            --v0;
        }
    }
    unsigned int v12 = v0;
    if(!(v1 - 1)) {
        v12 = (unsigned int)(0 - v12);
    }
    return (int)v12;
}

int _allmul(int param0, int param1, int param2, int param3) {
    return param0 * param2;
}

int _alloc_osfhnd() {
    int result;
    int v0;
    int v1;
    int v2 = v1;
    int v3 = -1;
    int v4 = -1;
    int v5 = 0;
    int v6 = _mtinitlocknum(11);
    if(!v6) {
        result = -1;
    }
    else {
        _lock(11);
        int v7 = 0;  // __try{ (see __finally:409BF2h)
        int v8 = 0;
        while(1) {
            int v9 = v8;
            if(v8 < 64) {
                unsigned int v10 = *(unsigned int*)(v8 * 4 + (int)&gvar_4191D0);
                if(v10) {
                    while(*(unsigned int*)(v8 * 4 + (int)&gvar_4191D0) + 0x800 > v10) {
                        if(!(*(char*)(v10 + 4) & 0x1)) {
                            if(!*(int*)(v10 + 8)) {
                                _lock(10);
                                v7 = 1;  // __try{ (see __finally:409B24h)
                                if(!*(int*)(v10 + 8)) {
                                    __crtInitializeCriticalSectionEx((LPCRITICAL_SECTION)(v10 + 12), 4000, 0);
                                    *(int*)(v10 + 8) = *(int*)(v10 + 8) + 1;
                                }
                                v7 = 0;  // } (starts at 409AD2h)
                                sub_409B2D();
                            }
                            if(!v5) {
                                EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 12));
                                if((*(char*)(v10 + 4) & 0x1)) {
                                    LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 12));
                                }
                                else if(!v5) {
                                    *(char*)(v10 + 4) = 1;
                                    *(int*)v10 = -1;
                                    v3 = v8 * 32 + (int)(int*)((int)(int*)(v10 - *(unsigned int*)(v8 * 4 + (int)&gvar_4191D0)) >> 6);
                                    break;
                                }
                            }
                        }
                        v10 += 64;
                    }
                    if(v3 == -1) {
                        ++v8;
                        continue;
                    }
                }
                else {
                    unsigned int v11 = sub_408F5B(32, 64);
                    if(v11) {
                        *(unsigned int*)(v8 * 4 + (int)&gvar_4191D0) = v11;
                        gvar_419FF8 += 32;
                        while(*(unsigned int*)(v8 * 4 + (int)&gvar_4191D0) + 0x800 > v11) {
                            *(short*)(v11 + 4) = 0xa00;
                            *(int*)v11 = -1;
                            *(int*)(v11 + 8) = 0;
                            v11 += 64;
                        }
                        v3 = v8 * 32;
                        *(char*)((v3 & 0x1f) * 64 + *(unsigned int*)((v3 >> 5) * 4 + (int)&gvar_4191D0) + 4) = 1;
                        int v12 = __lock_fhandle(v3);
                        if(!v12) {
                            v3 = -1;
                        }
                    }
                }
            }
            break;
        }
        sub_409BF5();
        result = v3;
    }
    *(int*)__FS_BASE = v0;
    return result;
}

int _alloca_probe_16(int param0) {
    return _chkstk(param0);
}

int _alloca_probe_162(int param0) {
    return _chkstk(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
void _amsg_exit(int errnum) {
    _FF_MSGBANNER();
    _NMSG_WRITE(errnum);
    /*NO_RETURN*/ _exit(0xFF);
}

// Stale decompilation - Refresh this view to re-decompile this code
int _atodbl_l(_CRT_DOUBLE* _Result, char* _String, _locale_t _Locale) {
    int v0;
    char v1;
    int v2;
    char v3;
    char v4;
    char v5;
    int v6;
    int result;
    int v7;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v2);
    int v8 = v7;
    _LocaleUpdate::_LocaleUpdate((int)&v3, (int)_Locale);
    int v9 = __strgtold12_l(&v4, &v5, _String, 0, 0, 0, 0, &v3);
    int v10 = unk_lib_sub11(&v4, (int*)_Result);
    if(((unsigned char)v9 & 0x3)) {
        if(((unsigned char)v9 & 0x1)) {
        loc_40C798:
            v0 = 4;
        }
        else if(((unsigned char)v9 & 0x2)) {
        loc_40C7A4:
            v0 = 3;
        }
    }
    else if(v10 == 1) {
        goto loc_40C7A4;
    }
    else if(v10 == 2) {
        goto loc_40C798;
    }
    if(v1) {
        *(int*)(v6 + 112) = *(int*)(v6 + 112) & 0xfffffffd;
    }
    __security_check_cookie((uintptr_t)((int)&v2 ^ (int)ptr0));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _atoflt_l(_CRT_FLOAT* _Result, char* _String, _locale_t _Locale) {
    return __crt_atoflt_l((int)_Result, (int)_String, (int)_Locale, 0);
}

int _aulldvrm(unsigned int param0, unsigned int param1, unsigned int param2, int param3) {
    unsigned int v0;
    if(!param3) {
        v0 = (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param1 % param2) << 32)) / param2;
    }
    else {
        int v1 = param3;
        unsigned int v2 = param2;
        unsigned int v3 = param1;
        unsigned int v4 = param0;
        do {
            v2 = (unsigned int)__ror__((unsigned long long)v2 | ((unsigned long long)(v1 & 0x1) << 32), 1);
            unsigned int v5 = v3;
            v3 >>>= 1;
            v4 = (unsigned int)__ror__((unsigned long long)v4 | ((unsigned long long)(v5 & 0x1) << 32), 1);
            v1 >>>= 1;
        }
        while(v1);
        v0 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)v3 << 32)) / v2;
        unsigned int v6 = v0 * param2;
        int v7 = (unsigned int)(((unsigned long long)v0 * (unsigned long long)param2) >>> 32L);
        unsigned int v8 = (unsigned int)((unsigned int)((unsigned long long)v4 | ((unsigned long long)v3 << 32)) / v2 * param3 + v7);
        if(!__carry__(v7 * 2, v8)) {
            char v9 = v8 < param1;
            if((!v9 && v8 != param1) || (!v9 && v6 > param0)) {
                --v0;
                return (int)v0;
            }
        }
        else {
            --v0;
        }
    }
    return (int)v0;
}

int _aullshr(int param0, int param1) {
    int v0;
    if((unsigned char)param0 >= 64) {
        return 0;
    }
    else if((unsigned char)param0 < 32) {
        return (unsigned int)(((unsigned long long)v0 | ((unsigned long long)param1 << 32)) >>> (param0 & 0x1f));
    }
    return param1 >>> (((unsigned int)((unsigned char)param0 & 0x1f) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8)) & 0x1f);
}

// Stale decompilation - Refresh this view to re-decompile this code
void _c_exit() {
    doexit(0, 1, 1);
}

int _call_reportfault(int param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    char v9;
    char v10;
    short v11;
    short v12;
    int v13;
    int result;
    int v14;
    int v15;
    int v16;
    short v17;
    short v18;
    int v19;
    int v20;
    short v21;
    short v22;
    int v23 = v14;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v23);
    if(param0 != -1) {
        _crt_debugger_hook();
    }
    int v24 = 0;
    memset(&v0, 0, 76);
    int* ptr1 = &v24;
    int* ptr2 = &v13;
    int* ptr3 = &v13;
    int v25 = v15;
    int v26 = v20;
    int v27 = v16;
    short v28 = v17;
    short v29 = v11;
    short v30 = v18;
    short v31 = v21;
    short v32 = v22;
    short v33 = v12;
    int v34 = (unsigned int)((unsigned int)&v19 >= 0xfffffff4) | ((unsigned int)1 << 1) | ((unsigned int)__parity__((unsigned char)&v2) << 2) | ((unsigned int)0 << 3) | ((unsigned int)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v19 ^ 0xc) ^ (int)&v2) >>> 4) & 0x1) << 4) | ((unsigned int)0 << 5) | ((unsigned int)(&v1 == 0x330) << 6) | ((unsigned int)((int)&v2 < 0) << 7) | ((unsigned int)v3 << 8) | ((unsigned int)v4 << 9) | ((unsigned int)0 << 10) | ((unsigned int)((int)(int*)((int)(int*)((int)&v2 ^ (int)&v19) & (int*)~(int)(int*)((int)&v19 ^ 0xc)) < 0) << 11) | ((unsigned int)v5 << 12) | ((unsigned int)v6 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v7 << 18) | ((unsigned int)v9 << 19) | ((unsigned int)v8 << 20) | ((unsigned int)v10 << 21) | ((unsigned int)0 << 22);
    int v35 = v1;
    int* ptr4 = &v1;
    v13 = 0x10001;
    int v36 = v23;
    v24 = param1;
    v0 = param2;
    int v37 = v1;
    BOOL v38 = IsDebuggerPresent();
    LONG v39 = __crtUnhandledException(&ptr1);
    if(!v39 && !v38 && param0 != -1) {
        _crt_debugger_hook();
    }
    __security_check_cookie((uintptr_t)((int)&v23 ^ (int)ptr0));
    return result;
}

int _callnewh(size_t _Size) {
    PVOID v0 = DecodePointer(gvar_4192D0);
    if(v0) {
        v0 = (PVOID)v0((int)_Size);
        if(v0) {
            return 1;
        }
    }
    return 0;
}

LPVOID _calloc_impl(unsigned int param0, unsigned int param1, int* param2) {
    LPVOID v0;
    int* ptr0;
    int v1;
    if(param0 && (unsigned int)(int*)((int)(unsigned int)(void*)0xFFFFFFE0 / param0) < param1) {
        ptr0 = _errno();
        ptr0[0] = 12;
    }
    else {
        SIZE_T dwBytes = (SIZE_T)(param0 * param1);
        if(!dwBytes) {
            dwBytes = 1;
        }
        do {
            LPVOID result = NULL;
            if(dwBytes <= 0xffffffe0) {
                result = HeapAlloc(gvar_41993C, 8, dwBytes);
                if(result) {
                    return result;
                }
            }
            if(!gvar_419938) {
                if(param2) {
                    param2[0] = 12;
                }
                return result;
            }
            v1 = _callnewh((size_t)dwBytes);
        }
        while(v1);
        ptr0 = param2;
        if(ptr0) {
            ptr0[0] = 12;
        }
    }
    return NULL;
}

// Stale decompilation - Refresh this view to re-decompile this code
void _cexit() {
    doexit(0, 0, 1);
}

int _cfltcvt(int* param0, char* param1, unsigned int param2, int param3, int param4, int param5) {
    return _cfltcvt_l(param0, param1, param2, param3, param4, param5, NULL);
}

int _cfltcvt_init() {
    gvar_418CA0 = &_cropzeros;
    gvar_418C9C = &_cfltcvt;
    gvar_418CA4 = &_fassign;
    gvar_418CA8 = &_forcdecpt;
    gvar_418CAC = &_positive;
    gvar_418CB0 = &_cfltcvt;
    gvar_418CB4 = &_cfltcvt_l;
    gvar_418CB8 = &_fassign_l;
    gvar_418CBC = &_cropzeros_l;
    gvar_418CC0 = &_forcdecpt_l;
    return &_cfltcvt;
}

int _cfltcvt_l(int* param0, char* param1, unsigned int param2, int param3, int param4, int param5, void* param6) {
    switch(param3) {
        case 65: 
        case 97: {
            return _cftoa_l((int)param0, param1, param2, param4, (unsigned int)param5, param6);
        }
        case 69: 
        case 101: {
            return _cftoe_l(param0, param1, (int)param2, param4, param5, (int)param6);
        }
        case 102: {
            return _cftof_l(param0, param1, param2, param4, param6);
        }
        default: {
            return _cftog_l(param0, param1, param2, param4, param5, param6);
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int _cftoa_l(int param0, void* param1, unsigned int param2, int param3, unsigned int param4, void* param5) {
    char* ptr0;
    void* ptr1;
    int result;
    int* ptr2;
    int v0;
    int v1;
    unsigned int v2;
    char v3;
    void* ptr3 = param5;
    unsigned int v4 = 0x3ff;
    int v5 = 48;
    _LocaleUpdate::_LocaleUpdate((int)&v0, (int)ptr3);
    int v6 = param3;
    if(v6 < 0) {
        v6 = 0;
    }
    void* ptr4 = param1;
    if(ptr4) {
        unsigned int v7 = param2;
        if(!v7) {
            goto loc_40DBCF;
        }
        else {
            *(char*)ptr4 = 0;
            if((unsigned int)(v6 + 11) >= v7) {
                ptr2 = _errno();
                ptr3 = (void*)0x22;
                goto loc_40DBE8;
            }
            else {
                int v8 = param0;
                int v9 = *(int*)(v8 + 4);
                int v10 = *(int*)v8;
                if(((v9 >>> 20) & 0x7ff) == 0x7ff) {
                    result = _cftoe(v8, (int)ptr4 + 2, v7 == -1 ? -1: (int)(v7 - 2), v6, 0);
                    if(result) {
                        *(char*)ptr4 = 0;
                    }
                    else {
                        if(*(char*)((int)ptr4 + 2) == 45) {
                            *(char*)ptr4 = 45;
                            ptr4 = (void*)((int)ptr4 + 1);
                        }
                        *(char*)ptr4 = 48;
                        *(char*)((int)ptr4 + 1) = (((param4 ? 0: 1) + 0xFF) & 0xe0) + 120;
                        char* ptr5 = strrchr((char*)((int)ptr4 + 2), 101);
                        if(ptr5) {
                            ptr5[0] = (((param4 ? 0: 1) + 0xFF) & 0xe0) + 112;
                            ptr5[3] = 0;
                        }
                        result = 0;
                    }
                }
                else {
                    if((v9 & 0x80000000)) {
                        *(char*)ptr4 = 45;
                        ptr4 = (void*)((int)ptr4 + 1);
                    }
                    *(char*)ptr4 = 48;
                    *(char*)((int)ptr4 + 1) = (((param4 ? 0: 1) + 0xFF) & 0xe0) + 120;
                    char v11 = *(int*)(v8 + 4) & 0x7ff00000 ? 0: 1;
                    int v12 = ((param4 > 0 ? -1: 0) & 0xffffffe0) + 39;
                    if(v11) {
                        *(char*)((int)ptr4 + 2) = 48;
                        ptr1 = (void*)((int)ptr4 + 3);
                        v4 = !((*(int*)(v8 + 4) & 0xfffff) | *(int*)v8) ? 0: 1022;
                    }
                    else {
                        *(char*)((int)ptr4 + 2) = 49;
                        ptr1 = (void*)((int)ptr4 + 3);
                    }
                    void* i = ptr1;
                    void* _Dst = (void*)((int)ptr1 + 1);
                    void* ptr6 = i;
                    *(char*)i = !v6 ? 0: ***(unsigned int*)(v0 + 132);
                    unsigned int v13 = (unsigned int)(*(int*)(v8 + 4) & 0xfffff);
                    unsigned int v14 = (unsigned int)(*(int*)(v8 + 4) & 0xfffff);
                    if(v13 != 0 || (*(unsigned int*)v8 >= 0 && !(*(int*)v8 ? 0: 1))) {
                        param3 = 0;
                        i = (void*)0xF0000;
                        int v15 = v5;
                        param1 = (void*)0xF0000;
                        while(v6 > 0) {
                            int v16 = _aullshr((int)(unsigned short)v5, (int)(int*)(*(int*)(v8 + 4) & (int)i) & 0xfffff);
                            unsigned int v17 = (unsigned int)((unsigned short)v16 + 48);
                            if(v17 > 57) {
                                v17 = (unsigned int)(((param4 > 0 ? -1: 0) & 0xffffffe0) + v17 + 39);
                            }
                            v8 = param0;
                            *(char*)_Dst = (unsigned char)v17;
                            _Dst = (void*)((int)_Dst + 1);
                            param3 = (int)((unsigned long long)((param3 >>> 4) & 0xFFFFFFF) | ((unsigned long long)param1 << 28) | ((unsigned long long)0 << 60));
                            i = (void*)((int)param1 >>> 4);
                            v15 = v5 - 4;
                            --v6;
                            param1 = i;
                            v5 = v15;
                            if((unsigned short)v15 < 0) {
                                break;
                            }
                        }
                        if((unsigned short)v15 >= 0) {
                            int v18 = _aullshr((int)(unsigned short)v5, (int)(int*)(*(int*)(v8 + 4) & (int)i) & 0xfffff);
                            if((unsigned short)v18 > 8) {
                                char* ptr7 = (char*)((int)_Dst - 1);
                                for(i = (unsigned int)*ptr7 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8); (unsigned char)i == 102 || (unsigned char)i == 70; i = (unsigned int)*ptr7 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8)) {
                                    *ptr7 = 48;
                                    --ptr7;
                                }
                                if(ptr7 != ptr6) {
                                    i = (unsigned int)*ptr7 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                    if((unsigned char)i == 57) {
                                        *ptr7 = (unsigned char)v12 + 58;
                                    }
                                    else {
                                        i = (unsigned int)((unsigned char)i + 1) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                        *ptr7 = (unsigned char)i;
                                    }
                                }
                                else {
                                    *(ptr7 - 1) = *(ptr7 - 1) + 1;
                                }
                            }
                        }
                    }
                    if(v6 > 0) {
                        memset(_Dst, 48, (size_t)v6);
                        _Dst = (void*)((int)_Dst + v6);
                    }
                    if(!*(char*)ptr6) {
                        _Dst = ptr6;
                    }
                    *(char*)_Dst = (((param4 ? 0: 1) + 0xFF) & 0xe0) + 112;
                    int v19 = _aullshr((unsigned int)52 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8), *(int*)(param0 + 4));
                    unsigned int v20 = (unsigned int)(v19 & 0x7ff) - v4;
                    unsigned int v21 = (unsigned int)(v19 & 0x7ff) < v4 ? 0xffffffff: 0;
                    if(v21 < 0x80000000 && ((int)v21 > 0 || v20 >= 0)) {
                        *(char*)((int)_Dst + 1) = 43;
                        ptr0 = (char*)((int)_Dst + 2);
                    }
                    else {
                        *(char*)((int)_Dst + 1) = 45;
                        ptr0 = (char*)((int)_Dst + 2);
                        unsigned int v22 = v20;
                        v20 = (unsigned int)(0 - v20);
                        v21 = (unsigned int)(0 - ((unsigned int)(v22 > 0) + v21));
                    }
                    *ptr0 = 48;
                    char* ptr8 = ptr0;
                    if(v21 < 0x80000000) {
                        if(v21 != 0 || v20 >= 1000) {
                            int v23 = _alldvrm(v20, v21, 1000, 0);
                            v14 = v2;
                            *ptr0 = (unsigned char)v23 + 48;
                            ++ptr0;
                            if(ptr0 != ptr8) {
                                goto loc_40DE9A;
                            }
                            else {
                                goto loc_40DE8C;
                            }
                        }
                        else {
                        loc_40DE8C:
                            if(v21 < 0x80000000 && ((int)v21 > 0 || v20 >= 100)) {
                            loc_40DE9A:
                                int v24 = _alldvrm(v20, v21, 100, 0);
                                v14 = v2;
                                *ptr0 = (unsigned char)v24 + 48;
                                ++ptr0;
                            }
                        }
                    }
                    if(ptr0 != ptr8 || (v21 < 0x80000000 && ((int)v21 > 0 || v20 >= 10))) {
                        int v25 = _alldvrm(v20, v21, 10, 0);
                        *ptr0 = (unsigned char)v25 + 48;
                        ++ptr0;
                        v14 = v21;
                    }
                    result = 0;
                    *ptr0 = (unsigned char)v20 + 48;
                    *(ptr0 + 1) = 0;
                }
            }
        }
    }
    else {
    loc_40DBCF:
        ptr2 = _errno();
        ptr3 = (void*)0x16;
    loc_40DBE8:
        result = (int)ptr3;
        ptr2[0] = (int)ptr3;
        _invalid_parameter_noinfo();
    }
    if(v3) {
        *(int*)(v1 + 112) = *(int*)(v1 + 112) & 0xfffffffd;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _cftoe(int param0, int param1, int param2, int param3, int param4) {
    return _cftoe_l(param0, param1, param2, param3, param4, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
void* _cftoe2_l(char* param0, unsigned int param1, int param2, int param3, int* param4, int param5, int param6) {
    errno_t v0;
    char* _Destination;
    int v1;
    void* result;
    int v2;
    void* ptr0;
    int* ptr1;
    char v3;
    int v4;
    int v5;
    int v6;
    int v7 = v6;
    _LocaleUpdate::_LocaleUpdate((int)&v4, param6);
    char* ptr2 = param0;
    if(!ptr2 || param1 < 0 || (param1 ? 0: 1)) {
        ptr1 = _errno();
        ptr0 = (void*)0x16;
        result = ptr0;
        ptr1[0] = (int)ptr0;
        _invalid_parameter_noinfo();
        goto loc_40E042;
    }
    else {
        v2 = param2;
        result = NULL;
        v1 = v2;
        if(v2 <= 0) {
            v1 = 0;
        }
    }
    if((unsigned int)(v1 + 9) >= param1) {
        ptr1 = _errno();
        ptr0 = (void*)0x22;
        result = ptr0;
        ptr1[0] = (int)ptr0;
        _invalid_parameter_noinfo();
        goto loc_40E042;
    }
    else {
        if((unsigned char)param5) {
            _shift((char*)((*param4 == 45 ? 1: 0) + (int)ptr2), v2 <= 0 ? 0: 1);
            v2 = param2;
        }
        char* ptr3 = ptr2;
        if(*param4 == 45) {
            *ptr2 = 45;
            ptr3 = ptr2 + 1;
        }
        if(v2 > 0) {
            *ptr3 = *(ptr3 + 1);
            ++ptr3;
            *ptr3 = ***(unsigned int*)(v4 + 132);
        }
        _Destination = (char*)(((unsigned char)param5 == 0 ? 1: 0) + v2 + (int)ptr3);
        v0 = strcpy_s(_Destination, param1 == -1 ? 0xffffffff: (rsize_t)((int)(int*)((int)ptr2 - (int)_Destination) + param1), "e+000");
    }
    if(v0) {
        /*NO_RETURN*/ _invoke_watson(NULL, NULL, NULL, 0, 0);
    }
    if(param3 != 0) {
        _Destination[0] = 'E';
    }
    if(**(unsigned int*)(param4 + 3) != 48) {
        int* ptr4 = (int*)(*(param4 + 1) - 1);
        if((int)ptr4 < 0) {
            ptr4 = (int*)(0 - (int)ptr4);
            _Destination[1] = '-';
        }
        if((int)ptr4 >= 100) {
            int* ptr5 = (int*)((int)ptr4 / 100);
            ptr4 = (int*)((int)ptr4 % 100);
            _Destination[2] += (unsigned char)ptr5;
        }
        v8 = 10;
        if((int)ptr4 >= 10) {
            int* ptr6 = (int*)((int)ptr4 / 10);
            ptr4 = (int*)((int)ptr4 % 10);
            _Destination[3] += (unsigned char)ptr6;
        }
        _Destination[4] += (unsigned char)ptr4;
    }
    if((gvar_419F44 & 0x1) && _Destination[2] == 48) {
        unk_lib_sub13((unsigned char*)(_Destination + 2), (unsigned char*)(_Destination + 3), (int*)0x3);
    }
loc_40E042:
    if(v3) {
        *(int*)(v5 + 112) = *(int*)(v5 + 112) & 0xfffffffd;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _cftoe_l(int* param0, char* param1, int param2, int param3, int param4, int param5) {
    int* ptr0;
    int v0;
    int v1;
    char v2;
    int result;
    int v3;
    int* ptr1 = (int*)(gvar_4183F0 ^ (int)&v0);
    int v4 = v3;
    _fltout2(param0[0], param0[1], &v1, &v2, 22);
    if(!param1) {
        ptr0 = _errno();
        goto loc_40E09C;
    }
    else if(!param2) {
        ptr0 = _errno();
    loc_40E09C:
        ptr0[0] = (int)22;
        _invalid_parameter_noinfo();
    }
    else {
        void* ptr2 = _fptostr((unsigned char*)((v1 == 45 ? 1: 0) + (param3 <= 0 ? 0: 1) + (int)param1), param2 == -1 ? 0xffffffff: (unsigned int)(param2 - (v1 == 45 ? 1: 0) - (param3 <= 0 ? 0: 1)), param3 + 1, (int)&v1);
        if(ptr2) {
            *param1 = 0;
        }
        else {
            _cftoe2_l((int)param1, param2, param3, param4, (int)&v1, 0, param5);
        }
    }
    __security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr1));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _cftof2_l(char* param0, unsigned int param1, int param2, int* param3, char param4, void* param5) {
    char* _Str1;
    int result;
    int v0;
    char v1;
    int v2;
    int v3;
    int v4 = v3;
    void* ptr0 = param5;
    int v5 = *(param3 + 1) - 1;
    _LocaleUpdate::_LocaleUpdate((int)&v0, (int)ptr0);
    char* _Str = param0;
    if(!_Str || param1 < 0 || (param1 ? 0: 1)) {
        int* ptr1 = _errno();
        result = 22;
        ptr1[0] = 22;
        _invalid_parameter_noinfo();
    }
    else {
        result = 0;
        int v6 = param2;
        if(param4 != 0 && v6 == v5) {
            *(short*)((int)(int*)((*param3 == 45 ? 1: 0) + (int)_Str) + v5) = 48;
        }
        if(*param3 == 45) {
            _Str[0] = '-';
            ++_Str;
        }
        int v7 = *(param3 + 1);
        if(v7 <= 0) {
            _shift(_Str, 1);
            _Str[0] = '0';
            _Str1 = _Str + 1;
        }
        else {
            _Str1 = &_Str[v7];
        }
        if(v6 > 0) {
            _shift(_Str1, 1);
            _Str1[0] = ***(char***)(v0 + 132);
            int v8 = *(param3 + 1);
            if(v8 < 0) {
                if(param4 != 0) {
                    v6 = 0 - v8;
                }
                else if(0 - v8 <= v6) {
                    v6 = 0 - v8;
                }
                _shift(_Str1 + 1, v6);
                memset(_Str1 + 1, 48, (size_t)v6);
            }
        }
    }
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

int _cftof_l(int* param0, char* param1, unsigned int param2, int param3, void* param4) {
    int v0;
    int v1;
    char v2;
    int v3;
    int result;
    int v4;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v0);
    int v5 = v4;
    _fltout2(param0[0], param0[1], &v1, &v2, 22);
    if(!param1) {
        int* ptr1 = _errno();
        ptr1[0] = (int)22;
        _invalid_parameter_noinfo();
    }
    else if(!param2) {
        int* ptr2 = _errno();
        ptr2[0] = (int)22;
        _invalid_parameter_noinfo();
    }
    else {
        void* ptr3 = _fptostr((unsigned char*)((v1 == 45 ? 1: 0) + (int)param1), param2 == -1 ? 0xffffffff: param2 - (v1 == 45 ? 1: 0), v3 + param3, (int)&v1);
        if(ptr3) {
            param1[0] = 0;
        }
        else {
            _cftof2_l(param1, param2, param3, &v1, 0, param4);
        }
    }
    __security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr0));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _cftog_l(int* param0, char* param1, unsigned int param2, int param3, int param4, void* param5) {
    int v0;
    int v1;
    char v2;
    int v3;
    int v4;
    int result;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v0);
    int v5 = v4;
    char* ptr1 = param1;
    _fltout2(param0[0], param0[1], &v1, &v2, 22);
    if(!ptr1) {
        int* ptr2 = _errno();
        ptr2[0] = (int)22;
        _invalid_parameter_noinfo();
    }
    else {
        unsigned int v6 = param2;
        if(!v6) {
            int* ptr3 = _errno();
            ptr3[0] = (int)22;
            _invalid_parameter_noinfo();
        }
        else {
            int v7 = v3 - 1;
            unsigned int v8 = 0xffffffff;
            unsigned char* ptr4 = (unsigned char*)((v1 == 45 ? 1: 0) + (int)ptr1);
            if(v6 != -1) {
                v8 = v6 - (v1 == 45 ? 1: 0);
            }
            void* ptr5 = _fptostr(ptr4, v8, param3, (int)&v1);
            if(ptr5) {
                ptr1[0] = 0;
            }
            else {
                int v9 = v3 - 1;
                char v10 = v9 > v7 ? 1: 0;
                if(v9 >= -4 && v9 < param3) {
                    if(v10) {
                        do {
                            v9 = (unsigned int)ptr4[0] | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
                            ++ptr4;
                        }
                        while((unsigned char)v9);
                        ptr4[-2] = (unsigned char)v9;
                    }
                    _cftof2_l(ptr1, v6, param3, &v1, 1, param5);
                }
                else {
                    _cftoe2_l((int)ptr1, (int)v6, param3, param4, (int)&v1, 1, (int)param5);
                }
            }
        }
    }
    __security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr0));
    return result;
}

int _chkstk(int param0) {
    int v0;
    int v1;
    unsigned int v2;
    int* min = (int*)((int)(int*)((int)&v0 - v2) & ~(v2 > (unsigned int)&v0 ? -1: 0));
    for(int* i = (int*)((int)&v1 & 0xfffff000); i > min; i -= 0x400) {
    }
    *min = v0;
    jump *min;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _chsize_nolock(unsigned int param0, int param1, int param2) {
    int result;
    int v0;
    unsigned int v1 = param0;
    unsigned int v2 = param0;
    int v3 = 0;
    int v4 = 0;
    int v5 = _lseeki64_nolock(v2, 0, 0, (void*)0x1);
    int v6 = v5;
    int v7 = v0;
    if((v5 & v0) != -1) {
        int v8 = _lseeki64_nolock(v1, 0, 0, (void*)0x2);
        if((v8 & v0) == -1) {
            int* ptr0 = _errno();
            return ptr0[0];
        }
        int v9 = param1 - v8;
        int v10 = param2 - ((unsigned int)((unsigned int)v8 > (unsigned int)param1) + v0);
        char v11 = ((v10 ^ param2) & (v0 ^ param2)) < 0;
        int v12 = v10;
        if(v10 >= 0 && ((!(v10 ? 0: 1) && v11 == 0) || v9)) {
            HANDLE hHeap = GetProcessHeap();
            LPVOID v13 = HeapAlloc(hHeap, 8, 0x1000);
            LPVOID v14 = v13;
            if(!v13) {
                int* ptr1 = _errno();
                ptr1[0] = 12;
                int* ptr0 = _errno();
                return ptr0[0];
            }
            int v15 = _setmode_nolock((int)v1, 0x8000);
            int v16 = v12;
            unsigned int v17 = (unsigned int)_write_nolock((int)v1, (int)v14, v16 >= 0 && (v16 != 0 || (unsigned int)v9 >= 0x1000) ? 0x1000: v9);
            while(v17 != -1) {
                int v18 = v9;
                v9 -= v17;
                v16 = v12 - ((unsigned int)(v17 > (unsigned int)v18) + (v17 >= 0x80000000 ? -1: 0));
                char v19 = (((v17 >= 0x80000000 ? -1: 0) ^ v12) & (v16 ^ v12)) < 0;
                v12 = v16;
                if(v16 < 0 || (((v16 ? 0: 1) || v19 != 0) && !v9)) {
                    _setmode_nolock((int)v1, v15);
                    void* lpMem = v14;
                    HANDLE hHeap1 = GetProcessHeap();
                    HeapFree(hHeap1, 0, lpMem);
                    goto loc_40C309;
                }
                else {
                    v17 = (unsigned int)_write_nolock((int)v1, (int)v14, v16 >= 0 && (v16 != 0 || (unsigned int)v9 >= 0x1000) ? 0x1000: v9);
                }
            }
            unsigned long* ptr2 = __doserrno();
            if(ptr2[0] == 5) {
                int* ptr3 = _errno();
                ptr3[0] = 13;
            }
            v3 = -1;
            v4 = -1;
            _setmode_nolock((int)v1, v15);
            void* lpMem = v14;
            HANDLE hHeap1 = GetProcessHeap();
            HeapFree(hHeap1, 0, lpMem);
            goto loc_40C309;
        }
        if(v10 < 0) {
            int v20 = _lseeki64_nolock(v1, param1, param2, NULL);
            if((v20 & v0) == -1) {
                int* ptr0 = _errno();
                return ptr0[0];
            }
            int v21 = _get_osfhandle(v1);
            BOOL v22 = SetEndOfFile((HANDLE)v21);
            v3 = -1 - ((unsigned int)v22 > 0 ? -1: 0);
            v4 = ((unsigned int)v22 > 0 ? -1: 0) > -1 ? -1: 0;
            if(((((unsigned int)v22 > 0 ? -1: 0) > -1 ? -1: 0) & v3) == -1) {
                int* ptr4 = _errno();
                ptr4[0] = 13;
                unsigned long* ptr5 = __doserrno();
                DWORD v23 = GetLastError();
                ptr5[0] = v23;
            loc_40C309:
                if((v3 & v4) == -1) {
                    int* ptr0 = _errno();
                    return ptr0[0];
                }
            }
        }
        int v24 = _lseeki64_nolock(v1, v6, v7, NULL);
        if((v24 & v0) == -1) {
            int* ptr0 = _errno();
            return ptr0[0];
        }
        result = 0;
    }
    else {
        int* ptr0 = _errno();
        result = ptr0[0];
    }
    return result;
}

int _cinit(int param0) {
    int v0 = _IsNonwritableInCurrentImage(&gvar_414CC8);
    if(v0) {
        _fpmath(param0);
    }
    _initp_misc_cfltcvt_tab();
    int result = _initterm_e((_PIFV*)0x41110C, (_PIFV*)0x411124);
    if(!result) {
        atexit((void __cdecl (*_)())&unk_lib_sub6);
        _initterm((_PVFV*)0x411104, (_PVFV*)0x411108);
        if(gvar_419FE4) {
            int v1 = _IsNonwritableInCurrentImage(&gvar_419FE4);
            if(v1) {
                gvar_419FE4(0, 2, 0);
            }
        }
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _close(int param0) {
    int result;
    int v0;
    int v1;
    if(param0 == -2) {
        unsigned long* ptr0 = __doserrno();
        ptr0[0] = 0;
        int* ptr1 = _errno();
        ptr1[0] = 9;
        goto loc_4049D8;
    }
    else if((param0 < 0 || gvar_419FF8 <= (unsigned int)param0)) {
        unsigned long* ptr2 = __doserrno();
        ptr2[0] = 0;
    loc_4049C8:
        int* ptr3 = _errno();
        ptr3[0] = 9;
        _invalid_parameter_noinfo();
    loc_4049D8:
        result = -1;
    }
    else if(!((int)*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
        unsigned long* ptr4 = __doserrno();
        ptr4[0] = 0;
        goto loc_4049C8;
    }
    else {
        __lock_fhandle(param0);
        if((*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
            v0 = _close_nolock(param0);
        }
        else {
            int* ptr5 = _errno();
            ptr5[0] = 9;
            v0 = -1;
        }
        sub_4049B9();
        result = v0;
    }
    *(int*)__FS_BASE = v1;
    return result;
}

int _close_nolock(unsigned int param0) {
    int result;
    DWORD v0;
    int v1 = _get_osfhandle(param0);
    if(v1 != -1) {
        unsigned int v2 = gvar_4191D0;
        if((param0 == 1 && (*(char*)(v2 + 132) & 0x1)) || (param0 == 2 && (*(char*)(v2 + 68) & 0x1))) {
            int v3 = _get_osfhandle(2);
            int v4 = _get_osfhandle(1);
            if(v4 == v3) {
                goto loc_404A45;
            }
        }
        int v5 = _get_osfhandle(param0);
        BOOL v6 = CloseHandle((HANDLE)v5);
        if(v6) {
            goto loc_404A45;
        }
        else {
            v0 = GetLastError();
        }
    }
    else {
    loc_404A45:
        v0 = 0;
    }
    _free_osfhnd(param0);
    *(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) = 0;
    if(v0) {
        _dosmaperr((unsigned int)v0);
        result = -1;
    }
    else {
        result = 0;
    }
    return result;
}

DWORD _commit(int param0) {
    DWORD result;
    int v0;
    DWORD v1 = 0;
    if(param0 == -2) {
        int* ptr0 = _errno();
        ptr0[0] = 9;
        result = 0xffffffff;
        *(int*)__FS_BASE = v0;
        return result;
    }
    else if(param0 >= 0 && gvar_419FF8 > (unsigned int)param0 && ((int)*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
        __lock_fhandle(param0);
        if((*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
            int v2 = _get_osfhandle((unsigned int)param0);
            BOOL v3 = FlushFileBuffers((HANDLE)v2);
            if(!v3) {
                v1 = GetLastError();
            }
            if(v1) {
                unsigned long* ptr1 = __doserrno();
                ptr1[0] = v1;
                goto loc_409E34;
            }
        }
        else {
        loc_409E34:
            int* ptr2 = _errno();
            ptr2[0] = 9;
            v1 = 0xffffffff;
        }
        sub_409E5B();
        result = v1;
    }
    else {
        int* ptr3 = _errno();
        ptr3[0] = 9;
        _invalid_parameter_noinfo();
        result = 0xffffffff;
    }
    *(int*)__FS_BASE = v0;
    return result;
}

unsigned int _control87(unsigned int _NewValue, unsigned int _Mask) {
    unsigned int result;
    short v0;
    int v1;
    wait();
    v0 = fnstcw(v0);
    short v2 = v0;
    unsigned int v3 = !((unsigned char)v2 & 0x1) ? 0: 16;
    if(((unsigned char)v2 & 0x4)) {
        v3 |= 8;
    }
    if(((unsigned char)v2 & 0x8)) {
        v3 |= 4;
    }
    if(((unsigned char)v2 & 0x10)) {
        v3 |= 2;
    }
    if(((unsigned char)v2 & 0x20)) {
        v3 |= 1;
    }
    if(((unsigned char)v2 & 0x2)) {
        v3 |= 0x80000;
    }
    int v4 = (unsigned int)v2;
    int v5 = v4 & 0xc00;
    if(v5) {
        switch(v5) {
            case 1024: {
                v3 |= 0x100;
                break;
            }
            case 2048: {
                v3 |= 0x200;
                break;
            }
            case 3072: {
                v3 |= 0x300;
                break;
            }
        }
    }
    int v6 = v4 & 0x300;
    if(!v6) {
        v3 |= 0x20000;
    }
    else if(v6 == 0x200) {
        v3 |= 0x10000;
    }
    if(((unsigned int)v2 & 0x1000)) {
        v3 |= 0x40000;
    }
    unsigned int v7 = _Mask;
    int v8 = (~v7 & v3) | (v7 & _NewValue);
    if(v3 != v8) {
        int v9 = /*BAD_CALL!*/ _hw_cw(v8);
        (unsigned short)v25 = fldcw((unsigned short)(unsigned int)(v9 & 0xFFFF));
        wait();
        (unsigned short)v25 = fnstcw((unsigned short)(unsigned int)(v9 & 0xFFFF));
        int v10 = (unsigned int)(v9 & 0xFFFF);
        v8 = !((unsigned char)v10 & 0x1) ? 0: 16;
        if(((unsigned char)v10 & 0x4)) {
            v8 |= 8;
        }
        if(((unsigned char)v10 & 0x8)) {
            v8 |= 4;
        }
        if(((unsigned char)v10 & 0x10)) {
            v8 |= 2;
        }
        if(((unsigned char)v10 & 0x20)) {
            v8 |= 1;
        }
        if(((unsigned char)v10 & 0x2)) {
            v8 |= 0x80000;
        }
        int v11 = (unsigned int)(v10 & 0xFFFF);
        v3 = (unsigned int)(v11 & 0xc00);
        if(v3) {
            switch(v3) {
                case 1024: {
                    v8 |= 0x100;
                    break;
                }
                case 2048: {
                    v8 |= 0x200;
                    break;
                }
                case 3072: {
                    v8 |= 0x300;
                    break;
                }
            }
        }
        int v12 = v11 & 0x300;
        if(!v12) {
            v8 |= 0x20000;
        }
        else if(v12 == 0x200) {
            v8 |= 0x10000;
        }
        if((v10 & 0x1000)) {
            v8 |= 0x40000;
        }
    }
    if(gvar_419EE8 >= 1) {
        int v13 = v7 & 0x308031f;
        v1 = stmxcsr(v1);
        int v14 = v1;
        int v15 = (unsigned char)v14 >= 0 ? 0: 16;
        if((v14 & 0x200)) {
            v15 |= 8;
        }
        if((v14 & 0x400)) {
            v15 |= 4;
        }
        if((v14 & 0x800)) {
            v15 |= 2;
        }
        if((v14 & 0x1000)) {
            v15 |= 1;
        }
        if((v14 & 0x100)) {
            v15 |= 0x80000;
        }
        int v16 = v14 & 0x6000;
        if(v16) {
            switch(v16) {
                case 8192: {
                    v15 |= 0x100;
                    break;
                }
                case 16384: {
                    v15 |= 0x200;
                    break;
                }
                case 24576: {
                    v15 |= 0x300;
                    break;
                }
            }
        }
        int v17 = (v14 & 0x8040) - 64;
        if(v17) {
            int v18 = v17 - 32704;
            if(!v18) {
                v15 |= 0x3000000;
            }
            else if(v18 == 64) {
                v15 |= 0x1000000;
            }
        }
        else {
            v15 |= 0x2000000;
        }
        int v19 = (~v13 & v15) | (v13 & _NewValue);
        if(v19 != v15) {
            int v20 = __hw_cw_sse2(v19);
            int v21 = v20;
            _Mask = (unsigned int)v20;
            _set_fpsr_sse2(v21);
            _Mask = stmxcsr(_Mask);
            unsigned int v22 = _Mask;
            v15 = (unsigned char)v22 >= 0 ? 0: 16;
            if((v22 & 0x200)) {
                v15 |= 8;
            }
            if((v22 & 0x400)) {
                v15 |= 4;
            }
            if((v22 & 0x800)) {
                v15 |= 2;
            }
            if((v22 & 0x1000)) {
                v15 |= 1;
            }
            if((v22 & 0x100)) {
                v15 |= 0x80000;
            }
            v16 = v22 & 0x6000;
            if(v16) {
                switch(v16) {
                    case 8192: {
                        v15 |= 0x100;
                        break;
                    }
                    case 16384: {
                        v15 |= 0x200;
                        break;
                    }
                    case 24576: {
                        v15 |= 0x300;
                        break;
                    }
                }
            }
            int v23 = (v22 & 0x8040) - 64;
            if(v23) {
                int v24 = v23 - 32704;
                if(!v24) {
                    v15 |= 0x3000000;
                }
                else if(v24 == 64) {
                    v15 |= 0x1000000;
                }
            }
            else {
                v15 |= 0x2000000;
            }
        }
        v3 = (unsigned int)(v15 | v8);
        if(((v15 ^ v8) & 0x8031f)) {
            v3 |= 0x80000000;
        }
        result = v3;
    }
    else {
        result = (unsigned int)v8;
    }
    return result;
}

errno_t _controlfp_s(unsigned int* _CurrentState, unsigned int _NewValue, unsigned int _Mask) {
    errno_t result;
    if((int*)(_NewValue & _Mask & 0xfcf0fce0)) {
        if(_CurrentState) {
            unsigned int v0 = _control87(0, 0);
            _CurrentState[0] = v0;
        }
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        result = 22;
    }
    else {
        if(_CurrentState) {
            unsigned int v1 = _control87(_NewValue, (unsigned int)(void*)(_Mask & 0xfff7ffff));
            _CurrentState[0] = v1;
        }
        else {
            _control87(_NewValue, (unsigned int)(void*)(_Mask & 0xfff7ffff));
        }
        result = 0;
    }
    return result;
}

unsigned int* _cropzeros(char* param0) {
    return _cropzeros_l(param0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* _cropzeros_l(char* param0, int param1) {
    int v0;
    char v1;
    unsigned int* ptr0;
    unsigned int* i = (unsigned int*)_LocaleUpdate::_LocaleUpdate((int)&v0, param1);
    char* ptr1 = param0;
    char* ptr2 = (unsigned int)*ptr1 | ((unsigned int)(int*)((int)(int*)((int)ptr2 >>> 8) & 0xffffff) << 8);
    if((unsigned char)ptr2) {
        i = (unsigned int)***(unsigned int*)(v0 + 132) | ((unsigned int)((**(unsigned int*)(v0 + 132) >>> 8) & 0xffffff) << 8);
        while((unsigned char)i != (unsigned char)ptr2) {
            ++ptr1;
            ptr2 = (unsigned int)*ptr1 | ((unsigned int)(int*)((int)(int*)((int)ptr2 >>> 8) & 0xffffff) << 8);
            if(!(unsigned char)ptr2) {
                break;
            }
        }
    }
    i = (unsigned int)*ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
    char* ptr3 = ptr1 + 1;
    if((unsigned char)i) {
        for(i = (unsigned int)*ptr3 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8); (unsigned char)i && (unsigned char)i != 101 && (unsigned char)i != 69; i = (unsigned int)*ptr3 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8)) {
            ++ptr3;
        }
        char* ptr4 = ptr3;
        do {
            --ptr3;
        }
        while(*ptr3 == 48);
        i = *(unsigned int*)(v0 + 132);
        ptr2 = *i;
        i = (unsigned int)*ptr3 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
        if((unsigned char)i == *ptr2) {
            --ptr3;
        }
        do {
            i = (unsigned int)*ptr4 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
            ++ptr3;
            ++ptr4;
            *ptr3 = (unsigned char)i;
        }
        while((unsigned char)i);
    }
    if(v1) {
        i = ptr0;
        *(int*)(i + 28) = *(int*)(i + 28) & 0xfffffffd;
    }
    return i;
}

// Stale decompilation - Refresh this view to re-decompile this code
void _crt_debugger_hook() {
    gvar_419F4C = 0;
}

int* _dosmaperr(unsigned int param0) {
    unsigned long* ptr0 = __doserrno();
    unsigned int v0 = param0;
    ptr0[0] = (unsigned long)param0;
    unsigned int v1 = _get_errno_from_oserr(v0);
    int* result = _errno();
    result[0] = (int)v1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* _errno() {
    int v0 = _getptd_noexit();
    if(!v0) {
        return (int*)&gvar_418168;
    }
    return (int*)(v0 + 8);
}

int _except_handler4(PEXCEPTION_RECORD ExceptionRecord, PVOID TargetFrame, int param2) {
    int v0;
    int v1;
    int* ptr0;
    int* ptr1;
    int* ptr2 = ptr1;
    int v2 = (int)TargetFrame;
    char v3 = 0;
    int* ptr3 = (int*)(*(int*)(v2 + 8) ^ gvar_4183F0);
    int result = 1;
    int v4 = *ptr3;
    if(v4 != -2) {
        __security_check_cookie((uintptr_t)((*(ptr3 + 1) + v2 + 16) ^ *(int*)(v4 + v2 + 16)));
    }
    __security_check_cookie((uintptr_t)((*(ptr3 + 3) + v2 + 16) ^ *(int*)(*(ptr3 + 2) + v2 + 16)));
    if(!(*(char*)&ExceptionRecord->ExceptionFlags & 0x66)) {
        PEXCEPTION_RECORD v5 = ExceptionRecord;
        int v6 = param2;
        *(unsigned int*)(v2 - 4) = &v5;
        int* ptr4 = *(int**)(v2 + 12);
        int* ptr5 = *(int**)(v2 + 12);
        if(ptr4 != -2) {
            do {
                v1 = *((int*)((int)(int*)((int)((int*)((int)ptr4 * 3) + 1) * 4) + (int)ptr3) + 1);
                unsigned int* ptr6 = (unsigned int*)((int)(int*)((int)((int*)((int)ptr4 * 3) + 1) * 4) + (int)ptr3);
                ptr0 = *ptr6;
                unsigned int* ptr7 = ptr6;
                if(!v1) {
                    goto loc_4046F3;
                }
                else {
                    v0 = _EH4_CallFilterFunc(v1);
                    v1 = (unsigned int)1 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                    v3 = (unsigned char)v1;
                    if(v0 < 0) {
                        result = 0;
                        goto loc_40472B;
                    }
                }
                if(v0 != 0) {
                    if(ExceptionRecord->ExceptionCode == -529697949 && gvar_419FFC) {
                        int v7 = _IsNonwritableInCurrentImage(&gvar_419FFC);
                        if(v7) {
                            gvar_419FFC((int)ExceptionRecord, 1);
                        }
                    }
                    _EH4_GlobalUnwind2(TargetFrame, ExceptionRecord);
                    int v8 = (int)TargetFrame;
                    if(*(int*)(v8 + 12) != ptr5) {
                        _EH4_LocalUnwind(v8, ptr5, v2 + 16, (int*)&gvar_4183F0);
                        v8 = (int)TargetFrame;
                    }
                    *(int**)(v8 + 12) = ptr0;
                    int v9 = *ptr3;
                    if(v9 != -2) {
                        __security_check_cookie((uintptr_t)((*(ptr3 + 1) + v2 + 16) ^ *(int*)(v9 + v2 + 16)));
                    }
                    __security_check_cookie((uintptr_t)((*(ptr3 + 3) + v2 + 16) ^ *(int*)(*(ptr3 + 2) + v2 + 16)));
                    _EH4_TransferToHandler(*(int*)(ptr7 + 2), v2 + 16);
                    int3();
                    result = 0;
                    goto loc_40472B;
                loc_4046F3:
                    v1 = (int)v3;
                }
                ptr5 = ptr0;
                ptr4 = ptr0;
            }
            while(ptr0 != -2);
            if((unsigned char)v1) {
                goto loc_40472B;
            }
        }
    }
    else if(*(int*)(v2 + 12) != -2) {
        _EH4_LocalUnwind(v2, (int*)0xFFFFFFFE, v2 + 16, (int*)&gvar_4183F0);
    loc_40472B:
        int v10 = *ptr3;
        if(v10 != -2) {
            __security_check_cookie((uintptr_t)((*(ptr3 + 1) + v2 + 16) ^ *(int*)(v10 + v2 + 16)));
        }
        __security_check_cookie((uintptr_t)((*(ptr3 + 3) + v2 + 16) ^ *(int*)(*(ptr3 + 2) + v2 + 16)));
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void _exit(int _Code) {
    doexit(_Code, 1, 0);
}

int _fassign(int param0, int* param1, char* _String) {
    return _fassign_l(param0, param1, _String, NULL);
}

int _fassign_l(int param0, int* param1, char* _String, _locale_t _Locale) {
    int result;
    int v0;
    int v1 = v0;
    int v2 = v0;
    if(param0) {
        _atodbl_l(&v2, _String, _Locale);
        int* ptr0 = param1;
        *ptr0 = v2;
        result = v1;
        *(ptr0 + 1) = v1;
    }
    else {
        _atoflt_l(&param0, _String, _Locale);
        result = 0;
        *param1 = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _fclose_nolock(FILE* _Stream) {
    int result;
    FILE* _Stream1 = _Stream;
    int v0 = -1;
    if(!_Stream1) {
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        result = -1;
    }
    else {
        if((*(char*)&_Stream1[3]._Placeholder & 0x83)) {
            v0 = _flush(_Stream1);
            _freebuf((int*)_Stream1);
            int v1 = _fileno(_Stream1);
            int v2 = _close(v1);
            if(v2 < 0) {
                v0 = -1;
            }
            else if(_Stream1[7]._Placeholder) {
                free(_Stream1[7]._Placeholder);
                _Stream1[7]._Placeholder = NULL;
            }
        }
        _Stream1[3]._Placeholder = NULL;
        result = v0;
    }
    return result;
}

int _fcloseall() {
    int v0;
    int result = 0;
    int v1 = 0;
    _lock(1);
    int v2 = 0;  // __try{ (see __finally:409174h)
    int v3 = 3;
    for(int i = 3; i < gvar_41B004; ++i) {
        FILE* _Stream = *(FILE**)(i * 4 + gvar_41B000);
        if(_Stream) {
            if((*(char*)&_Stream[3]._Placeholder & 0x83)) {
                int v4 = fclose(_Stream);
                if(v4 != -1) {
                    ++result;
                }
            }
            if(i >= 20) {
                DeleteCriticalSection((LPCRITICAL_SECTION)(*(int*)(i * 4 + gvar_41B000) + 32));
                free(*(void**)(i * 4 + gvar_41B000));
                *(int*)(i * 4 + gvar_41B000) = 0;
            }
        }
    }
    sub_409177();
    *(int*)__FS_BASE = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _fflush_nolock(FILE* _Stream) {
    int result;
    if(!_Stream) {
        result = flsall(0);
    }
    else {
        int v0 = _flush(_Stream);
        if(v0) {
            result = -1;
        }
        else if((int*)((int)_Stream[3]._Placeholder & 0x4000)) {
            int v1 = _fileno(_Stream);
            unsigned int v2 = (unsigned int)_commit(v1);
            result = v2 > 0 ? -1: 0;
        }
        else {
            result = 0;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _filbuf(int* param0) {
    int result;
    int v0;
    int* ptr0 = param0;
    if(!ptr0) {
        int* ptr1 = _errno();
        ptr1[0] = 22;
        _invalid_parameter_noinfo();
    }
    else {
        int v1 = ptr0[3];
        if(((unsigned char)v1 & 0x83) && !((unsigned char)v1 & 0x40)) {
            if(((unsigned char)v1 & 0x2)) {
                ptr0[3] = v1 | 0x20;
            }
            else {
                ptr0[3] = v1 | 0x1;
                if(!((v1 | 0x1) & 0x10c)) {
                    _getbuf(ptr0);
                }
                else {
                    ptr0[0] = ptr0[2];
                }
                void* ptr2 = (void*)ptr0[6];
                int v2 = ptr0[2];
                int v3 = _fileno((FILE*)ptr0);
                int v4 = _read(v3, v2, (int)ptr2);
                ptr0[1] = v4;
                if(v4 && v4 != -1) {
                    if(!(*(char*)&ptr0[3] & 0x82)) {
                        int v5 = _fileno((FILE*)ptr0);
                        if(v5 != -1) {
                            int v6 = _fileno((FILE*)ptr0);
                            if(v6 == -2) {
                                goto loc_4072B6;
                            }
                            else {
                                int v7 = _fileno((FILE*)ptr0);
                                int v8 = _fileno((FILE*)ptr0);
                                v0 = (v8 & 0x1f) * 64 + *(unsigned int*)((v7 >> 5) * 4 + (int)&gvar_4191D0);
                            }
                        }
                        else {
                        loc_4072B6:
                            v0 = &gvar_418500;
                        }
                        if((*(char*)(v0 + 4) & 0x82) == 130) {
                            ptr0[3] |= 0x2000;
                        }
                    }
                    if(ptr0[6] == 0x200 && (*(char*)&ptr0[3] & 0x8) && !(ptr0[3] & 0x400)) {
                        ptr0[6] = 0x1000;
                    }
                    int v9 = ptr0[0];
                    --ptr0[1];
                    result = (unsigned int)*(char*)v9;
                    ptr0[0] = v9 + 1;
                    return result;
                }
                ptr0[3] |= (((unsigned int)v4 > 0 ? -1: 0) & 0x10) + 16;
                ptr0[1] = 0;
            }
        }
    }
    return -1;
}

int _fileno(FILE* _Stream) {
    if(!_Stream) {
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        return -1;
    }
    return (int)_Stream[4]._Placeholder;
}

int _flsbuf(int param0, FILE* param1) {
    int result;
    int* ptr0;
    void* ptr1;
    int v0;
    FILE* _Stream = param1;
    int v1 = _fileno(_Stream);
    void* ptr2 = _Stream[3]._Placeholder;
    unsigned int v2 = (unsigned int)v1;
    if(!((unsigned char)ptr2 & 0x82)) {
        ptr0 = _errno();
        ptr0[0] = 9;
        goto loc_405B08;
    }
    else if(((unsigned char)ptr2 & 0x40)) {
        ptr0 = _errno();
        ptr0[0] = 34;
    loc_405B08:
        _Stream[3]._Placeholder = (void*)((int)_Stream[3]._Placeholder | 0x20);
        result = -1;
    }
    else {
        void* ptr3 = ptr1;
        int v3 = 0;
        if(((unsigned char)ptr2 & 0x1)) {
            _Stream[1]._Placeholder = NULL;
            if(((unsigned char)ptr2 & 0x10)) {
                _Stream->_Placeholder = (FILE)_Stream[2]._Placeholder;
                _Stream[3]._Placeholder = (void*)((int)ptr2 & 0xfffffffe);
                goto loc_405B44;
            }
            else {
                _Stream[3]._Placeholder = (void*)((int)ptr2 | 0x20);
                goto loc_405C23;
            }
        }
        else {
        loc_405B44:
            int* ptr4 = (int*)((int)_Stream[3]._Placeholder & 0xffffffef);
            _Stream[1]._Placeholder = NULL;
            int v4 = (int)ptr4 | 0x2;
            _Stream[3]._Placeholder = (void*)v4;
            if(!(v4 & 0x10c)) {
                int v5 = __iob_func();
                if(v5 + 32 != _Stream) {
                    int v6 = __iob_func();
                    if(v6 + 64 != _Stream) {
                        goto loc_405B7B;
                    }
                    else {
                        goto loc_405B70;
                    }
                }
                else {
                loc_405B70:
                    v4 = _isatty(v2);
                    if(!v4) {
                    loc_405B7B:
                        _getbuf((int*)_Stream);
                    }
                }
            }
            if((int*)((int)_Stream[3]._Placeholder & 0x108)) {
                int v7 = (int)_Stream[2]._Placeholder;
                int v8 = (int)(_Stream->_Placeholder - v7);
                param1 = (FILE*)v8;
                _Stream->_Placeholder = (FILE)(v7 + 1);
                _Stream[1]._Placeholder = (void*)((int)_Stream[6]._Placeholder - 1);
                if(v8 > 0) {
                    v3 = _write((int)v2, v7, v8);
                }
                else if((*(char*)((v2 != -1 && v2 != -2 ? (v2 & 0x1f) * 64 + *(unsigned int*)((v2 >> 5) * 4 + (int)&gvar_4191D0): &gvar_418500) + 4) & 0x20)) {
                    int v9 = _lseeki64(v2, 0, 0, (void*)0x2);
                    if((v9 & v0) == -1) {
                        goto loc_405C1F;
                    }
                }
                *(char*)_Stream[2]._Placeholder = (unsigned char)param0;
            }
            else {
                int v10 = 1;
                param1 = (FILE*)0x1;
                v3 = _write((int)v2, &param0, 1);
            }
            if(v3 != param1) {
            loc_405C1F:
                _Stream[3]._Placeholder = (void*)((int)_Stream[3]._Placeholder | 0x20);
            loc_405C23:
                result = -1;
            }
            else {
                result = (unsigned int)(param0 & 0xFF);
            }
        }
    }
    return result;
}

int _fltout2(int param0, int param1, int* param2, char* param3, rsize_t _SizeInBytes) {
    int v0;
    char v1;
    int result;
    char v2;
    int* ptr0;
    int* ptr1;
    int v3;
    short v4;
    int v5;
    int* ptr2 = (int*)(gvar_4183F0 ^ (int)&ptr1);
    int* ptr3 = ptr0;
    int* ptr4 = param2;
    char* _Destination = param3;
    __dtold(&v3, &param0);
    short* ptr5 = &v4;
    int v6 = 0;
    int v7 = 17;
    int v8 = v3;
    *(&v8 + 1) = *(int*)((char*)&v3 + 4);
    *(short*)(&v8 + 2) = *(short*)((char*)&v3 + 8);
    int v9 = sub_40F28C(v8, v5, v0, v7, v6, (int)ptr5);
    *(ptr4 + 2) = v9;
    *ptr4 = (int)v2;
    *(ptr4 + 1) = (int)v4;
    errno_t v10 = strcpy_s(_Destination, _SizeInBytes, &v1);
    if(v10) {
        /*NO_RETURN*/ _invoke_watson(NULL, NULL, NULL, 0, 0);
    }
    *(char**)(ptr4 + 3) = _Destination;
    __security_check_cookie((uintptr_t)((int)&ptr1 ^ (int)ptr2));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _flush(FILE* param0) {
    FILE* _Stream = param0;
    int result = 0;
    if(((unsigned char)_Stream[3]._Placeholder & 0x3) == 2 && (int*)((int)_Stream[3]._Placeholder & 0x108)) {
        int* ptr0 = (int*)(_Stream->_Placeholder - (int)_Stream[2]._Placeholder);
        if((int)ptr0 > 0) {
            int* ptr1 = ptr0;
            void* ptr2 = _Stream[2]._Placeholder;
            int v0 = _fileno(_Stream);
            int v1 = _write(v0, (int)ptr2, (int)ptr1);
            if(v1 == ptr0) {
                void* ptr3 = _Stream[3]._Placeholder;
                if((unsigned char)ptr3 < 0) {
                    _Stream[3]._Placeholder = (void*)((int)ptr3 & 0xfffffffd);
                }
            }
            else {
                _Stream[3]._Placeholder = (void*)((int)_Stream[3]._Placeholder | 0x20);
                result = -1;
            }
        }
    }
    void* ptr4 = _Stream[2]._Placeholder;
    _Stream[1]._Placeholder = NULL;
    _Stream->_Placeholder = (FILE)ptr4;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _flushall() {
    return flsall(1);
}

int _forcdecpt(char* param0) {
    return _forcdecpt_l(param0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int _forcdecpt_l(char* param0, int param1) {
    int v0;
    int v1;
    char v2;
    int v3;
    _LocaleUpdate::_LocaleUpdate((int)&v1, param1);
    char* ptr0 = param0;
    int v4 = tolower((int)*ptr0);
    for(char i = v4 == 101; !i; i = v0 ? 0: 1) {
        ++ptr0;
        v0 = isdigit((int)*ptr0);
    }
    int v5 = tolower((int)*ptr0);
    if(v5 == 120) {
        ptr0 += 2;
    }
    char v6 = *ptr0;
    int result = (unsigned int)***(unsigned int*)(v1 + 132) | ((unsigned int)((**(unsigned int*)(v1 + 132) >>> 8) & 0xffffff) << 8);
    *ptr0 = ***(unsigned int*)(v1 + 132);
    char* ptr1 = ptr0 + 1;
    do {
        result = (unsigned int)*ptr1 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        *ptr1 = v6;
        v6 = (unsigned char)result;
        result = (unsigned int)*ptr1 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        ++ptr1;
    }
    while((unsigned char)result);
    if((unsigned char)result != v2) {
        result = v3;
        *(int*)(result + 112) = *(int*)(result + 112) & 0xfffffffd;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _fpmath(int param0) {
    int result = _cfltcvt_init();
    if(param0) {
        result = _setdefaultprecision();
    }
    fnclex();
    return result;
}

void* _fptostr(unsigned char* param0, unsigned int param1, int param2, int param3) {
    void* result;
    void* ptr0;
    int* ptr1;
    void* ptr2;
    int v0 = param3;
    unsigned char* ptr3 = param0;
    char* ptr4 = *(unsigned int*)(v0 + 12);
    if(!ptr3 || param1 < 0 || (param1 ? 0: 1)) {
        ptr1 = _errno();
        ptr0 = (void*)0x16;
    loc_40EF41:
        ptr1[0] = (int)ptr0;
        _invalid_parameter_noinfo();
        result = ptr0;
    }
    else {
        int v1 = param2;
        ptr3[0] = 0;
        if((unsigned int)((v1 > 0 ? v1: 0) + 1) >= param1) {
            ptr1 = _errno();
            ptr0 = (void*)0x22;
            goto loc_40EF41;
        }
        else {
            ptr3[0] = 48;
            ptr0 = ptr2;
            unsigned char* ptr5 = (unsigned char*)(ptr3 + 1);
            if(v1 > 0) {
                do {
                    v0 = (unsigned int)*ptr4 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                    if((unsigned char)v0) {
                        v0 = (int)(unsigned char)v0;
                        ++ptr4;
                    }
                    else {
                        int v2 = 48;
                        v0 = 48;
                    }
                    ptr5[0] = (unsigned char)v0;
                    ++ptr5;
                    --v1;
                }
                while(v1 > 0);
                v0 = param3;
            }
            ptr5[0] = 0;
            if(v1 >= 0 && *ptr4 >= 53) {
                --ptr5;
                while(ptr5[0] == 57) {
                    ptr5[0] = 48;
                    --ptr5;
                }
                ++ptr5[0];
            }
            if(ptr3[0] == 49) {
                *(int*)(v0 + 4) = *(int*)(v0 + 4) + 1;
            }
            else {
                size_t v3 = strlen((char*)(ptr3 + 1));
                unk_lib_sub13(ptr3, (unsigned char*)(ptr3 + 1), (int*)(v3 + 1));
            }
            result = NULL;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
size_t _fread_nolock_s(void* _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE* _Stream) {
    size_t result;
    int v0;
    size_t result;
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int* ptr3;
    size_t result;
    void* ptr4;
    void* ptr5;
    int* ptr6;
    int* ptr7;
    FILE* _Stream1;
    int v1;
    int v2 = v1;
    unsigned char* _Dst = (unsigned char*)_Buffer;
    void* ptr8 = (void*)_BufferSize;
    if(_ElementSize && _ElementCount) {
        if(!_Buffer) {
            int* ptr9 = _errno();
            ptr9[0] = 22;
            _invalid_parameter_noinfo();
            return 0;
        }
        _Stream1 = _Stream;
        if(!_Stream1 || 0xffffffff / _ElementSize < _ElementCount) {
            if(_BufferSize != -1) {
                memset(_Buffer, 0, _BufferSize);
            }
            if(_Stream1 && 0xffffffff / _ElementSize >= _ElementCount) {
                goto loc_402765;
            }
            else {
                int* ptr9 = _errno();
                ptr9[0] = 22;
                _invalid_parameter_noinfo();
                return 0;
            }
        }
        else {
        loc_402765:
            ptr7 = (int*)(_ElementSize * _ElementCount);
            ptr6 = (int*)(_ElementSize * _ElementCount);
            ptr5 = (int*)((int)_Stream1[3]._Placeholder & 0x10c) != 0 ? _Stream1[6]._Placeholder: (void*)0x1000;
            ptr4 = (int*)((int)_Stream1[3]._Placeholder & 0x10c) != 0 ? _Stream1[6]._Placeholder: (void*)0x1000;
        }
        if(ptr7) {
        loc_40278F:
            do {
                if((int*)((int)_Stream1[3]._Placeholder & 0x10c)) {
                    int* ptr10 = (int*)_Stream1[1]._Placeholder;
                    int* ptr11 = (int*)_Stream1[1]._Placeholder;
                    if(ptr10) {
                        if((int)ptr10 < 0) {
                            _Stream1[3]._Placeholder = (void*)((int)_Stream1[3]._Placeholder | 0x20);
                            return (size_t)((int)(unsigned int)(int*)((int)ptr7 - (int)ptr6) / _ElementSize);
                        }
                        if(ptr10 > ptr6) {
                            ptr10 = ptr6;
                            ptr11 = ptr6;
                        }
                        if((unsigned int)ptr10 > (unsigned int)ptr8) {
                            goto loc_402877;
                        }
                        else {
                            memcpy_s(_Dst, (size_t)ptr8, _Stream1->_Placeholder, ptr10);
                            ptr3 = ptr11;
                            _Stream1[1]._Placeholder = (void*)((int)_Stream1[1]._Placeholder - (int)ptr3);
                            ptr6 = (int*)((int)ptr6 - (int)ptr3);
                            _Stream1->_Placeholder += (int)ptr3;
                            _Dst = (unsigned char*)((int)ptr3 + (int)_Dst);
                            ptr8 = (void*)((int)ptr8 - (int)ptr3);
                            ptr5 = ptr4;
                            goto loc_402865;
                        }
                    }
                }
                if((unsigned int)ptr5 <= (unsigned int)ptr6) {
                    if(ptr5) {
                        if((unsigned int)ptr6 > 0x7fffffff) {
                            ptr2 = (int*)(0x7fffffff % (int)(unsigned int)ptr5);
                            ptr1 = (int*)0x7FFFFFFF;
                        }
                        else {
                            ptr2 = (int*)((int)(unsigned int)ptr6 % (int)(unsigned int)ptr5);
                            ptr1 = ptr6;
                        }
                        ptr0 = (int*)((int)ptr1 - (int)ptr2);
                    }
                    else {
                        ptr0 = (unsigned int)ptr6 > 0x7fffffff ? (int*)0x7FFFFFFF: ptr6;
                    }
                    if((unsigned int)ptr0 > (unsigned int)ptr8) {
                        goto loc_402877;
                    }
                    else {
                        void* ptr12 = ptr0;
                        unsigned char* ptr13 = _Dst;
                        int v3 = _fileno(_Stream1);
                        ptr3 = (int*)_read_nolock(v3, (int)ptr13, (int)ptr12);
                        if(!ptr3) {
                            _Stream1[3]._Placeholder = (void*)((int)_Stream1[3]._Placeholder | 0x10);
                        }
                        else if(ptr3 != -1) {
                            ptr6 = (int*)((int)ptr6 - (int)ptr3);
                            _Dst = (unsigned char*)((int)ptr3 + (int)_Dst);
                            ptr8 = (void*)((int)ptr8 - (int)ptr3);
                            ptr5 = ptr4;
                            goto loc_402865;
                        }
                        else {
                            _Stream1[3]._Placeholder = (void*)((int)_Stream1[3]._Placeholder | 0x20);
                        }
                        return (size_t)((int)(unsigned int)(int*)((int)ptr7 - (int)ptr6) / _ElementSize);
                    }
                }
                else {
                    v0 = _filbuf((int*)_Stream1);
                }
                if(v0 == -1) {
                    return (size_t)((int)(unsigned int)(int*)((int)ptr7 - (int)ptr6) / _ElementSize);
                }
                else if(ptr8) {
                    _Dst[0] = (unsigned char)v0;
                    ptr6 = (int*)((char*)ptr6 - 1);
                    ++_Dst;
                    ptr8 = (void*)((int)ptr8 - 1);
                    ptr5 = _Stream1[6]._Placeholder;
                    ptr4 = _Stream1[6]._Placeholder;
                loc_402865:
                    if(ptr6) {
                        goto loc_40278F;
                    }
                    else {
                        break;
                    }
                }
                else {
                loc_402877:
                    if(_BufferSize != -1) {
                        memset(_Buffer, 0, _BufferSize);
                    }
                    int* ptr14 = _errno();
                    ptr14[0] = 34;
                }
                _invalid_parameter_noinfo();
                return 0;
            }
            while(1);
        }
        result = _ElementCount;
    }
    else {
        result = 0;
    }
    return result;
}

int _free_osfhnd(unsigned int param0) {
    int result;
    DWORD nStdHandle;
    if(param0 < 0x80000000 && gvar_419FF8 > param0) {
        unsigned int v0 = *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0);
        if(!(*(char*)((param0 & 0x1f) * 64 + v0 + 4) & 0x1) || *(int*)((param0 & 0x1f) * 64 + v0) == -1) {
            int* ptr0 = _errno();
            ptr0[0] = 9;
            unsigned long* ptr1 = __doserrno();
            ptr1[0] = 0;
            return -1;
        }
        if(gvar_419308 == 1) {
            if(!param0) {
                nStdHandle = 0xfffffff6;
            loc_409C55:
                SetStdHandle(nStdHandle, NULL);
            }
            else if(!(param0 - 1)) {
                nStdHandle = 0xfffffff5;
                goto loc_409C55;
            }
            else if(param0 == 2) {
                nStdHandle = 0xfffffff4;
                goto loc_409C55;
            }
        }
        *(int*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0)) = -1;
        result = 0;
    }
    else {
        int* ptr0 = _errno();
        ptr0[0] = 9;
        unsigned long* ptr1 = __doserrno();
        ptr1[0] = 0;
        result = -1;
    }
    return result;
}

int _freebuf(int* param0) {
    int result;
    int* ptr0 = param0;
    if((*(char*)(ptr0 + 3) & 0x83) && (*(char*)(ptr0 + 3) & 0x8)) {
        free(*(void**)(ptr0 + 2));
        *(ptr0 + 3) = *(ptr0 + 3) & 0xfffffbf7;
        result = 0;
        *ptr0 = 0;
        *(ptr0 + 2) = 0;
        *(ptr0 + 1) = 0;
    }
    return result;
}

int _freefls(void* param0) {
    int result;
    int v0;
    int v1;
    int v2 = &gvar_4177C8;
    int v3 = v1;
    void* _Block1 = param0;
    if(_Block1) {
        if(*(int*)((int)_Block1 + 36)) {
            free(*(void**)((int)_Block1 + 36));
        }
        if(*(int*)((int)_Block1 + 44)) {
            free(*(void**)((int)_Block1 + 44));
        }
        if(*(int*)((int)_Block1 + 52)) {
            free(*(void**)((int)_Block1 + 52));
        }
        if(*(int*)((int)_Block1 + 60)) {
            free(*(void**)((int)_Block1 + 60));
        }
        if(*(int*)((int)_Block1 + 64)) {
            free(*(void**)((int)_Block1 + 64));
        }
        if(*(int*)((int)_Block1 + 68)) {
            free(*(void**)((int)_Block1 + 68));
        }
        if(*(int*)((int)_Block1 + 72)) {
            free(*(void**)((int)_Block1 + 72));
        }
        if(*(int*)((int)_Block1 + 92) != &gvar_411C00) {
            free(*(void**)((int)_Block1 + 92));
        }
        _lock(13);
        v2 = 0;  // __try{ (see __finally:4076E7h)
        void* _Block = *(void**)((int)_Block1 + 104);
        if(_Block) {
            *(int*)_Block = *(int*)_Block - 1;
            if(!*(int*)_Block && _Block != &gvar_418750) {
                free(_Block);
            }
        }
        sub_4076EA();
        _lock(12);
        v2 = 1;  // __try{ (see __finally:4076F3h)
        int* ptr0 = *(int**)((int)_Block1 + 108);
        if(ptr0) {
            __removelocaleref(ptr0);
            if(gvar_418BDC != ptr0 && ptr0 != &gvar_418BE0 && !ptr0[0]) {
                __freetlocinfo(ptr0);
            }
        }
        v2 = -2;  // } (starts at 40769Bh)
        result = sub_4076F6();
        free(_Block1);
    }
    *(int*)__FS_BASE = v0;
    return result;
}

int _fseek_nolock(FILE* _Stream, long _Offset, int _Origin) {
    long v0;
    int result;
    void* ptr0;
    FILE* _Stream1 = _Stream;
    void* ptr1 = _Stream1[3]._Placeholder;
    if(!((unsigned char)ptr1 & 0x83)) {
        int* ptr2 = _errno();
        ptr2[0] = 22;
        result = -1;
    }
    else {
        void* ptr3 = ptr0;
        int v1 = _Origin;
        _Stream1[3]._Placeholder = (void*)((int)ptr1 & 0xffffffef);
        if(v1 == 1) {
            long v2 = _ftell_nolock(_Stream1);
            v0 = v2 + _Offset;
            v1 = 0;
        }
        else {
            v0 = _Offset;
        }
        _flush(_Stream1);
        void* ptr4 = _Stream1[3]._Placeholder;
        if((unsigned char)ptr4 < 0) {
            _Stream1[3]._Placeholder = (void*)((int)ptr4 & 0xfffffffc);
        }
        else if(((unsigned char)ptr4 & 0x1) && ((unsigned char)ptr4 & 0x8) && !(int*)((int)ptr4 & 0x400)) {
            _Stream1[6]._Placeholder = (void*)0x200;
        }
        DWORD dwMoveMethod = (DWORD)v1;
        int v3 = (int)v0;
        int v4 = _fileno(_Stream1);
        int* ptr5 = _lseek((unsigned int)v4, v3, dwMoveMethod);
        result = (ptr5 == -1 ? 0: 1) - 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
FILE* _fsopen(char* _FileName, char* _Mode, int _ShFlag) {
    FILE* result;
    int v0;
    int v1;
    int v2 = &gvar_4175C0;
    int v3 = v1;
    int* ptr0 = NULL;
    if(!_FileName || !_Mode || _Mode[0] == 0) {
        int* ptr1 = _errno();
        ptr1[0] = 22;
        _invalid_parameter_noinfo();
    loc_401DE3:
        result = NULL;
    }
    else {
        int* ptr2 = (int*)_getstream();
        if(!ptr2) {
            int* ptr3 = _errno();
            ptr3[0] = 24;
            goto loc_401DE3;
        }
        else {
            v2 = 0;  // __try{ (see __finally:401E6Bh)
            if(!_FileName[0]) {
                int* ptr4 = _errno();
                ptr4[0] = 22;
                _local_unwind4((int*)&gvar_4183F0, &v0, (int*)0xFFFFFFFE);
                goto loc_401DE3;
            }
            else {
                int* ptr5 = _openfile((int)_FileName, _Mode, _ShFlag, ptr2);
                sub_401E71();
                result = (FILE*)ptr5;
            }
        }
    }
    *(int*)__FS_BASE = v0;
    return result;
}

long _ftell_nolock(FILE* _Stream) {
    int* ptr0;
    char v0;
    void* ptr1;
    int v1;
    int v2;
    int v3;
    long result;
    int v4;
    _chkstk(v2);
    int v5 = v4;
    FILE* _Stream1 = _Stream;
    FILE* ptr2 = _Stream1;
    if(!_Stream1) {
        int* ptr3 = _errno();
        ptr3[0] = 22;
        _invalid_parameter_noinfo();
    }
    else {
        void* ptr4 = ptr1;
        unsigned int v6 = (unsigned int)_fileno(_Stream1);
        unsigned int v7 = v6;
        if((int)_Stream1[1]._Placeholder < 0) {
            _Stream1[1]._Placeholder = NULL;
        }
        int* ptr5 = _lseek(v6, 0, 1);
        int v8 = (int)ptr5;
        if((int)ptr5 >= 0) {
            int v9 = v6 >> 5;
            int* ptr6 = (int*)((v6 & 0x1f) * 64);
            int v10 = v9;
            int* ptr7 = ptr6;
            void* i = *(void**)(v9 * 4 + (int)&gvar_4191D0);
            void* ptr8 = _Stream1[3]._Placeholder;
            void* ptr9 = ptr8;
            i = (unsigned int)((*(char*)((int*)((int)ptr6 + (int)i) + 9) * 2) >> 1) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
            char v11 = (unsigned char)i;
            if((int*)((int)ptr8 & 0x108)) {
                FILE v12 = _Stream1->_Placeholder;
                void* ptr10 = _Stream1[2]._Placeholder;
                char v13 = (unsigned char)ptr9 & 0x3 ? 0: 1;
                int* ptr11 = (int*)(v12 - (int)ptr10);
                if(!v13) {
                    if((unsigned char)i != 1) {
                    loc_40229D:
                        int* ptr12 = ptr11;
                        if((*(char*)((int*)(*(unsigned int*)(v10 * 4 + (int)&gvar_4191D0) + (int)ptr6) + 1) & 0x80)) {
                            for(i = ptr10; (unsigned int)i < v12; i = (void*)((int)i + 1)) {
                                if(*(char*)i == 10) {
                                    ptr12 = (int*)((char*)ptr12 + 1);
                                }
                            }
                        }
                        goto loc_4022CB;
                    }
                    else {
                        int* ptr13 = ptr11;
                        if(*((int*)(*(unsigned int*)(v10 * 4 + (int)&gvar_4191D0) + (int)ptr6) + 12) == 0) {
                            goto loc_40229D;
                        }
                        else {
                            ptr0 = (int*)((int)ptr13 >>> 1);
                        }
                    }
                    if(ptr2[1]._Placeholder != 0) {
                        unsigned int v14 = *(unsigned int*)(v10 * 4 + (int)&gvar_4191D0);
                        int v15 = _lseeki64(v7, *((int*)(v14 + (int)ptr6) + 10), *((int*)(v14 + (int)ptr6) + 11), NULL);
                        int* ptr14 = ptr7;
                        ptr5 = *(int**)(v10 * 4 + (int)&gvar_4191D0);
                        if(*((int*)((int)ptr5 + (int)ptr14) + 10) == v15 && *((int*)((int)ptr5 + (int)ptr14) + 11) == v1) {
                            ptr5 = (int*)ReadFile(*(HANDLE*)((int)ptr5 + (int)ptr14), &v0, 0x1000, &ptr10, NULL);
                            if(ptr5) {
                                ptr5 = _lseek(v7, v8, 0);
                                if((int)ptr5 >= 0) {
                                    ptr5 = (int*)ptr10;
                                    if(ptr5 >= ptr0) {
                                        LPVOID v16 = &v0;
                                        if(ptr0) {
                                            int* ptr15 = (int*)((int)ptr5 + (int)&v0);
                                            do {
                                                ptr0 = (int*)((char*)ptr0 - 1);
                                                if((unsigned int)v16 >= (unsigned int)ptr15) {
                                                    break;
                                                }
                                                else {
                                                    ptr5 = (unsigned int)*(char*)v16 | ((unsigned int)(int*)((int)(int*)((int)ptr5 >>> 8) & 0xffffff) << 8);
                                                    if((unsigned char)ptr5 == 13) {
                                                        ptr5 = (int*)((char*)ptr15 - 1);
                                                        if((unsigned int)ptr5 > (unsigned int)v16) {
                                                            ptr5 = (int*)((int)v16 + 1);
                                                            if(*(char*)&ptr5[0] == 10) {
                                                                v16 = ptr5;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        ptr5 = (int*)*(char*)((unsigned int)(int*)(ptr5 & 0xFF) + 0x418400);
                                                        v16 = (LPVOID)((int)ptr5 + (int)v16);
                                                    }
                                                    v16 = (LPVOID)((int)v16 + 1);
                                                }
                                            }
                                            while(ptr0);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else if(!((unsigned char)ptr9 & 0x80)) {
                    ptr5 = _errno();
                    ptr5[0] = 22;
                }
                else {
                loc_4022CB:
                    if(v8 && ((unsigned char)ptr9 & 0x1)) {
                        FILE* ptr16 = ptr2;
                        if(ptr16[1]._Placeholder != 0) {
                            int* ptr17 = (int*)((int)(int*)(v12 - (int)ptr16[2]._Placeholder) + (int)ptr16[1]._Placeholder);
                            int v17 = (int)NULL;
                            if((*(char*)((int*)(*(unsigned int*)(v10 * 4 + (int)&gvar_4191D0) + (int)ptr6) + 1) & 0x80)) {
                                int* ptr18 = _lseek(v7, 0, 2);
                                int v18 = v8;
                                if(ptr18 == v18) {
                                    i = ptr2;
                                    int* ptr19 = (int*)(*(int*)((int)i + 8) + (int)ptr17);
                                    int* ptr20 = (int*)((int)(int*)((int)ptr19 - *(int*)((int)i + 8)) & ~(*(unsigned int*)((int)i + 8) > (unsigned int)ptr19 ? -1: 0));
                                    ptr7 = ptr20;
                                    if(ptr20 != 0) {
                                        char* ptr21 = *(unsigned int*)((int)i + 8);
                                        int* ptr22 = ptr7;
                                        do {
                                            if(*ptr21 == 10) {
                                                ptr17 = (int*)((char*)ptr17 + 1);
                                            }
                                            ++ptr21;
                                            ++v17;
                                        }
                                        while((unsigned int)ptr22 > (unsigned int)v17);
                                    }
                                }
                                else {
                                    _lseek(v7, v18, 0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __security_check_cookie((uintptr_t)((int)&v3 ^ v5));
    return result;
}

size_t _fwrite_nolock(void* _Buffer, size_t _ElementSize, size_t _ElementCount, FILE* _Stream) {
    size_t result;
    size_t result;
    size_t v0;
    int* ptr0;
    int* ptr1;
    int v1;
    size_t v2;
    size_t v3 = v2;
    int* ptr2 = (int*)v2;
    int v4 = v1;
    if(_ElementSize && _ElementCount) {
        FILE* _Stream1 = _Stream;
        if(!_Stream1 || !_Buffer || 0xffffffff / _ElementSize < _ElementCount) {
            int* ptr3 = _errno();
            ptr3[0] = 22;
            _invalid_parameter_noinfo();
            return 0;
        }
        ptr1 = (int*)(_ElementSize * _ElementCount);
        ptr0 = (int*)(_ElementSize * _ElementCount);
        v0 = (size_t)((int*)((int)_Stream1[3]._Placeholder & 0x10c) != 0 ? _Stream1[6]._Placeholder: (void*)0x1000);
        v3 = (size_t)((int*)((int)_Stream1[3]._Placeholder & 0x10c) != 0 ? _Stream1[6]._Placeholder: (void*)0x1000);
        if(ptr1) {
        loc_4024EE:
            do {
                size_t v5 = (size_t)((int)_Stream1[3]._Placeholder & 0x108);
                if(v5) {
                    int* ptr4 = (int*)_Stream1[1]._Placeholder;
                    ptr2 = (int*)_Stream1[1]._Placeholder;
                    if(ptr4) {
                        if((int)ptr4 < 0) {
                            goto loc_4025C6;
                        }
                        else {
                            if(ptr4 > ptr0) {
                                ptr4 = ptr0;
                                ptr2 = ptr0;
                            }
                            unk_lib_sub2(_Stream1->_Placeholder, (unsigned char*)_Buffer, ptr4);
                            _Stream1[1]._Placeholder = (void*)((int)_Stream1[1]._Placeholder - (int)ptr2);
                            ptr0 = (int*)((int)ptr0 - (int)ptr2);
                            _Stream1->_Placeholder += (int)ptr2;
                            _Buffer = (void*)((int)ptr2 + (int)_Buffer);
                            v0 = v3;
                            goto loc_4025B8;
                        }
                    }
                }
                if(v0 <= (unsigned int)ptr0) {
                    if(v5) {
                        int v6 = _flush(_Stream1);
                        if(v6) {
                            return (size_t)((int)(unsigned int)(int*)((int)ptr1 - (int)ptr0) / _ElementSize);
                        }
                        v0 = v3;
                    }
                    int* ptr5 = ptr0;
                    if(v0) {
                        ptr5 = (int*)((int)ptr0 - (int)(int*)((int)(unsigned int)ptr5 % v0));
                        ptr2 = ptr5;
                    }
                    else {
                        ptr2 = ptr0;
                    }
                    void* ptr6 = ptr5;
                    int v7 = (int)_Buffer;
                    int v8 = _fileno(_Stream1);
                    int v9 = _write(v8, v7, (int)ptr6);
                    if(v9 != -1) {
                        v5 = (size_t)ptr2;
                        if((unsigned int)v9 <= (unsigned int)ptr2) {
                            v5 = (size_t)v9;
                        }
                        _Buffer = (void*)(v5 + (int)_Buffer);
                        ptr0 = (int*)((int)ptr0 - v5);
                        if((unsigned int)v9 >= (unsigned int)ptr2) {
                            v0 = v3;
                            goto loc_4025B8;
                        }
                    }
                loc_4025C6:
                    _Stream1[3]._Placeholder = (void*)((int)_Stream1[3]._Placeholder | 0x20);
                }
                else {
                    int v10 = _flsbuf((int)*(char*)_Buffer, _Stream1);
                    if(v10 != -1) {
                        _Buffer = (void*)((int)_Buffer + 1);
                        ptr0 = (int*)((char*)ptr0 - 1);
                        v0 = (size_t)_Stream1[6]._Placeholder;
                        v3 = (size_t)_Stream1[6]._Placeholder;
                        if((int)v0 <= 0) {
                            v0 = 1;
                            v3 = 1;
                        }
                    loc_4025B8:
                        if(ptr0) {
                            goto loc_4024EE;
                        }
                        else {
                            return _ElementCount;
                        }
                    }
                }
                return (size_t)((int)(unsigned int)(int*)((int)ptr1 - (int)ptr0) / _ElementSize);
            }
            while(1);
        }
        else {
            return _ElementCount;
        }
    }
    else {
        result = 0;
    }
    return result;
}

unsigned int _get_errno_from_oserr(unsigned int param0) {
    unsigned int v0 = 0;
    while(*(unsigned int*)(v0 * 8 + (int)&gvar_418000) != param0) {
        ++v0;
        if(v0 >= 45) {
            if(param0 - 19 <= 17) {
                return 13;
            }
            return (unsigned int)(((param0 - 188 > 14 ? -1: 0) & 0xe) + 8);
        }
    }
    return *(unsigned int*)(v0 * 8 + (int)&gvar_418004);
}

int _get_osfhandle(unsigned int param0) {
    if(param0 == -2) {
        unsigned long* ptr0 = __doserrno();
        ptr0[0] = 0;
        int* ptr1 = _errno();
        ptr1[0] = 9;
    }
    else {
        if(param0 < 0x80000000 && gvar_419FF8 > param0) {
            unsigned int v0 = *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0);
            if((*(char*)((param0 & 0x1f) * 64 + v0 + 4) & 0x1)) {
                return *(int*)((param0 & 0x1f) * 64 + v0);
            }
        }
        unsigned long* ptr2 = __doserrno();
        ptr2[0] = 0;
        int* ptr3 = _errno();
        ptr3[0] = 9;
        _invalid_parameter_noinfo();
    }
    return -1;
}

int _getbuf(int* param0) {
    ++gvar_4191CC;
    void* ptr0 = _malloc_crt(0x1000);
    int* ptr1 = param0;
    *(void**)(ptr1 + 2) = ptr0;
    if(ptr0) {
        *(ptr1 + 3) = *(ptr1 + 3) | 0x8;
        *(ptr1 + 6) = 0x1000;
    }
    else {
        *(ptr1 + 3) = *(ptr1 + 3) | 0x4;
        *(unsigned int*)(ptr1 + 2) = ptr1 + 5;
        *(ptr1 + 6) = 2;
    }
    int result = *(ptr1 + 2);
    *(ptr1 + 1) = 0;
    *ptr1 = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _getptd() {
    int result = _getptd_noexit();
    if(!result) {
        /*NO_RETURN*/ _amsg_exit(16);
    }
    return result;
}

LPVOID _getptd_noexit() {
    DWORD dwErrCode = GetLastError();
    LPVOID lpTlsValue = __crtFlsGetValue(gvar_418540);
    if(!lpTlsValue) {
        lpTlsValue = (LPVOID)sub_408F5B(1, 956);
        if(lpTlsValue) {
            BOOL v0 = __crtFlsSetValue(gvar_418540, lpTlsValue);
            if(v0) {
                _initptd((int)lpTlsValue, 0);
                DWORD v1 = GetCurrentThreadId();
                *(int*)((int)lpTlsValue + 4) = -1;
                *(DWORD*)lpTlsValue = v1;
            }
            else {
                free(lpTlsValue);
                lpTlsValue = NULL;
            }
        }
    }
    SetLastError(dwErrCode);
    return lpTlsValue;
}

int _getstream() {
    int v0;
    int result = 0;
    int v1 = 0;
    _lock(1);
    int v2 = 0;  // __try{ (see __finally:404303h)
    int v3 = 0;
    while(gvar_41B004 > v3) {
        int v4 = *(int*)(v3 * 4 + gvar_41B000);
        if(!v4) {
            void* ptr0 = _malloc_crt(56);
            *(void**)(v3 * 4 + gvar_41B000) = ptr0;
            if(ptr0) {
                __crtInitializeCriticalSectionEx((LPCRITICAL_SECTION)(*(int*)(v3 * 4 + gvar_41B000) + 32), 4000, 0);
                EnterCriticalSection((LPCRITICAL_SECTION)(*(int*)(v3 * 4 + gvar_41B000) + 32));
                result = *(int*)(v3 * 4 + gvar_41B000);
                *(int*)(result + 12) = 0;
            }
            break;
        }
        else if(!(*(char*)(v4 + 12) & 0x83) && !(*(int*)(v4 + 12) & 0x8000)) {
            if((unsigned int)(v3 - 3) <= 16) {
                int v5 = _mtinitlocknum(v3 + 16);
                if(!v5) {
                    break;
                }
            }
            _lock_file2(v3, *(int*)(v3 * 4 + gvar_41B000));
            int v6 = *(int*)(v3 * 4 + gvar_41B000);
            if((*(char*)(v6 + 12) & 0x83)) {
                _unlock_file2(v3, v6);
                goto loc_40427B;
            }
            else {
                result = v6;
                break;
            }
        }
        else {
        loc_40427B:
            ++v3;
        }
    }
    if(result) {
        *(int*)(result + 12) = *(int*)(result + 12) & 0x8000;
        *(int*)(result + 4) = 0;
        *(int*)(result + 8) = 0;
        *(int*)result = 0;
        *(int*)(result + 28) = 0;
        *(int*)(result + 16) = -1;
    }
    sub_404306();
    *(int*)__FS_BASE = v0;
    return result;
}

int _global_unwind2(PVOID TargetFrame) {
    int v0;
    int result;
    int* ptr0 = &v0;
    →KERNEL32.dll!RtlUnwind(TargetFrame, (PVOID)&loc_4098A8, NULL, NULL);
    return result;
}

int _heap_init() {
    HANDLE v0 = GetProcessHeap();
    gvar_41993C = v0;
    return v0 ? 1: 0;
}

int _hextodec(char param0) {
    int v0 = isdigit((int)param0);
    int result = (int)param0;
    if(!v0) {
        result = (result & 0xffffffdf) - 7;
    }
    return result;
}

int _hw_cw(int param0) {
    int result = !((unsigned char)param0 & 0x10) ? 0: 1;
    if(((unsigned char)param0 & 0x8)) {
        result |= 4;
    }
    if(((unsigned char)param0 & 0x4)) {
        result |= 8;
    }
    if(((unsigned char)param0 & 0x2)) {
        result |= 16;
    }
    if(((unsigned char)param0 & 0x1)) {
        result |= 32;
    }
    if((param0 & 0x80000)) {
        result |= 2;
    }
    if((param0 & 0x300)) {
        switch(param0 & 0x300) {
            case 256: {
                result |= 0x400;
                break;
            }
            case 512: {
                result |= 0x800;
                break;
            }
            case 768: {
                result |= 0xc00;
                break;
            }
        }
    }
    if(!(param0 & 0x30000)) {
        result |= 0x300;
    }
    else if((param0 & 0x30000) == 0x10000) {
        result |= 0x200;
    }
    if((param0 & 0x40000)) {
        result |= 0x1000;
    }
    return result;
}

PVOID _initp_misc_cfltcvt_tab() {
    PVOID result;
    unsigned int v0 = 0;
    do {
        result = EncodePointer(*(PVOID*)((int)&gvar_418C9C + v0));
        *(PVOID*)((int)&gvar_418C9C + v0) = result;
        v0 += 4;
    }
    while(v0 < 40);
    return result;
}

unsigned int _initp_misc_winsig(unsigned int param0) {
    gvar_419EF8 = param0;
    gvar_419EFC = param0;
    gvar_419F00 = param0;
    gvar_419F04 = param0;
    return param0;
}

int _initptd(int param0, int param1) {
    int v0;
    int v1 = param0;
    *(int*)(v1 + 92) = &gvar_411C00;
    *(int*)(v1 + 8) = 0;
    *(int*)(v1 + 20) = 1;
    *(int*)(v1 + 112) = 1;
    *(short*)(v1 + 184) = 67;
    *(short*)(v1 + 446) = 67;
    *(int*)(v1 + 104) = &gvar_418750;
    *(int*)(v1 + 952) = 0;
    _lock(13);
    int v2 = 0;  // __try{ (see __finally:407821h)
    int* ptr0 = *(unsigned int*)(v1 + 104);
    *ptr0 = *ptr0 + 1;
    sub_407827();
    _lock(12);
    v2 = 1;  // __try{ (see __finally:407830h)
    *(int*)(v1 + 108) = param1;
    if(!param1) {
        *(unsigned int*)(v1 + 108) = gvar_418BDC;
    }
    __addlocaleref(*(int**)(v1 + 108));
    int result = sub_407830();
    *(int*)__FS_BASE = v0;
    return result;
}

void _initterm(_PVFV* _First, _PVFV* _Last) {
    int v0;
    int v1 = v0;
    _PVFV* ptr0 = _First;
    unsigned int v2 = 0;
    int* ptr1 = (int*)(~(ptr0 > _Last ? -1: 0) & (int)(int*)((int)(int*)((char*)((int)_Last - (int)ptr0) + 3) >>> 2));
    if(ptr1 != 0) {
        do {
            _PVFV v3 = ptr0[0];
            if(v3) {
                v3();
            }
            ++ptr0;
            ++v2;
        }
        while(v2 < (unsigned int)ptr1);
    }
}

int _initterm_e(_PIFV* _First, _PIFV* _Last) {
    _PIFV* ptr0 = _First;
    int result = 0;
    while(ptr0 < _Last && !result) {
        _PIFV v0 = ptr0[0];
        if(v0) {
            result = v0();
        }
        ++ptr0;
    }
    return result;
}

void sub_402E75() {
    // Decompilation error
}

int _invalid_parameter(wchar_t* _Expression, wchar_t* _FunctionName, wchar_t* _FileName, unsigned int _LineNo, uintptr_t _Reserved) {
    PVOID v0 = DecodePointer(gvar_4191C8);
    if(v0) {
        jump v0;
    }
    /*NO_RETURN*/ _invoke_watson(_Expression, _FunctionName, _FileName, _LineNo, _Reserved);
}

// Stale decompilation - Refresh this view to re-decompile this code
void _invalid_parameter_noinfo() {
    _invalid_parameter(0, 0, 0, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
void _invoke_watson(wchar_t* _Expression, wchar_t* _FunctionName, wchar_t* _FileName, unsigned int _LineNo, uintptr_t _Reserved) {
    BOOL v0 = →KERNEL32.dll!IsProcessorFeaturePresent(23);
    if(v0) {
        41 = int(41);
    }
    _call_reportfault(2, 0xc0000417, 1);
    __crtTerminateProcess(0xc0000417);
}

int _ioinit() {
    int v0;
    int v1;
    HANDLE v2;
    int result;
    int v3;
    int v4;
    int* ptr0;
    short v5;
    _lock(11);
    int v6 = 0;  // __try{ (see __finally:405ADBh)
    unsigned int v7 = sub_408F5B(32, 64);
    unsigned int v8 = v7;
    unsigned int v9 = v7;
    if(!v8) {
        _local_unwind4((int*)&gvar_4183F0, &v4, (int*)0xFFFFFFFE);
        result = -1;
    }
    else {
        gvar_4191D0 = v7;
        gvar_419FF8 = 32;
        while(v7 + 0x800 > v8) {
            *(short*)(v8 + 4) = 0xa00;
            *(int*)v8 = -1;
            *(int*)(v8 + 8) = 0;
            *(char*)(v8 + 36) = *(char*)(v8 + 36) & 0x80;
            *(char*)(v8 + 36) = *(char*)(v8 + 36) & 0x7f;
            *(short*)(v8 + 37) = 0xa0a;
            *(int*)(v8 + 56) = 0;
            *(char*)(v8 + 52) = 0;
            v8 += 64;
            v9 = v8;
            v7 = gvar_4191D0;
        }
        GetStartupInfoW(&v3);
        if(v5 && ptr0) {
            HANDLE v10 = *ptr0;
            v2 = *ptr0;
            char* ptr1 = (char*)(ptr0 + 1);
            unsigned int* ptr2 = (unsigned int*)((int*)((int)v10 + (int)ptr0) + 1);
            if((int)v10 >= 0x800) {
                v10 = (HANDLE)0x800;
                v2 = (HANDLE)0x800;
            }
            int v11 = 1;
            int v12 = 1;
            while(gvar_419FF8 < (int)v10) {
                unsigned int v13 = sub_408F5B(32, 64);
                v9 = v13;
                if(!v13) {
                    v10 = gvar_419FF8;
                    v2 = gvar_419FF8;
                loc_40592B:
                    int v14 = 0;
                    int v15 = 0;
                    v1 = -2;
                    char* ptr3 = ptr1;
                    unsigned int* ptr4 = ptr2;
                    while((int)v10 > v14) {
                        HANDLE hFile = *ptr4;
                        if(hFile != -1 && hFile != -2) {
                            ptr3 = (unsigned int)*ptr3 | ((unsigned int)(int*)((int)(int*)((int)ptr3 >>> 8) & 0xffffff) << 8);
                            if(((unsigned char)ptr3 & 0x1)) {
                                if(!((unsigned char)ptr3 & 0x8)) {
                                    DWORD v16 = GetFileType(hFile);
                                    ptr4 = ptr2;
                                    if(v16) {
                                        goto loc_405971;
                                    }
                                }
                                else {
                                loc_405971:
                                    unsigned int v17 = (unsigned int)((v14 & 0x1f) * 64 + *(unsigned int*)((v14 >> 5) * 4 + (int)&gvar_4191D0));
                                    *(int*)v17 = *ptr4;
                                    *(char*)(v17 + 4) = *ptr1;
                                    __crtInitializeCriticalSectionEx((LPCRITICAL_SECTION)(v17 + 12), 4000, 0);
                                    *(int*)(v17 + 8) = *(int*)(v17 + 8) + 1;
                                    ptr4 = ptr2;
                                }
                                v10 = v2;
                            }
                        }
                        ++v14;
                        ptr3 = ptr1 + 1;
                        ++ptr1;
                        ++ptr4;
                        ptr2 = ptr4;
                    }
                    goto loc_405A06;
                }
                else {
                    *(unsigned int*)(v11 * 4 + (int)&gvar_4191D0) = v13;
                    gvar_419FF8 += 32;
                    while(*(unsigned int*)(v11 * 4 + (int)&gvar_4191D0) + 0x800 > v13) {
                        *(short*)(v13 + 4) = 0xa00;
                        *(int*)v13 = -1;
                        *(int*)(v13 + 8) = 0;
                        *(char*)(v13 + 36) = *(char*)(v13 + 36) & 0x80;
                        *(short*)(v13 + 37) = 0xa0a;
                        *(int*)(v13 + 56) = 0;
                        *(char*)(v13 + 52) = 0;
                        v13 += 64;
                        v9 = v13;
                    }
                    ++v11;
                    v10 = v2;
                }
            }
            goto loc_40592B;
        }
        else {
            v1 = -2;
        }
    loc_405A06:
        for(int i = 0; i < 3; ++i) {
            unsigned int v18 = (unsigned int)(i * 64 + gvar_4191D0);
            if(*(int*)v18 != -1 && *(int*)v18 != -2) {
                *(char*)(v18 + 4) = *(char*)(v18 + 4) | 0x80;
            }
            else {
                *(char*)(v18 + 4) = 129;
                HANDLE hFile1 = GetStdHandle(!i ? 0xfffffff6: (unsigned int)(i - 1) > 0 ? 0xfffffff4: 0xfffffff5);
                v2 = hFile1;
                if(hFile1 != -1 && hFile1) {
                    DWORD v19 = GetFileType(hFile1);
                    if(!v19) {
                        goto loc_405AB1;
                    }
                    else {
                        *(HANDLE*)v18 = v2;
                        if((unsigned int)(unsigned char)v19 == 2) {
                            v0 = (unsigned int)(*(char*)(v18 + 4) | 0x40) | ((unsigned int)(*(char*)(v18 + 4) < 0 ? 0xffffff: 0) << 8);
                            goto loc_405A90;
                        }
                        else if((unsigned int)(unsigned char)v19 == 3) {
                            v0 = (unsigned int)(*(char*)(v18 + 4) | 0x8) | ((unsigned int)(*(char*)(v18 + 4) < 0 ? 0xffffff: 0) << 8);
                        loc_405A90:
                            *(char*)(v18 + 4) = (unsigned char)v0;
                        }
                        __crtInitializeCriticalSectionEx((LPCRITICAL_SECTION)(v18 + 12), 4000, 0);
                        *(int*)(v18 + 8) = *(int*)(v18 + 8) + 1;
                    }
                }
                else {
                loc_405AB1:
                    *(char*)(v18 + 4) = *(char*)(v18 + 4) | 0x40;
                    *(int*)v18 = -2;
                    unsigned int v20 = gvar_41B000;
                    if(v20) {
                        *(int*)(*(int*)(i * 4 + v20) + 16) = -2;
                    }
                }
            }
        }
        sub_405ADB();
        result = 0;
    }
    *(int*)__FS_BASE = v4;
    return result;
}

int _isatty(unsigned int param0) {
    if(param0 == -2) {
        int* ptr0 = _errno();
        ptr0[0] = 9;
    }
    else if(param0 < 0x80000000 && gvar_419FF8 > param0) {
        return (int)*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x40;
    }
    else {
        int* ptr1 = _errno();
        ptr1[0] = 9;
        _invalid_parameter_noinfo();
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _isctype_l(int _C, int _Type, _locale_t _Locale) {
    int result;
    int v0;
    char v1;
    char v2;
    int v3;
    int v4;
    short v5;
    char v6;
    int v7;
    _LocaleUpdate::_LocaleUpdate(&v4, (int*)_Locale);
    int v8 = _C;
    if((unsigned int)(v8 + 1) <= 0x100) {
        v3 = (unsigned int)*(short*)(v8 * 2 + *(int*)(v4 + 144));
        goto loc_40B3F8;
    }
    else {
        int v9 = v8 >> 8;
        _C = v9;
        int v10 = _isleadbyte_l((int)(v9 & 0xFF), (_locale_t)&v4);
        if(v10) {
            int v11 = _C;
            int v12 = 2;
            v2 = (unsigned char)v11;
            v1 = (unsigned char)v8;
            char v13 = 0;
            v0 = 2;
        }
        else {
            v2 = (unsigned char)v8;
            v1 = 0;
            v0 = 1;
        }
        int v14 = __crtGetStringTypeA((int)&v4, 1, (int)&v2, v0, (int)&v5, *(int*)(v4 + 4), 1);
        if(!v14) {
            if(v6 != 0) {
                *(int*)(v7 + 112) = *(int*)(v7 + 112) & 0xfffffffd;
            }
            result = 0;
        }
        else {
            v3 = (unsigned int)v5;
        loc_40B3F8:
            result = v3 & _Type;
            if(v6) {
                *(int*)(v7 + 112) = *(int*)(v7 + 112) & 0xfffffffd;
            }
        }
    }
    return result;
}

int _isdigit_l(int _C, _locale_t _Locale) {
    int v0;
    char v1;
    int v2;
    _LocaleUpdate::_LocaleUpdate(&v0, (int*)_Locale);
    int result = *(int*)(v0 + 116) > 1 ? _isctype_l(_C, 4, (_locale_t)&v0): (unsigned int)*(short*)(_C * 2 + *(int*)(v0 + 144)) & 0x4;
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _isleadbyte_l(int _C, _locale_t _Locale) {
    int v0;
    char v1;
    int v2;
    _LocaleUpdate::_LocaleUpdate((int)&v0, (int)_Locale);
    int result = (unsigned int)*(short*)((unsigned int)(_C & 0xFF) * 2 + *(int*)(v0 + 144)) & 0x8000;
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

int _isspace_l(int _C, _locale_t _Locale) {
    int v0;
    char v1;
    int v2;
    _LocaleUpdate::_LocaleUpdate(&v0, (int*)_Locale);
    int result = *(int*)(v0 + 116) > 1 ? _isctype_l(_C, 8, (_locale_t)&v0): (unsigned int)*(short*)(_C * 2 + *(int*)(v0 + 144)) & 0x8;
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

int _local_unwind2(int param0, unsigned int param1) {
    int v0 = param0;
    int v1 = -2;
    int v2 = &_unwind_handler;
    int v3 = *(int*)__FS_BASE;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v3);
    *(int**)__FS_BASE = &v3;
    while(1) {
        int v4 = *(int*)(param0 + 8);
        unsigned int v5 = *(unsigned int*)(param0 + 12);
        if(v5 == -1 || (param1 != -1 && v5 <= param1)) {
            break;
        }
        else {
            int v6 = *(int*)(v5 * 12 + v4);
            v1 = *(int*)(v5 * 12 + v4);
            *(int*)(param0 + 12) = v6;
            if(!*(int*)(v5 * 12 + v4 + 4)) {
                _NLG_Notify(v6, 0x101);
                _NLG_Call();
            }
        }
    }
    *(int*)__FS_BASE = v3;
    return param0;
}

int _local_unwind4(int* param0, int param1, int* param2) {
    int* ptr0 = param0;
    int v0 = param1;
    int* ptr1 = param2;
    int v1 = &_unwind_handler4;
    int v2 = *(int*)__FS_BASE;
    int* ptr2 = (int*)(gvar_4183F0 ^ (int)&v2);
    *(int**)__FS_BASE = &v2;
    while(1) {
        int v3 = *(int*)(param1 + 8) ^ *param0;
        unsigned int v4 = *(unsigned int*)(param1 + 12);
        if(v4 == -2 || (param2 != -2 && v4 <= (unsigned int)param2)) {
            break;
        }
        else {
            int* ptr3 = (int*)(v4 * 12 + v3 + 16);
            int v5 = *ptr3;
            *(int*)(param1 + 12) = *ptr3;
            if(!*(ptr3 + 1)) {
                _NLG_Notify(v5, 0x101);
                _NLG_Call();
            }
        }
    }
    *(int*)__FS_BASE = v2;
    return param1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _lock(int param0) {
    int result;
    if(!*(unsigned int*)(param0 * 8 + (int)&gvar_418CC8)) {
        int v0 = _mtinitlocknum(param0);
        if(!v0) {
            /*NO_RETURN*/ _amsg_exit(17);
        }
    }
    EnterCriticalSection(*(LPCRITICAL_SECTION*)(param0 * 8 + (int)&gvar_418CC8));
    return result;
}

void _lock_file(FILE* _Stream) {
    if((unsigned int)_Stream >= &gvar_418170 && (unsigned int)_Stream <= 4293584) {
        _lock((int)((int*)((int)(int*)(_Stream - 0x10605c) >> 5) + 4));
        _Stream[3]._Placeholder = (void*)((int)_Stream[3]._Placeholder | 0x8000);
    }
    else {
        EnterCriticalSection((LPCRITICAL_SECTION)(_Stream + 8));
    }
}

int _lock_file2(int param0, int param1) {
    int result1;
    if(param0 < 20) {
        _lock(param0 + 16);
        int result = param1;
        *(int*)(result + 12) = *(int*)(result + 12) | 0x8000;
        return result;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param1 + 32));
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _lockexit() {
    return _lock(8);
}

// Stale decompilation - Refresh this view to re-decompile this code
int _locterm() {
    int result;
    int v0;
    if(gvar_418BDC != &gvar_418BE0) {
        _lock(12);
        int* ptr0 = _updatetlocinfoEx_nolock((unsigned int*)&gvar_418BDC, (int*)&gvar_418BE0);
        gvar_418BDC = ptr0;
        result = sub_40B456();
    }
    *(int*)__FS_BASE = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* _lseek(unsigned int param0, int param1, DWORD dwMoveMethod) {
    int* result;
    int* ptr0;
    int v0;
    if(param0 == -2) {
        unsigned long* ptr1 = __doserrno();
        ptr1[0] = 0;
        int* ptr2 = _errno();
        ptr2[0] = 9;
        goto loc_404D28;
    }
    else if((param0 >= 0x80000000 || gvar_419FF8 <= param0)) {
        unsigned long* ptr3 = __doserrno();
        ptr3[0] = 0;
    loc_404D18:
        int* ptr4 = _errno();
        ptr4[0] = 9;
        _invalid_parameter_noinfo();
    loc_404D28:
        result = (int*)0xFFFFFFFF;
    }
    else if(!((int)*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
        unsigned long* ptr5 = __doserrno();
        ptr5[0] = 0;
        goto loc_404D18;
    }
    else {
        __lock_fhandle((int)param0);
        if((*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
            ptr0 = _lseek_nolock(param0, param1, dwMoveMethod);
        }
        else {
            int* ptr6 = _errno();
            ptr6[0] = 9;
            unsigned long* ptr7 = __doserrno();
            ptr7[0] = 0;
            ptr0 = (int*)0xFFFFFFFF;
        }
        sub_404D09();
        result = ptr0;
    }
    *(int*)__FS_BASE = v0;
    return result;
}

int* _lseek_nolock(unsigned int param0, int param1, DWORD dwMoveMethod) {
    int* result;
    int v0;
    int v1;
    int v2;
    int* ptr0;
    void* ptr1;
    int v3 = _get_osfhandle(param0);
    if(v3 == -1) {
        int* ptr2 = _errno();
        ptr2[0] = 9;
        result = (int*)0xFFFFFFFF;
    }
    else {
        void* ptr3 = ptr1;
        DWORD v4 = 1;
        PLARGE_INTEGER v5 = &v2;
        int v6 = 0;
        int v7 = 0;
        BOOL v8 = SetFilePointerEx((HANDLE)v3, *(LARGE_INTEGER*)&v7, &v2, 1);
        if(v8) {
            v4 = dwMoveMethod;
            v5 = &ptr0;
            v6 = param1 < 0 ? -1: 0;
            v7 = param1;
            BOOL v9 = SetFilePointerEx((HANDLE)v3, *(LARGE_INTEGER*)&v7, &ptr0, dwMoveMethod);
            if(!v9) {
                DWORD v10 = GetLastError();
                _dosmaperr((unsigned int)v10);
                return (int*)0xFFFFFFFF;
            }
            else if(v0) {
                v4 = 0;
                v5 = NULL;
                v6 = v1;
                v7 = v2;
                SetFilePointerEx((HANDLE)v3, *(LARGE_INTEGER*)&v7, NULL, 0);
                int* ptr4 = _errno();
                ptr4[0] = 22;
                return (int*)0xFFFFFFFF;
            }
            unsigned int v11 = *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0);
            *(char*)((param0 & 0x1f) * 64 + v11 + 4) = *(char*)((param0 & 0x1f) * 64 + v11 + 4) & 0xfd;
            result = ptr0;
        }
        else {
            DWORD v10 = GetLastError();
            _dosmaperr((unsigned int)v10);
            result = (int*)0xFFFFFFFF;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _lseeki64(unsigned int param0, int param1, int param2, void* param3) {
    int v0;
    int v1;
    int v2 = v1;
    int result = -1;
    int v3 = -1;
    int v4 = -1;
    if(param0 == -2) {
        unsigned long* ptr0 = __doserrno();
        ptr0[0] = 0;
        int* ptr1 = _errno();
        ptr1[0] = 9;
    }
    else if(param0 < 0x80000000 && gvar_419FF8 > param0) {
        int v5 = param0 >> 5;
        if(!((int)*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
            goto loc_404EB2;
        }
        else {
            __lock_fhandle((int)param0);
            int v6 = 0;  // __try{ (see __finally:404EA1h)
            if((*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
                result = _lseeki64_nolock(param0, param1, param2, param3);
            }
            else {
                int* ptr2 = _errno();
                ptr2[0] = 9;
                unsigned long* ptr3 = __doserrno();
                ptr3[0] = 0;
            }
            sub_404EAA();
        }
    }
    else {
    loc_404EB2:
        unsigned long* ptr4 = __doserrno();
        ptr4[0] = 0;
        int* ptr5 = _errno();
        ptr5[0] = 9;
        _invalid_parameter_noinfo();
    }
    *(int*)__FS_BASE = v0;
    return result;
}

int _lseeki64_nolock(unsigned int param0, int param1, int param2, void* param3) {
    int result;
    int v0;
    int v1 = v0;
    int v2 = v0;
    int v3 = _get_osfhandle(param0);
    if(v3 == -1) {
        int* ptr0 = _errno();
        ptr0[0] = 9;
        goto loc_404EF7;
    }
    else {
        void* ptr1 = param3;
        PLARGE_INTEGER lpNewFilePointer = &v2;
        int v4 = param2;
        int v5 = param1;
        BOOL v6 = SetFilePointerEx((HANDLE)v3, *(LARGE_INTEGER*)&v5, lpNewFilePointer, (DWORD)ptr1);
        if(!v6) {
            DWORD v7 = GetLastError();
            _dosmaperr((unsigned int)v7);
        loc_404EF7:
            result = -1;
        }
        else {
            unsigned int v8 = *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0);
            *(char*)((param0 & 0x1f) * 64 + v8 + 4) = *(char*)((param0 & 0x1f) * 64 + v8 + 4) & 0xfd;
            result = v2;
        }
    }
    return result;
}

void* _malloc_crt(size_t _Size) {
    void* result;
    unsigned int v0 = gvar_419A68;
    unsigned long dwMilliseconds = 0;
    do {
        result = malloc(_Size);
        if(!result && v0) {
            Concurrency::details::platform::__Sleep(dwMilliseconds);
            v0 = gvar_419A68;
            dwMilliseconds += 1000;
            if(dwMilliseconds > v0) {
                dwMilliseconds = 0xffffffff;
            }
        }
    }
    while(!result && v0 && dwMilliseconds != -1);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _mbsnbcmp(int param0, int param1, int param2) {
    return _mbsnbcmp_l(param0, param1, param2, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int _mbsnbcmp_l(char* _Str1, char* _Str2, size_t param2, int param3) {
    int v0;
    int v1;
    int result;
    char v2;
    int v3;
    char v4;
    int v5;
    int v6;
    size_t _MaxCount = param2;
    if(!_MaxCount) {
        result = 0;
    }
    else {
        int v7 = v6;
        _LocaleUpdate::_LocaleUpdate((int)&v2, param3);
        if(!*(int*)(v3 + 8)) {
            v1 = strncmp(_Str1, _Str2, _MaxCount);
        }
        else {
            char* ptr0 = _Str1;
            if(ptr0) {
                char* ptr1 = _Str2;
                if(!ptr1) {
                    goto loc_40949C;
                }
                else {
                    do {
                        int v8 = (int)ptr0[0];
                        --_MaxCount;
                        int v9 = v3;
                        int v10 = v8;
                        char* ptr2 = ptr0 + 1;
                        char* ptr3 = ptr2;
                        v1 = (int)NULL;
                        if(!(*(char*)(v10 + v9 + 25) & 0x4)) {
                        loc_409501:
                            v0 = (int)ptr1[0];
                            ++ptr1;
                            int v11 = v0;
                            v1 = (int)NULL;
                            if((*(char*)(v11 + v3 + 25) & 0x4)) {
                                if(_MaxCount) {
                                    v11 = (unsigned int)ptr1[0] | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
                                    --_MaxCount;
                                    if(!(unsigned char)v11) {
                                        goto loc_409518;
                                    }
                                    else {
                                        ++ptr1;
                                        v0 = (int)((unsigned short)(unsigned int)(v11 & 0xFF) | (unsigned short)((unsigned int)0 | ((unsigned int)(v0 & 0xffffff) << 8)));
                                    }
                                }
                                else {
                                loc_409518:
                                    v0 = 0;
                                }
                            }
                        loc_409530:
                            char v12 = (unsigned short)v8 > (unsigned short)v0;
                            if((unsigned short)v8 != (unsigned short)v0) {
                                v1 = ((v12 ? -1: 0) & 0x2) - 1;
                            }
                            else if((unsigned short)v8) {
                                ptr0 = ptr3;
                            }
                        }
                        else if(!_MaxCount) {
                            v8 = 0;
                            if(!(*(char*)((unsigned int)ptr1[0] + v3 + 25) & 0x4)) {
                                v0 = (int)ptr1[0];
                                goto loc_409530;
                            }
                        }
                        else {
                            v10 = (unsigned int)ptr2[0] | ((unsigned int)((v10 >>> 8) & 0xffffff) << 8);
                            if(!(unsigned char)v10) {
                                v8 = 0;
                            }
                            else {
                                v8 = (int)((unsigned short)(unsigned int)(v10 & 0xFF) | (unsigned short)((unsigned int)0 | ((unsigned int)(v8 & 0xffffff) << 8)));
                                ptr3 = ptr2 + 1;
                            }
                            goto loc_409501;
                        }
                        break;
                    }
                    while(_MaxCount);
                }
            }
            else {
            loc_40949C:
                int* ptr4 = _errno();
                ptr4[0] = 22;
                _invalid_parameter_noinfo();
                v1 = 0x7fffffff;
            }
        }
        if(v4) {
            *(int*)(v5 + 112) = *(int*)(v5 + 112) & 0xfffffffd;
        }
        result = v1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _mbsnbicmp(int param0, int param1, int param2) {
    return _mbsnbicmp_l(param0, param1, param2, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int _mbsnbicmp_l(char* _String1, char* _String2, size_t param2, int param3) {
    size_t v0;
    int v1;
    char v2;
    char v3;
    int v4;
    int v5;
    int v6 = v5;
    _LocaleUpdate::_LocaleUpdate((int)&v3, param3);
    size_t _MaxCount = param2;
    int result = 0;
    if(_MaxCount) {
        if(*(int*)(v1 + 8) == 0) {
            result = _strnicmp(_String1, _String2, _MaxCount);
        }
        else {
            char* ptr0 = _String1;
            char* ptr1 = _String1;
            if(ptr0) {
                char* ptr2 = _String2;
                if(!ptr2) {
                    goto loc_4095CA;
                }
                else {
                    do {
                        int v7 = (int)ptr0[0];
                        --_MaxCount;
                        ++ptr1;
                        int v8 = v7;
                        if(!(*(char*)((unsigned int)(unsigned char)v8 + v1 + 25) & 0x4)) {
                            v7 = (unsigned int)(unsigned short)v8 | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
                            if((*(char*)((unsigned int)(unsigned short)v7 + v1 + 25) & 0x10)) {
                                v8 = (int)*(char*)((unsigned int)(unsigned short)v7 + v1 + 0x119);
                            loc_40967C:
                                v7 = (unsigned int)(unsigned short)v8 | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
                            }
                        loc_409680:
                            int v9 = (int)ptr2[0];
                            ++ptr2;
                            v8 = v9;
                            param2 = (size_t)v9;
                            v0 = (size_t)(unsigned char)v9;
                            if(!(*(char*)(v0 + v1 + 25) & 0x4)) {
                                v0 = (unsigned int)(unsigned short)param2 | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                                int v10 = 0;
                                param2 = (size_t)(unsigned short)v0;
                                result = 0;
                                if((*(char*)((size_t)(unsigned short)v0 + v1 + 25) & 0x10)) {
                                    v0 = (size_t)*(char*)(v1 + param2 + 0x119);
                                    param2 = v0;
                                    v0 = (unsigned int)(unsigned short)param2 | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                                }
                                goto loc_409703;
                            }
                            else if(!_MaxCount) {
                                param2 = (size_t)0;
                                v0 = (unsigned int)(unsigned short)param2 | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                                goto loc_409703;
                            }
                            else {
                                v0 = (unsigned int)ptr2[0] | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                                --_MaxCount;
                                if(!(unsigned char)v0) {
                                    param2 = (size_t)0;
                                    v0 = (unsigned int)(unsigned short)param2 | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                                    goto loc_409703;
                                }
                                else {
                                    v8 *= 0x100;
                                    v8 & 0xFFFF = (unsigned short)(unsigned char)v0 | (unsigned short)v8;
                                    ++ptr2;
                                    v0 = (size_t)(unsigned short)v8;
                                    param2 = (size_t)(unsigned short)v8;
                                }
                            }
                            if((unsigned short)v0 >= *(unsigned short*)(v1 + 12) && (unsigned short)v0 <= *(unsigned short*)(v1 + 14)) {
                                v0 = (unsigned int)((unsigned short)v0 + *(short*)(v1 + 16)) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                            }
                            else if((unsigned short)v0 >= *(unsigned short*)(v1 + 18) && (unsigned short)v0 <= *(unsigned short*)(v1 + 20)) {
                                v0 = (unsigned int)((unsigned short)v0 + *(short*)(v1 + 22)) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                            }
                        loc_409703:
                            char v11 = (unsigned short)v0 < (unsigned short)v7;
                            if((unsigned short)v0 != (unsigned short)v7) {
                                result = ((v11 ? -1: 0) & 0x2) - 1;
                            }
                            else if((unsigned short)v7) {
                                ptr0 = ptr1;
                            }
                        }
                        else if(!_MaxCount) {
                            int v12 = (unsigned int)ptr2[0];
                            v8 = 0;
                            if(!(*(char*)(v12 + v1 + 25) & 0x4)) {
                                v7 &= 0xffff0000;
                                v0 = (size_t)ptr2[0];
                                param2 = v0;
                                v0 = (unsigned int)(unsigned short)param2 | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                                goto loc_409703;
                            }
                        }
                        else {
                            char v13 = ptr1[0];
                            if(!v13) {
                                v8 = 0;
                                goto loc_40967C;
                            }
                            else {
                                v7 *= 0x100;
                                v7 = (unsigned int)((unsigned short)v13 | (unsigned short)v7) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
                                ++ptr1;
                                int v14 = (int)(unsigned short)v7;
                                v7 = (unsigned int)(unsigned short)v14 | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
                                v8 = v14;
                                if((unsigned short)v7 >= *(unsigned short*)(v1 + 12) && (unsigned short)v7 <= *(unsigned short*)(v1 + 14)) {
                                    v7 = (unsigned int)((unsigned short)v7 + *(short*)(v1 + 16)) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
                                }
                                else if((unsigned short)v7 >= *(unsigned short*)(v1 + 18) && (unsigned short)v7 <= *(unsigned short*)(v1 + 20)) {
                                    v7 = (unsigned int)((unsigned short)v7 + *(short*)(v1 + 22)) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
                                }
                                goto loc_409680;
                            }
                        }
                        break;
                    }
                    while(_MaxCount);
                }
            }
            else {
            loc_4095CA:
                int* ptr3 = _errno();
                ptr3[0] = 22;
                _invalid_parameter_noinfo();
                result = 0x7fffffff;
            }
        }
    }
    if(v2) {
        *(int*)(v4 + 112) = *(int*)(v4 + 112) & 0xfffffffd;
    }
    return result;
}

int _mbtowc_l(wchar_t* _DstCh, char* _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale) {
    int result;
    char v0;
    int v1;
    int v2;
    char v3;
    int v4;
    if(!_SrcCh || !_SrcSizeInBytes) {
    loc_408E75:
        result = 0;
    }
    else if(_SrcCh[0]) {
        _LocaleUpdate::_LocaleUpdate(&v2, (int*)_Locale);
        if(!*(int*)(v2 + 168)) {
            if(_DstCh) {
                _DstCh[0] = (wchar_t)_SrcCh[0];
            }
            v1 = 1;
        }
        else {
            int v5 = _isleadbyte_l((int)_SrcCh[0], (_locale_t)&v2);
            if(v5) {
                v1 = v2;
                if(*(int*)(v1 + 116) > 1) {
                    v0 = *(unsigned int*)(v1 + 116) > _SrcSizeInBytes;
                    if(*(int*)(v1 + 116) > (int)_SrcSizeInBytes) {
                        goto loc_408EF0;
                    }
                    else {
                        int v6 = MultiByteToWideChar(*(UINT*)(v1 + 4), 9, (LPCCH)_SrcCh, *(int*)(v1 + 116), (LPWSTR)_DstCh, _DstCh == 0 ? 0: 1);
                        v1 = v2;
                        if(v6) {
                            goto loc_408EF8;
                        }
                    }
                }
                v0 = *(unsigned int*)(v1 + 116) > _SrcSizeInBytes;
            loc_408EF0:
                if(v0 || !_SrcCh[1]) {
                    goto loc_408F20;
                }
                else {
                loc_408EF8:
                    v1 = *(int*)(v1 + 116);
                }
            }
            else {
                v1 = 1;
                int v7 = MultiByteToWideChar(*(UINT*)(v2 + 4), 9, (LPCCH)_SrcCh, 1, (LPWSTR)_DstCh, _DstCh == 0 ? 0: 1);
                if(!v7) {
                loc_408F20:
                    int* ptr0 = _errno();
                    v1 = -1;
                    ptr0[0] = 42;
                }
            }
        }
        if(v3) {
            *(int*)(v4 + 112) = *(int*)(v4 + 112) & 0xfffffffd;
        }
        result = v1;
    }
    else {
        if(_DstCh) {
            _DstCh[0] = 0;
        }
        goto loc_408E75;
    }
    return result;
}

size_t _msize(void* _Block) {
    if(!_Block) {
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        return 0xffffffff;
    }
    return (size_t)HeapSize(gvar_41993C, 0, _Block);
}

int _mtinit() {
    sub_406DD9();
    int v0 = _mtinitlocks();
    if(v0) {
        DWORD v1 = __crtFlsAlloc(&_freefls);
        gvar_418540 = v1;
        if(v1 != -1) {
            unsigned int v2 = sub_408F5B(1, 956);
            if(v2) {
                BOOL v3 = __crtFlsSetValue(gvar_418540, (LPVOID)v2);
                if(v3) {
                    _initptd((int)v2, 0);
                    DWORD v4 = GetCurrentThreadId();
                    *(int*)(v2 + 4) = -1;
                    *(DWORD*)v2 = v4;
                    return 1;
                }
            }
            _mtterm();
            return 0;
        }
    }
    _mtterm();
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _mtinitlocknum(int param0) {
    int result;
    int v0;
    int v1;
    int v2 = v1;
    if(!gvar_41993C) {
        _FF_MSGBANNER();
        _NMSG_WRITE(30);
        /*NO_RETURN*/ __crtExitProcess(0xFF);
    }
    if(*(unsigned int*)(param0 * 8 + (int)&gvar_418CC8) == 0) {
        LPCRITICAL_SECTION lpCriticalSection = (LPCRITICAL_SECTION)_malloc_crt(24);
        if(!lpCriticalSection) {
            int* ptr0 = _errno();
            ptr0[0] = 12;
            result = 0;
        }
        else {
            _lock(10);
            int v3 = 0;  // __try{ (see __finally:4092A8h)
            if(*(unsigned int*)(param0 * 8 + (int)&gvar_418CC8) == 0) {
                __crtInitializeCriticalSectionEx(lpCriticalSection, 4000, 0);
                *(LPCRITICAL_SECTION*)(param0 * 8 + (int)&gvar_418CC8) = lpCriticalSection;
            }
            else {
                free(lpCriticalSection);
            }
            sub_4092A8();
            result = 1;
            *(int*)__FS_BASE = v0;
            return result;
        }
    }
    else {
        result = 1;
    }
    *(int*)__FS_BASE = v0;
    return result;
}

int _mtinitlocks() {
    unsigned int* ptr0 = (unsigned int*)&gvar_418CC8;
    int v0 = 4299376;
    do {
        if(*(int*)(ptr0 + 1) == 1) {
            int v1 = 0;
            *ptr0 = v0;
            v0 += 24;
            __crtInitializeCriticalSectionEx(*ptr0, 4000, v1);
        }
        ptr0 += 2;
    }
    while((int)ptr0 < 0x418de8);
    return 1;
}

int _mtterm() {
    int v0;
    int result;
    DWORD dwTlsIndex = gvar_418540;
    if(dwTlsIndex != -1) {
        __crtFlsFree(dwTlsIndex);
        gvar_418540 = 0xffffffff;
    }
    unsigned int* ptr0 = (unsigned int*)&gvar_418CC8;
    unsigned int* ptr1 = (unsigned int*)&gvar_418CC8;
    int v1 = v0;
    do {
        LPCRITICAL_SECTION lpCriticalSection = *ptr1;
        if(lpCriticalSection && *(int*)(ptr1 + 1) != 1) {
            DeleteCriticalSection(lpCriticalSection);
            free(lpCriticalSection);
            *ptr1 = 0;
        }
        ptr1 += 2;
    }
    while((int)ptr1 < 0x418de8);
    do {
        if(*ptr0 && *(int*)(ptr0 + 1) == 1) {
            DeleteCriticalSection(*ptr0);
        }
        ptr0 += 2;
    }
    while((int)ptr0 < 0x418de8);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
_onexit_t _onexit(_onexit_t _Func) {
    int v0;
    _onexit_t v1 = NULL;
    _lockexit();
    int v2 = 0;  // __try{ (see __finally:40A274h)
    _onexit_t result = (_onexit_t)_onexit_nolock((int)_Func);
    sub_40A277();
    *(int*)__FS_BASE = v0;
    return result;
}

PVOID _onexit_nolock(PVOID Ptr1) {
    PVOID result;
    void* Ptr;
    PVOID _Block = DecodePointer(gvar_419FEC);
    PVOID v0 = DecodePointer(gvar_419FE8);
    if(_Block <= v0) {
        int* ptr0 = (int*)((int)v0 - (int)_Block);
        if((unsigned int)(ptr0 + 1) < 4) {
            return NULL;
        }
        size_t v1 = _msize(_Block);
        if((unsigned int)(ptr0 + 1) > v1) {
            if((v1 >= 0x800 ? 0x800: v1) + v1 >= v1) {
                Ptr = _realloc_crt(_Block, (v1 >= 0x800 ? 0x800: v1) + v1);
                if(Ptr) {
                    goto loc_40A2FF;
                }
            }
            if((unsigned int)(void*)(v1 + 16) < v1) {
                return NULL;
            }
            Ptr = _realloc_crt(_Block, (size_t)(void*)(v1 + 16));
            if(!Ptr) {
                return NULL;
            }
        loc_40A2FF:
            v0 = (PVOID)((int)(int*)((int)(int*)((int)ptr0 >> 2) * 4) + (int)Ptr);
            PVOID v2 = EncodePointer(Ptr);
            gvar_419FEC = v2;
        }
        PVOID v3 = EncodePointer(Ptr1);
        *(PVOID*)v0 = v3;
        PVOID v4 = EncodePointer((PVOID)((int)v0 + 4));
        gvar_419FE8 = v4;
        result = Ptr1;
    }
    else {
        result = NULL;
    }
    return result;
}

int* _openfile(int param0, char* param1, int param2, int* param3) {
    int v0;
    int v1;
    int* result;
    int v2 = 0;
    int v3 = 0;
    char* ptr0 = param1;
    unsigned int v4 = gvar_419BC0;
    int v5 = 0;
    while(*ptr0 == 32) {
        ++ptr0;
    }
    char* ptr1 = (char*)*ptr0;
    if(*ptr0 == 97) {
        v0 = 265;
    loc_40436A:
        v1 = v4 | 0x2;
    loc_40436F:
        int v6 = 1;
        int v7 = (int)(ptr0 + 1);
        ptr1 = (unsigned int)*(char*)v7 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        if((unsigned char)ptr1) {
            param1 = (char*)0x1000;
            while(v6) {
                ptr1 = (char*)(unsigned char)ptr1;
                if((int)ptr1 <= 83) {
                    if(ptr1 != 83) {
                        ptr1 -= 32;
                        if(ptr1) {
                            ptr1 -= 11;
                            if(ptr1) {
                                --ptr1;
                                if(ptr1) {
                                    ptr1 -= 24;
                                    if(ptr1) {
                                        ptr1 -= 10;
                                        if(ptr1) {
                                            ptr1 -= 4;
                                            if(ptr1) {
                                                goto loc_404340;
                                            }
                                            else if(v3 != 0) {
                                                goto loc_40447C;
                                            }
                                            else {
                                                v3 = 1;
                                                v0 |= 16;
                                            }
                                        }
                                        else {
                                            v0 |= 128;
                                        }
                                    }
                                    else if((unsigned char)v0 & 0x40) {
                                        goto loc_40447C;
                                    }
                                    else {
                                        v0 |= 64;
                                    }
                                }
                                else {
                                    v5 = 1;
                                    goto loc_40447C;
                                }
                            }
                            else if((unsigned char)v0 & 0x2) {
                                goto loc_40447C;
                            }
                            else {
                                v0 = (v0 & 0xfffffffe) | 0x2;
                                v1 = (v1 & 0xfffffffc) | 0x80;
                            }
                        }
                        goto loc_404482;
                    }
                    else if(v3) {
                        goto loc_40447C;
                    }
                    else {
                        v3 = 1;
                        v0 |= 32;
                        goto loc_404482;
                    }
                }
                else if(ptr1 != 84) {
                    ptr1 -= 98;
                    if(ptr1) {
                        --ptr1;
                        if(ptr1) {
                            ptr1 -= 11;
                            if(ptr1) {
                                ptr1 -= 6;
                                if(ptr1) {
                                    goto loc_404340;
                                }
                                else if(v0 & 0xc000) {
                                    goto loc_40447C;
                                }
                                else {
                                    v0 |= 0x4000;
                                    goto loc_404482;
                                }
                            }
                            else if(v2) {
                                goto loc_40447C;
                            }
                            else {
                                v2 = 1;
                                v1 &= 0xffffbfff;
                                goto loc_404482;
                            }
                        }
                        else if(v2) {
                            goto loc_40447C;
                        }
                        else {
                            v2 = 1;
                            v1 |= 0x4000;
                            goto loc_404482;
                        }
                    }
                    else if(v0 & 0xc000) {
                        goto loc_40447C;
                    }
                    else {
                        v0 |= 0x8000;
                        goto loc_404482;
                    }
                }
                else {
                    ptr1 = (char*)0x1000;
                }
                if((int*)(v0 & (int)(char*)0x1000)) {
                loc_40447C:
                    v6 = 0;
                }
                else {
                    v0 |= (int)(char*)0x1000;
                }
            loc_404482:
                ++v7;
                ptr1 = (unsigned int)*(char*)v7 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
                if(!(unsigned char)ptr1) {
                    break;
                }
            }
            if(v5) {
                while(*(char*)v7 == 32) {
                    ++v7;
                }
                int v8 = _mbsnbcmp(&gvar_411150, v7, 3);
                if(v8) {
                    goto loc_404340;
                }
                else {
                    int i;
                    for(i = v7 + 3; *(char*)i == 32; ++i) {
                    }
                    if(*(char*)i != 61) {
                        goto loc_404340;
                    }
                    else {
                        do {
                            ++i;
                        }
                        while(*(char*)i == 32);
                        int v9 = _mbsnbicmp(i, "UTF-8", 5);
                        if(!v9) {
                            v7 = i + 5;
                            v0 |= 0x40000;
                        }
                        else {
                            int v10 = _mbsnbicmp(i, "UTF-16LE", 8);
                            if(!v10) {
                                v7 = i + 8;
                                v0 |= 0x20000;
                            }
                            else {
                                int v11 = _mbsnbicmp(i, "UNICODE", 7);
                                if(v11) {
                                    goto loc_404340;
                                }
                                else {
                                    v7 = i + 7;
                                    v0 |= 0x10000;
                                }
                            }
                        }
                    }
                }
            }
        }
        while(*(char*)v7 == 32) {
            ++v7;
        }
        if(!*(char*)v7) {
            int v12 = _sopen_s(&param1, param0, v0, param2, 384);
            if(!v12) {
                result = param3;
                ++gvar_4191CC;
                *(result + 1) = 0;
                *result = 0;
                *(result + 2) = 0;
                *(result + 7) = 0;
                *(result + 3) = v1;
                *(result + 4) = param1;
                return result;
            }
        }
        else {
        loc_404340:
            int* ptr2 = _errno();
            ptr2[0] = 22;
            _invalid_parameter_noinfo();
        }
        result = NULL;
    }
    else if((unsigned char)ptr1 == 114) {
        v0 = 0;
        v1 = v4 | 0x1;
        goto loc_40436F;
    }
    else if((unsigned char)ptr1 != 119) {
        goto loc_404340;
    }
    else {
        v0 = 769;
        goto loc_40436A;
    }
    return result;
}

int _positive(long long* param0) {
    int v0;
    fldz();
    *param0 = fcomp(*param0);
    short v1 = fnstsw((unsigned short)param0);
    if(!__parity__((unsigned char)(v0 >>> 8) & 0x41)) {
        return 1;
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _read(int param0, int param1, unsigned int param2) {
    int result;
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    int v4 = 0;
    if(param0 == -2) {
        unsigned long* ptr0 = __doserrno();
        ptr0[0] = 0;
        int* ptr1 = _errno();
        ptr1[0] = 9;
        goto loc_405096;
    }
    else if((param0 < 0 || gvar_419FF8 <= (unsigned int)param0)) {
        unsigned long* ptr2 = __doserrno();
        ptr2[0] = 0;
    loc_405086:
        int* ptr3 = _errno();
        ptr3[0] = 9;
    loc_405091:
        _invalid_parameter_noinfo();
    loc_405096:
        result = -1;
    }
    else if(!((int)*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
        unsigned long* ptr4 = __doserrno();
        ptr4[0] = 0;
        goto loc_405086;
    }
    else if(param2 > 0x7fffffff) {
        unsigned long* ptr5 = __doserrno();
        ptr5[0] = 0;
        int* ptr6 = _errno();
        ptr6[0] = 22;
        goto loc_405091;
    }
    else {
        __lock_fhandle(param0);
        int v5 = 0;  // __try{ (see __finally:405071h)
        if((*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
            v0 = _read_nolock(param0, param1, (int)param2);
        }
        else {
            int* ptr7 = _errno();
            ptr7[0] = 9;
            unsigned long* ptr8 = __doserrno();
            ptr8[0] = 0;
            v0 = -1;
        }
        sub_405077();
        result = v0;
    }
    *(int*)__FS_BASE = v1;
    return result;
}

int _read_nolock(unsigned int param0, LPWSTR lpWideCharStr, size_t param2) {
    int result;
    void* ptr0;
    DWORD v0;
    void* _Block;
    BOOL v1;
    DWORD v0;
    void* ptr1;
    LPCCH lpMultiByteStr;
    LPWSTR v2;
    int* ptr2;
    char v3;
    BOOL v4;
    char v5;
    char v6;
    int v7;
    int v8;
    int v9 = v8;
    size_t _Size = param2;
    int v10 = 0;
    void* ptr3 = (void*)0xFFFFFFFE;
    BOOL v11 = 0;
    size_t v12 = _Size;
    if(param0 == (void*)0xFFFFFFFE) {
        unsigned long* ptr4 = __doserrno();
        ptr4[0] = 0;
        ptr2 = _errno();
        ptr2[0] = 9;
        return -1;
    }
    if(param0 < 0x80000000 && gvar_419FF8 > param0) {
        BOOL v13 = (BOOL)(param0 >> 5);
        int v14 = (param0 & 0x1f) * 64;
        BOOL v15 = v13;
        int v16 = v14;
        BOOL v17 = *(BOOL*)(v13 * 4 + (int)&gvar_4191D0);
        unsigned int v18 = (unsigned int)*(char*)((int*)(v17 + v14) + 1) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
        if(((unsigned char)v18 & 0x1)) {
            if(_Size > 0x7fffffff) {
                unsigned long* ptr5 = __doserrno();
                ptr5[0] = 0;
                int* ptr6 = _errno();
                ptr6[0] = 22;
                goto loc_405821;
            }
            else {
                if(_Size && !((unsigned char)v18 & 0x2)) {
                    if(lpWideCharStr != 0) {
                        v18 = (unsigned int)((*(char*)((int*)(v17 + v14) + 9) * 2) >> 1) | ((unsigned int)((v18 >>> 8) & 0xffffff) << 8);
                        (size_t)((param2 >>> 24) & 0xFF) = (unsigned char)v18;
                        if(((int)(unsigned char)v18 - 1)) {
                            if((int)(unsigned char)v18 == 2) {
                                if(!((unsigned char)(unsigned int)~_Size & 0x1)) {
                                    goto loc_405145;
                                }
                                else {
                                    _Size &= -2;
                                }
                            }
                            v2 = lpWideCharStr;
                            lpMultiByteStr = (LPCCH)lpWideCharStr;
                            goto loc_4051D9;
                        }
                        if(((unsigned char)(unsigned int)~_Size & 0x1)) {
                            _Size >>>= 1;
                            if(_Size < 4) {
                                _Size = 4;
                            }
                            void* ptr7 = _malloc_crt(_Size);
                            lpMultiByteStr = (LPCCH)ptr7;
                            if(!ptr7) {
                                int* ptr8 = _errno();
                                ptr8[0] = 12;
                                ptr2 = (int*)__doserrno();
                                ptr2[0] = 8;
                                result = -1;
                            }
                            else {
                                int v19 = _lseeki64_nolock(param0, 0, 0, (void*)0x1);
                                unsigned int v20 = *(unsigned int*)(v15 * 4 + (int)&gvar_4191D0);
                                *(int*)(v20 + v14 + 40) = v19;
                                v2 = (LPWSTR)lpMultiByteStr;
                                *(int*)(v20 + v14 + 44) = v7;
                                v13 = v15;
                            loc_4051D9:
                                unsigned int v21 = *(unsigned int*)(v13 * 4 + (int)&gvar_4191D0);
                                LPVOID lpBuffer = v2;
                                if((*(char*)(v21 + v14 + 4) & 0x48)) {
                                    v21 = (unsigned int)*(char*)(v21 + v14 + 5) | ((unsigned int)((v21 >>> 8) & 0xffffff) << 8);
                                    if((unsigned char)v21 != 10 && _Size) {
                                        *(char*)&v2[0] = (unsigned char)v21;
                                        v10 = 1;
                                        unsigned int v22 = *(unsigned int*)(v15 * 4 + (int)&gvar_4191D0);
                                        --_Size;
                                        lpBuffer = (LPVOID)((char*)v2 + 1);
                                        *(char*)(v22 + v14 + 5) = 10;
                                        if((unsigned char)(param2 >>> 24)) {
                                            char v23 = *(char*)(*(unsigned int*)(v15 * 4 + (int)&gvar_4191D0) + v14 + 37);
                                            if(v23 != 10 && _Size) {
                                                *((char*)&v2[0] + 1) = v23;
                                                unsigned int v24 = *(unsigned int*)(v15 * 4 + (int)&gvar_4191D0);
                                                --_Size;
                                                lpBuffer = (LPVOID)(v2 + 1);
                                                v10 = (int)(void*)0x2;
                                                *(char*)(v24 + v14 + 37) = 10;
                                                if((unsigned char)(param2 >>> 24) == 1) {
                                                    char v25 = *(char*)(*(unsigned int*)(v15 * 4 + (int)&gvar_4191D0) + v14 + 38);
                                                    if(v25 != 10 && _Size) {
                                                        ptr1 = (void*)0x3;
                                                        *(char*)&v2[1] = v25;
                                                        unsigned int v26 = *(unsigned int*)(v15 * 4 + (int)&gvar_4191D0);
                                                        --_Size;
                                                        v10 = (int)ptr1;
                                                        lpBuffer = (LPVOID)((char*)v2 + 3);
                                                        *(char*)(v26 + v14 + 38) = 10;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                int v27 = _isatty(param0);
                                BOOL v28 = v15;
                                if(v27) {
                                    unsigned int v29 = *(unsigned int*)(v28 * 4 + (int)&gvar_4191D0);
                                    if((*(char*)(v29 + v14 + 4) & 0x80)) {
                                        BOOL v30 = GetConsoleMode(*(HANDLE*)(v29 + v14), &v11);
                                        v11 = v30;
                                        if(v30 && (unsigned char)(param2 >>> 24) == 2) {
                                            BOOL v31 = ReadConsoleW(*(HANDLE*)(*(unsigned int*)(v15 * 4 + (int)&gvar_4191D0) + v14), lpBuffer, (DWORD)(_Size >>> 1), &v4, NULL);
                                            if(!v31) {
                                                v0 = GetLastError();
                                                goto loc_4052D8;
                                            }
                                            else {
                                                v1 = v4;
                                                v13 = v1 * 2;
                                                v4 = v1 * 2;
                                                goto loc_40532C;
                                            }
                                        }
                                        else {
                                            v28 = v15;
                                        }
                                    }
                                    goto loc_40530B;
                                }
                                else {
                                loc_40530B:
                                    v1 = ReadFile(*(HANDLE*)(*(unsigned int*)(v28 * 4 + (int)&gvar_4191D0) + v14), lpBuffer, (DWORD)_Size, &v4, NULL);
                                    if(v1) {
                                        v13 = v4;
                                        if(v13 >= 0 && (unsigned int)v13 <= _Size) {
                                        loc_40532C:
                                            v17 = v15;
                                            v10 = (int)(v13 + v10);
                                            unsigned int v32 = *(unsigned int*)(v17 * 4 + (int)&gvar_4191D0);
                                            v1 = (unsigned int)*(char*)(v14 + v32 + 4) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                                            if((unsigned char)v1 >= 0) {
                                            loc_40559B:
                                                _Block = lpMultiByteStr;
                                            }
                                            else if((unsigned char)(param2 >>> 24) != 2) {
                                                *(char*)(v14 + v32 + 4) = v13 && lpMultiByteStr[0] == 10 ? (unsigned char)v1 | 0x4: (unsigned char)v1 & 0xfb;
                                                BOOL v33 = (BOOL)lpMultiByteStr;
                                                BOOL v34 = (BOOL)lpMultiByteStr;
                                                v11 = v33;
                                                lpBuffer = (LPVOID)(v33 + v10);
                                                if((unsigned int)(v33 + v10) > (unsigned int)v33) {
                                                    v13 = (BOOL)(void*)0xD;
                                                    BOOL v35 = v33;
                                                    do {
                                                        v33 = (unsigned int)*(char*)v35 | ((unsigned int)((v33 >>> 8) & 0xffffff) << 8);
                                                        if((unsigned char)v33 == 26) {
                                                            v13 = *(BOOL*)(v17 * 4 + (int)&gvar_4191D0);
                                                            v33 = (unsigned int)*(char*)(v13 + v14 + 4) | ((unsigned int)((v33 >>> 8) & 0xffffff) << 8);
                                                            if(!((unsigned char)v33 & 0x40)) {
                                                                *(char*)(v13 + v14 + 4) = (unsigned char)v33 | 0x2;
                                                            }
                                                            else {
                                                                *(char*)v34 = *(char*)v35;
                                                                ++v34;
                                                            }
                                                            break;
                                                        }
                                                        else if((unsigned char)v33 != (unsigned char)v13) {
                                                            *(char*)v34 = (unsigned char)v33;
                                                            ++v34;
                                                            ++v35;
                                                        }
                                                        else {
                                                            if((unsigned int)(int*)((int)lpBuffer - 1) > (unsigned int)v35) {
                                                                v33 = v35 + 1;
                                                                if(*(char*)v33 == 10) {
                                                                    v33 = (BOOL)(void*)0xA;
                                                                    v35 += 2;
                                                                    *(char*)v34 = 10;
                                                                    ++v34;
                                                                    ptr1 = (void*)0xD;
                                                                    goto loc_405431;
                                                                }
                                                                else {
                                                                    *(char*)v34 = (unsigned char)v13;
                                                                    v35 = v33;
                                                                }
                                                            }
                                                            else {
                                                                ++v35;
                                                                v33 = ReadFile(*(HANDLE*)(*(unsigned int*)(v17 * 4 + (int)&gvar_4191D0) + v14), &v3, 1, &v4, NULL);
                                                                if(!v33) {
                                                                    v33 = (BOOL)GetLastError();
                                                                    if(v33) {
                                                                        goto loc_405461;
                                                                    }
                                                                }
                                                                if(v4) {
                                                                    v17 = v15;
                                                                    if(!(*(char*)(*(unsigned int*)(v17 * 4 + (int)&gvar_4191D0) + v14 + 4) & 0x48)) {
                                                                        if(v34 == lpMultiByteStr) {
                                                                            v33 = 10;
                                                                            if(v3 == 10) {
                                                                                *(char*)v34 = 10;
                                                                                ++v34;
                                                                            loc_40542F:
                                                                                ptr1 = (void*)0xD;
                                                                                goto loc_405431;
                                                                            }
                                                                        }
                                                                        _lseeki64_nolock(param0, -1, -1, (void*)0x1);
                                                                        v17 = v15;
                                                                        v33 = 10;
                                                                        if(v3 != 10) {
                                                                            v13 = (BOOL)(void*)0xD;
                                                                            *(char*)v34 = 13;
                                                                            ++v34;
                                                                        }
                                                                        goto loc_40542F;
                                                                    }
                                                                    else {
                                                                        v33 = 10;
                                                                        ptr1 = (void*)0xD;
                                                                    }
                                                                    if(v3 == 10) {
                                                                        *(char*)v34 = 10;
                                                                        ++v34;
                                                                    }
                                                                    else {
                                                                        *(char*)v34 = 13;
                                                                        ++v34;
                                                                        v33 = (BOOL)v3;
                                                                        *(char*)(*(unsigned int*)(v17 * 4 + (int)&gvar_4191D0) + v14 + 5) = (unsigned char)v33;
                                                                    }
                                                                loc_405431:
                                                                    v13 = (BOOL)ptr1;
                                                                }
                                                            loc_405461:
                                                                v17 = v15;
                                                                v13 = (BOOL)(void*)0xD;
                                                                *(char*)v34 = 13;
                                                            }
                                                            ++v34;
                                                        }
                                                    }
                                                    while((unsigned int)v35 < (unsigned int)lpBuffer);
                                                }
                                                _Block = lpMultiByteStr;
                                                v10 = (int)(v34 - (int)_Block);
                                                if((unsigned char)(param2 >>> 24) == 1 && v10) {
                                                    char* ptr9 = (char*)(v34 - 1);
                                                    _Block = (unsigned int)*ptr9 | ((unsigned int)(int*)((int)(int*)((int)_Block >>> 8) & 0xffffff) << 8);
                                                    if((unsigned char)_Block >= 0) {
                                                        ++ptr9;
                                                    }
                                                    else {
                                                        int v36 = 1;
                                                        if(!*(char*)((unsigned int)(unsigned char)_Block + 0x418400)) {
                                                            while(v36 <= 4 && (unsigned int)ptr9 >= (unsigned int)lpMultiByteStr) {
                                                                --ptr9;
                                                                ++v36;
                                                                if(*(char*)((unsigned int)*ptr9 + 0x418400)) {
                                                                    break;
                                                                }
                                                            }
                                                            v14 = v16;
                                                        }
                                                        int v37 = (int)*(char*)((unsigned int)*ptr9 + 0x418400);
                                                        if(!v37) {
                                                            int* ptr10 = _errno();
                                                            ptr10[0] = 42;
                                                            goto loc_4052DE;
                                                        }
                                                        else if(v37 + 1 == v36) {
                                                            ptr9 = (char*)(v36 + (int)ptr9);
                                                        }
                                                        else {
                                                            unsigned int v38 = *(unsigned int*)(v15 * 4 + (int)&gvar_4191D0);
                                                            if((*(char*)(v38 + v14 + 4) & 0x48)) {
                                                                char* ptr11 = ptr9 + 1;
                                                                *(char*)(v38 + v14 + 5) = *ptr9;
                                                                BOOL v39 = v15;
                                                                if(v36 >= 2) {
                                                                    unsigned int v40 = *(unsigned int*)(v39 * 4 + (int)&gvar_4191D0);
                                                                    v39 = (unsigned int)*ptr11 | ((unsigned int)((v39 >>> 8) & 0xffffff) << 8);
                                                                    ++ptr11;
                                                                    *(char*)(v40 + v14 + 37) = (unsigned char)v39;
                                                                    v39 = v15;
                                                                }
                                                                if(v36 == 3) {
                                                                    unsigned int v41 = *(unsigned int*)(v39 * 4 + (int)&gvar_4191D0);
                                                                    v39 = (unsigned int)*ptr11 | ((unsigned int)((v39 >>> 8) & 0xffffff) << 8);
                                                                    ++ptr11;
                                                                    *(char*)(v41 + v14 + 38) = (unsigned char)v39;
                                                                }
                                                                ptr9 = (char*)((int)ptr11 - v36);
                                                            }
                                                            else {
                                                                _lseeki64_nolock(param0, 0 - v36, 0 < v36 ? -1: 0, (void*)0x1);
                                                            }
                                                        }
                                                    }
                                                    int cbMultiByte = (int)ptr9 - (int)lpMultiByteStr;
                                                    v10 = MultiByteToWideChar(65001, 0, lpMultiByteStr, cbMultiByte, lpWideCharStr, (int)(v12 >>> 1));
                                                    if(v10) {
                                                        v13 = cbMultiByte == v10 ? 0: 1;
                                                        v10 *= 2;
                                                        *(BOOL*)(*(unsigned int*)(v15 * 4 + (int)&gvar_4191D0) + v14 + 48) = v13;
                                                        goto loc_40559B;
                                                    }
                                                    else {
                                                        v0 = GetLastError();
                                                        goto loc_4052D8;
                                                    }
                                                }
                                            }
                                            else if(v11) {
                                                LPCCH v42 = lpMultiByteStr;
                                                v13 = (BOOL)lpMultiByteStr;
                                                v17 = (BOOL)(((v10 - (v10 < 0 ? -1: 0)) >> 1) * 2 + (int)v42);
                                                if((unsigned int)v17 > (unsigned int)v42) {
                                                    param2 = 26;
                                                    do {
                                                        CHAR v43 = *(CHAR*)v13;
                                                        if((unsigned short)param2 == v43) {
                                                            unsigned int v44 = *(unsigned int*)(v15 * 4 + (int)&gvar_4191D0);
                                                            *(char*)(v44 + v14 + 4) = *(char*)(v44 + v14 + 4) | 0x2;
                                                            break;
                                                        }
                                                        else if(v43 != 13) {
                                                            *(short*)&v42[0] = v43;
                                                            v42 += 2;
                                                            v13 += 2;
                                                        }
                                                        else if((unsigned int)(int*)(v17 - 2) > (unsigned int)v13) {
                                                            v13 += 2;
                                                            *(short*)&v42[0] = (CHAR)(*(short*)v13 == 10 ? (void*)0xA: (void*)0xD);
                                                            v42 += 2;
                                                        }
                                                    }
                                                    while((unsigned int)v13 < (unsigned int)v17);
                                                }
                                                _Block = lpMultiByteStr;
                                                v10 = (int)(int*)((int)v42 - (int)_Block) & 0xfffffffe;
                                            }
                                            else {
                                                if(v13) {
                                                    v17 = v15;
                                                    if(*(short*)&lpMultiByteStr[0] != 10) {
                                                        goto loc_405650;
                                                    }
                                                    else {
                                                        v1 = (unsigned int)((unsigned char)v1 | 0x4) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                                                    }
                                                }
                                                else {
                                                loc_405650:
                                                    v1 = (unsigned int)((unsigned char)v1 & 0xfb) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                                                }
                                                *(char*)(v14 + v32 + 4) = (unsigned char)v1;
                                                LPCCH v45 = lpMultiByteStr;
                                                v12 = (size_t)lpMultiByteStr;
                                                v13 = (BOOL)(v10 + (int)lpMultiByteStr);
                                                v11 = (BOOL)(v10 + (int)lpMultiByteStr);
                                                if((unsigned int)v13 > (unsigned int)lpMultiByteStr) {
                                                    v13 = (BOOL)(void*)0xD;
                                                    param2 = 26;
                                                    LPCCH v46 = lpMultiByteStr;
                                                    do {
                                                        int v47 = (unsigned int)*(short*)&v46[0];
                                                        if((unsigned short)v47 == (unsigned short)param2) {
                                                            v13 = *(BOOL*)((int)(int*)(v17 * 4) + (int)&gvar_4191D0);
                                                            v47 = (unsigned int)*(char*)(v13 + v14 + 4) | ((unsigned int)((v47 >>> 8) & 0xffffff) << 8);
                                                            if(!((unsigned char)v47 & 0x40)) {
                                                                *(char*)(v13 + v14 + 4) = (unsigned char)v47 | 0x2;
                                                            }
                                                            else {
                                                                *(short*)&v45[0] = *(short*)&v46[0];
                                                                v45 += 2;
                                                            }
                                                            break;
                                                        }
                                                        else if((unsigned short)v47 != (unsigned short)v13) {
                                                            *(short*)&v45[0] = (CHAR)v47;
                                                            goto loc_4056B6;
                                                        }
                                                        else {
                                                            if((unsigned int)(v11 - 2) > (unsigned int)v46) {
                                                                v17 = v15;
                                                                if(*(short*)&v46[2] == 10) {
                                                                    v46 += 4;
                                                                    *(short*)&v45[0] = 10;
                                                                    goto loc_405798;
                                                                }
                                                                else {
                                                                    *(short*)&v45[0] = (CHAR)v13;
                                                                loc_4056B6:
                                                                    v45 += 2;
                                                                    v46 += 2;
                                                                }
                                                            }
                                                            v46 += 2;
                                                            BOOL v48 = ReadFile(*(HANDLE*)(*(unsigned int*)((int)(int*)(v17 * 4) + (int)&gvar_4191D0) + v14), &v6, 2, &v4, NULL);
                                                            if(!v48) {
                                                                DWORD v49 = GetLastError();
                                                                if(v49) {
                                                                    goto loc_40579D;
                                                                }
                                                            }
                                                            if(v4) {
                                                                v17 = v15;
                                                                if((*(char*)(*(unsigned int*)((int)(int*)(v17 * 4) + (int)&gvar_4191D0) + v14 + 4) & 0x48)) {
                                                                    ptr1 = (void*)0xD;
                                                                    if(*(short*)&v6 == 10) {
                                                                        *(short*)&v45[0] = 10;
                                                                        v45 += 2;
                                                                        goto loc_405753;
                                                                    }
                                                                    else {
                                                                        *(short*)&v45[0] = 13;
                                                                        v45 += 2;
                                                                        unsigned int v50 = *(unsigned int*)((int)(int*)(v17 * 4) + (int)&gvar_4191D0);
                                                                        ptr1 = (void*)0xA;
                                                                        *(char*)(v50 + v14 + 5) = v6;
                                                                        *(char*)(*(unsigned int*)((int)(int*)(v17 * 4) + (int)&gvar_4191D0) + v14 + 37) = v5;
                                                                        *(char*)(*(unsigned int*)((int)(int*)(v17 * 4) + (int)&gvar_4191D0) + v14 + 38) = (unsigned char)ptr1;
                                                                    }
                                                                }
                                                                else if(v45 == lpMultiByteStr && *(short*)&v6 == 10) {
                                                                    *(short*)&v45[0] = 10;
                                                                    v45 += 2;
                                                                }
                                                                else {
                                                                    _lseeki64_nolock(param0, -2, -1, (void*)0x1);
                                                                    v17 = v15;
                                                                    if(*(short*)&v6 != 10) {
                                                                        v13 = (BOOL)(void*)0xD;
                                                                        *(short*)&v45[0] = 13;
                                                                    loc_405798:
                                                                        v45 += 2;
                                                                    }
                                                                }
                                                                ptr1 = (void*)0xD;
                                                            loc_405753:
                                                                v13 = (BOOL)ptr1;
                                                            }
                                                            else {
                                                            loc_40579D:
                                                                v17 = v15;
                                                                v13 = (BOOL)(void*)0xD;
                                                                *(short*)&v45[0] = 13;
                                                                v45 += 2;
                                                            }
                                                        }
                                                    }
                                                    while((unsigned int)v46 < (unsigned int)v11);
                                                }
                                                _Block = lpMultiByteStr;
                                                v10 = (int)v45 - (int)_Block;
                                            }
                                            ptr0 = ptr3;
                                            goto loc_4055A4;
                                        }
                                    }
                                    v0 = GetLastError();
                                    if(v0 == (void*)0x5) {
                                        int* ptr12 = _errno();
                                        ptr12[0] = 9;
                                        unsigned long* ptr13 = __doserrno();
                                        ptr13[0] = (unsigned long)(void*)0x5;
                                    }
                                    else if(v0 == 109) {
                                        ptr0 = NULL;
                                        goto loc_4052E1;
                                    }
                                    else {
                                    loc_4052D8:
                                        _dosmaperr((unsigned int)v0);
                                    }
                                loc_4052DE:
                                    ptr0 = (void*)0xFFFFFFFF;
                                loc_4052E1:
                                    _Block = lpMultiByteStr;
                                }
                            loc_4055A4:
                                if(_Block != lpWideCharStr) {
                                    free(_Block);
                                }
                                if(ptr0 != -2) {
                                    v10 = (int)ptr0;
                                }
                                result = v10;
                            }
                            return result;
                        }
                    }
                loc_405145:
                    unsigned long* ptr14 = __doserrno();
                    ptr14[0] = 0;
                    int* ptr6 = _errno();
                    ptr6[0] = 22;
                    goto loc_405821;
                }
                else {
                    return 0;
                }
            }
        }
    }
    unsigned long* ptr15 = __doserrno();
    ptr15[0] = 0;
    int* ptr16 = _errno();
    ptr16[0] = 9;
loc_405821:
    _invalid_parameter_noinfo();
    return -1;
}

void* _realloc_crt(void* _Block, size_t _Size) {
    void* result;
    unsigned long dwMilliseconds = 0;
    do {
        result = realloc(_Block, _Size);
        if(!result && result != _Size && gvar_419A68 > (unsigned int)result) {
            Concurrency::details::platform::__Sleep(dwMilliseconds);
            dwMilliseconds += 1000;
            if(gvar_419A68 < dwMilliseconds) {
                dwMilliseconds = 0xffffffff;
            }
        }
    }
    while(!result && result != _Size && gvar_419A68 > (unsigned int)result && dwMilliseconds != -1);
    return result;
}

void* _recalloc(void* _Block, size_t _Count, size_t _Size) {
    void* result;
    void* ptr0;
    size_t v0 = 0;
    if(_Count && 0xffffffe0 / _Count < _Size) {
        int* ptr1 = _errno();
        ptr1[0] = 12;
        result = NULL;
    }
    else {
        size_t _Size1 = _Count * _Size;
        void* ptr2 = ptr0;
        if(_Block) {
            v0 = _msize(_Block);
        }
        void* ptr3 = realloc(_Block, _Size1);
        if(ptr3 && _Size1 > v0) {
            memset((void*)((int)ptr3 + v0), 0, _Size1 - v0);
        }
        result = ptr3;
    }
    return result;
}

void* _recalloc_crt(void* _Block, size_t _Count, size_t _Size) {
    void* result;
    unsigned long dwMilliseconds = 0;
    do {
        result = _recalloc(_Block, _Count, _Size);
        if(!result && result != _Size && gvar_419A68 > (unsigned int)result) {
            Concurrency::details::platform::__Sleep(dwMilliseconds);
            dwMilliseconds += 1000;
            if(gvar_419A68 < dwMilliseconds) {
                dwMilliseconds = 0xffffffff;
            }
        }
    }
    while(!result && result != _Size && gvar_419A68 > (unsigned int)result && dwMilliseconds != -1);
    return result;
}

int _seh_longjmp_unwind4(int param0) {
    return _local_unwind4(*(int**)(param0 + 40), *(int*)(param0 + 24), *(int**)(param0 + 28));
}

// Stale decompilation - Refresh this view to re-decompile this code
int _set_error_mode(int _Mode) {
    int result;
    if(_Mode >= 0) {
        if(_Mode <= 2) {
            result = gvar_419A48;
            gvar_419A48 = _Mode;
        }
        else if(_Mode != 3) {
            int* ptr0 = _errno();
            ptr0[0] = 22;
            _invalid_parameter_noinfo();
            return -1;
        }
        else {
            result = gvar_419A48;
        }
        return result;
    }
    int* ptr0 = _errno();
    ptr0[0] = 22;
    _invalid_parameter_noinfo();
    return -1;
}

int _set_osfhnd(unsigned int param0, HANDLE hHandle) {
    int result;
    DWORD nStdHandle;
    int v0;
    int v1 = v0;
    if(param0 < 0x80000000 && gvar_419FF8 > param0 && *(int*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0)) == -1) {
        if(gvar_419308 == 1) {
            if(!param0) {
                nStdHandle = 0xfffffff6;
            loc_409D3E:
                SetStdHandle(nStdHandle, hHandle);
            }
            else if(!(param0 - 1)) {
                nStdHandle = 0xfffffff5;
                goto loc_409D3E;
            }
            else if(param0 == 2) {
                nStdHandle = 0xfffffff4;
                goto loc_409D3E;
            }
        }
        *(HANDLE*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0)) = hHandle;
        result = 0;
    }
    else {
        int* ptr0 = _errno();
        ptr0[0] = 9;
        unsigned long* ptr1 = __doserrno();
        ptr1[0] = 0;
        result = -1;
    }
    return result;
}

int _setargv(unsigned int param0) {
    int result;
    int v0;
    unsigned int v1 = param0;
    unsigned int v2 = param0;
    if(!gvar_419FF0) {
        __initmbctable();
    }
    int v3 = v0;
    gvar_419A44 = 0;
    GetModuleFileNameA(NULL, (LPSTR)0x419940, 260);
    int v4 = gvar_41B008;
    gvar_4192EC = 0x419940;
    if(!v4 || *(char*)v4 == 0) {
        v4 = 0x419940;
    }
    parse_cmdline(v4, 0, NULL, &v1, &v2);
    if(v1 < 0x3fffffff && v2 < 0xffffffff) {
        size_t _Size = (size_t)(v1 * 4 + v2);
        if(_Size < v2) {
            return -1;
        }
        void* ptr0 = _malloc_crt(_Size);
        if(!ptr0) {
            return -1;
        }
        parse_cmdline(v4, (int)ptr0, (char*)(v1 * 4 + (int)ptr0), &v1, &v2);
        gvar_4192DC = ptr0;
        gvar_4192D8 = v1 - 1;
        result = 0;
    }
    else {
        result = -1;
    }
    return result;
}

errno_t _setdefaultprecision() {
    errno_t v0 = _controlfp_s(NULL, 0x10000, 0x30000);
    if(v0) {
        /*NO_RETURN*/ _invoke_watson(NULL, NULL, NULL, 0, 0);
    }
    return 0;
}

int _setenvp() {
    int result;
    int i;
    int v0;
    if(!gvar_419FF0) {
        i = __initmbctable();
    }
    char* _Str = gvar_4191C0;
    int v1 = 0;
    if(_Str) {
        for(i = (unsigned int)_Str[0] | ((unsigned int)((i >>> 8) & 0xffffff) << 8); (unsigned char)i; i = (unsigned int)_Str[0] | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
            if((unsigned char)i != 61) {
                ++v1;
            }
            i = (int)strlen(_Str);
            _Str = (char*)(i + (int)_Str) + 1;
        }
        unsigned int v2 = sub_408F5B(v1 + 1, 4);
        gvar_4192E4 = v2;
        if(!v2) {
            return -1;
        }
        char* _Str1 = gvar_4191C0;
        int v3 = v0;
        if(_Str1[0]) {
            do {
                size_t v4 = strlen(_Str1);
                if(_Str1[0] != 61) {
                    unsigned int v5 = sub_408F5B((int)(v4 + 1), 1);
                    *(unsigned int*)v2 = v5;
                    if(v5) {
                        errno_t v6 = strcpy_s((char*)v5, (rsize_t)(int)(v4 + 1), _Str1);
                        if(v6) {
                            /*NO_RETURN*/ _invoke_watson(NULL, NULL, NULL, 0, 0);
                        }
                        v2 += 4;
                        goto loc_407B8A;
                    }
                    else {
                        free(gvar_4192E4);
                        gvar_4192E4 = 0;
                        return -1;
                    }
                }
                else {
                loc_407B8A:
                    _Str1 = (char*)(v4 + (int)_Str1) + 1;
                }
            }
            while(_Str1[0]);
            _Str1 = gvar_4191C0;
            goto loc_407B98;
        }
        else {
        loc_407B98:
            free(_Str1);
            gvar_4191C0 = 0;
            *(int*)v2 = 0;
            result = 0;
            gvar_419FF4 = 1;
        }
    }
    else {
        result = -1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int setmbcp(int param0) {
    int v0;
    int v1;
    int v2;
    int v3 = &gvar_417858;
    int v4 = v2;
    int v5 = /*BAD_CALL!*/ _getptd();
    if(*(int*)(v16 + 4) != v15) {
        void* _Block1 = /*BAD_CALL!*/ _malloc_crt(544);
        if(_Block1) {
            int v6 = 0x88;
            int* ptr0 = *(unsigned int*)(v13 + 104);
            void* ptr1 = _Block1;
            while(v6 != 0) {
                *(int*)ptr1 = *ptr0;
                ++ptr0;
                ptr1 = (void*)((int)ptr1 + 4);
                --v6;
            }
            int v7 = 0;
            *(int*)_Block1 = 0;
            int v8 = /*BAD_CALL!*/ _setmbcp_nolock(param0, (int)_Block1);
            if(!v8) {
                int v9 = v13;
                int* ptr2 = *(unsigned int*)(v9 + 104);
                *ptr2 = *ptr2 - 1;
                if(!*ptr2) {
                    void* _Block = *(void**)(v9 + 104);
                    if(_Block != &gvar_418750) {
                        /*BAD_CALL!*/ free(_Block);
                    }
                }
                *(void**)(v9 + 104) = _Block1;
                *(int*)_Block1 = *(int*)_Block1 + 1;
                if(!(*(char*)(v13 + 112) & 0x2) && !(*(char*)&gvar_418C98 & 0x1)) {
                    /*BAD_CALL!*/ _lock(13);
                }
            }
            else if(v8 == -1) {
                if(_Block1 != &gvar_418750) {
                    /*BAD_CALL!*/ free(_Block1);
                }
                else {
                    int* ptr3 = /*BAD_CALL!*/ _errno();
                    do {
                        v0 = v12;
                    }
                    while(v12 < 5);
                    int v10 = 0;
                    do {
                        v0 = v10;
                    }
                    while(v10 < 0x101);
                    while(v7 < 0x100) {
                    }
                    void* _Block2 = gvar_418974;
                    *(int*)_Block2 = *(int*)_Block2 - 1;
                    if(!*(int*)_Block2) {
                        _Block2 = gvar_418974;
                        if(_Block2 != &gvar_418750) {
                            /*BAD_CALL!*/ free(_Block2);
                        }
                    }
                    gvar_418974 = _Block1;
                    *(int*)_Block1 = *(int*)_Block1 + 1;
                    int v11 = /*BAD_CALL!*/ sub_408A63();
                }
            }
        }
    }
    *(int*)__FS_BASE = v1;
    (void*)&sub_408A98{sub_408A98}();
}

int _setmbcp_nolock(int param0, int param1) {
    int v0;
    int result;
    int v1;
    unsigned int v2;
    char v3;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v1);
    int v4 = v0;
    int v5 = param1;
    int v6 = getSystemCP(param0);
    if(!v6) {
        setSBCS(v5);
    }
    else {
        unsigned int v7 = 0;
        char* ptr1 = NULL;
        BOOL v8 = 0;
        char* ptr2 = NULL;
        while(*(unsigned int*)((int)&gvar_418978 + v8) != v6) {
            ++ptr1;
            v8 += 48;
            ptr2 = ptr1;
            if((unsigned int)v8 >= 240) {
                if(v6 == 65000 || v6 == 65001) {
                    __security_check_cookie((uintptr_t)((int)&v1 ^ (int)ptr0));
                    return result;
                }
                v8 = IsValidCodePage((UINT)(v6 & 0xFFFF));
                if(!v8) {
                    __security_check_cookie((uintptr_t)((int)&v1 ^ (int)ptr0));
                    return result;
                }
                v8 = GetCPInfo((UINT)v6, &v2);
                if(!v8) {
                    if(gvar_419A64 != 0) {
                        setSBCS(v5);
                    }
                    __security_check_cookie((uintptr_t)((int)&v1 ^ (int)ptr0));
                    return result;
                }
                memset((void*)(v5 + 24), 0, 0x101);
                *(int*)(v5 + 4) = v6;
                *(int*)(v5 + 540) = 0;
                if(v2 > 1) {
                    char* ptr3 = &v3;
                    if(!v3) {
                    loc_408B79:
                        char* ptr4 = (char*)(v5 + 26);
                        int counter = 254;
                        do {
                            *ptr4 = *ptr4 | 0x8;
                            ++ptr4;
                            --counter;
                        }
                        while(counter);
                        void* ptr5 = CPtoLocaleName(*(int*)(v5 + 4));
                        *(void**)(v5 + 540) = ptr5;
                        *(int*)(v5 + 8) = 1;
                        int* ptr6 = (int*)(v5 + 12);
                        *ptr6 = 0;
                        int* ptr7 = ptr6 + 1;
                        *ptr7 = 0;
                        *(ptr7 + 1) = 0;
                        setSBUpLow(v5);
                        __security_check_cookie((uintptr_t)((int)&v1 ^ (int)ptr0));
                        return result;
                    }
                    do {
                        unsigned int i = (unsigned int)*(ptr3 + 1) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                        if(!(unsigned char)i) {
                            break;
                        }
                        else {
                            unsigned int max = (unsigned int)(i & 0xFF);
                            for(i = (unsigned int)*ptr3; i <= max; ++i) {
                                *(char*)(i + v5 + 25) = *(char*)(i + v5 + 25) | 0x4;
                            }
                            ptr3 += 2;
                        }
                    }
                    while(*ptr3);
                    goto loc_408B79;
                }
                else {
                    *(int*)(v5 + 8) = 0;
                    int* ptr6 = (int*)(v5 + 12);
                    *ptr6 = 0;
                    int* ptr7 = ptr6 + 1;
                    *ptr7 = 0;
                    *(ptr7 + 1) = 0;
                    setSBUpLow(v5);
                    __security_check_cookie((uintptr_t)((int)&v1 ^ (int)ptr0));
                    return result;
                }
            }
        }
        memset((void*)(v5 + 24), 0, 0x101);
        int* ptr8 = (int*)((int)ptr2 * 48);
        int* ptr9 = ptr8;
        char* j = (char*)(ptr8 + 0x106262);
        ptr2 = j;
        do {
            char* ptr10 = j;
            if(*j) {
                do {
                    j = (unsigned int)*(ptr10 + 1) | ((unsigned int)(int*)((int)(int*)((int)j >>> 8) & 0xffffff) << 8);
                    if(!(unsigned char)j) {
                        break;
                    }
                    else {
                        unsigned int v9 = (unsigned int)*ptr10;
                        for(j = (unsigned int)(char*)(j & 0xFF); (unsigned int)j >= v9 && v9 < 0x100; j = (char*)*(ptr10 + 1)) {
                            *(char*)(v9 + v5 + 25) = *(char*)(v9 + v5 + 25) | *(unsigned char*)((int)&gvar_418970 + v7);
                            ++v9;
                        }
                        ptr10 += 2;
                    }
                }
                while(*ptr10);
                j = ptr2;
            }
            ++v7;
            j += 8;
            ptr2 = j;
        }
        while(v7 < 4);
        int v10 = v6;
        *(int*)(v5 + 4) = v6;
        *(int*)(v5 + 8) = 1;
        wchar_t* ptr11 = CPtoLocaleName(v10);
        *(wchar_t**)(v5 + 540) = ptr11;
        int* ptr12 = ptr9;
        short* ptr13 = (short*)(v5 + 12);
        v10 = 6;
        short* ptr14 = (short*)(ptr12 + 1073759);
        int counter1 = 6;
        do {
            ptr12 = (unsigned int)*ptr14 | ((unsigned int)(unsigned short)(int*)((int)ptr12 >>> 16) << 16);
            ++ptr14;
            *ptr13 = (unsigned short)ptr12;
            ++ptr13;
            --counter1;
        }
        while(counter1);
        setSBUpLow(v5);
    }
    __security_check_cookie((uintptr_t)((int)&v1 ^ (int)ptr0));
    return result;
}

int _setmode_nolock(int param0, int param1) {
    int v0;
    int v1 = v0;
    int v2 = param0 >> 5;
    int v3 = (param0 & 0x1f) * 64;
    unsigned int v4 = *(unsigned int*)(v2 * 4 + (int)&gvar_4191D0);
    unsigned int v5 = (unsigned int)*(char*)(v3 + v4 + 4) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
    param0 = v5 & 0x80;
    int v6 = param1;
    unsigned int v7 = (unsigned int)(((unsigned int)(*(char*)(v3 + v4 + 36) * 2) | ((unsigned int)((*(char*)(v3 + v4 + 36) >>> 6) & 0x1 ? 0xffffff: 0) << 8)) >> 1);
    switch(v6) {
        case 262144: {
            *(char*)(v3 + v4 + 4) = (unsigned char)v5 | 0x80;
            v5 = *(unsigned int*)(v2 * 4 + (int)&gvar_4191D0);
            v6 = (unsigned int)((*(char*)(v5 + v3 + 36) & 0x81) | 0x1) | ((unsigned int)0x400 << 8);
            goto loc_40C3CD;
        }
        case 65536: 
        case 131072: {
            *(char*)(v3 + v4 + 4) = (unsigned char)v5 | 0x80;
            v5 = *(unsigned int*)(v2 * 4 + (int)&gvar_4191D0);
            v6 = (unsigned int)((*(char*)(v5 + v3 + 36) & 0x82) | 0x2) | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
        loc_40C3CD:
            *(char*)(v5 + v3 + 36) = (unsigned char)v6;
            break;
        }
        case 16384: {
            *(char*)(v3 + v4 + 4) = (unsigned char)v5 | 0x80;
            unsigned int v8 = *(unsigned int*)(v2 * 4 + (int)&gvar_4191D0);
            *(char*)(v8 + v3 + 36) = *(char*)(v8 + v3 + 36) & 0x80;
            break;
        }
        case 32768: {
            *(char*)(v3 + v4 + 4) = (unsigned char)v5 & 0x7f;
        }
    }
    if(!param0) {
        return 0x8000;
    }
    return ((v7 > 0 ? -1: 0) & 0xc000) + 0x4000;
}

unsigned char* _shift(char* _Str, int param1) {
    unsigned char* result;
    if(param1) {
        size_t v0 = strlen(_Str);
        result = unk_lib_sub13(&_Str[param1], (unsigned char*)_Str, (int*)(v0 + 1));
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _sopen_helper(int param0, int param1, int param2, int param3, int* param4, int param5) {
    int result;
    int v0;
    int v1;
    int v2 = v1;
    int v3 = 0;
    int v4 = 0;
    int* ptr0 = param4;
    if(ptr0) {
        *ptr0 = -1;
        if(param0 == 0 || (param5 != 0 && (unsigned int)(param3 & 0xfffffe7f) > 0)) {
            int* ptr1 = _errno();
            ptr1[0] = 22;
            _invalid_parameter_noinfo();
            result = 22;
            *(int*)__FS_BASE = v0;
            return result;
        }
        int v5 = 0;  // __try{ (see __finally:409396h)
        int v6 = _sopen_nolock((int)&v4, (int)ptr0, param0, param1, param2, param3, param5);
        sub_40939C();
        if(v6) {
            *ptr0 = -1;
        }
        result = v6;
    }
    else {
        int* ptr1 = _errno();
        ptr1[0] = 22;
        _invalid_parameter_noinfo();
        result = 22;
    }
    *(int*)__FS_BASE = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _sopen_nolock(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    int result;
    void* _Block = NULL;
    int v0 = __copy_path_to_wide_string(param2, (int)&_Block);
    if(!v0) {
        result = -1;
    }
    else {
        int v1 = param6;
        int v2 = _wsopen_nolock(param0, param1, (int)_Block, param3, param4, param5);
        free(_Block);
        result = v2;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _sopen_s(int param0, int param1, int param2, int param3, int param4) {
    return _sopen_helper(param1, param2, param3, param4, param0, 1);
}

int _strnicmp(char* _String1, char* _String2, size_t _MaxCount) {
    int result;
    if(gvar_419F34) {
        result = _strnicmp_l(_String1, _String2, _MaxCount, NULL);
    }
    else if(!_String1 || !_String2) {
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        result = 0x7fffffff;
    }
    else if(_MaxCount > 0x7fffffff) {
        int* ptr1 = _errno();
        ptr1[0] = 22;
        _invalid_parameter_noinfo();
        result = 0x7fffffff;
    }
    else {
        result = __ascii_strnicmp(_String1, _String2, (int)_MaxCount);
    }
    return result;
}

int _strnicmp_l(char* _String1, char* _String2, size_t _MaxCount, _locale_t _Locale) {
    int result;
    int v0;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    if(_MaxCount) {
        int v6 = v4;
        _LocaleUpdate::_LocaleUpdate(&v0, (int*)_Locale);
        int v7 = 0x7fffffff;
        if(_String1) {
            char* ptr0 = _String2;
            if(!ptr0 || _MaxCount > 0x7fffffff) {
                goto loc_40BEFB;
            }
            else if(!*(int*)(v0 + 168)) {
                v7 = __ascii_strnicmp(_String1, ptr0, (int)_MaxCount);
            }
            else {
                int* ptr1 = (int*)((int)_String1 - (int)ptr0);
                do {
                    v3 = _tolower_l((int)ptr0[ptr1], (_locale_t)&v0);
                    v5 = _tolower_l((int)ptr0[0], (_locale_t)&v0);
                    ++ptr0;
                    --_MaxCount;
                }
                while(_MaxCount && v3 && v5 == v3);
                v7 = v3 - v5;
            }
        }
        else {
        loc_40BEFB:
            int* ptr2 = _errno();
            ptr2[0] = 22;
            _invalid_parameter_noinfo();
        }
        if(v1) {
            *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
        }
        result = v7;
    }
    else {
        result = 0;
    }
    return result;
}

int _tolower_l(int _C, _locale_t _Locale) {
    int v0;
    char v1;
    char v2;
    int result;
    int v3;
    int v4;
    char v5;
    int v6;
    char v7;
    char v8;
    _LocaleUpdate::_LocaleUpdate(&v4, (int*)_Locale);
    int _C1 = _C;
    if((unsigned int)_C1 < 0x100) {
        int v9 = v4;
        if(*(int*)(v9 + 116) > 1) {
            v3 = _isctype_l(_C1, 1, (_locale_t)&v4);
            v9 = v4;
        }
        else {
            v3 = (unsigned int)*(short*)(_C1 * 2 + *(int*)(v9 + 144)) & 0x1;
        }
        if(v3) {
            v9 = (int)*(char*)(*(int*)(v9 + 148) + _C1);
            if(v5) {
                *(int*)(v6 + 112) = *(int*)(v6 + 112) & 0xfffffffd;
            }
            result = v9;
        }
        else {
            if(v5) {
                *(int*)(v6 + 112) = *(int*)(v6 + 112) & 0xfffffffd;
            }
            goto loc_40C509;
        }
    }
    else {
        if(*(int*)(v4 + 116) > 1) {
            int v10 = _C1 >> 8;
            _C = v10;
            int v11 = _isleadbyte_l((int)(v10 & 0xFF), (_locale_t)&v4);
            if(!v11) {
                goto loc_40C546;
            }
            else {
                int v12 = _C;
                int v13 = 2;
                v2 = (unsigned char)v12;
                v1 = (unsigned char)_C1;
                char v14 = 0;
                v0 = 2;
            }
        }
        else {
        loc_40C546:
            int* ptr0 = _errno();
            v0 = 1;
            ptr0[0] = 42;
            v2 = (unsigned char)_C1;
            v1 = 0;
        }
        int v15 = __crtLCMapStringA(&v4, *(int*)(v4 + 168), 0x100, &v2, v0, &v7, 3, *(int*)(v4 + 4), 1);
        if(!v15) {
            if(v5 != 0) {
                *(int*)(v6 + 112) = *(int*)(v6 + 112) & 0xfffffffd;
            }
        loc_40C509:
            result = _C1;
        }
        else if(v15 == 1) {
            result = (int)v7;
            if(v5) {
                *(int*)(v6 + 112) = *(int*)(v6 + 112) & 0xfffffffd;
            }
        }
        else {
            int v16 = (unsigned int)v8 | ((unsigned int)v7 << 8) | ((unsigned int)0 << 16);
            if(v5) {
                *(int*)(v6 + 112) = *(int*)(v6 + 112) & 0xfffffffd;
            }
            result = v16;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _ungetc_nolock(int _Character, FILE* _Stream) {
    int result;
    FILE* _Stream1 = _Stream;
    if(!(*(char*)&_Stream1[3]._Placeholder & 0x40)) {
        int v0 = _fileno(_Stream1);
        int v1 = v0;
        int v2 = v1 != -1 && v1 != -2 ? (v1 & 0x1f) * 64 + *(unsigned int*)((v0 >> 5) * 4 + (int)&gvar_4191D0): &gvar_418500;
        if(!(*(char*)(v2 + 36) & 0x7f) && !(*(char*)((v1 != -1 && v1 != -2 ? (v1 & 0x1f) * 64 + *(unsigned int*)((v1 >> 5) * 4 + (int)&gvar_4191D0): &gvar_418500) + 36) & 0x80)) {
            goto loc_4081DB;
        }
        else {
            int* ptr0 = _errno();
            ptr0[0] = 22;
            _invalid_parameter_noinfo();
            return -1;
        }
    }
    else {
    loc_4081DB:
        int v3 = _Character;
        if(v3 != -1 && ((*(char*)&_Stream1[3]._Placeholder & 0x1) || ((*(char*)&_Stream1[3]._Placeholder & 0x80) && !(*(char*)&_Stream1[3]._Placeholder & 0x2)))) {
            if(!_Stream1[2]._Placeholder) {
                _getbuf((int)_Stream1);
            }
            FILE v4 = _Stream1->_Placeholder;
            if(_Stream1[2]._Placeholder == v4) {
                if(_Stream1[1]._Placeholder) {
                    return -1;
                }
                _Stream1->_Placeholder = v4 + 1;
            }
            --_Stream1->_Placeholder;
            FILE v5 = _Stream1->_Placeholder;
            if(!(*(char*)&_Stream1[3]._Placeholder & 0x40)) {
                *(char*)v5 = (unsigned char)v3;
            }
            else if((unsigned char)v3 != *(char*)v5) {
                _Stream1->_Placeholder = v5 + 1;
                return -1;
            }
            void* ptr1 = _Stream1[3]._Placeholder;
            _Stream1[1]._Placeholder = (void*)((int)_Stream1[1]._Placeholder + 1);
            _Stream1[3]._Placeholder = (void*)((int)(int*)((int)ptr1 & 0xffffffef) | 0x1);
            result = (int)(v3 & 0xFF);
        }
        else {
            result = -1;
        }
    }
    return result;
}

int _unlock(int param0) {
    int result;
    LeaveCriticalSection(*(LPCRITICAL_SECTION*)(param0 * 8 + (int)&gvar_418CC8));
    return result;
}

int _unlock_fhandle(int param0) {
    int result;
    LeaveCriticalSection((LPCRITICAL_SECTION)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 12));
    return result;
}

void _unlock_file(FILE* _Stream) {
    FILE* ptr0 = _Stream;
    if((unsigned int)ptr0 >= &gvar_418170 && (unsigned int)ptr0 <= 4293584) {
        ptr0[3]._Placeholder = (void*)((int)ptr0[3]._Placeholder & 0xffff7fff);
        _unlock((int)((int*)((int)(int*)(ptr0 - 0x10605c) >> 5) + 4));
    }
    else {
        LeaveCriticalSection((LPCRITICAL_SECTION)(ptr0 + 8));
    }
}

int _unlock_file2(int param0, int param1) {
    int result;
    int v0 = param0;
    if(v0 < 20) {
        *(int*)(param1 + 12) = *(int*)(param1 + 12) & 0xffff7fff;
        return _unlock(v0 + 16);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param1 + 32));
    return result;
}

int _unwind_handler(int param0, int param1, int param2, int* param3, int param4) {
    int result;
    int v0;
    if((*(int*)(param0 + 4) & 0x6)) {
        __security_check_cookie((uintptr_t)(*(int*)(param4 - 4) ^ param4));
        _local_unwind2(*(int*)(v0 + 36), *(unsigned int*)(v0 + 40));
        result = param1;
        *param3 = param1;
    }
    return result;
}

int _unwind_handler4(int param0, int param1, int param2, int* param3) {
    int result;
    int v0;
    if((*(int*)(param0 + 4) & 0x6)) {
        __security_check_cookie((uintptr_t)(*(int*)(param1 + 8) ^ param1));
        _local_unwind4(*(int**)(v0 + 20), *(int*)(v0 + 16), *(int**)(v0 + 12));
        result = param1;
        *param3 = param1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* _updatetlocinfoEx_nolock(unsigned int* param0, int* param1) {
    int* result;
    int* ptr0 = param1;
    if(ptr0 && param0) {
        int* ptr1 = *param0;
        if(ptr1 != ptr0) {
            int* ptr2 = ptr0;
            *param0 = ptr0;
            __addlocaleref(ptr2);
            if(ptr1) {
                __removelocaleref(ptr1);
                if(!ptr1[0] && ptr1 != &gvar_418BE0) {
                    __freetlocinfo((int)ptr1);
                }
            }
        }
        result = ptr0;
    }
    else {
        result = NULL;
    }
    return result;
}

int _whiteout(int* param0, unsigned int* param1) {
    int result;
    int v0;
    int* ptr0 = param0;
    do {
        unsigned int* ptr1 = param1;
        *ptr0 = *ptr0 + 1;
        result = unk_lib_sub15(ptr1);
        if(result == -1) {
            return result;
        }
        v0 = isspace((int)(unsigned char)result);
    }
    while(v0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _write(int param0, int param1, int param2) {
    int result;
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    int v4 = 0;
    if(param0 == -2) {
        unsigned long* ptr0 = __doserrno();
        ptr0[0] = 0;
        int* ptr1 = _errno();
        ptr1[0] = 9;
        goto loc_40636A;
    }
    else if((param0 < 0 || gvar_419FF8 <= (unsigned int)param0)) {
        unsigned long* ptr2 = __doserrno();
        ptr2[0] = 0;
    loc_40635A:
        int* ptr3 = _errno();
        ptr3[0] = 9;
        _invalid_parameter_noinfo();
    loc_40636A:
        result = -1;
    }
    else if(!((int)*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
        unsigned long* ptr4 = __doserrno();
        ptr4[0] = 0;
        goto loc_40635A;
    }
    else {
        __lock_fhandle(param0);
        int v5 = 0;  // __try{ (see __finally:406345h)
        if((*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
            v0 = _write_nolock(param0, param1, param2);
        }
        else {
            int* ptr5 = _errno();
            ptr5[0] = 9;
            unsigned long* ptr6 = __doserrno();
            ptr6[0] = 0;
            v0 = -1;
        }
        sub_40634B();
        result = v0;
    }
    *(int*)__FS_BASE = v1;
    return result;
}

int _write_nolock(unsigned int param0, LPCVOID param1, DWORD nNumberOfBytesToWrite2) {
    unsigned long* ptr0;
    LPCVOID v0;
    char* _SrcCh1;
    int v1;
    DWORD v2;
    LPCVOID v3;
    int v4;
    char v5;
    int v6;
    int v7;
    int* ptr1;
    int v8;
    char v9;
    unsigned int v10;
    char v11;
    int v12;
    char v13;
    int result;
    _chkstk(v12);
    int v14 = 0;
    unsigned int v15 = param0;
    int v16 = v6;
    int* ptr2 = NULL;
    unsigned int v17 = v15;
    DWORD v18 = 0;
    LPCVOID lpBuffer = param1;
    int* ptr3 = NULL;
    if(nNumberOfBytesToWrite2 != 0) {
        if(!param1) {
            unsigned long* ptr4 = __doserrno();
            ptr4[0] = 0;
            int* ptr5 = _errno();
            ptr5[0] = 22;
            _invalid_parameter_noinfo();
        }
        else {
            int v19 = (v15 & 0x1f) * 64;
            int v20 = v15 >> 5;
            void* ptr6 = (unsigned int)v13 | ((unsigned int)v7 << 8);
            unsigned int v21 = *(unsigned int*)((v15 >> 5) * 4 + (int)&gvar_4191D0);
            int v22 = v19;
            v13 = (*(char*)(v19 + v21 + 36) * 2) >> 1;
            if((v13 != 2 && v13 != 1)) {
            loc_406441:
                if((*(char*)(v19 + v21 + 4) & 0x20)) {
                    _lseeki64_nolock(v15, 0, 0, (void*)0x2);
                }
                int v23 = _isatty(v17);
                if(v23 && (*(char*)(*(unsigned int*)(v20 * 4 + (int)&gvar_4191D0) + v22 + 4) & 0x80)) {
                    int v24 = _getptd();
                    char v25 = *(int*)(*(int*)(v24 + 108) + 168) == 0;
                    void* ptr7 = &v10;
                    v4 = v25 ? 1: 0;
                    BOOL v26 = GetConsoleMode(*(HANDLE*)(*(unsigned int*)(v20 * 4 + (int)&gvar_4191D0) + v22), (LPDWORD)ptr7);
                    if(!v26 || (v4 != 0 && !v13)) {
                        goto loc_4067BC;
                    }
                    else {
                        UINT v27 = GetConsoleCP();
                        v3 = lpBuffer;
                        v17 = 0;
                        UINT CodePage = v27;
                        v2 = 0;
                        LPCVOID v28 = v3;
                        if(nNumberOfBytesToWrite2 <= 0) {
                        loc_406BA0:
                            if((!(*(char*)(*(unsigned int*)(v20 * 4 + (int)&gvar_4191D0) + v22 + 4) & 0x40) || *(char*)v3 != 26)) {
                                int* ptr8 = _errno();
                                ptr8[0] = 28;
                                ptr0 = __doserrno();
                                ptr0[0] = 0;
                            }
                        }
                        else {
                            LPCVOID v29 = v28;
                            int* ptr9 = NULL;
                            ptr3 = NULL;
                            v1 = 10;
                            do {
                                v4 = 0;
                                if(!v13) {
                                    ptr9 = (unsigned int)*(char*)v29 | ((unsigned int)(int*)((int)(int*)((int)ptr9 >>> 8) & 0xffffff) << 8);
                                    v10 = (unsigned char)ptr9 == 10 ? 1: 0;
                                    int v30 = *(int*)(v20 * 4 + (int)&gvar_4191D0);
                                    v4 = *(int*)(v20 * 4 + (int)&gvar_4191D0);
                                    if(*(int*)(v30 + v22 + 56) != 0) {
                                        (void*)(ptr6 & 0xFF) = *(char*)(v30 + v22 + 52);
                                        (void*)((ptr6 >>> 8) & 0xFF) = (unsigned char)ptr9;
                                        ptr7 = (void*)0x2;
                                        *(int*)(v22 + v4 + 56) = 0;
                                        _SrcCh1 = (char*)&ptr6;
                                    }
                                    else {
                                        int v31 = isleadbyte((int)(unsigned char)ptr9);
                                        if(v31) {
                                            char* _SrcCh = (char*)v28;
                                            if((unsigned int)(int*)((int)(int*)((int)lpBuffer - (int)_SrcCh) + nNumberOfBytesToWrite2) > 1) {
                                                int v32 = mbtowc(&v2, _SrcCh, 2);
                                                if(v32 == -1) {
                                                    break;
                                                }
                                                else {
                                                    v0 = (LPCVOID)((int)v28 + 1);
                                                    ptr3 = (int*)((char*)ptr3 + 1);
                                                    goto loc_4065F3;
                                                }
                                            }
                                            else {
                                                ptr2 = (int*)((char*)ptr2 + 1);
                                                *(char*)(*(unsigned int*)(v20 * 4 + (int)&gvar_4191D0) + v22 + 52) = _SrcCh[0];
                                                *(int*)(*(unsigned int*)(v20 * 4 + (int)&gvar_4191D0) + v22 + 56) = 1;
                                                break;
                                            }
                                        }
                                        else {
                                            ptr7 = (void*)0x1;
                                            _SrcCh1 = (char*)v28;
                                        }
                                    }
                                    int v33 = mbtowc(&v2, _SrcCh1, (size_t)ptr7);
                                    if(v33 == -1) {
                                        break;
                                    }
                                    else {
                                        v0 = v28;
                                    loc_4065F3:
                                        ptr3 = (int*)((char*)ptr3 + 1);
                                        v28 = (LPCVOID)((int)v0 + 1);
                                        int v34 = WideCharToMultiByte(CodePage, 0, (LPCWCH)&v2, 1, &ptr6, 5, NULL, NULL);
                                        v4 = v34;
                                        if(!v34) {
                                            break;
                                        }
                                        else {
                                            BOOL v35 = WriteFile(*(HANDLE*)(*(unsigned int*)(v20 * 4 + (int)&gvar_4191D0) + v22), &ptr6, (DWORD)v34, &v17, NULL);
                                            if(!v35) {
                                                goto loc_4067A9;
                                            }
                                            else {
                                                ptr2 = (int*)((int)ptr3 + v14);
                                                if((int)v17 < v4) {
                                                    break;
                                                }
                                                else {
                                                    if(v10 != 0) {
                                                        _SrcCh1 = (char*)&v17;
                                                        (void*)(ptr6 & 0xFF) = 13;
                                                        BOOL v36 = WriteFile(*(HANDLE*)(*(unsigned int*)(v20 * 4 + (int)&gvar_4191D0) + v22), &ptr6, 1, (LPDWORD)_SrcCh1, NULL);
                                                        if(!v36) {
                                                            goto loc_4067A9;
                                                        }
                                                        else if((int)v17 < 1) {
                                                            break;
                                                        }
                                                        else {
                                                            ++v14;
                                                            ptr2 = (int*)((char*)ptr2 + 1);
                                                        }
                                                    }
                                                    goto loc_406761;
                                                }
                                            }
                                        }
                                    }
                                }
                                if(v13 == 1 || v13 == 2) {
                                    DWORD v37 = (DWORD)*(short*)v29;
                                    char v38 = (unsigned short)v1 == *(short*)v29;
                                    v2 = v37;
                                    v4 = v38 ? 1: 0;
                                    v28 = (LPCVOID)((int)v29 + 2);
                                    ptr3 = (int*)((char*)ptr3 + 2);
                                    BOOL v39 = sub_40A1C7((short)v37);
                                    if((unsigned short)v39 != (unsigned short)v2) {
                                        goto loc_4067A9;
                                    }
                                    else {
                                        ptr2 = (int*)((char*)ptr2 + 2);
                                        if(v4 != 0) {
                                            v2 = 13;
                                            BOOL v40 = sub_40A1C7(13);
                                            if((unsigned short)v40 != 13) {
                                                goto loc_4067A9;
                                            }
                                            else {
                                                ptr2 = (int*)((char*)ptr2 + 1);
                                                ++v14;
                                            }
                                        }
                                    loc_406761:
                                        ptr9 = ptr3;
                                        v29 = v28;
                                    }
                                }
                            }
                            while((unsigned int)ptr9 < nNumberOfBytesToWrite2);
                            goto loc_4068C8;
                        }
                    }
                }
                else {
                loc_4067BC:
                    unsigned int v41 = *(unsigned int*)(v20 * 4 + (int)&gvar_4191D0);
                    if((*(char*)(v41 + v22 + 4) & 0x80)) {
                        v3 = lpBuffer;
                        v2 = 0;
                        if(!v13) {
                            DWORD v42 = nNumberOfBytesToWrite2;
                            v17 = (unsigned int)v3;
                            if(!v42) {
                                goto loc_406BA0;
                            }
                            else {
                                do {
                                    int v43 = 0;
                                    LPCVOID v44 = &v5;
                                    v4 = 0;
                                    int* ptr10 = (int*)((int)v3 - (int)lpBuffer);
                                    while((unsigned int)ptr10 < v42) {
                                        v43 = (unsigned int)*(char*)v3 | ((unsigned int)((v43 >>> 8) & 0xffffff) << 8);
                                        ptr10 = (int*)((char*)ptr10 + 1);
                                        char v45 = (unsigned char)v43;
                                        v17 = (unsigned int)((int)v3 + 1);
                                        int v46 = v4;
                                        if((unsigned char)v43 == 10) {
                                            ++v14;
                                            *(char*)v44 = 13;
                                            v44 = (LPCVOID)((int)v44 + 1);
                                            ++v46;
                                        }
                                        *(char*)v44 = v45;
                                        v44 = (LPCVOID)((int)v44 + 1);
                                        v3 = (LPCVOID)v17;
                                        v43 = v46 + 1;
                                        v4 = v46 + 1;
                                        if((unsigned int)v43 >= 0x13ff) {
                                            break;
                                        }
                                    }
                                    DWORD nNumberOfBytesToWrite = (DWORD)((int)v44 - (int)&v5);
                                    BOOL v47 = WriteFile(*(HANDLE*)(*(unsigned int*)(v20 * 4 + (int)&gvar_4191D0) + v22), &v5, nNumberOfBytesToWrite, &ptr1, NULL);
                                    if(!v47) {
                                        goto loc_4067A9;
                                    }
                                    else {
                                        ptr2 = (int*)((int)ptr2 + (int)ptr1);
                                        if((int)nNumberOfBytesToWrite > (int)ptr1) {
                                            break;
                                        }
                                        else {
                                            v3 = (LPCVOID)v17;
                                        }
                                    }
                                }
                                while((unsigned int)(int*)((int)v3 - (int)lpBuffer) < v42);
                                v18 = v2;
                            }
                        }
                        else {
                            LPCVOID v48 = v3;
                            if(v13 != 2) {
                                DWORD v49 = nNumberOfBytesToWrite2;
                                v17 = (unsigned int)v48;
                                if(!v49) {
                                    goto loc_406BA0;
                                }
                                else {
                                    v1 = 10;
                                    do {
                                        v10 = 0;
                                        LPCWCH v50 = &v11;
                                        unsigned int v51 = v17;
                                        int* ptr11 = (int*)((int)v48 - (int)v3);
                                        unsigned int v52 = 0;
                                        while((unsigned int)ptr11 < v49) {
                                            WCHAR v53 = *(WCHAR*)v51;
                                            ptr11 = (int*)((char*)ptr11 + 2);
                                            v51 += 2;
                                            v17 = v51;
                                            if((unsigned short)v1 == v53) {
                                                v50[0] = 13;
                                                ++v50;
                                                v51 = v17;
                                                v52 += 2;
                                            }
                                            v50[0] = v53;
                                            v52 += 2;
                                            ++v50;
                                            if(v52 >= 1704) {
                                                break;
                                            }
                                        }
                                        int* ptr12 = (int*)((int)v50 - (int)&v11);
                                        int v54 = WideCharToMultiByte(65001, 0, &v11, (int)(int*)((int)ptr12 - ((int)ptr12 < 0 ? -1: 0)) >> 1, &v9, 0xd55, NULL, NULL);
                                        ptr2 = ptr3;
                                        v18 = v2;
                                        v4 = v54;
                                        if(!v54) {
                                            goto loc_4067A9;
                                        }
                                        else {
                                            int* ptr13 = NULL;
                                            ptr3 = NULL;
                                            do {
                                                BOOL v55 = WriteFile(*(HANDLE*)(*(unsigned int*)(v20 * 4 + (int)&gvar_4191D0) + v22), (LPCVOID)((int)ptr13 + (int)&v9), (DWORD)(v54 - (int)ptr13), &ptr1, NULL);
                                                if(v55) {
                                                    ptr13 = (int*)((int)ptr1 + (int)ptr3);
                                                    v54 = v4;
                                                    ptr3 = ptr13;
                                                }
                                                else {
                                                    DWORD v56 = GetLastError();
                                                    ptr13 = ptr3;
                                                    v18 = v56;
                                                    v54 = v4;
                                                    v2 = v18;
                                                }
                                                break;
                                            }
                                            while(v54 > (int)ptr13);
                                            if(v54 > (int)ptr13) {
                                                break;
                                            }
                                            else {
                                                v48 = (LPCVOID)v17;
                                                v3 = lpBuffer;
                                                ptr2 = (int*)((int)v48 - (int)v3);
                                                ptr3 = (int*)((int)v48 - (int)v3);
                                            }
                                        }
                                    }
                                    while(v49 > (unsigned int)ptr2);
                                }
                            }
                            else if(nNumberOfBytesToWrite2 <= 0) {
                                goto loc_406BA0;
                            }
                            else {
                                v1 = 10;
                                do {
                                    v10 = 0;
                                    LPCVOID v57 = &v5;
                                    int* ptr14 = (int*)((int)v48 - (int)v3);
                                    unsigned int v58 = 0;
                                    while((unsigned int)ptr14 < nNumberOfBytesToWrite2) {
                                        short v59 = *(short*)v48;
                                        ptr14 = (int*)((char*)ptr14 + 2);
                                        v48 = (LPCVOID)((int)v48 + 2);
                                        if((unsigned short)v1 == v59) {
                                            v14 += 2;
                                            *(short*)v57 = 13;
                                            v57 = (LPCVOID)((int)v57 + 2);
                                            v58 += 2;
                                        }
                                        *(short*)v57 = v59;
                                        v58 += 2;
                                        v57 = (LPCVOID)((int)v57 + 2);
                                        if(v58 >= 5118) {
                                            break;
                                        }
                                    }
                                    v4 = (int)v48;
                                    DWORD nNumberOfBytesToWrite1 = (DWORD)((int)v57 - (int)&v5);
                                    BOOL v60 = WriteFile(*(HANDLE*)(*(unsigned int*)(v20 * 4 + (int)&gvar_4191D0) + v22), &v5, nNumberOfBytesToWrite1, &ptr1, NULL);
                                    ptr2 = ptr3;
                                    v18 = v2;
                                    if(!v60) {
                                        goto loc_4067A9;
                                    }
                                    else {
                                        ptr2 = (int*)((int)ptr2 + (int)ptr1);
                                        ptr3 = ptr2;
                                        if((int)nNumberOfBytesToWrite1 > (int)ptr1) {
                                            break;
                                        }
                                        else {
                                            v48 = (LPCVOID)v4;
                                            v3 = lpBuffer;
                                        }
                                    }
                                }
                                while((unsigned int)(int*)((int)v48 - (int)v3) < nNumberOfBytesToWrite2);
                            }
                        }
                    }
                    else {
                        BOOL v61 = WriteFile(*(HANDLE*)(v41 + v22), lpBuffer, nNumberOfBytesToWrite2, &ptr1, NULL);
                        if(v61) {
                            ptr2 = ptr1;
                            v18 = 0;
                        }
                        else {
                        loc_4067A9:
                            v18 = GetLastError();
                        }
                    }
                loc_4068C8:
                    if(!ptr2) {
                        if(!v18) {
                            v3 = lpBuffer;
                            goto loc_406BA0;
                        }
                        else if(v18 == 5) {
                            int* ptr15 = _errno();
                            ptr15[0] = 9;
                            ptr0 = __doserrno();
                            ptr0[0] = 5;
                        }
                        else {
                            _dosmaperr((unsigned int)v18);
                        }
                    }
                }
            }
            else if(!((unsigned char)(unsigned int)~nNumberOfBytesToWrite2 & 0x1)) {
                unsigned long* ptr16 = __doserrno();
                ptr16[0] = 0;
                int* ptr17 = _errno();
                ptr17[0] = 22;
                _invalid_parameter_noinfo();
            }
            else {
                v15 = v17;
                goto loc_406441;
            }
        }
    }
    __security_check_cookie((uintptr_t)((int)&v8 ^ v16));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _wsopen_nolock(int* param0, unsigned int* param1, LPCWSTR lpFileName, int param3, int param4, int param5) {
    DWORD v0;
    void* ptr0;
    int v1;
    int v2;
    int v3;
    DWORD dwCreationDisposition1;
    void* ptr1;
    DWORD dwShareMode;
    DWORD dwDesiredAccess;
    DWORD v4;
    int result1;
    char v5;
    int v6;
    int v7;
    int v8;
    int v9 = v8;
    int result = 0;
    int v10 = 12;
    char v11 = (unsigned char)param3 & 0x80 ? 0: 1;
    int v12 = 0;
    char v13 = 0;
    int v14 = 0;
    if(!v11) {
        v6 = 0;
        v5 = 16;
    }
    else {
        v6 = 1;
        v5 = 0;
    }
    int v15 = unk_lib_sub19(&v12);
    if(v15) {
        /*NO_RETURN*/ _invoke_watson(NULL, NULL, NULL, 0, 0);
    }
    int v16 = param3;
    if(!(v16 & 0x8000) && ((v16 & 0x74000) || v12 != 0x8000)) {
        v5 |= 128;
    }
    int v17 = v16 & 0x3;
    if(v17) {
        int v18 = v17 - 1;
        if(v18) {
            if((v18 - 1)) {
                unsigned long* ptr2 = __doserrno();
                ptr2[0] = 0;
                *param1 = -1;
                int* ptr3 = _errno();
                ptr3[0] = 22;
                _invalid_parameter_noinfo();
                return 22;
            }
            v4 = 0xc0000000;
        }
        else if(((unsigned char)v16 & 0x8) && (v16 & 0x70000)) {
            v4 = 0xc0000000;
            dwDesiredAccess = 0xc0000000;
            goto loc_40B73E;
        }
        else {
            v4 = 0x40000000;
        }
        goto loc_40B73B;
    }
    else {
        v4 = 0x80000000;
    loc_40B73B:
        dwDesiredAccess = v4;
    loc_40B73E:
        int v19 = param4;
        void* ptr4 = (void*)2;
        int v20 = v19 - 16;
        if(v20) {
            int v21 = v20 - 16;
            if(v21) {
                int v22 = v21 - 16;
                if(v22) {
                    int v23 = v22 - 16;
                    if(!v23) {
                        dwShareMode = 3;
                    }
                    else if(v23 != 64) {
                        goto loc_40B7D5;
                    }
                    else {
                        dwShareMode = v4 == 0x80000000 ? 1: 0;
                    }
                }
                else {
                    dwShareMode = 2;
                }
            }
            else {
                dwShareMode = 1;
            }
            goto loc_40B78F;
        }
        else {
            dwShareMode = 0;
        loc_40B78F:
            int v24 = v16 & 0x700;
            char v25 = v24 == 0x400;
            if((v25 || v24 < 0x400)) {
                if((v25 || !v24)) {
                    ptr1 = (void*)0x3;
                }
                else if(v24 == 0x100) {
                    ptr1 = (void*)0x4;
                }
                else if(v24 == 0x200) {
                    goto loc_40B7F6;
                }
                else if(v24 != 0x300) {
                    goto loc_40B7D5;
                }
                else {
                    dwCreationDisposition1 = 2;
                    goto loc_40B7FD;
                }
                goto loc_40B7BD;
            }
            switch(v24) {
                case 1536: {
                loc_40B7F6:
                    ptr1 = (void*)0x5;
                loc_40B7BD:
                    dwCreationDisposition1 = (DWORD)ptr1;
                    break;
                }
                case 1280: 
                case 1792: {
                    dwCreationDisposition1 = 1;
                    break;
                }
                default: {
                loc_40B7D5:
                    unsigned long* ptr5 = __doserrno();
                    ptr5[0] = 0;
                    *param1 = -1;
                    int* ptr6 = _errno();
                    result = 22;
                    ptr6[0] = 22;
                    _invalid_parameter_noinfo();
                    return result;
                }
            }
        loc_40B7FD:
            int v26 = 128;
            int v27 = 0;
            int v28 = 128;
            int v29 = 0;
            if((v16 & 0x100)) {
                v27 = 0;
                if((unsigned char)(~gvar_4192F4 & param5) >= 0) {
                    v26 = 1;
                    v28 = 1;
                }
            }
            if(((unsigned char)v16 & 0x40)) {
                v27 = 0x4000000;
                dwShareMode |= 4;
                v29 = 0x4000000;
                dwDesiredAccess = v4 | 0x10000;
            }
            if((v16 & 0x1000)) {
                v28 = v26 | 0x100;
            }
            if((v16 & 0x2000)) {
                v27 |= 0x2000000;
                v29 = v27;
            }
            if(((unsigned char)v16 & 0x20)) {
                v3 = v27 | 0x8000000;
                goto loc_40B879;
            }
            else if(((unsigned char)v16 & 0x10)) {
                v3 = v27 | 0x10000000;
            loc_40B879:
                v29 = v3;
            }
            int v30 = _alloc_osfhnd();
            unsigned int* ptr7 = param1;
            *ptr7 = v30;
            if(v30 == -1) {
                unsigned long* ptr8 = __doserrno();
                ptr8[0] = 0;
                *ptr7 = -1;
                int* ptr9 = _errno();
                ptr9[0] = 24;
                int* ptr10 = _errno();
                result1 = ptr10[0];
            }
            else {
                ptr1 = (void*)v29;
                int* ptr11 = param0;
                int v31 = v28;
                DWORD dwCreationDisposition = dwCreationDisposition1;
                *ptr11 = 1;
                int v32 = __createFile(lpFileName, dwDesiredAccess, dwShareMode, &v10, dwCreationDisposition, v31, (int)ptr1);
                HANDLE hHandle = (HANDLE)v32;
                if(v32 == -1) {
                    DWORD v33 = dwDesiredAccess;
                    if((v33 & 0xc0000000) == 0xc0000000 && ((unsigned char)param3 & 0x1)) {
                        ptr1 = (void*)v29;
                        DWORD dwDesiredAccess1 = v33 & 0x7fffffff;
                        v31 = v28;
                        dwDesiredAccess = dwDesiredAccess1;
                        v32 = __createFile(lpFileName, dwDesiredAccess1, dwShareMode, &v10, dwCreationDisposition1, v31, (int)ptr1);
                        hHandle = (HANDLE)v32;
                        if(v32 != -1) {
                            goto loc_40B94F;
                        }
                    }
                    int v34 = *ptr7;
                    int v35 = (v34 & 0x1f) * 64;
                    unsigned int v36 = *(unsigned int*)((v34 >> 5) * 4 + (int)&gvar_4191D0);
                    *(char*)(v36 + v35 + 4) = *(char*)(v36 + v35 + 4) & 0xfe;
                    DWORD v37 = GetLastError();
                    _dosmaperr((unsigned int)v37);
                    goto loc_40B942;
                }
                else {
                loc_40B94F:
                    DWORD v38 = GetFileType((HANDLE)v32);
                    if(v38) {
                        if(v38 == 2) {
                            v5 |= 64;
                        }
                        else if(v38 == 3) {
                            v5 |= 8;
                        }
                        _set_osfhnd(*ptr7, hHandle);
                        int v39 = *ptr7;
                        char v40 = v5 | 0x1;
                        v5 = v40;
                        *(char*)((v39 & 0x1f) * 64 + *(unsigned int*)((v39 >> 5) * 4 + (int)&gvar_4191D0) + 4) = v40;
                        int v41 = *ptr7;
                        int v42 = (v41 & 0x1f) * 64;
                        unsigned int v43 = *(unsigned int*)((v41 >> 5) * 4 + (int)&gvar_4191D0);
                        *(char*)(v43 + v42 + 36) = *(char*)(v43 + v42 + 36) & 0x80;
                        int v44 = param3;
                        v43 = (unsigned int)(v40 & 0x48) | ((unsigned int)((v43 >>> 8) & 0xffffff) << 8);
                        char v45 = (unsigned char)v43;
                        if(!(unsigned char)v43) {
                            if(v40 >= 0) {
                            loc_40BCBF:
                                int v46 = *ptr7;
                                int v47 = (v46 & 0x1f) * 64;
                                unsigned int v48 = *(unsigned int*)((v46 >> 5) * 4 + (int)&gvar_4191D0);
                                *(char*)(v48 + v47 + 36) = ((*(char*)(v48 + v47 + 36) ^ v13) & 0x7f) ^ *(char*)(v48 + v47 + 36);
                                int v49 = *ptr7;
                                int v50 = (v49 & 0x1f) * 64;
                                unsigned int v51 = *(unsigned int*)((v49 >> 5) * 4 + (int)&gvar_4191D0);
                                *(char*)(v51 + v50 + 36) = ((unsigned char)(param3 >>> 16) * 128) | (*(char*)(v51 + v50 + 36) & 0x7f);
                                int v52 = param3;
                                if(v45 == 0 && ((unsigned char)v52 & 0x8)) {
                                    int v53 = *ptr7;
                                    int v54 = (v53 & 0x1f) * 64;
                                    unsigned int v55 = *(unsigned int*)((v53 >> 5) * 4 + (int)&gvar_4191D0);
                                    *(char*)(v55 + v54 + 4) = *(char*)(v55 + v54 + 4) | 0x20;
                                    v52 = param3;
                                }
                                DWORD v56 = dwDesiredAccess;
                                if((v56 & 0xc0000000) != 0xc0000000 || !((unsigned char)v52 & 0x1)) {
                                    return result;
                                }
                                CloseHandle(hHandle);
                                int v57 = __createFile(lpFileName, v56 & 0x7fffffff, dwShareMode, &v10, 3, v28, v29);
                                if(v57 != -1) {
                                    int v58 = *ptr7;
                                    *(int*)((v58 & 0x1f) * 64 + *(unsigned int*)((v58 >> 5) * 4 + (int)&gvar_4191D0)) = v57;
                                    return result;
                                }
                                DWORD v59 = GetLastError();
                                _dosmaperr((unsigned int)v59);
                                int v60 = *ptr7;
                                int v61 = (v60 & 0x1f) * 64;
                                unsigned int v62 = *(unsigned int*)((v60 >> 5) * 4 + (int)&gvar_4191D0);
                                *(char*)(v62 + v61 + 4) = *(char*)(v62 + v61 + 4) & 0xfe;
                                _free_osfhnd(*ptr7);
                                goto loc_40B942;
                            }
                            else if(((unsigned char)v44 & 0x2)) {
                                int v63 = _lseeki64_nolock(*ptr7, -1, -1, (void*)0x2);
                                int v64 = v63;
                                v2 = v7;
                                if((v63 & v7) == -1) {
                                    unsigned long* ptr12 = __doserrno();
                                    if(ptr12[0] == 131) {
                                        goto loc_40BA95;
                                    }
                                    else {
                                        _close_nolock(*ptr7);
                                        goto loc_40B942;
                                    }
                                }
                                else {
                                    int v65 = 0;
                                    int v66 = _read_nolock(*ptr7, (int)&v65, 1);
                                    if(!v66 && (unsigned short)v65 == 26) {
                                        int v67 = _chsize_nolock(*ptr7, v64, v2);
                                        if(v67 == -1) {
                                            _close_nolock(*ptr7);
                                            goto loc_40B942;
                                        }
                                    }
                                    v1 = _lseeki64_nolock(*ptr7, 0, 0, NULL);
                                }
                                if((v1 & v7) == -1) {
                                    _close_nolock(*ptr7);
                                    goto loc_40B942;
                                }
                                else {
                                loc_40BA95:
                                    v40 = v5;
                                    v44 = param3;
                                }
                            }
                        }
                        if(v40 < 0) {
                            if(!(v44 & 0x74000)) {
                                int v68 = v12 & 0x74000;
                                v44 = !v68 ? v44 | 0x4000: v68 | v44;
                                param3 = v44;
                            }
                            int v69 = v44 & 0x74000;
                            switch(v69) {
                                case 16384: {
                                    v13 = 0;
                                    break;
                                }
                                case 131072: 
                                case 147456: {
                                    goto loc_40BB0E;
                                }
                                case 262144: 
                                case 278528: {
                                    v13 = 1;
                                    break;
                                }
                                default: {
                                    if((v69 == 0x10000 || v69 == 0x14000) && (v44 & 0x301) == 769) {
                                    loc_40BB0E:
                                        v13 = 2;
                                    }
                                    break;
                                }
                            }
                            if((v44 & 0x70000)) {
                                v2 = 0;
                                if(!(v40 & 0x40)) {
                                    int v70 = dwDesiredAccess & 0xc0000000;
                                    if(v70 != 0x40000000) {
                                        if(v70 != 0x80000000) {
                                            if(v70 != 0xc0000000 || !dwCreationDisposition1) {
                                                goto loc_40BCBF;
                                            }
                                            else {
                                                ptr0 = (void*)0x2;
                                                if(dwCreationDisposition1 <= (unsigned int)(void*)0x2) {
                                                    goto loc_40BC7A;
                                                }
                                                else if(dwCreationDisposition1 > 4) {
                                                    goto loc_40BB6E;
                                                }
                                                else {
                                                    int v71 = _lseeki64_nolock(*ptr7, 0, 0, (void*)0x2);
                                                    if(!(v71 | v7)) {
                                                        goto loc_40BC75;
                                                    }
                                                    else {
                                                        int v72 = _lseeki64_nolock(*ptr7, 0, 0, NULL);
                                                        if((v72 & v7) == -1) {
                                                            _close_nolock(*ptr7);
                                                            goto loc_40B942;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        int v73 = _read_nolock(*ptr7, (int)&v2, 3);
                                        if(v73 == -1) {
                                            _close_nolock(*ptr7);
                                            goto loc_40B942;
                                        }
                                        else {
                                            int v74 = v2;
                                            if(v73 != 2) {
                                                if(v73 != 3) {
                                                    goto loc_40BC5F;
                                                }
                                                else if(v74 == 12565487) {
                                                    v13 = 1;
                                                    goto loc_40BCBF;
                                                }
                                            }
                                            int v75 = (unsigned int)(v74 & 0xFFFF);
                                            if(v75 == 0xfffe) {
                                                _close_nolock(*ptr7);
                                                int* ptr13 = _errno();
                                                result = (int)(void*)0x16;
                                                ptr13[0] = 22;
                                                return result;
                                            }
                                            else if(v75 != 0xfeff) {
                                                goto loc_40BC5F;
                                            }
                                            else {
                                                int v76 = _lseeki64_nolock(*ptr7, 2, 0, NULL);
                                                if((v76 & v7) == -1) {
                                                    _close_nolock(*ptr7);
                                                    goto loc_40B942;
                                                }
                                                else {
                                                    v13 = 2;
                                                    goto loc_40BCBF;
                                                }
                                            }
                                        }
                                    }
                                    if(dwCreationDisposition1) {
                                        ptr0 = (void*)0x2;
                                        if(dwCreationDisposition1 > (unsigned int)(void*)0x2) {
                                            if(dwCreationDisposition1 <= 4) {
                                                int v77 = _lseeki64_nolock(*ptr7, 0, 0, (void*)0x2);
                                                if((v77 | v7)) {
                                                loc_40BC5F:
                                                    int v78 = _lseeki64_nolock(*ptr7, 0, 0, NULL);
                                                    if((v78 & v7) != -1) {
                                                        goto loc_40BCBF;
                                                    }
                                                    else {
                                                        _close_nolock(*ptr7);
                                                        goto loc_40B942;
                                                    }
                                                }
                                                else {
                                                loc_40BC75:
                                                    ptr0 = (void*)0x2;
                                                }
                                            }
                                            else {
                                            loc_40BB6E:
                                                if(dwCreationDisposition1 != 5) {
                                                    goto loc_40BCBF;
                                                }
                                            }
                                        }
                                    loc_40BC7A:
                                        int v79 = 0;
                                        int v80 = (int)v13 - 1;
                                        if(!v80) {
                                            ptr0 = (void*)0x3;
                                            v2 = 12565487;
                                            ptr4 = (void*)0x3;
                                        }
                                        else if(v80 - 1) {
                                            goto loc_40BCBF;
                                        }
                                        else {
                                            v2 = 0xfeff;
                                        }
                                        do {
                                            int v81 = _write(*ptr7, v79 + (int)&v2, (int)ptr0 - v79);
                                            if(v81 != -1) {
                                                ptr0 = ptr4;
                                                v79 += v81;
                                            }
                                            else {
                                                _close_nolock(*ptr7);
                                                goto loc_40B942;
                                            }
                                        }
                                        while((int)ptr0 > v79);
                                    }
                                }
                            }
                        }
                        goto loc_40BCBF;
                    }
                    else {
                        int v82 = *ptr7;
                        int v83 = (v82 & 0x1f) * 64;
                        unsigned int v84 = *(unsigned int*)((v82 >> 5) * 4 + (int)&gvar_4191D0);
                        *(char*)(v84 + v83 + 4) = *(char*)(v84 + v83 + 4) & 0xfe;
                        v0 = GetLastError();
                        _dosmaperr((unsigned int)v0);
                        CloseHandle(hHandle);
                    }
                    if(!v0) {
                        int* ptr14 = _errno();
                        ptr14[0] = 13;
                    }
                loc_40B942:
                    int* ptr15 = _errno();
                    result = ptr15[0];
                }
                result1 = result;
            }
        }
    }
    return result1;
}

void abort() {
    PVOID v0 = __get_sigabrt();
    if(v0) {
        raise(22);
    }
    if((gvar_418E74 & 0x2)) {
        BOOL v1 = →KERNEL32.dll!IsProcessorFeaturePresent(23);
        if(v1) {
            41 = int(41);
        }
        _call_reportfault(3, 0x40000015, 1);
    }
    /*NO_RETURN*/ _exit(3);
}

int atexit(FUNCPTR _) {
    _onexit_t v0 = _onexit((_onexit_t)_);
    return -1 - ((unsigned int)v0 > 0 ? -1: 0);
}

int doexit(int status, int param1, int param2) {
    int result;
    int v0;
    _lock(8);
    int v1 = 0;  // __try{ (see __finally:406F95h)
    if(gvar_4192D4 != 1) {
        gvar_4192FC = 1;
        gvar_4192F8 = (unsigned char)param2;
        if(!param1) {
            PVOID v2 = DecodePointer(gvar_419FEC);
            PVOID v3 = v2;
            if(v2) {
                PVOID v4 = DecodePointer(gvar_419FE8);
                PVOID v5 = v2;
                PVOID v6 = v4;
            loc_406EE6:
                v4 = (PVOID)((int)v4 - 4);
                while(v2 <= v4) {
                    PVOID v7 = EncodePointer(NULL);
                    if(*(int*)v4 == v7) {
                        goto loc_406EE6;
                    }
                    else if(v2 > v4) {
                        break;
                    }
                    else {
                        int v8 = 97170(*(int*)v4);
                        PVOID v9 = EncodePointer(NULL);
                        *(PVOID*)v4 = v9;
                        v8();
                        PVOID v10 = DecodePointer(gvar_419FEC);
                        PVOID v11 = DecodePointer(gvar_419FE8);
                        PVOID v12 = v10;
                        if(v12 == v5 && v11 == v6) {
                            goto loc_406EE6;
                        }
                        else {
                            v5 = v12;
                            v2 = v12;
                            v3 = v12;
                            v6 = v11;
                            v4 = v11;
                            v4 = (PVOID)((int)v4 - 4);
                        }
                    }
                }
            }
            _initterm((_PVFV*)0x411128, (_PVFV*)0x411138);
        }
        _initterm((_PVFV*)0x41113C, (_PVFV*)0x411140);
    }
    sub_406F95();
    if(!param2) {
        gvar_4192D4 = 1;
        result = _unlock(8);
        /*NO_RETURN*/ __crtExitProcess(status);
    }
    *(int*)__FS_BASE = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void exit(int _Code) {
    doexit(_Code, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int fast_error_exit(int param0) {
    if(gvar_419A48 != 2) {
        _FF_MSGBANNER();
    }
    _NMSG_WRITE(param0);
    /*NO_RETURN*/ __crtExitProcess(0xFF);
}

int fclose(FILE* _Stream) {
    int v0;
    int v1;
    int v2 = &gvar_4175E0;
    int v3 = v1;
    int result = -1;
    int v4 = -1;
    if(!_Stream) {
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
    }
    else if((*(char*)&_Stream[3]._Placeholder & 0x40)) {
        _Stream[3]._Placeholder = NULL;
    }
    else {
        _lock_file(_Stream);
        v2 = 0;  // __try{ (see __finally:401F63h)
        result = _fclose_nolock(_Stream);
        sub_401F69();
    }
    *(int*)__FS_BASE = v0;
    return result;
}

int flsall(int param0) {
    int v0;
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    _lock(1);
    int v4 = 0;  // __try{ (see __finally:404C33h)
    for(int i = 0; i < gvar_41B004; ++i) {
        int v5 = *(int*)(i * 4 + gvar_41B000);
        if(v5 && (*(char*)(v5 + 12) & 0x83)) {
            _lock_file2(i, v5);
            v4 = 1;  // __try{ (see __finally:404BFDh)
            FILE* _Stream = *(FILE**)(i * 4 + gvar_41B000);
            if((*(char*)&_Stream[3]._Placeholder & 0x83)) {
                if(param0 == 1) {
                    int v6 = _fflush_nolock(_Stream);
                    if(v6 != -1) {
                        ++v1;
                    }
                }
                else if(!param0 && (*(char*)&_Stream[3]._Placeholder & 0x2)) {
                    int v7 = _fflush_nolock(_Stream);
                    if(v7 == -1) {
                        v3 = -1;
                    }
                }
            }
            v4 = 0;  // } (starts at 404BACh)
            sub_404C06();
        }
    }
    sub_404C39();
    int result = param0 == 1 ? v1: v3;
    *(int*)__FS_BASE = v0;
    return result;
}

FILE* fopen(char* _FileName, char* _Mode) {
    return _fsopen(_FileName, _Mode, 64);
}

size_t fread(void* _Buffer, size_t _ElementSize, size_t _ElementCount, FILE* _Stream) {
    return fread_s(_Buffer, 0xffffffff, _ElementSize, _ElementCount, _Stream);
}

size_t fread_s(void* _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE* _Stream) {
    size_t result;
    int v0;
    int v1;
    int v2 = &gvar_417660;
    int v3 = v1;
    size_t v4 = 0;
    if((_ElementSize == 0 || _ElementCount == 0)) {
    loc_402913:
        result = 0;
    }
    else if(!_Stream) {
        if(_BufferSize != -1) {
            memset(_Buffer, 0, _BufferSize);
        }
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        goto loc_402913;
    }
    else {
        _lock_file(_Stream);
        v2 = 0;  // __try{ (see __finally:40294Fh)
        size_t v5 = _fread_nolock_s(_Buffer, _BufferSize, _ElementSize, _ElementCount, _Stream);
        sub_402955();
        result = v5;
    }
    *(int*)__FS_BASE = v0;
    return result;
}

void free(void* _Block) {
    if(_Block) {
        BOOL v0 = HeapFree(gvar_41993C, 0, _Block);
        if(!v0) {
            int* ptr0 = _errno();
            DWORD v1 = GetLastError();
            v0 = (BOOL)_get_errno_from_oserr((unsigned int)v1);
            ptr0[0] = v0;
        }
    }
}

int fseek(FILE* _Stream, long _Offset, int _Origin) {
    int result;
    int v0;
    int v1;
    int v2 = &gvar_417600;
    int v3 = v1;
    int v4 = 0;
    if(!_Stream || (_Origin && _Origin != 1 && _Origin != 2)) {
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        result = -1;
    }
    else {
        _lock_file(_Stream);
        v2 = 0;  // __try{ (see __finally:402075h)
        int v5 = _fseek_nolock(_Stream, _Offset, _Origin);
        sub_40207B();
        result = v5;
    }
    *(int*)__FS_BASE = v0;
    return result;
}

long ftell(FILE* _Stream) {
    long result;
    int v0;
    int v1;
    int v2 = &gvar_417620;
    int v3 = v1;
    long v4 = 0;
    if(!_Stream) {
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        result = -1;
    }
    else {
        _lock_file(_Stream);
        v2 = 0;  // __try{ (see __finally:402471h)
        long v5 = _ftell_nolock(_Stream);
        sub_402477();
        result = v5;
    }
    *(int*)__FS_BASE = v0;
    return result;
}

size_t fwrite(void* _Buffer, size_t _ElementSize, size_t _ElementCount, FILE* _Stream) {
    size_t result;
    int v0;
    int v1;
    int v2 = &gvar_417640;
    int v3 = v1;
    size_t v4 = 0;
    if((!_ElementSize || !_ElementCount)) {
    loc_402612:
        result = 0;
    }
    else if(!_Stream) {
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        goto loc_402612;
    }
    else {
        _lock_file(_Stream);
        v2 = 0;  // __try{ (see __finally:40264Ch)
        size_t v5 = _fwrite_nolock(_Buffer, _ElementSize, _ElementCount, _Stream);
        sub_402652();
        result = v5;
    }
    *(int*)__FS_BASE = v0;
    return result;
}

int getSystemCP(int param0) {
    int v0;
    char v1;
    int v2;
    _LocaleUpdate::_LocaleUpdate(&v0, NULL);
    gvar_419A64 = 0;
    int result = param0;
    switch(result) {
        case -4: {
            gvar_419A64 = 1;
            result = *(int*)(v0 + 4);
            break;
        }
        case -3: {
            gvar_419A64 = 1;
            result = (int)GetACP();
            break;
        }
        case -2: {
            gvar_419A64 = 1;
            result = (int)GetOEMCP();
            break;
        }
    }
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int isalnum(int _C) {
    if(!gvar_419F34) {
        return (unsigned int)*(short*)(_C * 2 + gvar_418C70) & 0x80;
    }
    return unk_lib_sub17(_C, 0);
}

int isdigit(int _C) {
    if(!gvar_419F34) {
        return (unsigned int)*(short*)(_C * 2 + gvar_418C70) & 0x4;
    }
    return _isdigit_l(_C, NULL);
}

int isleadbyte(int _C) {
    return _isleadbyte_l(_C, NULL);
}

int isspace(int _C) {
    if(!gvar_419F34) {
        return (unsigned int)*(short*)(_C * 2 + gvar_418C70) & 0x8;
    }
    return _isspace_l(_C, NULL);
}

int* main(size_t _ElementSize, int param1) {
    char v0;
    char v1;
    void* _Buffer;
    int v2;
    void v3;
    __SyntheticTypeUnknown v4;
    char v5;
    if(_ElementSize != 4) {
        return (int*)0x1;
    }
    int v6 = param1;
    int v7 = /*BAD_CALL!*/ sub_401960(*(char**)(v6 + 4), &v0);
    if(!(unsigned char)v7) {
        return (int*)0x2;
    }
    int v8 = 0;
    do {
        *(char*)(v8 + &v0) = (((unsigned char)v8 * 2) ^ *(char*)(v8 + &v0)) ^ 0x55;
        ++v8;
    }
    while(v8 < 16);
    FILE* _Stream = fopen(*(char**)(v6 + 8), (char*)&gvar_417534);
    if(!_Stream) {
        return (int*)0x3;
    }
    FILE* ptr0 = fopen(*(char**)(v6 + 12), (char*)&gvar_417538);
    void* _Buffer1 = ptr0;
    if(!ptr0) {
        fclose(_Stream);
        return (int*)0x4;
    }
    int v9 = v2;
    fseek(_Stream, 0, 2);
    long v10 = ftell(_Stream);
    _ElementSize = (size_t)v10;
    sub_4019E0(&v0);
    if((v10 & 0xf)) {
        v10 = (long)((int)(v10 - (v10 & 0xf)) + 16);
    }
    int v11 = fseek(_Stream, 0, 0);
    long long v12 = (unsigned long long)*(__SyntheticTypeUnknownP128)0x41753C;
    long long v13 = (unsigned long long)(*(__SyntheticTypeUnknownP128)0x41753C >>> 0x40X);
    v11 = (unsigned int)8564 | ((unsigned int)(unsigned short)(v11 >>> 16) << 16);
    void* ptr1 = &v4;
    short v14 = (unsigned short)v11;
    v11 &= 0xffffff00;
    v4 = (__SyntheticTypeUnknownU)v12 | ((__SyntheticTypeUnknownU)v13 << 64);
    char v15 = (unsigned char)v11;
    long long v16 = 7810776068204620904L;
    do {
        v11 = (unsigned int)*(char*)ptr1 | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
        ptr1 = (void*)((int)ptr1 + 1);
    }
    while((unsigned char)v11);
    FILE* _Stream1 = (FILE*)_Buffer1;
    fwrite(&v4, (size_t)((int)ptr1 - (int)&v3), 1, _Stream1);
    fwrite(&_ElementSize, 4, 1, _Stream1);
    sub_4019E0(&v0);
    fwrite(_Buffer, 16, 1, _Stream1);
    sub_4019E0(&v0);
    void* _Dst = malloc((size_t)v10);
    _Buffer1 = _Dst;
    memset(_Dst, 0, (size_t)v10);
    fread(_Buffer1, _ElementSize, 1, _Stream);
    fclose(_Stream);
    void* _Dst1 = malloc((size_t)v10);
    memset(_Dst1, 0, (size_t)v10);
    size_t v17 = _ElementSize;
    int v18 = 0;
    do {
        *(char*)(v18 + (int)&v5) = (unsigned char)v18 ^ (unsigned char)v17;
        ++v18;
    }
    while(v18 < 16);
    int v19 = sub_401000(&v1);
    if(v19) {
        return (int*)0x4;
    }
    void* ptr2 = _Buffer;
    sub_401780((int*)v10, &v1, (__SyntheticTypeUnknownP128)&v5);
    fwrite(_Dst1, (size_t)v10, 1, _Stream1);
    free(_Buffer1);
    free(_Dst1);
    fclose(_Stream1);
    return NULL;
}

// Stale decompilation - Refresh this view to re-decompile this code
void mainCRTStartup() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void* malloc(size_t _Size) {
    void* result1;
    void* result1;
    void* result1;
    LPVOID result;
    int v0;
    void* ptr0;
    if(_Size <= 0xffffffe0) {
        void* ptr1 = ptr0;
        do {
            HANDLE hHeap = gvar_41993C;
            if(!hHeap) {
                _FF_MSGBANNER();
                _NMSG_WRITE(30);
                /*NO_RETURN*/ __crtExitProcess(0xFF);
            }
            result = HeapAlloc(hHeap, 0, (SIZE_T)(_Size != 0 ? _Size: 1));
            if(result) {
                return result;
            }
            else if(gvar_419938 == 0) {
                int* ptr2 = _errno();
                ptr2[0] = 12;
                int* ptr3 = _errno();
                ptr3[0] = 12;
                return result;
            }
            v0 = _callnewh(_Size);
        }
        while(v0);
        int* ptr3 = _errno();
        ptr3[0] = 12;
        result1 = result;
    }
    else {
        _callnewh(_Size);
        int* ptr4 = _errno();
        ptr4[0] = 12;
        result1 = NULL;
    }
    return result1;
}

int mbtowc(wchar_t* _DstCh, char* _SrcCh, size_t _SrcSizeInBytes) {
    return _mbtowc_l(_DstCh, _SrcCh, _SrcSizeInBytes, NULL);
}

int memcpy_s(unsigned char* _Dst, size_t _Size, unsigned char* param2, int* param3) {
    void* ptr0;
    int* ptr1;
    int result;
    if(!param3) {
        result = 0;
    }
    else if(!_Dst) {
        int* ptr2 = _errno();
        ptr2[0] = 22;
        _invalid_parameter_noinfo();
        result = 22;
    }
    else if(param2 && _Size >= (unsigned int)param3) {
        unk_lib_sub2(_Dst, param2, param3);
        result = 0;
    }
    else {
        memset(_Dst, 0, _Size);
        if(!param2) {
            ptr1 = _errno();
            ptr0 = (void*)0x16;
            goto loc_40737B;
        }
        else if(_Size < (unsigned int)param3) {
            ptr1 = _errno();
            ptr0 = (void*)0x22;
        loc_40737B:
            ptr1[0] = (int)ptr0;
            _invalid_parameter_noinfo();
            result = (int)ptr0;
        }
        else {
            result = (int)(void*)0x16;
        }
    }
    return result;
}

void* memset(void* _Dst, int _Val, size_t _Size) {
    // Decompilation error
}

int parse_cmdline(int param0, int param1, char* param2, int param3, int param4) {
    int v0;
    int v1 = param3;
    int v2 = v0;
    int v3 = param4;
    int v4 = param0;
    *(int*)v3 = 0;
    char* ptr0 = param2;
    *(int*)v1 = 1;
    int i = param1;
    if(i) {
        *(char**)i = ptr0;
        i += 4;
        param1 = i;
    }
    int j = 0;
    param0 = 0;
    do {
        if(*(char*)v4 == 34) {
            i = j ? 0: 1;
            ++v4;
            j = i;
            i = (unsigned int)34 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
            param0 = j;
        }
        else {
            *(int*)v3 = *(int*)v3 + 1;
            if(ptr0) {
                i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                *ptr0 = (unsigned char)i;
                ++ptr0;
            }
            i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
            ++v4;
            (param4 >>> 24) & 0xFF = (unsigned char)i;
            i = unk_lib_sub16((int)(i & 0xFF));
            if(i) {
                *(int*)v3 = *(int*)v3 + 1;
                if(ptr0) {
                    i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                    *ptr0 = (unsigned char)i;
                    ++ptr0;
                }
                ++v4;
            }
            i = (unsigned int)(unsigned char)(param4 >>> 24) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
            if(!(unsigned char)i) {
                --v4;
                goto loc_407A10;
            }
            else {
                j = param0;
            }
        }
    }
    while(j || ((unsigned char)i != 32 && (unsigned char)i != 9));
    if(ptr0) {
        *(ptr0 - 1) = 0;
    }
loc_407A10:
    param4 = 0;
    while(*(char*)v4) {
        for(i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8); (unsigned char)i == 32 || (unsigned char)i == 9; i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
            ++v4;
        }
        if(!*(char*)v4) {
            break;
        }
        else {
            int v5 = param1;
            if(v5) {
                *(char**)v5 = ptr0;
                param1 = v5 + 4;
            }
            i = param3;
            *(int*)i = *(int*)i + 1;
            while(1) {
                v5 = 1;
                for(j = 0; *(char*)v4 == 92; ++j) {
                    ++v4;
                }
                if(*(char*)v4 == 34) {
                    if(!((unsigned char)j & 0x1)) {
                        if(param4) {
                            i = v4 + 1;
                            if(*(char*)i != 34) {
                                goto loc_407A73;
                            }
                            else {
                                v4 = i;
                            }
                        }
                        else {
                        loc_407A73:
                            v5 = 0;
                            i = param4 == 0 ? 1: 0;
                            param4 = i;
                        }
                    }
                    j >>>= 1;
                }
                while(j) {
                    --j;
                    if(ptr0) {
                        *ptr0 = 92;
                        ++ptr0;
                    }
                    *(int*)v3 = *(int*)v3 + 1;
                }
                i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                if(!(unsigned char)i || (param4 == 0 && ((unsigned char)i == 32 || (unsigned char)i == 9))) {
                    break;
                }
                else {
                    if(v5) {
                        i = unk_lib_sub16((int)(unsigned char)i);
                        if(ptr0) {
                            if(i) {
                                i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                                *ptr0 = (unsigned char)i;
                                ++ptr0;
                                ++v4;
                                *(int*)v3 = *(int*)v3 + 1;
                            }
                            i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                            *ptr0 = (unsigned char)i;
                            ++ptr0;
                        }
                        else if(i) {
                            ++v4;
                            *(int*)v3 = *(int*)v3 + 1;
                        }
                        *(int*)v3 = *(int*)v3 + 1;
                    }
                    ++v4;
                }
            }
            if(ptr0) {
                *ptr0 = 0;
                ++ptr0;
            }
            *(int*)v3 = *(int*)v3 + 1;
        }
    }
    int v6 = param1;
    if(v6) {
        *(int*)v6 = 0;
    }
    int result = param3;
    *(int*)result = *(int*)result + 1;
    return result;
}

int raise(int _Signal) {
    PVOID Ptr;
    unsigned int* ptr0;
    int result;
    int v0;
    int v1;
    int result;
    PVOID v2;
    int result;
    int v3;
    int v4;
    int v5 = &gvar_4179A0;
    int v6 = v4;
    int v7 = 0;
    int v8 = 0;
    int v9 = 0;
    int v10 = 0;
    LPVOID v11 = NULL;
    LPVOID v12 = NULL;
    int v13 = _Signal;
    if(v13 == 11) {
    loc_40A402:
        v11 = _getptd_noexit();
        if(!v11) {
            result = -1;
            *(int*)__FS_BASE = v3;
            return result;
        }
        unsigned int v14 = /*BAD_CALL!*/ siglookup(v13, *(unsigned int*)((int)v11 + 92));
        ptr0 = (unsigned int*)(v14 + 8);
        v2 = *(PVOID*)(v14 + 8);
        goto loc_40A491;
    }
    else if(v13 > 11) {
        if(v13 == 15) {
            ptr0 = (unsigned int*)&gvar_419F04;
            Ptr = gvar_419F04;
        }
        else if(v13 == 21) {
            ptr0 = (unsigned int*)&gvar_419EFC;
            Ptr = gvar_419EFC;
        }
        else if(v13 != 22) {
            int* ptr1 = _errno();
            ptr1[0] = 22;
            _invalid_parameter_noinfo();
            result = -1;
            *(int*)__FS_BASE = v3;
            return result;
        }
        else {
        loc_40A45C:
            ptr0 = (unsigned int*)&gvar_419F00;
            Ptr = gvar_419F00;
        }
    loc_40A486:
        v9 = 1;
        v10 = 1;
        v2 = DecodePointer(Ptr);
    loc_40A491:
        PVOID v15 = v2;
        if(v2 != 1) {
            if(!v2) {
                /*NO_RETURN*/ _exit(3);
            }
            if(v9) {
                _lock(0);
            }
            v5 = 0;  // __try{ (see __finally:40A53Dh)
            if(v13 == 8 || v13 == 11 || v13 == 4) {
                v7 = *(int*)((int)v11 + 96);
                *(int*)((int)v11 + 96) = 0;
                if(v13 != 8) {
                loc_40A517:
                    PVOID v16 = EncodePointer(NULL);
                    *ptr0 = v16;
                }
                else {
                    v8 = *(int*)((int)v11 + 100);
                    *(int*)((int)v11 + 100) = 140;
                    goto loc_40A4E6;
                }
            }
            else {
            loc_40A4E6:
                if(v13 != 8) {
                    goto loc_40A517;
                }
                else {
                    v1 = 3;
                    v0 = 3;
                }
                while(v1 < 12) {
                    *(int*)(v1 * 12 + *(int*)((int)v11 + 92) + 8) = 0;
                    ++v1;
                    v0 = v1;
                }
            }
            v5 = -2;  // } (starts at 40A4B4h)
            sub_40A546();
            if(v13 == 8) {
                v15(8, *(int*)((int)v11 + 100));
            }
            else {
                v15(v13);
            }
            if(v13 == 8 || v13 == 11 || v13 == 4) {
                *(int*)((int)v11 + 96) = v7;
                if(v13 == 8) {
                    *(int*)((int)v11 + 100) = v8;
                }
            }
        }
        result = 0;
    }
    else if(v13 != 2) {
        if(v13 != 4) {
            if(v13 == 6) {
                goto loc_40A45C;
            }
            else if(v13 - 6 != 2) {
                int* ptr1 = _errno();
                ptr1[0] = 22;
                _invalid_parameter_noinfo();
                result = -1;
                *(int*)__FS_BASE = v3;
                return result;
            }
        }
        goto loc_40A402;
    }
    else {
        ptr0 = (unsigned int*)&gvar_419EF8;
        Ptr = gvar_419EF8;
        goto loc_40A486;
    }
    *(int*)__FS_BASE = v3;
    return result;
}

void* realloc(void* _Block, size_t _Size) {
    int* ptr0;
    void* result1;
    int v0;
    if(!_Block) {
        result1 = malloc(_Size);
    }
    else {
        SIZE_T dwBytes = (SIZE_T)_Size;
        if(!dwBytes) {
            free(_Block);
        }
        else {
            int v1 = v0;
            while(dwBytes <= 0xffffffe0) {
                if(!dwBytes) {
                    dwBytes = 1;
                }
                LPVOID result = HeapReAlloc(gvar_41993C, 0, _Block, dwBytes);
                if(!result) {
                    if(gvar_419938 != 0) {
                        int v2 = _callnewh((size_t)dwBytes);
                        if(v2) {
                            continue;
                        }
                        else {
                            int* ptr1 = _errno();
                            DWORD v3 = GetLastError();
                            ptr0 = (int*)_get_errno_from_oserr((unsigned int)v3);
                            ptr1[0] = (int)ptr0;
                            return NULL;
                        }
                    }
                    else {
                        int* ptr2 = _errno();
                        DWORD v4 = GetLastError();
                        unsigned int v5 = _get_errno_from_oserr((unsigned int)v4);
                        ptr2[0] = (int)v5;
                    }
                }
                return result;
            }
            _callnewh((size_t)dwBytes);
            ptr0 = _errno();
            ptr0[0] = 12;
        }
        result1 = NULL;
    }
    return result1;
}

char setSBCS(int param0) {
    char result;
    int v0 = param0;
    void* _Dst = (void*)(v0 + 24);
    memset(_Dst, 0, 0x101);
    *(int*)(v0 + 4) = 0;
    *(int*)(v0 + 8) = 0;
    *(int*)(v0 + 540) = 0;
    int counter = 0x101;
    *(int*)(v0 + 12) = 0;
    *(int*)(v0 + 16) = 0;
    *(int*)(v0 + 20) = 0;
    do {
        *(char*)_Dst = *(char*)(&gvar_418750 - v0 + (int)_Dst);
        _Dst = (void*)((int)_Dst + 1);
        --counter;
    }
    while(counter);
    char* ptr0 = (char*)(v0 + 0x119);
    int counter1 = 0x100;
    do {
        result = *(char*)(&gvar_418750 - v0 + (int)ptr0);
        *ptr0 = *(char*)(&gvar_418750 - v0 + (int)ptr0);
        ++ptr0;
        --counter1;
    }
    while(counter1);
    return result;
}

int setSBUpLow(int param0) {
    int v0;
    char v1;
    short v2;
    char v3;
    char v4;
    int v5;
    char v6;
    char v7;
    int result;
    int v8;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v5);
    int v9 = v8;
    int v10 = param0;
    BOOL v11 = GetCPInfo(*(UINT*)(v10 + 4), &v6);
    if(v11) {
        unsigned int i = 0;
        do {
            *(char*)(i + &v1) = (unsigned char)i;
            ++i;
        }
        while(i < 0x100);
        i = (unsigned int)v7 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
        char* ptr1 = &v7;
        v1 = 32;
        while((unsigned char)i) {
            unsigned int v12 = (unsigned int)*(ptr1 + 1);
            for(i = (unsigned int)(i & 0xFF); i <= v12 && i < 0x100; ++i) {
                *(char*)(i + &v1) = 32;
            }
            ptr1 += 2;
            i = (unsigned int)*ptr1 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
        }
        __crtGetStringTypeA(NULL, 1, &v1, 0x100, &v2, *(int*)(v10 + 4), 0);
        __crtLCMapStringA(NULL, *(int*)(v10 + 540), 0x100, &v1, 0x100, &v3, 0x100, *(int*)(v10 + 4), 0);
        __crtLCMapStringA(NULL, *(int*)(v10 + 540), 0x200, &v1, 0x100, &v4, 0x100, *(int*)(v10 + 4), 0);
        unsigned int v13 = 0;
        do {
            int v14 = (unsigned int)*(short*)(v13 * 2 + &v2);
            if(((unsigned char)v14 & 0x1)) {
                *(char*)(v13 + v10 + 25) = *(char*)(v13 + v10 + 25) | 0x10;
                v14 = (unsigned int)*(char*)(v13 + &v3) | ((unsigned int)((v14 >>> 8) & 0xffffff) << 8);
                goto loc_4087CA;
            }
            else if(((unsigned char)v14 & 0x2)) {
                *(char*)(v13 + v10 + 25) = *(char*)(v13 + v10 + 25) | 0x20;
                v14 = (unsigned int)*(char*)(v13 + &v4) | ((unsigned int)((v14 >>> 8) & 0xffffff) << 8);
            loc_4087CA:
                *(char*)(v13 + v10 + 0x119) = (unsigned char)v14;
            }
            else {
                *(char*)(v13 + v10 + 0x119) = 0;
            }
            ++v13;
        }
        while(v13 < 0x100);
    }
    else {
        int v15 = -97;
        int v16 = v10 + 0x119;
        unsigned int v17 = 0;
        int v18 = -97 - v16;
        int v19 = v18;
        do {
            char* ptr2 = (char*)(v17 + v16);
            int* ptr3 = (int*)(v18 + (int)ptr2);
            int* ptr4 = ptr3;
            if((unsigned int)(ptr3 + 8) <= 25) {
                *(char*)(v17 + v10 + 25) = *(char*)(v17 + v10 + 25) | 0x10;
                v0 = v17 + 32;
                goto loc_408823;
            }
            else if((unsigned int)ptr4 <= 25) {
                int v20 = v17 + v10;
                *(char*)(v20 + 25) = *(char*)(v20 + 25) | 0x20;
                v0 = v17 - 32;
            loc_408823:
                *ptr2 = (unsigned char)v0;
            }
            else {
                *ptr2 = 0;
            }
            v18 = v19;
            v16 = v10 + 0x119;
            ++v17;
        }
        while(v17 < 0x100);
    }
    __security_check_cookie((uintptr_t)((int)&v5 ^ (int)ptr0));
    return result;
}

unsigned int siglookup(int param0, unsigned int param1) {
    unsigned int v0 = param1;
    while(*(int*)(v0 + 4) != param0) {
        v0 += 12;
        if(param1 + 144 <= v0) {
            break;
        }
    }
    return param1 + 144 > v0 && *(int*)(v0 + 4) == param0 ? v0: 0;
}

errno_t strcpy_s(char* _Destination, rsize_t _SizeInBytes, char* _Source) {
    errno_t result;
    void* ptr0;
    int* ptr1;
    char* ptr2 = _Destination;
    if(ptr2) {
        rsize_t v0 = _SizeInBytes;
        if(!v0) {
            ptr1 = _errno();
            ptr0 = (void*)0x16;
            ptr1[0] = (int)ptr0;
            _invalid_parameter_noinfo();
            return (errno_t)ptr0;
        }
        char* ptr3 = _Source;
        if(!ptr3) {
            ptr2[0] = 0;
            ptr1 = _errno();
            ptr0 = (void*)0x16;
            ptr1[0] = (int)ptr0;
            _invalid_parameter_noinfo();
            return (errno_t)ptr0;
        }
        int* ptr4 = (int*)((int)ptr2 - (int)ptr3);
        do {
            char v1 = ptr3[0];
            ptr3[ptr4] = ptr3[0];
            ++ptr3;
            if(!v1) {
                break;
            }
            else {
                --v0;
            }
        }
        while(v0);
        if(!v0) {
            ptr2[0] = 0;
            ptr1 = _errno();
            ptr0 = (void*)0x22;
            ptr1[0] = (int)ptr0;
            _invalid_parameter_noinfo();
            return (errno_t)ptr0;
        }
        result = 0;
    }
    else {
        ptr1 = _errno();
        ptr0 = (void*)0x16;
        ptr1[0] = (int)ptr0;
        _invalid_parameter_noinfo();
        result = (errno_t)ptr0;
    }
    return result;
}

size_t strlen(char* _Str) {
    char v0;
    char* ptr0 = _Str;
    if((int*)((int)ptr0 & 0x3)) {
        do {
            v0 = ptr0[0];
            ++ptr0;
        }
        while(v0 && (int*)((int)ptr0 & 0x3));
    }
    else {
        do {
            char v1 = *(int*)&ptr0[0];
            ptr0 += 4;
            if((((v1 + 0x7efefeff) ^ (int)~v1) & 0x81010100)) {
                int v2 = *(int*)&ptr0[-4];
                if(!(unsigned char)v2) {
                    return (size_t)((int)(int*)(ptr0 - 4) - (int)_Str);
                }
                else if(!(unsigned char)(v2 >>> 8)) {
                    return (size_t)((int)(int*)(ptr0 - 3) - (int)_Str);
                }
                else if(!(v2 & 0xff0000)) {
                    return (size_t)((int)(int*)(ptr0 - 2) - (int)_Str);
                }
                else if(!(v2 & 0xff000000)) {
                    break;
                }
            }
        }
        while(1);
    }
    return (size_t)((int)(int*)(ptr0 - 1) - (int)_Str);
}

int strncmp(char* _Str1, char* _Str2, size_t _MaxCount) {
    size_t v0;
    size_t v1;
    char* ptr0 = _Str2;
    size_t v2 = _MaxCount;
    if(v2) {
        char* ptr1 = (char*)((int)_Str1 - (int)ptr0);
        if((int*)((int)ptr0 & 0x3)) {
        loc_40BE00:
            do {
                v1 = (size_t)ptr1[ptr0];
                char v3 = (unsigned char)ptr1[ptr0] < (unsigned char)ptr0[0];
                if((unsigned char)v1 != ptr0[0]) {
                    return (v3 ? -1: 0) | 0x1;
                }
                v0 = v1 ? v2: v1;
                ++ptr0;
                v2 = v0 - 1;
                if(v0 >= 1 && !(v2 ? 0: 1)) {
                    if((unsigned char)ptr0 & 0x3) {
                        goto loc_40BE00;
                    }
                    else {
                        goto loc_40BE25;
                    }
                }
            }
            while(v0 >= 1 && !(v2 ? 0: 1));
        }
        else {
        loc_40BE25:
            while(1) {
                if((unsigned int)(int*)((int)(int*)((int)ptr1 + (int)ptr0) & 0xfff) > 0xffc) {
                    goto loc_40BE00;
                }
                else {
                    v1 = *(int*)&ptr1[ptr0];
                    if(*(int*)&ptr0[0] != v1) {
                        goto loc_40BE00;
                    }
                    else {
                        size_t v4 = v2;
                        v2 -= 4;
                        if(v4 >= 4 && !(v2 ? 0: 1)) {
                            ptr0 += 4;
                            if(!((v1 - 0x1010101) & (unsigned int)~v1 & 0x80808080)) {
                                continue;
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

char* strncpy(char* _Destination, char* _Source, size_t _Count) {
    int v0;
    char* ptr0;
    int v1;
    size_t counter = _Count;
    if(counter) {
        int v2 = v1;
        size_t v3 = counter;
        char* ptr1 = _Source;
        ptr0 = _Destination;
        if(!(int*)((int)ptr1 & 0x3)) {
            counter >>>= 2;
            if(counter) {
                goto loc_401CB4;
            }
            else {
            loc_401C53:
                do {
                    v0 = (unsigned int)ptr1[0] | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                    ++ptr1;
                    ptr0[0] = (char)v0;
                    ++ptr0;
                    if(!(unsigned char)v0) {
                    loc_401C98:
                        --v3;
                        if(!v3) {
                            return _Destination;
                        }
                        ptr0[0] = (char)v0;
                        ++ptr0;
                        goto loc_401C98;
                    }
                    else {
                        --v3;
                    }
                }
                while(v3);
                return _Destination;
            }
        }
        else {
            do {
                v0 = (unsigned int)ptr1[0] | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                ++ptr1;
                ptr0[0] = (char)v0;
                ++ptr0;
                --counter;
                if(!counter) {
                    return _Destination;
                }
                else if(!(unsigned char)v0) {
                    if((int*)((int)ptr0 & 0x3)) {
                        do {
                            ptr0[0] = (char)v0;
                            ++ptr0;
                            --counter;
                            if(!counter) {
                                return _Destination;
                            }
                        }
                        while((int*)((int)ptr0 & 0x3));
                    }
                    goto loc_401C8C;
                }
            }
            while((int*)((int)ptr1 & 0x3));
            v3 = counter;
            counter >>>= 2;
            if(!counter) {
                goto loc_401C4E;
            }
            else {
            loc_401CB4:
                do {
                    char v4 = *(int*)&ptr1[0];
                    v0 = (v4 + 0x7efefeff) ^ (int)~v4;
                    char v5 = *(int*)&ptr1[0];
                    ptr1 += 4;
                    if((v0 & 0x81010100)) {
                        if(!(unsigned char)v5) {
                            *(int*)&ptr0[0] = 0;
                        }
                        else if(!(unsigned char)(v5 >>> 8)) {
                            *(int*)&ptr0[0] = (char)(unsigned char)v5;
                        }
                        else if(!(v5 & 0xff0000)) {
                            *(int*)&ptr0[0] = (char)(unsigned short)v5;
                        }
                        else if(v5 & 0xff000000) {
                            goto loc_401CA5;
                        }
                        else {
                            *(int*)&ptr0[0] = v5;
                        }
                        ptr0 += 4;
                        v0 = 0;
                        --counter;
                        if(!counter) {
                            goto loc_401D13;
                        }
                        else {
                            goto loc_401D07;
                        }
                    }
                    else {
                    loc_401CA5:
                        *(int*)&ptr0[0] = v5;
                        ptr0 += 4;
                        --counter;
                    }
                }
                while(!counter);
            loc_401C4E:
                v3 &= 3;
            }
            if(!v3) {
                return _Destination;
            }
            goto loc_401C53;
        loc_401C8C:
            v3 = counter;
            counter >>>= 2;
            if(!counter) {
                ptr0[0] = (char)v0;
                ++ptr0;
                goto loc_401C98;
            }
            else {
            loc_401D07:
                v0 = 0;
            }
            do {
                *(int*)&ptr0[0] = 0;
                ptr0 += 4;
                --counter;
            }
            while(counter);
        loc_401D13:
            v3 &= 3;
            if(!v3) {
                return _Destination;
            }
        }
    }
    else {
        return _Destination;
    }
    ptr0[0] = (char)v0;
    ++ptr0;
    goto loc_401C98;
}

char* strrchr(char* _Str, int _Ch) {
    // Decompilation error
}

int sub_401000(int* param0) {
    char* ptr0;
    int v0;
    char* ptr1 = ptr0;
    if(ptr1) {
        int* ptr2 = param0;
        if(ptr2) {
            *(ptr2 + 60) = 10;
            int* ptr3 = ptr2 + 1;
            *ptr2 = ((((((unsigned int)*ptr1 * 0x100) ^ (unsigned int)*(ptr1 + 1)) * 0x100) ^ (unsigned int)*(ptr1 + 2)) * 0x100) ^ (unsigned int)*(ptr1 + 3);
            *ptr3 = ((((((unsigned int)*(ptr1 + 4) * 0x100) ^ (unsigned int)*(ptr1 + 5)) * 0x100) ^ (unsigned int)*(ptr1 + 6)) * 0x100) ^ (unsigned int)*(ptr1 + 7);
            *(ptr2 + 2) = ((((((unsigned int)*(ptr1 + 8) * 0x100) ^ (unsigned int)*(ptr1 + 9)) * 0x100) ^ (unsigned int)*(ptr1 + 10)) * 0x100) ^ (unsigned int)*(ptr1 + 11);
            int v1 = (unsigned int)*(ptr1 + 13);
            int v2 = v0;
            int v3 = ((((((unsigned int)*(ptr1 + 12) * 0x100) ^ v1) * 0x100) ^ (unsigned int)*(ptr1 + 14)) * 0x100) ^ (unsigned int)*(ptr1 + 15);
            *(ptr2 + 3) = v3;
            int v4 = ((*(unsigned int*)((v3 & 0xFF) * 4 + (int)&gvar_416130) & 0xff00) ^ ((((*(unsigned int*)((unsigned int)(unsigned char)(v3 >>> 16) * 4 + (int)&gvar_416130) ^ 0x1000000) & 0xff000000) ^ (*(unsigned int*)((unsigned int)(unsigned char)(v3 >>> 8) * 4 + (int)&gvar_416130) & 0xff0000)) ^ (unsigned int)*(char*)((v3 >>> 24) * 4 + (int)&gvar_416130))) ^ *ptr2;
            int v5 = *ptr3 ^ v4;
            *(ptr2 + 4) = v4;
            int v6 = *(ptr2 + 2);
            *(ptr2 + 5) = v5;
            int v7 = v5 ^ v6;
            *(ptr2 + 6) = v7;
            *(ptr2 + 7) = v7 ^ v3;
            int* ptr4 = (int*)&gvar_414D04;
            do {
                int v8 = *(ptr3 + 6);
                ptr3 += 4;
                int v9 = (((*(unsigned int*)((v8 & 0xFF) * 4 + (int)&gvar_416130) & 0xff00) ^ (((*(unsigned int*)((unsigned int)(unsigned char)(v8 >>> 8) * 4 + (int)&gvar_416130) & 0xff0000) ^ (*(unsigned int*)((unsigned int)(unsigned char)(v8 >>> 16) * 4 + (int)&gvar_416130) & 0xff000000)) ^ (unsigned int)*(char*)((v8 >>> 24) * 4 + (int)&gvar_416130))) ^ *(ptr3 - 1)) ^ *ptr4;
                ++ptr4;
                *(ptr3 + 3) = v9;
                int v10 = *ptr3 ^ v9;
                *(ptr3 + 4) = v10;
                int v11 = *(ptr3 + 1) ^ v10;
                *(ptr3 + 5) = v11;
                *(unsigned int*)(ptr3 + 6) = (char*)(*(ptr3 + 2) ^ v11);
            }
            while(ptr4 != 4279592);
            return 0;
        }
    }
    return -1;
}

int sub_4011C0(int* param0) {
    char v0;
    char* ptr0;
    char* ptr1;
    int v1;
    int v2 = (unsigned int)*(ptr1 + 1);
    char* ptr2 = ptr0;
    int v3 = ((((((unsigned int)*ptr1 * 0x100) ^ v2) * 0x100) ^ (unsigned int)*(ptr1 + 2)) * 0x100) ^ (unsigned int)*(ptr1 + 3);
    int v4 = (unsigned int)*(ptr1 + 5);
    int v5 = v1;
    int v6 = (unsigned int)*(ptr1 + 8);
    int* ptr3 = param0;
    int v7 = *ptr3 ^ v3;
    int v8 = (v6 * 0x100) ^ (unsigned int)*(ptr1 + 9);
    int v9 = (unsigned int)*(ptr1 + 10);
    int v10 = (((((((unsigned int)*(ptr1 + 4) * 0x100) ^ v4) * 0x100) ^ (unsigned int)*(ptr1 + 6)) * 0x100) ^ (unsigned int)*(ptr1 + 7)) ^ *(ptr3 + 1);
    int v11 = ((((v8 * 0x100) ^ v9) * 0x100) ^ (unsigned int)*(ptr1 + 11)) ^ *(ptr3 + 2);
    int v12 = (((((((unsigned int)*(ptr1 + 12) * 0x100) ^ (unsigned int)*(ptr1 + 13)) * 0x100) ^ (unsigned int)*(ptr1 + 14)) * 0x100) ^ (unsigned int)*(ptr1 + 15)) ^ *(ptr3 + 3);
    int v13 = (((*(unsigned int*)((unsigned int)(unsigned char)(v11 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)((unsigned int)(unsigned char)(v10 >>> 16) * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((v7 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((v12 & 0xFF) * 4 + (int)&gvar_416530)) ^ *(ptr3 + 4);
    int v14 = v7;
    int v15 = (((*(unsigned int*)((unsigned int)(unsigned char)(v12 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)((unsigned int)(unsigned char)(v11 >>> 16) * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((v10 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((v7 & 0xFF) * 4 + (int)&gvar_416530)) ^ *(ptr3 + 5);
    unsigned int v16 = *(unsigned int*)((unsigned int)(unsigned char)(v10 >>> 8) * 4 + (int)&gvar_416930);
    param0 = (int*)((int)(int*)(((*(unsigned int*)((unsigned int)(unsigned char)(v14 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)((unsigned int)(unsigned char)(v12 >>> 16) * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((v11 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((v10 & 0xFF) * 4 + (int)&gvar_416530)) ^ *(ptr3 + 6));
    int v17 = (((*(unsigned int*)((unsigned int)(unsigned char)(v7 >>> 16) * 4 + (int)&gvar_416D30) ^ v16) ^ *(unsigned int*)((v12 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((v11 & 0xFF) * 4 + (int)&gvar_416530)) ^ *(ptr3 + 7);
    int* ptr4 = ptr3 + 8;
    int* ptr5 = ptr4;
    int v18 = (*(ptr3 + 60) >> 1) - 1;
    v7 = v17;
    int v19 = v18;
    if(v18) {
        do {
            int* ptr6 = param0;
            int v20 = v13;
            v10 = (((*(unsigned int*)((unsigned int)(unsigned char)(int*)((int)ptr6 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)((unsigned int)(unsigned char)(v15 >>> 16) * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((v20 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((v7 & 0xFF) * 4 + (int)&gvar_416530)) ^ *ptr5;
            ptr4 = (int*)((((*(unsigned int*)((unsigned int)(unsigned char)(int*)((int)ptr6 >>> 16) * 4 + (int)&gvar_416D30) ^ *(unsigned int*)((unsigned int)(unsigned char)(v7 >>> 8) * 4 + (int)&gvar_416930)) ^ *(unsigned int*)((v15 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((v20 & 0xFF) * 4 + (int)&gvar_416530)) ^ *(ptr5 + 1));
            int v21 = (unsigned int)(unsigned char)(v7 >>> 16);
            int v22 = (((*(unsigned int*)((unsigned int)(unsigned char)(v20 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)(v21 * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((int)(int*)((int)(int*)((int)ptr6 >>> 24) * 4) + (int)&gvar_417130)) ^ *(unsigned int*)((v15 & 0xFF) * 4 + (int)&gvar_416530)) ^ *(ptr5 + 2);
            int v23 = (((*(unsigned int*)((unsigned int)(unsigned char)(v20 >>> 16) * 4 + (int)&gvar_416D30) ^ *(unsigned int*)((unsigned int)(unsigned char)(v15 >>> 8) * 4 + (int)&gvar_416930)) ^ *(unsigned int*)((v7 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((int)(int*)((int)(int*)((int)ptr6 & 0xFF) * 4) + (int)&gvar_416530)) ^ *(ptr5 + 3);
            v13 = (((*(unsigned int*)((unsigned int)(unsigned char)(v22 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)((unsigned int)(unsigned char)(int*)((int)ptr4 >>> 16) * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((v10 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((v23 & 0xFF) * 4 + (int)&gvar_416530)) ^ *(ptr5 + 4);
            int v24 = v10;
            v15 = (((*(unsigned int*)((unsigned int)(unsigned char)(v23 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)((unsigned int)(unsigned char)(v22 >>> 16) * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((int)(int*)((int)(int*)((int)ptr4 >>> 24) * 4) + (int)&gvar_417130)) ^ *(unsigned int*)((v10 & 0xFF) * 4 + (int)&gvar_416530)) ^ *(ptr5 + 5);
            unsigned int v25 = *(unsigned int*)((unsigned int)(unsigned char)(int*)((int)ptr4 >>> 8) * 4 + (int)&gvar_416930);
            param0 = (int*)((int)(int*)(((*(unsigned int*)((unsigned int)(unsigned char)(v24 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)((unsigned int)(unsigned char)(v23 >>> 16) * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((v22 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((int)(int*)((int)(int*)((int)ptr4 & 0xFF) * 4) + (int)&gvar_416530)) ^ *(ptr5 + 6));
            int v26 = (((*(unsigned int*)((unsigned int)(unsigned char)(v10 >>> 16) * 4 + (int)&gvar_416D30) ^ v25) ^ *(unsigned int*)((v23 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((v22 & 0xFF) * 4 + (int)&gvar_416530)) ^ *(ptr5 + 7);
            ptr5 += 8;
            --v19;
            v0 = v19 ? 0: 1;
            v7 = v26;
        }
        while(!v0);
    }
    int v27 = v15;
    int v28 = v13;
    char* ptr7 = ptr2;
    int v29 = (((*(unsigned int*)((v28 >>> 24) * 4 + (int)&gvar_416130) & 0xff000000) ^ ((*(unsigned int*)((unsigned int)(unsigned char)(v27 >>> 16) * 4 + (int)&gvar_416130) & 0xff0000) ^ (*(unsigned int*)((unsigned int)(unsigned char)(int*)((int)param0 >>> 8) * 4 + (int)&gvar_416130) & 0xff00))) ^ (unsigned int)*(char*)((v7 & 0xFF) * 4 + (int)&gvar_416130)) ^ *ptr5;
    *(ptr7 + 3) = (unsigned char)v29;
    *ptr7 = (unsigned char)(v29 >>> 24);
    *(ptr7 + 1) = (unsigned char)(v29 >>> 16);
    *(ptr7 + 2) = (unsigned char)(v29 >>> 8);
    int v30 = (((*(unsigned int*)((v27 >>> 24) * 4 + (int)&gvar_416130) & 0xff000000) ^ ((*(unsigned int*)((unsigned int)(unsigned char)(v7 >>> 8) * 4 + (int)&gvar_416130) & 0xff00) ^ (*(unsigned int*)((unsigned int)(unsigned char)(int*)((int)param0 >>> 16) * 4 + (int)&gvar_416130) & 0xff0000))) ^ (unsigned int)*(char*)((v28 & 0xFF) * 4 + (int)&gvar_416130)) ^ *(ptr5 + 1);
    *(ptr7 + 7) = (unsigned char)v30;
    *(ptr7 + 4) = (unsigned char)(v30 >>> 24);
    *(ptr7 + 5) = (unsigned char)(v30 >>> 16);
    *(ptr7 + 6) = (unsigned char)(v30 >>> 8);
    int v31 = (((*(unsigned int*)((int)(int*)((int)(int*)((int)param0 >>> 24) * 4) + (int)&gvar_416130) & 0xff000000) ^ ((*(unsigned int*)((unsigned int)(unsigned char)(v28 >>> 8) * 4 + (int)&gvar_416130) & 0xff00) ^ (*(unsigned int*)((unsigned int)(unsigned char)(v7 >>> 16) * 4 + (int)&gvar_416130) & 0xff0000))) ^ (unsigned int)*(char*)((v27 & 0xFF) * 4 + (int)&gvar_416130)) ^ *(ptr5 + 2);
    *(ptr7 + 8) = (unsigned char)(v31 >>> 24);
    *(ptr7 + 9) = (unsigned char)(v31 >>> 16);
    *(ptr7 + 10) = (unsigned char)(v31 >>> 8);
    int v32 = *(unsigned int*)((unsigned int)(unsigned char)(v27 >>> 8) * 4 + (int)&gvar_416130) & 0xff00;
    *(ptr7 + 11) = (unsigned char)v31;
    int v33 = (((*(unsigned int*)((v7 >>> 24) * 4 + (int)&gvar_416130) & 0xff000000) ^ ((*(unsigned int*)((unsigned int)(unsigned char)(v28 >>> 16) * 4 + (int)&gvar_416130) & 0xff0000) ^ v32)) ^ (unsigned int)*(char*)((int)(int*)((int)(int*)((int)param0 & 0xFF) * 4) + (int)&gvar_416130)) ^ *(ptr5 + 3);
    *(ptr7 + 15) = (unsigned char)v33;
    *(ptr7 + 12) = (unsigned char)(v33 >>> 24);
    *(ptr7 + 13) = (unsigned char)(v33 >>> 16);
    int result = v33 >>> 8;
    *(ptr7 + 14) = (unsigned char)result;
    return result;
}

void sub_401780() {
    // Decompilation error
}

int sub_401960(char* param0, int param1) {
    char* ptr0;
    char v0;
    char v1;
    int v2;
    int result;
    char* _Source = param0;
    int* ptr1 = (int*)(param0 + 1);
    do {
        result = (unsigned int)param0[0] | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        ++param0;
    }
    while((unsigned char)result);
    if((int*)((int)param0 - (int)ptr1) != 32) {
        return result;
    }
    char v3 = 0;
    int v4 = 0;
    do {
        ptr0 = strncpy(&v0, _Source, 2);
        char* ptr2 = &v1;
        result = unk_lib_sub14(&v0, &gvar_417530);
        if(result != 1) {
            return (int)ptr0;
        }
        _Source += 2;
        *(char*)(v2 + v4) = v1;
        ++v4;
    }
    while(v4 < 16);
    return (int)ptr0;
}

int sub_4019E0(int param0) {
    int result = 0;
    do {
        char v0 = (unsigned char)result;
        char* ptr0 = (char*)(result + param0);
        ++result;
        *ptr0 = ((v0 * 2) ^ *ptr0) ^ 0x55;
    }
    while(result < 16);
    return result;
}

void sub_401E6B() {
}

int sub_401E71() {
    FILE* _Stream;
    int result;
    _unlock_file(_Stream);
    return result;
}

void sub_401F63() {
}

int sub_401F69() {
    FILE* _Stream;
    int result;
    _unlock_file(_Stream);
    return result;
}

void sub_402075() {
}

int sub_40207B() {
    FILE* _Stream;
    int result;
    _unlock_file(_Stream);
    return result;
}

void sub_402471() {
}

int sub_402477() {
    FILE* _Stream;
    int result;
    _unlock_file(_Stream);
    return result;
}

void sub_40264C() {
}

int sub_402652() {
    FILE* _Stream;
    int result;
    _unlock_file(_Stream);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402687(void* param0, int param1, int param2, int param3, int param4, int param5) {
    size_t _Size;
alab1:
    while(1) {
        HANDLE hHeap = gvar_41993C;
        do {
            LPVOID v0 = HeapAlloc(hHeap, 0, (SIZE_T)(_Size != 0 ? _Size: 1));
            if(v0) {
                jump param5;
            }
            else if(gvar_419938 == 0) {
                break alab1;
            }
            else {
                int v1 = _callnewh(_Size);
                if(!v1) {
                    int* ptr0 = _errno();
                    ptr0[0] = 12;
                    jump param5;
                }
                else {
                    hHeap = gvar_41993C;
                }
            }
        }
        while(hHeap);
        _FF_MSGBANNER();
        _NMSG_WRITE(30);
        /*NO_RETURN*/ __crtExitProcess(0xFF);
    }
    int* ptr1 = _errno();
    ptr1[0] = 12;
    int* ptr0 = _errno();
    ptr0[0] = 12;
    jump param5;
}

void sub_40294F() {
}

int sub_402955() {
    FILE* _Stream;
    int result;
    _unlock_file(_Stream);
    return result;
}

int sub_402AAC() {
    int v0;
    int v1 = *(int*)(v0 - 20);
    int v2 = **(int**)v1;
    *(int*)(v0 - 32) = **(int**)v1;
    return _XcptFilter(v2, v1);
}

void sub_402B0E(int param0) {
    jump param0;
}

void sub_404303() {
}

int sub_404306() {
    return _unlock(1);
}

void sub_4049B3() {
}

int sub_4049B9() {
    int v0;
    return _unlock_fhandle(v0);
}

void sub_404BFD() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404C06() {
    int v0;
    return _unlock_file2(v0, *(int*)(v0 * 4 + gvar_41B000));
}

void sub_404C33() {
}

int sub_404C39() {
    return _unlock(1);
}

void sub_404D03() {
}

int sub_404D09() {
    int v0;
    return _unlock_fhandle(v0);
}

void sub_404EA1() {
}

int sub_404EAA() {
    int v0;
    return _unlock_fhandle(v0);
}

void sub_405071() {
}

int sub_405077() {
    int v0;
    return _unlock_fhandle(v0);
}

int sub_405ADB() {
    return _unlock(11);
}

int sub_40624B(int param0, int param1, int param2) {
    int v0;
    int v1;
    __SyntheticTypeUnknownP128 v2;
    __SyntheticTypeUnknownP128 v3;
    int v4 = 16 - v0;
    int v5 = v1 - v4;
    int v6 = v4;
    int counter = v6 & 0x3;
    if(counter) {
        do {
            v4 = (unsigned int)*(char*)v2 | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
            *(char*)v3 = (unsigned char)v4;
            v2 = (__SyntheticTypeUnknownP128)((char*)v2 + 1);
            v3 = (__SyntheticTypeUnknownP128)((char*)v3 + 1);
            --counter;
        }
        while(counter);
    }
    int counter1 = v6 >>> 2;
    if(counter1) {
        do {
            *(int*)v3 = *(int*)v2;
            v2 = (__SyntheticTypeUnknownP128)((char*)v2 + 4);
            v3 = (__SyntheticTypeUnknownP128)((char*)v3 + 4);
            --counter1;
        }
        while(counter1);
    }
    int counter2 = v5 >>> 7;
    if(counter2) {
        do {
            __SyntheticTypeUnknown v7 = *(v2 + 1);
            __SyntheticTypeUnknown v8 = *(v2 + 2);
            __SyntheticTypeUnknown v9 = *(v2 + 3);
            *v3 = *v2;
            *(v3 + 1) = v7;
            *(v3 + 2) = v8;
            *(v3 + 3) = v9;
            __SyntheticTypeUnknown v10 = *(v2 + 5);
            __SyntheticTypeUnknown v11 = *(v2 + 6);
            __SyntheticTypeUnknown v12 = *(v2 + 7);
            *(v3 + 4) = *(v2 + 4);
            *(v3 + 5) = v10;
            *(v3 + 6) = v11;
            *(v3 + 7) = v12;
            v2 += 8;
            v3 += 8;
            --counter2;
        }
        while(counter2);
    }
    if((v5 & 0x7f)) {
        counter2 = (v5 & 0x7f) >>> 4;
        if(counter2) {
            do {
                *v3 = *v2;
                ++v2;
                ++v3;
                --counter2;
            }
            while(counter2);
        }
        if((v5 & 0xf)) {
            int v13 = v5 & 0xf;
            int counter3 = (v5 & 0xf) >>> 2;
            if(counter3) {
                do {
                    *(int*)v3 = *(int*)v2;
                    v2 = (__SyntheticTypeUnknownP128)((char*)v2 + 4);
                    v3 = (__SyntheticTypeUnknownP128)((char*)v3 + 4);
                    --counter3;
                }
                while(counter3);
            }
            int counter4 = v13 & 0x3;
            if(counter4) {
                do {
                    v13 = (unsigned int)*(char*)v2 | ((unsigned int)((v13 >>> 8) & 0xffffff) << 8);
                    *(char*)v3 = (unsigned char)v13;
                    v2 = (__SyntheticTypeUnknownP128)((char*)v2 + 1);
                    v3 = (__SyntheticTypeUnknownP128)((char*)v3 + 1);
                    --counter4;
                }
                while(counter4);
            }
        }
    }
    jump param2;
}

void sub_406345() {
}

int sub_40634B() {
    int v0;
    return _unlock_fhandle(v0);
}

int* sub_406DD9() {
    PVOID v0 = EncodePointer(NULL);
    unk_lib_sub3((unsigned int)v0);
    unk_lib_sub((unsigned int)v0);
    unk_lib_sub7((unsigned int)v0);
    _initp_misc_winsig((unsigned int)v0);
    sub_40A37E();
    unk_lib_sub8((unsigned int)v0);
    HMODULE hModule = GetModuleHandleW("kernel32.dll");
    FARPROC v1 = GetProcAddress(hModule, "FlsAlloc");
    gvar_419F60 = (int*)(gvar_4183F0 ^ (int)v1);
    FARPROC v2 = GetProcAddress(hModule, "FlsFree");
    gvar_419F64 = (int*)(gvar_4183F0 ^ (int)v2);
    FARPROC v3 = GetProcAddress(hModule, "FlsGetValue");
    gvar_419F68 = (int*)(gvar_4183F0 ^ (int)v3);
    FARPROC v4 = GetProcAddress(hModule, "FlsSetValue");
    gvar_419F6C = (int*)(gvar_4183F0 ^ (int)v4);
    FARPROC v5 = GetProcAddress(hModule, "InitializeCriticalSectionEx");
    gvar_419F70 = (int*)(gvar_4183F0 ^ (int)v5);
    FARPROC v6 = GetProcAddress(hModule, "CreateEventExW");
    gvar_419F74 = (int*)(gvar_4183F0 ^ (int)v6);
    FARPROC v7 = GetProcAddress(hModule, "CreateSemaphoreExW");
    gvar_419F78 = (int*)(gvar_4183F0 ^ (int)v7);
    FARPROC v8 = GetProcAddress(hModule, "SetThreadStackGuarantee");
    gvar_419F7C = (int*)(gvar_4183F0 ^ (int)v8);
    FARPROC v9 = GetProcAddress(hModule, "CreateThreadpoolTimer");
    gvar_419F80 = (int*)(gvar_4183F0 ^ (int)v9);
    FARPROC v10 = GetProcAddress(hModule, "SetThreadpoolTimer");
    gvar_419F84 = (int*)(gvar_4183F0 ^ (int)v10);
    FARPROC v11 = GetProcAddress(hModule, "WaitForThreadpoolTimerCallbacks");
    gvar_419F88 = (int*)(gvar_4183F0 ^ (int)v11);
    FARPROC v12 = GetProcAddress(hModule, "CloseThreadpoolTimer");
    gvar_419F8C = (int*)(gvar_4183F0 ^ (int)v12);
    FARPROC v13 = GetProcAddress(hModule, "CreateThreadpoolWait");
    gvar_419F90 = (int*)(gvar_4183F0 ^ (int)v13);
    FARPROC v14 = GetProcAddress(hModule, "SetThreadpoolWait");
    gvar_419F94 = (int*)(gvar_4183F0 ^ (int)v14);
    FARPROC v15 = GetProcAddress(hModule, "CloseThreadpoolWait");
    gvar_419F98 = (int*)(gvar_4183F0 ^ (int)v15);
    FARPROC v16 = GetProcAddress(hModule, "FlushProcessWriteBuffers");
    gvar_419F9C = (int*)(gvar_4183F0 ^ (int)v16);
    FARPROC v17 = GetProcAddress(hModule, "FreeLibraryWhenCallbackReturns");
    gvar_419FA0 = (int*)(gvar_4183F0 ^ (int)v17);
    FARPROC v18 = GetProcAddress(hModule, "GetCurrentProcessorNumber");
    gvar_419FA4 = (int*)(gvar_4183F0 ^ (int)v18);
    FARPROC v19 = GetProcAddress(hModule, "GetLogicalProcessorInformation");
    gvar_419FA8 = (int*)(gvar_4183F0 ^ (int)v19);
    FARPROC v20 = GetProcAddress(hModule, "CreateSymbolicLinkW");
    gvar_419FAC = (int*)(gvar_4183F0 ^ (int)v20);
    FARPROC v21 = GetProcAddress(hModule, "SetDefaultDllDirectories");
    gvar_419FB0 = (int*)(gvar_4183F0 ^ (int)v21);
    FARPROC v22 = GetProcAddress(hModule, "EnumSystemLocalesEx");
    gvar_419FB8 = (int*)(gvar_4183F0 ^ (int)v22);
    FARPROC v23 = GetProcAddress(hModule, "CompareStringEx");
    gvar_419FB4 = (int*)(gvar_4183F0 ^ (int)v23);
    FARPROC v24 = GetProcAddress(hModule, "GetDateFormatEx");
    gvar_419FBC = (int*)(gvar_4183F0 ^ (int)v24);
    FARPROC v25 = GetProcAddress(hModule, "GetLocaleInfoEx");
    gvar_419FC0 = (int*)(gvar_4183F0 ^ (int)v25);
    FARPROC v26 = GetProcAddress(hModule, "GetTimeFormatEx");
    gvar_419FC4 = (int*)(gvar_4183F0 ^ (int)v26);
    FARPROC v27 = GetProcAddress(hModule, "GetUserDefaultLocaleName");
    gvar_419FC8 = (int*)(gvar_4183F0 ^ (int)v27);
    FARPROC v28 = GetProcAddress(hModule, "IsValidLocaleName");
    gvar_419FCC = (int*)(gvar_4183F0 ^ (int)v28);
    FARPROC v29 = GetProcAddress(hModule, "LCMapStringEx");
    gvar_419FD0 = (int*)(gvar_4183F0 ^ (int)v29);
    FARPROC v30 = GetProcAddress(hModule, "GetCurrentPackageId");
    gvar_419FD4 = (int*)(gvar_4183F0 ^ (int)v30);
    FARPROC v31 = GetProcAddress(hModule, "GetTickCount64");
    gvar_419FD8 = (int*)(gvar_4183F0 ^ (int)v31);
    FARPROC v32 = GetProcAddress(hModule, "GetFileInformationByHandleExW");
    gvar_419FDC = (int*)(gvar_4183F0 ^ (int)v32);
    FARPROC v33 = GetProcAddress(hModule, "SetFileInformationByHandleW");
    int* result = (int*)(gvar_4183F0 ^ (int)v33);
    gvar_419FE0 = (int*)(gvar_4183F0 ^ (int)v33);
    return result;
}

int sub_406E72() {
    return _unlock(8);
}

int sub_406F95() {
    int result;
    int v0;
    if(*(int*)(v0 + 16)) {
        result = _unlock(8);
    }
    return result;
}

int sub_407461() {
    __crtSetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&__CxxUnhandledExceptionFilter);
    return 0;
}

void sub_4076E7() {
}

int sub_4076EA() {
    return _unlock(13);
}

void sub_4076F3() {
}

int sub_4076F6() {
    return _unlock(12);
}

void sub_407821() {
}

int sub_407827() {
    return _unlock(13);
}

int sub_407830() {
    return _unlock(12);
}

void sub_40853D() {
}

int sub_408540() {
    return _unlock(12);
}

void sub_4088E5() {
}

int sub_4088E8() {
    return _unlock(13);
}

void sub_408A60() {
}

int sub_408A63() {
    return _unlock(13);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_408F5B(int param0, int param1) {
    unsigned int result;
    unsigned long dwMilliseconds = 0;
    do {
        result = (unsigned int)_calloc_impl(param0, param1, 0);
        if(!result && gvar_419A68 > result) {
            Concurrency::details::platform::__Sleep(dwMilliseconds);
            dwMilliseconds += 1000;
            if(gvar_419A68 < dwMilliseconds) {
                dwMilliseconds = 0xffffffff;
            }
        }
    }
    while(!result && gvar_419A68 > result && dwMilliseconds != -1);
    return result;
}

void sub_409174() {
}

int sub_409177() {
    return _unlock(1);
}

int sub_4092A8() {
    return _unlock(10);
}

void sub_409396() {
}

int sub_40939C() {
    int result;
    int v0;
    int v1;
    int* ptr0;
    if(*(int*)(v0 - 32)) {
        if(v1) {
            int v2 = *ptr0;
            unsigned int v3 = *(unsigned int*)((v2 >> 5) * 4 + (int)&gvar_4191D0);
            *(char*)((v2 & 0x1f) * 64 + v3 + 4) = *(char*)((v2 & 0x1f) * 64 + v3 + 4) & 0xfe;
        }
        result = _unlock_fhandle(*ptr0);
    }
    return result;
}

int sub_409819() {
    int v0;
    return ***(unsigned int*)(v0 - 20) == 0xc0000005 ? 1: 0;
}

int sub_40982C(int param0, int param1, int param2) {
    int* ptr0;
    *(ptr0 - 1) = -2;  // } (starts at 4097C3h)
    *(int*)__FS_BASE = *(ptr0 - 4);
    jump param1;
}

void sub_409A49() {
}

int sub_409A4C() {
    return _unlock(10);
}

void sub_409B24() {
}

int sub_409B2D() {
    return _unlock(10);
}

void sub_409BF2() {
}

int sub_409BF5() {
    return _unlock(11);
}

void sub_409E55() {
}

int sub_409E5B() {
    int v0;
    return _unlock_fhandle(v0);
}

BOOL sub_40A1C7(short param0) {
    BOOL result;
    int v0;
    HANDLE hConsoleOutput = gvar_418E70;
    if(hConsoleOutput == -2) {
        unk_lib_sub10();
        hConsoleOutput = gvar_418E70;
    }
    if(hConsoleOutput != -1) {
        result = WriteConsoleW(hConsoleOutput, &param0, 1, &v0, NULL);
        if(!result) {
            return 0xFFFF;
        }
        result = (unsigned int)param0 | ((unsigned int)(unsigned short)(result >>> 16) << 16);
    }
    else {
        result = 0xFFFF;
    }
    return result;
}

int sub_40A20A() {
    PVOID Ptr = (PVOID)sub_408F5B(32, 4);
    PVOID v0 = EncodePointer(Ptr);
    gvar_419FEC = v0;
    gvar_419FE8 = v0;
    if(!Ptr) {
        return 24;
    }
    *(int*)Ptr = 0;
    return 0;
}

void sub_40A274() {
}

int sub_40A277() {
    return sub_406E72();
}

int sub_40A36A() {
    return 1;
}

int sub_40A36E() {
    int v0;
    *(int*)(v0 - 4) = -2;  // } (starts at 40A362h)
    /*NO_RETURN*/ abort();
}

PVOID sub_40A37E() {
    PVOID result = EncodePointer((PVOID)&terminate);
    gvar_419EF0 = result;
    return result;
}

void sub_40A53D() {
}

int sub_40A546() {
    int result;
    int v0;
    if(v0) {
        result = _unlock(0);
    }
    return result;
}

int sub_40B456() {
    return _unlock(12);
}

int sub_40B5ED() {
    /*NO_RETURN*/ _amsg_exit(2);
}

int sub_40EDAB(int param0, int param1, int param2) {
    int v0;
    int v1;
    __SyntheticTypeUnknownP128 v2;
    __SyntheticTypeUnknownP128 v3;
    int v4 = 16 - v0;
    int v5 = v1 - v4;
    int v6 = v4;
    int counter = v6 & 0x3;
    if(counter) {
        do {
            v4 = (unsigned int)*(char*)v2 | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
            *(char*)v3 = (unsigned char)v4;
            v2 = (__SyntheticTypeUnknownP128)((char*)v2 + 1);
            v3 = (__SyntheticTypeUnknownP128)((char*)v3 + 1);
            --counter;
        }
        while(counter);
    }
    int counter1 = v6 >>> 2;
    if(counter1) {
        do {
            *(int*)v3 = *(int*)v2;
            v2 = (__SyntheticTypeUnknownP128)((char*)v2 + 4);
            v3 = (__SyntheticTypeUnknownP128)((char*)v3 + 4);
            --counter1;
        }
        while(counter1);
    }
    int counter2 = v5 >>> 7;
    if(counter2) {
        do {
            __SyntheticTypeUnknown v7 = *(v2 + 1);
            __SyntheticTypeUnknown v8 = *(v2 + 2);
            __SyntheticTypeUnknown v9 = *(v2 + 3);
            *v3 = *v2;
            *(v3 + 1) = v7;
            *(v3 + 2) = v8;
            *(v3 + 3) = v9;
            __SyntheticTypeUnknown v10 = *(v2 + 5);
            __SyntheticTypeUnknown v11 = *(v2 + 6);
            __SyntheticTypeUnknown v12 = *(v2 + 7);
            *(v3 + 4) = *(v2 + 4);
            *(v3 + 5) = v10;
            *(v3 + 6) = v11;
            *(v3 + 7) = v12;
            v2 += 8;
            v3 += 8;
            --counter2;
        }
        while(counter2);
    }
    if((v5 & 0x7f)) {
        counter2 = (v5 & 0x7f) >>> 4;
        if(counter2) {
            do {
                *v3 = *v2;
                ++v2;
                ++v3;
                --counter2;
            }
            while(counter2);
        }
        if((v5 & 0xf)) {
            int v13 = v5 & 0xf;
            int counter3 = (v5 & 0xf) >>> 2;
            if(counter3) {
                do {
                    *(int*)v3 = *(int*)v2;
                    v2 = (__SyntheticTypeUnknownP128)((char*)v2 + 4);
                    v3 = (__SyntheticTypeUnknownP128)((char*)v3 + 4);
                    --counter3;
                }
                while(counter3);
            }
            int counter4 = v13 & 0x3;
            if(counter4) {
                do {
                    v13 = (unsigned int)*(char*)v2 | ((unsigned int)((v13 >>> 8) & 0xffffff) << 8);
                    *(char*)v3 = (unsigned char)v13;
                    v2 = (__SyntheticTypeUnknownP128)((char*)v2 + 1);
                    v3 = (__SyntheticTypeUnknownP128)((char*)v3 + 1);
                    --counter4;
                }
                while(counter4);
            }
        }
    }
    jump param2;
}

int sub_4100D1() {
    int v0;
    int* ptr0 = **(unsigned int*)(v0 - 20);
    if(*ptr0 != 0xc0000005 && *ptr0 != 0xc000001d) {
        return 0;
    }
    return 1;
}

int sub_4100ED(int param0, void* param1) {
    int* ptr0;
    gvar_4191A8 = 0;
    *(ptr0 + 2) = *(ptr0 + 2) & 0xffffffbf;
    *(ptr0 + 2) = ldmxcsr(*(ptr0 + 2));
    *(ptr0 - 1) = -2;
    int v0 = &sub_410117;
    *(int*)__FS_BASE = *(ptr0 - 4);
    *ptr0 = &sub_410117;
    /*BAD_CALL!*/ *ptr0{sub_410117}();
}

void terminate() {
    int v0;
    int v1 = &gvar_417980;
    int v2 = v0;
    int v3 = _getptd();
    int v4 = *(int*)(v3 + 120);
    if(v4) {
        v4();
    }
    /*NO_RETURN*/ abort();
}

int tolower(int _C) {
    if(!gvar_419F34) {
        int result = _C;
        if((unsigned int)(result - 65) <= 25) {
            result += 32;
        }
        return result;
    }
    return _tolower_l(_C, NULL);
}

unsigned int unk_lib_sub(unsigned int param0) {
    gvar_4191C8 = param0;
    return param0;
}

HANDLE unk_lib_sub10() {
    HANDLE result = CreateFileW("CONOUT$", 0x40000000, 3, NULL, 3, 0, NULL);
    gvar_418E70 = result;
    return result;
}

int unk_lib_sub11(short* param0, int* param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    int v3;
    int result;
    int v4;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v3);
    int v5 = v4;
    int v6 = (unsigned int)*(param0 + 5);
    int v7 = 0;
    int* ptr1 = param1;
    int* ptr2 = param1;
    unsigned int v8 = (unsigned int)(v6 & 0x8000);
    int v9 = *(int*)(param0 + 3);
    int v10 = *(int*)(param0 + 1);
    int v11 = (unsigned int)*param0 * 0x10000;
    unsigned int v12 = (unsigned int)((v6 & 0x7fff) - 0x3fff);
    int v13 = v11;
    if((unsigned int)((v6 & 0x7fff) - 0x3fff) == 0xffffc001) {
        v2 = 0;
        int v14 = 0;
        while(*(int*)(v14 * 4 + (int)&v9) == 0) {
            ++v14;
            if(v14 >= 3) {
                goto loc_40CDA1;
            }
        }
        v9 = 0;
        *(&v9 + 1) = 0;
        *(&v9 + 2) = 0;
        goto loc_40CD83;
    }
    else {
        unsigned int v15 = gvar_418EA0;
        unsigned int v16 = (unsigned int)((v6 & 0x7fff) - 0x3fff);
        int v17 = v9;
        int v18 = (int)(v15 - 1);
        unsigned int v19 = 31;
        int v20 = 0;
        *(&v17 + 1) = *(&v9 + 1);
        *(&v17 + 2) = *(&v9 + 2);
        int v21 = (((v15 >= 0x80000000 ? -1: 0) & v19) + v15) >> 5;
        int v22 = (((v15 >= 0x80000000 ? -1: 0) & v19) + v15) >> 5;
        int v23 = (int)(v15 & 0x8000001f);
        if(v23 < 0) {
            v23 = ((v23 - 1) | 0xffffffe0) + 1;
        }
        int v24 = (int)(v19 - v23);
        int v25 = (int)(v19 - v23);
        int v26 = v24;
        v19 = 3;
        if(((1 << (v26 & 0x1f)) & *(int*)(v21 * 4 + (int)&v9))) {
            char v27 = ~(-1 << (v26 & 0x1f)) & *(int*)(v21 * 4 + (int)&v9) ? 0: 1;
            while(v27) {
                ++v21;
                if(v21 >= 3) {
                    goto loc_40C9D2;
                }
                else {
                    v27 = *(int*)(v21 * 4 + (int)&v9) == 0;
                }
            }
            int v28 = v18 & 0x8000001f;
            if(v28 < 0) {
                v28 = ((v28 - 1) | 0xffffffe0) + 1;
            }
            v20 = 0;
            v1 = (unsigned int)(1 << ((int)(31 - v28) & 0x1f));
            unsigned int v29 = *(unsigned int*)(((((v18 < 0 ? -1: 0) & 0x1f) + v18) >> 5) * 4 + (int)&v9);
            unsigned int v30 = v29 + v1;
            v0 = v29 + v1;
            int v31 = 0;
            v19 = 0xffffffff;
            if(v29 > v30 || v1 > v0) {
                v31 = 1;
                v20 = 1;
            }
            *(unsigned int*)(((((v18 < 0 ? -1: 0) & 0x1f) + v18) >> 5) * 4 + (int)&v9) = v0;
            int v32 = ((((v18 < 0 ? -1: 0) & 0x1f) + v18) >> 5) - 1;
            if(v32 >= 0) {
                while(v31) {
                    unsigned int v33 = *(unsigned int*)(v32 * 4 + (int)&v9);
                    v31 = 0;
                    v20 = 0;
                    if(v33 + 1 < v33 || v33 < 0) {
                        v31 = 1;
                        v20 = 1;
                    }
                    *(unsigned int*)(v32 * 4 + (int)&v9) = v33 + 1;
                    --v32;
                    if(v32 < 0) {
                        break;
                    }
                }
            }
            v26 = v25;
        loc_40C9D2:
            v21 = v22;
        }
        *(int*)(v21 * 4 + (int)&v9) = (0xffffffff << (v26 & 0x1f)) & *(int*)(v21 * 4 + (int)&v9);
        if(v21 + 1 < 3) {
            int* ptr3 = (int*)((v21 + 1) * 4 + (int)&v9);
            for(int i = (int)(3 - (v21 + 1)); i != 0; --i) {
                *ptr3 = 0;
                ++ptr3;
            }
        }
        unsigned int v34 = v12;
        if(v20 != 0) {
            ++v34;
        }
        int v35 = gvar_418E9C;
        if(v35 - gvar_418EA0 > (int)v34) {
            v9 = 0;
            *(&v9 + 1) = 0;
            *(&v9 + 2) = 0;
            goto loc_40CA18;
        }
        else if((int)v34 <= v35) {
            int v36 = v35 - v16;
            v25 = v35 - v16;
            v9 = v17;
            *(&v9 + 1) = *(&v17 + 1);
            v22 = (((v36 < 0 ? -1: 0) & 0x1f) + v36) >> 5;
            *(&v9 + 2) = *(&v17 + 2);
            int v37 = v25 & 0x8000001f;
            if(v37 < 0) {
                v37 = ((v37 - 1) | 0xffffffe0) + 1;
            }
            v25 = v37;
            v12 = 0;
            int v38 = v25;
            v0 = (unsigned int)~(-1 << (v38 & 0x1f));
            v19 = 3;
            v1 = 32 - v38;
            do {
                int v39 = *(int*)(v7 * 4 + (int)&v9);
                unsigned int v40 = (unsigned int)((v39 & v0) << (v1 & 0x1f));
                *(int*)(v7 * 4 + (int)&v9) = (v39 >>> (v38 & 0x1f)) | v12;
                ++v7;
                v12 = v40;
            }
            while(v7 < 3);
            v19 = 2;
            int* ptr4 = (int*)((int)&v13 - v22 * 4);
            int v41 = v22;
            unsigned int v42 = 2;
            do {
                if(v41 <= (int)v42) {
                    *(int*)(v42 * 4 + (int)&v9) = *ptr4;
                    v41 = v22;
                }
                else {
                    *(int*)(v42 * 4 + (int)&v9) = 0;
                }
                --ptr4;
                --v42;
            }
            while(v42 < 0x80000000);
            int v43 = (((v18 + 1 < 0 ? -1: 0) & 0x1f) + v18 + 1) >> 5;
            v20 = (((v18 + 1 < 0 ? -1: 0) & 0x1f) + v18 + 1) >> 5;
            int v44 = (v18 + 1) & 0x8000001f;
            if(v44 < 0) {
                v44 = ((v44 - 1) | 0xffffffe0) + 1;
            }
            v19 = 31;
            v25 = (int)(31 - v44);
            int v45 = (int)(31 - v44);
            if(((1 << (v45 & 0x1f)) & *(int*)(v43 * 4 + (int)&v9))) {
                char v46 = ~(-1 << (v45 & 0x1f)) & *(int*)(v43 * 4 + (int)&v9) ? 0: 1;
                while(v46) {
                    ++v43;
                    if(v43 >= 3) {
                        goto loc_40CB8D;
                    }
                    else {
                        v46 = *(int*)(v43 * 4 + (int)&v9) == 0;
                    }
                }
                int v47 = v18 & 0x8000001f;
                if(v47 < 0) {
                    v47 = ((v47 - 1) | 0xffffffe0) + 1;
                }
                unsigned int v48 = *(unsigned int*)(((((v18 < 0 ? -1: 0) & 0x1f) + v18) >> 5) * 4 + (int)&v9);
                int v49 = 0;
                v16 = (unsigned int)(1 << ((31 - v47) & 0x1f));
                v12 = (unsigned int)(1 << ((31 - v47) & 0x1f)) + v48;
                v19 = 0xffffffff;
                if((unsigned int)(1 << ((31 - v47) & 0x1f)) + v48 < v48 || v16 > v12) {
                    v49 = 1;
                }
                *(unsigned int*)(((((v18 < 0 ? -1: 0) & 0x1f) + v18) >> 5) * 4 + (int)&v9) = v12;
                int v50 = ((((v18 < 0 ? -1: 0) & 0x1f) + v18) >> 5) - 1;
                if(v50 >= 0) {
                    while(v49) {
                        unsigned int v51 = *(unsigned int*)(v50 * 4 + (int)&v9);
                        v49 = v51 + 1 >= v51 && v51 >= 0 ? 0: 1;
                        *(unsigned int*)(v50 * 4 + (int)&v9) = v51 + 1;
                        --v50;
                        if(v50 < 0) {
                            break;
                        }
                    }
                }
                v45 = v25;
            loc_40CB8D:
                v43 = v20;
            }
            *(int*)(v43 * 4 + (int)&v9) = (0xffffffff << (v45 & 0x1f)) & *(int*)(v43 * 4 + (int)&v9);
            if(v43 + 1 < 3) {
                int* ptr5 = (int*)((v43 + 1) * 4 + (int)&v9);
                for(int j = (int)(3 - (v43 + 1)); j != 0; --j) {
                    *ptr5 = 0;
                    ++ptr5;
                }
            }
            int v52 = (int)(gvar_418EA4 + 1);
            v0 = (unsigned int)((((v52 < 0 ? -1: 0) & 0x1f) + v52) >> 5);
            unsigned int v53 = (unsigned int)(v52 & 0x8000001f);
            if(v53 >= 0x80000000) {
                v53 = (unsigned int)(((v53 - 1) | 0xffffffe0) + 1);
            }
            int v54 = 0;
            v19 = 32;
            v12 = 0;
            v18 = 0;
            v16 = 32 - v53;
            do {
                int v55 = *(int*)(v54 * 4 + (int)&v9);
                *(int*)(v18 * 4 + (int)&v9) = (v55 >>> (v53 & 0x1f)) | v12;
                v12 = (unsigned int)((~(0xffffffff << (v53 & 0x1f)) & v55) << (v16 & 0x1f));
                v54 = v18 + 1;
                ++v18;
            }
            while(v54 < 3);
            v19 = 2;
            int* ptr6 = (int*)((int)&v13 - v0 * 4);
            unsigned int v56 = 2;
            do {
                *(int*)(v56 * 4 + (int)&v9) = (int)v56 >= (int)v0 ? *ptr6: 0;
                --ptr6;
                --v56;
            }
            while(v56 < 0x80000000);
        loc_40CA18:
            v2 = 0;
        }
        else if(gvar_418E98 <= (int)v34) {
            unsigned int v57 = gvar_418EA4;
            v9 = 0;
            *(&v9 + 1) = 0;
            *(&v9 + 2) = 0;
            v9 |= 0x80000000;
            v18 = (((v57 >= 0x80000000 ? -1: 0) & 0x1f) + v57) >> 5;
            unsigned int v58 = v57 & 0x8000001f;
            if(v58 >= 0x80000000) {
                v58 = (unsigned int)(((v58 - 1) | 0xffffffe0) + 1);
            }
            v1 = v58;
            v19 = 32;
            v12 = 0;
            v0 = 32 - v58;
            do {
                int v59 = *(int*)(v7 * 4 + (int)&v9);
                int v60 = (v59 >>> (v58 & 0x1f)) | v12;
                unsigned int v61 = (unsigned int)((~(-1 << (v58 & 0x1f)) & v59) << (v0 & 0x1f));
                v58 = v1;
                *(int*)(v7 * 4 + (int)&v9) = v60;
                ++v7;
                v12 = v61;
            }
            while(v7 < 3);
            v19 = 2;
            int* ptr7 = (int*)((int)&v13 - v18 * 4);
            unsigned int v62 = 2;
            do {
                *(int*)(v62 * 4 + (int)&v9) = (int)v62 >= v18 ? *ptr7: 0;
                --ptr7;
                --v62;
            }
            while(v62 < 0x80000000);
            v2 = gvar_418E98 + gvar_418EAC;
        }
        else {
            unsigned int v63 = gvar_418EAC;
            v9 &= 0x7fffffff;
            unsigned int v64 = gvar_418EA4;
            v1 = v34 + v63;
            v0 = (unsigned int)((((v64 >= 0x80000000 ? -1: 0) & 0x1f) + v64) >> 5);
            int v65 = (int)(v64 & 0x8000001f);
            if(v65 < 0) {
                v65 = ((v65 - 1) | 0xffffffe0) + 1;
            }
            v19 = 32;
            v12 = 0;
            int v66 = 0;
            v16 = 32 - v65;
            do {
                int v67 = *(int*)(v66 * 4 + (int)&v9);
                unsigned int v68 = (unsigned int)((~(0xffffffff << (v65 & 0x1f)) & v67) << (v16 & 0x1f));
                *(int*)(v66 * 4 + (int)&v9) = (v67 >>> (v65 & 0x1f)) | v12;
                ++v66;
                v12 = v68;
            }
            while(v66 < 3);
            v2 = v1;
            v19 = 2;
            int* ptr8 = (int*)((int)&v13 - v0 * 4);
            unsigned int v69 = 2;
            do {
                *(int*)(v69 * 4 + (int)&v9) = (int)v69 >= (int)v0 ? *ptr8: 0;
                --ptr8;
                --v69;
            }
            while(v69 < 0x80000000);
        }
    loc_40CD83:
        ptr1 = ptr2;
    }
loc_40CDA1:
    unsigned int v70 = gvar_418EA8;
    int v71 = ((v8 > 0 ? -1: 0) & 0x80000000) | (v2 << ((31 - gvar_418EA4) & 0x1f)) | v9;
    if(v70 == 32) {
        *ptr1 = v71;
    }
    else if(v70 == 64) {
        *(ptr1 + 1) = v71;
        *ptr1 = v10;
    }
    __security_check_cookie((uintptr_t)((int)&v3 ^ (int)ptr0));
    return result;
}

int unk_lib_sub12(short* param0, int* param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    int v3;
    int result;
    int v4;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v3);
    int v5 = v4;
    int v6 = (unsigned int)*(param0 + 5);
    int v7 = 0;
    int* ptr1 = param1;
    int* ptr2 = param1;
    unsigned int v8 = (unsigned int)(v6 & 0x8000);
    int v9 = *(int*)(param0 + 3);
    int v10 = *(int*)(param0 + 1);
    int v11 = (unsigned int)*param0 * 0x10000;
    unsigned int v12 = (unsigned int)((v6 & 0x7fff) - 0x3fff);
    int v13 = v11;
    if((unsigned int)((v6 & 0x7fff) - 0x3fff) == 0xffffc001) {
        v2 = 0;
        int v14 = 0;
        while(*(int*)(v14 * 4 + (int)&v9) == 0) {
            ++v14;
            if(v14 >= 3) {
                goto loc_40D313;
            }
        }
        v9 = 0;
        *(&v9 + 1) = 0;
        *(&v9 + 2) = 0;
        goto loc_40D2F5;
    }
    else {
        unsigned int v15 = gvar_418EB8;
        unsigned int v16 = (unsigned int)((v6 & 0x7fff) - 0x3fff);
        int v17 = v9;
        int v18 = (int)(v15 - 1);
        unsigned int v19 = 31;
        int v20 = 0;
        *(&v17 + 1) = *(&v9 + 1);
        *(&v17 + 2) = *(&v9 + 2);
        int v21 = (((v15 >= 0x80000000 ? -1: 0) & v19) + v15) >> 5;
        int v22 = (((v15 >= 0x80000000 ? -1: 0) & v19) + v15) >> 5;
        int v23 = (int)(v15 & 0x8000001f);
        if(v23 < 0) {
            v23 = ((v23 - 1) | 0xffffffe0) + 1;
        }
        int v24 = (int)(v19 - v23);
        int v25 = (int)(v19 - v23);
        int v26 = v24;
        v19 = 3;
        if(((1 << (v26 & 0x1f)) & *(int*)(v21 * 4 + (int)&v9))) {
            char v27 = ~(-1 << (v26 & 0x1f)) & *(int*)(v21 * 4 + (int)&v9) ? 0: 1;
            while(v27) {
                ++v21;
                if(v21 >= 3) {
                    goto loc_40CF44;
                }
                else {
                    v27 = *(int*)(v21 * 4 + (int)&v9) == 0;
                }
            }
            int v28 = v18 & 0x8000001f;
            if(v28 < 0) {
                v28 = ((v28 - 1) | 0xffffffe0) + 1;
            }
            v20 = 0;
            v1 = (unsigned int)(1 << ((int)(31 - v28) & 0x1f));
            unsigned int v29 = *(unsigned int*)(((((v18 < 0 ? -1: 0) & 0x1f) + v18) >> 5) * 4 + (int)&v9);
            unsigned int v30 = v29 + v1;
            v0 = v29 + v1;
            int v31 = 0;
            v19 = 0xffffffff;
            if(v29 > v30 || v1 > v0) {
                v31 = 1;
                v20 = 1;
            }
            *(unsigned int*)(((((v18 < 0 ? -1: 0) & 0x1f) + v18) >> 5) * 4 + (int)&v9) = v0;
            int v32 = ((((v18 < 0 ? -1: 0) & 0x1f) + v18) >> 5) - 1;
            if(v32 >= 0) {
                while(v31) {
                    unsigned int v33 = *(unsigned int*)(v32 * 4 + (int)&v9);
                    v31 = 0;
                    v20 = 0;
                    if(v33 + 1 < v33 || v33 < 0) {
                        v31 = 1;
                        v20 = 1;
                    }
                    *(unsigned int*)(v32 * 4 + (int)&v9) = v33 + 1;
                    --v32;
                    if(v32 < 0) {
                        break;
                    }
                }
            }
            v26 = v25;
        loc_40CF44:
            v21 = v22;
        }
        *(int*)(v21 * 4 + (int)&v9) = (0xffffffff << (v26 & 0x1f)) & *(int*)(v21 * 4 + (int)&v9);
        if(v21 + 1 < 3) {
            int* ptr3 = (int*)((v21 + 1) * 4 + (int)&v9);
            for(int i = (int)(3 - (v21 + 1)); i != 0; --i) {
                *ptr3 = 0;
                ++ptr3;
            }
        }
        unsigned int v34 = v12;
        if(v20 != 0) {
            ++v34;
        }
        int v35 = gvar_418EB4;
        if(v35 - gvar_418EB8 > (int)v34) {
            v9 = 0;
            *(&v9 + 1) = 0;
            *(&v9 + 2) = 0;
            goto loc_40CF8A;
        }
        else if((int)v34 <= v35) {
            int v36 = v35 - v16;
            v25 = v35 - v16;
            v9 = v17;
            *(&v9 + 1) = *(&v17 + 1);
            v22 = (((v36 < 0 ? -1: 0) & 0x1f) + v36) >> 5;
            *(&v9 + 2) = *(&v17 + 2);
            int v37 = v25 & 0x8000001f;
            if(v37 < 0) {
                v37 = ((v37 - 1) | 0xffffffe0) + 1;
            }
            v25 = v37;
            v12 = 0;
            int v38 = v25;
            v0 = (unsigned int)~(-1 << (v38 & 0x1f));
            v19 = 3;
            v1 = 32 - v38;
            do {
                int v39 = *(int*)(v7 * 4 + (int)&v9);
                unsigned int v40 = (unsigned int)((v39 & v0) << (v1 & 0x1f));
                *(int*)(v7 * 4 + (int)&v9) = (v39 >>> (v38 & 0x1f)) | v12;
                ++v7;
                v12 = v40;
            }
            while(v7 < 3);
            v19 = 2;
            int* ptr4 = (int*)((int)&v13 - v22 * 4);
            int v41 = v22;
            unsigned int v42 = 2;
            do {
                if(v41 <= (int)v42) {
                    *(int*)(v42 * 4 + (int)&v9) = *ptr4;
                    v41 = v22;
                }
                else {
                    *(int*)(v42 * 4 + (int)&v9) = 0;
                }
                --ptr4;
                --v42;
            }
            while(v42 < 0x80000000);
            int v43 = (((v18 + 1 < 0 ? -1: 0) & 0x1f) + v18 + 1) >> 5;
            v20 = (((v18 + 1 < 0 ? -1: 0) & 0x1f) + v18 + 1) >> 5;
            int v44 = (v18 + 1) & 0x8000001f;
            if(v44 < 0) {
                v44 = ((v44 - 1) | 0xffffffe0) + 1;
            }
            v19 = 31;
            v25 = (int)(31 - v44);
            int v45 = (int)(31 - v44);
            if(((1 << (v45 & 0x1f)) & *(int*)(v43 * 4 + (int)&v9))) {
                char v46 = ~(-1 << (v45 & 0x1f)) & *(int*)(v43 * 4 + (int)&v9) ? 0: 1;
                while(v46) {
                    ++v43;
                    if(v43 >= 3) {
                        goto loc_40D0FF;
                    }
                    else {
                        v46 = *(int*)(v43 * 4 + (int)&v9) == 0;
                    }
                }
                int v47 = v18 & 0x8000001f;
                if(v47 < 0) {
                    v47 = ((v47 - 1) | 0xffffffe0) + 1;
                }
                unsigned int v48 = *(unsigned int*)(((((v18 < 0 ? -1: 0) & 0x1f) + v18) >> 5) * 4 + (int)&v9);
                int v49 = 0;
                v16 = (unsigned int)(1 << ((31 - v47) & 0x1f));
                v12 = (unsigned int)(1 << ((31 - v47) & 0x1f)) + v48;
                v19 = 0xffffffff;
                if((unsigned int)(1 << ((31 - v47) & 0x1f)) + v48 < v48 || v16 > v12) {
                    v49 = 1;
                }
                *(unsigned int*)(((((v18 < 0 ? -1: 0) & 0x1f) + v18) >> 5) * 4 + (int)&v9) = v12;
                int v50 = ((((v18 < 0 ? -1: 0) & 0x1f) + v18) >> 5) - 1;
                if(v50 >= 0) {
                    while(v49) {
                        unsigned int v51 = *(unsigned int*)(v50 * 4 + (int)&v9);
                        v49 = v51 + 1 >= v51 && v51 >= 0 ? 0: 1;
                        *(unsigned int*)(v50 * 4 + (int)&v9) = v51 + 1;
                        --v50;
                        if(v50 < 0) {
                            break;
                        }
                    }
                }
                v45 = v25;
            loc_40D0FF:
                v43 = v20;
            }
            *(int*)(v43 * 4 + (int)&v9) = (0xffffffff << (v45 & 0x1f)) & *(int*)(v43 * 4 + (int)&v9);
            if(v43 + 1 < 3) {
                int* ptr5 = (int*)((v43 + 1) * 4 + (int)&v9);
                for(int j = (int)(3 - (v43 + 1)); j != 0; --j) {
                    *ptr5 = 0;
                    ++ptr5;
                }
            }
            int v52 = (int)(gvar_418EBC + 1);
            v0 = (unsigned int)((((v52 < 0 ? -1: 0) & 0x1f) + v52) >> 5);
            unsigned int v53 = (unsigned int)(v52 & 0x8000001f);
            if(v53 >= 0x80000000) {
                v53 = (unsigned int)(((v53 - 1) | 0xffffffe0) + 1);
            }
            int v54 = 0;
            v19 = 32;
            v12 = 0;
            v18 = 0;
            v16 = 32 - v53;
            do {
                int v55 = *(int*)(v54 * 4 + (int)&v9);
                *(int*)(v18 * 4 + (int)&v9) = (v55 >>> (v53 & 0x1f)) | v12;
                v12 = (unsigned int)((~(0xffffffff << (v53 & 0x1f)) & v55) << (v16 & 0x1f));
                v54 = v18 + 1;
                ++v18;
            }
            while(v54 < 3);
            v19 = 2;
            int* ptr6 = (int*)((int)&v13 - v0 * 4);
            unsigned int v56 = 2;
            do {
                *(int*)(v56 * 4 + (int)&v9) = (int)v56 >= (int)v0 ? *ptr6: 0;
                --ptr6;
                --v56;
            }
            while(v56 < 0x80000000);
        loc_40CF8A:
            v2 = 0;
        }
        else if(gvar_418EB0 <= (int)v34) {
            unsigned int v57 = gvar_418EBC;
            v9 = 0;
            *(&v9 + 1) = 0;
            *(&v9 + 2) = 0;
            v9 |= 0x80000000;
            v18 = (((v57 >= 0x80000000 ? -1: 0) & 0x1f) + v57) >> 5;
            unsigned int v58 = v57 & 0x8000001f;
            if(v58 >= 0x80000000) {
                v58 = (unsigned int)(((v58 - 1) | 0xffffffe0) + 1);
            }
            v1 = v58;
            v19 = 32;
            v12 = 0;
            v0 = 32 - v58;
            do {
                int v59 = *(int*)(v7 * 4 + (int)&v9);
                int v60 = (v59 >>> (v58 & 0x1f)) | v12;
                unsigned int v61 = (unsigned int)((~(-1 << (v58 & 0x1f)) & v59) << (v0 & 0x1f));
                v58 = v1;
                *(int*)(v7 * 4 + (int)&v9) = v60;
                ++v7;
                v12 = v61;
            }
            while(v7 < 3);
            v19 = 2;
            int* ptr7 = (int*)((int)&v13 - v18 * 4);
            unsigned int v62 = 2;
            do {
                *(int*)(v62 * 4 + (int)&v9) = (int)v62 >= v18 ? *ptr7: 0;
                --ptr7;
                --v62;
            }
            while(v62 < 0x80000000);
            v2 = gvar_418EB0 + gvar_418EC4;
        }
        else {
            unsigned int v63 = gvar_418EC4;
            v9 &= 0x7fffffff;
            unsigned int v64 = gvar_418EBC;
            v1 = v34 + v63;
            v0 = (unsigned int)((((v64 >= 0x80000000 ? -1: 0) & 0x1f) + v64) >> 5);
            int v65 = (int)(v64 & 0x8000001f);
            if(v65 < 0) {
                v65 = ((v65 - 1) | 0xffffffe0) + 1;
            }
            v19 = 32;
            v12 = 0;
            int v66 = 0;
            v16 = 32 - v65;
            do {
                int v67 = *(int*)(v66 * 4 + (int)&v9);
                unsigned int v68 = (unsigned int)((~(0xffffffff << (v65 & 0x1f)) & v67) << (v16 & 0x1f));
                *(int*)(v66 * 4 + (int)&v9) = (v67 >>> (v65 & 0x1f)) | v12;
                ++v66;
                v12 = v68;
            }
            while(v66 < 3);
            v2 = v1;
            v19 = 2;
            int* ptr8 = (int*)((int)&v13 - v0 * 4);
            unsigned int v69 = 2;
            do {
                *(int*)(v69 * 4 + (int)&v9) = (int)v69 >= (int)v0 ? *ptr8: 0;
                --ptr8;
                --v69;
            }
            while(v69 < 0x80000000);
        }
    loc_40D2F5:
        ptr1 = ptr2;
    }
loc_40D313:
    unsigned int v70 = gvar_418EC0;
    int v71 = ((v8 > 0 ? -1: 0) & 0x80000000) | (v2 << ((31 - gvar_418EBC) & 0x1f)) | v9;
    if(v70 == 32) {
        *ptr1 = v71;
    }
    else if(v70 == 64) {
        *(ptr1 + 1) = v71;
        *ptr1 = v10;
    }
    __security_check_cookie((uintptr_t)((int)&v3 ^ (int)ptr0));
    return result;
}

unsigned char* unk_lib_sub13(unsigned char* param0, unsigned char* param1, int* param2) {
    __SyntheticTypeUnknownP128 v0;
    __SyntheticTypeUnknown v1;
    __SyntheticTypeUnknown v2;
    __SyntheticTypeUnknown v3;
    __SyntheticTypeUnknown v4;
    unsigned char* ptr0 = param1;
    int* ptr1 = param2;
    unsigned char* ptr2 = param0;
    int* ptr3 = ptr1;
    if(ptr0 < ptr2 && (unsigned char*)((int)ptr1 + (int)ptr0) > ptr2) {
        int* ptr4 = (int*)((int)ptr1 + (int)ptr0) - 1;
        unsigned char* ptr5 = (unsigned char*)((int*)((int)ptr1 + (int)ptr2) - 1);
        if(!(int*)((int)ptr5 & 0x3)) {
            ptr1 = (int*)((int)ptr1 >>> 2);
            ptr3 = (int*)((int)ptr3 & 0x3);
            if((unsigned int)ptr1 >= 8) {
                while(ptr1 != 0) {
                    *(int*)ptr5 = *ptr4;
                    --ptr4;
                    ptr5 -= 4;
                    ptr1 = (int*)((char*)ptr1 - 1);
                }
                switch(ptr3) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                        return param0;
                    }
                    case 2: {
                        goto loc_40EC9F;
                    }
                    case 3: {
                        *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                        *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                        *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
            goto loc_40EB52;
        }
        else {
        loc_40EB74:
            switch(ptr1) {
                case 0: {
                    return param0;
                }
                case 1: {
                    *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                    return param0;
                }
                case 2: {
                    goto loc_40EC9F;
                }
                case 3: {
                    *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                    *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                    *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
                    return param0;
                }
            }
        loc_40EB6B:
            int* ptr6 = (int*)((int)ptr1 - (int)(unsigned char*)((int)ptr5 & 0x3));
            switch((unsigned char*)((int)ptr5 & 0x3)) {
                case 1: {
                    ptr3 = (int*)((int)ptr6 & 0x3);
                    *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                    ptr4 = (int*)((char*)ptr4 - 1);
                    ptr1 = (int*)((int)ptr6 >>> 2);
                    --ptr5;
                    if((unsigned int)ptr1 >= 8) {
                        while(ptr1 != 0) {
                            *(int*)ptr5 = *ptr4;
                            --ptr4;
                            ptr5 -= 4;
                            ptr1 = (int*)((char*)ptr1 - 1);
                        }
                        switch(ptr3) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                                return param0;
                            }
                            case 2: {
                                goto loc_40EC9F;
                            }
                            case 3: {
                                *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                                *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                                *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    }
                    else {
                        goto loc_40EB52;
                    }
                }
                case 2: {
                    goto loc_40EBAF;
                }
                case 3: {
                    goto loc_40EBD7;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_40EB74;
        loc_40EBD7:
            ptr3 = (int*)((int)ptr6 & 0x3);
            *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
            *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
            ptr1 = (int*)((int)ptr6 >>> 2);
            *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
            ptr4 = (int*)((char*)ptr4 - 3);
            ptr5 -= 3;
            if((unsigned int)ptr1 >= 8) {
                while(ptr1 != 0) {
                    *(int*)ptr5 = *ptr4;
                    --ptr4;
                    ptr5 -= 4;
                    ptr1 = (int*)((char*)ptr1 - 1);
                }
                switch(ptr3) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                        return param0;
                    }
                    case 2: {
                        goto loc_40EC9F;
                    }
                    case 3: {
                        *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                        *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                        *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            loc_40EBAF:
                ptr3 = (int*)((int)ptr6 & 0x3);
                *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                ptr1 = (int*)((int)ptr6 >>> 2);
                *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                ptr4 = (int*)((char*)ptr4 - 2);
                ptr5 -= 2;
                if((unsigned int)ptr1 >= 8) {
                    while(ptr1 != 0) {
                        *(int*)ptr5 = *ptr4;
                        --ptr4;
                        ptr5 -= 4;
                        ptr1 = (int*)((char*)ptr1 - 1);
                    }
                    switch(ptr3) {
                        case 0: {
                            return param0;
                        }
                        case 1: {
                            *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                            return param0;
                        }
                        case 2: {
                            goto loc_40EC9F;
                        }
                        case 3: {
                            *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                            *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                            *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
                            return param0;
                        }
                        default: {
                            throw 0;
                        }
                    }
                    goto loc_40EBD7;
                }
            }
        loc_40EB52:
            switch((int*)(0 - (int)ptr1)) {
                case 0: {
                    switch(ptr3) {
                        case 0: {
                            return param0;
                        }
                        case 1: {
                            *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                            return param0;
                        }
                        case 2: {
                            goto loc_40EC9F;
                        }
                        case 3: {
                            *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                            *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                            *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
                            return param0;
                        }
                        default: {
                            throw 0;
                            return param0;
                        }
                    }
                }
                default: {
                    throw 0;
                }
            }
            goto loc_40EB6B;
        }
    loc_40EC9F:
        *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
        *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
    }
    else if(!((gvar_419EEC >>> 1) & 0x1)) {
        if((unsigned int)ptr1 >= 128) {
            if((!(int*)((int)(int*)((int)ptr0 ^ (int)ptr2) & 0xf) && ((gvar_418E00 >>> 1) & 0x1))) {
                unsigned char* result = ptr2;
                if((int*)((int)ptr0 & 0xf)) {
                    int* ptr7 = (int*)(16 - (int)(int*)((int)ptr0 & 0xf));
                    int* ptr8 = (int*)((int)ptr1 - (int)ptr7);
                    int* ptr9 = ptr7;
                    int* ptr10 = (int*)((int)ptr9 & 0x3);
                    if(ptr10) {
                        do {
                            ptr7 = (unsigned int)*ptr0 | ((unsigned int)(int*)((int)(int*)((int)ptr7 >>> 8) & 0xffffff) << 8);
                            *ptr2 = (unsigned char)ptr7;
                            ++ptr0;
                            ++ptr2;
                            ptr10 = (int*)((char*)ptr10 - 1);
                        }
                        while(ptr10);
                    }
                    int* ptr11 = (int*)((int)ptr9 >>> 2);
                    if(ptr11) {
                        do {
                            *(int*)ptr2 = *(int*)ptr0;
                            ptr0 += 4;
                            ptr2 += 4;
                            ptr11 = (int*)((char*)ptr11 - 1);
                        }
                        while(ptr11);
                    }
                    ptr1 = ptr8;
                }
                int* ptr12 = ptr1;
                ptr1 = (int*)((int)ptr1 & 0x7f);
                ptr3 = (int*)((int)ptr12 >>> 7);
                if(ptr3) {
                    do {
                        v1 = *(__SyntheticTypeUnknownP128)(ptr0 + 16);
                        __SyntheticTypeUnknown v5 = *(__SyntheticTypeUnknownP128)(ptr0 + 32);
                        v2 = *(__SyntheticTypeUnknownP128)(ptr0 + 48);
                        *(__SyntheticTypeUnknownP128)ptr2 = *(__SyntheticTypeUnknownP128)ptr0;
                        *(__SyntheticTypeUnknownP128)(ptr2 + 16) = v1;
                        *(__SyntheticTypeUnknownP128)(ptr2 + 32) = v5;
                        *(__SyntheticTypeUnknownP128)(ptr2 + 48) = v2;
                        v4 = *(__SyntheticTypeUnknownP128)(ptr0 + 80);
                        __SyntheticTypeUnknown v6 = *(__SyntheticTypeUnknownP128)(ptr0 + 96);
                        __SyntheticTypeUnknown v7 = *(__SyntheticTypeUnknownP128)(ptr0 + 112);
                        *(__SyntheticTypeUnknownP128)(ptr2 + 64) = *(__SyntheticTypeUnknownP128)(ptr0 + 64);
                        *(__SyntheticTypeUnknownP128)(ptr2 + 80) = v4;
                        *(__SyntheticTypeUnknownP128)(ptr2 + 96) = v6;
                        *(__SyntheticTypeUnknownP128)(ptr2 + 112) = v7;
                        ptr0 += 128;
                        ptr2 += 128;
                        ptr3 = (int*)((char*)ptr3 - 1);
                    }
                    while(ptr3);
                }
                if(ptr1) {
                    ptr3 = (int*)((int)ptr1 >>> 4);
                    if(ptr3) {
                        do {
                            *(__SyntheticTypeUnknownP128)ptr2 = *(__SyntheticTypeUnknownP128)ptr0;
                            ptr0 += 16;
                            ptr2 += 16;
                            ptr3 = (int*)((char*)ptr3 - 1);
                        }
                        while(ptr3);
                    }
                    ptr1 = (int*)((int)ptr1 & 0xf);
                    if(ptr1) {
                        int* ptr13 = ptr1;
                        int* ptr14 = (int*)((int)ptr1 >>> 2);
                        if(ptr14) {
                            do {
                                *(int**)ptr2 = *(int**)ptr0;
                                ptr0 += 4;
                                ptr2 += 4;
                                ptr14 = (int*)((char*)ptr14 - 1);
                            }
                            while(ptr14);
                        }
                        ptr1 = (int*)((int)ptr13 & 0x3);
                        if(ptr1) {
                            do {
                                ptr13 = (unsigned int)*ptr0 | ((unsigned int)(int*)((int)(int*)((int)ptr13 >>> 8) & 0xffffff) << 8);
                                *ptr2 = (unsigned char)ptr13;
                                ++ptr0;
                                ++ptr2;
                                ptr1 = (int*)((char*)ptr1 - 1);
                            }
                            while(ptr1);
                        }
                    }
                }
                return result;
            }
            else if((gvar_419EEC & 0x1)) {
                if((int*)((int)ptr2 & 0x3)) {
                loc_40E9CF:
                    int* ptr15 = ptr1;
                    --ptr1;
                    if((unsigned int)ptr15 >= 4) {
                        int* ptr16 = (int*)((int)(unsigned char*)((int)ptr2 & 0x3) + (int)ptr1);
                        switch((unsigned char*)((int)ptr2 & 0x3)) {
                            case 1: {
                                ptr3 = (int*)((int)ptr16 & 0x3);
                                *ptr2 = *ptr0;
                                *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                ptr1 = (int*)((int)ptr16 >>> 2);
                                *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                ptr0 += 3;
                                ptr2 += 3;
                                if((unsigned int)ptr1 >= 8) {
                                    while(ptr1 != 0) {
                                        *(int*)ptr2 = *(int*)ptr0;
                                        ptr0 += 4;
                                        ptr2 += 4;
                                        ptr1 = (int*)((char*)ptr1 - 1);
                                    }
                                    switch(ptr3) {
                                        case 0: {
                                            return param0;
                                        }
                                        case 1: {
                                            *ptr2 = *ptr0;
                                            return param0;
                                        }
                                        case 2: {
                                            *ptr2 = *ptr0;
                                            *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                            return param0;
                                        }
                                        case 3: {
                                            *ptr2 = *ptr0;
                                            *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                            *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                            return param0;
                                        }
                                        default: {
                                            throw 0;
                                        }
                                    }
                                loc_40EA28:
                                    ptr3 = (int*)((int)ptr16 & 0x3);
                                    *ptr2 = *ptr0;
                                    ptr1 = (int*)((int)ptr16 >>> 2);
                                    *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                    ptr0 += 2;
                                    ptr2 += 2;
                                    if((unsigned int)ptr1 >= 8) {
                                        while(ptr1 != 0) {
                                            *(int*)ptr2 = *(int*)ptr0;
                                            ptr0 += 4;
                                            ptr2 += 4;
                                            ptr1 = (int*)((char*)ptr1 - 1);
                                        }
                                        switch(ptr3) {
                                            case 0: {
                                                return param0;
                                            }
                                            case 1: {
                                                *ptr2 = *ptr0;
                                                return param0;
                                            }
                                            case 2: {
                                                *ptr2 = *ptr0;
                                                *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                                return param0;
                                            }
                                            case 3: {
                                                *ptr2 = *ptr0;
                                                *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                                *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                                return param0;
                                            }
                                            default: {
                                                throw 0;
                                            }
                                        }
                                    loc_40EA4C:
                                        ptr3 = (int*)((int)ptr16 & 0x3);
                                        *ptr2 = *ptr0;
                                        ++ptr0;
                                        ptr1 = (int*)((int)ptr16 >>> 2);
                                        ++ptr2;
                                        if((unsigned int)ptr1 >= 8) {
                                            while(ptr1 != 0) {
                                                *(int*)ptr2 = *(int*)ptr0;
                                                ptr0 += 4;
                                                ptr2 += 4;
                                                ptr1 = (int*)((char*)ptr1 - 1);
                                            }
                                            switch(ptr3) {
                                                case 0: {
                                                    return param0;
                                                }
                                                case 1: {
                                                    *ptr2 = *ptr0;
                                                    return param0;
                                                }
                                                case 2: {
                                                    *ptr2 = *ptr0;
                                                    *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                                    return param0;
                                                }
                                                case 3: {
                                                    *ptr2 = *ptr0;
                                                    *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                                    *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                                    return param0;
                                                }
                                                default: {
                                                    throw 0;
                                                }
                                            }
                                            *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 7) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 7);
                                            *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 6);
                                            *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 5);
                                            *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 4);
                                            *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 3);
                                            *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 2);
                                            goto loc_40EAC0;
                                        }
                                    }
                                }
                                goto loc_40E9E8;
                            }
                            case 2: {
                                goto loc_40EA28;
                            }
                            case 3: {
                                goto loc_40EA4C;
                            }
                            default: {
                                throw 0;
                            }
                        }
                        goto loc_40E9E0;
                    }
                    else {
                    loc_40E9E0:
                        switch(ptr1) {
                            case -4: {
                                *ptr2 = *ptr0;
                                *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                return param0;
                            }
                            case -3: {
                                *ptr2 = *ptr0;
                                *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                return param0;
                            }
                            case -2: {
                                *ptr2 = *ptr0;
                                return param0;
                            }
                            case -1: {
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                        goto loc_40E9E8;
                    }
                }
                else if((int*)((int)ptr0 & 0x3)) {
                    goto loc_40E9B3;
                }
                else {
                    if((int*)((int)(int*)((int)ptr2 >>> 2) & 0x1)) {
                        int v8 = *(int*)ptr0;
                        --ptr1;
                        ptr0 += 4;
                        *(int*)ptr2 = v8;
                        ptr2 += 4;
                    }
                    if((int*)((int)(int*)((int)ptr2 >>> 3) & 0x1)) {
                        v1 = (__SyntheticTypeUnknownU)*(long long*)ptr0 | ((__SyntheticTypeUnknownU)(unsigned long long)(v1 >>> 0x40X) << 64);
                        ptr1 -= 2;
                        ptr0 += 8;
                        *(long long*)ptr2 = (unsigned long long)v1;
                        ptr2 += 8;
                    }
                    if(!(int*)((int)ptr0 & 0x7)) {
                        v1 = *(__SyntheticTypeUnknownP128)(ptr0 - 8);
                        int* ptr17 = (int*)(ptr0 - 8);
                        do {
                            __SyntheticTypeUnknown v9 = *(__SyntheticTypeUnknownP128)(ptr17 + 4);
                            ptr1 -= 12;
                            __SyntheticTypeUnknown v10 = *(__SyntheticTypeUnknownP128)(ptr17 + 8);
                            __SyntheticTypeUnknown v11 = *(__SyntheticTypeUnknownP128)(ptr17 + 12);
                            ptr17 += 12;
                            v2 = palignr(v9, v1, 8);
                            *(__SyntheticTypeUnknownP128)ptr2 = v2;
                            v3 = palignr(v10, v9, 8);
                            *(__SyntheticTypeUnknownP128)(ptr2 + 16) = v3;
                            v1 = v11;
                            v4 = palignr(v11, v10, 8);
                            *(__SyntheticTypeUnknownP128)(ptr2 + 32) = v4;
                            ptr2 += 48;
                        }
                        while((int)ptr1 >= 48);
                        v0 = (__SyntheticTypeUnknownP128)(ptr17 + 2);
                    }
                    else if((int*)((int)(int*)((int)ptr0 >>> 3) & 0x1)) {
                        v1 = *(__SyntheticTypeUnknownP128)(ptr0 - 12);
                        int* ptr18 = (int*)(ptr0 - 12);
                        do {
                            __SyntheticTypeUnknown v12 = *(__SyntheticTypeUnknownP128)(ptr18 + 4);
                            ptr1 -= 12;
                            __SyntheticTypeUnknown v13 = *(__SyntheticTypeUnknownP128)(ptr18 + 8);
                            __SyntheticTypeUnknown v14 = *(__SyntheticTypeUnknownP128)(ptr18 + 12);
                            ptr18 += 12;
                            __SyntheticTypeUnknown v2 = palignr(v12, v1, 12);
                            *(__SyntheticTypeUnknownP128)ptr2 = v2;
                            __SyntheticTypeUnknown v3 = palignr(v13, v12, 12);
                            *(__SyntheticTypeUnknownP128)(ptr2 + 16) = v3;
                            v1 = v14;
                            __SyntheticTypeUnknown v4 = palignr(v14, v13, 12);
                            *(__SyntheticTypeUnknownP128)(ptr2 + 32) = v4;
                            ptr2 += 48;
                        }
                        while((int)ptr1 >= 48);
                        v0 = (__SyntheticTypeUnknownP128)(ptr18 + 3);
                    }
                    else {
                        v1 = *(__SyntheticTypeUnknownP128)(ptr0 - 4);
                        int* ptr19 = (int*)(ptr0 - 4);
                        do {
                            __SyntheticTypeUnknown v15 = *(__SyntheticTypeUnknownP128)(ptr19 + 4);
                            ptr1 -= 12;
                            __SyntheticTypeUnknown v16 = *(__SyntheticTypeUnknownP128)(ptr19 + 8);
                            __SyntheticTypeUnknown v17 = *(__SyntheticTypeUnknownP128)(ptr19 + 12);
                            ptr19 += 12;
                            v2 = palignr(v15, v1, 4);
                            *(__SyntheticTypeUnknownP128)ptr2 = v2;
                            v3 = palignr(v16, v15, 4);
                            *(__SyntheticTypeUnknownP128)(ptr2 + 16) = v3;
                            v1 = v17;
                            v4 = palignr(v17, v16, 4);
                            *(__SyntheticTypeUnknownP128)(ptr2 + 32) = v4;
                            ptr2 += 48;
                        }
                        while((int)ptr1 >= 48);
                        v0 = (__SyntheticTypeUnknownP128)(ptr19 + 1);
                    }
                    while((int)ptr1 >= 16) {
                        v1 = *v0;
                        ptr1 -= 4;
                        ++v0;
                        *(__SyntheticTypeUnknownP128)ptr2 = v1;
                        ptr2 += 16;
                    }
                    if((int*)((int)(int*)((int)ptr1 >>> 2) & 0x1)) {
                        int v18 = *(int*)v0;
                        --ptr1;
                        v0 = (__SyntheticTypeUnknownP128)((char*)v0 + 4);
                        *(int*)ptr2 = v18;
                        ptr2 += 4;
                    }
                    if((int*)((int)(int*)((int)ptr1 >>> 3) & 0x1)) {
                        ptr1 -= 2;
                        *(long long*)ptr2 = *(long long*)v0;
                    }
                    switch(ptr1) {
                        case 0: {
                            return param0;
                        }
                        case 1: {
                            *ptr2 = *ptr0;
                            return param0;
                        }
                        case 2: {
                            *ptr2 = *ptr0;
                            *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                            return param0;
                        }
                        case 3: {
                            *ptr2 = *ptr0;
                            *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                            *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                            return param0;
                        }
                        default: {
                            throw 0;
                        }
                    }
                loc_40E9B1:
                    if(!(int*)((int)ptr2 & 0x3)) {
                    loc_40E9B3:
                        ptr1 = (int*)((int)ptr1 >>> 2);
                        ptr3 = (int*)((int)ptr3 & 0x3);
                        if((unsigned int)ptr1 < 8) {
                        loc_40E9E8:
                            switch(ptr1) {
                                case 0: {
                                loc_40EACF:
                                    switch(ptr3) {
                                        case 0: {
                                            return param0;
                                        }
                                        case 1: {
                                            *ptr2 = *ptr0;
                                            return param0;
                                        }
                                        case 2: {
                                            *ptr2 = *ptr0;
                                            *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                            return param0;
                                        }
                                        case 3: {
                                            *ptr2 = *ptr0;
                                            *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                            *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                            return param0;
                                        }
                                        default: {
                                            throw 0;
                                            return param0;
                                        }
                                    }
                                }
                                case 1: {
                                loc_40EAC0:
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 1) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 1);
                                    ptr0 = (unsigned char*)((int)(unsigned char*)((int)ptr1 * 4) + (int)ptr0);
                                    ptr2 = (unsigned char*)((int)(unsigned char*)((int)ptr1 * 4) + (int)ptr2);
                                    break;
                                }
                                case 2: {
                                loc_40EAB8:
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 2);
                                    goto loc_40EAC0;
                                }
                                case 3: {
                                loc_40EAB0:
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 3);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 2);
                                    goto loc_40EAC0;
                                }
                                case 4: {
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 4);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 3);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 2);
                                    goto loc_40EAC0;
                                }
                                case 5: {
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 5);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 4);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 3);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 2);
                                    goto loc_40EAC0;
                                }
                                case 6: {
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 6);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 5);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 4);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 3);
                                    goto loc_40EAB8;
                                }
                                case 7: {
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 7) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 7);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 6);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 5);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 4);
                                    goto loc_40EAB0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                            goto loc_40EACF;
                        }
                        else {
                            while(ptr1 != 0) {
                                *(int*)ptr2 = *(int*)ptr0;
                                ptr0 += 4;
                                ptr2 += 4;
                                ptr1 = (int*)((char*)ptr1 - 1);
                            }
                            switch(ptr3) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *ptr2 = *ptr0;
                                    return param0;
                                }
                                case 2: {
                                    *ptr2 = *ptr0;
                                    *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                    return param0;
                                }
                                case 3: {
                                    *ptr2 = *ptr0;
                                    *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                    *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        }
                    }
                    goto loc_40E9CF;
                }
            }
        }
        goto loc_40E9B1;
    }
    else {
        while(ptr1 != 0) {
            *ptr2 = *ptr0;
            ++ptr0;
            ++ptr2;
            ptr1 = (int*)((char*)ptr1 - 1);
        }
    }
    return param0;
}

int unk_lib_sub14(char* param0, int param1) {
    char v0;
    return vscan_fn(&_input_l, param0, param1, 0, &v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unk_lib_sub15(unsigned int* param0) {
    int result;
    unsigned int* ptr0 = param0;
    *(int*)(ptr0 + 1) = *(int*)(ptr0 + 1) - 1;
    if(*(int*)(ptr0 + 1) >= 0) {
        char* ptr1 = *ptr0;
        result = (unsigned int)*ptr1;
        *ptr0 = (int*)(ptr1 + 1);
    }
    else {
        result = _filbuf((int)ptr0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unk_lib_sub16(int param0) {
    return x_ismbbtype_l(0, param0, 0, 4);
}

int unk_lib_sub17(int _C, int* param1) {
    int v0;
    char v1;
    int v2;
    _LocaleUpdate::_LocaleUpdate(&v0, param1);
    int result = *(int*)(v0 + 116) > 1 ? _isctype_l(_C, 128, (_locale_t)&v0): (unsigned int)*(short*)(_C * 2 + *(int*)(v0 + 144)) & 0x80;
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

int unk_lib_sub18(void* param0) {
    int result;
    if(param0 && *(int*)((int)param0 - 8) == 0xdddd) {
        free((void*)((int)param0 - 8));
    }
    return result;
}

int unk_lib_sub19(unsigned int* param0) {
    if(!param0) {
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        return 22;
    }
    *param0 = gvar_419F3C;
    return 0;
}

unsigned char* unk_lib_sub2(unsigned char* param0, unsigned char* param1, int* param2) {
    __SyntheticTypeUnknownP128 v0;
    __SyntheticTypeUnknown v1;
    __SyntheticTypeUnknown v2;
    __SyntheticTypeUnknown v3;
    __SyntheticTypeUnknown v4;
    unsigned char* ptr0 = param1;
    int* ptr1 = param2;
    unsigned char* ptr2 = param0;
    int* ptr3 = ptr1;
    if(ptr0 < ptr2 && (unsigned char*)((int)ptr1 + (int)ptr0) > ptr2) {
        int* ptr4 = (int*)((int)ptr1 + (int)ptr0) - 1;
        unsigned char* ptr5 = (unsigned char*)((int*)((int)ptr1 + (int)ptr2) - 1);
        if(!(int*)((int)ptr5 & 0x3)) {
            ptr1 = (int*)((int)ptr1 >>> 2);
            ptr3 = (int*)((int)ptr3 & 0x3);
            if((unsigned int)ptr1 >= 8) {
                while(ptr1 != 0) {
                    *(int*)ptr5 = *ptr4;
                    --ptr4;
                    ptr5 -= 4;
                    ptr1 = (int*)((char*)ptr1 - 1);
                }
                switch(ptr3) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                        return param0;
                    }
                    case 2: {
                        goto loc_40613F;
                    }
                    case 3: {
                        *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                        *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                        *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
            goto loc_405FF2;
        }
        else {
        loc_406014:
            switch(ptr1) {
                case 0: {
                    return param0;
                }
                case 1: {
                    *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                    return param0;
                }
                case 2: {
                    goto loc_40613F;
                }
                case 3: {
                    *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                    *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                    *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
                    return param0;
                }
            }
        loc_40600B:
            int* ptr6 = (int*)((int)ptr1 - (int)(unsigned char*)((int)ptr5 & 0x3));
            switch((unsigned char*)((int)ptr5 & 0x3)) {
                case 1: {
                    ptr3 = (int*)((int)ptr6 & 0x3);
                    *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                    ptr4 = (int*)((char*)ptr4 - 1);
                    ptr1 = (int*)((int)ptr6 >>> 2);
                    --ptr5;
                    if((unsigned int)ptr1 >= 8) {
                        while(ptr1 != 0) {
                            *(int*)ptr5 = *ptr4;
                            --ptr4;
                            ptr5 -= 4;
                            ptr1 = (int*)((char*)ptr1 - 1);
                        }
                        switch(ptr3) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                                return param0;
                            }
                            case 2: {
                                goto loc_40613F;
                            }
                            case 3: {
                                *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                                *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                                *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    }
                    else {
                        goto loc_405FF2;
                    }
                }
                case 2: {
                    goto loc_40604F;
                }
                case 3: {
                    goto loc_406077;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_406014;
        loc_406077:
            ptr3 = (int*)((int)ptr6 & 0x3);
            *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
            *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
            ptr1 = (int*)((int)ptr6 >>> 2);
            *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
            ptr4 = (int*)((char*)ptr4 - 3);
            ptr5 -= 3;
            if((unsigned int)ptr1 >= 8) {
                while(ptr1 != 0) {
                    *(int*)ptr5 = *ptr4;
                    --ptr4;
                    ptr5 -= 4;
                    ptr1 = (int*)((char*)ptr1 - 1);
                }
                switch(ptr3) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                        return param0;
                    }
                    case 2: {
                        goto loc_40613F;
                    }
                    case 3: {
                        *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                        *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                        *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            loc_40604F:
                ptr3 = (int*)((int)ptr6 & 0x3);
                *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                ptr1 = (int*)((int)ptr6 >>> 2);
                *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                ptr4 = (int*)((char*)ptr4 - 2);
                ptr5 -= 2;
                if((unsigned int)ptr1 >= 8) {
                    while(ptr1 != 0) {
                        *(int*)ptr5 = *ptr4;
                        --ptr4;
                        ptr5 -= 4;
                        ptr1 = (int*)((char*)ptr1 - 1);
                    }
                    switch(ptr3) {
                        case 0: {
                            return param0;
                        }
                        case 1: {
                            *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                            return param0;
                        }
                        case 2: {
                            goto loc_40613F;
                        }
                        case 3: {
                            *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                            *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                            *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
                            return param0;
                        }
                        default: {
                            throw 0;
                        }
                    }
                    goto loc_406077;
                }
            }
        loc_405FF2:
            switch((int*)(0 - (int)ptr1)) {
                case 0: {
                    switch(ptr3) {
                        case 0: {
                            return param0;
                        }
                        case 1: {
                            *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                            return param0;
                        }
                        case 2: {
                            goto loc_40613F;
                        }
                        case 3: {
                            *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
                            *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
                            *(char*)(ptr5 + 1) = *(char*)((char*)ptr4 + 1);
                            return param0;
                        }
                        default: {
                            throw 0;
                            return param0;
                        }
                    }
                }
                default: {
                    throw 0;
                }
            }
            goto loc_40600B;
        }
    loc_40613F:
        *(char*)(ptr5 + 3) = *(char*)((char*)ptr4 + 3);
        *(char*)(ptr5 + 2) = *(char*)((char*)ptr4 + 2);
    }
    else if(!((gvar_419EEC >>> 1) & 0x1)) {
        if((unsigned int)ptr1 >= 128) {
            if((!(int*)((int)(int*)((int)ptr0 ^ (int)ptr2) & 0xf) && ((gvar_418E00 >>> 1) & 0x1))) {
                unsigned char* result = ptr2;
                if((int*)((int)ptr0 & 0xf)) {
                    int* ptr7 = (int*)(16 - (int)(int*)((int)ptr0 & 0xf));
                    int* ptr8 = (int*)((int)ptr1 - (int)ptr7);
                    int* ptr9 = ptr7;
                    int* ptr10 = (int*)((int)ptr9 & 0x3);
                    if(ptr10) {
                        do {
                            ptr7 = (unsigned int)*ptr0 | ((unsigned int)(int*)((int)(int*)((int)ptr7 >>> 8) & 0xffffff) << 8);
                            *ptr2 = (unsigned char)ptr7;
                            ++ptr0;
                            ++ptr2;
                            ptr10 = (int*)((char*)ptr10 - 1);
                        }
                        while(ptr10);
                    }
                    int* ptr11 = (int*)((int)ptr9 >>> 2);
                    if(ptr11) {
                        do {
                            *(int*)ptr2 = *(int*)ptr0;
                            ptr0 += 4;
                            ptr2 += 4;
                            ptr11 = (int*)((char*)ptr11 - 1);
                        }
                        while(ptr11);
                    }
                    ptr1 = ptr8;
                }
                int* ptr12 = ptr1;
                ptr1 = (int*)((int)ptr1 & 0x7f);
                ptr3 = (int*)((int)ptr12 >>> 7);
                if(ptr3) {
                    do {
                        v1 = *(__SyntheticTypeUnknownP128)(ptr0 + 16);
                        __SyntheticTypeUnknown v5 = *(__SyntheticTypeUnknownP128)(ptr0 + 32);
                        v2 = *(__SyntheticTypeUnknownP128)(ptr0 + 48);
                        *(__SyntheticTypeUnknownP128)ptr2 = *(__SyntheticTypeUnknownP128)ptr0;
                        *(__SyntheticTypeUnknownP128)(ptr2 + 16) = v1;
                        *(__SyntheticTypeUnknownP128)(ptr2 + 32) = v5;
                        *(__SyntheticTypeUnknownP128)(ptr2 + 48) = v2;
                        v4 = *(__SyntheticTypeUnknownP128)(ptr0 + 80);
                        __SyntheticTypeUnknown v6 = *(__SyntheticTypeUnknownP128)(ptr0 + 96);
                        __SyntheticTypeUnknown v7 = *(__SyntheticTypeUnknownP128)(ptr0 + 112);
                        *(__SyntheticTypeUnknownP128)(ptr2 + 64) = *(__SyntheticTypeUnknownP128)(ptr0 + 64);
                        *(__SyntheticTypeUnknownP128)(ptr2 + 80) = v4;
                        *(__SyntheticTypeUnknownP128)(ptr2 + 96) = v6;
                        *(__SyntheticTypeUnknownP128)(ptr2 + 112) = v7;
                        ptr0 += 128;
                        ptr2 += 128;
                        ptr3 = (int*)((char*)ptr3 - 1);
                    }
                    while(ptr3);
                }
                if(ptr1) {
                    ptr3 = (int*)((int)ptr1 >>> 4);
                    if(ptr3) {
                        do {
                            *(__SyntheticTypeUnknownP128)ptr2 = *(__SyntheticTypeUnknownP128)ptr0;
                            ptr0 += 16;
                            ptr2 += 16;
                            ptr3 = (int*)((char*)ptr3 - 1);
                        }
                        while(ptr3);
                    }
                    ptr1 = (int*)((int)ptr1 & 0xf);
                    if(ptr1) {
                        int* ptr13 = ptr1;
                        int* ptr14 = (int*)((int)ptr1 >>> 2);
                        if(ptr14) {
                            do {
                                *(int**)ptr2 = *(int**)ptr0;
                                ptr0 += 4;
                                ptr2 += 4;
                                ptr14 = (int*)((char*)ptr14 - 1);
                            }
                            while(ptr14);
                        }
                        ptr1 = (int*)((int)ptr13 & 0x3);
                        if(ptr1) {
                            do {
                                ptr13 = (unsigned int)*ptr0 | ((unsigned int)(int*)((int)(int*)((int)ptr13 >>> 8) & 0xffffff) << 8);
                                *ptr2 = (unsigned char)ptr13;
                                ++ptr0;
                                ++ptr2;
                                ptr1 = (int*)((char*)ptr1 - 1);
                            }
                            while(ptr1);
                        }
                    }
                }
                return result;
            }
            else if((gvar_419EEC & 0x1)) {
                if((int*)((int)ptr2 & 0x3)) {
                loc_405E6F:
                    int* ptr15 = ptr1;
                    --ptr1;
                    if((unsigned int)ptr15 >= 4) {
                        int* ptr16 = (int*)((int)(unsigned char*)((int)ptr2 & 0x3) + (int)ptr1);
                        switch((unsigned char*)((int)ptr2 & 0x3)) {
                            case 1: {
                                ptr3 = (int*)((int)ptr16 & 0x3);
                                *ptr2 = *ptr0;
                                *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                ptr1 = (int*)((int)ptr16 >>> 2);
                                *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                ptr0 += 3;
                                ptr2 += 3;
                                if((unsigned int)ptr1 >= 8) {
                                    while(ptr1 != 0) {
                                        *(int*)ptr2 = *(int*)ptr0;
                                        ptr0 += 4;
                                        ptr2 += 4;
                                        ptr1 = (int*)((char*)ptr1 - 1);
                                    }
                                    switch(ptr3) {
                                        case 0: {
                                            return param0;
                                        }
                                        case 1: {
                                            *ptr2 = *ptr0;
                                            return param0;
                                        }
                                        case 2: {
                                            *ptr2 = *ptr0;
                                            *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                            return param0;
                                        }
                                        case 3: {
                                            *ptr2 = *ptr0;
                                            *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                            *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                            return param0;
                                        }
                                        default: {
                                            throw 0;
                                        }
                                    }
                                loc_405EC8:
                                    ptr3 = (int*)((int)ptr16 & 0x3);
                                    *ptr2 = *ptr0;
                                    ptr1 = (int*)((int)ptr16 >>> 2);
                                    *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                    ptr0 += 2;
                                    ptr2 += 2;
                                    if((unsigned int)ptr1 >= 8) {
                                        while(ptr1 != 0) {
                                            *(int*)ptr2 = *(int*)ptr0;
                                            ptr0 += 4;
                                            ptr2 += 4;
                                            ptr1 = (int*)((char*)ptr1 - 1);
                                        }
                                        switch(ptr3) {
                                            case 0: {
                                                return param0;
                                            }
                                            case 1: {
                                                *ptr2 = *ptr0;
                                                return param0;
                                            }
                                            case 2: {
                                                *ptr2 = *ptr0;
                                                *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                                return param0;
                                            }
                                            case 3: {
                                                *ptr2 = *ptr0;
                                                *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                                *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                                return param0;
                                            }
                                            default: {
                                                throw 0;
                                            }
                                        }
                                    loc_405EEC:
                                        ptr3 = (int*)((int)ptr16 & 0x3);
                                        *ptr2 = *ptr0;
                                        ++ptr0;
                                        ptr1 = (int*)((int)ptr16 >>> 2);
                                        ++ptr2;
                                        if((unsigned int)ptr1 >= 8) {
                                            while(ptr1 != 0) {
                                                *(int*)ptr2 = *(int*)ptr0;
                                                ptr0 += 4;
                                                ptr2 += 4;
                                                ptr1 = (int*)((char*)ptr1 - 1);
                                            }
                                            switch(ptr3) {
                                                case 0: {
                                                    return param0;
                                                }
                                                case 1: {
                                                    *ptr2 = *ptr0;
                                                    return param0;
                                                }
                                                case 2: {
                                                    *ptr2 = *ptr0;
                                                    *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                                    return param0;
                                                }
                                                case 3: {
                                                    *ptr2 = *ptr0;
                                                    *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                                    *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                                    return param0;
                                                }
                                                default: {
                                                    throw 0;
                                                }
                                            }
                                            *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 7) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 7);
                                            *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 6);
                                            *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 5);
                                            *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 4);
                                            *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 3);
                                            *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 2);
                                            goto loc_405F60;
                                        }
                                    }
                                }
                                goto loc_405E88;
                            }
                            case 2: {
                                goto loc_405EC8;
                            }
                            case 3: {
                                goto loc_405EEC;
                            }
                            default: {
                                throw 0;
                            }
                        }
                        goto loc_405E80;
                    }
                    else {
                    loc_405E80:
                        switch(ptr1) {
                            case -4: {
                                *ptr2 = *ptr0;
                                *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                return param0;
                            }
                            case -3: {
                                *ptr2 = *ptr0;
                                *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                return param0;
                            }
                            case -2: {
                                *ptr2 = *ptr0;
                                return param0;
                            }
                            case -1: {
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                        goto loc_405E88;
                    }
                }
                else if((int*)((int)ptr0 & 0x3)) {
                    goto loc_405E53;
                }
                else {
                    if((int*)((int)(int*)((int)ptr2 >>> 2) & 0x1)) {
                        int v8 = *(int*)ptr0;
                        --ptr1;
                        ptr0 += 4;
                        *(int*)ptr2 = v8;
                        ptr2 += 4;
                    }
                    if((int*)((int)(int*)((int)ptr2 >>> 3) & 0x1)) {
                        v1 = (__SyntheticTypeUnknownU)*(long long*)ptr0 | ((__SyntheticTypeUnknownU)(unsigned long long)(v1 >>> 0x40X) << 64);
                        ptr1 -= 2;
                        ptr0 += 8;
                        *(long long*)ptr2 = (unsigned long long)v1;
                        ptr2 += 8;
                    }
                    if(!(int*)((int)ptr0 & 0x7)) {
                        v1 = *(__SyntheticTypeUnknownP128)(ptr0 - 8);
                        int* ptr17 = (int*)(ptr0 - 8);
                        do {
                            __SyntheticTypeUnknown v9 = *(__SyntheticTypeUnknownP128)(ptr17 + 4);
                            ptr1 -= 12;
                            __SyntheticTypeUnknown v10 = *(__SyntheticTypeUnknownP128)(ptr17 + 8);
                            __SyntheticTypeUnknown v11 = *(__SyntheticTypeUnknownP128)(ptr17 + 12);
                            ptr17 += 12;
                            v2 = palignr(v9, v1, 8);
                            *(__SyntheticTypeUnknownP128)ptr2 = v2;
                            v3 = palignr(v10, v9, 8);
                            *(__SyntheticTypeUnknownP128)(ptr2 + 16) = v3;
                            v1 = v11;
                            v4 = palignr(v11, v10, 8);
                            *(__SyntheticTypeUnknownP128)(ptr2 + 32) = v4;
                            ptr2 += 48;
                        }
                        while((int)ptr1 >= 48);
                        v0 = (__SyntheticTypeUnknownP128)(ptr17 + 2);
                    }
                    else if((int*)((int)(int*)((int)ptr0 >>> 3) & 0x1)) {
                        v1 = *(__SyntheticTypeUnknownP128)(ptr0 - 12);
                        int* ptr18 = (int*)(ptr0 - 12);
                        do {
                            __SyntheticTypeUnknown v12 = *(__SyntheticTypeUnknownP128)(ptr18 + 4);
                            ptr1 -= 12;
                            __SyntheticTypeUnknown v13 = *(__SyntheticTypeUnknownP128)(ptr18 + 8);
                            __SyntheticTypeUnknown v14 = *(__SyntheticTypeUnknownP128)(ptr18 + 12);
                            ptr18 += 12;
                            __SyntheticTypeUnknown v2 = palignr(v12, v1, 12);
                            *(__SyntheticTypeUnknownP128)ptr2 = v2;
                            __SyntheticTypeUnknown v3 = palignr(v13, v12, 12);
                            *(__SyntheticTypeUnknownP128)(ptr2 + 16) = v3;
                            v1 = v14;
                            __SyntheticTypeUnknown v4 = palignr(v14, v13, 12);
                            *(__SyntheticTypeUnknownP128)(ptr2 + 32) = v4;
                            ptr2 += 48;
                        }
                        while((int)ptr1 >= 48);
                        v0 = (__SyntheticTypeUnknownP128)(ptr18 + 3);
                    }
                    else {
                        v1 = *(__SyntheticTypeUnknownP128)(ptr0 - 4);
                        int* ptr19 = (int*)(ptr0 - 4);
                        do {
                            __SyntheticTypeUnknown v15 = *(__SyntheticTypeUnknownP128)(ptr19 + 4);
                            ptr1 -= 12;
                            __SyntheticTypeUnknown v16 = *(__SyntheticTypeUnknownP128)(ptr19 + 8);
                            __SyntheticTypeUnknown v17 = *(__SyntheticTypeUnknownP128)(ptr19 + 12);
                            ptr19 += 12;
                            v2 = palignr(v15, v1, 4);
                            *(__SyntheticTypeUnknownP128)ptr2 = v2;
                            v3 = palignr(v16, v15, 4);
                            *(__SyntheticTypeUnknownP128)(ptr2 + 16) = v3;
                            v1 = v17;
                            v4 = palignr(v17, v16, 4);
                            *(__SyntheticTypeUnknownP128)(ptr2 + 32) = v4;
                            ptr2 += 48;
                        }
                        while((int)ptr1 >= 48);
                        v0 = (__SyntheticTypeUnknownP128)(ptr19 + 1);
                    }
                    while((int)ptr1 >= 16) {
                        v1 = *v0;
                        ptr1 -= 4;
                        ++v0;
                        *(__SyntheticTypeUnknownP128)ptr2 = v1;
                        ptr2 += 16;
                    }
                    if((int*)((int)(int*)((int)ptr1 >>> 2) & 0x1)) {
                        int v18 = *(int*)v0;
                        --ptr1;
                        v0 = (__SyntheticTypeUnknownP128)((char*)v0 + 4);
                        *(int*)ptr2 = v18;
                        ptr2 += 4;
                    }
                    if((int*)((int)(int*)((int)ptr1 >>> 3) & 0x1)) {
                        ptr1 -= 2;
                        *(long long*)ptr2 = *(long long*)v0;
                    }
                    switch(ptr1) {
                        case 0: {
                            return param0;
                        }
                        case 1: {
                            *ptr2 = *ptr0;
                            return param0;
                        }
                        case 2: {
                            *ptr2 = *ptr0;
                            *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                            return param0;
                        }
                        case 3: {
                            *ptr2 = *ptr0;
                            *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                            *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                            return param0;
                        }
                        default: {
                            throw 0;
                        }
                    }
                loc_405E51:
                    if(!(int*)((int)ptr2 & 0x3)) {
                    loc_405E53:
                        ptr1 = (int*)((int)ptr1 >>> 2);
                        ptr3 = (int*)((int)ptr3 & 0x3);
                        if((unsigned int)ptr1 < 8) {
                        loc_405E88:
                            switch(ptr1) {
                                case 0: {
                                loc_405F6F:
                                    switch(ptr3) {
                                        case 0: {
                                            return param0;
                                        }
                                        case 1: {
                                            *ptr2 = *ptr0;
                                            return param0;
                                        }
                                        case 2: {
                                            *ptr2 = *ptr0;
                                            *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                            return param0;
                                        }
                                        case 3: {
                                            *ptr2 = *ptr0;
                                            *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                            *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                            return param0;
                                        }
                                        default: {
                                            throw 0;
                                            return param0;
                                        }
                                    }
                                }
                                case 1: {
                                loc_405F60:
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 1) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 1);
                                    ptr0 = (unsigned char*)((int)(unsigned char*)((int)ptr1 * 4) + (int)ptr0);
                                    ptr2 = (unsigned char*)((int)(unsigned char*)((int)ptr1 * 4) + (int)ptr2);
                                    break;
                                }
                                case 2: {
                                loc_405F58:
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 2);
                                    goto loc_405F60;
                                }
                                case 3: {
                                loc_405F50:
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 3);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 2);
                                    goto loc_405F60;
                                }
                                case 4: {
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 4);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 3);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 2);
                                    goto loc_405F60;
                                }
                                case 5: {
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 5);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 4);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 3);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 2);
                                    goto loc_405F60;
                                }
                                case 6: {
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 6);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 5);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 4);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 3);
                                    goto loc_405F58;
                                }
                                case 7: {
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 7) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 7);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 6);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 5);
                                    *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr0) - 4);
                                    goto loc_405F50;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                            goto loc_405F6F;
                        }
                        else {
                            while(ptr1 != 0) {
                                *(int*)ptr2 = *(int*)ptr0;
                                ptr0 += 4;
                                ptr2 += 4;
                                ptr1 = (int*)((char*)ptr1 - 1);
                            }
                            switch(ptr3) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *ptr2 = *ptr0;
                                    return param0;
                                }
                                case 2: {
                                    *ptr2 = *ptr0;
                                    *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                    return param0;
                                }
                                case 3: {
                                    *ptr2 = *ptr0;
                                    *(char*)(ptr2 + 1) = *(char*)(ptr0 + 1);
                                    *(char*)(ptr2 + 2) = *(char*)(ptr0 + 2);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        }
                    }
                    goto loc_405E6F;
                }
            }
        }
        goto loc_405E51;
    }
    else {
        while(ptr1 != 0) {
            *ptr2 = *ptr0;
            ++ptr0;
            ++ptr2;
            ptr1 = (int*)((char*)ptr1 - 1);
        }
    }
    return param0;
}

unsigned int unk_lib_sub3(unsigned int param0) {
    gvar_4192D0 = param0;
    return param0;
}

unsigned int unk_lib_sub4(unsigned int param0) {
    gvar_419308 = param0;
    return param0;
}

int unk_lib_sub5() {
    int result;
    for(int* i = (int*)&gvar_4175B0; (unsigned int)i < &gvar_4175B0; ++i) {
        result = *i;
        if(result) {
            result = result();
        }
    }
    return result;
}

int unk_lib_sub6() {
    int result;
    for(int* i = (int*)&gvar_4175B8; (unsigned int)i < &gvar_4175B8; ++i) {
        result = *i;
        if(result) {
            result = result();
        }
    }
    return result;
}

unsigned int unk_lib_sub7(unsigned int param0) {
    gvar_419EF4 = param0;
    return param0;
}

unsigned int unk_lib_sub8(unsigned int param0) {
    gvar_419F0C = param0;
    return param0;
}

HANDLE unk_lib_sub9() {
    HANDLE hObject = gvar_418E70;
    if(hObject != -1 && hObject != -2) {
        hObject = (HANDLE)CloseHandle(hObject);
    }
    return hObject;
}

int vscan_fn(int param0, char* param1, int param2, int param3, int param4) {
    int result;
    size_t v0;
    char* ptr0 = NULL;
    char* _Str = param1;
    int* ptr1 = &v0;
    for(int i = 7; i != 0; --i) {
        *ptr1 = 0;
        ++ptr1;
    }
    if(!_Str || param2 == 0) {
        int* ptr2 = _errno();
        ptr2[0] = 22;
        _invalid_parameter_noinfo();
        result = -1;
    }
    else {
        size_t v1 = strlen(_Str);
        int v2 = 73;
        v0 = v1 > 0x7fffffff ? 0x7fffffff: v1;
        result = param0((int)&ptr0, param2, param3, param4);
    }
    return result;
}

errno_t wcscat_s(wchar_t* _Destination, rsize_t _SizeInWords, wchar_t* _Source) {
    void* ptr0;
    int* ptr1;
    errno_t result;
    wchar_t* ptr2 = _Destination;
    if(ptr2) {
        rsize_t v0 = _SizeInWords;
        if(v0) {
            wchar_t* ptr3 = _Source;
            if(ptr3) {
                wchar_t* ptr4 = ptr2;
                while(ptr4[0]) {
                    ++ptr4;
                    --v0;
                    if(!v0) {
                        break;
                    }
                }
                if(v0) {
                    int* ptr5 = (int*)((int)ptr4 - (int)ptr3);
                    do {
                        wchar_t v1 = ptr3[0];
                        *(unsigned short*)((int)ptr3 + (int)ptr5) = ptr3[0];
                        ++ptr3;
                        if(!v1) {
                            break;
                        }
                        else {
                            --v0;
                        }
                    }
                    while(v0);
                    result = 0;
                    if(!v0) {
                        ptr2[0] = 0;
                        ptr1 = _errno();
                        ptr0 = (void*)0x22;
                        ptr1[0] = (int)ptr0;
                        _invalid_parameter_noinfo();
                        result = (errno_t)ptr0;
                    }
                    return result;
                }
            }
            ptr2[0] = 0;
        }
    }
    ptr1 = _errno();
    ptr0 = (void*)0x16;
    ptr1[0] = (int)ptr0;
    _invalid_parameter_noinfo();
    return (errno_t)ptr0;
}

// Stale decompilation - Refresh this view to re-decompile this code
errno_t wcscpy_s(wchar_t* _Destination, rsize_t _SizeInWords, wchar_t* _Source) {
    void* ptr0;
    int* ptr1;
    errno_t result;
    wchar_t* ptr2 = _Destination;
    if(ptr2) {
        rsize_t v0 = _SizeInWords;
        if(!v0) {
            ptr1 = _errno();
            ptr0 = (void*)0x16;
            ptr1[0] = (int)ptr0;
            _invalid_parameter_noinfo();
            return (errno_t)ptr0;
        }
        wchar_t* ptr3 = _Source;
        if(!ptr3) {
            ptr2[0] = 0;
            ptr1 = _errno();
            ptr0 = (void*)0x16;
            ptr1[0] = (int)ptr0;
            _invalid_parameter_noinfo();
            return (errno_t)ptr0;
        }
        int* ptr4 = (int*)((int)ptr2 - (int)ptr3);
        do {
            wchar_t v1 = ptr3[0];
            *(unsigned short*)((int)ptr3 + (int)ptr4) = ptr3[0];
            ++ptr3;
            if(!v1) {
                break;
            }
            else {
                --v0;
            }
        }
        while(v0);
        result = 0;
        if(!v0) {
            ptr2[0] = 0;
            ptr1 = _errno();
            ptr0 = (void*)0x22;
            ptr1[0] = (int)ptr0;
            _invalid_parameter_noinfo();
            return (errno_t)ptr0;
        }
    }
    else {
        ptr1 = _errno();
        ptr0 = (void*)0x16;
        ptr1[0] = (int)ptr0;
        _invalid_parameter_noinfo();
        result = (errno_t)ptr0;
    }
    return result;
}

size_t wcslen(wchar_t* _String) {
    wchar_t v0;
    wchar_t* ptr0 = _String;
    do {
        v0 = ptr0[0];
        ++ptr0;
    }
    while(v0);
    return (size_t)((char*)((int)(int*)((int)ptr0 - (int)_String) >> 1) - 1);
}

errno_t wcsncpy_s(wchar_t* _Destination, rsize_t _SizeInWords, wchar_t* _Source, rsize_t _MaxCount) {
    int* ptr0;
    errno_t result;
    wchar_t v0;
    void* ptr1;
    void* ptr2;
    rsize_t v1 = _MaxCount;
    wchar_t* ptr3 = _Destination;
    if(v1) {
        if(ptr3) {
        loc_40A6CC:
            if(_SizeInWords) {
                if(!v1) {
                    ptr3[0] = 0;
                }
                else {
                    wchar_t* ptr4 = _Source;
                    if(!ptr4) {
                        ptr3[0] = 0;
                        goto loc_40A6E5;
                    }
                    else {
                        ptr1 = ptr2;
                        wchar_t* ptr5 = ptr3;
                        rsize_t v2 = _SizeInWords;
                        if(v1 == -1) {
                            int* ptr6 = (int*)((int)ptr5 - (int)ptr4);
                            do {
                                v0 = ptr4[0];
                                *(unsigned short*)((int)ptr6 + (int)ptr4) = ptr4[0];
                                ++ptr4;
                                if(!v0) {
                                    break;
                                }
                                else {
                                    --v2;
                                }
                            }
                            while(v2);
                        }
                        else {
                            int* ptr7 = (int*)((int)ptr4 - (int)ptr3);
                            do {
                                v0 = *(unsigned short*)((int)ptr5 + (int)ptr7);
                                ptr5[0] = *(unsigned short*)((int)ptr5 + (int)ptr7);
                                ++ptr5;
                                if(!v0) {
                                    break;
                                }
                                else {
                                    --v2;
                                    if(!v2) {
                                        break;
                                    }
                                    else {
                                        --v1;
                                    }
                                }
                            }
                            while(v1);
                            if(!v1) {
                                ptr5[0] = 0;
                            }
                        }
                        if(!v2) {
                            if(v1 == -1) {
                                ptr1 = (void*)0x50;
                                ptr3[_SizeInWords - 1] = 0;
                                return (errno_t)ptr1;
                            }
                            ptr3[0] = 0;
                            ptr0 = _errno();
                            ptr1 = (void*)0x22;
                            goto loc_40A6ED;
                        }
                    }
                }
                return 0;
            }
        }
    loc_40A6E5:
        ptr0 = _errno();
        ptr1 = (void*)0x16;
    loc_40A6ED:
        ptr0[0] = (int)ptr1;
        _invalid_parameter_noinfo();
        result = (errno_t)ptr1;
    }
    else if(ptr3) {
        goto loc_40A6CC;
    }
    else if(_SizeInWords != 0) {
        goto loc_40A6E5;
    }
    else {
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int x_ismbbtype_l(int param0, int param1, int param2, int param3) {
    int result;
    int v0;
    int v1;
    char v2;
    int v3;
    /*BAD_CALL!*/ _LocaleUpdate::_LocaleUpdate((int)&v0, param0);
    if(!((unsigned char)param3 & *(char*)((unsigned int)(unsigned char)param1 + v1 + 25))) {
        result = 0;
        if((param2 != 0 ? (unsigned int)*(short*)((unsigned int)(unsigned char)param1 * 2 + *(int*)(v0 + 144)) & param2: 0)) {
            goto loc_40AA59;
        }
    }
    else {
    loc_40AA59:
        result = 1;
    }
    if(v2) {
        *(int*)(v3 + 112) = *(int*)(v3 + 112) & 0xfffffffd;
    }
    return result;
}


// Stale decompilation - Refresh this view to re-decompile this code
void sub_40F28C() {
}

wchar_t* CPtoLocaleName(int param0) {
    if(param0 == 932) {
        return "ja-JP";
    }
    else if(!(param0 - 936)) {
        return "zh-CN";
    }
    else if((param0 - 949)) {
        return param0 - 950 ? NULL: "zh-TW";
    }
    return "ko-KR";
}

unsigned int GetTableIndexFromLocaleName(unsigned int param0) {
    int v0;
    unsigned short v1;
    int v2 = v0;
    unsigned int v3 = 0;
    unsigned int v4 = 227;
    do {
        unsigned int v5 = v4 + v3;
        *(int*)&v1 = 85;
        unsigned int v6 = __wcsnicmp_ascii(param0, *(short**)(((v5 - (v5 >= 0x80000000 ? 0xffffffff: 0)) >> 1) * 8 + (int)&gvar_413368), 85);
        if(!v6) {
            return *(unsigned int*)(((v5 - (v5 >= 0x80000000 ? 0xffffffff: 0)) >> 1) * 8 + (int)&gvar_41336C);
        }
        else if(v6 >= 0x80000000) {
            v4 = (unsigned int)(((v5 - (v5 >= 0x80000000 ? 0xffffffff: 0)) >> 1) - 1);
        }
        else {
            v3 = (unsigned int)(((v5 - (v5 >= 0x80000000 ? 0xffffffff: 0)) >> 1) + 1);
        }
    }
    while((int)v4 >= (int)v3);
    return 0xffffffff;
}

int _EH4_CallFilterFunc(int param0, int param1) {
    return param0();
}

int _EH4_GlobalUnwind2(PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord) {
    int v0;
    int result;
    int v1 = v0;
    →KERNEL32.dll!RtlUnwind(TargetFrame, (PVOID)&loc_4048C6, ExceptionRecord, NULL);
    return result;
}

int _EH4_LocalUnwind(int param0, int* param1, int param2, int* param3) {
    return _local_unwind4(param3, param0, param1);
}

int _EH4_TransferToHandler(int param0, int param1) {
    int v0 = param1;
    int v1 = param0;
    int v2 = param0;
    unsigned int v3 = _NLG_Notify(param0, 1);
    int v4 = 0;
    int v5 = 0;
    int v6 = 0;
    int v7 = 0;
    int v8 = 0;
    char v9 = 1;
    char v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 0;
    jump v1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int FF_MSGBANNER() {
    int result;
    int v0 = set_error_mode(3);
    if(v0 != 1) {
        result = set_error_mode(3);
        if(!result && gvar_419308 == 1) {
            NMSG_WRITE(252);
            return NMSG_WRITE(0xFF);
        }
    }
    else {
        NMSG_WRITE(252);
        result = NMSG_WRITE(0xFF);
    }
    return result;
}

int _FindPESection(int param0, unsigned int param1) {
    int v0;
    unsigned int v1 = 0;
    int v2 = v0;
    unsigned int v3 = (unsigned int)(*(int*)(param0 + 60) + param0);
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

int _IsNonwritableInCurrentImage(unsigned int param0) {
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
    int v8 = _ValidateImageBase((unsigned short*)&MZHeader);
    if(v8) {
        v8 = _FindPESection(&MZHeader, param0 - &MZHeader);
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

unsigned int* _LocaleUpdate::_LocaleUpdate(unsigned int* param0, int* param1) {
    int* ptr0 = param1;
    *(char*)(param0 + 3) = 0;
    if(!ptr0) {
        int v0 = _getptd();
        *(int*)(param0 + 2) = v0;
        unsigned int v1 = *(unsigned int*)(v0 + 108);
        *param0 = *(unsigned int*)(v0 + 108);
        *(int*)(param0 + 1) = *(int*)(v0 + 104);
        if(gvar_418BDC != v1 && !(*(int*)(v0 + 112) & gvar_418C98)) {
            int v2 = __updatetlocinfo();
            *param0 = v2;
        }
        if(*(param0 + 1) != gvar_418974 && !(*(int*)(*(int*)(param0 + 2) + 112) & gvar_418C98)) {
            int v3 = __updatetmbcinfo();
            *(int*)(param0 + 1) = v3;
        }
        ptr0 = *(param0 + 2);
        int v4 = *(ptr0 + 28);
        if(!((unsigned char)v4 & 0x2)) {
            *(ptr0 + 28) = v4 | 0x2;
            *(char*)(param0 + 3) = 1;
        }
    }
    else {
        *param0 = *ptr0;
        *(int*)(param0 + 1) = *(ptr0 + 1);
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

// Stale decompilation - Refresh this view to re-decompile this code
int NMSG_WRITE(rsize_t param0) {
    size_t v0;
    char v1;
    int result;
    size_t v2;
    void* ptr0;
    int v3;
    LPOVERLAPPED v4;
    int v5;
    char v6;
    size_t v7 = &v2;
    size_t v8 = &v2;
    char v9 = &v0 == 0x200;
    char v10 = (int)&v1 < 0;
    char v11 = __parity__((unsigned char)&v0);
    char v12 = &v2 < 508;
    char v13 = (int)(int*)((int)(int*)(&v2 ^ (int)&v1) & (int)(int*)(&v2 ^ 0x1fc)) < 0;
    unsigned int v14 = gvar_4183F0;
    int* ptr1 = (int*)(v14 ^ &v2);
    char v15 = ptr1 ? 0: 1;
    char v16 = (int)ptr1 < 0;
    char v17 = __parity__((unsigned char)ptr1);
    char v18 = 0;
    char v19 = 0;
    int* ptr2 = ptr1;
    rsize_t _SizeInWords = param0;
    wchar_t* ptr3 = (wchar_t*)GET_RTERRMSG((int)_SizeInWords);
    wchar_t* _Source = ptr3;
    int v20 = v3;
    char v21 = _Source ? 0: 1;
    char v22 = (int)_Source < 0;
    char v23 = __parity__((unsigned char)_Source);
    char v24 = 0;
    char v25 = 0;
    if(!v21) {
        v3 = v5;
        int v26 = set_error_mode(3);
        LPOVERLAPPED v27 = v4;
        char v28 = v26 == 1;
        char v29 = v26 < 1;
        char v30 = __parity__((unsigned char)v26 - 1);
        char v31 = (unsigned int)v26 < 1;
        char v32 = (((v26 - 1) ^ v26) & (v26 ^ 0x1)) < 0;
        if(!v28) {
            int v33 = set_error_mode(3);
            LPOVERLAPPED v34 = v4;
            char v35 = v33 ? 0: 1;
            char v36 = v33 < 0;
            char v37 = __parity__((unsigned char)v33);
            char v38 = 0;
            char v39 = 0;
            if(v35) {
                char v40 = gvar_419308 == 1;
                char v41 = (int)gvar_419308 < 1;
                char v42 = __parity__((unsigned char)gvar_419308 - 1);
                char v43 = gvar_419308 < 1;
                char v44 = (((gvar_419308 - 1) ^ gvar_419308) & (gvar_419308 ^ 0x1)) < 0;
                if(v40) {
                    goto loc_407167;
                }
            }
            char v45 = _SizeInWords == 252;
            char v46 = (int)_SizeInWords < 252;
            char v47 = __parity__((unsigned char)_SizeInWords - 252);
            char v48 = _SizeInWords < 252;
            char v49 = (((_SizeInWords - 252) ^ _SizeInWords) & (_SizeInWords ^ 0xfc)) < 0;
            char v50 = (((_SizeInWords - 252) ^ (_SizeInWords ^ 0xfc)) >>> 4) & 0x1;
            if(!v45) {
                errno_t v51 = wcscpy_s((wchar_t*)0x419310, 788, "Runtime Error!\n\nProgram: ");
                v5 = 0;
                char v52 = v51 ? 0: 1;
                char v53 = v51 < 0;
                char v54 = __parity__((unsigned char)v51);
                char v55 = 0;
                char v56 = 0;
                if(v52) {
                    gvar_41954A = (unsigned short)v51;
                    DWORD v57 = GetModuleFileNameW(NULL, (LPWSTR)0x419342, 260);
                    _SizeInWords = 763;
                    char v58 = v57 ? 0: 1;
                    char v59 = v57 >= 0x80000000;
                    char v60 = __parity__((unsigned char)v57);
                    char v61 = 0;
                    char v62 = 0;
                    if(v58) {
                        errno_t v63 = wcscpy_s((wchar_t*)0x419342, 763, "<program name unknown>");
                        v52 = v63 ? 0: 1;
                        v53 = v63 < 0;
                        v54 = __parity__((unsigned char)v63);
                        v55 = 0;
                        v56 = 0;
                        if(!v52) {
                            goto loc_4071D2;
                        }
                    }
                    size_t v64 = wcslen((wchar_t*)0x419342);
                    v8 = v64;
                    unsigned int v65 = (unsigned int)(v64 + 1);
                    char v66 = v65 ? 0: 1;
                    char v67 = v65 >= 0x80000000;
                    char v68 = __parity__((unsigned char)v65);
                    char v69 = (((v8 ^ 0x1) ^ v65) >>> 4) & 0x1;
                    char v70 = (int)((v65 ^ v8) & ~(v8 ^ 0x1)) < 0;
                    LPOVERLAPPED v71 = v4;
                    char v72 = v65 == 60;
                    char v73 = (int)v65 < 60;
                    char v74 = __parity__((unsigned char)v65 - 60);
                    char v75 = v65 < 60;
                    char v76 = (((v65 - 60) ^ v65) & (v65 ^ 0x3c)) < 0;
                    v50 = (((v65 - 60) ^ (v65 ^ 0x3c)) >>> 4) & 0x1;
                    if(!v75 && !v72) {
                        size_t v77 = wcslen((wchar_t*)0x419342);
                        wchar_t* _Destination = (wchar_t*)(v77 * 2 + &gvar_4192CC);
                        wchar_t* ptr4 = (wchar_t*)(v77 * 2 + &gvar_4192CC);
                        wchar_t* ptr5 = (wchar_t*)(v77 * 2 + &gvar_4192CC);
                        int* ptr6 = (int*)(ptr4 - 2148769);
                        char v78 = ptr6 ? 0: 1;
                        char v79 = (int)ptr6 < 0;
                        char v80 = __parity__((unsigned char)ptr6);
                        char v81 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr5 ^ 0x419342) ^ (int)ptr6) >>> 4) & 0x1);
                        char v82 = (unsigned int)ptr5 < 0x419342;
                        char v83 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x419342)) < 0;
                        int* ptr7 = ptr6;
                        int* ptr8 = (int*)((int)ptr6 >> 1);
                        char v84 = (int*)((int)ptr7 & 0x1);
                        char v85 = 0;
                        char v86 = ptr8 ? 0: 1;
                        char v87 = (int)ptr8 < 0;
                        char v88 = __parity__((unsigned char)ptr8);
                        v8 = 763;
                        _SizeInWords = (rsize_t)(763 - (int)ptr8);
                        char v89 = _SizeInWords ? 0: 1;
                        char v90 = _SizeInWords >= 0x80000000;
                        char v91 = __parity__((unsigned char)_SizeInWords);
                        v50 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr8 ^ 0x2fb) ^ _SizeInWords) >>> 4) & 0x1);
                        char v92 = (unsigned int)ptr8 > 763;
                        char v93 = (int)(int*)((int)(int*)((int)ptr8 ^ 0x2fb) & (_SizeInWords ^ 0x2fb)) < 0;
                        errno_t v94 = wcsncpy_s(_Destination, _SizeInWords, (wchar_t*)&gvar_411B9C, 3);
                        v52 = v94 ? 0: 1;
                        v53 = v94 < 0;
                        v54 = __parity__((unsigned char)v94);
                        v55 = 0;
                        v56 = 0;
                        if(!v52) {
                            goto loc_4071D2;
                        }
                    }
                    _SizeInWords = 4297488;
                    errno_t v95 = wcscat_s((wchar_t*)0x419310, 788, (wchar_t*)&gvar_411BA4);
                    v52 = v95 ? 0: 1;
                    v53 = v95 < 0;
                    v54 = __parity__((unsigned char)v95);
                    v55 = 0;
                    v56 = 0;
                    if(v52) {
                        errno_t v96 = wcscat_s((wchar_t*)0x419310, 788, _Source);
                        v52 = v96 ? 0: 1;
                        v53 = v96 < 0;
                        v54 = __parity__((unsigned char)v96);
                        v55 = 0;
                        v56 = 0;
                        if(v52) {
                            _crtMessageBoxW(4297488, "Microsoft Visual C++ Runtime Library", 0x12010);
                            _security_check_cookie((uintptr_t)(&v2 ^ (int)ptr2));
                            return result;
                        }
                    }
                }
            loc_4071D2:
                int* ptr9 = &ptr0;
                /*NO_RETURN*/ invoke_watson(NULL, NULL, NULL, 0, 0);
            }
        }
        else {
        loc_407167:
            HANDLE v97 = GetStdHandle(0xfffffff4);
            HANDLE hFile = v97;
            if(hFile && hFile != -1) {
                unsigned int v98 = 0;
                do {
                    v97 = (unsigned int)*(char*)&_Source[v98] | ((unsigned int)(int*)((int)(int*)((int)v97 >>> 8) & 0xffffff) << 8);
                    *(char*)(v98 + (int)&v6) = *(char*)&_Source[v98];
                    if(_Source[v98] == 0) {
                        break;
                    }
                    else {
                        ++v98;
                    }
                }
                while(v98 < 500);
                char v99 = 0;
                size_t v100 = strlen(&v6);
                WriteFile(hFile, &v6, (DWORD)v100, (LPDWORD)&v1, NULL);
            }
        }
    }
    _security_check_cookie((uintptr_t)(&v2 ^ (int)ptr2));
    return result;
}

int _ValidateImageBase(unsigned short* param0) {
    if(*param0 != 23117) {
        return 0;
    }
    unsigned int* ptr0 = (unsigned int*)(*(int*)(param0 + 30) + (int)param0);
    int result = 0;
    if(*ptr0 == 0x4550) {
        result = *(short*)(ptr0 + 6) != 267 ? 0: 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _XcptFilter(unsigned int param0, int param1) {
    int v0;
    int result = _getptd_noexit();
    int v1 = result;
    if(v1) {
        unsigned int* ptr0 = *(unsigned int*)(v1 + 92);
        unsigned int* ptr1 = *(unsigned int*)(v1 + 92);
        unsigned int v2 = param0;
        while(*ptr1 != v2) {
            ptr1 += 3;
            if((unsigned int)(int*)(ptr0 + 36) <= (unsigned int)ptr1) {
                break;
            }
        }
        if((unsigned int)(int*)(ptr0 + 36) > (unsigned int)ptr1 && *ptr1 == v2 && ptr1) {
            ptr0 = *(ptr1 + 2);
            if(!ptr0) {
                return 0;
            }
            else if(ptr0 == 1) {
                result = -1;
            }
            else if(ptr0 == 5) {
                *(int*)(ptr1 + 2) = 0;
                result = 1;
            }
            else {
                int v3 = v0;
                int v4 = *(int*)(v1 + 96);
                *(int*)(v1 + 96) = param1;
                if(*(int*)(ptr1 + 1) == 8) {
                    unsigned int* ptr2 = (unsigned int*)0x24;
                    unsigned int* ptr3 = (unsigned int*)0x24;
                    do {
                        *((int*)(*(int*)(v1 + 92) + (int)ptr3) + 2) = 0;
                        ptr3 += 3;
                    }
                    while((int)ptr3 < 144);
                    int v5 = *(int*)(v1 + 100);
                    switch(*ptr1) {
                        case -1073741683: {
                            *(int*)(v1 + 100) = 130;
                            break;
                        }
                        case -1073741682: {
                            *(int*)(v1 + 100) = 131;
                            break;
                        }
                        case -1073741681: {
                            *(int*)(v1 + 100) = 134;
                            break;
                        }
                        case -1073741680: {
                            *(int*)(v1 + 100) = 129;
                            break;
                        }
                        case -1073741679: {
                            *(int*)(v1 + 100) = 132;
                            break;
                        }
                        case -1073741678: {
                            *(int*)(v1 + 100) = 138;
                            break;
                        }
                        case -1073741677: {
                            *(int*)(v1 + 100) = 133;
                            break;
                        }
                        case -1073741132: {
                            *(int*)(v1 + 100) = 142;
                            break;
                        }
                        case -1073741131: {
                            *(int*)(v1 + 100) = 141;
                            break;
                        }
                    }
                    ptr0(8, *(int*)(v1 + 100));
                    *(int*)(v1 + 100) = v5;
                loc_4075BB:
                    *(int*)(v1 + 96) = v4;
                    result = -1;
                }
                else {
                    *(int*)(ptr1 + 2) = 0;
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

unsigned int __ascii_strnicmp(char* param0, char* param1, unsigned int param2) {
    char v0;
    int v1;
    int v2;
    int v3 = v2;
    unsigned int result = param2;
    if(result) {
        char* ptr0 = param0;
        char* ptr1 = param1;
        int v4 = (unsigned int)(unsigned char)v4 | ((unsigned int)32 << 8) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
        unsigned int v5 = result;
        do {
            int v6 = (unsigned int)(unsigned char)v1 | ((unsigned int)*ptr0 << 8) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
            v1 = (unsigned int)*ptr1 | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
            if(!(unsigned char)(v6 >>> 8) || !*ptr1) {
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
                    goto loc_40C481;
                }
                else {
                    --v5;
                }
            }
        }
        while(v5);
        result = 0;
        v0 = (unsigned char)(v1 >>> 8) < (unsigned char)v1;
        if((unsigned char)(v1 >>> 8) != (unsigned char)v1) {
        loc_40C481:
            result = 0xffffffff;
            if(!v0) {
                result = 1;
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int __check_float_string(unsigned int param0, unsigned int* param1, unsigned int* param2, unsigned char* param3, int* param4) {
    int result;
    unsigned int* ptr0 = param1;
    unsigned int v0 = *ptr0;
    if(v0 == param0) {
        unsigned int* ptr1 = param2;
        int v1 = 2;
        int v2 = (int)v0;
        unsigned int v3 = *ptr1;
        if(v3 == param3) {
            v0 = sub_408F5B(v2, 2);
            *ptr1 = v0;
            if(!v0) {
                goto loc_402DFC;
            }
            else {
                *param4 = 1;
                v1 = *ptr0;
                v2 = (int)param3;
                sub_405C40(*ptr1, param3, (int*)v1);
                *ptr0 = *ptr0 * 2;
                return 1;
            }
        }
        else {
            v0 = (unsigned int)_recalloc_crt((int)v3, v2, 2);
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
    int v1;
    int cchWideChar = v1;
    int v2 = v0;
    UINT CodePage = 0;
    if(lpMultiByteStr1 != 0) {
        unsigned int* ptr0 = param1;
        if(!ptr0) {
            int* ptr1 = errno();
            ptr1[0] = 22;
            invalid_parameter_noinfo();
            return 22;
        }
        BOOL v3 = _crtIsPackagedApp(v1);
        if(!v3) {
            v3 = AreFileApisANSI();
            if(!v3) {
                CodePage = 1;
            }
        }
        void* ptr2 = NULL;
        LPWSTR lpWideCharStr = NULL;
        int cbMultiByte = -1;
        LPCCH lpMultiByteStr = lpMultiByteStr1;
        *ptr0 = 0;
        int v4 = MultiByteToWideChar(CodePage, 0, lpMultiByteStr, cbMultiByte, lpWideCharStr, (int)ptr2);
        cchWideChar = v4;
        if(!v4) {
            DWORD v5 = GetLastError();
            _dosmaperr((unsigned int)v5);
            goto loc_406C72;
        }
        else {
            int* ptr3 = (int*)malloc_crt(v4 * 2);
            *ptr0 = ptr3;
            if(ptr3) {
                int v6 = MultiByteToWideChar(CodePage, 0, lpMultiByteStr1, -1, (LPWSTR)ptr3, cchWideChar);
                if(!v6) {
                    DWORD v7 = GetLastError();
                    _dosmaperr((unsigned int)v7);
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
        int* ptr1 = errno();
        ptr1[0] = 22;
        invalid_parameter_noinfo();
        result = 22;
    }
    return result;
}

int __createFile(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, int param5, int param6) {
    int result;
    int v0;
    FARPROC v1;
    int v2 = _crtIsPackagedApp((int)v1);
    if(v2) {
        HMODULE hModule = GetModuleHandleW("kernel32.dll");
        v1 = GetProcAddress(hModule, "CreateFile2");
        if(!v1) {
            result = -1;
        }
        else {
            int v3 = 0;
            int v4 = 0;
            int v5 = param6;
            LPSECURITY_ATTRIBUTES v6 = lpSecurityAttributes;
            result = v1(lpFileName, dwDesiredAccess, dwShareMode, dwCreationDisposition, &v0, 24, param5);
        }
    }
    else {
        result = (int)CreateFileW(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, (DWORD)(param5 | param6), NULL);
    }
    return result;
}

BOOL _crtCorExitProcess(int param0) {
    HMODULE hModule;
    HMODULE v0 = hModule;
    BOOL result = GetModuleHandleExW(0, "mscoree.dll", &v0);
    if(result) {
        result = (BOOL)GetProcAddress(hModule, "CorExitProcess");
        if(result) {
            result = result(param0);
        }
    }
    return result;
}

unsigned int __crtDownlevelLocaleNameToLCID(unsigned int param0) {
    if(param0) {
        unsigned int v0 = GetTableIndexFromLocaleName(param0);
        return v0 < 0x80000000 ? *(unsigned int*)(v0 * 8 + (int)&gvar_412C48): 0;
    }
    return 0;
}

DWORD __crtFlsAlloc(int param0) {
    DWORD v0;
    int v1;
    void* ptr0;
    int v2;
    int v3 = v2;
    int* ptr1 = &v3;
    unsigned int v4 = gvar_419F60;
    unsigned int v5 = gvar_4183F0 ^ v4;
    char v6 = v5 ? 0: 1;
    char v7 = v5 >= 0x80000000;
    char v8 = __parity__((unsigned char)v5);
    char v9 = 0;
    char v10 = 0;
    if(!v6) {
        v0 = (DWORD)v5(param0);
        int v11 = v1;
        int v12 = v3;
        int* ptr2 = &ptr0;
        jump v12;
    }
    return TlsAlloc();
}

BOOL __crtFlsFree(DWORD param0) {
    BOOL v0;
    DWORD v1;
    DWORD v2;
    DWORD v3 = v2;
    int* ptr0 = &v3;
    unsigned int v4 = gvar_419F64;
    unsigned int v5 = gvar_4183F0 ^ v4;
    char v6 = v5 ? 0: 1;
    char v7 = v5 >= 0x80000000;
    char v8 = __parity__((unsigned char)v5);
    char v9 = 0;
    char v10 = 0;
    DWORD dwTlsIndex = param0;
    if(!v6) {
        v0 = v5((int)dwTlsIndex);
        DWORD v11 = dwTlsIndex;
        DWORD v12 = v3;
        int* ptr1 = &v1;
        jump v12;
    }
    return TlsFree(dwTlsIndex);
}

LPSTR __crtGetEnvironmentStringsA(int param0) {
    int v0;
    int v1 = param0;
    LPCWCH lpWideCharStr = GetEnvironmentStringsW();
    LPSTR result = NULL;
    if(lpWideCharStr) {
        LPCWCH v2 = lpWideCharStr;
        if(lpWideCharStr[0] != 0) {
        loc_407D20:
            do {
                ++v2;
                if(v2[0] != 0) {
                    goto loc_407D20;
                }
                else {
                    ++v2;
                }
            }
            while(v2[0] != 0);
        }
        int v3 = v0;
        int cchWideChar = (int)((char*)((int)(int*)((int)v2 - (int)lpWideCharStr) >> 1) + 1);
        int cbMultiByte = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, NULL, 0, NULL, NULL);
        v1 = cbMultiByte;
        if(cbMultiByte) {
            LPSTR lpMultiByteStr = (LPSTR)malloc_crt(cbMultiByte);
            if(!lpMultiByteStr) {
                FreeEnvironmentStringsW(lpWideCharStr);
                return NULL;
            }
            int v4 = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, NULL, NULL);
            if(!v4) {
                free(lpMultiByteStr);
                lpMultiByteStr = NULL;
            }
            FreeEnvironmentStringsW(lpWideCharStr);
            result = lpMultiByteStr;
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
    unsigned char v1;
    int v2;
    _LocaleUpdate::_LocaleUpdate(&v0, param0);
    int result = __crtGetStringTypeA_stat((int)&v0, param1, param2, param3, param4, param5, param6);
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

int __crtGetStringTypeA_stat(int* param0, DWORD dwInfoType, LPCCH lpMultiByteStr, int cbMultiByte, LPWORD lpCharType, UINT CodePage1, unsigned int param6) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int result;
    UINT v5 = (UINT)(gvar_4183F0 ^ (int)&v1);
    UINT CodePage = CodePage1;
    int v6 = v4;
    if(!CodePage) {
        CodePage = *(UINT*)(*param0 + 4);
        CodePage1 = *(UINT*)(*param0 + 4);
    }
    int cchWideChar = MultiByteToWideChar(CodePage, param6 == 0 ? 1: 9, lpMultiByteStr, cbMultiByte, NULL, 0);
    if(cchWideChar != 0 && cchWideChar >= 0 && (unsigned int)cchWideChar <= 0x7ffffff0 && (unsigned int)(cchWideChar * 2 + 8) > (unsigned int)(cchWideChar * 2)) {
        if((size_t)(cchWideChar * 2 + 8) <= 0x400) {
            _alloca_probe_16(cchWideChar * 2);
            v0 = &v2;
            if(&v3 != 20) {
                v2 = 0xcccc;
                goto loc_40B2C8;
            }
        }
        else {
            v0 = (int)malloc((size_t)(cchWideChar * 2 + 8));
            if(v0) {
                *(int*)v0 = 0xdddd;
            loc_40B2C8:
                if((LPWSTR)(v0 + 8)) {
                    memset2((int)(LPWSTR)(v0 + 8), 0, cchWideChar * 2);
                    int cchSrc = MultiByteToWideChar(CodePage1, 1, lpMultiByteStr, cbMultiByte, (LPWSTR)(v0 + 8), cchWideChar);
                    if(cchSrc) {
                        BOOL v7 = GetStringTypeW(dwInfoType, (LPWSTR)(v0 + 8), cchSrc, lpCharType);
                    }
                    unk_lib_sub14((LPWSTR)(v0 + 8));
                }
            }
        }
    }
    _security_check_cookie((uintptr_t)((int)&v1 ^ v5));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int __crtLCMapStringA(int* param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8) {
    char v0;
    unsigned char v1;
    int v2;
    _LocaleUpdate::_LocaleUpdate(&v0, param0);
    int result = __crtLCMapStringA_stat((int)&v0, param1, param2, param3, param4, param5, param6, param7, param8);
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

int __crtLCMapStringA_stat(int* param0, unsigned int param1, DWORD dwMapFlags, LPCCH lpMultiByteStr, int param4, LPWSTR lpDestStr, int param6, UINT CodePage1, unsigned int param8) {
    LPSTR lpMultiByteStr1;
    int cbMultiByte1;
    LPWSTR v0;
    LPWSTR lpWideCharStr;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int result;
    int cchSrc1 = v4;
    int v6 = (int)(gvar_4183F0 ^ (int)&v5);
    int v7 = v3;
    int cbMultiByte = param4;
    if(cbMultiByte > 0) {
        LPCCH v8 = lpMultiByteStr;
        int v9 = cbMultiByte;
        do {
            --v9;
            if(!v8[0]) {
                goto loc_40AFEC;
            }
            else {
                ++v8;
            }
        }
        while(v9);
        v9 = -1;
    loc_40AFEC:
        int v10 = cbMultiByte - v9 - 1;
        char v11 = v10 < cbMultiByte;
        char v12 = (int)(int*)((int)(int*)((int)(int*)(v10 - cbMultiByte) ^ v10) & (int)(int*)(v10 ^ cbMultiByte)) < 0;
        cbMultiByte = v10 + 1;
        if(v11 == v12) {
            cbMultiByte = v10;
        }
    }
    UINT CodePage = CodePage1;
    if(!CodePage) {
        CodePage = (UINT)*(int*)(*param0 + 4);
        CodePage1 = (UINT)*(int*)(*param0 + 4);
    }
    int cchWideChar = MultiByteToWideChar(CodePage, param8 == 0 ? 1: 9, lpMultiByteStr, cbMultiByte, NULL, 0);
    cchSrc1 = cchWideChar;
    if(cchWideChar != 0 && cchWideChar >= 0 && (unsigned int)((int)(unsigned int)(LPBOOL)0xFFFFFFE0 / (unsigned int)cchWideChar) >= 2) {
        int v13 = cchWideChar * 2;
        if((unsigned int)(v13 + 8) > (unsigned int)v13) {
            size_t _Size = (size_t)(cchSrc1 * 2 + 8);
            if(_Size <= 0x400) {
                _alloca_probe_16(v13);
                lpWideCharStr = &v1;
                if(&v2 != 24) {
                    v1 = 0xcccc;
                    goto loc_40B089;
                }
            }
            else {
                lpWideCharStr = (LPWSTR)malloc(_Size);
                if(lpWideCharStr) {
                    *(int*)&lpWideCharStr[0] = 0xdddd;
                loc_40B089:
                    lpWideCharStr += 4;
                }
            }
            cchWideChar = cchSrc1;
            if(lpWideCharStr) {
                int v14 = MultiByteToWideChar(CodePage1, 1, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
                if(v14) {
                    int cchSrc = cchSrc1;
                    int cchDest1 = __crtLCMapStringEx(param1, dwMapFlags, lpWideCharStr, cchSrc, NULL, 0);
                    if(cchDest1) {
                        if((dwMapFlags & 0x400)) {
                            int cchDest = param6;
                            if(cchDest && cchDest >= cchDest1) {
                                __crtLCMapStringEx(param1, dwMapFlags, lpWideCharStr, cchSrc, lpDestStr, cchDest);
                            }
                        }
                        else if(cchDest1 > 0 && 0xffffffe0 / (unsigned int)cchDest1 >= 2) {
                            int v15 = cchDest1 * 2;
                            if((unsigned int)(v15 + 8) > (unsigned int)v15) {
                                size_t _Size1 = (size_t)(cchDest1 * 2 + 8);
                                if(_Size1 <= 0x400) {
                                    _alloca_probe_16(v15);
                                    v0 = &v1;
                                    if(&v2 != 24) {
                                        v1 = 0xcccc;
                                        goto loc_40B157;
                                    }
                                }
                                else {
                                    v0 = (LPWSTR)malloc(_Size1);
                                    if(v0) {
                                        *(int*)&v0[0] = 0xdddd;
                                    loc_40B157:
                                        LPWSTR lpDestStr1 = v0 + 4;
                                        if(lpDestStr1) {
                                            int v16 = __crtLCMapStringEx(param1, dwMapFlags, lpWideCharStr, cchSrc1, lpDestStr1, cchDest1);
                                            if(v16) {
                                                if(param6 == 0) {
                                                    cbMultiByte1 = 0;
                                                    lpMultiByteStr1 = NULL;
                                                }
                                                else {
                                                    cbMultiByte1 = param6;
                                                    lpMultiByteStr1 = (LPSTR)lpDestStr;
                                                }
                                                cchDest1 = WideCharToMultiByte(CodePage1, 0, lpDestStr1, cchDest1, lpMultiByteStr1, cbMultiByte1, NULL, NULL);
                                            }
                                            unk_lib_sub14(lpDestStr1);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                unk_lib_sub14(lpWideCharStr);
            }
        }
    }
    _security_check_cookie((uintptr_t)((int)&v5 ^ v6));
    return result;
}

int __crtLCMapStringEx(unsigned int param0, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int* ptr0 = &v3;
    unsigned int v5 = gvar_419FD0;
    unsigned int v6 = gvar_4183F0 ^ v5;
    if(v6) {
        int v7 = 0;
        char v8 = 1;
        char v9 = 0;
        char v10 = 1;
        char v11 = 0;
        char v12 = 0;
        int v13 = 0;
        LPWSTR v14 = NULL;
        v0 = v6((int)param0, (int)dwMapFlags, (int)lpSrcStr, cchSrc, (int)lpDestStr, cchDest, 0);
        int v15 = v1;
        int v16 = v4;
        int* ptr1 = &v2;
        jump v16;
    }
    unsigned int v17 = __crtDownlevelLocaleNameToLCID(param0);
    return LCMapStringW((LCID)v17, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}

int* __crtLoadWinApiPointers() {
    HMODULE hModule = GetModuleHandleW("kernel32.dll");
    FARPROC v0 = GetProcAddress(hModule, "FlsAlloc");
    gvar_419F60 = (int*)(gvar_4183F0 ^ (int)v0);
    FARPROC v1 = GetProcAddress(hModule, "FlsFree");
    gvar_419F64 = (int*)(gvar_4183F0 ^ (int)v1);
    FARPROC v2 = GetProcAddress(hModule, "FlsGetValue");
    gvar_419F68 = (int*)(gvar_4183F0 ^ (int)v2);
    FARPROC v3 = GetProcAddress(hModule, "FlsSetValue");
    gvar_419F6C = (int*)(gvar_4183F0 ^ (int)v3);
    FARPROC v4 = GetProcAddress(hModule, "InitializeCriticalSectionEx");
    gvar_419F70 = (int*)(gvar_4183F0 ^ (int)v4);
    FARPROC v5 = GetProcAddress(hModule, "CreateEventExW");
    gvar_419F74 = (int*)(gvar_4183F0 ^ (int)v5);
    FARPROC v6 = GetProcAddress(hModule, "CreateSemaphoreExW");
    gvar_419F78 = (int*)(gvar_4183F0 ^ (int)v6);
    FARPROC v7 = GetProcAddress(hModule, "SetThreadStackGuarantee");
    gvar_419F7C = (int*)(gvar_4183F0 ^ (int)v7);
    FARPROC v8 = GetProcAddress(hModule, "CreateThreadpoolTimer");
    gvar_419F80 = (int*)(gvar_4183F0 ^ (int)v8);
    FARPROC v9 = GetProcAddress(hModule, "SetThreadpoolTimer");
    gvar_419F84 = (int*)(gvar_4183F0 ^ (int)v9);
    FARPROC v10 = GetProcAddress(hModule, "WaitForThreadpoolTimerCallbacks");
    gvar_419F88 = (int*)(gvar_4183F0 ^ (int)v10);
    FARPROC v11 = GetProcAddress(hModule, "CloseThreadpoolTimer");
    gvar_419F8C = (int*)(gvar_4183F0 ^ (int)v11);
    FARPROC v12 = GetProcAddress(hModule, "CreateThreadpoolWait");
    gvar_419F90 = (int*)(gvar_4183F0 ^ (int)v12);
    FARPROC v13 = GetProcAddress(hModule, "SetThreadpoolWait");
    gvar_419F94 = (int*)(gvar_4183F0 ^ (int)v13);
    FARPROC v14 = GetProcAddress(hModule, "CloseThreadpoolWait");
    gvar_419F98 = (int*)(gvar_4183F0 ^ (int)v14);
    FARPROC v15 = GetProcAddress(hModule, "FlushProcessWriteBuffers");
    gvar_419F9C = (int*)(gvar_4183F0 ^ (int)v15);
    FARPROC v16 = GetProcAddress(hModule, "FreeLibraryWhenCallbackReturns");
    gvar_419FA0 = (int*)(gvar_4183F0 ^ (int)v16);
    FARPROC v17 = GetProcAddress(hModule, "GetCurrentProcessorNumber");
    gvar_419FA4 = (int*)(gvar_4183F0 ^ (int)v17);
    FARPROC v18 = GetProcAddress(hModule, "GetLogicalProcessorInformation");
    gvar_419FA8 = (int*)(gvar_4183F0 ^ (int)v18);
    FARPROC v19 = GetProcAddress(hModule, "CreateSymbolicLinkW");
    gvar_419FAC = (int*)(gvar_4183F0 ^ (int)v19);
    FARPROC v20 = GetProcAddress(hModule, "SetDefaultDllDirectories");
    gvar_419FB0 = (int*)(gvar_4183F0 ^ (int)v20);
    FARPROC v21 = GetProcAddress(hModule, "EnumSystemLocalesEx");
    gvar_419FB8 = (int*)(gvar_4183F0 ^ (int)v21);
    FARPROC v22 = GetProcAddress(hModule, "CompareStringEx");
    gvar_419FB4 = (int*)(gvar_4183F0 ^ (int)v22);
    FARPROC v23 = GetProcAddress(hModule, "GetDateFormatEx");
    gvar_419FBC = (int*)(gvar_4183F0 ^ (int)v23);
    FARPROC v24 = GetProcAddress(hModule, "GetLocaleInfoEx");
    gvar_419FC0 = (int*)(gvar_4183F0 ^ (int)v24);
    FARPROC v25 = GetProcAddress(hModule, "GetTimeFormatEx");
    gvar_419FC4 = (int*)(gvar_4183F0 ^ (int)v25);
    FARPROC v26 = GetProcAddress(hModule, "GetUserDefaultLocaleName");
    gvar_419FC8 = (int*)(gvar_4183F0 ^ (int)v26);
    FARPROC v27 = GetProcAddress(hModule, "IsValidLocaleName");
    gvar_419FCC = (int*)(gvar_4183F0 ^ (int)v27);
    FARPROC v28 = GetProcAddress(hModule, "LCMapStringEx");
    gvar_419FD0 = (int*)(gvar_4183F0 ^ (int)v28);
    FARPROC v29 = GetProcAddress(hModule, "GetCurrentPackageId");
    gvar_419FD4 = (int*)(gvar_4183F0 ^ (int)v29);
    FARPROC v30 = GetProcAddress(hModule, "GetTickCount64");
    gvar_419FD8 = (int*)(gvar_4183F0 ^ (int)v30);
    FARPROC v31 = GetProcAddress(hModule, "GetFileInformationByHandleExW");
    gvar_419FDC = (int*)(gvar_4183F0 ^ (int)v31);
    FARPROC v32 = GetProcAddress(hModule, "SetFileInformationByHandleW");
    int* result = (int*)(gvar_4183F0 ^ (int)v32);
    gvar_419FE0 = (int*)(gvar_4183F0 ^ (int)v32);
    return result;
}

int _crtMessageBoxW(LPCWSTR param0, int param1, int param2) {
    int v0;
    void* Ptr5;
    unsigned int* ptr0;
    DWORD v1;
    char v2;
    int result;
    int v3;
    char v4;
    char v5;
    int v6;
    int v7;
    void* ptr1;
    int v8;
    int v9;
    int* ptr2 = (int*)(gvar_4183F0 ^ (int)&v3);
    int v10 = v9;
    LPCWSTR v11 = param0;
    int v12 = 0;
    int v13 = param1;
    PVOID v14 = EncodePointer(NULL);
    PVOID v15 = v14;
    PVOID v16 = (PVOID)_crtIsPackagedApp(v8);
    if(gvar_419F18 == 0) {
        HMODULE hModule = LoadLibraryExW("USER32.DLL", NULL, 0x800);
        if(!hModule) {
            v1 = GetLastError();
            if(v1 != 87) {
                ptr0 += 2;
                uintptr_t _StackCookie = (uintptr_t)((int)&v3 ^ (int)ptr2);
                *ptr0 = &loc_40A948;
                /*BAD_CALL!*/ _security_check_cookie(_StackCookie);
                return result;
            }
            hModule = LoadLibraryExW("USER32.DLL", NULL, 0);
            if(!hModule) {
                ptr0 += 2;
                uintptr_t _StackCookie = (uintptr_t)((int)&v3 ^ (int)ptr2);
                *ptr0 = &loc_40A948;
                /*BAD_CALL!*/ _security_check_cookie(_StackCookie);
                return result;
            }
        }
        v1 = (DWORD)GetProcAddress(hModule, "MessageBoxW");
        if(v1) {
            PVOID v17 = EncodePointer((PVOID)v1);
            gvar_419F18 = v17;
            FARPROC Ptr = GetProcAddress(hModule, "GetActiveWindow");
            PVOID v18 = EncodePointer(Ptr);
            gvar_419F1C = v18;
            FARPROC Ptr1 = GetProcAddress(hModule, "GetLastActivePopup");
            PVOID v19 = EncodePointer(Ptr1);
            gvar_419F20 = v19;
            FARPROC Ptr2 = GetProcAddress(hModule, "GetUserObjectInformationW");
            PVOID v20 = EncodePointer(Ptr2);
            gvar_419F28 = v20;
            if(v20) {
                FARPROC Ptr3 = GetProcAddress(hModule, "GetProcessWindowStation");
                PVOID v21 = EncodePointer(Ptr3);
                gvar_419F24 = v21;
            }
            v14 = v15;
            goto loc_40A859;
        }
    }
    else {
    loc_40A859:
        BOOL v22 = IsDebuggerPresent();
        if(v22) {
            LPCWSTR lpOutputString = v11;
            if(lpOutputString) {
                OutputDebugStringW(lpOutputString);
            }
            if(v16 == 0) {
                goto loc_40A893;
            }
            else {
                goto loc_40A878;
            }
        }
        else if(v16 != 0) {
            DecodePointer(gvar_419F18);
        loc_40A878:
            ptr0 = &v6;
        }
        else {
        loc_40A893:
            PVOID Ptr4 = gvar_419F24;
            if(Ptr4 != v14 && gvar_419F28 != v14) {
                PVOID v23 = DecodePointer(Ptr4);
                Ptr5 = gvar_419F28;
                v16 = v23;
                PVOID v24 = DecodePointer(Ptr5);
                PVOID v25 = v16;
                v15 = v24;
                if(!v25 || !v24) {
                    goto loc_40A8F1;
                }
                else {
                    ptr0 = &Ptr5;
                    int v26 = v25();
                    if(v26) {
                        ptr0 = &v7;
                        int v27 = v15(v26, 1, (int)&v5, 12, (int)&v2);
                        if(v27 && (v4 & 0x1)) {
                            goto loc_40A8F1;
                        }
                    }
                    v0 = param2 | 0x200000;
                }
            }
            else {
            loc_40A8F1:
                PVOID Ptr6 = gvar_419F1C;
                if(Ptr6 != v14) {
                    PVOID v28 = DecodePointer(Ptr6);
                    if(v28) {
                        ptr0 = &Ptr5;
                        v12 = v28();
                        if(v12) {
                            PVOID Ptr7 = gvar_419F20;
                            if(Ptr7 != v14) {
                                PVOID v29 = DecodePointer(Ptr7);
                                if(v29) {
                                    ptr0 = &ptr1;
                                    v12 = v29(v12);
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
            v1 = (DWORD)/*BAD_CALL!*/ DecodePointer(*(PVOID*)(ptr0 + 1));
            if(v1) {
                --ptr0;
                *ptr0 = v0;
                --ptr0;
                *ptr0 = v13;
                --ptr0;
                *ptr0 = v11;
                --ptr0;
                *ptr0 = v12;
                --ptr0;
                *ptr0 = &loc_40A937;
                /*BAD_CALL!*/ v1(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2), *(int*)(ptr0 + 3), *(int*)(ptr0 + 4));
            }
        }
    }
    ptr0 += 2;
    uintptr_t _StackCookie = (uintptr_t)((int)&v3 ^ (int)ptr2);
    *ptr0 = &loc_40A948;
    /*BAD_CALL!*/ _security_check_cookie(_StackCookie);
    return result;
}

LPTOP_LEVEL_EXCEPTION_FILTER __crtSetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter) {
    return SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}

BOOL _crtTerminateProcess(UINT uExitCode) {
    HANDLE hProcess = GetCurrentProcess();
    return TerminateProcess(hProcess, uExitCode);
}

LONG _crtUnhandledException(_EXCEPTION_POINTERS* ExceptionInfo) {
    SetUnhandledExceptionFilter(NULL);
    return UnhandledExceptionFilter(ExceptionInfo);
}

// Stale decompilation - Refresh this view to re-decompile this code
int __crt_atoflt_l(int* param0, void* param1, int param2, int* param3) {
    int v0;
    char v1;
    int v2;
    int v3;
    int v4;
    char v5;
    int v6;
    unsigned char v7;
    int result;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v4);
    int v8 = v3;
    int* ptr1 = param0;
    int* ptr2 = param3;
    _LocaleUpdate::_LocaleUpdate((int)&v1, param2);
    int v9 = __strgtold12_l(&v5, &v6, param1, 0, 0, 0, 0, &v1);
    if(ptr2) {
        *ptr2 = v6;
    }
    int v10 = unk_lib_sub9(&v5, ptr1);
    if(((unsigned char)v9 & 0x3)) {
        if(((unsigned char)v9 & 0x1)) {
        loc_40C708:
            v0 = 4;
        }
        else if(((unsigned char)v9 & 0x2)) {
        loc_40C716:
            v0 = 3;
        }
    }
    else if(v10 == 1) {
        goto loc_40C716;
    }
    else if(v10 == 2) {
        goto loc_40C708;
    }
    if(v7) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    __security_check_cookie((uintptr_t)((int)&v4 ^ (int)ptr0));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long* __doserrno() {
    int v0 = _getptd_noexit();
    return v0 ? (unsigned long*)(v0 + 12): (unsigned long*)&gvar_41816C;
}

unsigned int* __dtold(unsigned int* param0, unsigned int* param1) {
    unsigned int* result;
    int v0;
    int v1;
    int v2 = v1;
    int v3 = (unsigned int)*(short*)((char*)param1 + 6);
    int v4 = 0x80000000;
    int v5 = *param1;
    int v6 = v3 & 0x8000;
    int v7 = *(int*)(param1 + 1) & 0xfffff;
    v10 = v6;
    v9 = v5;
    if((unsigned int)((v3 >>> 4) & 0x7ff)) {
        if((unsigned int)((v3 >>> 4) & 0x7ff) != 0x7ff) {
            v0 = (unsigned int)((v3 >>> 4) & 0x7ff) + 0x3c00;
            goto loc_40F048;
        }
        else {
            result = (unsigned int*)0x7FFF;
            goto loc_40F05B;
        }
    }
    else if(!v7 && !v5) {
        result = param0;
        *(int*)(result + 1) = *(int*)(result + 1) & v7;
        *result = *result & v7;
        *(short*)(result + 2) = (unsigned short)v6;
    }
    else {
        v0 = (unsigned int)((v3 >>> 4) & 0x7ff) + 15361;
        v4 = 0;
    loc_40F048:
        result = (unsigned int*)(unsigned short)v0;
    loc_40F05B:
        int v8 = (v7 * 0x800) | (v5 >>> 21) | v4;
        param1 = result;
        unsigned int* ptr0 = param0;
        *(int*)(ptr0 + 1) = v8;
        *ptr0 = (unsigned int)(v5 * 0x800);
        if(v8 >= 0) {
            unsigned int* ptr1 = result;
            do {
                v7 = *ptr0;
                ptr1 = (unsigned int*)((char*)ptr1 + 0xffff);
                v8 = (v8 * 2) | (unsigned int)(v7 >>> 31);
                *ptr0 = v7 * 2;
            }
            while(v8 >= 0);
            v6 = v10;
            result = ptr1;
            *(int*)(ptr0 + 1) = v8;
        }
        *(short*)(ptr0 + 2) = (unsigned short)(int*)((int)result | v6);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
int __freetlocinfo(void* param0) {
    int result;
    int v0;
    int v1 = v0;
    void* _Block4 = param0;
    unsigned int v2 = *(unsigned int*)((int)_Block4 + 132);
    if(v2 && v2 != &gvar_418E10) {
        unsigned int* ptr0 = *(unsigned int*)((int)_Block4 + 120);
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
    unsigned int* ptr1 = *(unsigned int*)((int)_Block4 + 0x88);
    if(ptr1 && *ptr1 == 0) {
        free((void*)(*(unsigned int*)((int)_Block4 + 140) - 254));
        free((void*)(*(unsigned int*)((int)_Block4 + 148) - 128));
        free((void*)(*(unsigned int*)((int)_Block4 + 152) - 128));
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

int __hw_cw_sse2(int param0) {
    int v0 = (unsigned char)param0 & 0x10 ? 128: 0;
    if(((unsigned char)param0 & 0x8)) {
        v0 |= 0x200;
    }
    if(((unsigned char)param0 & 0x4)) {
        v0 |= 0x400;
    }
    if(((unsigned char)param0 & 0x2)) {
        v0 |= 0x800;
    }
    if(((unsigned char)param0 & 0x1)) {
        v0 |= 0x1000;
    }
    if((param0 & 0x80000)) {
        v0 |= 0x100;
    }
    if((unsigned int)(param0 & 0x300)) {
        switch((unsigned int)(param0 & 0x300)) {
            case 256: {
                v0 |= 0x2000;
                break;
            }
            case 512: {
                v0 |= 0x4000;
                break;
            }
            case 768: {
                v0 |= 0x6000;
                break;
            }
        }
    }
    if((unsigned int)(param0 & 0x3000000) == 0x1000000) {
        return v0 | 0x8040;
    }
    else if((unsigned int)(param0 & 0x3000000) != 0x2000000) {
        return (unsigned int)(param0 & 0x3000000) == 0x3000000 ? v0 | 0x8000: v0;
    }
    return v0 | 0x40;
}

int __iob_func() {
    return &gvar_418170;
}

// Stale decompilation - Refresh this view to re-decompile this code
int __isa_available_init() {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    int v3;
    BOOL v4;
    int v5;
    int v6;
    int v7;
    gvar_419EE8 = 0;
    gvar_418E00 |= 1;
    BOOL v8 = →KERNEL32.dll!IsProcessorFeaturePresent(10);
    if(v8) {
        gvar_419EE8 = 1;
        (unsigned int v1, int v5, int v6, int v7) = cpuid(0, 0);
        unsigned int v9 = gvar_418E00 | 0x2;
        gvar_418E00 |= 2;
        (unsigned int v2, BOOL v10, int v3, int v11) = cpuid(1, 0);
        if((unsigned int)((v6 ^ 0x6c65746e) | (v7 ^ 0x49656e69) | (v5 ^ 0x756e6547)) <= 0) {
            switch(v2 & 0xfff3ff0) {
                case 67264: 
                case 132704: 
                case 132720: 
                case 198224: 
                case 198240: 
                case 198256: {
                    break;
                }
                default: {
                    goto loc_40A126;
                }
            }
            v0 = gvar_419EEC | 0x1;
            gvar_419EEC |= 1;
        }
        else {
        loc_40A126:
            v0 = gvar_419EEC;
        }
        if((int)v1 >= 7) {
            (unsigned int v12, BOOL v4, int v13, v11) = cpuid(7, 0);
            v9 = gvar_418E00;
            v8 = v4;
            if((v8 & 0x200)) {
                gvar_419EEC = v0 | 0x2;
            }
        }
        else {
            v8 = 0;
        }
        if((v3 & 0x100000)) {
            gvar_419EE8 = 2;
            gvar_418E00 = v9 | 0x4;
            if((v3 & 0x8000000) && (v3 & 0x10000000)) {
                gvar_419EE8 = 3;
                gvar_418E00 = v9 | 0xc;
                if(((unsigned char)v8 & 0x20)) {
                    gvar_419EE8 = 5;
                    gvar_418E00 = v9 | 0x2c;
                }
            }
        }
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
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
    unsigned int v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5 = v3;
    unsigned int* ptr0 = param2;
    int result = 0x404e;
    int v6 = 0x404e;
    *ptr0 = 0;
    *(int*)(ptr0 + 1) = 0;
    *(int*)(ptr0 + 2) = 0;
    if(param1 > 0) {
        int* ptr1 = NULL;
        param2 = NULL;
        int* ptr2 = NULL;
        int* ptr3 = NULL;
        do {
            unsigned int v7 = *ptr0;
            *&v4 = *(int*)(ptr0 + 1);
            *(&v4 + 1) = *(int*)(ptr0 + 2);
            int* ptr4 = (int*)((int)(int*)((int)param2 * 2) | (int)(int*)((int)ptr1 >>> 31));
            int* ptr5 = (int*)((int)(int*)((int)ptr3 * 2) | (int)(int*)((int)param2 >>> 31));
            int* ptr6 = (int*)((int)ptr2 * 4);
            unsigned int* ptr7 = (unsigned int*)((int)(int*)((int)ptr4 * 2) | (int)(int*)((int)(int*)((int)ptr2 >>> 30) & 0x1));
            *ptr0 = ptr6;
            unsigned int v8 = v7;
            int* ptr8 = (int*)((int)(int*)((int)ptr5 * 2) | (int)(int*)((int)ptr4 >>> 31));
            *(ptr0 + 1) = ptr7;
            unsigned int* ptr9 = (unsigned int*)(v8 + (int)ptr6);
            *(ptr0 + 2) = ptr8;
            int v9 = 0;
            param2 = ptr9;
            if((unsigned int)ptr9 < (unsigned int)ptr6 || (unsigned int)ptr9 < v7) {
                v9 = 1;
            }
            *ptr0 = ptr9;
            if(v9) {
                int v10 = 0;
                ptr7 = (unsigned int*)((char*)ptr7 + 1);
                if((unsigned int)(int*)((char*)ptr7 + 1) < (unsigned int)ptr7 || (unsigned int)ptr7 < 1) {
                    v10 = 1;
                }
                *(ptr0 + 1) = ptr7;
                if(v10) {
                    ptr8 = (int*)((char*)ptr8 + 1);
                    *(ptr0 + 2) = ptr8;
                }
            }
            int v11 = 0;
            int* ptr10 = (int*)((int)ptr7 + v4);
            ptr2 = (int*)((int)ptr7 + v4);
            if((unsigned int)ptr10 < (unsigned int)ptr7 || (unsigned int)ptr10 < v4) {
                v11 = 1;
            }
            *(ptr0 + 1) = ptr10;
            if(v11) {
                ptr8 = (int*)((char*)ptr8 + 1);
                *(ptr0 + 2) = ptr8;
            }
            int* ptr11 = (int*)((int)param2 * 2);
            int v12 = 0;
            unsigned int* ptr12 = (unsigned int*)((int)(int*)((int)ptr2 * 2) | (int)(int*)((int)param2 >>> 31));
            char* ptr13 = param0;
            int* ptr14 = (int*)((int)(int*)((int)(int*)((int)ptr8 + v0) * 2) | (int)(int*)((int)ptr10 >>> 31));
            *ptr0 = ptr11;
            *(ptr0 + 1) = ptr12;
            *(ptr0 + 2) = ptr14;
            unsigned int v13 = (unsigned int)*ptr13;
            param2 = ptr12;
            ptr3 = ptr14;
            v7 = v13;
            ptr1 = (int*)(v13 + (int)ptr11);
            ptr2 = (int*)(v13 + (int)ptr11);
            int v14 = ptr1 >= ptr11 && v13 <= (unsigned int)ptr1 ? v12: 1;
            *ptr0 = ptr1;
            if(v14) {
                unsigned int* ptr15 = ptr12;
                ptr11 = NULL;
                ptr12 = (unsigned int*)((char*)ptr15 + 1);
                param2 = (unsigned int*)((char*)ptr15 + 1);
                if(ptr15 > ptr12 || (unsigned int)ptr12 < 1) {
                    ptr11 = (int*)0x1;
                }
                *(ptr0 + 1) = ptr12;
                if(ptr11) {
                    ptr14 = (int*)((char*)ptr14 + 1);
                    ptr3 = ptr14;
                    *(ptr0 + 2) = ptr14;
                }
            }
            v1 = param1 - 1;
            *(ptr0 + 1) = ptr12;
            ++param0;
            *(ptr0 + 2) = ptr14;
            param1 = v1;
        }
        while(v1);
        result = 0x404e;
    }
    if(*(int*)(ptr0 + 2) == 0) {
        int v15 = *(int*)(ptr0 + 1);
        do {
            int v16 = *ptr0;
            v2 = v15;
            v15 = (v15 * 0x10000) | (v16 >>> 16);
            result = v6 + 0xfff0;
            *ptr0 = (int*)(v16 * 0x10000);
            v6 = result;
        }
        while(!(v2 >>> 16));
        *(int*)(ptr0 + 1) = v15;
        *(int*)(ptr0 + 2) = v2 >>> 16;
    }
    int* ptr16 = *(ptr0 + 2);
    if(!(int*)((int)ptr16 & 0x8000)) {
        int v17 = *ptr0;
        int v18 = *(int*)(ptr0 + 1);
        do {
            int v19 = v18;
            v18 = (v18 * 2) | (v17 >>> 31);
            ptr16 = (int*)((int)(int*)((int)ptr16 * 2) | (int)(int*)(v19 >>> 31));
            result = v6 + 0xffff;
            v17 *= 2;
            v6 = result;
        }
        while(!(int*)((int)ptr16 & 0x8000));
        *ptr0 = v17;
        *(int*)(ptr0 + 1) = v18;
        *(ptr0 + 2) = ptr16;
    }
    *(short*)((char*)ptr0 + 10) = (unsigned short)result;
    return result;
}

BOOL _raise_securityfailure(_EXCEPTION_POINTERS* ExceptionInfo) {
    BOOL v0 = IsDebuggerPresent();
    int v1 = 1;
    gvar_419EE4 = v0;
    crt_debugger_hook();
    _crtUnhandledException(ExceptionInfo);
    if(!gvar_419EE4) {
        crt_debugger_hook();
    }
    return _crtTerminateProcess(3221226505);
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
        /*BAD_CALL!*/ GetSystemTimeAsFileTime(&v2);
        DWORD v5 = /*BAD_CALL!*/ GetCurrentThreadId();
        DWORD v6 = GetCurrentProcessId();
        int v7 = ((v2 ^ v3) ^ v5) ^ v6;
        QueryPerformanceCounter(&v0);
        int* ptr0 = (int*)(((v0 ^ v1) ^ v7) ^ (int)&v7);
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

int __set_fpsr_sse2(int param0) {
    int v0;
    int result = 8;
    if((int)gvar_419EE8 >= 1) {
        result = param0;
        if((!((unsigned char)result & 0x40) || !gvar_4191A8)) {
            result &= -65;
        }
    }
    *(int*)__FS_BASE = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int __strgtold12_l(short* param0, void* param1, void* param2, unsigned int param3, int param4, unsigned int param5, unsigned int param6, int* param7) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    unsigned int v5;
    int v6;
    char v7;
    char v8;
    char v9;
    unsigned int v10;
    void* ptr0;
    unsigned char* ptr1;
    void* ptr0;
    short v11;
    int v12;
    int v13;
    char v14;
    unsigned short v15;
    short v16;
    char v17;
    int v18;
    char v19;
    char v20;
    char v21;
    char v22;
    char v23;
    short v24;
    char v25;
    char v26;
    short v27;
    char v28;
    char v29;
    char v30;
    int result;
    char v31;
    int* ptr2 = (int*)(gvar_4183F0 ^ (int)&v13);
    short* ptr3 = param0;
    void* ptr4 = param1;
    int v32 = v12;
    void* ptr5 = (void*)0x1;
    int* ptr6 = NULL;
    void* ptr7 = NULL;
    int v33 = 0;
    char* ptr8 = &v14;
    unsigned int v34 = 0;
    *(int*)&v15 = 0;
    void* ptr9 = NULL;
    short* ptr10 = NULL;
    int v35 = 0;
    if(param7 == 0) {
        int* ptr11 = _errno();
        ptr11[0] = 22;
        _invalid_parameter_noinfo();
    }
    else {
        void* ptr12 = param2;
        void* i = param2;
        void* ptr13 = param2;
        for(i = (unsigned int)*(char*)ptr12 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8); *(char*)ptr12 == 32 || *(char*)ptr12 == 9 || *(char*)ptr12 == 10 || *(char*)ptr12 == 13; i = (unsigned int)*(char*)ptr12 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8)) {
            ptr12 = (void*)((int)ptr12 + 1);
        }
    loc_40D3C4:
        do {
            i = (unsigned int)*(char*)ptr12 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
            ptr12 = (void*)((int)ptr12 + 1);
            char v36 = (unsigned char)i;
            switch(ptr7) {
                case 0: {
                    int* ptr14 = (int*)((int)i - 49);
                    char v37 = (unsigned char)ptr14 == 8;
                    if(((unsigned char)ptr14 < 8 || v37)) {
                        ptr0 = (void*)0x3;
                        ptr7 = ptr0;
                        ptr12 = (void*)((int)ptr12 - 1);
                        goto loc_40D3C4;
                    }
                    else {
                        int* ptr15 = param7;
                        int v38 = *ptr15;
                        unsigned int* ptr16 = *(unsigned int*)(v38 + 132);
                        unsigned char* ptr17 = *ptr16;
                        if((unsigned char)i == *ptr17) {
                            ptr0 = (void*)0x5;
                            ptr7 = ptr0;
                            goto loc_40D3C4;
                        }
                        else {
                            int v39 = (unsigned int)(unsigned char)i - 43;
                            if(v39) {
                                unsigned int v40 = (unsigned int)(v39 - 2);
                                if(v40) {
                                    ptr1 = (unsigned char*)(v40 - 3);
                                    char v41 = ptr1 ? 0: 1;
                                    if(!v41) {
                                        goto loc_40D6A0;
                                    }
                                    else {
                                        ptr7 = (void*)0x1;
                                        goto loc_40D3C4;
                                    }
                                }
                                else {
                                    i = (void*)0x8000;
                                    ptr7 = (void*)0x2;
                                    v33 = 0x8000;
                                    goto loc_40D3C4;
                                }
                            }
                            else {
                                ptr7 = (void*)0x2;
                                v33 = 0;
                                goto loc_40D3C4;
                            }
                        }
                    }
                }
                case 1: {
                    *(int*)&v15 = 1;
                    int* ptr18 = (int*)((int)i - 49);
                    char v42 = (unsigned char)ptr18 == 8;
                    if((unsigned char)ptr18 >= 8 && !v42) {
                        int* ptr19 = param7;
                        int v43 = *ptr19;
                        unsigned int* ptr20 = *(unsigned int*)(v43 + 132);
                        ptr1 = *ptr20;
                        if((unsigned char)i == *ptr1) {
                            ptr0 = (void*)0x4;
                            ptr7 = ptr0;
                            goto loc_40D3C4;
                        }
                        else if((unsigned char)i == 43 || (unsigned char)i == 45) {
                            ptr12 = (void*)((int)ptr12 - 1);
                            ptr0 = (void*)0xB;
                            ptr7 = ptr0;
                            goto loc_40D3C4;
                        }
                        else if((unsigned char)i != 48) {
                            goto loc_40D460;
                        }
                        else {
                            ptr7 = (void*)0x1;
                            goto loc_40D3C4;
                        }
                    }
                    else {
                        ptr0 = (void*)0x3;
                        ptr7 = ptr0;
                        ptr12 = (void*)((int)ptr12 - 1);
                        goto loc_40D3C4;
                    }
                }
                case 2: {
                    int* ptr21 = (int*)((int)i - 49);
                    char v44 = (unsigned char)ptr21 == 8;
                    if((unsigned char)ptr21 < 8 || v44) {
                        ptr0 = (void*)0x3;
                        ptr7 = ptr0;
                        ptr12 = (void*)((int)ptr12 - 1);
                        goto loc_40D3C4;
                    }
                    else {
                        int* ptr22 = param7;
                        int v45 = *ptr22;
                        unsigned int* ptr23 = *(unsigned int*)(v45 + 132);
                        ptr1 = *ptr23;
                        if((unsigned char)i == *ptr1) {
                            ptr0 = (void*)0x5;
                            ptr7 = ptr0;
                            goto loc_40D3C4;
                        }
                        else if((unsigned char)i == 48) {
                            ptr7 = (void*)0x1;
                            goto loc_40D3C4;
                        }
                        else {
                            ptr12 = ptr13;
                            goto loc_40D6A1;
                        }
                    }
                }
                case 3: {
                    *(int*)&v15 = 1;
                    if((unsigned char)i >= 48) {
                        unsigned int v46 = v34;
                        int v47 = v35;
                        while((unsigned char)i <= 57) {
                            if(v46 < 25) {
                                i = (unsigned int)((unsigned char)i - 48) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                ++v46;
                                ptr8[0] = (char)i;
                                ++ptr8;
                            }
                            else {
                                ++v47;
                            }
                            i = (unsigned int)*(char*)ptr12 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                            ptr12 = (void*)((int)ptr12 + 1);
                            if((unsigned char)i < 48) {
                            loc_40D4E4:
                                v35 = v47;
                                ptr6 = NULL;
                                v34 = v46;
                            loc_40D4EC:
                                int* ptr24 = param7;
                                int v48 = *ptr24;
                                unsigned int* ptr25 = *(unsigned int*)(v48 + 132);
                                unsigned char* ptr26 = *ptr25;
                                if((unsigned char)i == *ptr26) {
                                    ptr0 = (void*)0x4;
                                    ptr7 = ptr0;
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
                                        ptr0 = (void*)0x6;
                                        ptr7 = ptr0;
                                        goto loc_40D3C4;
                                    }
                                }
                                else {
                                    ptr12 = (void*)((int)ptr12 - 1);
                                    ptr0 = (void*)0xB;
                                    ptr7 = ptr0;
                                    goto loc_40D3C4;
                                }
                            }
                        }
                        goto loc_40D4E4;
                    }
                    else {
                        goto loc_40D4EC;
                    }
                }
                case 4: {
                    *(int*)&v15 = 1;
                    ptr9 = (void*)0x1;
                    v10 = v34;
                    char v49 = v10 ? 0: 1;
                    if(v49) {
                        char v50 = (unsigned char)i == 48;
                        v9 = (unsigned char)i < 48;
                        v8 = ((((unsigned char)i - 48) ^ (unsigned char)i) & ((unsigned char)i ^ 0x30)) < 0;
                        if(!v50) {
                        loc_40D542:
                            if(v9 == v8) {
                                int v51 = v35;
                                while((unsigned char)i <= 57) {
                                    if(v10 < 25) {
                                        i = (unsigned int)((unsigned char)i - 48) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                        ++v10;
                                        ptr8[0] = (char)i;
                                        ++ptr8;
                                        --v51;
                                    }
                                    i = (unsigned int)*(char*)ptr12 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                    ptr12 = (void*)((int)ptr12 + 1);
                                    if((unsigned char)i < 48) {
                                        break;
                                    }
                                }
                                v35 = v51;
                                ptr6 = NULL;
                                v34 = v10;
                            }
                            if((unsigned char)i != 43 && (unsigned char)i != 45) {
                                if((unsigned char)i > 67) {
                                    if((unsigned char)i <= 69) {
                                        ptr0 = (void*)0x6;
                                        ptr7 = ptr0;
                                        goto loc_40D3C4;
                                    }
                                    else {
                                        i = (unsigned int)((unsigned char)i - 100) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                        if((unsigned char)i <= 1) {
                                            ptr0 = (void*)0x6;
                                            ptr7 = ptr0;
                                            goto loc_40D3C4;
                                        }
                                    }
                                }
                                ptr12 = (void*)((int)ptr12 - 1);
                                break loc_40D3C4;
                            }
                            else {
                                ptr12 = (void*)((int)ptr12 - 1);
                                ptr0 = (void*)0xB;
                                ptr7 = ptr0;
                                goto loc_40D3C4;
                            }
                        }
                        else {
                            int v52 = v35;
                            do {
                                i = (unsigned int)*(char*)ptr12 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                --v52;
                                ptr12 = (void*)((int)ptr12 + 1);
                            }
                            while((unsigned char)i == 48);
                            v35 = v52;
                            v10 = v34;
                            v9 = (unsigned char)i < 48;
                            v8 = ((((unsigned char)i - 48) ^ (unsigned char)i) & ((unsigned char)i ^ 0x30)) < 0;
                            goto loc_40D542;
                        }
                    }
                    else {
                        v9 = (unsigned char)i < 48;
                        v8 = ((((unsigned char)i - 48) ^ (unsigned char)i) & ((unsigned char)i ^ 0x30)) < 0;
                        goto loc_40D542;
                    }
                }
                case 5: {
                    i = (unsigned int)((unsigned char)i - 48) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                    ptr9 = (void*)0x1;
                    if((unsigned char)i <= 9) {
                        ptr0 = (void*)0x4;
                        ptr7 = ptr0;
                        ptr12 = (void*)((int)ptr12 - 1);
                        goto loc_40D3C4;
                    }
                    else {
                        ptr12 = ptr13;
                        goto loc_40D6A1;
                    }
                loc_40D69E:
                    do {
                        if((unsigned char)i < 48) {
                            break;
                        }
                        else if((unsigned char)i <= 57) {
                            i = (unsigned int)*(char*)ptr12 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                            ptr12 = (void*)((int)ptr12 + 1);
                            goto loc_40D69E;
                        }
                    }
                    while((unsigned char)i <= 57);
                loc_40D6A0:
                    ptr12 = (void*)((int)ptr12 - 1);
                loc_40D6A1:
                    v10 = v34;
                    break loc_40D3C4;
                }
                case 6: {
                    ptr13 = (void*)((int)ptr12 - 2);
                    int* ptr27 = (int*)((int)i - 49);
                    char v53 = (unsigned char)ptr27 == 8;
                    if(((unsigned char)ptr27 < 8 || v53)) {
                        ptr0 = (void*)0x9;
                        ptr7 = ptr0;
                        ptr12 = (void*)((int)ptr12 - 1);
                        goto loc_40D3C4;
                    }
                    else {
                        int v54 = (unsigned int)(unsigned char)i - 43;
                        if(!v54) {
                            ptr0 = (void*)0x7;
                            ptr7 = ptr0;
                            goto loc_40D3C4;
                        }
                        else {
                            unsigned int v55 = (unsigned int)(v54 - 2);
                            if(v55) {
                                v7 = v55 == 3;
                            loc_40D5D7:
                                if(!v7) {
                                    ptr12 = ptr13;
                                    goto loc_40D6A1;
                                }
                                else {
                                    ptr0 = (void*)0x8;
                                    ptr7 = ptr0;
                                    goto loc_40D3C4;
                                }
                            }
                            else {
                                i = (void*)0xFFFFFFFF;
                                ptr7 = (void*)0x7;
                                ptr5 = (void*)0xFFFFFFFF;
                                goto loc_40D3C4;
                            }
                        }
                    }
                }
                case 7: {
                    int* ptr28 = (int*)((int)i - 49);
                    char v56 = (unsigned char)ptr28 == 8;
                    if((unsigned char)ptr28 < 8 || v56) {
                        ptr0 = (void*)0x9;
                        ptr7 = ptr0;
                        ptr12 = (void*)((int)ptr12 - 1);
                        goto loc_40D3C4;
                    }
                    else {
                        v7 = (unsigned char)i == 48;
                        goto loc_40D5D7;
                    }
                }
                case 8: {
                    ptr10 = (short*)0x1;
                    while((unsigned char)i == 48) {
                        i = (unsigned int)*(char*)ptr12 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                        ptr12 = (void*)((int)ptr12 + 1);
                    }
                    i = (unsigned int)((unsigned char)i - 49) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                    if((unsigned char)i > 8) {
                        goto loc_40D6A0;
                    }
                    else {
                        ptr0 = (void*)0x9;
                        ptr7 = ptr0;
                        ptr12 = (void*)((int)ptr12 - 1);
                        goto loc_40D3C4;
                    }
                }
                case 9: {
                    ptr6 = NULL;
                    ptr10 = (short*)0x1;
                    while((unsigned char)i >= 48) {
                        if((unsigned char)i <= 57) {
                            i = (void*)((int)ptr6 * 10);
                            ptr6 = (int*)((int)v36 + (int)i) - 12;
                            if((int)ptr6 <= 5200) {
                                i = (unsigned int)*(char*)ptr12 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                ptr12 = (void*)((int)ptr12 + 1);
                                v36 = (unsigned char)i;
                                continue;
                            }
                            else {
                                i = (unsigned int)v36 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                                ptr6 = (int*)0x1451;
                            }
                        }
                        break;
                    }
                    goto loc_40D69E;
                }
                case 10: 
                case 11: {
                    if(param6 != 0) {
                        ptr13 = (void*)((int)ptr12 - 1);
                        int v57 = (unsigned int)(unsigned char)i - 43;
                        if(!v57) {
                            ptr0 = (void*)0x7;
                            ptr7 = ptr0;
                            goto loc_40D3C4;
                        }
                        else if(v57 - 2) {
                            ptr12 = ptr13;
                            goto loc_40D6A1;
                        }
                        else {
                            ptr5 = (void*)0xFFFFFFFF;
                            ptr7 = (void*)0x7;
                            goto loc_40D3C4;
                        }
                    }
                    else {
                        ptr7 = (void*)0xA;
                        ptr12 = (void*)((int)ptr12 - 1);
                    }
                }
            }
        }
        while(ptr7 != 10);
        *(void**)ptr4 = ptr12;
        if(*(int*)&v15) {
            if(v10 > 24) {
                v10 = (unsigned int)v23 | ((unsigned int)((v10 >>> 8) & 0xffffff) << 8);
                if(v23 >= 5) {
                    v23 = (unsigned char)v10 + 1;
                }
                int v58 = v35;
                --ptr8;
                v6 = v58 + 1;
                v10 = (unsigned int)(void*)0x18;
                v35 = v6;
            }
            else {
                v6 = v35;
            }
            if(!v10) {
                v3 = 0;
                v2 = 0;
                v1 = 0;
                v0 = 0;
                goto loc_40DA96;
            }
            else {
                unsigned char* ptr29 = (unsigned char*)(ptr8 - 1);
                if(*ptr29 == 0) {
                    do {
                        --v10;
                        ++v6;
                        --ptr29;
                    }
                    while(*ptr29 == 0);
                    v35 = v6;
                }
                __mtold12(&v14, v10, &v11);
                if((int)ptr5 < 0) {
                    ptr6 = (int*)(0 - (int)ptr6);
                }
                v5 = (unsigned int)((int)ptr6 + v35);
                if(!ptr10) {
                    v5 += param4;
                }
                if(!ptr9) {
                    v5 -= param5;
                }
                if((int)v5 > 5200) {
                    v2 = 0x7fff;
                    v1 = 0x80000000;
                    goto loc_40DA91;
                }
            }
            if((int)v5 >= -5200) {
                int v59 = 4296296;
                char v60 = v5 >= 0x80000000;
                if(v5) {
                    if(v60) {
                        v5 = (unsigned int)(0 - v5);
                        v59 = 4296648;
                    }
                    if(param3 == 0) {
                        v11 = 0;
                    }
                loc_40DA4A:
                    do {
                        char v61 = v5 ? 0: 1;
                        v60 = v5 >= 0x80000000;
                        if(v61) {
                            v3 = (unsigned int)v11;
                            v0 = *(int*)&v31;
                            v1 = *(int*)&v29;
                            v2 = *(int*)&v28 >>> 16;
                            goto loc_40DA96;
                        }
                        else {
                            unsigned int v62 = v5;
                            v59 += 84;
                            v5 >>= 3;
                            v35 = v59;
                            v34 = v5;
                            v4 = v62 & 0x7;
                            v20 = v4 ? 0: 1;
                        }
                    }
                    while(v20);
                    void* ptr30 = (void*)(v4 * 12 + v59);
                    ptr13 = (void*)(v4 * 12 + v59);
                    if(*(unsigned short*)ptr30 >= 0x8000) {
                        void* ptr31 = ptr30;
                        ptr30 = &v21;
                        ptr13 = &v21;
                        *(int*)&v21 = *(int*)ptr31;
                        int* ptr32 = (int*)((int)ptr31 + 4);
                        int* ptr33 = (int*)((char*)&v18 + 2);
                        *ptr33 = *ptr32;
                        int* ptr34 = ptr32 + 1;
                        int* ptr35 = ptr33 + 1;
                        *ptr35 = *ptr34;
                        --v18;
                    }
                    int v63 = (unsigned int)*(short*)((int)ptr30 + 10);
                    int v64 = *(int*)&v27;
                    int v65 = v64 ^ v63;
                    void* ptr36 = NULL;
                    int v66 = v65 & 0x8000;
                    *(void**)&v25 = NULL;
                    *(int*)&v15 = v66;
                    int v67 = v64 & 0x7fff;
                    *(void**)&v22 = NULL;
                    int v68 = v63 & 0x7fff;
                    *(void**)&v17 = NULL;
                    void* ptr37 = (void*)((unsigned short)v67 + (unsigned short)v68);
                    ptr5 = (void*)((unsigned short)v67 + (unsigned short)v68);
                    if((unsigned short)v67 < 0x7fff && (unsigned short)v68 < 0x7fff && (unsigned short)ptr37 <= 49149) {
                        if((unsigned short)ptr37 <= 0x3fbf) {
                            *(void**)&v28 = NULL;
                            *(void**)&v30 = NULL;
                            v11 = (unsigned int)NULL;
                            v59 = v35;
                            v5 = v34;
                            goto loc_40DA4A;
                        }
                        else if(!(unsigned short)v67) {
                            ptr37 = (void*)((int)ptr37 + 1);
                            char v69 = *(int*)&v28 & 0x7fffffff ? 0: 1;
                            ptr5 = ptr37;
                            if(v69 && !*(int*)&v30 && !v11) {
                                v27 = 0;
                                v59 = v35;
                                v5 = v34;
                                goto loc_40DA4A;
                            }
                        }
                        if(!(unsigned short)v68) {
                            void* ptr38 = (void*)((int)ptr37 + 1);
                            char v70 = *(int*)((int)ptr30 + 8) & 0x7fffffff ? 0: 1;
                            ptr5 = ptr38;
                            if(!v70 || *(int*)((int)ptr30 + 4) != NULL || *(int*)ptr30 != NULL) {
                                goto loc_40D84D;
                            }
                            else {
                                *(void**)&v28 = NULL;
                                *(void**)&v30 = NULL;
                                v11 = (unsigned int)NULL;
                                v59 = v35;
                                v5 = v34;
                                goto loc_40DA4A;
                            }
                        }
                        else {
                        loc_40D84D:
                            void* ptr39 = NULL;
                            unsigned char* ptr40 = &v22;
                            void* ptr41 = (void*)0x5;
                            void* ptr42 = NULL;
                            ptr4 = (void*)0x5;
                            do {
                                if((int)ptr41 > 0) {
                                    short* ptr43 = (short*)((int)(int*)((int)ptr39 * 2) + (int)&v11);
                                    ptr10 = (short*)((int)ptr30 + 8);
                                    do {
                                        void* ptr44 = (void*)*ptr43;
                                        short* ptr45 = ptr10;
                                        void* ptr46 = ptr44;
                                        void* ptr47 = (void*)((unsigned int)*ptr45 * (int)ptr46);
                                        ptr9 = (void*)((unsigned int)*ptr45 * (int)ptr46);
                                        int* ptr48 = (int*)(*(int*)(ptr40 - 4) + (int)ptr47);
                                        void* ptr49 = *(unsigned int*)(ptr40 - 4) <= (unsigned int)ptr48 && (unsigned int)ptr48 >= (unsigned int)ptr9 ? NULL: (void*)0x1;
                                        *(unsigned int*)(ptr40 - 4) = ptr48;
                                        if(ptr49) {
                                            *(short*)ptr40 = *(short*)ptr40 + 1;
                                        }
                                        --ptr10;
                                        ++ptr43;
                                        ptr41 = (void*)((int)ptr41 - 1);
                                    }
                                    while((int)ptr41 > 0);
                                    ptr30 = ptr13;
                                    ptr41 = ptr4;
                                    ptr39 = ptr42;
                                }
                                ptr40 += 2;
                                ptr39 = (void*)((int)ptr39 + 1);
                                ptr41 = (void*)((int)ptr41 - 1);
                                ptr42 = ptr39;
                                ptr4 = ptr41;
                            }
                            while((int)ptr41 > 0);
                            void* ptr50 = ptr5;
                            void* ptr51 = *(void**)&v17;
                            int* ptr52 = (int*)((int)ptr50 + 0xc002);
                            int v71 = *(int*)&v25;
                            ptr13 = ptr51;
                            if(!((unsigned short)ptr52 ? 0: 1) && (unsigned short)ptr52 >= 0) {
                                while((int)ptr51 >= 0) {
                                    int v72 = *(int*)&v22;
                                    int v73 = v71 >>> 31;
                                    int v74 = v72;
                                    int v75 = v72 * 2;
                                    int v76 = v74 >>> 31;
                                    int v77 = v75 | v73;
                                    v71 *= 2;
                                    void* ptr53 = ptr13;
                                    *(int*)&v22 = v77;
                                    int* ptr54 = (int*)((int)ptr53 * 2);
                                    ptr39 = (void*)0xFFFF;
                                    *(int*)&v25 = v71;
                                    ptr51 = (void*)(v76 | (int)ptr54);
                                    ptr52 = (int*)((char*)ptr52 + 0xffff);
                                    ptr13 = ptr51;
                                    *(void**)&v17 = ptr51;
                                    if((((unsigned short)ptr52 ? 0: 1) || (unsigned short)ptr52 < 0)) {
                                        break;
                                    }
                                }
                                if(!((unsigned short)ptr52 ? 0: 1) && (unsigned short)ptr52 >= 0) {
                                    ptr39 = (unsigned int)*(short*)&v25 | ((unsigned int)(unsigned short)(int*)((int)ptr39 >>> 16) << 16);
                                }
                                else {
                                    goto loc_40D919;
                                }
                            }
                            else {
                            loc_40D919:
                                ptr39 = (void*)0xFFFF;
                                ptr52 = (int*)((char*)ptr52 + 0xffff);
                                if((unsigned short)ptr52 < 0) {
                                    void* ptr55 = ptr36;
                                    void* ptr56 = (void*)(0 - (unsigned short)ptr52);
                                    ptr4 = (void*)(0 - (unsigned short)ptr52);
                                    ptr52 = (int*)((int)ptr56 + (int)ptr52);
                                    do {
                                        if((v25 & 0x1)) {
                                            ptr55 = (void*)((int)ptr55 + 1);
                                        }
                                        int v78 = *(int*)&v22;
                                        ptr39 = (void*)((int)(int*)((int)ptr51 * 0x80000000) | (int)(void*)(v78 >>> 1));
                                        int v79 = v78 * 0x80000000;
                                        int v80 = v71 >>> 1;
                                        ptr51 = (void*)((int)ptr51 >>> 1);
                                        v71 = v79 | v80;
                                        ptr4 = (void*)((int)ptr4 - 1);
                                        v26 = ptr4 ? 0: 1;
                                        *(void**)&v17 = ptr51;
                                        *(void**)&v22 = ptr39;
                                        *(int*)&v25 = v71;
                                    }
                                    while(!v26);
                                    char v81 = ptr55 ? 0: 1;
                                    ptr13 = ptr51;
                                    if(!v81) {
                                        ptr39 = (unsigned int)((unsigned short)v71 | 0x1) | ((unsigned int)(unsigned short)(int*)((int)ptr39 >>> 16) << 16);
                                        *(short*)&v25 = (unsigned short)v71 | 0x1;
                                        v71 = *(int*)&v25;
                                    loc_40D98E:
                                        if((unsigned short)ptr39 > 0x8000 || (unsigned int)(v71 & 0x1ffff) == 0x18000) {
                                            unsigned int v82 = *(unsigned int*)&v24;
                                            char v83 = v82 == -1;
                                            if(v83) {
                                                unsigned int v84 = *(unsigned int*)&v19;
                                                *(void**)&v24 = NULL;
                                                if(v84 == -1) {
                                                    v84 = (unsigned int)v16 | ((unsigned int)0xffff << 16);
                                                    *(void**)&v19 = NULL;
                                                    if((unsigned short)v84 == 0xffff) {
                                                        v16 = 0x8000;
                                                        ptr52 = (int*)((char*)ptr52 + 1);
                                                    }
                                                    else {
                                                        v16 = (unsigned short)v84 + 1;
                                                    }
                                                }
                                                else {
                                                    *(int*)&v19 = v84 + 1;
                                                }
                                                ptr30 = *(void**)&v17;
                                            }
                                            else {
                                                *(int*)&v24 = v82 + 1;
                                                goto loc_40D9DE;
                                            }
                                        }
                                        else {
                                        loc_40D9DE:
                                            ptr30 = ptr13;
                                        }
                                        v59 = v35;
                                        if((unsigned short)ptr52 >= 0x7fff) {
                                            *(void**)&v30 = NULL;
                                            char v85 = v15 == 0;
                                            v11 = (unsigned int)NULL;
                                            *(int*)&v28 = v85 ? 0x7fff8000: 0xffff8000;
                                        }
                                        else {
                                            short v86 = v24;
                                            int* ptr57 = (int*)(*(int*)&v15 | (int)ptr52);
                                            v11 = v86;
                                            *(int*)&v31 = *(int*)&v22;
                                            *(void**)&v29 = ptr30;
                                            v27 = (unsigned short)ptr57;
                                        }
                                        v5 = v34;
                                        goto loc_40DA4A;
                                    }
                                }
                                ptr39 = (unsigned int)*(short*)&v25 | ((unsigned int)(unsigned short)(int*)((int)ptr39 >>> 16) << 16);
                            }
                            goto loc_40D98E;
                        }
                    }
                    else {
                        *(int*)&v28 = v15 != 0 ? 0xffff8000: 0x7fff8000;
                        *(void**)&v30 = NULL;
                        v11 = (unsigned int)NULL;
                        v59 = v35;
                        v5 = v34;
                        goto loc_40DA4A;
                    }
                }
                else {
                    v3 = (unsigned int)v11;
                    v0 = *(int*)&v31;
                    v1 = *(int*)&v29;
                    v2 = *(int*)&v28 >>> 16;
                }
            }
            else {
                v3 = 0;
                v2 = 0;
                v1 = 0;
                v0 = 0;
            }
        }
        else {
            v2 = 0;
            v1 = 0;
        loc_40DA91:
            v3 = 0;
            v0 = 0;
        }
    loc_40DA96:
        short* ptr58 = ptr3;
        *(ptr58 + 5) = (unsigned short)(v2 | v33);
        *ptr58 = (unsigned short)v3;
        *(int*)(ptr58 + 1) = v0;
        *(int*)(ptr58 + 3) = v1;
    }
    __security_check_cookie((uintptr_t)((int)&v13 ^ (int)ptr2));
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

unsigned int __wcsnicmp_ascii(unsigned int param0, unsigned short* param1, unsigned short param2) {
    int v0;
    int v1 = *(int*)&param2;
    unsigned int result = 0;
    if(v1) {
        unsigned short* ptr0 = param1;
        int v2 = v0;
        int v3 = 90;
        int* ptr1 = (int*)(param0 - (int)ptr0);
        *(int*)&param2 = 90;
        while(1) {
            unsigned short v4 = *(unsigned short*)((int)ptr0 + (int)ptr1);
            unsigned short v5 = *ptr0;
            if(v5 >= 65 && v5 <= 90) {
                v5 += 32;
            }
            ++ptr0;
            --v1;
            if(!v1 || !(v4 < 65 || v4 > 90 ? v4: v4 + 32) || (v4 < 65 || v4 > 90 ? v4: v4 + 32) != v5) {
                return (v4 < 65 || v4 > 90 ? (unsigned int)v4: (unsigned int)(v4 + 32)) - (unsigned int)v5;
            }
            v3 = 90;
        }
    }
    return result;
}

unsigned int _alldvrm(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    int v1 = 0;
    if(param1 >= 0x80000000) {
        v1 = 1;
        param1 = (unsigned int)(0 - param1) - (unsigned int)(param0 > 0);
        param0 = (unsigned int)(0 - param0);
    }
    unsigned int v2 = param3;
    if(v2 >= 0x80000000) {
        ++v1;
        v2 = (unsigned int)(0 - v2) - (unsigned int)(param2 > 0);
        param3 = v2;
        param2 = (unsigned int)(0 - param2);
    }
    if(!v2) {
        v0 = (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param1 % param2) << 32)) / param2;
    }
    else {
        unsigned int v3 = v2;
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
        unsigned int v8 = (unsigned int)((unsigned long long)v6 | ((unsigned long long)v5 << 32)) / v4 * param3;
        unsigned int v9 = v0 * param2;
        int v10 = (unsigned int)(((unsigned long long)v0 * (unsigned long long)param2) >>> 32L);
        unsigned int v11 = v8 + v10;
        if(!__carry__(v8, v10)) {
            char v12 = v11 < param1;
            if((!v12 && v11 != param1) || (!v12 && v9 > param0)) {
                goto loc_40F1D8;
            }
        }
        else {
        loc_40F1D8:
            --v0;
        }
    }
    unsigned int result = v0;
    if(!(v1 - 1)) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

int _allmul(int param0, int param1, int param2, int param3) {
    return param0 * param2;
}

int _alloc_osfhnd(int param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    int v7;
    int v8;
    void* ptr0;
    int v9;
    void* ptr1 = (void*)&loc_409A61;
    int v10 = SEH_prolog4(&gvar_4178F8, 24);
    int v11 = -1;
    char v12 = 0;
    char v13 = 1;
    char v14 = 1;
    char v15 = 0;
    char v16 = 0;
    *(int*)(v9 - 28) = -1;
    *(int*)(v9 - 36) = 0;
    char v17 = *(int*)(v9 - 36) ? 0: 1;
    char v18 = *(int*)(v9 - 36) < 0;
    char v19 = __parity__((unsigned char)*(int*)(v9 - 36));
    char v20 = 0;
    char v21 = 0;
    int v22 = mtinitlocknum(11);
    void* ptr2 = ptr1;
    char v23 = v22 ? 0: 1;
    char v24 = v22 < 0;
    char v25 = __parity__((unsigned char)v22);
    char v26 = 0;
    char v27 = 0;
    if(v23) {
        int v28 = -1;
        v5 = 0;
        v4 = 1;
        v3 = 1;
        v2 = 0;
        v1 = 0;
    }
    else {
        void* ptr3 = (void*)&loc_409A85;
        int v29 = lock(11);
        void* ptr4 = ptr1;
        *(int*)(v9 - 4) = 0;  // __try{ (see __finally:409BF2h)
        unsigned int v30 = 0;
        char v31 = 1;
        char v32 = 0;
        char v33 = 1;
        char v34 = 0;
        char v35 = 0;
        while(1) {
            *(unsigned int*)(v9 - 40) = v30;
            v5 = v30 == 64;
            v4 = (int)v30 < 64;
            v3 = __parity__((unsigned char)v30 - 64);
            v1 = v30 < 64;
            v2 = (((v30 - 64) ^ v30) & (v30 ^ 0x40)) < 0;
            char v36 = (((v30 - 64) ^ (v30 ^ 0x40)) >>> 4) & 0x1;
            if(v4 != v2) {
                int* ptr5 = *(unsigned int*)(v30 * 4 + (int)&gvar_4191D0);
                char v37 = ptr5 ? 0: 1;
                char v38 = (int)ptr5 < 0;
                char v39 = __parity__((unsigned char)ptr5);
                char v40 = 0;
                char v41 = 0;
                if(!v37) {
                    while(1) {
                        *(unsigned int*)(v9 - 32) = ptr5;
                        unsigned int v42 = *(unsigned int*)(v30 * 4 + (int)&gvar_4191D0);
                        unsigned int v43 = v42 + 0x800;
                        char v44 = v43 == ptr5;
                        char v45 = (int)v43 > (int)ptr5;
                        char v46 = __parity__((unsigned char)ptr5 - (unsigned char)v43);
                        char v47 = v43 > (unsigned int)ptr5;
                        char v48 = (int)(int*)((int)(int*)((int)(int*)((int)ptr5 - v43) ^ (int)ptr5) & (int)(int*)(v43 ^ (int)ptr5)) < 0;
                        char v49 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr5 - v43) ^ (int)(int*)(v43 ^ (int)ptr5)) >>> 4) & 0x1);
                        if(!v47) {
                            break;
                        }
                        else {
                            char v50 = *(char*)(ptr5 + 1) & 0x1 ? 0: 1;
                            char v51 = (*(char*)(ptr5 + 1) & 0x1) < 0;
                            char v52 = __parity__(*(char*)(ptr5 + 1) & 0x1);
                            char v53 = 0;
                            char v54 = 0;
                            if(v50) {
                                char v55 = *(ptr5 + 2) ? 0: 1;
                                char v56 = *(ptr5 + 2) < 0;
                                char v57 = __parity__((unsigned char)*(ptr5 + 2));
                                char v58 = *(unsigned int*)(ptr5 + 2) < 0;
                                char v59 = 0;
                                char v60 = 0;
                                if(v55) {
                                    ptr3 = (void*)&loc_409AD1;
                                    int v61 = lock(10);
                                    void* ptr6 = ptr1;
                                    *(int*)(v9 - 4) = 1;  // __try{ (see __finally:409B24h)
                                    char v62 = *(ptr5 + 2) ? 0: 1;
                                    char v63 = *(ptr5 + 2) < 0;
                                    char v64 = __parity__((unsigned char)*(ptr5 + 2));
                                    char v65 = *(unsigned int*)(ptr5 + 2) < 0;
                                    char v66 = 0;
                                    char v67 = 0;
                                    if(v62) {
                                        int* ptr7 = ptr5 + 3;
                                        int v68 = _crtInitializeCriticalSectionEx((int)ptr7, 4000, 0);
                                        int* ptr8 = &ptr0;
                                        char v69 = &v6 == 8;
                                        char v70 = (int)&v8 < 0;
                                        char v71 = __parity__((unsigned char)&v6 - 8);
                                        char v72 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v8) >>> 4) & 0x1);
                                        char v73 = (unsigned int)&ptr0 >= 0xfffffff4;
                                        char v74 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0xc)) < 0;
                                        int v75 = *(ptr5 + 2);
                                        *(ptr5 + 2) = *(ptr5 + 2) + 1;
                                        char v76 = *(ptr5 + 2) ? 0: 1;
                                        char v77 = *(ptr5 + 2) < 0;
                                        char v78 = __parity__((unsigned char)*(ptr5 + 2));
                                        char v79 = (((v75 ^ 0x1) ^ *(ptr5 + 2)) >>> 4) & 0x1;
                                        char v80 = ((*(ptr5 + 2) ^ v75) & ~(v75 ^ 0x1)) < 0;
                                    }
                                    *(int*)(v9 - 4) = 0;  // } (starts at 409AD2h)
                                    char v81 = *(int*)(v9 - 4) ? 0: 1;  // } (starts at 409AD2h)
                                    char v82 = *(int*)(v9 - 4) < 0;  // } (starts at 409AD2h)
                                    char v83 = __parity__((unsigned char)*(int*)(v9 - 4));  // } (starts at 409AD2h)
                                    char v84 = 0;  // } (starts at 409AD2h)
                                    char v85 = 0;  // } (starts at 409AD2h)
                                    ptr1 = (void*)&loc_409AFE;
                                    int v86 = sub_409B2D();
                                }
                                int v87 = *(int*)(v9 - 36);
                                char v88 = v87 ? 0: 1;
                                char v89 = v87 < 0;
                                char v90 = __parity__((unsigned char)v87);
                                char v91 = 0;
                                char v92 = 0;
                                if(v88) {
                                    LPCRITICAL_SECTION lpCriticalSection = (LPCRITICAL_SECTION)(ptr5 + 3);
                                    EnterCriticalSection(lpCriticalSection);
                                    char v93 = *(char*)(ptr5 + 1) & 0x1 ? 0: 1;
                                    char v94 = (*(char*)(ptr5 + 1) & 0x1) < 0;
                                    char v95 = __parity__(*(char*)(ptr5 + 1) & 0x1);
                                    char v96 = 0;
                                    char v97 = 0;
                                    if(!v93) {
                                        LPCRITICAL_SECTION lpCriticalSection1 = (LPCRITICAL_SECTION)(ptr5 + 3);
                                        LeaveCriticalSection(lpCriticalSection1);
                                    }
                                    else {
                                        int v98 = *(int*)(v9 - 36);
                                        char v99 = v98 ? 0: 1;
                                        char v100 = v98 < 0;
                                        char v101 = __parity__((unsigned char)v98);
                                        char v102 = 0;
                                        char v103 = 0;
                                        if(v99) {
                                            *(char*)(ptr5 + 1) = 1;
                                            *ptr5 = -1;
                                            char v104 = *ptr5 ? 0: 1;
                                            char v105 = *ptr5 < 0;
                                            char v106 = __parity__((unsigned char)*ptr5);
                                            char v107 = 0;
                                            char v108 = 0;
                                            int* ptr9 = ptr5;
                                            int* ptr10 = ptr5;
                                            int* ptr11 = (int*)((int)ptr9 - *(unsigned int*)(v30 * 4 + (int)&gvar_4191D0));
                                            char v109 = ptr11 ? 0: 1;
                                            char v110 = (int)ptr11 < 0;
                                            char v111 = __parity__((unsigned char)ptr11);
                                            char v112 = (int*)((int)(int*)((int)(int*)((int)(int*)(*(unsigned int*)(v30 * 4 + (int)&gvar_4191D0) ^ (int)ptr10) ^ (int)ptr11) >>> 4) & 0x1);
                                            char v113 = *(unsigned int*)(v30 * 4 + (int)&gvar_4191D0) > (unsigned int)ptr10;
                                            char v114 = (int)(int*)((int)(int*)(*(unsigned int*)(v30 * 4 + (int)&gvar_4191D0) ^ (int)ptr10) & (int)(int*)((int)ptr11 ^ (int)ptr10)) < 0;
                                            int* ptr12 = ptr11;
                                            int* ptr13 = (int*)((int)ptr11 >> 6);
                                            char v115 = (int*)((int)(int*)((int)ptr12 >>> 5) & 0x1);
                                            char v116 = v114;
                                            char v117 = ptr13 ? 0: 1;
                                            char v118 = (int)ptr13 < 0;
                                            char v119 = __parity__((unsigned char)ptr13);
                                            unsigned int v120 = v30;
                                            unsigned int v121 = v30;
                                            int v122 = (int)(v120 * 32);
                                            char v123 = (v121 >>> 27) & 0x1;
                                            char v124 = v116;
                                            char v125 = v122 ? 0: 1;
                                            char v126 = v122 < 0;
                                            char v127 = __parity__((unsigned char)v122);
                                            int* ptr14 = ptr13;
                                            v11 = v122 + (int)ptr13;
                                            char v128 = v11 ? 0: 1;
                                            char v129 = v11 < 0;
                                            char v130 = __parity__((unsigned char)v11);
                                            char v131 = (int*)((int)(int*)((int)(int*)((int)(int*)(v122 ^ (int)ptr14) ^ v11) >>> 4) & 0x1);
                                            char v132 = __carry__(v122, (int)ptr14);
                                            char v133 = (int)(int*)((int)(int*)(v11 ^ (int)ptr14) & (int*)~(int)(int*)(v122 ^ (int)ptr14)) < 0;
                                            *(int*)(v9 - 28) = v11;
                                            break;
                                        }
                                    }
                                }
                            }
                            int* ptr15 = ptr5;
                            ptr5 += 16;
                            char v134 = ptr5 ? 0: 1;
                            char v135 = (int)ptr5 < 0;
                            char v136 = __parity__((unsigned char)ptr5);
                            char v137 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr15 ^ 0x40) ^ (int)ptr5) >>> 4) & 0x1);
                            char v138 = (unsigned int)ptr15 >= 0xffffffc0;
                            char v139 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr15) & (int*)~(int)(int*)((int)ptr15 ^ 0x40)) < 0;
                        }
                    }
                    v5 = v11 == -1;
                    v4 = v11 < -1;
                    v3 = __parity__((unsigned char)v11 - 0xFF);
                    v1 = (unsigned int)v11 < 0xffffffff;
                    v2 = (((v11 + 1) ^ v11) & ~v11) < 0;
                    v36 = (((v11 + 1) ^ ~v11) >>> 4) & 0x1;
                    if(v5) {
                        unsigned int v140 = v30;
                        ++v30;
                        char v141 = v30 ? 0: 1;
                        char v142 = v30 >= 0x80000000;
                        char v143 = __parity__((unsigned char)v30);
                        char v144 = (((v140 ^ 0x1) ^ v30) >>> 4) & 0x1;
                        char v145 = (int)((v30 ^ v140) & ~(v140 ^ 0x1)) < 0;
                        continue;
                    }
                }
                else {
                    int* ptr16 = (int*)sub_408F5B(32, 64);
                    void* ptr17 = ptr3;
                    void* ptr18 = ptr1;
                    int* ptr19 = ptr16;
                    *(unsigned int*)(v9 - 32) = ptr16;
                    v5 = ptr19 ? 0: 1;
                    v4 = (int)ptr19 < 0;
                    v3 = __parity__((unsigned char)ptr19);
                    v2 = 0;
                    v1 = 0;
                    if(!v5) {
                        *(unsigned int*)(v30 * 4 + (int)&gvar_4191D0) = ptr19;
                        unsigned int v146 = gvar_419FF8;
                        gvar_419FF8 += 32;
                        char v147 = gvar_419FF8 ? 0: 1;
                        char v148 = gvar_419FF8 >= 0x80000000;
                        char v149 = __parity__((unsigned char)gvar_419FF8);
                        char v150 = (((v146 ^ 0x20) ^ gvar_419FF8) >>> 4) & 0x1;
                        char v151 = v146 >= 0xffffffe0;
                        char v152 = (int)((gvar_419FF8 ^ v146) & ~(v146 ^ 0x20)) < 0;
                        while(1) {
                            unsigned int v153 = *(unsigned int*)(v30 * 4 + (int)&gvar_4191D0);
                            unsigned int v154 = v153 + 0x800;
                            char v155 = v154 == ptr19;
                            char v156 = (int)v154 > (int)ptr19;
                            char v157 = __parity__((unsigned char)ptr19 - (unsigned char)v154);
                            char v158 = v154 > (unsigned int)ptr19;
                            v0 = (int)(int*)((int)(int*)((int)(int*)((int)ptr19 - v154) ^ (int)ptr19) & (int)(int*)(v154 ^ (int)ptr19)) < 0;
                            v36 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr19 - v154) ^ (int)(int*)(v154 ^ (int)ptr19)) >>> 4) & 0x1);
                            if(!v158) {
                                break;
                            }
                            else {
                                *(short*)(ptr19 + 1) = 0xa00;
                                *ptr19 = -1;
                                *(ptr19 + 2) = 0;
                                int* ptr20 = ptr19;
                                ptr19 += 16;
                                char v159 = ptr19 ? 0: 1;
                                char v160 = (int)ptr19 < 0;
                                char v161 = __parity__((unsigned char)ptr19);
                                char v162 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr20 ^ 0x40) ^ (int)ptr19) >>> 4) & 0x1);
                                char v163 = (unsigned int)ptr20 >= 0xffffffc0;
                                char v164 = (int)(int*)((int)(int*)((int)ptr19 ^ (int)ptr20) & (int*)~(int)(int*)((int)ptr20 ^ 0x40)) < 0;
                                *(unsigned int*)(v9 - 32) = ptr19;
                            }
                        }
                        unsigned int v165 = v30;
                        unsigned int v166 = v30;
                        v11 = (int)(v165 * 32);
                        char v167 = (v166 >>> 27) & 0x1;
                        char v168 = v0;
                        char v169 = v11 ? 0: 1;
                        char v170 = v11 < 0;
                        char v171 = __parity__((unsigned char)v11);
                        *(int*)(v9 - 28) = v11;
                        int v172 = v11;
                        int v173 = v11;
                        int v174 = v172 >> 5;
                        char v175 = (v173 >>> 4) & 0x1;
                        char v176 = v168;
                        char v177 = v174 ? 0: 1;
                        char v178 = v174 < 0;
                        char v179 = __parity__((unsigned char)v174);
                        int v180 = v11;
                        int v181 = v180 & 0x1f;
                        char v182 = v181 ? 0: 1;
                        char v183 = v181 < 0;
                        char v184 = __parity__((unsigned char)v181);
                        char v185 = 0;
                        char v186 = 0;
                        int v187 = v181;
                        int v188 = v181 * 64;
                        char v189 = (v187 >>> 26) & 0x1;
                        char v190 = 0;
                        char v191 = v188 ? 0: 1;
                        char v192 = v188 < 0;
                        char v193 = __parity__((unsigned char)v188);
                        unsigned int v194 = *(unsigned int*)(v174 * 4 + (int)&gvar_4191D0);
                        *(char*)(v194 + v188 + 4) = 1;
                        int v195 = __lock_fhandle(v11);
                        void* ptr21 = ptr1;
                        v5 = v195 ? 0: 1;
                        v4 = v195 < 0;
                        v3 = __parity__((unsigned char)v195);
                        v2 = 0;
                        v1 = 0;
                        if(v5) {
                            v11 = -1;
                            v5 = 0;
                            v4 = 1;
                            v3 = 1;
                            v2 = 0;
                            v1 = 0;
                            *(int*)(v9 - 28) = -1;
                        }
                    }
                }
            }
            break;
        }
        *(int*)(v9 - 4) = -2;
        int v196 = sub_409BF5();
        int v197 = v11;
    }
    EH_epilog3(v8, v7, v6, param0);
    int v198 = v8;
    int* ptr22 = &v7;
    jump v198;
}

int _alloca_probe_16(int param0) {
    return _chkstk(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int _atodbl_l(_CRT_DOUBLE* _Result, char* _String, _locale_t _Locale) {
    int v0;
    unsigned char v1;
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
    int v10 = unk_lib_sub8(&v4, (int*)_Result);
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

int _aullshr(int param0, int param1) {
    int v0;
    if((unsigned char)param0 < 64) {
        return (unsigned char)param0 >= 32 ? param1 >>> (((unsigned int)((unsigned char)param0 & 0x1f) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8)) & 0x1f): (unsigned int)(((unsigned long long)v0 | ((unsigned long long)param1 << 32)) >>> (param0 & 0x1f));
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
void _c_exit() {
    doexit(0, 1, 1);
}

int call_reportfault(unsigned int param0, int param1, int param2) {
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
    int v14;
    int result;
    int v15;
    int v16;
    int v17;
    short v18;
    short v19;
    int v20;
    int v21;
    short v22;
    short v23;
    int v24 = v15;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v24);
    if(param0 != -1) {
        crt_debugger_hook();
    }
    memset2((int)&v0, 0, 76);
    int* ptr1 = &v13;
    int* ptr2 = &v14;
    int* ptr3 = &v14;
    int v25 = v16;
    int v26 = v21;
    int v27 = v17;
    short v28 = v18;
    short v29 = v11;
    short v30 = v19;
    short v31 = v22;
    short v32 = v23;
    short v33 = v12;
    int v34 = (unsigned int)((unsigned int)&v20 >= 0xfffffff4) | ((unsigned int)1 << 1) | ((unsigned int)__parity__((unsigned char)&v2 - 48) << 2) | ((unsigned int)0 << 3) | ((unsigned int)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v20 ^ 0xc) ^ (int)&v1) >>> 4) & 0x1) << 4) | ((unsigned int)0 << 5) | ((unsigned int)(&v2 == 0x330) << 6) | ((unsigned int)((int)&v1 < 0) << 7) | ((unsigned int)v3 << 8) | ((unsigned int)v4 << 9) | ((unsigned int)0 << 10) | ((unsigned int)((int)(int*)((int)(int*)((int)&v1 ^ (int)&v20) & (int*)~(int)(int*)((int)&v20 ^ 0xc)) < 0) << 11) | ((unsigned int)v5 << 12) | ((unsigned int)v6 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v7 << 18) | ((unsigned int)v9 << 19) | ((unsigned int)v8 << 20) | ((unsigned int)v10 << 21) | ((unsigned int)0 << 22);
    int v35 = v2;
    int* ptr4 = &v2;
    v14 = 0x10001;
    int v36 = v24;
    v13 = param1;
    v0 = param2;
    int v37 = v2;
    BOOL v38 = IsDebuggerPresent();
    LONG v39 = _crtUnhandledException(&ptr1);
    if(!v39 && !v38 && param0 != -1) {
        crt_debugger_hook();
    }
    _security_check_cookie((uintptr_t)((int)&v24 ^ (int)ptr0));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void _cexit() {
    doexit(0, 0, 1);
}

int _cfltcvt(int* param0, char* param1, unsigned int param2, unsigned int param3, int param4, int param5) {
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

int _cfltcvt_l(int* param0, char* param1, unsigned int param2, unsigned int param3, int param4, int param5, void* param6) {
    switch(param3) {
        case 65: 
        case 97: {
            return _cftoa_l((int)param0, (int)param1, param2, param4, (unsigned int)param5, (int)param6);
        }
        case 69: 
        case 101: {
            return _cftoe_l(param0, param1, param2, param4, param5, (int)param6);
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
int _cftoa_l(int param0, int param1, unsigned int param2, int param3, unsigned int param4, int param5) {
    char* ptr0;
    int v0;
    int result;
    int* ptr1;
    unsigned char v1;
    int v2;
    char v3;
    unsigned char v4;
    int v5;
    unsigned int v6;
    unsigned int v7;
    int v8 = v5;
    *(int*)&v1 = 48;
    unsigned int v9 = *(unsigned int*)&v1;
    *(int*)&v1 = param5;
    unsigned int v10 = v9;
    unsigned int v11 = 0x3ff;
    unsigned int v12 = v10;
    *(int*)&v3 = &loc_40DBB8;
    /*BAD_CALL!*/ _LocaleUpdate::_LocaleUpdate((int)&v2, *(int*)&v1);
    int v13 = param3;
    char v14 = v13 < 0;
    if(v14) {
        v13 = 0;
    }
    int v15 = param1;
    char v16 = v15 ? 0: 1;
    if(!v16) {
        unsigned int v17 = param2;
        char v18 = v17 ? 0: 1;
        if(v18) {
            goto loc_40DBCF;
        }
        else {
            unsigned int v19 = (unsigned int)(v13 + 11);
            *(char*)v15 = 0;
            if(v19 >= v17) {
                *(int*)&v1 = &loc_40DBE6;
                ptr1 = /*BAD_CALL!*/ _errno();
                *(int*)&v1 = 34;
                goto loc_40DBE8;
            }
            else {
                int v20 = param0;
                int v21 = *(int*)v20;
                int v22 = *(int*)(v20 + 4);
                int v23 = v21;
                if((unsigned int)((v22 >>> 20) & 0x7ff) == 0x7ff) {
                    *(int*)&v1 = 0;
                    *(int*)&v3 = v13;
                    int v24 = v15 + 2;
                    result = _cftoe(v20, v24, v17 != -1 ? (int)(v17 - 2): -1, *(int*)&v3, *(int*)&v1);
                    if(result) {
                        *(char*)v15 = 0;
                    }
                    else {
                        if(*(char*)v24 == 45) {
                            *(char*)v15 = 45;
                            ++v15;
                        }
                        unsigned int v25 = param4;
                        *(int*)&v1 = 48;
                        *(char*)v15 = (unsigned char)*(int*)&v1;
                        *(char*)(v15 + 1) = v25 ? 88: 120;
                        *(int*)&v1 = 101;
                        *(int**)&v3 = (int*)(v15 + 2);
                        unsigned char* ptr2 = sub_40EDF0(*(unsigned char**)&v3, 101);
                        if(ptr2) {
                            ptr2[0] = v25 ? 80: 112;
                            ptr2[3] = 0;
                        }
                        result = 0;
                    }
                }
                else {
                    if((v22 & 0x80000000)) {
                        *(char*)v15 = 45;
                        ++v15;
                    }
                    char v26 = param4 ? 0: 1;
                    unsigned int v27 = param4;
                    *(int*)&v1 = 48;
                    *(char*)v15 = (unsigned char)*(int*)&v1;
                    *(char*)(v15 + 1) = v26 ? 120: 88;
                    int v28 = v27 > 0 ? 7: 39;
                    char v29 = *(int*)(v20 + 4) & 0x7ff00000 ? 0: 1;
                    int v30 = v28;
                    if(v29) {
                        *(int*)&v1 = 48;
                        *(char*)(v15 + 2) = (unsigned char)*(int*)&v1;
                        v0 = v15 + 3;
                        v11 = !((*(int*)(v20 + 4) & 0xfffff) | *(int*)v20) ? 0: 1022;
                    }
                    else {
                        *(char*)(v15 + 2) = 49;
                        v0 = v15 + 3;
                    }
                    int i = v0;
                    int v31 = v0 + 1;
                    int v32 = i;
                    *(char*)i = !v13 ? 0: ***(unsigned int*)(v2 + 132);
                    unsigned int v33 = (unsigned int)(*(int*)(v20 + 4) & 0xfffff);
                    unsigned int v34 = (unsigned int)(*(int*)(v20 + 4) & 0xfffff);
                    if(v33 != 0 || (*(unsigned int*)v20 >= 0 && !(*(int*)v20 ? 0: 1))) {
                        param3 = 0;
                        i = 0xf0000;
                        unsigned int v35 = v12;
                        param1 = 0xf0000;
                        while(v13 > 0) {
                            int v36 = (int)(int*)(*(int*)(v20 + 4) & i) & 0xfffff;
                            *(int*)&v1 = &loc_40DD5E;
                            int v37 = /*BAD_CALL!*/ _aullshr((int)(unsigned short)v12, v36);
                            short v38 = (unsigned short)v37;
                            *(int*)&v1 = 48;
                            unsigned int v39 = (unsigned int)((unsigned short)*(int*)&v1 + v38);
                            if(v39 > 57) {
                                v39 += v28;
                            }
                            int v40 = param1;
                            v20 = param0;
                            *(char*)v31 = (unsigned char)v39;
                            ++v31;
                            param3 = (unsigned int)((unsigned long long)((param3 >>> 4) & 0xFFFFFFF) | ((unsigned long long)v40 << 28) | ((unsigned long long)0 << 60));
                            i = v40 >>> 4;
                            v35 = v12 - 4;
                            --v13;
                            param1 = i;
                            v12 = v35;
                            if((unsigned short)v35 < 0) {
                                break;
                            }
                        }
                        if((unsigned short)v35 >= 0) {
                            int v41 = (int)(int*)(*(int*)(v20 + 4) & i) & 0xfffff;
                            *(int*)&v1 = &loc_40DDB6;
                            int v42 = /*BAD_CALL!*/ _aullshr((int)(unsigned short)v12, v41);
                            unsigned short v43 = (unsigned short)v42;
                            if(v43 > 8) {
                                *(int*)&v1 = 48;
                                char* ptr3 = (char*)(v31 - 1);
                                int v44 = *(int*)&v1;
                                for(i = (unsigned int)*ptr3 | ((unsigned int)((i >>> 8) & 0xffffff) << 8); *ptr3 == 102 || *ptr3 == 70; i = (unsigned int)*ptr3 | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
                                    *ptr3 = (unsigned char)v44;
                                    --ptr3;
                                }
                                char v45 = (unsigned char)v30;
                                if(ptr3 != v32) {
                                    i = (unsigned int)*ptr3 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                                    if(*ptr3 == 57) {
                                        *ptr3 = v45 + 58;
                                    }
                                    else {
                                        i = (unsigned int)((unsigned char)i + 1) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                                        *ptr3 = (unsigned char)i;
                                    }
                                }
                                else {
                                    *(ptr3 - 1) = *(ptr3 - 1) + 1;
                                }
                            }
                        }
                    }
                    if(v13 > 0) {
                        *(int*)&v1 = v13;
                        *(int*)&v3 = 48;
                        memset2(v31, '0', *(int*)&v1);
                        v31 += v13;
                    }
                    int v46 = v32;
                    if(!*(char*)v46) {
                        v31 = v46;
                    }
                    int v47 = param0;
                    *(char*)v31 = param4 ? 80: 112;
                    int v48 = *(int*)(v47 + 4);
                    *(int*)&v1 = &loc_40DE2E;
                    int v49 = /*BAD_CALL!*/ _aullshr((unsigned int)52 | ((unsigned int)((i >>> 8) & 0xffffff) << 8), v48);
                    unsigned int v50 = (unsigned int)(v49 & 0x7ff);
                    unsigned int v51 = v50 - v11;
                    unsigned int v52 = v50 < v11 ? 0xffffffff: 0;
                    if(v52 < 0x80000000 && (v52 != 0 || v51 >= 0)) {
                        *(char*)(v31 + 1) = 43;
                        ptr0 = (char*)(v31 + 2);
                    }
                    else {
                        *(char*)(v31 + 1) = 45;
                        ptr0 = (char*)(v31 + 2);
                        unsigned int v53 = v51;
                        v51 = (unsigned int)(0 - v51);
                        v52 = (unsigned int)(0 - (unsigned int)((unsigned int)(v53 > 0) + v52));
                    }
                    *ptr0 = 48;
                    char* ptr4 = ptr0;
                    char v54 = v52 == 0;
                    if(v52 < 0x80000000) {
                        if(v54 == 0 || v51 >= 1000) {
                            *(int*)&v1 = 0;
                            *(int*)&v3 = 1000;
                            unsigned int v55 = /*BAD_CALL!*/ _alldvrm(v51, v52, *(unsigned int*)&v3, *(unsigned int*)&v1);
                            char v56 = (unsigned char)v55;
                            v34 = v7;
                            *ptr0 = v56 + 48;
                            ++ptr0;
                            if(ptr0 != ptr4) {
                                goto loc_40DE95;
                            }
                            else {
                                goto loc_40DE8C;
                            }
                        }
                        else {
                        loc_40DE8C:
                            if(v52 < 0x80000000 && (v52 != 0 || v51 >= 100)) {
                            loc_40DE95:
                                *(int*)&v1 = 0;
                                *(int*)&v3 = 100;
                                unsigned int v57 = /*BAD_CALL!*/ _alldvrm(v51, v52, *(unsigned int*)&v3, *(unsigned int*)&v1);
                                char v58 = (unsigned char)v57;
                                v34 = v7;
                                *ptr0 = v58 + 48;
                                ++ptr0;
                            }
                        }
                    }
                    if(ptr0 != ptr4 || (v52 < 0x80000000 && (v52 != 0 || v51 >= 10))) {
                        *(int*)&v1 = 0;
                        *(int*)&v3 = 10;
                        unsigned int v59 = /*BAD_CALL!*/ _alldvrm(v51, v52, *(unsigned int*)&v3, *(unsigned int*)&v1);
                        char v60 = (unsigned char)v59;
                        *ptr0 = v60 + 48;
                        ++ptr0;
                        v34 = v52;
                    }
                    result = 0;
                    *ptr0 = (unsigned char)v51 + 48;
                    *(ptr0 + 1) = 0;
                }
            }
        }
    }
    else {
    loc_40DBCF:
        *(int*)&v1 = &loc_40DBD4;
        ptr1 = /*BAD_CALL!*/ _errno();
        *(int*)&v1 = 22;
    loc_40DBE8:
        result = *(int*)&v1;
        ptr1[0] = *(int*)&v1;
        *(int*)&v1 = &loc_40DBF0;
        /*BAD_CALL!*/ _invalid_parameter_noinfo();
    }
    if(v4) {
        *(int*)(v6 + 112) = *(int*)(v6 + 112) & 0xfffffffd;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _cftoe(int param0, int param1, int param2, int param3, int param4) {
    return _cftoe_l(param0, param1, param2, param3, param4, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
void* _cftoe2_l(char* param0, unsigned int param1, int param2, unsigned int param3, unsigned int* param4, int param5, int param6) {
    unsigned char* ptr0;
    void* ptr1;
    int* ptr2;
    void* result;
    int* ptr3;
    int* ptr4;
    unsigned int v0;
    unsigned char v1;
    unsigned char* ptr5;
    char* ptr6;
    int v2;
    void* ptr7;
    int* ptr8 = &ptr4;
    int* ptr9 = &ptr4;
    char v3 = &ptr3 == 20;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&ptr3 - 20);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr4 ^ 0x10) ^ (int)&v2) >>> 4) & 0x1);
    char v7 = (unsigned int)&ptr4 < 16;
    char v8 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&v2) & (int)(int*)((int)&ptr4 ^ 0x10)) < 0;
    int* ptr10 = &v2;
    char* ptr11 = ptr6;
    int v9 = _LocaleUpdate::_LocaleUpdate((int)&v2, param6);
    char* ptr12 = param0;
    char v10 = ptr12 ? 0: 1;
    char v11 = (int)ptr12 < 0;
    char v12 = __parity__((unsigned char)ptr12);
    char v13 = 0;
    char v14 = 0;
    if(!v10) {
        char v15 = param1 ? 0: 1;
        char v16 = param1 >= 0x80000000;
        char v17 = __parity__((unsigned char)param1);
        char v18 = param1 < 0;
        char v19 = 0;
        char v20 = 0;
        if((v18 || v15)) {
            goto loc_40DF2D;
        }
        else {
            int v21 = param2;
            result = NULL;
            char v22 = 1;
            char v23 = 0;
            char v24 = 1;
            char v25 = 0;
            char v26 = 0;
            int v27 = v21;
            char v28 = v21 ? 0: 1;
            char v29 = v21 < 0;
            char v30 = __parity__((unsigned char)v21);
            char v31 = 0;
            char v32 = 0;
            if((v28 || v29 != 0)) {
                v27 = 0;
            }
            unsigned int v33 = (unsigned int)(v27 + 9);
            char v34 = v33 == param1;
            char v35 = (int)v33 > (int)param1;
            char v36 = __parity__((unsigned char)param1 - (unsigned char)v33);
            char v37 = v33 > param1;
            char v38 = (int)(((param1 - v33) ^ param1) & (v33 ^ param1)) < 0;
            char v39 = (((param1 - v33) ^ (v33 ^ param1)) >>> 4) & 0x1;
            if((v37 || v34)) {
                ptr2 = _errno();
                ptr1 = (void*)0x22;
                goto loc_40DF52;
            }
            else {
                char v40 = (unsigned char)param5 ? 0: 1;
                char v41 = (unsigned char)param5 < 0;
                char v42 = __parity__((unsigned char)param5);
                char v43 = (unsigned char)param5 < 0;
                char v44 = 0;
                char v45 = 0;
                if(!v40) {
                    unsigned int* ptr13 = param4;
                    char v46 = v21 ? 0: 1;
                    char v47 = v21 < 0;
                    char v48 = __parity__((unsigned char)v21);
                    char v49 = 0;
                    char v50 = 0;
                    int v51 = v46 || v47 != 0 ? 0: 1;
                    ptr1 = (void*)(v46 || v47 != 0 ? 0: 1);
                    char v52 = *ptr13 == 45;
                    char v53 = *ptr13 < 45;
                    char v54 = __parity__((unsigned char)*ptr13 - 45);
                    char v55 = *ptr13 < 45;
                    char v56 = (((*ptr13 - 45) ^ *ptr13) & (*ptr13 ^ 0x2d)) < 0;
                    char v57 = (((*ptr13 - 45) ^ (*ptr13 ^ 0x2d)) >>> 4) & 0x1;
                    int* ptr14 = v52 ? (int*)0x1: NULL;
                    ptr9 = v52 ? (int*)0x1: NULL;
                    char* _Str = (char*)((int)ptr14 + (int)ptr12);
                    char v58 = _Str ? 0: 1;
                    char v59 = (int)_Str < 0;
                    char v60 = __parity__((unsigned char)_Str);
                    char v61 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr12 ^ (int)ptr9) ^ (int)_Str) >>> 4) & 0x1);
                    char v62 = (char*)__carry__((int)ptr12, (int)ptr9);
                    char v63 = (int)(int*)((int)(int*)((int)_Str ^ (int)ptr9) & (int*)~(int)(int*)((int)ptr12 ^ (int)ptr9)) < 0;
                    unsigned char* ptr15 = shift(_Str, v51);
                    v21 = param2;
                    unsigned int v64 = v0;
                    void* ptr16 = ptr1;
                }
                unsigned int* ptr17 = param4;
                char* ptr18 = ptr12;
                char v65 = *ptr17 == 45;
                char v66 = *ptr17 < 45;
                char v67 = __parity__((unsigned char)*ptr17 - 45);
                char v68 = *ptr17 < 45;
                char v69 = (((*ptr17 - 45) ^ *ptr17) & (*ptr17 ^ 0x2d)) < 0;
                char v70 = (((*ptr17 - 45) ^ (*ptr17 ^ 0x2d)) >>> 4) & 0x1;
                if(v65) {
                    *ptr12 = 45;
                    ptr18 = ptr12 + 1;
                }
                char v71 = v21 ? 0: 1;
                char v72 = v21 < 0;
                char v73 = __parity__((unsigned char)v21);
                char v74 = 0;
                char v75 = 0;
                if(!v71 && v72 == 0) {
                    *ptr18 = *(ptr18 + 1);
                    ptr9 = (int*)ptr18;
                    ++ptr18;
                    char v76 = ptr18 ? 0: 1;
                    char v77 = (int)ptr18 < 0;
                    char v78 = __parity__((unsigned char)ptr18);
                    char v79 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr9 ^ 0x1) ^ (int)ptr18) >>> 4) & 0x1);
                    char v80 = (int)(int*)((int)(int*)((int)ptr18 ^ (int)ptr9) & (int*)~(int)(int*)((int)ptr9 ^ 0x1)) < 0;
                    int v81 = v2;
                    unsigned int* ptr19 = *(unsigned int*)(v81 + 132);
                    ptr17 = (unsigned int)**ptr19 | ((unsigned int)((*ptr19 >>> 8) & 0xffffff) << 8);
                    *ptr18 = **ptr19;
                }
                char v82 = (unsigned char)param5 == 0;
                char v83 = (unsigned char)param5 < 0;
                char v84 = __parity__((unsigned char)param5);
                char v85 = (unsigned char)param5 < 0;
                char v86 = 0;
                char v87 = 0;
                int v88 = v82 ? 1: 0;
                int v89 = v88 + v21;
                char* _Destination = (char*)(v89 + (int)ptr18);
                rsize_t _SizeInBytes = 0xffffffff;
                char v90 = param1 == -1;
                char v91 = (int)param1 < -1;
                char v92 = __parity__((unsigned char)param1 - 0xFF);
                char v93 = param1 < 0xffffffff;
                char v94 = (((param1 + 1) ^ param1) & ~param1) < 0;
                char v95 = (((param1 + 1) ^ ~param1) >>> 4) & 0x1;
                if(!v90) {
                    char* ptr20 = ptr12;
                    int* ptr21 = (int*)((int)ptr20 - (int)_Destination);
                    ptr9 = (int*)((int)ptr20 - (int)_Destination);
                    _SizeInBytes = (rsize_t)((int)ptr21 + param1);
                    char v96 = _SizeInBytes ? 0: 1;
                    char v97 = _SizeInBytes >= 0x80000000;
                    char v98 = __parity__((unsigned char)_SizeInBytes);
                    v95 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr9 ^ param1) ^ _SizeInBytes) >>> 4) & 0x1);
                    char v99 = (int*)__carry__((int)ptr9, param1);
                    char v100 = (int)(int*)((int)(int*)(_SizeInBytes ^ (int)ptr9) & (int*)~(int)(int*)((int)ptr9 ^ param1)) < 0;
                }
                errno_t v101 = strcpy_s(_Destination, _SizeInBytes, "e+000");
                char v102 = v101 ? 0: 1;
                char v103 = v101 < 0;
                char v104 = __parity__((unsigned char)v101);
                char v105 = 0;
                char v106 = 0;
                if(!v102) {
                    int* ptr22 = &ptr7;
                    /*NO_RETURN*/ _invoke_watson(NULL, NULL, NULL, 0, 0);
                }
                ptr0 = (unsigned char*)(_Destination + 2);
                if(param3 != 0) {
                    _Destination[0] = 'E';
                }
                unsigned int* ptr23 = param4;
                if(**(ptr23 + 3) != 48) {
                    ptr23 = (unsigned int*)(*(int*)(ptr23 + 1) - 1);
                    if((int)ptr23 < 0) {
                        ptr23 = (unsigned int*)(0 - (int)ptr23);
                        _Destination[1] = '-';
                    }
                    if((int)ptr23 >= 100) {
                        int v107 = (int)ptr23 < 0 ? -1: 0;
                        int v108 = (unsigned int)((unsigned long long)ptr23 | ((unsigned long long)v107 << 32)) / 100;
                        ptr23 = (unsigned int*)((unsigned int)((unsigned long long)ptr23 | ((unsigned long long)v107 << 32)) % 100);
                        _Destination[2] += (unsigned char)v108;
                    }
                    v0 = 10;
                    if((int)ptr23 >= 10) {
                        int v109 = (int)ptr23 < 0 ? -1: 0;
                        int v110 = (unsigned int)((unsigned long long)ptr23 | ((unsigned long long)v109 << 32)) / 10;
                        ptr23 = (unsigned int*)((unsigned int)((unsigned long long)ptr23 | ((unsigned long long)v109 << 32)) % 10);
                        _Destination[3] += (unsigned char)v110;
                    }
                    _Destination[4] += (unsigned char)ptr23;
                }
                if((gvar_419F44 & 0x1) && ptr0[0] == 48) {
                    sub_40E7A0(ptr0, ptr0 + 1, (int*)0x3);
                }
            }
        }
    }
    else {
    loc_40DF2D:
        ptr2 = _errno();
        ptr1 = (void*)0x16;
    loc_40DF52:
        result = ptr1;
        ptr2[0] = (int)ptr1;
        _invalid_parameter_noinfo();
    }
    if(v1) {
        *(int*)&ptr5[112] = *(int*)&ptr5[112] & 0xfffffffd;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _cftoe_l(int* param0, char* param1, unsigned int param2, int param3, int param4, int param5) {
    int* ptr0;
    int v0;
    char v1;
    unsigned int v2;
    int result;
    int v3;
    int* ptr1 = (int*)(gvar_4183F0 ^ (int)&v0);
    int v4 = v3;
    void* ptr2 = (void*)22;
    char* ptr3 = &v1;
    int* ptr4 = &v2;
    _fltout2(param0[0], param0[1], &v2, &v1, 22);
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
        void* ptr5 = _fptostr((unsigned char*)((int)(v2 == 45 ? (int*)(param1 + 1): param1) + (param3 <= 0 ? 0: 1)), param2 != -1 ? param2 - (v2 != 45 ? 0: 1) - (param3 <= 0 ? 0: 1): 0xffffffff, param3 + 1, (int)&v2);
        if(ptr5) {
            *param1 = 0;
        }
        else {
            _cftoe2_l((int)param1, (int)param2, param3, param4, (int)&v2, 0, param5);
        }
    }
    __security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr1));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _cftof2_l(char* param0, unsigned int param1, int param2, unsigned int* param3, unsigned char param4, void* param5) {
    char* _Str1;
    int result;
    int v0;
    char v1;
    unsigned char v2;
    unsigned int v3;
    int v4;
    int v5 = v4;
    void* ptr0 = param5;
    unsigned int v6 = (unsigned int)(*(int*)(param3 + 1) - 1);
    _LocaleUpdate::_LocaleUpdate((int)&v0, (int)param5);
    char* _Str = param0;
    if(!_Str || param1 < 0 || (param1 ? 0: 1)) {
        int* ptr1 = _errno();
        result = 22;
        ptr1[0] = 22;
        _invalid_parameter_noinfo();
    }
    else {
        result = 0;
        int v7 = param2;
        if(param4 != 0 && v7 == v6) {
            *(short*)((*param3 == 45 ? v6 + 1: v6) + (int)_Str) = 48;
        }
        unsigned int* ptr2 = param3;
        if(*ptr2 == 45) {
            _Str[0] = '-';
            ++_Str;
        }
        int v8 = *(int*)(ptr2 + 1);
        if(v8 <= 0) {
            shift(_Str, 1);
            _Str[0] = '0';
            _Str1 = _Str + 1;
        }
        else {
            _Str1 = &_Str[v8];
        }
        if(v7 > 0) {
            shift(_Str1, 1);
            _Str1[0] = ***(char***)(v0 + 132);
            unsigned int v9 = *(param3 + 1);
            if(v9 >= 0x80000000) {
                if(param4 != 0) {
                    v7 = 0 - v9;
                }
                else if(0 - v9 <= v7) {
                    v7 = 0 - v9;
                }
                shift(_Str1 + 1, v7);
                *(int*)&v1 = 48;
                memset2((int)(_Str1 + 1), '0', v7);
            }
        }
    }
    if(v2) {
        *(int*)(v3 + 112) = *(int*)(v3 + 112) & 0xfffffffd;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _cftof_l(int* param0, char* param1, unsigned int param2, int param3, void* param4) {
    char v0;
    unsigned int v1;
    int v2;
    unsigned char v3;
    int v4;
    int result;
    int v5;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v2);
    int v6 = v5;
    void* ptr1 = (void*)22;
    void* ptr2 = &v0;
    *(int*)&v3 = &v1;
    _fltout2(param0[0], param0[1], *(int**)&v3, &v0, 22);
    if(!param1) {
        int* ptr3 = _errno();
        ptr3[0] = (int)22;
        _invalid_parameter_noinfo();
    }
    else if(!param2) {
        int* ptr4 = _errno();
        ptr4[0] = (int)22;
        _invalid_parameter_noinfo();
    }
    else {
        *(int*)&v3 = v4 + param3;
        void* ptr5 = _fptostr(v1 == 45 ? (unsigned char*)(param1 + 1): param1, param2 != -1 ? param2 - (v1 != 45 ? 0: 1): 0xffffffff, *(int*)&v3, &v1);
        if(ptr5) {
            param1[0] = 0;
        }
        else {
            *(int*)&v3 = 0;
            _cftof2_l(param1, param2, param3, (unsigned int*)&v1, 0, param4);
        }
    }
    __security_check_cookie((uintptr_t)((int)&v2 ^ (int)ptr0));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _cftog_l(int* param0, char* param1, unsigned int param2, int param3, int param4, void* param5) {
    char v0;
    unsigned char v1;
    int v2;
    int result;
    int v3;
    int v4;
    unsigned int v5;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v4);
    int v6 = v3;
    char* ptr1 = param1;
    void* ptr2 = (void*)22;
    void* ptr3 = &v0;
    *(int*)&v1 = &v5;
    _fltout2(param0[0], param0[1], *(int**)&v1, &v0, 22);
    if(!ptr1) {
        int* ptr4 = _errno();
        ptr4[0] = (int)22;
        _invalid_parameter_noinfo();
    }
    else {
        unsigned int v7 = param2;
        if(!v7) {
            int* ptr5 = _errno();
            ptr5[0] = (int)22;
            _invalid_parameter_noinfo();
        }
        else {
            unsigned int v8 = (unsigned int)(v2 - 1);
            unsigned int v9 = 0xffffffff;
            unsigned char* ptr6 = v5 == 45 ? (unsigned char*)(ptr1 + 1): ptr1;
            if(v7 != -1) {
                v9 = v7 - (v5 != 45 ? 0: 1);
            }
            *(int*)&v1 = param3;
            void* ptr7 = _fptostr(ptr6, v9, *(int*)&v1, &v5);
            if(ptr7) {
                ptr1[0] = 0;
            }
            else {
                unsigned int v10 = (unsigned int)(v2 - 1);
                char v11 = (int)v10 <= (int)v8 ? 0: 1;
                if((int)v10 >= -4 && (int)v10 < param3) {
                    if(v11) {
                        do {
                            v10 = (unsigned int)ptr6[0] | ((unsigned int)((v10 >>> 8) & 0xffffff) << 8);
                            ++ptr6;
                        }
                        while((unsigned char)v10);
                        ptr6[-2] = (unsigned char)v10;
                    }
                    *(int*)&v1 = 1;
                    _cftof2_l(ptr1, v7, param3, (unsigned int*)&v5, 1, param5);
                }
                else {
                    *(int*)&v1 = 1;
                    _cftoe2_l((int)ptr1, (int)v7, param3, param4, &v5, *(int*)&v1, (int)param5);
                }
            }
        }
    }
    __security_check_cookie((uintptr_t)((int)&v4 ^ (int)ptr0));
    return result;
}

int _chkstk(int param0) {
    int v0;
    unsigned int v1;
    int v2 = param0;
    int* ptr0 = &v0;
    int* ptr1 = &v0;
    int* ptr2 = (int*)((int)&v0 - v1);
    char v3 = ptr2 ? 0: 1;
    char v4 = (int)ptr2 < 0;
    char v5 = __parity__((unsigned char)ptr2);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)(v1 ^ (int)&v0) ^ (int)ptr2) >>> 4) & 0x1);
    char v7 = v1 > (unsigned int)&v0;
    char v8 = (int)(int*)((int)(int*)(v1 ^ (int)&v0) & (int)(int*)((int)ptr2 ^ (int)&v0)) < 0;
    unsigned int v9 = v1;
    int v10 = v7 ? -1: 0;
    char v11 = v10 ? 0: 1;
    char v12 = v10 < 0;
    char v13 = __parity__((unsigned char)v10);
    char v14 = (v10 >>> 4) & 0x1;
    char v15 = v9 < v9;
    char v16 = 0;
    int v17 = ~v10;
    int* ptr3 = (int*)(v17 & (int)ptr2);
    char v18 = ptr3 ? 0: 1;
    char v19 = (int)ptr3 < 0;
    char v20 = __parity__((unsigned char)ptr3);
    char v21 = 0;
    char v22 = 0;
    int* ptr4 = &v2;
    int* ptr5 = (int*)((int)&v2 & 0xfffff000);
    char v23 = ptr5 ? 0: 1;
    char v24 = (int)ptr5 < 0;
    char v25 = __parity__((unsigned char)ptr5);
    char v26 = 0;
    char v27 = 0;
    while(1) {
        char v28 = ptr5 == ptr3;
        char v29 = (int)ptr5 > (int)ptr3;
        char v30 = __parity__((unsigned char)ptr3 - (unsigned char)ptr5);
        char v31 = ptr5 > ptr3;
        char v32 = (int)(int*)((int)(int*)((int)(int*)((int)ptr3 - (int)ptr5) ^ (int)ptr3) & (int)(int*)((int)ptr5 ^ (int)ptr3)) < 0;
        char v33 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 - (int)ptr5) ^ (int)(int*)((int)ptr5 ^ (int)ptr3)) >>> 4) & 0x1);
        if(!v31) {
            break;
        }
        else {
            ptr5 -= 0x400;
            char v34 = (int*)(*ptr5 & (int)ptr5) ? 0: 1;
            char v35 = (int)(int*)(*ptr5 & (int)ptr5) < 0;
            char v36 = __parity__((unsigned char)(int*)(*ptr5 & (int)ptr5));
            char v37 = 0;
            char v38 = 0;
        }
    }
    int* ptr6 = ptr3;
    int v39 = v2;
    int* ptr7 = ptr6;
    int* ptr8 = &v0;
    int v40 = v0;
    *ptr7 = v0;
    int v41 = *ptr7;
    int* ptr9 = ptr7 + 1;
    jump v41;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _chsize_nolock(unsigned int param0, int param1, int param2) {
    int result;
    SIZE_T v0;
    int v1;
    int v2;
    int v3 = v1;
    unsigned int v4 = param0;
    unsigned int v5 = 0;
    int v6 = 0;
    void* ptr0 = _lseeki64_nolock(v4, 0, 0, 1);
    int v7 = (int)ptr0;
    int v8 = v2;
    if((int*)((int)ptr0 & v2) != -1) {
        void* ptr1 = /*BAD_CALL!*/ _lseeki64_nolock(v4, 0, 0, 2);
        if((int*)((int)ptr1 & v2) == -1) {
            v0 = &loc_40C209;
            int* ptr2 = errno();
            return ptr2[0];
        }
        int* ptr3 = (int*)(param1 - (int)ptr1);
        int v9 = param2 - ((unsigned int)((unsigned int)ptr1 > (unsigned int)param1) + v2);
        int v10 = param2 - ((unsigned int)((unsigned int)ptr1 > (unsigned int)param1) + v2);
        if(v9 >= 0 && ((!(v9 ? 0: 1) && ((v9 ^ param2) & (v2 ^ param2)) >= 0) || ptr3)) {
            HANDLE hHeap = GetProcessHeap();
            LPVOID v11 = HeapAlloc(hHeap, 8, 0x1000);
            LPVOID lpMem = v11;
            if(!v11) {
                int* ptr4 = errno();
                ptr4[0] = 12;
                v0 = &loc_40C209;
                int* ptr2 = errno();
                return ptr2[0];
            }
            unsigned int v12 = (unsigned int)_setmode_nolock(v4, 0x8000);
            int v13 = v10;
            unsigned int v14 = (unsigned int)_write_nolock((int)v4, (int)lpMem, (int)(v13 < 0 || (v13 == 0 && (unsigned int)ptr3 < 0x1000) ? ptr3: (int*)0x1000));
            while(v14 != -1) {
                int* ptr5 = ptr3;
                ptr3 = (int*)((int)ptr3 - v14);
                v13 = v10 - ((unsigned int)(v14 > (unsigned int)ptr5) + (v14 >= 0x80000000 ? 0xffffffff: 0));
                char v15 = ((v13 ^ v10) & (v14 >= 0x80000000 ? ~v10: v10)) < 0;
                v10 = v13;
                if(v13 < 0 || (((v13 ? 0: 1) || v15 != 0) && !ptr3)) {
                    /*BAD_CALL!*/ _setmode_nolock(v4, v12);
                    HANDLE hHeap1 = GetProcessHeap();
                    HeapFree(hHeap1, 0, lpMem);
                    goto loc_40C309;
                }
                else {
                    v14 = (unsigned int)_write_nolock((int)v4, (int)lpMem, (int)(v13 < 0 || (v13 == 0 && (unsigned int)ptr3 < 0x1000) ? ptr3: (int*)0x1000));
                }
            }
            v0 = &loc_40C268;
            unsigned long* ptr6 = __doserrno();
            if(ptr6[0] == 5) {
                int* ptr7 = errno();
                ptr7[0] = 13;
            }
            v5 = 0xffffffff;
            v6 = -1;
            /*BAD_CALL!*/ _setmode_nolock(v4, v12);
            HANDLE hHeap1 = GetProcessHeap();
            HeapFree(hHeap1, 0, lpMem);
            goto loc_40C309;
        }
        if(v9 < 0) {
            void* ptr8 = _lseeki64_nolock(v4, param1, param2, 0);
            if((int*)((int)ptr8 & v2) == -1) {
                v0 = &loc_40C209;
                int* ptr2 = errno();
                return ptr2[0];
            }
            int v16 = _get_osfhandle(v4);
            BOOL v17 = /*BAD_CALL!*/ SetEndOfFile((HANDLE)v16);
            v5 = (unsigned int)(-1 - ((unsigned int)v17 > 0 ? 0xffffffff: 0));
            v6 = (unsigned int)v17 <= 0 ? -1: 0;
            if(((unsigned int)v17 <= 0 ? v5: 0) == -1) {
                int* ptr9 = errno();
                ptr9[0] = 13;
                unsigned long* ptr10 = __doserrno();
                DWORD v18 = GetLastError();
                ptr10[0] = v18;
            loc_40C309:
                if((v5 & v6) == -1) {
                    v0 = &loc_40C209;
                    int* ptr2 = errno();
                    return ptr2[0];
                }
            }
        }
        void* ptr11 = _lseeki64_nolock(v4, v7, v8, 0);
        if((int*)((int)ptr11 & v2) == -1) {
            v0 = &loc_40C209;
            int* ptr2 = errno();
            return ptr2[0];
        }
        result = 0;
    }
    else {
        v0 = &loc_40C209;
        int* ptr2 = errno();
        result = ptr2[0];
    }
    return result;
}

int _cinit(unsigned int param0) {
    int v0 = _IsNonwritableInCurrentImage(&gvar_414CC8);
    if(v0) {
        _fpmath(param0);
    }
    _initp_misc_cfltcvt_tab();
    int result = _initterm_e((_PIFV*)0x41110C, (_PIFV*)0x411124);
    if(!result) {
        atexit((void __cdecl (*_)())&gvar_407CE5);
        initterm((_PVFV*)0x411104, (_PVFV*)0x411108);
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
    unsigned int v0;
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
            v0 = (unsigned int)GetLastError();
        }
    }
    else {
    loc_404A45:
        v0 = 0;
    }
    _free_osfhnd(param0);
    *(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) = 0;
    if(v0) {
        _dosmaperr(v0);
        result = -1;
    }
    else {
        result = 0;
    }
    return result;
}

int _commit(int param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int v5;
    int v6;
    int v7;
    int v8;
    void* ptr0 = (void*)&loc_409D9F;
    int v9 = SEH_prolog4(&gvar_417940, 20);
    DWORD v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 1;
    char v14 = 0;
    char v15 = 0;
    *(int*)(v7 - 28) = 0;
    int v16 = *(int*)(v7 + 8);
    char v17 = v16 == -2;
    char v18 = v16 < -2;
    char v19 = __parity__((unsigned char)v16 - 254);
    char v20 = (unsigned int)v16 < 0xfffffffe;
    char v21 = (((v16 + 2) ^ v16) & (v16 ^ 0xfffffffe)) < 0;
    char v22 = (((v16 + 2) ^ (v16 ^ 0xfffffffe)) >>> 4) & 0x1;
    if(v17) {
        int* ptr1 = errno();
        ptr1[0] = 9;
        goto loc_409E73;
    }
    else {
        char v23 = v16 ? 0: 1;
        char v24 = v16 < 0;
        char v25 = __parity__((unsigned char)v16);
        char v26 = 0;
        char v27 = 0;
        if(!v24) {
            char v28 = gvar_419FF8 == v16;
            char v29 = (int)gvar_419FF8 > v16;
            char v30 = __parity__((unsigned char)v16 - (unsigned char)gvar_419FF8);
            char v31 = gvar_419FF8 > (unsigned int)v16;
            char v32 = (((v16 - gvar_419FF8) ^ v16) & (gvar_419FF8 ^ v16)) < 0;
            v22 = (((v16 - gvar_419FF8) ^ (gvar_419FF8 ^ v16)) >>> 4) & 0x1;
            if(v31) {
                int v33 = v16;
                int v34 = v16;
                int v35 = v33 >> 5;
                char v36 = (v34 >>> 4) & 0x1;
                char v37 = v32;
                char v38 = v35 ? 0: 1;
                char v39 = v35 < 0;
                char v40 = __parity__((unsigned char)v35);
                *(int*)(v7 - 32) = v35;
                int v41 = v16;
                int v42 = v41 & 0x1f;
                char v43 = v42 ? 0: 1;
                char v44 = v42 < 0;
                char v45 = __parity__((unsigned char)v42);
                char v46 = 0;
                char v47 = 0;
                int v48 = v42;
                int v49 = v42 * 64;
                char v50 = (v48 >>> 26) & 0x1;
                char v51 = 0;
                char v52 = v49 ? 0: 1;
                char v53 = v49 < 0;
                char v54 = __parity__((unsigned char)v49);
                unsigned int v55 = *(unsigned int*)(v35 * 4 + (int)&gvar_4191D0);
                int v56 = (int)*(char*)(v55 + v49 + 4);
                int v57 = v56 & 0x1;
                char v58 = v57 ? 0: 1;
                char v59 = v57 < 0;
                char v60 = __parity__((unsigned char)v57);
                char v61 = 0;
                char v62 = 0;
                if(!v58) {
                    int v63 = __lock_fhandle(v16);
                    void* ptr2 = ptr0;
                    *(int*)(v7 - 4) = 0;  // __try{ (see __finally:409E55h)
                    int v64 = *(int*)(v7 - 32);
                    unsigned int v65 = *(unsigned int*)(v64 * 4 + (int)&gvar_4191D0);
                    char v66 = *(char*)(v65 + v49 + 4) & 0x1 ? 0: 1;
                    char v67 = (*(char*)(v65 + v49 + 4) & 0x1) < 0;
                    char v68 = __parity__(*(char*)(v65 + v49 + 4) & 0x1);
                    char v69 = 0;
                    char v70 = 0;
                    if(!v66) {
                        int v71 = _get_osfhandle((unsigned int)v16);
                        void* ptr3 = ptr0;
                        BOOL v72 = FlushFileBuffers((HANDLE)v71);
                        char v73 = v72 ? 0: 1;
                        char v74 = v72 < 0;
                        char v75 = __parity__((unsigned char)v72);
                        char v76 = 0;
                        char v77 = 0;
                        if(v73) {
                            DWORD v78 = GetLastError();
                            v10 = v78;
                        }
                        *(DWORD*)(v7 - 28) = v10;
                        v4 = v10 ? 0: 1;
                        v3 = v10 >= 0x80000000;
                        v2 = __parity__((unsigned char)v10);
                        v1 = 0;
                        v0 = 0;
                        if(!v4) {
                            unsigned long* ptr4 = __doserrno();
                            ptr4[0] = v10;
                            goto loc_409E34;
                        }
                    }
                    else {
                    loc_409E34:
                        int* ptr5 = errno();
                        ptr5[0] = 9;
                        v10 = 0xffffffff;
                        v4 = 0;
                        v3 = 1;
                        v2 = 1;
                        v1 = 0;
                        v0 = 0;
                        *(int*)(v7 - 28) = -1;
                    }
                    *(int*)(v7 - 4) = -2;  // } (starts at 409DF8h)
                    int v79 = sub_409E5B();
                    DWORD v80 = v10;
                    EH_epilog3(v8, v6, v5, param0);
                    int v81 = v8;
                    int* ptr6 = &v6;
                    jump v81;
                }
            }
        }
        int* ptr7 = errno();
        ptr7[0] = 9;
        invalid_parameter_noinfo();
    loc_409E73:
        int v82 = -1;
        v4 = 0;
        v3 = 1;
        v2 = 1;
        v1 = 0;
        v0 = 0;
    }
    EH_epilog3(v8, v6, v5, param0);
    int v81 = v8;
    int* ptr6 = &v6;
    jump v81;
}

unsigned int _control87(unsigned int _NewValue, unsigned int _Mask) {
    unsigned int result;
    short v0;
    short v1;
    unsigned int v2;
    short v0 = fnstcw();
    short v3 = v0;
    unsigned int v4 = (unsigned char)v3 & 0x1 ? 16: 0;
    if(((unsigned char)v3 & 0x4)) {
        v4 |= 8;
    }
    if(((unsigned char)v3 & 0x8)) {
        v4 |= 4;
    }
    if(((unsigned char)v3 & 0x10)) {
        v4 |= 2;
    }
    if(((unsigned char)v3 & 0x20)) {
        v4 |= 1;
    }
    if(((unsigned char)v3 & 0x2)) {
        v4 |= 0x80000;
    }
    int v5 = (unsigned int)v3;
    unsigned int v6 = (unsigned int)((unsigned int)v3 & 0xc00);
    if(v6) {
        switch(v6) {
            case 1024: {
                v4 |= 0x100;
                break;
            }
            case 2048: {
                v4 |= 0x200;
                break;
            }
            case 3072: {
                v4 |= 0x300;
                break;
            }
        }
    }
    unsigned int v7 = (unsigned int)(v5 & 0x300);
    char v8 = v7 ? 0: 1;
    if(v8) {
        v4 |= 0x20000;
    }
    else if(v7 == 0x200) {
        v4 |= 0x10000;
    }
    if(((unsigned int)v3 & 0x1000)) {
        v4 |= 0x40000;
    }
    unsigned int v9 = _Mask;
    int v10 = (~_Mask & v4) | (v9 & _NewValue);
    if(v4 != v10) {
        int v11 = _hw_cw(v10);
        *(int*)&v1 = (unsigned int)(unsigned short)v11;
        fldcw(v1);
        v1 = fnstcw();
        int v12 = *(int*)&v1;
        v10 = (unsigned char)v12 & 0x1 ? 16: 0;
        if(((unsigned char)v12 & 0x4)) {
            v10 |= 8;
        }
        if(((unsigned char)v12 & 0x8)) {
            v10 |= 4;
        }
        if(((unsigned char)v12 & 0x10)) {
            v10 |= 2;
        }
        if(((unsigned char)v12 & 0x20)) {
            v10 |= 1;
        }
        if(((unsigned char)v12 & 0x2)) {
            v10 |= 0x80000;
        }
        int v13 = (unsigned int)(unsigned short)v12;
        v4 = (unsigned int)((unsigned int)(unsigned short)v12 & 0xc00);
        if(v4) {
            switch(v4) {
                case 1024: {
                    v10 |= 0x100;
                    break;
                }
                case 2048: {
                    v10 |= 0x200;
                    break;
                }
                case 3072: {
                    v10 |= 0x300;
                    break;
                }
            }
        }
        unsigned int v14 = (unsigned int)(v13 & 0x300);
        char v15 = v14 ? 0: 1;
        if(v15) {
            v10 |= 0x20000;
        }
        else if(v14 == 0x200) {
            v10 |= 0x10000;
        }
        if((v12 & 0x1000)) {
            v10 |= 0x40000;
        }
    }
    if((int)gvar_419EE8 >= 1) {
        int v16 = v9 & 0x308031f;
        unsigned int v17 = v2;
        unsigned int v18 = (unsigned char)v17 >= 0 ? 0: 16;
        if((v17 & 0x200)) {
            v18 |= 8;
        }
        if((v17 & 0x400)) {
            v18 |= 4;
        }
        if((v17 & 0x800)) {
            v18 |= 2;
        }
        if((v17 & 0x1000)) {
            v18 |= 1;
        }
        if((v17 & 0x100)) {
            v18 |= 0x80000;
        }
        unsigned int v19 = v17 & 0x6000;
        if(v19) {
            switch(v19) {
                case 8192: {
                    v18 |= 0x100;
                    break;
                }
                case 16384: {
                    v18 |= 0x200;
                    break;
                }
                case 24576: {
                    v18 |= 0x300;
                    break;
                }
            }
        }
        unsigned int v20 = (v17 & 0x8040) - 64;
        if(v20) {
            unsigned int v21 = v20 - 32704;
            if(!v21) {
                v18 |= 0x3000000;
            }
            else if(v21 == 64) {
                v18 |= 0x1000000;
            }
        }
        else {
            v18 |= 0x2000000;
        }
        int v22 = (~v16 & v18) | (v16 & _NewValue);
        if(v22 != v18) {
            int v23 = __hw_cw_sse2(v22);
            __set_fpsr_sse2(v23);
            unsigned int v24 = v2;
            v18 = (unsigned char)v24 >= 0 ? 0: 16;
            if((v24 & 0x200)) {
                v18 |= 8;
            }
            if((v24 & 0x400)) {
                v18 |= 4;
            }
            if((v24 & 0x800)) {
                v18 |= 2;
            }
            if((v24 & 0x1000)) {
                v18 |= 1;
            }
            if((v24 & 0x100)) {
                v18 |= 0x80000;
            }
            v19 = v24 & 0x6000;
            if(v19) {
                switch(v19) {
                    case 8192: {
                        v18 |= 0x100;
                        break;
                    }
                    case 16384: {
                        v18 |= 0x200;
                        break;
                    }
                    case 24576: {
                        v18 |= 0x300;
                        break;
                    }
                }
            }
            unsigned int v25 = (v24 & 0x8040) - 64;
            if(v25) {
                unsigned int v26 = v25 - 32704;
                if(!v26) {
                    v18 |= 0x3000000;
                }
                else if(v26 == 64) {
                    v18 |= 0x1000000;
                }
            }
            else {
                v18 |= 0x2000000;
            }
        }
        v4 = v18 | v10;
        if(((v18 ^ v10) & 0x8031f)) {
            v4 |= 0x80000000;
        }
        result = v4;
    }
    else {
        result = (unsigned int)v10;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
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
    unsigned char v1;
    unsigned int* ptr0;
    unsigned int* i = (unsigned int*)_LocaleUpdate::_LocaleUpdate((int)&v0, param1);
    char* ptr1 = param0;
    unsigned char* ptr2 = (unsigned int)*ptr1 | ((unsigned int)(int*)((int)(int*)((int)ptr2 >>> 8) & 0xffffff) << 8);
    if(*ptr1) {
        unsigned int* ptr3 = *(unsigned int*)(v0 + 132);
        i = (unsigned int)**ptr3 | ((unsigned int)((*ptr3 >>> 8) & 0xffffff) << 8);
        while((unsigned char)i != (unsigned char)ptr2) {
            ++ptr1;
            ptr2 = (unsigned int)*ptr1 | ((unsigned int)(int*)((int)(int*)((int)ptr2 >>> 8) & 0xffffff) << 8);
            if(!*ptr1) {
                break;
            }
        }
    }
    i = (unsigned int)*ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
    unsigned char* ptr4 = (unsigned char*)(ptr1 + 1);
    if((unsigned char)i) {
        for(i = (unsigned int)*ptr4 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8); *ptr4 && (unsigned char)i != 101 && (unsigned char)i != 69; i = (unsigned int)*ptr4 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8)) {
            ++ptr4;
        }
        unsigned char* ptr5 = ptr4;
        do {
            --ptr4;
        }
        while(*ptr4 == 48);
        i = *(unsigned int*)(v0 + 132);
        ptr2 = *i;
        i = (unsigned int)*ptr4 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
        if(*ptr2 == *ptr4) {
            --ptr4;
        }
        do {
            i = (unsigned int)*ptr5 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
            ++ptr4;
            ++ptr5;
            *ptr4 = (unsigned char)i;
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
int _except_handler4(PEXCEPTION_RECORD param0, PVOID param1, int param2) {
    char v0;
    int v1;
    int* ptr0;
    int* ptr1;
    unsigned int* ptr2;
    int v2;
    int* ptr3;
    void* ptr4;
    char v3;
    PEXCEPTION_RECORD v4;
    int* ptr5 = &ptr1;
    int* ptr6 = &ptr1;
    char v5 = &ptr0 == 28;
    char v6 = (int)&v4 < 0;
    char v7 = __parity__((unsigned char)&ptr0 - 28);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x18) ^ (int)&v4) >>> 4) & 0x1);
    char v9 = (unsigned int)&ptr1 < 24;
    char v10 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&v4) & (int)(int*)((int)&ptr1 ^ 0x18)) < 0;
    int* ptr7 = ptr3;
    int v11 = (int)param1;
    char v12 = 0;
    int v13 = *(int*)(v11 + 8);
    int v14 = v11 + 16;
    unsigned int* ptr8 = (unsigned int*)(gvar_4183F0 ^ v13);
    char v15 = ptr8 ? 0: 1;
    char v16 = (int)ptr8 < 0;
    char v17 = __parity__((unsigned char)ptr8);
    char v18 = 0;
    char v19 = 0;
    int result = 1;
    unsigned int v20 = *ptr8;
    char v21 = v20 == -2;
    char v22 = (int)v20 < -2;
    char v23 = __parity__((unsigned char)v20 - 254);
    char v24 = v20 < 0xfffffffe;
    char v25 = (((v20 + 2) ^ v20) & (v20 ^ 0xfffffffe)) < 0;
    char v26 = (((v20 + 2) ^ (v20 ^ 0xfffffffe)) >>> 4) & 0x1;
    if(!v21) {
        int v27 = *(int*)(ptr8 + 1);
        int v28 = v27 + v14;
        uintptr_t _StackCookie = (uintptr_t)(*(int*)(v20 + v14) ^ v28);
        char v29 = _StackCookie ? 0: 1;
        char v30 = _StackCookie >= 0x80000000;
        char v31 = __parity__((unsigned char)_StackCookie);
        char v32 = 0;
        char v33 = 0;
        __security_check_cookie(_StackCookie);
    }
    int v34 = *(int*)(ptr8 + 2);
    int v35 = *(int*)(ptr8 + 3);
    int v36 = v35 + v14;
    uintptr_t _StackCookie1 = (uintptr_t)(*(int*)(v34 + v14) ^ v36);
    char v37 = _StackCookie1 ? 0: 1;
    char v38 = _StackCookie1 >= 0x80000000;
    char v39 = __parity__((unsigned char)_StackCookie1);
    char v40 = 0;
    char v41 = 0;
    __security_check_cookie(_StackCookie1);
    PEXCEPTION_RECORD v42 = param0;
    char v43 = *(char*)&v42->ExceptionFlags & 0x66 ? 0: 1;
    char v44 = (*(char*)&v42->ExceptionFlags & 0x66) < 0;
    char v45 = __parity__(*(char*)&v42->ExceptionFlags & 0x66);
    char v46 = 0;
    char v47 = 0;
    if(v43) {
        v4 = v42;
        int v48 = param2;
        int v49 = param2;
        int* ptr9 = &v4;
        *(unsigned int*)(v11 - 4) = &v4;
        int* ptr10 = *(int**)(v11 + 12);
        int* ptr11 = *(int**)(v11 + 12);
        if(ptr10 != -2) {
            do {
                int* ptr12 = (int*)((int)ptr10 * 3);
                int* ptr13 = ptr12 + 1;
                v1 = *((int*)((int)(int*)((int)ptr13 * 4) + (int)ptr8) + 1);
                unsigned int* ptr14 = (unsigned int*)((int)(int*)((int)ptr13 * 4) + (int)ptr8);
                int* ptr15 = *ptr14;
                unsigned int* ptr16 = ptr14;
                char v50 = v1 ? 0: 1;
                char v51 = v1 < 0;
                char v52 = __parity__((unsigned char)v1);
                char v53 = 0;
                char v54 = 0;
                if(v50) {
                    goto loc_4046F3;
                }
                else {
                    int v55 = v14;
                    int v56 = _EH4_CallFilterFunc(v1, v55);
                    v1 = (unsigned int)1 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                    v12 = 1;
                    v0 = v56 ? 0: 1;
                    char v57 = v56 < 0;
                    char v58 = __parity__((unsigned char)v56);
                    char v59 = 0;
                    char v60 = 0;
                    if(v57) {
                        result = 0;
                        goto loc_40472B;
                    }
                }
                if(v0 == 0) {
                    PEXCEPTION_RECORD v61 = param0;
                    char v62 = v61->ExceptionCode == -529697949;
                    char v63 = (int)v61->ExceptionCode < -529697949;
                    char v64 = __parity__((unsigned char)v61->ExceptionCode - 99);
                    char v65 = v61->ExceptionCode < 3765269347;
                    char v66 = (((v61->ExceptionCode + 529697949) ^ v61->ExceptionCode) & (v61->ExceptionCode ^ 0xe06d7363)) < 0;
                    char v67 = (((v61->ExceptionCode + 529697949) ^ (v61->ExceptionCode ^ 0xe06d7363)) >>> 4) & 0x1;
                    if(v62) {
                        char v68 = gvar_419FFC ? 0: 1;
                        char v69 = gvar_419FFC >= 0x80000000;
                        char v70 = __parity__((unsigned char)gvar_419FFC);
                        char v71 = gvar_419FFC < 0;
                        char v72 = 0;
                        char v73 = 0;
                        if(!v68) {
                            int v74 = _IsNonwritableInCurrentImage(&gvar_419FFC);
                            char v75 = v74 ? 0: 1;
                            char v76 = v74 < 0;
                            char v77 = __parity__((unsigned char)v74);
                            char v78 = 0;
                            char v79 = 0;
                            if(!v75) {
                                gvar_419FFC((int)param0, 1);
                                ptr6 = &ptr4;
                                char v80 = &ptr0 == 40;
                                char v81 = (int)&ptr2 < 0;
                                char v82 = __parity__((unsigned char)&ptr0 - 40);
                                char v83 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr4 ^ 0x8) ^ (int)&ptr2) >>> 4) & 0x1);
                                char v84 = (unsigned int)&ptr4 >= 0xfffffff8;
                                char v85 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&ptr4) & (int*)~(int)(int*)((int)&ptr4 ^ 0x8)) < 0;
                            }
                        }
                    }
                    PEXCEPTION_RECORD ExceptionRecord = param0;
                    PVOID TargetFrame = param1;
                    int v86 = _EH4_GlobalUnwind2(TargetFrame, ExceptionRecord);
                    PVOID v87 = param1;
                    int* ptr17 = ptr11;
                    char v88 = *(int*)((int)v87 + 12) == ptr17;
                    char v89 = *(int*)((int)v87 + 12) < (int)ptr17;
                    char v90 = __parity__((unsigned char)*(int*)((int)v87 + 12) - (unsigned char)ptr17);
                    char v91 = *(unsigned int*)((int)v87 + 12) < (unsigned int)ptr17;
                    char v92 = (int)(int*)((int)(int*)((int)(int*)(*(int*)((int)v87 + 12) - (int)ptr17) ^ *(int*)((int)v87 + 12)) & (int)(int*)(*(int*)((int)v87 + 12) ^ (int)ptr17)) < 0;
                    char v93 = (int*)((int)(int*)((int)(int*)((int)(int*)(*(int*)((int)v87 + 12) - (int)ptr17) ^ (int)(int*)(*(int*)((int)v87 + 12) ^ (int)ptr17)) >>> 4) & 0x1);
                    if(!v88) {
                        int v94 = (int)v87;
                        int v95 = _EH4_LocalUnwind(v94, ptr17, v14, (int*)&gvar_4183F0);
                        v87 = param1;
                    }
                    *(int**)((int)v87 + 12) = ptr15;
                    unsigned int v96 = *ptr8;
                    char v97 = v96 == -2;
                    char v98 = (int)v96 < -2;
                    char v99 = __parity__((unsigned char)v96 - 254);
                    char v100 = v96 < 0xfffffffe;
                    char v101 = (((v96 + 2) ^ v96) & (v96 ^ 0xfffffffe)) < 0;
                    char v102 = (((v96 + 2) ^ (v96 ^ 0xfffffffe)) >>> 4) & 0x1;
                    if(!v97) {
                        int v103 = *(int*)(ptr8 + 1);
                        int v104 = v103 + v14;
                        uintptr_t _StackCookie2 = (uintptr_t)(*(int*)(v96 + v14) ^ v104);
                        char v105 = _StackCookie2 ? 0: 1;
                        char v106 = _StackCookie2 >= 0x80000000;
                        char v107 = __parity__((unsigned char)_StackCookie2);
                        char v108 = 0;
                        char v109 = 0;
                        __security_check_cookie(_StackCookie2);
                    }
                    int v110 = *(int*)(ptr8 + 2);
                    int v111 = *(int*)(ptr8 + 3);
                    int v112 = v111 + v14;
                    uintptr_t _StackCookie3 = (uintptr_t)(*(int*)(v110 + v14) ^ v112);
                    char v113 = _StackCookie3 ? 0: 1;
                    char v114 = _StackCookie3 >= 0x80000000;
                    char v115 = __parity__((unsigned char)_StackCookie3);
                    char v116 = 0;
                    char v117 = 0;
                    __security_check_cookie(_StackCookie3);
                    unsigned int* ptr18 = ptr16;
                    int v118 = v14;
                    int v119 = *(int*)(ptr18 + 2);
                    int* ptr19 = &v2;
                    int v120 = _EH4_TransferToHandler(v119, v118);
                    interrupt(3);
                    result = 0;
                    goto loc_40472B;
                loc_4046F3:
                    v1 = (unsigned int)v12 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                }
                ptr11 = ptr15;
                ptr10 = ptr15;
                v3 = ptr15 == -2;
                char v121 = (int)ptr15 < -2;
                char v122 = __parity__((unsigned char)ptr15 - 254);
                char v123 = (unsigned int)ptr15 < 0xfffffffe;
                char v124 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr15 + 2) ^ (int)ptr15) & (int)(int*)((int)ptr15 ^ 0xfffffffe)) < 0;
            }
            while(!v3);
            if((unsigned char)v1) {
                goto loc_40472B;
            }
        }
    }
    else if(*(int*)(v11 + 12) != -2) {
        _EH4_LocalUnwind(v11, (int*)0xFFFFFFFE, v14, (int*)&gvar_4183F0);
    loc_40472B:
        unsigned int v125 = *ptr8;
        if(v125 != -2) {
            __security_check_cookie((uintptr_t)((*(int*)(ptr8 + 1) + v14) ^ *(int*)(v125 + v14)));
        }
        __security_check_cookie((uintptr_t)((*(int*)(ptr8 + 3) + v14) ^ *(int*)(*(int*)(ptr8 + 2) + v14)));
    }
    return result;
}

unsigned int _fassign(unsigned int param0, unsigned int* param1, char* _String) {
    return _fassign_l(param0, param1, _String, NULL);
}

unsigned int _fassign_l(unsigned int param0, unsigned int* param1, char* _String, _locale_t _Locale) {
    unsigned int result;
    unsigned int v0;
    unsigned int v1 = v0;
    unsigned int v2 = v0;
    if(param0) {
        _atodbl_l(&v2, _String, _Locale);
        unsigned int* ptr0 = param1;
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

// Stale decompilation - Refresh this view to re-decompile this code
int _fcloseall() {
    int v0;
    int v1;
    int v2 = v1;
    int result = 0;
    int v3 = 0;
    _lock(1);
    int v4 = 0;  // __try{ (see __finally:409174h)
    unsigned int v5 = 3;
    for(unsigned int i = 3; (int)gvar_41B004 > (int)i; ++i) {
        FILE* _Stream = *(FILE**)(i * 4 + gvar_41B000);
        if(_Stream) {
            if((*(char*)&_Stream[3]._Placeholder & 0x83)) {
                int v6 = fclose(_Stream);
                if(v6 != -1) {
                    ++result;
                }
            }
            if((int)i >= 20) {
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
        result = flsall();
    }
    else {
        int v0 = _flush(_Stream);
        if(v0) {
            result = -1;
        }
        else if((int*)((int)_Stream[3]._Placeholder & 0x4000)) {
            void* ptr0 = (void*)_fileno(_Stream);
            unsigned int v1 = (unsigned int)_commit();
            result = v1 > 0 ? -1: 0;
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
                                int v7 = /*BAD_CALL!*/ _fileno((FILE*)ptr0);
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
                ptr0[3] |= (unsigned int)v4 <= 0 ? 16: 32;
                ptr0[1] = 0;
            }
        }
    }
    return -1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _fileno(FILE* _Stream) {
    if(!_Stream) {
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        return -1;
    }
    return (int)_Stream[4]._Placeholder;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _flsbuf(char param0, FILE* param1) {
    int result;
    int* ptr0;
    void* ptr1;
    FILE* _Stream = param1;
    int v0 = _fileno(_Stream);
    void* ptr2 = _Stream[3]._Placeholder;
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
        int v1 = 0;
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
            _Stream[3]._Placeholder = (void*)((int)ptr4 | 0x2);
            if(!(((int)ptr4 | 0x2) & 0x10c)) {
                int v2 = __iob_func();
                if((unsigned int)(v2 + 32) != _Stream) {
                    int v3 = __iob_func();
                    if((unsigned int)(v3 + 64) != _Stream) {
                        goto loc_405B7B;
                    }
                    else {
                        goto loc_405B70;
                    }
                }
                else {
                loc_405B70:
                    int v4 = _isatty((unsigned int)v0);
                    if(!v4) {
                    loc_405B7B:
                        _getbuf((int*)_Stream);
                    }
                }
            }
            if((int*)((int)_Stream[3]._Placeholder & 0x108)) {
                int v5 = (int)_Stream[2]._Placeholder;
                int v6 = (int)(_Stream->_Placeholder - v5);
                param1 = (FILE*)(int)(_Stream->_Placeholder - v5);
                _Stream->_Placeholder = (FILE)(v5 + 1);
                _Stream[1]._Placeholder = (void*)((int)_Stream[6]._Placeholder - 1);
                if(v6 > 0) {
                    v1 = _write(v0, v5, v6);
                }
                else if((*(char*)((v0 == -1 || v0 == -2 ? &gvar_418500: (v0 & 0x1f) * 64 + *(unsigned int*)((v0 >> 5) * 4 + (int)&gvar_4191D0)) + 4) & 0x20)) {
                    void* ptr5 = _lseeki64((unsigned int)v0, 0, 0, 2);
                    if(((int)ptr5 & v5) == -1) {
                        goto loc_405C1F;
                    }
                }
                *(char*)_Stream[2]._Placeholder = param0;
            }
            else {
                param1 = (FILE*)0x1;
                v1 = _write(v0, &param0, 1);
            }
            if(v1 != param1) {
            loc_405C1F:
                _Stream[3]._Placeholder = (void*)((int)_Stream[3]._Placeholder | 0x20);
            loc_405C23:
                result = -1;
            }
            else {
                result = (unsigned int)(unsigned char)*(int*)&param0;
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _fltout2(int param0, int param1, int* param2, char* param3, rsize_t _SizeInBytes) {
    int* ptr0;
    char v0;
    short v1;
    char v2;
    char v3;
    int* ptr1;
    int v4;
    short* ptr2;
    short v5;
    int v6;
    int* ptr3;
    char v7;
    int v8;
    int result;
    int* ptr4 = &ptr1;
    int* ptr5 = &ptr1;
    char v9 = &ptr0 == 52;
    char v10 = (int)&v4 < 0;
    char v11 = __parity__((unsigned char)&ptr0 - 52);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x30) ^ (int)&v4) >>> 4) & 0x1);
    char v13 = (unsigned int)&ptr1 < 48;
    char v14 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&v4) & (int)(int*)((int)&ptr1 ^ 0x30)) < 0;
    unsigned int v15 = gvar_4183F0;
    int* ptr6 = (int*)(v15 ^ (int)&ptr1);
    char v16 = ptr6 ? 0: 1;
    char v17 = (int)ptr6 < 0;
    char v18 = __parity__((unsigned char)ptr6);
    char v19 = 0;
    char v20 = 0;
    int* ptr7 = ptr6;
    char* ptr8 = param3;
    int* ptr9 = ptr3;
    int* ptr10 = param2;
    char* ptr11 = ptr8;
    unsigned int* ptr12 = &param0;
    int* ptr13 = &v4;
    *(int**)&v7 = &v4;
    unsigned int* ptr14 = __dtold(*(unsigned int**)&v7, &param0);
    int v21 = *(int*)&v7;
    short* ptr15 = ptr2;
    short* ptr16 = &v5;
    ptr2 = &v5;
    *(int*)&v7 = 0;
    int v22 = 17;
    int* ptr17 = &v22;
    char v23 = &ptr0 == 88;
    char v24 = (int)&v8 < 0;
    char v25 = __parity__((unsigned char)&ptr0 - 88);
    char v26 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v22 ^ 0xc) ^ (int)&v8) >>> 4) & 0x1);
    char v27 = (unsigned int)&v22 < 12;
    char v28 = (int)(int*)((int)(int*)((int)&v22 ^ (int)&v8) & (int)(int*)((int)&v22 ^ 0xc)) < 0;
    int* ptr18 = &v4;
    int* ptr19 = &v8;
    v8 = v4;
    int* ptr20 = &v0;
    int* ptr21 = &v6;
    *ptr21 = *ptr20;
    short* ptr22 = (short*)(ptr20 + 1);
    short* ptr23 = (short*)(ptr21 + 1);
    *ptr23 = *ptr22;
    int* ptr24 = (int*)(ptr22 + 1);
    int* ptr25 = (int*)(ptr23 + 1);
    int v29 = sub_40F28C(v8, v6, v1, v22, v7, (int)ptr2);
    char* _Destination = ptr11;
    *(ptr10 + 2) = v29;
    int v30 = (int)v3;
    *ptr10 = (int)v3;
    int v31 = (int)v5;
    *(ptr10 + 1) = (int)v5;
    char* ptr26 = &v2;
    errno_t v32 = strcpy_s(_Destination, _SizeInBytes, &v2);
    char v33 = v32 ? 0: 1;
    char v34 = v32 < 0;
    char v35 = __parity__((unsigned char)v32);
    char v36 = 0;
    char v37 = 0;
    if(!v33) {
        int v38 = 0;
        char v39 = 1;
        char v40 = 0;
        char v41 = 1;
        char v42 = 0;
        char v43 = 0;
        *(int*)&v7 = 0;
        *(int*)&v1 = 0;
        int* ptr27 = &v8;
        /*NO_RETURN*/ _invoke_watson(NULL, *(wchar_t**)&v1, NULL, *(unsigned int*)&v7, 0);
    }
    int* ptr28 = ptr7;
    *(char**)(ptr10 + 3) = _Destination;
    __security_check_cookie((uintptr_t)((int)ptr28 ^ (int)&ptr1));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _flush(FILE* param0) {
    int v0;
    int v1 = v0;
    FILE* _Stream = param0;
    int result = 0;
    if((unsigned char)((unsigned char)_Stream[3]._Placeholder & 0x3) == 2 && (int*)((int)_Stream[3]._Placeholder & 0x108)) {
        int* ptr0 = (int*)(_Stream->_Placeholder - (int)_Stream[2]._Placeholder);
        if((int)ptr0 > 0) {
            int* ptr1 = ptr0;
            void* ptr2 = _Stream[2]._Placeholder;
            int v2 = _fileno(_Stream);
            unsigned int v3 = (unsigned int)_write(v2, (int)ptr2, (int)ptr1);
            if(v3 == ptr0) {
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

int _forcdecpt(char* param0) {
    return _forcdecpt_l(param0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int _forcdecpt_l(char* param0, int param1) {
    int v0;
    int v1;
    unsigned char v2;
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
    unsigned int* ptr1 = *(unsigned int*)(v1 + 132);
    int result = (unsigned int)**ptr1 | ((unsigned int)((*ptr1 >>> 8) & 0xffffff) << 8);
    *ptr0 = **ptr1;
    char* ptr2 = ptr0 + 1;
    do {
        result = (unsigned int)*ptr2 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        *ptr2 = v6;
        v6 = (unsigned char)result;
        result = (unsigned int)*ptr2 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        ++ptr2;
    }
    while((unsigned char)result);
    if((unsigned char)result != v2) {
        result = v3;
        *(int*)(result + 112) = *(int*)(result + 112) & 0xfffffffd;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _fpmath(unsigned int param0) {
    int result = _cfltcvt_init();
    if(param0) {
        result = _setdefaultprecision();
    }
    fnclex();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* _fptostr(unsigned char* param0, unsigned int param1, int param2, int param3) {
    void* result;
    void* ptr0;
    int* ptr1;
    void* ptr2;
    int v0 = param3;
    unsigned char* ptr3 = param0;
    unsigned char* ptr4 = *(unsigned int*)(v0 + 12);
    if(!ptr3 || param1 < 0 || (param1 ? 0: 1)) {
        ptr1 = _errno();
        ptr0 = (void*)0x16;
    loc_40EF40:
        void* ptr5 = ptr0;
        ptr1[0] = (int)ptr0;
        _invalid_parameter_noinfo();
        result = ptr5;
    }
    else {
        int v1 = param2;
        ptr3[0] = 0;
        if((unsigned int)((v1 > 0 ? v1: 0) + 1) >= param1) {
            ptr1 = _errno();
            ptr0 = (void*)0x22;
            goto loc_40EF40;
        }
        else {
            ptr3[0] = 48;
            ptr0 = ptr2;
            unsigned char* ptr6 = (unsigned char*)(ptr3 + 1);
            if(v1 > 0) {
                do {
                    v0 = (unsigned int)*ptr4 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                    if(*ptr4) {
                        v0 = (int)(unsigned char)v0;
                        ++ptr4;
                    }
                    else {
                        int v2 = 48;
                        v0 = 48;
                    }
                    ptr6[0] = (unsigned char)v0;
                    ++ptr6;
                    --v1;
                }
                while(v1 > 0);
                v0 = param3;
            }
            ptr6[0] = 0;
            if(v1 >= 0 && *ptr4 >= 53) {
                --ptr6;
                while(ptr6[0] == 57) {
                    ptr6[0] = 48;
                    --ptr6;
                }
                ++ptr6[0];
            }
            if(ptr3[0] == 49) {
                *(int*)(v0 + 4) = *(int*)(v0 + 4) + 1;
            }
            else {
                size_t v3 = strlen((char*)(ptr3 + 1));
                sub_40E7A0(ptr3, (unsigned char*)(ptr3 + 1), (int*)(v3 + 1));
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
    rsize_t v1;
    rsize_t v2;
    unsigned int v3;
    rsize_t v4;
    void* ptr0;
    size_t result;
    int v5;
    rsize_t v6;
    rsize_t v7;
    FILE* _Stream1;
    char v8;
    int v9;
    int v10 = (int)_Buffer;
    int v11 = v9;
    void* _Destination = (void*)v10;
    int v12 = (int)_BufferSize;
    if(_ElementSize) {
        size_t v13 = _ElementCount;
        if(!v13) {
            return 0;
        }
        if(!v10) {
            int* ptr1 = _errno();
            ptr1[0] = 22;
            _invalid_parameter_noinfo();
            return 0;
        }
        _Stream1 = _Stream;
        if(!_Stream1 || (unsigned int)(int)(0xffffffff / _ElementSize) < v13) {
            if(_BufferSize != -1) {
                *(int*)&v8 = 0;
                memset2(v10, 0, (int)_BufferSize);
            }
            if(_Stream1 && 0xffffffff / _ElementSize >= v13) {
                goto loc_402765;
            }
            else {
                int* ptr1 = _errno();
                ptr1[0] = 22;
                _invalid_parameter_noinfo();
                return 0;
            }
        }
        else {
        loc_402765:
            v7 = (rsize_t)(v13 * _ElementSize);
            v6 = (rsize_t)(v13 * _ElementSize);
            v10 = (int)((int*)((int)_Stream1[3]._Placeholder & 0x10c) ? _Stream1[6]._Placeholder: (void*)0x1000);
            v5 = (int)((int*)((int)_Stream1[3]._Placeholder & 0x10c) ? _Stream1[6]._Placeholder: (void*)0x1000);
        }
        if(v7) {
        loc_40278F:
            do {
                if((int*)((int)_Stream1[3]._Placeholder & 0x10c)) {
                    rsize_t _SourceSize = (rsize_t)_Stream1[1]._Placeholder;
                    rsize_t v14 = (rsize_t)_Stream1[1]._Placeholder;
                    char v15 = _SourceSize >= 0x80000000;
                    if(_SourceSize) {
                        if(v15) {
                            _Stream1[3]._Placeholder = (void*)((int)_Stream1[3]._Placeholder | 0x20);
                            return (size_t)((unsigned int)(v7 - v6) / _ElementSize);
                        }
                        if(_SourceSize > v6) {
                            _SourceSize = v6;
                            v14 = v6;
                        }
                        rsize_t _DestinationSize = (rsize_t)v12;
                        if(_SourceSize > _DestinationSize) {
                            goto loc_402877;
                        }
                        else {
                            ptr0 = (void*)_SourceSize;
                            *(FILE*)&v8 = _Stream1->_Placeholder;
                            memcpy_s(_Destination, _DestinationSize, *(void**)&v8, _SourceSize);
                            v4 = v14;
                            _Stream1[1]._Placeholder = (void*)((int)_Stream1[1]._Placeholder - v4);
                            v6 -= v4;
                            _Stream1->_Placeholder += v4;
                            _Destination = (void*)(v4 + (int)_Destination);
                            v12 -= v4;
                            v10 = v5;
                            goto loc_402865;
                        }
                    }
                }
                if((unsigned int)v10 <= v6) {
                    if(v10) {
                        if(v6 > 0x7fffffff) {
                            v3 = 0x7fffffff % (unsigned int)v10;
                            v2 = 0x7fffffff;
                        }
                        else {
                            v3 = (unsigned int)(v6 % (unsigned int)v10);
                            v2 = v6;
                        }
                        v1 = v2 - v3;
                    }
                    else {
                        v1 = 0x7fffffff;
                        if(v6 <= 0x7fffffff) {
                            v1 = v6;
                        }
                    }
                    if(v1 > (unsigned int)v12) {
                        goto loc_402877;
                    }
                    else {
                        ptr0 = (void*)v1;
                        *(void**)&v8 = _Destination;
                        int v16 = _fileno(_Stream1);
                        v4 = (rsize_t)_read_nolock(v16, *(int*)&v8, (int)ptr0);
                        if(!v4) {
                            _Stream1[3]._Placeholder = (void*)((int)_Stream1[3]._Placeholder | 0x10);
                        }
                        else if(v4 != -1) {
                            v6 -= v4;
                            _Destination = (void*)(v4 + (int)_Destination);
                            v12 -= v4;
                            v10 = v5;
                            goto loc_402865;
                        }
                        else {
                            _Stream1[3]._Placeholder = (void*)((int)_Stream1[3]._Placeholder | 0x20);
                        }
                        return (size_t)((unsigned int)(v7 - v6) / _ElementSize);
                    }
                }
                else {
                    *(int*)&v8 = &loc_402842;
                    v0 = /*BAD_CALL!*/ _filbuf((int*)_Stream1);
                }
                if(v0 != -1) {
                    int v17 = v12;
                    if(v17) {
                        void* ptr2 = _Destination;
                        *(char*)ptr2 = (unsigned char)v0;
                        --v6;
                        _Destination = (void*)((int)ptr2 + 1);
                        v12 = v17 - 1;
                        v10 = (int)_Stream1[6]._Placeholder;
                        v5 = (int)_Stream1[6]._Placeholder;
                    loc_402865:
                        if(v6) {
                            goto loc_40278F;
                        }
                        else {
                            break;
                        }
                    }
                    else {
                    loc_402877:
                        if(_BufferSize != -1) {
                            *(int*)&v8 = 0;
                            memset2((int)_Buffer, 0, (int)_BufferSize);
                        }
                        int* ptr3 = _errno();
                        ptr3[0] = 34;
                    }
                }
                else {
                    return (size_t)((unsigned int)(v7 - v6) / _ElementSize);
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

// Stale decompilation - Refresh this view to re-decompile this code
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
            else if(!(param0 - 2)) {
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

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
int _freefls(void* param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7 = &gvar_4177C8;
    int v8 = 8;
    int* ptr0 = &v1;
    int v9 = v2;
    int v10 = v4;
    int v11 = v5;
    void* _Block1 = param0;
    char v12 = _Block1 ? 0: 1;
    char v13 = (int)_Block1 < 0;
    char v14 = __parity__((unsigned char)_Block1);
    char v15 = 0;
    char v16 = 0;
    if(!v12) {
        char v17 = *(int*)((int)_Block1 + 36) ? 0: 1;
        char v18 = *(int*)((int)_Block1 + 36) < 0;
        char v19 = __parity__((unsigned char)*(int*)((int)_Block1 + 36));
        char v20 = *(unsigned int*)((int)_Block1 + 36) < 0;
        char v21 = 0;
        char v22 = 0;
        if(!v17) {
            free(*(void**)((int)_Block1 + 36));
            int v23 = v3;
        }
        char v24 = *(int*)((int)_Block1 + 44) ? 0: 1;
        char v25 = *(int*)((int)_Block1 + 44) < 0;
        char v26 = __parity__((unsigned char)*(int*)((int)_Block1 + 44));
        char v27 = *(unsigned int*)((int)_Block1 + 44) < 0;
        char v28 = 0;
        char v29 = 0;
        if(!v24) {
            free(*(void**)((int)_Block1 + 44));
            int v30 = v3;
        }
        char v31 = *(int*)((int)_Block1 + 52) ? 0: 1;
        char v32 = *(int*)((int)_Block1 + 52) < 0;
        char v33 = __parity__((unsigned char)*(int*)((int)_Block1 + 52));
        char v34 = *(unsigned int*)((int)_Block1 + 52) < 0;
        char v35 = 0;
        char v36 = 0;
        if(!v31) {
            free(*(void**)((int)_Block1 + 52));
            int v37 = v3;
        }
        char v38 = *(int*)((int)_Block1 + 60) ? 0: 1;
        char v39 = *(int*)((int)_Block1 + 60) < 0;
        char v40 = __parity__((unsigned char)*(int*)((int)_Block1 + 60));
        char v41 = *(unsigned int*)((int)_Block1 + 60) < 0;
        char v42 = 0;
        char v43 = 0;
        if(!v38) {
            free(*(void**)((int)_Block1 + 60));
            int v44 = v3;
        }
        char v45 = *(int*)((int)_Block1 + 64) ? 0: 1;
        char v46 = *(int*)((int)_Block1 + 64) < 0;
        char v47 = __parity__((unsigned char)*(int*)((int)_Block1 + 64));
        char v48 = *(unsigned int*)((int)_Block1 + 64) < 0;
        char v49 = 0;
        char v50 = 0;
        if(!v45) {
            free(*(void**)((int)_Block1 + 64));
            int v51 = v3;
        }
        char v52 = *(int*)((int)_Block1 + 68) ? 0: 1;
        char v53 = *(int*)((int)_Block1 + 68) < 0;
        char v54 = __parity__((unsigned char)*(int*)((int)_Block1 + 68));
        char v55 = *(unsigned int*)((int)_Block1 + 68) < 0;
        char v56 = 0;
        char v57 = 0;
        if(!v52) {
            free(*(void**)((int)_Block1 + 68));
            int v58 = v3;
        }
        char v59 = *(int*)((int)_Block1 + 72) ? 0: 1;
        char v60 = *(int*)((int)_Block1 + 72) < 0;
        char v61 = __parity__((unsigned char)*(int*)((int)_Block1 + 72));
        char v62 = *(unsigned int*)((int)_Block1 + 72) < 0;
        char v63 = 0;
        char v64 = 0;
        if(!v59) {
            free(*(void**)((int)_Block1 + 72));
            int v65 = v3;
        }
        char v66 = *(int*)((int)_Block1 + 92) == &gvar_411C00;
        char v67 = *(int*)((int)_Block1 + 92) < &gvar_411C00;
        char v68 = __parity__((unsigned char)*(int*)((int)_Block1 + 92));
        char v69 = *(unsigned int*)((int)_Block1 + 92) < &gvar_411C00;
        char v70 = (((*(int*)((int)_Block1 + 92) - &gvar_411C00) ^ *(int*)((int)_Block1 + 92)) & (*(int*)((int)_Block1 + 92) ^ &gvar_411C00)) < 0;
        char v71 = (((*(int*)((int)_Block1 + 92) - &gvar_411C00) ^ (*(int*)((int)_Block1 + 92) ^ &gvar_411C00)) >>> 4) & 0x1;
        if(!v66) {
            free(*(void**)((int)_Block1 + 92));
            int v72 = v3;
        }
        int v73 = _lock(13);
        int v74 = v3;
        v7 = 0;  // __try{ (see __finally:4076E7h)
        char v75 = 1;  // __try{ (see __finally:4076E7h)
        char v76 = 0;  // __try{ (see __finally:4076E7h)
        char v77 = 1;  // __try{ (see __finally:4076E7h)
        char v78 = 0;  // __try{ (see __finally:4076E7h)
        char v79 = 0;  // __try{ (see __finally:4076E7h)
        void* _Block = *(void**)((int)_Block1 + 104);
        char v80 = _Block ? 0: 1;
        char v81 = (int)_Block < 0;
        char v82 = __parity__((unsigned char)_Block);
        char v83 = 0;
        char v84 = 0;
        if(!v80) {
            int v85 = -1;
            char v86 = 0;
            char v87 = 1;
            char v88 = 1;
            char v89 = 0;
            char v90 = 0;
            unsigned int v91 = *(unsigned int*)_Block;
            *(int*)_Block = *(int*)_Block - 1;
            char v92 = *(int*)_Block ? 0: 1;
            char v93 = *(int*)_Block < 0;
            char v94 = __parity__((unsigned char)*(int*)_Block);
            v71 = ((~v91 ^ *(int*)_Block) >>> 4) & 0x1;
            char v95 = v91 >= 1;
            char v96 = ((*(int*)_Block ^ v91) & v91) < 0;
            unsigned int v97 = v91;
            if(v92) {
                char v98 = _Block == &gvar_418750;
                char v99 = (int)_Block < &gvar_418750;
                char v100 = __parity__((unsigned char)_Block - 80);
                char v101 = (unsigned int)_Block < &gvar_418750;
                char v102 = (int)(int*)((int)(int*)((int)(int*)((int)_Block - &gvar_418750) ^ (int)_Block) & (int)(int*)((int)_Block ^ &gvar_418750)) < 0;
                v71 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)_Block - &gvar_418750) ^ (int)(int*)((int)_Block ^ &gvar_418750)) >>> 4) & 0x1);
                if(!v98) {
                    free(_Block);
                    int v103 = v3;
                }
            }
        }
        int v104 = sub_4076EA();
        int v105 = _lock(12);
        int v106 = v3;
        v7 = 1;  // __try{ (see __finally:4076F3h)
        int* ptr1 = *(int**)((int)_Block1 + 108);
        v12 = ptr1 ? 0: 1;
        v13 = (int)ptr1 < 0;
        v14 = __parity__((unsigned char)ptr1);
        v15 = 0;
        v16 = 0;
        if(!v12) {
            int* ptr2 = __removelocaleref(ptr1);
            int v107 = v3;
            v12 = gvar_418BDC == ptr1;
            v13 = (int)gvar_418BDC > (int)ptr1;
            v14 = __parity__((unsigned char)ptr1 - (unsigned char)gvar_418BDC);
            v16 = gvar_418BDC > (unsigned int)ptr1;
            v15 = (int)(int*)((int)(int*)((int)(int*)((int)ptr1 - gvar_418BDC) ^ (int)ptr1) & (int)(int*)(gvar_418BDC ^ (int)ptr1)) < 0;
            v71 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 - gvar_418BDC) ^ (int)(int*)(gvar_418BDC ^ (int)ptr1)) >>> 4) & 0x1);
            if(!v12) {
                v12 = ptr1 == &gvar_418BE0;
                v13 = (int)ptr1 < &gvar_418BE0;
                v14 = __parity__((unsigned char)ptr1 - 224);
                v16 = (unsigned int)ptr1 < &gvar_418BE0;
                v15 = (int)(int*)((int)(int*)((int)(ptr1 - 1073912) ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ &gvar_418BE0)) < 0;
                v71 = (int*)((int)(int*)((int)(int*)((int)(ptr1 - 1073912) ^ (int)(int*)((int)ptr1 ^ &gvar_418BE0)) >>> 4) & 0x1);
                if(!v12) {
                    v12 = ptr1[0] ? 0: 1;
                    v13 = ptr1[0] < 0;
                    v14 = __parity__((unsigned char)ptr1[0]);
                    v16 = (unsigned int)ptr1[0] < 0;
                    v15 = 0;
                    v71 = 0;
                    if(v12) {
                        int v108 = __freetlocinfo(ptr1);
                        int v109 = v3;
                    }
                }
            }
        }
        v7 = -2;  // } (starts at 40769Bh)
        int v110 = sub_4076F6();
        free(_Block1);
        int v111 = v3;
    }
    v3 = &loc_4076E4;
    *(int*)__FS_BASE = v6;
    v1 = &loc_4076E4;
    int v112 = v0;
    /*BAD_CALL!*/ v112();
}

// Stale decompilation - Refresh this view to re-decompile this code
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
        result = ptr5 == -1 ? -1: 0;
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
                int* ptr5 = _openfile((int)_FileName, (unsigned char*)_Mode, _ShFlag, ptr2);
                sub_401E71();
                result = (FILE*)ptr5;
            }
        }
    }
    *(int*)__FS_BASE = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long _ftell_nolock(FILE* _Stream) {
    int* ptr0;
    char v0;
    char v1;
    long result;
    unsigned int v2;
    void* ptr1;
    int v3;
    int v4;
    int v5 = v4;
    FILE* _Stream1 = _Stream;
    FILE* ptr2 = _Stream;
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
        int* ptr6 = ptr5;
        if((int)ptr5 >= 0) {
            int v8 = v6 >> 5;
            int* ptr7 = (int*)((v6 & 0x1f) * 64);
            int v9 = v8;
            int* ptr8 = ptr7;
            void* i = *(void**)(v8 * 4 + (int)&gvar_4191D0);
            void* ptr9 = _Stream1[3]._Placeholder;
            *(void**)&v0 = _Stream1[3]._Placeholder;
            i = (unsigned int)((*(char*)((int*)((int)ptr7 + (int)i) + 9) * 2) >> 1) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
            char v10 = (unsigned char)i;
            if((int*)((int)ptr9 & 0x108)) {
                FILE v11 = _Stream1->_Placeholder;
                void* ptr10 = _Stream1[2]._Placeholder;
                int* ptr11 = (int*)(v11 - (int)ptr10);
                if((v0 & 0x3)) {
                    if((unsigned char)i != 1) {
                    loc_40229D:
                        int* ptr12 = ptr11;
                        if((*(char*)((int*)(*(unsigned int*)(v9 * 4 + (int)&gvar_4191D0) + (int)ptr7) + 1) & 0x80)) {
                            for(i = ptr10; (unsigned int)i < v11; i = (void*)((int)i + 1)) {
                                if(*(char*)i == 10) {
                                    ptr12 = (int*)((char*)ptr12 + 1);
                                }
                            }
                        }
                        goto loc_4022CB;
                    }
                    else {
                        int* ptr13 = ptr11;
                        if(*((int*)(*(unsigned int*)(v9 * 4 + (int)&gvar_4191D0) + (int)ptr7) + 12) == 0) {
                            goto loc_40229D;
                        }
                        else {
                            ptr0 = (int*)((int)ptr13 >>> 1);
                        }
                    }
                    if(ptr2[1]._Placeholder != 0) {
                        unsigned int v12 = *(unsigned int*)(v9 * 4 + (int)&gvar_4191D0);
                        void* ptr14 = _lseeki64(v7, *((int*)(v12 + (int)ptr7) + 10), *((int*)(v12 + (int)ptr7) + 11), 0);
                        int* ptr15 = ptr8;
                        ptr5 = *(int**)(v9 * 4 + (int)&gvar_4191D0);
                        if(*((int*)((int)ptr5 + (int)ptr15) + 10) == ptr14 && *((int*)((int)ptr5 + (int)ptr15) + 11) == v2) {
                            LPDWORD v13 = &ptr10;
                            int v14 = 0x1000;
                            LPVOID v15 = &v1;
                            ptr5 = (int*)ReadFile(*(HANDLE*)((int)ptr5 + (int)ptr15), &v1, 0x1000, &ptr10, NULL);
                            if(ptr5) {
                                ptr5 = _lseek(v7, (int)ptr6, 0);
                                if((int)ptr5 >= 0) {
                                    ptr5 = (int*)ptr10;
                                    if(ptr5 >= ptr0) {
                                        LPVOID v16 = &v1;
                                        if(ptr0) {
                                            int* ptr16 = (int*)((int)ptr5 + (int)&v1);
                                            do {
                                                ptr0 = (int*)((char*)ptr0 - 1);
                                                if((unsigned int)v16 >= (unsigned int)ptr16) {
                                                    break;
                                                }
                                                else {
                                                    ptr5 = (unsigned int)*(char*)v16 | ((unsigned int)(int*)((int)(int*)((int)ptr5 >>> 8) & 0xffffff) << 8);
                                                    if(*(char*)v16 == 13) {
                                                        ptr5 = (int*)((char*)ptr16 - 1);
                                                        if((unsigned int)ptr5 > (unsigned int)v16) {
                                                            ptr5 = (int*)((int)v16 + 1);
                                                            if(*(char*)&ptr5[0] == 10) {
                                                                v16 = ptr5;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        ptr5 = (int*)*(char*)((unsigned int)(unsigned char)ptr5 + 0x418400);
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
                else if(!(v0 & 0x80)) {
                    ptr5 = _errno();
                    ptr5[0] = 22;
                }
                else {
                loc_4022CB:
                    if(ptr6 && (v0 & 0x1)) {
                        FILE* ptr17 = ptr2;
                        if(ptr17[1]._Placeholder != 0) {
                            void* ptr18 = (void*)((int)(int*)(v11 - (int)ptr17[2]._Placeholder) + (int)ptr17[1]._Placeholder);
                            int v17 = (int)NULL;
                            if((*(char*)((int*)(*(unsigned int*)(v9 * 4 + (int)&gvar_4191D0) + (int)ptr7) + 1) & 0x80)) {
                                int* ptr19 = _lseek(v7, 0, 2);
                                int v18 = (int)ptr6;
                                if(ptr19 == v18) {
                                    i = ptr2;
                                    int* ptr20 = (int*)(*(int*)((int)i + 8) + (int)ptr18);
                                    int* ptr21 = (int*)((int)(int*)((int)ptr20 - *(int*)((int)i + 8)) & (*(unsigned int*)((int)i + 8) <= (unsigned int)ptr20 ? -1: 0));
                                    ptr8 = (int*)((int)(int*)((int)ptr20 - *(int*)((int)i + 8)) & (*(unsigned int*)((int)i + 8) <= (unsigned int)ptr20 ? -1: 0));
                                    if(ptr21 != 0) {
                                        unsigned char* ptr22 = *(unsigned int*)((int)i + 8);
                                        int* ptr23 = ptr8;
                                        do {
                                            if(*ptr22 == 10) {
                                                ptr18 = (void*)((int)ptr18 + 1);
                                            }
                                            ++ptr22;
                                            ++v17;
                                        }
                                        while((unsigned int)ptr23 > (unsigned int)v17);
                                    }
                                }
                                else {
                                    ptr5 = _lseek(v7, v18, 0);
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

// Stale decompilation - Refresh this view to re-decompile this code
size_t _fwrite_nolock(void* _Buffer, size_t _ElementSize, size_t _ElementCount, FILE* _Stream) {
    size_t result;
    size_t result;
    void* ptr0;
    int* ptr1;
    int* ptr2;
    char v0;
    int v1;
    size_t v2;
    size_t v3 = v2;
    int* ptr3 = (int*)v2;
    v2 = _ElementSize;
    int v4 = v1;
    if(v2) {
        size_t v5 = _ElementCount;
        if(!v5) {
            return 0;
        }
        FILE* _Stream1 = _Stream;
        if(!_Stream1 || !_Buffer || 0xffffffff / v2 < v5) {
            int* ptr4 = _errno();
            ptr4[0] = 22;
            _invalid_parameter_noinfo();
            return 0;
        }
        ptr2 = (int*)(v2 * v5);
        ptr1 = (int*)(v2 * v5);
        v2 = (size_t)((int*)((int)_Stream1[3]._Placeholder & 0x10c) ? _Stream1[6]._Placeholder: (void*)0x1000);
        v3 = (size_t)((int*)((int)_Stream1[3]._Placeholder & 0x10c) ? _Stream1[6]._Placeholder: (void*)0x1000);
        if(ptr2) {
        loc_4024EE:
            do {
                size_t v6 = (size_t)((int)_Stream1[3]._Placeholder & 0x108);
                if(v6) {
                    int* ptr5 = (int*)_Stream1[1]._Placeholder;
                    ptr3 = (int*)_Stream1[1]._Placeholder;
                    char v7 = (int)ptr5 < 0;
                    if(ptr5) {
                        if(v7) {
                            goto loc_4025C6;
                        }
                        else {
                            if(ptr5 > ptr1) {
                                ptr5 = ptr1;
                                ptr3 = ptr1;
                            }
                            ptr0 = ptr5;
                            *(void**)&v0 = _Buffer;
                            sub_405C40(_Stream1->_Placeholder, *(unsigned char**)&v0, ptr5);
                            int* ptr6 = ptr3;
                            _Stream1[1]._Placeholder = (void*)((int)_Stream1[1]._Placeholder - (int)ptr6);
                            ptr1 = (int*)((int)ptr1 - (int)ptr6);
                            _Stream1->_Placeholder += (int)ptr6;
                            _Buffer = (void*)((int)ptr6 + (int)_Buffer);
                            v2 = v3;
                            goto loc_4025B8;
                        }
                    }
                }
                if(v2 <= (unsigned int)ptr1) {
                    if(v6) {
                        *(int*)&v0 = &loc_40253A;
                        int v8 = /*BAD_CALL!*/ _flush(_Stream1);
                        if(v8) {
                            return (size_t)((int)(unsigned int)(int*)((int)ptr2 - (int)ptr1) / _ElementSize);
                        }
                        v2 = v3;
                    }
                    int* ptr7 = ptr1;
                    if(v2) {
                        ptr7 = (int*)((int)ptr1 - (int)(int*)((int)(unsigned int)ptr7 % v2));
                        ptr3 = ptr7;
                    }
                    else {
                        ptr3 = ptr1;
                    }
                    ptr0 = ptr7;
                    *(void**)&v0 = _Buffer;
                    int v9 = _fileno(_Stream1);
                    int v10 = _write(v9, *(int*)&v0, (int)ptr0);
                    if(v10 != -1) {
                        v6 = (size_t)((unsigned int)v10 <= (unsigned int)ptr3 ? v10: ptr3);
                        _Buffer = (void*)(v6 + (int)_Buffer);
                        ptr1 = (int*)((int)ptr1 - v6);
                        if((unsigned int)v10 >= (unsigned int)ptr3) {
                            v2 = v3;
                            goto loc_4025B8;
                        }
                    }
                loc_4025C6:
                    _Stream1[3]._Placeholder = (void*)((int)_Stream1[3]._Placeholder | 0x20);
                }
                else {
                    *(int*)&v0 = (int)*(char*)_Buffer;
                    int v11 = _flsbuf(v0, _Stream1);
                    if(v11 != -1) {
                        _Buffer = (void*)((int)_Buffer + 1);
                        ptr1 = (int*)((char*)ptr1 - 1);
                        v2 = (size_t)_Stream1[6]._Placeholder;
                        v3 = (size_t)_Stream1[6]._Placeholder;
                        if((int)v2 <= 0) {
                            v2 = 1;
                            v3 = 1;
                        }
                    loc_4025B8:
                        if(ptr1) {
                            goto loc_4024EE;
                        }
                        else {
                            return _ElementCount;
                        }
                    }
                }
                return (size_t)((int)(unsigned int)(int*)((int)ptr2 - (int)ptr1) / _ElementSize);
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

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
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

void* getptd_noexit() {
    DWORD dwErrCode = GetLastError();
    void* _Block = (void*)_crtFlsGetValue((int)gvar_418540);
    if(!_Block) {
        _Block = (void*)sub_408F5B(1, 956);
        if(_Block) {
            int v0 = _crtFlsSetValue((int)gvar_418540, (int)_Block);
            if(v0) {
                initptd();
                DWORD v1 = GetCurrentThreadId();
                *(int*)((int)_Block + 4) = -1;
                *(DWORD*)_Block = v1;
            }
            else {
                free(_Block);
                _Block = NULL;
            }
        }
    }
    SetLastError(dwErrCode);
    return _Block;
}

int _getstream(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    void* ptr0;
    int v5;
    int v6 = SEH_prolog4(&gvar_4176A0, 16);
    int v7 = 0;
    char v8 = 1;
    char v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 0;
    int v13 = 0;
    *(int*)(v2 - 28) = 0;
    int v14 = lock(1);
    int v15 = v4;
    *(int*)(v2 - 4) = 0;  // __try{ (see __finally:404303h)
    unsigned int v16 = 0;
    while(1) {
        *(unsigned int*)(v2 - 32) = v16;
        char v17 = gvar_41B004 == v16;
        char v18 = (int)gvar_41B004 > (int)v16;
        char v19 = __parity__((unsigned char)v16 - (unsigned char)gvar_41B004);
        char v20 = gvar_41B004 > v16;
        char v21 = (int)(((v16 - gvar_41B004) ^ v16) & (gvar_41B004 ^ v16)) < 0;
        char v22 = (((v16 - gvar_41B004) ^ (gvar_41B004 ^ v16)) >>> 4) & 0x1;
        if(v18 != v21) {
            unsigned int v23 = gvar_41B000;
            int v24 = *(int*)(v16 * 4 + v23);
            char v25 = v24 ? 0: 1;
            char v26 = v24 < 0;
            char v27 = __parity__((unsigned char)v24);
            char v28 = 0;
            char v29 = 0;
            if(!v25) {
                char v30 = *(char*)(v24 + 12) & 0x83 ? 0: 1;
                char v31 = (*(char*)(v24 + 12) & 0x83) < 0;
                char v32 = __parity__(*(char*)(v24 + 12) & 0x83);
                char v33 = 0;
                char v34 = 0;
                if(v30) {
                    char v35 = *(int*)(v24 + 12) & 0x8000 ? 0: 1;
                    char v36 = (*(int*)(v24 + 12) & 0x8000) < 0;
                    char v37 = 1;
                    char v38 = 0;
                    char v39 = 0;
                    if(v35) {
                        unsigned int v40 = v16 - 3;
                        char v41 = v40 == 16;
                        char v42 = (int)v40 < 16;
                        char v43 = __parity__((unsigned char)v40 - 16);
                        char v44 = v40 < 16;
                        char v45 = (((v40 - 16) ^ v40) & (v40 ^ 0x10)) < 0;
                        v22 = (((v40 - 16) ^ (v40 ^ 0x10)) >>> 4) & 0x1;
                        if((v44 || v41)) {
                            int v46 = (int)(v16 + 16);
                            int v47 = mtinitlocknum(v46);
                            int v48 = v4;
                            char v49 = v47 ? 0: 1;
                            char v50 = v47 < 0;
                            char v51 = __parity__((unsigned char)v47);
                            char v52 = 0;
                            char v53 = 0;
                            if(v49) {
                                break;
                            }
                        }
                        unsigned int v54 = gvar_41B000;
                        int v55 = _lock_file2(v16, *(int*)(v16 * 4 + v54));
                        void* ptr1 = ptr0;
                        int v56 = v4;
                        unsigned int v57 = gvar_41B000;
                        int v58 = *(int*)(v16 * 4 + v57);
                        char v59 = *(char*)(v58 + 12) & 0x83 ? 0: 1;
                        char v60 = (*(char*)(v58 + 12) & 0x83) < 0;
                        char v61 = __parity__(*(char*)(v58 + 12) & 0x83);
                        char v62 = 0;
                        char v63 = 0;
                        if(!v59) {
                            int v64 = _unlock_file2(v16, v58);
                            void* ptr2 = ptr0;
                            int v65 = v4;
                        }
                        else {
                            v13 = v58;
                            *(int*)(v2 - 28) = v58;
                            break;
                        }
                    }
                }
                unsigned int v66 = v16;
                ++v16;
                char v67 = v16 ? 0: 1;
                char v68 = v16 >= 0x80000000;
                char v69 = __parity__((unsigned char)v16);
                char v70 = (((v66 ^ 0x1) ^ v16) >>> 4) & 0x1;
                char v71 = (int)((v16 ^ v66) & ~(v66 ^ 0x1)) < 0;
                continue;
            }
            else {
                int v72 = malloc_crt(56);
                int v73 = v4;
                int v74 = v72;
                unsigned int v75 = gvar_41B000;
                *(int*)(v16 * 4 + v75) = v74;
                char v76 = v74 ? 0: 1;
                char v77 = v74 < 0;
                char v78 = __parity__((unsigned char)v74);
                char v79 = 0;
                char v80 = 0;
                if(!v76) {
                    v4 = 0;
                    unsigned int v81 = gvar_41B000;
                    int v82 = *(int*)(v16 * 4 + v81);
                    unsigned int v83 = *(unsigned int*)(v16 * 4 + v81);
                    int v84 = v82 + 32;
                    char v85 = v84 ? 0: 1;
                    char v86 = v84 < 0;
                    char v87 = __parity__((unsigned char)v84);
                    char v88 = (((v83 ^ 0x20) ^ v84) >>> 4) & 0x1;
                    char v89 = v83 >= 0xffffffe0;
                    char v90 = ((v84 ^ v83) & ~(v83 ^ 0x20)) < 0;
                    int v91 = _crtInitializeCriticalSectionEx(v84, 4000, 0);
                    int* ptr3 = &v5;
                    char v92 = &v0 == 8;
                    char v93 = (int)&v3 < 0;
                    char v94 = __parity__((unsigned char)&v0 - 8);
                    char v95 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0xc) ^ (int)&v3) >>> 4) & 0x1);
                    char v96 = (unsigned int)&v5 >= 0xfffffff4;
                    char v97 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v5) & (int*)~(int)(int*)((int)&v5 ^ 0xc)) < 0;
                    unsigned int v98 = gvar_41B000;
                    int v99 = *(int*)(v16 * 4 + v98);
                    unsigned int v100 = *(unsigned int*)(v16 * 4 + v98);
                    LPCRITICAL_SECTION lpCriticalSection = (LPCRITICAL_SECTION)(v99 + 32);
                    char v101 = lpCriticalSection ? 0: 1;
                    char v102 = (int)lpCriticalSection < 0;
                    char v103 = __parity__((unsigned char)lpCriticalSection);
                    v22 = (int*)((int)(int*)((int)(int*)((v100 ^ 0x20) ^ (int)lpCriticalSection) >>> 4) & 0x1);
                    char v104 = v100 >= 0xffffffe0;
                    char v105 = (int)(int*)((int)(int*)((int)lpCriticalSection ^ v100) & ~(v100 ^ 0x20)) < 0;
                    EnterCriticalSection(lpCriticalSection);
                    unsigned int v106 = gvar_41B000;
                    v13 = *(int*)(v16 * 4 + v106);
                    *(int*)(v2 - 28) = *(int*)(v16 * 4 + v106);
                    *(int*)(v13 + 12) = 0;
                }
            }
        }
        break;
    }
    char v107 = v13 ? 0: 1;
    char v108 = v13 < 0;
    char v109 = __parity__((unsigned char)v13);
    char v110 = 0;
    char v111 = 0;
    if(!v107) {
        *(int*)(v13 + 12) = *(int*)(v13 + 12) & 0x8000;
        char v112 = *(int*)(v13 + 12) ? 0: 1;
        char v113 = *(int*)(v13 + 12) < 0;
        char v114 = __parity__((unsigned char)*(int*)(v13 + 12));
        char v115 = 0;
        char v116 = 0;
        *(int*)(v13 + 4) = 0;
        *(int*)(v13 + 8) = 0;
        *(int*)v13 = 0;
        *(int*)(v13 + 28) = 0;
        *(int*)(v13 + 16) = -1;
        v107 = *(int*)(v13 + 16) ? 0: 1;
        v108 = *(int*)(v13 + 16) < 0;
        v109 = __parity__((unsigned char)*(int*)(v13 + 16));
        v110 = 0;
        v111 = 0;
    }
    *(int*)(v2 - 4) = -2;  // } (starts at 40420Bh)
    int v117 = sub_404306();
    int v118 = v13;
    EH_epilog3(v3, v1, v0, param0);
    int v119 = v3;
    int* ptr4 = &v1;
    jump v119;
}

int _global_unwind2(PVOID TargetFrame) {
    int v0;
    int v1;
    int result;
    int v2 = v1;
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
        result = (unsigned int)(result & 0xffffffdf) - 7;
    }
    return result;
}

int _hw_cw(int param0) {
    int result = (unsigned char)param0 & 0x10 ? 1: 0;
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
    if((unsigned int)(param0 & 0x300)) {
        switch((unsigned int)(param0 & 0x300)) {
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
    if(!(unsigned int)(param0 & 0x30000)) {
        result |= 0x300;
    }
    else if((unsigned int)(param0 & 0x30000) == 0x10000) {
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

int _input_l(int param0, unsigned int* param1, int param2, unsigned int* param3) {
    int v0;
    int v1;
    long long v2;
    int v3;
    int v4;
    unsigned int* ptr0;
    int v5;
    unsigned int* ptr1;
    int v6;
    int v7;
    unsigned int* ptr2;
    int v8;
    int v9;
    unsigned int* ptr3;
    unsigned int* ptr4;
    unsigned int* ptr5;
    char v10;
    unsigned int* ptr6;
    unsigned int* ptr7;
    unsigned int* ptr8;
    unsigned int v11;
    unsigned char v12;
    unsigned char v13;
    unsigned int* ptr9;
    unsigned int v14;
    unsigned int* ptr10;
    int v15;
    int v16;
    char v17;
    short v18;
    char v19;
    int result;
    int v20;
    int v21;
    char v22;
    unsigned char v23;
    int v24;
    int* ptr11 = (int*)(gvar_4183F0 ^ (int)&v16);
    unsigned int* ptr12 = param3;
    int v25 = param0;
    int v26 = v21;
    unsigned int* ptr13 = param1;
    int _Character1 = 0;
    unsigned int* ptr14 = ptr12;
    int v27 = v25;
    unsigned char* ptr15 = &v17;
    int v28 = 350;
    unsigned int v29 = 0;
    int v30 = 0;
    int v31 = 0;
    *(int*)&v18 = 0;
    int v32 = 0;
    unsigned int* ptr16 = NULL;
    if(!ptr13 || !v25) {
        int* ptr17 = errno();
        ptr17[0] = 22;
        invalid_parameter_noinfo();
    }
    else if(!(*(char*)(v25 + 12) & 0x40)) {
        *(int*)&v22 = v25;
        int v33 = _fileno(*(FILE**)&v22);
        int v34 = v33;
        int v35 = v34 == -1 || v34 == -2 ? &gvar_418500: (v34 & 0x1f) * 64 + *(unsigned int*)((v33 >> 5) * 4 + (int)&gvar_4191D0);
        if(!(*(char*)(v35 + 36) & 0x7f)) {
            int v36 = v34 == -1 || v34 == -2 ? &gvar_418500: (v34 & 0x1f) * 64 + *(unsigned int*)((v34 >> 5) * 4 + (int)&gvar_4191D0);
            if(!(*(char*)(v36 + 36) & 0x80)) {
                goto loc_402F76;
            }
        }
        *(int*)&v22 = &loc_402F63;
        int* ptr18 = /*BAD_CALL!*/ errno();
        ptr18[0] = 22;
        *(int*)&v22 = &loc_402F6E;
        /*BAD_CALL!*/ invalid_parameter_noinfo();
    }
    else {
    loc_402F76:
        *(int*)&v22 = param2;
        unsigned int* ptr19 = _LocaleUpdate::_LocaleUpdate(&v15, *(int**)&v22);
        ptr19 = (unsigned int)*(char*)&ptr13[0] | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
        unsigned int* ptr20 = NULL;
        unsigned char v37 = 0;
        unsigned int* ptr21 = NULL;
        unsigned int* ptr22 = NULL;
        int v38 = 0;
        if(!(unsigned char)ptr19) {
        loc_403FA7:
            if(v23) {
                *(int*)(v24 + 112) = *(int*)(v24 + 112) & 0xfffffffd;
            }
        }
        else {
        loc_402FAD:
            *(int*)&v22 = (unsigned int)(unsigned char)ptr19;
            int v39 = isspace(*(int*)&v22);
            if(v39) {
                ptr22 = (unsigned int*)((char*)ptr20 - 1);
                int v40 = v27;
                *(int*)&v22 = v27;
                int _Character = _whiteout(&ptr22, *(unsigned int**)&v22);
                if(_Character != -1) {
                    *(int*)&v22 = v40;
                    _ungetc_nolock(_Character, *(FILE**)&v22);
                }
                do {
                    ptr13 = (unsigned int*)((char*)ptr13 + 1);
                    *(int*)&v22 = (unsigned int)*(char*)&ptr13[0];
                    ptr19 = (unsigned int*)isspace(*(int*)&v22);
                }
                while(ptr19);
                ptr20 = ptr22;
                ptr21 = ptr22;
            loc_403F35:
                ptr19 = (unsigned int)*(char*)&ptr13[0] | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                if(*(char*)&ptr13[0]) {
                    goto loc_402FAD;
                }
                else {
                loc_403F77:
                    if(v29 == 1) {
                        *(unsigned char**)&v22 = ptr15;
                        free(*(void**)&v22);
                    }
                    goto loc_403FA7;
                }
            }
            else {
                v39 = (int)*(char*)&ptr13[0];
                *(int*)&v22 = 37;
                unsigned char v41 = (unsigned char)*(int*)&v22;
                char v42 = (unsigned char)v39 == v41;
                if(v42) {
                    if(*((char*)&ptr13[0] + 1) != v41) {
                        ptr10 = NULL;
                        unsigned int* ptr23 = NULL;
                        char v43 = 0;
                        int v44 = (unsigned int)0x100 | ((unsigned int)(unsigned short)(_Character1 >>> 16) << 16);
                        v14 = 0;
                        ptr9 = NULL;
                        char v45 = 0;
                        v13 = 0;
                        v12 = 0;
                        unsigned char v46 = 0;
                        unsigned char v47 = 0;
                        v11 = 0;
                        do {
                            ptr13 = (unsigned int*)((char*)ptr13 + 1);
                            unsigned int* ptr24 = (unsigned int*)*(char*)&ptr13[0];
                            ptr8 = (unsigned int*)*(char*)&ptr13[0];
                            *(int*)&v22 = (unsigned int)(unsigned char)ptr24;
                            int v48 = isdigit(*(int*)&v22);
                            ptr7 = *(unsigned int**)&v22;
                            if(v48) {
                                ptr7 = ptr8;
                                ptr9 = (unsigned int*)((char*)ptr9 + 1);
                                ptr6 = (unsigned int*)((int)ptr23 * 10);
                                ptr23 = (unsigned int*)((int*)((int)ptr6 + (int)ptr7) - 12);
                                goto loc_403088;
                            }
                            else {
                                ptr6 = ptr8;
                                char v49 = ptr6 == 78;
                                if((v49 || (int)ptr6 < 78)) {
                                    if(v49) {
                                        goto loc_403088;
                                    }
                                    else if(ptr6 == 42) {
                                        ptr6 = (unsigned int*)(v12 + 1);
                                        ++v12;
                                        goto loc_40308E;
                                    }
                                    else if(ptr6 == 70) {
                                        goto loc_403088;
                                    }
                                    else if(ptr6 == 73) {
                                        ptr6 = (unsigned int*)*((char*)&ptr13[0] + 1);
                                        if(*((char*)&ptr13[0] + 1) == 54) {
                                            ptr7 = (unsigned int*)((char*)ptr13 + 2);
                                            if(*(char*)&ptr7[0] == 52) {
                                                ptr13 = ptr7;
                                                goto loc_403122;
                                            }
                                        }
                                        if((unsigned char)ptr6 == 51) {
                                            ptr7 = (unsigned int*)((char*)ptr13 + 2);
                                            if(*(char*)&ptr7[0] == 50) {
                                                ptr13 = ptr7;
                                                goto loc_403088;
                                            }
                                        }
                                        if((unsigned char)ptr6 == 100) {
                                            goto loc_403088;
                                        }
                                        else if((unsigned char)ptr6 == 105) {
                                            ptr7 = (unsigned int)v47 | ((unsigned int)(int*)((int)(int*)((int)ptr7 >>> 8) & 0xffffff) << 8);
                                            goto loc_4031BB;
                                        }
                                        else if((unsigned char)ptr6 != 111 && (unsigned char)ptr6 != 120 && (unsigned char)ptr6 != 88) {
                                            v44 = (unsigned int)((unsigned char)v44 + 1) | ((unsigned int)((v44 >>> 8) & 0xffffff) << 8);
                                            goto loc_403088;
                                        }
                                        else {
                                            goto loc_403088;
                                        }
                                    }
                                    else if(ptr6 != 76) {
                                        v44 = (unsigned int)((unsigned char)v44 + 1) | ((unsigned int)((v44 >>> 8) & 0xffffff) << 8);
                                        goto loc_403088;
                                    }
                                    else {
                                        v44 = (unsigned int)(unsigned char)v44 | ((unsigned int)((unsigned char)(v44 >>> 8) + 1) << 8) | ((unsigned int)(unsigned short)(v44 >>> 16) << 16);
                                        goto loc_403088;
                                    }
                                }
                                if(ptr6 != 104) {
                                    switch(ptr6) {
                                        case 108: {
                                            ptr6 = (unsigned int*)((char*)ptr13 + 1);
                                            break;
                                        }
                                        case 119: {
                                            goto loc_4031B3;
                                        }
                                        default: {
                                            v44 = (unsigned int)((unsigned char)v44 + 1) | ((unsigned int)((v44 >>> 8) & 0xffffff) << 8);
                                            goto loc_403088;
                                        }
                                    }
                                    if(*(char*)&ptr6[0] == 108) {
                                        ptr13 = ptr6;
                                    loc_403122:
                                        ++v11;
                                        v30 = 0;
                                        v31 = 0;
                                    loc_403088:
                                        ptr6 = (unsigned int)v12 | ((unsigned int)(int*)((int)(int*)((int)ptr6 >>> 8) & 0xffffff) << 8);
                                    loc_40308E:
                                        ptr7 = (unsigned int)v47 | ((unsigned int)(int*)((int)(int*)((int)ptr7 >>> 8) & 0xffffff) << 8);
                                    }
                                    v44 = (unsigned int)(unsigned char)v44 | ((unsigned int)((unsigned char)(v44 >>> 8) + 1) << 8) | ((unsigned int)(unsigned short)(v44 >>> 16) << 16);
                                loc_4031B3:
                                    ptr7 = (unsigned int)(v47 + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr7 >>> 8) & 0xffffff) << 8);
                                }
                                else {
                                    v44 = (unsigned int)(unsigned char)v44 | ((unsigned int)((unsigned char)(v44 >>> 8) + 0xFF) << 8) | ((unsigned int)(unsigned short)(v44 >>> 16) << 16);
                                    ptr7 = (unsigned int)(v47 + 0xFF) | ((unsigned int)(int*)((int)(int*)((int)ptr7 >>> 8) & 0xffffff) << 8);
                                }
                                v47 = (unsigned char)ptr7;
                            loc_4031BB:
                                ptr6 = (unsigned int)v12 | ((unsigned int)(int*)((int)(int*)((int)ptr6 >>> 8) & 0xffffff) << 8);
                            }
                        }
                        while(!(unsigned char)v44);
                        v10 = (unsigned char)(v44 >>> 8);
                        _Character1 = v32;
                        ptr5 = ptr23;
                        ptr4 = ptr21;
                        ptr3 = ptr13;
                        if(!(unsigned char)ptr6) {
                            unsigned int* ptr25 = ptr14;
                            ptr16 = ptr14;
                            ptr6 = ptr25 + 1;
                            ptr14 = ptr25 + 1;
                            ptr8 = (unsigned int*)ptr6[-1];
                        }
                        else {
                            ptr8 = NULL;
                        }
                        ptr6 = (unsigned int*)((int)ptr6 & 0xffffff00);
                        unsigned char v50 = (unsigned char)ptr6;
                        if(!(unsigned char)ptr7) {
                            ptr6 = (unsigned int)*(char*)&ptr13[0] | ((unsigned int)(int*)((int)(int*)((int)ptr6 >>> 8) & 0xffffff) << 8);
                            if(*(char*)&ptr13[0] != 83) {
                                v47 = 0xff;
                                if((unsigned char)ptr6 == 67) {
                                    goto loc_4031FE;
                                }
                            }
                            else {
                            loc_4031FE:
                                v47 = 1;
                            }
                        }
                        v9 = (unsigned int)*(char*)&ptr13[0] | 0x20;
                        v8 = (unsigned int)*(char*)&ptr13[0] | 0x20;
                        if(v9 != 110) {
                            *(int*)&v22 = v27;
                            if(v9 != 99 && v9 != 123) {
                                ptr19 = (unsigned int*)_whiteout(&ptr22, *(unsigned int**)&v22);
                                ptr4 = ptr22;
                                ptr21 = ptr22;
                            }
                            else {
                                ptr4 = (unsigned int*)((char*)ptr4 + 1);
                                ptr21 = ptr4;
                                ptr22 = ptr4;
                                ptr19 = (unsigned int*)unk_lib_sub12(*(unsigned int**)&v22);
                            }
                            _Character1 = (int)ptr19;
                            v32 = (int)ptr19;
                            if(_Character1 == -1) {
                                goto loc_403F77;
                            }
                            else {
                                v9 = v8;
                            }
                        }
                        ptr19 = ptr9;
                        unsigned int* ptr26 = ptr5;
                        if(ptr19 && !ptr26) {
                        loc_403F60:
                            if(_Character1 != -1) {
                                *(int*)&v22 = v27;
                                _ungetc_nolock(_Character1, *(FILE**)&v22);
                            }
                            goto loc_403F77;
                        }
                        else {
                            char v51 = v9 == 111;
                            if(!v51 && v9 >= 111) {
                                unsigned int v52 = (unsigned int)(v9 - 112);
                                if(!v52) {
                                    v10 = 1;
                                loc_403B5F:
                                    ptr19 = ptr9;
                                loc_403B68:
                                    if(_Character1 == 45) {
                                        v13 = 1;
                                        goto loc_403B78;
                                    }
                                    if(_Character1 == 43) {
                                    loc_403B78:
                                        unsigned int* ptr27 = (unsigned int*)((char*)ptr26 - 1);
                                        char v53 = ptr27 ? 0: 1;
                                        ptr5 = ptr27;
                                        if(v53 && ptr19) {
                                            ptr19 = (unsigned int)1 | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                            goto loc_403BBD;
                                        }
                                        else {
                                            *(int*)&v22 = v27;
                                            ptr4 = (unsigned int*)((char*)ptr4 + 1);
                                            ptr21 = ptr4;
                                            ptr22 = ptr4;
                                            ptr19 = (unsigned int*)unk_lib_sub12(*(unsigned int**)&v22);
                                            _Character1 = (int)ptr19;
                                            v32 = (int)ptr19;
                                            v9 = v8;
                                        }
                                    }
                                    ptr19 = (unsigned int)v50 | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                    goto loc_403BBD;
                                }
                                else {
                                    ptr19 = (unsigned int*)(v52 - 3);
                                    if(ptr19) {
                                        int* ptr28 = (int*)((char*)ptr19 - 2);
                                        if(!ptr28) {
                                            goto loc_403B5F;
                                        }
                                        else {
                                            int* ptr29 = (int*)((char*)ptr28 - 3);
                                            char v54 = ptr29 ? 0: 1;
                                            if(!v54) {
                                                int* ptr30 = (int*)((char*)ptr29 - 3);
                                                char v55 = ptr30 ? 0: 1;
                                                if(!v55) {
                                                loc_403870:
                                                    ptr19 = (unsigned int*)*(char*)&ptr13[0];
                                                    if(ptr19 != _Character1) {
                                                        goto loc_403F60;
                                                    }
                                                    else {
                                                        ptr19 = (unsigned int)(v37 + 0xFF) | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                        if(!v12) {
                                                            ptr14 = ptr16;
                                                        }
                                                    loc_40369E:
                                                        ptr20 = ptr21;
                                                        ptr19 = (unsigned int)((unsigned char)ptr19 + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                        v37 = (unsigned char)ptr19;
                                                        ptr13 = (unsigned int*)((char*)ptr13 + 1);
                                                    loc_403F28:
                                                        if(_Character1 != -1 || (*(char*)&ptr13[0] == 37 && *((char*)&ptr13[0] + 1) == 110)) {
                                                            goto loc_403F35;
                                                        }
                                                        else {
                                                            goto loc_403F77;
                                                        }
                                                    }
                                                }
                                                else {
                                                    ptr30 = (unsigned int)v47 | ((unsigned int)(int*)((int)(int*)((int)ptr30 >>> 8) & 0xffffff) << 8);
                                                    if((char)v47 > 0) {
                                                        v46 = 1;
                                                    }
                                                    ptr2 = (unsigned int*)((char*)ptr13 + 1);
                                                    if(*(char*)&ptr2[0] == 94) {
                                                        ptr2 = (unsigned int*)((char*)ptr2 + 1);
                                                        v45 = 0xFF;
                                                    }
                                                    *(int*)&v22 = 32;
                                                    ptr19 = (unsigned int*)memset2((int)&v19, 0, *(int*)&v22);
                                                    if(*(char*)&ptr2[0] != 93) {
                                                    loc_403962:
                                                        v7 = (unsigned int)v43 | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
                                                    }
                                                    else {
                                                        v7 = (unsigned int)93 | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
                                                        char v56 = 32;
                                                        ptr2 = (unsigned int*)((char*)ptr2 + 1);
                                                    }
                                                    goto loc_403968;
                                                }
                                            }
                                            else {
                                                ptr19 = ptr9;
                                            loc_40398E:
                                                switch(_Character1) {
                                                    case 43: {
                                                    loc_40399E:
                                                        unsigned int* ptr31 = (unsigned int*)((char*)ptr26 - 1);
                                                        char v57 = ptr31 ? 0: 1;
                                                        ptr5 = ptr31;
                                                        if(v57 && ptr19) {
                                                            ptr19 = (unsigned int)1 | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                            v50 = 1;
                                                            goto loc_4039B7;
                                                        }
                                                        else {
                                                            v6 = v27;
                                                            ptr4 = (unsigned int*)((char*)ptr4 + 1);
                                                            *(int*)&v22 = v6;
                                                            ptr21 = ptr4;
                                                            ptr22 = ptr4;
                                                            ptr19 = (unsigned int*)unk_lib_sub12(*(unsigned int**)&v22);
                                                            _Character1 = (int)ptr19;
                                                            v32 = (int)ptr19;
                                                        }
                                                        break;
                                                    }
                                                    case 45: {
                                                        v13 = 1;
                                                        goto loc_40399E;
                                                    }
                                                    default: {
                                                    loc_4039B7:
                                                        v6 = v27;
                                                        break;
                                                    }
                                                }
                                                if(_Character1 != 48) {
                                                    v9 = v8;
                                                }
                                                else {
                                                    ptr4 = (unsigned int*)((char*)ptr4 + 1);
                                                    *(int*)&v22 = v6;
                                                    ptr21 = ptr4;
                                                    ptr22 = ptr4;
                                                    ptr19 = (unsigned int*)unk_lib_sub12(*(unsigned int**)&v22);
                                                    _Character1 = (int)ptr19;
                                                    v32 = (int)ptr19;
                                                    if((unsigned char)_Character1 != 120 && (unsigned char)_Character1 != 88) {
                                                        v9 = v8;
                                                        v14 = 1;
                                                        if(v9 != 120) {
                                                            if(ptr9) {
                                                                ptr5 = (unsigned int*)((char*)ptr5 - 1);
                                                                if(!ptr5) {
                                                                    ++v50;
                                                                }
                                                            }
                                                            *(int*)&v22 = 111;
                                                            v9 = *(int*)&v22;
                                                            v8 = *(int*)&v22;
                                                            ptr19 = (unsigned int)v50 | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                            goto loc_403BBD;
                                                        }
                                                        else {
                                                            ptr4 = (unsigned int*)((char*)ptr4 - 1);
                                                            ptr21 = ptr4;
                                                            ptr22 = ptr4;
                                                            if(_Character1 != -1) {
                                                                *(int*)&v22 = v6;
                                                                ptr19 = (unsigned int*)_ungetc_nolock(_Character1, *(FILE**)&v22);
                                                                v9 = v8;
                                                            }
                                                            *(int*)&v22 = 48;
                                                            _Character1 = *(int*)&v22;
                                                            v32 = *(int*)&v22;
                                                        }
                                                    }
                                                    else {
                                                        ptr4 = (unsigned int*)((char*)ptr4 + 1);
                                                        *(int*)&v22 = v6;
                                                        ptr21 = ptr4;
                                                        ptr22 = ptr4;
                                                        ptr19 = (unsigned int*)unk_lib_sub12(*(unsigned int**)&v22);
                                                        char v58 = ptr9 ? 0: 1;
                                                        _Character1 = (int)ptr19;
                                                        v32 = (int)ptr19;
                                                        if(!v58) {
                                                            ptr19 = (unsigned int*)((char*)ptr5 - 2);
                                                            ptr5 = (unsigned int*)((char*)ptr5 - 2);
                                                            if((int)ptr19 < 1) {
                                                                ++v50;
                                                            }
                                                        }
                                                        *(int*)&v22 = 120;
                                                        v9 = *(int*)&v22;
                                                        v8 = *(int*)&v22;
                                                    }
                                                }
                                                ptr19 = (unsigned int)v50 | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                goto loc_403BBD;
                                            }
                                        }
                                    }
                                }
                            }
                            else if(v51) {
                                goto loc_403B68;
                            }
                            else if(v9 != 99) {
                                char v59 = v9 == 100;
                                char v60 = v9 < 100;
                                char v61 = (((v9 - 100) ^ v9) & (v9 ^ 0x64)) < 0;
                                if(v59) {
                                    goto loc_403B68;
                                }
                                else if(v60 != v61) {
                                    goto loc_403870;
                                }
                                else if(v9 == 105) {
                                    *(int*)&v22 = 100;
                                    v8 = *(int*)&v22;
                                    goto loc_40398E;
                                }
                                else if(v9 <= 103) {
                                    unsigned int v62 = 0;
                                    switch(_Character1) {
                                        case 43: {
                                        loc_4032FC:
                                            unsigned int* ptr32 = ptr21;
                                            unsigned int* ptr33 = (unsigned int*)((char*)ptr26 - 1);
                                            *(int*)&v22 = v27;
                                            ptr5 = ptr33;
                                            ptr1 = (unsigned int*)((char*)ptr32 + 1);
                                            _Character1 = unk_lib_sub12(*(unsigned int**)&v22);
                                            ptr19 = ptr9;
                                            v32 = _Character1;
                                            break;
                                        }
                                        case 45: {
                                            unsigned char* ptr34 = ptr15;
                                            v62 = 1;
                                            ptr34[0] = 45;
                                            goto loc_4032FC;
                                        }
                                        default: {
                                            ptr1 = ptr21;
                                            break;
                                        }
                                    }
                                    if(!ptr19) {
                                        ptr5 = (unsigned int*)0xFFFFFFFF;
                                    }
                                    *(int*)&v22 = (unsigned int)(unsigned char)_Character1;
                                    int v63 = isdigit(*(int*)&v22);
                                    unsigned int* ptr35 = ptr5;
                                    while(v63) {
                                        unsigned int* ptr36 = ptr35;
                                        ptr35 = (unsigned int*)((char*)ptr35 - 1);
                                        ptr5 = ptr35;
                                        if(!ptr36) {
                                        loc_4033B5:
                                            int v64 = v15;
                                            unsigned int* ptr37 = *(unsigned int*)(v64 + 132);
                                            ptr19 = (unsigned int)**ptr37 | ((unsigned int)((*ptr37 >>> 8) & 0xffffff) << 8);
                                            v45 = **ptr37;
                                            if((unsigned char)ptr19 != (unsigned char)_Character1) {
                                            loc_4034BA:
                                                if(!v14 || (_Character1 != 101 && _Character1 != 69)) {
                                                loc_403623:
                                                    unsigned int* ptr38 = (unsigned int*)((char*)ptr1 - 1);
                                                    ptr21 = (unsigned int*)((char*)ptr1 - 1);
                                                    ptr22 = ptr38;
                                                    if(_Character1 != -1) {
                                                        *(int*)&v22 = v27;
                                                        ptr19 = (unsigned int*)_ungetc_nolock(_Character1, *(FILE**)&v22);
                                                    }
                                                    if(!v14) {
                                                        goto loc_403F77;
                                                    }
                                                    else {
                                                        if(!v12) {
                                                            unsigned char* ptr39 = ptr15;
                                                            ++v38;
                                                            *(unsigned int**)&v22 = &v15;
                                                            unsigned int* ptr40 = ptr8;
                                                            unsigned char* ptr41 = ptr39;
                                                            ptr39[v62] = 0;
                                                            int v65 = (int)v10;
                                                            unsigned int* ptr42 = ptr40;
                                                            int v66 = v65 - 1;
                                                            PVOID v67 = DecodePointer(gvar_418CB8);
                                                            ptr19 = (unsigned int*)v67(v66);
                                                        }
                                                        ptr13 = ptr3;
                                                        ptr19 = (unsigned int)v37 | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                        goto loc_40369E;
                                                    }
                                                }
                                                else {
                                                    unsigned int* ptr43 = ptr5;
                                                    ptr19 = ptr5;
                                                    ptr5 = (unsigned int*)((char*)ptr43 - 1);
                                                    if(!ptr19) {
                                                        goto loc_403623;
                                                    }
                                                    else {
                                                        ptr15[v62] = 101;
                                                        *(int**)&v22 = &v29;
                                                        ++v62;
                                                        ptr19 = (unsigned int*)__check_float_string(v62, &v28, &ptr15, &v17, *(int**)&v22);
                                                        if(!ptr19) {
                                                            goto loc_403F77;
                                                        }
                                                        else {
                                                            *(int*)&v22 = v27;
                                                            ptr1 = (unsigned int*)((char*)ptr1 + 1);
                                                            _Character1 = unk_lib_sub12(*(unsigned int**)&v22);
                                                            v32 = _Character1;
                                                            if(_Character1 == 45) {
                                                                ptr15[v62] = 45;
                                                                *(int**)&v22 = &v29;
                                                                ++v62;
                                                                ptr19 = (unsigned int*)__check_float_string(v62, &v28, &ptr15, &v17, *(int**)&v22);
                                                                if(!ptr19) {
                                                                    goto loc_403F77;
                                                                }
                                                                else {
                                                                    goto loc_403575;
                                                                }
                                                            }
                                                            if(_Character1 == 43) {
                                                            loc_403575:
                                                                unsigned int* ptr44 = ptr5;
                                                                unsigned int* ptr45 = ptr5;
                                                                ptr5 = (unsigned int*)((char*)ptr44 - 1);
                                                                if(!ptr45) {
                                                                    ptr5 = NULL;
                                                                }
                                                                else {
                                                                    *(int*)&v22 = v27;
                                                                    ptr1 = (unsigned int*)((char*)ptr1 + 1);
                                                                    _Character1 = unk_lib_sub12(*(unsigned int**)&v22);
                                                                    v32 = _Character1;
                                                                }
                                                            }
                                                            *(int*)&v22 = (unsigned int)(unsigned char)_Character1;
                                                            ptr19 = (unsigned int*)isdigit(*(int*)&v22);
                                                            while(ptr19) {
                                                                unsigned int* ptr46 = ptr5;
                                                                ptr19 = ptr5;
                                                                ptr5 = (unsigned int*)((char*)ptr46 - 1);
                                                                if(!ptr19) {
                                                                    break;
                                                                }
                                                                else {
                                                                    unsigned char* ptr47 = ptr15;
                                                                    ++v14;
                                                                    ptr47[v62] = (unsigned char)_Character1;
                                                                    *(int**)&v22 = &v29;
                                                                    ++v62;
                                                                    ptr19 = (unsigned int*)__check_float_string(v62, &v28, &ptr15, &v17, *(int**)&v22);
                                                                    if(!ptr19) {
                                                                        goto loc_403F77;
                                                                    }
                                                                    else {
                                                                        *(int*)&v22 = v27;
                                                                        ptr1 = (unsigned int*)((char*)ptr1 + 1);
                                                                        _Character1 = unk_lib_sub12(*(unsigned int**)&v22);
                                                                        int _C = (int)(unsigned char)_Character1;
                                                                        v32 = _Character1;
                                                                        ptr19 = (unsigned int*)isdigit(_C);
                                                                    }
                                                                }
                                                            }
                                                            goto loc_403623;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                ptr19 = ptr35;
                                                ptr5 = (unsigned int*)((char*)ptr35 - 1);
                                                if(!ptr19) {
                                                    goto loc_4034BA;
                                                }
                                                else {
                                                    *(int*)&v22 = v27;
                                                    ptr1 = (unsigned int*)((char*)ptr1 + 1);
                                                    int v68 = unk_lib_sub12(*(unsigned int**)&v22);
                                                    unsigned char* ptr48 = ptr15;
                                                    _Character1 = v68;
                                                    v68 = (unsigned int)v45 | ((unsigned int)((v68 >>> 8) & 0xffffff) << 8);
                                                    v32 = _Character1;
                                                    ptr48[v62] = (unsigned char)v68;
                                                    ++v62;
                                                    ptr19 = (unsigned int*)__check_float_string(v62, &v28, &ptr15, &v17, &v29);
                                                    if(!ptr19) {
                                                        goto loc_403F77;
                                                    }
                                                    else {
                                                        *(int*)&v22 = (unsigned int)(unsigned char)_Character1;
                                                        ptr19 = (unsigned int*)isdigit(*(int*)&v22);
                                                        while(ptr19) {
                                                            unsigned int* ptr49 = ptr5;
                                                            ptr19 = ptr5;
                                                            ptr5 = (unsigned int*)((char*)ptr49 - 1);
                                                            if(!ptr19) {
                                                                break;
                                                            }
                                                            else {
                                                                unsigned char* ptr50 = ptr15;
                                                                ++v14;
                                                                ptr50[v62] = (unsigned char)_Character1;
                                                                *(int**)&v22 = &v29;
                                                                ++v62;
                                                                ptr19 = (unsigned int*)__check_float_string(v62, &v28, &ptr15, &v17, *(int**)&v22);
                                                                if(!ptr19) {
                                                                    goto loc_403F77;
                                                                }
                                                                else {
                                                                    *(int*)&v22 = v27;
                                                                    ptr1 = (unsigned int*)((char*)ptr1 + 1);
                                                                    _Character1 = unk_lib_sub12(*(unsigned int**)&v22);
                                                                    int _C1 = (int)(unsigned char)_Character1;
                                                                    v32 = _Character1;
                                                                    ptr19 = (unsigned int*)isdigit(_C1);
                                                                }
                                                            }
                                                        }
                                                        goto loc_4034BA;
                                                    }
                                                }
                                            }
                                        }
                                        else {
                                            unsigned char* ptr51 = ptr15;
                                            ++v14;
                                            ptr51[v62] = (unsigned char)_Character1;
                                            *(int**)&v22 = &v29;
                                            ++v62;
                                            ptr19 = (unsigned int*)__check_float_string(v62, &v28, &ptr15, &v17, *(int**)&v22);
                                            if(!ptr19) {
                                                goto loc_403F77;
                                            }
                                            else {
                                                *(int*)&v22 = v27;
                                                ptr1 = (unsigned int*)((char*)ptr1 + 1);
                                                _Character1 = unk_lib_sub12(*(unsigned int**)&v22);
                                                int _C2 = (int)(unsigned char)_Character1;
                                                v32 = _Character1;
                                                v63 = isdigit(_C2);
                                                ptr35 = ptr5;
                                            }
                                        }
                                    }
                                    goto loc_4033B5;
                                }
                                else if(v9 != 110) {
                                    goto loc_403870;
                                }
                                else {
                                    char v69 = v12 ? 0: 1;
                                    ptr19 = ptr4;
                                    if(v69) {
                                        goto loc_403E87;
                                    }
                                    else {
                                        ptr19 = (unsigned int)v37 | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                        goto loc_40369E;
                                    }
                                }
                            }
                            else if(!ptr19) {
                                unsigned int* ptr52 = (unsigned int*)((char*)ptr26 + 1);
                                ptr9 = (unsigned int*)0x1;
                                ptr5 = ptr52;
                            }
                            if((char)v47 <= 0) {
                            loc_4036D8:
                                unsigned int* ptr53 = ptr21;
                                unsigned int* ptr54 = ptr8;
                                unsigned int* ptr55 = (unsigned int*)((char*)ptr53 - 1);
                                ptr21 = (unsigned int*)((char*)ptr53 - 1);
                                ptr22 = ptr55;
                                if(_Character1 != -1) {
                                    *(int*)&v22 = v27;
                                    _ungetc_nolock(_Character1, *(FILE**)&v22);
                                    ptr55 = ptr21;
                                }
                                int v70 = v8;
                                while(1) {
                                    if(ptr9) {
                                        unsigned int* ptr56 = ptr5;
                                        unsigned int* ptr57 = ptr5;
                                        ptr5 = (unsigned int*)((char*)ptr56 - 1);
                                        if(!ptr57) {
                                        loc_403B0D:
                                            ptr19 = ptr8;
                                            if(ptr19 == ptr54) {
                                                goto loc_403F77;
                                            }
                                            else {
                                                if(!v12) {
                                                    ++v38;
                                                    if(v70 != 99) {
                                                        char v71 = v46 ? 0: 1;
                                                        ptr13 = ptr3;
                                                        if(!v71) {
                                                            *(short*)&ptr19[0] = 0;
                                                            ptr19 = (unsigned int)v37 | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                            goto loc_40369E;
                                                        }
                                                        else {
                                                            *(char*)&ptr19[0] = 0;
                                                            ptr19 = (unsigned int)v37 | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                            goto loc_40369E;
                                                        loc_403968:
                                                            do {
                                                                ptr19 = (unsigned int)*(char*)&ptr2[0] | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                                if(*(char*)&ptr2[0] != 93) {
                                                                    ptr2 = (unsigned int*)((char*)ptr2 + 1);
                                                                    char v72 = (unsigned char)ptr19 == 45;
                                                                    if(v72) {
                                                                        v72 = (unsigned char)v7 ? 0: 1;
                                                                        if(!v72) {
                                                                            v5 = (unsigned int)*(char*)&ptr2[0] | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
                                                                            v72 = *(char*)&ptr2[0] == 93;
                                                                            if(!v72) {
                                                                                ptr2 = (unsigned int*)((char*)ptr2 + 1);
                                                                                ptr3 = ptr2;
                                                                                if((unsigned char)v5 > (unsigned char)v7) {
                                                                                    ptr19 = (unsigned int)(unsigned char)ptr19 | ((unsigned int)(unsigned char)v5 << 8) | ((unsigned int)(unsigned short)(int*)((int)ptr19 >>> 16) << 16);
                                                                                }
                                                                                else {
                                                                                    ptr19 = (unsigned int)(unsigned char)ptr19 | ((unsigned int)(unsigned char)v7 << 8) | ((unsigned int)(unsigned short)(int*)((int)ptr19 >>> 16) << 16);
                                                                                    v7 = (unsigned int)(unsigned char)v5 | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
                                                                                }
                                                                                if((unsigned char)(int*)((int)ptr19 >>> 8) > (unsigned char)v7) {
                                                                                    int v73 = (unsigned int)(unsigned char)v7;
                                                                                    ptr19 = (unsigned int)((unsigned char)(int*)((int)ptr19 >>> 8) - (unsigned char)v7) | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                                                    int counter = (unsigned int)(unsigned char)ptr19;
                                                                                    do {
                                                                                        int v74 = v73;
                                                                                        int v75 = v73;
                                                                                        int v76 = v74 >>> 3;
                                                                                        ptr19 = (unsigned int)(1 << (v75 & 0x7)) | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                                                        *(char*)(v76 + (int)&v19) = (1 << (v75 & 0x7)) | *(char*)(v76 + (int)&v19);
                                                                                        ++v73;
                                                                                        --counter;
                                                                                    }
                                                                                    while(counter);
                                                                                    ptr2 = ptr3;
                                                                                }
                                                                                int v77 = (unsigned int)(unsigned char)(int*)((int)ptr19 >>> 8);
                                                                                int v78 = (unsigned int)(unsigned char)(int*)((int)ptr19 >>> 8);
                                                                                v5 = v77 & 0x7;
                                                                                v7 = v78 >>> 3;
                                                                                ptr19 = (unsigned int)(1 << (v5 & 0x1f)) | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                                                *(char*)(v7 + (int)&v19) = (1 << (v5 & 0x1f)) | *(char*)(v7 + (int)&v19);
                                                                                v7 &= 0xffffff00;
                                                                                goto loc_403968;
                                                                            }
                                                                        }
                                                                    }
                                                                    int v79 = (unsigned int)(unsigned char)ptr19;
                                                                    int v80 = (unsigned int)(unsigned char)ptr19;
                                                                    v43 = (unsigned char)ptr19;
                                                                    v7 = v80 >>> 3;
                                                                    v5 = v79 & 0x7;
                                                                    ptr19 = (unsigned int)(1 << (v5 & 0x1f)) | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                                    *(char*)(v7 + (int)&v19) = (1 << (v5 & 0x1f)) | *(char*)(v7 + (int)&v19);
                                                                    goto loc_403962;
                                                                }
                                                            }
                                                            while(*(char*)&ptr2[0] != 93);
                                                            if(!(unsigned char)ptr19) {
                                                                goto loc_403F77;
                                                            }
                                                            else {
                                                                ptr3 = ptr2;
                                                                goto loc_4036D8;
                                                            }
                                                        }
                                                    }
                                                }
                                                ptr13 = ptr3;
                                                ptr19 = (unsigned int)v37 | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                                                goto loc_40369E;
                                            }
                                        }
                                    }
                                    *(int*)&v22 = v27;
                                    unsigned int* ptr58 = (unsigned int*)((char*)ptr55 + 1);
                                    ptr21 = (unsigned int*)((char*)ptr55 + 1);
                                    ptr22 = ptr58;
                                    _Character1 = unk_lib_sub12(*(unsigned int**)&v22);
                                    v32 = _Character1;
                                    ptr55 = *(unsigned int**)&v22;
                                    if(_Character1 == -1) {
                                    loc_403AED:
                                        unsigned int* ptr59 = (unsigned int*)((char*)ptr21 - 1);
                                        ptr21 = (unsigned int*)((char*)ptr21 - 1);
                                        ptr22 = ptr59;
                                        if(_Character1 != -1) {
                                            *(int*)&v22 = v27;
                                            _ungetc_nolock(_Character1, *(FILE**)&v22);
                                            ptr55 = *(unsigned int**)&v22;
                                        }
                                        goto loc_403B0D;
                                    }
                                    else {
                                        if(v70 != 99) {
                                            if(v70 == 115) {
                                                if(_Character1 >= 9 && _Character1 <= 13) {
                                                    break;
                                                }
                                                else if(_Character1 != 32) {
                                                    goto loc_4037AC;
                                                }
                                            }
                                            if(v70 != 123) {
                                                break;
                                            }
                                            else {
                                                int v81 = _Character1 >> 3;
                                                int v82 = 1 << (_Character1 & 0x7);
                                                ptr55 = (unsigned int*)((int)*(char*)(v81 + (int)&v19) ^ (int)v45);
                                                if(!(int*)((int)ptr55 & v82)) {
                                                    break;
                                                }
                                            }
                                        }
                                    loc_4037AC:
                                        if(v12) {
                                            ptr54 = (unsigned int*)((char*)ptr54 + 1);
                                        }
                                        else if(v46) {
                                            *(int*)&v22 = (unsigned int)(unsigned char)_Character1;
                                            char v83 = (unsigned char)_Character1;
                                            int v84 = isleadbyte(*(int*)&v22);
                                            if(v84) {
                                                unsigned int* ptr60 = ptr21;
                                                *(int*)&v22 = v27;
                                                unsigned int* ptr61 = (unsigned int*)((char*)ptr60 + 1);
                                                ptr21 = (unsigned int*)((char*)ptr60 + 1);
                                                ptr22 = ptr61;
                                                int v85 = unk_lib_sub12(*(unsigned int**)&v22);
                                                char v86 = (unsigned char)v85;
                                            }
                                            *(int*)&v18 = 63;
                                            *(unsigned int**)&v22 = &v15;
                                            int v87 = v15;
                                            int v88 = _mbtowc_l(&v18, &v83, *(size_t*)(v87 + 116), *(_locale_t*)&v22);
                                            unsigned int* ptr62 = ptr8;
                                            v88 = (unsigned int)v18 | ((unsigned int)(unsigned short)(v88 >>> 16) << 16);
                                            *(short*)&ptr62[0] = v18;
                                            ptr8 = (unsigned int*)((char*)ptr62 + 2);
                                        }
                                        else {
                                            unsigned int* ptr63 = ptr8;
                                            *(char*)&ptr63[0] = (unsigned char)_Character1;
                                            ptr8 = (unsigned int*)((char*)ptr63 + 1);
                                        }
                                        ptr55 = ptr21;
                                    }
                                }
                                goto loc_403AED;
                            }
                            else {
                                v46 = 1;
                                goto loc_4036D8;
                            }
                        }
                    }
                    else if((unsigned char)v39 == v41 && *((char*)&ptr13[0] + 1) == v41) {
                        ptr13 = (unsigned int*)((char*)ptr13 + 1);
                    }
                }
                *(int*)&v22 = v27;
                ptr20 = (unsigned int*)((char*)ptr20 + 1);
                ptr21 = ptr20;
                ptr22 = ptr20;
                _Character1 = unk_lib_sub12(*(unsigned int**)&v22);
                ptr19 = (unsigned int*)*(char*)&ptr13[0];
                ptr13 = (unsigned int*)((char*)ptr13 + 1);
                v32 = _Character1;
                if(ptr19 != _Character1) {
                    goto loc_403F60;
                }
                else {
                    *(int*)&v22 = (unsigned int)(unsigned char)_Character1;
                    ptr19 = (unsigned int*)isleadbyte(*(int*)&v22);
                    if(!ptr19) {
                        goto loc_403F28;
                    }
                    else {
                        *(int*)&v22 = v27;
                        ptr19 = (unsigned int*)unk_lib_sub12(*(unsigned int**)&v22);
                        unsigned int v89 = (unsigned int)*(char*)&ptr13[0];
                        ptr13 = (unsigned int*)((char*)ptr13 + 1);
                        if(ptr19 == v89) {
                            ptr21 = ptr20;
                            ptr22 = ptr20;
                            goto loc_403F28;
                        }
                        else {
                            int v90 = v27;
                            if(ptr19 != -1) {
                                *(int*)&v22 = v90;
                                _ungetc_nolock((int)ptr19, *(FILE**)&v22);
                            }
                            if(_Character1 != -1) {
                                *(int*)&v22 = v90;
                                _ungetc_nolock(_Character1, *(FILE**)&v22);
                            }
                            goto loc_403F77;
                        }
                    }
                }
            loc_403BBD:
                if(!v11) {
                    if((unsigned char)ptr19) {
                        v3 = v8;
                        goto loc_403E37;
                    }
                    else {
                        while(1) {
                            *(int*)&v22 = (unsigned int)(unsigned char)_Character1;
                            if(v9 != 120 && v9 != 112) {
                                int v91 = isdigit(*(int*)&v22);
                                v3 = v8;
                                v9 = *(int*)&v22;
                                if(!v91) {
                                    goto loc_403E0F;
                                }
                                else if(v3 != 111) {
                                    ptr0 = (unsigned int*)((int)ptr10 * 10);
                                    goto loc_403DBB;
                                }
                                else if(_Character1 >= 56) {
                                    goto loc_403E0F;
                                }
                                else {
                                    ptr0 = (unsigned int*)((int)ptr10 * 8);
                                    goto loc_403DBB;
                                }
                            }
                            else {
                                v4 = isalnum(*(int*)&v22);
                                v9 = *(int*)&v22;
                            }
                            if(!v4) {
                                break;
                            }
                            else {
                                *(int*)&v22 = _Character1;
                                int v92 = _hextodec(v22);
                                v3 = v8;
                                _Character1 = v92;
                                ptr0 = (unsigned int*)((int)ptr10 * 16);
                                v9 = *(int*)&v22;
                                v32 = _Character1;
                            loc_403DBB:
                                ++v14;
                                ptr19 = (unsigned int*)((int*)((int)ptr0 + _Character1) - 12);
                                char v93 = ptr9 ? 0: 1;
                                ptr10 = ptr19;
                                if(!v93) {
                                    ptr5 = (unsigned int*)((char*)ptr5 - 1);
                                    if(!ptr5) {
                                        goto loc_403E44;
                                    }
                                }
                                *(int*)&v22 = v27;
                                ptr4 = (unsigned int*)((char*)ptr4 + 1);
                                ptr21 = ptr4;
                                ptr22 = ptr4;
                                int v94 = unk_lib_sub12(*(unsigned int**)&v22);
                                v9 = v8;
                                _Character1 = v94;
                                v32 = v94;
                            }
                        }
                        v3 = v8;
                    loc_403E0F:
                        unsigned int* ptr64 = (unsigned int*)((char*)ptr4 - 1);
                        ptr21 = (unsigned int*)((char*)ptr4 - 1);
                        ptr22 = ptr64;
                        if(_Character1 != -1) {
                            *(int*)&v22 = v27;
                            _ungetc_nolock(_Character1, *(FILE**)&v22);
                            v9 = *(int*)&v22;
                        }
                    loc_403E37:
                        ptr19 = ptr10;
                    }
                loc_403E44:
                    if(v13) {
                        ptr19 = (unsigned int*)(0 - (int)ptr19);
                        ptr10 = ptr19;
                    }
                }
                else if((unsigned char)ptr19) {
                    v3 = v8;
                loc_403D0E:
                    v9 = v30;
                    ptr19 = (unsigned int*)v31;
                loc_403D21:
                    if(v13) {
                        int v95 = v9;
                        v9 = 0 - v9;
                        char v96 = (unsigned int)v95 > 0;
                        v30 = v9;
                        ptr19 = (unsigned int*)(0 - (int)(int*)((unsigned int)v96 + (int)ptr19));
                        v31 = (int)ptr19;
                    }
                }
                else {
                    while(1) {
                        *(int*)&v22 = (unsigned int)(unsigned char)_Character1;
                        if(v9 != 120 && v9 != 112) {
                            int v97 = isdigit(*(int*)&v22);
                            v3 = v8;
                            if(!v97) {
                            loc_403CE6:
                                unsigned int* ptr65 = (unsigned int*)((char*)ptr4 - 1);
                                ptr21 = (unsigned int*)((char*)ptr4 - 1);
                                ptr22 = ptr65;
                                if(_Character1 != -1) {
                                    *(int*)&v22 = v27;
                                    _ungetc_nolock(_Character1, *(FILE**)&v22);
                                }
                                goto loc_403D0E;
                            }
                            else if(v3 != 111) {
                                int v98 = v31;
                                *(int*)&v22 = 0;
                                int v99 = v30;
                                v1 = _allmul(v99, v98, 10, *(int*)&v22);
                                v31 = v20;
                                goto loc_403C83;
                            }
                            else if(_Character1 >= 56) {
                                goto loc_403CE6;
                            }
                            else {
                                int v100 = v31;
                                int v101 = v30;
                                v2 = ((unsigned long long)v101 | ((unsigned long long)v100 << 32)) * 8L;
                                v31 = (int)(v2 >>> 32L);
                                v1 = v101 * 8;
                                goto loc_403C83;
                            }
                        }
                        else {
                            v0 = isalnum(*(int*)&v22);
                        }
                        if(!v0) {
                            v3 = v8;
                            goto loc_403CE6;
                        }
                        else {
                            int v102 = v30;
                            v2 = ((unsigned long long)v102 | ((unsigned long long)v31 << 32)) * 16L;
                            int v103 = (int)(v2 >>> 32L);
                            *(int*)&v22 = _Character1;
                            int v104 = v102 * 16;
                            v31 = v103;
                            int v105 = _hextodec(v22);
                            v3 = v8;
                            _Character1 = v105;
                            v1 = v104;
                            v32 = _Character1;
                        loc_403C83:
                            ++v14;
                            int v106 = _Character1 - 48;
                            int v107 = v106 < 0 ? -1: 0;
                            int v108 = v1;
                            v9 = v106 + v1;
                            char v109 = __carry__(v106, v108);
                            int v110 = v31;
                            v30 = v9;
                            ptr19 = (unsigned int*)((unsigned int)v109 + v110 + v107);
                            char v111 = ptr9 ? 0: 1;
                            v31 = (int)ptr19;
                            if(!v111) {
                                ptr5 = (unsigned int*)((char*)ptr5 - 1);
                                if(!ptr5) {
                                    goto loc_403D21;
                                }
                            }
                            *(int*)&v22 = v27;
                            ptr4 = (unsigned int*)((char*)ptr4 + 1);
                            ptr21 = ptr4;
                            ptr22 = ptr4;
                            int v112 = unk_lib_sub12(*(unsigned int**)&v22);
                            v9 = v8;
                            _Character1 = v112;
                            v32 = v112;
                        }
                    }
                    v3 = v8;
                    goto loc_403CE6;
                }
                if(!((unsigned int)v3 > 70 ? v14: 0)) {
                    goto loc_403F77;
                }
                else if(v12) {
                    ptr13 = ptr3;
                    ptr19 = (unsigned int)v37 | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                    goto loc_40369E;
                }
                else {
                    ++v38;
                    ptr13 = ptr3;
                    ptr19 = ptr10;
                loc_403E87:
                    if(v11) {
                        ptr19 = ptr8;
                        ptr19[0] = (unsigned int)v30;
                        ptr19[1] = (unsigned int)v31;
                    }
                    else {
                        v9 = (unsigned int)v10 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
                        char v113 = v10 ? 0: 1;
                        unsigned int* ptr66 = ptr8;
                        if(!v113) {
                            ptr66[0] = (unsigned int)ptr19;
                        }
                        else {
                            *(short*)&ptr66[0] = (unsigned short)ptr19;
                        }
                    }
                    ptr19 = (unsigned int)v37 | ((unsigned int)(int*)((int)(int*)((int)ptr19 >>> 8) & 0xffffff) << 8);
                    goto loc_40369E;
                }
            }
        }
    }
    _security_check_cookie((uintptr_t)((int)&v16 ^ (int)ptr11));
    return result;
}

int _ioinit(int param0) {
    int v0;
    DWORD nStdHandle;
    HANDLE hFile;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    int v7;
    int v8;
    unsigned int v9;
    int v10;
    int v11;
    int v12;
    int v13 = SEH_prolog4(&gvar_417768, 100);
    int v14 = lock(11);
    unsigned int v15 = v9;
    unsigned int v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 1;
    char v20 = 0;
    char v21 = 0;
    *(int*)(v12 - 4) = 0;  // __try{ (see __finally:405ADBh)
    unsigned int v22 = 32;
    int* ptr0 = (int*)sub_408F5B(32, 64);
    int v23 = v10;
    unsigned int v24 = v9;
    int* ptr1 = ptr0;
    *(unsigned int*)(v12 - 36) = ptr0;
    char v25 = ptr1 ? 0: 1;
    char v26 = (int)ptr1 < 0;
    char v27 = __parity__((unsigned char)ptr1);
    char v28 = 0;
    char v29 = 0;
    if(v25) {
        int v30 = v12 - 16;
        int v31 = _local_unwind4((int*)&gvar_4183F0, v30, (int*)0xFFFFFFFE);
        int v32 = -1;
        v5 = 0;
        v4 = 1;
        v3 = 1;
        v2 = 0;
        v1 = 0;
    }
    else {
        gvar_4191D0 = ptr0;
        gvar_419FF8 = 32;
        while(1) {
            int* ptr2 = ptr0 + 0x200;
            char v33 = ptr2 == ptr1;
            char v34 = (int)ptr2 > (int)ptr1;
            char v35 = __parity__((unsigned char)ptr1 - (unsigned char)ptr2);
            char v36 = ptr2 > ptr1;
            char v37 = (int)(int*)((int)(int*)((int)(int*)((int)ptr1 - (int)ptr2) ^ (int)ptr1) & (int)(int*)((int)ptr2 ^ (int)ptr1)) < 0;
            char v38 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 - (int)ptr2) ^ (int)(int*)((int)ptr2 ^ (int)ptr1)) >>> 4) & 0x1);
            if(!v36) {
                break;
            }
            else {
                *(short*)(ptr1 + 1) = 0xa00;
                *ptr1 = -1;
                char v39 = *ptr1 ? 0: 1;
                char v40 = *ptr1 < 0;
                char v41 = __parity__((unsigned char)*ptr1);
                char v42 = 0;
                char v43 = 0;
                *(ptr1 + 2) = 0;
                *(char*)(ptr1 + 9) = *(char*)(ptr1 + 9) & 0x80;
                char v44 = *(char*)(ptr1 + 9) ? 0: 1;
                char v45 = *(char*)(ptr1 + 9) < 0;
                char v46 = __parity__(*(char*)(ptr1 + 9));
                char v47 = 0;
                char v48 = 0;
                ptr2 = (unsigned int)(*(char*)(ptr1 + 9) & 0x7f) | ((unsigned int)(int*)((int)(int*)((int)ptr2 >>> 8) & 0xffffff) << 8);
                char v49 = *(char*)(ptr1 + 9) & 0x7f ? 0: 1;
                char v50 = (int*)((int)(int*)((int)ptr2 >>> 7) & 0x1);
                char v51 = __parity__((unsigned char)ptr2);
                char v52 = 0;
                char v53 = 0;
                *(char*)(ptr1 + 9) = (unsigned char)ptr2;
                *(short*)((char*)ptr1 + 37) = 0xa0a;
                *(ptr1 + 14) = 0;
                *(char*)(ptr1 + 13) = 0;
                int* ptr3 = ptr1;
                ptr1 += 16;
                char v54 = ptr1 ? 0: 1;
                char v55 = (int)ptr1 < 0;
                char v56 = __parity__((unsigned char)ptr1);
                char v57 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x40) ^ (int)ptr1) >>> 4) & 0x1);
                char v58 = (unsigned int)ptr3 >= 0xffffffc0;
                char v59 = (int)(int*)((int)(int*)((int)ptr1 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x40)) < 0;
                *(unsigned int*)(v12 - 36) = ptr1;
                ptr0 = gvar_4191D0;
            }
        }
        LPSTARTUPINFOW lpStartupInfo = (LPSTARTUPINFOW)(v12 - 116);
        GetStartupInfoW(lpStartupInfo);
        char v60 = *(short*)(v12 - 66) ? 0: 1;
        char v61 = *(short*)(v12 - 66) < 0;
        char v62 = __parity__((unsigned char)*(short*)(v12 - 66));
        char v63 = *(unsigned short*)(v12 - 66) < 0;
        char v64 = 0;
        char v65 = 0;
        if(!v60) {
            unsigned int* ptr4 = *(unsigned int*)(v12 - 64);
            char v66 = ptr4 ? 0: 1;
            char v67 = (int)ptr4 < 0;
            char v68 = __parity__((unsigned char)ptr4);
            char v69 = 0;
            char v70 = 0;
            if(v66) {
                goto loc_405A03;
            }
            else {
                unsigned int v71 = *ptr4;
                *(unsigned int*)(v12 - 28) = *ptr4;
                unsigned int* ptr5 = ptr4;
                int* ptr6 = (int*)(ptr4 + 1);
                char v72 = ptr6 ? 0: 1;
                char v73 = (int)ptr6 < 0;
                char v74 = __parity__((unsigned char)ptr6);
                char v75 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr5 ^ 0x4) ^ (int)ptr6) >>> 4) & 0x1);
                char v76 = (unsigned int)ptr5 >= 0xfffffffc;
                char v77 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr5) & (int*)~(int)(int*)((int)ptr5 ^ 0x4)) < 0;
                *(unsigned int*)(v12 - 40) = ptr6;
                int* ptr7 = ptr6;
                int* ptr8 = (int*)((int)ptr6 + v71);
                char v78 = ptr8 ? 0: 1;
                char v79 = (int)ptr8 < 0;
                char v80 = __parity__((unsigned char)ptr8);
                char v81 = (int*)((int)(int*)((int)(int*)((int)(int*)(v71 ^ (int)ptr7) ^ (int)ptr8) >>> 4) & 0x1);
                char v82 = __carry__(v71, (int)ptr7);
                char v83 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr7) & (int*)~(int)(int*)(v71 ^ (int)ptr7)) < 0;
                *(unsigned int*)(v12 - 32) = ptr8;
                int v84 = 0x800;
                char v85 = v71 == 0x800;
                char v86 = (int)v71 < 0x800;
                char v87 = __parity__((unsigned char)v71);
                char v88 = v71 < 0x800;
                char v89 = (((v71 - 0x800) ^ v71) & (v71 ^ 0x800)) < 0;
                char v90 = (((v71 - 0x800) ^ (v71 ^ 0x800)) >>> 4) & 0x1;
                if(v86 == v89) {
                    v71 = 0x800;
                    *(int*)(v12 - 28) = 0x800;
                }
                int v91 = 0;
                char v92 = 1;
                char v93 = 0;
                char v94 = 1;
                char v95 = 0;
                char v96 = 0;
                int v97 = 0;
                hFile = (HANDLE)0x1;
                char v98 = 0;
                char v99 = 0;
                char v100 = 0;
                char v101 = 0;
                char v102 = 0;
                *(int*)(v12 - 48) = 1;
                while(1) {
                    char v103 = gvar_419FF8 == v71;
                    char v104 = (int)gvar_419FF8 < (int)v71;
                    char v105 = __parity__((unsigned char)gvar_419FF8 - (unsigned char)v71);
                    char v106 = gvar_419FF8 < v71;
                    char v107 = (int)(((gvar_419FF8 - v71) ^ gvar_419FF8) & (gvar_419FF8 ^ v71)) < 0;
                    char v108 = (((gvar_419FF8 - v71) ^ (gvar_419FF8 ^ v71)) >>> 4) & 0x1;
                    if(v104 == v107) {
                    loc_40592B:
                        v22 = 0;
                        *(int*)(v12 - 44) = 0;
                        v9 = 0xfffffffe;
                        v16 = 0xfffffffe;
                        char* ptr9 = *(unsigned int*)(v12 - 40);
                        unsigned int* ptr10 = *(unsigned int*)(v12 - 32);
                        while(1) {
                            char v109 = v71 == v22;
                            char v110 = (int)v71 > (int)v22;
                            char v111 = __parity__((unsigned char)v22 - (unsigned char)v71);
                            char v112 = v71 > v22;
                            char v113 = (int)(((v22 - v71) ^ v22) & (v71 ^ v22)) < 0;
                            char v114 = (((v22 - v71) ^ (v71 ^ v22)) >>> 4) & 0x1;
                            if(v110 == v113) {
                                break;
                            }
                            else {
                                hFile = *ptr10;
                                char v115 = hFile == -1;
                                char v116 = (int)hFile < -1;
                                char v117 = __parity__((unsigned char)hFile - 0xFF);
                                char v118 = (unsigned int)hFile < 0xffffffff;
                                char v119 = (int)(int*)((int)(int*)((int)(int*)((int)hFile + 1) ^ (int)hFile) & (HANDLE)~(int)hFile) < 0;
                                char v120 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)hFile + 1) ^ (HANDLE)~(int)hFile) >>> 4) & 0x1);
                                if(!v115) {
                                    char v121 = hFile == 0xfffffffe;
                                    char v122 = (int)hFile < 0xfffffffe;
                                    char v123 = __parity__((unsigned char)hFile - 254);
                                    char v124 = (unsigned int)hFile < 0xfffffffe;
                                    char v125 = (int)(int*)((int)(int*)((int)(int*)((int)hFile + 2) ^ (int)hFile) & (int)(int*)((int)hFile ^ 0xfffffffe)) < 0;
                                    char v126 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)hFile + 2) ^ (int)(int*)((int)hFile ^ 0xfffffffe)) >>> 4) & 0x1);
                                    if(!v121) {
                                        ptr9 = (unsigned int)*ptr9 | ((unsigned int)(int*)((int)(int*)((int)ptr9 >>> 8) & 0xffffff) << 8);
                                        char v127 = (unsigned char)ptr9 & 0x1 ? 0: 1;
                                        char v128 = ((unsigned char)ptr9 & 0x1) < 0;
                                        char v129 = __parity__((unsigned char)ptr9 & 0x1);
                                        char v130 = 0;
                                        char v131 = 0;
                                        if(!v127) {
                                            char v132 = ((unsigned char)ptr9 & 0x8) < 0;
                                            char v133 = __parity__((unsigned char)ptr9 & 0x8);
                                            char v134 = 0;
                                            char v135 = 0;
                                            if(!((unsigned char)ptr9 & 0x8)) {
                                                DWORD v136 = GetFileType(hFile);
                                                ptr10 = *(unsigned int*)(v12 - 32);
                                                v132 = v136 >= 0x80000000;
                                                v133 = __parity__((unsigned char)v136);
                                                v134 = 0;
                                                v135 = 0;
                                                if(v136) {
                                                    goto loc_405964;
                                                }
                                            }
                                            else {
                                            loc_405964:
                                                unsigned int v137 = v22;
                                                unsigned int v138 = v22;
                                                int v139 = (int)(v137 >> 5);
                                                char v140 = (v138 >>> 4) & 0x1;
                                                char v141 = 0;
                                                char v142 = v139 ? 0: 1;
                                                char v143 = v139 < 0;
                                                char v144 = __parity__((unsigned char)v139);
                                                unsigned int v145 = v22;
                                                int v146 = (int)(v145 & 0x1f);
                                                char v147 = v146 ? 0: 1;
                                                char v148 = v146 < 0;
                                                char v149 = __parity__((unsigned char)v146);
                                                char v150 = 0;
                                                char v151 = 0;
                                                int v152 = v146;
                                                int v153 = v146 * 64;
                                                char v154 = (v152 >>> 26) & 0x1;
                                                char v155 = 0;
                                                char v156 = v153 ? 0: 1;
                                                char v157 = v153 < 0;
                                                char v158 = __parity__((unsigned char)v153);
                                                int v159 = v153;
                                                hFile = (HANDLE)(*(unsigned int*)(v139 * 4 + (int)&gvar_4191D0) + v153);
                                                char v160 = hFile ? 0: 1;
                                                char v161 = (int)hFile < 0;
                                                char v162 = __parity__((unsigned char)hFile);
                                                char v163 = (int*)((int)(int*)((int)(int*)((*(unsigned int*)(v139 * 4 + (int)&gvar_4191D0) ^ v159) ^ (int)hFile) >>> 4) & 0x1);
                                                char v164 = __carry__(*(unsigned int*)(v139 * 4 + (int)&gvar_4191D0), v159);
                                                char v165 = (int)(int*)((int)(int*)((int)hFile ^ v159) & ~(*(unsigned int*)(v139 * 4 + (int)&gvar_4191D0) ^ v159)) < 0;
                                                *(HANDLE*)(v12 - 36) = hFile;
                                                int v166 = *ptr10;
                                                *(int*)hFile = *ptr10;
                                                char* ptr11 = *(unsigned int*)(v12 - 40);
                                                *(char*)((int)hFile + 4) = *ptr11;
                                                int* ptr12 = (int*)((int)hFile + 12);
                                                int v167 = _crtInitializeCriticalSectionEx((int)ptr12, 4000, 0);
                                                int* ptr13 = &v11;
                                                char v168 = &v6 == 8;
                                                char v169 = (int)&v8 < 0;
                                                char v170 = __parity__((unsigned char)&v6 - 8);
                                                char v171 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v11 ^ 0xc) ^ (int)&v8) >>> 4) & 0x1);
                                                char v172 = (unsigned int)&v11 >= 0xfffffff4;
                                                char v173 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&v11) & (int*)~(int)(int*)((int)&v11 ^ 0xc)) < 0;
                                                int v174 = *(int*)((int)hFile + 8);
                                                *(int*)((int)hFile + 8) = *(int*)((int)hFile + 8) + 1;
                                                char v175 = *(int*)((int)hFile + 8) ? 0: 1;
                                                char v176 = *(int*)((int)hFile + 8) < 0;
                                                char v177 = __parity__((unsigned char)*(int*)((int)hFile + 8));
                                                char v178 = (((v174 ^ 0x1) ^ *(int*)((int)hFile + 8)) >>> 4) & 0x1;
                                                char v179 = ((*(int*)((int)hFile + 8) ^ v174) & ~(v174 ^ 0x1)) < 0;
                                                ptr10 = *(unsigned int*)(v12 - 32);
                                            }
                                            v71 = *(unsigned int*)(v12 - 28);
                                        }
                                    }
                                }
                                unsigned int v180 = v22;
                                ++v22;
                                char v181 = v22 ? 0: 1;
                                char v182 = v22 >= 0x80000000;
                                char v183 = __parity__((unsigned char)v22);
                                char v184 = (((v180 ^ 0x1) ^ v22) >>> 4) & 0x1;
                                char v185 = (int)((v22 ^ v180) & ~(v180 ^ 0x1)) < 0;
                                *(unsigned int*)(v12 - 44) = v22;
                                int v186 = *(int*)(v12 - 40);
                                int v187 = *(int*)(v12 - 40);
                                ptr9 = (char*)(v186 + 1);
                                char v188 = ptr9 ? 0: 1;
                                char v189 = (int)ptr9 < 0;
                                char v190 = __parity__((unsigned char)ptr9);
                                char v191 = (int*)((int)(int*)((int)(int*)((v187 ^ 0x1) ^ (int)ptr9) >>> 4) & 0x1);
                                char v192 = (int)(int*)((int)(int*)((int)ptr9 ^ v187) & ~(v187 ^ 0x1)) < 0;
                                *(unsigned int*)(v12 - 40) = ptr9;
                                unsigned int* ptr14 = ptr10;
                                ++ptr10;
                                char v193 = ptr10 ? 0: 1;
                                char v194 = (int)ptr10 < 0;
                                char v195 = __parity__((unsigned char)ptr10);
                                char v196 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr14 ^ 0x4) ^ (int)ptr10) >>> 4) & 0x1);
                                char v197 = (unsigned int)ptr14 >= 0xfffffffc;
                                char v198 = (int)(int*)((int)(int*)((int)ptr10 ^ (int)ptr14) & (int*)~(int)(int*)((int)ptr14 ^ 0x4)) < 0;
                                *(unsigned int*)(v12 - 32) = ptr10;
                            }
                        }
                        goto loc_405A06;
                    }
                    else {
                        int* ptr15 = (int*)sub_408F5B(32, 64);
                        int v199 = v10;
                        unsigned int v200 = v9;
                        int* ptr16 = ptr15;
                        *(unsigned int*)(v12 - 36) = ptr15;
                        char v201 = ptr16 ? 0: 1;
                        char v202 = (int)ptr16 < 0;
                        char v203 = __parity__((unsigned char)ptr16);
                        char v204 = 0;
                        char v205 = 0;
                        if(v201) {
                            v71 = gvar_419FF8;
                            *(unsigned int*)(v12 - 28) = gvar_419FF8;
                            break;
                        }
                        else {
                            *(unsigned int*)((int)(int*)((int)hFile * 4) + (int)&gvar_4191D0) = ptr16;
                            unsigned int v206 = gvar_419FF8;
                            gvar_419FF8 += 32;
                            char v207 = gvar_419FF8 ? 0: 1;
                            char v208 = gvar_419FF8 >= 0x80000000;
                            char v209 = __parity__((unsigned char)gvar_419FF8);
                            char v210 = (((v206 ^ 0x20) ^ gvar_419FF8) >>> 4) & 0x1;
                            char v211 = v206 >= 0xffffffe0;
                            char v212 = (int)((gvar_419FF8 ^ v206) & ~(v206 ^ 0x20)) < 0;
                            while(1) {
                                unsigned int v213 = *(unsigned int*)((int)(int*)((int)hFile * 4) + (int)&gvar_4191D0);
                                unsigned int v214 = v213 + 0x800;
                                char v215 = v214 == ptr16;
                                char v216 = (int)v214 > (int)ptr16;
                                char v217 = __parity__((unsigned char)ptr16 - (unsigned char)v214);
                                char v218 = v214 > (unsigned int)ptr16;
                                char v219 = (int)(int*)((int)(int*)((int)(int*)((int)ptr16 - v214) ^ (int)ptr16) & (int)(int*)(v214 ^ (int)ptr16)) < 0;
                                char v220 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr16 - v214) ^ (int)(int*)(v214 ^ (int)ptr16)) >>> 4) & 0x1);
                                if(!v218) {
                                    break;
                                }
                                else {
                                    *(short*)(ptr16 + 1) = 0xa00;
                                    *ptr16 = -1;
                                    char v221 = *ptr16 ? 0: 1;
                                    char v222 = *ptr16 < 0;
                                    char v223 = __parity__((unsigned char)*ptr16);
                                    char v224 = 0;
                                    char v225 = 0;
                                    *(ptr16 + 2) = 0;
                                    *(char*)(ptr16 + 9) = *(char*)(ptr16 + 9) & 0x80;
                                    char v226 = *(char*)(ptr16 + 9) ? 0: 1;
                                    char v227 = *(char*)(ptr16 + 9) < 0;
                                    char v228 = __parity__(*(char*)(ptr16 + 9));
                                    char v229 = 0;
                                    char v230 = 0;
                                    *(short*)((char*)ptr16 + 37) = 0xa0a;
                                    *(ptr16 + 14) = 0;
                                    *(char*)(ptr16 + 13) = 0;
                                    int* ptr17 = ptr16;
                                    ptr16 += 16;
                                    char v231 = ptr16 ? 0: 1;
                                    char v232 = (int)ptr16 < 0;
                                    char v233 = __parity__((unsigned char)ptr16);
                                    char v234 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr17 ^ 0x40) ^ (int)ptr16) >>> 4) & 0x1);
                                    char v235 = (unsigned int)ptr17 >= 0xffffffc0;
                                    char v236 = (int)(int*)((int)(int*)((int)ptr16 ^ (int)ptr17) & (int*)~(int)(int*)((int)ptr17 ^ 0x40)) < 0;
                                    *(unsigned int*)(v12 - 36) = ptr16;
                                }
                            }
                            HANDLE v237 = hFile;
                            hFile = (HANDLE)((int)hFile + 1);
                            char v238 = hFile ? 0: 1;
                            char v239 = (int)hFile < 0;
                            char v240 = __parity__((unsigned char)hFile);
                            char v241 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v237 ^ 0x1) ^ (int)hFile) >>> 4) & 0x1);
                            char v242 = (int)(int*)((int)(int*)((int)hFile ^ (int)v237) & (int*)~(int)(int*)((int)v237 ^ 0x1)) < 0;
                            *(HANDLE*)(v12 - 48) = hFile;
                            v71 = *(unsigned int*)(v12 - 28);
                        }
                    }
                }
                goto loc_40592B;
            }
        }
        else {
        loc_405A03:
            v9 = 0xfffffffe;
            v16 = 0xfffffffe;
        }
    loc_405A06:
        v22 = 0;
        char v243 = 1;
        char v244 = 0;
        char v245 = 1;
        char v246 = 0;
        char v247 = 0;
        while(1) {
            *(unsigned int*)(v12 - 44) = v22;
            char v248 = v22 == 3;
            char v249 = (int)v22 < 3;
            char v250 = __parity__((unsigned char)v22 - 3);
            char v251 = v22 < 3;
            char v252 = (((v22 - 3) ^ v22) & (v22 ^ 0x3)) < 0;
            char v253 = (((v22 - 3) ^ (v22 ^ 0x3)) >>> 4) & 0x1;
            if(v249 == v252) {
                break;
            }
            else {
                unsigned int v254 = v22;
                unsigned int v255 = v22;
                int v256 = (int)(v254 * 64);
                char v257 = (v255 >>> 26) & 0x1;
                char v258 = v252;
                char v259 = v256 ? 0: 1;
                char v260 = v256 < 0;
                char v261 = __parity__((unsigned char)v256);
                int v262 = v256;
                hFile = (HANDLE)(gvar_4191D0 + v256);
                char v263 = hFile ? 0: 1;
                char v264 = (int)hFile < 0;
                char v265 = __parity__((unsigned char)hFile);
                char v266 = (int*)((int)(int*)((int)(int*)((gvar_4191D0 ^ v262) ^ (int)hFile) >>> 4) & 0x1);
                char v267 = __carry__(gvar_4191D0, v262);
                char v268 = (int)(int*)((int)(int*)((int)hFile ^ v262) & ~(gvar_4191D0 ^ v262)) < 0;
                *(HANDLE*)(v12 - 36) = hFile;
                char v269 = *(int*)hFile == -1;
                char v270 = *(int*)hFile < -1;
                char v271 = __parity__((unsigned char)*(int*)hFile - 0xFF);
                char v272 = *(unsigned int*)hFile < 0xffffffff;
                char v273 = (((*(int*)hFile + 1) ^ *(int*)hFile) & ~*(int*)hFile) < 0;
                char v274 = (((*(int*)hFile + 1) ^ ~*(int*)hFile) >>> 4) & 0x1;
                if(!v269) {
                    char v275 = *(int*)hFile == 0xfffffffe;
                    char v276 = *(int*)hFile < 0xfffffffe;
                    char v277 = __parity__((unsigned char)*(int*)hFile - 254);
                    char v278 = *(unsigned int*)hFile < 0xfffffffe;
                    char v279 = (((*(int*)hFile + 2) ^ *(int*)hFile) & (*(int*)hFile ^ 0xfffffffe)) < 0;
                    char v280 = (((*(int*)hFile + 2) ^ (*(int*)hFile ^ 0xfffffffe)) >>> 4) & 0x1;
                    if(v275) {
                        goto loc_405A39;
                    }
                    else {
                        int v281 = (unsigned int)(*(char*)((int)hFile + 4) | 0x80) | ((unsigned int)(*(char*)((int)hFile + 4) < 0 ? 0xffffff: 0) << 8);
                        char v282 = *(char*)((int)hFile + 4) | 0x80 ? 0: 1;
                        char v283 = (v281 >>> 7) & 0x1;
                        char v284 = __parity__((unsigned char)v281);
                        char v285 = 0;
                        char v286 = 0;
                        *(char*)((int)hFile + 4) = (unsigned char)v281;
                    }
                }
                else {
                loc_405A39:
                    *(char*)((int)hFile + 4) = 129;
                    char v287 = v22 ? 0: 1;
                    char v288 = v22 >= 0x80000000;
                    char v289 = __parity__((unsigned char)v22);
                    char v290 = 0;
                    char v291 = 0;
                    if(v287) {
                        nStdHandle = 0xfffffff6;
                    }
                    else {
                        unsigned int v292 = v22 - 1;
                        unsigned int v293 = v22 - 1;
                        int v294 = 0 - v292;
                        char v295 = v294 ? 0: 1;
                        char v296 = v294 < 0;
                        char v297 = __parity__((unsigned char)v294);
                        char v298 = v293 > 0;
                        char v299 = (v294 & v293) < 0;
                        char v300 = ((v294 ^ v293) >>> 4) & 0x1;
                        int v301 = v298 ? -1: 0;
                        unsigned int v302 = v298 ? 0xffffffff: 0;
                        nStdHandle = (DWORD)(v301 - 11);
                        char v303 = nStdHandle ? 0: 1;
                        char v304 = nStdHandle >= 0x80000000;
                        char v305 = __parity__((unsigned char)nStdHandle);
                        char v306 = (((v302 ^ 0xfffffff5) ^ nStdHandle) >>> 4) & 0x1;
                        char v307 = v302 >= 11;
                        char v308 = (int)((unsigned int)(nStdHandle ^ v302) & ~(v302 ^ 0xfffffff5)) < 0;
                    }
                    HANDLE hFile1 = GetStdHandle(nStdHandle);
                    *(HANDLE*)(v12 - 28) = hFile1;
                    char v309 = hFile1 == -1;
                    char v310 = (int)hFile1 < -1;
                    char v311 = __parity__((unsigned char)hFile1 - 0xFF);
                    char v312 = (unsigned int)hFile1 < 0xffffffff;
                    char v313 = (int)(int*)((int)(int*)((int)(int*)((int)hFile1 + 1) ^ (int)hFile1) & (HANDLE)~(int)hFile1) < 0;
                    char v314 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)hFile1 + 1) ^ (HANDLE)~(int)hFile1) >>> 4) & 0x1);
                    if(!v309) {
                        char v315 = hFile1 ? 0: 1;
                        char v316 = (int)hFile1 < 0;
                        char v317 = __parity__((unsigned char)hFile1);
                        char v318 = 0;
                        char v319 = 0;
                        if(v315) {
                            goto loc_405AAF;
                        }
                        else {
                            DWORD v320 = GetFileType(hFile1);
                            char v321 = v320 ? 0: 1;
                            char v322 = v320 >= 0x80000000;
                            char v323 = __parity__((unsigned char)v320);
                            char v324 = 0;
                            char v325 = 0;
                            if(v321) {
                                goto loc_405AAF;
                            }
                            else {
                                int v326 = *(int*)(v12 - 28);
                                *(int*)hFile = *(int*)(v12 - 28);
                                unsigned int v327 = (unsigned int)(unsigned char)v320;
                                char v328 = v327 == 2;
                                char v329 = (int)v327 < 2;
                                char v330 = __parity__((unsigned char)v327 - 2);
                                char v331 = v327 < 2;
                                char v332 = (((v327 - 2) ^ v327) & (v327 ^ 0x2)) < 0;
                                char v333 = (((v327 - 2) ^ (v327 ^ 0x2)) >>> 4) & 0x1;
                                if(v328) {
                                    v0 = (unsigned int)(*(char*)((int)hFile + 4) | 0x40) | ((unsigned int)(*(char*)((int)hFile + 4) < 0 ? 0xffffff: 0) << 8);
                                    char v334 = *(char*)((int)hFile + 4) | 0x40 ? 0: 1;
                                    char v335 = (v0 >>> 7) & 0x1;
                                    char v336 = __parity__((unsigned char)v0);
                                    char v337 = 0;
                                    char v338 = 0;
                                    goto loc_405A90;
                                }
                                else {
                                    char v339 = v327 == 3;
                                    char v340 = (int)v327 < 3;
                                    char v341 = __parity__((unsigned char)v327 - 3);
                                    char v342 = v327 < 3;
                                    char v343 = (((v327 - 3) ^ v327) & (v327 ^ 0x3)) < 0;
                                    char v344 = (((v327 - 3) ^ (v327 ^ 0x3)) >>> 4) & 0x1;
                                    if(v339) {
                                        v0 = (unsigned int)(*(char*)((int)hFile + 4) | 0x8) | ((unsigned int)(*(char*)((int)hFile + 4) < 0 ? 0xffffff: 0) << 8);
                                        char v345 = *(char*)((int)hFile + 4) | 0x8 ? 0: 1;
                                        char v346 = (v0 >>> 7) & 0x1;
                                        char v347 = __parity__((unsigned char)v0);
                                        char v348 = 0;
                                        char v349 = 0;
                                    loc_405A90:
                                        *(char*)((int)hFile + 4) = (unsigned char)v0;
                                    }
                                }
                                int* ptr18 = (int*)((int)hFile + 12);
                                int v350 = _crtInitializeCriticalSectionEx((int)ptr18, 4000, 0);
                                int* ptr19 = &v11;
                                char v351 = &v6 == 8;
                                char v352 = (int)&v8 < 0;
                                char v353 = __parity__((unsigned char)&v6 - 8);
                                char v354 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v11 ^ 0xc) ^ (int)&v8) >>> 4) & 0x1);
                                char v355 = (unsigned int)&v11 >= 0xfffffff4;
                                char v356 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&v11) & (int*)~(int)(int*)((int)&v11 ^ 0xc)) < 0;
                                int v357 = *(int*)((int)hFile + 8);
                                *(int*)((int)hFile + 8) = *(int*)((int)hFile + 8) + 1;
                                char v358 = *(int*)((int)hFile + 8) ? 0: 1;
                                char v359 = *(int*)((int)hFile + 8) < 0;
                                char v360 = __parity__((unsigned char)*(int*)((int)hFile + 8));
                                char v361 = (((v357 ^ 0x1) ^ *(int*)((int)hFile + 8)) >>> 4) & 0x1;
                                char v362 = ((*(int*)((int)hFile + 8) ^ v357) & ~(v357 ^ 0x1)) < 0;
                            }
                        }
                    }
                    else {
                    loc_405AAF:
                        int v363 = (unsigned int)(*(char*)((int)hFile + 4) | 0x40) | ((unsigned int)(*(char*)((int)hFile + 4) < 0 ? 0xffffff: 0) << 8);
                        char v364 = *(char*)((int)hFile + 4) | 0x40 ? 0: 1;
                        char v365 = (v363 >>> 7) & 0x1;
                        char v366 = __parity__((unsigned char)v363);
                        char v367 = 0;
                        char v368 = 0;
                        *(char*)((int)hFile + 4) = (unsigned char)v363;
                        *(unsigned int*)hFile = 0xfffffffe;
                        unsigned int v369 = gvar_41B000;
                        char v370 = v369 ? 0: 1;
                        char v371 = v369 >= 0x80000000;
                        char v372 = __parity__((unsigned char)v369);
                        char v373 = 0;
                        char v374 = 0;
                        if(!v370) {
                            int v375 = *(int*)(v22 * 4 + v369);
                            *(unsigned int*)(v375 + 16) = 0xfffffffe;
                        }
                    }
                }
                unsigned int v376 = v22;
                ++v22;
                char v377 = v22 ? 0: 1;
                char v378 = v22 >= 0x80000000;
                char v379 = __parity__((unsigned char)v22);
                char v380 = (((v376 ^ 0x1) ^ v22) >>> 4) & 0x1;
                char v381 = (int)((v22 ^ v376) & ~(v376 ^ 0x1)) < 0;
            }
        }
        *(unsigned int*)(v12 - 4) = 0xfffffffe;  // } (starts at 405846h)
        int v382 = sub_405ADB();
        int v383 = 0;
        v5 = 1;
        v4 = 0;
        v3 = 1;
        v2 = 0;
        v1 = 0;
    }
    EH_epilog3(v8, v7, v6, param0);
    int v384 = v8;
    int* ptr20 = &v7;
    jump v384;
}

// Stale decompilation - Refresh this view to re-decompile this code
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
    unsigned char v6;
    int v7;
    int v8;
    int v9 = v8;
    _LocaleUpdate::_LocaleUpdate(&v4, (int*)_Locale);
    int v10 = _C;
    if((unsigned int)(v10 + 1) <= 0x100) {
        v3 = (unsigned int)*(short*)(v10 * 2 + *(int*)(v4 + 144));
        goto loc_40B3F8;
    }
    else {
        _C = v10 >> 8;
        int v11 = _isleadbyte_l((int)(unsigned char)(v10 >>> 8), (_locale_t)&v4);
        if(v11) {
            v2 = (unsigned char)(v10 >>> 8);
            v1 = (unsigned char)v10;
            char v12 = 0;
            v0 = 2;
        }
        else {
            v2 = (unsigned char)v10;
            v1 = 0;
            v0 = 1;
        }
        int v13 = 1;
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
    unsigned char v1;
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
    unsigned char v1;
    int v2;
    _LocaleUpdate::_LocaleUpdate((int)&v0, (int)_Locale);
    int result = (unsigned int)*(short*)((unsigned int)(unsigned char)_C * 2 + *(int*)(v0 + 144)) & 0x8000;
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

int _isspace_l(int _C, _locale_t _Locale) {
    int v0;
    unsigned char v1;
    int v2;
    _LocaleUpdate::_LocaleUpdate(&v0, (int*)_Locale);
    int result = *(int*)(v0 + 116) > 1 ? _isctype_l(_C, 8, (_locale_t)&v0): (unsigned int)*(short*)(_C * 2 + *(int*)(v0 + 144)) & 0x8;
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

int _local_unwind2(int param0, unsigned int param1) {
    int result;
    int v0 = param0;
    int v1 = -2;
    int v2 = &_unwind_handler;
    int v3 = *(int*)__FS_BASE;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v3);
    *(int**)__FS_BASE = &v3;
    while(1) {
        result = param0;
        int v4 = *(int*)(result + 8);
        unsigned int v5 = *(unsigned int*)(result + 12);
        if(v5 == -1 || (param1 != -1 && v5 <= param1)) {
            break;
        }
        else {
            int v6 = *(int*)(v5 * 12 + v4);
            v1 = *(int*)(v5 * 12 + v4);
            *(int*)(result + 12) = v6;
            if(!*(int*)(v5 * 12 + v4 + 4)) {
                _NLG_Notify(v6, 0x101);
                _NLG_Call();
            }
        }
    }
    *(int*)__FS_BASE = v3;
    return result;
}

int _local_unwind4(int* param0, int param1, int* param2) {
    int result;
    int* ptr0 = param0;
    int v0 = param1;
    int* ptr1 = param2;
    int v1 = &_unwind_handler4;
    int v2 = *(int*)__FS_BASE;
    int* ptr2 = (int*)(gvar_4183F0 ^ (int)&v2);
    *(int**)__FS_BASE = &v2;
    while(1) {
        result = param1;
        int v3 = *(int*)(result + 8) ^ *param0;
        unsigned int v4 = *(unsigned int*)(result + 12);
        if(v4 == -2 || (param2 != -2 && v4 <= (unsigned int)param2)) {
            break;
        }
        else {
            int* ptr3 = (int*)(v4 * 12 + v3 + 16);
            int v5 = *ptr3;
            *(int*)(result + 12) = *ptr3;
            if(!*(ptr3 + 1)) {
                _NLG_Notify(v5, 0x101);
                _NLG_Call();
            }
        }
    }
    *(int*)__FS_BASE = v2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void _lock_file(FILE* _Stream) {
    if((unsigned int)_Stream >= &gvar_418170 && (unsigned int)_Stream <= 4293584) {
        _lock((int)((int*)((int)(int*)(_Stream - 0x10605c) >> 5) + 4));
        _Stream[3]._Placeholder = (void*)((int)_Stream[3]._Placeholder | 0x8000);
    }
    else {
        EnterCriticalSection((LPCRITICAL_SECTION)(_Stream + 8));
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int _lock_file2(unsigned int param0, int param1) {
    int result;
    if((int)param0 < 20) {
        _lock((int)(param0 + 16));
        result = param1;
        *(int*)(result + 12) = *(int*)(result + 12) | 0x8000;
    }
    else {
        EnterCriticalSection((LPCRITICAL_SECTION)(param1 + 32));
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _lockexit() {
    return _lock(8);
}

// Stale decompilation - Refresh this view to re-decompile this code
int _locterm() {
    int v0;
    int result = 8;
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

// Stale decompilation - Refresh this view to re-decompile this code
int* _lseek_nolock(unsigned int param0, int param1, DWORD dwMoveMethod) {
    int* result;
    int v0;
    int* ptr0;
    unsigned int v1;
    int v2;
    void* ptr1;
    HANDLE hFile = (HANDLE)_get_osfhandle(param0);
    if(hFile == -1) {
        int* ptr2 = _errno();
        ptr2[0] = 9;
        result = (int*)0xFFFFFFFF;
    }
    else {
        void* ptr3 = ptr1;
        int v3 = 0;
        int v4 = 0;
        BOOL v5 = SetFilePointerEx(hFile, *(LARGE_INTEGER*)&v4, &v0, 1);
        if(v5) {
            v3 = param1 < 0 ? -1: 0;
            v4 = param1;
            BOOL v6 = SetFilePointerEx(hFile, *(LARGE_INTEGER*)&v4, &ptr0, dwMoveMethod);
            if(!v6) {
                DWORD v7 = GetLastError();
                _dosmaperr((unsigned int)v7);
                return (int*)0xFFFFFFFF;
            }
            else if(v1) {
                v3 = v2;
                v4 = v0;
                SetFilePointerEx(hFile, *(LARGE_INTEGER*)&v4, NULL, 0);
                int* ptr4 = _errno();
                ptr4[0] = 22;
                return (int*)0xFFFFFFFF;
            }
            unsigned int v8 = *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0);
            *(char*)((param0 & 0x1f) * 64 + v8 + 4) = *(char*)((param0 & 0x1f) * 64 + v8 + 4) & 0xfd;
            result = ptr0;
        }
        else {
            DWORD v7 = GetLastError();
            _dosmaperr((unsigned int)v7);
            result = (int*)0xFFFFFFFF;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* _lseeki64(unsigned int param0, int param1, int param2, DWORD dwMoveMethod) {
    int v0;
    void* result = (void*)0xFFFFFFFF;
    if(param0 == -2) {
        unsigned long* ptr0 = __doserrno();
        ptr0[0] = 0;
        int* ptr1 = _errno();
        ptr1[0] = 9;
    }
    else if(param0 < 0x80000000 && gvar_419FF8 > param0 && ((int)*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
        __lock_fhandle((int)param0);
        if((*(char*)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 4) & 0x1)) {
            result = _lseeki64_nolock(param0, param1, param2, dwMoveMethod);
        }
        else {
            int* ptr2 = _errno();
            ptr2[0] = 9;
            unsigned long* ptr3 = __doserrno();
            ptr3[0] = 0;
        }
        sub_404EAA();
    }
    else {
        unsigned long* ptr4 = __doserrno();
        ptr4[0] = 0;
        int* ptr5 = _errno();
        ptr5[0] = 9;
        _invalid_parameter_noinfo();
    }
    *(int*)__FS_BASE = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* _lseeki64_nolock(unsigned int param0, int param1, int param2, DWORD dwMoveMethod) {
    void* result;
    void* ptr0;
    void* ptr1 = ptr0;
    void* ptr2 = ptr0;
    int v0 = _get_osfhandle(param0);
    if(v0 == -1) {
        int* ptr3 = _errno();
        ptr3[0] = 9;
        goto loc_404EF7;
    }
    else {
        int v1 = param2;
        int v2 = param1;
        BOOL v3 = SetFilePointerEx((HANDLE)v0, *(LARGE_INTEGER*)&v2, &ptr2, dwMoveMethod);
        if(!v3) {
            DWORD v4 = GetLastError();
            _dosmaperr((unsigned int)v4);
        loc_404EF7:
            result = (void*)0xFFFFFFFF;
        }
        else {
            unsigned int v5 = *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0);
            *(char*)((param0 & 0x1f) * 64 + v5 + 4) = *(char*)((param0 & 0x1f) * 64 + v5 + 4) & 0xfd;
            result = ptr2;
        }
    }
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
    unsigned char v4;
    int v5;
    int v6;
    size_t _MaxCount = param2;
    if(!_MaxCount) {
        result = 0;
    }
    else {
        int v7 = v6;
        _LocaleUpdate::_LocaleUpdate((int)&v2, param3);
        if(*(int*)(v3 + 8) == 0) {
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
                        char* ptr2 = ptr0 + 1;
                        v1 = (int)NULL;
                        if(!(*(char*)(v8 + v3 + 25) & 0x4)) {
                        loc_409501:
                            v0 = (int)ptr1[0];
                            ++ptr1;
                            v1 = (int)NULL;
                            if((*(char*)(v0 + v3 + 25) & 0x4)) {
                                if(_MaxCount) {
                                    int v9 = (unsigned int)ptr1[0] | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                                    --_MaxCount;
                                    if(!(unsigned char)v9) {
                                        goto loc_409518;
                                    }
                                    else {
                                        ++ptr1;
                                        v0 = (int)(((unsigned short)v0 * 0x100) | (unsigned short)(unsigned char)v9);
                                    }
                                }
                                else {
                                loc_409518:
                                    v0 = 0;
                                }
                            }
                        loc_409530:
                            char v10 = (unsigned short)v8 > (unsigned short)v0;
                            if((unsigned short)v8 != (unsigned short)v0) {
                                v1 = v10 ? 1: -1;
                            }
                            else if((unsigned short)v8) {
                                ptr0 = ptr2;
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
                            int v11 = (unsigned int)ptr0[1] | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
                            if(!ptr0[1]) {
                                v8 = 0;
                            }
                            else {
                                v8 = (int)(((unsigned short)v8 * 0x100) | (unsigned short)(unsigned char)v11);
                                ptr2 = ptr0 + 2;
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
                int* ptr3 = _errno();
                ptr3[0] = 22;
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
    unsigned char v3;
    int v4;
    char v5;
    int v6;
    int v7 = v4;
    _LocaleUpdate::_LocaleUpdate((int)&v5, param3);
    size_t _MaxCount = param2;
    int result = 0;
    if(_MaxCount) {
        int v8 = v1;
        if(*(int*)(v8 + 8) == 0) {
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
                        int v9 = (unsigned int)ptr0[0];
                        --_MaxCount;
                        ++ptr1;
                        *(int*)&v2 = v9;
                        if(!(*(char*)((unsigned int)v2 + v8 + 25) & 0x4)) {
                            v9 = (unsigned int)*(short*)&v2 | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                            int v10 = (unsigned int)*(short*)&v2;
                            if((*(char*)(v10 + v8 + 25) & 0x10)) {
                                *(int*)&v2 = (unsigned int)*(char*)(v10 + v8 + 0x119);
                            loc_40967C:
                                v9 = (unsigned int)*(short*)&v2 | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                            }
                        loc_409680:
                            size_t v11 = (size_t)ptr2[0];
                            ++ptr2;
                            *(size_t*)&v2 = v11;
                            param2 = v11;
                            v0 = (size_t)(unsigned char)v11;
                            if(!(*(char*)(v0 + v8 + 25) & 0x4)) {
                                v0 = (unsigned int)(unsigned short)param2 | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                                size_t v12 = (size_t)(unsigned short)param2;
                                int v13 = 0;
                                param2 = v12;
                                result = 0;
                                if((*(char*)(v8 + v12 + 25) & 0x10)) {
                                    v0 = (size_t)*(char*)(v8 + param2 + 0x119);
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
                                    *(int*)&v2 = *(int*)&v2 * 0x100;
                                    *(short*)&v2 = (unsigned short)(unsigned char)v0 | *(short*)&v2;
                                    ++ptr2;
                                    v0 = (size_t)(unsigned short)*(int*)&v2;
                                    param2 = (size_t)(unsigned short)*(int*)&v2;
                                }
                            }
                            if((unsigned short)v0 >= *(unsigned short*)(v8 + 12) && (unsigned short)v0 <= *(unsigned short*)(v8 + 14)) {
                                v0 = (unsigned int)((unsigned short)v0 + *(short*)(v8 + 16)) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                            }
                            else if((unsigned short)v0 >= *(unsigned short*)(v8 + 18) && (unsigned short)v0 <= *(unsigned short*)(v8 + 20)) {
                                v0 = (unsigned int)((unsigned short)v0 + *(short*)(v8 + 22)) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                            }
                        loc_409703:
                            char v14 = (unsigned short)v0 < (unsigned short)v9;
                            if((unsigned short)v0 != (unsigned short)v9) {
                                result = v14 ? 1: -1;
                            }
                            else if((unsigned short)v9) {
                                ptr0 = ptr1;
                            }
                        }
                        else if(!_MaxCount) {
                            int v15 = (unsigned int)ptr2[0];
                            *(int*)&v2 = 0;
                            if(!(*(char*)(v15 + v8 + 25) & 0x4)) {
                                v9 &= 0xffff0000;
                                v0 = (size_t)ptr2[0];
                                param2 = v0;
                                v0 = (unsigned int)(unsigned short)param2 | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                                goto loc_409703;
                            }
                        }
                        else {
                            char v16 = ptr1[0];
                            if(!v16) {
                                *(int*)&v2 = 0;
                                goto loc_40967C;
                            }
                            else {
                                v9 *= 0x100;
                                v9 = (unsigned int)((unsigned short)v16 | (unsigned short)v9) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                                ++ptr1;
                                *(int*)&v2 = (unsigned int)(unsigned short)v9;
                                if((unsigned short)v9 >= *(unsigned short*)(v8 + 12) && (unsigned short)v9 <= *(unsigned short*)(v8 + 14)) {
                                    v9 = (unsigned int)((unsigned short)v9 + *(short*)(v8 + 16)) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                                }
                                else if((unsigned short)v9 >= *(unsigned short*)(v8 + 18) && (unsigned short)v9 <= *(unsigned short*)(v8 + 20)) {
                                    v9 = (unsigned int)((unsigned short)v9 + *(short*)(v8 + 22)) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
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
    if(v3) {
        *(int*)(v6 + 112) = *(int*)(v6 + 112) & 0xfffffffd;
    }
    return result;
}

int _mbtowc_l(wchar_t* _DstCh, char* _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale) {
    int result;
    int v0;
    int cbMultiByte;
    wchar_t* ptr0;
    char v1;
    int v2;
    int v3;
    unsigned char v4;
    wchar_t* ptr1;
    int v5;
    int v6 = v5;
    if(!_SrcCh || !_SrcSizeInBytes) {
    loc_408E75:
        result = 0;
    }
    else if(_SrcCh[0]) {
        _LocaleUpdate::_LocaleUpdate(&v3, (int*)_Locale);
        if(!*(int*)(v3 + 168)) {
            if(_DstCh) {
                _DstCh[0] = (wchar_t)_SrcCh[0];
            }
            v2 = 1;
        }
        else {
            void* ptr2 = &v3;
            int v7 = _isleadbyte_l((int)_SrcCh[0], (_locale_t)&v3);
            if(v7) {
                v2 = v3;
                if(*(int*)(v2 + 116) > 1) {
                    v1 = *(unsigned int*)(v2 + 116) > _SrcSizeInBytes;
                    if(*(int*)(v2 + 116) > (int)_SrcSizeInBytes) {
                        goto loc_408EF0;
                    }
                    else {
                        ptr2 = (void*)(_DstCh == 0 ? 0: 1);
                        ptr0 = _DstCh;
                        cbMultiByte = *(int*)(v2 + 116);
                        v0 = 9;
                        int v8 = MultiByteToWideChar(*(UINT*)(v2 + 4), 9, (LPCCH)_SrcCh, cbMultiByte, (LPWSTR)_DstCh, _DstCh == 0 ? 0: 1);
                        v2 = v3;
                        if(v8) {
                            goto loc_408EF8;
                        }
                    }
                }
                v1 = *(unsigned int*)(v2 + 116) > _SrcSizeInBytes;
            loc_408EF0:
                if(v1 || !_SrcCh[1]) {
                    goto loc_408F20;
                }
                else {
                loc_408EF8:
                    v2 = *(int*)(v2 + 116);
                }
            }
            else {
                ptr2 = (void*)(_DstCh == 0 ? 0: 1);
                ptr0 = _DstCh;
                v2 = 1;
                cbMultiByte = 1;
                v0 = 9;
                int v9 = MultiByteToWideChar(*(UINT*)(v3 + 4), 9, (LPCCH)_SrcCh, 1, (LPWSTR)_DstCh, _DstCh == 0 ? 0: 1);
                if(!v9) {
                loc_408F20:
                    int* ptr3 = errno();
                    v2 = -1;
                    ptr3[0] = 42;
                }
            }
        }
        if(v4) {
            *(int*)&ptr1[56] = *(int*)&ptr1[56] & 0xfffffffd;
        }
        result = v2;
    }
    else {
        if(_DstCh) {
            _DstCh[0] = 0;
        }
        goto loc_408E75;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
size_t _msize(void* _Block) {
    if(!_Block) {
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        return 0xffffffff;
    }
    return (size_t)HeapSize(gvar_41993C, 0, _Block);
}

// Stale decompilation - Refresh this view to re-decompile this code
int _mtinit() {
    sub_406DD9();
    int v0 = _mtinitlocks();
    if(v0) {
        DWORD v1 = __crtFlsAlloc(&_freefls);
        gvar_418540 = v1;
        if(v1 != -1) {
            LPVOID v2 = (LPVOID)sub_408F5B(1, 956);
            if(v2) {
                BOOL v3 = __crtFlsSetValue(gvar_418540, v2);
                if(v3) {
                    _initptd((int)v2, 0);
                    DWORD v4 = GetCurrentThreadId();
                    *(int*)((int)v2 + 4) = -1;
                    *(DWORD*)v2 = v4;
                    return 1;
                }
            }
            mtterm();
            return 0;
        }
    }
    mtterm();
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int mtinitlocknum(int param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int v5;
    void* ptr0;
    int v6;
    int v7;
    int v8;
    void* ptr1;
    int v9 = SEH_prolog4(&gvar_417898, 8);
    char v10 = gvar_41993C ? 0: 1;
    char v11 = gvar_41993C >= 0x80000000;
    char v12 = __parity__((unsigned char)gvar_41993C);
    char v13 = gvar_41993C < 0;
    char v14 = 0;
    char v15 = 0;
    if(v10) {
        int v16 = FF_MSGBANNER();
        int v17 = NMSG_WRITE(30);
        /*NO_RETURN*/ _crtExitProcess(0xFF);
    }
    int v18 = *(int*)(v7 + 8);
    int v19 = 0;
    char v20 = *(unsigned int*)(v18 * 8 + (int)&gvar_418CC8) == 0;
    char v21 = *(unsigned int*)(v18 * 8 + (int)&gvar_418CC8) >= 0x80000000;
    char v22 = __parity__((unsigned char)*(unsigned int*)(v18 * 8 + (int)&gvar_418CC8));
    char v23 = *(unsigned int*)(v18 * 8 + (int)&gvar_418CC8) < 0;
    char v24 = 0;
    char v25 = 0;
    if(v20) {
        void* ptr2 = (void*)malloc_crt(24);
        void* ptr3 = (void*)&loc_409214;
        void* _Block = ptr2;
        char v26 = _Block ? 0: 1;
        char v27 = (int)_Block < 0;
        char v28 = __parity__((unsigned char)_Block);
        char v29 = 0;
        char v30 = 0;
        if(v26) {
            int* ptr4 = errno();
            ptr4[0] = 12;
            int v31 = 0;
            v4 = 1;
            v3 = 0;
            v2 = 1;
            v1 = 0;
            v0 = 0;
        }
        else {
            int v32 = lock(10);
            void* ptr5 = (void*)&loc_409214;
            *(int*)(v7 - 4) = 0;
            char v33 = *(unsigned int*)(v18 * 8 + (int)&gvar_418CC8) == 0;
            char v34 = *(unsigned int*)(v18 * 8 + (int)&gvar_418CC8) >= 0x80000000;
            char v35 = __parity__((unsigned char)*(unsigned int*)(v18 * 8 + (int)&gvar_418CC8));
            char v36 = *(unsigned int*)(v18 * 8 + (int)&gvar_418CC8) < 0;
            char v37 = 0;
            char v38 = 0;
            if(v33) {
                int v39 = _crtInitializeCriticalSectionEx((int)_Block, 4000, 0);
                int* ptr6 = &ptr0;
                char v40 = &v5 == 8;
                char v41 = (int)&v8 < 0;
                char v42 = __parity__((unsigned char)&v5 - 8);
                char v43 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v8) >>> 4) & 0x1);
                char v44 = (unsigned int)&ptr0 >= 0xfffffff4;
                char v45 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0xc)) < 0;
                *(void**)(v18 * 8 + (int)&gvar_418CC8) = _Block;
            }
            else {
                free(_Block);
                void* ptr7 = ptr1;
            }
            *(int*)(v7 - 4) = -2;
            v9 = sub_4092A8();
            goto loc_40929F;
        }
    }
    else {
    loc_40929F:
        int v46 = 0;
        char v47 = 1;
        char v48 = 0;
        char v49 = 1;
        char v50 = 0;
        v0 = 0;
        int v51 = 0;
        int v52 = 1;
        v4 = 0;
        v3 = 0;
        v2 = 0;
        v25 = 0;
        v1 = 0;
    }
    EH_epilog3(v8, v6, v5, param0);
    int v53 = v8;
    int* ptr8 = &v6;
    jump v53;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _mtinitlocks() {
    unsigned int* ptr0 = (unsigned int*)&gvar_418CC8;
    int v0 = 4299376;
    do {
        if(*(int*)(ptr0 + 1) == 1) {
            int v1 = 0;
            *ptr0 = v0;
            v0 += 24;
            int v2 = 4000;
            __crtInitializeCriticalSectionEx(*ptr0, 4000, v1);
        }
        ptr0 += 2;
    }
    while((int)ptr0 < 0x418de8);
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
_onexit_t _onexit(_onexit_t _Func) {
    int v0;
    int v1;
    int v2 = v1;
    _onexit_t v3 = NULL;
    _lockexit();
    int v4 = 0;  // __try{ (see __finally:40A274h)
    _onexit_t result = (_onexit_t)_onexit_nolock((int)_Func);
    sub_40A277();
    *(int*)__FS_BASE = v0;
    return result;
}

PVOID _onexit_nolock(PVOID Ptr2) {
    PVOID result;
    void* Ptr1;
    int v0;
    PVOID v1;
    PVOID _Block = v1;
    int v2 = v0;
    PVOID v3 = DecodePointer(gvar_419FEC);
    PVOID Ptr = gvar_419FE8;
    _Block = v3;
    PVOID v4 = DecodePointer(Ptr);
    if(v4 >= _Block) {
        int* ptr0 = (int*)((int)v4 - (int)_Block);
        if((unsigned int)(PVOID)(ptr0 + 1) < 4) {
            return NULL;
        }
        size_t v5 = _msize(_Block);
        if((unsigned int)(ptr0 + 1) > v5) {
            void* _Block1 = _Block;
            if((v5 < 0x800 ? v5: 0x800) + v5 >= v5) {
                Ptr1 = _realloc_crt(_Block1, (v5 < 0x800 ? v5: 0x800) + v5);
                if(Ptr1) {
                    goto loc_40A2FF;
                }
            }
            if((unsigned int)(void*)(v5 + 16) < v5) {
                return NULL;
            }
            Ptr1 = _realloc_crt(_Block1, (size_t)(void*)(v5 + 16));
            if(!Ptr1) {
                return NULL;
            }
        loc_40A2FF:
            v4 = (PVOID)((int)(int*)((int)(int*)((int)ptr0 >> 2) * 4) + (int)Ptr1);
            PVOID v6 = EncodePointer(Ptr1);
            gvar_419FEC = v6;
        }
        PVOID v7 = EncodePointer(Ptr2);
        *(PVOID*)v4 = v7;
        PVOID v8 = EncodePointer((PVOID)((int)v4 + 4));
        gvar_419FE8 = v8;
        result = Ptr2;
    }
    else {
        result = NULL;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* _openfile(int param0, unsigned char* param1, int param2, int* param3) {
    int v0;
    int v1;
    int* result;
    int v2;
    int v3 = v2;
    int v4 = 0;
    unsigned int v5 = 0;
    unsigned char* ptr0 = param1;
    unsigned int v6 = gvar_419BC0;
    int v7 = 0;
    while(*ptr0 == 32) {
        ++ptr0;
    }
    unsigned char* ptr1 = (unsigned char*)*ptr0;
    if(*ptr0 == 97) {
        v0 = 265;
    loc_40436A:
        v1 = v6 | 0x2;
    loc_40436F:
        int v8 = 1;
        int v9 = (int)(ptr0 + 1);
        ptr1 = (unsigned int)*(char*)v9 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        if(*(char*)v9) {
            param1 = (unsigned char*)0x1000;
            while(v8) {
                ptr1 = (unsigned char*)(unsigned char)ptr1;
                char v10 = ptr1 == 83;
                if(!v10 && (int)ptr1 >= 83) {
                    int* ptr2 = (int*)(ptr1 - 84);
                    char v11 = ptr2 ? 0: 1;
                    if(!v11) {
                        ptr1 = (unsigned char*)((unsigned char*)ptr2 - 14);
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
                                else if(v4) {
                                    goto loc_40447C;
                                }
                                else {
                                    v4 = 1;
                                    v1 &= 0xffffbfff;
                                    goto loc_404482;
                                }
                            }
                            else if(v4) {
                                goto loc_40447C;
                            }
                            else {
                                v4 = 1;
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
                        ptr1 = (unsigned char*)0x1000;
                    }
                }
                else if(!v10) {
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
                                        else if(v5 != 0) {
                                            goto loc_40447C;
                                        }
                                        else {
                                            v5 = 1;
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
                                v7 = 1;
                                goto loc_40447C;
                            }
                        }
                        else if((unsigned char)v0 & 0x2) {
                            goto loc_40447C;
                        }
                        else {
                            int v12 = v0 & 0xfffffffe;
                            int v13 = v1 & 0xfffffffc;
                            v0 = v12 | 0x2;
                            v1 = v13 | 0x80;
                        }
                    }
                    goto loc_404482;
                }
                else if(v5) {
                    goto loc_40447C;
                }
                else {
                    v5 = 1;
                    v0 |= 32;
                    goto loc_404482;
                }
                if((int*)(v0 & (int)(unsigned char*)0x1000)) {
                loc_40447C:
                    v8 = 0;
                }
                else {
                    v0 |= (int)(unsigned char*)0x1000;
                }
            loc_404482:
                ++v9;
                ptr1 = (unsigned int)*(char*)v9 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
                if(!*(char*)v9) {
                    break;
                }
            }
            if(v7) {
                while(*(char*)v9 == 32) {
                    ++v9;
                }
                int v14 = _mbsnbcmp(&gvar_411150, v9, 3);
                if(v14) {
                    goto loc_404340;
                }
                else {
                    int i;
                    for(i = v9 + 3; *(char*)i == 32; ++i) {
                    }
                    if(*(char*)i != 61) {
                        goto loc_404340;
                    }
                    else {
                        do {
                            ++i;
                        }
                        while(*(char*)i == 32);
                        int v15 = _mbsnbicmp(i, "UTF-8", 5);
                        if(!v15) {
                            v9 = i + 5;
                            v0 |= 0x40000;
                        }
                        else {
                            int v16 = _mbsnbicmp(i, "UTF-16LE", 8);
                            if(!v16) {
                                v9 = i + 8;
                                v0 |= 0x20000;
                            }
                            else {
                                int v17 = _mbsnbicmp(i, "UNICODE", 7);
                                if(v17) {
                                    goto loc_404340;
                                }
                                else {
                                    v9 = i + 7;
                                    v0 |= 0x10000;
                                }
                            }
                        }
                    }
                }
            }
        }
        while(*(char*)v9 == 32) {
            ++v9;
        }
        if(!*(char*)v9) {
            int v18 = _sopen_s(&param1, param0, v0, param2, 384);
            if(!v18) {
                result = param3;
                ++gvar_4191CC;
                *(result + 1) = 0;
                *result = 0;
                *(result + 2) = 0;
                *(result + 7) = 0;
                unsigned char* ptr3 = param1;
                *(result + 3) = v1;
                *(unsigned int*)(result + 4) = ptr3;
                return result;
            }
        }
        else {
        loc_404340:
            int* ptr4 = _errno();
            ptr4[0] = 22;
            _invalid_parameter_noinfo();
        }
        result = NULL;
    }
    else if((unsigned char)ptr1 == 114) {
        v0 = 0;
        v1 = v6 | 0x1;
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
    fcomp(0.0, *param0);
    fnstsw((unsigned short)param0);
    return __parity__((unsigned char)(int*)((int)param0 >>> 8) & 0x41) ? 0: 1;
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

void* _read_nolock(unsigned int param0, LPWSTR lpWideCharStr, DWORD param2) {
    void* result;
    void* ptr0;
    DWORD v0;
    void* _Block;
    BOOL v1;
    DWORD v0;
    LPVOID v2;
    LPDWORD v3;
    void* ptr1;
    LPWSTR v4;
    LPWSTR v5;
    int* ptr2;
    unsigned char v6;
    char v7;
    char v8;
    int v9;
    BOOL v10;
    unsigned int v11 = param0;
    int v12 = v9;
    DWORD nNumberOfBytesToRead = param2;
    void* ptr3 = NULL;
    void* ptr4 = (void*)0xFFFFFFFE;
    BOOL v13 = 0;
    DWORD v14 = nNumberOfBytesToRead;
    if(v11 == (void*)0xFFFFFFFE) {
        unsigned long* ptr5 = __doserrno();
        ptr5[0] = 0;
        ptr2 = errno();
        ptr2[0] = 9;
    }
    else {
        if(v11 < 0x80000000 && gvar_419FF8 > v11) {
            unsigned int v15 = v11;
            unsigned int v16 = v11;
            void* ptr6 = (void*)(v15 >> 5);
            int v17 = (v16 & 0x1f) * 64;
            void* ptr7 = ptr6;
            int v18 = v17;
            void* ptr8 = *(void**)((int)(int*)((int)ptr6 * 4) + (int)&gvar_4191D0);
            v11 = (unsigned int)*(char*)((int*)((int)ptr8 + v17) + 1) | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
            if((*(char*)((int*)((int)ptr8 + v17) + 1) & 0x1)) {
                if(nNumberOfBytesToRead > 0x7fffffff) {
                    unsigned long* ptr9 = __doserrno();
                    ptr9[0] = 0;
                    int* ptr10 = errno();
                    ptr10[0] = 22;
                    invalid_parameter_noinfo();
                    result = (void*)0xFFFFFFFF;
                }
                else if(nNumberOfBytesToRead && !((unsigned char)v11 & 0x2)) {
                    if(lpWideCharStr != 0) {
                        v11 = (unsigned int)((*(char*)((int*)((int)ptr8 + v17) + 9) * 2) >> 1) | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
                        (DWORD)((param2 >>> 24) & 0xFF) = (*(char*)((int*)((int)ptr8 + v17) + 9) * 2) >> 1;
                        int v19 = (int)(unsigned char)v11 - 1;
                        if(v19) {
                            if(!(v19 - 1)) {
                                if(!((unsigned char)(unsigned int)~nNumberOfBytesToRead & 0x1)) {
                                    unsigned long* ptr11 = __doserrno();
                                    ptr11[0] = 0;
                                    int* ptr10 = errno();
                                    ptr10[0] = 22;
                                    invalid_parameter_noinfo();
                                    return (void*)0xFFFFFFFF;
                                }
                                nNumberOfBytesToRead &= -2;
                            }
                            v5 = lpWideCharStr;
                            v4 = lpWideCharStr;
                            goto loc_4051D9;
                        }
                        if(((unsigned char)(unsigned int)~nNumberOfBytesToRead & 0x1)) {
                            nNumberOfBytesToRead >>>= 1;
                            if(nNumberOfBytesToRead < 4) {
                                nNumberOfBytesToRead = 4;
                            }
                            LPWSTR v20 = (LPWSTR)malloc_crt((int)nNumberOfBytesToRead);
                            v4 = v20;
                            if(!v20) {
                                int* ptr12 = errno();
                                ptr12[0] = 12;
                                ptr2 = (int*)__doserrno();
                                ptr2[0] = 8;
                                result = (void*)0xFFFFFFFF;
                            }
                            else {
                                void* ptr13 = _lseeki64_nolock(param0, 0, 0, 1);
                                unsigned int v21 = *(unsigned int*)((int)(int*)((int)ptr7 * 4) + (int)&gvar_4191D0);
                                *(void**)(v21 + v17 + 40) = ptr13;
                                v5 = v4;
                                *(void**)(v21 + v17 + 44) = ptr8;
                                ptr6 = ptr7;
                            loc_4051D9:
                                unsigned int v22 = *(unsigned int*)((int)(int*)((int)ptr6 * 4) + (int)&gvar_4191D0);
                                void* ptr14 = ptr7;
                                LPVOID lpBuffer = v5;
                                if((*(char*)(v22 + v17 + 4) & 0x48)) {
                                    v22 = (unsigned int)*(char*)(v22 + v17 + 5) | ((unsigned int)((v22 >>> 8) & 0xffffff) << 8);
                                    if((unsigned char)v22 != 10 && nNumberOfBytesToRead) {
                                        *(char*)&v5[0] = (unsigned char)v22;
                                        LPVOID v23 = (LPVOID)((char*)v5 + 1);
                                        ptr3 = (void*)0x1;
                                        unsigned int v24 = *(unsigned int*)((int)(int*)((int)ptr14 * 4) + (int)&gvar_4191D0);
                                        --nNumberOfBytesToRead;
                                        char v25 = (unsigned char)(param2 >>> 24) ? 0: 1;
                                        lpBuffer = v23;
                                        *(char*)(v24 + v17 + 5) = 10;
                                        if(!v25) {
                                            unsigned char v26 = *(unsigned char*)(*(unsigned int*)((int)(int*)((int)ptr14 * 4) + (int)&gvar_4191D0) + v17 + 37);
                                            char v27 = v26 == 10;
                                            if(!v27 && nNumberOfBytesToRead) {
                                                *(unsigned char*)v23 = v26;
                                                LPVOID v28 = (LPVOID)((int)v23 + 1);
                                                unsigned int v29 = *(unsigned int*)((int)(int*)((int)ptr14 * 4) + (int)&gvar_4191D0);
                                                --nNumberOfBytesToRead;
                                                char v30 = (unsigned char)(param2 >>> 24) == 1;
                                                lpBuffer = v28;
                                                ptr3 = (void*)0x2;
                                                *(char*)(v29 + v17 + 37) = 10;
                                                if(v30) {
                                                    unsigned char v31 = *(unsigned char*)(*(unsigned int*)((int)(int*)((int)ptr14 * 4) + (int)&gvar_4191D0) + v17 + 38);
                                                    char v32 = v31 == 10;
                                                    if(!v32 && nNumberOfBytesToRead) {
                                                        ptr1 = (void*)0x3;
                                                        *(unsigned char*)v28 = v31;
                                                        LPVOID v33 = (LPVOID)((int)v28 + 1);
                                                        unsigned int v34 = *(unsigned int*)((int)(int*)((int)ptr14 * 4) + (int)&gvar_4191D0);
                                                        --nNumberOfBytesToRead;
                                                        ptr3 = ptr1;
                                                        lpBuffer = v33;
                                                        *(char*)(v34 + v17 + 38) = 10;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                int v35 = _isatty(param0);
                                char v36 = v35 ? 0: 1;
                                void* ptr15 = ptr7;
                                if(!v36) {
                                    unsigned int v37 = *(unsigned int*)((int)(int*)((int)ptr15 * 4) + (int)&gvar_4191D0);
                                    if((*(char*)(v37 + v17 + 4) & 0x80)) {
                                        ptr1 = &v13;
                                        BOOL v38 = GetConsoleMode(*(HANDLE*)(v37 + v17), &v13);
                                        v13 = v38;
                                        if(v38 && (unsigned char)(param2 >>> 24) == 2) {
                                            DWORD nNumberOfCharsToRead = nNumberOfBytesToRead >>> 1;
                                            v3 = &v10;
                                            void* ptr16 = ptr7;
                                            v2 = lpBuffer;
                                            unsigned int v39 = *(unsigned int*)((int)(int*)((int)ptr16 * 4) + (int)&gvar_4191D0);
                                            BOOL v40 = ReadConsoleW(*(HANDLE*)(v39 + v17), lpBuffer, nNumberOfCharsToRead, &v10, NULL);
                                            if(!v40) {
                                                v0 = GetLastError();
                                                goto loc_4052D8;
                                            }
                                            else {
                                                v1 = v10;
                                                ptr6 = (void*)(v1 * 2);
                                                v10 = (BOOL)(void*)(v1 * 2);
                                                goto loc_40532C;
                                            }
                                        }
                                        else {
                                            ptr15 = ptr7;
                                        }
                                    }
                                    goto loc_4052F7;
                                }
                                else {
                                loc_4052F7:
                                    unsigned int v41 = *(unsigned int*)((int)(int*)((int)ptr15 * 4) + (int)&gvar_4191D0);
                                    v3 = &v10;
                                    v2 = lpBuffer;
                                    v1 = ReadFile(*(HANDLE*)(v41 + v17), lpBuffer, nNumberOfBytesToRead, &v10, NULL);
                                    if(v1) {
                                        ptr6 = (void*)v10;
                                        if((int)ptr6 >= 0 && (unsigned int)ptr6 <= nNumberOfBytesToRead) {
                                        loc_40532C:
                                            ptr8 = ptr7;
                                            ptr3 = (void*)((int)ptr6 + (int)ptr3);
                                            unsigned int v42 = *(unsigned int*)((int)(int*)((int)ptr8 * 4) + (int)&gvar_4191D0);
                                            v1 = (unsigned int)*(char*)(v17 + v42 + 4) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                                            if(*(char*)(v17 + v42 + 4) >= 0) {
                                            loc_40559B:
                                                _Block = v4;
                                            }
                                            else if((unsigned char)(param2 >>> 24) != 2) {
                                                if(ptr6) {
                                                    LPWSTR v43 = v4;
                                                    if(*(char*)&v43[0] != 10) {
                                                        goto loc_40535E;
                                                    }
                                                    else {
                                                        v1 = (unsigned int)((unsigned char)v1 | 0x4) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                                                    }
                                                }
                                                else {
                                                loc_40535E:
                                                    v1 = (unsigned int)((unsigned char)v1 & 0xfb) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                                                }
                                                *(char*)(v17 + v42 + 4) = (unsigned char)v1;
                                                BOOL v44 = (BOOL)v4;
                                                BOOL v45 = (BOOL)v4;
                                                v13 = v44;
                                                lpBuffer = (void*)(v44 + (int)ptr3);
                                                if((unsigned int)(void*)(v44 + (int)ptr3) > (unsigned int)v44) {
                                                    ptr6 = (void*)0xD;
                                                    BOOL v46 = v44;
                                                    do {
                                                        v44 = (unsigned int)*(char*)v46 | ((unsigned int)((v44 >>> 8) & 0xffffff) << 8);
                                                        if(*(char*)v46 == 26) {
                                                            ptr6 = *(void**)((int)(int*)((int)ptr8 * 4) + (int)&gvar_4191D0);
                                                            v44 = (unsigned int)*(char*)((int*)((int)ptr6 + v17) + 1) | ((unsigned int)((v44 >>> 8) & 0xffffff) << 8);
                                                            if(!(*(char*)((int*)((int)ptr6 + v17) + 1) & 0x40)) {
                                                                *(char*)((int*)((int)ptr6 + v17) + 1) = (unsigned char)v44 | 0x2;
                                                            }
                                                            else {
                                                                *(char*)v45 = *(char*)v46;
                                                                ++v45;
                                                            }
                                                            break;
                                                        }
                                                        else if((unsigned char)v44 != (unsigned char)ptr6) {
                                                            *(char*)v45 = (unsigned char)v44;
                                                            ++v45;
                                                            ++v46;
                                                        }
                                                        else {
                                                            if((unsigned int)(int*)((int)lpBuffer - 1) > (unsigned int)v46) {
                                                                v44 = v46 + 1;
                                                                if(*(char*)v44 == 10) {
                                                                    v44 = (BOOL)(void*)0xA;
                                                                    v46 += 2;
                                                                    *(char*)v45 = 10;
                                                                    ++v45;
                                                                    ptr1 = (void*)0xD;
                                                                    goto loc_405431;
                                                                }
                                                                else {
                                                                    *(char*)v45 = (unsigned char)ptr6;
                                                                    v46 = v44;
                                                                }
                                                            }
                                                            else {
                                                                ++v46;
                                                                v3 = &v10;
                                                                DWORD v47 = 1;
                                                                v2 = &v6;
                                                                unsigned int v48 = *(unsigned int*)((int)(int*)((int)ptr8 * 4) + (int)&gvar_4191D0);
                                                                v44 = ReadFile(*(HANDLE*)(v48 + v17), &v6, 1, &v10, NULL);
                                                                if(!v44) {
                                                                    v44 = (BOOL)GetLastError();
                                                                    if(v44) {
                                                                        goto loc_405461;
                                                                    }
                                                                }
                                                                if(v10) {
                                                                    ptr8 = ptr7;
                                                                    unsigned int v49 = *(unsigned int*)((int)(int*)((int)ptr8 * 4) + (int)&gvar_4191D0);
                                                                    if(!(*(char*)(v49 + v17 + 4) & 0x48)) {
                                                                        if(v45 == v4) {
                                                                            v44 = 10;
                                                                            if(v6 == 10) {
                                                                                *(char*)v45 = 10;
                                                                                ++v45;
                                                                                ptr1 = (void*)0xD;
                                                                                goto loc_405431;
                                                                            }
                                                                        }
                                                                        _lseeki64_nolock(param0, -1, -1, 1);
                                                                        ptr8 = ptr7;
                                                                        v44 = 10;
                                                                        if(v6 != 10) {
                                                                            ptr6 = (void*)0xD;
                                                                            *(char*)v45 = 13;
                                                                            ++v45;
                                                                        }
                                                                        ptr1 = (void*)0xD;
                                                                        goto loc_405431;
                                                                    }
                                                                    else {
                                                                        v44 = 10;
                                                                        ptr1 = (void*)0xD;
                                                                    }
                                                                    if(v6 == 10) {
                                                                        *(char*)v45 = 10;
                                                                        ++v45;
                                                                    }
                                                                    else {
                                                                        *(char*)v45 = 13;
                                                                        ++v45;
                                                                        unsigned int v50 = *(unsigned int*)((int)(int*)((int)ptr8 * 4) + (int)&gvar_4191D0);
                                                                        v44 = (BOOL)v6;
                                                                        *(unsigned char*)(v50 + v17 + 5) = v6;
                                                                    }
                                                                loc_405431:
                                                                    ptr6 = ptr1;
                                                                }
                                                            loc_405461:
                                                                ptr8 = ptr7;
                                                                ptr6 = (void*)0xD;
                                                                *(char*)v45 = 13;
                                                            }
                                                            ++v45;
                                                        }
                                                    }
                                                    while((unsigned int)v46 < (unsigned int)lpBuffer);
                                                }
                                                _Block = v4;
                                                ptr3 = (void*)(v45 - (int)_Block);
                                                if((unsigned char)(param2 >>> 24) == 1 && ptr3) {
                                                    char* ptr17 = (char*)(v45 - 1);
                                                    _Block = (unsigned int)*ptr17 | ((unsigned int)(int*)((int)(int*)((int)_Block >>> 8) & 0xffffff) << 8);
                                                    if(*ptr17 >= 0) {
                                                        ++ptr17;
                                                    }
                                                    else {
                                                        unsigned int v51 = 1;
                                                        if(!*(char*)((unsigned int)(unsigned char)_Block + 0x418400)) {
                                                            LPWSTR v52 = v4;
                                                            while((int)v51 <= 4 && (unsigned int)v52 <= (unsigned int)ptr17) {
                                                                --ptr17;
                                                                ++v51;
                                                                if(*(char*)((unsigned int)*ptr17 + 0x418400)) {
                                                                    break;
                                                                }
                                                            }
                                                            v17 = v18;
                                                        }
                                                        int v53 = (int)*(char*)((unsigned int)*ptr17 + 0x418400);
                                                        if(!v53) {
                                                            int* ptr18 = errno();
                                                            ptr18[0] = 42;
                                                            goto loc_4052DE;
                                                        }
                                                        else if((unsigned int)(v53 + 1) == v51) {
                                                            ptr17 = (char*)(v51 + (int)ptr17);
                                                        }
                                                        else {
                                                            unsigned int v54 = *(unsigned int*)((int)(int*)((int)ptr7 * 4) + (int)&gvar_4191D0);
                                                            if((*(char*)(v54 + v17 + 4) & 0x48)) {
                                                                char* ptr19 = ptr17 + 1;
                                                                *(char*)(v54 + v17 + 5) = *ptr17;
                                                                void* ptr20 = ptr7;
                                                                if((int)v51 >= 2) {
                                                                    unsigned int v55 = *(unsigned int*)((int)(int*)((int)ptr20 * 4) + (int)&gvar_4191D0);
                                                                    ptr20 = (unsigned int)*ptr19 | ((unsigned int)(int*)((int)(int*)((int)ptr20 >>> 8) & 0xffffff) << 8);
                                                                    ++ptr19;
                                                                    *(char*)(v55 + v17 + 37) = (unsigned char)ptr20;
                                                                    ptr20 = ptr7;
                                                                }
                                                                if(v51 == 3) {
                                                                    unsigned int v56 = *(unsigned int*)((int)(int*)((int)ptr20 * 4) + (int)&gvar_4191D0);
                                                                    ptr20 = (unsigned int)*ptr19 | ((unsigned int)(int*)((int)(int*)((int)ptr20 >>> 8) & 0xffffff) << 8);
                                                                    ++ptr19;
                                                                    *(char*)(v56 + v17 + 38) = (unsigned char)ptr20;
                                                                }
                                                                ptr17 = (char*)((int)ptr19 - v51);
                                                            }
                                                            else {
                                                                int v57 = 0 - v51;
                                                                _lseeki64_nolock(param0, v57, v57 < 0 ? -1: 0, 1);
                                                            }
                                                        }
                                                    }
                                                    int cbMultiByte = (int)ptr17 - (int)v4;
                                                    ptr3 = (void*)MultiByteToWideChar(65001, 0, (LPCCH)v4, cbMultiByte, lpWideCharStr, (int)(v14 >>> 1));
                                                    if(ptr3) {
                                                        ptr6 = cbMultiByte == ptr3 ? NULL: (void*)0x1;
                                                        ptr3 = (void*)((int)ptr3 * 2);
                                                        *(void**)(*(unsigned int*)((int)(int*)((int)ptr7 * 4) + (int)&gvar_4191D0) + v17 + 48) = ptr6;
                                                        goto loc_40559B;
                                                    }
                                                    else {
                                                        v0 = GetLastError();
                                                        goto loc_4052D8;
                                                    }
                                                }
                                            }
                                            else if(v13) {
                                                LPWSTR v58 = v4;
                                                ptr6 = v4;
                                                ptr8 = (void*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 - ((int)ptr3 < 0 ? 0xffffffff: 0)) >> 1) * 2) + (int)v58);
                                                if((unsigned int)ptr8 > (unsigned int)v58) {
                                                    param2 = 26;
                                                    do {
                                                        WCHAR v59 = *(WCHAR*)ptr6;
                                                        if((unsigned short)param2 == *(short*)ptr6) {
                                                            unsigned int v60 = *(unsigned int*)((int)(int*)((int)ptr7 * 4) + (int)&gvar_4191D0);
                                                            *(char*)(v60 + v17 + 4) = *(char*)(v60 + v17 + 4) | 0x2;
                                                            break;
                                                        }
                                                        else if(v59 != 13) {
                                                            v58[0] = v59;
                                                            ++v58;
                                                            ptr6 = (void*)((int)ptr6 + 2);
                                                        }
                                                        else if((unsigned int)(int*)((int)ptr8 - 2) > (unsigned int)ptr6) {
                                                            ptr6 = (void*)((int)ptr6 + 2);
                                                            WCHAR v61 = 10;
                                                            if(*(short*)ptr6 != 10) {
                                                                v61 = 13;
                                                                ptr1 = (void*)0xD;
                                                            }
                                                            v58[0] = v61;
                                                            ++v58;
                                                        }
                                                    }
                                                    while(ptr6 < ptr8);
                                                }
                                                _Block = v4;
                                                ptr3 = (void*)((int)(int*)((int)v58 - (int)_Block) & 0xfffffffe);
                                            }
                                            else {
                                                if(ptr6) {
                                                    ptr8 = ptr7;
                                                    if(v4[0] != 10) {
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
                                                *(char*)(v17 + v42 + 4) = (unsigned char)v1;
                                                LPWSTR v62 = v4;
                                                LPWSTR v63 = v4;
                                                v14 = (DWORD)v62;
                                                v13 = (BOOL)(void*)((int)v62 + (int)ptr3);
                                                if((unsigned int)(void*)((int)v62 + (int)ptr3) > (unsigned int)v62) {
                                                    ptr6 = (void*)0xD;
                                                    param2 = 26;
                                                    LPWSTR v64 = v62;
                                                    do {
                                                        int v65 = (unsigned int)v64[0];
                                                        if((unsigned short)param2 == v64[0]) {
                                                            ptr6 = *(void**)((int)(int*)((int)ptr8 * 4) + (int)&gvar_4191D0);
                                                            v65 = (unsigned int)*(char*)((int*)((int)ptr6 + v17) + 1) | ((unsigned int)((v65 >>> 8) & 0xffffff) << 8);
                                                            if(!(*(char*)((int*)((int)ptr6 + v17) + 1) & 0x40)) {
                                                                *(char*)((int*)((int)ptr6 + v17) + 1) = (unsigned char)v65 | 0x2;
                                                            }
                                                            else {
                                                                v63[0] = v64[0];
                                                                ++v63;
                                                            }
                                                            break;
                                                        }
                                                        else if((unsigned short)v65 != (unsigned short)ptr6) {
                                                            v63[0] = (WCHAR)v65;
                                                            goto loc_4056B6;
                                                        }
                                                        else {
                                                            if((unsigned int)(v13 - 2) > (unsigned int)v64) {
                                                                ptr8 = ptr7;
                                                                if(v64[1] == 10) {
                                                                    v64 += 2;
                                                                    v63[0] = 10;
                                                                    goto loc_405798;
                                                                }
                                                                else {
                                                                    v63[0] = (WCHAR)ptr6;
                                                                loc_4056B6:
                                                                    ++v63;
                                                                    ++v64;
                                                                }
                                                            }
                                                            ++v64;
                                                            BOOL v66 = ReadFile(*(HANDLE*)(*(unsigned int*)((int)(int*)((int)ptr8 * 4) + (int)&gvar_4191D0) + v17), &v8, 2, &v10, NULL);
                                                            if(!v66) {
                                                                DWORD v67 = GetLastError();
                                                                if(v67) {
                                                                    goto loc_40579D;
                                                                }
                                                            }
                                                            if(v10) {
                                                                ptr8 = ptr7;
                                                                if((*(char*)(*(unsigned int*)((int)(int*)((int)ptr8 * 4) + (int)&gvar_4191D0) + v17 + 4) & 0x48)) {
                                                                    ptr1 = (void*)0xD;
                                                                    if(*(short*)&v8 == 10) {
                                                                        v63[0] = 10;
                                                                        ++v63;
                                                                        goto loc_405753;
                                                                    }
                                                                    else {
                                                                        v63[0] = 13;
                                                                        ++v63;
                                                                        unsigned int v68 = *(unsigned int*)((int)(int*)((int)ptr8 * 4) + (int)&gvar_4191D0);
                                                                        ptr1 = (void*)0xA;
                                                                        *(char*)(v68 + v17 + 5) = v8;
                                                                        *(char*)(*(unsigned int*)((int)(int*)((int)ptr8 * 4) + (int)&gvar_4191D0) + v17 + 37) = v7;
                                                                        *(char*)(*(unsigned int*)((int)(int*)((int)ptr8 * 4) + (int)&gvar_4191D0) + v17 + 38) = (unsigned char)ptr1;
                                                                    }
                                                                }
                                                                else if(v63 == v4 && *(short*)&v8 == 10) {
                                                                    v63[0] = 10;
                                                                    ++v63;
                                                                }
                                                                else {
                                                                    _lseeki64_nolock(param0, -2, -1, 1);
                                                                    ptr8 = ptr7;
                                                                    if(*(short*)&v8 != 10) {
                                                                        ptr6 = (void*)0xD;
                                                                        v63[0] = 13;
                                                                    loc_405798:
                                                                        ++v63;
                                                                    }
                                                                }
                                                                ptr1 = (void*)0xD;
                                                            loc_405753:
                                                                ptr6 = ptr1;
                                                            }
                                                            else {
                                                            loc_40579D:
                                                                ptr8 = ptr7;
                                                                ptr6 = (void*)0xD;
                                                                v63[0] = 13;
                                                                ++v63;
                                                            }
                                                        }
                                                    }
                                                    while((unsigned int)v64 < (unsigned int)v13);
                                                }
                                                _Block = v4;
                                                ptr3 = (void*)((int)v63 - (int)_Block);
                                            }
                                            ptr0 = ptr4;
                                            goto loc_4055A4;
                                        }
                                    }
                                    v0 = GetLastError();
                                    if(v0 == (void*)0x5) {
                                        int* ptr21 = errno();
                                        ptr21[0] = 9;
                                        unsigned long* ptr22 = __doserrno();
                                        ptr22[0] = (unsigned long)(void*)0x5;
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
                                    _Block = v4;
                                }
                            loc_4055A4:
                                if(_Block != lpWideCharStr) {
                                    free(_Block);
                                }
                                if(ptr0 != -2) {
                                    ptr3 = ptr0;
                                }
                                result = ptr3;
                            }
                            return result;
                        }
                    }
                    unsigned long* ptr11 = __doserrno();
                    ptr11[0] = 0;
                    int* ptr10 = errno();
                    ptr10[0] = 22;
                    invalid_parameter_noinfo();
                    result = (void*)0xFFFFFFFF;
                }
                else {
                    result = NULL;
                }
                return result;
            }
        }
        unsigned long* ptr23 = __doserrno();
        ptr23[0] = 0;
        int* ptr24 = errno();
        ptr24[0] = 9;
        invalid_parameter_noinfo();
    }
    return (void*)0xFFFFFFFF;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* _realloc_crt(void* _Block, size_t _Size) {
    void* result;
    unsigned long dwMilliseconds = 0;
    do {
        result = realloc(_Block, _Size);
        if(result || result == _Size || gvar_419A68 <= (unsigned int)result) {
            return result;
        }
        Concurrency::details::platform::__Sleep(dwMilliseconds);
        dwMilliseconds += 1000;
    }
    while(gvar_419A68 >= dwMilliseconds && dwMilliseconds != -1);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* _recalloc(void* _Block, size_t _Count, size_t _Size) {
    void* result;
    char v0;
    void* ptr0;
    size_t v1 = 0;
    if(_Count && 0xffffffe0 / _Count < _Size) {
        int* ptr1 = _errno();
        ptr1[0] = 12;
        result = NULL;
    }
    else {
        size_t _Size1 = _Count * _Size;
        void* ptr2 = ptr0;
        if(_Block) {
            *(int*)&v0 = &loc_40B545;
            v1 = /*BAD_CALL!*/ _msize(_Block);
        }
        *(void**)&v0 = _Block;
        void* ptr3 = realloc(*(void**)&v0, _Size1);
        if(ptr3 && _Size1 > v1) {
            *(int*)&v0 = 0;
            memset2((int)ptr3 + v1, 0, (int)(_Size1 - v1));
        }
        result = ptr3;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* _recalloc_crt(void* _Block, size_t _Count, size_t _Size) {
    void* result;
    unsigned long dwMilliseconds = 0;
    do {
        result = _recalloc(_Block, _Count, _Size);
        if(result || result == _Size || gvar_419A68 <= (unsigned int)result) {
            return result;
        }
        Concurrency::details::platform::__Sleep(dwMilliseconds);
        dwMilliseconds += 1000;
    }
    while(gvar_419A68 >= dwMilliseconds && dwMilliseconds != -1);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
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
            else if(!(param0 - 2)) {
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

// Stale decompilation - Refresh this view to re-decompile this code
int _setargv(unsigned int param0) {
    int result;
    int v0;
    unsigned int v1 = param0;
    unsigned int v2 = param0;
    if(!gvar_419FF0) {
        sub_408594();
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
    if(v1 < 0x3fffffff && param0 < 0xffffffff) {
        size_t _Size = (size_t)(v1 * 4 + param0);
        if(param0 > _Size) {
            return -1;
        }
        int v5 = (int)_malloc_crt(_Size);
        if(!v5) {
            return -1;
        }
        parse_cmdline(v4, v5, (char*)(v1 * 4 + v5), &v1, &v2);
        gvar_4192DC = v5;
        gvar_4192D8 = v1 - 1;
        result = 0;
    }
    else {
        result = -1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
errno_t _setdefaultprecision() {
    void* ptr0;
    int v0 = 0;
    char v1 = 1;
    char v2 = 0;
    char v3 = 1;
    char v4 = 0;
    char v5 = 0;
    errno_t result = _controlfp_s(NULL, 0x10000, 0x30000);
    char v6 = result ? 0: 1;
    char v7 = result < 0;
    char v8 = __parity__((unsigned char)result);
    char v9 = 0;
    char v10 = 0;
    if(!v6) {
        int* ptr1 = &ptr0;
        /*NO_RETURN*/ _invoke_watson(NULL, NULL, NULL, 0, 0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _setmbcp(int param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int v5;
    int v6;
    int v7;
    int v8;
    void* ptr0;
    void* ptr1;
    int v9 = SEH_prolog4(&gvar_417858, 16);
    unsigned int v10 = 0xffffffff;
    char v11 = 0;
    char v12 = 1;
    char v13 = 1;
    char v14 = 0;
    char v15 = 0;
    int v16 = _getptd();
    void* _Block2 = (void*)v16;
    *(void**)(v7 - 32) = (void*)v16;
    void* ptr2 = __updatetmbcinfo();
    unsigned int v17 = *(unsigned int*)((int)_Block2 + 104);
    int v18 = getSystemCP(*(int*)(v7 + 8));
    void* ptr3 = ptr0;
    *(int*)(v7 + 8) = v18;
    char v19 = *(int*)(v17 + 4) == v18;
    char v20 = *(int*)(v17 + 4) > v18;
    char v21 = __parity__((unsigned char)v18 - (unsigned char)*(int*)(v17 + 4));
    char v22 = *(unsigned int*)(v17 + 4) > (unsigned int)v18;
    char v23 = (((v18 - *(int*)(v17 + 4)) ^ v18) & (*(int*)(v17 + 4) ^ v18)) < 0;
    char v24 = (((v18 - *(int*)(v17 + 4)) ^ (*(int*)(v17 + 4) ^ v18)) >>> 4) & 0x1;
    if(!v19) {
        void* ptr4 = (void*)malloc_crt(544);
        void* ptr5 = ptr0;
        _Block2 = ptr4;
        v4 = _Block2 ? 0: 1;
        v3 = (int)_Block2 < 0;
        v2 = __parity__((unsigned char)_Block2);
        v1 = 0;
        v0 = 0;
        if(!v4) {
            int v25 = 0x88;
            int v26 = *(int*)(v7 - 32);
            int* ptr6 = *(unsigned int*)(v26 + 104);
            void* ptr7 = _Block2;
            while(v25 != 0) {
                *(int*)ptr7 = *ptr6;
                ++ptr6;
                ptr7 = (void*)((int)ptr7 + 4);
                --v25;
            }
            v17 = 0;
            char v27 = 1;
            char v28 = 0;
            char v29 = 1;
            char v30 = 0;
            char v31 = 0;
            *(int*)_Block2 = 0;
            ptr0 = _Block2;
            unsigned int v32 = (unsigned int)_setmbcp_nolock(*(int*)(v7 + 8), (int)_Block2);
            void* ptr8 = ptr1;
            void* ptr9 = ptr0;
            v10 = v32;
            *(unsigned int*)(v7 + 8) = v32;
            char v33 = v10 ? 0: 1;
            char v34 = v10 >= 0x80000000;
            char v35 = __parity__((unsigned char)v10);
            char v36 = 0;
            char v37 = 0;
            if(v33) {
                int v38 = *(int*)(v7 - 32);
                int* ptr10 = *(unsigned int*)(v38 + 104);
                int v39 = -1;
                char v40 = 0;
                char v41 = 1;
                char v42 = 1;
                char v43 = 0;
                char v44 = 0;
                unsigned int v45 = *ptr10;
                *ptr10 = *ptr10 - 1;
                char v46 = *ptr10 ? 0: 1;
                char v47 = *ptr10 < 0;
                char v48 = __parity__((unsigned char)*ptr10);
                char v49 = ((~v45 ^ *ptr10) >>> 4) & 0x1;
                char v50 = v45 >= 1;
                char v51 = ((*ptr10 ^ v45) & v45) < 0;
                unsigned int v52 = v45;
                if(v46) {
                    void* _Block = *(void**)(v38 + 104);
                    char v53 = _Block == &gvar_418750;
                    char v54 = (int)_Block < &gvar_418750;
                    char v55 = __parity__((unsigned char)_Block - 80);
                    char v56 = (unsigned int)_Block < &gvar_418750;
                    char v57 = (int)(int*)((int)(int*)((int)(int*)((int)_Block - &gvar_418750) ^ (int)_Block) & (int)(int*)((int)_Block ^ &gvar_418750)) < 0;
                    char v58 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)_Block - &gvar_418750) ^ (int)(int*)((int)_Block ^ &gvar_418750)) >>> 4) & 0x1);
                    if(!v53) {
                        free(_Block);
                        void* ptr11 = ptr0;
                        v38 = *(int*)(v7 - 32);
                    }
                }
                *(void**)(v38 + 104) = _Block2;
                int v59 = 0;
                char v60 = 1;
                char v61 = 0;
                char v62 = 1;
                char v63 = 0;
                char v64 = 0;
                int v65 = 0;
                int v66 = 1;
                char v67 = 0;
                char v68 = 0;
                char v69 = 0;
                char v70 = 0;
                char v71 = 0;
                unsigned int v72 = *(unsigned int*)_Block2;
                *(int*)_Block2 = *(int*)_Block2 + 1;
                char v73 = *(int*)_Block2 ? 0: 1;
                char v74 = *(int*)_Block2 < 0;
                char v75 = __parity__((unsigned char)*(int*)_Block2);
                v24 = (((v72 ^ 0x1) ^ *(int*)_Block2) >>> 4) & 0x1;
                char v76 = v72 >= 0xffffffff;
                char v77 = ((*(int*)_Block2 ^ v72) & ~(v72 ^ 0x1)) < 0;
                unsigned int v78 = v72;
                int v79 = *(int*)(v7 - 32);
                v4 = *(char*)(v79 + 112) & 0x2 ? 0: 1;
                v3 = (*(char*)(v79 + 112) & 0x2) < 0;
                v2 = __parity__(*(char*)(v79 + 112) & 0x2);
                v1 = 0;
                v0 = 0;
                if(v4) {
                    v4 = *(char*)&gvar_418C98 & 0x1 ? 0: 1;
                    v3 = (*(char*)&gvar_418C98 & 0x1) < 0;
                    v2 = __parity__(*(char*)&gvar_418C98 & 0x1);
                    v1 = 0;
                    v0 = 0;
                    if(v4) {
                        int v80 = lock(13);
                        void* ptr12 = ptr0;
                        *(int*)(v7 - 4) = 0;  // __try{ (see __finally:408A60h)
                        unsigned int v81 = *(unsigned int*)((int)_Block2 + 4);
                        gvar_419A4C = *(unsigned int*)((int)_Block2 + 4);
                        unsigned int v82 = *(unsigned int*)((int)_Block2 + 8);
                        gvar_419A50 = *(unsigned int*)((int)_Block2 + 8);
                        unsigned int v83 = *(unsigned int*)((int)_Block2 + 540);
                        gvar_419A60 = *(unsigned int*)((int)_Block2 + 540);
                        unsigned int v84 = 0;
                        while(1) {
                            *(unsigned int*)(v7 - 28) = v84;
                            char v85 = v84 == 5;
                            char v86 = (int)v84 < 5;
                            char v87 = __parity__((unsigned char)v84 - 5);
                            char v88 = v84 < 5;
                            char v89 = (((v84 - 5) ^ v84) & (v84 ^ 0x5)) < 0;
                            char v90 = (((v84 - 5) ^ (v84 ^ 0x5)) >>> 4) & 0x1;
                            if(v86 == v89) {
                            loc_4089EF:
                                unsigned int v91 = 0;
                                while(1) {
                                    *(unsigned int*)(v7 - 28) = v91;
                                    char v92 = v91 == 0x101;
                                    char v93 = (int)v91 < 0x101;
                                    char v94 = __parity__((unsigned char)v91 - 1);
                                    char v95 = v91 < 0x101;
                                    char v96 = (((v91 - 0x101) ^ v91) & (v91 ^ 0x101)) < 0;
                                    char v97 = (((v91 - 0x101) ^ (v91 ^ 0x101)) >>> 4) & 0x1;
                                    if(v93 == v96) {
                                    loc_408A09:
                                        while(1) {
                                            *(unsigned int*)(v7 - 28) = v17;
                                            char v98 = v17 == 0x100;
                                            char v99 = (int)v17 < 0x100;
                                            char v100 = __parity__((unsigned char)v17);
                                            char v101 = v17 < 0x100;
                                            char v102 = (((v17 - 0x100) ^ v17) & (v17 ^ 0x100)) < 0;
                                            char v103 = (((v17 - 0x100) ^ (v17 ^ 0x100)) >>> 4) & 0x1;
                                            if(v99 == v102) {
                                            loc_408A24:
                                                void* _Block1 = gvar_418974;
                                                int v104 = -1;
                                                char v105 = 0;
                                                char v106 = 1;
                                                char v107 = 1;
                                                char v108 = 0;
                                                char v109 = 0;
                                                unsigned int v110 = *(unsigned int*)_Block1;
                                                *(int*)_Block1 = *(int*)_Block1 - 1;
                                                char v111 = *(int*)_Block1 ? 0: 1;
                                                char v112 = *(int*)_Block1 < 0;
                                                char v113 = __parity__((unsigned char)*(int*)_Block1);
                                                char v114 = ((~v110 ^ *(int*)_Block1) >>> 4) & 0x1;
                                                char v115 = v110 >= 1;
                                                char v116 = ((*(int*)_Block1 ^ v110) & v110) < 0;
                                                unsigned int v117 = v110;
                                                if(v111) {
                                                    _Block1 = gvar_418974;
                                                    char v118 = _Block1 == &gvar_418750;
                                                    char v119 = (int)_Block1 < &gvar_418750;
                                                    char v120 = __parity__((unsigned char)_Block1 - 80);
                                                    char v121 = (unsigned int)_Block1 < &gvar_418750;
                                                    char v122 = (int)(int*)((int)(int*)((int)(int*)((int)_Block1 - &gvar_418750) ^ (int)_Block1) & (int)(int*)((int)_Block1 ^ &gvar_418750)) < 0;
                                                    char v123 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)_Block1 - &gvar_418750) ^ (int)(int*)((int)_Block1 ^ &gvar_418750)) >>> 4) & 0x1);
                                                    if(!v118) {
                                                        free(_Block1);
                                                        void* ptr13 = ptr0;
                                                    }
                                                }
                                                gvar_418974 = _Block2;
                                                int v124 = 0;
                                                char v125 = 1;
                                                char v126 = 0;
                                                char v127 = 1;
                                                char v128 = 0;
                                                char v129 = 0;
                                                int v130 = 0;
                                                int v131 = 1;
                                                char v132 = 0;
                                                char v133 = 0;
                                                char v134 = 0;
                                                char v135 = 0;
                                                char v136 = 0;
                                                unsigned int v137 = *(unsigned int*)_Block2;
                                                *(int*)_Block2 = *(int*)_Block2 + 1;
                                                v4 = *(int*)_Block2 ? 0: 1;
                                                v3 = *(int*)_Block2 < 0;
                                                v2 = __parity__((unsigned char)*(int*)_Block2);
                                                v24 = (((v137 ^ 0x1) ^ *(int*)_Block2) >>> 4) & 0x1;
                                                v0 = v137 >= 0xffffffff;
                                                v1 = ((*(int*)_Block2 ^ v137) & ~(v137 ^ 0x1)) < 0;
                                                unsigned int v138 = v137;
                                                *(int*)(v7 - 4) = -2;  // } (starts at 4089B7h)
                                                int v139 = sub_408A63();
                                                unsigned int v140 = v10;
                                                EH_epilog3(v8, v6, v5, param0);
                                                int v141 = v8;
                                                int* ptr14 = &v6;
                                                jump v141;
                                            }
                                            else {
                                                v83 = (unsigned int)*(char*)((char*)((int)_Block2 + v17) + 0x119) | ((unsigned int)((v83 >>> 8) & 0xffffff) << 8);
                                                *(unsigned char*)((int)&gvar_418650 + v17) = *((unsigned char*)((int)_Block2 + v17) + 0x119);
                                                unsigned int v142 = v17;
                                                ++v17;
                                                char v143 = v17 ? 0: 1;
                                                char v144 = v17 >= 0x80000000;
                                                char v145 = __parity__((unsigned char)v17);
                                                char v146 = (((v142 ^ 0x1) ^ v17) >>> 4) & 0x1;
                                                char v147 = (int)((v17 ^ v142) & ~(v142 ^ 0x1)) < 0;
                                            }
                                        }
                                        goto loc_408A24;
                                    }
                                    else {
                                        v83 = (unsigned int)*(char*)((int*)(v91 + (int)_Block2) + 6) | ((unsigned int)((v83 >>> 8) & 0xffffff) << 8);
                                        *(unsigned char*)((int)&gvar_418548 + v91) = *(unsigned char*)((int*)(v91 + (int)_Block2) + 6);
                                        unsigned int v148 = v91;
                                        ++v91;
                                        char v149 = v91 ? 0: 1;
                                        char v150 = v91 >= 0x80000000;
                                        char v151 = __parity__((unsigned char)v91);
                                        char v152 = (((v148 ^ 0x1) ^ v91) >>> 4) & 0x1;
                                        char v153 = (int)((v91 ^ v148) & ~(v148 ^ 0x1)) < 0;
                                    }
                                }
                                goto loc_408A09;
                            }
                            else {
                                v83 = (unsigned int)*(short*)((int*)(v84 * 2 + (int)_Block2) + 3) | ((unsigned int)(unsigned short)(v83 >>> 16) << 16);
                                *(unsigned short*)(v84 * 2 + (int)&gvar_419A54) = *(unsigned short*)((int*)(v84 * 2 + (int)_Block2) + 3);
                                unsigned int v154 = v84;
                                ++v84;
                                char v155 = v84 ? 0: 1;
                                char v156 = v84 >= 0x80000000;
                                char v157 = __parity__((unsigned char)v84);
                                char v158 = (((v154 ^ 0x1) ^ v84) >>> 4) & 0x1;
                                char v159 = (int)((v84 ^ v154) & ~(v154 ^ 0x1)) < 0;
                            }
                        }
                        goto loc_4089EF;
                    }
                }
            }
            else {
                v4 = v10 == -1;
                v3 = (int)v10 < -1;
                v2 = __parity__((unsigned char)v10 - 0xFF);
                v0 = v10 < 0xffffffff;
                v1 = (((v10 + 1) ^ v10) & ~v10) < 0;
                v24 = (((v10 + 1) ^ ~v10) >>> 4) & 0x1;
                if(v4) {
                    v4 = _Block2 == &gvar_418750;
                    v3 = (int)_Block2 < &gvar_418750;
                    v2 = __parity__((unsigned char)_Block2 - 80);
                    v0 = (unsigned int)_Block2 < &gvar_418750;
                    v1 = (int)(int*)((int)(int*)((int)(int*)((int)_Block2 - &gvar_418750) ^ (int)_Block2) & (int)(int*)((int)_Block2 ^ &gvar_418750)) < 0;
                    v24 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)_Block2 - &gvar_418750) ^ (int)(int*)((int)_Block2 ^ &gvar_418750)) >>> 4) & 0x1);
                    if(!v4) {
                        free(_Block2);
                        void* ptr15 = ptr0;
                    }
                    int* ptr16 = errno();
                    ptr16[0] = 22;
                }
            }
        }
    }
    else {
        v10 = 0;
        v4 = 1;
        v3 = 0;
        v2 = 1;
        v1 = 0;
        v0 = 0;
    }
    unsigned int v140 = v10;
    EH_epilog3(v8, v6, v5, param0);
    int v141 = v8;
    int* ptr14 = &v6;
    jump v141;
}

int _setmbcp_nolock(int param0, unsigned int param1) {
    int result;
    int v0;
    unsigned int v1;
    unsigned char v2;
    int v3;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v0);
    int v4 = v3;
    unsigned int v5 = param1;
    UINT CodePage = (UINT)getSystemCP(param0);
    if(!CodePage) {
        setSBCS(v5);
    }
    else {
        unsigned int v6 = 0;
        unsigned char* ptr1 = NULL;
        BOOL v7 = 0;
        unsigned char* ptr2 = NULL;
        while(*(unsigned int*)((int)&gvar_418978 + v7) != CodePage) {
            ++ptr1;
            v7 += 48;
            ptr2 = ptr1;
            if((unsigned int)v7 >= 240) {
                if(CodePage == 65000 || CodePage == 65001) {
                    _security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr0));
                    return result;
                }
                v7 = IsValidCodePage((UINT)(unsigned short)CodePage);
                if(!v7) {
                    _security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr0));
                    return result;
                }
                v7 = GetCPInfo(CodePage, &v1);
                if(!v7) {
                    if(gvar_419A64 != 0) {
                        setSBCS(v5);
                    }
                    _security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr0));
                    return result;
                }
                memset2(v5 + 24, 0, 0x101);
                *(UINT*)(v5 + 4) = CodePage;
                *(int*)(v5 + 540) = 0;
                if(v1 > 1) {
                    unsigned char* ptr3 = &v2;
                    if(!v2) {
                    loc_408B79:
                        char* ptr4 = (char*)(v5 + 26);
                        int counter = 254;
                        do {
                            *ptr4 = *ptr4 | 0x8;
                            ++ptr4;
                            --counter;
                        }
                        while(counter);
                        wchar_t* ptr5 = CPtoLocaleName(*(int*)(v5 + 4));
                        *(wchar_t**)(v5 + 540) = ptr5;
                        *(int*)(v5 + 8) = 1;
                        int* ptr6 = (int*)(v5 + 12);
                        *ptr6 = 0;
                        int* ptr7 = ptr6 + 1;
                        *ptr7 = 0;
                        *(ptr7 + 1) = 0;
                        setSBUpLow((int)v5);
                        _security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr0));
                        return result;
                    }
                    do {
                        unsigned int i = (unsigned int)*(char*)(ptr3 + 1) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                        if(!*(char*)(ptr3 + 1)) {
                            break;
                        }
                        else {
                            unsigned int max = (unsigned int)(unsigned char)i;
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
                    setSBUpLow((int)v5);
                    _security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr0));
                    return result;
                }
            }
        }
        int v8 = memset2(v5 + 24, 0, 0x101);
        int* ptr8 = (int*)((int)ptr2 * 48);
        int* ptr9 = (int*)((int)ptr2 * 48);
        unsigned char* j = (unsigned char*)(ptr8 + 0x106262);
        ptr2 = (unsigned char*)(ptr8 + 0x106262);
        do {
            unsigned char* ptr10 = j;
            if(*j) {
                do {
                    j = (unsigned int)*(char*)(ptr10 + 1) | ((unsigned int)(int*)((int)(int*)((int)j >>> 8) & 0xffffff) << 8);
                    if(!*(char*)(ptr10 + 1)) {
                        break;
                    }
                    else {
                        unsigned int v9 = (unsigned int)*ptr10;
                        for(j = (unsigned char*)(unsigned char)j; (unsigned int)j >= v9 && v9 < 0x100; j = (unsigned char*)*(char*)(ptr10 + 1)) {
                            *(char*)(v9 + v5 + 25) = *(char*)(v9 + v5 + 25) | *(unsigned char*)((int)&gvar_418970 + v6);
                            ++v9;
                        }
                        ptr10 += 2;
                    }
                }
                while(*ptr10);
                j = ptr2;
            }
            ++v6;
            j += 8;
            ptr2 = j;
        }
        while(v6 < 4);
        int v10 = (int)CodePage;
        *(UINT*)(v5 + 4) = CodePage;
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
        setSBUpLow((int)v5);
    }
    _security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr0));
    return result;
}

int _setmode_nolock(unsigned int param0, unsigned int param1) {
    int v0;
    int v1 = v0;
    int v2 = param0 >> 5;
    int v3 = (param0 & 0x1f) * 64;
    unsigned int v4 = *(unsigned int*)(v2 * 4 + (int)&gvar_4191D0);
    unsigned int v5 = (unsigned int)*(char*)(v3 + v4 + 4) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
    param0 = (unsigned int)((unsigned int)*(char*)(v3 + v4 + 4) & 0x80);
    unsigned int v6 = param1;
    unsigned int v7 = (unsigned int)(((unsigned int)(*(char*)(v3 + v4 + 36) * 2) | ((unsigned int)((*(char*)(v3 + v4 + 36) >>> 6) & 0x1 ? 0xffffff: 0) << 8)) >> 1);
    switch(v6) {
        case 262144: {
            *(char*)(v3 + v4 + 4) = (unsigned char)v5 | 0x80;
            v5 = *(unsigned int*)(v2 * 4 + (int)&gvar_4191D0);
            v6 = (unsigned int)((*(char*)(v5 + v3 + 36) & 0x81) | 0x1) | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
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
    return v7 <= 0 ? 0x4000: 0x10000;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _sopen_helper(unsigned int param0, int param1, int param2, int param3, int* param4, unsigned int param5) {
    int result;
    int v0;
    int v1;
    int v2 = v1;
    int v3 = 0;
    int v4 = 0;
    int* ptr0 = param4;
    if(ptr0) {
        *ptr0 = -1;
        if(param0 == 0 || (param5 != 0 && !((unsigned int)(param3 & 0xfffffe7f) > 0 ? 0: 1))) {
            int* ptr1 = _errno();
            ptr1[0] = 22;
            _invalid_parameter_noinfo();
            result = 22;
            *(int*)__FS_BASE = v0;
            return result;
        }
        int v5 = 0;  // __try{ (see __finally:409396h)
        int v6 = _sopen_nolock((int)&v4, (int)ptr0, (int)param0, param1, param2, param3, (int)param5);
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

// Stale decompilation - Refresh this view to re-decompile this code
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
        result = (int)__ascii_strnicmp(_String1, _String2, _MaxCount);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _strnicmp_l(char* _String1, char* _String2, size_t _MaxCount, _locale_t _Locale) {
    int result;
    int v0;
    unsigned char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    if(_MaxCount) {
        int v6 = v3;
        _LocaleUpdate::_LocaleUpdate(&v0, (int*)_Locale);
        unsigned int v7 = 0x7fffffff;
        if(_String1) {
            char* ptr0 = _String2;
            if(!ptr0 || _MaxCount > 0x7fffffff) {
                goto loc_40BEFB;
            }
            else if(!*(int*)(v0 + 168)) {
                v7 = __ascii_strnicmp(_String1, ptr0, _MaxCount);
            }
            else {
                int* ptr1 = (int*)((int)_String1 - (int)ptr0);
                do {
                    v4 = _tolower_l((int)ptr0[ptr1], (_locale_t)&v0);
                    v5 = _tolower_l((int)ptr0[0], (_locale_t)&v0);
                    ++ptr0;
                    --_MaxCount;
                }
                while(_MaxCount && v4 && v5 == v4);
                v7 = (unsigned int)(v4 - v5);
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
        result = (int)v7;
    }
    else {
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _tolower_l(int _C, _locale_t _Locale) {
    int v0;
    char v1;
    char v2;
    int result;
    int v3;
    unsigned char v4;
    int v5;
    char v6;
    int v7;
    int v8;
    char v9;
    int v10 = v5;
    _LocaleUpdate::_LocaleUpdate(&v7, (int*)_Locale);
    int _C1 = _C;
    if((unsigned int)_C1 < 0x100) {
        int v11 = v7;
        if(*(int*)(v11 + 116) > 1) {
            v3 = _isctype_l(_C1, 1, (_locale_t)&v7);
            v11 = v7;
        }
        else {
            v3 = (unsigned int)*(short*)(_C1 * 2 + *(int*)(v11 + 144)) & 0x1;
        }
        if(v3) {
            v11 = (int)*(char*)(*(int*)(v11 + 148) + _C1);
            if(v4) {
                *(int*)(v8 + 112) = *(int*)(v8 + 112) & 0xfffffffd;
            }
            result = v11;
        }
        else {
            if(v4) {
                *(int*)(v8 + 112) = *(int*)(v8 + 112) & 0xfffffffd;
            }
            goto loc_40C509;
        }
    }
    else {
        if(*(int*)(v7 + 116) > 1) {
            _C = _C1 >> 8;
            int v12 = _isleadbyte_l((int)(unsigned char)(_C1 >>> 8), (_locale_t)&v7);
            if(!v12) {
                goto loc_40C546;
            }
            else {
                v2 = (unsigned char)(_C1 >> 8);
                v1 = (unsigned char)_C1;
                char v13 = 0;
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
        int v14 = 1;
        int v15 = *(int*)(v7 + 4);
        int v16 = 3;
        int v17 = &v9;
        int v18 = v0;
        int v19 = &v2;
        int v20 = 0x100;
        int v21 = __crtLCMapStringA((int*)&v7, *(int*)(v7 + 168), 0x100, &v2, v0, &v9, 3, v15, 1);
        if(!v21) {
            if(v4 != 0) {
                *(int*)(v8 + 112) = *(int*)(v8 + 112) & 0xfffffffd;
            }
        loc_40C509:
            result = _C1;
        }
        else if(v21 == 1) {
            result = (int)v9;
            if(v4) {
                *(int*)(v8 + 112) = *(int*)(v8 + 112) & 0xfffffffd;
            }
        }
        else {
            int v22 = (unsigned int)v6 | ((unsigned int)v9 << 8) | ((unsigned int)0 << 16);
            if(v4) {
                *(int*)(v8 + 112) = *(int*)(v8 + 112) & 0xfffffffd;
            }
            result = v22;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _ungetc_nolock(int _Character, FILE* _Stream) {
    int result;
    int v0;
    int v1 = v0;
    FILE* _Stream1 = _Stream;
    if(!(*(char*)&_Stream1[3]._Placeholder & 0x40)) {
        int v2 = _fileno(_Stream1);
        if(!(*(char*)((v2 == -1 || v2 == -2 ? &gvar_418500: (v2 & 0x1f) * 64 + *(unsigned int*)((v2 >> 5) * 4 + (int)&gvar_4191D0)) + 36) & 0x7f) && !(*(char*)((int)(v2 == -1 || v2 == -2 ? (void*)&gvar_418500: (void*)((v2 & 0x1f) * 64 + *(unsigned int*)((v2 >> 5) * 4 + (int)&gvar_4191D0))) + 36) & 0x80)) {
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
            result = (int)(unsigned char)v3;
        }
        else {
            result = -1;
        }
    }
    return result;
}

int _unlock_fhandle(int param0) {
    int result;
    LeaveCriticalSection((LPCRITICAL_SECTION)((param0 & 0x1f) * 64 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_4191D0) + 12));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
int _unlock_file2(unsigned int param0, int param1) {
    int result;
    unsigned int v0 = param0;
    if((int)v0 < 20) {
        *(int*)(param1 + 12) = *(int*)(param1 + 12) & 0xffff7fff;
        result = _unlock((int)(v0 + 16));
    }
    else {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param1 + 32));
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _unwind_handler(int param0, int param1, int param2, int* param3, int param4) {
    int v0;
    int result = 1;
    if((*(int*)(param0 + 4) & 0x6)) {
        __security_check_cookie((uintptr_t)(*(int*)(param4 - 4) ^ param4));
        unsigned int v1 = *(unsigned int*)(v0 + 40);
        unsigned int v2 = *(unsigned int*)(v0 + 40);
        _local_unwind2(*(int*)(v0 + 36), v1);
        *param3 = param1;
        result = 3;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _unwind_handler4(int param0, int param1, int param2, int* param3) {
    int v0;
    int result = 1;
    if((*(int*)(param0 + 4) & 0x6)) {
        __security_check_cookie((uintptr_t)(*(int*)(param1 + 8) ^ param1));
        _local_unwind4(*(int**)(v0 + 20), *(int*)(v0 + 16), *(int**)(v0 + 12));
        *param3 = param1;
        result = 3;
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
    int v1;
    int v2 = v0;
    int* ptr0 = param0;
    do {
        unsigned int* ptr1 = param1;
        *ptr0 = *ptr0 + 1;
        result = unk_lib_sub12(ptr1);
        if(result == -1) {
            return result;
        }
        v1 = isspace((int)(unsigned char)result);
    }
    while(v1);
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
    unsigned long v0;
    LPCVOID v1;
    char* _SrcCh1;
    DWORD v2;
    LPCVOID v3;
    int v4;
    int v5;
    int* ptr1;
    int v6;
    char v7;
    unsigned int v8;
    int v9;
    char v10;
    unsigned short v11;
    char v12;
    short v13;
    int result;
    char v14;
    unsigned char v15;
    unsigned int v16 = 0;
    unsigned int v17 = param0;
    LPCVOID v18 = param1;
    int v19 = v9;
    int* ptr2 = NULL;
    unsigned int v20 = v17;
    DWORD v21 = 0;
    LPCVOID lpBuffer = v18;
    int* ptr3 = NULL;
    if(nNumberOfBytesToWrite2 != 0) {
        if(!v18) {
            *(int*)&v10 = -60;
            unsigned long* ptr4 = /*BAD_CALL!*/ __doserrno();
            ptr4[0] = 0;
            *(int*)&v10 = -53;
            int* ptr5 = /*BAD_CALL!*/ errno();
            ptr5[0] = 22;
            *(int*)&v10 = -42;
            /*BAD_CALL!*/ invalid_parameter_noinfo();
        }
        else {
            unsigned int v22 = v17;
            unsigned int v23 = v17;
            int v24 = v22 >> 5;
            int v25 = (v23 & 0x1f) * 64;
            int v26 = v24;
            *(int*)&v10 = (unsigned int)v15 | ((unsigned int)v5 << 8);
            unsigned int v27 = *(unsigned int*)(v24 * 4 + (int)&gvar_4191D0);
            int v28 = v25;
            v15 = (unsigned char)(*(char*)(v25 + v27 + 36) * 2) >> 1;
            if((v15 != 2 && v15 != 1)) {
            loc_406441:
                if((*(char*)(v25 + v27 + 4) & 0x20)) {
                    *(int*)&v13 = 2;
                    _lseeki64_nolock(v17, 0, 0, *(DWORD*)&v13);
                }
                *(unsigned int*)&v13 = v20;
                int v29 = _isatty(*(unsigned int*)&v13);
                if(v29) {
                    int v30 = v26;
                    int v31 = v28;
                    unsigned int v32 = *(unsigned int*)(v30 * 4 + (int)&gvar_4191D0);
                    if(!(*(char*)(v32 + v31 + 4) & 0x80)) {
                        goto loc_4067BC;
                    }
                    else {
                        *(int*)&v13 = &loc_406489;
                        int v33 = /*BAD_CALL!*/ _getptd();
                        int v34 = *(int*)(v33 + 108);
                        char v35 = *(int*)(v34 + 168) == 0;
                        *(int**)&v13 = &v8;
                        int v36 = v26;
                        v4 = v35 ? 1: 0;
                        int v37 = v28;
                        unsigned int v38 = *(unsigned int*)(v36 * 4 + (int)&gvar_4191D0);
                        BOOL v39 = GetConsoleMode(*(HANDLE*)(v38 + v37), *(LPDWORD*)&v13);
                        if(!v39 || (v4 != 0 && !v15)) {
                            goto loc_4067BC;
                        }
                        else {
                            *(int*)&v13 = &loc_4064DE;
                            UINT v40 = /*BAD_CALL!*/ GetConsoleCP();
                            v3 = lpBuffer;
                            v20 = 0;
                            UINT CodePage = v40;
                            v2 = 0;
                            LPCVOID v41 = v3;
                            if(nNumberOfBytesToWrite2 <= 0) {
                            loc_406BA0:
                                if((!(*(char*)(*(unsigned int*)(v26 * 4 + (int)&gvar_4191D0) + v28 + 4) & 0x40) || *(char*)v3 != 26)) {
                                    *(int*)&v13 = &loc_406BB0;
                                    int* ptr6 = /*BAD_CALL!*/ errno();
                                    ptr6[0] = 28;
                                    *(int*)&v13 = &loc_406BBB;
                                    ptr0 = /*BAD_CALL!*/ __doserrno();
                                    ptr0[0] = 0;
                                }
                            }
                            else {
                                LPCVOID v42 = v41;
                                int* ptr7 = NULL;
                                ptr3 = NULL;
                                *(int*)&v11 = 10;
                                do {
                                    v4 = 0;
                                    if(!v15) {
                                        ptr7 = (unsigned int)*(char*)v42 | ((unsigned int)(int*)((int)(int*)((int)ptr7 >>> 8) & 0xffffff) << 8);
                                        int v43 = v28;
                                        v8 = (unsigned char)ptr7 != 10 ? 0: 1;
                                        int v44 = *(int*)(v26 * 4 + (int)&gvar_4191D0);
                                        v4 = *(int*)(v26 * 4 + (int)&gvar_4191D0);
                                        if(*(int*)(v44 + v43 + 56) != 0) {
                                            v10 = *(char*)(v44 + v43 + 52);
                                            char v45 = (unsigned char)ptr7;
                                            *(int*)&v13 = 2;
                                            *(int*)(v43 + v4 + 56) = 0;
                                            _SrcCh1 = (char*)&v10;
                                        }
                                        else {
                                            *(int*)&v13 = (int)(unsigned char)ptr7;
                                            int v46 = isleadbyte(*(int*)&v13);
                                            if(v46) {
                                                char* _SrcCh = (char*)v41;
                                                if((unsigned int)(int*)((int)(int*)((int)lpBuffer - (int)_SrcCh) + nNumberOfBytesToWrite2) > 1) {
                                                    *(int*)&v13 = 2;
                                                    int v47 = mbtowc(&v2, _SrcCh, *(size_t*)&v13);
                                                    if(v47 == -1) {
                                                        break;
                                                    }
                                                    else {
                                                        v1 = (LPCVOID)((int)v41 + 1);
                                                        ptr3 = (int*)((char*)ptr3 + 1);
                                                        goto loc_4065F3;
                                                    }
                                                }
                                                else {
                                                    ptr2 = (int*)((char*)ptr2 + 1);
                                                    *(char*)(*(unsigned int*)(v26 * 4 + (int)&gvar_4191D0) + v28 + 52) = _SrcCh[0];
                                                    *(int*)(*(unsigned int*)(v26 * 4 + (int)&gvar_4191D0) + v28 + 56) = 1;
                                                    break;
                                                }
                                            }
                                            else {
                                                *(int*)&v13 = 1;
                                                _SrcCh1 = (char*)v41;
                                            }
                                        }
                                        int v48 = mbtowc(&v2, _SrcCh1, *(size_t*)&v13);
                                        if(v48 == -1) {
                                            break;
                                        }
                                        else {
                                            v1 = v41;
                                        loc_4065F3:
                                            ptr3 = (int*)((char*)ptr3 + 1);
                                            *(int*)&v13 = 0;
                                            v41 = (LPCVOID)((int)v1 + 1);
                                            int v49 = WideCharToMultiByte(CodePage, 0, (LPCWCH)&v2, 1, &v10, 5, NULL, *(LPBOOL*)&v13);
                                            v4 = v49;
                                            if(!v49) {
                                                break;
                                            }
                                            else {
                                                *(int*)&v13 = 0;
                                                BOOL v50 = WriteFile(*(HANDLE*)(*(unsigned int*)(v26 * 4 + (int)&gvar_4191D0) + v28), &v10, (DWORD)v49, &v20, *(LPOVERLAPPED*)&v13);
                                                if(!v50) {
                                                    goto loc_4067A9;
                                                }
                                                else {
                                                    ptr2 = (int*)((int)ptr3 + v16);
                                                    if((((v20 - v4) ^ v20) & (v20 ^ v4)) < 0 != (int)v20 < v4) {
                                                        break;
                                                    }
                                                    else {
                                                        if(v8 != 0) {
                                                            *(int*)&v13 = 0;
                                                            v10 = 13;
                                                            BOOL v51 = WriteFile(*(HANDLE*)(*(unsigned int*)(v26 * 4 + (int)&gvar_4191D0) + v28), &v10, 1, &v20, *(LPOVERLAPPED*)&v13);
                                                            if(!v51) {
                                                                goto loc_4067A9;
                                                            }
                                                            else if((int)v20 < 1) {
                                                                break;
                                                            }
                                                            else {
                                                                ++v16;
                                                                ptr2 = (int*)((char*)ptr2 + 1);
                                                            }
                                                        }
                                                        goto loc_406761;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if(v15 == 1 || v15 == 2) {
                                        unsigned short v52 = *(unsigned short*)v42;
                                        char v53 = *(short*)v42 == v11;
                                        v2 = (DWORD)v52;
                                        v4 = v53 ? 1: 0;
                                        v41 = (LPCVOID)((int)v42 + 2);
                                        ptr3 = (int*)((char*)ptr3 + 2);
                                        *(int*)&v13 = (unsigned int)v52;
                                        BOOL v54 = /*BAD_CALL!*/ sub_40A1C7(v13);
                                        unsigned short v55 = (unsigned short)v54;
                                        if((unsigned short)v2 != v55) {
                                            goto loc_4067A9;
                                        }
                                        else {
                                            ptr2 = (int*)((char*)ptr2 + 2);
                                            if(v4 != 0) {
                                                *(int*)&v13 = 13;
                                                v2 = *(DWORD*)&v13;
                                                BOOL v56 = /*BAD_CALL!*/ sub_40A1C7(13);
                                                unsigned short v57 = (unsigned short)v56;
                                                if((unsigned short)v2 != v57) {
                                                    goto loc_4067A9;
                                                }
                                                else {
                                                    ptr2 = (int*)((char*)ptr2 + 1);
                                                    ++v16;
                                                }
                                            }
                                        loc_406761:
                                            ptr7 = ptr3;
                                            v42 = v41;
                                        }
                                    }
                                }
                                while((unsigned int)ptr7 < nNumberOfBytesToWrite2);
                                goto loc_4068C8;
                            }
                        }
                    }
                }
                else {
                loc_4067BC:
                    unsigned int v58 = *(unsigned int*)(v26 * 4 + (int)&gvar_4191D0);
                    int v59 = v28;
                    if((*(char*)(v59 + v58 + 4) & 0x80)) {
                        v3 = lpBuffer;
                        v2 = 0;
                        if(!v15) {
                            DWORD v60 = nNumberOfBytesToWrite2;
                            v20 = (unsigned int)v3;
                            if(!v60) {
                                goto loc_406BA0;
                            }
                            else {
                                do {
                                    int v61 = 0;
                                    LPCVOID v62 = &v12;
                                    v4 = 0;
                                    int* ptr8 = (int*)((int)v3 - (int)lpBuffer);
                                    while((unsigned int)ptr8 < v60) {
                                        v61 = (unsigned int)*(char*)v3 | ((unsigned int)((v61 >>> 8) & 0xffffff) << 8);
                                        ptr8 = (int*)((char*)ptr8 + 1);
                                        char v63 = (unsigned char)v61;
                                        v20 = (unsigned int)((int)v3 + 1);
                                        int v64 = v4;
                                        if((unsigned char)v61 == 10) {
                                            ++v16;
                                            *(char*)v62 = 13;
                                            v62 = (LPCVOID)((int)v62 + 1);
                                            ++v64;
                                        }
                                        *(char*)v62 = v63;
                                        v62 = (LPCVOID)((int)v62 + 1);
                                        v3 = (LPCVOID)v20;
                                        v61 = v64 + 1;
                                        v4 = v64 + 1;
                                        if((unsigned int)v61 >= 0x13ff) {
                                            break;
                                        }
                                    }
                                    DWORD nNumberOfBytesToWrite = (DWORD)((int)v62 - (int)&v12);
                                    *(int*)&v13 = 0;
                                    BOOL v65 = WriteFile(*(HANDLE*)(*(unsigned int*)(v26 * 4 + (int)&gvar_4191D0) + v28), &v12, nNumberOfBytesToWrite, &ptr1, *(LPOVERLAPPED*)&v13);
                                    if(!v65) {
                                        goto loc_4067A9;
                                    }
                                    else {
                                        ptr2 = (int*)((int)ptr2 + (int)ptr1);
                                        if((int)nNumberOfBytesToWrite > (int)ptr1) {
                                            break;
                                        }
                                        else {
                                            v3 = (LPCVOID)v20;
                                        }
                                    }
                                }
                                while((unsigned int)(int*)((int)v3 - (int)lpBuffer) < v60);
                                v21 = v2;
                            }
                        }
                        else {
                            LPCVOID v66 = v3;
                            if(v15 != 2) {
                                DWORD v67 = nNumberOfBytesToWrite2;
                                v20 = (unsigned int)v66;
                                if(!v67) {
                                    goto loc_406BA0;
                                }
                                else {
                                    *(int*)&v11 = 10;
                                    do {
                                        v8 = 0;
                                        LPCWCH v68 = &v14;
                                        unsigned int v69 = v20;
                                        int* ptr9 = (int*)((int)v66 - (int)v3);
                                        unsigned int v70 = 0;
                                        while((unsigned int)ptr9 < v67) {
                                            WCHAR v71 = *(WCHAR*)v69;
                                            ptr9 = (int*)((char*)ptr9 + 2);
                                            v69 += 2;
                                            v20 = v69;
                                            if(v71 == v11) {
                                                *(int*)&v13 = 13;
                                                v68[0] = (WCHAR)*(int*)&v13;
                                                ++v68;
                                                v69 = v20;
                                                v70 += 2;
                                            }
                                            v68[0] = v71;
                                            v70 += 2;
                                            ++v68;
                                            if(v70 >= 1704) {
                                                break;
                                            }
                                        }
                                        *(int*)&v13 = 0;
                                        int* ptr10 = (int*)((int)v68 - (int)&v14);
                                        int v72 = WideCharToMultiByte(65001, 0, &v14, (int)(int*)((int)ptr10 - ((int)ptr10 < 0 ? 0xffffffff: 0)) >> 1, &v7, 0xd55, NULL, *(LPBOOL*)&v13);
                                        ptr2 = ptr3;
                                        v21 = v2;
                                        v4 = v72;
                                        if(!v72) {
                                            goto loc_4067A9;
                                        }
                                        else {
                                            int* ptr11 = NULL;
                                            ptr3 = NULL;
                                            do {
                                                *(int*)&v13 = 0;
                                                BOOL v73 = WriteFile(*(HANDLE*)(*(unsigned int*)(v26 * 4 + (int)&gvar_4191D0) + v28), (LPCVOID)((int)ptr11 + (int)&v7), (DWORD)(v72 - (int)ptr11), &ptr1, *(LPOVERLAPPED*)&v13);
                                                if(v73) {
                                                    ptr11 = (int*)((int)ptr1 + (int)ptr3);
                                                    v72 = v4;
                                                    ptr3 = ptr11;
                                                }
                                                else {
                                                    *(int*)&v13 = &loc_406B0A;
                                                    DWORD v74 = /*BAD_CALL!*/ GetLastError();
                                                    ptr11 = ptr3;
                                                    v21 = v74;
                                                    v72 = v4;
                                                    v2 = v21;
                                                }
                                                break;
                                            }
                                            while(v72 > (int)ptr11);
                                            if(v72 > (int)ptr11) {
                                                break;
                                            }
                                            else {
                                                v66 = (LPCVOID)v20;
                                                v3 = lpBuffer;
                                                ptr2 = (int*)((int)v66 - (int)v3);
                                                ptr3 = (int*)((int)v66 - (int)v3);
                                            }
                                        }
                                    }
                                    while(v67 > (unsigned int)ptr2);
                                }
                            }
                            else if(nNumberOfBytesToWrite2 <= 0) {
                                goto loc_406BA0;
                            }
                            else {
                                *(int*)&v11 = 10;
                                do {
                                    v8 = 0;
                                    LPCVOID v75 = &v12;
                                    *(int*)&v13 = 13;
                                    int* ptr12 = (int*)((int)v66 - (int)v3);
                                    unsigned int v76 = 0;
                                    int v77 = *(int*)&v13;
                                    while((unsigned int)ptr12 < nNumberOfBytesToWrite2) {
                                        unsigned short v78 = *(unsigned short*)v66;
                                        ptr12 = (int*)((char*)ptr12 + 2);
                                        v66 = (LPCVOID)((int)v66 + 2);
                                        if(v78 == v11) {
                                            v16 += 2;
                                            *(short*)v75 = (unsigned short)v77;
                                            v75 = (LPCVOID)((int)v75 + 2);
                                            v76 += 2;
                                        }
                                        *(unsigned short*)v75 = v78;
                                        v76 += 2;
                                        v75 = (LPCVOID)((int)v75 + 2);
                                        if(v76 >= 5118) {
                                            break;
                                        }
                                    }
                                    v4 = (int)v66;
                                    DWORD nNumberOfBytesToWrite1 = (DWORD)((int)v75 - (int)&v12);
                                    *(int*)&v13 = 0;
                                    BOOL v79 = WriteFile(*(HANDLE*)(*(unsigned int*)(v26 * 4 + (int)&gvar_4191D0) + v28), &v12, nNumberOfBytesToWrite1, &ptr1, *(LPOVERLAPPED*)&v13);
                                    ptr2 = ptr3;
                                    v21 = v2;
                                    if(!v79) {
                                        goto loc_4067A9;
                                    }
                                    else {
                                        ptr2 = (int*)((int)ptr2 + (int)ptr1);
                                        ptr3 = ptr2;
                                        if((int)nNumberOfBytesToWrite1 > (int)ptr1) {
                                            break;
                                        }
                                        else {
                                            v66 = (LPCVOID)v4;
                                            v3 = lpBuffer;
                                        }
                                    }
                                }
                                while((unsigned int)(int*)((int)v66 - (int)v3) < nNumberOfBytesToWrite2);
                            }
                        }
                    }
                    else {
                        *(int*)&v13 = 0;
                        _SrcCh1 = (char*)&ptr1;
                        int v80 = (int)nNumberOfBytesToWrite2;
                        LPSTR v81 = (LPSTR)lpBuffer;
                        BOOL v82 = WriteFile(*(HANDLE*)(v59 + v58), lpBuffer, nNumberOfBytesToWrite2, &ptr1, *(LPOVERLAPPED*)&v13);
                        if(v82) {
                            ptr2 = ptr1;
                            v21 = 0;
                        }
                        else {
                        loc_4067A9:
                            *(int*)&v13 = &loc_4067AF;
                            v21 = /*BAD_CALL!*/ GetLastError();
                        }
                    }
                loc_4068C8:
                    if(!ptr2) {
                        if(!v21) {
                            v3 = lpBuffer;
                            goto loc_406BA0;
                        }
                        else {
                            *(int*)&v13 = 5;
                            v0 = *(unsigned long*)&v13;
                        }
                        if(v0 == v21) {
                            *(int*)&v13 = &loc_4068E6;
                            int* ptr13 = /*BAD_CALL!*/ errno();
                            ptr13[0] = 9;
                            *(int*)&v13 = &loc_4068F1;
                            ptr0 = /*BAD_CALL!*/ __doserrno();
                            ptr0[0] = v0;
                        }
                        else {
                            *(DWORD*)&v13 = v21;
                            _dosmaperr(*(unsigned int*)&v13);
                        }
                    }
                }
            }
            else if(!((unsigned char)(unsigned int)~nNumberOfBytesToWrite2 & 0x1)) {
                *(int*)&v13 = &loc_40641F;
                unsigned long* ptr14 = /*BAD_CALL!*/ __doserrno();
                ptr14[0] = 0;
                *(int*)&v13 = &loc_406426;
                int* ptr15 = /*BAD_CALL!*/ errno();
                ptr15[0] = 22;
                *(int*)&v13 = &loc_406431;
                /*BAD_CALL!*/ invalid_parameter_noinfo();
            }
            else {
                v17 = v20;
                goto loc_406441;
            }
        }
    }
    _security_check_cookie((uintptr_t)((int)&v6 ^ v19));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int _wsopen_nolock(int* param0, unsigned int* param1, LPCWSTR lpFileName, unsigned int param3, unsigned int param4, int param5) {
    unsigned int v0;
    DWORD v1;
    int v2;
    int v3;
    char v4;
    void* ptr0;
    DWORD dwCreationDisposition1;
    DWORD dwShareMode;
    DWORD dwDesiredAccess;
    DWORD v5;
    int result1;
    char v6;
    int v7;
    int* ptr1;
    int* ptr2;
    unsigned short v8;
    int v9;
    int v10;
    void* ptr3;
    void* ptr4;
    int v11;
    int v12;
    void* ptr5;
    int* ptr6 = &ptr2;
    int* ptr7 = &ptr2;
    char v13 = &ptr1 == 60;
    char v14 = (int)&v9 < 0;
    char v15 = __parity__((unsigned char)&ptr1 - 60);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0x38) ^ (int)&v9) >>> 4) & 0x1);
    char v17 = (unsigned int)&ptr2 < 56;
    char v18 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v9) & (int)(int*)((int)&ptr2 ^ 0x38)) < 0;
    int v19 = v10;
    int result = 0;
    char v20 = 1;
    char v21 = 0;
    char v22 = 1;
    char v23 = 0;
    char v24 = 0;
    v9 = 12;
    char v25 = (unsigned char)param3 & 0x80 ? 0: 1;
    char v26 = ((unsigned char)param3 & 0x80) < 0;
    char v27 = __parity__((unsigned char)param3 & 0x80);
    char v28 = 0;
    char v29 = 0;
    unsigned int v30 = 0;
    char v31 = 0;
    int v32 = 0;
    if(!v25) {
        v7 = 0;
        v6 = 16;
    }
    else {
        v7 = 1;
        v6 = 0;
    }
    unsigned int* ptr8 = &v30;
    int v33 = unk_lib_sub15(&v30);
    void* ptr9 = ptr3;
    char v34 = v33 ? 0: 1;
    char v35 = v33 < 0;
    char v36 = __parity__((unsigned char)v33);
    char v37 = 0;
    char v38 = 0;
    if(!v34) {
        int* ptr10 = &ptr4;
        /*NO_RETURN*/ invoke_watson(NULL, NULL, NULL, 0, 0);
    }
    unsigned int v39 = param3;
    int v40 = 0x8000;
    char v41 = v39 & 0x8000 ? 0: 1;
    char v42 = (int)(v39 & 0x8000) < 0;
    char v43 = 1;
    char v44 = 0;
    char v45 = 0;
    if(v41) {
        char v46 = v39 & 0x74000 ? 0: 1;
        char v47 = (int)(v39 & 0x74000) < 0;
        char v48 = 1;
        char v49 = 0;
        char v50 = 0;
        if(v46) {
            char v51 = v30 == 0x8000;
            char v52 = (int)v30 < 0x8000;
            char v53 = __parity__((unsigned char)v30);
            char v54 = v30 < 0x8000;
            char v55 = (((v30 - 0x8000) ^ v30) & (v30 ^ 0x8000)) < 0;
            char v56 = (((v30 - 0x8000) ^ (v30 ^ 0x8000)) >>> 4) & 0x1;
            if(!v51) {
                goto loc_40B6DC;
            }
        }
        else {
        loc_40B6DC:
            v6 |= 128;
            char v57 = v6 ? 0: 1;
            char v58 = v6 < 0;
            char v59 = __parity__(v6);
            char v60 = 0;
            char v61 = 0;
        }
    }
    unsigned int v62 = v39;
    int v63 = 0xc0000000;
    unsigned int v64 = v62 & 0x3;
    unsigned int v65 = v62 & 0x3;
    unsigned int v66 = v64;
    char v67 = v66 ? 0: 1;
    char v68 = v66 >= 0x80000000;
    char v69 = __parity__((unsigned char)v66);
    char v70 = ((v66 ^ v65) >>> 4) & 0x1;
    char v71 = v65 < 0;
    char v72 = (int)((v66 ^ v65) & v65) < 0;
    if(!v67) {
        unsigned int v73 = v66;
        int v74 = (int)(v66 - 1);
        char v75 = v74 ? 0: 1;
        char v76 = v74 < 0;
        char v77 = __parity__((unsigned char)v74);
        char v78 = ((~v74 ^ ~v73) >>> 4) & 0x1;
        char v79 = ((v74 ^ v73) & v73) < 0;
        if(!v75) {
            int v80 = v74;
            int v81 = v74 - 1;
            char v82 = v81 ? 0: 1;
            char v83 = v81 < 0;
            char v84 = __parity__((unsigned char)v81);
            char v85 = ((v81 ^ v80) & v80) < 0;
            if(!v82) {
                unsigned long* ptr11 = __doserrno();
                ptr11[0] = 0;
                *param1 = -1;
                int* ptr12 = errno();
                ptr12[0] = 22;
                invalid_parameter_noinfo();
                return 22;
            }
            v5 = 0xc0000000;
        }
        else {
            char v86 = (unsigned char)v39 & 0x8 ? 0: 1;
            char v87 = ((unsigned char)v39 & 0x8) < 0;
            char v88 = __parity__((unsigned char)v39 & 0x8);
            char v89 = 0;
            char v90 = 0;
            if(!v86) {
                char v91 = v39 & 0x70000 ? 0: 1;
                char v92 = (int)(v39 & 0x70000) < 0;
                char v93 = 1;
                char v94 = 0;
                char v95 = 0;
                if(!v91) {
                    v5 = 0xc0000000;
                    dwDesiredAccess = 0xc0000000;
                    goto loc_40B73E;
                }
            }
            v5 = 0x40000000;
        }
        goto loc_40B73B;
    }
    else {
        v5 = 0x80000000;
    loc_40B73B:
        dwDesiredAccess = v5;
    loc_40B73E:
        unsigned int v96 = param4;
        ptr3 = ptr5;
        unsigned int v97 = 16;
        DWORD v98 = 2;
        DWORD v99 = 2;
        unsigned int v100 = v96;
        unsigned int v101 = v96 - 16;
        char v102 = v101 ? 0: 1;
        char v103 = v101 >= 0x80000000;
        char v104 = __parity__((unsigned char)v101);
        char v105 = (((v100 ^ 0x10) ^ v101) >>> 4) & 0x1;
        char v106 = v100 < 16;
        char v107 = (int)((v101 ^ v100) & (v100 ^ 0x10)) < 0;
        if(!v102) {
            unsigned int v108 = v101;
            unsigned int v109 = v101 - 16;
            char v110 = v109 ? 0: 1;
            char v111 = v109 >= 0x80000000;
            char v112 = __parity__((unsigned char)v109);
            char v113 = (((v108 ^ 0x10) ^ v109) >>> 4) & 0x1;
            char v114 = v108 < 16;
            char v115 = (int)((v109 ^ v108) & (v108 ^ 0x10)) < 0;
            if(!v110) {
                unsigned int v116 = v109;
                unsigned int v117 = v109 - 16;
                char v118 = v117 ? 0: 1;
                char v119 = v117 >= 0x80000000;
                char v120 = __parity__((unsigned char)v117);
                char v121 = (((v116 ^ 0x10) ^ v117) >>> 4) & 0x1;
                char v122 = v116 < 16;
                char v123 = (int)((v117 ^ v116) & (v116 ^ 0x10)) < 0;
                if(!v118) {
                    unsigned int v124 = v117;
                    unsigned int v125 = v117 - 16;
                    char v126 = v125 ? 0: 1;
                    char v127 = v125 >= 0x80000000;
                    char v128 = __parity__((unsigned char)v125);
                    char v129 = (((v124 ^ 0x10) ^ v125) >>> 4) & 0x1;
                    char v130 = v124 < 16;
                    char v131 = (int)((v125 ^ v124) & (v124 ^ 0x10)) < 0;
                    if(!v126) {
                        unsigned int v132 = v125;
                        DWORD v133 = (DWORD)(v125 - 64);
                        char v134 = v133 ? 0: 1;
                        char v135 = v133 >= 0x80000000;
                        char v136 = __parity__((unsigned char)v133);
                        char v137 = v132 < 64;
                        char v138 = (int)((unsigned int)(v133 ^ v132) & (v132 ^ 0x40)) < 0;
                        if(!v134) {
                            goto loc_40B7D5;
                        }
                        else {
                            char v139 = v5 == 0x80000000;
                            char v140 = (int)v5 < 0x80000000;
                            char v141 = __parity__((unsigned char)v5);
                            char v142 = v5 < 0x80000000;
                            char v143 = (((v5 - 0x80000000) ^ v5) & (v5 ^ 0x80000000)) < 0;
                            char v144 = (((v5 - 0x80000000) ^ (v5 ^ 0x80000000)) >>> 4) & 0x1;
                            v133 = (unsigned int)(v139 ? 1: 0) | ((unsigned int)((v133 >>> 8) & 0xffffff) << 8);
                            dwShareMode = v133;
                        }
                    }
                    else {
                        dwShareMode = 3;
                    }
                }
                else {
                    dwShareMode = 2;
                }
            }
            else {
                dwShareMode = 1;
            }
            goto loc_40B788;
        }
        else {
            dwShareMode = 0;
        loc_40B788:
            unsigned int v145 = v39;
            int v146 = 0x400;
            unsigned int v147 = v145 & 0x700;
            char v148 = v147 == 0x400;
            char v149 = (int)v147 < 0x400;
            char v150 = __parity__((unsigned char)v147);
            char v151 = v147 < 0x400;
            char v152 = (((v147 - 0x400) ^ v147) & (v147 ^ 0x400)) < 0;
            char v153 = (((v147 - 0x400) ^ (v147 ^ 0x400)) >>> 4) & 0x1;
            if((v148 || v149 != v152)) {
                if(!v148) {
                    char v154 = v147 ? 0: 1;
                    char v155 = v147 >= 0x80000000;
                    char v156 = __parity__((unsigned char)v147);
                    char v157 = 0;
                    char v158 = 0;
                    if(!v154) {
                        char v159 = v147 == 0x100;
                        char v160 = (int)v147 < 0x100;
                        char v161 = __parity__((unsigned char)v147);
                        char v162 = v147 < 0x100;
                        char v163 = (((v147 - 0x100) ^ v147) & (v147 ^ 0x100)) < 0;
                        char v164 = (((v147 - 0x100) ^ (v147 ^ 0x100)) >>> 4) & 0x1;
                        if(!v159) {
                            char v165 = v147 == 0x200;
                            char v166 = (int)v147 < 0x200;
                            char v167 = __parity__((unsigned char)v147);
                            char v168 = v147 < 0x200;
                            char v169 = (((v147 - 0x200) ^ v147) & (v147 ^ 0x200)) < 0;
                            char v170 = (((v147 - 0x200) ^ (v147 ^ 0x200)) >>> 4) & 0x1;
                            if(v165) {
                                goto loc_40B7F6;
                            }
                            else {
                                char v171 = v147 == 0x300;
                                char v172 = (int)v147 < 0x300;
                                char v173 = __parity__((unsigned char)v147);
                                char v174 = v147 < 0x300;
                                char v175 = (((v147 - 0x300) ^ v147) & (v147 ^ 0x300)) < 0;
                                if(!v171) {
                                    goto loc_40B7D5;
                                }
                                else {
                                    dwCreationDisposition1 = 2;
                                    goto loc_40B7FD;
                                }
                            }
                        }
                        else {
                            ptr0 = (void*)0x4;
                            goto loc_40B7BD;
                        }
                    }
                }
                ptr0 = (void*)0x3;
                goto loc_40B7BD;
            }
            else {
                v4 = v147 == 0x500;
                char v176 = (int)v147 < 0x500;
                char v177 = __parity__((unsigned char)v147);
                char v178 = v147 < 0x500;
                char v179 = (((v147 - 0x500) ^ v147) & (v147 ^ 0x500)) < 0;
                char v180 = (((v147 - 0x500) ^ (v147 ^ 0x500)) >>> 4) & 0x1;
            }
            if(!v4) {
                char v181 = v147 == 0x600;
                char v182 = (int)v147 < 0x600;
                char v183 = __parity__((unsigned char)v147);
                char v184 = v147 < 0x600;
                char v185 = (((v147 - 0x600) ^ v147) & (v147 ^ 0x600)) < 0;
                char v186 = (((v147 - 0x600) ^ (v147 ^ 0x600)) >>> 4) & 0x1;
                if(!v181) {
                    char v187 = v147 == 0x700;
                    char v188 = (int)v147 < 0x700;
                    char v189 = __parity__((unsigned char)v147);
                    char v190 = v147 < 0x700;
                    char v191 = (((v147 - 0x700) ^ v147) & (v147 ^ 0x700)) < 0;
                    if(v187) {
                        goto loc_40B7FA;
                    }
                    else {
                    loc_40B7D5:
                        unsigned long* ptr13 = __doserrno();
                        ptr13[0] = 0;
                        *param1 = -1;
                        int* ptr14 = errno();
                        result = 22;
                        ptr14[0] = 22;
                        invalid_parameter_noinfo();
                        return result;
                    }
                }
                else {
                loc_40B7F6:
                    ptr0 = (void*)0x5;
                loc_40B7BD:
                    dwCreationDisposition1 = (DWORD)ptr0;
                }
            }
            else {
            loc_40B7FA:
                int v192 = 0;
                char v193 = 1;
                char v194 = 0;
                char v195 = 1;
                char v196 = 0;
                char v197 = 0;
                int v198 = 0;
                dwCreationDisposition1 = 1;
                char v199 = 0;
                char v200 = 0;
                char v201 = 0;
                char v202 = 0;
                char v203 = 0;
            }
        loc_40B7FD:
            int v204 = 128;
            int v205 = 0;
            int v206 = 128;
            int v207 = 0;
            char v208 = v39 & 0x100 ? 0: 1;
            char v209 = (int)(v39 & 0x100) < 0;
            char v210 = 1;
            char v211 = 0;
            char v212 = 0;
            if(!v208) {
                unsigned int v213 = gvar_4192F4;
                unsigned int v214 = ~v213;
                int v215 = v214 & param5;
                char v216 = (unsigned char)v215 ? 0: 1;
                char v217 = (unsigned char)v215 < 0;
                char v218 = __parity__((unsigned char)v215);
                char v219 = 0;
                char v220 = 0;
                v205 = 0;
                if(!v217) {
                    int v221 = 0;
                    char v222 = 1;
                    char v223 = 0;
                    char v224 = 1;
                    char v225 = 0;
                    char v226 = 0;
                    int v227 = 0;
                    v204 = 1;
                    char v228 = 0;
                    char v229 = 0;
                    char v230 = 0;
                    char v231 = 0;
                    char v232 = 0;
                    v206 = 1;
                }
            }
            char v233 = (unsigned char)v39 & 0x40 ? 0: 1;
            char v234 = ((unsigned char)v39 & 0x40) < 0;
            char v235 = __parity__((unsigned char)v39 & 0x40);
            char v236 = 0;
            char v237 = 0;
            if(!v233) {
                DWORD v238 = v5 | 0x10000;
                char v239 = v238 ? 0: 1;
                char v240 = v238 >= 0x80000000;
                char v241 = __parity__((unsigned char)v238);
                char v242 = 0;
                char v243 = 0;
                v205 = 0x4000000;
                dwShareMode |= 4;
                char v244 = dwShareMode ? 0: 1;
                char v245 = dwShareMode >= 0x80000000;
                char v246 = __parity__((unsigned char)dwShareMode);
                char v247 = 0;
                char v248 = 0;
                v207 = 0x4000000;
                dwDesiredAccess = v238;
            }
            char v249 = v39 & 0x1000 ? 0: 1;
            char v250 = (int)(v39 & 0x1000) < 0;
            char v251 = 1;
            char v252 = 0;
            char v253 = 0;
            if(!v249) {
                int v254 = v204 | 0x100;
                char v255 = v254 ? 0: 1;
                char v256 = v254 < 0;
                char v257 = __parity__((unsigned char)v254);
                char v258 = 0;
                char v259 = 0;
                v206 = v254;
            }
            char v260 = v39 & 0x2000 ? 0: 1;
            char v261 = (int)(v39 & 0x2000) < 0;
            char v262 = 1;
            char v263 = 0;
            char v264 = 0;
            if(!v260) {
                v205 |= 0x2000000;
                char v265 = v205 ? 0: 1;
                char v266 = v205 < 0;
                char v267 = __parity__((unsigned char)v205);
                char v268 = 0;
                char v269 = 0;
                v207 = v205;
            }
            char v270 = (unsigned char)v39 & 0x20 ? 0: 1;
            char v271 = ((unsigned char)v39 & 0x20) < 0;
            char v272 = __parity__((unsigned char)v39 & 0x20);
            char v273 = 0;
            char v274 = 0;
            if(!v270) {
                v3 = v205 | 0x8000000;
                char v275 = v3 ? 0: 1;
                char v276 = v3 < 0;
                char v277 = __parity__((unsigned char)v3);
                char v278 = 0;
                char v279 = 0;
                goto loc_40B879;
            }
            else {
                char v280 = (unsigned char)v39 & 0x10 ? 0: 1;
                char v281 = ((unsigned char)v39 & 0x10) < 0;
                char v282 = __parity__((unsigned char)v39 & 0x10);
                char v283 = 0;
                char v284 = 0;
                if(!v280) {
                    v3 = v205 | 0x10000000;
                    char v285 = v3 ? 0: 1;
                    char v286 = v3 < 0;
                    char v287 = __parity__((unsigned char)v3);
                    char v288 = 0;
                    char v289 = 0;
                loc_40B879:
                    v207 = v3;
                }
            }
            int v290 = _alloc_osfhnd((int)ptr3);
            unsigned int* ptr15 = param1;
            *ptr15 = v290;
            char v291 = v290 == -1;
            char v292 = v290 < -1;
            char v293 = __parity__((unsigned char)v290 - 0xFF);
            char v294 = (unsigned int)v290 < 0xffffffff;
            char v295 = (((v290 + 1) ^ v290) & ~v290) < 0;
            if(v291) {
                unsigned long* ptr16 = __doserrno();
                ptr16[0] = 0;
                *ptr15 = -1;
                int* ptr17 = errno();
                ptr17[0] = 24;
                int* ptr18 = errno();
                result1 = ptr18[0];
            }
            else {
                ptr0 = (void*)v207;
                int* ptr19 = param0;
                int v296 = v206;
                DWORD dwCreationDisposition = dwCreationDisposition1;
                *ptr19 = 1;
                LPSECURITY_ATTRIBUTES v297 = &v9;
                int v298 = __createFile(lpFileName, dwDesiredAccess, dwShareMode, &v9, dwCreationDisposition, v296, (int)ptr0);
                int* ptr20 = &v11;
                char v299 = &ptr1 == 72;
                char v300 = (int)&ptr3 < 0;
                char v301 = __parity__((unsigned char)&ptr1 - 72);
                char v302 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v11 ^ 0x1c) ^ (int)&ptr3) >>> 4) & 0x1);
                char v303 = (unsigned int)&v11 >= 0xffffffe4;
                char v304 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v11) & (int*)~(int)(int*)((int)&v11 ^ 0x1c)) < 0;
                HANDLE hHandle = (HANDLE)v298;
                char v305 = v298 == -1;
                char v306 = v298 < -1;
                char v307 = __parity__((unsigned char)v298 - 0xFF);
                char v308 = (unsigned int)v298 < 0xffffffff;
                char v309 = (((v298 + 1) ^ v298) & ~v298) < 0;
                v16 = (((v298 + 1) ^ ~v298) >>> 4) & 0x1;
                if(v305) {
                    DWORD v310 = dwDesiredAccess;
                    int v311 = 0xc0000000;
                    DWORD v312 = v310;
                    unsigned int v313 = (unsigned int)(v312 & 0xc0000000);
                    if(v313 == 0xc0000000 && ((unsigned char)param3 & 0x1)) {
                        LPSECURITY_ATTRIBUTES v314 = &v9;
                        DWORD dwDesiredAccess1 = v310 & 0x7fffffff;
                        char v315 = dwDesiredAccess1 ? 0: 1;
                        char v316 = dwDesiredAccess1 >= 0x80000000;
                        char v317 = __parity__((unsigned char)dwDesiredAccess1);
                        char v318 = 0;
                        char v319 = 0;
                        dwDesiredAccess = dwDesiredAccess1;
                        v298 = __createFile(lpFileName, dwDesiredAccess1, dwShareMode, &v9, dwCreationDisposition1, v206, v207);
                        int* ptr21 = &v11;
                        char v320 = &ptr1 == 72;
                        char v321 = (int)&ptr3 < 0;
                        char v322 = __parity__((unsigned char)&ptr1 - 72);
                        char v323 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v11 ^ 0x1c) ^ (int)&ptr3) >>> 4) & 0x1);
                        char v324 = (unsigned int)&v11 >= 0xffffffe4;
                        char v325 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v11) & (int*)~(int)(int*)((int)&v11 ^ 0x1c)) < 0;
                        hHandle = (HANDLE)v298;
                        char v326 = v298 == -1;
                        char v327 = v298 < -1;
                        char v328 = __parity__((unsigned char)v298 - 0xFF);
                        char v329 = (unsigned int)v298 < 0xffffffff;
                        char v330 = (((v298 + 1) ^ v298) & ~v298) < 0;
                        v16 = (((v298 + 1) ^ ~v298) >>> 4) & 0x1;
                        if(!v326) {
                            goto loc_40B94F;
                        }
                    }
                    int v331 = *ptr15;
                    int v332 = (v331 & 0x1f) * 64;
                    unsigned int v333 = *(unsigned int*)((v331 >> 5) * 4 + (int)&gvar_4191D0);
                    *(char*)(v333 + v332 + 4) = *(char*)(v333 + v332 + 4) & 0xfe;
                    DWORD v334 = GetLastError();
                    _dosmaperr((unsigned int)v334);
                    int* ptr22 = errno();
                    result = ptr22[0];
                    return result;
                }
            loc_40B94F:
                DWORD v335 = GetFileType((HANDLE)v298);
                char v336 = v335 ? 0: 1;
                char v337 = v335 >= 0x80000000;
                char v338 = __parity__((unsigned char)v335);
                char v339 = 0;
                char v340 = 0;
                if(!v336) {
                    char v341 = v335 == 2;
                    char v342 = (int)v335 < 2;
                    char v343 = __parity__((unsigned char)v335 - 2);
                    char v344 = v335 < 2;
                    char v345 = (((v335 - 2) ^ v335) & (v335 ^ 0x2)) < 0;
                    char v346 = (((v335 - 2) ^ (v335 ^ 0x2)) >>> 4) & 0x1;
                    if(v341) {
                        v6 |= 64;
                        char v347 = v6 ? 0: 1;
                        char v348 = v6 < 0;
                        char v349 = __parity__(v6);
                        char v350 = 0;
                        char v351 = 0;
                    }
                    else {
                        char v352 = v335 == 3;
                        char v353 = (int)v335 < 3;
                        char v354 = __parity__((unsigned char)v335 - 3);
                        char v355 = v335 < 3;
                        char v356 = (((v335 - 3) ^ v335) & (v335 ^ 0x3)) < 0;
                        char v357 = (((v335 - 3) ^ (v335 ^ 0x3)) >>> 4) & 0x1;
                        if(v352) {
                            v6 |= 8;
                            char v358 = v6 ? 0: 1;
                            char v359 = v6 < 0;
                            char v360 = __parity__(v6);
                            char v361 = 0;
                            char v362 = 0;
                        }
                    }
                    ptr0 = hHandle;
                    _set_osfhnd(*ptr15, hHandle);
                    int v363 = v296;
                    void* ptr23 = ptr0;
                    int v364 = *ptr15;
                    char v365 = v6 | 0x1;
                    char v366 = v6 | 0x1 ? 0: 1;
                    char v367 = v365 < 0;
                    char v368 = __parity__(v365);
                    char v369 = 0;
                    char v370 = 0;
                    int v371 = v364;
                    v6 = v365;
                    int v372 = v371;
                    int v373 = v371 >> 5;
                    char v374 = (v372 >>> 4) & 0x1;
                    char v375 = 0;
                    char v376 = v373 ? 0: 1;
                    char v377 = v373 < 0;
                    char v378 = __parity__((unsigned char)v373);
                    int v379 = v364 & 0x1f;
                    char v380 = v379 ? 0: 1;
                    char v381 = v379 < 0;
                    char v382 = __parity__((unsigned char)v379);
                    char v383 = 0;
                    char v384 = 0;
                    int v385 = v379;
                    int v386 = v379 * 64;
                    char v387 = (v385 >>> 26) & 0x1;
                    char v388 = 0;
                    char v389 = v386 ? 0: 1;
                    char v390 = v386 < 0;
                    char v391 = __parity__((unsigned char)v386);
                    unsigned int v392 = *(unsigned int*)(v373 * 4 + (int)&gvar_4191D0);
                    *(char*)(v392 + v386 + 4) = v365;
                    int v393 = *ptr15;
                    int v394 = *ptr15;
                    int v395 = *ptr15;
                    int v396 = v394 >> 5;
                    char v397 = (v395 >>> 4) & 0x1;
                    char v398 = 0;
                    char v399 = v396 ? 0: 1;
                    char v400 = v396 < 0;
                    char v401 = __parity__((unsigned char)v396);
                    int v402 = v393 & 0x1f;
                    char v403 = v402 ? 0: 1;
                    char v404 = v402 < 0;
                    char v405 = __parity__((unsigned char)v402);
                    char v406 = 0;
                    char v407 = 0;
                    int v408 = v402;
                    int v409 = v402 * 64;
                    char v410 = (v408 >>> 26) & 0x1;
                    char v411 = 0;
                    char v412 = v409 ? 0: 1;
                    char v413 = v409 < 0;
                    char v414 = __parity__((unsigned char)v409);
                    unsigned int v415 = *(unsigned int*)(v396 * 4 + (int)&gvar_4191D0);
                    *(char*)(v415 + v409 + 36) = *(char*)(v415 + v409 + 36) & 0x80;
                    char v416 = *(char*)(v415 + v409 + 36) ? 0: 1;
                    char v417 = *(char*)(v415 + v409 + 36) < 0;
                    char v418 = __parity__(*(char*)(v415 + v409 + 36));
                    char v419 = 0;
                    char v420 = 0;
                    unsigned int v421 = param3;
                    v415 = (unsigned int)(v365 & 0x48) | ((unsigned int)((v415 >>> 8) & 0xffffff) << 8);
                    char v422 = v365 & 0x48 ? 0: 1;
                    char v423 = (v415 >>> 7) & 0x1;
                    char v424 = __parity__((unsigned char)v415);
                    char v425 = 0;
                    char v426 = 0;
                    unsigned char v427 = (unsigned char)v415;
                    if(v422) {
                        if(v365 >= 0) {
                        loc_40BCBF:
                            int v428 = *ptr15;
                            int v429 = (v428 & 0x1f) * 64;
                            unsigned int v430 = *(unsigned int*)((v428 >> 5) * 4 + (int)&gvar_4191D0);
                            *(char*)(v430 + v429 + 36) = ((*(char*)(v430 + v429 + 36) ^ v31) & 0x7f) ^ *(char*)(v430 + v429 + 36);
                            int v431 = *ptr15;
                            int v432 = (v431 & 0x1f) * 64;
                            unsigned int v433 = *(unsigned int*)((v431 >> 5) * 4 + (int)&gvar_4191D0);
                            *(char*)(v433 + v432 + 36) = ((unsigned char)(param3 >>> 16) * 128) | (*(char*)(v433 + v432 + 36) & 0x7f);
                            unsigned int v434 = param3;
                            if(v427 == 0 && ((unsigned char)v434 & 0x8)) {
                                int v435 = *ptr15;
                                int v436 = (v435 & 0x1f) * 64;
                                unsigned int v437 = *(unsigned int*)((v435 >> 5) * 4 + (int)&gvar_4191D0);
                                *(char*)(v437 + v436 + 4) = *(char*)(v437 + v436 + 4) | 0x20;
                                v434 = param3;
                            }
                            DWORD v438 = dwDesiredAccess;
                            if((unsigned int)(v438 & 0xc0000000) != 0xc0000000 || !((unsigned char)v434 & 0x1)) {
                                return result;
                            }
                            CloseHandle(hHandle);
                            int v439 = __createFile(lpFileName, v438 & 0x7fffffff, dwShareMode, &v9, 3, v206, v207);
                            if(v439 != -1) {
                                int v440 = *ptr15;
                                *(int*)((v440 & 0x1f) * 64 + *(unsigned int*)((v440 >> 5) * 4 + (int)&gvar_4191D0)) = v439;
                                return result;
                            }
                            DWORD v441 = GetLastError();
                            _dosmaperr((unsigned int)v441);
                            int v442 = *ptr15;
                            int v443 = (v442 & 0x1f) * 64;
                            unsigned int v444 = *(unsigned int*)((v442 >> 5) * 4 + (int)&gvar_4191D0);
                            *(char*)(v444 + v443 + 4) = *(char*)(v444 + v443 + 4) & 0xfe;
                            _free_osfhnd(*ptr15);
                            int* ptr22 = errno();
                            result = ptr22[0];
                            return result;
                        }
                        char v445 = (unsigned char)v421 & 0x2 ? 0: 1;
                        char v446 = ((unsigned char)v421 & 0x2) < 0;
                        char v447 = __parity__((unsigned char)v421 & 0x2);
                        char v448 = 0;
                        char v449 = 0;
                        if(!v445) {
                            v296 = -1;
                            dwCreationDisposition = 0xffffffff;
                            void* ptr24 = _lseeki64_nolock(*ptr15, -1, -1, 2);
                            void* ptr25 = ptr24;
                            int v450 = (int)ptr24;
                            int* ptr26 = (int*)((int)ptr25 & v12);
                            char v451 = ptr26 ? 0: 1;
                            char v452 = (int)ptr26 < 0;
                            char v453 = __parity__((unsigned char)ptr26);
                            char v454 = 0;
                            char v455 = 0;
                            v2 = v12;
                            char v456 = ptr26 == -1;
                            char v457 = (int)ptr26 < -1;
                            char v458 = __parity__((unsigned char)ptr26 - 0xFF);
                            char v459 = (unsigned int)ptr26 < 0xffffffff;
                            char v460 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr26 + 1) ^ (int)ptr26) & (int*)~(int)ptr26) < 0;
                            char v461 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr26 + 1) ^ (int*)~(int)ptr26) >>> 4) & 0x1);
                            if(v456) {
                                unsigned long* ptr27 = __doserrno();
                                v34 = ptr27[0] == 131;
                                v36 = __parity__((unsigned char)ptr27[0] - 131);
                                v38 = ptr27[0] < 131;
                                v16 = (((ptr27[0] - 131) ^ (ptr27[0] ^ 0x83)) >>> 4) & 0x1;
                                if(v34) {
                                    goto loc_40BA95;
                                }
                                else {
                                    _close_nolock(*ptr15);
                                    int* ptr22 = errno();
                                    result = ptr22[0];
                                    return result;
                                }
                            }
                            else {
                                int v462 = &v8;
                                *(int*)&v8 = 0;
                                v296 = &v8;
                                int v463 = _read_nolock(*ptr15, &v8, 1);
                                char v464 = v463 ? 0: 1;
                                char v465 = v463 < 0;
                                char v466 = __parity__((unsigned char)v463);
                                char v467 = 0;
                                char v468 = 0;
                                if(v464) {
                                    char v469 = v8 == 26;
                                    char v470 = (short)v8 < 26;
                                    char v471 = __parity__((unsigned char)v8 - 26);
                                    char v472 = v8 < 26;
                                    char v473 = (((v8 - 26) ^ v8) & (v8 ^ 0x1a)) < 0;
                                    char v474 = (((v8 - 26) ^ (v8 ^ 0x1a)) >>> 4) & 0x1;
                                    if(v469) {
                                        ptr0 = (void*)v2;
                                        v296 = v450;
                                        int v475 = _chsize_nolock(*ptr15, v450, v2);
                                        if(v475 == -1) {
                                            _close_nolock(*ptr15);
                                            int* ptr22 = errno();
                                            result = ptr22[0];
                                            return result;
                                        }
                                    }
                                }
                                v296 = 0;
                                dwCreationDisposition = 0;
                                void* ptr28 = _lseeki64_nolock(*ptr15, 0, 0, 0);
                                int* ptr29 = (int*)((int)ptr28 & v12);
                                v34 = ptr29 == -1;
                                v36 = __parity__((unsigned char)ptr29 - 0xFF);
                                v38 = (unsigned int)ptr29 < 0xffffffff;
                                v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr29 + 1) ^ (int*)~(int)ptr29) >>> 4) & 0x1);
                            }
                            if(v34) {
                                _close_nolock(*ptr15);
                                int* ptr22 = errno();
                                result = ptr22[0];
                                return result;
                            }
                        loc_40BA95:
                            v365 = v6;
                            v421 = param3;
                        }
                    }
                    v35 = v365 < 0;
                    if(v35) {
                        char v476 = v421 & 0x74000 ? 0: 1;
                        char v477 = (int)(v421 & 0x74000) < 0;
                        char v478 = 1;
                        char v479 = 0;
                        char v480 = 0;
                        if(v476) {
                            unsigned int v481 = v30;
                            int v482 = (int)(v481 & 0x74000);
                            char v483 = v482 ? 0: 1;
                            char v484 = v482 < 0;
                            char v485 = __parity__((unsigned char)v482);
                            char v486 = 0;
                            char v487 = 0;
                            if(v483) {
                                v421 |= 0x4000;
                                char v488 = v421 ? 0: 1;
                                char v489 = v421 >= 0x80000000;
                                char v490 = __parity__((unsigned char)v421);
                                char v491 = 0;
                                char v492 = 0;
                            }
                            else {
                                v421 = (unsigned int)(v482 | v421);
                                char v493 = v421 ? 0: 1;
                                char v494 = v421 >= 0x80000000;
                                char v495 = __parity__((unsigned char)v421);
                                char v496 = 0;
                                char v497 = 0;
                            }
                            param3 = v421;
                        }
                        unsigned int v498 = v421;
                        unsigned int v499 = v498 & 0x74000;
                        char v500 = v499 == 0x4000;
                        char v501 = (int)v499 < 0x4000;
                        char v502 = __parity__((unsigned char)v499);
                        char v503 = v499 < 0x4000;
                        char v504 = (((v499 - 0x4000) ^ v499) & (v499 ^ 0x4000)) < 0;
                        char v505 = (((v499 - 0x4000) ^ (v499 ^ 0x4000)) >>> 4) & 0x1;
                        if(v500) {
                            v31 = 0;
                        }
                        else if(v499 == 0x20000 || v499 == 0x24000) {
                            goto loc_40BB0E;
                        }
                        else if(v499 == 0x40000 || v499 == 0x44000) {
                            v31 = 1;
                        }
                        else if((v499 == 0x10000 || v499 == 0x14000) && (v421 & 0x301) == 769) {
                        loc_40BB0E:
                            v31 = 2;
                        }
                        if((v421 & 0x70000)) {
                            v2 = 0;
                            if(!(v365 & 0x40)) {
                                unsigned int v506 = (unsigned int)(dwDesiredAccess & 0xc0000000);
                                if(v506 != 0x40000000) {
                                    if(v506 != 0x80000000) {
                                        if(v506 != 0xc0000000 || !dwCreationDisposition1) {
                                            goto loc_40BCBF;
                                        }
                                        else {
                                            v1 = (DWORD)(void*)0x2;
                                            if(dwCreationDisposition1 > 4) {
                                                goto loc_40BB6E;
                                            }
                                            else if(dwCreationDisposition1 <= 2) {
                                                goto loc_40BC7A;
                                            }
                                            else {
                                                ptr0 = (void*)2;
                                                v296 = 0;
                                                dwCreationDisposition = 0;
                                                void* ptr30 = _lseeki64_nolock(*ptr15, 0, 0, 2);
                                                if(!(int*)((int)ptr30 | v12)) {
                                                    goto loc_40BC75;
                                                }
                                                else {
                                                    v296 = 0;
                                                    dwCreationDisposition = 0;
                                                    void* ptr31 = _lseeki64_nolock(*ptr15, 0, 0, 0);
                                                    if((int*)((int)ptr31 & v12) == -1) {
                                                        _close_nolock(*ptr15);
                                                        int* ptr22 = errno();
                                                        result = ptr22[0];
                                                        return result;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    v296 = &v2;
                                    unsigned int v507 = (unsigned int)_read_nolock(*ptr15, &v2, 3);
                                    if(v507 == -1) {
                                        _close_nolock(*ptr15);
                                        int* ptr22 = errno();
                                        result = ptr22[0];
                                        return result;
                                    }
                                    int v508 = v2;
                                    if(v507 != 2) {
                                        if(v507 != 3) {
                                            goto loc_40BC5B;
                                        }
                                        else if(v508 == 12565487) {
                                            v31 = 1;
                                            goto loc_40BCBF;
                                        }
                                    }
                                    unsigned int v509 = (unsigned int)(unsigned short)v508;
                                    if(v509 == 0xfffe) {
                                        _close_nolock(*ptr15);
                                        int* ptr32 = errno();
                                        result = (int)(void*)0x16;
                                        ptr32[0] = 22;
                                        return result;
                                    }
                                    else if(v509 != 0xfeff) {
                                        goto loc_40BC5B;
                                    }
                                    else {
                                        v296 = 0;
                                        dwCreationDisposition = (DWORD)2;
                                        void* ptr33 = _lseeki64_nolock(*ptr15, 2, 0, 0);
                                        if((int*)((int)ptr33 & v12) == -1) {
                                            _close_nolock(*ptr15);
                                            int* ptr22 = errno();
                                            result = ptr22[0];
                                            return result;
                                        }
                                        v31 = 2;
                                        goto loc_40BCBF;
                                    }
                                }
                                if(dwCreationDisposition1) {
                                    v1 = (DWORD)(void*)0x2;
                                    if(dwCreationDisposition1 <= 4) {
                                        ptr0 = (void*)2;
                                        v296 = 0;
                                        dwCreationDisposition = 0;
                                        void* ptr34 = _lseeki64_nolock(*ptr15, 0, 0, 2);
                                        if((int*)((int)ptr34 | v12)) {
                                        loc_40BC5B:
                                            v296 = 0;
                                            dwCreationDisposition = 0;
                                            void* ptr35 = _lseeki64_nolock(*ptr15, 0, 0, 0);
                                            if((int*)((int)ptr35 & v12) != -1) {
                                                goto loc_40BCBF;
                                            }
                                            else {
                                                _close_nolock(*ptr15);
                                                int* ptr22 = errno();
                                                result = ptr22[0];
                                                return result;
                                            }
                                        }
                                        else {
                                        loc_40BC75:
                                            v1 = (DWORD)(void*)0x2;
                                        }
                                    }
                                    else if(dwCreationDisposition1 > 2) {
                                    loc_40BB6E:
                                        if(dwCreationDisposition1 != 5) {
                                            goto loc_40BCBF;
                                        }
                                    }
                                loc_40BC7A:
                                    unsigned int v510 = 0;
                                    int v511 = (int)v31 - 1;
                                    if(!v511) {
                                        v1 = 3;
                                        v2 = 12565487;
                                        v99 = 3;
                                    }
                                    else if(v511 - 1) {
                                        goto loc_40BCBF;
                                    }
                                    else {
                                        v2 = 0xfeff;
                                    }
                                    do {
                                        ptr0 = (void*)(int)(v1 - v510);
                                        v296 = (int)(v510 + &v2);
                                        int v512 = _write(*ptr15, (int)(v510 + &v2), (int)(v1 - v510));
                                        if(v512 != -1) {
                                            v1 = v99;
                                            v510 = (unsigned int)(v512 + v510);
                                        }
                                        else {
                                            _close_nolock(*ptr15);
                                            int* ptr22 = errno();
                                            result = ptr22[0];
                                            return result;
                                        }
                                    }
                                    while((int)v1 > (int)v510);
                                }
                            }
                        }
                    }
                    goto loc_40BCBF;
                }
                else {
                    int v513 = *ptr15;
                    int v514 = (v513 & 0x1f) * 64;
                    unsigned int v515 = *(unsigned int*)((v513 >> 5) * 4 + (int)&gvar_4191D0);
                    *(char*)(v515 + v514 + 4) = *(char*)(v515 + v514 + 4) & 0xfe;
                    v0 = (unsigned int)GetLastError();
                    _dosmaperr(v0);
                    CloseHandle(hHandle);
                }
                if(!v0) {
                    int* ptr36 = errno();
                    ptr36[0] = 13;
                }
                int* ptr22 = errno();
                result = ptr22[0];
                result1 = result;
            }
        }
    }
    return result1;
}

int atexit(FUNCPTR _) {
    _onexit_t v0 = _onexit((_onexit_t)_);
    return -1 - ((unsigned int)v0 > 0 ? 0xffffffff: 0);
}

int doexit(int param0) {
    PVOID v0;
    PVOID v1;
    int v2;
    char v3;
    int v4;
    int v5;
    int v6;
    void* ptr0;
    int v7 = SEH_prolog4(&gvar_4177A8, 28);
    void* ptr1 = (void*)&loc_406E8E;
    int v8 = lock(8);
    void* ptr2 = ptr0;
    *(int*)(v5 - 4) = 0;
    char v9 = gvar_4192D4 == 1;
    char v10 = (int)gvar_4192D4 < 1;
    char v11 = __parity__((unsigned char)gvar_4192D4 - 1);
    char v12 = gvar_4192D4 < 1;
    char v13 = (((gvar_4192D4 - 1) ^ gvar_4192D4) & (gvar_4192D4 ^ 0x1)) < 0;
    char v14 = (((gvar_4192D4 - 1) ^ (gvar_4192D4 ^ 0x1)) >>> 4) & 0x1;
    if(!v9) {
        gvar_4192FC = 1;
        v8 = (unsigned int)*(char*)(v5 + 16) | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
        gvar_4192F8 = *(unsigned char*)(v5 + 16);
        char v15 = *(int*)(v5 + 12) ? 0: 1;
        char v16 = *(int*)(v5 + 12) < 0;
        char v17 = __parity__((unsigned char)*(int*)(v5 + 12));
        char v18 = *(unsigned int*)(v5 + 12) < 0;
        char v19 = 0;
        char v20 = 0;
        if(v15) {
            int v21 = 97170;
            PVOID v22 = DecodePointer(gvar_419FEC);
            PVOID v23 = v22;
            *(PVOID*)(v5 - 44) = v22;
            char v24 = v23 ? 0: 1;
            char v25 = (int)v23 < 0;
            char v26 = __parity__((unsigned char)v23);
            char v27 = 0;
            char v28 = 0;
            if(!v24) {
                PVOID v29 = DecodePointer(gvar_419FE8);
                PVOID v30 = v29;
                *(PVOID*)(v5 - 28) = v23;
                *(PVOID*)(v5 - 32) = v30;
            alab1:
                while(1) {
                    *(PVOID*)(v5 - 36) = v30;
                loc_406EE6:
                    do {
                        PVOID v31 = v30;
                        v30 = (PVOID)((int)v30 - 4);
                        char v32 = v30 ? 0: 1;
                        char v33 = (int)v30 < 0;
                        char v34 = __parity__((unsigned char)v30);
                        char v35 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v31 ^ 0x4) ^ (int)v30) >>> 4) & 0x1);
                        char v36 = (unsigned int)v31 < 4;
                        char v37 = (int)(int*)((int)(int*)((int)v30 ^ (int)v31) & (int)(int*)((int)v31 ^ 0x4)) < 0;
                        *(PVOID*)(v5 - 36) = v30;
                        char v38 = v23 == v30;
                        char v39 = (int)v23 > (int)v30;
                        char v40 = __parity__((unsigned char)v30 - (unsigned char)v23);
                        char v41 = v23 > v30;
                        char v42 = (int)(int*)((int)(int*)((int)(int*)((int)v30 - (int)v23) ^ (int)v30) & (int)(int*)((int)v23 ^ (int)v30)) < 0;
                        char v43 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v30 - (int)v23) ^ (int)(int*)((int)v23 ^ (int)v30)) >>> 4) & 0x1);
                        if(v41) {
                            break alab1;
                        }
                        else {
                            ptr1 = (void*)&loc_406EF8;
                            PVOID v44 = EncodePointer(NULL);
                            char v45 = *(int*)v30 == v44;
                            char v46 = *(int*)v30 < (int)v44;
                            char v47 = __parity__((unsigned char)*(int*)v30 - (unsigned char)v44);
                            char v48 = *(unsigned int*)v30 < (unsigned int)v44;
                            char v49 = (int)(int*)((int)(int*)((int)(int*)(*(int*)v30 - (int)v44) ^ *(int*)v30) & (int)(int*)(*(int*)v30 ^ (int)v44)) < 0;
                            char v50 = (int*)((int)(int*)((int)(int*)((int)(int*)(*(int*)v30 - (int)v44) ^ (int)(int*)(*(int*)v30 ^ (int)v44)) >>> 4) & 0x1);
                            if(v45) {
                                goto loc_406EE6;
                            }
                            else {
                                char v51 = v23 == v30;
                                char v52 = (int)v23 > (int)v30;
                                char v53 = __parity__((unsigned char)v30 - (unsigned char)v23);
                                char v54 = v23 > v30;
                                char v55 = (int)(int*)((int)(int*)((int)(int*)((int)v30 - (int)v23) ^ (int)v30) & (int)(int*)((int)v23 ^ (int)v30)) < 0;
                                char v56 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v30 - (int)v23) ^ (int)(int*)((int)v23 ^ (int)v30)) >>> 4) & 0x1);
                                if(v54) {
                                    break alab1;
                                }
                                else {
                                    int v57 = 97170(*(int*)v30);
                                    int v58 = v57;
                                    PVOID v59 = EncodePointer(NULL);
                                    *(PVOID*)v30 = v59;
                                    int v60 = v58();
                                    v21 = 97170;
                                    PVOID v61 = DecodePointer(gvar_419FEC);
                                    *(PVOID*)(v5 - 40) = v61;
                                    v1 = DecodePointer(gvar_419FE8);
                                    v0 = *(PVOID*)(v5 - 40);
                                    char v62 = *(int*)(v5 - 28) == v0;
                                    char v63 = *(int*)(v5 - 28) < (int)v0;
                                    char v64 = __parity__((unsigned char)*(int*)(v5 - 28) - (unsigned char)v0);
                                    char v65 = *(unsigned int*)(v5 - 28) < (unsigned int)v0;
                                    char v66 = (int)(int*)((int)(int*)((int)(int*)(*(int*)(v5 - 28) - (int)v0) ^ *(int*)(v5 - 28)) & (int)(int*)(*(int*)(v5 - 28) ^ (int)v0)) < 0;
                                    char v67 = (int*)((int)(int*)((int)(int*)((int)(int*)(*(int*)(v5 - 28) - (int)v0) ^ (int)(int*)(*(int*)(v5 - 28) ^ (int)v0)) >>> 4) & 0x1);
                                    if(!v62) {
                                        break;
                                    }
                                    else {
                                        v3 = *(int*)(v5 - 32) == v1;
                                        char v68 = *(int*)(v5 - 32) < (int)v1;
                                        char v69 = __parity__((unsigned char)*(int*)(v5 - 32) - (unsigned char)v1);
                                        char v70 = *(unsigned int*)(v5 - 32) < (unsigned int)v1;
                                        char v71 = (int)(int*)((int)(int*)((int)(int*)(*(int*)(v5 - 32) - (int)v1) ^ *(int*)(v5 - 32)) & (int)(int*)(*(int*)(v5 - 32) ^ (int)v1)) < 0;
                                        char v72 = (int*)((int)(int*)((int)(int*)((int)(int*)(*(int*)(v5 - 32) - (int)v1) ^ (int)(int*)(*(int*)(v5 - 32) ^ (int)v1)) >>> 4) & 0x1);
                                    }
                                }
                            }
                        }
                    }
                    while(v3);
                    *(PVOID*)(v5 - 28) = v0;
                    v23 = v0;
                    *(PVOID*)(v5 - 44) = v0;
                    *(PVOID*)(v5 - 32) = v1;
                    v30 = v1;
                }
            }
            initterm((_PVFV*)0x411128, (_PVFV*)0x411138);
            void* ptr3 = ptr1;
            void* ptr4 = ptr0;
        }
        initterm((_PVFV*)0x41113C, (_PVFV*)0x411140);
        void* ptr5 = ptr1;
        void* ptr6 = ptr0;
    }
    *(int*)(v5 - 4) = -2;
    int v73 = sub_406F95();
    char v74 = *(int*)(v5 + 16) ? 0: 1;
    char v75 = *(int*)(v5 + 16) < 0;
    char v76 = __parity__((unsigned char)*(int*)(v5 + 16));
    char v77 = *(unsigned int*)(v5 + 16) < 0;
    char v78 = 0;
    char v79 = 0;
    if(v74) {
        gvar_4192D4 = 1;
        int v80 = unlock(8);
        void* ptr7 = (void*)&loc_406F75;
        /*NO_RETURN*/ _crtExitProcess(*(int*)(v5 + 8));
    }
    EH_epilog3(v6, v4, v2, param0);
    int v81 = v6;
    int* ptr8 = &v4;
    jump v81;
}

// Stale decompilation - Refresh this view to re-decompile this code
void exit(int _Code) {
    doexit(_Code, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int fast_error_exit(int param0) {
    int v0;
    void* ptr0;
    int* ptr1 = &v0;
    char v1 = gvar_419A48 == 2;
    char v2 = (int)gvar_419A48 < 2;
    char v3 = __parity__((unsigned char)gvar_419A48 - 2);
    char v4 = gvar_419A48 < 2;
    char v5 = (((gvar_419A48 - 2) ^ gvar_419A48) & (gvar_419A48 ^ 0x2)) < 0;
    char v6 = (((gvar_419A48 - 2) ^ (gvar_419A48 ^ 0x2)) >>> 4) & 0x1;
    if(!v1) {
        int v7 = FF_MSGBANNER();
    }
    int v8 = NMSG_WRITE(param0);
    int* ptr2 = &ptr0;
    /*NO_RETURN*/ _crtExitProcess(0xFF);
}

// Stale decompilation - Refresh this view to re-decompile this code
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
    int v1;
    int v2;
    int v3;
    void* ptr0 = (void*)&loc_404B6A;
    int v4 = SEH_prolog4(&gvar_4176E0, 20);
    int v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 1;
    char v9 = 0;
    char v10 = 0;
    *(int*)(v2 - 28) = 0;
    *(int*)(v2 - 36) = 0;
    char v11 = *(int*)(v2 - 36) ? 0: 1;
    char v12 = *(int*)(v2 - 36) < 0;
    char v13 = __parity__((unsigned char)*(int*)(v2 - 36));
    char v14 = 0;
    char v15 = 0;
    void* ptr1 = (void*)&loc_404B79;
    int v16 = lock(1);
    void* ptr2 = ptr0;
    *(int*)(v2 - 4) = 0;  // __try{ (see __finally:404C33h)
    unsigned int v17 = 0;
    char v18 = 1;
    char v19 = 0;
    char v20 = 1;
    char v21 = 0;
    char v22 = 0;
    unsigned int v23 = *(unsigned int*)(v2 + 8);
    while(1) {
        *(unsigned int*)(v2 - 32) = v17;
        char v24 = gvar_41B004 == v17;
        char v25 = (int)gvar_41B004 > (int)v17;
        char v26 = __parity__((unsigned char)v17 - (unsigned char)gvar_41B004);
        char v27 = gvar_41B004 > v17;
        char v28 = (int)(((v17 - gvar_41B004) ^ v17) & (gvar_41B004 ^ v17)) < 0;
        char v29 = (((v17 - gvar_41B004) ^ (gvar_41B004 ^ v17)) >>> 4) & 0x1;
        if(v25 == v28) {
            break;
        }
        else {
            unsigned int v30 = gvar_41B000;
            int v31 = *(int*)(v17 * 4 + v30);
            char v32 = v31 ? 0: 1;
            char v33 = v31 < 0;
            char v34 = __parity__((unsigned char)v31);
            char v35 = 0;
            char v36 = 0;
            if(!v32) {
                char v37 = *(char*)(v31 + 12) & 0x83 ? 0: 1;
                char v38 = (*(char*)(v31 + 12) & 0x83) < 0;
                char v39 = __parity__(*(char*)(v31 + 12) & 0x83);
                char v40 = 0;
                char v41 = 0;
                if(!v37) {
                    int v42 = _lock_file2(v17, v31);
                    void* ptr3 = ptr1;
                    void* ptr4 = ptr0;
                    *(int*)(v2 - 4) = 1;  // __try{ (see __finally:404BFDh)
                    unsigned int v43 = gvar_41B000;
                    FILE* _Stream = *(FILE**)(v17 * 4 + v43);
                    char v44 = *(char*)&_Stream[3]._Placeholder & 0x83 ? 0: 1;
                    char v45 = (*(char*)&_Stream[3]._Placeholder & 0x83) < 0;
                    char v46 = __parity__(*(char*)&_Stream[3]._Placeholder & 0x83);
                    char v47 = 0;
                    char v48 = 0;
                    if(!v44) {
                        char v49 = v23 == 1;
                        char v50 = (int)v23 < 1;
                        char v51 = __parity__((unsigned char)v23 - 1);
                        char v52 = v23 < 1;
                        char v53 = (((v23 - 1) ^ v23) & (v23 ^ 0x1)) < 0;
                        char v54 = (((v23 - 1) ^ (v23 ^ 0x1)) >>> 4) & 0x1;
                        if(v49) {
                            int v55 = _fflush_nolock(_Stream);
                            void* ptr5 = ptr0;
                            char v56 = v55 == -1;
                            char v57 = v55 < -1;
                            char v58 = __parity__((unsigned char)v55 - 0xFF);
                            char v59 = (unsigned int)v55 < 0xffffffff;
                            char v60 = (((v55 + 1) ^ v55) & ~v55) < 0;
                            char v61 = (((v55 + 1) ^ ~v55) >>> 4) & 0x1;
                            if(!v56) {
                                int v62 = v5;
                                ++v5;
                                char v63 = v5 ? 0: 1;
                                char v64 = v5 < 0;
                                char v65 = __parity__((unsigned char)v5);
                                char v66 = (((v62 ^ 0x1) ^ v5) >>> 4) & 0x1;
                                char v67 = ((v5 ^ v62) & ~(v62 ^ 0x1)) < 0;
                                *(int*)(v2 - 28) = v5;
                            }
                        }
                        else {
                            char v68 = v23 ? 0: 1;
                            char v69 = v23 >= 0x80000000;
                            char v70 = __parity__((unsigned char)v23);
                            char v71 = 0;
                            char v72 = 0;
                            if(v68) {
                                char v73 = *(char*)&_Stream[3]._Placeholder & 0x2 ? 0: 1;
                                char v74 = (*(char*)&_Stream[3]._Placeholder & 0x2) < 0;
                                char v75 = __parity__(*(char*)&_Stream[3]._Placeholder & 0x2);
                                char v76 = 0;
                                char v77 = 0;
                                if(!v73) {
                                    int v78 = _fflush_nolock(_Stream);
                                    void* ptr6 = ptr0;
                                    char v79 = v78 == -1;
                                    char v80 = v78 < -1;
                                    char v81 = __parity__((unsigned char)v78 - 0xFF);
                                    char v82 = (unsigned int)v78 < 0xffffffff;
                                    char v83 = (((v78 + 1) ^ v78) & ~v78) < 0;
                                    char v84 = (((v78 + 1) ^ ~v78) >>> 4) & 0x1;
                                    if(v79) {
                                        *(int*)(v2 - 36) = *(int*)(v2 - 36) | v78;
                                        char v85 = *(int*)(v2 - 36) ? 0: 1;
                                        char v86 = *(int*)(v2 - 36) < 0;
                                        char v87 = __parity__((unsigned char)*(int*)(v2 - 36));
                                        char v88 = 0;
                                        char v89 = 0;
                                    }
                                }
                            }
                        }
                    }
                    *(int*)(v2 - 4) = 0;  // } (starts at 404BACh)
                    char v90 = *(int*)(v2 - 4) ? 0: 1;  // } (starts at 404BACh)
                    char v91 = *(int*)(v2 - 4) < 0;  // } (starts at 404BACh)
                    char v92 = __parity__((unsigned char)*(int*)(v2 - 4));  // } (starts at 404BACh)
                    char v93 = 0;  // } (starts at 404BACh)
                    char v94 = 0;  // } (starts at 404BACh)
                    ptr0 = (void*)&loc_404BFA;
                    int v95 = sub_404C06();
                }
            }
            unsigned int v96 = v17;
            ++v17;
            char v97 = v17 ? 0: 1;
            char v98 = v17 >= 0x80000000;
            char v99 = __parity__((unsigned char)v17);
            char v100 = (((v96 ^ 0x1) ^ v17) >>> 4) & 0x1;
            char v101 = (int)((v17 ^ v96) & ~(v96 ^ 0x1)) < 0;
        }
    }
    *(int*)(v2 - 4) = -2;
    int v102 = sub_404C39();
    char v103 = v23 == 1;
    char v104 = (int)v23 < 1;
    char v105 = __parity__((unsigned char)v23 - 1);
    char v106 = v23 < 1;
    char v107 = (((v23 - 1) ^ v23) & (v23 ^ 0x1)) < 0;
    char v108 = (((v23 - 1) ^ (v23 ^ 0x1)) >>> 4) & 0x1;
    int v109 = v5;
    if(!v103) {
        int v110 = *(int*)(v2 - 36);
    }
    EH_epilog3(v3, v1, v0, param0);
    int v111 = v3;
    int* ptr7 = &v1;
    jump v111;
}

FILE* fopen(char* _FileName, char* _Mode) {
    return _fsopen(_FileName, _Mode, 64);
}

size_t fread(void* _Buffer, size_t _ElementSize, size_t _ElementCount, FILE* _Stream) {
    return fread_s(_Buffer, 0xffffffff, _ElementSize, _ElementCount, _Stream);
}

// Stale decompilation - Refresh this view to re-decompile this code
size_t fread_s(void* _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE* _Stream) {
    size_t result;
    char v0;
    int v1;
    int v2;
    int v3 = &gvar_417660;
    int v4 = v2;
    size_t v5 = 0;
    if((_ElementSize == 0 || _ElementCount == 0)) {
    loc_402913:
        result = 0;
    }
    else if(!_Stream) {
        if(_BufferSize != -1) {
            *(int*)&v0 = 0;
            memset2((int)_Buffer, 0, (int)_BufferSize);
        }
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        goto loc_402913;
    }
    else {
        *(int*)&v0 = &loc_402921;
        /*BAD_CALL!*/ _lock_file(_Stream);
        v3 = 0;  // __try{ (see __finally:40294Fh)
        *(size_t*)&v0 = _ElementCount;
        size_t v6 = _fread_nolock_s(_Buffer, _BufferSize, _ElementSize, *(size_t*)&v0, _Stream);
        sub_402955();
        result = v6;
    }
    *(int*)__FS_BASE = v1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
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
    unsigned char v1;
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
    return unk_lib_sub11(_C, 0);
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
                FF_MSGBANNER();
                NMSG_WRITE(30);
                /*NO_RETURN*/ _crtExitProcess(0xFF);
            }
            result = HeapAlloc(hHeap, 0, _Size ? _Size: 1);
            if(result) {
                return result;
            }
            else if(gvar_419938 == 0) {
                int* ptr2 = errno();
                ptr2[0] = 12;
                int* ptr3 = errno();
                ptr3[0] = 12;
                return result;
            }
            v0 = callnewh(_Size);
        }
        while(v0);
        int* ptr3 = errno();
        ptr3[0] = 12;
        result1 = result;
    }
    else {
        callnewh(_Size);
        int* ptr4 = errno();
        ptr4[0] = 12;
        result1 = NULL;
    }
    return result1;
}

int mbtowc(wchar_t* _DstCh, char* _SrcCh, size_t _SrcSizeInBytes) {
    return _mbtowc_l(_DstCh, _SrcCh, _SrcSizeInBytes, NULL);
}

// Stale decompilation - Refresh this view to re-decompile this code
errno_t memcpy_s(void* _Destination, rsize_t _DestinationSize, void* _Source, rsize_t _SourceSize) {
    void* ptr0;
    int* ptr1;
    errno_t result;
    char v0;
    if(!_SourceSize) {
        result = 0;
    }
    else if(!_Destination) {
        int* ptr2 = _errno();
        ptr2[0] = 22;
        _invalid_parameter_noinfo();
        result = 22;
    }
    else if(_Source && _DestinationSize >= _SourceSize) {
        *(void**)&v0 = _Source;
        sub_405C40((unsigned char*)_Destination, *(unsigned char**)&v0, (int*)_SourceSize);
        result = 0;
    }
    else {
        *(int*)&v0 = 0;
        memset2((int)_Destination, 0, (int)_DestinationSize);
        if(!_Source) {
            ptr1 = _errno();
            ptr0 = (void*)0x16;
            goto loc_40737A;
        }
        else if(_DestinationSize < _SourceSize) {
            ptr1 = _errno();
            ptr0 = (void*)0x22;
        loc_40737A:
            void* ptr3 = ptr0;
            ptr1[0] = (int)ptr0;
            _invalid_parameter_noinfo();
            result = (errno_t)ptr3;
        }
        else {
            result = (errno_t)(void*)0x16;
        }
    }
    return result;
}

int mtterm() {
    unsigned int v0 = gvar_418540;
    char v1 = v0 == -1;
    char v2 = (int)v0 < -1;
    char v3 = __parity__((unsigned char)v0 - 0xFF);
    char v4 = v0 < 0xffffffff;
    char v5 = (((v0 + 1) ^ v0) & ~v0) < 0;
    char v6 = (((v0 + 1) ^ ~v0) >>> 4) & 0x1;
    jump v1 ? &sub_4078C7: &sub_4078B9;
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
    char v5 = i ? 0: 1;
    if(!v5) {
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
                *ptr0 = *(char*)v4;
                ++ptr0;
            }
            i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
            ++v4;
            (param4 >>> 24) & 0xFF = (unsigned char)i;
            i = unk_lib_sub13((int)(unsigned char)i);
            if(i) {
                *(int*)v3 = *(int*)v3 + 1;
                if(ptr0) {
                    i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                    *ptr0 = *(char*)v4;
                    ++ptr0;
                }
                ++v4;
            }
            i = (unsigned int)(unsigned char)(param4 >>> 24) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
            if(!(unsigned char)(param4 >>> 24)) {
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
        for(i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8); *(char*)v4 == 32 || *(char*)v4 == 9; i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
            ++v4;
        }
        if(!*(char*)v4) {
            break;
        }
        else {
            int v6 = param1;
            if(v6) {
                *(char**)v6 = ptr0;
                param1 = v6 + 4;
            }
            i = param3;
            *(int*)i = *(int*)i + 1;
            while(1) {
                v6 = 1;
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
                            v6 = 0;
                            i = param4 != 0 ? 0: 1;
                            param4 = param4 != 0 ? 0: 1;
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
                if(!*(char*)v4 || (param4 == 0 && (*(char*)v4 == 32 || *(char*)v4 == 9))) {
                    break;
                }
                else {
                    if(v6) {
                        i = unk_lib_sub13((int)(unsigned char)i);
                        if(ptr0) {
                            if(i) {
                                i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                                *ptr0 = *(char*)v4;
                                ++ptr0;
                                ++v4;
                                *(int*)v3 = *(int*)v3 + 1;
                            }
                            i = (unsigned int)*(char*)v4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                            *ptr0 = *(char*)v4;
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
    int v7 = param1;
    if(v7) {
        *(int*)v7 = 0;
    }
    int result = param3;
    *(int*)result = *(int*)result + 1;
    return result;
}

int raise(int _Signal) {
    PVOID v0;
    PVOID Ptr;
    unsigned int v1;
    int v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    int v8;
    int v9;
    int v10;
    void* ptr0;
    void* ptr1;
    int v11;
    int v12 = SEH_prolog4(&gvar_4179A0, 36);
    *(int*)(v11 - 44) = 0;
    *(int*)(v11 - 48) = 0;
    int v13 = 0;
    char v14 = 1;
    char v15 = 0;
    char v16 = 1;
    char v17 = 0;
    char v18 = 0;
    *(int*)(v11 - 32) = 0;
    void* ptr2 = NULL;
    char v19 = 1;
    char v20 = 0;
    char v21 = 1;
    char v22 = 0;
    char v23 = 0;
    *(int*)(v11 - 40) = 0;
    unsigned int v24 = *(unsigned int*)(v11 + 8);
    char v25 = v24 == 11;
    char v26 = (int)v24 < 11;
    char v27 = __parity__((unsigned char)v24 - 11);
    char v28 = v24 < 11;
    char v29 = (((v24 - 11) ^ v24) & (v24 ^ 0xb)) < 0;
    char v30 = (((v24 - 11) ^ (v24 ^ 0xb)) >>> 4) & 0x1;
    if(!v25 && v26 == v29) {
        unsigned int v31 = v24;
        unsigned int v32 = v24;
        unsigned int v33 = v31 - 15;
        char v34 = v33 ? 0: 1;
        char v35 = v33 >= 0x80000000;
        char v36 = __parity__((unsigned char)v33);
        char v37 = (((v32 ^ 0xf) ^ v33) >>> 4) & 0x1;
        char v38 = v32 < 15;
        char v39 = (int)((v33 ^ v32) & (v32 ^ 0xf)) < 0;
        if(!v34) {
            unsigned int v40 = v33;
            int v41 = (int)(v33 - 6);
            char v42 = v41 ? 0: 1;
            char v43 = v41 < 0;
            char v44 = __parity__((unsigned char)v41);
            char v45 = (((v40 ^ 0x6) ^ v41) >>> 4) & 0x1;
            char v46 = v40 < 6;
            char v47 = ((v41 ^ v40) & (v40 ^ 0x6)) < 0;
            if(!v42) {
                int v48 = v41;
                int v49 = v41 - 1;
                char v50 = v49 ? 0: 1;
                char v51 = v49 < 0;
                char v52 = __parity__((unsigned char)v49);
                v30 = ((~v49 ^ ~v48) >>> 4) & 0x1;
                char v53 = ((v49 ^ v48) & v48) < 0;
                if(!v50) {
                loc_40A44A:
                    int* ptr3 = errno();
                    ptr3[0] = 22;
                    invalid_parameter_noinfo();
                loc_40A410:
                    int v54 = -1;
                    v7 = 0;
                    v6 = 1;
                    v5 = 1;
                    v4 = 0;
                    v3 = 0;
                    EH_epilog3(v10, v9, v8, _Signal);
                    int v55 = v10;
                    int* ptr4 = &v9;
                    jump v55;
                }
                else {
                loc_40A45C:
                    *(int*)(v11 - 28) = &gvar_419F00;
                    Ptr = gvar_419F00;
                }
            }
            else {
                *(int*)(v11 - 28) = &gvar_419EFC;
                Ptr = gvar_419EFC;
            }
        }
        else {
            *(int*)(v11 - 28) = &gvar_419F04;
            Ptr = gvar_419F04;
        }
    loc_40A484:
        int v56 = 0;
        char v57 = 1;
        char v58 = 0;
        char v59 = 1;
        char v60 = 0;
        char v61 = 0;
        int v62 = 0;
        v13 = 1;
        char v63 = 0;
        char v64 = 0;
        char v65 = 0;
        char v66 = 0;
        char v67 = 0;
        *(int*)(v11 - 32) = 1;
        v0 = DecodePointer(Ptr);
    loc_40A491:
        *(PVOID*)(v11 - 36) = v0;
        char v68 = v0 == 1;
        char v69 = (int)v0 < 1;
        char v70 = __parity__((unsigned char)v0 - 1);
        char v71 = (unsigned int)v0 < 1;
        char v72 = (int)(int*)((int)(int*)((int)(int*)((int)v0 - 1) ^ (int)v0) & (int)(int*)((int)v0 ^ 0x1)) < 0;
        v30 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v0 - 1) ^ (int)(int*)((int)v0 ^ 0x1)) >>> 4) & 0x1);
        if(!v68) {
            char v73 = v0 ? 0: 1;
            char v74 = (int)v0 < 0;
            char v75 = __parity__((unsigned char)v0);
            char v76 = 0;
            char v77 = 0;
            if(v73) {
                /*NO_RETURN*/ exit2(3);
            }
            char v78 = v13 ? 0: 1;
            char v79 = v13 < 0;
            char v80 = __parity__((unsigned char)v13);
            char v81 = 0;
            char v82 = 0;
            if(!v78) {
                int v83 = lock(0);
                void* ptr5 = ptr0;
            }
            *(int*)(v11 - 4) = 0;  // __try{ (see __finally:40A53Dh)
            char v84 = v24 == 8;
            char v85 = (int)v24 < 8;
            char v86 = __parity__((unsigned char)v24 - 8);
            char v87 = v24 < 8;
            char v88 = (((v24 - 8) ^ v24) & (v24 ^ 0x8)) < 0;
            char v89 = (((v24 - 8) ^ (v24 ^ 0x8)) >>> 4) & 0x1;
            if(!v84) {
                char v90 = v24 == 11;
                char v91 = (int)v24 < 11;
                char v92 = __parity__((unsigned char)v24 - 11);
                char v93 = v24 < 11;
                char v94 = (((v24 - 11) ^ v24) & (v24 ^ 0xb)) < 0;
                char v95 = (((v24 - 11) ^ (v24 ^ 0xb)) >>> 4) & 0x1;
                if(!v90) {
                    char v96 = v24 == 4;
                    char v97 = (int)v24 < 4;
                    char v98 = __parity__((unsigned char)v24 - 4);
                    char v99 = v24 < 4;
                    char v100 = (((v24 - 4) ^ v24) & (v24 ^ 0x4)) < 0;
                    char v101 = (((v24 - 4) ^ (v24 ^ 0x4)) >>> 4) & 0x1;
                    if(!v96) {
                        goto loc_40A4E3;
                    }
                }
                goto loc_40A4C7;
            }
            else {
            loc_40A4C7:
                int v102 = *(int*)((int)ptr2 + 96);
                *(int*)(v11 - 44) = *(int*)((int)ptr2 + 96);
                *(int*)((int)ptr2 + 96) = 0;
                char v103 = v24 == 8;
                char v104 = (int)v24 < 8;
                char v105 = __parity__((unsigned char)v24 - 8);
                char v106 = v24 < 8;
                char v107 = (((v24 - 8) ^ v24) & (v24 ^ 0x8)) < 0;
                char v108 = (((v24 - 8) ^ (v24 ^ 0x8)) >>> 4) & 0x1;
                if(!v103) {
                    PVOID v109 = EncodePointer(NULL);
                    unsigned int* ptr6 = *(unsigned int*)(v11 - 28);
                    *ptr6 = v109;
                    goto loc_40A522;
                }
                else {
                    int v110 = *(int*)((int)ptr2 + 100);
                    *(int*)(v11 - 48) = *(int*)((int)ptr2 + 100);
                    *(int*)((int)ptr2 + 100) = 140;
                loc_40A4E3:
                    char v111 = v24 == 8;
                    char v112 = (int)v24 < 8;
                    char v113 = __parity__((unsigned char)v24 - 8);
                    char v114 = v24 < 8;
                    char v115 = (((v24 - 8) ^ v24) & (v24 ^ 0x8)) < 0;
                    char v116 = (((v24 - 8) ^ (v24 ^ 0x8)) >>> 4) & 0x1;
                    if(!v111) {
                        PVOID v109 = EncodePointer(NULL);
                        unsigned int* ptr6 = *(unsigned int*)(v11 - 28);
                        *ptr6 = v109;
                        goto loc_40A522;
                    }
                    else {
                        v2 = 3;
                        v1 = 3;
                        *(int*)(v11 - 52) = 3;
                    }
                }
                while(1) {
                    int v117 = 9;
                    int v118 = 12;
                    char v119 = v1 == 12;
                    char v120 = (int)v1 < 12;
                    char v121 = __parity__((unsigned char)v1 - 12);
                    char v122 = v1 < 12;
                    char v123 = (((v1 - 12) ^ v1) & (v1 ^ 0xc)) < 0;
                    char v124 = (((v1 - 12) ^ (v1 ^ 0xc)) >>> 4) & 0x1;
                    if(v120 != v123) {
                        int v125 = 3;
                        int v126 = v1 * 12;
                        char v127 = (long long)v1 * 12L != (long long)v126;
                        char v128 = (long long)v1 * 12L != (long long)v126;
                        int v129 = *(int*)((int)ptr2 + 92);
                        *(int*)(v129 + v126 + 8) = 0;
                        char v130 = *(int*)(v129 + v126 + 8) ? 0: 1;
                        char v131 = *(int*)(v129 + v126 + 8) < 0;
                        char v132 = __parity__((unsigned char)*(int*)(v129 + v126 + 8));
                        char v133 = 0;
                        char v134 = 0;
                        unsigned int v135 = v1;
                        ++v1;
                        char v136 = v1 ? 0: 1;
                        char v137 = v1 >= 0x80000000;
                        char v138 = __parity__((unsigned char)v1);
                        char v139 = (((v135 ^ 0x1) ^ v1) >>> 4) & 0x1;
                        char v140 = (int)((v1 ^ v135) & ~(v135 ^ 0x1)) < 0;
                        *(unsigned int*)(v11 - 52) = v1;
                        v2 = 3;
                    }
                    else {
                        break;
                    }
                }
            }
        loc_40A522:  // } (starts at 40A4B4h)
            *(int*)(v11 - 4) = -2;  // } (starts at 40A4B4h)
            int v141 = sub_40A546();
            char v142 = v24 == 8;
            char v143 = (int)v24 < 8;
            char v144 = __parity__((unsigned char)v24 - 8);
            char v145 = v24 < 8;
            char v146 = (((v24 - 8) ^ v24) & (v24 ^ 0x8)) < 0;
            char v147 = (((v24 - 8) ^ (v24 ^ 0x8)) >>> 4) & 0x1;
            if(v142) {
                v0 = (PVOID)*(int*)(v11 - 36)((int)v24, *(int*)((int)ptr2 + 100));
                void* ptr7 = ptr1;
            }
            else {
                v0 = (PVOID)*(int*)(v11 - 36)((int)v24);
            }
            void* ptr8 = (void*)&loc_40A52E;
            char v148 = v24 == 8;
            char v149 = (int)v24 < 8;
            char v150 = __parity__((unsigned char)v24 - 8);
            char v151 = v24 < 8;
            char v152 = (((v24 - 8) ^ v24) & (v24 ^ 0x8)) < 0;
            char v153 = (((v24 - 8) ^ (v24 ^ 0x8)) >>> 4) & 0x1;
            if(!v148) {
                char v154 = v24 == 11;
                char v155 = (int)v24 < 11;
                char v156 = __parity__((unsigned char)v24 - 11);
                char v157 = v24 < 11;
                char v158 = (((v24 - 11) ^ v24) & (v24 ^ 0xb)) < 0;
                char v159 = (((v24 - 11) ^ (v24 ^ 0xb)) >>> 4) & 0x1;
                if(!v154) {
                    char v160 = v24 == 4;
                    char v161 = (int)v24 < 4;
                    char v162 = __parity__((unsigned char)v24 - 4);
                    char v163 = v24 < 4;
                    char v164 = (((v24 - 4) ^ v24) & (v24 ^ 0x4)) < 0;
                    v30 = (((v24 - 4) ^ (v24 ^ 0x4)) >>> 4) & 0x1;
                    if(!v160) {
                        goto loc_40A578;
                    }
                }
                goto loc_40A567;
            }
            else {
            loc_40A567:
                v0 = *(PVOID*)(v11 - 44);
                *(PVOID*)((int)ptr2 + 96) = *(PVOID*)(v11 - 44);
                char v165 = v24 == 8;
                char v166 = (int)v24 < 8;
                char v167 = __parity__((unsigned char)v24 - 8);
                char v168 = v24 < 8;
                char v169 = (((v24 - 8) ^ v24) & (v24 ^ 0x8)) < 0;
                v30 = (((v24 - 8) ^ (v24 ^ 0x8)) >>> 4) & 0x1;
                if(v165) {
                    v0 = *(PVOID*)(v11 - 48);
                    *(PVOID*)((int)ptr2 + 100) = *(PVOID*)(v11 - 48);
                }
            }
        }
    loc_40A578:
        int v170 = 0;
        v7 = 1;
        v6 = 0;
        v5 = 1;
        v4 = 0;
        v3 = 0;
    }
    else if(!v25) {
        unsigned int v171 = v24;
        unsigned int v172 = 2;
        unsigned int v173 = v171;
        unsigned int v174 = v171 - 2;
        char v175 = v174 ? 0: 1;
        char v176 = v174 >= 0x80000000;
        char v177 = __parity__((unsigned char)v174);
        char v178 = (((v173 ^ 0x2) ^ v174) >>> 4) & 0x1;
        char v179 = v173 < 2;
        char v180 = (int)((v174 ^ v173) & (v173 ^ 0x2)) < 0;
        if(!v175) {
            unsigned int v181 = v174;
            unsigned int v182 = v174 - 2;
            char v183 = v182 ? 0: 1;
            char v184 = v182 >= 0x80000000;
            char v185 = __parity__((unsigned char)v182);
            v30 = (((v181 ^ 0x2) ^ v182) >>> 4) & 0x1;
            char v186 = v181 < 2;
            char v187 = (int)((v182 ^ v181) & (v181 ^ 0x2)) < 0;
            if(!v183) {
                unsigned int v188 = v182;
                unsigned int v189 = v182 - 2;
                char v190 = v189 ? 0: 1;
                char v191 = v189 >= 0x80000000;
                char v192 = __parity__((unsigned char)v189);
                char v193 = (((v188 ^ 0x2) ^ v189) >>> 4) & 0x1;
                char v194 = v188 < 2;
                char v195 = (int)((v189 ^ v188) & (v188 ^ 0x2)) < 0;
                if(v190) {
                    goto loc_40A45C;
                }
                else {
                    unsigned int v196 = v189;
                    unsigned int v197 = v189 - 2;
                    char v198 = v197 ? 0: 1;
                    char v199 = v197 >= 0x80000000;
                    char v200 = __parity__((unsigned char)v197);
                    v30 = (((v196 ^ 0x2) ^ v197) >>> 4) & 0x1;
                    char v201 = v196 < 2;
                    char v202 = (int)((v197 ^ v196) & (v196 ^ 0x2)) < 0;
                    if(!v198) {
                        goto loc_40A44A;
                    }
                }
            }
            goto loc_40A402;
        }
        else {
            *(int*)(v11 - 28) = &gvar_419EF8;
            Ptr = gvar_419EF8;
            goto loc_40A484;
        }
    }
    else {
    loc_40A402:
        void* ptr9 = getptd_noexit();
        ptr2 = ptr9;
        *(void**)(v11 - 40) = ptr9;
        char v203 = ptr2 ? 0: 1;
        char v204 = (int)ptr2 < 0;
        char v205 = __parity__((unsigned char)ptr2);
        char v206 = 0;
        char v207 = 0;
        if(v203) {
            goto loc_40A410;
        }
        else {
            unsigned int v208 = siglookup(v24, *(unsigned int*)((int)ptr2 + 92));
            void* ptr10 = ptr1;
            void* ptr11 = ptr0;
            unsigned int v209 = v208;
            unsigned int* ptr12 = (unsigned int*)(v208 + 8);
            char v210 = ptr12 ? 0: 1;
            char v211 = (int)ptr12 < 0;
            char v212 = __parity__((unsigned char)ptr12);
            char v213 = (int*)((int)(int*)((int)(int*)((v209 ^ 0x8) ^ (int)ptr12) >>> 4) & 0x1);
            char v214 = v209 >= 0xfffffff8;
            char v215 = (int)(int*)((int)(int*)((int)ptr12 ^ v209) & ~(v209 ^ 0x8)) < 0;
            *(unsigned int*)(v11 - 28) = ptr12;
            v0 = *ptr12;
            goto loc_40A491;
        }
    }
    EH_epilog3(v10, v9, v8, _Signal);
    int v55 = v10;
    int* ptr4 = &v9;
    jump v55;
}

void* realloc(void* _Block, size_t _Size) {
    int* ptr0;
    void* result1;
    void* ptr1;
    if(!_Block) {
        result1 = malloc(_Size);
    }
    else {
        SIZE_T dwBytes = (SIZE_T)_Size;
        if(!dwBytes) {
            free(_Block);
        }
        else {
            void* ptr2 = ptr1;
            while(dwBytes <= 0xffffffe0) {
                if(!dwBytes) {
                    dwBytes = 1;
                }
                LPVOID result = HeapReAlloc(gvar_41993C, 0, _Block, dwBytes);
                if(!result) {
                    if(gvar_419938 != 0) {
                        int v0 = callnewh((size_t)dwBytes);
                        if(v0) {
                            continue;
                        }
                        else {
                            int* ptr3 = errno();
                            DWORD v1 = GetLastError();
                            ptr0 = (int*)get_errno_from_oserr((int)v1);
                            ptr3[0] = (int)ptr0;
                            return NULL;
                        }
                    }
                    else {
                        int* ptr4 = errno();
                        DWORD v2 = GetLastError();
                        int v3 = get_errno_from_oserr((int)v2);
                        ptr4[0] = v3;
                    }
                }
                return result;
            }
            callnewh((size_t)dwBytes);
            ptr0 = errno();
            ptr0[0] = 12;
        }
        result1 = NULL;
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int setSBCS(unsigned int param0) {
    char result;
    char v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = param0;
    int v4 = (int)(v3 + 24);
    *(int*)&v0 = 0;
    memset2(v4, 0, 0x101);
    *(int*)(v3 + 4) = 0;
    *(int*)(v3 + 8) = 0;
    *(int*)(v3 + 540) = 0;
    int counter = 0x101;
    *(int*)(v3 + 12) = 0;
    *(int*)(v3 + 16) = 0;
    *(int*)(v3 + 20) = 0;
    do {
        *(char*)v4 = *(char*)(&gvar_418750 - v3 + v4);
        ++v4;
        --counter;
    }
    while(counter);
    char* ptr0 = (char*)(v3 + 0x119);
    int counter1 = 0x100;
    do {
        result = *(char*)(&gvar_418750 - v3 + (int)ptr0);
        *ptr0 = *(char*)(&gvar_418750 - v3 + (int)ptr0);
        ++ptr0;
        --counter1;
    }
    while(counter1);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
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
    LPCPINFO v11 = &v6;
    BOOL v12 = GetCPInfo(*(UINT*)(v10 + 4), &v6);
    if(v12) {
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
            unsigned int v13 = (unsigned int)*(ptr1 + 1);
            for(i = (unsigned int)(unsigned char)i; i <= v13 && i < 0x100; ++i) {
                *(char*)(i + &v1) = 32;
            }
            ptr1 += 2;
            i = (unsigned int)*ptr1 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
        }
        v11 = NULL;
        __crtGetStringTypeA(NULL, 1, &v1, 0x100, &v2, *(int*)(v10 + 4), 0);
        int v14 = 0;
        int v15 = *(int*)(v10 + 4);
        int v16 = 0x100;
        int v17 = &v3;
        int v18 = 0x100;
        int v19 = &v1;
        int v20 = 0x100;
        __crtLCMapStringA(NULL, *(int*)(v10 + 540), 0x100, &v1, 0x100, &v3, 0x100, v15, 0);
        v11 = NULL;
        int v21 = *(int*)(v10 + 4);
        int v22 = 0x100;
        int v23 = &v4;
        int v24 = 0x100;
        int v25 = &v1;
        int v26 = 0x200;
        __crtLCMapStringA(NULL, *(int*)(v10 + 540), 0x200, &v1, 0x100, &v4, 0x100, v21, 0);
        unsigned int v27 = 0;
        do {
            int v28 = (unsigned int)*(short*)(v27 * 2 + &v2);
            if(((unsigned char)v28 & 0x1)) {
                *(char*)(v27 + v10 + 25) = *(char*)(v27 + v10 + 25) | 0x10;
                v28 = (unsigned int)*(char*)(v27 + &v3) | ((unsigned int)((v28 >>> 8) & 0xffffff) << 8);
                goto loc_4087CA;
            }
            else if(((unsigned char)v28 & 0x2)) {
                *(char*)(v27 + v10 + 25) = *(char*)(v27 + v10 + 25) | 0x20;
                v28 = (unsigned int)*(char*)(v27 + &v4) | ((unsigned int)((v28 >>> 8) & 0xffffff) << 8);
            loc_4087CA:
                *(char*)(v27 + v10 + 0x119) = (unsigned char)v28;
            }
            else {
                *(char*)(v27 + v10 + 0x119) = 0;
            }
            ++v27;
        }
        while(v27 < 0x100);
    }
    else {
        v11 = (LPCPINFO)0xFFFFFF9F;
        unsigned int v29 = (unsigned int)(v10 + 0x119);
        unsigned int v30 = 0;
        int* ptr2 = (int*)((int)(LPCPINFO)0xFFFFFF9F - v29);
        int* ptr3 = (int*)((int)(LPCPINFO)0xFFFFFF9F - v29);
        do {
            char* ptr4 = (char*)(v30 + v29);
            int* ptr5 = (int*)((int)ptr2 + (int)ptr4);
            if((unsigned int)((int*)((int)ptr2 + (int)ptr4) + 8) <= 25) {
                *(char*)(v30 + v10 + 25) = *(char*)(v30 + v10 + 25) | 0x10;
                v0 = v30 + 32;
                goto loc_408823;
            }
            else if((unsigned int)ptr5 <= 25) {
                int v31 = v30 + v10;
                *(char*)(v31 + 25) = *(char*)(v31 + 25) | 0x20;
                v0 = v30 - 32;
            loc_408823:
                *ptr4 = (unsigned char)v0;
            }
            else {
                *ptr4 = 0;
            }
            ptr2 = ptr3;
            v29 = (unsigned int)(v10 + 0x119);
            ++v30;
        }
        while(v30 < 0x100);
    }
    __security_check_cookie((uintptr_t)((int)&v5 ^ (int)ptr0));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned char* shift(char* _Str, int param1) {
    unsigned char* result;
    if(param1) {
        size_t v0 = strlen(_Str);
        result = sub_40E7A0(&_Str[param1], (unsigned char*)_Str, (int*)(v0 + 1));
    }
    return result;
}

unsigned int siglookup(unsigned int param0, unsigned int param1) {
    unsigned int v0 = param1;
    while(*(int*)(v0 + 4) != param0) {
        v0 += 12;
        if(param1 + 144 <= v0) {
            break;
        }
    }
    return param1 + 144 <= v0 || *(int*)(v0 + 4) != param0 ? 0: v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    __security_init_cookie();
    return sub_402995();
}

// Stale decompilation - Refresh this view to re-decompile this code
errno_t strcpy_s(char* _Destination, rsize_t _SizeInBytes, char* _Source) {
    errno_t result;
    void* ptr0;
    int* ptr1;
    char* ptr2 = _Destination;
    if(ptr2) {
        rsize_t v0 = _SizeInBytes;
        if(!v0) {
            goto loc_40AA9F;
        }
        else {
            char* ptr3 = _Source;
            if(!ptr3) {
                ptr2[0] = 0;
                goto loc_40AA9F;
            }
            else {
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
                    void* ptr5 = ptr0;
                    ptr1[0] = (int)ptr0;
                    _invalid_parameter_noinfo();
                    return (errno_t)ptr5;
                }
                result = 0;
            }
        }
    }
    else {
    loc_40AA9F:
        ptr1 = _errno();
        ptr0 = (void*)0x16;
        void* ptr5 = ptr0;
        ptr1[0] = (int)ptr0;
        _invalid_parameter_noinfo();
        result = (errno_t)ptr5;
    }
    return result;
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
                if(ptr1[ptr0] != ptr0[0]) {
                    return v3 ? -1: 1;
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
                            if(!((size_t)((v1 - 0x1010101) & (unsigned int)~v1) & 0x80808080)) {
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

int sub_401000(int* param0) {
    char* ptr0;
    int v0;
    if(ptr0) {
        int* ptr1 = param0;
        if(ptr1) {
            *(ptr1 + 60) = 10;
            int* ptr2 = ptr1 + 1;
            *ptr1 = ((((((unsigned int)*ptr0 * 0x100) ^ (unsigned int)*(ptr0 + 1)) * 0x100) ^ (unsigned int)*(ptr0 + 2)) * 0x100) ^ (unsigned int)*(ptr0 + 3);
            *ptr2 = ((((((unsigned int)*(ptr0 + 4) * 0x100) ^ (unsigned int)*(ptr0 + 5)) * 0x100) ^ (unsigned int)*(ptr0 + 6)) * 0x100) ^ (unsigned int)*(ptr0 + 7);
            *(ptr1 + 2) = ((((((unsigned int)*(ptr0 + 8) * 0x100) ^ (unsigned int)*(ptr0 + 9)) * 0x100) ^ (unsigned int)*(ptr0 + 10)) * 0x100) ^ (unsigned int)*(ptr0 + 11);
            int v1 = (unsigned int)*(ptr0 + 13);
            int v2 = v0;
            int v3 = ((((((unsigned int)*(ptr0 + 12) * 0x100) ^ v1) * 0x100) ^ (unsigned int)*(ptr0 + 14)) * 0x100) ^ (unsigned int)*(ptr0 + 15);
            *(ptr1 + 3) = ((((((unsigned int)*(ptr0 + 12) * 0x100) ^ v1) * 0x100) ^ (unsigned int)*(ptr0 + 14)) * 0x100) ^ (unsigned int)*(ptr0 + 15);
            int v4 = ((*(unsigned int*)((unsigned int)(unsigned char)v3 * 4 + (int)&gvar_416130) & 0xff00) ^ ((((*(unsigned int*)((unsigned int)(unsigned char)(v3 >>> 16) * 4 + (int)&gvar_416130) ^ 0x1000000) & 0xff000000) ^ (*(unsigned int*)((unsigned int)(unsigned char)(v3 >>> 8) * 4 + (int)&gvar_416130) & 0xff0000)) ^ (unsigned int)*(char*)((v3 >>> 24) * 4 + (int)&gvar_416130))) ^ *ptr1;
            int v5 = *ptr2 ^ v4;
            *(ptr1 + 4) = v4;
            int v6 = *(ptr1 + 2);
            *(ptr1 + 5) = v5;
            *(ptr1 + 6) = v5 ^ v6;
            *(ptr1 + 7) = (v5 ^ v6) ^ v3;
            int* ptr3 = (int*)&gvar_414D04;
            do {
                int v7 = *(ptr2 + 6);
                ptr2 += 4;
                int v8 = (((*(unsigned int*)((unsigned int)(unsigned char)v7 * 4 + (int)&gvar_416130) & 0xff00) ^ (((*(unsigned int*)((unsigned int)(unsigned char)(v7 >>> 16) * 4 + (int)&gvar_416130) & 0xff000000) ^ (*(unsigned int*)((unsigned int)(unsigned char)(v7 >>> 8) * 4 + (int)&gvar_416130) & 0xff0000)) ^ (unsigned int)*(char*)((v7 >>> 24) * 4 + (int)&gvar_416130))) ^ *(ptr2 - 1)) ^ *ptr3;
                ++ptr3;
                *(ptr2 + 3) = v8;
                int v9 = *ptr2 ^ v8;
                *(ptr2 + 4) = *ptr2 ^ v8;
                int v10 = *(ptr2 + 1) ^ v9;
                *(ptr2 + 5) = *(ptr2 + 1) ^ v9;
                *(unsigned int*)(ptr2 + 6) = (char*)(*(ptr2 + 2) ^ v10);
            }
            while(ptr3 != 4279592);
            return 0;
        }
    }
    return -1;
}

int sub_4011C0(int* param0) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1 = (unsigned int)*(ptr1 + 1);
    char* ptr2 = ptr0;
    int v2 = ((((((unsigned int)*ptr1 * 0x100) ^ v1) * 0x100) ^ (unsigned int)*(ptr1 + 2)) * 0x100) ^ (unsigned int)*(ptr1 + 3);
    int v3 = (unsigned int)*(ptr1 + 5);
    int v4 = v0;
    int v5 = (unsigned int)*(ptr1 + 8);
    int* ptr3 = param0;
    int v6 = *ptr3 ^ v2;
    int v7 = (v5 * 0x100) ^ (unsigned int)*(ptr1 + 9);
    int v8 = (unsigned int)*(ptr1 + 10);
    int v9 = (((((((unsigned int)*(ptr1 + 4) * 0x100) ^ v3) * 0x100) ^ (unsigned int)*(ptr1 + 6)) * 0x100) ^ (unsigned int)*(ptr1 + 7)) ^ *(ptr3 + 1);
    int v10 = ((((v7 * 0x100) ^ v8) * 0x100) ^ (unsigned int)*(ptr1 + 11)) ^ *(ptr3 + 2);
    int v11 = (((((((unsigned int)*(ptr1 + 12) * 0x100) ^ (unsigned int)*(ptr1 + 13)) * 0x100) ^ (unsigned int)*(ptr1 + 14)) * 0x100) ^ (unsigned int)*(ptr1 + 15)) ^ *(ptr3 + 3);
    int v12 = (((*(unsigned int*)((unsigned int)(unsigned char)(v10 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)((unsigned int)(unsigned char)(v9 >>> 16) * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((v6 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((unsigned int)(unsigned char)v11 * 4 + (int)&gvar_416530)) ^ *(ptr3 + 4);
    int v13 = (((*(unsigned int*)((unsigned int)(unsigned char)(v11 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)((unsigned int)(unsigned char)(v10 >>> 16) * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((v9 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((unsigned int)(unsigned char)v6 * 4 + (int)&gvar_416530)) ^ *(ptr3 + 5);
    unsigned int v14 = *(unsigned int*)((unsigned int)(unsigned char)(v9 >>> 8) * 4 + (int)&gvar_416930);
    param0 = (int*)((int)(int*)((int)(int*)((*(unsigned int*)((unsigned int)(unsigned char)(v11 >>> 16) * 4 + (int)&gvar_416D30) ^ *(unsigned int*)((unsigned int)(unsigned char)(v6 >>> 8) * 4 + (int)&gvar_416930)) ^ *(unsigned int*)((v10 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((unsigned int)(unsigned char)v9 * 4 + (int)&gvar_416530)) ^ *(ptr3 + 6));
    int v15 = (((*(unsigned int*)((unsigned int)(unsigned char)(v6 >>> 16) * 4 + (int)&gvar_416D30) ^ v14) ^ *(unsigned int*)((v11 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((unsigned int)(unsigned char)v10 * 4 + (int)&gvar_416530)) ^ *(ptr3 + 7);
    int* ptr4 = ptr3 + 8;
    int* ptr5 = ptr3 + 8;
    int v16 = (*(ptr3 + 60) >> 1) - 1;
    v31 = v15;
    int v17 = v16;
    if(v16) {
        do {
            v9 = (((*(unsigned int*)((unsigned int)(unsigned char)(v13 >>> 16) * 4 + (int)&gvar_416D30) ^ *(unsigned int*)((unsigned int)(unsigned char)(int*)((int)param0 >>> 8) * 4 + (int)&gvar_416930)) ^ *(unsigned int*)((v12 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((unsigned int)(unsigned char)v31 * 4 + (int)&gvar_416530)) ^ *ptr5;
            ptr4 = (int*)((((*(unsigned int*)((unsigned int)(unsigned char)(v31 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)((unsigned int)(unsigned char)(int*)((int)param0 >>> 16) * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((v13 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((unsigned int)(unsigned char)v12 * 4 + (int)&gvar_416530)) ^ *(ptr5 + 1));
            int v18 = (unsigned int)(unsigned char)(v12 >>> 8);
            int v19 = (unsigned int)(unsigned char)(v12 >>> 16);
            int v20 = (((*(unsigned int*)((unsigned int)(unsigned char)(v31 >>> 16) * 4 + (int)&gvar_416D30) ^ *(unsigned int*)(v18 * 4 + (int)&gvar_416930)) ^ *(unsigned int*)((int)(int*)((int)(int*)((int)param0 >>> 24) * 4) + (int)&gvar_417130)) ^ *(unsigned int*)((unsigned int)(unsigned char)v13 * 4 + (int)&gvar_416530)) ^ *(ptr5 + 2);
            int v21 = (((*(unsigned int*)((unsigned int)(unsigned char)(v13 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)(v19 * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((v31 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((unsigned int)(unsigned char)param0 * 4 + (int)&gvar_416530)) ^ *(ptr5 + 3);
            v12 = (((*(unsigned int*)((unsigned int)(unsigned char)(v20 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)((unsigned int)(unsigned char)(int*)((int)ptr4 >>> 16) * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((v9 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((unsigned int)(unsigned char)v21 * 4 + (int)&gvar_416530)) ^ *(ptr5 + 4);
            v13 = (((*(unsigned int*)((unsigned int)(unsigned char)(v21 >>> 8) * 4 + (int)&gvar_416930) ^ *(unsigned int*)((unsigned int)(unsigned char)(v20 >>> 16) * 4 + (int)&gvar_416D30)) ^ *(unsigned int*)((int)(int*)((int)(int*)((int)ptr4 >>> 24) * 4) + (int)&gvar_417130)) ^ *(unsigned int*)((unsigned int)(unsigned char)v9 * 4 + (int)&gvar_416530)) ^ *(ptr5 + 5);
            unsigned int v22 = *(unsigned int*)((unsigned int)(unsigned char)(int*)((int)ptr4 >>> 8) * 4 + (int)&gvar_416930);
            param0 = (int*)((int)(int*)((int)(int*)((*(unsigned int*)((unsigned int)(unsigned char)(v21 >>> 16) * 4 + (int)&gvar_416D30) ^ *(unsigned int*)((unsigned int)(unsigned char)(v9 >>> 8) * 4 + (int)&gvar_416930)) ^ *(unsigned int*)((v20 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((unsigned int)(unsigned char)ptr4 * 4 + (int)&gvar_416530)) ^ *(ptr5 + 6));
            int v23 = (((*(unsigned int*)((unsigned int)(unsigned char)(v9 >>> 16) * 4 + (int)&gvar_416D30) ^ v22) ^ *(unsigned int*)((v21 >>> 24) * 4 + (int)&gvar_417130)) ^ *(unsigned int*)((unsigned int)(unsigned char)v20 * 4 + (int)&gvar_416530)) ^ *(ptr5 + 7);
            ptr5 += 8;
            --v17;
            v31 = v23;
        }
        while(v17);
    }
    int v24 = v13;
    int v25 = v12;
    int v26 = (((*(unsigned int*)((v25 >>> 24) * 4 + (int)&gvar_416130) & 0xff000000) ^ ((*(unsigned int*)((unsigned int)(unsigned char)(v24 >>> 16) * 4 + (int)&gvar_416130) & 0xff0000) ^ (*(unsigned int*)((unsigned int)(unsigned char)(int*)((int)param0 >>> 8) * 4 + (int)&gvar_416130) & 0xff00))) ^ (unsigned int)*(char*)((unsigned int)(unsigned char)v31 * 4 + (int)&gvar_416130)) ^ *ptr5;
    *(ptr0 + 3) = (unsigned char)v26;
    *ptr0 = (unsigned char)(v26 >>> 24);
    *(ptr0 + 1) = (unsigned char)(v26 >>> 16);
    *(ptr0 + 2) = (unsigned char)(v26 >>> 8);
    int v27 = (((*(unsigned int*)((v24 >>> 24) * 4 + (int)&gvar_416130) & 0xff000000) ^ ((*(unsigned int*)((unsigned int)(unsigned char)(v31 >>> 8) * 4 + (int)&gvar_416130) & 0xff00) ^ (*(unsigned int*)((unsigned int)(unsigned char)(int*)((int)param0 >>> 16) * 4 + (int)&gvar_416130) & 0xff0000))) ^ (unsigned int)*(char*)((unsigned int)(unsigned char)v25 * 4 + (int)&gvar_416130)) ^ *(ptr5 + 1);
    *(ptr0 + 7) = (unsigned char)v27;
    *(ptr0 + 4) = (unsigned char)(v27 >>> 24);
    *(ptr0 + 5) = (unsigned char)(v27 >>> 16);
    *(ptr0 + 6) = (unsigned char)(v27 >>> 8);
    int v28 = (((*(unsigned int*)((int)(int*)((int)(int*)((int)param0 >>> 24) * 4) + (int)&gvar_416130) & 0xff000000) ^ ((*(unsigned int*)((unsigned int)(unsigned char)(v25 >>> 8) * 4 + (int)&gvar_416130) & 0xff00) ^ (*(unsigned int*)((unsigned int)(unsigned char)(v31 >>> 16) * 4 + (int)&gvar_416130) & 0xff0000))) ^ (unsigned int)*(char*)((unsigned int)(unsigned char)v24 * 4 + (int)&gvar_416130)) ^ *(ptr5 + 2);
    *(ptr0 + 8) = (unsigned char)(v28 >>> 24);
    *(ptr0 + 9) = (unsigned char)(v28 >>> 16);
    *(ptr0 + 10) = (unsigned char)(v28 >>> 8);
    int v29 = *(unsigned int*)((unsigned int)(unsigned char)(v24 >>> 8) * 4 + (int)&gvar_416130) & 0xff00;
    *(ptr0 + 11) = (unsigned char)v28;
    int v30 = (((*(unsigned int*)((v31 >>> 24) * 4 + (int)&gvar_416130) & 0xff000000) ^ ((*(unsigned int*)((unsigned int)(unsigned char)(v25 >>> 16) * 4 + (int)&gvar_416130) & 0xff0000) ^ v29)) ^ (unsigned int)*(char*)((unsigned int)(unsigned char)param0 * 4 + (int)&gvar_416130)) ^ *(ptr5 + 3);
    *(ptr0 + 15) = (unsigned char)v30;
    *(ptr0 + 12) = (unsigned char)(v30 >>> 24);
    *(ptr0 + 13) = (unsigned char)(v30 >>> 16);
    *(ptr0 + 14) = (unsigned char)(v30 >>> 8);
    return v30 >>> 8;
}

void* sub_401780(int* param0, int* param1, void* param2) {
    void* result;
    __SyntheticTypeUnknown v0;
    int* ptr0;
    char v1;
    char v2;
    __SyntheticTypeUnknown v3;
    int* ptr1;
    void* ptr2;
    void v4;
    char v5;
    void* ptr3;
    int v6;
    *(int*)&v1 = v6;
    int* ptr4 = param0;
    void* ptr5 = ptr2;
    void* ptr6 = ptr3;
    ptr3 = param2;
    void* ptr7 = ptr2;
    if((unsigned int)ptr4 >= 16) {
        int* ptr8 = (int*)((int)ptr5 - (int)ptr3);
        ptr0 = (int*)((int)ptr4 >>> 4);
        do {
            int* ptr9 = &v3;
            if((int*)((char*)((int)ptr3 + (int)ptr8) + 15) >= &v3 && (unsigned int)ptr5 <= (unsigned int)&v4) {
                void* ptr10 = ptr3;
                int counter = 16;
                do {
                    ptr9 = (unsigned int)*(char*)((int)ptr10 + (int)ptr8) | ((unsigned int)(int*)((int)(int*)((int)ptr9 >>> 8) & 0xffffff) << 8);
                    ptr10 = (void*)((int)ptr10 + 1);
                    ptr9 = (unsigned int)((unsigned char)ptr9 ^ *(char*)((int)ptr10 - 1)) | ((unsigned int)(int*)((int)(int*)((int)ptr9 >>> 8) & 0xffffff) << 8);
                    *(char*)((int)ptr10 + (int)&v5) = (unsigned char)ptr9;
                    --counter;
                }
                while(counter);
                ptr4 = param0;
            }
            else {
                v3 = *ptr3 ^ *ptr5;
            }
            sub_4011C0(param1);
            ptr4 -= 4;
            ptr3 = param2;
            ptr5 = (void*)((int)ptr5 + 16);
            param0 = ptr4;
            ptr8 += 4;
            v0 = *ptr6;
            result = (void*)((int)ptr6 + 16);
            ptr0 = (int*)((char*)ptr0 - 1);
            v2 = ptr0 ? 0: 1;
            ptr6 = result;
            *ptr3 = v0;
        }
        while(!v2);
        ptr7 = ptr5;
    }
    if(ptr4) {
        unsigned int v7 = 0;
        if(ptr4) {
            if((unsigned int)ptr4 >= 32) {
                ptr3 = param2;
                if((int*)((char*)((int)ptr5 + (int)ptr4) - 1) < &v3 || (unsigned int)(int*)((int)ptr4 + (int)&v5) < (unsigned int)ptr5) {
                    int* ptr11 = (int*)((int)&v3 - (int)ptr5);
                    void* ptr12 = ptr5;
                    ptr0 = (int*)((int)param2 - (int)ptr5);
                    int* ptr13 = (int*)((int)param2 - (int)ptr5);
                    int* ptr14 = (int*)((int)&ptr1 - (int)ptr5);
                    int* ptr15 = ptr11;
                    ptr1 = (int*)((int)param2 + 16);
                    int* ptr16 = ptr14;
                    do {
                        __SyntheticTypeUnknown v8 = *(void*)((int)ptr12 + (int)ptr13);
                        int* ptr17 = ptr1;
                        ptr12 = (void*)((int)ptr12 + 32);
                        __SyntheticTypeUnknown v9 = *(void*)((int)ptr12 - 16);
                        *(void*)((int*)((int)ptr12 + (int)ptr15) - 8) = *(void*)((int)ptr12 - 32) ^ v8;
                        __SyntheticTypeUnknown v10 = *(void*)((int)ptr17 + v7);
                        ptr13 = ptr0;
                        v7 += 32;
                        *(void*)((int*)((int)ptr12 + (int)ptr16) - 8) = v9 ^ v10;
                    }
                    while((unsigned int)(int*)((int)ptr4 - (int)(int*)((int)ptr4 & 0x1f)) > v7);
                    ptr5 = ptr7;
                    ptr4 = param0;
                    ptr3 = param2;
                }
            }
            if(v7 < (unsigned int)ptr4) {
                int* ptr18 = (int*)((int)ptr3 + v7);
                int* ptr19 = (int*)((int)ptr5 - (int)ptr3);
                int* ptr20 = (int*)((int)&v3 - (int)ptr3);
                int* ptr21 = (int*)((int)ptr4 - v7);
                param0 = &v3;
                do {
                    ptr20 = (unsigned int)*(char*)((int)ptr18 + (int)ptr19) | ((unsigned int)(int*)((int)(int*)((int)ptr20 >>> 8) & 0xffffff) << 8);
                    ptr18 = (int*)((char*)ptr18 + 1);
                    ptr20 = (unsigned int)((unsigned char)ptr20 ^ *(char*)((char*)ptr18 - 1)) | ((unsigned int)(int*)((int)(int*)((int)ptr20 >>> 8) & 0xffffff) << 8);
                    *(char*)((int)ptr18 + (int)&v5) = (unsigned char)ptr20;
                    ptr21 = (int*)((char*)ptr21 - 1);
                }
                while(ptr21);
            }
        }
        if((unsigned int)ptr4 < 16) {
            sub_405C40((unsigned char*)((int)ptr4 + (int)&v3), (unsigned char*)((int)ptr4 + (int)param2), (int*)(16 - (int)ptr4));
        }
        sub_4011C0(param1);
        v0 = v3;
        result = ptr6;
        *param2 = v0;
        *result = v0;
    }
    return result;
}

int sub_401960(char* param0, int* param1) {
    char v0;
    char v1;
    int v2;
    int result;
    int v3 = v2;
    int* ptr0 = param1;
    char* _Source = param0;
    param1 = (int*)(param0 + 1);
    do {
        result = (unsigned int)param0[0] | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        ++param0;
    }
    while((unsigned char)result);
    if((int*)((int)param0 - (int)param1) != 32) {
        return result;
    }
    char v4 = 0;
    unsigned int v5 = 0;
    do {
        strncpy(&v0, _Source, 2);
        result = unk_lib_sub10(&v0, &gvar_417530);
        if(result != 1) {
            return result & 0xffffff00;
        }
        result = (int)v1;
        _Source += 2;
        *(char*)((int)ptr0 + v5) = (unsigned char)result;
        ++v5;
    }
    while((int)v5 < 16);
    return (unsigned int)1 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
}

unsigned int sub_4019E0(int param0) {
    unsigned int result = 0;
    do {
        char* ptr0 = (char*)(result + param0);
        char v0 = (unsigned char)result * 2;
        ++result;
        *ptr0 = (*ptr0 ^ v0) ^ 0x55;
    }
    while((int)result < 16);
    return result;
}

int* sub_401A00(size_t _ElementSize, int param1) {
    char v0;
    char v1;
    void v2;
    int v3;
    __SyntheticTypeUnknown v4;
    char v5;
    void* _Buffer;
    if(_ElementSize != 4) {
        return (int*)0x1;
    }
    int v6 = param1;
    int v7 = sub_401960(*(char**)(v6 + 4), &v0);
    if(!(unsigned char)v7) {
        return (int*)0x2;
    }
    unsigned int v8 = 0;
    do {
        *(char*)(v8 + (int)&v0) = (((unsigned char)v8 * 2) ^ *(char*)(v8 + (int)&v0)) ^ 0x55;
        ++v8;
    }
    while((int)v8 < 16);
    int v9 = &gvar_417534;
    FILE* _Stream = fopen(*(char**)(v6 + 8), (char*)&gvar_417534);
    if(!_Stream) {
        return (int*)0x3;
    }
    v9 = &gvar_417538;
    FILE* ptr0 = fopen(*(char**)(v6 + 12), (char*)&gvar_417538);
    void* _Buffer1 = ptr0;
    if(!ptr0) {
        fclose(_Stream);
        return (int*)0x4;
    }
    v9 = v3;
    fseek(_Stream, 0, 2);
    size_t _Size = (size_t)ftell(_Stream);
    _ElementSize = _Size;
    /*BAD_CALL!*/ sub_4019E0((int)&v0);
    if((_Size & 0xf)) {
        _Size = (size_t)(_Size - (_Size & 0xf) + 16);
    }
    int v10 = fseek(_Stream, 0, 0);
    __SyntheticTypeUnknown v11 = *(void*)"Total toll verschluesselt!";
    v10 = (unsigned int)8564 | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    void* ptr1 = &v4;
    short v12 = (unsigned short)v10;
    v10 &= 0xffffff00;
    v4 = v11;
    char v13 = (unsigned char)v10;
    long long v14 = 7810776068204620904L;
    do {
        v10 = (unsigned int)*(char*)ptr1 | ((unsigned int)((v10 >>> 8) & 0xffffff) << 8);
        ptr1 = (void*)((int)ptr1 + 1);
    }
    while((unsigned char)v10);
    FILE* _Stream1 = (FILE*)_Buffer1;
    fwrite(&v4, (size_t)((int)ptr1 - (int)&v2), 1, _Stream1);
    fwrite(&_ElementSize, 4, 1, _Stream1);
    sub_4019E0((int)&v0);
    fwrite(_Buffer, 16, 1, _Stream1);
    sub_4019E0((int)&v0);
    void* ptr2 = malloc(_Size);
    _Buffer1 = ptr2;
    memset2((int)ptr2, 0, (int)_Size);
    fread(_Buffer1, _ElementSize, 1, _Stream);
    fclose(_Stream);
    void* _Buffer2 = malloc(_Size);
    int v15 = memset2((int)_Buffer2, 0, (int)_Size);
    char v16 = (unsigned char)_ElementSize;
    unsigned int v17 = 0;
    do {
        *(char*)(v17 + (int)&v5) = (unsigned char)v17 ^ v16;
        ++v17;
    }
    while((int)v17 < 16);
    int v18 = sub_401000(&v1);
    if(v18) {
        return (int*)0x4;
    }
    void* ptr3 = _Buffer;
    sub_401780((int*)_Size, &v1, &v5);
    fwrite(_Buffer2, _Size, 1, _Stream1);
    free(_Buffer1);
    free(_Buffer2);
    fclose(_Stream1);
    return NULL;
}

int sub_401E71() {
    FILE* _Stream;
    int result;
    _unlock_file(_Stream);
    return result;
}

int sub_401F69() {
    FILE* _Stream;
    int result;
    _unlock_file(_Stream);
    return result;
}

int sub_40207B() {
    FILE* _Stream;
    int result;
    _unlock_file(_Stream);
    return result;
}

int sub_402477() {
    FILE* _Stream;
    int result;
    _unlock_file(_Stream);
    return result;
}

int sub_402652() {
    FILE* _Stream;
    int result;
    _unlock_file(_Stream);
    return result;
}

int sub_402955() {
    FILE* _Stream;
    int result;
    _unlock_file(_Stream);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402995() {
    char v0;
    int v1;
    int v2;
    int v3;
    void* ptr0;
    void* ptr1;
    int v4;
    unsigned int v5;
    int v6 = SEH_prolog4(&gvar_417680, 20);
    unsigned int v7 = unk_lib_sub3(1);
    void* ptr2 = ptr0;
    int v8 = 23117;
    char v9 = 1;
    char v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 0;
    char v14 = 0;
    int v15 = 224;
    char v16 = 1;
    char v17 = 0;
    char v18 = 1;
    char v19 = 0;
    char v20 = 0;
    char v21 = 0;
    int v22 = 267;
    char v23 = 1;
    char v24 = 0;
    char v25 = 1;
    char v26 = 0;
    char v27 = 0;
    char v28 = 0;
    char v29 = 0;
    char v30 = 0;
    char v31 = 0;
    char v32 = 0;
    char v33 = 0;
    char v34 = 1;
    char v35 = 1;
    char v36 = 0;
    char v37 = 1;
    char v38 = 0;
    char v39 = 0;
    char v40 = 0;
    int v41 = 0;
    *(int*)(v2 - 28) = 0;
    int v42 = _heap_init();
    char v43 = v42 ? 0: 1;
    char v44 = v42 < 0;
    char v45 = __parity__((unsigned char)v42);
    char v46 = 0;
    char v47 = 0;
    if(v43) {
        int v48 = /*NO_RETURN*/ fast_error_exit(28);
    }
    int v49 = _mtinit();
    char v50 = v49 ? 0: 1;
    char v51 = v49 < 0;
    char v52 = __parity__((unsigned char)v49);
    char v53 = 0;
    char v54 = 0;
    if(v50) {
        int v55 = /*NO_RETURN*/ fast_error_exit(16);
    }
    ptr0 = (void*)&loc_402A18;
    int v56 = unk_lib_sub4();
    *(int*)(v2 - 4) = 0;  // __try{ (see __except:402AC0h)
    char v57 = *(int*)(v2 - 4) ? 0: 1;  // __try{ (see __except:402AC0h)
    char v58 = *(int*)(v2 - 4) < 0;  // __try{ (see __except:402AC0h)
    char v59 = __parity__((unsigned char)*(int*)(v2 - 4));  // __try{ (see __except:402AC0h)
    char v60 = 0;  // __try{ (see __except:402AC0h)
    char v61 = 0;  // __try{ (see __except:402AC0h)
    int v62 = _ioinit();
    char v63 = v62 ? 0: 1;
    char v64 = v62 < 0;
    char v65 = __parity__((unsigned char)v62);
    char v66 = 0;
    char v67 = 0;
    if(v64) {
        int v68 = /*NO_RETURN*/ fast_error_exit(27);
    }
    LPSTR v69 = GetCommandLineA();
    gvar_41B008 = v69;
    unsigned int v70 = (unsigned int)__crtGetEnvironmentStringsA((int)v5);
    gvar_4191C0 = v70;
    int v71 = _setargv(v5);
    char v72 = v71 ? 0: 1;
    char v73 = v71 < 0;
    char v74 = __parity__((unsigned char)v71);
    char v75 = 0;
    char v76 = 0;
    if(v73) {
        /*NO_RETURN*/ amsg_exit(8);
    }
    sub_407AFB();
    char v77 = v1 ? 0: 1;
    char v78 = v1 < 0;
    char v79 = __parity__((unsigned char)v1);
    char v80 = 0;
    char v81 = 0;
    if(v78) {
        /*NO_RETURN*/ amsg_exit(9);
    }
    int errnum = _cinit(1);
    void* ptr3 = ptr0;
    char v82 = errnum ? 0: 1;
    char v83 = errnum < 0;
    char v84 = __parity__((unsigned char)errnum);
    char v85 = 0;
    char v86 = 0;
    if(!v82) {
        /*NO_RETURN*/ amsg_exit(errnum);
    }
    void* ptr4 = gvar_4192E4;
    gvar_419304 = gvar_4192E4;
    ptr0 = ptr4;
    int* ptr5 = sub_401A00(gvar_4192D8, gvar_4192DC);
    int* ptr6 = &v4;
    char v87 = &v0 == 8;
    char v88 = (int)&v3 < 0;
    char v89 = __parity__((unsigned char)&v0 - 8);
    char v90 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0xc) ^ (int)&v3) >>> 4) & 0x1);
    char v91 = (unsigned int)&v4 >= 0xfffffff4;
    char v92 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v4) & (int*)~(int)(int*)((int)&v4 ^ 0xc)) < 0;
    int _Code = (int)ptr5;
    *(int*)(v2 - 36) = (int)ptr5;
    char v93 = 1;
    char v94 = 0;
    char v95 = 1;
    char v96 = 0;
    char v97 = 0;
    /*NO_RETURN*/ exit(_Code);
    *(&ptr1 - 1) = &loc_402AAA;
    /*BAD_CALL!*/ _cexit();
    *(int*)(v2 - 4) = -2;  // } (starts at 402A18h)
    int v98 = _Code;
    *(&ptr1 - 2) = &loc_402AE8;
    /*BAD_CALL!*/ EH_epilog3(*(&ptr1 - 1), *&ptr1, *(&ptr1 + 1), *(&ptr1 + 2));
    int v99 = *(&ptr1 - 2);
    int* ptr7 = &ptr1 - 1;
    jump v99;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404306() {
    return _unlock(1);
}

int sub_4049B9() {
    int v0;
    return _unlock_fhandle(v0);
}

int sub_404C06() {
    unsigned int v0;
    return _unlock_file2(v0, *(int*)(v0 * 4 + gvar_41B000));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404C39() {
    return _unlock(1);
}

int sub_404D09() {
    int v0;
    return _unlock_fhandle(v0);
}

int sub_404EAA() {
    int v0;
    return _unlock_fhandle(v0);
}

int sub_405077() {
    int v0;
    return _unlock_fhandle(v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_405ADB() {
    return _unlock(11);
}

unsigned char* sub_405C40(unsigned char* par04, unsigned char* par08, int* par0C) {
    // Decompilation error
}

int sub_40634B() {
    int v0;
    return _unlock_fhandle(v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_406D25(int param0) {
    int v0;
    int v1;
    char v2;
    int v3 = doexit(0, 1, v0);
    int* ptr0 = &v1;
    char v4 = &param0 ? 0: 1;
    char v5 = (int)&param0 < 0;
    char v6 = __parity__((unsigned char)&v0 + 4);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0xc) ^ (int)&param0) >>> 4) & 0x1);
    char v8 = (unsigned int)&v1 >= 0xfffffff4;
    char v9 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&param0) & (int*)~(int)(int*)((int)&v1 ^ 0xc)) < 0;
    int v10 = param0;
    int* ptr1 = &v2;
    jump v10;
}

int* sub_406DD9() {
    unsigned int v0 = (unsigned int)EncodePointer(NULL);
    unk_lib_sub2(v0);
    unk_lib_sub(v0);
    unk_lib_sub5(v0);
    _initp_misc_winsig(v0);
    sub_40A37E();
    unk_lib_sub6(v0);
    return __crtLoadWinApiPointers();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_406E72() {
    return _unlock(8);
}

int sub_407420(unsigned int* param0) {
    void* ptr0;
    unsigned int* ptr1 = param0;
    unsigned int* ptr2 = *ptr1;
    char v0 = *ptr2 == -529697949;
    if(v0) {
        char v1 = *(int*)(ptr2 + 4) == 3;
        char v2 = *(int*)(ptr2 + 4) < 3;
        char v3 = __parity__((unsigned char)*(int*)(ptr2 + 4) - 3);
        char v4 = *(ptr2 + 4) < 3;
        char v5 = (((*(int*)(ptr2 + 4) - 3) ^ *(int*)(ptr2 + 4)) & (*(int*)(ptr2 + 4) ^ 0x3)) < 0;
        if(v1) {
            ptr2 = *(ptr2 + 5);
            char v6 = ptr2 == 429065504;
            char v7 = (int)ptr2 < 429065504;
            char v8 = __parity__((unsigned char)ptr2 - 32);
            char v9 = (unsigned int)ptr2 < 429065504;
            char v10 = (int)(int*)((int)(int*)((int)(int*)(ptr2 - 107266376) ^ (int)ptr2) & (int)(int*)((int)ptr2 ^ 0x19930520)) < 0;
            char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)(ptr2 - 107266376) ^ (int)(int*)((int)ptr2 ^ 0x19930520)) >>> 4) & 0x1);
            if(!v6) {
                v6 = ptr2 == 429065505;
                v7 = (int)ptr2 < 429065505;
                v8 = __parity__((unsigned char)ptr2 - 33);
                v9 = (unsigned int)ptr2 < 429065505;
                v10 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr2 - 429065505) ^ (int)ptr2) & (int)(int*)((int)ptr2 ^ 0x19930521)) < 0;
                v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr2 - 429065505) ^ (int)(int*)((int)ptr2 ^ 0x19930521)) >>> 4) & 0x1);
                if(!v6) {
                    v6 = ptr2 == 429065506;
                    v7 = (int)ptr2 < 429065506;
                    v8 = __parity__((unsigned char)ptr2 - 34);
                    v9 = (unsigned int)ptr2 < 429065506;
                    v10 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr2 - 429065506) ^ (int)ptr2) & (int)(int*)((int)ptr2 ^ 0x19930522)) < 0;
                    v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr2 - 429065506) ^ (int)(int*)((int)ptr2 ^ 0x19930522)) >>> 4) & 0x1);
                    if(!v6) {
                        v6 = ptr2 == 0x1994000;
                        v7 = (int)ptr2 < 0x1994000;
                        v8 = __parity__((unsigned char)ptr2);
                        v9 = (unsigned int)ptr2 < 0x1994000;
                        v10 = (int)(int*)((int)(int*)((int)(int*)(ptr2 - 0x665000) ^ (int)ptr2) & (int)(int*)((int)ptr2 ^ 0x1994000)) < 0;
                        v11 = (int*)((int)(int*)((int)(int*)((int)(int*)(ptr2 - 0x665000) ^ (int)(int*)((int)ptr2 ^ 0x1994000)) >>> 4) & 0x1);
                        if(!v6) {
                            return 0;
                        }
                    }
                }
            }
            int* ptr3 = &ptr0;
            int v12 = /*NO_RETURN*/ sub_40A34A();
        }
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4076EA() {
    return _unlock(13);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4076F6() {
    return _unlock(12);
}

int sub_4078B9() {
    DWORD v0;
    __crtFlsFree(v0);
    gvar_418540 = 0xffffffff;
}

int sub_4078C7() {
    int v0;
    int result;
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

void sub_407AFB() {
    char v0 = gvar_419FF0 ? 0: 1;
    char v1 = gvar_419FF0 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_419FF0);
    char v3 = gvar_419FF0 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_407B04: &sub_407B09;
}

int sub_407B04() {
    void* ptr0;
    int* ptr1 = &ptr0;
    /*BAD_CALL!*/ sub_408594();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_407B09() {
    int result;
    size_t v0;
    size_t v1;
    void* ptr0;
    int v2;
    int v3;
    int v4;
    int v5;
    char v6;
    char* _Str = gvar_4191C0;
    int v7 = 0;
    char v8 = _Str ? 0: 1;
    char v9 = (int)_Str < 0;
    char v10 = __parity__((unsigned char)_Str);
    char v11 = 0;
    char v12 = 0;
    if(!v8) {
        while(1) {
            v1 = (unsigned int)_Str[0] | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
            char v13 = _Str[0] ? 0: 1;
            char v14 = (unsigned char)v1 < 0;
            char v15 = __parity__((unsigned char)v1);
            char v16 = 0;
            char v17 = 0;
            if(v13) {
                break;
            }
            else {
                char v18 = (unsigned char)v1 == 61;
                char v19 = (unsigned char)v1 < 61;
                char v20 = __parity__((unsigned char)v1 - 61);
                char v21 = (unsigned char)v1 < 61;
                char v22 = ((((unsigned char)v1 - 61) ^ (unsigned char)v1) & ((unsigned char)v1 ^ 0x3d)) < 0;
                char v23 = ((((unsigned char)v1 - 61) ^ ((unsigned char)v1 ^ 0x3d)) >>> 4) & 0x1;
                if(!v18) {
                    int v24 = v7;
                    ++v7;
                    char v25 = v7 ? 0: 1;
                    char v26 = v7 < 0;
                    char v27 = __parity__((unsigned char)v7);
                    char v28 = (((v24 ^ 0x1) ^ v7) >>> 4) & 0x1;
                    char v29 = ((v7 ^ v24) & ~(v24 ^ 0x1)) < 0;
                }
                v1 = strlen(_Str);
                char* ptr1 = _Str;
                size_t v30 = (size_t)(_Str + 1);
                char v31 = v30 ? 0: 1;
                char v32 = v30 >= 0x80000000;
                char v33 = __parity__((unsigned char)v30);
                char v34 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x1) ^ v30) >>> 4) & 0x1);
                char v35 = (int)(int*)((int)(int*)(v30 ^ (int)ptr1) & (int*)~(int)(int*)((int)ptr1 ^ 0x1)) < 0;
                int v36 = v2;
                v0 = v30;
                _Str = (char*)(v1 + v30);
                char v37 = _Str ? 0: 1;
                char v38 = (int)_Str < 0;
                char v39 = __parity__((unsigned char)_Str);
                char v40 = __carry__(v1, v0);
                char v41 = (int)(int*)((int)(int*)((int)_Str ^ v0) & (int*)~(int)(int*)(v1 ^ v0)) < 0;
            }
        }
        int v42 = v7 + 1;
        v1 = sub_408F5B(v42, 4);
        size_t v43 = v1;
        gvar_4192E4 = v1;
        int v44 = v3;
        char v45 = v43 ? 0: 1;
        char v46 = v43 >= 0x80000000;
        char v47 = __parity__((unsigned char)v43);
        char v48 = 0;
        char v49 = 0;
        if(v45) {
            return -1;
        }
        char* _Str1 = gvar_4191C0;
        v2 = v5;
        char v50 = _Str1[0] ? 0: 1;
        char v51 = _Str1[0] < 0;
        char v52 = __parity__(_Str1[0]);
        char v53 = (unsigned char)_Str1[0] < 0;
        char v54 = 0;
        if(!v50) {
            do {
                size_t v55 = strlen(_Str1);
                char v56 = _Str1[0] == 61;
                char v57 = _Str1[0] < 61;
                char v58 = __parity__(_Str1[0] - 61);
                char v59 = (unsigned char)_Str1[0] < 61;
                char v60 = (((_Str1[0] - 61) ^ _Str1[0]) & (_Str1[0] ^ 0x3d)) < 0;
                char v61 = (((_Str1[0] - 61) ^ (_Str1[0] ^ 0x3d)) >>> 4) & 0x1;
                int v62 = v3;
                v5 = (int)(v55 + 1);
                if(!v56) {
                    unsigned int v63 = sub_408F5B(v5, 1);
                    *(unsigned int*)v43 = v63;
                    int v64 = v4;
                    int v65 = v3;
                    char v66 = v63 ? 0: 1;
                    char v67 = v63 >= 0x80000000;
                    char v68 = __parity__((unsigned char)v63);
                    char v69 = 0;
                    char v70 = 0;
                    if(!v66) {
                        errno_t v71 = strcpy_s((char*)v63, (rsize_t)v5, _Str1);
                        char v72 = v71 ? 0: 1;
                        char v73 = v71 < 0;
                        char v74 = __parity__((unsigned char)v71);
                        char v75 = 0;
                        char v76 = 0;
                        if(!v72) {
                            int v77 = 0;
                            char v78 = 1;
                            char v79 = 0;
                            char v80 = 1;
                            char v81 = 0;
                            char v82 = 0;
                            int* ptr2 = &ptr0;
                            /*NO_RETURN*/ _invoke_watson(NULL, NULL, NULL, 0, 0);
                        }
                        v0 = v43;
                        v43 += 4;
                        char v83 = v43 ? 0: 1;
                        char v84 = v43 >= 0x80000000;
                        char v85 = __parity__((unsigned char)v43);
                        char v86 = (((v0 ^ 0x4) ^ v43) >>> 4) & 0x1;
                        char v87 = v0 >= 0xfffffffc;
                        char v88 = (int)((unsigned int)(v43 ^ v0) & ~(v0 ^ 0x4)) < 0;
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
                    _Str1 = &_Str1[v5];
                    v6 = _Str1[0] ? 0: 1;
                    char v89 = _Str1[0] < 0;
                    char v90 = __parity__(_Str1[0]);
                    char v91 = (unsigned char)_Str1[0] < 0;
                    char v92 = 0;
                }
            }
            while(!v6);
            _Str1 = gvar_4191C0;
            goto loc_407B98;
        }
        else {
        loc_407B98:
            free(_Str1);
            gvar_4191C0 = 0;
            *(int*)v43 = 0;
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
int sub_408540() {
    return _unlock(12);
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_408594() {
    char v0 = gvar_419FF0 ? 0: 1;
    char v1 = gvar_419FF0 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_419FF0);
    char v3 = gvar_419FF0 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_40859D: &sub_4085AF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40859D() {
    _setmbcp(-3);
    gvar_419FF0 = 1;
}

int sub_4085AF() {
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4088E8() {
    return _unlock(13);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_408A63() {
    return _unlock(13);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_409177() {
    return _unlock(1);
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

// Stale decompilation - Refresh this view to re-decompile this code
int sub_409A4C() {
    return _unlock(10);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_409B2D() {
    return _unlock(10);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_409BF5() {
    return _unlock(11);
}

int sub_409E5B() {
    int v0;
    return _unlock_fhandle(v0);
}

BOOL sub_40A1C7(short param0) {
    BOOL result;
    int v0;
    int v1 = v0;
    HANDLE hConsoleOutput = gvar_418E70;
    if(hConsoleOutput == -2) {
        unk_lib_sub7();
        hConsoleOutput = gvar_418E70;
    }
    if(hConsoleOutput != -1) {
        result = WriteConsoleW(hConsoleOutput, &param0, 1, &v1, NULL);
        if(!result) {
            return 0xffff;
        }
        result = (unsigned int)param0 | ((unsigned int)(unsigned short)(result >>> 16) << 16);
    }
    else {
        result = 0xffff;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40A20B(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char v6;
    unsigned int v7 = sub_408F5B(32, 4);
    int v8 = v3;
    int v9 = v4;
    PVOID Ptr = (PVOID)v7;
    PVOID v10 = EncodePointer(Ptr);
    gvar_419FEC = v10;
    gvar_419FE8 = v10;
    char v11 = Ptr ? 0: 1;
    char v12 = (int)Ptr < 0;
    char v13 = __parity__((unsigned char)Ptr);
    char v14 = 0;
    char v15 = 0;
    if(v11) {
        v4 = 24;
        v2 = 24;
        v1 = v5;
        v0 = param0;
        ptr0 = &v6;
        jump v0;
    }
    *(int*)Ptr = 0;
    v2 = 0;
    v11 = 1;
    v12 = 0;
    v13 = 1;
    v14 = 0;
    v15 = 0;
    v1 = v5;
    v0 = param0;
    ptr0 = &v6;
    jump v0;
}

int sub_40A277() {
    return sub_406E72();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40A34A() {
    int v0;
    int v1 = &gvar_417980;
    int v2 = v0;
    int v3 = _getptd();
    int v4 = *(int*)(v3 + 120);
    char v5 = v4 ? 0: 1;
    if(!v5) {
        v5 = 1;  // __try{ (see __except:40A36Eh)
        v9 = 0;  // __try{ (see __except:40A36Eh)
        v8 = 1;  // __try{ (see __except:40A36Eh)
        v10 = 0;  // __try{ (see __except:40A36Eh)
        v12 = 0;  // __try{ (see __except:40A36Eh)
        int v6 = v4();
        v1 = -2;  // } (starts at 40A362h)
    }
    /*NO_RETURN*/ sub_40BFDB();
}

PVOID sub_40A37E() {
    PVOID result = EncodePointer((PVOID)&sub_40A34A);
    gvar_419EF0 = result;
    return result;
}

PVOID sub_40A39C() {
    return DecodePointer(gvar_419F00);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40A546() {
    int result;
    int v0;
    if(v0) {
        result = _unlock(0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40B456() {
    return _unlock(12);
}

int sub_40BFDB() {
    void* ptr0;
    char v0;
    int* ptr1 = &ptr0;
    PVOID v1 = sub_40A39C();
    char v2 = v1 ? 0: 1;
    char v3 = (int)v1 < 0;
    char v4 = __parity__((unsigned char)v1);
    char v5 = 0;
    char v6 = 0;
    if(!v2) {
        v1 = (PVOID)raise(22);
        void* ptr2 = (void*)&loc_40BFE0;
        ptr1 = &v0;
    }
    char v7 = gvar_418E74 & 0x2 ? 0: 1;
    char v8 = (char)(gvar_418E74 & 0x2) < 0;
    char v9 = __parity__(gvar_418E74 & 0x2);
    char v10 = 0;
    char v11 = 0;
    jump v7 ? &sub_40C016: &sub_40BFF5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40BFF5() {
    char v0;
    BOOL v1 = →KERNEL32.dll!IsProcessorFeaturePresent(23);
    char v2 = v1 ? 0: 1;
    char v3 = v1 < 0;
    char v4 = __parity__((unsigned char)v1);
    char v5 = 0;
    char v6 = 0;
    if(!v2) {
        int v7 = 7;
        int v8 = 7;
        int* ptr0 = &v0;
        interrupt(41);
    }
    _call_reportfault(3, 0x40000015, 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40C016() {
    void* ptr0;
    int* ptr1 = &ptr0;
    /*NO_RETURN*/ _exit(3);
}

unsigned char* sub_40E7A0(unsigned char* par04, unsigned char* par08, int* par0C) {
    // Decompilation error
}

unsigned char* sub_40EDF0(unsigned char* par04, unsigned char par08) {
    // Decompilation error
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

int unk_lib_sub10(char* param0, unsigned int param1) {
    char v0;
    return vscan_fn(&_input_l, param0, param1, 0, &v0);
}

int unk_lib_sub11(int _C, int* param1) {
    int v0;
    unsigned char v1;
    int v2;
    _LocaleUpdate::_LocaleUpdate(&v0, param1);
    int result = *(int*)(v0 + 116) > 1 ? _isctype_l(_C, 128, (_locale_t)&v0): (unsigned int)*(short*)(_C * 2 + *(int*)(v0 + 144)) & 0x80;
    if(v1) {
        *(int*)(v2 + 112) = *(int*)(v2 + 112) & 0xfffffffd;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unk_lib_sub12(unsigned int* param0) {
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
int unk_lib_sub13(int param0) {
    return x_ismbbtype_l(0, param0, 0, 4);
}

// Stale decompilation - Refresh this view to re-decompile this code
void* unk_lib_sub14(void* param0) {
    void* _Block = param0;
    if(_Block) {
        _Block = (void*)((int)_Block - 8);
        if(*(int*)_Block == 0xdddd) {
            free(_Block);
        }
    }
    return _Block;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unk_lib_sub15(unsigned int* param0) {
    if(!param0) {
        int* ptr0 = _errno();
        ptr0[0] = 22;
        _invalid_parameter_noinfo();
        return 22;
    }
    *param0 = gvar_419F3C;
    return 0;
}

unsigned int unk_lib_sub2(unsigned int param0) {
    gvar_4192D0 = param0;
    return param0;
}

unsigned int unk_lib_sub3(unsigned int param0) {
    gvar_419308 = param0;
    return param0;
}

int unk_lib_sub4() {
    int result;
    return result;
}

unsigned int unk_lib_sub5(unsigned int param0) {
    gvar_419EF4 = param0;
    return param0;
}

unsigned int unk_lib_sub6(unsigned int param0) {
    gvar_419F0C = param0;
    return param0;
}

HANDLE unk_lib_sub7() {
    HANDLE result = CreateFileW("CONOUT$", 0x40000000, 3, NULL, 3, 0, NULL);
    gvar_418E70 = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unk_lib_sub8(short* param0, int* param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    int result;
    int v3;
    int v4;
    char v5;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v3);
    short* ptr1 = param0;
    int v6 = v4;
    int v7 = (unsigned int)*(ptr1 + 5);
    unsigned int v8 = 0;
    int* ptr2 = param1;
    int v9 = v7;
    unsigned int v10 = (unsigned int)(v7 & 0x8000);
    int* ptr3 = ptr2;
    unsigned int v11 = v10;
    unsigned int v12 = (unsigned int)(v9 & 0x7fff);
    int v13 = *(int*)(ptr1 + 3);
    unsigned int v14 = v12 - 0x3fff;
    int v15 = v13;
    int v16 = *(int*)(ptr1 + 1);
    int v17 = (unsigned int)*ptr1 * 0x10000;
    unsigned int v18 = v14;
    int v19 = v17;
    if(v14 == 0xffffc001) {
        v2 = 0;
        unsigned int v20 = 0;
        while(*(int*)(v20 * 4 + (int)&v15) == 0) {
            ++v20;
            if((int)v20 >= 3) {
                goto loc_40CDA1;
            }
        }
        v15 = 0;
        *&v16 = 0;
        *(&v16 + 1) = 0;
        goto loc_40CD83;
    }
    else {
        unsigned int v21 = gvar_418EA0;
        unsigned int v22 = v14;
        int v23 = v15;
        int* ptr4 = &v16;
        int* ptr5 = &v5;
        unsigned int v24 = v21 - 1;
        unsigned int v25 = v21 - 1;
        unsigned int v26 = 31;
        unsigned int v27 = 0;
        *ptr5 = *ptr4;
        int* ptr6 = ptr4 + 1;
        int* ptr7 = ptr5 + 1;
        int v28 = v24 + 1;
        int v29 = (int)(v24 + 1);
        int v30 = v29 < 0 ? -1: 0;
        *ptr7 = *ptr6;
        unsigned int v31 = v26;
        int v32 = v30 & v31;
        unsigned int v33 = (unsigned int)((v29 + v32) >> 5);
        unsigned int v34 = (unsigned int)((v29 + v32) >> 5);
        int v35 = v28 & 0x8000001f;
        char v36 = v35 < 0;
        if(v36) {
            v35 = ((v35 - 1) | 0xffffffe0) + 1;
        }
        unsigned int v37 = v31 - v35;
        unsigned int v38 = v31 - v35;
        unsigned int v39 = v37;
        unsigned int v40 = 0xffffffff;
        int v41 = 1 << (v39 & 0x1f);
        v26 = 3;
        char v42 = *(int*)(v33 * 4 + (int)&v15) & v41 ? 0: 1;
        char v43 = (*(int*)(v33 * 4 + (int)&v15) & v41) < 0;
        if(!v42) {
            int v44 = ~(-1 << (v39 & 0x1f));
            char v45 = *(int*)(v33 * 4 + (int)&v15) & v44 ? 0: 1;
            while(v45) {
                ++v33;
                v42 = v33 == 3;
                v43 = (int)v33 < 3;
                if((int)(((v33 - 3) ^ v33) & (v33 ^ 0x3)) < 0 == v43) {
                    goto loc_40C9D2;
                }
                else {
                    v45 = *(int*)(v33 * 4 + (int)&v15) == 0;
                }
            }
            unsigned int v46 = v25;
            int v47 = v46 >= 0x80000000 ? -1: 0;
            int v48 = (v47 & 0x1f) + v46;
            unsigned int v49 = v25;
            int v50 = v48 >> 5;
            unsigned int v51 = v49 & 0x8000001f;
            char v52 = v51 >= 0x80000000;
            if(v52) {
                v51 = (unsigned int)(((v51 - 1) | 0xffffffe0) + 1);
            }
            unsigned int v53 = 31 - v51;
            v27 = 0;
            v1 = (unsigned int)(1 << (v53 & 0x1f));
            unsigned int v54 = *(unsigned int*)(v50 * 4 + (int)&v15);
            unsigned int v55 = v54 + v1;
            v0 = v54 + v1;
            char v56 = v54 > v55;
            unsigned int v57 = v0;
            int v58 = 0;
            v26 = 0xffffffff;
            v40 = 0xffffffff;
            if(v56 || v57 < v1) {
                v58 = 1;
                v27 = 1;
            }
            *(unsigned int*)(v50 * 4 + (int)&v15) = v57;
            int v59 = v50 - 1;
            v42 = v59 ? 0: 1;
            v43 = v59 < 0;
            if(!v43) {
                while(v58) {
                    unsigned int v60 = *(unsigned int*)(v59 * 4 + (int)&v15);
                    v58 = 0;
                    v27 = 0;
                    v40 = v60 + 1;
                    char v61 = v60 > v40;
                    unsigned int v62 = v40;
                    if(v61 || v62 < 1) {
                        v58 = 1;
                        v27 = 1;
                    }
                    *(unsigned int*)(v59 * 4 + (int)&v15) = v62;
                    --v59;
                    if(v59 < 0) {
                        break;
                    }
                }
                v40 = 0xffffffff;
                v42 = 0;
                v43 = 1;
            }
            v39 = v38;
        loc_40C9D2:
            v33 = v34;
        }
        int v63 = 0xffffffff << (v39 & 0x1f);
        *(int*)(v33 * 4 + (int)&v15) = *(int*)(v33 * 4 + (int)&v15) & v63;
        unsigned int v64 = v33 + 1;
        char v65 = (int)v64 < 3;
        if((int)(((v64 - 3) ^ v64) & (v64 ^ 0x3)) < 0 != v65) {
            int* ptr8 = (int*)(v64 * 4 + (int)&v15);
            for(unsigned int i = 3 - v64; i != 0; --i) {
                *ptr8 = 0;
                ++ptr8;
            }
            v40 = 0xffffffff;
        }
        unsigned int v66 = v18;
        if(v27 != 0) {
            ++v66;
        }
        unsigned int v67 = gvar_418E9C;
        if((int)(gvar_418E9C - gvar_418EA0) > (int)v66) {
            v15 = 0;
            *&v16 = 0;
            *(&v16 + 1) = 0;
            goto loc_40CA18;
        }
        else if((int)v66 <= (int)v67) {
            unsigned int v68 = v67 - v22;
            v15 = v23;
            *&v16 = *&v5;
            v34 = (int)v68 / 32;
            *(&v16 + 1) = *(&v5 + 1);
            unsigned int v69 = v68 & 0x8000001f;
            if(v69 >= 0x80000000) {
                v69 = (unsigned int)(((v69 - 1) | 0xffffffe0) + 1);
            }
            v38 = v69;
            v18 = 0;
            unsigned int v70 = v38;
            v0 = (unsigned int)~(-1 << (v70 & 0x1f));
            v26 = 3;
            v1 = 32 - v70;
            do {
                int v71 = *(int*)(v8 * 4 + (int)&v15);
                unsigned int v72 = (unsigned int)((v71 & v0) << (v1 & 0x1f));
                *(int*)(v8 * 4 + (int)&v15) = (v71 >>> (v70 & 0x1f)) | v18;
                ++v8;
                v18 = v72;
            }
            while((int)v8 < 3);
            v26 = 2;
            int* ptr9 = (int*)((int)&v19 - v34 * 4);
            unsigned int v73 = v34;
            unsigned int v74 = 2;
            do {
                if((int)v73 <= (int)v74) {
                    *(int*)(v74 * 4 + (int)&v15) = *ptr9;
                    v73 = v34;
                }
                else {
                    *(int*)(v74 * 4 + (int)&v15) = 0;
                }
                --ptr9;
                --v74;
            }
            while(v74 < 0x80000000);
            int v75 = (int)(v25 + 1);
            unsigned int v76 = (unsigned int)(v75 / 32);
            v27 = (unsigned int)(v75 / 32);
            unsigned int v77 = (unsigned int)(v75 & 0x8000001f);
            if(v77 >= 0x80000000) {
                v77 = (unsigned int)(((v77 - 1) | 0xffffffe0) + 1);
            }
            v26 = 31;
            v38 = 31 - v77;
            unsigned int v78 = 31 - v77;
            if(((1 << (v78 & 0x1f)) & *(int*)(v76 * 4 + (int)&v15))) {
                char v79 = ~(-1 << (v78 & 0x1f)) & *(int*)(v76 * 4 + (int)&v15) ? 0: 1;
                while(v79) {
                    ++v76;
                    if((int)v76 >= 3) {
                        goto loc_40CB8D;
                    }
                    else {
                        v79 = *(int*)(v76 * 4 + (int)&v15) == 0;
                    }
                }
                int v80 = (int)v25 / 32;
                int v81 = (int)(v25 & 0x8000001f);
                if(v81 < 0) {
                    v81 = ((v81 - 1) | 0xffffffe0) + 1;
                }
                unsigned int v82 = *(unsigned int*)(v80 * 4 + (int)&v15);
                unsigned int v83 = (unsigned int)(1 << ((31 - v81) & 0x1f));
                int v84 = 0;
                v22 = v83;
                v18 = v82 + v83;
                unsigned int v85 = v82 + v83;
                v26 = 0xffffffff;
                if(v82 + v83 < v82 || v85 < v22) {
                    v84 = 1;
                }
                *(unsigned int*)(v80 * 4 + (int)&v15) = v85;
                int v86 = v80 - 1;
                if(v86 >= 0) {
                    while(v84) {
                        unsigned int v87 = *(unsigned int*)(v86 * 4 + (int)&v15);
                        v84 = 0;
                        unsigned int v88 = v87 + 1;
                        if(v87 + 1 < v87 || v88 < 1) {
                            v84 = 1;
                        }
                        *(unsigned int*)(v86 * 4 + (int)&v15) = v88;
                        --v86;
                        if(v86 < 0) {
                            break;
                        }
                    }
                }
                v78 = v38;
            loc_40CB8D:
                v76 = v27;
            }
            *(int*)(v76 * 4 + (int)&v15) = (0xffffffff << (v78 & 0x1f)) & *(int*)(v76 * 4 + (int)&v15);
            unsigned int v89 = v76 + 1;
            if((int)v89 < 3) {
                int* ptr10 = (int*)(v89 * 4 + (int)&v15);
                for(unsigned int j = 3 - v89; j != 0; --j) {
                    *ptr10 = 0;
                    ++ptr10;
                }
            }
            int v90 = (int)(gvar_418EA4 + 1);
            v0 = (unsigned int)(v90 / 32);
            unsigned int v91 = (unsigned int)(v90 & 0x8000001f);
            if(v91 >= 0x80000000) {
                v91 = (unsigned int)(((v91 - 1) | 0xffffffe0) + 1);
            }
            unsigned int v92 = 0;
            v26 = 32;
            v18 = 0;
            int v93 = ~(0xffffffff << (v91 & 0x1f));
            unsigned int v94 = v91;
            v25 = 0;
            v22 = 32 - v94;
            do {
                int v95 = *(int*)(v92 * 4 + (int)&v15);
                *(int*)(v25 * 4 + (int)&v15) = (v95 >>> (v94 & 0x1f)) | v18;
                v18 = (unsigned int)((v95 & v93) << (v22 & 0x1f));
                v92 = v25 + 1;
                ++v25;
            }
            while((int)v92 < 3);
            unsigned int v96 = v0;
            v26 = 2;
            int* ptr11 = (int*)((int)&v19 - v96 * 4);
            unsigned int v97 = 2;
            do {
                *(int*)(v97 * 4 + (int)&v15) = (int)v97 >= (int)v96 ? *ptr11: 0;
                --ptr11;
                --v97;
            }
            while(v97 < 0x80000000);
        loc_40CA18:
            v2 = 0;
        }
        else if((int)gvar_418E98 <= (int)v66) {
            unsigned int v98 = gvar_418EA4;
            *&v16 = 0;
            *(&v16 + 1) = 0;
            v15 = 0x80000000;
            v25 = (int)v98 / 32;
            unsigned int v99 = v98 & 0x8000001f;
            if(v99 >= 0x80000000) {
                v99 = (unsigned int)(((v99 - 1) | 0xffffffe0) + 1);
            }
            v1 = v99;
            v26 = 32;
            v18 = 0;
            int v100 = ~(-1 << (v99 & 0x1f));
            v0 = 32 - v99;
            do {
                int v101 = *(int*)(v8 * 4 + (int)&v15);
                int v102 = (v101 >>> (v99 & 0x1f)) | v18;
                unsigned int v103 = (unsigned int)((v101 & v100) << (v0 & 0x1f));
                v99 = v1;
                *(int*)(v8 * 4 + (int)&v15) = v102;
                ++v8;
                v18 = v103;
            }
            while((int)v8 < 3);
            unsigned int v104 = v25;
            v26 = 2;
            int* ptr12 = (int*)((int)&v19 - v104 * 4);
            unsigned int v105 = 2;
            do {
                *(int*)(v105 * 4 + (int)&v15) = (int)v105 >= (int)v104 ? *ptr12: 0;
                --ptr12;
                --v105;
            }
            while(v105 < 0x80000000);
            v2 = gvar_418E98 + gvar_418EAC;
        }
        else {
            unsigned int v106 = gvar_418EAC;
            v15 &= 0x7fffffff;
            unsigned int v107 = gvar_418EA4;
            v1 = v66 + v106;
            v0 = (int)v107 / 32;
            unsigned int v108 = v107 & 0x8000001f;
            if(v108 >= 0x80000000) {
                v108 = (unsigned int)(((v108 - 1) | 0xffffffe0) + 1);
            }
            v26 = 32;
            v18 = 0;
            unsigned int v109 = 0;
            unsigned int v110 = v108;
            int v111 = ~(0xffffffff << (v108 & 0x1f));
            v22 = 32 - v110;
            do {
                int v112 = *(int*)(v109 * 4 + (int)&v15);
                unsigned int v113 = (unsigned int)((v112 & v111) << (v22 & 0x1f));
                *(int*)(v109 * 4 + (int)&v15) = (v112 >>> (v110 & 0x1f)) | v18;
                ++v109;
                v18 = v113;
            }
            while((int)v109 < 3);
            unsigned int v114 = v0;
            v2 = v1;
            v26 = 2;
            int* ptr13 = (int*)((int)&v19 - v114 * 4);
            unsigned int v115 = 2;
            do {
                *(int*)(v115 * 4 + (int)&v15) = (int)v115 >= (int)v114 ? *ptr13: 0;
                --ptr13;
                --v115;
            }
            while(v115 < 0x80000000);
        }
    loc_40CD83:
        ptr2 = ptr3;
    }
loc_40CDA1:
    unsigned int v116 = gvar_418EA8;
    int v117 = (v2 << ((31 - gvar_418EA4) & 0x1f)) | (v11 > 0 ? 0x80000000: 0) | v15;
    if(v116 == 32) {
        *ptr2 = v117;
    }
    else if(v116 == 64) {
        int v118 = v16;
        *(ptr2 + 1) = v117;
        *ptr2 = v118;
    }
    __security_check_cookie((uintptr_t)((int)&v3 ^ (int)ptr0));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unk_lib_sub9(short* param0, int* param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    int result;
    int v3;
    int v4;
    char v5;
    int* ptr0 = (int*)(gvar_4183F0 ^ (int)&v3);
    short* ptr1 = param0;
    int v6 = v4;
    int v7 = (unsigned int)*(ptr1 + 5);
    unsigned int v8 = 0;
    int* ptr2 = param1;
    int v9 = v7;
    unsigned int v10 = (unsigned int)(v7 & 0x8000);
    int* ptr3 = ptr2;
    unsigned int v11 = v10;
    unsigned int v12 = (unsigned int)(v9 & 0x7fff);
    int v13 = *(int*)(ptr1 + 3);
    unsigned int v14 = v12 - 0x3fff;
    int v15 = v13;
    int v16 = *(int*)(ptr1 + 1);
    int v17 = (unsigned int)*ptr1 * 0x10000;
    unsigned int v18 = v14;
    int v19 = v17;
    if(v14 == 0xffffc001) {
        v2 = 0;
        unsigned int v20 = 0;
        while(*(int*)(v20 * 4 + (int)&v15) == 0) {
            ++v20;
            if((int)v20 >= 3) {
                goto loc_40D313;
            }
        }
        v15 = 0;
        *&v16 = 0;
        *(&v16 + 1) = 0;
        goto loc_40D2F5;
    }
    else {
        unsigned int v21 = gvar_418EB8;
        unsigned int v22 = v14;
        int v23 = v15;
        int* ptr4 = &v16;
        int* ptr5 = &v5;
        unsigned int v24 = v21 - 1;
        unsigned int v25 = v21 - 1;
        unsigned int v26 = 31;
        unsigned int v27 = 0;
        *ptr5 = *ptr4;
        int* ptr6 = ptr4 + 1;
        int* ptr7 = ptr5 + 1;
        int v28 = v24 + 1;
        int v29 = (int)(v24 + 1);
        int v30 = v29 < 0 ? -1: 0;
        *ptr7 = *ptr6;
        unsigned int v31 = v26;
        int v32 = v30 & v31;
        unsigned int v33 = (unsigned int)((v29 + v32) >> 5);
        unsigned int v34 = (unsigned int)((v29 + v32) >> 5);
        int v35 = v28 & 0x8000001f;
        char v36 = v35 < 0;
        if(v36) {
            v35 = ((v35 - 1) | 0xffffffe0) + 1;
        }
        unsigned int v37 = v31 - v35;
        unsigned int v38 = v31 - v35;
        unsigned int v39 = v37;
        unsigned int v40 = 0xffffffff;
        int v41 = 1 << (v39 & 0x1f);
        v26 = 3;
        char v42 = *(int*)(v33 * 4 + (int)&v15) & v41 ? 0: 1;
        char v43 = (*(int*)(v33 * 4 + (int)&v15) & v41) < 0;
        if(!v42) {
            int v44 = ~(-1 << (v39 & 0x1f));
            char v45 = *(int*)(v33 * 4 + (int)&v15) & v44 ? 0: 1;
            while(v45) {
                ++v33;
                v42 = v33 == 3;
                v43 = (int)v33 < 3;
                if((int)(((v33 - 3) ^ v33) & (v33 ^ 0x3)) < 0 == v43) {
                    goto loc_40CF44;
                }
                else {
                    v45 = *(int*)(v33 * 4 + (int)&v15) == 0;
                }
            }
            unsigned int v46 = v25;
            int v47 = v46 >= 0x80000000 ? -1: 0;
            int v48 = (v47 & 0x1f) + v46;
            unsigned int v49 = v25;
            int v50 = v48 >> 5;
            unsigned int v51 = v49 & 0x8000001f;
            char v52 = v51 >= 0x80000000;
            if(v52) {
                v51 = (unsigned int)(((v51 - 1) | 0xffffffe0) + 1);
            }
            unsigned int v53 = 31 - v51;
            v27 = 0;
            v1 = (unsigned int)(1 << (v53 & 0x1f));
            unsigned int v54 = *(unsigned int*)(v50 * 4 + (int)&v15);
            unsigned int v55 = v54 + v1;
            v0 = v54 + v1;
            char v56 = v54 > v55;
            unsigned int v57 = v0;
            int v58 = 0;
            v26 = 0xffffffff;
            v40 = 0xffffffff;
            if(v56 || v57 < v1) {
                v58 = 1;
                v27 = 1;
            }
            *(unsigned int*)(v50 * 4 + (int)&v15) = v57;
            int v59 = v50 - 1;
            v42 = v59 ? 0: 1;
            v43 = v59 < 0;
            if(!v43) {
                while(v58) {
                    unsigned int v60 = *(unsigned int*)(v59 * 4 + (int)&v15);
                    v58 = 0;
                    v27 = 0;
                    v40 = v60 + 1;
                    char v61 = v60 > v40;
                    unsigned int v62 = v40;
                    if(v61 || v62 < 1) {
                        v58 = 1;
                        v27 = 1;
                    }
                    *(unsigned int*)(v59 * 4 + (int)&v15) = v62;
                    --v59;
                    if(v59 < 0) {
                        break;
                    }
                }
                v40 = 0xffffffff;
                v42 = 0;
                v43 = 1;
            }
            v39 = v38;
        loc_40CF44:
            v33 = v34;
        }
        int v63 = 0xffffffff << (v39 & 0x1f);
        *(int*)(v33 * 4 + (int)&v15) = *(int*)(v33 * 4 + (int)&v15) & v63;
        unsigned int v64 = v33 + 1;
        char v65 = (int)v64 < 3;
        if((int)(((v64 - 3) ^ v64) & (v64 ^ 0x3)) < 0 != v65) {
            int* ptr8 = (int*)(v64 * 4 + (int)&v15);
            for(unsigned int i = 3 - v64; i != 0; --i) {
                *ptr8 = 0;
                ++ptr8;
            }
            v40 = 0xffffffff;
        }
        unsigned int v66 = v18;
        if(v27 != 0) {
            ++v66;
        }
        unsigned int v67 = gvar_418EB4;
        if((int)(gvar_418EB4 - gvar_418EB8) > (int)v66) {
            v15 = 0;
            *&v16 = 0;
            *(&v16 + 1) = 0;
            goto loc_40CF8A;
        }
        else if((int)v66 <= (int)v67) {
            unsigned int v68 = v67 - v22;
            v15 = v23;
            *&v16 = *&v5;
            v34 = (int)v68 / 32;
            *(&v16 + 1) = *(&v5 + 1);
            unsigned int v69 = v68 & 0x8000001f;
            if(v69 >= 0x80000000) {
                v69 = (unsigned int)(((v69 - 1) | 0xffffffe0) + 1);
            }
            v38 = v69;
            v18 = 0;
            unsigned int v70 = v38;
            v0 = (unsigned int)~(-1 << (v70 & 0x1f));
            v26 = 3;
            v1 = 32 - v70;
            do {
                int v71 = *(int*)(v8 * 4 + (int)&v15);
                unsigned int v72 = (unsigned int)((v71 & v0) << (v1 & 0x1f));
                *(int*)(v8 * 4 + (int)&v15) = (v71 >>> (v70 & 0x1f)) | v18;
                ++v8;
                v18 = v72;
            }
            while((int)v8 < 3);
            v26 = 2;
            int* ptr9 = (int*)((int)&v19 - v34 * 4);
            unsigned int v73 = v34;
            unsigned int v74 = 2;
            do {
                if((int)v73 <= (int)v74) {
                    *(int*)(v74 * 4 + (int)&v15) = *ptr9;
                    v73 = v34;
                }
                else {
                    *(int*)(v74 * 4 + (int)&v15) = 0;
                }
                --ptr9;
                --v74;
            }
            while(v74 < 0x80000000);
            int v75 = (int)(v25 + 1);
            unsigned int v76 = (unsigned int)(v75 / 32);
            v27 = (unsigned int)(v75 / 32);
            unsigned int v77 = (unsigned int)(v75 & 0x8000001f);
            if(v77 >= 0x80000000) {
                v77 = (unsigned int)(((v77 - 1) | 0xffffffe0) + 1);
            }
            v26 = 31;
            v38 = 31 - v77;
            unsigned int v78 = 31 - v77;
            if(((1 << (v78 & 0x1f)) & *(int*)(v76 * 4 + (int)&v15))) {
                char v79 = ~(-1 << (v78 & 0x1f)) & *(int*)(v76 * 4 + (int)&v15) ? 0: 1;
                while(v79) {
                    ++v76;
                    if((int)v76 >= 3) {
                        goto loc_40D0FF;
                    }
                    else {
                        v79 = *(int*)(v76 * 4 + (int)&v15) == 0;
                    }
                }
                int v80 = (int)v25 / 32;
                int v81 = (int)(v25 & 0x8000001f);
                if(v81 < 0) {
                    v81 = ((v81 - 1) | 0xffffffe0) + 1;
                }
                unsigned int v82 = *(unsigned int*)(v80 * 4 + (int)&v15);
                unsigned int v83 = (unsigned int)(1 << ((31 - v81) & 0x1f));
                int v84 = 0;
                v22 = v83;
                v18 = v82 + v83;
                unsigned int v85 = v82 + v83;
                v26 = 0xffffffff;
                if(v82 + v83 < v82 || v85 < v22) {
                    v84 = 1;
                }
                *(unsigned int*)(v80 * 4 + (int)&v15) = v85;
                int v86 = v80 - 1;
                if(v86 >= 0) {
                    while(v84) {
                        unsigned int v87 = *(unsigned int*)(v86 * 4 + (int)&v15);
                        v84 = 0;
                        unsigned int v88 = v87 + 1;
                        if(v87 + 1 < v87 || v88 < 1) {
                            v84 = 1;
                        }
                        *(unsigned int*)(v86 * 4 + (int)&v15) = v88;
                        --v86;
                        if(v86 < 0) {
                            break;
                        }
                    }
                }
                v78 = v38;
            loc_40D0FF:
                v76 = v27;
            }
            *(int*)(v76 * 4 + (int)&v15) = (0xffffffff << (v78 & 0x1f)) & *(int*)(v76 * 4 + (int)&v15);
            unsigned int v89 = v76 + 1;
            if((int)v89 < 3) {
                int* ptr10 = (int*)(v89 * 4 + (int)&v15);
                for(unsigned int j = 3 - v89; j != 0; --j) {
                    *ptr10 = 0;
                    ++ptr10;
                }
            }
            int v90 = (int)(gvar_418EBC + 1);
            v0 = (unsigned int)(v90 / 32);
            unsigned int v91 = (unsigned int)(v90 & 0x8000001f);
            if(v91 >= 0x80000000) {
                v91 = (unsigned int)(((v91 - 1) | 0xffffffe0) + 1);
            }
            unsigned int v92 = 0;
            v26 = 32;
            v18 = 0;
            int v93 = ~(0xffffffff << (v91 & 0x1f));
            unsigned int v94 = v91;
            v25 = 0;
            v22 = 32 - v94;
            do {
                int v95 = *(int*)(v92 * 4 + (int)&v15);
                *(int*)(v25 * 4 + (int)&v15) = (v95 >>> (v94 & 0x1f)) | v18;
                v18 = (unsigned int)((v95 & v93) << (v22 & 0x1f));
                v92 = v25 + 1;
                ++v25;
            }
            while((int)v92 < 3);
            unsigned int v96 = v0;
            v26 = 2;
            int* ptr11 = (int*)((int)&v19 - v96 * 4);
            unsigned int v97 = 2;
            do {
                *(int*)(v97 * 4 + (int)&v15) = (int)v97 >= (int)v96 ? *ptr11: 0;
                --ptr11;
                --v97;
            }
            while(v97 < 0x80000000);
        loc_40CF8A:
            v2 = 0;
        }
        else if((int)gvar_418EB0 <= (int)v66) {
            unsigned int v98 = gvar_418EBC;
            *&v16 = 0;
            *(&v16 + 1) = 0;
            v15 = 0x80000000;
            v25 = (int)v98 / 32;
            unsigned int v99 = v98 & 0x8000001f;
            if(v99 >= 0x80000000) {
                v99 = (unsigned int)(((v99 - 1) | 0xffffffe0) + 1);
            }
            v1 = v99;
            v26 = 32;
            v18 = 0;
            int v100 = ~(-1 << (v99 & 0x1f));
            v0 = 32 - v99;
            do {
                int v101 = *(int*)(v8 * 4 + (int)&v15);
                int v102 = (v101 >>> (v99 & 0x1f)) | v18;
                unsigned int v103 = (unsigned int)((v101 & v100) << (v0 & 0x1f));
                v99 = v1;
                *(int*)(v8 * 4 + (int)&v15) = v102;
                ++v8;
                v18 = v103;
            }
            while((int)v8 < 3);
            unsigned int v104 = v25;
            v26 = 2;
            int* ptr12 = (int*)((int)&v19 - v104 * 4);
            unsigned int v105 = 2;
            do {
                *(int*)(v105 * 4 + (int)&v15) = (int)v105 >= (int)v104 ? *ptr12: 0;
                --ptr12;
                --v105;
            }
            while(v105 < 0x80000000);
            v2 = gvar_418EB0 + gvar_418EC4;
        }
        else {
            unsigned int v106 = gvar_418EC4;
            v15 &= 0x7fffffff;
            unsigned int v107 = gvar_418EBC;
            v1 = v66 + v106;
            v0 = (int)v107 / 32;
            unsigned int v108 = v107 & 0x8000001f;
            if(v108 >= 0x80000000) {
                v108 = (unsigned int)(((v108 - 1) | 0xffffffe0) + 1);
            }
            v26 = 32;
            v18 = 0;
            unsigned int v109 = 0;
            unsigned int v110 = v108;
            int v111 = ~(0xffffffff << (v108 & 0x1f));
            v22 = 32 - v110;
            do {
                int v112 = *(int*)(v109 * 4 + (int)&v15);
                unsigned int v113 = (unsigned int)((v112 & v111) << (v22 & 0x1f));
                *(int*)(v109 * 4 + (int)&v15) = (v112 >>> (v110 & 0x1f)) | v18;
                ++v109;
                v18 = v113;
            }
            while((int)v109 < 3);
            unsigned int v114 = v0;
            v2 = v1;
            v26 = 2;
            int* ptr13 = (int*)((int)&v19 - v114 * 4);
            unsigned int v115 = 2;
            do {
                *(int*)(v115 * 4 + (int)&v15) = (int)v115 >= (int)v114 ? *ptr13: 0;
                --ptr13;
                --v115;
            }
            while(v115 < 0x80000000);
        }
    loc_40D2F5:
        ptr2 = ptr3;
    }
loc_40D313:
    unsigned int v116 = gvar_418EC0;
    int v117 = (v2 << ((31 - gvar_418EBC) & 0x1f)) | (v11 > 0 ? 0x80000000: 0) | v15;
    if(v116 == 32) {
        *ptr2 = v117;
    }
    else if(v116 == 64) {
        int v118 = v16;
        *(ptr2 + 1) = v117;
        *ptr2 = v118;
    }
    __security_check_cookie((uintptr_t)((int)&v3 ^ (int)ptr0));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int vscan_fn(int param0, char* param1, unsigned int param2, int param3, int param4) {
    int result;
    size_t v0;
    char* ptr0 = NULL;
    char* _Str = param1;
    int* ptr1 = &v0;
    int v1 = 7;
    do {
        *ptr1 = 0;
        ++ptr1;
        --v1;
    }
    while(v1 == 0);
    if(!_Str || param2 == 0) {
        int* ptr2 = _errno();
        ptr2[0] = 22;
        _invalid_parameter_noinfo();
        result = -1;
    }
    else {
        size_t v2 = strlen(_Str);
        int v3 = 73;
        v0 = v2 <= 0x7fffffff ? v2: 0x7fffffff;
        result = param0((int)&ptr0, (int)param2, param3, param4);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int x_ismbbtype_l(int param0, int param1, unsigned int param2, int param3) {
    int result;
    int v0;
    int v1;
    unsigned char v2;
    int v3;
    _LocaleUpdate::_LocaleUpdate((int)&v0, param0);
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

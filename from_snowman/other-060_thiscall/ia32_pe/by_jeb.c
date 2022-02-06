
void _EH_epilog3(int param0, int param1, int param2, int param3) {
    int v0;
    int* ptr0;
    int v1 = *(ptr0 - 4);
    *(int*)__FS_BASE = *(ptr0 - 4);
    int v2 = v0;
    int v3 = param0;
    int v4 = param1;
    int v5 = param2;
    int v6 = param3;
    int v7 = *ptr0;
    *ptr0 = v2;
    int v8 = *ptr0;
    int* ptr1 = ptr0 + 1;
    jump v8;
}

int _FindPESection(int param0, unsigned int param1) {
    int v0;
    unsigned int v1 = (unsigned int)(*(int*)(param0 + 60) + param0);
    int v2 = (unsigned int)*(short*)(v1 + 20);
    int v3 = v0;
    unsigned int v4 = (unsigned int)*(short*)(v1 + 6);
    unsigned int v5 = 0;
    int result = v2 + v1 + 24;
    if(v4) {
        do {
            v1 = *(unsigned int*)(result + 12);
            if(v1 <= param1 && (unsigned int)(*(int*)(result + 8) + v1) > param1) {
                return result;
            }
            ++v5;
            result += 40;
        }
        while(v5 < v4);
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
    unsigned char v5 = *(int*)&gvar_407000;
    int v6 = v5 ^ &gvar_406110;
    int* ptr0 = (int*)(v5 ^ (int)&v0);
    *(int**)__FS_BASE = &v3;
    int* ptr1 = &ptr0;
    int v7 = 0;  // __try{ (see __except:401E6Eh)
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

int* _SEH_prolog4(int param0, unsigned int param1) {
    int v0;
    *(int**)__FS_BASE = &v0;
    return &v0;
}

int _ValidateImageBase(unsigned short* param0) {
    if(*param0 == 23117) {
        unsigned int* ptr0 = (unsigned int*)(*(int*)(param0 + 30) + (int)param0);
        if(*ptr0 == 0x4550) {
            return *(short*)(ptr0 + 6) != 267 ? 0: 1;
        }
    }
    return 0;
}

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS* param0) {
    EXCEPTION_RECORD* ptr0 = param0->ExceptionRecord;
    if(ptr0->ExceptionCode == -529697949 && ptr0->NumberParameters == 3) {
        ptr0 = (EXCEPTION_RECORD*)ptr0->ExceptionInformation[0];
        if((ptr0 >= 429065504 && ptr0 <= 429065506) || ptr0 == 0x1994000) {
            /*NO_RETURN*/ →MSVCR100.dll!?terminate@@YAXXZ();
        }
    }
    return 0;
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
    unsigned char v14;
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
    gvar_407248 = v15;
    gvar_407244 = v17;
    gvar_407240 = v18;
    gvar_40723C = v19;
    gvar_407238 = v16;
    gvar_407234 = v20;
    gvar_407260 = v21;
    gvar_407254 = v9;
    gvar_407230 = v10;
    gvar_40722C = v22;
    gvar_407228 = v23;
    gvar_407224 = v11;
    gvar_407258 = (unsigned int)((unsigned int)&v13 < 808) | ((unsigned int)1 << 1) | ((unsigned int)__parity__((unsigned char)&v0 - 44) << 2) | ((unsigned int)0 << 3) | ((unsigned int)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v13 ^ 0x328) ^ (int)&v14) >>> 4) & 0x1) << 4) | ((unsigned int)0 << 5) | ((unsigned int)(&v0 == 812) << 6) | ((unsigned int)((int)&v14 < 0) << 7) | ((unsigned int)v1 << 8) | ((unsigned int)v2 << 9) | ((unsigned int)0 << 10) | ((unsigned int)((int)(int*)((int)(int*)((int)&v13 ^ (int)&v14) & (int)(int*)((int)&v13 ^ 0x328)) < 0) << 11) | ((unsigned int)v3 << 12) | ((unsigned int)v4 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v5 << 18) | ((unsigned int)v7 << 19) | ((unsigned int)v6 << 20) | ((unsigned int)v8 << 21) | ((unsigned int)0 << 22);
    gvar_40724C = v24;
    gvar_407250 = v0;
    gvar_40725C = &v12;
    gvar_407198 = 0x10001;
    gvar_40714C = gvar_407250;
    gvar_407140 = 3221226505;
    gvar_407144 = 1;
    v14 = *(int*)&gvar_407000;
    unsigned int v25 = gvar_407004;
    BOOL v26 = IsDebuggerPresent();
    gvar_407190 = v26;
    →MSVCR100.dll!_crt_debugger_hook();
    SetUnhandledExceptionFilter(NULL);
    UnhandledExceptionFilter((_EXCEPTION_POINTERS*)&gvar_405860);
    if(!gvar_407190) {
        →MSVCR100.dll!_crt_debugger_hook();
    }
    HANDLE hProcess = GetCurrentProcess();
    TerminateProcess(hProcess, 3221226505);
}

void __security_check_cookie(uintptr_t _StackCookie) {
    char v0 = *(int*)&gvar_407000 == _StackCookie;
    char v1 = (char)*(int*)&gvar_407000 > (int)_StackCookie;
    char v2 = __parity__((unsigned char)_StackCookie - (unsigned char)*(int*)&gvar_407000);
    char v3 = *(int*)&gvar_407000 > _StackCookie;
    char v4 = (int)(((unsigned int)(_StackCookie - *(int*)&gvar_407000) ^ _StackCookie) & (unsigned int)(*(int*)&gvar_407000 ^ _StackCookie)) < 0;
    char v5 = (((unsigned int)(_StackCookie - *(int*)&gvar_407000) ^ (unsigned int)(*(int*)&gvar_407000 ^ _StackCookie)) >>> 4) & 0x1;
    if(!v0) {
        /*NO_RETURN*/ __report_gsfailure();
    }
}

void __security_init_cookie() {
    int v0;
    int v1;
    unsigned int v2 = *(int*)&gvar_407000;
    int v3 = 0;
    int v4 = 0;
    if(v2 != -1153374642 && (v2 & 0xffff0000)) {
        gvar_407004 = ~v2;
    }
    else {
        /*BAD_CALL!*/ GetSystemTimeAsFileTime(&v3);
        DWORD v5 = /*BAD_CALL!*/ GetCurrentProcessId();
        DWORD v6 = /*BAD_CALL!*/ GetCurrentThreadId();
        DWORD v7 = GetTickCount();
        int v8 = (((v3 ^ v4) ^ v5) ^ v6) ^ v7;
        QueryPerformanceCounter(&v0);
        unsigned int v9 = (unsigned int)(v0 ^ v1) ^ v8;
        if(v9 == -1153374642) {
            v9 = 3141592655;
        }
        else if(!(v9 & 0xffff0000)) {
            v9 |= (unsigned int)((v9 | 0x4711) * 0x10000);
        }
        *(int*)&gvar_407000 = v9;
        gvar_407004 = ~v9;
    }
}

int _except_handler4(int param0, int param1, int param2, int param3) {
    return →MSVCR100.dll!_except_handler4_common();
}

int _invoke_watson_if_error(unsigned int param0, wchar_t* _Expression, wchar_t* _FunctionName, wchar_t* _FileName, unsigned int _LineNo, uintptr_t _Reserved) {
    int result;
    if(param0) {
        /*NO_RETURN*/ →MSVCR100.dll!_invoke_watson(_Expression, _FunctionName, _FileName, _LineNo, _Reserved);
    }
    return result;
}

_onexit_t _onexit(_onexit_t _Func) {
    _onexit_t result;
    int v0;
    int v1;
    int v2 = &gvar_4060F0;
    int v3 = v1;
    PVOID v4 = DecodePointer(gvar_407498);
    PVOID Ptr = v4;
    if(v4 == -1) {
        result = onexit(_Func);
    }
    else {
        →MSVCR100.dll!_lock();
        v2 = 0;  // __try{ (see __finally:401CBAh)
        Ptr = DecodePointer(gvar_407498);
        PVOID Ptr1 = DecodePointer(gvar_407488);
        int* ptr0 = &Ptr1;
        int* ptr1 = &Ptr;
        PVOID v5 = EncodePointer(_Func);
        int v6 = →MSVCR100.dll!__dllonexit();
        PVOID v7 = EncodePointer(Ptr);
        gvar_407498 = v7;
        PVOID v8 = EncodePointer(Ptr1);
        gvar_407488 = v8;
        sub_401CBA();
        result = (_onexit_t)v6;
    }
    *(int*)__FS_BASE = v0;
    return result;
}

errno_t _setdefaultprecision() {
    errno_t result = →MSVCR100.dll!_controlfp_s(NULL, 0x10000, 0x30000);
    if(result) {
        /*NO_RETURN*/ →MSVCR100.dll!_invoke_watson(NULL, NULL, NULL, 0, 0);
    }
    return result;
}

int atexit(FUNCPTR _) {
    _onexit_t v0 = _onexit((_onexit_t)_);
    return -1 - ((unsigned int)v0 > 0 ? 0xffffffff: 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    __security_init_cookie();
    return sub_40182C();
}

// Package: std::char_traits<char>

unsigned int std::char_traits<char>::length(char* _Str) {
    return →MSVCR100.dll!strlen(_Str);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401090(int param0) {
    int v0 = param0;
    sub_4010C0((int)&v0, 10);
    sub_401150((int)&v0, 20);
    sub_401110((int)&v0);
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_4010C0(int* param0, int param1) {
    int* result = param0;
    *result = param1;
    int v0 = sub_401190(33744, "MyClass::MyClass()");
    MSVCP100.dll!??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401110(int param0) {
    sub_401190(33744, "MyClass::~MyClass()");
    return MSVCP100.dll!??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z();
}

int sub_401150(int* param0, int param1) {
    MSVCP100.dll!??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@H@Z();
    return MSVCP100.dll!??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z();
}

int sub_401190(int param0, char* _Str) {
    unsigned int* ptr0;
    unsigned int v0;
    unsigned int v1;
    void* ptr1;
    int v2;
    char v3;
    unsigned int v4;
    int v5;
    int v6 = -1;
    int v7 = &unk_lib_sub3;
    int v8 = *(int*)__FS_BASE;
    int v9 = v5;
    int* ptr2 = (int*)(*(int*)&gvar_407000 ^ (int)&v2);
    *(int**)__FS_BASE = &v8;
    int* ptr3 = &ptr2;
    unsigned int v10 = 0;
    unsigned int v11 = std::char_traits<char>::length(_Str);
    unsigned int v12 = 0;
    unsigned int v13 = (unsigned int)MSVCP100.dll!?width@ios_base@std@@QBE_JXZ();
    unsigned int v14 = v4;
    if(v4 < 0x80000000 && (v4 != 0 || (v13 >= 0 && !(v13 ? 0: 1)))) {
        unsigned int v15 = (unsigned int)MSVCP100.dll!?width@ios_base@std@@QBE_JXZ();
        unsigned int v16 = v4;
        if(v4 >= 0x80000000 || (v4 == 0 && v15 <= v11)) {
            goto loc_401244;
        }
        else {
            unsigned int v17 = (unsigned int)MSVCP100.dll!?width@ios_base@std@@QBE_JXZ();
            v1 = v17 - v11;
            v0 = v4 - (unsigned int)(v17 < v11);
        }
    }
    else {
    loc_401244:
        v1 = 0;
        v0 = 0;
    }
    unsigned int v18 = v1;
    unsigned int v19 = v0;
    sub_401580(&v3, param0);
    int v20 = sub_401660((int)&v3);
    if(v20 == -1) {
        v10 |= 4;
    }
    else {
        v6 = 0;  // try{ (see catch:401412h)
        ptr0 = &ptr1;
        int v21 = MSVCP100.dll!?flags@ios_base@std@@QBEHXZ();
        if((unsigned int)(v21 & 0x1c0) != 64) {
            while(v19 < 0x80000000 && (v19 != 0 || (v18 >= 0 && !(v18 ? 0: 1)))) {
                --ptr0;
                *ptr0 = &loc_4012E0;
                int v22 = /*BAD_CALL!*/ MSVCP100.dll!?fill@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDXZ();
                --ptr0;
                *ptr0 = (unsigned int)(unsigned char)v22;
                --ptr0;
                *ptr0 = &loc_4012F5;
                int v23 = /*BAD_CALL!*/ MSVCP100.dll!?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
                --ptr0;
                *ptr0 = &loc_4012FD;
                int v24 = /*BAD_CALL!*/ MSVCP100.dll!?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHD@Z();
                --ptr0;
                *ptr0 = &loc_401305;
                int v25 = /*BAD_CALL!*/ sub_401570();
                --ptr0;
                *ptr0 = &v24;
                --ptr0;
                *ptr0 = &v25;
                --ptr0;
                *ptr0 = &loc_401315;
                int v26 = /*BAD_CALL!*/ sub_401550(*(unsigned int**)(ptr0 + 1), *(unsigned int**)(ptr0 + 2));
                ptr0 += 2;
                if((unsigned char)v26) {
                    v10 |= 4;
                    break;
                }
                else {
                    unsigned int v27 = v19 - (unsigned int)(v18 < 1);
                    --v18;
                    v19 = v27;
                }
            }
        }
        if(!v10) {
            --ptr0;
            *ptr0 = v12;
            --ptr0;
            *ptr0 = v11;
            --ptr0;
            *ptr0 = _Str;
            --ptr0;
            *ptr0 = &loc_40134F;
            int v28 = /*BAD_CALL!*/ MSVCP100.dll!?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
            --ptr0;
            *ptr0 = &loc_401357;
            unsigned int v29 = (unsigned int)/*BAD_CALL!*/ MSVCP100.dll!?sputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAE_JPBD_J@Z();
            unsigned int v30 = v4;
            if(v29 != v11 || v4 != v12) {
                v10 |= 4;
            }
        }
        if(!v10) {
            while(v19 < 0x80000000 && (v19 != 0 || (v18 >= 0 && !(v18 ? 0: 1)))) {
                --ptr0;
                *ptr0 = &loc_4013AF;
                int v31 = /*BAD_CALL!*/ MSVCP100.dll!?fill@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDXZ();
                --ptr0;
                *ptr0 = (unsigned int)(unsigned char)v31;
                --ptr0;
                *ptr0 = &loc_4013C4;
                int v32 = /*BAD_CALL!*/ MSVCP100.dll!?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
                --ptr0;
                *ptr0 = &loc_4013CC;
                int v33 = /*BAD_CALL!*/ MSVCP100.dll!?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHD@Z();
                --ptr0;
                *ptr0 = &loc_4013D4;
                int v34 = /*BAD_CALL!*/ sub_401570();
                --ptr0;
                *ptr0 = &v33;
                --ptr0;
                *ptr0 = &v34;
                --ptr0;
                *ptr0 = &loc_4013E4;
                int v35 = /*BAD_CALL!*/ sub_401550(*(unsigned int**)(ptr0 + 1), *(unsigned int**)(ptr0 + 2));
                ptr0 += 2;
                if((unsigned char)v35) {
                    v10 |= 4;
                    break;
                }
                else {
                    unsigned int v36 = v19 - (unsigned int)(v18 < 1);
                    --v18;
                    v19 = v36;
                }
            }
        }
        --ptr0;
        *ptr0 = 0;
        --ptr0;
        *ptr0 = 0;
        --ptr0;
        *ptr0 = &loc_401410;
        /*BAD_CALL!*/ MSVCP100.dll!?width@ios_base@std@@QAE_J_J@Z();
        v6 = -1;  // } (starts at 401285h)
    }
    --ptr0;
    *ptr0 = 0;
    --ptr0;
    *ptr0 = v10;
    --ptr0;
    *ptr0 = &loc_401452;
    /*BAD_CALL!*/ MSVCP100.dll!?setstate@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEXH_N@Z();
    int result = param0;
    --ptr0;
    *ptr0 = &loc_401460;
    /*BAD_CALL!*/ sub_401620(&v3);
    *(int*)__FS_BASE = v8;
    return result;
}

int sub_401550(unsigned int* param0, unsigned int* param1) {
    return *param0 != *param1 ? 0: 1;
}

int sub_401570() {
    return -1;
}

unsigned int* sub_401580(unsigned int* param0, int param1) {
    unsigned int* result = param0;
    sub_401690(result, param1);
    int v0 = MSVCP100.dll!?good@ios_base@std@@QBE_NXZ();
    if((unsigned char)v0) {
        int v1 = MSVCP100.dll!?tie@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_ostream@DU?$char_traits@D@std@@@2@XZ();
        if(v1) {
            int v2 = MSVCP100.dll!?tie@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_ostream@DU?$char_traits@D@std@@@2@XZ();
            MSVCP100.dll!?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@XZ();
        }
    }
    int v3 = MSVCP100.dll!?good@ios_base@std@@QBE_NXZ();
    *(char*)&result[1] = (unsigned char)v3;
    return result;
}

int sub_401620(unsigned int* param0) {
    unsigned int* ptr0 = param0;
    int v0 = MSVCP100.dll!?uncaught_exception@std@@YA_NXZ();
    if(!(unsigned char)v0) {
        MSVCP100.dll!?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ();
    }
    return sub_401700(param0);
}

int sub_401660(int param0) {
    int v0 = param0;
    return -1 - (*(unsigned char*)(param0 + 4) > 0 ? -1: 0);
}

unsigned int* sub_401690(unsigned int* param0, int param1) {
    unsigned int* result = param0;
    *result = param1;
    int v0 = MSVCP100.dll!?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
    if(v0) {
        int* ptr0 = (int*)MSVCP100.dll!?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
        int* ptr1 = ptr0;
        *(int*)(*ptr0 + 4)((int)ptr0);
    }
    return result;
}

int sub_401700(unsigned int* param0) {
    unsigned int* ptr0 = param0;
    int result = MSVCP100.dll!?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
    if(result) {
        int* ptr1 = (int*)MSVCP100.dll!?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
        int* ptr2 = ptr1;
        result = *(int*)(*ptr1 + 8)((int)ptr1);
    }
    return result;
}

unsigned int sub_40182C() {
    unsigned int result;
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    unsigned int* ptr0 = &v0;
    if(gvar_40749C == 0) {
        HeapSetInformation(NULL, 1, NULL, 0);
    }
    int v4 = 0;  // __try{ (see __except:401979h)
    unsigned int v5 = *(unsigned int*)(*(int*)(__FS_BASE + (int)(int*)0x18) + 4);
    unsigned int v6 = 0;
    while(1) {
        --ptr0;
        *ptr0 = 0;
        --ptr0;
        *ptr0 = v5;
        --ptr0;
        *ptr0 = 4224132;
        --ptr0;
        *ptr0 = &loc_40186A;
        LONG v7 = /*BAD_CALL!*/ InterlockedCompareExchange(*(LONG**)(ptr0 + 1), *(LONG*)(ptr0 + 2), *(LONG*)(ptr0 + 3));
        if(v7 == 0) {
            break;
        }
        else if(v7 == v5) {
            v6 = 1;
            break;
        }
        else {
            --ptr0;
            *ptr0 = 1000;
            --ptr0;
            *ptr0 = &loc_401885;
            /*BAD_CALL!*/ Sleep(*(DWORD*)(ptr0 + 1));
        }
    }
    if(gvar_407474 == 1) {
        --ptr0;
        *ptr0 = 31;
        --ptr0;
        *ptr0 = 0x40189a;
        /*NO_RETURN*/ →MSVCR100.dll!_amsg_exit(*(int*)(ptr0 + 1));
    }
    if(!gvar_407474) {
        gvar_407474 = 1;
        --ptr0;
        *ptr0 = 4216344;
        --ptr0;
        *ptr0 = 4215564;
        --ptr0;
        *ptr0 = &loc_4018BB;
        int v8 = /*BAD_CALL!*/ →MSVCR100.dll!_initterm_e(*(_PIFV**)(ptr0 + 1), *(_PIFV**)(ptr0 + 2));
        ptr0 += 2;
        if(!v8) {
            goto loc_4018DF;
        }
        else {
            result = 0xff;
        }
    }
    else {
        gvar_40713C = 1;
    loc_4018DF:
        if(gvar_407474 == 1) {
            --ptr0;
            *ptr0 = 0x405208;
            --ptr0;
            *ptr0 = 0x405000;
            --ptr0;
            *ptr0 = &loc_4018F0;
            /*BAD_CALL!*/ →MSVCR100.dll!_initterm(*(_PVFV**)(ptr0 + 1), *(_PVFV**)(ptr0 + 2));
            ptr0 += 2;
            gvar_407474 = 2;
        }
        if(v6 == 0) {
            --ptr0;
            *ptr0 = 0;
            --ptr0;
            *ptr0 = 4224132;
            --ptr0;
            *ptr0 = &loc_401909;
            /*BAD_CALL!*/ InterlockedExchange(*(LONG**)(ptr0 + 1), *(LONG*)(ptr0 + 2));
        }
        if(gvar_4074A0 != 0) {
            --ptr0;
            *ptr0 = &gvar_4074A0;
            --ptr0;
            *ptr0 = &loc_40191B;
            int v9 = /*BAD_CALL!*/ _IsNonwritableInCurrentImage(*(ptr0 + 1));
            ++ptr0;
            if(v9) {
                --ptr0;
                *ptr0 = 0;
                --ptr0;
                *ptr0 = 2;
                --ptr0;
                *ptr0 = 0;
                --ptr0;
                *ptr0 = &loc_40192A;
                /*BAD_CALL!*/ gvar_4074A0(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2), *(int*)(ptr0 + 3));
            }
        }
        *(unsigned int*)0x87FE = gvar_407124;
        --ptr0;
        *ptr0 = gvar_407124;
        --ptr0;
        *ptr0 = gvar_407128;
        --ptr0;
        *ptr0 = gvar_407120;
        --ptr0;
        *ptr0 = &loc_40194E;
        int v10 = /*BAD_CALL!*/ sub_401090(34814);
        ptr0 += 3;
        gvar_407138 = v10;
        if(gvar_40712C == 0) {
            --ptr0;
            *ptr0 = v10;
            --ptr0;
            *ptr0 = &loc_401965;
            /*NO_RETURN*/ exit(*(int*)(ptr0 + 1));
        }
        if(gvar_40713C == 0) {
            --ptr0;
            *ptr0 = &loc_4019A3;
            /*BAD_CALL!*/ cexit();
        }
        result = gvar_407138;
    }
    *(int*)(ptr0 - 1) = &loc_4019B4;
    *(int*)__FS_BASE = v1;
    return result;
}

int sub_401CBA() {
    return →MSVCR100.dll!_unlock();
}

int unk_lib_sub() {
    int result;
    int* ptr0 = (int*)&gvar_405C60;
    do {
        result = *ptr0;
        if(result) {
            result = result();
        }
        ++ptr0;
    }
    while((unsigned int)ptr0 < 4218208);
    return result;
}

int unk_lib_sub2() {
    int result;
    int* ptr0 = (int*)&gvar_405E68;
    do {
        result = *ptr0;
        if(result) {
            result = result();
        }
        ++ptr0;
    }
    while((unsigned int)ptr0 < 4218728);
    return result;
}

int unk_lib_sub3(int param0, int param1) {
    __security_check_cookie((uintptr_t)((param1 + 12) ^ *(int*)(param1 - 104)));
    return →MSVCR100.dll!__CxxFrameHandler3();
}

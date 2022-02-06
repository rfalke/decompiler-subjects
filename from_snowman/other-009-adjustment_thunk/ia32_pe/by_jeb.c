
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
    unsigned char v5 = *(int*)&gvar_405078;
    int v6 = v5 ^ &gvar_404338;
    int* ptr0 = (int*)(v5 ^ (int)&v0);
    *(int**)__FS_BASE = &v3;
    int* ptr1 = &ptr0;
    int v7 = 0;  // __try{ (see __except:401A1Eh)
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

int __ArrayUnwind(unsigned int param0, unsigned int param1, int param2, int param3) {
    int v0;
    int result = 20;
    --param2;
    while(param2 >= 0) {
        param0 -= param1;
        result = param3();
        --param2;
    }
    *(int*)__FS_BASE = v0;
    return result;
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
    gvar_4052C8 = v15;
    gvar_4052C4 = v17;
    gvar_4052C0 = v18;
    gvar_4052BC = v19;
    gvar_4052B8 = v16;
    gvar_4052B4 = v20;
    gvar_4052E0 = v21;
    gvar_4052D4 = v9;
    gvar_4052B0 = v10;
    gvar_4052AC = v22;
    gvar_4052A8 = v23;
    gvar_4052A4 = v11;
    gvar_4052D8 = (unsigned int)((unsigned int)&v13 < 808) | ((unsigned int)1 << 1) | ((unsigned int)__parity__((unsigned char)&v0 - 44) << 2) | ((unsigned int)0 << 3) | ((unsigned int)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v13 ^ 0x328) ^ (int)&v14) >>> 4) & 0x1) << 4) | ((unsigned int)0 << 5) | ((unsigned int)(&v0 == 812) << 6) | ((unsigned int)((int)&v14 < 0) << 7) | ((unsigned int)v1 << 8) | ((unsigned int)v2 << 9) | ((unsigned int)0 << 10) | ((unsigned int)((int)(int*)((int)(int*)((int)&v13 ^ (int)&v14) & (int)(int*)((int)&v13 ^ 0x328)) < 0) << 11) | ((unsigned int)v3 << 12) | ((unsigned int)v4 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v5 << 18) | ((unsigned int)v7 << 19) | ((unsigned int)v6 << 20) | ((unsigned int)v8 << 21) | ((unsigned int)0 << 22);
    gvar_4052CC = v24;
    gvar_4052D0 = v0;
    gvar_4052DC = &v12;
    gvar_405218 = 0x10001;
    gvar_4051CC = gvar_4052D0;
    gvar_4051C0 = 3221226505;
    gvar_4051C4 = 1;
    v14 = *(int*)&gvar_405078;
    unsigned int v25 = gvar_40507C;
    BOOL v26 = IsDebuggerPresent();
    gvar_405210 = v26;
    →MSVCR100.dll!_crt_debugger_hook();
    SetUnhandledExceptionFilter(NULL);
    UnhandledExceptionFilter((_EXCEPTION_POINTERS*)&gvar_4037B0);
    if(!gvar_405210) {
        →MSVCR100.dll!_crt_debugger_hook();
    }
    HANDLE hProcess = GetCurrentProcess();
    TerminateProcess(hProcess, 3221226505);
}

void __security_init_cookie() {
    int v0;
    int v1;
    unsigned int v2 = *(int*)&gvar_405078;
    int v3 = 0;
    int v4 = 0;
    if(v2 != -1153374642 && (v2 & 0xffff0000)) {
        gvar_40507C = ~v2;
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
        *(int*)&gvar_405078 = v9;
        gvar_40507C = ~v9;
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
    int v2 = &gvar_404318;
    int v3 = v1;
    PVOID v4 = DecodePointer(gvar_405508);
    PVOID Ptr = v4;
    if(v4 == -1) {
        result = onexit(_Func);
    }
    else {
        →MSVCR100.dll!_lock();
        v2 = 0;  // __try{ (see __finally:40186Ch)
        Ptr = DecodePointer(gvar_405508);
        PVOID Ptr1 = DecodePointer(gvar_4054F8);
        int* ptr0 = &Ptr1;
        int* ptr1 = &Ptr;
        PVOID v5 = EncodePointer(_Func);
        int v6 = →MSVCR100.dll!__dllonexit();
        PVOID v7 = EncodePointer(Ptr);
        gvar_405508 = v7;
        PVOID v8 = EncodePointer(Ptr1);
        gvar_4054F8 = v8;
        sub_40186C();
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

int `eh vector destructor iterator'(unsigned int param0, unsigned int param1, int param2, int param3) {
    int v0;
    param0 = (unsigned int)(param1 * param2 + param0);
    --param2;
    while(param2 >= 0) {
        param0 -= param1;
        param3();
        --param2;
    }
    int result = sub_40175F();
    *(int*)__FS_BASE = v0;
    return result;
}

int atexit(FUNCPTR _) {
    _onexit_t v0 = _onexit((_onexit_t)_);
    return -1 - ((unsigned int)v0 > 0 ? 0xffffffff: 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    __security_init_cookie();
    return sub_401410();
}

int sub_401005(int param0) {
    return param0 - 12;
}

int* sub_40100A(int* param0, char param1) {
    char v0 = param1 & 0x1 ? 0: 1;
    *param0 = &const B::`vftable';
    if(!v0) {
        →MSVCR100.dll!??3@YAXPAX@Z();
    }
    return param0;
}

int* sub_401014(unsigned int param0, char param1) {
    return sub_401023((int*)(param0 - 16), param1);
}

int sub_401019(int param0) {
    return param0 - 4;
}

int* sub_401023(int* param0, char param1) {
    char v0 = param1 & 0x1 ? 0: 1;
    *(param0 + 4) = &const B::`vftable';
    *(param0 + 2) = &const A::`vftable';
    *param0 = &const Z::`vftable';
    if(!v0) {
        →MSVCR100.dll!??3@YAXPAX@Z();
    }
    return param0;
}

int* sub_401028(unsigned int param0, char param1) {
    return sub_401023((int*)(param0 - 8), param1);
}

int* sub_401041(int* param0, char param1) {
    char v0 = param1 & 0x1 ? 0: 1;
    *param0 = &const Z::`vftable';
    if(!v0) {
        →MSVCR100.dll!??3@YAXPAX@Z();
    }
    return param0;
}

int sub_401064() {
    return →MSVCR100.dll!??2@YAPAXI@Z();
}

int sub_401069() {
    return →MSVCR100.dll!??2@YAPAXI@Z();
}

int sub_40106E() {
    int v0 = →MSVCR100.dll!??2@YAPAXI@Z();
    if(v0) {
        *(int*)(v0 + 4) = 10;
        *(int*)(v0 + 8) = &const A::`vftable';
        *(int*)(v0 + 16) = &const B::`vftable';
        *(int*)v0 = &const C::`vftable'3;
        *(int*)(v0 + 8) = &const C::`vftable'2;
        *(int*)(v0 + 16) = &const C::`vftable';
        **(unsigned int*)(v0 + 16)();
    }
    else {
        **(unsigned int*)0x10();
    }
    return 0;
}

int* sub_401073(int* param0, char param1) {
    char v0 = param1 & 0x1 ? 0: 1;
    *param0 = &const A::`vftable';
    if(!v0) {
        →MSVCR100.dll!??3@YAXPAX@Z();
    }
    return param0;
}

unsigned int sub_401410() {
    unsigned int result;
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    unsigned int* ptr0 = &v0;
    if(gvar_40550C == 0) {
        HeapSetInformation(NULL, 1, NULL, 0);
    }
    int v4 = 0;  // __try{ (see __except:40155Dh)
    unsigned int v5 = *(unsigned int*)(*(int*)(__FS_BASE + (int)(int*)0x18) + 4);
    unsigned int v6 = 0;
    while(1) {
        --ptr0;
        *ptr0 = 0;
        --ptr0;
        *ptr0 = v5;
        --ptr0;
        *ptr0 = 0x4054f4;
        --ptr0;
        *ptr0 = &loc_40144E;
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
            *ptr0 = &loc_401469;
            /*BAD_CALL!*/ Sleep(*(DWORD*)(ptr0 + 1));
        }
    }
    if(gvar_4054E4 == 1) {
        --ptr0;
        *ptr0 = 31;
        --ptr0;
        *ptr0 = 4199550;
        /*NO_RETURN*/ →MSVCR100.dll!_amsg_exit(*(int*)(ptr0 + 1));
    }
    if(!gvar_4054E4) {
        gvar_4054E4 = 1;
        --ptr0;
        *ptr0 = 4208152;
        --ptr0;
        *ptr0 = 0x40330c;
        --ptr0;
        *ptr0 = &loc_40149F;
        int v8 = /*BAD_CALL!*/ →MSVCR100.dll!_initterm_e(*(_PIFV**)(ptr0 + 1), *(_PIFV**)(ptr0 + 2));
        ptr0 += 2;
        if(!v8) {
            goto loc_4014C3;
        }
        else {
            result = 0xff;
        }
    }
    else {
        gvar_4051AC = 1;
    loc_4014C3:
        if(gvar_4054E4 == 1) {
            --ptr0;
            *ptr0 = 4207112;
            --ptr0;
            *ptr0 = 0x403000;
            --ptr0;
            *ptr0 = &loc_4014D4;
            /*BAD_CALL!*/ →MSVCR100.dll!_initterm(*(_PVFV**)(ptr0 + 1), *(_PVFV**)(ptr0 + 2));
            ptr0 += 2;
            gvar_4054E4 = 2;
        }
        if(v6 == 0) {
            --ptr0;
            *ptr0 = 0;
            --ptr0;
            *ptr0 = 0x4054f4;
            --ptr0;
            *ptr0 = &loc_4014ED;
            /*BAD_CALL!*/ InterlockedExchange(*(LONG**)(ptr0 + 1), *(LONG*)(ptr0 + 2));
        }
        if(gvar_405510 != 0) {
            --ptr0;
            *ptr0 = &gvar_405510;
            --ptr0;
            *ptr0 = &loc_4014FF;
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
                *ptr0 = &loc_40150E;
                /*BAD_CALL!*/ gvar_405510(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2), *(int*)(ptr0 + 3));
            }
        }
        *(unsigned int*)0x62F0 = gvar_405194;
        --ptr0;
        *ptr0 = gvar_405194;
        --ptr0;
        *ptr0 = gvar_405198;
        --ptr0;
        *ptr0 = gvar_405190;
        --ptr0;
        *ptr0 = &loc_401532;
        int v10 = /*BAD_CALL!*/ sub_40106E();
        ptr0 += 3;
        gvar_4051A8 = v10;
        if(gvar_40519C == 0) {
            --ptr0;
            *ptr0 = v10;
            --ptr0;
            *ptr0 = &loc_401549;
            /*NO_RETURN*/ exit(*(int*)(ptr0 + 1));
        }
        if(gvar_4051AC == 0) {
            --ptr0;
            *ptr0 = &loc_401587;
            /*BAD_CALL!*/ cexit();
        }
        result = gvar_4051A8;
    }
    *(int*)(ptr0 - 1) = &loc_401598;
    *(int*)__FS_BASE = v1;
    return result;
}

int sub_40175F() {
    int result;
    int v0;
    if(!*(int*)(v0 - 28)) {
        result = __ArrayUnwind(*(unsigned int*)(v0 + 8), *(unsigned int*)(v0 + 12), *(int*)(v0 + 16), *(int*)(v0 + 20));
    }
    return result;
}

int sub_40186C() {
    return →MSVCR100.dll!_unlock();
}

// Package: type_info

int* type_info::`vector deleting destructor'(unsigned int param0, char param1) {
    int* result;
    if((param1 & 0x2)) {
        `eh vector destructor iterator'(param0, 12, *(int*)(param0 - 4), &→MSVCR100.dll!?_type_info_dtor_internal_method@type_info@@QAEXXZ);
        if((param1 & 0x1)) {
            →MSVCR100.dll!??3@YAXPAX@Z();
        }
        result = (int*)(param0 - 4);
    }
    else {
        →MSVCR100.dll!?_type_info_dtor_internal_method@type_info@@QAEXXZ();
        if((param1 & 0x1)) {
            →MSVCR100.dll!??3@YAXPAX@Z();
        }
        result = (int*)param0;
    }
    return result;
}

int unk_lib_sub() {
    int result;
    int* ptr0 = (int*)&gvar_403EA8;
    do {
        result = *ptr0;
        if(result) {
            result = result();
        }
        ++ptr0;
    }
    while((unsigned int)ptr0 < 4210600);
    return result;
}

int unk_lib_sub2() {
    int result;
    int* ptr0 = (int*)&gvar_4040B0;
    do {
        result = *ptr0;
        if(result) {
            result = result();
        }
        ++ptr0;
    }
    while((unsigned int)ptr0 < 4211120);
    return result;
}

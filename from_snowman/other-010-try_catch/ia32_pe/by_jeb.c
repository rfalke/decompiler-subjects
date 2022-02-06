
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
    unsigned char v5 = *(int*)&gvar_406020;
    int v6 = v5 ^ &gvar_4051C8;
    int* ptr0 = (int*)(v5 ^ (int)&v0);
    *(int**)__FS_BASE = &v3;
    int* ptr1 = &ptr0;
    int v7 = 0;  // __try{ (see __except:40188Eh)
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
    gvar_406290 = v15;
    gvar_40628C = v17;
    gvar_406288 = v18;
    gvar_406284 = v19;
    gvar_406280 = v16;
    gvar_40627C = v20;
    gvar_4062A8 = v21;
    gvar_40629C = v9;
    gvar_406278 = v10;
    gvar_406274 = v22;
    gvar_406270 = v23;
    gvar_40626C = v11;
    gvar_4062A0 = (unsigned int)((unsigned int)&v13 < 808) | ((unsigned int)1 << 1) | ((unsigned int)__parity__((unsigned char)&v0 - 44) << 2) | ((unsigned int)0 << 3) | ((unsigned int)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v13 ^ 0x328) ^ (int)&v14) >>> 4) & 0x1) << 4) | ((unsigned int)0 << 5) | ((unsigned int)(&v0 == 812) << 6) | ((unsigned int)((int)&v14 < 0) << 7) | ((unsigned int)v1 << 8) | ((unsigned int)v2 << 9) | ((unsigned int)0 << 10) | ((unsigned int)((int)(int*)((int)(int*)((int)&v13 ^ (int)&v14) & (int)(int*)((int)&v13 ^ 0x328)) < 0) << 11) | ((unsigned int)v3 << 12) | ((unsigned int)v4 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v5 << 18) | ((unsigned int)v7 << 19) | ((unsigned int)v6 << 20) | ((unsigned int)v8 << 21) | ((unsigned int)0 << 22);
    gvar_406294 = v24;
    gvar_406298 = v0;
    gvar_4062A4 = &v12;
    gvar_4061E0 = 0x10001;
    gvar_406194 = gvar_406298;
    gvar_406188 = 3221226505;
    gvar_40618C = 1;
    v14 = *(int*)&gvar_406020;
    unsigned int v25 = gvar_406024;
    BOOL v26 = IsDebuggerPresent();
    gvar_4061D8 = v26;
    →MSVCR100.dll!_crt_debugger_hook();
    SetUnhandledExceptionFilter(NULL);
    UnhandledExceptionFilter((_EXCEPTION_POINTERS*)&gvar_40474C);
    if(!gvar_4061D8) {
        →MSVCR100.dll!_crt_debugger_hook();
    }
    HANDLE hProcess = GetCurrentProcess();
    TerminateProcess(hProcess, 3221226505);
}

void __security_check_cookie(uintptr_t _StackCookie) {
    char v0 = *(int*)&gvar_406020 == _StackCookie;
    char v1 = (char)*(int*)&gvar_406020 > (int)_StackCookie;
    char v2 = __parity__((unsigned char)_StackCookie - (unsigned char)*(int*)&gvar_406020);
    char v3 = *(int*)&gvar_406020 > _StackCookie;
    char v4 = (int)(((unsigned int)(_StackCookie - *(int*)&gvar_406020) ^ _StackCookie) & (unsigned int)(*(int*)&gvar_406020 ^ _StackCookie)) < 0;
    char v5 = (((unsigned int)(_StackCookie - *(int*)&gvar_406020) ^ (unsigned int)(*(int*)&gvar_406020 ^ _StackCookie)) >>> 4) & 0x1;
    if(!v0) {
        /*NO_RETURN*/ __report_gsfailure();
    }
}

void __security_init_cookie() {
    int v0;
    int v1;
    unsigned int v2 = *(int*)&gvar_406020;
    int v3 = 0;
    int v4 = 0;
    if(v2 != -1153374642 && (v2 & 0xffff0000)) {
        gvar_406024 = ~v2;
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
        *(int*)&gvar_406020 = v9;
        gvar_406024 = ~v9;
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
    int v2 = &gvar_4051A8;
    int v3 = v1;
    PVOID v4 = DecodePointer(gvar_4064E0);
    PVOID Ptr = v4;
    if(v4 == -1) {
        result = onexit(_Func);
    }
    else {
        →MSVCR100.dll!_lock();
        v2 = 0;  // __try{ (see __finally:4016D4h)
        Ptr = DecodePointer(gvar_4064E0);
        PVOID Ptr1 = DecodePointer(gvar_4064D0);
        int* ptr0 = &Ptr1;
        int* ptr1 = &Ptr;
        PVOID v5 = EncodePointer(_Func);
        int v6 = →MSVCR100.dll!__dllonexit();
        PVOID v7 = EncodePointer(Ptr);
        gvar_4064E0 = v7;
        PVOID v8 = EncodePointer(Ptr1);
        gvar_4064D0 = v8;
        sub_4016D4();
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
    int result = sub_4015C7();
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
    return sub_40116C();
}

int sub_401010() {
    char v0;
    char v1;
    int v2;
    int v3;
    int* ptr0 = &v2;
    int v4 = &unk_lib_sub3;
    int v5 = *(int*)__FS_BASE;
    int v6 = *(int*)__FS_BASE;
    int* ptr1 = &v6;
    char v7 = &v0 == 32;
    char v8 = (int)&v1 < 0;
    char v9 = __parity__((unsigned char)&v0 - 32);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v6 ^ 0x10) ^ (int)&v1) >>> 4) & 0x1);
    char v11 = (unsigned int)&v6 < 16;
    char v12 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&v1) & (int)(int*)((int)&v6 ^ 0x10)) < 0;
    int v13 = v3;
    unsigned char v14 = *(int*)&gvar_406020;
    int* ptr2 = (int*)(v14 ^ (int)&v2);
    char v15 = ptr2 ? 0: 1;
    char v16 = (int)ptr2 < 0;
    char v17 = __parity__((unsigned char)ptr2);
    char v18 = 0;
    char v19 = 0;
    int* ptr3 = ptr2;
    int* ptr4 = &v6;
    *(int**)__FS_BASE = &v6;
    int* ptr5 = &ptr3;
    int v20 = 0;
    char v21 = 1;
    char v22 = 0;
    char v23 = 1;
    char v24 = 0;
    char v25 = 0;
    int v26 = 0;  // try{ (see catch:40105Fh)
    int v27 = 1;
    int v28 = "DRAMA!";
    void* ptr6 = &v28;
    /*NO_RETURN*/ →MSVCR100.dll!_CxxThrowException(&v28, (_ThrowInfo*)0x405080);  // } (starts at 401040h)
}

int sub_40116C() {
    int result;
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    unsigned int* ptr0 = &v0;
    if(gvar_4064E4 == 0) {
        HeapSetInformation(NULL, 1, NULL, 0);
    }
    int v4 = 0;  // __try{ (see __except:4012B9h)
    unsigned int v5 = *(unsigned int*)(*(int*)(__FS_BASE + (int)(int*)0x18) + 4);
    unsigned int v6 = 0;
    while(1) {
        --ptr0;
        *ptr0 = 0;
        --ptr0;
        *ptr0 = v5;
        --ptr0;
        *ptr0 = 4220108;
        --ptr0;
        *ptr0 = &loc_4011AA;
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
            *ptr0 = &loc_4011C5;
            /*BAD_CALL!*/ Sleep(*(DWORD*)(ptr0 + 1));
        }
    }
    if(gvar_4064BC == 1) {
        --ptr0;
        *ptr0 = 31;
        --ptr0;
        *ptr0 = 4198874;
        /*NO_RETURN*/ →MSVCR100.dll!_amsg_exit(*(int*)(ptr0 + 1));
    }
    if(!gvar_4064BC) {
        gvar_4064BC = 1;
        --ptr0;
        *ptr0 = 4212248;
        --ptr0;
        *ptr0 = 4211468;
        --ptr0;
        *ptr0 = &loc_4011FB;
        int v8 = /*BAD_CALL!*/ →MSVCR100.dll!_initterm_e(*(_PIFV**)(ptr0 + 1), *(_PIFV**)(ptr0 + 2));
        ptr0 += 2;
        if(!v8) {
            goto loc_40121F;
        }
        else {
            result = 0xff;
        }
    }
    else {
        gvar_406184 = 1;
    loc_40121F:
        if(gvar_4064BC == 1) {
            --ptr0;
            *ptr0 = 4211208;
            --ptr0;
            *ptr0 = 0x404000;
            --ptr0;
            *ptr0 = &loc_401230;
            /*BAD_CALL!*/ →MSVCR100.dll!_initterm(*(_PVFV**)(ptr0 + 1), *(_PVFV**)(ptr0 + 2));
            ptr0 += 2;
            gvar_4064BC = 2;
        }
        if(v6 == 0) {
            --ptr0;
            *ptr0 = 0;
            --ptr0;
            *ptr0 = 4220108;
            --ptr0;
            *ptr0 = &loc_401249;
            /*BAD_CALL!*/ InterlockedExchange(*(LONG**)(ptr0 + 1), *(LONG*)(ptr0 + 2));
        }
        if(gvar_4064E8 != 0) {
            --ptr0;
            *ptr0 = &gvar_4064E8;
            --ptr0;
            *ptr0 = &loc_40125B;
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
                *ptr0 = &loc_40126A;
                /*BAD_CALL!*/ gvar_4064E8(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2), *(int*)(ptr0 + 3));
            }
        }
        *(unsigned int*)0x7314 = gvar_40616C;
        --ptr0;
        *ptr0 = gvar_40616C;
        --ptr0;
        *ptr0 = gvar_406170;
        --ptr0;
        *ptr0 = gvar_406168;
        --ptr0;
        *ptr0 = 0x40128e;
        result = /*NO_RETURN*/ sub_401010();
    }
    *(int*)(ptr0 - 1) = &loc_4012F4;
    *(int*)__FS_BASE = v1;
    return result;
}

int sub_4015C7() {
    int result;
    int v0;
    if(!*(int*)(v0 - 28)) {
        result = __ArrayUnwind(*(unsigned int*)(v0 + 8), *(unsigned int*)(v0 + 12), *(int*)(v0 + 16), *(int*)(v0 + 20));
    }
    return result;
}

int sub_4016D4() {
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
    int* ptr0 = (int*)&gvar_404C70;
    do {
        result = *ptr0;
        if(result) {
            result = result();
        }
        ++ptr0;
    }
    while((unsigned int)ptr0 < 4214128);
    return result;
}

int unk_lib_sub2() {
    int result;
    int* ptr0 = (int*)&gvar_404E78;
    do {
        result = *ptr0;
        if(result) {
            result = result();
        }
        ++ptr0;
    }
    while((unsigned int)ptr0 < 4214648);
    return result;
}

int unk_lib_sub3(int param0, int param1) {
    __security_check_cookie((uintptr_t)((param1 + 12) ^ *(int*)(param1 - 32)));
    return →MSVCR100.dll!__CxxFrameHandler3();
}

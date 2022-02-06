
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
    if(v4 != 0) {
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
    unsigned char v5 = *(int*)&gvar_403000;
    int v6 = v5 ^ &gvar_402218;
    int* ptr0 = (int*)(v5 ^ (int)&v0);
    *(int**)__FS_BASE = &v3;
    int* ptr1 = &ptr0;
    int v7 = 0;  // __try{ (see __except:40188Fh)
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
            /*NO_RETURN*/ →MSVCR90.dll!?terminate@@YAXXZ();
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
    gvar_403140 = v15;
    gvar_40313C = v17;
    gvar_403138 = v18;
    gvar_403134 = v19;
    gvar_403130 = v16;
    gvar_40312C = v20;
    gvar_403158 = v21;
    gvar_40314C = v9;
    gvar_403128 = v10;
    gvar_403124 = v22;
    gvar_403120 = v23;
    gvar_40311C = v11;
    gvar_403150 = (unsigned int)((unsigned int)&v13 < 808) | ((unsigned int)1 << 1) | ((unsigned int)__parity__((unsigned char)&v0 - 44) << 2) | ((unsigned int)0 << 3) | ((unsigned int)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v13 ^ 0x328) ^ (int)&v14) >>> 4) & 0x1) << 4) | ((unsigned int)0 << 5) | ((unsigned int)(&v0 == 812) << 6) | ((unsigned int)((int)&v14 < 0) << 7) | ((unsigned int)v1 << 8) | ((unsigned int)v2 << 9) | ((unsigned int)0 << 10) | ((unsigned int)((int)(int*)((int)(int*)((int)&v13 ^ (int)&v14) & (int)(int*)((int)&v13 ^ 0x328)) < 0) << 11) | ((unsigned int)v3 << 12) | ((unsigned int)v4 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v5 << 18) | ((unsigned int)v7 << 19) | ((unsigned int)v6 << 20) | ((unsigned int)v8 << 21) | ((unsigned int)0 << 22);
    gvar_403144 = v24;
    gvar_403148 = v0;
    gvar_403154 = &v12;
    gvar_403090 = 0x10001;
    gvar_403044 = gvar_403148;
    gvar_403038 = 3221226505;
    gvar_40303C = 1;
    v14 = *(int*)&gvar_403000;
    unsigned int v25 = gvar_403004;
    BOOL v26 = IsDebuggerPresent();
    gvar_403088 = v26;
    →MSVCR90.dll!_crt_debugger_hook();
    SetUnhandledExceptionFilter(NULL);
    UnhandledExceptionFilter((_EXCEPTION_POINTERS*)&gvar_4020FC);
    if(!gvar_403088) {
        →MSVCR90.dll!_crt_debugger_hook();
    }
    HANDLE hProcess = GetCurrentProcess();
    TerminateProcess(hProcess, 3221226505);
}

void __security_check_cookie(uintptr_t _StackCookie) {
    char v0 = *(int*)&gvar_403000 == _StackCookie;
    char v1 = (char)*(int*)&gvar_403000 > (int)_StackCookie;
    char v2 = __parity__((unsigned char)_StackCookie - (unsigned char)*(int*)&gvar_403000);
    char v3 = *(int*)&gvar_403000 > _StackCookie;
    char v4 = (int)(((unsigned int)(_StackCookie - *(int*)&gvar_403000) ^ _StackCookie) & (unsigned int)(*(int*)&gvar_403000 ^ _StackCookie)) < 0;
    char v5 = (((unsigned int)(_StackCookie - *(int*)&gvar_403000) ^ (unsigned int)(*(int*)&gvar_403000 ^ _StackCookie)) >>> 4) & 0x1;
    if(!v0) {
        /*NO_RETURN*/ __report_gsfailure();
    }
}

void __security_init_cookie() {
    int v0;
    int v1;
    unsigned int v2 = *(int*)&gvar_403000;
    int v3 = 0;
    int v4 = 0;
    if(v2 != -1153374642 && (v2 & 0xffff0000)) {
        gvar_403004 = ~v2;
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
            v9 |= v9 * 0x10000;
        }
        *(int*)&gvar_403000 = v9;
        gvar_403004 = ~v9;
    }
}

int _except_handler4(int param0, int param1, int param2, int param3) {
    return →MSVCR90.dll!_except_handler4_common();
}

_onexit_t _onexit(_onexit_t _Func) {
    _onexit_t result;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10 = &gvar_4021F8;
    unsigned int v11 = (unsigned int)MSVCR90.dll!_decode_pointer((int)gvar_40337C, v7, v8, v9);
    unsigned int v12 = v11;
    if(v11 == -1) {
        result = onexit(_Func);
    }
    else {
        →MSVCR90.dll!_lock();
        v10 = 0;  // __try{ (see __finally:4016EEh)
        v12 = (unsigned int)MSVCR90.dll!_decode_pointer((int)gvar_40337C, v2, v0, v3);
        int v13 = MSVCR90.dll!_decode_pointer((int)gvar_403378, v1, v2, v0);
        int v14 = MSVCR90.dll!_encode_pointer((int)_Func, (int)&v12, (int)&v13);
        int v15 = →MSVCR90.dll!__dllonexit();
        unsigned int v16 = (unsigned int)MSVCR90.dll!_encode_pointer((int)v12, v14, v4);
        gvar_40337C = v16;
        unsigned int v17 = (unsigned int)MSVCR90.dll!_encode_pointer(v13, v5, v14);
        gvar_403378 = v17;
        sub_4016EE();
        result = (_onexit_t)v15;
    }
    *(int*)__FS_BASE = v6;
    return result;
}

errno_t _setdefaultprecision() {
    errno_t result = →MSVCR90.dll!_controlfp_s(NULL, 0x10000, 0x30000);
    if(result) {
        /*NO_RETURN*/ →MSVCR90.dll!_invoke_watson(NULL, NULL, NULL, 0, 0);
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
    return sub_401295();
}

int sub_401000(int param0, unsigned int param1) {
    unsigned int v0;
    char* ptr0;
    int v1;
    char v2;
    int v3;
    short v4;
    char v5;
    int result;
    int v6;
    int* ptr1 = (int*)(*(int*)&gvar_403000 ^ (int)&v1);
    int v7 = v3;
    unsigned int v8 = param1;
    v1 = param0;
    int v9 = /*BAD_CALL!*/ sprintf(&v4, "%08lX:", v6);
    if((int)v8 > 16) {
        v8 = 16;
    }
    unsigned int v10 = 0;
    if((int)v8 > 0) {
        char* _Buffer = &v2;
        do {
            ptr0 = (char*)*(char*)(v10 + v1);
            int v11 = sprintf(_Buffer, " %02lX");
            ++v10;
            _Buffer += 3;
        }
        while((int)v8 > (int)v10);
        if((int)v10 < 16) {
            goto loc_40107C;
        }
    }
    else {
    loc_40107C:
        v0 = (unsigned int)(16 - v10);
        do {
            int* ptr2 = (int*)((char*)&v1 + 3);
            do {
                v5 = *(char*)((char*)ptr2 + 1);
                ptr2 = (int*)((char*)ptr2 + 1);
            }
            while(v5);
            --v0;
            *ptr2 = 0x202020;
        }
        while(v0);
    }
    char* ptr3 = &v4;
    do {
        v0 = (unsigned int)ptr3[0] | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr3;
    }
    while((unsigned char)v0);
    int* ptr4 = (int*)((int)ptr3 - (int)(int*)(&v4 + 1));
    *(int*)((int)ptr4 + (int)&v4) = 0x7c2020;
    int* ptr5 = (int*)((char*)ptr4 + 3);
    unsigned int v12 = 0;
    if((int)v8 > 0) {
        int* ptr6 = (int*)((int)ptr5 + (int)&v4);
        do {
            ptr4 = (unsigned int)*(char*)(v12 + v1) | ((unsigned int)(int*)((int)(int*)((int)ptr4 >>> 8) & 0xffffff) << 8);
            if(*(unsigned char*)(v12 + v1) >= 32) {
                char v13 = (unsigned char)ptr4 == 126;
                char v14 = (unsigned char)ptr4 < 126;
                ptr4 = (int*)(unsigned char)ptr4;
                if(!v14 && !v13) {
                    goto loc_4010D2;
                }
            }
            else {
            loc_4010D2:
                ptr4 = (int*)0x2E;
            }
            *(char*)((int)ptr6 + v12) = (unsigned char)ptr4;
            ++v12;
        }
        while((int)v8 > (int)v12);
        if((int)v12 < 16) {
            goto loc_4010F6;
        }
    }
    else {
    loc_4010F6:
        →MSVCR90.dll!memset((void*)((int)(int*)((int)ptr5 + v12) + (int)&v4), 32, (size_t)(16 - v12));
        v12 = (unsigned int)((size_t)(16 - v12) + v12);
    }
    ptr0 = &v4;
    char* _Format = (char*)&gvar_402118;
    *(short*)((int)(int*)((int)ptr5 + v12) + (int)&v4) = 124;
    printf(_Format, ptr0);
    __security_check_cookie((uintptr_t)((int)&v1 ^ (int)ptr1));
    return result;
}

int sub_401140(char* _FileName) {
    char v0;
    unsigned int v1;
    char v2;
    int result;
    int v3;
    int* ptr0 = (int*)(*(int*)&gvar_403000 ^ (int)&v0);
    int v4 = v3;
    int v5 = stat64i32(_FileName, &v0);
    if(!v5) {
        FILE* _Stream = fopen(_FileName, (char*)&gvar_40211C);
        if(_Stream) {
            unsigned int v6 = 0;
            if(v1 > 0) {
                do {
                    unsigned int v7 = fread(&v2, 1, 16, _Stream);
                    if(!v7) {
                        break;
                    }
                    else {
                        sub_401000((int)&v2, v7);
                        v6 += v7;
                    }
                }
                while(v6 < v1);
            }
            fclose(_Stream);
            __security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr0));
            return result;
        }
    }
    perror(_FileName);
    __security_check_cookie((uintptr_t)((int)&v0 ^ (int)ptr0));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401200(unsigned int param0, int param1) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = v1;
    int result = 0;
    unsigned int v4 = 1;
    if((int)param0 > 1) {
        do {
            int v5 = sub_401140(*(int*)(v4 * 4 + param1));
            ++v4;
            result += v5;
        }
        while((int)v4 < (int)param0);
    }
    return result;
}

unsigned int sub_401295() {
    unsigned int result;
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    unsigned int* ptr0 = &v0;
    int v4 = 0;  // __try{ (see __except:4013CFh)
    unsigned int v5 = *(unsigned int*)(*(int*)(__FS_BASE + (int)(int*)0x18) + 4);
    unsigned int v6 = 0;
    while(1) {
        --ptr0;
        *ptr0 = 0;
        --ptr0;
        *ptr0 = v5;
        --ptr0;
        *ptr0 = 0x403374;
        --ptr0;
        *ptr0 = &loc_4012C0;
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
            *ptr0 = &loc_4012DB;
            /*BAD_CALL!*/ Sleep(*(DWORD*)(ptr0 + 1));
        }
    }
    if(gvar_403370 == 1) {
        --ptr0;
        *ptr0 = 31;
        --ptr0;
        *ptr0 = 0x4012f0;
        /*NO_RETURN*/ →MSVCR90.dll!_amsg_exit(*(int*)(ptr0 + 1));
    }
    if(!gvar_403370) {
        gvar_403370 = 1;
        --ptr0;
        *ptr0 = 0x4020dc;
        --ptr0;
        *ptr0 = 4202704;
        --ptr0;
        *ptr0 = &loc_401311;
        int v8 = /*BAD_CALL!*/ →MSVCR90.dll!_initterm_e(*(_PIFV**)(ptr0 + 1), *(_PIFV**)(ptr0 + 2));
        ptr0 += 2;
        if(!v8) {
            goto loc_401335;
        }
        else {
            result = 0xff;
        }
    }
    else {
        gvar_403034 = 1;
    loc_401335:
        if(gvar_403370 == 1) {
            --ptr0;
            *ptr0 = 4202700;
            --ptr0;
            *ptr0 = 0x4020c4;
            --ptr0;
            *ptr0 = &loc_401346;
            /*BAD_CALL!*/ →MSVCR90.dll!_initterm(*(_PVFV**)(ptr0 + 1), *(_PVFV**)(ptr0 + 2));
            ptr0 += 2;
            gvar_403370 = 2;
        }
        if(v6 == 0) {
            --ptr0;
            *ptr0 = 0;
            --ptr0;
            *ptr0 = 0x403374;
            --ptr0;
            *ptr0 = &loc_40135F;
            /*BAD_CALL!*/ InterlockedExchange(*(LONG**)(ptr0 + 1), *(LONG*)(ptr0 + 2));
        }
        if(gvar_403380 != 0) {
            --ptr0;
            *ptr0 = &gvar_403380;
            --ptr0;
            *ptr0 = &loc_401371;
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
                *ptr0 = &loc_401380;
                /*BAD_CALL!*/ gvar_403380(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2), *(int*)(ptr0 + 3));
            }
        }
        *(unsigned int*)0x23CC = gvar_40301C;
        --ptr0;
        *ptr0 = gvar_40301C;
        --ptr0;
        *ptr0 = gvar_403020;
        --ptr0;
        *ptr0 = gvar_403018;
        --ptr0;
        *ptr0 = &loc_4013A4;
        int v10 = /*BAD_CALL!*/ sub_401200(*(ptr0 + 1), *(int*)(ptr0 + 2));
        ptr0 += 3;
        gvar_403030 = v10;
        if(gvar_403024 == 0) {
            --ptr0;
            *ptr0 = v10;
            --ptr0;
            *ptr0 = &loc_4013BB;
            /*NO_RETURN*/ exit(*(int*)(ptr0 + 1));
        }
        if(gvar_403034 == 0) {
            --ptr0;
            *ptr0 = &loc_4013F9;
            /*BAD_CALL!*/ cexit();
        }
        result = gvar_403030;
    }
    *(int*)(ptr0 - 1) = &loc_40140A;
    *(int*)__FS_BASE = v1;
    return result;
}

int sub_4016EE() {
    return →MSVCR90.dll!_unlock();
}

int unk_lib_sub() {
    return &gvar_4021C8;
}

int unk_lib_sub2() {
    return &gvar_4021D0;
}

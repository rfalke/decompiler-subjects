
long long FindPESection(long long param0, unsigned long long param1) {
    unsigned int v0 = 0;
    long long v1 = (long long)*(int*)(param0 + 60L) + param0;
    long long v2 = (unsigned long long)*(short*)(v1 + 6L);
    long long result = (unsigned long long)*(short*)(v1 + 20L) + v1 + 24L;
    if((unsigned int)v2) {
        while((unsigned long long)*(int*)(result + 12L) > param1 || (unsigned long long)(*(int*)(result + 12L) + *(int*)(result + 8L)) <= param1) {
            ++v0;
            result += 40L;
            if((unsigned int)v2 <= v0) {
                return 0L;
            }
        }
        return result;
    }
    return 0L;
}

long long IsNonwritableInCurrentImage$filt$0(unsigned long long* param0, long long param1) {
    return **param0 != 0xc0000005 ? 0L: 1L;
}

long long IsNonwritableInCurrentImage(long long param0) {
    long long v0;
    unsigned long long v1;
    long long result = ValidateImageBase((unsigned short*)&MZHeader);
    if((unsigned int)result) {
        result = FindPESection(v0, v1 - v0);
        if(result) {
            result = (long long)(~(*(int*)(result + 36L) >>> 31) & 0x1);
        }
    }
    return result;
}

long long ValidateImageBase(unsigned short* param0) {
    if(*param0 != 23117) {
        return 0L;
    }
    unsigned int* ptr0 = (unsigned int*)((long long)*(int*)(param0 + 30) + (long long)param0);
    long long result = 0L;
    if(*ptr0 == 0x4550) {
        result = *(short*)(ptr0 + 6) != 523 ? 0L: 1L;
    }
    return result;
}

long long _CxxSetUnhandledExceptionFilter() {
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&__CxxUnhandledExceptionFilter);
    return 0L;
}

long long _GSHandlerCheck(long long param0, long long param1, long long param2, long long param3) {
    GSHandlerCheckCommon(param1, param3, *(int**)(param3 + 56L));
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
int GSHandlerCheckCommon(long long param0, long long param1, int* param2) {
    int result;
    long long v0 = param0;
    long long v1 = *(long long*)((long long)(*param2 & 0xfffffff8) + (*(char*)param2 & 0x4 ? ((long long)*(param2 + 1) + param0) & (long long)(0 - *(param2 + 2)): param0));
    long long v2 = (unsigned long long)*(int*)(*(long long*)(param1 + 16L) + 8L) + *(long long*)(param1 + 8L);
    if((*(char*)(v2 + 3L) & 0xf)) {
        v0 += (long long)((unsigned int)*(char*)(v2 + 3L) & 0xfffffff0);
    }
    sub_140001300(v1 ^ v0, v1, (long long)param2);
    return result;
}

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS* param0) {
    EXCEPTION_RECORD* ptr0 = param0->ExceptionRecord;
    if(ptr0->ExceptionCode == -529697949 && ptr0->NumberParameters == 4) {
        ptr0 = (EXCEPTION_RECORD*)*(int*)&ptr0->ExceptionInformation[0];
        if((unsigned int)ptr0 == 429065504 || (unsigned int)ptr0 == 429065505 || (unsigned int)ptr0 == 429065506 || (unsigned int)ptr0 == 0x1994000) {
            /*NO_RETURN*/ →MSVCR90.dll!?terminate@@YAXXZ();
        }
    }
    return 0;
}

void _security_init_cookie() {
    long long v0;
    unsigned long long v1 = gvar_140003000;
    long long v2 = 0L;
    if(v1 != 0x2b992ddfa232L) {
        gvar_140003008 = ~v1;
    }
    else {
        GetSystemTimeAsFileTime(&v2);
        DWORD v3 = /*BAD_CALL!*/ GetCurrentProcessId();
        DWORD v4 = /*BAD_CALL!*/ GetCurrentThreadId();
        DWORD v5 = /*BAD_CALL!*/ GetTickCount();
        QueryPerformanceCounter(&v0);
        unsigned long long v6 = (unsigned long long)((((((unsigned long long)(unsigned int)v3 ^ v2) ^ (unsigned long long)(unsigned int)v4) ^ (unsigned long long)(unsigned int)v5) ^ v0) & 0xffffffffffffL);
        gvar_140003000 = v6 != 0x2b992ddfa232L ? v6: 0x2b992ddfa233L;
        gvar_140003008 = v6 != 0x2b992ddfa232L ? ~v6: 18446696136809930188L;
    }
}

int atexit(FUNCPTR _) {
    _onexit_t v0 = onexit((_onexit_t)_);
    return -1 - ((unsigned long long)v0 > 0L ? 0xffffffff: 0);
}

_onexit_t onexit(_onexit_t _Func) {
    _onexit_t result;
    _onexit_t _Func1;
    unsigned long long v0 = (unsigned long long)MSVCR90.dll!_decode_pointer((long long)gvar_1400035E8);
    if(v0 == -1L) {
        result = onexit(_Func1);
    }
    else {
        →MSVCR90.dll!_lock();
        unsigned long long v1 = (unsigned long long)MSVCR90.dll!_decode_pointer((long long)gvar_1400035E8);
        long long v2 = MSVCR90.dll!_decode_pointer((long long)gvar_1400035E0);
        long long v3 = MSVCR90.dll!_encode_pointer((long long)_Func1);
        long long v4 = →MSVCR90.dll!__dllonexit();
        unsigned long long v5 = (unsigned long long)MSVCR90.dll!_encode_pointer((long long)v1);
        gvar_1400035E8 = v5;
        unsigned long long v6 = (unsigned long long)MSVCR90.dll!_encode_pointer(v2);
        gvar_1400035E0 = v6;  // } (starts at 1400017EBh)
        →MSVCR90.dll!_unlock();
        result = (_onexit_t)v4;
    }
    return result;
}

long long pre_c_init(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    gvar_140003024 = 0;
    set_app_type(1);
    unsigned long long v3 = (unsigned long long)MSVCR90.dll!_encode_pointer(-1L);
    gvar_1400035E0 = v3;
    gvar_1400035E8 = v3;
    *(unsigned int*)0x264C = gvar_1400035CC;
    *(unsigned int*)0x2640 = gvar_1400035C8;
    unk_lib_sub(param0, param1, 9792L, 9804L, v1, v2, v0);
    wsetargv();
    if(!gvar_14000301C) {
        _setusermatherr((_UserMathErrorFunctionPointer)&wsetargv);
    }
    if(gvar_140003018 == -1) {
        configthreadlocale(-1);
    }
    return 0L;
}

long long pre_cpp_init() {
    atexit((void __stdcall (*_)())&unk_lib_sub2);
    long long v0 = (unsigned long long)gvar_1400035C0;
    *(int*)&gvar_14000303C = (unsigned char)gvar_1400035C4;
    long long v1 = &gvar_14000303C;
    long long result = MSVCR90.dll!__getmainargs(&gvar_140003020, &gvar_140003030, &gvar_140003028, v0);
    gvar_140003038 = (unsigned int)result;
    if((unsigned int)result < 0) {
        /*NO_RETURN*/ →MSVCR90.dll!_amsg_exit(8);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long start(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    _security_init_cookie();
    return sub_140001388(param0, param1, v0, v1, v2, v3, param6);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_140001000(long long param0, long long param1, int param2, long long param3, unsigned int param4, long long param5, long long param6, long long param7, long long param8, long long param9) {
    long long v0;
    char v1;
    short v2;
    long long v3;
    long long v4;
    long long v5;
    long long result;
    char v6;
    long long* ptr0 = (long long*)(gvar_140003000 ^ (long long)&v1);
    sprintf(&v2, "%08lX:", (unsigned long long)param2);
    int v7 = 0;
    unsigned int v8 = 0;
    unsigned long long v9 = 0L;
    if((int)((int)param4 <= 16 ? param4: 16) > 0) {
        int v10 = 0;
        v8 = (unsigned int)((int)param4 <= 16 ? (unsigned long long)param4: 16L);
        do {
            sprintf((char*)((long long)v10 + (long long)&v6), " %02lX");
            ++v9;
            v10 += 3;
        }
        while((long long)((int)param4 <= 16 ? (unsigned long long)param4: 16L) > (long long)v9);
        if((unsigned int)((int)param4 <= 16 ? (unsigned long long)param4: 16L) < 16) {
            goto loc_1400010A3;
        }
    }
    else {
    loc_1400010A3:
        unsigned long long v11 = (unsigned long long)(16 - v8);
        do {
            long long v12 = -1L;
            char* ptr1 = &v2;
            while(v12 != 0L) {
                char v13 = ptr1[0] == 0;
                ++ptr1;
                --v12;
                if(!~v13) {
                    break;
                }
            }
            --v11;
            *(int*)&ptr1[-1] = 0x202020;
        }
        while(v11);
    }
    long long v14 = -1L;
    char* ptr2 = &v2;
    while(v14 != 0L) {
        char v15 = ptr2[0] == 0;
        ++ptr2;
        --v14;
        if(!~v15) {
            break;
        }
    }
    *(int*)((long long)(-2 - (unsigned int)v14) + (long long)&v2) = 0x7c2020;
    unsigned long long v16 = 0L;
    if((long long)((int)param4 <= 16 ? (unsigned long long)param4: 16L) > 0L) {
        long long* ptr3 = (long long*)((long long)(1 - (unsigned int)v14) + (long long)&v2);
        v7 = (unsigned int)((int)param4 <= 16 ? (unsigned long long)param4: 16L);
        do {
            unsigned char v17 = *(unsigned char*)(v16 + v5);
            if(v17 >= 32) {
                v0 = (unsigned long long)v17;
                if(v17 > 126) {
                    goto loc_140001111;
                }
            }
            else {
            loc_140001111:
                v0 = 46L;
            }
            *(char*)(v16 + (long long)ptr3) = (unsigned char)v0;
            ++v16;
        }
        while((long long)((int)param4 <= 16 ? (unsigned long long)param4: 16L) > (long long)v16);
    }
    if(v7 < 16) {
        →MSVCR90.dll!memset((void*)((long long)(1 - (unsigned int)v14) + (unsigned long long)v7 + (long long)&v2), (int)((unsigned long long)32 | ((unsigned long long)(((unsigned long long)v7 >>> 8L) & 0xffffffffffffffL) << 8)), (size_t)(16L - (unsigned long long)v7));
        v7 += 16 - v7;
    }
    *(short*)((long long)(1 - (unsigned int)v14) + (long long)v7 + (long long)&v2) = 124;
    printf((char*)&gvar_1400021F4);
    sub_140001300((long long)(long long*)((long long)&v1 ^ (long long)ptr0), v3, v4);
    return result;
}

long long sub_140001190(int param0, long long param1, long long param2, char* _FileName, long long param4, long long param5, long long param6, long long param7, long long param8) {
    long long v0;
    char v1;
    char v2;
    long long v3;
    long long v4;
    long long v5;
    long long result;
    unsigned int v6;
    long long v7;
    long long v8;
    long long v9;
    long long* ptr0 = (long long*)(gvar_140003000 ^ (long long)&v0);
    int v10 = /*BAD_CALL!*/ stat64i32(_FileName, &v1);
    if((unsigned int)v10) {
        perror(_FileName);
    }
    else {
        FILE* _Stream = fopen(_FileName, (char*)&gvar_1400021F8);
        if(!_Stream) {
            perror(_FileName);
        }
        else {
            unsigned int v11 = 0;
            if(v6 > 0) {
                do {
                    size_t v12 = /*BAD_CALL!*/ fread(&v2, 1L, 16L, _Stream);
                    if(!(unsigned int)v12) {
                        break;
                    }
                    else {
                        sub_140001000((long long)v12, (long long)_Stream, (long long)v11, (long long)&v2, (unsigned int)v12, v9, v0, v3, v4, v5);
                        v11 += param0;
                    }
                }
                while(v11 < v6);
            }
            fclose(_Stream);
        }
    }
    sub_140001300((unsigned long long)((long long)&v0 ^ (long long)ptr0), v7, v8);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_140001290(long long param0, unsigned long long param1, long long param2, long long param3, long long param4, long long param5, long long param6, long long param7, unsigned long long param8) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    unsigned long long v4;
    unsigned long long v5 = 1L;
    int v6 = 0;
    if((unsigned int)param3 > 1) {
        do {
            long long v7 = sub_140001190((long long)v5, (long long)(unsigned long long)(unsigned int)param3, param2, *(long long*)(v5 * 8L + param2), param4, param5, v0, v1, v2);
            v5 = (unsigned long long)(v3 + 1L);
            v6 += (unsigned int)v7;
        }
        while((long long)v4 > (long long)v5);
    }
    return (unsigned long long)v6;
}

void sub_140001300(unsigned long long param0, long long param1, long long param2) {
    if(gvar_140003000 == param0) {
        if(!(unsigned short)__rol__(param0, 16)) {
            return;
        }
        param0 = (unsigned long long)__ror__(__rol__(param0, 16), 16);
    }
    sub_140001604((long long)param0, param1, param2);
}

long long sub_140001388(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6) {
    long long result;
    long long v0;
    long long v1;
    unsigned long long v2;
    unsigned long long v3 = *(unsigned long long*)(*(long long*)(__GS_BASE + (long long)(long long*)0x30) + 8L);
    unsigned long long v4 = 0L;
    while(1) {
        unsigned long long v5 = 0L;
        char v6 = gvar_1400035D8 == 0L;
        if(v6 != 0) {
            gvar_1400035D8 = v3;
        }
        else {
            v5 = gvar_1400035D8;
        }
        if(v6) {
            break;
        }
        else if(v5 == v3) {
            v4 = 1L;
            break;
        }
        else {
            Sleep(1000);
        }
    }
    if(gvar_1400035D0 == 1) {
        /*NO_RETURN*/ →MSVCR90.dll!_amsg_exit(31);
    }
    if(!gvar_1400035D0) {
        gvar_1400035D0 = 1;
        int v7 = →MSVCR90.dll!_initterm_e((_PIFV*)&gvar_140002190, (_PIFV*)&gvar_1400021A8);
        if(!(unsigned int)v7) {
            goto loc_140001423;
        }
        else {
            result = 0xffL;
        }
    }
    else {
        gvar_140003044 = 1;
    loc_140001423:
        if(gvar_1400035D0 == 1) {
            →MSVCR90.dll!_initterm((_PVFV*)&gvar_140002178, (_PVFV*)&gvar_140002188);
            gvar_1400035D0 = 2;
        }
        if(!(unsigned int)v4) {
            gvar_1400035D8 = 0L;
        }
        if(gvar_1400035F0) {
            long long v8 = IsNonwritableInCurrentImage(&gvar_1400035F0);
            if((unsigned int)v8) {
                gvar_1400035F0(0L, 2L, 0L);
            }
        }
        *(unsigned long long*)0x25F0 = gvar_140003028;
        result = sub_140001290(1L, v4, gvar_140003030, (long long)gvar_140003020, gvar_140003028, param5, v0, v1, v2);
        gvar_140003040 = (unsigned int)result;
        if(!gvar_140003024) {
            /*NO_RETURN*/ exit((int)result);
        }
        if(!gvar_140003044) {
            cexit();
            result = (long long)gvar_140003040;
        }
    }
    return result;
}

long long unk_lib_sub(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6) {
    long long result;
    return result;
}

long long unk_lib_sub2(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6) {
    long long result;
    return result;
}

long long unk_lib_sub3(unsigned long long* param0, long long param1) {
    return →MSVCR90.dll!_XcptFilter();
}

long long unk_lib_sub4(long long param0, long long param1) {
    return →MSVCR90.dll!_unlock();
}

long long wsetargv() {
    return 0L;
}

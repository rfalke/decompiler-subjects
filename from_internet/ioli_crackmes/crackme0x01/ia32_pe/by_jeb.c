
// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    int v0;
    char v1;
    int v2;
    void* ptr0;
    int* ptr1 = &v0;
    int* ptr2 = &v0;
    char v3 = &v1 == 12;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&v1 - 12);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x8) ^ (int)&v2) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 8;
    char v8 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v2) & (int)(int*)((int)&v0 ^ 0x8)) < 0;
    _set_app_type(1);
    int* ptr3 = &ptr0;
    /*NO_RETURN*/ sub_401140();
}

int sub_401000(unsigned int* param0) {
    int _Signal;
    char v0;
    int v1;
    int v2 = v1;
    int result = 0;
    int v3 = 0;
    unsigned int v4 = **param0;
    if(v4 > 3221225617) {
        if(v4 == 0xc0000094) {
        loc_401037:
            _crt_signal_t v5 = signal(8, NULL);
            if(v5 == 1) {
                signal(8, (_crt_signal_t)0x1);
                if(v3) {
                    sub_4013C0();
                }
            }
            else if(!v5) {
                return result;
            }
            else {
                v5(8);
            }
        }
        else if(v4 >= 3221225620) {
            v0 = v4 == 0xc0000096;
        loc_40108C:
            if(!v0) {
                return result;
            }
            _crt_signal_t v6 = signal(4, NULL);
            if(v6 == 1) {
                _Signal = 4;
            loc_401122:
                signal(_Signal, (_crt_signal_t)0x1);
            }
            else if(!v6) {
                return result;
            }
            else {
                v6(4);
            }
        }
        else if(v4 != 0xc0000093) {
            return 0;
        }
        else {
            v3 = 1;
            goto loc_401037;
        }
    loc_40104F:
        result = -1;
    }
    else if(v4 >= 3221225613) {
        v3 = 1;
        goto loc_401037;
    }
    else if(v4 != 0xc0000005) {
        v0 = v4 == 0xc000001d;
        goto loc_40108C;
    }
    else {
        _crt_signal_t v7 = signal(11, NULL);
        if(v7 == 1) {
            _Signal = 11;
            goto loc_401122;
        }
        else if(v7) {
            v7(11);
            goto loc_40104F;
        }
    }
    return result;
}

void sub_401140() {
    char v0;
    void* ptr0;
    int v1;
    →KERNEL32.dll!SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&sub_401000);
    sub_4013C0();
    int v2 = 0;
    int* ptr1 = &v2;
    unsigned int v3 = gvar_403000;
    int* ptr2 = &v0;
    unsigned int v4 = &gvar_405000;
    →msvcrt.dll!__getmainargs();
    unsigned int v5 = gvar_405030;
    if(!v5) {
    loc_4011F0:
        int* ptr3 = →msvcrt.dll!__p__fmode();
        ptr3[0] = gvar_403010;
        sub_401390();
        char*** ptr4 = __p__environ();
        *(char***)((int*)((int)&ptr0 & 0xfffffff0) + 1) = ptr4[0];
        *(unsigned int*)((int)&ptr0 & 0xfffffff0) = gvar_405000;
        *(unsigned int*)((int*)((int)&ptr0 & 0xfffffff0) - 1) = gvar_405004;
        *((int*)((int)&ptr0 & 0xfffffff0) - 2) = &loc_401227;
        int v6 = /*BAD_CALL!*/ sub_401310(v1);
        *((int*)((int)&ptr0 & 0xfffffff0) - 3) = &loc_40122F;
        /*BAD_CALL!*/ _cexit();
        *((int*)((int)&ptr0 & 0xfffffff0) - 3) = v6;
        *((int*)((int)&ptr0 & 0xfffffff0) - 4) = &loc_401237;
        /*NO_RETURN*/ →KERNEL32.dll!ExitProcess(*(UINT*)((int*)((int)&ptr0 & 0xfffffff0) - 3));
    }
    gvar_403010 = v5;
    msvcrt.dll!_setmode();
    msvcrt.dll!_setmode();
    v4 = gvar_405030;
    msvcrt.dll!_setmode();
    goto loc_4011F0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401280() {
    int v0;
    char v1;
    int v2;
    void* ptr0;
    int* ptr1 = &v0;
    int* ptr2 = &v0;
    char v3 = &v1 == 12;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&v1 - 12);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x8) ^ (int)&v2) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 8;
    char v8 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v2) & (int)(int*)((int)&v0 ^ 0x8)) < 0;
    _set_app_type(2);
    int* ptr3 = &ptr0;
    /*NO_RETURN*/ sub_401140();
}

int sub_4012A0(FUNCPTR _) {
    return atexit(_);
}

LONG sub_4012C0() {
    sub_402A40();
    return sub_401830((int*)&gvar_404150, (int*)0x405010);
}

int sub_4012F0() {
    return sub_401B90((int*)&gvar_404150);
}

int sub_401310(int param0) {
    unsigned int v0;
    sub_402C60(param0);
    sub_401460();
    →msvcrt.dll!printf("IOLI Crackme Level 0x01\n");
    →msvcrt.dll!printf("Password: ");
    →msvcrt.dll!scanf((char*)&gvar_404024, &v0);
    if(v0 != 5274) {
        →msvcrt.dll!printf("Invalid Password!\n");
    }
    else {
        →msvcrt.dll!printf("Password OK :)\n");
    }
    return 0;
}

int sub_401390() {
    int result;
    return result;
}

void sub_4013C0() {
    fninit();
}

unsigned int* sub_4013D0() {
    int v0;
    unsigned int* result = gvar_403020;
    if(*result) {
        do {
            *result{sub_402E30}();
            unsigned int v1 = gvar_403020;
            result = (unsigned int*)(v1 + 4);
            v0 = *(int*)(v1 + 4);
            gvar_403020 = result;
        }
        while(v0);
    }
    return result;
}

int sub_401400() {
    int v0 = 0;
    do {
        ++v0;
    }
    while(*(unsigned int*)(v0 * 4 + (int)&gvar_402E44));
    int counter = v0;
    if(v0) {
        do {
            *(unsigned int*)(counter * 4 + (int)&gvar_402E40)();
            --counter;
        }
        while(counter);
    }
    return sub_4012A0((void __cdecl (*_)())&sub_4013D0);
}

int sub_401460() {
    int result = gvar_405040;
    if(!result) {
        gvar_405040 = 1;
        result = sub_401400();
    }
    return result;
}

int sub_401480() {
    int v0;
    int result = 0;
    if((unsigned char)v0 != 0xff) {
        result = 2;
        if((unsigned int)(v0 & 0x7) != 2) {
            if((int)(unsigned int)(v0 & 0x7) >= 2) {
                result = 4;
                if((unsigned int)(v0 & 0x7) != 3) {
                    if((unsigned int)(v0 & 0x7) == 4) {
                        return 8;
                    }
                    /*NO_RETURN*/ →msvcrt.dll!abort();
                }
            }
            else if((unsigned int)(v0 & 0x7)) {
                /*NO_RETURN*/ →msvcrt.dll!abort();
            }
            else {
                result = 4;
            }
        }
    }
    return result;
}

char* sub_4014D0(int param0, int* param1) {
    char v0;
    int v1;
    char* ptr0;
    int v2 = v1;
    int v3 = 0;
    char* result = ptr0;
    int v4 = 0;
    do {
        param0 = (unsigned int)(unsigned char)v3 | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
        v3 += 7;
        v0 = *result;
        ++result;
        v4 |= ((unsigned int)v0 & 0x7f) << (param0 & 0x1f);
    }
    while(v0 < 0);
    *param1 = v4;
    return result;
}

char* sub_401520(int param0, int* param1) {
    char v0;
    int v1;
    char* ptr0;
    int v2 = v1;
    char* result = ptr0;
    int* ptr1 = param1;
    unsigned int v3 = 0;
    int v4 = 0;
    do {
        unsigned int v5 = v3;
        v3 += 7;
        v0 = *result;
        ++result;
        v4 |= ((unsigned int)v0 & 0x7f) << (v5 & 0x1f);
    }
    while(v0 < 0);
    if(v3 <= 31 && (v0 & 0x40)) {
        v4 |= -1 << (v3 & 0x1f);
    }
    *param1 = v4;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_401590(unsigned int* param0, unsigned int* param1) {
    char v0;
    char v1;
    int v2;
    int v3;
    int v4 = (unsigned int)v1 | ((unsigned int)v3 << 8);
    if(v0 != 80) {
        if((unsigned int)(((unsigned int)v0 | ((unsigned int)v3 << 8)) & 0xf) <= 12) {
            jump *(int*)((unsigned int)(((unsigned int)v0 | ((unsigned int)v3 << 8)) & 0xf) * 4 + 4210768);
        }
        else {
            /*NO_RETURN*/ →msvcrt.dll!abort();
            ptr5 = (unsigned int*)*(short*)param0;
            result = (int*)((char*)param0 + 2);
        }
        if(ptr5) {
            ptr5 = (unsigned int)(((unsigned int)v0 | ((unsigned int)v3 << 8)) & 0x70) != 16 ? (unsigned int*)((int)ptr5 + v2): (unsigned int*)((int)ptr5 + (int)param0);
            if(v0 < 0) {
                ptr5 = *ptr5;
            }
        }
        *param1 = ptr5;
        return result;
    }
    unsigned int* ptr0 = (unsigned int*)((int)(int*)((char*)param0 + 3) & 0xfffffffc);
    *param1 = *ptr0;
    return (int*)(ptr0 + 1);
}

HANDLE sub_401660() {
    unsigned int v0 = gvar_4050B0;
    *(int*)(v0 + 20) = -1;
    HANDLE result = →KERNEL32.dll!CreateSemaphoreA(NULL, 0, 0xffff, NULL);
    *(HANDLE*)(v0 + 24) = result;
    return result;
}

LONG sub_4016B0() {
    int v0;
    int v1 = v0;
    LONG result = gvar_405090;
    unsigned int v2 = gvar_4050B0;
    if(result && (int*)(v2 + 28)) {
        result = *(LONG*)(v2 + 28);
        if(!result) {
            result = →KERNEL32.dll!InterlockedIncrement((LONG*)(v2 + 32));
            if(!result) {
                result = (LONG)sub_401660();
                *(int*)(v2 + 28) = 1;
            }
            else if(!*(int*)(v2 + 28)) {
                do {
                    →KERNEL32.dll!Sleep(0);
                    result = *(LONG*)(v2 + 28);
                }
                while(!result);
            }
        }
    }
    return result;
}

LONG sub_401740(int* param0, int* param1, int param2, int param3) {
    LONG result;
    void* ptr0;
    int v0;
    int v1;
    int v2 = v1;
    int* ptr1 = param0;
    int* ptr2 = param1;
    if(ptr1 && *ptr1) {
        *ptr2 = -1;
        *(ptr2 + 1) = param2;
        int v3 = param3;
        *(ptr2 + 4) = 0;
        *(unsigned int*)(ptr2 + 3) = ptr1;
        *(ptr2 + 2) = v3;
        *(short*)(ptr2 + 4) = *(short*)(ptr2 + 4) | 0x7f8;
        unsigned int* ptr3 = &ptr0;
        sub_4016B0();
        unsigned int v4 = gvar_405090;
        ptr1 = gvar_4050B0;
        if(v4) {
            LONG v5 = →KERNEL32.dll!InterlockedIncrement((LONG*)(ptr1 + 5));
            ptr3 = &ptr0;
            if(v5) {
                int v6 = -1;
                DWORD v7 = →KERNEL32.dll!WaitForSingleObject((HANDLE)*(long*)(ptr1 + 6), 0xffffffff);
                ptr3 = &ptr0;
                if(v7) {
                    →KERNEL32.dll!InterlockedDecrement((LONG*)(ptr1 + 5));
                    ptr3 = &v0;
                }
            }
            ptr1 = gvar_4050B0;
            v4 = gvar_405090;
        }
        result = *(LONG*)(ptr1 + 3);
        *(LONG*)(ptr2 + 5) = *(LONG*)(ptr1 + 3);
        *(unsigned int*)(ptr1 + 3) = ptr2;
        if(v4) {
            *ptr3 = ptr1 + 5;
            --ptr3;
            *ptr3 = &loc_4017BF;
            result = /*BAD_CALL!*/ →KERNEL32.dll!InterlockedDecrement(*(LONG**)(ptr3 + 1));
            --ptr3;
            if(result >= 0) {
                *(int*)(ptr3 + 2) = 0;
                *(int*)(ptr3 + 1) = 1;
                *ptr3 = *(ptr1 + 6);
                --ptr3;
                *ptr3 = &loc_4017E0;
                result = (LONG)/*BAD_CALL!*/ →KERNEL32.dll!ReleaseSemaphore(*(HANDLE*)(ptr3 + 1), *(LONG*)(ptr3 + 2), *(LPLONG*)(ptr3 + 3));
            }
        }
    }
    return result;
}

LONG sub_401830(int* param0, int* param1) {
    return sub_401740(param0, param1, 0, 0);
}

LONG sub_401860(int* param0) {
    int v0;
    int v1 = v0;
    if(!param0[0]) {
        return 0;
    }
    void* ptr0 = →msvcrt.dll!malloc(24);
    return sub_401830(param0, (int*)ptr0);
}

LONG sub_4018A0(int param0, int* param1, int param2, int param3) {
    LONG result;
    void* ptr0;
    int v0;
    int v1;
    int v2 = v1;
    int* ptr1 = param1;
    int v3 = param2;
    *ptr1 = -1;
    *(ptr1 + 1) = v3;
    *(ptr1 + 2) = param3;
    int v4 = param0;
    *(ptr1 + 4) = 0;
    *(char*)(ptr1 + 4) = *(char*)(ptr1 + 4) | 0x2;
    *(ptr1 + 3) = v4;
    *(short*)(ptr1 + 4) = *(short*)(ptr1 + 4) | 0x7f8;
    sub_4016B0();
    unsigned int v5 = gvar_4050B0;
    if(!gvar_405090) {
        result = *(LONG*)(v5 + 12);
        *(LONG*)(ptr1 + 5) = *(LONG*)(v5 + 12);
        *(unsigned int*)(v5 + 12) = ptr1;
    }
    else {
        LONG v6 = →KERNEL32.dll!InterlockedIncrement((LONG*)(v5 + 20));
        unsigned int* ptr2 = &ptr0;
        if(v6) {
            int v7 = -1;
            DWORD v8 = →KERNEL32.dll!WaitForSingleObject((HANDLE)*(long*)(v5 + 24), 0xffffffff);
            ptr2 = &ptr0;
            if(v8) {
                →KERNEL32.dll!InterlockedDecrement((LONG*)(v5 + 20));
                ptr2 = &v0;
            }
        }
        v5 = gvar_4050B0;
        result = *(LONG*)(v5 + 12);
        char v9 = gvar_405090 ? 0: 1;
        *(LONG*)(ptr1 + 5) = result;
        *(unsigned int*)(v5 + 12) = ptr1;
        if(!v9) {
            *ptr2 = v5 + 20;
            --ptr2;
            *ptr2 = &loc_401948;
            result = /*BAD_CALL!*/ →KERNEL32.dll!InterlockedDecrement(*(LONG**)(ptr2 + 1));
            --ptr2;
            if(result >= 0) {
                *(int*)(ptr2 + 2) = 0;
                *(int*)(ptr2 + 1) = 1;
                *ptr2 = *(int*)(v5 + 24);
                --ptr2;
                *ptr2 = &loc_401969;
                return (LONG)/*BAD_CALL!*/ →KERNEL32.dll!ReleaseSemaphore(*(HANDLE*)(ptr2 + 1), *(LONG*)(ptr2 + 2), *(LPLONG*)(ptr2 + 3));
            }
        }
    }
    return result;
}

LONG sub_4019A0(int param0, int* param1) {
    return sub_4018A0(param0, param1, 0, 0);
}

LONG sub_4019D0(int param0) {
    void* ptr0 = →msvcrt.dll!malloc(24);
    return sub_4019A0(param0, (int*)ptr0);
}

int sub_401A00(int* param0) {
    DWORD v0;
    LONG v1;
    int result1;
    int result;
    int v2;
    void* ptr0;
    int v3;
    int v4;
    int v5 = v4;
    int* ptr1 = param0;
    if(!ptr1 || !*ptr1) {
        return 0;
    }
    unsigned int* ptr2 = &ptr0;
    sub_4016B0();
    unsigned int v6 = gvar_4050B0;
    LONG* Addend = (LONG*)(v6 + 20);
    if(!gvar_405090) {
    loc_401A3B:
        int* ptr3 = (int*)(v6 + 12);
        if(*(int*)(v6 + 12)) {
            do {
                v2 = *ptr3;
                if(*(int*)(v2 + 12) != ptr1) {
                    ptr3 = (int*)(v2 + 20);
                }
                else {
                    result = v2;
                loc_401A8B:
                    *ptr3 = *(int*)(result + 20);
                loc_401A97:
                    if(gvar_405090) {
                        *ptr2 = v6 + 20;
                        --ptr2;
                        *ptr2 = &loc_401AC9;
                        LONG v7 = /*BAD_CALL!*/ →KERNEL32.dll!InterlockedDecrement(*(LONG**)(ptr2 + 1));
                        --ptr2;
                        if(v7 < 0) {
                            return result;
                        }
                        *(int*)(ptr2 + 2) = 0;
                        *(int*)(ptr2 + 1) = 1;
                        *ptr2 = *(int*)(v6 + 24);
                        --ptr2;
                        *ptr2 = &loc_401AEA;
                        /*BAD_CALL!*/ →KERNEL32.dll!ReleaseSemaphore(*(HANDLE*)(ptr2 + 1), *(LONG*)(ptr2 + 2), *(LPLONG*)(ptr2 + 3));
                        result1 = result;
                    }
                    else {
                        result1 = result;
                    }
                    return result1;
                }
            }
            while(*(int*)(v2 + 20));
        }
        char v8 = *(int*)(v6 + 16) ? 0: 1;
        ptr3 = (int*)(v6 + 16);
        while(!v8) {
            int v9 = *ptr3;
            if(!(*(char*)(v9 + 16) & 0x1)) {
                if(*(int*)(v9 + 12) != ptr1) {
                    goto loc_401A6E;
                }
                else {
                    result = v9;
                    goto loc_401A8B;
                }
            }
            if(**(unsigned int*)(v9 + 12) != ptr1) {
            loc_401A6E:
                ptr3 = (int*)(v9 + 20);
                v8 = *(int*)(v9 + 20) ? 0: 1;
            }
            else {
                result = v9;
                *ptr3 = *(int*)(v9 + 20);
                *ptr2 = *(int*)(result + 12);
                --ptr2;
                *ptr2 = &loc_401B03;
                /*BAD_CALL!*/ →msvcrt.dll!free(*(void**)(ptr2 + 1));
                v6 = gvar_4050B0;
                goto loc_401A97;
            }
        }
        ptr1 = (int*)(v6 + 20);
        if(gvar_405090) {
            *ptr2 = ptr1;
            --ptr2;
            *ptr2 = &loc_401B2B;
            LONG v10 = /*BAD_CALL!*/ →KERNEL32.dll!InterlockedDecrement(*(LONG**)(ptr2 + 1));
            --ptr2;
            if(v10 < 0) {
                --ptr2;
                *ptr2 = &loc_401B23;
            }
            else {
                *(int*)(ptr2 + 2) = 0;
                *(int*)(ptr2 + 1) = 1;
                *ptr2 = *(ptr1 + 1);
                --ptr2;
                *ptr2 = &loc_401B4C;
                /*BAD_CALL!*/ →KERNEL32.dll!ReleaseSemaphore(*(HANDLE*)(ptr2 + 1), *(LONG*)(ptr2 + 2), *(LPLONG*)(ptr2 + 3));
                ptr2 -= 4;
                *ptr2 = &loc_401B54;
            }
        }
        else {
            --ptr2;
            *ptr2 = &loc_401B23;
        }
        /*NO_RETURN*/ →msvcrt.dll!abort();
    }
    v1 = →KERNEL32.dll!InterlockedIncrement(Addend);
    ptr2 = &ptr0;
    if(!v1) {
        v6 = gvar_4050B0;
        goto loc_401A3B;
    }
    else {
        int v11 = -1;
        v0 = →KERNEL32.dll!WaitForSingleObject((HANDLE)Addend[1], 0xffffffff);
        ptr2 = &ptr0;
    }
    if(v0) {
        →KERNEL32.dll!InterlockedDecrement(Addend);
        ptr2 = &v3;
    }
    v6 = gvar_4050B0;
    goto loc_401A3B;
}

int sub_401B90(int* param0) {
    return sub_401A00(param0);
}

int* sub_401BA0(void* param0) {
    if(*(int*)param0) {
        int v0 = sub_401B90((int*)param0);
        →msvcrt.dll!free((void*)v0);
    }
    return (int*)param0;
}

int sub_401BD0(int param0, int param1) {
    char v0;
    int v1;
    int result = 0;
    if((unsigned char)v1 == 0xff) {
        return result;
    }
    else if((unsigned int)(v1 & 0x70) == 32) {
        return *(int*)(param1 + 4);
    }
    else if((int)(unsigned int)(v1 & 0x70) < 32) {
        if(!(unsigned int)(v1 & 0x70)) {
            return 0;
        }
        v0 = (unsigned int)(v1 & 0x70) == 16;
        goto loc_401BF8;
    }
    else if((unsigned int)(v1 & 0x70) != 48) {
        v0 = (unsigned int)(v1 & 0x70) == 80;
    loc_401BF8:
        if(!v0) {
            /*NO_RETURN*/ →msvcrt.dll!abort();
        }
        return 0;
    }
    else {
        return *(int*)(param1 + 8);
    }
}

int sub_401C30() {
    char v0;
    char v1;
    char v2;
    int v3;
    int v4;
    int v5;
    int v6 = v3;
    int result = 0;
    if(*(char*)(v4 + 9) == 122) {
        size_t v7 = →msvcrt.dll!strlen((char*)(v4 + 9));
        sub_4014D0(v7 + v4 + 10, &v0);
        unsigned char* ptr0 = (unsigned char*)(v4 + 10);
        char* ptr1 = sub_401520(v5, &v1);
        char* ptr2 = sub_4014D0((int)(ptr1 + 1), &v0);
    loc_401C80:
        unsigned char v8 = *ptr0;
        while(*ptr0 != 82) {
            switch(v8) {
                case 76: {
                    ++ptr2;
                    ++ptr0;
                    goto loc_401C80;
                }
                case 80: {
                    ++ptr0;
                    ptr2 = (char*)sub_401590((unsigned int*)(ptr2 + 1), &v2);
                    v8 = *ptr0;
                    break;
                }
                default: {
                    return 0;
                }
            }
        }
        result = (unsigned int)ptr2[0];
    }
    return result;
}

int sub_401CE0(int param0, int param1, int param2) {
    unsigned int v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4 = v2;
    int v5 = sub_401BD0(v3, param0);
    sub_401590((unsigned int*)(param1 + 8), &v0);
    sub_401590((unsigned int*)(param2 + 8), &v1);
    int result = 1;
    char v6 = v1 > v0;
    if((v6 || v1 == v0)) {
        result = v6 ? -1: 0;
    }
    return result;
}

int sub_401D60(int param0, int param1, int param2) {
    unsigned int v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4 = v2;
    int v5 = sub_401C30();
    int v6 = sub_401BD0(v3, param0);
    sub_401590((unsigned int*)(param1 + 8), &v0);
    int v7 = sub_401C30();
    int v8 = sub_401BD0(v3, param0);
    sub_401590((unsigned int*)(param2 + 8), &v1);
    int result = 1;
    char v9 = v1 > v0;
    if((v9 || v1 == v0)) {
        result = v9 ? -1: 0;
    }
    return result;
}

int sub_401DF0(int param0, unsigned int param1, unsigned int param2) {
    int v0;
    int result;
    int v1;
    int v2;
    int v3 = v2;
    unsigned int v4 = param1;
    int v5 = result;
    int v6 = v1;
    unsigned int v7 = (unsigned int)(v4 * 2 + 1);
    if((int)v7 < (int)param2) {
        int v8 = param0;
        do {
            unsigned int v9 = v7 + 1;
            if((int)v9 < (int)param2) {
                int v10 = *(int*)(v7 * 4 + v8 + 4);
                v0 = *(int*)(v7 * 4 + v8 + 4);
                int v11 = v6(v5, *(int*)(v7 * 4 + v8), v10);
                if(v11 < 0) {
                    v7 = v9;
                }
            }
            int v12 = *(int*)(v7 * 4 + v8);
            v0 = *(int*)(v7 * 4 + v8);
            result = v6(v5, *(int*)(v4 * 4 + v8), v12);
            if(result >= 0) {
                return result;
            }
            v1 = *(int*)(v4 * 4 + v8);
            result = *(int*)(v7 * 4 + v8);
            *(int*)(v4 * 4 + v8) = *(int*)(v7 * 4 + v8);
            v4 = v7;
            *(int*)(v7 * 4 + v8) = v1;
            v7 = (unsigned int)(v7 * 2 + 1);
        }
        while((int)v7 < (int)param2);
    }
    return result;
}

int sub_401E80(int param0) {
    int v0;
    int v1;
    int v2;
    int v3 = v1;
    int v4 = v2;
    int v5 = v0;
    unsigned int v6 = *(unsigned int*)(param0 + 4);
    int v7 = param0 + 8;
    int result = (int)(v6 >>> 1);
    unsigned int v8 = (unsigned int)(int)(v6 >>> 1);
    --v8;
    while(v8 < 0x80000000) {
        result = sub_401DF0(v7, v8, v6);
        --v8;
    }
    unsigned int v9 = v6 - 1;
    while((int)v9 > 0) {
        int v10 = *(int*)v7;
        *(int*)v7 = *(int*)(v9 * 4 + v7);
        *(int*)(v9 * 4 + v7) = v10;
        unsigned int v11 = v9;
        --v9;
        result = sub_401DF0(v7, 0, v11);
    }
    return result;
}

int sub_401EF0(int param0, unsigned int* param1) {
    char v0;
    unsigned int* ptr0;
    int v1;
    int v2;
    int v3;
    unsigned int* ptr1 = param1;
    int v4 = v3;
    char v5 = *param1 ? 0: 1;
    int* ptr2 = NULL;
    int result = 0;
    *(int*)&v0 = 0;
    int v6 = 0;
    while(!v5) {
        unsigned int v7 = *(ptr1 + 1);
        if(v7) {
            int* ptr3 = (int*)((int)ptr1 - v7) + 1;
            if(ptr3 != ptr2) {
                ptr2 = ptr3;
                int v8 = sub_401C30();
                *(int*)&v0 = v8;
                int v9 = sub_401BD0(v1, v2);
                int v10 = (unsigned int)*(short*)(v2 + 16);
                v6 = v9;
                if((unsigned char)(v10 >>> 3) == 0xff) {
                    *(short*)(v2 + 16) = (unsigned short)(((unsigned int)v0 * 8) | (v10 & 0xfffff807));
                }
                else if((unsigned int)(unsigned char)(v10 >>> 3) != *(int*)&v0) {
                    *(char*)(v2 + 16) = *(char*)(v2 + 16) | 0x4;
                }
            }
            sub_401590(ptr1 + 2, &ptr0);
            int v11 = sub_401480();
            int v12 = (unsigned int)v11 <= 3 ? (1 << ((v11 * 8) & 0x1f)) - 1: -1;
            if((int*)(v12 & (int)ptr0)) {
                ++result;
                if(*(unsigned int*)v2 > (unsigned int)ptr0) {
                    *(unsigned int**)v2 = ptr0;
                }
            }
        }
        int* ptr4 = (int*)(*ptr1 + (int)ptr1);
        ptr1 = (unsigned int*)(ptr4 + 1);
        v5 = *(ptr4 + 1) ? 0: 1;
    }
    return result;
}

int sub_402010(unsigned int* param0) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6 = v3;
    unsigned int* ptr0 = param0;
    int v7 = v2;
    int v8 = (unsigned int)*(short*)(v2 + 16);
    int v9 = v4;
    unsigned int v10 = 0;
    int v11 = (int)(unsigned char)(v8 >>> 3);
    int result = sub_401BD0(v5, v7);
    char v12 = *ptr0 ? 0: 1;
    int v13 = result;
    while(!v12) {
        unsigned int v14 = *(ptr0 + 1);
        if(v14) {
            if((*(char*)(v7 + 16) & 0x4)) {
                unsigned int v15 = (unsigned int)((int)ptr0 - v14 + 4);
                if(v15 != v10) {
                    v10 = v15;
                    v11 = sub_401C30();
                    v13 = sub_401BD0(v5, v7);
                }
            }
            if(!v11) {
                v0 = *(int*)(ptr0 + 2) ? 0: 1;
            }
            else {
                sub_401590(ptr0 + 2, &v1);
                int v16 = sub_401480();
                v0 = (unsigned int)v16 <= 3 ? ((1 << ((v16 * 8) & 0x1f)) - 1) & v1 ? 0: 1: v1 ? 0: 1;
            }
            if(!v0) {
                v4 = *(int*)v9;
                if(v4) {
                    int v17 = *(int*)(v4 + 4);
                    *(unsigned int*)(v17 * 4 + v4 + 8) = ptr0;
                    *(int*)(v4 + 4) = v17 + 1;
                }
            }
        }
        int* ptr1 = (int*)(*ptr0 + (int)ptr0);
        ptr0 = (unsigned int*)(ptr1 + 1);
        result = *(ptr1 + 1);
        v12 = result ? 0: 1;
    }
    return result;
}

unsigned int* sub_402110(int param0) {
    int v0;
    int v1;
    unsigned int* ptr0;
    int v2;
    unsigned int* ptr1;
    int v3;
    int v4;
    unsigned int* result = ptr1;
    int v5 = v3;
    int v6 = v2;
    int v7 = (unsigned int)*(short*)(v2 + 16);
    int* ptr2 = NULL;
    int v8 = (int)(unsigned char)(v7 >>> 3);
    int v9 = sub_401BD0(v4, v6);
    char v10 = *result ? 0: 1;
    int v11 = v9;
    while(!v10) {
        unsigned int v12 = *(result + 1);
        if(v12) {
            if((*(char*)(v6 + 16) & 0x4)) {
                int* ptr3 = (int*)((int)result - v12) + 1;
                if(ptr3 != ptr2) {
                    ptr2 = ptr3;
                    v8 = sub_401C30();
                    v11 = sub_401BD0(v4, v6);
                }
            }
            if(!v8) {
                ptr1 = *(result + 2);
                ptr0 = *(result + 2);
                v4 = *(int*)(result + 3);
                v1 = *(int*)(result + 3);
                if(!ptr1) {
                    goto loc_402146;
                }
                else {
                    goto loc_4021AB;
                }
            }
            else {
                int* ptr4 = sub_401590(result + 2, &ptr0);
                sub_401590((unsigned int*)ptr4, &v1);
                int v13 = sub_401480();
                v0 = (unsigned int)v13 <= 3 ? (1 << ((v13 * 8) & 0x1f)) - 1: -1;
                ptr1 = ptr0;
            }
            if((int*)(v0 & (int)ptr1)) {
                v4 = v1;
            loc_4021AB:
                if((unsigned int)(int*)(param0 - (int)ptr1) < (unsigned int)v4) {
                    return result;
                }
            }
        }
    loc_402146:
        int* ptr5 = (int*)(*result + (int)result);
        result = (unsigned int*)(ptr5 + 1);
        v10 = *(ptr5 + 1) ? 0: 1;
    }
    return NULL;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* sub_402230(int param0, int param1) {
    unsigned int v0;
    int v1;
    unsigned int v2;
    unsigned int v3;
    unsigned int v4;
    unsigned int v5;
    unsigned int v6;
    int v7;
    char v8;
    int v9;
    int v10;
    int v11;
    void* ptr0;
    void* ptr1;
    void* ptr2;
    void* ptr3;
    unsigned int v12;
    void* ptr4;
    void* _Block;
    void* ptr5;
    unsigned int* ptr6;
    int v13;
    unsigned int* result;
    unsigned int* ptr7;
    char v14;
    int v15;
    int v16;
    int v17 = v16;
    int v18 = param1;
    param1 = (int)*(char*)&result[4];
    unsigned int* ptr8 = result;
    if(!((unsigned char)param1 & 0x1)) {
        int v19 = (int)result;
        void* ptr9 = (void*)(result[4] >>> 11);
        char v20 = ptr9 ? 0: 1;
        void* ptr10 = ptr9;
        if(v20) {
            char i = (unsigned char)param1 & 0x2 ? 0: 1;
            if(!i) {
                unsigned int* ptr11 = *(unsigned int*)(v19 + 12);
                for(i = *ptr11 ? 0: 1; !i; i = *ptr11 ? 0: 1) {
                    unsigned int* ptr12 = *ptr11;
                    ++ptr11;
                    int v21 = sub_401EF0(v19, ptr12);
                    ptr10 = (void*)(v21 + (int)ptr10);
                }
            }
            else {
                unsigned int* ptr13 = ptr8;
                unsigned int* ptr14 = (unsigned int*)ptr13[3];
                ptr10 = (void*)sub_401EF0(v19, ptr14);
            }
            unsigned int* ptr15 = ptr8;
            void* ptr16 = ptr10;
            unsigned int v22 = (unsigned int)((int)(int*)((int)ptr16 * 0x800) | (ptr15[4] & 0x7ff));
            if((void*)(v22 >>> 11) != ptr10) {
                ptr15[4] = v22 & 0x7ff;
                param0 = (int)ptr10;
                if(!param0) {
                loc_402264:
                    unsigned int* ptr17 = ptr8;
                    result = NULL;
                    if(ptr17[0] <= (unsigned int)v18) {
                        param1 = (int)*(char*)&ptr17[4];
                        goto loc_40227B;
                    }
                }
                else {
                    goto loc_4023CF;
                }
            }
            else {
                ptr8[4] = v22;
                goto loc_402259;
            }
        }
        else {
        loc_402259:
            param0 = (int)ptr10;
            char v23 = param0 ? 0: 1;
            if(!v23) {
            loc_4023CF:
                size_t _Size = (size_t)((int*)((int)ptr10 * 4) + 2);
                ptr9 = →msvcrt.dll!malloc(_Size);
                void* ptr18 = ptr9;
                if(ptr9) {
                    *(int*)((int)ptr9 + 4) = 0;
                    void* ptr19 = →msvcrt.dll!malloc(_Size);
                    void* ptr20 = ptr19;
                    if(ptr19) {
                        *(int*)((int)ptr19 + 4) = 0;
                    }
                    unsigned int* ptr21 = ptr8;
                    if((*(char*)&ptr21[4] & 0x2)) {
                        _Size = ptr21[3];
                        unsigned int* ptr22 = *(unsigned int**)_Size;
                        char v24 = ptr22 ? 0: 1;
                        if(!v24) {
                            do {
                                _Size += 4;
                                sub_402010(ptr22);
                                ptr22 = *(unsigned int**)_Size;
                            }
                            while(ptr22);
                        }
                    }
                    else {
                        unsigned int* ptr23 = ptr8;
                        unsigned int* ptr24 = (unsigned int*)ptr23[3];
                        sub_402010(ptr24);
                    }
                    void* ptr25 = ptr18;
                    char v25 = ptr25 ? 0: 1;
                    if(!v25) {
                        ptr5 = ptr10;
                        if(*(int*)((int)ptr25 + 4) == ptr5) {
                            goto loc_40243E;
                        }
                        else {
                            /*NO_RETURN*/ →msvcrt.dll!abort();
                            ptr2 = ptr20;
                            ptr4 = ptr18;
                            _Block = ptr2;
                            ptr3 = ptr4;
                            goto loc_40266C;
                        }
                    }
                    else {
                    loc_40243E:
                        int v26 = &sub_401D60;
                        unsigned int* ptr26 = ptr8;
                        if(!(*(char*)&ptr26[4] & 0x4)) {
                            int v27 = (unsigned int)*(short*)&ptr26[4];
                            v26 = &sub_401CC0;
                            if((unsigned char)(v27 >>> 3)) {
                                v26 = &sub_401CE0;
                            }
                        }
                        void* ptr27 = ptr20;
                        char v28 = ptr27 ? 0: 1;
                        _Block = ptr27;
                        void* ptr28 = ptr27;
                        if(!v28) {
                            ptr4 = ptr18;
                            _Size = 0;
                            v12 = gvar_4050B0;
                            ptr3 = ptr4;
                            ptr2 = *(void**)((int)ptr4 + 4);
                            ptr1 = ptr4;
                            void* ptr29 = ptr4;
                            ptr5 = (void*)(v12 + 36);
                            char v29 = (unsigned int)ptr2 > 0;
                            ptr0 = ptr2;
                            if(!v29) {
                            loc_40266C:
                                int v30 = 0;
                                int v31 = 0;
                                _Size = 0;
                                if((unsigned int)ptr0 > 0) {
                                    do {
                                        void* ptr30 = ptr28;
                                        if(*((int*)(_Size * 4 + (int)ptr30) + 2)) {
                                            void* ptr31 = ptr29;
                                            int v32 = *((int*)(_Size * 4 + (int)ptr31) + 2);
                                            ++_Size;
                                            *((int*)(v31 * 4 + (int)ptr31) + 2) = v32;
                                            ++v31;
                                        }
                                        else {
                                            void* ptr32 = ptr29;
                                            int v33 = *((int*)(_Size * 4 + (int)ptr32) + 2);
                                            void* ptr33 = ptr28;
                                            ++_Size;
                                            *((int*)(v30 * 4 + (int)ptr33) + 2) = v33;
                                            ++v30;
                                        }
                                        v14 = _Size < (unsigned int)ptr0;
                                    }
                                    while(v14);
                                }
                                void* ptr34 = ptr29;
                                ptr5 = ptr3;
                                *(int*)((int)ptr34 + 4) = v31;
                                *(int*)((int)ptr28 + 4) = v30;
                                void* ptr35 = _Block;
                                int v34 = *(int*)((int)ptr5 + 4);
                                if((unsigned int)(*(int*)((int)ptr35 + 4) + v34) != ptr10) {
                                    /*NO_RETURN*/ →msvcrt.dll!abort();
                                }
                                /*BAD_CALL!*/ sub_401E80((int)_Block);
                                void* ptr36 = ptr18;
                                ptr1 = *(void**)((int)ptr20 + 4);
                                _Block = ptr20;
                                if(ptr1) {
                                    int v35 = *(int*)((int)ptr36 + 4);
                                    do {
                                        ptr1 = (void*)((int)ptr1 - 1);
                                        int v36 = *((int*)((int)(int*)((int)ptr1 * 4) + (int)_Block) + 2);
                                        while(v35) {
                                            v11 = v36;
                                            int v37 = v26{sub_401D60|sub_401CC0|sub_401CE0}((int)ptr8, *((int*)(v35 * 4 + (int)ptr36) + 1), v36);
                                            if(v37 <= 0) {
                                                break;
                                            }
                                            else {
                                                int v38 = *((int*)(v35 * 4 + (int)ptr36) + 1);
                                                int* ptr37 = (int*)(v35 + (int)ptr1);
                                                --v35;
                                                *((int*)((int)(int*)((int)ptr37 * 4) + (int)ptr36) + 2) = v38;
                                            }
                                        }
                                        *((int*)((int)(int*)((int)(int*)(v35 + (int)ptr1) * 4) + (int)ptr36) + 2) = v36;
                                    }
                                    while(ptr1);
                                    void* ptr38 = ptr20;
                                    *(int*)((int)ptr36 + 4) = *(int*)((int)ptr36 + 4) + *(int*)((int)_Block + 4);
                                    _Block = ptr38;
                                }
                                →msvcrt.dll!free(_Block);
                                param0 = (int)ptr8;
                                void* ptr39 = ptr18;
                                *(void**)ptr39 = *(void**)(param0 + 12);
                                *(char*)(param0 + 16) = *(char*)(param0 + 16) | 0x1;
                                *(void**)(param0 + 12) = ptr39;
                                goto loc_402264;
                            }
                        }
                        else {
                            sub_401E80((int)ptr18);
                            param0 = (int)ptr8;
                            void* ptr39 = ptr18;
                            *(void**)ptr39 = *(void**)(param0 + 12);
                            *(char*)(param0 + 16) = *(char*)(param0 + 16) | 0x1;
                            *(void**)(param0 + 12) = ptr39;
                            goto loc_402264;
                        }
                        while(1) {
                            if(v12 + 36 != ptr5) {
                                int v39 = *(int*)ptr5;
                                v11 = *(int*)ptr5;
                                void* ptr40 = ptr3;
                                int v40 = *((int*)(_Size * 4 + (int)ptr40) + 2);
                                int v41 = v26{sub_401D60}((int)ptr8, v40, v39);
                                if(v41 < 0) {
                                    void* ptr41 = ptr3;
                                    void* ptr42 = ptr5;
                                    void* ptr43 = _Block;
                                    int* ptr44 = (int*)((int)ptr42 - (int)ptr41);
                                    ptr5 = *(void**)((int)ptr44 + (int)ptr43);
                                    *(int*)((int)ptr44 + (int)ptr43) = 0;
                                    goto loc_4024B7;
                                }
                            }
                            *(void**)((int*)(_Size * 4 + (int)_Block) + 2) = ptr5;
                            ++_Size;
                            ptr5 = (void*)((int)ptr1 + 8);
                            ptr1 = (void*)((int)ptr1 + 4);
                            if(_Size >= (unsigned int)ptr0) {
                                ptr2 = ptr20;
                                ptr4 = ptr18;
                                _Block = ptr2;
                                ptr3 = ptr4;
                                goto loc_40266C;
                            }
                            else {
                            loc_4024B7:
                                v12 = gvar_4050B0;
                            }
                        }
                    }
                }
            }
            goto loc_402264;
        }
    }
    else {
    loc_40227B:
        if(!((unsigned char)param1 & 0x1)) {
            if(!((unsigned char)param1 & 0x2)) {
                return sub_402110(v18);
            }
            unsigned int* ptr45 = ptr8[3];
            while(*ptr45) {
                int v42 = v18;
                result = sub_402110(v18);
                if(result) {
                    return result;
                }
                ++ptr45;
            }
            return NULL;
        loc_402511:
            unsigned int* ptr46 = ptr8;
            result = (unsigned int*)(unsigned char)(*(short*)&ptr46[4] >>> 3);
            if(!result) {
                param0 = (int)ptr46[3];
                param1 = 0;
                v10 = *(int*)(param0 + 4);
                v9 = param0;
                v8 = (unsigned int)v10 > 0;
                goto loc_402530;
            }
            else {
                v7 = (unsigned int)(unsigned char)result;
                v6 = ptr8[3];
                result = (unsigned int*)sub_401BD0(param0, (int)ptr8);
                v5 = 0;
                unsigned int* ptr47 = result;
                v4 = *(unsigned int*)(v6 + 4);
            }
            if(v4 > 0) {
                int v43 = v7;
                int v44 = v7 & 0xf;
                goto loc_4025BE;
            loc_4022BB:
                do {
                    unsigned int v45 = (v0 + v2) >>> 1;
                    unsigned int* result1 = *(unsigned int**)(v45 * 4 + v1 + 8);
                    int v46 = sub_401C30();
                    int v47 = sub_401BD0(param0, (int)ptr8);
                    int* ptr48 = sub_401590(result1 + 2, &ptr6);
                    sub_401590((unsigned int*)ptr48, &v13);
                    result = ptr6;
                    if((unsigned int)result > (unsigned int)v18) {
                        v0 = v45;
                        v3 = v45;
                        goto loc_40231E;
                    }
                    if((unsigned int)(unsigned int*)((int)result + v13) > (unsigned int)v18) {
                        return result1;
                    }
                    v2 = v45 + 1;
                    v3 = v0;
                loc_40231E:
                    if(v3 > v2) {
                        goto loc_4022BB;
                    }
                    else {
                        break;
                    }
                loc_402530:
                    while(v8) {
                        param0 = (int)((unsigned int)(param1 + v10) >>> 1);
                        unsigned int* result2 = *(unsigned int**)(param0 * 4 + v9 + 8);
                        result = result2[2];
                        unsigned int v48 = result2[3];
                        if((unsigned int)result > (unsigned int)v18) {
                            v10 = param0;
                            v8 = (unsigned int)param1 < (unsigned int)v10;
                        }
                        else if((unsigned int)(unsigned int*)((int)result + v48) <= (unsigned int)v18) {
                            param1 = param0 + 1;
                            v8 = (unsigned int)param1 < (unsigned int)v10;
                        }
                        else {
                            return result2;
                        loc_4025BE:
                            do {
                                unsigned int v49 = (v4 + v5) >>> 1;
                                result1 = *(unsigned int**)(v49 * 4 + v6 + 8);
                                int* ptr49 = sub_401590(result1 + 2, &ptr7);
                                sub_401590((unsigned int*)ptr49, &v15);
                                result = ptr7;
                                if((unsigned int)result > (unsigned int)v18) {
                                    v4 = v49;
                                }
                                else if((unsigned int)(unsigned int*)((int)result + v15) > (unsigned int)v18) {
                                    return result1;
                                }
                                else {
                                    v5 = v49 + 1;
                                }
                                if(v4 > v5) {
                                    goto loc_4025BE;
                                }
                            }
                            while(v4 > v5);
                        }
                    }
                }
                while(1);
            }
            return NULL;
        }
        else if(!((unsigned char)param1 & 0x4)) {
            goto loc_402511;
        }
        else {
            param0 = (int)ptr8[3];
            v2 = 0;
            unsigned int v50 = *(unsigned int*)(param0 + 4);
            v1 = param0;
            v0 = v50;
            if(v50 <= 0) {
                return NULL;
            }
            goto loc_4022BB;
        }
    }
    return result;
}

unsigned int* sub_4027B0(int param0, int* param1) {
    unsigned int* result;
    void* ptr0;
    int v0;
    int v1;
    unsigned int* ptr1;
    int v2;
    int v3 = v1;
    unsigned int* ptr2 = &ptr0;
    sub_4016B0();
    unsigned int v4 = gvar_4050B0;
    LONG* Addend = (LONG*)(v4 + 20);
    if(gvar_405090) {
        LONG v5 = →KERNEL32.dll!InterlockedIncrement(Addend);
        ptr2 = &ptr0;
        if(v5) {
            int v6 = -1;
            DWORD v7 = →KERNEL32.dll!WaitForSingleObject((HANDLE)Addend[1], 0xffffffff);
            ptr2 = &ptr0;
            if(v7) {
                →KERNEL32.dll!InterlockedDecrement(Addend);
                ptr2 = &v0;
            }
        }
        v4 = gvar_4050B0;
    }
    int v8 = *(int*)(v4 + 16);
    while(v8) {
        int v9 = param0;
        if(*(unsigned int*)v8 > (unsigned int)v9) {
            v8 = *(int*)(v8 + 20);
        }
        else {
            --ptr2;
            *ptr2 = &loc_402931;
            unsigned int* ptr3 = /*BAD_CALL!*/ sub_402230(v2, v9);
            result = ptr3;
            v4 = gvar_4050B0;
            if(ptr3) {
                goto loc_402854;
            }
            else {
                goto loc_402800;
            }
        }
    }
    result = NULL;
loc_402800:
    do {
        v8 = *(int*)(v4 + 12);
        if(!v8) {
            goto loc_402854;
        }
        else {
            int v10 = param0;
            *(int*)(v4 + 12) = *(int*)(v8 + 20);
            --ptr2;
            *ptr2 = &loc_402817;
            unsigned int* ptr4 = /*BAD_CALL!*/ sub_402230(v2, v10);
            v4 = gvar_4050B0;
            result = ptr4;
            unsigned int* ptr5 = (unsigned int*)(v4 + 16);
            if(*(int*)(v4 + 16)) {
                v2 = *(int*)v8;
                do {
                    ptr1 = *ptr5;
                    if(*ptr1 < (unsigned int)v2) {
                        goto loc_4028D6;
                    }
                    else {
                        ptr5 = ptr1 + 5;
                    }
                }
                while(*(int*)(ptr1 + 5));
                *(int*)(v8 + 20) = 0;
                *ptr5 = v8;
                if(!result) {
                    goto loc_402800;
                }
                else {
                    goto loc_402854;
                }
            }
            else {
                ptr1 = *ptr5;
            loc_4028D6:
                *(unsigned int*)(v8 + 20) = ptr1;
                *ptr5 = v8;
            }
        }
    }
    while(!result);
    int v11 = v4 + 20;
    if(gvar_405090) {
        goto loc_4028F3;
    loc_402854:
        v11 = v4 + 20;
        if(gvar_405090) {
        loc_4028F3:
            *ptr2 = v11;
            --ptr2;
            *ptr2 = &loc_4028FB;
            LONG v12 = /*BAD_CALL!*/ →KERNEL32.dll!InterlockedDecrement(*(LONG**)(ptr2 + 1));
            --ptr2;
            if(v12 >= 0) {
                *(int*)(ptr2 + 2) = 0;
                *(int*)(ptr2 + 1) = 1;
                *ptr2 = *(int*)(v11 + 4);
                --ptr2;
                *ptr2 = &loc_402920;
                /*BAD_CALL!*/ →KERNEL32.dll!ReleaseSemaphore(*(HANDLE*)(ptr2 + 1), *(LONG*)(ptr2 + 2), *(LPLONG*)(ptr2 + 3));
                ptr2 -= 3;
            }
        }
    }
    if(result) {
        int* ptr6 = param1;
        *ptr6 = *(int*)(v8 + 4);
        *(ptr6 + 1) = *(int*)(v8 + 8);
        if(*(char*)(v8 + 16) & 0x4) {
            --ptr2;
            *ptr2 = &loc_40295C;
            int v13 = /*BAD_CALL!*/ sub_401C30();
        }
        --ptr2;
        *ptr2 = &loc_402893;
        int v14 = /*BAD_CALL!*/ sub_401BD0(v2, v8);
        *(ptr2 + 1) = param1 + 2;
        *ptr2 = (int*)(result + 2);
        --ptr2;
        *ptr2 = &loc_4028AC;
        /*BAD_CALL!*/ sub_401590(*(unsigned int**)(ptr2 + 1), *(unsigned int**)(ptr2 + 2));
    }
    return result;
}

int sub_4029A0() {
    int* ptr0;
    int* ptr1;
    ATOM nAtom;
    char v0;
    int v1;
    short v2;
    char v3;
    int v4 = 61;
    int* ptr2 = &ptr1;
    int v5 = v1;
    int v6 = (unsigned int)v2;
    int* ptr3 = &v5;
    char v7 = &ptr0 == 92;
    char v8 = (int)&nAtom < 0;
    char v9 = __parity__((unsigned char)&ptr0 - 92);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x54) ^ (int)&nAtom) >>> 4) & 0x1);
    char v11 = (unsigned int)&v5 < 84;
    char v12 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&nAtom) & (int)(int*)((int)&v5 ^ 0x54)) < 0;
    LPSTR v13 = &v0;
    int result = 0;
    char v14 = 1;
    char v15 = 0;
    char v16 = 1;
    char v17 = 0;
    char v18 = 0;
    *(int*)&nAtom = v6;
    UINT v19 = →KERNEL32.dll!GetAtomNameA(nAtom, &v0, 61);
    char v20 = v19 ? 0: 1;
    char v21 = v19 >= 0x80000000;
    char v22 = __parity__((unsigned char)v19);
    char v23 = 0;
    char v24 = 0;
    int* ptr4 = (int*)0x1F;
    int v25 = 1;
    if(!v20) {
    loc_4029DC:
        do {
            char v26 = *(char*)((int)ptr4 + (int)&v0) == 65;
            char v27 = *(char*)((int)ptr4 + (int)&v0) < 65;
            char v28 = __parity__(*(char*)((int)ptr4 + (int)&v0) - 65);
            char v29 = (unsigned char)*(char*)((int)ptr4 + (int)&v0) < 65;
            char v30 = (((*(char*)((int)ptr4 + (int)&v0) - 65) ^ *(char*)((int)ptr4 + (int)&v0)) & (*(char*)((int)ptr4 + (int)&v0) ^ 0x41)) < 0;
            char v31 = (((*(char*)((int)ptr4 + (int)&v0) - 65) ^ (*(char*)((int)ptr4 + (int)&v0) ^ 0x41)) >>> 4) & 0x1;
            if(v26) {
                result |= v25;
                int v32 = v25;
                v25 *= 2;
                char v33 = v25 ? 0: 1;
                char v34 = v25 < 0;
                char v35 = __parity__((unsigned char)v25);
                char v36 = (v25 >>> 4) & 0x1;
                char v37 = __carry__(v32, v32);
                char v38 = (v25 ^ v32) < 0;
                ptr3 = ptr4;
                ptr4 = (int*)((char*)ptr4 - 1);
                char v39 = ptr4 ? 0: 1;
                char v40 = (int)ptr4 < 0;
                char v41 = __parity__((unsigned char)ptr4);
                char v42 = (((int*)~(int)ptr4 ^ (int*)~(int)ptr3) >>> 4) & 0x1;
                char v43 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr3) & (int)ptr3) < 0;
                if(!v40) {
                    goto loc_4029DC;
                }
            }
            else {
                int v44 = v25;
                v25 *= 2;
                char v45 = v25 ? 0: 1;
                char v46 = v25 < 0;
                char v47 = __parity__((unsigned char)v25);
                char v48 = (v25 >>> 4) & 0x1;
                char v49 = __carry__(v44, v44);
                char v50 = (v25 ^ v44) < 0;
                ptr3 = ptr4;
                ptr4 = (int*)((char*)ptr4 - 1);
                char v51 = ptr4 ? 0: 1;
                v3 = (int)ptr4 < 0;
                char v52 = __parity__((unsigned char)ptr4);
                char v53 = (((int*)~(int)ptr4 ^ (int*)~(int)ptr3) >>> 4) & 0x1;
                char v54 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr3) & (int)ptr3) < 0;
            }
            break;
        }
        while(v3);
        v20 = *(int*)result == 64;
        v21 = *(int*)result < 64;
        v22 = __parity__((unsigned char)*(int*)result - 64);
        v24 = *(unsigned int*)result < 64;
        v23 = (((*(int*)result - 64) ^ *(int*)result) & (*(int*)result ^ 0x40)) < 0;
        v10 = (((*(int*)result - 64) ^ (*(int*)result ^ 0x40)) >>> 4) & 0x1;
        if(v20) {
            return result;
        }
        *(int*)&nAtom = "w32_sharedptr->size == sizeof(W32_EH_SHARED)";
        int v55 = 247;
        int v56 = "../../gcc-3.4.5-20060117-1/gcc/config/i386/w32-shared-ptr.c";
        int v57 = →msvcrt.dll!_assert();
    }
    *(int*)&nAtom = "GetAtomNameA (atom, s, sizeof(s)) != 0";
    int v58 = 241;
    int v59 = "../../gcc-3.4.5-20060117-1/gcc/config/i386/w32-shared-ptr.c";
    /*BAD_CALL!*/ →msvcrt.dll!_assert();
}

void sub_402A40() {
    void* _Block;
    void* ptr0;
    int* ptr1;
    void* ptr2;
    int* ptr3;
    int v0;
    char v1;
    int* ptr4 = &ptr3;
    void* ptr5 = ptr0;
    int* ptr6 = &ptr5;
    char v2 = &ptr1 == 188;
    char v3 = (int)&v0 < 0;
    char v4 = __parity__((unsigned char)&ptr1 - 188);
    char v5 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr5 ^ 0xac) ^ (int)&v0) >>> 4) & 0x1);
    char v6 = (unsigned int)&ptr5 < 172;
    char v7 = (int)(int*)((int)(int*)((int)&ptr5 ^ (int)&v0) & (int)(int*)((int)&ptr5 ^ 0xac)) < 0;
    if(!gvar_4050B0) {
        int v8 = 0x41414141;
        int v9 = 1112099885;
        LPCSTR v10 = &v8;
        int v11 = 0x41414141;
        int v12 = 0x41414141;
        int v13 = 1112099885;
        int v14 = 0x57434347;
        int v15 = 0x41414141;
        int v16 = 0x41414141;
        int v17 = 0x57434347;
        int v18 = 0x452d3233;
        int v19 = 0x41414141;
        int v20 = 0x41414141;
        int v21 = 0x452d3233;
        int v22 = 0x2d332d48;
        int v23 = 0x41414141;
        int v24 = 0x2d332d48;
        int v25 = 0x52485447;
        int v26 = 0x52485447;
        int v27 = 1313426733;
        int v28 = 1313426733;
        int v29 = 0x32335747;
        int v30 = 0x32335747;
        int v31 = 0;
        char v32 = 0;
        ATOM v33 = →KERNEL32.dll!FindAtomA(&v8);
        int v34 = (unsigned int)(unsigned short)v33;
        int v35 = (unsigned int)(unsigned short)v33;
        if(!v34) {
            void* ptr7 = →msvcrt.dll!malloc(64);
            char v36 = ptr7 ? 0: 1;
            char v37 = (int)ptr7 < 0;
            char v38 = __parity__((unsigned char)ptr7);
            char v39 = 0;
            char v40 = 0;
            _Block = ptr7;
            if(v36) {
                int* ptr8 = &ptr2;
                /*NO_RETURN*/ →msvcrt.dll!abort();
            }
            void* ptr9 = ptr7;
            int v41 = v35;
            int v42 = 16;
            do {
                *(int*)ptr9 = v41;
                ptr9 = (void*)((int)ptr9 + 4);
                --v42;
            }
            while(v42 == 0);
            *(int*)((int)_Block + 4) = &→msvcrt.dll!abort;
            int v43 = 1;
            *(int*)((int)_Block + 8) = &gvar_402990;
            unsigned int v44 = gvar_405060;
            *(int*)_Block = 64;
            unsigned int v45 = gvar_405064;
            *(unsigned int*)((int)_Block + 20) = v44;
            unsigned int v46 = gvar_403030;
            *(unsigned int*)((int)_Block + 24) = v45;
            unsigned int v47 = gvar_403034;
            *(unsigned int*)((int)_Block + 28) = v46;
            unsigned int v48 = gvar_405070;
            *(unsigned int*)((int)_Block + 32) = v47;
            unsigned int v49 = gvar_405074;
            *(unsigned int*)((int)_Block + 40) = v48;
            unsigned int v50 = gvar_405080;
            *(int*)((int)_Block + 48) = -1;
            *(unsigned int*)((int)_Block + 44) = v49;
            *(unsigned int*)((int)_Block + 52) = v50;
            unsigned int v51 = gvar_403038;
            *(unsigned int*)((int)_Block + 60) = gvar_40303C;
            int v52 = 31;
            *(unsigned int*)((int)_Block + 56) = v51;
            do {
                char v53 = (unsigned int)(int*)(v43 & (int)_Block) >= 1 ? 0: ' ';
                v43 *= 2;
                *(char*)(v52 + (int)&v1) = v53 + 65;
                --v52;
            }
            while(v52 >= 0);
            int v54 = 1112099885;
            int v55 = 0x57434347;
            int v56 = 0x452d3233;
            int v57 = 0x2d332d48;
            int v58 = 0x52485447;
            int v59 = 1313426733;
            int v60 = 0x32335747;
            char v61 = 0;
            ATOM v62 = →KERNEL32.dll!AddAtomA(&v1);
            if((unsigned short)v62) {
                int v63 = sub_4029A0();
                if(v63 == _Block && (unsigned short)v62) {
                    goto loc_402C26;
                }
            }
            →msvcrt.dll!free(_Block);
            ATOM v64 = →KERNEL32.dll!FindAtomA(&v8);
        }
        _Block = (void*)sub_4029A0();
    loc_402C26:
        gvar_4050B0 = _Block;
        gvar_4050A0 = (int*)((int)_Block + 4);
        gvar_4050C0 = (int*)((int)_Block + 8);
    }
}

int sub_402C60(int param0) {
    int result;
    char v0;
    int* ptr0;
    int* ptr1 = &v0;
    while((unsigned int)ptr0 >= 0x1000) {
        ptr1 -= 0x400;
        ptr0 -= 0x400;
    }
    return result;
}

LONG sub_402E20() {
    return sub_4012C0();
}

int sub_402E30() {
    return sub_4012F0();
}

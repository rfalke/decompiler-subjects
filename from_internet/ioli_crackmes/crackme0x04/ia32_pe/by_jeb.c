
// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    _set_app_type(1);
    /*NO_RETURN*/ sub_401140();
}

int sub_401000(unsigned int* param0) {
    int _Signal;
    char v0;
    int result = 0;
    int v1 = 0;
    unsigned int v2 = **param0;
    if(v2 > 3221225617) {
        if(v2 == 0xc0000094) {
        loc_401037:
            _crt_signal_t v3 = signal(8, NULL);
            if(v3 == 1) {
                signal(8, (_crt_signal_t)0x1);
                if(v1) {
                    sub_401430();
                }
            }
            else if(!v3) {
                return result;
            }
            else {
                v3(8);
            }
        }
        else if(v2 >= 3221225620) {
            v0 = v2 == 0xc0000096;
        loc_40108C:
            if(!v0) {
                return result;
            }
            _crt_signal_t v4 = signal(4, NULL);
            if(v4 == 1) {
                _Signal = 4;
            loc_401122:
                signal(_Signal, (_crt_signal_t)0x1);
            }
            else if(!v4) {
                return result;
            }
            else {
                v4(4);
            }
        }
        else if(v2 != 0xc0000093) {
            return 0;
        }
        else {
            v1 = 1;
            goto loc_401037;
        }
    loc_40104F:
        result = -1;
    }
    else if(v2 >= 3221225613) {
        v1 = 1;
        goto loc_401037;
    }
    else if(v2 != 0xc0000005) {
        v0 = v2 == 0xc000001d;
        goto loc_40108C;
    }
    else {
        _crt_signal_t v5 = signal(11, NULL);
        if(v5 == 1) {
            _Signal = 11;
            goto loc_401122;
        }
        else if(v5) {
            v5(11);
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
    sub_401430();
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
        sub_401400();
        char*** ptr4 = __p__environ();
        *(char***)((int*)((int)&ptr0 & 0xfffffff0) + 1) = ptr4[0];
        *(unsigned int*)((int)&ptr0 & 0xfffffff0) = gvar_405000;
        *(unsigned int*)((int*)((int)&ptr0 & 0xfffffff0) - 1) = gvar_405004;
        *((int*)((int)&ptr0 & 0xfffffff0) - 2) = &loc_401227;
        int v6 = /*BAD_CALL!*/ sub_401395(v1);
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
    _set_app_type(2);
    /*NO_RETURN*/ sub_401140();
}

int sub_4012A0(FUNCPTR _) {
    return atexit(_);
}

int sub_401310(char* _Str) {
    int v0;
    int v1 = 0;
    unsigned int min = 0;
    for(size_t i = →msvcrt.dll!strlen(_Str); i > min; i = →msvcrt.dll!strlen(_Str)) {
        char v2 = _Str[min];
        →msvcrt.dll!sscanf(&v2, (CHAR*)&gvar_404000, &v0);
        v1 += v0;
        if(v1 == 15) {
            →msvcrt.dll!printf();
            /*NO_RETURN*/ →msvcrt.dll!exit(0);
        }
        ++min;
    }
    return →msvcrt.dll!printf();
}

int sub_401395(int param0) {
    char v0;
    int v1 = 16;
    sub_402CD0(param0);
    sub_4014D0();
    →msvcrt.dll!printf();
    →msvcrt.dll!printf();
    char* ptr0 = &v0;
    →msvcrt.dll!scanf();
    sub_401310(&v0);
    return 0;
}

int sub_401400() {
    int result;
    int* ptr0 = (int*)&gvar_404300;
    while((unsigned int)ptr0 < &gvar_404300) {
        int v0 = *(ptr0 + 1);
        result = *ptr0;
        ptr0 += 2;
        *(int*)((int)&MZHeader + v0) = *(int*)((int)&MZHeader + v0) + result;
    }
    return result;
}

void sub_401430() {
    fninit();
}

int sub_401440() {
    int result;
    int v0;
    int* ptr0 = gvar_403020;
    if(*ptr0) {
        do {
            result = *ptr0{sub_402EC0}();
            unsigned int v1 = gvar_403020;
            ptr0 = (int*)(v1 + 4);
            v0 = *(int*)(v1 + 4);
            gvar_403020 = ptr0;
        }
        while(v0);
    }
    return result;
}

int sub_4014D0() {
    int result1;
    int result = gvar_405040;
    if(result) {
        return result;
    }
    gvar_405040 = 1;
    int v0 = 0;
    for(char i = 0; !i; i = *(unsigned int*)(v0 * 4 + (int)&gvar_402ED4) ? 0: 1) {
        ++v0;
    }
    int counter = v0;
    if(v0) {
        do {
            *(unsigned int*)(counter * 4 + (int)&gvar_402ED0)();
            --counter;
        }
        while(counter);
    }
    sub_4012A0((void __cdecl (*_)())&sub_401440);
    return result1;
}

int sub_4014F0() {
    int v0;
    int result = 0;
    if((unsigned char)v0 != 0xFF) {
        result = 2;
        if((v0 & 0x7) != 2) {
            if((v0 & 0x7) >= 2) {
                result = 4;
                if((v0 & 0x7) != 3) {
                    if((v0 & 0x7) == 4) {
                        return 8;
                    }
                    /*NO_RETURN*/ →msvcrt.dll!abort();
                }
            }
            else if(v0 & 0x7) {
                /*NO_RETURN*/ →msvcrt.dll!abort();
            }
            else {
                result = 4;
            }
        }
    }
    return result;
}

char* sub_401540(int param0, int* param1) {
    int v0;
    char* ptr0;
    int v1 = 0;
    char* result = ptr0;
    int v2 = 0;
    do {
        param0 = (unsigned int)(unsigned char)v1 | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
        v1 += 7;
        v0 = (unsigned int)*result;
        ++result;
        v2 |= (v0 & 0x7f) << (param0 & 0x1f);
    }
    while((unsigned char)v0 < 0);
    *param1 = v2;
    return result;
}

char* sub_401590(int param0, int* param1) {
    char v0;
    char* ptr0;
    char* result = ptr0;
    unsigned int v1 = 0;
    int v2 = 0;
    do {
        unsigned int v3 = v1;
        v1 += 7;
        v0 = *result;
        ++result;
        v2 |= ((unsigned int)v0 & 0x7f) << (v3 & 0x1f);
    }
    while(v0 < 0);
    if(v1 <= 31 && (v0 & 0x40)) {
        v2 |= -1 << (v1 & 0x1f);
    }
    *param1 = v2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_401600(unsigned int* param0, unsigned int* param1) {
    int* result;
    unsigned int* ptr0;
    unsigned int* ptr1;
    unsigned int* ptr2;
    char v0;
    int v1;
    int v2;
    int v3 = v2;
    v2 = (unsigned int)v0 | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
    if(v0 != 80) {
        switch((unsigned int)(v2 & 0xf)) {
            case 1: {
                int* ptr3 = (int*)sub_401540((int)param0, (int)&ptr1);
                ptr0 = ptr1;
                result = ptr3;
                break;
            }
            case 9: {
                int* ptr4 = (int*)sub_401590((int)param0, (int)&ptr2);
                ptr0 = ptr2;
                result = ptr4;
                break;
            }
            case 2: 
            case 10: {
                ptr0 = (unsigned int*)*(short*)param0;
                result = (int*)((char*)param0 + 2);
                break;
            }
            case 0: 
            case 3: 
            case 11: {
                ptr0 = *param0;
                result = (int*)(param0 + 1);
                break;
            }
            case 4: 
            case 12: {
                ptr0 = *param0;
                result = (int*)(param0 + 2);
                break;
            }
            default: {
                /*NO_RETURN*/ →msvcrt.dll!abort();
            }
        }
        if(ptr0) {
            ptr0 = (v2 & 0x70) != 16 ? (unsigned int*)((int)ptr0 + v1): (unsigned int*)((int)ptr0 + (int)param0);
            if((unsigned char)v2 < 0) {
                ptr0 = *ptr0;
            }
        }
        *param1 = ptr0;
        return result;
    }
    unsigned int* ptr5 = (unsigned int*)((int)(int*)((char*)param0 + 3) & 0xfffffffc);
    *param1 = *ptr5;
    return (int*)(ptr5 + 1);
}

HANDLE sub_4016D0() {
    unsigned int v0 = gvar_4050B0;
    *(int*)(v0 + 20) = -1;
    HANDLE result = →KERNEL32.dll!CreateSemaphoreA(NULL, 0, 0xFFFF, NULL);
    *(HANDLE*)(v0 + 24) = result;
    return result;
}

LONG sub_401720() {
    LONG result = gvar_405090;
    unsigned int v0 = gvar_4050B0;
    if(result && (int*)(v0 + 28)) {
        result = *(LONG*)(v0 + 28);
        if(!result) {
            result = →KERNEL32.dll!InterlockedIncrement((LONG*)(v0 + 32));
            if(!result) {
                result = (LONG)sub_4016D0();
                *(int*)(v0 + 28) = 1;
            }
            else if(!*(int*)(v0 + 28)) {
                do {
                    →KERNEL32.dll!Sleep(0);
                    result = *(LONG*)(v0 + 28);
                }
                while(!result);
            }
        }
    }
    return result;
}

LONG sub_4017B0(int* param0, int* param1, int param2, int param3) {
    LONG result;
    void* ptr0;
    int v0;
    int* ptr1 = param0;
    int* ptr2 = param1;
    if(ptr1 && *ptr1) {
        *ptr2 = -1;
        *(ptr2 + 1) = param2;
        *(ptr2 + 4) = 0;
        *(unsigned int*)(ptr2 + 3) = ptr1;
        *(ptr2 + 2) = param3;
        *(short*)(ptr2 + 4) = (unsigned short)((unsigned int)*(short*)(ptr2 + 4) | 0x7f8);
        unsigned int* ptr3 = &ptr0;
        sub_401720();
        unsigned int v1 = gvar_405090;
        ptr1 = gvar_4050B0;
        if(v1) {
            LONG v2 = →KERNEL32.dll!InterlockedIncrement((LONG*)(ptr1 + 5));
            ptr3 = &ptr0;
            if(v2) {
                DWORD v3 = →KERNEL32.dll!WaitForSingleObject(*(HANDLE*)(ptr1 + 6), 0xffffffff);
                ptr3 = &ptr0;
                if(v3) {
                    →KERNEL32.dll!InterlockedDecrement((LONG*)(ptr1 + 5));
                    ptr3 = &v0;
                }
            }
            ptr1 = gvar_4050B0;
            v1 = gvar_405090;
        }
        result = *(LONG*)(ptr1 + 3);
        *(LONG*)(ptr2 + 5) = *(LONG*)(ptr1 + 3);
        *(unsigned int*)(ptr1 + 3) = ptr2;
        if(v1) {
            *ptr3 = ptr1 + 5;
            --ptr3;
            *ptr3 = &loc_40182F;
            result = /*BAD_CALL!*/ →KERNEL32.dll!InterlockedDecrement(*(LONG**)(ptr3 + 1));
            --ptr3;
            if(result >= 0) {
                *(int*)(ptr3 + 2) = 0;
                *(int*)(ptr3 + 1) = 1;
                *ptr3 = *(ptr1 + 6);
                --ptr3;
                *ptr3 = &loc_401850;
                result = (LONG)/*BAD_CALL!*/ →KERNEL32.dll!ReleaseSemaphore(*(HANDLE*)(ptr3 + 1), *(LONG*)(ptr3 + 2), *(LPLONG*)(ptr3 + 3));
            }
        }
    }
    return result;
}

LONG sub_4018A0(int* param0, int* param1) {
    return sub_4017B0(param0, param1, 0, 0);
}

int sub_4018D0(int* param0) {
    if(!param0[0]) {
        return 0;
    }
    void* ptr0 = →msvcrt.dll!malloc(24);
    sub_4018A0(param0, (int*)ptr0);
    return (int)ptr0;
}

LONG sub_401910(int param0, int* param1, int param2, int param3) {
    LONG result1;
    void* ptr0;
    int v0;
    int* ptr1 = param1;
    int v1 = param2;
    *ptr1 = -1;
    *(ptr1 + 1) = v1;
    *(ptr1 + 2) = param3;
    *(ptr1 + 4) = 0;
    *(char*)(ptr1 + 4) = *(char*)(ptr1 + 4) | 0x2;
    *(ptr1 + 3) = param0;
    *(short*)(ptr1 + 4) = (unsigned short)((unsigned int)*(short*)(ptr1 + 4) | 0x7f8);
    sub_401720();
    unsigned int v2 = gvar_4050B0;
    if(!gvar_405090) {
        result1 = *(LONG*)(v2 + 12);
        *(LONG*)(ptr1 + 5) = *(LONG*)(v2 + 12);
        *(unsigned int*)(v2 + 12) = ptr1;
    }
    else {
        LONG v3 = →KERNEL32.dll!InterlockedIncrement((LONG*)(v2 + 20));
        unsigned int* ptr2 = &ptr0;
        if(v3) {
            DWORD v4 = →KERNEL32.dll!WaitForSingleObject(*(HANDLE*)(v2 + 24), 0xffffffff);
            ptr2 = &ptr0;
            if(v4) {
                →KERNEL32.dll!InterlockedDecrement((LONG*)(v2 + 20));
                ptr2 = &v0;
            }
        }
        v2 = gvar_4050B0;
        unsigned int v5 = gvar_405090;
        result1 = *(LONG*)(v2 + 12);
        *(LONG*)(ptr1 + 5) = *(LONG*)(v2 + 12);
        *(unsigned int*)(v2 + 12) = ptr1;
        if(v5) {
            *ptr2 = v2 + 20;
            --ptr2;
            *ptr2 = &loc_4019B8;
            result1 = /*BAD_CALL!*/ →KERNEL32.dll!InterlockedDecrement(*(LONG**)(ptr2 + 1));
            --ptr2;
            if(result1 >= 0) {
                *(int*)(ptr2 + 2) = 0;
                *(int*)(ptr2 + 1) = 1;
                int result = *(int*)(v2 + 24);
                *ptr2 = *(int*)(v2 + 24);
                --ptr2;
                *ptr2 = &loc_4019D9;
                /*BAD_CALL!*/ →KERNEL32.dll!ReleaseSemaphore(*(HANDLE*)(ptr2 + 1), *(LONG*)(ptr2 + 2), *(LPLONG*)(ptr2 + 3));
                return result;
            }
        }
    }
    return result1;
}

LONG sub_401A10(int param0, int* param1) {
    return sub_401910(param0, param1, 0, 0);
}

LONG sub_401A40(int param0) {
    void* ptr0 = →msvcrt.dll!malloc(24);
    return sub_401A10(param0, (int*)ptr0);
}

int sub_401C00(int* param0) {
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
    sub_401720();
    unsigned int v6 = gvar_4050B0;
    LONG* Addend = (LONG*)(v6 + 20);
    if(!gvar_405090) {
    loc_401AAB:
        int* ptr3 = (int*)(v6 + 12);
        if(*(int*)(v6 + 12)) {
            do {
                v2 = *ptr3;
                if(*(int*)(v2 + 12) != ptr1) {
                    ptr3 = (int*)(v2 + 20);
                }
                else {
                    result = v2;
                loc_401AFB:
                    *ptr3 = *(int*)(result + 20);
                loc_401B07:
                    if(gvar_405090) {
                        *ptr2 = v6 + 20;
                        --ptr2;
                        *ptr2 = &loc_401B39;
                        LONG v7 = /*BAD_CALL!*/ →KERNEL32.dll!InterlockedDecrement(*(LONG**)(ptr2 + 1));
                        --ptr2;
                        if(v7 < 0) {
                            return result;
                        }
                        *(int*)(ptr2 + 2) = 0;
                        *(int*)(ptr2 + 1) = 1;
                        *ptr2 = *(int*)(v6 + 24);
                        --ptr2;
                        *ptr2 = &loc_401B5A;
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
                    goto loc_401ADE;
                }
                else {
                    result = v9;
                    goto loc_401AFB;
                }
            }
            if(**(unsigned int*)(v9 + 12) != ptr1) {
            loc_401ADE:
                ptr3 = (int*)(v9 + 20);
                v8 = *(int*)(v9 + 20) ? 0: 1;
            }
            else {
                result = v9;
                *ptr3 = *(int*)(v9 + 20);
                *ptr2 = *(int*)(result + 12);
                --ptr2;
                *ptr2 = &loc_401B73;
                /*BAD_CALL!*/ →msvcrt.dll!free(*(void**)(ptr2 + 1));
                v6 = gvar_4050B0;
                goto loc_401B07;
            }
        }
        ptr1 = (int*)(v6 + 20);
        if(gvar_405090) {
            *ptr2 = ptr1;
            --ptr2;
            *ptr2 = &loc_401B9B;
            LONG v10 = /*BAD_CALL!*/ →KERNEL32.dll!InterlockedDecrement(*(LONG**)(ptr2 + 1));
            --ptr2;
            if(v10 < 0) {
                --ptr2;
                *ptr2 = &loc_401B93;
            }
            else {
                *(int*)(ptr2 + 2) = 0;
                *(int*)(ptr2 + 1) = 1;
                *ptr2 = *(ptr1 + 1);
                --ptr2;
                *ptr2 = &loc_401BBC;
                /*BAD_CALL!*/ →KERNEL32.dll!ReleaseSemaphore(*(HANDLE*)(ptr2 + 1), *(LONG*)(ptr2 + 2), *(LPLONG*)(ptr2 + 3));
                ptr2 -= 4;
                *ptr2 = &loc_401BC4;
            }
        }
        else {
            --ptr2;
            *ptr2 = &loc_401B93;
        }
        /*NO_RETURN*/ →msvcrt.dll!abort();
    }
    v1 = →KERNEL32.dll!InterlockedIncrement(Addend);
    ptr2 = &ptr0;
    if(!v1) {
        v6 = gvar_4050B0;
        goto loc_401AAB;
    }
    else {
        v0 = →KERNEL32.dll!WaitForSingleObject(Addend[1], 0xffffffff);
        ptr2 = &ptr0;
    }
    if(v0) {
        →KERNEL32.dll!InterlockedDecrement(Addend);
        ptr2 = &v3;
    }
    v6 = gvar_4050B0;
    goto loc_401AAB;
}

int* sub_401C10(int* param0) {
    int result;
    if(!param0[0]) {
        return param0;
    }
    int v0 = sub_401C00(param0);
    →msvcrt.dll!free((void*)v0);
    return result;
}

int sub_401C40(int param0, int param1) {
    char v0;
    int v1;
    int result = 0;
    if((unsigned char)v1 == 0xFF) {
        return result;
    }
    else if((v1 & 0x70) == 32) {
        return *(int*)(param1 + 4);
    }
    else if((v1 & 0x70) < 32) {
        if(!(v1 & 0x70)) {
            return 0;
        }
        v0 = (v1 & 0x70) == 16;
        goto loc_401C68;
    }
    else if((v1 & 0x70) != 48) {
        v0 = (v1 & 0x70) == 80;
    loc_401C68:
        if(!v0) {
            /*NO_RETURN*/ →msvcrt.dll!abort();
        }
        return 0;
    }
    else {
        return *(int*)(param1 + 8);
    }
}

int sub_401CA0() {
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
        sub_401540(v7 + v4 + 10, &v0);
        char* ptr0 = (char*)(v4 + 10);
        char* ptr1 = sub_401590(v5, &v1);
        char* ptr2 = sub_401540((int)(ptr1 + 1), &v0);
    loc_401CF0:
        char v8 = *ptr0;
        while(v8 != 82) {
            switch(v8) {
                case 76: {
                    ++ptr2;
                    ++ptr0;
                    goto loc_401CF0;
                }
                case 80: {
                    ++ptr0;
                    ptr2 = (char*)sub_401600((unsigned int*)(ptr2 + 1), &v2);
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

int sub_401D50(int param0, int param1, int param2) {
    unsigned int v0;
    unsigned int v1;
    int v2;
    sub_401C40(v2, param0);
    sub_401600((unsigned int*)(param1 + 8), &v0);
    sub_401600((unsigned int*)(param2 + 8), &v1);
    int result = 1;
    char v3 = v1 > v0;
    if((v3 || v1 == v0)) {
        result = v3 ? -1: 0;
    }
    return result;
}

int sub_401DD0(int param0, int param1, int param2) {
    unsigned int v0;
    unsigned int v1;
    int v2;
    sub_401CA0();
    sub_401C40(v2, param0);
    sub_401600((unsigned int*)(param1 + 8), &v0);
    sub_401CA0();
    sub_401C40(v2, param0);
    sub_401600((unsigned int*)(param2 + 8), &v1);
    int result = 1;
    char v3 = v1 > v0;
    if((v3 || v1 == v0)) {
        result = v3 ? -1: 0;
    }
    return result;
}

int sub_401E60(int param0, int param1, int param2) {
    int v0;
    int result;
    int v1 = param1;
    int v2 = result;
    int v3 = v0;
    int v4 = v1 * 2 + 1;
    if(v4 < param2) {
        int v5 = param0;
        do {
            int v6 = v4 + 1;
            if(v6 < param2) {
                int v7 = v3(v2, *(int*)(v4 * 4 + v5), *(int*)(v4 * 4 + v5 + 4));
                if(v7 < 0) {
                    v4 = v6;
                }
            }
            result = v3(v2, *(int*)(v1 * 4 + v5), *(int*)(v4 * 4 + v5));
            if(result >= 0) {
                return result;
            }
            v0 = *(int*)(v1 * 4 + v5);
            result = *(int*)(v4 * 4 + v5);
            *(int*)(v1 * 4 + v5) = *(int*)(v4 * 4 + v5);
            v1 = v4;
            *(int*)(v4 * 4 + v5) = v0;
            v4 = v4 * 2 + 1;
        }
        while(v4 < param2);
    }
    return result;
}

int sub_401EF0(int param0) {
    int v0;
    int v1 = v0;
    int v2 = *(int*)(param0 + 4);
    int v3 = param0 + 8;
    int result = v2 >>> 1;
    int v4 = v2 >>> 1;
    --v4;
    while(v4 >= 0) {
        result = sub_401E60(v3, v4, v2);
        --v4;
    }
    int v5 = v2 - 1;
    while(v5 > 0) {
        int v6 = *(int*)v3;
        *(int*)v3 = *(int*)(v5 * 4 + v3);
        *(int*)(v5 * 4 + v3) = v6;
        int v7 = v5;
        --v5;
        result = sub_401E60(v3, 0, v7);
    }
    return result;
}

int sub_401F60(int param0, int* param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int* ptr1 = param1;
    int v3 = v2;
    char v4 = *param1 ? 0: 1;
    int* ptr2 = NULL;
    int result = 0;
    int v5 = 0;
    int v6 = 0;
    while(!v4) {
        int v7 = *(ptr1 + 1);
        if(v7) {
            int* ptr3 = (int*)((int)ptr1 - v7) + 1;
            if(ptr3 != ptr2) {
                ptr2 = ptr3;
                v5 = sub_401CA0();
                int v8 = sub_401C40(v0, v1);
                int v9 = (unsigned int)*(short*)(v1 + 16);
                v6 = v8;
                if((unsigned int)(unsigned char)(v9 >>> 3) == 0xFF) {
                    *(short*)(v1 + 16) = (unsigned short)(((unsigned int)(unsigned char)v5 * 8) | (v9 & 0xfffff807));
                }
                else if((unsigned int)(unsigned char)(v9 >>> 3) != v5) {
                    *(char*)(v1 + 16) = *(char*)(v1 + 16) | 0x4;
                }
            }
            sub_401600((unsigned int*)(ptr1 + 2), &ptr0);
            int v10 = /*BAD_CALL!*/ sub_4014F0();
            if((int*)(((unsigned int)v10 <= 3 ? (1 << ((v10 * 8) & 0x1f)) - 1: -1) & (int)ptr0)) {
                ++result;
                if(*(unsigned int*)v1 > (unsigned int)ptr0) {
                    *(int**)v1 = ptr0;
                }
            }
        }
        int* ptr4 = (int*)(*ptr1 + (int)ptr1);
        ptr1 = ptr4 + 1;
        v4 = *(ptr4 + 1) ? 0: 1;
    }
    return result;
}

int sub_402080(int* param0) {
    int result;
    char v0;
    int v1;
    int* ptr0;
    int v2;
    int v3;
    int* ptr1 = param0;
    int v4 = v2;
    int v5 = (unsigned int)*(short*)(v2 + 16);
    int* ptr2 = ptr0;
    int v6 = 0;
    int v7 = (int)(unsigned char)(v5 >>> 3);
    int v8 = sub_401C40(v3, v4);
    char v9 = *ptr1 ? 0: 1;
    int v10 = v8;
    while(!v9) {
        int v11 = *(ptr1 + 1);
        if(v11) {
            if((*(char*)(v4 + 16) & 0x4)) {
                int v12 = (int)ptr1 - v11 + 4;
                if(v12 != v6) {
                    v6 = v12;
                    v7 = sub_401CA0();
                    v10 = sub_401C40(v3, v4);
                }
            }
            if(!v7) {
                v0 = *(ptr1 + 2) ? 0: 1;
            }
            else {
                sub_401600((unsigned int*)(ptr1 + 2), &v1);
                int v13 = sub_4014F0();
                v0 = (unsigned int)v13 <= 3 ? ((1 << ((v13 * 8) & 0x1f)) - 1) & v1 ? 0: 1: v1 ? 0: 1;
            }
            if(!v0) {
                int v14 = *ptr2;
                if(v14) {
                    int v15 = *(int*)(v14 + 4);
                    *(unsigned int*)(v15 * 4 + v14 + 8) = ptr1;
                    result = v15 + 1;
                    *(int*)(v14 + 4) = v15 + 1;
                }
            }
        }
        int* ptr3 = (int*)(*ptr1 + (int)ptr1);
        ptr1 = ptr3 + 1;
        v9 = *(ptr3 + 1) ? 0: 1;
    }
    return result;
}

int* sub_402180(int param0) {
    int v0;
    unsigned int v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5;
    int* ptr0;
    int v6;
    int v7;
    int* result = ptr0;
    int v8 = v7;
    int v9 = v6;
    int v10 = (unsigned int)*(short*)(v6 + 16);
    int* ptr1 = NULL;
    int v11 = (int)(unsigned char)(v10 >>> 3);
    int v12 = sub_401C40(v5, v9);
    char v13 = *result ? 0: 1;
    int v14 = v12;
    while(!v13) {
        int v15 = *(result + 1);
        if(v15) {
            if((*(char*)(v9 + 16) & 0x4)) {
                int* ptr2 = (int*)((int)result - v15) + 1;
                if(ptr2 != ptr1) {
                    ptr1 = ptr2;
                    v11 = sub_401CA0();
                    v14 = sub_401C40(v5, v9);
                }
            }
            if(!v11) {
                v4 = *(result + 2);
                v3 = *(result + 2);
                v2 = *(unsigned int*)(result + 3);
                v1 = *(unsigned int*)(result + 3);
                if(!v4) {
                    goto loc_4021B6;
                }
                else {
                    goto loc_40221B;
                }
            }
            else {
                int* ptr3 = sub_401600((unsigned int*)(result + 2), &v3);
                sub_401600((unsigned int*)ptr3, &v1);
                v0 = sub_4014F0();
                v4 = v3;
            }
            if((((unsigned int)v0 <= 3 ? (1 << ((v0 * 8) & 0x1f)) - 1: -1) & v4)) {
                v2 = v1;
            loc_40221B:
                if((unsigned int)(param0 - v4) < v2) {
                    return result;
                }
            }
        }
    loc_4021B6:
        int* ptr4 = (int*)(*result + (int)result);
        result = ptr4 + 1;
        v13 = *(ptr4 + 1) ? 0: 1;
    }
    return NULL;
}

int sub_4022A0(int param0, int param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    int v3;
    int v4;
    unsigned int v5;
    int* ptr0;
    int v6;
    int v7;
    unsigned int v8;
    int v9;
    int v10;
    int result;
    int* ptr1;
    char v11;
    int v12;
    int* ptr2;
    int* ptr3;
    int v13;
    int v14;
    int v15 = param1;
    int v16 = (int)*(char*)&ptr2[4];
    int v17 = (int)ptr2;
    if(!((unsigned char)v16 & 0x1)) {
        int v18 = (int)ptr2;
        void* ptr4 = (void*)(ptr2[4] >>> 11);
        void* ptr5 = ptr4;
        if(!ptr4) {
            if(((unsigned char)v16 & 0x2)) {
                unsigned int* ptr6 = *(unsigned int*)(v18 + 12);
                if(*ptr6) {
                    do {
                        int* ptr7 = *ptr6;
                        ++ptr6;
                        result = sub_401F60(v18, ptr7);
                        ptr5 = (void*)(result + (int)ptr5);
                    }
                    while(*ptr6);
                }
            }
            else {
                ptr5 = (void*)sub_401F60(v18, *(int**)(v17 + 12));
            }
            int v19 = v17;
            int* ptr8 = (int*)((int)(int*)((int)ptr5 * 0x800) | (*(int*)(v19 + 16) & 0x7ff));
            if((int*)((int)ptr8 >>> 11) != ptr5) {
                *(unsigned int*)(v19 + 16) = (int*)((int)ptr8 & 0x7ff);
                param0 = (int)ptr5;
                if(!param0) {
                loc_4022D4:
                    int v20 = v17;
                    if(*(unsigned int*)v20 > (unsigned int)v15) {
                        return result;
                    }
                    v16 = (int)*(char*)(v20 + 16);
                    goto loc_4022EB;
                }
                else {
                    goto loc_40243F;
                }
            }
            else {
                *(unsigned int*)(v17 + 16) = ptr8;
                goto loc_4022C9;
            }
        }
        else {
        loc_4022C9:
            param0 = (int)ptr5;
            if(param0) {
            loc_40243F:
                size_t _Size = (size_t)((int*)((int)ptr5 * 4) + 2);
                ptr4 = →msvcrt.dll!malloc(_Size);
                int v21 = (int)ptr4;
                if(ptr4) {
                    *(int*)((int)ptr4 + 4) = 0;
                    void* ptr9 = →msvcrt.dll!malloc(_Size);
                    void* ptr10 = ptr9;
                    if(ptr9) {
                        *(int*)((int)ptr9 + 4) = 0;
                    }
                    int v22 = v17;
                    if((*(char*)(v22 + 16) & 0x2)) {
                        _Size = *(size_t*)(v22 + 12);
                        int* ptr11 = *(int**)_Size;
                        if(ptr11) {
                            do {
                                _Size += 4;
                                sub_402080(ptr11);
                                ptr11 = *(int**)_Size;
                            }
                            while(ptr11);
                        }
                    }
                    else {
                        sub_402080(*(int**)(v17 + 12));
                    }
                    int v23 = v21;
                    if(!v23 || *(int*)(v23 + 4) == ptr5) {
                        int v24 = &sub_401DD0;
                        int v25 = v17;
                        if(!(*(char*)(v25 + 16) & 0x4)) {
                            v24 = !(unsigned char)(*(short*)(v25 + 16) >>> 3) ? &gvar_401D30: &sub_401D50;
                        }
                        void* ptr12 = ptr10;
                        v10 = (int)ptr12;
                        void* ptr13 = ptr12;
                        if(ptr12) {
                            v9 = v21;
                            _Size = 0;
                            v8 = gvar_4050B0;
                            v7 = v9;
                            unsigned int v26 = *(unsigned int*)(v9 + 4);
                            v6 = v9;
                            int v27 = v9;
                            ptr0 = (int*)(v8 + 36);
                            v5 = v26;
                            if(v26 <= 0) {
                            loc_4026DC:
                                int v28 = 0;
                                int v29 = 0;
                                _Size = 0;
                                if(v5 > 0) {
                                    do {
                                        if(*((int*)(_Size * 4 + (int)ptr13) + 2)) {
                                            int v30 = *(int*)(_Size * 4 + v27 + 8);
                                            ++_Size;
                                            *(int*)(v29 * 4 + v27 + 8) = v30;
                                            ++v29;
                                        }
                                        else {
                                            int v31 = *(int*)(_Size * 4 + v27 + 8);
                                            ++_Size;
                                            *((int*)(v28 * 4 + (int)ptr13) + 2) = v31;
                                            ++v28;
                                        }
                                        v11 = _Size < v5;
                                    }
                                    while(v11);
                                }
                                ptr0 = (int*)v7;
                                *(int*)(v27 + 4) = v29;
                                *(int*)((int)ptr13 + 4) = v28;
                                if(ptr0[1] + *(int*)(v10 + 4) != ptr5) {
                                    /*NO_RETURN*/ →msvcrt.dll!abort();
                                }
                                sub_401EF0(v10);
                                int v32 = v21;
                                v6 = *(int*)((int)ptr10 + 4);
                                v10 = (int)ptr10;
                                if(v6) {
                                    int v33 = *(int*)(v32 + 4);
                                    do {
                                        --v6;
                                        int v34 = *(int*)(v6 * 4 + v10 + 8);
                                        while(v33) {
                                            int v35 = v24{sub_401D50}(v17, *(int*)(v33 * 4 + v32 + 4), v34);
                                            if(v35 <= 0) {
                                                break;
                                            }
                                            else {
                                                int v36 = *(int*)(v33 * 4 + v32 + 4);
                                                int v37 = v33 + v6;
                                                --v33;
                                                *(int*)(v37 * 4 + v32 + 8) = v36;
                                            }
                                        }
                                        *(int*)((v33 + v6) * 4 + v32 + 8) = v34;
                                    }
                                    while(v6);
                                    void* ptr14 = ptr10;
                                    *(int*)(v32 + 4) = *(int*)(v32 + 4) + *(int*)(v10 + 4);
                                    v10 = (int)ptr14;
                                }
                                →msvcrt.dll!free((void*)v10);
                                param0 = v17;
                                int v38 = v21;
                                *(int*)v38 = *(int*)(param0 + 12);
                                *(char*)(param0 + 16) = *(char*)(param0 + 16) | 0x1;
                                *(int*)(param0 + 12) = v38;
                                goto loc_4022D4;
                            }
                        }
                        else {
                            sub_401EF0(v21);
                            param0 = v17;
                            int v38 = v21;
                            *(int*)v38 = *(int*)(param0 + 12);
                            *(char*)(param0 + 16) = *(char*)(param0 + 16) | 0x1;
                            *(int*)(param0 + 12) = v38;
                            goto loc_4022D4;
                        }
                        while(1) {
                            if(v8 + 36 != ptr0) {
                                int v39 = v24{sub_401D50}(v17, *(int*)(_Size * 4 + v7 + 8), ptr0[0]);
                                if(v39 < 0) {
                                    int* ptr15 = (int*)((int)ptr0 - v7);
                                    ptr0 = *(int**)((int)ptr15 + v10);
                                    *(int*)((int)ptr15 + v10) = 0;
                                    goto loc_402527;
                                }
                            }
                            *(int**)(_Size * 4 + v10 + 8) = ptr0;
                            ++_Size;
                            ptr0 = (int*)(v6 + 8);
                            v6 += 4;
                            if(_Size >= v5) {
                                v9 = v21;
                                v10 = (int)ptr10;
                                v7 = v9;
                                goto loc_4026DC;
                            }
                            else {
                            loc_402527:
                                v8 = gvar_4050B0;
                            }
                        }
                    }
                    else {
                        /*NO_RETURN*/ →msvcrt.dll!abort();
                        v9 = v21;
                        v10 = (int)ptr10;
                        v7 = v9;
                        goto loc_4026DC;
                    }
                }
            }
            goto loc_4022D4;
        }
    }
    else {
    loc_4022EB:
        if(!((unsigned char)v16 & 0x1)) {
            if(!((unsigned char)v16 & 0x2)) {
                sub_402180(v15);
                return result;
            }
            unsigned int* ptr16 = *(unsigned int*)(v17 + 12);
            while(*ptr16) {
                ptr2 = sub_402180(v15);
                if(ptr2) {
                    return result;
                }
                ++ptr16;
            }
            return result;
        loc_402581:
            v4 = v17;
            ptr2 = (int*)(unsigned char)(*(short*)(v4 + 16) >>> 3);
            if(!ptr2) {
                param0 = *(int*)(v4 + 12);
                v16 = 0;
                int v40 = *(int*)(param0 + 4);
                int v41 = param0;
                char v42 = (unsigned int)v40 > 0;
                while(1) {
                    if(!v42) {
                        return result;
                    }
                    param0 = (v16 + v40) >>> 1;
                    int v43 = *(int*)(param0 * 4 + v41 + 8);
                    ptr2 = *(int**)(v43 + 8);
                    int v44 = *(int*)(v43 + 12);
                    if((unsigned int)ptr2 > (unsigned int)v15) {
                        v40 = param0;
                        v42 = (unsigned int)v16 < (unsigned int)v40;
                    }
                    else if((unsigned int)(int*)((int)ptr2 + v44) > (unsigned int)v15) {
                        return result;
                    }
                    else {
                        v16 = param0 + 1;
                        v42 = (unsigned int)v16 < (unsigned int)v40;
                        continue;
                    loc_40262E:
                        do {
                            unsigned int v45 = (v1 + v2) >>> 1;
                            int* ptr17 = sub_401600((unsigned int*)(*(int*)(v45 * 4 + v3 + 8) + 8), &ptr3);
                            sub_401600((unsigned int*)ptr17, &v14);
                            ptr2 = ptr3;
                            if((unsigned int)ptr2 > (unsigned int)v15) {
                                v1 = v45;
                            loc_40261D:
                                if(v1 <= v2) {
                                    return result;
                                }
                            }
                            else if((unsigned int)(int*)((int)ptr2 + v14) > (unsigned int)v15) {
                                return result;
                            }
                            else {
                                v2 = v45 + 1;
                                goto loc_40261D;
                            }
                        }
                        while(1);
                    }
                }
                return result;
            }
            int v46 = (unsigned int)(int*)(ptr2 & 0xFF);
            v3 = *(int*)(v17 + 12);
            ptr2 = (int*)sub_401C40(param0, v17);
            v2 = 0;
            param0 = v3;
            int* ptr18 = ptr2;
            v1 = *(unsigned int*)(param0 + 4);
            if(v1 > 0) {
                int v47 = v46;
                int v48 = v46 & 0xf;
                goto loc_40262E;
            }
        }
        else if(((unsigned char)v16 & 0x4)) {
            param0 = *(int*)(v17 + 12);
            unsigned int v49 = 0;
            unsigned int v50 = *(unsigned int*)(param0 + 4);
            int v51 = param0;
            unsigned int v52 = v50;
            if(v50 > 0) {
                do {
                    unsigned int v53 = (v52 + v49) >>> 1;
                    int v54 = *(int*)(v53 * 4 + v51 + 8);
                    sub_401CA0();
                    sub_401C40(v13, v17);
                    int* ptr19 = sub_401600((unsigned int*)(v54 + 8), &ptr1);
                    sub_401600((unsigned int*)ptr19, &v12);
                    ptr2 = ptr1;
                    if((unsigned int)ptr2 > (unsigned int)v15) {
                        v52 = v53;
                        v0 = v52;
                        goto loc_40238E;
                    }
                    else if((unsigned int)(int*)((int)ptr2 + v12) <= (unsigned int)v15) {
                        v49 = v53 + 1;
                        v0 = v52;
                    loc_40238E:
                        if(v0 <= v49) {
                            return result;
                        }
                    }
                    else {
                        return result;
                    }
                }
                while(1);
                return result;
            }
        }
        else {
            goto loc_402581;
        }
    }
    return result;
}

int sub_402820(int param0, int* param1) {
    int result;
    void* ptr0;
    int v0;
    int v1;
    unsigned int* ptr1;
    int v2;
    unsigned int* ptr2 = &ptr0;
    sub_401720();
    unsigned int v3 = gvar_4050B0;
    if(gvar_405090) {
        LONG v4 = →KERNEL32.dll!InterlockedIncrement((LONG*)(v3 + 20));
        ptr2 = &ptr0;
        if(v4) {
            DWORD v5 = →KERNEL32.dll!WaitForSingleObject(*(HANDLE*)(v3 + 24), 0xffffffff);
            ptr2 = &ptr0;
            if(v5) {
                →KERNEL32.dll!InterlockedDecrement((LONG*)(v3 + 20));
                ptr2 = &v0;
            }
        }
        v3 = gvar_4050B0;
    }
    int v6 = *(int*)(v3 + 16);
    while(v6) {
        int v7 = param0;
        if(*(unsigned int*)v6 > (unsigned int)v7) {
            v6 = *(int*)(v6 + 20);
        }
        else {
            --ptr2;
            *ptr2 = &loc_4029A1;
            int v8 = /*BAD_CALL!*/ sub_4022A0(v1, v7);
            result = v8;
            v3 = gvar_4050B0;
            if(v8) {
                goto loc_4028C4;
            }
            else {
                goto loc_402870;
            }
        }
    }
    result = 0;
loc_402870:
    do {
        v6 = *(int*)(v3 + 12);
        if(!v6) {
            goto loc_4028C4;
        }
        else {
            *(int*)(v3 + 12) = *(int*)(v6 + 20);
            --ptr2;
            *ptr2 = &loc_402887;
            int v9 = /*BAD_CALL!*/ sub_4022A0(v2, param0);
            v3 = gvar_4050B0;
            result = v9;
            int* ptr3 = (int*)(v3 + 16);
            if(*(int*)(v3 + 16)) {
                v2 = *(int*)v6;
                do {
                    ptr1 = *ptr3;
                    if(*ptr1 < (unsigned int)v2) {
                        goto loc_402946;
                    }
                    else {
                        ptr3 = (int*)(ptr1 + 5);
                    }
                }
                while(*(int*)(ptr1 + 5));
                *(int*)(v6 + 20) = 0;
                *ptr3 = v6;
                if(!result) {
                    goto loc_402870;
                }
                else {
                    goto loc_4028C4;
                }
            }
            else {
                ptr1 = *ptr3;
            loc_402946:
                *(unsigned int*)(v6 + 20) = ptr1;
                *ptr3 = v6;
            }
        }
    }
    while(!result);
    int v10 = v3 + 20;
    if(gvar_405090) {
        goto loc_402963;
    loc_4028C4:
        v10 = v3 + 20;
        if(gvar_405090) {
        loc_402963:
            *ptr2 = v10;
            --ptr2;
            *ptr2 = &loc_40296B;
            LONG v11 = /*BAD_CALL!*/ →KERNEL32.dll!InterlockedDecrement(*(LONG**)(ptr2 + 1));
            --ptr2;
            if(v11 >= 0) {
                *(int*)(ptr2 + 2) = 0;
                *(int*)(ptr2 + 1) = 1;
                *ptr2 = *(int*)(v10 + 4);
                --ptr2;
                *ptr2 = &loc_402990;
                /*BAD_CALL!*/ →KERNEL32.dll!ReleaseSemaphore(*(HANDLE*)(ptr2 + 1), *(LONG*)(ptr2 + 2), *(LPLONG*)(ptr2 + 3));
                ptr2 -= 3;
            }
        }
    }
    if(result) {
        *param1 = *(int*)(v6 + 4);
        *(param1 + 1) = *(int*)(v6 + 8);
        if(*(char*)(v6 + 16) & 0x4) {
            --ptr2;
            *ptr2 = &loc_4029CC;
            /*BAD_CALL!*/ sub_401CA0();
        }
        --ptr2;
        *ptr2 = &loc_402903;
        /*BAD_CALL!*/ sub_401C40(v2, v6);
        *(ptr2 + 1) = param1 + 2;
        *ptr2 = result + 8;
        --ptr2;
        *ptr2 = &loc_40291C;
        /*BAD_CALL!*/ sub_401600(*(unsigned int**)(ptr2 + 1), *(unsigned int**)(ptr2 + 2));
    }
    return result;
}

int sub_402A10() {
    char v0;
    int v1;
    ATOM nAtom;
    int v2 = v1;
    int result = 0;
    UINT v3 = →KERNEL32.dll!GetAtomNameA(nAtom, &v0, 61);
    int v4 = 31;
    int v5 = 1;
    if(v3) {
    loc_402A51:
        do {
            if(*(char*)(v4 + (int)&v0) == 65) {
                result |= v5;
                v5 *= 2;
                --v4;
                if(v4 >= 0) {
                    goto loc_402A51;
                }
            }
            else {
                v5 *= 2;
                --v4;
            }
            break;
        }
        while(v4 < 0);
        if(*(int*)result == 64) {
            return result;
        }
        →msvcrt.dll!_assert();
    }
    /*BAD_CALL!*/ →msvcrt.dll!_assert();
}

void sub_402AB0() {
    int v0;
    void* _Block;
    void* ptr0;
    char v1;
    void* ptr1 = ptr0;
    if(!gvar_4050B0) {
        int v2 = 0x41414141;
        int v3 = 0x41414141;
        int v4 = 0x41414141;
        int v5 = 1112099885;
        int v6 = 0x41414141;
        int v7 = 0x41414141;
        int v8 = 0x57434347;
        int v9 = 0x41414141;
        int v10 = 0x41414141;
        int v11 = 0x452d3233;
        int v12 = 0x41414141;
        int v13 = 0x2d332d48;
        int v14 = 0x52485447;
        int v15 = 1313426733;
        int v16 = 0x32335747;
        char v17 = 0;
        ATOM v18 = →KERNEL32.dll!FindAtomA(&v2);
        int v19 = (unsigned int)(ATOM)(v18 & 0xFFFF);
        if(!(unsigned short)v18) {
            void* ptr2 = →msvcrt.dll!malloc(64);
            _Block = ptr2;
            if(!ptr2) {
                goto loc_402CC3;
            }
            else {
                void* ptr3 = ptr2;
                int v20 = v19;
                for(int i = 16; i != 0; --i) {
                    *(int*)ptr3 = v20;
                    ptr3 = (void*)((int)ptr3 + 4);
                }
                *(int*)((int)_Block + 4) = &→msvcrt.dll!abort;
                int v21 = 1;
                *(int*)((int)_Block + 8) = &gvar_402A00;
                unsigned int v22 = gvar_405060;
                *(int*)_Block = 64;
                unsigned int v23 = gvar_405064;
                *(unsigned int*)((int)_Block + 20) = v22;
                unsigned int v24 = gvar_403030;
                *(unsigned int*)((int)_Block + 24) = v23;
                unsigned int v25 = gvar_403034;
                *(unsigned int*)((int)_Block + 28) = v24;
                unsigned int v26 = gvar_405070;
                *(unsigned int*)((int)_Block + 32) = v25;
                unsigned int v27 = gvar_405074;
                *(unsigned int*)((int)_Block + 40) = v26;
                unsigned int v28 = gvar_405080;
                *(int*)((int)_Block + 48) = -1;
                *(unsigned int*)((int)_Block + 44) = v27;
                *(unsigned int*)((int)_Block + 52) = v28;
                unsigned int v29 = gvar_403038;
                *(unsigned int*)((int)_Block + 60) = gvar_40303C;
                int v30 = 31;
                *(unsigned int*)((int)_Block + 56) = v29;
                do {
                    int* ptr4 = (int*)(v21 & (int)_Block);
                    v21 *= 2;
                    *(char*)(v30 + (int)&v1) = (((unsigned int)ptr4 < 1 ? 0xFF: 0) & 0x20) + 65;
                    --v30;
                }
                while(v30 >= 0);
                int v31 = 1112099885;
                int v32 = 0x57434347;
                int v33 = 0x452d3233;
                int v34 = 0x2d332d48;
                int v35 = 0x52485447;
                int v36 = 1313426733;
                int v37 = 0x32335747;
                char v38 = 0;
                ATOM v39 = →KERNEL32.dll!AddAtomA(&v1);
                int v40 = (unsigned int)(ATOM)(v39 & 0xFFFF);
                if(v40) {
                    int v41 = sub_402A10();
                    v0 = v40;
                    if(v41 != _Block) {
                        goto loc_402C73;
                    }
                }
                else {
                loc_402C73:
                    v0 = 0;
                }
            }
            if(!v0) {
                →msvcrt.dll!free(_Block);
                →KERNEL32.dll!FindAtomA(&v2);
                goto loc_402C8F;
            loc_402CC3:
                /*NO_RETURN*/ →msvcrt.dll!abort();
            }
        }
        else {
        loc_402C8F:
            _Block = (void*)sub_402A10();
        }
        gvar_4050B0 = _Block;
        gvar_4050A0 = (int*)((int)_Block + 4);
        gvar_4050C0 = (int*)((int)_Block + 8);
    }
}

int sub_402CD0(int param0) {
    int result;
    char v0;
    unsigned int v1;
    int* ptr0 = &v0;
    while(v1 >= 0x1000) {
        ptr0 -= 0x400;
        v1 -= 0x1000;
    }
    return result;
}

LONG sub_402EB0() {
    sub_402AB0();
    return sub_4018A0((int*)&gvar_404150, (int*)0x405010);
}

int sub_402EC0() {
    return sub_401C00((int*)&gvar_404150);
}

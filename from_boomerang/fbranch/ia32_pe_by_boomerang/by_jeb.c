
int CPtoLCID(int param0) {
    int v0;
    switch(v0) {
        case 932: {
            return 0x411;
        }
        case 936: {
            return 2052;
        }
        case 949: {
            return 1042;
        }
        default: {
            if(v0 != 950) {
                return 0;
            }
            return 0x404;
        }
    }
}

void _SEH_epilog(int param0, int param1, int param2) {
    int v0;
    int* ptr0;
    *(int*)__FS_BASE = *(ptr0 - 4);
    *ptr0 = v0;
    jump *ptr0;
}

int* _SEH_prolog(int param0, int param1) {
    int v0;
    *(int**)__FS_BASE = &v0;
    return &v0;
}

int _abnormal_termination() {
    int result = 0;
    int v0 = *(int*)__FS_BASE;
    if(*(int*)(v0 + 4) == &sub_406880 && *(int*)(*(int*)(v0 + 12) + 12) == *(int*)(v0 + 8)) {
        result = 1;
    }
    return result;
}

int _allmul(int param0, int param1, int param2, int param3) {
    return param0 * param2;
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

int _global_unwind2(PVOID TargetFrame) {
    int v0;
    int result;
    int* ptr0 = &v0;
    →KERNEL32.dll!RtlUnwind(TargetFrame, (PVOID)&loc_406878, NULL, NULL);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    int v0;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    unsigned int v7;
    unsigned int v8;
    int v9 = &gvar_4090D8;
    unsigned int v10 = v7;
    unsigned int v11 = v8;
    sub_403D30();
    LPOSVERSIONINFOA v12 = &v2;
    v2 = 148;
    GetVersionExA(&v2);
    gvar_40BA5C = v3;
    gvar_40BA68 = v11;
    gvar_40BA6C = v10;
    gvar_40BA60 = v3 == 2 ? (unsigned int)(v5 & 0x7fff): (unsigned int)(v5 & 0x7fff) | 0x8000;
    gvar_40BA64 = (unsigned int)(v11 * 0x100 + v10);
    HMODULE v13 = GetModuleHandleA(NULL);
    if(*(short*)&v13->unused == 23117) {
        int* ptr0 = (int*)(v13[0xF].unused + (int)v13);
        if(*ptr0 != 0x4550) {
            goto loc_401240;
        }
        else {
            int v14 = (unsigned int)*(short*)(ptr0 + 6);
            if(v14 != 267) {
                if(v14 != 523) {
                    goto loc_401240;
                }
                else if(*(unsigned int*)(ptr0 + 33) <= 14) {
                    goto loc_401240;
                }
                else {
                    v1 = *(ptr0 + 62) == 0;
                    goto loc_401269;
                }
            }
            if(*(unsigned int*)(ptr0 + 29) <= 14) {
                goto loc_401240;
            }
            else {
                v1 = *(ptr0 + 58) == 0;
            loc_401269:
                v0 = v1 ? 0: 1;
            }
        }
    }
    else {
    loc_401240:
        v0 = 0;
    }
    int v15 = sub_403B7F(0);
    LPOSVERSIONINFOA v16 = &v2;
    if(!v15) {
        if(gvar_40BA30 != 2) {
            sub_403391();
        }
        sub_40321A(28);
        v16 = &v6;
        /*NO_RETURN*/ sub_40307F(0xff);
    }
    --v16;
    v16->dwOSVersionInfoSize = &loc_40129D;
    /*BAD_CALL!*/ sub_403ADD();
    v9 = 0;  // __try{ (see __except:401348h)
    --v16;
    v16->dwOSVersionInfoSize = &loc_4012A5;
    int v17 = /*BAD_CALL!*/ sub_403932();
    if(v17 < 0) {
        --v16;
        v16->dwOSVersionInfoSize = 27;
        --v16;
        v16->dwOSVersionInfoSize = &loc_4012B0;
        /*BAD_CALL!*/ sub_401182(v16->dwMajorVersion);
        ++v16;
    }
    --v16;
    v16->dwOSVersionInfoSize = &loc_4012B7;
    LPSTR v18 = /*BAD_CALL!*/ GetCommandLineA();
    gvar_40D004 = v18;
    --v16;
    v16->dwOSVersionInfoSize = &loc_4012C1;
    int v19 = /*BAD_CALL!*/ sub_403810(v4);
    gvar_40BA28 = v19;
    --v16;
    v16->dwOSVersionInfoSize = &loc_4012CB;
    int v20 = /*BAD_CALL!*/ sub_40376E(v4);
    if(v20 < 0) {
        --v16;
        v16->dwOSVersionInfoSize = 8;
        --v16;
        v16->dwOSVersionInfoSize = &loc_4012D6;
        /*BAD_CALL!*/ sub_401182(v16->dwMajorVersion);
        ++v16;
    }
    --v16;
    v16->dwOSVersionInfoSize = &loc_4012DC;
    int v21 = /*BAD_CALL!*/ sub_40353B();
    if(v21 < 0) {
        --v16;
        v16->dwOSVersionInfoSize = 9;
        --v16;
        v16->dwOSVersionInfoSize = &loc_4012E7;
        /*BAD_CALL!*/ sub_401182(v16->dwMajorVersion);
        ++v16;
    }
    --v16;
    v16->dwOSVersionInfoSize = 1;
    --v16;
    v16->dwOSVersionInfoSize = &loc_4012EF;
    int v22 = /*BAD_CALL!*/ sub_4030AF(v16->dwMajorVersion);
    ++v16;
    v3 = v22;
    if(v22 != 0) {
        --v16;
        v16->dwOSVersionInfoSize = v22;
        --v16;
        v16->dwOSVersionInfoSize = &loc_4012FD;
        /*BAD_CALL!*/ sub_401182(v16->dwMajorVersion);
        ++v16;
    }
    unsigned int v23 = gvar_40BA7C;
    gvar_40BA80 = gvar_40BA7C;
    --v16;
    v16->dwOSVersionInfoSize = v23;
    --v16;
    v16->dwOSVersionInfoSize = gvar_40BA74;
    --v16;
    v16->dwOSVersionInfoSize = gvar_40BA70;
    --v16;
    v16->dwOSVersionInfoSize = &loc_40131A;
    int result = /*BAD_CALL!*/ sub_401000();
    v16 += 3;
    if(v0 == 0) {
        --v16;
        v16->dwOSVersionInfoSize = result;
        --v16;
        v16->dwOSVersionInfoSize = &loc_40132D;
        /*BAD_CALL!*/ sub_4031DA(v16->dwMajorVersion);
    }
    --v16;
    v16->dwOSVersionInfoSize = &loc_401332;
    /*BAD_CALL!*/ sub_4031FC();
    return result;
}

char* strcat(char* _Destination, char* _Source) {
    char* ptr0;
    char v0;
    char* ptr1 = _Destination;
    if((int*)((int)ptr1 & 0x3)) {
        do {
            char v1 = ptr1[0];
            ++ptr1;
            if(!v1) {
                goto loc_404F83;
            }
        }
        while((int*)((int)ptr1 & 0x3));
    }
    else {
    loc_404F50:
        do {
            char v2 = *(int*)&ptr1[0];
            v0 = v2 + 0x7efefeff;
            ptr1 += 4;
            if((((int)~v2 ^ v0) & 0x81010100)) {
                int v3 = *(int*)&ptr1[-4];
                if(!(unsigned char)v3) {
                    ptr0 = ptr1 - 4;
                }
                else if(!(unsigned char)(v3 >>> 8)) {
                    ptr0 = ptr1 - 3;
                }
                else if(!(v3 & 0xff0000)) {
                    ptr0 = ptr1 - 2;
                }
                else if(v3 & 0xff000000) {
                    goto loc_404F50;
                }
                else {
                    break;
                }
                goto loc_404F95;
            }
        }
        while(1);
    loc_404F83:
        ptr0 = ptr1 - 1;
    }
loc_404F95:
    char* ptr2 = _Source;
    if((int*)((int)ptr2 & 0x3)) {
        do {
            v0 = (unsigned int)ptr2[0] | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            ++ptr2;
            if(!(unsigned char)v0) {
                *ptr0 = (unsigned char)v0;
                return _Destination;
            }
            *ptr0 = (unsigned char)v0;
            ++ptr0;
        }
        while((int*)((int)ptr2 & 0x3));
        goto loc_404FC3;
    }
    else {
    loc_404FC3:
        while(1) {
            char v4 = *(int*)&ptr2[0];
            v0 = *(int*)&ptr2[0];
            ptr2 += 4;
            if((((v4 + 0x7efefeff) ^ (int)~v4) & 0x81010100)) {
                if(!(unsigned char)v0) {
                    break;
                }
                else if(!(unsigned char)(v0 >>> 8)) {
                    *(short*)ptr0 = (unsigned short)v0;
                    return _Destination;
                }
                else if(!(v0 & 0xff0000)) {
                    *(short*)ptr0 = (unsigned short)v0;
                    *(ptr0 + 2) = 0;
                    return _Destination;
                }
                else if(!(v0 & 0xff000000)) {
                    *(char*)ptr0 = v0;
                    return _Destination;
                }
            }
            *(char*)ptr0 = v0;
            ptr0 += 4;
        }
    }
    *ptr0 = (unsigned char)v0;
    return _Destination;
}

char* strcpy(char* _Destination, char* _Source) {
    char v0;
    char* ptr0 = _Destination;
    char* ptr1 = _Source;
    if((int*)((int)ptr1 & 0x3)) {
        do {
            v0 = (unsigned int)ptr1[0] | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            ++ptr1;
            if(!(unsigned char)v0) {
                ptr0[0] = (char)v0;
                return _Destination;
            }
            ptr0[0] = (char)v0;
            ++ptr0;
        }
        while((int*)((int)ptr1 & 0x3));
        goto loc_404FC3;
    }
    else {
    loc_404FC3:
        while(1) {
            char v1 = *(int*)&ptr1[0];
            v0 = *(int*)&ptr1[0];
            ptr1 += 4;
            if((((v1 + 0x7efefeff) ^ (int)~v1) & 0x81010100)) {
                if(!(unsigned char)v0) {
                    break;
                }
                else if(!(unsigned char)(v0 >>> 8)) {
                    *(short*)&ptr0[0] = (char)v0;
                    return _Destination;
                }
                else if(!(v0 & 0xff0000)) {
                    *(short*)&ptr0[0] = (char)v0;
                    ptr0[2] = 0;
                    return _Destination;
                }
                else if(!(v0 & 0xff000000)) {
                    *(int*)&ptr0[0] = v0;
                    return _Destination;
                }
            }
            *(int*)&ptr0[0] = v0;
            ptr0 += 4;
        }
    }
    ptr0[0] = (char)v0;
    return _Destination;
}

// Stale decompilation - Refresh this view to re-decompile this code
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
                goto loc_4055A4;
            }
            else {
            loc_405543:
                do {
                    v0 = (unsigned int)ptr1[0] | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                    ++ptr1;
                    ptr0[0] = (char)v0;
                    ++ptr0;
                    if(!(unsigned char)v0) {
                    loc_405588:
                        --v3;
                        if(!v3) {
                            return _Destination;
                        }
                        ptr0[0] = (char)v0;
                        ++ptr0;
                        goto loc_405588;
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
                    goto loc_40557C;
                }
            }
            while((int*)((int)ptr1 & 0x3));
            v3 = counter;
            counter >>>= 2;
            if(!counter) {
                goto loc_40553E;
            }
            else {
            loc_4055A4:
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
                            goto loc_405595;
                        }
                        else {
                            *(int*)&ptr0[0] = v5;
                        }
                        ptr0 += 4;
                        v0 = 0;
                        --counter;
                        if(!counter) {
                            goto loc_405603;
                        }
                        else {
                            goto loc_4055F7;
                        }
                    }
                    else {
                    loc_405595:
                        *(int*)&ptr0[0] = v5;
                        ptr0 += 4;
                        --counter;
                    }
                }
                while(!counter);
            loc_40553E:
                v3 &= 3;
            }
            if(!v3) {
                return _Destination;
            }
            goto loc_405543;
        loc_40557C:
            v3 = counter;
            counter >>>= 2;
            if(!counter) {
                ptr0[0] = (char)v0;
                ++ptr0;
                goto loc_405588;
            }
            else {
            loc_4055F7:
                v0 = 0;
            }
            do {
                *(int*)&ptr0[0] = 0;
                ptr0 += 4;
                --counter;
            }
            while(counter);
        loc_405603:
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
    goto loc_405588;
}

int sub_401000() {
    int v0;
    float v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    float v9 = (float)5.0;
    sub_401114(&gvar_40B040);
    *(long long*)&v0 = v1;
    *(long long*)&v2 = v9;
    int v10 = sub_4010E3("a is %f, b is %f\n");
    fucompp();
    short v16 = fnstsw((unsigned short)v10);
    if(!__parity__((unsigned char)(v5 >>> 8) & 0x44)) {
        v5 = sub_4010E3("Equal\n");
    }
    fucompp();
    short v11 = fnstsw((unsigned short)v5);
    if(__parity__((unsigned char)(v4 >>> 8) & 0x44)) {
        v4 = sub_4010E3("Not Equal\n");
    }
    v1 = fcomp(v1);
    short v12 = fnstsw((unsigned short)v4);
    if(!((unsigned char)(v7 >>> 8) & 0x41)) {
        v7 = sub_4010E3("Greater\n");
    }
    v1 = fcomp(v1);
    short v13 = fnstsw((unsigned short)v7);
    if(!__parity__((unsigned char)(v3 >>> 8) & 0x41)) {
        v3 = sub_4010E3("Less or Equal\n");
    }
    v1 = fcomp(v1);
    short v14 = fnstsw((unsigned short)v3);
    if(!((unsigned char)(v6 >>> 8) & 0x1)) {
        v6 = sub_4010E3("Greater or Equal\n");
    }
    v1 = fcomp(v1);
    short v15 = fnstsw((unsigned short)v6);
    if(!__parity__((unsigned char)(v8 >>> 8) & 0x5)) {
        sub_4010E3("Less\n");
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4010E3(int param0) {
    char v0;
    int v1 = sub_40136E((unsigned int*)0x40B0E8);
    int result = sub_4014C0(4239592, param0, (int)&v0);
    sub_4013F6(v1, (int*)0x40B0E8);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401114(int param0) {
    char v0;
    return sub_401DBC(&gvar_40B0C8, param0, (int)&v0);
}

int sub_40112C() {
    gvar_40B348 = &sub_402FB3;
    gvar_40B34C = &sub_402C7B;
    gvar_40B350 = &sub_402CE0;
    gvar_40B354 = &sub_402C23;
    gvar_40B358 = &sub_402CC6;
    gvar_40B35C = &sub_402FB3;
    return &sub_402FB3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401164(int param0) {
    sub_40112C();
    int result = sub_403056();
    gvar_40BA24 = result;
    if(param0) {
        result = sub_403004();
    }
    fnclex();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401182(int param0) {
    if(gvar_40BA30 != 2) {
        sub_403391();
    }
    sub_40321A(param0);
    return gvar_40B0B8{sub_4031EB}(0xFF);
}

LONG sub_401334() {
    int v0;
    _EXCEPTION_POINTERS* ExceptionInfo = *(_EXCEPTION_POINTERS**)(v0 - 20);
    unsigned int v1 = (unsigned int)ExceptionInfo->ExceptionRecord->ExceptionCode;
    *(unsigned int*)(v0 - 32) = (unsigned int)ExceptionInfo->ExceptionRecord->ExceptionCode;
    return sub_4033CA(v1, ExceptionInfo);
}

int sub_401348() {
    int v0;
    int* ptr0;
    unsigned int* ptr1 = *(unsigned int*)(ptr0 - 6);  // __except(401334h) (for 40129Dh)
    int v1 = *(ptr0 - 8);
    if(!*(ptr0 - 7)) {
        ptr1 = &v0;
        sub_4031EB(v1);
    }
    --ptr1;
    *ptr1 = &loc_40135F;
    /*BAD_CALL!*/ sub_40320B();
    *(ptr0 - 1) = -1;  // } (starts at 40129Dh)
    jump *(ptr0 + 1);
}

int sub_40136E(unsigned int* param0) {
    int v0;
    unsigned int* ptr0 = param0;
    int v1 = sub_403DF1(*(ptr0 + 4));
    if(v1) {
        if(ptr0 == 4239592) {
            v1 = 0;
            goto loc_401397;
        }
        else if(ptr0 == 4239624) {
            v1 = 1;
        loc_401397:
            ++gvar_40BA3C;
            if(!(*(short*)(ptr0 + 3) & 0x10c)) {
                int v2 = v0;
                int* ptr1 = (int*)(v1 * 4 + &gvar_40BA34);
                if(!*ptr1) {
                    v1 = sub_403DDF(0x1000);
                    *ptr1 = v1;
                    if(v1) {
                        goto loc_4013D8;
                    }
                    else {
                        int v3 = 2;
                        *(ptr0 + 2) = (int*)(ptr0 + 5);
                        *ptr0 = (int*)(ptr0 + 5);
                        *(int*)(ptr0 + 6) = v3;
                        *(int*)(ptr0 + 1) = v3;
                    }
                }
                else {
                loc_4013D8:
                    int v4 = *ptr1;
                    *(int*)(ptr0 + 2) = *ptr1;
                    *ptr0 = v4;
                    *(int*)(ptr0 + 6) = 0x1000;
                    *(int*)(ptr0 + 1) = 0x1000;
                }
                *(short*)(ptr0 + 3) = *(short*)(ptr0 + 3) | 0x1102;
                return 1;
            }
        }
    }
    return 0;
}

int sub_4013F6(int param0, int* param1) {
    int result;
    if(param0) {
        int* ptr0 = param1;
        if((*((char*)&ptr0[3] + 1) & 0x10)) {
            result = sub_403E18(ptr0);
            *((char*)&ptr0[3] + 1) = *((char*)&ptr0[3] + 1) & 0xee;
            ptr0[6] = 0;
            ptr0[0] = 0;
            ptr0[2] = 0;
        }
    }
    else {
        result = (int)param1;
        if((*(char*)(result + 13) & 0x10)) {
            result = sub_403E18((int*)result);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401432(unsigned int* param0) {
    int* ptr0;
    int result;
    if(!(*(char*)(param0 + 3) & 0x40) || *(int*)(param0 + 2)) {
        *(int*)(param0 + 1) = *(int*)(param0 + 1) - 1;
        if(*(int*)(param0 + 1) >= 0) {
            **param0 = (unsigned char)result;
            *param0 = *param0 + 1;
            result = (unsigned int)(result & 0xFF);
        }
        else {
            result = sub_403F26((int)(unsigned char)result, (int)param0);
        }
        if(result == -1) {
            *ptr0 = -1;
            return -1;
        }
    }
    *ptr0 = *ptr0 + 1;
    return result;
}

int sub_401465(int param0, int param1, unsigned int* param2) {
    int result;
    int v0 = result;
    do {
        if(param1 <= 0) {
            return result;
        }
        --param1;
        result = sub_401432(param2);
    }
    while(*(int*)v0 != -1);
    return result;
}

int sub_401489(int param0) {
    int v0;
    unsigned int* ptr0;
    int v1;
    int result;
    char v2 = *(char*)&ptr0[3] & 0x40 ? 0: 1;
    int v3 = v0;
    int v4 = result;
    int v5 = v1;
    if(!v2 && !ptr0[2]) {
        result = param0;
        *(int*)v4 = *(int*)v4 + result;
    }
    else {
        do {
            if(param0 <= 0) {
                return result;
            }
            --param0;
            result = sub_401432(ptr0);
            ++v5;
        }
        while(*(int*)v4 != -1);
    }
    return result;
}

int sub_4014C0(unsigned int* param0, int param1, unsigned int* param2) {
    unsigned int v0;
    unsigned int v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    char v10;
    unsigned int v11;
    unsigned int v12;
    int v13 = gvar_40B498;
    unsigned int v14 = 0;
    int v15 = 0;
    int v16 = 0;
    unsigned int v17 = v12;
    v12 = (unsigned int)*(char*)param1 | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
    int v18 = 0;
    if((unsigned char)v12) {
        int v19 = param1;
        while(1) {
            int v20 = v19 + 1;
            param1 = v20;
            if(v15 < 0) {
                break;
            }
            else {
                int v21 = (unsigned char)v12 >= 32 && (unsigned char)v12 <= 120 ? (int)*(char*)((int)(unsigned char)v12 + (int)&ptr_KERNEL32.dll!SetStdHandle) & 0xF: 0;
                int v22 = (int)*(unsigned char*)((int)(int*)(v21 * 8 + (int)&gvar_4090E8) + v18);
                char* ptr0 = (char*)0x7;
                int v23 = v22 >> 4;
                switch(v22 >> 4) {
                    case 0: {
                    loc_4016DC:
                        unsigned int v24 = gvar_40B490;
                        v3 = 0;
                        if((*(char*)((unsigned int)(unsigned char)v12 * 2 + v24 + 1) & 0x80)) {
                            sub_401432(param0);
                            v12 = (unsigned int)*(char*)v20 | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
                            param1 = v20 + 1;
                        }
                        sub_401432(param0);
                        break;
                    }
                    case 1: {
                        v8 = -1;
                        char* ptr1 = NULL;
                        v7 = 0;
                        v6 = 0;
                        v5 = 0;
                        v4 = 0;
                        v3 = 0;
                        break;
                    }
                    case 2: {
                        v2 = (int)(unsigned char)v12 - 32;
                        if(v2) {
                            v2 -= 3;
                            if(v2) {
                                v2 -= 8;
                                if(v2) {
                                    v2 -= 2;
                                    if(!v2) {
                                        v4 |= 4;
                                    }
                                    else if(v2 == 3) {
                                        v4 |= 8;
                                    }
                                }
                                else {
                                    v4 |= 1;
                                }
                            }
                            else {
                                (unsigned int)(v4 & 0xFF) = (unsigned char)v4 | 0x80;
                            }
                        }
                        else {
                            v4 |= 2;
                        }
                        break;
                    }
                    case 3: {
                        if((unsigned char)v12 == 42) {
                            ++param2;
                            v2 = *(int*)(param2 - 1);
                            v6 = *(int*)(param2 - 1);
                            if(v2 < 0) {
                                v4 |= 4;
                                v6 = 0 - v6;
                            }
                        }
                        else {
                            v6 = v6 * 10 + (int)(unsigned char)v12 - 48;
                        }
                        break;
                    }
                    case 4: {
                        v8 = 0;
                        break;
                    }
                    case 5: {
                        if((unsigned char)v12 == 42) {
                            ++param2;
                            v2 = *(int*)(param2 - 1);
                            v8 = v2 >= 0 ? *(int*)(param2 - 1): -1;
                        }
                        else {
                            v8 = v8 * 10 + (int)(unsigned char)v12 - 48;
                        }
                        break;
                    }
                    case 6: {
                        if((unsigned char)v12 == 73) {
                            v2 = (unsigned int)*(char*)v20 | ((unsigned int)(((v22 >> 4) >>> 8) & 0xffffff) << 8);
                            if((unsigned char)v2 == 54 && *(char*)(v20 + 1) == 52) {
                                (unsigned int)((v4 >>> 8) & 0xFF) = (unsigned char)(v4 >>> 8) | 0x80;
                                param1 = v20 + 2;
                                break;
                            }
                            else if((unsigned char)v2 == 51 && *(char*)(v20 + 1) == 50) {
                                (unsigned int)((v4 >>> 8) & 0xFF) = (unsigned char)(v4 >>> 8) & 0x7f;
                                param1 = v20 + 2;
                                break;
                            }
                            else if((unsigned char)v2 == 100 || (unsigned char)v2 == 105 || (unsigned char)v2 == 111 || (unsigned char)v2 == 117 || (unsigned char)v2 == 120 || (unsigned char)v2 == 88) {
                                break;
                            }
                            else {
                                v23 = 0;
                                goto loc_4016DC;
                            }
                        }
                        else {
                            switch((unsigned char)v12) {
                                case 104: {
                                    v4 |= 32;
                                    break;
                                }
                                case 108: {
                                    v4 |= 16;
                                    break;
                                }
                                case 119: {
                                    (unsigned int)((v4 >>> 8) & 0xFF) = (unsigned char)(v4 >>> 8) | 0x8;
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    case 7: {
                        v2 = (int)(unsigned char)v12;
                        switch(v2) {
                            case 105: {
                                v4 |= 64;
                                v14 = 10;
                            loc_401836:
                                unsigned int v25 = v4;
                                if((v25 & 0x8000)) {
                                    v1 = *param2;
                                    v0 = *(param2 + 1);
                                    param2 += 2;
                                }
                                else {
                                    ++param2;
                                    if(((unsigned char)v25 & 0x20)) {
                                        v1 = (unsigned int)*(short*)(param2 - 1) | ((unsigned int)(((unsigned char)v25 & 0x40) != 0 ? *(short*)(param2 - 1) < 0 ? 0xFFFF: 0: 0) << 16);
                                        goto loc_401A94;
                                    }
                                    else {
                                        v1 = *(param2 - 1);
                                        if(!((unsigned char)v25 & 0x40)) {
                                            v0 = 0;
                                        }
                                        else {
                                        loc_401A94:
                                            v0 = v1 >= 0x80000000 ? 0xffffffff: 0;
                                        }
                                    }
                                }
                                if(((unsigned char)v25 & 0x40) && (int)v0 <= 0 && v0 >= 0x80000000) {
                                    unsigned int v26 = v1;
                                    v1 = (unsigned int)(0 - v1);
                                    v0 = (unsigned int)(0 - ((unsigned int)(v26 > 0) + v0));
                                    (unsigned int)((v4 >>> 8) & 0xFF) = (unsigned char)(v4 >>> 8) | 0x1;
                                }
                                v12 = v1;
                                unsigned int v27 = v4 & 0x8000 ? v0: 0;
                                if(v8 < 0) {
                                    v8 = 1;
                                }
                                else {
                                    v4 &= -9;
                                    if(v8 > 0x200) {
                                        v8 = 0x200;
                                    }
                                }
                                if(!(v12 | v27)) {
                                    v5 = 0;
                                }
                                char* ptr2 = &v10;
                                while(1) {
                                    int v28 = v8;
                                    --v8;
                                    if(v28 <= 0 && !(v12 | v27)) {
                                    loc_401B36:
                                        v2 = (int)&v10 - (int)ptr2;
                                        v14 = (unsigned int)v2;
                                        v48 = (LPSTR)(ptr2 + 1);
                                        if(!((unsigned char)(v4 >>> 8) & 0x2 ? 0: 1) && (*(LPSTR)(ptr2 + 1) != 48 || !v2)) {
                                            --v48;
                                            v48[0] = 48;
                                            ++v2;
                                        }
                                    }
                                    else {
                                        int v29 = _aulldvrm(v12, v27, v14, v14 >= 0x80000000 ? -1: 0);
                                        int* ptr3 = (int*)(v9 + 48);
                                        unsigned int v30 = v12;
                                        v12 = (unsigned int)v29;
                                        v27 = v11;
                                        if((int)ptr3 > 57) {
                                            ptr3 = (int*)((int)ptr3 + (int)ptr4);
                                        }
                                        *ptr2 = (unsigned char)ptr3;
                                        --ptr2;
                                    }
                                }
                                goto loc_401B36;
                            }
                            case 110: {
                                ++param2;
                                v2 = *(int*)(param2 - 1);
                                if(((unsigned char)v4 & 0x20)) {
                                    *(short*)v2 = (unsigned short)v15;
                                }
                                else {
                                    *(int*)v2 = v15;
                                }
                                v7 = 1;
                                break;
                            }
                            case 111: {
                                v14 = 8;
                                if(((unsigned char)v4 & 0x80)) {
                                    (unsigned int)((v4 >>> 8) & 0xFF) = (unsigned char)(v4 >>> 8) | 0x2;
                                }
                                goto loc_401836;
                            }
                        }
                        if(v16) {
                            sub_40403C(v16);
                            v16 = 0;
                        }
                    }
                }
                v19 = param1;
                v12 = (unsigned int)*(char*)v19 | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
                if(!(unsigned char)v12) {
                    break;
                }
                else {
                    v18 = v23;
                }
            }
        }
    }
    return sub_4041A2(v13);
}

int sub_401CBA() {
    int v0 = gvar_40D000;
    if(!v0) {
        v0 = 0x200;
        goto loc_401CD4;
    }
    else if(v0 < 20) {
        v0 = 20;
    loc_401CD4:
        gvar_40D000 = v0;
    }
    int v1 = sub_404245(v0, 4);
    gvar_40BFF0 = v1;
    if(!v1) {
        gvar_40D000 = 20;
        v1 = sub_404245(20, 4);
        gvar_40BFF0 = v1;
        if(!v1) {
            return 26;
        }
    }
    int v2 = 0;
    int v3 = &gvar_40B0C8;
    while(1) {
        *(int*)(v1 + v2) = v3;
        v3 += 32;
        v2 += 4;
        if(v3 >= &gvar_40B348) {
            break;
        }
        else {
            v1 = gvar_40BFF0;
        }
    }
    int v4 = 0;
    int v5 = &gvar_40B0D8;
    do {
        int v6 = *(int*)((v4 & 0x1f) * 8 + *(unsigned int*)((v4 >> 5) * 4 + (int)&gvar_40BEE0));
        if(v6 == -1 || !v6) {
            *(int*)v5 = -1;
        }
        v5 += 32;
        ++v4;
    }
    while(v5 < 4239672);
    return 0;
}

int sub_401D60() {
    unsigned int v0;
    int result = sub_403F1D();
    if(!gvar_40BA94) {
        return result;
    }
    int v1 = 3;
    int v2 = 3;
    int v3 = 0;
    if(gvar_40D000 > 3) {
        do {
            int* ptr0 = *(int**)(v2 * 4 + gvar_40BFF0);
            if(ptr0) {
                if((*(char*)&ptr0[3] & 0x83)) {
                    int v4 = sub_407057(ptr0);
                    if(v4 != -1) {
                        ++v3;
                    }
                }
                if(v2 >= 20) {
                    sub_40403C(*(int*)(v2 * 4 + gvar_40BFF0));
                    v0 = gvar_40BFF0;
                    *(int*)(v2 * 4 + v0) = 0;
                }
            }
            ++v2;
        }
        while(gvar_40D000 > v2);
    }
    return (int)v0;
}

int sub_401D74() {
    int v0;
    int result = v0;
    int v1 = (int)gvar_40B4A0 > 1 ? sub_404318(result): (unsigned int)*(char*)(result * 2 + gvar_40B490) & 0x4;
    if(!v1) {
        result = (result & 0xffffffdf) - 7;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401DA6(int param0, unsigned int* param1) {
    int result;
    *(int*)(param1 + 1) = *(int*)(param1 + 1) - 1;
    if(*(int*)(param1 + 1) >= 0) {
        char* ptr0 = *param1;
        result = (unsigned int)*ptr0;
        *param1 = (int*)(ptr0 + 1);
    }
    else {
        result = sub_404396((int)param1);
    }
    return result;
}

int sub_401DBC(unsigned int* param0, int param1, int param2) {
    int v0;
    void* ptr0;
    int v1;
    unsigned char v2;
    char* ptr1;
    char* ptr2;
    int v3;
    int v4;
    int v5;
    unsigned int* ptr3;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    char v12;
    int v13;
    char v14;
    char v15;
    char v16;
    char v17;
    char v18;
    char v19;
    char v20;
    unsigned int* ptr4;
    int v21;
    int v22;
    unsigned char v23;
    int v24;
    int v25;
    unsigned int* ptr5;
    int v26;
    int v27;
    char v28;
    void* ptr6;
    short v29;
    int v30;
    int v31;
    int v32;
    int v33;
    unsigned int* ptr7;
    char v34;
    int v35;
    int v36 = &gvar_409160;
    int v37 = v33;
    int v38 = gvar_40B498;
    int v39 = 0;
    int v40 = 0;
    int v41 = 0;
    int v42 = 0;
    int v43 = 0;
    char v44 = 0;
    int v45 = 0;
    int v46 = 0;
loc_401DFF:
    int v47 = param1;
loc_401E02:
    v39 = (unsigned int)*(char*)v47 | ((unsigned int)((v39 >>> 8) & 0xffffff) << 8);
    if((unsigned char)v39) {
        int v48 = (int)(v39 & 0xFF);
        if(gvar_40B4A0 > 1) {
            v27 = sub_404318(v48);
            v26 = (int)(void*)0x8;
        }
        else {
            v26 = gvar_40B490;
            v27 = (unsigned int)*(char*)(v48 * 2 + v26) & 0x8;
        }
        ptr5 = NULL;
        if(v27 != 0) {
            --v45;
        }
        else {
            v25 = param1;
            if(*(char*)v25 == 37) {
                v24 = 0;
                v23 = 0;
                v22 = 0;
                v21 = 0;
                ptr4 = NULL;
                v20 = 0;
                v19 = 0;
                v18 = 0;
                v17 = 0;
                v16 = 0;
                v15 = 0;
                v14 = 1;
                v13 = 0;
                goto loc_401EE0;
            }
            else {
                ++v45;
                int v49 = sub_401DA6(v26, param0);
                v43 = v49;
                int v50 = (unsigned int)*(char*)v25;
                v47 = v25 + 1;
                param1 = v47;
                if(v50 == v49) {
                    v39 = (int)(v49 & 0xFF);
                    int v51 = gvar_40B490;
                    if(!(*(char*)(v39 * 2 + v51 + 1) & 0x80)) {
                    loc_402BC4:
                        if(v43 != -1) {
                            goto loc_401E02;
                        }
                        else if(*(char*)v47 == 37) {
                            v39 = param1;
                            if(*(char*)(v39 + 1) == 110) {
                                goto loc_401DFF;
                            }
                        }
                        goto loc_402BE3;
                    }
                    else {
                        ++v45;
                        v39 = sub_401DA6(v51, param0);
                        int v52 = (unsigned int)*(char*)v47;
                        ++v47;
                        param1 = v47;
                        if(v39 == v52) {
                            --v45;
                            goto loc_402BC4;
                        }
                        else if(v39 != -1) {
                            sub_404474(v39, (int*)param0);
                        }
                    }
                }
                v12 = v49 == -1;
            loc_402BA3:
                if(!v12) {
                    sub_404474(v43, (int*)param0);
                }
                goto loc_402BE3;
            }
        }
        do {
            ++v45;
            v11 = sub_401DA6(v26, param0);
            v32 = sub_4044E0(v11);
            v26 = (int)ptr6;
        }
        while(v32);
        if(v11 != -1) {
            sub_404474(v11, (int*)param0);
            goto loc_401E68;
        loc_401EE0:
            do {
                ++v25;
                int v53 = (unsigned int)*(char*)v25;
                int v54 = (int)(v53 & 0xFF);
                if(gvar_40B4A0 > 1) {
                    v39 = sub_404318(v54);
                    v10 = (int)(void*)0x4;
                }
                else {
                    v10 = gvar_40B490;
                    v39 = (unsigned int)*(char*)(v54 * 2 + v10) & 0x4;
                }
                if(v39) {
                    ++v21;
                    v39 = (int)ptr5 * 5;
                    ptr5 = (unsigned int*)(v39 * 2 + v53 - 48);
                }
                else {
                    char v55 = v53 == 78;
                    if(!v55 && v53 >= 78) {
                        if(v53 != 104) {
                            if(v53 == 119) {
                                goto loc_401FCA;
                            }
                            else if(v53 != 108) {
                            loc_401FBC:
                                v17 = 1;
                            }
                            ++v14;
                        loc_401FCA:
                            ++v15;
                        }
                        else {
                            v14 += 0xFF;
                            v15 += 0xFF;
                        }
                    }
                    else if(!v55) {
                        if(v53 == 42) {
                            ++v18;
                        }
                        else if(v53 != 70) {
                            if(v53 == 76) {
                                ++v14;
                            }
                            else if(v53 != 73) {
                                goto loc_401FBC;
                            }
                            v10 = (unsigned int)*(char*)(v25 + 1) | ((unsigned int)((v10 >>> 8) & 0xffffff) << 8);
                            if((unsigned char)v10 == 54) {
                                v39 = v25 + 2;
                                if(*(char*)v39 == 52) {
                                    v25 = v39;
                                    ++v13;
                                    v9 = 0;
                                    v8 = 0;
                                }
                            }
                            if((unsigned char)v10 == 51) {
                                v39 = v25 + 2;
                                if(*(char*)v39 == 50) {
                                    v25 = v39;
                                }
                            }
                            if((unsigned char)v10 != 100 && (unsigned char)v10 != 105 && (unsigned char)v10 != 111 && (unsigned char)v10 != 120 && (unsigned char)v10 != 88) {
                                goto loc_401FBC;
                            }
                        }
                    }
                }
            }
            while(!v17);
            ptr4 = ptr5;
            param1 = v25;
            if(!v18) {
                int v56 = param2;
                v7 = v56;
                v39 = v56 + 4;
                param2 = v39;
                v6 = *(int*)(v39 - 4);
                v42 = v6;
            }
            else {
                v6 = v42;
            }
            v17 = 0;
            if(!v15) {
                v39 = (unsigned int)*(char*)v25 | ((unsigned int)((v39 >>> 8) & 0xffffff) << 8);
                if((unsigned char)v39 != 83) {
                    v15 = -1;
                    if((unsigned char)v39 == 67) {
                        goto loc_40203E;
                    }
                }
                else {
                loc_40203E:
                    v15 = 1;
                }
            }
            ptr5 = (unsigned int*)((unsigned int)*(char*)v25 | 0x20);
            ptr3 = ptr5;
            if(ptr5 == 99 || ptr5 == 123) {
                ++v45;
                v39 = sub_401DA6(v10, param0);
                v43 = v39;
            }
            else if(ptr5 != 110) {
                goto loc_402060;
            }
        }
        else {
        loc_401E68:
            do {
                ++param1;
                v39 = sub_4044E0((int)*(char*)param1);
            }
            while(v39);
            goto loc_401DFF;
        loc_402060:
            do {
                ++v45;
                v5 = sub_401DA6(v10, param0);
                v39 = sub_4044E0(v5);
                v10 = (int)ptr6;
            }
            while(v39);
            v43 = v5;
            v25 = param1;
        }
        v4 = v21;
        if(v4 && !ptr4) {
            v12 = v43 == -1;
            goto loc_402BA3;
        }
        else {
            char v57 = ptr5 == 111;
            if(!v57 && (int)ptr5 >= 111) {
                v39 = (int)(ptr5 - 28);
                if(v39) {
                    int v58 = v39 - 3;
                    if(!v58) {
                        goto loc_40239A;
                    }
                    else {
                        v39 = v58 - 2;
                        if(v39) {
                            v39 -= 3;
                            if(!v39) {
                                goto loc_402106;
                            }
                            else if(v39 != 3) {
                            loc_4023D2:
                                v39 = (int)*(char*)v25;
                                if(v39 != v43) {
                                    v12 = v43 == -1;
                                    goto loc_402BA3;
                                }
                                else {
                                    v44 += 0xFF;
                                    if(!v18) {
                                        v39 = v7;
                                        param2 = v39;
                                    }
                                    ++v44;
                                    ++param1;
                                    v47 = param1;
                                    goto loc_402BC4;
                                }
                            }
                            else {
                                if(v15 > 0) {
                                    v16 = 1;
                                }
                                v3 = param1 + 1;
                                param1 = v3;
                                if(*(char*)v3 == 94) {
                                    ++v3;
                                    v20 = 0xFF;
                                }
                                ptr2 = (char*)v40;
                                if(!ptr2) {
                                    sub_403D30();
                                    char* ptr8 = &ptr7;
                                    ptr2 = &ptr7;
                                    v40 = (int)&ptr7;
                                    v36 = -1;  // } (starts at 402444h)
                                }
                                ptr1 = sub_4045E0(ptr2, 0, (int*)0x20);
                                if(ptr3 != 123 || *(char*)v3 != 93) {
                                loc_40252E:
                                    v2 = v23;
                                }
                                else {
                                    v2 = 93;
                                    ++v3;
                                    ptr2[11] = ' ';
                                }
                                goto loc_402534;
                            }
                        }
                    }
                }
                else {
                    v14 = 1;
                }
                goto loc_4027CF;
            }
            else if(v57) {
                goto loc_4027CF;
            }
            else if(ptr5 == 99) {
                if(!v4) {
                    v21 = 1;
                    ptr4 = (unsigned int*)((char*)ptr4 + 1);
                    goto loc_40239A;
                loc_4027CF:
                    v1 = v43;
                    if(v1 == 45) {
                        v19 = 1;
                        goto loc_4027E8;
                    }
                    if(v1 != 43) {
                    loc_40281A:
                        if(v13) {
                            if(v17) {
                            loc_402989:
                                if(v19) {
                                    v39 = 0 - v9;
                                    int v59 = 0 - ((unsigned int)((unsigned int)v9 > 0) + v8);
                                    v9 = v39;
                                    v8 = v59;
                                loc_402ADB:
                                    if(ptr5 == 70) {
                                        v22 = 0;
                                    }
                                    if(!v22) {
                                        goto loc_402BE3;
                                    }
                                    else if(v18) {
                                        ++v44;
                                        ++param1;
                                        v47 = param1;
                                        goto loc_402BC4;
                                    }
                                    else {
                                        ++v46;
                                        v6 = v42;
                                        v39 = v24;
                                        goto loc_402B13;
                                    }
                                }
                                else {
                                    goto loc_402ADB;
                                }
                            }
                            else {
                                do {
                                    if(ptr5 != 120 && ptr5 != 112) {
                                        if(gvar_40B4A0 > 1) {
                                            v39 = sub_404318(v1);
                                            v4 = (int)(void*)0x4;
                                        }
                                        else {
                                            v39 = (unsigned int)*(char*)(v1 * 2 + gvar_40B490) & 0x4;
                                        }
                                        if(!v39) {
                                            goto loc_402908;
                                        }
                                        else if(ptr5 != 111) {
                                            v39 = _allmul(v9, v8, 10, 0);
                                            v9 = v39;
                                            v8 = v35;
                                        }
                                        else if(v1 >= 56) {
                                            goto loc_402908;
                                        }
                                        else {
                                            v4 = (int)((unsigned long long)((v9 >>> 29) & 7) | ((unsigned long long)v8 << 3) | ((unsigned long long)0 << 35));
                                            v39 = v9 * 8;
                                            v9 = v39;
                                            v8 = v4;
                                        }
                                    }
                                    else {
                                        if(gvar_40B4A0 > 1) {
                                            v39 = sub_404318(v1);
                                            v4 = (int)(void*)0x80;
                                        }
                                        else {
                                            v39 = (unsigned int)*(char*)(v1 * 2 + gvar_40B490) & 0x80;
                                        }
                                        if(v39) {
                                            int v60 = (int)((unsigned long long)((v9 >>> 28) & 0xF) | ((unsigned long long)v8 << 4) | ((unsigned long long)0 << 36));
                                            v9 *= 16;
                                            v8 = v60;
                                            v39 = sub_401D74();
                                            v1 = v39;
                                        }
                                        else {
                                        loc_402908:
                                            v17 = 1;
                                        }
                                    }
                                    if(!v17) {
                                        ++v22;
                                        v39 = v1 - 48;
                                        int v61 = v9;
                                        v9 += v39;
                                        v8 += (unsigned int)__carry__(v39, v61) + (v39 < 0 ? -1: 0);
                                        if(v21) {
                                            ptr4 = (unsigned int*)((char*)ptr4 - 1);
                                            if(ptr4) {
                                                goto loc_402947;
                                            }
                                            else {
                                                v17 = 1;
                                            }
                                        }
                                        else {
                                        loc_402947:
                                            ++v45;
                                            v39 = sub_401DA6(v4, param0);
                                            v1 = v39;
                                        }
                                    }
                                    else {
                                        --v45;
                                        if(v1 != -1) {
                                            v39 = sub_404474(v1, (int*)param0);
                                            v4 = (int)ptr6;
                                        }
                                    }
                                }
                                while(!v17);
                                v43 = v1;
                                goto loc_402989;
                            }
                        }
                        else if(v17) {
                        loc_402AD0:
                            if(v19) {
                                v24 = 0 - v24;
                            }
                            goto loc_402ADB;
                        }
                        else {
                            do {
                                if(ptr5 != 120 && ptr5 != 112) {
                                    if(gvar_40B4A0 > 1) {
                                        v39 = sub_404318(v1);
                                        v4 = (int)(void*)0x4;
                                    }
                                    else {
                                        v39 = (unsigned int)*(char*)(v1 * 2 + gvar_40B490) & 0x4;
                                    }
                                    if(!v39) {
                                        goto loc_402A4F;
                                    }
                                    else if(ptr5 != 111) {
                                        v39 = v24 * 5 * 2;
                                        v24 = v39;
                                    }
                                    else if(v1 >= 56) {
                                        goto loc_402A4F;
                                    }
                                    else {
                                        v24 *= 8;
                                    }
                                }
                                else {
                                    if(gvar_40B4A0 > 1) {
                                        v39 = sub_404318(v1);
                                        v4 = (int)(void*)0x80;
                                    }
                                    else {
                                        v39 = (unsigned int)*(char*)(v1 * 2 + gvar_40B490) & 0x80;
                                    }
                                    if(v39) {
                                        v24 *= 16;
                                        v39 = sub_401D74();
                                        v1 = v39;
                                    }
                                    else {
                                    loc_402A4F:
                                        v17 = 1;
                                    }
                                }
                                if(!v17) {
                                    ++v22;
                                    v39 = v1 + v24 - 48;
                                    v24 = v39;
                                    if(v21) {
                                        ptr4 = (unsigned int*)((char*)ptr4 - 1);
                                        if(ptr4) {
                                            goto loc_402A8E;
                                        }
                                        else {
                                            v17 = 1;
                                        }
                                    }
                                    else {
                                    loc_402A8E:
                                        ++v45;
                                        v39 = sub_401DA6(v4, param0);
                                        v1 = v39;
                                    }
                                }
                                else {
                                    --v45;
                                    if(v1 != -1) {
                                        v39 = sub_404474(v1, (int*)param0);
                                        v4 = (int)ptr6;
                                    }
                                }
                            }
                            while(!v17);
                            v43 = v1;
                            goto loc_402AD0;
                        }
                    }
                    else {
                    loc_4027E8:
                        ptr4 = (unsigned int*)((char*)ptr4 - 1);
                        if(!ptr4 && v4) {
                            v17 = 1;
                            goto loc_40281A;
                        }
                        else {
                            ++v45;
                            v39 = sub_401DA6(v4, param0);
                            v1 = v39;
                            v43 = v1;
                            goto loc_40281A;
                        loc_402106:
                            v1 = v43;
                            if(v1 == 45) {
                                v19 = 1;
                                goto loc_40267D;
                            }
                        }
                    }
                }
                else {
                loc_40239A:
                    if(v15 > 0) {
                        v16 = 1;
                    }
                    goto loc_40255A;
                }
                if(v1 == 43) {
                loc_40267D:
                    ptr4 = (unsigned int*)((char*)ptr4 - 1);
                    if(!ptr4 && v4) {
                        v17 = 1;
                    }
                    else {
                        ++v45;
                        v39 = sub_401DA6(v4, param0);
                        v1 = v39;
                        v43 = v1;
                    }
                }
                if(v1 == 48) {
                    ++v45;
                    v39 = sub_401DA6(v4, param0);
                    v1 = v39;
                    v43 = v1;
                    if((unsigned char)v1 != 120 && (unsigned char)v1 != 88) {
                        v22 = 1;
                        if(ptr5 != 120) {
                            if(v21) {
                                ptr4 = (unsigned int*)((char*)ptr4 - 1);
                                if(!ptr4) {
                                    ++v17;
                                }
                            }
                            ptr6 = (void*)0x6F;
                            ptr5 = (unsigned int*)ptr6;
                            goto loc_40281A;
                        }
                        else {
                            --v45;
                            if(v1 != -1) {
                                v39 = sub_404474(v1, (int*)param0);
                                v4 = (int)ptr6;
                            }
                            v1 = (int)(void*)0x30;
                        }
                    }
                    else {
                        ++v45;
                        v39 = sub_401DA6(v30, param0);
                        v1 = v39;
                        v43 = v1;
                        if(v21) {
                            ptr4 = (unsigned int*)((char*)ptr4 - 2);
                            if((int)ptr4 < 1) {
                                ++v17;
                            }
                        }
                        ptr6 = (void*)0x78;
                        ptr5 = (unsigned int*)ptr6;
                        goto loc_40281A;
                    }
                    v43 = v1;
                }
                goto loc_40281A;
            }
            else {
                char v62 = (int)ptr5 < 100;
                char v63 = (int)(int*)((int)(int*)((int)(int*)(ptr5 - 25) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x64)) < 0;
                if(ptr5 == 100) {
                    goto loc_4027CF;
                }
                else if(v62 != v63) {
                    goto loc_4023D2;
                }
                else if((int)ptr5 <= 103) {
                    ptr0 = &v28;
                    v0 = v43;
                    switch(v0) {
                        case 43: {
                        loc_402145:
                            ptr4 = (unsigned int*)((char*)ptr4 - 1);
                            ++v45;
                            ptr5 = param0;
                            v0 = sub_401DA6(v4, ptr5);
                            v43 = v0;
                            break;
                        }
                        case 45: {
                            v28 = 45;
                            ptr0 = &v34;
                            goto loc_402145;
                        }
                        default: {
                            ptr5 = param0;
                            break;
                        }
                    }
                }
                else if(ptr5 == 105) {
                    ptr5 = (unsigned int*)0x64;
                    goto loc_402106;
                }
                else if(ptr5 != 110) {
                    goto loc_4023D2;
                }
                else {
                    v39 = v45;
                    if(!v18) {
                    loc_402B13:
                        if(v13) {
                            *(int*)v6 = v9;
                            v39 = v8;
                            *(int*)(v6 + 4) = v39;
                        }
                        else if(v14) {
                            *(int*)v6 = v39;
                        }
                        else {
                            *(short*)v6 = (unsigned short)v39;
                        }
                    }
                    ++v44;
                    ++param1;
                    v47 = param1;
                    goto loc_402BC4;
                }
            }
        }
        if(!v21 || (int)ptr4 > 349) {
            ptr4 = (unsigned int*)0x15D;
            goto loc_40218E;
        }
        else {
        loc_40218E:
            while(1) {
                if(gvar_40B4A0 > 1) {
                    v39 = sub_404318(v0);
                    v4 = (int)(void*)0x4;
                }
                else {
                    v39 = (unsigned int)*(char*)(v0 * 2 + gvar_40B490) & 0x4;
                }
                if(!v39) {
                    break;
                }
                else {
                    v39 = (int)ptr4;
                    ptr4 = (unsigned int*)((char*)ptr4 - 1);
                    if(!v39) {
                        break;
                    }
                    else {
                        ++v22;
                        *(char*)ptr0 = (unsigned char)v0;
                        ptr0 = (void*)((int)ptr0 + 1);
                        ++v45;
                        v0 = sub_401DA6(v4, ptr5);
                        v43 = v0;
                    }
                }
            }
        }
        if((unsigned char)v0 == gvar_40B4A4) {
            v39 = (int)ptr4;
            ptr4 = (unsigned int*)((char*)ptr4 - 1);
            if(v39) {
                ++v45;
                v0 = sub_401DA6(v4, ptr5);
                *(unsigned char*)ptr0 = gvar_40B4A4;
                ptr0 = (void*)((int)ptr0 + 1);
                while(1) {
                    v43 = v0;
                    if(gvar_40B4A0 > 1) {
                        v39 = sub_404318(v0);
                        v4 = (int)(void*)0x4;
                    }
                    else {
                        v39 = (unsigned int)*(char*)(v0 * 2 + gvar_40B490) & 0x4;
                    }
                    if(!v39) {
                        goto loc_402267;
                    }
                    else {
                        v39 = (int)ptr4;
                        ptr4 = (unsigned int*)((char*)ptr4 - 1);
                        if(!v39) {
                            goto loc_402267;
                        }
                        else {
                            ++v22;
                            *(char*)ptr0 = (unsigned char)v0;
                            ptr0 = (void*)((int)ptr0 + 1);
                            ++v45;
                            v0 = sub_401DA6(v4, ptr5);
                        }
                    }
                }
                goto loc_402ADB;
            }
        }
    loc_402267:
        if(!v22 || (v0 != 101 && v0 != 69)) {
        loc_402324:
            --v45;
            if(v0 != -1) {
                v39 = sub_404474(v0, (int*)ptr5);
            }
            if(v22) {
                if(!v18) {
                    ++v46;
                    *(char*)ptr0 = 0;
                    ptr6 = &v28;
                    int v64 = v42;
                    int v65 = (int)v14 - 1;
                    v39 = gvar_40B350{sub_4051BD}();
                }
                ++v44;
                ++param1;
                v47 = param1;
                goto loc_402BC4;
            }
        }
        else {
            v39 = (int)ptr4;
            ptr4 = (unsigned int*)((char*)ptr4 - 1);
            if(!v39) {
                goto loc_402324;
            }
            else {
                *(char*)ptr0 = 101;
                ptr0 = (void*)((int)ptr0 + 1);
                ++v45;
                int v66 = sub_401DA6(v4, ptr5);
                v0 = v66;
                v43 = v0;
                if(v0 == 45) {
                    *(char*)ptr0 = (unsigned char)v66;
                    ptr0 = (void*)((int)ptr0 + 1);
                    goto loc_4022B7;
                }
                if(v0 != 43) {
                loc_4022EB:
                    if(gvar_40B4A0 > 1) {
                        v39 = sub_404318(v0);
                        v31 = (int)(void*)0x4;
                    }
                    else {
                        v39 = (unsigned int)*(char*)(v0 * 2 + gvar_40B490) & 0x4;
                    }
                    if(v39) {
                        v39 = (int)ptr4;
                        ptr4 = (unsigned int*)((char*)ptr4 - 1);
                        if(v39) {
                            ++v22;
                            *(char*)ptr0 = (unsigned char)v0;
                            ptr0 = (void*)((int)ptr0 + 1);
                            goto loc_4022D1;
                        }
                    }
                    goto loc_402324;
                }
                else {
                loc_4022B7:
                    unsigned int* ptr9 = ptr4;
                    ptr4 = (unsigned int*)((char*)ptr4 - 1);
                    if(ptr9) {
                    loc_4022D1:
                        ++v45;
                        v0 = sub_401DA6(v31, ptr5);
                        v43 = v0;
                    }
                    else {
                        ptr4 = NULL;
                    }
                    goto loc_4022EB;
                }
            }
        }
    }
loc_402BE3:
    if(v41 == 1) {
        sub_40403C(v40);
    }
    return sub_4041A2(v38);
loc_402534:
    do {
        ptr1 = (unsigned int)*(char*)v3 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        if((unsigned char)ptr1 != 93) {
            ++v3;
            if((unsigned char)ptr1 == 45 && v2) {
                v4 = (unsigned int)*(char*)v3 | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
                if((unsigned char)v4 != 93) {
                    ++v3;
                    if((unsigned char)v4 > v2) {
                        ptr1 = (unsigned int)(unsigned char)v4 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
                    }
                    else {
                        ptr1 = (unsigned int)v2 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
                        v2 = (unsigned char)v4;
                    }
                    if((unsigned char)ptr1 >= v2) {
                        int v67 = (unsigned int)v2;
                        int counter = (unsigned int)((unsigned char)ptr1 - v2 + 1);
                        do {
                            ptr1 = &ptr2[v67 >>> 3];
                            v4 = v67 & 7;
                            ptr1[0] |= 1 << (v4 & 0x1f);
                            ++v67;
                            --counter;
                        }
                        while(counter);
                    }
                    v2 = 0;
                    goto loc_402534;
                }
            }
            v23 = (unsigned char)ptr1;
            int v68 = (unsigned int)(char*)(ptr1 & 0xFF);
            ptr1 = &ptr2[v68 >>> 3];
            v4 = v68 & 7;
            ptr1[0] |= 1 << (v4 & 0x1f);
            goto loc_40252E;
        }
    }
    while((unsigned char)ptr1 != 93);
    if(!(unsigned char)ptr1) {
        goto loc_402BE3;
    }
    else {
        v6 = v42;
        if(ptr3 == 123) {
            param1 = v3;
        }
        ptr5 = ptr3;
    loc_40255A:
        int v69 = v6;
        --v45;
        if(v43 != -1) {
            sub_404474(v43, (int*)param0);
            v4 = (int)ptr6;
        }
        while(1) {
            if(v21) {
                v39 = (int)ptr4;
                ptr4 = (unsigned int*)((char*)ptr4 - 1);
                if(!v39) {
                    goto loc_402782;
                }
            }
            ++v45;
            v39 = sub_401DA6(v4, param0);
            v43 = v39;
            if(v39 == -1) {
                break;
            }
            else {
                if(ptr5 != 99 && (ptr5 != 115 || (v39 >= 9 && v39 <= 13) || v39 == 32)) {
                    if(ptr5 != 123) {
                        break;
                    }
                    else {
                        v4 = (int)*(char*)((v39 >> 3) + v40) ^ (int)v20;
                        if(!((1 << (v39 & 7)) & v4)) {
                            break;
                        }
                        else {
                            ptr5 = ptr3;
                        }
                    }
                }
                if(!v18) {
                    if(v16) {
                        char v70 = (unsigned char)v39;
                        int v71 = gvar_40B490;
                        if((*(char*)((unsigned int)(v39 & 0xFF) * 2 + v71 + 1) & 0x80)) {
                            ++v45;
                            int v72 = sub_401DA6(v71, param0);
                            char v73 = (unsigned char)v72;
                        }
                        sub_404509(&v29, &v70, gvar_40B4A0);
                        *(short*)v6 = v29;
                        v6 += 2;
                    }
                    else {
                        *(char*)v6 = (unsigned char)v39;
                        ++v6;
                    }
                    v42 = v6;
                }
                else {
                    ++v69;
                }
            }
        }
        --v45;
        if(v39 != -1) {
            v39 = sub_404474(v39, (int*)param0);
        }
    loc_402782:
        if(v6 == v69) {
            goto loc_402BE3;
        }
        else {
            if(!v18) {
                ++v46;
                if(ptr3 != 99) {
                    v39 = v42;
                    if(v16) {
                        *(short*)v39 = 0;
                    }
                    else {
                        *(char*)v39 = 0;
                    }
                }
            }
            ++v44;
            ++param1;
            v47 = param1;
            goto loc_402BC4;
        }
    }
}

int sub_402460() {
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402464(int param0) {
    int v0;
    unsigned char* ptr0;
    int v1;
    int v2;
    int v3;
    int v4;
    char v5;
    int v6;
    int v7;
    int v8;
    int v9;
    unsigned char v10;
    char* ptr1;
    char* ptr2;
    char* ptr3;
    void* ptr4;
    char v11;
    int* ptr5;
    int v12;
    int v13;
    int v14;
    int v15;
    sub_404640();
    int v16 = sub_403DDF(32);
    *(ptr5 - 111) = v16;
    if(!v16) {
        *(ptr5 - 1) = -1;
    }
    else {
        *(ptr5 - 118) = 1;
        *(ptr5 - 1) = -1;
        ptr3 = *(unsigned int*)(ptr5 - 116);
        ptr2 = *(char**)(ptr5 - 111);
    loc_4024A6:
        ptr1 = sub_4045E0(ptr2, 0, (int*)0x20);
        if(*(ptr5 - 112) == 123 && *ptr3 == 93) {
            v10 = 93;
            ++ptr3;
            ptr2[11] = ' ';
            goto loc_402534;
        }
        else {
            goto loc_40252E;
        }
    }
loc_402BE3:
    if(*(ptr5 - 118) == 1) {
        sub_40403C(*(ptr5 - 111));
    }
    int v17 = *(ptr5 - 7);
    unsigned int* ptr6 = (unsigned int*)(ptr5 - 123);
    *ptr6 = &loc_402C1D;
    /*BAD_CALL!*/ sub_4041A2(v17);
    jump *(ptr5 + 1);
loc_40252E:
    v10 = *(unsigned char*)(ptr5 - 102);
loc_402534:
    do {
        ptr1 = (unsigned int)*ptr3 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        if((unsigned char)ptr1 != 93) {
            ++ptr3;
            if((unsigned char)ptr1 == 45 && v10) {
                param0 = (unsigned int)*ptr3 | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
                if((unsigned char)param0 != 93) {
                    ++ptr3;
                    if((unsigned char)param0 > v10) {
                        ptr1 = (unsigned int)(unsigned char)param0 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
                    }
                    else {
                        ptr1 = (unsigned int)v10 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
                        v10 = (unsigned char)param0;
                    }
                    if((unsigned char)ptr1 >= v10) {
                        int v18 = (unsigned int)v10;
                        *(ptr5 - 117) = (unsigned int)((unsigned char)ptr1 - v10 + 1);
                        do {
                            ptr1 = &ptr2[v18 >>> 3];
                            param0 = v18 & 7;
                            ptr1[0] |= 1 << (param0 & 0x1f);
                            ++v18;
                            *(ptr5 - 117) = *(ptr5 - 117) - 1;
                        }
                        while(*(ptr5 - 117));
                    }
                    v10 = 0;
                    goto loc_402534;
                }
            }
            *(char*)(ptr5 - 102) = (unsigned char)ptr1;
            int v19 = (unsigned int)(char*)(ptr1 & 0xFF);
            ptr1 = &ptr2[v19 >>> 3];
            param0 = v19 & 7;
            ptr1[0] |= 1 << (param0 & 0x1f);
            goto loc_40252E;
        }
    }
    while((unsigned char)ptr1 != 93);
    if(!(unsigned char)ptr1) {
        goto loc_402BE3;
    }
    else {
        short* ptr7 = *(unsigned int*)(ptr5 - 108);
        if(*(ptr5 - 112) == 123) {
            *(unsigned int*)(ptr5 + 3) = ptr3;
        }
        unsigned int* ptr8 = *(unsigned int**)(ptr5 - 112);
    loc_40255A:
        short* ptr9 = ptr7;
        *(ptr5 - 97) = *(ptr5 - 97) - 1;
        if(*(ptr5 - 101) != -1) {
            sub_404474(*(ptr5 - 101), *(int**)(ptr5 + 2));
            param0 = (int)ptr4;
        }
        while(1) {
            if(*(ptr5 - 109)) {
                v9 = *(ptr5 - 99);
                *(ptr5 - 99) = *(ptr5 - 99) - 1;
                if(!v9) {
                    goto loc_402782;
                }
            }
            *(ptr5 - 97) = *(ptr5 - 97) + 1;
            v9 = sub_401DA6(param0, *(unsigned int**)(ptr5 + 2));
            *(ptr5 - 101) = v9;
            if(v9 == -1) {
                goto loc_40276A;
            }
            else {
                if(ptr8 != 99 && (ptr8 != 115 || (v9 >= 9 && v9 <= 13) || v9 == 32)) {
                    if(ptr8 != 123) {
                        goto loc_40276A;
                    }
                    else {
                        param0 = (int)*(char*)((v9 >> 3) + *(ptr5 - 111)) ^ (int)*(char*)((char*)ptr5 - 0x1a1);
                        if(!((1 << (v9 & 7)) & param0)) {
                            goto loc_40276A;
                        }
                        else {
                            ptr8 = *(unsigned int**)(ptr5 - 112);
                        }
                    }
                }
                if(!*(char*)((char*)ptr5 - 398)) {
                    if(*(char*)((char*)ptr5 - 406)) {
                        *(char*)(ptr5 - 113) = (unsigned char)v9;
                        int v20 = gvar_40B490;
                        if((*(char*)((unsigned int)(v9 & 0xFF) * 2 + v20 + 1) & 0x80)) {
                            *(ptr5 - 97) = *(ptr5 - 97) + 1;
                            int v21 = sub_401DA6(v20, *(unsigned int**)(ptr5 + 2));
                            *(char*)((char*)ptr5 - 451) = (unsigned char)v21;
                        }
                        sub_404509((LPWSTR)(ptr5 - 115), (LPCCH)(ptr5 - 113), gvar_40B4A0);
                        *ptr7 = *(short*)(ptr5 - 115);
                        ++ptr7;
                    }
                    else {
                        *(char*)ptr7 = (unsigned char)v9;
                        ptr7 = (short*)((char*)ptr7 + 1);
                    }
                    *(unsigned int*)(ptr5 - 108) = ptr7;
                }
                else {
                    ptr9 = (short*)((char*)ptr9 + 1);
                }
            }
        }
    loc_40276A:
        *(ptr5 - 97) = *(ptr5 - 97) - 1;
        if(v9 != -1) {
            v9 = sub_404474(v9, *(int**)(ptr5 + 2));
        }
    loc_402782:
        if(ptr7 == ptr9) {
            goto loc_402BE3;
        }
        else {
            if(!*(char*)((char*)ptr5 - 398)) {
                *(ptr5 - 110) = *(ptr5 - 110) + 1;
                if(*(ptr5 - 112) != 99) {
                    v9 = *(ptr5 - 108);
                    if(*(char*)((char*)ptr5 - 406)) {
                        *(short*)v9 = 0;
                    }
                    else {
                        *(char*)v9 = 0;
                    }
                }
            }
        loc_402B38:
            *(char*)((char*)ptr5 - 405) = *(char*)((char*)ptr5 - 405) + 1;
            *(ptr5 + 3) = *(ptr5 + 3) + 1;
            char* ptr10 = *(unsigned int*)(ptr5 + 3);
        loc_402BC4:
            if(*(ptr5 - 101) == -1) {
                if(*ptr10 != 37) {
                    goto loc_402BE3;
                }
                else {
                    v9 = *(ptr5 + 3);
                    if(*(char*)(v9 + 1) != 110) {
                        goto loc_402BE3;
                    }
                    else {
                    loc_401DFF:
                        ptr10 = *(unsigned int*)(ptr5 + 3);
                    }
                }
            }
            v9 = (unsigned int)*ptr10 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
            if(!(unsigned char)v9) {
                goto loc_402BE3;
            }
            else {
                int v22 = (int)(v9 & 0xFF);
                if(gvar_40B4A0 > 1) {
                    v8 = sub_404318(v22);
                    v7 = (int)(void*)0x8;
                }
                else {
                    v7 = gvar_40B490;
                    v8 = (unsigned int)*(char*)(v22 * 2 + v7) & 0x8;
                }
                ptr8 = NULL;
                if(v8 != 0) {
                    *(ptr5 - 97) = *(ptr5 - 97) - 1;
                }
                else {
                    v6 = *(ptr5 + 3);
                    if(*(char*)v6 == 37) {
                        *(ptr5 - 104) = 0;
                        *(char*)(ptr5 - 102) = 0;
                        *(ptr5 - 103) = 0;
                        *(ptr5 - 109) = 0;
                        *(ptr5 - 99) = 0;
                        *(char*)((char*)ptr5 - 0x1a1) = 0;
                        *(char*)((char*)ptr5 - 407) = 0;
                        *(char*)((char*)ptr5 - 398) = 0;
                        *(char*)((char*)ptr5 - 381) = 0;
                        *(char*)((char*)ptr5 - 406) = 0;
                        *(char*)((char*)ptr5 - 389) = 0;
                        *(char*)((char*)ptr5 - 397) = 1;
                        *(ptr5 - 114) = 0;
                        goto loc_401EE0;
                    }
                    else {
                        *(ptr5 - 97) = *(ptr5 - 97) + 1;
                        int v23 = sub_401DA6(v7, *(unsigned int**)(ptr5 + 2));
                        *(ptr5 - 101) = v23;
                        int v24 = (unsigned int)*(char*)v6;
                        ptr10 = (char*)(v6 + 1);
                        *(unsigned int*)(ptr5 + 3) = ptr10;
                        if(v24 == v23) {
                            v9 = (int)(v23 & 0xFF);
                            int v25 = gvar_40B490;
                            if(!(*(char*)(v9 * 2 + v25 + 1) & 0x80)) {
                                goto loc_402BC4;
                            }
                            else {
                                *(ptr5 - 97) = *(ptr5 - 97) + 1;
                                v9 = sub_401DA6(v25, *(unsigned int**)(ptr5 + 2));
                                int v26 = (unsigned int)*ptr10;
                                ++ptr10;
                                *(unsigned int*)(ptr5 + 3) = ptr10;
                                if(v9 == v26) {
                                    *(ptr5 - 97) = *(ptr5 - 97) - 1;
                                    goto loc_402BC4;
                                }
                                else if(v9 != -1) {
                                    sub_404474(v9, *(int**)(ptr5 + 2));
                                }
                            }
                        }
                        v5 = v23 == -1;
                    loc_402BA3:
                        if(!v5) {
                            sub_404474(*(ptr5 - 101), *(int**)(ptr5 + 2));
                        }
                        goto loc_402BE3;
                    }
                }
                do {
                    *(ptr5 - 97) = *(ptr5 - 97) + 1;
                    v4 = sub_401DA6(v7, *(unsigned int**)(ptr5 + 2));
                    v13 = sub_4044E0(v4);
                    v7 = (int)ptr4;
                }
                while(v13);
                if(v4 != -1) {
                    sub_404474(v4, *(int**)(ptr5 + 2));
                    goto loc_401E68;
                loc_401EE0:
                    do {
                        ++v6;
                        int v27 = (unsigned int)*(char*)v6;
                        int v28 = (int)(v27 & 0xFF);
                        if(gvar_40B4A0 > 1) {
                            v9 = sub_404318(v28);
                            v3 = (int)(void*)0x4;
                        }
                        else {
                            v3 = gvar_40B490;
                            v9 = (unsigned int)*(char*)(v28 * 2 + v3) & 0x4;
                        }
                        if(v9) {
                            *(ptr5 - 109) = *(ptr5 - 109) + 1;
                            v9 = (int)ptr8 * 5;
                            ptr8 = (unsigned int*)(v9 * 2 + v27 - 48);
                        }
                        else {
                            char v29 = v27 == 78;
                            if(!v29 && v27 >= 78) {
                                if(v27 != 104) {
                                    if(v27 == 119) {
                                        goto loc_401FCA;
                                    }
                                    else if(v27 != 108) {
                                    loc_401FBC:
                                        *(char*)((char*)ptr5 - 381) = *(char*)((char*)ptr5 - 381) + 1;
                                    }
                                    *(char*)((char*)ptr5 - 397) = *(char*)((char*)ptr5 - 397) + 1;
                                loc_401FCA:
                                    *(char*)((char*)ptr5 - 389) = *(char*)((char*)ptr5 - 389) + 1;
                                }
                                else {
                                    *(char*)((char*)ptr5 - 397) = *(char*)((char*)ptr5 - 397) + 0xFF;
                                    *(char*)((char*)ptr5 - 389) = *(char*)((char*)ptr5 - 389) + 0xFF;
                                }
                            }
                            else if(!v29) {
                                if(v27 == 42) {
                                    *(char*)((char*)ptr5 - 398) = *(char*)((char*)ptr5 - 398) + 1;
                                }
                                else if(v27 != 70) {
                                    if(v27 == 76) {
                                        *(char*)((char*)ptr5 - 397) = *(char*)((char*)ptr5 - 397) + 1;
                                    }
                                    else if(v27 != 73) {
                                        goto loc_401FBC;
                                    }
                                    v3 = (unsigned int)*(char*)(v6 + 1) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
                                    if((unsigned char)v3 == 54) {
                                        v9 = v6 + 2;
                                        if(*(char*)v9 == 52) {
                                            v6 = v9;
                                            *(ptr5 - 114) = *(ptr5 - 114) + 1;
                                            *(ptr5 - 107) = 0;
                                            *(ptr5 - 106) = 0;
                                        }
                                    }
                                    if((unsigned char)v3 == 51) {
                                        v9 = v6 + 2;
                                        if(*(char*)v9 == 50) {
                                            v6 = v9;
                                        }
                                    }
                                    if((unsigned char)v3 != 100 && (unsigned char)v3 != 105 && (unsigned char)v3 != 111 && (unsigned char)v3 != 120 && (unsigned char)v3 != 88) {
                                        goto loc_401FBC;
                                    }
                                }
                            }
                        }
                    }
                    while(!*(char*)((char*)ptr5 - 381));
                    *(unsigned int**)(ptr5 - 99) = ptr8;
                    *(ptr5 + 3) = v6;
                    if(!*(char*)((char*)ptr5 - 398)) {
                        int v30 = *(ptr5 + 4);
                        *(ptr5 - 119) = v30;
                        v9 = v30 + 4;
                        *(ptr5 + 4) = v9;
                        ptr7 = *(unsigned int*)(v9 - 4);
                        *(unsigned int*)(ptr5 - 108) = ptr7;
                    }
                    else {
                        ptr7 = *(unsigned int*)(ptr5 - 108);
                    }
                    *(char*)((char*)ptr5 - 381) = 0;
                    if(!*(char*)((char*)ptr5 - 389)) {
                        v9 = (unsigned int)*(char*)v6 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
                        if((unsigned char)v9 != 83) {
                            *(char*)((char*)ptr5 - 389) = 0xFF;
                            if((unsigned char)v9 == 67) {
                                goto loc_40203E;
                            }
                        }
                        else {
                        loc_40203E:
                            *(char*)((char*)ptr5 - 389) = 1;
                        }
                    }
                    ptr8 = (unsigned int*)((unsigned int)*(char*)v6 | 0x20);
                    *(unsigned int**)(ptr5 - 112) = ptr8;
                    if(ptr8 == 99 || ptr8 == 123) {
                        *(ptr5 - 97) = *(ptr5 - 97) + 1;
                        v9 = sub_401DA6(v3, *(unsigned int**)(ptr5 + 2));
                        *(ptr5 - 101) = v9;
                    }
                    else if(ptr8 != 110) {
                        goto loc_402060;
                    }
                }
                else {
                loc_401E68:
                    do {
                        *(ptr5 + 3) = *(ptr5 + 3) + 1;
                        v9 = sub_4044E0((int)**(unsigned int*)(ptr5 + 3));
                    }
                    while(v9);
                    goto loc_401DFF;
                loc_402060:
                    do {
                        *(ptr5 - 97) = *(ptr5 - 97) + 1;
                        v2 = sub_401DA6(v3, *(unsigned int**)(ptr5 + 2));
                        v9 = sub_4044E0(v2);
                        v3 = (int)ptr4;
                    }
                    while(v9);
                    *(ptr5 - 101) = v2;
                    v6 = *(ptr5 + 3);
                }
                param0 = *(ptr5 - 109);
                if(param0 && !*(ptr5 - 99)) {
                    goto loc_4023DD;
                }
                else {
                    char v31 = ptr8 == 111;
                    if(!v31 && (int)ptr8 >= 111) {
                        v9 = (int)(ptr8 - 28);
                        if(v9) {
                            int v32 = v9 - 3;
                            if(!v32) {
                                goto loc_40239A;
                            }
                            else {
                                v9 = v32 - 2;
                                if(v9) {
                                    v9 -= 3;
                                    if(!v9) {
                                        goto loc_402106;
                                    }
                                    else if(v9 != 3) {
                                    loc_4023D2:
                                        v9 = (int)*(char*)v6;
                                        if(*(ptr5 - 101) != v9) {
                                        loc_4023DD:
                                            v5 = *(ptr5 - 101) == -1;
                                            goto loc_402BA3;
                                        }
                                        else {
                                            *(char*)((char*)ptr5 - 405) = *(char*)((char*)ptr5 - 405) + 0xFF;
                                            if(!*(char*)((char*)ptr5 - 398)) {
                                                v9 = *(ptr5 - 119);
                                                *(ptr5 + 4) = v9;
                                            }
                                            goto loc_402B38;
                                        }
                                    }
                                    else {
                                        if(!(*(char*)((char*)ptr5 - 389) ? 0: 1) && *(char*)((char*)ptr5 - 389) >= 0) {
                                            *(char*)((char*)ptr5 - 406) = 1;
                                        }
                                        ptr3 = (char*)(*(ptr5 + 3) + 1);
                                        *(unsigned int*)(ptr5 + 3) = ptr3;
                                        *(unsigned int*)(ptr5 - 116) = ptr3;
                                        if(*ptr3 == 94) {
                                            ++ptr3;
                                            *(unsigned int*)(ptr5 - 116) = ptr3;
                                            *(char*)((char*)ptr5 - 0x1a1) = 0xFF;
                                        }
                                        ptr2 = *(char**)(ptr5 - 111);
                                        if(!ptr2) {
                                            *(unsigned int*)(ptr5 - 1) = NULL;
                                            sub_403D30();
                                            *(char**)(ptr5 - 6) = &v11;
                                            ptr2 = &v11;
                                            *(char**)(ptr5 - 111) = &v11;
                                            *(ptr5 - 1) = -1;
                                        }
                                        goto loc_4024A6;
                                    }
                                }
                            }
                        }
                        else {
                            *(char*)((char*)ptr5 - 397) = 1;
                        }
                        goto loc_4027CF;
                    }
                    else if(v31) {
                        goto loc_4027CF;
                    }
                    else if(ptr8 == 99) {
                        if(!param0) {
                            *(ptr5 - 109) = 1;
                            *(ptr5 - 99) = *(ptr5 - 99) + 1;
                            goto loc_40239A;
                        loc_4027CF:
                            v1 = *(ptr5 - 101);
                            if(v1 == 45) {
                                *(char*)((char*)ptr5 - 407) = 1;
                                goto loc_4027E8;
                            }
                            if(v1 != 43) {
                            loc_40281A:
                                if(*(ptr5 - 114)) {
                                    if(*(char*)((char*)ptr5 - 381)) {
                                    loc_402989:
                                        if(*(char*)((char*)ptr5 - 407)) {
                                            unsigned int v33 = *(unsigned int*)(ptr5 - 107);
                                            v9 = 0 - v33;
                                            int v34 = 0 - ((unsigned int)(v33 > 0) + *(ptr5 - 106));
                                            *(ptr5 - 107) = v9;
                                            *(ptr5 - 106) = v34;
                                        loc_402ADB:
                                            if(ptr8 == 70) {
                                                *(ptr5 - 103) = 0;
                                            }
                                            if(!*(ptr5 - 103)) {
                                                goto loc_402BE3;
                                            }
                                            else if(!*(char*)((char*)ptr5 - 398)) {
                                                *(ptr5 - 110) = *(ptr5 - 110) + 1;
                                                ptr7 = *(unsigned int*)(ptr5 - 108);
                                                v9 = *(ptr5 - 104);
                                                goto loc_402B13;
                                            }
                                            else {
                                                goto loc_402B38;
                                            }
                                        }
                                        else {
                                            goto loc_402ADB;
                                        }
                                    }
                                    else {
                                        do {
                                            if(ptr8 != 120 && ptr8 != 112) {
                                                if(gvar_40B4A0 > 1) {
                                                    v9 = sub_404318(v1);
                                                    param0 = (int)(void*)0x4;
                                                }
                                                else {
                                                    v9 = (unsigned int)*(char*)(v1 * 2 + gvar_40B490) & 0x4;
                                                }
                                                if(!v9) {
                                                    goto loc_402908;
                                                }
                                                else if(ptr8 != 111) {
                                                    v9 = _allmul(*(ptr5 - 107), *(ptr5 - 106), 10, 0);
                                                    *(ptr5 - 107) = v9;
                                                    *(ptr5 - 106) = v15;
                                                }
                                                else if(v1 >= 56) {
                                                    goto loc_402908;
                                                }
                                                else {
                                                    int v35 = *(ptr5 - 107);
                                                    param0 = (int)((unsigned long long)((v35 >>> 29) & 7) | ((unsigned long long)*(ptr5 - 106) << 3) | ((unsigned long long)0 << 35));
                                                    v9 = v35 * 8;
                                                    *(ptr5 - 107) = v9;
                                                    *(ptr5 - 106) = param0;
                                                }
                                            }
                                            else {
                                                if(gvar_40B4A0 > 1) {
                                                    v9 = sub_404318(v1);
                                                    param0 = (int)(void*)0x80;
                                                }
                                                else {
                                                    v9 = (unsigned int)*(char*)(v1 * 2 + gvar_40B490) & 0x80;
                                                }
                                                if(v9) {
                                                    int v36 = *(ptr5 - 107);
                                                    int v37 = (unsigned int)((unsigned long long)((v36 >>> 28) & 0xF) | ((unsigned long long)*(ptr5 - 106) << 4) | ((unsigned long long)0 << 36));
                                                    *(ptr5 - 107) = v36 * 16;
                                                    *(ptr5 - 106) = v37;
                                                    v9 = sub_401D74();
                                                    v1 = v9;
                                                }
                                                else {
                                                loc_402908:
                                                    *(char*)((char*)ptr5 - 381) = *(char*)((char*)ptr5 - 381) + 1;
                                                }
                                            }
                                            if(!*(char*)((char*)ptr5 - 381)) {
                                                *(ptr5 - 103) = *(ptr5 - 103) + 1;
                                                v9 = v1 - 48;
                                                int v38 = *(ptr5 - 107);
                                                *(ptr5 - 107) = *(ptr5 - 107) + v9;
                                                *(ptr5 - 106) = (unsigned int)__carry__(v9, v38) + (v9 < 0 ? -1: 0) + *(ptr5 - 106);
                                                if(*(ptr5 - 109)) {
                                                    *(ptr5 - 99) = *(ptr5 - 99) - 1;
                                                    if(*(ptr5 - 99)) {
                                                        goto loc_402947;
                                                    }
                                                    else {
                                                        *(char*)((char*)ptr5 - 381) = 1;
                                                    }
                                                }
                                                else {
                                                loc_402947:
                                                    *(ptr5 - 97) = *(ptr5 - 97) + 1;
                                                    v9 = sub_401DA6(param0, *(unsigned int**)(ptr5 + 2));
                                                    v1 = v9;
                                                }
                                            }
                                            else {
                                                *(ptr5 - 97) = *(ptr5 - 97) - 1;
                                                if(v1 != -1) {
                                                    v9 = sub_404474(v1, *(int**)(ptr5 + 2));
                                                    param0 = (int)ptr4;
                                                }
                                            }
                                        }
                                        while(!*(char*)((char*)ptr5 - 381));
                                        *(ptr5 - 101) = v1;
                                        goto loc_402989;
                                    }
                                }
                                else if(*(char*)((char*)ptr5 - 381)) {
                                loc_402AD0:
                                    if(*(char*)((char*)ptr5 - 407)) {
                                        *(ptr5 - 104) = 0 - *(ptr5 - 104);
                                    }
                                    goto loc_402ADB;
                                }
                                else {
                                    do {
                                        if(ptr8 != 120 && ptr8 != 112) {
                                            if(gvar_40B4A0 > 1) {
                                                v9 = sub_404318(v1);
                                                param0 = (int)(void*)0x4;
                                            }
                                            else {
                                                v9 = (unsigned int)*(char*)(v1 * 2 + gvar_40B490) & 0x4;
                                            }
                                            if(!v9) {
                                                goto loc_402A4F;
                                            }
                                            else if(ptr8 != 111) {
                                                v9 = *(ptr5 - 104) * 5 * 2;
                                                *(ptr5 - 104) = v9;
                                            }
                                            else if(v1 >= 56) {
                                                goto loc_402A4F;
                                            }
                                            else {
                                                *(ptr5 - 104) = *(ptr5 - 104) * 8;
                                            }
                                        }
                                        else {
                                            if(gvar_40B4A0 > 1) {
                                                v9 = sub_404318(v1);
                                                param0 = (int)(void*)0x80;
                                            }
                                            else {
                                                v9 = (unsigned int)*(char*)(v1 * 2 + gvar_40B490) & 0x80;
                                            }
                                            if(v9) {
                                                *(ptr5 - 104) = *(ptr5 - 104) * 16;
                                                v9 = sub_401D74();
                                                v1 = v9;
                                            }
                                            else {
                                            loc_402A4F:
                                                *(char*)((char*)ptr5 - 381) = *(char*)((char*)ptr5 - 381) + 1;
                                            }
                                        }
                                        if(!*(char*)((char*)ptr5 - 381)) {
                                            *(ptr5 - 103) = *(ptr5 - 103) + 1;
                                            v9 = *(ptr5 - 104) + v1 - 48;
                                            *(ptr5 - 104) = v9;
                                            if(*(ptr5 - 109)) {
                                                *(ptr5 - 99) = *(ptr5 - 99) - 1;
                                                if(*(ptr5 - 99)) {
                                                    goto loc_402A8E;
                                                }
                                                else {
                                                    *(char*)((char*)ptr5 - 381) = 1;
                                                }
                                            }
                                            else {
                                            loc_402A8E:
                                                *(ptr5 - 97) = *(ptr5 - 97) + 1;
                                                v9 = sub_401DA6(param0, *(unsigned int**)(ptr5 + 2));
                                                v1 = v9;
                                            }
                                        }
                                        else {
                                            *(ptr5 - 97) = *(ptr5 - 97) - 1;
                                            if(v1 != -1) {
                                                v9 = sub_404474(v1, *(int**)(ptr5 + 2));
                                                param0 = (int)ptr4;
                                            }
                                        }
                                    }
                                    while(!*(char*)((char*)ptr5 - 381));
                                    *(ptr5 - 101) = v1;
                                    goto loc_402AD0;
                                }
                            }
                            else {
                            loc_4027E8:
                                *(ptr5 - 99) = *(ptr5 - 99) - 1;
                                if(!*(ptr5 - 99) && param0) {
                                    *(char*)((char*)ptr5 - 381) = 1;
                                    goto loc_40281A;
                                }
                                else {
                                    *(ptr5 - 97) = *(ptr5 - 97) + 1;
                                    v9 = sub_401DA6(param0, *(unsigned int**)(ptr5 + 2));
                                    v1 = v9;
                                    goto loc_40280D;
                                loc_402106:
                                    v1 = *(ptr5 - 101);
                                    if(v1 == 45) {
                                        *(char*)((char*)ptr5 - 407) = 1;
                                        goto loc_40267D;
                                    }
                                }
                            }
                        }
                        else {
                        loc_40239A:
                            if(!(*(char*)((char*)ptr5 - 389) ? 0: 1) && *(char*)((char*)ptr5 - 389) >= 0) {
                                *(char*)((char*)ptr5 - 406) = 1;
                            }
                            goto loc_40255A;
                        }
                        if(v1 == 43) {
                        loc_40267D:
                            *(ptr5 - 99) = *(ptr5 - 99) - 1;
                            if(!*(ptr5 - 99) && param0) {
                                *(char*)((char*)ptr5 - 381) = 1;
                            }
                            else {
                                *(ptr5 - 97) = *(ptr5 - 97) + 1;
                                v9 = sub_401DA6(param0, *(unsigned int**)(ptr5 + 2));
                                v1 = v9;
                                *(ptr5 - 101) = v1;
                            }
                        }
                        if(v1 == 48) {
                            *(ptr5 - 97) = *(ptr5 - 97) + 1;
                            v9 = sub_401DA6(param0, *(unsigned int**)(ptr5 + 2));
                            v1 = v9;
                            *(ptr5 - 101) = v1;
                            if((unsigned char)v1 != 120 && (unsigned char)v1 != 88) {
                                *(ptr5 - 103) = 1;
                                if(ptr8 != 120) {
                                    if(*(ptr5 - 109)) {
                                        *(ptr5 - 99) = *(ptr5 - 99) - 1;
                                        if(!*(ptr5 - 99)) {
                                            *(char*)((char*)ptr5 - 381) = *(char*)((char*)ptr5 - 381) + 1;
                                        }
                                    }
                                    ptr4 = (void*)0x6F;
                                loc_4026F9:
                                    ptr8 = (unsigned int*)ptr4;
                                    goto loc_40281A;
                                }
                                else {
                                    *(ptr5 - 97) = *(ptr5 - 97) - 1;
                                    if(v1 != -1) {
                                        v9 = sub_404474(v1, *(int**)(ptr5 + 2));
                                        param0 = (int)ptr4;
                                    }
                                    v1 = (int)(void*)0x30;
                                }
                            }
                            else {
                                *(ptr5 - 97) = *(ptr5 - 97) + 1;
                                v9 = sub_401DA6(v12, *(unsigned int**)(ptr5 + 2));
                                v1 = v9;
                                *(ptr5 - 101) = v1;
                                if(*(ptr5 - 109)) {
                                    *(ptr5 - 99) = *(ptr5 - 99) - 2;
                                    if(*(ptr5 - 99) < 1) {
                                        *(char*)((char*)ptr5 - 381) = *(char*)((char*)ptr5 - 381) + 1;
                                    }
                                }
                                ptr4 = (void*)0x78;
                                goto loc_4026F9;
                            }
                        loc_40280D:
                            *(ptr5 - 101) = v1;
                        }
                        goto loc_40281A;
                    }
                    else {
                        char v39 = (int)ptr8 < 100;
                        char v40 = (int)(int*)((int)(int*)((int)(int*)(ptr8 - 25) ^ (int)ptr8) & (int)(int*)((int)ptr8 ^ 0x64)) < 0;
                        if(ptr8 == 100) {
                            goto loc_4027CF;
                        }
                        else if(v39 != v40) {
                            goto loc_4023D2;
                        }
                        else if((int)ptr8 <= 103) {
                            ptr0 = (unsigned char*)(ptr5 - 95);
                            v0 = *(ptr5 - 101);
                            switch(v0) {
                                case 43: {
                                loc_402145:
                                    *(ptr5 - 99) = *(ptr5 - 99) - 1;
                                    *(ptr5 - 97) = *(ptr5 - 97) + 1;
                                    ptr8 = *(unsigned int**)(ptr5 + 2);
                                    v0 = sub_401DA6(param0, ptr8);
                                    *(ptr5 - 101) = v0;
                                    break;
                                }
                                case 45: {
                                    *(char*)(ptr5 - 95) = 45;
                                    ptr0 = (unsigned char*)((unsigned char*)ptr5 - 379);
                                    goto loc_402145;
                                }
                                default: {
                                    ptr8 = *(unsigned int**)(ptr5 + 2);
                                    break;
                                }
                            }
                        }
                        else if(ptr8 == 105) {
                            ptr8 = (unsigned int*)0x64;
                            goto loc_402106;
                        }
                        else if(ptr8 != 110) {
                            goto loc_4023D2;
                        }
                        else {
                            v9 = *(ptr5 - 97);
                            if(!*(char*)((char*)ptr5 - 398)) {
                            loc_402B13:
                                if(*(ptr5 - 114)) {
                                    *(int*)ptr7 = *(ptr5 - 107);
                                    v9 = *(ptr5 - 106);
                                    *(int*)(ptr7 + 2) = v9;
                                }
                                else if(*(char*)((char*)ptr5 - 397)) {
                                    *(int*)ptr7 = v9;
                                }
                                else {
                                    *ptr7 = (unsigned short)v9;
                                }
                            }
                            goto loc_402B38;
                        }
                    }
                }
                if(!*(ptr5 - 109) || *(ptr5 - 99) > 349) {
                    *(ptr5 - 99) = 349;
                    goto loc_40218E;
                }
                else {
                loc_40218E:
                    while(1) {
                        if(gvar_40B4A0 > 1) {
                            v9 = sub_404318(v0);
                            param0 = (int)(void*)0x4;
                        }
                        else {
                            v9 = (unsigned int)*(char*)(v0 * 2 + gvar_40B490) & 0x4;
                        }
                        if(!v9) {
                            goto loc_4021E2;
                        }
                        else {
                            v9 = *(ptr5 - 99);
                            *(ptr5 - 99) = *(ptr5 - 99) - 1;
                            if(!v9) {
                                goto loc_4021E2;
                            }
                            else {
                                *(ptr5 - 103) = *(ptr5 - 103) + 1;
                                *ptr0 = (unsigned char)v0;
                                ++ptr0;
                                *(ptr5 - 97) = *(ptr5 - 97) + 1;
                                v0 = sub_401DA6(param0, ptr8);
                                *(ptr5 - 101) = v0;
                            }
                        }
                    }
                }
            loc_4021E2:
                if((unsigned char)v0 == gvar_40B4A4) {
                    v9 = *(ptr5 - 99);
                    *(ptr5 - 99) = *(ptr5 - 99) - 1;
                    if(v9) {
                        *(ptr5 - 97) = *(ptr5 - 97) + 1;
                        v0 = sub_401DA6(param0, ptr8);
                        *ptr0 = gvar_40B4A4;
                        ++ptr0;
                        while(1) {
                            *(ptr5 - 101) = v0;
                            if(gvar_40B4A0 > 1) {
                                v9 = sub_404318(v0);
                                param0 = (int)(void*)0x4;
                            }
                            else {
                                v9 = (unsigned int)*(char*)(v0 * 2 + gvar_40B490) & 0x4;
                            }
                            if(!v9) {
                                goto loc_402267;
                            }
                            else {
                                v9 = *(ptr5 - 99);
                                *(ptr5 - 99) = *(ptr5 - 99) - 1;
                                if(!v9) {
                                    goto loc_402267;
                                }
                                else {
                                    *(ptr5 - 103) = *(ptr5 - 103) + 1;
                                    *ptr0 = (unsigned char)v0;
                                    ++ptr0;
                                    *(ptr5 - 97) = *(ptr5 - 97) + 1;
                                    v0 = sub_401DA6(param0, ptr8);
                                }
                            }
                        }
                        goto loc_402ADB;
                    }
                }
            loc_402267:
                if(*(ptr5 - 103) && (v0 == 101 || v0 == 69)) {
                    v9 = *(ptr5 - 99);
                    *(ptr5 - 99) = *(ptr5 - 99) - 1;
                    if(v9) {
                        *ptr0 = 101;
                        ++ptr0;
                        *(ptr5 - 97) = *(ptr5 - 97) + 1;
                        int v41 = sub_401DA6(param0, ptr8);
                        v0 = v41;
                        *(ptr5 - 101) = v0;
                        if(v0 == 45) {
                            *ptr0 = (unsigned char)v41;
                            ++ptr0;
                            goto loc_4022B7;
                        }
                        if(v0 == 43) {
                        loc_4022B7:
                            int v42 = *(ptr5 - 99);
                            *(ptr5 - 99) = *(ptr5 - 99) - 1;
                            if(!v42) {
                                *(ptr5 - 99) = 0;
                            }
                            else {
                            loc_4022D1:
                                *(ptr5 - 97) = *(ptr5 - 97) + 1;
                                v0 = sub_401DA6(v14, ptr8);
                                *(ptr5 - 101) = v0;
                            }
                        }
                        if(gvar_40B4A0 > 1) {
                            v9 = sub_404318(v0);
                            v14 = (int)(void*)0x4;
                        }
                        else {
                            v9 = (unsigned int)*(char*)(v0 * 2 + gvar_40B490) & 0x4;
                        }
                        if(v9) {
                            v9 = *(ptr5 - 99);
                            *(ptr5 - 99) = *(ptr5 - 99) - 1;
                            if(v9) {
                                *(ptr5 - 103) = *(ptr5 - 103) + 1;
                                *ptr0 = (unsigned char)v0;
                                ++ptr0;
                                goto loc_4022D1;
                            }
                        }
                    }
                }
                *(ptr5 - 97) = *(ptr5 - 97) - 1;
                if(v0 != -1) {
                    v9 = sub_404474(v0, (int*)ptr8);
                }
                if(!*(ptr5 - 103)) {
                    goto loc_402BE3;
                }
                else {
                    if(!*(char*)((char*)ptr5 - 398)) {
                        *(ptr5 - 110) = *(ptr5 - 110) + 1;
                        *ptr0 = 0;
                        ptr4 = (void*)(ptr5 - 95);
                        int v43 = *(ptr5 - 108);
                        int v44 = (int)*(char*)((char*)ptr5 - 397) - 1;
                        v9 = gvar_40B350{sub_4051BD}();
                    }
                    goto loc_402B38;
                }
            }
        }
    }
}

int sub_402C23(char* param0) {
    unsigned int v0;
    char* ptr0 = param0;
    int result = sub_404764((int)*ptr0);
    unsigned int v1 = v0;
    if(result != 101) {
        do {
            ++ptr0;
            int v2 = (int)*ptr0;
            if(gvar_40B4A0 > 1) {
                v0 = 4;
                result = sub_404318(v2);
                v1 = 4;
            }
            else {
                v1 = gvar_40B490;
                result = (unsigned int)*(char*)(v2 * 2 + v1) & 0x4;
            }
        }
        while(result);
    }
    result = (unsigned int)*ptr0 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
    v1 = (unsigned int)gvar_40B4A4 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
    *ptr0 = (unsigned char)v1;
    char* ptr1 = ptr0 + 1;
    do {
        v1 = (unsigned int)*ptr1 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
        *ptr1 = (unsigned char)result;
        result = (unsigned int)(unsigned char)v1 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        v1 = (unsigned int)*ptr1 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
        ++ptr1;
    }
    while((unsigned char)v1);
    return result;
}

char* sub_402C7B(char* param0) {
    int v0;
    unsigned char v1;
    char* ptr0 = param0;
    int v2 = (unsigned int)v1 | ((unsigned int)v0 << 8);
    v1 = gvar_40B4A4;
    char i;
    for(i = *ptr0; i && i != v1; i = *ptr0) {
        ++ptr0;
    }
    char* result = ptr0 + 1;
    if(*ptr0) {
        for(i = *result; i && i != 101 && i != 69; i = *result) {
            ++result;
        }
        char* ptr1 = result;
        do {
            --result;
        }
        while(*result == 48);
        if(*result == v1) {
            --result;
        }
        do {
            i = *ptr1;
            ++result;
            ++ptr1;
            *result = i;
        }
        while(i);
    }
    return result;
}

int sub_402CC6(double* param0) {
    int v0;
    0L = fcomp(0L);
    short v1 = fnstsw((unsigned short)param0);
    if(!((unsigned char)(v0 >>> 8) & 0x1)) {
        return 1;
    }
    return 0;
}

int* sub_402CE0(int param0, int* param1, char* param2) {
    int* result;
    int v0;
    int v1 = v0;
    int v2 = v0;
    if(param0) {
        sub_404B5D(&v2, param2);
        result = param1;
        *result = v2;
        *(result + 1) = v1;
    }
    else {
        sub_404B9A(&param0, param2);
        result = param1;
        *result = 0;
    }
    return result;
}

int* sub_402D1E() {
    int* result;
    int* ptr0;
    int v0;
    if(v0) {
        size_t v1 = strlen((char*)ptr0);
        result = (int*)(v1 + 1);
        unk_lib_sub((int*)((int)ptr0 + v0), ptr0, result);
    }
    return result;
}

unsigned char* sub_402D3B(int* param0, unsigned char* param1, int param2, int param3) {
    int v0;
    int v1;
    int v2;
    char v3 = gvar_40BA44 ? 0: 1;
    int v4 = v2;
    if(!v3) {
        v1 = param2;
        v0 = gvar_40BA40;
        sub_402D1E();
    }
    else {
        void* ptr0 = *(void**)(param0 + 1);
        int v5 = *param0;
        int v6 = sub_405149();
        v1 = param2;
        v0 = v6;
        sub_405018((int*)((*(int*)v0 == 45 ? 1: 0) + (v1 <= 0 ? 0: 1) + (int)param1), (int*)(v1 + 1), v0);
    }
    unsigned char* ptr1 = param1;
    if(*(int*)v0 == 45) {
        *ptr1 = 45;
        ++ptr1;
    }
    if(v1 > 0) {
        *ptr1 = *(ptr1 + 1);
        ++ptr1;
        *ptr1 = gvar_40B4A4;
    }
    char* ptr2 = strcpy((char*)((int)(int*)((gvar_40BA44 == 0 ? 1: 0) + (int)ptr1) + v1), "e+000");
    if(param3) {
        ptr2[0] = 'E';
    }
    if(**(unsigned int*)(v0 + 12) != 48) {
        int v7 = *(int*)(v0 + 4) - 1;
        if(v7 < 0) {
            v7 = 0 - v7;
            ptr2[1] = '-';
        }
        if(v7 >= 100) {
            ptr2[2] += (unsigned char)v7 / 100;
            v7 %= 100;
        }
        if(v7 >= 10) {
            ptr2[3] += (unsigned char)v7 / 10;
            v7 %= 10;
        }
        ptr2[4] += (unsigned char)v7;
    }
    return param1;
}

char* sub_402E2C(int* param0, char* param1, int* param2) {
    unsigned char* ptr0;
    int v0;
    int v1;
    char v2 = gvar_40BA44 ? 0: 1;
    int v3 = v1;
    char* result = param1;
    if(!v2) {
        unsigned int v4 = gvar_40BA48;
        v0 = gvar_40BA40;
        if(v4 == param2) {
            char* ptr1 = (char*)((*(int*)v0 == 45 ? 1: 0) + v4 + (int)result);
            *ptr1 = 48;
            *(ptr1 + 1) = 0;
        }
    }
    else {
        void* ptr2 = *(void**)(param0 + 1);
        int v5 = *param0;
        v0 = sub_405149();
        sub_405018((int*)((*(int*)v0 == 45 ? 1: 0) + (int)result), (int*)(*(int*)(v0 + 4) + (int)param2), v0);
    }
    char* ptr3 = result;
    if(*(int*)v0 == 45) {
        *result = 45;
        ptr3 = result + 1;
    }
    int v6 = *(int*)(v0 + 4);
    if(v6 <= 0) {
        sub_402D1E();
        *ptr3 = 48;
        ptr0 = (unsigned char*)(ptr3 + 1);
    }
    else {
        ptr0 = (unsigned char*)(v6 + (int)ptr3);
    }
    if((int)param2 > 0) {
        sub_402D1E();
        *ptr0 = gvar_40B4A4;
        int v7 = *(int*)(v0 + 4);
        if(v7 < 0) {
            if(gvar_40BA44 || (int)(int*)(0 - v7) <= (int)param2) {
                param2 = (int*)(0 - v7);
            }
            sub_402D1E();
            sub_4045E0((char*)(ptr0 + 1), '0', param2);
        }
    }
    return result;
}

char* sub_402F09(int* param0, unsigned char* param1, int param2, int* param3) {
    char* result;
    int* ptr0 = param0;
    int* ptr1 = (int*)ptr0[1];
    char* ptr2 = (char*)ptr0[0];
    int v0 = sub_405149();
    int v1 = param2;
    gvar_40BA48 = (unsigned int)(*(int*)(v0 + 4) - 1);
    char v2 = *(int*)v0 == 45;
    gvar_40BA40 = v0;
    int* ptr3 = (int*)((v2 ? 1: 0) + (int)param1);
    sub_405018(ptr3, (int*)v1, v0);
    int v3 = *(int*)(gvar_40BA40 + 4) - 1;
    char v4 = (int)gvar_40BA48 < v3;
    char v5 = (((gvar_40BA48 - v3) ^ gvar_40BA48) & (gvar_40BA48 ^ v3)) < 0;
    gvar_40BA48 = v3;
    unsigned char v6 = v4 != v5 ? 1: 0;
    gvar_40BA4C = v4 != v5 ? 1: 0;
    if(v3 >= -4 && v3 < v1) {
        if(v6) {
            do {
                v3 = (unsigned int)*(char*)&ptr3[0] | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
                ptr3 = (int*)((char*)ptr3 + 1);
            }
            while((unsigned char)v3);
            *((char*)&ptr3[0] - 2) = (unsigned char)v3;
        }
        gvar_40BA44 = 1;
        result = sub_402E2C(ptr0, (char*)param1, (int*)v1);
    }
    else {
        gvar_40BA44 = 1;
        result = (char*)sub_402D3B(ptr0, param1, v1, (int)param3);
    }
    gvar_40BA44 = 0;
    return result;
}

char* sub_402FB3(int* param0, char* param1, int param2, int* param3, int* param4) {
    char* result;
    if((param2 == 101 || param2 == 69)) {
        result = (char*)sub_402D3B(param0, (unsigned char*)param1, (int)param3, (int)param4);
    }
    else if(param2 == 102) {
        result = sub_402E2C(param0, param1, param3);
    }
    else {
        result = sub_402F09(param0, (unsigned char*)param1, (int)param3, param4);
    }
    return result;
}

int sub_403004() {
    return sub_405318(0x10000, 0x30000);
}

int sub_403016() {
    short v0;
    int v1;
    double v2 = fsubr(0x4150017ec0000000L);
    0x3ff0000000000000L = fcomp(0x3ff0000000000000L);
    v0 = fnstsw(v0);
    if(!((unsigned char)(v1 >>> 8) & 0x41)) {
        return 1;
    }
    return 0;
}

int sub_403056() {
    HMODULE hModule = GetModuleHandleA("KERNEL32");
    if(hModule) {
        FARPROC v0 = GetProcAddress(hModule, "IsProcessorFeaturePresent");
        if(v0) {
            return v0(0);
        }
    }
    return sub_403016();
}

int sub_40307F(UINT uExitCode) {
    HMODULE hModule = GetModuleHandleA("mscoree.dll");
    if(hModule) {
        FARPROC v0 = GetProcAddress(hModule, "CorExitProcess");
        if(v0) {
            v0(uExitCode);
        }
    }
    /*NO_RETURN*/ ExitProcess(uExitCode);
}

int sub_4030AF(int param0) {
    int v0 = gvar_40B0AC;
    if(v0) {
        v0{sub_401164}(param0);
    }
    int result = 0;
    int* ptr0 = (int*)&gvar_40B00C;
    while(!result) {
        int v1 = *ptr0;
        if(v1) {
            result = v1();
        }
        ++ptr0;
        if((unsigned int)ptr0 >= 4239388) {
            if(!result) {
                sub_4053B0(&sub_403B21);
                int* ptr1 = (int*)&gvar_40B000;
                do {
                    int v2 = *ptr1;
                    if(v2) {
                        v2();
                    }
                    ++ptr1;
                }
                while((unsigned int)ptr1 < 0x40b008);
                result = 0;
            }
            return result;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403119(UINT param0, int param1, int param2) {
    int result;
    UINT uExitCode;
    if(gvar_40BA9C == 1) {
        uExitCode = param0;
        HANDLE hProcess = GetCurrentProcess();
        TerminateProcess(hProcess, uExitCode);
    }
    gvar_40BA98 = 1;
    gvar_40BA94 = (unsigned char)param2;
    if(!param1) {
        unsigned int v0 = gvar_40BFE8;
        if(v0) {
            int* ptr0 = (int*)(gvar_40BFE4 - 4);
            char v1 = (unsigned int)ptr0 < v0;
            for(gvar_40BFE4 = ptr0; !v1; gvar_40BFE4 = ptr0) {
                int v2 = *ptr0;
                if(v2) {
                    uExitCode = &loc_40316B;
                    v2();
                }
                ptr0 = (int*)(gvar_40BFE4 - 4);
                v1 = gvar_40BFE8 > (unsigned int)ptr0;
            }
        }
        int* ptr1 = (int*)&gvar_40B020;
        do {
            int v3 = *ptr1;
            if(v3) {
                uExitCode = &loc_403198;
                v3();
            }
            ++ptr1;
        }
        while((unsigned int)ptr1 < 4239400);
    }
    int* ptr2 = (int*)&gvar_40B02C;
    do {
        result = *ptr2;
        if(result) {
            uExitCode = &loc_4031B7;
            result = result();
        }
        ++ptr2;
    }
    while((unsigned int)ptr2 < 0x40b030);
    if(!param2) {
        gvar_40BA9C = 1;
        result = /*NO_RETURN*/ sub_40307F();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4031DA(int param0) {
    return sub_403119(param0, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4031EB(int param0) {
    return sub_403119(param0, 1, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4031FC() {
    return sub_403119(0, 0, 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40320B() {
    return sub_403119(0, 1, 1);
}

int sub_40321A(int param0) {
    LPSTR lpFilename;
    char v0;
    int v1;
    int v2;
    int v3;
    int v4 = gvar_40B498;
    int v5 = v3;
    int v6 = v4;
    unsigned int v7 = 0;
    while(*(unsigned int*)(v7 * 8 + (int)&gvar_40B360) != param0) {
        ++v7;
        if(v7 >= 19) {
            break;
        }
    }
    if(*(unsigned int*)(v7 * 8 + (int)&gvar_40B360) == param0) {
        unsigned int v8 = gvar_40BA30;
        if((v8 == 1 || (v8 == 0 && gvar_40B0BC == 1))) {
            DWORD v9 = 0;
            lpFilename = &param0;
            HMODULE v10 = (HMODULE)strlen(*(char**)(v7 * 8 + (int)&ptr_aR6002____floati));
            LPCVOID lpBuffer = *(char**)(v7 * 8 + (int)&ptr_aR6002____floati);
            HANDLE hFile = GetStdHandle(0xfffffff4);
            WriteFile(hFile, lpBuffer, (DWORD)v10, (LPDWORD)lpFilename, (LPOVERLAPPED)v9);
        }
        else if(param0 != 252) {
            lpFilename = (LPSTR)&v0;
            char v11 = 0;
            DWORD v12 = GetModuleFileNameA(NULL, lpFilename, 260);
            if(!v12) {
                strcpy(&v0, "<program name unknown>");
            }
            size_t v13 = strlen(&v0);
            if((unsigned int)(v13 + 1) > 60) {
                size_t v14 = strlen(&v0);
                strncpy((char*)(v14 + (int)&v1) + 1, (char*)&gvar_4095C8, 3);
            }
            strlen(&v0);
            strlen(*(char**)(v7 * 8 + (int)&ptr_aR6002____floati));
            sub_403D30();
            strcpy(&v2, "Runtime Error!\n\nProgram: ");
            strcat(&v2, &v0);
            strcat(&v2, (char*)&gvar_4095A8);
            strcat(&v2, *(char**)(v7 * 8 + (int)&ptr_aR6002____floati));
            sub_4053EA((int)&v2, "Microsoft Visual C++ Runtime Library", 0x12010);
        }
    }
    return sub_4041A2(v6);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_403391() {
    unsigned int result = gvar_40BA30;
    if(result == 1 || (!result && gvar_40B0BC == 1)) {
        sub_40321A(252);
        unsigned int v0 = gvar_40BAA0;
        if(v0) {
            v0();
        }
        result = (unsigned int)sub_40321A(0xFF);
    }
    return result;
}

LONG sub_4033CA(unsigned int param0, _EXCEPTION_POINTERS* ExceptionInfo) {
    LONG result;
    int v0;
    unsigned int v1 = gvar_40B478;
    int v2 = v0;
    int* ptr0 = (int*)&gvar_40B3F8;
    while(*ptr0 != param0) {
        ptr0 += 3;
        if((unsigned int)(v1 * 12 + &gvar_40B3F8) <= (unsigned int)ptr0) {
            break;
        }
    }
    if((unsigned int)(v1 * 12 + &gvar_40B3F8) <= (unsigned int)ptr0 || *ptr0 != param0) {
        ptr0 = NULL;
    }
    if(ptr0) {
        int v3 = *(ptr0 + 2);
        if(!v3) {
            return UnhandledExceptionFilter(ExceptionInfo);
        }
        else if(v3 == 5) {
            *(ptr0 + 2) = 0;
            result = 1;
        }
        else if(v3 != 1) {
            param0 = gvar_40BAA4;
            gvar_40BAA4 = ExceptionInfo;
            int v4 = *(ptr0 + 1);
            if(v4 == 8) {
                int v5 = gvar_40B470;
                int v6 = (int)(gvar_40B474 + v5);
                if(v5 < v6) {
                    int* ptr1 = (int*)(v5 * 12 + &gvar_40B400);
                    int counter = v6 - v5;
                    do {
                        *ptr1 = 0;
                        ptr1 += 3;
                        --counter;
                    }
                    while(counter);
                loc_40347C:
                    unsigned int v7 = gvar_40B47C;
                    switch(*ptr0) {
                        case -1073741682: {
                            gvar_40B47C = 131;
                            v3(8, (int)gvar_40B47C);
                            gvar_40B47C = v7;
                            gvar_40BAA4 = param0;
                            return -1;
                        }
                        case -1073741683: {
                            gvar_40B47C = 130;
                            break;
                        }
                        case -1073741677: {
                            gvar_40B47C = 133;
                            break;
                        }
                        case -1073741678: {
                            gvar_40B47C = 138;
                            break;
                        }
                        case -1073741679: {
                            gvar_40B47C = 132;
                            break;
                        }
                        case -1073741680: {
                            gvar_40B47C = 129;
                            break;
                        }
                        case -1073741681: {
                            gvar_40B47C = 134;
                        }
                    }
                    v3(8, (int)gvar_40B47C);
                    gvar_40B47C = v7;
                    gvar_40BAA4 = param0;
                    return -1;
                }
                goto loc_40347C;
            }
            else {
                *(ptr0 + 2) = 0;
                v3(v4);
                gvar_40BAA4 = param0;
                return -1;
            }
        }
        else {
            return -1;
        }
    }
    else {
        result = UnhandledExceptionFilter(ExceptionInfo);
    }
    return result;
}

int sub_40353B() {
    int result;
    int i;
    if(gvar_40BFEC == 0) {
        i = sub_4059DE();
    }
    char* _Str = gvar_40BA28;
    int v0 = 0;
    if(_Str == 0) {
        result = -1;
    }
    else {
        for(i = (unsigned int)_Str[0] | ((unsigned int)((i >>> 8) & 0xffffff) << 8); (unsigned char)i != 0; i = (unsigned int)_Str[0] | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
            if((unsigned char)i != 61) {
                ++v0;
            }
            i = (int)strlen(_Str);
            _Str = (char*)(i + (int)_Str) + 1;
        }
        int v1 = sub_403DDF(v0 * 4 + 4);
        gvar_40BA7C = v1;
        if(v1 != 0) {
            char* _Str1 = gvar_40BA28;
            while(_Str1[0] != 0) {
                size_t v2 = strlen(_Str1);
                if(_Str1[0] != 61) {
                    int v3 = sub_403DDF((int)(v2 + 1));
                    *(int*)v1 = v3;
                    if(v3 != 0) {
                        strcpy((char*)v3, _Str1);
                        v1 += 4;
                        goto loc_4035C1;
                    }
                    else {
                        sub_40403C(gvar_40BA7C);
                        gvar_40BA7C = 0;
                        return -1;
                    }
                }
                else {
                loc_4035C1:
                    _Str1 = (char*)(v2 + (int)_Str1) + 1;
                }
            }
            sub_40403C(gvar_40BA28);
            gvar_40BA28 = 0;
            *(int*)v1 = 0;
            gvar_40BFE0 = 1;
            result = 0;
        }
        else {
            result = -1;
        }
    }
    return result;
}

unsigned int* sub_403602(unsigned int* param0, int* param1) {
    unsigned int* i;
    int* ptr0;
    unsigned int* ptr1;
    unsigned int* ptr2 = i;
    int* ptr3 = param1;
    unsigned int* j = NULL;
    char v0 = param0 == 0;
    *ptr0 = 0;
    unsigned int* ptr4 = i;
    *ptr3 = 1;
    if(!v0) {
        i = param0;
        ++param0;
        *i = ptr4;
    }
    do {
        if(*(char*)ptr1 == 34) {
            i = j ? NULL: (unsigned int*)0x1;
            ptr1 = (unsigned int*)((char*)ptr1 + 1);
            j = i;
            i = (unsigned int)34 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
        }
        else {
            *ptr0 = *ptr0 + 1;
            if(ptr4) {
                i = (unsigned int)*(char*)ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                *(char*)ptr4 = (unsigned char)i;
                ptr4 = (unsigned int*)((char*)ptr4 + 1);
            }
            i = (unsigned int)*(char*)ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
            ptr1 = (unsigned int*)((char*)ptr1 + 1);
            if((*(char*)((char*)((int)(int*)((int)i & 0xFF) + (int)&gvar_40BCA0) + 1) & 0x4)) {
                *ptr0 = *ptr0 + 1;
                if(ptr4) {
                    *(char*)ptr4 = *(char*)ptr1;
                    ptr4 = (unsigned int*)((char*)ptr4 + 1);
                }
                ptr1 = (unsigned int*)((char*)ptr1 + 1);
            }
            ptr3 = param1;
            if(!(unsigned char)i) {
                ptr1 = (unsigned int*)((char*)ptr1 - 1);
                goto loc_40367B;
            }
        }
    }
    while(j || ((unsigned char)i != 32 && (unsigned char)i != 9));
    if(ptr4) {
        *(char*)((char*)ptr4 - 1) = 0;
    }
loc_40367B:
    ptr2 = NULL;
    while(*(char*)ptr1) {
        for(i = (unsigned int)*(char*)ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8); (unsigned char)i == 32 || (unsigned char)i == 9; i = (unsigned int)*(char*)ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8)) {
            ptr1 = (unsigned int*)((char*)ptr1 + 1);
        }
        if(!*(char*)ptr1) {
            break;
        }
        else {
            if(param0) {
                i = param0;
                ++param0;
                *i = ptr4;
            }
            *ptr3 = *ptr3 + 1;
            while(1) {
                ptr3 = (int*)0x1;
                for(j = NULL; *(char*)ptr1 == 92; j = (unsigned int*)((char*)j + 1)) {
                    ptr1 = (unsigned int*)((char*)ptr1 + 1);
                }
                if(*(char*)ptr1 == 34) {
                    if(!((unsigned char)j & 0x1)) {
                        if(ptr2) {
                            i = (unsigned int*)((char*)ptr1 + 1);
                            if(*(char*)i != 34) {
                                goto loc_4036DE;
                            }
                            else {
                                ptr1 = i;
                            }
                        }
                        else {
                        loc_4036DE:
                            ptr3 = NULL;
                        }
                        i = ptr2 == 0 ? (unsigned int*)0x1: NULL;
                        ptr2 = i;
                    }
                    j = (unsigned int*)((int)j >>> 1);
                }
                if(j) {
                    do {
                        if(ptr4) {
                            *(char*)ptr4 = 92;
                            ptr4 = (unsigned int*)((char*)ptr4 + 1);
                        }
                        *ptr0 = *ptr0 + 1;
                        j = (unsigned int*)((char*)j - 1);
                    }
                    while(j);
                }
                i = (unsigned int)*(char*)ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                if(!(unsigned char)i || (!ptr2 && ((unsigned char)i == 32 || (unsigned char)i == 9))) {
                    break;
                }
                else {
                    if(ptr3) {
                        if(ptr4) {
                            if((*(char*)((char*)((int)(int*)((int)i & 0xFF) + (int)&gvar_40BCA0) + 1) & 0x4)) {
                                *(char*)ptr4 = (unsigned char)i;
                                ptr4 = (unsigned int*)((char*)ptr4 + 1);
                                ptr1 = (unsigned int*)((char*)ptr1 + 1);
                                *ptr0 = *ptr0 + 1;
                            }
                            i = (unsigned int)*(char*)ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                            *(char*)ptr4 = (unsigned char)i;
                            ptr4 = (unsigned int*)((char*)ptr4 + 1);
                        }
                        else {
                            i = (unsigned int*)((int)i & 0xFF);
                            if((*(char*)((char*)i + 4242593) & 0x4)) {
                                ptr1 = (unsigned int*)((char*)ptr1 + 1);
                                *ptr0 = *ptr0 + 1;
                            }
                        }
                        *ptr0 = *ptr0 + 1;
                    }
                    ptr1 = (unsigned int*)((char*)ptr1 + 1);
                }
            }
            if(ptr4) {
                *(char*)ptr4 = 0;
                ptr4 = (unsigned int*)((char*)ptr4 + 1);
            }
            *ptr0 = *ptr0 + 1;
            ptr3 = param1;
        }
    }
    unsigned int* result = param0;
    if(result) {
        *result = 0;
    }
    *ptr3 = *ptr3 + 1;
    return result;
}

int sub_40376E(int param0) {
    int result;
    int v0 = param0;
    int v1 = param0;
    if(gvar_40BFEC == 0) {
        sub_4059DE();
    }
    gvar_40BBAC = 0;
    GetModuleFileNameA(NULL, (LPSTR)0x40BAA8, 260);
    gvar_40BA8C = 0x40baa8;
    sub_403602(NULL, &v0);
    int v2 = sub_403DDF(v0 * 4 + v1);
    if(!v2) {
        result = -1;
    }
    else {
        sub_403602((unsigned int*)v2, &v0);
        gvar_40BA70 = (unsigned int)(v0 - 1);
        gvar_40BA74 = v2;
        result = 0;
    }
    return result;
}

int sub_403810(int param0) {
    int result1;
    int v0;
    int cchWideChar = param0;
    int v1 = param0;
    LPCH v2 = gvar_40BBB0;
    int v3 = v0;
    int v4 = 0;
    LPWCH lpWideCharStr = NULL;
    if(v2 == 0) {
        lpWideCharStr = GetEnvironmentStringsW();
        if(lpWideCharStr != 0) {
            gvar_40BBB0 = 1;
            goto loc_403860;
        }
        else {
            DWORD v5 = GetLastError();
            if(v5 == 120) {
                v2 = (LPCH)0x2;
                gvar_40BBB0 = (LPCH)0x2;
            }
            else {
                v2 = gvar_40BBB0;
            }
            goto loc_40385C;
        }
    }
    else {
    loc_40385C:
        if(v2 == 1) {
        loc_403860:
            if(lpWideCharStr == 0) {
                lpWideCharStr = GetEnvironmentStringsW();
                if(lpWideCharStr == 0) {
                    return 0;
                }
            }
            LPWCH v6 = lpWideCharStr;
            if(lpWideCharStr[0] != 0) {
            loc_403871:
                do {
                    ++v6;
                    if(v6[0] != 0) {
                        goto loc_403871;
                    }
                    else {
                        ++v6;
                    }
                }
                while(v6[0] != 0);
            }
            cchWideChar = (int)((char*)((int)(int*)((int)v6 - (int)lpWideCharStr) >> 1) + 1);
            int cbMultiByte = WideCharToMultiByte(0, 0, lpWideCharStr, (int)((char*)((int)(int*)((int)v6 - (int)lpWideCharStr) >> 1) + 1), NULL, 0, NULL, NULL);
            if(cbMultiByte != 0) {
                int v7 = sub_403DDF(cbMultiByte);
                v1 = v7;
                if(v7 != 0) {
                    int v8 = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, (LPSTR)v7, cbMultiByte, NULL, NULL);
                    if(!v8) {
                        sub_40403C(v1);
                        v1 = 0;
                    }
                    v4 = v1;
                }
            }
            FreeEnvironmentStringsW(lpWideCharStr);
            result1 = v4;
        }
        else {
            if((v2 == (void*)0x2 || v2 == 0)) {
                v2 = GetEnvironmentStrings();
                int* ptr0 = (int*)v2;
                if(ptr0 != 0) {
                    if(*(char*)&ptr0[0] != 0) {
                    loc_4038F7:
                        do {
                            ++v2;
                            if(v2[0] != 0) {
                                goto loc_4038F7;
                            }
                            else {
                                ++v2;
                            }
                        }
                        while(v2[0] != 0);
                    }
                    int v9 = (int)((char*)((int)v2 - (int)ptr0) + 1);
                    int result = sub_403DDF(v9);
                    if(result == 0) {
                        result = 0;
                    }
                    else {
                        unk_lib_sub2((int*)result, ptr0, (int*)v9);
                    }
                    FreeEnvironmentStringsA((LPCH)ptr0);
                    return result;
                }
            }
            result1 = 0;
        }
    }
    return result1;
}

int sub_403932(unsigned int j) {
    int v0;
    int result;
    char v1;
    int* ptr0;
    unsigned int v2;
    short v3;
    unsigned int* ptr1;
    int v4 = sub_403DDF(0x100);
    if(!v4) {
        result = -1;
    }
    else {
        gvar_40BEE0 = v4;
        gvar_40BEC8 = 32;
        for(unsigned int i = (unsigned int)(v4 + 0x100); i > (unsigned int)v4; i = gvar_40BEE0 + 0x100) {
            *(int*)v4 = -1;
            *(char*)(v4 + 4) = 0;
            *(char*)(v4 + 5) = 10;
            v4 += 8;
        }
        unsigned int* ptr2 = ptr1;
        GetStartupInfoA(&v1);
        if(v3) {
            int* ptr3 = ptr0;
            if(ptr3) {
                int v5 = *ptr3;
                char* ptr4 = (char*)(ptr3 + 1);
                ptr1 = (unsigned int*)((int)ptr4 + v5);
                if(v5 >= 0x800) {
                    v5 = 0x800;
                }
                if(gvar_40BEC8 < v5) {
                    int* ptr5 = (int*)&gvar_40BEE4;
                loc_4039CD:
                    do {
                        v0 = sub_403DDF(0x100);
                        j = v2;
                        if(v0) {
                            gvar_40BEC8 += 32;
                            *ptr5 = v0;
                            for(j = (unsigned int)(v0 + 0x100); j > (unsigned int)v0; j = (unsigned int)(*ptr5 + 0x100)) {
                                *(int*)v0 = -1;
                                *(char*)(v0 + 4) = 0;
                                *(char*)(v0 + 5) = 10;
                                v0 += 8;
                            }
                            ++ptr5;
                            if(gvar_40BEC8 < v5) {
                                goto loc_4039CD;
                            }
                            else {
                                goto loc_403A15;
                            }
                        }
                    }
                    while(v0);
                    v5 = gvar_40BEC8;
                }
            loc_403A15:
                int v6 = 0;
                if(v5 > 0) {
                    do {
                        HANDLE hFile = *ptr1;
                        if(hFile != -1) {
                            j = (unsigned int)*ptr4 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                            if(((unsigned char)j & 0x1)) {
                                if(!((unsigned char)j & 0x8)) {
                                    DWORD v7 = GetFileType(hFile);
                                    if(v7) {
                                        goto loc_403A4B;
                                    }
                                }
                                else {
                                loc_403A4B:
                                    unsigned int* ptr6 = (unsigned int*)((v6 & 0x1f) * 8 + *(unsigned int*)((v6 >> 5) * 4 + (int)&gvar_40BEE0));
                                    j = *ptr1;
                                    *ptr6 = j;
                                    j = (unsigned int)*ptr4 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                                    *(char*)(ptr6 + 1) = (unsigned char)j;
                                }
                            }
                        }
                        ++v6;
                        ++ptr4;
                        ++ptr1;
                    }
                    while(v5 > v6);
                }
            }
        }
        int v8 = 0;
        do {
            unsigned int* ptr7 = (unsigned int*)(v8 * 8 + gvar_40BEE0);
            if(*ptr7 == -1) {
                *(char*)(ptr7 + 1) = 129;
                HANDLE hFile1 = GetStdHandle(!v8 ? 0xfffffff6: (unsigned int)(v8 - 1) > 0 ? 0xfffffff4: 0xfffffff5);
                if(hFile1 != -1) {
                    DWORD v9 = GetFileType(hFile1);
                    if(!v9) {
                        goto loc_403AAD;
                    }
                    else {
                        int v10 = (unsigned int)(DWORD)(v9 & 0xFF);
                        *ptr7 = hFile1;
                        if(v10 == 2) {
                            goto loc_403AAD;
                        }
                        else if(v10 == 3) {
                            *(char*)(ptr7 + 1) = *(char*)(ptr7 + 1) | 0x8;
                        }
                    }
                }
                else {
                loc_403AAD:
                    *(char*)(ptr7 + 1) = *(char*)(ptr7 + 1) | 0x40;
                }
            }
            else {
                *(char*)(ptr7 + 1) = *(char*)(ptr7 + 1) | 0x80;
            }
            ++v8;
        }
        while(v8 < 3);
        SetHandleCount(gvar_40BEC8);
        result = 0;
    }
    return result;
}

int sub_403ADD() {
    int v0;
    int result = 12;
    int v1 = v0;
    for(int* i = (int*)&gvar_409DFC; (unsigned int)i < &gvar_409DFC; ++i) {
        int v2 = 0;  // __try{ (see __except:403B0Eh)
        result = *i;
        if(result) {
            result = result();
        }
    }
    return result;
}

int sub_403B0A() {
    return 1;
}

int sub_403B0E(int param0, int param1) {
    int result;
    int* ptr0;
    while(1) {
        *(ptr0 - 1) = -1;  // } (starts at 403AF9h)
        *(ptr0 - 7) = *(ptr0 - 7) + 4;
        if(*(unsigned int*)(ptr0 - 7) >= &gvar_409DFC) {
            return result;
        }
        *(ptr0 - 1) = 0;
        result = **(unsigned int*)(ptr0 - 7);
        if(result) {
            result = result();
        }
    }
    return result;
}

int sub_403B21() {
    int v0;
    int result = 12;
    int v1 = v0;
    for(int* i = (int*)&gvar_409E04; (unsigned int)i < &gvar_409E04; ++i) {
        int v2 = 0;  // __try{ (see __except:403B52h)
        result = *i;
        if(result) {
            result = result();
        }
    }
    return result;
}

int sub_403B4E() {
    return 1;
}

int sub_403B52(int param0, int param1) {
    int result;
    int* ptr0;
    while(1) {
        *(ptr0 - 1) = -1;  // } (starts at 403B3Dh)
        *(ptr0 - 7) = *(ptr0 - 7) + 4;
        if(*(unsigned int*)(ptr0 - 7) >= &gvar_409E04) {
            return result;
        }
        *(ptr0 - 1) = 0;
        result = **(unsigned int*)(ptr0 - 7);
        if(result) {
            result = result();
        }
    }
    return result;
}

int sub_403B65() {
    if(gvar_40BA5C == 2 && gvar_40BA68 >= 5) {
        return 1;
    }
    return 3;
}

int sub_403B7F(int param0) {
    HANDLE v0 = HeapCreate(param0 == 0 ? 1: 0, 0x1000, 0);
    gvar_40BEC0 = v0;
    if(v0) {
        int v1 = sub_403B65();
        gvar_40BEC4 = v1;
        if(v1 == 3) {
            v1 = (int)sub_405D3D(1016);
            if(!v1) {
                HeapDestroy(gvar_40BEC0);
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

int sub_403C1C(int param0, int param1) {
    char* ptr0;
    char* ptr1;
    *ptr0 = ((unsigned char)(param1 >>> 8) ^ *ptr1) ^ *ptr0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403C24(int param0, PVOID param1, int param2) {
    void* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    void* ptr1 = &v0;
    int v4 = v2;
    int v5 = v1;
    void* ptr2 = &v0;
    PVOID TargetFrame = param1;
    if(!(*(int*)(param0 + 4) & 0x6)) {
        int v6 = param0;
        int v7 = param2;
        *(unsigned int*)((int)TargetFrame - 4) = &v6;
        int v8 = *(int*)((int)TargetFrame + 12);
        int v9 = *(int*)((int)TargetFrame + 8);
        int v10 = sub_40694E((int)TargetFrame);
        if(v10) {
            while(v8 != -1) {
                int v11 = *(int*)(v8 * 12 + v9 + 4);
                if(v11) {
                    ptr0 = (void*)v8;
                    void* ptr3 = ptr1;
                    int v12 = v11();
                    ptr1 = ptr3;
                    v8 = (int)ptr0;
                    TargetFrame = *(PVOID*)((int)ptr1 + 12);
                    if(v12) {
                        if(v12 < 0) {
                            break;
                        }
                        else {
                            int v13 = *(int*)((int)TargetFrame + 8);
                            _global_unwind2(TargetFrame);
                            ptr1 = (void*)((int)TargetFrame + 16);
                            sub_4068A2((int)TargetFrame, v8);
                            sub_406936(v8 * 3, 1);
                            *(int*)((int)TargetFrame + 12) = *(int*)(v3 * 4 + v13);
                            TargetFrame = NULL;
                            v8 = 0;
                            *(int*)(v3 * 4 + v13 + 8)();
                        }
                    }
                }
                v9 = *(int*)((int)TargetFrame + 8);
                v8 = *(int*)(v8 * 12 + v9);
            }
        }
        else {
            *(int*)(param0 + 4) = *(int*)(param0 + 4) | 0x8;
        }
    }
    else {
        ptr0 = &v0;
        sub_4068A2((int)TargetFrame, -1);
    }
    jump v5;
}

int sub_403D0A(int param0) {
    return sub_4068A2(*(int*)(param0 + 24), *(int*)(param0 + 28));
}

int sub_403D30() {
    int result;
    unsigned int v0;
    char v1;
    if(v0 >= 0x1000) {
        int* ptr0 = &v1;
        do {
            ptr0 -= 0x400;
            v0 -= 0x1000;
        }
        while(v0 >= 0x1000);
    }
    return result;
}

int* sub_403D6D(int param0) {
    int* result;
    int i = param0;
    if(gvar_40BEC4 == 3 && gvar_40BC84 >= (unsigned int)i) {
        result = sub_406564(i);
        if(!result) {
            goto loc_403D90;
        }
    }
    else {
    loc_403D90:
        if(!i) {
            i = 1;
        }
        if(gvar_40BEC4 != 1) {
            i = (i + 0xF) & 0xfffffff0;
        }
        result = (int*)HeapAlloc(gvar_40BEC0, 0, (SIZE_T)i);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403DB3(int param0, int param1) {
    int result;
    int v0;
    if((unsigned int)param0 <= 0xffffffe0) {
        do {
            result = sub_403D6D(param0);
            if(result || param1 == 0) {
                return result;
            }
            v0 = sub_406B77(param0);
        }
        while(v0);
    }
    else {
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403DDF(int param0) {
    return sub_403DB3(param0, (int)gvar_40BC48);
}

int sub_403DF1(unsigned int param0) {
    if(gvar_40BEC8 <= param0) {
        return 0;
    }
    return (int)*(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_40BEE0) + 4) & 0x40;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403E18(int* param0) {
    int* ptr0 = param0;
    short v0 = (unsigned short)*(ptr0 + 3);
    int result = 0;
    if(((unsigned char)v0 & 0x3) == 2 && (v0 & 0x108)) {
        int v1 = *(ptr0 + 2);
        int v2 = *ptr0 - v1;
        if(v2 > 0) {
            int v3 = sub_406B92(*(ptr0 + 4), v1, v2);
            if(v3 == v2) {
                int v4 = *(ptr0 + 3);
                if((unsigned char)v4 < 0) {
                    *(ptr0 + 3) = v4 & 0xfffffffd;
                }
            }
            else {
                *(ptr0 + 3) = *(ptr0 + 3) | 0x20;
                result = -1;
            }
        }
    }
    int v5 = *(ptr0 + 2);
    *(ptr0 + 1) = 0;
    *ptr0 = v5;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403E75(int param0) {
    if(!param0) {
        return sub_403EB0(0);
    }
    int v0 = sub_403E18((int*)param0);
    if(v0) {
        return -1;
    }
    else if((*(char*)(param0 + 13) & 0x40)) {
        unsigned int v1 = (unsigned int)sub_406D82(*(int*)(param0 + 16));
        return v1 > 0 ? -1: 0;
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403EB0(int param0) {
    int v0 = 0;
    int v1 = 0;
    int v2 = 0;
    if(gvar_40D000 > 0) {
        do {
            int v3 = *(int*)(v0 * 4 + gvar_40BFF0);
            if(v3) {
                char v4 = (unsigned char)*(int*)(v3 + 12);
                if((v4 & 0x83)) {
                    if(param0 == 1) {
                        int v5 = sub_403E75(v3);
                        if(v5 != -1) {
                            ++v1;
                        }
                    }
                    else if(!param0 && (v4 & 0x2)) {
                        int v6 = sub_403E75(v3);
                        if(v6 == -1) {
                            v2 = -1;
                        }
                    }
                }
            }
            ++v0;
        }
        while(gvar_40D000 > v0);
    }
    return param0 == 1 ? v1: v2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403F1D() {
    return sub_403EB0(1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403F26(int param0, int* param1) {
    int result;
    int v0;
    int* ptr0 = param1;
    int v1 = ptr0[3];
    unsigned int v2 = (unsigned int)ptr0[4];
    if(((unsigned char)v1 & 0x82) && !((unsigned char)v1 & 0x40)) {
        if(((unsigned char)v1 & 0x1)) {
            ptr0[1] = 0;
            if(!((unsigned char)v1 & 0x10)) {
                ptr0[3] = v1 | 0x20;
                return -1;
            }
            ptr0[0] = ptr0[2];
            ptr0[3] = v1 & 0xfffffffe;
        }
        int v3 = ptr0[3];
        ptr0[1] = 0;
        param1 = NULL;
        int v4 = (v3 & 0xffffffef) | 0x2;
        ptr0[3] = v4;
        if(!((unsigned short)v4 & 0x10c)) {
            if(ptr0 == 4239592 || ptr0 == 4239624) {
                int v5 = sub_403DF1(v2);
                if(!v5) {
                    goto loc_403F95;
                }
            }
            else {
            loc_403F95:
                sub_406E65(ptr0);
            }
        }
        if((*(short*)&ptr0[3] & 0x108)) {
            int v6 = ptr0[2];
            int v7 = ptr0[0];
            ptr0[0] = v6 + 1;
            v0 = v7 - v6;
            ptr0[1] = ptr0[6] - 1;
            if(v0 > 0) {
                param1 = (int*)sub_406B92((int)v2, v6, v0);
            }
            else if((*(char*)((v2 != -1 ? (v2 & 0x1f) * 8 + *(unsigned int*)((v2 >> 5) * 4 + (int)&gvar_40BEE0): &gvar_40B480) + 4) & 0x20)) {
                sub_406DD9((int*)v2, 0, 2);
            }
            *(char*)ptr0[2] = (unsigned char)param0;
        }
        else {
            v0 = 1;
            param1 = (int*)sub_406B92((int)v2, (int)&param0, 1);
        }
        if(v0 != param1) {
            ptr0[3] |= 32;
            return -1;
        }
        result = (unsigned int)(param0 & 0xFF);
    }
    else {
        ptr0[3] = v1 | 0x20;
        result = -1;
    }
    return result;
}

unsigned int sub_40403C(int param0) {
    unsigned int result;
    if(param0) {
        char v0 = gvar_40BEC4 == 3;
        int v1 = param0;
        if(v0) {
            unsigned int v2 = sub_405D85(v1);
            v1 = param0;
            if(v2) {
                return sub_405DB0((unsigned int*)v2, (int*)v1);
            }
        }
        result = (unsigned int)HeapFree(gvar_40BEC0, 0, (LPVOID)v1);
    }
    return result;
}

LPSTR sub_40410B(LPSTR lpMultiByteStr, unsigned short param1) {
    LPSTR result;
    if(lpMultiByteStr == 0) {
        result = NULL;
    }
    else if(gvar_40BC54 != 0) {
        result = (LPSTR)WideCharToMultiByte(gvar_40BC64, 0, &param1, 1, lpMultiByteStr, gvar_40B4A0, NULL, &lpMultiByteStr);
        if(result == 0) {
        loc_404161:
            gvar_40BA50 = 42;
            result = (LPSTR)0xFFFFFFFF;
        }
    }
    else if(param1 > 0xff) {
        goto loc_404161;
    }
    else {
        lpMultiByteStr[0] = (CHAR)param1;
        result = (LPSTR)0x1;
    }
    return result;
}

int sub_40418C() {
    int v0;
    *(int*)(v0 - 4) = -1;
    /*NO_RETURN*/ ExitProcess(3);
}

int sub_40418E() {
    return 1;
}

int sub_404192() {
    int v0;
    *(int*)(v0 - 4) = -1;
    /*NO_RETURN*/ ExitProcess(3);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4041A2(int param0) {
    unsigned int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    int v2;
    while(gvar_40B498 != param0) {
        ptr0 = ptr0 - 1;
        *ptr0 = 8;
        --ptr0;
        *ptr0 = &gvar_409B10;
        ptr0 -= 3;
        int v3 = *(int*)(ptr0 + 4);
        *(ptr0 + 4) = ptr1;
        ptr1 = (int*)(ptr0 + 4);
        ptr0 = (unsigned int*)((int)ptr0 - v3);
        *(int*)(ptr0 - 1) = v0;
        *(int*)(ptr0 - 2) = v1;
        *(int*)(ptr0 - 3) = v2;
        *(ptr1 - 1) = 0;
        ptr0 -= 4;
        *ptr0 = 0;
        --ptr0;
        *ptr0 = 1;
        --ptr0;
        *ptr0 = 4211082;
        /*NO_RETURN*/ sub_406F0F(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2));
    }
    jump *ptr0;
}

int sub_404245(int param0, int param1) {
    int result;
    SIZE_T dwBytes = (SIZE_T)(param0 * param1);
    int i = (int)(SIZE_T)(param0 * param1);
    if(!dwBytes) {
        dwBytes = 1;
    }
    do {
        int* ptr0 = NULL;
        if(dwBytes <= 0xffffffe0) {
            if(gvar_40BEC4 == 3) {
                dwBytes = (SIZE_T)((dwBytes + 0xF) & 0xfffffff0);
                if(gvar_40BC84 >= (unsigned int)i) {
                    ptr0 = sub_406564(i);
                    if(ptr0) {
                        sub_4045E0((char*)ptr0, 0, (int*)i);
                        return (int)ptr0;
                    }
                }
            }
            ptr0 = (int*)HeapAlloc(gvar_40BEC0, 8, dwBytes);
            if(ptr0) {
                return (int)ptr0;
            }
            goto loc_40429F;
        }
        else {
        loc_40429F:
            if(!gvar_40BC48) {
                return (int)ptr0;
            }
            result = sub_406B77((int)dwBytes);
        }
        return result;
    }
    while(result);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404318(int param0) {
    int v0;
    int result;
    int v1;
    int v2 = v1;
    int v3 = param0;
    if((unsigned int)(v3 + 1) <= 0x100) {
        result = (unsigned int)*(short*)(v3 * 2 + gvar_40B490);
    }
    else {
        int v4 = v3 >> 8;
        if((*(char*)((unsigned int)(v4 & 0xFF) * 2 + gvar_40B490 + 1) & 0x80)) {
            (v2 >>> 8) & 0xFF = (unsigned char)v3;
            v2 & 0xFF = (unsigned char)v4;
            (v2 >>> 16) & 0xFF = 0;
            v0 = 2;
        }
        else {
            v2 & 0xFF = (unsigned char)v3;
            (v2 >>> 8) & 0xFF = 0;
            v0 = 1;
        }
        int v5 = sub_4070AD(1, (int)&v2, v0, (int)(int*)((char*)&param0 + 2), (int)gvar_40BC64, (int)gvar_40BC54, 1);
        if(!v5) {
            return 0;
        }
        result = param0 >>> 16;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404396(int* param0) {
    int* ptr0 = param0;
    int v0 = ptr0[3];
    if(((unsigned char)v0 & 0x83) && !((unsigned char)v0 & 0x40)) {
        if(((unsigned char)v0 & 0x2)) {
            ptr0[3] = v0 | 0x20;
        }
        else {
            ptr0[3] = v0 | 0x1;
            if(!((unsigned short)(v0 | 0x1) & 0x10c)) {
                sub_406E65(ptr0);
            }
            else {
                ptr0[0] = ptr0[2];
            }
            int v1 = sub_407267(ptr0[4], ptr0[2], ptr0[6]);
            ptr0[1] = v1;
            if(v1 && v1 != -1) {
                int v2 = ptr0[3];
                if(!((unsigned char)v2 & 0x82)) {
                    int v3 = ptr0[4];
                    if((*(char*)((v3 != -1 ? (v3 & 0x1f) * 8 + *(unsigned int*)((v3 >> 5) * 4 + (int)&gvar_40BEE0): &gvar_40B480) + 4) & 0x82) == 130) {
                        ptr0[3] = v2 | 0x2000;
                    }
                }
                if(ptr0[6] == 0x200) {
                    int v4 = ptr0[3];
                    if(((unsigned char)v4 & 0x8) && !((unsigned char)(v4 >>> 8) & 0x4)) {
                        ptr0[6] = 0x1000;
                    }
                }
                int v5 = ptr0[0];
                ptr0[1] = v1 - 1;
                int result = (unsigned int)*(char*)v5;
                ptr0[0] = v5 + 1;
                return result;
            }
            ptr0[3] |= (((unsigned int)v1 > 0 ? -1: 0) & 0x10) + 16;
            ptr0[1] = 0;
        }
    }
    return -1;
}

int sub_404474(int param0, int* param1) {
    int result;
    int v0 = param0;
    if(v0 != -1) {
        int* ptr0 = param1;
        int v1 = ptr0[3];
        if(!((unsigned char)v1 & 0x1) && ((unsigned char)v1 >= 0 || ((unsigned char)v1 & 0x2))) {
            return -1;
        }
        if(!ptr0[2]) {
            sub_406E65(ptr0);
        }
        v1 = ptr0[0];
        if(ptr0[2] == v1) {
            if(ptr0[1]) {
                return -1;
            }
            ptr0[0] = v1 + 1;
        }
        --ptr0[0];
        int v2 = ptr0[0];
        if(!(*(char*)&ptr0[3] & 0x40)) {
            *(char*)v2 = (unsigned char)v0;
        }
        else if((unsigned char)v0 != *(char*)v2) {
            ptr0[0] = v2 + 1;
            return -1;
        }
        int v3 = ptr0[3];
        ++ptr0[1];
        ptr0[3] = (v3 & 0xffffffef) | 0x1;
        result = (unsigned int)(v0 & 0xFF);
    }
    else {
        result = -1;
    }
    return result;
}

int sub_4044E0(int param0) {
    if(gvar_40B4A0 > 1) {
        return sub_404318(param0);
    }
    return (unsigned int)*(char*)(param0 * 2 + gvar_40B490) & 0x8;
}

int sub_404509(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, unsigned int param2) {
    int result;
    char v0;
    if(lpMultiByteStr != 0 && param2 != 0) {
        int cbMultiByte = (unsigned int)lpMultiByteStr[0] | ((unsigned int)((cbMultiByte >>> 8) & 0xffffff) << 8);
        if((unsigned char)cbMultiByte == 0) {
            if(lpWideCharStr != 0) {
                lpWideCharStr[0] = 0;
            }
        }
        else if(gvar_40BC54 == 0) {
            if(lpWideCharStr != 0) {
                lpWideCharStr[0] = (WCHAR)(unsigned char)cbMultiByte;
            }
        }
        else if((*(char*)((unsigned int)(unsigned char)cbMultiByte * 2 + gvar_40B490 + 1) & 0x80)) {
            cbMultiByte = gvar_40B4A0;
            if(cbMultiByte > 1) {
                v0 = (unsigned int)cbMultiByte > param2;
                if(cbMultiByte > (int)param2) {
                    goto loc_404594;
                }
                else {
                    result = MultiByteToWideChar(gvar_40BC64, 9, lpMultiByteStr, cbMultiByte, lpWideCharStr, lpWideCharStr == 0 ? 0: 1);
                    cbMultiByte = gvar_40B4A0;
                    if(result) {
                        return result;
                    }
                }
            }
            v0 = (unsigned int)cbMultiByte > param2;
        loc_404594:
            if(v0 || lpMultiByteStr[1] == 0) {
                gvar_40BA50 = 42;
                return result;
            }
        }
        else {
            cbMultiByte = MultiByteToWideChar(gvar_40BC64, 9, lpMultiByteStr, 1, lpWideCharStr, lpWideCharStr == 0 ? 0: 1);
            if(!cbMultiByte) {
                gvar_40BA50 = 42;
            }
        }
    }
    return result;
}

char* sub_4045E0(char* param0, char param1, int* param2) {
    int* ptr0 = param2;
    if(ptr0) {
        int v0 = (unsigned int)param1;
        char* ptr1 = param0;
        if((unsigned int)ptr0 >= 4) {
            int* ptr2 = (int*)((int)(int*)(0 - (int)param0) & 0x3);
            if(ptr2) {
                ptr0 = (int*)((int)ptr0 - (int)ptr2);
                do {
                    *ptr1 = (unsigned char)v0;
                    ++ptr1;
                    ptr2 = (int*)((char*)ptr2 - 1);
                }
                while(ptr2);
            }
            v0 *= 0x1010101;
            int* ptr3 = ptr0;
            ptr0 = (int*)((int)ptr0 & 0x3);
            char* ptr4 = (char*)((int)ptr3 >>> 2);
            if(ptr4) {
                while(ptr4 != 0) {
                    *(int*)ptr1 = v0;
                    ptr1 += 4;
                    --ptr4;
                }
                if(!ptr0) {
                    return param0;
                }
            }
            goto loc_40462B;
        }
        else {
        loc_40462B:
            do {
                *ptr1 = (unsigned char)v0;
                ++ptr1;
                ptr0 = (int*)((char*)ptr0 - 1);
            }
            while(ptr0);
        }
    }
    return param0;
}

BOOL sub_404640() {
    BOOL result;
    LPCVOID lpAddress;
    char v0;
    LPCVOID v1;
    int v2;
    char v3;
    int v4;
    SIZE_T v5;
    SIZE_T v6;
    int v7;
    char v8;
    sub_403D30();
    SIZE_T v9 = VirtualQuery(&v4, &v5, 28);
    if(v9) {
        GetSystemInfo(&v0);
        v9 = gvar_40BA5C;
        LPCVOID v10 = (LPCVOID)((int)(int*)(~(v6 - 1) & (int)&v4) - v6);
        LPCVOID v11 = (LPCVOID)(((((unsigned int)(v9 - 1) > 0 ? -1: 0) & 0xfffffff1) + 17) * v6 + (int)v1);
        SIZE_T dwSize = v6;
        if(v11 > v10) {
            return 0;
        }
        if(v9 != 1) {
            lpAddress = v1;
            do {
                v9 = VirtualQuery(lpAddress, &v5, 28);
                if(!v9) {
                    return 0;
                }
                lpAddress = (LPCVOID)(v2 + (int)lpAddress);
            }
            while(!(v7 & 0x1000));
            lpAddress = (LPCVOID)v5;
            if((v8 & 0x1)) {
                return 1;
            }
            else if((unsigned int)v10 < v5) {
                return 0;
            }
            if((unsigned int)v11 > v5) {
                lpAddress = v11;
            }
            VirtualAlloc(lpAddress, dwSize, 0x1000, 4);
            v9 = gvar_40BA5C;
        }
        else {
            lpAddress = v10;
        }
        result = VirtualProtect(lpAddress, dwSize, (DWORD)((((unsigned int)(v9 - 1) > 0 ? -1: 0) & 0x103) + 1), &v3);
    }
    else {
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404764(int param0) {
    int result1;
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    int v4 = v2;
    char v5 = gvar_40BC54 ? 0: 1;
    int v6 = v1;
    int result = param0;
    if(!v5 && (!gvar_40B5F0 || (unsigned int)result > 127)) {
        if((unsigned int)result < 0x100) {
            int v7 = gvar_40B4A0 > 1 ? sub_404318(result): (unsigned int)*(char*)(result * 2 + gvar_40B490) & 0x1;
            if(!v7) {
                return result;
            }
        }
        int v8 = result >> 8;
        if((*(char*)((unsigned int)(v8 & 0xFF) * 2 + gvar_40B490 + 1) & 0x80)) {
            v3 & 0xFF = (unsigned char)v8;
            (v3 >>> 8) & 0xFF = (unsigned char)result;
            (v3 >>> 16) & 0xFF = 0;
            v0 = 2;
        }
        else {
            v3 & 0xFF = (unsigned char)result;
            (v3 >>> 8) & 0xFF = 0;
            v0 = 1;
        }
        int v9 = sub_407455((int)gvar_40BC54, 0x100, (int)&v3, v0, (int)&v4, 3, (int)gvar_40BC64, 1);
        if(!v9) {
            return result;
        }
        result1 = v9 == 1 ? (int)(v4 & 0xFF): ((unsigned int)(unsigned char)v4 * 4) | (unsigned int)(unsigned char)(v4 >>> 8);
    }
    else {
        if(result >= 65) {
            result1 = result + 32;
            if(result1 <= 122) {
                return result1;
            }
        }
        result1 = result;
    }
    return result1;
}

int sub_404839(int param0, int param1) {
    int v0 = param1 / 32;
    int v1 = 31;
    if(!(~(-1 << ((31 - param1 % 32) & 0x1f)) & *(int*)(v0 * 4 + param0))) {
    loc_404861:
        do {
            ++v0;
            if(v0 >= 3) {
                return 1;
            }
            else if(!*(int*)(v0 * 4 + param0)) {
                goto loc_404861;
            }
        }
        while(!*(int*)(v0 * 4 + param0));
    }
    return 0;
}

int sub_40486B(int param0, int param1) {
    unsigned int* ptr0 = (unsigned int*)(param1 / 32 * 4 + param0);
    int result = sub_407811(ptr0[0], (unsigned int)(1 << ((31 - param1 % 32) & 0x1f)), ptr0);
    int v0 = param1 / 32 - 1;
    if(v0 >= 0) {
        unsigned int* ptr1 = (unsigned int*)(v0 * 4 + param0);
        while(result) {
            result = sub_407811(ptr1[0], 1, ptr1);
            --v0;
            --ptr1;
            if(v0 < 0) {
                return result;
            }
        }
    }
    return result;
}

int sub_4048B8(int param0, int param1) {
    int v0;
    int result = 0;
    int v1 = v0;
    int v2 = 31;
    int v3 = 31 - param1 % 32;
    int v4 = param1 / 32;
    int v5 = param0;
    if(((1 << ((31 - param1 % 32) & 0x1f)) & *(int*)(v4 * 4 + v5))) {
        int v6 = sub_404839(v5, param1);
        if(!v6) {
            result = sub_40486B(param0, param1 - 1);
        }
        v5 = param0;
    }
    v2 = 3;
    *(int*)(v4 * 4 + v5) = (-1 << ((31 - param1 % 32) & 0x1f)) & *(int*)(v4 * 4 + v5);
    if(v4 + 1 < 3) {
        int* ptr0 = (int*)((v4 + 1) * 4 + v5);
        for(int i = 3 - (v4 + 1); i != 0; --i) {
            *ptr0 = 0;
            ++ptr0;
        }
    }
    return result;
}

int* sub_40492A(int param0, int* param1) {
    int* result = param1;
    int counter = 3;
    int* ptr0 = (int*)(param0 - (int)result);
    do {
        *(int*)((int)result + (int)ptr0) = *result;
        ++result;
        --counter;
    }
    while(counter);
    return result;
}

int sub_404945(int param0) {
    int v0 = 0;
    while(!*(int*)(v0 * 4 + param0)) {
        ++v0;
        if(v0 >= 3) {
            return 1;
        }
    }
    return 0;
}

int sub_40495E(int param0, int param1) {
    int v0;
    int v1 = v0;
    int v2 = 32;
    int v3 = param1 % 32;
    int v4 = param0;
    int v5 = param1 / 32;
    int v6 = 0;
    param1 = 32 - v3;
    int v7 = 0;
    do {
        int v8 = *(int*)(v6 * 4 + v4);
        int v9 = ~(-1 << (v3 & 0x1f)) & v8;
        *(int*)(v6 * 4 + v4) = (v8 >>> (v3 & 0x1f)) | v7;
        ++v6;
        v7 = v9 << (param1 & 0x1f);
    }
    while(v6 < 3);
    v2 = 2;
    int result = 2;
    int* ptr0 = (int*)((2 - v5) * 4 + v4);
    do {
        *(int*)(result * 4 + v4) = result >= v5 ? *ptr0: 0;
        --result;
        --ptr0;
    }
    while(result >= 0);
    return result;
}

int sub_4049D9(short* param0, unsigned int* param1, int* param2) {
    int result;
    int v0;
    char v1;
    int v2;
    short* ptr0 = param0;
    int v3 = (unsigned int)*(ptr0 + 5);
    int v4 = v2;
    int* ptr1 = param2;
    param0 = (short*)(v3 & 0x8000);
    int v5 = *(int*)(ptr0 + 3);
    int v6 = *(int*)(ptr0 + 1);
    int v7 = (v3 & 0x7fff) - 0x3fff;
    int v8 = (unsigned int)*ptr0 * 0x10000;
    int v9 = v6;
    int v10 = &v5;
    if(v7 == 0xffffc001) {
        v0 = 0;
        int v11 = sub_404945(v10);
        if(v11) {
            goto loc_404AF1;
        }
        else {
            v5 = 0;
            *(int*)(&v5 + 4) = 0;
            *(int*)(&v5 + 8) = 0;
            goto loc_404A3C;
        }
    }
    else {
        sub_40492A(&v1, (int*)v10);
        int v12 = sub_4048B8(&v5, *(ptr1 + 2));
        if(v12) {
            ++v7;
        }
        int v13 = *(ptr1 + 1);
        if(v13 - *(ptr1 + 2) > v7) {
            v5 = 0;
            *(int*)(&v5 + 4) = 0;
            *(int*)(&v5 + 8) = 0;
            goto loc_404AB1;
        }
        if(v13 >= v7) {
            sub_40492A(&v5, (int*)&v1);
            sub_40495E(&v5, v13 - v7);
            sub_4048B8(&v5, *(ptr1 + 2));
            sub_40495E(&v5, *(ptr1 + 3) + 1);
        loc_404AB1:
            v0 = 0;
        loc_404A3C:
            result = 2;
        }
        else {
            char v14 = *ptr1 > v7;
            char v15 = (((v7 - *ptr1) ^ v7) & (*ptr1 ^ v7)) < 0;
            v10 = *(ptr1 + 3);
            if(v14 == v15) {
                v5 = 0;
                *(int*)(&v5 + 4) = 0;
                *(int*)(&v5 + 8) = 0;
                (v5 >>> 24) & 0xFF = (unsigned char)(v5 >>> 24) | 0x80;
                sub_40495E(&v5, v10);
                v0 = *(ptr1 + 5) + *ptr1;
                result = 1;
            }
            else {
                int v16 = *(ptr1 + 5);
                (v5 >>> 24) & 0xFF = (unsigned char)(v5 >>> 24) & 0x7f;
                v0 = v16 + v7;
                sub_40495E(&v5, v10);
            loc_404AF1:
                result = 0;
            }
        }
    }
    v10 = 31;
    int v17 = *(ptr1 + 4);
    int* ptr2 = (int*)((int)(int*)((int)(unsigned int*)(((unsigned int)param0 > 0 ? -1: 0) & 0x80000000) | (v0 << ((31 - *(ptr1 + 3)) & 0x1f))) | v5);
    if(v17 == 32) {
        *param1 = ptr2;
    }
    else if(v17 == 64) {
        *(param1 + 1) = ptr2;
        *param1 = v9;
    }
    return result;
}

int sub_404B31(short* param0, unsigned int* param1) {
    return sub_4049D9(param0, param1, (int*)&gvar_40B4B0);
}

int sub_404B47(short* param0, unsigned int* param1) {
    return sub_4049D9(param0, param1, (int*)&gvar_40B4C8);
}

int sub_404B5D(unsigned int* param0, char* param1) {
    char v0;
    char v1;
    int v2 = gvar_40B498;
    sub_4079C9(&v0, &v1, param1, 0, 0, 0, 0);
    sub_404B31(&v0, param0);
    return sub_4041A2(v2);
}

int sub_404B9A(unsigned int* param0, char* param1) {
    char v0;
    char v1;
    int v2 = gvar_40B498;
    sub_4079C9(&v0, &v1, param1, 0, 0, 0, 0);
    sub_404B47(&v0, param0);
    return sub_4041A2(v2);
}

int* sub_405018(int* param0, int* param1, int param2) {
    int v0;
    int v1 = param2;
    char* ptr0 = *(unsigned int*)(v1 + 12);
    int v2 = v0;
    int* ptr1 = param1;
    int* ptr2 = param0;
    *(char*)&ptr2[0] = 48;
    int* i = (int*)((char*)ptr2 + 1);
    if((int)ptr1 > 0) {
        param0 = ptr1;
        ptr1 = NULL;
        do {
            v1 = (unsigned int)*ptr0 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
            if((unsigned char)v1) {
                v1 = (int)(unsigned char)v1;
                ++ptr0;
            }
            else {
                int v3 = 48;
                v1 = 48;
            }
            *(char*)&i[0] = (unsigned char)v1;
            i = (int*)((char*)i + 1);
            param0 = (int*)((char*)param0 - 1);
        }
        while(param0);
        v1 = param2;
    }
    *(char*)&i[0] = 0;
    if((int)ptr1 >= 0 && *ptr0 >= 53) {
        for(i = (int*)((char*)i - 1); *(char*)&i[0] == 57; i = (int*)((char*)i - 1)) {
            *(char*)&i[0] = 48;
        }
        *(char*)&i[0] = *(char*)&i[0] + 1;
    }
    if(*(char*)&ptr2[0] == 49) {
        *(int*)(v1 + 4) = *(int*)(v1 + 4) + 1;
    }
    else {
        size_t v4 = strlen((char*)ptr2 + 1);
        i = unk_lib_sub(ptr2, (int*)((char*)ptr2 + 1), (int*)(v4 + 1));
    }
    return i;
}

int* sub_40508F(int* param0, int* param1) {
    int* result;
    int* ptr0;
    int v0;
    int* ptr1 = param1;
    int v1 = (unsigned int)*(short*)((char*)ptr1 + 6);
    int v2 = v0;
    int v3 = 0x80000000;
    int* ptr2 = (int*)((v1 >>> 4) & 0x7ff);
    param1 = (int*)(v1 & 0x8000);
    int v4 = *ptr1;
    int v5 = (unsigned int)(int*)(ptr2 & 0xFFFF);
    int v6 = *(ptr1 + 1) & 0xfffff;
    if(v5) {
        ptr0 = v5 != 0x7ff ? ptr2 + 0xf00: (int*)0x7FFF;
        goto loc_40510A;
    }
    else if(v6 == 0 && v4 == 0) {
        result = param0;
        *(result + 1) = 0;
        *result = 0;
        *(short*)(result + 2) = 0;
    }
    else {
        ptr0 = (int*)((char*)ptr2 + 15361);
        v3 = 0;
    loc_40510A:
        int v7 = (v6 * 0x800) | (v4 >>> 21) | v3;
        result = param0;
        *(result + 1) = v7;
        *result = v4 * 0x800;
        if(!(v7 & 0x80000000)) {
            do {
                int v8 = *result;
                v4 = (*(result + 1) * 2) | (v8 >>> 31);
                ptr0 = (int*)((char*)ptr0 + 0xFFFF);
                *(result + 1) = v4;
                *result = v8 * 2;
            }
            while(!(v4 & 0x80000000));
        }
        *(short*)(result + 2) = (unsigned short)(int*)((int)ptr0 | (int)param1);
    }
    return result;
}

int sub_405149() {
    int v0;
    int v1;
    char* ptr0;
    char v2;
    int v3 = gvar_40B498;
    sub_40508F(&v0, &v2);
    short* ptr1 = (short*)&gvar_40BBB4;
    int v4 = 0;
    int v5 = 17;
    int v6 = v0;
    *(&v6 + 1) = *(int*)((char*)&v0 + 4);
    *(short*)(&v6 + 2) = *(short*)((char*)&v0 + 8);
    int v7 = sub_407E50(v6, v1, ptr0, v5, (char)v4, ptr1);
    gvar_40BBD8 = v7;
    gvar_40BBD0 = (unsigned int)gvar_40BBB6;
    gvar_40BBD4 = (unsigned int)gvar_40BBB4;
    gvar_40BBDC = 0x40bbb8;
    return sub_4041A2(v3);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4051BD() {
    return sub_401182(2);
}

int sub_4051C6() {
    short v0;
    int result = !((unsigned char)v0 & 0x1) ? 0: 16;
    if(((unsigned char)v0 & 0x4)) {
        result |= 8;
    }
    if(((unsigned char)v0 & 0x8)) {
        result |= 4;
    }
    if(((unsigned char)v0 & 0x10)) {
        result |= 2;
    }
    if(((unsigned char)v0 & 0x20)) {
        result |= 1;
    }
    if(((unsigned char)v0 & 0x2)) {
        result |= 0x80000;
    }
    if(((unsigned int)v0 & 0xc00)) {
        switch((unsigned int)v0 & 0xc00) {
            case 1024: {
                result |= 0x100;
                break;
            }
            case 2048: {
                result |= 0x200;
                break;
            }
            case 3072: {
                result |= 0x300;
                break;
            }
        }
    }
    if(!((unsigned int)v0 & 0x300)) {
        result |= 0x20000;
    }
    else if(((unsigned int)v0 & 0x300) == 0x200) {
        result |= 0x10000;
    }
    if(((unsigned char)(v0 >>> 8) & 0x10)) {
        result |= 0x40000;
    }
    return result;
}

int sub_405258() {
    int v0;
    int result = !((unsigned char)v0 & 0x10) ? 0: 1;
    if(((unsigned char)v0 & 0x8)) {
        result |= 4;
    }
    if(((unsigned char)v0 & 0x4)) {
        result |= 8;
    }
    if(((unsigned char)v0 & 0x2)) {
        result |= 16;
    }
    if(((unsigned char)v0 & 0x1)) {
        result |= 32;
    }
    if((v0 & 0x80000)) {
        result |= 2;
    }
    if((v0 & 0x300)) {
        switch(v0 & 0x300) {
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
    if(!(v0 & 0x30000)) {
        result |= 0x300;
    }
    else if((v0 & 0x30000) == 0x10000) {
        result |= 0x200;
    }
    if((v0 & 0x40000)) {
        result |= 0x1000;
    }
    return result;
}

int sub_4052E6(int param0, int param1) {
    int v0;
    wait();
    (unsigned short)v3 = fnstcw((unsigned short)v0);
    int v1 = sub_4051C6();
    int result = (~param1 & v1) | (param0 & param1);
    int v2 = sub_405258();
    (unsigned short)param1 = fldcw((unsigned short)v2);
    return result;
}

int sub_405318(int param0, int param1) {
    return sub_4052E6(param0, param1 & 0xfff7ffff);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_40532E(unsigned int param0) {
    unsigned int result;
    SIZE_T v0 = sub_408240(gvar_40BFE8);
    unsigned int* ptr0 = gvar_40BFE4;
    unsigned int v1 = gvar_40BFE8;
    if((unsigned int)((int*)((int)ptr0 - v1) + 1) > v0) {
        result = (unsigned int)sub_4080DE((int)v1, (int)(unsigned int)((v0 >= 0x800 ? 0x800: v0) + v0));
        if(!result) {
            result = (unsigned int)sub_4080DE((int)gvar_40BFE8, v0 + 16);
            if(!result) {
                return 0;
            }
        }
        unsigned int v2 = gvar_40BFE4 - gvar_40BFE8;
        gvar_40BFE8 = result;
        ptr0 = (unsigned int*)((v2 >> 2) * 4 + result);
        gvar_40BFE4 = (unsigned int*)((v2 >> 2) * 4 + result);
    }
    result = param0;
    *ptr0 = param0;
    gvar_40BFE4 += 4;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4053B0(int param0) {
    unsigned int v0 = (unsigned int)sub_40532E(param0);
    return -1 - (v0 > 0 ? -1: 0);
}

int sub_4053C2() {
    int v0 = sub_403DDF(128);
    gvar_40BFE8 = v0;
    if(!v0) {
        return 24;
    }
    *(int*)v0 = 0;
    gvar_40BFE4 = gvar_40BFE8;
    return 0;
}

int sub_4053EA(int param0, int param1, int param2) {
    char v0;
    HMODULE hModule1;
    int result;
    int result;
    int v1;
    int v2;
    char v3;
    LPCSTR v4;
    char v5;
    char v6;
    int v7 = 0;
    unsigned int* ptr0 = &v1;
    if(gvar_40BBE0 == 0) {
        HMODULE hModule = LoadLibraryA("user32.dll");
        if(hModule == 0) {
            return 0;
        }
        FARPROC v8 = GetProcAddress(hModule, "MessageBoxA");
        gvar_40BBE0 = v8;
        if(!v8) {
            return 0;
        }
        FARPROC v9 = GetProcAddress(hModule, "GetActiveWindow");
        hModule1 = hModule;
        gvar_40BBE4 = v9;
        FARPROC v10 = GetProcAddress(hModule1, "GetLastActivePopup");
        v0 = gvar_40BA5C == 2;
        gvar_40BBE8 = v10;
        if(v0) {
            FARPROC v11 = GetProcAddress(hModule, "GetUserObjectInformationA");
            gvar_40BBF0 = v11;
            if(v11) {
                FARPROC v12 = GetProcAddress(hModule, "GetProcessWindowStation");
                gvar_40BBEC = v12;
            }
        }
        goto loc_40546A;
    }
    else {
    loc_40546A:
        unsigned int v13 = gvar_40BBEC;
        if(v13) {
            ptr0 = &v4;
            v4 = (LPCSTR)&loc_405475;
            int v14 = v13();
            if(v14) {
                ptr0 = &v2;
                int v15 = gvar_40BBF0(v14, 1, (int)&v5, 12, (int)&v3);
                if(v15 && (v6 & 0x1)) {
                    goto loc_4054AF;
                }
            }
            (param2 >>> 16) & 0xFF = gvar_40BA68 >= 4 ? (unsigned char)(param2 >>> 16) | 0x20: (unsigned char)(param2 >>> 16) | 0x4;
        }
        else {
        loc_4054AF:
            unsigned int v16 = gvar_40BBE4;
            if(v16) {
                ptr0 = &v4;
                v4 = (LPCSTR)&loc_4054BA;
                v7 = v16();
                if(v7) {
                    unsigned int v17 = gvar_40BBE8;
                    if(v17) {
                        ptr0 = &hModule1;
                        v7 = v17(v7);
                    }
                }
            }
        }
        --ptr0;
        *ptr0 = param2;
        --ptr0;
        *ptr0 = param1;
        --ptr0;
        *ptr0 = param0;
        --ptr0;
        *ptr0 = v7;
        --ptr0;
        *ptr0 = &loc_4054DE;
        result = /*BAD_CALL!*/ gvar_40BBE0(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2), *(int*)(ptr0 + 3), *(int*)(ptr0 + 4));
    }
    return result;
}

int sub_405643() {
    int v0 = 64;
    int* ptr0 = (int*)&gvar_40BCA0;
    while(v0 != 0) {
        *ptr0 = 0;
        ++ptr0;
        --v0;
    }
    *(char*)ptr0 = 0;
    gvar_40BDA4 = 0;
    gvar_40BC98 = 0;
    gvar_40BC94 = 0;
    gvar_40BDB0 = 0;
    gvar_40BDB4 = 0;
    gvar_40BDB8 = 0;
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40566C(int param0) {
    unsigned char v0;
    int v1;
    char v2;
    char v3;
    short v4;
    char v5;
    char v6;
    char v7;
    char v8;
    int v9 = gvar_40B498;
    BOOL v10 = GetCPInfo(gvar_40BDA4, &v2);
    if(v10 == 1) {
        unsigned int v11 = 0;
        do {
            *(char*)(v11 + (int)&v3) = (unsigned char)v11;
            ++v11;
        }
        while(v11 < 0x100);
        v11 = (unsigned int)v8 | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
        v3 = 32;
        if((unsigned char)v11) {
            int v12 = v1;
            char* ptr0 = &v7;
            do {
                unsigned int v13 = (unsigned int)*ptr0;
                v11 = (unsigned int)(v11 & 0xFF);
                if(v11 <= v13) {
                    int v14 = v13 - v11 + 1;
                    int v15 = v14;
                    int v16 = v14 >>> 2;
                    int* ptr1 = (int*)(v11 + (int)&v3);
                    v11 = 0x20202020;
                    while(v16 != 0) {
                        *ptr1 = 0x20202020;
                        ++ptr1;
                        --v16;
                    }
                    for(int i = v15 & 0x3; i != 0; --i) {
                        *(char*)ptr1 = 32;
                        ptr1 = (int*)((char*)ptr1 + 1);
                    }
                }
                char* ptr2 = ptr0 + 1;
                v11 = (unsigned int)*ptr2 | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
                ptr0 = ptr2 + 1;
            }
            while((unsigned char)v11);
        }
        sub_4070AD(1, (int)&v3, 0x100, (int)&v4, (int)gvar_40BDA4, (int)gvar_40BC94, 0);
        sub_407455((int)gvar_40BC94, 0x100, (int)&v3, 0x100, (int)&v5, 0x100, (int)gvar_40BDA4, 0);
        sub_407455((int)gvar_40BC94, 0x200, (int)&v3, 0x100, (int)&v6, 0x100, (int)gvar_40BDA4, 0);
        unsigned int v17 = 0;
        do {
            param0 = (unsigned int)*(short*)(v17 * 2 + (int)&v4) | ((unsigned int)(unsigned short)(param0 >>> 16) << 16);
            if(((unsigned char)param0 & 0x1)) {
                *(char*)((char*)((int)&gvar_40BCA0 + v17) + 1) = *(char*)((char*)((int)&gvar_40BCA0 + v17) + 1) | 0x10;
                param0 = (unsigned int)*(char*)(v17 + (int)&v5) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
                goto loc_40577E;
            }
            else if(((unsigned char)param0 & 0x2)) {
                *(char*)((char*)((int)&gvar_40BCA0 + v17) + 1) = *(char*)((char*)((int)&gvar_40BCA0 + v17) + 1) | 0x20;
                param0 = (unsigned int)*(char*)(v17 + (int)&v6) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
            loc_40577E:
                *(unsigned char*)((int)&gvar_40BDC0 + v17) = (unsigned char)param0;
            }
            else {
                *(unsigned char*)((int)&gvar_40BDC0 + v17) = 0;
            }
            ++v17;
        }
        while(v17 < 0x100);
    }
    else {
        unsigned int v18 = 0;
        do {
            if(v18 >= 65 && v18 <= 90) {
                *(char*)((char*)((int)&gvar_40BCA0 + v18) + 1) = *(char*)((char*)((int)&gvar_40BCA0 + v18) + 1) | 0x10;
                v0 = (unsigned char)((unsigned char)v18 + 32);
                goto loc_4057C1;
            }
            else if(v18 >= 97 && v18 <= 122) {
                *(char*)((char*)((int)&gvar_40BCA0 + v18) + 1) = *(char*)((char*)((int)&gvar_40BCA0 + v18) + 1) | 0x20;
                v0 = (unsigned char)((unsigned char)v18 - 32);
            loc_4057C1:
                *(unsigned char*)((int)&gvar_40BDC0 + v18) = v0;
            }
            else {
                *(unsigned char*)((int)&gvar_40BDC0 + v18) = 0;
            }
            ++v18;
        }
        while(v18 < 0x100);
    }
    return sub_4041A2(v9);
}

int sub_4057F8(UINT param0) {
    int v0;
    unsigned int v1;
    char v2;
    int v3;
    char v4;
    int v5;
    int v6;
    UINT v7 = gvar_40B498;
    int v8 = v6;
    UINT CodePage = param0;
    int v9 = (int)v7;
    int v10 = v5;
    gvar_40BBF4 = 0;
    switch(CodePage) {
        case -4: {
            v7 = gvar_40BC64;
            gvar_40BBF4 = 1;
        loc_405856:
            param0 = v7;
            CodePage = v7;
            break;
        }
        case -3: {
            gvar_40BBF4 = 1;
            v7 = GetACP();
            goto loc_405856;
        }
        case -2: {
            gvar_40BBF4 = 1;
            v7 = GetOEMCP();
            goto loc_405856;
        }
    }
    if(gvar_40BDA4 != CodePage) {
        if(CodePage != 0) {
            int v11 = 0;
            unsigned int v12 = 0;
            while(*(unsigned int*)((int)&gvar_40B4E8 + v12) != CodePage) {
                v12 += 48;
                ++v11;
                if(v12 >= 240) {
                    BOOL v13 = GetCPInfo(CodePage, &v1);
                    if(v13 == 1) {
                        v0 = (int)(void*)0x40;
                        int* ptr0 = (int*)&gvar_40BCA0;
                        while(v0 != 0) {
                            *ptr0 = 0;
                            ++ptr0;
                            --v0;
                        }
                        *(char*)ptr0 = 0;
                        char v14 = v1 == 1;
                        char v15 = v1 < 1;
                        gvar_40BDA4 = CodePage;
                        gvar_40BC94 = 0;
                        if((v15 || v14)) {
                            gvar_40BC98 = 0;
                            gvar_40BDB0 = 0;
                            gvar_40BDB4 = 0;
                            gvar_40BDB8 = 0;
                            sub_40566C(v0);
                            return sub_4041A2(v9);
                        loc_405981:
                            unsigned int v16 = 1;
                            do {
                                *(char*)((char*)((int)&gvar_40BCA0 + v16) + 1) = *(char*)((char*)((int)&gvar_40BCA0 + v16) + 1) | 0x8;
                                ++v16;
                            }
                            while(v16 < 0xff);
                            int v17 = CPtoLCID(v10);
                            gvar_40BC94 = v17;
                            gvar_40BC98 = 1;
                        }
                        else if(v4) {
                            char* ptr1 = &v2;
                            while(1) {
                                unsigned int v18 = (unsigned int)*ptr1 | ((unsigned int)((v18 >>> 8) & 0xffffff) << 8);
                                if((unsigned char)v18) {
                                    unsigned int v19 = (unsigned int)*(ptr1 - 1);
                                    v18 &= 0xFF;
                                    while(v19 <= v18) {
                                        *(char*)((char*)((int)&gvar_40BCA0 + v19) + 1) = *(char*)((char*)((int)&gvar_40BCA0 + v19) + 1) | 0x4;
                                        ++v19;
                                    }
                                    ptr1 += 2;
                                    if(*(ptr1 - 1)) {
                                        continue;
                                    }
                                }
                                break;
                            }
                            goto loc_405981;
                        }
                        else {
                            goto loc_405981;
                        }
                        gvar_40BDB0 = 0;
                        gvar_40BDB4 = 0;
                        gvar_40BDB8 = 0;
                        sub_40566C(v0);
                    }
                    else if(gvar_40BBF4 != 0) {
                        sub_405643();
                        sub_40566C(v0);
                    }
                    return sub_4041A2(v9);
                }
            }
            unsigned int v20 = 0;
            void* ptr2 = (void*)0x40;
            int* ptr3 = (int*)&gvar_40BCA0;
            while(ptr2 != 0) {
                *ptr3 = 0;
                ++ptr3;
                ptr2 = (void*)((int)ptr2 - 1);
            }
            unsigned int v21 = 0;
            *(char*)ptr3 = 0;
            char* ptr4 = (char*)(v11 * 3 * 16 + &gvar_40B4F8);
            do {
                v20 = (unsigned int)*ptr4 | ((unsigned int)((v20 >>> 8) & 0xffffff) << 8);
                char* ptr5 = ptr4;
                while((unsigned char)v20) {
                    v11 = (unsigned int)*(ptr5 + 1) | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
                    if(!(unsigned char)v11) {
                        break;
                    }
                    else {
                        v20 &= 0xFF;
                        unsigned int v22 = (unsigned int)(v11 & 0xFF);
                        if(v20 <= v22) {
                            v11 = (unsigned int)*(char*)(v21 + 0x40b4e0) | ((unsigned int)((v21 >>> 8) & 0xffffff) << 8);
                            do {
                                *(char*)((char*)((int)&gvar_40BCA0 + v20) + 1) = (unsigned char)v11 | *(char*)((char*)((int)&gvar_40BCA0 + v20) + 1);
                                ++v20;
                            }
                            while(v20 <= v22);
                        }
                        ptr5 += 2;
                        v20 = (unsigned int)*ptr5 | ((unsigned int)((v20 >>> 8) & 0xffffff) << 8);
                    }
                }
                ++v21;
                ptr4 += 8;
            }
            while(v21 < 4);
            gvar_40BDA4 = param0;
            gvar_40BC98 = 1;
            int v23 = CPtoLCID(v10);
            unsigned int* ptr6 = (unsigned int*)(v3 + 4240620);
            gvar_40BDB0 = *ptr6;
            unsigned int* ptr7 = ptr6 + 1;
            gvar_40BDB4 = *ptr7;
            gvar_40BC94 = v23;
            gvar_40BDB8 = *(ptr7 + 1);
            sub_40566C(v0);
            return sub_4041A2(v9);
        }
        sub_405643();
        sub_40566C(v0);
    }
    return sub_4041A2(v9);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4059DE() {
    if(!gvar_40BFEC) {
        sub_4057F8(-3);
        gvar_40BFEC = 1;
    }
    return 0;
}

LPVOID sub_405D3D(unsigned int param0) {
    LPVOID v0 = HeapAlloc(gvar_40BEC0, 0, 320);
    gvar_40BC80 = v0;
    if(v0) {
        gvar_40BC78 = 0;
        gvar_40BC7C = 0;
        gvar_40BC88 = v0;
        gvar_40BC84 = param0;
        gvar_40BC8C = 16;
    }
    return 0;
}

unsigned int sub_405D85(int param0) {
    unsigned int result = gvar_40BC80;
    unsigned int v0 = (unsigned int)(gvar_40BC7C * 20 + result);
    while(result < v0) {
        if((unsigned int)(param0 - *(int*)(result + 12)) < 0x100000) {
            return result;
        }
        result += 20;
    }
    return 0;
}

unsigned int sub_405DB0(unsigned int* param0, int* param1) {
    unsigned int result;
    unsigned int* ptr0;
    unsigned int* ptr1;
    int v0;
    int* ptr2 = *(param0 + 4);
    int* ptr3 = param1 - 1;
    int* ptr4 = (int*)((int)(int*)((int)param1 - *(int*)(param0 + 3)) >>> 0xF);
    int* ptr5 = (int*)((int)(int*)((int)ptr4 * 516) + (int)ptr2) + 81;
    int v1 = *ptr3 - 1;
    int v2 = *ptr3 - 1;
    if(!((unsigned char)v1 & 0x1)) {
        int v3 = v0;
        int* ptr6 = (int*)(v1 + (int)ptr3);
        int v4 = *ptr6;
        int v5 = *(ptr3 - 1);
        param1 = ptr6;
        if(!((unsigned char)v4 & 0x1)) {
            unsigned int* ptr7 = (unsigned int*)((v4 >> 4) - 1);
            if((unsigned int)ptr7 > 63) {
                ptr1 = (unsigned int*)0x3F;
                ptr7 = (unsigned int*)0x3F;
            }
            if(*(ptr6 + 1) == *(ptr6 + 2)) {
                if((unsigned int)ptr7 < 32) {
                    char* ptr8 = (char*)((int*)((int)ptr2 + (int)ptr7) + 1);
                    *((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr2) + 17) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr7 & 0x1f)) & *((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr2) + 17);
                    *ptr8 = *ptr8 + 0xFF;
                    if(!*ptr8) {
                        *param0 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr7 & 0x1f)) & *param0;
                    }
                }
                else {
                    char* ptr9 = (char*)((int*)((int)ptr2 + (int)ptr7) + 1);
                    *((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr2) + 49) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)(ptr7 - 8) & 0x1f)) & *((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr2) + 49);
                    *ptr9 = *ptr9 + 0xFF;
                    if(!*ptr9) {
                        *(int*)(param0 + 1) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)(ptr7 - 8) & 0x1f)) & *(int*)(param0 + 1);
                    }
                }
                ptr6 = param1;
            }
            v1 = v4 + v2;
            *(int*)(*(ptr6 + 2) + 4) = *(ptr6 + 1);
            *(int*)(*(param1 + 1) + 8) = *(param1 + 2);
            v2 = v1;
        }
        unsigned int* ptr10 = (unsigned int*)((v1 >> 4) - 1);
        if((unsigned int)ptr10 > 63) {
            ptr1 = (unsigned int*)0x3F;
            ptr10 = (unsigned int*)0x3F;
        }
        v4 = v5 & 0x1;
        if(!(v5 & 0x1)) {
            int* ptr11 = (int*)((int)ptr3 - v5);
            ptr1 = (unsigned int*)0x3F;
            param1 = ptr11;
            ptr0 = (unsigned int*)((v5 >> 4) - 1);
            if(ptr0 > (unsigned int*)0x3F) {
                ptr0 = (unsigned int*)0x3F;
            }
            v1 += v5;
            ptr10 = (unsigned int*)((v1 >> 4) - 1);
            v2 = v1;
            if(ptr10 > (unsigned int*)0x3F) {
                ptr10 = (unsigned int*)0x3F;
            }
            if(ptr10 != ptr0) {
                if(*(param1 + 1) == *(param1 + 2)) {
                    if((unsigned int)ptr0 < 32) {
                        *((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr2) + 17) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr0 & 0x1f)) & *((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr2) + 17);
                        *(char*)((int*)((int)ptr2 + (int)ptr0) + 1) = *(char*)((int*)((int)ptr2 + (int)ptr0) + 1) + 0xFF;
                        if(!*(char*)((int*)((int)ptr2 + (int)ptr0) + 1)) {
                            *param0 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr0 & 0x1f)) & *param0;
                        }
                    }
                    else {
                        *((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr2) + 49) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)(ptr0 - 8) & 0x1f)) & *((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr2) + 49);
                        *(char*)((int*)((int)ptr2 + (int)ptr0) + 1) = *(char*)((int*)((int)ptr2 + (int)ptr0) + 1) + 0xFF;
                        if(!*(char*)((int*)((int)ptr2 + (int)ptr0) + 1)) {
                            *(int*)(param0 + 1) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)(ptr0 - 8) & 0x1f)) & *(int*)(param0 + 1);
                        }
                    }
                }
                *(int*)(*(param1 + 2) + 4) = *(param1 + 1);
                *(int*)(*(param1 + 1) + 8) = *(param1 + 2);
            }
            ptr3 = param1;
        }
        else {
            ptr0 = param0;
        }
        if(v4 || ptr10 != ptr0) {
            int* ptr12 = (int*)((int)(int*)((int)ptr10 * 8) + (int)ptr5);
            int v6 = *(ptr12 + 1);
            *(unsigned int*)(ptr3 + 2) = ptr12;
            *(ptr3 + 1) = v6;
            *(unsigned int*)(ptr12 + 1) = ptr3;
            *(unsigned int*)(*(ptr3 + 1) + 8) = ptr3;
            v1 = *(ptr3 + 1);
            if(*(ptr3 + 2) == v1) {
                v1 = (unsigned int)*(char*)((int*)((int)ptr2 + (int)ptr10) + 1) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                (int*)((param1 >>> 24) & 0xFF) = (unsigned char)v1;
                *(char*)((int*)((int)ptr2 + (int)ptr10) + 1) = (unsigned char)v1 + 1;
                if((unsigned int)ptr10 < 32) {
                    if(!(unsigned char)(int*)((int)param1 >>> 24)) {
                        *param0 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr10 & 0x1f)) | *param0);
                    }
                    unsigned int* ptr13 = (unsigned int*)((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr2) + 17);
                    *ptr13 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr10 & 0x1f)) | *ptr13);
                }
                else {
                    if(!(unsigned char)(int*)((int)param1 >>> 24)) {
                        *(param0 + 1) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)(ptr10 - 8) & 0x1f)) | *(int*)(param0 + 1));
                    }
                    unsigned int* ptr14 = (unsigned int*)((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr2) + 49);
                    *ptr14 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)(ptr10 - 8) & 0x1f)) | *ptr14);
                }
            }
        }
        *ptr3 = v2;
        *((int*)((int)ptr3 + v2) - 1) = v2;
        *ptr5 = *ptr5 - 1;
        if(!*ptr5) {
            unsigned int v7 = gvar_40BC78;
            if(v7) {
                unsigned int v8 = gvar_40BC90;
                ptr1 = (unsigned int*)0x4000;
                VirtualFree((LPVOID)(v8 * 0x8000 + *(int*)(v7 + 12)), 0x8000, 0x4000);
                unsigned int v9 = gvar_40BC78;
                *(int*)(v9 + 8) = (0x80000000 >>> (gvar_40BC90 & 0x1f)) | *(int*)(v9 + 8);
                *(int*)(gvar_40BC90 * 4 + *(int*)(gvar_40BC78 + 16) + 196) = 0;
                int v10 = *(int*)(gvar_40BC78 + 16);
                *(char*)(v10 + 67) = *(char*)(v10 + 67) + 0xFF;
                unsigned int v11 = gvar_40BC78;
                if(!*(char*)(*(int*)(v11 + 16) + 67)) {
                    *(int*)(v11 + 4) = *(int*)(v11 + 4) & 0xfffffffe;
                    v11 = gvar_40BC78;
                }
                if(*(int*)(v11 + 8) == -1) {
                    VirtualFree(*(LPVOID*)(v11 + 12), 0, 0x8000);
                    HeapFree(gvar_40BEC0, 0, *(LPVOID*)(gvar_40BC78 + 16));
                    int* ptr15 = gvar_40BC78;
                    unk_lib_sub(ptr15, ptr15 + 5, (int*)((int)(int*)(gvar_40BC7C * 5 * 4 - (int)ptr15) + gvar_40BC80) - 5);
                    --gvar_40BC7C;
                    if(gvar_40BC78 < (unsigned int)param0) {
                        param0 -= 5;
                    }
                    result = gvar_40BC80;
                    gvar_40BC88 = gvar_40BC80;
                }
            }
            gvar_40BC78 = param0;
            gvar_40BC90 = ptr4;
        }
    }
    return result;
}

int* sub_4060C8() {
    int* result;
    int* result;
    unsigned int v0 = gvar_40BC7C;
    unsigned int v1 = gvar_40BC8C;
    if(v0 == v1) {
        LPVOID v2 = HeapReAlloc(gvar_40BEC0, 0, gvar_40BC80, (SIZE_T)((v1 * 5 + 80) * 4));
        if(v2 == 0) {
            return NULL;
        }
        gvar_40BC8C += 16;
        gvar_40BC80 = v2;
        v0 = gvar_40BC7C;
    }
    int* ptr0 = (int*)(v0 * 20 + gvar_40BC80);
    LPVOID v3 = HeapAlloc(gvar_40BEC0, 8, 0x41c4);
    *(LPVOID*)(ptr0 + 4) = v3;
    if(v3 != 0) {
        LPVOID v4 = VirtualAlloc(NULL, 0x100000, 0x2000, 4);
        *(LPVOID*)(ptr0 + 3) = v4;
        if(v4 != 0) {
            *(ptr0 + 2) = -1;
            *ptr0 = 0;
            *(ptr0 + 1) = 0;
            ++gvar_40BC7C;
            **(unsigned int*)(ptr0 + 4) = -1;
            result = ptr0;
        }
        else {
            HeapFree(gvar_40BEC0, 0, *(LPVOID*)(ptr0 + 4));
            return NULL;
        }
    }
    else {
        result = NULL;
    }
    return result;
}

int sub_40617F(int param0) {
    int result;
    int* ptr0;
    int v0;
    int* ptr1 = ptr0;
    int* ptr2 = ptr0;
    int v1 = param0;
    int v2 = *(int*)(v1 + 8);
    int v3 = v0;
    int v4 = *(int*)(v1 + 16);
    int i;
    for(i = 0; v2 >= 0; ++i) {
        v2 *= 2;
    }
    int* ptr3 = (int*)(i * 516 + v4 + 0x144);
    ptr2 = (int*)(i * 516 + v4 + 0x144);
    DWORD counter = 63;
    do {
        *(unsigned int*)(ptr3 + 2) = ptr3;
        *(unsigned int*)(ptr3 + 1) = ptr3;
        ptr3 += 2;
        --counter;
    }
    while(counter);
    DWORD v5 = 4;
    int v6 = 0x1000;
    LPVOID lpAddress = (LPVOID)(i * 0x8000 + *(int*)(v1 + 12));
    LPVOID v7 = VirtualAlloc(lpAddress, 0x8000, 0x1000, 4);
    if(!v7) {
        result = -1;
    }
    else {
        int* ptr4 = (int*)((int)lpAddress + 0x7000);
        ptr1 = (int*)((int)lpAddress + 0x7000);
        if((unsigned int)ptr4 >= (unsigned int)lpAddress) {
            unsigned int* ptr5 = (unsigned int*)((int)lpAddress + 16);
            int* ptr6 = (int*)((char*)((int)(int*)((int)ptr4 - (int)lpAddress) >>> 12) + 1);
            do {
                *(int*)(ptr5 - 2) = -1;
                *(int*)(ptr5 + 1019) = -1;
                *ptr5 = (int*)(ptr5 + 0x3ff);
                *(int*)(ptr5 - 1) = 0xff0;
                *(ptr5 + 1) = (int*)(ptr5 - 1025);
                *(int*)(ptr5 + 1018) = 0xff0;
                ptr5 += 0x400;
                ptr6 = (int*)((char*)ptr6 - 1);
            }
            while(ptr6);
            ptr4 = ptr1;
        }
        *(unsigned int*)(ptr2 + 127) = (int*)((int)lpAddress + 12);
        *(unsigned int*)((int)lpAddress + 20) = ptr2 + 126;
        *(unsigned int*)(ptr2 + 128) = ptr4 + 3;
        *(unsigned int*)(ptr4 + 4) = ptr2 + 126;
        *(int*)(i * 4 + v4 + 68) = 0;
        *(int*)(i * 4 + v4 + 196) = 1;
        int* ptr7 = (unsigned int)*(char*)(v4 + 67) | ((unsigned int)(int*)((int)(int*)((int)(ptr2 + 126) >>> 8) & 0xffffff) << 8);
        *(char*)(v4 + 67) = (unsigned char)ptr7 + 1;
        if(!(unsigned char)ptr7) {
            *(int*)(param0 + 4) = *(int*)(param0 + 4) | 0x1;
        }
        *(int*)(param0 + 8) = ~(0x80000000 >>> (i & 0x1f)) & *(int*)(param0 + 8);
        result = i;
    }
    return result;
}

int sub_406285(unsigned int* param0, unsigned int* param1, int* param2) {
    int result;
    int* ptr0;
    unsigned int* ptr1;
    int* ptr2;
    unsigned int* ptr3;
    int v0;
    int* ptr4 = *(param0 + 4);
    int v1 = v0;
    unsigned int* ptr5 = (unsigned int*)((int)(int*)((int)param1 - *(int*)(param0 + 3)) >>> 0xF);
    int* ptr6 = (int*)((int)(int*)((int)ptr5 * 516) + (int)ptr4) + 81;
    int* ptr7 = (int*)((int)(int*)((char*)param2 + 23) & 0xfffffff0);
    int* ptr8 = (int*)(*(int*)(param1 - 1) - 1);
    char v2 = (int)ptr8 > (int)ptr7;
    char v3 = (int)(int*)((int)(int*)((int)(int*)((int)ptr7 - (int)ptr8) ^ (int)ptr7) & (int)(int*)((int)ptr8 ^ (int)ptr7)) < 0;
    unsigned int* ptr9 = (unsigned int*)((int*)((int)ptr8 + (int)param1) - 1);
    int* ptr10 = *ptr9;
    param2 = ptr8;
    int* ptr11 = ptr10;
    if((ptr8 == ptr7 || v2 != v3)) {
        if(v2 != v3) {
            unsigned int* ptr12 = param1;
            param2 = (int*)((int)param2 - (int)ptr7);
            *(ptr12 - 1) = (int*)((char*)ptr7 + 1);
            unsigned int* ptr13 = (unsigned int*)((int*)((int)ptr12 + (int)ptr7) - 1);
            int* ptr14 = (int*)((char*)((int)param2 >> 4) - 1);
            param1 = ptr13;
            *(ptr13 - 1) = (int*)((char*)ptr7 + 1);
            if((unsigned int)ptr14 > 63) {
                ptr2 = (int*)0x3F;
                ptr14 = (int*)0x3F;
            }
            if(!((unsigned char)ptr11 & 0x1)) {
                int* ptr15 = (int*)((char*)((int)ptr11 >> 4) - 1);
                if((unsigned int)ptr15 > 63) {
                    ptr2 = (int*)0x3F;
                    ptr15 = (int*)0x3F;
                }
                if(*(int*)(ptr9 + 1) == *(int*)(ptr9 + 2)) {
                    if((unsigned int)ptr15 < 32) {
                        char* ptr16 = (char*)((int*)((int)ptr4 + (int)ptr15) + 1);
                        *((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 17) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr15 & 0x1f)) & *((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 17);
                        *ptr16 = *ptr16 + 0xFF;
                        if(!*ptr16) {
                            *param0 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr15 & 0x1f)) & *param0;
                        }
                    }
                    else {
                        char* ptr17 = (char*)((int*)((int)ptr4 + (int)ptr15) + 1);
                        *((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 49) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr15 - 8) & 0x1f)) & *((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 49);
                        *ptr17 = *ptr17 + 0xFF;
                        if(!*ptr17) {
                            *(int*)(param0 + 1) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr15 - 8) & 0x1f)) & *(int*)(param0 + 1);
                        }
                    }
                    ptr13 = param1;
                }
                *(int*)(*(int*)(ptr9 + 2) + 4) = *(int*)(ptr9 + 1);
                *(int*)(*(int*)(ptr9 + 1) + 8) = *(int*)(ptr9 + 2);
                int* ptr18 = (int*)((int)ptr11 + (int)param2);
                param2 = (int*)((int)ptr11 + (int)param2);
                ptr14 = (int*)((char*)((int)ptr18 >> 4) - 1);
                if((unsigned int)ptr14 > 63) {
                    ptr2 = (int*)0x3F;
                    ptr14 = (int*)0x3F;
                }
            }
            int* ptr19 = (int*)((int)(int*)((int)ptr14 * 8) + (int)ptr6);
            int v4 = *(ptr19 + 1);
            *(ptr13 + 2) = ptr19;
            *(int*)(ptr13 + 1) = v4;
            *(unsigned int*)(ptr19 + 1) = ptr13;
            *(unsigned int*)(*(int*)(ptr13 + 1) + 8) = ptr13;
            ptr8 = *(ptr13 + 1);
            if(*(int*)(ptr13 + 2) == ptr8) {
                ptr8 = (unsigned int)*(char*)((int*)((int)ptr4 + (int)ptr14) + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr8 >>> 8) & 0xffffff) << 8);
                (unsigned int*)((param1 >>> 24) & 0xFF) = (unsigned char)ptr8;
                *(char*)((int*)((int)ptr4 + (int)ptr14) + 1) = (unsigned char)ptr8 + 1;
                if((unsigned int)ptr14 < 32) {
                    if(!(unsigned char)(int*)((int)param1 >>> 24)) {
                        *param0 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr14 & 0x1f)) | *param0);
                    }
                    ptr3 = (unsigned int*)((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 17);
                    ptr8 = ptr14;
                }
                else {
                    if(!(unsigned char)(int*)((int)param1 >>> 24)) {
                        *(param0 + 1) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr14 - 8) & 0x1f)) | *(int*)(param0 + 1));
                    }
                    ptr3 = (unsigned int*)((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 49);
                    ptr8 = ptr14 - 8;
                }
                *ptr3 = (int*)((int)(unsigned int*)(0x80000000 >>> (int)(int*)((int)ptr8 & 0x1f)) | *ptr3);
            }
            *ptr13 = param2;
            *(unsigned int*)((int*)((int)ptr13 + (int)param2) - 1) = param2;
        }
    loc_40655E:
        result = 1;
    }
    else if(!((unsigned char)ptr10 & 0x1) && (int)(int*)((int)ptr8 + (int)ptr10) >= (int)ptr7) {
        int* ptr20 = (int*)((char*)((int)ptr11 >> 4) - 1);
        int* ptr21 = (int*)((char*)((int)ptr11 >> 4) - 1);
        if((unsigned int)ptr20 > 63) {
            ptr2 = (int*)0x3F;
            ptr20 = (int*)0x3F;
            ptr21 = (int*)0x3F;
        }
        if(*(int*)(ptr9 + 1) == *(int*)(ptr9 + 2)) {
            if((unsigned int)ptr20 < 32) {
                char* ptr22 = (char*)((int*)((int)ptr4 + (int)ptr21) + 1);
                *((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 17) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr20 & 0x1f)) & *((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 17);
                *ptr22 = *ptr22 + 0xFF;
                if(!*ptr22) {
                    *param0 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr20 & 0x1f)) & *param0;
                }
            }
            else {
                char* ptr23 = (char*)((int*)((int)ptr4 + (int)ptr21) + 1);
                *((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 49) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr20 - 8) & 0x1f)) & *((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 49);
                *ptr23 = *ptr23 + 0xFF;
                if(!*ptr23) {
                    *(int*)(param0 + 1) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr20 - 8) & 0x1f)) & *(int*)(param0 + 1);
                }
            }
        }
        *(int*)(*(int*)(ptr9 + 2) + 4) = *(int*)(ptr9 + 1);
        *(int*)(*(int*)(ptr9 + 1) + 8) = *(int*)(ptr9 + 2);
        ptr11 = (int*)((int)(int*)((int)param2 - (int)ptr7) + (int)ptr11);
        if((int)ptr11 > 0) {
            int* ptr24 = (int*)((char*)((int)ptr11 >> 4) - 1);
            int* ptr25 = (int*)((int)ptr7 + (int)param1) - 1;
            if((unsigned int)ptr24 > 63) {
                ptr2 = (int*)0x3F;
                ptr24 = (int*)0x3F;
            }
            int* ptr26 = (int*)((int)(int*)((int)ptr24 * 8) + (int)ptr6);
            param2 = (int*)((int)(int*)((int)ptr24 * 8) + (int)ptr6);
            *(ptr25 + 1) = *(ptr26 + 1);
            *(unsigned int*)(ptr25 + 2) = param2;
            *(unsigned int*)(param2 + 1) = ptr25;
            *(unsigned int*)(*(ptr25 + 1) + 8) = ptr25;
            if(*(ptr25 + 1) == *(ptr25 + 2)) {
                ptr25 = (unsigned int)*(char*)((int*)((int)ptr4 + (int)ptr24) + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr25 >>> 8) & 0xffffff) << 8);
                (int*)((param2 >>> 24) & 0xFF) = (unsigned char)ptr25;
                *(char*)((int*)((int)ptr4 + (int)ptr24) + 1) = (unsigned char)ptr25 + 1;
                if((unsigned int)ptr24 < 32) {
                    if(!(unsigned char)(int*)((int)param2 >>> 24)) {
                        *param0 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr24 & 0x1f)) | *param0);
                    }
                    ptr1 = (unsigned int*)((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 17);
                    ptr0 = ptr24;
                }
                else {
                    if(!(unsigned char)(int*)((int)param2 >>> 24)) {
                        *(param0 + 1) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr24 - 8) & 0x1f)) | *(int*)(param0 + 1));
                    }
                    ptr1 = (unsigned int*)((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 49);
                    ptr0 = ptr24 - 8;
                }
                *ptr1 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr0 & 0x1f)) | *ptr1);
            }
            ptr5 = param1;
            unsigned int* ptr27 = (unsigned int*)((int*)((int)ptr5 + (int)ptr7) - 1);
            *ptr27 = ptr11;
            *(unsigned int*)((int*)((int)ptr27 + (int)ptr11) - 1) = ptr11;
        }
        else {
            ptr5 = param1;
        }
        *(ptr5 - 1) = (int*)((char*)ptr7 + 1);
        *(unsigned int*)((int*)((int)ptr5 + (int)ptr7) - 2) = (int*)((char*)ptr7 + 1);
        goto loc_40655E;
    }
    else {
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_406564(int i) {
    int v0;
    int* result;
    int v1;
    int* ptr0;
    int v2;
    int v3;
    unsigned int v4 = gvar_40BC7C;
    int v5 = gvar_40BC80;
    int v6 = v2;
    int v7 = (i + 23) & 0xfffffff0;
    unsigned int v8 = (unsigned int)(v4 * 20 + v5);
    unsigned int v9 = (unsigned int)(v4 * 20 + v5);
    if((((i + 23) & 0xfffffff0) >> 4) - 1 < 32) {
        ptr0 = (int*)(-1 >>> (((((i + 23) & 0xfffffff0) >> 4) - 1) & 0x1f));
        v1 = -1;
    }
    else {
        ptr0 = NULL;
        v1 = -1 >>> (((((i + 23) & 0xfffffff0) >> 4) - 33) & 0x1f);
    }
    int v10 = gvar_40BC88;
    int v11 = gvar_40BC88;
    int* ptr1 = ptr0;
    char v12 = (unsigned int)v11 < v8;
    for(i = v11; v12 && !(int*)((*(int*)(v11 + 4) & v1) | (int)(int*)(*(int*)v11 & (int)ptr0)); i = v11) {
        v11 += 20;
        v12 = (unsigned int)v11 < v9;
    }
    if(v11 == v9) {
        v11 = v5;
        for(i = v11; (unsigned int)v10 > (unsigned int)v11 && !(int*)((*(int*)(v11 + 4) & v1) | (int)(int*)(*(int*)v11 & (int)ptr0)); i = v11) {
            v11 += 20;
        }
        if(v10 != v11) {
            goto loc_4065FE;
        }
        else {
            while((unsigned int)v11 < v9 && !*(int*)(v11 + 8)) {
                v11 += 20;
                i = v11;
            }
            if(v11 == v9) {
                v11 = v5;
                for(i = v11; (unsigned int)v10 > (unsigned int)v11 && !*(int*)(v11 + 8); i = v11) {
                    v11 += 20;
                }
                if(v10 == v11) {
                    v11 = sub_4060C8();
                    i = v11;
                    if(!v11) {
                        goto loc_4066DA;
                    }
                }
            }
            int v13 = sub_40617F(v11);
            **(int**)(v11 + 16) = v13;
            if(**(unsigned int*)(v11 + 16) != -1) {
                goto loc_4065FE;
            }
            else {
            loc_4066DA:
                result = NULL;
            }
        }
    }
    else {
    loc_4065FE:
        gvar_40BC88 = v11;
        unsigned int* ptr2 = *(unsigned int*)(v11 + 16);
        unsigned int v14 = *ptr2;
        v9 = *ptr2;
        if(v14 == -1 || !(int*)((*((int*)(v14 * 4 + (int)ptr2) + 49) & v1) | (int)(int*)(*((int*)(v14 * 4 + (int)ptr2) + 17) & (int)ptr0))) {
            int v15 = *(int*)(ptr2 + 49) & v1;
            v9 = 0;
            int* ptr3 = (int*)(ptr2 + 17);
            ptr0 = ptr1;
            if(!(int*)((int)(int*)(*ptr3 & (int)ptr1) | v15)) {
                do {
                    v3 = *(ptr3 + 33) & v1;
                    ++v9;
                    ++ptr3;
                }
                while(!(int*)((int)(int*)(*ptr3 & (int)ptr0) | v3));
            }
            v14 = v9;
        }
        ptr1 = (int*)(v14 * 516 + (int)ptr2) + 81;
        void* ptr4 = NULL;
        int* ptr5 = (int*)(*((int*)(v14 * 4 + (int)ptr2) + 17) & (int)ptr0);
        if(!ptr5) {
            ptr5 = (int*)(*((int*)(v14 * 4 + (int)ptr2) + 49) & v1);
            ptr4 = (void*)0x20;
        }
        while((int)ptr5 >= 0) {
            ptr5 = (int*)((int)ptr5 * 2);
            ptr4 = (void*)((int)ptr4 + 1);
        }
        int* ptr6 = *(unsigned int*)((int*)((int)(int*)((int)ptr4 * 8) + (int)ptr1) + 1);
        int v16 = *ptr6 - v7;
        void* ptr7 = (void*)((v16 >> 4) - 1);
        v1 = v16;
        if((int)ptr7 > 63) {
            ptr7 = (void*)0x3F;
        }
        if(ptr7 != ptr4) {
            if(*(ptr6 + 1) == *(ptr6 + 2)) {
                if((int)ptr4 < 32) {
                    char* ptr8 = (char*)((int*)((int)ptr2 + (int)ptr4) + 1);
                    v0 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr4 & 0x1f));
                    *((int*)(v9 * 4 + (int)ptr2) + 17) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr4 & 0x1f)) & *((int*)(v9 * 4 + (int)ptr2) + 17);
                    *ptr8 = *ptr8 + 0xFF;
                    if(*ptr8) {
                        goto loc_40676E;
                    }
                    else {
                        v11 = i;
                        *(int*)v11 = *(int*)v11 & v0;
                    }
                }
                else {
                    int* ptr9 = (int*)(v9 * 4 + (int)ptr2) + 49;
                    char* ptr10 = (char*)((int*)((int)ptr2 + (int)ptr4) + 1);
                    *ptr9 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)((int)ptr4 - 32) & 0x1f)) & *ptr9;
                    *ptr10 = *ptr10 + 0xFF;
                    char v17 = *ptr10 ? 0: 1;
                    v0 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)((int)ptr4 - 32) & 0x1f));
                    if(v17) {
                        v11 = i;
                        *(int*)(v11 + 4) = *(int*)(v11 + 4) & v0;
                    }
                    else {
                    loc_40676E:
                        v11 = i;
                    }
                }
            }
            *(int*)(*(ptr6 + 2) + 4) = *(ptr6 + 1);
            *(int*)(*(ptr6 + 1) + 8) = *(ptr6 + 2);
            if(v1) {
                int* ptr11 = (int*)((int)(int*)((int)ptr7 * 8) + (int)ptr1);
                int v18 = *(ptr11 + 1);
                *(unsigned int*)(ptr6 + 2) = ptr11;
                *(ptr6 + 1) = v18;
                *(unsigned int*)(ptr11 + 1) = ptr6;
                *(unsigned int*)(*(ptr6 + 1) + 8) = ptr6;
                int v19 = *(ptr6 + 1);
                if(*(ptr6 + 2) == v19) {
                    v19 = (unsigned int)*(char*)((int*)((int)ptr2 + (int)ptr7) + 1) | ((unsigned int)((v19 >>> 8) & 0xffffff) << 8);
                    (i >>> 24) & 0xFF = (unsigned char)v19;
                    *(char*)((int*)((int)ptr2 + (int)ptr7) + 1) = (unsigned char)v19 + 1;
                    if((int)ptr7 < 32) {
                        if(!(unsigned char)(i >>> 24)) {
                            *(int**)v11 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr7 & 0x1f)) | *(int*)v11);
                        }
                        *(unsigned int*)((int*)(v9 * 4 + (int)ptr2) + 17) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr7 & 0x1f)) | *((int*)(v9 * 4 + (int)ptr2) + 17));
                    }
                    else {
                        if(!(unsigned char)(i >>> 24)) {
                            *(unsigned int*)(v11 + 4) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)((int)ptr7 - 32) & 0x1f)) | *(int*)(v11 + 4));
                        }
                        unsigned int* ptr12 = (unsigned int*)((int*)(v9 * 4 + (int)ptr2) + 49);
                        *ptr12 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)((int)ptr7 - 32) & 0x1f)) | *ptr12);
                    }
                }
                v16 = v1;
                goto loc_406810;
            }
            else {
                v16 = 0;
            }
        }
        else {
        loc_406810:
            if(v16) {
                *ptr6 = v16;
                *((int*)(v16 + (int)ptr6) - 1) = v16;
            }
        }
        int* ptr13 = (int*)(v16 + (int)ptr6);
        *ptr13 = v7 + 1;
        *((int*)((int)ptr13 + v7) - 1) = v7 + 1;
        int v20 = *ptr1;
        *ptr1 = v20 + 1;
        if(!v20 && gvar_40BC78 == v11 && gvar_40BC90 == v9) {
            gvar_40BC78 = 0;
        }
        *ptr2 = v9;
        result = ptr13 + 1;
    }
    return result;
}

int sub_406880(int param0, int param1, int param2, int* param3) {
    int result;
    if((*(int*)(param0 + 4) & 0x6)) {
        result = param1;
        *param3 = param1;
    }
    return result;
}

int sub_4068A2(int param0, int param1) {
    int result;
    int v0 = param0;
    int v1 = -2;
    int v2 = &sub_406880;
    int v3 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v3;
    while(1) {
        int v4 = *(int*)(param0 + 8);
        int v5 = *(int*)(param0 + 12);
        if(v5 == -1 || v5 == param1) {
            break;
        }
        else {
            int v6 = *(int*)(v5 * 12 + v4);
            v1 = *(int*)(v5 * 12 + v4);
            *(int*)(param0 + 12) = v6;
            if(!*(int*)(v5 * 12 + v4 + 4)) {
                sub_406936(v6, 0x101);
                *(int*)(v5 * 12 + v4 + 8)();
            }
        }
    }
    *(int*)__FS_BASE = v3;
    return result;
}

unsigned int sub_40692D(unsigned int param0, int param1) {
    unsigned int v0;
    unsigned int result;
    gvar_40B5E8 = param0;
    gvar_40B5E4 = result;
    gvar_40B5EC = v0;
    return result;
}

unsigned int sub_406936(int param0, int param1) {
    unsigned int v0;
    unsigned int result;
    gvar_40B5E8 = *(unsigned int*)(v0 + 8);
    gvar_40B5E4 = result;
    gvar_40B5EC = v0;
    return result;
}

int sub_40694E(LONG param0) {
    int result;
    int result;
    char v0;
    short* ptr0;
    char v1;
    int v2;
    LONG v3 = param0;
    LPCVOID lpAddress = *(LPCVOID*)(v3 + 8);
    if(!((unsigned char)lpAddress & 0x3)) {
        param0 = *(LONG*)(__FS_BASE + (int)(LONG*)0x18);
        short* ptr1 = *(unsigned int*)(param0 + 8);
        short* ptr2 = *(unsigned int*)(param0 + 8);
        if((unsigned int)ptr1 <= (unsigned int)lpAddress && *(unsigned int*)(param0 + 4) > (unsigned int)lpAddress) {
            result = 0;
        }
        else {
            unsigned int v4 = *(unsigned int*)(v3 + 12);
            if(v4 != -1) {
                int* ptr3 = NULL;
                param0 = 0;
                LPCVOID v5 = lpAddress;
                do {
                    ptr1 = *(short**)v5;
                    if(ptr1 != -1 && (unsigned int)ptr1 >= (unsigned int)ptr3) {
                        return 0;
                    }
                    if(*(int*)((int)v5 + 4)) {
                        ++param0;
                    }
                    ptr3 = (int*)((char*)ptr3 + 1);
                    v5 = (LPCVOID)((int)v5 + 12);
                }
                while((unsigned int)ptr3 <= v4);
                if(param0) {
                    v5 = *(LPCVOID*)(v3 - 8);
                    if((unsigned int)v5 < (unsigned int)ptr2 || (unsigned int)v5 >= (unsigned int)v3) {
                        return 0;
                    }
                }
                LONG v6 = gvar_40BBF8;
                int* ptr4 = (int*)((int)lpAddress & 0xfffff000);
                int v7 = 0;
                if(v6 <= 0) {
                loc_406A01:
                    SIZE_T v8 = VirtualQuery(lpAddress, &v1, 28);
                    if(!v8 || v2 != 0x1000000) {
                        return -1;
                    }
                    if((v0 & 0xcc)) {
                        if(*ptr0 != 23117) {
                            return -1;
                        }
                        v8 = (SIZE_T)(*(int*)(ptr0 + 30) + (int)ptr0);
                        if(*(int*)v8 != 0x4550 || *(short*)(v8 + 24) != 267) {
                            return -1;
                        }
                        int* ptr5 = (int*)((int)lpAddress - (int)ptr0);
                        ptr1 = (short*)((unsigned int)*(short*)(v8 + 20) + v8 + 24);
                        if(*(unsigned short*)(v8 + 6) < 0 || (*(short*)(v8 + 6) ? 0: 1)) {
                            return -1;
                        }
                        v5 = *(LPCVOID*)(ptr1 + 6);
                        if((unsigned int)v5 <= (unsigned int)ptr5 && (int*)(*(int*)(ptr1 + 4) + (int)v5) > ptr5 && (*(char*)((char*)ptr1 + 39) & 0x80)) {
                            return 0;
                        }
                    }
                    v6 = InterlockedExchange((LONG*)0x40BC40, 1);
                    if(!v6) {
                        int v9 = gvar_40BBF8;
                        int v10 = gvar_40BBF8;
                        if(v9 > 0) {
                            int* ptr6 = (int*)(v9 * 4 + &gvar_40BBFC);
                            while(*ptr6 != ptr4) {
                                --v10;
                                --ptr6;
                                if(v10 <= 0) {
                                    break;
                                }
                            }
                        }
                        if(!v10) {
                            int v11 = 0xF;
                            int v12 = 0;
                            if((v9 > 0xF ? 0xF: v9) >= 0) {
                                do {
                                    unsigned int* ptr7 = (unsigned int*)(v12 * 4 + &gvar_40BC00);
                                    int* ptr8 = *ptr7;
                                    ++v12;
                                    *ptr7 = ptr4;
                                    ptr4 = ptr8;
                                }
                                while((v9 > 0xF ? 0xF: v9) >= v12);
                            }
                            if(v9 < 16) {
                                gvar_40BBF8 = (unsigned int)(v9 + 1);
                            }
                        }
                        InterlockedExchange((LONG*)0x40BC40, 0);
                    }
                    return 1;
                }
                while(*(unsigned int*)(v7 * 4 + (int)&gvar_40BC00) != ptr4) {
                    ++v7;
                    if(v6 <= v7) {
                        goto loc_406A01;
                    }
                }
                if(v7 > 0) {
                    v6 = InterlockedExchange((LONG*)0x40BC40, 1);
                    if(!v6) {
                        if(*(unsigned int*)(v7 * 4 + (int)&gvar_40BC00) != ptr4) {
                            int v13 = gvar_40BBF8;
                            v7 = v13 - 1;
                            if(v7 >= 0) {
                                while(*(unsigned int*)(v7 * 4 + (int)&gvar_40BC00) != ptr4) {
                                    --v7;
                                    if(v7 < 0) {
                                        break;
                                    }
                                }
                                char v14 = v7 ? 0: 1;
                                if(v7 < 0) {
                                    goto loc_406B3A;
                                }
                                else if(!v14) {
                                    goto loc_406B49;
                                }
                            }
                            else {
                            loc_406B3A:
                                if(v13 < 16) {
                                    ++v13;
                                    gvar_40BBF8 = v13;
                                }
                                v7 = v13 - 1;
                                goto loc_406B49;
                            }
                        }
                        else {
                        loc_406B49:
                            int v15 = 0;
                            if(v7 >= 0) {
                                do {
                                    unsigned int* ptr9 = (unsigned int*)(v15 * 4 + &gvar_40BC00);
                                    int* ptr10 = *ptr9;
                                    ++v15;
                                    *ptr9 = ptr4;
                                    ptr4 = ptr10;
                                }
                                while(v15 <= v7);
                            }
                        }
                        InterlockedExchange((LONG*)0x40BC40, 0);
                    }
                }
            }
            result = 1;
        }
    }
    else {
        result = 0;
    }
    return result;
}

int sub_406B77(int param0) {
    unsigned int v0 = gvar_40BC44;
    if(v0) {
        v0 = (unsigned int)v0(param0);
        if(v0) {
            return 1;
        }
    }
    return 0;
}

int sub_406B92(unsigned int param0, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite1) {
    int v0;
    int v1;
    char v2;
    char v3 = gvar_40BEC8 > param0;
    unsigned int v4 = gvar_40B498;
    int v5 = v1;
    int v6 = (int)v4;
    if(v3) {
        unsigned int* ptr0 = (unsigned int*)((param0 >> 5) * 4 + &gvar_40BEE0);
        v4 = *ptr0;
        int v7 = (param0 & 0x1f) * 8;
        v4 = (unsigned int)*(char*)(v4 + v7 + 4) | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
        unsigned int* ptr1 = ptr0;
        if(!((unsigned char)v4 & 0x1)) {
            gvar_40BA54 = 0;
            gvar_40BA50 = 9;
            return sub_4041A2(v6);
        }
        int v8 = 0;
        int v9 = 0;
        int v10 = 0;
        if(nNumberOfBytesToWrite1 != 0) {
            if(((unsigned char)v4 & 0x20)) {
                sub_4082D7((int)param0, 0, 0, 2);
            }
            HANDLE* ptr2 = (HANDLE*)(*ptr0 + v7);
            if((*(char*)&ptr2[1] & 0x80)) {
                LPCVOID v11 = lpBuffer;
                param0 = 0;
                if(nNumberOfBytesToWrite1 <= 0) {
                    goto loc_406D30;
                }
                else {
                    do {
                        int* ptr3 = (int*)((int)v11 - (int)lpBuffer);
                        LPCVOID v12 = &v2;
                        while((unsigned int)ptr3 < nNumberOfBytesToWrite1) {
                            LPCVOID v13 = v11;
                            v11 = (LPCVOID)((int)v11 + 1);
                            v13 = (unsigned int)*(char*)v13 | ((unsigned int)(int*)((int)(int*)((int)v13 >>> 8) & 0xffffff) << 8);
                            ptr3 = (int*)((char*)ptr3 + 1);
                            if((unsigned char)v13 == 10) {
                                ++v10;
                                *(char*)v12 = 13;
                                v12 = (LPCVOID)((int)v12 + 1);
                                ++v8;
                            }
                            ptr0 = ptr1;
                            *(char*)v12 = (unsigned char)v13;
                            v12 = (LPCVOID)((int)v12 + 1);
                            ++v8;
                            if(v8 >= 0x400) {
                                break;
                            }
                        }
                        DWORD nNumberOfBytesToWrite = (DWORD)((int)v12 - (int)&v2);
                        BOOL v14 = WriteFile(*(HANDLE*)(*ptr0 + v7), &v2, nNumberOfBytesToWrite, &v0, NULL);
                        if(!v14) {
                            param0 = (unsigned int)GetLastError();
                            break;
                        }
                        else {
                            v9 += v0;
                            if((int)nNumberOfBytesToWrite > v0) {
                                break;
                            }
                            else {
                                v8 = 0;
                            }
                        }
                    }
                    while((unsigned int)(int*)((int)v11 - (int)lpBuffer) < nNumberOfBytesToWrite1);
                }
            }
            else {
                BOOL v15 = WriteFile(ptr2[0], lpBuffer, nNumberOfBytesToWrite1, &v0, NULL);
                if(v15) {
                    param0 = 0;
                    v9 = v0;
                }
                else {
                    param0 = (unsigned int)GetLastError();
                }
            }
            if(v9 == 0) {
                switch(param0) {
                    case 0: {
                    loc_406D30:
                        if(!(*(char*)(*ptr0 + v7 + 4) & 0x40) || *(char*)lpBuffer != 26) {
                            gvar_40BA50 = 28;
                            gvar_40BA54 = 0;
                        }
                        break;
                    }
                    case 5: {
                        gvar_40BA54 = 5;
                        gvar_40BA50 = 9;
                        return sub_4041A2(v6);
                    }
                    default: {
                        sub_408278(param0);
                        break;
                    }
                }
            }
        }
    }
    else {
        gvar_40BA54 = 0;
        gvar_40BA50 = 9;
    }
    return sub_4041A2(v6);
}

int* sub_406D82(int* param0) {
    int* result;
    if(gvar_40BEC8 > (unsigned int)param0 && (*(char*)((int*)((int)(int*)((int)(int*)((int)param0 & 0x1f) * 8) + *(unsigned int*)((int)(int*)((int)(int*)((int)param0 >> 5) * 4) + (int)&gvar_40BEE0)) + 1) & 0x1)) {
        int v0 = sub_4083F0(param0);
        BOOL v1 = FlushFileBuffers((HANDLE)v0);
        result = !v1 ? (int*)GetLastError(): NULL;
        if(result) {
            gvar_40BA54 = result;
            gvar_40BA50 = 9;
            return (int*)0xFFFFFFFF;
        }
    }
    else {
        gvar_40BA50 = 9;
        result = (int*)0xFFFFFFFF;
    }
    return result;
}

DWORD sub_406DD9(int* param0, LONG lDistanceToMove, DWORD dwMoveMethod) {
    DWORD result;
    int v0;
    char v1 = gvar_40BEC8 > (unsigned int)param0;
    int v2 = v0;
    if(v1 && (*(char*)((int*)((int)(int*)((int)(int*)((int)param0 & 0x1f) * 8) + (int)*(void**)((int)(int*)((int)(int*)((int)param0 >> 5) * 4) + (int)&gvar_40BEE0)) + 1) & 0x1)) {
        int* hFile = (int*)sub_4083F0(param0);
        if(hFile == -1) {
            gvar_40BA50 = 9;
            return 0xffffffff;
        }
        DWORD v3 = SetFilePointer(hFile, lDistanceToMove, NULL, dwMoveMethod);
        DWORD v4 = v3 == -1 ? GetLastError(): 0;
        if(v4) {
            sub_408278((unsigned int)v4);
            return 0xffffffff;
        }
        char* ptr0 = (char*)((int*)((int)(int*)((int)(int*)((int)param0 & 0x1f) * 8) + *(unsigned int*)((int)(int*)((int)(int*)((int)param0 >> 5) * 4) + (int)&gvar_40BEE0)) + 1);
        *ptr0 = *ptr0 & 0xfd;
        result = v3;
    }
    else {
        gvar_40BA54 = 0;
        gvar_40BA50 = 9;
        result = 0xffffffff;
    }
    return result;
}

int sub_406E65(int* param0) {
    ++gvar_40BA3C;
    int v0 = sub_403DDF(0x1000);
    int* ptr0 = param0;
    *(ptr0 + 2) = v0;
    if(v0) {
        *(ptr0 + 3) = *(ptr0 + 3) | 0x8;
        *(ptr0 + 6) = 0x1000;
    }
    else {
        *(ptr0 + 3) = *(ptr0 + 3) | 0x4;
        *(unsigned int*)(ptr0 + 2) = ptr0 + 5;
        *(ptr0 + 6) = 2;
    }
    int result = *(ptr0 + 2);
    *(ptr0 + 1) = 0;
    *ptr0 = result;
    return result;
}

unsigned int sub_406EA9() {
    int v0;
    int v1;
    int v2;
    int v3;
    unsigned int result = gvar_40B498;
    if(!result || result == -1153374642) {
        GetSystemTimeAsFileTime(&v0);
        int v4 = v0 ^ v1;
        DWORD v5 = /*BAD_CALL!*/ GetCurrentProcessId();
        DWORD v6 = /*BAD_CALL!*/ GetCurrentThreadId();
        DWORD v7 = GetTickCount();
        int v8 = ((v5 ^ v4) ^ v6) ^ v7;
        QueryPerformanceCounter(&v2);
        result = (unsigned int)(v2 ^ v3);
        gvar_40B498 = result ^ v8;
        if(!(result ^ v8)) {
            gvar_40B498 = 3141592654;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_406F0F(int param0, int param1) {
    char* _Source1;
    char* _Source;
    char v0;
    int v1;
    int v2;
    char* ptr0;
    int v3 = &gvar_409D30;
    char* ptr1 = ptr0;
    unsigned int v4 = gvar_40B498;
    unsigned int v5 = gvar_40BC6C;
    if(v5 != 0) {
        v3 = 0;  // __try{ (see __except:406F4Bh)
        v5(param0, param1);
    }
    else {
        if((param0 - 1)) {
            _Source = "Unknown security failure detected!";
            _Source1 = "A security error of unknown cause has been detected which has\ncorrupted the program\'s internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n";
        }
        else {
            _Source = "Buffer overrun detected!";
            _Source1 = "A buffer overrun has been detected which has corrupted the program\'s\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n";
        }
        char v6 = 0;
        DWORD v7 = GetModuleFileNameA(NULL, &v0, 260);
        if(!v7) {
            strcpy((char*)&v0, "<program name unknown>");
        }
        size_t v8 = strlen((char*)&v0);
        if((unsigned int)(v8 + 11) > 60) {
            size_t v9 = strlen((char*)&v0);
            strncpy((char*)(v9 + (int)&v2) + 3, (char*)&gvar_4095C8, 3);
        }
        strlen((char*)&v0);
        sub_403D30();
        char* ptr2 = &v1;
        strcpy(&v1, _Source);
        strcat(&v1, (char*)&gvar_4095A8);
        strcat(&v1, "Program: ");
        strcat(&v1, (char*)&v0);
        strcat(&v1, (char*)&gvar_4095A8);
        strcat(&v1, _Source1);
        sub_4053EA((int)&v1, "Microsoft Visual C++ Runtime Library", 0x12010);
    }
    sub_4031EB(3);
    int3();
}

int sub_406F47() {
    return 1;
}

int sub_406F4B() {
    int v0;
    *(int*)(v0 - 4) = -1;
    sub_4031EB(3);
    int3();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_407057(int* param0) {
    int result;
    int* ptr0 = param0;
    char v0 = (unsigned char)ptr0[3];
    int v1 = -1;
    if((v0 & 0x40)) {
        result = -1;
    }
    else {
        if((v0 & 0x83)) {
            v1 = sub_403E18(ptr0);
            sub_4084DF(ptr0);
            int v2 = sub_40842C(ptr0[4]);
            if(v2 < 0) {
                v1 = -1;
            }
            else {
                int v3 = ptr0[7];
                if(v3) {
                    sub_40403C(v3);
                    ptr0[7] = 0;
                }
            }
        }
        result = v1;
    }
    ptr0[3] = 0;
    return result;
}

BOOL sub_4070AD(DWORD dwInfoType, LPCCH lpSrcStr, int cchSrc, LPWORD lpCharType, UINT CodePage1, LCID param5, int param6) {
    BOOL result;
    char v0;
    int v1;
    int v2;
    int v3;
    int v4 = &gvar_409D40;
    int v5 = v2;
    int v6 = 0;
    if(gvar_40BC70 == 0) {
        BOOL v7 = GetStringTypeW(1, (LPCWCH)0x409D3C, 1, &v0);
        if(v7) {
            gvar_40BC70 = 1;
        }
        else {
            DWORD v8 = GetLastError();
            if(v8 == 120) {
                gvar_40BC70 = 2;
            }
        }
    }
    int v9 = gvar_40BC70;
    if((v9 == 2 || v9 == 0)) {
        LCID Locale = param5;
        if(Locale == 0) {
            Locale = gvar_40BC54;
        }
        UINT CodePage = CodePage1;
        if(!CodePage) {
            CodePage = gvar_40BC64;
        }
        v9 = sub_40850A(Locale);
        if(v9 == -1) {
            goto loc_407216;
        }
        if(v9 != CodePage) {
            v6 = sub_40854D(CodePage, (UINT)v9, (char*)lpSrcStr, &cchSrc, NULL, 0);
            if(v6) {
                lpSrcStr = (LPCCH)v6;
                goto loc_407249;
            }
            else {
            loc_407216:
                result = 0;
            }
        }
        else {
        loc_407249:
            BOOL v10 = GetStringTypeA(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
            if(v6) {
                sub_40403C(v6);
            }
            result = v10;
        }
    }
    else if(v9 != 1) {
        goto loc_407216;
    }
    else {
        BOOL v11 = 0;
        int v12 = 0;
        if(CodePage1 == 0) {
            CodePage1 = gvar_40BC64;
        }
        int cchWideChar = MultiByteToWideChar(CodePage1, (DWORD)((param6 == 0 ? 0: 1) * 8 + 1), lpSrcStr, cchSrc, NULL, 0);
        if(!cchWideChar) {
            goto loc_407216;
        }
        else {
            v4 = 0;  // __try{ (see __except:40718Ah)
            sub_403D30();
            char* ptr0 = &v3;
            char* ptr1 = &v3;
            sub_4045E0(&v3, 0, (int*)(cchWideChar * 2));
            v4 = -1;  // } (starts at 407158h)
            if(&v1 == 60) {
                v9 = sub_404245(2, cchWideChar);
                if(!v9) {
                    goto loc_407216;
                }
                else {
                    v12 = 1;
                }
            }
            int cchSrc1 = MultiByteToWideChar(CodePage1, 1, lpSrcStr, cchSrc, (LPWSTR)&v3, cchWideChar);
            if(cchSrc1) {
                v11 = GetStringTypeW(dwInfoType, (LPCWCH)&v3, cchSrc1, lpCharType);
            }
            if(v12) {
                sub_40403C((int)&v3);
            }
            result = v11;
        }
    }
    return result;
}

int sub_407186() {
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40718A(int param0, int param1, int param2) {
    int* ptr0;
    sub_404640();
    *(ptr0 - 1) = -1;
    int cchWideChar = *(ptr0 - 10);
    LPWSTR lpWideCharStr = (LPWSTR)sub_404245(2, cchWideChar);
    if(lpWideCharStr) {
        *(ptr0 - 8) = 1;
        int cchSrc = MultiByteToWideChar(*(UINT*)(ptr0 + 6), 1, *(LPCCH*)(ptr0 + 3), *(ptr0 + 4), lpWideCharStr, cchWideChar);
        if(cchSrc) {
            BOOL v0 = GetStringTypeW(*(DWORD*)(ptr0 + 2), lpWideCharStr, cchSrc, *(LPWORD*)(ptr0 + 5));
            *(BOOL*)(ptr0 - 9) = v0;
        }
        if(*(ptr0 - 8)) {
            /*BAD_CALL!*/ sub_40403C((int)lpWideCharStr);
        }
    }
    jump *(ptr0 + 1);
}

LPVOID sub_407267(int* param0, LPVOID param1, DWORD nNumberOfBytesToRead) {
    LPVOID result;
    int v0;
    char v1;
    if(gvar_40BEC8 > (unsigned int)param0) {
        unsigned int* ptr0 = (unsigned int*)((int*)((int)(int*)((int)param0 >> 5) * 4) + 1060792);
        int* ptr1 = (int*)((int)(int*)((int)param0 & 0x1f) * 8);
        DWORD v2 = (DWORD)(*ptr0 + (int)ptr1);
        char v3 = *(char*)(v2 + 4);
        if(!(v3 & 0x1)) {
            goto loc_40743C;
        }
        else {
            LPVOID v4 = NULL;
            LPVOID v5 = param1;
            LPVOID lpBuffer = param1;
            if(nNumberOfBytesToRead && !(v3 & 0x2)) {
                if((v3 & 0x48) && *(char*)(v2 + 5) != 10) {
                    char v6 = *(char*)((char*)(*ptr0 + (int)ptr1) + 5);
                    --nNumberOfBytesToRead;
                    *(char*)v5 = v6;
                    int v7 = *ptr0;
                    lpBuffer = (LPVOID)((int)v5 + 1);
                    v4 = (LPVOID)0x1;
                    *(char*)((char*)(v7 + (int)ptr1) + 5) = 10;
                }
                LPOVERLAPPED v8 = NULL;
                LPDWORD lpNumberOfBytesRead = &v0;
                DWORD v9 = nNumberOfBytesToRead;
                BOOL v10 = ReadFile(*(HANDLE*)(*ptr0 + (int)ptr1), lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, NULL);
                if(!v10) {
                    v2 = GetLastError();
                    if(v2 == (LPVOID)0x5) {
                        gvar_40BA54 = (LPVOID)0x5;
                        gvar_40BA50 = 9;
                        return (LPVOID)0xFFFFFFFF;
                    }
                    else if(v2 == 109) {
                        goto loc_407312;
                    }
                    else {
                        sub_408278((unsigned int)v2);
                        return (LPVOID)0xFFFFFFFF;
                    }
                }
                else {
                    lpBuffer = *ptr0;
                    v4 = (LPVOID)(v0 + (int)v4);
                    if((*(char*)((int*)((int)lpBuffer + (int)ptr1) + 1) & 0x80)) {
                        if(v0 && *(char*)v5 == 10) {
                            char* ptr2 = (char*)((int*)((int)lpBuffer + (int)ptr1) + 1);
                            *ptr2 = *ptr2 | 0x4;
                        }
                        else {
                            char* ptr3 = (char*)((int*)(*ptr0 + (int)ptr1) + 1);
                            *ptr3 = *ptr3 & 0xfb;
                        }
                        lpBuffer = (LPVOID)((int)v4 + (int)param1);
                        LPVOID v11 = param1;
                        v4 = lpBuffer;
                        if(lpBuffer > param1) {
                            do {
                                char v12 = *(char*)v11;
                                if(v12 != 26) {
                                    if(v12 != 13) {
                                        *(char*)v5 = v12;
                                        v5 = (LPVOID)((int)v5 + 1);
                                        v11 = (LPVOID)((int)v11 + 1);
                                    }
                                    else if((unsigned int)(int*)((int)lpBuffer - 1) > (unsigned int)v11) {
                                        LPVOID v13 = (LPVOID)((int)v11 + 1);
                                        if(*(char*)v13 == 10) {
                                            v11 = (LPVOID)((int)v11 + 2);
                                            *(char*)v5 = 10;
                                            goto loc_407412;
                                        }
                                        else {
                                            v11 = v13;
                                            goto loc_40740F;
                                        }
                                    }
                                    else {
                                        v11 = (LPVOID)((int)v11 + 1);
                                        BOOL v14 = ReadFile(*(HANDLE*)(*ptr0 + (int)ptr1), &v1, 1, &v0, NULL);
                                        if(!v14) {
                                            v8 = (LPOVERLAPPED)&loc_4073C5;
                                            DWORD v15 = GetLastError();
                                            if(v15) {
                                                goto loc_40740F;
                                            }
                                        }
                                        if(v0) {
                                            int v16 = *ptr0;
                                            if((*(char*)((int*)(v16 + (int)ptr1) + 1) & 0x48)) {
                                                v16 = (unsigned int)v1 | ((unsigned int)((v16 >>> 8) & 0xffffff) << 8);
                                                if((unsigned char)v16 == 10) {
                                                    *(char*)v5 = 10;
                                                }
                                                else {
                                                    *(char*)v5 = 13;
                                                    *(char*)((char*)(*ptr0 + (int)ptr1) + 5) = (unsigned char)v16;
                                                }
                                                goto loc_407412;
                                            }
                                            else if(v5 == param1 && v1 == 10) {
                                                *(char*)v5 = 10;
                                                goto loc_407412;
                                            }
                                            else {
                                                sub_406DD9(param0, -1, 1);
                                                if(v1 == 10) {
                                                    goto loc_407413;
                                                }
                                            }
                                        }
                                    loc_40740F:
                                        *(char*)v5 = 13;
                                    loc_407412:
                                        v5 = (LPVOID)((int)v5 + 1);
                                    }
                                loc_407413:
                                    lpBuffer = v4;
                                }
                                else {
                                    int v17 = *ptr0;
                                    if(!(*(char*)((int*)(v17 + (int)ptr1) + 1) & 0x40)) {
                                        char* ptr4 = (char*)((int*)(v17 + (int)ptr1) + 1);
                                        *ptr4 = *ptr4 | 0x2;
                                    }
                                }
                                break;
                            }
                            while(lpBuffer > v11);
                        }
                        v4 = (LPVOID)((int)v5 - (int)param1);
                    }
                    result = v4;
                }
            }
            else {
            loc_407312:
                result = NULL;
            }
        }
    }
    else {
    loc_40743C:
        gvar_40BA54 = 0;
        gvar_40BA50 = 9;
        result = (LPVOID)0xFFFFFFFF;
    }
    return result;
}

int sub_407455(LCID Locale, DWORD dwMapFlags, LPCCH lpSrcStr, int cchSrc, LPWSTR lpDestStr1, int cchDest, UINT CodePage, int param7) {
    int result;
    LPSTR lpMultiByteStr;
    int cbMultiByte;
    LPWSTR lpDestStr;
    char* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = &gvar_409D50;
    int v6 = v4;
    if(gvar_40BC74 == 0) {
        int v7 = LCMapStringW(0, 0x100, (LPCWSTR)0x409D3C, 1, NULL, 0);
        if(v7) {
            gvar_40BC74 = 1;
        }
        else {
            DWORD v8 = GetLastError();
            if(v8 == 120) {
                gvar_40BC74 = 2;
            }
        }
    }
    if(cchSrc > 0) {
        int v9 = cchSrc;
        LPCCH v10 = lpSrcStr;
        do {
            --v9;
            if(v10[0] == 0) {
                goto loc_4074C0;
            }
            else {
                ++v10;
            }
        }
        while(v9 != 0);
        v9 = -1;
    loc_4074C0:
        cchSrc += -1 - v9;
    }
    int v11 = gvar_40BC74;
    if((v11 == 2 || v11 == 0)) {
        LPCSTR lpSrcStr1 = NULL;
        char* ptr1 = NULL;
        int v12 = 0;
        if(Locale == 0) {
            Locale = gvar_40BC54;
        }
        if(CodePage == 0) {
            CodePage = gvar_40BC64;
        }
        v11 = sub_40850A(Locale);
        UINT CodePage1 = (UINT)v11;
        if(v11 == -1) {
            return 0;
        }
        else if(v11 == CodePage) {
            v0 = LCMapStringA(Locale, dwMapFlags, lpSrcStr, cchSrc, (LPSTR)lpDestStr1, cchDest);
            goto loc_4077FB;
        }
        else {
            v11 = sub_40854D(CodePage, (UINT)v11, (char*)lpSrcStr, &cchSrc, NULL, 0);
            lpSrcStr1 = (LPCSTR)v11;
            if(v11 == 0) {
                return 0;
            }
            int v13 = LCMapStringA(Locale, dwMapFlags, (LPCSTR)v11, cchSrc, NULL, 0);
            int cchDest1 = v13;
            if(v13 != 0) {
                v5 = 0;
                sub_403D30();
                ptr0 = &v2;
                ptr1 = &v2;
                char* ptr2 = &v2;
                sub_4045E0(&v2, 0, (int*)v13);
                v5 = -1;
                if(&v1 == 88) {
                    ptr1 = (char*)sub_403DDF(cchDest1);
                    if(ptr1 == 0) {
                        goto loc_4077A6;
                    }
                    else {
                        sub_4045E0(ptr1, 0, (int*)cchDest1);
                        v12 = 1;
                        goto loc_407799;
                    }
                }
                else {
                loc_407799:
                    int v14 = LCMapStringA(Locale, dwMapFlags, lpSrcStr1, cchSrc, (LPSTR)&v2, cchDest1);
                    cchDest1 = v14;
                    if(v14 == 0) {
                    loc_4077A6:
                        v0 = 0;
                    }
                    else {
                        int v15 = sub_40854D(CodePage1, CodePage, &v2, &cchDest1, (LPSTR)lpDestStr1, cchDest);
                        v0 = 0 - ((unsigned int)v15 > 0 ? -1: 0);
                    }
                }
            }
            else {
                v0 = v3;
            }
        }
        if(v12 != 0) {
            sub_40403C((int)ptr1);
        }
    loc_4077FB:
        if(lpSrcStr1 != 0) {
            sub_40403C((int)lpSrcStr1);
        }
        result = v0;
    }
    else if(v11 != 1) {
        result = 0;
    }
    else {
        int cchDest2 = 0;
        int v16 = 0;
        int v17 = 0;
        int v18 = 0;
        if(CodePage == 0) {
            CodePage = gvar_40BC64;
        }
        int cchWideChar = MultiByteToWideChar(CodePage, (DWORD)((param7 == 0 ? 0: 1) * 8 + 1), lpSrcStr, cchSrc, NULL, 0);
        if(cchWideChar == 0) {
            return 0;
        }
        sub_403D30();
        ptr0 = &v2;
        LPWSTR lpWideCharStr = (LPWSTR)&v2;
        v5 = -1;  // } (starts at 407528h)
        if(lpWideCharStr == 0) {
            v11 = sub_403DDF(cchWideChar * 2);
            lpWideCharStr = (LPWSTR)v11;
            if(v11 == 0) {
                return 0;
            }
            v17 = 1;
        }
        int v19 = MultiByteToWideChar(CodePage, 1, lpSrcStr, cchSrc, lpWideCharStr, cchWideChar);
        if(v19) {
            cchDest2 = LCMapStringW(Locale, dwMapFlags, lpWideCharStr, cchWideChar, NULL, 0);
            if(cchDest2 != 0) {
                if(!((unsigned char)(dwMapFlags >>> 8) & 0x4)) {
                    sub_403D30();
                    ptr0 = &v2;
                    lpDestStr = (LPWSTR)&v2;
                    v5 = -1;
                    if(lpDestStr == 0) {
                        int v20 = sub_403DDF(cchDest2 * 2);
                        lpDestStr = (LPWSTR)v20;
                        if(v20 != 0) {
                            v18 = 1;
                            goto loc_40765F;
                        }
                    }
                    else {
                    loc_40765F:
                        int v21 = LCMapStringW(Locale, dwMapFlags, lpWideCharStr, cchWideChar, lpDestStr, cchDest2);
                        if(v21) {
                            if(cchDest == 0) {
                                cbMultiByte = 0;
                                lpMultiByteStr = NULL;
                            }
                            else {
                                cbMultiByte = cchDest;
                                lpMultiByteStr = (LPSTR)lpDestStr1;
                            }
                            cchDest2 = WideCharToMultiByte(CodePage, 0, lpDestStr, cchDest2, lpMultiByteStr, cbMultiByte, NULL, NULL);
                        }
                    }
                }
                else if(cchDest != 0 && cchDest2 <= cchDest) {
                    LCMapStringW(Locale, dwMapFlags, lpWideCharStr, cchWideChar, lpDestStr1, cchDest);
                }
            }
        }
        if(v18 != 0) {
            sub_40403C((int)lpDestStr);
        }
        if(v17 != 0) {
            sub_40403C((int)lpWideCharStr);
        }
        result = cchDest2;
    }
    return result;
}

int sub_40754B() {
    return 1;
}

int sub_40754F(int param0, int param1, int param2) {
    LPSTR lpMultiByteStr;
    int cbMultiByte;
    int* ptr0;
    sub_404640();
    *(ptr0 - 7) = 0;
    *(ptr0 - 1) = -1;
    int cchWideChar = *(ptr0 - 12);
    if(*(ptr0 - 7) == 0) {
        int v0 = sub_403DDF(cchWideChar * 2);
        *(ptr0 - 7) = v0;
        if(v0 != 0) {
            *(ptr0 - 14) = 1;
            goto loc_407596;
        }
    }
    else {
    loc_407596:
        int v1 = MultiByteToWideChar(*(UINT*)(ptr0 + 8), 1, *(LPCCH*)(ptr0 + 4), *(ptr0 + 5), *(LPWSTR*)(ptr0 - 7), cchWideChar);
        if(v1) {
            int cchDest = LCMapStringW(*(LCID*)(ptr0 + 2), *(DWORD*)(ptr0 + 3), *(LPCWSTR*)(ptr0 - 7), cchWideChar, NULL, 0);
            *(ptr0 - 11) = cchDest;
            if(cchDest != 0) {
                if(!(*(char*)((char*)ptr0 + 13) & 0x4)) {
                    *(ptr0 - 1) = 2;  // __try{ (see __except:40761Dh)
                    sub_403D30();
                    *(unsigned int*)(ptr0 - 6) = &param0;
                    *(unsigned int*)(ptr0 - 8) = &param0;
                    *(ptr0 - 1) = -1;  // } (starts at 4075F6h)
                    if(*(ptr0 - 8) == 0) {
                        int v2 = sub_403DDF(cchDest * 2);
                        *(ptr0 - 8) = v2;
                        if(v2 != 0) {
                            *(ptr0 - 13) = 1;
                            goto loc_40765F;
                        }
                    }
                    else {
                    loc_40765F:
                        int v3 = LCMapStringW(*(LCID*)(ptr0 + 2), *(DWORD*)(ptr0 + 3), *(LPCWSTR*)(ptr0 - 7), cchWideChar, *(LPWSTR*)(ptr0 - 8), cchDest);
                        if(v3) {
                            LPCCH v4 = NULL;
                            if(*(ptr0 + 7) == 0) {
                                cbMultiByte = 0;
                                lpMultiByteStr = NULL;
                            }
                            else {
                                cbMultiByte = *(ptr0 + 7);
                                lpMultiByteStr = *(LPSTR*)(ptr0 + 6);
                            }
                            cchDest = WideCharToMultiByte(*(UINT*)(ptr0 + 8), 0, *(LPCWCH*)(ptr0 - 8), cchDest, lpMultiByteStr, cbMultiByte, NULL, NULL);
                        }
                    }
                }
                else if(*(ptr0 + 7) != 0 && *(ptr0 + 7) >= cchDest) {
                    LCMapStringW(*(LCID*)(ptr0 + 2), *(DWORD*)(ptr0 + 3), *(LPCWSTR*)(ptr0 - 7), cchWideChar, *(LPWSTR*)(ptr0 + 6), *(ptr0 + 7));
                }
            }
        }
        if(*(ptr0 - 13) != 0) {
            sub_40403C(*(ptr0 - 8));
        }
        if(*(ptr0 - 14) != 0) {
            /*BAD_CALL!*/ sub_40403C(*(ptr0 - 7));
        }
    }
    jump *(ptr0 + 1);
}

int sub_407619() {
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40761D(int param0, int param1, int param2) {
    LPSTR lpMultiByteStr;
    int cbMultiByte;
    int* ptr0;
    sub_404640();
    *(ptr0 - 8) = 0;
    *(ptr0 - 1) = -1;
    int cchDest = *(ptr0 - 11);
    int cchSrc = *(ptr0 - 12);
    if(*(ptr0 - 8) == 0) {
        int v0 = sub_403DDF(cchDest * 2);
        *(ptr0 - 8) = v0;
        if(v0 != 0) {
            *(ptr0 - 13) = 1;
            goto loc_40765F;
        }
    }
    else {
    loc_40765F:
        int v1 = LCMapStringW(*(LCID*)(ptr0 + 2), *(DWORD*)(ptr0 + 3), *(LPCWSTR*)(ptr0 - 7), cchSrc, *(LPWSTR*)(ptr0 - 8), cchDest);
        if(v1) {
            LPCCH v2 = NULL;
            if(*(ptr0 + 7) == 0) {
                cbMultiByte = 0;
                lpMultiByteStr = NULL;
            }
            else {
                cbMultiByte = *(ptr0 + 7);
                lpMultiByteStr = *(LPSTR*)(ptr0 + 6);
            }
            cchDest = WideCharToMultiByte(*(UINT*)(ptr0 + 8), 0, *(LPCWCH*)(ptr0 - 8), cchDest, lpMultiByteStr, cbMultiByte, NULL, NULL);
        }
    }
    if(*(ptr0 - 13) != 0) {
        sub_40403C(*(ptr0 - 8));
    }
    if(*(ptr0 - 14) != 0) {
        sub_40403C(*(ptr0 - 7));
    }
    jump *(ptr0 + 1);
}

int sub_40774E() {
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_407752(int param0, int param1, int param2) {
    int* ptr0;
    sub_404640();
    *(ptr0 - 1) = -1;  // } (starts at 40772Bh)
    char* ptr1 = (char*)sub_403DDF(*(ptr0 - 9));
    if(ptr1 != 0) {
        sub_4045E0(ptr1, 0, *(int**)(ptr0 - 9));
        *(ptr0 - 0xF) = 1;
        int v0 = LCMapStringA(*(LCID*)(ptr0 + 2), *(DWORD*)(ptr0 + 3), *(LPCSTR*)(ptr0 - 10), *(ptr0 + 5), (LPSTR)ptr1, *(ptr0 - 9));
        *(ptr0 - 9) = v0;
        if(v0 != 0) {
            unsigned int v1 = (unsigned int)sub_40854D(*(ptr0 - 16), *(ptr0 + 8), (int)ptr1, (int)(ptr0 - 9), *(ptr0 + 6), *(ptr0 + 7));
        }
    }
    if(*(ptr0 - 0xF) != 0) {
        sub_40403C((int)ptr1);
    }
    if(*(ptr0 - 10) != 0) {
        sub_40403C(*(ptr0 - 10));
    }
    jump *(ptr0 + 1);
}

int sub_407811(unsigned int param0, unsigned int param1, unsigned int* param2) {
    unsigned int v0 = param0 + param1;
    int result = v0 >= param0 && v0 >= param1 ? 0: 1;
    *param2 = v0;
    return result;
}

int sub_407832(unsigned int* param0, unsigned int* param1) {
    unsigned int* ptr0 = param0;
    unsigned int* ptr1 = param1;
    int v0 = sub_407811(ptr0[0], ptr1[0], ptr0);
    if(v0) {
        int v1 = sub_407811(ptr0[1], 1, ptr0 + 1);
        if(v1) {
            ++ptr0[2];
        }
    }
    int v2 = sub_407811(ptr0[1], ptr1[1], ptr0 + 1);
    if(v2) {
        ++ptr0[2];
    }
    return sub_407811(ptr0[2], ptr1[2], ptr0 + 2);
}

int* sub_407890(int* param0) {
    int* result = param0;
    int v0 = *result;
    int v1 = *(result + 1);
    *result = v0 * 2;
    int v2 = (*(result + 2) * 2) | (v1 >>> 31);
    *(result + 1) = (v1 * 2) | (v0 >>> 31);
    *(result + 2) = v2;
    return result;
}

int* sub_4078BE(int* param0) {
    int* result = param0;
    int v0 = *(result + 2);
    int v1 = *(result + 1);
    *(result + 1) = (v0 * 0x80000000) | (v1 >>> 1);
    int v2 = (v1 * 0x80000000) | (*result >>> 1);
    *(result + 2) = v0 >>> 1;
    *result = v2;
    return result;
}

int sub_4078EB(char* param0, int param1, int* param2) {
    int v0;
    int v1;
    int v2 = gvar_40B498;
    int v3 = v0;
    int* ptr0 = param2;
    int v4 = v2;
    int v5 = param1;
    int v6 = 0x404e;
    ptr0[0] = 0;
    ptr0[1] = 0;
    ptr0[2] = 0;
    if((unsigned int)v5 > 0) {
        param2 = (int*)v5;
        do {
            int v7 = ptr0[0];
            *(int*)((char*)&v7 + 4) = ptr0[1];
            int* ptr1 = ptr0;
            *(int*)((char*)&v7 + 8) = ptr0[2];
            sub_407890(ptr1);
            sub_407890(ptr0);
            sub_407832((unsigned int*)ptr0, &v7);
            sub_407890(ptr0);
            int v8 = (int)*param0;
            int v9 = 0;
            int v10 = 0;
            v7 = v8;
            sub_407832((unsigned int*)ptr0, &v7);
            ++param0;
            param2 = (int*)((char*)param2 - 1);
        }
        while(param2);
    }
    if(ptr0[2] == 0) {
        do {
            v1 = ptr0[1];
            v6 += 0xfff0;
            int v11 = ptr0[0];
            ptr0[1] = (v1 * 0x10000) | (v11 >>> 16);
            ptr0[0] = v11 * 0x10000;
        }
        while(v1 >>> 16 == 0);
        ptr0[2] = v1 >>> 16;
    }
    while(!(ptr0[2] & 0x8000)) {
        sub_407890(ptr0);
        v6 += 0xFFFF;
    }
    *(short*)((char*)&ptr0[2] + 2) = (unsigned short)v6;
    return sub_4041A2(v4);
}

int sub_4079C9(short* param0, unsigned int* param1, char* param2, int param3, int param4, int param5, int param6) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    char* ptr0;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    char v10;
    int v11;
    char v12;
    int v13;
    int v14;
    char v15;
    int v16;
    int v17 = gvar_40B498;
    int v18 = (unsigned int)v10 | ((unsigned int)v13 << 8);
    char* ptr1 = &v12;
    int v19 = 0;
    char* ptr2 = param2;
    int v20 = 0;
    int v21 = 1;
    int v22 = 0;
    int v23 = 0;
    int v24 = 0;
    int v25 = 0;
    int v26 = 0;
    int v27 = 0;
    int v28 = 0;
    char* ptr3 = ptr2;
    for(char i = *ptr2; i == 32 || i == 9 || i == 10 || i == 13; i = *ptr2) {
        ++ptr2;
    }
    int v29 = 4;
loc_407A22:
    v10 = *ptr2;
    ++ptr2;
    switch(v19) {
        case 0: {
            if(v10 >= 49 && v10 <= 57) {
                v29 = 3;
                v19 = v29;
                --ptr2;
                goto loc_407A22;
            }
            else if(gvar_40B4A4 == v10) {
                v29 = 5;
                goto loc_407C8C;
            }
            else if((int)v10 == 43) {
                v20 = 0;
                v29 = 2;
                v19 = 2;
                goto loc_407A22;
            }
            else if((int)v10 == 45) {
                v29 = 2;
                v19 = 2;
                v20 = 0x8000;
                goto loc_407A22;
            }
            else if((int)v10 - 45 == 3) {
                v19 = 1;
                goto loc_407A22;
            }
            else {
                goto loc_407A6A;
            }
        }
        case 1: {
            v23 = 1;
            if((v10 >= 49 && v10 <= 57)) {
                v29 = 3;
                v19 = v29;
                --ptr2;
                goto loc_407A22;
            }
            else if(gvar_40B4A4 == v10) {
                v19 = 4;
                goto loc_407A22;
            }
            else if(v10 == 43 || v10 == 45) {
                goto loc_407AC8;
            }
            else if(v10 != 48) {
                goto loc_407AB0;
            }
            else {
                v19 = 1;
                goto loc_407A22;
            }
        }
        case 2: {
            if(v10 >= 49 && v10 <= 57) {
                v29 = 3;
                v19 = v29;
                --ptr2;
                goto loc_407A22;
            }
            else if(gvar_40B4A4 == v10) {
                v29 = 5;
                goto loc_407C8C;
            }
            else if(v10 != 48) {
                goto loc_407C5A;
            }
            else {
                v19 = 1;
                goto loc_407A22;
            }
        }
        case 3: {
            v23 = 1;
        loc_407B03:
            while(1) {
                int v30 = (int)v10;
                if(gvar_40B4A0 > 1) {
                    v29 = 4;
                    v9 = sub_404318(v30);
                }
                else {
                    v9 = (unsigned int)*(char*)(v30 * 2 + gvar_40B490) & 0x4;
                }
                if(!v9) {
                loc_407B4A:
                    if(gvar_40B4A4 != v10) {
                    loc_407BB4:
                        if(v10 != 43 && v10 != 45) {
                        loc_407AB0:
                            if(v10 <= 67 || (v10 > 69 && (v10 <= 99 || v10 > 101))) {
                                goto loc_407A6A;
                            }
                            else {
                                v29 = 6;
                            }
                        }
                        else {
                        loc_407AC8:
                            --ptr2;
                            v29 = 11;
                        }
                    loc_407C8C:
                        v19 = v29;
                    }
                    else {
                        v19 = 4;
                    }
                    goto loc_407A22;
                }
                else {
                    if((unsigned int)v22 < 25) {
                        char* ptr4 = ptr1;
                        ++v22;
                        ++ptr1;
                        ptr4[0] = v10 - 48;
                    }
                    else {
                        ++v27;
                    }
                    v10 = *ptr2;
                    ++ptr2;
                }
            }
            goto loc_407B4A;
        }
        case 4: {
            v23 = 1;
            v24 = 1;
            if(!v22) {
                while(v10 == 48) {
                    --v27;
                    v10 = *ptr2;
                    ++ptr2;
                }
            loc_407B72:
                while(1) {
                    int v31 = (int)v10;
                    if(gvar_40B4A0 > 1) {
                        v29 = 4;
                        v8 = sub_404318(v31);
                    }
                    else {
                        v8 = (unsigned int)*(char*)(v31 * 2 + gvar_40B490) & 0x4;
                    }
                    if(!v8) {
                        goto loc_407BB4;
                    }
                    else {
                        if((unsigned int)v22 < 25) {
                            ++v22;
                            char* ptr5 = ptr1;
                            ++ptr1;
                            --v27;
                            ptr5[0] = v10 - 48;
                        }
                        v10 = *ptr2;
                        ++ptr2;
                    }
                }
                goto loc_407B03;
            }
            else {
                goto loc_407B72;
            }
        }
        case 5: {
            char v32 = gvar_40B4A0 == 1;
            char v33 = (int)gvar_40B4A0 < 1;
            char v34 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
            v24 = 1;
            if(!v32 && v33 == v34) {
                v29 = 4;
                v7 = sub_404318((int)v10);
            }
            else {
                v7 = (unsigned int)*(char*)((int)v10 * 2 + gvar_40B490) & 0x4;
            }
            if(v7) {
                v19 = 4;
                --ptr2;
                goto loc_407A22;
            }
            else {
            loc_407C5A:
                ptr2 = ptr3;
                break;
            loc_407C2C:
                while(v10 == 48) {
                    v10 = *ptr2;
                    ++ptr2;
                }
            }
            if(v10 >= 49 && v10 <= 57) {
                v29 = 9;
                v19 = v29;
                --ptr2;
                goto loc_407A22;
            }
            else {
            loc_407A6A:
                --ptr2;
                break;
            }
        }
        case 6: {
            ptr0 = ptr2 - 2;
            ptr3 = ptr2 - 2;
            if(v10 >= 49 && v10 <= 57) {
                v29 = 9;
                v19 = v29;
                --ptr2;
                goto loc_407A22;
            }
            else if((int)v10 == 43) {
                v29 = 7;
                goto loc_407C8C;
            }
            else if((int)v10 == 45) {
                v21 = -1;
                v29 = 7;
                v19 = 7;
                goto loc_407A22;
            }
            else if((int)v10 - 45 == 3) {
                v29 = 8;
                goto loc_407C8C;
            }
            else {
            loc_407D27:
                ptr2 = ptr0;
                break;
            }
        }
        case 7: {
            if(v10 >= 49 && v10 <= 57) {
                v29 = 9;
                v19 = v29;
                --ptr2;
                goto loc_407A22;
            }
            else if(v10 != 48) {
                goto loc_407C5A;
            }
            else {
                v29 = 8;
                goto loc_407C8C;
            }
        }
        case 8: {
            v25 = 1;
            goto loc_407C2C;
        }
        case 9: {
            v25 = 1;
            int v35 = 0;
            while(1) {
                int v36 = (int)v10;
                if(gvar_40B4A0 > 1) {
                    v29 = 4;
                    v6 = sub_404318(v36);
                }
                else {
                    v6 = (unsigned int)*(char*)(v36 * 2 + gvar_40B490) & 0x4;
                }
                if(!v6) {
                loc_407CF2:
                    v26 = v35;
                    while(1) {
                        int v37 = (int)v10;
                        if(gvar_40B4A0 > 1) {
                            v29 = 4;
                            v5 = sub_404318(v37);
                        }
                        else {
                            v5 = (unsigned int)*(char*)(v37 * 2 + gvar_40B490) & 0x4;
                        }
                        if(!v5) {
                            goto loc_407A6A;
                        }
                        else {
                            v10 = *ptr2;
                            ++ptr2;
                        }
                    }
                    goto loc_407C2C;
                }
                else {
                    v35 = v35 * 10 + (int)v10 - 48;
                    if(v35 > 5200) {
                        v35 = 0x1451;
                        goto loc_407CF2;
                    }
                    else {
                        v10 = *ptr2;
                        ++ptr2;
                    }
                }
            }
            v35 = 0x1451;
            goto loc_407CF2;
        }
        case 11: {
            if(param6) {
                ptr0 = ptr2 - 1;
                ptr3 = ptr2 - 1;
                if((int)v10 == 43) {
                    v29 = 7;
                    goto loc_407C8C;
                }
                else if((int)v10 - 43 != 2) {
                    goto loc_407D27;
                }
                else {
                    v21 = -1;
                    v29 = 7;
                    v19 = 7;
                    goto loc_407A22;
                }
            }
            else {
                v29 = 10;
                v19 = 10;
                --ptr2;
            }
        }
        default: {
            if(v19 != 10) {
                goto loc_407A22;
            }
        }
    }
    *param1 = ptr2;
    if(v23) {
        v29 = 24;
        if((unsigned int)v22 > 24) {
            if(v15 >= 5) {
                ++v15;
            }
            v22 = 24;
            v4 = (int)(ptr1 - 1);
            ++v27;
        }
        else {
            v4 = (int)ptr1;
        }
        if((unsigned int)v22 < 0 || (v22 ? 0: 1)) {
            goto loc_407DF5;
        }
        else {
            --v4;
            while(!*(char*)v4) {
                --v22;
                ++v27;
                --v4;
            }
            sub_4078EB(&v12, v22, &v14);
            int v38 = v26;
            if(v21 < 0) {
                v38 = 0 - v38;
            }
            v4 = v38 + v27;
            if(v25 == 0) {
                v4 += param4;
            }
            if(v24 == 0) {
                v4 -= param5;
            }
            if(v4 > 5200) {
                v2 = 0;
                v0 = 0x7fff;
                v1 = 0x80000000;
                v3 = 0;
            }
            else if(v4 < -5200) {
                goto loc_407DF5;
            }
            else {
                sub_408948(&v14, v4, param3);
                v3 = v14;
                v2 = *(int*)((char*)&v14 + 2);
                v1 = v11;
                v0 = v16;
            }
        }
    }
    else {
    loc_407DF5:
        v3 = 0;
        v0 = 0;
        v1 = 0;
        v2 = 0;
    }
    int v39 = v0 | v20;
    *(int*)(param0 + 3) = v1;
    *(int*)(param0 + 1) = v2;
    *(param0 + 5) = (unsigned short)v39;
    *param0 = (unsigned short)v3;
    return sub_4041A2(v17);
}

int sub_407E50(int param0, int param1, char* param2, int param3, char param4, short* param5) {
    char* _Source;
    int v0;
    int v1;
    char v2;
    int v3 = gvar_40B498;
    char* ptr0 = param2;
    int v4 = v0;
    short* ptr1 = param5;
    int* ptr2 = (int*)((int)param2 & 0x8000);
    char v5 = 0xcc;
    char v6 = 0xcc;
    char v7 = 0xcc;
    char v8 = 0xcc;
    char v9 = 0xcc;
    char v10 = 0xcc;
    char v11 = 0xcc;
    char v12 = 0xcc;
    char v13 = 0xcc;
    char v14 = 0xcc;
    char v15 = 251;
    char v16 = 63;
    int v17 = 1;
    int* ptr3 = (int*)((int)param2 & 0x7fff);
    *(char*)(ptr1 + 1) = (unsigned short)ptr2 != 0 ? 45: 32;
    int v18 = param1;
    if((unsigned short)ptr3 || param1 || param1 != param0) {
        if((unsigned short)ptr3 != 0x7fff) {
            int v19 = (unsigned int)(unsigned short)ptr3;
            v1 & 0xFFFF = 0;
            *(int*)((char*)&v1 + 2) = param0;
            int v20 = (((param1 >>> 24) * 2 + ((unsigned int)(unsigned short)ptr3 >>> 8)) * 77 + (unsigned int)(unsigned short)ptr3 * 19728 - 0x134312f4) >> 16;
            int v21 = 0 - (int)(unsigned short)v20;
            int* ptr4 = &v1;
            unsigned short v22 = (unsigned short)ptr3;
            sub_408948(ptr4, v21, 1);
            if(v22 >= 0x3fff) {
                ++v20;
                sub_408716(&v1, &v5);
            }
            char v23 = param4 & 0x1 ? 0: 1;
            int v24 = param3;
            *ptr1 = (unsigned short)v20;
            if(!(param4 & 0x1 ? 0: 1)) {
                v24 += (int)(unsigned short)v20;
                if(v24 <= 0) {
                    goto loc_407FC6;
                }
            }
            if(v24 > 21) {
                v24 = 21;
            }
            int v25 = (unsigned int)v22 - 0x3ffe;
            v22 = 0;
            param2 = (char*)0x8;
            do {
                sub_407890(&v1);
                --param2;
            }
            while(param2);
            if(v25 < 0) {
                int counter = (unsigned int)(0 - (unsigned char)v25);
                if(counter > 0) {
                    do {
                        sub_4078BE(&v1);
                        --counter;
                    }
                    while(counter);
                }
            }
            char* ptr5 = (char*)(v24 + 1);
            char* ptr6 = (char*)(ptr1 + 2);
            char* ptr7 = (char*)(ptr1 + 2);
            if((int)(char*)(v24 + 1) > 0) {
                param2 = (char*)(v24 + 1);
                do {
                    int v26 = v1;
                    int* ptr8 = &v1 + 1;
                    int* ptr9 = (int*)(&v26 + 1);
                    *(int*)((char*)&v26 + 4) = *(int*)((char*)&v1 + 4);
                    _Source = (char*)&v1;
                    *(int*)((char*)&v26 + 8) = *(int*)((char*)&v1 + 8);
                    sub_407890((int*)_Source);
                    sub_407890(&v1);
                    sub_407832((unsigned int*)&v1, &v26);
                    /*BAD_CALL!*/ sub_407890(&v1);
                    ptr5 = ptr7;
                    char v27 = (unsigned char)(v22 >>> 8) + 48;
                    ++ptr7;
                    --param2;
                    v2 = param2 ? 0: 1;
                    *ptr5 = (unsigned char)(v22 >>> 8) + 48;
                    (unsigned short)((v22 >>> 8) & 0xFF) = 0;
                }
                while(!v2);
                ptr6 = ptr7;
            }
            char* ptr10 = ptr6 - 1;
            char* ptr11 = ptr6 - 1 - 1;
            char* ptr12 = (char*)(ptr1 + 2);
            if(*(ptr6 - 1) >= 53) {
                while(ptr11 >= (char*)(ptr1 + 2) && *ptr11 == 57) {
                    *ptr11 = 48;
                    --ptr11;
                }
                if(ptr11 < (char*)(ptr1 + 2)) {
                    ++ptr11;
                    *ptr1 = *ptr1 + 1;
                }
                *ptr11 = *ptr11 + 1;
            }
            else {
                while(ptr11 >= (char*)(ptr1 + 2) && *ptr11 == 48) {
                    --ptr11;
                }
                if(ptr11 < (char*)(ptr1 + 2)) {
                    *(char*)(ptr1 + 2) = 48;
                    *ptr1 = 0;
                    *(char*)(ptr1 + 1) = 32;
                    *(char*)((char*)ptr1 + 3) = 1;
                    *(char*)((char*)ptr1 + 5) = 0;
                    return sub_4041A2(v3);
                }
            }
            ptr11 = (unsigned int)((unsigned char)ptr11 - (unsigned char)ptr1 - 3) | ((unsigned int)(int*)((int)(int*)((int)ptr11 >>> 8) & 0xffffff) << 8);
            *(char*)((char*)ptr1 + 3) = (unsigned char)ptr11;
            *(char*)((int*)((int)(unsigned char)ptr11 + (int)ptr1) + 1) = 0;
            return sub_4041A2(v3);
        }
        *ptr1 = 1;
        if((param1 != 0x80000000 || param0) && !(param1 & 0x40000000)) {
            _Source = "1#SNAN";
            goto loc_407F45;
        }
        else {
            if((unsigned short)ptr2 && param1 == 0xc0000000) {
                if(param0) {
                    goto loc_407F3C;
                }
                else {
                    _Source = "1#IND";
                    goto loc_407F28;
                }
            }
            if(param1 == 0x80000000 && !param0) {
                _Source = "1#INF";
            loc_407F28:
                strcpy((char*)(ptr1 + 2), _Source);
                *(char*)((char*)ptr1 + 3) = 5;
            }
            else {
            loc_407F3C:
                _Source = "1#QNAN";
            loc_407F45:
                strcpy((char*)(ptr1 + 2), _Source);
                *(char*)((char*)ptr1 + 3) = 6;
            }
        }
    }
    else {
    loc_407FC6:
        *(char*)(ptr1 + 2) = 48;
        *ptr1 = 0;
        *(char*)(ptr1 + 1) = 32;
        *(char*)((char*)ptr1 + 3) = 1;
        *(char*)((char*)ptr1 + 5) = 0;
    }
    return sub_4041A2(v3);
}

int sub_4080DE(int param0, int param1) {
    int result;
    unsigned int v0;
    if(!param0) {
        result = sub_403DDF(param1);
    }
    else {
        int* ptr0 = (int*)param1;
        if(!ptr0) {
            sub_40403C(param0);
            return 0;
        }
        else if(gvar_40BEC4 == 3) {
            do {
                int* ptr1 = NULL;
                if((unsigned int)ptr0 <= 0xffffffe0) {
                    unsigned int v1 = sub_405D85(param0);
                    if(v1) {
                        if(gvar_40BC84 >= (unsigned int)ptr0) {
                            int v2 = sub_406285((unsigned int*)v1, (unsigned int*)param0, ptr0);
                            if(v2) {
                                ptr1 = (int*)param0;
                                goto loc_408184;
                            }
                            else {
                                ptr1 = sub_406564((int)ptr0);
                            }
                            if(ptr1) {
                                int* ptr2 = (int*)(*(int*)(param0 - 4) - 1);
                                if(ptr2 >= ptr0) {
                                    ptr2 = ptr0;
                                }
                                unk_lib_sub2(ptr1, (int*)param0, ptr2);
                                v1 = sub_405D85(param0);
                                sub_405DB0((unsigned int*)v1, (int*)param0);
                            loc_408184:
                                if(ptr1) {
                                    goto loc_4081C4;
                                }
                            }
                            goto loc_408188;
                        }
                        else {
                        loc_408188:
                            if(!ptr0) {
                                ptr0 = (int*)0x1;
                            }
                            ptr0 = (int*)((int)(int*)((char*)ptr0 + 0xF) & 0xfffffff0);
                            ptr1 = (int*)HeapAlloc(gvar_40BEC0, 0, (SIZE_T)ptr0);
                            if(ptr1) {
                                int* ptr3 = (int*)(*(int*)(param0 - 4) - 1);
                                if(ptr3 >= ptr0) {
                                    ptr3 = ptr0;
                                }
                                unk_lib_sub2(ptr1, (int*)param0, ptr3);
                                sub_405DB0((unsigned int*)v1, (int*)param0);
                            }
                        }
                    loc_4081C4:
                        if(!v1) {
                            goto loc_4081C8;
                        }
                    }
                    else {
                    loc_4081C8:
                        if(!ptr0) {
                            ptr0 = (int*)0x1;
                        }
                        ptr0 = (int*)((int)(int*)((char*)ptr0 + 0xF) & 0xfffffff0);
                        ptr1 = (int*)HeapReAlloc(gvar_40BEC0, 0, (LPVOID)param0, (SIZE_T)ptr0);
                    }
                    if(ptr1) {
                        return (int)ptr1;
                    }
                }
                if(!gvar_40BC48) {
                    return (int)ptr1;
                }
                v0 = (unsigned int)sub_406B77((int)ptr0);
            }
            while(v0);
            return 0;
        }
        do {
            result = 0;
            if((unsigned int)ptr0 <= 0xffffffe0) {
                if(!ptr0) {
                    ptr0 = (int*)0x1;
                }
                result = (int)HeapReAlloc(gvar_40BEC0, 0, (LPVOID)param0, (SIZE_T)ptr0);
                if(result) {
                    return result;
                }
            }
            if(!gvar_40BC48) {
                return result;
            }
            v0 = (unsigned int)sub_406B77((int)ptr0);
        }
        while(v0);
        result = 0;
    }
    return result;
}

SIZE_T sub_408240(int param0) {
    if(gvar_40BEC4 == 3) {
        unsigned int v0 = sub_405D85(param0);
        if(v0) {
            return (SIZE_T)(*(int*)(param0 - 4) - 9);
        }
    }
    return HeapSize(gvar_40BEC0, 0, (LPCVOID)param0);
}

unsigned int sub_408278(unsigned int param0) {
    gvar_40BA54 = param0;
    unsigned int v0 = 0;
    while(*(unsigned int*)(v0 * 8 + (int)&gvar_40B5F8) != param0) {
        ++v0;
        if(v0 >= 45) {
            if(param0 >= 19 && param0 <= 36) {
                gvar_40BA50 = 13;
            }
            else if(param0 >= 188) {
                gvar_40BA50 = 8;
                if(param0 > 202) {
                    gvar_40BA50 = 22;
                    return param0;
                }
            }
            else {
                gvar_40BA50 = 22;
            }
            return param0;
        }
    }
    unsigned int result = *(unsigned int*)(v0 * 8 + (int)&gvar_40B5FC);
    gvar_40BA50 = *(unsigned int*)(v0 * 8 + (int)&gvar_40B5FC);
    return result;
}

LONG sub_4082D7(int param0, LONG param1, LONG param2, DWORD dwMoveMethod) {
    LONG result;
    if(gvar_40BEC8 > (unsigned int)param0 && (*(char*)((param0 & 0x1f) * 8 + *(LONG*)((param0 >> 5) * 4 + (int)&gvar_40BEE0) + 4) & 0x1)) {
        LONG lDistanceToMove = param1;
        int* ptr0 = (int*)param0;
        LONG v0 = param2;
        int v1 = sub_4083F0(ptr0);
        if(v1 == -1) {
            gvar_40BA50 = 9;
            return -1;
        }
        DWORD v2 = SetFilePointer((HANDLE)v1, lDistanceToMove, &v0, dwMoveMethod);
        lDistanceToMove = (LONG)v2;
        if(v2 == -1) {
            ptr0 = (int*)&loc_40833D;
            DWORD v3 = GetLastError();
            if(v3) {
                sub_408278((unsigned int)v3);
                return -1;
            }
        }
        char* ptr1 = (char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_40BEE0) + 4);
        *ptr1 = *ptr1 & 0xfd;
        result = lDistanceToMove;
    }
    else {
        gvar_40BA54 = 0;
        gvar_40BA50 = 9;
        result = -1;
    }
    return result;
}

int sub_408376(unsigned int param0) {
    int result;
    DWORD nStdHandle;
    if(gvar_40BEC8 > param0) {
        int* ptr0 = (int*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_40BEE0));
        if(!(*(char*)(ptr0 + 1) & 0x1) || *ptr0 == -1) {
            gvar_40BA54 = 0;
            gvar_40BA50 = 9;
            return -1;
        }
        if(gvar_40B0BC == 1) {
            if(!param0) {
                nStdHandle = 0xfffffff6;
            loc_4083C9:
                SetStdHandle(nStdHandle, NULL);
            }
            else if(!(param0 - 1)) {
                nStdHandle = 0xfffffff5;
                goto loc_4083C9;
            }
            else if(param0 == 2) {
                nStdHandle = 0xfffffff4;
                goto loc_4083C9;
            }
        }
        *(int*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_40BEE0)) = -1;
        result = 0;
    }
    else {
        gvar_40BA54 = 0;
        gvar_40BA50 = 9;
        result = -1;
    }
    return result;
}

int sub_4083F0(int* param0) {
    if(gvar_40BEC8 > (unsigned int)param0) {
        int* ptr0 = (int*)((int)(int*)((int)(int*)((int)param0 & 0x1f) * 8) + *(unsigned int*)((int)(int*)((int)(int*)((int)param0 >> 5) * 4) + (int)&gvar_40BEE0));
        if((*(char*)(ptr0 + 1) & 0x1)) {
            return *ptr0;
        }
    }
    gvar_40BA54 = 0;
    gvar_40BA50 = 9;
    return -1;
}

int sub_40842C(int* param0) {
    int result;
    DWORD v0;
    if(gvar_40BEC8 > (unsigned int)param0 && (*(char*)((int*)((int)(int*)((int)(int*)((int)param0 & 0x1f) * 8) + *(unsigned int*)((int)(int*)((int)(int*)((int)param0 >> 5) * 4) + (int)&gvar_40BEE0)) + 1) & 0x1)) {
        int v1 = sub_4083F0(param0);
        if(v1 != -1) {
            if(param0 == 1 || param0 == 2) {
                int v2 = sub_4083F0((int*)0x2);
                int v3 = sub_4083F0((int*)0x1);
                if(v3 == v2) {
                    goto loc_4084A5;
                }
            }
            int v4 = sub_4083F0(param0);
            BOOL v5 = CloseHandle((HANDLE)v4);
            if(v5) {
                goto loc_4084A5;
            }
            else {
                v0 = GetLastError();
            }
        }
        else {
        loc_4084A5:
            v0 = 0;
        }
        sub_408376((unsigned int)param0);
        *(char*)((int*)((int)(int*)((int)(int*)((int)param0 & 0x1f) * 8) + *(unsigned int*)((int)(int*)((int)(int*)((int)param0 >> 5) * 4) + (int)&gvar_40BEE0)) + 1) = 0;
        if(v0) {
            sub_408278((unsigned int)v0);
            return -1;
        }
        result = 0;
    }
    else {
        gvar_40BA54 = 0;
        gvar_40BA50 = 9;
        result = -1;
    }
    return result;
}

int sub_4084DF(int* param0) {
    int* ptr0 = param0;
    int result = *(ptr0 + 3);
    if(((unsigned char)result & 0x83) && ((unsigned char)result & 0x8)) {
        sub_40403C(*(ptr0 + 2));
        *(short*)(ptr0 + 3) = *(short*)(ptr0 + 3) & 0xfbf7;
        result = 0;
        *ptr0 = 0;
        *(ptr0 + 2) = 0;
        *(ptr0 + 1) = 0;
    }
    return result;
}

int sub_40850A(LCID Locale) {
    char v0;
    int v1 = gvar_40B498;
    char v2 = 0;
    int v3 = GetLocaleInfoA(Locale, 0x1004, (LPSTR)&v0, 6);
    if(v3) {
        sub_4089CE(&v0);
    }
    return sub_4041A2(v1);
}

int sub_40854D(UINT CodePage, UINT CodePage1, char* _Str, int* param3, LPSTR lpMultiByteStr, int cbMultiByte2) {
    char* ptr0;
    int v0;
    int cchWideChar;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6 = &gvar_409D98;
    int v7 = v5;
    int v8 = gvar_40B498;
    int v9 = 0;
    int v10 = 0;
    int cbMultiByte = *param3;
    int cbMultiByte1 = *param3;
    int v11 = 0;
    if(CodePage != CodePage1) {
        BOOL v12 = GetCPInfo(CodePage, &v3);
        if(v12 && v3 == 1) {
            BOOL v13 = GetCPInfo(CodePage1, &v3);
            if(v13 && v3 == 1) {
                v11 = 1;
            }
        }
        if(v11 == 0) {
            cchWideChar = v4;
        }
        else if(cbMultiByte != -1) {
            cchWideChar = cbMultiByte;
        }
        else {
            size_t v14 = strlen(_Str);
            cchWideChar = (int)(v14 + 1);
        }
        if(v11 == 0) {
            cchWideChar = MultiByteToWideChar(CodePage, 1, (LPCCH)_Str, cbMultiByte, NULL, 0);
            if(cchWideChar == 0) {
                return sub_4041A2(v8);
            }
        }
        v6 = 0;  // __try{ (see __except:408623h)
        sub_403D30();
        char* ptr1 = &v1;
        v0 = (int)&v1;
        ptr0 = &v1;
        sub_4045E0(&v1, 0, (int*)(cchWideChar * 2));
        v6 = -1;  // } (starts at 4085F2h)
        if(&v2 == 88) {
            v0 = sub_404245(2, cchWideChar);
            if(v0 == 0) {
                return sub_4041A2(v8);
            }
            v10 = 1;
        }
        int v15 = MultiByteToWideChar(CodePage, 1, (LPCCH)_Str, cbMultiByte1, (LPWSTR)&v1, cchWideChar);
        if(v15) {
            if(lpMultiByteStr != 0) {
                int v16 = WideCharToMultiByte(CodePage1, 0, (LPCWCH)&v1, cchWideChar, lpMultiByteStr, cbMultiByte2, NULL, NULL);
            }
            else if(v11 == 0) {
                cchWideChar = WideCharToMultiByte(CodePage1, 0, (LPCWCH)&v1, cchWideChar, NULL, 0, NULL, NULL);
                if(cchWideChar != 0) {
                    goto loc_4086B6;
                }
            }
            else {
            loc_4086B6:
                int v17 = sub_404245(1, cchWideChar);
                v9 = v17;
                if(v17 != 0) {
                    int v18 = WideCharToMultiByte(CodePage1, 0, (LPCWCH)&v1, cchWideChar, (LPSTR)v17, cchWideChar, NULL, NULL);
                    if(v18 == 0) {
                        sub_40403C(v9);
                    }
                    else if(cbMultiByte1 != -1) {
                        *param3 = v18;
                    }
                }
            }
        }
        goto loc_4086F9;
    }
    else {
        v0 = (int)ptr0;
    loc_4086F9:
        if(v10 != 0) {
            sub_40403C(v0);
        }
    }
    return sub_4041A2(v8);
}

int sub_40861F() {
    return 1;
}

int sub_408623(int param0, int param1, int param2, int param3) {
    int* ptr0;
    sub_404640();
    *(ptr0 - 1) = -1;
    int cchWideChar = *(ptr0 - 14);
    LPWSTR lpWideCharStr = (LPWSTR)sub_404245(2, cchWideChar);
    if(lpWideCharStr != 0) {
        *(ptr0 - 17) = 1;
        int v0 = MultiByteToWideChar(*(UINT*)(ptr0 + 2), 1, *(LPCCH*)(ptr0 + 4), *(ptr0 - 16), lpWideCharStr, cchWideChar);
        if(v0) {
            if(*(ptr0 + 6) != 0) {
                int v1 = WideCharToMultiByte(*(UINT*)(ptr0 + 3), 0, lpWideCharStr, cchWideChar, *(LPSTR*)(ptr0 + 6), *(ptr0 + 7), NULL, NULL);
                if(v1) {
                    *(ptr0 - 13) = *(ptr0 + 6);
                }
            }
            else if(*(ptr0 - 0xF) == 0) {
                cchWideChar = WideCharToMultiByte(*(UINT*)(ptr0 + 3), 0, lpWideCharStr, cchWideChar, NULL, 0, NULL, NULL);
                if(cchWideChar != 0) {
                    goto loc_4086B6;
                }
            }
            else {
            loc_4086B6:
                int v2 = sub_404245(1, cchWideChar);
                *(ptr0 - 13) = v2;
                if(v2 != 0) {
                    int v3 = WideCharToMultiByte(*(UINT*)(ptr0 + 3), 0, lpWideCharStr, cchWideChar, (LPSTR)v2, cchWideChar, NULL, NULL);
                    if(v3 == 0) {
                        sub_40403C(*(ptr0 - 13));
                        *(ptr0 - 13) = 0;
                    }
                    else if(*(ptr0 - 16) != -1) {
                        **(int**)(ptr0 + 5) = v3;
                    }
                }
            }
        }
        if(*(ptr0 - 17) != 0) {
            sub_40403C((int)lpWideCharStr);
        }
    }
    int v4 = *(ptr0 - 7);
    *(ptr0 - 22) = &loc_408710;
    /*BAD_CALL!*/ sub_4041A2(v4);
    jump *(ptr0 + 1);
}

int sub_408716(int* param0, int* param1) {
    int* ptr0;
    int v0;
    int v1 = gvar_40B498;
    int v2 = v0;
    int* ptr1 = param1;
    int v3 = v1;
    int v4 = (unsigned int)*(short*)((char*)ptr1 + 10);
    int* ptr2 = param0;
    int v5 = 0;
    int v6 = 0;
    int v7 = 0;
    int v8 = 0;
    int v9 = (unsigned int)*(short*)((char*)ptr2 + 10);
    int v10 = v4 & 0x7fff;
    int v11 = v9 & 0x7fff;
    int v12 = (v9 ^ v4) & 0x8000;
    int* ptr3 = (int*)(v11 + v10);
    param0 = ptr3;
    if(((unsigned short)v11 >= 0x7fff || (unsigned short)v10 >= 0x7fff || (unsigned short)ptr3 > 49149)) {
    loc_408925:
        *(ptr2 + 1) = 0;
        *ptr2 = 0;
        *(ptr2 + 2) = (((unsigned short)v12 > 0 ? -1: 0) & 0x80000000) + 0x7fff8000;
    }
    else if((unsigned short)ptr3 > 0x3fbf) {
        if(!(unsigned short)v11) {
            param0 = (int*)((char*)param0 + 1);
            ptr0 = NULL;
            if(!(*(ptr2 + 2) & 0x7fffffff) && *(ptr2 + 1) == 0 && *ptr2 == 0) {
                goto loc_40891A;
            }
        }
        if((unsigned short)v10 == 0) {
            param0 = (int*)((char*)param0 + 1);
            if(!(*(ptr1 + 2) & 0x7fffffff) && *(ptr1 + 1) == 0 && *ptr1 == 0) {
                *(ptr2 + 2) = 0;
                *(ptr2 + 1) = 0;
                *ptr2 = 0;
                return sub_4041A2(v3);
            }
        }
        int v13 = 0;
        int* ptr4 = &v7;
        param1 = (int*)0x5;
        do {
            int v14 = v13 * 2;
            if((int)param1 > 0) {
                short* ptr5 = (short*)(v14 + (int)ptr2);
                int* ptr6 = param1;
                short* ptr7 = (short*)(ptr1 + 2);
                int* ptr8 = ptr6;
                do {
                    unsigned int* ptr9 = (unsigned int*)(ptr4 - 1);
                    int v15 = sub_407811(ptr9[0], (unsigned int)((unsigned int)*ptr5 * (unsigned int)*ptr7), ptr9);
                    if(v15) {
                        *(short*)ptr4 = *(short*)ptr4 + 1;
                    }
                    ++ptr5;
                    --ptr7;
                    ptr8 = (int*)((char*)ptr8 - 1);
                }
                while(ptr8);
            }
            ptr4 = (int*)((char*)ptr4 + 2);
            ++v13;
            param1 = (int*)((char*)param1 - 1);
        }
        while((int)param1 > 0);
        param0 = (int*)((char*)param0 + 0xc002);
        if(!((unsigned short)param0 ? 0: 1) && (unsigned short)param0 >= 0) {
            while(!((unsigned char)(v8 >>> 24) & 0x80)) {
                sub_407890(&v6);
                param0 = (int*)((char*)param0 + 0xFFFF);
                if((((unsigned short)param0 ? 0: 1) || (unsigned short)param0 < 0)) {
                    break;
                }
            }
            if((((unsigned short)param0 ? 0: 1) || (unsigned short)param0 < 0)) {
                goto loc_408877;
            }
        }
        else {
        loc_408877:
            param0 = (int*)((char*)param0 + 0xFFFF);
            if((unsigned short)param0 < 0) {
                int counter = (unsigned int)(int*)((int*)(0 - (int)param0) & 0xFFFF);
                param0 = (int*)(counter + (int)param0);
                do {
                    if(((unsigned char)v6 & 0x1)) {
                        ++v5;
                    }
                    sub_4078BE(&v6);
                    --counter;
                }
                while(counter);
                if(v5) {
                    v6 & 0xFF = (unsigned char)v6 | 0x1;
                }
            }
        }
        if((unsigned short)v6 > 0x8000 || (v6 & 0x1ffff) == 0x18000) {
            if(*(int*)((char*)&v6 + 2) == -1) {
                *(int*)((char*)&v6 + 2) = 0;
                if(*(int*)((char*)&v7 + 2) == -1) {
                    *(int*)((char*)&v7 + 2) = 0;
                    if((unsigned short)(v8 >>> 16) == 0xFFFF) {
                        param0 = (int*)((char*)param0 + 1);
                        (v8 >>> 16) & 0xFFFF = 0x8000;
                    }
                    else {
                        (v8 >>> 16) & 0xFFFF = (unsigned short)(v8 >>> 16) + 1;
                    }
                }
                else {
                    *(int*)((char*)&v7 + 2) = *(int*)((char*)&v7 + 2) + 1;
                }
            }
            else {
                *(int*)((char*)&v6 + 2) = *(int*)((char*)&v6 + 2) + 1;
            }
        }
        int* ptr10 = param0;
        if((unsigned short)ptr10 >= 0x7fff) {
            goto loc_408925;
        }
        else {
            *(short*)ptr2 = (unsigned short)(v6 >>> 16);
            *(int*)((char*)ptr2 + 2) = v7;
            *(int*)((char*)ptr2 + 6) = v8;
            ptr0 = (int*)((int)ptr10 | v12);
        loc_40891A:
            *(short*)((char*)ptr2 + 10) = (unsigned short)ptr0;
        }
    }
    else {
        *(ptr2 + 2) = 0;
        *(ptr2 + 1) = 0;
        *ptr2 = 0;
    }
    return sub_4041A2(v3);
}

int sub_408948(int* param0, int param1, int param2) {
    int v0;
    int v1 = gvar_40B498;
    int v2 = v0;
    int v3 = 4241152;
    int v4 = v1;
    if(param1 != 0) {
        if(param1 < 0) {
            param1 = 0 - param1;
            v3 = 4241504;
        }
        if(param2 == 0) {
            *(short*)&param0[0] = 0;
        }
        while(param1 != 0) {
            int v5 = param1;
            param1 >>= 3;
            v3 += 84;
            if((v5 & 7) != 0) {
                int* ptr0 = (int*)((v5 & 7) * 12 + v3);
                if(*(short*)&ptr0[0] >= 0x8000) {
                    int v6 = ptr0[0];
                    *(int*)((char*)&v6 + 4) = ptr0[1];
                    *(int*)((char*)&v6 + 8) = ptr0[2];
                    *(int*)((char*)&v6 + 2) = *(int*)((char*)&v6 + 2) - 1;
                    ptr0 = &v6;
                }
                sub_408716(param0, ptr0);
            }
        }
    }
    return sub_4041A2(v4);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4089CE(char* param0) {
    char* ptr0 = param0;
    for(int i = sub_408A26((unsigned int)*ptr0); i; i = sub_408A26((unsigned int)*ptr0)) {
        ++ptr0;
    }
    int v0 = (unsigned int)*ptr0;
    char* ptr1 = ptr0 + 1;
    int v1 = v0;
    if(v0 == 45 || v0 == 43) {
        v0 = (unsigned int)*ptr1;
        ++ptr1;
    }
    int result = 0;
    for(int j = v0 >= 48 && v0 <= 57 ? v0 - 48: -1; j != -1; j = v0 >= 48 && v0 <= 57 ? v0 - 48: -1) {
        result = result * 10 + j;
        v0 = (unsigned int)*ptr1;
        ++ptr1;
    }
    if(v1 == 45) {
        result = 0 - result;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_408A26(int param0) {
    if((unsigned int)param0 > 0xff) {
        int v0 = 0;
        if(gvar_40BC98) {
            int v1 = sub_4070AD(1, (int)(int*)((char*)&param0 + 2), 2, (int)&v0, (int)gvar_40BDA4, (int)gvar_40BC94, 1);
            if(v1 && !(unsigned short)(v0 >>> 16) && ((unsigned char)v0 & 0x8)) {
                return 1;
            }
        }
        return 0;
    }
    else if(gvar_40B4A0 > 1) {
        return sub_404318(param0);
    }
    return (unsigned int)*(char*)(param0 * 2 + gvar_40B490) & 0x8;
}

int* unk_lib_sub(int* param0, int* param1, int* param2) {
    int* ptr0;
    int* ptr1;
    int* ptr2 = param1;
    int* ptr3 = param0;
    if(ptr2 >= ptr3 || (int*)((int)ptr2 + (int)param2) <= ptr3) {
        if(!(int*)((int)ptr3 & 0x3)) {
            ptr1 = (int*)((int)param2 >>> 2);
            ptr0 = (int*)((int)param2 & 0x3);
            if((unsigned int)ptr1 < 8) {
            loc_404C3C:
                switch(ptr1) {
                    case 0: {
                    loc_404D23:
                        switch(ptr0) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)ptr3 = *(char*)ptr2;
                                return param0;
                            }
                            case 2: {
                                *(char*)ptr3 = *(char*)ptr2;
                                *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                return param0;
                            }
                            case 3: {
                                *(char*)ptr3 = *(char*)ptr2;
                                *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                                return param0;
                            }
                            default: {
                                throw 0;
                                return param0;
                            }
                        }
                    }
                    case 1: {
                    loc_404D14:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 1) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 1);
                        ptr2 = (int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2);
                        ptr3 = (int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3);
                        break;
                    }
                    case 2: {
                    loc_404D0C:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_404D14;
                    }
                    case 3: {
                    loc_404D04:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_404D14;
                    }
                    case 4: {
                    loc_404CFC:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_404D14;
                    }
                    case 5: {
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_404D14;
                    }
                    case 6: {
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        goto loc_404D0C;
                    }
                    case 7: {
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 7) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 7);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        goto loc_404D04;
                    }
                    default: {
                        throw 0;
                    }
                }
                goto loc_404D23;
            }
            else {
                while(ptr1 != 0) {
                    *ptr3 = *ptr2;
                    ++ptr2;
                    ++ptr3;
                    ptr1 = (int*)((char*)ptr1 - 1);
                }
                switch(ptr0) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)ptr3 = *(char*)ptr2;
                        return param0;
                    }
                    case 2: {
                        *(char*)ptr3 = *(char*)ptr2;
                        *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                        return param0;
                    }
                    case 3: {
                        *(char*)ptr3 = *(char*)ptr2;
                        *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                        *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
        }
        if((unsigned int)param2 >= 4) {
            int* ptr4 = (int*)((int)(param2 - 1) + (int)(int*)((int)ptr3 & 0x3));
            switch((int*)((int)ptr3 & 0x3)) {
                case 1: {
                    ptr0 = (int*)((int)ptr4 & 0x3);
                    *(char*)ptr3 = *(char*)ptr2;
                    *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                    ptr1 = (int*)((int)ptr4 >>> 2);
                    *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                    ptr2 = (int*)((char*)ptr2 + 3);
                    ptr3 = (int*)((char*)ptr3 + 3);
                    if((unsigned int)ptr1 >= 8) {
                        while(ptr1 != 0) {
                            *ptr3 = *ptr2;
                            ++ptr2;
                            ++ptr3;
                            ptr1 = (int*)((char*)ptr1 - 1);
                        }
                        switch(ptr0) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)ptr3 = *(char*)ptr2;
                                return param0;
                            }
                            case 2: {
                                *(char*)ptr3 = *(char*)ptr2;
                                *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                return param0;
                            }
                            case 3: {
                                *(char*)ptr3 = *(char*)ptr2;
                                *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    loc_404C7C:
                        ptr0 = (int*)((int)ptr4 & 0x3);
                        *(char*)ptr3 = *(char*)ptr2;
                        ptr1 = (int*)((int)ptr4 >>> 2);
                        *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                        ptr2 = (int*)((char*)ptr2 + 2);
                        ptr3 = (int*)((char*)ptr3 + 2);
                        if((unsigned int)ptr1 >= 8) {
                            while(ptr1 != 0) {
                                *ptr3 = *ptr2;
                                ++ptr2;
                                ++ptr3;
                                ptr1 = (int*)((char*)ptr1 - 1);
                            }
                            switch(ptr0) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *(char*)ptr3 = *(char*)ptr2;
                                    return param0;
                                }
                                case 2: {
                                    *(char*)ptr3 = *(char*)ptr2;
                                    *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                    return param0;
                                }
                                case 3: {
                                    *(char*)ptr3 = *(char*)ptr2;
                                    *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                    *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        loc_404CA0:
                            ptr0 = (int*)((int)ptr4 & 0x3);
                            *(char*)ptr3 = *(char*)ptr2;
                            ptr2 = (int*)((char*)ptr2 + 1);
                            ptr1 = (int*)((int)ptr4 >>> 2);
                            ptr3 = (int*)((char*)ptr3 + 1);
                            if((unsigned int)ptr1 >= 8) {
                                while(ptr1 != 0) {
                                    *ptr3 = *ptr2;
                                    ++ptr2;
                                    ++ptr3;
                                    ptr1 = (int*)((char*)ptr1 - 1);
                                }
                                switch(ptr0) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)ptr3 = *(char*)ptr2;
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)ptr3 = *(char*)ptr2;
                                        *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)ptr3 = *(char*)ptr2;
                                        *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                        *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                    }
                                }
                                *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 7) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 7);
                                *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6);
                                *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                                goto loc_404CFC;
                            }
                        }
                    }
                    goto loc_404C3C;
                }
                case 2: {
                    goto loc_404C7C;
                }
                case 3: {
                    goto loc_404CA0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_404C34;
        }
        else {
        loc_404C34:
            switch(param2 - 1) {
                case -4: {
                    *(char*)ptr3 = *(char*)ptr2;
                    *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                    *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                    return param0;
                }
                case -3: {
                    *(char*)ptr3 = *(char*)ptr2;
                    *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                    return param0;
                }
                case -2: {
                    *(char*)ptr3 = *(char*)ptr2;
                    return param0;
                }
                case -1: {
                    return param0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_404C3C;
        }
    }
    else {
        int* ptr5 = (int*)((int)ptr2 + (int)param2) - 1;
        int* ptr6 = (int*)((int)ptr3 + (int)param2) - 1;
        if(!(int*)((int)ptr6 & 0x3)) {
            ptr1 = (int*)((int)param2 >>> 2);
            ptr0 = (int*)((int)param2 & 0x3);
            if((unsigned int)ptr1 >= 8) {
                while(ptr1 != 0) {
                    *ptr6 = *ptr5;
                    --ptr5;
                    --ptr6;
                    ptr1 = (int*)((char*)ptr1 - 1);
                }
                switch(ptr0) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                        return param0;
                    }
                    case 2: {
                        *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                        *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                        return param0;
                    }
                    case 3: {
                        *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                        *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                        *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
        loc_404DA6:
            switch((int*)(0 - (int)ptr1)) {
                case 0: {
                    switch(ptr0) {
                        case 0: {
                            return param0;
                        }
                        case 1: {
                            *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                            return param0;
                        }
                        case 2: {
                            *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                            *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                            return param0;
                        }
                        case 3: {
                            *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                            *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                            *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
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
            goto loc_404DBF;
        }
        else {
        loc_404DC8:
            switch(param2) {
                case 0: {
                    return param0;
                }
                case 1: {
                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                    return param0;
                }
                case 2: {
                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                    *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                    return param0;
                }
                case 3: {
                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                    *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                    *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
                    return param0;
                }
            }
        loc_404DBF:
            int* ptr7 = (int*)((int)param2 - (int)(int*)((int)ptr6 & 0x3));
            switch((int*)((int)ptr6 & 0x3)) {
                case 1: {
                    ptr0 = (int*)((int)ptr7 & 0x3);
                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                    ptr5 = (int*)((char*)ptr5 - 1);
                    ptr1 = (int*)((int)ptr7 >>> 2);
                    ptr6 = (int*)((char*)ptr6 - 1);
                    if((unsigned int)ptr1 >= 8) {
                        while(ptr1 != 0) {
                            *ptr6 = *ptr5;
                            --ptr5;
                            --ptr6;
                            ptr1 = (int*)((char*)ptr1 - 1);
                        }
                        switch(ptr0) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                return param0;
                            }
                            case 2: {
                                *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                                return param0;
                            }
                            case 3: {
                                *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                                *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    loc_404E03:
                        ptr0 = (int*)((int)ptr7 & 0x3);
                        *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                        ptr1 = (int*)((int)ptr7 >>> 2);
                        *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                        ptr5 = (int*)((char*)ptr5 - 2);
                        ptr6 = (int*)((char*)ptr6 - 2);
                        if((unsigned int)ptr1 >= 8) {
                            while(ptr1 != 0) {
                                *ptr6 = *ptr5;
                                --ptr5;
                                --ptr6;
                                ptr1 = (int*)((char*)ptr1 - 1);
                            }
                            switch(ptr0) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                    return param0;
                                }
                                case 2: {
                                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                    *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                                    return param0;
                                }
                                case 3: {
                                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                    *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                                    *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                            goto loc_404E2B;
                        }
                    }
                    goto loc_404DA6;
                }
                case 2: {
                    goto loc_404E03;
                }
                case 3: {
                loc_404E2B:
                    ptr0 = (int*)((int)ptr7 & 0x3);
                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                    *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                    ptr1 = (int*)((int)ptr7 >>> 2);
                    *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
                    ptr5 = (int*)((char*)ptr5 - 3);
                    ptr6 = (int*)((char*)ptr6 - 3);
                    if((unsigned int)ptr1 >= 8) {
                        while(ptr1 != 0) {
                            *ptr6 = *ptr5;
                            --ptr5;
                            --ptr6;
                            ptr1 = (int*)((char*)ptr1 - 1);
                        }
                        switch(ptr0) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                return param0;
                            }
                            case 2: {
                                *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                                return param0;
                            }
                            case 3: {
                                *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                                *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    }
                    goto loc_404DA6;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_404DC8;
        }
    }
}

int* unk_lib_sub2(int* param0, int* param1, int* param2) {
    int* ptr0;
    int* ptr1;
    int* ptr2 = param1;
    int* ptr3 = param0;
    if(ptr2 >= ptr3 || (int*)((int)ptr2 + (int)param2) <= ptr3) {
        if(!(int*)((int)ptr3 & 0x3)) {
            ptr1 = (int*)((int)param2 >>> 2);
            ptr0 = (int*)((int)param2 & 0x3);
            if((unsigned int)ptr1 < 8) {
            loc_405A5C:
                switch(ptr1) {
                    case 0: {
                    loc_405B43:
                        switch(ptr0) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)ptr3 = *(char*)ptr2;
                                return param0;
                            }
                            case 2: {
                                *(char*)ptr3 = *(char*)ptr2;
                                *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                return param0;
                            }
                            case 3: {
                                *(char*)ptr3 = *(char*)ptr2;
                                *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                                return param0;
                            }
                            default: {
                                throw 0;
                                return param0;
                            }
                        }
                    }
                    case 1: {
                    loc_405B34:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 1) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 1);
                        ptr2 = (int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2);
                        ptr3 = (int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3);
                        break;
                    }
                    case 2: {
                    loc_405B2C:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_405B34;
                    }
                    case 3: {
                    loc_405B24:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_405B34;
                    }
                    case 4: {
                    loc_405B1C:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_405B34;
                    }
                    case 5: {
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_405B34;
                    }
                    case 6: {
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        goto loc_405B2C;
                    }
                    case 7: {
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 7) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 7);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        goto loc_405B24;
                    }
                    default: {
                        throw 0;
                    }
                }
                goto loc_405B43;
            }
            else {
                while(ptr1 != 0) {
                    *ptr3 = *ptr2;
                    ++ptr2;
                    ++ptr3;
                    ptr1 = (int*)((char*)ptr1 - 1);
                }
                switch(ptr0) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)ptr3 = *(char*)ptr2;
                        return param0;
                    }
                    case 2: {
                        *(char*)ptr3 = *(char*)ptr2;
                        *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                        return param0;
                    }
                    case 3: {
                        *(char*)ptr3 = *(char*)ptr2;
                        *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                        *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
        }
        if((unsigned int)param2 >= 4) {
            int* ptr4 = (int*)((int)(param2 - 1) + (int)(int*)((int)ptr3 & 0x3));
            switch((int*)((int)ptr3 & 0x3)) {
                case 1: {
                    ptr0 = (int*)((int)ptr4 & 0x3);
                    *(char*)ptr3 = *(char*)ptr2;
                    *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                    ptr1 = (int*)((int)ptr4 >>> 2);
                    *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                    ptr2 = (int*)((char*)ptr2 + 3);
                    ptr3 = (int*)((char*)ptr3 + 3);
                    if((unsigned int)ptr1 >= 8) {
                        while(ptr1 != 0) {
                            *ptr3 = *ptr2;
                            ++ptr2;
                            ++ptr3;
                            ptr1 = (int*)((char*)ptr1 - 1);
                        }
                        switch(ptr0) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)ptr3 = *(char*)ptr2;
                                return param0;
                            }
                            case 2: {
                                *(char*)ptr3 = *(char*)ptr2;
                                *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                return param0;
                            }
                            case 3: {
                                *(char*)ptr3 = *(char*)ptr2;
                                *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    loc_405A9C:
                        ptr0 = (int*)((int)ptr4 & 0x3);
                        *(char*)ptr3 = *(char*)ptr2;
                        ptr1 = (int*)((int)ptr4 >>> 2);
                        *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                        ptr2 = (int*)((char*)ptr2 + 2);
                        ptr3 = (int*)((char*)ptr3 + 2);
                        if((unsigned int)ptr1 >= 8) {
                            while(ptr1 != 0) {
                                *ptr3 = *ptr2;
                                ++ptr2;
                                ++ptr3;
                                ptr1 = (int*)((char*)ptr1 - 1);
                            }
                            switch(ptr0) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *(char*)ptr3 = *(char*)ptr2;
                                    return param0;
                                }
                                case 2: {
                                    *(char*)ptr3 = *(char*)ptr2;
                                    *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                    return param0;
                                }
                                case 3: {
                                    *(char*)ptr3 = *(char*)ptr2;
                                    *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                    *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        loc_405AC0:
                            ptr0 = (int*)((int)ptr4 & 0x3);
                            *(char*)ptr3 = *(char*)ptr2;
                            ptr2 = (int*)((char*)ptr2 + 1);
                            ptr1 = (int*)((int)ptr4 >>> 2);
                            ptr3 = (int*)((char*)ptr3 + 1);
                            if((unsigned int)ptr1 >= 8) {
                                while(ptr1 != 0) {
                                    *ptr3 = *ptr2;
                                    ++ptr2;
                                    ++ptr3;
                                    ptr1 = (int*)((char*)ptr1 - 1);
                                }
                                switch(ptr0) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)ptr3 = *(char*)ptr2;
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)ptr3 = *(char*)ptr2;
                                        *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)ptr3 = *(char*)ptr2;
                                        *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                                        *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                    }
                                }
                                *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 7) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 7);
                                *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6);
                                *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                                goto loc_405B1C;
                            }
                        }
                    }
                    goto loc_405A5C;
                }
                case 2: {
                    goto loc_405A9C;
                }
                case 3: {
                    goto loc_405AC0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_405A54;
        }
        else {
        loc_405A54:
            switch(param2 - 1) {
                case -4: {
                    *(char*)ptr3 = *(char*)ptr2;
                    *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                    *(char*)((char*)ptr3 + 2) = *(char*)((char*)ptr2 + 2);
                    return param0;
                }
                case -3: {
                    *(char*)ptr3 = *(char*)ptr2;
                    *(char*)((char*)ptr3 + 1) = *(char*)((char*)ptr2 + 1);
                    return param0;
                }
                case -2: {
                    *(char*)ptr3 = *(char*)ptr2;
                    return param0;
                }
                case -1: {
                    return param0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_405A5C;
        }
    }
    else {
        int* ptr5 = (int*)((int)ptr2 + (int)param2) - 1;
        int* ptr6 = (int*)((int)ptr3 + (int)param2) - 1;
        if(!(int*)((int)ptr6 & 0x3)) {
            ptr1 = (int*)((int)param2 >>> 2);
            ptr0 = (int*)((int)param2 & 0x3);
            if((unsigned int)ptr1 >= 8) {
                while(ptr1 != 0) {
                    *ptr6 = *ptr5;
                    --ptr5;
                    --ptr6;
                    ptr1 = (int*)((char*)ptr1 - 1);
                }
                switch(ptr0) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                        return param0;
                    }
                    case 2: {
                        *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                        *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                        return param0;
                    }
                    case 3: {
                        *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                        *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                        *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
        loc_405BC6:
            switch((int*)(0 - (int)ptr1)) {
                case 0: {
                    switch(ptr0) {
                        case 0: {
                            return param0;
                        }
                        case 1: {
                            *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                            return param0;
                        }
                        case 2: {
                            *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                            *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                            return param0;
                        }
                        case 3: {
                            *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                            *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                            *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
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
            goto loc_405BDF;
        }
        else {
        loc_405BE8:
            switch(param2) {
                case 0: {
                    return param0;
                }
                case 1: {
                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                    return param0;
                }
                case 2: {
                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                    *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                    return param0;
                }
                case 3: {
                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                    *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                    *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
                    return param0;
                }
            }
        loc_405BDF:
            int* ptr7 = (int*)((int)param2 - (int)(int*)((int)ptr6 & 0x3));
            switch((int*)((int)ptr6 & 0x3)) {
                case 1: {
                    ptr0 = (int*)((int)ptr7 & 0x3);
                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                    ptr5 = (int*)((char*)ptr5 - 1);
                    ptr1 = (int*)((int)ptr7 >>> 2);
                    ptr6 = (int*)((char*)ptr6 - 1);
                    if((unsigned int)ptr1 >= 8) {
                        while(ptr1 != 0) {
                            *ptr6 = *ptr5;
                            --ptr5;
                            --ptr6;
                            ptr1 = (int*)((char*)ptr1 - 1);
                        }
                        switch(ptr0) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                return param0;
                            }
                            case 2: {
                                *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                                return param0;
                            }
                            case 3: {
                                *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                                *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    loc_405C23:
                        ptr0 = (int*)((int)ptr7 & 0x3);
                        *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                        ptr1 = (int*)((int)ptr7 >>> 2);
                        *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                        ptr5 = (int*)((char*)ptr5 - 2);
                        ptr6 = (int*)((char*)ptr6 - 2);
                        if((unsigned int)ptr1 >= 8) {
                            while(ptr1 != 0) {
                                *ptr6 = *ptr5;
                                --ptr5;
                                --ptr6;
                                ptr1 = (int*)((char*)ptr1 - 1);
                            }
                            switch(ptr0) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                    return param0;
                                }
                                case 2: {
                                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                    *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                                    return param0;
                                }
                                case 3: {
                                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                    *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                                    *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                            goto loc_405C4B;
                        }
                    }
                    goto loc_405BC6;
                }
                case 2: {
                    goto loc_405C23;
                }
                case 3: {
                loc_405C4B:
                    ptr0 = (int*)((int)ptr7 & 0x3);
                    *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                    *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                    ptr1 = (int*)((int)ptr7 >>> 2);
                    *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
                    ptr5 = (int*)((char*)ptr5 - 3);
                    ptr6 = (int*)((char*)ptr6 - 3);
                    if((unsigned int)ptr1 >= 8) {
                        while(ptr1 != 0) {
                            *ptr6 = *ptr5;
                            --ptr5;
                            --ptr6;
                            ptr1 = (int*)((char*)ptr1 - 1);
                        }
                        switch(ptr0) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                return param0;
                            }
                            case 2: {
                                *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                                return param0;
                            }
                            case 3: {
                                *(char*)((char*)ptr6 + 3) = *(char*)((char*)ptr5 + 3);
                                *(char*)((char*)ptr6 + 2) = *(char*)((char*)ptr5 + 2);
                                *(char*)((char*)ptr6 + 1) = *(char*)((char*)ptr5 + 1);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    }
                    goto loc_405BC6;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_405BE8;
        }
    }
}

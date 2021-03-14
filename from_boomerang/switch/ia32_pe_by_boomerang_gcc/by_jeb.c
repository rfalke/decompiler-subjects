
int start() {
    short v0;
    if(gvar_403000) {
        int3();
    }
    v0 = fnstcw(v0);
    v0 = fldcw((unsigned short)(((unsigned int)v0 & 0xf0c0) | 0x33f));
    /*NO_RETURN*/ sub_401470(&gvar_401080);
}

int sub_401140() {
    return *(int*)(gvar_403040 + 4)();
}

unsigned int sub_401160(int* param0) {
    int v0 = 12;
    int* ptr0 = param0;
    int* ptr1 = param0;
    while(v0 != 0) {
        *ptr1 = 0;
        ++ptr1;
        --v0;
    }
    *ptr0 = 48;
    unsigned char v1 = *(int*)&gvar_402000;
    *(ptr0 + 9) = -1;
    *(ptr0 + 1) = &→cygwin1.dll!abort;
    *(unsigned char*)(ptr0 + 5) = v1;
    unsigned int v2 = gvar_403010;
    *(ptr0 + 2) = &sub_401140;
    unsigned int v3 = gvar_402008;
    *(ptr0 + 7) = 0;
    *(unsigned int*)(ptr0 + 8) = v2;
    unsigned int result = gvar_402004;
    *(unsigned int*)(ptr0 + 11) = v3;
    *(unsigned int*)(ptr0 + 10) = result;
    return result;
}

int sub_401310(int param0) {
    int result;
    char v0;
    char v1;
    int v2;
    int v3 = 31;
    int v4 = 1;
    int v5 = v2;
    int v6 = param0;
    do {
        *(char*)(v3 + (int)&v0) = v4 & v6 ? 'A': 'a';
        v4 *= 2;
        --v3;
    }
    while(v3 >= 0);
    int* ptr0 = "-LIBGCCW32-EH-SJLJ-GTHR-CYGWIN";
    int* ptr1 = &v1;
    for(int i = 7; i != 0; --i) {
        *ptr1 = *ptr0;
        ++ptr0;
        ++ptr1;
    }
    *(short*)ptr1 = 0x4e49;
    *(char*)((char*)ptr1 + 2) = 0;
    ATOM v7 = /*BAD_CALL!*/ →KERNEL32.dll!AddAtomA(&v0);
    if((unsigned short)v7) {
        int* ptr2 = sub_4013A0((short)v7);
        result = (unsigned int)(unsigned short)v7;
        if(ptr2 != v6) {
            return 0;
        }
    }
    else {
        result = 0;
    }
    return result;
}

int* sub_4013A0(ATOM nAtom) {
    char v0;
    int* ptr0;
    int* ptr1 = ptr0;
    int* result = NULL;
    UINT v1 = →KERNEL32.dll!GetAtomNameA(nAtom, &v0, 63);
    if(v1) {
        int v2 = 31;
        int v3 = 1;
        do {
            if(*(char*)(v2 + (int)&v0) == 65) {
                result = (int*)(v3 | (int)result);
            }
            v3 *= 2;
            --v2;
        }
        while(v2 >= 0);
        if(*result == 48) {
            return result;
        }
    }
    /*NO_RETURN*/ →cygwin1.dll!abort();
}

int sub_401410() {
    int result = sub_401310(gvar_403040);
    if(!(unsigned short)result) {
        /*NO_RETURN*/ →cygwin1.dll!abort();
    }
    return result;
}

void sub_401470(int param0) {
    int v0;
    int v1;
    int v2 = param0;
    int v3 = v1;
    int v4 = sub_401530(v2, 0);
    unsigned int* ptr0 = &v0;
    if(v4) {
        v0 = 0;
    loc_40149D:
        --ptr0;
        *ptr0 = &loc_4014A3;
        /*BAD_CALL!*/ cygwin1.dll!dll_crt0__FP11per_process();
    }
    ptr0 -= 44;
    int* ptr1 = (int*)(ptr0 + 2);
    *(int*)(ptr0 + 2) = 0;
    *(ptr0 + 1) = ptr1;
    *ptr0 = v2;
    --ptr0;
    *ptr0 = &loc_4014C1;
    /*BAD_CALL!*/ sub_401530(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2));
    ptr0 -= 2;
    *ptr0 = ptr1;
    goto loc_40149D;
}

int sub_401530(int param0, int param1) {
    int result;
    int v0;
    int v1;
    int v2 = v1;
    int v3 = 0;
    int v4 = v0;
    int v5 = param1;
    if(!v5) {
        int v6 = 8;
        int v7 = →cygwin1.dll!cygwin_internal();
        result = 0;
        if(v7 != -1) {
            v5 = v7;
            v3 = 1;
            goto loc_401544;
        }
    }
    else {
    loc_401544:
        *(int*)(v5 + 4) = 168;
        *(int*)(v5 + 8) = 1005;
        *(int*)(v5 + 12) = 9;
        *(int*)(v5 + 128) = 0;
        *(int*)(v5 + 132) = 112;
        *(int*)(v5 + 44) = &gvar_4017A0;
        *(int*)(v5 + 48) = &gvar_4017AC;
        *(int*)(v5 + 20) = 4206624;
        if(v3) {
            gvar_403024 = *(unsigned int*)(v5 + 164);
        }
        else {
            *(int*)(v5 + 16) = &gvar_403024;
        }
        *(int*)(v5 + 120) = 0;
        *(int*)(v5 + 72) = &sub_401730;
        *(int*)(v5 + 76) = &sub_401720;
        *(int*)(v5 + 40) = param0;
        *(int*)(v5 + 80) = &sub_401710;
        *(int*)(v5 + 84) = &sub_401700;
        *(int*)(v5 + 36) = 4206632;
        *(int*)v5 = v2;
        *(int*)(v5 + 24) = &→cygwin1.dll!malloc;
        *(int*)(v5 + 28) = &→cygwin1.dll!free;
        *(int*)(v5 + 32) = &→cygwin1.dll!realloc;
        *(int*)(v5 + 68) = &→cygwin1.dll!calloc;
        HMODULE v8 = →KERNEL32.dll!GetModuleHandleA(NULL);
        *(HMODULE*)(v5 + 124) = v8;
        *(int*)(v5 + 52) = &gvar_402000;
        *(int*)(v5 + 56) = 0x402010;
        *(int*)(v5 + 60) = &gvar_403000;
        *(int*)(v5 + 64) = 0x403080;
        sub_4016B0();
        result = 1;
    }
    return result;
}

int sub_401670(int* param0, unsigned int param1, int param2) {
    int result;
    int v0;
    int* ptr0 = param0;
    int v1 = v0;
    unsigned int v2 = param1;
    if((unsigned int)ptr0 < v2) {
        int v3 = param2;
        do {
            int* ptr1 = (int*)(*(ptr0 + 1) + v3);
            result = *ptr0;
            ptr0 += 2;
            *ptr1 = *ptr1 + result;
        }
        while((unsigned int)ptr0 < v2);
    }
    return result;
}

int sub_4016B0() {
    return sub_401670((int*)&gvar_403000, &gvar_403000, &MZHeader);
}

void sub_401700() {
}

void sub_401710() {
}

void sub_401720() {
}

void sub_401730() {
}

int sub_401790() {
    int* ptr0;
    int result;
    char v0;
    while(!gvar_403040) {
        int* ptr1 = "-LIBGCCW32-EH-SJLJ-GTHR-CYGWIN";
        int v1 = 0x41414141;
        int* ptr2 = &v0;
        int v2 = 7;
        int v3 = 0x41414141;
        int v4 = 0x41414141;
        int v5 = 0x41414141;
        int v6 = 0x41414141;
        int v7 = 0x41414141;
        int v8 = 0x41414141;
        int v9 = 0x41414141;
        while(v2 != 0) {
            *ptr2 = *ptr1;
            ++ptr1;
            ++ptr2;
            --v2;
        }
        *(short*)ptr2 = 0x4e49;
        *(char*)((char*)ptr2 + 2) = 0;
        ATOM v10 = →KERNEL32.dll!FindAtomA(&v1);
        short nAtom = (short)v10;
        if(!nAtom) {
            void* _Block = →cygwin1.dll!malloc(48);
            if(!_Block) {
                /*NO_RETURN*/ →cygwin1.dll!abort();
            }
            sub_401160((int*)_Block);
            int v11 = sub_401310((int)_Block);
            if((unsigned short)v11) {
                result = →cygwin1.dll!pthread_atfork();
                ptr0 = (int*)_Block;
            }
            else {
                →cygwin1.dll!free(_Block);
                ATOM v12 = →KERNEL32.dll!FindAtomA(&v1);
                nAtom = (short)v12;
                ptr0 = sub_4013A0(nAtom);
            }
        }
        else {
            ptr0 = sub_4013A0(nAtom);
        }
        gvar_403040 = ptr0;
        gvar_403030 = ptr0 + 1;
        gvar_403050 = ptr0 + 2;
        return result;
    }
    return result;
}

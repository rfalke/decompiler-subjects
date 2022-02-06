
void start() {
    int v0;
    char v1;
    char v2;
    int v3;
    char v4;
    char v5;
    char v6;
    int v7;
    int v8 = &gvar_402258;
    int v9 = &→MSVCRT.dll!_except_handler3;
    int v10 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v10;
    int v11 = v7;
    int* ptr0 = &v0;
    int v12 = 0;
    _set_app_type(2);
    gvar_40312C = 0xffffffff;
    gvar_403130 = 0xffffffff;
    int* ptr1 = __p__fmode();
    ptr1[0] = gvar_403120;
    int* ptr2 = __p__commode();
    ptr2[0] = gvar_40311C;
    gvar_403128 = *(unsigned int*)0x451E;
    sub_401BE0();
    if(!gvar_403040) {
        __setusermatherr((_UserMathErrorFunctionPointer)&gvar_401BD0);
    }
    sub_401BB0();
    →MSVCRT.dll!_initterm((_PVFV*)0x403010, (_PVFV*)0x403014);
    unsigned int v13 = gvar_403118;
    MSVCRT.dll!__getmainargs((int)&v4, (int)&v5, (int)&v1, (int)gvar_403114, (int)&v13);
    →MSVCRT.dll!_initterm((_PVFV*)0x403000, (_PVFV*)0x40300C);
    char** i = __p__acmdln();
    char* ptr3 = i[0];
    if(ptr3[0] == 34) {
        do {
            ++ptr3;
            i = (unsigned int)ptr3[0] | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
        }
        while(ptr3[0] && (unsigned char)i != 34);
        if(ptr3[0] == 34) {
            ++ptr3;
        }
    }
    else {
        while((unsigned char)ptr3[0] > 32) {
            ++ptr3;
        }
    }
    for(i = (unsigned int)ptr3[0] | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8); ptr3[0] && (unsigned char)ptr3[0] <= 32; i = (unsigned int)ptr3[0] | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8)) {
        ++ptr3;
    }
    *(int*)&v6 = 0;
    /*BAD_CALL!*/ GetStartupInfoA(&v2);
    HMODULE v14 = GetModuleHandleA(NULL);
    int _Code = sub_401BFC((int)v14, 0, (int)ptr3, (int)(v6 & 0x1 ? (void*)(unsigned short)v3: (void*)0xA));
    int v15 = _Code;
    /*NO_RETURN*/ exit(_Code);
}

unsigned int sub_401BB0() {
    return →MSVCRT.dll!_controlfp(0x10000, 0x30000);
}

void sub_401BE0() {
}

int sub_401BFC(int param0, int param1, int param2, int param3) {
    int v0 = param3;
    int v1 = param3;
    int v2 = param2;
    int v3 = param2;
    int v4 = param1;
    int v5 = param1;
    int v6 = param0;
    int v7 = param0;
    int v8 = →MFC42.DLL!#1576();
    int v9 = v7;
    int* ptr0 = &param0;
    jump v9;
}


void start() {
    char v0;
    int v1;
    char v2;
    int v3;
    char v4;
    char v5;
    int v6;
    int v7 = &gvar_402258;
    int v8 = &→MSVCRT.dll!_except_handler3;
    int v9 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v9;
    int v10 = v6;
    int* ptr0 = &v1;
    int v11 = 0;
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
    unsigned int v12 = gvar_403118;
    MSVCRT.dll!__getmainargs((int)&v4, (int)&v5, (int)&v0, (int)gvar_403114, (int)&v12);
    →MSVCRT.dll!_initterm((_PVFV*)0x403000, (_PVFV*)0x40300C);
    char** i = __p__acmdln();
    char* ptr3 = i[0];
    if(ptr3[0] == 34) {
        do {
            ++ptr3;
            i = (unsigned int)ptr3[0] | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
        }
        while((unsigned char)i && (unsigned char)i != 34);
        if(ptr3[0] == 34) {
            ++ptr3;
        }
    }
    else {
        while((unsigned char)ptr3[0] > 32) {
            ++ptr3;
        }
    }
    for(i = (unsigned int)ptr3[0] | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8); (unsigned char)i && (unsigned char)i <= 32; i = (unsigned int)ptr3[0] | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8)) {
        ++ptr3;
    }
    int v13 = 0;
    GetStartupInfoA(&v2);
    void* ptr4 = ((unsigned char)v13 & 0x1) != 0 ? (void*)(unsigned short)v3: (void*)0xA;
    int v14 = (int)ptr3;
    int v15 = 0;
    HMODULE v16 = GetModuleHandleA(NULL);
    int _Code = sub_401BFC((int)v16, v15, v14, (int)ptr4);
    int v17 = _Code;
    /*NO_RETURN*/ exit(_Code);
}

unsigned int sub_401BB0() {
    return →MSVCRT.dll!_controlfp(0x10000, 0x30000);
}

void sub_401BE0() {
}

int sub_401BFC(int param0, int param1, int param2, int param3) {
    →MFC42.DLL!#1576();
    jump param0;
}

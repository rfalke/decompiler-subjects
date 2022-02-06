
int _global_unwind2(PVOID TargetFrame) {
    int v0;
    int v1;
    int result;
    int v2 = v1;
    int* ptr0 = &v0;
    →KERNEL32.dll!RtlUnwind(TargetFrame, (PVOID)&loc_401DA4, NULL, NULL);
    return result;
}

int start() {
    char v0;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    unsigned int v6;
    short v7;
    char v8;
    int v9;
    int v10;
    _EXCEPTION_POINTERS* ptr0;
    int v11;
    int v12;
    int* ptr1 = &v3;
    int v13 = &gvar_4040F0;
    int v14 = &sub_401E84;
    int v15 = *(int*)__FS_BASE;
    int v16 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v16;
    int* ptr2 = &v16;
    char v17 = &v0 == 108;
    char v18 = (int)&v6 < 0;
    char v19 = __parity__((unsigned char)&v0 - 108);
    char v20 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v16 ^ 0x58) ^ (int)&v6) >>> 4) & 0x1);
    char v21 = (unsigned int)&v16 < 88;
    char v22 = (int)(int*)((int)(int*)((int)&v16 ^ (int)&v6) & (int)(int*)((int)&v16 ^ 0x58)) < 0;
    int v23 = v9;
    int* ptr3 = &v10;
    DWORD v24 = GetVersion();
    char v25 = 1;
    char v26 = 0;
    char v27 = 1;
    char v28 = 0;
    char v29 = 0;
    unsigned int v30 = (unsigned int)(unsigned char)(v24 >>> 8);
    gvar_405580 = (unsigned int)(unsigned char)(v24 >>> 8);
    DWORD v31 = v24;
    unsigned int v32 = (unsigned int)(unsigned char)v31;
    char v33 = v32 ? 0: 1;
    char v34 = v32 >= 0x80000000;
    char v35 = __parity__((unsigned char)v32);
    char v36 = 0;
    char v37 = 0;
    gvar_40557C = v32;
    unsigned int v38 = v32;
    int v39 = (int)(v32 * 0x100);
    char v40 = (v38 >>> 24) & 0x1;
    char v41 = 0;
    char v42 = v39 ? 0: 1;
    char v43 = v39 < 0;
    char v44 = __parity__((unsigned char)v39);
    int v45 = v39;
    unsigned int v46 = (unsigned int)(v39 + v30);
    char v47 = v46 ? 0: 1;
    char v48 = v46 >= 0x80000000;
    char v49 = __parity__((unsigned char)v46);
    char v50 = (((v30 ^ v45) ^ v46) >>> 4) & 0x1;
    char v51 = __carry__(v30, v45);
    char v52 = ((v46 ^ v45) & ~(v30 ^ v45)) < 0;
    gvar_405578 = v46;
    DWORD v53 = v24;
    unsigned int v54 = (unsigned int)(v24 >>> 16);
    char v55 = (v53 >>> 15) & 0x1;
    char v56 = v52;
    char v57 = v54 ? 0: 1;
    char v58 = v54 >= 0x80000000;
    char v59 = __parity__((unsigned char)v54);
    gvar_405574 = v54;
    int v60 = 0;
    char v61 = 1;
    char v62 = 0;
    char v63 = 1;
    char v64 = 0;
    char v65 = 0;
    int v66 = sub_401D50(0);
    unsigned int j = (unsigned int)v11;
    char v67 = v66 ? 0: 1;
    char v68 = v66 < 0;
    char v69 = __parity__((unsigned char)v66);
    char v70 = 0;
    char v71 = 0;
    if(v67) {
        /*NO_RETURN*/ sub_40146B();  // } (starts at 4013BCh)
    }
    int v72 = 0;  // __try{ (see __except:40143Bh)
    UINT v73 = sub_401BA5(j);
    LPSTR v74 = GetCommandLineA();
    gvar_405A78 = v74;
    int v75 = sub_401A73(v12);
    gvar_40555C = v75;
    unsigned int v76 = sub_401826(v12);
    unsigned int* ptr4 = sub_40176D();
    int v77 = sub_40148F();
    *(int*)&v8 = 0;
    LPSTARTUPINFOA v78 = &v1;
    GetStartupInfoA(&v1);
    sub_401715();
    int v79 = v5;
    char v80 = v8 & 0x1 ? 0: 1;
    char v81 = (v8 & 0x1) < 0;
    char v82 = __parity__(v8 & 0x1);
    char v83 = 0;
    char v84 = 0;
    int v85 = v80 ? 10: (int)v7;
    HMODULE hInstance = GetModuleHandleA(NULL);
    HWND v86 = sub_401000(hInstance, 0, v79, v80 ? 10: (int)v7);
    HWND v87 = v86;
    int v88 = sub_4014BC((int)v86);
    _EXCEPTION_POINTERS* ExceptionInfo = ptr0;
    EXCEPTION_RECORD* ptr5 = ExceptionInfo->ExceptionRecord;
    unsigned int v89 = (unsigned int)ptr5->ExceptionCode;
    v6 = (unsigned int)ptr5->ExceptionCode;
    LONG v90 = sub_401591(v89, ExceptionInfo);
    int v91 = v4;
    int v92 = v2;
    int v93 = v11;  // } (starts at 4013BCh)
    int* ptr6 = &v10;  // } (starts at 4013BCh)
    jump v93;  // } (starts at 4013BCh)
}

HWND sub_401000(HINSTANCE hInstance, int param1, int param2, int nCmdShow) {
    HWND hWnd;
    HWND result;
    BOOL v0;
    int v1;
    LoadStringA(hInstance, 103, (LPSTR)0x4054F4, 100);
    LoadStringA(hInstance, 109, (LPSTR)0x405490, 100);
    sub_4010C0(hInstance);
    HWND v2 = sub_401150(hInstance, nCmdShow);
    if(!v2) {
        return 0;
    }
    HACCEL hAccTable = LoadAcceleratorsA(hInstance, (LPCSTR)0x6D);
    BOOL v3 = GetMessageA(&hWnd, NULL, 0, 0);
    if(v3) {
        int v4 = v1;
        do {
            int v5 = TranslateAcceleratorA(hWnd, hAccTable, &hWnd);
            if(!v5) {
                TranslateMessage((MSG*)&hWnd);
                DispatchMessageA((MSG*)&hWnd);
            }
            v0 = GetMessageA(&hWnd, NULL, 0, 0);
        }
        while(v0);
    }
    return result;
}

ATOM sub_4010C0(HINSTANCE hInstance) {
    int v0 = 48;
    int v1 = 3;
    int v2 = &gvar_4011B0;
    int v3 = 0;
    int v4 = 0;
    HINSTANCE hInstance1 = hInstance;
    HICON v5 = LoadIconA(hInstance, (LPCSTR)0x6B);
    HCURSOR v6 = LoadCursorA(NULL, (LPCSTR)0x7F00);
    int v7 = 6;
    int v8 = 109;
    int v9 = 0x405490;
    HICON v10 = LoadIconA(hInstance1, (LPCSTR)0x6C);
    return RegisterClassExA(&v0);
}

HWND sub_401150(HINSTANCE hInstance, int nCmdShow) {
    gvar_405558 = hInstance;
    HWND hWnd = CreateWindowExA(0, (LPCSTR)0x405490, (LPCSTR)0x4054F4, 0xcf0000, 0x80000000, 0, 0x80000000, 0, NULL, NULL, hInstance, NULL);
    if(!hWnd) {
        return 0;
    }
    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);
    return (HWND)0x1;
}

void sub_401446() {
    char v0 = gvar_405564 == 1;
    char v1 = (int)gvar_405564 < 1;
    char v2 = __parity__((unsigned char)gvar_405564 - 1);
    char v3 = gvar_405564 < 1;
    char v4 = (((gvar_405564 - 1) ^ gvar_405564) & (gvar_405564 ^ 0x1)) < 0;
    char v5 = (((gvar_405564 - 1) ^ (gvar_405564 ^ 0x1)) >>> 4) & 0x1;
    jump v0 ? &sub_40144F: &sub_401454;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40144F() {
    /*BAD_CALL!*/ sub_401F5C();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401454(int param0) {
    sub_401F95(param0);
    return gvar_405030{sub_4014CD}(0xFF);
}

void sub_40146B() {
    char v0 = gvar_405564 == 1;
    char v1 = (int)gvar_405564 < 1;
    char v2 = __parity__((unsigned char)gvar_405564 - 1);
    char v3 = gvar_405564 < 1;
    char v4 = (((gvar_405564 - 1) ^ gvar_405564) & (gvar_405564 ^ 0x1)) < 0;
    char v5 = (((gvar_405564 - 1) ^ (gvar_405564 ^ 0x1)) >>> 4) & 0x1;
    jump v0 ? &sub_401474: &sub_401479;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401474() {
    /*BAD_CALL!*/ sub_401F5C();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401479(int param0) {
    int v0;
    void* ptr0;
    int v1 = param0;
    int v2 = sub_401F95(v1);
    int v3 = v0;
    v0 = 0xFF;
    int* ptr1 = &ptr0;
    /*BAD_CALL!*/ sub_40148E();
}

int sub_40148F() {
    unsigned int v0 = gvar_405A74;
    char v1 = v0 ? 0: 1;
    char v2 = v0 >= 0x80000000;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    jump v1 ? &sub_40149A: &sub_401498;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401498() {
    int v0;
    /*BAD_CALL!*/ v0{sub_40149A}();
}

int sub_40149A() {
    sub_401577((int*)0x405008, 0x405010);
    return sub_401577((int*)0x405000, 4214788);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4014BC(int param0) {
    return sub_4014DE(param0, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4014CD(int param0) {
    return sub_4014DE(param0, 1, 0);
}

int sub_4014DE(UINT uExitCode, unsigned int param1, int param2) {
    UINT v0;
    if(gvar_4055B0 == 1) {
        HANDLE hProcess = GetCurrentProcess();
        TerminateProcess(hProcess, uExitCode);
    }
    UINT v1 = v0;
    gvar_4055AC = 1;
    gvar_4055A8 = (unsigned char)param2;
    if(!param1) {
        unsigned int v2 = gvar_405A70;
        if(v2) {
            int* ptr0 = (int*)(gvar_405A6C - 4);
            if(v2 <= (unsigned int)ptr0) {
                do {
                    int v3 = *ptr0;
                    if(v3) {
                        v3();
                    }
                    --ptr0;
                }
                while(gvar_405A70 <= (unsigned int)ptr0);
            }
        }
        sub_401577((int*)0x405014, 4214808);
    }
    int result = sub_401577((int*)0x40501C, 0x405020);
    if(!param2) {
        gvar_4055B0 = 1;
        /*NO_RETURN*/ ExitProcess(uExitCode);
    }
    return result;
}

int sub_401577(int* param0, unsigned int param1) {
    int result;
    for(int* i = param0; (unsigned int)i < param1; ++i) {
        result = *i;
        if(result) {
            result = result();
        }
    }
    return result;
}

LONG sub_401591(unsigned int param0, _EXCEPTION_POINTERS* ExceptionInfo) {
    LONG result;
    int v0;
    int v1 = v0;
    int v2 = sub_4016D2(param0);
    if(v2) {
        unsigned int v3 = *(unsigned int*)(v2 + 8);
        if(!v3) {
            return UnhandledExceptionFilter(ExceptionInfo);
        }
        else if(v3 == 5) {
            *(int*)(v2 + 8) = 0;
            result = 1;
        }
        else {
            if(v3 != 1) {
                param0 = gvar_4055B4;
                gvar_4055B4 = ExceptionInfo;
                unsigned int v4 = *(unsigned int*)(v2 + 4);
                if(v4 == 8) {
                    unsigned int v5 = gvar_4050B0;
                    unsigned int v6 = gvar_4050B4 + v5;
                    if((int)v5 < (int)v6) {
                        unsigned int counter = v6 - v5;
                        int* ptr0 = (int*)(v5 * 12 + &gvar_405040);
                        do {
                            *ptr0 = 0;
                            ptr0 += 3;
                            --counter;
                        }
                        while(counter);
                    }
                    unsigned int v7 = gvar_4050BC;
                    switch(*(unsigned int*)v2) {
                        case -1073741682: {
                            gvar_4050BC = 131;
                            break;
                        }
                        case -1073741683: {
                            gvar_4050BC = 130;
                            break;
                        }
                        case -1073741677: {
                            gvar_4050BC = 133;
                            break;
                        }
                        case -1073741678: {
                            gvar_4050BC = 138;
                            break;
                        }
                        case -1073741679: {
                            gvar_4050BC = 132;
                            break;
                        }
                        case -1073741680: {
                            gvar_4050BC = 129;
                            break;
                        }
                        case -1073741681: {
                            gvar_4050BC = 134;
                        }
                    }
                    v3(8, (int)gvar_4050BC);
                    gvar_4050BC = v7;
                }
                else {
                    *(int*)(v2 + 8) = 0;
                    v3((int)v4);
                }
                gvar_4055B4 = (int)param0;
            }
            result = -1;
        }
    }
    else {
        result = UnhandledExceptionFilter(ExceptionInfo);
    }
    return result;
}

int sub_4016D2(unsigned int param0) {
    char v0;
    int v1;
    char v2;
    unsigned int v3 = param0;
    unsigned int v4 = gvar_4050B8;
    char v5 = gvar_405038 == v3;
    char v6 = (int)gvar_405038 < (int)v3;
    char v7 = __parity__((unsigned char)gvar_405038 - (unsigned char)v3);
    char v8 = gvar_405038 < v3;
    char v9 = (int)(((gvar_405038 - v3) ^ gvar_405038) & (gvar_405038 ^ v3)) < 0;
    char v10 = (((gvar_405038 - v3) ^ (gvar_405038 ^ v3)) >>> 4) & 0x1;
    int v11 = v1;
    unsigned int* ptr0 = (unsigned int*)&gvar_405038;
    if(!v5) {
        int v12 = v4 * 3;
        unsigned int v13 = (unsigned int)(v12 * 4 + &gvar_405038);
        do {
            ptr0 += 3;
            char v14 = ptr0 == v13;
            char v15 = (int)ptr0 < (int)v13;
            char v16 = __parity__((unsigned char)ptr0 - (unsigned char)v13);
            char v17 = (unsigned int)ptr0 < v13;
            char v18 = (int)(int*)((int)(int*)((int)(int*)((int)ptr0 - v13) ^ (int)ptr0) & (int)(int*)((int)ptr0 ^ v13)) < 0;
            char v19 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr0 - v13) ^ (int)(int*)((int)ptr0 ^ v13)) >>> 4) & 0x1);
            if(!v17) {
                break;
            }
            else {
                v2 = *ptr0 == v3;
                char v20 = *ptr0 < (int)v3;
                char v21 = __parity__((unsigned char)*ptr0 - (unsigned char)v3);
                char v22 = *ptr0 < v3;
                char v23 = (((*ptr0 - v3) ^ *ptr0) & (*ptr0 ^ v3)) < 0;
                char v24 = (((*ptr0 - v3) ^ (*ptr0 ^ v3)) >>> 4) & 0x1;
            }
        }
        while(!v2);
    }
    int v25 = v4 * 3;
    int v26 = v11;
    int* ptr1 = &v0;
    unsigned int v27 = (unsigned int)(v25 * 4 + &gvar_405038);
    char v28 = ptr0 == v27;
    char v29 = (int)ptr0 < (int)v27;
    char v30 = __parity__((unsigned char)ptr0 - (unsigned char)v27);
    char v31 = (unsigned int)ptr0 < v27;
    char v32 = (int)(int*)((int)(int*)((int)(int*)((int)ptr0 - v27) ^ (int)ptr0) & (int)(int*)((int)ptr0 ^ v27)) < 0;
    char v33 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr0 - v27) ^ (int)(int*)((int)ptr0 ^ v27)) >>> 4) & 0x1);
    jump v31 ? &sub_40170E: &sub_401712;
}

unsigned int* sub_40170E(int param0, unsigned int param1) {
    unsigned int* result;
    return result;
}

int sub_401712() {
    return 0;
}

void sub_401715() {
    char v0 = gvar_405A68 ? 0: 1;
    char v1 = gvar_405A68 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_405A68);
    char v3 = gvar_405A68 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_40171E: &sub_401723;
}

int sub_40171E() {
    void* ptr0;
    int* ptr1 = &ptr0;
    /*BAD_CALL!*/ sub_4024EE();
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned char* sub_401723() {
    unsigned char* result = gvar_405A78;
    int v0 = (unsigned int)*result | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
    if(*result == 34) {
        while(1) {
            v0 = (unsigned int)*(char*)(result + 1) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            ++result;
            if((unsigned char)v0 == 34 || !(unsigned char)v0) {
            loc_401750:
                if(*result == 34) {
                    ++result;
                }
                goto loc_40175F;
            }
            else {
                v0 = sub_4020E8((unsigned int)(unsigned char)v0);
                if(v0) {
                    ++result;
                }
            }
        }
        goto loc_401750;
    }
    else {
        if((unsigned char)v0 > 32) {
            do {
                ++result;
            }
            while(*result > 32);
        }
    loc_40175F:
        v0 = (unsigned int)*result | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        if(!*result || *result > 32) {
            return result;
        }
        ++result;
        goto loc_40175F;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* sub_40176D() {
    int v0;
    if(gvar_405A68 == 0) {
        sub_4024EE();
    }
    char* ptr0 = gvar_40555C;
    int v1 = 0;
    for(int i = (unsigned int)*ptr0 | ((unsigned int)((i >>> 8) & 0xffffff) << 8); *ptr0 != 0; i = (unsigned int)*ptr0 | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
        if((unsigned char)i != 61) {
            ++v1;
        }
        i = sub_4026B0((int)ptr0);
        ptr0 = (char*)((char*)(i + (int)ptr0) + 1);
    }
    int v2 = sub_402630(v1 * 4 + 4);
    gvar_405590 = v2;
    if(v2 == 0) {
        sub_401446();
    }
    for(void* j = gvar_40555C; *(char*)j != 0; j = (void*)((char*)(v0 + (int)j) + 1)) {
        v0 = sub_4026B0((int)j);
        if(*(char*)j != 61) {
            int v3 = sub_402630(v0 + 1);
            *(int*)v2 = v3;
            if(v3 == 0) {
                sub_401446();
            }
            sub_402540(*(int*)v2, (int)j);
            v2 += 4;
        }
    }
    unsigned int* result = sub_40250A(gvar_40555C);
    gvar_40555C = 0;
    *(int*)v2 = 0;
    gvar_405A64 = 1;
    return result;
}

unsigned int sub_401826(int param0) {
    int v0;
    int v1 = param0;
    int v2 = param0;
    int v3 = v0;
    if(gvar_405A68 == 0) {
        sub_4024EE();
    }
    GetModuleFileNameA(NULL, (LPSTR)0x4055B8, 260);
    unsigned char* ptr0 = gvar_405A78;
    gvar_4055A0 = 4216248;
    unsigned char* ptr1 = ptr0[0] != 0 ? ptr0: (unsigned char*)0x4055B8;
    sub_4018BF(ptr1, NULL, NULL, &v1, &v2);
    unsigned int* ptr2 = (unsigned int*)sub_402630(v1 * 4 + v2);
    if(ptr2 == 0) {
        sub_401446();
    }
    sub_4018BF(ptr1, ptr2, (char*)&ptr2[v1], &v1, &v2);
    gvar_405588 = ptr2;
    gvar_405584 = (unsigned int)(v1 - 1);
    return (unsigned int)(v1 - 1);
}

unsigned char* sub_4018BF(unsigned char* param0, unsigned int* param1, char* param2, unsigned char* param3, int* param4) {
    unsigned char* i;
    int* ptr0;
    int* ptr1 = param4;
    unsigned char* ptr2 = param3;
    int* ptr3 = ptr0;
    *ptr1 = 0;
    char* ptr4 = param2;
    unsigned int* ptr5 = param1;
    *(int*)ptr2 = 1;
    unsigned char* ptr6 = param0;
    if(ptr5) {
        *ptr5 = ptr4;
        ++ptr5;
        param1 = ptr5;
    }
    if(*ptr6 == 34) {
        while(1) {
            i = (unsigned int)*(char*)(ptr6 + 1) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
            ++ptr6;
            if((unsigned char)i == 34 || !(unsigned char)i) {
                break;
            }
            else {
                i = (unsigned char*)(unsigned char)i;
                if((*(char*)(i + 0x405841) & 0x4)) {
                    *ptr1 = *ptr1 + 1;
                    if(ptr4) {
                        i = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                        *ptr4 = *ptr6;
                        ++ptr4;
                        ++ptr6;
                    }
                }
                *ptr1 = *ptr1 + 1;
                if(ptr4) {
                    i = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                    *ptr4 = *ptr6;
                    ++ptr4;
                }
            }
        }
        *ptr1 = *ptr1 + 1;
        if(ptr4) {
            *ptr4 = 0;
            ++ptr4;
        }
        if(*ptr6 == 34) {
            ++ptr6;
        }
    }
    else {
        do {
            *ptr1 = *ptr1 + 1;
            if(ptr4) {
                i = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                *ptr4 = *ptr6;
                ++ptr4;
            }
            i = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
            ++ptr6;
            if((*(char*)((char*)(unsigned char)i + 0x405841) & 0x4)) {
                *ptr1 = *ptr1 + 1;
                if(ptr4) {
                    *ptr4 = *ptr6;
                    ++ptr4;
                }
                ++ptr6;
            }
            if((unsigned char)i == 32) {
                break;
            }
            else if(!(unsigned char)i) {
                goto loc_40196A;
            }
        }
        while((unsigned char)i != 9);
        if(!(unsigned char)i) {
        loc_40196A:
            --ptr6;
        }
        else if(ptr4) {
            *(ptr4 - 1) = 0;
        }
    }
    param4 = NULL;
    while(*ptr6) {
        for(i = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8); *ptr6 == 32 || *ptr6 == 9; i = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8)) {
            ++ptr6;
        }
        if(!*ptr6) {
            break;
        }
        else {
            if(ptr5) {
                *ptr5 = ptr4;
                ++ptr5;
                param1 = ptr5;
            }
            *(int*)param3 = *(int*)param3 + 1;
            while(1) {
                param0 = (unsigned char*)0x1;
                unsigned char* j;
                for(j = NULL; *ptr6 == 92; ++j) {
                    ++ptr6;
                }
                if(*ptr6 == 34) {
                    if(!((unsigned char)j & 0x1)) {
                        if(param4 != 0) {
                            i = ptr6 + 1;
                            if(*(char*)(ptr6 + 1) != 34) {
                                goto loc_4019DB;
                            }
                            else {
                                ptr6 = i;
                            }
                        }
                        else {
                        loc_4019DB:
                            param0 = NULL;
                        }
                        ptr5 = param1;
                        param4 = param4 != 0 ? NULL: (int*)0x1;
                    }
                    j = (unsigned char*)((int)j >>> 1);
                }
                i = j;
                ptr0 = (int*)(j - 1);
                if(i) {
                    ptr0 = (int*)((char*)ptr0 + 1);
                    do {
                        if(ptr4) {
                            *ptr4 = 92;
                            ++ptr4;
                        }
                        *ptr1 = *ptr1 + 1;
                        ptr0 = (int*)((char*)ptr0 - 1);
                    }
                    while(ptr0);
                }
                i = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                if(!*ptr6 || (!param4 && (*ptr6 == 32 || *ptr6 == 9))) {
                    break;
                }
                else {
                    if(param0) {
                        if(ptr4) {
                            if((*(char*)((char*)(unsigned char)i + 0x405841) & 0x4)) {
                                *ptr4 = (unsigned char)i;
                                ++ptr4;
                                ++ptr6;
                                *ptr1 = *ptr1 + 1;
                            }
                            *ptr4 = *ptr6;
                            ++ptr4;
                        }
                        else if((*(char*)((unsigned char*)(unsigned char)i + 0x405841) & 0x4)) {
                            ++ptr6;
                            *ptr1 = *ptr1 + 1;
                        }
                        *ptr1 = *ptr1 + 1;
                    }
                    ++ptr6;
                }
            }
            if(ptr4) {
                *ptr4 = 0;
                ++ptr4;
            }
            *ptr1 = *ptr1 + 1;
        }
    }
    if(ptr5) {
        *ptr5 = 0;
    }
    unsigned char* result = param3;
    *(int*)result = *(int*)result + 1;
    return result;
}

int sub_401A73(int param0) {
    int result;
    int v0;
    int cchWideChar = param0;
    int v1 = param0;
    LPCH v2 = gvar_4056BC;
    int v3 = v0;
    int result1 = 0;
    LPCWCH lpWideCharStr = NULL;
    int* ptr0 = NULL;
    switch(v2) {
        case 0: {
            lpWideCharStr = GetEnvironmentStringsW();
            if(lpWideCharStr != 0) {
                gvar_4056BC = 1;
            }
            else {
                ptr0 = (int*)GetEnvironmentStrings();
                if(ptr0 == 0) {
                    return 0;
                }
                gvar_4056BC = 2;
                goto loc_401B52;
            }
            return result;
        }
        case 1: {
            if(lpWideCharStr == 0) {
                lpWideCharStr = GetEnvironmentStringsW();
                if(lpWideCharStr == 0) {
                    return 0;
                }
            }
            LPCWCH v4 = lpWideCharStr;
            if(lpWideCharStr[0] != 0) {
            loc_401AE2:
                do {
                    ++v4;
                    if(v4[0] != 0) {
                        goto loc_401AE2;
                    }
                    else {
                        ++v4;
                    }
                }
                while(v4[0] != 0);
            }
            cchWideChar = (int)((char*)((int)(int*)((int)v4 - (int)lpWideCharStr) >> 1) + 1);
            int cbMultiByte = WideCharToMultiByte(0, 0, lpWideCharStr, (int)((char*)((int)(int*)((int)v4 - (int)lpWideCharStr) >> 1) + 1), NULL, 0, NULL, NULL);
            if(cbMultiByte != 0) {
                int v5 = sub_402630(cbMultiByte);
                v1 = v5;
                if(v5 != 0) {
                    int v6 = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, (LPSTR)v5, cbMultiByte, NULL, NULL);
                    if(!v6) {
                        sub_40250A((int*)v1);
                        v1 = 0;
                    }
                    result1 = v1;
                }
            }
            FreeEnvironmentStringsW(lpWideCharStr);
            return result1;
        }
        case 2: {
        loc_401B52:
            if(ptr0 == 0) {
                ptr0 = (int*)GetEnvironmentStrings();
                if(ptr0 == 0) {
                    return 0;
                }
            }
            int* ptr1 = ptr0;
            if(*(char*)&ptr0[0] != 0) {
            loc_401B66:
                do {
                    ptr1 = (int*)((char*)ptr1 + 1);
                    if(*(char*)&ptr1[0] != 0) {
                        goto loc_401B66;
                    }
                    else {
                        ptr1 = (int*)((char*)ptr1 + 1);
                    }
                }
                while(*(char*)&ptr1[0] != 0);
            }
            int v7 = (int)((char*)((int)ptr1 - (int)ptr0) + 1);
            int* ptr2 = (int*)sub_402630(v7);
            if(ptr2 == 0) {
                ptr2 = NULL;
            }
            else {
                sub_402730(ptr2, ptr0, (int*)v7);
            }
            FreeEnvironmentStringsA((LPCH)ptr0);
            return (int)ptr2;
        }
        default: {
            return 0;
        }
    }
}

UINT sub_401BA5(unsigned int j) {
    unsigned int v0;
    unsigned int* ptr0;
    unsigned short v1;
    char v2;
    unsigned int* ptr1;
    unsigned int* ptr2 = ptr1;
    int v3 = sub_402630(0x100);
    if(!v3) {
        v0 = 27;
        sub_401446();
    }
    gvar_405960 = v3;
    gvar_405A60 = 32;
    for(unsigned int i = (unsigned int)(v3 + 0x100); i > (unsigned int)v3; i = gvar_405960 + 0x100) {
        *(char*)(v3 + 4) = 0;
        *(int*)v3 = -1;
        *(char*)(v3 + 5) = 10;
        v3 += 8;
    }
    GetStartupInfoA(&v2);
    if(v1) {
        unsigned int* ptr3 = ptr0;
        if(ptr3) {
            unsigned int v4 = *ptr3;
            char* ptr4 = (char*)(ptr3 + 1);
            ptr1 = (unsigned int*)((int)ptr4 + v4);
            if((int)v4 >= 0x800) {
                v4 = 0x800;
            }
            if((int)gvar_405A60 < (int)v4) {
                int* ptr5 = (int*)&gvar_405964;
                do {
                    int v5 = sub_402630(0x100);
                    j = v0;
                    if(v5) {
                        gvar_405A60 += 32;
                        *ptr5 = v5;
                        for(j = (unsigned int)(v5 + 0x100); j > (unsigned int)v5; j = (unsigned int)(*ptr5 + 0x100)) {
                            *(char*)(v5 + 4) = 0;
                            *(int*)v5 = -1;
                            *(char*)(v5 + 5) = 10;
                            v5 += 8;
                        }
                        ++ptr5;
                    }
                    else {
                        v4 = gvar_405A60;
                    }
                    break;
                }
                while((int)gvar_405A60 < (int)v4);
            }
            unsigned int v6 = 0;
            if((int)v4 > 0) {
                do {
                    HANDLE hFile = *ptr1;
                    if(hFile != -1) {
                        j = (unsigned int)*ptr4 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                        if((*ptr4 & 0x1)) {
                            if(!((unsigned char)j & 0x8)) {
                                DWORD v7 = GetFileType(hFile);
                                if(v7) {
                                    goto loc_401CBF;
                                }
                            }
                            else {
                            loc_401CBF:
                                unsigned int* ptr6 = (unsigned int*)((v6 & 0x1f) * 8 + *(unsigned int*)((v6 >> 5) * 4 + (int)&gvar_405960));
                                j = *ptr1;
                                *ptr6 = *ptr1;
                                j = (unsigned int)*ptr4 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                                *(char*)(ptr6 + 1) = *ptr4;
                            }
                        }
                    }
                    ++v6;
                    ++ptr4;
                    ++ptr1;
                }
                while((int)v4 > (int)v6);
            }
        }
    }
    unsigned int v8 = 0;
    do {
        unsigned int v9 = gvar_405960;
        unsigned int* ptr7 = (unsigned int*)(v8 * 8 + v9);
        if(*(int*)(v8 * 8 + v9) == -1) {
            *(char*)(ptr7 + 1) = 129;
            DWORD nStdHandle = !v8 ? 0xfffffff6: v8 - 1 > 0 ? 0xfffffff4: 0xfffffff5;
            HANDLE hFile1 = GetStdHandle(nStdHandle);
            if(hFile1 != -1) {
                DWORD v10 = GetFileType(hFile1);
                if(!v10) {
                    goto loc_401D21;
                }
                else {
                    unsigned int v11 = (unsigned int)(unsigned char)v10;
                    *ptr7 = hFile1;
                    if(v11 == 2) {
                        goto loc_401D21;
                    }
                    else if(v11 == 3) {
                        *(char*)(ptr7 + 1) = *(char*)(ptr7 + 1) | 0x8;
                    }
                }
            }
            else {
            loc_401D21:
                *(char*)(ptr7 + 1) = *(char*)(ptr7 + 1) | 0x40;
            }
        }
        else {
            *(char*)(ptr7 + 1) = *(char*)(ptr7 + 1) | 0x80;
        }
        ++v8;
    }
    while((int)v8 < 3);
    return SetHandleCount(gvar_405A60);
}

int sub_401D50(unsigned int param0) {
    HANDLE v0 = HeapCreate(param0 != 0 ? 0: 1, 0x1000, 0);
    gvar_405948 = v0;
    if(v0) {
        LPVOID v1 = sub_402A65();
        if(!v1) {
            HeapDestroy(gvar_405948);
            return 0;
        }
        return 1;
    }
    return 0;
}

int sub_401DCE(int param0, unsigned int param1) {
    int result;
    int v0 = param0;
    int v1 = -2;
    int v2 = &gvar_401DAC;
    int v3 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v3;
    while(1) {
        result = param0;
        int v4 = *(int*)(result + 8);
        unsigned int v5 = *(unsigned int*)(result + 12);
        if(v5 == -1 || v5 == param1) {
            break;
        }
        else {
            int v6 = *(int*)(v5 * 12 + v4);
            v1 = *(int*)(v5 * 12 + v4);
            *(int*)(result + 12) = v6;
            if(!*(int*)(v5 * 12 + v4 + 4)) {
                sub_401E62(v6, 0x101);
                *(int*)(v5 * 12 + v4 + 8)();
            }
        }
    }
    *(int*)__FS_BASE = v3;
    return result;
}

unsigned int sub_401E62(int param0, int param1) {
    unsigned int v0;
    unsigned int result;
    gvar_4050D4 = *(unsigned int*)(v0 + 8);
    gvar_4050D0 = result;
    gvar_4050D8 = v0;
    return result;
}

int sub_401E84(int param0, PVOID param1, int param2) {
    int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    void* ptr0;
    int v8;
    int v9;
    void* ptr1;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    void* ptr2 = &v9;
    void* ptr3 = &v9;
    char v15 = &v7 == 12;
    char v16 = (int)&v13 < 0;
    char v17 = __parity__((unsigned char)&v7 - 12);
    char v18 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x8) ^ (int)&v13) >>> 4) & 0x1);
    char v19 = (unsigned int)&v9 < 8;
    char v20 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&v13) & (int)(int*)((int)&v9 ^ 0x8)) < 0;
    int v21 = v12;
    int v22 = v14;
    int v23 = v8;
    void* ptr4 = &v9;
    char v24 = 0;
    PVOID TargetFrame = param1;
    int v25 = param0;
    char v26 = *(int*)(v25 + 4) & 0x6 ? 0: 1;
    char v27 = (*(int*)(v25 + 4) & 0x6) < 0;
    char v28 = __parity__((unsigned char)*(int*)(v25 + 4) & 0x6);
    char v29 = 0;
    char v30 = 0;
    if(v26) {
        v13 = v25;
        int v31 = param2;
        int v32 = param2;
        int* ptr5 = &v13;
        *(unsigned int*)((int)TargetFrame - 4) = &v13;
        unsigned int v33 = *(unsigned int*)((int)TargetFrame + 12);
        int v34 = *(int*)((int)TargetFrame + 8);
        while(1) {
            v6 = v33 == -1;
            v5 = (int)v33 < -1;
            v4 = __parity__((unsigned char)v33 - 0xFF);
            v3 = v33 < 0xffffffff;
            v2 = (((v33 + 1) ^ v33) & ~v33) < 0;
            v1 = (((v33 + 1) ^ ~v33) >>> 4) & 0x1;
            if(v6) {
                break;
            }
            else {
                int v35 = v33 * 3;
                char v36 = *(int*)(v35 * 4 + v34 + 4) ? 0: 1;
                char v37 = *(int*)(v35 * 4 + v34 + 4) < 0;
                char v38 = __parity__((unsigned char)*(int*)(v35 * 4 + v34 + 4));
                char v39 = *(unsigned int*)(v35 * 4 + v34 + 4) < 0;
                char v40 = 0;
                v1 = 0;
                if(!v36) {
                    int* ptr6 = (int*)((int)TargetFrame + 16);
                    int v41 = *(int*)(v35 * 4 + v34 + 4)((int)ptr2, (int)v33);
                    ptr2 = ptr1;
                    v33 = (unsigned int)ptr0;
                    TargetFrame = *(PVOID*)((int)ptr2 + 12);
                    int v42 = v41;
                    v6 = v42 ? 0: 1;
                    v5 = v42 < 0;
                    v4 = __parity__((unsigned char)v42);
                    v2 = 0;
                    v3 = 0;
                    if(!v6) {
                        if(!v5) {
                            int v43 = *(int*)((int)TargetFrame + 8);
                            int v44 = _global_unwind2(TargetFrame);
                            int* ptr7 = &ptr0;
                            char v45 = &v7 == 28;
                            char v46 = (int)&ptr4 < 0;
                            char v47 = __parity__((unsigned char)&v7 - 28);
                            char v48 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&ptr4) >>> 4) & 0x1);
                            char v49 = (unsigned int)&ptr0 >= 0xfffffffc;
                            char v50 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
                            ptr2 = (void*)((int)TargetFrame + 16);
                            int v51 = sub_401DCE((int)TargetFrame, v33);
                            int* ptr8 = &ptr1;
                            char v52 = &v7 == 28;
                            char v53 = (int)&ptr4 < 0;
                            char v54 = __parity__((unsigned char)&v7 - 28);
                            char v55 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x8) ^ (int)&ptr4) >>> 4) & 0x1);
                            char v56 = (unsigned int)&ptr1 >= 0xfffffff8;
                            char v57 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&ptr1) & (int*)~(int)(int*)((int)&ptr1 ^ 0x8)) < 0;
                            int v58 = (int)(v33 * 3);
                            int v59 = *(int*)(v58 * 4 + v43 + 8);
                            unsigned int v60 = sub_401E62(v58, 1);
                            int v61 = *(int*)(v10 * 4 + v43);
                            *(int*)((int)TargetFrame + 12) = *(int*)(v10 * 4 + v43);
                            *(int*)(v10 * 4 + v43 + 8)();
                        }
                        else {
                            v0 = 0;
                            goto loc_401F39;
                        }
                    }
                }
                v34 = *(int*)((int)TargetFrame + 8);
                v10 = v33 * 3;
                v33 = *(unsigned int*)(v10 * 4 + v34);
            }
        }
    }
    else {
        ptr0 = &v9;
        int* ptr9 = (int*)((int)TargetFrame + 16);
        int v62 = sub_401DCE((int)TargetFrame, 0xffffffff);
        int* ptr10 = &v11;
        v6 = &v7 == 32;
        v5 = (int)&ptr0 < 0;
        v4 = __parity__((unsigned char)&v7 - 32);
        v1 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v11 ^ 0x8) ^ (int)&ptr0) >>> 4) & 0x1);
        v3 = (unsigned int)&v11 >= 0xfffffff8;
        v2 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v11) & (int*)~(int)(int*)((int)&v11 ^ 0x8)) < 0;
        void* ptr11 = ptr0;
    }
    v0 = 1;
loc_401F39:
    void* ptr12 = ptr4;
    int v63 = v23;
    int v64 = v22;
    int v65 = v21;
    int v66 = *(int*)ptr12;
    int v67 = v22;
    int* ptr13 = &v21;
    jump v67;
}

int sub_401F5C() {
    unsigned int v0 = gvar_405564;
    char v1 = v0 == 1;
    char v2 = (int)v0 < 1;
    char v3 = __parity__((unsigned char)v0 - 1);
    char v4 = v0 < 1;
    char v5 = (((v0 - 1) ^ v0) & (v0 ^ 0x1)) < 0;
    char v6 = (((v0 - 1) ^ (v0 ^ 0x1)) >>> 4) & 0x1;
    jump v1 ? &sub_401F73: &sub_401F66;
}

int sub_401F66() {
    int v0;
    char v1 = v0 ? 0: 1;
    char v2 = v0 < 0;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    char v6 = gvar_405034 == 1;
    char v7 = (int)gvar_405034 < 1;
    char v8 = __parity__((unsigned char)gvar_405034 - 1);
    char v9 = gvar_405034 < 1;
    char v10 = (((gvar_405034 - 1) ^ gvar_405034) & (gvar_405034 ^ 0x1)) < 0;
    char v11 = (((gvar_405034 - 1) ^ (gvar_405034 ^ 0x1)) >>> 4) & 0x1;
    jump v6 ? &sub_401F73: &sub_401F94;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401F73() {
    int v0;
    char v1;
    int v2 = sub_401F95(252);
    unsigned int v3 = gvar_4056C0;
    int v4 = v0;
    int* ptr0 = &v1;
    char v5 = v3 ? 0: 1;
    char v6 = v3 >= 0x80000000;
    char v7 = __parity__((unsigned char)v3);
    char v8 = 0;
    char v9 = 0;
    jump v5 ? &sub_401F89: &sub_401F87;
}

int sub_401F95(unsigned int param0) {
    char v0;
    char v1;
    char v2;
    int v3 = 0;
    int result = &gvar_4050E0;
    while(*(int*)result != param0) {
        result += 8;
        ++v3;
        if(result >= &gvar_405170) {
            break;
        }
    }
    if(*(int*)(v3 * 8 + (int)&gvar_4050E0) == param0) {
        result = gvar_405564;
        if((result == 1 || (!result && gvar_405034 == 1))) {
            LPOVERLAPPED lpOverlapped = NULL;
            LPDWORD lpNumberOfBytesWritten = &param0;
            DWORD nNumberOfBytesToWrite = (DWORD)sub_4026B0((int)*(void**)(v3 * 8 + (int)&ptr_aR6002____floati));
            LPCVOID lpBuffer = *(LPCVOID*)(v3 * 8 + (int)&ptr_aR6002____floati);
            HANDLE hFile = GetStdHandle(0xfffffff4);
            result = WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
        }
        else if(param0 != 252) {
            DWORD v4 = GetModuleFileNameA(NULL, &v0, 260);
            if(!v4) {
                sub_402540((int)&v0, "<program name unknown>");
            }
            int v5 = sub_4026B0((int)&v0);
            if((unsigned int)(v5 + 1) > 60) {
                int v6 = sub_4026B0((int)&v0);
                sub_403340((int)&v2, &gvar_4043D0, 3);
            }
            sub_402540(&v1, "Runtime Error!\n\nProgram: ");
            sub_402550(&v1, (int)&v0);
            sub_402550(&v1, &gvar_4043B0);
            sub_402550(&v1, (int)*(void**)(v3 * 8 + (int)&ptr_aR6002____floati));
            result = sub_4032AE(&v1, "Microsoft Visual C++ Runtime Library", 0x12010);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4020E8(int param0) {
    return sub_4020F9(param0, 0, 4);
}

int sub_4020F9(int param0, unsigned int param1, int param2) {
    if(!((unsigned char)param2 & *(char*)((char*)((unsigned int)(unsigned char)param0 + (int)&gvar_405840) + 1))) {
        return !(param1 ? (unsigned int)*(unsigned short*)((unsigned int)(unsigned char)param0 * 2 + (int)&gvar_40528A) & param1: 0) ? 0: 1;
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40212A(UINT param0) {
    unsigned int v0;
    char v1;
    unsigned char v2;
    int v3;
    int v4 = v3;
    UINT CodePage = sub_4022C3(param0);
    char v5 = gvar_40571C == CodePage;
    param0 = CodePage;
    if(!v5) {
        if(CodePage != 0) {
            int v6 = 0;
            unsigned int* ptr0 = (unsigned int*)&gvar_405178;
            while(*ptr0 != CodePage) {
                ptr0 += 12;
                ++v6;
                if((int)ptr0 >= 4215400) {
                    BOOL v7 = GetCPInfo(CodePage, &v0);
                    if(v7 == 1) {
                        void* ptr1 = (void*)0x40;
                        int* ptr2 = (int*)&gvar_405840;
                        char v8 = v0 == 1;
                        char v9 = v0 < 1;
                        gvar_40571C = CodePage;
                        while(ptr1 != 0) {
                            *ptr2 = 0;
                            ++ptr2;
                            ptr1 = (void*)((int)ptr1 - 1);
                        }
                        *(char*)ptr2 = 0;
                        gvar_405944 = 0;
                        if((v9 || v8)) {
                            gvar_40572C = 0;
                            gvar_405720 = 0;
                            gvar_405724 = 0;
                            gvar_405728 = 0;
                            sub_402369();
                            return 0;
                        }
                        else if(v2) {
                            char* ptr3 = &v1;
                            do {
                                unsigned int v10 = (unsigned int)*ptr3 | ((unsigned int)((v10 >>> 8) & 0xffffff) << 8);
                                if(!*ptr3) {
                                loc_40226B:
                                    void* ptr4 = (void*)0x1;
                                    do {
                                        *(char*)((int)ptr4 + 0x405841) = *(char*)((int)ptr4 + 0x405841) | 0x8;
                                        ptr4 = (void*)((int)ptr4 + 1);
                                    }
                                    while((unsigned int)ptr4 < 0xff);
                                    int v11 = sub_40230D(CodePage);
                                    gvar_405944 = v11;
                                    gvar_40572C = 1;
                                    gvar_405720 = 0;
                                    gvar_405724 = 0;
                                    gvar_405728 = 0;
                                    sub_402369();
                                    return 0;
                                }
                                unsigned int v12 = (unsigned int)*(ptr3 - 1);
                                v10 = (unsigned int)(unsigned char)v10;
                                while(v12 <= v10) {
                                    *(char*)((char*)((int)&gvar_405840 + v12) + 1) = *(char*)((char*)((int)&gvar_405840 + v12) + 1) | 0x4;
                                    ++v12;
                                }
                                ptr3 += 2;
                            }
                            while(*(ptr3 - 1));
                            goto loc_40226B;
                        }
                        else {
                            goto loc_40226B;
                        }
                    }
                    else if(gvar_4056C4 != 0) {
                        sub_402340();
                        sub_402369();
                        return 0;
                    }
                    else {
                        return -1;
                    }
                }
            }
            void* ptr5 = (void*)0x40;
            int* ptr6 = (int*)&gvar_405840;
            while(ptr5 != 0) {
                *ptr6 = 0;
                ++ptr6;
                ptr5 = (void*)((int)ptr5 - 1);
            }
            unsigned int v13 = 0;
            int v14 = v6 * 3 * 16;
            *(char*)ptr6 = 0;
            unsigned char* ptr7 = (unsigned char*)(v14 + &gvar_405188);
            do {
                unsigned char* ptr8 = ptr7;
                if(*ptr7) {
                    do {
                        v6 = (unsigned int)*(char*)(ptr8 + 1) | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
                        if(!*(char*)(ptr8 + 1)) {
                            break;
                        }
                        else {
                            unsigned int v15 = (unsigned int)*ptr8;
                            unsigned int v16 = (unsigned int)(unsigned char)v6;
                            if(v15 <= v16) {
                                v6 = (unsigned int)*(unsigned char*)((int)&gvar_405170 + v13) | ((unsigned int)((v13 >>> 8) & 0xffffff) << 8);
                                do {
                                    *(char*)((char*)((int)&gvar_405840 + v15) + 1) = (unsigned char)v6 | *(char*)((char*)((int)&gvar_405840 + v15) + 1);
                                    ++v15;
                                }
                                while(v15 <= v16);
                            }
                            ptr8 += 2;
                        }
                    }
                    while(*ptr8);
                }
                ++v13;
                ptr7 += 8;
            }
            while(v13 < 4);
            gvar_40572C = 1;
            gvar_40571C = param0;
            int v17 = sub_40230D(param0);
            unsigned int* ptr9 = (unsigned int*)(v14 + &gvar_40517C);
            gvar_405720 = *ptr9;
            unsigned int* ptr10 = ptr9 + 1;
            gvar_405724 = *ptr10;
            gvar_405944 = v17;
            gvar_405728 = *(ptr10 + 1);
        }
        else {
            sub_402340();
        }
        sub_402369();
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
UINT sub_4022C3(UINT param0) {
    UINT result = param0;
    gvar_4056C4 = 0;
    switch(result) {
        case -4: {
            result = gvar_4056EC;
            gvar_4056C4 = 1;
            return result;
        }
        case -3: {
            gvar_4056C4 = 1;
            return GetACP();
        }
        case -2: {
            gvar_4056C4 = 1;
            return GetOEMCP();
        }
        default: {
            return result;
        }
    }
}

int sub_40230D(unsigned int param0) {
    if(param0 == 932) {
        return 0x411;
    }
    else if(!(param0 - 936)) {
        return 2052;
    }
    else if((param0 - 949)) {
        return param0 - 950 ? 0: 0x404;
    }
    return 1042;
}

int sub_402340() {
    int v0 = 64;
    int* ptr0 = (int*)&gvar_405840;
    while(v0 != 0) {
        *ptr0 = 0;
        ++ptr0;
        --v0;
    }
    *(char*)ptr0 = 0;
    gvar_40571C = 0;
    gvar_40572C = 0;
    gvar_405944 = 0;
    gvar_405720 = 0;
    gvar_405724 = 0;
    gvar_405728 = 0;
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_402369() {
    short* ptr0;
    unsigned int result;
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    int v7;
    BOOL v8 = GetCPInfo(gvar_40571C, &v0);
    if(v8 == 1) {
        unsigned int v9 = 0;
        do {
            *(char*)(v9 + (int)&v1) = (unsigned char)v9;
            ++v9;
        }
        while(v9 < 0x100);
        v9 = (unsigned int)v6 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
        v1 = 32;
        if((unsigned char)v9) {
            int v10 = v7;
            char* ptr1 = &v5;
            do {
                unsigned int v11 = (unsigned int)*ptr1;
                v9 = (unsigned int)(unsigned char)v9;
                if(v9 <= v11) {
                    int* ptr2 = (int*)(v9 + (int)&v1);
                    int v12 = v11 - v9 + 1;
                    v9 = 0x20202020;
                    int v13 = v12;
                    for(int i = v12 >>> 2; i != 0; --i) {
                        *ptr2 = 0x20202020;
                        ++ptr2;
                    }
                    for(int j = v13 & 0x3; j != 0; --j) {
                        *(char*)ptr2 = 32;
                        ptr2 = (int*)((char*)ptr2 + 1);
                    }
                }
                ptr1 += 2;
                v9 = (unsigned int)*(ptr1 - 1) | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
            }
            while(*(ptr1 - 1));
        }
        sub_40368D(1, (int)&v1, 0x100, (int)&v2, (int)gvar_40571C, (int)gvar_405944, 0);
        sub_40343E((int)gvar_405944, 0x100, (int)&v1, 0x100, (int)&v3, 0x100, (int)gvar_40571C, 0);
        sub_40343E((int)gvar_405944, 0x200, (int)&v1, 0x100, (int)&v4, 0x100, (int)gvar_40571C, 0);
        result = 0;
        ptr0 = &v2;
        do {
            int v14 = (unsigned int)*ptr0 | ((unsigned int)(unsigned short)(v14 >>> 16) << 16);
            if(((unsigned char)v14 & 0x1)) {
                *(char*)((char*)((int)&gvar_405840 + result) + 1) = *(char*)((char*)((int)&gvar_405840 + result) + 1) | 0x10;
                v14 = (unsigned int)*(char*)(result + (int)&v3) | ((unsigned int)((v14 >>> 8) & 0xffffff) << 8);
                goto loc_402475;
            }
            else if(((unsigned char)v14 & 0x2)) {
                *(char*)((char*)((int)&gvar_405840 + result) + 1) = *(char*)((char*)((int)&gvar_405840 + result) + 1) | 0x20;
                v14 = (unsigned int)*(char*)(result + (int)&v4) | ((unsigned int)((v14 >>> 8) & 0xffffff) << 8);
            loc_402475:
                *(unsigned char*)((int)&gvar_405740 + result) = (unsigned char)v14;
            }
            else {
                *(unsigned char*)((int)&gvar_405740 + result) = 0;
            }
            ++result;
            ++ptr0;
        }
        while(result < 0x100);
    }
    else {
        result = 0;
        do {
            *(unsigned char*)((int)&gvar_405740 + result) = 0;
        loc_4024E6:
            while(1) {
                ++result;
                if(result >= 0x100) {
                    return result;
                }
                else if(result >= 65 && result <= 90) {
                    *(char*)((char*)((int)&gvar_405840 + result) + 1) = *(char*)((char*)((int)&gvar_405840 + result) + 1) | 0x10;
                    ptr0 = (unsigned int)((unsigned char)result + 32) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
                    *(unsigned char*)((int)&gvar_405740 + result) = (unsigned char)ptr0;
                }
            }
        }
        while(result < 97 || result > 122);
        *(char*)((char*)((int)&gvar_405840 + result) + 1) = *(char*)((char*)((int)&gvar_405840 + result) + 1) | 0x20;
        ptr0 = (unsigned int)((unsigned char)result - 32) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
        *(unsigned char*)((int)&gvar_405740 + result) = (unsigned char)ptr0;
        goto loc_4024E6;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_4024EE() {
    char v0 = gvar_405A68 ? 0: 1;
    char v1 = gvar_405A68 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_405A68);
    char v3 = gvar_405A68 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_4024F7: &sub_402509;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4024F7() {
    sub_40212A(-3);
    gvar_405A68 = 1;
}

void sub_402509() {
}

unsigned int* sub_40250A(int* lpMem) {
    unsigned int* result;
    if(lpMem) {
        unsigned int* ptr0 = (unsigned int*)sub_402AA3();
        if(ptr0) {
            return sub_402ACE(ptr0, lpMem);
        }
        result = (unsigned int*)HeapFree(gvar_405948, 0, lpMem);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402630(int param0) {
    return sub_402642(param0, (int)gvar_4056FC);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_402642(unsigned int param0, unsigned int param1) {
    unsigned int result;
    int v0;
    if(param0 <= 0xffffffe0) {
        do {
            result = (unsigned int)sub_40266E((int)param0);
            if(result || result == param1) {
                return result;
            }
            v0 = sub_4037D6();
        }
        while(v0);
    }
    else {
        result = 0;
    }
    return result;
}

int* sub_40266E(int param0) {
    int* result;
    int v0 = param0;
    if(gvar_405270 >= (unsigned int)v0) {
        result = sub_402DF9(v0);
        if(!result) {
            goto loc_402688;
        }
    }
    else {
    loc_402688:
        if(!v0) {
            v0 = 1;
        }
        result = (int*)HeapAlloc(gvar_405948, 0, (SIZE_T)((v0 + 15) & 0xfffffff0));
    }
    return result;
}

int* sub_402730(int* param0, int* param1, int* param2) {
    int* ptr0;
    int* ptr1;
    int* ptr2 = param1;
    int* ptr3 = param2;
    int* ptr4 = param0;
    int* ptr5 = ptr3;
    int* ptr6 = ptr3;
    if(ptr2 >= ptr4 || (int*)((int)ptr5 + (int)ptr2) <= ptr4) {
        if(!(int*)((int)ptr4 & 0x3)) {
            ptr3 = (int*)((int)ptr3 >>> 2);
            ptr1 = (int*)((int)ptr6 & 0x3);
            if((unsigned int)ptr3 < 8) {
            loc_40278C:
                switch(ptr3) {
                    case 0: {
                    loc_40286F:
                        switch(ptr1) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)ptr4 = *(char*)ptr2;
                                return param0;
                            }
                            case 2: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                return param0;
                            }
                            case 3: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                return param0;
                            }
                            default: {
                                throw 0;
                                return param0;
                            }
                        }
                    }
                    case 1: {
                    loc_402860:
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 1) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 1);
                        ptr0 = (int*)((int)ptr3 * 4);
                        ptr2 = (int*)((int)ptr0 + (int)ptr2);
                        ptr4 = (int*)((int)ptr0 + (int)ptr4);
                        break;
                    }
                    case 2: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_402860;
                    }
                    case 3: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_402860;
                    }
                    case 4: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_402860;
                    }
                    case 5: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_402860;
                    }
                    case 6: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_402860;
                    }
                    case 7: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 7);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_402860;
                    }
                    default: {
                        throw 0;
                    }
                }
                goto loc_40286F;
            }
            else {
                while(ptr3 != 0) {
                    *ptr4 = *ptr2;
                    ++ptr2;
                    ++ptr4;
                    ptr3 = (int*)((char*)ptr3 - 1);
                }
                switch(ptr1) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)ptr4 = *(char*)ptr2;
                        return param0;
                    }
                    case 2: {
                        *(char*)ptr4 = *(char*)ptr2;
                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                        return param0;
                    }
                    case 3: {
                        *(char*)ptr4 = *(char*)ptr2;
                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                        *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
        }
        ptr0 = ptr4;
        int* ptr7 = ptr3;
        --ptr3;
        if((unsigned int)ptr7 >= 4) {
            ptr0 = (int*)((int)ptr0 & 0x3);
            int* ptr8 = (int*)((int)ptr0 + (int)ptr3);
            switch(ptr0) {
                case 1: {
                    ptr1 = (int*)((int)ptr8 & 0x3);
                    *(char*)ptr4 = *(char*)ptr2;
                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                    ptr3 = (int*)((int)ptr8 >>> 2);
                    *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                    ptr2 = (int*)((char*)ptr2 + 3);
                    ptr4 = (int*)((char*)ptr4 + 3);
                    if((unsigned int)ptr3 >= 8) {
                        while(ptr3 != 0) {
                            *ptr4 = *ptr2;
                            ++ptr2;
                            ++ptr4;
                            ptr3 = (int*)((char*)ptr3 - 1);
                        }
                        switch(ptr1) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)ptr4 = *(char*)ptr2;
                                return param0;
                            }
                            case 2: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                return param0;
                            }
                            case 3: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    loc_4027CC:
                        ptr1 = (int*)((int)ptr8 & 0x3);
                        *(char*)ptr4 = *(char*)ptr2;
                        ptr3 = (int*)((int)ptr8 >>> 2);
                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                        ptr2 = (int*)((char*)ptr2 + 2);
                        ptr4 = (int*)((char*)ptr4 + 2);
                        if((unsigned int)ptr3 >= 8) {
                            while(ptr3 != 0) {
                                *ptr4 = *ptr2;
                                ++ptr2;
                                ++ptr4;
                                ptr3 = (int*)((char*)ptr3 - 1);
                            }
                            switch(ptr1) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *(char*)ptr4 = *(char*)ptr2;
                                    return param0;
                                }
                                case 2: {
                                    *(char*)ptr4 = *(char*)ptr2;
                                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                    return param0;
                                }
                                case 3: {
                                    *(char*)ptr4 = *(char*)ptr2;
                                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                    *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        loc_4027F0:
                            ptr1 = (int*)((int)ptr8 & 0x3);
                            *(char*)ptr4 = *(char*)ptr2;
                            ptr2 = (int*)((char*)ptr2 + 1);
                            ptr3 = (int*)((int)ptr8 >>> 2);
                            ptr4 = (int*)((char*)ptr4 + 1);
                            if((unsigned int)ptr3 >= 8) {
                                while(ptr3 != 0) {
                                    *ptr4 = *ptr2;
                                    ++ptr2;
                                    ++ptr4;
                                    ptr3 = (int*)((char*)ptr3 - 1);
                                }
                                switch(ptr1) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)ptr4 = *(char*)ptr2;
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)ptr4 = *(char*)ptr2;
                                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)ptr4 = *(char*)ptr2;
                                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                        *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                    }
                                }
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 7);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                                goto loc_402860;
                            }
                        }
                    }
                    goto loc_40278C;
                }
                case 2: {
                    goto loc_4027CC;
                }
                case 3: {
                    goto loc_4027F0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_402784;
        }
        else {
        loc_402784:
            switch(ptr3) {
                case -4: {
                    *(char*)ptr4 = *(char*)ptr2;
                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                    *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                    return param0;
                }
                case -3: {
                    *(char*)ptr4 = *(char*)ptr2;
                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                    return param0;
                }
                case -2: {
                    *(char*)ptr4 = *(char*)ptr2;
                    return param0;
                }
                case -1: {
                    return param0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_40278C;
        }
    }
    else {
        int* ptr9 = (int*)((int)ptr3 + (int)ptr2) - 1;
        int* ptr10 = (int*)((int)ptr3 + (int)ptr4) - 1;
        if(!(int*)((int)ptr10 & 0x3)) {
            ptr3 = (int*)((int)ptr3 >>> 2);
            ptr1 = (int*)((int)ptr6 & 0x3);
            if((unsigned int)ptr3 >= 8) {
                while(ptr3 != 0) {
                    *ptr10 = *ptr9;
                    --ptr9;
                    --ptr10;
                    ptr3 = (int*)((char*)ptr3 - 1);
                }
                switch(ptr1) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        return param0;
                    }
                    case 2: {
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                        return param0;
                    }
                    case 3: {
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                        *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
            ptr3 = (int*)(0 - (int)ptr3);
            jump gvar_4029A4[(int*)((char*)ptr3 + 7)];
        }
        else {
            ptr0 = ptr10;
        loc_402914:
            switch(ptr3) {
                case 0: {
                    return param0;
                }
                case 1: {
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    return param0;
                }
                case 2: {
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                    return param0;
                }
                case 3: {
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                    *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                    return param0;
                }
            }
            ptr0 = (int*)((int)ptr0 & 0x3);
            int* ptr11 = (int*)((int)ptr3 - (int)ptr0);
            switch(ptr0) {
                case 1: {
                    ptr1 = (int*)((int)ptr11 & 0x3);
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    ptr9 = (int*)((char*)ptr9 - 1);
                    ptr3 = (int*)((int)ptr11 >>> 2);
                    ptr10 = (int*)((char*)ptr10 - 1);
                    if((unsigned int)ptr3 >= 8) {
                        while(ptr3 != 0) {
                            *ptr10 = *ptr9;
                            --ptr9;
                            --ptr10;
                            ptr3 = (int*)((char*)ptr3 - 1);
                        }
                        switch(ptr1) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                return param0;
                            }
                            case 2: {
                                *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                return param0;
                            }
                            case 3: {
                                *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    loc_40294B:
                        ptr1 = (int*)((int)ptr11 & 0x3);
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        ptr3 = (int*)((int)ptr11 >>> 2);
                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                        ptr9 = (int*)((char*)ptr9 - 2);
                        ptr10 = (int*)((char*)ptr10 - 2);
                        if((unsigned int)ptr3 >= 8) {
                            while(ptr3 != 0) {
                                *ptr10 = *ptr9;
                                --ptr9;
                                --ptr10;
                                ptr3 = (int*)((char*)ptr3 - 1);
                            }
                            switch(ptr1) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                    return param0;
                                }
                                case 2: {
                                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                    return param0;
                                }
                                case 3: {
                                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                    *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        loc_402973:
                            ptr1 = (int*)((int)ptr11 & 0x3);
                            *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                            *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                            ptr3 = (int*)((int)ptr11 >>> 2);
                            *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                            ptr9 = (int*)((char*)ptr9 - 3);
                            ptr10 = (int*)((char*)ptr10 - 3);
                            if((unsigned int)ptr3 >= 8) {
                                while(ptr3 != 0) {
                                    *ptr10 = *ptr9;
                                    --ptr9;
                                    --ptr10;
                                    ptr3 = (int*)((char*)ptr3 - 1);
                                }
                                switch(ptr1) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                    }
                                }
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 7);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 6);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 5);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 4);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 3);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 2);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 1) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 1);
                                ptr0 = (int*)((int)ptr3 * 4);
                                ptr9 = (int*)((int)ptr0 + (int)ptr9);
                                ptr10 = (int*)((int)ptr0 + (int)ptr10);
                                switch(ptr1) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                        return param0;
                                    }
                                }
                            }
                        }
                    }
                    ptr3 = (int*)(0 - (int)ptr3);
                    jump gvar_4029A4[(int*)((char*)ptr3 + 7)];
                }
                case 2: {
                    goto loc_40294B;
                }
                case 3: {
                    goto loc_402973;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_402914;
        }
    }
}

LPVOID sub_402A65() {
    LPVOID v0 = HeapAlloc(gvar_405948, 0, 320);
    gvar_405718 = v0;
    if(!v0) {
        return 0;
    }
    gvar_405710 = 0;
    gvar_405714 = 0;
    gvar_40570C = v0;
    gvar_405704 = 16;
    return (LPVOID)0x1;
}

void* sub_402AB7(int param0) {
    int v0;
    void* result;
    if((unsigned int)(param0 - *(int*)((int)result + 12)) >= 0x100000) {
        result = (void*)sub_402AB3(v0);
    }
    return result;
}

int sub_402ACB() {
    return 0;
}

unsigned int* sub_402ACE(unsigned int* param0, int* param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1 = v0;
    int v2 = *(int*)(param0 + 4);
    unsigned int* ptr2 = (unsigned int*)(param1 - 1);
    int* ptr3 = (int*)((int)(int*)((int)param1 - *(int*)(param0 + 3)) >>> 15);
    int* ptr4 = (int*)(*(param1 - 1) - 1);
    unsigned int v3 = *(ptr2 - 1);
    int* ptr5 = ptr4;
    unsigned int* ptr6 = (unsigned int*)((int*)((int)(int*)((int)ptr3 * 516) + v2) + 81);
    unsigned int* ptr7 = *(unsigned int*)((int)ptr2 + (int)ptr4);
    unsigned int* ptr8 = *(unsigned int*)((int)ptr2 + (int)ptr4);
    if(!((unsigned char)ptr7 & 0x1)) {
        ptr1 = (int*)0x3F;
        int* ptr9 = (int*)((char*)((int)ptr7 >> 4) - 1);
        param1 = ptr9 <= (int*)0x3F ? ptr9: (int*)0x3F;
        if(*((int*)((int)ptr2 + (int)ptr4) + 2) == *(unsigned int*)((int*)((int)ptr2 + (int)ptr4) + 1)) {
            int* ptr10 = param1;
            if((unsigned int)ptr10 < 32) {
                char* ptr11 = (char*)((int*)(v2 + (int)ptr10) + 1);
                int v4 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr10 & 0x1f));
                *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 17) = *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 17) & v4;
                *ptr11 = *ptr11 + 0xFF;
                if(!*ptr11) {
                    *param0 = *param0 & v4;
                }
            }
            else {
                char* ptr12 = (char*)((int*)(v2 + (int)param1) + 1);
                int v5 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr10 - 8) & 0x1f));
                *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 49) = *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 49) & v5;
                *ptr12 = *ptr12 + 0xFF;
                if(!*ptr12) {
                    *(int*)(param0 + 1) = *(int*)(param0 + 1) & v5;
                }
            }
        }
        *(int*)(*((int*)((int)ptr2 + (int)ptr4) + 2) + 4) = *((int*)((int)ptr2 + (int)ptr4) + 1);
        int v6 = *((int*)((int)ptr2 + (int)ptr4) + 1);
        int v7 = *((int*)((int)ptr2 + (int)ptr4) + 2);
        ptr4 = (int*)((int)ptr4 + (int)ptr8);
        *(int*)(v6 + 8) = v7;
        ptr5 = ptr4;
    }
    int* ptr13 = (int*)((char*)((int)ptr4 >> 4) - 1);
    if((unsigned int)ptr13 > 63) {
        ptr1 = (int*)0x3F;
        ptr13 = (int*)0x3F;
    }
    int* ptr14 = (int*)(v3 & 0x1);
    if(!(int*)(v3 & 0x1)) {
        ptr1 = (int*)0x3F;
        ptr8 = (unsigned int*)((int)ptr2 - v3);
        ptr0 = (int*)((v3 >> 4) - 1);
        param1 = (int*)((v3 >> 4) - 1);
        if(ptr0 > (int*)0x3F) {
            param1 = (int*)0x3F;
            ptr0 = (int*)0x3F;
        }
        ptr4 = (int*)((int)ptr4 + v3);
        ptr5 = ptr4;
        ptr13 = (int*)((char*)((int)ptr4 >> 4) - 1);
        if(ptr13 > (int*)0x3F) {
            ptr13 = (int*)0x3F;
        }
        if(ptr0 != ptr13) {
            if(*(int*)(ptr8 + 2) == *(ptr8 + 1)) {
                int* ptr15 = param1;
                if((unsigned int)ptr15 < 32) {
                    char* ptr16 = (char*)((int*)(v2 + (int)ptr15) + 1);
                    int v8 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr15 & 0x1f));
                    *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 17) = *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 17) & v8;
                    *ptr16 = *ptr16 + 0xFF;
                    if(!*ptr16) {
                        *param0 = *param0 & v8;
                    }
                }
                else {
                    char* ptr17 = (char*)((int*)(v2 + (int)param1) + 1);
                    int v9 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr15 - 8) & 0x1f));
                    *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 49) = *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 49) & v9;
                    *ptr17 = *ptr17 + 0xFF;
                    if(!*ptr17) {
                        *(int*)(param0 + 1) = *(int*)(param0 + 1) & v9;
                    }
                }
            }
            *(int*)(*(int*)(ptr8 + 2) + 4) = *(int*)(ptr8 + 1);
            *(unsigned int*)(*(int*)(ptr8 + 1) + 8) = *(ptr8 + 2);
        }
        ptr2 = ptr8;
    }
    if(ptr14 || ptr13 != param1) {
        *(int*)(ptr2 + 1) = *((int*)((int)(int*)((int)ptr13 * 8) + (int)ptr6) + 1);
        int* ptr18 = (int*)((int)(int*)((int)ptr13 * 8) + (int)ptr6);
        *(ptr2 + 2) = (int*)((int)(int*)((int)ptr13 * 8) + (int)ptr6);
        *(unsigned int*)(ptr18 + 1) = ptr2;
        *(unsigned int*)(*(int*)(ptr2 + 1) + 8) = ptr2;
        ptr0 = *(ptr2 + 1);
        if(*(int*)(ptr2 + 2) == ptr0) {
            ptr0 = (unsigned int)*(char*)((int*)(v2 + (int)ptr13) + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
            (int*)((param1 >>> 24) & 0xFF) = *(char*)((int*)(v2 + (int)ptr13) + 1);
            *(char*)((int*)(v2 + (int)ptr13) + 1) = (unsigned char)ptr0 + 1;
            if((unsigned int)ptr13 < 32) {
                if(!(unsigned char)(int*)((int)param1 >>> 24)) {
                    *param0 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr13 & 0x1f)) | *param0);
                }
                unsigned int* ptr19 = (unsigned int*)((int*)((int)(int*)((int)ptr3 * 4) + v2) + 17);
                *ptr19 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr13 & 0x1f)) | *ptr19);
            }
            else {
                if(!(unsigned char)(int*)((int)param1 >>> 24)) {
                    *(param0 + 1) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr13 - 8) & 0x1f)) | *(int*)(param0 + 1));
                }
                unsigned int* ptr20 = (unsigned int*)((int*)((int)(int*)((int)ptr3 * 4) + v2) + 49);
                *ptr20 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr13 - 8) & 0x1f)) | *ptr20);
            }
            ptr4 = ptr5;
        }
    }
    unsigned int* result = ptr6;
    *ptr2 = ptr4;
    *(unsigned int*)((int*)((int)ptr2 + (int)ptr4) - 1) = ptr4;
    *result = *result - 1;
    if(!*result) {
        unsigned int v10 = gvar_405710;
        if(v10) {
            VirtualFree((LPVOID)(gvar_405708 * 0x8000 + *(int*)(v10 + 12)), 0x8000, 0x4000);
            unsigned int v11 = gvar_405710;
            *(unsigned int*)(v11 + 8) = (int*)((int)(unsigned int*)(0x80000000 >>> (gvar_405708 & 0x1f)) | *(int*)(v11 + 8));
            *(int*)(gvar_405708 * 4 + *(int*)(gvar_405710 + 16) + 196) = 0;
            int v12 = *(int*)(gvar_405710 + 16);
            *(char*)(v12 + 67) = *(char*)(v12 + 67) + 0xFF;
            unsigned int v13 = gvar_405710;
            if(!*(char*)((char*)*(unsigned int*)(v13 + 16) + 67)) {
                *(int*)(v13 + 4) = *(int*)(v13 + 4) & 0xfffffffe;
                v13 = gvar_405710;
            }
            if(*(int*)(v13 + 8) != -1) {
                result = param0;
                gvar_405710 = result;
                gvar_405708 = ptr3;
                return result;
            }
            ptr1 = (int*)0x8000;
            int v14 = 0;
            VirtualFree(*(LPVOID*)(v13 + 12), 0, 0x8000);
            HeapFree(gvar_405948, 0, *(LPVOID*)(gvar_405710 + 16));
            int* ptr21 = gvar_405710;
            sub_403800(ptr21, ptr21 + 5, (int*)((int)(int*)((unsigned int)(gvar_405714 * 5 * 4) - (int)ptr21) + gvar_405718) - 5);
            result = param0;
            --gvar_405714;
            if(gvar_405710 < (unsigned int)result) {
                result -= 5;
            }
            gvar_40570C = gvar_405718;
        }
        else {
            result = param0;
        }
        gvar_405710 = result;
        gvar_405708 = ptr3;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_402DF9(int param0) {
    int v0;
    int* result;
    char v1;
    char v2;
    char v3;
    int* ptr0;
    unsigned int v4;
    int* ptr1;
    int v5;
    char v6;
    int v7;
    unsigned int v8 = gvar_405714;
    int v9 = gvar_405718;
    int v10 = v7;
    int* ptr2 = (int*)(v8 * 20 + v9);
    int v11 = param0;
    int* ptr3 = ptr2;
    unsigned int v12 = (unsigned int)((v11 + 23) & 0xfffffff0);
    unsigned int v13 = (unsigned int)((v11 + 23) & 0xfffffff0);
    unsigned int v14 = (unsigned int)((v12 >> 4) - 1);
    char v15 = (int)v14 < 32;
    if((((v14 - 32) ^ v14) & (v14 ^ 0x20)) < 0 != v15) {
        ptr1 = (int*)(-1 >>> (v14 & 0x1f));
        v4 = 0xffffffff;
        ptr0 = ptr1;
    }
    else {
        int v16 = v14 - 32;
        ptr1 = NULL;
        unsigned int v17 = (unsigned int)(-1 >>> (v16 & 0x1f));
        ptr0 = NULL;
        v4 = v17;
    }
    int v18 = gvar_40570C;
    int v19 = gvar_40570C;
    char v20 = (unsigned int)v19 < (unsigned int)ptr2;
    param0 = v19;
    if(v20) {
        do {
            int v21 = *(int*)(v19 + 4);
            int v22 = *(int*)v19;
            int v23 = v21 & v4;
            ptr2 = (int*)((int)ptr1 & v22);
            if((int*)(v23 | (int)ptr2)) {
                break;
            }
            else {
                v19 += 20;
                v6 = (unsigned int)v19 < (unsigned int)ptr3;
                param0 = v19;
            }
        }
        while(v6);
    }
    if(v19 == ptr3) {
        v19 = v9;
        while(1) {
            v3 = v18 == v19;
            char v24 = (unsigned int)v18 > (unsigned int)v19;
            param0 = v19;
            if(v24) {
                int v25 = *(int*)(v19 + 4);
                int v26 = *(int*)v19;
                int v27 = v25 & v4;
                ptr2 = (int*)((int)ptr1 & v26);
                if(!(int*)(v27 | (int)ptr2)) {
                    v19 += 20;
                    continue;
                }
                else {
                    v3 = v18 == v19;
                }
            }
            break;
        }
        if(!v3) {
            goto loc_402EEE;
        }
        else {
            while(1) {
                v2 = v19 == ptr3;
                if((unsigned int)v19 < (unsigned int)ptr3) {
                    if(!*(int*)(v19 + 8)) {
                        v19 += 20;
                        param0 = v19;
                        continue;
                    }
                    else {
                        v2 = v19 == ptr3;
                    }
                }
                break;
            }
            if(v2) {
                v19 = v9;
                while(1) {
                    v1 = v18 == v19;
                    param0 = v19;
                    if((unsigned int)v18 > (unsigned int)v19) {
                        if(!*(int*)(v19 + 8)) {
                            v19 += 20;
                            continue;
                        }
                        else {
                            v1 = v18 == v19;
                        }
                    }
                    break;
                }
                if(v1) {
                    v19 = sub_403102();
                    param0 = v19;
                    if(!v19) {
                        goto loc_402EE7;
                    }
                }
            }
            int v28 = sub_4031B3(v19);
            **(int**)(v19 + 16) = v28;
            if(*(int*)*(int*)(v19 + 16) != -1) {
                goto loc_402EEE;
            }
            else {
            loc_402EE7:
                result = NULL;
            }
        }
    }
    else {
    loc_402EEE:
        gvar_40570C = v19;
        unsigned int* ptr4 = *(unsigned int*)(v19 + 16);
        int* ptr5 = *ptr4;
        ptr3 = *ptr4;
        if(ptr5 == -1 || !(int*)((int)(int*)(*((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 17) & (int)ptr1) | (*((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 49) & v4))) {
            int v29 = *(int*)(ptr4 + 49) & v4;
            int* ptr6 = (int*)(*(int*)(ptr4 + 17) & (int)ptr0);
            ptr3 = NULL;
            int* ptr7 = (int*)(ptr4 + 17);
            ptr1 = ptr0;
            if(!(int*)(v29 | (int)ptr6)) {
                do {
                    v5 = *(ptr7 + 33);
                    ptr3 = (int*)((char*)ptr3 + 1);
                    ++ptr7;
                }
                while(!(int*)((int)(int*)(*ptr7 & (int)ptr1) | (v5 & v4)));
            }
            ptr5 = ptr3;
        }
        void* ptr8 = NULL;
        ptr0 = (int*)((int)(int*)((int)ptr5 * 516) + (int)ptr4) + 81;
        int* ptr9 = (int*)(*((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 17) & (int)ptr1);
        if(!ptr9) {
            ptr9 = (int*)(*((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr4) + 49) & v4);
            ptr8 = (void*)0x20;
        }
        while((int)ptr9 >= 0) {
            ptr9 = (int*)((int)ptr9 * 2);
            ptr8 = (void*)((int)ptr8 + 1);
        }
        unsigned int* ptr10 = *(unsigned int*)((int*)((int)(int*)((int)ptr8 * 8) + (int)ptr0) + 1);
        unsigned int v30 = *ptr10 - v13;
        v4 = *ptr10 - v13;
        void* ptr11 = (void*)((v30 >> 4) - 1);
        if((int)ptr11 > 63) {
            ptr11 = (void*)0x3F;
        }
        if(ptr11 != ptr8) {
            if(*(int*)(ptr10 + 2) == *(ptr10 + 1)) {
                if((int)ptr8 < 32) {
                    char* ptr12 = (char*)((int*)((int)ptr4 + (int)ptr8) + 1);
                    v0 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr8 & 0x1f));
                    *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) + 17) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr8 & 0x1f)) & *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) + 17);
                    *ptr12 = *ptr12 + 0xFF;
                    if(*ptr12) {
                        goto loc_403009;
                    }
                    else {
                        v19 = param0;
                        *(int*)v19 = *(int*)v19 & v0;
                    }
                }
                else {
                    char* ptr13 = (char*)((int*)((int)ptr4 + (int)ptr8) + 1);
                    int* ptr14 = (int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) + 49;
                    int v31 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)((int)ptr8 - 32) & 0x1f));
                    *ptr14 = *ptr14 & v31;
                    *ptr13 = *ptr13 + 0xFF;
                    char v32 = *ptr13 ? 0: 1;
                    v0 = v31;
                    if(v32) {
                        v19 = param0;
                        *(int*)(v19 + 4) = *(int*)(v19 + 4) & v0;
                    }
                    else {
                    loc_403009:
                        v19 = param0;
                    }
                }
            }
            char v33 = v4 ? 0: 1;
            *(int*)(*(int*)(ptr10 + 2) + 4) = *(int*)(ptr10 + 1);
            *(int*)(*(int*)(ptr10 + 1) + 8) = *(int*)(ptr10 + 2);
            if(!v33) {
                int* ptr15 = (int*)((int)(int*)((int)ptr11 * 8) + (int)ptr0);
                *(int*)(ptr10 + 1) = *((int*)((int)(int*)((int)ptr11 * 8) + (int)ptr0) + 1);
                *(ptr10 + 2) = ptr15;
                *(unsigned int*)(ptr15 + 1) = ptr10;
                *(unsigned int*)(*(int*)(ptr10 + 1) + 8) = ptr10;
                unsigned int v34 = *(ptr10 + 1);
                if(*(int*)(ptr10 + 2) == v34) {
                    v34 = (unsigned int)*(char*)((int*)((int)ptr4 + (int)ptr11) + 1) | ((unsigned int)((v34 >>> 8) & 0xffffff) << 8);
                    (param0 >>> 24) & 0xFF = *(char*)((int*)((int)ptr4 + (int)ptr11) + 1);
                    if((int)ptr11 < 32) {
                        char v35 = (unsigned char)(param0 >>> 24) ? 0: 1;
                        *(char*)((int*)((int)ptr4 + (int)ptr11) + 1) = (unsigned char)v34 + 1;
                        if(v35) {
                            *(int**)v19 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr11 & 0x1f)) | *(int*)v19);
                        }
                        *(unsigned int*)((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) + 17) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr11 & 0x1f)) | *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) + 17));
                    }
                    else {
                        char v36 = (unsigned char)(param0 >>> 24) ? 0: 1;
                        *(char*)((int*)((int)ptr4 + (int)ptr11) + 1) = (unsigned char)v34 + 1;
                        if(v36) {
                            *(unsigned int*)(v19 + 4) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)((int)ptr11 - 32) & 0x1f)) | *(int*)(v19 + 4));
                        }
                        unsigned int* ptr16 = (unsigned int*)((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) + 49);
                        *ptr16 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)((int)ptr11 - 32) & 0x1f)) | *ptr16);
                    }
                }
                v30 = v4;
                goto loc_4030B2;
            }
            else {
                v30 = v4;
            }
        }
        else {
        loc_4030B2:
            if(v30) {
                *ptr10 = v30;
                *(unsigned int*)((int*)(v30 + (int)ptr10) - 1) = v30;
            }
        }
        unsigned int v37 = v13;
        int* ptr17 = (int*)(v30 + (int)ptr10);
        *ptr17 = v37 + 1;
        *((int*)((int)ptr17 + v37) - 1) = v37 + 1;
        int v38 = *ptr0;
        *ptr0 = v38 + 1;
        if(!v38 && gvar_405710 == v19 && gvar_405708 == ptr3) {
            gvar_405710 = 0;
        }
        *ptr4 = ptr3;
        result = ptr17 + 1;
    }
    return result;
}

int* sub_403102() {
    int* result;
    LPVOID v0;
    unsigned int v1 = gvar_405714;
    unsigned int v2 = gvar_405704;
    if(v1 == v2) {
        v0 = HeapReAlloc(gvar_405948, 0, gvar_405718, (SIZE_T)((v2 * 5 + 80) * 4));
        if(v0 == 0) {
            return NULL;
        }
        gvar_405704 += 16;
        gvar_405718 = v0;
        v1 = gvar_405714;
        goto loc_40315B;
    }
    else {
    loc_40315B:
        int* ptr0 = (int*)(v1 * 20 + gvar_405718);
        v0 = HeapAlloc(gvar_405948, 8, 0x41c4);
        *(LPVOID*)(ptr0 + 4) = v0;
        if(v0 != 0) {
            LPVOID v3 = VirtualAlloc(NULL, 0x100000, 0x2000, 4);
            *(LPVOID*)(ptr0 + 3) = v3;
            if(v3 == 0) {
                HeapFree(gvar_405948, 0, *(LPVOID*)(ptr0 + 4));
                return NULL;
            }
            *(ptr0 + 2) = -1;
            *ptr0 = 0;
            *(ptr0 + 1) = 0;
            ++gvar_405714;
            **(unsigned int*)(ptr0 + 4) = -1;
            result = ptr0;
        }
        else {
            result = NULL;
        }
    }
    return result;
}

int sub_4031B3(int param0) {
    int result;
    int v0;
    int v1;
    int v2 = v0;
    int v3 = param0;
    int v4 = v1;
    int v5 = *(int*)(v3 + 16);
    int v6 = *(int*)(v3 + 8);
    int i;
    for(i = 0; v6 >= 0; ++i) {
        v6 *= 2;
    }
    int counter = 63;
    int v7 = i * 516 + v5 + 0x144;
    v2 = i * 516 + v5 + 0x144;
    do {
        *(int*)(v7 + 8) = v7;
        *(int*)(v7 + 4) = v7;
        v7 += 8;
        --counter;
    }
    while(counter);
    int v8 = 4;
    LPVOID lpAddress = (LPVOID)(i * 0x8000 + *(int*)(v3 + 12));
    LPVOID v9 = VirtualAlloc(lpAddress, 0x8000, 0x1000, 4);
    if(!v9) {
        result = -1;
    }
    else {
        if((unsigned int)(int*)((int)lpAddress + 0x7000) >= (unsigned int)lpAddress) {
            unsigned int* ptr0 = (unsigned int*)((int)lpAddress + 16);
            do {
                *(int*)(ptr0 - 2) = -1;
                *(int*)(ptr0 + 1019) = -1;
                *(int*)(ptr0 - 1) = 0xff0;
                *ptr0 = (int*)(ptr0 + 0x3ff);
                *(ptr0 + 1) = (int*)(ptr0 - 1025);
                *(int*)(ptr0 + 1018) = 0xff0;
                ptr0 += 0x400;
            }
            while((int*)(ptr0 - 4) <= (int*)((int)lpAddress + 0x7000));
        }
        int v10 = v2 + 504;
        v8 = 1;
        *(unsigned int*)(v10 + 4) = (int*)((int)lpAddress + 12);
        *(int*)((int)lpAddress + 20) = v10;
        *(unsigned int*)(v10 + 8) = (int*)((int)lpAddress + 0x700c);
        *(int*)((int)lpAddress + 0x7010) = v10;
        *(int*)(i * 4 + v5 + 68) = 0;
        *(int*)(i * 4 + v5 + 196) = 1;
        char v11 = *(char*)(v5 + 67) ? 0: 1;
        int v12 = param0;
        *(char*)(v5 + 67) = *(char*)(v5 + 67) + 1;
        if(v11) {
            *(int*)(v12 + 4) = *(int*)(v12 + 4) | 0x1;
        }
        *(int*)(v12 + 8) = ~(0x80000000 >>> (i & 0x1f)) & *(int*)(v12 + 8);
        result = i;
    }
    return result;
}

int sub_4032AE(int param0, int param1, int param2) {
    int* ptr0;
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int v5;
    int v6;
    int v7;
    int v8 = v7;
    int v9 = 0;
    char v10 = gvar_4056C8 == 0;
    char v11 = gvar_4056C8 >= 0x80000000;
    char v12 = __parity__((unsigned char)gvar_4056C8);
    char v13 = gvar_4056C8 < 0;
    char v14 = 0;
    char v15 = 0;
    if(v10) {
        HMODULE v16 = LoadLibraryA("user32.dll");
        HMODULE hModule = v16;
        char v17 = hModule == 0;
        char v18 = (int)hModule < 0;
        char v19 = __parity__((unsigned char)hModule);
        char v20 = (unsigned int)hModule < 0;
        char v21 = 0;
        v15 = 0;
        if(!v17) {
            int v22 = 18642;
            v16 = (HMODULE)GetProcAddress(hModule, "MessageBoxA");
            char v23 = v16 ? 0: 1;
            char v24 = (int)v16 < 0;
            char v25 = __parity__((unsigned char)v16);
            char v26 = 0;
            char v27 = 0;
            gvar_4056C8 = v16;
            if(!v23) {
                FARPROC v28 = GetProcAddress(hModule, "GetActiveWindow");
                gvar_4056CC = v28;
                FARPROC v29 = GetProcAddress(hModule, "GetLastActivePopup");
                gvar_4056D0 = v29;
                goto loc_4032FD;
            }
        }
        v5 = 0;
        v4 = 1;
        v3 = 0;
        v2 = 1;
        v1 = 0;
        v0 = 0;
    }
    else {
    loc_4032FD:
        unsigned int v30 = gvar_4056CC;
        v4 = v30 ? 0: 1;
        v3 = v30 >= 0x80000000;
        v2 = __parity__((unsigned char)v30);
        v1 = 0;
        v0 = 0;
        if(!v4) {
            int v31 = v30();
            v9 = v31;
            v4 = v9 ? 0: 1;
            v3 = v9 < 0;
            v2 = __parity__((unsigned char)v9);
            v1 = 0;
            v0 = 0;
            if(!v4) {
                unsigned int v32 = gvar_4056D0;
                v4 = v32 ? 0: 1;
                v3 = v32 >= 0x80000000;
                v2 = __parity__((unsigned char)v32);
                v1 = 0;
                v0 = 0;
                if(!v4) {
                    int v33 = v32(v9);
                    v9 = v33;
                }
            }
        }
        int v34 = param2;
        int v35 = param1;
        int v36 = param0;
        ptr0 = &v6;
        v5 = gvar_4056C8(v9, v36, v35, v34);
    }
    int v37 = *ptr0;
    ++ptr0;
    int v38 = *ptr0;
    ++ptr0;
    int v39 = *ptr0;
    ++ptr0;
    int v40 = *ptr0;
    ++ptr0;
    jump v40;
}

int sub_40343E(LCID Locale, DWORD dwMapFlags, unsigned char* param2, int* param3, LPSTR lpDestStr, int cchDest, UINT CodePage, unsigned int param7) {
    LPSTR lpMultiByteStr;
    int cbMultiByte;
    int result;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = -1;
    int v6 = &gvar_404430;
    int v7 = &sub_401E84;
    int v8 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v8;
    int v9 = v2;
    LPWSTR v10 = &v3;
    if(gvar_4056F4 == 0) {
        int v11 = LCMapStringW(0, 0x100, (LPCWSTR)0x40442C, 1, NULL, 0);
        if(v11) {
            gvar_4056F4 = 1;
            goto loc_4034B7;
        }
        else {
            v0 = LCMapStringA(0, 0x100, (LPCSTR)0x404428, 1, NULL, 0);
            if(!v0) {
                result = 0;
                *(int*)__FS_BASE = v8;
                return result;
            }
            gvar_4056F4 = 2;
            goto loc_4034B7;
        }
    }
    else {
    loc_4034B7:
        if((int)param3 > 0) {
            param3 = sub_403662(param2, param3);
        }
        v0 = gvar_4056F4;
        if(v0 == 2) {
            result = LCMapStringA(Locale, dwMapFlags, (LPCSTR)param2, (int)param3, lpDestStr, cchDest);
        }
        else {
            if(v0 == 1) {
                if(CodePage == 0) {
                    CodePage = gvar_4056EC;
                }
                int cchWideChar = MultiByteToWideChar(CodePage, param7 <= 0 ? 1: 9, (LPCCH)param2, (int)param3, NULL, 0);
                int cchSrc = cchWideChar;
                if(cchWideChar != 0) {
                    sub_403B40(v4);
                    v10 = &v3;
                    LPWSTR lpWideCharStr = &v3;
                    v5 = -1;  // } (starts at 403530h)
                    if(lpWideCharStr != 0) {
                        v0 = MultiByteToWideChar(CodePage, 1, (LPCCH)param2, (int)param3, lpWideCharStr, cchWideChar);
                        if(v0) {
                            int cchDest1 = LCMapStringW(Locale, dwMapFlags, lpWideCharStr, cchWideChar, NULL, 0);
                            if(cchDest1 != 0) {
                                if(!((unsigned char)(dwMapFlags >>> 8) & 0x4)) {
                                    sub_403B40(v4);
                                    v10 = &v3;
                                    LPWSTR v12 = &v3;
                                    v5 = -1;  // } (starts at 4035E0h)
                                }
                                else if(cchDest == 0) {
                                    result = cchDest1;
                                    *(int*)__FS_BASE = v8;
                                    return result;
                                }
                                else {
                                    if(cchDest1 <= cchDest) {
                                        v0 = LCMapStringW(Locale, dwMapFlags, lpWideCharStr, cchWideChar, (LPWSTR)lpDestStr, cchDest);
                                        if(v0) {
                                            result = cchDest1;
                                            *(int*)__FS_BASE = v8;
                                            return result;
                                        }
                                    }
                                    result = 0;
                                    *(int*)__FS_BASE = v8;
                                    return result;
                                }
                                if(&v1 != 60) {
                                    v0 = LCMapStringW(Locale, dwMapFlags, lpWideCharStr, cchSrc, &v3, cchDest1);
                                    if(v0) {
                                        if(cchDest == 0) {
                                            cbMultiByte = 0;
                                            lpMultiByteStr = NULL;
                                        }
                                        else {
                                            cbMultiByte = cchDest;
                                            lpMultiByteStr = lpDestStr;
                                        }
                                        cchDest1 = WideCharToMultiByte(CodePage, 544, &v3, cchDest1, lpMultiByteStr, cbMultiByte, NULL, NULL);
                                        if(cchDest1 != 0) {
                                            result = cchDest1;
                                            *(int*)__FS_BASE = v8;
                                            return result;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            result = 0;
        }
    }
    *(int*)__FS_BASE = v8;
    return result;
}

int* sub_403662(unsigned char* param0, int* param1) {
    unsigned char* ptr0 = param0;
    int* ptr1 = (int*)((char*)param1 - 1);
    if(param1) {
        while(*ptr0) {
            ++ptr0;
            int* ptr2 = ptr1;
            ptr1 = (int*)((char*)ptr1 - 1);
            if(!ptr2) {
                break;
            }
        }
    }
    return !*ptr0 ? (int*)((int)ptr0 - (int)param0): param1;
}

BOOL sub_40368D(DWORD dwInfoType1, LPCSTR lpSrcStr, int cbMultiByte, LPWORD lpCharType, UINT CodePage, LCID param5, unsigned int param6) {
    BOOL result;
    int v0;
    char v1;
    char v2;
    int v3;
    int v4;
    int v5;
    int v6 = -1;
    int v7 = &gvar_404448;
    int v8 = &sub_401E84;
    int v9 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v9;
    int v10 = v4;
    char* ptr0 = &v0;
    BOOL v11 = gvar_4056F8;
    if(v11 == 0) {
        *(int*)&v1 = 1;
        DWORD dwInfoType = *(DWORD*)&v1;
        BOOL v12 = GetStringTypeW(dwInfoType, (LPCWCH)0x40442C, *(int*)&v1, &v2);
        if(v12) {
            v11 = (BOOL)dwInfoType;
            gvar_4056F8 = v11;
            goto loc_4036FF;
        }
        else {
            *(DWORD*)&v1 = dwInfoType;
            v11 = GetStringTypeA(0, dwInfoType, (LPCSTR)0x404428, *(int*)&v1, &v2);
        }
        if(!v11) {
            result = 0;
            *(int*)__FS_BASE = v9;
            return result;
        }
        v11 = 2;
        gvar_4056F8 = v11;
        goto loc_4036FF;
    }
    else {
    loc_4036FF:
        if(v11 == 2) {
            LCID Locale = param5;
            if(Locale == 0) {
                Locale = gvar_4056DC;
            }
            *(int*)&v1 = cbMultiByte;
            result = GetStringTypeA(Locale, dwInfoType1, lpSrcStr, *(int*)&v1, lpCharType);
        }
        else {
            if(v11 == 1) {
                if(CodePage == 0) {
                    CodePage = gvar_4056EC;
                }
                *(int*)&v1 = 0;
                v11 = MultiByteToWideChar(CodePage, param6 <= 0 ? 1: 9, lpSrcStr, cbMultiByte, *(LPWSTR*)&v1, 0);
                int cchWideChar = v11;
                if(v11 != 0) {
                    v6 = 0;  // __try{ (see __except:40378Ah)
                    sub_403B40(v5);
                    ptr0 = &v0;
                    char* ptr1 = &v0;
                    *(int*)&v1 = 0;
                    sub_403B70(&v0, 0, (int*)(v11 * 2));
                    v6 = -1;  // } (starts at 40375Fh)
                    if(&v3 != 56) {
                        *(char**)&v1 = &v0;
                        v11 = MultiByteToWideChar(CodePage, 1, lpSrcStr, cbMultiByte, *(LPWSTR*)&v1, cchWideChar);
                        if(v11 != 0) {
                            *(BOOL*)&v1 = v11;
                            result = GetStringTypeW(dwInfoType1, (LPCWCH)&v0, *(int*)&v1, lpCharType);
                            *(int*)__FS_BASE = v9;
                            return result;
                        }
                    }
                }
            }
            result = 0;
        }
    }
    *(int*)__FS_BASE = v9;
    return result;
}

int sub_4037D6() {
    unsigned int v0 = gvar_405700;
    char v1 = v0 ? 0: 1;
    char v2 = v0 >= 0x80000000;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    jump v1 ? &sub_4037EE: &sub_4037DF;
}

int sub_4037DF(int param0) {
    int v0;
    v0(param0);
    return 1;
}

int sub_4037EE() {
    return 0;
}

int* sub_403800(int* param0, int* param1, int* param2) {
    int* ptr0;
    int* ptr1;
    int* ptr2 = param1;
    int* ptr3 = param2;
    int* ptr4 = param0;
    int* ptr5 = ptr3;
    int* ptr6 = ptr3;
    if(ptr2 >= ptr4 || (int*)((int)ptr5 + (int)ptr2) <= ptr4) {
        if(!(int*)((int)ptr4 & 0x3)) {
            ptr3 = (int*)((int)ptr3 >>> 2);
            ptr1 = (int*)((int)ptr6 & 0x3);
            if((unsigned int)ptr3 < 8) {
            loc_40385C:
                switch(ptr3) {
                    case 0: {
                    loc_40393F:
                        switch(ptr1) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)ptr4 = *(char*)ptr2;
                                return param0;
                            }
                            case 2: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                return param0;
                            }
                            case 3: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                return param0;
                            }
                            default: {
                                throw 0;
                                return param0;
                            }
                        }
                    }
                    case 1: {
                    loc_403930:
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 1) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 1);
                        ptr0 = (int*)((int)ptr3 * 4);
                        ptr2 = (int*)((int)ptr0 + (int)ptr2);
                        ptr4 = (int*)((int)ptr0 + (int)ptr4);
                        break;
                    }
                    case 2: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_403930;
                    }
                    case 3: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_403930;
                    }
                    case 4: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_403930;
                    }
                    case 5: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_403930;
                    }
                    case 6: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_403930;
                    }
                    case 7: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 7);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_403930;
                    }
                    default: {
                        throw 0;
                    }
                }
                goto loc_40393F;
            }
            else {
                while(ptr3 != 0) {
                    *ptr4 = *ptr2;
                    ++ptr2;
                    ++ptr4;
                    ptr3 = (int*)((char*)ptr3 - 1);
                }
                switch(ptr1) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)ptr4 = *(char*)ptr2;
                        return param0;
                    }
                    case 2: {
                        *(char*)ptr4 = *(char*)ptr2;
                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                        return param0;
                    }
                    case 3: {
                        *(char*)ptr4 = *(char*)ptr2;
                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                        *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
        }
        ptr0 = ptr4;
        int* ptr7 = ptr3;
        --ptr3;
        if((unsigned int)ptr7 >= 4) {
            ptr0 = (int*)((int)ptr0 & 0x3);
            int* ptr8 = (int*)((int)ptr0 + (int)ptr3);
            switch(ptr0) {
                case 1: {
                    ptr1 = (int*)((int)ptr8 & 0x3);
                    *(char*)ptr4 = *(char*)ptr2;
                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                    ptr3 = (int*)((int)ptr8 >>> 2);
                    *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                    ptr2 = (int*)((char*)ptr2 + 3);
                    ptr4 = (int*)((char*)ptr4 + 3);
                    if((unsigned int)ptr3 >= 8) {
                        while(ptr3 != 0) {
                            *ptr4 = *ptr2;
                            ++ptr2;
                            ++ptr4;
                            ptr3 = (int*)((char*)ptr3 - 1);
                        }
                        switch(ptr1) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)ptr4 = *(char*)ptr2;
                                return param0;
                            }
                            case 2: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                return param0;
                            }
                            case 3: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    loc_40389C:
                        ptr1 = (int*)((int)ptr8 & 0x3);
                        *(char*)ptr4 = *(char*)ptr2;
                        ptr3 = (int*)((int)ptr8 >>> 2);
                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                        ptr2 = (int*)((char*)ptr2 + 2);
                        ptr4 = (int*)((char*)ptr4 + 2);
                        if((unsigned int)ptr3 >= 8) {
                            while(ptr3 != 0) {
                                *ptr4 = *ptr2;
                                ++ptr2;
                                ++ptr4;
                                ptr3 = (int*)((char*)ptr3 - 1);
                            }
                            switch(ptr1) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *(char*)ptr4 = *(char*)ptr2;
                                    return param0;
                                }
                                case 2: {
                                    *(char*)ptr4 = *(char*)ptr2;
                                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                    return param0;
                                }
                                case 3: {
                                    *(char*)ptr4 = *(char*)ptr2;
                                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                    *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        loc_4038C0:
                            ptr1 = (int*)((int)ptr8 & 0x3);
                            *(char*)ptr4 = *(char*)ptr2;
                            ptr2 = (int*)((char*)ptr2 + 1);
                            ptr3 = (int*)((int)ptr8 >>> 2);
                            ptr4 = (int*)((char*)ptr4 + 1);
                            if((unsigned int)ptr3 >= 8) {
                                while(ptr3 != 0) {
                                    *ptr4 = *ptr2;
                                    ++ptr2;
                                    ++ptr4;
                                    ptr3 = (int*)((char*)ptr3 - 1);
                                }
                                switch(ptr1) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)ptr4 = *(char*)ptr2;
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)ptr4 = *(char*)ptr2;
                                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)ptr4 = *(char*)ptr2;
                                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                        *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                    }
                                }
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 7);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                                goto loc_403930;
                            }
                        }
                    }
                    goto loc_40385C;
                }
                case 2: {
                    goto loc_40389C;
                }
                case 3: {
                    goto loc_4038C0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_403854;
        }
        else {
        loc_403854:
            switch(ptr3) {
                case -4: {
                    *(char*)ptr4 = *(char*)ptr2;
                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                    *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                    return param0;
                }
                case -3: {
                    *(char*)ptr4 = *(char*)ptr2;
                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                    return param0;
                }
                case -2: {
                    *(char*)ptr4 = *(char*)ptr2;
                    return param0;
                }
                case -1: {
                    return param0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_40385C;
        }
    }
    else {
        int* ptr9 = (int*)((int)ptr3 + (int)ptr2) - 1;
        int* ptr10 = (int*)((int)ptr3 + (int)ptr4) - 1;
        if(!(int*)((int)ptr10 & 0x3)) {
            ptr3 = (int*)((int)ptr3 >>> 2);
            ptr1 = (int*)((int)ptr6 & 0x3);
            if((unsigned int)ptr3 >= 8) {
                while(ptr3 != 0) {
                    *ptr10 = *ptr9;
                    --ptr9;
                    --ptr10;
                    ptr3 = (int*)((char*)ptr3 - 1);
                }
                switch(ptr1) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        return param0;
                    }
                    case 2: {
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                        return param0;
                    }
                    case 3: {
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                        *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
            ptr3 = (int*)(0 - (int)ptr3);
            jump gvar_403A74[(int*)((char*)ptr3 + 7)];
        }
        else {
            ptr0 = ptr10;
        loc_4039E4:
            switch(ptr3) {
                case 0: {
                    return param0;
                }
                case 1: {
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    return param0;
                }
                case 2: {
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                    return param0;
                }
                case 3: {
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                    *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                    return param0;
                }
            }
            ptr0 = (int*)((int)ptr0 & 0x3);
            int* ptr11 = (int*)((int)ptr3 - (int)ptr0);
            switch(ptr0) {
                case 1: {
                    ptr1 = (int*)((int)ptr11 & 0x3);
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    ptr9 = (int*)((char*)ptr9 - 1);
                    ptr3 = (int*)((int)ptr11 >>> 2);
                    ptr10 = (int*)((char*)ptr10 - 1);
                    if((unsigned int)ptr3 >= 8) {
                        while(ptr3 != 0) {
                            *ptr10 = *ptr9;
                            --ptr9;
                            --ptr10;
                            ptr3 = (int*)((char*)ptr3 - 1);
                        }
                        switch(ptr1) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                return param0;
                            }
                            case 2: {
                                *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                return param0;
                            }
                            case 3: {
                                *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    loc_403A1B:
                        ptr1 = (int*)((int)ptr11 & 0x3);
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        ptr3 = (int*)((int)ptr11 >>> 2);
                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                        ptr9 = (int*)((char*)ptr9 - 2);
                        ptr10 = (int*)((char*)ptr10 - 2);
                        if((unsigned int)ptr3 >= 8) {
                            while(ptr3 != 0) {
                                *ptr10 = *ptr9;
                                --ptr9;
                                --ptr10;
                                ptr3 = (int*)((char*)ptr3 - 1);
                            }
                            switch(ptr1) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                    return param0;
                                }
                                case 2: {
                                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                    return param0;
                                }
                                case 3: {
                                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                    *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        loc_403A43:
                            ptr1 = (int*)((int)ptr11 & 0x3);
                            *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                            *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                            ptr3 = (int*)((int)ptr11 >>> 2);
                            *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                            ptr9 = (int*)((char*)ptr9 - 3);
                            ptr10 = (int*)((char*)ptr10 - 3);
                            if((unsigned int)ptr3 >= 8) {
                                while(ptr3 != 0) {
                                    *ptr10 = *ptr9;
                                    --ptr9;
                                    --ptr10;
                                    ptr3 = (int*)((char*)ptr3 - 1);
                                }
                                switch(ptr1) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                    }
                                }
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 7);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 6);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 5);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 4);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 3);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 2);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 1) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 1);
                                ptr0 = (int*)((int)ptr3 * 4);
                                ptr9 = (int*)((int)ptr0 + (int)ptr9);
                                ptr10 = (int*)((int)ptr0 + (int)ptr10);
                                switch(ptr1) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                        return param0;
                                    }
                                }
                            }
                        }
                    }
                    ptr3 = (int*)(0 - (int)ptr3);
                    jump gvar_403A74[(int*)((char*)ptr3 + 7)];
                }
                case 2: {
                    goto loc_403A1B;
                }
                case 3: {
                    goto loc_403A43;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_4039E4;
        }
    }
}

int sub_403B40(int param0) {
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

char* sub_403B70(char* param0, char param1, int* param2) {
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
            goto loc_403BB7;
        }
        else {
        loc_403BB7:
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

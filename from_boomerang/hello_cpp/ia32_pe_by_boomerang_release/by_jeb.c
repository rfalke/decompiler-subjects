
int _abnormal_termination() {
    int result = 0;
    int v0 = *(int*)__FS_BASE;
    if(*(int*)(v0 + 4) == &sub_401DAC && *(int*)(*(int*)(v0 + 12) + 12) == *(int*)(v0 + 8)) {
        result = 1;
    }
    return result;
}

int _global_unwind2(PVOID TargetFrame) {
    int v0;
    int result;
    int* ptr0 = &v0;
    →KERNEL32.dll!RtlUnwind(TargetFrame, (PVOID)&loc_401DA4, NULL, NULL);
    return result;
}

int start() {
    int v0;
    int v1;
    int v2;
    char v3;
    short v4;
    unsigned int* ptr0;
    unsigned int j;
    int v5;
    int v6;
    int v7 = &gvar_4040F0;
    int v8 = &sub_401E84;
    int v9 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v9;
    int v10 = v6;
    unsigned int* ptr1 = &v1;
    DWORD v11 = /*BAD_CALL!*/ GetVersion();
    gvar_405580 = (unsigned int)(unsigned char)(v11 >>> 8);
    gvar_40557C = (unsigned int)(unsigned char)v11;
    gvar_405578 = (unsigned int)((unsigned int)(unsigned char)v11 * 0x100 + (unsigned int)(unsigned char)(v11 >>> 8));
    gvar_405574 = (unsigned int)(v11 >>> 16);
    int v12 = sub_401D50(0);
    unsigned int* ptr2 = &v1;
    if(!v12) {
        ptr2 = &v2;  // } (starts at 4013BCh)
        /*NO_RETURN*/ sub_40146B(28);  // } (starts at 4013BCh)
    }
    int v13 = 0;  // __try{ (see __except:40143Bh)
    --ptr2;
    *ptr2 = &loc_4013C4;
    /*BAD_CALL!*/ sub_401BA5(j);
    --ptr2;
    *ptr2 = &loc_4013CA;
    LPSTR v14 = /*BAD_CALL!*/ GetCommandLineA();
    gvar_405A78 = v14;
    --ptr2;
    *ptr2 = &loc_4013D4;
    int v15 = /*BAD_CALL!*/ sub_401A73(v5);
    gvar_40555C = v15;
    --ptr2;
    *ptr2 = &loc_4013DE;
    /*BAD_CALL!*/ sub_401826(v5);
    --ptr2;
    *ptr2 = &loc_4013E3;
    /*BAD_CALL!*/ sub_40176D();
    --ptr2;
    *ptr2 = &loc_4013E8;
    /*BAD_CALL!*/ sub_40148F();
    int v16 = 0;
    --ptr2;
    *ptr2 = &v3;
    --ptr2;
    *ptr2 = &loc_4013F5;
    /*BAD_CALL!*/ GetStartupInfoA(*(LPSTARTUPINFOA*)(ptr2 + 1));
    --ptr2;
    *ptr2 = &loc_4013FA;
    unsigned char* ptr3 = /*BAD_CALL!*/ sub_401715();
    if(((unsigned char)v16 & 0x1)) {
        v0 = (unsigned int)v4;
    }
    else {
        --ptr2;
        *ptr2 = 10;
        v0 = *ptr2;
        ++ptr2;
    }
    --ptr2;
    *ptr2 = v0;
    --ptr2;
    *ptr2 = ptr3;
    --ptr2;
    *ptr2 = 0;
    --ptr2;
    *ptr2 = 0;
    --ptr2;
    *ptr2 = &loc_401418;
    HMODULE v17 = /*BAD_CALL!*/ GetModuleHandleA(*(LPCSTR*)(ptr2 + 1));
    --ptr2;
    *ptr2 = v17;
    --ptr2;
    *ptr2 = &loc_40141E;
    int v18 = /*BAD_CALL!*/ sub_401000(*(HINSTANCE*)(ptr2 + 1), *(int*)(ptr2 + 2), *(int*)(ptr2 + 3), *(int*)(ptr2 + 4));
    int v19 = v18;
    --ptr2;
    *ptr2 = v18;
    --ptr2;
    *ptr2 = &loc_401427;
    /*BAD_CALL!*/ sub_4014BC(*(int*)(ptr2 + 1));
    int v20 = **ptr0;
    int v21 = **ptr0;
    --ptr2;
    *ptr2 = ptr0;
    --ptr2;
    *ptr2 = v20;
    --ptr2;
    *ptr2 = &loc_401438;
    /*BAD_CALL!*/ sub_401591(*(int*)(ptr2 + 1), *(_EXCEPTION_POINTERS**)(ptr2 + 2));
    jump *(int*)(ptr2 + 2);  // } (starts at 4013BCh)
}

int sub_401000(HINSTANCE hInstance, int param1, int param2, int nCmdShow) {
    HWND hWnd;
    BOOL result;
    int v0;
    LoadStringA(hInstance, 103, (LPSTR)0x4054F4, 100);
    LoadStringA(hInstance, 109, (LPSTR)0x405490, 100);
    sub_4010C0(hInstance);
    int v1 = sub_401150(hInstance, nCmdShow);
    if(!v1) {
        return 0;
    }
    HACCEL hAccTable = LoadAcceleratorsA(hInstance, (LPCSTR)0x6D);
    BOOL v2 = GetMessageA(&hWnd, NULL, 0, 0);
    if(v2) {
        int v3 = v0;
        do {
            int v4 = TranslateAcceleratorA(hWnd, hAccTable, &hWnd);
            if(!v4) {
                TranslateMessage((MSG*)&hWnd);
                DispatchMessageA((MSG*)&hWnd);
            }
            result = GetMessageA(&hWnd, NULL, 0, 0);
        }
        while(result);
    }
    return result;
}

ATOM sub_4010C0(HINSTANCE hInstance) {
    int v0 = 48;
    int v1 = 3;
    int v2 = &sub_4011B0;
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

int sub_401150(HINSTANCE hInstance, int nCmdShow) {
    gvar_405558 = hInstance;
    HWND hWnd = CreateWindowExA(0, (LPCSTR)0x405490, (LPCSTR)0x4054F4, 0xcf0000, 0x80000000, 0, 0x80000000, 0, NULL, NULL, hInstance, NULL);
    if(!hWnd) {
        return 0;
    }
    ShowWindow(hWnd, nCmdShow);
    return UpdateWindow(hWnd);
}

LRESULT sub_4011B0(HWND hWnd1, UINT param1, WPARAM wParam, LPARAM lParam) {
    char v0;
    char v1;
    char v2;
    int v3;
    LoadStringA(gvar_405558, 106, &v0, 100);
    UINT Msg = param1;
    int v4 = Msg - 2;
    if(v4) {
        int v5 = v4 - 13;
        if(!v5) {
            int v6 = v3;
            HWND hWnd = hWnd1;
            HDC hdc = BeginPaint(hWnd, &v1);
            GetClientRect(hWnd, &v2);
            UINT v7 = 1;
            LPRECT lprc = &v2;
            LPSTR v8 = &v0;
            int v9 = -1;
            while(v9 != 0) {
                char v10 = v8[0] == 0;
                ++v8;
                --v9;
                if(!~v10) {
                    break;
                }
            }
            DrawTextA(hdc, &v0, ~v9 - 1, lprc, 1);
            EndPaint(hWnd, (PAINTSTRUCT*)&v1);
        }
        else if(v5 != 258) {
            return DefWindowProcA(hWnd1, Msg, wParam, lParam);
        }
        else {
            WPARAM wParam1 = wParam;
            int v11 = (unsigned int)(WPARAM)(wParam1 & 0xFFFF) - 104;
            if(!v11) {
                DialogBoxParamA(gvar_405558, (LPCSTR)0x67, hWnd1, (DLGPROC)&sub_401310, 0);
                return 0;
            }
            else if((v11 - 1)) {
                return DefWindowProcA(hWnd1, 0x111, wParam1, lParam);
            }
            DestroyWindow(hWnd1);
            return 0;
        }
    }
    else {
        PostQuitMessage(0);
    }
    return 0;
}

int sub_401310(HWND hDlg, int param1, int param2, int param3) {
    if(param1 != 0x110) {
        if(param1 != 0x111 || ((unsigned short)param2 != 1 && (unsigned short)param2 != 2)) {
            return 0;
        }
        EndDialog(hDlg, (INT_PTR)(unsigned short)param2);
    }
    return 1;
}

int sub_40143B() {
    int v0;
    /*BAD_CALL!*/ sub_4014CD(*(int*)(v0 - 104));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401446(int param0) {
    if(gvar_405564 == 1) {
        sub_401F5C();
    }
    sub_401F95(param0);
    return gvar_405030{sub_4014CD}(0xFF);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40146B(int param0) {
    if(gvar_405564 == 1) {
        sub_401F5C();
    }
    sub_401F95(param0);
    /*NO_RETURN*/ ExitProcess(0xff);
}

int sub_40148F() {
    unsigned int v0 = gvar_405A74;
    if(v0) {
        v0();
    }
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

int sub_4014DE(UINT uExitCode, int param1, int param2) {
    int result;
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
    sub_401577((int*)0x40501C, 0x405020);
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

LONG sub_401591(int param0, _EXCEPTION_POINTERS* ExceptionInfo) {
    LONG result;
    int* ptr0 = sub_4016D2(param0);
    if(ptr0) {
        int v0 = ptr0[2];
        if(!v0) {
            return UnhandledExceptionFilter(ExceptionInfo);
        }
        else if(v0 == 5) {
            ptr0[2] = 0;
            result = 1;
        }
        else {
            if(v0 != 1) {
                param0 = gvar_4055B4;
                gvar_4055B4 = ExceptionInfo;
                int v1 = ptr0[1];
                if(v1 == 8) {
                    int v2 = gvar_4050B0;
                    int v3 = (int)(gvar_4050B4 + v2);
                    if(v2 < v3) {
                        int counter = v3 - v2;
                        int* ptr1 = (int*)(v2 * 12 + &gvar_405040);
                        do {
                            *ptr1 = 0;
                            ptr1 += 3;
                            --counter;
                        }
                        while(counter);
                    }
                    unsigned int v4 = gvar_4050BC;
                    switch(ptr0[0]) {
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
                    v0(8, (int)gvar_4050BC);
                    gvar_4050BC = v4;
                }
                else {
                    ptr0[2] = 0;
                    v0(v1);
                }
                gvar_4055B4 = param0;
            }
            result = -1;
        }
    }
    else {
        result = UnhandledExceptionFilter(ExceptionInfo);
    }
    return result;
}

int* sub_4016D2(int param0) {
    unsigned int v0 = gvar_4050B8;
    int* result = (int*)&gvar_405038;
    if(gvar_405038 != param0) {
        do {
            result += 3;
        }
        while((unsigned int)(v0 * 12 + &gvar_405038) > (unsigned int)result && *result != param0);
    }
    if((unsigned int)(v0 * 12 + &gvar_405038) <= (unsigned int)result || *result != param0) {
        result = NULL;
    }
    return result;
}

unsigned char* sub_401715() {
    int v0;
    if(!gvar_405A68) {
        v0 = sub_4024EE();
    }
    unsigned char* result = gvar_405A78;
    v0 = (unsigned int)*result | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
    if((unsigned char)v0 == 34) {
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
                v0 = sub_4020E8((int)(unsigned char)v0);
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
        if(!(unsigned char)v0 || (unsigned char)v0 > 32) {
            return result;
        }
        ++result;
        goto loc_40175F;
    }
}

unsigned int* sub_40176D() {
    int* ptr0;
    int i;
    if(gvar_405A68 == 0) {
        i = sub_4024EE();
    }
    char* ptr1 = gvar_40555C;
    int v0 = 0;
    for(i = (unsigned int)ptr1[0] | ((unsigned int)((i >>> 8) & 0xffffff) << 8); (unsigned char)i != 0; i = (unsigned int)ptr1[0] | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
        if((unsigned char)i != 61) {
            ++v0;
        }
        i = (int)sub_4026B0(ptr1);
        ptr1 = (char*)(i + (int)ptr1) + 1;
    }
    int v1 = sub_402630(v0 * 4 + 4);
    gvar_405590 = v1;
    if(v1 == 0) {
        sub_401446(9);
    }
    for(char* j = gvar_40555C; j[0] != 0; j = (char*)((int)ptr0 + (int)j) + 1) {
        ptr0 = sub_4026B0(j);
        if(j[0] != 61) {
            int v2 = sub_402630((int)((char*)ptr0 + 1));
            *(int*)v1 = v2;
            if(v2 == 0) {
                sub_401446(9);
            }
            sub_402540(*(char**)v1, j);
            v1 += 4;
        }
    }
    unsigned int* result = sub_40250A(gvar_40555C);
    gvar_40555C = 0;
    *(int*)v1 = 0;
    gvar_405A64 = 1;
    return result;
}

unsigned int sub_401826(int param0) {
    int v0 = param0;
    int v1 = param0;
    if(gvar_405A68 == 0) {
        sub_4024EE();
    }
    GetModuleFileNameA(NULL, (LPSTR)0x4055B8, 260);
    char* ptr0 = gvar_405A78;
    gvar_4055A0 = 4216248;
    char* ptr1 = ptr0[0] == 0 ? (char*)0x4055B8: ptr0;
    sub_4018BF(ptr1, NULL, NULL, &v0, &v1);
    int v2 = sub_402630(v0 * 4 + v1);
    if(v2 == 0) {
        sub_401446(8);
    }
    sub_4018BF(ptr1, (unsigned int*)v2, (char*)(v0 * 4 + v2), &v0, &v1);
    gvar_405588 = v2;
    gvar_405584 = (unsigned int)(v0 - 1);
    return (unsigned int)(v0 - 1);
}

int* sub_4018BF(char* param0, unsigned int* param1, char* param2, int* param3, int* param4) {
    char* i;
    int* ptr0;
    int* ptr1 = param4;
    int* ptr2 = param3;
    int* ptr3 = ptr0;
    *ptr1 = 0;
    char* ptr4 = param2;
    unsigned int* ptr5 = param1;
    *ptr2 = 1;
    char* ptr6 = param0;
    if(ptr5) {
        *ptr5 = ptr4;
        ++ptr5;
        param1 = ptr5;
    }
    if(*ptr6 == 34) {
        while(1) {
            i = (unsigned int)*(ptr6 + 1) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
            ++ptr6;
            if((unsigned char)i == 34 || !(unsigned char)i) {
                break;
            }
            else {
                i = (char*)((int)i & 0xFF);
                if((*(i + 0x405841) & 0x4)) {
                    *ptr1 = *ptr1 + 1;
                    if(ptr4) {
                        i = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                        *ptr4 = (unsigned char)i;
                        ++ptr4;
                        ++ptr6;
                    }
                }
                *ptr1 = *ptr1 + 1;
                if(ptr4) {
                    i = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                    *ptr4 = (unsigned char)i;
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
                *ptr4 = (unsigned char)i;
                ++ptr4;
            }
            i = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
            ++ptr6;
            if((*(char*)((char*)((int)(int*)((int)i & 0xFF) + (int)&gvar_405840) + 1) & 0x4)) {
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
        for(i = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8); (unsigned char)i == 32 || (unsigned char)i == 9; i = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8)) {
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
            *param3 = *param3 + 1;
            while(1) {
                param0 = (char*)0x1;
                char* j;
                for(j = NULL; *ptr6 == 92; ++j) {
                    ++ptr6;
                }
                if(*ptr6 == 34) {
                    if(!((unsigned char)j & 0x1)) {
                        if(param4 != 0) {
                            i = ptr6 + 1;
                            if(*(ptr6 + 1) != 34) {
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
                        param4 = param4 == 0 ? (int*)0x1: NULL;
                    }
                    j = (char*)((int)j >>> 1);
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
                if(!(unsigned char)i || (!param4 && ((unsigned char)i == 32 || (unsigned char)i == 9))) {
                    break;
                }
                else {
                    if(param0) {
                        if(ptr4) {
                            if((*(char*)((char*)((int)(int*)((int)i & 0xFF) + (int)&gvar_405840) + 1) & 0x4)) {
                                *ptr4 = (unsigned char)i;
                                ++ptr4;
                                ++ptr6;
                                *ptr1 = *ptr1 + 1;
                            }
                            *ptr4 = *ptr6;
                            ++ptr4;
                        }
                        else if((*(char*)((char*)((int)(int*)((int)i & 0xFF) + (int)&gvar_405840) + 1) & 0x4)) {
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
    int* result = param3;
    *result = *result + 1;
    return result;
}

int sub_401A73(int param0) {
    int result;
    int v0;
    int cchWideChar = param0;
    int v1 = param0;
    unsigned int v2 = gvar_4056BC;
    int v3 = v0;
    int result1 = 0;
    LPWCH lpWideCharStr = NULL;
    LPCH penv = NULL;
    switch(v2) {
        case 0: {
            lpWideCharStr = GetEnvironmentStringsW();
            if(lpWideCharStr != 0) {
                gvar_4056BC = 1;
            }
            else {
                penv = GetEnvironmentStrings();
                if(penv == 0) {
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
            LPWCH v4 = lpWideCharStr;
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
                        sub_40250A(v1);
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
            if(penv == 0) {
                penv = GetEnvironmentStrings();
                if(penv == 0) {
                    return 0;
                }
            }
            LPCH v7 = penv;
            if(penv[0] != 0) {
            loc_401B66:
                do {
                    ++v7;
                    if(v7[0] != 0) {
                        goto loc_401B66;
                    }
                    else {
                        ++v7;
                    }
                }
                while(v7[0] != 0);
            }
            int v8 = (int)((char*)((int)v7 - (int)penv) + 1);
            int result2 = sub_402630(v8);
            if(result2 == 0) {
                result2 = 0;
            }
            else {
                sub_402730((int*)result2, (int*)penv, (int*)v8);
            }
            FreeEnvironmentStringsA(penv);
            return result2;
        }
        default: {
            return 0;
        }
    }
}

UINT sub_401BA5(unsigned int j) {
    char v0;
    int* ptr0;
    unsigned int v1;
    short v2;
    int v3 = sub_402630(0x100);
    if(!v3) {
        sub_401446(27);
    }
    gvar_405960 = v3;
    gvar_405A60 = 32;
    for(unsigned int i = (unsigned int)(v3 + 0x100); i > (unsigned int)v3; i = gvar_405960 + 0x100) {
        *(char*)(v3 + 4) = 0;
        *(int*)v3 = -1;
        *(char*)(v3 + 5) = 10;
        v3 += 8;
    }
    GetStartupInfoA(&v0);
    if(v2) {
        int* ptr1 = ptr0;
        if(ptr1) {
            int v4 = *ptr1;
            char* ptr2 = (char*)(ptr1 + 1);
            unsigned int* ptr3 = (unsigned int*)((int)ptr2 + v4);
            if(v4 >= 0x800) {
                v4 = 0x800;
            }
            if(gvar_405A60 < v4) {
                int* ptr4 = (int*)&gvar_405964;
                do {
                    int v5 = sub_402630(0x100);
                    j = v1;
                    if(v5) {
                        gvar_405A60 += 32;
                        *ptr4 = v5;
                        for(j = (unsigned int)(v5 + 0x100); j > (unsigned int)v5; j = (unsigned int)(*ptr4 + 0x100)) {
                            *(char*)(v5 + 4) = 0;
                            *(int*)v5 = -1;
                            *(char*)(v5 + 5) = 10;
                            v5 += 8;
                        }
                        ++ptr4;
                    }
                    else {
                        v4 = gvar_405A60;
                    }
                    break;
                }
                while(gvar_405A60 < v4);
            }
            int v6 = 0;
            if(v4 > 0) {
                do {
                    HANDLE hFile = *ptr3;
                    if(hFile != -1) {
                        j = (unsigned int)*ptr2 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                        if(((unsigned char)j & 0x1)) {
                            if(!((unsigned char)j & 0x8)) {
                                DWORD v7 = GetFileType(hFile);
                                if(v7) {
                                    goto loc_401CBF;
                                }
                            }
                            else {
                            loc_401CBF:
                                unsigned int* ptr5 = (unsigned int*)((v6 & 0x1f) * 8 + *(unsigned int*)((v6 >> 5) * 4 + (int)&gvar_405960));
                                j = *ptr3;
                                *ptr5 = j;
                                j = (unsigned int)*ptr2 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                                *(char*)(ptr5 + 1) = (unsigned char)j;
                            }
                        }
                    }
                    ++v6;
                    ++ptr2;
                    ++ptr3;
                }
                while(v4 > v6);
            }
        }
    }
    int v8 = 0;
    do {
        unsigned int v9 = gvar_405960;
        unsigned int* ptr6 = (unsigned int*)(v8 * 8 + v9);
        if(*(int*)(v8 * 8 + v9) == -1) {
            *(char*)(ptr6 + 1) = 129;
            HANDLE hFile1 = GetStdHandle(!v8 ? 0xfffffff6: (unsigned int)(v8 - 1) > 0 ? 0xfffffff4: 0xfffffff5);
            if(hFile1 != -1) {
                DWORD v10 = GetFileType(hFile1);
                if(!v10) {
                    goto loc_401D21;
                }
                else {
                    int v11 = (unsigned int)(DWORD)(v10 & 0xFF);
                    *ptr6 = hFile1;
                    if(v11 == 2) {
                        goto loc_401D21;
                    }
                    else if(v11 == 3) {
                        *(char*)(ptr6 + 1) = *(char*)(ptr6 + 1) | 0x8;
                    }
                }
            }
            else {
            loc_401D21:
                *(char*)(ptr6 + 1) = *(char*)(ptr6 + 1) | 0x40;
            }
        }
        else {
            *(char*)(ptr6 + 1) = *(char*)(ptr6 + 1) | 0x80;
        }
        ++v8;
    }
    while(v8 < 3);
    return SetHandleCount(gvar_405A60);
}

int sub_401D50(int param0) {
    HANDLE v0 = HeapCreate(param0 == 0 ? 1: 0, 0x1000, 0);
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

int sub_401DAC(int param0, int param1, int param2, int* param3) {
    int result;
    if((*(int*)(param0 + 4) & 0x6)) {
        result = param1;
        *param3 = param1;
    }
    return result;
}

int sub_401DCE(int param0, int param1) {
    int result;
    int v0 = param0;
    int v1 = -2;
    int v2 = &sub_401DAC;
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
                sub_401E62(v6, 0x101);
                *(int*)(v5 * 12 + v4 + 8)();
            }
        }
    }
    *(int*)__FS_BASE = v3;
    return result;
}

unsigned int sub_401E59(unsigned int param0, int param1) {
    unsigned int v0;
    unsigned int result;
    gvar_4050D4 = param0;
    gvar_4050D0 = result;
    gvar_4050D8 = v0;
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

int sub_401E7C(int param0, int param1) {
    char* ptr0;
    char* ptr1;
    *ptr0 = ((unsigned char)(param1 >>> 8) ^ *ptr1) ^ *ptr0;
}

int sub_401E84(int param0, PVOID param1, int param2) {
    int v0;
    void* ptr0;
    void* ptr1;
    int v1;
    int v2;
    int v3;
    void* ptr2 = &v0;
    int v4 = v1;
    int v5 = v2;
    void* ptr3 = &v0;
    PVOID TargetFrame = param1;
    if(!(*(int*)(param0 + 4) & 0x6)) {
        int v6 = param0;
        int v7 = param2;
        *(unsigned int*)((int)TargetFrame - 4) = &v6;
        int v8 = *(int*)((int)TargetFrame + 12);
        int v9 = *(int*)((int)TargetFrame + 8);
        while(v8 != -1) {
            int v10 = v8 * 3;
            if(*(int*)(v10 * 4 + v9 + 4)) {
                int v11 = *(int*)(v10 * 4 + v9 + 4)((int)ptr2, v8);
                ptr2 = ptr0;
                v8 = (int)ptr1;
                TargetFrame = *(PVOID*)((int)ptr2 + 12);
                if(v11) {
                    if(v11 < 0) {
                        break;
                    }
                    else {
                        int v12 = *(int*)((int)TargetFrame + 8);
                        _global_unwind2(TargetFrame);
                        ptr2 = (void*)((int)TargetFrame + 16);
                        sub_401DCE((int)TargetFrame, v8);
                        sub_401E62(v8 * 3, 1);
                        *(int*)((int)TargetFrame + 12) = *(int*)(v3 * 4 + v12);
                        *(int*)(v3 * 4 + v12 + 8)();
                    }
                }
            }
            v9 = *(int*)((int)TargetFrame + 8);
            v8 = *(int*)(v8 * 12 + v9);
        }
    }
    else {
        ptr1 = &v0;
        sub_401DCE((int)TargetFrame, -1);
    }
    jump v5;
}

int sub_401F41(int param0) {
    return sub_401DCE(*(int*)(param0 + 24), *(int*)(param0 + 28));
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_401F5C() {
    unsigned int result = gvar_405564;
    if(result == 1 || (!result && gvar_405034 == 1)) {
        sub_401F95(252);
        unsigned int v0 = gvar_4056C0;
        if(v0) {
            v0();
        }
        result = (unsigned int)sub_401F95(0xFF);
    }
    return result;
}

int sub_401F95(int param0) {
    char v0;
    char v1;
    char v2;
    int v3 = 0;
    int result = &gvar_4050E0;
    while(*(int*)result != param0) {
        result += 8;
        ++v3;
        if(result >= 4215152) {
            break;
        }
    }
    if(*(int*)(v3 * 8 + (int)&gvar_4050E0) == param0) {
        result = gvar_405564;
        if((result == 1 || (!result && gvar_405034 == 1))) {
            LPOVERLAPPED lpOverlapped = NULL;
            LPDWORD lpNumberOfBytesWritten = &param0;
            DWORD nNumberOfBytesToWrite = (DWORD)sub_4026B0(*(char**)(v3 * 8 + (int)&ptr_aR6002____floati));
            LPCVOID lpBuffer = *(char**)(v3 * 8 + (int)&ptr_aR6002____floati);
            HANDLE hFile = GetStdHandle(0xfffffff4);
            result = WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
        }
        else if(param0 != 252) {
            DWORD v4 = GetModuleFileNameA(NULL, &v0, 260);
            if(!v4) {
                sub_402540((char*)&v0, "<program name unknown>");
            }
            int* ptr0 = sub_4026B0((char*)&v0);
            if((unsigned int)(int*)((char*)ptr0 + 1) > 60) {
                int* ptr1 = sub_4026B0((char*)&v0);
                sub_403340((char*)((int)ptr1 + (int)&v2), (char*)&gvar_4043D0, 3);
            }
            sub_402540(&v1, "Runtime Error!\n\nProgram: ");
            sub_402550(&v1, (char*)&v0);
            sub_402550(&v1, (char*)&gvar_4043B0);
            sub_402550(&v1, *(char**)(v3 * 8 + (int)&ptr_aR6002____floati));
            result = sub_4032AE((int)&v1, "Microsoft Visual C++ Runtime Library", 0x12010);
        }
    }
    return result;
}

int sub_4020E8(int param0) {
    return sub_4020F9((char)param0, 0, 4);
}

int sub_4020F9(char param0, int param1, char param2) {
    if(!(*(char*)((char*)((unsigned int)param0 + (int)&gvar_405840) + 1) & param2) && !(param1 != 0 ? (unsigned int)*(unsigned short*)((unsigned int)param0 * 2 + (int)&gvar_40528A) & param1: 0)) {
        return 0;
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40212A(UINT param0) {
    int result;
    int v0;
    unsigned int v1;
    char v2;
    char v3;
    UINT CodePage = sub_4022C3(param0);
    char v4 = gvar_40571C == CodePage;
    param0 = CodePage;
    if(!v4) {
        if(CodePage != 0) {
            int v5 = 0;
            int* ptr0 = (int*)&gvar_405178;
            while(*ptr0 != CodePage) {
                ptr0 += 12;
                ++v5;
                if((int)ptr0 >= 4215400) {
                    BOOL v6 = GetCPInfo(CodePage, &v1);
                    if(v6 == 1) {
                        v0 = 64;
                        int v7 = 64;
                        int* ptr1 = (int*)&gvar_405840;
                        char v8 = v1 == 1;
                        char v9 = v1 < 1;
                        gvar_40571C = CodePage;
                        while(v7 != 0) {
                            *ptr1 = 0;
                            ++ptr1;
                            --v7;
                        }
                        *(char*)ptr1 = 0;
                        gvar_405944 = 0;
                        if((v9 || v8)) {
                            gvar_40572C = 0;
                            gvar_405720 = 0;
                            gvar_405724 = 0;
                            gvar_405728 = 0;
                            sub_402369();
                            return 0;
                        }
                        else if(v3) {
                            char* ptr2 = &v2;
                            do {
                                unsigned int v10 = (unsigned int)*ptr2 | ((unsigned int)((v10 >>> 8) & 0xffffff) << 8);
                                if(!(unsigned char)v10) {
                                loc_40226B:
                                    int v11 = 1;
                                    do {
                                        *(char*)((char*)((int)&gvar_405840 + v11) + 1) = *(char*)((char*)((int)&gvar_405840 + v11) + 1) | 0x8;
                                        ++v11;
                                    }
                                    while((unsigned int)v11 < 0xff);
                                    int v12 = sub_40230D((int)CodePage);
                                    gvar_405944 = v12;
                                    gvar_40572C = 1;
                                    gvar_405720 = 0;
                                    gvar_405724 = 0;
                                    gvar_405728 = 0;
                                    sub_402369();
                                    return 0;
                                }
                                unsigned int v13 = (unsigned int)*(ptr2 - 1);
                                v10 &= 0xFF;
                                while(v13 <= v10) {
                                    *(char*)((char*)((int)&gvar_405840 + v13) + 1) = *(char*)((char*)((int)&gvar_405840 + v13) + 1) | 0x4;
                                    ++v13;
                                }
                                ptr2 += 2;
                            }
                            while(*(ptr2 - 1));
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
            v0 = 64;
            int v14 = 64;
            int* ptr3 = (int*)&gvar_405840;
            while(v14 != 0) {
                *ptr3 = 0;
                ++ptr3;
                --v14;
            }
            unsigned int v15 = 0;
            int v16 = v5 * 3 * 16;
            *(char*)ptr3 = 0;
            char* ptr4 = (char*)(v16 + &gvar_405188);
            do {
                char* ptr5 = ptr4;
                if(*ptr4) {
                    do {
                        v5 = (unsigned int)*(ptr5 + 1) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
                        if(!(unsigned char)v5) {
                            break;
                        }
                        else {
                            unsigned int v17 = (unsigned int)*ptr5;
                            unsigned int v18 = (unsigned int)(v5 & 0xFF);
                            if(v17 <= v18) {
                                v5 = (unsigned int)*(char*)(v15 + 4215152) | ((unsigned int)((v15 >>> 8) & 0xffffff) << 8);
                                do {
                                    *(char*)((char*)((int)&gvar_405840 + v17) + 1) = (unsigned char)v5 | *(char*)((char*)((int)&gvar_405840 + v17) + 1);
                                    ++v17;
                                }
                                while(v17 <= v18);
                            }
                            ptr5 += 2;
                        }
                    }
                    while(*ptr5);
                }
                ++v15;
                ptr4 += 8;
            }
            while(v15 < 4);
            UINT v19 = param0;
            gvar_40572C = 1;
            v0 = (int)v19;
            gvar_40571C = v19;
            int v20 = sub_40230D(v0);
            unsigned int* ptr6 = (unsigned int*)(v16 + &gvar_40517C);
            gvar_405720 = *ptr6;
            unsigned int* ptr7 = ptr6 + 1;
            gvar_405724 = *ptr7;
            gvar_405944 = v20;
            gvar_405728 = *(ptr7 + 1);
        }
        else {
            sub_402340();
        }
        sub_402369();
        goto loc_4022B7;
    }
    else {
    loc_4022B7:
        result = 0;
    }
    return result;
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

int sub_40230D(int param0) {
    switch(param0) {
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
            if(param0 != 950) {
                return 0;
            }
            return 0x404;
        }
    }
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
unsigned int sub_402369(short* param0, int param1) {
    unsigned int result;
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int v5;
    char v6;
    char v7;
    BOOL v8 = GetCPInfo(gvar_40571C, &v0);
    if(v8 == 1) {
        unsigned int v9 = 0;
        do {
            *(char*)(v9 + (int)&v1) = (unsigned char)v9;
            ++v9;
        }
        while(v9 < 0x100);
        v9 = (unsigned int)v7 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
        v1 = 32;
        if((unsigned char)v9) {
            int v10 = v5;
            char* ptr0 = &v6;
            do {
                unsigned int v11 = (unsigned int)*ptr0;
                v9 = (unsigned int)(v9 & 0xFF);
                if(v9 <= v11) {
                    int* ptr1 = (int*)(v9 + (int)&v1);
                    int v12 = v11 - v9 + 1;
                    v9 = 0x20202020;
                    int v13 = v12;
                    for(int i = v12 >>> 2; i != 0; --i) {
                        *ptr1 = 0x20202020;
                        ++ptr1;
                    }
                    for(int j = v13 & 0x3; j != 0; --j) {
                        *(char*)ptr1 = 32;
                        ptr1 = (int*)((char*)ptr1 + 1);
                    }
                }
                ptr0 += 2;
                v9 = (unsigned int)*(ptr0 - 1) | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
            }
            while((unsigned char)v9);
        }
        sub_40368D(1, (int)&v1, 0x100, (int)&v2, (int)gvar_40571C, (int)gvar_405944, 0);
        sub_40343E((int)gvar_405944, 0x100, (int)&v1, 0x100, (int)&v3, 0x100, (int)gvar_40571C, 0);
        sub_40343E((int)gvar_405944, 0x200, (int)&v1, 0x100, (int)&v4, 0x100, (int)gvar_40571C, 0);
        result = 0;
        param0 = &v2;
        do {
            param1 = (unsigned int)*param0 | ((unsigned int)(unsigned short)(param1 >>> 16) << 16);
            if(((unsigned char)param1 & 0x1)) {
                *(char*)((char*)((int)&gvar_405840 + result) + 1) = *(char*)((char*)((int)&gvar_405840 + result) + 1) | 0x10;
                param1 = (unsigned int)*(char*)(result + (int)&v3) | ((unsigned int)((param1 >>> 8) & 0xffffff) << 8);
                goto loc_402475;
            }
            else if(((unsigned char)param1 & 0x2)) {
                *(char*)((char*)((int)&gvar_405840 + result) + 1) = *(char*)((char*)((int)&gvar_405840 + result) + 1) | 0x20;
                param1 = (unsigned int)*(char*)(result + (int)&v4) | ((unsigned int)((param1 >>> 8) & 0xffffff) << 8);
            loc_402475:
                *(unsigned char*)((int)&gvar_405740 + result) = (unsigned char)param1;
            }
            else {
                *(unsigned char*)((int)&gvar_405740 + result) = 0;
            }
            ++result;
            ++param0;
        }
        while(result < 0x100);
    }
    else {
        result = 0;
        do {
            if(result >= 65 && result <= 90) {
                *(char*)((char*)((int)&gvar_405840 + result) + 1) = *(char*)((char*)((int)&gvar_405840 + result) + 1) | 0x10;
                param0 = (unsigned int)((unsigned char)result + 32) | ((unsigned int)(int*)((int)(int*)((int)param0 >>> 8) & 0xffffff) << 8);
                goto loc_4024BF;
            }
            else if(result >= 97 && result <= 122) {
                *(char*)((char*)((int)&gvar_405840 + result) + 1) = *(char*)((char*)((int)&gvar_405840 + result) + 1) | 0x20;
                param0 = (unsigned int)((unsigned char)result - 32) | ((unsigned int)(int*)((int)(int*)((int)param0 >>> 8) & 0xffffff) << 8);
            loc_4024BF:
                *(unsigned char*)((int)&gvar_405740 + result) = (unsigned char)param0;
            }
            else {
                *(unsigned char*)((int)&gvar_405740 + result) = 0;
            }
            ++result;
        }
        while(result < 0x100);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4024EE() {
    int result;
    if(!gvar_405A68) {
        result = sub_40212A(-3);
        gvar_405A68 = 1;
    }
    return result;
}

unsigned int* sub_40250A(int param0) {
    unsigned int* result;
    if(param0) {
        unsigned int v0 = sub_402AA3(param0);
        if(v0) {
            return sub_402ACE((unsigned int*)v0, (int*)param0);
        }
        result = (unsigned int*)HeapFree(gvar_405948, 0, (LPVOID)param0);
    }
    return result;
}

char* sub_402540(char* param0, char* param1) {
    int v0;
    char* ptr0 = param0;
    char* ptr1 = param1;
    if((int*)((int)ptr1 & 0x3)) {
        do {
            v0 = (unsigned int)*ptr1 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            ++ptr1;
            if(!(unsigned char)v0) {
                *ptr0 = (unsigned char)v0;
                return param0;
            }
            *ptr0 = (unsigned char)v0;
            ++ptr0;
        }
        while((int*)((int)ptr1 & 0x3));
        goto loc_4025DB;
    }
    else {
    loc_4025DB:
        while(1) {
            int v1 = *(int*)ptr1;
            v0 = *(int*)ptr1;
            ptr1 += 4;
            if((((v1 + 0x7efefeff) ^ ~v1) & 0x81010100)) {
                if(!(unsigned char)v0) {
                    break;
                }
                else if(!(unsigned char)(v0 >>> 8)) {
                    *(short*)ptr0 = (unsigned short)v0;
                    return param0;
                }
                else if(!(v0 & 0xff0000)) {
                    *(short*)ptr0 = (unsigned short)v0;
                    *(ptr0 + 2) = 0;
                    return param0;
                }
                else if(!(v0 & 0xff000000)) {
                    *(int*)ptr0 = v0;
                    return param0;
                }
            }
            *(int*)ptr0 = v0;
            ptr0 += 4;
        }
    }
    *ptr0 = (unsigned char)v0;
    return param0;
}

char* sub_402550(char* param0, char* param1) {
    char* ptr0;
    int v0;
    char* ptr1 = param0;
    if((int*)((int)ptr1 & 0x3)) {
        do {
            char v1 = *ptr1;
            ++ptr1;
            if(!v1) {
                goto loc_40259F;
            }
        }
        while((int*)((int)ptr1 & 0x3));
    }
    else {
    loc_40256C:
        do {
            int v2 = *(int*)ptr1;
            v0 = v2 + 0x7efefeff;
            ptr1 += 4;
            if(((~v2 ^ v0) & 0x81010100)) {
                int v3 = *(int*)(ptr1 - 4);
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
                    goto loc_40256C;
                }
                else {
                    break;
                }
                goto loc_4025B1;
            }
        }
        while(1);
    loc_40259F:
        ptr0 = ptr1 - 1;
    }
loc_4025B1:
    char* ptr2 = param1;
    if((int*)((int)ptr2 & 0x3)) {
        do {
            v0 = (unsigned int)*ptr2 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            ++ptr2;
            if(!(unsigned char)v0) {
                *ptr0 = (unsigned char)v0;
                return param0;
            }
            *ptr0 = (unsigned char)v0;
            ++ptr0;
        }
        while((int*)((int)ptr2 & 0x3));
        goto loc_4025DB;
    }
    else {
    loc_4025DB:
        while(1) {
            int v4 = *(int*)ptr2;
            v0 = *(int*)ptr2;
            ptr2 += 4;
            if((((v4 + 0x7efefeff) ^ ~v4) & 0x81010100)) {
                if(!(unsigned char)v0) {
                    break;
                }
                else if(!(unsigned char)(v0 >>> 8)) {
                    *(short*)ptr0 = (unsigned short)v0;
                    return param0;
                }
                else if(!(v0 & 0xff0000)) {
                    *(short*)ptr0 = (unsigned short)v0;
                    *(ptr0 + 2) = 0;
                    return param0;
                }
                else if(!(v0 & 0xff000000)) {
                    *(int*)ptr0 = v0;
                    return param0;
                }
            }
            *(int*)ptr0 = v0;
            ptr0 += 4;
        }
    }
    *ptr0 = (unsigned char)v0;
    return param0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402630(int param0) {
    return sub_402642(param0, (int)gvar_4056FC);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402642(int param0, int param1) {
    int result;
    int v0;
    if((unsigned int)param0 <= 0xffffffe0) {
        do {
            result = sub_40266E(param0);
            if(result || param1 == 0) {
                return result;
            }
            v0 = sub_4037D6(param0);
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

int* sub_4026B0(char* param0) {
    char v0;
    char* ptr0 = param0;
    if((int*)((int)ptr0 & 0x3)) {
        do {
            v0 = *ptr0;
            ++ptr0;
        }
        while(v0 && (int*)((int)ptr0 & 0x3));
    }
    else {
        do {
            int v1 = *(int*)ptr0;
            ptr0 += 4;
            if((((v1 + 0x7efefeff) ^ ~v1) & 0x81010100)) {
                int v2 = *(int*)(ptr0 - 4);
                if(!(unsigned char)v2) {
                    return (int*)((int)(int*)(ptr0 - 4) - (int)param0);
                }
                else if(!(unsigned char)(v2 >>> 8)) {
                    return (int*)((int)(int*)(ptr0 - 3) - (int)param0);
                }
                else if(!(v2 & 0xff0000)) {
                    return (int*)((int)(int*)(ptr0 - 2) - (int)param0);
                }
                else if(!(v2 & 0xff000000)) {
                    break;
                }
            }
        }
        while(1);
    }
    return (int*)((int)(int*)(ptr0 - 1) - (int)param0);
}

int* sub_402730(int* param0, int* param1, int* param2) {
    int* ptr0;
    int* ptr1;
    int* ptr2 = param1;
    int* ptr3 = param0;
    if(ptr2 >= ptr3 || (int*)((int)ptr2 + (int)param2) <= ptr3) {
        if(!(int*)((int)ptr3 & 0x3)) {
            ptr1 = (int*)((int)param2 >>> 2);
            ptr0 = (int*)((int)param2 & 0x3);
            if((unsigned int)ptr1 < 8) {
            loc_40278C:
                switch(ptr1) {
                    case 0: {
                    loc_40286F:
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
                    loc_402860:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 1) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 1);
                        ptr2 = (int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2);
                        ptr3 = (int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3);
                        break;
                    }
                    case 2: {
                    loc_402858:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_402860;
                    }
                    case 3: {
                    loc_402850:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_402860;
                    }
                    case 4: {
                    loc_402848:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_402860;
                    }
                    case 5: {
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_402860;
                    }
                    case 6: {
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        goto loc_402858;
                    }
                    case 7: {
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 7) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 7);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        goto loc_402850;
                    }
                    default: {
                        throw 0;
                    }
                }
                goto loc_40286F;
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
                    loc_4027CC:
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
                        loc_4027F0:
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
                                goto loc_402848;
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
            goto loc_40278C;
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
        loc_4028F2:
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
            goto loc_40290B;
        }
        else {
        loc_402914:
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
        loc_40290B:
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
                    loc_40294B:
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
                            goto loc_402973;
                        }
                    }
                    goto loc_4028F2;
                }
                case 2: {
                    goto loc_40294B;
                }
                case 3: {
                loc_402973:
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
                    goto loc_4028F2;
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

unsigned int sub_402AA3(int param0) {
    unsigned int result = gvar_405718;
    unsigned int v0 = (unsigned int)(gvar_405714 * 20 + result);
    while(result < v0) {
        if((unsigned int)(param0 - *(int*)(result + 12)) < 0x100000) {
            return result;
        }
        result += 20;
    }
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
    int v3 = *(int*)(ptr2 - 1);
    int* ptr5 = ptr4;
    unsigned int* ptr6 = (unsigned int*)((int*)((int)(int*)((int)ptr3 * 516) + v2) + 81);
    unsigned int* ptr7 = *(unsigned int*)((int)ptr2 + (int)ptr4);
    unsigned int* ptr8 = *(unsigned int*)((int)ptr2 + (int)ptr4);
    if(!((unsigned char)ptr7 & 0x1)) {
        ptr1 = (int*)0x3F;
        param1 = (int*)((char*)((int)ptr7 >> 4) - 1);
        if((int*)((char*)((int)ptr7 >> 4) - 1) > (int*)0x3F) {
            param1 = (int*)0x3F;
        }
        if(*((int*)((int)ptr2 + (int)ptr4) + 1) == *((int*)((int)ptr2 + (int)ptr4) + 2)) {
            int* ptr9 = param1;
            if((unsigned int)ptr9 < 32) {
                char* ptr10 = (char*)((int*)(v2 + (int)ptr9) + 1);
                *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 17) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr9 & 0x1f)) & *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 17);
                *ptr10 = *ptr10 + 0xFF;
                if(!*ptr10) {
                    *param0 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr9 & 0x1f)) & *param0;
                }
            }
            else {
                char* ptr11 = (char*)((int*)(v2 + (int)param1) + 1);
                *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 49) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr9 - 8) & 0x1f)) & *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 49);
                *ptr11 = *ptr11 + 0xFF;
                if(!*ptr11) {
                    *(int*)(param0 + 1) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr9 - 8) & 0x1f)) & *(int*)(param0 + 1);
                }
            }
        }
        *(int*)(*((int*)((int)ptr2 + (int)ptr4) + 2) + 4) = *((int*)((int)ptr2 + (int)ptr4) + 1);
        int v4 = *((int*)((int)ptr2 + (int)ptr4) + 1);
        int v5 = *((int*)((int)ptr2 + (int)ptr4) + 2);
        ptr4 = (int*)((int)ptr4 + (int)ptr8);
        *(int*)(v4 + 8) = v5;
        ptr5 = ptr4;
    }
    int* ptr12 = (int*)((char*)((int)ptr4 >> 4) - 1);
    if((unsigned int)ptr12 > 63) {
        ptr1 = (int*)0x3F;
        ptr12 = (int*)0x3F;
    }
    int* ptr13 = (int*)(v3 & 0x1);
    if(!(int*)(v3 & 0x1)) {
        unsigned int* ptr14 = (unsigned int*)((int)ptr2 - v3);
        ptr1 = (int*)0x3F;
        ptr8 = ptr14;
        ptr0 = (int*)((v3 >> 4) - 1);
        param1 = (int*)((v3 >> 4) - 1);
        if(ptr0 > (int*)0x3F) {
            param1 = (int*)0x3F;
            ptr0 = (int*)0x3F;
        }
        ptr4 = (int*)((int)ptr4 + v3);
        ptr5 = ptr4;
        ptr12 = (int*)((char*)((int)ptr4 >> 4) - 1);
        if(ptr12 > (int*)0x3F) {
            ptr12 = (int*)0x3F;
        }
        if(ptr0 != ptr12) {
            if(*(int*)(ptr8 + 1) == *(int*)(ptr8 + 2)) {
                int* ptr15 = param1;
                if((unsigned int)ptr15 < 32) {
                    char* ptr16 = (char*)((int*)(v2 + (int)ptr15) + 1);
                    *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 17) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr15 & 0x1f)) & *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 17);
                    *ptr16 = *ptr16 + 0xFF;
                    if(!*ptr16) {
                        *param0 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr15 & 0x1f)) & *param0;
                    }
                }
                else {
                    char* ptr17 = (char*)((int*)(v2 + (int)param1) + 1);
                    *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 49) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr15 - 8) & 0x1f)) & *((int*)((int)(int*)((int)ptr3 * 4) + v2) + 49);
                    *ptr17 = *ptr17 + 0xFF;
                    if(!*ptr17) {
                        *(int*)(param0 + 1) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr15 - 8) & 0x1f)) & *(int*)(param0 + 1);
                    }
                }
            }
            *(int*)(*(int*)(ptr8 + 2) + 4) = *(int*)(ptr8 + 1);
            *(int*)(*(int*)(ptr8 + 1) + 8) = *(int*)(ptr8 + 2);
        }
        ptr2 = ptr8;
    }
    if(ptr13 || ptr12 != param1) {
        *(int*)(ptr2 + 1) = *((int*)((int)(int*)((int)ptr12 * 8) + (int)ptr6) + 1);
        int* ptr18 = (int*)((int)(int*)((int)ptr12 * 8) + (int)ptr6);
        *(ptr2 + 2) = (int*)((int)(int*)((int)ptr12 * 8) + (int)ptr6);
        *(unsigned int*)(ptr18 + 1) = ptr2;
        *(unsigned int*)(*(int*)(ptr2 + 1) + 8) = ptr2;
        ptr0 = *(ptr2 + 1);
        if(*(int*)(ptr2 + 2) == ptr0) {
            ptr0 = (unsigned int)*(char*)((int*)(v2 + (int)ptr12) + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
            (int*)((param1 >>> 24) & 0xFF) = (unsigned char)ptr0;
            *(char*)((int*)(v2 + (int)ptr12) + 1) = (unsigned char)ptr0 + 1;
            if((unsigned int)ptr12 < 32) {
                if(!(unsigned char)(int*)((int)param1 >>> 24)) {
                    *param0 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr12 & 0x1f)) | *param0);
                }
                unsigned int* ptr19 = (unsigned int*)((int*)((int)(int*)((int)ptr3 * 4) + v2) + 17);
                *ptr19 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr12 & 0x1f)) | *ptr19);
            }
            else {
                if(!(unsigned char)(int*)((int)param1 >>> 24)) {
                    *(param0 + 1) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr12 - 8) & 0x1f)) | *(int*)(param0 + 1));
                }
                unsigned int* ptr20 = (unsigned int*)((int*)((int)(int*)((int)ptr3 * 4) + v2) + 49);
                *ptr20 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr12 - 8) & 0x1f)) | *ptr20);
            }
            ptr4 = ptr5;
        }
    }
    unsigned int* result = ptr6;
    *ptr2 = ptr4;
    *(unsigned int*)((int*)((int)ptr2 + (int)ptr4) - 1) = ptr4;
    *result = *result - 1;
    if(!*result) {
        unsigned int v6 = gvar_405710;
        if(v6) {
            VirtualFree((LPVOID)(gvar_405708 * 0x8000 + *(int*)(v6 + 12)), 0x8000, 0x4000);
            unsigned int v7 = gvar_405710;
            *(int*)(v7 + 8) = (0x80000000 >>> (gvar_405708 & 0x1f)) | *(int*)(v7 + 8);
            *(int*)(gvar_405708 * 4 + *(int*)(gvar_405710 + 16) + 196) = 0;
            int v8 = *(int*)(gvar_405710 + 16);
            *(char*)(v8 + 67) = *(char*)(v8 + 67) + 0xFF;
            unsigned int v9 = gvar_405710;
            if(!*(char*)(*(int*)(v9 + 16) + 67)) {
                *(int*)(v9 + 4) = *(int*)(v9 + 4) & 0xfffffffe;
                v9 = gvar_405710;
            }
            if(*(int*)(v9 + 8) != -1) {
                result = param0;
                gvar_405710 = result;
                gvar_405708 = ptr3;
                return result;
            }
            VirtualFree(*(LPVOID*)(v9 + 12), 0, 0x8000);
            HeapFree(gvar_405948, 0, *(LPVOID*)(gvar_405710 + 16));
            int* ptr21 = gvar_405710;
            sub_403800(ptr21, ptr21 + 5, (int*)((int)(int*)(gvar_405714 * 5 * 4 - (int)ptr21) + gvar_405718) - 5);
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
    int v1 = param0;
    int v2 = v0;
    int v3 = *(int*)(v1 + 16);
    int v4 = *(int*)(v1 + 8);
    int i;
    for(i = 0; v4 >= 0; ++i) {
        v4 *= 2;
    }
    int counter = 63;
    int v5 = i * 516 + v3 + 0x144;
    int v6 = i * 516 + v3 + 0x144;
    do {
        *(int*)(v5 + 8) = v5;
        *(int*)(v5 + 4) = v5;
        v5 += 8;
        --counter;
    }
    while(counter);
    int v7 = 4;
    LPVOID lpAddress = (LPVOID)(i * 0x8000 + *(int*)(v1 + 12));
    LPVOID v8 = VirtualAlloc(lpAddress, 0x8000, 0x1000, 4);
    if(!v8) {
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
        v7 = 1;
        *(unsigned int*)(v6 + 508) = (int*)((int)lpAddress + 12);
        *(int*)((int)lpAddress + 20) = v6 + 504;
        *(unsigned int*)(v6 + 0x200) = (int*)((int)lpAddress + 0x700c);
        *(int*)((int)lpAddress + 0x7010) = v6 + 504;
        *(int*)(i * 4 + v3 + 68) = 0;
        *(int*)(i * 4 + v3 + 196) = 1;
        int v9 = (unsigned int)*(char*)(v3 + 67) | ((unsigned int)(((v6 + 504) >>> 8) & 0xffffff) << 8);
        *(char*)(v3 + 67) = (unsigned char)v9 + 1;
        if(!(unsigned char)v9) {
            *(int*)(param0 + 4) = *(int*)(param0 + 4) | 0x1;
        }
        *(int*)(param0 + 8) = ~(0x80000000 >>> (i & 0x1f)) & *(int*)(param0 + 8);
        result = i;
    }
    return result;
}

int sub_4032AE(int param0, int param1, int param2) {
    int* ptr0;
    int v0;
    int v1 = 0;
    if(gvar_4056C8 == 0) {
        HMODULE hModule = LoadLibraryA("user32.dll");
        if(hModule != 0) {
            FARPROC v2 = GetProcAddress(hModule, "MessageBoxA");
            gvar_4056C8 = v2;
            if(v2) {
                FARPROC v3 = GetProcAddress(hModule, "GetActiveWindow");
                HMODULE hModule1 = hModule;
                gvar_4056CC = v3;
                FARPROC v4 = GetProcAddress(hModule1, "GetLastActivePopup");
                gvar_4056D0 = v4;
                goto loc_4032FD;
            }
        }
    }
    else {
    loc_4032FD:
        unsigned int v5 = gvar_4056CC;
        if(v5) {
            v1 = v5();
            if(v1) {
                unsigned int v6 = gvar_4056D0;
                if(v6) {
                    v1 = v6(v1);
                }
            }
        }
        ptr0 = &v0;
        gvar_4056C8(v1, param0, param1, param2);
    }
    jump *(ptr0 + 3);
}

char* sub_403340(char* param0, char* param1, int param2) {
    int v0;
    char* ptr0;
    int v1;
    int counter = param2;
    if(counter) {
        int v2 = v1;
        int v3 = counter;
        char* ptr1 = param1;
        ptr0 = param0;
        if(!(int*)((int)ptr1 & 0x3)) {
            counter >>>= 2;
            if(counter) {
                goto loc_4033D6;
            }
            else {
            loc_403385:
                do {
                    v0 = (unsigned int)*ptr1 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                    ++ptr1;
                    *ptr0 = (unsigned char)v0;
                    ++ptr0;
                    if(!(unsigned char)v0) {
                    loc_4033BE:
                        --v3;
                        if(!v3) {
                            return param0;
                        }
                        *ptr0 = (unsigned char)v0;
                        ++ptr0;
                        goto loc_4033BE;
                    }
                    else {
                        --v3;
                    }
                }
                while(v3);
                return param0;
            }
        }
        else {
            do {
                v0 = (unsigned int)*ptr1 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                ++ptr1;
                *ptr0 = (unsigned char)v0;
                ++ptr0;
                --counter;
                if(!counter) {
                    return param0;
                }
                else if(!(unsigned char)v0) {
                    if((int*)((int)ptr0 & 0x3)) {
                        do {
                            *ptr0 = (unsigned char)v0;
                            ++ptr0;
                            --counter;
                            if(!counter) {
                                return param0;
                            }
                        }
                        while((int*)((int)ptr0 & 0x3));
                    }
                    goto loc_4033B4;
                }
            }
            while((int*)((int)ptr1 & 0x3));
            v3 = counter;
            counter >>>= 2;
            if(!counter) {
                goto loc_403380;
            }
            else {
            loc_4033D6:
                do {
                    int v4 = *(int*)ptr1;
                    v0 = (v4 + 0x7efefeff) ^ ~v4;
                    int v5 = *(int*)ptr1;
                    ptr1 += 4;
                    if((v0 & 0x81010100)) {
                        if(!(unsigned char)v5) {
                            *(int*)ptr0 = 0;
                        }
                        else if(!(unsigned char)(v5 >>> 8)) {
                            *(int*)ptr0 = (unsigned int)(unsigned char)v5;
                        }
                        else if(!(v5 & 0xff0000)) {
                            *(int*)ptr0 = (unsigned int)(unsigned short)v5;
                        }
                        else if(v5 & 0xff000000) {
                            goto loc_4033C9;
                        }
                        else {
                            *(int*)ptr0 = v5;
                        }
                        ptr0 += 4;
                        v0 = 0;
                        --counter;
                        if(!counter) {
                            goto loc_403431;
                        }
                        else {
                            goto loc_403427;
                        }
                    }
                    else {
                    loc_4033C9:
                        *(int*)ptr0 = v5;
                        ptr0 += 4;
                        --counter;
                    }
                }
                while(!counter);
            loc_403380:
                v3 &= 3;
            }
            if(!v3) {
                return param0;
            }
            goto loc_403385;
        loc_4033B4:
            v3 = counter;
            counter >>>= 2;
            if(!counter) {
                *ptr0 = (unsigned char)v0;
                ++ptr0;
                goto loc_4033BE;
            }
            else {
            loc_403427:
                v0 = 0;
            }
            do {
                *(int*)ptr0 = 0;
                ptr0 += 4;
                --counter;
            }
            while(counter);
        loc_403431:
            v3 &= 3;
            if(!v3) {
                return param0;
            }
        }
    }
    else {
        return param0;
    }
    *ptr0 = (unsigned char)v0;
    ++ptr0;
    goto loc_4033BE;
}

int sub_40343E(LCID Locale, DWORD dwMapFlags, char* param2, int* param3, LPSTR lpDestStr, int cchDest, UINT CodePage, unsigned int param7) {
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
                int cchWideChar = MultiByteToWideChar(CodePage, (DWORD)(((param7 > 0 ? -1: 0) & 0x8) + 1), (LPCCH)param2, (int)param3, NULL, 0);
                int cchSrc = cchWideChar;
                if(cchWideChar != 0) {
                    sub_403B40(v4);
                    v10 = &v3;
                    LPWSTR lpWideCharStr = &v3;
                    if(lpWideCharStr != 0) {
                        v0 = MultiByteToWideChar(CodePage, 1, (LPCCH)param2, (int)param3, lpWideCharStr, cchWideChar);
                        if(v0) {
                            int cchDest1 = LCMapStringW(Locale, dwMapFlags, lpWideCharStr, cchWideChar, NULL, 0);
                            if(cchDest1 != 0) {
                                if(!((unsigned char)(dwMapFlags >>> 8) & 0x4)) {
                                    sub_403B40(v4);
                                    v10 = &v3;
                                    LPWSTR v12 = &v3;
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

int sub_40354E() {
    return 1;
}

int sub_403552(int param0, int param1) {
    LPSTR lpMultiByteStr;
    int cbMultiByte;
    int v0;
    int* ptr0;
    int v1;
    *(ptr0 - 9) = 0;
    *(ptr0 - 1) = -1;
    int cchWideChar = *(ptr0 - 7);
    if(*(ptr0 - 9) != 0) {
        int v2 = MultiByteToWideChar(*(UINT*)(ptr0 + 8), 1, *(LPCCH*)(ptr0 + 4), *(ptr0 + 5), *(LPWSTR*)(ptr0 - 9), cchWideChar);
        if(v2) {
            int cchDest = LCMapStringW(*(LCID*)(ptr0 + 2), *(DWORD*)(ptr0 + 3), *(LPCWSTR*)(ptr0 - 9), cchWideChar, NULL, 0);
            *(ptr0 - 10) = cchDest;
            if(cchDest != 0) {
                if(!(*(char*)((char*)ptr0 + 13) & 0x4)) {
                    *(ptr0 - 1) = 1;  // __try{ (see __except:403606h)
                    sub_403B40(v1);
                    *(LPWSTR*)(ptr0 - 6) = &v0;
                    *(LPWSTR*)(ptr0 - 8) = &v0;
                    *(ptr0 - 1) = -1;  // } (starts at 4035E0h)
                    if(&v0 != 0) {
                        v2 = LCMapStringW(*(LCID*)(ptr0 + 2), *(DWORD*)(ptr0 + 3), *(LPCWSTR*)(ptr0 - 9), *(ptr0 - 7), &v0, cchDest);
                        if(v2) {
                            char v3 = *(ptr0 + 7) == 0;
                            LPBOOL v4 = NULL;
                            LPCCH v5 = NULL;
                            if(v3) {
                                cbMultiByte = 0;
                                lpMultiByteStr = NULL;
                            }
                            else {
                                cbMultiByte = *(ptr0 + 7);
                                lpMultiByteStr = *(LPSTR*)(ptr0 + 6);
                            }
                            cchDest = WideCharToMultiByte(*(UINT*)(ptr0 + 8), 544, &v0, cchDest, lpMultiByteStr, cbMultiByte, NULL, NULL);
                        }
                    }
                }
                else if(*(ptr0 + 7) != 0 && *(ptr0 + 7) >= cchDest) {
                    v2 = /*BAD_CALL!*/ LCMapStringW(*(LCID*)(ptr0 + 2), *(DWORD*)(ptr0 + 3), *(LPCWSTR*)(ptr0 - 9), cchWideChar, *(LPWSTR*)(ptr0 + 6), *(ptr0 + 7));
                }
            }
        }
    }
    *(int*)__FS_BASE = *(ptr0 - 4);
    jump param0;
}

int sub_403602() {
    return 1;
}

int sub_403606(int param0, int param1) {
    int* ptr0;
    *(ptr0 - 1) = -1;
    *(int*)__FS_BASE = *(ptr0 - 4);
    jump param0;
}

int* sub_403662(char* param0, int* param1) {
    char* ptr0 = param0;
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
    if(!*ptr0) {
        return (int*)((int)ptr0 - (int)param0);
    }
    return param1;
}

BOOL sub_40368D(DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType, UINT CodePage, LCID param5, unsigned int param6) {
    BOOL result;
    int v0;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5 = -1;
    int v6 = &gvar_404448;
    int v7 = &sub_401E84;
    int v8 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v8;
    int v9 = v3;
    char* ptr0 = &v0;
    BOOL cchSrc1 = gvar_4056F8;
    if(cchSrc1 == 0) {
        BOOL v10 = GetStringTypeW(1, (LPCWCH)0x40442C, 1, &v1);
        if(v10) {
            cchSrc1 = (BOOL)1;
            gvar_4056F8 = cchSrc1;
            goto loc_4036FF;
        }
        else {
            cchSrc1 = GetStringTypeA(0, 1, (LPCSTR)0x404428, 1, &v1);
        }
        if(!cchSrc1) {
            result = 0;
            *(int*)__FS_BASE = v8;
            return result;
        }
        cchSrc1 = 2;
        gvar_4056F8 = cchSrc1;
        goto loc_4036FF;
    }
    else {
    loc_4036FF:
        if(cchSrc1 == 2) {
            LCID Locale = param5;
            if(Locale == 0) {
                Locale = gvar_4056DC;
            }
            result = GetStringTypeA(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
        }
        else {
            if(cchSrc1 == 1) {
                if(CodePage == 0) {
                    CodePage = gvar_4056EC;
                }
                cchSrc1 = MultiByteToWideChar(CodePage, (DWORD)(((param6 > 0 ? -1: 0) & 0x8) + 1), lpSrcStr, cchSrc, NULL, 0);
                int cchWideChar = cchSrc1;
                if(cchSrc1 != 0) {
                    v5 = 0;  // __try{ (see __except:40378Ah)
                    sub_403B40(v4);
                    ptr0 = &v0;
                    char* ptr1 = &v0;
                    sub_403B70(&v0, 0, (int*)(cchSrc1 * 2));
                    v5 = -1;
                    if(&v2 != 56) {
                        cchSrc1 = MultiByteToWideChar(CodePage, 1, lpSrcStr, cchSrc, (LPWSTR)&v0, cchWideChar);
                        if(cchSrc1 != 0) {
                            result = GetStringTypeW(dwInfoType, (LPCWCH)&v0, cchSrc1, lpCharType);
                            *(int*)__FS_BASE = v8;
                            return result;
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

int sub_403786() {
    return 1;
}

int sub_40378A(int param0, int param1) {
    int* ptr0;
    *(ptr0 - 1) = -1;  // } (starts at 40375Fh)
    *(int*)__FS_BASE = *(ptr0 - 4);
    jump param0;
}

int sub_4037D6(int param0) {
    unsigned int v0 = gvar_405700;
    if(v0) {
        v0 = (unsigned int)v0(param0);
        if(v0) {
            return 1;
        }
    }
    return 0;
}

int* sub_403800(int* param0, int* param1, int* param2) {
    int* ptr0;
    int* ptr1;
    int* ptr2 = param1;
    int* ptr3 = param0;
    if(ptr2 >= ptr3 || (int*)((int)ptr2 + (int)param2) <= ptr3) {
        if(!(int*)((int)ptr3 & 0x3)) {
            ptr1 = (int*)((int)param2 >>> 2);
            ptr0 = (int*)((int)param2 & 0x3);
            if((unsigned int)ptr1 < 8) {
            loc_40385C:
                switch(ptr1) {
                    case 0: {
                    loc_40393F:
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
                    loc_403930:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 1) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 1);
                        ptr2 = (int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2);
                        ptr3 = (int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3);
                        break;
                    }
                    case 2: {
                    loc_403928:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_403930;
                    }
                    case 3: {
                    loc_403920:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_403930;
                    }
                    case 4: {
                    loc_403918:
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_403930;
                    }
                    case 5: {
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 2) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 2);
                        goto loc_403930;
                    }
                    case 6: {
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 3) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 3);
                        goto loc_403928;
                    }
                    case 7: {
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 7) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 7);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 6) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 5) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr3) - 4) = *((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 4);
                        goto loc_403920;
                    }
                    default: {
                        throw 0;
                    }
                }
                goto loc_40393F;
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
                    loc_40389C:
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
                        loc_4038C0:
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
                                goto loc_403918;
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
            goto loc_40385C;
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
        loc_4039C2:
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
            goto loc_4039DB;
        }
        else {
        loc_4039E4:
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
        loc_4039DB:
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
                    loc_403A1B:
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
                            goto loc_403A43;
                        }
                    }
                    goto loc_4039C2;
                }
                case 2: {
                    goto loc_403A1B;
                }
                case 3: {
                loc_403A43:
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
                    goto loc_4039C2;
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

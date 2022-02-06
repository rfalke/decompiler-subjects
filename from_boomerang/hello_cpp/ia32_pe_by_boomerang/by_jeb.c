
int sub_41113B(int param0, int param1, int param2, int param3) {
    return param0 * param2;
}

int sub_4111BD(int param0, unsigned int param1) {
    int result;
    int v0 = param0;
    int v1 = -2;
    int v2 = &gvar_4149BC;
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
                sub_414A72(v6, 0x101);
                *(int*)(v5 * 12 + v4 + 8)();
            }
        }
    }
    *(int*)__FS_BASE = v3;
    return result;
}

int sub_4113A7(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue) {
    int result;
    RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_411424(int param0, int param1) {
    int v0;
    char v1;
    int result;
    int v2;
    if(v1) {
        return result;
    }
    int result1 = result;
    int v3 = param1;
    int v4 = v2;
    sub_4128C0(v0, 0);
    return result1;
}

unsigned int sub_4115B4() {
    return gvar_42960C;
}

int sub_411B80() {
    char v0;
    int* ptr0 = &v0;
    int v1 = 48;
    do {
        *ptr0 = 0xcccccccc;
        ++ptr0;
        --v1;
    }
    while(v1 == 0);
    return 5;
}

int sub_411BC0(HINSTANCE hInstance, int param1, int param2, int nCmdShow) {
    char v0;
    HWND hWnd;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = v3;
    int* ptr0 = &v0;
    int v6 = 60;
    do {
        *ptr0 = 0xcccccccc;
        ++ptr0;
        --v6;
    }
    while(v6 == 0);
    sub_411B80();
    LoadStringA(hInstance, 103, (LPSTR)0x429568, 100);
    sub_411424(v2, v4);
    LoadStringA(hInstance, 109, (LPSTR)0x429500, 100);
    sub_411424(v2, v4);
    sub_411D60(hInstance);
    int v7 = sub_411EA0(hInstance, nCmdShow);
    if(v7) {
        LoadAcceleratorsA(hInstance, (LPCSTR)0x6D);
        int v8 = sub_411424(v2, v4);
        while(1) {
            GetMessageA(&hWnd, NULL, 0, 0);
            int v9 = sub_411424(v2, v4);
            if(!v9) {
                break;
            }
            else {
                TranslateAcceleratorA(hWnd, (HACCEL)v8, &hWnd);
                int v10 = sub_411424(v2, v4);
                if(!v10) {
                    TranslateMessage((MSG*)&hWnd);
                    sub_411424(v2, v4);
                    DispatchMessageA((MSG*)&hWnd);
                    sub_411424(v2, v4);
                }
            }
        }
    }
    sub_412350(&v1, (unsigned int*)&gvar_411CF4);
    return sub_411424(v2, v4);
}

int sub_411D60(HINSTANCE hInstance) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = v3;
    int* ptr0 = &v0;
    int v6 = 62;
    do {
        *ptr0 = 0xcccccccc;
        ++ptr0;
        --v6;
    }
    while(v6 == 0);
    int v7 = 48;
    int v8 = 3;
    int v9 = &gvar_411447;
    int v10 = 0;
    int v11 = 0;
    HINSTANCE hInstance1 = hInstance;
    LoadIconA(hInstance, (LPCSTR)0x6B);
    int v12 = sub_411424(v2, v4);
    LoadCursorA(NULL, (LPCSTR)0x7F00);
    int v13 = sub_411424(v2, v4);
    int v14 = 6;
    int v15 = 109;
    int v16 = 0x429500;
    LoadIconA(hInstance1, (LPCSTR)0x6C);
    int v17 = sub_411424(v2, v4);
    RegisterClassExA(&v7);
    int v18 = sub_411424(v2, v4);
    sub_412350(&v1, (unsigned int*)&gvar_411E3D);
    return sub_411424(v2, v4);
}

int sub_411EA0(HINSTANCE hInstance, int nCmdShow) {
    char v0;
    int v1;
    int v2;
    int* ptr0 = &v0;
    int v3 = 51;
    do {
        *ptr0 = 0xcccccccc;
        ++ptr0;
        --v3;
    }
    while(v3 == 0);
    gvar_4295CC = hInstance;
    CreateWindowExA(0, (LPCSTR)0x429500, (LPCSTR)0x429568, 0xcf0000, 0x80000000, 0, 0x80000000, 0, NULL, NULL, hInstance, NULL);
    int v4 = sub_411424(v1, v2);
    if(v4) {
        ShowWindow((HWND)v4, nCmdShow);
        sub_411424(v1, v2);
        UpdateWindow((HWND)v4);
        sub_411424(v1, v2);
    }
    return sub_411424(v1, v2);
}

int sub_411F80(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    int v0;
    UINT v1;
    char v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7 = v5;
    int* ptr0 = &v1;
    int v8 = 76;
    do {
        *ptr0 = 0xcccccccc;
        ++ptr0;
        --v8;
    }
    while(v8 == 0);
    v1 = Msg;
    switch(Msg) {
        case 2: {
            PostQuitMessage(0);
            sub_411424(v4, v6);
            break;
        }
        case 15: {
            BeginPaint(hWnd, &v2);
            int v9 = sub_411424(v4, v6);
            EndPaint(hWnd, (PAINTSTRUCT*)&v2);
            sub_411424(v4, v6);
            break;
        }
        case 273: {
            UINT v10 = (UINT)(unsigned short)wParam;
            int v11 = wParam >>> 16;
            v1 = (UINT)(unsigned short)wParam;
            if((UINT)(unsigned short)wParam == 104) {
                DialogBoxParamA(gvar_4295CC, (LPCSTR)0x67, hWnd, (DLGPROC)&gvar_411339, 0);
                sub_411424(v4, v6);
            }
            else if((UINT)(unsigned short)wParam != 105) {
                DefWindowProcA(hWnd, 0x111, wParam, lParam);
                v0 = sub_411424(v4, v6);
            }
            else {
                DestroyWindow(hWnd);
                sub_411424(v4, v6);
            }
            break;
        }
        default: {
            DefWindowProcA(hWnd, Msg, wParam, lParam);
            v0 = sub_411424(v4, v6);
            break;
        }
    }
    sub_412350(&v3, (unsigned int*)&gvar_4120F6);
    return sub_411424(v4, v6);
}

int sub_412170(int param0, int param1, HWND hDlg, unsigned int param3, int param4, int param5) {
    unsigned int v0;
    int v1;
    int v2;
    int v3 = v2;
    int* ptr0 = &v0;
    int v4 = 49;
    do {
        *ptr0 = 0xcccccccc;
        ++ptr0;
        --v4;
    }
    while(v4 == 0);
    v0 = param3;
    if(param3 == 0x111) {
        if((unsigned short)param4 != 1) {
            v4 = (int)(unsigned short)param4;
            if(v4 == 2) {
                EndDialog(hDlg, (INT_PTR)(unsigned short)param4);
                sub_411424(v1, param1);
                return sub_411424(v4, param1);
            }
        }
        else {
            EndDialog(hDlg, (INT_PTR)(unsigned short)param4);
            sub_411424(v1, param1);
        }
    }
    return sub_411424(v4, param1);
}

int sub_412306(int param0, int param1, int param2) {
    char v0;
    char v1;
    int v2 = 0;
    int v3 = 0;
    int v4 = sub_4128B0();
    int* ptr0 = &v3;
    char v5 = &param2 ? 0: 1;
    char v6 = (int)&param2 < 0;
    char v7 = __parity__((unsigned char)&v0 + 12);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0x14) ^ (int)&param2) >>> 4) & 0x1);
    char v9 = (unsigned int)&v3 >= 0xffffffec;
    char v10 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&param2) & (int*)~(int)(int*)((int)&v3 ^ 0x14)) < 0;
    int v11 = param2;
    int* ptr1 = &v1;
    jump v11;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_412350(unsigned int param0, unsigned int* param1) {
    int v0;
    int v1;
    int v2 = v1;
    unsigned int result = *param1;
    int v3 = 0;
    unsigned int v4 = param0;
    v7 = 0;
    if((int)result > 0) {
        do {
            int v5 = *(int*)(param1 + 1);
            int v6 = *(int*)(v5 + v3);
            if(*(unsigned int*)(v6 + v4 - 4) != 0xcccccccc || *(int*)((int)(unsigned int*)(*(int*)(v5 + v3 + 4) + v6) + v4) != 0xcccccccc) {
                sub_412E90(v0, *(int*)(*(int*)(param1 + 1) + v3 + 8));
            }
            param0 = *param1;
            result = v7 + 1;
            v3 += 12;
            v7 = result;
        }
        while((int)result < (int)param0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4123D0(int param0) {
    unsigned int* ptr0;
    int v0;
    char* ptr1;
    char v1;
    short v2;
    int v3;
    int v4 = -1;
    int v5 = &gvar_425028;
    int v6 = &gvar_4111A4;
    int v7 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v7;
    int v8 = v3;
    LPOSVERSIONINFOA v9 = &v0;
    sub_414C20(param0);
    LPOSVERSIONINFOA v10 = &v0;
    v9 = &v0;
    LPOSVERSIONINFOA lpVersionInformation = &v0;
    lpVersionInformation->dwOSVersionInfoSize = 148;
    GetVersionExA(lpVersionInformation);
    gvar_429638 = lpVersionInformation->dwPlatformId;
    gvar_429644 = lpVersionInformation->dwMajorVersion;
    gvar_429648 = lpVersionInformation->dwMinorVersion;
    gvar_42963C = (unsigned int)(lpVersionInformation->dwBuildNumber & 0x7fff);
    if(gvar_429638 != 2) {
        gvar_42963C |= 0x8000;
    }
    gvar_429640 = (unsigned int)(gvar_429644 * 0x100 + gvar_429648);
    HMODULE v11 = sub_4126E0();
    int v12 = sub_414820(0);
    if(!v12) {
        /*NO_RETURN*/ sub_4126A0(28);
    }
    sub_4146A0();
    v4 = 0;  // __try{ (see __except:41259Fh)
    int v13 = sub_414260();
    if(v13 < 0) {
        sub_412660(27);
    }
    LPSTR v14 = GetCommandLineA();
    gvar_42B100 = v14;
    unsigned int v15 = (unsigned int)sub_413FC0();
    gvar_4295FC = v15;
    int v16 = sub_413A60();
    if(v16 < 0) {
        sub_412660(8);
    }
    int v17 = sub_413880();
    if(v17 < 0) {
        sub_412660(9);
    }
    unsigned int v18 = sub_4131B0(1);
    if(v18) {
        sub_412660((int)v18);
    }
    int v19 = 0;
    GetStartupInfoA(&v1);
    char* ptr2 = sub_413780();
    int v20 = v19 & 0x1 ? (unsigned int)v2: 10;
    HMODULE v21 = GetModuleHandleA(NULL);
    int result = sub_411BC0((int)v21, 0, (int)ptr2, v19 & 0x1 ? (unsigned int)v2: 10);
    if(!v11) {
        ptr0 = &ptr1;
        sub_413230(result);
    }
    --ptr0;
    *ptr0 = &loc_41257B;
    /*BAD_CALL!*/ sub_413270();
    *(int*)__FS_BASE = v7;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_412660(int param0) {
    if(gvar_429604 == 1) {
        sub_414C70();
    }
    sub_414CD0(param0);
    return gvar_428B40{→sub_413250}(0xff);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4126A0(int param0) {
    char v0 = gvar_429604 == 1;
    if(v0) {
        int v1 = sub_414C70();
    }
    int v2 = param0;
    sub_414CD0(v2);
    /*NO_RETURN*/ sub_4133D0(0xff);
}

HMODULE sub_4126E0() {
    HMODULE result;
    HMODULE v0 = GetModuleHandleA(NULL);
    if(*(short*)&v0->unused != 23117) {
        result = NULL;
    }
    else {
        HMODULE v1 = (HMODULE)(v0[15].unused + (int)v0);
        if(v1->unused != 0x4550) {
            result = NULL;
        }
        else {
            HMODULE v2 = v1 + 6;
            HMODULE v3 = (HMODULE)*(short*)&v1[6].unused;
            if(v3 == 523) {
                HMODULE v4 = v1 + 6;
                result = (unsigned int)v1[33].unused <= 14 ? NULL: v1[62].unused ? (HMODULE)0x1: NULL;
            }
            else if(v3 != 267) {
                result = NULL;
            }
            else if((unsigned int)v1[29].unused <= 14) {
                result = NULL;
            }
            else {
                result = v1[58].unused ? (HMODULE)0x1: NULL;
            }
        }
    }
    return result;
}

unsigned int sub_4127D0(unsigned int param0) {
    return param0 < 0x80000000 && (int)param0 < 4 ? *(unsigned int*)(param0 * 4 + (int)&gvar_428B4C): 0;
}

unsigned int sub_412800(unsigned int param0, unsigned int param1) {
    if(param0 < 0x80000000 && (int)param0 < 4) {
        unsigned int result = *(unsigned int*)(param0 * 4 + (int)&gvar_428B60);
        *(unsigned int*)(param0 * 4 + (int)&gvar_428B60) = param1;
        return result;
    }
    return 0xffffffff;
}

unsigned int sub_412830(unsigned int param0) {
    unsigned int result = gvar_42960C;
    gvar_42960C = param0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_412863(int param0, int param1) {
    int* ptr0;
    int v0;
    int* ptr1;
    unsigned int v1;
    int v2;
    int* ptr2 = &ptr1;
    int* ptr3 = &ptr1;
    char v3 = &ptr0 == 4;
    char v4 = (int)&ptr1 < 0;
    char v5 = __parity__((unsigned char)&ptr0 - 4);
    char v6 = 0;
    char v7 = (unsigned int)&ptr0 < 4;
    char v8 = 0;
    unsigned int result = v1;
    int v9 = param1;
    int v10 = v2;
    unsigned int v11 = (unsigned int)sub_415390(1, "i386\\chkesp.c", 65, &gvar_4250EC, "The value of ESP was not properly saved across a function call.  This is usually a result of calling a function declared with one calling convention with a function pointer declared with a different calling convention. ");
    int* ptr4 = &v0;
    char v12 = v11 == 1;
    char v13 = (int)v11 < 1;
    char v14 = __parity__((unsigned char)v11 - 1);
    char v15 = v11 < 1;
    char v16 = (((v11 - 1) ^ v11) & (v11 ^ 0x1)) < 0;
    char v17 = (((v11 - 1) ^ (v11 ^ 0x1)) >>> 4) & 0x1;
    if(v12) {
        interrupt(3);
    }
    return result;
}

int sub_4128B0() {
    return &→sub_415390;
}

int sub_4128C0(int param0, int param1) {
    int result = param1;
    if(result < 4 && result >= 0) {
        int v0 = *(int*)(result * 4 + (int)&gvar_428B60);
        char* ptr0 = *(char**)(result * 4 + (int)&gvar_428B70);
        if(v0 != -1) {
            result = sub_412930(param0, v0, result, ptr0);
        }
    }
    else {
        result = sub_412930(param0, 1, 4, gvar_428B80);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_412930(int param0, int param1, int param2, char* param3) {
    short v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7 = v3;
    int v8 = param0;
    *(int*)&v0 = v5;
    int v9 = v8;
    unsigned int v10 = sub_4115B4();
    unsigned int v11 = v10;
    int result = sub_412A60(0x1002);
    char* ptr0 = param3;
    if(result) {
        char* ptr1 = ptr0;
        do {
            v6 = (unsigned int)*ptr1 | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
            ++ptr1;
        }
        while((unsigned char)v6);
        sub_414C20(v6);
        int v12 = (unsigned int)*ptr0 | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
        int v13 = 0;
        if((unsigned char)v12) {
            do {
                v12 = (unsigned int)(short)(unsigned char)v12 | ((unsigned int)(unsigned short)(v12 >>> 16) << 16);
                *(short*)(v13 * 2 + &v0) = (unsigned short)v12;
                v12 = (unsigned int)*(char*)((char*)(v13 + (int)ptr0) + 1) | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
                ++v13;
            }
            while((unsigned char)v12);
        }
        v9 = &v0;
        *(short*)(v13 * 2 + &v0) = 0;
        result = sub_412B00(param2, *(int*)(param2 * 4 + (int)&gvar_4251F8), v8, v9);
        if(!result) {
            result = 0;
            goto loc_4129BB;
        }
    }
    else {
        result = 1;
    loc_4129BB:
        if(v10) {
            if((unsigned char)result) {
                int v14 = sub_4130A0();
                if(v14) {
                    DebugBreak();
                    return result;
                }
            }
            sub_414C20(v4);
            sub_415C40(v8 - 5, &v0, 0x200, (int)&v1, (int)&v2);
            result = v11(param1, &v0, v1, v2, "Run-Time Check Failure #%d - %s", param2, ptr0);
            if(result == 1) {
                DebugBreak();
                return result;
            }
        }
        else {
            DebugBreak();
        }
    }
    return result;
}

int sub_412A60(int param0) {
    int v0;
    int v1 = &gvar_425528;
    int v2 = &gvar_4111A4;
    int v3 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v3;
    int* ptr0 = &v0;
    char v4 = 0;
    int v5 = 0x1001;
    int v6 = param0;
    char* ptr1 = &v4;
    int v7 = 0;  // __try{ (see __except:412AB9h)
    RaiseException(1080890248, 0, 6, &v5);
    *(int*)__FS_BASE = v3;
    return (unsigned int)v4;
}

int sub_412B00(int param0, int param1, int param2, int param3) {
    int v0;
    int v1 = &gvar_425538;
    int v2 = &gvar_4111A4;
    int v3 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v3;
    int* ptr0 = &v0;
    char v4 = 0;
    int v5 = 0x1002;
    int v6 = param0;
    int v7 = param1;
    int v8 = param2;
    char* ptr1 = &v4;
    int v9 = param3;
    int v10 = 0;  // __try{ (see __except:412B6Bh)
    RaiseException(1080890248, 0, 6, &v5);
    *(int*)__FS_BASE = v3;
    return (unsigned int)v4;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_412BB0(int param0, int param1, int param2) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char* ptr0;
    char* ptr1;
    char v6;
    int v7 = v3;
    sub_414C20(v1);
    int v8 = param1;
    int result = *(int*)(v8 * 4 + (int)&gvar_428B60);
    char v9 = result == -1;
    char* ptr2 = &v2;
    int v10 = result;
    if(!v9) {
        int v11 = param2 - 5;
        sub_415C40(v11, (int)&v2, 0x200, (int)&v5, (int)&ptr1);
        if(!v5) {
            return sub_4128C0(param0, v8);
        }
        char* ptr3 = *(unsigned int*)(v8 * 4 + (int)&gvar_428B70);
        char* ptr4 = *(unsigned int*)(v8 * 4 + (int)&gvar_428B70);
        do {
            v4 = (unsigned int)*ptr3 | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
            ++ptr3;
        }
        while((unsigned char)v4);
        char* ptr5 = &v2;
        do {
            v4 = (unsigned int)ptr5[0] | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
            ++ptr5;
        }
        while((unsigned char)v4);
        char* ptr6 = ptr1;
        do {
            v4 = (unsigned int)*ptr6 | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
            ++ptr6;
        }
        while((unsigned char)v4);
        sub_414C20(v4);
        char* ptr7 = ptr4;
        char* ptr8 = &v2;
        do {
            v6 = *ptr7;
            ++ptr7;
            ptr8[0] = v6;
            ++ptr8;
        }
        while(v6);
        int* ptr9 = (int*)((char*)&ptr0 + 3);
        do {
            ptr7 = (unsigned int)*(char*)((char*)ptr9 + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr7 >>> 8) & 0xffffff) << 8);
            ptr9 = (int*)((char*)ptr9 + 1);
        }
        while((unsigned char)ptr7);
        char* ptr10 = ptr2;
        int v12 = 10;
        int* ptr11 = "Invalid pointer was assigned at\n\rFile:\t";
        while(v12 != 0) {
            *ptr9 = *ptr11;
            ++ptr11;
            ++ptr9;
            --v12;
        }
        char* ptr12 = ptr10;
        do {
            v12 = (unsigned int)ptr10[0] | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
            ++ptr10;
        }
        while((unsigned char)v12);
        int* ptr13 = (int*)((int)ptr10 - (int)ptr12);
        int* ptr14 = (int*)((char*)&ptr0 + 3);
        do {
            v12 = (unsigned int)*(char*)((char*)ptr14 + 1) | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
            ptr14 = (int*)((char*)ptr14 + 1);
        }
        while((unsigned char)v12);
        for(int* i = (int*)((int)ptr13 >>> 2); i != 0; i = (int*)((char*)i - 1)) {
            *ptr14 = *(int*)&ptr12[0];
            ptr12 += 4;
            ++ptr14;
        }
        for(int* j = (int*)((int)ptr13 & 0x3); j != 0; j = (int*)((char*)j - 1)) {
            *(char*)ptr14 = ptr12[0];
            ++ptr12;
            ptr14 = (int*)((char*)ptr14 + 1);
        }
        int* ptr15 = (int*)((char*)&ptr0 + 3);
        do {
            ptr13 = (unsigned int)*(char*)((char*)ptr15 + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr13 >>> 8) & 0xffffff) << 8);
            ptr15 = (int*)((char*)ptr15 + 1);
        }
        while((unsigned char)ptr13);
        *ptr15 = 1766591754;
        *(ptr15 + 1) = 154821998;
        *(char*)(ptr15 + 2) = 0;
        int v13 = sub_412E30(v5);
        int v14 = v13;
        do {
            v0 = *(char*)v13;
            ++v13;
        }
        while(v0);
        int v15 = v13 - v14;
        int* ptr16 = (int*)((char*)&ptr0 + 3);
        do {
            v0 = *(char*)((char*)ptr16 + 1);
            ptr16 = (int*)((char*)ptr16 + 1);
        }
        while(v0);
        int v16 = v15 >>> 2;
        int v17 = v14;
        while(v16 != 0) {
            *ptr16 = *(int*)v17;
            v17 += 4;
            ++ptr16;
            --v16;
        }
        int k;
        for(k = v15 & 0x3; k != 0; --k) {
            *(char*)ptr16 = *(char*)v17;
            ++v17;
            ptr16 = (int*)((char*)ptr16 + 1);
        }
        int* ptr17 = (int*)((char*)&ptr0 + 3);
        do {
            v15 = (unsigned int)*(char*)((char*)ptr17 + 1) | ((unsigned int)((v15 >>> 8) & 0xffffff) << 8);
            ptr17 = (int*)((char*)ptr17 + 1);
        }
        while((unsigned char)v15);
        *ptr17 = 0x6f4d0d0a;
        *(ptr17 + 1) = 0x656c7564;
        k = 2362;
        *(short*)(ptr17 + 2) = 2362;
        *(char*)((char*)ptr17 + 10) = 0;
        char* ptr18 = ptr1;
        char* ptr19 = ptr1;
        do {
            k = (unsigned int)*ptr18 | ((unsigned int)((k >>> 8) & 0xffffff) << 8);
            ++ptr18;
        }
        while((unsigned char)k);
        int* ptr20 = (int*)((int)ptr18 - (int)ptr19);
        int* ptr21 = (int*)((char*)&ptr0 + 3);
        int v18 = k;
        do {
            v18 = (unsigned int)*(char*)((char*)ptr21 + 1) | ((unsigned int)((v18 >>> 8) & 0xffffff) << 8);
            ptr21 = (int*)((char*)ptr21 + 1);
        }
        while((unsigned char)v18);
        int* ptr22 = (int*)((int)ptr20 >>> 2);
        int* ptr23 = (int*)ptr19;
        int v19 = param0;
        while(ptr22 != 0) {
            *ptr21 = *ptr23;
            ++ptr23;
            ++ptr21;
            ptr22 = (int*)((char*)ptr22 - 1);
        }
        int v20 = param1;
        int* ptr24 = (int*)((int)ptr20 & 0x3);
        ptr0 = &v2;
        while(ptr24 != 0) {
            *(char*)ptr21 = *(char*)ptr23;
            ptr23 = (int*)((char*)ptr23 + 1);
            ptr21 = (int*)((char*)ptr21 + 1);
            ptr24 = (int*)((char*)ptr24 - 1);
        }
        result = sub_412930(v19, v10, v20, ptr0);
    }
    return result;
}

int sub_412E30(int param0) {
    int v0 = param0;
    char v1 = v0 >= 0 ? 0: 1;
    int v2 = 14;
    gvar_429622 = 0;
    do {
        int v3 = v0 % 10;
        v0 /= 10;
        --v2;
        *(char*)(v2 + 4363796) = (unsigned char)v3 + 48;
    }
    while(v0);
    if(v1) {
        --v2;
        *(char*)(v2 + 4363796) = 45;
    }
    return v2 + 4363796;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_412E90(int param0, char* param1) {
    int v0;
    int v1;
    int* ptr0;
    int v2;
    unsigned int result = gvar_428B68;
    int v3 = v2;
    unsigned int v4 = result;
    if(result != -1) {
        char* ptr1 = param1;
        do {
            v0 = (unsigned int)*ptr1 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            ++ptr1;
        }
        while((unsigned char)v0);
        sub_414C20(v0);
        int v5 = 7;
        int* ptr2 = "Stack around the variable \'";
        int* ptr3 = &v1;
        char* ptr4 = param1;
        while(v5 != 0) {
            *ptr3 = *ptr2;
            ++ptr2;
            ++ptr3;
            --v5;
        }
        int* ptr5 = (int*)ptr4;
        do {
            v5 = (unsigned int)*ptr4 | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
            ++ptr4;
        }
        while((unsigned char)v5);
        int* ptr6 = (int*)((int)ptr4 - (int)ptr5);
        int* ptr7 = (int*)((char*)&ptr0 + 3);
        do {
            v5 = (unsigned int)*(char*)((char*)ptr7 + 1) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
            ptr7 = (int*)((char*)ptr7 + 1);
        }
        while((unsigned char)v5);
        for(int* i = (int*)((int)ptr6 >>> 2); i != 0; i = (int*)((char*)i - 1)) {
            *ptr7 = *ptr5;
            ++ptr5;
            ++ptr7;
        }
        for(int* j = (int*)((int)ptr6 & 0x3); j != 0; j = (int*)((char*)j - 1)) {
            *(char*)ptr7 = *(char*)ptr5;
            ptr5 = (int*)((char*)ptr5 + 1);
            ptr7 = (int*)((char*)ptr7 + 1);
        }
        int* ptr8 = (int*)((char*)&ptr0 + 3);
        do {
            ptr6 = (unsigned int)*(char*)((char*)ptr8 + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr6 >>> 8) & 0xffffff) << 8);
            ptr8 = (int*)((char*)ptr8 + 1);
        }
        while((unsigned char)ptr6);
        *ptr8 = 1635196967;
        *(ptr8 + 1) = 1868767347;
        *(ptr8 + 2) = 0x70757272;
        ptr0 = &v1;
        int v6 = param0;
        *(ptr8 + 3) = 778331508;
        int v7 = 2;
        unsigned int v8 = v4;
        int v9 = v6;
        *(char*)(ptr8 + 4) = 0;
        result = (unsigned int)sub_412930(v9, (int)v8, v7, (int)ptr0);
    }
    return result;
}

int sub_412F80(int* param0) {
    int result;
    int v0;
    int v1;
    int v2;
    int v3;
    short v4;
    int v5;
    char v6;
    int v7;
    *(int*)&v4 = v7;
    int v8 = v3;
    int v9 = gvar_428B6C;
    if(v9 != -1) {
        int* ptr0 = param0;
        char* ptr1 = (char*)param0;
        int v10 = v1;
        do {
            v10 = (unsigned int)*ptr1 | ((unsigned int)((v10 >>> 8) & 0xffffff) << 8);
            ++ptr1;
        }
        while((unsigned char)v10);
        sub_414C20(v10);
        if(ptr0) {
            v0 = 0x20656854;
            int v11 = 0x69726176;
            v8 = 0x656c6261;
            v4 = 10016;
            char v12 = 0;
            char* ptr2 = (char*)ptr0;
            do {
                v6 = *ptr2;
                ++ptr2;
            }
            while(v6);
            int* ptr3 = (int*)((int)ptr2 - (int)ptr0);
            int* ptr4 = (int*)((char*)&v5 + 3);
            do {
                v6 = *(char*)((char*)ptr4 + 1);
                ptr4 = (int*)((char*)ptr4 + 1);
            }
            while(v6);
            for(int* i = (int*)((int)ptr3 >>> 2); i != 0; i = (int*)((char*)i - 1)) {
                *ptr4 = *ptr0;
                ++ptr0;
                ++ptr4;
            }
            for(int* j = (int*)((int)ptr3 & 0x3); j != 0; j = (int*)((char*)j - 1)) {
                *(char*)ptr4 = *(char*)ptr0;
                ptr0 = (int*)((char*)ptr0 + 1);
                ptr4 = (int*)((char*)ptr4 + 1);
            }
            int* ptr5 = (int*)((char*)&v5 + 3);
            do {
                ptr3 = (unsigned int)*(char*)((char*)ptr5 + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr3 >>> 8) & 0xffffff) << 8);
                ptr5 = (int*)((char*)ptr5 + 1);
            }
            while((unsigned char)ptr3);
            int v13 = 9;
            int* ptr6 = "\' is being used without being defined.";
            while(v13 != 0) {
                *ptr5 = *ptr6;
                ++ptr6;
                ++ptr5;
                --v13;
            }
            *(short*)ptr5 = *(short*)ptr6;
            *(char*)((char*)ptr5 + 2) = *(char*)((char*)ptr6 + 2);
        }
        else {
            int v14 = 12;
            int* ptr7 = "A variable is being used without being defined.";
            char* ptr8 = &v0;
            while(v14 != 0) {
                *(int*)&ptr8[0] = *ptr7;
                ++ptr7;
                ptr8 += 4;
                --v14;
            }
        }
        result = sub_412930(v2, v9, 3, &v0);
    }
    return result;
}

int sub_4130A0() {
    unsigned int v0 = gvar_429628;
    char v1 = v0 ? 0: 1;
    char v2 = v0 >= 0x80000000;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    jump v1 ? &sub_4130A9: &sub_4130CA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4130A9() {
    void* ptr0;
    int* ptr1 = &ptr0;
    DWORD dwExceptionFlags = (DWORD)sub_4130E0();
    char v0 = dwExceptionFlags ? 0: 1;
    char v1 = dwExceptionFlags >= 0x80000000;
    char v2 = __parity__((unsigned char)dwExceptionFlags);
    char v3 = 0;
    char v4 = 0;
    if(v0) {
        RaiseException(3221225781, dwExceptionFlags, dwExceptionFlags, (ULONG_PTR*)dwExceptionFlags);
    }
    gvar_429628 = 1;
}

int sub_4130CA() {
    return gvar_429610();
}

int sub_4130E0(int param0, unsigned int param1) {
    unsigned int v0;
    int v1;
    unsigned int v2 = v0;
    HMODULE hModule = LoadLibraryA("Kernel32.dll");
    FARPROC v3 = GetProcAddress(hModule, "IsDebuggerPresent");
    gvar_429610 = v3;
    if(!v3) {
        sub_414C20(v1);
        int v4 = 148;
        BOOL v5 = GetVersionExA(&v4);
        if(v5 && param1 == 1 && v2 == 4) {
            gvar_429610 = &gvar_413180;
            return 1;
        }
        v3 = gvar_429610;
    }
    return v3 ? 1: 0;
}

unsigned int sub_4131B0(int param0) {
    unsigned int result;
    unsigned int v0;
    unsigned int v1 = v0;
    if(gvar_42B0FC) {
        gvar_42B0FC(param0);
    }
    v1 = sub_413460((unsigned int*)0x42830C, 4359456);
    if(v1) {
        result = v1;
    }
    else {
        sub_416820(&gvar_4110CD);
        sub_413430(0x428000, 0x428208);
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_413230(int param0) {
    return sub_4132B0(param0, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_413250(int param0) {
    return sub_4132B0(param0, 1, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_413270() {
    return sub_4132B0(0, 0, 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_413290() {
    return sub_4132B0(0, 1, 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_4132B0(UINT uExitCode, unsigned int param1, unsigned int param2) {
    if(gvar_429678 == 1) {
        HANDLE hProcess = GetCurrentProcess();
        TerminateProcess(hProcess, uExitCode);
    }
    gvar_429674 = 1;
    gvar_429670 = (unsigned char)param2;
    if(!param1) {
        if(gvar_42B0F4) {
        loc_4132F8:
            gvar_42B0F0 -= 4;
            while(gvar_42B0F4 <= gvar_42B0F0) {
                if(!*gvar_42B0F0) {
                    goto loc_4132F8;
                }
                else {
                    int* ptr0 = gvar_42B0F0;
                    UINT v0 = &loc_41331E;
                    *ptr0();
                    gvar_42B0F0 -= 4;
                }
            }
        }
        sub_413430(0x428624, 0x42882c);
    }
    unsigned int result = (unsigned int)sub_413430(4360496, 0x428a34);
    if(!gvar_42967C) {
        int v1 = sub_418190(-1);
        result = (unsigned int)(v1 & 0x20);
        if(result) {
            gvar_42967C = 1;
            result = sub_418C90();
        }
    }
    if(!param2) {
        gvar_429678 = 1;
        result = (unsigned int)/*NO_RETURN*/ sub_4133D0((int)uExitCode);
    }
    return result;
}

int sub_4133D0(UINT param0) {
    char v0;
    int v1;
    FARPROC v2;
    void* ptr0;
    int* ptr1 = &v1;
    int* ptr2 = &v1;
    char v3 = &v0 == 12;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&v0 - 12);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x8) ^ (int)&v2) >>> 4) & 0x1);
    char v7 = (unsigned int)&v1 < 8;
    char v8 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v2) & (int)(int*)((int)&v1 ^ 0x8)) < 0;
    HMODULE v9 = GetModuleHandleA("mscoree.dll");
    HMODULE v10 = v9;
    char v11 = v10 ? 0: 1;
    char v12 = (int)v10 < 0;
    char v13 = __parity__((unsigned char)v10);
    char v14 = (unsigned int)v10 < 0;
    char v15 = 0;
    char v16 = 0;
    if(!v11) {
        HMODULE hModule = v10;
        FARPROC v17 = GetProcAddress(hModule, "CorExitProcess");
        v2 = v17;
        v11 = v2 ? 0: 1;
        v12 = (int)v2 < 0;
        v13 = __parity__((unsigned char)v2);
        v14 = (unsigned int)v2 < 0;
        v15 = 0;
        v16 = 0;
        if(!v11) {
            UINT v18 = param0;
            int v19 = v2(v18);
        }
    }
    UINT v20 = param0;
    UINT v21 = param0;
    int* ptr3 = &ptr0;
    /*BAD_CALL!*/ sub_413413();
}

unsigned int sub_413460(unsigned int* param0, unsigned int param1) {
    unsigned int result = 0;
    while((unsigned int)param0 < param1 && !result) {
        if(*param0) {
            result = (unsigned int)*param0();
        }
        ++param0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4134B0(unsigned int param0, int param1) {
    return param0 == -529697949 ? sub_4134E0(-529697949, param1): 0;
}

LONG sub_4134E0(unsigned int param0, _EXCEPTION_POINTERS* ExceptionInfo) {
    LONG result;
    unsigned int* ptr0 = sub_413700(param0);
    if(!ptr0 || !ptr0[2]) {
        result = UnhandledExceptionFilter(ExceptionInfo);
    }
    else if(ptr0[2] == 5) {
        ptr0[2] = 0;
        result = 1;
    }
    else {
        if(ptr0[2] != 1) {
            unsigned int v0 = ptr0[2];
            unsigned int* ptr1 = gvar_429690;
            gvar_429690 = ExceptionInfo;
            if(ptr0[1] == 8) {
                for(unsigned int i = gvar_428C08; (int)(gvar_428C08 + gvar_428C0C) > (int)i; ++i) {
                    *(int*)(i * 12 + 4361112) = 0;
                }
                unsigned int v1 = gvar_428C14;
                switch(ptr0[0]) {
                    case -1073741683: {
                        gvar_428C14 = 130;
                        break;
                    }
                    case -1073741682: {
                        gvar_428C14 = 131;
                        break;
                    }
                    case -1073741681: {
                        gvar_428C14 = 134;
                        break;
                    }
                    case -1073741680: {
                        gvar_428C14 = 129;
                        break;
                    }
                    case -1073741679: {
                        gvar_428C14 = 132;
                        break;
                    }
                    case -1073741678: {
                        gvar_428C14 = 138;
                        break;
                    }
                    case -1073741677: {
                        gvar_428C14 = 133;
                        break;
                    }
                }
                v0(8, (int)gvar_428C14);
                gvar_428C14 = v1;
            }
            else {
                ptr0[2] = 0;
                v0((int)ptr0[1]);
            }
            gvar_429690 = ptr1;
        }
        result = -1;
    }
    return result;
}

unsigned int* sub_413700(unsigned int param0) {
    unsigned int* ptr0 = (unsigned int*)&gvar_428B90;
    while(*ptr0 != param0) {
        ptr0 += 3;
        if((unsigned int*)(gvar_428C10 * 12 + &gvar_428B90) <= ptr0) {
            break;
        }
    }
    return (unsigned int)(gvar_428C10 * 12 + &gvar_428B90) > (unsigned int)ptr0 && *ptr0 == param0 ? ptr0: NULL;
}

// Stale decompilation - Refresh this view to re-decompile this code
char* sub_413780() {
    unsigned int v0 = 0;
    if(!gvar_42B0F8) {
        sub_41A010();
    }
    char* ptr0 = gvar_42B100 ? gvar_42B100: (char*)&gvar_4250EC;
    char* i;
    for(i = gvar_42B100 ? gvar_42B100: (char*)&gvar_4250EC; *i > 32 || (*i && v0); ++i) {
        if(*i == 34) {
            v0 = v0 ? 0: 1;
        }
        int v1 = sub_419570((int)*i);
        if(v1 && i) {
            ++i;
        }
    }
    while(*i && *i <= 32) {
        ++i;
    }
    return i;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_413880() {
    int v0;
    int result;
    if(!gvar_42B0F8) {
        sub_41A010();
    }
    int v1 = 0;
    void* i = gvar_4295FC;
    if(!i) {
        result = -1;
    }
    else {
        while((int)*(char*)i) {
            if(*(char*)i != 61) {
                ++v1;
            }
            int v2 = sub_411235((int)i);
            i = (void*)((char*)(v2 + (int)i) + 1);
        }
        unsigned int* ptr0 = (unsigned int*)sub_4168D0(v1 * 4 + 4, 2, "stdenvp.c", 117);
        gvar_429658 = ptr0;
        if(!gvar_429658) {
            result = -1;
        }
        else {
            for(i = gvar_4295FC; (int)*(char*)i; i = (void*)(v0 + (int)i)) {
                int v3 = sub_411235((int)i);
                v0 = v3 + 1;
                if(*(char*)i != 61) {
                    int v4 = sub_4168D0(v0, 2, "stdenvp.c", 130);
                    *ptr0 = v4;
                    if(!*ptr0) {
                        sub_4175B0((int)gvar_429658, 2);
                        gvar_429658 = 0;
                        return -1;
                    }
                    void* ptr1 = i;
                    sub_411258(*ptr0, (int)i);
                    ++ptr0;
                }
            }
            sub_4175B0((int)gvar_4295FC, 2);
            gvar_4295FC = 0;
            *ptr0 = 0;
            gvar_42B0E0 = 1;
            result = 0;
        }
    }
    return result;
}

int sub_413A60() {
    int result;
    unsigned int v0;
    int v1;
    if(!gvar_42B0F8) {
        sub_41A010();
    }
    gvar_42979C = 0;
    GetModuleFileNameA(NULL, (LPSTR)0x429698, 260);
    gvar_429668 = 0x429698;
    char* ptr0 = !gvar_42B100 || !(int)*gvar_42B100 ? gvar_429668: gvar_42B100;
    char* ptr1 = ptr0;
    sub_413B80(ptr1, NULL, NULL, &v0, &v1);
    unsigned int* ptr2 = (unsigned int*)sub_4168D0(v0 * 4 + v1, 2, "stdargv.c", 130);
    if(!ptr2) {
        result = -1;
    }
    else {
        sub_413B80(ptr1, ptr2, (char*)&ptr2[v0], &v0, &v1);
        gvar_42964C = v0 - 1;
        gvar_429650 = ptr2;
        result = 0;
    }
    return result;
}

int sub_413B80(char* param0, unsigned int* param1, char* param2, int* param3, int* param4) {
    char v0;
    *param4 = 0;
    *param3 = 1;
    char* ptr0 = param0;
    if(param1) {
        *param1 = param2;
        ++param1;
    }
    unsigned int v1 = 0;
    do {
        char* ptr1 = ptr0;
        if(*ptr1 == 34) {
            v1 = v1 ? 0: 1;
            char* ptr2 = ptr0;
            v0 = *ptr2;
            ++ptr0;
        }
        else {
            int* ptr3 = param4;
            int v2 = *ptr3 + 1;
            int* ptr4 = param4;
            *ptr4 = v2;
            if(param2) {
                char* ptr5 = param2;
                char* ptr6 = ptr0;
                ptr4 = (unsigned int)*ptr6 | ((unsigned int)(int*)((int)(int*)((int)ptr4 >>> 8) & 0xffffff) << 8);
                *ptr5 = *ptr6;
                ++param2;
            }
            char* ptr7 = ptr0;
            ptr4 = (unsigned int)*ptr7 | ((unsigned int)(int*)((int)(int*)((int)ptr4 >>> 8) & 0xffffff) << 8);
            v0 = *ptr7;
            ++ptr0;
            if(((unsigned int)*(unsigned char*)((unsigned int)v0 + (int)&gvar_42AD41) & 0x4)) {
                int* ptr8 = param4;
                int v3 = *ptr8 + 1;
                int* ptr9 = param4;
                *ptr9 = v3;
                if(param2) {
                    char* ptr10 = param2;
                    char* ptr11 = ptr0;
                    ptr9 = (unsigned int)*ptr11 | ((unsigned int)(int*)((int)(int*)((int)ptr9 >>> 8) & 0xffffff) << 8);
                    *ptr10 = *ptr11;
                    ++param2;
                }
                ++ptr0;
            }
        }
    }
    while(v0 && (v1 || (v0 != 32 && v0 != 9)));
    if(!v0) {
        --ptr0;
    }
    else if(param2) {
        *(param2 - 1) = 0;
    }
    v1 = 0;
    while(1) {
        if((int)*ptr0) {
            while(*ptr0 == 32 || *ptr0 == 9) {
                ++ptr0;
            }
        }
        if(!(int)*ptr0) {
            break;
        }
        else {
            if(param1) {
                *param1 = param2;
                ++param1;
            }
            *param3 = *param3 + 1;
            while(1) {
                unsigned int v4 = 1;
                unsigned int i;
                for(i = 0; *ptr0 == 92; ++i) {
                    ++ptr0;
                }
                if(*ptr0 == 34) {
                    if(!(i % 2)) {
                        if(!v1) {
                            v4 = 0;
                        }
                        else if(*(ptr0 + 1) == 34) {
                            ++ptr0;
                        }
                        else {
                            v4 = 0;
                        }
                        v1 = v1 ? 0: 1;
                    }
                    i >>>= 1;
                }
                while(1) {
                    unsigned int v5 = i;
                    --i;
                    if(!v5) {
                        break;
                    }
                    else {
                        if(param2) {
                            *param2 = 92;
                            ++param2;
                        }
                        *param4 = *param4 + 1;
                    }
                }
                if(!(int)*ptr0 || (!v1 && (*ptr0 == 32 || *ptr0 == 9))) {
                    break;
                }
                else {
                    if(v4) {
                        if(param2) {
                            if(((unsigned int)*(unsigned char*)((unsigned int)*ptr0 + (int)&gvar_42AD41) & 0x4)) {
                                *param2 = *ptr0;
                                ++param2;
                                ++ptr0;
                                *param4 = *param4 + 1;
                            }
                            *param2 = *ptr0;
                            ++param2;
                        }
                        else if(((unsigned int)*(unsigned char*)((unsigned int)*ptr0 + (int)&gvar_42AD41) & 0x4)) {
                            ++ptr0;
                            *param4 = *param4 + 1;
                        }
                        *param4 = *param4 + 1;
                    }
                    ++ptr0;
                }
            }
            if(param2) {
                *param2 = 0;
                ++param2;
            }
            *param4 = *param4 + 1;
        }
    }
    if(param1) {
        *param1 = 0;
        ++param1;
    }
    int result = *param3 + 1;
    *param3 = *param3 + 1;
    return result;
}

LPSTR sub_413FC0() {
    int cbMultiByte;
    LPSTR result;
    LPWCH lpWideCharStr = NULL;
    LPSTR lpMultiByteStr = NULL;
    if(!gvar_4297D4) {
        lpWideCharStr = GetEnvironmentStringsW();
        if(lpWideCharStr) {
            gvar_4297D4 = 1;
        }
        else {
            LPWCH v0 = (LPWCH)GetLastError();
            if(v0 == 120) {
                gvar_4297D4 = 2;
            }
        }
    }
    if(gvar_4297D4 == 1) {
        if(!lpWideCharStr) {
            lpWideCharStr = GetEnvironmentStringsW();
            if(lpWideCharStr) {
                goto loc_414039;
            }
            else {
                result = NULL;
            }
        }
        else {
        loc_414039:
            LPWCH v1 = lpWideCharStr;
            while(v1[0]) {
                ++v1;
                if(!v1[0]) {
                    ++v1;
                }
            }
            int cchWideChar = (int)((char*)((int)(int*)((int)v1 - (int)lpWideCharStr) >> 1) + 1);
            cbMultiByte = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, NULL, 0, NULL, NULL);
            if(cbMultiByte) {
                lpMultiByteStr = (LPSTR)sub_4168D0(cbMultiByte, 2, "a_env.c", 97);
                if(!lpMultiByteStr) {
                    goto loc_4140B7;
                }
                else {
                    int v2 = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, NULL, NULL);
                    if(!v2) {
                        sub_4175B0(lpMultiByteStr, 2);
                        lpMultiByteStr = NULL;
                    }
                    FreeEnvironmentStringsW(lpWideCharStr);
                    result = lpMultiByteStr;
                }
            }
            else {
            loc_4140B7:
                FreeEnvironmentStringsW(lpWideCharStr);
                result = NULL;
            }
        }
    }
    else if(gvar_4297D4 == 2 || !gvar_4297D4) {
        lpMultiByteStr = GetEnvironmentStrings();
        if(!lpMultiByteStr) {
            result = NULL;
        }
        else {
            LPSTR v3 = lpMultiByteStr;
            while((int)v3[0]) {
                ++v3;
                if(!(int)v3[0]) {
                    ++v3;
                }
            }
            cbMultiByte = (int)((char*)((int)v3 - (int)lpMultiByteStr) + 1);
            v3 = (LPSTR)sub_4168D0(cbMultiByte, 2, "a_env.c", 140);
            if(!v3) {
                FreeEnvironmentStringsA(lpMultiByteStr);
                result = NULL;
            }
            else {
                unk_lib_sub5((int*)v3, (int*)lpMultiByteStr, (int*)cbMultiByte);
                FreeEnvironmentStringsA(lpMultiByteStr);
                result = v3;
            }
        }
    }
    else {
        result = NULL;
    }
    return result;
}

int sub_414260() {
    unsigned int v0;
    int result;
    unsigned int* ptr0;
    short v1;
    char v2;
    unsigned int* ptr1 = (unsigned int*)sub_4168D0(0x100, 2, "ioinit.c", 130);
    if(!ptr1) {
        result = -1;
    }
    else {
        gvar_42AFE0 = ptr1;
        gvar_42AF94 = 32;
        while(gvar_42AFE0 + 0x100 > (unsigned int)ptr1) {
            *(char*)(ptr1 + 1) = 0;
            *ptr1 = -1;
            *(char*)((char*)ptr1 + 5) = 10;
            ptr1 += 2;
        }
        GetStartupInfoA(&v2);
        if(v1 && ptr0) {
            unsigned int v3 = *ptr0;
            char* ptr2 = (char*)(ptr0 + 1);
            unsigned int* ptr3 = (unsigned int*)((int)ptr2 + v3);
            unsigned int v4 = (int)v3 < 0x800 ? v3: 0x800;
            v3 = (int)v3 < 0x800 ? v3: 0x800;
            int v5 = 1;
            while((int)gvar_42AF94 < (int)v3) {
                ptr1 = (unsigned int*)sub_4168D0(0x100, 2, "ioinit.c", 183);
                if(!ptr1) {
                    v3 = gvar_42AF94;
                    break;
                }
                else {
                    *(unsigned int*)(v5 * 4 + (int)&gvar_42AFE0) = ptr1;
                    gvar_42AF94 += 32;
                    while(*(unsigned int*)(v5 * 4 + (int)&gvar_42AFE0) + 0x100 > (unsigned int)ptr1) {
                        *(char*)(ptr1 + 1) = 0;
                        *ptr1 = -1;
                        *(char*)((char*)ptr1 + 5) = 10;
                        ptr1 += 2;
                    }
                    ++v5;
                }
            }
            v0 = 0;
            while((int)v3 > (int)v0) {
                if(*ptr3 != -1 && ((int)*ptr2 & 0x1)) {
                    if(!((int)*ptr2 & 0x8)) {
                        DWORD v6 = GetFileType(*ptr3);
                        if(v6) {
                            goto loc_414446;
                        }
                    }
                    else {
                    loc_414446:
                        ptr1 = (unsigned int*)((v0 & 0x1f) * 8 + *(unsigned int*)((v0 >> 5) * 4 + (int)&gvar_42AFE0));
                        *ptr1 = *ptr3;
                        *(char*)(ptr1 + 1) = *ptr2;
                    }
                }
                ++v0;
                ++ptr2;
                ++ptr3;
            }
        }
        v0 = 0;
        do {
            ptr1 = (unsigned int*)(v0 * 8 + gvar_42AFE0);
            if(*ptr1 == -1) {
                *(char*)(ptr1 + 1) = 129;
                DWORD nStdHandle = !v0 ? 0xfffffff6: v0 > 1 ? 0xfffffff4: 0xfffffff5;
                HANDLE hFile = GetStdHandle(nStdHandle);
                if(hFile != -1) {
                    DWORD v7 = GetFileType(hFile);
                    if(!v7) {
                        goto loc_41453B;
                    }
                    else {
                        *ptr1 = hFile;
                        if((unsigned char)v7 == 2) {
                            *(char*)(ptr1 + 1) = *(char*)(ptr1 + 1) | 0x40;
                        }
                        else if((unsigned char)v7 == 3) {
                            *(char*)(ptr1 + 1) = *(char*)(ptr1 + 1) | 0x8;
                        }
                    }
                }
                else {
                loc_41453B:
                    *(char*)(ptr1 + 1) = *(char*)(ptr1 + 1) | 0x40;
                }
            }
            else {
                *(char*)(ptr1 + 1) = *(char*)(ptr1 + 1) | 0x80;
            }
            ++v0;
        }
        while((int)v0 >= 3);
        SetHandleCount(gvar_42AF94);
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_414630() {
    unsigned int result;
    unsigned int v0 = 0;
    do {
        if(*(unsigned int*)(v0 * 4 + (int)&gvar_42AFE0)) {
            sub_4175B0((int)*(unsigned int*)(v0 * 4 + (int)&gvar_42AFE0), 2);
            *(unsigned int*)(v0 * 4 + (int)&gvar_42AFE0) = 0;
        }
        result = v0 + 1;
        ++v0;
    }
    while((int)v0 >= 64);
    return result;
}

int sub_4146A0() {
    int result;
    int v0;
    int v1;
    int v2 = &gvar_4256C8;
    int v3 = &gvar_4111A4;
    int v4 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v4;
    int v5 = v1;
    int* ptr0 = &v0;
    int* ptr1 = (int*)&gvar_427828;
    do {
        int v6 = 0;  // __try{ (see __except:4146F6h)
        result = *ptr1;
        if(result) {
            result = result();
        }
        ++ptr1;
    }
    while((unsigned int)ptr1 >= 4356652);
    *(int*)__FS_BASE = v4;
    return result;
}

int sub_414740() {
    int result;
    int v0;
    int v1;
    int v2 = &gvar_4256D8;
    int v3 = &gvar_4111A4;
    int v4 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v4;
    int v5 = v1;
    int* ptr0 = &v0;
    int* ptr1 = (int*)&gvar_427B34;
    do {
        int v6 = 0;  // __try{ (see __except:414796h)
        result = *ptr1;
        if(result) {
            result = result();
        }
        ++ptr1;
    }
    while((unsigned int)ptr1 >= 4357432);
    *(int*)__FS_BASE = v4;
    return result;
}

int sub_4147E0() {
    return gvar_429638 != 2 || gvar_429644 < 5 ? 3: 1;
}

int sub_414820(unsigned int param0) {
    int result;
    HANDLE v0 = HeapCreate(param0 ? 0: 1, 0x1000, 0);
    gvar_42AF80 = v0;
    if(!gvar_42AF80) {
        result = 0;
    }
    else {
        int v1 = sub_4147E0();
        gvar_42AF90 = v1;
        if(gvar_42AF90 == 3) {
            int v2 = sub_41A6F0(1016);
            if(v2) {
                return 1;
            }
            HeapDestroy(gvar_42AF80);
            result = 0;
        }
        else {
            result = 1;
        }
    }
    return result;
}

BOOL sub_4148B0() {
    if(gvar_42AF90 == 3) {
        unsigned int v0 = gvar_42ACA0;
        for(unsigned int i = 0; (int)gvar_42AC9C > (int)i; ++i) {
            int v1 = 0x4000;
            int v2 = 0x100000;
            VirtualFree(*(LPVOID*)(v0 + 12), 0x100000, 0x4000);
            v1 = 0x8000;
            v2 = 0;
            VirtualFree(*(LPVOID*)(v0 + 12), 0, 0x8000);
            HeapFree(gvar_42AF80, 0, *(LPVOID*)(v0 + 16));
            v0 += 20;
        }
        HeapFree(gvar_42AF80, 0, gvar_42ACA0);
    }
    return HeapDestroy(gvar_42AF80);
}

unsigned int sub_414990() {
    return gvar_42AF80;
}

int sub_41499C(PVOID TargetFrame) {
    int v0;
    int v1;
    int v2 = v1;
    int* ptr0 = &v0;
    return sub_4113A7(TargetFrame, (PVOID)&loc_4149B4, NULL, NULL);
}

unsigned int sub_414A72(int param0, int param1) {
    unsigned int v0;
    unsigned int result;
    gvar_428C4C = *(unsigned int*)(v0 + 8);
    gvar_428C48 = result;
    gvar_428C50 = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_414AD0(int param0, PVOID param1, int param2) {
    int v0;
    void* ptr0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    int v7;
    int v8;
    int v9;
    void* ptr1;
    int v10;
    int v11;
    int v12;
    void* ptr2 = &v8;
    void* ptr3 = &v8;
    char v13 = &v6 == 12;
    char v14 = (int)&v11 < 0;
    char v15 = __parity__((unsigned char)&v6 - 12);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0x8) ^ (int)&v11) >>> 4) & 0x1);
    char v17 = (unsigned int)&v8 < 8;
    char v18 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&v11) & (int)(int*)((int)&v8 ^ 0x8)) < 0;
    int v19 = v7;
    int v20 = v9;
    int v21 = v10;
    void* ptr4 = &v8;
    char v22 = 0;
    PVOID TargetFrame = param1;
    int v23 = param0;
    char v24 = *(int*)(v23 + 4) & 0x6 ? 0: 1;
    char v25 = (*(int*)(v23 + 4) & 0x6) < 0;
    char v26 = __parity__((unsigned char)*(int*)(v23 + 4) & 0x6);
    char v27 = 0;
    char v28 = 0;
    if(v24) {
        v11 = v23;
        int v29 = param2;
        int v30 = param2;
        int* ptr5 = &v11;
        *(unsigned int*)((int)TargetFrame - 4) = &v11;
        unsigned int v31 = *(unsigned int*)((int)TargetFrame + 12);
        int v32 = *(int*)((int)TargetFrame + 8);
        int v33 = sub_41C8C0((int)TargetFrame);
        int v34 = v33;
        char v35 = v34 ? 0: 1;
        char v36 = v34 < 0;
        char v37 = __parity__((unsigned char)v34);
        char v38 = 0;
        char v39 = 0;
        if(!v35) {
            while(1) {
                v5 = v31 == -1;
                v4 = (int)v31 < -1;
                v3 = __parity__((unsigned char)v31 - 0xff);
                v2 = v31 < 0xffffffff;
                v1 = (((v31 + 1) ^ v31) & ~v31) < 0;
                v16 = (((v31 + 1) ^ ~v31) >>> 4) & 0x1;
                if(v5) {
                    goto loc_414B92;
                }
                else {
                    int v40 = v31 * 3;
                    int v41 = *(int*)(v40 * 4 + v32 + 4);
                    int v42 = *(int*)(v40 * 4 + v32 + 4);
                    char v43 = v42 ? 0: 1;
                    char v44 = v42 < 0;
                    char v45 = __parity__((unsigned char)v42);
                    char v46 = 0;
                    char v47 = 0;
                    if(!v43) {
                        ptr0 = (void*)v31;
                        void* ptr6 = ptr2;
                        int* ptr7 = (int*)((int)TargetFrame + 16);
                        int v48 = 0;
                        int v49 = 0;
                        int v50 = 0;
                        int v51 = 0;
                        int v52 = 0;
                        char v53 = 1;
                        char v54 = 0;
                        char v55 = 1;
                        char v56 = 0;
                        char v57 = 0;
                        int v58 = v42();
                        ptr2 = ptr6;
                        v31 = (unsigned int)ptr0;
                        TargetFrame = *(PVOID*)((int)ptr2 + 12);
                        int v59 = v58;
                        v5 = v59 ? 0: 1;
                        v4 = v59 < 0;
                        v3 = __parity__((unsigned char)v59);
                        v1 = 0;
                        v2 = 0;
                        if(!v5) {
                            if(!v4) {
                                int v60 = *(int*)((int)TargetFrame + 8);
                                int v61 = sub_41499C(TargetFrame);
                                int* ptr8 = &ptr0;
                                char v62 = &v6 == 28;
                                char v63 = (int)&ptr4 < 0;
                                char v64 = __parity__((unsigned char)&v6 - 28);
                                char v65 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&ptr4) >>> 4) & 0x1);
                                char v66 = (unsigned int)&ptr0 >= 0xfffffffc;
                                char v67 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
                                ptr2 = (void*)((int)TargetFrame + 16);
                                int v68 = sub_4111BD((int)TargetFrame, v31);
                                int* ptr9 = &ptr6;
                                char v69 = &v6 == 28;
                                char v70 = (int)&ptr4 < 0;
                                char v71 = __parity__((unsigned char)&v6 - 28);
                                char v72 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr6 ^ 0x8) ^ (int)&ptr4) >>> 4) & 0x1);
                                char v73 = (unsigned int)&ptr6 >= 0xfffffff8;
                                char v74 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&ptr6) & (int*)~(int)(int*)((int)&ptr6 ^ 0x8)) < 0;
                                int v75 = (int)(v31 * 3);
                                int v76 = *(int*)(v75 * 4 + v60 + 8);
                                unsigned int v77 = sub_414A72(v75, 1);
                                int v78 = *(int*)(v12 * 4 + v60);
                                *(int*)((int)TargetFrame + 12) = *(int*)(v12 * 4 + v60);
                                int v79 = *(int*)(v12 * 4 + v60 + 8);
                                TargetFrame = NULL;
                                int v80 = 0;
                                int v81 = 0;
                                v31 = 0;
                                int v82 = 0;
                                char v83 = 1;
                                char v84 = 0;
                                char v85 = 1;
                                char v86 = 0;
                                char v87 = 0;
                                v79();
                            }
                            else {
                                v0 = 0;
                                break;
                            }
                        }
                    }
                    v32 = *(int*)((int)TargetFrame + 8);
                    v12 = v31 * 3;
                    v31 = *(unsigned int*)(v12 * 4 + v32);
                }
            }
        }
        else {
            int v88 = param0;
            *(int*)(v88 + 4) = *(int*)(v88 + 4) | 0x8;
            v5 = *(int*)(v88 + 4) ? 0: 1;
            v4 = *(int*)(v88 + 4) < 0;
            v3 = __parity__((unsigned char)*(int*)(v88 + 4));
            v1 = 0;
            v2 = 0;
        loc_414B92:
            v0 = 1;
        }
    }
    else {
        ptr0 = &v8;
        int* ptr10 = (int*)((int)TargetFrame + 16);
        int v89 = sub_4111BD((int)TargetFrame, 0xffffffff);
        int* ptr11 = &ptr1;
        v5 = &v6 == 32;
        v4 = (int)&ptr0 < 0;
        v3 = __parity__((unsigned char)&v6 - 32);
        v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x8) ^ (int)&ptr0) >>> 4) & 0x1);
        v2 = (unsigned int)&ptr1 >= 0xfffffff8;
        v1 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&ptr1) & (int*)~(int)(int*)((int)&ptr1 ^ 0x8)) < 0;
        void* ptr12 = ptr0;
        v0 = 1;
    }
    void* ptr13 = ptr4;
    int v90 = v21;
    int v91 = v20;
    int v92 = v19;
    int v93 = *(int*)ptr13;
    int v94 = v20;
    int* ptr14 = &v19;
    jump v94;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_414C70() {
    int result;
    if(gvar_429604 == 1 || (!gvar_429604 && gvar_428B44 == 1)) {
        sub_414CD0(252);
        if(gvar_4297D8) {
            gvar_4297D8();
        }
        result = sub_414CD0(0xff);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_414CD0(unsigned int param0) {
    unsigned int result;
    int* ptr0;
    int* ptr1;
    char v0;
    int* ptr2;
    int v1;
    char v2;
    int v3;
    int* ptr3 = &ptr1;
    int* ptr4 = &ptr1;
    char v4 = &ptr0 == 296;
    char v5 = (int)&ptr2 < 0;
    char v6 = __parity__((unsigned char)&ptr0 - 40);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x124) ^ (int)&ptr2) >>> 4) & 0x1);
    char v8 = (unsigned int)&ptr1 < 292;
    char v9 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&ptr2) & (int)(int*)((int)&ptr1 ^ 0x124)) < 0;
    unsigned int v10 = gvar_428EB0;
    unsigned int v11 = gvar_428EB0;
    int* ptr5 = NULL;
    while(1) {
        char v12 = ptr5 == 19;
        char v13 = (int)ptr5 < 19;
        char v14 = __parity__((unsigned char)ptr5 - 19);
        char v15 = (unsigned int)ptr5 < 19;
        char v16 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 19) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x13)) < 0;
        char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 19) ^ (int)(int*)((int)ptr5 ^ 0x13)) >>> 4) & 0x1);
        if(!v15) {
            break;
        }
        else {
            int* ptr6 = ptr5;
            unsigned int v18 = param0;
            char v19 = *(unsigned int*)((int)(int*)((int)ptr6 * 8) + (int)&gvar_428C60) == v18;
            char v20 = (int)*(unsigned int*)((int)(int*)((int)ptr6 * 8) + (int)&gvar_428C60) > (int)v18;
            char v21 = __parity__((unsigned char)v18 - (unsigned char)*(unsigned int*)((int)(int*)((int)ptr6 * 8) + (int)&gvar_428C60));
            char v22 = *(unsigned int*)((int)(int*)((int)ptr6 * 8) + (int)&gvar_428C60) > v18;
            char v23 = (int)(((v18 - *(unsigned int*)((int)(int*)((int)ptr6 * 8) + (int)&gvar_428C60)) ^ v18) & (*(unsigned int*)((int)(int*)((int)ptr6 * 8) + (int)&gvar_428C60) ^ v18)) < 0;
            char v24 = (((v18 - *(unsigned int*)((int)(int*)((int)ptr6 * 8) + (int)&gvar_428C60)) ^ (*(unsigned int*)((int)(int*)((int)ptr6 * 8) + (int)&gvar_428C60) ^ v18)) >>> 4) & 0x1;
            if(v19) {
                break;
            }
            else {
                int* ptr7 = ptr5;
                ptr4 = ptr5;
                int* ptr8 = (int*)((char*)ptr7 + 1);
                char v25 = ptr8 ? 0: 1;
                char v26 = (int)ptr8 < 0;
                char v27 = __parity__((unsigned char)ptr8);
                char v28 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 ^ 0x1) ^ (int)ptr8) >>> 4) & 0x1);
                char v29 = (unsigned int)ptr4 >= 0xffffffff;
                char v30 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr4) & (int*)~(int)(int*)((int)ptr4 ^ 0x1)) < 0;
                ptr5 = ptr8;
            }
        }
    }
    int* ptr9 = ptr5;
    unsigned int v31 = param0;
    if(*(unsigned int*)((int)(int*)((int)ptr9 * 8) + (int)&gvar_428C60) == v31) {
        char v32 = param0 == 252;
        char v33 = (int)param0 < 252;
        char v34 = __parity__((unsigned char)param0 - 252);
        char v35 = param0 < 252;
        char v36 = (((param0 - 252) ^ param0) & (param0 ^ 0xfc)) < 0;
        char v37 = (((param0 - 252) ^ (param0 ^ 0xfc)) >>> 4) & 0x1;
        if(!v32) {
            char v38 = param0 == 0xff;
            char v39 = (int)param0 < 0xff;
            char v40 = __parity__((unsigned char)param0 - 0xff);
            char v41 = param0 < 0xff;
            char v42 = (((param0 - 0xff) ^ param0) & (param0 ^ 0xff)) < 0;
            char v43 = (((param0 - 0xff) ^ (param0 ^ 0xff)) >>> 4) & 0x1;
            if(!v38) {
                int* ptr10 = ptr5;
                unsigned int v44 = *(unsigned int*)((int)(int*)((int)ptr10 * 8) + (int)&gvar_428C64);
                result = (unsigned int)sub_415390(1, 0, 0, 0, (int)v44);
                int* ptr11 = &v1;
                char v45 = result == 1;
                char v46 = (int)result < 1;
                char v47 = __parity__((unsigned char)result - 1);
                char v48 = result < 1;
                char v49 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                char v50 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                if(v45) {
                    interrupt(3);
                }
            }
        }
        if(gvar_429604 == 1 || (!gvar_429604 && gvar_428B44 == 1)) {
            LPDWORD lpNumberOfBytesWritten = &v2;
            DWORD nNumberOfBytesToWrite = (DWORD)sub_411235((int)*(unsigned int*)((int)(int*)((int)ptr5 * 8) + (int)&gvar_428C64));
            LPCVOID lpBuffer = *(LPCVOID*)((int)(int*)((int)ptr5 * 8) + (int)&gvar_428C64);
            HANDLE hFile = GetStdHandle(0xfffffff4);
            WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, NULL);
        }
        else if(param0 != 252) {
            char v51 = 0;
            DWORD v52 = GetModuleFileNameA(NULL, &v0, 260);
            if(!v52) {
                sub_411258((int)&v0, "<program name unknown>");
            }
            LPSTR v53 = &v0;
            int v54 = sub_411235((int)v53);
            if((unsigned int)(v54 + 1) > 60) {
                int v55 = sub_411235((int)&v0);
                v53 = (LPSTR)(v55 + (int)v53) - 59;
                sub_411492((int)v53, &gvar_425B78, 3);
            }
            int v56 = sub_411235((int)v53);
            int v57 = sub_411235((int)*(unsigned int*)((int)(int*)((int)ptr5 * 8) + (int)&gvar_428C64));
            sub_414C20(v3);
            ptr2 = &v1;
            int* ptr12 = &v1;
            sub_411258((int)ptr12, "Runtime Error!\n\nProgram: ");
            sub_41120D((int)ptr12, (int)v53);
            sub_41120D((int)ptr12, &gvar_425B54);
            sub_41120D((int)ptr12, (int)*(unsigned int*)((int)(int*)((int)ptr5 * 8) + (int)&gvar_428C64));
            sub_41CDB0((int)ptr12, "Microsoft Visual C++ Runtime Library", 0x12010);
        }
    }
    sub_411087((int)v11);
    return result;
}

unsigned int sub_414F70(unsigned int param0) {
    unsigned int i;
    for(i = 0; (i < 19 && *(unsigned int*)(i * 8 + (int)&gvar_428C60) != param0); ++i) {
    }
    return *(unsigned int*)(i * 8 + (int)&gvar_428C60) == param0 ? *(unsigned int*)(i * 8 + (int)&gvar_428C64): 0;
}

int sub_414FE0() {
    int result;
    DebugBreak();
    return result;
}

unsigned int sub_414FF0(unsigned int param0, unsigned int param1) {
    unsigned int result;
    if(param0 >= 0x80000000 || (int)param0 >= 3) {
        result = 0xffffffff;
    }
    else if(param1 == -1) {
        result = *(unsigned int*)(param0 * 4 + (int)&gvar_428D1C);
    }
    else if((param1 & 0xfffffff8)) {
        result = 0xffffffff;
    }
    else {
        unsigned int v0 = *(unsigned int*)(param0 * 4 + (int)&gvar_428D1C);
        *(unsigned int*)(param0 * 4 + (int)&gvar_428D1C) = param1;
        result = v0;
    }
    return result;
}

unsigned int sub_415060(unsigned int param0, unsigned int param1) {
    unsigned int result;
    if(param0 >= 0x80000000 || (int)param0 >= 3) {
        result = 0xfffffffe;
    }
    else if(param1 == -6) {
        result = *(unsigned int*)(param0 * 4 + (int)&gvar_428D28);
    }
    else {
        unsigned int v0 = *(unsigned int*)(param0 * 4 + (int)&gvar_428D28);
        switch(param1) {
            case -5: {
                HANDLE v1 = GetStdHandle(0xfffffff4);
                *(HANDLE*)(param0 * 4 + (int)&gvar_428D28) = v1;
                break;
            }
            case -4: {
                HANDLE v2 = GetStdHandle(0xfffffff5);
                *(HANDLE*)(param0 * 4 + (int)&gvar_428D28) = v2;
                break;
            }
            default: {
                *(unsigned int*)(param0 * 4 + (int)&gvar_428D28) = param1;
                break;
            }
        }
        result = v0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_415130(unsigned int param0, unsigned int param1) {
    unsigned int v0;
    unsigned int result;
    if((param0 && param0 != 1) || !param1) {
        gvar_42962C = 22;
        result = 0xffffffff;
    }
    else {
        unsigned int* i;
        for(i = gvar_42AF7C; (i && *(i + 3) != param1); i = *(i + 1)) {
        }
        if(param0 == 1) {
            if(i) {
                *(int*)(i + 2) = *(i + 2) - 1;
                v0 = *(i + 2);
                if(!v0) {
                    if(*(int*)(i + 1)) {
                        **(i + 1) = *i;
                    }
                    if(*i) {
                        *(int*)(*i + 4) = *(int*)(i + 1);
                    }
                    else {
                        gvar_42AF7C = *(i + 1);
                    }
                    sub_4175B0((int)i, 2);
                }
            }
            else {
                v0 = 0xffffffff;
                gvar_42962C = 22;
            }
        }
        else if(i) {
            *(int*)(i + 2) = *(int*)(i + 2) + 1;
            v0 = *(i + 2);
            if(gvar_42AF7C != i) {
                if(*(int*)(i + 1)) {
                    **(i + 1) = *i;
                }
                *(int*)(*i + 4) = *(int*)(i + 1);
                *i = 0;
                *(i + 1) = gvar_42AF7C;
                *gvar_42AF7C = i;
                gvar_42AF7C = i;
            }
        }
        else {
            i = (unsigned int*)sub_4168D0(16, 2, "dbgrpt.c", 293);
            if(!i) {
                v0 = 0xffffffff;
                gvar_42962C = 12;
            }
            else {
                *i = 0;
                *(i + 1) = gvar_42AF7C;
                if(gvar_42AF7C) {
                    *gvar_42AF7C = i;
                }
                *(int*)(i + 2) = 1;
                v0 = 1;
                *(i + 3) = param1;
                gvar_42AF7C = i;
            }
        }
        result = v0;
    }
    return result;
}

int sub_415390(unsigned int param0, unsigned int param1, unsigned int param2, int param3, unsigned int param4) {
    int v0;
    int* ptr0;
    char v1;
    char v2;
    char v3;
    char v4;
    int v5;
    void* ptr1;
    int v6;
    char v7;
    int result;
    char v8;
    sub_414C20(v5);
    void* ptr2 = gvar_428EB0;
    unsigned int* ptr3 = &ptr0;
    char v9 = 0;
    int v10 = 0x3ff;
    int* ptr4 = &v3;
    while(v10 != 0) {
        *ptr4 = 0;
        ++ptr4;
        --v10;
    }
    *(short*)ptr4 = 0;
    *(char*)((char*)ptr4 + 2) = 0;
    char v11 = 0;
    int v12 = 0x3ff;
    int* ptr5 = &v2;
    while(v12 != 0) {
        *ptr5 = 0;
        ++ptr5;
        --v12;
    }
    *(short*)ptr5 = 0;
    *(char*)((char*)ptr5 + 2) = 0;
    char v13 = 0;
    int v14 = 0x3ff;
    int* ptr6 = &v4;
    while(v14 != 0) {
        *ptr6 = 0;
        ++ptr6;
        --v14;
    }
    *(short*)ptr6 = 0;
    *(char*)((char*)ptr6 + 2) = 0;
    ptr0 = &v8;
    if(param0 < 0x80000000 && (int)param0 < 3) {
        if(param0 == 2) {
            ptr3 = &ptr2;
            ptr2 = (void*)&loc_415420;
            LONG v15 = InterlockedIncrement((LONG*)&gvar_428D18);
            if(v15 <= 0) {
                goto loc_4154B9;
            }
            else if(!gvar_4297DC) {
                HMODULE hModule = LoadLibraryA("user32.dll");
                if(hModule) {
                    HMODULE v16 = (HMODULE)GetProcAddress(hModule, "wsprintfA");
                    gvar_4297DC = v16;
                    if(gvar_4297DC) {
                        goto loc_415487;
                    }
                }
            }
            else {
            loc_415487:
                gvar_4297DC((int)&v11, "Second Chance Assertion Failed: File %s, Line %d\n", param1, param2);
                OutputDebugStringA(&v11);
                InterlockedDecrement((LONG*)&gvar_428D18);
                ptr3 = &ptr1;
                sub_414FE0();
            }
        }
        else {
        loc_4154B9:
            if(param4) {
                --ptr3;
                *ptr3 = ptr0;
                --ptr3;
                *ptr3 = param4;
                --ptr3;
                *ptr3 = 4075;
                --ptr3;
                *ptr3 = &v13;
                --ptr3;
                *ptr3 = &loc_4154D4;
                int v17 = /*BAD_CALL!*/ sub_41D670(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
                ptr3 += 4;
                if(v17 < 0) {
                    --ptr3;
                    *ptr3 = "_CrtDbgReport: String too long or IO Error";
                    --ptr3;
                    *ptr3 = &v13;
                    --ptr3;
                    *ptr3 = &loc_4154EC;
                    /*BAD_CALL!*/ sub_411258(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2));
                    ptr3 += 2;
                }
            }
            if(param0 == 2) {
                int v18 = param4 ? "Assertion failed: ": "Assertion failed!";
                --ptr3;
                *ptr3 = v18;
                --ptr3;
                *ptr3 = &v9;
                --ptr3;
                *ptr3 = &loc_415524;
                /*BAD_CALL!*/ sub_411258(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2));
                ptr3 += 2;
            }
            --ptr3;
            *ptr3 = &v13;
            --ptr3;
            *ptr3 = &v9;
            --ptr3;
            *ptr3 = &loc_41553A;
            /*BAD_CALL!*/ sub_41120D(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2));
            ptr3 += 2;
            if(param0 == 2) {
                if((*(int*)((char*)&gvar_428D1C + 8) & 0x1)) {
                    --ptr3;
                    *ptr3 = &gvar_425BE0;
                    --ptr3;
                    *ptr3 = &v9;
                    --ptr3;
                    *ptr3 = &loc_415563;
                    /*BAD_CALL!*/ sub_41120D(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2));
                    ptr3 += 2;
                }
                --ptr3;
                *ptr3 = &gvar_425BDC;
                --ptr3;
                *ptr3 = &v9;
                --ptr3;
                *ptr3 = &loc_415577;
                /*BAD_CALL!*/ sub_41120D(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2));
                ptr3 += 2;
            }
            --ptr3;
            *ptr3 = &v9;
            --ptr3;
            if(param1) {
                *ptr3 = param2;
                --ptr3;
                *ptr3 = param1;
                --ptr3;
                *ptr3 = "%s(%d) : %s";
                --ptr3;
                *ptr3 = 0x1000;
                --ptr3;
                *ptr3 = &v11;
                --ptr3;
                *ptr3 = &loc_4155A5;
                int v19 = /*BAD_CALL!*/ sub_41D540(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(ptr3 + 4), *(int*)(ptr3 + 5), *(ptr3 + 6));
                ptr3 += 6;
                if(v19 < 0) {
                    --ptr3;
                    *ptr3 = "_CrtDbgReport: String too long or IO Error";
                    --ptr3;
                    *ptr3 = &v11;
                    --ptr3;
                    *ptr3 = &loc_4155BD;
                    /*BAD_CALL!*/ sub_411258(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2));
                    ptr3 += 2;
                }
            }
            else {
                *ptr3 = &v11;
                --ptr3;
                *ptr3 = &loc_4155D5;
                /*BAD_CALL!*/ sub_411258(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2));
                ptr3 += 2;
            }
            if(gvar_42AF7C) {
                unsigned int v20 = gvar_42AF7C;
                while(1) {
                    if(!v20) {
                        goto loc_415648;
                    }
                    else {
                        --ptr3;
                        *ptr3 = &v6;
                        --ptr3;
                        *ptr3 = &v11;
                        --ptr3;
                        *ptr3 = param0;
                        unsigned int v21 = v20;
                        --ptr3;
                        *ptr3 = &loc_41561F;
                        int v22 = /*BAD_CALL!*/ *(int*)(v21 + 12)(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3));
                        ptr3 += 3;
                        if(!v22) {
                            goto loc_4155F8;
                        }
                        if(param0 == 2) {
                            --ptr3;
                            *ptr3 = &gvar_428D18;
                            --ptr3;
                            *ptr3 = &loc_415637;
                            /*BAD_CALL!*/ InterlockedDecrement(*(LONG**)(ptr3 + 1));
                            break;
                        loc_4155F8:
                            v20 = *(unsigned int*)(v20 + 4);
                        }
                        else {
                            break;
                        }
                    }
                }
            }
            else {
            loc_415648:
                if(gvar_42AF6C) {
                    --ptr3;
                    *ptr3 = &v6;
                    --ptr3;
                    *ptr3 = &v11;
                    --ptr3;
                    *ptr3 = param0;
                    --ptr3;
                    *ptr3 = &loc_41565F;
                    int v23 = /*BAD_CALL!*/ gvar_42AF6C(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3));
                    ptr3 += 3;
                    if(!v23) {
                        goto loc_41568C;
                    }
                    else if(param0 == 2) {
                        --ptr3;
                        *ptr3 = &gvar_428D18;
                        --ptr3;
                        *ptr3 = &loc_415677;
                        /*BAD_CALL!*/ InterlockedDecrement(*(LONG**)(ptr3 + 1));
                    }
                }
                else {
                loc_41568C:
                    if((BOOL)(*(unsigned int*)(param0 * 4 + (int)&gvar_428D1C) & 0x1) && *(unsigned int*)(param0 * 4 + (int)&gvar_428D28) != -1) {
                        --ptr3;
                        *ptr3 = 0;
                        --ptr3;
                        *ptr3 = &v1;
                        --ptr3;
                        *ptr3 = &v11;
                        --ptr3;
                        *ptr3 = &loc_4156B0;
                        int v24 = /*BAD_CALL!*/ sub_411235(*(int*)(ptr3 + 1));
                        *ptr3 = v24;
                        --ptr3;
                        *ptr3 = &v11;
                        --ptr3;
                        *ptr3 = *(unsigned int*)(param0 * 4 + (int)&gvar_428D28);
                        --ptr3;
                        *ptr3 = &loc_4156CC;
                        /*BAD_CALL!*/ WriteFile(*(HANDLE*)(ptr3 + 1), *(LPCVOID*)(ptr3 + 2), *(DWORD*)(ptr3 + 3), *(LPDWORD*)(ptr3 + 4), *(LPOVERLAPPED*)(ptr3 + 5));
                    }
                    if((*(unsigned int*)(param0 * 4 + (int)&gvar_428D1C) & 0x2)) {
                        --ptr3;
                        *ptr3 = &v11;
                        --ptr3;
                        *ptr3 = &loc_4156E8;
                        /*BAD_CALL!*/ OutputDebugStringA(*(LPCSTR*)(ptr3 + 1));
                    }
                    if((*(unsigned int*)(param0 * 4 + (int)&gvar_428D1C) & 0x4)) {
                        if(param2) {
                            --ptr3;
                            *ptr3 = 10;
                            --ptr3;
                            *ptr3 = &v7;
                            --ptr3;
                            *ptr3 = param2;
                            --ptr3;
                            *ptr3 = &loc_41570F;
                            int v25 = /*BAD_CALL!*/ sub_41D1A0(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3));
                            ptr3 += 3;
                            v0 = v25;
                        }
                        else {
                            v0 = 0;
                        }
                        --ptr3;
                        *ptr3 = &v13;
                        --ptr3;
                        *ptr3 = param3;
                        --ptr3;
                        *ptr3 = v0;
                        --ptr3;
                        *ptr3 = param1;
                        --ptr3;
                        *ptr3 = param0;
                        --ptr3;
                        *ptr3 = &loc_415743;
                        int v26 = /*BAD_CALL!*/ sub_415880(*(ptr3 + 1), *(ptr3 + 2), *(ptr3 + 3), *(ptr3 + 4), *(void**)(ptr3 + 5));
                        ptr3 += 5;
                        v6 = v26;
                        if(param0 == 2) {
                            --ptr3;
                            *ptr3 = &gvar_428D18;
                            --ptr3;
                            *ptr3 = &loc_41575A;
                            /*BAD_CALL!*/ InterlockedDecrement(*(LONG**)(ptr3 + 1));
                        }
                    }
                    else if(param0 == 2) {
                        --ptr3;
                        *ptr3 = &gvar_428D18;
                        --ptr3;
                        *ptr3 = &loc_415770;
                        /*BAD_CALL!*/ InterlockedDecrement(*(LONG**)(ptr3 + 1));
                    }
                }
            }
        }
    }
    void* ptr7 = ptr2;
    --ptr3;
    *ptr3 = &loc_41577A;
    /*BAD_CALL!*/ sub_411087((int)ptr7);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_415880(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3, void* param4) {
    void* ptr0;
    int result;
    char v0;
    void* ptr1;
    char v1;
    int v2;
    int v3;
    sub_414C20(v3);
    if(!param4) {
        unsigned int v4 = (unsigned int)sub_415390(2, "dbgrpt.c", 570, 0, "szUserMessage != NULL");
        if(v4 == 1) {
            sub_414FE0();
        }
    }
    char v5 = 0;
    DWORD v6 = GetModuleFileNameA(NULL, &v0, 260);
    if(!v6) {
        sub_411258((int)&v0, "<program name unknown>");
    }
    unsigned int v7 = (unsigned int)sub_411235((int)&v0);
    if(v7 > 64) {
        int v8 = sub_411235((int)ptr1);
        sub_411492(&gvar_425B78, &gvar_425B78, 3);
    }
    unsigned int v9 = param3;
    if(v9) {
        unsigned int v10 = (unsigned int)sub_411235((int)v9);
        if(v10 > 64) {
            int v11 = sub_411235((int)v9);
            sub_411492(3, &gvar_425B78, 3);
        }
    }
    unsigned int v12 = param0 != 2 ? &gvar_4250EC: "\n\nFor information on how your program can cause an assertion\nfailure, see the Visual C++ documentation on asserts.";
    void* ptr2 = (int)*(char*)param4 ? param4: (void*)&gvar_4250EC;
    void* ptr3 = !(int)*(char*)param4 || param0 != 2 ? (void*)&gvar_4250EC: "Expression: ";
    void* ptr4 = (int)*(char*)param4 ? (void*)&gvar_425B54: (void*)&gvar_4250EC;
    unsigned int v13 = param2 ? param2: &gvar_4250EC;
    void* ptr5 = param2 ? "\nLine: ": (void*)&gvar_4250EC;
    unsigned int v14 = param1 ? param1: &gvar_4250EC;
    int v15 = param1 ? "\nFile: ": &gvar_4250EC;
    unsigned int v16 = v9 ? v9: &gvar_4250EC;
    int v17 = v9 ? "\nModule: ": &gvar_4250EC;
    int v18 = sub_41D540((int)&v1, 0x1000, "Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)", *(unsigned int*)(param0 * 4 + (int)&gvar_428D34), ptr2, v17, v16, v15, v14, ptr5, v13, ptr4, ptr3, ptr2, v12);
    if(v18 < 0) {
        sub_411258((int)&v1, "_CrtDbgReport: String too long or IO Error");
    }
    int v19 = sub_41CDB0((int)&v1, "Microsoft Visual C++ Debug Library", 0x12012);
    unsigned int* ptr6 = &v2;
    int v20 = v19;
    if(v20 == 3) {
        sub_41DA00(22);
        ptr6 = &ptr1;
        sub_413250(3);
    }
    void* ptr7 = ptr0;
    --ptr6;
    *ptr6 = &loc_415B7B;
    /*BAD_CALL!*/ sub_411087((int)ptr7);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_415C40(void* param0, char* param1, unsigned int param2, int* param3, unsigned int* param4) {
    int* ptr0;
    int* ptr1;
    char v0;
    char v1;
    int v2;
    char v3;
    int v4;
    char v5;
    int v6;
    char v7;
    void* ptr2;
    int v8;
    char v9;
    int v10;
    int v11;
    int v12 = v11;
    sub_414C20(v2);
    int* ptr3 = param3;
    char* ptr4 = param1;
    unsigned int* ptr5 = param4;
    void* ptr6 = param0;
    *ptr3 = 0;
    int* ptr7 = &v4;
    *ptr4 = 0;
    void* ptr8 = ptr6;
    int result = 0;
    *ptr5 = 0;
    int v13 = sub_4160C0((int)ptr8);
    if(v13) {
        unsigned int v14 = gvar_429838;
        int* ptr9 = (int*)((int)ptr6 - *(int*)(v13 + 4));
        char v15 = v14 ? 0: 1;
        *ptr5 = *(LPVOID*)(v13 + 24);
        result = 1;
        if(!v15) {
        loc_415D86:
            LPVOID v16 = (LPVOID)*(short*)(*(int*)(v13 + 16) + 6);
            int v17 = 0;
            LPVOID v18 = v16;
            if((unsigned short)v16 != 0) {
                v2 = *(int*)(v13 + 20);
                do {
                    int v19 = (unsigned int)(unsigned short)v17 * 5 * 8;
                    if(*(unsigned int*)(v19 + v2 + 12) >= (unsigned int)ptr9) {
                        ++v17;
                        gvar_429800(v10);
                        gvar_429804(v6);
                        gvar_429808(v8);
                        return result;
                    }
                    int v20 = *(int*)(v13 + 20) + v19;
                    if((unsigned int)(LPVOID)((int)ptr9 - *(int*)(v20 + 12)) >= *(unsigned int*)(v20 + 16)) {
                        v16 = v18;
                        ++v17;
                        gvar_429800(v10);
                        gvar_429804(v6);
                        gvar_429808(v8);
                        return result;
                    }
                    ptr1 = (int*)((int)ptr9 - *(int*)((unsigned int)(unsigned short)v17 * 40 + v2 + 12));
                    ptr0 = (int*)((int)ptr9 - *(int*)((unsigned int)(unsigned short)v17 * 40 + v2 + 12));
                    if(ptr1 != -1) {
                        sub_414C20(v2);
                        ptr8 = &v8;
                        DWORD v21 = &v9;
                        int* ptr10 = &v0;
                        int v22 = gvar_4297F0(*(int*)(v13 + 24), &gvar_4250EC, (int)&v5, (int)ptr7, (int)&v4, (int)&v0, (int)&v9);
                        if(v22) {
                            int v23 = gvar_4297F4(v8, &gvar_425E20, 0, (int)&v6);
                            if(v23) {
                                int v24 = gvar_4297F8(v6, v17 + 1, (int)ptr1, (int)&v10, (int)(int*)((char*)&param4 + 2), (int)&v7, (int)&ptr2);
                                if(v24) {
                                    int v25 = gvar_4297FC(v10, 0, (int)&ptr2);
                                    if(v25) {
                                        void* ptr11 = ptr2;
                                        if(ptr11) {
                                            HANDLE hHeap = GetProcessHeap();
                                            LPVOID lpMem = HeapAlloc(hHeap, 0, (SIZE_T)ptr11);
                                            v18 = lpMem;
                                            int v26 = gvar_4297FC(v10, (int)lpMem, (int)&ptr2);
                                            if(v26) {
                                                int v27 = (unsigned int)*(short*)lpMem;
                                                int* ptr12 = NULL;
                                                ptr7 = NULL;
                                                if(v27 <= 0) {
                                                loc_415F96:
                                                    HANDLE hHeap1 = GetProcessHeap();
                                                    HeapFree(hHeap1, 0, lpMem);
                                                }
                                                else {
                                                alab1:
                                                    do {
                                                        int v28 = *((int*)((int)(int*)((int)ptr12 * 4) + (int)lpMem) + 1);
                                                        unsigned int v29 = (unsigned int)*(short*)(v28 + (int)lpMem);
                                                        int* ptr13 = (int*)(v28 + (int)lpMem);
                                                        int* ptr14 = (int*)(v29 * 4 + (int)ptr13) + 1;
                                                        char* ptr15 = (char*)(v29 * 8 + (int)ptr14);
                                                        unsigned int v30 = 0;
                                                        if((int)v29 > 0) {
                                                            do {
                                                                int* ptr16 = ptr0;
                                                                if(*(unsigned int*)(v30 * 8 + (int)ptr14) <= (unsigned int)ptr16 && *(unsigned int*)((int*)(v30 * 8 + (int)ptr14) + 1) >= (unsigned int)ptr16) {
                                                                    int v31 = *((int*)(v30 * 4 + (int)ptr13) + 1);
                                                                    unsigned int v32 = (unsigned int)*(short*)((char*)(v31 + (int)lpMem) + 2);
                                                                    int* ptr17 = (int*)(v31 + (int)lpMem);
                                                                    ptr0 = (int*)(v32 * 4 + (int)ptr17) + 1;
                                                                    int* ptr18 = (int*)0xFFFFFFFF;
                                                                    int* ptr19 = NULL;
                                                                    ptr7 = (int*)0xFFFFFFFF;
                                                                    if((int)v32 > 0) {
                                                                        do {
                                                                            int* ptr20 = (int*)((int)ptr16 - *((int*)((int)(int*)((int)ptr19 * 4) + (int)ptr17) + 1));
                                                                            if(ptr20 < ptr18) {
                                                                                ptr7 = ptr19;
                                                                                ptr18 = ptr20;
                                                                            }
                                                                            ptr19 = (int*)((char*)ptr19 + 1);
                                                                        }
                                                                        while((int)ptr19 < (int)v32);
                                                                        int* ptr21 = ptr7;
                                                                        if((int)ptr21 >= 0) {
                                                                            int v33 = (unsigned int)*(short*)((int)(int*)((int)ptr21 * 2) + (int)ptr0);
                                                                            unsigned int v34 = param2;
                                                                            *param3 = v33;
                                                                            char* ptr22 = ptr15;
                                                                            v33 = (unsigned int)*ptr22 | ((unsigned int)((v33 >>> 8) & 0xffffff) << 8);
                                                                            unsigned int v35 = 0;
                                                                            if((unsigned char)v33) {
                                                                                int* ptr23 = (int*)((int)param1 - (int)ptr22);
                                                                                while(1) {
                                                                                    if((int)v35 >= (int)v34) {
                                                                                        goto loc_415F86;
                                                                                    }
                                                                                    else {
                                                                                        v33 = (unsigned int)*ptr22 | ((unsigned int)((v33 >>> 8) & 0xffffff) << 8);
                                                                                        *(char*)((int)ptr22 + (int)ptr23) = *ptr22;
                                                                                        v33 = (unsigned int)*(ptr22 + 1) | ((unsigned int)((v33 >>> 8) & 0xffffff) << 8);
                                                                                        ++v35;
                                                                                        ++ptr22;
                                                                                        if(!(unsigned char)v33) {
                                                                                            goto loc_415F84;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                            loc_415F84:
                                                                                if((int)v35 >= (int)v34) {
                                                                                loc_415F86:
                                                                                    v35 = v34 - 1;
                                                                                }
                                                                            }
                                                                            *(char*)(v35 + (int)param1) = 0;
                                                                        }
                                                                    }
                                                                    lpMem = v18;
                                                                    break alab1;
                                                                }
                                                                else {
                                                                    ++v30;
                                                                }
                                                            }
                                                            while((int)v30 < (int)v29);
                                                            ptr12 = ptr7;
                                                            goto loc_415F09;
                                                        }
                                                        else {
                                                        loc_415F09:
                                                            ptr12 = (int*)((char*)ptr12 + 1);
                                                            v1 = (int)(unsigned int)*(short*)lpMem > (int)ptr12;
                                                            v3 = (int)(int*)((int)(int*)((int)(int*)((int)ptr12 - (unsigned int)*(short*)lpMem) ^ (int)ptr12) & (int)(int*)((unsigned int)*(short*)lpMem ^ (int)ptr12)) < 0;
                                                            ptr7 = ptr12;
                                                        }
                                                        break;
                                                    }
                                                    while(v1 != v3);
                                                    goto loc_415F96;
                                                }
                                            }
                                        }
                                    }
                                    gvar_429800(v10);
                                }
                                gvar_429804(v6);
                            }
                            gvar_429808(v8);
                            return result;
                        }
                    }
                    return result;
                }
                while((unsigned short)v16 > (unsigned short)v17);
                return result;
            }
        }
        else if(!gvar_4297E0) {
            HMODULE hModule = sub_416570();
            gvar_4297E0 = hModule;
            if(hModule) {
                FARPROC v36 = /*BAD_CALL!*/ GetProcAddress(hModule, "PDBOpenValidate3");
                gvar_4297F0 = v36;
                if(v36) {
                    v36 = /*BAD_CALL!*/ GetProcAddress(gvar_4297E0, "PDBOpenDBI");
                    gvar_4297F4 = v36;
                    if(v36) {
                        v36 = /*BAD_CALL!*/ GetProcAddress(gvar_4297E0, "DBIQueryModFromAddr");
                        gvar_4297F8 = v36;
                        if(v36) {
                            v36 = /*BAD_CALL!*/ GetProcAddress(gvar_4297E0, "ModQueryLines");
                            gvar_4297FC = v36;
                            if(v36) {
                                v36 = /*BAD_CALL!*/ GetProcAddress(gvar_4297E0, "ModClose");
                                gvar_429800 = v36;
                                if(v36) {
                                    v36 = /*BAD_CALL!*/ GetProcAddress(gvar_4297E0, "DBIClose");
                                    gvar_429804 = v36;
                                    if(v36) {
                                        v36 = /*BAD_CALL!*/ GetProcAddress(gvar_4297E0, "PDBClose");
                                        gvar_429808 = v36;
                                        if(v36) {
                                            gvar_429838 = 1;
                                            goto loc_415D86;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                return 0;
            }
        }
    }
    return result;
}

FARPROC sub_4160C0(unsigned int param0) {
    DWORD v0;
    int v1;
    unsigned int* ptr0;
    HMODULE hModule;
    int __stdcall f() v2;
    int __stdcall f() v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int __stdcall f() v9;
    int v10;
    unsigned int v11;
    DWORD v12;
    int v13;
    char v14;
    FARPROC result1 = gvar_429824;
    char v15 = result1 ? 0: 1;
    int v16 = v10;
    FARPROC result = result1;
    if(!v15) {
        do {
            v2 = result[1];
            unsigned int v17 = param0;
            char v18 = v2 == v17;
            if((v2 < v17 || v18)) {
                unsigned int v19 = v17 - v2;
                if(result[2] >= v19) {
                    return result;
                }
            }
            result = (FARPROC)result[7];
        }
        while(result);
        do {
            v9 = result1[7];
            LPVOID lpMem = result1;
            HANDLE hHeap = GetProcessHeap();
            /*BAD_CALL!*/ HeapFree(hHeap, 0, lpMem);
            result1 = (FARPROC)v9;
            gvar_429824 = (FARPROC)v9;
        }
        while(v9);
    }
    else {
        if(!gvar_4297E8) {
            HMODULE v20 = LoadLibraryA("KERNEL32.DLL");
            gvar_4297EC = v20;
            hModule = LoadLibraryA("IMAGEHLP.DLL");
            char v21 = gvar_4297EC ? 0: 1;
            gvar_4297E8 = hModule;
            if(!v21 && hModule) {
                hModule = (HMODULE)/*BAD_CALL!*/ GetProcAddress(hModule, "ImageNtHeader");
                gvar_42980C = hModule;
                if(hModule) {
                    FARPROC v22 = /*BAD_CALL!*/ GetProcAddress(gvar_4297EC, "CreateToolhelp32Snapshot");
                    gvar_429818 = v22;
                    if(v22) {
                        hModule = (HMODULE)/*BAD_CALL!*/ GetProcAddress(gvar_4297EC, "Module32First");
                        gvar_42981C = hModule;
                        if(!hModule) {
                            return NULL;
                        }
                        hModule = (HMODULE)/*BAD_CALL!*/ GetProcAddress(gvar_4297EC, "Module32Next");
                        gvar_429820 = hModule;
                        if(!hModule) {
                            return NULL;
                        }
                        goto loc_416207;
                    }
                    else {
                        hModule = /*BAD_CALL!*/ LoadLibraryA("PSAPI.DLL");
                        gvar_4297E4 = hModule;
                        if(!hModule) {
                            return NULL;
                        }
                        hModule = (HMODULE)/*BAD_CALL!*/ GetProcAddress(hModule, "EnumProcessModules");
                        gvar_429814 = hModule;
                        if(!hModule) {
                            return NULL;
                        }
                        result = /*BAD_CALL!*/ GetProcAddress(gvar_4297E4, "GetModuleInformation");
                        gvar_429810 = result;
                    }
                    if(!result) {
                        return 0;
                    }
                    goto loc_416207;
                }
            }
        }
        else {
        loc_416207:
            unsigned int v23 = gvar_429818;
            if(!v23) {
                HANDLE v24 = GetCurrentProcess();
                ptr0 = &v5;
                hModule = (HMODULE)gvar_429814((int)v24, (int)&v6, 0x800, (int)&v11);
                if(hModule) {
                    unsigned int v25 = v11 >>> 2;
                    unsigned int v26 = 0;
                    v11 = v25;
                    if(v25 == 0) {
                        goto loc_41633B;
                    }
                    else {
                        do {
                            int v27 = *(int*)(v26 * 4 + (int)&v6);
                            --ptr0;
                            *ptr0 = 12;
                            --ptr0;
                            *ptr0 = &v7;
                            --ptr0;
                            *ptr0 = v27;
                            --ptr0;
                            *ptr0 = v24;
                            --ptr0;
                            *ptr0 = &loc_416269;
                            hModule = (HMODULE)/*BAD_CALL!*/ gvar_429810(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2), *(int*)(ptr0 + 3), *(int*)(ptr0 + 4));
                            if(!hModule) {
                                return NULL;
                            }
                            --ptr0;
                            *ptr0 = 32;
                            --ptr0;
                            *ptr0 = 0;
                            --ptr0;
                            *ptr0 = &loc_41627B;
                            HANDLE v28 = /*BAD_CALL!*/ GetProcessHeap();
                            --ptr0;
                            *ptr0 = v28;
                            --ptr0;
                            *ptr0 = &loc_41627E;
                            hModule = (HMODULE)/*BAD_CALL!*/ HeapAlloc(*(HANDLE*)(ptr0 + 1), *(DWORD*)(ptr0 + 2), *(SIZE_T*)(ptr0 + 3));
                            if(!hModule) {
                                goto loc_416353;
                            }
                            else {
                                hModule[3].unused = *(int*)(v26 * 4 + (int)&v6);
                                hModule[1].unused = v7;
                                int v29 = gvar_429824;
                                hModule[2].unused = (int)v3;
                                hModule[6].unused = 0;
                                hModule[7].unused = v29;
                                ++v26;
                                gvar_429824 = hModule;
                            }
                        }
                        while(v26 < v11);
                        goto loc_416342;
                    }
                }
            }
            else {
                HMODULE v30 = (HMODULE)v23(8, 0);
                if(v30 != -1) {
                    sub_414C20((int)result1);
                    ptr0 = &v5;
                    int v31 = gvar_42981C((int)v30, (int)&v12, 0x224);
                    if(v31) {
                        do {
                            --ptr0;
                            *ptr0 = 32;
                            --ptr0;
                            *ptr0 = 0;
                            --ptr0;
                            *ptr0 = &loc_4162FA;
                            HANDLE v32 = /*BAD_CALL!*/ GetProcessHeap();
                            --ptr0;
                            *ptr0 = v32;
                            --ptr0;
                            *ptr0 = &loc_4162FD;
                            LPVOID v33 = /*BAD_CALL!*/ HeapAlloc(*(HANDLE*)(ptr0 + 1), *(DWORD*)(ptr0 + 2), *(SIZE_T*)(ptr0 + 3));
                            if(v33) {
                                *(int*)((int)v33 + 12) = v13;
                                *(int*)((int)v33 + 4) = v6;
                                int v34 = v4;
                                unsigned int v35 = gvar_429824;
                                --ptr0;
                                *ptr0 = &v12;
                                --ptr0;
                                *ptr0 = v30;
                                *(int*)((int)v33 + 8) = v34;
                                *(int*)((int)v33 + 24) = 0;
                                *(unsigned int*)((int)v33 + 28) = v35;
                                gvar_429824 = v33;
                                --ptr0;
                                *ptr0 = &loc_416330;
                                v1 = /*BAD_CALL!*/ gvar_429820(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2));
                            }
                            else {
                                --ptr0;
                                *ptr0 = v30;
                                --ptr0;
                                *ptr0 = &loc_416353;
                                /*BAD_CALL!*/ CloseHandle(*(HANDLE*)(ptr0 + 1));
                                goto loc_416353;
                            }
                        }
                        while(v1);
                    }
                    --ptr0;
                    *ptr0 = v30;
                    --ptr0;
                    *ptr0 = &loc_41633B;
                    /*BAD_CALL!*/ CloseHandle(*(HANDLE*)(ptr0 + 1));
                loc_41633B:
                    hModule = gvar_429824;
                loc_416342:
                    HMODULE v36 = hModule;
                    if(hModule) {
                    loc_4163B3:
                        do {
                            --ptr0;
                            *ptr0 = v36[1].unused;
                            --ptr0;
                            *ptr0 = &loc_4163BA;
                            int v37 = /*BAD_CALL!*/ gvar_42980C(*(int*)(ptr0 + 1));
                            v36[4].unused = v37;
                            int v38 = (unsigned int)*(short*)(v37 + 20);
                            v36[5].unused = v37 + v38 + 24;
                            --ptr0;
                            *ptr0 = &loc_4163D2;
                            /*BAD_CALL!*/ sub_414C20(v38);
                            unsigned int* ptr1 = ptr0;
                            --ptr0;
                            *ptr0 = 0x200;
                            *(char*)(ptr1 + 128) = 0;
                            int v39 = v36[3].unused;
                            --ptr0;
                            *ptr0 = ptr1;
                            --ptr0;
                            *ptr0 = v39;
                            --ptr0;
                            *ptr0 = &loc_4163EB;
                            v0 = /*BAD_CALL!*/ GetModuleFileNameA(*(HMODULE*)(ptr0 + 1), *(LPSTR*)(ptr0 + 2), *(DWORD*)(ptr0 + 3));
                            if(v0) {
                                int v40 = 0;
                                if(*(char*)ptr1) {
                                    do {
                                        v14 = *(char*)((char*)(v40 + (int)ptr1) + 1);
                                        ++v40;
                                    }
                                    while(v14);
                                }
                                --ptr0;
                                *ptr0 = v40 + 1;
                                --ptr0;
                                *ptr0 = 0;
                                --ptr0;
                                *ptr0 = &loc_416413;
                                HANDLE v41 = /*BAD_CALL!*/ GetProcessHeap();
                                --ptr0;
                                *ptr0 = v41;
                                --ptr0;
                                *ptr0 = &loc_416416;
                                int v42 = /*BAD_CALL!*/ 182132(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2), *(int*)(ptr0 + 3));
                                v36[6].unused = v42;
                                if(!v42) {
                                    break;
                                }
                                else {
                                    int v43 = 0;
                                    do {
                                        v2 = (int __stdcall f())v36[6].unused;
                                        *(char*)(v43 + v2) = *(char*)(v43 + (int)ptr1);
                                        v2 = (unsigned int)*(char*)(v43 + (int)ptr1) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
                                        ++v43;
                                    }
                                    while((unsigned char)v2);
                                    v36 = (HMODULE)v36[7].unused;
                                    if(v36) {
                                        goto loc_4163B3;
                                    }
                                    else {
                                        hModule = gvar_429824;
                                        goto loc_416448;
                                    }
                                }
                            }
                        }
                        while(v0);
                    loc_416353:
                        hModule = gvar_429824;
                    loc_41635A:
                        if(hModule) {
                            do {
                                int v44 = hModule[6].unused;
                                v8 = hModule[7].unused;
                                if(v44) {
                                    --ptr0;
                                    *ptr0 = v44;
                                    --ptr0;
                                    *ptr0 = 0;
                                    --ptr0;
                                    *ptr0 = &loc_416373;
                                    HANDLE v45 = /*BAD_CALL!*/ GetProcessHeap();
                                    --ptr0;
                                    *ptr0 = v45;
                                    --ptr0;
                                    *ptr0 = &loc_41637A;
                                    /*BAD_CALL!*/ HeapFree(*(HANDLE*)(ptr0 + 1), *(DWORD*)(ptr0 + 2), *(LPVOID*)(ptr0 + 3));
                                    hModule = gvar_429824;
                                }
                                --ptr0;
                                *ptr0 = hModule;
                                --ptr0;
                                *ptr0 = 0;
                                --ptr0;
                                *ptr0 = &loc_416388;
                                HANDLE v46 = /*BAD_CALL!*/ GetProcessHeap();
                                --ptr0;
                                *ptr0 = v46;
                                --ptr0;
                                *ptr0 = &loc_41638F;
                                /*BAD_CALL!*/ HeapFree(*(HANDLE*)(ptr0 + 1), *(DWORD*)(ptr0 + 2), *(LPVOID*)(ptr0 + 3));
                                hModule = (HMODULE)v8;
                                gvar_429824 = (HMODULE)v8;
                            }
                            while(v8);
                        }
                        return NULL;
                    }
                loc_416448:
                    result1 = (FARPROC)hModule;
                    if(hModule) {
                        do {
                            v2 = result1[1];
                            if(v2 <= param0 && param0 - v2 <= result1[2]) {
                                return result1;
                            }
                            result1 = (FARPROC)result1[7];
                        }
                        while(result1);
                        goto loc_41635A;
                    }
                }
            }
        }
        result = NULL;
    }
    return result;
}

HMODULE sub_416570() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char v6;
    char v7;
    int v8;
    int v9;
    char v10;
    char v11;
    int v12;
    int v13;
    char v14 = gvar_42983C ? 0: 1;
    int v15 = v8;
    if(v14) {
        LPCSTR lpLibFileName = gvar_428D48;
        gvar_42983C = 1;
        HMODULE result = LoadLibraryA(lpLibFileName);
        if(!result) {
            HMODULE hModule = LoadLibraryA("ADVAPI32.DLL");
            if(!hModule) {
                return NULL;
            }
            HMODULE v16 = (HMODULE)GetProcAddress(hModule, "RegOpenKeyExA");
            HMODULE v17 = v16;
            if(!v16) {
                return NULL;
            }
            HMODULE v18 = (HMODULE)GetProcAddress(hModule, "RegQueryValueExA");
            if(!v18) {
                return NULL;
            }
            v16 = (HMODULE)GetProcAddress(hModule, "RegCloseKey");
            HMODULE v19 = v16;
            if(!v16) {
                return NULL;
            }
            int v20 = v17(0x80000002, "SOFTWARE\\Microsoft\\VisualStudio\\7.1\\Setup\\VS", 0, 1, (int)&v9);
            if(v20) {
                FreeLibrary(hModule);
                return NULL;
            }
            *(int*)&v10 = &loc_416624;
            v16 = (HMODULE)/*BAD_CALL!*/ v18(v9, "EnvironmentDirectory", 0, (int)&v11, 0, (int)&v0);
            if(v16) {
                return NULL;
            }
            v0 += 13;
            *(int*)&v10 = &loc_41663C;
            /*BAD_CALL!*/ sub_414C20(v5);
            *(int**)&v10 = &v0;
            int v21 = v18(v9, "EnvironmentDirectory", 0, (int)&v11, (int)&v1, *(int*)&v10);
            v19(v9, v2, v12, v3, v13, v4, *(int*)&v10);
            v16 = (HMODULE)FreeLibrary(hModule);
            if(v21) {
                return NULL;
            }
            v16 = (unsigned int)92 | ((unsigned int)(int*)((int)(int*)((int)v16 >>> 8) & 0xffffff) << 8);
            if(*(char*)((int)&v7 + v0) != 92) {
                *(char*)((int)&v6 + v0) = (unsigned char)v16;
            }
            else {
                --v0;
            }
            LPCSTR v22 = &v1;
            int* ptr0 = (int*)(gvar_428D48 - (int)&v1);
            int counter = 12;
            do {
                v22[v0] = v22[ptr0];
                ++v22;
                --counter;
            }
            while(counter);
            result = LoadLibraryA(&v1);
        }
        return result;
    }
    return NULL;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_416700(int param0) {
    unsigned int v0 = sub_417AF0(gvar_42B0F4, 2);
    if(gvar_42B0F0 - gvar_42B0F4 + 4 > v0) {
        unsigned int v1 = v0 < 0x800 ? v0: 0x800;
        unsigned int v2 = (unsigned int)sub_416E80((int)gvar_42B0F4, (int)(v1 + v0), 2, "onexit.c", 125);
        if(!v2) {
            v2 = (unsigned int)sub_416E80((int)gvar_42B0F4, v0 + 16, 2, "onexit.c", 131);
            if(!v2) {
                return 0;
            }
        }
        gvar_42B0F0 = (unsigned int)(((gvar_42B0F0 - gvar_42B0F4) >> 2) * 4 + v2);
        gvar_42B0F4 = v2;
    }
    *gvar_42B0F0 = param0;
    gvar_42B0F0 += 4;
    return param0;
}

int sub_416820(int param0) {
    int v0 = sub_416700(param0);
    return -1 - ((unsigned int)v0 > 0 ? 0xffffffff: 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_416840() {
    int result;
    unsigned int v0 = (unsigned int)sub_4168D0(128, 2, "onexit.c", 198);
    gvar_42B0F4 = v0;
    if(!gvar_42B0F4) {
        result = 24;
    }
    else {
        *gvar_42B0F4 = 0;
        gvar_42B0F0 = gvar_42B0F4;
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4168A0(int param0) {
    int v0;
    int v1 = v0;
    return sub_416940(param0, (int)gvar_4298F4, 1, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_416910(int param0, int param1) {
    return sub_416940(param0, param1, 1, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4169A0(int param0) {
    return sub_4169C0(param0, 1, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_4169C0(void* param0, unsigned int param1, unsigned int param2, void* param3) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int* result;
    int* ptr0;
    int* ptr1;
    int* ptr2;
    void* ptr3;
    int* ptr4 = &ptr1;
    int* ptr5 = &ptr1;
    int* ptr6 = &ptr2;
    char v6 = &ptr0 == 20;
    char v7 = (int)&ptr2 < 0;
    char v8 = __parity__((unsigned char)&ptr0 - 20);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x10) ^ (int)&ptr2) >>> 4) & 0x1);
    char v10 = (unsigned int)&ptr1 < 16;
    char v11 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&ptr2) & (int)(int*)((int)&ptr1 ^ 0x10)) < 0;
    unsigned int v12 = 0;
    char v13 = gvar_429858 ? 0: 1;
    char v14 = gvar_429858 >= 0x80000000;
    char v15 = __parity__((unsigned char)gvar_429858);
    char v16 = gvar_429858 < 0;
    char v17 = 0;
    char v18 = 0;
    if(!v16 && !v13) {
        unsigned int v19 = gvar_429858;
        unsigned int v20 = v19 - 1;
        char v21 = gvar_429848 == v20;
        char v22 = (int)gvar_429848 < (int)v20;
        char v23 = __parity__((unsigned char)gvar_429848 - (unsigned char)v20);
        char v24 = gvar_429848 < v20;
        char v25 = (int)(((gvar_429848 - v20) ^ gvar_429848) & (gvar_429848 ^ v20)) < 0;
        char v26 = (((gvar_429848 - v20) ^ (gvar_429848 ^ v20)) >>> 4) & 0x1;
        if(v21) {
            ptr6 = &ptr3;
            int v27 = sub_417DB0();
            char v28 = v27 ? 0: 1;
            char v29 = v27 < 0;
            char v30 = __parity__((unsigned char)v27);
            char v31 = 0;
            char v32 = 0;
            if(v28) {
                result = (int*)sub_415390(2, "dbgheap.c", 346, 0, "_CrtCheckMemory()");
                ptr6 = &ptr2;
                v5 = result == 1;
                v4 = (int)result < 1;
                v3 = __parity__((unsigned char)result - 1);
                v2 = (unsigned int)result < 1;
                v1 = (int)(int*)((int)(int*)((int)(int*)((char*)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                v0 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                if(v5) {
                    interrupt(3);
                }
            }
            gvar_429848 = 0;
        }
        else {
            int* ptr7 = gvar_429848;
            ptr5 = gvar_429848;
            int* ptr8 = (int*)((char*)ptr7 + 1);
            char v33 = ptr8 ? 0: 1;
            char v34 = (int)ptr8 < 0;
            char v35 = __parity__((unsigned char)ptr8);
            char v36 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr5 ^ 0x1) ^ (int)ptr8) >>> 4) & 0x1);
            char v37 = (unsigned int)ptr5 >= 0xffffffff;
            char v38 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr5) & (int*)~(int)(int*)((int)ptr5 ^ 0x1)) < 0;
            gvar_429848 = ptr8;
        }
    }
    result = gvar_428D50;
    int* ptr9 = gvar_428D50;
    char v39 = gvar_428D54 == -1;
    char v40 = (int)gvar_428D54 < -1;
    char v41 = __parity__((unsigned char)gvar_428D54 - 0xff);
    char v42 = gvar_428D54 < 0xffffffff;
    char v43 = (((gvar_428D54 + 1) ^ gvar_428D54) & ~gvar_428D54) < 0;
    char v44 = (((gvar_428D54 + 1) ^ ~gvar_428D54) >>> 4) & 0x1;
    if(!v39) {
        int* ptr10 = ptr9;
        v5 = gvar_428D54 == ptr10;
        v4 = (int)gvar_428D54 > (int)ptr10;
        v3 = __parity__((unsigned char)ptr10 - (unsigned char)gvar_428D54);
        v2 = gvar_428D54 > (unsigned int)ptr10;
        v1 = (int)(int*)((int)(int*)((int)(int*)((int)ptr10 - gvar_428D54) ^ (int)ptr10) & (int)(int*)(gvar_428D54 ^ (int)ptr10)) < 0;
        v0 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr10 - gvar_428D54) ^ (int)(int*)(gvar_428D54 ^ (int)ptr10)) >>> 4) & 0x1);
        if(v5) {
            interrupt(3);
        }
    }
    void* ptr11 = param3;
    unsigned int v45 = param2;
    int* ptr12 = ptr9;
    unsigned int v46 = param1;
    void* ptr13 = param0;
    int v47 = gvar_428EC0{→sub_41DED0}(1, 0, (int)ptr13, (int)v46, (int)ptr12, (int)v45, (int)ptr11);
    char v48 = v47 ? 0: 1;
    char v49 = v47 < 0;
    char v50 = __parity__((unsigned char)v47);
    char v51 = 0;
    char v52 = 0;
    if(v48) {
        char v53 = param2 ? 0: 1;
        char v54 = param2 >= 0x80000000;
        char v55 = __parity__((unsigned char)param2);
        char v56 = param2 < 0;
        char v57 = 0;
        char v58 = 0;
        if(!v53) {
            void* ptr14 = param3;
            ptr3 = param3;
            unsigned int v59 = param2;
            unsigned int v60 = param2;
            result = (int*)sub_415390(0, 0, 0, 0, "Client hook allocation failure at file %hs line %d.\n");
            ptr6 = &ptr2;
            v5 = result == 1;
            v4 = (int)result < 1;
            v3 = __parity__((unsigned char)result - 1);
            v2 = (unsigned int)result < 1;
            v1 = (int)(int*)((int)(int*)((int)(int*)((char*)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
            v0 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
            if(v5) {
                interrupt(3);
            }
        }
        else {
            result = (int*)sub_415390(0, 0, 0, 0, &gvar_426074);
            ptr6 = &ptr2;
            v5 = result == 1;
            v4 = (int)result < 1;
            v3 = __parity__((unsigned char)result - 1);
            v2 = (unsigned int)result < 1;
            v1 = (int)(int*)((int)(int*)((int)(int*)((char*)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
            v0 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
            if(v5) {
                interrupt(3);
            }
        }
        result = NULL;
    }
    else {
        unsigned int v61 = param1;
        unsigned int v62 = (unsigned int)(unsigned short)v61;
        char v63 = v62 == 2;
        char v64 = (int)v62 < 2;
        char v65 = __parity__((unsigned char)v62 - 2);
        char v66 = v62 < 2;
        char v67 = (((v62 - 2) ^ v62) & (v62 ^ 0x2)) < 0;
        char v68 = (((v62 - 2) ^ (v62 ^ 0x2)) >>> 4) & 0x1;
        if(!v63) {
            unsigned int v69 = gvar_428D4C;
            int v70 = (int)(v69 & 0x1);
            char v71 = v70 ? 0: 1;
            char v72 = v70 < 0;
            char v73 = __parity__((unsigned char)v70);
            char v74 = 0;
            char v75 = 0;
            if(v71) {
                v12 = 1;
            }
        }
        char v76 = param0 == -32;
        char v77 = (int)param0 < -32;
        char v78 = __parity__((unsigned char)param0 - 224);
        char v79 = (unsigned int)param0 < 0xffffffe0;
        char v80 = (int)(int*)((int)(int*)((int)(int*)((int)param0 + 32) ^ (int)param0) & (int)(int*)((int)param0 ^ 0xffffffe0)) < 0;
        char v81 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)param0 + 32) ^ (int)(int*)((int)param0 ^ 0xffffffe0)) >>> 4) & 0x1);
        if((v79 || v76)) {
            void* ptr15 = param0;
            int* ptr16 = (int*)((int)ptr15 + 36);
            char v82 = ptr16 == -32;
            char v83 = (int)ptr16 < -32;
            char v84 = __parity__((unsigned char)ptr16 - 224);
            char v85 = (unsigned int)ptr16 < 0xffffffe0;
            char v86 = (int)(int*)((int)(int*)((int)(ptr16 + 8) ^ (int)ptr16) & (int)(int*)((int)ptr16 ^ 0xffffffe0)) < 0;
            char v87 = (int*)((int)(int*)((int)(int*)((int)(ptr16 + 8) ^ (int)(int*)((int)ptr16 ^ 0xffffffe0)) >>> 4) & 0x1);
            if(!v85 && !v82) {
                goto loc_416AEF;
            }
            else {
                unsigned int v88 = param1;
                unsigned int v89 = (unsigned int)(unsigned short)v88;
                char v90 = v89 == 4;
                char v91 = (int)v89 < 4;
                char v92 = __parity__((unsigned char)v89 - 4);
                char v93 = v89 < 4;
                char v94 = (((v89 - 4) ^ v89) & (v89 ^ 0x4)) < 0;
                char v95 = (((v89 - 4) ^ (v89 ^ 0x4)) >>> 4) & 0x1;
                if(!v90) {
                    char v96 = param1 == 1;
                    char v97 = (int)param1 < 1;
                    char v98 = __parity__((unsigned char)param1 - 1);
                    char v99 = param1 < 1;
                    char v100 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
                    char v101 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
                    if(!v96) {
                        unsigned int v102 = param1;
                        unsigned int v103 = (unsigned int)(unsigned short)v102;
                        char v104 = v103 == 2;
                        char v105 = (int)v103 < 2;
                        char v106 = __parity__((unsigned char)v103 - 2);
                        char v107 = v103 < 2;
                        char v108 = (((v103 - 2) ^ v103) & (v103 ^ 0x2)) < 0;
                        char v109 = (((v103 - 2) ^ (v103 ^ 0x2)) >>> 4) & 0x1;
                        if(!v104) {
                            char v110 = param1 == 3;
                            char v111 = (int)param1 < 3;
                            char v112 = __parity__((unsigned char)param1 - 3);
                            char v113 = param1 < 3;
                            char v114 = (((param1 - 3) ^ param1) & (param1 ^ 0x3)) < 0;
                            char v115 = (((param1 - 3) ^ (param1 ^ 0x3)) >>> 4) & 0x1;
                            if(!v110) {
                                result = (int*)sub_415390(1, 0, 0, 0, &gvar_426074);
                                ptr6 = &ptr2;
                                v5 = result == 1;
                                v4 = (int)result < 1;
                                v3 = __parity__((unsigned char)result - 1);
                                v2 = (unsigned int)result < 1;
                                v1 = (int)(int*)((int)(int*)((int)(int*)((char*)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                                v0 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                                if(v5) {
                                    interrupt(3);
                                }
                            }
                        }
                    }
                }
                ptr2 = (int*)((int)param0 + 36);
                unsigned int* ptr17 = (unsigned int*)sub_41DE40((int)ptr2);
                if(!ptr17) {
                    result = NULL;
                }
                else {
                    ++gvar_428D50;
                    if(v12) {
                        *ptr17 = 0;
                        *(int*)(ptr17 + 1) = 0;
                        *(int*)(ptr17 + 2) = 0;
                        *(int*)(ptr17 + 3) = 0xfedcbabc;
                        *(void**)(ptr17 + 4) = param0;
                        *(int*)(ptr17 + 5) = 3;
                        *(int*)(ptr17 + 6) = 0;
                    }
                    else {
                        gvar_429840 = (int*)(gvar_429840 + (int)param0);
                        gvar_429854 = (int*)(gvar_429854 + (int)param0);
                        if(gvar_429854 > gvar_42984C) {
                            gvar_42984C = gvar_429854;
                        }
                        if(gvar_429850) {
                            *(unsigned int*)(gvar_429850 + 4) = ptr17;
                        }
                        else {
                            gvar_429844 = ptr17;
                        }
                        *ptr17 = gvar_429850;
                        *(int*)(ptr17 + 1) = 0;
                        *(ptr17 + 2) = param2;
                        *(void**)(ptr17 + 3) = param3;
                        *(void**)(ptr17 + 4) = param0;
                        *(ptr17 + 5) = param1;
                        *(ptr17 + 6) = ptr9;
                        gvar_429850 = ptr17;
                    }
                    sub_411195((int)(int*)(ptr17 + 7), (unsigned int)gvar_428D58, 4);
                    sub_411195((int)((int*)((int)ptr17 + (int)param0) + 8), (unsigned int)gvar_428D58, 4);
                    sub_411195((int)(int*)(ptr17 + 8), (unsigned int)gvar_428D5A, (int)param0);
                    result = (int*)(ptr17 + 8);
                }
            }
        }
        else {
        loc_416AEF:
            void* ptr18 = param0;
            ptr3 = param0;
            result = (int*)sub_415390(1, 0, 0, 0, "Invalid allocation size: %Iu bytes.\n");
            ptr6 = &ptr2;
            v5 = result == 1;
            v4 = (int)result < 1;
            v3 = __parity__((unsigned char)result - 1);
            v2 = (unsigned int)result < 1;
            v1 = (int)(int*)((int)(int*)((int)(int*)((char*)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
            v0 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
            if(v5) {
                interrupt(3);
            }
            result = NULL;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
char* sub_416DA0(int param0, int param1) {
    return sub_416DD0(param0, param1, 1, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_416E50(int param0, int param1) {
    int v0;
    int v1 = v0;
    return sub_416E80(param0, param1, 1, 0, 0);
}

void* sub_416E80(void* param0, void* param1, unsigned int param2, unsigned int param3, void* param4) {
    void* ptr0;
    void* ptr1 = ptr0;
    return sub_416EC0(param0, param1, param2, param3, param4, 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
void* sub_416EC0(void* param0, void* param1, unsigned int param2, unsigned int param3, void* param4, unsigned int param5) {
    void* ptr0;
    unsigned int v0;
    unsigned int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    void* result;
    void* ptr1;
    void* ptr2;
    void* ptr3;
    void* ptr4;
    int v8;
    void* ptr5 = &ptr2;
    void* ptr6 = &ptr2;
    int* ptr7 = &ptr3;
    char v9 = &ptr1 == 24;
    char v10 = (int)&ptr3 < 0;
    char v11 = __parity__((unsigned char)&ptr1 - 24);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0x14) ^ (int)&ptr3) >>> 4) & 0x1);
    char v13 = (unsigned int)&ptr2 < 20;
    char v14 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&ptr3) & (int)(int*)((int)&ptr2 ^ 0x14)) < 0;
    unsigned int v15 = 0;
    char v16 = param0 ? 0: 1;
    char v17 = (int)param0 < 0;
    char v18 = __parity__((unsigned char)param0);
    char v19 = (unsigned int)param0 < 0;
    char v20 = 0;
    char v21 = 0;
    if(v16) {
        result = (void*)sub_4168D0((int)param1, (int)param2, (int)param3, (int)param4);
    }
    else {
        char v22 = param5 ? 0: 1;
        char v23 = param5 >= 0x80000000;
        char v24 = __parity__((unsigned char)param5);
        char v25 = param5 < 0;
        char v26 = 0;
        char v27 = 0;
        if(!v22) {
            char v28 = param1 ? 0: 1;
            char v29 = (int)param1 < 0;
            char v30 = __parity__((unsigned char)param1);
            char v31 = (unsigned int)param1 < 0;
            char v32 = 0;
            v7 = 0;
            if(!v28) {
                goto loc_416F13;
            }
            else {
                sub_4175B0((int)param0, (int)param2);
                result = NULL;
            }
        }
        else {
        loc_416F13:
            char v33 = gvar_429858 ? 0: 1;
            char v34 = gvar_429858 >= 0x80000000;
            char v35 = __parity__((unsigned char)gvar_429858);
            char v36 = gvar_429858 < 0;
            char v37 = 0;
            char v38 = 0;
            if(!v36 && !v33) {
                unsigned int v39 = gvar_429858;
                unsigned int v40 = v39 - 1;
                char v41 = gvar_429848 == v40;
                char v42 = (int)gvar_429848 < (int)v40;
                char v43 = __parity__((unsigned char)gvar_429848 - (unsigned char)v40);
                char v44 = gvar_429848 < v40;
                char v45 = (int)(((gvar_429848 - v40) ^ gvar_429848) & (gvar_429848 ^ v40)) < 0;
                char v46 = (((gvar_429848 - v40) ^ (gvar_429848 ^ v40)) >>> 4) & 0x1;
                if(v41) {
                    ptr7 = &ptr4;
                    int v47 = sub_417DB0();
                    char v48 = v47 ? 0: 1;
                    char v49 = v47 < 0;
                    char v50 = __parity__((unsigned char)v47);
                    char v51 = 0;
                    char v52 = 0;
                    if(v48) {
                        result = (void*)sub_415390(2, "dbgheap.c", 612, 0, "_CrtCheckMemory()");
                        ptr7 = &ptr3;
                        v6 = result == 1;
                        v5 = (int)result < 1;
                        v4 = __parity__((unsigned char)result - 1);
                        v3 = (unsigned int)result < 1;
                        v2 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                        v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                        if(v6) {
                            interrupt(3);
                        }
                    }
                    gvar_429848 = 0;
                }
                else {
                    void* ptr8 = gvar_429848;
                    ptr6 = gvar_429848;
                    void* ptr9 = (void*)((int)ptr8 + 1);
                    char v53 = ptr9 ? 0: 1;
                    char v54 = (int)ptr9 < 0;
                    char v55 = __parity__((unsigned char)ptr9);
                    char v56 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 ^ 0x1) ^ (int)ptr9) >>> 4) & 0x1);
                    char v57 = (unsigned int)ptr6 >= 0xffffffff;
                    char v58 = (int)(int*)((int)(int*)((int)ptr9 ^ (int)ptr6) & (int*)~(int)(int*)((int)ptr6 ^ 0x1)) < 0;
                    gvar_429848 = ptr9;
                }
            }
            result = gvar_428D50;
            ptr3 = gvar_428D50;
            char v59 = gvar_428D54 == -1;
            char v60 = (int)gvar_428D54 < -1;
            char v61 = __parity__((unsigned char)gvar_428D54 - 0xff);
            char v62 = gvar_428D54 < 0xffffffff;
            char v63 = (((gvar_428D54 + 1) ^ gvar_428D54) & ~gvar_428D54) < 0;
            char v64 = (((gvar_428D54 + 1) ^ ~gvar_428D54) >>> 4) & 0x1;
            if(!v59) {
                void* ptr10 = ptr3;
                v6 = gvar_428D54 == ptr10;
                v5 = (int)gvar_428D54 > (int)ptr10;
                v4 = __parity__((unsigned char)ptr10 - (unsigned char)gvar_428D54);
                v3 = gvar_428D54 > (unsigned int)ptr10;
                v2 = (int)(int*)((int)(int*)((int)(int*)((int)ptr10 - gvar_428D54) ^ (int)ptr10) & (int)(int*)(gvar_428D54 ^ (int)ptr10)) < 0;
                v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr10 - gvar_428D54) ^ (int)(int*)(gvar_428D54 ^ (int)ptr10)) >>> 4) & 0x1);
                if(v6) {
                    interrupt(3);
                }
            }
            void* ptr11 = param4;
            unsigned int v65 = param3;
            void* ptr12 = ptr3;
            unsigned int v66 = param2;
            void* ptr13 = param1;
            void* ptr14 = param0;
            int v67 = gvar_428EC0{→sub_41DED0}(2, (int)ptr14, (int)ptr13, (int)v66, (int)ptr12, (int)v65, (int)ptr11);
            char v68 = v67 ? 0: 1;
            char v69 = v67 < 0;
            char v70 = __parity__((unsigned char)v67);
            char v71 = 0;
            char v72 = 0;
            if(v68) {
                char v73 = param3 ? 0: 1;
                char v74 = param3 >= 0x80000000;
                char v75 = __parity__((unsigned char)param3);
                char v76 = param3 < 0;
                char v77 = 0;
                char v78 = 0;
                if(!v73) {
                    void* ptr15 = param4;
                    ptr4 = param4;
                    unsigned int v79 = param3;
                    v1 = param3;
                    result = (void*)sub_415390(0, 0, 0, 0, "Client hook re-allocation failure at file %hs line %d.\n");
                    ptr7 = &ptr3;
                    v6 = result == 1;
                    v5 = (int)result < 1;
                    v4 = __parity__((unsigned char)result - 1);
                    v3 = (unsigned int)result < 1;
                    v2 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                    v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                    if(v6) {
                        interrupt(3);
                    }
                }
                else {
                    result = (void*)sub_415390(0, 0, 0, 0, &gvar_426074);
                    ptr7 = &ptr3;
                    v6 = result == 1;
                    v5 = (int)result < 1;
                    v4 = __parity__((unsigned char)result - 1);
                    v3 = (unsigned int)result < 1;
                    v2 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                    v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                    if(v6) {
                        interrupt(3);
                    }
                }
                result = NULL;
            }
            else {
                char v80 = param1 == -37;
                char v81 = (int)param1 < -37;
                char v82 = __parity__((unsigned char)param1 - 219);
                char v83 = (unsigned int)param1 < 0xffffffdb;
                char v84 = (int)(int*)((int)(int*)((int)(int*)((int)param1 + 37) ^ (int)param1) & (int)(int*)((int)param1 ^ 0xffffffdb)) < 0;
                char v85 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)param1 + 37) ^ (int)(int*)((int)param1 ^ 0xffffffdb)) >>> 4) & 0x1);
                if(!v83 && !v80) {
                    void* ptr16 = param1;
                    ptr4 = param1;
                    result = (void*)sub_415390(1, 0, 0, 0, "Allocation too large or negative: %Iu bytes.\n");
                    ptr7 = &ptr3;
                    v6 = result == 1;
                    v5 = (int)result < 1;
                    v4 = __parity__((unsigned char)result - 1);
                    v3 = (unsigned int)result < 1;
                    v2 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                    v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                    if(v6) {
                        interrupt(3);
                    }
                    result = NULL;
                }
                else {
                    char v86 = param2 == 1;
                    char v87 = (int)param2 < 1;
                    char v88 = __parity__((unsigned char)param2 - 1);
                    char v89 = param2 < 1;
                    char v90 = (((param2 - 1) ^ param2) & (param2 ^ 0x1)) < 0;
                    char v91 = (((param2 - 1) ^ (param2 ^ 0x1)) >>> 4) & 0x1;
                    if(!v86) {
                        unsigned int v92 = param2;
                        v0 = (unsigned int)(unsigned short)v92;
                        char v93 = v0 == 4;
                        char v94 = (int)v0 < 4;
                        char v95 = __parity__((unsigned char)v0 - 4);
                        char v96 = v0 < 4;
                        char v97 = (((v0 - 4) ^ v0) & (v0 ^ 0x4)) < 0;
                        char v98 = (((v0 - 4) ^ (v0 ^ 0x4)) >>> 4) & 0x1;
                        if(v93) {
                            goto loc_417078;
                        }
                        else {
                            unsigned int v99 = param2;
                            unsigned int v100 = (unsigned int)(unsigned short)v99;
                            char v101 = v100 == 2;
                            char v102 = (int)v100 < 2;
                            char v103 = __parity__((unsigned char)v100 - 2);
                            char v104 = v100 < 2;
                            char v105 = (((v100 - 2) ^ v100) & (v100 ^ 0x2)) < 0;
                            char v106 = (((v100 - 2) ^ (v100 ^ 0x2)) >>> 4) & 0x1;
                            if(v101) {
                                goto loc_417078;
                            }
                            else {
                                result = (void*)sub_415390(1, 0, 0, 0, &gvar_426074);
                                ptr7 = &ptr3;
                                v6 = result == 1;
                                v5 = (int)result < 1;
                                v4 = __parity__((unsigned char)result - 1);
                                v3 = (unsigned int)result < 1;
                                v2 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                                v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                                if(v6) {
                                    interrupt(3);
                                }
                                goto loc_4170BB;
                            }
                        }
                    }
                    else {
                    loc_417078:
                        v0 = (unsigned int)gvar_428D5B | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                        void* ptr17 = param0;
                        void* ptr18 = (void*)((int)ptr17 & 0xfffffffc);
                        ptr6 = (void*)((int)ptr17 & 0xfffffffc);
                        int* ptr19 = (int*)((int)ptr18 - 4);
                        char v107 = ptr19 ? 0: 1;
                        char v108 = (int)ptr19 < 0;
                        char v109 = __parity__((unsigned char)ptr19);
                        char v110 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 ^ 0x4) ^ (int)ptr19) >>> 4) & 0x1);
                        char v111 = (unsigned int)ptr6 < 4;
                        char v112 = (int)(int*)((int)(int*)((int)ptr19 ^ (int)ptr6) & (int)(int*)((int)ptr6 ^ 0x4)) < 0;
                        int v113 = sub_417D50((int)ptr19, (int)v0, 4);
                        char v114 = v113 ? 0: 1;
                        char v115 = v113 < 0;
                        char v116 = __parity__((unsigned char)v113);
                        char v117 = 0;
                        char v118 = 0;
                        if(!v114) {
                            void* ptr20 = param0;
                            ptr4 = param0;
                            result = (void*)sub_415390(1, 0, 0, 0, "The Block at 0x%p was allocated by aligned routines, use _aligned_realloc()");
                            ptr7 = &ptr3;
                            v6 = result == 1;
                            v5 = (int)result < 1;
                            v4 = __parity__((unsigned char)result - 1);
                            v3 = (unsigned int)result < 1;
                            v2 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                            v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                            if(v6) {
                                interrupt(3);
                            }
                            result = NULL;
                        }
                        else {
                        loc_4170BB:
                            void* ptr21 = param0;
                            int v119 = sub_4182D0((int)ptr21);
                            char v120 = v119 ? 0: 1;
                            char v121 = v119 < 0;
                            char v122 = __parity__((unsigned char)v119);
                            char v123 = 0;
                            char v124 = 0;
                            if(v120) {
                                result = (void*)sub_415390(2, "dbgheap.c", 663, 0, "_CrtIsValidHeapPointer(pUserData)");
                                ptr7 = &ptr3;
                                v6 = result == 1;
                                v5 = (int)result < 1;
                                v4 = __parity__((unsigned char)result - 1);
                                v3 = (unsigned int)result < 1;
                                v2 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                                v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                                if(v6) {
                                    interrupt(3);
                                }
                            }
                            void* ptr22 = param0;
                            ptr6 = param0;
                            int* ptr23 = (int*)((int)ptr22 - 32);
                            char v125 = ptr23 ? 0: 1;
                            char v126 = (int)ptr23 < 0;
                            char v127 = __parity__((unsigned char)ptr23);
                            char v128 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 ^ 0x20) ^ (int)ptr23) >>> 4) & 0x1);
                            char v129 = (unsigned int)ptr6 < 32;
                            char v130 = (int)(int*)((int)(int*)((int)ptr23 ^ (int)ptr6) & (int)(int*)((int)ptr6 ^ 0x20)) < 0;
                            int* ptr24 = ptr23;
                            int* ptr25 = ptr23;
                            char v131 = *(ptr25 + 5) == 3;
                            char v132 = *(ptr25 + 5) < 3;
                            char v133 = __parity__((unsigned char)*(ptr25 + 5) - 3);
                            char v134 = *(unsigned int*)(ptr25 + 5) < 3;
                            char v135 = (((*(ptr25 + 5) - 3) ^ *(ptr25 + 5)) & (*(ptr25 + 5) ^ 0x3)) < 0;
                            char v136 = (((*(ptr25 + 5) - 3) ^ (*(ptr25 + 5) ^ 0x3)) >>> 4) & 0x1;
                            if(v131) {
                                v15 = 1;
                            }
                            char v137 = v15 ? 0: 1;
                            char v138 = v15 >= 0x80000000;
                            char v139 = __parity__((unsigned char)v15);
                            char v140 = v15 < 0;
                            char v141 = 0;
                            char v142 = 0;
                            if(!v137) {
                                int* ptr26 = ptr24;
                                char v143 = *(ptr26 + 3) == 0xfedcbabc;
                                char v144 = *(ptr26 + 3) < 0xfedcbabc;
                                char v145 = __parity__((unsigned char)*(ptr26 + 3) - 188);
                                char v146 = *(unsigned int*)(ptr26 + 3) < 0xfedcbabc;
                                char v147 = (((*(ptr26 + 3) + 0x1234544) ^ *(ptr26 + 3)) & (*(ptr26 + 3) ^ 0xfedcbabc)) < 0;
                                char v148 = (((*(ptr26 + 3) + 0x1234544) ^ (*(ptr26 + 3) ^ 0xfedcbabc)) >>> 4) & 0x1;
                                if(v143) {
                                    int* ptr27 = ptr24;
                                    char v149 = *(ptr27 + 6) ? 0: 1;
                                    char v150 = *(ptr27 + 6) < 0;
                                    char v151 = __parity__((unsigned char)*(ptr27 + 6));
                                    char v152 = *(unsigned int*)(ptr27 + 6) < 0;
                                    char v153 = 0;
                                    char v154 = 0;
                                    if(!v149) {
                                        goto loc_417133;
                                    }
                                }
                                else {
                                loc_417133:
                                    result = (void*)sub_415390(2, "dbgheap.c", 673, 0, "pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ");
                                    ptr7 = &ptr3;
                                    v6 = result == 1;
                                    v5 = (int)result < 1;
                                    v4 = __parity__((unsigned char)result - 1);
                                    v3 = (unsigned int)result < 1;
                                    v2 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                                    v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                                    if(v6) {
                                        interrupt(3);
                                    }
                                }
                            }
                            else {
                                int* ptr28 = ptr24;
                                int v155 = *(ptr28 + 5);
                                unsigned int v156 = (unsigned int)(unsigned short)v155;
                                char v157 = v156 == 2;
                                char v158 = (int)v156 < 2;
                                char v159 = __parity__((unsigned char)v156 - 2);
                                char v160 = v156 < 2;
                                char v161 = (((v156 - 2) ^ v156) & (v156 ^ 0x2)) < 0;
                                char v162 = (((v156 - 2) ^ (v156 ^ 0x2)) >>> 4) & 0x1;
                                if(v157) {
                                    unsigned int v163 = param2;
                                    unsigned int v164 = (unsigned int)(unsigned short)v163;
                                    char v165 = v164 == 1;
                                    char v166 = (int)v164 < 1;
                                    char v167 = __parity__((unsigned char)v164 - 1);
                                    char v168 = v164 < 1;
                                    char v169 = (((v164 - 1) ^ v164) & (v164 ^ 0x1)) < 0;
                                    char v170 = (((v164 - 1) ^ (v164 ^ 0x1)) >>> 4) & 0x1;
                                    if(v165) {
                                        param2 = 2;
                                    }
                                }
                            }
                            char v171 = param5 ? 0: 1;
                            char v172 = param5 >= 0x80000000;
                            char v173 = __parity__((unsigned char)param5);
                            char v174 = param5 < 0;
                            char v175 = 0;
                            char v176 = 0;
                            if(!v171) {
                                void* ptr29 = param1;
                                void* ptr30 = param1;
                                int* ptr31 = (int*)((int)ptr29 + 36);
                                char v177 = ptr31 ? 0: 1;
                                char v178 = (int)ptr31 < 0;
                                char v179 = __parity__((unsigned char)ptr31);
                                char v180 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr30 ^ 0x24) ^ (int)ptr31) >>> 4) & 0x1);
                                char v181 = (unsigned int)ptr30 >= 0xffffffdc;
                                char v182 = (int)(int*)((int)(int*)((int)ptr31 ^ (int)ptr30) & (int*)~(int)(int*)((int)ptr30 ^ 0x24)) < 0;
                                int* ptr32 = ptr24;
                                void* ptr33 = (void*)sub_41DFE0((int)ptr32, (int)ptr31);
                                int* ptr34 = &v1;
                                char v183 = &ptr1 == 24;
                                char v184 = (int)&ptr3 < 0;
                                char v185 = __parity__((unsigned char)&ptr1 - 24);
                                char v186 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x8) ^ (int)&ptr3) >>> 4) & 0x1);
                                char v187 = (unsigned int)&v1 >= 0xfffffff8;
                                char v188 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&ptr3) & (int*)~(int)(int*)((int)&v1 ^ 0x8)) < 0;
                                ptr0 = ptr33;
                                char v189 = ptr0 ? 0: 1;
                                char v190 = (int)ptr0 < 0;
                                char v191 = __parity__((unsigned char)ptr0);
                                char v192 = (unsigned int)ptr0 < 0;
                                char v193 = 0;
                                if(!v189) {
                                    goto loc_4171B6;
                                }
                                else {
                                    result = NULL;
                                }
                            }
                            else {
                                void* ptr35 = param1;
                                void* ptr36 = param1;
                                int* ptr37 = (int*)((int)ptr35 + 36);
                                char v194 = ptr37 ? 0: 1;
                                char v195 = (int)ptr37 < 0;
                                char v196 = __parity__((unsigned char)ptr37);
                                char v197 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr36 ^ 0x24) ^ (int)ptr37) >>> 4) & 0x1);
                                char v198 = (unsigned int)ptr36 >= 0xffffffdc;
                                char v199 = (int)(int*)((int)(int*)((int)ptr37 ^ (int)ptr36) & (int*)~(int)(int*)((int)ptr36 ^ 0x24)) < 0;
                                int* ptr38 = ptr24;
                                void* ptr39 = (void*)sub_41DEE0((int)ptr38, (int)ptr37);
                                int* ptr40 = &v1;
                                char v200 = &ptr1 == 24;
                                char v201 = (int)&ptr3 < 0;
                                char v202 = __parity__((unsigned char)&ptr1 - 24);
                                char v203 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x8) ^ (int)&ptr3) >>> 4) & 0x1);
                                char v204 = (unsigned int)&v1 >= 0xfffffff8;
                                char v205 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&ptr3) & (int*)~(int)(int*)((int)&v1 ^ 0x8)) < 0;
                                ptr0 = ptr39;
                                char v206 = ptr0 ? 0: 1;
                                char v207 = (int)ptr0 < 0;
                                char v208 = __parity__((unsigned char)ptr0);
                                char v209 = (unsigned int)ptr0 < 0;
                                char v210 = 0;
                                if(v206) {
                                    result = NULL;
                                }
                                else {
                                loc_4171B6:
                                    unsigned int v211 = gvar_428D50;
                                    unsigned int v212 = gvar_428D50;
                                    unsigned int v213 = v211 + 1;
                                    char v214 = v213 ? 0: 1;
                                    char v215 = v213 >= 0x80000000;
                                    char v216 = __parity__((unsigned char)v213);
                                    char v217 = (((v212 ^ 0x1) ^ v213) >>> 4) & 0x1;
                                    char v218 = v212 >= 0xffffffff;
                                    char v219 = (int)((v213 ^ v212) & ~(v212 ^ 0x1)) < 0;
                                    gvar_428D50 = v213;
                                    char v220 = v15 ? 0: 1;
                                    char v221 = v15 >= 0x80000000;
                                    char v222 = __parity__((unsigned char)v15);
                                    char v223 = v15 < 0;
                                    char v224 = 0;
                                    char v225 = 0;
                                    if(v220) {
                                        void* ptr41 = ptr0;
                                        unsigned int v226 = gvar_429840;
                                        unsigned int v227 = gvar_429840;
                                        unsigned int v228 = v226 - *(int*)((int)ptr41 + 16);
                                        char v229 = v228 ? 0: 1;
                                        char v230 = v228 >= 0x80000000;
                                        char v231 = __parity__((unsigned char)v228);
                                        char v232 = (((*(int*)((int)ptr41 + 16) ^ v227) ^ v228) >>> 4) & 0x1;
                                        char v233 = *(unsigned int*)((int)ptr41 + 16) > v227;
                                        char v234 = ((*(int*)((int)ptr41 + 16) ^ v227) & (v228 ^ v227)) < 0;
                                        gvar_429840 = v228;
                                        unsigned int v235 = gvar_429840;
                                        unsigned int v236 = gvar_429840;
                                        int* ptr42 = (int*)(v235 + (int)param1);
                                        char v237 = ptr42 ? 0: 1;
                                        char v238 = (int)ptr42 < 0;
                                        char v239 = __parity__((unsigned char)ptr42);
                                        char v240 = (int*)((int)(int*)((int)(int*)((int)(int*)(v236 ^ (int)param1) ^ (int)ptr42) >>> 4) & 0x1);
                                        char v241 = __carry__(v236, (int)param1);
                                        char v242 = (int)(int*)((int)(int*)((int)ptr42 ^ v236) & (int*)~(int)(int*)(v236 ^ (int)param1)) < 0;
                                        gvar_429840 = ptr42;
                                        void* ptr43 = ptr0;
                                        unsigned int v243 = gvar_429854;
                                        unsigned int v244 = gvar_429854;
                                        unsigned int v245 = v243 - *(int*)((int)ptr43 + 16);
                                        char v246 = v245 ? 0: 1;
                                        char v247 = v245 >= 0x80000000;
                                        char v248 = __parity__((unsigned char)v245);
                                        char v249 = (((*(int*)((int)ptr43 + 16) ^ v244) ^ v245) >>> 4) & 0x1;
                                        char v250 = *(unsigned int*)((int)ptr43 + 16) > v244;
                                        char v251 = ((*(int*)((int)ptr43 + 16) ^ v244) & (v245 ^ v244)) < 0;
                                        gvar_429854 = v245;
                                        unsigned int v252 = gvar_429854;
                                        unsigned int v253 = gvar_429854;
                                        int* ptr44 = (int*)(v252 + (int)param1);
                                        char v254 = ptr44 ? 0: 1;
                                        char v255 = (int)ptr44 < 0;
                                        char v256 = __parity__((unsigned char)ptr44);
                                        char v257 = (int*)((int)(int*)((int)(int*)((int)(int*)(v253 ^ (int)param1) ^ (int)ptr44) >>> 4) & 0x1);
                                        char v258 = __carry__(v253, (int)param1);
                                        char v259 = (int)(int*)((int)(int*)((int)ptr44 ^ v253) & (int*)~(int)(int*)(v253 ^ (int)param1)) < 0;
                                        gvar_429854 = ptr44;
                                        unsigned int v260 = gvar_429854;
                                        char v261 = gvar_42984C == v260;
                                        char v262 = (int)gvar_42984C > (int)v260;
                                        char v263 = __parity__((unsigned char)v260 - (unsigned char)gvar_42984C);
                                        char v264 = gvar_42984C > v260;
                                        char v265 = (int)(((v260 - gvar_42984C) ^ v260) & (gvar_42984C ^ v260)) < 0;
                                        char v266 = (((v260 - gvar_42984C) ^ (gvar_42984C ^ v260)) >>> 4) & 0x1;
                                        if(!v264 && !v261) {
                                            unsigned int v267 = gvar_429854;
                                            gvar_42984C = gvar_429854;
                                        }
                                    }
                                    void* ptr45 = ptr0;
                                    void* ptr46 = ptr0;
                                    void* ptr47 = (void*)((int)ptr45 + 32);
                                    char v268 = ptr47 ? 0: 1;
                                    char v269 = (int)ptr47 < 0;
                                    char v270 = __parity__((unsigned char)ptr47);
                                    char v271 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr46 ^ 0x20) ^ (int)ptr47) >>> 4) & 0x1);
                                    char v272 = (unsigned int)ptr46 >= 0xffffffe0;
                                    char v273 = (int)(int*)((int)(int*)((int)ptr47 ^ (int)ptr46) & (int*)~(int)(int*)((int)ptr46 ^ 0x20)) < 0;
                                    void* ptr48 = ptr47;
                                    void* ptr49 = ptr0;
                                    void* ptr50 = param1;
                                    char v274 = *(int*)((int)ptr49 + 16) == ptr50;
                                    char v275 = *(int*)((int)ptr49 + 16) > (int)ptr50;
                                    char v276 = __parity__((unsigned char)ptr50 - (unsigned char)*(int*)((int)ptr49 + 16));
                                    char v277 = *(unsigned int*)((int)ptr49 + 16) > (unsigned int)ptr50;
                                    char v278 = (int)(int*)((int)(int*)((int)(int*)((int)ptr50 - *(int*)((int)ptr49 + 16)) ^ (int)ptr50) & (int)(int*)(*(int*)((int)ptr49 + 16) ^ (int)ptr50)) < 0;
                                    char v279 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr50 - *(int*)((int)ptr49 + 16)) ^ (int)(int*)(*(int*)((int)ptr49 + 16) ^ (int)ptr50)) >>> 4) & 0x1);
                                    if(!v277 && !v274) {
                                        void* ptr51 = ptr0;
                                        void* ptr52 = param1;
                                        void* ptr53 = param1;
                                        void* ptr54 = (void*)((int)ptr52 - *(int*)((int)ptr51 + 16));
                                        char v280 = ptr54 ? 0: 1;
                                        char v281 = (int)ptr54 < 0;
                                        char v282 = __parity__((unsigned char)ptr54);
                                        char v283 = (int*)((int)(int*)((int)(int*)((int)(int*)(*(int*)((int)ptr51 + 16) ^ (int)ptr53) ^ (int)ptr54) >>> 4) & 0x1);
                                        char v284 = *(unsigned int*)((int)ptr51 + 16) > (unsigned int)ptr53;
                                        char v285 = (int)(int*)((int)(int*)(*(int*)((int)ptr51 + 16) ^ (int)ptr53) & (int)(int*)((int)ptr54 ^ (int)ptr53)) < 0;
                                        ptr4 = ptr54;
                                        unsigned int v286 = (unsigned int)gvar_428D5A;
                                        v1 = (unsigned int)gvar_428D5A;
                                        void* ptr55 = ptr0;
                                        void* ptr56 = ptr48;
                                        void* ptr57 = ptr48;
                                        int* ptr58 = (int*)(*(int*)((int)ptr55 + 16) + (int)ptr56);
                                        char v287 = ptr58 ? 0: 1;
                                        char v288 = (int)ptr58 < 0;
                                        char v289 = __parity__((unsigned char)ptr58);
                                        char v290 = (int*)((int)(int*)((int)(int*)((int)(int*)(*(int*)((int)ptr55 + 16) ^ (int)ptr57) ^ (int)ptr58) >>> 4) & 0x1);
                                        char v291 = __carry__(*(int*)((int)ptr55 + 16), (int)ptr57);
                                        char v292 = (int)(int*)((int)(int*)((int)ptr58 ^ (int)ptr57) & (int*)~(int)(int*)(*(int*)((int)ptr55 + 16) ^ (int)ptr57)) < 0;
                                        int v293 = sub_411195((int)ptr58, (int)v286, (int)ptr54);
                                        int* ptr59 = &v8;
                                        char v294 = &ptr1 == 24;
                                        char v295 = (int)&ptr3 < 0;
                                        char v296 = __parity__((unsigned char)&ptr1 - 24);
                                        char v297 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0xc) ^ (int)&ptr3) >>> 4) & 0x1);
                                        char v298 = (unsigned int)&v8 >= 0xfffffff4;
                                        char v299 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&ptr3) & (int*)~(int)(int*)((int)&v8 ^ 0xc)) < 0;
                                    }
                                    int v300 = (unsigned int)gvar_428D58;
                                    void* ptr60 = ptr48;
                                    ptr6 = ptr48;
                                    int* ptr61 = (int*)((int)ptr60 + (int)param1);
                                    char v301 = ptr61 ? 0: 1;
                                    char v302 = (int)ptr61 < 0;
                                    char v303 = __parity__((unsigned char)ptr61);
                                    char v304 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 ^ (int)param1) ^ (int)ptr61) >>> 4) & 0x1);
                                    char v305 = (void*)__carry__((int)ptr6, (int)param1);
                                    char v306 = (int)(int*)((int)(int*)((int)ptr61 ^ (int)ptr6) & (int*)~(int)(int*)((int)ptr6 ^ (int)param1)) < 0;
                                    int v307 = sub_411195((int)ptr61, v300, 4);
                                    char v308 = v15 ? 0: 1;
                                    char v309 = v15 >= 0x80000000;
                                    char v310 = __parity__((unsigned char)v15);
                                    char v311 = v15 < 0;
                                    char v312 = 0;
                                    char v313 = 0;
                                    if(v308) {
                                        void* ptr62 = ptr0;
                                        unsigned int v314 = param3;
                                        *(unsigned int*)((int)ptr62 + 8) = param3;
                                        void* ptr63 = ptr0;
                                        void* ptr64 = param4;
                                        *(void**)((int)ptr63 + 12) = param4;
                                        void* ptr65 = ptr0;
                                        *(void**)((int)ptr65 + 24) = ptr3;
                                    }
                                    void* ptr66 = ptr0;
                                    void* ptr67 = param1;
                                    *(void**)((int)ptr66 + 16) = param1;
                                    char v315 = param5 ? 0: 1;
                                    char v316 = param5 >= 0x80000000;
                                    char v317 = __parity__((unsigned char)param5);
                                    char v318 = param5 < 0;
                                    char v319 = 0;
                                    char v320 = 0;
                                    if(v315) {
                                        char v321 = param5 ? 0: 1;
                                        char v322 = param5 >= 0x80000000;
                                        char v323 = __parity__((unsigned char)param5);
                                        char v324 = param5 < 0;
                                        char v325 = 0;
                                        char v326 = 0;
                                        if(v321) {
                                            char v327 = ptr0 == ptr24;
                                            char v328 = (int)ptr0 < (int)ptr24;
                                            char v329 = __parity__((unsigned char)ptr0 - (unsigned char)ptr24);
                                            char v330 = (unsigned int)ptr0 < (unsigned int)ptr24;
                                            char v331 = (int)(int*)((int)(int*)((int)(int*)((int)ptr0 - (int)ptr24) ^ (int)ptr0) & (int)(int*)((int)ptr0 ^ (int)ptr24)) < 0;
                                            char v332 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr0 - (int)ptr24) ^ (int)(int*)((int)ptr0 ^ (int)ptr24)) >>> 4) & 0x1);
                                            if(!v327) {
                                                goto loc_4172C8;
                                            }
                                        }
                                        else {
                                        loc_4172C8:
                                            result = (void*)sub_415390(2, "dbgheap.c", 747, 0, "fRealloc || (!fRealloc && pNewBlock == pOldBlock)");
                                            ptr7 = &ptr3;
                                            v6 = result == 1;
                                            v5 = (int)result < 1;
                                            v4 = __parity__((unsigned char)result - 1);
                                            v3 = (unsigned int)result < 1;
                                            v2 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                                            v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                                            if(v6) {
                                                interrupt(3);
                                            }
                                        }
                                    }
                                    if((ptr0 != ptr24 && !v15)) {
                                        void* ptr68 = ptr0;
                                        char v333 = *(int*)ptr68 ? 0: 1;
                                        char v334 = *(int*)ptr68 < 0;
                                        char v335 = __parity__((unsigned char)*(int*)ptr68);
                                        char v336 = *(unsigned int*)ptr68 < 0;
                                        char v337 = 0;
                                        char v338 = 0;
                                        if(!v333) {
                                            void* ptr69 = ptr0;
                                            int v339 = *(int*)ptr69;
                                            void* ptr70 = ptr0;
                                            int v340 = *(int*)((int)ptr70 + 4);
                                            *(int*)(v339 + 4) = *(int*)((int)ptr70 + 4);
                                        }
                                        else {
                                            unsigned int v341 = gvar_429844;
                                            char v342 = v341 == ptr24;
                                            char v343 = (int)v341 < (int)ptr24;
                                            char v344 = __parity__((unsigned char)v341 - (unsigned char)ptr24);
                                            char v345 = v341 < (unsigned int)ptr24;
                                            char v346 = (int)(int*)((int)(int*)((int)(int*)(v341 - (int)ptr24) ^ v341) & (int)(int*)(v341 ^ (int)ptr24)) < 0;
                                            char v347 = (int*)((int)(int*)((int)(int*)((int)(int*)(v341 - (int)ptr24) ^ (int)(int*)(v341 ^ (int)ptr24)) >>> 4) & 0x1);
                                            if(!v342) {
                                                result = (void*)sub_415390(2, "dbgheap.c", 764, 0, "_pLastBlock == pOldBlock");
                                                ptr7 = &ptr3;
                                                v6 = result == 1;
                                                v5 = (int)result < 1;
                                                v4 = __parity__((unsigned char)result - 1);
                                                v3 = (unsigned int)result < 1;
                                                v2 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                                                v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                                                if(v6) {
                                                    interrupt(3);
                                                }
                                            }
                                            void* ptr71 = ptr0;
                                            unsigned int v348 = *(unsigned int*)((int)ptr71 + 4);
                                            gvar_429844 = *(unsigned int*)((int)ptr71 + 4);
                                        }
                                        void* ptr72 = ptr0;
                                        char v349 = *(int*)((int)ptr72 + 4) ? 0: 1;
                                        char v350 = *(int*)((int)ptr72 + 4) < 0;
                                        char v351 = __parity__((unsigned char)*(int*)((int)ptr72 + 4));
                                        char v352 = *(unsigned int*)((int)ptr72 + 4) < 0;
                                        char v353 = 0;
                                        char v354 = 0;
                                        if(!v349) {
                                            **(unsigned int*)((int)ptr0 + 4) = *(int*)ptr0;
                                        }
                                        else {
                                            unsigned int v355 = gvar_429850;
                                            char v356 = v355 == ptr24;
                                            char v357 = (int)v355 < (int)ptr24;
                                            char v358 = __parity__((unsigned char)v355 - (unsigned char)ptr24);
                                            char v359 = v355 < (unsigned int)ptr24;
                                            char v360 = (int)(int*)((int)(int*)((int)(int*)(v355 - (int)ptr24) ^ v355) & (int)(int*)(v355 ^ (int)ptr24)) < 0;
                                            char v361 = (int*)((int)(int*)((int)(int*)((int)(int*)(v355 - (int)ptr24) ^ (int)(int*)(v355 ^ (int)ptr24)) >>> 4) & 0x1);
                                            if(!v356) {
                                                result = (void*)sub_415390(2, "dbgheap.c", 775, 0, "_pFirstBlock == pOldBlock");
                                                ptr7 = &ptr3;
                                                v6 = result == 1;
                                                v5 = (int)result < 1;
                                                v4 = __parity__((unsigned char)result - 1);
                                                v3 = (unsigned int)result < 1;
                                                v2 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                                                v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                                                if(v6) {
                                                    interrupt(3);
                                                }
                                            }
                                            gvar_429850 = *(unsigned int*)ptr0;
                                        }
                                        if(gvar_429850) {
                                            *(void**)(gvar_429850 + 4) = ptr0;
                                        }
                                        else {
                                            gvar_429844 = ptr0;
                                        }
                                        *(unsigned int*)ptr0 = gvar_429850;
                                        *(int*)((int)ptr0 + 4) = 0;
                                        gvar_429850 = ptr0;
                                    }
                                    result = ptr48;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}

void* sub_417520(void* param0, void* param1) {
    void* ptr0;
    void* ptr1 = ptr0;
    return sub_417550(param0, param1, 1, 0, NULL);
}

void* sub_417550(void* param0, void* param1, unsigned int param2, unsigned int param3, void* param4) {
    void* ptr0;
    void* ptr1 = ptr0;
    return sub_416EC0(param0, param1, param2, param3, param4, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_417590(int param0) {
    return sub_4175B0(param0, 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
void* sub_4175B0(void* param0, unsigned int param1) {
    unsigned int v0;
    int v1;
    void* ptr0;
    void* ptr1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    int* ptr2;
    void* result;
    int* ptr3;
    void* ptr4;
    int* ptr5 = &ptr3;
    void* ptr6 = ptr4;
    char v8 = gvar_429858 ? 0: 1;
    char v9 = gvar_429858 >= 0x80000000;
    char v10 = __parity__((unsigned char)gvar_429858);
    char v11 = gvar_429858 < 0;
    char v12 = 0;
    char v13 = 0;
    if(!v11 && !v8) {
        unsigned int v14 = gvar_429858;
        result = (void*)(v14 - 1);
        char v15 = gvar_429848 == result;
        char v16 = (int)gvar_429848 < (int)result;
        char v17 = __parity__((unsigned char)gvar_429848 - (unsigned char)result);
        char v18 = gvar_429848 < (unsigned int)result;
        char v19 = (int)(int*)((int)(int*)((int)(int*)(gvar_429848 - (int)result) ^ gvar_429848) & (int)(int*)(gvar_429848 ^ (int)result)) < 0;
        char v20 = (int*)((int)(int*)((int)(int*)((int)(int*)(gvar_429848 - (int)result) ^ (int)(int*)(gvar_429848 ^ (int)result)) >>> 4) & 0x1);
        if(v15) {
            result = (void*)sub_417DB0();
            char v21 = result ? 0: 1;
            char v22 = (int)result < 0;
            char v23 = __parity__((unsigned char)result);
            char v24 = 0;
            char v25 = 0;
            if(v21) {
                result = (void*)sub_415390(2, "dbgheap.c", 1100, 0, "_CrtCheckMemory()");
                ptr2 = &ptr6;
                v7 = result == 1;
                v6 = (int)result < 1;
                v5 = __parity__((unsigned char)result - 1);
                v4 = (unsigned int)result < 1;
                v3 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                if(v7) {
                    interrupt(3);
                }
            }
            gvar_429848 = 0;
        }
        else {
            void* ptr7 = gvar_429848;
            ptr1 = gvar_429848;
            int* ptr8 = (int*)((int)ptr7 + 1);
            char v26 = ptr8 ? 0: 1;
            char v27 = (int)ptr8 < 0;
            char v28 = __parity__((unsigned char)ptr8);
            char v29 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x1) ^ (int)ptr8) >>> 4) & 0x1);
            char v30 = (unsigned int)ptr1 >= 0xffffffff;
            char v31 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr1) & (int*)~(int)(int*)((int)ptr1 ^ 0x1)) < 0;
            gvar_429848 = ptr8;
        }
    }
    if(param0) {
        char v32 = param1 == 1;
        char v33 = (int)param1 < 1;
        char v34 = __parity__((unsigned char)param1 - 1);
        char v35 = param1 < 1;
        char v36 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
        char v37 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
        if(v32) {
            void* ptr9 = param0;
            void* ptr10 = (void*)((int)ptr9 & 0xfffffffc);
            ptr1 = (void*)((int)ptr9 & 0xfffffffc);
            int* ptr11 = (int*)((int)ptr10 - 4);
            char v38 = ptr11 ? 0: 1;
            char v39 = (int)ptr11 < 0;
            char v40 = __parity__((unsigned char)ptr11);
            char v41 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x4) ^ (int)ptr11) >>> 4) & 0x1);
            char v42 = (unsigned int)ptr1 < 4;
            char v43 = (int)(int*)((int)(int*)((int)ptr11 ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ 0x4)) < 0;
            int v44 = sub_417D50((int)ptr11, (unsigned int)gvar_428D5B | ((unsigned int)(int*)((int)(int*)((int)result >>> 8) & 0xffffff) << 8), 4);
            char v45 = v44 ? 0: 1;
            char v46 = v44 < 0;
            char v47 = __parity__((unsigned char)v44);
            char v48 = 0;
            char v49 = 0;
            if(v45) {
                goto loc_41766B;
            }
            else {
                void* ptr12 = param0;
                ptr0 = param0;
                result = (void*)sub_415390(1, 0, 0, 0, "The Block at 0x%p was allocated by aligned routines, use _aligned_free()");
                ptr2 = &ptr6;
                v7 = result == 1;
                v6 = (int)result < 1;
                v5 = __parity__((unsigned char)result - 1);
                v4 = (unsigned int)result < 1;
                v3 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                if(v7) {
                    interrupt(3);
                }
            }
        }
        else {
        loc_41766B:
            unsigned int v50 = param1;
            void* ptr13 = param0;
            int v51 = gvar_428EC0{→sub_41DED0}(3, (int)ptr13, 0, (int)v50, 0, 0, 0);
            char v52 = v51 ? 0: 1;
            char v53 = v51 < 0;
            char v54 = __parity__((unsigned char)v51);
            char v55 = 0;
            char v56 = 0;
            if(v52) {
                result = (void*)sub_415390(0, 0, 0, 0, &gvar_426074);
                ptr2 = &ptr6;
                v7 = result == 1;
                v6 = (int)result < 1;
                v5 = __parity__((unsigned char)result - 1);
                v4 = (unsigned int)result < 1;
                v3 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                if(v7) {
                    interrupt(3);
                }
            }
            else {
                void* ptr14 = param0;
                int v57 = sub_4182D0((int)ptr14);
                char v58 = v57 ? 0: 1;
                char v59 = v57 < 0;
                char v60 = __parity__((unsigned char)v57);
                char v61 = 0;
                char v62 = 0;
                if(v58) {
                    result = (void*)sub_415390(2, "dbgheap.c", 1132, 0, "_CrtIsValidHeapPointer(pUserData)");
                    ptr2 = &ptr6;
                    v7 = result == 1;
                    v6 = (int)result < 1;
                    v5 = __parity__((unsigned char)result - 1);
                    v4 = (unsigned int)result < 1;
                    v3 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                    v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                    if(v7) {
                        interrupt(3);
                    }
                }
                void* ptr15 = param0;
                ptr1 = param0;
                result = (void*)((int)ptr15 - 32);
                char v63 = result ? 0: 1;
                char v64 = (int)result < 0;
                char v65 = __parity__((unsigned char)result);
                char v66 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x20) ^ (int)result) >>> 4) & 0x1);
                char v67 = (unsigned int)ptr1 < 32;
                char v68 = (int)(int*)((int)(int*)((int)result ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ 0x20)) < 0;
                ptr6 = result;
                void* ptr16 = result;
                int v69 = *(int*)((int)ptr16 + 20);
                unsigned int v70 = (unsigned int)(unsigned short)v69;
                char v71 = v70 == 4;
                char v72 = (int)v70 < 4;
                char v73 = __parity__((unsigned char)v70 - 4);
                char v74 = v70 < 4;
                char v75 = (((v70 - 4) ^ v70) & (v70 ^ 0x4)) < 0;
                char v76 = (((v70 - 4) ^ (v70 ^ 0x4)) >>> 4) & 0x1;
                if(!v71) {
                    result = ptr6;
                    char v77 = *(int*)((int)result + 20) == 1;
                    char v78 = *(int*)((int)result + 20) < 1;
                    char v79 = __parity__((unsigned char)*(int*)((int)result + 20) - 1);
                    char v80 = *(unsigned int*)((int)result + 20) < 1;
                    char v81 = (((*(int*)((int)result + 20) - 1) ^ *(int*)((int)result + 20)) & (*(int*)((int)result + 20) ^ 0x1)) < 0;
                    char v82 = (((*(int*)((int)result + 20) - 1) ^ (*(int*)((int)result + 20) ^ 0x1)) >>> 4) & 0x1;
                    if(!v77) {
                        void* ptr17 = ptr6;
                        int v83 = *(int*)((int)ptr17 + 20);
                        unsigned int v84 = (unsigned int)(unsigned short)v83;
                        char v85 = v84 == 2;
                        char v86 = (int)v84 < 2;
                        char v87 = __parity__((unsigned char)v84 - 2);
                        char v88 = v84 < 2;
                        char v89 = (((v84 - 2) ^ v84) & (v84 ^ 0x2)) < 0;
                        char v90 = (((v84 - 2) ^ (v84 ^ 0x2)) >>> 4) & 0x1;
                        if(!v85) {
                            result = ptr6;
                            char v91 = *(int*)((int)result + 20) == 3;
                            char v92 = *(int*)((int)result + 20) < 3;
                            char v93 = __parity__((unsigned char)*(int*)((int)result + 20) - 3);
                            char v94 = *(unsigned int*)((int)result + 20) < 3;
                            char v95 = (((*(int*)((int)result + 20) - 3) ^ *(int*)((int)result + 20)) & (*(int*)((int)result + 20) ^ 0x3)) < 0;
                            char v96 = (((*(int*)((int)result + 20) - 3) ^ (*(int*)((int)result + 20) ^ 0x3)) >>> 4) & 0x1;
                            if(!v91) {
                                result = (void*)sub_415390(2, "dbgheap.c", 1138, 0, "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)");
                                ptr2 = &ptr6;
                                v7 = result == 1;
                                v6 = (int)result < 1;
                                v5 = __parity__((unsigned char)result - 1);
                                v4 = (unsigned int)result < 1;
                                v3 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                                v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                                if(v7) {
                                    interrupt(3);
                                }
                            }
                        }
                    }
                }
                unsigned int v97 = gvar_428D4C;
                int v98 = (int)(v97 & 0x4);
                char v99 = v98 ? 0: 1;
                char v100 = v98 < 0;
                char v101 = __parity__((unsigned char)v98);
                char v102 = 0;
                char v103 = 0;
                if(v99) {
                    void* ptr18 = ptr6;
                    ptr1 = ptr6;
                    int* ptr19 = (int*)((int)ptr18 + 28);
                    char v104 = ptr19 ? 0: 1;
                    char v105 = (int)ptr19 < 0;
                    char v106 = __parity__((unsigned char)ptr19);
                    char v107 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x1c) ^ (int)ptr19) >>> 4) & 0x1);
                    char v108 = (unsigned int)ptr1 >= 0xffffffe4;
                    char v109 = (int)(int*)((int)(int*)((int)ptr19 ^ (int)ptr1) & (int*)~(int)(int*)((int)ptr1 ^ 0x1c)) < 0;
                    result = (void*)sub_417D50((int)ptr19, (unsigned int)gvar_428D58 | ((unsigned int)(int*)((int)(int*)((int)result >>> 8) & 0xffffff) << 8), 4);
                    char v110 = result ? 0: 1;
                    char v111 = (int)result < 0;
                    char v112 = __parity__((unsigned char)result);
                    char v113 = 0;
                    char v114 = 0;
                    if(v110) {
                        void* ptr20 = ptr6;
                        ptr1 = ptr6;
                        void* ptr21 = (void*)((int)ptr20 + 32);
                        char v115 = ptr21 ? 0: 1;
                        char v116 = (int)ptr21 < 0;
                        char v117 = __parity__((unsigned char)ptr21);
                        char v118 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x20) ^ (int)ptr21) >>> 4) & 0x1);
                        char v119 = (unsigned int)ptr1 >= 0xffffffe0;
                        char v120 = (int)(int*)((int)(int*)((int)ptr21 ^ (int)ptr1) & (int*)~(int)(int*)((int)ptr1 ^ 0x20)) < 0;
                        ptr0 = ptr21;
                        void* ptr22 = ptr6;
                        int v121 = *(int*)((int)ptr22 + 24);
                        v1 = *(int*)((int)ptr22 + 24);
                        void* ptr23 = ptr6;
                        int v122 = *(int*)((int)ptr23 + 20);
                        int v123 = (unsigned int)(unsigned short)v122;
                        char v124 = v123 ? 0: 1;
                        char v125 = v123 < 0;
                        char v126 = __parity__((unsigned char)v123);
                        char v127 = 0;
                        char v128 = 0;
                        unsigned int v129 = *(unsigned int*)(v123 * 4 + (int)&gvar_428D5C);
                        v0 = *(unsigned int*)(v123 * 4 + (int)&gvar_428D5C);
                        result = (void*)sub_415390(1, 0, 0, 0, "DAMAGE: before %hs block (#%d) at 0x%p.\n");
                        ptr2 = &ptr6;
                        v7 = result == 1;
                        v6 = (int)result < 1;
                        v5 = __parity__((unsigned char)result - 1);
                        v4 = (unsigned int)result < 1;
                        v3 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                        v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                        if(v7) {
                            interrupt(3);
                        }
                    }
                    v1 = (unsigned int)gvar_428D58 | ((unsigned int)(int*)((int)(int*)((int)result >>> 8) & 0xffffff) << 8);
                    void* ptr24 = ptr6;
                    int v130 = *(int*)((int)ptr24 + 16);
                    void* ptr25 = ptr6;
                    int* ptr26 = (int*)((int)ptr25 + v130) + 8;
                    int v131 = sub_417D50((int)ptr26, (unsigned int)gvar_428D58 | ((unsigned int)(int*)((int)(int*)((int)result >>> 8) & 0xffffff) << 8), 4);
                    char v132 = v131 ? 0: 1;
                    char v133 = v131 < 0;
                    char v134 = __parity__((unsigned char)v131);
                    char v135 = 0;
                    char v136 = 0;
                    if(v132) {
                        void* ptr27 = ptr6;
                        ptr1 = ptr6;
                        void* ptr28 = (void*)((int)ptr27 + 32);
                        char v137 = ptr28 ? 0: 1;
                        char v138 = (int)ptr28 < 0;
                        char v139 = __parity__((unsigned char)ptr28);
                        char v140 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x20) ^ (int)ptr28) >>> 4) & 0x1);
                        char v141 = (unsigned int)ptr1 >= 0xffffffe0;
                        char v142 = (int)(int*)((int)(int*)((int)ptr28 ^ (int)ptr1) & (int*)~(int)(int*)((int)ptr1 ^ 0x20)) < 0;
                        ptr0 = ptr28;
                        void* ptr29 = ptr6;
                        int v143 = *(int*)((int)ptr29 + 24);
                        v1 = *(int*)((int)ptr29 + 24);
                        void* ptr30 = ptr6;
                        int v144 = *(int*)((int)ptr30 + 20);
                        int v145 = (unsigned int)(unsigned short)v144;
                        char v146 = v145 ? 0: 1;
                        char v147 = v145 < 0;
                        char v148 = __parity__((unsigned char)v145);
                        char v149 = 0;
                        char v150 = 0;
                        unsigned int v151 = *(unsigned int*)(v145 * 4 + (int)&gvar_428D5C);
                        v0 = *(unsigned int*)(v145 * 4 + (int)&gvar_428D5C);
                        result = (void*)sub_415390(1, 0, 0, 0, "DAMAGE: after %hs block (#%d) at 0x%p.\n");
                        ptr2 = &ptr6;
                        v7 = result == 1;
                        v6 = (int)result < 1;
                        v5 = __parity__((unsigned char)result - 1);
                        v4 = (unsigned int)result < 1;
                        v3 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                        v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                        if(v7) {
                            interrupt(3);
                        }
                    }
                }
                void* ptr31 = ptr6;
                char v152 = *(int*)((int)ptr31 + 20) == 3;
                char v153 = *(int*)((int)ptr31 + 20) < 3;
                char v154 = __parity__((unsigned char)*(int*)((int)ptr31 + 20) - 3);
                char v155 = *(unsigned int*)((int)ptr31 + 20) < 3;
                char v156 = (((*(int*)((int)ptr31 + 20) - 3) ^ *(int*)((int)ptr31 + 20)) & (*(int*)((int)ptr31 + 20) ^ 0x3)) < 0;
                char v157 = (((*(int*)((int)ptr31 + 20) - 3) ^ (*(int*)((int)ptr31 + 20) ^ 0x3)) >>> 4) & 0x1;
                if(v152) {
                    void* ptr32 = ptr6;
                    char v158 = *(int*)((int)ptr32 + 12) == 0xfedcbabc;
                    char v159 = *(int*)((int)ptr32 + 12) < 0xfedcbabc;
                    char v160 = __parity__((unsigned char)*(int*)((int)ptr32 + 12) - 188);
                    char v161 = *(unsigned int*)((int)ptr32 + 12) < 0xfedcbabc;
                    char v162 = (((*(int*)((int)ptr32 + 12) + 0x1234544) ^ *(int*)((int)ptr32 + 12)) & (*(int*)((int)ptr32 + 12) ^ 0xfedcbabc)) < 0;
                    char v163 = (((*(int*)((int)ptr32 + 12) + 0x1234544) ^ (*(int*)((int)ptr32 + 12) ^ 0xfedcbabc)) >>> 4) & 0x1;
                    if(v158) {
                        void* ptr33 = ptr6;
                        char v164 = *(int*)((int)ptr33 + 24) ? 0: 1;
                        char v165 = *(int*)((int)ptr33 + 24) < 0;
                        char v166 = __parity__((unsigned char)*(int*)((int)ptr33 + 24));
                        char v167 = *(unsigned int*)((int)ptr33 + 24) < 0;
                        char v168 = 0;
                        char v169 = 0;
                        if(!v164) {
                            goto loc_41782D;
                        }
                    }
                    else {
                    loc_41782D:
                        result = (void*)sub_415390(2, "dbgheap.c", 1161, 0, "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ");
                        ptr2 = &ptr6;
                        v7 = result == 1;
                        v6 = (int)result < 1;
                        v5 = __parity__((unsigned char)result - 1);
                        v4 = (unsigned int)result < 1;
                        v3 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                        v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                        if(v7) {
                            interrupt(3);
                        }
                    }
                    sub_411195((int)ptr6, (unsigned int)gvar_428D59, *(int*)((int)ptr6 + 16) + 36);
                    result = (void*)sub_41E2D0((int)ptr6);
                }
                else {
                    void* ptr34 = ptr6;
                    char v170 = *(int*)((int)ptr34 + 20) == 2;
                    char v171 = *(int*)((int)ptr34 + 20) < 2;
                    char v172 = __parity__((unsigned char)*(int*)((int)ptr34 + 20) - 2);
                    char v173 = *(unsigned int*)((int)ptr34 + 20) < 2;
                    char v174 = (((*(int*)((int)ptr34 + 20) - 2) ^ *(int*)((int)ptr34 + 20)) & (*(int*)((int)ptr34 + 20) ^ 0x2)) < 0;
                    char v175 = (((*(int*)((int)ptr34 + 20) - 2) ^ (*(int*)((int)ptr34 + 20) ^ 0x2)) >>> 4) & 0x1;
                    if(v170) {
                        char v176 = param1 == 1;
                        char v177 = (int)param1 < 1;
                        char v178 = __parity__((unsigned char)param1 - 1);
                        char v179 = param1 < 1;
                        char v180 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
                        char v181 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
                        if(v176) {
                            param1 = 2;
                        }
                    }
                    void* ptr35 = ptr6;
                    unsigned int v182 = *(unsigned int*)((int)ptr35 + 20);
                    char v183 = v182 == param1;
                    char v184 = (int)v182 < (int)param1;
                    char v185 = __parity__((unsigned char)v182 - (unsigned char)param1);
                    char v186 = v182 < param1;
                    char v187 = (int)(((v182 - param1) ^ v182) & (v182 ^ param1)) < 0;
                    char v188 = (((v182 - param1) ^ (v182 ^ param1)) >>> 4) & 0x1;
                    if(!v183) {
                        result = (void*)sub_415390(2, "dbgheap.c", 1175, 0, "pHead->nBlockUse == nBlockUse");
                        ptr2 = &ptr6;
                        v7 = result == 1;
                        v6 = (int)result < 1;
                        v5 = __parity__((unsigned char)result - 1);
                        v4 = (unsigned int)result < 1;
                        v3 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                        v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                        if(v7) {
                            interrupt(3);
                        }
                    }
                    void* ptr36 = ptr6;
                    void* ptr37 = gvar_429854;
                    ptr1 = gvar_429854;
                    int* ptr38 = (int*)((int)ptr37 - *(int*)((int)ptr36 + 16));
                    char v189 = ptr38 ? 0: 1;
                    char v190 = (int)ptr38 < 0;
                    char v191 = __parity__((unsigned char)ptr38);
                    char v192 = (int*)((int)(int*)((int)(int*)((int)(int*)(*(int*)((int)ptr36 + 16) ^ (int)ptr1) ^ (int)ptr38) >>> 4) & 0x1);
                    char v193 = *(unsigned int*)((int)ptr36 + 16) > (unsigned int)ptr1;
                    char v194 = (int)(int*)((int)(int*)(*(int*)((int)ptr36 + 16) ^ (int)ptr1) & (int)(int*)((int)ptr38 ^ (int)ptr1)) < 0;
                    gvar_429854 = ptr38;
                    unsigned int v195 = gvar_428D4C;
                    int v196 = (int)(v195 & 0x2);
                    char v197 = v196 ? 0: 1;
                    char v198 = v196 < 0;
                    char v199 = __parity__((unsigned char)v196);
                    char v200 = 0;
                    char v201 = 0;
                    if(v197) {
                        void* ptr39 = ptr6;
                        char v202 = *(int*)ptr39 ? 0: 1;
                        char v203 = *(int*)ptr39 < 0;
                        char v204 = __parity__((unsigned char)*(int*)ptr39);
                        char v205 = *(unsigned int*)ptr39 < 0;
                        char v206 = 0;
                        char v207 = 0;
                        if(!v202) {
                            void* ptr40 = ptr6;
                            int v208 = *(int*)ptr40;
                            void* ptr41 = ptr6;
                            int v209 = *(int*)((int)ptr41 + 4);
                            *(int*)(v208 + 4) = *(int*)((int)ptr41 + 4);
                        }
                        else {
                            unsigned int v210 = gvar_429844;
                            char v211 = v210 == ptr6;
                            char v212 = (int)v210 < (int)ptr6;
                            char v213 = __parity__((unsigned char)v210 - (unsigned char)ptr6);
                            char v214 = v210 < (unsigned int)ptr6;
                            char v215 = (int)(int*)((int)(int*)((int)(int*)(v210 - (int)ptr6) ^ v210) & (int)(int*)(v210 ^ (int)ptr6)) < 0;
                            char v216 = (int*)((int)(int*)((int)(int*)((int)(int*)(v210 - (int)ptr6) ^ (int)(int*)(v210 ^ (int)ptr6)) >>> 4) & 0x1);
                            if(!v211) {
                                result = (void*)sub_415390(2, "dbgheap.c", 1190, 0, "_pLastBlock == pHead");
                                ptr2 = &ptr6;
                                v7 = result == 1;
                                v6 = (int)result < 1;
                                v5 = __parity__((unsigned char)result - 1);
                                v4 = (unsigned int)result < 1;
                                v3 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                                v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                                if(v7) {
                                    interrupt(3);
                                }
                            }
                            void* ptr42 = ptr6;
                            unsigned int v217 = *(unsigned int*)((int)ptr42 + 4);
                            gvar_429844 = *(unsigned int*)((int)ptr42 + 4);
                        }
                        void* ptr43 = ptr6;
                        char v218 = *(int*)((int)ptr43 + 4) ? 0: 1;
                        char v219 = *(int*)((int)ptr43 + 4) < 0;
                        char v220 = __parity__((unsigned char)*(int*)((int)ptr43 + 4));
                        char v221 = *(unsigned int*)((int)ptr43 + 4) < 0;
                        char v222 = 0;
                        char v223 = 0;
                        if(!v218) {
                            **(unsigned int*)((int)ptr6 + 4) = *(int*)ptr6;
                        }
                        else {
                            unsigned int v224 = gvar_429850;
                            char v225 = v224 == ptr6;
                            char v226 = (int)v224 < (int)ptr6;
                            char v227 = __parity__((unsigned char)v224 - (unsigned char)ptr6);
                            char v228 = v224 < (unsigned int)ptr6;
                            char v229 = (int)(int*)((int)(int*)((int)(int*)(v224 - (int)ptr6) ^ v224) & (int)(int*)(v224 ^ (int)ptr6)) < 0;
                            char v230 = (int*)((int)(int*)((int)(int*)((int)(int*)(v224 - (int)ptr6) ^ (int)(int*)(v224 ^ (int)ptr6)) >>> 4) & 0x1);
                            if(!v225) {
                                result = (void*)sub_415390(2, "dbgheap.c", 1200, 0, "_pFirstBlock == pHead");
                                ptr2 = &ptr6;
                                v7 = result == 1;
                                v6 = (int)result < 1;
                                v5 = __parity__((unsigned char)result - 1);
                                v4 = (unsigned int)result < 1;
                                v3 = (int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
                                v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
                                if(v7) {
                                    interrupt(3);
                                }
                            }
                            gvar_429850 = *(unsigned int*)ptr6;
                        }
                        sub_411195((int)ptr6, (unsigned int)gvar_428D59, *(int*)((int)ptr6 + 16) + 36);
                        result = (void*)sub_41E2D0((int)ptr6);
                    }
                    else {
                        *(int*)((int)ptr6 + 20) = 0;
                        result = (void*)sub_411195((int)(int*)((int)ptr6 + 32), (unsigned int)gvar_428D59, *(int*)((int)ptr6 + 16));
                    }
                }
            }
        }
    }
    return result;
}

unsigned int sub_417AD0(unsigned int param0) {
    return sub_417AF0(param0, 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_417AF0(unsigned int param0, unsigned int param1) {
    unsigned int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    int* ptr0;
    unsigned int v7;
    int* ptr1;
    int v8;
    int* ptr2 = &ptr1;
    char v9 = gvar_429858 ? 0: 1;
    char v10 = gvar_429858 >= 0x80000000;
    char v11 = __parity__((unsigned char)gvar_429858);
    char v12 = gvar_429858 < 0;
    char v13 = 0;
    char v14 = 0;
    if(!v12 && !v9) {
        unsigned int v15 = gvar_429858;
        unsigned int v16 = v15 - 1;
        char v17 = gvar_429848 == v16;
        char v18 = (int)gvar_429848 < (int)v16;
        char v19 = __parity__((unsigned char)gvar_429848 - (unsigned char)v16);
        char v20 = gvar_429848 < v16;
        char v21 = (int)(((gvar_429848 - v16) ^ gvar_429848) & (gvar_429848 ^ v16)) < 0;
        char v22 = (((gvar_429848 - v16) ^ (gvar_429848 ^ v16)) >>> 4) & 0x1;
        if(v17) {
            int v23 = sub_417DB0();
            char v24 = v23 ? 0: 1;
            char v25 = v23 < 0;
            char v26 = __parity__((unsigned char)v23);
            char v27 = 0;
            char v28 = 0;
            if(v24) {
                v7 = (unsigned int)sub_415390(2, "dbgheap.c", 1275, 0, "_CrtCheckMemory()");
                ptr0 = &v8;
                v6 = v7 == 1;
                v5 = (int)v7 < 1;
                v4 = __parity__((unsigned char)v7 - 1);
                v3 = v7 < 1;
                v2 = (((v7 - 1) ^ v7) & (v7 ^ 0x1)) < 0;
                v1 = (((v7 - 1) ^ (v7 ^ 0x1)) >>> 4) & 0x1;
                if(v6) {
                    interrupt(3);
                }
            }
            gvar_429848 = 0;
        }
        else {
            unsigned int v29 = gvar_429848;
            v0 = gvar_429848;
            unsigned int v30 = v29 + 1;
            char v31 = v30 ? 0: 1;
            char v32 = v30 >= 0x80000000;
            char v33 = __parity__((unsigned char)v30);
            char v34 = (((v0 ^ 0x1) ^ v30) >>> 4) & 0x1;
            char v35 = v0 >= 0xffffffff;
            char v36 = (int)((v30 ^ v0) & ~(v0 ^ 0x1)) < 0;
            gvar_429848 = v30;
        }
    }
    unsigned int v37 = param0;
    int v38 = sub_4182D0((int)v37);
    char v39 = v38 ? 0: 1;
    char v40 = v38 < 0;
    char v41 = __parity__((unsigned char)v38);
    char v42 = 0;
    char v43 = 0;
    if(v39) {
        v7 = (unsigned int)sub_415390(2, "dbgheap.c", 1291, 0, "_CrtIsValidHeapPointer(pUserData)");
        ptr0 = &v8;
        v6 = v7 == 1;
        v5 = (int)v7 < 1;
        v4 = __parity__((unsigned char)v7 - 1);
        v3 = v7 < 1;
        v2 = (((v7 - 1) ^ v7) & (v7 ^ 0x1)) < 0;
        v1 = (((v7 - 1) ^ (v7 ^ 0x1)) >>> 4) & 0x1;
        if(v6) {
            interrupt(3);
        }
    }
    unsigned int v44 = param0;
    v0 = param0;
    int v45 = (int)(v44 - 32);
    char v46 = v45 ? 0: 1;
    char v47 = v45 < 0;
    char v48 = __parity__((unsigned char)v45);
    char v49 = (((v0 ^ 0x20) ^ v45) >>> 4) & 0x1;
    char v50 = v0 < 32;
    char v51 = ((v45 ^ v0) & (v0 ^ 0x20)) < 0;
    v8 = v45;
    int v52 = v45;
    int v53 = *(int*)(v52 + 20);
    unsigned int v54 = (unsigned int)(unsigned short)v53;
    char v55 = v54 == 4;
    char v56 = (int)v54 < 4;
    char v57 = __parity__((unsigned char)v54 - 4);
    char v58 = v54 < 4;
    char v59 = (((v54 - 4) ^ v54) & (v54 ^ 0x4)) < 0;
    char v60 = (((v54 - 4) ^ (v54 ^ 0x4)) >>> 4) & 0x1;
    if(!v55) {
        int v61 = v8;
        char v62 = *(int*)(v61 + 20) == 1;
        char v63 = *(int*)(v61 + 20) < 1;
        char v64 = __parity__((unsigned char)*(int*)(v61 + 20) - 1);
        char v65 = *(unsigned int*)(v61 + 20) < 1;
        char v66 = (((*(int*)(v61 + 20) - 1) ^ *(int*)(v61 + 20)) & (*(int*)(v61 + 20) ^ 0x1)) < 0;
        char v67 = (((*(int*)(v61 + 20) - 1) ^ (*(int*)(v61 + 20) ^ 0x1)) >>> 4) & 0x1;
        if(!v62) {
            int v68 = v8;
            int v69 = *(int*)(v68 + 20);
            unsigned int v70 = (unsigned int)(unsigned short)v69;
            char v71 = v70 == 2;
            char v72 = (int)v70 < 2;
            char v73 = __parity__((unsigned char)v70 - 2);
            char v74 = v70 < 2;
            char v75 = (((v70 - 2) ^ v70) & (v70 ^ 0x2)) < 0;
            char v76 = (((v70 - 2) ^ (v70 ^ 0x2)) >>> 4) & 0x1;
            if(!v71) {
                int v77 = v8;
                char v78 = *(int*)(v77 + 20) == 3;
                char v79 = *(int*)(v77 + 20) < 3;
                char v80 = __parity__((unsigned char)*(int*)(v77 + 20) - 3);
                char v81 = *(unsigned int*)(v77 + 20) < 3;
                char v82 = (((*(int*)(v77 + 20) - 3) ^ *(int*)(v77 + 20)) & (*(int*)(v77 + 20) ^ 0x3)) < 0;
                char v83 = (((*(int*)(v77 + 20) - 3) ^ (*(int*)(v77 + 20) ^ 0x3)) >>> 4) & 0x1;
                if(!v78) {
                    v7 = (unsigned int)sub_415390(2, "dbgheap.c", 0x511, 0, "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)");
                    ptr0 = &v8;
                    v6 = v7 == 1;
                    v5 = (int)v7 < 1;
                    v4 = __parity__((unsigned char)v7 - 1);
                    v3 = v7 < 1;
                    v2 = (((v7 - 1) ^ v7) & (v7 ^ 0x1)) < 0;
                    v1 = (((v7 - 1) ^ (v7 ^ 0x1)) >>> 4) & 0x1;
                    if(v6) {
                        interrupt(3);
                    }
                }
            }
        }
    }
    if(*(int*)(v8 + 20) == 2 && param1 == 1) {
        param1 = 2;
    }
    return *(unsigned int*)(v8 + 16);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_417C80(unsigned int param0, unsigned int param1) {
    int* ptr0;
    int* ptr1 = &ptr0;
    unsigned int v0 = param0;
    unsigned int result = (unsigned int)sub_4182D0((int)v0);
    if(result) {
        unsigned int v1 = param0;
        unsigned int v2 = param0;
        unsigned int v3 = v1 - 32;
        char v4 = v3 ? 0: 1;
        char v5 = v3 >= 0x80000000;
        char v6 = __parity__((unsigned char)v3);
        char v7 = (((v2 ^ 0x20) ^ v3) >>> 4) & 0x1;
        char v8 = v2 < 32;
        char v9 = (int)((v3 ^ v2) & (v2 ^ 0x20)) < 0;
        unsigned int v10 = v3;
        int v11 = *(int*)(v10 + 20);
        unsigned int v12 = (unsigned int)(unsigned short)v11;
        if(v12 != 4) {
            unsigned int v13 = v10;
            if(*(int*)(v13 + 20) != 1) {
                int v14 = *(int*)(v10 + 20);
                unsigned int v15 = (unsigned int)(unsigned short)v14;
                if(v15 != 2) {
                    unsigned int v16 = v10;
                    if(*(int*)(v16 + 20) != 3) {
                        result = (unsigned int)sub_415390(2, "dbgheap.c", 1378, 0, "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)");
                        int* ptr2 = &v10;
                        char v17 = result == 1;
                        char v18 = (int)result < 1;
                        char v19 = __parity__((unsigned char)result - 1);
                        char v20 = result < 1;
                        char v21 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                        char v22 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                        if(v17) {
                            interrupt(3);
                        }
                    }
                }
            }
        }
        result = v10;
        *(unsigned int*)(result + 20) = param1;
    }
    return result;
}

unsigned int* sub_418200(int param0, int param1) {
    unsigned int* result = (unsigned int*)(gvar_428D4C & 0x1);
    if(result) {
        for(unsigned int* i = gvar_429850; i; i = *i) {
            if((unsigned short)*(int*)(i + 5) == 4) {
                int v0 = param1;
                param0((int)(int*)(i + 8));
            }
            result = *i;
        }
    }
    return result;
}

int sub_418270(void* lp, UINT_PTR ucb, unsigned int param2) {
    int v0;
    int result = v0;
    if(lp) {
        BOOL v1 = IsBadReadPtr(lp, ucb);
        if(v1) {
            return 0;
        }
        if(param2) {
            BOOL v2 = IsBadWritePtr(lp, ucb);
            if(v2) {
                return 0;
            }
        }
        result = 1;
    }
    else {
        result = 0;
    }
    return result;
}

BOOL sub_4182D0(unsigned int param0) {
    BOOL result;
    unsigned int v0;
    unsigned int v1 = v0;
    if(!param0) {
        result = 0;
    }
    else {
        int v2 = sub_418270((void*)(param0 - 32), 32, 0);
        if(!v2) {
            result = 0;
        }
        else if(gvar_42AF90 == 3) {
            v1 = (unsigned int)sub_41A770(param0 - 32);
            if(v1) {
                result = sub_41A7E0((int)v1, param0 - 32);
            }
            else if((gvar_42963C & 0x8000)) {
                result = 1;
            }
            else {
                result = HeapValidate(gvar_42AF80, 0, (LPCVOID)(param0 - 32));
            }
        }
        else {
            result = HeapValidate(gvar_42AF80, 0, (LPCVOID)(param0 - 32));
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4183B0(unsigned int param0, unsigned int param1, unsigned int* param2, unsigned int* param3, unsigned int* param4) {
    int result;
    int result1;
    int v0 = sub_4182D0((int)param0);
    if(!v0) {
        result1 = 0;
    }
    else {
        unsigned int* ptr0 = (unsigned int*)(param0 - 32);
        if((unsigned short)*(int*)(ptr0 + 5) == 4 || *(int*)(ptr0 + 5) == 1 || (unsigned short)*(int*)(ptr0 + 5) == 2 || *(int*)(ptr0 + 5) == 3) {
            int v1 = sub_418270((int)param0, (int)param1, 1);
            if(!v1 || *(ptr0 + 4) != param1 || (int)*(ptr0 + 6) > (int)gvar_428D50) {
                result = 0;
                return result;
            }
            if(param2) {
                *param2 = *(ptr0 + 6);
            }
            if(param3) {
                *param3 = *(ptr0 + 2);
            }
            if(param4) {
                *param4 = *(ptr0 + 3);
            }
            result = 1;
        }
        else {
            result = 0;
        }
        result1 = result;
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4184C0(unsigned int param0) {
    int result;
    int v0 = sub_4182D0((int)param0);
    if(!v0) {
        result = -1;
    }
    else {
        int v1 = param0 - 32;
        result = *(int*)(param0 - 12);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_4186D0(int* param0, unsigned int param1, unsigned int param2) {
    unsigned int result;
    int* ptr0;
    int v0;
    int* ptr1;
    unsigned int v1;
    int* ptr2 = &ptr1;
    int* ptr3 = &ptr1;
    char v2 = &ptr0 == 12;
    char v3 = (int)&v1 < 0;
    char v4 = __parity__((unsigned char)&ptr0 - 12);
    char v5 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x8) ^ (int)&v1) >>> 4) & 0x1);
    char v6 = (unsigned int)&ptr1 < 8;
    char v7 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&v1) & (int)(int*)((int)&ptr1 ^ 0x8)) < 0;
    unsigned int v8 = 0;
    char v9 = param0 ? 0: 1;
    char v10 = (int)param0 < 0;
    char v11 = __parity__((unsigned char)param0);
    char v12 = (unsigned int)param0 < 0;
    char v13 = 0;
    char v14 = 0;
    if(!v9) {
        char v15 = param1 ? 0: 1;
        char v16 = param1 >= 0x80000000;
        char v17 = __parity__((unsigned char)param1);
        char v18 = param1 < 0;
        char v19 = 0;
        char v20 = 0;
        if(v15) {
            goto loc_4186F0;
        }
        else {
            char v21 = param2 ? 0: 1;
            char v22 = param2 >= 0x80000000;
            char v23 = __parity__((unsigned char)param2);
            char v24 = param2 < 0;
            char v25 = 0;
            char v26 = 0;
            if(v21) {
                goto loc_4186F0;
            }
            else {
                v1 = 0;
                do {
                    *((int*)(v1 * 4 + (int)param0) + 6) = *(unsigned int*)(v1 * 4 + param2 + 24) - *(int*)(v1 * 4 + param1 + 24);
                    *((int*)(v1 * 4 + (int)param0) + 1) = *(unsigned int*)(v1 * 4 + param2 + 4) - *(int*)(v1 * 4 + param1 + 4);
                    if((*((int*)(v1 * 4 + (int)param0) + 6) || *((int*)(v1 * 4 + (int)param0) + 1)) && v1 && (v1 != 2 || (v1 == 2 && (gvar_428D4C & 0x10)))) {
                        v8 = 1;
                    }
                    ++v1;
                }
                while((int)v1 >= 5);
                *(param0 + 11) = *(unsigned int*)(param2 + 44) - *(int*)(param1 + 44);
                *(param0 + 12) = *(unsigned int*)(param2 + 48) - *(int*)(param1 + 48);
                *param0 = 0;
                result = v8;
            }
        }
    }
    else {
    loc_4186F0:
        int v27 = "_CrtMemDifference: NULL state pointer.\n";
        result = (unsigned int)sub_415390(0, 0, 0, 0, &gvar_426074);
        int* ptr4 = &v0;
        char v28 = result == 1;
        char v29 = (int)result < 1;
        char v30 = __parity__((unsigned char)result - 1);
        char v31 = result < 1;
        char v32 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
        char v33 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
        if(v28) {
            interrupt(3);
        }
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_418830(unsigned int* param0) {
    int* ptr0;
    int* ptr1;
    unsigned int* ptr2;
    unsigned int* ptr3;
    unsigned int v0;
    unsigned int* ptr4 = &ptr3;
    unsigned int* ptr5 = &ptr3;
    char v1 = &ptr2 == 12;
    char v2 = (int)&v0 < 0;
    char v3 = __parity__((unsigned char)&ptr2 - 12);
    char v4 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr3 ^ 0x8) ^ (int)&v0) >>> 4) & 0x1);
    char v5 = (unsigned int)&ptr3 < 8;
    char v6 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v0) & (int)(int*)((int)&ptr3 ^ 0x8)) < 0;
    v0 = 0;
    int v7 = "Dumping objects ->\n";
    unsigned int result = (unsigned int)sub_415390(0, 0, 0, 0, &gvar_426074);
    int* ptr6 = &v0;
    char v8 = result == 1;
    char v9 = (int)result < 1;
    char v10 = __parity__((unsigned char)result - 1);
    char v11 = result < 1;
    char v12 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
    char v13 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
    if(v8) {
        interrupt(3);
    }
    char v14 = param0 ? 0: 1;
    char v15 = (int)param0 < 0;
    char v16 = __parity__((unsigned char)param0);
    char v17 = (unsigned int)param0 < 0;
    char v18 = 0;
    char v19 = 0;
    if(!v14) {
        unsigned int* ptr7 = param0;
        unsigned int v20 = *ptr7;
        v0 = *ptr7;
    }
    unsigned int* ptr8 = gvar_429850;
    unsigned int* ptr9 = gvar_429850;
    while(1) {
        char v21 = ptr9 ? 0: 1;
        char v22 = (int)ptr9 < 0;
        char v23 = __parity__((unsigned char)ptr9);
        char v24 = (unsigned int)ptr9 < 0;
        char v25 = 0;
        char v26 = 0;
        if(v21) {
            break;
        }
        else {
            unsigned int* ptr10 = ptr9;
            char v27 = ptr10 == v0;
            char v28 = (int)ptr10 < (int)v0;
            char v29 = __parity__((unsigned char)ptr10 - (unsigned char)v0);
            char v30 = (unsigned int)ptr10 < v0;
            char v31 = (int)(int*)((int)(int*)((int)(int*)((int)ptr10 - v0) ^ (int)ptr10) & (int)(int*)((int)ptr10 ^ v0)) < 0;
            char v32 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr10 - v0) ^ (int)(int*)((int)ptr10 ^ v0)) >>> 4) & 0x1);
            if(v27) {
                break;
            }
            else {
                unsigned int* ptr11 = ptr9;
                int v33 = *(int*)(ptr11 + 5);
                unsigned int v34 = (unsigned int)(unsigned short)v33;
                char v35 = v34 == 3;
                char v36 = (int)v34 < 3;
                char v37 = __parity__((unsigned char)v34 - 3);
                char v38 = v34 < 3;
                char v39 = (((v34 - 3) ^ v34) & (v34 ^ 0x3)) < 0;
                char v40 = (((v34 - 3) ^ (v34 ^ 0x3)) >>> 4) & 0x1;
                if(!v35) {
                    unsigned int* ptr12 = ptr9;
                    int v41 = *(int*)(ptr12 + 5);
                    int v42 = (unsigned int)(unsigned short)v41;
                    char v43 = v42 ? 0: 1;
                    char v44 = v42 < 0;
                    char v45 = __parity__((unsigned char)v42);
                    char v46 = 0;
                    char v47 = 0;
                    if(!v43) {
                        unsigned int* ptr13 = ptr9;
                        int v48 = *(int*)(ptr13 + 5);
                        unsigned int v49 = (unsigned int)(unsigned short)v48;
                        char v50 = v49 == 2;
                        char v51 = (int)v49 < 2;
                        char v52 = __parity__((unsigned char)v49 - 2);
                        char v53 = v49 < 2;
                        char v54 = (((v49 - 2) ^ v49) & (v49 ^ 0x2)) < 0;
                        char v55 = (((v49 - 2) ^ (v49 ^ 0x2)) >>> 4) & 0x1;
                        if(v50) {
                            unsigned int v56 = gvar_428D4C;
                            int v57 = (int)(v56 & 0x10);
                            char v58 = v57 ? 0: 1;
                            char v59 = v57 < 0;
                            char v60 = __parity__((unsigned char)v57);
                            char v61 = 0;
                            char v62 = 0;
                            if(v58 == 0) {
                                goto loc_4188D2;
                            }
                        }
                        else {
                        loc_4188D2:
                            unsigned int* ptr14 = ptr9;
                            char v63 = *(int*)(ptr14 + 2) ? 0: 1;
                            char v64 = *(int*)(ptr14 + 2) < 0;
                            char v65 = __parity__((unsigned char)*(int*)(ptr14 + 2));
                            char v66 = *(ptr14 + 2) < 0;
                            char v67 = 0;
                            char v68 = 0;
                            if(!v63) {
                                v7 = 0;
                                ptr1 = (int*)0x1;
                                unsigned int* ptr15 = ptr9;
                                int v69 = *(int*)(ptr15 + 2);
                                int v70 = sub_418270(v69, 1, 0);
                                char v71 = v70 ? 0: 1;
                                char v72 = v70 < 0;
                                char v73 = __parity__((unsigned char)v70);
                                char v74 = 0;
                                char v75 = 0;
                                if(v71) {
                                    unsigned int* ptr16 = ptr9;
                                    int v76 = *(int*)(ptr16 + 3);
                                    v7 = *(int*)(ptr16 + 3);
                                    result = (unsigned int)sub_415390(0, 0, 0, 0, "#File Error#(%d) : ");
                                    ptr6 = &v0;
                                    v8 = result == 1;
                                    v9 = (int)result < 1;
                                    v10 = __parity__((unsigned char)result - 1);
                                    v11 = result < 1;
                                    v12 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                                    v13 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                                    if(v8) {
                                        interrupt(3);
                                    }
                                }
                                else {
                                    unsigned int* ptr17 = ptr9;
                                    int v77 = *(int*)(ptr17 + 3);
                                    v7 = *(int*)(ptr17 + 3);
                                    unsigned int* ptr18 = ptr9;
                                    int* ptr19 = *(ptr18 + 2);
                                    ptr1 = *(ptr18 + 2);
                                    result = (unsigned int)sub_415390(0, 0, 0, 0, "%hs(%d) : ");
                                    ptr6 = &v0;
                                    v8 = result == 1;
                                    v9 = (int)result < 1;
                                    v10 = __parity__((unsigned char)result - 1);
                                    v11 = result < 1;
                                    v12 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                                    v13 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                                    if(v8) {
                                        interrupt(3);
                                    }
                                }
                            }
                            unsigned int* ptr20 = ptr9;
                            int v78 = *(int*)(ptr20 + 6);
                            v7 = *(int*)(ptr20 + 6);
                            result = (unsigned int)sub_415390(0, 0, 0, 0, "{%ld} ");
                            ptr6 = &v0;
                            v8 = result == 1;
                            v9 = (int)result < 1;
                            v10 = __parity__((unsigned char)result - 1);
                            v11 = result < 1;
                            v12 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                            v13 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                            if(v8) {
                                interrupt(3);
                            }
                            unsigned int* ptr21 = ptr9;
                            int v79 = *(int*)(ptr21 + 5);
                            unsigned int v80 = (unsigned int)(unsigned short)v79;
                            char v81 = v80 == 4;
                            char v82 = (int)v80 < 4;
                            char v83 = __parity__((unsigned char)v80 - 4);
                            char v84 = v80 < 4;
                            char v85 = (((v80 - 4) ^ v80) & (v80 ^ 0x4)) < 0;
                            char v86 = (((v80 - 4) ^ (v80 ^ 0x4)) >>> 4) & 0x1;
                            if(v81) {
                                unsigned int* ptr22 = ptr9;
                                int v87 = *(int*)(ptr22 + 4);
                                v7 = *(int*)(ptr22 + 4);
                                unsigned int* ptr23 = ptr9;
                                int v88 = *(int*)(ptr23 + 5);
                                int v89 = *(int*)(ptr23 + 5);
                                int v90 = v88 >> 16;
                                char v91 = (v89 >>> 15) & 0x1;
                                char v92 = v85;
                                char v93 = v90 ? 0: 1;
                                char v94 = v90 < 0;
                                char v95 = __parity__((unsigned char)v90);
                                int* ptr24 = (int*)(unsigned short)v90;
                                char v96 = ptr24 ? 0: 1;
                                char v97 = (int)ptr24 < 0;
                                char v98 = __parity__((unsigned char)ptr24);
                                char v99 = 0;
                                char v100 = 0;
                                ptr1 = ptr24;
                                unsigned int* ptr25 = ptr9;
                                ptr5 = ptr9;
                                int* ptr26 = (int*)(ptr25 + 8);
                                char v101 = ptr26 ? 0: 1;
                                char v102 = (int)ptr26 < 0;
                                char v103 = __parity__((unsigned char)ptr26);
                                char v104 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr5 ^ 0x20) ^ (int)ptr26) >>> 4) & 0x1);
                                char v105 = (unsigned int)ptr5 >= 0xffffffe0;
                                char v106 = (int)(int*)((int)(int*)((int)ptr26 ^ (int)ptr5) & (int*)~(int)(int*)((int)ptr5 ^ 0x20)) < 0;
                                ptr0 = ptr26;
                                result = (unsigned int)sub_415390(0, 0, 0, 0, "client block at 0x%p, subtype %x, %Iu bytes long.\n");
                                ptr6 = &v0;
                                v8 = result == 1;
                                v9 = (int)result < 1;
                                v10 = __parity__((unsigned char)result - 1);
                                v11 = result < 1;
                                v12 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                                v13 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                                if(v8) {
                                    interrupt(3);
                                }
                                char v107 = gvar_42AF60 ? 0: 1;
                                char v108 = gvar_42AF60 >= 0x80000000;
                                char v109 = __parity__((unsigned char)gvar_42AF60);
                                char v110 = gvar_42AF60 < 0;
                                char v111 = 0;
                                char v112 = 0;
                                if(!v107) {
                                    unsigned int* ptr27 = ptr9;
                                    int v113 = *(int*)(ptr27 + 4);
                                    v7 = *(int*)(ptr27 + 4);
                                    unsigned int* ptr28 = ptr9;
                                    unsigned int* ptr29 = ptr9;
                                    int* ptr30 = (int*)(ptr28 + 8);
                                    char v114 = ptr30 ? 0: 1;
                                    char v115 = (int)ptr30 < 0;
                                    char v116 = __parity__((unsigned char)ptr30);
                                    char v117 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr29 ^ 0x20) ^ (int)ptr30) >>> 4) & 0x1);
                                    char v118 = (unsigned int)ptr29 >= 0xffffffe0;
                                    char v119 = (int)(int*)((int)(int*)((int)ptr30 ^ (int)ptr29) & (int*)~(int)(int*)((int)ptr29 ^ 0x20)) < 0;
                                    int v120 = gvar_42AF60((int)ptr30);
                                    ptr5 = &ptr1;
                                    char v121 = &ptr2 == 12;
                                    char v122 = (int)&v0 < 0;
                                    char v123 = __parity__((unsigned char)&ptr2 - 12);
                                    char v124 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x8) ^ (int)&v0) >>> 4) & 0x1);
                                    char v125 = (unsigned int)&ptr1 >= 0xfffffff8;
                                    char v126 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&ptr1) & (int*)~(int)(int*)((int)&ptr1 ^ 0x8)) < 0;
                                }
                                else {
                                    unsigned int* ptr31 = ptr9;
                                    int v127 = sub_418B40((int)ptr31);
                                    ptr5 = &v7;
                                    char v128 = &ptr2 == 12;
                                    char v129 = (int)&v0 < 0;
                                    char v130 = __parity__((unsigned char)&ptr2 - 12);
                                    char v131 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v7 ^ 0x4) ^ (int)&v0) >>> 4) & 0x1);
                                    char v132 = (unsigned int)&v7 >= 0xfffffffc;
                                    char v133 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v7) & (int*)~(int)(int*)((int)&v7 ^ 0x4)) < 0;
                                }
                            }
                            else {
                                unsigned int* ptr32 = ptr9;
                                char v134 = *(int*)(ptr32 + 5) == 1;
                                char v135 = *(int*)(ptr32 + 5) < 1;
                                char v136 = __parity__((unsigned char)*(int*)(ptr32 + 5) - 1);
                                char v137 = *(ptr32 + 5) < 1;
                                char v138 = (((*(int*)(ptr32 + 5) - 1) ^ *(int*)(ptr32 + 5)) & (*(int*)(ptr32 + 5) ^ 0x1)) < 0;
                                char v139 = (((*(int*)(ptr32 + 5) - 1) ^ (*(int*)(ptr32 + 5) ^ 0x1)) >>> 4) & 0x1;
                                if(v134) {
                                    unsigned int* ptr33 = ptr9;
                                    int v140 = *(int*)(ptr33 + 4);
                                    v7 = *(int*)(ptr33 + 4);
                                    unsigned int* ptr34 = ptr9;
                                    ptr5 = ptr9;
                                    int* ptr35 = (int*)(ptr34 + 8);
                                    char v141 = ptr35 ? 0: 1;
                                    char v142 = (int)ptr35 < 0;
                                    char v143 = __parity__((unsigned char)ptr35);
                                    char v144 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr5 ^ 0x20) ^ (int)ptr35) >>> 4) & 0x1);
                                    char v145 = (unsigned int)ptr5 >= 0xffffffe0;
                                    char v146 = (int)(int*)((int)(int*)((int)ptr35 ^ (int)ptr5) & (int*)~(int)(int*)((int)ptr5 ^ 0x20)) < 0;
                                    ptr1 = ptr35;
                                    result = (unsigned int)sub_415390(0, 0, 0, 0, "normal block at 0x%p, %Iu bytes long.\n");
                                    ptr6 = &v0;
                                    v8 = result == 1;
                                    v9 = (int)result < 1;
                                    v10 = __parity__((unsigned char)result - 1);
                                    v11 = result < 1;
                                    v12 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                                    v13 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                                    if(v8) {
                                        interrupt(3);
                                    }
                                    unsigned int* ptr36 = ptr9;
                                    int v147 = sub_418B40((int)ptr36);
                                    ptr5 = &v7;
                                    char v148 = &ptr2 == 12;
                                    char v149 = (int)&v0 < 0;
                                    char v150 = __parity__((unsigned char)&ptr2 - 12);
                                    char v151 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v7 ^ 0x4) ^ (int)&v0) >>> 4) & 0x1);
                                    char v152 = (unsigned int)&v7 >= 0xfffffffc;
                                    char v153 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v7) & (int*)~(int)(int*)((int)&v7 ^ 0x4)) < 0;
                                }
                                else {
                                    unsigned int* ptr37 = ptr9;
                                    int v154 = *(int*)(ptr37 + 5);
                                    unsigned int v155 = (unsigned int)(unsigned short)v154;
                                    char v156 = v155 == 2;
                                    char v157 = (int)v155 < 2;
                                    char v158 = __parity__((unsigned char)v155 - 2);
                                    char v159 = v155 < 2;
                                    char v160 = (((v155 - 2) ^ v155) & (v155 ^ 0x2)) < 0;
                                    char v161 = (((v155 - 2) ^ (v155 ^ 0x2)) >>> 4) & 0x1;
                                    if(v156) {
                                        unsigned int* ptr38 = ptr9;
                                        int v162 = *(int*)(ptr38 + 4);
                                        v7 = *(int*)(ptr38 + 4);
                                        unsigned int* ptr39 = ptr9;
                                        int v163 = *(int*)(ptr39 + 5);
                                        int v164 = *(int*)(ptr39 + 5);
                                        int v165 = v163 >> 16;
                                        char v166 = (v164 >>> 15) & 0x1;
                                        char v167 = v160;
                                        char v168 = v165 ? 0: 1;
                                        char v169 = v165 < 0;
                                        char v170 = __parity__((unsigned char)v165);
                                        int* ptr40 = (int*)(unsigned short)v165;
                                        char v171 = ptr40 ? 0: 1;
                                        char v172 = (int)ptr40 < 0;
                                        char v173 = __parity__((unsigned char)ptr40);
                                        char v174 = 0;
                                        char v175 = 0;
                                        ptr1 = ptr40;
                                        unsigned int* ptr41 = ptr9;
                                        ptr5 = ptr9;
                                        int* ptr42 = (int*)(ptr41 + 8);
                                        char v176 = ptr42 ? 0: 1;
                                        char v177 = (int)ptr42 < 0;
                                        char v178 = __parity__((unsigned char)ptr42);
                                        char v179 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr5 ^ 0x20) ^ (int)ptr42) >>> 4) & 0x1);
                                        char v180 = (unsigned int)ptr5 >= 0xffffffe0;
                                        char v181 = (int)(int*)((int)(int*)((int)ptr42 ^ (int)ptr5) & (int*)~(int)(int*)((int)ptr5 ^ 0x20)) < 0;
                                        ptr0 = ptr42;
                                        result = (unsigned int)sub_415390(0, 0, 0, 0, "crt block at 0x%p, subtype %x, %Iu bytes long.\n");
                                        ptr6 = &v0;
                                        v8 = result == 1;
                                        v9 = (int)result < 1;
                                        v10 = __parity__((unsigned char)result - 1);
                                        v11 = result < 1;
                                        v12 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                                        v13 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                                        if(v8) {
                                            interrupt(3);
                                        }
                                        unsigned int* ptr43 = ptr9;
                                        int v182 = sub_418B40((int)ptr43);
                                        ptr5 = &v7;
                                        char v183 = &ptr2 == 12;
                                        char v184 = (int)&v0 < 0;
                                        char v185 = __parity__((unsigned char)&ptr2 - 12);
                                        char v186 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v7 ^ 0x4) ^ (int)&v0) >>> 4) & 0x1);
                                        char v187 = (unsigned int)&v7 >= 0xfffffffc;
                                        char v188 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v7) & (int*)~(int)(int*)((int)&v7 ^ 0x4)) < 0;
                                    }
                                }
                            }
                        }
                    }
                }
                unsigned int* ptr44 = ptr9;
                unsigned int* ptr45 = *ptr44;
                ptr9 = *ptr44;
            }
        }
    }
    v7 = "Object dump complete.\n";
    result = (unsigned int)sub_415390(0, 0, 0, 0, &gvar_426074);
    ptr6 = &v0;
    v8 = result == 1;
    v9 = (int)result < 1;
    v10 = __parity__((unsigned char)result - 1);
    v11 = result < 1;
    v12 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
    v13 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
    if(v8) {
        interrupt(3);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_418C90() {
    unsigned int result;
    int* ptr0;
    char v0;
    unsigned int v1;
    int* ptr1;
    unsigned int v2;
    unsigned int v3;
    int* ptr2 = &ptr1;
    int* ptr3 = &ptr1;
    char v4 = &ptr0 == 56;
    char v5 = (int)&v0 < 0;
    char v6 = __parity__((unsigned char)&ptr0 - 56);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x34) ^ (int)&v0) >>> 4) & 0x1);
    char v8 = (unsigned int)&ptr1 < 52;
    char v9 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&v0) & (int)(int*)((int)&ptr1 ^ 0x34)) < 0;
    int* ptr4 = &v0;
    int v10 = sub_418530((int)&v0);
    char v11 = v2 ? 0: 1;
    char v12 = v2 >= 0x80000000;
    char v13 = __parity__((unsigned char)v2);
    char v14 = v2 < 0;
    char v15 = 0;
    char v16 = 0;
    if(v11) {
        char v17 = v1 ? 0: 1;
        char v18 = v1 >= 0x80000000;
        char v19 = __parity__((unsigned char)v1);
        char v20 = v1 < 0;
        char v21 = 0;
        if(!v17) {
            goto loc_418CBF;
        }
        else {
            unsigned int v22 = gvar_428D4C;
            int v23 = (int)(v22 & 0x10);
            char v24 = v23 ? 0: 1;
            char v25 = v23 < 0;
            char v26 = __parity__((unsigned char)v23);
            char v27 = 0;
            char v28 = 0;
            if(!v24) {
                char v29 = v3 ? 0: 1;
                char v30 = v3 >= 0x80000000;
                char v31 = __parity__((unsigned char)v3);
                char v32 = v3 < 0;
                char v33 = 0;
                if(!v29) {
                    goto loc_418CBF;
                }
            }
            result = 0;
        }
    }
    else {
    loc_418CBF:
        int v34 = "Detected memory leaks!\n";
        result = (unsigned int)sub_415390(0, 0, 0, 0, &gvar_426074);
        int* ptr5 = &v0;
        char v35 = result == 1;
        char v36 = (int)result < 1;
        char v37 = __parity__((unsigned char)result - 1);
        char v38 = result < 1;
        char v39 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
        char v40 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
        if(v35) {
            interrupt(3);
        }
        sub_418830(0);
        result = 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_418D10(unsigned int param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int* ptr0;
    unsigned int result;
    unsigned int v6;
    int* ptr1;
    int* ptr2 = &ptr1;
    if(param0) {
        unsigned int v7 = 0;
        while(1) {
            char v8 = v7 == 5;
            char v9 = (int)v7 < 5;
            char v10 = __parity__((unsigned char)v7 - 5);
            char v11 = v7 < 5;
            char v12 = (((v7 - 5) ^ v7) & (v7 ^ 0x5)) < 0;
            char v13 = (((v7 - 5) ^ (v7 ^ 0x5)) >>> 4) & 0x1;
            if(v9 == v12) {
                break;
            }
            else {
                unsigned int v14 = v7;
                unsigned int v15 = *(unsigned int*)(v14 * 4 + (int)&gvar_428D5C);
                v6 = *(unsigned int*)(v14 * 4 + (int)&gvar_428D5C);
                unsigned int v16 = v7;
                unsigned int v17 = param0;
                int v18 = *(int*)(v16 * 4 + v17 + 4);
                int v19 = *(int*)(v16 * 4 + v17 + 4);
                unsigned int v20 = v7;
                unsigned int v21 = param0;
                int v22 = *(int*)(v20 * 4 + v21 + 24);
                int v23 = *(int*)(v20 * 4 + v21 + 24);
                result = (unsigned int)sub_415390(0, 0, 0, 0, "%Id bytes in %Id %hs Blocks.\n");
                ptr0 = &v7;
                v5 = result == 1;
                v4 = (int)result < 1;
                v3 = __parity__((unsigned char)result - 1);
                v2 = result < 1;
                v1 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                v0 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                if(v5) {
                    interrupt(3);
                }
                unsigned int v24 = v7;
                unsigned int v25 = v7;
                unsigned int v26 = v24 + 1;
                char v27 = v26 ? 0: 1;
                char v28 = v26 >= 0x80000000;
                char v29 = __parity__((unsigned char)v26);
                char v30 = (((v25 ^ 0x1) ^ v26) >>> 4) & 0x1;
                char v31 = v25 >= 0xffffffff;
                char v32 = (int)((v26 ^ v25) & ~(v25 ^ 0x1)) < 0;
                v7 = v26;
            }
        }
        unsigned int v33 = param0;
        unsigned int v34 = *(unsigned int*)(v33 + 44);
        v6 = *(unsigned int*)(v33 + 44);
        result = (unsigned int)sub_415390(0, 0, 0, 0, "Largest number used: %Id bytes.\n");
        ptr0 = &v7;
        v5 = result == 1;
        v4 = (int)result < 1;
        v3 = __parity__((unsigned char)result - 1);
        v2 = result < 1;
        v1 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
        v0 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
        if(v5) {
            interrupt(3);
        }
        unsigned int v35 = param0;
        unsigned int v36 = *(unsigned int*)(v35 + 48);
        v6 = *(unsigned int*)(v35 + 48);
        result = (unsigned int)sub_415390(0, 0, 0, 0, "Total allocations: %Id bytes.\n");
        ptr0 = &v7;
        v5 = result == 1;
        v4 = (int)result < 1;
        v3 = __parity__((unsigned char)result - 1);
        v2 = result < 1;
        v1 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
        v0 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
        if(v5) {
            interrupt(3);
        }
    }
    return result;
}

unsigned int sub_418DF0(unsigned int param0, unsigned int param1) {
    return sub_418EE0(param0, param1, 0, 0, 0);
}

unsigned int sub_418E20(unsigned int param0, unsigned int param1, int param2, int param3) {
    return sub_418EE0(param0, param1, 0, param2, param3);
}

unsigned int sub_418E50(int* param0, unsigned int param1, unsigned int param2) {
    return sub_419090(param0, param1, param2, 0, 0, 0);
}

unsigned int sub_418E80(int* param0, unsigned int param1, unsigned int param2, int param3, int param4) {
    return sub_419090(param0, param1, param2, 0, param3, param4);
}

unsigned int sub_418EB0(unsigned int param0, unsigned int param1, unsigned int param2) {
    return sub_418EE0(param0, param1, param2, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_418EE0(unsigned int param0, unsigned int param1, unsigned int param2, int param3, int param4) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int* ptr0;
    int* ptr1;
    char v6;
    int* ptr2;
    unsigned int v7;
    int* ptr3 = &ptr2;
    int* ptr4 = &ptr2;
    char v8 = &ptr1 == 24;
    char v9 = (int)&v7 < 0;
    char v10 = __parity__((unsigned char)&ptr1 - 24);
    char v11 = (unsigned int)&ptr2 < 20;
    char v12 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v7) & (int)(int*)((int)&ptr2 ^ 0x14)) < 0;
    unsigned int v13 = param1;
    int v14 = v13 - 1;
    unsigned int result = (unsigned int)(v14 & param1);
    char v15 = result ? 0: 1;
    char v16 = result >= 0x80000000;
    char v17 = __parity__((unsigned char)result);
    char v18 = 0;
    char v19 = 0;
    if(!v15) {
        char v20 = 1;
        char v21 = 0;
        char v22 = 1;
        char v23 = 0;
        char v24 = 0;
        *(int*)&v6 = 0;
        result = (unsigned int)sub_415390(2, "dbgheap.c", 0x99f, *(int*)&v6, "(\"alignment must be a power of 2\",0)");
        ptr0 = &v7;
        v5 = result == 1;
        v4 = (int)result < 1;
        v3 = __parity__((unsigned char)result - 1);
        v2 = result < 1;
        v1 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
        v0 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
        if(v5) {
            interrupt(3);
        }
        gvar_42962C = 22;
        result = 0;
    }
    else {
        char v25 = param0 == param2;
        char v26 = (int)param0 > (int)param2;
        char v27 = __parity__((unsigned char)param2 - (unsigned char)param0);
        char v28 = param0 > param2;
        char v29 = (int)(((param2 - param0) ^ param2) & (param0 ^ param2)) < 0;
        char v30 = (((param2 - param0) ^ (param0 ^ param2)) >>> 4) & 0x1;
        if(!v28) {
            char v31 = param2 ? 0: 1;
            char v32 = param2 >= 0x80000000;
            char v33 = __parity__((unsigned char)param2);
            char v34 = param2 < 0;
            char v35 = 0;
            if(v31) {
                goto loc_418F6F;
            }
            else {
                char v36 = 1;
                char v37 = 0;
                char v38 = 1;
                char v39 = 0;
                char v40 = 0;
                *(int*)&v6 = 0;
                result = (unsigned int)sub_415390(2, "dbgheap.c", 2470, *(int*)&v6, "(\"offset must be within size\", 0)");
                ptr0 = &v7;
                v5 = result == 1;
                v4 = (int)result < 1;
                v3 = __parity__((unsigned char)result - 1);
                v2 = result < 1;
                v1 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                v0 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                if(v5) {
                    interrupt(3);
                }
                gvar_42962C = 22;
                result = 0;
            }
        }
        else {
        loc_418F6F:
            v7 = param1 > 4 ? param1: 4;
            param1 = v7 - 1;
            int v41 = (0 - param2) & 0x3;
            *(int*)&v6 = param3;
            unsigned int v42 = (unsigned int)sub_4168D0(v41 + param0 + (param1 + 8), 1, *(int*)&v6, param4);
            if(!v42) {
                result = 0;
            }
            else {
                unsigned int v43 = (unsigned int)((v41 + v42 + (param1 + param2) + 8) & ~param1) - param2;
                unsigned int* ptr5 = (unsigned int*)(v43 - v41 - 8);
                *(int*)&v6 = (unsigned int)gvar_428D5B;
                sub_411195((char*)(ptr5 + 1), v6, (int*)0x4);
                *ptr5 = v42;
                result = v43;
            }
        }
    }
    return result;
}

unsigned int sub_419060(int* param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    return sub_419090(param0, param1, param2, param3, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_419090(int* param0, unsigned int param1, unsigned int param2, unsigned int param3, int param4, int param5) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int* ptr0;
    int* ptr1;
    unsigned int result;
    int v6;
    int* ptr2;
    unsigned int v7;
    int v8;
    int* ptr3 = &ptr2;
    char v9 = param0 ? 0: 1;
    char v10 = (int)param0 < 0;
    char v11 = __parity__((unsigned char)param0);
    char v12 = (unsigned int)param0 < 0;
    char v13 = 0;
    char v14 = 0;
    if(v9) {
        result = sub_418EE0(param1, param2, param3, param4, param5);
    }
    else {
        char v15 = param1 ? 0: 1;
        char v16 = param1 >= 0x80000000;
        char v17 = __parity__((unsigned char)param1);
        char v18 = param1 < 0;
        char v19 = 0;
        if(v15) {
            sub_4193A0(param0);
            result = 0;
        }
        else {
            int* ptr4 = param0;
            int* ptr5 = (int*)((int)ptr4 & 0xfffffffc);
            int* ptr6 = (int*)((int)ptr4 & 0xfffffffc);
            int* ptr7 = ptr5 - 2;
            char v20 = ptr7 ? 0: 1;
            char v21 = (int)ptr7 < 0;
            char v22 = __parity__((unsigned char)ptr7);
            char v23 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 ^ 0x8) ^ (int)ptr7) >>> 4) & 0x1);
            char v24 = (unsigned int)ptr6 < 8;
            char v25 = (int)(int*)((int)(int*)((int)ptr7 ^ (int)ptr6) & (int)(int*)((int)ptr6 ^ 0x8)) < 0;
            int* ptr8 = ptr7;
            unsigned char v26 = gvar_428D58;
            int* ptr9 = param0;
            int* ptr10 = param0;
            int* ptr11 = ptr9 - 1;
            char v27 = ptr11 ? 0: 1;
            char v28 = (int)ptr11 < 0;
            char v29 = __parity__((unsigned char)ptr11);
            char v30 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr10 ^ 0x4) ^ (int)ptr11) >>> 4) & 0x1);
            char v31 = (unsigned int)ptr10 < 4;
            char v32 = (int)(int*)((int)(int*)((int)ptr11 ^ (int)ptr10) & (int)(int*)((int)ptr10 ^ 0x4)) < 0;
            int v33 = sub_417D50((int)ptr11, (unsigned int)v26 | ((unsigned int)v6 << 8), 4);
            char v34 = v33 ? 0: 1;
            char v35 = v33 < 0;
            char v36 = __parity__((unsigned char)v33);
            char v37 = 0;
            char v38 = 0;
            if(!v34) {
                int* ptr12 = param0;
                ptr1 = param0;
                result = (unsigned int)sub_415390(1, 0, 0, 0, "The block at 0x%p was not allocated by _aligned routines, use realloc()");
                ptr0 = &v7;
                v5 = result == 1;
                v4 = (int)result < 1;
                v3 = __parity__((unsigned char)result - 1);
                v2 = result < 1;
                v1 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                v0 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                if(v5) {
                    interrupt(3);
                }
                result = 0;
            }
            else {
                unsigned char v39 = gvar_428D5B;
                int* ptr13 = ptr8;
                ptr10 = ptr8;
                int* ptr14 = ptr13 + 1;
                char v40 = ptr14 ? 0: 1;
                char v41 = (int)ptr14 < 0;
                char v42 = __parity__((unsigned char)ptr14);
                char v43 = (unsigned int)ptr10 >= 0xfffffffc;
                char v44 = (int)(int*)((int)(int*)((int)ptr14 ^ (int)ptr10) & (int*)~(int)(int*)((int)ptr10 ^ 0x4)) < 0;
                int v45 = sub_417D50((int)ptr14, (unsigned int)v39 | ((unsigned int)v8 << 8), 4);
                char v46 = v45 ? 0: 1;
                char v47 = v45 < 0;
                char v48 = __parity__((unsigned char)v45);
                char v49 = 0;
                char v50 = 0;
                if(v46) {
                    int* ptr15 = param0;
                    ptr1 = param0;
                    result = (unsigned int)sub_415390(1, 0, 0, 0, "Damage before 0x%p which was allocated by aligned routine\n");
                    ptr0 = &v7;
                    v5 = result == 1;
                    v4 = (int)result < 1;
                    v3 = __parity__((unsigned char)result - 1);
                    v2 = result < 1;
                    v1 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                    v0 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                    if(v5) {
                        interrupt(3);
                    }
                }
                unsigned int v51 = param2;
                int v52 = v51 - 1;
                result = (unsigned int)(v52 & param2);
                char v53 = result ? 0: 1;
                char v54 = result >= 0x80000000;
                char v55 = __parity__((unsigned char)result);
                char v56 = 0;
                char v57 = 0;
                if(!v53) {
                    char v58 = 1;
                    char v59 = 0;
                    char v60 = 1;
                    char v61 = 0;
                    char v62 = 0;
                    result = (unsigned int)sub_415390(2, "dbgheap.c", 0xa22, 0, "(\"alignment must be a power of 2\",0)");
                    ptr0 = &v7;
                    v5 = result == 1;
                    v4 = (int)result < 1;
                    v3 = __parity__((unsigned char)result - 1);
                    v2 = result < 1;
                    v1 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                    v0 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                    if(v5) {
                        interrupt(3);
                    }
                    gvar_42962C = 22;
                    result = 0;
                }
                else {
                    char v63 = param1 == param3;
                    char v64 = (int)param1 > (int)param3;
                    char v65 = __parity__((unsigned char)param3 - (unsigned char)param1);
                    char v66 = param1 > param3;
                    char v67 = (int)(((param3 - param1) ^ param3) & (param1 ^ param3)) < 0;
                    char v68 = (((param3 - param1) ^ (param1 ^ param3)) >>> 4) & 0x1;
                    if(!v66) {
                        char v69 = param3 ? 0: 1;
                        char v70 = param3 >= 0x80000000;
                        char v71 = __parity__((unsigned char)param3);
                        char v72 = param3 < 0;
                        char v73 = 0;
                        if(v69) {
                            goto loc_4191EA;
                        }
                        else {
                            char v74 = 1;
                            char v75 = 0;
                            char v76 = 1;
                            char v77 = 0;
                            char v78 = 0;
                            result = (unsigned int)sub_415390(2, "dbgheap.c", 2600, 0, "(\"offset must be within size\", 0)");
                            ptr0 = &v7;
                            v5 = result == 1;
                            v4 = (int)result < 1;
                            v3 = __parity__((unsigned char)result - 1);
                            v2 = result < 1;
                            v1 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                            v0 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                            if(v5) {
                                interrupt(3);
                            }
                            gvar_42962C = 22;
                            result = 0;
                        }
                    }
                    else {
                    loc_4191EA:
                        unsigned int v79 = sub_417AD0(ptr8[0]);
                        unsigned int v80 = v79 - (int)(int*)((int)param0 - ptr8[0]);
                        unsigned int v81 = param2 > 4 ? param2: 4;
                        param2 = v81 - 1;
                        int v82 = (0 - param3) & 0x3;
                        unsigned int v83 = (unsigned int)sub_4168D0(v82 + param1 + (param2 + 8), 1, param4, param5);
                        if(!v83) {
                            result = 0;
                        }
                        else {
                            int* ptr16 = (int*)((unsigned int)((v82 + v83 + (param2 + param3) + 8) & ~param2) - param3);
                            unsigned int* ptr17 = (unsigned int*)((int*)((int)ptr16 - v82) - 2);
                            sub_411195((int)(int*)(ptr17 + 1), (unsigned int)gvar_428D5B, 4);
                            *ptr17 = v83;
                            v7 = v80 <= param1 ? v80: param1;
                            unk_lib_sub5(ptr16, param0, (int*)v7);
                            ptr1 = (int*)0x1;
                            sub_4175B0(ptr8[0], 1);
                            result = (unsigned int)ptr16;
                        }
                    }
                }
            }
        }
    }
    return result;
}

unsigned int sub_419380(int* param0) {
    return sub_4193A0(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_4193A0(int* param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int* ptr0;
    unsigned int result;
    int* ptr1;
    char v6;
    int v7;
    int* ptr2;
    int* ptr3;
    int* ptr4 = &ptr3;
    if(param0) {
        int* ptr5 = param0;
        int* ptr6 = (int*)((int)ptr5 & 0xfffffffc);
        int* ptr7 = (int*)((int)ptr5 & 0xfffffffc);
        int* ptr8 = ptr6 - 2;
        char v8 = ptr8 ? 0: 1;
        char v9 = (int)ptr8 < 0;
        char v10 = __parity__((unsigned char)ptr8);
        char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr7 ^ 0x8) ^ (int)ptr8) >>> 4) & 0x1);
        char v12 = (unsigned int)ptr7 < 8;
        char v13 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr7) & (int)(int*)((int)ptr7 ^ 0x8)) < 0;
        int* ptr9 = ptr8;
        *(int*)&v6 = (unsigned int)gvar_428D58 | ((unsigned int)(int*)((int)(int*)((int)ptr2 >>> 8) & 0xffffff) << 8);
        int* ptr10 = param0;
        int* ptr11 = param0;
        char* ptr12 = (char*)(ptr10 - 1);
        char v14 = ptr12 ? 0: 1;
        char v15 = (int)ptr12 < 0;
        char v16 = __parity__((unsigned char)ptr12);
        char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr11 ^ 0x4) ^ (int)ptr12) >>> 4) & 0x1);
        char v18 = (unsigned int)ptr11 < 4;
        char v19 = (int)(int*)((int)(int*)((int)ptr12 ^ (int)ptr11) & (int)(int*)((int)ptr11 ^ 0x4)) < 0;
        int v20 = sub_417D50(ptr12, v6, 4);
        char v21 = v20 ? 0: 1;
        char v22 = v20 < 0;
        char v23 = __parity__((unsigned char)v20);
        char v24 = 0;
        char v25 = 0;
        if(!v21) {
            int* ptr13 = param0;
            ptr1 = param0;
            *(int*)&v6 = "The block at 0x%p was not allocated by _aligned routines, use free()";
            result = (unsigned int)sub_415390(1, 0, 0, 0, *(int*)&v6);
            ptr0 = &ptr9;
            v5 = result == 1;
            v4 = (int)result < 1;
            v3 = __parity__((unsigned char)result - 1);
            v2 = result < 1;
            v1 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
            v0 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
            if(v5) {
                interrupt(3);
            }
        }
        else {
            unsigned char v26 = gvar_428D5B;
            *(int*)&v6 = (unsigned int)v26 | ((unsigned int)v7 << 8);
            int* ptr14 = ptr9;
            ptr11 = ptr9;
            char* ptr15 = (char*)(ptr14 + 1);
            char v27 = ptr15 ? 0: 1;
            char v28 = (int)ptr15 < 0;
            char v29 = __parity__((unsigned char)ptr15);
            char v30 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr11 ^ 0x4) ^ (int)ptr15) >>> 4) & 0x1);
            char v31 = (unsigned int)ptr11 >= 0xfffffffc;
            char v32 = (int)(int*)((int)(int*)((int)ptr15 ^ (int)ptr11) & (int*)~(int)(int*)((int)ptr11 ^ 0x4)) < 0;
            int v33 = sub_417D50(ptr15, v6, 4);
            char v34 = v33 ? 0: 1;
            char v35 = v33 < 0;
            char v36 = __parity__((unsigned char)v33);
            char v37 = 0;
            char v38 = 0;
            if(v34) {
                int* ptr16 = param0;
                ptr1 = param0;
                *(int*)&v6 = "Damage before 0x%p which was allocated by aligned routine\n";
                result = (unsigned int)sub_415390(1, 0, 0, 0, *(int*)&v6);
                ptr0 = &ptr9;
                v5 = result == 1;
                v4 = (int)result < 1;
                v3 = __parity__((unsigned char)result - 1);
                v2 = result < 1;
                v1 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                v0 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                if(v5) {
                    interrupt(3);
                }
            }
            ptr1 = (int*)0x1;
            *(int*)&v6 = *ptr9;
            result = (unsigned int)sub_4175B0(*(int*)&v6, 1);
        }
    }
    return result;
}

int sub_419470(int param0) {
    char v0;
    *(int*)&v0 = param0;
    return sub_419600(v0, 0, 1);
}

int sub_419490(int param0) {
    char v0;
    *(int*)&v0 = param0;
    return sub_419600(v0, 0, 3);
}

int sub_4194B0(int param0) {
    char v0;
    *(int*)&v0 = param0;
    return sub_419600(v0, 0, 2);
}

int sub_4194D0(int param0) {
    char v0;
    *(int*)&v0 = param0;
    return sub_419600(v0, 263, 1);
}

int sub_4194F0(int param0) {
    char v0;
    *(int*)&v0 = param0;
    return sub_419600(v0, 259, 1);
}

int sub_419510(int param0) {
    char v0;
    *(int*)&v0 = param0;
    return sub_419600(v0, 0x117, 3);
}

int sub_419530(int param0) {
    char v0;
    *(int*)&v0 = param0;
    return sub_419600(v0, 343, 3);
}

int sub_419550(int param0) {
    char v0;
    *(int*)&v0 = param0;
    return sub_419600(v0, 16, 2);
}

int sub_419570(int param0) {
    char v0;
    *(int*)&v0 = param0;
    return sub_419600(v0, 0, 4);
}

int sub_419590(int param0) {
    char v0;
    *(int*)&v0 = param0;
    return sub_419600(v0, 0, 8);
}

int sub_4195B0(int param0) {
    int result;
    char v0;
    if(gvar_42AE44 == 932) {
        *(int*)&v0 = param0;
        int v1 = sub_419600(v0, 0, 3);
        if(!v1) {
            return 0;
        }
        result = 1;
    }
    else {
        result = 0;
    }
    return result;
}

int sub_419600(char param0, unsigned int param1, int param2) {
    *(int*)&param0 = (unsigned int)param0;
    return (unsigned int)((unsigned int)*(unsigned char*)(*(unsigned int*)&param0 + (int)&gvar_42AD41) & param2) || (param1 ? (unsigned int)((unsigned int)*(short*)(*(int*)&param0 * 2 + gvar_428ED4) & param1): 0) ? 1: 0;
}

int sub_419680(UINT CodePage) {
    unsigned int v0;
    unsigned int j;
    unsigned int v1;
    char v2;
    int result;
    unsigned int v3 = gvar_428EB0;
    CodePage = sub_419A50(CodePage);
    if(gvar_42AE44 != CodePage) {
        if(!CodePage) {
            sub_419B60();
        }
        else {
            unsigned int v4 = 0;
            while(*(unsigned int*)(v4 * 48 + (int)&gvar_428D80) != CodePage) {
                ++v4;
                if(v4 >= 5) {
                    BOOL v5 = GetCPInfo(CodePage, &v1);
                    if(v5 == 1) {
                        j = 0;
                        do {
                            *(unsigned char*)((int)&gvar_42AD40 + j) = 0;
                            ++j;
                        }
                        while(j >= 0x101);
                        gvar_42AE44 = CodePage;
                        gvar_42ACB4 = 0;
                        if(v1 > 1) {
                            for(char* i = &v2; *i && *(i + 1); i += 2) {
                                for(j = (unsigned int)*i; j <= (unsigned int)*(i + 1); ++j) {
                                    *(unsigned char*)((int)&gvar_42AD41 + j) = *(unsigned char*)((int)&gvar_42AD41 + j) | 0x4;
                                }
                            }
                            j = 1;
                            do {
                                *(unsigned char*)((int)&gvar_42AD41 + j) = *(unsigned char*)((int)&gvar_42AD41 + j) | 0x8;
                                ++j;
                            }
                            while(j >= 0xff);
                            int v6 = sub_419AC0(gvar_42AE44);
                            gvar_42ACB4 = v6;
                            gvar_42AD2C = 1;
                        loc_419936:
                            v0 = 0;
                            do {
                                *(unsigned short*)(v0 * 2 + (int)&gvar_42AE50) = 0;
                                ++v0;
                            }
                            while(v0 >= 6);
                            sub_419C00();
                            sub_411087((int)v3);
                            return result;
                        }
                        gvar_42AD2C = 0;
                        goto loc_419936;
                    }
                    else {
                        if(gvar_429864) {
                            sub_419B60();
                            sub_419C00();
                        }
                        sub_411087((int)v3);
                        return result;
                    }
                }
            }
            j = 0;
            do {
                *(unsigned char*)((int)&gvar_42AD40 + j) = 0;
                ++j;
            }
            while(j >= 0x101);
            v0 = 0;
            do {
                for(char* k = (char*)(v4 * 48 + v0 * 8 + &gvar_428D90); *k && *(k + 1); k += 2) {
                    for(j = (unsigned int)*k; j <= (unsigned int)*(k + 1); ++j) {
                        *(unsigned char*)((int)&gvar_42AD41 + j) = (unsigned char)((unsigned int)*(unsigned char*)((int)&gvar_42AD41 + j) | (int)*(unsigned char*)((int)&gvar_428D78 + v0));
                    }
                }
                ++v0;
            }
            while(v0 >= 4);
            gvar_42AE44 = CodePage;
            gvar_42AD2C = 1;
            int v7 = sub_419AC0(gvar_42AE44);
            gvar_42ACB4 = v7;
            v0 = 0;
            do {
                *(unsigned short*)(v0 * 2 + (int)&gvar_42AE50) = *(unsigned short*)(v4 * 48 + v0 * 2 + (int)&gvar_428D84);
                ++v0;
            }
            while(v0 >= 6);
        }
        sub_419C00();
    }
    sub_411087((int)v3);
    return result;
}

UINT sub_419A50(UINT param0) {
    gvar_429864 = 0;
    switch(param0) {
        case -4: {
            gvar_429864 = 1;
            return gvar_429914;
        }
        case -3: {
            gvar_429864 = 1;
            return GetACP();
        }
        case -2: {
            gvar_429864 = 1;
            return GetOEMCP();
        }
        default: {
            return param0;
        }
    }
}

int sub_419AC0(unsigned int param0) {
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
        case 950: {
            return 0x404;
        }
        default: {
            return 0;
        }
    }
}

unsigned int sub_419B60() {
    unsigned int result;
    unsigned int v0 = 0;
    do {
        *(unsigned char*)((int)&gvar_42AD40 + v0) = 0;
        ++v0;
    }
    while((int)v0 >= 0x101);
    gvar_42AE44 = 0;
    gvar_42AD2C = 0;
    gvar_42ACB4 = 0;
    v0 = 0;
    do {
        result = v0;
        *(unsigned short*)(result * 2 + (int)&gvar_42AE50) = 0;
        ++v0;
    }
    while((int)v0 >= 6);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_419C00() {
    char v0;
    char v1;
    char v2;
    short v3;
    char v4;
    char v5;
    char v6;
    int result;
    unsigned int v7 = gvar_428EB0;
    BOOL v8 = GetCPInfo(gvar_42AE44, &v0);
    *(int*)&v1 = 0;
    if(v8 == 1) {
        while(*(unsigned int*)&v1 < 0x100) {
            *(char*)(*(int*)&v1 + (int)&v2) = v1;
            *(int*)&v1 = *(int*)&v1 + 1;
        }
        v2 = 32;
        for(char* i = &v6; *i; i += 2) {
            *(int*)&v1 = (unsigned int)*i;
            while((unsigned int)*(i + 1) >= *(unsigned int*)&v1) {
                *(char*)(*(int*)&v1 + (int)&v2) = 32;
                *(int*)&v1 = *(int*)&v1 + 1;
            }
        }
        sub_41EE30(1, (int)&v2, 0x100, (int)&v3, (int)gvar_42AE44, (int)gvar_42ACB4, 0);
        sub_41E710((int)gvar_42ACB4, 0x100, (int)&v2, 0x100, (int)&v4, 0x100, (int)gvar_42AE44, 0);
        sub_41E710((int)gvar_42ACB4, 0x200, (int)&v2, 0x100, (int)&v5, 0x100, (int)gvar_42AE44, 0);
        *(int*)&v1 = 0;
        while(*(unsigned int*)&v1 < 0x100) {
            if(((unsigned int)*(short*)(*(int*)&v1 * 2 + (int)&v3) & 0x1)) {
                *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AD41) = *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AD41) | 0x10;
                *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AE60) = *(unsigned char*)(*(int*)&v1 + (int)&v4);
            }
            else if(((unsigned int)*(short*)(*(int*)&v1 * 2 + (int)&v3) & 0x2)) {
                *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AD41) = *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AD41) | 0x20;
                *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AE60) = *(unsigned char*)(*(int*)&v1 + (int)&v5);
            }
            else {
                *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AE60) = 0;
            }
            *(int*)&v1 = *(int*)&v1 + 1;
        }
    }
    else {
        while(*(unsigned int*)&v1 < 0x100) {
            if(*(unsigned int*)&v1 >= 65 && *(unsigned int*)&v1 <= 90) {
                *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AD41) = *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AD41) | 0x10;
                *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AE60) = (unsigned char)((unsigned char)*(int*)&v1 + 32);
            }
            else if(*(unsigned int*)&v1 >= 97 && *(unsigned int*)&v1 <= 122) {
                *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AD41) = *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AD41) | 0x20;
                *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AE60) = (unsigned char)((unsigned char)*(unsigned int*)&v1 - 32);
            }
            else {
                *(unsigned char*)(*(int*)&v1 + (int)&gvar_42AE60) = 0;
            }
            *(int*)&v1 = *(int*)&v1 + 1;
        }
    }
    sub_411087((int)v7);
    return result;
}

unsigned int sub_419FF0() {
    return gvar_42AD2C ? gvar_42AE44: 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_41A010() {
    if(!gvar_42B0F8) {
        sub_419680(-3);
        gvar_42B0F8 = 1;
    }
    return 0;
}

unsigned int sub_41A640() {
    return gvar_42AF90 == 3 ? gvar_42ACA4: 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_41A660(unsigned int param0) {
    int result;
    if(gvar_42AF90 == 3) {
        if(param0 <= 1016) {
            gvar_42ACA4 = param0;
            result = 1;
        }
        else {
            result = 0;
        }
    }
    else if(gvar_42AF90 == 1 && param0 >= 0 && !(param0 ? 0: 1) && param0 <= 1016) {
        int v0 = sub_41A6F0((int)param0);
        if(!v0) {
            return 0;
        }
        gvar_42ACA4 = param0;
        gvar_42AF90 = 3;
        result = 1;
    }
    else {
        result = 0;
    }
    return result;
}

int sub_41A6F0(unsigned int param0) {
    int result;
    LPVOID v0 = HeapAlloc(gvar_42AF80, 0, 320);
    gvar_42ACA0 = v0;
    if(!gvar_42ACA0) {
        result = 0;
    }
    else {
        gvar_42ACA4 = param0;
        gvar_42ACA8 = gvar_42ACA0;
        gvar_42AC98 = 0;
        gvar_42AC9C = 0;
        gvar_42ACAC = 16;
        result = 1;
    }
    return result;
}

unsigned int* sub_41A850(unsigned int* param0, unsigned int param1) {
    unsigned int v0;
    int v1 = *(int*)(param0 + 4);
    int v2 = param1 - *(int*)(param0 + 3);
    unsigned int v3 = (unsigned int)(v2 >>> 15);
    unsigned int* ptr0 = (unsigned int*)(v3 * 516 + v1 + 0x144);
    unsigned int* ptr1 = (unsigned int*)(param1 - 4);
    unsigned int* result = (unsigned int*)(param1 - 4);
    unsigned int v4 = *result - 1;
    if(!(unsigned int*)(v4 & 0x1)) {
        int* ptr2 = (int*)(v4 + (int)ptr1);
        int v5 = *ptr2;
        unsigned int v6 = *(ptr1 - 1);
        if(!(v5 & 0x1)) {
            unsigned int v7 = (unsigned int)(v5 >> 4) - 1;
            if(v7 > 63) {
                v7 = 63;
            }
            if(*(ptr2 + 2) == *(unsigned int*)(ptr2 + 1)) {
                if(v7 < 32) {
                    *(int*)(v3 * 4 + v1 + 68) = ~(0x80000000 >>> (v7 & 0x1f)) & *(int*)(v3 * 4 + v1 + 68);
                    *(char*)(v1 + v7 + 4) = *(char*)(v1 + v7 + 4) - 1;
                    if(!(int)*(char*)(v1 + v7 + 4)) {
                        *param0 = ~(0x80000000 >>> (v7 & 0x1f)) & *param0;
                    }
                }
                else {
                    *(int*)(v3 * 4 + v1 + 196) = ~(0x80000000 >>> ((v7 - 32) & 0x1f)) & *(int*)(v3 * 4 + v1 + 196);
                    *(char*)(v1 + v7 + 4) = *(char*)(v1 + v7 + 4) - 1;
                    if(!(int)*(char*)(v1 + v7 + 4)) {
                        *(int*)(param0 + 1) = ~(0x80000000 >>> ((v7 - 32) & 0x1f)) & *(int*)(param0 + 1);
                    }
                }
            }
            *(int*)(*(ptr2 + 2) + 4) = *(ptr2 + 1);
            *(int*)(*(ptr2 + 1) + 8) = *(ptr2 + 2);
            v4 += v5;
        }
        unsigned int v8 = (v4 >> 4) - 1;
        if(v8 > 63) {
            v8 = 63;
        }
        if(!(v6 & 0x1)) {
            unsigned int* ptr3 = (unsigned int*)((int)ptr1 - v6);
            v0 = (v6 >> 4) - 1;
            if(v0 > 63) {
                v0 = 63;
            }
            v4 += v6;
            v8 = (v4 >> 4) - 1;
            if(v8 > 63) {
                v8 = 63;
            }
            if(v8 != v0) {
                if(*(int*)(ptr3 + 2) == *(ptr3 + 1)) {
                    if(v0 < 32) {
                        *(int*)(v3 * 4 + v1 + 68) = ~(0x80000000 >>> (v0 & 0x1f)) & *(int*)(v3 * 4 + v1 + 68);
                        *(char*)(v0 + v1 + 4) = *(char*)(v0 + v1 + 4) - 1;
                        if(!(int)*(char*)(v0 + v1 + 4)) {
                            *param0 = ~(0x80000000 >>> (v0 & 0x1f)) & *param0;
                        }
                    }
                    else {
                        *(int*)(v3 * 4 + v1 + 196) = ~(0x80000000 >>> ((v0 - 32) & 0x1f)) & *(int*)(v3 * 4 + v1 + 196);
                        *(char*)(v0 + v1 + 4) = *(char*)(v0 + v1 + 4) - 1;
                        if(!(int)*(char*)(v0 + v1 + 4)) {
                            *(int*)(param0 + 1) = ~(0x80000000 >>> ((v0 - 32) & 0x1f)) & *(int*)(param0 + 1);
                        }
                    }
                }
                *(int*)(*(int*)(ptr3 + 2) + 4) = *(int*)(ptr3 + 1);
                *(int*)(*(int*)(ptr3 + 1) + 8) = *(int*)(ptr3 + 2);
            }
            ptr1 = ptr3;
        }
        if((v6 & 0x1) || v8 != v0) {
            int* ptr4 = (int*)(v8 * 8 + (int)ptr0);
            *(int*)(ptr1 + 1) = *(ptr4 + 1);
            *(ptr1 + 2) = ptr4;
            *(unsigned int*)(ptr4 + 1) = ptr1;
            *(unsigned int*)(*(int*)(ptr1 + 1) + 8) = ptr1;
            if(*(int*)(ptr1 + 2) == *(ptr1 + 1)) {
                if(v8 < 32) {
                    int v9 = (int)*(char*)(v8 + v1 + 4);
                    *(char*)(v8 + v1 + 4) = *(char*)(v8 + v1 + 4) + 1;
                    if(!v9) {
                        *param0 = (0x80000000 >>> (v8 & 0x1f)) | *param0;
                    }
                    *(int*)(v3 * 4 + v1 + 68) = (0x80000000 >>> (v8 & 0x1f)) | *(int*)(v3 * 4 + v1 + 68);
                }
                else {
                    int v10 = (int)*(char*)(v8 + v1 + 4);
                    *(char*)(v8 + v1 + 4) = *(char*)(v8 + v1 + 4) + 1;
                    if(!v10) {
                        *(int*)(param0 + 1) = (0x80000000 >>> ((v8 - 32) & 0x1f)) | *(int*)(param0 + 1);
                    }
                    *(int*)(v3 * 4 + v1 + 196) = (0x80000000 >>> ((v8 - 32) & 0x1f)) | *(int*)(v3 * 4 + v1 + 196);
                }
            }
        }
        *ptr1 = v4;
        *(unsigned int*)((int*)(v4 + (int)ptr1) - 1) = v4;
        *ptr0 = *ptr0 - 1;
        result = ptr0;
        if(!*result) {
            if(gvar_42AC98) {
                LPVOID lpAddress = (LPVOID)(gvar_42ACB0 * 0x8000 + *(int*)(gvar_42AC98 + 12));
                VirtualFree(lpAddress, 0x8000, 0x4000);
                *(int*)(gvar_42AC98 + 8) = (0x80000000 >>> (gvar_42ACB0 & 0x1f)) | *(int*)(gvar_42AC98 + 8);
                *(int*)(gvar_42ACB0 * 4 + *(int*)(gvar_42AC98 + 16) + 196) = 0;
                *(char*)(*(int*)(gvar_42AC98 + 16) + 67) = *(char*)(*(int*)(gvar_42AC98 + 16) + 67) - 1;
                if(!(int)*(char*)((char*)*(unsigned int*)(gvar_42AC98 + 16) + 67)) {
                    *(unsigned int*)(gvar_42AC98 + 4) = (unsigned int*)(*(int*)(gvar_42AC98 + 4) & 0xfffffffe);
                }
                if(*(int*)(gvar_42AC98 + 8) == -1) {
                    VirtualFree(*(LPVOID*)(gvar_42AC98 + 12), 0, 0x8000);
                    HeapFree(gvar_42AF80, 0, *(LPVOID*)(gvar_42AC98 + 16));
                    unk_lib_sub7((int)gvar_42AC98, gvar_42AC98 + 20, (int)((unsigned int)(gvar_42AC9C * 20 + gvar_42ACA0) - (gvar_42AC98 + 20)));
                    --gvar_42AC9C;
                    if(gvar_42AC98 < (unsigned int)param0) {
                        param0 -= 5;
                    }
                    gvar_42ACA8 = gvar_42ACA0;
                }
            }
            result = param0;
            gvar_42AC98 = param0;
            gvar_42ACB0 = v3;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_41AF80(int param0) {
    int* result;
    int v0;
    int v1;
    unsigned int v2 = (unsigned int)(gvar_42AC9C * 20 + gvar_42ACA0);
    unsigned int v3 = (unsigned int)((param0 + 23) & 0xfffffff0);
    unsigned int v4 = v3 >> 4;
    unsigned int v5 = v4 - 1;
    char v6 = (int)v5 < 32;
    if((((v5 - 32) ^ v5) & (v5 ^ 0x20)) < 0 != v6) {
        v1 = -1 >>> (v5 & 0x1f);
        v0 = -1;
    }
    else {
        v1 = 0;
        v0 = -1 >>> ((v5 - 32) & 0x1f);
    }
    int* i = gvar_42ACA8;
    while((unsigned int)i < v2) {
        int* ptr0 = i;
        int v7 = v1;
        int v8 = *ptr0 & v7;
        int* ptr1 = i;
        int v9 = v0;
        if((*(ptr1 + 1) & v9) | v8) {
            break;
        }
        else {
            i += 5;
        }
    }
    if(i == v2) {
        for(i = gvar_42ACA0; gvar_42ACA8 > (unsigned int)i && !((*(i + 1) & v0) | (*i & v1)); i += 5) {
        }
        if(gvar_42ACA8 != i) {
            goto loc_41B0FB;
        }
        else {
            while((unsigned int)i < v2 && !*(i + 2)) {
                i += 5;
            }
            int* ptr2 = i;
            if(ptr2 == v2) {
                i = gvar_42ACA0;
                while(gvar_42ACA8 > (unsigned int)i) {
                    ptr2 = i;
                    if(*(ptr2 + 2)) {
                        break;
                    }
                    else {
                        i += 5;
                    }
                }
                if(gvar_42ACA8 == i) {
                    i = (int*)sub_41B5E0((int)ptr2);
                    if(!i) {
                        return NULL;
                    }
                }
            }
            int v10 = sub_41B730((int)i);
            **(unsigned int*)(i + 4) = v10;
            if(**(unsigned int*)(i + 4) != -1) {
                goto loc_41B0FB;
            }
            else {
                result = NULL;
            }
        }
    }
    else {
    loc_41B0FB:
        gvar_42ACA8 = i;
        unsigned int* ptr3 = *(unsigned int*)(i + 4);
        int* j = *ptr3;
        if(j == -1 || !((*((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 17) & v1) | (*((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 49) & v0))) {
            for(j = NULL; !((*((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 17) & v1) | (*((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 49) & v0)); j = (int*)((char*)j + 1)) {
            }
        }
        int* ptr4 = (int*)((int)(int*)((int)j * 516) + (int)ptr3) + 81;
        v5 = 0;
        unsigned int v11 = (unsigned int)(*((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 17) & v1);
        unsigned int v12 = (unsigned int)(*((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 17) & v1);
        if(!v11) {
            v5 = 32;
            v12 = (unsigned int)(*((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 49) & v0);
        }
        while(v12 < 0x80000000) {
            v12 *= 2;
            ++v5;
        }
        unsigned int* ptr5 = *(unsigned int*)((int*)(v5 * 8 + (int)ptr4) + 1);
        unsigned int v13 = *ptr5 - v3;
        unsigned int v14 = (v13 >> 4) - 1;
        if((int)v14 > 63) {
            v14 = 63;
        }
        if(v5 != v14) {
            if(*(int*)(ptr5 + 2) == *(ptr5 + 1)) {
                if((int)v5 < 32) {
                    *((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 17) = ~(0x80000000 >>> (v5 & 0x1f)) & *((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 17);
                    *(char*)((int*)(v5 + (int)ptr3) + 1) = *(char*)((int*)(v5 + (int)ptr3) + 1) - 1;
                    if(!(int)*(char*)((int*)(v5 + (int)ptr3) + 1)) {
                        *i = ~(0x80000000 >>> (v5 & 0x1f)) & *i;
                    }
                }
                else {
                    *((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 49) = ~(0x80000000 >>> ((v5 - 32) & 0x1f)) & *((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 49);
                    *(char*)((int*)(v5 + (int)ptr3) + 1) = *(char*)((int*)(v5 + (int)ptr3) + 1) - 1;
                    if(!(int)*(char*)((int*)(v5 + (int)ptr3) + 1)) {
                        *(i + 1) = ~(0x80000000 >>> ((v5 - 32) & 0x1f)) & *(i + 1);
                    }
                }
            }
            *(int*)(*(int*)(ptr5 + 2) + 4) = *(int*)(ptr5 + 1);
            *(int*)(*(int*)(ptr5 + 1) + 8) = *(int*)(ptr5 + 2);
            if(v13) {
                int* ptr6 = (int*)(v14 * 8 + (int)ptr4);
                *(int*)(ptr5 + 1) = *(ptr6 + 1);
                *(ptr5 + 2) = ptr6;
                *(unsigned int*)(ptr6 + 1) = ptr5;
                *(unsigned int*)(*(int*)(ptr5 + 1) + 8) = ptr5;
                if(*(int*)(ptr5 + 2) == *(ptr5 + 1)) {
                    if((int)v14 < 32) {
                        int v15 = (int)*(char*)((int*)((int)ptr3 + v14) + 1);
                        *(char*)((int*)((int)ptr3 + v14) + 1) = *(char*)((int*)((int)ptr3 + v14) + 1) + 1;
                        if(!v15) {
                            *i = (0x80000000 >>> (v14 & 0x1f)) | *i;
                        }
                        *((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 17) = (0x80000000 >>> (v14 & 0x1f)) | *((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 17);
                    }
                    else {
                        int v16 = (int)*(char*)((int*)((int)ptr3 + v14) + 1);
                        *(char*)((int*)((int)ptr3 + v14) + 1) = *(char*)((int*)((int)ptr3 + v14) + 1) + 1;
                        if(!v16) {
                            *(i + 1) = (0x80000000 >>> ((v14 - 32) & 0x1f)) | *(i + 1);
                        }
                        *((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 49) = (0x80000000 >>> ((v14 - 32) & 0x1f)) | *((int*)((int)(int*)((int)j * 4) + (int)ptr3) + 49);
                    }
                }
            }
        }
        if(v13) {
            *ptr5 = v13;
            *(unsigned int*)((int*)(v13 + (int)ptr5) - 1) = v13;
        }
        ptr5 = (unsigned int*)(v13 + (int)ptr5);
        *ptr5 = v3 + 1;
        *((int*)(v3 + (int)ptr5) - 1) = v3 + 1;
        int v17 = *ptr4;
        *ptr4 = *ptr4 + 1;
        if(!v17 && gvar_42AC98 == i && gvar_42ACB0 == j) {
            gvar_42AC98 = 0;
        }
        *ptr3 = j;
        result = (int*)(ptr5 + 1);
    }
    return result;
}

LPVOID sub_41B5E0(LPVOID param0) {
    LPVOID result;
    LPVOID v0 = param0;
    if(gvar_42AC9C == gvar_42ACAC) {
        v0 = HeapReAlloc(gvar_42AF80, 0, gvar_42ACA0, (SIZE_T)((gvar_42ACAC + 16) * 20));
        if(!v0) {
            result = NULL;
        }
        else {
            gvar_42ACA0 = v0;
            gvar_42ACAC += 16;
            goto loc_41B649;
        }
    }
    else {
    loc_41B649:
        v0 = (LPVOID)(gvar_42AC9C * 20 + gvar_42ACA0);
        LPVOID v1 = HeapAlloc(gvar_42AF80, 8, 0x41c4);
        *(LPVOID*)((int)v0 + 16) = v1;
        if(!*(int*)((int)v0 + 16)) {
            result = NULL;
        }
        else {
            LPVOID v2 = VirtualAlloc(NULL, 0x100000, 0x2000, 4);
            *(LPVOID*)((int)v0 + 12) = v2;
            if(!*(int*)((int)v0 + 12)) {
                HeapFree(gvar_42AF80, 0, *(LPVOID*)((int)v0 + 16));
                result = NULL;
            }
            else {
                *(int*)v0 = 0;
                *(int*)((int)v0 + 4) = 0;
                *(int*)((int)v0 + 8) = -1;
                ++gvar_42AC9C;
                *(int*)*(LPVOID*)((int)v0 + 16) = -1;
                result = v0;
            }
        }
    }
    return result;
}

int sub_41B730(int param0) {
    int result;
    int* ptr0;
    int v0 = *(int*)(param0 + 16);
    unsigned int v1 = *(unsigned int*)(param0 + 8);
    int i;
    for(i = 0; v1 < 0x80000000; ++i) {
        v1 *= 2;
    }
    int v2 = i * 516 + v0 + 0x144;
    unsigned int v3 = 0;
    do {
        ptr0 = (int*)(v3 * 8 + v2);
        *(unsigned int*)(ptr0 + 2) = (int*)(v3 * 8 + v2);
        *(unsigned int*)(ptr0 + 1) = ptr0;
        ++v3;
    }
    while((int)v3 >= 63);
    LPVOID lpAddress = (LPVOID)(i * 0x8000 + *(int*)(param0 + 12));
    LPVOID v4 = VirtualAlloc(lpAddress, 0x8000, 0x1000, 4);
    if(!v4) {
        result = -1;
    }
    else {
        int* ptr1 = (int*)((int)lpAddress + 0x7000);
        for(LPVOID j = lpAddress; (unsigned int)j <= (unsigned int)ptr1; j = (LPVOID)((int)j + 0x1000)) {
            *(int*)((int)j + 8) = -1;
            *(int*)((int)j + 0xffc) = -1;
            ptr0 = (int*)((int)j + 12);
            *ptr0 = 0xff0;
            *(unsigned int*)(ptr0 + 1) = ptr0 + 0x400;
            *(unsigned int*)(ptr0 + 2) = ptr0 - 0x400;
            int* ptr2 = ptr0 + 1019;
            *ptr2 = 0xff0;
        }
        int v5 = v2 + 504;
        *(unsigned int*)(v5 + 4) = (int*)((int)lpAddress + 12);
        int* ptr3 = *(unsigned int*)(v5 + 4);
        *(ptr3 + 2) = v5;
        *(unsigned int*)(v5 + 8) = ptr1 + 3;
        ptr0 = *(unsigned int*)(v5 + 8);
        *(ptr0 + 1) = v5;
        *(int*)(i * 4 + v0 + 68) = 0;
        *(int*)(i * 4 + v0 + 196) = 1;
        int v6 = (int)*(char*)(v0 + 67);
        *(char*)(v0 + 67) = *(char*)(v0 + 67) + 1;
        if(!v6) {
            *(int*)(param0 + 4) = *(int*)(param0 + 4) | 0x1;
        }
        *(int*)(param0 + 8) = ~(0x80000000 >>> (i & 0x1f)) & *(int*)(param0 + 8);
        result = i;
    }
    return result;
}

int sub_41B9A0(unsigned int* param0, unsigned int param1, int param2) {
    int* ptr0;
    int* ptr1;
    int result;
    unsigned int* ptr2 = (unsigned int*)((param2 + 23) & 0xfffffff0);
    int v0 = *(int*)(param0 + 4);
    int v1 = param1 - *(int*)(param0 + 3);
    int v2 = v1 >>> 15;
    int v3 = v2 * 516 + v0 + 0x144;
    unsigned int* ptr3 = (unsigned int*)(param1 - 4);
    int* ptr4 = (int*)(*ptr3 - 1);
    unsigned int* ptr5 = (unsigned int*)((int)ptr4 + (int)ptr3);
    int* ptr6 = *ptr5;
    if((int)ptr4 >= (int)ptr2) {
        if((int)ptr4 > (int)ptr2) {
            *ptr3 = (int*)((char*)ptr2 + 1);
            *(unsigned int*)((int*)((int)ptr2 + (int)ptr3) - 1) = (int*)((char*)ptr2 + 1);
            ptr3 = (unsigned int*)((int)ptr2 + (int)ptr3);
            ptr4 = (int*)((int)ptr4 - (int)ptr2);
            int* ptr7 = (int*)((char*)((int)ptr4 >> 4) - 1);
            if((unsigned int)ptr7 > 63) {
                ptr7 = (int*)0x3F;
            }
            if(!(int*)((int)ptr6 & 0x1)) {
                ptr1 = (int*)((char*)((int)ptr6 >> 4) - 1);
                if((unsigned int)ptr1 > 63) {
                    ptr1 = (int*)0x3F;
                }
                if(*(int*)(ptr5 + 2) == *(ptr5 + 1)) {
                    if((unsigned int)ptr1 < 32) {
                        *(int*)(v2 * 4 + v0 + 68) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr1 & 0x1f)) & *(int*)(v2 * 4 + v0 + 68);
                        *(char*)((int*)(v0 + (int)ptr1) + 1) = *(char*)((int*)(v0 + (int)ptr1) + 1) - 1;
                        if(!(int)*(char*)((int*)(v0 + (int)ptr1) + 1)) {
                            *param0 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr1 & 0x1f)) & *param0;
                        }
                    }
                    else {
                        *(int*)(v2 * 4 + v0 + 196) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr1 - 8) & 0x1f)) & *(int*)(v2 * 4 + v0 + 196);
                        *(char*)((int*)(v0 + (int)ptr1) + 1) = *(char*)((int*)(v0 + (int)ptr1) + 1) - 1;
                        if(!(int)*(char*)((int*)(v0 + (int)ptr1) + 1)) {
                            *(int*)(param0 + 1) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr1 - 8) & 0x1f)) & *(int*)(param0 + 1);
                        }
                    }
                }
                *(int*)(*(int*)(ptr5 + 2) + 4) = *(int*)(ptr5 + 1);
                *(int*)(*(int*)(ptr5 + 1) + 8) = *(int*)(ptr5 + 2);
                ptr4 = (int*)((int)ptr4 + (int)ptr6);
                ptr7 = (int*)((char*)((int)ptr4 >> 4) - 1);
                if((unsigned int)ptr7 > 63) {
                    ptr7 = (int*)0x3F;
                }
            }
            ptr0 = (int*)((int)(int*)((int)ptr7 * 8) + v3);
            *(int*)(ptr3 + 1) = *(ptr0 + 1);
            *(ptr3 + 2) = ptr0;
            *(unsigned int*)(ptr0 + 1) = ptr3;
            *(unsigned int*)(*(int*)(ptr3 + 1) + 8) = ptr3;
            if(*(int*)(ptr3 + 2) == *(ptr3 + 1)) {
                if((unsigned int)ptr7 < 32) {
                    int v4 = (int)*(char*)((int*)((int)ptr7 + v0) + 1);
                    *(char*)((int*)((int)ptr7 + v0) + 1) = *(char*)((int*)((int)ptr7 + v0) + 1) + 1;
                    if(!v4) {
                        *param0 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr7 & 0x1f)) | *param0);
                    }
                    *(unsigned int*)(v2 * 4 + v0 + 68) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr7 & 0x1f)) | *(int*)(v2 * 4 + v0 + 68));
                }
                else {
                    int v5 = (int)*(char*)((int*)((int)ptr7 + v0) + 1);
                    *(char*)((int*)((int)ptr7 + v0) + 1) = *(char*)((int*)((int)ptr7 + v0) + 1) + 1;
                    if(!v5) {
                        *(param0 + 1) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr7 - 8) & 0x1f)) | *(int*)(param0 + 1));
                    }
                    *(unsigned int*)(v2 * 4 + v0 + 196) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr7 - 8) & 0x1f)) | *(int*)(v2 * 4 + v0 + 196));
                }
            }
            *ptr3 = ptr4;
            *((unsigned int*)((int)ptr4 + (int)ptr3) - 1) = ptr4;
        }
    loc_41BF5D:
        result = 1;
    }
    else if((unsigned int*)((int)ptr6 & 0x1) || (int)(int*)((int)ptr4 + (int)ptr6) < (int)ptr2) {
        result = 0;
    }
    else {
        ptr1 = (int*)((char*)((int)ptr6 >> 4) - 1);
        if((unsigned int)ptr1 > 63) {
            ptr1 = (int*)0x3F;
        }
        if(*(int*)(ptr5 + 2) == *(ptr5 + 1)) {
            if((unsigned int)ptr1 < 32) {
                *(int*)(v2 * 4 + v0 + 68) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr1 & 0x1f)) & *(int*)(v2 * 4 + v0 + 68);
                *(char*)((int*)(v0 + (int)ptr1) + 1) = *(char*)((int*)(v0 + (int)ptr1) + 1) - 1;
                if(!(int)*(char*)((int*)(v0 + (int)ptr1) + 1)) {
                    *param0 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr1 & 0x1f)) & *param0;
                }
            }
            else {
                *(int*)(v2 * 4 + v0 + 196) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr1 - 8) & 0x1f)) & *(int*)(v2 * 4 + v0 + 196);
                *(char*)((int*)(v0 + (int)ptr1) + 1) = *(char*)((int*)(v0 + (int)ptr1) + 1) - 1;
                if(!(int)*(char*)((int*)(v0 + (int)ptr1) + 1)) {
                    *(int*)(param0 + 1) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr1 - 8) & 0x1f)) & *(int*)(param0 + 1);
                }
            }
        }
        *(int*)(*(int*)(ptr5 + 2) + 4) = *(int*)(ptr5 + 1);
        *(int*)(*(int*)(ptr5 + 1) + 8) = *(int*)(ptr5 + 2);
        ptr6 = (int*)((int)(int*)((int)ptr4 + (int)ptr6) - (int)ptr2);
        if((int)ptr6 > 0) {
            ptr5 = (unsigned int*)((int)ptr2 + (int)ptr3);
            ptr1 = (int*)((char*)((int)ptr6 >> 4) - 1);
            if((unsigned int)ptr1 > 63) {
                ptr1 = (int*)0x3F;
            }
            ptr0 = (int*)((int)(int*)((int)ptr1 * 8) + v3);
            *(int*)(ptr5 + 1) = *(ptr0 + 1);
            *(ptr5 + 2) = ptr0;
            *(unsigned int*)(ptr0 + 1) = ptr5;
            *(unsigned int*)(*(int*)(ptr5 + 1) + 8) = ptr5;
            if(*(int*)(ptr5 + 2) == *(ptr5 + 1)) {
                if((unsigned int)ptr1 < 32) {
                    int v6 = (int)*(char*)((int*)(v0 + (int)ptr1) + 1);
                    *(char*)((int*)(v0 + (int)ptr1) + 1) = *(char*)((int*)(v0 + (int)ptr1) + 1) + 1;
                    if(!v6) {
                        *param0 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr1 & 0x1f)) | *param0);
                    }
                    *(unsigned int*)(v2 * 4 + v0 + 68) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr1 & 0x1f)) | *(int*)(v2 * 4 + v0 + 68));
                }
                else {
                    int v7 = (int)*(char*)((int*)(v0 + (int)ptr1) + 1);
                    *(char*)((int*)(v0 + (int)ptr1) + 1) = *(char*)((int*)(v0 + (int)ptr1) + 1) + 1;
                    if(!v7) {
                        *(param0 + 1) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr1 - 8) & 0x1f)) | *(int*)(param0 + 1));
                    }
                    *(unsigned int*)(v2 * 4 + v0 + 196) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr1 - 8) & 0x1f)) | *(int*)(v2 * 4 + v0 + 196));
                }
            }
            *ptr5 = ptr6;
            *(unsigned int*)((int*)((int)ptr6 + (int)ptr5) - 1) = ptr6;
        }
        *ptr3 = (int*)((char*)ptr2 + 1);
        *(unsigned int*)((int*)((int)ptr2 + (int)ptr3) - 1) = (int*)((char*)ptr2 + 1);
        goto loc_41BF5D;
    }
    return result;
}

int sub_41C0E0(LPVOID param0) {
    int result;
    if(gvar_42AC98) {
        LPVOID lpAddress = (LPVOID)(gvar_42ACB0 * 0x8000 + *(int*)(gvar_42AC98 + 12));
        VirtualFree(lpAddress, 0x8000, 0x4000);
        *(int*)(gvar_42AC98 + 8) = (0x80000000 >>> (gvar_42ACB0 & 0x1f)) | *(int*)(gvar_42AC98 + 8);
        *(int*)(gvar_42ACB0 * 4 + *(int*)(gvar_42AC98 + 16) + 196) = 0;
        *(char*)(*(int*)(gvar_42AC98 + 16) + 67) = *(char*)(*(int*)(gvar_42AC98 + 16) + 67) - 1;
        result = *(int*)(gvar_42AC98 + 16);
        if(!(LPVOID)*(char*)(result + 67)) {
            result = *(int*)(gvar_42AC98 + 4) & 0xfffffffe;
            *(int*)((int)gvar_42AC98 + 4) = *(int*)(gvar_42AC98 + 4) & 0xfffffffe;
        }
        if(*(int*)(gvar_42AC98 + 8) == -1 && (int)gvar_42AC9C > 1) {
            HeapFree(gvar_42AF80, 0, *(LPVOID*)(gvar_42AC98 + 16));
            result = unk_lib_sub7((int)gvar_42AC98, gvar_42AC98 + 20, (int)((unsigned int)(gvar_42AC9C * 20 + gvar_42ACA0) - (gvar_42AC98 + 20)));
            gvar_42AC9C = (LPVOID)(gvar_42AC9C - 1);
        }
        gvar_42AC98 = 0;
    }
    return result;
}

int sub_41C260() {
    char v0;
    BOOL v1;
    int result;
    int v2;
    UINT_PTR ucb = (UINT_PTR)(gvar_42AC9C * 20);
    LPVOID lp = gvar_42ACA0;
    BOOL v3 = IsBadWritePtr(lp, ucb);
    if(v3) {
        result = -1;
    }
    else {
        BOOL v4 = gvar_42ACA0;
        BOOL v5 = 0;
        while((int)gvar_42AC9C > v5) {
            BOOL v6 = v4;
            LPVOID v7 = *(LPVOID*)(v6 + 16);
            LPVOID lp1 = *(LPVOID*)(v6 + 16);
            BOOL v8 = IsBadWritePtr(lp1, 0x41c4);
            if(v8) {
                result = -2;
            }
            else {
                BOOL v9 = v4;
                LPVOID v10 = *(LPVOID*)(v9 + 12);
                BOOL v11 = (BOOL)((int)v7 + 0x144);
                BOOL v12 = v4;
                unsigned int v13 = *(unsigned int*)(v12 + 8);
                unsigned int v14 = 0;
                BOOL v15 = 0;
                BOOL v16 = 0;
                do {
                    BOOL v17 = 0;
                    BOOL v18 = 0;
                    BOOL v19 = 0;
                    BOOL v20 = 0;
                    do {
                        *(int*)(v20 * 4 + (int)&v2) = 0;
                        ++v20;
                    }
                    while(v20 >= 64);
                    if(v13 < 0x80000000) {
                        LPVOID lp2 = v10;
                        BOOL v21 = IsBadWritePtr(lp2, 0x8000);
                        if(v21) {
                            return -4;
                        }
                        LPVOID v22 = v10;
                        unsigned int v23 = 0;
                        do {
                            v1 = (BOOL)((int)v22 + 12);
                            BOOL v24 = v1 + 0xff0;
                            BOOL v25 = v1;
                            if(*(int*)(v25 - 4) != -1 || *(int*)v24 != -1) {
                                return -5;
                            }
                            do {
                                BOOL v26 = v1;
                                unsigned int v27 = *(unsigned int*)v26;
                                unsigned int v28 = *(unsigned int*)v26;
                                if((BOOL)(v28 & 0x1)) {
                                    --v27;
                                    if((int)v27 > 0x400) {
                                        return -6;
                                    }
                                    ++v19;
                                }
                                else {
                                    v20 = (BOOL)((v27 >> 4) - 1);
                                    if(v20 > 63) {
                                        v20 = 63;
                                    }
                                    BOOL v29 = v20;
                                    *(BOOL*)(v20 * 4 + (int)&v2) = (BOOL)(*(int*)(v29 * 4 + (int)&v2) + 1);
                                }
                                if((int)v27 < 16 || (v27 & 0xf) || (int)v27 > 0xff0) {
                                    return -7;
                                }
                                BOOL v30 = v1;
                                if(*(BOOL*)(v30 + v27 - 4) != v28) {
                                    return -8;
                                }
                                v1 = (BOOL)(v27 + v1);
                            }
                            while((unsigned int)v24 > (unsigned int)v1);
                            if(v24 != v1) {
                                return -8;
                            }
                            v22 = (LPVOID)((int)v22 + 0x1000);
                            ++v23;
                        }
                        while((int)v23 >= 8);
                        if(*(BOOL*)v11 != v19) {
                            return -9;
                        }
                        BOOL v31 = v11;
                        unsigned int v32 = 0;
                        do {
                            BOOL v33 = 0;
                            v1 = v31;
                            while(1) {
                                BOOL v34 = v1;
                                BOOL v35 = *(BOOL*)(v34 + 4);
                                if(v31 == v35) {
                                    break;
                                }
                                else {
                                    unsigned int v36 = v32;
                                    if(*(int*)(v36 * 4 + (int)&v2) == v33) {
                                        break;
                                    }
                                    else if((unsigned int)v10 > (unsigned int)v35 || (unsigned int)(int*)((int)v10 + 0x8000) <= (unsigned int)v35) {
                                        return -10;
                                    }
                                    else {
                                        int v37 = v35 & 0xfffff000;
                                        BOOL v38 = (BOOL)(v37 + 12);
                                        unsigned int v39 = (unsigned int)(v38 + 0xff0);
                                        while(v38 != v39 && v38 != v35) {
                                            BOOL v40 = v38;
                                            v38 = (BOOL)((*(int*)v40 & 0xfffffffe) + v38);
                                        }
                                        if(v38 == v39) {
                                            return -11;
                                        }
                                        BOOL v41 = v35;
                                        v20 = (BOOL)((unsigned int)(*(int*)v41 >> 4) - 1);
                                        if(v20 > 63) {
                                            v20 = 63;
                                        }
                                        if(v20 != v32) {
                                            return -12;
                                        }
                                        BOOL v42 = v35;
                                        if(*(BOOL*)(v42 + 8) != v1) {
                                            return -13;
                                        }
                                        v1 = v35;
                                        ++v33;
                                    }
                                }
                            }
                            if(v33) {
                                if((int)v32 < 32) {
                                    v17 = (BOOL)((0x80000000 >>> (v32 & 0x1f)) | v17);
                                    v14 = (unsigned int)((0x80000000 >>> (v32 & 0x1f)) | v14);
                                }
                                else {
                                    v18 = (BOOL)((0x80000000 >>> ((v32 - 32) & 0x1f)) | v18);
                                    v15 = (BOOL)((0x80000000 >>> ((v32 - 32) & 0x1f)) | v15);
                                }
                            }
                            if(*(BOOL*)(v1 + 4) == v31) {
                                unsigned int v43 = v32;
                                if(*(int*)(v43 * 4 + (int)&v2) != v33) {
                                    return -14;
                                }
                                else if(*(unsigned int*)(v31 + 8) != v1) {
                                    return -15;
                                }
                                v31 += 8;
                                ++v32;
                            }
                            else {
                                return -14;
                            }
                        }
                        while((int)v32 < 64);
                    }
                    LPVOID v44 = v7;
                    if(*((int*)(v16 * 4 + (int)v44) + 17) != v17) {
                        return -16;
                    }
                    LPVOID v45 = v7;
                    v0 = *((int*)(v16 * 4 + (int)v45) + 49) == v18;
                    if(!v0) {
                        return -16;
                    }
                    v10 = (LPVOID)((int)v10 + 0x8000);
                    v11 += 516;
                    v13 *= 2;
                    ++v16;
                }
                while(v16 >= 32);
                unsigned int v46 = v14;
                if(*(int*)v4 == v46) {
                    v0 = *(int*)(v4 + 4) == v15;
                    if(v0) {
                        v4 += 20;
                        v3 = v5 + 1;
                        ++v5;
                        continue;
                    }
                }
                result = -17;
            }
            return result;
        }
        result = 0;
    }
    return result;
}

int sub_41C8C0(LPCVOID param0) {
    unsigned int i;
    int result;
    char v0;
    unsigned int v1;
    int v2;
    LPCVOID v3;
    LPCVOID v4 = param0;
    LPCVOID lpAddress = *(LPCVOID*)((int)v4 + 8);
    if((LPCVOID)((int)lpAddress & 0x3)) {
        result = 0;
    }
    else {
        LPCVOID v5 = *(LPCVOID*)(__FS_BASE + (int)(LPCVOID*)0x18);
        LPCVOID v6 = *(LPCVOID*)(__FS_BASE + (int)(LPCVOID*)0x18);
        if(*(unsigned int*)((int)v6 + 8) <= (unsigned int)lpAddress) {
            LPCVOID v7 = lpAddress;
            if(*(unsigned int*)((int)v5 + 4) <= (unsigned int)v7) {
                goto loc_41C90B;
            }
            else {
                result = 0;
            }
        }
        else {
        loc_41C90B:
            if(*(int*)((int)param0 + 12) == -1) {
                result = 1;
            }
            else {
                unsigned int v8 = 0;
                unsigned int v9 = 0;
                while(1) {
                    LPCVOID v10 = param0;
                    unsigned int v11 = v9;
                    char v12 = *(int*)((int)v10 + 12) == v11;
                    if(*(unsigned int*)((int)v10 + 12) <= v11 && !v12) {
                        break;
                    }
                    else {
                        int v13 = v9 * 12;
                        LPCVOID v14 = lpAddress;
                        LPCVOID v15 = *(LPCVOID*)((int)v14 + v13);
                        if(v15 != -1 && (unsigned int)v15 >= v9) {
                            return 0;
                        }
                        int v16 = v9 * 12;
                        LPCVOID v17 = lpAddress;
                        if(*((int*)(v16 + (int)v17) + 1)) {
                            ++v8;
                        }
                        ++v9;
                    }
                }
                if(v8) {
                    if(*(unsigned int*)((int)v5 + 8) <= (unsigned int)*(LPCVOID*)((int)param0 - 8)) {
                        LPCVOID v18 = param0;
                        if(*(LPCVOID*)((int)v18 - 8) < param0) {
                            goto loc_41C9A9;
                        }
                    }
                    result = 0;
                }
                else {
                loc_41C9A9:
                    int* ptr0 = (int*)((int)lpAddress & 0xfffff000);
                    LPCVOID j = NULL;
                    while((int)gvar_429868 > (int)j) {
                        if(*(unsigned int*)((int)(int*)((int)j * 4) + (int)&gvar_429870) != ptr0) {
                            goto loc_41C9BB;
                        }
                        if((int)j > 0) {
                            LONG v19 = InterlockedExchange((LONG*)0x4298B0, 1);
                            if(v19) {
                                return 1;
                            }
                            else if(*(unsigned int*)((int)(int*)((int)j * 4) + (int)&gvar_429870) == ptr0) {
                            loc_41CA86:
                                for(i = 0; (int)j >= (int)i; ++i) {
                                    int* ptr1 = *(unsigned int*)(i * 4 + (int)&gvar_429870);
                                    *(unsigned int*)(i * 4 + (int)&gvar_429870) = ptr0;
                                    ptr0 = ptr1;
                                }
                                InterlockedExchange((LONG*)0x4298B0, 0);
                                return 1;
                            }
                            for(j = (LPCVOID)(gvar_429868 - 1); ((int)j >= 0 && *(unsigned int*)((int)(int*)((int)j * 4) + (int)&gvar_429870) != ptr0); j = (LPCVOID)((int)j - 1)) {
                            }
                            if((int)j < 0) {
                                if((int)gvar_429868 < 16) {
                                    ++gvar_429868;
                                }
                                j = (LPCVOID)(gvar_429868 - 1);
                            }
                            else if(!j) {
                                InterlockedExchange((LONG*)0x4298B0, 0);
                                return 1;
                            }
                            goto loc_41CA86;
                        loc_41C9BB:
                            j = (LPCVOID)((int)j + 1);
                        }
                        else {
                            return 1;
                        }
                    }
                    SIZE_T v20 = VirtualQuery(lpAddress, &v0, 28);
                    if(!v20 || v1 != 0x1000000) {
                        result = -1;
                    }
                    else if((v2 & 0xcc)) {
                        LPCVOID v21 = v3;
                        if(*(short*)v21 == 23117) {
                            LPCVOID v22 = (LPCVOID)(*(int*)((int)v21 + 60) + (int)v21);
                            if(*(int*)v22 != 0x4550) {
                                return -1;
                            }
                            LPCVOID v23 = (LPCVOID)((int)v22 + 24);
                            if(*(short*)v23 != 267) {
                                return -1;
                            }
                            int* ptr2 = (int*)((int)lpAddress - (int)v21);
                            unsigned int v24 = 0;
                            LPCVOID v25 = (LPCVOID)((int*)((unsigned int)*(short*)((int)v22 + 20) + (int)v22) + 6);
                            if(*(unsigned short*)((int)v22 + 6) > 0) {
                                if(*(unsigned int*)((int)v25 + 12) > (unsigned int)ptr2 || (unsigned int)(*(int*)((int)v25 + 8) + *(int*)((int)v25 + 12)) <= (unsigned int)ptr2 || !(LPCVOID)(*(int*)((int)v25 + 36) & 0x80000000)) {
                                    goto loc_41CBD9;
                                }
                                else {
                                    return 0;
                                }
                            }
                        }
                        result = -1;
                    }
                    else {
                    loc_41CBD9:
                        LONG v26 = InterlockedExchange((LONG*)0x4298B0, 1);
                        if(!v26) {
                            for(j = gvar_429868; ((int)j > 0 && *(unsigned int*)((int)(int*)((int)j * 4) + (int)&gvar_42986C) != ptr0); j = (LPCVOID)((int)j - 1)) {
                            }
                            if(!j) {
                                j = (int)gvar_429868 <= 15 ? gvar_429868: (LPCVOID)0xF;
                                for(i = 0; (int)j >= (int)i; ++i) {
                                    int* ptr3 = *(unsigned int*)(i * 4 + (int)&gvar_429870);
                                    *(unsigned int*)(i * 4 + (int)&gvar_429870) = ptr0;
                                    ptr0 = ptr3;
                                }
                                if((int)gvar_429868 < 16) {
                                    ++gvar_429868;
                                }
                            }
                            InterlockedExchange((LONG*)0x4298B0, 0);
                            return 1;
                        }
                        result = 1;
                    }
                }
            }
        }
    }
    return result;
}

int sub_41CDB0(int param0, int param1, int param2) {
    int result;
    int result;
    void* ptr0;
    char v0;
    int v1;
    HMODULE hModule;
    int v2;
    char v3;
    unsigned int* ptr1 = &hModule;
    unsigned int v4 = 0;
    unsigned int v5 = 0;
    if(!gvar_4298C4) {
        hModule = LoadLibraryA("user32.dll");
        if(!hModule) {
            return 0;
        }
        HMODULE v6 = (HMODULE)GetProcAddress(hModule, "MessageBoxA");
        gvar_4298C4 = v6;
        if(!gvar_4298C4) {
            return 0;
        }
        FARPROC v7 = GetProcAddress(hModule, "GetActiveWindow");
        gvar_4298C8 = v7;
        FARPROC v8 = GetProcAddress(hModule, "GetLastActivePopup");
        gvar_4298CC = v8;
        if(gvar_429638 == 2) {
            FARPROC v9 = GetProcAddress(hModule, "GetUserObjectInformationA");
            gvar_4298D4 = v9;
            if(gvar_4298D4) {
                FARPROC v10 = GetProcAddress(hModule, "GetProcessWindowStation");
                gvar_4298D0 = v10;
            }
        }
        goto loc_41CE72;
    }
    else {
    loc_41CE72:
        if(gvar_4298D0) {
            ptr1 = &ptr0;
            unsigned int v11 = (unsigned int)gvar_4298D0();
            if(v11) {
                ptr1 = &v2;
                int v12 = gvar_4298D4((int)v11, 1, (int)&v0, 12, (int)&v3);
                if(v12 && (v1 & 0x1)) {
                    goto loc_41CEB0;
                }
            }
            v5 = 1;
            goto loc_41CEB9;
        }
        else {
        loc_41CEB0:
            if(!v5) {
                if(gvar_4298C8) {
                    --ptr1;
                    *ptr1 = &loc_41CEE5;
                    v4 = (unsigned int)/*BAD_CALL!*/ gvar_4298C8();
                }
                if(v4 && gvar_4298CC) {
                    --ptr1;
                    *ptr1 = v4;
                    --ptr1;
                    *ptr1 = &loc_41CF01;
                    v4 = (unsigned int)/*BAD_CALL!*/ gvar_4298CC(*(int*)(ptr1 + 1));
                }
            }
            else {
            loc_41CEB9:
                param2 |= gvar_429644 >= 4 ? 0x200000: 0x40000;
            }
        }
        --ptr1;
        *ptr1 = param2;
        --ptr1;
        *ptr1 = param1;
        --ptr1;
        *ptr1 = param0;
        --ptr1;
        *ptr1 = v4;
        --ptr1;
        *ptr1 = &loc_41CF1A;
        result = /*BAD_CALL!*/ gvar_4298C4(*(int*)(ptr1 + 1), *(int*)(ptr1 + 2), *(int*)(ptr1 + 3), *(int*)(ptr1 + 4));
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_41D110() {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0;
    int v4;
    int v5;
    int* ptr1 = &v3;
    int v6 = &gvar_426A30;
    int v7 = &gvar_4111A4;
    int v8 = *(int*)__FS_BASE;
    int v9 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v9;
    int* ptr2 = &v9;
    char v10 = &v0 == 28;
    char v11 = (int)&ptr0 < 0;
    char v12 = __parity__((unsigned char)&v0 - 28);
    char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x8) ^ (int)&ptr0) >>> 4) & 0x1);
    char v14 = (unsigned int)&v9 < 8;
    char v15 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&ptr0) & (int)(int*)((int)&v9 ^ 0x8)) < 0;
    int v16 = v4;
    ptr0 = &v1;
    int v17 = sub_41F640(1, 0);
    int* ptr3 = &v2;
    char v18 = &v0 == 40;
    char v19 = (int)&v1 < 0;
    char v20 = __parity__((unsigned char)&v0 - 40);
    char v21 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x8) ^ (int)&v1) >>> 4) & 0x1);
    char v22 = (unsigned int)&v2 >= 0xfffffff8;
    char v23 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v2) & (int*)~(int)(int*)((int)&v2 ^ 0x8)) < 0;
    int v24 = -1;
    int* ptr4 = &v2;
    /*BAD_CALL!*/ sub_41D16A(3, v5);
}

// Stale decompilation - Refresh this view to re-decompile this code
char* sub_41D300(unsigned int param0, char* param1, unsigned int param2) {
    sub_41D200(param0, param1, param2, param2 != 10 || param0 < 0x80000000 ? 0: 1);
    return param1;
}

// Stale decompilation - Refresh this view to re-decompile this code
char* sub_41D350(unsigned int param0, char* param1, unsigned int param2) {
    sub_41D200(param0, param1, param2, 0);
    return param1;
}

unsigned int sub_41D380(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    sub_41D3E0(param0, param1, param2, param3, param3 != 10 || (int)param1 > 0 || (param1 < 0x80000000 && param0 >= 0) ? 0: 1);
    return param2;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_41D3E0(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3, unsigned int param4) {
    unsigned int result;
    unsigned int v0;
    unsigned int v1 = param2;
    if(param4) {
        *(char*)v1 = 45;
        ++v1;
        unsigned int v2 = (unsigned int)(0 - (unsigned int)((unsigned int)(param0 > 0) + param1));
        param0 = (unsigned int)(0 - param0);
        param1 = v2;
    }
    unsigned int v3 = v1;
    do {
        int v4 = sub_4115A0(param0, param1, param3, 0);
        param0 = (unsigned int)sub_411555(param0, param1, param3, 0);
        param1 = v0;
        *(char*)v1 = (unsigned int)v4 > 9 ? (unsigned char)v4 + 87: (unsigned char)v4 + 48;
        ++v1;
    }
    while((param1 >= 0 && !(param1 ? 0: 1)) || (param1 >= 0 && param0 >= 0 && !(param0 ? 0: 1)));
    *(char*)v1 = 0;
    --v1;
    do {
        char v5 = *(char*)v1;
        *(char*)v1 = *(char*)v3;
        *(char*)v3 = v5;
        --v1;
        result = v3 + 1;
        ++v3;
    }
    while(v3 < v1);
    return result;
}

unsigned int sub_41D510(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    sub_41D3E0(param0, param1, param2, param3, 0);
    return param2;
}

DWORD sub_41D770(unsigned int param0, DWORD param1) {
    DWORD result;
    DWORD v0;
    if(param1 != 4 && param1 != 3) {
        if(param0 != 2 && param0 != 21 && param0 != 22 && param0 != 15 && param0 != 8 && param0 != 4 && param0 != 11) {
            gvar_42962C = 22;
            return 0xffffffff;
        }
        else if(param0 != 2 && param0 != 21 && param0 != 22 && param0 != 15) {
            DWORD v1 = (DWORD)sub_41DC20((int)param0);
            if(!v1) {
                gvar_42962C = 22;
                return 0xffffffff;
            }
            v0 = *(DWORD*)(v1 + 8);
            while(*(DWORD*)(v1 + 4) == param0) {
                *(DWORD*)(v1 + 8) = param1;
                v1 += 12;
                if((DWORD)(gvar_428C10 * 12 + &gvar_428B90) <= v1) {
                    break;
                }
            }
            goto loc_41D8C3;
        }
        else if((param0 == 2 || param0 == 21) && !gvar_4298EC) {
            BOOL v2 = SetConsoleCtrlHandler((PHANDLER_ROUTINE)&sub_41D970, 1);
            if(v2 == 1) {
                gvar_4298EC = 1;
            }
            else {
                DWORD v3 = GetLastError();
                gvar_429630 = v3;
                gvar_42962C = 22;
                return 0xffffffff;
            }
        }
        switch(param0) {
            case 2: {
                v0 = gvar_4298DC;
                gvar_4298DC = param1;
            }
            case 15: {
                v0 = gvar_4298E8;
                gvar_4298E8 = param1;
                break;
            }
            case 21: {
                v0 = gvar_4298E0;
                gvar_4298E0 = param1;
                break;
            }
            case 22: {
                v0 = gvar_4298E4;
                gvar_4298E4 = param1;
            }
        }
    loc_41D8C3:
        result = v0;
    }
    else {
        gvar_42962C = 22;
        result = 0xffffffff;
    }
    return result;
}

int sub_41D970(unsigned int param0) {
    int result;
    int v0;
    unsigned int* ptr0;
    unsigned int* ptr1;
    if(!param0) {
        ptr1 = (unsigned int*)&gvar_4298DC;
        ptr0 = gvar_4298DC;
        v0 = 2;
    }
    else {
        ptr1 = (unsigned int*)&gvar_4298E0;
        ptr0 = gvar_4298E0;
        v0 = 21;
    }
    if(!ptr0) {
        result = 0;
    }
    else {
        if(ptr0 != 1) {
            *ptr1 = 0;
            ptr0(v0);
        }
        result = 1;
    }
    return result;
}

unsigned int sub_41DCD0() {
    return gvar_4298F8;
}

unsigned int sub_41DDA0(unsigned int param0) {
    return sub_41DDD0(param0, gvar_4298F4);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_41DDD0(unsigned int param0, unsigned int param1) {
    unsigned int result1;
    int v0;
    if(param0 > 0xffffffe0) {
        result1 = 0;
    }
    else {
        do {
            unsigned int result = param0 <= 0xffffffe0 ? (unsigned int)sub_41DE40((int)param0): 0;
            if(result || !param1) {
                return result;
            }
            v0 = sub_41DCE0((int)param0);
        }
        while(v0);
        result1 = 0;
    }
    return result1;
}

LPVOID sub_41DE40(int param0) {
    LPVOID result;
    int* ptr0;
    int* ptr1 = ptr0;
    if(gvar_42AF90 == 3 && gvar_42ACA4 >= (unsigned int)param0) {
        ptr1 = sub_41AF80(param0);
        if(!ptr1) {
            goto loc_41DE76;
        }
        else {
            result = ptr1;
        }
    }
    else {
    loc_41DE76:
        if(!param0) {
            param0 = 1;
        }
        if(gvar_42AF90 != 1) {
            param0 = (param0 + 15) & 0xfffffff0;
        }
        result = HeapAlloc(gvar_42AF80, 0, (SIZE_T)param0);
    }
    return result;
}

unsigned int sub_41DEE0(unsigned int param0, int param1) {
    unsigned int v0;
    unsigned int result;
    if((unsigned int)param1 > 0xffffffe0) {
        result = 0;
    }
    else {
        if(gvar_42AF90 == 3) {
            unsigned int* ptr0 = (unsigned int*)sub_41A770((int)param0);
            if(ptr0) {
                v0 = 0;
                if(gvar_42ACA4 >= (unsigned int)param1) {
                    int v1 = sub_41B9A0(ptr0, param0, param1);
                    if(v1) {
                        v0 = param0;
                    }
                }
            }
            if(!ptr0) {
                if(!param1) {
                    param1 = 1;
                }
                v0 = (unsigned int)HeapReAlloc(gvar_42AF80, 16, (LPVOID)param0, (SIZE_T)((param1 + 15) & 0xfffffff0));
            }
        }
        else {
            if(!param1) {
                param1 = 1;
            }
            v0 = (unsigned int)HeapReAlloc(gvar_42AF80, 16, (LPVOID)param0, (SIZE_T)param1);
        }
        result = v0;
    }
    return result;
}

unsigned int sub_41DFE0(LPVOID lpMem, unsigned int param1) {
    unsigned int v0;
    LPVOID v1;
    unsigned int result;
    int v2;
    int v3;
    unsigned int v4 = param1;
    if(!lpMem) {
        result = sub_41DDA0(param1);
    }
    else {
        if(!param1) {
            sub_41E2D0(lpMem);
        }
        else if(gvar_42AF90 == 3) {
            do {
                v1 = NULL;
                if(param1 <= 0xffffffe0) {
                    unsigned int* ptr0 = (unsigned int*)sub_41A770((int)lpMem);
                    if(ptr0) {
                        if(gvar_42ACA4 >= param1) {
                            int v5 = sub_41B9A0(ptr0, (unsigned int)lpMem, (int)param1);
                            if(v5) {
                                v1 = lpMem;
                            }
                            else {
                                v1 = sub_41AF80((int)param1);
                                if(v1) {
                                    v0 = *(unsigned int*)((int)lpMem - 4) - 1;
                                    unsigned int v6 = v0 < param1 ? v0: param1;
                                    unk_lib_sub5((int*)v1, (int*)lpMem, (int*)v6);
                                    ptr0 = (unsigned int*)sub_41A770((int)lpMem);
                                    sub_41A850(ptr0, (unsigned int)lpMem);
                                }
                            }
                        }
                        if(!v1) {
                            if(!param1) {
                                param1 = 1;
                            }
                            param1 = (unsigned int)((param1 + 15) & 0xfffffff0);
                            v1 = HeapAlloc(gvar_42AF80, 0, (SIZE_T)param1);
                            if(v1) {
                                v0 = *(unsigned int*)((int)lpMem - 4) - 1;
                                unsigned int v7 = v0 < param1 ? v0: param1;
                                unk_lib_sub5((int*)v1, (int*)lpMem, (int*)v7);
                                sub_41A850(ptr0, (unsigned int)lpMem);
                            }
                        }
                    }
                    if(!ptr0) {
                        if(!param1) {
                            param1 = 1;
                        }
                        param1 = (unsigned int)((param1 + 15) & 0xfffffff0);
                        v1 = HeapReAlloc(gvar_42AF80, 0, lpMem, (SIZE_T)param1);
                    }
                }
                if(v1 || !gvar_4298F4) {
                    return (unsigned int)v1;
                }
                v2 = sub_41DCE0((int)param1);
            }
            while(v2);
        }
        else {
            do {
                v1 = NULL;
                if(param1 <= 0xffffffe0) {
                    if(!param1) {
                        param1 = 1;
                    }
                    v1 = HeapReAlloc(gvar_42AF80, 0, lpMem, (SIZE_T)param1);
                }
                if(v1 || !gvar_4298F4) {
                    return (unsigned int)v1;
                }
                v3 = sub_41DCE0((int)param1);
            }
            while(v3);
        }
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
BOOL sub_41E2D0(LPVOID lpMem) {
    BOOL result;
    BOOL v0;
    BOOL v1 = v0;
    if(lpMem) {
        if(gvar_42AF90 == 3) {
            result = sub_41A770((int)lpMem);
            v1 = result;
            if(v1) {
                result = sub_41A850(v1, (int)lpMem);
            }
            if(!v1) {
                result = HeapFree(gvar_42AF80, 0, lpMem);
            }
        }
        else {
            result = HeapFree(gvar_42AF80, 0, lpMem);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_41E360() {
    int result = -2;
    if(gvar_42AF90 == 3) {
        int v0 = sub_41C260();
        if(v0 < 0) {
            result = -4;
        }
    }
    BOOL v1 = HeapValidate(gvar_42AF80, 0, NULL);
    if(!v1) {
        DWORD v2 = GetLastError();
        if(v2 == 120) {
            gvar_429630 = 120;
            gvar_42962C = 40;
        }
        else {
            result = -4;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_41E3E0(int param0) {
    return sub_41E360(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_41E520(unsigned int param0) {
    unsigned int v0;
    int* ptr0;
    char v1;
    int* ptr1;
    char v2;
    int* ptr2 = &ptr1;
    int* ptr3 = &ptr1;
    char v3 = &ptr0 == 48;
    char v4 = (int)&v1 < 0;
    char v5 = __parity__((unsigned char)&ptr0 - 48);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x2c) ^ (int)&v1) >>> 4) & 0x1);
    char v7 = (unsigned int)&ptr1 < 44;
    char v8 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&v1) & (int)(int*)((int)&ptr1 ^ 0x2c)) < 0;
    int* ptr4 = &v1;
    int* ptr5 = &v1;
    int* ptr6 = &v2;
    int* ptr7 = &v2;
    char v9 = param0 ? 0: 1;
    char v10 = param0 >= 0x80000000;
    char v11 = __parity__((unsigned char)param0);
    char v12 = param0 < 0;
    char v13 = 0;
    char v14 = 0;
    if(v9) {
        v0 = (unsigned int)sub_415390(2, "sprintf.c", 145, 0, "format != NULL");
        int* ptr8 = &v1;
        char v15 = v0 == 1;
        char v16 = (int)v0 < 1;
        char v17 = __parity__((unsigned char)v0 - 1);
        char v18 = v0 < 1;
        char v19 = (((v0 - 1) ^ v0) & (v0 ^ 0x1)) < 0;
        char v20 = (((v0 - 1) ^ (v0 ^ 0x1)) >>> 4) & 0x1;
        if(v15) {
            interrupt(3);
        }
    }
    *(ptr5 + 1) = 0x7fffffff;
    *(ptr5 + 3) = 66;
    *(ptr5 + 2) = 0;
    *ptr5 = 0;
    return (unsigned int)sub_41FD80((int)ptr5, (int)param0, (int)ptr7);
}

unsigned int sub_41E6F0() {
    return gvar_428ED8;
}

unsigned int sub_41E700() {
    return gvar_428ED4;
}

int sub_41E710(LCID Locale, DWORD dwMapFlags, char* param2, unsigned int param3, LPSTR lpMultiByteStr1, int cbMultiByte1, UINT CodePage, unsigned int param7) {
    LPWSTR lpDestStr1;
    int v0;
    int result;
    int v1;
    int v2;
    int v3;
    int v4 = -1;
    int v5 = &gvar_427130;
    int v6 = &gvar_4111A4;
    int v7 = *(int*)__FS_BASE;
    int v8 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v8;
    int v9 = v3;
    LPSTR v10 = &v1;
    if(!gvar_429924) {
        v7 = LCMapStringW(0, 0x100, (LPCWSTR)0x427128, 1, NULL, 0);
        if(v7) {
            gvar_429924 = 1;
        }
        else {
            v7 = (int)GetLastError();
            if(v7 == 120) {
                gvar_429924 = 2;
            }
        }
    }
    if((int)param3 > 0) {
        unsigned int v11 = param3;
        char* ptr0 = param2;
        param3 = (unsigned int)sub_41EDD0(ptr0, v11);
    }
    if(gvar_429924 == 2 || !gvar_429924) {
        int v12 = 0;
        LPSTR lpDestStr = NULL;
        unsigned int v13 = 0;
        if(!Locale) {
            Locale = gvar_429904;
        }
        if(!CodePage) {
            CodePage = gvar_429914;
        }
        int v14 = sub_421290(Locale);
        if(v14 == -1) {
            result = 0;
        }
        else if(v14 != CodePage) {
            v12 = sub_421300(CodePage, (UINT)v14, (LPCCH)param2, &param3, NULL, 0);
            if(!v12) {
                result = 0;
            }
            else {
                param2 = (char*)v12;
                int cchDest = LCMapStringA(Locale, dwMapFlags, (LPCSTR)param2, (int)param3, NULL, 0);
                if(cchDest) {
                    v4 = 0;  // __try{ (see __except:41E8A1h)
                    sub_414C20(v2);
                    LPSTR v15 = &v1;
                    v10 = &v1;
                    lpDestStr = v15;
                    sub_411195((int)lpDestStr, 0, cchDest);
                    v4 = -1;  // } (starts at 41E85Fh)
                    if(!lpDestStr) {
                        lpDestStr = (LPSTR)sub_4168D0(cchDest, 2, "a_map.c", 166);
                        if(!lpDestStr) {
                            v0 = 0;
                        }
                        else {
                            sub_411195((int)lpDestStr, 0, cchDest);
                            ++v13;
                            goto loc_41E91A;
                        }
                    }
                    else {
                    loc_41E91A:
                        cchDest = LCMapStringA(Locale, dwMapFlags, (LPCSTR)param2, (int)param3, lpDestStr, cchDest);
                        if(!cchDest) {
                            v0 = 0;
                        }
                        else {
                            int v16 = sub_421300((UINT)v14, CodePage, lpDestStr, &cchDest, lpMultiByteStr1, cbMultiByte1);
                            v0 = v16 ? 1: 0;
                        }
                    }
                }
                if(v13) {
                    sub_4175B0(lpDestStr, 2);
                }
                goto loc_41E9A1;
            }
        }
        else {
            v0 = LCMapStringA(Locale, dwMapFlags, (LPCSTR)param2, (int)param3, lpMultiByteStr1, cbMultiByte1);
        loc_41E9A1:
            if(v12) {
                sub_4175B0((void*)v12, 2);
            }
            result = v0;
        }
    }
    else if(gvar_429924 == 1) {
        int v17 = 0;
        unsigned int v18 = 0;
        unsigned int v19 = 0;
        if(!CodePage) {
            CodePage = gvar_429914;
        }
        int cchWideChar = MultiByteToWideChar(CodePage, param7 ? 9: 1, (LPCCH)param2, (int)param3, NULL, 0);
        if(!cchWideChar) {
            result = 0;
        }
        else {
            v4 = 1;  // __try{ (see __except:41EA52h)
            sub_414C20(v2);
            LPWSTR v20 = (LPWSTR)&v1;
            v10 = &v1;
            LPWSTR lpWideCharStr = v20;
            v4 = -1;  // } (starts at 41EA20h)
            if(!lpWideCharStr) {
                lpWideCharStr = (LPWSTR)sub_4168D0(cchWideChar * 2, 2, "a_map.c", 0x101);
                if(!lpWideCharStr) {
                    result = 0;
                }
                else {
                    ++v18;
                    goto loc_41EAB7;
                }
            }
            else {
            loc_41EAB7:
                int v21 = MultiByteToWideChar(CodePage, 1, (LPCCH)param2, (int)param3, lpWideCharStr, cchWideChar);
                if(v21) {
                    v17 = LCMapStringW(Locale, dwMapFlags, lpWideCharStr, cchWideChar, NULL, 0);
                    if(v17) {
                        if(!(dwMapFlags & 0x400)) {
                            int cchDest1 = v17;
                            sub_414C20(v17);
                            LPWSTR v22 = (LPWSTR)&v1;
                            v10 = &v1;
                            lpDestStr1 = v22;
                            v4 = -1;  // } (starts at 41EB3Eh)
                            if(!lpDestStr1) {
                                lpDestStr1 = (LPWSTR)sub_4168D0(cchDest1 * 2, 2, "a_map.c", 314);
                                if(lpDestStr1) {
                                    ++v19;
                                    goto loc_41EBD2;
                                }
                            }
                            else {
                            loc_41EBD2:
                                int v23 = LCMapStringW(Locale, dwMapFlags, lpWideCharStr, cchWideChar, lpDestStr1, cchDest1);
                                if(v23) {
                                    v17 = !cbMultiByte1 ? WideCharToMultiByte(CodePage, 0, lpDestStr1, cchDest1, NULL, 0, NULL, NULL): WideCharToMultiByte(CodePage, 0, lpDestStr1, cchDest1, lpMultiByteStr1, cbMultiByte1, NULL, NULL);
                                }
                            }
                        }
                        else if(cbMultiByte1 && v17 <= cbMultiByte1) {
                            int v24 = LCMapStringW(Locale, dwMapFlags, lpWideCharStr, cchWideChar, (LPWSTR)lpMultiByteStr1, cbMultiByte1);
                        }
                    }
                }
                if(v19) {
                    sub_4175B0(lpDestStr1, 2);
                }
                if(v18) {
                    sub_4175B0(lpWideCharStr, 2);
                }
                result = v17;
            }
        }
    }
    else {
        result = 0;
    }
    *(int*)__FS_BASE = v8;
    return result;
}

int sub_41EDD0(char* param0, unsigned int param1) {
    unsigned int v0 = param1;
    char* ptr0 = param0;
    while(1) {
        unsigned int v1 = v0;
        --v0;
        if(!v1 || !(unsigned int)*ptr0) {
            break;
        }
        else {
            ++ptr0;
        }
    }
    return param1 - v0 - 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
BOOL sub_41EE30(DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType, UINT CodePage, LCID Locale, unsigned int param6) {
    BOOL result;
    int v0;
    char v1;
    int v2;
    int v3;
    int v4 = -1;
    int v5 = &gvar_427168;
    int v6 = &gvar_4111A4;
    BOOL v7 = *(BOOL*)__FS_BASE;
    *(int**)__FS_BASE = &v7;
    int v8 = v2;
    LPWSTR v9 = &v0;
    if(!gvar_429928) {
        BOOL v10 = GetStringTypeW(1, (LPCWCH)0x427128, 1, &v1);
        if(v10) {
            gvar_429928 = 1;
        }
        else {
            v10 = (BOOL)GetLastError();
            if(v10 == 120) {
                gvar_429928 = 2;
            }
        }
    }
    if(gvar_429928 == 2 || !gvar_429928) {
        void* ptr0 = NULL;
        if(!Locale) {
            Locale = gvar_429904;
        }
        if(!CodePage) {
            CodePage = gvar_429914;
        }
        int v11 = sub_421290(Locale);
        if(v11 == -1) {
            result = 0;
        }
        else if(v11 != CodePage) {
            ptr0 = (void*)sub_421300((int)CodePage, v11, (int)lpSrcStr, (int)&cchSrc, 0, 0);
            if(!ptr0) {
                result = 0;
            }
            else {
                lpSrcStr = (LPCSTR)ptr0;
                goto loc_41EF3C;
            }
        }
        else {
        loc_41EF3C:
            BOOL v12 = GetStringTypeA(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
            if(ptr0) {
                sub_4175B0(ptr0, 2);
            }
            result = v12;
        }
    }
    else if(gvar_429928 == 1) {
        BOOL v13 = 0;
        unsigned int v14 = 0;
        if(!CodePage) {
            CodePage = gvar_429914;
        }
        int cchWideChar = MultiByteToWideChar(CodePage, param6 ? 9: 1, lpSrcStr, cchSrc, NULL, 0);
        if(!cchWideChar) {
            result = 0;
        }
        else {
            v4 = 0;
            sub_414C20(v3);
            LPWSTR v15 = &v0;
            v9 = &v0;
            LPWSTR lpWideCharStr = v15;
            sub_411195((int)lpWideCharStr, 0, cchWideChar * 2);
            v4 = -1;
            if(!lpWideCharStr) {
                lpWideCharStr = (LPWSTR)sub_416DD0(2, cchWideChar, 2, "a_str.c", 166);
                if(!lpWideCharStr) {
                    result = 0;
                }
                else {
                    ++v14;
                    goto loc_41F06A;
                }
            }
            else {
            loc_41F06A:
                int cchSrc1 = MultiByteToWideChar(CodePage, 1, lpSrcStr, cchSrc, lpWideCharStr, cchWideChar);
                if(cchSrc1) {
                    v13 = GetStringTypeW(dwInfoType, lpWideCharStr, cchSrc1, lpCharType);
                }
                if(v14) {
                    sub_4175B0(lpWideCharStr, 2);
                }
                result = v13;
            }
        }
    }
    else {
        result = 0;
    }
    *(BOOL*)__FS_BASE = v7;
    return result;
}

BOOL sub_41F580() {
    BOOL v0;
    BOOL result;
    int v1;
    int v2;
    int v3;
    int v4;
    if(!gvar_428EB0 || gvar_428EB0 == -1153374642) {
        /*BAD_CALL!*/ GetSystemTimeAsFileTime(&v1);
        DWORD v5 = /*BAD_CALL!*/ GetCurrentProcessId();
        DWORD v6 = /*BAD_CALL!*/ GetCurrentThreadId();
        DWORD v7 = GetTickCount();
        BOOL v8 = (((BOOL)(v1 ^ v2) ^ v5) ^ v6) ^ v7;
        result = QueryPerformanceCounter(&v3);
        BOOL v9 = (BOOL)((v3 ^ v8) ^ v4);
        if(v9) {
            result = v9;
            v0 = v9;
        }
        else {
            v0 = -1153374642;
        }
        gvar_428EB0 = v0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_41F640(unsigned int param0, int param1) {
    unsigned int result;
    int v0;
    int v1;
    int v2;
    int* ptr0;
    int* ptr1;
    int v3;
    int v4;
    int v5;
    int* ptr2;
    char v6;
    int* ptr3 = &ptr1;
    int v7 = -1;
    int v8 = &gvar_427368;
    int v9 = &gvar_4111A4;
    int v10 = *(int*)__FS_BASE;
    int v11 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v11;
    int* ptr4 = &v11;
    char v12 = &ptr0 == 328;
    char v13 = (int)&ptr2 < 0;
    char v14 = __parity__((unsigned char)&ptr0 - 72);
    char v15 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v11 ^ 0xfffffecc) ^ (int)&ptr2) >>> 4) & 0x1);
    char v16 = (unsigned int)&v11 >= 308;
    char v17 = (int)(int*)((int)(int*)((int)&v11 ^ (int)&ptr2) & (int*)~(int)(int*)((int)&v11 ^ 0xfffffecc)) < 0;
    unsigned int v18 = gvar_428EB0;
    unsigned int v19 = gvar_428EB0;
    int v20 = v4;
    int* ptr5 = &v3;
    char v21 = gvar_42992C ? 0: 1;
    char v22 = gvar_42992C >= 0x80000000;
    char v23 = __parity__((unsigned char)gvar_42992C);
    char v24 = gvar_42992C < 0;
    char v25 = 0;
    char v26 = 0;
    if(!v21) {
        v7 = 0;
        gvar_42992C((int)param0, param1);
    }
    else {
        unsigned int v27 = param0;
        unsigned int v28 = param0;
        char v29 = v28 == 1;
        char v30 = (int)v28 < 1;
        char v31 = __parity__((unsigned char)v28 - 1);
        char v32 = v28 < 1;
        char v33 = (((v28 - 1) ^ v28) & (v28 ^ 0x1)) < 0;
        char v34 = (((v28 - 1) ^ (v28 ^ 0x1)) >>> 4) & 0x1;
        if(!v29) {
            v2 = "Unknown security failure detected!";
            v1 = "A security error of unknown cause has been detected which has\ncorrupted the program\'s internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n";
            v0 = 212;
        }
        else {
            v2 = "Buffer overrun detected!";
            v1 = "A buffer overrun has been detected which has corrupted the program\'s\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n";
            v0 = 185;
        }
        int v35 = v1;
        int v36 = v1;
        result = (unsigned int)sub_415390(1, 0, 0, 0, &gvar_426074);
        int* ptr6 = &v3;
        char v37 = result == 1;
        char v38 = (int)result < 1;
        char v39 = __parity__((unsigned char)result - 1);
        char v40 = result < 1;
        char v41 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
        char v42 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
        if(v37) {
            interrupt(3);
        }
        char v43 = 0;
        DWORD v44 = GetModuleFileNameA(NULL, &v6, 260);
        if(!v44) {
            sub_411258((int)&v6, "<program name unknown>");
        }
        LPSTR v45 = &v6;
        int v46 = sub_411235((int)&v6);
        if((unsigned int)(v46 + 11) > 60) {
            int v47 = sub_411235((int)&v6);
            v45 = (LPSTR)(v47 + (int)v45) - 49;
            sub_411492((int)v45, &gvar_425B78, 3);
        }
        int v48 = sub_411235((int)v45);
        sub_414C20(v5);
        ptr2 = &v3;
        ptr5 = &v3;
        int* ptr7 = &v3;
        sub_411258((int)ptr7, v2);
        sub_41120D((int)ptr7, &gvar_425B54);
        sub_41120D((int)ptr7, "Program: ");
        sub_41120D((int)ptr7, (int)v45);
        sub_41120D((int)ptr7, &gvar_425B54);
        sub_41120D((int)ptr7, v1);
        sub_41CDB0((int)ptr7, "Microsoft Visual C++ Runtime Library", 0x12010);
    }
    sub_413250(3);
    *(int*)__FS_BASE = v11;
    sub_411087((int)v19);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_41F920() {
    return sub_41F640(1, 0);
}

unsigned int sub_41F940(unsigned int param0) {
    return unk_lib_sub8(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_41FD80(int param0, int param1, unsigned int param2) {
    char v0;
    LPSTR v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5;
    char v6;
    unsigned int v7;
    unsigned int v8;
    unsigned int v9;
    unsigned int v10;
    LPSTR v11;
    unsigned int v4;
    unsigned int result;
    int v12;
    int v13;
    int v14;
    char v15;
    short v16;
    int* ptr0;
    char v17;
    char v18;
    short v19;
    char v20;
    CHAR v21;
    unsigned int v22;
    char v23;
    char v24;
    CHAR v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int* ptr1 = &ptr0;
    int* ptr2 = &ptr0;
    int* ptr3 = &v24;
    char v30 = &v14 == 704;
    char v31 = (int)&v24 < 0;
    char v32 = __parity__((unsigned char)&v14 - 192);
    char v33 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x2bc) ^ (int)&v24) >>> 4) & 0x1);
    char v34 = (unsigned int)&ptr0 < 700;
    char v35 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v24) & (int)(int*)((int)&ptr0 ^ 0x2bc)) < 0;
    unsigned int v36 = gvar_428EB0;
    unsigned int v37 = gvar_428EB0;
    int v38 = 0;
    *(int*)&v19 = 0;
    int v39 = 0;
    void* ptr4 = NULL;
loc_41FDB3:
    while(1) {
        int v40 = param1;
        char v41 = *(char*)v40;
        int v42 = (int)v41;
        int v43 = param1;
        int v44 = param1;
        int v45 = v43 + 1;
        char v46 = v45 ? 0: 1;
        char v47 = v45 < 0;
        char v48 = __parity__((unsigned char)v45);
        char v49 = (unsigned int)v44 >= 0xffffffff;
        char v50 = (int)(int*)((int)(int*)(v45 ^ v44) & (int*)~(int)(int*)(v44 ^ 0x1)) < 0;
        param1 = v45;
        if(!v42) {
            *(int*)&v25 = &loc_420A44;
            /*BAD_CALL!*/ sub_411087((int)v37);
            return result;
        }
        char v51 = *(int*)&v19 ? 0: 1;
        char v52 = *(int*)&v19 < 0;
        char v53 = __parity__((unsigned char)*(int*)&v19);
        char v54 = *(unsigned int*)&v19 < 0;
        char v55 = 0;
        char v56 = 0;
        if(v52 != 0) {
            *(int*)&v25 = &loc_420A44;
            /*BAD_CALL!*/ sub_411087((int)v37);
            return result;
        }
        unsigned int v57 = (unsigned int)v41;
        char v58 = v57 == 32;
        char v59 = (int)v57 < 32;
        char v60 = __parity__((unsigned char)v57 - 32);
        char v61 = v57 < 32;
        char v62 = (((v57 - 32) ^ v57) & (v57 ^ 0x20)) < 0;
        char v63 = (((v57 - 32) ^ (v57 ^ 0x20)) >>> 4) & 0x1;
        if(v59 == v62) {
            unsigned int v64 = (unsigned int)v41;
            v58 = v64 == 120;
            v59 = (int)v64 < 120;
            v60 = __parity__((unsigned char)v64 - 120);
            v61 = v64 < 120;
            v62 = (((v64 - 120) ^ v64) & (v64 ^ 0x78)) < 0;
            char v65 = (((v64 - 120) ^ (v64 ^ 0x78)) >>> 4) & 0x1;
            if(!v58 && v59 == v62) {
                goto loc_41FE14;
            }
            else {
                int v66 = (int)v41;
                int v67 = (int)*(char*)(v66 + 4355008);
                int v68 = v67 & 0xf;
                v58 = v68 ? 0: 1;
                v59 = v68 < 0;
                v60 = __parity__((unsigned char)v68);
                v62 = 0;
                v61 = 0;
                v13 = v68;
            }
        }
        else {
        loc_41FE14:
            v13 = 0;
        }
        int v69 = v13;
        int v70 = v13;
        int v71 = v13;
        int v72 = (int)*(char*)(v71 * 8 + v39 + 4355040);
        int v73 = (int)*(char*)(v71 * 8 + v39 + 4355040);
        int v74 = v72 >> 4;
        char v75 = (v73 >>> 3) & 0x1;
        char v76 = v62;
        char v77 = v74 ? 0: 1;
        char v78 = v74 < 0;
        char v79 = __parity__((unsigned char)v74);
        v39 = v74;
        int v80 = v74;
        int v81 = v74;
        char v82 = v81 == 7;
        char v83 = v81 < 7;
        char v84 = __parity__((unsigned char)v81 - 7);
        char v85 = (unsigned int)v81 < 7;
        char v86 = (((v81 - 7) ^ v81) & (v81 ^ 0x7)) < 0;
        char v87 = (((v81 - 7) ^ (v81 ^ 0x7)) >>> 4) & 0x1;
        if((v85 || v82)) {
            v12 = v81;
            jump gvar_420A48[v12];
            if((v1245 || v1240)) {
                unsigned int v88 = v1284;
                jump gvar_420A68[(int)gvar_420A80[v88]];
                if(v1316) {
                    int* ptr5 = &param2;
                    *(int**)&v25 = &param2;
                    int v89 = get_int_arg(*(int*)&v25);
                    unsigned char* ptr6 = &v25;
                    ptr3 = &v24;
                    char v90 = &v14 == 704;
                    char v91 = (int)&v24 < 0;
                    char v92 = __parity__((unsigned char)&v14 - 192);
                    char v93 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                    char v94 = (unsigned int)&v25 >= 0xfffffffc;
                    char v95 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                    v1197 = v89;
                    char v96 = v1197 ? 0: 1;
                    char v97 = v1197 < 0;
                    char v98 = __parity__((unsigned char)v1197);
                    char v99 = (unsigned int)v1197 < 0;
                    char v100 = 0;
                    char v101 = 0;
                    if(v97 != 0) {
                        int v102 = v1194;
                        int v103 = v102 | 0x4;
                        char v104 = v103 ? 0: 1;
                        char v105 = v103 < 0;
                        char v106 = __parity__((unsigned char)v103);
                        char v107 = 0;
                        char v108 = 0;
                        v1194 = v103;
                        int v109 = v1197;
                        int v110 = v1197;
                        v12 = 0 - v109;
                        char v111 = v12 ? 0: 1;
                        char v112 = v12 < 0;
                        char v113 = __parity__((unsigned char)v12);
                        char v114 = (unsigned int)v110 > 0;
                        char v115 = (v12 & v110) < 0;
                        char v116 = ((unsigned int)(v12 ^ v110) >>> 4) & 0x1;
                        v1197 = v12;
                    }
                }
                else {
                    int v117 = v1197;
                    int v118 = v1197;
                    int v119 = v117 * 10;
                    char v120 = (long long)v118 * 10L != (long long)v119;
                    char v121 = (long long)v118 * 10L != (long long)v119;
                    int v122 = (int)v41;
                    v1197 = v122 + v119 - 48;
                    continue;
                    if(v1324) {
                        int* ptr7 = &param2;
                        *(int**)&v25 = &param2;
                        int v123 = get_int_arg(*(int*)&v25);
                        unsigned char* ptr8 = &v25;
                        ptr3 = &v24;
                        char v124 = &v14 == 704;
                        char v125 = (int)&v24 < 0;
                        char v126 = __parity__((unsigned char)&v14 - 192);
                        char v127 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                        char v128 = (unsigned int)&v25 >= 0xfffffffc;
                        char v129 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                        v1222 = v123;
                        char v130 = v1222 ? 0: 1;
                        char v131 = v1222 < 0;
                        char v132 = __parity__((unsigned char)v1222);
                        char v133 = (unsigned int)v1222 < 0;
                        char v134 = 0;
                        char v135 = 0;
                        if(v131 != 0) {
                            v1222 = -1;
                        }
                    }
                    else {
                        int v136 = v1222;
                        int v137 = v1222;
                        v12 = v136 * 10;
                        char v138 = (long long)v137 * 10L != (long long)v12;
                        char v139 = (long long)v137 * 10L != (long long)v12;
                        int v140 = (int)v41;
                        int v141 = v12 + v140 - 48;
                        v1222 = v12 + v140 - 48;
                        continue;
                        if((v1210 || v1205)) {
                            unsigned int v142 = v1287;
                            jump gvar_420A91[(int)gvar_420AA5[v142]];
                            if(v1226) {
                                int v143 = param1;
                                unsigned int v144 = (unsigned int)*(char*)(v143 + 1);
                                char v145 = v144 == 52;
                                char v146 = (int)v144 < 52;
                                char v147 = __parity__((unsigned char)v144 - 52);
                                char v148 = v144 < 52;
                                char v149 = (((v144 - 52) ^ v144) & (v144 ^ 0x34)) < 0;
                                char v150 = (((v144 - 52) ^ (v144 ^ 0x34)) >>> 4) & 0x1;
                                if(v145) {
                                    int v151 = param1;
                                    int v152 = param1;
                                    v12 = v151 + 2;
                                    char v153 = v12 ? 0: 1;
                                    char v154 = v12 < 0;
                                    char v155 = __parity__((unsigned char)v12);
                                    char v156 = (int*)((int)(int*)((int)(int*)((int)(int*)(v152 ^ 0x2) ^ v12) >>> 4) & 0x1);
                                    char v157 = (unsigned int)v152 >= 0xfffffffe;
                                    char v158 = (int)(int*)((int)(int*)(v12 ^ v152) & (int*)~(int)(int*)(v152 ^ 0x2)) < 0;
                                    param1 = v12;
                                    int v159 = v1194;
                                    int v160 = v159 | 0x8000;
                                    char v161 = v160 ? 0: 1;
                                    char v162 = v160 < 0;
                                    char v163 = __parity__((unsigned char)v160);
                                    char v164 = 0;
                                    char v165 = 0;
                                    v1194 = v160;
                                    continue;
                                }
                            }
                            int v166 = param1;
                            unsigned int v167 = (unsigned int)*(char*)v166;
                            char v168 = v167 == 51;
                            char v169 = (int)v167 < 51;
                            char v170 = __parity__((unsigned char)v167 - 51);
                            char v171 = v167 < 51;
                            char v172 = (((v167 - 51) ^ v167) & (v167 ^ 0x33)) < 0;
                            char v173 = (((v167 - 51) ^ (v167 ^ 0x33)) >>> 4) & 0x1;
                            if(v168) {
                                int v174 = param1;
                                unsigned int v175 = (unsigned int)*(char*)(v174 + 1);
                                char v176 = v175 == 50;
                                char v177 = (int)v175 < 50;
                                char v178 = __parity__((unsigned char)v175 - 50);
                                char v179 = v175 < 50;
                                char v180 = (((v175 - 50) ^ v175) & (v175 ^ 0x32)) < 0;
                                char v181 = (((v175 - 50) ^ (v175 ^ 0x32)) >>> 4) & 0x1;
                                if(v176) {
                                    int v182 = param1;
                                    int v183 = param1;
                                    v12 = v182 + 2;
                                    char v184 = v12 ? 0: 1;
                                    char v185 = v12 < 0;
                                    char v186 = __parity__((unsigned char)v12);
                                    char v187 = (((v183 ^ 0x2) ^ v12) >>> 4) & 0x1;
                                    char v188 = (unsigned int)v183 >= 0xfffffffe;
                                    char v189 = (int)((unsigned int)(v12 ^ v183) & ~(v183 ^ 0x2)) < 0;
                                    param1 = v12;
                                    int v190 = v1194;
                                    int v191 = v190 & 0xffff7fff;
                                    char v192 = v191 ? 0: 1;
                                    char v193 = v191 < 0;
                                    char v194 = __parity__((unsigned char)v191);
                                    char v195 = 0;
                                    char v196 = 0;
                                    v1194 = v191;
                                    continue;
                                }
                            }
                            int v197 = param1;
                            v12 = (int)*(char*)v197;
                            char v198 = v12 == 100;
                            char v199 = v12 < 100;
                            char v200 = __parity__((unsigned char)v12 - 100);
                            char v201 = (unsigned int)v12 < 100;
                            char v202 = (((v12 - 100) ^ v12) & (v12 ^ 0x64)) < 0;
                            char v203 = (((v12 - 100) ^ (v12 ^ 0x64)) >>> 4) & 0x1;
                            if(!v198) {
                                int v204 = param1;
                                unsigned int v205 = (unsigned int)*(char*)v204;
                                char v206 = v205 == 105;
                                char v207 = (int)v205 < 105;
                                char v208 = __parity__((unsigned char)v205 - 105);
                                char v209 = v205 < 105;
                                char v210 = (((v205 - 105) ^ v205) & (v205 ^ 0x69)) < 0;
                                char v211 = (((v205 - 105) ^ (v205 ^ 0x69)) >>> 4) & 0x1;
                                if(!v206) {
                                    unsigned int v212 = (unsigned int)*(char*)param1;
                                    char v213 = v212 == 111;
                                    char v214 = (int)v212 < 111;
                                    char v215 = __parity__((unsigned char)v212 - 111);
                                    char v216 = v212 < 111;
                                    char v217 = (((v212 - 111) ^ v212) & (v212 ^ 0x6f)) < 0;
                                    char v218 = (((v212 - 111) ^ (v212 ^ 0x6f)) >>> 4) & 0x1;
                                    if(!v213) {
                                        int v219 = param1;
                                        v12 = (int)*(char*)v219;
                                        char v220 = v12 == 117;
                                        char v221 = v12 < 117;
                                        char v222 = __parity__((unsigned char)v12 - 117);
                                        char v223 = (unsigned int)v12 < 117;
                                        char v224 = (int)(int*)((int)(int*)((int)(int*)(v12 - 117) ^ v12) & (int)(int*)(v12 ^ 0x75)) < 0;
                                        char v225 = (int*)((int)(int*)((int)(int*)((int)(int*)(v12 - 117) ^ (int)(int*)(v12 ^ 0x75)) >>> 4) & 0x1);
                                        if(!v220) {
                                            int v226 = param1;
                                            unsigned int v227 = (unsigned int)*(char*)v226;
                                            char v228 = v227 == 120;
                                            char v229 = (int)v227 < 120;
                                            char v230 = __parity__((unsigned char)v227 - 120);
                                            char v231 = v227 < 120;
                                            char v232 = (((v227 - 120) ^ v227) & (v227 ^ 0x78)) < 0;
                                            char v233 = (((v227 - 120) ^ (v227 ^ 0x78)) >>> 4) & 0x1;
                                            if(!v228) {
                                                v12 = param1;
                                                unsigned int v234 = (unsigned int)*(char*)v12;
                                                char v235 = v234 == 88;
                                                char v236 = (int)v234 < 88;
                                                char v237 = __parity__((unsigned char)v234 - 88);
                                                char v238 = v234 < 88;
                                                char v239 = (((v234 - 88) ^ v234) & (v234 ^ 0x58)) < 0;
                                                char v240 = (((v234 - 88) ^ (v234 ^ 0x58)) >>> 4) & 0x1;
                                                if(v235 == 0) {
                                                    v39 = 0;
                                                    v1193 = 0;
                                                    int v241 = (unsigned int)v41;
                                                    result = gvar_428ED4;
                                                    int v242 = (unsigned int)*(short*)(v241 * 2 + result);
                                                    int v243 = v242 & 0x8000;
                                                    char v244 = v243 ? 0: 1;
                                                    char v245 = v243 < 0;
                                                    char v246 = __parity__((unsigned char)v243);
                                                    char v247 = 0;
                                                    char v248 = 0;
                                                    if(!v244) {
                                                        unsigned short* ptr9 = &v19;
                                                        *(unsigned short**)&v25 = &v19;
                                                        int v249 = param0;
                                                        v243 = (unsigned int)v41 | ((unsigned int)((v243 >>> 8) & 0xffffff) << 8);
                                                        result = (unsigned int)sub_420EC0(v243, v249, *(int*)&v25);
                                                        int* ptr10 = &v27;
                                                        char v250 = &v14 == 704;
                                                        char v251 = (int)&v24 < 0;
                                                        char v252 = __parity__((unsigned char)&v14 - 192);
                                                        char v253 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v27 ^ 0xc) ^ (int)&v24) >>> 4) & 0x1);
                                                        char v254 = (unsigned int)&v27 >= 0xfffffff4;
                                                        char v255 = (int)(int*)((int)(int*)((int)&v27 ^ (int)&v24) & (int*)~(int)(int*)((int)&v27 ^ 0xc)) < 0;
                                                        int v256 = param1;
                                                        result = (unsigned int)*(char*)v256 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
                                                        v41 = *(char*)v256;
                                                        int v257 = param1;
                                                        int v258 = param1;
                                                        int v259 = v257 + 1;
                                                        char v260 = v259 ? 0: 1;
                                                        char v261 = v259 < 0;
                                                        char v262 = __parity__((unsigned char)v259);
                                                        char v263 = (int*)((int)(int*)((int)(int*)((int)(int*)(v258 ^ 0x1) ^ v259) >>> 4) & 0x1);
                                                        char v264 = (unsigned int)v258 >= 0xffffffff;
                                                        char v265 = (int)(int*)((int)(int*)(v259 ^ v258) & (int*)~(int)(int*)(v258 ^ 0x1)) < 0;
                                                        param1 = v259;
                                                        int v266 = (int)v41;
                                                        char v267 = v266 ? 0: 1;
                                                        char v268 = v266 < 0;
                                                        char v269 = __parity__((unsigned char)v266);
                                                        char v270 = 0;
                                                        char v271 = 0;
                                                        if(v267) {
                                                            *(int*)&v25 = "ch != _T(\'\\0\')";
                                                            result = (unsigned int)sub_415390(2, "output.c", 402, 0, *(int*)&v25);
                                                            ptr3 = &v24;
                                                            v51 = result == 1;
                                                            v52 = (int)result < 1;
                                                            v53 = __parity__((unsigned char)result - 1);
                                                            v54 = result < 1;
                                                            v55 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
                                                            v56 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
                                                            if(v51) {
                                                                interrupt(3);
                                                            }
                                                        }
                                                    }
                                                    unsigned short* ptr11 = &v19;
                                                    *(unsigned short**)&v25 = &v19;
                                                    int v272 = param0;
                                                    result = (unsigned int)v41 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
                                                    int v273 = sub_420EC0((int)result, v272, *(int*)&v25);
                                                    int* ptr12 = &v27;
                                                    ptr3 = &v24;
                                                    char v274 = &v14 == 704;
                                                    char v275 = (int)&v24 < 0;
                                                    char v276 = __parity__((unsigned char)&v14 - 192);
                                                    char v277 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v27 ^ 0xc) ^ (int)&v24) >>> 4) & 0x1);
                                                    char v278 = (unsigned int)&v27 >= 0xfffffff4;
                                                    char v279 = (int)(int*)((int)(int*)((int)&v27 ^ (int)&v24) & (int*)~(int)(int*)((int)&v27 ^ 0xc)) < 0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        continue;
        if((v1303 || v1298)) {
            v12 = v1297;
            int v280 = (unsigned int)gvar_420B10[v12];
        alab1:
            switch(v280) {
                case 0: {
                    int v281 = v1194;
                    int* ptr13 = (int*)(v281 & 0x830);
                    char v282 = ptr13 ? 0: 1;
                    char v283 = (int)ptr13 < 0;
                    char v284 = __parity__((unsigned char)ptr13);
                    char v285 = 0;
                    char v286 = 0;
                    if(v282) {
                        int v287 = v1194;
                        int v288 = v287 | 0x800;
                        char v289 = v288 ? 0: 1;
                        char v290 = v288 < 0;
                        char v291 = __parity__((unsigned char)v288);
                        char v292 = 0;
                        char v293 = 0;
                        v1194 = v288;
                    }
                    goto loc_4201B8;
                }
                case 1: {
                    v1219 = 1;
                    int v294 = (int)v41;
                    unsigned int v295 = (unsigned int)v41;
                    int v296 = v294 + 32;
                    char v297 = v296 ? 0: 1;
                    char v298 = v296 < 0;
                    char v299 = __parity__((unsigned char)v296);
                    char v300 = (((v295 ^ 0x20) ^ v296) >>> 4) & 0x1;
                    char v301 = v295 >= 0xffffffe0;
                    char v302 = ((v296 ^ v295) & ~(v295 ^ 0x20)) < 0;
                    v41 = (unsigned char)v296;
                    goto loc_420442;
                }
                case 2: {
                    int v303 = v1194;
                    int* ptr14 = (int*)(v303 & 0x830);
                    char v304 = ptr14 ? 0: 1;
                    char v305 = (int)ptr14 < 0;
                    char v306 = __parity__((unsigned char)ptr14);
                    char v307 = 0;
                    char v308 = 0;
                    if(v304) {
                        int v309 = v1194;
                        int v310 = v309 | 0x800;
                        char v311 = v310 ? 0: 1;
                        char v312 = v310 < 0;
                        char v313 = __parity__((unsigned char)v310);
                        char v314 = 0;
                        char v315 = 0;
                        v1194 = v310;
                    }
                    goto loc_4202DF;
                }
                case 3: {
                    v4 = 7;
                    goto loc_4205BD;
                }
                case 4: {
                    int* ptr15 = &param2;
                    *(int**)&v25 = &param2;
                    int v316 = get_int_arg(*(int*)&v25);
                    unsigned char* ptr16 = &v25;
                    ptr3 = &v24;
                    char v317 = &v14 == 704;
                    char v318 = (int)&v24 < 0;
                    char v319 = __parity__((unsigned char)&v14 - 192);
                    char v320 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                    char v321 = (unsigned int)&v25 >= 0xfffffffc;
                    char v322 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                    int v323 = v316;
                    char v324 = v323 ? 0: 1;
                    char v325 = v323 < 0;
                    char v326 = __parity__((unsigned char)v323);
                    char v327 = (unsigned int)v323 < 0;
                    char v328 = 0;
                    char v329 = 0;
                    if(!v324) {
                        int v330 = v323;
                        char v331 = *(int*)(v330 + 4) ? 0: 1;
                        char v332 = *(int*)(v330 + 4) < 0;
                        char v333 = __parity__((unsigned char)*(int*)(v330 + 4));
                        char v334 = *(unsigned int*)(v330 + 4) < 0;
                        char v335 = 0;
                        char v336 = 0;
                        if(v331) {
                            goto loc_42025A;
                        }
                        else {
                            int v337 = v1194;
                            int* ptr17 = (int*)(v337 & 0x800);
                            char v338 = ptr17 ? 0: 1;
                            char v339 = (int)ptr17 < 0;
                            char v340 = __parity__((unsigned char)ptr17);
                            char v341 = 0;
                            char v342 = 0;
                            if(!v338) {
                                int v343 = v323;
                                LPSTR v344 = *(LPSTR*)(v343 + 4);
                                v11 = *(LPSTR*)(v343 + 4);
                                unsigned int v345 = (unsigned int)*(short*)v323;
                                unsigned int v346 = v345 >= 0x80000000 ? 0xffffffff: 0;
                                unsigned int v347 = v345;
                                unsigned int v348 = v345 - v346;
                                char v349 = v348 ? 0: 1;
                                char v350 = v348 >= 0x80000000;
                                char v351 = __parity__((unsigned char)v348);
                                char v352 = (((v346 ^ v347) ^ v348) >>> 4) & 0x1;
                                char v353 = v346 > v347;
                                char v354 = (int)((v348 ^ v347) & (v346 ^ v347)) < 0;
                                unsigned int v355 = v348;
                                int v356 = (int)(v348 >> 1);
                                char v357 = v355 & 0x1;
                                char v358 = 0;
                                char v359 = v356 ? 0: 1;
                                char v360 = v356 < 0;
                                char v361 = __parity__((unsigned char)v356);
                                v38 = v356;
                                v1193 = 1;
                            }
                            else {
                                v1193 = 0;
                                int v362 = v323;
                                LPSTR v363 = *(LPSTR*)(v362 + 4);
                                v11 = *(LPSTR*)(v362 + 4);
                                int v364 = (int)*(short*)v323;
                                v38 = (int)*(short*)v323;
                            }
                        }
                    }
                    else {
                    loc_42025A:
                        LPSTR v365 = gvar_428EF0;
                        v11 = gvar_428EF0;
                        LPSTR v366 = gvar_428EF0;
                        *(LPSTR*)&v25 = gvar_428EF0;
                        int v367 = sub_411235(*(int*)&v25);
                        unsigned char* ptr18 = &v25;
                        ptr3 = &v24;
                        char v368 = &v14 == 704;
                        char v369 = (int)&v24 < 0;
                        char v370 = __parity__((unsigned char)&v14 - 192);
                        char v371 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                        char v372 = (unsigned int)&v25 >= 0xfffffffc;
                        char v373 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                        v38 = v367;
                    }
                    break;
                }
                case 5: {
                loc_4201B8:
                    int v374 = v1194;
                    int* ptr19 = (int*)(v374 & 0x810);
                    char v375 = ptr19 ? 0: 1;
                    char v376 = (int)ptr19 < 0;
                    char v377 = __parity__((unsigned char)ptr19);
                    char v378 = 0;
                    char v379 = 0;
                    if(!v375) {
                        int* ptr20 = &param2;
                        *(int**)&v25 = &param2;
                        int v380 = get_short_arg(*(int*)&v25);
                        unsigned char* ptr21 = &v25;
                        char v381 = &v14 == 704;
                        char v382 = (int)&v24 < 0;
                        char v383 = __parity__((unsigned char)&v14 - 192);
                        char v384 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                        char v385 = (unsigned int)&v25 >= 0xfffffffc;
                        char v386 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                        short v387 = (unsigned short)v380;
                        short v388 = (unsigned short)v380;
                        *(int*)&v25 = (unsigned int)v388 | ((unsigned int)v16 << 16);
                        LPSTR v389 = &v17;
                        int v390 = sub_421E40(&v17, v25);
                        int* ptr22 = &v26;
                        ptr3 = &v24;
                        char v391 = &v14 == 704;
                        char v392 = (int)&v24 < 0;
                        char v393 = __parity__((unsigned char)&v14 - 192);
                        char v394 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v26 ^ 0x8) ^ (int)&v24) >>> 4) & 0x1);
                        char v395 = (unsigned int)&v26 >= 0xfffffff8;
                        char v396 = (int)(int*)((int)(int*)((int)&v26 ^ (int)&v24) & (int*)~(int)(int*)((int)&v26 ^ 0x8)) < 0;
                        v38 = v390;
                        char v397 = v38 ? 0: 1;
                        char v398 = v38 < 0;
                        char v399 = __parity__((unsigned char)v38);
                        char v400 = (unsigned int)v38 < 0;
                        char v401 = 0;
                        char v402 = 0;
                        if(v398 != 0) {
                            v1214 = 1;
                        }
                    }
                    else {
                        int* ptr23 = &param2;
                        *(int**)&v25 = &param2;
                        int v403 = get_int_arg(*(int*)&v25);
                        unsigned char* ptr24 = &v25;
                        ptr3 = &v24;
                        char v404 = &v14 == 704;
                        char v405 = (int)&v24 < 0;
                        char v406 = __parity__((unsigned char)&v14 - 192);
                        char v407 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                        char v408 = (unsigned int)&v25 >= 0xfffffffc;
                        char v409 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                        *(short*)&v20 = (unsigned short)v403;
                        v17 = v20;
                        v38 = 1;
                    }
                    LPSTR v410 = &v17;
                    v11 = &v17;
                    break;
                }
                case 6: {
                    int v411 = v1194;
                    int v412 = v411 | 0x40;
                    char v413 = v412 ? 0: 1;
                    char v414 = v412 < 0;
                    char v415 = __parity__((unsigned char)v412);
                    char v416 = 0;
                    char v417 = 0;
                    v1194 = v412;
                    v5 = 10;
                loc_420604:
                    int v418 = v1194;
                    int* ptr25 = (int*)(v418 & 0x8000);
                    char v419 = ptr25 ? 0: 1;
                    char v420 = (int)ptr25 < 0;
                    char v421 = __parity__((unsigned char)ptr25);
                    char v422 = 0;
                    char v423 = 0;
                    if(!v419) {
                        int* ptr26 = &param2;
                        *(int**)&v25 = &param2;
                        unsigned int v424 = (unsigned int)unk_lib_sub9(*(int*)&v25);
                        unsigned char* ptr27 = &v25;
                        ptr3 = &v24;
                        char v425 = &v14 == 704;
                        char v426 = (int)&v24 < 0;
                        char v427 = __parity__((unsigned char)&v14 - 192);
                        char v428 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                        char v429 = (unsigned int)&v25 >= 0xfffffffc;
                        char v430 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                        v10 = v424;
                        v9 = v22;
                    }
                    else {
                        int v431 = v1194;
                        int* ptr28 = (int*)(v431 & 0x20);
                        char v432 = ptr28 ? 0: 1;
                        char v433 = (int)ptr28 < 0;
                        char v434 = __parity__((unsigned char)ptr28);
                        char v435 = 0;
                        char v436 = 0;
                        if(!v432) {
                            int v437 = v1194;
                            int* ptr29 = (int*)(v437 & 0x40);
                            char v438 = ptr29 ? 0: 1;
                            char v439 = (int)ptr29 < 0;
                            char v440 = __parity__((unsigned char)ptr29);
                            char v441 = 0;
                            char v442 = 0;
                            if(!v438) {
                                int* ptr30 = &param2;
                                *(int**)&v25 = &param2;
                                int v443 = get_int_arg(*(int*)&v25);
                                unsigned char* ptr31 = &v25;
                                ptr3 = &v24;
                                char v444 = &v14 == 704;
                                char v445 = (int)&v24 < 0;
                                char v446 = __parity__((unsigned char)&v14 - 192);
                                char v447 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                                char v448 = (unsigned int)&v25 >= 0xfffffffc;
                                char v449 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                                unsigned int v450 = (unsigned int)(unsigned short)v443;
                                unsigned int v451 = v450 >= 0x80000000 ? 0xffffffff: 0;
                                v10 = v450;
                                v9 = v451;
                            }
                            else {
                                int* ptr32 = &param2;
                                *(int**)&v25 = &param2;
                                int v452 = get_int_arg(*(int*)&v25);
                                unsigned char* ptr33 = &v25;
                                ptr3 = &v24;
                                char v453 = &v14 == 704;
                                char v454 = (int)&v24 < 0;
                                char v455 = __parity__((unsigned char)&v14 - 192);
                                char v456 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                                char v457 = (unsigned int)&v25 >= 0xfffffffc;
                                char v458 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                                unsigned int v459 = (unsigned int)(unsigned short)v452;
                                unsigned int v460 = v459 >= 0x80000000 ? 0xffffffff: 0;
                                v10 = v459;
                                v9 = v460;
                            }
                        }
                        else {
                            int v461 = v1194;
                            int* ptr34 = (int*)(v461 & 0x40);
                            char v462 = ptr34 ? 0: 1;
                            char v463 = (int)ptr34 < 0;
                            char v464 = __parity__((unsigned char)ptr34);
                            char v465 = 0;
                            char v466 = 0;
                            if(!v462) {
                                int* ptr35 = &param2;
                                *(int**)&v25 = &param2;
                                unsigned int v467 = (unsigned int)get_int_arg(*(int*)&v25);
                                unsigned char* ptr36 = &v25;
                                ptr3 = &v24;
                                char v468 = &v14 == 704;
                                char v469 = (int)&v24 < 0;
                                char v470 = __parity__((unsigned char)&v14 - 192);
                                char v471 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                                char v472 = (unsigned int)&v25 >= 0xfffffffc;
                                char v473 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                                unsigned int v474 = v467 >= 0x80000000 ? 0xffffffff: 0;
                                v10 = v467;
                                v9 = v474;
                            }
                            else {
                                int* ptr37 = &param2;
                                *(int**)&v25 = &param2;
                                unsigned int v475 = (unsigned int)get_int_arg(*(int*)&v25);
                                ptr3 = &v24;
                                int v476 = 0;
                                char v477 = 1;
                                char v478 = 0;
                                char v479 = 1;
                                char v480 = 0;
                                char v481 = 0;
                                v10 = v475;
                                v9 = 0;
                            }
                        }
                    }
                    int v482 = v1194;
                    int* ptr38 = (int*)(v482 & 0x40);
                    char v483 = ptr38 ? 0: 1;
                    char v484 = (int)ptr38 < 0;
                    char v485 = __parity__((unsigned char)ptr38);
                    char v486 = 0;
                    char v487 = 0;
                    if(!v483) {
                        char v488 = v9 ? 0: 1;
                        char v489 = v9 >= 0x80000000;
                        char v490 = __parity__((unsigned char)v9);
                        char v491 = v9 < 0;
                        char v492 = 0;
                        char v493 = 0;
                        if(!v488 && v489 == 0) {
                            goto loc_4206FE;
                        }
                        else {
                            if(v489 == 0) {
                                char v494 = v10 ? 0: 1;
                                char v495 = v10 >= 0x80000000;
                                char v496 = __parity__((unsigned char)v10);
                                char v497 = v10 < 0;
                                char v498 = 0;
                                char v499 = 0;
                                if(!v497) {
                                    goto loc_4206FE;
                                }
                            }
                            unsigned int v500 = v10;
                            unsigned int v501 = v10;
                            unsigned int v502 = (unsigned int)(0 - v500);
                            char v503 = v502 ? 0: 1;
                            char v504 = v502 >= 0x80000000;
                            char v505 = __parity__((unsigned char)v502);
                            char v506 = v501 > 0;
                            char v507 = (int)(v502 & v501) < 0;
                            char v508 = ((v502 ^ v501) >>> 4) & 0x1;
                            unsigned int v509 = v9;
                            unsigned int v510 = (unsigned int)((unsigned int)v506 + v509);
                            unsigned int v511 = (unsigned int)((unsigned int)v506 + v509);
                            unsigned int v512 = (unsigned int)(0 - v510);
                            char v513 = v512 ? 0: 1;
                            char v514 = v512 >= 0x80000000;
                            char v515 = __parity__((unsigned char)v512);
                            char v516 = v511 > 0;
                            char v517 = (int)(v512 & v511) < 0;
                            char v518 = ((v512 ^ v511) >>> 4) & 0x1;
                            v8 = v502;
                            v7 = v512;
                            int v519 = v1194;
                            int v520 = v519 | 0x100;
                            char v521 = v520 ? 0: 1;
                            char v522 = v520 < 0;
                            char v523 = __parity__((unsigned char)v520);
                            char v524 = 0;
                            char v525 = 0;
                            v1194 = v520;
                        }
                    }
                    else {
                    loc_4206FE:
                        unsigned int v526 = v10;
                        v8 = v10;
                        unsigned int v527 = v9;
                        v7 = v9;
                    }
                    int v528 = v1194;
                    int* ptr39 = (int*)(v528 & 0x8000);
                    char v529 = ptr39 ? 0: 1;
                    char v530 = (int)ptr39 < 0;
                    char v531 = __parity__((unsigned char)ptr39);
                    char v532 = 0;
                    char v533 = 0;
                    if(v529) {
                        unsigned int v534 = v8;
                        unsigned int v535 = v7;
                        int v536 = 0;
                        char v537 = 1;
                        char v538 = 0;
                        char v539 = 1;
                        char v540 = 0;
                        char v541 = 0;
                        v7 = 0;
                    }
                    char v542 = v1222 ? 0: 1;
                    char v543 = v1222 < 0;
                    char v544 = __parity__((unsigned char)v1222);
                    char v545 = (unsigned int)v1222 < 0;
                    char v546 = 0;
                    char v547 = 0;
                    if(v543 != 0) {
                        v1222 = 1;
                    }
                    else {
                        int v548 = v1194;
                        int v549 = v548 & 0xfffffff7;
                        char v550 = v549 ? 0: 1;
                        char v551 = v549 < 0;
                        char v552 = __parity__((unsigned char)v549);
                        char v553 = 0;
                        char v554 = 0;
                        v1194 = v549;
                        char v555 = v1222 == 0x200;
                        char v556 = v1222 < 0x200;
                        char v557 = __parity__((unsigned char)v1222);
                        char v558 = (unsigned int)v1222 < 0x200;
                        char v559 = (((v1222 - 0x200) ^ v1222) & (v1222 ^ 0x200)) < 0;
                        char v560 = (((v1222 - 0x200) ^ (v1222 ^ 0x200)) >>> 4) & 0x1;
                        if(!v555 && v556 == v559) {
                            v1222 = 0x200;
                        }
                    }
                    unsigned int v561 = v8;
                    int v562 = (int)(v561 | v7);
                    char v563 = v562 ? 0: 1;
                    char v564 = v562 < 0;
                    char v565 = __parity__((unsigned char)v562);
                    char v566 = 0;
                    char v567 = 0;
                    if(v563) {
                        v1199 = 0;
                    }
                    LPSTR v568 = &v18;
                    v11 = &v18;
                    while(1) {
                        int v569 = v1222;
                        int v570 = v1222;
                        int v571 = v1222;
                        int v572 = v570 - 1;
                        char v573 = v572 ? 0: 1;
                        char v574 = v572 < 0;
                        char v575 = __parity__((unsigned char)v572);
                        char v576 = (((v571 ^ 0x1) ^ v572) >>> 4) & 0x1;
                        char v577 = (unsigned int)v571 < 1;
                        char v578 = (int)((unsigned int)(v572 ^ v571) & (v571 ^ 0x1)) < 0;
                        v1222 = v572;
                        char v579 = v569 ? 0: 1;
                        char v580 = v569 < 0;
                        char v581 = __parity__((unsigned char)v569);
                        char v582 = 0;
                        char v583 = 0;
                        if(!v579 && v580 == 0) {
                            goto loc_42079D;
                        }
                        else {
                            unsigned int v584 = v8;
                            v568 = (LPSTR)(v584 | v7);
                            char v585 = v568 ? 0: 1;
                            char v586 = (int)v568 < 0;
                            char v587 = __parity__((unsigned char)v568);
                            char v588 = 0;
                            char v589 = 0;
                            if(!v585) {
                                goto loc_42079D;
                            }
                            else {
                                LPSTR v590 = &v18;
                                LPSTR v591 = &v18;
                                char v592 = &v14 == 0x7dffffff;
                                char v593 = &v15 < 0;
                                char v594 = __parity__((unsigned char)&v14 - 0xff);
                                char v595 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v18 ^ (int)v11) ^ &v15) >>> 4) & 0x1);
                                char v596 = &v18 < v11;
                                char v597 = (int)(int*)((int)(int*)((int)&v18 ^ (int)v11) & (int)(int*)((int)&v18 ^ &v15)) < 0;
                                v38 = &v15;
                                LPSTR v598 = v11;
                                LPSTR v599 = v11;
                                LPSTR v600 = v598 + 1;
                                char v601 = v600 ? 0: 1;
                                char v602 = (int)v600 < 0;
                                char v603 = __parity__((unsigned char)v600);
                                char v604 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v599 ^ 0x1) ^ (int)v600) >>> 4) & 0x1);
                                char v605 = (unsigned int)v599 >= 0xffffffff;
                                char v606 = (int)(int*)((int)(int*)((int)v600 ^ (int)v599) & (int*)~(int)(int*)((int)v599 ^ 0x1)) < 0;
                                v11 = v600;
                                int v607 = v1194;
                                int* ptr40 = (int*)(v607 & 0x200);
                                v6 = ptr40 ? 0: 1;
                                char v608 = (int)ptr40 < 0;
                                char v609 = __parity__((unsigned char)ptr40);
                                char v610 = 0;
                                char v611 = 0;
                            }
                        }
                        if(!v6) {
                            unsigned int v612 = (unsigned int)v11[0];
                            char v613 = v612 == 48;
                            char v614 = (int)v612 < 48;
                            char v615 = __parity__((unsigned char)v612 - 48);
                            char v616 = v612 < 48;
                            char v617 = (((v612 - 48) ^ v612) & (v612 ^ 0x30)) < 0;
                            char v618 = (((v612 - 48) ^ (v612 ^ 0x30)) >>> 4) & 0x1;
                            if(v613) {
                                char v619 = v38 ? 0: 1;
                                char v620 = v38 < 0;
                                char v621 = __parity__((unsigned char)v38);
                                char v622 = (unsigned int)v38 < 0;
                                char v623 = 0;
                                char v624 = 0;
                                if(!v619) {
                                    break alab1;
                                }
                                else {
                                    goto loc_420845;
                                }
                            }
                            else {
                            loc_420845:
                                LPSTR v625 = v11;
                                LPSTR v626 = v11;
                                LPSTR v627 = v625 - 1;
                                char v628 = v627 ? 0: 1;
                                char v629 = (int)v627 < 0;
                                char v630 = __parity__((unsigned char)v627);
                                char v631 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v626 ^ 0x1) ^ (int)v627) >>> 4) & 0x1);
                                char v632 = (unsigned int)v626 < 1;
                                char v633 = (int)(int*)((int)(int*)((int)v627 ^ (int)v626) & (int)(int*)((int)v626 ^ 0x1)) < 0;
                                v11 = v627;
                                v11[0] = 48;
                                int v634 = v38;
                                int v635 = v38;
                                int v636 = v634 + 1;
                                char v637 = v636 ? 0: 1;
                                char v638 = v636 < 0;
                                char v639 = __parity__((unsigned char)v636);
                                char v640 = (((v635 ^ 0x1) ^ v636) >>> 4) & 0x1;
                                char v641 = (unsigned int)v635 >= 0xffffffff;
                                char v642 = ((v636 ^ v635) & ~(v635 ^ 0x1)) < 0;
                                v38 = v636;
                                break alab1;
                            loc_42079D:
                                int v643 = v5;
                                int v644 = v643 < 0 ? -1: 0;
                                *(int*)&v25 = v643 < 0 ? -1: 0;
                                unsigned int v645 = v7;
                                unsigned int v646 = v8;
                                unsigned int v647 = (unsigned int)sub_4115A0((int)v568, (int)v645, (int)v646, (int)v645, v643, *(int*)&v25);
                                unsigned int v648 = v647;
                                int v649 = (int)(v647 + 48);
                                char v650 = v649 ? 0: 1;
                                char v651 = v649 < 0;
                                char v652 = __parity__((unsigned char)v649);
                                char v653 = (((v648 ^ 0x30) ^ v649) >>> 4) & 0x1;
                                char v654 = v648 >= 0xffffffd0;
                                char v655 = ((v649 ^ v648) & ~(v648 ^ 0x30)) < 0;
                                *(int*)&v21 = v649;
                                int v656 = v5;
                                int v657 = v656 < 0 ? -1: 0;
                                *(int*)&v25 = v656 < 0 ? -1: 0;
                                unsigned int v658 = v7;
                                unsigned int v659 = v8;
                                ptr3 = &v29;
                                unsigned int v660 = (unsigned int)sub_411555((int)v658, (int)v659, (int)v659, (int)v658, v656, *(int*)&v25);
                                v8 = v660;
                                v7 = v22;
                                char v661 = *(int*)&v21 == 57;
                                char v662 = *(int*)&v21 < 57;
                                char v663 = __parity__((unsigned char)*(int*)&v21 - 57);
                                char v664 = *(unsigned int*)&v21 < 57;
                                char v665 = (((*(int*)&v21 - 57) ^ *(int*)&v21) & (*(int*)&v21 ^ 0x39)) < 0;
                                char v666 = (((*(int*)&v21 - 57) ^ (*(int*)&v21 ^ 0x39)) >>> 4) & 0x1;
                                if(!v661 && v662 == v665) {
                                    int v667 = *(int*)&v21;
                                    int v668 = *(int*)&v21;
                                    int v669 = v667 + v4;
                                    char v670 = v669 ? 0: 1;
                                    char v671 = v669 < 0;
                                    char v672 = __parity__((unsigned char)v669);
                                    char v673 = (((v668 ^ v4) ^ v669) >>> 4) & 0x1;
                                    char v674 = __carry__(v668, v4);
                                    char v675 = ((v669 ^ v668) & ~(v668 ^ v4)) < 0;
                                    *(int*)&v21 = v669;
                                }
                                v568 = v11;
                                CHAR v676 = v21;
                                v568[0] = v21;
                                LPSTR v677 = v11;
                                LPSTR v678 = v11;
                                LPSTR v679 = v677 - 1;
                                char v680 = v679 ? 0: 1;
                                char v681 = (int)v679 < 0;
                                char v682 = __parity__((unsigned char)v679);
                                char v683 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v678 ^ 0x1) ^ (int)v679) >>> 4) & 0x1);
                                char v684 = (unsigned int)v678 < 1;
                                char v685 = (int)(int*)((int)(int*)((int)v679 ^ (int)v678) & (int)(int*)((int)v678 ^ 0x1)) < 0;
                                v11 = v679;
                            }
                        }
                        else {
                            break alab1;
                        }
                    }
                loc_42039D:
                    while(1) {
                        v12 = v2;
                        int v686 = v2;
                        int v687 = v2;
                        int v688 = v686 - 1;
                        char v689 = v688 ? 0: 1;
                        char v690 = v688 < 0;
                        char v691 = __parity__((unsigned char)v688);
                        char v692 = (((v687 ^ 0x1) ^ v688) >>> 4) & 0x1;
                        char v693 = (unsigned int)v687 < 1;
                        char v694 = ((v688 ^ v687) & (v687 ^ 0x1)) < 0;
                        v2 = v688;
                        char v695 = v12 ? 0: 1;
                        char v696 = v12 < 0;
                        char v697 = __parity__((unsigned char)v12);
                        char v698 = 0;
                        char v699 = 0;
                        if(v695) {
                        loc_4203D4:
                            LPSTR v700 = v1;
                            LPSTR v701 = v1;
                            int v702 = (int)v700 - (int)v11;
                            char v703 = v702 ? 0: 1;
                            char v704 = v702 < 0;
                            char v705 = __parity__((unsigned char)v702);
                            char v706 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v701 ^ (int)v11) ^ v702) >>> 4) & 0x1);
                            char v707 = v701 < v11;
                            char v708 = (int)(int*)((int)(int*)(v702 ^ (int)v701) & (int)(int*)((int)v701 ^ (int)v11)) < 0;
                            v38 = v702;
                            break alab1;
                        }
                        else {
                            LPSTR v709 = v1;
                            v12 = (int)v709[0];
                            char v710 = v12 ? 0: 1;
                            char v711 = v12 < 0;
                            char v712 = __parity__((unsigned char)v12);
                            char v713 = 0;
                            char v714 = 0;
                            if(v710) {
                                break;
                            }
                            else {
                                LPSTR v715 = v1;
                                LPSTR v716 = v1;
                                LPSTR v717 = v715 + 1;
                                char v718 = v717 ? 0: 1;
                                char v719 = (int)v717 < 0;
                                char v720 = __parity__((unsigned char)v717);
                                char v721 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v716 ^ 0x1) ^ (int)v717) >>> 4) & 0x1);
                                char v722 = (unsigned int)v716 >= 0xffffffff;
                                char v723 = (int)(int*)((int)(int*)((int)v717 ^ (int)v716) & (int*)~(int)(int*)((int)v716 ^ 0x1)) < 0;
                                v1 = v717;
                            }
                        }
                    }
                    goto loc_4203D4;
                }
                case 7: {
                loc_420442:
                    int v724 = v1194;
                    int v725 = v724 | 0x40;
                    char v726 = v725 ? 0: 1;
                    char v727 = v725 < 0;
                    char v728 = __parity__((unsigned char)v725);
                    char v729 = 0;
                    char v730 = 0;
                    v1194 = v725;
                    LPSTR v731 = &v17;
                    v11 = &v17;
                    char v732 = v1222 ? 0: 1;
                    char v733 = v1222 < 0;
                    char v734 = __parity__((unsigned char)v1222);
                    char v735 = (unsigned int)v1222 < 0;
                    char v736 = 0;
                    char v737 = 0;
                    if(v733 != 0) {
                        v1222 = 6;
                    }
                    else {
                        char v738 = v1222 ? 0: 1;
                        char v739 = v1222 < 0;
                        char v740 = __parity__((unsigned char)v1222);
                        char v741 = (unsigned int)v1222 < 0;
                        char v742 = 0;
                        char v743 = 0;
                        if(v738) {
                            unsigned int v744 = (unsigned int)v41;
                            char v745 = v744 == 103;
                            char v746 = (int)v744 < 103;
                            char v747 = __parity__((unsigned char)v744 - 103);
                            char v748 = v744 < 103;
                            char v749 = (((v744 - 103) ^ v744) & (v744 ^ 0x67)) < 0;
                            char v750 = (((v744 - 103) ^ (v744 ^ 0x67)) >>> 4) & 0x1;
                            if(!v745) {
                                goto loc_42047E;
                            }
                            else {
                                v1222 = 1;
                            }
                        }
                        else {
                        loc_42047E:
                            char v751 = v1222 == 0x200;
                            char v752 = v1222 < 0x200;
                            char v753 = __parity__((unsigned char)v1222);
                            char v754 = (unsigned int)v1222 < 0x200;
                            char v755 = (((v1222 - 0x200) ^ v1222) & (v1222 ^ 0x200)) < 0;
                            char v756 = (((v1222 - 0x200) ^ (v1222 ^ 0x200)) >>> 4) & 0x1;
                            if(!v751 && v752 == v755) {
                                v1222 = 0x200;
                            }
                        }
                    }
                    char v757 = v1222 == 163;
                    char v758 = v1222 < 163;
                    char v759 = __parity__((unsigned char)v1222 - 163);
                    char v760 = (unsigned int)v1222 < 163;
                    char v761 = (((v1222 - 163) ^ v1222) & (v1222 ^ 0xa3)) < 0;
                    char v762 = (((v1222 - 163) ^ (v1222 ^ 0xa3)) >>> 4) & 0x1;
                    if(!v757 && v758 == v761) {
                        *(int*)&v25 = 0x300;
                        int v763 = v1222;
                        int v764 = v1222;
                        int v765 = v763 + 349;
                        char v766 = v765 ? 0: 1;
                        char v767 = v765 < 0;
                        char v768 = __parity__((unsigned char)v765);
                        char v769 = (((v764 ^ 0x15d) ^ v765) >>> 4) & 0x1;
                        char v770 = (unsigned int)v764 >= 0xfffffea3;
                        char v771 = ((v765 ^ v764) & ~(v764 ^ 0x15d)) < 0;
                        void* ptr41 = (void*)sub_4168D0(v765, 2, "output.c", *(int*)&v25);
                        int* ptr42 = &v28;
                        char v772 = &v14 == 704;
                        char v773 = (int)&v24 < 0;
                        char v774 = __parity__((unsigned char)&v14 - 192);
                        char v775 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v28 ^ 0x10) ^ (int)&v24) >>> 4) & 0x1);
                        char v776 = (unsigned int)&v28 >= 0xfffffff0;
                        char v777 = (int)(int*)((int)(int*)((int)&v28 ^ (int)&v24) & (int*)~(int)(int*)((int)&v28 ^ 0x10)) < 0;
                        ptr4 = ptr41;
                        char v778 = ptr4 ? 0: 1;
                        char v779 = (int)ptr4 < 0;
                        char v780 = __parity__((unsigned char)ptr4);
                        char v781 = (unsigned int)ptr4 < 0;
                        char v782 = 0;
                        char v783 = 0;
                        if(!v778) {
                            LPSTR v784 = (LPSTR)ptr4;
                            v11 = (LPSTR)ptr4;
                        }
                        else {
                            v1222 = 163;
                        }
                    }
                    unsigned int v785 = param2;
                    unsigned int v786 = param2;
                    unsigned int v787 = v785 + 8;
                    char v788 = v787 ? 0: 1;
                    char v789 = (int)v787 < 0;
                    char v790 = __parity__((unsigned char)v787);
                    char v791 = (((v786 ^ 0x8) ^ v787) >>> 4) & 0x1;
                    char v792 = v786 >= 0xfffffff8;
                    char v793 = (int)((v787 ^ v786) & ~(v786 ^ 0x8)) < 0;
                    param2 = v787;
                    unsigned int v794 = v787;
                    int v795 = *(int*)(v794 - 8);
                    int v796 = *(int*)(v794 - 4);
                    int v797 = v795;
                    int v798 = v796;
                    int v799 = v1219;
                    *(int*)&v25 = v1219;
                    int v800 = v1222;
                    int v801 = (int)v41;
                    LPSTR v802 = v11;
                    int* ptr43 = &v797;
                    gvar_429200{→sub_422BB0}((int)&v797, (int)v802, v801, v800, *(int*)&v25);
                    int* ptr44 = &v29;
                    char v803 = &v14 == 704;
                    char v804 = (int)&v24 < 0;
                    char v805 = __parity__((unsigned char)&v14 - 192);
                    char v806 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v29 ^ 0x14) ^ (int)&v24) >>> 4) & 0x1);
                    char v807 = (unsigned int)&v29 >= 0xffffffec;
                    char v808 = (int)(int*)((int)(int*)((int)&v29 ^ (int)&v24) & (int*)~(int)(int*)((int)&v29 ^ 0x14)) < 0;
                    int v809 = v1194;
                    int* ptr45 = (int*)(v809 & 0x80);
                    char v810 = ptr45 ? 0: 1;
                    char v811 = (int)ptr45 < 0;
                    char v812 = __parity__((unsigned char)ptr45);
                    char v813 = 0;
                    char v814 = 0;
                    if(!v810) {
                        char v815 = v1222 ? 0: 1;
                        char v816 = v1222 < 0;
                        char v817 = __parity__((unsigned char)v1222);
                        char v818 = (unsigned int)v1222 < 0;
                        char v819 = 0;
                        char v820 = 0;
                        if(v815) {
                            LPSTR v821 = v11;
                            *(LPSTR*)&v25 = v11;
                            gvar_42920C{→sub_422BB0}(*(int*)&v25);
                            unsigned char* ptr46 = &v25;
                            char v822 = &v14 == 704;
                            char v823 = (int)&v24 < 0;
                            char v824 = __parity__((unsigned char)&v14 - 192);
                            char v825 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                            char v826 = (unsigned int)&v25 >= 0xfffffffc;
                            char v827 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                        }
                    }
                    unsigned int v828 = (unsigned int)v41;
                    char v829 = v828 == 103;
                    char v830 = (int)v828 < 103;
                    char v831 = __parity__((unsigned char)v828 - 103);
                    char v832 = v828 < 103;
                    char v833 = (((v828 - 103) ^ v828) & (v828 ^ 0x67)) < 0;
                    char v834 = (((v828 - 103) ^ (v828 ^ 0x67)) >>> 4) & 0x1;
                    if(v829) {
                        int v835 = v1194;
                        int* ptr47 = (int*)(v835 & 0x80);
                        char v836 = ptr47 ? 0: 1;
                        char v837 = (int)ptr47 < 0;
                        char v838 = __parity__((unsigned char)ptr47);
                        char v839 = 0;
                        char v840 = 0;
                        if(v836) {
                            LPSTR v841 = v11;
                            *(LPSTR*)&v25 = v11;
                            gvar_429204{→sub_422BB0}(*(int*)&v25);
                            unsigned char* ptr48 = &v25;
                            char v842 = &v14 == 704;
                            char v843 = (int)&v24 < 0;
                            char v844 = __parity__((unsigned char)&v14 - 192);
                            char v845 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                            char v846 = (unsigned int)&v25 >= 0xfffffffc;
                            char v847 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                        }
                    }
                    LPSTR v848 = v11;
                    unsigned int v849 = (unsigned int)v848[0];
                    char v850 = v849 == 45;
                    char v851 = (int)v849 < 45;
                    char v852 = __parity__((unsigned char)v849 - 45);
                    char v853 = v849 < 45;
                    char v854 = (((v849 - 45) ^ v849) & (v849 ^ 0x2d)) < 0;
                    char v855 = (((v849 - 45) ^ (v849 ^ 0x2d)) >>> 4) & 0x1;
                    if(v850) {
                        int v856 = v1194;
                        int v857 = v856 | 0x100;
                        char v858 = v857 ? 0: 1;
                        char v859 = v857 < 0;
                        char v860 = __parity__((unsigned char)v857);
                        char v861 = 0;
                        char v862 = 0;
                        v1194 = v857;
                        LPSTR v863 = v11;
                        LPSTR v864 = v11;
                        LPSTR v865 = v863 + 1;
                        char v866 = v865 ? 0: 1;
                        char v867 = (int)v865 < 0;
                        char v868 = __parity__((unsigned char)v865);
                        char v869 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v864 ^ 0x1) ^ (int)v865) >>> 4) & 0x1);
                        char v870 = (unsigned int)v864 >= 0xffffffff;
                        char v871 = (int)(int*)((int)(int*)((int)v865 ^ (int)v864) & (int*)~(int)(int*)((int)v864 ^ 0x1)) < 0;
                        v11 = v865;
                    }
                    LPSTR v872 = v11;
                    *(LPSTR*)&v25 = v11;
                    int v873 = sub_411235(*(int*)&v25);
                    unsigned char* ptr49 = &v25;
                    ptr3 = &v24;
                    char v874 = &v14 == 704;
                    char v875 = (int)&v24 < 0;
                    char v876 = __parity__((unsigned char)&v14 - 192);
                    char v877 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                    char v878 = (unsigned int)&v25 >= 0xfffffffc;
                    char v879 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                    v38 = v873;
                    break;
                }
                case 8: {
                    int* ptr50 = &param2;
                    *(int**)&v25 = &param2;
                    short* ptr51 = (short*)get_int_arg(*(int*)&v25);
                    unsigned char* ptr52 = &v25;
                    ptr3 = &v24;
                    char v880 = &v14 == 704;
                    char v881 = (int)&v24 < 0;
                    char v882 = __parity__((unsigned char)&v14 - 192);
                    char v883 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                    char v884 = (unsigned int)&v25 >= 0xfffffffc;
                    char v885 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                    short* ptr53 = ptr51;
                    int v886 = v1194;
                    int* ptr54 = (int*)(v886 & 0x20);
                    char v887 = ptr54 ? 0: 1;
                    char v888 = (int)ptr54 < 0;
                    char v889 = __parity__((unsigned char)ptr54);
                    char v890 = 0;
                    char v891 = 0;
                    if(!v887) {
                        short* ptr55 = ptr53;
                        *ptr55 = v19;
                    }
                    else {
                        int* ptr56 = (int*)ptr53;
                        int v892 = *(int*)&v19;
                        *ptr56 = *(int*)&v19;
                    }
                    v1214 = 1;
                    break;
                }
                case 9: {
                    v5 = 8;
                    int v893 = v1194;
                    int* ptr57 = (int*)(v893 & 0x80);
                    char v894 = ptr57 ? 0: 1;
                    char v895 = (int)ptr57 < 0;
                    char v896 = __parity__((unsigned char)ptr57);
                    char v897 = 0;
                    char v898 = 0;
                    if(!v894) {
                        int v899 = v1194;
                        int v900 = v899 | 0x200;
                        char v901 = v900 ? 0: 1;
                        char v902 = v900 < 0;
                        char v903 = __parity__((unsigned char)v900);
                        char v904 = 0;
                        char v905 = 0;
                        v1194 = v900;
                    }
                    goto loc_420604;
                }
                case 10: {
                    v1222 = 8;
                    v4 = 7;
                    goto loc_4205BD;
                }
                case 11: {
                loc_4202DF:
                    char v906 = v1222 == -1;
                    char v907 = v1222 < -1;
                    char v908 = __parity__((unsigned char)v1222 - 0xff);
                    char v909 = (unsigned int)v1222 < 0xffffffff;
                    char v910 = (((v1222 + 1) ^ v1222) & (unsigned int)~v1222) < 0;
                    char v911 = (((v1222 + 1) ^ (unsigned int)~v1222) >>> 4) & 0x1;
                    if(v906) {
                        v3 = 0x7fffffff;
                    }
                    else {
                        int v912 = v1222;
                        v3 = v1222;
                    }
                    int v913 = v3;
                    v2 = v3;
                    int* ptr58 = &param2;
                    *(int**)&v25 = &param2;
                    LPSTR v914 = (LPSTR)get_int_arg(*(int*)&v25);
                    unsigned char* ptr59 = &v25;
                    ptr3 = &v24;
                    char v915 = &v14 == 704;
                    char v916 = (int)&v24 < 0;
                    char v917 = __parity__((unsigned char)&v14 - 192);
                    char v918 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v25 ^ 0x4) ^ (int)&v24) >>> 4) & 0x1);
                    char v919 = (unsigned int)&v25 >= 0xfffffffc;
                    char v920 = (int)(int*)((int)(int*)((int)&v25 ^ (int)&v24) & (int*)~(int)(int*)((int)&v25 ^ 0x4)) < 0;
                    v11 = v914;
                    int v921 = v1194;
                    int* ptr60 = (int*)(v921 & 0x810);
                    char v922 = ptr60 ? 0: 1;
                    char v923 = (int)ptr60 < 0;
                    char v924 = __parity__((unsigned char)ptr60);
                    char v925 = 0;
                    char v926 = 0;
                    if(!v922) {
                        char v927 = v11 ? 0: 1;
                        char v928 = (int)v11 < 0;
                        char v929 = __parity__((unsigned char)v11);
                        char v930 = (unsigned int)v11 < 0;
                        char v931 = 0;
                        char v932 = 0;
                        if(v927) {
                            LPSTR v933 = gvar_428EF4;
                            v11 = gvar_428EF4;
                        }
                        v1193 = 1;
                        LPSTR v934 = v11;
                        LPSTR v935 = v11;
                        while(1) {
                            int v936 = v2;
                            int v937 = v2;
                            int v938 = v2;
                            int v939 = v937 - 1;
                            char v940 = v939 ? 0: 1;
                            char v941 = v939 < 0;
                            char v942 = __parity__((unsigned char)v939);
                            char v943 = (((v938 ^ 0x1) ^ v939) >>> 4) & 0x1;
                            char v944 = (unsigned int)v938 < 1;
                            char v945 = ((v939 ^ v938) & (v938 ^ 0x1)) < 0;
                            v2 = v939;
                            char v946 = v936 ? 0: 1;
                            char v947 = v936 < 0;
                            char v948 = __parity__((unsigned char)v936);
                            char v949 = 0;
                            char v950 = 0;
                            if(v946) {
                            loc_420375:
                                LPSTR v951 = v935;
                                LPSTR v952 = v935;
                                int* ptr61 = (int*)((int)v951 - (int)v11);
                                char v953 = ptr61 ? 0: 1;
                                char v954 = (int)ptr61 < 0;
                                char v955 = __parity__((unsigned char)ptr61);
                                char v956 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v952 ^ (int)v11) ^ (int)ptr61) >>> 4) & 0x1);
                                char v957 = v952 < v11;
                                char v958 = (int)(int*)((int)(int*)((int)ptr61 ^ (int)v952) & (int)(int*)((int)v952 ^ (int)v11)) < 0;
                                int* ptr62 = ptr61;
                                v12 = (int)ptr61 >> 1;
                                char v959 = (int*)((int)ptr62 & 0x1);
                                char v960 = 0;
                                char v961 = v12 ? 0: 1;
                                char v962 = v12 < 0;
                                char v963 = __parity__((unsigned char)v12);
                                v38 = v12;
                                break alab1;
                            }
                            else {
                                LPSTR v964 = v935;
                                int v965 = (unsigned int)*(short*)&v964[0];
                                char v966 = v965 ? 0: 1;
                                char v967 = v965 < 0;
                                char v968 = __parity__((unsigned char)v965);
                                char v969 = 0;
                                char v970 = 0;
                                if(v966) {
                                    break;
                                }
                                else {
                                    LPSTR v971 = v935;
                                    LPSTR v972 = v935;
                                    LPSTR v973 = v971 + 2;
                                    char v974 = v973 ? 0: 1;
                                    char v975 = (int)v973 < 0;
                                    char v976 = __parity__((unsigned char)v973);
                                    char v977 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v972 ^ 0x2) ^ (int)v973) >>> 4) & 0x1);
                                    char v978 = (unsigned int)v972 >= 0xfffffffe;
                                    char v979 = (int)(int*)((int)(int*)((int)v973 ^ (int)v972) & (int*)~(int)(int*)((int)v972 ^ 0x2)) < 0;
                                    v935 = v973;
                                }
                            }
                        }
                        goto loc_420375;
                    }
                    else {
                        char v980 = v11 ? 0: 1;
                        char v981 = (int)v11 < 0;
                        char v982 = __parity__((unsigned char)v11);
                        char v983 = (unsigned int)v11 < 0;
                        char v984 = 0;
                        char v985 = 0;
                        if(v980) {
                            LPSTR v986 = gvar_428EF0;
                            v11 = gvar_428EF0;
                        }
                        LPSTR v987 = v11;
                        v1 = v11;
                        goto loc_42039D;
                    }
                }
                case 12: {
                    v5 = 10;
                    goto loc_420604;
                }
                case 13: {
                    v4 = 39;
                loc_4205BD:
                    v5 = 16;
                    int v988 = v1194;
                    int* ptr63 = (int*)(v988 & 0x80);
                    char v989 = ptr63 ? 0: 1;
                    char v990 = (int)ptr63 < 0;
                    char v991 = __parity__((unsigned char)ptr63);
                    char v992 = 0;
                    char v993 = 0;
                    if(!v989) {
                        v0 = 48;
                        unsigned int v994 = v4;
                        unsigned int v995 = v4;
                        int v996 = (int)(v994 + 81);
                        char v997 = v996 ? 0: 1;
                        char v998 = v996 < 0;
                        char v999 = __parity__((unsigned char)v996);
                        char v1000 = (((v995 ^ 0x51) ^ v996) >>> 4) & 0x1;
                        char v1001 = v995 >= 0xffffffaf;
                        char v1002 = ((v996 ^ v995) & ~(v995 ^ 0x51)) < 0;
                        char v1003 = (unsigned char)v996;
                        v1199 = 2;
                    }
                    goto loc_420604;
                }
                case 14: {
                    break;
                }
                default: {
                    throw 0;
                }
            }
        }
        break;
    }
    char v1004 = v1214 ? 0: 1;
    char v1005 = v1214 < 0;
    char v1006 = __parity__((unsigned char)v1214);
    char v1007 = (unsigned int)v1214 < 0;
    char v1008 = 0;
    char v1009 = 0;
    if(v1004) {
        int v1010 = v1194;
        int* ptr64 = (int*)(v1010 & 0x40);
        char v1011 = ptr64 ? 0: 1;
        char v1012 = (int)ptr64 < 0;
        char v1013 = __parity__((unsigned char)ptr64);
        char v1014 = 0;
        char v1015 = 0;
        if(!v1011) {
            int v1016 = v1194;
            int* ptr65 = (int*)(v1016 & 0x100);
            char v1017 = ptr65 ? 0: 1;
            char v1018 = (int)ptr65 < 0;
            char v1019 = __parity__((unsigned char)ptr65);
            char v1020 = 0;
            char v1021 = 0;
            if(!v1017) {
                v0 = 45;
                v1199 = 1;
            }
            else {
                int v1022 = v1194;
                int* ptr66 = (int*)(v1022 & 0x1);
                char v1023 = ptr66 ? 0: 1;
                char v1024 = (int)ptr66 < 0;
                char v1025 = __parity__((unsigned char)ptr66);
                char v1026 = 0;
                char v1027 = 0;
                if(!v1023) {
                    v0 = 43;
                    v1199 = 1;
                }
                else {
                    int v1028 = v1194;
                    int* ptr67 = (int*)(v1028 & 0x2);
                    char v1029 = ptr67 ? 0: 1;
                    char v1030 = (int)ptr67 < 0;
                    char v1031 = __parity__((unsigned char)ptr67);
                    char v1032 = 0;
                    char v1033 = 0;
                    if(!v1029) {
                        v0 = 32;
                        v1199 = 1;
                    }
                }
            }
        }
        int v1034 = v1197;
        unsigned int v1035 = (unsigned int)(v1034 - v38);
        unsigned int v1036 = (unsigned int)(v1034 - v38);
        int v1037 = (int)(v1035 - v1199);
        char v1038 = v1037 ? 0: 1;
        char v1039 = v1037 < 0;
        char v1040 = __parity__((unsigned char)v1037);
        char v1041 = (((v1036 ^ v1199) ^ v1037) >>> 4) & 0x1;
        char v1042 = v1036 < (unsigned int)v1199;
        char v1043 = ((v1037 ^ v1036) & (v1036 ^ v1199)) < 0;
        int v1044 = v1037;
        int v1045 = v1194;
        int* ptr68 = (int*)(v1045 & 0xc);
        char v1046 = ptr68 ? 0: 1;
        char v1047 = (int)ptr68 < 0;
        char v1048 = __parity__((unsigned char)ptr68);
        char v1049 = 0;
        char v1050 = 0;
        if(v1046) {
            unsigned short* ptr69 = &v19;
            *(unsigned short**)&v25 = &v19;
            int v1051 = param0;
            int v1052 = v1044;
            int v1053 = sub_420F90(32, v1052, v1051, *(int*)&v25);
            int* ptr70 = &v28;
            char v1054 = &v14 == 704;
            char v1055 = (int)&v24 < 0;
            char v1056 = __parity__((unsigned char)&v14 - 192);
            char v1057 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v28 ^ 0x10) ^ (int)&v24) >>> 4) & 0x1);
            char v1058 = (unsigned int)&v28 >= 0xfffffff0;
            char v1059 = (int)(int*)((int)(int*)((int)&v28 ^ (int)&v24) & (int*)~(int)(int*)((int)&v28 ^ 0x10)) < 0;
        }
        unsigned short* ptr71 = &v19;
        *(unsigned short**)&v25 = &v19;
        int v1060 = param0;
        int v1061 = v1199;
        char* ptr72 = &v0;
        int v1062 = sub_420FE0((int)&v0, v1061, v1060, *(int*)&v25);
        int* ptr73 = &v28;
        ptr3 = &v24;
        char v1063 = &v14 == 704;
        char v1064 = (int)&v24 < 0;
        char v1065 = __parity__((unsigned char)&v14 - 192);
        char v1066 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v28 ^ 0x10) ^ (int)&v24) >>> 4) & 0x1);
        char v1067 = (unsigned int)&v28 >= 0xfffffff0;
        char v1068 = (int)(int*)((int)(int*)((int)&v28 ^ (int)&v24) & (int*)~(int)(int*)((int)&v28 ^ 0x10)) < 0;
        int v1069 = v1194;
        int* ptr74 = (int*)(v1069 & 0x8);
        char v1070 = ptr74 ? 0: 1;
        char v1071 = (int)ptr74 < 0;
        char v1072 = __parity__((unsigned char)ptr74);
        char v1073 = 0;
        char v1074 = 0;
        if(!v1070) {
            int v1075 = v1194;
            int* ptr75 = (int*)(v1075 & 0x4);
            char v1076 = ptr75 ? 0: 1;
            char v1077 = (int)ptr75 < 0;
            char v1078 = __parity__((unsigned char)ptr75);
            char v1079 = 0;
            char v1080 = 0;
            if(v1076) {
                unsigned short* ptr76 = &v19;
                *(unsigned short**)&v25 = &v19;
                int v1081 = param0;
                int v1082 = v1044;
                int v1083 = sub_420F90(48, v1082, v1081, *(int*)&v25);
                int* ptr77 = &v28;
                ptr3 = &v24;
                char v1084 = &v14 == 704;
                char v1085 = (int)&v24 < 0;
                char v1086 = __parity__((unsigned char)&v14 - 192);
                char v1087 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v28 ^ 0x10) ^ (int)&v24) >>> 4) & 0x1);
                char v1088 = (unsigned int)&v28 >= 0xfffffff0;
                char v1089 = (int)(int*)((int)(int*)((int)&v28 ^ (int)&v24) & (int*)~(int)(int*)((int)&v28 ^ 0x10)) < 0;
            }
        }
        char v1090 = v1193 ? 0: 1;
        char v1091 = v1193 >= 0x80000000;
        char v1092 = __parity__((unsigned char)v1193);
        char v1093 = v1193 < 0;
        char v1094 = 0;
        char v1095 = 0;
        if(!v1090) {
            char v1096 = v38 ? 0: 1;
            char v1097 = v38 < 0;
            char v1098 = __parity__((unsigned char)v38);
            char v1099 = (unsigned int)v38 < 0;
            char v1100 = 0;
            char v1101 = 0;
            if(v1096 || v1097 != 0) {
                goto loc_4209D7;
            }
            else {
                LPSTR v1102 = v11;
                LPSTR v1103 = v11;
                int v1104 = v38;
                while(1) {
                    int v1105 = v1104;
                    int v1106 = v1104;
                    int v1107 = v1104;
                    int v1108 = v1106 - 1;
                    char v1109 = v1108 ? 0: 1;
                    char v1110 = v1108 < 0;
                    char v1111 = __parity__((unsigned char)v1108);
                    char v1112 = (((v1107 ^ 0x1) ^ v1108) >>> 4) & 0x1;
                    char v1113 = (unsigned int)v1107 < 1;
                    char v1114 = ((v1108 ^ v1107) & (v1107 ^ 0x1)) < 0;
                    v1104 = v1108;
                    char v1115 = v1105 ? 0: 1;
                    char v1116 = v1105 < 0;
                    char v1117 = __parity__((unsigned char)v1105);
                    char v1118 = 0;
                    char v1119 = 0;
                    if(v1115) {
                        break;
                    }
                    else {
                        LPSTR v1120 = v1103;
                        v1105 = (unsigned int)*(short*)&v1120[0] | ((unsigned int)(unsigned short)(v1105 >>> 16) << 16);
                        CHAR v1121 = *(short*)&v1120[0];
                        v1108 = (unsigned int)v1121 | ((unsigned int)(unsigned short)(v1108 >>> 16) << 16);
                        *(int*)&v25 = v1108;
                        LPSTR v1122 = &v23;
                        int v1123 = sub_421E40(&v23, v25);
                        int* ptr78 = &v26;
                        ptr3 = &v24;
                        char v1124 = &v14 == 704;
                        char v1125 = (int)&v24 < 0;
                        char v1126 = __parity__((unsigned char)&v14 - 192);
                        char v1127 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v26 ^ 0x8) ^ (int)&v24) >>> 4) & 0x1);
                        char v1128 = (unsigned int)&v26 >= 0xfffffff8;
                        char v1129 = (int)(int*)((int)(int*)((int)&v26 ^ (int)&v24) & (int*)~(int)(int*)((int)&v26 ^ 0x8)) < 0;
                        int v1130 = v1123;
                        LPSTR v1131 = v1103;
                        LPSTR v1132 = v1103;
                        LPSTR v1133 = v1131 + 2;
                        char v1134 = v1133 ? 0: 1;
                        char v1135 = (int)v1133 < 0;
                        char v1136 = __parity__((unsigned char)v1133);
                        char v1137 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v1132 ^ 0x2) ^ (int)v1133) >>> 4) & 0x1);
                        char v1138 = (unsigned int)v1132 >= 0xfffffffe;
                        char v1139 = (int)(int*)((int)(int*)((int)v1133 ^ (int)v1132) & (int*)~(int)(int*)((int)v1132 ^ 0x2)) < 0;
                        v1103 = v1133;
                        char v1140 = v1130 ? 0: 1;
                        char v1141 = v1130 < 0;
                        char v1142 = __parity__((unsigned char)v1130);
                        char v1143 = (unsigned int)v1130 < 0;
                        char v1144 = 0;
                        char v1145 = 0;
                        if(v1140 || v1141 != 0) {
                            break;
                        }
                        else {
                            unsigned short* ptr79 = &v19;
                            *(unsigned short**)&v25 = &v19;
                            int v1146 = param0;
                            int v1147 = v1130;
                            LPSTR v1148 = &v23;
                            int v1149 = sub_420FE0((int)&v23, v1147, v1146, *(int*)&v25);
                            int* ptr80 = &v28;
                            ptr3 = &v24;
                            char v1150 = &v14 == 704;
                            char v1151 = (int)&v24 < 0;
                            char v1152 = __parity__((unsigned char)&v14 - 192);
                            char v1153 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v28 ^ 0x10) ^ (int)&v24) >>> 4) & 0x1);
                            char v1154 = (unsigned int)&v28 >= 0xfffffff0;
                            char v1155 = (int)(int*)((int)(int*)((int)&v28 ^ (int)&v24) & (int*)~(int)(int*)((int)&v28 ^ 0x10)) < 0;
                        }
                    }
                }
            }
        }
        else {
        loc_4209D7:
            unsigned short* ptr81 = &v19;
            *(unsigned short**)&v25 = &v19;
            int v1156 = param0;
            int v1157 = v38;
            LPSTR v1158 = v11;
            int v1159 = sub_420FE0((int)v1158, v1157, v1156, *(int*)&v25);
            int* ptr82 = &v28;
            ptr3 = &v24;
            char v1160 = &v14 == 704;
            char v1161 = (int)&v24 < 0;
            char v1162 = __parity__((unsigned char)&v14 - 192);
            char v1163 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v28 ^ 0x10) ^ (int)&v24) >>> 4) & 0x1);
            char v1164 = (unsigned int)&v28 >= 0xfffffff0;
            char v1165 = (int)(int*)((int)(int*)((int)&v28 ^ (int)&v24) & (int*)~(int)(int*)((int)&v28 ^ 0x10)) < 0;
        }
        int v1166 = v1194;
        int* ptr83 = (int*)(v1166 & 0x4);
        char v1167 = ptr83 ? 0: 1;
        char v1168 = (int)ptr83 < 0;
        char v1169 = __parity__((unsigned char)ptr83);
        char v1170 = 0;
        char v1171 = 0;
        if(!v1167) {
            unsigned short* ptr84 = &v19;
            *(unsigned short**)&v25 = &v19;
            int v1172 = param0;
            int v1173 = v1044;
            int v1174 = sub_420F90(32, v1173, v1172, *(int*)&v25);
            int* ptr85 = &v28;
            ptr3 = &v24;
            char v1175 = &v14 == 704;
            char v1176 = (int)&v24 < 0;
            char v1177 = __parity__((unsigned char)&v14 - 192);
            char v1178 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v28 ^ 0x10) ^ (int)&v24) >>> 4) & 0x1);
            char v1179 = (unsigned int)&v28 >= 0xfffffff0;
            char v1180 = (int)(int*)((int)(int*)((int)&v28 ^ (int)&v24) & (int*)~(int)(int*)((int)&v28 ^ 0x10)) < 0;
        }
    }
    char v1181 = ptr4 ? 0: 1;
    char v1182 = (int)ptr4 < 0;
    char v1183 = __parity__((unsigned char)ptr4);
    char v1184 = (unsigned int)ptr4 < 0;
    char v1185 = 0;
    char v1186 = 0;
    if(!v1181) {
        *(int*)&v25 = 2;
        void* ptr86 = ptr4;
        void* ptr87 = sub_4175B0(ptr86, *(unsigned int*)&v25);
        int* ptr88 = &v26;
        ptr3 = &v24;
        char v1187 = &v14 == 704;
        char v1188 = (int)&v24 < 0;
        char v1189 = __parity__((unsigned char)&v14 - 192);
        char v1190 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v26 ^ 0x8) ^ (int)&v24) >>> 4) & 0x1);
        char v1191 = (unsigned int)&v26 >= 0xfffffff8;
        char v1192 = (int)(int*)((int)(int*)((int)&v26 ^ (int)&v24) & (int*)~(int)(int*)((int)&v26 ^ 0x8)) < 0;
        ptr4 = NULL;
    }
    goto loc_41FDB3;
}

BOOL sub_4210F0(LPCVOID param0) {
    LPCVOID lpAddress1;
    BOOL result;
    LPCVOID v0;
    char v1;
    int v2;
    int v3;
    char v4;
    LPCVOID v5;
    SIZE_T v6;
    int v7;
    sub_414C20((int)param0);
    LPCVOID v8 = &v8;
    LPCVOID lpAddress = &v8;
    SIZE_T v9 = VirtualQuery(lpAddress, &v5, 28);
    if(!v9) {
        result = 0;
    }
    else {
        LPCVOID v10 = v0;
        GetSystemInfo(&v1);
        SIZE_T dwSize = v6;
        LPCVOID v11 = (LPCVOID)((int)(int*)(~(dwSize - 1) & (int)lpAddress) - dwSize);
        LPCVOID v12 = (LPCVOID)((gvar_429638 > 1 ? dwSize * 2: dwSize * 17) + (int)v10);
        if(v11 < v12) {
            result = 0;
        }
        else if(gvar_429638 != 1) {
            lpAddress1 = v10;
            do {
                SIZE_T v13 = VirtualQuery(lpAddress1, &v5, 28);
                if(!v13) {
                    goto loc_42119A;
                }
                else {
                    lpAddress1 = (LPCVOID)((int)lpAddress1 + v2);
                }
            }
            while(!(LPCVOID)(v7 & 0x1000));
            lpAddress1 = v5;
            if((v3 & 0x100)) {
                result = 1;
            }
            else if(lpAddress1 <= v11) {
                if(lpAddress1 < v12) {
                    lpAddress1 = v12;
                }
                VirtualAlloc(lpAddress1, dwSize, 0x1000, 4);
                DWORD v14 = gvar_429638 <= 1 ? 1: 260;
                return VirtualProtect(lpAddress1, dwSize, gvar_429638 <= 1 ? 1: 260, &v4);
            }
            else {
            loc_42119A:
                result = 0;
            }
        }
        else {
            lpAddress1 = v11;
            DWORD v14 = gvar_429638 <= 1 ? 1: 260;
            result = VirtualProtect(lpAddress1, dwSize, gvar_429638 <= 1 ? 1: 260, &v4);
        }
    }
    return result;
}

int sub_421290(LCID Locale) {
    char v0;
    int result;
    unsigned int v1 = gvar_428EB0;
    char v2 = 0;
    int v3 = GetLocaleInfoA(Locale, 0x1004, &v0, 6);
    if(v3) {
        int v4 = sub_421F00((int)&v0);
    }
    sub_411087((int)v1);
    return result;
}

int sub_421300(UINT CodePage, UINT CodePage1, LPCCH lpMultiByteStr, int* param3, LPSTR lpMultiByteStr1, int cbMultiByte1) {
    LPWSTR lpWideCharStr;
    int cchWideChar;
    int v0;
    int result;
    int v1;
    unsigned int v2;
    int v3;
    int v4 = -1;
    int v5 = &gvar_427498;
    int v6 = &gvar_4111A4;
    int v7 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v7;
    unsigned int v8 = gvar_428EB0;
    int v9 = v3;
    LPWSTR v10 = &v1;
    LPSTR lpMultiByteStr2 = NULL;
    unsigned int v11 = 0;
    int cbMultiByte = *param3;
    unsigned int v12 = 0;
    if(CodePage != CodePage1) {
        BOOL v13 = GetCPInfo(CodePage, &v2);
        if(v13 && v2 == 1) {
            BOOL v14 = GetCPInfo(CodePage1, &v2);
            if(!v14 || v2 != 1) {
                goto loc_421392;
            }
            else {
                v12 = 1;
                goto loc_421398;
            }
        }
        else {
        loc_421392:
            if(v12) {
            loc_421398:
                if(cbMultiByte != -1) {
                    v0 = cbMultiByte;
                    cchWideChar = cbMultiByte;
                }
                else {
                    int v15 = sub_411235((int)lpMultiByteStr);
                    cchWideChar = v15 + 1;
                }
            }
        }
        if(!v12) {
            cchWideChar = MultiByteToWideChar(CodePage, 1, lpMultiByteStr, cbMultiByte, NULL, 0);
            if(!cchWideChar) {
                *(int*)__FS_BASE = v7;
                sub_411087((int)v8);
                return result;
            }
        }
        v4 = 0;
        sub_414C20(v0);
        LPWSTR v16 = &v1;
        v10 = &v1;
        lpWideCharStr = &v1;
        sub_411195((int)lpWideCharStr, 0, cchWideChar * 2);
        v4 = -1;
        if(!lpWideCharStr) {
            lpWideCharStr = (LPWSTR)sub_416DD0(2, cchWideChar, 2, "convrtcp.c", 126);
            if(!lpWideCharStr) {
                *(int*)__FS_BASE = v7;
                sub_411087((int)v8);
                return result;
            }
            ++v11;
        }
        int v17 = MultiByteToWideChar(CodePage, 1, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
        if(v17) {
            if(lpMultiByteStr1) {
                int v18 = WideCharToMultiByte(CodePage1, 0, lpWideCharStr, cchWideChar, lpMultiByteStr1, cbMultiByte1, NULL, NULL);
                if(v18) {
                    lpMultiByteStr2 = lpMultiByteStr1;
                }
            }
            else if(!v12) {
                cchWideChar = WideCharToMultiByte(CodePage1, 0, lpWideCharStr, cchWideChar, NULL, 0, NULL, NULL);
                if(cchWideChar) {
                    goto loc_42150A;
                }
            }
            else {
            loc_42150A:
                lpMultiByteStr2 = (LPSTR)sub_416DD0(1, cchWideChar, 2, "convrtcp.c", 161);
                if(lpMultiByteStr2) {
                    cchWideChar = WideCharToMultiByte(CodePage1, 0, lpWideCharStr, cchWideChar, lpMultiByteStr2, cchWideChar, NULL, NULL);
                    if(!cchWideChar) {
                        sub_4175B0(lpMultiByteStr2, 2);
                        lpMultiByteStr2 = NULL;
                    }
                    else if(cbMultiByte != -1) {
                        *param3 = cchWideChar;
                    }
                }
            }
        }
        goto loc_42156D;
    }
    else {
    loc_42156D:
        if(v11) {
            sub_4175B0(lpWideCharStr, 2);
        }
    }
    *(int*)__FS_BASE = v7;
    sub_411087((int)v8);
    return result;
}

DWORD sub_421650(unsigned int param0, LONG lDistanceToMove, DWORD dwMoveMethod) {
    DWORD result1;
    if(gvar_42AF94 <= param0 || !((int)*(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0x1)) {
        gvar_42962C = 9;
        gvar_429630 = 0;
        result1 = 0xffffffff;
    }
    else {
        HANDLE hFile = (HANDLE)sub_422550((int)param0);
        if(hFile == -1) {
            gvar_42962C = 9;
            result1 = 0xffffffff;
        }
        else {
            DWORD result = SetFilePointer(hFile, lDistanceToMove, NULL, dwMoveMethod);
            if(result == -1) {
                DWORD v0 = GetLastError();
                if(!v0) {
                    *(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) = *(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0xfd;
                    return result;
                }
                sub_422140((int)v0);
                result1 = 0xffffffff;
            }
            else {
                *(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) = *(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0xfd;
                result1 = result;
            }
        }
    }
    return result1;
}

int sub_421780(unsigned int param0, DWORD param1, DWORD nNumberOfBytesToWrite) {
    DWORD v0;
    char v1;
    DWORD v2;
    int result;
    unsigned int v3 = gvar_428EB0;
    if(gvar_42AF94 <= param0 || !((int)*(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0x1)) {
        gvar_42962C = 9;
        gvar_429630 = 0;
    }
    else {
        DWORD v4 = 0;
        DWORD v5 = 0;
        if(nNumberOfBytesToWrite) {
            if(((int)*(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0x20)) {
                sub_422710(param0, 0, 0, 2);
            }
            if(((int)*(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0x80)) {
                DWORD v6 = param1;
                v0 = 0;
                while((unsigned int)(v6 - param1) < nNumberOfBytesToWrite) {
                    LPCVOID i;
                    for(i = &v1; (int)(int*)((int)i - (int)&v1) < 0x400 && (unsigned int)(v6 - param1) < nNumberOfBytesToWrite; i = (LPCVOID)((int)i + 1)) {
                        char v7 = *(char*)v6;
                        ++v6;
                        if(v7 == 10) {
                            ++v5;
                            *(char*)i = 13;
                            i = (LPCVOID)((int)i + 1);
                        }
                        *(char*)i = v7;
                    }
                    BOOL v8 = WriteFile(*(HANDLE*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0)), &v1, (DWORD)((int)i - (int)&v1), &v2, NULL);
                    if(v8) {
                        v4 += v2;
                        if((int)(int*)((int)i - (int)&v1) > (int)v2) {
                            break;
                        }
                    }
                    else {
                        v0 = GetLastError();
                        break;
                    }
                }
            }
            else {
                DWORD v9 = (DWORD)WriteFile(*(HANDLE*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0)), (LPCVOID)param1, nNumberOfBytesToWrite, &v2, NULL);
                if(v9) {
                    v0 = 0;
                    v4 = v2;
                }
                else {
                    v0 = GetLastError();
                }
            }
            if(!v4) {
                if(v0) {
                    if(v0 == 5) {
                        gvar_42962C = 9;
                        gvar_429630 = 5;
                    }
                    else {
                        sub_422140((int)v0);
                    }
                }
                else if((!((int)*(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0x40) || *(char*)param1 != 26)) {
                    gvar_42962C = 28;
                    gvar_429630 = 0;
                }
            }
        }
    }
    sub_411087((int)v3);
    return result;
}

int sub_421C90() {
    return &gvar_428F00;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_421CA0(char* param0) {
    int result;
    if(!gvar_42AC80) {
        gvar_42AC80 = 0x200;
    }
    else if((int)gvar_42AC80 < 20) {
        gvar_42AC80 = 20;
    }
    char* ptr0 = sub_416DD0(gvar_42AC80, 4, 2, "_file.c", 137);
    gvar_429934 = ptr0;
    if(!gvar_429934) {
        gvar_42AC80 = 20;
        ptr0 = sub_416DD0(gvar_42AC80, 4, 2, "_file.c", 140);
        gvar_429934 = ptr0;
        if(gvar_429934) {
            goto loc_421D35;
        }
        else {
            result = 26;
        }
    }
    else {
    loc_421D35:
        char* ptr1 = NULL;
        do {
            *(char**)((int)(int*)((int)ptr1 * 4) + gvar_429934) = (char*)((int*)((int)ptr1 * 32) + 1090496);
            ++ptr1;
        }
        while((int)ptr1 >= 20);
        ptr1 = NULL;
        do {
            if(*(int*)((int)(int*)((int)(char*)((int)ptr1 & 0x1f) * 8) + *(unsigned int*)((int)(int*)((int)(int*)((int)ptr1 >> 5) * 4) + (int)&gvar_42AFE0)) == -1 || !*(int*)((int)(int*)((int)(char*)((int)ptr1 & 0x1f) * 8) + *(unsigned int*)((int)(int*)((int)(char*)((int)ptr1 >> 5) * 4) + (int)&gvar_42AFE0))) {
                *(unsigned int*)((int)(char*)((int)ptr1 * 32) + (int)&gvar_428F10) = 0xffffffff;
            }
            ++ptr1;
        }
        while((int)ptr1 >= 3);
        result = 0;
    }
    return result;
}

unsigned int sub_421E20() {
    sub_422A80();
    unsigned int result = (unsigned int)gvar_429670;
    if(result) {
        result = sub_422850();
    }
    return result;
}

int sub_421E40(LPSTR lpMultiByteStr, CHAR param1) {
    int result;
    if(!lpMultiByteStr) {
        result = 0;
    }
    else if(gvar_429904) {
        unsigned int v0 = 0;
        int v1 = WideCharToMultiByte(gvar_429914, 0, &param1, 1, lpMultiByteStr, gvar_428EC4, NULL, &v0);
        if(!v1 || v0) {
            gvar_42962C = 42;
            result = -1;
        }
        else {
            result = v1;
        }
    }
    else if((short)param1 > 0xff) {
        gvar_42962C = 42;
        result = -1;
    }
    else {
        lpMultiByteStr[0] = param1;
        result = 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_421FF0(char* param0) {
    return sub_421F00(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_422010(char* param0) {
    int v0;
    for(int i = sub_422BD0((unsigned int)*param0); i; i = sub_422BD0((unsigned int)*param0)) {
        ++param0;
    }
    char* ptr0 = (char*)*param0;
    ++param0;
    char* ptr1 = ptr0;
    if(ptr0 == 45 || ptr0 == 43) {
        ptr0 = (char*)*param0;
        ++param0;
    }
    int v1 = 0;
    int v2 = 0;
    while(1) {
        char* ptr2 = (int)ptr0 < 48 || (int)ptr0 > 57 ? (char*)0xFFFFFFFF: ptr0 - 48;
        ptr0 = (int)ptr0 < 48 || (int)ptr0 > 57 ? (char*)0xFFFFFFFF: ptr0 - 48;
        if(ptr2 == -1) {
            break;
        }
        else {
            int v3 = sub_41113B(v1, v2, 10, 0);
            v1 = v3 + (int)ptr2;
            v2 = (unsigned int)__carry__(v3, (int)ptr2) + ((int)ptr2 < 0 ? -1: 0) + v0;
            ptr0 = (char*)*param0;
            ++param0;
        }
    }
    return ptr1 == 45 ? 0 - v1: v1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_4221F0() {
    int* ptr0;
    int* result = (int*)0xFFFFFFFF;
    int* ptr1 = NULL;
    while(*(unsigned int*)((int)(int*)((int)ptr1 * 4) + (int)&gvar_42AFE0)) {
        ptr0 = *(unsigned int*)((int)(int*)((int)ptr1 * 4) + (int)&gvar_42AFE0);
        while(*(unsigned int*)((int)(int*)((int)ptr1 * 4) + (int)&gvar_42AFE0) + 0x100 > (unsigned int)ptr0) {
            if(!((int)*(char*)(ptr0 + 1) & 0x1)) {
                *ptr0 = -1;
                result = (int*)((int)(int*)((int)ptr1 * 32) + (int)(int*)((int)(int*)((int)ptr0 - *(unsigned int*)((int)(int*)((int)ptr1 * 4) + (int)&gvar_42AFE0)) >> 3));
                break;
            }
            else {
                ptr0 += 2;
            }
        }
        if(result != -1) {
            return result;
        }
        ptr1 = (int*)((char*)ptr1 + 1);
        if((int)ptr1 >= 64) {
            return result;
        }
    }
    ptr0 = (int*)sub_4168D0(0x100, 2, "osfinfo.c", 133);
    if(ptr0) {
        *(unsigned int*)((int)(int*)((int)ptr1 * 4) + (int)&gvar_42AFE0) = ptr0;
        gvar_42AF94 += 32;
        while(*(unsigned int*)((int)(int*)((int)ptr1 * 4) + (int)&gvar_42AFE0) + 0x100 > (unsigned int)ptr0) {
            *(char*)(ptr0 + 1) = 0;
            *ptr0 = -1;
            *(char*)((char*)ptr0 + 5) = 10;
            ptr0 += 2;
        }
        result = (int*)((int)ptr1 * 32);
    }
    return result;
}

int sub_422370(unsigned int param0, HANDLE hHandle) {
    int result;
    if(gvar_42AF94 > param0 && *(int*)((int)(int*)((int)(HANDLE)(param0 & 0x1f) * 8) + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0)) == -1) {
        if(gvar_428B44 == 1) {
            unsigned int v0 = param0;
            if(!param0) {
                SetStdHandle(0xfffffff6, hHandle);
            }
            else if(param0 == 1) {
                SetStdHandle(0xfffffff5, hHandle);
            }
            else if(param0 == 2) {
                SetStdHandle(0xfffffff4, hHandle);
            }
        }
        *(HANDLE*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0)) = hHandle;
        result = 0;
    }
    else {
        gvar_42962C = 9;
        gvar_429630 = 0;
        result = -1;
    }
    return result;
}

int sub_422450(unsigned int param0) {
    int result;
    if(gvar_42AF94 > param0 && (unsigned int)((int)*(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0x1) && *(int*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0)) != -1) {
        if(gvar_428B44 == 1) {
            if(!param0) {
                SetStdHandle(0xfffffff6, NULL);
            }
            else if(param0 == 1) {
                SetStdHandle(0xfffffff5, NULL);
            }
            else if(param0 == 2) {
                SetStdHandle(0xfffffff4, NULL);
            }
        }
        *(int*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0)) = -1;
        result = 0;
    }
    else {
        gvar_42962C = 9;
        gvar_429630 = 0;
        result = -1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_4225D0(HANDLE hFile, int param1) {
    int* result;
    char v0 = param1 & 0x8 ? 32: 0;
    if((param1 & 0x4000)) {
        v0 |= 128;
    }
    if((param1 & 0x80)) {
        v0 |= 16;
    }
    DWORD v1 = GetFileType(hFile);
    if(!v1) {
        DWORD v2 = GetLastError();
        sub_422140((int)v2);
        result = (int*)0xFFFFFFFF;
    }
    else {
        if(v1 == 2) {
            v0 |= 64;
        }
        else if(v1 == 3) {
            v0 |= 8;
        }
        int* ptr0 = sub_4221F0();
        if(ptr0 == -1) {
            gvar_42962C = 24;
            gvar_429630 = 0;
            result = (int*)0xFFFFFFFF;
        }
        else {
            sub_422370((int)ptr0, (int)hFile);
            *(char*)((int*)((int)(int*)((int)(int*)((int)ptr0 & 0x1f) * 8) + *(unsigned int*)((int)(int*)((int)(int*)((int)ptr0 >> 5) * 4) + (int)&gvar_42AFE0)) + 1) = v0 | 0x1;
            result = ptr0;
        }
    }
    return result;
}

LONG sub_422710(unsigned int param0, LONG lDistanceToMove, int param2, DWORD dwMoveMethod) {
    LONG result1;
    if(gvar_42AF94 <= param0 || !((int)*(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0x1)) {
        gvar_42962C = 9;
        gvar_429630 = 0;
        result1 = -1;
    }
    else {
        LONG result = lDistanceToMove;
        int v0 = param2;
        HANDLE hFile = (HANDLE)sub_422550((int)param0);
        if(hFile == -1) {
            gvar_42962C = 9;
            result1 = -1;
        }
        else {
            result = (LONG)SetFilePointer(hFile, lDistanceToMove, &v0, dwMoveMethod);
            if(result == -1) {
                DWORD v1 = GetLastError();
                if(!v1) {
                    *(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) = *(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0xfd;
                    return result;
                }
                sub_422140((int)v1);
                result1 = -1;
            }
            else {
                *(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) = *(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0xfd;
                result1 = result;
            }
        }
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_422850() {
    unsigned int result = 0;
    for(unsigned int i = 3; (int)gvar_42AC80 > (int)i; ++i) {
        if(*(int*)(i * 4 + gvar_429934)) {
            if((*(int*)(*(int*)(i * 4 + gvar_429934) + 12) & 0x83)) {
                unsigned int v0 = (unsigned int)sub_422D30(*(int*)(i * 4 + gvar_429934));
                if(v0 != -1) {
                    ++result;
                }
            }
            if((int)i >= 20) {
                sub_4175B0(*(int*)(i * 4 + gvar_429934), 2);
                *(int*)(i * 4 + gvar_429934) = 0;
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_422930(unsigned int* param0) {
    unsigned int result;
    if(!param0) {
        result = sub_422AA0(0);
    }
    else {
        int v0 = sub_4229A0(param0);
        if(v0) {
            result = 0xffffffff;
        }
        else if((param0[3] & 0x4000)) {
            unsigned int v1 = (unsigned int)sub_422E30((int)param0[4]);
            result = v1 > 0 ? 0xffffffff: 0;
        }
        else {
            result = 0;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4229A0(unsigned int* param0) {
    int result = 0;
    unsigned int* ptr0 = param0;
    if((unsigned int)(*(int*)(ptr0 + 3) & 0x3) == 2 && (*(int*)(ptr0 + 3) & 0x108)) {
        unsigned int v0 = *ptr0 - *(int*)(ptr0 + 2);
        if((int)v0 > 0) {
            unsigned int v1 = v0;
            int v2 = *(int*)(ptr0 + 2);
            int v3 = *(int*)(ptr0 + 2);
            unsigned int v4 = (unsigned int)sub_421780(*(int*)(ptr0 + 4), v2, (int)v0);
            if(v4 != v0) {
                *(int*)(ptr0 + 3) = *(int*)(ptr0 + 3) | 0x20;
                result = -1;
            }
            else if((*(int*)(ptr0 + 3) & 0x80)) {
                *(int*)(ptr0 + 3) = *(int*)(ptr0 + 3) & 0xfffffffd;
            }
        }
    }
    *ptr0 = *(int*)(ptr0 + 2);
    *(int*)(ptr0 + 1) = 0;
    return result;
}

unsigned int sub_422A80() {
    return sub_422AA0(1);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_422AA0(unsigned int param0) {
    unsigned int v0 = 0;
    unsigned int v1 = 0;
    for(unsigned int i = 0; (int)gvar_42AC80 > (int)i; ++i) {
        if(*(int*)(i * 4 + gvar_429934) && (*(int*)(*(int*)(i * 4 + gvar_429934) + 12) & 0x83)) {
            if(param0 == 1) {
                unsigned int v2 = (unsigned int)sub_422930(*(int*)(i * 4 + gvar_429934));
                if(v2 != -1) {
                    ++v0;
                }
            }
            else if(!param0 && (*(int*)(*(unsigned int*)(i * 4 + gvar_429934) + 12) & 0x2)) {
                unsigned int v3 = (unsigned int)sub_422930(*(int*)(i * 4 + gvar_429934));
                if(v3 == -1) {
                    v1 = 0xffffffff;
                }
            }
        }
    }
    return param0 != 1 ? v1: v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_422D30(unsigned int* param0) {
    int result;
    int* ptr0;
    int* ptr1;
    int v0;
    int* ptr2 = &ptr1;
    int* ptr3 = &ptr1;
    char v1 = &ptr0 == 12;
    char v2 = (int)&v0 < 0;
    char v3 = __parity__((unsigned char)&ptr0 - 12);
    char v4 = (unsigned int)&ptr1 < 8;
    char v5 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&v0) & (int)(int*)((int)&ptr1 ^ 0x8)) < 0;
    v0 = -1;
    unsigned int* ptr4 = param0;
    unsigned int* ptr5 = param0;
    unsigned int v6 = ptr5[3];
    unsigned int* ptr6 = (unsigned int*)(v6 & 0x40);
    char v7 = ptr6 ? 0: 1;
    char v8 = (int)ptr6 < 0;
    char v9 = __parity__((unsigned char)ptr6);
    char v10 = 0;
    char v11 = 0;
    if(!v7) {
        ptr5[3] = 0;
        result = -1;
    }
    else {
        char v12 = param0 ? 0: 1;
        char v13 = (int)param0 < 0;
        char v14 = __parity__((unsigned char)param0);
        char v15 = (unsigned int)param0 < 0;
        char v16 = 0;
        if(v12) {
            result = sub_415390(2, "fclose.c", 113, 0, "str != NULL");
            int* ptr7 = &v0;
            char v17 = result == 1;
            char v18 = result < 1;
            char v19 = __parity__((unsigned char)result - 1);
            char v20 = (unsigned int)result < 1;
            char v21 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
            char v22 = (((result - 1) ^ (result ^ 0x1)) >>> 4) & 0x1;
            if(v17) {
                interrupt(3);
            }
        }
        if((ptr5[3] & 0x83)) {
            v0 = sub_4229A0(ptr5);
            sub_423010((int*)ptr5);
            int v23 = sub_422EE0((int)ptr5[4]);
            if(v23 < 0) {
                v0 = -1;
            }
            else if(ptr5[7]) {
                int v24 = 2;
                sub_4175B0((int)ptr5[7], 2);
                ptr5[7] = 0;
            }
        }
        ptr5[3] = 0;
        result = v0;
    }
    return result;
}

DWORD sub_422E30(unsigned int param0) {
    DWORD result;
    DWORD v0;
    DWORD v1 = v0;
    if(gvar_42AF94 <= param0 || !(DWORD)((int)*(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0x1)) {
        gvar_42962C = 9;
        result = 0xffffffff;
    }
    else {
        HANDLE hFile = (HANDLE)sub_422550((int)param0);
        BOOL v2 = FlushFileBuffers(hFile);
        if(!v2) {
            v1 = GetLastError();
            if(v1) {
                gvar_429630 = v1;
                gvar_42962C = 9;
                v1 = 0xffffffff;
            }
        }
        else {
            v1 = 0;
        }
        result = v1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_422EE0(unsigned int param0) {
    int result;
    DWORD v0;
    DWORD v1 = v0;
    if(gvar_42AF94 <= param0 || !(DWORD)((int)*(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) & 0x1)) {
        gvar_42962C = 9;
        gvar_429630 = 0;
        result = -1;
    }
    else {
        unsigned int v2 = (unsigned int)sub_422550((int)param0);
        if(v2 != -1) {
            if(param0 == 1 || param0 == 2) {
                unsigned int v3 = (unsigned int)sub_422550(1);
                unsigned int v4 = (unsigned int)sub_422550(2);
                if(v4 == v3) {
                    goto loc_422F77;
                }
            }
            HANDLE hObject = (HANDLE)sub_422550((int)param0);
            BOOL v5 = CloseHandle(hObject);
            if(v5) {
                goto loc_422F77;
            }
            else {
                v1 = GetLastError();
            }
        }
        else {
        loc_422F77:
            v1 = 0;
        }
        sub_422450((int)param0);
        *(char*)((param0 & 0x1f) * 8 + *(DWORD*)((param0 >> 5) * 4 + (int)&gvar_42AFE0) + 4) = 0;
        if(v1) {
            sub_422140((int)v1);
            result = -1;
        }
        else {
            result = 0;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_423010(int* param0) {
    int* result;
    int* ptr0;
    int* ptr1 = &ptr0;
    char v0 = param0 ? 0: 1;
    char v1 = (int)param0 < 0;
    char v2 = __parity__((unsigned char)param0);
    char v3 = (unsigned int)param0 < 0;
    char v4 = 0;
    if(v0) {
        result = (int*)sub_415390(2, "_freebuf.c", 48, 0, "stream != NULL");
        int* ptr2 = &ptr0;
        char v5 = result == 1;
        char v6 = (int)result < 1;
        char v7 = __parity__((unsigned char)result - 1);
        char v8 = (unsigned int)result < 1;
        char v9 = (int)(int*)((int)(int*)((int)(int*)((char*)result - 1) ^ (int)result) & (int)(int*)((int)result ^ 0x1)) < 0;
        char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)result - 1) ^ (int)(int*)((int)result ^ 0x1)) >>> 4) & 0x1);
        if(v5) {
            interrupt(3);
        }
    }
    if((int*)(*(param0 + 3) & 0x83)) {
        result = param0;
        if((int*)(*(result + 3) & 0x8)) {
            int v11 = 2;
            sub_4175B0(*(param0 + 2), 2);
            *(param0 + 3) = *(param0 + 3) & 0xfffffbf7;
            *param0 = 0;
            *(param0 + 2) = 0;
            result = param0;
            *(result + 1) = 0;
        }
    }
    return result;
}

unsigned int unk_lib_sub(unsigned int param0) {
    unsigned int result = gvar_42AF6C;
    gvar_42AF6C = param0;
    return result;
}

unsigned int unk_lib_sub2(unsigned int param0) {
    unsigned int result = gvar_428D54;
    gvar_428D54 = param0;
    return result;
}

unsigned int unk_lib_sub3(unsigned int param0) {
    unsigned int result = gvar_428EC0;
    gvar_428EC0 = param0;
    return result;
}

unsigned int unk_lib_sub4(unsigned int param0) {
    unsigned int result = gvar_42AF60;
    gvar_42AF60 = param0;
    return result;
}

int* unk_lib_sub5(int* param0, int* param1, int* param2) {
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
            loc_41A28C:
                switch(ptr3) {
                    case 0: {
                    loc_41A373:
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
                    loc_41A364:
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 1) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 1);
                        ptr0 = (int*)((int)ptr3 * 4);
                        ptr2 = (int*)((int)ptr0 + (int)ptr2);
                        ptr4 = (int*)((int)ptr0 + (int)ptr4);
                        break;
                    }
                    case 2: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_41A364;
                    }
                    case 3: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_41A364;
                    }
                    case 4: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_41A364;
                    }
                    case 5: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_41A364;
                    }
                    case 6: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_41A364;
                    }
                    case 7: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 7);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_41A364;
                    }
                    default: {
                        throw 0;
                    }
                }
                goto loc_41A373;
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
                    loc_41A2CC:
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
                        loc_41A2F0:
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
                                goto loc_41A364;
                            }
                        }
                    }
                    goto loc_41A28C;
                }
                case 2: {
                    goto loc_41A2CC;
                }
                case 3: {
                    goto loc_41A2F0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_41A284;
        }
        else {
        loc_41A284:
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
            goto loc_41A28C;
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
            jump gvar_41A4B0[(int*)((char*)ptr3 + 6)];
        }
        else {
            ptr0 = ptr10;
        loc_41A418:
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
                    loc_41A453:
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
                        loc_41A47B:
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
                    jump gvar_41A4B0[(int*)((char*)ptr3 + 6)];
                }
                case 2: {
                    goto loc_41A453;
                }
                case 3: {
                    goto loc_41A47B;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_41A418;
        }
    }
}

unsigned int unk_lib_sub6(unsigned int param0) {
    unsigned int result = gvar_4298F8;
    gvar_4298F8 = param0;
    return result;
}

unsigned int unk_lib_sub8(unsigned int param0) {
    unsigned int result = gvar_42992C;
    gvar_42992C = param0;
    return result;
}

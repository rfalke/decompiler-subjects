
int start(WPARAM param0, LPARAM param1) {
    UINT v0;
    int v1;
    int v2;
    HGLOBAL v3 = GlobalAlloc(0, 1000000);
    char v4 = v3 ? 0: 1;
    char v5 = (int)v3 < 0;
    char v6 = __parity__((unsigned char)v3);
    char v7 = 0;
    char v8 = 0;
    if(!v4) {
        gvar_40210C = v3;
        gvar_402104 = v3;
        HGLOBAL v9 = v3;
        int* ptr0 = (int*)((int)v3 + 2000);
        char v10 = ptr0 ? 0: 1;
        char v11 = (int)ptr0 < 0;
        char v12 = __parity__((unsigned char)ptr0);
        char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v9 ^ 0x7d0) ^ (int)ptr0) >>> 4) & 0x1);
        char v14 = (unsigned int)v9 >= 0xfffff830;
        char v15 = (int)(int*)((int)(int*)((int)ptr0 ^ (int)v9) & (int*)~(int)(int*)((int)v9 ^ 0x7d0)) < 0;
        gvar_402100 = ptr0;
        int* ptr1 = ptr0;
        int* ptr2 = ptr0 + 100000;
        char v16 = ptr2 ? 0: 1;
        char v17 = (int)ptr2 < 0;
        char v18 = __parity__((unsigned char)ptr2);
        char v19 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x61a80) ^ (int)ptr2) >>> 4) & 0x1);
        char v20 = (unsigned int)ptr1 >= 4294567296;
        char v21 = (int)(int*)((int)(int*)((int)ptr2 ^ (int)ptr1) & (int*)~(int)(int*)((int)ptr1 ^ 0x61a80)) < 0;
        gvar_40211C = ptr2;
        int* ptr3 = ptr2;
        int* ptr4 = ptr2 + 50000;
        char v22 = ptr4 ? 0: 1;
        char v23 = (int)ptr4 < 0;
        char v24 = __parity__((unsigned char)ptr4);
        char v25 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x30d40) ^ (int)ptr4) >>> 4) & 0x1);
        char v26 = (unsigned int)ptr3 >= 0xfffcf2c0;
        char v27 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x30d40)) < 0;
        gvar_402118 = ptr4;
        HMODULE v28 = GetModuleHandleW(NULL);
        gvar_4020B4 = v28;
        HICON v29 = LoadIconW(NULL, (LPCWSTR)0x7F00);
        gvar_4020B8 = v29;
        HCURSOR v30 = LoadCursorW(NULL, (LPCWSTR)0x7F00);
        gvar_4020BC = v30;
        ATOM v31 = RegisterClassW((WNDCLASSW*)0x4020A4);
        v4 = v31 ? 0: 1;
        v5 = v31 >= 0x80000000;
        v6 = __parity__((unsigned char)v31);
        v7 = 0;
        v8 = 0;
        if(!v4) {
            HWND hWnd = CreateWindowExW(0, "DEMODEMO", "<< http://www.devreci.com >>", 0x10cf0000, 0x8000, 0x8000, 540, 400, NULL, NULL, gvar_4020B4, NULL);
            v4 = hWnd ? 0: 1;
            v5 = (int)hWnd < 0;
            v6 = __parity__((unsigned char)hWnd);
            v7 = 0;
            v8 = 0;
            if(!v4) {
                gvar_4020CC = hWnd;
                HDC v32 = GetDC(hWnd);
                gvar_4020D0 = v32;
                sub_401000();
                sub_401017();
                int v33 = sub_401088(v1, v2);
                int v34 = /*BAD_CALL!*/ SetStretchBltMode(gvar_4020D0, 4);
            }
        }
    }
    MessageBoxW(NULL, "Startup failed.", NULL, 16);
    ReleaseDC(gvar_4020CC, gvar_4020D0);
    GlobalFree(gvar_40210C);
    /*BAD_CALL!*/ sub_401359(v1, v2, gvar_4020DC, v0, param0, param1);
}

void sub_401000() {
    char* ptr0 = gvar_402104;
    char counter = 0;
    do {
        *ptr0 = counter;
        *(ptr0 + 1) = counter;
        *(ptr0 + 2) = counter;
        ptr0 += 4;
        ++counter;
    }
    while(counter);
}

void sub_401017() {
    unsigned char* ptr0 = gvar_402118;
    while(1) {
        *ptr0 = gvar_402136;
    }
}

int sub_4012FB() {
    int v0;
    int v1;
    TranslateMessage((MSG*)0x4020D4);
    DispatchMessageW((MSG*)0x4020D4);
    sub_401088(v0, v1);
    ++gvar_402108;
    return sub_4012DF();
}

// Stale decompilation - Refresh this view to re-decompile this code
LRESULT sub_401359(int param0, int param1, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    LRESULT result;
    int v0;
    int v1 = v0;
    if(Msg != 2) {
        if(Msg == 5 && gvar_402108 >= 10) {
            sub_401088(param0, param1);
        }
        result = DefWindowProcW(hWnd, Msg, wParam, lParam);
    }
    else {
        PostQuitMessage(0);
        result = 0;
    }
    return result;
}

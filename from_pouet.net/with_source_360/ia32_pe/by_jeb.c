
int start(WPARAM param0, LPARAM param1) {
    UINT v0;
    int v1;
    int v2;
    HGLOBAL v3 = GlobalAlloc(0, 1000000);
    char v4 = v3 ? 0: 1;
    if(!v4) {
        gvar_40210C = v3;
        gvar_402104 = v3;
        HGLOBAL v5 = v3;
        int* ptr0 = (int*)((int)v3 + 2000);
        char v6 = ptr0 ? 0: 1;
        char v7 = (int)ptr0 < 0;
        char v8 = __parity__((unsigned char)ptr0);
        char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v5 ^ 0x7d0) ^ (int)ptr0) >>> 4) & 1);
        char v10 = (unsigned int)v5 >= 0xfffff830;
        char v11 = (int)(int*)((int)(int*)((int)ptr0 ^ (int)v5) & (int*)~(int)(int*)((int)v5 ^ 0x7d0)) < 0;
        gvar_402100 = ptr0;
        int* ptr1 = ptr0;
        int* ptr2 = ptr0 + 100000;
        char v12 = ptr2 ? 0: 1;
        char v13 = (int)ptr2 < 0;
        char v14 = __parity__((unsigned char)ptr2);
        char v15 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x61a80) ^ (int)ptr2) >>> 4) & 1);
        char v16 = (unsigned int)ptr1 >= 4294567296;
        char v17 = (int)(int*)((int)(int*)((int)ptr2 ^ (int)ptr1) & (int*)~(int)(int*)((int)ptr1 ^ 0x61a80)) < 0;
        gvar_40211C = ptr2;
        int* ptr3 = ptr2;
        int* ptr4 = ptr2 + 50000;
        char v18 = ptr4 ? 0: 1;
        char v19 = (int)ptr4 < 0;
        char v20 = __parity__((unsigned char)ptr4);
        char v21 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x30d40) ^ (int)ptr4) >>> 4) & 1);
        char v22 = (unsigned int)ptr3 >= 0xfffcf2c0;
        char v23 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x30d40)) < 0;
        gvar_402120 = ptr4;
        HMODULE v24 = GetModuleHandleW(NULL);
        gvar_4020B4 = v24;
        HICON v25 = LoadIconW(NULL, (LPCWSTR)0x7F00);
        gvar_4020B8 = v25;
        HCURSOR v26 = LoadCursorW(NULL, (LPCWSTR)0x7F00);
        gvar_4020BC = v26;
        ATOM v27 = RegisterClassW((WNDCLASSW*)0x4020A4);
        v4 = v27 ? 0: 1;
        v33 = v27 >= 0x80000000;
        v32 = __parity__((unsigned char)v27);
        v34 = 0;
        v40 = 0;
        if(!v4) {
            HWND hWnd = CreateWindowExW(0, "DEMODEMO", "<< http://www.devreci.com >>", 0x10cf0000, 0x8000, 0x8000, 540, 400, NULL, NULL, gvar_4020B4, NULL);
            v4 = hWnd ? 0: 1;
            v33 = (int)hWnd < 0;
            v32 = __parity__((unsigned char)hWnd);
            v34 = 0;
            v40 = 0;
            if(!v4) {
                gvar_4020CC = hWnd;
                HDC v28 = GetDC(hWnd);
                gvar_4020D0 = v28;
                char v29 = sub_401000();
                int v30 = sub_401020(v1, v2);
                int v31 = /*BAD_CALL!*/ SetStretchBltMode(gvar_4020D0, 4);
            }
        }
    }
    MessageBoxW(NULL, "Startup failed.", NULL, 16);
    ReleaseDC(gvar_4020CC, gvar_4020D0);
    GlobalFree(gvar_40210C);
    /*BAD_CALL!*/ sub_401324(v1, v2, gvar_4020DC, v0, param0, param1);
}

char sub_401000() {
    char result;
    char* ptr0 = gvar_402104;
    unsigned char counter = 0;
    do {
        result = counter * 2;
        if(counter >= 128) {
            *ptr0 = result;
        }
        *(ptr0 + 1) = result;
        *(ptr0 + 2) = result;
        ptr0 += 4;
        ++counter;
    }
    while(counter);
    return result;
}

int sub_4012C6() {
    int v0;
    int v1;
    TranslateMessage((MSG*)0x4020D4);
    DispatchMessageW((MSG*)0x4020D4);
    sub_401020(v0, v1);
    ++gvar_402108;
    return sub_4012AA();
}

// Stale decompilation - Refresh this view to re-decompile this code
LRESULT sub_401324(int param0, int param1, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    LRESULT result;
    int v0;
    int v1 = v0;
    if(Msg != 2) {
        if(Msg == 5 && gvar_402108 >= 10) {
            sub_401020(param0, param1);
        }
        result = DefWindowProcW(hWnd, Msg, wParam, lParam);
    }
    else {
        PostQuitMessage(0);
        result = 0;
    }
    return result;
}

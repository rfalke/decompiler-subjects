
int start(WPARAM param0, LPARAM param1) {
    UINT v0;
    int v1;
    int v2;
    HGLOBAL v3 = GlobalAlloc(0, 500000);
    char v4 = v3 ? 0: 1;
    if(!v4) {
        gvar_4020E2 = v3;
        gvar_4020DA = v3;
        HGLOBAL v5 = v3;
        int* ptr0 = (int*)((int)v3 + 2000);
        char v6 = ptr0 ? 0: 1;
        char v7 = (int)ptr0 < 0;
        char v8 = __parity__((unsigned char)ptr0);
        char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)v5 ^ 0x7d0) ^ (int)ptr0) >>> 4) & 0x1);
        char v10 = (unsigned int)v5 >= 0xfffff830;
        char v11 = (int)(int*)((int)(int*)((int)ptr0 ^ (int)v5) & (int*)~(int)(int*)((int)v5 ^ 0x7d0)) < 0;
        gvar_4020D6 = ptr0;
        HMODULE v12 = GetModuleHandleW(NULL);
        gvar_40208A = v12;
        HICON v13 = LoadIconW(NULL, (LPCWSTR)0x7F00);
        gvar_40208E = v13;
        HCURSOR v14 = LoadCursorW(NULL, (LPCWSTR)0x7F00);
        gvar_402092 = v14;
        ATOM v15 = RegisterClassW((WNDCLASSW*)0x40207A);
        v4 = v15 ? 0: 1;
        v21 = v15 >= 0x80000000;
        v19 = __parity__((unsigned char)v15);
        v24 = 0;
        v27 = 0;
        if(!v4) {
            HWND hWnd = CreateWindowExW(0, "DEMODEMO", " Takoz!", 0x10cf0000, 0x8000, 0x8000, 640, 500, NULL, NULL, gvar_40208A, NULL);
            v4 = hWnd ? 0: 1;
            v21 = (int)hWnd < 0;
            v19 = __parity__((unsigned char)hWnd);
            v24 = 0;
            v27 = 0;
            if(!v4) {
                gvar_4020A2 = hWnd;
                HDC v16 = GetDC(hWnd);
                gvar_4020A6 = v16;
                char v17 = sub_401000();
                int v18 = /*BAD_CALL!*/ sub_40101B(v1, v2);
            }
        }
    }
    MessageBoxW(NULL, "Startup failed.", NULL, 16);
    ReleaseDC(gvar_4020A2, gvar_4020A6);
    GlobalFree(gvar_4020E2);
    /*BAD_CALL!*/ sub_4012AF(v1, v2, gvar_4020B2, v0, param0, param1);
}

char sub_401000() {
    char result;
    char* ptr0 = gvar_4020DA;
    char counter = 0;
    do {
        result = counter >>> 1;
        *ptr0 = counter >>> 1;
        *(ptr0 + 1) = counter;
        *(ptr0 + 2) = counter;
        ptr0 += 4;
        ++counter;
    }
    while(counter);
    return result;
}

int sub_401251() {
    int v0;
    int v1;
    TranslateMessage((MSG*)0x4020AA);
    DispatchMessageW((MSG*)0x4020AA);
    sub_40101B(v0, v1);
    ++gvar_4020DE;
    return sub_401235();
}

// Stale decompilation - Refresh this view to re-decompile this code
LRESULT sub_4012AF(int param0, int param1, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    LRESULT result;
    int v0;
    int v1 = v0;
    if(Msg != 2) {
        if(Msg == 5 && gvar_4020DE >= 10) {
            sub_40101B(param0, param1);
        }
        result = DefWindowProcW(hWnd, Msg, wParam, lParam);
    }
    else {
        PostQuitMessage(0);
        result = 0;
    }
    return result;
}

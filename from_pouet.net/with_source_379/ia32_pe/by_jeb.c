
int sub_40128F() {
    int v0;
    int v1;
    HMODULE v2 = GetModuleHandleW(NULL);
    gvar_4020B4 = v2;
    HICON v3 = LoadIconW(NULL, (LPCWSTR)0x7F00);
    gvar_4020B8 = v3;
    HCURSOR v4 = LoadCursorW(NULL, (LPCWSTR)0x7F00);
    gvar_4020BC = v4;
    ATOM v5 = RegisterClassW((WNDCLASSW*)0x4020A4);
    char v6 = v5 ? 0: 1;
    char v7 = v5 >= 0x80000000;
    char v8 = __parity__((unsigned char)v5);
    char v9 = 0;
    char v10 = 0;
    if(!v6) {
        HWND hWnd = CreateWindowExW(0, "DEMODEMO", "<< http://www.devreci.com >>", 0x10cf0000, 0x8000, 0x8000, 540, 400, NULL, NULL, gvar_4020B4, NULL);
        v6 = hWnd ? 0: 1;
        v7 = (int)hWnd < 0;
        v8 = __parity__((unsigned char)hWnd);
        v9 = 0;
        v10 = 0;
        if(!v6) {
            gvar_4020CC = hWnd;
            HDC v11 = GetDC(hWnd);
            gvar_4020D0 = v11;
            int v12 = sub_401000();
            int v13 = sub_401020(v0, v1);
            int v14 = sub_401052(v0, v1);
            int v15 = SetStretchBltMode(gvar_4020D0, 4);
            BOOL v16 = PeekMessageW((LPMSG)0x4020D4, NULL, 0, 0, 1);
            v6 = gvar_4020D8 == 18;
            v7 = (int)gvar_4020D8 < 18;
            v8 = __parity__((unsigned char)gvar_4020D8 - 18);
            v10 = gvar_4020D8 < 18;
            v9 = (((gvar_4020D8 - 18) ^ gvar_4020D8) & (gvar_4020D8 ^ 0x12)) < 0;
            char v17 = (((gvar_4020D8 - 18) ^ (gvar_4020D8 ^ 0x12)) >>> 4) & 1;
            jump v6 ? &sub_40138C: &sub_401358;
        }
    }
    int v18 = 16;
    int v19 = 0;
    int v20 = "Startup failed.";
    int v21 = 0;
    /*BAD_CALL!*/ sub_40138C();
}


int start() {
    int v0;
    int v1;
    HGLOBAL v2 = GlobalAlloc(0, 500000);
    if(v2) {
        gvar_4020E2 = v2;
        gvar_4020DA = v2;
        gvar_4020D6 = (int*)((int)v2 + 2000);
        HMODULE v3 = GetModuleHandleW(NULL);
        gvar_40208A = v3;
        HICON v4 = LoadIconW(NULL, (LPCWSTR)0x7F00);
        gvar_40208E = v4;
        HCURSOR v5 = LoadCursorW(NULL, (LPCWSTR)0x7F00);
        gvar_402092 = v5;
        ATOM v6 = RegisterClassW((WNDCLASSW*)0x40207A);
        if(!v6) {
            goto loc_40127F;
        }
        else {
            HWND hWnd = CreateWindowExW(0, "DEMODEMO", " Takoz!", 0x10cf0000, 0x8000, 0x8000, 640, 500, NULL, NULL, gvar_40208A, NULL);
            if(!hWnd) {
                goto loc_40127F;
            }
            else {
                gvar_4020A2 = hWnd;
                HDC v7 = GetDC(hWnd);
                gvar_4020A6 = v7;
                sub_401000();
                sub_40101B(v0, v1);
                while(1) {
                    PeekMessageW((LPMSG)0x4020AA, NULL, 0, 0, 1);
                    if(gvar_4020AE == 18) {
                        break;
                    }
                    else {
                        TranslateMessage((MSG*)0x4020AA);
                        DispatchMessageW((MSG*)0x4020AA);
                        sub_40101B(v0, v1);
                        ++gvar_4020DE;
                    }
                }
            }
        }
    }
    else {
    loc_40127F:
        MessageBoxW(NULL, "Startup failed.", NULL, 16);
    }
    ReleaseDC(gvar_4020A2, gvar_4020A6);
    GlobalFree(gvar_4020E2);
    /*NO_RETURN*/ ExitProcess(gvar_4020B2);
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

int sub_40101B(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    short v3;
    int v4;
    short v5;
    short v6;
    int v7;
    int v8;
    short v9;
    char v10;
    short v11;
    int v12;
    int v13 = (unsigned int)v11 | ((unsigned int)v5 << 16);
    int v14 = param0;
    int v15 = param1;
    int v16 = v12;
    int* ptr0 = &v0;
    int v17 = (unsigned int)v9 | ((unsigned int)v6 << 16);
    wait();
    fninit();
    int* ptr1 = (int*)(gvar_4020D6 + 0x3e300);
    *(short*)&gvar_4020EE = *(short*)&gvar_4020EE + 2;
    fsincos();
    param1 = (unsigned int)65336 | ((unsigned int)(unsigned short)(param1 >>> 16) << 16);
    (v7 >>> 16) & 0xFFFF = 320;
    do {
        v11 = 65216;
        v7 & 0xFFFF = (unsigned short)param1;
        do {
            (v1 >>> 16) & 0xFFFF = v11;
            *(int*)((char*)&v8 + 2) = &loc_401058;
            /*BAD_CALL!*/ sub_40114A();
            *(int*)((char*)&v8 + 2) = &loc_401064;
            /*BAD_CALL!*/ sub_40114A();
            *(int*)((char*)&v8 + 2) = &loc_40106B;
            /*BAD_CALL!*/ sub_40114A();
            fabs();
            fchs();
            fistp();
            fistp();
            fistp();
            v1 & 0xFFFF = (unsigned short)ptr1;
            v9 = *(short*)0x4020ED;
            int v18 = v18 & 0xffff0000;
            ptr1 = (unsigned int)*(short*)0x4020ED | ((unsigned int)(unsigned short)(int*)((int)ptr1 >>> 16) << 16);
            gvar_4020F4 += 0xFFFF;
            do {
                v18 = (unsigned int)((unsigned short)v18 + gvar_4020F4) | ((unsigned int)(unsigned short)(v18 >>> 16) << 16);
                v9 += gvar_4020F6;
                ptr1 = (unsigned int)((unsigned short)ptr1 + gvar_4020F8) | ((unsigned int)(unsigned short)(int*)((int)ptr1 >>> 16) << 16);
                sub_40115F(v18, param1);
                (v8 >>> 16) & 0xFFFF = v3;
                *(int*)((char*)&v2 + 2) = &loc_4010B4;
                int v19 = /*BAD_CALL!*/ sub_40115F(param0, v4);
                v10 = (unsigned char)v19;
                param1 = (unsigned int)(unsigned char)v4 | ((unsigned int)((unsigned char)((unsigned short)(v8 >>> 16) >>> 8) + (unsigned char)(v4 >>> 8)) << 8) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
                if(!(unsigned char)(param1 >>> 8)) {
                    break;
                }
                else {
                    v10 += 0xff;
                }
            }
            while(v10);
            ptr1 = (unsigned int)(unsigned short)v1 | ((unsigned int)(unsigned short)(int*)((int)ptr1 >>> 16) << 16);
            *ptr1 = *(int*)((unsigned int)v10 * 8 + gvar_4020DA);
            ++ptr1;
            v11 = (unsigned short)(v1 >>> 16) + 2;
        }
        while(v11 != 320);
        ptr1 -= 640;
        param1 = (unsigned int)((unsigned short)v7 + 2) | ((unsigned int)(unsigned short)(param1 >>> 16) << 16);
    }
    while((unsigned short)param1 != 200);
    GetClientRect(gvar_4020A2, (LPRECT)0x4020C6);
    return StretchDIBits(gvar_4020A6, 0, 0, gvar_4020CE, gvar_4020D2, 0, 0, 320, 200, gvar_4020D6, (BITMAPINFO*)&gvar_402042, 0, 0xcc0020);
}

void sub_40114A() {
}

int sub_40115F(int param0, int param1) {
    int result;
    return result;
}

LRESULT sub_4012AF(int param0, int param1, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    LRESULT result;
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

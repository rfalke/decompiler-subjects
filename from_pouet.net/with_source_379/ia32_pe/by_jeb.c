
int start() {
    int v0;
    int v1;
    HGLOBAL v2 = GlobalAlloc(0, 1000000);
    if(v2) {
        gvar_40210C = v2;
        gvar_402104 = v2;
        gvar_402100 = (int*)((int)v2 + 2000);
        gvar_40211C = (int*)((int)v2 + 402000);
        gvar_402120 = (int*)((int)v2 + 602000);
        gvar_402124 = (int*)((int)v2 + 702000);
        int counter = 499999;
        do {
            *gvar_40210C = (unsigned short)(int*)((int)(int*)((int)v2 + 702000) & 0xffff0000);
            --counter;
        }
        while(counter);
        HMODULE v3 = GetModuleHandleW(NULL);
        gvar_4020B4 = v3;
        HICON v4 = LoadIconW(NULL, (LPCWSTR)0x7F00);
        gvar_4020B8 = v4;
        HCURSOR v5 = LoadCursorW(NULL, (LPCWSTR)0x7F00);
        gvar_4020BC = v5;
        ATOM v6 = RegisterClassW((WNDCLASSW*)0x4020A4);
        if(!v6) {
            goto loc_401386;
        }
        else {
            HWND hWnd = CreateWindowExW(0, "DEMODEMO", "<< http://www.devreci.com >>", 0x10cf0000, 0x8000, 0x8000, 540, 400, NULL, NULL, gvar_4020B4, NULL);
            if(!hWnd) {
                goto loc_401386;
            }
            else {
                gvar_4020CC = hWnd;
                HDC v7 = GetDC(hWnd);
                gvar_4020D0 = v7;
                sub_401000();
                sub_401020(v0, v1);
                sub_401052(v0, v1);
                SetStretchBltMode(gvar_4020D0, 4);
                while(1) {
                    PeekMessageW((LPMSG)0x4020D4, NULL, 0, 0, 1);
                    if(gvar_4020D8 == 18) {
                        break;
                    }
                    else {
                        TranslateMessage((MSG*)0x4020D4);
                        DispatchMessageW((MSG*)0x4020D4);
                        sub_401052(v0, v1);
                        ++gvar_402108;
                    }
                }
            }
        }
    }
    else {
    loc_401386:
        MessageBoxW(NULL, "Startup failed.", NULL, 16);
    }
    ReleaseDC(gvar_4020CC, gvar_4020D0);
    GlobalFree(gvar_40210C);
    /*NO_RETURN*/ ExitProcess(gvar_4020DC);
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

int sub_401020(int param0, int param1) {
    int v0;
    int result;
    int* ptr0 = &v0;
    char* ptr1 = gvar_402124;
    short v1 = 0x200;
    do {
        *ptr1 = *(char*)((unsigned int)((v1 >>> 8) * 64 + v1) + 4202822);
        ++ptr1;
        ++v1;
    }
    while(v1 != 0xb00);
    return result;
}

int sub_401052(int param0, int param1) {
    char v0;
    __SyntheticTypeUnknown v1;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    ++gvar_402140;
    int v5 = 0;
    do {
        short v6 = 1026;
        v2 = (unsigned int)(unsigned char)v5 | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
        v4 = (unsigned int)0xf200 | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
        do {
            gvar_402144 = (unsigned short)((unsigned int)(short)((unsigned char)v2 - 128) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16));
            v2 = (unsigned int)((short)(unsigned char)((unsigned int)(short)((unsigned char)v2 - 128) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16)) * (short)(unsigned char)((unsigned int)(short)((unsigned char)v2 - 128) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16))) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)(v2 >>> 16) << 16);
            v4 = (unsigned int)((unsigned short)v4 - (unsigned short)v2) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
            v0 = v0 - 1;
            v1[v0] = (double)gvar_402144;
            v2 = (unsigned int)(unsigned char)(v5 >>> 8) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
            ++v6;
        }
        while(__parity__((unsigned char)v6));
        fpatan();
        v1[v0] *= (double)gvar_40213E;
        fistp();
        v2 = (unsigned int)gvar_402144 | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
        gvar_402144 = (unsigned short)v4;
        v2 = (unsigned int)((unsigned short)v2 + *(short*)((char*)&gvar_40213E + 1)) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
        v3 = (unsigned int)0 | ((unsigned int)(unsigned char)(v2 >>> 8) << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
        v2 = (unsigned int)(unsigned char)(v4 >>> 8) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
        v2 = (unsigned int)((unsigned short)v2 & 0x707) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
        v2 = (unsigned int)((unsigned char)(v2 >>> 8) + (unsigned char)v2) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
        char v7 = (unsigned char)v2;
        v2 = (unsigned int)(unsigned char)(v4 >>> 8) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
        int v8 = (unsigned int)(unsigned char)v4 | ((unsigned int)((unsigned char)v2 + v7) << 8) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
        if((unsigned char)v2 <= 236 && (unsigned char)v2 >= 235) {
            v3 = (unsigned int)((unsigned char)(v3 >>> 8) >>> 1) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
            v8 = (unsigned int)(unsigned char)((unsigned short)0 | ((unsigned short)(gvar_402144 & 0x7ff) << 5)) | ((unsigned int)((unsigned char)(gvar_402144 >>> 3) + 96) << 8) | ((unsigned int)(unsigned short)(v8 >>> 16) << 16);
        }
        if((unsigned char)v2 <= 230) {
            v3 = (unsigned int)(unsigned char)v3 | ((unsigned int)((unsigned char)(v3 >>> 8) & 0x1f) << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
            if((unsigned char)(v3 >>> 8) <= 3) {
                if((unsigned char)v2 >= 229) {
                    v8 = (unsigned int)(unsigned char)v8 | ((unsigned int)(__ror__((unsigned char)v2, 3) + 30) << 8) | ((unsigned int)(unsigned short)(v8 >>> 16) << 16);
                    v3 = (unsigned int)((unsigned short)v3 + 0xffff) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
                }
                v8 = (unsigned int)(unsigned char)v8 | ((unsigned int)((unsigned char)(v8 >>> 8) - 20) << 8) | ((unsigned int)(unsigned short)(v8 >>> 16) << 16);
            }
            if((unsigned char)v2 <= 178) {
                v3 = (unsigned int)((unsigned short)v3 + 0xffff) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
            }
        }
        *(char*)(gvar_40211C + v5) = (unsigned char)v3;
        v4 = (unsigned int)(unsigned char)v8 | ((unsigned int)((unsigned char)(v8 >>> 8) + 128) << 8) | ((unsigned int)(unsigned short)(v8 >>> 16) << 16);
        *(char*)(gvar_402120 + v5) = (unsigned char)(v4 >>> 8);
        v5 = (unsigned int)((unsigned short)v5 + 1) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
    }
    while((unsigned short)v5);
    int v9 = 256000;
    short v10 = 100;
    do {
        gvar_402142 = 0xff60;
        do {
            int v11 = v9;
            v3 = (unsigned int)32576 | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
            v4 = (unsigned int)(((unsigned int)((gvar_402140 >>> 6) & 1) | ((unsigned int)(unsigned short)(v2 >>> 16) << 1) | ((unsigned int)0 << 17)) & 1 ? 0xffff: 0) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
            int v12 = (unsigned int)(((unsigned char)(v3 >>> 8) & (unsigned char)((unsigned int)(unsigned char)((unsigned short)0 | ((unsigned short)(gvar_402140 & 0x7fff) << 1)) | ((unsigned int)((gvar_402140 >>> 6) & 1 ? 0xFF: 0) << 8) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16))) - (unsigned char)v3) | ((unsigned int)(((unsigned int)((gvar_402140 >>> 6) & 1 ? 0xFF: 0) | ((unsigned int)(unsigned short)(v2 >>> 16) << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
            int v13 = (unsigned int)(unsigned char)((unsigned short)0 | ((unsigned short)(((unsigned short)((unsigned char)v12 * (unsigned char)v12) | ((unsigned short)((unsigned char)(((short)(unsigned char)v12 * (short)(unsigned char)v12) >>> 8) - 16) << 8)) & 0x7fff) << 1)) | ((unsigned int)((unsigned char)((unsigned short)((((unsigned char)v12 * (unsigned char)v12) >>> 7) & 1) | ((unsigned short)((unsigned char)(((short)(unsigned char)v12 * (short)(unsigned char)v12) >>> 8) - 16) << 1) | ((unsigned short)0 << 9)) + 0xFF) << 8) | ((unsigned int)(unsigned short)(v12 >>> 16) << 16);
            v4 = (unsigned int)(unsigned char)((unsigned short)v4 ^ ((unsigned short)((unsigned char)v12 * (unsigned char)v12) | ((unsigned short)((unsigned char)(((short)(unsigned char)v12 * (short)(unsigned char)v12) >>> 8) - 16) << 8))) | ((unsigned int)((unsigned char)(((unsigned short)v4 ^ ((unsigned short)((unsigned char)v12 * (unsigned char)v12) | ((unsigned short)((unsigned char)(((short)(unsigned char)v12 * (short)(unsigned char)v12) >>> 8) - 16) << 8))) >>> 8) + 32) << 8) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
            v9 = (unsigned int)(unsigned short)v13 | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
            do {
                v3 = (unsigned int)((unsigned short)v3 + gvar_402142) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
                v4 = (unsigned int)((unsigned short)v4 + v10) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
                v9 = (unsigned int)((unsigned short)v9 - 160) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                v5 = (unsigned int)(unsigned char)(v3 >>> 8) | ((unsigned int)(((unsigned int)(((unsigned short)v9 >>> 8) & 0xFF) | ((unsigned int)(unsigned short)(v5 >>> 16) << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
                v13 = (unsigned int)*(char*)(gvar_402120 + v5) | ((unsigned int)*(char*)(gvar_40211C + v5) << 8) | ((unsigned int)(unsigned short)(v13 >>> 16) << 16);
                char v14 = (unsigned char)(v13 >>> 8) ? 0: 1;
                if((unsigned char)(v13 >>> 8) >= 0) {
                    v5 = (unsigned int)(unsigned char)(v13 >>> 8) | ((unsigned int)((unsigned char)(v4 >>> 8) >>> 1) << 8) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
                    v13 = (unsigned int)(unsigned char)v13 | ((unsigned int)*(char*)(gvar_402124 + v5) << 8) | ((unsigned int)(unsigned short)(v13 >>> 16) << 16);
                    if((unsigned char)(v13 >>> 8)) {
                        v13 = (unsigned int)((unsigned char)v13 + 128) | ((unsigned int)((v13 >>> 8) & 0xffffff) << 8);
                    }
                }
                break;
            }
            while((unsigned char)(v4 >>> 8) <= 70);
            int v15 = v11;
            v2 = *(int*)((unsigned int)(v13 & 0xFF) * 4 + gvar_402104);
            *(int*)(gvar_402100 + v15) = v2;
            v9 = v15 - 4;
            ++gvar_402142;
        }
        while(gvar_402142 != 160);
        v10 += 0xffff;
    }
    while(v10 != 65436);
    GetClientRect(gvar_4020CC, (LPRECT)0x4020F0);
    return StretchDIBits(gvar_4020D0, 0, 0, gvar_4020F8, gvar_4020FC, 0, 0, 320, 200, gvar_402100, (BITMAPINFO*)&gvar_40206C, 0, 0xcc0020);
}

LRESULT sub_4013B6(int param0, int param1, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    LRESULT result;
    if(Msg != 2) {
        if(Msg == 5 && gvar_402108 >= 10) {
            sub_401052(param0, param1);
        }
        result = DefWindowProcW(hWnd, Msg, wParam, lParam);
    }
    else {
        PostQuitMessage(0);
        result = 0;
    }
    return result;
}

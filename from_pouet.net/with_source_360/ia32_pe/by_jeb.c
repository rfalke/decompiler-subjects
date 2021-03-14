
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
        HMODULE v3 = GetModuleHandleW(NULL);
        gvar_4020B4 = v3;
        HICON v4 = LoadIconW(NULL, (LPCWSTR)0x7F00);
        gvar_4020B8 = v4;
        HCURSOR v5 = LoadCursorW(NULL, (LPCWSTR)0x7F00);
        gvar_4020BC = v5;
        ATOM v6 = RegisterClassW((WNDCLASSW*)0x4020A4);
        if(!v6) {
            goto loc_4012F4;
        }
        else {
            HWND hWnd = CreateWindowExW(0, "DEMODEMO", "<< http://www.devreci.com >>", 0x10cf0000, 0x8000, 0x8000, 540, 400, NULL, NULL, gvar_4020B4, NULL);
            if(!hWnd) {
                goto loc_4012F4;
            }
            else {
                gvar_4020CC = hWnd;
                HDC v7 = GetDC(hWnd);
                gvar_4020D0 = v7;
                sub_401000();
                sub_401020(v0, v1);
                SetStretchBltMode(gvar_4020D0, 4);
                while(1) {
                    PeekMessageW((LPMSG)0x4020D4, NULL, 0, 0, 1);
                    if(gvar_4020D8 == 18) {
                        break;
                    }
                    else {
                        TranslateMessage((MSG*)0x4020D4);
                        DispatchMessageW((MSG*)0x4020D4);
                        sub_401020(v0, v1);
                        ++gvar_402108;
                    }
                }
            }
        }
    }
    else {
    loc_4012F4:
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
    unsigned int v0;
    char v1;
    __SyntheticTypeUnknown v2;
    int v3 = 0;
    int v4 = 0;
    int v5 = 0;
    gvar_40213C += 0xffff;
    int v6 = 0;
    do {
        short v7 = 1026;
        v3 = (unsigned int)(unsigned char)v6 | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
        v5 = (unsigned int)62464 | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
        do {
            gvar_40213E = (unsigned short)((unsigned int)(short)((unsigned char)v3 - 128) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16));
            v3 = (unsigned int)((short)(unsigned char)((unsigned int)(short)((unsigned char)v3 - 128) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16)) * (short)(unsigned char)((unsigned int)(short)((unsigned char)v3 - 128) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16))) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)(v3 >>> 16) << 16);
            v5 = (unsigned int)((unsigned short)v5 - (unsigned short)v3) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
            v1 = v1 - 1;
            v2[v1] = (double)gvar_40213E;
            v3 = (unsigned int)(unsigned char)(v6 >>> 8) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
            ++v7;
        }
        while(__parity__((unsigned char)v7));
        fpatan();
        v2[v1] *= (double)gvar_40213A;
        fistp();
        v3 = (unsigned int)(*(short*)((char*)&gvar_40213A + 1) + gvar_40213E) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
        v4 = (unsigned int)0 | ((unsigned int)(unsigned char)(v3 >>> 8) << 8) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
        v3 = (unsigned int)(unsigned char)(v5 >>> 8) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
        v3 = (unsigned int)((unsigned short)v3 & 0x707) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
        v3 = (unsigned int)((unsigned char)(v3 >>> 8) + (unsigned char)v3) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
        char v8 = (unsigned char)v3;
        v3 = (unsigned int)(unsigned char)(v5 >>> 8) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
        int v9 = (unsigned int)(unsigned char)v5 | ((unsigned int)((unsigned char)v3 + v8) << 8) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
        if((unsigned char)v3 >= 239) {
            v4 = (unsigned int)80 | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
        }
        if((unsigned char)v3 <= 234) {
            v4 = (unsigned int)(unsigned char)v4 | ((unsigned int)((unsigned char)(v4 >>> 8) & 0x1f) << 8) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
            if((unsigned char)(v4 >>> 8) <= 3) {
                if((unsigned char)v3 >= 233) {
                    v9 = (unsigned int)(unsigned char)v9 | ((unsigned int)(__ror__((unsigned char)v3, 3) + 155) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                    v4 = (unsigned int)((unsigned short)v4 + 0xffff) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
                }
                v9 = (unsigned int)(unsigned char)v9 | ((unsigned int)((unsigned char)(v9 >>> 8) - 20) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
            }
            if((unsigned char)v3 <= 180) {
                v4 = (unsigned int)((unsigned short)v4 + 0xffff) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
            }
        }
        *(char*)(gvar_40211C + v6) = (unsigned char)v4;
        v5 = (unsigned int)(unsigned char)v9 | ((unsigned int)((unsigned char)(v9 >>> 8) + 128) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
        v0 = gvar_402120;
        *(char*)(v6 + v0) = (unsigned char)(v5 >>> 8);
        v6 = (unsigned int)((unsigned short)v6 + 1) | ((unsigned int)(unsigned short)(v6 >>> 16) << 16);
    }
    while((unsigned short)v6);
    int v10 = 256000;
    short v11 = 65436;
    do {
        v0 = (unsigned int)0xff60 | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
        do {
            unsigned int v12 = v0;
            int v13 = v10;
            v4 = (unsigned int)32576 | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
            v5 = (unsigned int)(((unsigned int)((gvar_40213C >>> 6) & 1) | ((unsigned int)(unsigned short)(v3 >>> 16) << 1) | ((unsigned int)0 << 17)) & 1 ? 0xffff: 0) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
            int v14 = (unsigned int)(((unsigned char)(v4 >>> 8) & (unsigned char)((unsigned int)(unsigned char)((unsigned short)0 | ((unsigned short)(gvar_40213C & 0x7fff) << 1)) | ((unsigned int)((gvar_40213C >>> 6) & 1 ? 0xFF: 0) << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16))) - (unsigned char)v4) | ((unsigned int)(((unsigned int)((gvar_40213C >>> 6) & 1 ? 0xFF: 0) | ((unsigned int)(unsigned short)(v3 >>> 16) << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
            v5 = (unsigned int)(unsigned char)((unsigned short)v5 ^ ((unsigned short)((unsigned char)v14 * (unsigned char)v14) | ((unsigned short)((unsigned char)(((short)(unsigned char)v14 * (short)(unsigned char)v14) >>> 8) - 16) << 8))) | ((unsigned int)((unsigned char)(((unsigned short)v5 ^ ((unsigned short)((unsigned char)v14 * (unsigned char)v14) | ((unsigned short)((unsigned char)(((short)(unsigned char)v14 * (short)(unsigned char)v14) >>> 8) - 16) << 8))) >>> 8) + 36) << 8) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
            int v15 = (unsigned int)(unsigned char)((unsigned short)0 | ((unsigned short)(((unsigned short)((unsigned char)v14 * (unsigned char)v14) | ((unsigned short)((unsigned char)(((short)(unsigned char)v14 * (short)(unsigned char)v14) >>> 8) - 16) << 8)) & 0x7fff) << 1)) | ((unsigned int)((unsigned char)((unsigned short)((((unsigned char)v14 * (unsigned char)v14) >>> 7) & 1) | ((unsigned short)((unsigned char)(((short)(unsigned char)v14 * (short)(unsigned char)v14) >>> 8) - 16) << 1) | ((unsigned short)0 << 9)) + 0xFF) << 8) | ((unsigned int)(unsigned short)(v14 >>> 16) << 16);
            v10 = (unsigned int)(unsigned short)v15 | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        loc_401106:
            do {
                v4 = (unsigned int)((unsigned short)v4 + (unsigned short)v0) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
                v5 = (unsigned int)((unsigned short)v5 + v11) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
                v10 = (unsigned int)((unsigned short)v10 - 160) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
                v6 = (unsigned int)(unsigned char)(v4 >>> 8) | ((unsigned int)(((unsigned int)(((unsigned short)v10 >>> 8) & 0xFF) | ((unsigned int)(unsigned short)(v6 >>> 16) << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
                v15 = (unsigned int)*(char*)(gvar_402120 + v6) | ((unsigned int)*(char*)(gvar_40211C + v6) << 8) | ((unsigned int)(unsigned short)(v15 >>> 16) << 16);
                char v16 = (unsigned char)(v15 >>> 8) ? 0: 1;
                if((unsigned char)(v15 >>> 8) >= 0) {
                    char v17 = (unsigned char)(v15 >>> 8) > (unsigned char)(v5 >>> 8);
                    char v18 = ((((unsigned char)(v5 >>> 8) - (unsigned char)(v15 >>> 8)) ^ (unsigned char)(v5 >>> 8)) & ((unsigned char)(v15 >>> 8) ^ (unsigned char)(v5 >>> 8))) < 0;
                    if((unsigned char)(v15 >>> 8) > (unsigned char)(v5 >>> 8)) {
                        goto loc_401106;
                    }
                    else if(v17 == v18) {
                        v15 = (unsigned int)((unsigned char)(v15 >>> 8) + (unsigned char)v15) | ((unsigned int)((v15 >>> 8) & 0xffffff) << 8);
                    }
                }
            }
            while((unsigned char)(v15 >>> 8) >= 0 && (unsigned char)(v5 >>> 8) <= 70);
            int v19 = v13;
            v3 = *(int*)((unsigned int)(v15 & 0xFF) * 4 + gvar_402104);
            *(int*)(gvar_402100 + v19) = v3;
            v10 = v19 - 4;
            v0 = (unsigned int)((unsigned short)v12 + 1) | ((unsigned int)(unsigned short)(v12 >>> 16) << 16);
        }
        while((unsigned short)v0 != 160);
        ++v11;
    }
    while(v11 != 100);
    GetClientRect(gvar_4020CC, (LPRECT)0x4020F0);
    return StretchDIBits(gvar_4020D0, 0, 0, gvar_4020F8, gvar_4020FC, 0, 0, 320, 200, gvar_402100, (BITMAPINFO*)&gvar_40206C, 0, 0xcc0020);
}

LRESULT sub_401324(int param0, int param1, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    LRESULT result;
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

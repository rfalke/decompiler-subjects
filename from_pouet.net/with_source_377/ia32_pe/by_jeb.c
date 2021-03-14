
int start() {
    int v0;
    int v1;
    HGLOBAL v2 = GlobalAlloc(0, 1000000);
    if(v2) {
        gvar_40210C = v2;
        gvar_402104 = v2;
        gvar_402100 = (int*)((int)v2 + 2000);
        gvar_40211C = (int*)((int)v2 + 402000);
        gvar_402118 = (int*)((int)v2 + 602000);
        HMODULE v3 = GetModuleHandleW(NULL);
        gvar_4020B4 = v3;
        HICON v4 = LoadIconW(NULL, (LPCWSTR)0x7F00);
        gvar_4020B8 = v4;
        HCURSOR v5 = LoadCursorW(NULL, (LPCWSTR)0x7F00);
        gvar_4020BC = v5;
        ATOM v6 = RegisterClassW((WNDCLASSW*)0x4020A4);
        if(!v6) {
            goto loc_401329;
        }
        else {
            HWND hWnd = CreateWindowExW(0, "DEMODEMO", "<< http://www.devreci.com >>", 0x10cf0000, 0x8000, 0x8000, 540, 400, NULL, NULL, gvar_4020B4, NULL);
            if(!hWnd) {
                goto loc_401329;
            }
            else {
                gvar_4020CC = hWnd;
                HDC v7 = GetDC(hWnd);
                gvar_4020D0 = v7;
                sub_401000();
                sub_401017();
                sub_401088(v0, v1);
                SetStretchBltMode(gvar_4020D0, 4);
                while(1) {
                    PeekMessageW((LPMSG)0x4020D4, NULL, 0, 0, 1);
                    if(gvar_4020D8 == 18) {
                        break;
                    }
                    else {
                        TranslateMessage((MSG*)0x4020D4);
                        DispatchMessageW((MSG*)0x4020D4);
                        sub_401088(v0, v1);
                        ++gvar_402108;
                    }
                }
            }
        }
    }
    else {
    loc_401329:
        MessageBoxW(NULL, "Startup failed.", NULL, 16);
    }
    ReleaseDC(gvar_4020CC, gvar_4020D0);
    GlobalFree(gvar_40210C);
    /*NO_RETURN*/ ExitProcess(gvar_4020DC);
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

int sub_401017() {
    int counter = 0xf00;
    char* ptr0 = (char*)&gvar_402136;
    char* ptr1 = gvar_402118;
    do {
        *ptr1 = *ptr0;
        ++ptr0;
        ++ptr1;
        --counter;
    }
    while(counter);
    int v0 = 0;
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    do {
        unsigned int v4 = gvar_402118;
        v1 = (unsigned int)2 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
        v2 = (unsigned int)1275 | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
        if((unsigned char)v2 >= (unsigned char)v0 && (unsigned char)(v2 >>> 8) <= (unsigned char)v0) {
            short v5 = (unsigned short)v0;
            v3 = (unsigned int)((unsigned short)(unsigned char)((unsigned int)((unsigned char)(v0 >>> 8) >>> (v1 & 0x1f)) | ((unsigned int)(unsigned short)(v0 >>> 16) << 8) | ((unsigned int)0 << 24)) * 64 + (unsigned short)((unsigned int)((unsigned char)v0 >>> (v1 & 0x1f)) | ((unsigned int)((unsigned char)(v0 >>> 8) >>> (v1 & 0x1f)) << 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16))) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
            v0 = (unsigned int)v5 | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)(v0 >>> 16) << 16);
            if(((unsigned char)v2 & *(char*)(v4 + v3 - 8644)) == 0) {
                v2 = (unsigned int)((unsigned short)v0 & 0xf0f) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
                v2 = (unsigned int)((unsigned char)(v2 >>> 8) + (unsigned char)v2) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
                v2 = (unsigned int)((unsigned short)v2 << (v1 & 0x1f)) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
            }
        }
        *(char*)(gvar_40211C + v0) = (unsigned char)v2;
        v0 = (unsigned int)((unsigned short)v0 + 0xffff) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    }
    while((unsigned short)v0);
    return 0;
}

int sub_401088(int param0, int param1) {
    int v0;
    __SyntheticTypeUnknown v1;
    int v2;
    char v3;
    int v4 = v2;
    int* ptr0 = &v0;
    int* ptr1 = NULL;
    int v5 = 0;
    int v6 = 0x400;
    do {
        v5 = (unsigned int)((unsigned short)v5 + 1) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
        *(short*)((int)&gvar_402136 + v6) = (unsigned short)v5 + *(short*)((int)&gvar_402136 + v6);
        char v7 = v3 - 1;
        v1[v7] = (double)*(short*)((int)&gvar_402136 + v6);
        v1[v7] /= (double)gvar_402130;
        fsincos();
        *(int*)(v6 + 0x402155) = v1[v7];
        char v8 = v7 + 1;
        *(int*)(v6 + 4202841) = v1[v8];
        v3 = v8 + 1;
        v6 = (unsigned int)((unsigned char)v6 + 8) | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
    }
    while(!__parity__((unsigned char)v6));
    int v9 = (unsigned int)(unsigned char)v6 | ((unsigned int)3 << 8) | ((unsigned int)(unsigned short)(v6 >>> 16) << 16);
    int v10 = 0;
    do {
        short v11 = 128;
    loc_4010C8:
        int v12 = 1053;
        ptr1 = (unsigned int)(unsigned char)v10 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        v9 = (unsigned int)(unsigned char)(v5 >>> 8) | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
        do {
            ptr1 = (unsigned int)(short)((unsigned char)ptr1 - 128) | ((unsigned int)(unsigned short)(int*)((int)ptr1 >>> 16) << 16);
            *(short*)((int)&gvar_402136 + v9) = (unsigned short)ptr1;
            ptr1 = (unsigned int)(unsigned char)(v10 >>> 8) | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
            v9 = (unsigned int)((unsigned short)v9 + 2) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
            if(__parity__((unsigned char)v9)) {
                v9 &= 0xffffff00;
            }
            v12 = (unsigned int)((unsigned short)v12 + 1) | ((unsigned int)(unsigned short)(v12 >>> 16) << 16);
        }
        while(__parity__((unsigned char)v12));
        *(short*)((int)&gvar_402136 + v9) = v11;
        v9 &= 0xffffff00;
        do {
            --v3;
            v1[v3] = (double)*(short*)((int)&gvar_402136 + v9);
            v9 = (unsigned int)((unsigned short)v9 + 2) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
        }
        while(!__parity__((unsigned char)v9));
        do {
            char v13 = v3 - 1;
            v1[v13] = v1[v3 + 1];
            v1[v13] *= *(float*)((int)&gvar_402136 + v12);
            char v14 = v13 - 1;
            v1[v14] = v1[v13 + 3];
            v1[v14] *= *(float*)(v12 + 4202810);
            v1[v14 + 1] += v1[v14];
            char v15 = v14 + 1;
            v1[v15] *= *(float*)(v12 + 4202810);
            v1[v15] *= *(float*)((int)&gvar_402136 + v12);
            v1[v15 + 3] -= v1[v15];
            v3 = v15 + 1;
            v12 = (unsigned int)((unsigned short)v12 + 8) | ((unsigned int)(unsigned short)(v12 >>> 16) << 16);
        }
        while(__parity__((unsigned char)v12));
        v1[v3] += (double)gvar_402132;
        v1[v3] /= (double)gvar_402134;
        v1[v3 + 2] /= v1[v3];
        v1[v3 + 1] /= v1[v3];
        ++v3;
        fistp();
        fistp();
        int v16 = *(int*)((int)&gvar_402136 + v9) * 321;
        unsigned int v17 = gvar_402118;
        ptr1 = (unsigned int)(*(char*)(gvar_40211C + v10) >>> 5) | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        *(char*)(v17 + v16 + 32160) = (unsigned char)ptr1 + *(char*)(v17 + v16 + 32160);
        do {
            v10 = (unsigned int)((unsigned short)v10 + 1) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
            if((unsigned short)v10) {
                goto loc_4010C8;
            }
            else {
                v11 = 0 - v11;
            }
        }
        while(v11 < 0);
        v5 = (unsigned int)(unsigned char)v5 | ((unsigned int)((unsigned char)(v5 >>> 8) + 2) << 8) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
    }
    while(!__parity__((unsigned char)(v5 >>> 8)));
    int counter = 64000;
    char* ptr2 = (char*)(gvar_402118 + 0x500);
    int* ptr3 = (int*)(gvar_402100 + 0x500);
    do {
        ptr1 = (unsigned int)*ptr2 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        *ptr2 = 0;
        ptr1 = (int*)((unsigned int)(int*)(ptr1 & 0xFF) * 4 + gvar_402104);
        *ptr3 = *ptr1;
        ++ptr2;
        ++ptr3;
        --counter;
    }
    while(counter);
    GetClientRect(gvar_4020CC, (LPRECT)0x4020F0);
    return StretchDIBits(gvar_4020D0, 0, 0, gvar_4020F8, gvar_4020FC, 0, 0, 320, 200, gvar_402100, (BITMAPINFO*)&gvar_40206C, 0, 0xcc0020);
}

LRESULT sub_401359(int param0, int param1, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    LRESULT result;
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


int start(int param0, int param1, int param2, int param3) {
    int* ptr0;
    int* ptr0;
    int v0;
    HANDLE hProcess;
    int* ptr0;
    int v1;
    char v2;
    int v3;
    int v4;
    int v5 = v4;
    LPWSTR lpCmdLine = GetCommandLineW();
    LPWSTR* ptr1 = CommandLineToArgvW(lpCmdLine, &v3);
    if(!ptr1) {
        /*NO_RETURN*/ sub_401000(4202620);
    }
    if(v3 != 5) {
        return v3 + 1000;
    }
    WCHAR* ptr2 = ptr1[1];
    DWORD dwProcessId = 0;
    if(!ptr2) {
        ptr0 = NULL;
        goto loc_401195;
    }
    else {
        hProcess = (HANDLE)0x14;
        v0 = (int)ptr2;
    }
    while(*(short*)v0 != 0) {
        v0 += 2;
        hProcess = (HANDLE)((int)hProcess - 1);
        if(!hProcess) {
            ptr0 = NULL;
            goto loc_401195;
        }
    }
    if(!hProcess) {
        ptr0 = NULL;
        goto loc_401195;
    }
    else {
        ptr0 = (int*)(20 - (int)hProcess);
    loc_401195:
        unsigned int v6 = 0;
        if(ptr0) {
            do {
                int v7 = (unsigned int)ptr2[v6];
                ++v6;
                dwProcessId = (DWORD)(dwProcessId * 10 + v7 - 48);
            }
            while(v6 < (unsigned int)ptr0);
        }
        hProcess = OpenProcess(1, 0, dwProcessId);
        if(!hProcess) {
            /*NO_RETURN*/ sub_401000((int)ptr1[1]);
        }
        BOOL v8 = TerminateProcess(hProcess, 0);
        if(!v8) {
            /*NO_RETURN*/ sub_401000(4202620);
        }
        CloseHandle(hProcess);
        int* ptr3 = (int*)&loc_401207;
        int v9 = sub_4010A0();
        LPCWSTR lpNewFileName = !(v9 ? 0: 1) ? ptr1[3]: ptr1[4];
        BOOL v10 = MoveFileW(ptr1[2], lpNewFileName);
        if(!v10) {
            /*NO_RETURN*/ sub_401000((int)ptr1[2]);
        }
        int counter = 68;
        LPSTARTUPINFOW v11 = &v1;
        do {
            *(char*)&v11->cb = 0;
            v11 = (LPSTARTUPINFOW)((char*)v11 + 1);
            --counter;
        }
        while(counter);
        v1 = 68;
        LPCWSTR v12 = (LPCWSTR)0x10;
        LPPROCESS_INFORMATION v13 = &v2;
        do {
            *(char*)&v13->hProcess = 0;
            v13 = (LPPROCESS_INFORMATION)((char*)v13 + 1);
            v12 = (LPCWSTR)((char*)v12 - 1);
        }
        while(v12);
        BOOL v14 = CreateProcessW(NULL, lpNewFileName, NULL, NULL, 0, 0, NULL, NULL, &v1, &v2);
        if(!v14) {
            /*NO_RETURN*/ sub_401000((int)lpNewFileName);
        }
        if(ptr1[3] != lpNewFileName) {
            int counter1 = 100;
            do {
                sub_4010A0();
                --counter1;
            }
            while(counter1);
        }
        return 0;
    }
}

int sub_401000(int param0) {
    char v0;
    int v1;
    LPCWSTR v2;
    LPCWSTR v3;
    int v4;
    int v5;
    int* ptr0 = &v1;
    int* ptr1 = &v1;
    char v6 = &v0 == 12;
    char v7 = (int)&v4 < 0;
    char v8 = __parity__((unsigned char)&v0 - 12);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x8) ^ (int)&v4) >>> 4) & 0x1);
    char v10 = (unsigned int)&v1 < 8;
    char v11 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v4) & (int)(int*)((int)&v1 ^ 0x8)) < 0;
    int v12 = v5;
    LPCWSTR lpString1 = v3;
    DWORD v13 = GetLastError();
    DWORD dwMessageId = v13;
    LPWSTR v14 = &v2;
    DWORD v15 = FormatMessageW(0x1300, NULL, dwMessageId, 0x400, &v2, 0, NULL);
    LPCWSTR lpString = v2;
    int v16 = 0x2404;
    int v17 = lstrlenW(lpString);
    v4 = v17;
    int v18 = lstrlenW(lpString1);
    int v19 = v4;
    int v20 = v4;
    int v21 = v18 + v19;
    char v22 = v21 ? 0: 1;
    char v23 = v21 < 0;
    char v24 = __parity__((unsigned char)v21);
    char v25 = (((v18 ^ v20) ^ v21) >>> 4) & 0x1;
    char v26 = __carry__(v18, v20);
    char v27 = ((v21 ^ v20) & ~(v18 ^ v20)) < 0;
    SIZE_T uBytes = (SIZE_T)(v21 * 2 + 0x2000);
    HLOCAL v28 = LocalAlloc(64, uBytes);
    int v29 = param0;
    LPWSTR hMem1 = (LPWSTR)v28;
    LPCWSTR v30 = v2;
    int v31 = wsprintfW(hMem1, (LPCWSTR)&gvar_402080, lpString1, v29, dwMessageId, v30);
    int v32 = 0;
    char v33 = 1;
    char v34 = 0;
    char v35 = 1;
    char v36 = 0;
    char v37 = 0;
    UINT uType = 0;
    LPCWSTR lpCaption = "Error";
    LPCWSTR lpText = hMem1;
    HWND hWnd = NULL;
    hMem1[0x400] = 0;
    int v38 = MessageBoxW(hWnd, lpText, lpCaption, uType);
    HLOCAL hMem = v2;
    int v39 = 0x2462;
    HLOCAL v40 = LocalFree(hMem);
    HLOCAL v41 = LocalFree(hMem1);
    int* ptr2 = &lpCaption;
    lpCaption = (LPCWSTR)&sub_40109D;
    /*BAD_CALL!*/ sub_40109D();
}

int sub_4010A0() {
    char v0;
    int v1;
    LPCWSTR lpFileName;
    int v2 = v1;
    unsigned int v3 = 0;
    BOOL v4 = DeleteFileW(lpFileName);
    if(!v4) {
        SetFileAttributesW(lpFileName, 128);
        BOOL v5 = DeleteFileW(lpFileName);
        if(!v5) {
            do {
                BOOL v6 = DeleteFileW(lpFileName);
                if(v6) {
                    return 1;
                }
                HANDLE hFindFile = FindFirstFileW(lpFileName, &v0);
                if(hFindFile == -1) {
                    DWORD v7 = GetLastError();
                    if(v7 == 2) {
                        return 1;
                    }
                }
                else {
                    FindClose(hFindFile);
                }
                Sleep(100);
                ++v3;
            }
            while((int)v3 < 10);
            return 0;
        }
    }
    return 1;
}

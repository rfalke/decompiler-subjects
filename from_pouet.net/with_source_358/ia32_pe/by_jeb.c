
int start() {
    HMODULE v0 = →kernel32.dll!LoadLibraryA("kernel32");
    gvar_403016 = v0;
    char v1 = v0 ? 0: 1;
    char v2 = (int)v0 < 0;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    if(!v1) {
        HMODULE v6 = →kernel32.dll!LoadLibraryA("user32");
        gvar_40301A = v6;
        v1 = v6 ? 0: 1;
        v2 = (int)v6 < 0;
        v3 = __parity__((unsigned char)v6);
        v4 = 0;
        v5 = 0;
        if(!v1) {
            HMODULE v7 = →kernel32.dll!LoadLibraryA("gdi32");
            gvar_40301E = v7;
            v1 = v7 ? 0: 1;
            v2 = (int)v7 < 0;
            v3 = __parity__((unsigned char)v7);
            v4 = 0;
            v5 = 0;
            if(!v1) {
                FARPROC v8 = →kernel32.dll!GetProcAddress(gvar_403016, "LoadLibraryA");
                gvar_403048 = v8;
                v1 = v8 ? 0: 1;
                v2 = (int)v8 < 0;
                v3 = __parity__((unsigned char)v8);
                v4 = 0;
                v5 = 0;
                if(!v1) {
                    FARPROC v9 = →kernel32.dll!GetProcAddress(gvar_40301A, "GetDC");
                    gvar_40304C = v9;
                    v1 = v9 ? 0: 1;
                    v2 = (int)v9 < 0;
                    v3 = __parity__((unsigned char)v9);
                    v4 = 0;
                    v5 = 0;
                    if(!v1) {
                        FARPROC v10 = →kernel32.dll!GetProcAddress(gvar_40301E, "SetPixel");
                        gvar_403050 = v10;
                        v1 = v10 ? 0: 1;
                        v2 = (int)v10 < 0;
                        v3 = __parity__((unsigned char)v10);
                        v4 = 0;
                        v5 = 0;
                        if(!v1) {
                            FARPROC v11 = →kernel32.dll!GetProcAddress(gvar_40301A, "ReleaseDC");
                            gvar_403054 = v11;
                            v1 = v11 ? 0: 1;
                            v2 = (int)v11 < 0;
                            v3 = __parity__((unsigned char)v11);
                            v4 = 0;
                            v5 = 0;
                            if(!v1) {
                                HANDLE v12 = →kernel32.dll!CreateFileA("ROXOR-2A.exe", 0x40000000, 0, NULL, 3, 128, NULL);
                                gvar_40308D = v12;
                                int* ptr0 = (int*)((int)v12 + 1);
                                v1 = ptr0 ? 0: 1;
                                v2 = (int)ptr0 < 0;
                                v3 = __parity__((unsigned char)ptr0);
                                v4 = 0;
                                v5 = 0;
                                if(!v1) {
                                    →kernel32.dll!SetFilePointer(gvar_40308D, 186, NULL, 0);
                                    →kernel32.dll!WriteFile(gvar_40308D, (LPCVOID)&gvar_403048, 4, (LPDWORD)0x403091, NULL);
                                    →kernel32.dll!SetFilePointer(gvar_40308D, 196, NULL, 0);
                                    →kernel32.dll!WriteFile(gvar_40308D, (LPCVOID)&gvar_40304C, 4, (LPDWORD)0x403091, NULL);
                                    →kernel32.dll!SetFilePointer(gvar_40308D, 221, NULL, 0);
                                    →kernel32.dll!WriteFile(gvar_40308D, (LPCVOID)&gvar_403050, 4, (LPDWORD)0x403091, NULL);
                                    →kernel32.dll!SetFilePointer(gvar_40308D, 247, NULL, 0);
                                    →kernel32.dll!WriteFile(gvar_40308D, (LPCVOID)&gvar_403054, 4, (LPDWORD)0x403091, NULL);
                                    →kernel32.dll!CloseHandle(gvar_40308D);
                                    return sub_4011B9();
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    →user32.dll!MessageBoxA(NULL, "ERROR! (>_<)", "ROXOR-2A SETUP", 0);
    /*NO_RETURN*/ sub_4011CC();
}

int sub_4011B9() {
    /*BAD_CALL!*/ →user32.dll!MessageBoxA(NULL, "DONE! (^_^)", "ROXOR-2A SETUP", 0);
}

int sub_4011CC() {
    BOOL v0 = →kernel32.dll!FreeLibrary(gvar_403016);
    BOOL v1 = →kernel32.dll!FreeLibrary(gvar_40301A);
    BOOL v2 = →kernel32.dll!FreeLibrary(gvar_40301E);
    /*NO_RETURN*/ →kernel32.dll!ExitProcess(0);
}

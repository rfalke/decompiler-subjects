
int start() {
    HMODULE v0 = →kernel32.dll!LoadLibraryA("kernel32");
    gvar_403009 = v0;
    char v1 = v0 ? 0: 1;
    char v2 = (int)v0 < 0;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    if(!v1) {
        FARPROC v6 = →kernel32.dll!GetProcAddress(gvar_403009, "WinExec");
        gvar_403015 = v6;
        v1 = v6 ? 0: 1;
        v2 = (int)v6 < 0;
        v3 = __parity__((unsigned char)v6);
        v4 = 0;
        v5 = 0;
        if(!v1) {
            HANDLE v7 = →kernel32.dll!CreateFileA("XOROX-KO.exe", 0x40000000, 0, NULL, 3, 128, NULL);
            gvar_40304E = v7;
            int* ptr0 = (int*)((int)v7 + 1);
            v1 = ptr0 ? 0: 1;
            v2 = (int)ptr0 < 0;
            v3 = __parity__((unsigned char)ptr0);
            v4 = 0;
            v5 = 0;
            if(!v1) {
                →kernel32.dll!SetFilePointer(gvar_40304E, 49, NULL, 0);
                →kernel32.dll!WriteFile(gvar_40304E, (LPCVOID)&gvar_403015, 4, (LPDWORD)0x403052, NULL);
                →kernel32.dll!CloseHandle(gvar_40304E);
                return sub_40109E();
            }
        }
    }
    →user32.dll!MessageBoxA(NULL, "ERROR! (>_<)", "XOROX-KO SETUP", 0);
    /*NO_RETURN*/ sub_4010B1();
}

int sub_40109E() {
    /*BAD_CALL!*/ →user32.dll!MessageBoxA(NULL, "DONE! (^_^)", "XOROX-KO SETUP", 0);
}

int sub_4010B1() {
    BOOL v0 = →kernel32.dll!FreeLibrary(gvar_403009);
    /*NO_RETURN*/ →kernel32.dll!ExitProcess(0);
}

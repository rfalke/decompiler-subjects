
int start() {
    HMODULE v0 = →kernel32.dll!LoadLibraryA("kernel32");
    gvar_403009 = v0;
    if(v0) {
        FARPROC v1 = →kernel32.dll!GetProcAddress(gvar_403009, "WinExec");
        gvar_403015 = v1;
        if(!v1) {
            goto loc_401097;
        }
        else {
            HANDLE v2 = →kernel32.dll!CreateFileA("XOROX-KO.exe", 0x40000000, 0, NULL, 3, 128, NULL);
            gvar_40304E = v2;
            if(!(int*)((int)v2 + 1)) {
                goto loc_401097;
            }
            else {
                →kernel32.dll!SetFilePointer(gvar_40304E, 49, NULL, 0);
                →kernel32.dll!WriteFile(gvar_40304E, (LPCVOID)&gvar_403015, 4, (LPDWORD)0x403052, NULL);
                →kernel32.dll!CloseHandle(gvar_40304E);
                →user32.dll!MessageBoxA(NULL, "DONE! (^_^)", "XOROX-KO SETUP", 0);
            }
        }
    }
    else {
    loc_401097:
        →user32.dll!MessageBoxA(NULL, "ERROR! (>_<)", "XOROX-KO SETUP", 0);
    }
    →kernel32.dll!FreeLibrary(gvar_403009);
    /*NO_RETURN*/ →kernel32.dll!ExitProcess(0);
}

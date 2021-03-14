
int start() {
    HMODULE v0 = →kernel32.dll!LoadLibraryA("kernel32");
    gvar_403016 = v0;
    if(v0) {
        HMODULE v1 = →kernel32.dll!LoadLibraryA("user32");
        gvar_40301A = v1;
        if(!v1) {
            goto loc_4011B2;
        }
        else {
            HMODULE v2 = →kernel32.dll!LoadLibraryA("gdi32");
            gvar_40301E = v2;
            if(!v2) {
                goto loc_4011B2;
            }
            else {
                FARPROC v3 = →kernel32.dll!GetProcAddress(gvar_403016, "LoadLibraryA");
                gvar_403048 = v3;
                if(!v3) {
                    goto loc_4011B2;
                }
                else {
                    FARPROC v4 = →kernel32.dll!GetProcAddress(gvar_40301A, "GetDC");
                    gvar_40304C = v4;
                    if(!v4) {
                        goto loc_4011B2;
                    }
                    else {
                        FARPROC v5 = →kernel32.dll!GetProcAddress(gvar_40301E, "SetPixel");
                        gvar_403050 = v5;
                        if(!v5) {
                            goto loc_4011B2;
                        }
                        else {
                            FARPROC v6 = →kernel32.dll!GetProcAddress(gvar_40301A, "ReleaseDC");
                            gvar_403054 = v6;
                            if(!v6) {
                                goto loc_4011B2;
                            }
                            else {
                                HANDLE v7 = →kernel32.dll!CreateFileA("ROXOR-2A.exe", 0x40000000, 0, NULL, 3, 128, NULL);
                                gvar_40308D = v7;
                                if(!(int*)((int)v7 + 1)) {
                                    goto loc_4011B2;
                                }
                                else {
                                    →kernel32.dll!SetFilePointer(gvar_40308D, 186, NULL, 0);
                                    →kernel32.dll!WriteFile(gvar_40308D, (LPCVOID)&gvar_403048, 4, (LPDWORD)0x403091, NULL);
                                    →kernel32.dll!SetFilePointer(gvar_40308D, 196, NULL, 0);
                                    →kernel32.dll!WriteFile(gvar_40308D, (LPCVOID)&gvar_40304C, 4, (LPDWORD)0x403091, NULL);
                                    →kernel32.dll!SetFilePointer(gvar_40308D, 221, NULL, 0);
                                    →kernel32.dll!WriteFile(gvar_40308D, (LPCVOID)&gvar_403050, 4, (LPDWORD)0x403091, NULL);
                                    →kernel32.dll!SetFilePointer(gvar_40308D, 247, NULL, 0);
                                    →kernel32.dll!WriteFile(gvar_40308D, (LPCVOID)&gvar_403054, 4, (LPDWORD)0x403091, NULL);
                                    →kernel32.dll!CloseHandle(gvar_40308D);
                                    →user32.dll!MessageBoxA(NULL, "DONE! (^_^)", "ROXOR-2A SETUP", 0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else {
    loc_4011B2:
        →user32.dll!MessageBoxA(NULL, "ERROR! (>_<)", "ROXOR-2A SETUP", 0);
    }
    →kernel32.dll!FreeLibrary(gvar_403016);
    →kernel32.dll!FreeLibrary(gvar_40301A);
    →kernel32.dll!FreeLibrary(gvar_40301E);
    /*NO_RETURN*/ →kernel32.dll!ExitProcess(0);
}

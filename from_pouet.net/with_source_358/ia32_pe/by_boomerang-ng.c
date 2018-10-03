int global_0x00403016 = 0;
int global_0x0040301a = 0;
int global_0x0040301e = 0;
__size32 global_0x0040308d = 0;// 4 bytes
void _start();
void __imp_LoadLibraryA(LPCSTR param1);
void __imp_GetProcAddress(HANDLE param1, char *param2);
void __imp_CreateFileA();
void __imp_SetFilePointer(HANDLE param1, LONG param2, PLONG param3, DWORD param4);
void __imp_WriteFile(HANDLE param1, LPCVOID param2, DWORD param3, LPDWORD param4, LPOVERLAPPED param5);
void __imp_CloseHandle(HANDLE param1);

/** address: 0x00401000 */
void _start()
{
    __size32 eax; 		// r24
    FARPROC eax_1; 		// r24
    FARPROC eax_2; 		// r24{0}
    FARPROC eax_3; 		// r24{0}
    FARPROC eax_4; 		// r24{0}
    int esp; 		// r28
    void *esp_1; 		// r28{0}
    void *esp_2; 		// r28{0}
    void *esp_3; 		// r28{0}
    void *esp_4; 		// r28{0}
    void *esp_5; 		// r28{0}
    void *esp_6; 		// r28{0}
    void *esp_7; 		// r28{0}
    void *esp_8; 		// r28{0}
    LPCSTR local0; 		// m[esp - 4]
    union { __size32; HANDLE; } local1; 		// m[esp - 8]
    void *local12; 		// esp{0}
    union { __size32; HANDLE; } local2; 		// m[esp - 44]
    DWORD local5; 		// m[esp - 32]
    union { __size32; HANDLE; } local6; 		// m[esp - 48]

    eax = LoadLibraryA("kernel32"); /* Warning: also results in esp_1 */
    local12 = esp_1;
    global_0x00403016 = eax;
    if (eax == 0) {
bb0x4011a4:
        esp = local12;
        local0 = 0;
        local1 = 0x403058;
        *(__size32*)(esp - 12) = 0x403073;
        *(__size32*)(esp - 16) = 0;
        esp = MessageBoxA(*(esp - 16), *(esp - 12), *(esp - 8), *(esp - 4));
    }
    else {
        eax = LoadLibraryA("user32"); /* Warning: also results in esp_2 */
        local12 = esp_2;
        global_0x0040301a = eax;
        if (eax == 0) {
            goto bb0x4011a4;
        }
        else {
            eax = LoadLibraryA("gdi32"); /* Warning: also results in esp_3 */
            local12 = esp_3;
            global_0x0040301e = eax;
            if (eax == 0) {
                goto bb0x4011a4;
            }
            else {
                local1 = *0x403016;
                eax_2 = GetProcAddress(local1, "LoadLibraryA"); /* Warning: also results in esp_4 */
                local12 = esp_4;
                *(union { FARPROC; __size32; }*)0x403048 = eax_2;
                if (eax_2 == 0) {
                    goto bb0x4011a4;
                }
                else {
                    local1 = *0x40301a;
                    eax_3 = GetProcAddress(local1, "GetDC"); /* Warning: also results in esp_5 */
                    local12 = esp_5;
                    *(union { FARPROC; __size32; }*)0x40304c = eax_3;
                    if (eax_3 == 0) {
                        goto bb0x4011a4;
                    }
                    else {
                        local1 = *0x40301e;
                        eax_4 = GetProcAddress(local1, "SetPixel"); /* Warning: also results in esp_6 */
                        local12 = esp_6;
                        *(union { FARPROC; __size32; }*)0x403050 = eax_4;
                        if (eax_4 == 0) {
                            goto bb0x4011a4;
                        }
                        else {
                            local1 = *0x40301a;
                            eax_1 = GetProcAddress(local1, "ReleaseDC"); /* Warning: also results in esp_7 */
                            local12 = esp_7;
                            *(union { FARPROC; __size32; }*)0x403054 = eax_1;
                            if (eax_1 == 0) {
                                goto bb0x4011a4;
                            }
                            else {
                                eax = CreateFileA(); /* Warning: also results in esp_8 */
                                local12 = esp_8;
                                global_0x0040308d = eax;
                                if (eax == -1) {
                                    goto bb0x4011a4;
                                }
                                else {
                                    local2 = *0x40308d;
                                    SetFilePointer(local2, 186, 0, 0);
                                    local6 = *0x40308d;
                                    WriteFile(local6, 0x403048, 4, 0x403091, 0);
                                    local2 = *0x40308d;
                                    SetFilePointer(local2, 196, 0, 0);
                                    local6 = *0x40308d;
                                    WriteFile(local6, 0x40304c, 4, 0x403091, 0);
                                    local2 = *0x40308d;
                                    SetFilePointer(local2, 221, 0, 0);
                                    local6 = *0x40308d;
                                    WriteFile(local6, 0x403050, 4, 0x403091, 0);
                                    local2 = *0x40308d;
                                    SetFilePointer(local2, 247, 0, 0);
                                    local6 = *0x40308d;
                                    WriteFile(local6, 0x403054, 4, 0x403091, 0);
                                    local5 = *0x40308d;
                                    CloseHandle(local5);
                                    esp = MessageBoxA(0, "DONE! (^_^)", "ROXOR-2A SETUP", 0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    local0 = global_0x00403016;
    FreeLibrary(*(esp - 4));
    local0 = global_0x0040301a;
    FreeLibrary(*(esp - 4));
    local0 = global_0x0040301e;
    FreeLibrary(*(esp - 4));
    local0 = 0;
    ExitProcess(*(esp - 4));
    return;
}

/** address: 0x00401218 */
void __imp_LoadLibraryA(LPCSTR param1)
{
    LoadLibraryA(param1);
    return;
}

/** address: 0x00401212 */
void __imp_GetProcAddress(HANDLE param1, char *param2)
{
    GetProcAddress(param1, param2);
    return;
}

/** address: 0x00401200 */
void __imp_CreateFileA()
{
    CreateFileA();
    return;
}

/** address: 0x0040121e */
void __imp_SetFilePointer(HANDLE param1, LONG param2, PLONG param3, DWORD param4)
{
    SetFilePointer(param1, param2, param3, param4);
    return;
}

/** address: 0x00401224 */
void __imp_WriteFile(HANDLE param1, LPCVOID param2, DWORD param3, LPDWORD param4, LPOVERLAPPED param5)
{
    WriteFile(param1, param2, param3, param4, param5);
    return;
}

/** address: 0x004011fa */
void __imp_CloseHandle(HANDLE param1)
{
    CloseHandle(param1);
    return;
}


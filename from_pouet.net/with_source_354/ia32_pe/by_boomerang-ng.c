int global_0x00403009 = 0;
__size32 global_0x0040304e = 0;// 4 bytes
void _start();
void __imp_LoadLibraryA(LPCSTR param1);
void __imp_GetProcAddress(HANDLE param1, char *param2);
void __imp_CreateFileA();
void __imp_SetFilePointer(HANDLE param1, LONG param2, PLONG param3, DWORD param4);
void __imp_WriteFile(HANDLE param1, LPCVOID param2, DWORD param3, LPDWORD param4, LPOVERLAPPED param5);
void __imp_CloseHandle(HANDLE param1);
void __imp_MessageBoxA(HWND param1, LPCSTR param2, LPCSTR param3, UINT param4);
void __imp_FreeLibrary(int param1);
void __imp_ExitProcess(UINT param1);

/** address: 0x00401000 */
void _start()
{
    __size32 eax; 		// r24
    FARPROC eax_1; 		// r24
    int esp; 		// r28
    void *esp_1; 		// r28{0}
    void *esp_2; 		// r28{0}
    void *esp_3; 		// r28{0}
    LPCSTR local0; 		// m[esp - 4]
    union { __size32; HANDLE; } local1; 		// m[esp - 8]
    void *local12; 		// esp{0}
    union { __size32; HANDLE; } local2; 		// m[esp - 44]
    DWORD local5; 		// m[esp - 32]
    union { __size32; HANDLE; } local6; 		// m[esp - 48]

    eax = LoadLibraryA("kernel32"); /* Warning: also results in esp_1 */
    local12 = esp_1;
    global_0x00403009 = eax;
    if (eax == 0) {
bb0x401089:
        esp = local12;
        local0 = 0;
        local1 = 0x403019;
        *(__size32*)(esp - 12) = 0x403034;
        *(__size32*)(esp - 16) = 0;
        esp = MessageBoxA(*(esp - 16), *(esp - 12), *(esp - 8), *(esp - 4));
    }
    else {
        local1 = *0x403009;
        eax_1 = GetProcAddress(local1, "WinExec"); /* Warning: also results in esp_2 */
        local12 = esp_2;
        *(union { FARPROC; __size32; }*)0x403015 = eax_1;
        if (eax_1 == 0) {
            goto bb0x401089;
        }
        else {
            eax = CreateFileA(); /* Warning: also results in esp_3 */
            local12 = esp_3;
            global_0x0040304e = eax;
            if (eax == -1) {
                goto bb0x401089;
            }
            else {
                local2 = *0x40304e;
                SetFilePointer(local2, 49, 0, 0);
                local6 = *0x40304e;
                WriteFile(local6, 0x403015, 4, 0x403052, 0);
                local5 = *0x40304e;
                CloseHandle(local5);
                esp = MessageBoxA(0, "DONE! (^_^)", "XOROX-KO SETUP", 0);
            }
        }
    }
    local0 = global_0x00403009;
    FreeLibrary(*(esp - 4));
    local0 = 0;
    ExitProcess(*(esp - 4));
    return;
}

/** address: 0x004010e8 */
void __imp_LoadLibraryA(LPCSTR param1)
{
    LoadLibraryA(param1);
    return;
}

/** address: 0x004010e2 */
void __imp_GetProcAddress(HANDLE param1, char *param2)
{
    GetProcAddress(param1, param2);
    return;
}

/** address: 0x004010d0 */
void __imp_CreateFileA()
{
    CreateFileA();
    return;
}

/** address: 0x004010ee */
void __imp_SetFilePointer(HANDLE param1, LONG param2, PLONG param3, DWORD param4)
{
    SetFilePointer(param1, param2, param3, param4);
    return;
}

/** address: 0x004010f4 */
void __imp_WriteFile(HANDLE param1, LPCVOID param2, DWORD param3, LPDWORD param4, LPOVERLAPPED param5)
{
    WriteFile(param1, param2, param3, param4, param5);
    return;
}

/** address: 0x004010ca */
void __imp_CloseHandle(HANDLE param1)
{
    CloseHandle(param1);
    return;
}

/** address: 0x004010c4 */
void __imp_MessageBoxA(HWND param1, LPCSTR param2, LPCSTR param3, UINT param4)
{
    MessageBoxA(param1, param2, param3, param4);
    return;
}

/** address: 0x004010dc */
void __imp_FreeLibrary(int param1)
{
    FreeLibrary(param1);
    return;
}

/** address: 0x004010d6 */
void __imp_ExitProcess(UINT param1)
{
    ExitProcess(param1);
    return;
}


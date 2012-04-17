__size32 global1 = 0;// 4 bytes
__size32 global4 = 0;// 4 bytes
__size32 global6 = 0;// 4 bytes

// address: 0x401000
void _start() {
    __size32 eax; 		// r24
    int esp; 		// r28
    void *esp_1; 		// r28{6}
    void *esp_2; 		// r28{18}
    void *esp_3; 		// r28{40}
    LPCSTR local0; 		// m[esp - 4]
    HANDLE local1; 		// m[esp - 8]
    void *local13; 		// esp_1{122}
    HANDLE local2; 		// m[esp - 44]
    HANDLE local6; 		// m[esp - 48]
    HANDLE local9; 		// m[esp - 32]

    eax = LoadLibraryA("kernel32"); /* Warning: also results in esp_1 */
    local13 = esp_1;
    global1 = eax;
    if (eax == 0) {
L3:
        esp_1 = local13;
        *(__size32*)(esp_1 - 4) = 0;
        *(__size32*)(esp_1 - 8) = 0x403019;
        *(__size32*)(esp_1 - 12) = 0x403034;
        *(__size32*)(esp_1 - 16) = 0;
        esp = MessageBoxA(*(esp_1 - 16), *(esp_1 - 12), *(esp_1 - 8), *(esp_1 - 4));
    } else {
        local1 = *0x403009;
        eax = GetProcAddress(local1, "WinExec"); /* Warning: also results in esp_2 */
        local13 = esp_2;
        global4 = eax;
        if (eax == 0) {
            goto L3;
        } else {
            eax = CreateFileA(); /* Warning: also results in esp_3 */
            local13 = esp_3;
            global6 = eax;
            if (eax + 1 == 0) {
                goto L3;
            } else {
                local2 = *0x40304e;
                SetFilePointer(local2, 49, 0, 0);
                local6 = *0x40304e;
                WriteFile(local6, 0x403015, 4, 0x403052, 0);
                local9 = *0x40304e;
                CloseHandle(local9);
                esp = MessageBoxA(0, "DONE! (^_^)", "XOROX-KO SETUP", 0);
            }
        }
    }
    local0 = global1;
    FreeLibrary(*(esp - 4));
    local0 = 0;
    ExitProcess(*(esp - 4));
    return;
}


__size32 global1 = 0;// 4 bytes
__size32 global4 = 0;// 4 bytes
__size32 global6 = 0;// 4 bytes
__size32 global8 = 0;// 4 bytes
__size32 global10 = 0;// 4 bytes
__size32 global12 = 0;// 4 bytes
__size32 global14 = 0;// 4 bytes
__size32 global16 = 0;// 4 bytes

// address: 0x401000
void _start() {
    __size32 eax; 		// r24
    int esp; 		// r28
    void *esp_1; 		// r28{6}
    void *esp_2; 		// r28{16}
    void *esp_3; 		// r28{26}
    void *esp_4; 		// r28{38}
    void *esp_5; 		// r28{50}
    void *esp_6; 		// r28{62}
    void *esp_7; 		// r28{74}
    void *esp_8; 		// r28{96}
    LPCSTR local0; 		// m[esp - 4]
    HANDLE local1; 		// m[esp - 8]
    void *local13; 		// esp_1{268}
    HANDLE local2; 		// m[esp - 44]
    HANDLE local6; 		// m[esp - 48]
    HANDLE local9; 		// m[esp - 32]

    eax = LoadLibraryA("kernel32"); /* Warning: also results in esp_1 */
    local13 = esp_1;
    global1 = eax;
    if (eax == 0) {
L5:
        esp_1 = local13;
        *(__size32*)(esp_1 - 4) = 0;
        *(__size32*)(esp_1 - 8) = 0x403058;
        *(__size32*)(esp_1 - 12) = 0x403073;
        *(__size32*)(esp_1 - 16) = 0;
        esp = MessageBoxA(*(esp_1 - 16), *(esp_1 - 12), *(esp_1 - 8), *(esp_1 - 4));
    } else {
        eax = LoadLibraryA("user32"); /* Warning: also results in esp_2 */
        local13 = esp_2;
        global4 = eax;
        if (eax == 0) {
            goto L5;
        } else {
            eax = LoadLibraryA("gdi32"); /* Warning: also results in esp_3 */
            local13 = esp_3;
            global6 = eax;
            if (eax == 0) {
                goto L5;
            } else {
                local1 = *0x403016;
                eax = GetProcAddress(local1, "LoadLibraryA"); /* Warning: also results in esp_4 */
                local13 = esp_4;
                global8 = eax;
                if (eax == 0) {
                    goto L5;
                } else {
                    local1 = *0x40301a;
                    eax = GetProcAddress(local1, "GetDC"); /* Warning: also results in esp_5 */
                    local13 = esp_5;
                    global10 = eax;
                    if (eax == 0) {
                        goto L5;
                    } else {
                        local1 = *0x40301e;
                        eax = GetProcAddress(local1, "SetPixel"); /* Warning: also results in esp_6 */
                        local13 = esp_6;
                        global12 = eax;
                        if (eax == 0) {
                            goto L5;
                        } else {
                            local1 = *0x40301a;
                            eax = GetProcAddress(local1, "ReleaseDC"); /* Warning: also results in esp_7 */
                            local13 = esp_7;
                            global14 = eax;
                            if (eax == 0) {
                                goto L5;
                            } else {
                                eax = CreateFileA(); /* Warning: also results in esp_8 */
                                local13 = esp_8;
                                global16 = eax;
                                if (eax + 1 == 0) {
                                    goto L5;
                                } else {
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
                                    local9 = *0x40308d;
                                    CloseHandle(local9);
                                    esp = MessageBoxA(0, "DONE! (^_^)", "ROXOR-2A SETUP", 0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    local0 = global1;
    FreeLibrary(*(esp - 4));
    local0 = global4;
    FreeLibrary(*(esp - 4));
    local0 = global6;
    FreeLibrary(*(esp - 4));
    local0 = 0;
    ExitProcess(*(esp - 4));
    return;
}


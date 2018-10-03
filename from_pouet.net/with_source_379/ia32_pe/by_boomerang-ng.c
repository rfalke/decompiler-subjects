int global_0x004020b4 = 0;
int global_0x004020b8 = 0;
int global_0x004020bc = 0;
int global_0x004020cc = 0;
__size32 global_0x004020d0 = 0;// 4 bytes
__size32 global_0x004020dc = 0;// 4 bytes
__size32 global_0x00402100 = 0;// 4 bytes
int global_0x00402104 = 0;
__size32 global_0x00402108 = 0;// 4 bytes
int global_0x0040210c = 0;
__size32 global_0x0040211c = 0;// 4 bytes
__size32 global_0x00402120 = 0;// 4 bytes
__size32 global_0x00402124 = 0;// 4 bytes
__size8 proc_0x00401000();
void proc_0x00401020();
void proc_0x00401052();
void _start();

/** address: 0x00401000 */
__size8 proc_0x00401000()
{
    unsigned char bl; 		// r11
    unsigned char bl_1; 		// r11{0}
    unsigned char bl_2; 		// r11{0}
    __size32 edx; 		// r26
    union { __size32; unsigned char *; } edx_1; 		// r26{0}
    unsigned char local0; 		// bl_1{0}

    edx = global_0x00402104;
    bl = 0;
    local0 = bl;
    do {
        bl_1 = local0;
        edx_1 = edx;
        if (bl_1 >= (unsigned char)-128) {
            *(unsigned char*)edx_1 = bl_1 * 2;
        }
        *(unsigned char*)(edx_1 + 1) = bl_1 * 2;
        *(unsigned char*)(edx_1 + 2) = bl_1 * 2;
        edx = edx_1 + 4;
        bl_2 = bl_1 + 1;
        local0 = bl_2;
    } while (bl_1 != -1);
    return bl_1 * 2; /* WARNING: Also returning: bl := bl_1 + 1, edx := edx_1 + 4 */
}



/** address: 0x00401230 */
void _start()
{
    __size8 al; 		// r8
    __size8 bl; 		// r11
    __size32 eax; 		// r24
    HWND eax_1; 		// r24{0}
    __size32 eax_4; 		// r24{0}
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{0}
    __size32 ebx_2; 		// r27{0}
    int ecx; 		// r25
    union { __size32; __size16 *; } edi; 		// r31
    int edx; 		// r26
    int esp; 		// r28
    LPCWSTR local0; 		// m[esp - 12]
    HINSTANCE local1; 		// m[esp - 16]
    HINSTANCE local12; 		// m[esp - 20]
    int local14; 		// m[esp - 4]
    int local15; 		// m[esp - 8]
    __size32 local17; 		// ebx_1{0}

    eax = GlobalAlloc(); /* Warning: also results in esp */
    if (eax != 0) {
        global_0x0040210c = eax;
        global_0x00402104 = eax;
        global_0x00402100 = eax + 2000;
        global_0x0040211c = eax + 0x62250;
        global_0x00402120 = eax + 0x92f90;
        global_0x00402124 = eax + 0xab630;
        ebx = 0x7a11f;
        local17 = ebx;
        do {
            ebx_1 = local17;
            edi = *0x40210c;
            *(__size16*)edi = 0;
            ebx_2 = ebx_1 - 1;
            local17 = ebx_2;
        } while (ebx_1 != 1);
        eax = GetModuleHandleW(0);
        global_0x004020b4 = eax;
        eax = LoadIconW(0, 0x7f00);
        global_0x004020b8 = eax;
        eax = LoadCursorW(0, 0x7f00);
        global_0x004020bc = eax;
        eax = RegisterClassW(); /* Warning: also results in esp */
        if (eax != 0) {
            eax_1 = CreateWindowExW(0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 540, 400, 0, 0, global_0x004020b4, 0); /* Warning: also results in esp */
            if (eax_1 != 0) {
                global_0x004020cc = eax_1;
                eax_4 = GetDC(); /* Warning: also results in ecx */
                global_0x004020d0 = eax_4;
                al = proc_0x00401000(); /* Warning: also results in bl, edx */
                proc_0x00401020(0, al, bl, eax_4, ecx, edx, ebx_1 - 1, edi + 2, LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1), 0xf4240, 0, 0x4020a4, eax_1, pc, 0, 0, 400, 540, 0x8000, 0x8000, 0x10cf0000, 0x402012, 0x402000, 0, pc);
            }
        }
    }
    local14 = 16;
    local15 = 0;
    local0 = 0x40204c;
    local1 = 0;
    MessageBoxW(*(esp - 16), *(esp - 12), *(esp - 8), *(esp - 4));
    *(__size32*)(%esp - 4) = global_0x004020d0;
    *(__size32*)(%esp - 4) = global_0x004020cc;
    ReleaseDC();
    *(__size32*)(%esp - 4) = global_0x0040210c;
    GlobalFree();
    *(__size32*)(%esp - 4) = global_0x004020dc;
    ExitProcess(*(%esp + 4));
    return;
}


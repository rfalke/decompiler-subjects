int global_0x0040208a = 0;
int global_0x0040208e = 0;
int global_0x00402092 = 0;
int global_0x004020a2 = 0;
__size32 global_0x004020a6 = 0;// 4 bytes
__size32 global_0x004020b2 = 0;// 4 bytes
__size32 global_0x004020d6 = 0;// 4 bytes
int global_0x004020da = 0;
__size32 global_0x004020de = 0;// 4 bytes
int global_0x004020e2 = 0;
__size8 proc_0x00401000();
void proc_0x0040101b();
void _start();

/** address: 0x00401000 */
__size8 proc_0x00401000()
{
    char bl; 		// r11
    char bl_1; 		// r11{3}
    char bl_4; 		// r11{9}
    __size32 edx; 		// r26
    union { __size32; char *; } edx_1; 		// r26{4}
    char local0; 		// bl_1{3}

    edx = global_0x004020da;
    bl = 0;
    local0 = bl;
    do {
        bl_1 = local0;
        edx_1 = edx;
        *(char*)edx_1 = (unsigned char)bl_1 >> 1;
        *(char*)(edx_1 + 1) = bl_1;
        *(char*)(edx_1 + 2) = bl_1;
        edx = edx_1 + 4;
        bl_4 = bl_1 + 1;
        local0 = bl_4;
    } while (bl_1 != -1);
    return (unsigned char)bl_1 >> 1; /* WARNING: Also returning: bl := bl_1 + 1, edx := edx_1 + 4 */
}

/** address: 0x0040101b */
void proc_0x0040101b()
{
}

/** address: 0x00401172 */
void _start()
{
    __size8 al; 		// r8
    __size8 bl; 		// r11
    __size32 eax; 		// r24
    HWND eax_1; 		// r24{15}
    __size32 eax_4; 		// r24{18}
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    LPCWSTR local0; 		// m[esp - 12]
    HINSTANCE local1; 		// m[esp - 16]
    HINSTANCE local12; 		// m[esp - 20]
    int local14; 		// m[esp - 4]
    int local15; 		// m[esp - 8]

    eax = GlobalAlloc(); /* Warning: also results in esp */
    if (eax != 0) {
        global_0x004020e2 = eax;
        global_0x004020da = eax;
        global_0x004020d6 = eax + 2000;
        eax = GetModuleHandleW(0);
        global_0x0040208a = eax;
        eax = LoadIconW(0, 0x7f00);
        global_0x0040208e = eax;
        eax = LoadCursorW(0, 0x7f00);
        global_0x00402092 = eax;
        eax = RegisterClassW(); /* Warning: also results in esp */
        if (eax != 0) {
            eax_1 = CreateWindowExW(0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 640, 500, 0, 0, global_0x0040208a, 0); /* Warning: also results in esp */
            if (eax_1 != 0) {
                global_0x004020a2 = eax_1;
                eax_4 = GetDC(); /* Warning: also results in ecx */
                global_0x004020a6 = eax_4;
                al = proc_0x00401000(); /* Warning: also results in bl, edx */
                proc_0x0040101b(al, bl, eax_4, ecx, edx, LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1), 0x7a120, 0, 0x40207a, eax_1, pc, 0, 0, 500, 640, 0x8000, 0x8000, 0x10cf0000, 0x402012, 0x402000, 0, pc);
            }
        }
    }
    local14 = 16;
    local15 = 0;
    local0 = 0x402022;
    local1 = 0;
    MessageBoxW(*(esp - 16), *(esp - 12), *(esp - 8), *(esp - 4));
    *(__size32*)(%esp - 4) = global_0x004020a6;
    *(__size32*)(%esp - 4) = global_0x004020a2;
    ReleaseDC();
    *(__size32*)(%esp - 4) = global_0x004020e2;
    GlobalFree();
    *(__size32*)(%esp - 4) = global_0x004020b2;
    ExitProcess(*(%esp + 4));
    return;
}


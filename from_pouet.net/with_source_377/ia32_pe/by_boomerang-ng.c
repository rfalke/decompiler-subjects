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
union { void *; __size32; } global_0x00402118;
union { void *; __size32; } global_0x0040211c;
unsigned int global_0x00402136 = 0;
void proc_0x00401000();
__size32 proc_0x00401017(int param1);
void proc_0x00401088();
void _start(int param1);

/** address: 0x00401000 */
void proc_0x00401000()
{
    __size8 bl; 		// r11
    __size8 bl_1; 		// r11{3}
    __size32 edx; 		// r26

    edx = global_0x00402104;
    bl = 0;
    do {
        bl_1 = bl;
        *(__size8*)edx = bl_1;
        *(__size8*)(edx + 1) = bl_1;
        *(__size8*)(edx + 2) = bl_1;
        edx += 4;
        bl = bl_1 + 1;
    } while (bl_1 != -1);
    return;
}

/** address: 0x00401017 */
__size32 proc_0x00401017(int param1)
{
    int bh; 		// r15
    unsigned int bl; 		// r11
    short bx; 		// r3
    char dh; 		// r14
    short di; 		// r7
    char dl; 		// r10
    unsigned int dx; 		// r2
    int ebx; 		// r27
    int ebx_1; 		// r27{19}
    int ebx_2; 		// r27{52}
    int ecx; 		// r25
    int ecx_1; 		// r25{17}
    int ecx_2; 		// r25{22}
    union { __size32; unsigned char *; } edi; 		// r31
    union { __size32; unsigned char *; } edi_1; 		// r31{3}
    int edi_4; 		// r31{11}
    int edi_5; 		// r31{33}
    int edi_7; 		// r31{20}
    int edx; 		// r26
    int edx_1; 		// r26{18}
    int edx_2; 		// r26{26}
    int local0; 		// m[esp - 2]
    int local1; 		// ecx_1{17}
    int local2; 		// ebx_1{19}
    int local3; 		// edi_7{20}
    int local4; 		// param1{21}
    int local5; 		// edx{48}
    int local6; 		// edi{49}
    int local7; 		// local0{50}

    edi_1 = *0x402118;
    *(unsigned char*)edi_1 = global_0x00402136;
    ebx = 0;
    bh = 0 >> 8 & 0xff;
    bl = 0;
    bx = 0;
    ecx = 0;
    edx = 0;
    edi_4 = 0;
    di = 0;
    local1 = ecx;
    local2 = ebx;
    local3 = edi_4;
    local4 = param1;
    do {
        ecx_1 = local1;
        edx_1 = edx;
        ebx_1 = local2;
        edi_7 = local3;
        param1 = local4;
        ecx_2 = ecx_1 & ~0xff | 2;
        dx = 1275;
        dh = 1275 >> 8 & 0xff;
        dl = (unsigned char) edx_1;
        edx_2 = edx_1 & ~0xffff | 1275;
        local1 = ecx_2;
        local5 = edx_2;
        local5 = edx_2;
        local6 = edi_7;
        local7 = param1;
        if ( ~(bl > (unsigned char) edx_1 || bl < (1275 >> 8 & 0xff))) {
            local0 = ebx_1;
            bl = bl >> (ecx_1 & ~0xff | 2);
            bh = (unsigned int)bh >> (ecx_1 & ~0xff | 2);
            bx = bh << 8 | (bx & 0xff00 | (bl >> (ecx_1 & ~0xff | 2))) >> 0 & 0xff;
            di = edi_1 + bx;
            edi_5 = (((((edi_7 >> 16 & 0xffff) << 8 | ((bh))) >> 16 & 0xffff) << 8 | ((bh) << 6)) >> 16 & 0xffff) << 8 | (edi_1 + bx);
            tmpb = *(global_0x00402118 + edi_5 - 0x21c4) & (unsigned char) edx_1;
            local6 = edi_5;
            local6 = edi_5;
            local7 = local0;
            local7 = local0;
            if (tmpb == 0) {
                edx = (edx_1 & ~0xffff | 1275) & ~0xffff | ((unsigned short) ebx_1);
                dh = ((unsigned short) ebx_1 & 0xf0f) >> 8 & 0xff;
                dx = (unsigned short) ebx_1 & 0xf0f & 0xff00 | (edi_1 + dh);
                edx = (((edx_1 & ~0xffff | 1275) & ~0xffff | ((unsigned short) ebx_1)) & ~0xffff | ((unsigned short) ebx_1 & 0xf0f)) & ~0xff | (edi_1 + dh);
                dx = ((unsigned short) ebx_1 & 0xf0f & 0xff00 | (edi_1 + dh)) << (ecx_1 & ~0xff | 2);
                dh = dx >> 8 & 0xff;
                dl = (unsigned char) edx;
                edx = edx & ~0xffff | (dx);
                local5 = edx;
            }
        }
        edx = local5;
        edi = local6;
        local0 = local7;
        *(char*)(global_0x0040211c + ebx_1) = dl;
        ebx_2 = ebx_1 - 1;
        bh = ebx_1 - 1 >> 8 & 0xff;
        bl = (unsigned char) ebx_1 - 1;
        bx = (unsigned short) ebx_1 - 1;
        local2 = ebx_2;
        local3 = edi;
        local4 = local0;
    } while (ebx_1 != 0);
    return 0; /* WARNING: Also returning: dx_1 := dx, bx := (unsigned short) ebx_1 - 1, di := di, al := 0, cl := 2, dl := dl, bl_1 := (unsigned char) ebx_1 - 1, dh := dh, bh_1 := ebx_1 - 1 >> 8 & 0xff, ecx := ecx_1 & ~0xff | 2, edx := edx, ebx := ebx_1 - 1, ebp := 0, esi := global_0x0040211c, edi := edi */
}

/** address: 0x00401088 */
void proc_0x00401088()
{
}

/** address: 0x004011f5 */
void _start(int param1)
{
    __size8 al; 		// r8
    __size8 bh; 		// r15
    __size8 bl; 		// r11
    __size16 bx; 		// r3
    __size8 cl; 		// r9
    __size8 dh; 		// r14
    __size16 di; 		// r7
    __size8 dl; 		// r10
    __size16 dx; 		// r2
    __size32 eax; 		// r24
    HWND eax_1; 		// r24{18}
    __size32 eax_2; 		// r24{21}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    int ecx; 		// r25
    __size32 edi; 		// r31
    int edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28
    void *esp_1; 		// r28{3}
    void *esp_2; 		// r28{16}
    void *esp_3; 		// r28{18}
    LPCWSTR local0; 		// m[esp - 12]
    HINSTANCE local1; 		// m[esp - 16]
    HINSTANCE local12; 		// m[esp - 20]
    int local15; 		// m[esp - 4]
    int local16; 		// m[esp - 8]
    void *local18; 		// esp{48}

    eax = GlobalAlloc(); /* Warning: also results in esp_1 */
    local18 = esp_1;
    if (eax != 0) {
        global_0x0040210c = eax;
        global_0x00402104 = eax;
        global_0x00402100 = eax + 2000;
        global_0x0040211c = eax + 0x62250;
        global_0x00402118 = eax + 0x92f90;
        eax = GetModuleHandleW(0);
        global_0x004020b4 = eax;
        eax = LoadIconW(0, 0x7f00);
        global_0x004020b8 = eax;
        eax = LoadCursorW(0, 0x7f00);
        global_0x004020bc = eax;
        eax = RegisterClassW(); /* Warning: also results in esp_2 */
        local18 = esp_2;
        if (eax != 0) {
            eax_1 = CreateWindowExW(0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 540, 400, 0, 0, global_0x004020b4, 0); /* Warning: also results in esp_3 */
            local18 = esp_3;
            if (eax_1 != 0) {
                global_0x004020cc = eax_1;
                eax_2 = GetDC();
                global_0x004020d0 = eax_2;
                proc_0x00401000();
                eax = proc_0x00401017(param1); /* Warning: also results in dx, bx, di, al, cl, dl, bl, dh, bh, ecx, edx, ebx, ebp, esi, edi */
                proc_0x00401088(dx, bx, di, al, cl, dl, bl, dh, bh, eax, ecx, edx, ebx, ebp, esi, edi, LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1), 0xf4240, 0, 0x4020a4, eax_1, pc, param1, 0, 0, 400, 540, 0x8000, 0x8000, 0x10cf0000, 0x402012, 0x402000, 0, pc);
            }
        }
    }
    esp = local18;
    local15 = 16;
    local16 = 0;
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


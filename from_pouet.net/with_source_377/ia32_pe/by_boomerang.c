unsigned int global1 = 0;
__size32 global5 = 0;// 4 bytes
__size32 global6 = 0;// 4 bytes
__size32 global7 = 0;// 4 bytes
__size32 global9 = 0;// 4 bytes
__size32 global8 = 0;// 4 bytes
HINSTANCE global10 = 0;
__size32 global11 = 0;// 4 bytes
__size32 global12 = 0;// 4 bytes
__size32 global16 = 0;// 4 bytes
__size32 global17 = 0;// 4 bytes
__size32 global24 = 0;// 4 bytes
__size32 global27 = 0;// 4 bytes

__size32 proc2(unsigned int param1);
void proc3();
void _start(unsigned int param1);

// address: 0x401000
void proc1() {
    __size8 bl; 		// r11
    __size8 bl_1; 		// r11{25}
    __size8 *edx; 		// r26

    edx = *0x402104;
    bl = 0;
    do {
        bl_1 = bl;
        *(__size8*)edx = bl_1;
        *(__size8*)(edx + 1) = bl_1;
        *(__size8*)(edx + 2) = bl_1;
        edx += 4;
        bl = bl_1 + 1;
    } while (bl_1 + 1 != 0);
    return;
}

// address: 0x401017
__size32 proc2(unsigned int param1) {
    int bh; 		// r15
    unsigned int bl; 		// r11
    short bx; 		// r3
    char dh; 		// r14
    int dh_1; 		// r14{89}
    short di; 		// r7
    void *di_1; 		// r7
    char dl; 		// r10
    unsigned int dx; 		// r2
    unsigned int dx_1; 		// r2{42}
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{126}
    int ecx; 		// r25
    int ecx_1; 		// r25{124}
    unsigned char *edi; 		// r31
    int edi_1; 		// r31
    int edx; 		// r26
    int edx_1; 		// r26{87}
    int edx_2; 		// r26{96}
    int edx_3; 		// r26{125}
    void *esi; 		// r30
    unsigned int local0; 		// m[esp - 2]
    unsigned int local1; 		// m[esp - 2]{152}
    unsigned int local2; 		// local1{151}
    union { short x7; void * x8; } local3; 		// di{137}
    unsigned int local4; 		// local1{152}

    edi = *0x402118;
    *(unsigned char*)edi = global1;
    ebx = 0;
    bh = 0 >> 8 & 0xff;
    bl = 0;
    bx = 0;
    ecx = 0;
    edx = 0;
    edi_1 = 0;
    di = 0;
    local2 = param1;
    do {
        ecx_1 = ecx;
        edx_3 = edx;
        ebx_1 = ebx;
        local1 = local2;
        esi = *0x402118;
        ecx = ecx_1 >> 8 & 0xffffff | 2;
        dx_1 = 1275;
        dh = 1275 >> 8 & 0xff;
        dl = (unsigned char) edx_3;
        edx = edx_3 >> 16 & 0xffff | 1275;
        local3 = di;
        local3 = di;
        local4 = local1;
        local4 = local1;
        if ( !(bl > (unsigned char) edx_3 || bl < (1275 >> 8 & 0xff))) {
            local0 = ebx_1;
            bl = bl >> (ecx_1 >> 8 & 0xffffff | 2);
            bh = (unsigned int)bh >> (ecx_1 >> 8 & 0xffffff | 2);
            bx = (bx >> 8 & 0xff | (bl)) & 0xff | bh * 256;
            di_1 = edi + bx;
            edi_1 = ((edi_1 >> 16 & 0xffff | ((bh))) >> 16 & 0xffff | ((bh) * 64)) >> 16 & 0xffff | (edi + bx);
            tmpb = *(esi + edi_1 - 0x21c4) & (unsigned char) edx_3;
            local3 = di_1;
            local3 = di_1;
            local4 = local0;
            local4 = local0;
            if (tmpb <= 0) {
                edx_1 = (edx_3 >> 16 & 0xffff | 1275) >> 16 & 0xffff | ((unsigned short) ebx_1);
                dh_1 = ((unsigned short) ebx_1 & 0xf0f) >> 8 & 0xff;
                dx = ((unsigned short) ebx_1 & 0xf0f) >> 8 & 0xff | (edi + dh_1);
                edx_2 = (edx_1 >> 16 & 0xffff | ((unsigned short) ebx_1 & 0xf0f)) >> 8 & 0xffffff | (edi + dh_1);
                dx_1 = dx << (ecx_1 >> 8 & 0xffffff | 2);
                dh = dx_1 >> 8 & 0xff;
                dl = (unsigned char) edx_2;
                edx = edx_2 >> 16 & 0xffff | (dx_1);
            }
        }
        di = local3;
        local1 = local4;
        esi = *0x40211c;
        *(char*)(esi + ebx_1) = dl;
        ebx = ebx_1 - 1;
        bh = ebx_1 - 1 >> 8 & 0xff;
        bl = (unsigned char) ebx_1 - 1;
        bx = (unsigned short) ebx_1 - 1;
        local2 = local1;
    } while (ebx_1 != 0);
    return 0; /* WARNING: Also returning: esi := esi, dx := dx_1, bx := (unsigned short) ebx_1 - 1, di := di, al := 0, cl := 2, dl := dl, bl_1 := (unsigned char) ebx_1 - 1, dh := dh, bh_1 := ebx_1 - 1 >> 8 & 0xff, ecx := ecx_1 >> 8 & 0xffffff | 2, edx := edx, ebx := ebx_1 - 1, ebp := 0, edi_1 := edi_1 */
}

// address: 0x401088
void proc3() {
}

// address: 0x4011f5
void _start(unsigned int param1) {
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
    __size32 eax_1; 		// r24{87}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    int ecx; 		// r25
    __size32 edi; 		// r31
    int edx; 		// r26
    __size32 esi; 		// r30
    void *esp_1; 		// r28{8}
    void *esp_2; 		// r28{56}
    void *esp_3; 		// r28{87}
    void *local18; 		// esp_1{192}

    eax = GlobalAlloc(); /* Warning: also results in esp_1 */
    local18 = esp_1;
    if (eax != 0) {
        global5 = eax;
        global6 = eax;
        global7 = eax + 2000;
        global8 = eax + 0x62250;
        global9 = eax + 0x92f90;
        eax = GetModuleHandleW(0);
        global10 = eax;
        eax = LoadIconW(0, 0x7f00);
        global11 = eax;
        eax = LoadCursorW(0, 0x7f00);
        global12 = eax;
        eax = RegisterClassW(); /* Warning: also results in esp_2 */
        local18 = esp_2;
        if (eax != 0) {
            eax_1 = CreateWindowExW(0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 540, 400, 0, 0, global10, 0); /* Warning: also results in esp_3 */
            local18 = esp_3;
            if (eax_1 != 0) {
                global16 = eax_1;
                eax = GetDC();
                global17 = eax;
                proc1();
                eax = proc2(param1); /* Warning: also results in esi, dx, bx, di, al, cl, dl, bl, dh, bh, ecx, edx, ebx, ebp, edi */
                proc3(pc, 0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 540, 400, 0, 0, param1, pc, eax_1, 0x4020a4, 0, 0xf4240, dx, bx, di, al, cl, dl, bl, dh, bh, eax, ecx, edx, ebx, ebp, esi, edi, LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1));
            }
        }
    }
    esp_1 = local18;
    *(__size32*)(esp_1 - 4) = 16;
    *(__size32*)(esp_1 - 8) = 0;
    *(__size32*)(esp_1 - 12) = 0x40204c;
    *(__size32*)(esp_1 - 16) = 0;
    MessageBoxW(*(esp_1 - 16), *(esp_1 - 12), *(esp_1 - 8), *(esp_1 - 4));
    *(__size32*)(esp - 4) = global17;
    *(__size32*)(esp - 4) = global16;
    ReleaseDC();
    *(__size32*)(esp - 4) = global5;
    GlobalFree();
    *(__size32*)(esp - 4) = global27;
    ExitProcess(*(esp + 4));
    return;
}


void proc_0x00401000(__size32 param1, __size32 param2);
__size32 proc_0x004010a0();
void _start(__size32 param2, unsigned int param2, __size32 param3);

/** address: 0x00401000 */
void proc_0x00401000(__size32 param1, __size32 param2)
{
    __size16 dx; 		// r2
    __size32 eax; 		// r24
    DWORD eax_1; 		// r24{4}
    HLOCAL eax_2; 		// r24{16}
    HLOCAL eax_3; 		// r24{16}
    HLOCAL eax_4; 		// r24{16}
    __size32 eax_5; 		// r24{18}
    __size32 eax_6; 		// r24{34}
    __size32 eax_7; 		// r24{34}
    int ebp; 		// r29
    __size32 ebx; 		// r27
    int ecx; 		// r25
    DWORD edi; 		// r31
    int edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28
    __size32 esp_1; 		// r28{6}
    unsigned int esp_10; 		// r28{1}
    unsigned int esp_11; 		// r28{1}
    __size32 esp_2; 		// r28{6}
    __size32 esp_3; 		// r28{6}
    __size32 esp_4; 		// r28{10}
    __size32 esp_5; 		// r28{10}
    __size32 esp_6; 		// r28{10}
    __size32 esp_7; 		// r28{37}
    __size32 esp_8; 		// r28{37}
    __size32 esp_9; 		// r28{37}
    __size32 local0; 		// m[esp - 4]
    __size32 local1; 		// m[esp - 8]
    int local10; 		// m[esp - 48]
    int local11; 		// m[esp - 52]
    __size32 local12; 		// m[esp - 56]
    unsigned int local13; 		// m[esp - 60]
    int local14; 		// m[esp_10 - 4]{6}
    int local15; 		// m[esp_10 - 4]{10}
    int local16; 		// m[esp_10 - 8]{6}
    int local17; 		// m[esp_10 - 8]{10}
    int local18; 		// m[esp_10 - 16]{6}
    int local19; 		// m[esp_10 - 16]{10}
    __size32 local2; 		// m[esp - 16]
    int local20; 		// m[esp_10 - 20]{6}
    int local21; 		// m[esp_10 - 20]{10}
    int local22; 		// m[esp_10 - 24]{6}
    int local23; 		// m[esp_10 - 24]{10}
    int local24; 		// m[esp_10 - 28]{6}
    int local25; 		// m[esp_10 - 28]{10}
    int local26; 		// m[esp_10 - 32]{6}
    int local27; 		// m[esp_10 - 32]{10}
    int local28; 		// m[esp_10 - 36]{6}
    int local29; 		// m[esp_10 - 36]{10}
    __size32 local3; 		// m[esp - 20]
    int local30; 		// m[esp_10 - 40]{6}
    int local31; 		// m[esp_10 - 40]{10}
    int local32; 		// m[esp_10 - 44]{6}
    int local33; 		// m[esp_10 - 44]{10}
    int local34; 		// m[esp_10 - 48]{6}
    int local35; 		// m[esp_10 - 48]{10}
    int local36; 		// m[esp_10 - 52]{6}
    int local37; 		// m[esp_10 - 52]{10}
    int local38; 		// m[esp_10 - 56]{6}
    int local39; 		// m[esp_10 - 56]{10}
    __size32 local4; 		// m[esp - 24]
    int local40; 		// m[esp_10 - 60]{6}
    int local41; 		// m[esp_10 - 60]{10}
    int local42; 		// %flags{6}
    int local43; 		// %flags{37}
    int local44; 		// %ZF{6}
    int local45; 		// %ZF{37}
    int local46; 		// %CF{6}
    int local47; 		// %CF{37}
    int local48; 		// m[esp - 12]
    int local5; 		// m[esp - 28]
    int local6; 		// m[esp - 32]
    int local7; 		// m[esp - 36]
    int local8; 		// m[esp - 40]
    DWORD local9; 		// m[esp - 44]

    eax_1 = GetLastError();
    eax = FormatMessageW(); /* Warning: also results in edx */
    (*0x2404)(eax, param1, edx, param2, esp_10 - 4, 0x2404, eax_1, SUBFLAGS32(esp_10 - 4, 8, (esp_10 - 12)), esp_10 == 12, (unsigned int)(esp_10 - 4) < 8, ebp, param1, ebx, esi, edi, 0, 0, esp_10 - 8, 1024, eax_1, 0, 0x1300, param1, pc);
    *(__size32*)(esp_1 - 4) = ebx;
    *(__size32*)(ebp - 8) = eax;
    (*esi)(eax, ecx, edx, ebx, ebp, esi, edi, <all>, local42, local44, local46, local14, local16, local18, local20, local22, local24, local26, local28, local30, local32, local34, local36, local38, local40);
    ecx = *(ebp - 8);
    edx = ecx + eax + ecx + eax + 0x2000;
    *(__size32*)(esp_4 - 4) = ecx + eax + ecx + eax + 0x2000;
    *(__size32*)(esp_4 - 8) = 64;
    eax_2 = LocalAlloc(*(esp_4 - 8), *(esp_4 - 4));
    ecx = *(ebp + 8);
    eax_5 = *(ebp - 4);
    *(__size32*)(esp_4 - 4) = eax_5;
    *(__size32*)(esp_4 - 8) = edi;
    *(__size32*)(esp_4 - 12) = ecx;
    *(__size32*)(esp_4 - 16) = ebx;
    *(__size32*)(esp_4 - 20) = 0x402080;
    *(HLOCAL*)(esp_4 - 24) = eax_2;
    wsprintfW();
    *(__size32*)(esp_4 - 4) = 0;
    *(__size32*)(esp_4 - 8) = 0x402234;
    *(HLOCAL*)(esp_4 - 12) = eax_2;
    *(__size32*)(esp_4 - 16) = 0;
    *(__size16*)(eax_2 + 0x800) = 0;
    ecx = MessageBoxW(*(esp_4 - 16), *(esp_4 - 12), *(esp_4 - 8), *(esp_4 - 4)); /* Warning: also results in edx */
    eax_6 = *(ebp - 4);
    *(__size32*)(esp_4 - 4) = eax_6;
    (*0x2462)(0, eax_6, ecx, edx, 0x2462, ebp, eax_2, edi, <all>, LOGICALFLAGS32(0), LOGICALFLAGS32(0), LOGICALFLAGS32(0), local15, local17, local19, local21, local23, local25, local27, local29, local31, local33, local35, local37, local39, local41);
    *(__size32*)(esp_7 - 4) = esi;
    (*ebx)(dx, eax, ecx, edx, ebx, ebp, esi, edi, <all>, local43, local45, local47, *(esp_10 - 4), *(esp_10 - 8), *(esp_10 - 16), *(esp_10 - 20), *(esp_10 - 24), *(esp_10 - 28), *(esp_10 - 32), *(esp_10 - 36), *(esp_10 - 40), *(esp_10 - 44), *(esp_10 - 48), *(esp_10 - 52), *(esp_10 - 56), *(esp_10 - 60));
    local0 = edi;
    ExitProcess(*(esp - 4));
    return;
}

/** address: 0x004010a0 */
__size32 proc_0x004010a0()
{
    int eax; 		// r24
    DWORD eax_1; 		// r24{2}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    __size32 esi_1; 		// r30{54}
    __size32 esi_2; 		// r30{54}
    __size32 esi_3; 		// r30{54}
    __size32 esi_4; 		// r30{55}
    __size32 esi_5; 		// r30{55}
    int esp; 		// r28
    __size32 esp_1; 		// r28{2}
    union { __size32; __size32 *; } esp_10; 		// r28{38}
    union { __size32; __size32 *; } esp_11; 		// r28{38}
    __size32 esp_12; 		// r28{44}
    union { __size32; __size32 *; } esp_13; 		// r28{54}
    __size32 esp_14; 		// r28{23}
    __size32 esp_15; 		// r28{23}
    __size32 esp_16; 		// r28{48}
    __size32 esp_17; 		// r28{48}
    __size32 esp_18; 		// r28{48}
    __size32 esp_19; 		// r28{1}
    __size32 esp_2; 		// r28{2}
    __size32 esp_20; 		// r28{1}
    __size32 esp_3; 		// r28{2}
    __size32 esp_4; 		// r28{18}
    __size32 esp_5; 		// r28{18}
    __size32 esp_6; 		// r28{18}
    __size32 esp_7; 		// r28{23}
    union { __size32; __size32 *; } esp_8; 		// r28{29}
    union { __size32; __size32 *; } esp_9; 		// r28{38}
    __size32 local0; 		// m[esp - 4]
    __size32 local1; 		// m[esp - 600]
    union { __size32 *; __size32; } local10; 		// esp{4}
    __size32 local11; 		// esp_7{23}
    __size32 local12; 		// esi{25}
    __size32 local13; 		// esp_16{48}
    __size32 local2; 		// m[esp - 604]
    __size32 local3; 		// m[esp - 608]
    unsigned int local4; 		// m[esp - 612]
    int local5; 		// m[esp_19 - 4]{0}
    int local6; 		// m[esp_19 - 600]{0}
    int local7; 		// m[esp_19 - 604]{0}
    int local8; 		// m[esp_19 - 608]{0}
    int local9; 		// m[esp_19 - 612]{0}

    (*0x2454)(0x2454, esp_19 - 4, 0, LOGICALFLAGS32(0), LOGICALFLAGS32(0), LOGICALFLAGS32(0), ecx, edx, edi, ebp, ebx, esi, edi, pc);
    local10 = esp_1;
    if (eax_1 == 0) {
        *(__size32*)(esp_1 - 4) = 128;
        *(__size32*)(esp_1 - 8) = edi;
        eax = SetFileAttributesW(); /* Warning: also results in ecx, edx */
        *(__size32*)(esp_1 - 12) = edi;
        (*ebx)(eax, ecx, edx, ebx, ebp, esi, <all>, LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1), LOGICALFLAGS32(eax_1), edi, *(esp_19 - 4), *(esp_19 - 600), *(esp_19 - 604), *(esp_19 - 608), *(esp_19 - 612));
        local10 = esp_4;
        local11 = esp_4;
        local12 = esi;
        if (eax != 0) {
bb0x4010ba:
            esp = local10;
            eax = 1;
            esi = *esp;
            ebx = *(esp + 4);
        }
        else {
            ebx = 0x23d6;
            do {
                esp_7 = local11;
                esi = local12;
                *(__size32*)(esp_7 - 4) = edi;
                eax = DeleteFileW(); /* Warning: also results in esp_8 */
                local10 = esp_8;
                if (eax != 0) {
                    goto bb0x4010ba;
                }
                else {
                    *(__size32*)(esp_7 - 8) = ebp - 592;
                    *(__size32*)(esp_7 - 12) = edi;
                    eax = FindFirstFileW();
                    flags = SUBFLAGS32(eax, -1, eax + 1);
                    if (eax != -1) {
                        *(__size32*)(esp_7 - 16) = eax;
                        eax = FindClose(); /* Warning: also results in ecx, edx, esp_12 */
                        local13 = esp_12;
bb0x401112:
                        esp_16 = local13;
                        *(__size32*)(esp_16 - 4) = 100;
                        (*ebx)(eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local5, local6, local7, local8, local9);
                        local11 = esp_13;
                        esi_4 = esi_1 + 1;
                        local12 = esi_4;
                    }
                    else {
                        eax = GetLastError(); /* Warning: also results in ecx, edx, esp_9 */
                        local10 = esp_9;
                        local13 = esp_9;
                        flags = SUBFLAGS32(eax, 2, eax - 2);
                        if (eax == 2) {
                            goto bb0x4010ba;
                        }
                        else {
                            goto bb0x401112;
                        }
                    }
                }
                return eax; /* WARNING: Also returning: ebx := ebx, esi := esi */
            } while (esi_1 + 1 < 10);
            esi = *esp_13;
            eax = 0;
            ebx = *(esp_13 + 4);
        }
    }
    else {
        goto bb0x4010ba;
    }
    return eax; /* WARNING: Also returning: ebx := ebx, esi := esi */
}

/** address: 0x00401130 */
void _start(__size32 param2, unsigned int param2, __size32 param3)
{
    __size32 eax; 		// r24
    __size32 eax_10; 		// r24{30}
    unsigned int eax_13; 		// r24{38}
    unsigned int eax_14; 		// r24{35}
    __size32 eax_17; 		// r24{49}
    unsigned int eax_18; 		// r24{41}
    LPWSTR eax_2; 		// r24{11}
    union { unsigned int; __size16 *; } eax_21; 		// r24{27}
    __size32 eax_3; 		// r24{14}
    __size32 eax_6; 		// r24{19}
    unsigned int eax_7; 		// r24{26}
    __size32 ebx; 		// r27
    int ecx; 		// r25
    __size32 ecx_1; 		// r25{89}
    __size32 ecx_2; 		// r25{92}
    __size32 ecx_4; 		// r25{98}
    __size32 ecx_5; 		// r25{101}
    unsigned int edi; 		// r31
    int edx; 		// r26
    unsigned int esi; 		// r30
    unsigned int esi_1; 		// r30{28}
    unsigned int esi_2; 		// r30{31}
    __size32 esp; 		// r28
    int local0; 		// m[esp - 4]
    union { __size16 *; unsigned int; } local1; 		// eax_21{27}
    unsigned int local2; 		// esi_1{28}
    unsigned int local3; 		// eax_13{38}
    __size32 local4; 		// ecx_1{89}
    __size32 local5; 		// ecx_4{98}

    esp = ((esp - 4) & ~0x7) - 92;
    local0 = param2;
    *(unsigned int*)(esp - 8) = param2;
    *(__size32*)(esp - 12) = param3;
    *(int*)(esp - 16) = esp;
    eax_2 = GetCommandLineW();
    *(union { LPWSTR; __size32; }*)(esp - 20) = eax_2;
    eax_3 = CommandLineToArgvW();
    if (eax_3 == 0) {
        *(__size32*)(esp - 24) = 0x40207c;
        proc_0x00401000(*(esp - 36), 0x402240);
    }
    eax_6 = *(esp - 8);
    if (eax_6 == 5) {
        edi = *(eax_3 + 4);
        ecx = 0;
        if (edi == 0) {
bb0x401193:
            edx = 0;
        }
        else {
            esi = 20;
            eax_7 = edi;
            local1 = eax_7;
            local2 = esi;
            do {
                eax_21 = local1;
                esi_1 = local2;
                if (*eax_21 == 0) {
bb0x4011cf:
                    if (esi_1 == 0) {
                        goto bb0x401193;
                    }
                    else {
                        edx = 20 - esi_1;
                    }
                    goto bb0x401195;
                }
                else {
                    eax_10 = eax_21 + 2;
                    esi_2 = esi_1 - 1;
                    local1 = eax_10;
                    local2 = esi_2;
                }
                goto bb0x4011cf;
            } while (esi_1 != 1);
            goto bb0x401193;
        }
bb0x401195:
        eax_14 = 0;
        local3 = eax_14;
        if (edx != 0) {
            do {
                eax_13 = local3;
                esi = *(unsigned short*)(edi + eax_13 * 2);
                eax_18 = eax_13 + 1;
                ecx = esi + ecx * 10 - 48;
                local3 = eax_18;
            } while (eax_13 + 1 < edx);
        }
        *(unsigned int*)(esp - 24) = ecx;
        *(__size32*)(esp - 28) = 0;
        *(__size32*)(esp - 32) = 1;
        eax_17 = OpenProcess();
        if (eax_17 == 0) {
            edx = *(eax_3 + 4);
            *(__size32*)(esp - 36) = edx;
            proc_0x00401000(*(esp - 48), 0x402268);
        }
        *(__size32*)(esp - 36) = 0;
        *(__size32*)(esp - 40) = eax_17;
        eax = TerminateProcess();
        if (eax == 0) {
            *(__size32*)(esp - 44) = 0x40207c;
            proc_0x00401000(*(esp - 56), 0x402280);
        }
        *(__size32*)(esp - 44) = eax_17;
        CloseHandle(*(esp - 44));
        eax = proc_0x004010a0(); /* Warning: also results in ebx, esp */
        if (eax != 0) {
            esi = *(ebx + 12);
        }
        else {
            esi = *(ebx + 16);
        }
        eax = *(ebx + 8);
        local0 = esi;
        *(__size32*)(esp - 8) = eax;
        eax = MoveFileW();
        if (eax == 0) {
            ecx = *(ebx + 8);
            *(__size32*)(esp - 12) = ecx;
            proc_0x00401000(*(esp - 24), 0x4022a4);
        }
        ecx = 68;
        eax = esp + 24;
        local4 = ecx;
        do {
            ecx_1 = local4;
            *(__size8*)eax = 0;
            eax++;
            ecx_2 = ecx_1 - 1;
            local4 = ecx_2;
        } while (ecx_1 != 1);
        *(__size32*)(esp + 24) = 68;
        ecx = 16;
        eax = esp + 8;
        local5 = ecx;
        do {
            ecx_4 = local5;
            *(__size8*)eax = 0;
            eax++;
            ecx_5 = ecx_4 - 1;
            local5 = ecx_5;
        } while (ecx_4 != 1);
        *(union { void *; __size32; }*)(esp - 12) = esp + 8;
        *(union { void *; __size32; }*)(esp - 16) = esp + 24;
        *(__size32*)(esp - 20) = ecx_4 - 1;
        *(__size32*)(esp - 24) = ecx_4 - 1;
        *(__size32*)(esp - 28) = ecx_4 - 1;
        *(__size32*)(esp - 32) = ecx_4 - 1;
        *(__size32*)(esp - 36) = ecx_4 - 1;
        *(__size32*)(esp - 40) = ecx_4 - 1;
        *(__size32*)(esp - 44) = esi;
        *(__size32*)(esp - 48) = ecx_4 - 1;
        eax = CreateProcessW(); /* Warning: also results in esp */
        if (eax == 0) {
            *(__size32*)(esp - 52) = esi;
            proc_0x00401000(*(esp - 64), 0x4022b8);
        }
        if (esi != *(ebx + 12)) {
            do {
                esp = proc_0x004010a0(); /* Warning: also results in esi */
            } while (esi != 1);
        }
    }
    return;
}


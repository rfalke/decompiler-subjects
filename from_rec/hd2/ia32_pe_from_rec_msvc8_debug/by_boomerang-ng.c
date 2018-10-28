void global_0x00415b64;
unsigned int global_0x00415b7c[9999999];
int global_0x00417000 = 0xbb40e64e;
__size32 global_0x00417004 = 0x44bf19b1;// 4 bytes
union { void *; __size32; } global_0x00417034;
__size32 global_0x00417264;// 4 bytes
__size32 global_0x00417268;// 4 bytes
__size32 global_0x0041726c;// 4 bytes
__size32 global_0x00417270;// 4 bytes
__size32 global_0x00417274;// 4 bytes
__size32 global_0x00417278;// 4 bytes
__size32 global_0x00417538;// 4 bytes
__size32 global_0x0041753c;// 4 bytes
__size32 global_0x00417554;// 4 bytes
__size8 global_0x00417558;// 1 bytes
unsigned int global_0x0041755c;
__size32 LoadLibraryA = 0x186a4;// 4 bytes
__size32 GetProcAddress = 0x18692;// 4 bytes
__size32 MultiByteToWideChar = 0x18670;// 4 bytes
void proc_0x00411d50(int param1, int param2, __size16 param3, __size32 param5, __size32 param6, __size32 param6);
void proc_0x00413000(int param1, int param2);
void proc_0x00411d70(__size16 param1, __size32 param2, __size32 param3, __size32 param4);
__size32 proc_0x00412050();
void __imp__amsg_exit();
__size32 __imp__initterm_e();
void __imp__initterm();
__size32 proc_0x00413250(unsigned int param1);
__size32 proc_0x004118c0(int param1, __size32 param2, __size16 param3, __size32 param4, __size32 param5, __size32 param6);
__size32 proc_0x00413130(union { unsigned int *; unsigned int; } param1);
__size32 proc_0x004131b0(unsigned int param1, unsigned int param2);
void proc_0x004116a0(unsigned int param1, union { unsigned int; char *; } param2, __size16 param3, __size32 param4, __size32 param5);
__size32 proc_0x00411990(__size16 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6);
__size32 proc_0x00411860(__size16 param1, __size32 param2, __size32 param3, __size32 param4);
void proc_0x004119c0(union { __size32 *; __size32; int *; } param1);
void proc_0x00411970();
void proc_0x00411410(char param1[], int param2, unsigned int param3, int param4, __size16 param5, __size32 param6, __size32 param7, __size32 param8);
void proc_0x00412380(__size32 param1, unsigned int param2, __size16 param3);
void proc_0x00412750(__size32 param1, union { unsigned char *; __size32 * x1; int; } param2, __size16 param3, int param4);
void __imp_strcat(char *param1, char *param2);
__size32 __imp_strlen(char *param1);
__size32 __imp_strcpy(char *param1, char *param2);
void proc_0x004123f0(__size32 param1, __size32 param2, __size16 param3);
__size32 proc_0x00412ca0();
__size32 proc_0x00412c90();
__size32 proc_0x004122d0();
__size32 proc_0x00412680();
__size16 proc_0x00413400(union { int; __size16 *; } param1, unsigned int param2, union { __size16 *; __size32; } param3, union { __size32 *; __size32; } param4, union { LPWSTR; __size32; } param5, unsigned int param6, unsigned int param7, __size32 param8, __size32 param9);
void proc_0x00413770(__size32 param1);

/** address: 0x00411d50 */
void proc_0x00411d50(int param1, int param2, __size16 param3, __size32 param5, __size32 param6, __size32 param6)
{
    proc_0x00413000(param1, param2);
    proc_0x00411d70(param3, param5, param6, param6);
    return;
}

/** address: 0x00413000 */
void proc_0x00413000(int param1, int param2)
{
    __size32 eax; 		// r24
    int eax_1; 		// r24{8}
    int eax_2; 		// r24{9}
    int ecx; 		// r25
    int local0; 		// m[esp - 16]

    if (*0x417000 == 0xbb40e64e || (global_0x00417000 & ~0xffff) == 0) {
        GetSystemTimeAsFileTime();
        eax_1 = GetCurrentProcessId();
        eax_2 = GetCurrentThreadId();
        eax = GetTickCount();
        QueryPerformanceCounter();
        ecx = eax ^ eax_2 ^ eax_1 ^ 0 ^ param1 ^ param2;
        local0 = ecx;
        if (ecx != 0xbb40e64e) {
            if ((ecx & ~0xffff) == 0) {
                local0 = ecx << 16 | ecx;
            }
        }
        else {
            local0 = 0xbb40e64f;
        }
        global_0x00417000 = local0;
        global_0x00417004 =  ~local0;
    }
    else {
        global_0x00417004 =  ~global_0x00417000;
    }
    return;
}

/** address: 0x00411d70 */
void proc_0x00411d70(__size16 param1, __size32 param2, __size32 param3, __size32 param4)
{
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{0}
    int eax_12; 		// r24{37}
    __size32 eax_13; 		// r24{55}
    int eax_14; 		// r24{67}
    int eax_4; 		// r24{0}
    __size32 eax_5; 		// r24{9}
    __size32 eax_6; 		// r24{10}
    __size32 eax_9; 		// r24{17}
    int ebp; 		// r29
    int ebp_1; 		// r29{7}
    __size32 ebp_4; 		// r29{0}
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    int esp_1; 		// r28{9}
    int esp_10; 		// r28{2}
    int esp_4; 		// r28{24}
    int esp_5; 		// r28{12}
    int esp_6; 		// r28{68}
    int esp_9; 		// r28{63}
    __size32 local0; 		// m[esp - 32]
    __size32 local1; 		// m[esp - 4]
    int local15; 		// esp_5{12}
    int local16; 		// esp{75}
    int local17; 		// ebp{76}
    union { __size32 *; int; } local18; 		// ebp{103}
    int local2; 		// m[esp - 8]
    int local4; 		// m[esp - 16]

    ebp_1 = esp_10 - 4;
    *(int*)0 = esp_10 - 20;
    eax_5 = proc_0x00412050(); /* Warning: also results in esp_1 */
    local15 = esp_1;
    local17 = ebp_1;
    local17 = ebp_1;
    local18 = ebp_1;
    eax_6 = *(eax_5 + 4);
    local0 = 0;
    for(;;) {
        esp_5 = local15;
        *(__size32*)(esp_5 - 4) = 0;
        *(__size32*)(esp_5 - 8) = eax_6;
        *(__size32*)(esp_5 - 12) = 0x417570;
        eax_9 = InterlockedCompareExchange();
        if (eax_9 != 0) {
            if (eax_9 == eax_6) {
                break;
            }
            *(__size32*)(esp_5 - 16) = 1000;
            esp_4 = Sleep(*(esp_5 - 16));
            local15 = esp_4;
        }
bb0x411dfd:
        if (*0x417560 != 1) {
            if (*0x417560 != 0) {
                *(__size32*)(global_0x00415b7c + 0x15e4) = 1;
bb0x411e5d:
                if (*0x417560 == 1) {
                    *(__size32*)(esp_5 - 16) = 0x415208;
                    *(__size32*)(esp_5 - 20) = 0x415000;
                    __imp__initterm();
                    *(__size32*)(global_0x00415b7c + 0x19e4) = 2;
                }
                if (*0x417560 != 2) {
                    *(__size32*)(esp_5 - 16) = 0x4157d8;
                    *(__size32*)(esp_5 - 20) = 0;
                    *(__size32*)(esp_5 - 24) = 500;
                    *(__size32*)(esp_5 - 28) = 0x415760;
                    *(__size32*)(esp_5 - 32) = 2;
                    eax_13 = _CrtDbgReportW();
                    if (eax_13 == 1) {
                        __debugbreak();
                    }
                }
                if (*(esp_10 - 32) == 0) {
                    *(__size32*)(esp_5 - 16) = 0;
                    *(__size32*)(esp_5 - 20) = 0x417570;
                    InterlockedExchange(*(esp_5 - 20), *(esp_5 - 16));
                }
                esp_9 = esp_5 - 12;
                local16 = esp_9;
                if (*0x417594 != 0) {
                    *(__size32*)(esp_5 - 16) = 0x417594;
                    eax_14 = proc_0x00413250(*(esp_5 - 16)); /* Warning: also results in ecx, edx */
                    esp_6 = esp_5 - 12;
                    local16 = esp_6;
                    if (eax_14 != 0) {
                        *(__size32*)(esp_5 - 16) = 0;
                        *(__size32*)(esp_5 - 20) = 2;
                        *(__size32*)(esp_5 - 24) = 0;
                        (*global_0x00415b64)(eax_14, ecx, edx, esp_10 - 4, param4, LOGICALFLAGS32(eax_14), LOGICALFLAGS32(eax_14), LOGICALFLAGS32(eax_14), param1, param2, param3, ebp_4, 0, 0x416ab8 ^ eax_4, 0x411087, eax_1, esp_10 - 64, *(esp_10 - 32), eax_6, eax_9, *(esp_10 - 48), param2, param3, param4, eax_4 ^ esp_10 - 4, pc);
                        local16 = esp;
                        local17 = ebp;
                    }
                }
                esp = local16;
                ebp = local17;
                local1 = 1;
                _CrtSetCheckCount();
                local18 = ebp;
                ecx = *0x4182a4;
                edx = *(global_0x00415b7c + 0x15cc);
                *(__size32*)ecx = edx;
                eax = *(global_0x00415b7c + 0x15cc);
                local1 = eax;
                ecx = *(global_0x00415b7c + 0x15d0);
                local2 = ecx;
                edx = *(global_0x00415b7c + 0x15c8);
                *(__size32*)(esp - 12) = edx;
                eax = proc_0x004118c0(*(esp - 12), *(esp - 8), param1, edx, param2, param3);
                *(__size32*)(global_0x00415b7c + 0x15e0) = eax;
                if (*0x417150 == 0) {
                    eax = *(global_0x00415b7c + 0x15e0);
                    local1 = eax;
                    exit(*(esp - 4));
                }
                if (*0x417160 == 0) {
                    _cexit();
                }
                *(__size32*)(ebp - 4) = -2;
            }
            else {
                *(__size32*)(global_0x00415b7c + 0x19e4) = 1;
                *(__size32*)(esp_5 - 16) = 0x415618;
                *(__size32*)(esp_5 - 20) = 0x41530c;
                eax_12 = __imp__initterm_e();
                if (eax_12 == 0) {
                    goto bb0x411e5d;
                }
                else {
                }
            }
        }
        else {
            *(__size32*)(esp_5 - 16) = 31;
            __imp__amsg_exit();
            goto bb0x411e5d;
        }
        ebp = local18;
        ecx = *(ebp - 16);
        *(__size32*)0 = ecx;
        return;
    }
    *(__size32*)(esp_10 - 32) = 1;
    goto bb0x411dfd;
}

/** address: 0x00412050 */
__size32 proc_0x00412050()
{
    __size32 eax; 		// r24

    eax = *24;
    return eax;
}

/** address: 0x00412ff0 */
void __imp__amsg_exit()
{
    _amsg_exit();
    return;
}

/** address: 0x004133b2 */
__size32 __imp__initterm_e()
{
    __size32 eax; 		// r24

    eax = _initterm_e();
    return eax;
}

/** address: 0x004133ac */
void __imp__initterm()
{
    _initterm();
    return;
}

/** address: 0x00413250 */
__size32 proc_0x00413250(unsigned int param1)
{
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{18}
    __size32 eax_10; 		// r24{11}
    __size32 eax_2; 		// r24{3}
    __size32 eax_5; 		// r24{5}
    __size32 eax_6; 		// r24{7}
    __size32 eax_7; 		// r24{9}
    int edx; 		// r26
    __size32 edx_1; 		// r26{14}
    int esp; 		// r28
    __size32 local4; 		// eax_1{18}

    eax_2 = *0;
    *(int*)0 = (esp - 20);
    eax_5 = proc_0x00413130(0x400000); /* Warning: also results in edx */
    if (eax_5 != 0) {
        eax_7 = proc_0x004131b0(0x400000, param1 - 0x400000); /* Warning: also results in edx */
        if (eax_7 != 0) {
            edx = *(eax_7 + 36);
            edx_1 = 0 - ((edx & 0x80000000) != 0);
            edx = edx_1 + 1;
            eax = edx_1 + 1;
            local4 = eax;
        }
        else {
            eax_10 = 0;
            local4 = eax_10;
        }
    }
    else {
        eax_6 = 0;
        local4 = eax_6;
    }
    eax_1 = local4;
    *(__size32*)0 = eax_2;
    return eax_1; /* WARNING: Also returning: ecx := global_0x00417000 ^ (esp - 4), edx := edx */
}

/** address: 0x004118c0 */
__size32 proc_0x004118c0(int param1, __size32 param2, __size16 param3, __size32 param4, __size32 param5, __size32 param6)
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    int esp_1; 		// r28{8}
    int esp_10; 		// r28{1}
    __size32 esp_4; 		// r28{23}
    union { int; __size32 *; } esp_7; 		// r28{15}
    __size32 local0; 		// m[esp - 24]
    int local1; 		// m[esp - 12]
    __size32 local3; 		// param4{14}
    union { __size32 *; int; } local4; 		// esp_7{15}

    esp_1 = (esp_10 - 232);
    local3 = param4;
    local4 = esp_1;
    local0 = 0;
    local1 = 1;
    param4 = local3;
    esp_7 = local4;
    while (*(esp_10 - 12) < param1) {
        edx = *(param2 + *(esp_10 - 12) * 4);
        *(__size32*)(esp_7 - 4) = edx;
        proc_0x004116a0(*(esp_7 - 96), *(esp_7 - 4), param3, param5, param6);
        local3 = edx;
        esp_4 = esp_7 - 4;
        *(__size32*)(esp_10 - 24) = *(esp_10 - 12) + *(esp_10 - 24);
        local4 = esp_4;
        *(int*)(esp_10 - 12)++;
        param4 = local3;
        esp_7 = local4;
    }
    edi = *esp_7;
    esi = *(esp_7 + 4);
    ebx = *(esp_7 + 8);
    eax = proc_0x00411990(param3, *(esp_10 - 24), param4, ebx, esi, edi);
    return eax;
}

/** address: 0x00413130 */
__size32 proc_0x00413130(union { unsigned int *; unsigned int; } param1)
{
    __size32 eax; 		// r24
    union { unsigned int; int *; } ecx; 		// r25
    unsigned int edx; 		// r26

    edx = *(unsigned short*)param1;
    if (edx == 0x5a4d) {
        ecx = param1 + *(param1 + 60);
        edx = ecx;
        if (*ecx == 0x4550) {
            edx = *(unsigned short*)(ecx + 24);
            if (edx == 267) {
                eax = 1;
            }
            else {
                eax = 0;
            }
        }
        else {
            eax = 0;
        }
    }
    else {
        eax = 0;
    }
    return eax; /* WARNING: Also returning: edx := edx */
}

/** address: 0x004131b0 */
__size32 proc_0x004131b0(unsigned int param1, unsigned int param2)
{
    unsigned int eax; 		// r24
    unsigned int ecx; 		// r25
    unsigned int ecx_1; 		// r25{4}
    __size32 ecx_2; 		// r25{17}
    unsigned int edx; 		// r26
    unsigned int local0; 		// m[esp - 12]
    unsigned int local1; 		// m[esp - 16]

    ecx_1 = param1 + *(param1 + 60);
    local0 = 0;
    eax = *(unsigned short*)(ecx_1 + 20);
    local1 = ecx_1 + eax + 24;
    edx = ecx_1;
    eax = *(unsigned short*)(ecx_1 + 6);
    while (local0 < eax) {
        if (param2 < *(local1 + 12)) {
bb0x41321d:
            local0++;
            local1 += 40;
        }
        else {
            ecx_2 = *(local1 + 12);
            edx = local1;
            ecx = ecx_2 + *(local1 + 8);
            if (param2 >= ecx) {
                goto bb0x41321d;
            }
            else {
                eax = local1;
            }
        }
        return eax; /* WARNING: Also returning: edx := edx */
        edx = ecx_1;
        eax = *(unsigned short*)(ecx_1 + 6);
    }
    eax = 0;
    return eax; /* WARNING: Also returning: edx := edx */
}

/** address: 0x004116a0 */
void proc_0x004116a0(unsigned int param1, union { unsigned int; char *; } param2, __size16 param3, __size32 param4, __size32 param5)
{
    int eax; 		// r24
    unsigned int eax_10; 		// r24{19}
    __size32 eax_13; 		// r24{21}
    __size32 eax_14; 		// r24{23}
    __size32 eax_15; 		// r24{57}
    __size32 eax_16; 		// r24{64}
    size_t eax_17; 		// r24{36}
    unsigned int eax_18; 		// r24{38}
    int eax_2; 		// r24{11}
    int eax_21; 		// r24{53}
    __size32 eax_5; 		// r24{12}
    __size32 eax_6; 		// r24{14}
    __size32 eax_7; 		// r24{16}
    FILE *eax_8; 		// r24{18}
    int ebp; 		// r29
    __size32 ebx_1; 		// r27{12}
    __size32 ebx_10; 		// r27{38}
    __size32 ebx_4; 		// r27{19}
    __size32 ebx_7; 		// r27{49}
    __size32 ebx_8; 		// r27{68}
    __size32 ebx_9; 		// r27{26}
    int edi; 		// r31
    __size32 edi_1; 		// r31{12}
    int edi_11; 		// r31{8}
    int edi_12; 		// r31{10}
    __size32 edi_13; 		// r31{28}
    __size32 edi_16; 		// r31{50}
    __size32 edi_17; 		// r31{0}
    __size32 edi_4; 		// r31{19}
    __size32 edi_7; 		// r31{66}
    __size32 edi_8; 		// r31{38}
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    __size32 esi_1; 		// r30{67}
    __size32 esp_1; 		// r28{15}
    union { __size32; __size32 *; } esp_10; 		// r28{59}
    __size32 esp_13; 		// r28{27}
    int esp_16; 		// r28{1}
    __size32 esp_2; 		// r28{19}
    __size32 esp_5; 		// r28{22}
    __size32 esp_6; 		// r28{55}
    __size32 esp_7; 		// r28{46}
    unsigned int local16; 		// m[esp_16 - 40]{0}
    unsigned int local17; 		// m[esp_16 - 40]{29}
    unsigned int local18; 		// m[esp_16 - 40]{25}
    unsigned int local2; 		// m[esp - 40]
    int local24; 		// edi_12{10}
    __size32 local25; 		// ebx_9{26}
    __size32 local26; 		// esp_13{27}
    __size32 local27; 		// edi_13{28}
    unsigned int local28; 		// local17{29}
    __size32 local29; 		// ebx_7{49}
    __size32 local30; 		// edi_16{50}
    __size32 local31; 		// eax_15{57}
    union { __size32 *; __size32; } local32; 		// esp_10{59}

    edi = esp_16 - 316;
    local24 = edi;
    edi_11 = esp_16 + ( (DF == 0) ? 4 : -4) - 316;
    local24 = edi_11;
    edi_12 = local24;
    eax_2 = *(&global_0x00415b64 + 0x149c);
    eax_5 = proc_0x00411860(param3, param4, param5, edi_12); /* Warning: also results in ebx_1, edi_1 */
    if (eax_5 != 0) {
        eax_6 = perror(param2); /* Warning: also results in edx */
        edx = proc_0x00411990(param3, eax_6, edx, ebx_1, esp_16 - 328, edi_1); /* Warning: also results in esp_1 */
        local32 = esp_1;
        eax_7 = 1;
        local31 = eax_7;
bb0x4117ac:
        eax_15 = local31;
        esp_10 = local32;
        *(__size32*)(esp_10 - 4) = edx;
        *(__size32*)(esp_10 - 8) = eax_15;
        proc_0x004119c0(0x4117dc);
        eax_16 = *(esp_10 - 12);
        edx = *(esp_10 - 8);
        edi_7 = *(esp_10 - 4);
        esi_1 = *esp_10;
        ebx_8 = *(esp_10 + 4);
        proc_0x00411970(eax_16, eax_2 ^ esp_16 - 4 ^ esp_16 - 4, edx, ebx_8, esp_16 - 4, esi_1, edi_7, LOGICALFLAGS32(eax_2 ^ esp_16 - 4 ^ esp_16 - 4), LOGICALFLAGS32(eax_2 ^ esp_16 - 4 ^ esp_16 - 4), LOGICALFLAGS32(eax_2 ^ esp_16 - 4 ^ esp_16 - 4), param3, param2, ebp, eax_2 ^ esp_16 - 4, local16, *(esp_16 - 52), param1, *(esp_16 - 120), 0xcccccccc, param4, param5, edi_17, pc, *(esp_16 - 336), pc);
    }
    eax_8 = fopen(param2, "rb"); /* Warning: also results in edx */
    eax_10 = proc_0x00411990(param3, eax_8, edx, ebx_1, esp_16 - 328, edi_1); /* Warning: also results in ebx_4, esp_2, edi_4 */
    local25 = ebx_4;
    local26 = esp_2;
    local27 = edi_4;
    if (eax_10 == 0) {
        eax_13 = perror(param2); /* Warning: also results in edx */
        edx = proc_0x00411990(param3, eax_13, edx, ebx_4, esp_16 - 328, edi_4); /* Warning: also results in esp_5 */
        local32 = esp_5;
        eax_14 = 1;
        local31 = eax_14;
        goto bb0x4117ac;
    }
    local2 = 0;
    local28 = local18;
    ebx_9 = local25;
    esp_13 = local26;
    edi_13 = local27;
    local17 = local28;
    local29 = ebx_9;
    local30 = edi_13;
    while (local17 < param1) {
        *(unsigned int*)(esp_13 - 4) = eax_10;
        *(__size32*)(esp_13 - 8) = 16;
        *(__size32*)(esp_13 - 12) = 1;
        *(int*)(esp_13 - 16) = (esp_16 - 28);
        eax_17 = fread(*(esp_13 - 16), *(esp_13 - 12), *(esp_13 - 8), *(esp_13 - 4)); /* Warning: also results in edx */
        eax_18 = proc_0x00411990(param3, eax_17, edx, ebx_9, esp_13, edi_13); /* Warning: also results in ebx_10, esi, edi_8 */
        local25 = ebx_10;
        local27 = edi_8;
        local29 = ebx_10;
        local30 = edi_8;
        if (eax_18 == 0) {
            break;
        }
        *(unsigned int*)(esp_13 - 4) = eax_18;
        *(unsigned int*)(esp_13 - 8) = local17;
        *(int*)(esp_13 - 12) = esp_16 - 28;
        proc_0x00411410(*(esp_13 - 108), *(esp_13 - 12), *(esp_13 - 8), *(esp_13 - 4), param3, ebx_10, esi, edi_8);
        esp_7 = esp_13 - 4;
        *(unsigned int*)(esp_16 - 40) = local17 + eax_18;
        local26 = esp_7;
        local28 = *(esp_16 - 40);
        ebx_9 = local25;
        esp_13 = local26;
        edi_13 = local27;
        local17 = local28;
        local29 = ebx_9;
        local30 = edi_13;
    }
    ebx_7 = local29;
    edi_16 = local30;
    *(unsigned int*)(esp_13 - 4) = eax_10;
    eax_21 = fclose(*(esp_13 - 4)); /* Warning: also results in edx */
    edx = proc_0x00411990(param3, eax_21, edx, ebx_7, esp_13, edi_16); /* Warning: also results in esp_6 */
    local32 = esp_6;
    eax = 0;
    local31 = eax;
    goto bb0x4117ac;
}

/** address: 0x00411990 */
__size32 proc_0x00411990(__size16 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6)
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    __size32 local0; 		// m[esp]
    __size32 local3; 		// param2{11}
    __size32 local4; 		// param3{12}
    __size32 local5; 		// param4{13}
    __size32 local6; 		// param5{14}
    __size32 local7; 		// param6{15}

    local3 = param2;
    local4 = param3;
    local5 = param4;
    local6 = param5;
    local7 = param6;
    if (flags) {
        proc_0x00412380(local0, 0, param1);
        edi = 0;
        esi = param6;
        ebx = param5;
        edx = param4;
        eax = param3;
        local3 = eax;
        local4 = edx;
        local5 = ebx;
        local6 = esi;
        local7 = edi;
    }
    param2 = local3;
    param3 = local4;
    param4 = local5;
    param5 = local6;
    param6 = local7;
    return param2; /* WARNING: Also returning: edx := param3, ebx := param4, esi := param5, edi := param6 */
}

/** address: 0x00411860 */
__size32 proc_0x00411860(__size16 param1, __size32 param2, __size32 param3, __size32 param4)
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 edi_1; 		// r31{9}
    __size32 edx; 		// r26
    int esp; 		// r28

    edi = (esp - 196);
    edi = esp + ( (DF == 0) ? 4 : -4) - 196;
    edi_1 = edi;
    eax = _stat64i32(); /* Warning: also results in edx */
    eax = proc_0x00411990(param1, eax, edx, param2, (esp - 208), edi_1); /* Warning: also results in edx */
    eax = proc_0x00411990(param1, eax, edx, param2, param3, param4); /* Warning: also results in ebx, edi */
    return eax; /* WARNING: Also returning: ebx := ebx, edi := edi */
}

/** address: 0x004119c0 */
void proc_0x004119c0(union { __size32 *; __size32; int *; } param1)
{
    if (*param1 > 0) {
        do {
            if ( ~( ~flags && flags)) {
                *(__size32*)(%esp - 4) = %ecx;
                *(__size32*)(%esp - 4) = %edx;
                proc_0x00412750(*(%esp + 4), *(%esp + 8), %cx, %edx);
            }
            *(__size32*)(%ebp - 4) = %eax;
        } while (flags);
    }
    return;
}

/** address: 0x00411970 */
void proc_0x00411970()
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30

    if (flags) {
    }
    global_0x00417278 = eax;
    global_0x00417274 = ecx;
    global_0x00417270 = edx;
    global_0x0041726c = ebx;
    global_0x00417268 = esi;
    global_0x00417264 = edi;
}

/** address: 0x00411410 */
void proc_0x00411410(char param1[], int param2, unsigned int param3, int param4, __size16 param5, __size32 param6, __size32 param7, __size32 param8)
{
    int eax; 		// r24
    int eax_1; 		// r24{14}
    int eax_12; 		// r24{69}
    int eax_4; 		// r24{15}
    int eax_5; 		// r24{28}
    int eax_6; 		// r24{41}
    unsigned int eax_9; 		// r24{52}
    int ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{23}
    __size32 ebx_2; 		// r27{16}
    int ecx; 		// r25
    int edi; 		// r31
    __size32 edi_1; 		// r31{24}
    __size32 edi_2; 		// r31{16}
    int edi_3; 		// r31{13}
    __size32 edi_4; 		// r31{29}
    __size32 edx; 		// r26
    int esp; 		// r28
    int local18; 		// m[esp - 104]{31}
    unsigned int local19; 		// m[esp - 316]{0}
    unsigned int local20; 		// m[esp - 316]{37}
    unsigned int local21; 		// m[esp - 316]{34}
    unsigned int local22; 		// m[esp - 316]{60}
    unsigned int local23; 		// m[esp - 316]{36}
    unsigned int local24; 		// m[esp - 316]{55}
    int local29; 		// param4{19}
    int local3; 		// m[esp + 12]
    __size32 local30; 		// ebx_1{23}
    __size32 local31; 		// edi_1{24}
    unsigned int local32; 		// local20{37}
    unsigned int local33; 		// local22{60}
    int local4; 		// m[esp - 104]
    unsigned int local5; 		// m[esp - 316]

    edi = esp - 316;
    local29 = param4;
    edi = esp + ( (DF == 0) ? 4 : -4) - 316;
    edi_3 = edi;
    eax_1 = *(&global_0x00415b64 + 0x149c);
    eax_4 = sprintf(&param1, "%08lX:", param3); /* Warning: also results in edx */
    ebx_2 = proc_0x00411990(param5, eax_4, edx, param6, esp - 328, edi_3); /* Warning: also results in edi_2 */
    local30 = ebx_2;
    local31 = edi_2;
    if (param4 > 16) {
        local3 = 16;
        local29 = local3;
    }
    param4 = local29;
    local4 = 0;
    ebx_1 = local30;
    edi_1 = local31;
    while (local4 < param4) {
        ecx = *(unsigned char*)(param2 + local4);
        eax_5 = sprintf(esp + local4 * 3 - 83, " %02lX", ecx); /* Warning: also results in edx */
        ebx = proc_0x00411990(param5, eax_5, edx, ebx_1, esp - 328, edi_1); /* Warning: also results in edi_4 */
        local30 = ebx;
        local31 = edi_4;
        local4++;
        ebx_1 = local30;
        edi_1 = local31;
    }
    for(;;) {
        local18 = local4;
        local4 = local18 + 1;
        if (local18 < 16) {
            local21 = 1;
            local32 = local21;
bb0x4114d3:
            local20 = local32;
            if (local20 != 0) {
                __imp_strcat(&param1, "   ");
            }
            goto bb0x4114ef;
        }
        local23 = 0;
        local32 = local23;
        goto bb0x4114d3;
    }
bb0x4114ef:
    eax_6 = __imp_strlen(&param1);
    edx = __imp_strcpy(esp + eax_6 - 92, "  |");
    local4 = 0;
    while (local4 < param4) {
        ecx = *(unsigned char*)(param2 + local4);
        if ((int)ecx >= 32) {
            edx = param2 + local4;
            eax_9 = *(unsigned char*)edx;
            if ((int)eax_9 <= 126) {
                edx = *(unsigned char*)(param2 + local4);
                local24 = edx;
                local33 = local24;
bb0x41156d:
                local22 = local33;
                *(unsigned int*)(esp + eax_6 + local4 - 89) = local22;
                local4++;
            }
        }
        local5 = 46;
        local33 = local5;
        goto bb0x41156d;
    }
    while (local4 < 16) {
        *(__size8*)(esp + eax_6 + local4 - 89) = 32;
        local4++;
    }
    __imp_strcpy(esp + eax_6 + local4 - 89, "|");
    eax_12 = printf("%s\n", &param1); /* Warning: also results in edx */
    eax = proc_0x00411990(param5, eax_12, edx, ebx_1, esp - 328, edi_1); /* Warning: also results in edx */
    proc_0x004119c0(0x411600);
    proc_0x00411970((unsigned char) eax_1 ^ esp - 4 ^ esp - 4, pc, eax_1 ^ esp - 4 ^ esp - 4, eax, param7, esp - 4, param8, edx, LOGICALFLAGS32(eax_1 ^ esp - 4 ^ esp - 4), LOGICALFLAGS32(eax_1 ^ esp - 4 ^ esp - 4), LOGICALFLAGS32(eax_1 ^ esp - 4 ^ esp - 4), param5, param2, param3, param4, ebp, eax_1 ^ esp - 4, param1, local4, eax_6 + 3, local19, param6, pc, param8, edx, eax, pc, pc);
}

/** address: 0x00412380 */
void proc_0x00412380(__size32 param1, unsigned int param2, __size16 param3)
{
    if (param2 > 4) {
        proc_0x004123f0(param1, 0x415844, param3);
    }
    if (global_0x00415b7c[param2] != -1) {
        proc_0x004123f0(param1, global_0x00415b64[param2], param3);
    }
    return;
}

/** address: 0x00412750 */
void proc_0x00412750(__size32 param1, union { unsigned char *; __size32 * x1; int; } param2, __size16 param3, int param4)
{
    unsigned char cl; 		// r9
    unsigned char dl; 		// r10
    __size32 eax; 		// r24
    union { unsigned char *; int; } eax_1; 		// r24{27}
    __size32 eax_2; 		// r24{31}
    union { __size32; unsigned char *; } eax_4; 		// r24{51}
    __size32 eax_5; 		// r24{55}
    int ebx; 		// r27
    __size32 ecx; 		// r25
    union { unsigned char *; int; } ecx_1; 		// r25{10}
    __size32 ecx_2; 		// r25{14}
    int edi; 		// r31
    int edi_1; 		// r31{35}
    int edi_2; 		// r31{38}
    int edi_4; 		// r31{60}
    int edi_5; 		// r31{63}
    int edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28
    union { __size8 *; int; } local10; 		// edi{71}
    union { int; unsigned char *; } local3; 		// ecx_1{10}
    int local4; 		// param4{11}
    union { int; unsigned char *; } local5; 		// eax_1{27}
    int local6; 		// edi_1{35}
    union { __size8 *; int; } local7; 		// edi{47}
    union { unsigned char *; __size32; } local8; 		// eax_4{51}
    int local9; 		// edi_4{60}

    eax = param2;
    local4 = param4;
    local5 = eax;
    if (*0x417010 != -1) {
        if (*param2 != 0) {
            ecx = param2;
            local3 = ecx;
            do {
                ecx_1 = local3;
                param4 = local4;
                dl = *ecx_1;
                edx = param4 & ~0xff | (dl);
                ecx_2 = ecx_1 + 1;
                local3 = ecx_2;
                local4 = edx;
            } while (dl != 0);
            if (ecx_1 - param2 + 45 <= 1024) {
                ebx = (esp - 1032);
                ecx = 0;
                do {
                    dl = *(ecx + 0x415b94);
                    edx = edx & ~0xff | (dl);
                    *(unsigned char*)(esp + ecx - 1032) = dl;
                    ecx++;
                } while (dl != 0);
                edx = param2;
                do {
                    eax_1 = local5;
                    cl = *eax_1;
                    ecx = ecx & ~0xff | (cl);
                    eax_2 = eax_1 + 1;
                    local5 = eax_2;
                } while (cl != 0);
                edi = (esp - 1033);
                local6 = edi;
                do {
                    edi_1 = local6;
                    cl = *(edi_1 + 1);
                    ecx = ecx & ~0xff | (cl);
                    edi_2 = edi_1 + 1;
                    local6 = edi_2;
                    local7 = edi_2;
                } while (cl != 0);
                esi = param2;
                if (eax_1 - param2 + 1 >> 2 != 0) {
                    *(__size32*)(edi_1 + 1) = *param2;
                    esi = param2 + ( (DF == 0) ? 4 : -4);
                    edi = edi_1 + ( (DF == 0) ? 4 : -4) + 1;
                    local7 = edi;
                }
                edi = local7;
                eax = 0x415bb0;
                *(__size8*)edi = *esi;
                ecx = 0x415bb0;
                local8 = eax;
                do {
                    eax_4 = local8;
                    dl = *eax_4;
                    edx = edx & ~0xff | (dl);
                    eax_5 = eax_4 + 1;
                    local8 = eax_5;
                } while (dl != 0);
                esi = 0x415bb0;
                edi = (esp - 1033);
                local9 = edi;
                do {
                    edi_4 = local9;
                    cl = *(edi_4 + 1);
                    ecx = ecx & ~0xff | (cl);
                    edi_5 = edi_4 + 1;
                    local9 = edi_5;
                    local10 = edi_5;
                } while (cl != 0);
                if (eax_4 - 0x415baf >> 2 != 0) {
                    *(__size32*)(edi_4 + 1) = *(&global_0x00415b64 + 76);
                    esi = ( (DF == 0) ? 4 : -4) + 0x415bb0;
                    edi = edi_4 + ( (DF == 0) ? 4 : -4) + 1;
                    local10 = edi;
                }
                edi = local10;
                *(__size8*)edi = *esi;
bb0x412824:
                proc_0x004123f0(param1, ebx, param3);
            }
        }
        ebx = 0x415d4c;
        goto bb0x412824;
    }
    proc_0x00411970();
    return;
}

/** address: 0x0041195e */
void __imp_strcat(char *param1, char *param2)
{
    strcat(param1, param2);
    return;
}

/** address: 0x00411958 */
__size32 __imp_strlen(char *param1)
{
    size_t eax; 		// r24

    eax = strlen(param1);
    return eax;
}

/** address: 0x00411952 */
__size32 __imp_strcpy(char *param1, char *param2)
{
    int edx; 		// r26

    edx = strcpy(param1, param2);
    return edx;
}

/** address: 0x004123f0 */
void proc_0x004123f0(__size32 param1, __size32 param2, __size16 param3)
{
    __size8 al; 		// r8
    __size16 cx; 		// r1
    int eax; 		// r24
    int eax_1; 		// r24{10}
    int eax_2; 		// r24{5}
    __size32 eax_3; 		// r24{105}
    __size32 eax_4; 		// r24{105}
    __size32 eax_5; 		// r24{105}
    __size32 eax_6; 		// r24{111}
    __size32 eax_7; 		// r24{111}
    int ebp; 		// r29
    __size32 ebx; 		// r27
    int ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28
    __size32 esp_1; 		// r28{14}
    union { __size32; __size32 *; } esp_10; 		// r28{67}
    union { __size32; __size32 *; } esp_11; 		// r28{67}
    union { __size32; __size32 *; } esp_12; 		// r28{67}
    __size32 esp_13; 		// r28{80}
    union { __size32; __size32 *; } esp_14; 		// r28{135}
    __size32 esp_15; 		// r28{92}
    __size32 esp_16; 		// r28{92}
    __size32 esp_17; 		// r28{92}
    __size32 esp_18; 		// r28{105}
    __size32 esp_19; 		// r28{105}
    __size32 esp_2; 		// r28{14}
    __size32 esp_20; 		// r28{105}
    __size32 esp_21; 		// r28{121}
    __size32 esp_22; 		// r28{128}
    __size32 esp_23; 		// r28{126}
    __size32 esp_24; 		// r28{52}
    union { __size32; __size32 *; } esp_25; 		// r28{140}
    union { __size32; __size32 *; } esp_26; 		// r28{140}
    union { __size32; __size32 *; } esp_27; 		// r28{140}
    __size32 esp_28; 		// r28{132}
    __size32 esp_29; 		// r28{27}
    __size32 esp_3; 		// r28{14}
    __size32 esp_30; 		// r28{31}
    __size32 esp_31; 		// r28{31}
    int esp_32; 		// r28{1}
    int esp_33; 		// r28{1}
    __size32 esp_4; 		// r28{23}
    __size32 esp_5; 		// r28{23}
    __size32 esp_6; 		// r28{23}
    __size32 esp_7; 		// r28{31}
    __size32 esp_8; 		// r28{45}
    __size32 esp_9; 		// r28{58}
    __size32 local0; 		// m[esp + 4]
    __size32 local1; 		// m[esp + 16]
    int local10; 		// m[esp - 0xe50]
    int local100; 		// m[esp_32 - 0xe50]{0}
    int local101; 		// m[esp_32 - 0xe50]{0}
    int local102; 		// m[esp_32 - 0xe54]{14}
    int local103; 		// m[esp_32 - 0xe54]{92}
    int local104; 		// m[esp_32 - 0xe54]{0}
    int local105; 		// m[esp_32 - 0xe54]{0}
    int local106; 		// m[esp_32 - 0xe54]{0}
    int local107; 		// m[esp_32 - 0xe54]{0}
    int local108; 		// m[esp_32 - 0xe54]{0}
    int local109; 		// m[esp_32 - 0xe54]{0}
    int local11; 		// m[esp - 0xe54]
    int local110; 		// m[esp_32 - 0xe58]{14}
    int local111; 		// m[esp_32 - 0xe58]{92}
    int local112; 		// m[esp_32 - 0xe58]{0}
    int local113; 		// m[esp_32 - 0xe58]{0}
    int local114; 		// m[esp_32 - 0xe58]{0}
    int local115; 		// m[esp_32 - 0xe58]{0}
    int local116; 		// m[esp_32 - 0xe58]{0}
    int local117; 		// m[esp_32 - 0xe58]{0}
    int local118; 		// m[esp_32 - 0xe5c]{14}
    int local119; 		// m[esp_32 - 0xe5c]{92}
    int local12; 		// m[esp - 0xe58]
    int local120; 		// m[esp_32 - 0xe5c]{0}
    int local121; 		// m[esp_32 - 0xe5c]{0}
    int local122; 		// m[esp_32 - 0xe5c]{0}
    int local123; 		// m[esp_32 - 0xe5c]{0}
    int local124; 		// m[esp_32 - 0xe5c]{0}
    int local125; 		// m[esp_32 - 0xe5c]{0}
    int local126; 		// m[esp_32 - 0xe60]{14}
    int local127; 		// m[esp_32 - 0xe60]{92}
    int local128; 		// m[esp_32 - 0xe60]{0}
    int local129; 		// m[esp_32 - 0xe60]{0}
    __size32 local13; 		// m[esp - 0xe5c]
    int local130; 		// m[esp_32 - 0xe60]{0}
    int local131; 		// m[esp_32 - 0xe60]{0}
    int local132; 		// m[esp_32 - 0xe60]{0}
    int local133; 		// m[esp_32 - 0xe60]{0}
    int local134; 		// m[esp_32 - 0xe64]{14}
    int local135; 		// m[esp_32 - 0xe64]{92}
    int local136; 		// m[esp_32 - 0xe64]{0}
    int local137; 		// m[esp_32 - 0xe64]{0}
    int local138; 		// m[esp_32 - 0xe64]{0}
    int local139; 		// m[esp_32 - 0xe64]{0}
    int local14; 		// m[esp - 0xe60]
    int local140; 		// m[esp_32 - 0xe64]{0}
    int local141; 		// m[esp_32 - 0xe64]{0}
    int local142; 		// m[esp_32 - 0xe68]{14}
    int local143; 		// m[esp_32 - 0xe68]{92}
    int local144; 		// m[esp_32 - 0xe68]{0}
    int local145; 		// m[esp_32 - 0xe68]{0}
    int local146; 		// m[esp_32 - 0xe68]{0}
    int local147; 		// m[esp_32 - 0xe68]{0}
    int local148; 		// m[esp_32 - 0xe68]{0}
    int local149; 		// m[esp_32 - 0xe68]{0}
    int local15; 		// m[esp - 0xe64]
    int local150; 		// eax_1{10}
    __size32 local151; 		// esp_29{27}
    __size32 local152; 		// esp_7{31}
    __size32 local153; 		// esp_23{126}
    __size32 local154; 		// esp_28{132}
    union { __size32 *; __size32; } local155; 		// esp_25{140}
    unsigned int local16; 		// m[esp - 0xe68]
    int local17; 		// m[esp_32 + 4]{14}
    int local18; 		// m[esp_32 + 4]{14}
    int local19; 		// m[esp_32 + 4]{14}
    __size32 local2; 		// m[esp - 4]
    int local20; 		// m[esp_32 + 4]{92}
    int local21; 		// m[esp_32 + 4]{92}
    int local22; 		// m[esp_32 + 4]{92}
    int local23; 		// m[esp_32 + 16]{14}
    int local24; 		// m[esp_32 + 16]{14}
    int local25; 		// m[esp_32 + 16]{14}
    int local26; 		// m[esp_32 + 16]{92}
    int local27; 		// m[esp_32 + 16]{92}
    int local28; 		// m[esp_32 + 16]{92}
    int local29; 		// m[esp_32 - 4]{14}
    int local3; 		// m[esp - 8]
    int local30; 		// m[esp_32 - 4]{92}
    int local31; 		// m[esp_32 - 4]{0}
    int local32; 		// m[esp_32 - 4]{0}
    int local33; 		// m[esp_32 - 4]{0}
    int local34; 		// m[esp_32 - 4]{0}
    int local35; 		// m[esp_32 - 4]{0}
    int local36; 		// m[esp_32 - 4]{0}
    int local37; 		// m[esp_32 - 8]{14}
    int local38; 		// m[esp_32 - 8]{92}
    int local39; 		// m[esp_32 - 8]{0}
    int local4; 		// m[esp - 0xe34]
    int local40; 		// m[esp_32 - 8]{0}
    int local41; 		// m[esp_32 - 8]{0}
    int local42; 		// m[esp_32 - 8]{0}
    int local43; 		// m[esp_32 - 8]{0}
    int local44; 		// m[esp_32 - 8]{0}
    int local45; 		// m[esp_32 - 0xe34]{14}
    int local46; 		// m[esp_32 - 0xe34]{92}
    int local47; 		// m[esp_32 - 0xe34]{0}
    int local48; 		// m[esp_32 - 0xe34]{0}
    int local49; 		// m[esp_32 - 0xe34]{0}
    int local5; 		// m[esp - 0xe3c]
    int local50; 		// m[esp_32 - 0xe34]{0}
    int local51; 		// m[esp_32 - 0xe34]{0}
    int local52; 		// m[esp_32 - 0xe34]{0}
    int local53; 		// m[esp_32 - 0xe3c]{14}
    int local54; 		// m[esp_32 - 0xe3c]{92}
    int local55; 		// m[esp_32 - 0xe3c]{0}
    int local56; 		// m[esp_32 - 0xe3c]{0}
    int local57; 		// m[esp_32 - 0xe3c]{0}
    int local58; 		// m[esp_32 - 0xe3c]{0}
    int local59; 		// m[esp_32 - 0xe3c]{0}
    __size32 local6; 		// m[esp - 0xe40]
    int local60; 		// m[esp_32 - 0xe3c]{0}
    int local61; 		// m[esp_32 - 0xe3c]{0}
    int local62; 		// m[esp_32 - 0xe40]{14}
    int local63; 		// m[esp_32 - 0xe40]{92}
    int local64; 		// m[esp_32 - 0xe40]{0}
    int local65; 		// m[esp_32 - 0xe40]{0}
    int local66; 		// m[esp_32 - 0xe40]{0}
    int local67; 		// m[esp_32 - 0xe40]{0}
    int local68; 		// m[esp_32 - 0xe40]{0}
    int local69; 		// m[esp_32 - 0xe40]{0}
    __size32 local7; 		// m[esp - 0xe44]
    int local70; 		// m[esp_32 - 0xe44]{14}
    int local71; 		// m[esp_32 - 0xe44]{92}
    int local72; 		// m[esp_32 - 0xe44]{0}
    int local73; 		// m[esp_32 - 0xe44]{0}
    int local74; 		// m[esp_32 - 0xe44]{0}
    int local75; 		// m[esp_32 - 0xe44]{0}
    int local76; 		// m[esp_32 - 0xe44]{0}
    int local77; 		// m[esp_32 - 0xe44]{0}
    int local78; 		// m[esp_32 - 0xe48]{14}
    int local79; 		// m[esp_32 - 0xe48]{92}
    __size32 local8; 		// m[esp - 0xe48]
    int local80; 		// m[esp_32 - 0xe48]{0}
    int local81; 		// m[esp_32 - 0xe48]{0}
    int local82; 		// m[esp_32 - 0xe48]{0}
    int local83; 		// m[esp_32 - 0xe48]{0}
    int local84; 		// m[esp_32 - 0xe48]{0}
    int local85; 		// m[esp_32 - 0xe48]{0}
    int local86; 		// m[esp_32 - 0xe4c]{14}
    int local87; 		// m[esp_32 - 0xe4c]{92}
    int local88; 		// m[esp_32 - 0xe4c]{0}
    int local89; 		// m[esp_32 - 0xe4c]{0}
    __size32 local9; 		// m[esp - 0xe4c]
    int local90; 		// m[esp_32 - 0xe4c]{0}
    int local91; 		// m[esp_32 - 0xe4c]{0}
    int local92; 		// m[esp_32 - 0xe4c]{0}
    int local93; 		// m[esp_32 - 0xe4c]{0}
    int local94; 		// m[esp_32 - 0xe50]{14}
    int local95; 		// m[esp_32 - 0xe50]{92}
    int local96; 		// m[esp_32 - 0xe50]{0}
    int local97; 		// m[esp_32 - 0xe50]{0}
    int local98; 		// m[esp_32 - 0xe50]{0}
    int local99; 		// m[esp_32 - 0xe50]{0}

    eax_2 = proc_0x00412ca0();
    local150 = eax_2;
    flags = LOGICALFLAGS32(eax_2);
    if (eax_2 == 0) {
        eax = proc_0x00412c90();
        local150 = eax;
        flags = ADDFLAGS32(esp_32 - 0xe50, 4, esp_32 - 0xe4c);
    }
    eax_1 = local150;
    (*MultiByteToWideChar)((unsigned char) global_0x00417000 ^ esp_32 - 4, eax_1, param1, esp_32 - 4, MultiByteToWideChar, param2, flags, ZF, CF, param3, ecx, edx, param1, param2, ebp, global_0x00417000 ^ esp_32 - 4, eax_2, local57, param2, ebx, esi, edi, 0, 0, -1, param2, 0, 0xfde9, pc);
    local151 = esp_1;
    if (eax >= 512) {
bb0x412483:
        esp_29 = local151;
        *(__size32*)(ebp - 0xe34) = 0x415cc8;
        local152 = esp_29;
    }
    else {
        *(unsigned int*)(esp_1 - 4) = eax;
        *(int*)(esp_1 - 8) = ebp - 0xe2c;
        *(__size32*)(esp_1 - 12) = -1;
        *(__size32*)(esp_1 - 16) = edi;
        *(__size32*)(esp_1 - 20) = 0;
        *(__size32*)(esp_1 - 24) = 0xfde9;
        (*esi)((unsigned char) ebp - 0xe2c, ebp - 0xe2c, ebx, ebp, esi, edi, <all>, SUBFLAGS32(eax, 512, eax - 512), eax == 512, eax < 512, cx, ecx, edx, local17, local23, local29, local37, local45, local53, local62, local70, local78, local86, local94, local102, local110, local118, local126, local134, local142);
        local151 = esp_4;
        local152 = esp_4;
        if (eax == 0) {
            goto bb0x412483;
        }
        else {
            *(int*)(ebp - 0xe34) = ebp - 0xe2c;
        }
    }
    cx = param3;
    esp_7 = local152;
    *(__size32*)(esp_7 - 4) = 0x1002;
    eax = proc_0x004122d0(); /* Warning: also results in ebx */
    edi = *(ebp + 16);
    if (eax == 0) {
        al = 1;
bb0x4124c8:
        esp_24 = esp_7;
        esi = *(ebp - 0xe30);
        local154 = esp_24;
        if (*(ebp - 0xe38) == 0 && esi == 0) {
bb0x4125e0:
            esp_28 = local154;
            eax = DebugBreak(); /* Warning: also results in edx, esp_14 */
            local155 = esp_14;
        }
        else {
            if (al == 0) {
bb0x4124f1:
                *(__size32*)(esp_7 - 4) = 260;
                *(int*)(esp_7 - 8) = ebp - 1044;
                *(int*)(esp_7 - 12) = ebp - 0xe30;
                *(__size32*)(esp_7 - 16) = 260;
                *(int*)(esp_7 - 20) = ebp - 524;
                *(int*)(esp_7 - 24) = ebx - 5;
                cx = proc_0x00413400(*(esp_7 - 96), *(esp_7 - 24), *(esp_7 - 20), *(esp_7 - 12), *(esp_7 - 8), *(esp_7 - 4), ebx - 5, ebp, edi); /* Warning: also results in edx, ebx, esp_10, ebp, esi, edi */
                if (esi == 0) {
                    edi = *(global_0x00415b7c + 0x2684);
                    *(__size32*)(esp_10 + 20) = 0;
                    *(__size32*)(esp_10 + 16) = 0;
                    *(__size32*)(esp_10 + 12) = 778;
                    *(__size32*)(esp_10 + 8) = ebp - 0xa2c;
                    *(__size32*)(esp_10 + 4) = -1;
                    *(__size32*)esp_10 = ebp - 524;
                    *(__size32*)(esp_10 - 4) = 0;
                    *(__size32*)(esp_10 - 8) = 0xfde9;
                    (*edi)(cx, (unsigned char) ebp - 0xa2c, ebp - 0xa2c, ebp - 524, edx, 0x415c60, ebp, esi, edi, <all>, LOGICALFLAGS32(esi), LOGICALFLAGS32(esi), LOGICALFLAGS32(esi), local17, local23, local32, local40, local48, local56, local65, local73, local81, local89, local97, local105, local113, local121, local129, local137, local145);
                    if (eax != 0) {
                        ebx = ebp - 0xa2c;
                    }
                    *(__size32*)(esp_15 - 4) = 0;
                    *(__size32*)(esp_15 - 8) = 0;
                    *(__size32*)(esp_15 - 12) = 778;
                    *(__size32*)(esp_15 - 16) = ebp - 1824;
                    *(__size32*)(esp_15 - 20) = -1;
                    *(__size32*)(esp_15 - 24) = ebp - 1044;
                    *(__size32*)(esp_15 - 28) = 0;
                    *(__size32*)(esp_15 - 32) = 0xfde9;
                    (*edi)(cx, (unsigned char) ebp - 1044, ebp - 1044, ecx, ebp - 1824, ebx, ebp, 0x415c48, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), local20, local26, local30, local38, local46, local54, local63, local71, local79, local87, local95, local103, local111, local119, local127, local135, local143);
                    if (eax_3 != 0) {
                        esi = ebp - 1824;
                    }
                    ecx = *(ebp - 0xe3c);
                    edx = *(ebp + 16);
                    eax_6 = *(ebp - 0xe30);
                    *(__size32*)(esp_18 - 4) = ecx;
                    ecx = *(ebp + 12);
                    *(__size32*)(esp_18 - 8) = edx;
                    *(__size32*)(esp_18 - 12) = 0x415c20;
                    *(__size32*)(esp_18 - 16) = esi;
                    *(__size32*)(esp_18 - 20) = eax_6;
                    *(__size32*)(esp_18 - 24) = ebx;
                    *(__size32*)(esp_18 - 28) = ecx;
                    (**(ebp - 0xe38))(cx, (unsigned char) eax_6, eax_6, ecx, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax_3), LOGICALFLAGS32(eax_3), LOGICALFLAGS32(eax_3), *(esp_32 + 4), *(esp_32 + 16), *(esp_32 - 4), *(esp_32 - 8), *(esp_32 - 0xe34), *(esp_32 - 0xe3c), *(esp_32 - 0xe40), *(esp_32 - 0xe44), *(esp_32 - 0xe48), *(esp_32 - 0xe4c), *(esp_32 - 0xe50), *(esp_32 - 0xe54), *(esp_32 - 0xe58), *(esp_32 - 0xe5c), *(esp_32 - 0xe60), *(esp_32 - 0xe64), *(esp_32 - 0xe68));
                    local153 = esp_21;
                }
                else {
                    ecx = *(ebp - 0xe34);
                    eax = *(ebp - 0xe30);
                    *(__size32*)(esp_10 + 20) = ecx;
                    *(__size32*)(esp_10 + 16) = edi;
                    *(__size32*)(esp_10 + 12) = 0x415c78;
                    *(__size32*)(esp_10 + 8) = ebp - 1044;
                    edx = *(ebp + 12);
                    *(__size32*)(esp_10 + 4) = eax;
                    *(__size32*)esp_10 = ebp - 524;
                    *(__size32*)(esp_10 - 4) = edx;
                    (*esi)(cx, (unsigned char) eax, eax, ebp - 524, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(esi), LOGICALFLAGS32(esi), LOGICALFLAGS32(esi), local17, local23, local32, local40, local48, local56, local65, local73, local81, local89, local97, local105, local113, local121, local129, local137, local145);
                    local153 = esp_13;
                }
                esp_23 = local153;
                esp_22 = esp_23 + 28;
                local154 = esp_22;
                local155 = esp_22;
                if (eax == 1) {
                    goto bb0x4125e0;
                }
            }
            else {
                eax = IsDebuggerPresent(); /* Warning: also results in esp_9 */
                local154 = esp_9;
                if (eax != 0) {
                    goto bb0x4125e0;
                }
                else {
                    goto bb0x4124f1;
                }
            }
        }
    }
    else {
        edx = *(ebp - 0xe34);
        *(__size32*)(esp_7 - 4) = edx;
        *(unsigned int*)(esp_7 - 8) = ebx;
        *(__size32*)(esp_7 - 12) = global_0x00415b7c[edi];
        *(int*)(esp_7 - 16) = edi;
        eax = proc_0x00412680(); /* Warning: also results in al, edx, ebx, edi */
        esp_8 = esp_7;
        local155 = esp_8;
        if (eax == 0) {
            al = 0;
            goto bb0x4124c8;
        }
    }
    esp_25 = local155;
    ecx = *(ebp - 4);
    edi = *esp_25;
    esi = *(esp_25 + 4);
    ebx = *(esp_25 + 8);
    proc_0x00411970(cx, al, eax, ecx ^ ebp, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), local17, local23, local31, local39, local47, local55, local64, local72, local80, local88, local96, local104, local112, local120, local128, local136, local144);
    return;
}

/** address: 0x00412ca0 */
__size32 proc_0x00412ca0()
{
    return global_0x0041753c;
}

/** address: 0x00412c90 */
__size32 proc_0x00412c90()
{
    return global_0x00417538;
}

/** address: 0x004122d0 */
__size32 proc_0x004122d0()
{
    __size32 eax; 		// r24
    int esp; 		// r28

    eax = *0;
    *(int*)0 = (esp - 20);
    RaiseException();
    *(__size32*)0 = eax;
    return 0; /* WARNING: Also returning: ebx := (esp - 56) */
}

/** address: 0x00412680 */
__size32 proc_0x00412680()
{
    __size32 eax; 		// r24
    int edx; 		// r26
    int esp; 		// r28

    eax = *0;
    *(int*)0 = (esp - 20);
    edx = RaiseException();
    *(__size32*)0 = eax;
    return 0; /* WARNING: Also returning: al := 0, edx := edx, ebx := (esp - 56), edi := 0 */
}

/** address: 0x00413400 */
__size16 proc_0x00413400(union { int; __size16 *; } param1, unsigned int param2, union { __size16 *; __size32; } param3, union { __size32 *; __size32; } param4, union { LPWSTR; __size32; } param5, unsigned int param6, unsigned int param7, __size32 param8, __size32 param9)
{
    char al; 		// r8
    short cx; 		// r1
    BOOL eax; 		// r24
    unsigned int eax_1; 		// r24{42}
    unsigned int eax_10; 		// r24{112}
    __size32 eax_11; 		// r24{116}
    unsigned int eax_12; 		// r24{135}
    __size32 eax_13; 		// r24{140}
    unsigned int eax_14; 		// r24{232}
    unsigned int eax_15; 		// r24{234}
    unsigned int eax_16; 		// r24{234}
    int eax_17; 		// r24{237}
    int eax_18; 		// r24{237}
    int eax_19; 		// r24{237}
    union { __size32; int *; } eax_2; 		// r24{42}
    __size32 eax_20; 		// r24{247}
    __size32 eax_21; 		// r24{249}
    __size32 eax_22; 		// r24{249}
    union { __size32; int *; } eax_23; 		// r24{50}
    union { __size32; int *; } eax_24; 		// r24{50}
    unsigned int eax_25; 		// r24{232}
    unsigned int eax_26; 		// r24{232}
    unsigned int eax_27; 		// r24{236}
    __size32 eax_3; 		// r24{42}
    __size32 eax_4; 		// r24{59}
    __size32 eax_5; 		// r24{95}
    __size32 eax_6; 		// r24{95}
    __size32 eax_7; 		// r24{95}
    union { __size32; __size32 *; } eax_8; 		// r24{108}
    union { __size32; __size32 *; } eax_9; 		// r24{108}
    __size32 ebp; 		// r29
    __size32 ebp_1; 		// r29{12}
    __size32 ebp_2; 		// r29{12}
    __size32 ebp_3; 		// r29{3}
    __size32 ebp_4; 		// r29{3}
    unsigned int ebx; 		// r27
    __size32 ebx_1; 		// r27{65}
    __size32 ebx_10; 		// r27{65}
    __size32 ebx_11; 		// r27{65}
    unsigned int ebx_12; 		// r27{7}
    unsigned int ebx_13; 		// r27{7}
    __size32 ebx_2; 		// r27{45}
    __size32 ebx_3; 		// r27{45}
    __size32 ebx_4; 		// r27{45}
    __size32 ebx_5; 		// r27{51}
    __size32 ebx_6; 		// r27{58}
    __size32 ebx_7; 		// r27{58}
    __size32 ebx_8; 		// r27{51}
    __size32 ebx_9; 		// r27{51}
    int ecx; 		// r25
    __size32 edi; 		// r31
    int edi_1; 		// r31{66}
    int edi_10; 		// r31{66}
    int edi_11; 		// r31{66}
    __size32 edi_12; 		// r31{1}
    __size32 edi_13; 		// r31{1}
    int edi_2; 		// r31{57}
    union { unsigned int; __size16 *; } edi_3; 		// r31{41}
    int edi_4; 		// r31{44}
    int edi_5; 		// r31{44}
    int edi_6; 		// r31{44}
    int edi_7; 		// r31{52}
    int edi_8; 		// r31{57}
    int edi_9; 		// r31{57}
    int edx; 		// r26
    int esi; 		// r30
    int esp; 		// r28
    __size32 esp_1; 		// r28{40}
    __size32 esp_10; 		// r28{95}
    __size32 esp_11; 		// r28{95}
    __size32 esp_12; 		// r28{96}
    __size32 esp_13; 		// r28{112}
    __size32 esp_14; 		// r28{112}
    __size32 esp_15; 		// r28{112}
    __size32 esp_16; 		// r28{122}
    __size32 esp_17; 		// r28{122}
    __size32 esp_18; 		// r28{122}
    __size32 esp_19; 		// r28{135}
    __size32 esp_2; 		// r28{40}
    __size32 esp_20; 		// r28{135}
    __size32 esp_21; 		// r28{135}
    __size32 esp_22; 		// r28{144}
    __size32 esp_23; 		// r28{144}
    __size32 esp_24; 		// r28{144}
    __size32 esp_25; 		// r28{153}
    __size32 esp_26; 		// r28{174}
    __size32 esp_27; 		// r28{174}
    __size32 esp_28; 		// r28{174}
    __size32 esp_29; 		// r28{193}
    __size32 esp_3; 		// r28{40}
    __size32 esp_30; 		// r28{193}
    __size32 esp_31; 		// r28{193}
    __size32 esp_32; 		// r28{309}
    __size32 esp_33; 		// r28{296}
    __size32 esp_34; 		// r28{270}
    __size32 esp_35; 		// r28{283}
    __size32 esp_36; 		// r28{208}
    __size32 esp_37; 		// r28{222}
    __size32 esp_38; 		// r28{222}
    __size32 esp_39; 		// r28{222}
    __size32 esp_4; 		// r28{70}
    __size32 esp_40; 		// r28{252}
    __size32 esp_41; 		// r28{252}
    __size32 esp_42; 		// r28{252}
    __size32 esp_43; 		// r28{80}
    __size32 esp_44; 		// r28{80}
    __size32 esp_45; 		// r28{311}
    __size32 esp_46; 		// r28{298}
    __size32 esp_47; 		// r28{285}
    __size32 esp_48; 		// r28{157}
    __size32 esp_49; 		// r28{157}
    __size32 esp_5; 		// r28{70}
    __size32 esp_50; 		// r28{157}
    __size32 esp_51; 		// r28{257}
    __size32 esp_52; 		// r28{257}
    __size32 esp_53; 		// r28{257}
    __size32 esp_54; 		// r28{272}
    __size32 esp_55; 		// r28{2}
    __size32 esp_56; 		// r28{2}
    __size32 esp_6; 		// r28{70}
    __size32 esp_7; 		// r28{80}
    union { __size32; __size32 *; } esp_8; 		// r28{84}
    __size32 esp_9; 		// r28{95}
    int local0; 		// m[esp - 88]
    union { __size16 *; int; } local1; 		// m[esp - 100]
    union { int; __size16 *; } local10; 		// m[esp - 68]
    int local100; 		// m[esp_55 + 20]{153}
    __size32 local1000; 		// ebx_5{51}
    int local1001; 		// edi_7{52}
    int local1002; 		// edi_2{57}
    union { int *; unsigned int; } local1003; 		// eax{63}
    __size32 local1004; 		// ebx_1{65}
    int local1005; 		// edi_1{66}
    __size32 local1006; 		// esp_7{80}
    union { __size32 *; __size32; } local1007; 		// esp{100}
    union { __size32 *; __size32; } local1008; 		// ebp{101}
    __size32 local1009; 		// esp_48{157}
    int local101; 		// m[esp_55 + 20]{153}
    int local1010; 		// local345{161}
    int local1011; 		// local568{162}
    int local1012; 		// local791{163}
    int local1013; 		// local340{186}
    int local1014; 		// local563{187}
    int local1015; 		// local786{188}
    unsigned int local1016; 		// eax_14{232}
    __size32 local1017; 		// esp_51{257}
    int local1018; 		// local332{261}
    int local1019; 		// local555{262}
    int local102; 		// m[esp_55 + 20]{174}
    int local1020; 		// local778{263}
    __size32 local1021; 		// esp_54{272}
    int local1022; 		// local331{276}
    int local1023; 		// local554{277}
    int local1024; 		// local777{278}
    __size32 local1025; 		// esp_47{285}
    int local1026; 		// local329{289}
    int local1027; 		// local552{290}
    int local1028; 		// local775{291}
    __size32 local1029; 		// esp_46{298}
    int local103; 		// m[esp_55 + 20]{174}
    int local1030; 		// local327{302}
    int local1031; 		// local550{303}
    int local1032; 		// local773{304}
    __size32 local1033; 		// esp_45{311}
    int local1034; 		// %flags{315}
    int local1035; 		// %ZF{316}
    int local1036; 		// %CF{317}
    int local104; 		// m[esp_55 + 20]{174}
    union { __size32; LPWSTR; } local105; 		// m[esp_55 + 20]{9}
    union { __size32; LPWSTR; } local106; 		// m[esp_55 + 20]{9}
    int local107; 		// m[esp_55 + 24]{95}
    int local108; 		// m[esp_55 + 24]{95}
    int local109; 		// m[esp_55 + 24]{95}
    __size32 local11; 		// m[esp - 76]
    int local110; 		// m[esp_55 + 24]{112}
    int local111; 		// m[esp_55 + 24]{112}
    int local112; 		// m[esp_55 + 24]{112}
    int local113; 		// m[esp_55 + 24]{122}
    int local114; 		// m[esp_55 + 24]{122}
    int local115; 		// m[esp_55 + 24]{122}
    int local116; 		// m[esp_55 + 24]{135}
    int local117; 		// m[esp_55 + 24]{135}
    int local118; 		// m[esp_55 + 24]{135}
    int local119; 		// m[esp_55 + 24]{144}
    int local12; 		// m[esp - 80]
    int local120; 		// m[esp_55 + 24]{144}
    int local121; 		// m[esp_55 + 24]{144}
    int local122; 		// m[esp_55 + 24]{153}
    int local123; 		// m[esp_55 + 24]{153}
    int local124; 		// m[esp_55 + 24]{153}
    int local125; 		// m[esp_55 + 24]{174}
    int local126; 		// m[esp_55 + 24]{174}
    int local127; 		// m[esp_55 + 24]{174}
    unsigned int local128; 		// m[esp_55 + 24]{8}
    unsigned int local129; 		// m[esp_55 + 24]{8}
    __size32 local13; 		// m[esp - 84]
    int local130; 		// m[esp_55 - 4]{95}
    int local131; 		// m[esp_55 - 4]{112}
    int local132; 		// m[esp_55 - 4]{122}
    int local133; 		// m[esp_55 - 4]{135}
    int local134; 		// m[esp_55 - 4]{144}
    int local135; 		// m[esp_55 - 4]{174}
    int local136; 		// m[esp_55 - 4]{174}
    int local137; 		// m[esp_55 - 4]{174}
    __size32 local138; 		// m[esp_55 - 4]{0}
    __size32 local139; 		// m[esp_55 - 4]{0}
    unsigned int local14; 		// m[esp - 104]
    __size32 local140; 		// m[esp_55 - 4]{0}
    __size32 local141; 		// m[esp_55 - 4]{0}
    __size32 local142; 		// m[esp_55 - 4]{0}
    int local143; 		// m[esp_55 - 4]{222}
    int local144; 		// m[esp_55 - 4]{222}
    __size32 local145; 		// m[esp_55 - 4]{0}
    __size32 local146; 		// m[esp_55 - 4]{0}
    __size32 local147; 		// m[esp_55 - 4]{0}
    __size32 local148; 		// m[esp_55 - 4]{0}
    int local149; 		// m[esp_55 - 68]{95}
    int local15; 		// m[esp_55 + 4]{95}
    int local150; 		// m[esp_55 - 68]{95}
    int local151; 		// m[esp_55 - 68]{95}
    int local152; 		// m[esp_55 - 68]{112}
    int local153; 		// m[esp_55 - 68]{112}
    int local154; 		// m[esp_55 - 68]{112}
    int local155; 		// m[esp_55 - 68]{122}
    int local156; 		// m[esp_55 - 68]{122}
    int local157; 		// m[esp_55 - 68]{122}
    int local158; 		// m[esp_55 - 68]{135}
    int local159; 		// m[esp_55 - 68]{135}
    int local16; 		// m[esp_55 + 4]{95}
    int local160; 		// m[esp_55 - 68]{135}
    int local161; 		// m[esp_55 - 68]{144}
    int local162; 		// m[esp_55 - 68]{144}
    int local163; 		// m[esp_55 - 68]{144}
    int local164; 		// m[esp_55 - 68]{153}
    int local165; 		// m[esp_55 - 68]{153}
    int local166; 		// m[esp_55 - 68]{153}
    int local167; 		// m[esp_55 - 68]{174}
    int local168; 		// m[esp_55 - 68]{174}
    int local169; 		// m[esp_55 - 68]{174}
    int local17; 		// m[esp_55 + 4]{95}
    union { __size16 *; int; } local170; 		// m[esp_55 - 68]{10}
    union { __size16 *; int; } local171; 		// m[esp_55 - 68]{10}
    int local172; 		// m[esp_55 - 76]{95}
    int local173; 		// m[esp_55 - 76]{112}
    int local174; 		// m[esp_55 - 76]{122}
    int local175; 		// m[esp_55 - 76]{135}
    int local176; 		// m[esp_55 - 76]{144}
    int local177; 		// m[esp_55 - 76]{174}
    int local178; 		// m[esp_55 - 76]{174}
    int local179; 		// m[esp_55 - 76]{174}
    int local18; 		// m[esp_55 + 4]{112}
    __size32 local180; 		// m[esp_55 - 76]{0}
    __size32 local181; 		// m[esp_55 - 76]{0}
    __size32 local182; 		// m[esp_55 - 76]{0}
    __size32 local183; 		// m[esp_55 - 76]{0}
    __size32 local184; 		// m[esp_55 - 76]{0}
    int local185; 		// m[esp_55 - 76]{222}
    int local186; 		// m[esp_55 - 76]{222}
    __size32 local187; 		// m[esp_55 - 76]{0}
    __size32 local188; 		// m[esp_55 - 76]{0}
    __size32 local189; 		// m[esp_55 - 76]{0}
    int local19; 		// m[esp_55 + 4]{112}
    __size32 local190; 		// m[esp_55 - 76]{0}
    int local191; 		// m[esp_55 - 80]{95}
    int local192; 		// m[esp_55 - 80]{112}
    int local193; 		// m[esp_55 - 80]{122}
    int local194; 		// m[esp_55 - 80]{135}
    int local195; 		// m[esp_55 - 80]{144}
    int local196; 		// m[esp_55 - 80]{174}
    int local197; 		// m[esp_55 - 80]{174}
    int local198; 		// m[esp_55 - 80]{174}
    __size32 local199; 		// m[esp_55 - 80]{0}
    LPWSTR local2; 		// m[esp - 96]
    int local20; 		// m[esp_55 + 4]{112}
    __size32 local200; 		// m[esp_55 - 80]{0}
    __size32 local201; 		// m[esp_55 - 80]{0}
    __size32 local202; 		// m[esp_55 - 80]{0}
    __size32 local203; 		// m[esp_55 - 80]{0}
    int local204; 		// m[esp_55 - 80]{222}
    int local205; 		// m[esp_55 - 80]{222}
    __size32 local206; 		// m[esp_55 - 80]{0}
    __size32 local207; 		// m[esp_55 - 80]{0}
    __size32 local208; 		// m[esp_55 - 80]{0}
    __size32 local209; 		// m[esp_55 - 80]{0}
    int local21; 		// m[esp_55 + 4]{122}
    int local210; 		// m[esp_55 - 84]{95}
    int local211; 		// m[esp_55 - 84]{112}
    int local212; 		// m[esp_55 - 84]{122}
    int local213; 		// m[esp_55 - 84]{135}
    int local214; 		// m[esp_55 - 84]{144}
    int local215; 		// m[esp_55 - 84]{174}
    int local216; 		// m[esp_55 - 84]{174}
    int local217; 		// m[esp_55 - 84]{174}
    __size32 local218; 		// m[esp_55 - 84]{0}
    __size32 local219; 		// m[esp_55 - 84]{0}
    int local22; 		// m[esp_55 + 4]{122}
    __size32 local220; 		// m[esp_55 - 84]{0}
    __size32 local221; 		// m[esp_55 - 84]{0}
    __size32 local222; 		// m[esp_55 - 84]{0}
    int local223; 		// m[esp_55 - 84]{222}
    int local224; 		// m[esp_55 - 84]{222}
    __size32 local225; 		// m[esp_55 - 84]{0}
    __size32 local226; 		// m[esp_55 - 84]{0}
    __size32 local227; 		// m[esp_55 - 84]{0}
    __size32 local228; 		// m[esp_55 - 84]{0}
    int local229; 		// m[esp_55 - 88]{15}
    int local23; 		// m[esp_55 + 4]{122}
    int local230; 		// m[esp_55 - 88]{95}
    int local231; 		// m[esp_55 - 88]{112}
    int local232; 		// m[esp_55 - 88]{122}
    int local233; 		// m[esp_55 - 88]{135}
    int local234; 		// m[esp_55 - 88]{144}
    int local235; 		// m[esp_55 - 88]{174}
    int local236; 		// m[esp_55 - 88]{174}
    int local237; 		// m[esp_55 - 88]{174}
    int local238; 		// m[esp_55 - 88]{0}
    int local239; 		// m[esp_55 - 88]{0}
    int local24; 		// m[esp_55 + 4]{135}
    int local240; 		// m[esp_55 - 88]{0}
    int local241; 		// m[esp_55 - 88]{0}
    int local242; 		// m[esp_55 - 88]{0}
    int local243; 		// m[esp_55 - 88]{222}
    int local244; 		// m[esp_55 - 88]{222}
    int local245; 		// m[esp_55 - 88]{0}
    int local246; 		// m[esp_55 - 88]{0}
    int local247; 		// m[esp_55 - 88]{0}
    int local248; 		// m[esp_55 - 88]{0}
    int local249; 		// m[esp_55 - 92]{95}
    int local25; 		// m[esp_55 + 4]{135}
    int local250; 		// m[esp_55 - 92]{112}
    int local251; 		// m[esp_55 - 92]{122}
    int local252; 		// m[esp_55 - 92]{135}
    int local253; 		// m[esp_55 - 92]{144}
    int local254; 		// m[esp_55 - 92]{174}
    int local255; 		// m[esp_55 - 92]{174}
    int local256; 		// m[esp_55 - 92]{174}
    unsigned int local257; 		// m[esp_55 - 92]{0}
    unsigned int local258; 		// m[esp_55 - 92]{0}
    unsigned int local259; 		// m[esp_55 - 92]{0}
    int local26; 		// m[esp_55 + 4]{135}
    unsigned int local260; 		// m[esp_55 - 92]{0}
    unsigned int local261; 		// m[esp_55 - 92]{0}
    int local262; 		// m[esp_55 - 92]{222}
    int local263; 		// m[esp_55 - 92]{222}
    unsigned int local264; 		// m[esp_55 - 92]{0}
    unsigned int local265; 		// m[esp_55 - 92]{0}
    unsigned int local266; 		// m[esp_55 - 92]{0}
    unsigned int local267; 		// m[esp_55 - 92]{0}
    int local268; 		// m[esp_55 - 96]{95}
    int local269; 		// m[esp_55 - 96]{112}
    int local27; 		// m[esp_55 + 4]{144}
    int local270; 		// m[esp_55 - 96]{122}
    int local271; 		// m[esp_55 - 96]{135}
    int local272; 		// m[esp_55 - 96]{144}
    int local273; 		// m[esp_55 - 96]{174}
    int local274; 		// m[esp_55 - 96]{174}
    int local275; 		// m[esp_55 - 96]{174}
    __size32 local276; 		// m[esp_55 - 96]{0}
    __size32 local277; 		// m[esp_55 - 96]{0}
    __size32 local278; 		// m[esp_55 - 96]{0}
    __size32 local279; 		// m[esp_55 - 96]{0}
    int local28; 		// m[esp_55 + 4]{144}
    __size32 local280; 		// m[esp_55 - 96]{0}
    int local281; 		// m[esp_55 - 96]{222}
    int local282; 		// m[esp_55 - 96]{222}
    __size32 local283; 		// m[esp_55 - 96]{0}
    __size32 local284; 		// m[esp_55 - 96]{0}
    __size32 local285; 		// m[esp_55 - 96]{0}
    __size32 local286; 		// m[esp_55 - 96]{0}
    int local287; 		// m[esp_55 - 100]{95}
    int local288; 		// m[esp_55 - 100]{112}
    int local289; 		// m[esp_55 - 100]{122}
    int local29; 		// m[esp_55 + 4]{144}
    int local290; 		// m[esp_55 - 100]{135}
    int local291; 		// m[esp_55 - 100]{144}
    int local292; 		// m[esp_55 - 100]{174}
    int local293; 		// m[esp_55 - 100]{174}
    int local294; 		// m[esp_55 - 100]{174}
    unsigned int local295; 		// m[esp_55 - 100]{0}
    unsigned int local296; 		// m[esp_55 - 100]{0}
    unsigned int local297; 		// m[esp_55 - 100]{0}
    unsigned int local298; 		// m[esp_55 - 100]{0}
    unsigned int local299; 		// m[esp_55 - 100]{0}
    unsigned int local3; 		// m[esp - 92]
    int local30; 		// m[esp_55 + 4]{153}
    unsigned int local300; 		// m[esp_55 - 100]{0}
    int local301; 		// m[esp_55 - 100]{222}
    int local302; 		// m[esp_55 - 100]{222}
    unsigned int local303; 		// m[esp_55 - 100]{0}
    unsigned int local304; 		// m[esp_55 - 100]{0}
    unsigned int local305; 		// m[esp_55 - 100]{0}
    unsigned int local306; 		// m[esp_55 - 100]{0}
    int local307; 		// m[esp_55 - 104]{95}
    int local308; 		// m[esp_55 - 104]{112}
    int local309; 		// m[esp_55 - 104]{122}
    int local31; 		// m[esp_55 + 4]{153}
    int local310; 		// m[esp_55 - 104]{135}
    int local311; 		// m[esp_55 - 104]{144}
    int local312; 		// m[esp_55 - 104]{174}
    int local313; 		// m[esp_55 - 104]{174}
    int local314; 		// m[esp_55 - 104]{174}
    unsigned int local315; 		// m[esp_55 - 104]{0}
    unsigned int local316; 		// m[esp_55 - 104]{0}
    unsigned int local317; 		// m[esp_55 - 104]{0}
    unsigned int local318; 		// m[esp_55 - 104]{0}
    unsigned int local319; 		// m[esp_55 - 104]{0}
    int local32; 		// m[esp_55 + 4]{153}
    int local320; 		// m[esp_55 - 104]{222}
    int local321; 		// m[esp_55 - 104]{222}
    unsigned int local322; 		// m[esp_55 - 104]{0}
    unsigned int local323; 		// m[esp_55 - 104]{0}
    unsigned int local324; 		// m[esp_55 - 104]{0}
    unsigned int local325; 		// m[esp_55 - 104]{0}
    int local326; 		// %flags{113}
    int local327; 		// %flags{302}
    int local328; 		// %flags{113}
    int local329; 		// %flags{289}
    int local33; 		// m[esp_55 + 4]{174}
    int local330; 		// %flags{113}
    int local331; 		// %flags{276}
    int local332; 		// %flags{261}
    int local333; 		// %flags{113}
    int local334; 		// %flags{113}
    int local335; 		// %flags{113}
    int local336; 		// %flags{113}
    int local337; 		// %flags{113}
    int local338; 		// %flags{113}
    int local339; 		// %flags{113}
    int local34; 		// m[esp_55 + 4]{174}
    int local340; 		// %flags{186}
    int local341; 		// %flags{113}
    int local342; 		// %flags{113}
    int local343; 		// %flags{113}
    int local344; 		// %flags{113}
    int local345; 		// %flags{161}
    int local346; 		// %flags{113}
    int local347; 		// %flags{113}
    int local348; 		// %flags{113}
    int local349; 		// %flags{113}
    int local35; 		// m[esp_55 + 4]{174}
    int local350; 		// %flags{113}
    int local351; 		// %flags{123}
    int local352; 		// %flags{123}
    int local353; 		// %flags{123}
    int local354; 		// %flags{123}
    int local355; 		// %flags{123}
    int local356; 		// %flags{123}
    int local357; 		// %flags{123}
    int local358; 		// %flags{123}
    int local359; 		// %flags{123}
    unsigned int local36; 		// m[esp_55 + 4]{6}
    int local360; 		// %flags{123}
    int local361; 		// %flags{123}
    int local362; 		// %flags{123}
    int local363; 		// %flags{123}
    int local364; 		// %flags{123}
    int local365; 		// %flags{123}
    int local366; 		// %flags{123}
    int local367; 		// %flags{123}
    int local368; 		// %flags{123}
    int local369; 		// %flags{136}
    unsigned int local37; 		// m[esp_55 + 4]{6}
    int local370; 		// %flags{136}
    int local371; 		// %flags{136}
    int local372; 		// %flags{136}
    int local373; 		// %flags{136}
    int local374; 		// %flags{136}
    int local375; 		// %flags{136}
    int local376; 		// %flags{136}
    int local377; 		// %flags{136}
    int local378; 		// %flags{136}
    int local379; 		// %flags{136}
    int local38; 		// m[esp_55 + 8]{95}
    int local380; 		// %flags{136}
    int local381; 		// %flags{136}
    int local382; 		// %flags{136}
    int local383; 		// %flags{136}
    int local384; 		// %flags{136}
    int local385; 		// %flags{136}
    int local386; 		// %flags{145}
    int local387; 		// %flags{145}
    int local388; 		// %flags{145}
    int local389; 		// %flags{145}
    int local39; 		// m[esp_55 + 8]{95}
    int local390; 		// %flags{145}
    int local391; 		// %flags{145}
    int local392; 		// %flags{145}
    int local393; 		// %flags{145}
    int local394; 		// %flags{145}
    int local395; 		// %flags{145}
    int local396; 		// %flags{145}
    int local397; 		// %flags{145}
    int local398; 		// %flags{145}
    int local399; 		// %flags{145}
    unsigned int local4; 		// m[esp + 4]
    int local40; 		// m[esp_55 + 8]{95}
    int local400; 		// %flags{145}
    int local401; 		// %flags{145}
    int local402; 		// %flags{148}
    int local403; 		// %flags{148}
    int local404; 		// %flags{148}
    int local405; 		// %flags{148}
    int local406; 		// %flags{148}
    int local407; 		// %flags{148}
    int local408; 		// %flags{148}
    int local409; 		// %flags{148}
    int local41; 		// m[esp_55 + 8]{112}
    int local410; 		// %flags{148}
    int local411; 		// %flags{148}
    int local412; 		// %flags{148}
    int local413; 		// %flags{148}
    int local414; 		// %flags{148}
    int local415; 		// %flags{148}
    int local416; 		// %flags{148}
    int local417; 		// %flags{154}
    int local418; 		// %flags{154}
    int local419; 		// %flags{154}
    int local42; 		// m[esp_55 + 8]{112}
    int local420; 		// %flags{154}
    int local421; 		// %flags{154}
    int local422; 		// %flags{154}
    int local423; 		// %flags{154}
    int local424; 		// %flags{154}
    int local425; 		// %flags{154}
    int local426; 		// %flags{154}
    int local427; 		// %flags{154}
    int local428; 		// %flags{154}
    int local429; 		// %flags{154}
    int local43; 		// m[esp_55 + 8]{112}
    int local430; 		// %flags{154}
    int local431; 		// %flags{175}
    int local432; 		// %flags{175}
    int local433; 		// %flags{175}
    int local434; 		// %flags{175}
    int local435; 		// %flags{175}
    int local436; 		// %flags{175}
    int local437; 		// %flags{175}
    int local438; 		// %flags{175}
    int local439; 		// %flags{175}
    int local44; 		// m[esp_55 + 8]{122}
    int local440; 		// %flags{175}
    int local441; 		// %flags{175}
    int local442; 		// %flags{175}
    int local443; 		// %flags{175}
    int local444; 		// %flags{175}
    int local445; 		// %flags{175}
    int local446; 		// %flags{178}
    int local447; 		// %flags{178}
    int local448; 		// %flags{178}
    int local449; 		// %flags{178}
    int local45; 		// m[esp_55 + 8]{122}
    int local450; 		// %flags{178}
    int local451; 		// %flags{178}
    int local452; 		// %flags{178}
    int local453; 		// %flags{178}
    int local454; 		// %flags{178}
    int local455; 		// %flags{178}
    int local456; 		// %flags{178}
    int local457; 		// %flags{178}
    int local458; 		// %flags{178}
    int local459; 		// %flags{178}
    int local46; 		// m[esp_55 + 8]{122}
    int local460; 		// %flags{181}
    int local461; 		// %flags{181}
    int local462; 		// %flags{181}
    int local463; 		// %flags{181}
    int local464; 		// %flags{181}
    int local465; 		// %flags{181}
    int local466; 		// %flags{181}
    int local467; 		// %flags{181}
    int local468; 		// %flags{181}
    int local469; 		// %flags{181}
    int local47; 		// m[esp_55 + 8]{135}
    int local470; 		// %flags{181}
    int local471; 		// %flags{181}
    int local472; 		// %flags{181}
    int local473; 		// %flags{184}
    int local474; 		// %flags{184}
    int local475; 		// %flags{184}
    int local476; 		// %flags{184}
    int local477; 		// %flags{184}
    int local478; 		// %flags{184}
    int local479; 		// %flags{184}
    int local48; 		// m[esp_55 + 8]{135}
    int local480; 		// %flags{184}
    int local481; 		// %flags{184}
    int local482; 		// %flags{184}
    int local483; 		// %flags{184}
    int local484; 		// %flags{184}
    int local485; 		// %flags{194}
    int local486; 		// %flags{194}
    int local487; 		// %flags{194}
    int local488; 		// %flags{194}
    int local489; 		// %flags{194}
    int local49; 		// m[esp_55 + 8]{135}
    int local490; 		// %flags{194}
    int local491; 		// %flags{194}
    int local492; 		// %flags{194}
    int local493; 		// %flags{194}
    int local494; 		// %flags{194}
    int local495; 		// %flags{194}
    int local496; 		// %flags{302}
    int local497; 		// %flags{309}
    int local498; 		// %flags{309}
    int local499; 		// %flags{309}
    union { __size16 *; __size32; } local5; 		// m[esp + 8]
    int local50; 		// m[esp_55 + 8]{144}
    int local500; 		// %flags{309}
    int local501; 		// %flags{309}
    int local502; 		// %flags{309}
    int local503; 		// %flags{309}
    int local504; 		// %flags{309}
    int local505; 		// %flags{309}
    int local506; 		// %flags{309}
    int local507; 		// %flags{296}
    int local508; 		// %flags{296}
    int local509; 		// %flags{296}
    int local51; 		// m[esp_55 + 8]{144}
    int local510; 		// %flags{296}
    int local511; 		// %flags{296}
    int local512; 		// %flags{296}
    int local513; 		// %flags{296}
    int local514; 		// %flags{296}
    int local515; 		// %flags{283}
    int local516; 		// %flags{283}
    int local517; 		// %flags{283}
    int local518; 		// %flags{283}
    int local519; 		// %flags{283}
    int local52; 		// m[esp_55 + 8]{144}
    int local520; 		// %flags{283}
    int local521; 		// %flags{283}
    int local522; 		// %flags{198}
    int local523; 		// %flags{198}
    int local524; 		// %flags{198}
    int local525; 		// %flags{198}
    int local526; 		// %flags{198}
    int local527; 		// %flags{198}
    int local528; 		// %flags{200}
    int local529; 		// %flags{200}
    int local53; 		// m[esp_55 + 8]{153}
    int local530; 		// %flags{200}
    int local531; 		// %flags{200}
    int local532; 		// %flags{200}
    int local533; 		// %flags{210}
    int local534; 		// %flags{210}
    int local535; 		// %flags{210}
    int local536; 		// %flags{210}
    int local537; 		// %flags{223}
    int local538; 		// %flags{223}
    int local539; 		// %flags{223}
    int local54; 		// m[esp_55 + 8]{153}
    int local540; 		// %flags{227}
    int local541; 		// %flags{227}
    int local542; 		// %flags{253}
    int local543; 		// %flags{253}
    int local544; 		// %flags{253}
    int local545; 		// %flags{161}
    int local546; 		// %flags{161}
    int local547; 		// %flags{186}
    int local548; 		// %flags{186}
    int local549; 		// %ZF{113}
    int local55; 		// m[esp_55 + 8]{153}
    int local550; 		// %ZF{303}
    int local551; 		// %ZF{113}
    int local552; 		// %ZF{290}
    int local553; 		// %ZF{113}
    int local554; 		// %ZF{277}
    int local555; 		// %ZF{262}
    int local556; 		// %ZF{113}
    int local557; 		// %ZF{113}
    int local558; 		// %ZF{113}
    int local559; 		// %ZF{113}
    int local56; 		// m[esp_55 + 8]{174}
    int local560; 		// %ZF{113}
    int local561; 		// %ZF{113}
    int local562; 		// %ZF{113}
    int local563; 		// %ZF{187}
    int local564; 		// %ZF{113}
    int local565; 		// %ZF{113}
    int local566; 		// %ZF{113}
    int local567; 		// %ZF{113}
    int local568; 		// %ZF{162}
    int local569; 		// %ZF{113}
    int local57; 		// m[esp_55 + 8]{174}
    int local570; 		// %ZF{113}
    int local571; 		// %ZF{113}
    int local572; 		// %ZF{113}
    int local573; 		// %ZF{113}
    int local574; 		// %ZF{123}
    int local575; 		// %ZF{123}
    int local576; 		// %ZF{123}
    int local577; 		// %ZF{123}
    int local578; 		// %ZF{123}
    int local579; 		// %ZF{123}
    int local58; 		// m[esp_55 + 8]{174}
    int local580; 		// %ZF{123}
    int local581; 		// %ZF{123}
    int local582; 		// %ZF{123}
    int local583; 		// %ZF{123}
    int local584; 		// %ZF{123}
    int local585; 		// %ZF{123}
    int local586; 		// %ZF{123}
    int local587; 		// %ZF{123}
    int local588; 		// %ZF{123}
    int local589; 		// %ZF{123}
    union { __size32; __size16 *; } local59; 		// m[esp_55 + 8]{5}
    int local590; 		// %ZF{123}
    int local591; 		// %ZF{123}
    int local592; 		// %ZF{136}
    int local593; 		// %ZF{136}
    int local594; 		// %ZF{136}
    int local595; 		// %ZF{136}
    int local596; 		// %ZF{136}
    int local597; 		// %ZF{136}
    int local598; 		// %ZF{136}
    int local599; 		// %ZF{136}
    union { __size32 *; __size32; } local6; 		// m[esp + 16]
    union { __size32; __size16 *; } local60; 		// m[esp_55 + 8]{5}
    int local600; 		// %ZF{136}
    int local601; 		// %ZF{136}
    int local602; 		// %ZF{136}
    int local603; 		// %ZF{136}
    int local604; 		// %ZF{136}
    int local605; 		// %ZF{136}
    int local606; 		// %ZF{136}
    int local607; 		// %ZF{136}
    int local608; 		// %ZF{136}
    int local609; 		// %ZF{145}
    int local61; 		// m[esp_55 + 16]{95}
    int local610; 		// %ZF{145}
    int local611; 		// %ZF{145}
    int local612; 		// %ZF{145}
    int local613; 		// %ZF{145}
    int local614; 		// %ZF{145}
    int local615; 		// %ZF{145}
    int local616; 		// %ZF{145}
    int local617; 		// %ZF{145}
    int local618; 		// %ZF{145}
    int local619; 		// %ZF{145}
    int local62; 		// m[esp_55 + 16]{95}
    int local620; 		// %ZF{145}
    int local621; 		// %ZF{145}
    int local622; 		// %ZF{145}
    int local623; 		// %ZF{145}
    int local624; 		// %ZF{145}
    int local625; 		// %ZF{148}
    int local626; 		// %ZF{148}
    int local627; 		// %ZF{148}
    int local628; 		// %ZF{148}
    int local629; 		// %ZF{148}
    int local63; 		// m[esp_55 + 16]{95}
    int local630; 		// %ZF{148}
    int local631; 		// %ZF{148}
    int local632; 		// %ZF{148}
    int local633; 		// %ZF{148}
    int local634; 		// %ZF{148}
    int local635; 		// %ZF{148}
    int local636; 		// %ZF{148}
    int local637; 		// %ZF{148}
    int local638; 		// %ZF{148}
    int local639; 		// %ZF{148}
    int local64; 		// m[esp_55 + 16]{112}
    int local640; 		// %ZF{154}
    int local641; 		// %ZF{154}
    int local642; 		// %ZF{154}
    int local643; 		// %ZF{154}
    int local644; 		// %ZF{154}
    int local645; 		// %ZF{154}
    int local646; 		// %ZF{154}
    int local647; 		// %ZF{154}
    int local648; 		// %ZF{154}
    int local649; 		// %ZF{154}
    int local65; 		// m[esp_55 + 16]{112}
    int local650; 		// %ZF{154}
    int local651; 		// %ZF{154}
    int local652; 		// %ZF{154}
    int local653; 		// %ZF{154}
    int local654; 		// %ZF{175}
    int local655; 		// %ZF{175}
    int local656; 		// %ZF{175}
    int local657; 		// %ZF{175}
    int local658; 		// %ZF{175}
    int local659; 		// %ZF{175}
    int local66; 		// m[esp_55 + 16]{112}
    int local660; 		// %ZF{175}
    int local661; 		// %ZF{175}
    int local662; 		// %ZF{175}
    int local663; 		// %ZF{175}
    int local664; 		// %ZF{175}
    int local665; 		// %ZF{175}
    int local666; 		// %ZF{175}
    int local667; 		// %ZF{175}
    int local668; 		// %ZF{175}
    int local669; 		// %ZF{178}
    int local67; 		// m[esp_55 + 16]{122}
    int local670; 		// %ZF{178}
    int local671; 		// %ZF{178}
    int local672; 		// %ZF{178}
    int local673; 		// %ZF{178}
    int local674; 		// %ZF{178}
    int local675; 		// %ZF{178}
    int local676; 		// %ZF{178}
    int local677; 		// %ZF{178}
    int local678; 		// %ZF{178}
    int local679; 		// %ZF{178}
    int local68; 		// m[esp_55 + 16]{122}
    int local680; 		// %ZF{178}
    int local681; 		// %ZF{178}
    int local682; 		// %ZF{178}
    int local683; 		// %ZF{181}
    int local684; 		// %ZF{181}
    int local685; 		// %ZF{181}
    int local686; 		// %ZF{181}
    int local687; 		// %ZF{181}
    int local688; 		// %ZF{181}
    int local689; 		// %ZF{181}
    int local69; 		// m[esp_55 + 16]{122}
    int local690; 		// %ZF{181}
    int local691; 		// %ZF{181}
    int local692; 		// %ZF{181}
    int local693; 		// %ZF{181}
    int local694; 		// %ZF{181}
    int local695; 		// %ZF{181}
    int local696; 		// %ZF{184}
    int local697; 		// %ZF{184}
    int local698; 		// %ZF{184}
    int local699; 		// %ZF{184}
    union { LPWSTR; __size32; } local7; 		// m[esp + 20]
    int local70; 		// m[esp_55 + 16]{135}
    int local700; 		// %ZF{184}
    int local701; 		// %ZF{184}
    int local702; 		// %ZF{184}
    int local703; 		// %ZF{184}
    int local704; 		// %ZF{184}
    int local705; 		// %ZF{184}
    int local706; 		// %ZF{184}
    int local707; 		// %ZF{184}
    int local708; 		// %ZF{194}
    int local709; 		// %ZF{194}
    int local71; 		// m[esp_55 + 16]{135}
    int local710; 		// %ZF{194}
    int local711; 		// %ZF{194}
    int local712; 		// %ZF{194}
    int local713; 		// %ZF{194}
    int local714; 		// %ZF{194}
    int local715; 		// %ZF{194}
    int local716; 		// %ZF{194}
    int local717; 		// %ZF{194}
    int local718; 		// %ZF{194}
    int local719; 		// %ZF{303}
    int local72; 		// m[esp_55 + 16]{135}
    int local720; 		// %ZF{309}
    int local721; 		// %ZF{309}
    int local722; 		// %ZF{309}
    int local723; 		// %ZF{309}
    int local724; 		// %ZF{309}
    int local725; 		// %ZF{309}
    int local726; 		// %ZF{309}
    int local727; 		// %ZF{309}
    int local728; 		// %ZF{309}
    int local729; 		// %ZF{309}
    int local73; 		// m[esp_55 + 16]{144}
    int local730; 		// %ZF{296}
    int local731; 		// %ZF{296}
    int local732; 		// %ZF{296}
    int local733; 		// %ZF{296}
    int local734; 		// %ZF{296}
    int local735; 		// %ZF{296}
    int local736; 		// %ZF{296}
    int local737; 		// %ZF{296}
    int local738; 		// %ZF{283}
    int local739; 		// %ZF{283}
    int local74; 		// m[esp_55 + 16]{144}
    int local740; 		// %ZF{283}
    int local741; 		// %ZF{283}
    int local742; 		// %ZF{283}
    int local743; 		// %ZF{283}
    int local744; 		// %ZF{283}
    int local745; 		// %ZF{198}
    int local746; 		// %ZF{198}
    int local747; 		// %ZF{198}
    int local748; 		// %ZF{198}
    int local749; 		// %ZF{198}
    int local75; 		// m[esp_55 + 16]{144}
    int local750; 		// %ZF{198}
    int local751; 		// %ZF{200}
    int local752; 		// %ZF{200}
    int local753; 		// %ZF{200}
    int local754; 		// %ZF{200}
    int local755; 		// %ZF{200}
    int local756; 		// %ZF{210}
    int local757; 		// %ZF{210}
    int local758; 		// %ZF{210}
    int local759; 		// %ZF{210}
    int local76; 		// m[esp_55 + 16]{153}
    int local760; 		// %ZF{223}
    int local761; 		// %ZF{223}
    int local762; 		// %ZF{223}
    int local763; 		// %ZF{227}
    int local764; 		// %ZF{227}
    int local765; 		// %ZF{253}
    int local766; 		// %ZF{253}
    int local767; 		// %ZF{253}
    int local768; 		// %ZF{162}
    int local769; 		// %ZF{162}
    int local77; 		// m[esp_55 + 16]{153}
    int local770; 		// %ZF{187}
    int local771; 		// %ZF{187}
    int local772; 		// %CF{113}
    int local773; 		// %CF{304}
    int local774; 		// %CF{113}
    int local775; 		// %CF{291}
    int local776; 		// %CF{113}
    int local777; 		// %CF{278}
    int local778; 		// %CF{263}
    int local779; 		// %CF{113}
    int local78; 		// m[esp_55 + 16]{153}
    int local780; 		// %CF{113}
    int local781; 		// %CF{113}
    int local782; 		// %CF{113}
    int local783; 		// %CF{113}
    int local784; 		// %CF{113}
    int local785; 		// %CF{113}
    int local786; 		// %CF{188}
    int local787; 		// %CF{113}
    int local788; 		// %CF{113}
    int local789; 		// %CF{113}
    int local79; 		// m[esp_55 + 16]{174}
    int local790; 		// %CF{113}
    int local791; 		// %CF{163}
    int local792; 		// %CF{113}
    int local793; 		// %CF{113}
    int local794; 		// %CF{113}
    int local795; 		// %CF{113}
    int local796; 		// %CF{113}
    int local797; 		// %CF{123}
    int local798; 		// %CF{123}
    int local799; 		// %CF{123}
    unsigned int local8; 		// m[esp + 24]
    int local80; 		// m[esp_55 + 16]{174}
    int local800; 		// %CF{123}
    int local801; 		// %CF{123}
    int local802; 		// %CF{123}
    int local803; 		// %CF{123}
    int local804; 		// %CF{123}
    int local805; 		// %CF{123}
    int local806; 		// %CF{123}
    int local807; 		// %CF{123}
    int local808; 		// %CF{123}
    int local809; 		// %CF{123}
    int local81; 		// m[esp_55 + 16]{174}
    int local810; 		// %CF{123}
    int local811; 		// %CF{123}
    int local812; 		// %CF{123}
    int local813; 		// %CF{123}
    int local814; 		// %CF{123}
    int local815; 		// %CF{136}
    int local816; 		// %CF{136}
    int local817; 		// %CF{136}
    int local818; 		// %CF{136}
    int local819; 		// %CF{136}
    union { __size32; __size32 *; } local82; 		// m[esp_55 + 16]{4}
    int local820; 		// %CF{136}
    int local821; 		// %CF{136}
    int local822; 		// %CF{136}
    int local823; 		// %CF{136}
    int local824; 		// %CF{136}
    int local825; 		// %CF{136}
    int local826; 		// %CF{136}
    int local827; 		// %CF{136}
    int local828; 		// %CF{136}
    int local829; 		// %CF{136}
    union { __size32; __size32 *; } local83; 		// m[esp_55 + 16]{4}
    int local830; 		// %CF{136}
    int local831; 		// %CF{136}
    int local832; 		// %CF{145}
    int local833; 		// %CF{145}
    int local834; 		// %CF{145}
    int local835; 		// %CF{145}
    int local836; 		// %CF{145}
    int local837; 		// %CF{145}
    int local838; 		// %CF{145}
    int local839; 		// %CF{145}
    int local84; 		// m[esp_55 + 20]{95}
    int local840; 		// %CF{145}
    int local841; 		// %CF{145}
    int local842; 		// %CF{145}
    int local843; 		// %CF{145}
    int local844; 		// %CF{145}
    int local845; 		// %CF{145}
    int local846; 		// %CF{145}
    int local847; 		// %CF{145}
    int local848; 		// %CF{148}
    int local849; 		// %CF{148}
    int local85; 		// m[esp_55 + 20]{95}
    int local850; 		// %CF{148}
    int local851; 		// %CF{148}
    int local852; 		// %CF{148}
    int local853; 		// %CF{148}
    int local854; 		// %CF{148}
    int local855; 		// %CF{148}
    int local856; 		// %CF{148}
    int local857; 		// %CF{148}
    int local858; 		// %CF{148}
    int local859; 		// %CF{148}
    int local86; 		// m[esp_55 + 20]{95}
    int local860; 		// %CF{148}
    int local861; 		// %CF{148}
    int local862; 		// %CF{148}
    int local863; 		// %CF{154}
    int local864; 		// %CF{154}
    int local865; 		// %CF{154}
    int local866; 		// %CF{154}
    int local867; 		// %CF{154}
    int local868; 		// %CF{154}
    int local869; 		// %CF{154}
    int local87; 		// m[esp_55 + 20]{112}
    int local870; 		// %CF{154}
    int local871; 		// %CF{154}
    int local872; 		// %CF{154}
    int local873; 		// %CF{154}
    int local874; 		// %CF{154}
    int local875; 		// %CF{154}
    int local876; 		// %CF{154}
    int local877; 		// %CF{175}
    int local878; 		// %CF{175}
    int local879; 		// %CF{175}
    int local88; 		// m[esp_55 + 20]{112}
    int local880; 		// %CF{175}
    int local881; 		// %CF{175}
    int local882; 		// %CF{175}
    int local883; 		// %CF{175}
    int local884; 		// %CF{175}
    int local885; 		// %CF{175}
    int local886; 		// %CF{175}
    int local887; 		// %CF{175}
    int local888; 		// %CF{175}
    int local889; 		// %CF{175}
    int local89; 		// m[esp_55 + 20]{112}
    int local890; 		// %CF{175}
    int local891; 		// %CF{175}
    int local892; 		// %CF{178}
    int local893; 		// %CF{178}
    int local894; 		// %CF{178}
    int local895; 		// %CF{178}
    int local896; 		// %CF{178}
    int local897; 		// %CF{178}
    int local898; 		// %CF{178}
    int local899; 		// %CF{178}
    __size32 local9; 		// m[esp - 4]
    int local90; 		// m[esp_55 + 20]{122}
    int local900; 		// %CF{178}
    int local901; 		// %CF{178}
    int local902; 		// %CF{178}
    int local903; 		// %CF{178}
    int local904; 		// %CF{178}
    int local905; 		// %CF{178}
    int local906; 		// %CF{181}
    int local907; 		// %CF{181}
    int local908; 		// %CF{181}
    int local909; 		// %CF{181}
    int local91; 		// m[esp_55 + 20]{122}
    int local910; 		// %CF{181}
    int local911; 		// %CF{181}
    int local912; 		// %CF{181}
    int local913; 		// %CF{181}
    int local914; 		// %CF{181}
    int local915; 		// %CF{181}
    int local916; 		// %CF{181}
    int local917; 		// %CF{181}
    int local918; 		// %CF{181}
    int local919; 		// %CF{184}
    int local92; 		// m[esp_55 + 20]{122}
    int local920; 		// %CF{184}
    int local921; 		// %CF{184}
    int local922; 		// %CF{184}
    int local923; 		// %CF{184}
    int local924; 		// %CF{184}
    int local925; 		// %CF{184}
    int local926; 		// %CF{184}
    int local927; 		// %CF{184}
    int local928; 		// %CF{184}
    int local929; 		// %CF{184}
    int local93; 		// m[esp_55 + 20]{135}
    int local930; 		// %CF{184}
    int local931; 		// %CF{194}
    int local932; 		// %CF{194}
    int local933; 		// %CF{194}
    int local934; 		// %CF{194}
    int local935; 		// %CF{194}
    int local936; 		// %CF{194}
    int local937; 		// %CF{194}
    int local938; 		// %CF{194}
    int local939; 		// %CF{194}
    int local94; 		// m[esp_55 + 20]{135}
    int local940; 		// %CF{194}
    int local941; 		// %CF{194}
    int local942; 		// %CF{304}
    int local943; 		// %CF{309}
    int local944; 		// %CF{309}
    int local945; 		// %CF{309}
    int local946; 		// %CF{309}
    int local947; 		// %CF{309}
    int local948; 		// %CF{309}
    int local949; 		// %CF{309}
    int local95; 		// m[esp_55 + 20]{135}
    int local950; 		// %CF{309}
    int local951; 		// %CF{309}
    int local952; 		// %CF{309}
    int local953; 		// %CF{296}
    int local954; 		// %CF{296}
    int local955; 		// %CF{296}
    int local956; 		// %CF{296}
    int local957; 		// %CF{296}
    int local958; 		// %CF{296}
    int local959; 		// %CF{296}
    int local96; 		// m[esp_55 + 20]{144}
    int local960; 		// %CF{296}
    int local961; 		// %CF{283}
    int local962; 		// %CF{283}
    int local963; 		// %CF{283}
    int local964; 		// %CF{283}
    int local965; 		// %CF{283}
    int local966; 		// %CF{283}
    int local967; 		// %CF{283}
    int local968; 		// %CF{198}
    int local969; 		// %CF{198}
    int local97; 		// m[esp_55 + 20]{144}
    int local970; 		// %CF{198}
    int local971; 		// %CF{198}
    int local972; 		// %CF{198}
    int local973; 		// %CF{198}
    int local974; 		// %CF{200}
    int local975; 		// %CF{200}
    int local976; 		// %CF{200}
    int local977; 		// %CF{200}
    int local978; 		// %CF{200}
    int local979; 		// %CF{210}
    int local98; 		// m[esp_55 + 20]{144}
    int local980; 		// %CF{210}
    int local981; 		// %CF{210}
    int local982; 		// %CF{210}
    int local983; 		// %CF{223}
    int local984; 		// %CF{223}
    int local985; 		// %CF{223}
    int local986; 		// %CF{227}
    int local987; 		// %CF{227}
    int local988; 		// %CF{253}
    int local989; 		// %CF{253}
    int local99; 		// m[esp_55 + 20]{153}
    int local990; 		// %CF{253}
    int local991; 		// %CF{163}
    int local992; 		// %CF{163}
    int local993; 		// %CF{188}
    int local994; 		// %CF{188}
    int local995; 		// m[esp - 20]
    int local996; 		// m[esp - 44]
    int local997; 		// m[esp - 72]
    unsigned int local998; 		// param7{25}
    union { int *; __size32; } local999; 		// eax_2{50}

    edi = param9;
    ebp_1 = esp_55 - 4;
    *(__size32*)param4 = 0;
    cx = 0;
    local0 = param2 - 1;
    *(__size16*)param3 = 0;
    eax = VirtualQuery(); /* Warning: also results in edx */
    local998 = param7;
    local1008 = ebp_1;
    local1008 = ebp_1;
    local1008 = ebp_1;
    local1008 = ebp_1;
    if (eax != 0) {
        cx = (unsigned short) param6;
        eax = GetModuleFileNameW(param1, param5, param6); /* Warning: also results in edx */
        if (eax == 0) {
bb0x41342f:
            esi = local229;
            ebp = param8;
        }
        else {
            edx = param1;
            cx = 0x5a4d;
            if (*param1 != 0x5a4d) {
                goto bb0x41342f;
            }
            else {
                eax = *(param1 + 60);
                if (eax <= 0 || *(eax + param1) != 0x4550) {
                    goto bb0x41342f;
                }
                else {
                    ecx = *(unsigned short*)(eax + param1 + 6);
                    cx = (unsigned short) ecx;
                    esp_1 = esp_55 - 96;
                    edi_3 = *(unsigned short*)(eax + param1 + 20);
                    eax_1 = edi_3 + eax + param1 + 24;
                    al = (unsigned char) eax_1;
                    edi_4 = 0;
                    ebx_2 = 0;
                    local1000 = ebx_2;
                    local1001 = edi_4;
                    local1003 = eax_1;
                    local1004 = ebx_2;
                    local1005 = edi_4;
                    local1006 = esp_1;
                    local1007 = esp_1;
                    local1007 = esp_1;
                    if (ecx != 0) {
                        eax = eax_1 + 12;
                        al = (unsigned char) eax_1 + 12;
                        local999 = eax;
                        do {
                            eax_2 = local999;
                            ebx_5 = local1000;
                            edi_7 = local1001;
                            edx = *eax_2;
                            local1002 = edi_7;
                            local1003 = eax_2;
                            local1004 = ebx_5;
                            if ((unsigned int)(param2 - param1 - 1) < (unsigned int)edx) {
bb0x413494:
                                edi_2 = local1002;
                                ebx_6 = ebx_5 + 1;
                                eax_3 = eax_2 + 40;
                                al = (unsigned char) eax_2 + 40;
                                local999 = eax_3;
                                local1000 = ebx_6;
                                local1001 = edi_2;
                                local1003 = eax_3;
                                local1004 = ebx_6;
                                local1005 = edi_2;
                            }
                            else {
                                edi = param2 - param1 + edx - 1;
                                local1002 = edi;
                                local1005 = edi;
                                if ((unsigned int)(param2 - param1 - 1) >= *(eax_2 - 4)) {
                                    goto bb0x413494;
                                }
                                goto bb0x41349c;
                            }
                            goto bb0x413494;
                        } while (ebx_5 + 1 < ecx);
                    }
bb0x41349c:
                    eax = local1003;
                    ebx_1 = local1004;
                    edi_1 = local1005;
                    if (ebx_1 == ecx) {
bb0x4134fb:
                        esp = local1007;
                        ebp = local1008;
                        edi = *esp;
                        ebx = *(esp + 4);
                        esi = *(esp + 8);
                        ebp = *ebp;
                        local998 = ebx;
                    }
                    else {
                        if (*0x417558 != 0) {
                            eax = global_0x00417554;
                            al = (unsigned char) global_0x00417554;
bb0x4134cf:
                            esp_7 = local1006;
                            *(__size32*)(esp_7 - 4) = 0x416158;
                            *(__size32*)(esp_7 - 8) = eax;
                            %eax = GetProcAddress(*(esp_7 - 8), *(esp_7 - 4)); /* Warning: also results in edx, esp_8 */
                            local1007 = esp_8;
                            if (%eax == 0) {
                                goto bb0x4134fb;
                            }
                            else {
                                *(__size32*)(esp_7 - 4) = (esp_55 - 20);
                                *(__size32*)(esp_7 - 8) = 0;
                                *(__size32*)(esp_7 - 12) = 0;
                                *(__size32*)(esp_7 - 16) = (esp_55 - 44);
                                *(__size32*)(esp_7 - 20) = 0;
                                *(__size32*)(esp_7 - 24) = 0;
                                *(__size32*)(esp_7 - 28) = 0;
                                *(__size32*)(esp_7 - 32) = param5;
                                (*%eax)((unsigned short) esp_55 - 44, al, %eax, esp_55 - 44, param5, ebx_1 + 1, esp_55 - 4, 0, edi_1, SUBFLAGS32(%eax, 0, %eax), %eax == 0, %eax < 0, param2, param3, param4, param5, param6, param8, param1, esi, 28, (esp_55 - 72), local229, param7, param9, local300, pc);
                                local1008 = ebp;
                                esp_12 = esp_9 + 32;
                                local1007 = esp_12;
                                if (eax_5 != 0) {
                                    ecx = *(ebp - 16);
                                    eax_8 = *ecx;
                                    edx = *eax_8;
                                    *(int*)(ebp - 28) = esi;
                                    (*edx)((unsigned short) ecx, (unsigned char) eax_8, eax_8, ecx, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax_5), LOGICALFLAGS32(eax_5), LOGICALFLAGS32(eax_5), local15, local38, local61, local84, local107, local130, local149, local172, local191, local210, local230, local249, local268, local287, local307);
                                    local1033 = esp_13;
                                    local326 = SUBFLAGS32(eax_10, 0x131a5b5, eax_10 - 0x131a5b5);
                                    local1034 = local326;
                                    local1035 = local549;
                                    local1036 = local772;
                                    if (eax_10 == 0x131a5b5) {
                                        ecx = *(ebp - 16);
                                        eax_11 = *ecx;
                                        eax = *(eax_11 + 28);
                                        *(__size32*)(esp_13 - 4) = ebp - 24;
                                        *(__size32*)(esp_13 - 8) = 0x416154;
                                        *(__size32*)(esp_13 - 12) = esi;
                                        (*eax)((unsigned short) ecx, (unsigned char) eax, eax, ecx, ebp - 24, ebx, ebp, esi, edi, <all>, SUBFLAGS32(eax_10, 0x131a5b5, eax_10 - 0x131a5b5), eax_10 == 0x131a5b5, eax_10 < 0x131a5b5, local18, local41, local64, local87, local110, local131, local152, local173, local192, local211, local231, local250, local269, local288, local308);
                                        local1033 = esp_16;
                                        local351 = LOGICALFLAGS32(eax);
                                        local1034 = local351;
                                        local1035 = local574;
                                        local1036 = local797;
                                        if (eax != 0) {
                                            ecx = *(ebp - 24);
                                            edx = *ecx;
                                            edx = *(edx + 32);
                                            *(__size32*)(esp_16 - 4) = esi;
                                            *(__size32*)(esp_16 - 8) = esi;
                                            *(__size32*)(esp_16 - 12) = esi;
                                            *(__size32*)(esp_16 - 16) = ebp - 12;
                                            *(__size32*)(esp_16 - 20) = edi;
                                            *(__size32*)(esp_16 - 24) = ebx;
                                            (*edx)((unsigned short) ecx, (unsigned char) ebp - 12, ebp - 12, ecx, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), local21, local44, local67, local90, local113, local132, local155, local174, local193, local212, local232, local251, local270, local289, local309);
                                            local1029 = esp_19;
                                            local369 = LOGICALFLAGS32(eax_12);
                                            local1030 = local369;
                                            local1031 = local592;
                                            local1032 = local815;
                                            if (eax_12 != 0) {
                                                ecx = *(ebp - 12);
                                                *(__size32*)(ebp - 4) = esi;
                                                eax_13 = *ecx;
                                                eax = *(eax_13 + 104);
                                                *(__size32*)(esp_19 - 4) = ebp - 4;
                                                (*eax)((unsigned short) ecx, (unsigned char) eax, eax, ecx, ebp - 4, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax_12), LOGICALFLAGS32(eax_12), LOGICALFLAGS32(eax_12), local24, local47, local70, local93, local116, local133, local158, local175, local194, local213, local233, local252, local271, local290, local310);
                                                local1025 = esp_22;
                                                local1025 = esp_22;
                                                local386 = LOGICALFLAGS8(al);
                                                local1026 = local386;
                                                local1027 = local609;
                                                local1028 = local832;
                                                if (al != 0) {
                                                    ecx = *(ebp - 4);
                                                    local402 = SUBFLAGS32(ecx, esi, ecx - esi);
                                                    local1026 = local402;
                                                    local1027 = local625;
                                                    local1028 = local848;
                                                    if (ecx != esi) {
                                                        edx = *ecx;
                                                        eax = *(edx + 8);
                                                        (*eax)((unsigned short) ecx, (unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, SUBFLAGS32(ecx, esi, ecx - esi), ecx == esi, ecx < esi, local27, local50, local73, local96, local119, local134, local161, local176, local195, local214, local234, local253, local272, local291, local311);
                                                        local1009 = esp_25;
                                                        local1017 = esp_25;
                                                        local417 = LOGICALFLAGS32(eax);
                                                        local1010 = local417;
                                                        local1011 = local640;
                                                        local1012 = local863;
                                                        local1018 = local417;
                                                        local1019 = local640;
                                                        local1020 = local863;
                                                        if (eax == 0) {
bb0x41367f:
                                                            esp_51 = local1017;
                                                            local332 = local1018;
                                                            local555 = local1019;
                                                            local778 = local1020;
                                                            *(__size32*)(esp_51 - 4) = esi;
                                                            *(__size32*)(esp_51 - 8) = 0;
                                                            eax = GetProcessHeap();
                                                            local1022 = local332;
                                                            local1023 = local555;
                                                            local1024 = local778;
                                                            *(__size32*)(esp_51 - 12) = eax;
                                                            esp_34 = HeapFree(*(esp_51 - 12), *(esp_51 - 8), *(esp_51 - 4));
                                                            local1021 = esp_34;
                                                        }
                                                        else {
                                                            do {
                                                                esp_48 = local1009;
                                                                local345 = local1010;
                                                                local568 = local1011;
                                                                local791 = local1012;
                                                                ecx = *(ebp - 4);
                                                                edx = *ecx;
                                                                edx = *(edx + 12);
                                                                *(__size32*)(esp_48 - 4) = 0;
                                                                *(__size32*)(esp_48 - 8) = ebp - 8;
                                                                *(__size32*)(esp_48 - 12) = ebp - 32;
                                                                *(__size32*)(esp_48 - 16) = ebp + 8;
                                                                *(__size32*)(esp_48 - 20) = ebp - 20;
                                                                *(__size32*)(esp_48 - 24) = 0;
                                                                (*edx)((unsigned short) ecx, (unsigned char) ebp - 20, ebp - 20, ecx, edx, ebx, ebp, esi, edi, <all>, local345, local568, local791, local30, local53, local76, local99, local122, local142, local164, local184, local203, local222, local242, local261, local280, local299, local319);
                                                                local1021 = esp_26;
                                                                local1021 = esp_26;
                                                                local1021 = esp_26;
                                                                local431 = LOGICALFLAGS8(al);
                                                                local1022 = local431;
                                                                local1023 = local654;
                                                                local1024 = local877;
                                                                if (al != 0) {
                                                                    eax = *(unsigned short*)(ebp + 8);
                                                                    local446 = SUBFLAGS32(eax, ebx, eax - ebx);
                                                                    local1013 = local446;
                                                                    local1014 = local669;
                                                                    local1015 = local892;
                                                                    if (eax != ebx) {
bb0x4135c3:
                                                                        local340 = local1013;
                                                                        local563 = local1014;
                                                                        local786 = local1015;
                                                                        ecx = *(ebp - 4);
                                                                        edx = *ecx;
                                                                        eax = *(edx + 8);
                                                                        (*eax)((unsigned short) ecx, (unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, local340, local563, local786, local33, local56, local79, local102, local125, local135, local167, local177, local196, local215, local235, local254, local273, local292, local312);
                                                                        local1009 = esp_29;
                                                                        local1017 = esp_29;
                                                                        local485 = LOGICALFLAGS32(eax);
                                                                        local1010 = local485;
                                                                        local1011 = local708;
                                                                        local1012 = local931;
                                                                        local1018 = local485;
                                                                        local1019 = local708;
                                                                        local1020 = local931;
                                                                    }
                                                                    else {
                                                                        eax = *(ebp - 20);
                                                                        local460 = SUBFLAGS32(eax, edi, eax - edi);
                                                                        local1013 = local460;
                                                                        local1014 = local683;
                                                                        local1015 = local906;
                                                                        if (eax > edi) {
                                                                            goto bb0x4135c3;
                                                                        }
                                                                        else {
                                                                            ecx = *(ebp - 32);
                                                                            local473 = SUBFLAGS32(edi, eax + ecx, edi - eax + ecx);
                                                                            local1013 = local473;
                                                                            local1014 = local696;
                                                                            local1015 = local919;
                                                                            if (edi < eax + ecx) {
                                                                                eax = *(ebp - 8);
                                                                                local522 = LOGICALFLAGS32(eax);
                                                                                local1022 = local522;
                                                                                local1023 = local745;
                                                                                local1024 = local968;
                                                                                if (eax != 0) {
                                                                                    local528 = SUBFLAGS32(eax, 0x1fffffff, eax - 0x1fffffff);
                                                                                    local1022 = local528;
                                                                                    local1023 = local751;
                                                                                    local1024 = local974;
                                                                                    if (eax < 0x1fffffff) {
                                                                                        *(unsigned int*)(esp_26 - 4) = eax * 8;
                                                                                        *(__size32*)(esp_26 - 8) = 0;
                                                                                        eax = GetProcessHeap();
                                                                                        *(__size32*)(esp_26 - 12) = eax;
                                                                                        eax = HeapAlloc(*(esp_26 - 12), *(esp_26 - 8), *(esp_26 - 4)); /* Warning: also results in esp_36 */
                                                                                        local1021 = esp_36;
                                                                                        esi = eax;
                                                                                        local533 = LOGICALFLAGS32(eax);
                                                                                        local1022 = local533;
                                                                                        local1023 = local756;
                                                                                        local1024 = local979;
                                                                                        if (eax != 0) {
                                                                                            ecx = *(ebp - 4);
                                                                                            edx = *ecx;
                                                                                            edx = *(edx + 12);
                                                                                            *(union { LPVOID; __size32; }*)(esp_26 - 4) = eax;
                                                                                            *(__size32*)(esp_26 - 8) = ebp - 8;
                                                                                            *(__size32*)(esp_26 - 12) = 0;
                                                                                            *(__size32*)(esp_26 - 16) = 0;
                                                                                            *(__size32*)(esp_26 - 20) = 0;
                                                                                            *(__size32*)(esp_26 - 24) = ebp - 36;
                                                                                            (*edx)((unsigned short) ecx, (unsigned char) ebp - 36, ebp - 36, ecx, edx, ebx, ebp, eax, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), local33, local56, local79, local102, local125, local135, local167, local177, local196, local215, local235, local254, local273, local292, local312);
                                                                                            local1017 = esp_37;
                                                                                            local1017 = esp_37;
                                                                                            local537 = LOGICALFLAGS8(al);
                                                                                            local1018 = local537;
                                                                                            local1019 = local760;
                                                                                            local1020 = local983;
                                                                                            if (al != 0) {
                                                                                                edi -= *(ebp - 20);
                                                                                                tmp1 = edi - *esi;
                                                                                                local540 = SUBFLAGS32(edi, *esi, tmp1);
                                                                                                local1018 = local540;
                                                                                                local1019 = local763;
                                                                                                local1020 = local986;
                                                                                                if (edi >= *esi) {
                                                                                                    ecx = *(ebp - 8);
                                                                                                    %eax = 1;
                                                                                                    local1016 = %eax;
                                                                                                    eax_27 = %eax;
                                                                                                    if (ecx > 1) {
                                                                                                        do {
                                                                                                            eax_14 = local1016;
                                                                                                            eax_27 = eax_14;
                                                                                                            if (edi >= *(esi + eax_14 * 8)) {
                                                                                                                eax_15 = eax_14 + 1;
                                                                                                                local1016 = eax_15;
                                                                                                                eax_27 = eax_15;
                                                                                                            }
                                                                                                        } while (eax_14 + 1 < ecx);
                                                                                                    }
                                                                                                    %eax = eax_27;
                                                                                                    eax_17 = *(esi + %eax * 8 - 4);
                                                                                                    ecx = *(ebp + 20);
                                                                                                    *(__size32*)(esp_37 - 4) = 0;
                                                                                                    *(int*)ecx = eax_17 & 0xffffff;
                                                                                                    ecx = *(ebp - 12);
                                                                                                    edx = *ecx;
                                                                                                    edx = *(edx + 112);
                                                                                                    *(__size32*)(esp_37 - 8) = 0;
                                                                                                    *(__size32*)(esp_37 - 12) = 0;
                                                                                                    *(__size32*)(esp_37 - 16) = ebp + 16;
                                                                                                    eax_20 = *(ebp + 12);
                                                                                                    *(__size32*)(esp_37 - 20) = eax_20;
                                                                                                    eax_21 = *(ebp - 36);
                                                                                                    *(__size32*)(esp_37 - 24) = eax_21;
                                                                                                    (*edx)((unsigned short) ecx, (unsigned char) eax_21, eax_21, ecx, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax_17 & 0xffffff), LOGICALFLAGS32(eax_17 & 0xffffff), LOGICALFLAGS32(eax_17 & 0xffffff), *(esp_55 + 4), *(esp_55 + 8), *(esp_55 + 16), *(esp_55 + 20), *(esp_55 + 24), local143, *(esp_55 - 68), local185, local204, local223, local243, local262, local281, local301, local320);
                                                                                                    local1017 = esp_40;
                                                                                                    local1017 = esp_40;
                                                                                                    local542 = LOGICALFLAGS8(al);
                                                                                                    local1018 = local542;
                                                                                                    local1018 = local542;
                                                                                                    local1019 = local765;
                                                                                                    local1019 = local765;
                                                                                                    local1020 = local988;
                                                                                                    local1020 = local988;
                                                                                                    if (al != 0) {
                                                                                                        *(__size32*)(ebp - 28) = 1;
                                                                                                        goto bb0x41367f;
                                                                                                    }
                                                                                                    goto bb0x41367f;
                                                                                                }
                                                                                                goto bb0x41367f;
                                                                                            }
                                                                                            goto bb0x41367f;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                goto bb0x4135c3;
                                                                            }
                                                                        }
                                                                    }
                                                                    goto bb0x41368f;
                                                                }
                                                                goto bb0x41368f;
                                                            } while (eax != 0);
                                                            goto bb0x41367f;
                                                        }
bb0x41368f:
                                                        esp_54 = local1021;
                                                        local331 = local1022;
                                                        local554 = local1023;
                                                        local777 = local1024;
                                                        ecx = *(ebp - 4);
                                                        eax = *ecx;
                                                        edx = *eax;
                                                        (*edx)((unsigned short) ecx, (unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, local331, local554, local777, local30, local53, local76, local99, local122, local141, local164, local183, local202, local221, local241, local260, local276, local298, local318);
                                                        local1025 = esp_35;
                                                        local1026 = local515;
                                                        local1027 = local738;
                                                        local1028 = local961;
                                                    }
                                                }
                                                esp_47 = local1025;
                                                local329 = local1026;
                                                local552 = local1027;
                                                local775 = local1028;
                                                ecx = *(ebp - 12);
                                                eax = *ecx;
                                                edx = *(eax + 64);
                                                (*edx)((unsigned short) ecx, (unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, local329, local552, local775, local27, local50, local73, local96, local119, local140, local161, local182, local201, local220, local240, local259, local277, local297, local317);
                                                local1029 = esp_33;
                                                local1030 = local507;
                                                local1031 = local730;
                                                local1032 = local953;
                                            }
                                            esp_46 = local1029;
                                            local327 = local1030;
                                            local550 = local1031;
                                            local773 = local1032;
                                            ecx = *(ebp - 24);
                                            eax = *ecx;
                                            edx = *(eax + 56);
                                            (*edx)((unsigned short) ecx, (unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, local327, local550, local773, local24, local47, local70, local93, local116, local139, local158, local181, local200, local219, local239, local258, local278, local296, local315);
                                            local1033 = esp_32;
                                            local1034 = local497;
                                            local1035 = local720;
                                            local1036 = local943;
                                        }
                                    }
                                    esp_45 = local1033;
                                    flags = local1034;
                                    ZF = local1035;
                                    CF = local1036;
                                    ecx = *(ebp - 16);
                                    eax = *ecx;
                                    edx = *(eax + 40);
                                    (*edx)((unsigned short) ecx, (unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, local18, local41, local64, local87, local110, local138, local152, local180, local199, local218, local238, local257, local279, local295, local316);
                                    edi = *esp;
                                    ebx = *(esp + 4);
                                    esi = *(esp + 8);
                                    ebp = *ebp;
                                    local998 = ebx;
                                }
                                else {
                                    goto bb0x4134fb;
                                }
                            }
                        }
                        else {
                            if (*0x417554 != 0) {
                                goto bb0x4134fb;
                            }
                            else {
                                esp_4 = esp_55 - 100;
                                proc_0x00413770(edi_1);
                                local1006 = esp_4;
                                local1007 = esp_4;
                                global_0x00417554 = eax;
                                if (eax == 0) {
                                    goto bb0x4134fb;
                                }
                                else {
                                    global_0x00417558 = 1;
                                    goto bb0x4134cf;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        goto bb0x41342f;
    }
    param7 = local998;
    return cx; /* WARNING: Also returning: edx := edx, ebx := param7, ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x00413770 */
void proc_0x00413770(__size32 param1)
{
    __size8 al; 		// r8
    unsigned char dl; 		// r10
    int dl_1; 		// r10{7}
    int dl_10; 		// r10{40}
    int dl_11; 		// r10{40}
    unsigned char dl_12; 		// r10{0}
    unsigned char dl_13; 		// r10{0}
    int dl_2; 		// r10{7}
    int dl_3; 		// r10{7}
    int dl_4; 		// r10{11}
    int dl_5; 		// r10{22}
    int dl_6; 		// r10{35}
    int dl_7; 		// r10{35}
    int dl_8; 		// r10{35}
    int dl_9; 		// r10{40}
    int eax; 		// r24
    unsigned int eax_1; 		// r24{60}
    int eax_10; 		// r24{88}
    unsigned int eax_2; 		// r24{60}
    unsigned int eax_3; 		// r24{60}
    __size32 eax_4; 		// r24{64}
    __size32 eax_5; 		// r24{64}
    int eax_6; 		// r24{88}
    int eax_7; 		// r24{93}
    int eax_8; 		// r24{93}
    int eax_9; 		// r24{88}
    int ebp; 		// r29
    __size32 ebx; 		// r27
    int ebx_1; 		// r27{7}
    int ebx_2; 		// r27{7}
    int ebx_3; 		// r27{7}
    __size32 ebx_4; 		// r27{0}
    __size32 ebx_5; 		// r27{0}
    int ecx; 		// r25
    int ecx_1; 		// r25{80}
    __size32 edi; 		// r31
    int edx; 		// r26
    int edx_1; 		// r26{7}
    int edx_10; 		// r26{0}
    int edx_11; 		// r26{0}
    int edx_2; 		// r26{7}
    int edx_3; 		// r26{7}
    int edx_4; 		// r26{11}
    int edx_5; 		// r26{22}
    int edx_6; 		// r26{35}
    int edx_7; 		// r26{35}
    int edx_8; 		// r26{35}
    int edx_9; 		// r26{40}
    __size32 esi; 		// r30
    int esp; 		// r28
    __size32 esp_1; 		// r28{7}
    __size32 esp_10; 		// r28{35}
    __size32 esp_11; 		// r28{35}
    __size32 esp_12; 		// r28{35}
    __size32 esp_13; 		// r28{40}
    __size32 esp_14; 		// r28{40}
    __size32 esp_15; 		// r28{40}
    __size32 esp_16; 		// r28{48}
    __size32 esp_17; 		// r28{48}
    __size32 esp_18; 		// r28{48}
    __size32 esp_19; 		// r28{58}
    __size32 esp_2; 		// r28{7}
    __size32 esp_20; 		// r28{58}
    __size32 esp_21; 		// r28{58}
    __size32 esp_22; 		// r28{71}
    __size32 esp_23; 		// r28{71}
    __size32 esp_24; 		// r28{71}
    union { __size32; __size32 *; } esp_25; 		// r28{75}
    union { __size32; __size32 *; } esp_26; 		// r28{75}
    union { __size32; __size32 *; } esp_27; 		// r28{75}
    union { __size32; __size32 *; } esp_28; 		// r28{78}
    __size32 esp_29; 		// r28{120}
    __size32 esp_3; 		// r28{7}
    union { __size32; __size32 *; } esp_30; 		// r28{111}
    union { __size32; unsigned int *; } esp_31; 		// r28{126}
    union { __size32; unsigned int *; } esp_32; 		// r28{126}
    union { __size32; unsigned int *; } esp_33; 		// r28{126}
    union { __size32; __size32 *; } esp_34; 		// r28{114}
    union { __size32; __size32 *; } esp_35; 		// r28{114}
    union { __size32; __size32 *; } esp_36; 		// r28{114}
    __size32 esp_37; 		// r28{106}
    __size32 esp_38; 		// r28{106}
    __size32 esp_39; 		// r28{106}
    union { __size32; unsigned int *; } esp_4; 		// r28{11}
    int esp_40; 		// r28{2}
    int esp_41; 		// r28{2}
    union { __size32; unsigned int *; } esp_5; 		// r28{11}
    union { __size32; unsigned int *; } esp_6; 		// r28{11}
    union { __size32; __size32 *; } esp_7; 		// r28{22}
    union { __size32; __size32 *; } esp_8; 		// r28{22}
    union { __size32; __size32 *; } esp_9; 		// r28{22}
    __size32 local0; 		// m[esp - 4]
    int local1; 		// m[esp - 8]
    int local10; 		// m[esp_40 - 4]{48}
    int local11; 		// m[esp_40 - 4]{58}
    int local12; 		// m[esp_40 - 4]{71}
    int local13; 		// m[esp_40 - 8]{7}
    int local14; 		// m[esp_40 - 8]{11}
    int local15; 		// m[esp_40 - 8]{22}
    int local16; 		// m[esp_40 - 8]{35}
    int local17; 		// m[esp_40 - 8]{40}
    int local18; 		// m[esp_40 - 8]{48}
    int local19; 		// m[esp_40 - 8]{58}
    unsigned int local2; 		// m[esp - 288]
    int local20; 		// m[esp_40 - 8]{71}
    int local21; 		// m[esp_40 - 288]{7}
    int local22; 		// m[esp_40 - 288]{11}
    int local23; 		// m[esp_40 - 288]{22}
    int local24; 		// m[esp_40 - 288]{35}
    int local25; 		// m[esp_40 - 288]{40}
    int local26; 		// m[esp_40 - 288]{48}
    int local27; 		// m[esp_40 - 288]{58}
    int local28; 		// m[esp_40 - 288]{71}
    int local29; 		// m[esp_40 - 292]{7}
    int local3; 		// m[esp - 292]
    int local30; 		// m[esp_40 - 292]{11}
    int local31; 		// m[esp_40 - 292]{22}
    int local32; 		// m[esp_40 - 292]{35}
    int local33; 		// m[esp_40 - 292]{40}
    int local34; 		// m[esp_40 - 292]{48}
    int local35; 		// m[esp_40 - 292]{58}
    int local36; 		// m[esp_40 - 292]{71}
    int local37; 		// m[esp_40 - 296]{7}
    int local38; 		// m[esp_40 - 296]{11}
    int local39; 		// m[esp_40 - 296]{22}
    unsigned int local4; 		// m[esp - 296]
    int local40; 		// m[esp_40 - 296]{35}
    int local41; 		// m[esp_40 - 296]{40}
    int local42; 		// m[esp_40 - 296]{48}
    int local43; 		// m[esp_40 - 296]{58}
    int local44; 		// m[esp_40 - 296]{71}
    int local45; 		// ecx{86}
    int local46; 		// eax_6{88}
    unsigned char local47; 		// dl_12{105}
    __size32 local48; 		// esp_37{106}
    unsigned char local49; 		// dl_12{112}
    int local5; 		// m[esp_40 - 4]{7}
    int local50; 		// edx_10{113}
    union { __size32 *; __size32; } local51; 		// esp_34{114}
    __size32 local52; 		// ebx_4{125}
    union { unsigned int *; __size32; } local53; 		// esp_31{126}
    int local6; 		// m[esp_40 - 4]{11}
    int local7; 		// m[esp_40 - 4]{22}
    int local8; 		// m[esp_40 - 4]{35}
    int local9; 		// m[esp_40 - 4]{40}

    local47 = dl_12;
    local49 = dl_12;
    local49 = dl_12;
    local50 = edx_10;
    local50 = edx_10;
    local52 = ebx_4;
    if (*0x41755c != 0) {
        proc_0x00411970(0, 0, global_0x00417000 ^ esp_40 - 4 ^ esp_40 - 4, esp_40 - 4, param1, LOGICALFLAGS32(global_0x00417000 ^ esp_40 - 4 ^ esp_40 - 4), LOGICALFLAGS32(global_0x00417000 ^ esp_40 - 4 ^ esp_40 - 4), LOGICALFLAGS32(global_0x00417000 ^ esp_40 - 4 ^ esp_40 - 4), dl_12, edx_10, ebx_4, esi, ebp, global_0x00417000 ^ esp_40 - 4, pc);
    }
    global_0x0041755c = 1;
    (*LoadLibraryA)((unsigned char) global_0x00417034, global_0x00417034, esp_40 - 4, LoadLibraryA, param1, SUBFLAGS32(global_0x0041755c, 0, global_0x0041755c), global_0x0041755c == 0, global_0x0041755c < 0, dl_12, edx_10, ebx_4, ebp, global_0x00417000 ^ esp_40 - 4, esi, global_0x00417034, pc);
    local53 = esp_1;
    if (eax == 0) {
        *(__size32*)(esp_1 - 4) = 0x4161f4;
        (*esi)(al, eax, ecx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), dl_1, edx_1, ebx_1, local5, local13, local21, local29, local37);
        if (eax == 0) {
            esi = *esp_4;
            ecx = *(ebp - 4);
            proc_0x00411970(al, eax, ecx ^ ebp, ebp, esi, edi, <all>, LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), dl_4, edx_4, ebx, local6, local14, local22, local30, local38);
        }
        *(__size32*)(esp_4 - 4) = ebx;
        *(__size32*)(esp_4 - 8) = 0x4161e4;
        *(__size32*)(esp_4 - 12) = eax;
        (*GetProcAddress)(al, eax, ecx, GetProcAddress, ebp, eax, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), dl_4, edx_4, local6, local14, local22, local30, local38);
        *(__size32*)(ebp - 276) = eax;
        if (eax == 0) {
            ebx = *esp_7;
            esi = *(esp_7 + 4);
            ecx = *(ebp - 4);
            proc_0x00411970(al, eax, ecx ^ ebp, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), dl_5, edx_5, local7, local15, local23, local31, local39);
        }
        *(__size32*)(esp_7 - 4) = edi;
        *(__size32*)(esp_7 - 8) = 0x4161d0;
        *(__size32*)(esp_7 - 12) = esi;
        (*ebx)(al, eax, ecx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), dl_5, edx_5, local7, local15, local23, local31, local39);
        local51 = esp_10;
        if (eax != 0) {
            *(__size32*)(esp_10 - 4) = 0x4161c0;
            *(__size32*)(esp_10 - 8) = esi;
            (*ebx)(al, eax, ecx, ebx, ebp, esi, eax, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), dl_6, edx_6, local8, local16, local24, local32, local40);
            local51 = esp_13;
            if (eax != 0) {
                *(int*)(esp_13 - 4) = ebp - 272;
                *(__size32*)(esp_13 - 8) = 1;
                *(__size32*)(esp_13 - 12) = 0;
                *(__size32*)(esp_13 - 16) = 0x416188;
                *(__size32*)(esp_13 - 20) = 0x80000002;
                (**(ebp - 276))(al, eax, ebp - 272, eax, ebp, esi, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), dl_9, edx_9, local9, local17, local25, local33, local41);
                local48 = esp_16;
                if (eax == 0) {
                    ecx = *(ebp - 272);
                    *(int*)(esp_16 - 4) = ebp - 268;
                    *(unsigned int*)(esp_16 - 8) = eax;
                    *(int*)(esp_16 - 12) = ebp - 280;
                    *(__size32*)(esp_16 - 16) = 0;
                    *(__size32*)(esp_16 - 20) = 0x41616c;
                    *(__size32*)(esp_16 - 24) = ecx;
                    (*edi)((unsigned char) ebp - 280, (unsigned char) ebp - 268, ebp - 280, ecx, ebp - 268, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), local10, local18, local26, local34, local42);
                    local47 = dl;
                    local48 = esp_19;
                    local48 = esp_19;
                    if (eax == 0) {
                        eax_1 = *(ebp - 268);
                        dl = (unsigned char) 0x7fffffff - eax_1;
                        local47 = dl;
                        if ( ~(0x7fffffff - eax_1 < 13 || eax_1 + 13 >= 260)) {
                            *(int*)(esp_19 - 4) = ebp - 268;
                            eax_4 = *(ebp - 272);
                            *(int*)(esp_19 - 8) = ebp - 264;
                            *(int*)(esp_19 - 12) = ebp - 280;
                            *(__size32*)(esp_19 - 16) = 0;
                            *(__size32*)(esp_19 - 20) = 0x41616c;
                            *(__size32*)(esp_19 - 24) = eax_4;
                            (*edi)((unsigned char) eax_4, (unsigned char) ebp - 280, eax_4, ebp - 264, ebp - 280, ebx, ebp, esi, edi, <all>, SUBFLAGS32(eax_1 + 13, 260, eax_1 - 247), eax_1 == 247, eax_1 + 13 < 260, local11, local19, local27, local35, local43);
                            ecx = *(ebp - 272);
                            *(__size32*)(esp_22 - 4) = ecx;
                            (*ebx)(al, dl, eax, ecx, edx, ebx, ebp, esi, eax, <all>, flags, ZF, CF, local12, local20, local28, local36, local44);
                            local49 = dl;
                            *(__size32*)(esp_25 - 4) = esi;
                            edx = FreeLibrary(*(esp_25 - 4)); /* Warning: also results in esp_28 */
                            local50 = edx;
                            local51 = esp_28;
                            if (edi == 0) {
                                ecx_1 = *(ebp - 268);
                                local45 = ecx_1;
                                if (*(ebp + ecx_1 - 266) != 92) {
                                    *(__size8*)(ebp + ecx_1 - 265) = 92;
bb0x4138f3:
                                    ecx = local45;
                                    eax = 0;
                                    local46 = eax;
                                    do {
                                        eax_6 = local46;
                                        dl = *(global_0x00417034 + eax_6);
                                        edx = edx & ~0xff | (dl);
                                        *(unsigned char*)(ebp + ecx + eax_6 - 264) = dl;
                                        eax_7 = eax_6 + 1;
                                        local46 = eax_7;
                                    } while (eax_6 + 1 <= 11);
                                    *(int*)(esp_25 - 4) = ebp - 264;
                                    eax = LoadLibraryA(*(esp_25 - 4)); /* Warning: also results in edx */
                                    edi = *esp_25;
                                    ebx = *(esp_25 + 4);
                                    esi = *(esp_25 + 8);
                                    ecx = *(ebp - 4);
                                    proc_0x00411970((unsigned char) ebp - 264, dl, eax, ecx ^ ebp, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), *(esp_40 - 4), *(esp_40 - 8), *(esp_40 - 288), *(esp_40 - 292), *(esp_40 - 296));
                                }
                                ecx = ecx_1 - 1;
                                *(int*)(ebp - 268) = ecx_1 - 1;
                                local45 = ecx;
                                goto bb0x4138f3;
                            }
                            goto bb0x413933;
                        }
                    }
                }
                dl_12 = local47;
                esp_37 = local48;
                *(__size32*)(esp_37 - 4) = esi;
                edx = FreeLibrary(*(esp_37 - 4)); /* Warning: also results in esp_30 */
                local49 = dl_12;
                local50 = edx;
                local51 = esp_30;
            }
        }
bb0x413933:
        dl_12 = local49;
        edx_10 = local50;
        esp_34 = local51;
        edi = *esp_34;
        eax = 0;
        al = 0;
        ebx = *(esp_34 + 4);
        esp_29 = esp_34 + 8;
        local52 = ebx;
        local53 = esp_29;
    }
    ebx_4 = local52;
    esp_31 = local53;
    ecx = *(ebp - 4);
    esi = *esp_31;
    proc_0x00411970(al, dl_12, eax, ecx ^ ebp, edx_10, ebx_4, ebp, esi, edi, <all>, LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), *(esp_40 - 4), *(esp_40 - 8), *(esp_40 - 288), *(esp_40 - 292), *(esp_40 - 296));
}


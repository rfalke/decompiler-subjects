int global_0x00403000 = 0xbb40e64e;
__size32 global_0x00403004 = 0x44bf19b1;// 4 bytes
__size32 global_0x00403018 = 0;// 4 bytes
__size32 global_0x0040301c = 0;// 4 bytes
__size32 global_0x00403020 = 0;// 4 bytes
__size32 global_0x00403030 = 0;// 4 bytes
__size32 global_0x00403034 = 0;// 4 bytes
__size32 global_0x0040312c = 0;// 4 bytes
__size32 global_0x00403130 = 0;// 4 bytes
__size32 global_0x00403134 = 0;// 4 bytes
__size32 global_0x00403138 = 0;// 4 bytes
__size32 global_0x0040313c = 0;// 4 bytes
__size32 global_0x00403140 = 0;// 4 bytes
int global_0x00403370;
void global_0x00403380;
void proc_0x00401968(int param1, int param2);
void _start();
__size32 proc_0x004018bc(__size32 param1, __size32 param2, __size32 param3, __size32 param4);
__size32 proc_0x004017f0(unsigned int param1, unsigned char param2, unsigned int param3, unsigned int param4);
__size32 proc_0x00401200(int param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6);
void proc_0x00401901(union { __size32; __size32 *; } param1);
__size32 proc_0x00401760(union { __size16 *; __size32; } param1, unsigned char param2, unsigned int param3);
__size32 proc_0x004017a0(__size32 param1, unsigned int param2, unsigned int param3);
void proc_0x00401140(unsigned int param1, union { __size32; char *; } param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6);
void proc_0x0040123b(__size32 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6);
void proc_0x00401000(__size32 param1, __size32 param2);

/** address: 0x00401968 */
void proc_0x00401968(int param1, int param2)
{
    __size32 eax; 		// r24
    int eax_1; 		// r24{7}
    int eax_2; 		// r24{8}
    int esi; 		// r30
    int esi_1; 		// r30{10}
    int esi_4; 		// r30{13}
    int local2; 		// esi{19}

    if (global_0x00403000 == 0xbb40e64e || (global_0x00403000 & ~0xffff) == 0) {
        GetSystemTimeAsFileTime();
        eax_1 = GetCurrentProcessId();
        eax_2 = GetCurrentThreadId();
        eax = GetTickCount();
        esi_1 = 0 ^ eax_1 ^ eax_2 ^ eax;
        QueryPerformanceCounter();
        eax = param2 ^ param1;
        esi_4 = esi_1 ^ eax;
        local2 = esi_4;
        if ((esi_1 ^ eax) != 0xbb40e64e) {
            if (((esi_1 ^ eax) & ~0xffff) == 0) {
                esi = esi_1 ^ eax | (esi_1 ^ eax) << 16;
                local2 = esi;
            }
        }
        else {
            esi = 0xbb40e64f;
            local2 = esi;
        }
        esi = local2;
        global_0x00403000 = esi;
        global_0x00403004 =  ~esi;
    }
    else {
        global_0x00403004 =  ~global_0x00403000;
    }
    return;
}

/** address: 0x004014ec */
void _start()
{
    __size16 ax; 		// r0
    __size16 cx; 		// r1
    unsigned char dl; 		// r10
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    int ecx; 		// r25
    __size32 edi; 		// r31
    int edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28
    __size32 esp_1; 		// r28{8}
    __size32 esp_2; 		// r28{59}
    __size32 local0; 		// m[esp - 4]
    int local1; 		// m[esp - 8]
    unsigned int local2; 		// m[esp - 12]
    __size32 local3; 		// esp{67}

    proc_0x00401968(*(%esp - 20), *(%esp - 16));
    esp = proc_0x004018bc(16, ebx, esi, edi); /* Warning: also results in ebp */
    ebx = 0;
    *(__size32*)(ebp - 4) = 0;
    eax = *24;
    esi = *(eax + 4);
    *(__size32*)(ebp - 28) = 0;
    edi = 0x403374;
    for(;;) {
        esp_1 = esp;
        *(__size32*)(esp_1 - 4) = 0;
        *(__size32*)(esp_1 - 8) = esi;
        *(__size32*)(esp_1 - 12) = 0x403374;
        eax = InterlockedCompareExchange(); /* Warning: also results in edx */
        if (eax != 0) {
            if (eax == esi) {
                break;
            }
            *(__size32*)(esp_1 - 16) = 1000;
            esp = Sleep(*(esp_1 - 16));
        }
bb0x4012e0:
        esi = 1;
        if (global_0x00403370 != 1) {
            if (global_0x00403370 != 0) {
                global_0x00403034 = 1;
bb0x40132e:
                if (global_0x00403370 == 1) {
                    *(__size32*)(esp_1 - 16) = 0x4020cc;
                    *(__size32*)(esp_1 - 20) = 0x4020c4;
                    edx = _initterm();
                    global_0x00403370 = 2;
                }
                if (*(ebp - 28) == 0) {
                    *(__size32*)(esp_1 - 16) = 0;
                    *(__size32*)(esp_1 - 20) = 0x403374;
                    edx = InterlockedExchange(*(esp_1 - 20), *(esp_1 - 16));
                }
                esp = esp_1 - 12;
                local3 = esp;
                if (*0x403380 != 0) {
                    *(__size32*)(esp_1 - 16) = 0x403380;
                    eax = proc_0x004017f0(*(esp_1 - 16), dl, edx, 0); /* Warning: also results in ax, cx, dl, edx */
                    ecx = *(esp_1 - 16);
                    esp_2 = esp_1 - 12;
                    local3 = esp_2;
                    if (eax != 0) {
                        *(__size32*)(esp_1 - 16) = 0;
                        *(__size32*)(esp_1 - 20) = 2;
                        *(__size32*)(esp_1 - 24) = 0;
                        (*global_0x00403380)(ax, cx, dl, eax, ecx, edx, 0, ebp, 1, 0x403374, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), 16, 0x4021d8, pc);
                        local3 = esp;
                    }
                }
                esp = local3;
                *(__size32*)0x23cc = global_0x0040301c;
                local0 = global_0x0040301c;
                local1 = global_0x00403020;
                local2 = global_0x00403018;
                eax = proc_0x00401200(*(esp - 12), *(esp - 8), 0x23cc, ebx, esi, edi); /* Warning: also results in ebx */
                global_0x00403030 = eax;
                if (*0x403024 == ebx) {
                    local0 = eax;
                    exit(*(esp - 4));
                }
                if (*0x403034 == ebx) {
                    _cexit();
                }
                *(__size32*)(ebp - 4) = -2;
            }
            else {
                global_0x00403370 = 1;
                *(__size32*)(esp_1 - 16) = 0x4020dc;
                *(__size32*)(esp_1 - 20) = 0x4020d0;
                eax = _initterm_e(); /* Warning: also results in edx */
                esp = esp_1 - 12;
                if (eax == 0) {
                    goto bb0x40132e;
                }
                else {
                    *(__size32*)(ebp - 4) = -2;
                }
            }
        }
        else {
            *(__size32*)(esp_1 - 16) = 31;
            edx = _amsg_exit();
            goto bb0x40132e;
        }
        proc_0x00401901(ebp);
        return;
    }
    *(__size32*)(ebp - 28) = 1;
    goto bb0x4012e0;
}

/** address: 0x004018bc */
__size32 proc_0x004018bc(__size32 param1, __size32 param2, __size32 param3, __size32 param4)
{
    union { __size32; __size32 *; } esp; 		// r28
    __size32 local0; 		// m[esp]

    *(__size32*)(esp - param1 - 12) = param2;
    *(__size32*)(esp - param1 - 16) = param3;
    *(__size32*)(esp - param1 - 20) = param4;
    *(int*)(esp - param1 - 24) = global_0x00403000 ^ (esp + 8);
    *(__size32*)(esp - param1 - 28) = local0;
    *(__size32*)0 = (esp - 8);
    return (esp + 8);
}

/** address: 0x004017f0 */
__size32 proc_0x004017f0(unsigned int param1, unsigned char param2, unsigned int param3, unsigned int param4)
{
    __size16 ax; 		// r0
    __size16 cx; 		// r1
    unsigned char dl; 		// r10
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{6}
    int eax_10; 		// r24{12}
    int eax_11; 		// r24{13}
    int eax_12; 		// r24{19}
    __size32 eax_4; 		// r24{8}
    __size32 eax_7; 		// r24{10}
    unsigned int edx; 		// r26
    int esp; 		// r28
    int local3; 		// eax{15}

    eax_1 = *0;
    *(int*)0 = (esp - 20);
    eax_4 = proc_0x00401760(0x400000, param2, param3); /* Warning: also results in ax, cx, dl, edx */
    if (eax_4 == 0) {
bb0x401892:
        eax_12 = 0;
        *(__size32*)0 = eax_1;
        local3 = eax_12;
    }
    else {
        eax_7 = proc_0x004017a0(0x400000, param1 - 0x400000, param4); /* Warning: also results in edx */
        if (eax_7 == 0) {
            goto bb0x401892;
        }
        else {
            eax_10 = *(eax_7 + 36);
            eax_11 =  ~((unsigned int)eax_10 >> 31) & 0x1;
            *(__size32*)0 = eax_1;
            local3 = eax_11;
        }
    }
    eax = local3;
    return eax; /* WARNING: Also returning: ax := ax, cx := cx, dl := dl, edx := edx */
}

/** address: 0x00401200 */
__size32 proc_0x00401200(int param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6)
{
    int ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    unsigned int esi; 		// r30
    unsigned int esi_1; 		// r30{19}
    unsigned int esi_2; 		// r30{25}
    int esp; 		// r28
    int esp_1; 		// r28{9}
    int esp_10; 		// r28{18}
    int esp_13; 		// r28{1}
    int esp_4; 		// r28{13}
    int esp_7; 		// r28{22}
    int local1; 		// esp_10{18}
    unsigned int local2; 		// esi_1{19}
    union { __size32 *; int; } local3; 		// esp{28}

    *(__size32*)(((esp_13 - 4) & ~0x7) - 4) = param3;
    esp_1 = (esp_13 - 4 & ~0x7) - 4;
    *(__size32*)(esp_1 - 4) = param4;
    *(__size32*)(esp_1 - 8) = param5;
    *(__size32*)(esp_1 - 12) = param6;
    esp_4 = esp_1 - 12;
    edi = 0;
    esi = 1;
    local1 = esp_4;
    local2 = esi;
    local3 = esp_4;
    if (param1 > 1) {
        do {
            esp_10 = local1;
            esi_1 = local2;
            ecx = *(param2 + esi_1 * 4);
            esp_7 = esp_10 - 4;
            proc_0x00401140(*(esp_10 - 60), ecx, param1, esp_13 - 4, esi_1, edi);
            local1 = esp_7;
            local3 = esp_7;
            esi_2 = esi_1 + 1;
            edi += param2;
            local2 = esi_2;
        } while (esi_1 + 1 < param1);
    }
    esp = local3;
    ebx = *(esp + 8);
    return edi; /* WARNING: Also returning: ebx := ebx */
}

/** address: 0x00401901 */
void proc_0x00401901(union { __size32; __size32 *; } param1)
{
    __size32 ecx; 		// r25
    __size32 local0; 		// m[esp]

    ecx = *(param1 - 16);
    *(__size32*)0 = ecx;
    *(__size32*)param1 = local0;
    return;
}

/** address: 0x00401760 */
__size32 proc_0x00401760(union { __size16 *; __size32; } param1, unsigned char param2, unsigned int param3)
{
    short ax; 		// r0
    short cx; 		// r1
    unsigned char dl; 		// r10
    unsigned int eax; 		// r24
    unsigned int edx; 		// r26
    unsigned char local0; 		// param2{11}
    unsigned int local1; 		// param3{13}

    cx = (unsigned short) param1;
    local0 = param2;
    local1 = param3;
    if (*param1 == 0x5a4d) {
        eax = *(param1 + 60);
        if (*(eax + param1) != 0x4550) {
bb0x401772:
            eax = 0;
            ax = 0;
        }
        else {
            cx = 267;
            dl =  (*(eax + param1 + 24) == 267) ? 1 : 0;
            edx = (dl);
            eax = (dl);
            ax = (unsigned short) (dl);
            local0 = dl;
            local1 = edx;
        }
    }
    else {
        goto bb0x401772;
    }
    param2 = local0;
    param3 = local1;
    return eax; /* WARNING: Also returning: ax := ax, cx := cx, dl := param2, edx := param3 */
}

/** address: 0x004017a0 */
__size32 proc_0x004017a0(__size32 param1, unsigned int param2, unsigned int param3)
{
    unsigned int eax; 		// r24
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{16}
    unsigned int ebx_4; 		// r27{17}
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 edx_1; 		// r26{12}
    __size32 edx_2; 		// r26{20}
    unsigned int esi; 		// r30
    __size32 local0; 		// edx_1{12}
    unsigned int local1; 		// param3{13}
    unsigned int local2; 		// ebx{19}
    __size32 local3; 		// edx{23}
    __size32 local4; 		// edx{26}

    ecx = *(param1 + 60);
    eax = *(unsigned short*)(ecx + param1 + 20);
    esi = *(unsigned short*)(ecx + param1 + 6);
    edx = 0;
    eax = eax + ecx + param1 + 24;
    local0 = edx;
    local1 = param3;
    local3 = edx;
    if (esi <= 0) {
bb0x4017dd:
        edx = local3;
        eax = 0;
        local4 = edx;
    }
    else {
        do {
            edx_1 = local0;
            param3 = local1;
            ecx = *(eax + 12);
            local2 = param3;
            local4 = edx_1;
            if (param2 < ecx) {
bb0x4017d5:
                ebx = local2;
                edx_2 = edx_1 + 1;
                eax += 40;
                local0 = edx_2;
                local1 = ebx;
                local3 = edx_2;
            }
            else {
                ebx_1 = *(eax + 8);
                ebx_4 = ebx_1 + ecx;
                local2 = ebx_4;
                if (param2 >= ebx_1 + ecx) {
                    goto bb0x4017d5;
                }
                edx = local4;
                return eax; /* WARNING: Also returning: edx := edx */
            }
            goto bb0x4017d5;
        } while (edx_1 + 1 < esi);
        goto bb0x4017dd;
    }
    edx = local4;
    return eax; /* WARNING: Also returning: edx := edx */
}

/** address: 0x00401140 */
void proc_0x00401140(unsigned int param1, union { __size32; char *; } param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6)
{
    FILE *eax; 		// r24
    int edx; 		// r26
    int esp; 		// r28

    eax = _stat64i32();
    if (eax != 0) {
bb0x401167:
        edx = perror(param2);
        proc_0x0040123b(1, global_0x00403000 ^ (esp - 76) ^ esp - 76, edx, param3, param4, param5, param6, LOGICALFLAGS32(global_0x00403000 ^ esp - 76 ^ esp - 76), LOGICALFLAGS32(global_0x00403000 ^ esp - 76 ^ esp - 76), LOGICALFLAGS32(global_0x00403000 ^ esp - 76 ^ esp - 76), global_0x00403000 ^ esp - 76, param1, pc, param4, param5, param6, param2, pc, pc);
    }
    eax = fopen(param2, "rb");
    if (eax != 0) {
        if (param1 != 0) {
            *(__size32*)(%esp - 4) = %edi;
            *(__size32*)(%esp - 4) = 16;
            *(__size32*)(%esp - 4) = 1;
            *(__size32*)(%esp - 4) = %ecx;
            (*%ebx)();
            if ( ~flags) {
                *(__size32*)(%esp - 4) = %esi;
                *(__size32*)(%esp - 4) = %edx;
                proc_0x00401000(*(%esp + 4), *(%esp + 8));
            }
        }
        *(__size32*)(%esp - 4) = %edi;
        fclose(*(%esp + 4));
        proc_0x0040123b();
    }
    goto bb0x401167;
}

/** address: 0x0040123b */
void proc_0x0040123b(__size32 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6)
{
    if (param2 != *0x403000) {
    }
    global_0x00403140 = param1;
    global_0x0040313c = param2;
    global_0x00403138 = param3;
    global_0x00403134 = param4;
    global_0x00403130 = param5;
    global_0x0040312c = param6;
}

/** address: 0x00401000 */
void proc_0x00401000(__size32 param1, __size32 param2)
{
    __size8 al; 		// r8
    unsigned char al_1; 		// r8{73}
    __size16 ax; 		// r0
    unsigned char cl; 		// r9
    void *eax; 		// r24
    int eax_1; 		// r24{4}
    union { __size32 *; __size32; unsigned char *; } eax_2; 		// r24{62}
    __size32 eax_3; 		// r24{66}
    __size32 eax_4; 		// r24{66}
    union { __size32 *; __size32; unsigned char *; } eax_5; 		// r24{62}
    union { __size32 *; __size32; unsigned char *; } eax_6; 		// r24{62}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    int ecx; 		// r25
    int ecx_1; 		// r25{44}
    int ecx_2; 		// r25{54}
    int ecx_3; 		// r25{54}
    int ecx_4; 		// r25{44}
    int ecx_5; 		// r25{44}
    __size32 edi; 		// r31
    __size32 edi_1; 		// r31{48}
    __size32 edi_2; 		// r31{52}
    __size32 edi_3; 		// r31{52}
    __size32 edi_4; 		// r31{48}
    __size32 edi_5; 		// r31{48}
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    __size32 esi_1; 		// r30{29}
    __size32 esi_10; 		// r30{71}
    __size32 esi_2; 		// r30{29}
    __size32 esi_3; 		// r30{29}
    int esi_4; 		// r30{30}
    int esi_5; 		// r30{30}
    __size32 esi_6; 		// r30{71}
    __size32 esi_7; 		// r30{80}
    __size32 esi_8; 		// r30{80}
    __size32 esi_9; 		// r30{71}
    int esp; 		// r28
    __size32 esp_1; 		// r28{4}
    __size32 esp_10; 		// r28{31}
    __size32 esp_11; 		// r28{31}
    __size32 esp_12; 		// r28{31}
    __size32 esp_13; 		// r28{16}
    __size32 esp_14; 		// r28{16}
    __size32 esp_15; 		// r28{16}
    __size32 esp_16; 		// r28{38}
    __size32 esp_17; 		// r28{38}
    __size32 esp_18; 		// r28{38}
    union { unsigned char *; __size32 *; unsigned int; } esp_19; 		// r28{58}
    __size32 esp_2; 		// r28{4}
    union { unsigned char *; __size32 *; unsigned int; } esp_20; 		// r28{58}
    union { unsigned char *; __size32 *; unsigned int; } esp_21; 		// r28{58}
    int esp_22; 		// r28{1}
    int esp_23; 		// r28{1}
    __size32 esp_3; 		// r28{4}
    __size32 esp_4; 		// r28{5}
    __size32 esp_5; 		// r28{5}
    __size32 esp_6; 		// r28{5}
    __size32 esp_7; 		// r28{29}
    __size32 esp_8; 		// r28{29}
    __size32 esp_9; 		// r28{29}
    __size32 local0; 		// m[esp + 4]
    __size32 local1; 		// m[esp + 8]
    int local10; 		// m[esp - 116]
    unsigned int local11; 		// m[esp - 120]
    int local12; 		// m[esp_22 - 4]{0}
    int local13; 		// m[esp_22 - 4]{0}
    int local14; 		// m[esp_22 - 4]{0}
    int local15; 		// m[esp_22 - 4]{0}
    int local16; 		// m[esp_22 - 4]{0}
    int local17; 		// m[esp_22 - 88]{0}
    int local18; 		// m[esp_22 - 88]{0}
    int local19; 		// m[esp_22 - 88]{0}
    int local2; 		// m[esp - 4]
    int local20; 		// m[esp_22 - 88]{0}
    int local21; 		// m[esp_22 - 88]{0}
    int local22; 		// m[esp_22 - 92]{0}
    int local23; 		// m[esp_22 - 92]{0}
    int local24; 		// m[esp_22 - 92]{0}
    int local25; 		// m[esp_22 - 92]{0}
    int local26; 		// m[esp_22 - 92]{0}
    int local27; 		// m[esp_22 - 96]{0}
    int local28; 		// m[esp_22 - 96]{0}
    int local29; 		// m[esp_22 - 96]{0}
    __size32 local3; 		// m[esp - 88]
    int local30; 		// m[esp_22 - 96]{0}
    int local31; 		// m[esp_22 - 96]{0}
    int local32; 		// m[esp_22 - 100]{0}
    int local33; 		// m[esp_22 - 100]{0}
    int local34; 		// m[esp_22 - 100]{0}
    int local35; 		// m[esp_22 - 100]{0}
    int local36; 		// m[esp_22 - 100]{0}
    int local37; 		// m[esp_22 - 104]{0}
    int local38; 		// m[esp_22 - 104]{0}
    int local39; 		// m[esp_22 - 104]{0}
    __size32 local4; 		// m[esp - 92]
    int local40; 		// m[esp_22 - 104]{0}
    int local41; 		// m[esp_22 - 104]{0}
    int local42; 		// m[esp_22 - 108]{0}
    int local43; 		// m[esp_22 - 108]{0}
    int local44; 		// m[esp_22 - 108]{0}
    int local45; 		// m[esp_22 - 108]{0}
    int local46; 		// m[esp_22 - 108]{0}
    int local47; 		// m[esp_22 - 112]{0}
    int local48; 		// m[esp_22 - 112]{0}
    int local49; 		// m[esp_22 - 112]{0}
    __size32 local5; 		// m[esp - 96]
    int local50; 		// m[esp_22 - 112]{0}
    int local51; 		// m[esp_22 - 112]{0}
    int local52; 		// m[esp_22 - 116]{0}
    int local53; 		// m[esp_22 - 116]{0}
    int local54; 		// m[esp_22 - 116]{0}
    int local55; 		// m[esp_22 - 116]{0}
    int local56; 		// m[esp_22 - 116]{0}
    int local57; 		// m[esp_22 - 120]{0}
    int local58; 		// m[esp_22 - 120]{0}
    int local59; 		// m[esp_22 - 120]{0}
    __size32 local6; 		// m[esp - 100]
    int local60; 		// m[esp_22 - 120]{0}
    int local61; 		// m[esp_22 - 120]{0}
    int local62; 		// m[esp - 84]
    __size32 local63; 		// esp_13{16}
    int local64; 		// esi{18}
    int local65; 		// eax{37}
    __size32 local66; 		// esp_16{38}
    int local67; 		// esi{40}
    int local68; 		// ecx_1{44}
    __size32 local69; 		// edi_1{48}
    __size32 local7; 		// m[esp - 104]
    int local70; 		// ecx{57}
    union { unsigned int; __size32 *; unsigned char *; } local71; 		// esp_19{58}
    union { unsigned char *; __size32; __size32 *; } local72; 		// eax_2{62}
    __size32 local73; 		// esi_6{71}
    __size32 local74; 		// esi{83}
    __size32 local75; 		// esi{90}
    int local8; 		// m[esp - 108]
    int local9; 		// m[esp - 112]

    (*0x2334)((unsigned short) param1, (unsigned char) param1, param1, (esp_22 - 84), 0x2334, param2, LOGICALFLAGS32(global_0x00403000 ^ esp_22 - 88), LOGICALFLAGS32(global_0x00403000 ^ esp_22 - 88), LOGICALFLAGS32(global_0x00403000 ^ esp_22 - 88), cl, ecx, esi, edi, param1, param2, global_0x00403000 ^ esp_22 - 88, param1, ebx, ebp, esi, edi, ecx, 0x402104, esp_22 - 84, pc);
    local65 = eax_1;
    esp_4 = esp_1 + 12;
    local63 = esp_4;
    local66 = esp_4;
    if (ebp > 16) {
        ebp = 16;
    }
    esi = 0;
    flags = LOGICALFLAGS32(ebp);
    local64 = esi;
    local67 = esi;
    if (ebp <= 0) {
bb0x401071:
        eax = local65;
        esp_16 = local66;
        esi = local67;
        ecx = 16 - esi;
        local68 = ecx;
        local71 = esp_16;
        do {
            ecx_1 = local68;
            edi = esp_16 + 19;
            local69 = edi;
            do {
                edi_1 = local69;
                al = *(edi_1 + 1);
                ax = ax & 0xff00 | (al);
                eax = eax & ~0xff | (al);
                edi_2 = edi_1 + 1;
                local69 = edi_2;
            } while (al != 0);
            ecx_2 = ecx_1 - 1;
            *(__size32*)(edi_1 + 1) = 0x202020;
            local68 = ecx_2;
            local70 = ecx_2;
        } while (ecx_1 != 1);
    }
    else {
        edi = esp_1 + 41;
        do {
            esp_13 = local63;
            esi = local64;
            eax = *(esp_13 + 16);
            ecx = *(unsigned char*)(eax + esi);
            *(unsigned int*)(esp_13 - 4) = ecx;
            *(__size32*)(esp_13 - 8) = 0x40210c;
            *(__size32*)(esp_13 - 12) = edi;
            (*ebx)((unsigned short) eax, (unsigned char) eax, (unsigned char) ecx, eax, ecx, edx, ebx, ebp, esi, edi, <all>, flags, ZF, CF, *(esp_22 + 4), *(esp_22 + 8), local13, local18, local22, local27, local33, local38, local43, local47, local52, local58);
            local65 = eax;
            local70 = ecx;
            esi_4 = esi_1 + 1;
            esp_10 = esp_7 + 12;
            edi += 3;
            flags = SUBFLAGS32(esi_1 + 1, ebp, esi_1 - ebp + 1);
            local63 = esp_10;
            local64 = esi_4;
            local66 = esp_10;
            local67 = esi_4;
            local71 = esp_10;
        } while (esi_1 + 1 < ebp);
        if (esi_1 + 1 < 16) {
            goto bb0x401071;
        }
    }
    ecx = local70;
    esp_19 = local71;
    eax = esp_19 + 20;
    local72 = eax;
    do {
        eax_2 = local72;
        cl = *eax_2;
        ecx = ecx & ~0xff | (cl);
        eax_3 = eax_2 + 1;
        local72 = eax_3;
    } while (cl != 0);
    *(__size32*)eax_2 = 0x7c2020;
    esi = 0;
    local73 = esi;
    local74 = esi;
    if (ebp <= 0) {
bb0x4010e4:
        esi = local74;
        *(__size32*)(esp_19 - 4) = 16 - esi;
        *(__size32*)(esp_19 - 8) = 32;
        *(__size32*)(esp_19 - 12) = eax_2 + esi + 3;
        memset(*(esp_19 - 12), *(esp_19 - 8), *(esp_19 - 4));
        esi = 16;
        local75 = esi;
    }
    else {
        do {
            esi_6 = local73;
            edx = *(esp_19 + 16);
            al_1 = *(edx + esi_6);
            if (al_1 < 32) {
bb0x4010d2:
                al = 46;
            }
            else {
                al = (unsigned char) (al_1);
                if (al_1 > 126) {
                    goto bb0x4010d2;
                }
            }
            *(unsigned char*)(eax_2 + esi_6 + 3) = al;
            esi_7 = esi_6 + 1;
            local73 = esi_7;
            local74 = esi_7;
            local75 = esi_7;
        } while (esi_6 + 1 < ebp);
        if (esi_6 + 1 < 16) {
            goto bb0x4010e4;
        }
    }
    esi = local75;
    *(__size32*)(esp_19 - 4) = esp_19 + 20;
    *(__size32*)(esp_19 - 8) = 0x402118;
    *(__size16*)(eax_2 + esi + 3) = 124;
    %eax = printf(*(esp_19 - 8)); /* Warning: also results in edx */
    ecx = *(esp_19 + 100);
    edi = *esp_19;
    esi = *(esp_19 + 4);
    ebp = *(esp_19 + 8);
    ebx = *(esp_19 + 12);
    proc_0x0040123b(124, 124, (unsigned char) ecx ^ esp_19 + 16, %eax, ecx ^ esp_19 + 16, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(ecx ^ esp_19 + 16), LOGICALFLAGS32(ecx ^ esp_19 + 16), LOGICALFLAGS32(ecx ^ esp_19 + 16), *(esp_22 + 4), *(esp_22 + 8), local12, local17, local23, local28, local32, local37, local42, local48, local53, local57);
    return;
}


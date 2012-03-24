int global0 = 0xbb40e64e;
__size32 global2 = 0x44bf19b1;// 4 bytes
__size32 global9 = 0;// 4 bytes
__size32 global10 = 0;// 4 bytes
__size32 global11 = 0;// 4 bytes
__size32 global12 = 0;// 4 bytes
__size32 global13 = 0;// 4 bytes
__size32 global14 = 0;// 4 bytes
void global53;
__size32 global61;// 4 bytes
__size32 global68 = 0;// 4 bytes
__size32 global75 = 0;// 4 bytes
__size32 global76 = 0;// 4 bytes
__size32 global77 = 0;// 4 bytes
__size32 global79 = 0;// 4 bytes

void *proc2(int param1, __size32 param2, __size32 param3, __size32 param4);
int proc5(unsigned int param1, unsigned char param2, int param3, unsigned int param4);
void *proc6(int param1, void *param2, char *param3, __size32 param4, __size32 param5, __size32 param6);
void __imp__XcptFilter();
void proc8(__size32 *param1);
void _start();
void proc10(unsigned int param1, char *param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6);
int proc11(__size16 *param1, unsigned char param2, int param3);
__size32 proc12(__size32 param1, unsigned int param2, unsigned int param3);
void proc13(__size32 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6);
void proc14(__size32 param1, __size32 param2);

// address: 0x401968
union { void * x773; int x774; } proc1(int param1, int param2, int param3) {
    __size32 eax; 		// r24
    int eax_1; 		// r24{43}
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    int esi; 		// r30
    int esi_1; 		// r30{56}
    int esp; 		// r28
    union { void * x773; int x774; } local4; 		// param3{113}

    esp = (esp - 28);
    local4 = param3;
    if (global0 == 0xbb40e64e || (global0 & 0xffff0000) == 0) {
        GetSystemTimeAsFileTime();
        eax_1 = GetCurrentProcessId();
        eax = GetCurrentThreadId();
        eax = GetTickCount();
        esi_1 = 0 ^ eax_1 ^ eax ^ eax;
        QueryPerformanceCounter();
        eax = param2 ^ param1;
        esi = esi_1 ^ eax;
        if ((esi_1 ^ eax) != 0xbb40e64e) {
            if (((esi_1 ^ eax) & 0xffff0000) == 0) {
                esi = esi_1 ^ eax | (esi_1 ^ eax) * 0x10000;
            }
        } else {
            esi = 0xbb40e64f;
        }
        global0 = esi;
        global2 =  !esi;
        esi = esp - 20;
        esp = (esp - 36);
        local4 = esi;
    } else {
        global2 =  !global0;
    }
    param3 = local4;
    edi = *esp;
    ebx = *(esp + 4);
    return param3; /* WARNING: Also returning: ebx := ebx, edi := edi */
}

// address: 0x4018bc
void *proc2(int param1, __size32 param2, __size32 param3, __size32 param4) {
    __size32 *esp; 		// r28
    __size32 local0; 		// m[esp]

    *(__size32*)(esp - param1 - 12) = param2;
    *(__size32*)(esp - param1 - 16) = param3;
    *(__size32*)(esp - param1 - 20) = param4;
    *(int*)(esp - param1 - 24) = global0 ^ (esp + 8);
    *(__size32*)(esp - param1 - 28) = local0;
    *(union { __size32 * x779; int x780; }*)0 = (esp - 8);
    return (esp + 8);
}

// address: 0x4017f0
int proc5(unsigned int param1, unsigned char param2, int param3, unsigned int param4) {
    __size16 ax; 		// r0
    __size16 cx; 		// r1
    unsigned char dl; 		// r10
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{11}
    int edx; 		// r26
    int esp; 		// r28
    unsigned int local1; 		// m[esp - 48]

    eax_1 = *0;
    *(int*)0 = (esp - 20);
    eax = proc11(0x400000, param2, param3); /* Warning: also results in ax, cx, dl, edx */
    if (eax == 0) {
L1:
        eax = 0;
        *(__size32*)0 = eax_1;
    } else {
        local1 = param1 - 0x400000;
        eax = proc12(0x400000, local1, param4); /* Warning: also results in edx */
        if (eax == 0) {
            goto L1;
        } else {
            eax = *(eax + 36);
            eax =  !(eax / 0x80000000) & 0x1;
            *(__size32*)0 = eax_1;
        }
    }
    return eax; /* WARNING: Also returning: ax := ax, cx := cx, dl := dl, edx := edx */
}

// address: 0x401200
void *proc6(int param1, void *param2, char *param3, __size32 param4, __size32 param5, __size32 param6) {
    int ebx; 		// r27
    char *ecx; 		// r25
    void *edi; 		// r31
    unsigned int esi; 		// r30
    unsigned int esi_1; 		// r30{53}
    int esp; 		// r28
    int esp_1; 		// r28{7}
    int esp_2; 		// r28{14}
    int esp_3; 		// r28{24}
    int esp_4; 		// r28{52}
    int local1; 		// esp_4{52}
    union { int x457; __size32 * x458; } local2; 		// esp_2{61}

    *(char **)(((esp - 4) & 0xfffffff8) - 4) = param3;
    esp_1 = (esp - 4 & 0xfffffff8) - 4;
    *(__size32*)(esp_1 - 4) = param4;
    *(__size32*)(esp_1 - 8) = param5;
    *(__size32*)(esp_1 - 12) = param6;
    esp_2 = esp_1 - 12;
    edi = 0;
    esi = 1;
    local1 = esp_2;
    local2 = esp_2;
    if (param1 > 1) {
        do {
            esp_4 = local1;
            esi_1 = esi;
            ecx = *(param2 + esi_1 * 4);
            esp_3 = esp_4 - 4;
            proc10(*(esp_4 - 60), ecx, param1, esp - 4, esi_1, edi);
            local1 = esp_3;
            local2 = esp_3;
            esi = esi_1 + 1;
            edi += param2;
        } while (esi_1 + 1 < param1);
    }
    esp_2 = local2;
    ebx = *(esp_2 + 8);
    return edi; /* WARNING: Also returning: ebx := ebx */
}

// address: 0x40175a
void __imp__XcptFilter() {
    _XcptFilter();
    return;
}

// address: 0x401901
void proc8(__size32 *param1) {
    __size32 ecx; 		// r25
    __size32 local0; 		// m[esp]

    ecx = *(param1 - 16);
    *(__size32*)0 = ecx;
    *(__size32*)param1 = local0;
    return;
}

// address: 0x4014ec
void _start() {
    __size16 ax; 		// r0
    __size16 cx; 		// r1
    unsigned char dl; 		// r10
    __size32 eax; 		// r24
    __size32 *ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    int edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28
    void *esp_1; 		// r28{8}
    void *esp_2; 		// r28{44}
    void *esp_3; 		// r28{191}
    int local0; 		// m[esp - 4]
    int local1; 		// m[esp - 24]
    int local2; 		// m[esp - 20]
    unsigned int local3; 		// m[esp - 12]
    int local4; 		// m[esp - 8]
    void *local5; 		// esp_3{191}

    esi = proc1(local1, local2, esi); /* Warning: also results in ebx, edi */
    esp_1 = proc2(16, ebx, esi, edi); /* Warning: also results in ebp */
    local5 = esp_1;
    ebx = 0;
    *(__size32*)(ebp - 4) = 0;
    eax = *24;
    esi = *(eax + 4);
    *(__size32*)(ebp - 28) = 0;
    edi = 0x403374;
    for(;;) {
        esp_3 = local5;
        *(__size32*)(esp_3 - 4) = 0;
        *(__size32*)(esp_3 - 8) = esi;
        *(__size32*)(esp_3 - 12) = 0x403374;
        eax = InterlockedCompareExchange(); /* Warning: also results in edx */
        if (eax == 0) {
            goto L24;
        }
        if (eax == esi) {
            break;
        }
        *(__size32*)(esp_3 - 16) = 1000;
        esp_2 = Sleep(*(esp_3 - 16));
        local5 = esp_2;
    }
    *(__size32*)(ebp - 28) = 1;
L24:
    esi = 1;
    if (global61 != 1) {
        if (global61 != 0) {
            global68 = 1;
L16:
            if (global61 == 1) {
                *(__size32*)(esp_3 - 16) = 0x4020cc;
                *(__size32*)(esp_3 - 20) = 0x4020c4;
                edx = _initterm();
                global61 = 2;
            }
            if (*(ebp - 28) == 0) {
                *(__size32*)(esp_3 - 16) = 0;
                *(__size32*)(esp_3 - 20) = 0x403374;
                edx = InterlockedExchange(*(esp_3 - 20), *(esp_3 - 16));
            }
            esp = esp_3 - 12;
            if (*0x403380 != 0) {
                *(__size32*)(esp_3 - 16) = 0x403380;
                eax = proc5(*(esp_3 - 16), dl, edx, 0); /* Warning: also results in ax, cx, dl, edx */
                ecx = *(esp_3 - 16);
                esp = esp_3 - 12;
                if (eax != 0) {
                    *(__size32*)(esp_3 - 16) = 0;
                    *(__size32*)(esp_3 - 20) = 2;
                    *(__size32*)(esp_3 - 24) = 0;
                    (*global53)(local1, local2, pc, 0x4021d8, 16, ax, cx, dl, eax, ecx, edx, 0, ebp, 1, 0x403374, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax));
                }
            }
            *(__size32*)0x23cc = global75;
            local0 = global75;
            local4 = global76;
            local3 = global77;
            eax = proc6(*(esp - 12), *(esp - 8), 0x23cc, ebx, esi, edi); /* Warning: also results in ebx */
            global79 = eax;
            if (*0x403024 == ebx) {
                local0 = eax;
                exit(*(esp - 4));
            }
            if (*0x403034 == ebx) {
                _cexit();
            }
            *(__size32*)(ebp - 4) = -2;
        } else {
            global61 = 1;
            *(__size32*)(esp_3 - 16) = 0x4020dc;
            *(__size32*)(esp_3 - 20) = 0x4020d0;
            eax = _initterm_e(); /* Warning: also results in edx */
            esp = esp_3 - 12;
            if (eax == 0) {
                goto L16;
            } else {
                *(__size32*)(ebp - 4) = -2;
            }
        }
    } else {
        *(__size32*)(esp_3 - 16) = 31;
        edx = _amsg_exit();
        goto L16;
    }
    proc8(ebp);
    return;
}

// address: 0x401140
void proc10(unsigned int param1, char *param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6) {
    __size32 eax; 		// r24
    int edx; 		// r26
    int esp; 		// r28

    eax = _stat64i32();
    if (eax != 0) {
L1:
        edx = perror(param2);
        proc13(pc, pc, param2, param6, param5, param4, pc, param1, global0 ^ (esp - 76), 1, global0 ^ esp - 76 ^ esp - 76, edx, param3, param4, param5, param6, LOGICALFLAGS32(global0 ^ esp - 76 ^ esp - 76), LOGICALFLAGS32(global0 ^ esp - 76 ^ esp - 76), LOGICALFLAGS32(global0 ^ esp - 76 ^ esp - 76));
    }
    eax = fopen(param2, "rb");
    if (eax != 0) {
        if (param1 > 0) {
            *(__size32*)(esp - 4) = edi;
            *(__size32*)(esp - 4) = 16;
            *(__size32*)(esp - 4) = 1;
            *(__size32*)(esp - 4) = ecx;
            (*ebx)();
            if ( !flags) {
                *(__size32*)(esp - 4) = esi;
                *(__size32*)(esp - 4) = edx;
                proc14(*(esp + 4), *(esp + 8));
            }
        }
        *(__size32*)(esp - 4) = edi;
        fclose(*(esp + 4));
        proc13();
    }
    goto L1;
}

// address: 0x401760
int proc11(__size16 *param1, unsigned char param2, int param3) {
    short ax; 		// r0
    short cx; 		// r1
    unsigned char dl; 		// r10
    int eax; 		// r24
    int edx; 		// r26
    unsigned char local0; 		// param2{50}
    int local1; 		// param3{53}

    cx = (unsigned short) param1;
    local0 = param2;
    local1 = param3;
    if (*param1 == 0x5a4d) {
        eax = *(param1 + 60);
        if (*(eax + param1) != 0x4550) {
L1:
            eax = 0;
            ax = 0;
        } else {
            cx = 267;
            dl =  (*(eax + param1 + 24) == 267) ? 1 : 0;
            edx = 0 >> 8 & 0xffffff | (dl);
            eax = edx;
            ax = (unsigned short) edx;
            local0 = dl;
            local1 = edx;
        }
    } else {
        goto L1;
    }
    param2 = local0;
    param3 = local1;
    return eax; /* WARNING: Also returning: ax := ax, cx := cx, dl := param2, edx := param3 */
}

// address: 0x4017a0
__size32 proc12(__size32 param1, unsigned int param2, unsigned int param3) {
    unsigned int eax; 		// r24
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{29}
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 edx_1; 		// r26{60}
    unsigned int esi; 		// r30
    unsigned int local0; 		// param3{61}
    unsigned int local1; 		// ebx{66}

    ecx = *(param1 + 60);
    eax = *(unsigned short*)(ecx + param1 + 20);
    esi = *(unsigned short*)(ecx + param1 + 6);
    edx = 0;
    eax = eax + ecx + param1 + 24;
    local0 = param3;
    if (esi <= 0) {
L1:
        edx_1 = edx;
        eax = 0;
    } else {
        do {
            edx_1 = edx;
            param3 = local0;
            ecx = *(eax + 12);
            local1 = param3;
            if (param2 >= ecx) {
                ebx_1 = *(eax + 8);
                ebx = ebx_1 + ecx;
                local1 = ebx;
                if (param2 < ebx_1 + ecx) {
                    goto L0;
                }
                goto L2;
            }
L2:
            ebx = local1;
            edx = edx_1 + 1;
            eax += 40;
            local0 = ebx;
        } while (edx_1 + 1 < esi);
        goto L1;
    }
L0:
    return eax; /* WARNING: Also returning: edx := edx_1 */
}

// address: 0x40123b
void proc13(__size32 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6) {
    if (param2 != *0x403000) {
    }
    global9 = param1;
    global10 = param2;
    global11 = param3;
    global12 = param4;
    global13 = param5;
    global14 = param6;
}

// address: 0x401000
void proc14(__size32 param1, __size32 param2) {
    __size8 al; 		// r8
    unsigned char al_1; 		// r8{141}
    __size16 ax; 		// r0
    __size8 cl; 		// r9
    __size32 eax; 		// r24
    int eax_1; 		// r24{36}
    unsigned int *eax_2; 		// r24{307}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    int ecx; 		// r25
    int ecx_1; 		// r25{272}
    unsigned int ecx_2; 		// r25{54}
    __size32 edi; 		// r31
    void *edi_1; 		// r31{49}
    void *edi_2; 		// r31{282}
    __size32 edx; 		// r26
    void *edx_1; 		// r26
    __size32 esi; 		// r30
    __size32 esi_1; 		// r30{65}
    int esi_2; 		// r30{318}
    int esp; 		// r28
    char *esp_1; 		// r28
    __size32 esp_2; 		// r28{36}
    __size32 esp_3; 		// r28{65}
    unsigned int local0; 		// m[esp - 120]
    int local1; 		// m[esp - 116]
    __size32 local10; 		// m[esp + 4]
    __size32 local11; 		// m[esp + 8]
    int local12; 		// m[esp + 4]{398}
    int local13; 		// m[esp + 8]{399}
    void *local14; 		// m[esp_1 - 12]{180}
    unsigned int local15; 		// m[esp_1 - 12]{206}
    int local16; 		// m[esp - 84]
    int local2; 		// m[esp - 112]
    __size32 local3; 		// m[esp - 108]
    __size32 local4; 		// m[esp - 104]
    __size32 local5; 		// m[esp - 100]
    __size32 local6; 		// m[esp - 96]
    __size32 local7; 		// m[esp - 92]
    __size32 local8; 		// m[esp - 88]
    int local9; 		// m[esp - 4]

    (*0x2334)(pc, (esp - 84), 0x402104, ecx, edi, esi, ebp, ebx, param1, global0 ^ esp - 88, param1, param2, (unsigned short) param1, (unsigned char) param1, param1, ecx, esp - 84, 0x2334, param2, esi, edi, LOGICALFLAGS32(global0 ^ esp - 88), LOGICALFLAGS32(global0 ^ esp - 88), LOGICALFLAGS32(global0 ^ esp - 88));
    esp_1 = esp_2 + 12;
    if (ebp > 16) {
        ebp = 16;
    }
    esi = 0;
    flags = LOGICALFLAGS32(ebp);
    if (ebp <= 0) {
L17:
        ecx = 16 - esi;
        do {
            ecx_1 = ecx;
            edi = esp_1 + 19;
            do {
                edi_2 = edi;
                al = *(edi_2 + 1);
                ax = ax >> 8 & 0xff | (al);
                eax_1 = eax_1 >> 8 & 0xffffff | (al);
                edi = edi_2 + 1;
            } while (al != 0);
            ecx = ecx_1 - 1;
            *(__size32*)(edi_2 + 1) = 0x202020;
        } while (ecx_1 != 1);
    } else {
        edi_1 = esp_2 + 41;
        do {
            eax = *(esp_1 + 16);
            ecx_2 = *(unsigned char*)(eax + esi);
            *(unsigned int*)(esp_1 - 4) = ecx_2;
            *(__size32*)(esp_1 - 8) = 0x40210c;
            *(void **)(esp_1 - 12) = edi_1;
            (*ebx)(local0, local1, local2, local3, local4, local5, local6, local7, local8, local9, local10, local11, (unsigned short) eax, (unsigned char) eax, (unsigned char) ecx_2, eax, ecx_2, edx, ebx, ebp, esi, edi_1, <all>, flags, ZF, CF);
            esi = esi_1 + 1;
            esp_1 = esp_3 + 12;
            edi_1 = edi + 3;
            flags = SUBFLAGS32(esi_1 + 1, ebp, esi_1 - ebp + 1);
        } while (esi_1 + 1 < ebp);
        if (esi_1 + 1 < 16) {
            goto L17;
        }
    }
    eax = esp_1 + 20;
    do {
        eax_2 = eax;
        cl = *eax_2;
        ecx = ecx >> 8 & 0xffffff | (cl);
        eax = eax_2 + 1;
    } while (cl != 0);
    *(unsigned int*)eax_2 = 0x7c2020;
    esi = 0;
    if (ebp <= 0) {
L4:
        *(__size32*)(esp_1 - 4) = 16 - esi;
        eax = eax_2 + esi - esp_1 - 17;
        *(__size32*)(esp_1 - 8) = 32;
        local14 = esp_1 + eax + 20;
        memset(*(esp_1 - 12), *(esp_1 - 8), *(esp_1 - 4));
        esi = 16;
    } else {
        do {
            esi_2 = esi;
            edx_1 = *(esp_1 + 16);
            al_1 = *(edx_1 + esi_2);
            if (al_1 < 32) {
L7:
                al = 46;
            } else {
                al = (unsigned char) (al_1);
                if (al_1 > 126) {
                    goto L7;
                }
            }
            *(unsigned char*)(eax_2 + esi_2 + 3) = al;
            esi = esi_2 + 1;
        } while (esi_2 + 1 < ebp);
        if (esi_2 + 1 < 16) {
            goto L4;
        }
    }
    *(void **)(esp - 4) = esp + 20;
    ebx = eax_2 + esi - esp - 17;
    *(__size32*)(esp - 8) = 0x402118;
    *(__size16*)(esp + ebx + 20) = 124;
    eax = printf(*(esp - 8)); /* Warning: also results in edx */
    ecx = *(esp + 100);
    edi = *esp;
    esi = *(esp + 4);
    ebp = *(esp + 8);
    ebx = *(esp + 12);
    proc13(local0, local1, local2, local3, local4, local5, local6, local7, local8, local9, local12, local13, 124, 124, (unsigned char) ecx ^ esp + 16, eax, ecx ^ esp + 16, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(ecx ^ esp + 16), LOGICALFLAGS32(ecx ^ esp + 16), LOGICALFLAGS32(ecx ^ esp + 16));
    return;
}


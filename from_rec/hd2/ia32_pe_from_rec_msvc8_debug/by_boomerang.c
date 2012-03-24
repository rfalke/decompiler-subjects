unsigned int global0 = 0xbb40e64e;
__size32 global2 = 0x44bf19b1;// 4 bytes
__size32 global22;// 4 bytes
__size32 global23;// 4 bytes
__size32 global31;// 4 bytes
__size32 global32;// 4 bytes
__size32 global33;// 4 bytes
__size32 global34;// 4 bytes
__size32 global35;// 4 bytes
__size32 global36;// 4 bytes
unsigned int global37;
__size32 global40 = 0x416144;// 4 bytes
__size32 LoadLibraryA = 0x186a4;// 4 bytes
__size32 GetProcAddress = 0x18692;// 4 bytes
__size8 global64;// 1 bytes
__size32 MultiByteToWideChar = 0x18670;// 4 bytes
void global92;
union { union { union { __size32[] x13940; int x13941; } x13938; unsigned char * x13939; unsigned char * x13937; int x13935; char x13933; int x13931; int x13805; unsigned char * x13803; unsigned char * x13801; int x13799; char x13797; int x13795; int x10123; unsigned int x10121; int x5937; int x5851; int x5849; int x5847; int x5845; int x5843; } x5840; int x5841; } global105;

void proc2(__size16 param1, __size32 param2, __size32 param3, __size32 param4);
void proc3(int param1, int param2, __size16 param3, __size32 param5, __size32 param6, __size32 param6);
void proc4(int param1, int param2);
__size32 proc5();
void __imp__amsg_exit();
__size32 __imp__initterm_e();
void __imp__initterm();
__size32 proc9(unsigned int param1);
__size32 proc10(int param1, void *param2, __size16 param3, __size32 param4, __size32 param5, __size32 param6);
__size32 proc11(union { unsigned int x1; unsigned short * x2; } param1);
unsigned int proc12(unsigned int param1, unsigned int param2);
void proc13(unsigned int param1, char *param2, __size16 param3, __size32 param4, __size32 param5);
__size32 proc14(__size16 param1, __size32 param2, __size32 param3);
void proc15(__size32 param1, unsigned int param2, __size16 param3);
void proc16(__size32 param1, __size32 param2, __size16 param3);
__size32 proc17();
__size32 proc18();
__size32 proc19();
__size32 proc20();
int proc21(union { int x365; __size16 * x366; } param1, unsigned int param2, __size16 *param3, __size32 *param4, LPWSTR param5, unsigned int param6, unsigned int param7, __size32 param8, LPWSTR param9);
void proc22();
void proc23(__size32 param1);
void proc24();
void proc25();
void proc26();
void proc27();
void proc28();
__size32 proc29(__size16 param1, __size32 param2, __size32 param3, __size32 param4);
__size32 proc30(__size16 param1, __size32 param3, __size32 param3);
__size32 proc31(__size16 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6);
__size32 proc32(__size16 param1, __size32 param3, __size32 param3);
void proc33(__size16 param1, __size32 param2, int *param3);
void proc34();
void proc35(__size16 param1);
__size32 proc36(__size16 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6);
__size32 proc37(__size16 param1, __size32 param3, __size32 param3);
void proc38(int param1[][][], void *param2, int param3, __size16 param4, __size32 param5, __size32 param6, __size32 param7);
__size32 proc39(__size16 param1, __size32 param2, __size32 param3, __size32 param4);
__size32 proc40(__size16 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6);
void proc41(__size32 param1, unsigned int param2, __size16 param3);
void proc42(__size32 param1, unsigned char *param2, __size16 param3, int param4, __size32 param5);
void proc43();
__size32 proc44(__size16 param1, __size32 param4, __size32 param3, __size32 param4);
__size32 proc45(__size16 param1, __size32 param4, __size32 param3, __size32 param4);
void __imp_strcat(char param1[], char param2[]);
__size32 __imp_strlen(char param1[]);
__size32 __imp_strcpy(char param1[], char param2[]);
void __imp_strcpy(char param1[], char param2[]);
__size32 proc50(__size16 param1, __size32 param2, __size32 param3, __size32 param4);
void proc51(__size16 param1, __size32 param2, int *param3);
void proc52();
void proc53(__size16 param1);
void proc54(__size32 param1, unsigned int param2, __size16 param3);
void proc55(__size32 param1, unsigned char *param2, __size16 param3, int param4, __size32 param5);
void proc56();
void proc57(__size32 param1, unsigned int param2, __size16 param3);
void proc58(__size32 param1, unsigned int param2, __size16 param3);
void proc59(__size32 param1, unsigned int param2, __size16 param3);
void proc60(__size32 param1, unsigned int param2, __size16 param3);
void proc61(__size32 param1, unsigned int param2, __size16 param3);
void proc62(__size32 param1, unsigned int param2, __size16 param3);
void proc63(__size32 param1, unsigned int param2, __size16 param3);
void proc64(__size32 param1, unsigned int param2, __size16 param3);
void proc65(__size32 param1, unsigned int param2, __size16 param3);
void proc66(__size32 param1, unsigned int param2, __size16 param3);

// address: 0x413000
void proc1(int param1, int param2) {
    __size32 eax; 		// r24
    int eax_1; 		// r24{37}
    int ecx; 		// r25
    unsigned int local0; 		// m[esp - 16]

    if (*0x417000 == 0xbb40e64e || (global0 & 0xffff0000) == 0) {
        GetSystemTimeAsFileTime();
        eax_1 = GetCurrentProcessId();
        eax = GetCurrentThreadId();
        eax = GetTickCount();
        eax = eax ^ eax ^ eax_1 ^ 0;
        QueryPerformanceCounter();
        eax = eax ^ param1;
        ecx = eax ^ param2;
        local0 = ecx;
        if (ecx != 0xbb40e64e) {
            if ((ecx & 0xffff0000) == 0) {
                local0 = ecx * 0x10000 | ecx;
            }
        } else {
            local0 = (unsigned int)0xbb40e64f;
        }
        global0 = local0;
        global2 =  !local0;
    } else {
        global2 =  !global0;
    }
    return;
}

// address: 0x411d70
void proc2(__size16 param1, __size32 param2, __size32 param3, __size32 param4) {
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{11}
    union { __size32 * x5226; int x5227; } ebp; 		// r29
    union { __size32 * x5226; int x5227; } ebp_1; 		// r29{4}
    __size32 ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    __size32 local0; 		// m[esp - 32]
    __size32 local10; 		// m[esp - 20]
    int local11; 		// m[esp - 16]
    int local13; 		// m[esp - 8]
    __size32 local14; 		// m[esp - 4]
    __size32 local6; 		// m[esp - 48]
    __size32 local8; 		// m[esp - 36]
    int local9; 		// m[esp - 28]

    ebp_1 = esp - 4;
    *(int*)0 = esp - 20;
    eax = proc5();
    eax = *(eax + 4);
    local0 = 0;
    for(;;) {
        *(__size32*)(esp_1 - 4) = 0;
        *(__size32*)(esp_1 - 8) = eax;
        *(__size32*)(esp_1 - 12) = 0x417570;
        eax = InterlockedCompareExchange();
        if (eax == 0) {
            goto L30;
        }
        if () {
            break;
        }
        local11 = 1000;
        esp = Sleep(*(esp - 16));
    }
    local0 = 1;
L30:
    if (*0x417560 != 1) {
        if (*0x417560 != 0) {
            *(__size32*)(&global105 + 0x15fc) = 1;
L22:
            if (*0x417560 == 1) {
                local11 = 0x415208;
                local10 = 0x415000;
                __imp__initterm();
                *(__size32*)(&global105 + 0x19fc) = 2;
            }
            if (*0x417560 != 2) {
                local11 = 0x4157d8;
                local10 = 0;
                *(__size32*)(esp - 24) = 500;
                local9 = 0x415760;
                local0 = 2;
                eax = _CrtDbgReportW();
                if (eax == 1) {
                }
            }
            if (local0 == 0) {
                local11 = 0;
                local10 = 0x417570;
                InterlockedExchange(*(esp - 20), *(esp - 16));
            }
            esp = esp - 12;
            if (*0x417594 != 0) {
                local11 = 0x417594;
                eax = proc9(*(esp - 16)); /* Warning: also results in ecx, edx */
                esp = esp - 12;
                if (eax != 0) {
                    local11 = 0;
                    local10 = 2;
                    *(__size32*)(esp - 24) = 0;
                    (*global92)(pc, global0 ^ esp - 4, param4, param3, param2, local6, eax, eax, local0, esp - 64, eax_1, 0x411087, 0x416ab8 ^ global0, 0, ebp, param1, eax, ecx, edx, param2, esp - 4, param3, param4, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax));
                }
            }
            local14 = 1;
            _CrtSetCheckCount();
            ecx = *0x4182a4;
            edx = *(&global105 + 0x15e4);
            *(__size32*)ecx = edx;
            eax = *(&global105 + 0x15e4);
            local14 = eax;
            ecx = *(&global105 + 0x15e8);
            local13 = ecx;
            edx = *(&global105 + 0x15e0);
            *(__size32*)(esp - 12) = edx;
            eax = proc10(*(esp - 12), *(esp - 8), param1, edx, param2, param3);
            *(__size32*)(&global105 + 0x15f8) = eax;
            if (*0x417150 == 0) {
                eax = *(&global105 + 0x15f8);
                local14 = eax;
                exit(*(esp - 4));
            }
            if (*0x417160 == 0) {
                _cexit();
            }
            *(__size32*)(ebp_1 - 4) = -2;
        } else {
            *(__size32*)(&global105 + 0x19fc) = 1;
            local11 = 0x415618;
            local10 = 0x41530c;
            eax = __imp__initterm_e();
            if (eax == 0) {
                goto L22;
            } else {
            }
        }
    } else {
        local11 = 31;
        __imp__amsg_exit();
        goto L22;
    }
    ecx = *(ebp_1 - 16);
    *(__size32*)0 = ecx;
    return;
}

// address: 0x411d50
void proc3(int param1, int param2, __size16 param3, __size32 param5, __size32 param6, __size32 param6) {
    proc4(param1, param2);
    proc2(param3, param5, param6, param6);
    return;
}

// address: 0x413000
void proc4(int param1, int param2) {
    __size32 eax; 		// r24
    int eax_1; 		// r24{37}
    int ecx; 		// r25
    unsigned int local0; 		// m[esp - 16]

    if (*0x417000 == 0xbb40e64e || (global0 & 0xffff0000) == 0) {
        GetSystemTimeAsFileTime();
        eax_1 = GetCurrentProcessId();
        eax = GetCurrentThreadId();
        eax = GetTickCount();
        eax = eax ^ eax ^ eax_1 ^ 0;
        QueryPerformanceCounter();
        eax = eax ^ param1;
        ecx = eax ^ param2;
        local0 = ecx;
        if (ecx != 0xbb40e64e) {
            if ((ecx & 0xffff0000) == 0) {
                local0 = ecx * 0x10000 | ecx;
            }
        } else {
            local0 = (unsigned int)0xbb40e64f;
        }
        global0 = local0;
        global2 =  !local0;
    } else {
        global2 =  !global0;
    }
    return;
}

// address: 0x412050
__size32 proc5() {
    __size32 eax; 		// r24

    eax = *24;
    return eax;
}

// address: 0x412ff0
void __imp__amsg_exit() {
    _amsg_exit();
    return;
}

// address: 0x4133b2
__size32 __imp__initterm_e() {
    __size32 eax; 		// r24

    eax = _initterm_e();
    return eax;
}

// address: 0x4133ac
void __imp__initterm() {
    _initterm();
    return;
}

// address: 0x413250
__size32 proc9(unsigned int param1) {
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{111}
    __size32 eax_2; 		// r24{11}
    unsigned int ecx; 		// r25
    int edx; 		// r26
    __size32 edx_1; 		// r26{86}
    int esp; 		// r28

    eax_2 = *0;
    *(int*)0 = (esp - 20);
    eax = proc11(0x400000); /* Warning: also results in edx */
    if (eax != 0) {
        ecx = param1 - 0x400000;
        eax = proc12(0x400000, ecx); /* Warning: also results in edx */
        if (eax != 0) {
            edx = *(eax + 36);
            edx_1 = 0 - (0 < (unsigned int)(edx & 0x80000000));
            edx = edx_1 + 1;
            eax = edx_1 + 1;
        } else {
            eax = 0;
        }
    } else {
        eax = 0;
    }
    eax_1 = eax;
    *(__size32*)0 = eax_2;
    return eax_1; /* WARNING: Also returning: ecx := global0 ^ (esp - 4), edx := edx */
}

// address: 0x4118c0
__size32 proc10(int param1, void *param2, __size16 param3, __size32 param4, __size32 param5, __size32 param6) {
    __size32 eax; 		// r24
    void *ecx; 		// r25
    union { __size32 * x5192; int x5193; } edi; 		// r31
    __size32 edx; 		// r26
    void *esp; 		// r28
    union { __size32 * x5190; int x5191; } esp_1; 		// r28{12}
    union { __size32 * x5188; int x5189; } esp_2; 		// r28{43}
    union { __size32 * x5190; int x5191; } esp_3; 		// r28{79}
    __size32 local0; 		// m[esp - 24]
    int local1; 		// m[esp - 12]
    __size32 local4; 		// param4{78}
    union { __size32 * x5190; int x5191; } local5; 		// esp_3{79}

    esp_1 = (esp - 232);
    edi = (esp - 220);
    ecx = 54;
    local4 = param4;
    local5 = esp_1;
    while (ecx != 0) {
        *(__size32*)edi = 0xcccccccc;
        edi +=  (DF == 0) ? 4 : -4;
        ecx = ecx - 1;
    }
    local0 = 0;
    local1 = 1;
    param4 = local4;
    esp_3 = local5;
    while (local1 < param1) {
        edx = *(param2 + local1 * 4);
        *(__size32*)(esp_3 - 4) = edx;
        proc13(*(esp_3 - 96), *(esp_3 - 4), param3, param5, param6);
        local4 = edx;
        esp_2 = esp_3 - 4;
        eax = local1 + local0;
        local0 = eax;
        local5 = esp_2;
        local1++;
        param4 = local4;
        esp_3 = local5;
    }
    eax = proc14(param3, local0, param4);
    return eax;
}

// address: 0x413130
__size32 proc11(union { unsigned int x1; unsigned short * x2; } param1) {
    __size32 eax; 		// r24
    union { unsigned int x1; unsigned int * x2; } ecx; 		// r25
    unsigned int edx; 		// r26

    edx = *(unsigned short*)param1;
    if (edx == 0x5a4d) {
        ecx = param1 + *(param1 + 60);
        edx = ecx;
        if (*ecx == 0x4550) {
            edx = *(unsigned short*)(ecx + 24);
            if (edx == 267) {
                eax = 1;
            } else {
                eax = 0;
            }
        } else {
            eax = 0;
        }
    } else {
        eax = 0;
    }
    return eax; /* WARNING: Also returning: edx := edx */
}

// address: 0x4131b0
unsigned int proc12(unsigned int param1, unsigned int param2) {
    unsigned int eax; 		// r24
    unsigned int ecx; 		// r25
    unsigned int ecx_1; 		// r25{11}
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
        if (param2 >= *(local1 + 12)) {
            ecx = *(local1 + 12);
            edx = local1;
            ecx += *(local1 + 8);
            if (param2 < ecx) {
                eax = local1;
                goto L0;
            }
L3:
            goto L2;
        }
        goto L3;
L2:
        local0++;
        local1 += 40;
        edx = ecx_1;
        eax = *(unsigned short*)(ecx_1 + 6);
    }
    eax = 0;
L0:
    return eax; /* WARNING: Also returning: edx := edx */
}

// address: 0x4116a0
void proc13(unsigned int param1, char *param2, __size16 param3, __size32 param4, __size32 param5) {
    __size32 eax; 		// r24
    unsigned int eax_1; 		// r24{78}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    int edi; 		// r31
    int edi_1; 		// r31{13}
    union { int x4766; __size32 * x4767; } edi_2; 		// r31{18}
    __size32 edi_3; 		// r31{34}
    __size32 edi_4; 		// r31{78}
    __size32 edi_5; 		// r31{191}
    __size32 edi_6; 		// r31{130}
    union { int x4766; __size32 * x4767; } edi_7; 		// r31{220}
    union { int x4766; __size32 * x4767; } edi_8; 		// r31{222}
    __size32 edi_9; 		// r31{229}
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28
    union { __size32 * x4782; int x4783; } esp_2; 		// r28{174}
    union { __size32 * x4782; int x4783; } esp_3; 		// r28{150}
    union { __size32 * x4782; int x4783; } esp_4; 		// r28{57}
    union { __size32 * x4782; int x4783; } esp_5; 		// r28{78}
    char *local1; 		// m[esp - 336]
    unsigned int local10; 		// m[esp - 52]
    unsigned int local14; 		// m[esp - 40]{260}
    union { int x4766; __size32 * x4767; } local17; 		// edi_7{220}
    union { int x4766; __size32 * x4767; } local18; 		// edi_8{222}
    union { __size32 * x4782; int x4783; } local19; 		// esp_5{227}
    unsigned int local2; 		// m[esp - 40]
    __size32 local20; 		// edi_9{229}
    union { __size32 * x4782; int x4783; } local21; 		// esp_4{249}
    unsigned int local8; 		// m[esp - 120]

    edi_1 = (esp - 316);
    ecx = 78;
    local17 = edi_1;
    edi_7 = local17;
    local18 = edi_7;
    while (ecx != 0) {
        *(__size32*)edi_7 = 0xcccccccc;
        edi_2 = edi_7 + ( (DF == 0) ? 4 : -4);
        ecx = ecx - 1;
        local17 = edi_2;
        local18 = edi_2;
        edi_7 = local17;
        local18 = edi_7;
    }
    edi_8 = local18;
    eax = proc29(param3, param4, param5, edi_8); /* Warning: also results in ebx, edi_3 */
    if (eax != 0) {
        edx = perror(param2);
        edx = proc30(param3, edx, ebx); /* Warning: also results in esp_4 */
        local21 = esp_4;
        eax = 1;
L1:
        esp_4 = local21;
        *(__size32*)(esp_4 - 4) = edx;
        *(__size32*)(esp_4 - 8) = eax;
        proc33(param3, esp - 4, 0x4117dc);
        eax = *(esp_4 - 8);
        edx = *(esp_4 - 4);
        edi_5 = *esp_4;
        esi = *(esp_4 + 4);
        ebx = *(esp_4 + 8);
        proc34(pc, local1, pc, edi, param5, param4, local8, param1, local10, local14, global0 ^ esp - 4, ebp, param2, param3, eax, global0 ^ esp - 4 ^ esp - 4, edx, ebx, esp - 4, esi, edi_5, LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4), LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4), LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4));
    }
    eax = fopen(param2, "rb"); /* Warning: also results in edx */
    eax_1 = proc31(param3, eax, edx, ebx, esp - 328, edi_3); /* Warning: also results in ebx, esp_5, edi_4 */
    local19 = esp_5;
    local20 = edi_4;
    if (eax_1 == 0) {
        edx = perror(param2);
        edx = proc32(param3, edx, ebx); /* Warning: also results in esp_4 */
        local21 = esp_4;
        eax = 1;
        goto L1;
    }
    local2 = 0;
    esp_5 = local19;
    edi_9 = local20;
    while (local2 < param1) {
        *(unsigned int*)(esp_5 - 4) = eax_1;
        *(__size32*)(esp_5 - 8) = 16;
        *(__size32*)(esp_5 - 12) = 1;
        *(int*)(esp_5 - 16) = (esp - 28);
        eax = fread(*(esp_5 - 16), *(esp_5 - 12), *(esp_5 - 8), *(esp_5 - 4)); /* Warning: also results in edx */
        eax = proc36(param3, eax, edx, ebx, esp_5, edi_9); /* Warning: also results in esi, ebx, edi_6 */
        local20 = edi_6;
        if (eax == 0) {
            break;
        }
        *(unsigned int*)(esp_5 - 4) = eax;
        *(unsigned int*)(esp_5 - 8) = local2;
        *(int*)(esp_5 - 12) = esp - 28;
        proc38(*(esp_5 - 108), *(esp_5 - 12), *(esp_5 - 4), param3, ebx, esi, edi_6);
        esp_3 = esp_5 - 4;
        eax = local2 + eax;
        local2 = eax;
        local19 = esp_3;
        esp_5 = local19;
        edi_9 = local20;
    }
    *(unsigned int*)(esp_5 - 4) = eax_1;
    edx = fclose(*(esp_5 - 4));
    edx = proc37(param3, edx, ebx); /* Warning: also results in esp_2 */
    local21 = esp_2;
    eax = 0;
    goto L1;
}

// address: 0x411990
__size32 proc14(__size16 param1, __size32 param2, __size32 param3) {
    __size32 eax; 		// r24
    __size32 local0; 		// m[esp]
    __size32 local3; 		// param2{47}

    local3 = param2;
    if (flags) {
        proc15(local0, 0, param1);
        eax = param3;
        local3 = eax;
    }
    param2 = local3;
    return param2;
}

// address: 0x412380
void proc15(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}

// address: 0x4123f0
void proc16(__size32 param1, __size32 param2, __size16 param3) {
    __size8 al; 		// r8
    __size16 cx; 		// r1
    int eax; 		// r24
    int eax_1; 		// r24{42}
    int eax_2; 		// r24{29}
    __size32 eax_3; 		// r24{255}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28
    __size32 *esp_1; 		// r28
    __size32 *esp_2; 		// r28{339}
    __size32 esp_3; 		// r28{201}
    __size32 esp_4; 		// r28{282}
    __size32 esp_5; 		// r28{380}
    unsigned int local0; 		// m[esp - 0xe68]
    int local1; 		// m[esp - 0xe64]
    __size32 local10; 		// m[esp - 0xe40]
    int local11; 		// m[esp - 0xe3c]
    int local12; 		// m[esp - 0xe34]
    int local13; 		// m[esp - 8]
    __size32 local14; 		// m[esp - 4]
    __size32 local15; 		// m[esp + 4]
    __size32 local16; 		// m[esp + 16]
    int local17; 		// m[esp + 4]{63}
    int local18; 		// m[esp + 4]{227}
    int local19; 		// m[esp + 4]{505}
    int local2; 		// m[esp - 0xe60]
    int local20; 		// m[esp + 16]{63}
    int local21; 		// m[esp + 16]{227}
    int local22; 		// m[esp + 16]{506}
    int local23; 		// m[esp - 4]{63}
    int local24; 		// m[esp - 8]{63}
    int local25; 		// m[esp - 0xe34]{63}
    int local26; 		// m[esp - 0xe3c]{63}
    int local27; 		// m[esp - 0xe40]{63}
    int local28; 		// m[esp - 0xe44]{63}
    int local29; 		// m[esp - 0xe48]{63}
    __size32 local3; 		// m[esp - 0xe5c]
    int local30; 		// m[esp - 0xe4c]{63}
    int local31; 		// m[esp - 0xe50]{63}
    int local32; 		// m[esp - 0xe54]{63}
    int local33; 		// m[esp - 0xe58]{63}
    int local34; 		// m[esp - 0xe5c]{63}
    int local35; 		// m[esp - 0xe60]{63}
    int local36; 		// m[esp - 0xe64]{63}
    int local37; 		// m[esp - 0xe68]{63}
    int local38; 		// eax_1{312}
    __size32 local39; 		// esp_5{380}
    int local4; 		// m[esp - 0xe58]
    int local5; 		// m[esp - 0xe54]
    int local6; 		// m[esp - 0xe50]
    __size32 local7; 		// m[esp - 0xe4c]
    __size32 local8; 		// m[esp - 0xe48]
    __size32 local9; 		// m[esp - 0xe44]

    eax_2 = proc17();
    local38 = eax_2;
    flags = LOGICALFLAGS32(eax_2);
    if (eax_2 == 0) {
        eax_1 = proc18();
        local38 = eax_1;
        flags = ADDFLAGS32(esp - 0xe50, 4, esp - 0xe4c);
    }
    eax_1 = local38;
    (*MultiByteToWideChar)(pc, 0xfde9, 0, param2, -1, 0, 0, edi, esi, ebx, param2, local11, eax_2, global0 ^ esp - 4, ebp, param1, param2, param3, (unsigned char) global0 ^ esp - 4, eax_1, ecx, edx, param1, esp - 4, MultiByteToWideChar, param2, flags, ZF, CF);
    if (eax >= 512) {
L24:
        cx = param3;
        *(__size32*)(ebp - 0xe34) = 0x415cc8;
    } else {
        *(unsigned int*)(esp_1 - 4) = eax;
        *(union { void * x6340; int x6341; }*)(esp_1 - 8) = ebp - 0xe2c;
        *(__size32*)(esp_1 - 12) = -1;
        *(__size32*)(esp_1 - 16) = edi;
        *(__size32*)(esp_1 - 20) = 0;
        *(__size32*)(esp_1 - 24) = 0xfde9;
        (*esi)(local37, local36, local35, local34, local33, local32, local31, local30, local29, local28, local27, local26, local25, local24, local23, local17, local20, cx, (unsigned char) ebp - 0xe2c, ebp - 0xe2c, ecx, edx, ebx, ebp, esi, edi, <all>, SUBFLAGS32(eax, 512, eax - 512), eax - 512 == 0, eax < 512);
        if (eax == 0) {
            goto L24;
        } else {
            *(union { void * x6374; int x6375; }*)(ebp - 0xe34) = ebp - 0xe2c;
        }
    }
    esp_2 = esp_1;
    *(__size32*)(esp_2 - 4) = 0x1002;
    eax = proc19(); /* Warning: also results in ebx */
    edi = *(ebp + 16);
    if (eax == 0) {
        al = 1;
L17:
        esp_1 = esp_2;
        esi = *(ebp - 0xe30);
        if (*(ebp - 0xe38) == 0 && esi == 0) {
L2:
            eax = DebugBreak(); /* Warning: also results in edx, esp_1 */
        } else {
            if (al == 0) {
L13:
                *(__size32*)(esp_2 - 4) = 260;
                *(union { void * x6376; int x6377; }*)(esp_2 - 8) = ebp - 1044;
                *(union { void * x6378; int x6379; }*)(esp_2 - 12) = ebp - 0xe30;
                *(__size32*)(esp_2 - 16) = 260;
                *(union { void * x6380; int x6381; }*)(esp_2 - 20) = ebp - 524;
                *(int*)(esp_2 - 24) = ebx - 5;
                esi = proc21(*(esp_2 - 96), *(esp_2 - 24), *(esp_2 - 20), *(esp_2 - 12), *(esp_2 - 8), *(esp_2 - 4), ebx - 5, ebp, edi); /* Warning: also results in cx, edx, ebx, esp_1, ebp, edi */
                if (esi == 0) {
                    edi = *(&global92 + 0x2684);
                    *(__size32*)(esp_1 + 20) = 0;
                    *(__size32*)(esp_1 + 16) = 0;
                    *(__size32*)(esp_1 + 12) = 778;
                    *(union { void * x6418; int x6419; }*)(esp_1 + 8) = ebp - 0xa2c;
                    *(__size32*)(esp_1 + 4) = -1;
                    *(union { void * x6420; int x6421; }*)esp_1 = ebp - 524;
                    *(__size32*)(esp_1 - 4) = 0;
                    *(__size32*)(esp_1 - 8) = 0xfde9;
                    (*edi)(local37, local36, local35, local34, local33, local32, local31, local30, local29, local28, local27, local26, local25, local24, local23, local15, local16, cx, (unsigned char) ebp - 0xa2c, ebp - 0xa2c, ebp - 524, edx, 0x415c60, ebp, esi, edi, <all>, LOGICALFLAGS32(esi), LOGICALFLAGS32(esi), LOGICALFLAGS32(esi));
                    if (eax != 0) {
                        ebx = ebp - 0xa2c;
                    }
                    *(__size32*)(esp_1 - 4) = 0;
                    *(__size32*)(esp_1 - 8) = 0;
                    *(__size32*)(esp_1 - 12) = 778;
                    *(__size32*)(esp_1 - 16) = ebp - 1824;
                    *(__size32*)(esp_1 - 20) = -1;
                    *(__size32*)(esp_1 - 24) = ebp - 1044;
                    *(__size32*)(esp_1 - 28) = 0;
                    *(__size32*)(esp_1 - 32) = 0xfde9;
                    (*edi)(local0, local1, local2, local3, local4, local5, local6, local7, local8, local9, local10, local11, local12, local13, local14, local18, local21, cx, (unsigned char) ebp - 1044, ebp - 1044, ecx, ebp - 1824, ebx, ebp, 0x415c48, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax));
                    if (eax_3 != 0) {
                        esi = ebp - 1824;
                    }
                    ecx = *(ebp - 0xe3c);
                    edx = *(ebp + 16);
                    eax = *(ebp - 0xe30);
                    *(__size32*)(esp_1 - 4) = ecx;
                    ecx = *(ebp + 12);
                    *(__size32*)(esp_1 - 8) = edx;
                    *(__size32*)(esp_1 - 12) = 0x415c20;
                    *(union { void * x6486; int x6487; }*)(esp_1 - 16) = esi;
                    *(__size32*)(esp_1 - 20) = eax;
                    *(__size32*)(esp_1 - 24) = ebx;
                    *(__size32*)(esp_1 - 28) = ecx;
                    (**(ebp - 0xe38))(local0, local1, local2, local3, local4, local5, local6, local7, local8, local9, local10, local11, local12, local13, local14, local15, local16, cx, (unsigned char) eax, eax, ecx, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax_3), LOGICALFLAGS32(eax_3), LOGICALFLAGS32(eax_3));
                    local39 = esp_4;
                } else {
                    ecx = *(ebp - 0xe34);
                    eax = *(ebp - 0xe30);
                    *(__size32*)(esp_1 + 20) = ecx;
                    *(__size32*)(esp_1 + 16) = edi;
                    *(__size32*)(esp_1 + 12) = 0x415c78;
                    *(union { void * x6382; int x6383; }*)(esp_1 + 8) = ebp - 1044;
                    edx = *(ebp + 12);
                    *(__size32*)(esp_1 + 4) = eax;
                    *(union { void * x6384; int x6385; }*)esp_1 = ebp - 524;
                    *(__size32*)(esp_1 - 4) = edx;
                    (*esi)(local37, local36, local35, local34, local33, local32, local31, local30, local29, local28, local27, local26, local25, local24, local23, local15, local16, cx, (unsigned char) eax, eax, ebp - 524, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(esi), LOGICALFLAGS32(esi), LOGICALFLAGS32(esi));
                    local39 = esp_3;
                }
                esp_5 = local39;
                esp_1 = esp_5 + 28;
                if (eax == 1) {
                    goto L2;
                }
            } else {
                eax = IsDebuggerPresent(); /* Warning: also results in esp_1 */
                if (eax != 0) {
                    goto L2;
                } else {
                    goto L13;
                }
            }
        }
    } else {
        edx = *(ebp - 0xe34);
        *(__size32*)(esp_2 - 4) = edx;
        *(unsigned int*)(esp_2 - 8) = ebx;
        *(__size32*)(esp_2 - 12) = global92[edi];
        *(int*)(esp_2 - 16) = edi;
        eax = proc20(); /* Warning: also results in al, edx, ebx, edi */
        esp_1 = esp_2;
        if (eax == 0) {
            al = 0;
            goto L17;
        }
    }
    ecx = *(ebp - 4);
    edi = *esp_1;
    esi = *(esp_1 + 4);
    ebx = *(esp_1 + 8);
    proc22(local37, local36, local35, local34, local33, local32, local31, local30, local29, local28, local27, local26, local25, local24, local23, local19, local22, cx, al, eax, ecx ^ ebp, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp));
    return;
}

// address: 0x412ca0
__size32 proc17() {
    return global22;
}

// address: 0x412c90
__size32 proc18() {
    return global23;
}

// address: 0x4122d0
__size32 proc19() {
    __size32 eax; 		// r24
    int esp; 		// r28

    eax = *0;
    *(int*)0 = (esp - 20);
    RaiseException();
    *(__size32*)0 = eax;
    return 0; /* WARNING: Also returning: ebx := (esp - 56) */
}

// address: 0x412680
__size32 proc20() {
    __size32 eax; 		// r24
    __size32 edx; 		// r26
    int esp; 		// r28

    eax = *0;
    *(int*)0 = (esp - 20);
    edx = RaiseException();
    *(__size32*)0 = eax;
    return 0; /* WARNING: Also returning: al := 0, edx := edx, ebx := (esp - 56), edi := 0 */
}

// address: 0x413400
int proc21(union { int x365; __size16 * x366; } param1, unsigned int param2, __size16 *param3, __size32 *param4, LPWSTR param5, unsigned int param6, unsigned int param7, __size32 param8, LPWSTR param9) {
    char al; 		// r8
    short cx; 		// r1
    unsigned int eax; 		// r24
    union { int x365; HMODULE * x366; } eax_1; 		// r24
    union { int x365; __size16 * x366; } eax_2; 		// r24{91}
    union { int x365; __size16 * x366; } eax_3; 		// r24{188}
    unsigned int eax_4; 		// r24{217}
    union { int x365; __size16 * x366; } eax_5; 		// r24{262}
    unsigned int eax_6; 		// r24{424}
    int eax_7; 		// r24{441}
    union { __size32 * x377; int x378; } ebp; 		// r29
    union { __size32 * x377; int x378; } ebp_1; 		// r29{4}
    void *ebp_10; 		// r29{519}
    int ebp_11; 		// r29{528}
    __size32 *ebp_2; 		// r29{188}
    void *ebp_3; 		// r29{217}
    void *ebp_4; 		// r29{237}
    void *ebp_5; 		// r29{262}
    void *ebp_6; 		// r29{279}
    void *ebp_7; 		// r29{294}
    void *ebp_8; 		// r29{325}
    void *ebp_9; 		// r29{356}
    unsigned int ebx; 		// r27
    union { int x365; __size16 * x366; } ebx_1; 		// r27{98}
    unsigned int ecx; 		// r25
    __size32 **ecx_1; 		// r25
    int *ecx_2; 		// r25
    LPWSTR edi; 		// r31
    unsigned int edi_1; 		// r31
    __size32 edx; 		// r26
    int esi; 		// r30
    unsigned int *esi_1; 		// r30
    int esp; 		// r28
    union { LPWSTR * x369; int x370; } esp_1; 		// r28{89}
    void *esp_10; 		// r28{325}
    void *esp_11; 		// r28{356}
    int esp_12; 		// r28{528}
    union { LPWSTR * x371; int x372; } esp_2; 		// r28{140}
    union { LPWSTR * x369; int x370; } esp_3; 		// r28{159}
    __size32 esp_4; 		// r28{188}
    void *esp_5; 		// r28{217}
    void *esp_6; 		// r28{237}
    void *esp_7; 		// r28{262}
    void *esp_8; 		// r28{279}
    void *esp_9; 		// r28{294}
    int local0; 		// m[esp - 88]
    union { int x365; __size16 * x366; } local1; 		// m[esp - 100]
    unsigned int local10; 		// m[esp + 4]
    int local100; 		// %flags{627}
    int local101; 		// %flags{510}
    int local102; 		// %flags{501}
    int local103; 		// %flags{364}
    int local104; 		// %flags{367}
    int local105; 		// %flags{387}
    int local106; 		// %flags{414}
    int local107; 		// %flags{420}
    int local108; 		// %flags{476}
    int local109; 		// %ZF{219}
    __size16 *local11; 		// m[esp + 8]
    int local110; 		// %ZF{239}
    int local111; 		// %ZF{264}
    int local112; 		// %ZF{281}
    int local113; 		// %ZF{286}
    int local114; 		// %ZF{296}
    int local115; 		// %ZF{327}
    int local116; 		// %ZF{332}
    int local117; 		// %ZF{337}
    int local118; 		// %ZF{346}
    int local119; 		// %ZF{358}
    __size32 *local12; 		// m[esp + 16]
    int local120; 		// %ZF{714}
    int local121; 		// %ZF{519}
    int local122; 		// %ZF{698}
    int local123; 		// %ZF{519}
    int local124; 		// %ZF{682}
    int local125; 		// %ZF{666}
    int local126; 		// %ZF{519}
    int local127; 		// %ZF{519}
    int local128; 		// %ZF{519}
    int local129; 		// %ZF{519}
    LPWSTR local13; 		// m[esp + 20]
    int local130; 		// %ZF{519}
    int local131; 		// %ZF{519}
    int local132; 		// %ZF{636}
    int local133; 		// %ZF{628}
    int local134; 		// %ZF{510}
    int local135; 		// %ZF{501}
    int local136; 		// %ZF{364}
    int local137; 		// %ZF{367}
    int local138; 		// %ZF{387}
    int local139; 		// %ZF{414}
    unsigned int local14; 		// m[esp + 24]
    int local140; 		// %ZF{420}
    int local141; 		// %ZF{476}
    int local142; 		// %CF{219}
    int local143; 		// %CF{239}
    int local144; 		// %CF{264}
    int local145; 		// %CF{281}
    int local146; 		// %CF{286}
    int local147; 		// %CF{296}
    int local148; 		// %CF{327}
    int local149; 		// %CF{332}
    int local15; 		// m[esp + 4]{188}
    int local150; 		// %CF{337}
    int local151; 		// %CF{346}
    int local152; 		// %CF{358}
    int local153; 		// %CF{715}
    int local154; 		// %CF{519}
    int local155; 		// %CF{699}
    int local156; 		// %CF{519}
    int local157; 		// %CF{683}
    int local158; 		// %CF{667}
    int local159; 		// %CF{519}
    int local16; 		// m[esp + 4]{217}
    int local160; 		// %CF{519}
    int local161; 		// %CF{519}
    int local162; 		// %CF{519}
    int local163; 		// %CF{519}
    int local164; 		// %CF{519}
    int local165; 		// %CF{637}
    int local166; 		// %CF{629}
    int local167; 		// %CF{510}
    int local168; 		// %CF{501}
    int local169; 		// %CF{364}
    int local17; 		// m[esp + 4]{237}
    int local170; 		// %CF{367}
    int local171; 		// %CF{387}
    int local172; 		// %CF{414}
    int local173; 		// %CF{420}
    int local174; 		// %CF{476}
    int local175; 		// m[esp - 20]
    int local176; 		// m[esp - 44]
    int local177; 		// m[esp - 72]
    unsigned int local178; 		// param7{557}
    union { int x365; HMODULE * x366; } local179; 		// eax_1{569}
    int local18; 		// m[esp + 4]{262}
    union { int x365; __size16 * x366; } local180; 		// eax_2{583}
    union { LPWSTR * x371; int x372; } local181; 		// esp_1{593}
    union { LPWSTR * x369; int x370; } local182; 		// esp_1{604}
    union { __size32 * x377; int x378; } local183; 		// ebp_1{605}
    void *local184; 		// esp_9{620}
    void *local185; 		// ebp_7{621}
    int local186; 		// local100{627}
    int local187; 		// local133{628}
    int local188; 		// local166{629}
    int local189; 		// local99{635}
    int local19; 		// m[esp + 4]{279}
    int local190; 		// local132{636}
    int local191; 		// local165{637}
    void *local192; 		// esp_9{658}
    void *local193; 		// ebp_7{659}
    int local194; 		// local92{665}
    int local195; 		// local125{666}
    int local196; 		// local158{667}
    void *local197; 		// ebp_8{675}
    union { unsigned int * x375; unsigned int x376; } local198; 		// esi{676}
    int local199; 		// local91{681}
    LPWSTR local2; 		// m[esp - 96]
    int local20; 		// m[esp + 4]{325}
    int local200; 		// local124{682}
    int local201; 		// local157{683}
    int local202; 		// local89{697}
    int local203; 		// local122{698}
    int local204; 		// local155{699}
    int local205; 		// local87{713}
    int local206; 		// local120{714}
    int local207; 		// local153{715}
    void *local208; 		// esp_5{722}
    void *local209; 		// ebp_10{723}
    int local21; 		// m[esp + 4]{851}
    int local210; 		// local76{729}
    int local211; 		// local109{730}
    int local212; 		// local142{731}
    int local22; 		// m[esp + 8]{188}
    int local23; 		// m[esp + 8]{217}
    int local24; 		// m[esp + 8]{237}
    int local25; 		// m[esp + 8]{262}
    int local26; 		// m[esp + 8]{279}
    int local27; 		// m[esp + 8]{325}
    int local28; 		// m[esp + 8]{852}
    int local29; 		// m[esp + 16]{188}
    DWORD local3; 		// m[esp - 92]
    int local30; 		// m[esp + 16]{217}
    int local31; 		// m[esp + 16]{237}
    int local32; 		// m[esp + 16]{262}
    int local33; 		// m[esp + 16]{279}
    int local34; 		// m[esp + 16]{325}
    int local35; 		// m[esp + 16]{853}
    int local36; 		// m[esp + 20]{188}
    int local37; 		// m[esp + 20]{217}
    int local38; 		// m[esp + 20]{237}
    int local39; 		// m[esp + 20]{262}
    unsigned int local4; 		// m[esp - 104]
    int local40; 		// m[esp + 20]{279}
    int local41; 		// m[esp + 20]{325}
    int local42; 		// m[esp + 20]{854}
    int local43; 		// m[esp + 24]{188}
    int local44; 		// m[esp + 24]{217}
    int local45; 		// m[esp + 24]{237}
    int local46; 		// m[esp + 24]{262}
    int local47; 		// m[esp + 24]{279}
    int local48; 		// m[esp + 24]{325}
    int local49; 		// m[esp + 24]{855}
    int local5; 		// m[esp - 84]
    int local50; 		// m[esp - 4]{188}
    int local51; 		// m[esp - 4]{217}
    int local52; 		// m[esp - 68]{188}
    int local53; 		// m[esp - 68]{217}
    int local54; 		// m[esp - 68]{237}
    int local55; 		// m[esp - 68]{262}
    int local56; 		// m[esp - 68]{279}
    int local57; 		// m[esp - 68]{325}
    int local58; 		// m[esp - 68]{856}
    int local59; 		// m[esp - 76]{188}
    int local6; 		// m[esp - 80]
    int local60; 		// m[esp - 76]{217}
    int local61; 		// m[esp - 80]{188}
    int local62; 		// m[esp - 80]{217}
    int local63; 		// m[esp - 84]{188}
    int local64; 		// m[esp - 84]{217}
    int local65; 		// m[esp - 88]{27}
    int local66; 		// m[esp - 88]{188}
    int local67; 		// m[esp - 88]{217}
    int local68; 		// m[esp - 92]{188}
    int local69; 		// m[esp - 92]{217}
    __size32 local7; 		// m[esp - 76]
    int local70; 		// m[esp - 96]{188}
    int local71; 		// m[esp - 96]{217}
    int local72; 		// m[esp - 100]{188}
    int local73; 		// m[esp - 100]{217}
    int local74; 		// m[esp - 104]{188}
    int local75; 		// m[esp - 104]{217}
    int local76; 		// %flags{219}
    int local77; 		// %flags{239}
    int local78; 		// %flags{264}
    int local79; 		// %flags{281}
    union { int x365; __size16 * x366; } local8; 		// m[esp - 68]
    int local80; 		// %flags{286}
    int local81; 		// %flags{296}
    int local82; 		// %flags{327}
    int local83; 		// %flags{332}
    int local84; 		// %flags{337}
    int local85; 		// %flags{346}
    int local86; 		// %flags{358}
    int local87; 		// %flags{713}
    int local88; 		// %flags{519}
    int local89; 		// %flags{697}
    __size32 local9; 		// m[esp - 4]
    int local90; 		// %flags{519}
    int local91; 		// %flags{681}
    int local92; 		// %flags{665}
    int local93; 		// %flags{519}
    int local94; 		// %flags{519}
    int local95; 		// %flags{519}
    int local96; 		// %flags{519}
    int local97; 		// %flags{519}
    int local98; 		// %flags{519}
    int local99; 		// %flags{635}

    edi = param9;
    ebp_1 = esp - 4;
    *(__size32*)param4 = 0;
    cx = 0;
    local65 = param2 - 1;
    *(__size16*)param3 = 0;
    eax = VirtualQuery(); /* Warning: also results in edx */
    local178 = param7;
    local183 = ebp_1;
    local183 = ebp_1;
    local183 = ebp_1;
    local183 = ebp_1;
    if (eax != 0) {
        cx = (unsigned short) param6;
        eax = GetModuleFileNameW(param1, param5, param6); /* Warning: also results in edx */
        if (eax == 0) {
L1:
            esi = local65;
            ebp = param8;
        } else {
            edx = param1;
            cx = 0x5a4d;
            if (*param1 != 0x5a4d) {
                goto L1;
            } else {
                eax = *(param1 + 60);
                if (eax <= 0 || *(eax + param1) != 0x4550) {
                    goto L1;
                } else {
                    ecx = *(unsigned short*)(eax + param1 + 6);
                    cx = (unsigned short) ecx;
                    esp_1 = esp - 96;
                    edi_1 = *(unsigned short*)(eax + param1 + 20);
                    eax_2 = edi_1 + eax + param1 + 24;
                    al = (unsigned char) eax_2;
                    edi_1 = 0;
                    ebx_1 = 0;
                    local180 = eax_2;
                    local181 = esp_1;
                    local182 = esp_1;
                    local182 = esp_1;
                    if (ecx > 0) {
                        eax = eax_2 + 12;
                        al = (unsigned char) eax_2 + 12;
                        local179 = eax;
                        do {
                            eax_1 = local179;
                            edx = *eax_1;
                            local180 = eax_1;
                            if ((unsigned int)(param2 - param1 - 1) >= (unsigned int)edx) {
                                edi_1 = param2 - param1 + edx - 1;
                                if ((unsigned int)(param2 - param1 - 1) < *(eax_1 - 4)) {
                                    break;
                                }
                                goto L54;
                            }
L54:
                            ebx_1++;
                            eax_2 = eax_1 + 40;
                            al = (unsigned char) eax_1 + 40;
                            local179 = eax_2;
                            local180 = eax_2;
                        } while (ebx_1 + 1 < ecx);
                    }
                    eax_2 = local180;
                    if (ebx_1 == ecx) {
L2:
                        esp_1 = local182;
                        ebp_1 = local183;
                        edi = *esp_1;
                        ebx = *(esp_1 + 4);
                        esi = *(esp_1 + 8);
                        ebp = *ebp_1;
                        local178 = ebx;
                    } else {
                        if (*0x417558 != 0) {
                            eax_2 = *0x417554;
                            al = (unsigned char) eax_2;
L46:
                            esp_1 = local181;
                            *(__size32*)(esp_1 - 4) = 0x416158;
                            *(union { int x365; __size16 * x366; }*)(esp_1 - 8) = eax_2;
                            eax = GetProcAddress(*(esp_1 - 8), *(esp_1 - 4)); /* Warning: also results in edx, esp_3 */
                            local182 = esp_3;
                            if (eax == 0) {
                                goto L2;
                            } else {
                                *(union { void * x10046; int x10047; }*)(esp_1 - 4) = (esp - 20);
                                *(__size32*)(esp_1 - 8) = 0;
                                *(__size32*)(esp_1 - 12) = 0;
                                *(union { void * x10048; int x10049; }*)(esp_1 - 16) = (esp - 44);
                                *(__size32*)(esp_1 - 20) = 0;
                                *(__size32*)(esp_1 - 24) = 0;
                                *(__size32*)(esp_1 - 28) = 0;
                                *(LPWSTR*)(esp_1 - 32) = param5;
                                (*eax)(pc, local1, param9, param7, local65, (esp - 72), 28, esi, param1, param8, param2, param3, param4, param5, param6, (unsigned short) esp - 44, al, eax, esp - 44, param5, ebx_1 + 1, esp - 4, 0, edi_1, SUBFLAGS32(eax, 0, eax), eax == 0, eax < 0);
                                local183 = ebp_2;
                                esp_1 = esp_4 + 32;
                                local182 = esp_1;
                                if (eax_3 != 0) {
                                    ecx_1 = *(ebp_2 - 16);
                                    eax = *ecx_1;
                                    edx = *eax;
                                    *(int*)(ebp_2 - 28) = esi;
                                    (*edx)(local74, local72, local70, local68, local66, local63, local61, local59, local52, local50, local15, local22, local29, local36, local43, (unsigned short) ecx_1, (unsigned char) eax, eax, ecx_1, edx, ebx, ebp_2, esi, edi_1, <all>, LOGICALFLAGS32(eax_3), LOGICALFLAGS32(eax_3), LOGICALFLAGS32(eax_3));
                                    local208 = esp_5;
                                    local209 = ebp_3;
                                    local76 = SUBFLAGS32(eax_4, 0x131a5b5, eax_4 - 0x131a5b5);
                                    local210 = local76;
                                    local211 = local109;
                                    local212 = local142;
                                    if (eax_4 == 0x131a5b5) {
                                        ecx_1 = *(ebp_3 - 16);
                                        eax = *ecx_1;
                                        eax = *(eax + 28);
                                        *(union { void * x10054; int x10055; }*)(esp_5 - 4) = ebp_3 - 24;
                                        *(__size32*)(esp_5 - 8) = 0x416154;
                                        *(__size32*)(esp_5 - 12) = esi;
                                        (*eax)(local75, local73, local71, local69, local67, local64, local62, local60, local53, local51, local16, local23, local30, local37, local44, (unsigned short) ecx_1, (unsigned char) eax, eax, ecx_1, ebp_3 - 24, ebx, ebp_3, esi, edi, <all>, SUBFLAGS32(eax_4, 0x131a5b5, eax_4 - 0x131a5b5), eax_4 - 0x131a5b5 == 0, eax_4 < 0x131a5b5);
                                        local208 = esp_6;
                                        local209 = ebp_4;
                                        local77 = LOGICALFLAGS32(eax);
                                        local210 = local77;
                                        local211 = local110;
                                        local212 = local143;
                                        if (eax != 0) {
                                            ecx_1 = *(ebp_4 - 24);
                                            edx = *ecx_1;
                                            edx = *(edx + 32);
                                            *(__size32*)(esp_6 - 4) = esi;
                                            *(__size32*)(esp_6 - 8) = esi;
                                            *(__size32*)(esp_6 - 12) = esi;
                                            *(union { void * x10058; int x10059; }*)(esp_6 - 16) = ebp_4 - 12;
                                            *(__size32*)(esp_6 - 20) = edi;
                                            *(__size32*)(esp_6 - 24) = ebx;
                                            (*edx)(local4, local1, local2, local3, local0, local5, local6, local7, local54, local9, local17, local24, local31, local38, local45, (unsigned short) ecx_1, (unsigned char) ebp_4 - 12, ebp_4 - 12, ecx_1, edx, ebx, ebp_4, esi, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax));
                                            local78 = LOGICALFLAGS32(eax_5);
                                            local205 = local78;
                                            local206 = local111;
                                            local207 = local144;
                                            if (eax_5 != 0) {
                                                ecx_1 = *(ebp_5 - 12);
                                                *(__size32*)(ebp_5 - 4) = esi;
                                                eax = *ecx_1;
                                                eax = *(eax + 104);
                                                *(union { void * x10062; int x10063; }*)(esp_7 - 4) = ebp_5 - 4;
                                                (*eax)(local4, local1, local2, local3, local0, local5, local6, local7, local55, local9, local18, local25, local32, local39, local46, (unsigned short) ecx_1, (unsigned char) eax, eax, ecx_1, ebp_5 - 4, ebx, ebp_5, esi, edi, <all>, LOGICALFLAGS32(eax_5), LOGICALFLAGS32(eax_5), LOGICALFLAGS32(eax_5));
                                                local79 = LOGICALFLAGS8(al);
                                                local202 = local79;
                                                local203 = local112;
                                                local204 = local145;
                                                if (al != 0) {
                                                    ecx_1 = *(ebp_6 - 4);
                                                    local80 = SUBFLAGS32(ecx_1, esi, ecx_1 - esi);
                                                    local202 = local80;
                                                    local203 = local113;
                                                    local204 = local146;
                                                    if (ecx_1 != esi) {
                                                        edx = *ecx_1;
                                                        eax = *(edx + 8);
                                                        (*eax)(local4, local1, local2, local3, local0, local5, local6, local7, local56, local9, local19, local26, local33, local40, local47, (unsigned short) ecx_1, (unsigned char) eax, eax, ecx_1, edx, ebx, ebp_6, esi, edi, <all>, SUBFLAGS32(ecx_1, esi, ecx_1 - esi), ecx_1 - esi == 0, ecx_1 < esi);
                                                        local184 = esp_9;
                                                        local185 = ebp_7;
                                                        local192 = esp_9;
                                                        local193 = ebp_7;
                                                        local81 = LOGICALFLAGS32(eax);
                                                        local186 = local81;
                                                        local187 = local114;
                                                        local188 = local147;
                                                        local194 = local81;
                                                        local195 = local114;
                                                        local196 = local147;
                                                        if (eax == 0) {
L9:
                                                            esp_9 = local192;
                                                            ebp_7 = local193;
                                                            local92 = local194;
                                                            local125 = local195;
                                                            local158 = local196;
                                                            *(unsigned int **)(esp_9 - 4) = esi_1;
                                                            *(__size32*)(esp_9 - 8) = 0;
                                                            eax = GetProcessHeap();
                                                            local197 = ebp_7;
                                                            local198 = esi_1;
                                                            local199 = local92;
                                                            local200 = local125;
                                                            local201 = local158;
                                                            *(__size32*)(esp_9 - 12) = eax;
                                                            esp_10 = HeapFree(*(esp_9 - 12), *(esp_9 - 8), *(esp_9 - 4));
                                                        } else {
                                                            do {
                                                                esp_9 = local184;
                                                                ebp_7 = local185;
                                                                local100 = local186;
                                                                local133 = local187;
                                                                local166 = local188;
                                                                ecx_1 = *(ebp_7 - 4);
                                                                edx = *ecx_1;
                                                                edx = *(edx + 12);
                                                                *(__size32*)(esp_9 - 4) = 0;
                                                                *(union { void * x10068; int x10069; }*)(esp_9 - 8) = ebp_7 - 8;
                                                                *(union { void * x10070; int x10071; }*)(esp_9 - 12) = ebp_7 - 32;
                                                                *(void **)(esp_9 - 16) = ebp_7 + 8;
                                                                *(union { void * x10072; int x10073; }*)(esp_9 - 20) = ebp_7 - 20;
                                                                *(__size32*)(esp_9 - 24) = 0;
                                                                (*edx)(local4, local1, local2, local3, local0, local5, local6, local7, local8, local9, local10, local11, local12, local13, local14, (unsigned short) ecx_1, (unsigned char) ebp_7 - 20, ebp_7 - 20, ecx_1, edx, ebx, ebp_7, esi_1, edi_1, <all>, local100, local133, local166);
                                                                local197 = ebp_8;
                                                                local197 = ebp_8;
                                                                local197 = ebp_8;
                                                                local197 = ebp_8;
                                                                local198 = esi_1;
                                                                local198 = esi_1;
                                                                local198 = esi_1;
                                                                local82 = LOGICALFLAGS8(al);
                                                                local199 = local82;
                                                                local200 = local115;
                                                                local201 = local148;
                                                                if (al == 0) {
                                                                    goto L7;
                                                                }
                                                                eax = *(unsigned short*)(ebp_8 + 8);
                                                                local83 = SUBFLAGS32(eax, ebx, eax - ebx);
                                                                local189 = local83;
                                                                local190 = local116;
                                                                local191 = local149;
                                                                if (eax == ebx) {
                                                                    eax = *(ebp_8 - 20);
                                                                    local84 = SUBFLAGS32(eax, edi_1, eax - edi_1);
                                                                    local189 = local84;
                                                                    local190 = local117;
                                                                    local191 = local150;
                                                                    if (eax <= edi_1) {
                                                                        ecx = *(ebp_8 - 32);
                                                                        local85 = SUBFLAGS32(edi_1, eax + ecx, edi_1 - eax + ecx);
                                                                        local189 = local85;
                                                                        local190 = local118;
                                                                        local191 = local151;
                                                                        if (edi_1 < eax + ecx) {
                                                                            eax = *(ebp_8 - 8);
                                                                            local103 = LOGICALFLAGS32(eax);
                                                                            local199 = local103;
                                                                            local200 = local136;
                                                                            local201 = local169;
                                                                            if (eax != 0) {
                                                                                local104 = SUBFLAGS32(eax, 0x1fffffff, eax - 0x1fffffff);
                                                                                local199 = local104;
                                                                                local200 = local137;
                                                                                local201 = local170;
                                                                                if (eax < 0x1fffffff) {
                                                                                    *(unsigned int*)(esp_10 - 4) = eax * 8;
                                                                                    *(__size32*)(esp_10 - 8) = 0;
                                                                                    eax = GetProcessHeap();
                                                                                    *(__size32*)(esp_10 - 12) = eax;
                                                                                    eax = HeapAlloc(*(esp_10 - 12), *(esp_10 - 8), *(esp_10 - 4)); /* Warning: also results in esp_10 */
                                                                                    esi = eax;
                                                                                    local105 = LOGICALFLAGS32(eax);
                                                                                    local198 = esi;
                                                                                    local199 = local105;
                                                                                    local200 = local138;
                                                                                    local201 = local171;
                                                                                    if (eax != 0) {
                                                                                        ecx_1 = *(ebp_8 - 4);
                                                                                        edx = *ecx_1;
                                                                                        edx = *(edx + 12);
                                                                                        *(unsigned int*)(esp_10 - 4) = eax;
                                                                                        *(union { void * x10076; int x10077; }*)(esp_10 - 8) = ebp_8 - 8;
                                                                                        *(__size32*)(esp_10 - 12) = 0;
                                                                                        *(__size32*)(esp_10 - 16) = 0;
                                                                                        *(__size32*)(esp_10 - 20) = 0;
                                                                                        *(union { void * x10078; int x10079; }*)(esp_10 - 24) = ebp_8 - 36;
                                                                                        (*edx)(local4, local1, local2, local3, local0, local5, local6, local7, local57, local9, local20, local27, local34, local41, local48, (unsigned short) ecx_1, (unsigned char) ebp_8 - 36, ebp_8 - 36, ecx_1, edx, ebx, ebp_8, eax, edi_1, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax));
                                                                                        local192 = esp_9;
                                                                                        local192 = esp_9;
                                                                                        local193 = ebp_7;
                                                                                        local193 = ebp_7;
                                                                                        local106 = LOGICALFLAGS8(al);
                                                                                        local194 = local106;
                                                                                        local195 = local139;
                                                                                        local196 = local172;
                                                                                        if (al != 0) {
                                                                                            edi_1 = edi_1 - *(ebp_7 - 20);
                                                                                            tmp1 = edi_1 - *esi_1;
                                                                                            local107 = SUBFLAGS32(edi_1, *esi_1, tmp1);
                                                                                            local194 = local107;
                                                                                            local195 = local140;
                                                                                            local196 = local173;
                                                                                            if (edi_1 >= *esi_1) {
                                                                                                ecx = *(ebp_7 - 8);
                                                                                                eax_6 = 1;
                                                                                                if (ecx > 1) {
                                                                                                    do {
                                                                                                        if (edi_1 < *(esi_1 + eax_6 * 8)) {
                                                                                                            goto L14;
                                                                                                        }
                                                                                                        eax_6++;
                                                                                                    } while (eax_6 + 1 < ecx);
                                                                                                }
L14:
                                                                                                eax_7 = *(esi_1 + eax_6 * 8 - 4);
                                                                                                ecx_2 = *(ebp_7 + 20);
                                                                                                *(__size32*)(esp_9 - 4) = 0;
                                                                                                *(int*)ecx_2 = eax_7 & 0xffffff;
                                                                                                ecx_1 = *(ebp_7 - 12);
                                                                                                edx = *ecx_1;
                                                                                                edx = *(edx + 112);
                                                                                                *(__size32*)(esp_9 - 8) = 0;
                                                                                                *(__size32*)(esp_9 - 12) = 0;
                                                                                                *(void **)(esp_9 - 16) = ebp_7 + 16;
                                                                                                eax = *(ebp_7 + 12);
                                                                                                *(__size32*)(esp_9 - 20) = eax;
                                                                                                eax = *(ebp_7 - 36);
                                                                                                *(__size32*)(esp_9 - 24) = eax;
                                                                                                (*edx)(local4, local1, local2, local3, local0, local5, local6, local7, local8, local9, local10, local11, local12, local13, local14, (unsigned short) ecx_1, (unsigned char) eax, eax, ecx_1, edx, ebx, ebp_7, esi_1, edi_1, <all>, LOGICALFLAGS32(eax_7 & 0xffffff), LOGICALFLAGS32(eax_7 & 0xffffff), LOGICALFLAGS32(eax_7 & 0xffffff));
                                                                                                local192 = esp_9;
                                                                                                local192 = esp_9;
                                                                                                local193 = ebp_7;
                                                                                                local193 = ebp_7;
                                                                                                local108 = LOGICALFLAGS8(al);
                                                                                                local194 = local108;
                                                                                                local194 = local108;
                                                                                                local195 = local141;
                                                                                                local195 = local141;
                                                                                                local196 = local174;
                                                                                                local196 = local174;
                                                                                                if (al != 0) {
                                                                                                    *(__size32*)(ebp_7 - 28) = 1;
                                                                                                    goto L9;
                                                                                                }
                                                                                                goto L9;
                                                                                            }
                                                                                            goto L9;
                                                                                        }
                                                                                        goto L9;
                                                                                    }
                                                                                }
                                                                            }
                                                                            goto L7;
                                                                        }
L11:
                                                                        local99 = local189;
                                                                        local132 = local190;
                                                                        local165 = local191;
                                                                        ecx_1 = *(ebp_8 - 4);
                                                                        edx = *ecx_1;
                                                                        eax = *(edx + 8);
                                                                        (*eax)(local4, local1, local2, local3, local0, local5, local6, local7, local57, local9, local20, local27, local34, local41, local48, (unsigned short) ecx_1, (unsigned char) eax, eax, ecx_1, edx, ebx, ebp_8, esi_1, edi_1, <all>, local99, local132, local165);
                                                                        local184 = esp_11;
                                                                        local185 = ebp_9;
                                                                        local192 = esp_11;
                                                                        local193 = ebp_9;
                                                                        goto L10;
                                                                    }
                                                                    goto L11;
                                                                }
                                                                goto L11;
L10:
                                                                local86 = LOGICALFLAGS32(eax);
                                                                local186 = local86;
                                                                local187 = local119;
                                                                local188 = local152;
                                                                local194 = local86;
                                                                local195 = local119;
                                                                local196 = local152;
                                                            } while (eax != 0);
                                                            goto L9;
                                                        }
L7:
                                                        ebp_8 = local197;
                                                        esi = local198;
                                                        local91 = local199;
                                                        local124 = local200;
                                                        local157 = local201;
                                                        ecx_1 = *(ebp_8 - 4);
                                                        eax_1 = *ecx_1;
                                                        edx = *eax_1;
                                                        (*edx)(local4, local1, local2, local3, local0, local5, local6, local7, local8, local9, local10, local11, local12, local13, local14, (unsigned short) ecx_1, (unsigned char) eax_1, eax_1, ecx_1, edx, ebx, ebp_8, esi, edi_1, <all>, local91, local124, local157);
                                                        local202 = local102;
                                                        local203 = local135;
                                                        local204 = local168;
                                                    }
                                                }
                                                local89 = local202;
                                                local122 = local203;
                                                local155 = local204;
                                                ecx_1 = *(ebp_6 - 12);
                                                eax = *ecx_1;
                                                edx = *(eax + 64);
                                                (*edx)(local4, local1, local2, local3, local0, local5, local6, local7, local8, local9, local10, local11, local12, local13, local14, (unsigned short) ecx_1, (unsigned char) eax, eax, ecx_1, edx, ebx, ebp_6, esi, edi, <all>, local89, local122, local155);
                                                local205 = local101;
                                                local206 = local134;
                                                local207 = local167;
                                            }
                                            local87 = local205;
                                            local120 = local206;
                                            local153 = local207;
                                            ecx_1 = *(ebp_5 - 24);
                                            eax = *ecx_1;
                                            edx = *(eax + 56);
                                            (*edx)(local4, local1, local2, local3, local0, local5, local6, local7, local8, local9, local10, local11, local12, local13, local14, (unsigned short) ecx_1, (unsigned char) eax, eax, ecx_1, edx, ebx, ebp_5, esi, edi, <all>, local87, local120, local153);
                                            local208 = esp_5;
                                            local209 = ebp_10;
                                            local210 = local88;
                                            local211 = local121;
                                            local212 = local154;
                                        }
                                    }
                                    esp_5 = local208;
                                    ebp_10 = local209;
                                    local76 = local210;
                                    local109 = local211;
                                    local142 = local212;
                                    ecx_1 = *(ebp_10 - 16);
                                    eax = *ecx_1;
                                    edx = *(eax + 40);
                                    (*edx)(local75, local73, local71, local69, local67, local64, local62, local60, local58, local51, local21, local28, local35, local42, local49, (unsigned short) ecx_1, (unsigned char) eax, eax, ecx_1, edx, ebx, ebp_10, esi, edi, <all>, local76, local109, local142);
                                    edi = *esp_12;
                                    ebx = *(esp_12 + 4);
                                    esi = *(esp_12 + 8);
                                    ebp = *ebp_11;
                                    local178 = ebx;
                                } else {
                                    goto L2;
                                }
                            }
                        } else {
                            if (*0x417554 != 0) {
                                goto L2;
                            } else {
                                esp_2 = esp - 100;
                                proc23(edi_1);
                                local181 = esp_2;
                                local182 = esp_2;
                                *(union { int x365; __size16 * x366; }*)0x417554 = eax_2;
                                if (eax_2 == 0) {
                                    goto L2;
                                } else {
                                    global64 = 1;
                                    goto L46;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto L1;
    }
    param7 = local178;
    return esi; /* WARNING: Also returning: cx := cx, edx := edx, ebx := param7, ebp := ebp, edi := edi */
}

// address: 0x411970
void proc22() {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30

    if (ecx != *0x417000) {
    }
    global31 = eax;
    global32 = ecx;
    global33 = edx;
    global34 = ebx;
    global35 = esi;
    global36 = edi;
}

// address: 0x413770
void proc23(__size32 param1) {
    __size8 al; 		// r8
    unsigned char dl; 		// r10
    unsigned int eax; 		// r24
    unsigned int eax_1; 		// r24{167}
    unsigned int eax_2; 		// r24{310}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    unsigned int ecx_1; 		// r25{225}
    __size32 edi; 		// r31
    int edx; 		// r26
    __size32 esi; 		// r30
    __size32 *esp; 		// r28
    __size32 *esp_1; 		// r28
    __size32 *esp_2; 		// r28{215}
    unsigned int local0; 		// m[esp - 288]
    int local1; 		// m[esp - 8]
    __size32 local2; 		// m[esp - 4]
    unsigned int local3; 		// m[esp - 296]
    int local4; 		// m[esp - 292]
    int local5; 		// m[esp - 4]{42}
    int local6; 		// m[esp - 8]{42}
    int local7; 		// m[esp - 288]{42}
    int local8; 		// m[esp - 292]{42}
    int local9; 		// m[esp - 296]{42}

    if (*0x41755c != 0) {
        proc24(pc, global0 ^ esp - 4, ebp, 0, 0, global0 ^ esp - 4 ^ esp - 4, esp - 4, esi, param1, LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4), LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4), LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4));
    }
    global37 = 1;
    (*LoadLibraryA)(pc, global40, esi, global0 ^ esp - 4, ebp, (unsigned char) global40, global40, esp - 4, LoadLibraryA, param1, SUBFLAGS32(global37, 0, global37), global37 == 0, global37 < 0);
    if (eax == 0) {
        *(__size32*)(esp_1 - 4) = 0x4161f4;
        (*esi)(local9, local8, local7, local6, local5, al, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax));
        if (eax == 0) {
            esi = *esp_1;
            ecx = *(ebp - 4);
            proc25(local3, local4, local0, local1, local2, al, dl, eax, ecx ^ ebp, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp));
        }
        *(__size32*)(esp_1 - 4) = ebx;
        *(__size32*)(esp_1 - 8) = 0x4161e4;
        *(__size32*)(esp_1 - 12) = eax;
        (*GetProcAddress)(local3, local4, local0, local1, local2, al, dl, eax, ecx, edx, GetProcAddress, ebp, eax, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax));
        *(__size32*)(ebp - 276) = eax;
        if (eax == 0) {
            ebx = *esp_1;
            esi = *(esp_1 + 4);
            ecx = *(ebp - 4);
            proc27(local3, local4, local0, local1, local2, al, dl, eax, ecx ^ ebp, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp));
        }
        *(__size32*)(esp_1 - 4) = edi;
        *(__size32*)(esp_1 - 8) = 0x4161d0;
        *(__size32*)(esp_1 - 12) = esi;
        (*ebx)(local3, local4, local0, local1, local2, al, dl, eax, ecx, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax));
        if (eax != 0) {
            *(__size32*)(esp_1 - 4) = 0x4161c0;
            *(__size32*)(esp_1 - 8) = esi;
            (*ebx)(local3, local4, local0, local1, local2, al, dl, eax, ecx, edx, ebx, ebp, esi, eax, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax));
            if (eax != 0) {
                *(union { void * x10188; int x10189; }*)(esp_1 - 4) = ebp - 272;
                *(__size32*)(esp_1 - 8) = 1;
                *(__size32*)(esp_1 - 12) = 0;
                *(__size32*)(esp_1 - 16) = 0x416188;
                *(__size32*)(esp_1 - 20) = 0x80000002;
                (**(ebp - 276))(local3, local4, local0, local1, local2, al, dl, eax, ebp - 272, edx, eax, ebp, esi, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax));
                if (eax == 0) {
                    ecx = *(ebp - 272);
                    *(union { void * x10202; int x10203; }*)(esp_1 - 4) = ebp - 268;
                    *(unsigned int*)(esp_1 - 8) = eax;
                    *(union { void * x10204; int x10205; }*)(esp_1 - 12) = ebp - 280;
                    *(__size32*)(esp_1 - 16) = 0;
                    *(__size32*)(esp_1 - 20) = 0x41616c;
                    *(__size32*)(esp_1 - 24) = ecx;
                    (*edi)(local3, local4, local0, local1, local2, (unsigned char) ebp - 280, (unsigned char) ebp - 268, ebp - 280, ecx, ebp - 268, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax));
                    if (eax == 0) {
                        eax_1 = *(ebp - 268);
                        dl = (unsigned char) 0x7fffffff - eax_1;
                        if ( !(0x7fffffff - eax_1 < 13 || eax_1 + 13 >= 260)) {
                            *(union { void * x10220; int x10221; }*)(esp_1 - 4) = ebp - 268;
                            eax = *(ebp - 272);
                            *(union { void * x10222; int x10223; }*)(esp_1 - 8) = ebp - 264;
                            *(union { void * x10224; int x10225; }*)(esp_1 - 12) = ebp - 280;
                            *(__size32*)(esp_1 - 16) = 0;
                            *(__size32*)(esp_1 - 20) = 0x41616c;
                            *(__size32*)(esp_1 - 24) = eax;
                            (*edi)(local3, local4, local0, local1, local2, (unsigned char) eax, (unsigned char) ebp - 280, eax, ebp - 264, ebp - 280, ebx, ebp, esi, edi, <all>, SUBFLAGS32(eax_1 + 13, 260, eax_1 - 247), eax_1 - 247 == 0, eax_1 + 13 < 260);
                            ecx = *(ebp - 272);
                            *(__size32*)(esp_1 - 4) = ecx;
                            (*ebx)(local3, local4, local0, local1, local2, al, dl, eax, ecx, edx, ebx, ebp, esi, eax, <all>, flags, ZF, CF);
                            *(__size32*)(esp_2 - 4) = esi;
                            edx = FreeLibrary(*(esp_2 - 4)); /* Warning: also results in esp_1 */
                            if (edi == 0) {
                                ecx_1 = *(ebp - 268);
                                if (*(ebp + ecx_1 - 266) != 92) {
                                    *(__size8*)(ebp + ecx_1 - 265) = 92;
L6:
                                    esi = *0x417034;
                                    eax = 0;
                                    do {
                                        eax_2 = eax;
                                        dl = *(esi + eax_2);
                                        edx = edx >> 8 & 0xffffff | (dl);
                                        *(unsigned char*)(ebp + ecx_1 + eax_2 - 264) = dl;
                                        eax = eax_2 + 1;
                                    } while (eax_2 + 1 <= 11);
                                    *(union { void * x10250; int x10251; }*)(esp_2 - 4) = ebp - 264;
                                    eax = LoadLibraryA(*(esp_2 - 4)); /* Warning: also results in edx */
                                    edi = *esp_2;
                                    ebx = *(esp_2 + 4);
                                    esi = *(esp_2 + 8);
                                    ecx = *(ebp - 4);
                                    proc28(local3, local4, local0, local1, local2, (unsigned char) ebp - 264, dl, eax, ecx ^ ebp, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp));
                                }
                                ecx_1 = ecx_1 - 1;
                                *(int*)(ebp - 268) = ecx_1 - 1;
                                goto L6;
                            }
                            goto L1;
                        }
                    }
                }
                local2 = esi;
                edx = FreeLibrary(*(esp - 4)); /* Warning: also results in esp */
            }
        }
L1:
        edi = *esp;
        eax = 0;
        al = 0;
        ebx = *(esp + 4);
        esp += 8;
    }
    ecx = *(ebp - 4);
    esi = *esp;
    proc26(*(esp - 296), *(esp - 292), *(esp - 288), *(esp - 8), *(esp - 4), al, dl, eax, ecx ^ ebp, edx, ebx, ebp, esi, edi, <all>, LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp), LOGICALFLAGS32(ecx ^ ebp));
}

// address: 0x411970
void proc24() {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30

    if (ecx != *0x417000) {
    }
    global31 = eax;
    global32 = ecx;
    global33 = edx;
    global34 = ebx;
    global35 = esi;
    global36 = edi;
}

// address: 0x411970
void proc25() {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30

    if (ecx != *0x417000) {
    }
    global31 = eax;
    global32 = ecx;
    global33 = edx;
    global34 = ebx;
    global35 = esi;
    global36 = edi;
}

// address: 0x411970
void proc26() {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30

    if (ecx != *0x417000) {
    }
    global31 = eax;
    global32 = ecx;
    global33 = edx;
    global34 = ebx;
    global35 = esi;
    global36 = edi;
}

// address: 0x411970
void proc27() {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30

    if (ecx != *0x417000) {
    }
    global31 = eax;
    global32 = ecx;
    global33 = edx;
    global34 = ebx;
    global35 = esi;
    global36 = edi;
}

// address: 0x411970
void proc28() {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30

    if (ecx != *0x417000) {
    }
    global31 = eax;
    global32 = ecx;
    global33 = edx;
    global34 = ebx;
    global35 = esi;
    global36 = edi;
}

// address: 0x411860
__size32 proc29(__size16 param1, __size32 param2, __size32 param3, __size32 param4) {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 *edi; 		// r31
    __size32 edx; 		// r26
    int esp; 		// r28

    edi = (esp - 196);
    ecx = 48;
    while (ecx != 0) {
        *(__size32*)edi = 0xcccccccc;
        edi +=  (DF == 0) ? 4 : -4;
        ecx = ecx - 1;
    }
    eax = _stat64i32(); /* Warning: also results in edx */
    eax = proc39(param1, eax, edx, param2); /* Warning: also results in edx */
    eax = proc40(param1, eax, edx, param2, param3, param4); /* Warning: also results in ebx, edi */
    return eax; /* WARNING: Also returning: ebx := ebx, edi := edi */
}

// address: 0x411990
__size32 proc30(__size16 param1, __size32 param3, __size32 param3) {
    __size32 edx; 		// r26
    __size32 local0; 		// m[esp]
    __size32 local3; 		// param3{48}

    local3 = param3;
    if (flags) {
        proc57(local0, 0, param1);
        edx = param3;
        local3 = edx;
    }
    param3 = local3;
    return param3;
}

// address: 0x411990
__size32 proc31(__size16 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6) {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 local0; 		// m[esp]
    __size32 local3; 		// param2{47}
    __size32 local4; 		// param4{49}
    __size32 local5; 		// param6{53}

    local3 = param2;
    local4 = param4;
    local5 = param6;
    if (flags) {
        proc58(local0, 0, param1);
        edi = 0;
        ebx = param5;
        eax = param3;
        local3 = eax;
        local4 = ebx;
        local5 = edi;
    }
    param2 = local3;
    param4 = local4;
    param6 = local5;
    return param2; /* WARNING: Also returning: ebx := param4, edi := param6 */
}

// address: 0x411990
__size32 proc32(__size16 param1, __size32 param3, __size32 param3) {
    __size32 edx; 		// r26
    __size32 local0; 		// m[esp]
    __size32 local3; 		// param3{48}

    local3 = param3;
    if (flags) {
        proc59(local0, 0, param1);
        edx = param3;
        local3 = edx;
    }
    param3 = local3;
    return param3;
}

// address: 0x4119c0
void proc33(__size16 param1, __size32 param2, int *param3) {
    __size32 *eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    int local0; 		// m[esp]

    if (*param3 > 0) {
        do {
            eax = *(param3 + 4);
            ecx = *eax;
            if (*(ecx + param2 - 4) != 0xcccccccc) {
L1:
                eax = *(param3 + 4);
                ecx = *(eax + 8);
                proc42(local0, ecx, param1, local0, 0);
            }
            edx = *(eax + 4);
            if (*(edx + ecx + param2) != 0xcccccccc) {
                goto L1;
            }
            *(__size32*)(ebp - 4) = eax;
        } while (flags);
    }
    return;
}

// address: 0x411970
void proc34() {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30

    if (ecx != *0x417000) {
    }
    global31 = eax;
    global32 = ecx;
    global33 = edx;
    global34 = ebx;
    global35 = esi;
    global36 = edi;
}

// address: 0x411990
void proc35(__size16 param1) {
    __size32 local0; 		// m[esp]

    if (flags) {
        proc60(local0, 0, param1);
    }
    return;
}

// address: 0x411990
__size32 proc36(__size16 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6) {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 esi; 		// r30
    __size32 local0; 		// m[esp]
    __size32 local3; 		// param2{47}
    __size32 local4; 		// param4{49}
    __size32 local5; 		// param5{52}
    __size32 local6; 		// param6{53}

    local3 = param2;
    local4 = param4;
    local5 = param5;
    local6 = param6;
    if (flags) {
        proc61(local0, 0, param1);
        edi = 0;
        esi = param6;
        ebx = param5;
        eax = param3;
        local3 = eax;
        local4 = ebx;
        local5 = esi;
        local6 = edi;
    }
    param2 = local3;
    param4 = local4;
    param5 = local5;
    param6 = local6;
    return param2; /* WARNING: Also returning: esi := param5, ebx := param4, edi := param6 */
}

// address: 0x411990
__size32 proc37(__size16 param1, __size32 param3, __size32 param3) {
    __size32 edx; 		// r26
    __size32 local0; 		// m[esp]
    __size32 local3; 		// param3{48}

    local3 = param3;
    if (flags) {
        proc65(local0, 0, param1);
        edx = param3;
        local3 = edx;
    }
    param3 = local3;
    return param3;
}

// address: 0x411410
void proc38(int param1[][][], void *param2, int param3, __size16 param4, __size32 param5, __size32 param6, __size32 param7) {
    __size32 eax; 		// r24
    void *eax_2; 		// r24{132}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    int ecx; 		// r25
    int edi; 		// r31
    __size32 edx; 		// r26
    int esp; 		// r28
    __size32 local16; 		// m[esp + 8]
    int local17; 		// m[esp - 104]{363}
    unsigned int local18; 		// m[esp - 316]{370}
    int local19; 		// param3{357}
    int local2; 		// m[esp + 12]
    int local3; 		// m[esp - 104]
    unsigned int local4; 		// m[esp - 340]
    unsigned int local5; 		// m[esp - 316]

    edi = esp - 316;
    ecx = 78;
    local19 = param3;
    while (ecx != 0) {
        *(__size32*)edi = 0xcccccccc;
        edi +=  (DF == 0) ? 4 : -4;
        ecx = ecx - 1;
    }
    sprintf(&param1, 0x415754);
    ebx = proc44(param4, param5, esp - 328, edi); /* Warning: also results in edi */
    if (param3 > 16) {
        local2 = 16;
        local19 = local2;
    }
    param3 = local19;
    local3 = 0;
    while (local3 < param3) {
        local4 = esp + local3 * 3 - 83;
        sprintf(local4, 0x41574c);
        ebx = proc45(param4, ebx, esp - 328, edi); /* Warning: also results in edi */
        local3++;
    }
    for(;;) {
        local17 = local3;
        local3 = local17 + 1;
        if (local17 < 16) {
            local5 = 1;
L19:
            if (local5 == 0) {
                break;
            }
            __imp_strcat(&param1, 0x415748);
            goto L17;
        }
        local5 = 0;
        goto L19;
L17:
    }
    eax_2 = __imp_strlen(&param1);
    edx = __imp_strcpy(esp + eax_2 - 92, 0x415744);
    local3 = 0;
    while (local3 < param3) {
        eax = param2 + local3;
        ecx = *(unsigned char*)eax;
        if ((int)ecx >= 32) {
            edx = param2 + local3;
            eax = *(unsigned char*)edx;
            if ((int)eax <= 126) {
                ecx = param2 + local3;
                edx = *(unsigned char*)ecx;
                local5 = edx;
L8:
                eax = eax_2 + local3 + 3;
                *(unsigned int*)(esp + eax - 92) = local5;
                goto L7;
            }
        }
        local5 = 46;
        goto L8;
L7:
        local3++;
    }
    while (local3 < 16) {
        eax = eax_2 + local3 + 3;
        *(__size8*)(esp + eax - 92) = 32;
        local3++;
    }
    ecx = esp + eax_2 + local3 - 89;
    __imp_strcpy(ecx, 0x415740);
    eax = printf("%s\n", &param1); /* Warning: also results in edx */
    eax = proc50(param4, eax, edx, ebx); /* Warning: also results in edx */
    proc51(param4, esp - 4, 0x411600);
    proc52(pc, pc, eax, edx, param7, param6, pc, local18, eax_2 + 3, local3, param1, global0 ^ esp - 4, ebp, param2, local16, param3, param4, (unsigned char) global0 ^ esp - 4 ^ esp - 4, eax, global0 ^ esp - 4 ^ esp - 4, edx, param5, esp - 4, param6, param7, LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4), LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4), LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4));
}

// address: 0x411990
__size32 proc39(__size16 param1, __size32 param2, __size32 param3, __size32 param4) {
    __size32 eax; 		// r24
    __size32 edx; 		// r26
    __size32 local0; 		// m[esp]
    __size32 local3; 		// param2{47}
    __size32 local4; 		// param3{48}

    local3 = param2;
    local4 = param3;
    if (flags) {
        proc66(local0, 0, param1);
        edx = param4;
        eax = param3;
        local3 = eax;
        local4 = edx;
    }
    param2 = local3;
    param3 = local4;
    return param2; /* WARNING: Also returning: edx := param3 */
}

// address: 0x411990
__size32 proc40(__size16 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6) {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 local0; 		// m[esp]
    __size32 local3; 		// param2{47}
    __size32 local4; 		// param4{49}
    __size32 local5; 		// param6{53}

    local3 = param2;
    local4 = param4;
    local5 = param6;
    if (flags) {
        proc41(local0, 0, param1);
        edi = 0;
        ebx = param5;
        eax = param3;
        local3 = eax;
        local4 = ebx;
        local5 = edi;
    }
    param2 = local3;
    param4 = local4;
    param6 = local5;
    return param2; /* WARNING: Also returning: ebx := param4, edi := param6 */
}

// address: 0x412380
void proc41(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}

// address: 0x412750
void proc42(__size32 param1, unsigned char *param2, __size16 param3, int param4, __size32 param5) {
    unsigned char cl; 		// r9
    unsigned char dl; 		// r10
    union { int x523; unsigned char * x524; } eax; 		// r24
    union { int x503; unsigned char * x504; } eax_1; 		// r24{229}
    unsigned char *eax_2; 		// r24{261}
    __size32 ebp; 		// r29
    int ebx; 		// r27
    unsigned char *ecx; 		// r25
    int ecx_1; 		// r25
    unsigned char *ecx_2; 		// r25{212}
    int edi; 		// r31
    int edx; 		// r26
    unsigned char *edx_1; 		// r26
    __size32 *esi; 		// r30
    int esp; 		// r28
    int local1; 		// m[esp - 0x418]
    union { void * x505; int x506; } local10; 		// ecx{230}
    union { unsigned char * x509; int x510; } local11; 		// edx{262}
    int local9; 		// param4{213}

    eax = param2;
    local9 = param4;
    if (*0x417010 != -1) {
        if (*param2 != 0) {
            ecx = param2;
            do {
                ecx_2 = ecx;
                param4 = local9;
                dl = *ecx_2;
                edx = param4 >> 8 & 0xffffff | (dl);
                ecx = ecx_2 + 1;
                local9 = edx;
            } while (dl != 0);
            if (ecx_2 - param2 + 45 <= 1024) {
                ebx = (esp - 1032);
                ecx = 0;
                do {
                    dl = *(ecx + 0x415b94);
                    edx = edx >> 8 & 0xffffff | (dl);
                    *(unsigned char*)(esp + ecx - 1032) = dl;
                    ecx++;
                    local10 = ecx;
                } while (dl != 0);
                edx_1 = param2;
                local11 = edx_1;
                do {
                    eax_1 = eax;
                    ecx = local10;
                    cl = *eax_1;
                    ecx_1 = ecx >> 8 & 0xffffff | (cl);
                    eax = eax_1 + 1;
                    local10 = ecx_1;
                } while (cl != 0);
                edi = (esp - 1033);
                do {
                    cl = *(edi + 1);
                    ecx_1 = ecx_1 >> 8 & 0xffffff | (cl);
                    edi++;
                } while (cl != 0);
                ecx_1 = (eax_1 - param2 + 1) / 4;
                esi = param2;
                while (ecx_1 != 0) {
                    *(__size32*)edi = *esi;
                    esi +=  (DF == 0) ? 4 : -4;
                    edi +=  (DF == 0) ? 4 : -4;
                    ecx_1 = ecx_1 - 1;
                }
                ecx_1 = eax_1 - param2 + 1 & 0x3;
                eax = 0x415bb0;
                while (ecx_1 != 0) {
                    *(__size32*)edi = *esi;
                    esi +=  (DF == 0) ? 1 : -1;
                    edi +=  (DF == 0) ? 1 : -1;
                    ecx_1 = ecx_1 - 1;
                }
                ecx_1 = 0x415bb0;
                do {
                    eax_2 = eax;
                    edx = local11;
                    dl = *eax_2;
                    edx = edx >> 8 & 0xffffff | (dl);
                    eax = eax_2 + 1;
                    local11 = edx;
                } while (dl != 0);
                esi = 0x415bb0;
                edi = (esp - 1033);
                do {
                    cl = *(edi + 1);
                    ecx_1 = ecx_1 >> 8 & 0xffffff | (cl);
                    edi++;
                } while (cl != 0);
                ecx_1 = (eax_2 - 0x415baf) / 4;
                while (ecx_1 != 0) {
                    *(__size32*)edi = *esi;
                    esi +=  (DF == 0) ? 4 : -4;
                    edi +=  (DF == 0) ? 4 : -4;
                    ecx_1 = ecx_1 - 1;
                }
                ecx_1 = eax_2 - 0x415baf & 0x3;
                while (ecx_1 != 0) {
                    *(__size32*)edi = *esi;
                    esi +=  (DF == 0) ? 1 : -1;
                    edi +=  (DF == 0) ? 1 : -1;
                    ecx_1 = ecx_1 - 1;
                }
L2:
                proc16(param1, ebx, param3);
            }
        }
        ebx = 0x415d4c;
        goto L2;
    }
    proc43(local1, pc, param1, global0 ^ esp - 4, ebp, param1, param2, param3, (unsigned char) global0 ^ esp - 4 ^ esp - 4, dl, param2, global0 ^ esp - 4 ^ esp - 4, param4, ebx, esp - 4, esi, param5, LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4), LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4), LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4));
    return;
}

// address: 0x411970
void proc43() {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30

    if (ecx != *0x417000) {
    }
    global31 = eax;
    global32 = ecx;
    global33 = edx;
    global34 = ebx;
    global35 = esi;
    global36 = edi;
}

// address: 0x411990
__size32 proc44(__size16 param1, __size32 param4, __size32 param3, __size32 param4) {
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 local0; 		// m[esp]
    __size32 local3; 		// param4{49}
    __size32 local4; 		// param4{53}

    local3 = param4;
    local4 = param4;
    if (flags) {
        proc62(local0, 0, param1);
        edi = 0;
        ebx = param3;
        local3 = ebx;
        local4 = edi;
    }
    param4 = local3;
    param4 = local4;
    return param4; /* WARNING: Also returning: edi := param4 */
}

// address: 0x411990
__size32 proc45(__size16 param1, __size32 param4, __size32 param3, __size32 param4) {
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 local0; 		// m[esp]
    __size32 local3; 		// param4{49}
    __size32 local4; 		// param4{53}

    local3 = param4;
    local4 = param4;
    if (flags) {
        proc63(local0, 0, param1);
        edi = 0;
        ebx = param3;
        local3 = ebx;
        local4 = edi;
    }
    param4 = local3;
    param4 = local4;
    return param4; /* WARNING: Also returning: edi := param4 */
}

// address: 0x41195e
void __imp_strcat(char param1[], char param2[]) {
    strcat(param1, param2);
    return;
}

// address: 0x411958
__size32 __imp_strlen(char param1[]) {
    __size32 eax; 		// r24

    eax = strlen(param1);
    return eax;
}

// address: 0x411952
__size32 __imp_strcpy(char param1[], char param2[]) {
    __size32 edx; 		// r26

    edx = strcpy(param1, param2);
    return edx;
}

// address: 0x411952
void __imp_strcpy(char param1[], char param2[]) {
    strcpy(param1, param2);
    return;
}

// address: 0x411990
__size32 proc50(__size16 param1, __size32 param2, __size32 param3, __size32 param4) {
    __size32 eax; 		// r24
    __size32 edx; 		// r26
    __size32 local0; 		// m[esp]
    __size32 local3; 		// param2{47}
    __size32 local4; 		// param3{48}

    local3 = param2;
    local4 = param3;
    if (flags) {
        proc64(local0, 0, param1);
        edx = param4;
        eax = param3;
        local3 = eax;
        local4 = edx;
    }
    param2 = local3;
    param3 = local4;
    return param2; /* WARNING: Also returning: edx := param3 */
}

// address: 0x4119c0
void proc51(__size16 param1, __size32 param2, int *param3) {
    __size32 *eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    int local0; 		// m[esp]

    if (*param3 > 0) {
        do {
            eax = *(param3 + 4);
            ecx = *eax;
            if (*(ecx + param2 - 4) != 0xcccccccc) {
L1:
                eax = *(param3 + 4);
                ecx = *(eax + 8);
                proc55(local0, ecx, param1, local0, 0);
            }
            edx = *(eax + 4);
            if (*(edx + ecx + param2) != 0xcccccccc) {
                goto L1;
            }
            *(__size32*)(ebp - 4) = eax;
        } while (flags);
    }
    return;
}

// address: 0x411970
void proc52() {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30

    if (ecx != *0x417000) {
    }
    global31 = eax;
    global32 = ecx;
    global33 = edx;
    global34 = ebx;
    global35 = esi;
    global36 = edi;
}

// address: 0x411990
void proc53(__size16 param1) {
    __size32 local0; 		// m[esp]

    if (flags) {
        proc54(local0, 0, param1);
    }
    return;
}

// address: 0x412380
void proc54(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}

// address: 0x412750
void proc55(__size32 param1, unsigned char *param2, __size16 param3, int param4, __size32 param5) {
    unsigned char cl; 		// r9
    unsigned char dl; 		// r10
    union { int x654; unsigned char * x655; } eax; 		// r24
    union { int x634; unsigned char * x635; } eax_1; 		// r24{229}
    unsigned char *eax_2; 		// r24{261}
    __size32 ebp; 		// r29
    int ebx; 		// r27
    unsigned char *ecx; 		// r25
    int ecx_1; 		// r25
    unsigned char *ecx_2; 		// r25{212}
    int edi; 		// r31
    int edx; 		// r26
    unsigned char *edx_1; 		// r26
    __size32 *esi; 		// r30
    int esp; 		// r28
    int local1; 		// m[esp - 0x418]
    union { void * x636; int x637; } local10; 		// ecx{230}
    union { unsigned char * x640; int x641; } local11; 		// edx{262}
    int local9; 		// param4{213}

    eax = param2;
    local9 = param4;
    if (*0x417010 != -1) {
        if (*param2 != 0) {
            ecx = param2;
            do {
                ecx_2 = ecx;
                param4 = local9;
                dl = *ecx_2;
                edx = param4 >> 8 & 0xffffff | (dl);
                ecx = ecx_2 + 1;
                local9 = edx;
            } while (dl != 0);
            if (ecx_2 - param2 + 45 <= 1024) {
                ebx = (esp - 1032);
                ecx = 0;
                do {
                    dl = *(ecx + 0x415b94);
                    edx = edx >> 8 & 0xffffff | (dl);
                    *(unsigned char*)(esp + ecx - 1032) = dl;
                    ecx++;
                    local10 = ecx;
                } while (dl != 0);
                edx_1 = param2;
                local11 = edx_1;
                do {
                    eax_1 = eax;
                    ecx = local10;
                    cl = *eax_1;
                    ecx_1 = ecx >> 8 & 0xffffff | (cl);
                    eax = eax_1 + 1;
                    local10 = ecx_1;
                } while (cl != 0);
                edi = (esp - 1033);
                do {
                    cl = *(edi + 1);
                    ecx_1 = ecx_1 >> 8 & 0xffffff | (cl);
                    edi++;
                } while (cl != 0);
                ecx_1 = (eax_1 - param2 + 1) / 4;
                esi = param2;
                while (ecx_1 != 0) {
                    *(__size32*)edi = *esi;
                    esi +=  (DF == 0) ? 4 : -4;
                    edi +=  (DF == 0) ? 4 : -4;
                    ecx_1 = ecx_1 - 1;
                }
                ecx_1 = eax_1 - param2 + 1 & 0x3;
                eax = 0x415bb0;
                while (ecx_1 != 0) {
                    *(__size32*)edi = *esi;
                    esi +=  (DF == 0) ? 1 : -1;
                    edi +=  (DF == 0) ? 1 : -1;
                    ecx_1 = ecx_1 - 1;
                }
                ecx_1 = 0x415bb0;
                do {
                    eax_2 = eax;
                    edx = local11;
                    dl = *eax_2;
                    edx = edx >> 8 & 0xffffff | (dl);
                    eax = eax_2 + 1;
                    local11 = edx;
                } while (dl != 0);
                esi = 0x415bb0;
                edi = (esp - 1033);
                do {
                    cl = *(edi + 1);
                    ecx_1 = ecx_1 >> 8 & 0xffffff | (cl);
                    edi++;
                } while (cl != 0);
                ecx_1 = (eax_2 - 0x415baf) / 4;
                while (ecx_1 != 0) {
                    *(__size32*)edi = *esi;
                    esi +=  (DF == 0) ? 4 : -4;
                    edi +=  (DF == 0) ? 4 : -4;
                    ecx_1 = ecx_1 - 1;
                }
                ecx_1 = eax_2 - 0x415baf & 0x3;
                while (ecx_1 != 0) {
                    *(__size32*)edi = *esi;
                    esi +=  (DF == 0) ? 1 : -1;
                    edi +=  (DF == 0) ? 1 : -1;
                    ecx_1 = ecx_1 - 1;
                }
L2:
                proc16(param1, ebx, param3);
            }
        }
        ebx = 0x415d4c;
        goto L2;
    }
    proc56(local1, pc, param1, global0 ^ esp - 4, ebp, param1, param2, param3, (unsigned char) global0 ^ esp - 4 ^ esp - 4, dl, param2, global0 ^ esp - 4 ^ esp - 4, param4, ebx, esp - 4, esi, param5, LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4), LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4), LOGICALFLAGS32(global0 ^ esp - 4 ^ esp - 4));
    return;
}

// address: 0x411970
void proc56() {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30

    if (ecx != *0x417000) {
    }
    global31 = eax;
    global32 = ecx;
    global33 = edx;
    global34 = ebx;
    global35 = esi;
    global36 = edi;
}

// address: 0x412380
void proc57(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}

// address: 0x412380
void proc58(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}

// address: 0x412380
void proc59(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}

// address: 0x412380
void proc60(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}

// address: 0x412380
void proc61(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}

// address: 0x412380
void proc62(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}

// address: 0x412380
void proc63(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}

// address: 0x412380
void proc64(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}

// address: 0x412380
void proc65(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}

// address: 0x412380
void proc66(__size32 param1, unsigned int param2, __size16 param3) {
    unsigned int ecx; 		// r25
    __size32 edx; 		// r26

    if (param2 > 4) {
        proc16(param1, 0x415844, param3);
    }
    ecx = global92[param2];
    edx = global105[param2];
    if (ecx != -1) {
        proc16(param1, edx, param3);
    }
    return;
}


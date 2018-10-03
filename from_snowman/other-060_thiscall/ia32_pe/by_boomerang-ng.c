int global_0x00407000 = 0xbb40e64e;
__size32 global_0x00407004 = 0x44bf19b1;// 4 bytes
__size32 global_0x00407120 = 0;// 4 bytes
__size32 global_0x00407124 = 0;// 4 bytes
__size32 global_0x00407128 = 0;// 4 bytes
__size32 global_0x00407138 = 0;// 4 bytes
__size32 global_0x0040713c = 0;// 4 bytes
int global_0x00407474;
void global_0x004074a0;
__size32 ?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A = 0x83d0;// 4 bytes
void proc_0x00401f80(int param1, int param2);
void _start();
__size32 proc_0x00401ea0(__size32 param1, __size32 param2, __size32 param3, __size32 param4);
__size32 proc_0x00401dd0(unsigned int param1, unsigned char param2, int param3, unsigned int param4);
__size32 proc_0x00401090();
void proc_0x00401ee5(union { __size32; __size32 *; } param1);
__size32 proc_0x00401d40(union { __size16 *; __size32; } param1, unsigned char param2, int param3);
__size32 proc_0x00401d80(__size32 param1, unsigned int param2, unsigned int param3);
void proc_0x004010c0(__size32 param1, union { __size32; __size32 *; } param2);
void proc_0x00401150();
__size32 proc_0x00401110();
__size32 proc_0x00401190(union { __size32 *; __size32; } param1, __size32 param2);
__size32 proc_0x00401530(union { char[] *; __size32; } param1);
__size32 proc_0x00401580(__size32 param1, __size32 param2);
__size32 proc_0x00401660(__size32 param1);
__size32 proc_0x00401620(unsigned char param1, union { __size32; __size32 *; } param2);
__size32 proc_0x00401570(int param1);
__size8 proc_0x00401550(union { __size32 *; __size32; } param1, union { __size32 *; __size32; } param2);
__size32 proc_0x00401690(__size32 param1, union { __size32; __size32 *; } param2);
__size32 proc_0x00401700(union { __size32; union { __size32 *; __size32; } *; } param1);

/** address: 0x00401f80 */
void proc_0x00401f80(int param1, int param2)
{
    __size32 eax; 		// r24
    int eax_1; 		// r24{0}
    int eax_2; 		// r24{0}
    int esi; 		// r30
    int esi_1; 		// r30{0}
    int esi_4; 		// r30{0}
    int local2; 		// esi{0}

    if (global_0x00407000 == 0xbb40e64e) {
        GetSystemTimeAsFileTime();
        eax_2 = GetCurrentProcessId();
        eax = GetCurrentThreadId();
        eax_1 = GetTickCount();
        esi_1 = 0 ^ eax_2 ^ eax ^ eax_1;
        QueryPerformanceCounter();
        eax = param2 ^ param1;
        esi_4 = esi_1 ^ eax;
        local2 = esi_4;
        if ((esi_1 ^ eax) != 0xbb40e64e) {
            if (((esi_1 ^ eax) & ~0xffff) == 0) {
                eax = (esi_1 ^ eax | 0x4711) * 0x10000;
                esi = esi_1 ^ eax | (esi_1 ^ eax | 0x4711) * 0x10000;
                local2 = esi;
            }
        }
        else {
            esi = 0xbb40e64f;
            local2 = esi;
        }
        esi = local2;
        global_0x00407000 = esi;
        global_0x00407004 =  ~esi;
    }
    else {
        global_0x00407004 =  ~global_0x00407000;
    }
    return;
}

/** address: 0x00401ab6 */
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
    void *esp_1; 		// r28{0}
    int esp_10; 		// r28{0}
    int esp_2; 		// r28{0}
    int esp_3; 		// r28{0}
    int esp_4; 		// r28{0}
    void *esp_5; 		// r28{0}
    int esp_8; 		// r28{0}
    int esp_9; 		// r28{0}
    void *local3; 		// esp{0}
    int local4; 		// esp_9{0}
    int local5; 		// esp_8{0}

    proc_0x00401f80(*(%esp - 20), *(%esp - 16));
    esp_1 = proc_0x00401ea0(16, ebx, esi, edi); /* Warning: also results in ebp */
    local3 = esp_1;
    if (*0x40749c == 0) {
        *(__size32*)(esp_1 - 4) = 0;
        *(__size32*)(esp_1 - 8) = 0;
        *(__size32*)(esp_1 - 12) = 1;
        *(__size32*)(esp_1 - 16) = 0;
        esp = HeapSetInformation();
        local3 = esp;
    }
    esp = local3;
    *(__size32*)(ebp - 4) = 0;
    eax = *24;
    esi = *(eax + 4);
    *(__size32*)(ebp - 28) = 0;
    for(;;) {
        esp_5 = esp;
        *(__size32*)(esp_5 - 4) = 0;
        *(__size32*)(esp_5 - 8) = esi;
        *(__size32*)(esp_5 - 12) = 0x407484;
        eax = InterlockedCompareExchange(); /* Warning: also results in edx */
        if (eax == 0) {
        }
        else {
            if (eax != esi) {
                *(__size32*)(esp_5 - 16) = 1000;
                esp = Sleep(*(esp_5 - 16));
            }
            else {
                goto bb0x401872;
            }
        }
bb0x40188a:
        if (global_0x00407474 != 1) {
            if (global_0x00407474 != 0) {
                global_0x0040713c = 1;
bb0x4018d8:
                if (global_0x00407474 == 1) {
                    *(__size32*)(esp_5 - 16) = 0x405208;
                    *(__size32*)(esp_5 - 20) = 0x405000;
                    edx = _initterm();
                    global_0x00407474 = 2;
                }
                if (*(ebp - 28) == 0) {
                    *(__size32*)(esp_5 - 16) = 0;
                    *(__size32*)(esp_5 - 20) = 0x407484;
                    edx = InterlockedExchange(*(esp_5 - 20), *(esp_5 - 16));
                }
                esp_10 = esp_5 - 12;
                local4 = esp_10;
                if (*0x4074a0 != 0) {
                    *(__size32*)(esp_5 - 16) = 0x4074a0;
                    eax = proc_0x00401dd0(*(esp_5 - 16), dl, edx, 0); /* Warning: also results in ax, cx, dl, edx */
                    ecx = *(esp_5 - 16);
                    esp_3 = esp_5 - 12;
                    local4 = esp_3;
                    if (eax != 0) {
                        *(__size32*)(esp_5 - 16) = 0;
                        *(__size32*)(esp_5 - 20) = 2;
                        *(__size32*)(esp_5 - 24) = 0;
                        (*global_0x004074a0)(ax, cx, dl, eax, ecx, edx, 0, ebp, 1, 0x407484, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), 16, 0x4060d0, pc);
                        local4 = esp_4;
                    }
                }
                esp_9 = local4;
                ecx = *0x408318;
                *(__size32*)ecx = global_0x00407124;
                *(__size32*)(esp_9 - 4) = global_0x00407124;
                *(__size32*)(esp_9 - 8) = global_0x00407128;
                *(__size32*)(esp_9 - 12) = global_0x00407120;
                eax = proc_0x00401090(); /* Warning: also results in ebx, esp, ebp */
                global_0x00407138 = eax;
                if (*0x40712c == ebx) {
                    *(__size32*)(esp + 8) = eax;
                    exit(*(esp + 8));
                }
                if (*0x40713c == ebx) {
                    _cexit();
                }
                esp += 12;
                *(__size32*)(ebp - 4) = -2;
                local5 = esp;
            }
            else {
                global_0x00407474 = 1;
                *(__size32*)(esp_5 - 16) = 0x405618;
                *(__size32*)(esp_5 - 20) = 0x40530c;
                eax = _initterm_e(); /* Warning: also results in edx */
                esp_2 = esp_5 - 12;
                local5 = esp_2;
                if (eax == 0) {
                    goto bb0x4018d8;
                }
                else {
                    *(__size32*)(ebp - 4) = -2;
                }
            }
        }
        else {
            *(__size32*)(esp_5 - 16) = 31;
            edx = _amsg_exit();
            goto bb0x4018d8;
        }
        esp_8 = local5;
        proc_0x00401ee5(ebp);
        return;
    }
bb0x401872:
    *(__size32*)(ebp - 28) = 1;
    goto bb0x40188a;
}

/** address: 0x00401ea0 */
__size32 proc_0x00401ea0(__size32 param1, __size32 param2, __size32 param3, __size32 param4)
{
    union { __size32; __size32 *; } esp; 		// r28
    __size32 local0; 		// m[esp]

    *(__size32*)(esp - param1 - 12) = param2;
    *(__size32*)(esp - param1 - 16) = param3;
    *(__size32*)(esp - param1 - 20) = param4;
    *(int*)(esp - param1 - 24) = global_0x00407000 ^ (esp + 8);
    *(__size32*)(esp - param1 - 28) = local0;
    *(__size32*)0 = (esp - 8);
    return (esp + 8);
}

/** address: 0x00401dd0 */
__size32 proc_0x00401dd0(unsigned int param1, unsigned char param2, int param3, unsigned int param4)
{
    __size16 ax; 		// r0
    __size16 cx; 		// r1
    unsigned char dl; 		// r10
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{0}
    int eax_10; 		// r24{0}
    int eax_11; 		// r24{0}
    int eax_12; 		// r24{0}
    __size32 eax_4; 		// r24{0}
    __size32 eax_7; 		// r24{0}
    int edx; 		// r26
    int esp; 		// r28
    int local3; 		// eax{0}

    eax_1 = *0;
    *(int*)0 = (esp - 20);
    eax_4 = proc_0x00401d40(0x400000, param2, param3); /* Warning: also results in ax, cx, dl, edx */
    if (eax_4 == 0) {
bb0x401e71:
        eax_12 = 0;
        *(__size32*)0 = eax_1;
        local3 = eax_12;
    }
    else {
        eax_7 = proc_0x00401d80(0x400000, param1 - 0x400000, param4); /* Warning: also results in edx */
        if (eax_7 == 0) {
            goto bb0x401e71;
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

/** address: 0x00401090 */
__size32 proc_0x00401090()
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esp; 		// r28
    int local1; 		// m[esp - 8]

    esp = proc_0x004010c0(10, (esp - 8));
    *(__size32*)(esp - 4) = 20;
    proc_0x00401150();
    ebx = proc_0x00401110(); /* Warning: also results in ebp */
    ebp = *ebp;
    return 0; /* WARNING: Also returning: ebx := ebx, ebp := ebp */
}

/** address: 0x00401ee5 */
void proc_0x00401ee5(union { __size32; __size32 *; } param1)
{
    __size32 ecx; 		// r25
    __size32 local0; 		// m[esp]

    ecx = *(param1 - 16);
    *(__size32*)0 = ecx;
    *(__size32*)param1 = local0;
    return;
}

/** address: 0x00401d40 */
__size32 proc_0x00401d40(union { __size16 *; __size32; } param1, unsigned char param2, int param3)
{
    short ax; 		// r0
    short cx; 		// r1
    unsigned char dl; 		// r10
    int eax; 		// r24
    int edx; 		// r26
    unsigned char local0; 		// param2{0}
    int local1; 		// param3{0}

    cx = (unsigned short) param1;
    local0 = param2;
    local1 = param3;
    if (*param1 == 0x5a4d) {
        eax = *(param1 + 60);
        if (*(eax + param1) != 0x4550) {
bb0x401d52:
            eax = 0;
            ax = 0;
        }
        else {
            cx = 267;
            dl =  (*(eax + param1 + 24) == 267) ? 1 : 0;
            edx = 0 >> 8 & 0xffffff | (dl);
            eax = edx;
            ax = (unsigned short) edx;
            local0 = dl;
            local1 = edx;
        }
    }
    else {
        goto bb0x401d52;
    }
    param2 = local0;
    param3 = local1;
    return eax; /* WARNING: Also returning: ax := ax, cx := cx, dl := param2, edx := param3 */
}

/** address: 0x00401d80 */
__size32 proc_0x00401d80(__size32 param1, unsigned int param2, unsigned int param3)
{
    unsigned int eax; 		// r24
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{0}
    unsigned int ebx_4; 		// r27{0}
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 edx_1; 		// r26{0}
    __size32 edx_2; 		// r26{0}
    unsigned int esi; 		// r30
    __size32 local0; 		// edx_1{0}
    unsigned int local1; 		// param3{0}
    unsigned int local2; 		// ebx{0}
    __size32 local3; 		// edx{0}
    __size32 local4; 		// edx{0}

    ecx = *(param1 + 60);
    eax = *(unsigned short*)(ecx + param1 + 20);
    esi = *(unsigned short*)(ecx + param1 + 6);
    edx = 0;
    eax = eax + ecx + param1 + 24;
    local0 = edx;
    local1 = param3;
    local3 = edx;
    if (esi == 0) {
bb0x401dbd:
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
bb0x401db5:
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
                    goto bb0x401db5;
                }
                edx = local4;
                return eax; /* WARNING: Also returning: edx := edx */
            }
            goto bb0x401db5;
        } while (edx_1 + 1 < esi);
        goto bb0x401dbd;
    }
    edx = local4;
    return eax; /* WARNING: Also returning: edx := edx */
}

/** address: 0x004010c0 */
void proc_0x004010c0(__size32 param1, union { __size32; __size32 *; } param2)
{
    *(__size32*)param2 = param1;
    proc_0x00401190(?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A, 0x405830);
    ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z();
    return;
}

/** address: 0x00401150 */
void proc_0x00401150()
{
    ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@H@Z();
    ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z();
    return;
}

/** address: 0x00401110 */
__size32 proc_0x00401110()
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27

    ebx = proc_0x00401190(?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A, 0x405848); /* Warning: also results in ebp */
    ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z();
    ebp = *ebp;
    return ebx; /* WARNING: Also returning: ebp := ebp */
}

/** address: 0x00401190 */
__size32 proc_0x00401190(union { __size32 *; __size32; } param1, __size32 param2)
{
    unsigned char al; 		// r8
    __size32 eax; 		// r24
    unsigned int eax_1; 		// r24{0}
    __size32 eax_2; 		// r24{0}
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    int local1; 		// m[esp - 16]

    *(int*)0 = (esp - 16);
    eax_1 = proc_0x00401530(param2);
    eax_2 = ?width@ios_base@std@@QBE_JXZ(); /* Warning: also results in edx */
    if (edx < 0 || edx <= 0 && eax_2 <= 0) {
bb0x401244:
    }
    else {
        eax = ?width@ios_base@std@@QBE_JXZ(); /* Warning: also results in edx */
        if (edx < 0 || edx <= 0 && eax <= eax_1) {
            goto bb0x401244;
        }
        else {
            ?width@ios_base@std@@QBE_JXZ();
        }
    }
    esp = proc_0x00401580(param1, (esp - 52)); /* Warning: also results in ebp */
    eax = proc_0x00401660(ebp - 48); /* Warning: also results in esp */
    if (eax != -1) {
        *(__size32*)(ebp - 4) = 0;
        eax = ?flags@ios_base@std@@QBEHXZ(); /* Warning: also results in esp */
        if ((eax & 0x1c0) != 64) {
            while ( ~(*(ebp - 36) < 0 || *(ebp - 36) <= 0 && *(ebp - 40) <= 0)) {
                eax = *(ebp + 8);
                ?fill@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDXZ();
                *(unsigned int*)(esp - 4) = ((unsigned char) eax);
                ?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
                eax = ?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHD@Z();
                *(int*)(ebp - 52) = eax;
                eax = proc_0x00401570(eax);
                *(__size32*)(ebp - 56) = eax;
                *(__size32*)(esp - 8) = ebp - 52;
                *(__size32*)(esp - 12) = ebp - 56;
                al = proc_0x00401550(*(esp - 12), *(esp - 8));
                esp -= 4;
                if ((al) == 0) {
                    ecx = *(ebp - 40);
                    edx = *(ebp - 36);
                    *(int*)(ebp - 40) = ecx - 1;
                    *(int*)(ebp - 36) = edx - (ecx < 1);
                }
                else {
                    eax = *(ebp - 20);
                    *(int*)(ebp - 20) = eax | 4;
                    goto bb0x40132c;
                }
            }
        }
bb0x40132c:
        if (*(ebp - 20) == 0) {
            ecx = *(ebp - 28);
            *(__size32*)(esp - 4) = ecx;
            edx = *(ebp - 32);
            *(__size32*)(esp - 8) = edx;
            eax = *(ebp + 12);
            *(__size32*)(esp - 12) = eax;
            ?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
            eax = ?sputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAE_JPBD_J@Z(); /* Warning: also results in edx, esp */
            *(__size32*)(ebp - 100) = eax;
            *(unsigned int*)(ebp - 96) = edx;
            eax = *(ebp - 100);
            if (eax != *(ebp - 32)) {
bb0x40136d:
                edx = *(ebp - 20);
                *(int*)(ebp - 20) = edx | 4;
            }
            else {
                ecx = *(ebp - 96);
                if (ecx != *(ebp - 28)) {
                    goto bb0x40136d;
                }
            }
        }
        if (*(ebp - 20) == 0) {
            while ( ~(*(ebp - 36) < 0 || *(ebp - 36) <= 0 && *(ebp - 40) <= 0)) {
                edx = *(ebp + 8);
                eax = *edx;
                ?fill@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDXZ();
                *(unsigned int*)(esp - 4) = ((unsigned char) eax);
                ?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
                eax = ?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHD@Z();
                *(int*)(ebp - 60) = eax;
                eax = proc_0x00401570(eax);
                *(__size32*)(ebp - 64) = eax;
                *(__size32*)(esp - 8) = ebp - 60;
                *(__size32*)(esp - 12) = ebp - 64;
                al = proc_0x00401550(*(esp - 12), *(esp - 8));
                esp -= 4;
                if ((al) == 0) {
                    eax = *(ebp - 40);
                    ecx = *(ebp - 36);
                    *(int*)(ebp - 40) = eax - 1;
                    *(int*)(ebp - 36) = ecx - (eax < 1);
                }
                else {
                    ecx = *(ebp - 20);
                    *(int*)(ebp - 20) = ecx | 4;
                    goto bb0x4013fb;
                }
            }
        }
bb0x4013fb:
        *(__size32*)(esp - 4) = 0;
        *(__size32*)(esp - 8) = 0;
        esp = ?width@ios_base@std@@QAE_J_J@Z();
        *(__size32*)(ebp - 4) = -1;
    }
    else {
        ecx = *(ebp - 20);
        *(int*)(ebp - 20) = ecx | 4;
    }
    *(__size32*)(esp - 4) = 0;
    eax = *(ebp - 20);
    *(__size32*)(esp - 8) = eax;
    ?setstate@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEXH_N@Z();
    eax = *(ebp + 8);
    *(__size32*)(ebp - 68) = eax;
    esp = proc_0x00401620((unsigned char) eax, ebp - 48); /* Warning: also results in ebp */
    ecx = *(ebp - 12);
    *(__size32*)0 = ecx;
    ebx = *(esp + 12);
    ebp = *ebp;
    return ebx; /* WARNING: Also returning: ebp := ebp */
}

/** address: 0x00401530 */
__size32 proc_0x00401530(union { char[] *; __size32; } param1)
{
    int eax; 		// r24

    eax = strlen(param1);
    return eax;
}

/** address: 0x00401580 */
__size32 proc_0x00401580(__size32 param1, __size32 param2)
{
    __size32 eax; 		// r24
    union { __size32; __size32 *; } ebp; 		// r29
    int ecx; 		// r25

    ebp = proc_0x00401690(param1, param2);
    ?good@ios_base@std@@QBE_NXZ();
    if (((unsigned char) param1) != 0) {
        eax = ?tie@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_ostream@DU?$char_traits@D@std@@@2@XZ();
        if (eax != 0) {
            ?tie@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_ostream@DU?$char_traits@D@std@@@2@XZ();
            ?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@XZ();
        }
    }
    eax = *(ebp + 8);
    ?good@ios_base@std@@QBE_NXZ();
    ecx = *(ebp - 4);
    *(__size8*)(ecx + 4) = (unsigned char) eax;
    ebp = *ebp;
    return ebp;
}

/** address: 0x00401660 */
__size32 proc_0x00401660(__size32 param1)
{
    unsigned int eax; 		// r24

    eax = *(unsigned char*)(param1 + 4);
    return (eax != 0) - 1;
}

/** address: 0x00401620 */
__size32 proc_0x00401620(unsigned char param1, union { __size32; __size32 *; } param2)
{
    __size32 ebp; 		// r29

    ?uncaught_exception@std@@YA_NXZ();
    if ((param1) == 0) {
        ?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ();
    }
    ebp = proc_0x00401700(param2);
    ebp = *ebp;
    return ebp;
}

/** address: 0x00401570 */
__size32 proc_0x00401570(int param1)
{
    return param1 | -1;
}

/** address: 0x00401550 */
__size8 proc_0x00401550(union { __size32 *; __size32; } param1, union { __size32 *; __size32; } param2)
{
    unsigned char al; 		// r8
    __size32 edx; 		// r26

    edx = *param1;
    al =  (edx == *param2) ? 1 : 0;
    return al;
}

/** address: 0x00401690 */
__size32 proc_0x00401690(__size32 param1, union { __size32; __size32 *; } param2)
{
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{0}
    union { __size32; __size32 *; } eax_4; 		// r24{0}
    __size32 eax_7; 		// r24{0}
    __size32 ebp; 		// r29
    __size32 ebp_1; 		// r29{0}
    int ecx; 		// r25
    __size32 ecx_1; 		// r25{0}
    int edx; 		// r26
    int esp; 		// r28
    union { __size32 *; __size32; } local5; 		// ebp{0}

    ebp_1 = esp - 4;
    *(__size32*)param2 = param1;
    eax = ?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
    local5 = ebp_1;
    if (eax != 0) {
        edx = *param2;
        eax_1 = *edx;
        ecx_1 = *param2;
        ecx = ecx_1 + *(eax_1 + 4);
        eax_4 = ?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
        eax_7 = *eax_4;
        edx = *(eax_7 + 4);
        (*edx)(eax_7, eax_4, edx, esp - 4, ADDFLAGS32(ecx_1, *(eax_1 + 4), ecx), ADDFLAGS32(ecx_1, *(eax_1 + 4), ecx), ADDFLAGS32(ecx_1, *(eax_1 + 4), ecx), param1, ebp, param2, eax_4, pc);
        local5 = ebp;
    }
    ebp = local5;
    ebp = *ebp;
    return ebp;
}

/** address: 0x00401700 */
__size32 proc_0x00401700(union { __size32; union { __size32 *; __size32; } *; } param1)
{
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{0}
    union { __size32; __size32 *; } eax_4; 		// r24{0}
    __size32 eax_7; 		// r24{0}
    __size32 ebp; 		// r29
    __size32 ebp_1; 		// r29{0}
    int ecx; 		// r25
    __size32 ecx_1; 		// r25{0}
    int edx; 		// r26
    int esp; 		// r28
    union { __size32 *; __size32; } local4; 		// ebp{0}

    ebp_1 = esp - 4;
    eax = ?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
    local4 = ebp_1;
    if (eax != 0) {
        edx = *param1;
        eax_1 = *edx;
        ecx_1 = *param1;
        ecx = ecx_1 + *(eax_1 + 4);
        eax_4 = ?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ();
        eax_7 = *eax_4;
        edx = *(eax_7 + 8);
        (*edx)(eax_7, eax_4, edx, esp - 4, ADDFLAGS32(ecx_1, *(eax_1 + 4), ecx), ADDFLAGS32(ecx_1, *(eax_1 + 4), ecx), ADDFLAGS32(ecx_1, *(eax_1 + 4), ecx), ebp, param1, eax_4, pc);
        local4 = ebp;
    }
    ebp = local4;
    ebp = *ebp;
    return ebp;
}


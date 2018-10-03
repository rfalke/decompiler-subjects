int global_0x00405058 = 0xbb40e64e;
__size32 global_0x0040505c = 0x44bf19b1;// 4 bytes
__size32 global_0x00405170 = 0;// 4 bytes
__size32 global_0x00405174 = 0;// 4 bytes
__size32 global_0x00405178 = 0;// 4 bytes
__size32 global_0x00405188 = 0;// 4 bytes
__size32 global_0x0040518c = 0;// 4 bytes
int global_0x004054c4;
void global_0x004054f0;
void proc_0x00401870(int param1, int param2);
__size32 proc_0x00401790(__size32 param1, __size32 param2, __size32 param3, __size32 param4);
void __imp_?terminate@@YAXXZ();
void proc_0x004017d5(union { __size32; __size32 *; } param1);
void proc_0x00401497(__size32 param3, __size32 param4, __size32 param3, __size32 param4);
void proc_0x004013ee(__size32 param1, __size32 param2, __size32 param3);
void _start();
__size32 proc_0x004016c0(unsigned int param1, unsigned char param2, int param3, unsigned int param4);
void proc_0x00401060();
__size32 proc_0x00401630(union { __size16 *; __size32; } param1, unsigned char param2, int param3);
__size32 proc_0x00401670(__size32 param1, unsigned int param2, unsigned int param3);

/** address: 0x00401870 */
void proc_0x00401870(int param1, int param2)
{
    __size32 eax; 		// r24
    int eax_1; 		// r24{0}
    int eax_2; 		// r24{0}
    int esi; 		// r30
    int esi_1; 		// r30{0}
    int esi_4; 		// r30{0}
    int local2; 		// esi{0}

    if (global_0x00405058 == 0xbb40e64e) {
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
        global_0x00405058 = esi;
        global_0x0040505c =  ~esi;
    }
    else {
        global_0x0040505c =  ~global_0x00405058;
    }
    return;
}

/** address: 0x00401790 */
__size32 proc_0x00401790(__size32 param1, __size32 param2, __size32 param3, __size32 param4)
{
    union { __size32; __size32 *; } esp; 		// r28
    __size32 local0; 		// m[esp]

    *(__size32*)(esp - param1 - 12) = param2;
    *(__size32*)(esp - param1 - 16) = param3;
    *(__size32*)(esp - param1 - 20) = param4;
    *(int*)(esp - param1 - 24) = global_0x00405058 ^ (esp + 8);
    *(__size32*)(esp - param1 - 28) = local0;
    *(__size32*)0 = (esp - 8);
    return esp - 8; /* WARNING: Also returning: ebp := (esp + 8) */
}

/** address: 0x0040190c */
void __imp_?terminate@@YAXXZ()
{
    ?terminate@@YAXXZ();
    return;
}

/** address: 0x004017d5 */
void proc_0x004017d5(union { __size32; __size32 *; } param1)
{
    __size32 ecx; 		// r25
    __size32 local0; 		// m[esp]

    ecx = *(param1 - 16);
    *(__size32*)0 = ecx;
    *(__size32*)param1 = local0;
    return;
}

/** address: 0x00401497 */
void proc_0x00401497(__size32 param3, __size32 param4, __size32 param3, __size32 param4)
{
    if (*(param4 - 28) == 0) {
        proc_0x004013ee(param3, param3, param4);
    }
    return;
}

/** address: 0x004013ee */
void proc_0x004013ee(__size32 param1, __size32 param2, __size32 param3)
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    unsigned int ecx_1; 		// r25{0}
    int ecx_4; 		// r25{0}
    __size32 edi; 		// r31
    __size32 esi; 		// r30
    __size32 esp_1; 		// r28{0}
    __size32 esp_2; 		// r28{0}
    __size32 esp_3; 		// r28{0}
    __size32 esp_6; 		// r28{0}
    __size32 local3; 		// param1{0}
    __size32 local4; 		// esp_3{0}
    __size32 local5; 		// param2{0}
    __size32 local6; 		// param3{0}

    eax = proc_0x00401790(20, param1, param2, param3); /* Warning: also results in esp_1, ebp */
    local3 = param1;
    local4 = esp_1;
    local5 = param2;
    local6 = param3;
    *(__size32*)(ebp - 4) = 0;
    param1 = local3;
    esp_3 = local4;
    param2 = local5;
    param3 = local6;
    *(__size32*)(ebp + 16)--;
    while (*(ebp + 16) >= 0) {
        ecx_1 = *(ebp + 8);
        ecx_4 = ecx_1 - *(ebp + 12);
        *(int*)(ebp + 8) = ecx_4;
        (**(ebp + 20))(eax, ecx_4, param1, ebp, param2, param3, SUBFLAGS32(ecx_1, *(ebp + 12), ecx_4), ecx_4 == 0, ecx_1 < *(ebp + 12), *(esp_6 - 4), *(esp_6 - 8), *(esp_6 - 12));
        local3 = ebx;
        local4 = esp_2;
        local5 = esi;
        local6 = edi;
        param1 = local3;
        esp_3 = local4;
        param2 = local5;
        param3 = local6;
        *(__size32*)(ebp + 16)--;
    }
    *(__size32*)(ebp - 4) = -2;
    proc_0x004017d5(ebp);
    return;
}

/** address: 0x004013cc */
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
    void *esp_1; 		// r28{0}
    __size32 esp_12; 		// r28{0}
    __size32 esp_13; 		// r28{0}
    __size32 esp_16; 		// r28{0}
    union { void *; __size32; } esp_4; 		// r28{0}
    __size32 esp_5; 		// r28{0}
    __size32 esp_6; 		// r28{0}
    __size32 esp_7; 		// r28{0}
    __size32 esp_8; 		// r28{0}
    union { void *; __size32; } esp_9; 		// r28{0}
    int local10; 		// %ZF{0}
    int local11; 		// %CF{0}
    int local13; 		// %CF{0}
    int local14; 		// %CF{0}
    union { __size32; void *; } local15; 		// esp_9{0}
    __size32 local16; 		// esp_6{0}
    __size32 local17; 		// esp_13{0}
    int local18; 		// %flags{0}
    int local19; 		// %ZF{0}
    int local20; 		// %CF{0}
    int local3; 		// %flags{0}
    int local5; 		// %flags{0}
    int local6; 		// %flags{0}
    int local7; 		// %ZF{0}
    int local9; 		// %ZF{0}

    proc_0x00401870(*(%esp - 20), *(%esp - 16));
    esp_1 = proc_0x00401790(16, ebx, esi, edi); /* Warning: also results in ebp */
    local15 = esp_1;
    ebx = 0;
    if (*0x4054ec == 0) {
        *(__size32*)(esp_1 - 4) = 0;
        *(__size32*)(esp_1 - 8) = 0;
        *(__size32*)(esp_1 - 12) = 1;
        *(__size32*)(esp_1 - 16) = 0;
        esp_4 = HeapSetInformation();
        local15 = esp_4;
    }
    esp_9 = local15;
    *(__size32*)(ebp - 4) = 0;
    eax = *24;
    esi = *(eax + 4);
    *(__size32*)(ebp - 28) = 0;
    edi = 0x4054d4;
    local16 = esp_9;
    for(;;) {
        esp_6 = local16;
        *(__size32*)(esp_6 - 4) = 0;
        *(__size32*)(esp_6 - 8) = esi;
        *(__size32*)(esp_6 - 12) = 0x4054d4;
        eax = InterlockedCompareExchange(); /* Warning: also results in edx */
        if (eax == 0) {
        }
        else {
            if (eax != esi) {
                *(__size32*)(esp_6 - 16) = 1000;
                esp_5 = Sleep(*(esp_6 - 16));
                local16 = esp_5;
            }
            else {
                goto bb0x401188;
            }
        }
bb0x4011a0:
        esi = 1;
        if (global_0x004054c4 == 1) {
            *(__size32*)(esp_6 - 16) = 31;
            edx = _amsg_exit();
bb0x4011ee:
            if (global_0x004054c4 == 1) {
                *(__size32*)(esp_6 - 16) = 0x403208;
                *(__size32*)(esp_6 - 20) = 0x403000;
                edx = _initterm();
                global_0x004054c4 = 2;
            }
            if (*(ebp - 28) == 0) {
                *(__size32*)(esp_6 - 16) = 0;
                *(__size32*)(esp_6 - 20) = 0x4054d4;
                edx = InterlockedExchange(*(esp_6 - 20), *(esp_6 - 16));
            }
            esp_12 = esp_6 - 12;
            local3 = SUBFLAGS32(*0x4054f0, 0, global_0x004054f0[0]);
            local17 = esp_12;
            local18 = local3;
            local19 = local7;
            local20 = local11;
            if (*0x4054f0 != 0) {
                *(__size32*)(esp_6 - 16) = 0x4054f0;
                eax = proc_0x004016c0(*(esp_6 - 16), dl, edx, 0); /* Warning: also results in ax, cx, dl, edx */
                ecx = *(esp_6 - 16);
                esp_7 = esp_6 - 12;
                local5 = LOGICALFLAGS32(eax);
                local17 = esp_7;
                local18 = local5;
                local19 = local9;
                local20 = local13;
                if (eax != 0) {
                    *(__size32*)(esp_6 - 16) = 0;
                    *(__size32*)(esp_6 - 20) = 2;
                    *(__size32*)(esp_6 - 24) = 0;
                    (*global_0x004054f0)(ax, cx, dl, eax, ecx, edx, 0, ebp, 1, 0x4054d4, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), 16, 0x404148, pc);
                    local17 = esp_8;
                    local18 = local6;
                    local19 = local10;
                    local20 = local14;
                }
            }
            esp_13 = local17;
            flags = local18;
            ZF = local19;
            CF = local20;
            ecx = *0x406218;
            *(__size32*)ecx = global_0x00405174;
            *(__size32*)(esp_13 - 4) = global_0x00405174;
            *(__size32*)(esp_13 - 8) = global_0x00405178;
            *(__size32*)(esp_13 - 12) = global_0x00405170;
            proc_0x00401060(ax, cx, dl, global_0x00405174, ecx, edx, ebx, ebp, esi, edi, flags, ZF, CF, *(esp_16 - 4), *(esp_16 - 8), *(esp_16 - 12));
        }
        if (global_0x004054c4 != 0) {
            global_0x0040518c = 1;
            goto bb0x4011ee;
        }
        global_0x004054c4 = 1;
        *(__size32*)(esp_6 - 16) = 0x403618;
        *(__size32*)(esp_6 - 20) = 0x40330c;
        eax = _initterm_e(); /* Warning: also results in edx */
        if (eax == 0) {
            goto bb0x4011ee;
        }
        *(__size32*)(ebp - 4) = -2;
        proc_0x004017d5(%ebp);
        return;
    }
bb0x401188:
    *(__size32*)(ebp - 28) = 1;
    goto bb0x4011a0;
}

/** address: 0x004016c0 */
__size32 proc_0x004016c0(unsigned int param1, unsigned char param2, int param3, unsigned int param4)
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
    eax_4 = proc_0x00401630(0x400000, param2, param3); /* Warning: also results in ax, cx, dl, edx */
    if (eax_4 == 0) {
bb0x401761:
        eax_12 = 0;
        *(__size32*)0 = eax_1;
        local3 = eax_12;
    }
    else {
        eax_7 = proc_0x00401670(0x400000, param1 - 0x400000, param4); /* Warning: also results in edx */
        if (eax_7 == 0) {
            goto bb0x401761;
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

/** address: 0x00401060 */
void proc_0x00401060()
{
    union { __size32; __size32 *; } eax; 		// r24

    eax = ??2@YAPAXI@Z();
    if (eax == 0) {
        eax = 0;
bb0x401078:
/* goto m[m[eax]] */
    }
    *(__size32*)eax = 0x40374c;
    goto bb0x401078;
}

/** address: 0x00401630 */
__size32 proc_0x00401630(union { __size16 *; __size32; } param1, unsigned char param2, int param3)
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
bb0x401642:
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
        goto bb0x401642;
    }
    param2 = local0;
    param3 = local1;
    return eax; /* WARNING: Also returning: ax := ax, cx := cx, dl := param2, edx := param3 */
}

/** address: 0x00401670 */
__size32 proc_0x00401670(__size32 param1, unsigned int param2, unsigned int param3)
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
bb0x4016ad:
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
bb0x4016a5:
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
                    goto bb0x4016a5;
                }
                edx = local4;
                return eax; /* WARNING: Also returning: edx := edx */
            }
            goto bb0x4016a5;
        } while (edx_1 + 1 < esi);
        goto bb0x4016ad;
    }
    edx = local4;
    return eax; /* WARNING: Also returning: edx := edx */
}


int global_0x00405058 = 0xbb40e64e;
__size32 global_0x0040505c = 0x44bf19b1;// 4 bytes
__size32 global_0x00405170 = 0;// 4 bytes
__size32 global_0x00405174 = 0;// 4 bytes
__size32 global_0x00405178 = 0;// 4 bytes
__size32 global_0x00405188 = 0;// 4 bytes
__size32 global_0x0040518c = 0;// 4 bytes
int global_0x004054c4;
void global_0x004054f0;
void proc_0x00401940(int param1, int param2);
__size32 proc_0x00401860(__size32 param1, __size32 param2, __size32 param3, __size32 param4);
void __imp_?terminate@@YAXXZ();
void proc_0x004018a5(union { __size32; __size32 *; } param1);
void proc_0x0040156f(__size32 param3, __size32 param4, __size32 param3, __size32 param4);
void proc_0x004014c6(__size32 param1, __size32 param2, __size32 param3);
void _start();
__size32 proc_0x00401790(unsigned int param1, unsigned char param2, int param3, unsigned int param4);
__size32 proc_0x004010a0();
__size32 proc_0x00401700(union { __size16 *; __size32; } param1, unsigned char param2, int param3);
__size32 proc_0x00401740(__size32 param1, unsigned int param2, unsigned int param3);
__size32 proc_0x00401070(union { __size32; __size32 *; } param1);
__size32 proc_0x00401040(union { __size32; __size32 *; } param1);

/** address: 0x00401940 */
void proc_0x00401940(int param1, int param2)
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

/** address: 0x00401860 */
__size32 proc_0x00401860(__size32 param1, __size32 param2, __size32 param3, __size32 param4)
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

/** address: 0x004019dc */
void __imp_?terminate@@YAXXZ()
{
    ?terminate@@YAXXZ();
    return;
}

/** address: 0x004018a5 */
void proc_0x004018a5(union { __size32; __size32 *; } param1)
{
    __size32 ecx; 		// r25
    __size32 local0; 		// m[esp]

    ecx = *(param1 - 16);
    *(__size32*)0 = ecx;
    *(__size32*)param1 = local0;
    return;
}

/** address: 0x0040156f */
void proc_0x0040156f(__size32 param3, __size32 param4, __size32 param3, __size32 param4)
{
    if (*(param4 - 28) == 0) {
        proc_0x004014c6(param3, param3, param4);
    }
    return;
}

/** address: 0x004014c6 */
void proc_0x004014c6(__size32 param1, __size32 param2, __size32 param3)
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

    eax = proc_0x00401860(20, param1, param2, param3); /* Warning: also results in esp_1, ebp */
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
    proc_0x004018a5(ebp);
    return;
}

/** address: 0x004014a4 */
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
    __size32 esp_1; 		// r28{0}
    __size32 esp_2; 		// r28{0}
    __size32 local0; 		// m[esp - 4]
    int local1; 		// m[esp - 8]
    unsigned int local2; 		// m[esp - 12]
    __size32 local3; 		// esp{0}

    proc_0x00401940(*(%esp - 20), *(%esp - 16));
    esp = proc_0x00401860(16, ebx, esi, edi); /* Warning: also results in ebp */
    if (*0x4054ec == 0) {
        local0 = 0;
        local1 = 0;
        local2 = 1;
        *(__size32*)(esp - 16) = 0;
        esp = HeapSetInformation();
    }
    *(__size32*)(ebp - 4) = 0;
    eax = *24;
    esi = *(eax + 4);
    *(__size32*)(ebp - 28) = 0;
    for(;;) {
        esp_1 = esp;
        *(__size32*)(esp_1 - 4) = 0;
        *(__size32*)(esp_1 - 8) = esi;
        *(__size32*)(esp_1 - 12) = 0x4054d4;
        eax = InterlockedCompareExchange(); /* Warning: also results in edx */
        if (eax == 0) {
        }
        else {
            if (eax != esi) {
                *(__size32*)(esp_1 - 16) = 1000;
                esp = Sleep(*(esp_1 - 16));
            }
            else {
                goto bb0x401260;
            }
        }
bb0x401278:
        if (global_0x004054c4 != 1) {
            if (global_0x004054c4 != 0) {
                global_0x0040518c = 1;
bb0x4012c6:
                if (global_0x004054c4 == 1) {
                    *(__size32*)(esp_1 - 16) = 0x403208;
                    *(__size32*)(esp_1 - 20) = 0x403000;
                    edx = _initterm();
                    global_0x004054c4 = 2;
                }
                if (*(ebp - 28) == 0) {
                    *(__size32*)(esp_1 - 16) = 0;
                    *(__size32*)(esp_1 - 20) = 0x4054d4;
                    edx = InterlockedExchange(*(esp_1 - 20), *(esp_1 - 16));
                }
                esp = esp_1 - 12;
                local3 = esp;
                if (*0x4054f0 != 0) {
                    *(__size32*)(esp_1 - 16) = 0x4054f0;
                    eax = proc_0x00401790(*(esp_1 - 16), dl, edx, 0); /* Warning: also results in ax, cx, dl, edx */
                    ecx = *(esp_1 - 16);
                    esp_2 = esp_1 - 12;
                    local3 = esp_2;
                    if (eax != 0) {
                        *(__size32*)(esp_1 - 16) = 0;
                        *(__size32*)(esp_1 - 20) = 2;
                        *(__size32*)(esp_1 - 24) = 0;
                        (*global_0x004054f0)(ax, cx, dl, eax, ecx, edx, 0, ebp, 1, 0x4054d4, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), 16, 0x404148, pc);
                        local3 = esp;
                    }
                }
                esp = local3;
                ecx = *0x406214;
                *(__size32*)ecx = global_0x00405174;
                local0 = global_0x00405174;
                local1 = global_0x00405178;
                local2 = global_0x00405170;
                eax = proc_0x004010a0(); /* Warning: also results in ebx, esp, ebp */
                global_0x00405188 = eax;
                if (*0x40517c == ebx) {
                    *(__size32*)(esp + 8) = eax;
                    exit(*(esp + 8));
                }
                if (*0x40518c == ebx) {
                    _cexit();
                }
                esp += 12;
                *(__size32*)(ebp - 4) = -2;
            }
            else {
                global_0x004054c4 = 1;
                *(__size32*)(esp_1 - 16) = 0x403618;
                *(__size32*)(esp_1 - 20) = 0x40330c;
                eax = _initterm_e(); /* Warning: also results in edx */
                esp = esp_1 - 12;
                if (eax == 0) {
                    goto bb0x4012c6;
                }
                else {
                    *(__size32*)(ebp - 4) = -2;
                }
            }
        }
        else {
            *(__size32*)(esp_1 - 16) = 31;
            edx = _amsg_exit();
            goto bb0x4012c6;
        }
        proc_0x004018a5(ebp);
        return;
    }
bb0x401260:
    *(__size32*)(ebp - 28) = 1;
    goto bb0x401278;
}

/** address: 0x00401790 */
__size32 proc_0x00401790(unsigned int param1, unsigned char param2, int param3, unsigned int param4)
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
    eax_4 = proc_0x00401700(0x400000, param2, param3); /* Warning: also results in ax, cx, dl, edx */
    if (eax_4 == 0) {
bb0x401831:
        eax_12 = 0;
        *(__size32*)0 = eax_1;
        local3 = eax_12;
    }
    else {
        eax_7 = proc_0x00401740(0x400000, param1 - 0x400000, param4); /* Warning: also results in edx */
        if (eax_7 == 0) {
            goto bb0x401831;
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

/** address: 0x004010a0 */
__size32 proc_0x004010a0()
{
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{0}
    union { __size32; __size32 *; } eax_10; 		// r24{0}
    __size32 eax_11; 		// r24{0}
    __size32 eax_12; 		// r24{0}
    __size32 eax_13; 		// r24{0}
    union { __size32; __size32 *; } eax_14; 		// r24{0}
    union { __size32; __size32 *; } eax_15; 		// r24{0}
    __size32 eax_2; 		// r24{0}
    __size32 eax_3; 		// r24{0}
    union { __size32; __size32 *; } eax_4; 		// r24{0}
    union { __size32; __size32 *; } eax_5; 		// r24{0}
    __size32 eax_6; 		// r24{0}
    __size32 eax_7; 		// r24{0}
    __size32 eax_8; 		// r24{0}
    union { __size32; __size32 *; } eax_9; 		// r24{0}
    __size32 ebp; 		// r29
    __size32 ebp_1; 		// r29{0}
    __size32 ebp_2; 		// r29{0}
    __size32 ebp_3; 		// r29{0}
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{0}
    __size32 ebx_2; 		// r27{0}
    union { __size32; __size32 *; } ebx_3; 		// r27{0}
    union { __size32; __size32 *; } ebx_4; 		// r27{0}
    union { __size32; __size32 *; } ebx_5; 		// r27{0}
    __size32 ebx_6; 		// r27{0}
    __size32 ebx_7; 		// r27{0}
    int ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edi_1; 		// r31{0}
    __size32 edi_2; 		// r31{0}
    __size32 edi_3; 		// r31{0}
    int edx; 		// r26
    __size32 esi; 		// r30
    __size32 esi_1; 		// r30{0}
    __size32 esi_2; 		// r30{0}
    __size32 esi_3; 		// r30{0}
    int esp; 		// r28
    __size32 esp_1; 		// r28{0}
    __size32 esp_2; 		// r28{0}
    __size32 esp_3; 		// r28{0}
    __size32 local0; 		// m[esp - 4]
    __size32 local1; 		// m[esp - 8]
    int local10; 		// m[esp - 12]{0}
    int local11; 		// m[esp - 12]{0}
    int local12; 		// m[esp - 16]{0}
    int local13; 		// m[esp - 16]{0}
    int local14; 		// m[esp - 20]{0}
    int local15; 		// m[esp - 20]{0}
    int local16; 		// m[esp - 24]{0}
    int local17; 		// m[esp - 24]{0}
    int local18; 		// %flags{0}
    int local19; 		// %flags{0}
    __size32 local2; 		// m[esp - 12]
    int local20; 		// %flags{0}
    int local21; 		// %flags{0}
    int local22; 		// %flags{0}
    int local23; 		// %flags{0}
    int local24; 		// %flags{0}
    int local25; 		// %flags{0}
    int local26; 		// %ZF{0}
    int local27; 		// %ZF{0}
    int local28; 		// %ZF{0}
    int local29; 		// %ZF{0}
    __size32 local3; 		// m[esp - 16]
    int local30; 		// %ZF{0}
    int local31; 		// %ZF{0}
    int local32; 		// %ZF{0}
    int local33; 		// %ZF{0}
    int local34; 		// %CF{0}
    int local35; 		// %CF{0}
    int local36; 		// %CF{0}
    int local37; 		// %CF{0}
    int local38; 		// %CF{0}
    int local39; 		// %CF{0}
    unsigned int local4; 		// m[esp - 20]
    int local40; 		// %CF{0}
    int local41; 		// %CF{0}
    __size32 local42; 		// ebp_3{0}
    union { __size32 *; __size32; } local43; 		// ebx_3{0}
    __size32 local44; 		// edi_3{0}
    __size32 local45; 		// esi_3{0}
    int local46; 		// local20{0}
    int local47; 		// local28{0}
    int local48; 		// local36{0}
    unsigned int local5; 		// m[esp - 24]
    int local6; 		// m[esp - 4]{0}
    int local7; 		// m[esp - 4]{0}
    int local8; 		// m[esp - 8]{0}
    int local9; 		// m[esp - 8]{0}

    eax = ??2@YAPAXI@Z();
    if (eax == 0) {
        ebp_2 = 0;
        local42 = ebp_2;
    }
    else {
        eax = proc_0x00401070(eax);
        ebp_1 = eax;
        local42 = ebp_1;
    }
    ebp_3 = local42;
    eax = ??2@YAPAXI@Z();
    if (eax == 0) {
        ebx_2 = 0;
        local43 = ebx_2;
    }
    else {
        eax = proc_0x00401040(eax);
        ebx_1 = eax;
        local43 = ebx_1;
    }
    ebx_3 = local43;
    eax = ??2@YAPAXI@Z();
    if (eax == 0) {
        edi_2 = 0;
        local44 = edi_2;
    }
    else {
        eax = proc_0x00401070(eax);
        edi_1 = eax;
        local44 = edi_1;
    }
    edi_3 = local44;
    eax = ??2@YAPAXI@Z();
    local18 = LOGICALFLAGS32(eax);
    local46 = local18;
    local47 = local26;
    local48 = local34;
    if (eax == 0) {
        esi_2 = 0;
        local22 = LOGICALFLAGS32(0);
        local45 = esi_2;
        local46 = local22;
        local47 = local30;
        local48 = local38;
    }
    else {
        eax = proc_0x00401040(eax);
        esi_1 = eax;
        local45 = esi_1;
    }
    esi_3 = local45;
    local20 = local46;
    local28 = local47;
    local36 = local48;
    eax = *ebx_3;
    edx = *eax;
    (*edx)(eax, ebx_3, edx, ebx_3, ebp_3, esi_3, edi_3, local20, local28, local36, ebx_6, ebp, esi, edi, pc, pc);
    eax_4 = *esi;
    edx = *eax_4;
    (*edx)(eax_4, esi, edx, eax_1, ebp, esi, edi, <all>, local24, local32, local40, local6, local8, local10, local12, local14, local16);
    eax_9 = *edi;
    edx = *eax_9;
    (*edx)(eax_9, edi, edx, ebx, ebp, ebx + eax_6, edi, <all>, local25, local33, local41, local7, local9, local11, local13, local15, local17);
    eax_14 = *ebp;
    edx = *eax_14;
    (*edx)(eax_14, ebp, edx, ebx, ebp, esi + eax_11, edi, <all>, ADDFLAGS32(esi, eax_11, esi + eax_11), ADDFLAGS32(esi, eax_11, esi + eax_11), ADDFLAGS32(esi, eax_11, esi + eax_11), local0, local1, local2, local3, local4, local5);
    ebp = *(esp + 8);
    ebx = *(esp + 12);
    return eax + esi; /* WARNING: Also returning: ebx := ebx, ebp := ebp */
}

/** address: 0x00401700 */
__size32 proc_0x00401700(union { __size16 *; __size32; } param1, unsigned char param2, int param3)
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
bb0x401712:
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
        goto bb0x401712;
    }
    param2 = local0;
    param3 = local1;
    return eax; /* WARNING: Also returning: ax := ax, cx := cx, dl := param2, edx := param3 */
}

/** address: 0x00401740 */
__size32 proc_0x00401740(__size32 param1, unsigned int param2, unsigned int param3)
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
bb0x40177d:
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
bb0x401775:
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
                    goto bb0x401775;
                }
                edx = local4;
                return eax; /* WARNING: Also returning: edx := edx */
            }
            goto bb0x401775;
        } while (edx_1 + 1 < esi);
        goto bb0x40177d;
    }
    edx = local4;
    return eax; /* WARNING: Also returning: edx := edx */
}

/** address: 0x00401070 */
__size32 proc_0x00401070(union { __size32; __size32 *; } param1)
{
    proc_0x00401040(param1);
    *(__size32*)(param1 + 4)++;
    *(__size32*)param1 = 0x40374c;
    return param1;
}

/** address: 0x00401040 */
__size32 proc_0x00401040(union { __size32; __size32 *; } param1)
{
    *(__size32*)param1 = 0x403740;
    *(__size32*)(param1 + 4) = 100;
    return param1;
}


int global_0x00406020 = 0xbb40e64e;
__size32 global_0x00406024 = 0x44bf19b1;// 4 bytes
__size32 global_0x00406168 = 0;// 4 bytes
__size32 global_0x0040616c = 0;// 4 bytes
__size32 global_0x00406170 = 0;// 4 bytes
__size32 global_0x00406180 = 0;// 4 bytes
__size32 global_0x00406184 = 0;// 4 bytes
int global_0x004064bc;
void global_0x004064e8;
void proc_0x00401a50(int param1, int param2);
void _start();
__size32 proc_0x00401970(__size32 param1, __size32 param2, __size32 param3, __size32 param4);
__size32 proc_0x004018a0(unsigned int param1, unsigned char param2, int param3, unsigned int param4);
__size32 proc_0x00401010(__size32 param1);
void proc_0x004019b5(union { __size32; __size32 *; } param1);
__size32 proc_0x00401810(union { __size16 *; __size32; } param1, unsigned char param2, int param3);
__size32 proc_0x00401850(__size32 param1, unsigned int param2, unsigned int param3);

/** address: 0x00401a50 */
void proc_0x00401a50(int param1, int param2)
{
    __size32 eax; 		// r24
    int eax_1; 		// r24{0}
    int eax_2; 		// r24{0}
    int esi; 		// r30
    int esi_1; 		// r30{0}
    int esi_4; 		// r30{0}
    int local2; 		// esi{0}

    if (global_0x00406020 == 0xbb40e64e) {
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
        global_0x00406020 = esi;
        global_0x00406024 =  ~esi;
    }
    else {
        global_0x00406024 =  ~global_0x00406020;
    }
    return;
}

/** address: 0x004014a8 */
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

    proc_0x00401a50(*(%esp - 20), *(%esp - 16));
    esp = proc_0x00401970(16, ebx, esi, edi); /* Warning: also results in ebp */
    ebx = 0;
    if (*0x4064e4 == 0) {
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
        *(__size32*)(esp_1 - 12) = 0x4064cc;
        eax = InterlockedCompareExchange(); /* Warning: also results in edx */
        if (eax == 0) {
        }
        else {
            if (eax != esi) {
                *(__size32*)(esp_1 - 16) = 1000;
                esp = Sleep(*(esp_1 - 16));
            }
            else {
                goto bb0x401264;
            }
        }
bb0x40127c:
        if (global_0x004064bc != 1) {
            if (global_0x004064bc != 0) {
                global_0x00406184 = 1;
bb0x4012ca:
                if (global_0x004064bc == 1) {
                    *(__size32*)(esp_1 - 16) = 0x404208;
                    *(__size32*)(esp_1 - 20) = 0x404000;
                    edx = _initterm();
                    global_0x004064bc = 2;
                }
                if (*(ebp - 28) == 0) {
                    *(__size32*)(esp_1 - 16) = 0;
                    *(__size32*)(esp_1 - 20) = 0x4064cc;
                    edx = InterlockedExchange(*(esp_1 - 20), *(esp_1 - 16));
                }
                esp = esp_1 - 12;
                local3 = esp;
                if (*0x4064e8 != 0) {
                    *(__size32*)(esp_1 - 16) = 0x4064e8;
                    eax = proc_0x004018a0(*(esp_1 - 16), dl, edx, 0); /* Warning: also results in ax, cx, dl, edx */
                    ecx = *(esp_1 - 16);
                    esp_2 = esp_1 - 12;
                    local3 = esp_2;
                    if (eax != 0) {
                        *(__size32*)(esp_1 - 16) = 0;
                        *(__size32*)(esp_1 - 20) = 2;
                        *(__size32*)(esp_1 - 24) = 0;
                        (*global_0x004064e8)(ax, cx, dl, eax, ecx, edx, 0, ebp, 1, 0x4064cc, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), 16, 0x405198, pc);
                        local3 = esp;
                    }
                }
                esp = local3;
                ecx = *0x407218;
                *(__size32*)ecx = global_0x0040616c;
                local0 = global_0x0040616c;
                local1 = global_0x00406170;
                local2 = global_0x00406168;
                eax = proc_0x00401010(*(esp - 12));
                global_0x00406180 = eax;
                if (*0x406174 == ebx) {
                    local0 = eax;
                    exit(*(esp - 4));
                }
                if (*0x406184 == ebx) {
                    _cexit();
                }
                *(__size32*)(ebp - 4) = -2;
            }
            else {
                global_0x004064bc = 1;
                *(__size32*)(esp_1 - 16) = 0x404618;
                *(__size32*)(esp_1 - 20) = 0x40430c;
                eax = _initterm_e(); /* Warning: also results in edx */
                esp = esp_1 - 12;
                if (eax == 0) {
                    goto bb0x4012ca;
                }
                else {
                    *(__size32*)(ebp - 4) = -2;
                }
            }
        }
        else {
            *(__size32*)(esp_1 - 16) = 31;
            edx = _amsg_exit();
            goto bb0x4012ca;
        }
        proc_0x004019b5(ebp);
        return;
    }
bb0x401264:
    *(__size32*)(ebp - 28) = 1;
    goto bb0x40127c;
}

/** address: 0x00401970 */
__size32 proc_0x00401970(__size32 param1, __size32 param2, __size32 param3, __size32 param4)
{
    union { __size32; __size32 *; } esp; 		// r28
    __size32 local0; 		// m[esp]

    *(__size32*)(esp - param1 - 12) = param2;
    *(__size32*)(esp - param1 - 16) = param3;
    *(__size32*)(esp - param1 - 20) = param4;
    *(int*)(esp - param1 - 24) = global_0x00406020 ^ (esp + 8);
    *(__size32*)(esp - param1 - 28) = local0;
    *(__size32*)0 = (esp - 8);
    return (esp + 8);
}

/** address: 0x004018a0 */
__size32 proc_0x004018a0(unsigned int param1, unsigned char param2, int param3, unsigned int param4)
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
    eax_4 = proc_0x00401810(0x400000, param2, param3); /* Warning: also results in ax, cx, dl, edx */
    if (eax_4 == 0) {
bb0x401941:
        eax_12 = 0;
        *(__size32*)0 = eax_1;
        local3 = eax_12;
    }
    else {
        eax_7 = proc_0x00401850(0x400000, param1 - 0x400000, param4); /* Warning: also results in edx */
        if (eax_7 == 0) {
            goto bb0x401941;
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

/** address: 0x00401010 */
__size32 proc_0x00401010(__size32 param1)
{
    __size32 eax_1; 		// r24{0}
    __size32 eax_4; 		// r24{0}
    int esp; 		// r28
    __size32 local0; 		// m[esp + 4]

    eax_1 = *0;
    *(int*)0 = (esp - 16);
    local0 = param1 + 1;
    if (local0 == 10) {
        _CxxThrowException((esp - 24), 0x405084);
    }
    eax_4 = local0 + 1;
    if (eax_4 + 5 == 7) {
        _CxxThrowException((esp - 28), 0x405070);
    }
    *(__size32*)0 = eax_1;
    return eax_4 + 8;
}

/** address: 0x004019b5 */
void proc_0x004019b5(union { __size32; __size32 *; } param1)
{
    __size32 ecx; 		// r25
    __size32 local0; 		// m[esp]

    ecx = *(param1 - 16);
    *(__size32*)0 = ecx;
    *(__size32*)param1 = local0;
    return;
}

/** address: 0x00401810 */
__size32 proc_0x00401810(union { __size16 *; __size32; } param1, unsigned char param2, int param3)
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
bb0x401822:
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
        goto bb0x401822;
    }
    param2 = local0;
    param3 = local1;
    return eax; /* WARNING: Also returning: ax := ax, cx := cx, dl := param2, edx := param3 */
}

/** address: 0x00401850 */
__size32 proc_0x00401850(__size32 param1, unsigned int param2, unsigned int param3)
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
bb0x40188d:
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
bb0x401885:
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
                    goto bb0x401885;
                }
                edx = local4;
                return eax; /* WARNING: Also returning: edx := edx */
            }
            goto bb0x401885;
        } while (edx_1 + 1 < esi);
        goto bb0x40188d;
    }
    edx = local4;
    return eax; /* WARNING: Also returning: edx := edx */
}


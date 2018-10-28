union { unsigned int; char *; } global_0x00401c60[9999999];
__size32 global_0x00402008 = 0x401c74;// 4 bytes
__size32 global_0x0040503c;// 4 bytes
__size32 _iob = 0x62dc;// 4 bytes
void proc_0x00401000(__size32 param1);
void __imp_GetModuleHandleA();
void __imp_GetProcAddress(HANDLE param1, char *param2);
void proc_0x00401974();
void _start(__size32 param1);
void proc_0x00401514();
void proc_0x004015f4();
void proc_0x0040172c();
void proc_0x0040138c();
void proc_0x0040129c();
void proc_0x00401648(__size32 param1, union { __size8 *; int; } param2, __size32 param3, union { __size32; __size8 *; } param4);
void proc_0x004015fc(union { char *; __size32; } param1, int param2);

/** address: 0x00401000 */
void proc_0x00401000(__size32 param1)
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    __size32 esp_1; 		// r28{7}
    __size32 esp_2; 		// r28{6}
    union { __size32; __size32 *; } esp_5; 		// r28{9}
    __size32 esp_8; 		// r28{1}
    union { __size32 *; __size32; } local6; 		// esp_5{9}

    ebp = esp_8 - 4;
    esp = esp_8 - 60;
    flags = LOGICALFLAGS32(0x40148c);
    local6 = esp;
    (*0x40148c)(0x40148c, esp_8 - 4, LOGICALFLAGS32(0x40148c), LOGICALFLAGS32(0x40148c), LOGICALFLAGS32(0x40148c), ecx, edx, param1, ebp, param1, 0, 2, 0, pc);
    esp_1 = esp_2 - 12;
    flags = SUBFLAGS32(esp_2, 12, esp_2 - 12);
    local6 = esp_1;
    esp_5 = local6;
    *(__size32*)esp_5 = 0x401110;
    eax = SetUnhandledExceptionFilter(); /* Warning: also results in ecx, edx */
    *(__size32*)(esp_5 - 4) = eax;
    proc_0x00401514(eax, ecx, edx, param1, ebp, flags, ZF, CF, *(esp_8 - 4), *(esp_8 - 8), *(esp_8 - 52), *(esp_8 - 56), *(esp_8 - 60), *(esp_8 - 64));
}

/** address: 0x00401bf4 */
void __imp_GetModuleHandleA()
{
    GetModuleHandleA();
    return;
}

/** address: 0x00401bfc */
void __imp_GetProcAddress(HANDLE param1, char *param2)
{
    GetProcAddress(param1, param2);
    return;
}

/** address: 0x00401974 */
void proc_0x00401974()
{
    __size32 eax; 		// r24
    __size16 eax_1; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{21}
    __size32 ebx_4; 		// r27{22}
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 esp_1; 		// r28{2}
    union { __size32; __size32 *; } esp_10; 		// r28{29}
    __size32 esp_13; 		// r28{46}
    __size32 esp_4; 		// r28{21}
    __size32 esp_7; 		// r28{15}
    __size32 local13; 		// eax{11}
    __size32 local14; 		// ebx{14}
    __size32 local15; 		// esp_7{15}
    __size32 local16; 		// ebx{28}
    union { __size32 *; __size32; } local17; 		// esp_10{29}
    __size32 local2; 		// m[esp_13 - 4]{0}
    __size32 local3; 		// m[esp_13 - 4]{0}
    __size32 local7; 		// m[esp_13 - 8]{0}
    __size32 local8; 		// m[esp_13 - 8]{0}

    *(__size32*)(%esp - 4) = %ebp;
    if (flags) {
        *(__size32*)(global_0x00401c60 + 0x33e0) = 1;
        ebp = esp_13 - 4;
        esp_1 = (esp_13 - 28);
        ebx = -1;
        local15 = esp_1;
        local17 = esp_1;
        ebx = 0;
        for(;;) {
            eax = ebx + 1;
            edx = global_0x00401c60[(ebx + 1)];
            if (global_0x00401c60[(ebx + 1)] == 0) {
                flags = LOGICALFLAGS32(ebx);
                local14 = ebx;
                local16 = ebx;
                if (ebx != 0) {
                    eax_1 = eax;
                    local13 = eax_1;
                    do {
                        eax = local13;
                        ebx = local14;
                        esp_7 = local15;
                        (*global_0x00401c60[ebx])(eax, ecx, edx, ebx, ebp, flags, ZF, CF, local2, local8);
                        local13 = eax;
                        local15 = esp_4;
                        local17 = esp_4;
                        ebx_4 = ebx_1 - 1;
                        flags = LOGICALFLAGS32(ebx_1 - 1);
                        local14 = ebx_4;
                        local16 = ebx_4;
                    } while (ebx_1 != 1);
                }
                ebx = local16;
                esp_10 = local17;
                *(__size32*)esp_10 = 0x4018f8;
                proc_0x0040129c(eax, ecx, edx, ebx, ebp, flags, ZF, CF, local3, local7);
            }
            ebx++;
        }
    }
    return;
}

/** address: 0x0040126c */
void _start(__size32 param1)
{
    __set_app_type();
    proc_0x00401000(param1);
}

/** address: 0x00401514 */
void proc_0x00401514()
{
}

/** address: 0x004015f4 */
void proc_0x004015f4()
{
    return;
}

/** address: 0x0040172c */
void proc_0x0040172c()
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    union { unsigned int; __size32 *; } ebx_1; 		// r27{10}
    __size32 ebx_2; 		// r27{16}
    union { __size8 *; __size32; } edx; 		// r26
    __size32 esp_1; 		// r28{2}
    __size32 esp_2; 		// r28{11}
    __size32 esp_3; 		// r28{13}
    __size32 esp_8; 		// r28{1}
    union { __size32 *; unsigned int; } local3; 		// ebx_1{10}
    __size32 local4; 		// esp_2{11}

    esp_1 = esp_8 - 60;
    local4 = esp_1;
    if (global_0x0040503c == 0) {
        global_0x0040503c = 1;
        ebx = 0x403128;
        eax = *(ebx + 8);
        if (eax != 1) {
            proc_0x004015fc(0x4030c4, eax);
        }
        if (ebx + 12 < 0x403140) {
            do {
                if (flags) {
                    if (flags) {
                        *(__size32*)(%ebp - 28) = %esi;
bb0x4018d8:
                        proc_0x00401648(*(%esp - 40), %eax, %ecx, %edx);
                    }
                    else {
bb0x401863:
                        *(__size32*)(%ebp - 28) = %ecx;
                        if ( ~flags) {
                            if ( ~flags) {
                                if ( ~flags) {
bb0x401881:
                                    proc_0x00401648(*(%esp - 40), %eax, %ecx, %edx);
                                }
                            }
bb0x40189f:
                            proc_0x00401648(*(%esp - 40), %eax, %ecx, %edx);
                            goto bb0x4018ac;
                        }
                        goto bb0x4018d8;
                    }
                }
                else {
                    if (flags) {
                        *(__size32*)(%ebp - 28) = %edx;
                        goto bb0x40189f;
                    }
                    else {
                        if ( ~flags) {
                            *(__size32*)(%ebp - 28) = 0;
                            *(__size32*)(%esp + 4) = %edx;
                            *(__size32*)%esp = 0x4030f8;
                            proc_0x004015fc(*(%esp + 4), *(%esp + 8));
                        }
                        if (flags) {
                            goto bb0x401863;
                        }
                        else {
                            *(__size32*)(%ebp - 28) = %esi;
                            goto bb0x401881;
                        }
                    }
                }
bb0x4018ac:
            } while (flags);
        }
    }
    return;
}

/** address: 0x0040138c */
void proc_0x0040138c()
{
    proc_0x00401974();
    _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(0x40618c, "Hello, World!");
    _ZNSolsEPFRSoS_E(0x401430, 0x403064);
    return;
}

/** address: 0x0040129c */
void proc_0x0040129c()
{
/* goto m[0x406158] */
}

/** address: 0x00401648 */
void proc_0x00401648(__size32 param1, union { __size8 *; int; } param2, __size32 param3, union { __size32; __size8 *; } param4)
{
    __size32 eax; 		// r24

    if (param3 != 0) {
        eax = VirtualQuery();
        if (eax == 0) {
            proc_0x004015fc(0x403090, 28);
        }
        if (param1 == 64 || param1 == 4) {
            if (param3 != 0) {
                *(__size8*)param2 = *param4;
            }
        }
        else {
            VirtualProtect();
            if (param3 != 0) {
                *(__size8*)param2 = *param4;
            }
            if ( ~(param1 == 64 || param1 == 4)) {
                VirtualProtect();
            }
        }
    }
    return;
}

/** address: 0x004015fc */
void proc_0x004015fc(union { char *; __size32; } param1, int param2)
{
    fwrite("Mingw runtime failure:\n", 1, 23, _iob + 64);
    vfprintf(_iob + 64, param1, &param2);
    abort();
    return;
}


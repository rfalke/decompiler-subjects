int main(int argc, char *argv[]);
__size32 basic_1_ternary_simple(__size32 param1);
void basic_2_ternary_other();
void intermediate_1_ternary_blocks(__size32 param1);
void intermediate_2_other_in_blocks(__size32 param1);
void intermediate_10_double_word_signed_math(unsigned long long param1, long long param2, unsigned long long param3, long long param4, unsigned long long param5, int param6);
void intermediate_10_double_word_unsigned_math(unsigned long long param1, unsigned long long param2, unsigned long long param3, unsigned long long param4, unsigned long long param5, unsigned int param6);
void advanced_1_unrolled_loop();
__size32 __divdi3(unsigned long long param1, long long param2, unsigned long long param3, long long param4);
__size32 __moddi3(unsigned long long param1, long long param2, unsigned long long param3, long long param4);
__size32 __udivdi3(unsigned long long param1, unsigned long long param2, unsigned long long param3, unsigned long long param4);
__size32 __umoddi3(unsigned long long param1, unsigned long long param2, unsigned long long param3, unsigned long long param4, unsigned long long param5);

/** address: 0x08048340 */
int main(int argc, char *argv[])
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    int edi; 		// r31
    int esi; 		// r30
    union { __size32; __size32 *; } esp; 		// r28
    __size32 local4; 		// m[esp]

    eax = basic_1_ternary_simple(argc); /* Warning: also results in al */
    basic_2_ternary_other(al, eax, esp + 4, argv, eax, esp - 8, argc, argc >> 31, SARFLAGS(argc >> 31, argc, 31), SARFLAGS(argc >> 31, argc, 31), SARFLAGS(argc >> 31, argc, 31), argc, argv, local4, ebp, edi, esi, ebx, esp + 4, argv, argc, pc);
}

/** address: 0x080484c0 */
__size32 basic_1_ternary_simple(__size32 param1)
{
    unsigned char al; 		// r8

    al =  (param1 != 42) ? 1 : 0;
    return (al); /* WARNING: Also returning: al := al */
}

/** address: 0x080484d0 */
void basic_2_ternary_other()
{
}

/** address: 0x08048904 */
void intermediate_1_ternary_blocks(__size32 param1)
{
    if (param1 == 42) {
    }
    return;
}

/** address: 0x0804891b */
void intermediate_2_other_in_blocks(__size32 param1)
{
    if (param1 == 42) {
    }
    return;
}

/** address: 0x080484f0 */
void intermediate_10_double_word_signed_math(unsigned long long param1, long long param2, unsigned long long param3, long long param4, unsigned long long param5, int param6)
{
    int eax; 		// r24
    int ecx; 		// r25
    int edx; 		// r26

    if (param4 + param2 + ADDFLAGS32(param3, param1, param3 + param1) >= param6) {
        if (param4 + param2 + ADDFLAGS32(param3, param1, param3 + param1) <= param6) {
            if (param3 + param1 > param5) {
                puts("add");
            }
        }
        else {
            puts("add");
        }
    }
    edx = param2 - param4 + (param1 < param3);
    if (param6 <= edx) {
        if (param6 >= edx) {
            if (param5 < (unsigned int)(param1 - param3)) {
                puts("sub");
            }
        }
        else {
            puts("sub");
        }
    }
    ecx = param2 * param3 + param1 * param4;
    tmpl = (param3) * (param1);
    if (param6 <= (tmpl >> 32) + ecx) {
        if (param6 >= (tmpl >> 32) + ecx) {
            if (param5 < tmpl) {
                puts("mult");
            }
        }
        else {
            puts("mult");
        }
    }
    eax = __divdi3(param1, param2, param3, param4); /* Warning: also results in edx */
    if (param6 <= edx) {
        if (param6 >= edx) {
            if (param5 < (unsigned long long)eax) {
bb0x80485bc:
                puts("diff");
            }
        }
        else {
            goto bb0x80485bc;
        }
    }
    eax = __moddi3(param1, param2, param3, param4); /* Warning: also results in edx */
    if ((param6 ^ edx | param5 ^ eax) == 0) {
        puts("modulo");
    }
    return;
}

/** address: 0x08048680 */
void intermediate_10_double_word_unsigned_math(unsigned long long param1, unsigned long long param2, unsigned long long param3, unsigned long long param4, unsigned long long param5, unsigned int param6)
{
    int eax; 		// r24
    int ecx; 		// r25
    int edx; 		// r26

    if (param4 + param2 + ADDFLAGS32(param3, param1, param3 + param1) >= param6) {
        if (param4 + param2 + ADDFLAGS32(param3, param1, param3 + param1) <= param6) {
            if (param3 + param1 > param5) {
                puts("add");
            }
        }
        else {
            puts("add");
        }
    }
    edx = param2 - param4 + (param1 < param3);
    if (param6 <= edx) {
        if (param6 >= edx) {
            if (param5 < (unsigned int)(param1 - param3)) {
                puts("sub");
            }
        }
        else {
            puts("sub");
        }
    }
    ecx = param2 * param3 + param1 * param4;
    tmpl = (param3) * (param1);
    if (param6 <= (unsigned long long)((tmpl >> 32) + ecx)) {
        if (param6 >= (unsigned long long)((tmpl >> 32) + ecx)) {
            if (param5 < tmpl) {
                puts("mult");
            }
        }
        else {
            puts("mult");
        }
    }
    eax = __udivdi3(param1, param2, param3, param4); /* Warning: also results in edx */
    if (param6 <= edx) {
        if (param6 >= edx) {
            if (param5 < (unsigned long long)eax) {
bb0x804874c:
                puts("diff");
            }
        }
        else {
            goto bb0x804874c;
        }
    }
    eax = __umoddi3(param1, param2, param3, param4, param5); /* Warning: also results in edx */
    if ((param6 ^ edx | param5 ^ eax) == 0) {
        puts("modulo");
    }
    return;
}

/** address: 0x08048810 */
void advanced_1_unrolled_loop()
{
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{3}
    __size32 ebx_2; 		// r27{4}
    __size32 ebx_4; 		// r27{9}
    __size32 ebx_5; 		// r27{11}
    __size32 local2; 		// ebx_1{3}
    __size32 local3; 		// ebx_4{9}

    ebx = 48;
    puts("basic");
    local2 = ebx;
    do {
        ebx_1 = local2;
        ebx_2 = ebx_1 + 1;
        putchar(ebx_1);
        local2 = ebx_2;
    } while (ebx_1 + 1 != 58);
    ebx = 48;
    puts("partial unrolled");
    local3 = ebx;
    do {
        ebx_4 = local3;
        putchar(ebx_4);
        ebx_5 = ebx_4 + 2;
        putchar(ebx_4 + 1);
        local3 = ebx_5;
    } while (ebx_4 + 2 != 58);
    puts("fully unrolled");
    putchar('0');
    putchar('1');
    putchar('2');
    putchar('3');
    putchar('4');
    putchar('5');
    putchar('6');
    putchar('7');
    putchar('8');
    putchar('9');
    return;
}

/** address: 0x08048940 */
__size32 __divdi3(unsigned long long param1, long long param2, unsigned long long param3, long long param4)
{
    unsigned long long eax; 		// r24
    unsigned long long ebp; 		// r29
    unsigned long long ebp_1; 		// r29{44}
    unsigned long long ebp_2; 		// r29{42}
    unsigned long long ebp_4; 		// r29{42}
    unsigned long long ebp_5; 		// r29{45}
    unsigned long long ecx; 		// r25
    unsigned long long ecx_1; 		// r25{20}
    long long edx; 		// r26
    unsigned long long edx_2; 		// r26{13}
    unsigned long long edx_3; 		// r26{66}
    __size32 local0; 		// m[esp - 36]
    long long local1; 		// m[esp - 40]
    unsigned long long local10; 		// ebp_1{41}
    unsigned long long local11; 		// ebp_4{44}
    unsigned long long local12; 		// ecx{54}
    unsigned long long local2; 		// m[esp - 44]
    unsigned long long local3; 		// tmpl{67}
    unsigned long long local6; 		// tmpl{68}
    unsigned long long local9; 		// ebp{30}

    edx = param2;
    eax = param1;
    local0 = 0;
    local1 = param4;
    local2 = param3;
    if (param2 < 0) {
        eax = 0 - param1;
        local0 = -1;
        edx = 0 - param2 + (param1 != 0);
    }
    edx_2 = edx;
    if (param4 < 0) {
        local2 = 0 - param3;
        local0 =  ~local0;
        local1 = 0 - param4 + (param3 != 0);
    }
    ebp = eax;
    ecx_1 = local2;
    local11 = ebp;
    local12 = ecx_1;
    if (local1 != 0) {
        if (local1 <= edx_2) {
            if (local1 != 0) {
                ebp = 32;
                local10 = ebp;
                do {
                    ebp_1 = local10;
                    ebp_2 = ebp_1 - 1;
                    local10 = ebp_2;
                    local11 = ebp_2;
                } while ((local1 >> ebp_1 - 1 & 0x1ffff) == 0);
            }
            ebp_4 = local11;
            ebp_5 = ebp_4 ^ 31;
            local9 = ebp_5;
            local9 = ebp_5;
            if ((ebp_4 ^ 31) != 0) {
                edx_3 = local2 >> 32 - (ebp_4 ^ 31) | local1 << (ebp_4 ^ 31);
                local3 = (edx_2 >> 32 - (ebp_4 ^ 31)) << 32 | (edx_2 << (ebp_4 ^ 31) | eax >> 32 - (ebp_4 ^ 31));
                local6 = (local3 / edx_3) * (local2 << (ebp_4 ^ 31));
                if (local3 % edx_3 < (unsigned long long)(local6 >> 32) || (unsigned long long)(eax << (ebp_4 ^ 31)) < local6 && local3 % edx_3 == local6 >> 32) {
                    ecx = local3 / edx_3 - 1;
                    ebp = 0;
                    local9 = ebp;
                }
                else {
                    ecx = local3 / edx_3;
                    ebp = 0;
                    local9 = ebp;
                }
            }
            else {
                if (local1 < edx_2) {
bb0x80489dc:
                    ecx = 1;
                }
                else {
                    ecx = 0;
                    if (local2 <= eax) {
                        goto bb0x80489dc;
                    }
                }
            }
        }
        else {
            ebp = 0;
            ecx = 0;
            local9 = ebp;
        }
    }
    else {
        if (local2 <= edx_2) {
            if (local2 == 0) {
                ecx = 1 / local2;
                local12 = ecx;
            }
            ecx = local12;
            ebp = (edx_2) / ecx;
            ecx = (((edx_2) % ecx) << 32 | (eax)) / ecx;
            local9 = ebp;
        }
        else {
            ebp = 0;
            ecx = ((edx_2) << 32 | (eax)) / local2;
            local9 = ebp;
        }
    }
    ebp = local9;
    eax = ecx;
    edx = ebp;
    if (local0 != 0) {
        eax = 0 - ecx;
        edx = 0 - ebp + (ecx != 0);
    }
    return eax; /* WARNING: Also returning: edx_1 := edx */
}

/** address: 0x08048ab0 */
__size32 __moddi3(unsigned long long param1, long long param2, unsigned long long param3, long long param4)
{
    unsigned long long eax; 		// r24
    unsigned long long eax_2; 		// r24{31}
    unsigned long long ebx; 		// r27
    unsigned long long ecx; 		// r25
    unsigned long long ecx_1; 		// r25{19}
    long long ecx_10; 		// r25{70}
    long long ecx_3; 		// r25{72}
    unsigned long long ecx_4; 		// r25{64}
    long long ecx_7; 		// r25{68}
    long long edi; 		// r31
    unsigned long long edi_1; 		// r31{13}
    unsigned long long edi_2; 		// r31{44}
    unsigned long long edi_3; 		// r31{40}
    unsigned long long edi_6; 		// r31{41}
    unsigned long long edi_7; 		// r31{42}
    unsigned long long edx; 		// r26
    unsigned long long esi; 		// r30
    unsigned long long esi_1; 		// r30{12}
    unsigned long long esi_2; 		// r30{73}
    unsigned long long esi_3; 		// r30{67}
    unsigned long long esi_6; 		// r30{71}
    __size32 local0; 		// m[esp - 48]
    unsigned long long local1; 		// m[esp - 60]
    unsigned long long local12; 		// tmpl{65}
    unsigned long long local15; 		// tmpl{66}
    unsigned long long local18; 		// eax{36}
    unsigned long long local19; 		// edi_6{41}
    long long local2; 		// m[esp - 56]
    unsigned long long local20; 		// edi_2{44}
    unsigned long long local21; 		// local1{48}
    unsigned long long local22; 		// ecx{54}
    long long local23; 		// ecx_3{72}
    unsigned long long local24; 		// esi_2{73}
    unsigned long long local3; 		// m[esp - 40]
    unsigned long long local4; 		// m[esp - 60]{17}
    unsigned long long local5; 		// m[esp - 60]{20}
    unsigned long long local8; 		// m[esp - 60]{78}

    edi = param2;
    esi = param1;
    local0 = 0;
    local1 = param3;
    local2 = param4;
    if (param2 < 0) {
        esi = 0 - param1;
        local0 = -1;
        edi = 0 - param2 + (param1 != 0);
    }
    esi_1 = esi;
    edi_1 = edi;
    local20 = edi_1;
    if (param4 < 0) {
        local1 = 0 - param3;
        local2 = 0 - param4 + (param3 != 0);
    }
    local4 = local1;
    local3 = esi_1;
    ecx_1 = local4;
    local5 = edi_1;
    local21 = local5;
    local22 = ecx_1;
    if (local2 != 0) {
        if (local2 <= edi_1) {
            if (local2 != 0) {
                edi_3 = 32;
                local19 = edi_3;
                do {
                    edi_6 = local19;
                    edi_7 = edi_6 - 1;
                    local19 = edi_7;
                    local20 = edi_7;
                } while ((local2 >> edi_6 - 1 & 0x1ffff) == 0);
            }
            edi_2 = local20;
            if ((edi_2 ^ 31) != 0) {
                ecx_4 = local4 >> 32 - (edi_2 ^ 31) | local2 << (edi_2 ^ 31);
                local12 = (edi_1 >> 32 - (edi_2 ^ 31)) << 32 | (edi_1 << (edi_2 ^ 31) | esi_1 >> 32 - (edi_2 ^ 31));
                local15 = (local12 / ecx_4) * (local4 << (edi_2 ^ 31));
                esi_3 = local15;
                ecx_7 = local15 >> 32;
                local23 = ecx_7;
                local24 = esi_3;
                if ( ~(local12 % ecx_4 >= (unsigned long long)(local15 >> 32) && (local12 % ecx_4 != local15 >> 32 || (unsigned long long)(esi_1 << (edi_2 ^ 31)) >= local15))) {
                    ecx_10 = (local15 >> 32) - ecx_4 + (local15 < (unsigned long long)(local4 << (edi_2 ^ 31)));
                    esi_6 = local15 - (local4 << (edi_2 ^ 31));
                    local23 = ecx_10;
                    local24 = esi_6;
                }
                ecx_3 = local23;
                esi_2 = local24;
                ebx = local12 % ecx_4 - ecx_3 + ((unsigned long long)(esi_1 << (edi_2 ^ 31)) < esi_2);
                eax = ebx << (32 - (edi_2 ^ 31)) | (unsigned int)((esi_1 << (edi_2 ^ 31)) - esi_2) >> (edi_2 ^ 31);
                edx = ebx >> (edi_2 ^ 31);
            }
            else {
                if (local2 < edi_1 || local4 <= esi_1) {
                    local8 = edi_1 - local2 + (esi_1 < local4);
                    local3 = esi_1 - local4;
                    local21 = local8;
                }
                local1 = local21;
                eax = local3;
                edx = local1;
            }
        }
        else {
            eax = esi_1;
            edx = edi_1;
        }
    }
    else {
        if (local4 <= edi_1) {
            if (local4 == 0) {
                ecx = 1 / local4;
                local22 = ecx;
            }
            ecx = local22;
            local1 = (((edi_1) % ecx) << 32 | (esi_1)) % ecx;
        }
        else {
            local1 = ((edi_1) << 32 | (esi_1)) % local4;
        }
        eax = local1;
        edx = 0;
    }
    eax_2 = eax;
    local18 = eax_2;
    if (local0 != 0) {
        eax = 0 - eax_2;
        edx = 0 - edx + (eax_2 != 0);
        local18 = eax;
    }
    eax = local18;
    return eax; /* WARNING: Also returning: edx_1 := edx */
}

/** address: 0x08048c90 */
__size32 __udivdi3(unsigned long long param1, unsigned long long param2, unsigned long long param3, unsigned long long param4)
{
    unsigned long long eax; 		// r24
    unsigned long long ebp; 		// r29
    unsigned long long ebx; 		// r27
    unsigned long long edi; 		// r31
    unsigned long long edi_1; 		// r31{28}
    unsigned long long edi_2; 		// r31{26}
    unsigned long long edi_4; 		// r31{26}
    unsigned long long edx; 		// r26
    unsigned long long esi; 		// r30
    unsigned long long local0; 		// tmpl{32}
    unsigned long long local1; 		// tmpl{34}
    unsigned long long local2; 		// edi_1{25}
    unsigned long long local3; 		// edi_4{28}

    edi = param3;
    local3 = edi;
    if (param4 != 0) {
        if (param4 > param2) {
            eax = 0;
            edx = 0;
        }
        else {
            if (param4 != 0) {
                edi = 32;
                local2 = edi;
                do {
                    edi_1 = local2;
                    edi_2 = edi_1 - 1;
                    local2 = edi_2;
                    local3 = edi_2;
                } while ((param4 >> edi_1 - 1 & 0x1ffff) == 0);
            }
            edi_4 = local3;
            edi = edi_4 ^ 31;
            if ((edi_4 ^ 31) == 0) {
                if (param4 < param2) {
bb0x8048da8:
                    ebx = 1;
                }
                else {
                    ebx = 0;
                    if (param3 <= param1) {
                        goto bb0x8048da8;
                    }
                }
bb0x8048cdc:
                eax = ebx;
                edx = edi;
            }
            else {
                esi = param4 << (edi_4 ^ 31) | param3 >> 32 - (edi_4 ^ 31);
                local0 = (param2 >> 32 - (edi_4 ^ 31)) << 32 | (param2 << (edi_4 ^ 31) | param1 >> 32 - (edi_4 ^ 31));
                ebx = local0 / esi;
                local1 = (local0 / esi) * (param3 << (edi_4 ^ 31));
                if ( ~(local0 % esi >= (unsigned long long)(local1 >> 32) && ((unsigned long long)(param1 << (edi_4 ^ 31)) >= local1 || local0 % esi != local1 >> 32))) {
                    ebx = local0 / esi - 1;
                }
                eax = ebx;
                edx = 0;
            }
        }
    }
    else {
        if (param3 > param2) {
            eax = ((param2) << 32 | (param1)) / param3;
            edx = 0;
        }
        else {
            ebp = param3;
            if (param3 == 0) {
                ebp = 1 / param3;
            }
            edi = (param2) / ebp;
            ebx = (((param2) % ebp) << 32 | (param1)) / ebp;
            goto bb0x8048cdc;
        }
    }
    return eax; /* WARNING: Also returning: edx_1 := edx */
}

/** address: 0x08048dc0 */
__size32 __umoddi3(unsigned long long param1, unsigned long long param2, unsigned long long param3, unsigned long long param4, unsigned long long param5)
{
    unsigned long long eax; 		// r24
    unsigned long long ebp; 		// r29
    unsigned long long ebp_1; 		// r29{21}
    unsigned long long ebp_2; 		// r29{22}
    unsigned long long ebx; 		// r27
    long long ecx; 		// r25
    long long ecx_2; 		// r25{45}
    long long ecx_3; 		// r25{50}
    unsigned long long edx; 		// r26
    long long esi; 		// r30
    unsigned long long local0; 		// m[esp - 40]
    unsigned long long local1; 		// m[esp - 36]
    long long local10; 		// ecx_3{50}
    unsigned long long local2; 		// tmpl{42}
    unsigned long long local5; 		// tmpl{43}
    unsigned long long local8; 		// ebp_1{21}
    unsigned long long local9; 		// param5{24}

    local0 = param1;
    edx = param2;
    local9 = param5;
    if (param4 != 0) {
        if (param4 > param2) {
            eax = param1;
            edx = param2;
        }
        else {
            if (param4 != 0) {
                ebp = 32;
                local8 = ebp;
                do {
                    ebp_1 = local8;
                    ebp_2 = ebp_1 - 1;
                    local8 = ebp_2;
                    local9 = ebp_2;
                } while ((param4 >> ebp_1 - 1 & 0x1ffff) == 0);
            }
            param5 = local9;
            if ((param5 ^ 31) != 0) {
                edx = param3 >> 32 - (param5 ^ 31) | param4 << (param5 ^ 31);
                local0 = param3 << (param5 ^ 31);
                local2 = (param2 >> 32 - (param5 ^ 31)) << 32 | (param1 >> 32 - (param5 ^ 31) | param2 << (param5 ^ 31));
                local5 = (local2 / edx) * (local0);
                local1 = param1 << (param5 ^ 31);
                ecx_2 = local5 >> 32;
                ebx = local5;
                local10 = ecx_2;
                if ( ~(local2 % edx >= (unsigned long long)(local5 >> 32) && (local2 % edx != local5 >> 32 || local1 >= local5))) {
                    ecx = (local5 >> 32) - edx + (local5 < local0);
                    ebx = local5 - local0;
                    local10 = ecx;
                }
                ecx_3 = local10;
                esi = local2 % edx - ecx_3 + (local1 < ebx);
                eax = esi << 32 - (param5 ^ 31) | (unsigned int)(local1 - ebx) >> (param5 ^ 31);
                edx = (unsigned long long)esi >> (param5 ^ 31);
            }
            else {
                if (param4 < param2 || param3 <= param1) {
                    edx = param2 - param4 + (param1 < param3);
                    local0 = param1 - param3;
                }
                eax = local0;
            }
        }
    }
    else {
        if (param3 <= param2) {
            ebp = param3;
            if (param3 == 0) {
                ebp = 1 / param3;
            }
            edx = (((param2) % ebp) << 32 | (param1)) % ebp;
        }
        else {
            edx = ((param2) << 32 | (param1)) % param3;
        }
        eax = edx;
        edx = 0;
    }
    return eax; /* WARNING: Also returning: edx_1 := edx */
}


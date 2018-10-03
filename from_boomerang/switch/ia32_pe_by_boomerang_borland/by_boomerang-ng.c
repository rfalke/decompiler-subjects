int global_0x0040b59c = 0x40b570;
int main(int argc, char *argv[]);
__size32 proc_0x004038e4(__size32 param1);
void proc_0x00403ad0(__size32 param1);
__size32 proc_0x00403a68(__size32 param1, unsigned int param2, unsigned int param3);
__size32 proc_0x00403a20(__size32 param1, __size32 param2);
void proc_0x00405090(unsigned long long param1, long long param2, union { __size8 *; __size32; } param3, unsigned long long param4, unsigned int param5, int param6);
void proc_0x00402250(union { __size32 * x297; int; char *; } param1);
void proc_0x0040487c(union { unsigned int *; int; } param1, unsigned int param2);
void proc_0x00403a9c(int param1, __size32 param2);
void proc_0x00404fc8();
void proc_0x00404fce();
void proc_0x00404d5a(unsigned long long param1, unsigned int param2, unsigned int param3);
void proc_0x00404c97(unsigned long long param1, unsigned long long param2, unsigned int param3);

/** address: 0x00401150 */
int main(int argc, char *argv[])
{
    if ((unsigned int)argc > 7) {
bb0x4011d0:
        proc_0x004038e4(0x40a152);
        return 0;
    }
    switch(argc) {
    case 0:
        goto bb0x4011d0;
    case 1:
        goto bb0x4011d0;
    case 2:
        proc_0x004038e4(0x40a128);
        return 0;
    case 3:
        proc_0x004038e4(0x40a12e);
        return 0;
    case 4:
        proc_0x004038e4(0x40a136);
        return 0;
    case 5:
        proc_0x004038e4(0x40a13d);
        return 0;
    case 6:
        proc_0x004038e4(0x40a144);
        return 0;
    case 7:
        proc_0x004038e4(0x40a14a);
        return 0;
    }
    return 0;
}

/** address: 0x004038e4 */
__size32 proc_0x004038e4(__size32 param1)
{
    proc_0x00403ad0(0);
    return param1;
}

/** address: 0x00403ad0 */
void proc_0x00403ad0(__size32 param1)
{
    int ebx; 		// r27
    __size32 esi; 		// r30
    __size16 local0; 		// m[r29 - 184]{0}
    __size8 local1; 		// m[r29 - 184]{0}
    __size8 local2; 		// m[r25]{0}
    __size16 local3; 		// m[r25]{0}
    __size8 local4; 		// m[r26]{0}
    __size32 local5; 		// m[r26]{0}

    if (param1 == 0) {
    }
    else {
    }
bb0x403b18:
    while ( ~flags) {
        if (flags) {
bb0x403b30:
            if ( ~flags) {
                *(__size32*)(%esp - 4) = %edx;
                *(__size32*)(%esp - 4) = %ebx;
                proc_0x00403a68(*(%esp + 8), %ecx, %edx);
            }
            *(__size32*)(%esp - 4) = %eax;
            *(__size32*)(%esp - 4) = %ebx;
            proc_0x00403a68(*(%esp + 8), %ecx, %edx);
        }
        else {
            if (flags) {
                *(__size32*)(%ebp - 20) = %edx;
                *(__size32*)(%ebp - 16) = %edx;
                *(__size8*)(%ebp - 9) = 0;
                *(__size32*)(%ebp - 8) = %edx;
                *(__size32*)(%ebp - 4) = %edx;
                *(__size32*)(%ebp - 28) = %ecx;
                do {
bb0x403b8b:
                    if (flags) {
bb0x4043d8:
                        *(__size32*)(%ebp - 20)++;
                        while (flags) {
                            *(__size32*)(%esp - 4) = %edx;
                            *(__size32*)(%esp - 4) = %eax;
                            proc_0x00403a68(*(%esp + 8), %ecx, %edx);
bb0x4043d8:
                            *(__size32*)(%ebp - 20)++;
                        }
                        goto bb0x4043e4;
                    }
                    else {
                    }
                    goto bb0x4043d8;
                } while (flags);
                switch(0 >> 8 & 0xffffff | *(unsigned char*)((0 >> 8 & 0xffffff | ((unsigned char) (ebx >> 8 & 0xffffff | *(unsigned char*)esi) - 32)) + 0x40b1fa)) {
                case 0:
                    if (flags) {
                        goto bb0x4043d8;
                    }
                    else {
                        if (flags) {
                            goto bb0x403b8b;
                        }
                        *(__size8*)(%ebp - 9) = %bl;
                        goto bb0x403b8b;
                    }
                case 1:
                    if (flags) {
                        goto bb0x4043d8;
                    }
                    else {
                        goto bb0x403b8b;
                    }
                case 2:
                    *(__size32*)(%ebp + 28) += 4;
                    *(__size32*)(%ebp - 48) = %ecx;
                    if (flags) {
                        if (flags) {
                            goto bb0x4043d8;
                        }
                        else {
                            *(__size32*)(%ebp - 8) = %edx;
                            goto bb0x403b8b;
                        }
                    }
                    else {
                        if (flags) {
                            *(__size32*)(%ebp - 4) = %edx;
                        }
                        else {
                            *(__size32*)(%ebp - 4) = %eax;
                        }
                        goto bb0x403b8b;
                    }
                case 3:
                    if (flags) {
                        goto bb0x4043d8;
                    }
                    else {
                        goto bb0x403b8b;
                    }
                case 4:
                    if (flags) {
                        goto bb0x4043d8;
                    }
                    else {
                        *(__size32*)(%ebp - 8)++;
                        goto bb0x403b8b;
                    }
                case 5:
bb0x403cfd:
                    if (flags) {
                        if (flags) {
                            goto bb0x4043d8;
                        }
                        else {
                            *(__size32*)(%ebp - 8) = %ecx;
                            goto bb0x403b8b;
                        }
                    }
                    else {
                        if (flags) {
                            *(__size32*)(%ebp - 4) = %ecx;
                            goto bb0x403b8b;
                        }
                        else {
                            *(__size32*)(%ebp - 4) = %edx;
                            goto bb0x403b8b;
                        }
                        goto bb0x403b8b;
                    }
                case 6:
                    goto bb0x403b8b;
                case 7:
                    goto bb0x403b8b;
                case 8:
                    goto bb0x403b8b;
                case 9:
                    if (flags) {
                        goto bb0x403cfd;
                    }
                    else {
                        if (flags) {
                            goto bb0x403b8b;
                        }
                        goto bb0x403b8b;
                    }
                case 10:
                    *(__size32*)(%ebp - 56) = 10;
bb0x403e34:
                    if (flags) {
                        if (flags) {
                            if (flags) {
                                *(__size32*)(%ebp + 28) += 4;
                                *(__size32*)(%ebp - 48) = %edx;
                                if (flags) {
                                    *(__size32*)(%ebp - 40) = %eax;
                                    *(__size32*)(%ebp - 36) = %edx;
                                }
                                else {
                                    *(__size32*)(%ebp - 40) = %eax;
                                    *(__size32*)(%ebp - 36) = %edx;
                                }
                            }
                            else {
                                *(__size32*)(%ebp + 28) += 4;
                                *(__size16*)(%ebp - 50) = %dx;
                                if (flags) {
                                    *(__size32*)(%ebp - 40) = %eax;
                                    *(__size32*)(%ebp - 36) = %edx;
                                }
                                else {
                                    *(__size32*)(%ebp - 40) = %eax;
                                    *(__size32*)(%ebp - 36) = %edx;
                                }
                            }
                        }
                        else {
                            *(__size32*)(%ebp + 28) += 4;
                            *(__size32*)(%ebp - 44) = %edx;
                            if (flags) {
                                *(__size32*)(%ebp - 40) = %eax;
                                *(__size32*)(%ebp - 36) = %edx;
                            }
                            else {
                                *(__size32*)(%ebp - 40) = %eax;
                                *(__size32*)(%ebp - 36) = %edx;
                            }
                        }
                    }
                    else {
                        *(__size32*)(%ebp + 28) += 8;
                        *(__size32*)(%ebp - 40) = %edx;
                        *(__size32*)(%ebp - 36) = %edx;
                    }
                    *(__size32*)(%ebp - 24) = %eax;
                    if (flags) {
bb0x403f0a:
                        *(__size32*)(%esp - 4) = %eax;
                        *(__size32*)(%esp - 4) = %ecx;
                        *(__size32*)(%esp - 4) = %edx;
                        *(__size32*)(%esp - 4) = %ecx;
                        *(__size32*)(%esp - 4) = *(%ebp - 36);
                        *(__size32*)(%esp - 4) = *(%ebp - 40);
                        proc_0x00405090(*(%esp + 4), *(%esp + 8), *(%esp + 12), *(%esp + 16), *(%esp + 20), *(%esp + 24));
                    }
                    else {
                        if (flags) {
                            goto bb0x403f0a;
                        }
                        else {
                            local4 = 0;
                        }
                    }
                    if (flags) {
bb0x404148:
                        if ( ~flags) {
                            *(__size32*)(%esp - 4) = %edx;
                            proc_0x00402250(*(%esp + 4));
                            *(__size32*)(%ebp - 64) = %eax;
                            if ( ~flags) {
                                *(__size32*)(%ebp - 64)--;
                            }
                            if ( ~flags) {
                                *(__size32*)(%ebp - 16) = %edx;
                            }
                        }
                        if ( ~( ~flags && flags)) {
                            if ( ~flags) {
                                *(__size32*)(%ebp - 24)--;
                                *(__size8*)%edx = %cl;
                            }
                            if ( ~flags) {
                                *(__size32*)(%ebp - 16)--;
                            }
                        }
                        *(__size32*)(%esp - 4) = %eax;
                        proc_0x00402250(*(%esp + 4));
                        *(__size32*)(%ebp - 64) = %eax;
                    }
                    else {
                        *(__size32*)(%esp - 4) = %edx;
                        proc_0x00402250(*(%esp + 4));
                        *(__size32*)(%ebp - 60) = %eax;
                        *(__size32*)(%ebp - 64) = %eax;
                        if (flags) {
                            if ( ~flags) {
                                *(__size32*)(%ebp - 64)++;
                                *(__size32*)(%ebp - 24)--;
                                local2 = %al;
                            }
                        }
                        else {
                            *(__size32*)(%ebp - 60)--;
                        }
                        if ( ~flags) {
                            *(__size32*)(%ebp - 16) = %ecx;
                        }
                    }
bb0x4041b6:
                    if ( ~flags) {
                        if (flags) {
                            if ( ~( ~flags && flags)) {
                                *(__size32*)(%ebp - 4) -= 2;
                                *(__size32*)(%ebp - 16) -= 2;
                                if ( ~flags) {
                                    *(__size32*)(%ebp - 16) = %edx;
                                }
                            }
                        }
                        else {
                            if ( ~flags) {
                                *(__size32*)(%ebp - 16) = 1;
                            }
                        }
                    }
                    *(__size32*)(%ebp - 64) += %ecx;
                    if ( ~flags) {
                        do {
                            *(__size32*)(%esp - 4) = %edx;
                            *(__size32*)(%esp - 4) = 32;
                            proc_0x00403a68(*(%esp + 8), %ecx, %edx);
                            *(__size32*)(%ebp - 4)--;
                        } while (flags);
                    }
                    if ( ~flags) {
                        *(__size32*)(%esp - 4) = %eax;
                        *(__size32*)(%esp - 4) = 48;
                        proc_0x00403a68(*(%esp + 8), %ecx, %edx);
                        *(__size32*)(%esp - 4) = %edx;
                        *(__size32*)(%esp - 4) = %ebx;
                        proc_0x00403a68(*(%esp + 8), %ecx, %edx);
                    }
                    if ( ~flags) {
                        *(__size32*)(%ebp - 64) -= %ecx;
                        *(__size32*)(%ebp - 4) -= %eax;
                        if ( ~( ~flags && flags)) {
                            *(__size32*)(%esp - 4) = %edx;
                            *(__size32*)(%ebp - 24)++;
                            *(__size32*)(%esp - 4) = %eax;
                            proc_0x00403a68(*(%esp + 8), %ecx, %edx);
                            *(__size32*)(%ebp - 64)--;
                            *(__size32*)(%ebp - 4)--;
                        }
                        *(__size32*)(%ebp - 16)--;
                        while (flags) {
                            *(__size32*)(%esp - 4) = %edx;
                            *(__size32*)(%esp - 4) = 48;
                            proc_0x00403a68(*(%esp + 8), %ecx, %edx);
                            *(__size32*)(%ebp - 16)--;
                        }
                    }
                    if ( ~flags) {
                        *(__size32*)(%ebp - 68) = %eax;
                        *(__size32*)(%ebp - 76) = %edx;
                        *(__size32*)(%ebp - 84) = %ecx;
                        do {
                            *(__size32*)(%ebp - 84)--;
                            if (flags) {
                                *(__size32*)(%ebp - 68) += 2;
                                *(__size32*)(%esp - 4) = %edx;
                                *(__size32*)(%esp - 4) = %ecx;
                                proc_0x0040487c(*(%esp + 4), *(%esp + 8));
                                *(__size32*)(%ebp - 80) = %eax;
                                if ( ~flags) {
                                    if (flags) {
                                        continue;
                                    }
                                    break;
                                }
                            }
                            *(__size32*)(%ebp - 24) = %edx;
                            *(__size32*)(%ebp - 64) = %ecx;
                            goto bb0x404325;
bb0x4042fc:
                            *(__size8*)%edx = %bl;
                            *(__size32*)(%ebp - 76)++;
                        } while (flags);
                        goto bb0x4042fc;
                    }
bb0x404325:
                    if ( ~flags) {
                        *(__size32*)(%ebp - 4) -= %eax;
                        *(__size32*)(%ebp - 64)--;
                        while (flags) {
                            *(__size32*)(%esp - 4) = %edx;
                            *(__size32*)(%ebp - 24)++;
                            *(__size32*)(%esp - 4) = %eax;
                            proc_0x00403a68(*(%esp + 8), %ecx, %edx);
                            *(__size32*)(%ebp - 64)--;
                        }
                    }
                    *(__size32*)(%ebp - 4)--;
                    while (flags) {
                        *(__size32*)(%esp - 4) = %ecx;
                        *(__size32*)(%esp - 4) = 32;
                        proc_0x00403a68(*(%esp + 8), %ecx, %edx);
                        *(__size32*)(%ebp - 4)--;
                    }
                    goto bb0x403b18;
                case 11:
                    *(__size32*)(%ebp - 56) = 8;
bb0x403e23:
                    *(__size8*)(%ebp - 9) = 0;
                    goto bb0x403e34;
                case 12:
                    *(__size32*)(%ebp - 56) = 10;
                    goto bb0x403e23;
                case 13:
                    *(__size32*)(%ebp - 56) = 16;
                    *(__size8*)(%ebp - 29) = %dl;
                    goto bb0x403e23;
                case 14:
                    *(__size32*)(%ebp + 28) += 4;
                    *(__size32*)(%ebp - 24) = %edx;
                    *(__size32*)(%esp - 4) = %ecx;
                    *(__size32*)(%esp - 4) = %eax;
                    proc_0x00403a9c(*(%esp + 4), *(%esp + 8));
                    *(__size8*)(%ebp - 176) = 0;
                    *(__size32*)(%ebp - 24) = %edx;
                    goto bb0x404148;
                case 15:
                    if ( ~flags) {
bb0x404101:
                        *(__size32*)(%esp - 4) = %eax;
                        *(__size32*)(%esp - 4) = %edx;
                        *(__size32*)(%esp - 4) = %ebx;
                        *(__size32*)(%ebp - 24) = %ecx;
                        *(__size32*)(%esp - 4) = %ecx;
                        if ( ~flags) {
bb0x404123:
                            *(__size32*)(%esp - 4) = %eax;
                            *(__size32*)(%esp - 4) = %edx;
                            proc_0x00404fc8();
                        }
                        goto bb0x404123;
                    }
                    goto bb0x404101;
                case 16:
bb0x403fbd:
                    if (flags) {
                        *(__size32*)(%ebp + 28) += 4;
                        local1 = %al;
                        *(__size8*)(%ebp - 183) = 0;
                        *(__size32*)(%ebp - 24) = %edx;
                        *(__size32*)(%ebp - 28) = %ecx;
                        *(__size32*)(%ebp - 64) = 1;
                        goto bb0x4041b6;
                    }
                    else {
                        *(__size32*)(%ebp + 28) += 4;
                        local0 = %ax;
                        *(__size16*)(%ebp - 182) = 0;
                        *(__size32*)(%ebp - 28) = 1;
                        *(__size32*)(%ebp - 24) = %edx;
                        *(__size32*)(%ebp - 64) = 1;
                        goto bb0x4041b6;
                    }
                    goto bb0x4041b6;
                case 17:
bb0x404038:
                    if (flags) {
                        *(__size32*)(%ebp + 28) += 4;
                        *(__size32*)(%ebp - 24) = %eax;
                        *(__size32*)(%ebp - 28) = %edx;
                        if ( ~flags) {
                            *(__size32*)(%ebp - 24) = 0x40b1e4;
                        }
                    }
                    else {
                        *(__size32*)(%ebp + 28) += 4;
                        *(__size32*)(%ebp - 24) = %edx;
                        *(__size32*)(%ebp - 28) = 1;
                        if ( ~flags) {
                            *(__size32*)(%ebp - 24) = 0x40b1ec;
                        }
                    }
                    if (flags) {
                        if (flags) {
                        }
                        else {
                        }
                        *(__size32*)(%ebp - 64) = %ecx;
                        while ( ~flags) {
                            if ( ~flags) {
                                goto bb0x4041b6;
                            }
                            *(__size32*)(%ebp - 64)++;
                        }
                        goto bb0x4041b6;
                    }
                    else {
                        if (flags) {
                        }
                        else {
                        }
                        *(__size32*)(%ebp - 64) = %ecx;
                        while ( ~flags) {
                            if ( ~flags) {
                                goto bb0x4041b6;
                            }
                            *(__size32*)(%ebp - 64)++;
                        }
                        goto bb0x4041b6;
                    }
                    goto bb0x4041b6;
                case 18:
                    if ( ~flags) {
                        goto bb0x403fbd;
                    }
                    goto bb0x403fbd;
                case 19:
                    if ( ~flags) {
                        goto bb0x404038;
                    }
                    goto bb0x404038;
                case 20:
                    *(__size32*)(%ebp + 28) += 4;
                    *(__size32*)(%ebp - 24) = %ecx;
                    if (flags) {
                        if (flags) {
                            local5 = %ecx;
                            goto bb0x403b18;
                        }
                        else {
                            local3 = %ax;
                            goto bb0x403b18;
                        }
                        goto bb0x403b18;
                    }
                    else {
                        *(__size32*)%eax = %edx;
                        goto bb0x403b18;
                    }
                    goto bb0x403b18;
                case 21:
                    goto bb0x4043d8;
                case 22:
                    goto bb0x4043d8;
                case 23:
                    goto bb0x4043d8;
                case 24:
                    goto bb0x403b8b;
                case 25:
                    goto bb0x403b8b;
                case 26:
                    if (flags) {
                        if (flags) {
                            if (flags) {
                                if (flags) {
                                    goto bb0x403b8b;
                                }
                                goto bb0x403b8b;
                            }
                            else {
                                goto bb0x403b8b;
                            }
                        }
                        else {
                            goto bb0x403b8b;
                        }
                    }
                    else {
                        goto bb0x403b8b;
                    }
                }
            }
            else {
                goto bb0x403b30;
            }
        }
bb0x403b18:
    }
bb0x4043e4:
    *(__size32*)(%esp - 4) = %ecx;
    proc_0x00403a20(*(%esp + 4), %edx);
    if (flags) {
    }
    else {
    }
    return;
}

/** address: 0x00403a68 */
__size32 proc_0x00403a68(__size32 param1, unsigned int param2, unsigned int param3)
{
    unsigned char al; 		// r8
    union { unsigned int *; int; } eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    unsigned int ecx; 		// r25
    unsigned int edx; 		// r26
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{0}
    __size32 esp_4; 		// r28{0}
    unsigned int local3; 		// param2{0}
    unsigned int local4; 		// param3{0}
    union { __size32 *; __size32; } local5; 		// esp{0}
    unsigned int local6; 		// edx{0}
    unsigned int local7; 		// ecx{0}

    ebp = (esp_4 - 4);
    esp_1 = (esp_4 - 8);
    ebx = param1;
    local3 = param2;
    local4 = param3;
    local5 = esp_1;
    if (*(param1 + 80) >= 80) {
        edx = proc_0x00403a20(param1, param3); /* Warning: also results in ebx, esp, ebp */
        local4 = edx;
        ecx = *esp;
        esp += 4;
        local3 = ecx;
        local5 = esp;
    }
    param2 = local3;
    param3 = local4;
    esp = local5;
    eax = *(ebx + 100);
    al = (unsigned char) eax;
    local6 = param3;
    local7 = param2;
    if (eax == 0) {
bb0x403a8a:
        edx = local6;
        ecx = *(ebx + 80);
        al = *(ebp + 8);
        eax = eax >> 8 & 0xffffff | (al);
        *(unsigned char*)(ebx + ecx) = al;
        *(__size32*)(ebx + 80)++;
        local7 = ecx;
    }
    else {
        edx = *eax;
        local6 = edx;
        if (edx > *(ebx + 92)) {
            goto bb0x403a8a;
        }
    }
    ecx = local7;
    *(__size32*)(ebx + 92)++;
    ebx = *esp;
    ebp = *(esp + 4);
    return eax; /* WARNING: Also returning: al := al, ecx := ecx, edx := edx, ebx := ebx, ebp := ebp */
}

/** address: 0x00403a20 */
__size32 proc_0x00403a20(__size32 param1, __size32 param2)
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    unsigned int ecx; 		// r25
    union { unsigned int *; int; } edx; 		// r26
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{0}
    __size32 esp_4; 		// r28{0}
    __size32 local8; 		// param2{0}
    union { __size32 *; __size32; } local9; 		// esp{0}

    esp_1 = esp_4 - 8;
    eax = 1;
    local8 = param2;
    local9 = esp_1;
    if (*(param1 + 80) != 0) {
        edx = *(param1 + 100);
        flags = LOGICALFLAGS32(edx);
        if (edx != 0) {
            ecx = *edx;
            tmp1 = ecx - *(param1 + 92);
            flags = SUBFLAGS32(ecx, *(param1 + 92), tmp1);
            if (ecx <= *(param1 + 92)) {
                eax = 0;
                flags = LOGICALFLAGS32(0);
            }
        }
        edx = *(param1 + 88);
        ecx = *(param1 + 80);
        (**(param1 + 84))(eax, ecx, edx, param1, esp_4 - 4, flags, ZF, CF, param1, ebp, ebx, eax, edx, ecx, param1, pc);
        local8 = edx;
        esp += 16;
        local9 = esp;
        if (eax == 0) {
            *(__size32*)(ebx + 96) = 1;
        }
        eax = 0;
        *(__size32*)(ebx + 80) = 0;
    }
    param2 = local8;
    esp = local9;
    ebx = *esp;
    ebp = *(esp + 4);
    return eax; /* WARNING: Also returning: edx := param2, ebx := ebx, ebp := ebp */
}

/** address: 0x00405090 */
void proc_0x00405090(unsigned long long param1, long long param2, union { __size8 *; __size32; } param3, unsigned long long param4, unsigned int param5, int param6)
{
    unsigned int al; 		// r8
    unsigned long long eax; 		// r24
    unsigned long long eax_2; 		// r24{0}
    unsigned long long eax_3; 		// r24{0}
    int eax_6; 		// r24{0}
    unsigned long long eax_9; 		// r24{0}
    int ebx; 		// r27
    __size32 ebx_1; 		// r27{0}
    __size32 ebx_2; 		// r27{0}
    long long edx; 		// r26
    __size32 esi; 		// r30
    long long esp; 		// r28
    unsigned long long local0; 		// m[esp + 4]
    long long local1; 		// m[esp + 8]
    unsigned long long local11; 		// param1{0}
    long long local12; 		// param2{0}
    unsigned long long local13; 		// local0{0}
    long long local14; 		// local1{0}
    unsigned long long local15; 		// eax_9{0}
    __size32 local16; 		// ebx_1{0}
    unsigned long long local4; 		// m[esp + 4]{0}
    __size8 local8; 		// m[esi]{0}
    int local9; 		// m[esi]{0}

    esi = param3;
    local11 = param1;
    local11 = param1;
    local11 = param1;
    local12 = param2;
    local12 = param2;
    local12 = param2;
    if ( ~((long long)param4 < 2 || (long long)param4 > 36)) {
        if (param2 != 0) {
            if (param2 < 0) {
                if (param5 != 0) {
                    *(__size8*)param3 = 45;
                    esi = param3 + 1;
                    local4 = 0 - param1;
                    local1 = 0 - param2 + (param1 != 0);
                    local11 = local4;
                    local12 = local1;
                }
            }
        }
        else {
        }
        param1 = local11;
        param2 = local12;
        ebx = (esp - 72);
        local13 = param1;
        local14 = param2;
        do {
            local0 = local13;
            local1 = local14;
            proc_0x00404d5a(param4,  ((long long)param4 < 0) ? -1 : 0, local1);
            *(__size8*)ebx = (unsigned char) local0;
            ebx++;
            proc_0x00404c97(param4,  ((long long)param4 < 0) ? -1 : 0, local1);
            local15 = eax_2;
            local16 = ebx;
            local0 = eax_2;
            local1 = edx;
            local13 = local0;
            local14 = local1;
        } while (edx != 0 || eax_2 != 0);
bb0x40512d:
        eax_9 = local15;
        ebx_1 = local16;
        while (ebx_1 != esp - 72) {
            ebx_2 = ebx_1 - 1;
            al = *(ebx_1 - 1);
            eax_6 = eax_9 >> 8 & 0xffffff | (al);
            local16 = ebx_2;
            local16 = ebx_2;
            if ((int)al < 10) {
                eax_3 = eax_6 + 48;
                local8 = (unsigned char) eax_6 + 48;
                esi++;
                local15 = eax_3;
                goto bb0x40512d;
            }
            al = (al + param6);
            eax = (eax_6 >> 8 & 0xffffff | (al)) >> 8 & 0xffffff | (al - 10);
            local9 = al - 10;
            esi++;
            local15 = eax;
bb0x40512d:
            eax_9 = local15;
            ebx_1 = local16;
        }
    }
    *(__size8*)esi = 0;
    return;
}

/** address: 0x00402250 */
void proc_0x00402250(union { __size32 * x297; int; char *; } param1)
{
    union { int; int *; __size32 * x296; } eax; 		// r24
    int edx; 		// r26

    eax = param1;
    tmpb = (unsigned char) param1 & 0x3;
    if (((unsigned char) param1 & 0x3) != 0) {
        tmpb = *param1 & 0xff;
        if (tmpb == 0) {
bb0x40229f:
bb0x4022a0:
bb0x4022a1:
        }
        else {
            tmpb = *(param1 + 1) & 0xff;
            if (tmpb == 0) {
                goto bb0x4022a0;
            }
            else {
                tmpb = *(param1 + 2) & 0xff;
                if (tmpb == 0) {
                    goto bb0x4022a1;
                }
                else {
                    eax = param1 + 3 >> 8 & 0xffffff | ((unsigned char) param1 + 3 & ~0x3);
                    do {
bb0x402258:
                        edx = *eax;
                        eax += 4;
                        if ((edx - 0x1010101 & 0x80808080) == 0) {
                            goto bb0x402258;
                        }
                        else {
                            edx = edx - 0x1010101 & 0x80808080 &  ~edx;
                        }
                    } while (edx == 0);
                    if ((unsigned char) edx != 0) {
                        goto bb0x40229f;
                    }
                    else {
                        if ((edx >> 8 & 0xff) != 0) {
                            goto bb0x4022a0;
                        }
                        else {
                            if ((edx & 0xff0000) != 0) {
                                goto bb0x4022a1;
                            }
                            else {
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        goto bb0x402258;
    }
    return;
}

/** address: 0x0040487c */
void proc_0x0040487c(union { unsigned int *; int; } param1, unsigned int param2)
{
    __size32 eax; 		// r24

    if (param1 != 0) {
        if (*(global_0x0040b59c + 8) == 0) {
            eax = WideCharToMultiByte();
            if (eax == 0) {
            }
            else {
            }
        }
        else {
            if (param2 <= 255) {
                *(unsigned int*)param1 = param2;
            }
            else {
            }
        }
    }
    else {
    }
    return;
}

/** address: 0x00403a9c */
void proc_0x00403a9c(int param1, __size32 param2)
{
    unsigned char dl; 		// r10
    __size32 eax; 		// r24
    int ecx; 		// r25
    int ecx_1; 		// r25{0}
    int esi; 		// r30

    ecx = 7;
    esi = param1;
    eax = param2 + 7;
    do {
        ecx_1 = ecx;
        if ((esi & 0xf) >= 10) {
            dl = (unsigned char) (esi & 0xf) + 55;
            *(unsigned char*)eax = (unsigned char) (esi & 0xf) + 55;
        }
        else {
            dl = (unsigned char) (esi & 0xf) + 48;
            *(unsigned char*)eax = (unsigned char) (esi & 0xf) + 48;
        }
        esi = (unsigned int)esi >> 4;
        ecx = ecx_1 - 1;
        eax--;
    } while (ecx_1 >= 1);
    return;
}

/** address: 0x00404fc8 */
void proc_0x00404fc8()
{
/* goto m[0x40b780] */
}

/** address: 0x00404fce */
void proc_0x00404fce()
{
/* goto m[0x40b784] */
}

/** address: 0x00404d5a */
void proc_0x00404d5a(unsigned long long param1, unsigned int param2, unsigned int param3)
{
    if (param2 == 0 && param3 == 0) {
    }
    else {
        if ( ~(ROTLC(0) < param2 || ROTLC(0) <= param2 && ROTLC(0) < param1)) {
        }
    }
    return;
}

/** address: 0x00404c97 */
void proc_0x00404c97(unsigned long long param1, unsigned long long param2, unsigned int param3)
{
    if (param2 == 0 && param3 == 0) {
    }
    else {
        if ( ~(ROTLC(0) < param2 || ROTLC(0) <= param2 && ROTLC(0) < param1)) {
        }
    }
    return;
}


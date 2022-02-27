/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400ac0 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = .text;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400bb0 */
#include <stdint.h>
 
void TM_2lQWYPc4hWuvSK7bVeWxSA_4 (void) {
    rdi = name_6AZmjR50AehluhCwumgXmw;
    esi = 0;
    return nimGCvisit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x406290 */
#include <stdint.h>
 
int64_t nimGCvisit (int64_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_0;
    }
    rbx = rdi - 0x10;
    if (sil == 1) {
        goto label_1;
    }
    if (sil == 0) {
        goto label_2;
    }
    if (sil == 2) {
        goto label_3;
    }
    if (sil != 3) {
        goto label_4;
    }
    rdx = .comment;
    rax = .comment;
    rbp = .comment;
    if (rdx <= rax) {
        rdx *= 3;
        edi = 0x60f060;
        rax = rdx;
        rax >>= 0x3f;
        rax += rdx;
        rax >>= 1;
        rsi = rax*8 + 0x10;
        *(0x0060f048) = rax;
        rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
        *((rax + 8)) = 1;
        rbp = rax + 0x10;
        rax = .comment;
        memcpy (rbp, *(0x0060f050), rax*8);
        rax = .comment;
        edi = 0x60f060;
        rsi = rax - 0x10;
        rawDealloc_DA62HrGC5sdfCED505KyyQ ();
        *(0x0060f050) = rbp;
        rax = .comment;
    }
    *((rbp + rax*8)) = rbx;
    *(0x0060f040)++;
    do {
label_4:
        return rax;
label_0:
        return rax;
label_3:
        rax = *((rdi - 0x10));
        rax -= 8;
        *((rdi - 0x10)) = rax;
    } while (rax > 7);
    rsi = rbx;
    edi = 0x60f010;
    void (*0x4040b0)() ();
label_1:
    rax = .comment;
    if (rax <= *(0x0060f040)) {
        rdx = rax * 3;
        edi = 0x60f060;
        rax = rdx;
        rax >>= 0x3f;
        rax += rdx;
        rax >>= 1;
        rsi = rax*8 + 0x10;
        *(0x0060f048) = rax;
        rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
        *((rax + 8)) = 1;
        rbp = rax + 0x10;
        rax = .comment;
        memcpy (rbp, *(0x0060f050), rax*8);
        rax = .comment;
        edi = 0x60f060;
        rsi = rax - 0x10;
        rawDealloc_DA62HrGC5sdfCED505KyyQ ();
        *(0x0060f050) = rbp;
    }
    rdx = .comment;
    rax = .comment;
    *((rax + rdx*8)) = rbx;
    *(0x0060f040)++;
    return rax;
label_2:
    rsi = rbx;
    edi = gch_IcYaEuuWivYAS86vFMTS3Q;
    return markS_NZr5o3Ubzrci4OmK29cHBJA ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4022f0 */
#include <stdint.h>
 
uint64_t rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg (int64_t arg2, int64_t arg1) {
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    rax = rsi + 7;
    r13 = rax;
    r13 &= 0xfffffffffffffff8;
    rbx = rdi;
    if (r13 <= 0xfc8) {
        goto label_5;
    }
    r13 = rsi + 0x20;
    if (r13 > 0x3f000000) {
        goto label_6;
    }
    rsi = r13;
    rax = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
    r12 = rbp + 0x20;
    if (*((rbx + 0x30a8)) == 0) {
        goto label_7;
    }
label_0:
    rcx = r12 + r13;
    rsi = rbx + 0x30a8;
    rdx = r12;
    rdi = rbx;
    add_Xuf47u3imOz8BOk5HURLWQ ();
    rax = *((rbp + 8));
    *((rbx + 0x2898)) += rax;
    do {
        rax = r12;
        return rax;
label_5:
        rax &= 0xfffffffffffffff8;
        rbp = rdi + rax;
        rdx = *((rbp + 0x10));
        if (rdx == 0) {
            goto label_8;
        }
        r12 = *((rdx + 0x20));
        if (r12 == 0) {
            goto label_9;
        }
        rax = *(r12);
        *((rdx + 0x20)) = rax;
label_3:
        rax = *((rdx + 0x28));
        rax -= r13;
        *((rdx + 0x28)) = rax;
        if (rax < r13) {
            rax = *((rdx + 0x10));
            if (rdx == *((rbp + 0x10))) {
                goto label_10;
            }
            rcx = *((rdx + 0x18));
            *((rcx + 0x10)) = rax;
            rax = *((rdx + 0x10));
            if (rax != 0) {
                rcx = *((rdx + 0x18));
                *((rax + 0x18)) = rcx;
            }
label_2:
            xmm0 = 0;
            __asm ("movups xmmword [rdx + 0x10], xmm0");
        }
label_1:
        *((rbx + 0x2898)) += r13;
    } while (1);
label_6:
    rax = mmap (0, r13, 3, 0x22, 0xffffffff, 0);
    rax = rax - 1;
    if (rax > 0xfffffffffffffffd) {
        goto label_11;
    }
    r12 = rbp;
    xmm0 = 0;
    *((rbx + 0x2880)) += r13;
    r14 = rbp;
    r12 >>= 0x15;
    __asm ("movups xmmword [rbp + 0x10], xmm0");
    r14 >>= 0xc;
    eax = (int32_t) r12b;
    *((rbp + 8)) = r13;
    r15 = rbx + rax*8;
    *(rbp) = 1;
    rax = *((r15 + 0x28a8));
    if (rax != 0) {
        goto label_12;
    }
    goto label_13;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_13;
        }
label_12:
    } while (r12 != *((rax + 8)));
label_4:
    rcx = r14;
    edx = 1;
    r12 = rbp + 0x20;
    ecx &= 0x1ff;
    rsi = rcx;
    rdx <<= cl;
    rsi >>= 6;
    *((rax + rsi*8 + 0x10)) |= rdx;
    if (*((rbx + 0x30a8)) != 0) {
        goto label_0;
    }
label_7:
    rax = rbx + 0x30d8;
    if (*((rbx + 0x30d8)) != 0) {
        *((rbx + 0x30a8)) = rax;
        goto label_0;
    }
    *((rsp + 8)) = rax;
    xmm0 = *((rsp + 8));
    *((rbx + 0x30a8)) = rax;
    __asm ("punpcklqdq xmm0, xmm0");
    __asm ("movups xmmword [rbx + 0x30d8], xmm0");
    goto label_0;
label_8:
    esi = 0x1000;
    rax = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
    xmm0 = 0;
    *((rax + 0x20)) = 0;
    rdx = rax;
    *((rax + 8)) = r13;
    *((rax + 0x30)) = r13;
    eax = 0xfc8;
    rax -= r13;
    __asm ("movups xmmword [rdx + 0x10], xmm0");
    *((rdx + 0x28)) = rax;
    rax = *((rbp + 0x10));
    *((rdx + 0x10)) = rax;
    if (rax != 0) {
        *((rax + 0x18)) = rdx;
    }
    *((rbp + 0x10)) = rdx;
    r12 = rdx + 0x38;
    if (r13 <= *((rdx + 0x28))) {
        goto label_1;
    }
    rax = *((rdx + 0x10));
label_10:
    *((rbp + 0x10)) = rax;
    if (rax == 0) {
        goto label_2;
    }
    *((rax + 0x18)) = 0;
    goto label_2;
label_9:
    rax = *((rdx + 0x30));
    r12 = rdx + rax + 0x38;
    rax += r13;
    *((rdx + 0x30)) = rax;
    goto label_3;
label_13:
    esi = 0x50;
    rdi = rbx;
    llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ ();
    rdx = *((r15 + 0x28a8));
    *(rax) = rdx;
    *((r15 + 0x28a8)) = rax;
    *((rax + 8)) = r12;
    goto label_4;
label_11:
    return raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400a30 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x402d40 */
#include <stdint.h>
 
int64_t rawDealloc_DA62HrGC5sdfCED505KyyQ (int64_t arg2, uint32_t arg1) {
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    r10 = rsi;
    rdx = *((rdi + 0x2898));
    r10 &= 0xfffffffffffff000;
    rax = *((r10 + 8));
    rdx -= rax;
    if (rax <= 0xfc8) {
        goto label_64;
    }
    rax = rdi + 0x30d8;
    *((rdi + 0x2898)) = rdx;
    while (1) {
        r11 = *((rdi + 0x30a8));
        r9 = rdi;
        *((rdi + 0x30b0)) = rax;
        if (r11 == *(r11)) {
            goto label_65;
        }
        rbx = r10 + 0x20;
        *((rdi + 0x30b8)) = r11;
        if (*((r11 + 0x10)) > rbx) {
            goto label_66;
        }
        *((rdi + 0x30b0)) = r11;
        rbp = *((r11 + 8));
        if (rbp == *(rbp)) {
            goto label_0;
        }
        *((rdi + 0x30b8)) = rbp;
        if (rbx < *((rbp + 0x10))) {
            goto label_67;
        }
        *((rdi + 0x30b0)) = rbp;
        r12 = *((r11 + 8));
        rbp = *((r12 + 8));
        if (rbp != *(rbp)) {
            *((rdi + 0x30b8)) = rbp;
            if (rbx < *((rbp + 0x10))) {
                goto label_68;
            }
            *((rdi + 0x30b0)) = rbp;
            r13 = *((r12 + 8));
            rbp = *((r13 + 8));
            if (rbp != *(rbp)) {
                *((rdi + 0x30b8)) = rbp;
                if (rbx < *((rbp + 0x10))) {
                    goto label_69;
                }
                *((rdi + 0x30b0)) = rbp;
                r14 = *((r13 + 8));
                rbp = *((r14 + 8));
                if (rbp != *(rbp)) {
                    *((rdi + 0x30b8)) = rbp;
                    if (rbx < *((rbp + 0x10))) {
                        goto label_70;
                    }
                    *((rdi + 0x30b0)) = rbp;
                    rbp = *((r14 + 8));
                    rsi = *((rbp + 8));
                    if (rsi != *(rsi)) {
                        *((rdi + 0x30b8)) = rsi;
                        if (rbx < *((rsi + 0x10))) {
                            goto label_71;
                        }
                        *((rdi + 0x30b0)) = rsi;
                        rax = *((rbp + 8));
                        rdx = rbx;
                        rsi = rax + 8;
                        del_C66us4UEWCXp84lHW4tDLA ();
label_44:
                        rsi = rbp + 8;
                        rdx = rbx;
                        rdi = r9;
                        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
                    }
label_19:
                    rsi = r14 + 8;
                    rdx = rbx;
                    rdi = r9;
                    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
                }
label_13:
                rsi = r13 + 8;
                rdx = rbx;
                rdi = r9;
                del_C66us4UEWCXp84lHW4tDLA_part_8 ();
            }
label_7:
            rsi = r12 + 8;
            rdx = rbx;
            rdi = r9;
            del_C66us4UEWCXp84lHW4tDLA_part_8 ();
        }
label_3:
        rsi = r11 + 8;
        rdx = rbx;
        rdi = r9;
        rax = del_C66us4UEWCXp84lHW4tDLA_part_8 ();
        goto label_0;
        *((rsp + 8)) = rax;
        xmm0 = *((rsp + 8));
        __asm ("punpcklqdq xmm0, xmm0");
        __asm ("movups xmmword [rdi + 0x30d8], xmm0");
    }
label_64:
    *((rdi + 0x2898)) = rdx;
    *((rsi + 8)) = 0;
    rdx = *((r10 + 0x20));
    *(rsi) = rdx;
    rdx = *((r10 + 0x28));
    *((r10 + 0x20)) = rsi;
    if (rdx >= rax) {
        rdx += rax;
        *((r10 + 0x28)) = rdx;
        if (rdx == 0xfc8) {
            rdx = rax + 7;
            __asm ("cmovs rax, rdx");
            rdx = *((r10 + 0x10));
            rax &= 0xfffffffffffffff8;
            rax += rdi;
            if (r10 == *((rax + 0x10))) {
                goto label_72;
            }
            rax = *((r10 + 0x18));
            *((rax + 0x10)) = rdx;
            rax = *((r10 + 0x10));
            if (rax != 0) {
                rdx = *((r10 + 0x18));
                *((rax + 0x18)) = rdx;
            }
label_4:
            *((r10 + 8)) = 0x1000;
            xmm0 = 0;
            rsi = r10;
            *((r10 + 0x10)) = xmm0;
            void (*0x402770)() ();
        }
        return rax;
label_1:
        r12 = *(rbp);
        if (r12 != *(r12)) {
            *((rdi + 0x30b8)) = r12;
            if (rbx < *((r12 + 0x10))) {
                goto label_73;
            }
            *((rdi + 0x30b0)) = r12;
            r13 = *(rbp);
            r12 = *((r13 + 8));
            if (r12 != *(r12)) {
                *((rdi + 0x30b8)) = r12;
                if (rbx < *((r12 + 0x10))) {
                    goto label_74;
                }
                *((rdi + 0x30b0)) = r12;
                r14 = *((r13 + 8));
                r12 = *((r14 + 8));
                if (r12 != *(r12)) {
                    *((rdi + 0x30b8)) = r12;
                    if (rbx < *((r12 + 0x10))) {
                        goto label_75;
                    }
                    *((rdi + 0x30b0)) = r12;
                    r12 = *((r14 + 8));
                    rsi = *((r12 + 8));
                    if (rsi != *(rsi)) {
                        *((rdi + 0x30b8)) = rsi;
                        if (rbx < *((rsi + 0x10))) {
                            goto label_76;
                        }
                        *((rdi + 0x30b0)) = rsi;
                        rax = *((r12 + 8));
                        rdx = rbx;
                        rsi = rax + 8;
                        del_C66us4UEWCXp84lHW4tDLA ();
label_36:
                        rsi = r12 + 8;
                        rdx = rbx;
                        rdi = r9;
                        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
                    }
label_22:
                    rsi = r14 + 8;
                    rdx = rbx;
                    rdi = r9;
                    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
                }
label_10:
                rsi = r13 + 8;
                rdx = rbx;
                rdi = r9;
                del_C66us4UEWCXp84lHW4tDLA_part_8 ();
            }
label_6:
            rdx = rbx;
            rsi = rbp;
            rdi = r9;
            del_C66us4UEWCXp84lHW4tDLA_part_8 ();
        }
label_2:
        rdx = rbx;
        rsi = r11;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
label_0:
        rsi = r9 + 0x30a8;
        rdx = rbx;
        rdi = r9;
        rax = del_C66us4UEWCXp84lHW4tDLA_part_8 ();
label_65:
        rsi = *((r10 + 8));
        if (rsi > 0x3f000000) {
            goto label_77;
        }
        rsi = r10;
        rdi = r9;
        void (*0x402770)() ();
    }
    r9 = rax + 7;
    __asm ("cmovns r9, rax");
    r9 &= 0xfffffffffffffff8;
    rdi += r9;
    rdx = *((rdi + 0x10));
    *((r10 + 0x10)) = rdx;
    if (rdx != 0) {
        *((rdx + 0x18)) = r10;
    }
    *((rdi + 0x10)) = r10;
    *((r10 + 0x28)) += rax;
    return rax;
label_77:
    rdx = r10;
    rcx = r10;
    rdx >>= 0x15;
    rcx >>= 0xc;
    eax = (int32_t) dl;
    rax = *((r9 + rax*8 + 0x28a8));
    if (rax != 0) {
        goto label_78;
    }
    goto label_79;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_79;
        }
label_78:
    } while (rdx != *((rax + 8)));
    ecx &= 0x1ff;
    edx = 1;
    rdi = rcx;
    rdx <<= cl;
    rdi >>= 6;
    rdx = ~rdx;
    *((rax + rdi*8 + 0x10)) &= rdx;
label_79:
    rax = *((r9 + 0x2880));
    rdi = r10;
    rdx = rax;
    if (*((r9 + 0x2888)) >= rax) {
        rdx = *((r9 + 0x2888));
    }
    rax -= rsi;
    *((r9 + 0x2880)) = rax;
    *((r9 + 0x2888)) = rdx;
    void (*0x400a50)() ();
label_66:
    rbp = *(r11);
    if (rbp == *(rbp)) {
        goto label_0;
    }
    *((rdi + 0x30b8)) = rbp;
    if (rbx < *((rbp + 0x10))) {
        goto label_1;
    }
    *((rdi + 0x30b0)) = rbp;
    r12 = *(r11);
    rbp = *((r12 + 8));
    if (rbp == *(rbp)) {
        goto label_2;
    }
    *((rdi + 0x30b8)) = rbp;
    if (rbx < *((rbp + 0x10))) {
        goto label_80;
    }
    *((rdi + 0x30b0)) = rbp;
    r13 = *((r12 + 8));
    rbp = *((r13 + 8));
    if (rbp != *(rbp)) {
        *((rdi + 0x30b8)) = rbp;
        if (rbx < *((rbp + 0x10))) {
            goto label_81;
        }
        *((rdi + 0x30b0)) = rbp;
        r14 = *((r13 + 8));
        rbp = *((r14 + 8));
        if (rbp != *(rbp)) {
            *((rdi + 0x30b8)) = rbp;
            if (rbx < *((rbp + 0x10))) {
                goto label_82;
            }
            *((rdi + 0x30b0)) = rbp;
            rbp = *((r14 + 8));
            rsi = *((rbp + 8));
            if (rsi != *(rsi)) {
                *((rdi + 0x30b8)) = rsi;
                if (rbx < *((rsi + 0x10))) {
                    goto label_83;
                }
                *((rdi + 0x30b0)) = rsi;
                rax = *((rbp + 8));
                rdx = rbx;
                rsi = rax + 8;
                del_C66us4UEWCXp84lHW4tDLA ();
label_48:
                rsi = rbp + 8;
                rdx = rbx;
                rdi = r9;
                del_C66us4UEWCXp84lHW4tDLA_part_8 ();
            }
label_31:
            rsi = r14 + 8;
            rdx = rbx;
            rdi = r9;
            del_C66us4UEWCXp84lHW4tDLA_part_8 ();
        }
label_16:
        rsi = r13 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_5:
    rsi = r12 + 8;
    rdx = rbx;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_2;
label_67:
    r12 = *(rbp);
    if (r12 == *(r12)) {
        goto label_3;
    }
    *((rdi + 0x30b8)) = r12;
    if (rbx < *((r12 + 0x10))) {
        goto label_84;
    }
    *((rdi + 0x30b0)) = r12;
    r13 = *(rbp);
    r12 = *((r13 + 8));
    if (r12 != *(r12)) {
        *((rdi + 0x30b8)) = r12;
        if (rbx < *((r12 + 0x10))) {
            goto label_85;
        }
        *((rdi + 0x30b0)) = r12;
        r14 = *((r13 + 8));
        r12 = *((r14 + 8));
        if (r12 != *(r12)) {
            *((rdi + 0x30b8)) = r12;
            if (rbx < *((r12 + 0x10))) {
                goto label_86;
            }
            *((rdi + 0x30b0)) = r12;
            r12 = *((r14 + 8));
            rsi = *((r12 + 8));
            if (rsi != *(rsi)) {
                *((rdi + 0x30b8)) = rsi;
                if (rbx < *((rsi + 0x10))) {
                    goto label_87;
                }
                *((rdi + 0x30b0)) = rsi;
                rax = *((r12 + 8));
                rdx = rbx;
                rsi = rax + 8;
                del_C66us4UEWCXp84lHW4tDLA ();
label_40:
                rsi = r12 + 8;
                rdx = rbx;
                rdi = r9;
                del_C66us4UEWCXp84lHW4tDLA_part_8 ();
            }
label_32:
            rsi = r14 + 8;
            rdx = rbx;
            rdi = r9;
            del_C66us4UEWCXp84lHW4tDLA_part_8 ();
        }
label_12:
        rsi = r13 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_8:
    rdx = rbx;
    rsi = rbp;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_3;
label_72:
    *((rax + 0x10)) = rdx;
    if (rdx == 0) {
        goto label_4;
    }
    *((rdx + 0x18)) = 0;
    goto label_4;
label_80:
    r13 = *(rbp);
    if (r13 == *(r13)) {
        goto label_5;
    }
    *((rdi + 0x30b8)) = r13;
    if (rbx < *((r13 + 0x10))) {
        goto label_88;
    }
    *((rdi + 0x30b0)) = r13;
    r14 = *(rbp);
    r13 = *((r14 + 8));
    if (r13 != *(r13)) {
        *((rdi + 0x30b8)) = r13;
        if (rbx < *((r13 + 0x10))) {
            goto label_89;
        }
        *((rdi + 0x30b0)) = r13;
        r13 = *((r14 + 8));
        rsi = *((r13 + 8));
        if (rsi != *(rsi)) {
            *((rdi + 0x30b8)) = rsi;
            if (rbx < *((rsi + 0x10))) {
                goto label_90;
            }
            *((rdi + 0x30b0)) = rsi;
            rax = *((r13 + 8));
            rdx = rbx;
            rsi = rax + 8;
            del_C66us4UEWCXp84lHW4tDLA ();
label_37:
            rsi = r13 + 8;
            rdx = rbx;
            rdi = r9;
            del_C66us4UEWCXp84lHW4tDLA_part_8 ();
        }
label_18:
        rsi = r14 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_15:
    rdx = rbx;
    rsi = rbp;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_5;
label_73:
    r13 = *(r12);
    if (r13 == *(r13)) {
        goto label_6;
    }
    *((rdi + 0x30b8)) = r13;
    if (rbx < *((r13 + 0x10))) {
        goto label_91;
    }
    *((rdi + 0x30b0)) = r13;
    r14 = *(r12);
    r13 = *((r14 + 8));
    if (r13 != *(r13)) {
        *((rdi + 0x30b8)) = r13;
        if (rbx < *((r13 + 0x10))) {
            goto label_92;
        }
        *((rdi + 0x30b0)) = r13;
        r13 = *((r14 + 8));
        rsi = *((r13 + 8));
        if (rsi != *(rsi)) {
            *((rdi + 0x30b8)) = rsi;
            if (rbx < *((rsi + 0x10))) {
                goto label_93;
            }
            *((rdi + 0x30b0)) = rsi;
            rax = *((r13 + 8));
            rdx = rbx;
            rsi = rax + 8;
            del_C66us4UEWCXp84lHW4tDLA ();
label_49:
            rsi = r13 + 8;
            rdx = rbx;
            rdi = r9;
            del_C66us4UEWCXp84lHW4tDLA_part_8 ();
        }
label_29:
        rsi = r14 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_14:
    rdx = rbx;
    rsi = r12;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_6;
label_68:
    r13 = *(rbp);
    if (r13 == *(r13)) {
        goto label_7;
    }
    *((rdi + 0x30b8)) = r13;
    if (rbx < *((r13 + 0x10))) {
        goto label_94;
    }
    *((rdi + 0x30b0)) = r13;
    r14 = *(rbp);
    r13 = *((r14 + 8));
    if (r13 != *(r13)) {
        *((rdi + 0x30b8)) = r13;
        if (rbx < *((r13 + 0x10))) {
            goto label_95;
        }
        *((rdi + 0x30b0)) = r13;
        r13 = *((r14 + 8));
        rsi = *((r13 + 8));
        if (rsi != *(rsi)) {
            *((rdi + 0x30b8)) = rsi;
            if (rbx < *((rsi + 0x10))) {
                goto label_96;
            }
            *((rdi + 0x30b0)) = rsi;
            rax = *((r13 + 8));
            rdx = rbx;
            rsi = rax + 8;
            del_C66us4UEWCXp84lHW4tDLA ();
label_45:
            rsi = r13 + 8;
            rdx = rbx;
            rdi = r9;
            del_C66us4UEWCXp84lHW4tDLA_part_8 ();
        }
label_28:
        rsi = r14 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_11:
    rdx = rbx;
    rsi = rbp;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_7;
label_84:
    r13 = *(r12);
    if (r13 == *(r13)) {
        goto label_8;
    }
    *((rdi + 0x30b8)) = r13;
    if (rbx < *((r13 + 0x10))) {
        goto label_97;
    }
    *((rdi + 0x30b0)) = r13;
    r14 = *(r12);
    r13 = *((r14 + 8));
    if (r13 == *(r13)) {
        goto label_9;
    }
    *((rdi + 0x30b8)) = r13;
    if (rbx < *((r13 + 0x10))) {
        goto label_98;
    }
    *((rdi + 0x30b0)) = r13;
    r13 = *((r14 + 8));
    rsi = *((r13 + 8));
    if (rsi != *(rsi)) {
        *((rdi + 0x30b8)) = rsi;
        if (rbx < *((rsi + 0x10))) {
            goto label_99;
        }
        *((rdi + 0x30b0)) = rsi;
        rax = *((r13 + 8));
        rdx = rbx;
        rsi = rax + 8;
        del_C66us4UEWCXp84lHW4tDLA ();
label_41:
        rsi = r13 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_21:
    rsi = r14 + 8;
    rdx = rbx;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    do {
label_9:
        rdx = rbx;
        rsi = r12;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
        goto label_8;
label_97:
        r14 = *(r13);
    } while (r14 == *(r14));
    *((rdi + 0x30b8)) = r14;
    if (rbx < *((r14 + 0x10))) {
        goto label_100;
    }
    *((rdi + 0x30b0)) = r14;
    r14 = *(r13);
    rsi = *((r14 + 8));
    if (rsi != *(rsi)) {
        *((rdi + 0x30b8)) = rsi;
        if (rbx < *((rsi + 0x10))) {
            goto label_101;
        }
        *((rdi + 0x30b0)) = rsi;
        rax = *((r14 + 8));
        rdx = rbx;
        rsi = rax + 8;
        del_C66us4UEWCXp84lHW4tDLA ();
label_42:
        rsi = r14 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_20:
    rdx = rbx;
    rsi = r13;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_9;
label_74:
    r14 = *(r12);
    if (r14 == *(r14)) {
        goto label_10;
    }
    *((rdi + 0x30b8)) = r14;
    if (rbx < *((r14 + 0x10))) {
        goto label_102;
    }
    *((rdi + 0x30b0)) = r14;
    r14 = *(r12);
    rsi = *((r14 + 8));
    if (rsi != *(rsi)) {
        *((rdi + 0x30b8)) = rsi;
        if (rbx < *((rsi + 0x10))) {
            goto label_103;
        }
        *((rdi + 0x30b0)) = rsi;
        rax = *((r14 + 8));
        rdx = rbx;
        rsi = rax + 8;
        del_C66us4UEWCXp84lHW4tDLA ();
label_60:
        rsi = r14 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_30:
    rdx = rbx;
    rsi = r12;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_10;
label_94:
    r14 = *(r13);
    if (r14 == *(r14)) {
        goto label_11;
    }
    *((rdi + 0x30b8)) = r14;
    if (rbx < *((r14 + 0x10))) {
        goto label_104;
    }
    *((rdi + 0x30b0)) = r14;
    r14 = *(r13);
    rsi = *((r14 + 8));
    if (rsi != *(rsi)) {
        *((rdi + 0x30b8)) = rsi;
        if (rbx < *((rsi + 0x10))) {
            goto label_105;
        }
        *((rdi + 0x30b0)) = rsi;
        rax = *((r14 + 8));
        rdx = rbx;
        rsi = rax + 8;
        del_C66us4UEWCXp84lHW4tDLA ();
label_58:
        rsi = r14 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_26:
    rdx = rbx;
    rsi = r13;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_11;
label_85:
    r14 = *(r12);
    if (r14 == *(r14)) {
        goto label_12;
    }
    *((rdi + 0x30b8)) = r14;
    if (rbx < *((r14 + 0x10))) {
        goto label_106;
    }
    *((rdi + 0x30b0)) = r14;
    r14 = *(r12);
    rsi = *((r14 + 8));
    if (rsi != *(rsi)) {
        *((rdi + 0x30b8)) = rsi;
        if (rbx < *((rsi + 0x10))) {
            goto label_107;
        }
        *((rdi + 0x30b0)) = rsi;
        rax = *((r14 + 8));
        rdx = rbx;
        rsi = rax + 8;
        del_C66us4UEWCXp84lHW4tDLA ();
label_56:
        rsi = r14 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_24:
    rdx = rbx;
    rsi = r12;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_12;
label_69:
    r14 = *(rbp);
    if (r14 == *(r14)) {
        goto label_13;
    }
    *((rdi + 0x30b8)) = r14;
    if (rbx < *((r14 + 0x10))) {
        goto label_108;
    }
    *((rdi + 0x30b0)) = r14;
    r14 = *(rbp);
    rsi = *((r14 + 8));
    if (rsi != *(rsi)) {
        *((rdi + 0x30b8)) = rsi;
        if (rbx < *((rsi + 0x10))) {
            goto label_109;
        }
        *((rdi + 0x30b0)) = rsi;
        rax = *((r14 + 8));
        rdx = rbx;
        rsi = rax + 8;
        del_C66us4UEWCXp84lHW4tDLA ();
label_38:
        rsi = r14 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_25:
    rdx = rbx;
    rsi = rbp;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_13;
label_91:
    r14 = *(r13);
    if (r14 == *(r14)) {
        goto label_14;
    }
    *((rdi + 0x30b8)) = r14;
    if (rbx < *((r14 + 0x10))) {
        goto label_110;
    }
    *((rdi + 0x30b0)) = r14;
    r14 = *(r13);
    rsi = *((r14 + 8));
    if (rsi != *(rsi)) {
        *((rdi + 0x30b8)) = rsi;
        if (rbx < *((rsi + 0x10))) {
            goto label_111;
        }
        *((rdi + 0x30b0)) = rsi;
        rax = *((r14 + 8));
        rdx = rbx;
        rsi = rax + 8;
        del_C66us4UEWCXp84lHW4tDLA ();
label_52:
        rsi = r14 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_27:
    rdx = rbx;
    rsi = r13;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_14;
label_88:
    r14 = *(r13);
    if (r14 == *(r14)) {
        goto label_15;
    }
    *((rdi + 0x30b8)) = r14;
    if (rbx < *((r14 + 0x10))) {
        goto label_112;
    }
    *((rdi + 0x30b0)) = r14;
    r14 = *(r13);
    rsi = *((r14 + 8));
    if (rsi != *(rsi)) {
        *((rdi + 0x30b8)) = rsi;
        if (rbx < *((rsi + 0x10))) {
            goto label_113;
        }
        *((rdi + 0x30b0)) = rsi;
        rax = *((r14 + 8));
        rdx = rbx;
        rsi = rax + 8;
        del_C66us4UEWCXp84lHW4tDLA ();
label_34:
        rsi = r14 + 8;
        rdx = rbx;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    }
label_23:
    rdx = rbx;
    rsi = r13;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_15;
label_81:
    r14 = *(rbp);
    if (r14 == *(r14)) {
        goto label_16;
    }
    *((rdi + 0x30b8)) = r14;
    if (rbx < *((r14 + 0x10))) {
        goto label_114;
    }
    *((rdi + 0x30b0)) = r14;
    r14 = *(rbp);
    rsi = *((r14 + 8));
    if (rsi == *(rsi)) {
        goto label_17;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_115;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *((r14 + 8));
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_33:
    rsi = r14 + 8;
    rdx = rbx;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    do {
label_17:
        rdx = rbx;
        rsi = rbp;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
        goto label_16;
label_114:
        rsi = *(r14);
    } while (rsi == *(rsi));
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_116;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r14);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_35:
    rdx = rbx;
    rsi = r14;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_17;
label_89:
    rsi = *(r13);
    if (rsi == *(rsi)) {
        goto label_18;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_117;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r13);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_39:
    rdx = rbx;
    rsi = r13;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_18;
label_70:
    rsi = *(rbp);
    if (rsi == *(rsi)) {
        goto label_19;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_118;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(rbp);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_46:
    rdx = rbx;
    rsi = rbp;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_19;
label_100:
    rsi = *(r14);
    if (rsi == *(rsi)) {
        goto label_20;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_119;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r14);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_43:
    rdx = rbx;
    rsi = r14;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_20;
label_98:
    rsi = *(r13);
    if (rsi == *(rsi)) {
        goto label_21;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_120;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r13);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_47:
    rdx = rbx;
    rsi = r13;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_21;
label_75:
    rsi = *(r12);
    if (rsi == *(rsi)) {
        goto label_22;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_121;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r12);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_54:
    rdx = rbx;
    rsi = r12;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_22;
label_112:
    rsi = *(r14);
    if (rsi == *(rsi)) {
        goto label_23;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_122;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r14);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_57:
    rdx = rbx;
    rsi = r14;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_23;
label_106:
    rsi = *(r14);
    if (rsi == *(rsi)) {
        goto label_24;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_123;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r14);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_50:
    rdx = rbx;
    rsi = r14;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_24;
label_108:
    rsi = *(r14);
    if (rsi == *(rsi)) {
        goto label_25;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_124;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r14);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_62:
    rdx = rbx;
    rsi = r14;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_25;
label_104:
    rsi = *(r14);
    if (rsi == *(rsi)) {
        goto label_26;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_125;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r14);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_53:
    rdx = rbx;
    rsi = r14;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_26;
label_110:
    rsi = *(r14);
    if (rsi == *(rsi)) {
        goto label_27;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_126;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r14);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_59:
    rdx = rbx;
    rsi = r14;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_27;
label_95:
    rsi = *(r13);
    if (rsi == *(rsi)) {
        goto label_28;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_127;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r13);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_51:
    rdx = rbx;
    rsi = r13;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_28;
label_92:
    rsi = *(r13);
    if (rsi == *(rsi)) {
        goto label_29;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_128;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r13);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_61:
    rdx = rbx;
    rsi = r13;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_29;
label_102:
    rsi = *(r14);
    if (rsi == *(rsi)) {
        goto label_30;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_129;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r14);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_55:
    rdx = rbx;
    rsi = r14;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_30;
label_82:
    rsi = *(rbp);
    if (rsi == *(rsi)) {
        goto label_31;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_130;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(rbp);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
label_63:
    rdx = rbx;
    rsi = rbp;
    rdi = r9;
    del_C66us4UEWCXp84lHW4tDLA_part_8 ();
    goto label_31;
label_86:
    rsi = *(r12);
    if (rsi == *(rsi)) {
        goto label_32;
    }
    *((rdi + 0x30b8)) = rsi;
    if (rbx < *((rsi + 0x10))) {
        goto label_131;
    }
    *((rdi + 0x30b0)) = rsi;
    rax = *(r12);
    rdx = rbx;
    rsi = rax + 8;
    del_C66us4UEWCXp84lHW4tDLA ();
    do {
        rdx = rbx;
        rsi = r12;
        rdi = r9;
        del_C66us4UEWCXp84lHW4tDLA_part_8 ();
        goto label_32;
label_115:
        rdx = rbx;
        del_C66us4UEWCXp84lHW4tDLA ();
        goto label_33;
label_131:
        rdx = rbx;
        del_C66us4UEWCXp84lHW4tDLA ();
    } while (1);
label_113:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_34;
label_116:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_35;
label_76:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_36;
label_90:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_37;
label_109:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_38;
label_117:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_39;
label_87:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_40;
label_99:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_41;
label_101:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_42;
label_119:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_43;
label_71:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_44;
label_96:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_45;
label_118:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_46;
label_120:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_47;
label_83:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_48;
label_93:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_49;
label_123:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_50;
label_127:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_51;
label_111:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_52;
label_125:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_53;
label_121:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_54;
label_129:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_55;
label_107:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_56;
label_122:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_57;
label_105:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_58;
label_126:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_59;
label_103:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_60;
label_128:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_61;
label_124:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_62;
label_130:
    rdx = rbx;
    del_C66us4UEWCXp84lHW4tDLA ();
    goto label_63;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x404ed0 */
#include <stdint.h>
 
int64_t incl_m4q9b16kJJcoKe9c4ERtlpCg (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r12 = rsi;
    r12 >>= 0xc;
    rbx = rsi;
    rdx = r12;
    rsi = *((rdi + 8));
    rdi = *((rdi + 0x18));
    rdx &= rsi;
    r13 = rdx*8;
    r8 = rdi + r13;
    rax = *(r8);
    if (rax == 0) {
        goto label_3;
    }
    rcx = rdx;
    if (r12 != *((rax + 8))) {
        goto label_4;
    }
    goto label_5;
    do {
        if (r12 == *((rax + 8))) {
            goto label_5;
        }
label_4:
        rcx *= 5;
        rcx &= rsi;
        rax = *((rdi + rcx*8));
    } while (rax != 0);
label_3:
    rax = *(rbp);
    rcx = rsi + 1;
    r10 = rcx + rcx;
    r9 = rax * 3;
    if (r10 < r9) {
        goto label_6;
    }
    rcx -= rax;
    if (rcx <= 3) {
        goto label_6;
    }
label_0:
    rax++;
    *(rbp) = rax;
    if (*(r8) == 0) {
        goto label_7;
    }
    do {
        rdx *= 5;
        rdx &= rsi;
        r13 = rdx*8;
    } while (*((rdi + rdx*8)) != 0);
label_7:
    rax = .comment;
    if (rax == 0) {
        goto label_8;
    }
    rcx = *((rax + 0x20));
    if (rcx == 0) {
        goto label_9;
    }
    rdx = *(rcx);
    *((rax + 0x20)) = rdx;
    rdx = rcx;
    do {
        rdi = *((rax + 0x28));
        rsi = rdi - 0x60;
        *((rax + 0x28)) = rsi;
label_2:
        if (rsi <= 0x5f) {
            rsi = *((rax + 0x10));
            if (rax == *(0x0060f0d0)) {
                goto label_10;
            }
            rdi = *((rax + 0x18));
            *((rdi + 0x10)) = rsi;
            rsi = *((rax + 0x10));
            if (rsi != 0) {
                rdi = *((rax + 0x18));
                *((rsi + 0x18)) = rdi;
            }
label_1:
            xmm0 = 0;
            __asm ("movups xmmword [rax + 0x10], xmm0");
        }
        rax = rdx + 0x10;
        xmm0 = 0;
        *(0x006118f8) += 0x60;
        *((rcx + 8)) = 1;
        __asm ("movups xmmword [rdx + 0x10], xmm0");
        __asm ("movups xmmword [rax + 0x10], xmm0");
        __asm ("movups xmmword [rax + 0x20], xmm0");
        __asm ("movups xmmword [rax + 0x30], xmm0");
        __asm ("movups xmmword [rax + 0x40], xmm0");
        rcx = *((rbp + 0x10));
        *((rdx + 0x10)) = rcx;
        *((rax + 8)) = r12;
        rdx = *((rbp + 0x18));
        *((rbp + 0x10)) = rax;
        *((rdx + r13)) = rax;
label_5:
        rbx >>= 3;
        edx = 1;
        rcx = rbx;
        ecx &= 0x1ff;
        rsi = rcx;
        rdx <<= cl;
        rsi >>= 6;
        *((rax + rsi*8 + 0x10)) |= rdx;
        return rax;
label_6:
        rdi = rbp;
        cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ ();
        rsi = *((rbp + 8));
        rdx = r12;
        rdi = *((rbp + 0x18));
        rax = *(rbp);
        rdx &= rsi;
        r13 = rdx*8;
        r8 = rdi + r13;
        goto label_0;
label_9:
        rsi = *((rax + 0x30));
        rdx = rax + rsi + 0x38;
        rsi += 0x60;
        rcx = rdx;
        *((rax + 0x30)) = rsi;
    } while (1);
label_10:
    *(0x0060f0d0) = rsi;
    if (rsi == 0) {
        goto label_1;
    }
    *((rsi + 0x18)) = 0;
    goto label_1;
label_8:
    esi = 0x1000;
    edi = 0x60f060;
    rax = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
    __asm ("movdqa xmm0, xmmword [0x0040ab90]");
    *((rax + 0x20)) = 0;
    __asm ("movups xmmword [rax + 0x28], xmm0");
    xmm0 = 0;
    __asm ("movups xmmword [rax + 0x10], xmm0");
    *((rax + 8)) = 0x60;
    rdx = .comment;
    *((rax + 0x10)) = rdx;
    if (rdx != 0) {
        *((rdx + 0x18)) = rax;
    }
    rcx = rax + 0x38;
    *(0x0060f0d0) = rax;
    rsi = *((rax + 0x28));
    rdx = rcx;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x405610 */
#include <stdint.h>
 
int64_t forAllChildren_yHFnLgI7q81iFxRlb3Iqlw (uint32_t arg1) {
    rdi = arg1;
    rax = *((rdi + 8));
    r8 = *((rax + 0x28));
    if (r8 != 0) {
        esi = (int32_t) sil;
        rdi += 0x10;
        void (*r8)() ();
    }
    edx = *((rax + 8));
    if (dl == 0x18) {
        goto label_0;
    }
    if (dl == 0x2d) {
        goto label_1;
    }
    if (dl == 0x16) {
        goto label_1;
    }
    do {
        return rax;
label_0:
    } while (rdi == 0xfffffffffffffff0);
    r12 = *((rdi + 0x10));
    if (r12 <= 0) {
        goto label_2;
    }
    rbx = rdi;
    r13 = rdi + 0x20;
    r14d = 0;
    ebp = (int32_t) sil;
    while (r12 != r14) {
        rax = *((rbx + 8));
        rsi = *((rax + 0x10));
        edx = ebp;
        rdi = *(rsi);
        rdi *= r14;
        r14++;
        rdi += r13;
        forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA ();
    }
label_2:
    return rax;
label_1:
    edx = (int32_t) sil;
    rsi = *((rax + 0x10));
    rdi += 0x10;
    return forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400af0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = loc._edata;
    if (rax != loc._edata) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = loc._edata;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400b20 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = loc._edata;
    rsi -= loc._edata;
    rsi >>= 3;
    rax = rsi;
    rax >>= 0x3f;
    rsi += rax;
    rsi >>= 1;
    if (rsi != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = loc._edata;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400b60 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.7260) == 0) {
        deregister_tm_clones ();
        *(obj.completed.7260) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400b90 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400d20 */
#include <stdint.h>
 
void Marker_tySequence_uB9b75OUPRENsBAu4AnoePA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400d30 */
#include <stdint.h>
 
int64_t del_C66us4UEWCXp84lHW4tDLA_part_8 (uint32_t arg3, int64_t arg2, uint32_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(rsi);
    while (rcx == *(rcx)) {
label_0:
        rdi = *((rax + 0x20));
        rcx = *(rax);
        rdx = rdi - 1;
        if (*((rcx + 0x20)) < rdx) {
            goto label_7;
        }
        rcx = *((rax + 8));
        if (rdx > *((rcx + 0x20))) {
            goto label_7;
        }
label_1:
        return rax;
        rcx = *((rdi + 0x30b0));
    }
    if (*((rcx + 0x10)) != rdx) {
        goto label_0;
    }
    rax = *((rax + 0x10));
    *((rcx + 0x10)) = rax;
    rdx = *(rsi);
    rax = *((rdi + 0x30b0));
    rdx = *((rdx + 0x18));
    *((rax + 0x18)) = rdx;
    rax = rdi + 0x30d8;
    while (1) {
        *((rdi + 0x30b0)) = rax;
        rax = *(rsi);
        rax = *((rax + 8));
        *(rsi) = rax;
        rax = *((rdi + 0x30b8));
        rdx = *((rdi + 0x30c0));
        *(rax) = rdx;
        *((rdi + 0x30c0)) = rax;
        return rax;
        *((rsp - 0x10)) = rax;
        xmm0 = *((rsp - 0x10));
        __asm ("punpcklqdq xmm0, xmm0");
        __asm ("movups xmmword [rdi + 0x30d8], xmm0");
    }
label_7:
    *((rax + 0x20)) = rdx;
    rax = *(rsi);
    rcx = *((rax + 8));
    rdx = *((rax + 0x20));
    if (rdx < *((rcx + 0x20))) {
        *((rcx + 0x20)) = rdx;
        rax = *(rsi);
        rdx = *((rax + 0x20));
    }
    rcx = *(rax);
    if (*((rcx + 0x20)) == rdx) {
        goto label_8;
    }
label_6:
    rdx = *((rax + 8));
    rcx = *(rdx);
    rdi = *((rdx + 0x20));
    if (*((rcx + 0x20)) == rdi) {
        goto label_9;
    }
label_5:
    rcx = *((rdx + 8));
    r8 = *(rcx);
    rdi = *((rcx + 0x20));
    if (*((r8 + 0x20)) == rdi) {
        goto label_10;
    }
    if (*((rax + 0x20)) == rdi) {
        goto label_4;
    }
label_3:
    rsi = *((rcx + 8));
    rdi = *((rdx + 0x20));
    if (*((rsi + 0x20)) != rdi) {
        goto label_1;
    }
label_2:
    *((rax + 8)) = rcx;
    rcx = *(rcx);
    *((rdx + 8)) = rcx;
    rcx = *((rax + 8));
    *(rcx) = rdx;
    rax = *((rax + 8));
    *((rax + 0x20))++;
    return rax;
label_4:
    *(rsi) = rdx;
    rdx = *(rdx);
    *((rax + 8)) = rdx;
    rdx = *(rsi);
    *(rdx) = rax;
    rax = *(rsi);
    *((rax + 0x20))++;
    rax = *(rsi);
    rdx = *((rax + 8));
    rcx = *((rdx + 8));
    rdi = *((rdx + 0x20));
    rsi = *((rcx + 8));
    if (*((rsi + 0x20)) != rdi) {
        goto label_1;
    }
    goto label_2;
label_10:
    *((rdx + 8)) = r8;
    rax = *((r8 + 8));
    *(rcx) = rax;
    rax = *((rdx + 8));
    *((rax + 8)) = rcx;
    rax = *(rsi);
    rdx = *((rax + 8));
    rcx = *((rdx + 8));
    rdi = *((rcx + 0x20));
    if (*((rax + 0x20)) != rdi) {
        goto label_3;
    }
    goto label_4;
label_9:
    *((rax + 8)) = rcx;
    rcx = *((rcx + 8));
    *(rdx) = rcx;
    rax = *((rax + 8));
    *((rax + 8)) = rdx;
    rax = *(rsi);
    rdx = *((rax + 8));
    goto label_5;
label_8:
    *(rsi) = rcx;
    rdx = *((rcx + 8));
    *(rax) = rdx;
    rdx = *(rsi);
    *((rdx + 8)) = rax;
    rax = *(rsi);
    goto label_6;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400f30 */
#include <stdint.h>
 
int32_t echoBinSafe_constprop_24 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rdi = stdout;
    flockfile ();
    rdi = *(rbx);
    rcx = stdout;
    if (rdi == 0) {
        goto label_0;
    }
    rsi = *(rdi);
    eax = 0x40a16d;
    rdi += 0x10;
    rdi = rax;
    while (1) {
        fwrite (rdi, rsi, 1, rcx);
        edx = 1;
        fwrite (0x40a16c, 1, edx, *(obj.stdout));
        fflush (*(obj.stdout));
        rdi = stdout;
        void (*0x400970)() ();
label_0:
        esi = 0;
        edi = 0x40a16d;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4009d0 */
#include <stdint.h>
 
void flockfile (void) {
    flockfile ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400a80 */
#include <stdint.h>
 
void fwrite (void) {
    fwrite ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400a40 */
#include <stdint.h>
 
void fflush (void) {
    fflush ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400fb0 */
#include <stdint.h>
 
void nimRegisterThreadLocalMarker_part_14 (void) {
    edi = TM_Q5wkpxktOdTGvlSRo9bzt9aw_18;
    echoBinSafe_constprop_24 ();
    return exit (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400a70 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x405800 */
#include <stdint.h>
 
void TM_Q5wkpxktOdTGvlSRo9bzt9aw_17 (void) {
    rsi = currException_9bVPeDJlYTi9bQApZpfH8wjg;
    if (rsi != 0) {
        rsi -= 0x10;
        edi = gch_IcYaEuuWivYAS86vFMTS3Q;
        void (*0x4056c0)() ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x405830 */
#include <stdint.h>
 
int64_t Marker_tyRef_LEclZrWX2FQAodlapxGITw (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r13d = (int32_t) sil;
    rbx = rsi;
    rax = *((rdi + 8));
    if (rax != 0) {
        r12 = rax - 0x10;
        if (sil == 1) {
            goto label_2;
        }
        if (sil == 0) {
            goto label_3;
        }
        if (sil == 2) {
            goto label_4;
        }
        if (sil == 3) {
            goto label_5;
        }
    }
    rdi = *((rbp + 0x18));
    esi = r13d;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
    r12 = *((rbp + 0x20));
    if (r12 == 0) {
        goto label_0;
    }
    r12 -= 0x10;
    if (bl == 1) {
        goto label_6;
    }
    if (bl == 0) {
        goto label_7;
    }
    if (bl == 2) {
        goto label_8;
    }
    if (bl == 3) {
        goto label_6;
    }
    do {
label_0:
        rdi = *((rbp + 0x30));
        esi = r13d;
        void (*0x405210)() ();
label_5:
        rdx = .comment;
        rax = .comment;
        rbx = .comment;
        if (rdx <= rax) {
            rdx *= 3;
            edi = 0x60f060;
            rax = rdx;
            rax >>= 0x3f;
            rax += rdx;
            rax >>= 1;
            rsi = rax*8 + 0x10;
            *(0x0060f048) = rax;
            rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
            *((rax + 8)) = 1;
            rbx = rax + 0x10;
            rax = .comment;
            memcpy (rbx, *(0x0060f050), rax*8);
            rax = .comment;
            edi = 0x60f060;
            rsi = rax - 0x10;
            rawDealloc_DA62HrGC5sdfCED505KyyQ ();
            *(0x0060f050) = rbx;
            rax = .comment;
        }
        *((rbx + rax*8)) = r12;
        esi = 3;
        *(0x0060f040)++;
        rdi = *((rbp + 0x18));
label_1:
        doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
        rax = *((rbp + 0x20));
        r12 = rax - 0x10;
    } while (rax == 0);
label_6:
    rdx = .comment;
    rax = .comment;
    rbx = .comment;
    if (rdx <= rax) {
        goto label_9;
    }
    *((rbx + rax*8)) = r12;
    *(0x0060f040)++;
    goto label_0;
label_4:
    rcx = *((rax - 0x10));
    rdx = rcx - 8;
    *((rax - 0x10)) = rdx;
    if (rdx <= 7) {
        rsi = r12;
        edi = 0x60f010;
        addZCT_fCDI7oO1NNVXXURtxSzsRw ();
    }
    rdi = *((rbp + 0x18));
    esi = 2;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
    rax = *((rbp + 0x20));
    r12 = rax - 0x10;
    if (rax == 0) {
        goto label_0;
    }
label_8:
    rax = *(r12);
    rax -= 8;
    *(r12) = rax;
    if (rax > 7) {
        goto label_0;
    }
    rsi = r12;
    edi = 0x60f010;
    addZCT_fCDI7oO1NNVXXURtxSzsRw ();
    goto label_0;
label_9:
    rdx *= 3;
    edi = 0x60f060;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rax >>= 1;
    rsi = rax*8 + 0x10;
    *(0x0060f048) = rax;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    rbx = rax + 0x10;
    *((rax + 8)) = 1;
    rax = .comment;
    memcpy (rbx, *(0x0060f050), rax*8);
    rax = .comment;
    edi = 0x60f060;
    rsi = rax - 0x10;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = .comment;
    *(0x0060f050) = rbx;
    *((rbx + rax*8)) = r12;
    *(0x0060f040)++;
    goto label_0;
label_3:
    rsi = r12;
    edi = gch_IcYaEuuWivYAS86vFMTS3Q;
    markS_NZr5o3Ubzrci4OmK29cHBJA ();
    rdi = *((rbp + 0x18));
    esi = 0;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
    rax = *((rbp + 0x20));
    r12 = rax - 0x10;
    if (rax == 0) {
        goto label_0;
    }
label_7:
    rsi = r12;
    edi = gch_IcYaEuuWivYAS86vFMTS3Q;
    markS_NZr5o3Ubzrci4OmK29cHBJA ();
    goto label_0;
label_2:
    rax = .comment;
    if (rax <= *(0x0060f040)) {
        rdx = rax * 3;
        edi = 0x60f060;
        rax = rdx;
        rax >>= 0x3f;
        rax += rdx;
        rax >>= 1;
        rsi = rax*8 + 0x10;
        *(0x0060f048) = rax;
        rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
        *((rax + 8)) = 1;
        rbx = rax + 0x10;
        rax = .comment;
        memcpy (rbx, *(0x0060f050), rax*8);
        rax = .comment;
        edi = 0x60f060;
        rsi = rax - 0x10;
        rawDealloc_DA62HrGC5sdfCED505KyyQ ();
        *(0x0060f050) = rbx;
    }
    rdx = .comment;
    rax = .comment;
    esi = 1;
    *((rax + rdx*8)) = r12;
    *(0x0060f040)++;
    rdi = *((rbp + 0x18));
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x405bb0 */
#include <stdint.h>
 
int64_t Marker_tyRef_HMIVdYjdZYWskTmTQVo5BQ (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r12d = (int32_t) sil;
    rbx = rsi;
    esi = r12d;
    rdi = *((rdi + 8));
    doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
    rax = *((rbp + 0x18));
    if (rax != 0) {
        r13 = rax - 0x10;
        if (bl == 1) {
            goto label_3;
        }
        if (bl == 0) {
            goto label_4;
        }
        if (bl == 2) {
            goto label_5;
        }
        if (bl == 3) {
            rdx = .comment;
            rax = .comment;
            rbx = .comment;
            if (rdx <= rax) {
                rdx *= 3;
                edi = 0x60f060;
                rax = rdx;
                rax >>= 0x3f;
                rax += rdx;
                rax >>= 1;
                rsi = rax*8 + 0x10;
                *(0x0060f048) = rax;
                rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
                *((rax + 8)) = 1;
                rbx = rax + 0x10;
                rax = .comment;
                memcpy (rbx, *(0x0060f050), rax*8);
                rax = .comment;
                edi = 0x60f060;
                rsi = rax - 0x10;
                rawDealloc_DA62HrGC5sdfCED505KyyQ ();
                *(0x0060f050) = rbx;
                rax = .comment;
            }
            *((rbx + rax*8)) = r13;
label_1:
            rax = .comment;
            rdx = rax + 1;
            *(0x0060f040) = rdx;
            rax = *((rbp + 0x20));
            r13 = rax - 0x10;
            if (rax == 0) {
                goto label_0;
            }
label_2:
            rax = .comment;
            rbx = .comment;
            if (rax <= rdx) {
                rdx = rax * 3;
                edi = 0x60f060;
                rax = rdx;
                rax >>= 0x3f;
                rax += rdx;
                rax >>= 1;
                rsi = rax*8 + 0x10;
                *(0x0060f048) = rax;
                rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
                *((rax + 8)) = 1;
                rbx = rax + 0x10;
                rax = .comment;
                memcpy (rbx, *(0x0060f050), rax*8);
                rax = .comment;
                edi = 0x60f060;
                rsi = rax - 0x10;
                rawDealloc_DA62HrGC5sdfCED505KyyQ ();
                *(0x0060f050) = rbx;
                rdx = .comment;
            }
            *((rbx + rdx*8)) = r13;
            *(0x0060f040)++;
        }
    } else {
        r13 = *((rbp + 0x20));
        if (r13 == 0) {
            goto label_0;
        }
        r13 -= 0x10;
        if (bl == 1) {
            goto label_6;
        }
        if (bl == 0) {
            goto label_7;
        }
        if (bl == 2) {
            goto label_8;
        }
        if (bl == 3) {
            goto label_6;
        }
    }
    do {
label_0:
        rdi = *((rbp + 0x30));
        esi = r12d;
        void (*0x405210)() ();
label_5:
        rcx = *((rax - 0x10));
        rdx = rcx - 8;
        *((rax - 0x10)) = rdx;
        if (rdx <= 7) {
            rsi = r13;
            edi = 0x60f010;
            addZCT_fCDI7oO1NNVXXURtxSzsRw ();
        }
        rax = *((rbp + 0x20));
        r13 = rax - 0x10;
    } while (rax == 0);
label_8:
    rax = *(r13);
    rax -= 8;
    *(r13) = rax;
    if (rax > 7) {
        goto label_0;
    }
    rsi = r13;
    edi = 0x60f010;
    addZCT_fCDI7oO1NNVXXURtxSzsRw ();
    goto label_0;
label_4:
    rsi = r13;
    edi = gch_IcYaEuuWivYAS86vFMTS3Q;
    markS_NZr5o3Ubzrci4OmK29cHBJA ();
    rax = *((rbp + 0x20));
    r13 = rax - 0x10;
    if (rax == 0) {
        goto label_0;
    }
label_7:
    rsi = r13;
    edi = gch_IcYaEuuWivYAS86vFMTS3Q;
    markS_NZr5o3Ubzrci4OmK29cHBJA ();
    goto label_0;
label_3:
    rax = .comment;
    if (rax <= *(0x0060f040)) {
        rdx = rax * 3;
        edi = 0x60f060;
        rax = rdx;
        rax >>= 0x3f;
        rax += rdx;
        rax >>= 1;
        rsi = rax*8 + 0x10;
        *(0x0060f048) = rax;
        rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
        *((rax + 8)) = 1;
        rbx = rax + 0x10;
        rax = .comment;
        memcpy (rbx, *(0x0060f050), rax*8);
        rax = .comment;
        edi = 0x60f060;
        rsi = rax - 0x10;
        rawDealloc_DA62HrGC5sdfCED505KyyQ ();
        *(0x0060f050) = rbx;
    }
    rdx = .comment;
    rax = .comment;
    *((rax + rdx*8)) = r13;
    goto label_1;
label_6:
    rdx = .comment;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x405ed0 */
#include <stdint.h>
 
int64_t Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r12d = (int32_t) sil;
    rbx = rsi;
    rax = *((rdi + 8));
    if (rax != 0) {
        r13 = rax - 0x10;
        if (sil == 1) {
            goto label_3;
        }
        if (sil == 0) {
            goto label_4;
        }
        if (sil == 2) {
            goto label_5;
        }
        if (sil == 3) {
            goto label_6;
        }
    }
    rdi = *((rbp + 0x18));
    esi = r12d;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
    rdi = *((rbp + 0x20));
    esi = r12d;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
    rbp = *((rbp + 0x30));
    if (rbp == 0) {
        goto label_0;
    }
    rbp -= 0x10;
    if (bl == 1) {
        goto label_7;
    }
    if (bl == 0) {
        goto label_8;
    }
    if (bl == 2) {
        goto label_9;
    }
    if (bl == 3) {
        goto label_7;
    }
    do {
label_0:
        return rax;
label_6:
        rdx = .comment;
        rax = .comment;
        rbx = .comment;
        if (rdx <= rax) {
            rdx *= 3;
            edi = 0x60f060;
            rax = rdx;
            rax >>= 0x3f;
            rax += rdx;
            rax >>= 1;
            rsi = rax*8 + 0x10;
            *(0x0060f048) = rax;
            rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
            *((rax + 8)) = 1;
            rbx = rax + 0x10;
            rax = .comment;
            memcpy (rbx, *(0x0060f050), rax*8);
            rax = .comment;
            edi = 0x60f060;
            rsi = rax - 0x10;
            rawDealloc_DA62HrGC5sdfCED505KyyQ ();
            *(0x0060f050) = rbx;
            rax = .comment;
        }
        *((rbx + rax*8)) = r13;
        esi = 3;
        *(0x0060f040)++;
        rdi = *((rbp + 0x18));
        doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
        rdi = *((rbp + 0x20));
        esi = 3;
label_2:
        doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
        rax = *((rbp + 0x30));
        rbp = rax - 0x10;
    } while (rax == 0);
label_7:
    rdx = .comment;
    rax = .comment;
    rbx = .comment;
    if (rdx <= rax) {
        goto label_10;
    }
    *((rbx + rax*8)) = rbp;
    *(0x0060f040)++;
label_1:
    return rax;
label_5:
    rcx = *((rax - 0x10));
    rdx = rcx - 8;
    *((rax - 0x10)) = rdx;
    if (rdx <= 7) {
        rsi = r13;
        edi = 0x60f010;
        addZCT_fCDI7oO1NNVXXURtxSzsRw ();
    }
    rdi = *((rbp + 0x18));
    esi = 2;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
    rdi = *((rbp + 0x20));
    esi = 2;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
    rax = *((rbp + 0x30));
    rbp = rax - 0x10;
    if (rax == 0) {
        goto label_0;
    }
label_9:
    rax = *(rbp);
    rax -= 8;
    *(rbp) = rax;
    if (rax > 7) {
        goto label_0;
    }
    rsi = rbp;
    edi = 0x60f010;
    void (*0x4040b0)() ();
label_10:
    rdx *= 3;
    edi = 0x60f060;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rax >>= 1;
    rsi = rax*8 + 0x10;
    *(0x0060f048) = rax;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    rbx = rax + 0x10;
    *((rax + 8)) = 1;
    rax = .comment;
    memcpy (rbx, *(0x0060f050), rax*8);
    rax = .comment;
    edi = 0x60f060;
    rsi = rax - 0x10;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = .comment;
    *(0x0060f050) = rbx;
    *((rbx + rax*8)) = rbp;
    *(0x0060f040)++;
    goto label_1;
label_4:
    rsi = r13;
    edi = gch_IcYaEuuWivYAS86vFMTS3Q;
    markS_NZr5o3Ubzrci4OmK29cHBJA ();
    rdi = *((rbp + 0x18));
    esi = 0;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
    rdi = *((rbp + 0x20));
    esi = 0;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
    rax = *((rbp + 0x30));
    rbp = rax - 0x10;
    if (rax == 0) {
        goto label_0;
    }
label_8:
    rsi = rbp;
    edi = gch_IcYaEuuWivYAS86vFMTS3Q;
    void (*0x4056c0)() ();
label_3:
    rax = .comment;
    if (rax <= *(0x0060f040)) {
        rdx = rax * 3;
        edi = 0x60f060;
        rax = rdx;
        rax >>= 0x3f;
        rax += rdx;
        rax >>= 1;
        rsi = rax*8 + 0x10;
        *(0x0060f048) = rax;
        rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
        *((rax + 8)) = 1;
        rbx = rax + 0x10;
        rax = .comment;
        memcpy (rbx, *(0x0060f050), rax*8);
        rax = .comment;
        edi = 0x60f060;
        rsi = rax - 0x10;
        rawDealloc_DA62HrGC5sdfCED505KyyQ ();
        *(0x0060f050) = rbx;
    }
    rdx = .comment;
    rax = .comment;
    esi = 1;
    *((rax + rdx*8)) = r13;
    *(0x0060f040)++;
    rdi = *((rbp + 0x18));
    doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
    rdi = *((rbp + 0x20));
    esi = 1;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408200 */
#include <stdint.h>
 
int64_t raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw_part_16 (uint32_t arg1, int64_t arg7) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_28h;
    rdi = arg1;
    xmm0 = arg7;
    rbx = rdi;
    rax = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
    if (rax == 0) {
        goto label_10;
    }
    if (*((rax + 0xd8)) == 0) {
        goto label_11;
    }
    rsi = *((rax + 0xe8));
    rax = *((rax + 0xe0));
    if (rsi == 0) {
        goto label_12;
    }
    al = void (*rax)() ();
    do {
        if (al == 0) {
label_0:
            return rax;
        }
label_11:
        rbp = currException_9bVPeDJlYTi9bQApZpfH8wjg;
        if (rbp != 0) {
            *((rbp - 0x10)) += 8;
        }
        rdx = *((rbx + 0x30));
        if (rdx != 0) {
            rax = *((rdx - 0x10));
            rsi = rdx - 0x10;
            rax -= 8;
            *((rdx - 0x10)) = rax;
            if (rax > 7) {
                goto label_13;
            }
            edi = 0x60f010;
            addZCT_fCDI7oO1NNVXXURtxSzsRw ();
        }
label_13:
        *((rbx - 0x10)) += 8;
        rax = currException_9bVPeDJlYTi9bQApZpfH8wjg;
        *((rbx + 0x30)) = rbp;
        if (rax != 0) {
            rcx = *((rax - 0x10));
            rsi = rax - 0x10;
            rdx = rcx - 8;
            *((rax - 0x10)) = rdx;
            if (rdx > 7) {
                goto label_14;
            }
            edi = 0x60f010;
            addZCT_fCDI7oO1NNVXXURtxSzsRw ();
        }
label_14:
        rax = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
        *(obj.currException_9bVPeDJlYTi9bQApZpfH8wjg) = rbx;
        rax = longjmp (rax + 0x10, 1);
label_12:
        void (*rax)() ();
    } while (1);
label_10:
    rdi = *(rdi);
    if (rdi == obj.NTI_vyjC2ukVFYc78nQPrSCc9bA_) {
        goto label_15;
    }
    if (*((rdi + 0x10)) == obj.NTI_vyjC2ukVFYc78nQPrSCc9bA_) {
        goto label_15;
    }
    if (rdi != *(obj.Nim_OfCheck_CACHE22)) {
        if (rdi == *(0x0060e868)) {
            goto label_15;
        }
        edx = Nim_OfCheck_CACHE22;
        esi = NTI_vyjC2ukVFYc78nQPrSCc9bA_;
        al = isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg ();
        if (al != 0) {
            goto label_15;
        }
    }
    rbp = rsp + 0x10;
    eax = 0;
    ecx = 0xfa;
    rdx = *((rbx + 0x18));
    rdi = rbp;
    __asm ("movdqa xmm0, xmmword [str.Error:_unhandled]");
    r13 = *((rbx + 0x10));
    *(rdi) = rax;
    rcx--;
    rdi += 8;
    *((rsp + 0x28)) = 0x203a6e6f;
    rax = 0x6974706563786520;
    *((rsp + 0x10)) = xmm0;
    *((rsp + 0x20)) = rax;
    *(rdi) = 0;
    if (rdx == 0) {
        goto label_16;
    }
    rax = *(rdx);
    if (rax > 0x7b3) {
        goto label_16;
    }
    if (rax == 0) {
        goto label_17;
    }
    rcx = rbp + 0x1c;
    rsi = rdx + 0x10;
    if (rax >= 8) {
        goto label_18;
    }
    if ((al & 4) != 0) {
        goto label_19;
    }
    if (rax != 0) {
        edi = *((rdx + 0x10));
        *((rbp + 0x1c)) = dil;
        if ((al & 2) != 0) {
            goto label_20;
        }
label_7:
        rax = *(rdx);
    }
label_9:
    rax += 0x1c;
    r12 = rax;
    if (rax <= 0x7cd) {
        goto label_21;
    }
    if (r13 == 0) {
        goto label_22;
    }
    rax = strlen (r13);
    rdx = rax + r12;
    if (rdx <= 0x7cf) {
label_1:
        memcpy (rbp + r12, r13, rax);
        rax = strlen (r13);
        r12 += rax;
        rbx = r12;
label_2:
        if (rbx > 0x7cd) {
            goto label_6;
        }
        eax = 0xa5d;
        *((rbp + r12)) = ax;
    }
label_6:
    if (*(obj.onUnhandledException_bFrawQlTKZhLweDD36j9b8g) == 0) {
        goto label_23;
    }
    rbx = rbp;
    do {
        edx = *(rbx);
        rbx += 4;
        eax = rdx - 0x1010101;
        edx = ~edx;
        eax &= edx;
        eax &= 0x80808080;
    } while (eax == 0);
    edx = eax;
    do {
        esi = 0x18;
    } while (rcx != 0);
    *(rsp) = 7;
    edx >>= 0x10;
    if ((eax & 0x8080) == 0) {
        eax = edx;
    }
    rdx = rbx + 2;
    if ((eax & 0x8080) == 0) {
        rbx = rdx;
    }
    ecx = eax;
    cl += al;
    rbx -= 3;
    rbx -= rbp;
    if (rbx > 6) {
        goto label_24;
    }
label_4:
    edx = gch_IcYaEuuWivYAS86vFMTS3Q;
    edi = strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
    rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
    *((rsp + 8)) = rbx;
    rbx++;
    xmm0 = *((rsp + 8));
    rcx = rax + 0x10;
    __asm ("movhps xmm0, qword [rsp]");
    __asm ("movups xmmword [rax], xmm0");
    if (ebx >= 8) {
        goto label_25;
    }
    if ((bl & 4) != 0) {
        goto label_26;
    }
    if (ebx != 0) {
        edx = *(rbp);
        *((rax + 0x10)) = dl;
        if ((bl & 2) != 0) {
            goto label_27;
        }
    }
label_3:
    rdi = rax;
    uint64_t (*onUnhandledException_bFrawQlTKZhLweDD36j9b8g)() ();
    goto label_0;
label_15:
    rdi = *((rbx + 0x10));
    showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ ();
    exit (1);
label_16:
    r12d = 0x1e;
    edx = 0x1c;
    ebx = 0x1e;
label_5:
    ecx = 0x5b20;
    *((rbp + rdx)) = cx;
    if (r13 == 0) {
        goto label_28;
    }
    strlen (r13);
    rdx = rax + r12;
    if (rdx <= 0x7cf) {
        goto label_1;
    }
    goto label_2;
label_25:
    rdx = *((rsp + 0x10));
    rdi = rax + 0x18;
    rdi &= 0xfffffffffffffff8;
    *((rax + 0x10)) = rdx;
    edx = ebx;
    rsi = *((rbp + rdx - 8));
    *((rcx + rdx - 8)) = rsi;
    rcx -= rdi;
    rsi = rbp;
    ebx += ecx;
    rsi -= rcx;
    ebx >>= 3;
    ecx = ebx;
    *(rdi) = *(rsi);
    rcx--;
    rsi += 8;
    rdi += 8;
    goto label_3;
label_24:
    rsi = rbx + 0x11;
    *(rsp) = rbx;
    goto label_4;
label_17:
    eax = 0x1c;
    edx = 0x1c;
label_8:
    rbx = rax + 2;
    r12 = rbx;
    goto label_5;
label_22:
    if (rax > 0x7cf) {
        goto label_6;
    }
label_28:
    eax = 0;
    goto label_1;
label_18:
    rdi = *((rdx + 0x10));
    *((rbp + 0x1c)) = rdi;
    rdi = *((rsi + rax - 8));
    *((rcx + rax - 8)) = rdi;
    rdi = rbp + 0x20;
    rcx -= rdi;
    rsi -= rcx;
    rcx += rax;
    rcx >>= 3;
    *(rdi) = *(rsi);
    rcx--;
    rsi += 8;
    rdi += 8;
    goto label_7;
label_26:
    edx = *(rbp);
    *((rax + 0x10)) = edx;
    edx = ebx;
    esi = *((rbp + rdx - 4));
    *((rcx + rdx - 4)) = esi;
    goto label_3;
label_21:
    rdx = rax;
    goto label_8;
label_27:
    edx = ebx;
    esi = *((rbp + rdx - 2));
    *((rcx + rdx - 2)) = si;
    goto label_3;
label_19:
    edi = *((rdx + 0x10));
    *((rbp + 0x1c)) = edi;
    esi = *((rsi + rax - 4));
    *((rcx + rax - 4)) = esi;
    rax = *(rdx);
    goto label_9;
label_20:
    esi = *((rsi + rax - 2));
    *((rcx + rax - 2)) = si;
    rax = *(rdx);
    goto label_9;
label_23:
    rdi = rbp;
    showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ ();
    return exit (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x40a060 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x405140 */
#include <stdint.h>
 
int64_t cellSetGet_X4WTfs0wkld8wp8XcE9b8BA (uint32_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rcx = *((rdi + 8));
    rdi = *((rdi + 0x18));
    rdx = rcx;
    rdx &= rsi;
    rax = *((rdi + rdx*8));
    if (rax == 0) {
        goto label_0;
    }
    if (rsi != *((rax + 8))) {
        goto label_1;
    }
    goto label_2;
    do {
        if (*((rax + 8)) == rsi) {
            goto label_0;
        }
label_1:
        rdx *= 5;
        rdx &= rcx;
        rax = *((rdi + rdx*8));
    } while (rax != 0);
label_0:
    return rax;
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4025c0 */
#include <stdint.h>
 
uint64_t alloc_1iQ1Xo9cXsxq509b5gmDHLoQ (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rsi += 0x10;
    rax = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    *((rax + 8)) = 1;
    rax += 0x10;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4089e0 */
#include <stdint.h>
 
int64_t setLengthStr (uint32_t arg2, int64_t arg1) {
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    r12d = 0;
    __asm ("cmovns r12, rsi");
    if (rdi == 0) {
        goto label_0;
    }
    rcx = *((rdi + 8));
    r13 = rdi;
    rbx = rdi;
    rax = 0x3fffffffffffffff;
    rax &= rcx;
    if (rax >= r12) {
        goto label_1;
    }
    edx = 4;
    if (rax != 0) {
        rsi = 0x3fffffffffff0000;
        rdx = rax + rax;
        if ((rcx & rsi) == 0) {
            goto label_2;
        }
        rdx += rax;
        rdx >>= 1;
    }
label_2:
    r15d = 7;
    edi = strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
    if (rbp >= rdx) {
        rdx = rbp;
    }
    r14 = rdx;
    if (rdx >= 7) {
        r15 = rdx;
    }
    edx = gch_IcYaEuuWivYAS86vFMTS3Q;
    rsi = r15 + 0x11;
    rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
    *(rax) = 0;
    rbx = rax;
    *((rax + 8)) = r15;
    *(rax) = rdx;
    rdx++;
    memcpy (rax + 0x10, r13 + 0x10, *(r13));
    rax = *(r13);
    rdx -= rax;
    memset (rbx + rax + 0x10, 0, rbp);
    *((rbx + 8)) = r14;
    do {
label_1:
        *(rbx) = r12;
        rax = rbx;
        *((rbx + r12 + 0x10)) = 0;
        return rax;
label_0:
        r13d = 7;
        edx = gch_IcYaEuuWivYAS86vFMTS3Q;
        edi = strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
        if (rsi >= 7) {
            r13 = rsi;
        }
        r14 = r13 + 0x11;
        rsi = r14;
        rax = rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
        rdi = rax;
        rbx = rax;
        memset (rdi, 0, r14);
        *((rsp + 8)) = rbp;
        xmm0 = *((rsp + 8));
        *((rsp + 8)) = r13;
        __asm ("movhps xmm0, qword [rsp + 8]");
        __asm ("movups xmmword [rbx], xmm0");
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407c40 */
#include <stdint.h>
 
uint64_t rawNewObj_BpNS5yt3b9cMOponsUKh8aw (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r12 = rdi;
    rbx = rdx;
    rax = stackSize_IV9bgfYkinlae0WZ2NZi5JA ();
    rdx = rax;
    rdx >>= 7;
    eax = 0x1f4;
    if (rax <= 0xf9ff) {
        rdx = rax;
    }
    if (*((rbx + 0x10)) >= rdx) {
        goto label_3;
    }
    rax = *((rbx + 8));
    if (*((rbx + 0x28f8)) >= rax) {
        goto label_3;
    }
label_2:
    rsi = rbp + 0x10;
    rdi = rbx + 0x60;
    rax = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    *((rax + 8)) = r12;
    *(rax) = 4;
    rax = *((rbx + 0x10));
    rdx = *((rbx + 0x20));
    if (rax <= 8) {
        goto label_4;
    }
    rsi = rax*8 - 8;
    rdi = rdx + rsi;
    r8 = *(rdi);
    rcx = *(r8);
    while (rcx > 7) {
label_0:
        rcx &= 0xfffffffffffffffb;
        *(r8) = rcx;
        *(rdi) = rbp;
label_1:
        rax = rbp + 0x10;
        return rax;
        rdi = rdx + rsi - 8;
        r8 = *(rdi);
        rcx = *(r8);
    }
    rdi = rdx + rsi - 0x10;
    r8 = *(rdi);
    rcx = *(r8);
    if (rcx > 7) {
        goto label_0;
    }
    rdi = rdx + rsi - 0x18;
    r8 = *(rdi);
    rcx = *(r8);
    if (rcx > 7) {
        goto label_0;
    }
    rdi = rdx + rsi - 0x20;
    r8 = *(rdi);
    rcx = *(r8);
    if (rcx > 7) {
        goto label_0;
    }
    rdi = rdx + rsi - 0x28;
    r8 = *(rdi);
    rcx = *(r8);
    if (rcx > 7) {
        goto label_0;
    }
    rdi = rdx + rsi - 0x30;
    r8 = *(rdi);
    rcx = *(r8);
    if (rcx > 7) {
        goto label_0;
    }
    rcx = rdx + rsi - 0x38;
    rsi = *(rcx);
    rdx = *(rsi);
    if (rdx <= 7) {
        goto label_5;
    }
    rdx &= 0xfffffffffffffffb;
    *(rsi) = rdx;
    *(rcx) = rbp;
    goto label_1;
label_3:
    if (*((rbx + 0x58)) != 0) {
        goto label_2;
    }
    rdi = rbx;
    collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2 ();
    goto label_2;
label_4:
    *((rdx + rax*8)) = rbp;
    rax = rbp + 0x10;
    *((rbx + 0x10))++;
    return rax;
label_5:
    rdx = *((rbx + 0x18));
    if (rax >= rdx) {
        rax = rdx * 3;
        ecx = 2;
        edi = 0x60f060;
        __asm ("cqo");
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
        *((rbx + 0x18)) = rax;
        rsi = rax*8 + 0x10;
        rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
        *((rax + 8)) = 1;
        r12 = rax + 0x10;
        rax = *((rbx + 0x10));
        memcpy (r12, *((rbx + 0x20)), rax*8);
        rax = *((rbx + 0x20));
        edi = 0x60f060;
        rsi = rax - 0x10;
        rawDealloc_DA62HrGC5sdfCED505KyyQ ();
        *((rbx + 0x20)) = r12;
    }
    rdx = *((rbx + 0x10));
    rax = *((rbx + 0x20));
    *((rax + rdx*8)) = rbp;
    *((rbx + 0x10))++;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4009c0 */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408770 */
#include <stdint.h>
 
uint32_t writeToStdErr_7HRVfGfZT2rSmBdcLxl8TA (const char * s) {
    rdi = s;
    rbx = stderr;
    fputs (rdi, *(obj.stderr));
    eax = ferror (rbx);
    if (eax == 0) {
        return eax;
    }
    clearerr (rbx);
    edi = TM_Q5wkpxktOdTGvlSRo9bzt9aw_22;
    return raiseEIO_PpfSiTIeNpMAb9a5o6SglJw ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4009b0 */
#include <stdint.h>
 
void fputs (void) {
    fputs ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400980 */
#include <stdint.h>
 
void ferror (void) {
    ferror ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400a20 */
#include <stdint.h>
 
void clearerr (void) {
    clearerr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4086a0 */
#include <stdint.h>
 
int64_t raiseEIO_PpfSiTIeNpMAb9a5o6SglJw (int64_t arg1) {
    rdi = arg1;
    esi = 0x38;
    r12 = rdi;
    edi = NTI_HMIVdYjdZYWskTmTQVo5BQ_;
    newObj ();
    rdi = r12;
    *(rax) = obj.NTI_iLZrPn9anoh9ad1MmO0RczFw_;
    rbp = *((rax + 0x18));
    rbx = rax;
    rax = copyStringRC1 ();
    *((rbx + 0x18)) = rax;
    if (rbp == 0) {
        goto label_0;
    }
    rax = *((rbp - 0x10));
    rsi = rbp - 0x10;
    rax -= 8;
    *((rbp - 0x10)) = rax;
    while (1) {
label_0:
        if (*((rbx + 0x10)) == 0) {
            *((rbx + 0x10)) = "IOError";
        }
        rdi = rbx;
        raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw ();
        edi = 0x60f010;
        addZCT_fCDI7oO1NNVXXURtxSzsRw ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x401010 */
#include <stdint.h>
 
uint64_t echoBinSafe (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r12 = rsi;
    rbx = rdi;
    rdi = stdout;
    rbp = rbx + r12*8;
    rax = flockfile ();
    if (r12 > 0) {
        goto label_1;
    }
    goto label_2;
    do {
        rsi = *(rax);
        edi = 0x40a16d;
        rax += 0x10;
        if (rsi != 0) {
            rdi = rax;
        }
label_0:
        rbx += 8;
        fwrite (rdi, rsi, 1, rcx);
        if (rbp == rbx) {
            goto label_2;
        }
label_1:
        rax = *(rbx);
        rcx = stdout;
    } while (rax != 0);
    esi = 0;
    edi = 0x40a16d;
    goto label_0;
label_2:
    edx = 1;
    fwrite (0x40a16c, 1, edx, *(obj.stdout));
    fflush (*(obj.stdout));
    rdi = stdout;
    return funlockfile ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408ec0 */
#include <stdint.h>
 
int64_t copyString (uint32_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_0;
    }
    rbx = rdi;
    if (*((rdi + 8)) < 0) {
        goto label_1;
    }
    r12d = 7;
    if (*(rdi) >= 7) {
        r12 = *(rdi);
    }
    edx = gch_IcYaEuuWivYAS86vFMTS3Q;
    edi = strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
    rsi = r12 + 0x11;
    rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
    *(rax) = 0;
    rbx = rax;
    *((rax + 8)) = r12;
    *(rax) = rdx;
    rdx++;
    memcpy (rax + 0x10, rbp + 0x10, *(rbp));
    do {
label_1:
        rax = rbx;
        return rax;
label_0:
        ebx = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4056c0 */
#include <stdint.h>
 
int64_t markS_NZr5o3Ubzrci4OmK29cHBJA (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r12 = rdi;
    rbp = rdi + 0x3388;
    rdi = rbp;
    rbx = rsi;
    incl_m4q9b16kJJcoKe9c4ERtlpCg ();
    esi = 1;
    rdi = rbx;
    ebx = 1;
    forAllChildren_yHFnLgI7q81iFxRlb3Iqlw ();
    rsi = *((r12 + 0x40));
    if (rsi <= 0) {
        goto label_3;
    }
label_0:
    r9 = *((r12 + 0x50));
    rsi--;
    r8 = *((r12 + 0x3390));
    *((r12 + 0x40)) = rsi;
    rdi = *((r12 + 0x33a0));
    r13 = *((r9 + rsi*8));
    rax = r8;
    rcx = r13;
    rcx >>= 0xc;
    rax &= rcx;
    rdx = *((rdi + rax*8));
    if (rdx != 0) {
        goto label_1;
    }
    goto label_4;
    do {
        rax *= 5;
        rax &= r8;
        rdx = *((rdi + rax*8));
        if (rdx == 0) {
            goto label_4;
        }
label_1:
    } while (*((rdx + 8)) != rcx);
    rcx = r13;
    r11 = rbx;
    rcx >>= 3;
    ecx &= 0x1ff;
    rax = rcx;
    r11 <<= cl;
    rax >>= 6;
    rcx = r11;
    rax += 2;
    r10 = *((rdx + rax*8));
    if ((r10 & r11) != 0) {
        goto label_5;
    }
    r10 |= rcx;
    *((rdx + rax*8)) = r10;
label_2:
    esi = 1;
    rdi = r13;
    forAllChildren_yHFnLgI7q81iFxRlb3Iqlw ();
    rsi = *((r12 + 0x40));
    if (rsi > 0) {
        goto label_0;
    }
    do {
label_3:
        return rax;
label_5:
    } while (rsi == 0);
    rsi--;
    *((r12 + 0x40)) = rsi;
    r13 = *((r9 + rsi*8));
    rcx = *((r9 + rsi*8));
    rcx >>= 0xc;
    rax = rcx;
    rax &= r8;
    rdx = *((rdi + rax*8));
    if (rdx != 0) {
        goto label_1;
    }
label_4:
    rsi = r13;
    rdi = rbp;
    incl_m4q9b16kJJcoKe9c4ERtlpCg ();
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x402170 */
#include <stdint.h>
 
int64_t split_Cfx7NvEVZIhBjBm7i89boSg_2 (int64_t arg1) {
    rdi = arg1;
    rax = *(rdi);
    rdx = *((rax + 8));
    rsi = *((rax + 0x20));
    rcx = *((rdx + 8));
    if (*((rcx + 0x20)) == rsi) {
        *(rdi) = rdx;
        rdx = *(rdx);
        *((rax + 8)) = rdx;
        rdx = *(rdi);
        *(rdx) = rax;
        rax = *(rdi);
        *((rax + 0x20))++;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4025e0 */
#include <stdint.h>
 
uint64_t alloc_sVm4rDImKK2ZDdylByayiA (int64_t arg1) {
    rdi = arg1;
    rsi = rdi + 0x10;
    edi = 0x60f060;
    rax = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    *((rax + 8)) = 1;
    rax += 0x10;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x401840 */
#include <stdint.h>
 
uint64_t splitChunk_8QXhiy717OAl8WNA2X27EA (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    xmm0 = 0;
    rdi = *((rsi + 8));
    rbx = rdx + rsi;
    __asm ("movups xmmword [rbx + 0x10], xmm0");
    rdi -= rdx;
    *(rbx) = rdx;
    *((rbx + 8)) = rdi;
    r8 = *((rsi + 8));
    r8 += rsi;
    rcx = r8;
    rcx >>= 0x15;
    eax = (int32_t) cl;
    rax = *((rbp + rax*8 + 0x28a8));
    if (rax != 0) {
        goto label_2;
    }
    goto label_3;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_3;
        }
label_2:
    } while (rcx != *((rax + 8)));
    rcx = r8;
    r9d = 1;
    rcx >>= 0xc;
    ecx &= 0x1ff;
    r10 = rcx;
    r9 <<= cl;
    r10 >>= 6;
    if ((*((rax + r10*8 + 0x10)) & r9) != 0) {
        rax = *(r8);
        eax &= 1;
        rdi |= rax;
        *(r8) = rdi;
    }
label_3:
    r13 = rbx;
    *((rsi + 8)) = rdx;
    r12 = rbx;
    r13 >>= 0x15;
    r12 >>= 0xc;
    eax = (int32_t) r13b;
    r14 = rbp + rax*8;
    rax = *((r14 + 0x28a8));
    if (rax != 0) {
        goto label_4;
    }
    goto label_5;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_5;
        }
label_4:
    } while (r13 != *((rax + 8)));
label_0:
    rcx = r12;
    edx = 1;
    ecx &= 0x1ff;
    rsi = rcx;
    rdx <<= cl;
    rsi >>= 6;
    *((rax + rsi*8 + 0x10)) |= rdx;
    rax = *((rbx + 8));
    ecx = eax;
    if (eax > 0xffff) {
        goto label_6;
    }
    edx = 0;
    if (eax <= 0xff) {
        goto label_1;
    }
    ecx = eax;
    edx = 8;
    ecx >>= 8;
    do {
label_1:
        rcx = *((rcx + obj.fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ));
        *((rbx + 0x18)) = 0;
        rdx += rcx;
        ecx = rdx - 5;
        rsi = rdx - 6;
        rax >>= cl;
        rcx = rax - 0x20;
        rax = rsi;
        rax <<= 5;
        rax += rcx;
        rdi = rbp + rax*8;
        rax = *((rdi + 0x1078));
        *((rbx + 0x10)) = rax;
        if (rax != 0) {
            *((rax + 0x18)) = rbx;
        }
        eax = 1;
        *((rdi + 0x1078)) = rbx;
        ecx &= 0x1f;
        rbx = rax;
        rbx <<= cl;
        ecx = esi;
        *((rbp + rdx*4 + 0xffc)) |= ebx;
        ecx &= 0x1f;
        rax <<= cl;
        *((rbp + 0x1010)) |= eax;
        r12 = rbx;
        r13 = rbx;
        r14 = rbx;
        return rax;
label_6:
        if (eax > 0xffffff) {
            goto label_7;
        }
        ecx >>= 0x10;
        edx = 0x10;
    } while (1);
label_5:
    esi = 0x50;
    rdi = rbp;
    llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ ();
    rdx = *((r14 + 0x28a8));
    *(rax) = rdx;
    *((r14 + 0x28a8)) = rax;
    *((rax + 8)) = r13;
    goto label_0;
label_7:
    ecx = eax;
    edx = 0x18;
    ecx >>= 0x18;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x402610 */
#include <stdint.h>
 
int64_t removeChunkFromMatrix_v9bekLOkesgfrZC4aumfLXw_2 (uint32_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rax = *((rsi + 8));
    ecx = eax;
    if (eax <= 0xffff) {
        goto label_2;
    }
    if (eax > 0xffffff) {
        goto label_3;
    }
    ecx >>= 0x10;
    edx = 0x10;
    do {
label_0:
        rcx = *((rcx + obj.fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ));
        r8 = *((rsi + 0x10));
        rdx += rcx;
        ecx = rdx - 5;
        r9 = rdx - 6;
        rax >>= cl;
        rcx = rax - 0x20;
        rax = *((rsi + 0x18));
        if (r8 != 0) {
            *((r8 + 0x18)) = rax;
            rax = *((rsi + 0x18));
        }
        if (rax != 0) {
            r8 = *((rsi + 0x10));
            *((rax + 0x10)) = r8;
        }
        rax = r9;
        rax <<= 5;
        rax += rcx;
        rax = rdi + rax*8;
        if (*((rax + 0x1078)) == rsi) {
            goto label_4;
        }
label_1:
        xmm0 = 0;
        __asm ("movups xmmword [rsi + 0x10], xmm0");
        return rax;
label_3:
        ecx = eax;
        edx = 0x18;
        ecx >>= 0x18;
    } while (1);
label_2:
    edx = 0;
    if (eax <= 0xff) {
        goto label_0;
    }
    ecx = eax;
    edx = 8;
    ecx >>= 8;
    goto label_0;
label_4:
    r8 = *((rsi + 0x10));
    *((rax + 0x1078)) = r8;
    if (r8 != 0) {
        goto label_1;
    }
    r8 = rdi + rdx*4;
    edx = 1;
    ecx &= 0x1f;
    rax = rdx;
    rax <<= cl;
    eax = ~eax;
    *((r8 + 0xffc)) &= eax;
    if (*((r8 + 0xffc)) != 0) {
        goto label_1;
    }
    ecx = r9d;
    xmm0 = 0;
    ecx &= 0x1f;
    rdx <<= cl;
    edx = ~edx;
    *((rdi + 0x1010)) &= edx;
    __asm ("movups xmmword [rsi + 0x10], xmm0");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407a10 */
#include <stdint.h>
 
int64_t getOccupiedMem_9bFvoxSITMVCg7RY8KIar1Q (void) {
    rax = .comment;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x402cb0 */
#include <stdint.h>
 
uint64_t freeHugeChunk_jnrbguyViYONI3PJ1RZJjQ (int64_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdx = rsi;
    rsi = *((rsi + 8));
    r8 = rdx;
    rcx = rdx;
    r8 >>= 0x15;
    rcx >>= 0xc;
    eax = (int32_t) r8b;
    rax = *((rdi + rax*8 + 0x28a8));
    if (rax != 0) {
        goto label_0;
    }
    goto label_1;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_1;
        }
label_0:
    } while (r8 != *((rax + 8)));
    ecx &= 0x1ff;
    r8d = 1;
    r9 = rcx;
    r8 <<= cl;
    r9 >>= 6;
    r8 = ~r8;
    *((rax + r9*8 + 0x10)) &= r8;
label_1:
    rax = *((rdi + 0x2880));
    rcx = rax;
    if (*((rdi + 0x2888)) >= rax) {
        rcx = *((rdi + 0x2888));
    }
    rax -= rsi;
    *((rdi + 0x2880)) = rax;
    *((rdi + 0x2888)) = rcx;
    rdi = rdx;
    return munmap ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408000 */
#include <stdint.h>
 
uint64_t copyStringRC1 (int64_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_2;
    }
    r12 = *(rdi);
    eax = 7;
    rbx = rdi;
    if (r12 < 7) {
        r12 = rax;
    }
    rax = stackSize_IV9bgfYkinlae0WZ2NZi5JA ();
    rdx = rax;
    r14 = r12 + 0x11;
    rdx >>= 7;
    eax = 0x1f4;
    if (rax <= 0xf9ff) {
        rdx = rax;
    }
    if (*(0x0060f010) >= rdx) {
        goto label_3;
    }
    rax = .comment;
    while (*(0x0060f058) != 0) {
label_0:
        rsi = r12 + 0x21;
        edi = 0x60f060;
        rax = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
        *((rax + 8)) = obj.strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
        r13 = rax + 0x10;
        *(rax) = 8;
        memset (r13, 0, r14);
        *((r13 + 8)) = r12;
        *((rbp + 0x10)) = rdx;
        rdx++;
        memcpy (rbp + 0x20, rbx + 0x10, *(rbx));
label_1:
        rax = r13;
        return rax;
label_3:
    }
    edi = gch_IcYaEuuWivYAS86vFMTS3Q;
    collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2 ();
    goto label_0;
label_2:
    r13d = 0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400d00 */
#include <stdint.h>
 
void NimMainInner (void) {
    return NimMainModule ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4064d0 */
#include <stdint.h>
 
int64_t lowGauge_3mwQtFaBTgevFrybZdgUNw (uint32_t arg1) {
    rdi = arg1;
    rdx = *(rdi);
    if (rdi != rdx) {
        goto label_0;
    }
    goto label_1;
    do {
        rdx = rcx;
label_0:
        rcx = *(rdx);
        rax = *((rdi + 0x10));
        rdi = rdx;
    } while (rcx != rdx);
    return rax;
label_1:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407e60 */
#include <stdint.h>
 
uint64_t toNimStr (uint32_t arg2, int64_t arg1) {
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    edx = gch_IcYaEuuWivYAS86vFMTS3Q;
    r13 = rdi;
    edi = strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
    rbx = rsi;
    if (rsi >= 7) {
    }
    rsi = rbp + 0x11;
    rax = rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
    *((rsp + 8)) = rbx;
    xmm0 = *((rsp + 8));
    *((rsp + 8)) = rbp;
    r12 = rax;
    __asm ("movhps xmm0, qword [rsp + 8]");
    __asm ("movups xmmword [rax], xmm0");
    memcpy (rax + 0x10, r13, rbx + 1);
    rax = r12;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x406540 */
#include <stdint.h>
 
int32_t isActiveStack_deIRQymTVHcVwfHBKDbqEA (void) {
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408740 */
#include <stdint.h>
 
uint32_t write_ADGLlEJAOtGNWWur8rrJfg (char * s, FILE * stream) {
    rsi = s;
    rdi = stream;
    rbx = rdi;
    fputs (rsi, rbx);
    eax = ferror (rbx);
    if (eax == 0) {
        return eax;
    }
    clearerr (rbx);
    edi = TM_Q5wkpxktOdTGvlSRo9bzt9aw_22;
    raiseEIO_PpfSiTIeNpMAb9a5o6SglJw ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4010c0 */
#include <stdint.h>
 
int64_t raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g (void) {
    rax = outOfMemHook_kZNaA7u1MfSW5ZeoGvw8xg;
    if (rax != 0) {
        void (*rax)() ();
    }
    edi = TM_Q5wkpxktOdTGvlSRo9bzt9aw_13;
    echoBinSafe_constprop_24 ();
    return exit (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408710 */
#include <stdint.h>
 
uint32_t checkErr_BWnr8V7RERYno9bIdPmw8Hw (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = ferror (rdi);
    if (eax == 0) {
        return eax;
    }
    clearerr (rbx);
    edi = TM_Q5wkpxktOdTGvlSRo9bzt9aw_22;
    raiseEIO_PpfSiTIeNpMAb9a5o6SglJw ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407a80 */
#include <stdint.h>
 
uint64_t collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2 (int64_t arg1) {
    rdi = arg1;
    rax = stackSize_IV9bgfYkinlae0WZ2NZi5JA ();
    if (*((rbp + 0x3368)) >= rax) {
        rax = *((rbp + 0x3368));
    }
    *((rbp + 0x3368)) = rax;
    rax = *((rbp + 0x3108));
    rdx = *(rax);
    rcx = rax;
    if (rax != rdx) {
        goto label_2;
    }
    goto label_3;
    do {
        rdx = rsi;
label_2:
        rsi = *(rdx);
        rdi = *((rcx + 0x10));
        rcx = rdx;
    } while (rsi != rdx);
label_1:
    *((rbp + 0x60)) = rdi;
    rdx = 0xffffffffffffffff;
    if (rax == *(rax)) {
        goto label_4;
    }
    do {
        rdx = *((rax + 0x18));
        rax = *((rax + 8));
    } while (*(rax) != rax);
label_4:
    *((rbp + 0x68)) = rdx;
    rdi = rbp;
    markStackAndRegisters_LdwvBL9bC9c0lik7K9bau9bX0Q ();
    rax = *((rbp + 0x28));
    rdi = rbp;
    if (*((rbp + 0x3370)) >= rax) {
        rax = *((rbp + 0x3370));
    }
    *((rbp + 0x3350))++;
    *((rbp + 0x3370)) = rax;
    al = collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw ();
    if (al != 0) {
        rax = *((rbp + 0x28f8));
        if (*((rbp + 8)) <= rax) {
            goto label_5;
        }
    }
label_0:
    rax = *((rbp + 0x28));
    rbx = *((rbp + 0x38));
    r12 = rbx + rax*8;
    if (rax <= 0) {
        goto label_6;
    }
    do {
        rsi = *(rbx);
        rax = *(rsi);
        rax -= 8;
        *(rsi) = rax;
        if (rax <= 7) {
            edi = 0x60f010;
            addZCT_fCDI7oO1NNVXXURtxSzsRw ();
        }
        rbx += 8;
    } while (r12 != rbx);
label_6:
    *((rbp + 0x28)) = 0;
    return rax;
label_5:
    rdi = rbp;
    collectCycles_zoTIuavlrCHyw3B8MBaLJA_3 ();
    rax = .comment;
    edx = segment.LOAD0;
    *((rbp + 0x3358))++;
    rax += rax;
    if (rax < segment.LOAD0) {
        rax = rdx;
    }
    *((rbp + 8)) = rax;
    if (*((rbp + 0x3360)) >= rax) {
        rax = *((rbp + 0x3360));
    }
    *((rbp + 0x3360)) = rax;
    goto label_0;
label_3:
    edi = 0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x402c50 */
#include <stdint.h>
 
int64_t del_C66us4UEWCXp84lHW4tDLA (uint32_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    do {
label_0:
        rax = *(rsi);
        if (rax == *(rax)) {
            goto label_1;
        }
        r12 = rsi;
        rbx = rdi;
        *((rdi + 0x30b8)) = rax;
        if (*((rax + 0x10)) <= rdx) {
            goto label_2;
        }
        rsi = rax;
        rax = del_C66us4UEWCXp84lHW4tDLA ();
    } while (1);
    do {
        rdx = rbp;
        rsi = r12;
        rdi = rbx;
        void (*0x400d30)() ();
label_2:
        *((rdi + 0x30b0)) = rax;
        rax = *(rsi);
        rsi = rax + 8;
        del_C66us4UEWCXp84lHW4tDLA ();
        goto label_0;
    } while (1);
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x406500 */
#include <stdint.h>
 
int64_t highGauge_3mwQtFaBTgevFrybZdgUNw_2 (uint32_t arg1) {
    rdi = arg1;
    if (rdi == *(rdi)) {
        goto label_0;
    }
    do {
        rax = *((rdi + 0x18));
        rdi = *((rdi + 8));
    } while (*(rdi) != rdi);
    return rax;
label_0:
    rax = 0xffffffffffffffff;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x401580 */
#include <stdint.h>
 
uint64_t intSetPut_KWgRM9bUk6rwhAaHSiuK9aYA (uint32_t arg3, int64_t arg2) {
    rdx = arg3;
    rsi = arg2;
    eax = (int32_t) dl;
    rbp = rsi + rax*8;
    rax = *(rbp);
    if (rax != 0) {
        goto label_0;
    }
    goto label_1;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_1;
        }
label_0:
    } while (rdx != *((rax + 8)));
    return rax;
label_1:
    esi = 0x50;
    rbx = rdx;
    llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ ();
    rdx = *(rbp);
    *(rax) = rdx;
    *(rbp) = rax;
    *((rax + 8)) = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400fd0 */
#include <stdint.h>
 
int64_t getActiveStack_2XtoPjgvlHPkHLitAW2flw (int64_t arg1) {
    rdi = arg1;
    rax = rdi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400bc0 */
#include <stdint.h>
 
int64_t PreMain (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_8h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    systemDatInit000 ();
    rdi = rsp + 8;
    *((rsp + 8)) = sym.PreMainInner;
    nimGC_setStackBottom ();
    rax = *((rsp + 8));
    void (*rax)() ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x409030 */
#include <stdint.h>
 
int64_t systemDatInit000 (int64_t arg9, int64_t arg10, int64_t arg11) {
    xmm2 = arg9;
    xmm3 = arg10;
    xmm4 = arg11;
    xmm0 = *(obj.NTI_rR5Bzr1D5krxoo1NcNyeMA_);
    esi = 0x312;
    edi = 0x31f;
    edx = 0;
    *((rsp - 0x10)) = 0x60d410;
    eax = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141;
    r8d = 0x30e;
    __asm ("movdqa xmm15, xmmword [0x0040abd0]");
    __asm ("movhps xmm0, qword [str.size]");
    *(0x0060ee88) = si;
    __asm ("movdqa xmm14, xmmword [0x0040abe0]");
    *(0x0060d420) = xmm0;
    xmm0 = *((rsp - 0x10));
    __asm ("movdqa xmm13, xmmword [0x0040abf0]");
    *((rsp - 0x10)) = rax;
    xmm1 = *((rsp - 0x10));
    __asm ("movhps xmm0, qword [0x0040ace0]");
    *(0x0060ee90) = 0;
    __asm ("movdqa xmm12, xmmword [0x0040ac00]");
    *(obj.NTI_TuG1vdYwChKtx4TOkRnAjw_) = 0x38;
    __asm ("punpcklqdq xmm1, xmm1");
    __asm ("movdqa xmm11, xmmword [0x0040ac10]");
    *(0x0060eed0) = 0;
    __asm ("movdqa xmm10, xmmword [0x0040ac20]");
    *(obj.NTI_rR5Bzr1D5krxoo1NcNyeMA_) = 8;
    __asm ("movdqa xmm9, xmmword [0x0040ac30]");
    *(0x0060eec8) = di;
    *(0x0060d410) = 1;
    *(0x0060d418) = 0;
    *(0x00612570) = 0;
    *(obj.NTI_jIBKr1ejBgsfM33Kxw4j7A_) = 1;
    *(0x00612568) = r8w;
    *(obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_2.6128) = xmm0;
    __asm ("movdqa xmm0, xmmword [0x0040abc0]");
    do {
        __asm ("movdqa xmm7, xmm0");
        __asm ("movdqa xmm6, xmm0");
        __asm ("movdqa xmm5, xmm0");
        rdx -= 0xffffffffffffff80;
        __asm ("movdqa xmm2, xmmword [0x0040ac40]");
        __asm ("movdqa xmm8, xmm0");
        __asm ("movdqa xmm4, xmm0");
        __asm ("movdqa xmm3, xmm0");
        __asm ("paddq xmm8, xmm14");
        __asm ("paddq xmm7, xmm13");
        rax += 0x300;
        *((rax - 0x268)) = xmm0;
        __asm ("paddq xmm2, xmm0");
        __asm ("paddq xmm6, xmm12");
        *((rax - 0x60)) = 1;
        __asm ("paddq xmm5, xmm11");
        __asm ("paddq xmm4, xmm10");
        __asm ("movhps qword [rax - 0x238], xmm0");
        __asm ("paddq xmm3, xmm9");
        __asm ("movhps qword [rax - 0x178], xmm7");
        *((rax - 0x208)) = xmm8;
        __asm ("movhps qword [rax - 0x1d8], xmm8");
        *((rax - 0x1a8)) = xmm7;
        *((rax - 0x148)) = xmm6;
        __asm ("movhps qword [rax - 0x118], xmm6");
        *((rax - 0xe8)) = xmm5;
        __asm ("movhps qword [rax - 0xb8], xmm5");
        *((rax - 0x88)) = xmm4;
        __asm ("movhps qword [rax - 0x58], xmm4");
        *((rax - 0x28)) = xmm3;
        __asm ("movhps qword [rax + 8], xmm3");
        *((rax + 0x38)) = xmm2;
        *((rax - 0x270)) = 1;
        *((rax - 0x240)) = 1;
        *((rax - 0x210)) = 1;
        *((rax - 0x1e0)) = 1;
        *((rax - 0x1b0)) = 1;
        *((rax - 0x180)) = 1;
        *((rax - 0x150)) = 1;
        *((rax - 0x120)) = 1;
        *((rax - 0xf0)) = 1;
        *((rax - 0xc0)) = 1;
        *((rax - 0x90)) = 1;
        *((rax - 0x30)) = 1;
        *(rax) = 1;
        *((rax + 0x30)) = 1;
        *((rax + 0x60)) = 1;
        __asm ("movhps qword [rax + 0x68], xmm2");
        __asm ("movdqa xmm3, xmmword [rdx + 0x40a630]");
        __asm ("movdqa xmm2, xmmword [rdx + 0x40a640]");
        __asm ("movdqa xmm6, xmmword [rdx + 0x40a600]");
        __asm ("movdqa xmm7, xmmword [rdx + 0x40a5f0]");
        *((rax - 0x78)) = xmm3;
        __asm ("movdqa xmm5, xmmword [rdx + 0x40a610]");
        __asm ("movdqa xmm8, xmmword [rdx + 0x40a5e0]");
        __asm ("movhps qword [rax - 0x48], xmm3");
        rcx = *((rdx + 0x40a650));
        __asm ("movdqa xmm3, xmmword [0x0040ac50]");
        *((rax - 0x18)) = xmm2;
        __asm ("movdqa xmm4, xmmword [rdx + 0x40a620]");
        __asm ("paddq xmm3, xmm0");
        __asm ("movhps qword [rax + 0x18], xmm2");
        __asm ("movdqa xmm2, xmm3");
        __asm ("movhps qword [rax - 0x168], xmm6");
        __asm ("psllq xmm2, 1");
        __asm ("movhps qword [rax - 0x228], xmm8");
        __asm ("paddq xmm2, xmm3");
        __asm ("movhps qword [rax - 0x1c8], xmm7");
        __asm ("movdqa xmm3, xmmword [0x0040ac60]");
        *((rax - 0x198)) = xmm6;
        __asm ("psllq xmm2, 4");
        __asm ("movdqa xmm6, xmmword [rdx + 0x40a650]");
        __asm ("paddq xmm3, xmm0");
        __asm ("paddq xmm2, xmm1");
        *((rax - 0x258)) = xmm8;
        *((rax - 0x1f8)) = xmm7;
        *((rax - 0x138)) = xmm5;
        __asm ("movhps qword [rax - 0x108], xmm5");
        *((rax - 0xd8)) = xmm4;
        __asm ("movhps qword [rax - 0xa8], xmm4");
        *((rax + 0x48)) = rcx;
        __asm ("movhps qword [rax + 0x78], xmm6");
        *((rdx + obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_10.6136)) = xmm2;
        __asm ("movdqa xmm2, xmm3");
        __asm ("psllq xmm2, 1");
        __asm ("paddq xmm2, xmm3");
        __asm ("movdqa xmm3, xmmword [0x0040ac70]");
        __asm ("psllq xmm2, 4");
        __asm ("paddq xmm3, xmm0");
        __asm ("paddq xmm2, xmm1");
        *((rdx + 0x60d170)) = xmm2;
        __asm ("movdqa xmm2, xmm3");
        __asm ("psllq xmm2, 1");
        __asm ("paddq xmm2, xmm3");
        __asm ("movdqa xmm3, xmmword [0x0040ac80]");
        __asm ("psllq xmm2, 4");
        __asm ("paddq xmm3, xmm0");
        __asm ("paddq xmm2, xmm1");
        *((rdx + obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_9.6135)) = xmm2;
        __asm ("movdqa xmm2, xmm3");
        __asm ("psllq xmm2, 1");
        __asm ("paddq xmm2, xmm3");
        __asm ("psllq xmm2, 4");
        __asm ("paddq xmm2, xmm1");
        *((rdx + 0x60d190)) = xmm2;
        __asm ("movdqa xmm3, xmmword [0x0040ac90]");
        __asm ("paddq xmm3, xmm0");
        __asm ("movdqa xmm2, xmm3");
        __asm ("psllq xmm2, 1");
        __asm ("paddq xmm2, xmm3");
        __asm ("movdqa xmm3, xmmword [0x0040aca0]");
        __asm ("psllq xmm2, 4");
        __asm ("paddq xmm3, xmm0");
        __asm ("paddq xmm2, xmm1");
        *((rdx + 0x60d1a0)) = xmm2;
        __asm ("movdqa xmm2, xmm3");
        __asm ("psllq xmm2, 1");
        __asm ("paddq xmm2, xmm3");
        __asm ("movdqa xmm3, xmmword [0x0040acb0]");
        __asm ("psllq xmm2, 4");
        __asm ("paddq xmm3, xmm0");
        __asm ("paddq xmm2, xmm1");
        *((rdx + obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_6.6132)) = xmm2;
        __asm ("movdqa xmm2, xmm3");
        __asm ("psllq xmm2, 1");
        __asm ("paddq xmm2, xmm3");
        __asm ("movdqa xmm3, xmmword [0x0040acc0]");
        __asm ("psllq xmm2, 4");
        __asm ("paddq xmm3, xmm0");
        __asm ("paddq xmm2, xmm1");
        *((rdx + 0x60d1c0)) = xmm2;
        __asm ("movdqa xmm2, xmm3");
        __asm ("paddq xmm0, xmm15");
        __asm ("psllq xmm2, 1");
        __asm ("paddq xmm2, xmm3");
        __asm ("psllq xmm2, 4");
        __asm ("paddq xmm2, xmm1");
        *((rdx + 0x60d1d0)) = xmm2;
    } while (rdx != 0x200);
    *((rsp - 0x10)) = obj.NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_;
    xmm3 = *((rsp - 0x10));
    eax = 0x30e;
    edx = 0x313;
    *((rsp - 0x10)) = obj.NTI_S9agCYBinaYZnGWcjTdxclg_;
    xmm1 = *((rsp - 0x10));
    ecx = 0x315;
    esi = 0x312;
    *((rsp - 0x10)) = obj.NTI_7JWFFgr9aqaR3U4iXEpLCag_;
    xmm0 = *((rsp - 0x10));
    edi = 0x30e;
    r8d = 0x31d;
    *((rsp - 0x10)) = obj.NTI_XEycrCsme5C8CVWAYEcdBQ_;
    __asm ("movdqa xmm4, xmm1");
    xmm2 = *((rsp - 0x10));
    r9d = 0x310;
    *((rsp - 0x10)) = obj.NTI_jIBKr1ejBgsfM33Kxw4j7A_;
    xmm5 = *((rsp - 0x10));
    __asm ("movhps xmm4, qword [0x0040ace8]");
    r10d = 0x315;
    *((rsp - 0x10)) = 0x60e0d0;
    r11d = 0x315;
    __asm ("movhps xmm5, qword [str.kind]");
    *(0x0060eca8) = ax;
    eax = 0x31a;
    *(0x0060d450) = xmm5;
    xmm5 = *((rsp - 0x10));
    *(0x0060e090) = 0x40;
    __asm ("movhps xmm5, qword [0x0040acf8]");
    *(0x0060e070) = 2;
    *(obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_6.6132) = xmm5;
    *(0x0060e098) = obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_3.6129;
    *(0x00612578) = 0x60e070;
    *(0x0060d440) = 1;
    *(0x0060d448) = 8;
    *(0x0060ecb0) = 0;
    *(obj.NTI_v8QUszD1sWlSIWZz7mC4bQ_) = 1;
    *(0x0060e0d0) = 1;
    *(0x0060e0d8) = 0;
    *(0x0060e0e8) = str.ntfNoRefs;
    *(0x0060e100) = 1;
    *(0x0060e108) = 1;
    *(0x0060e118) = str.ntfAcyclic;
    *(0x0060e130) = 1;
    *((rsp - 0x10)) = obj.NTI_v8QUszD1sWlSIWZz7mC4bQ_;
    xmm5 = *((rsp - 0x10));
    *((rsp - 0x10)) = obj.NTI_MbMVByo9a9ck632Se8onTXew_;
    __asm ("movhps xmm5, qword [0x0040ad00]");
    *(0x0060efc8) = dx;
    edx = 0x218;
    __asm ("movups xmmword [0x0060efd0], xmm5");
    xmm5 = *((rsp - 0x10));
    *(0x00612768) = cx;
    ecx = 0x328;
    __asm ("movhps xmm5, qword [str.flags]");
    *(0x0060e138) = 2;
    *(0x0060e0b0) = xmm5;
    __asm ("movdqa xmm5, xmm0");
    __asm ("movhps xmm5, qword [str.base]");
    *(0x0060e148) = str.ntfEnumHole;
    *(0x0060e1d0) = xmm5;
    *(0x0060d1c0) = 0x60e130;
    *(0x0060e180) = 3;
    *(0x0060e160) = 2;
    *(0x0060e188) = obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_6.6132;
    *(0x0060ecb8) = 0x60e160;
    *(obj.NTI_MbMVByo9a9ck632Se8onTXew_) = 1;
    *(0x0060e1b0) = 0;
    *(0x0060e190) = 0;
    *(0x0060e0a0) = 1;
    *(0x0060e0a8) = 9;
    *(0x00612770) = obj.NTI_TuG1vdYwChKtx4TOkRnAjw_;
    *(obj.NTI_7JWFFgr9aqaR3U4iXEpLCag_) = 8;
    *(0x0060e1c0) = 1;
    *(0x0060e1c8) = 0x10;
    *(0x006124f0) = 0;
    *(obj.NTI_kT45dHShde6Al0PdS4U9aGA_) = 0x30;
    *(0x006124e8) = si;
    *(0x006195b0) = 0;
    *(obj.NTI_unfNsxrcATrufDZmpBq4HQ_) = 1;
    *((rsp - 0x10)) = 0x60e280;
    xmm5 = *((rsp - 0x10));
    *((rsp - 0x10)) = 0x60e2e0;
    __asm ("movhps xmm5, qword [0x0040ad18]");
    *(0x006195a8) = di;
    *(obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_10.6136) = xmm5;
    xmm5 = *((rsp - 0x10));
    *((rsp - 0x10)) = obj.NTI_unfNsxrcATrufDZmpBq4HQ_;
    __asm ("movhps xmm5, qword [0x0040ad20]");
    *(0x0060e280) = 1;
    *(0x0060d170) = xmm5;
    xmm5 = *((rsp - 0x10));
    *(0x0060e288) = 0;
    __asm ("movhps xmm5, qword [str.kind]");
    *(0x0060e298) = str.nkNone;
    *(0x0060e260) = xmm5;
    *(0x0060e2b0) = 1;
    *(0x0060e2b8) = 1;
    *(0x0060e2c8) = str.nkSlot;
    *(0x0060e2e0) = 1;
    *(0x0060e2e8) = 2;
    *(0x0060e2f8) = str.nkList;
    *(0x0060e310) = 1;
    *(0x0060e318) = 3;
    *(0x0060e328) = str.nkCase;
    *(0x0060e360) = 4;
    *(0x0060e340) = 2;
    *(0x0060e368) = obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_10.6136;
    *(0x006195b8) = 0x60e340;
    *(0x0060e250) = 1;
    *(0x0060e258) = 0;
    *(0x0060e370) = 1;
    *(0x0060e378) = 8;
    __asm ("movhps xmm0, qword [0x0040ad30]");
    xmm5 = *(obj.NTI_rR5Bzr1D5krxoo1NcNyeMA_);
    *(0x0060e3b0) = xmm0;
    xmm0 = *(obj.NTI_rR5Bzr1D5krxoo1NcNyeMA_);
    *((rsp - 0x10)) = 0x60e250;
    __asm ("movhps xmm5, qword [str.offset]");
    __asm ("movhps xmm0, qword [0x0040ad38]");
    *(0x0060e380) = xmm5;
    *(0x0060e410) = xmm0;
    xmm0 = *((rsp - 0x10));
    *((rsp - 0x10)) = 0x60e3a0;
    __asm ("movhps xmm0, qword [0x0040ad40]");
    *(0x0060e3a0) = 1;
    *(obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_9.6135) = xmm0;
    xmm0 = *((rsp - 0x10));
    *((rsp - 0x10)) = 0x60e400;
    __asm ("movhps xmm0, qword [0x0040ad48]");
    *(0x0060e3a8) = 0x10;
    *(0x0060d190) = xmm0;
    xmm0 = *((rsp - 0x10));
    *(0x0060edf0) = 0;
    __asm ("movhps xmm0, qword [0x0040ad50]");
    *(0x0060ede8) = r8w;
    *(0x0060d1a0) = xmm0;
    *(obj.NTI_S9agCYBinaYZnGWcjTdxclg_) = 8;
    *(0x0060e3d0) = 1;
    *(0x0060e3d8) = 0x18;
    *(0x0060e3e0) = xmm4;
    *(0x0060e400) = 1;
    *(0x0060e408) = 0x20;
    *(0x0060ed70) = obj.NTI_mCkh9bHWX9bgGIYpwKekBD2Q_;
    *(obj.NTI_pPliadsJkoxIPLiuFLcL3g_) = 0x3fff8;
    *(0x0060ed68) = r9w;
    *((rsp - 0x10)) = obj.NTI_uNps8ABY788DreuZn29bmIg_;
    xmm0 = *((rsp - 0x10));
    *((rsp - 0x10)) = obj.NTI_mCkh9bHWX9bgGIYpwKekBD2Q_;
    __asm ("movhps xmm0, qword [str.sons]");
    *(0x006127c8) = ax;
    eax = 0x319;
    *(0x0060e440) = xmm0;
    xmm0 = *((rsp - 0x10));
    *((rsp - 0x10)) = obj.NTI_vr5DoT1jILTGdRlYv1OYpw_;
    __asm ("movhps xmm0, qword [str.node]");
    *(0x006126e8) = r10w;
    *(0x0060e200) = xmm0;
    xmm0 = *((rsp - 0x10));
    *(0x006126f0) = obj.NTI_pPliadsJkoxIPLiuFLcL3g_;
    __asm ("movhps xmm0, qword [str.finalizer]");
    *(obj.NTI_uNps8ABY788DreuZn29bmIg_) = 8;
    *(0x0060e470) = xmm0;
    *(0x0060e430) = 1;
    *(0x0060e438) = 0x28;
    *(0x0060e240) = 6;
    *(0x0060e220) = 2;
    *(0x0060e248) = obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_9.6135;
    *(0x006124f8) = 0x60e220;
    *(0x006125b0) = obj.NTI_kT45dHShde6Al0PdS4U9aGA_;
    *(obj.NTI_mCkh9bHWX9bgGIYpwKekBD2Q_) = 8;
    *(0x006125a8) = r11w;
    *(0x0060e1f0) = 1;
    *(0x0060e1f8) = 0x18;
    *(0x006127d0) = 0;
    *(obj.NTI_vr5DoT1jILTGdRlYv1OYpw_) = 8;
    *(0x0060e460) = 1;
    *(0x0060e468) = 0x20;
    *(0x00612670) = 0;
    *(obj.NTI_ojoeKfW4VYIm36I9cpDTQIg_) = 8;
    *((rsp - 0x10)) = obj.NTI_ojoeKfW4VYIm36I9cpDTQIg_;
    xmm0 = *((rsp - 0x10));
    *((rsp - 0x10)) = 0x60e0a0;
    __asm ("movhps xmm0, qword [str.marker]");
    *(0x00612668) = ax;
    eax = 0x319;
    *(0x0060e4a0) = xmm0;
    xmm0 = *((rsp - 0x10));
    *((rsp - 0x10)) = 0x60e1f0;
    __asm ("movhps xmm0, qword [0x0040ad78]");
    *(0x00612428) = ax;
    eax = 0x111;
    *(0x0060e830) = xmm0;
    xmm0 = *((rsp - 0x10));
    *((rsp - 0x10)) = 0x60e490;
    __asm ("movhps xmm0, qword [0x0040ad80]");
    *(0x0060e490) = 1;
    *(0x0060e840) = xmm0;
    xmm0 = *((rsp - 0x10));
    *((rsp - 0x10)) = obj.NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_;
    __asm ("movhps xmm0, qword [0x0040ad88]");
    *(0x0060e498) = 0x28;
    *(0x0060e850) = xmm0;
    xmm0 = *((rsp - 0x10));
    *(0x00612430) = 0;
    __asm ("movhps xmm0, qword [str.deepcopy]");
    *(obj.NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_) = 8;
    *(0x0060e4d0) = xmm0;
    __asm ("movdqa xmm0, xmm3");
    *(0x0060e4c0) = 1;
    *(0x0060e4c8) = 0x30;
    *(0x0060d400) = 8;
    *(obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141) = 2;
    *(0x0060d408) = obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_2.6128;
    *(0x0060ee98) = obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141;
    *(0x006124b0) = 0;
    __asm ("movhps xmm0, qword [str.parent]");
    *((rsp - 0x10)) = obj.NTI_77mFvmsOLKik79ci2hXkHEg_;
    *(0x0060e560) = xmm0;
    xmm0 = *((rsp - 0x10));
    *(0x006124a8) = ax;
    eax = 0x21c;
    __asm ("movhps xmm0, qword [0x0040ada0]");
    *((rsp - 0x10)) = 0x60e640;
    *(0x0060e5c0) = xmm0;
    __asm ("movdqa xmm0, xmm1");
    __asm ("movhps xmm0, qword [str.procname]");
    *(0x006125e8) = ax;
    eax = 0x312;
    *(0x0060e650) = xmm0;
    xmm0 = *((rsp - 0x10));
    *(obj.NTI_ytyiCJqK439aF9cIibuRVpAg_) = 8;
    *(0x0060e510) = 0;
    *(0x0060e4f0) = 2;
    *(0x006124b8) = 0x60e4f0;
    *(obj.NTI_XEycrCsme5C8CVWAYEcdBQ_) = 0x38;
    *(0x00612728) = 0x11;
    *(0x0060e550) = 1;
    *(0x0060e558) = 8;
    *(0x0060e580) = 1;
    *(0x0060e588) = 0x10;
    *(0x0060e590) = xmm4;
    *(0x006125f0) = 0;
    *(obj.NTI_77mFvmsOLKik79ci2hXkHEg_) = 8;
    *(0x0060e5b0) = 1;
    *(0x0060e5b8) = 0x18;
    *(0x0060ecf0) = 0;
    *(obj.NTI_oLyohQ7O2XOvGnflOss8EA_) = 0x18;
    *(0x0060ece8) = ax;
    *(0x0060e640) = 1;
    *(0x0060e648) = 0;
    __asm ("movhps xmm0, qword [0x0040adb0]");
    __asm ("movhps xmm1, qword [str.filename]");
    *(obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_16.6140) = xmm0;
    xmm0 = *(obj.NTI_rR5Bzr1D5krxoo1NcNyeMA_);
    *((rsp - 0x10)) = obj.NTI_uB9b75OUPRENsBAu4AnoePA_;
    __asm ("movhps xmm0, qword [str.line]");
    *(0x0060e670) = 1;
    *(0x0060e680) = xmm0;
    xmm0 = *((rsp - 0x10));
    *(0x0060e678) = 8;
    __asm ("movhps xmm0, qword [str.trace]");
    *(0x0060d110) = 0x60e6a0;
    *(0x0060e6a0) = 1;
    *(0x0060e6a8) = 0x10;
    *(0x0060e6b0) = xmm1;
    *(0x0060e630) = 3;
    *(0x0060e610) = 2;
    *(0x0060e638) = obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_16.6140;
    *(0x0060ecf8) = 0x60e610;
    *(0x006123f0) = obj.NTI_oLyohQ7O2XOvGnflOss8EA_;
    *(obj.NTI_uB9b75OUPRENsBAu4AnoePA_) = 8;
    *(0x006123e8) = dx;
    *(0x00612408) = sym.Marker_tySequence_uB9b75OUPRENsBAu4AnoePA;
    *(0x0060e5e0) = 1;
    *(0x0060e5e8) = 0x20;
    *(0x0060e5f0) = xmm0;
    *(0x00612470) = 0;
    *(obj.NTI_hMQEc0FMry7Up7EoPki79aA_) = 8;
    *(0x00612468) = cx;
    *(0x0060e6d0) = 1;
    *(0x0060e6d8) = 0x28;
    *((rsp - 0x10)) = obj.NTI_hMQEc0FMry7Up7EoPki79aA_;
    xmm0 = *((rsp - 0x10));
    __asm ("movhps xmm3, qword [0x0040adf0]");
    *((rsp - 0x10)) = 0x60e550;
    __asm ("movhps xmm0, qword [str.raise_id]");
    *(0x0060ee30) = xmm2;
    *(0x0060e6e0) = xmm0;
    xmm0 = *((rsp - 0x10));
    *((rsp - 0x10)) = 0x60e5b0;
    __asm ("movhps xmm0, qword [0x0040add8]");
    *(0x0060e700) = 1;
    *(obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_15.6139) = xmm0;
    xmm0 = *((rsp - 0x10));
    *((rsp - 0x10)) = 0x60e6d0;
    __asm ("movhps xmm0, qword [0x0040ade0]");
    *(0x0060e708) = 0x30;
    *(0x0060d130) = xmm0;
    xmm0 = *((rsp - 0x10));
    *((rsp - 0x10)) = obj.NTI_ytyiCJqK439aF9cIibuRVpAg_;
    __asm ("movhps xmm0, qword [0x0040ade8]");
    *(0x0060e710) = xmm3;
    *(0x0060d140) = xmm0;
    xmm0 = *((rsp - 0x10));
    *(0x0060e540) = 6;
    __asm ("movhps xmm0, qword [0x0040adf8]");
    *(0x0060e520) = 2;
    __asm ("movups xmmword [0x00612730], xmm0");
    __asm ("movdqa xmm0, xmm2");
    *(0x0060e548) = obj.TM_Q5wkpxktOdTGvlSRo9bzt9aw_15.6139;
    *(obj.NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_) = 8;
    *(0x0060ee28) = 0x16;
    *(0x0060ee48) = sym.Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw;
    *(obj.NTI_qrLSDoe2oBoAqNtJ9badtnA_) = 0x38;
    *(0x0060eda8) = 0x11;
    *(0x0060e750) = 0;
    __asm ("movhps xmm0, qword [0x0040ae00]");
    __asm ("movhps xmm2, qword [0x0040ae10]");
    *((rsp - 0x10)) = obj.NTI_qrLSDoe2oBoAqNtJ9badtnA_;
    __asm ("movups xmmword [0x0060edb0], xmm0");
    xmm0 = *((rsp - 0x10));
    *((rsp - 0x10)) = obj.NTI_LbeSGvgPzGzXnW9caIkJqMA_;
    __asm ("movhps xmm0, qword [0x0040ae08]");
    *(0x0060e730) = 2;
    __asm ("movups xmmword [0x00612630], xmm0");
    xmm0 = *((rsp - 0x10));
    *(obj.NTI_iLZrPn9anoh9ad1MmO0RczFw_) = 0x38;
    __asm ("movhps xmm0, qword [0x0040ae18]");
    *(0x00612628) = 0x11;
    __asm ("movups xmmword [0x0060ef10], xmm0");
    *(0x0060e780) = 0;
    *(0x0060e760) = 2;
    *(obj.NTI_HMIVdYjdZYWskTmTQVo5BQ_) = 8;
    *(0x0060ed28) = 0x16;
    *(0x0060ed30) = obj.NTI_iLZrPn9anoh9ad1MmO0RczFw_;
    *(0x0060ed48) = sym.Marker_tyRef_HMIVdYjdZYWskTmTQVo5BQ;
    *(obj.NTI_LbeSGvgPzGzXnW9caIkJqMA_) = 0x38;
    *(0x0060ef68) = 0x11;
    *(0x0060e7b0) = 0;
    *(0x0060e790) = 2;
    __asm ("movups xmmword [0x0060ef70], xmm2");
    *(obj.NTI_vyjC2ukVFYc78nQPrSCc9bA_) = 0x38;
    *(0x0060ef08) = 0x11;
    *(0x0060e7e0) = 0;
    *(0x0060e7c0) = 2;
    *(obj.NTI_KGSY1JdrNB7Xi8KDhXFhSg_) = 0x38;
    *(0x00612808) = 0x11;
    *(0x0060e810) = 0;
    *(0x0060e7f0) = 2;
    *((rsp - 0x10)) = obj.NTI_iLZrPn9anoh9ad1MmO0RczFw_;
    xmm0 = *((rsp - 0x10));
    *(obj.NTI_LEclZrWX2FQAodlapxGITw_) = 8;
    __asm ("movhps xmm0, qword [0x0040ae20]");
    *(0x00612528) = 0x16;
    __asm ("movups xmmword [0x00612810], xmm0");
    *(0x00612530) = obj.NTI_KGSY1JdrNB7Xi8KDhXFhSg_;
    *(0x00612548) = sym.Marker_tyRef_LEclZrWX2FQAodlapxGITw;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4044e0 */
#include <stdint.h>
 
int64_t nimGC_setStackBottom (uint32_t arg1) {
    rdi = arg1;
    rax = gch_IcYaEuuWivYAS86vFMTS3Q;
    if (rax != 0) {
        if (rax == rdi) {
            goto label_0;
        }
        if (rdi >= rax) {
            rdi = rax;
            goto label_1;
        }
    }
label_1:
    *(obj.gch_IcYaEuuWivYAS86vFMTS3Q) = rdi;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x405210 */
#include <stdint.h>
 
int64_t doOperation_3F8QeaTyYrJJF2gjBr6b8A (int64_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_0;
    }
    rbx = rdi - 0x10;
    if (sil == 1) {
        goto label_1;
    }
    if (sil == 0) {
        goto label_2;
    }
    if (sil == 2) {
        goto label_3;
    }
    if (sil != 3) {
        goto label_4;
    }
    rdx = .comment;
    rax = .comment;
    rbp = .comment;
    if (rdx <= rax) {
        rdx *= 3;
        edi = 0x60f060;
        rax = rdx;
        rax >>= 0x3f;
        rax += rdx;
        rax >>= 1;
        rsi = rax*8 + 0x10;
        *(0x0060f048) = rax;
        rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
        *((rax + 8)) = 1;
        rbp = rax + 0x10;
        rax = .comment;
        memcpy (rbp, *(0x0060f050), rax*8);
        rax = .comment;
        edi = 0x60f060;
        rsi = rax - 0x10;
        rawDealloc_DA62HrGC5sdfCED505KyyQ ();
        *(0x0060f050) = rbp;
        rax = .comment;
    }
    *((rbp + rax*8)) = rbx;
    *(0x0060f040)++;
    do {
label_4:
        return rax;
label_0:
        return rax;
label_3:
        rax = *((rdi - 0x10));
        rax -= 8;
        *((rdi - 0x10)) = rax;
    } while (rax > 7);
    rsi = rbx;
    edi = 0x60f010;
    void (*0x4040b0)() ();
label_1:
    rax = .comment;
    if (rax <= *(0x0060f040)) {
        rdx = rax * 3;
        edi = 0x60f060;
        rax = rdx;
        rax >>= 0x3f;
        rax += rdx;
        rax >>= 1;
        rsi = rax*8 + 0x10;
        *(0x0060f048) = rax;
        rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
        *((rax + 8)) = 1;
        rbp = rax + 0x10;
        rax = .comment;
        memcpy (rbp, *(0x0060f050), rax*8);
        rax = .comment;
        edi = 0x60f060;
        rsi = rax - 0x10;
        rawDealloc_DA62HrGC5sdfCED505KyyQ ();
        *(0x0060f050) = rbp;
    }
    rdx = .comment;
    rax = .comment;
    *((rax + rdx*8)) = rbx;
    *(0x0060f040)++;
    return rax;
label_2:
    rsi = rbx;
    edi = gch_IcYaEuuWivYAS86vFMTS3Q;
    return markS_NZr5o3Ubzrci4OmK29cHBJA ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x40a064 */
#include <stdint.h>
 
void fini (void) {
    /* [13] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408860 */
#include <stdint.h>
 
void registerSignalHandler_njssp69aa7hvxte9bJ8uuDcg_2 (void) {
    esi = signalHandler;
    signal (2);
    esi = signalHandler;
    signal (0xb);
    esi = signalHandler;
    signal (6);
    esi = signalHandler;
    signal (8);
    esi = signalHandler;
    signal (4);
    esi = signalHandler;
    signal (0xb);
    esi = signalHandler;
    edi = 0xd;
    return signal ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400a10 */
#include <stdint.h>
 
void signal (void) {
    signal ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400fe0 */
#include <stdint.h>
 
uint64_t isOnStack_dJJW59cIgsBmT59aZrOM71Mg (uint32_t arg1) {
    rdi = arg1;
    rax = rsp - 8;
    rcx = gch_IcYaEuuWivYAS86vFMTS3Q;
    *((rsp - 8)) = 0;
    *((rsp - 8)) = rax;
    rdx = *((rsp - 8));
    eax = 0;
    if (rdx <= rdi) {
        al = (rcx >= rdi) ? 1 : 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x402710 */
#include <stdint.h>
 
uint64_t excl_Z9cZKmN1jjRFCzU0lgW9a1XA (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdx = rsi;
    rdx >>= 9;
    eax = (int32_t) dl;
    rax = *((rdi + rax*8));
    if (rax != 0) {
        goto label_0;
    }
    goto label_1;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_2;
        }
label_0:
    } while (rdx != *((rax + 8)));
    rcx = rsi;
    edx = 1;
    ecx &= 0x1ff;
    rsi = rcx;
    rdx <<= cl;
    rsi >>= 6;
    rdx = ~rdx;
    *((rax + rsi*8 + 0x10)) &= rdx;
label_1:
    return rax;
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4044d0 */
#include <stdint.h>
 
void setPosition_plJQLEbXvFqZv6Phpo1t1w (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408930 */
#include <stdint.h>
 
uint64_t rawNewString (uint32_t arg1) {
    rdi = arg1;
    edx = gch_IcYaEuuWivYAS86vFMTS3Q;
    ebx = 7;
    if (rdi >= 7) {
        rbx = rdi;
    }
    edi = strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
    rbp = rbx + 0x11;
    rsi = rbp;
    rax = rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
    memset (rax, 0, rbp);
    *((rax + 8)) = rbx;
    *(rax) = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x405180 */
#include <stdint.h>
 
int64_t containsOrIncl_CbGEjIBKJIi7knlaDzUluA (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r8 = rsi;
    r9 = *((rdi + 8));
    r10 = *((rdi + 0x18));
    r8 >>= 0xc;
    rax = r8;
    rax &= r9;
    rdx = *((r10 + rax*8));
    if (rdx != 0) {
        goto label_0;
    }
    goto label_1;
    do {
        rax *= 5;
        rax &= r9;
        rdx = *((r10 + rax*8));
        if (rdx == 0) {
            goto label_1;
        }
label_0:
    } while (r8 != *((rdx + 8)));
    rsi >>= 3;
    rcx = rsi;
    ecx &= 0x1ff;
    rax = rcx;
    rax >>= 6;
    rdi = rdx + rax*8;
    edx = 1;
    eax = 1;
    rsi = *((rdi + 0x10));
    rdx <<= cl;
    if ((rsi & rdx) == 0) {
        rdx |= rsi;
        eax = 0;
        *((rdi + 0x10)) = rdx;
        return rax;
    }
    return rax;
label_1:
    eax = incl_m4q9b16kJJcoKe9c4ERtlpCg ();
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x402770 */
#include <stdint.h>
 
int64_t freeBigChunk_CAqFS1jFL1RxG80t9bOGmAA (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r10 = rsi;
    rax = *((rsi + 8));
    rbx = rsi;
    *((rdi + 0x2890)) += rax;
    rax = *(rsi);
    rax &= 0xfffffffffffffffe;
    *(rsi) = rax;
    if (rax != 0) {
        goto label_9;
    }
label_3:
    rax = *((rbx + 8));
label_5:
    r10 += rax;
    r11 = r10;
    r11 >>= 0x15;
    edx = (int32_t) r11b;
    r14 = rbp + rdx*8;
    rdx = *((r14 + 0x28a8));
    if (rdx == 0) {
        goto label_0;
    }
    if (*((rdx + 8)) != r11) {
        goto label_10;
    }
    goto label_11;
    do {
        if (r11 == *((rdx + 8))) {
            goto label_11;
        }
label_10:
        rdx = *(rdx);
    } while (rdx != 0);
    do {
label_0:
        ecx = eax;
        if (eax > 0xffff) {
            goto label_12;
        }
label_1:
        edx = 0;
        if (eax > 0xff) {
            ecx >>= 8;
            edx = 8;
        }
label_2:
        rcx = *((rcx + obj.fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ));
        *((rbx + 0x18)) = 0;
        rdx += rcx;
        ecx = rdx - 5;
        rsi = rdx - 6;
        rax >>= cl;
        rcx = rax - 0x20;
        rax = rsi;
        rax <<= 5;
        rax += rcx;
        rdi = rbp + rax*8;
        rax = *((rdi + 0x1078));
        *((rbx + 0x10)) = rax;
        if (rax != 0) {
            *((rax + 0x18)) = rbx;
        }
        eax = 1;
        *((rdi + 0x1078)) = rbx;
        ecx &= 0x1f;
        rdi = rax;
        rdi <<= cl;
        ecx = esi;
        *((rbp + rdx*4 + 0xffc)) |= edi;
        ecx &= 0x1f;
        rax <<= cl;
        *((rbp + 0x1010)) |= eax;
        r12 = rbx;
        r13 = rbx;
        r14 = rbx;
        return rax;
label_11:
        rcx = r10;
        r12d = 1;
        rcx >>= 0xc;
        ecx &= 0x1ff;
        r13 = rcx;
        r12 <<= cl;
        r13 >>= 6;
    } while ((*((rdx + r13*8 + 0x10)) & r12) == 0);
    if ((*(r10) & 1) != 0) {
        goto label_0;
    }
    if (*((r10 + 8)) <= 0xfc8) {
        goto label_0;
    }
    if (rax > 0x3effffff) {
        goto label_0;
    }
    rsi = r10;
    rdi = rbp;
    removeChunkFromMatrix_v9bekLOkesgfrZC4aumfLXw_2 ();
    rax = *((r10 + 8));
    rax += *((rbx + 8));
    *((rbx + 8)) = rax;
    rdx = *((r14 + 0x28a8));
    if (rdx == 0) {
        goto label_13;
    }
    if (*((rdx + 8)) != r11) {
        goto label_14;
    }
    goto label_15;
    do {
        if (r11 == *((rdx + 8))) {
            goto label_15;
        }
label_14:
        rdx = *(rdx);
    } while (rdx != 0);
label_13:
    if (rax <= 0x3f000000) {
        goto label_0;
    }
label_6:
    edx = 0x3f000000;
    rsi = rbx;
    rdi = rbp;
    rax = splitChunk2_UxUTh1oy39boKK4NPJIGnLQ ();
    rdx = *((rax + 8));
    ecx = edx;
    if (edx <= 0xffff) {
        goto label_16;
    }
    if (edx <= 0xffffff) {
        goto label_17;
    }
    ecx = edx;
    esi = 0x18;
    ecx >>= 0x18;
label_7:
    rcx = *((rcx + obj.fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ));
    *((rax + 0x18)) = 0;
    rsi += rcx;
    ecx = rsi - 5;
    rdx >>= cl;
    rcx = rdx - 0x20;
    rdx = rsi - 6;
    rdi = rdx;
    rdi <<= 5;
    rdi += rcx;
    r8 = rbp + rdi*8;
    rdi = *((r8 + 0x1078));
    *((rax + 0x10)) = rdi;
    if (rdi != 0) {
        *((rdi + 0x18)) = rax;
    }
    *((r8 + 0x1078)) = rax;
    eax = 1;
    ecx &= 0x1f;
    rdi = rax;
    rdi <<= cl;
    ecx = edx;
    *((rbp + rsi*4 + 0xffc)) |= edi;
    ecx &= 0x1f;
    rax <<= cl;
    *((rbp + 0x1010)) |= eax;
    rax = *((rbx + 8));
    ecx = eax;
    if (eax <= 0xffff) {
        goto label_1;
    }
label_12:
    if (eax > 0xffffff) {
        goto label_18;
    }
    ecx >>= 0x10;
    edx = 0x10;
    goto label_2;
label_9:
    r12 = rsi;
    r12 -= rax;
    rdx = r12;
    rdx >>= 0x15;
    eax = (int32_t) dl;
    rax = *((rdi + rax*8 + 0x28a8));
    if (rax != 0) {
        goto label_19;
    }
    goto label_3;
label_4:
    rax = *(rax);
    if (rax == 0) {
        goto label_3;
    }
label_19:
    if (rdx != *((rax + 8))) {
        goto label_4;
    }
    rcx = r12;
    edx = 1;
    rcx >>= 0xc;
    ecx &= 0x1ff;
    rsi = rcx;
    rdx <<= cl;
    rsi >>= 6;
    if ((*((rax + rsi*8 + 0x10)) & rdx) == 0) {
        goto label_3;
    }
    if ((*(r12) & 1) != 0) {
        goto label_3;
    }
    rax = *((r12 + 8));
    if (rax <= 0xfc8) {
        goto label_3;
    }
    if (rax > 0x3effffff) {
        goto label_3;
    }
    rsi = r12;
    rdi = rbp;
    removeChunkFromMatrix_v9bekLOkesgfrZC4aumfLXw_2 ();
    rax = *((rbx + 8));
    rcx = rbx;
    rbx >>= 0x15;
    rax += *((r12 + 8));
    edx = (int32_t) bl;
    rcx >>= 0xc;
    *((r12 + 8)) = rax;
    rdx = *((rbp + rdx*8 + 0x28a8));
    if (rdx != 0) {
        goto label_20;
    }
    goto label_21;
    do {
        rdx = *(rdx);
        if (rdx == 0) {
            goto label_21;
        }
label_20:
    } while (rbx != *((rdx + 8)));
    ecx &= 0x1ff;
    eax = 1;
    rsi = rcx;
    rax <<= cl;
    rsi >>= 6;
    rax = ~rax;
    *((rdx + rsi*8 + 0x10)) &= rax;
    rax = *((r12 + 8));
label_21:
    if (rax <= 0x3f000000) {
        goto label_22;
    }
    edx = 0x3f000000;
    rsi = r12;
    rdi = rbp;
    rax = splitChunk2_UxUTh1oy39boKK4NPJIGnLQ ();
    rbx = rax;
    rax = *((r12 + 8));
    ecx = eax;
    if (eax > 0xffff) {
        goto label_23;
    }
    edx = 0;
    if (eax > 0xff) {
        ecx = eax;
        edx = 8;
        ecx >>= 8;
    }
label_8:
    rcx = *((rcx + obj.fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ));
    *((r12 + 0x18)) = 0;
    rdx += rcx;
    ecx = rdx - 5;
    rsi = rdx - 6;
    rax >>= cl;
    rcx = rax - 0x20;
    rax = rsi;
    rax <<= 5;
    rax += rcx;
    rdi = rbp + rax*8;
    rax = *((rdi + 0x1078));
    *((r12 + 0x10)) = rax;
    if (rax != 0) {
        *((rax + 0x18)) = r12;
    }
    eax = 1;
    *((rdi + 0x1078)) = r12;
    ecx &= 0x1f;
    r10 = rbx;
    rdi = rax;
    rdi <<= cl;
    ecx = esi;
    *((rbp + rdx*4 + 0xffc)) |= edi;
    ecx &= 0x1f;
    rax <<= cl;
    *((rbp + 0x1010)) |= eax;
    rax = *((rbx + 8));
    goto label_5;
label_15:
    r12 = ~r12;
    *((rdx + r13*8 + 0x10)) &= r12;
    rax = *((rbx + 8));
    if (rax <= 0x3f000000) {
        goto label_0;
    }
    goto label_6;
label_18:
    ecx >>= 0x18;
    edx = 0x18;
    goto label_2;
label_22:
    r10 = r12;
    rbx = r12;
    goto label_5;
label_16:
    esi = 0;
    if (edx <= 0xff) {
        goto label_7;
    }
    ecx = edx;
    esi = 8;
    ecx >>= 8;
    goto label_7;
label_17:
    ecx >>= 0x10;
    esi = 0x10;
    goto label_7;
label_23:
    if (eax <= 0xffffff) {
        ecx >>= 0x10;
        edx = 0x10;
        goto label_8;
    }
    ecx = eax;
    edx = 0x18;
    ecx >>= 0x18;
    goto label_8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4020b0 */
#include <stdint.h>
 
int64_t allocAvlNode_neSuioWH6NDTp8E9cNgBmjg (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_8h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r14 = rsi;
    rbx = rdi;
    rax = *((rdi + 0x30c0));
    *(rsp) = rdx;
    if (rax == 0) {
        goto label_0;
    }
    rdx = *(rax);
    *((rdi + 0x30c0)) = rdx;
    do {
        *((rsp + 8)) = r14;
        xmm0 = *((rsp + 8));
        rcx = rbx + 0x30d8;
        __asm ("movhps xmm0, qword [rsp]");
        *(rsp) = rcx;
        __asm ("movups xmmword [rax + 0x10], xmm0");
        xmm0 = *(rsp);
        __asm ("punpcklqdq xmm0, xmm0");
        if (*((rbx + 0x30d8)) == 0) {
            __asm ("movups xmmword [rbx + 0x30d8], xmm0");
        }
        __asm ("movups xmmword [rax], xmm0");
        *((rax + 0x20)) = 1;
        return rax;
label_0:
        esi = 0x28;
        llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ ();
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x401f80 */
#include <stdint.h>
 
void getSmallChunk_h6cvXbfQjxIdThM5GthosA (int64_t arg1) {
    rdi = arg1;
    esi = 0x1000;
    return getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4054b0 */
#include <stdint.h>
 
uint64_t forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
label_0:
    eax = *(rsi);
    if (al == 2) {
        goto label_5;
    }
    if (al == 3) {
        goto label_6;
    }
    while (rsi == 0) {
        return eax;
        rax = *((rsi + 0x10));
        rdi += *((rsi + 8));
        edx = (int32_t) dl;
        rsi = rax;
        void (*0x4053e0)() ();
label_6:
        rax = *((rsi + 0x10));
        rax = *(rax);
        if (rax == 2) {
            goto label_7;
        }
        if (rax == 4) {
            goto label_8;
        }
        ecx = 0;
        if (rax == 1) {
            goto label_9;
        }
label_4:
        rax = *((rsi + 0x20));
        r8 = *((rsi + 0x28));
        if (rcx < rax) {
            goto label_10;
        }
label_3:
        rsi = *((r8 + rax*8));
    }
label_2:
    edx = (int32_t) dl;
    goto label_0;
label_5:
    r15 = 0x200011400000;
    r13 = rdi;
    r12d = 0;
    ebp = (int32_t) dl;
    rbx = rsi;
    r14 = *((rsi + 0x20));
    if (r14 <= 0) {
        goto label_11;
    }
    do {
        rax = *((rbx + 0x28));
        rsi = *((rax + r12*8));
        if (*(rsi) == 1) {
            goto label_12;
        }
        edx = ebp;
        rdi = r13;
        forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ ();
        goto label_0;
label_1:
        r12++;
    } while (r14 != r12);
label_11:
    return rax;
label_12:
    rax = *((rsi + 0x10));
    rdi = *((rsi + 8));
    rdx = r15;
    ecx = *((rax + 8));
    rdi += r13;
    rdx >>= cl;
    edx &= 1;
    if (edx == 0) {
        edx = ebp;
        rsi = rax;
        forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA ();
        goto label_1;
    }
    rdi = *(rdi);
    esi = ebp;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A ();
    goto label_1;
label_10:
    rsi = *((r8 + rcx*8));
    if (rsi != 0) {
        goto label_2;
    }
    goto label_3;
label_9:
    rax = *((rsi + 8));
    ecx = *((rdi + rax));
    goto label_4;
label_8:
    rax = *((rsi + 8));
    rcx = *((rdi + rax));
    goto label_4;
label_7:
    rax = *((rsi + 8));
    ecx = *((rdi + rax));
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4045c0 */
#include <stdint.h>
 
uint64_t init_WHgd5C59bkXWDz3vnAxfzXQ (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    esi = 0x2030;
    edi = 0x60f060;
    rax = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
    r12 = rax;
    rbx = rax + 0x20;
    if (*(0x00612108) == 0) {
        goto label_1;
    }
label_0:
    rcx = rbx + 0x2030;
    rdx = rbx;
    edi = 0x60f060;
    esi = 0x612108;
    add_Xuf47u3imOz8BOk5HURLWQ ();
    rdx = rbx + 0x10;
    rdi = rbx + 0x18;
    rax = *((r12 + 8));
    rdi &= 0xfffffffffffffff8;
    rcx = rdx;
    *(0x006118f8) += rax;
    __asm ("movdqa xmm0, xmmword [0x0040ab60]");
    *((r12 + 0x28)) = 1;
    rcx -= rdi;
    eax = 0;
    ecx += 0x2000;
    *((rbx + 0x10)) = 0;
    *((rbx + 0x2008)) = 0;
    ecx >>= 3;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    *((rbp + 0x18)) = rdx;
    __asm ("movups xmmword [rbp], xmm0");
    *((rbp + 0x10)) = 0;
    return rax;
label_1:
    if (*(0x00612138) != 0) {
        *(0x00612108) = 0x612138;
        goto label_0;
    }
    *((rsp + 8)) = 0x612138;
    xmm0 = *((rsp + 8));
    *(0x00612108) = 0x612138;
    __asm ("punpcklqdq xmm0, xmm0");
    __asm ("movups xmmword [0x00612138], xmm0");
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x401a20 */
#include <stdint.h>
 
int64_t removeChunkFromMatrix2_NyesLqu7hqkgfLqcLrQpjw (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r8 = rdx;
    rax = *((rsi + 0x10));
    r8 <<= 5;
    r8 = rcx + r8 + 0x20e;
    *((rdi + r8*8 + 8)) = rax;
    if (rax == 0) {
        goto label_0;
    }
    *((rax + 0x18)) = 0;
    do {
        xmm0 = 0;
        __asm ("movups xmmword [rsi + 0x10], xmm0");
        return rax;
label_0:
        r8d = 1;
        ecx &= 0x1f;
        r9 = rdi + rdx*4;
        rax = r8;
        rax <<= cl;
        eax = ~eax;
        *((r9 + 0x1014)) &= eax;
    } while (*((r9 + 0x1014)) != 0);
    edx &= 0x1f;
    xmm0 = 0;
    ecx = edx;
    r8 <<= cl;
    r8d = ~r8d;
    *((rdi + 0x1010)) &= r8d;
    __asm ("movups xmmword [rsi + 0x10], xmm0");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x404bc0 */
#include <stdint.h>
 
int64_t cellSetRawInsert_wqizyapnzNjHA3SIFqE8ow (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rdi = *((rdi + 8));
    rax = *((rdx + 8));
    rax &= rdi;
    rcx = rsi + rax*8;
    if (*(rcx) == 0) {
        goto label_0;
    }
    do {
        rax *= 5;
        rax &= rdi;
        rcx = rsi + rax*8;
    } while (*(rcx) != 0);
label_0:
    *(rcx) = rdx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408130 */
#include <stdint.h>
 
int64_t showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    rax = errorMessageWriter_ZXnv0JyrWe3HTd07wpSr7A;
    if (rax == 0) {
        goto label_0;
    }
    r12d = 0;
    if (rdi == 0) {
        goto label_1;
    }
    rax = strlen (rdi);
    esi = 0x18;
    *(rsp) = 7;
    rbx = rax;
    while (1) {
        edx = gch_IcYaEuuWivYAS86vFMTS3Q;
        edi = strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
        rax = rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
        *((rsp + 8)) = rbx;
        xmm0 = *((rsp + 8));
        r12 = rax;
        __asm ("movhps xmm0, qword [rsp]");
        __asm ("movups xmmword [rax], xmm0");
        memcpy (rax + 0x10, rbp, rbx + 1);
        rax = errorMessageWriter_ZXnv0JyrWe3HTd07wpSr7A;
label_1:
        void (*rax)() ();
label_0:
        rbx = stderr;
        fputs (r12, *(obj.stderr));
        eax = ferror (rbx);
        if (eax != 0) {
            goto label_2;
        }
        return rax;
        rsi = rax + 0x11;
        *(rsp) = rax;
    }
label_2:
    clearerr (rbx);
    edi = TM_Q5wkpxktOdTGvlSRo9bzt9aw_22;
    rax = raiseEIO_PpfSiTIeNpMAb9a5o6SglJw ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4042a0 */
#include <stdint.h>
 
uint64_t genericReset (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
label_0:
    eax = *((rsi + 8));
    eax -= 4;
    if (al > 0x29) {
        goto label_3;
    }
    eax = (int32_t) al;
    r13 = rsi;
    /* switch table (42 cases) at 0x40a500 */
    al = isOnStack_dJJW59cIgsBmT59aZrOM71Mg ();
    if (al == 0) {
        rax = *(rdi);
        if (rax <= 0xfff) {
            goto label_4;
        }
        rcx = *((rax - 0x10));
        rsi = rax - 0x10;
        rdx = rcx - 8;
        *((rax - 0x10)) = rdx;
        if (rdx > 7) {
            goto label_4;
        }
        edi = 0x60f010;
        addZCT_fCDI7oO1NNVXXURtxSzsRw ();
        goto label_4;
        rsi = *((rsi + 0x18));
        void (*0x4043b0)() ();
        rsi = *((rsi + 0x18));
        genericResetAux_ruA1rosalqf8AhzZPPTBQg ();
    }
label_4:
    *(rbp) = 0;
    do {
label_1:
        return rax;
        rsi = *((rsi + 0x10));
        rax = *(r13);
        ebx = 0;
        rdi = *(rsi);
        __asm ("cqo");
        rax = rdx:rax / rdi;
        rdx = rdx:rax % rdi;
        r12 = rax;
    } while (rax <= 0);
label_2:
    rdi *= rbx;
    rbx++;
    rdi += rbp;
    genericReset ();
    goto label_0;
    if (r12 == rbx) {
        goto label_1;
    }
    rsi = *((r13 + 0x10));
    rdi = *(rsi);
    goto label_2;
    rdx = *(rsi);
    esi = 0;
    void (*0x4009c0)() ();
label_3:
    rdx = *(rsi);
    esi = 0;
    return memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4040b0 */
#include <stdint.h>
 
int64_t addZCT_fCDI7oO1NNVXXURtxSzsRw (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rax = *(rsi);
    if ((al & 4) != 0) {
        return rax;
    }
    rax |= 4;
    r12 = rsi;
    rbx = rdi;
    *(rsi) = rax;
    rdx = *((rdi + 8));
    rax = *(rdi);
    if (rdx > rax) {
        rbp = *((rdi + 0x10));
        *((rbp + rax*8)) = r12;
        *(rbx)++;
        r12 = rbx;
        return rax;
    }
    rdx *= 3;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rax >>= 1;
    *((rdi + 8)) = rax;
    rsi = rax*8 + 0x10;
    edi = 0x60f060;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    rbp = rax + 0x10;
    *((rax + 8)) = 1;
    rax = *(rbx);
    memcpy (rbp, *((rbx + 0x10)), rax*8);
    rax = *((rbx + 0x10));
    edi = 0x60f060;
    rsi = rax - 0x10;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = *(rbx);
    *((rbx + 0x10)) = rbp;
    *((rbp + rax*8)) = r12;
    *(rbx)++;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407250 */
#include <stdint.h>
 
int64_t deinit_WHgd5C59bkXWDz3vnAxfzXQ_3 (int64_t arg1) {
    rdi = arg1;
    rsi = *((rdi + 0x10));
    if (rsi == 0) {
        goto label_0;
    }
    do {
        rbx = *(rsi);
        edi = 0x60f060;
        rsi -= 0x10;
        rawDealloc_DA62HrGC5sdfCED505KyyQ ();
        rsi = rbx;
    } while (rbx != 0);
label_0:
    rax = *((rbp + 0x18));
    *((rbp + 0x10)) = 0;
    edi = 0x60f060;
    rsi = rax - 0x10;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    *((rbp + 0x18)) = 0;
    *(rbp) = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4088e0 */
#include <stdint.h>
 
int64_t getRefcount (int64_t arg1) {
    rdi = arg1;
    rax = *((rdi - 0x10));
    rax >>= 3;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x401270 */
#include <stdint.h>
 
uint64_t contains_tGsWrN4DY41H9btt3FhjrNA (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdx = rsi;
    rdx >>= 9;
    eax = (int32_t) dl;
    rax = *((rdi + rax*8));
    if (rax != 0) {
        goto label_0;
    }
    goto label_1;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_2;
        }
label_0:
    } while (rdx != *((rax + 8)));
    rcx = rsi;
    edx = 1;
    ecx &= 0x1ff;
    rsi = rcx;
    rdx <<= cl;
    rsi >>= 6;
    al = ((*((rax + rsi*8 + 0x10)) & rdx) != 0) ? 1 : 0;
    return rax;
label_2:
    return rax;
label_1:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x401a90 */
#include <stdint.h>
 
int64_t getBigChunk_z9bCNjXTYllZ3pI24nEsw2g (uint32_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = esi;
    rbx = rdi;
    if (esi <= 0xffff) {
        goto label_11;
    }
    if (esi <= 0xffffff) {
        goto label_12;
    }
    eax = esi;
    edx = 0x18;
    eax >>= 0x18;
label_0:
    rax = *((rax + obj.fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ));
    ecx = rax + rdx - 5;
    eax = 1;
    rax <<= cl;
    rax += 0xfff;
    rax &= 0xfffffffffffff000;
    rdx = rax + rsi - 1;
    rax = -rax;
    rax &= rdx;
    if (rax <= 0x3f000000) {
    }
    edx = ebp;
    if (ebp <= 0xffff) {
        goto label_13;
    }
    if (ebp <= 0xffffff) {
        goto label_14;
    }
    edx = ebp;
    ecx = 0x18;
    edx >>= 0x18;
label_1:
    rsi = *((rdx + obj.fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ));
    rdi = rbp;
    rsi += rcx;
    ecx = rsi - 5;
    rdx = rsi - 6;
    rdi >>= cl;
    rcx = rdi;
    edi = 0xffffffff;
    rcx -= 0x20;
    r9 = rdi;
    r9 <<= cl;
    rcx = r9;
    ecx &= *((rbx + rsi*4 + 0xffc));
    if (ecx != 0) {
        goto label_15;
    }
    ecx = rdx + 1;
    rdi <<= cl;
    edi &= *((rbx + 0x1010));
    edx = edi;
    edx = -edx;
    edi &= edx;
    if (edi <= 0xffff) {
        goto label_16;
    }
    if (edi <= 0xffffff) {
        goto label_17;
    }
    edi >>= 0x18;
    ecx = 0x18;
label_5:
    rdx = *((rdi + obj.fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ));
    rdx += rcx;
    if (rdx > 0) {
        ecx = *((rbx + rdx*4 + 0x1014));
        esi = *((rbx + rdx*4 + 0x1014));
        esi = -esi;
        esi &= ecx;
        if (esi <= 0xffff) {
            goto label_18;
        }
        if (esi <= 0xffffff) {
            goto label_19;
        }
        esi >>= 0x18;
        edi = 0x18;
label_8:
        rcx = *((rsi + obj.fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ));
        rsi = rdx;
        rsi <<= 5;
        rcx += rdi;
        rsi = rcx + rsi + 0x20e;
        r12 = *((rbx + rsi*8 + 8));
        if (r12 != 0) {
            goto label_20;
        }
    }
label_2:
    if (rax <= 0x7ffff) {
        goto label_21;
    }
    rsi = rbp;
    rdi = rbx;
    rax = requestOsChunks_z9bCNjXTYllZ3pI24nEsw2g_2 ();
    r12 = rax;
    if (*((rax + 8)) > rbp) {
        goto label_10;
    }
label_3:
    r14 = r12;
    *(r12) = 1;
    r13 = r12;
    r14 >>= 0x15;
    r13 >>= 0xc;
    eax = (int32_t) r14b;
    r15 = rbx + rax*8;
    rax = *((r15 + 0x28a8));
    if (rax != 0) {
        goto label_22;
    }
    goto label_23;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_23;
        }
label_22:
    } while (r14 != *((rax + 8)));
label_6:
    rcx = r13;
    edx = 1;
    ecx &= 0x1ff;
    rsi = rcx;
    rdx <<= cl;
    rsi >>= 6;
    *((rax + rsi*8 + 0x10)) |= rdx;
    rax = r12;
    *((rbx + 0x2890)) -= rbp;
    return rax;
label_11:
    edx = 0;
    if (esi <= 0xff) {
        goto label_0;
    }
    eax = esi;
    edx = 8;
    eax >>= 8;
    goto label_0;
label_13:
    ecx = 0;
    if (ebp <= 0xff) {
        goto label_1;
    }
    edx = ebp;
    ecx = 8;
    edx >>= 8;
    goto label_1;
label_15:
    esi = ecx;
    esi = -esi;
    ecx &= esi;
    if (ecx <= 0xffff) {
        goto label_24;
    }
    if (ecx <= 0xffffff) {
        goto label_25;
    }
    ecx >>= 0x18;
    esi = 0x18;
label_4:
    rcx = *((rcx + obj.fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ));
    rcx += rsi;
    rsi = rdx;
    rsi <<= 5;
    rsi = rcx + rsi + 0x20e;
    r12 = *((rbx + rsi*8 + 8));
    if (r12 == 0) {
        goto label_2;
    }
label_20:
    rsi = rdx;
    rax = *((r12 + 0x10));
    rsi <<= 5;
    rsi = rcx + rsi + 0x20e;
    *((rbx + rsi*8 + 8)) = rax;
    if (rax == 0) {
        goto label_26;
    }
    *((rax + 0x18)) = 0;
label_9:
    xmm0 = 0;
    rax = rbp + 0xfff;
    __asm ("movups xmmword [r12 + 0x10], xmm0");
    if (rax >= *((r12 + 8))) {
        goto label_3;
    }
label_10:
    rdx = rbp;
    rsi = r12;
    rdi = rbx;
    rax = splitChunk2_UxUTh1oy39boKK4NPJIGnLQ ();
    rdx = *((rax + 8));
    ecx = edx;
    if (edx <= 0xffff) {
        goto label_27;
    }
    if (edx <= 0xffffff) {
        goto label_28;
    }
    ecx = edx;
    esi = 0x18;
    ecx >>= 0x18;
label_7:
    rcx = *((rcx + obj.fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ));
    *((rax + 0x18)) = 0;
    rsi += rcx;
    ecx = rsi - 5;
    rdx >>= cl;
    rcx = rdx - 0x20;
    rdx = rsi - 6;
    rdi = rdx;
    rdi <<= 5;
    rdi += rcx;
    r8 = rbx + rdi*8;
    rdi = *((r8 + 0x1078));
    *((rax + 0x10)) = rdi;
    if (rdi != 0) {
        *((rdi + 0x18)) = rax;
    }
    *((r8 + 0x1078)) = rax;
    eax = 1;
    ecx &= 0x1f;
    rdi = rax;
    rdi <<= cl;
    ecx = edx;
    *((rbx + rsi*4 + 0xffc)) |= edi;
    ecx &= 0x1f;
    rax <<= cl;
    *((rbx + 0x1010)) |= eax;
    goto label_3;
label_24:
    esi = 0;
    if (ecx <= 0xff) {
        goto label_4;
    }
    ecx >>= 8;
    esi = 8;
    goto label_4;
label_16:
    ecx = 0;
    if (edi <= 0xff) {
        goto label_5;
    }
    edi >>= 8;
    ecx = 8;
    goto label_5;
label_12:
    eax >>= 0x10;
    edx = 0x10;
    goto label_0;
label_14:
    edx >>= 0x10;
    ecx = 0x10;
    goto label_1;
label_23:
    esi = 0x50;
    rdi = rbx;
    llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ ();
    rdx = *((r15 + 0x28a8));
    *(rax) = rdx;
    *((r15 + 0x28a8)) = rax;
    *((rax + 8)) = r14;
    goto label_6;
label_27:
    esi = 0;
    if (edx <= 0xff) {
        goto label_7;
    }
    ecx = edx;
    esi = 8;
    ecx >>= 8;
    goto label_7;
label_18:
    edi = 0;
    if (esi <= 0xff) {
        goto label_8;
    }
    esi >>= 8;
    edi = 8;
    goto label_8;
label_26:
    esi = 1;
    ecx &= 0x1f;
    rdi = rbx + rdx*4;
    rax = rsi;
    rax <<= cl;
    eax = ~eax;
    *((rdi + 0x1014)) &= eax;
    if (*((rdi + 0x1014)) != 0) {
        goto label_9;
    }
    ecx = edx;
    ecx &= 0x1f;
    rsi <<= cl;
    esi = ~esi;
    *((rbx + 0x1010)) &= esi;
    goto label_9;
label_21:
    esi = 0x80000;
    rdi = rbx;
    rax = requestOsChunks_z9bCNjXTYllZ3pI24nEsw2g_2 ();
    r12 = rax;
    goto label_10;
label_28:
    ecx >>= 0x10;
    esi = 0x10;
    goto label_7;
label_17:
    edi >>= 0x10;
    ecx = 0x10;
    goto label_5;
label_25:
    ecx >>= 0x10;
    esi = 0x10;
    goto label_4;
label_19:
    esi >>= 0x10;
    edi = 0x10;
    goto label_8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4087a0 */
#include <stdint.h>
 
int64_t raiseException (int64_t arg2, uint32_t arg1, int64_t arg7) {
    rsi = arg2;
    rdi = arg1;
    xmm0 = arg7;
    rbx = rdi;
    if (*((rdi + 0x10)) == 0) {
        *((rdi + 0x10)) = rsi;
    }
    rax = localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg;
    if (rax != 0) {
        rdi = rbx;
        al = void (*rax)() ();
        if (al == 0) {
            goto label_0;
        }
    }
    rax = globalRaiseHook_JbO1ti4ULxrw54m4zNPbpA;
    if (rax != 0) {
        rdi = rbx;
        al = void (*rax)() ();
        if (al == 0) {
            goto label_0;
        }
    }
    rdi = rbx;
    void (*0x408200)() ();
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407e30 */
#include <stdint.h>
 
int64_t rawNewStringNoInit (uint32_t arg1) {
    rdi = arg1;
    ebx = 7;
    edx = gch_IcYaEuuWivYAS86vFMTS3Q;
    if (rdi >= 7) {
        rbx = rdi;
    }
    edi = strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
    rsi = rbx + 0x11;
    rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
    *((rax + 8)) = rbx;
    *(rax) = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407110 */
#include <stdint.h>
 
int64_t collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw (int64_t arg1) {
    rdi = arg1;
    r12 = rdi + 0x60;
    while (*(rbx) <= 7) {
        rax = *((rbx + 8));
        if (*((rax + 0x20)) != 0) {
            *(0x0060f058)++;
            rdi = rbx + 0x10;
            uint64_t (*rax + 0x20)() ();
            *(0x0060f058)--;
            rax = *((rbx + 8));
        }
        rdx = *((rax + 0x28));
        if (rdx == 0) {
            goto label_2;
        }
        rdi = rbx + 0x10;
        esi = 2;
        void (*rdx)() ();
label_1:
        rsi = rbx;
        rdi = r12;
        rawDealloc_DA62HrGC5sdfCED505KyyQ ();
        if (*((rbp + 0x10)) <= 0) {
            goto label_3;
        }
label_0:
        rax = *((rbp + 0x20));
        rbx = *(rax);
        *(rbx) &= 0xfffffffffffffffb;
        rax = *((rbp + 0x20));
        rdx = *((rbp + 0x10));
        rdx = *((rax + rdx*8 - 8));
        *(rax) = rdx;
        rax = *((rbp + 0x10));
        rax--;
        *((rbp + 0x10)) = rax;
    }
    if (rax > 0) {
        goto label_0;
    }
label_3:
    eax = 1;
    return rax;
label_2:
    edx = *((rax + 8));
    if (dl == 0x18) {
        goto label_4;
    }
    if (dl == 0x2d) {
        goto label_5;
    }
    if (dl != 0x16) {
        goto label_1;
    }
label_5:
    rsi = *((rax + 0x10));
    rdi = rbx + 0x10;
    edx = 2;
    forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA ();
    goto label_1;
label_4:
    if (rbx == 0xfffffffffffffff0) {
        goto label_1;
    }
    r13 = *((rbx + 0x10));
    if (r13 <= 0) {
        goto label_1;
    }
    r14 = rbx + 0x20;
    r15d = 0;
    while (r13 != r15) {
        rax = *((rbx + 8));
        rsi = *((rax + 0x10));
        edx = 2;
        rdi = *(rsi);
        rdi *= r15;
        r15++;
        rdi += r14;
        forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA ();
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4074b0 */
#include <stdint.h>
 
int64_t contains_9c4TZ2Zl3sU4TUeK9bR8E9ciw (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r8 = rsi;
    r9 = *((rdi + 8));
    rdi = *((rdi + 0x18));
    r8 >>= 0xc;
    rax = r8;
    rax &= r9;
    rdx = *((rdi + rax*8));
    if (rdx != 0) {
        goto label_0;
    }
    goto label_1;
    do {
        rax *= 5;
        rax &= r9;
        rdx = *((rdi + rax*8));
        if (rdx == 0) {
            goto label_1;
        }
label_0:
    } while (r8 != *((rdx + 8)));
    rsi >>= 3;
    eax = 1;
    rcx = rsi;
    ecx &= 0x1ff;
    rsi = rcx;
    rax <<= cl;
    rsi >>= 6;
    al = ((*((rdx + rsi*8 + 0x10)) & rax) != 0) ? 1 : 0;
    return rax;
label_1:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4015e0 */
#include <stdint.h>
 
uint64_t incl_Iz1GYiOVKwItgr5CdCm0dQ (int64_t arg3, int64_t arg2) {
    rdx = arg3;
    rsi = arg2;
    rbp >>= 9;
    rbx = rdx;
    eax = (int32_t) bpl;
    r12 = rsi + rax*8;
    rax = *(r12);
    if (rax != 0) {
        goto label_0;
    }
    goto label_1;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_1;
        }
label_0:
    } while (rbp != *((rax + 8)));
    do {
        rcx = rbx;
        edx = 1;
        ecx &= 0x1ff;
        rsi = rcx;
        rdx <<= cl;
        rsi >>= 6;
        *((rax + rsi*8 + 0x10)) |= rdx;
        r12 = rbx;
        return rax;
label_1:
        esi = 0x50;
        llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ ();
        rdx = *(r12);
        *(rax) = rdx;
        *(r12) = rax;
        *((rax + 8)) = rbp;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408660 */
#include <stdint.h>
 
int64_t raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw (int64_t arg1, int64_t arg7) {
    rdi = arg1;
    xmm0 = arg7;
    rax = localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg;
    rbx = rdi;
    if (rax != 0) {
        al = void (*rax)() ();
        if (al == 0) {
            goto label_0;
        }
    }
    rax = globalRaiseHook_JbO1ti4ULxrw54m4zNPbpA;
    if (rax != 0) {
        rdi = rbx;
        al = void (*rax)() ();
        if (al == 0) {
            goto label_0;
        }
    }
    rdi = rbx;
    void (*0x408200)() ();
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x406460 */
#include <stdint.h>
 
int64_t nimRegisterThreadLocalMarker (int64_t arg1) {
    rdi = arg1;
    rax = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
    if (rax <= 0xdab) {
        *((rax*8 + obj.threadLocalMarkers_pC47Nqd8F629cuTchphM5YA)) = rdi;
        rax++;
        *(obj.threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw) = rax;
        return rax;
    }
    return nimRegisterThreadLocalMarker_part_14 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x404cb0 */
#include <stdint.h>
 
int64_t cellSetPut_mFUFZ7eVLRT9bMaHzrsxFrQ (uint32_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r8 = *((rdi + 8));
    r9 = *((rdi + 0x18));
    rcx = r8;
    rcx &= rsi;
    r12 = rcx*8;
    r10 = r9 + r12;
    rax = *(r10);
    if (rax == 0) {
        goto label_3;
    }
    rdx = rcx;
    if (rsi != *((rax + 8))) {
        goto label_4;
    }
    goto label_5;
    do {
        if (*((rax + 8)) == rsi) {
            goto label_5;
        }
label_4:
        rdx *= 5;
        rdx &= r8;
        rax = *((r9 + rdx*8));
    } while (rax != 0);
label_3:
    rax = *(rdi);
    rdx = r8 + 1;
    rbx = rsi;
    rdi = rdx + rdx;
    rsi = rax * 3;
    if (rdi < rsi) {
        goto label_6;
    }
    rdx -= rax;
    if (rdx <= 3) {
        goto label_6;
    }
label_0:
    rax++;
    *(rbp) = rax;
    if (*(r10) == 0) {
        goto label_7;
    }
    do {
        rcx *= 5;
        rcx &= r8;
        r12 = rcx*8;
    } while (*((r9 + rcx*8)) != 0);
label_7:
    rax = .comment;
    if (rax == 0) {
        goto label_8;
    }
    rcx = *((rax + 0x20));
    if (rcx == 0) {
        goto label_9;
    }
    rdx = *(rcx);
    *((rax + 0x20)) = rdx;
    rdx = rcx;
    do {
        rdi = *((rax + 0x28));
        rsi = rdi - 0x60;
        *((rax + 0x28)) = rsi;
label_2:
        if (rsi <= 0x5f) {
            rsi = *((rax + 0x10));
            if (rax == *(0x0060f0d0)) {
                goto label_10;
            }
            rdi = *((rax + 0x18));
            *((rdi + 0x10)) = rsi;
            rsi = *((rax + 0x10));
            if (rsi != 0) {
                rdi = *((rax + 0x18));
                *((rsi + 0x18)) = rdi;
            }
label_1:
            xmm0 = 0;
            __asm ("movups xmmword [rax + 0x10], xmm0");
        }
        rax = rdx + 0x10;
        xmm0 = 0;
        *(0x006118f8) += 0x60;
        *((rcx + 8)) = 1;
        __asm ("movups xmmword [rdx + 0x10], xmm0");
        __asm ("movups xmmword [rax + 0x10], xmm0");
        __asm ("movups xmmword [rax + 0x20], xmm0");
        __asm ("movups xmmword [rax + 0x30], xmm0");
        __asm ("movups xmmword [rax + 0x40], xmm0");
        rcx = *((rbp + 0x10));
        *((rdx + 0x10)) = rcx;
        *((rax + 8)) = rbx;
        rdx = *((rbp + 0x18));
        *((rbp + 0x10)) = rax;
        *((rdx + r12)) = rax;
label_5:
        r12 = rbx;
        return rax;
label_6:
        rdi = rbp;
        cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ ();
        r8 = *((rbp + 8));
        rcx = rbx;
        r9 = *((rbp + 0x18));
        rax = *(rbp);
        rcx &= r8;
        r12 = rcx*8;
        r10 = r9 + r12;
        goto label_0;
label_9:
        rsi = *((rax + 0x30));
        rdx = rax + rsi + 0x38;
        rsi += 0x60;
        rcx = rdx;
        *((rax + 0x30)) = rsi;
    } while (1);
label_10:
    *(0x0060f0d0) = rsi;
    if (rsi == 0) {
        goto label_1;
    }
    *((rsi + 0x18)) = 0;
    goto label_1;
label_8:
    esi = 0x1000;
    edi = 0x60f060;
    rax = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
    __asm ("movdqa xmm0, xmmword [0x0040ab90]");
    *((rax + 0x20)) = 0;
    __asm ("movups xmmword [rax + 0x28], xmm0");
    xmm0 = 0;
    __asm ("movups xmmword [rax + 0x10], xmm0");
    *((rax + 8)) = 0x60;
    rdx = .comment;
    *((rax + 0x10)) = rdx;
    if (rdx != 0) {
        *((rdx + 0x18)) = rax;
    }
    rcx = rax + 0x38;
    *(0x0060f0d0) = rax;
    rsi = *((rax + 0x28));
    rdx = rcx;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4088f0 */
#include <stdint.h>
 
int64_t nimRegisterGlobalMarker (int64_t arg1) {
    rdi = arg1;
    rax = globalMarkersLen_hgEFy3UCOBoalBh29asu5MA;
    if (rax <= 0xdab) {
        *((rax*8 + obj.globalMarkers_5ghwSgpo9cT9bT7YStQDJHVQ)) = rdi;
        rax++;
        *(obj.globalMarkersLen_hgEFy3UCOBoalBh29asu5MA) = rax;
        return rax;
    }
    edi = TM_Q5wkpxktOdTGvlSRo9bzt9aw_23;
    echoBinSafe_constprop_24 ();
    return exit (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x404170 */
#include <stdint.h>
 
uint64_t unsureAsgnRef (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rbx = rdi;
    al = isOnStack_dJJW59cIgsBmT59aZrOM71Mg ();
    if (al == 0) {
        if (rsi != 0) {
            *((rsi - 0x10)) += 8;
        }
        rax = *(rbx);
        if (rax <= 0xfff) {
            goto label_0;
        }
        rcx = *((rax - 0x10));
        rsi = rax - 0x10;
        rdx = rcx - 8;
        *((rax - 0x10)) = rdx;
        if (rdx <= 7) {
            goto label_1;
        }
    }
label_0:
    *(rbx) = rbp;
    return rax;
label_1:
    edi = 0x60f010;
    addZCT_fCDI7oO1NNVXXURtxSzsRw ();
    *(rbx) = rbp;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407f50 */
#include <stdint.h>
 
uint64_t newObj (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    edx = gch_IcYaEuuWivYAS86vFMTS3Q;
    rbx = rsi;
    rax = rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
    memset (rax, 0, rbx);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4046d0 */
#include <stdint.h>
 
uint64_t initGC_njssp69aa7hvxte9bJ8uuDcg (void) {
    int64_t var_8h;
    xmm0 = 0;
    esi = 0x2030;
    edi = 0x60f060;
    __asm ("movups xmmword [0x00612350], xmm0");
    __asm ("movups xmmword [0x00612360], xmm0");
    __asm ("movups xmmword [0x00612370], xmm0");
    __asm ("movdqa xmm0, xmmword [0x0040ab70]");
    *(0x0060f018) = 0x400;
    __asm ("movups xmmword [0x0060f008], xmm0");
    rax = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
    rbx = rax + 0x20;
    if (*(0x00612108) == 0) {
        goto label_5;
    }
label_0:
    rcx = rbx + 0x2030;
    rdx = rbx;
    esi = 0x612108;
    edi = 0x60f060;
    add_Xuf47u3imOz8BOk5HURLWQ ();
    rdx = rbx + 0x10;
    rdi = rbx + 0x18;
    rax = *((rbp + 8));
    rdi &= 0xfffffffffffffff8;
    rcx = rdx;
    *(0x006118f8) += rax;
    eax = 0;
    rcx -= rdi;
    *((rbp + 0x28)) = 1;
    esi = 0x2030;
    __asm ("movdqa xmm1, xmmword [0x0040ab80]");
    ecx += 0x2000;
    *((rbx + 0x10)) = 0;
    *((rbx + 0x2008)) = 0;
    ecx >>= 3;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    edi = 0x60f060;
    *(0x0060f020) = rdx;
    __asm ("movups xmmword [0x0060f040], xmm1");
    rax = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
    rbx = rax + 0x20;
    if (*(0x00612108) == 0) {
        goto label_6;
    }
label_2:
    rcx = rbx + 0x2030;
    rdx = rbx;
    esi = 0x612108;
    edi = 0x60f060;
    add_Xuf47u3imOz8BOk5HURLWQ ();
    rdx = rbx + 0x10;
    rdi = rbx + 0x18;
    rax = *((rbp + 8));
    rdi &= 0xfffffffffffffff8;
    rcx = rdx;
    *(0x006118f8) += rax;
    eax = 0;
    rcx -= rdi;
    *((rbp + 0x28)) = 1;
    esi = 0x2030;
    __asm ("movdqa xmm2, xmmword [0x0040ab80]");
    ecx += 0x2000;
    *((rbx + 0x10)) = 0;
    *((rbx + 0x2008)) = 0;
    ecx >>= 3;
    *(rdi) = rax;
    rcx--;
    rdi += 8;
    edi = 0x60f060;
    *(0x0060f050) = rdx;
    __asm ("movups xmmword [0x0060f028], xmm2");
    rax = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
    rbx = rax + 0x20;
    if (*(0x00612108) == 0) {
        goto label_7;
    }
label_1:
    rcx = rbx + 0x2030;
    rdx = rbx;
    esi = 0x612108;
    edi = 0x60f060;
    add_Xuf47u3imOz8BOk5HURLWQ ();
    rdx = rbx + 0x10;
    rdi = rbx + 0x18;
    rax = *((rbp + 8));
    rdi &= 0xfffffffffffffff8;
    rcx = rdx;
    esi = 0x2030;
    *(0x006118f8) += rax;
    rcx -= rdi;
    eax = 0;
    *((rbp + 0x28)) = 1;
    ecx += 0x2000;
    *((rbx + 0x10)) = 0;
    *((rbx + 0x2008)) = 0;
    ecx >>= 3;
    *(rdi) = rax;
    rcx--;
    rdi += 8;
    edi = 0x60f060;
    *(0x0060f038) = rdx;
    rax = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
    rbx = rax + 0x20;
    if (*(0x00612108) == 0) {
        goto label_8;
    }
label_3:
    rcx = rbx + 0x2030;
    rdx = rbx;
    do {
        esi = 0x612108;
    } while (rcx != 0);
    edi = 0x60f060;
    add_Xuf47u3imOz8BOk5HURLWQ ();
    rdx = rbx + 0x10;
    rdi = rbx + 0x18;
    rax = *((rbp + 8));
    rdi &= 0xfffffffffffffff8;
    rcx = rdx;
    *(0x006118f8) += rax;
    eax = 0;
    rcx -= rdi;
    *((rbp + 0x28)) = 1;
    __asm ("movdqa xmm0, xmmword [0x0040ab60]");
    esi = 0x2030;
    ecx += 0x2000;
    *((rbx + 0x10)) = 0;
    __asm ("movdqa xmm3, xmmword [0x0040ab80]");
    *((rbx + 0x2008)) = 0;
    ecx >>= 3;
    *(rdi) = rax;
    rcx--;
    rdi += 8;
    edi = 0x60f060;
    *(0x006123a0) = rdx;
    __asm ("movups xmmword [0x00612388], xmm0");
    *(0x00612398) = 0;
    __asm ("movups xmmword [0x006123a8], xmm3");
    rax = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
    rbx = rax + 0x20;
    while (1) {
label_4:
        rcx = rbx + 0x2030;
        rdx = rbx;
        edi = 0x60f060;
        esi = 0x612108;
        add_Xuf47u3imOz8BOk5HURLWQ ();
        rdx = rbx + 0x10;
        rdi = rbx + 0x18;
        rax = *((rbp + 8));
        rdi &= 0xfffffffffffffff8;
        rcx = rdx;
        *(0x006118f8) += rax;
        eax = 0;
        rcx -= rdi;
        *((rbp + 0x28)) = 1;
        ecx += 0x2000;
        *((rbx + 0x10)) = 0;
        *((rbx + 0x2008)) = 0;
        ecx >>= 3;
        *(rdi) = rax;
        rcx--;
        rdi += 8;
        *(0x006123b8) = rdx;
        rax = gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg;
        rdx = rax + 1;
        *(0x006123c0) = rax;
        *(obj.gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg) = rdx;
        return rax;
label_5:
        if (*(0x00612138) == 0) {
            goto label_9;
        }
        *(0x00612108) = 0x612138;
        goto label_0;
label_7:
        if (*(0x00612138) == 0) {
            goto label_10;
        }
        *(0x00612108) = 0x612138;
        goto label_1;
label_6:
        if (*(0x00612138) == 0) {
            goto label_11;
        }
        *(0x00612108) = 0x612138;
        goto label_2;
        if (*(0x00612138) == 0) {
            goto label_12;
        }
        *(0x00612108) = 0x612138;
    }
label_8:
    if (*(0x00612138) != 0) {
        *(0x00612108) = 0x612138;
        goto label_3;
    }
    *((rsp + 8)) = 0x612138;
    xmm0 = *((rsp + 8));
    *(0x00612108) = 0x612138;
    __asm ("punpcklqdq xmm0, xmm0");
    __asm ("movups xmmword [0x00612138], xmm0");
    goto label_3;
label_11:
    *((rsp + 8)) = 0x612138;
    xmm0 = *((rsp + 8));
    *(0x00612108) = 0x612138;
    __asm ("punpcklqdq xmm0, xmm0");
    __asm ("movups xmmword [0x00612138], xmm0");
    goto label_2;
label_10:
    *((rsp + 8)) = 0x612138;
    xmm0 = *((rsp + 8));
    *(0x00612108) = 0x612138;
    __asm ("punpcklqdq xmm0, xmm0");
    __asm ("movups xmmword [0x00612138], xmm0");
    goto label_1;
label_9:
    *((rsp + 8)) = 0x612138;
    xmm0 = *((rsp + 8));
    *(0x00612108) = 0x612138;
    __asm ("punpcklqdq xmm0, xmm0");
    __asm ("movups xmmword [0x00612138], xmm0");
    goto label_0;
label_12:
    *((rsp + 8)) = 0x612138;
    xmm0 = *((rsp + 8));
    *(0x00612108) = 0x612138;
    __asm ("punpcklqdq xmm0, xmm0");
    __asm ("movups xmmword [0x00612138], xmm0");
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407560 */
#include <stdint.h>
 
uint64_t sweep_zoTIuavlrCHyw3B8MBaLJA_5 (int64_t arg1) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_830h;
    rdi = arg1;
    ecx = 0x100;
    r14 = rdi;
    rsi = r14 + 0x2908;
    *((rdi + 0x3128)) = 1;
    rdi = rsp + 0x30;
    rax = rsp + 0x30;
    do {
        *(rdi) = *(rsi);
        rcx--;
        rsi += 8;
        rdi += 8;
    } while (rcx != 0);
    *((rsp + 0x28)) = rax;
    rax = r14 + 0x60;
    *((rsp + 0x10)) = rax;
label_5:
    rax = *((rsp + 0x28));
    r12 = *(rax);
    r13 = *(rax);
    if (r12 == 0) {
        goto label_8;
    }
label_4:
    r12d = 0;
    r15 = r13;
    r13 = r12;
label_3:
    rbx = *((r15 + r13*8 + 0x10));
    rbp <<= 6;
    if (rbx == 0) {
        goto label_9;
    }
    *((rsp + 8)) = r13;
    while ((bl & 1) == 0) {
label_0:
        rbp++;
        rbx >>= 1;
        if (rbx == 0) {
            goto label_10;
        }
label_2:
    }
    rsi = *((r15 + 8));
    rsi <<= 9;
    rsi |= rbp;
    rdx = rsi;
    rdx >>= 9;
    eax = (int32_t) dl;
    rax = *((r14 + rax*8 + 0x2908));
    if (rax != 0) {
        goto label_11;
    }
    goto label_0;
label_1:
    rax = *(rax);
    if (rax == 0) {
        goto label_0;
    }
label_11:
    if (rdx != *((rax + 8))) {
        goto label_1;
    }
    rcx = rsi;
    edi = 1;
    ecx &= 0x1ff;
    rdx = rcx;
    rdi <<= cl;
    rdx >>= 6;
    if ((*((rax + rdx*8 + 0x10)) & rdi) == 0) {
        goto label_0;
    }
    rax = rsi;
    rax <<= 0xc;
    if ((*(rax) & 1) == 0) {
        goto label_0;
    }
    r8 = *((rax + 8));
    if (r8 <= 0xfc8) {
        goto label_12;
    }
    if (*((rax + 0x28)) <= 1) {
        goto label_0;
    }
    r12 = rax + 0x20;
    r8 = *((r14 + 0x3390));
    r9 = *((r14 + 0x33a0));
    rdi = r12;
    rdi >>= 0xc;
    rdx = rdi;
    rdx &= r8;
    rcx = *((r9 + rdx*8));
    if (rcx != 0) {
        goto label_13;
    }
    goto label_14;
    do {
        rdx *= 5;
        rdx &= r8;
        rcx = *((r9 + rdx*8));
        if (rcx == 0) {
            goto label_14;
        }
label_13:
    } while (rdi != *((rcx + 8)));
    if ((*((rcx + 0x10)) & 0x10) != 0) {
        goto label_0;
    }
label_14:
    rax = *((rax + 0x28));
    if (*((rax + 0x20)) != 0) {
        *(0x0060f058)++;
        rdi = r12 + 0x10;
        uint64_t (*rax + 0x20)() ();
        *(0x0060f058)--;
    }
    rdi = *((rsp + 0x10));
    rsi = r12;
    rbp++;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rbx >>= 1;
    if (rbx != 0) {
        goto label_2;
    }
label_10:
    r13 = *((rsp + 8));
label_9:
    r13++;
    if (r13 != 8) {
        goto label_3;
    }
    r13 = *(r15);
    if (r13 != 0) {
        goto label_4;
    }
label_8:
    rax = *((rsp + 0x28));
    rdi = rsp + 0x830;
    if (rdi != rax) {
        goto label_5;
    }
    *((r14 + 0x3128)) = 0;
    return rax;
label_12:
    r13 = *((rax + 0x30));
    rsi = rax + 0x38;
    r13 += rsi;
    if (rsi >= r13) {
        goto label_0;
    }
    *((rsp + 0x18)) = rbx;
    r12 = r8;
    rbx = rsi;
    *((rsp + 0x20)) = rbp;
    r14 = rsi;
label_6:
    if (*((rbx + 8)) <= 1) {
        goto label_7;
    }
    rcx = r14;
    r9 = *((rbp + 0x3390));
    rdi = *((rbp + 0x33a0));
    rcx >>= 0xc;
    rax = rcx;
    rax &= r9;
    rdx = *((rdi + rax*8));
    if (rdx != 0) {
        goto label_15;
    }
    goto label_16;
    do {
        rax *= 5;
        rax &= r9;
        rdx = *((rdi + rax*8));
        if (rdx == 0) {
            goto label_16;
        }
label_15:
    } while (rcx != *((rdx + 8)));
    rcx = r14;
    edi = 1;
    rcx >>= 3;
    ecx &= 0x1ff;
    rax = rcx;
    rdi <<= cl;
    rax >>= 6;
    if ((*((rdx + rax*8 + 0x10)) & rdi) == 0) {
        goto label_16;
    }
label_7:
    r14 += r12;
    rbx = r14;
    if (r14 < r13) {
        goto label_6;
    }
    r14 = rbp;
    rbx = *((rsp + 0x18));
    rbp = *((rsp + 0x20));
    goto label_0;
label_16:
    rax = *((rbx + 8));
    if (*((rax + 0x20)) != 0) {
        *(0x0060f058)++;
        rdi = r14 + 0x10;
        uint64_t (*rax + 0x20)() ();
        *(0x0060f058)--;
    }
    rdi = *((rsp + 0x10));
    rsi = rbx;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    goto label_7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407a20 */
#include <stdint.h>
 
int64_t unmarkStackAndRegisters_zoTIuavlrCHyw3B8MBaLJA_6 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rax = *((rdi + 0x28));
    rbx = *((rdi + 0x38));
    rbp = rbx + rax*8;
    if (rax <= 0) {
        goto label_0;
    }
    do {
        rsi = *(rbx);
        rax = *(rsi);
        rax -= 8;
        *(rsi) = rax;
        if (rax <= 7) {
            edi = 0x60f010;
            addZCT_fCDI7oO1NNVXXURtxSzsRw ();
        }
        rbx += 8;
    } while (rbp != rbx);
label_0:
    *((r12 + 0x28)) = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x402080 */
#include <stdint.h>
 
uint64_t getBottom_QXg9anCfFuhk3avAkOOKNhQ (uint32_t arg1) {
    rdi = arg1;
    rax = rdi + 0x30d8;
    if (*((rdi + 0x30d8)) != 0) {
        return rax;
    }
    *((rsp - 0x10)) = rax;
    xmm0 = *((rsp - 0x10));
    __asm ("punpcklqdq xmm0, xmm0");
    __asm ("movups xmmword [rdi + 0x30d8], xmm0");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x406590 */
#include <stdint.h>
 
int64_t interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA (uint32_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rax = rsi;
    rax >>= 0x15;
    edx = (int32_t) al;
    rdx = *((rdi + rdx*8 + 0x28a8));
    if (rdx != 0) {
        goto label_2;
    }
    goto label_3;
    do {
        rdx = *(rdx);
        if (rdx == 0) {
            goto label_3;
        }
label_2:
    } while (rax != *((rdx + 8)));
    rcx = rsi;
    eax = 1;
    rcx >>= 0xc;
    ecx &= 0x1ff;
    r8 = rcx;
    rax <<= cl;
    r8 >>= 6;
    if ((*((rdx + r8*8 + 0x10)) & rax) != 0) {
        rcx = rsi;
        eax = 0;
        rcx &= 0xfffffffffffff000;
        if ((*(rcx) & 1) == 0) {
            goto label_0;
        }
        rdi = *((rcx + 8));
        if (rdi <= 0xfc8) {
            goto label_4;
        }
        rax = rcx + 0x20;
        if (rsi < rax) {
            goto label_5;
        }
        edx = 0;
        if (*((rcx + 0x28)) <= 1) {
            rax = rdx;
        }
        return rax;
    }
label_3:
    eax = 0;
    while (rsi > *((rdi + 8))) {
label_0:
        return rax;
    }
    rdx = *((rdi + 0x30a8));
    if (*(rdx) != rdx) {
        goto label_6;
    }
    goto label_0;
    do {
label_1:
        al = (rsi > rax) ? 1 : 0;
        eax = (int32_t) al;
        rdx = *((rdx + rax*8));
        if (*(rdx) == rdx) {
            goto label_5;
        }
label_6:
        rax = *((rdx + 0x10));
    } while (rsi < rax);
    if (rsi >= *((rdx + 0x18))) {
        goto label_1;
    }
    edx = 0;
    if (*((rax + 8)) <= 1) {
        rax = rdx;
    }
    return rax;
label_5:
    eax = 0;
    return rax;
label_4:
    esi &= 0xfff;
    rsi -= 0x38;
    if (rsi >= *((rcx + 0x30))) {
        goto label_0;
    }
    rax = rsi;
    edx = 0;
    rcx = rcx + rsi + 0x38;
    rax = rdx:rax / rdi;
    rdx = rdx:rax % rdi;
    rax = rcx;
    rax -= rdx;
    edx = 0;
    if (*((rax + 8)) <= 1) {
        rax = rdx;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4064c0 */
#include <stdint.h>
 
void stackSize_IV9bgfYkinlae0WZ2NZi5JA (void) {
    edi = gch_IcYaEuuWivYAS86vFMTS3Q;
    return stackSize_61foY5fGmU9c2fC9c6wRIsrA ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4010f0 */
#include <stdint.h>
 
int64_t llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ (signed int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r12 = rsi;
    rbx = *((rdi + 0x2878));
    if (rbx == 0) {
        goto label_0;
    }
    rax = *(rbx);
    while (1) {
        rax -= r12;
        rcx = *((rbx + 8));
        *(rbx) = rax;
        rax = *((rbp + 0x2878));
        rcx += rbx;
        *((rax + 8)) += r12;
        memset (rcx, 0, r12);
        return rax;
label_0:
        rax = mmap (0, 0x1000, 3, 0x22, 0xffffffff, 0);
        rdx = rax - 1;
        if (rdx > 0xfffffffffffffffd) {
            goto label_1;
        }
        *((rbp + 0x2878)) = rax;
        *((rbp + 0x2880)) += 0x1000;
        *(rax) = 0xfe8;
        rax = *((rbp + 0x2878));
        *((rax + 8)) = 0x18;
        rax = *((rbp + 0x2878));
        *((rax + 0x10)) = rbx;
        rbx = *((rbp + 0x2878));
        rax = *(rbx);
    }
label_1:
    return raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x409ff0 */
#include <stdint.h>
 
void libc_csu_init (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15d = edi;
    r12 = obj___frame_dummy_init_array_entry;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    r14 = rsi;
    r13 = rdx;
    rbp -= r12;
    rbp >>= 3;
    _init ();
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r13;
        rsi = r14;
        edi = r15d;
        uint64_t (*r12 + rbx*8)() ();
        rbx++;
    } while (rbp != rbx);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407ed0 */
#include <stdint.h>
 
uint64_t cstrToNimstr (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    r12d = 0;
    if (rdi == 0) {
        goto label_0;
    }
    rbx = rdi;
    rax = strlen (rdi);
    esi = 0x18;
    *(rsp) = 7;
    while (1) {
        edx = gch_IcYaEuuWivYAS86vFMTS3Q;
        edi = strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
        rax = rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
        *((rsp + 8)) = rbp;
        xmm0 = *((rsp + 8));
        r12 = rax;
        __asm ("movhps xmm0, qword [rsp]");
        __asm ("movups xmmword [rax], xmm0");
        memcpy (rax + 0x10, rbx, rbp + 1);
label_0:
        rax = r12;
        return rax;
        rsi = rax + 0x11;
        *(rsp) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400bf0 */
#include <stdint.h>
 
int64_t NimMain (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_8h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    systemDatInit000 ();
    rdi = rsp + 8;
    *((rsp + 8)) = sym.PreMainInner;
    nimGC_setStackBottom ();
    rax = *((rsp + 8));
    void (*rax)() ();
    rdi = rsp;
    *(rsp) = sym.NimMainInner;
    nimGC_setStackBottom ();
    rax = *(rsp);
    void (*rax)() ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x401780 */
#include <stdint.h>
 
int64_t addChunkToMatrix_v9bekLOkesgfrZC4aumfLXw (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rax = *((rsi + 8));
    ecx = eax;
    if (eax <= 0xffff) {
        goto label_1;
    }
    if (eax > 0xffffff) {
        goto label_2;
    }
    ecx >>= 0x10;
    edx = 0x10;
    do {
label_0:
        rcx = *((rcx + obj.fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ));
        *((rsi + 0x18)) = 0;
        rdx += rcx;
        ecx = rdx - 5;
        r8 = rdx - 6;
        rax >>= cl;
        rcx = rax - 0x20;
        rax = r8;
        rax <<= 5;
        rax += rcx;
        r9 = rdi + rax*8;
        rax = *((r9 + 0x1078));
        *((rsi + 0x10)) = rax;
        if (rax != 0) {
            *((rax + 0x18)) = rsi;
        }
        eax = 1;
        *((r9 + 0x1078)) = rsi;
        ecx &= 0x1f;
        rsi = rax;
        rsi <<= cl;
        ecx = r8d;
        *((rdi + rdx*4 + 0xffc)) |= esi;
        ecx &= 0x1f;
        rax <<= cl;
        *((rdi + 0x1010)) |= eax;
        return rax;
label_2:
        ecx = eax;
        edx = 0x18;
        ecx >>= 0x18;
    } while (1);
label_1:
    edx = 0;
    if (eax <= 0xff) {
        goto label_0;
    }
    ecx = eax;
    edx = 8;
    ecx >>= 8;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407be0 */
#include <stdint.h>
 
uint64_t collectCT_zoTIuavlrCHyw3B8MBaLJA (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    rax = stackSize_IV9bgfYkinlae0WZ2NZi5JA ();
    rdx = rax;
    rdx >>= 7;
    eax = 0x1f4;
    if (rax <= 0xf9ff) {
        rdx = rax;
    }
    if (*((rcx + 0x10)) >= rdx) {
        goto label_0;
    }
    rax = *((rcx + 0x28f8));
    while (*((rcx + 0x58)) != 0) {
        return rax;
label_0:
    }
    rdi = rcx;
    return collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x404570 */
#include <stdint.h>
 
uint64_t init_E1QNZGuo0DGFXyt4Y3MfqA (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rbx = rsi*8;
    *((rdi + 8)) = rsi;
    rsi = rbx + 0x10;
    *(rdi) = 0;
    edi = 0x60f060;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    *((rax + 8)) = 1;
    rcx = rax + 0x10;
    rax = memset (rcx, 0, rbx);
    *((rbp + 0x10)) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x404230 */
#include <stdint.h>
 
int64_t selectBranch_yDNUA0V9a9a9bVLtZ9bXPT0aEg (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rax = *((rsi + 0x10));
    rax = *(rax);
    if (rax == 2) {
        goto label_1;
    }
    if (rax == 4) {
        goto label_2;
    }
    edx = 0;
    if (rax == 1) {
        goto label_3;
    }
    do {
label_0:
        rcx = *((rsi + 0x20));
        rsi = *((rsi + 0x28));
        if (rcx > rdx) {
            rax = *((rsi + rdx*8));
            if (rax == 0) {
                goto label_4;
            }
            return rax;
        }
label_4:
        rax = *((rsi + rcx*8));
        return rax;
label_1:
        rax = *((rsi + 8));
        edx = *((rdi + rax));
    } while (1);
label_3:
    rax = *((rsi + 8));
    edx = *((rdi + rax));
    goto label_0;
label_2:
    rax = *((rsi + 8));
    rdx = *((rdi + rax));
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4021a0 */
#include <stdint.h>
 
int64_t add_Xuf47u3imOz8BOk5HURLWQ (int64_t arg4, int64_t arg3, uint32_t arg2, int64_t arg1) {
    int64_t var_8h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
label_1:
    rbx = rsi;
    rsi = *(rsi);
    rax = *(rsi);
    if (rsi == rax) {
        goto label_4;
    }
    if (*((rsi + 0x10)) > rdx) {
        goto label_5;
    }
    if (*((rsi + 0x10)) != rdx) {
        goto label_6;
    }
    rdx = *((rsi + 0x20));
    if (*((rax + 0x20)) == rdx) {
        goto label_3;
    }
label_2:
    rax = *((rsi + 8));
    rcx = *((rax + 8));
    while (*((rcx + 0x20)) != rdx) {
        return rax;
label_0:
        *(rbx) = rax;
        rax = *(rax);
        *((rsi + 8)) = rax;
        rax = *(rbx);
        *(rax) = rsi;
        rax = *(rbx);
        *((rax + 0x20))++;
        return rax;
label_3:
        *(rbx) = rax;
        rax = *((rax + 8));
        *(rsi) = rax;
        rax = *(rbx);
        *((rax + 8)) = rsi;
        rsi = *(rbx);
        rax = *((rsi + 8));
        rdx = *((rsi + 0x20));
        rcx = *((rax + 8));
    }
    goto label_0;
label_6:
    rsi += 8;
label_5:
    rdi = rbp;
    add_Xuf47u3imOz8BOk5HURLWQ ();
    goto label_1;
    rsi = *(rbx);
    rax = *(rsi);
    rdx = *((rsi + 0x20));
    if (*((rax + 0x20)) != rdx) {
        goto label_2;
    }
    goto label_3;
label_4:
    rax = *((rdi + 0x30c0));
    if (rax == 0) {
        goto label_7;
    }
    rsi = *(rax);
    *((rdi + 0x30c0)) = rsi;
    do {
        *(rsp) = rdx;
        xmm0 = *(rsp);
        rdi = rbp + 0x30d8;
        *(rsp) = rcx;
        __asm ("movhps xmm0, qword [rsp]");
        *(rsp) = rdi;
        __asm ("movups xmmword [rax + 0x10], xmm0");
        xmm0 = *(rsp);
        __asm ("punpcklqdq xmm0, xmm0");
        if (*((rbp + 0x30d8)) == 0) {
            __asm ("movups xmmword [rbp + 0x30d8], xmm0");
        }
        __asm ("movups xmmword [rax], xmm0");
        *((rax + 0x20)) = 1;
        *(rbx) = rax;
        return rax;
label_7:
        esi = 0x28;
        *((rsp + 8)) = rcx;
        *(rsp) = rdx;
        llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ ();
        rdx = *(rsp);
        rcx = *((rsp + 8));
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x401660 */
#include <stdint.h>
 
uint64_t splitChunk2_UxUTh1oy39boKK4NPJIGnLQ (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    xmm0 = 0;
    rbx = rdx + rsi;
    r8 = *((rsi + 8));
    __asm ("movups xmmword [rbx + 0x10], xmm0");
    *(rbx) = rdx;
    r8 -= rdx;
    *((rbx + 8)) = r8;
    r9 = *((rsi + 8));
    r9 += rsi;
    rcx = r9;
    rcx >>= 0x15;
    eax = (int32_t) cl;
    rax = *((rdi + rax*8 + 0x28a8));
    if (rax != 0) {
        goto label_0;
    }
    goto label_1;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_1;
        }
label_0:
    } while (rcx != *((rax + 8)));
    rcx = r9;
    r10d = 1;
    rcx >>= 0xc;
    ecx &= 0x1ff;
    r11 = rcx;
    r10 <<= cl;
    r11 >>= 6;
    if ((*((rax + r11*8 + 0x10)) & r10) != 0) {
        rax = *(r9);
        eax &= 1;
        r8 |= rax;
        *(r9) = r8;
    }
label_1:
    r12 = rbx;
    *((rsi + 8)) = rdx;
    r12 >>= 0x15;
    rbp >>= 0xc;
    eax = (int32_t) r12b;
    r13 = rdi + rax*8;
    rax = *((r13 + 0x28a8));
    if (rax != 0) {
        goto label_2;
    }
    goto label_3;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_3;
        }
label_2:
    } while (r12 != *((rax + 8)));
    do {
        rcx = rbp;
        edx = 1;
        ecx &= 0x1ff;
        rsi = rcx;
        rdx <<= cl;
        rsi >>= 6;
        *((rax + rsi*8 + 0x10)) |= rdx;
        rax = rbx;
        return rax;
label_3:
        esi = 0x50;
        llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ ();
        rdx = *((r13 + 0x28a8));
        *(rax) = rdx;
        *((r13 + 0x28a8)) = rax;
        *((rax + 8)) = r12;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x404bf0 */
#include <stdint.h>
 
uint64_t cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ (int64_t arg1) {
    rdi = arg1;
    r13 = *((rdi + 8));
    r12 = r13 + 1;
    rax = r12 + r12 - 1;
    r14 = r12;
    *((rdi + 8)) = rax;
    r14 <<= 4;
    edi = 0x60f060;
    rsi = r14 + 0x10;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    *((rax + 8)) = 1;
    rbx = rax + 0x10;
    rax = memset (rbx, 0, r14);
    rsi = *((rbp + 0x18));
    edi = 0;
    if (r13 < 0) {
        goto label_1;
    }
label_0:
    r8 = *((rsi + rdi*8));
    if (r8 == 0) {
        goto label_2;
    }
    rcx = *((rbp + 8));
    rax = *((r8 + 8));
    rax &= rcx;
    rdx = rbx + rax*8;
    if (*(rdx) == 0) {
        goto label_3;
    }
    do {
        rax *= 5;
        rax &= rcx;
        rdx = rbx + rax*8;
    } while (*(rdx) != 0);
label_3:
    *(rdx) = r8;
    rsi = *((rbp + 0x18));
label_2:
    rdi++;
    if (rdi != r12) {
        goto label_0;
    }
label_1:
    rsi -= 0x10;
    edi = 0x60f060;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    *((rbp + 0x18)) = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400a90 */
#include <stdint.h>
 
int32_t main (char ** envp, char ** argv, int32_t argc) {
    rdx = envp;
    rsi = argv;
    rdi = argc;
    /* [12] -r-x section size 38354 named .text */
    *(obj.cmdLine) = rsi;
    *(obj.cmdCount) = edi;
    *(obj.gEnv) = rdx;
    NimMain ();
    eax = nim_program_result;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4041e0 */
#include <stdint.h>
 
int64_t getDiscriminant_MBlSP9aCmxWSBuDOxawp8Sg (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rax = *((rsi + 0x10));
    rdx = *(rax);
    if (rdx != 2) {
        if (rdx != 4) {
            eax = 0;
            if (rdx != 1) {
                return rax;
            }
            rax = *((rsi + 8));
            eax = *((rdi + rax));
            return rax;
        }
        rax = *((rsi + 8));
        rax = *((rdi + rax));
        return rax;
    }
    rax = *((rsi + 8));
    eax = *((rdi + rax));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407850 */
#include <stdint.h>
 
int64_t collectCycles_zoTIuavlrCHyw3B8MBaLJA_3 (signed int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    rbx = rdi;
    if (*((rdi + 0x10)) <= 0) {
        goto label_1;
    }
    do {
        rdi = rbx;
        collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw ();
    } while (*((rbx + 0x10)) > 0);
label_1:
    rsi = *((rbx + 0x3398));
    if (rsi == 0) {
        goto label_2;
    }
    do {
        rbp = *(rsi);
        edi = 0x60f060;
        rsi -= 0x10;
        rawDealloc_DA62HrGC5sdfCED505KyyQ ();
        rsi = rbp;
    } while (rbp != 0);
label_2:
    rax = *((rbx + 0x33a0));
    edi = 0x60f060;
    *((rbx + 0x3398)) = 0;
    rsi = rax - 0x10;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    esi = 0x2030;
    edi = 0x60f060;
    *((rbx + 0x33a0)) = 0;
    *((rbx + 0x3388)) = 0;
    rax = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
    r12 = rax;
    rbp = rax + 0x20;
    if (*(0x00612108) == 0) {
        goto label_3;
    }
label_0:
    rcx = rbp + 0x2030;
    rdx = rbp;
    edi = 0x60f060;
    esi = 0x612108;
    add_Xuf47u3imOz8BOk5HURLWQ ();
    rdx = rbp + 0x10;
    rdi = rbp + 0x18;
    rax = *((r12 + 8));
    rdi &= 0xfffffffffffffff8;
    rcx = rdx;
    *(0x006118f8) += rax;
    eax = 0;
    rcx -= rdi;
    __asm ("movdqa xmm0, xmmword [0x0040ab60]");
    *((r12 + 0x28)) = 1;
    ecx += 0x2000;
    *((rbp + 0x10)) = 0;
    *((rbp + 0x2008)) = 0;
    ecx >>= 3;
    *(rdi) = rax;
    rcx--;
    rdi += 8;
    *((rbx + 0x33a0)) = rdx;
    __asm ("movups xmmword [rbx + 0x3388], xmm0");
    rbp = *((rbx + 0x38));
    rax = *((rbx + 0x28));
    *((rbx + 0x3398)) = 0;
    r12 = rbp + rax*8;
    if (rax <= 0) {
        goto label_4;
    }
    do {
        rsi = *(rbp);
        rdi = rbx;
        rbp += 8;
        markS_NZr5o3Ubzrci4OmK29cHBJA ();
    } while (r12 != rbp);
label_4:
    rdi = rbx;
    markGlobals_zoTIuavlrCHyw3B8MBaLJA_4 ();
    rdi = rbx;
    do {
        void (*0x407560)() ();
    } while (rcx != 0);
label_3:
    if (*(0x00612138) != 0) {
        *(0x00612108) = 0x612138;
        goto label_0;
    }
    *((rsp + 8)) = 0x612138;
    xmm0 = *((rsp + 8));
    *(0x00612108) = 0x612138;
    __asm ("punpcklqdq xmm0, xmm0");
    __asm ("movups xmmword [0x00612138], xmm0");
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x401240 */
#include <stdint.h>
 
uint64_t intSetGet_FhOZKj4Gih3qQ5OimZYOrg (uint32_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = (int32_t) sil;
    rax = *((rdi + rax*8));
    if (rax == 0) {
        goto label_0;
    }
    if (rsi != *((rax + 8))) {
        goto label_1;
    }
    goto label_2;
    do {
        if (*((rax + 8)) == rsi) {
            goto label_0;
        }
label_1:
        rax = *(rax);
    } while (rax != 0);
label_0:
    return rax;
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400c30 */
#include <stdint.h>
 
uint64_t NimMainModule (void) {
    int64_t var_8h;
    int64_t var_10h;
    edi = TM_2lQWYPc4hWuvSK7bVeWxSA_4;
    nimRegisterGlobalMarker ();
    esi = 1;
    edi = TM_2lQWYPc4hWuvSK7bVeWxSA_2;
    echoBinSafe ();
    rdi = stdin;
    rax = readLine_fPRnXwDTqtynUYGl4OixAg ();
    rbx = rax;
    if (rax != 0) {
        *((rax - 0x10)) += 8;
    }
    rax = name_6AZmjR50AehluhCwumgXmw;
    if (rax == 0) {
        goto label_0;
    }
    rcx = *((rax - 0x10));
    rsi = rax - 0x10;
    rdx = rcx - 8;
    *((rax - 0x10)) = rdx;
    while (1) {
label_0:
        xmm0 = 0;
        edi = TM_2lQWYPc4hWuvSK7bVeWxSA_5;
        *(obj.name_6AZmjR50AehluhCwumgXmw) = rbx;
        *(rsp) = xmm0;
        *((rsp + 0x10)) = 0;
        rax = copyString ();
        rdi = name_6AZmjR50AehluhCwumgXmw;
        *(rsp) = rax;
        rax = copyString ();
        edi = TM_2lQWYPc4hWuvSK7bVeWxSA_6;
        *((rsp + 8)) = rax;
        rax = copyString ();
        rdi = rsp;
        esi = 3;
        *((rsp + 0x10)) = rax;
        echoBinSafe ();
        return rax;
        edi = 0x60f010;
        addZCT_fCDI7oO1NNVXXURtxSzsRw ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4072c0 */
#include <stdint.h>
 
int64_t cellsetReset_WHgd5C59bkXWDz3vnAxfzXQ_2 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    rsi = *((rdi + 0x10));
    if (rsi == 0) {
        goto label_1;
    }
    do {
        rbx = *(rsi);
        edi = 0x60f060;
        rsi -= 0x10;
        rawDealloc_DA62HrGC5sdfCED505KyyQ ();
        rsi = rbx;
    } while (rbx != 0);
label_1:
    rax = *((rbp + 0x18));
    *((rbp + 0x10)) = 0;
    edi = 0x60f060;
    rsi = rax - 0x10;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    esi = 0x2030;
    edi = 0x60f060;
    *((rbp + 0x18)) = 0;
    *(rbp) = 0;
    rax = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g ();
    r12 = rax;
    rbx = rax + 0x20;
    while (1) {
label_0:
        rcx = rbx + 0x2030;
        rdx = rbx;
        edi = 0x60f060;
        esi = 0x612108;
        add_Xuf47u3imOz8BOk5HURLWQ ();
        rdx = rbx + 0x10;
        rdi = rbx + 0x18;
        rax = *((r12 + 8));
        rdi &= 0xfffffffffffffff8;
        rcx = rdx;
        *(0x006118f8) += rax;
        __asm ("movdqa xmm0, xmmword [0x0040ab60]");
        *((r12 + 0x28)) = 1;
        rcx -= rdi;
        eax = 0;
        ecx += 0x2000;
        *((rbx + 0x10)) = 0;
        *((rbx + 0x2008)) = 0;
        ecx >>= 3;
        *(rdi) = rax;
        rcx--;
        rdi += 8;
        *((rbp + 0x18)) = rdx;
        __asm ("movups xmmword [rbp], xmm0");
        *((rbp + 0x10)) = 0;
        return rax;
        if (*(0x00612138) == 0) {
            goto label_2;
        }
        *(0x00612108) = 0x612138;
    }
label_2:
    *((rsp + 8)) = 0x612138;
    xmm0 = *((rsp + 8));
    *(0x00612108) = 0x612138;
    do {
        __asm ("punpcklqdq xmm0, xmm0");
    } while (rcx != 0);
    __asm ("movups xmmword [0x00612138], xmm0");
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400ba0 */
#include <stdint.h>
 
void PreMainInner (void) {
    int64_t var_8h;
    return systemInit000 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408f40 */
#include <stdint.h>
 
int64_t systemInit000 (void) {
    int64_t var_8h;
    rax = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
    if (rax <= 0xdab) {
        esi = NTI_TuG1vdYwChKtx4TOkRnAjw_;
        edi = strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
        *((rax*8 + obj.threadLocalMarkers_pC47Nqd8F629cuTchphM5YA)) = 0x405800;
        rax++;
        *(obj.threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw) = rax;
        *(obj.nimvm_IAxmsqnME4Jmed24hOgrFQ) = 0;
        genericReset ();
        eax = 0x21c;
        *((rsp + 8)) = 0;
        *(0x006126a8) = ax;
        rax = rsp + 8;
        *((rsp + 8)) = rax;
        rdi = *((rsp + 8));
        *(obj.strDesc_D0UzA4zsDu5tgpJQ9a9clXPg) = 8;
        nimGC_setStackBottom ();
        initGC_njssp69aa7hvxte9bJ8uuDcg ();
        esi = signalHandler;
        signal (2);
        esi = signalHandler;
        signal (0xb);
        esi = signalHandler;
        signal (6);
        esi = signalHandler;
        signal (8);
        esi = signalHandler;
        signal (4);
        esi = signalHandler;
        signal (0xb);
        esi = signalHandler;
        signal (0xd);
        return rax;
    }
    return nimRegisterThreadLocalMarker_part_14 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4087f0 */
#include <stdint.h>
 
int32_t signalHandler (int64_t arg1) {
    rdi = arg1;
    eax = edi;
    edi = 0x40aae0;
    if (eax == 2) {
        goto label_0;
    }
    if (eax == 0xb) {
        goto label_1;
    }
    if (eax == 6) {
        goto label_2;
    }
    if (eax == 8) {
        goto label_3;
    }
    if (eax == 4) {
        goto label_4;
    }
    edi = "unknown signal\n";
    eax = "SIGPIPE: Pipe closed.\n";
    if (eax == 0xd) {
        rdi = rax;
    }
    do {
label_0:
        showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ ();
        exit (1);
label_1:
        edi = "SIGSEGV: Illegal storage access. (Attempt to read from nil?)\n";
    } while (1);
label_3:
    edi = "SIGFPE: Arithmetic error.\n";
    goto label_0;
label_2:
    edi = "SIGABRT: Abnormal termination.\n";
    goto label_0;
label_4:
    edi = "SIGILL: Illegal operation.\n";
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x406530 */
#include <stdint.h>
 
void setPosition_kuKlONPws1O0vpPB9adzcQw (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x404510 */
#include <stdint.h>
 
void alloc0_1iQ1Xo9cXsxq509b5gmDHLoQ_2 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rbx = rsi;
    rsi = rsi + 0x10;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    *((rax + 8)) = 1;
    rcx = rax + 0x10;
    memset (rcx, 0, rbx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4011b0 */
#include <stdint.h>
 
uint64_t addHeapLink_fJbggoVEhxEYh2HdNULF3Q (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = rdi + 0x3100;
    while (rax != 0) {
        if (*(rax) <= 0x1d) {
            goto label_0;
        }
        rax = *((rax + 0x1e8));
    }
    r12 = rsi;
    esi = 0x1f0;
    rbx = rdi;
    rax = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ ();
    rdx = *((rbx + 0x32e8));
    *((rax + 0x1e8)) = rdx;
    *((rbx + 0x32e8)) = rax;
    *((rax + 8)) = r12;
    *((rax + 0x10)) = rbp;
    *(rax) = 1;
    return rax;
label_0:
    rcx = *(rax);
    rdi = *(rax);
    rcx++;
    rdi <<= 4;
    rdi += rax;
    *((rdi + 8)) = rsi;
    *((rdi + 0x10)) = rdx;
    *(rax) = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400d10 */
#include <stdint.h>
 
void sourceDatInit000 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4070d0 */
#include <stdint.h>
 
int64_t prepareDealloc_0Ao1u9cpV0dTuUB5G9cEQ8eQ (int64_t arg1) {
    rdi = arg1;
    rax = *((rdi + 8));
    if (*((rax + 0x20)) != 0) {
        rdi += 0x10;
        *(0x0060f058)++;
        uint64_t (*rax + 0x20)() ();
        *(0x0060f058)--;
        return rax;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4043b0 */
#include <stdint.h>
 
uint64_t genericResetAux_ruA1rosalqf8AhzZPPTBQg (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
label_0:
    r12 = rdi;
    rbx = rsi;
    eax = *(rsi);
    if (al == 2) {
        goto label_4;
    }
    if (al == 3) {
        goto label_5;
    }
    if (al == 1) {
        goto label_6;
    }
    do {
label_1:
        return eax;
label_4:
        r13 = *((rsi + 0x20));
        ebp = 0;
    } while (r13 <= 0);
    do {
        rax = *((rbx + 0x28));
        rdi = r12;
        rsi = *((rax + rbp*8));
        rbp++;
        genericResetAux_ruA1rosalqf8AhzZPPTBQg ();
        goto label_0;
    } while (r13 != rbp);
    goto label_1;
label_6:
    rdi = *((rbx + 8));
    rsi = *((rsi + 0x10));
    rdi += r12;
    void (*0x4042a0)() ();
label_5:
    rax = *((rsi + 0x10));
    rdx = *(rax);
    if (rdx == 2) {
        goto label_7;
    }
    if (rdx == 4) {
        goto label_8;
    }
    eax = 0;
    if (rdx == 1) {
        goto label_9;
    }
label_3:
    rcx = *((rbx + 0x20));
    rdi = *((rbx + 0x28));
    if (rcx > rax) {
        goto label_10;
    }
label_2:
    rsi = *((rdi + rcx*8));
    while (rsi != 0) {
        rdi = r12;
        genericResetAux_ruA1rosalqf8AhzZPPTBQg ();
        goto label_0;
        rax = *((rbx + 0x10));
        rdx = *(rax);
        rdi = *((rbx + 8));
        esi = 0;
        rdi += r12;
        void (*0x4009c0)() ();
label_10:
        rsi = *((rdi + rax*8));
    }
    goto label_2;
label_9:
    rax = *((rsi + 8));
    eax = *((rax + rdi));
    goto label_3;
label_8:
    rax = *((rsi + 8));
    rax = *((rdi + rax));
    goto label_3;
label_7:
    rax = *((rsi + 8));
    eax = *((rax + rdi));
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407f70 */
#include <stdint.h>
 
uint64_t newObjRC1 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rbx = rsi;
    rax = stackSize_IV9bgfYkinlae0WZ2NZi5JA ();
    rdx = rax;
    rdx >>= 7;
    eax = 0x1f4;
    if (rax <= 0xf9ff) {
        rdx = rax;
    }
    if (*(0x0060f010) >= rdx) {
        goto label_1;
    }
    rax = .comment;
    while (*(0x0060f058) != 0) {
label_0:
        rsi = rbx + 0x10;
        edi = 0x60f060;
        rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
        *((rax + 8)) = rbp;
        rcx = rax + 0x10;
        *(rax) = 8;
        memset (rcx, 0, rbx);
        return rax;
label_1:
    }
    edi = gch_IcYaEuuWivYAS86vFMTS3Q;
    collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x406550 */
#include <stdint.h>
 
int64_t inRange_Bc4Ua6HOMCIDGx9b15HSY4g (uint32_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    if (rdi == *(rdi)) {
        goto label_1;
    }
    rax = rdi;
    while (rdx > rsi) {
label_0:
        dl = (rdx < rsi) ? 1 : 0;
        edx = (int32_t) dl;
        rax = *((rax + rdx*8));
        if (*(rax) == rax) {
            goto label_1;
        }
        rdx = *((rax + 0x10));
    }
    if (*((rax + 0x18)) <= rsi) {
        goto label_0;
    }
    return rax;
label_1:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x401f90 */
#include <stdint.h>
 
uint64_t getHugeChunk_z9bCNjXTYllZ3pI24nEsw2g_3 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r12 = rdi;
    rax = mmap (0, rsi, 3, 0x22, 0xffffffff, 0);
    rbx = rax;
    rax--;
    if (rax > 0xfffffffffffffffd) {
        goto label_0;
    }
    r13 = rbx;
    xmm0 = 0;
    *((r12 + 0x2880)) += rbp;
    r13 >>= 0x15;
    *((rbx + 8)) = rbp;
    eax = (int32_t) r13b;
    __asm ("movups xmmword [rbx + 0x10], xmm0");
    rbp >>= 0xc;
    r14 = r12 + rax*8;
    *(rbx) = 1;
    rax = *((r14 + 0x28a8));
    if (rax != 0) {
        goto label_1;
    }
    goto label_2;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_2;
        }
label_1:
    } while (r13 != *((rax + 8)));
    do {
        rcx = rbp;
        edx = 1;
        ecx &= 0x1ff;
        rsi = rcx;
        rdx <<= cl;
        rsi >>= 6;
        *((rax + rsi*8 + 0x10)) |= rdx;
        rax = rbx;
        return rax;
label_2:
        esi = 0x50;
        rdi = r12;
        llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ ();
        rdx = *((r14 + 0x28a8));
        *(rax) = rdx;
        *((r14 + 0x28a8)) = rax;
        *((rax + 8)) = r13;
    } while (1);
label_0:
    return raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x404540 */
#include <stdint.h>
 
void alloc0_sVm4rDImKK2ZDdylByayiA_2 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi + 0x10;
    rbx = rdi;
    edi = 0x60f060;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    *((rax + 8)) = 1;
    rcx = rax + 0x10;
    memset (rcx, 0, rbx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4040a0 */
#include <stdint.h>
 
void dealloc_RCjNtRnHdRYntrcE7YtwWw (int64_t arg1) {
    rdi = arg1;
    rsi = rdi - 0x10;
    edi = 0x60f060;
    return rawDealloc_DA62HrGC5sdfCED505KyyQ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4080f0 */
#include <stdint.h>
 
int64_t isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg (int64_t arg3, uint32_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *((rdi + 0x10));
    if (rax != rsi) {
        goto label_0;
    }
    goto label_1;
    do {
        rax = *((rax + 0x10));
        if (rsi == rax) {
            goto label_1;
        }
label_0:
    } while (rax != 0);
    *(rdx) = rdi;
    eax = 0;
    return rax;
label_1:
    *((rdx + 8)) = rdi;
    eax = 1;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407520 */
#include <stdint.h>
 
int64_t freeCyclicCell_NZr5o3Ubzrci4OmK29cHBJA_2 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rbx = rdi;
    rax = *((rsi + 8));
    if (*((rax + 0x20)) != 0) {
        *(0x0060f058)++;
        rdi = rsi + 0x10;
        uint64_t (*rax + 0x20)() ();
        *(0x0060f058)--;
    }
    rdi = rbx + 0x60;
    rsi = rbp;
    return rawDealloc_DA62HrGC5sdfCED505KyyQ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407420 */
#include <stdint.h>
 
int64_t markGlobals_zoTIuavlrCHyw3B8MBaLJA_4 (uint32_t arg1) {
    rdi = arg1;
    if (*((rdi + 0x33c0)) != 0) {
        goto label_0;
    }
    r12 = globalMarkersLen_hgEFy3UCOBoalBh29asu5MA;
    if (r12 <= 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        uint64_t (*globalMarkers_5ghwSgpo9cT9bT7YStQDJHVQ)() ();
        rbx++;
    } while (r12 != rbx);
label_0:
    r12 = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
    ebx = 0;
    if (r12 <= 0) {
        goto label_1;
    }
    do {
        uint64_t (*threadLocalMarkers_pC47Nqd8F629cuTchphM5YA)() ();
        rbx++;
    } while (r12 != rbx);
label_1:
    rbx = *((rbp + 0x33b8));
    rax = *((rbp + 0x33a8));
    r12 = rbx + rax*8;
    if (rax <= 0) {
        goto label_2;
    }
    do {
        rsi = *(rbx);
        rdi = rbp;
        rbx += 8;
        markS_NZr5o3Ubzrci4OmK29cHBJA ();
    } while (r12 != rbx);
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4053e0 */
#include <stdint.h>
 
int64_t forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    do {
        if (rdi != 0) {
            if ((*((rsi + 9)) & 1) != 0) {
                goto label_1;
            }
            ecx = *((rsi + 8));
            if (cl > 0x2d) {
                goto label_1;
            }
            eax = 1;
            rax <<= cl;
            rcx = 0x200011400000;
            if ((rax & rcx) != 0) {
                goto label_2;
            }
            if ((eax & 0x8010010) != 0) {
                goto label_3;
            }
            if ((eax & 0x60000) != 0) {
                goto label_4;
            }
        }
label_1:
        return rax;
label_2:
        rdi = *(rdi);
        esi = (int32_t) dl;
        void (*0x405210)() ();
label_3:
        r12d = (int32_t) dl;
        r8 = *((rsi + 0x10));
        rax = *(rsi);
        rcx = *(r8);
        __asm ("cqo");
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
        r13 = rax;
        if (rax <= 0) {
            goto label_5;
        }
        rbx = rsi;
        r14d = 0;
label_0:
        rcx *= r14;
        edx = r12d;
        rsi = r8;
        r14++;
        rdi = rbp + rcx;
        forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA ();
    } while (1);
    if (r13 != r14) {
        r8 = *((rbx + 0x10));
        rcx = *(r8);
        goto label_0;
    }
label_5:
    return rax;
label_4:
    rsi = *((rsi + 0x18));
    edx = (int32_t) dl;
    return forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408dd0 */
#include <stdint.h>
 
int64_t raiseEOF_9b10LwJKWsyrZIEKTB9b6PGQ (void) {
    esi = 0x38;
    edi = NTI_LEclZrWX2FQAodlapxGITw_;
    newObj ();
    edi = TM_Q5wkpxktOdTGvlSRo9bzt9aw_25;
    *(rax) = obj.NTI_KGSY1JdrNB7Xi8KDhXFhSg_;
    rbp = *((rax + 0x18));
    rbx = rax;
    rax = copyStringRC1 ();
    *((rbx + 0x18)) = rax;
    if (rbp == 0) {
        goto label_0;
    }
    rax = *((rbp - 0x10));
    rsi = rbp - 0x10;
    rax -= 8;
    *((rbp - 0x10)) = rax;
    while (1) {
label_0:
        if (*((rbx + 0x10)) == 0) {
            *((rbx + 0x10)) = "EOFError";
        }
        rdi = rbx;
        raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw ();
        edi = 0x60f010;
        addZCT_fCDI7oO1NNVXXURtxSzsRw ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408980 */
#include <stdint.h>
 
uint64_t mnewString (uint32_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    edx = gch_IcYaEuuWivYAS86vFMTS3Q;
    rbx = rdi;
    if (rdi >= 7) {
    }
    edi = strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
    r12 = rbp + 0x11;
    rsi = r12;
    rax = rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
    memset (rax, 0, r12);
    *((rsp + 8)) = rbx;
    xmm0 = *((rsp + 8));
    *((rsp + 8)) = rbp;
    __asm ("movhps xmm0, qword [rsp + 8]");
    __asm ("movups xmmword [rax], xmm0");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408e40 */
#include <stdint.h>
 
uint64_t readLine_fPRnXwDTqtynUYGl4OixAg (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    edx = gch_IcYaEuuWivYAS86vFMTS3Q;
    rbx = rdi;
    esi = 0x61;
    edi = strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
    *((rsp + 8)) = 0;
    rax = rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
    __asm ("movdqa xmm0, xmmword [0x0040abb0]");
    rsi = rsp + 8;
    rdi = rax + 0x18;
    *((rax + 0x10)) = 0;
    rdx = rax;
    rdi &= 0xfffffffffffffff8;
    *((rax + 0x59)) = 0;
    eax -= edi;
    ecx = rax + 0x61;
    eax = 0;
    ecx >>= 3;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    __asm ("movups xmmword [rdx], xmm0");
    rdi = rbx;
    *((rsp + 8)) = rdx;
    al = readLine_sO1bQXVRA6RP9cdYJXNKeSw ();
    if (al != 0) {
        rax = *((rsp + 8));
        return rax;
    }
    raiseEOF_9b10LwJKWsyrZIEKTB9b6PGQ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x408b20 */
#include <stdint.h>
 
uint64_t readLine_sO1bQXVRA6RP9cdYJXNKeSw (int64_t arg2, int64_t arg1) {
    int64_t var_fh;
    rsi = arg2;
    rdi = arg1;
    r15 = rdi;
    r13 = rsi;
    r12d = 0x50;
    rdi = *(rsi);
    if (rdi != 0) {
        if (*(rdi) < 0x50) {
            r12 = *(rdi);
            goto label_4;
        }
    }
label_4:
    rsi = r12;
    rax = setLengthStr ();
    rdi = r13;
    rbx = rax;
    al = isOnStack_dJJW59cIgsBmT59aZrOM71Mg ();
    if (al == 0) {
        if (rbx != 0) {
            *((rbx - 0x10)) += 8;
        }
        rax = *(r13);
        if (rax <= 0xfff) {
            goto label_2;
        }
        rcx = *((rax - 0x10));
        rsi = rax - 0x10;
        rdx = rcx - 8;
        *((rax - 0x10)) = rdx;
        if (rdx <= 7) {
            goto label_5;
        }
    }
label_2:
    *(r13) = rbx;
    r14d = 0;
    while (rax != 0) {
label_0:
        rbx = *(r13);
        rax = memchr (rbx + rbp, 0xa, r12);
        if (rax != 0) {
            goto label_6;
        }
        r14 = r12 + r14 - 1;
        rdi = rbx;
        rsi = r14 + 0x80;
        rax = setLengthStr ();
        rdi = r13;
        rbx = rax;
        al = isOnStack_dJJW59cIgsBmT59aZrOM71Mg ();
        if (al == 0) {
            if (rbx != 0) {
                *((rbx - 0x10)) += 8;
            }
            rax = *(r13);
            if (rax <= 0xfff) {
                goto label_7;
            }
            rcx = *((rax - 0x10));
            rsi = rax - 0x10;
            rdx = rcx - 8;
            *((rax - 0x10)) = rdx;
            if (rdx > 7) {
                goto label_7;
            }
            edi = 0x60f010;
            addZCT_fCDI7oO1NNVXXURtxSzsRw ();
        }
label_7:
        *(r13) = rbx;
        r12d = 0x80;
        rbp = r14 + 0x10;
        memset (rbx + rbp, 0xa, r12);
        rdi += rbp;
        rax = fgets (*(r13), r12d, r15);
        rsp + 0xf = (rax != 0) ? 1 : 0;
    }
    eax = ferror (r15);
    if (eax == 0) {
        goto label_0;
    }
    clearerr (r15);
    edi = TM_Q5wkpxktOdTGvlSRo9bzt9aw_22;
    rax = raiseEIO_PpfSiTIeNpMAb9a5o6SglJw ();
label_6:
    rdx = rbx + 0x10;
    rax -= rdx;
    if (rax > 0) {
        rsi = rax - 1;
        eax = *((rbx + rsi + 0x10));
        if (al == 0xd) {
            goto label_8;
        }
        if (al != 0) {
            goto label_9;
        }
        rax = r12 + r14 - 1;
        if (rax <= rbp) {
            goto label_9;
        }
        if (*((rbx + rbp + 0x11)) == 0) {
            goto label_9;
        }
    }
label_9:
    rdi = rbx;
    rsi = rbp;
    rax = setLengthStr ();
    rdi = r13;
    r12 = rax;
    al = isOnStack_dJJW59cIgsBmT59aZrOM71Mg ();
    if (al == 0) {
        if (r12 != 0) {
            *((r12 - 0x10)) += 8;
        }
        rax = *(r13);
        if (rax <= 0xfff) {
            goto label_10;
        }
        rcx = *((rax - 0x10));
        rsi = rax - 0x10;
        rdx = rcx - 8;
        *((rax - 0x10)) = rdx;
        if (rdx <= 7) {
            goto label_11;
        }
    }
label_10:
    *(r13) = r12;
    if (rbp > 0) {
        goto label_3;
    }
    do {
label_1:
        eax = *((rsp + 0xf));
        return rax;
label_8:
        rdi = rbx;
        rax = setLengthStr ();
        rdi = r13;
        r12 = rax;
        al = isOnStack_dJJW59cIgsBmT59aZrOM71Mg ();
        if (al == 0) {
            if (r12 != 0) {
                *((r12 - 0x10)) += 8;
            }
            rax = *(r13);
            if (rax <= 0xfff) {
                goto label_12;
            }
            rcx = *((rax - 0x10));
            rsi = rax - 0x10;
            rdx = rcx - 8;
            *((rax - 0x10)) = rdx;
            if (rdx > 7) {
                goto label_12;
            }
            edi = 0x60f010;
            addZCT_fCDI7oO1NNVXXURtxSzsRw ();
        }
label_12:
        *(r13) = r12;
    } while (rbp == 1);
label_3:
    *((rsp + 0xf)) = 1;
    goto label_1;
label_5:
    edi = 0x60f010;
    addZCT_fCDI7oO1NNVXXURtxSzsRw ();
    goto label_2;
label_11:
    edi = 0x60f010;
    addZCT_fCDI7oO1NNVXXURtxSzsRw ();
    *(r13) = r12;
    if (rbp <= 0) {
        goto label_1;
    }
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x402140 */
#include <stdint.h>
 
int64_t skew_Cfx7NvEVZIhBjBm7i89boSg (int64_t arg1) {
    rdi = arg1;
    rax = *(rdi);
    rdx = *(rax);
    rcx = *((rax + 0x20));
    if (*((rdx + 0x20)) == rcx) {
        *(rdi) = rdx;
        rdx = *((rdx + 8));
        *(rax) = rdx;
        rdx = *(rdi);
        *((rdx + 8)) = rax;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x404090 */
#include <stdint.h>
 
void dealloc_jqYVOi4APb9cRx3G9a57AkRw (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rsi -= 0x10;
    return rawDealloc_DA62HrGC5sdfCED505KyyQ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4012d0 */
#include <stdint.h>
 
int64_t requestOsChunks_z9bCNjXTYllZ3pI24nEsw2g_2 (int64_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r12 = rsi;
    rbx = rdi;
    if (*((rdi + 0x30c9)) != 0) {
        goto label_2;
    }
    rax = *((rdi + 0x2898));
    if (rax > 0xffff) {
        goto label_3;
    }
    *((rdi + 0x30d0)) = 0x4000;
    esi = 0x4000;
label_0:
    r9d = 0;
    r8d = 0xffffffff;
    ecx = 0x22;
    edx = 3;
    if (r12 > rsi) {
        goto label_4;
    }
    rax = mmap (0, rsi, rdx, rcx, r8, r9);
    rax = rax - 1;
    if (rax > 0xfffffffffffffffd) {
        goto label_5;
    }
    r12 = *((rbx + 0x30d0));
label_1:
    *((rbx + 0x2880)) += r12;
    rax = rbx + 0x3100;
    *((rbx + 0x2890)) += r12;
    do {
        if (*(rax) <= 0x1d) {
            goto label_6;
        }
        rax = *((rax + 0x1e8));
    } while (rax != 0);
    esi = 0x1f0;
    rdi = rbx;
    rax = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ ();
    rdx = *((rbx + 0x32e8));
    *((rax + 0x1e8)) = rdx;
    *((rbx + 0x32e8)) = rax;
    *((rax + 8)) = rbp;
    *((rax + 0x10)) = r12;
    *(rax) = 1;
    goto label_7;
label_3:
    rax >>= 2;
    edx = 0x3f000000;
    rsi = rax + 0xfff;
    rax = *((rdi + 0x30d0));
    rsi &= 0xfffffffffffff000;
    rax += rax;
    if (rax > 0x3f000000) {
        rax = rdx;
    }
    if (rsi > rax) {
        rsi = rax;
    }
    *((rdi + 0x30d0)) = rsi;
    goto label_0;
label_6:
    rdx = *(rax);
    rcx = *(rax);
    rdx++;
    rcx <<= 4;
    rcx += rax;
    *((rcx + 8)) = rbp;
    *((rcx + 0x10)) = r12;
    *(rax) = rdx;
label_7:
    rsi = rbp + r12;
    xmm0 = 0;
    *((rbp + 8)) = r12;
    rdx = rsi;
    __asm ("movups xmmword [rbp + 0x10], xmm0");
    rdx >>= 0x15;
    eax = (int32_t) dl;
    rax = *((rbx + rax*8 + 0x28a8));
    if (rax != 0) {
        goto label_8;
    }
    goto label_9;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_9;
        }
label_8:
    } while (rdx != *((rax + 8)));
    rcx = rsi;
    edx = 1;
    rcx >>= 0xc;
    ecx &= 0x1ff;
    rdi = rcx;
    rdx <<= cl;
    rdi >>= 6;
    if ((*((rax + rdi*8 + 0x10)) & rdx) != 0) {
        rax = *(rsi);
        eax &= 1;
        rax |= r12;
        *(rsi) = rax;
    }
label_9:
    rdi = *((rbx + 0x28a0));
    rax = *((rbx + 0x28a0));
    if (rdi == 0) {
        eax = 0x1000;
        edi = 0x1000;
    }
    r8 = rbp;
    rsi = *(rbp);
    r8 -= rax;
    rdx = r8;
    esi &= 1;
    rdx >>= 0x15;
    eax = (int32_t) dl;
    rax = *((rbx + rax*8 + 0x28a8));
    if (rax != 0) {
        goto label_10;
    }
    goto label_11;
    do {
        rax = *(rax);
        if (rax == 0) {
            goto label_11;
        }
label_10:
    } while (rdx != *((rax + 8)));
    rcx = r8;
    edx = 1;
    rcx >>= 0xc;
    ecx &= 0x1ff;
    r9 = rcx;
    rdx <<= cl;
    r9 >>= 6;
    if ((*((rax + r9*8 + 0x10)) & rdx) != 0) {
        if (*((r8 + 8)) != rdi) {
            goto label_11;
        }
        rsi |= rdi;
    }
label_11:
    *(rbp) = rsi;
    rax = rbp;
    *((rbx + 0x28a0)) = r12;
    return rax;
label_4:
    rax = mmap (0, r12, rdx, rcx, r8, r9);
    rax = rax - 1;
    if (rax <= 0xfffffffffffffffd) {
        goto label_1;
    }
    do {
        raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g ();
label_2:
        rsi = *((rdi + 0x30d0));
        goto label_0;
label_5:
        rax = mmap (0, r12, 3, 0x22, 0xffffffff, 0);
        rax = rax - 1;
    } while (rax > 0xfffffffffffffffd);
    *((rbx + 0x30c9)) = 1;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x406490 */
#include <stdint.h>
 
uint64_t stackSize_61foY5fGmU9c2fC9c6wRIsrA (int64_t arg1) {
    rdi = arg1;
    *((rsp - 8)) = 0;
    rax = rsp - 8;
    *((rsp - 8)) = rax;
    rdx = *((rsp - 8));
    eax = 0;
    if (rdx != 0) {
        rdx = *((rsp - 8));
        rax = *(rdi);
        rax -= rdx;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400948 */
#include <stdint.h>
 
int64_t init (void) {
    /* [10] -r-x section size 23 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4066c0 */
#include <stdint.h>
 
uint64_t markStackAndRegisters_LdwvBL9bC9c0lik7K9bau9bX0Q (int64_t arg1) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
    int64_t var_b8h;
    jmpbuf env;
    rdi = arg1;
    *((rsp + 8)) = rdi;
    eax = setjmp (rsp + 0xc0);
    if (eax != 0) {
        goto label_14;
    }
    rcx = *((rsp + 8));
    rax = rsp + 0xc0;
    rbp = rax + 0xc8;
    rbx = rax;
    r13 = *(rcx);
    r12 = rcx + 0x60;
    if (rax < rbp) {
        goto label_18;
    }
    goto label_19;
label_1:
    r15 = *((rcx + 0x38));
label_2:
    *((r15 + rax*8)) = r14;
    rax = *((rsp + 8));
    *((rax + 0x28))++;
    do {
label_0:
        rax = *((rbx + 4));
        rsi = rax - 0x10;
        if (rsi > 0x1000) {
            rdi = r12;
            rax = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA ();
            r14 = rax;
            if (rax == 0) {
                goto label_20;
            }
            rdi = *((rsp + 8));
            *(rax) += 8;
            rdx = *((rdi + 0x30));
            rax = *((rdi + 0x28));
            if (rdx <= rax) {
                goto label_21;
            }
            r15 = *((rdi + 0x38));
label_3:
            *((r15 + rax*8)) = r14;
            rax = *((rsp + 8));
            *((rax + 0x28))++;
        }
label_20:
        rbx += 8;
        rax = rbx;
        if (rbp <= rbx) {
            goto label_19;
        }
label_18:
        rsi = *(rax);
        rsi -= 0x10;
    } while (rsi <= 0x1000);
    rdi = r12;
    rax = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA ();
    r14 = rax;
    if (rax == 0) {
        goto label_0;
    }
    rcx = *((rsp + 8));
    *(rax) += 8;
    rdx = *((rcx + 0x30));
    rax = *((rcx + 0x28));
    if (rdx > rax) {
        goto label_1;
    }
    rdx *= 3;
    edi = 0x60f060;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rdx = *((rsp + 8));
    rax >>= 1;
    *((rdx + 0x30)) = rax;
    rsi = rax*8 + 0x10;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    r15 = rax + 0x10;
    *((rax + 8)) = 1;
    rax = *((rsp + 8));
    rdx = *((rax + 0x28));
    *((rsp + 0x90)) = rdx;
    memcpy (r15, *((rax + 0x38)), rdx*8);
    rax = *((rsp + 8));
    edi = 0x60f060;
    rcx = *((rax + 0x38));
    rsi = rcx - 0x10;
    *((rsp + 0x98)) = rcx;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = *((rsp + 8));
    *((rax + 0x38)) = r15;
    rax = *((rax + 0x28));
    goto label_2;
label_21:
    rdx *= 3;
    edi = 0x60f060;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rdx = *((rsp + 8));
    rax >>= 1;
    *((rdx + 0x30)) = rax;
    rsi = rax*8 + 0x10;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    r15 = rax + 0x10;
    *((rax + 8)) = 1;
    rax = *((rsp + 8));
    rdi = *((rax + 0x28));
    *((rsp + 0xa0)) = rdi;
    memcpy (r15, *((rax + 0x38)), rdi*8);
    rax = *((rsp + 8));
    edi = 0x60f060;
    rdx = *((rax + 0x38));
    rsi = rdx - 0x10;
    *((rsp + 0xa8)) = rdx;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = *((rsp + 8));
    *((rax + 0x38)) = r15;
    rax = *((rax + 0x28));
    goto label_3;
label_14:
    return rax;
label_19:
    r12 = r13 - 0x40;
    if (r12 <= rbx) {
        goto label_22;
    }
    rdx = *((rsp + 8));
    rbp = rdx + 0x60;
    goto label_23;
label_5:
    r15 = *((rcx + 0x38));
label_6:
    *((r15 + rax*8)) = r14;
    rax = *((rsp + 8));
    *((rax + 0x28))++;
    do {
label_4:
        rax = *((rbx + 8));
        rsi = rax - 0x10;
        if (rsi > 0x1000) {
            rdi = rbp;
            rax = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA ();
            r14 = rax;
            if (rax == 0) {
                goto label_24;
            }
            rcx = *((rsp + 8));
            *(rax) += 8;
            rdx = *((rcx + 0x30));
            rax = *((rcx + 0x28));
            if (rdx <= rax) {
                goto label_25;
            }
            r15 = *((rcx + 0x38));
label_8:
            *((r15 + rax*8)) = r14;
            rax = *((rsp + 8));
            *((rax + 0x28))++;
        }
label_24:
        rax = *((rbx + 0x10));
        rsi = rax - 0x10;
        if (rsi > 0x1000) {
            rdi = rbp;
            rax = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA ();
            r14 = rax;
            if (rax == 0) {
                goto label_26;
            }
            rcx = *((rsp + 8));
            *(rax) += 8;
            rdx = *((rcx + 0x30));
            rax = *((rcx + 0x28));
            if (rdx <= rax) {
                goto label_27;
            }
            r15 = *((rcx + 0x38));
label_9:
            *((r15 + rax*8)) = r14;
            rax = *((rsp + 8));
            *((rax + 0x28))++;
        }
label_26:
        rax = *((rbx + 0x18));
        rsi = rax - 0x10;
        if (rsi > 0x1000) {
            rdi = rbp;
            rax = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA ();
            r14 = rax;
            if (rax == 0) {
                goto label_28;
            }
            rdi = *((rsp + 8));
            *(rax) += 8;
            rdx = *((rdi + 0x30));
            rax = *((rdi + 0x28));
            if (rdx <= rax) {
                goto label_29;
            }
            r15 = *((rdi + 0x38));
label_10:
            *((r15 + rax*8)) = r14;
            rax = *((rsp + 8));
            *((rax + 0x28))++;
        }
label_28:
        rax = *((rbx + 0x20));
        rsi = rax - 0x10;
        if (rsi > 0x1000) {
            rdi = rbp;
            rax = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA ();
            r14 = rax;
            if (rax == 0) {
                goto label_30;
            }
            rcx = *((rsp + 8));
            *(rax) += 8;
            rdx = *((rcx + 0x30));
            rax = *((rcx + 0x28));
            if (rdx <= rax) {
                goto label_31;
            }
            r15 = *((rcx + 0x38));
label_11:
            *((r15 + rax*8)) = r14;
            rax = *((rsp + 8));
            *((rax + 0x28))++;
        }
label_30:
        rax = *((rbx + 0x28));
        rsi = rax - 0x10;
        if (rsi > 0x1000) {
            rdi = rbp;
            rax = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA ();
            r14 = rax;
            if (rax == 0) {
                goto label_32;
            }
            rdi = *((rsp + 8));
            *(rax) += 8;
            rdx = *((rdi + 0x30));
            rax = *((rdi + 0x28));
            if (rdx <= rax) {
                goto label_33;
            }
            r15 = *((rdi + 0x38));
label_12:
            *((r15 + rax*8)) = r14;
            rax = *((rsp + 8));
            *((rax + 0x28))++;
        }
label_32:
        rax = *((rbx + 0x30));
        rsi = rax - 0x10;
        if (rsi > 0x1000) {
            rdi = rbp;
            rax = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA ();
            r14 = rax;
            if (rax == 0) {
                goto label_34;
            }
            rcx = *((rsp + 8));
            *(rax) += 8;
            rdx = *((rcx + 0x30));
            rax = *((rcx + 0x28));
            if (rdx <= rax) {
                goto label_35;
            }
            r15 = *((rcx + 0x38));
label_13:
            *((r15 + rax*8)) = r14;
            rax = *((rsp + 8));
            *((rax + 0x28))++;
        }
label_34:
        rax = *((rbx + 0x38));
        rsi = rax - 0x10;
        if (rsi > 0x1000) {
            rdi = rbp;
            rax = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA ();
            r14 = rax;
            if (rax == 0) {
                goto label_36;
            }
            rdi = *((rsp + 8));
            *(rax) += 8;
            rdx = *((rdi + 0x30));
            rax = *((rdi + 0x28));
            if (rdx <= rax) {
                goto label_37;
            }
            r15 = *((rdi + 0x38));
label_7:
            *((r15 + rax*8)) = r14;
            rax = *((rsp + 8));
            *((rax + 0x28))++;
        }
label_36:
        rbx += 0x40;
        rax = rbx;
        if (rbx >= r12) {
            goto label_22;
        }
label_23:
        rsi = *(rax);
        rsi -= 0x10;
    } while (rsi <= 0x1000);
    rdi = rbp;
    rax = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA ();
    r14 = rax;
    if (rax == 0) {
        goto label_4;
    }
    rcx = *((rsp + 8));
    *(rax) += 8;
    rdx = *((rcx + 0x30));
    rax = *((rcx + 0x28));
    if (rdx > rax) {
        goto label_5;
    }
    rdx *= 3;
    edi = 0x60f060;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rdx = *((rsp + 8));
    rax >>= 1;
    *((rdx + 0x30)) = rax;
    rsi = rax*8 + 0x10;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    r15 = rax + 0x10;
    *((rax + 8)) = 1;
    rax = *((rsp + 8));
    *((rsp + 0x10)) = rdx;
    rdx <<= 3;
    memcpy (r15, *((rax + 0x38)), *((rax + 0x28)));
    rax = *((rsp + 8));
    edi = 0x60f060;
    rdx = *((rax + 0x38));
    rsi = rdx - 0x10;
    *((rsp + 0x18)) = rdx;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = *((rsp + 8));
    *((rax + 0x38)) = r15;
    rax = *((rax + 0x28));
    goto label_6;
label_37:
    rdx *= 3;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rax >>= 1;
    *((rdi + 0x30)) = rax;
    rsi = rax*8 + 0x10;
    edi = 0x60f060;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    r15 = rax + 0x10;
    *((rax + 8)) = 1;
    rax = *((rsp + 8));
    rcx = *((rax + 0x28));
    rdx = rcx;
    *((rsp + 0x80)) = rcx;
    rdx <<= 3;
    memcpy (r15, *((rax + 0x38)), rdx);
    rax = *((rsp + 8));
    rdi = *((rax + 0x38));
    *((rsp + 0x88)) = rdi;
    rsi = rdi - 0x10;
    edi = 0x60f060;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = *((rsp + 8));
    *((rax + 0x38)) = r15;
    rax = *((rax + 0x28));
    goto label_7;
label_25:
    rdx *= 3;
    edi = 0x60f060;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rdx = *((rsp + 8));
    rax >>= 1;
    *((rdx + 0x30)) = rax;
    rsi = rax*8 + 0x10;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    r15 = rax + 0x10;
    *((rax + 8)) = 1;
    rax = *((rsp + 8));
    *((rsp + 0x20)) = rdx;
    rdx <<= 3;
    memcpy (r15, *((rax + 0x38)), *((rax + 0x28)));
    rax = *((rsp + 8));
    edi = 0x60f060;
    rdx = *((rax + 0x38));
    rsi = rdx - 0x10;
    *((rsp + 0x28)) = rdx;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = *((rsp + 8));
    *((rax + 0x38)) = r15;
    rax = *((rax + 0x28));
    goto label_8;
label_27:
    rdx *= 3;
    edi = 0x60f060;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rdx = *((rsp + 8));
    rax >>= 1;
    *((rdx + 0x30)) = rax;
    rsi = rax*8 + 0x10;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    r15 = rax + 0x10;
    *((rax + 8)) = 1;
    rax = *((rsp + 8));
    rdx = *((rax + 0x28));
    *((rsp + 0x30)) = rdx;
    memcpy (r15, *((rax + 0x38)), rdx*8);
    rax = *((rsp + 8));
    edi = 0x60f060;
    rcx = *((rax + 0x38));
    rsi = rcx - 0x10;
    *((rsp + 0x38)) = rcx;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = *((rsp + 8));
    *((rax + 0x38)) = r15;
    rax = *((rax + 0x28));
    goto label_9;
label_29:
    rdx *= 3;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rax >>= 1;
    *((rdi + 0x30)) = rax;
    rsi = rax*8 + 0x10;
    edi = 0x60f060;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    r15 = rax + 0x10;
    *((rax + 8)) = 1;
    rax = *((rsp + 8));
    rdi = *((rax + 0x28));
    *((rsp + 0x40)) = rdi;
    memcpy (r15, *((rax + 0x38)), rdi*8);
    rax = *((rsp + 8));
    edi = 0x60f060;
    rdx = *((rax + 0x38));
    rsi = rdx - 0x10;
    *((rsp + 0x48)) = rdx;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = *((rsp + 8));
    *((rax + 0x38)) = r15;
    rax = *((rax + 0x28));
    goto label_10;
label_31:
    rdx *= 3;
    edi = 0x60f060;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rdx = *((rsp + 8));
    rax >>= 1;
    *((rdx + 0x30)) = rax;
    rsi = rax*8 + 0x10;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    r15 = rax + 0x10;
    *((rax + 8)) = 1;
    rax = *((rsp + 8));
    rcx = *((rax + 0x28));
    rdx = rcx;
    *((rsp + 0x50)) = rcx;
    rdx <<= 3;
    memcpy (r15, *((rax + 0x38)), rdx);
    rax = *((rsp + 8));
    rdi = *((rax + 0x38));
    *((rsp + 0x58)) = rdi;
    rsi = rdi - 0x10;
    edi = 0x60f060;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = *((rsp + 8));
    *((rax + 0x38)) = r15;
    rax = *((rax + 0x28));
    goto label_11;
label_33:
    rdx *= 3;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rax >>= 1;
    *((rdi + 0x30)) = rax;
    rsi = rax*8 + 0x10;
    edi = 0x60f060;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    r15 = rax + 0x10;
    *((rax + 8)) = 1;
    rax = *((rsp + 8));
    rdx = *((rax + 0x28));
    *((rsp + 0x60)) = rdx;
    memcpy (r15, *((rax + 0x38)), rdx*8);
    rax = *((rsp + 8));
    edi = 0x60f060;
    rcx = *((rax + 0x38));
    rsi = rcx - 0x10;
    *((rsp + 0x68)) = rcx;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = *((rsp + 8));
    *((rax + 0x38)) = r15;
    rax = *((rax + 0x28));
    goto label_12;
label_35:
    rdx *= 3;
    edi = 0x60f060;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rdx = *((rsp + 8));
    rax >>= 1;
    *((rdx + 0x30)) = rax;
    rsi = rax*8 + 0x10;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    r15 = rax + 0x10;
    *((rax + 8)) = 1;
    rax = *((rsp + 8));
    rdi = *((rax + 0x28));
    *((rsp + 0x70)) = rdi;
    memcpy (r15, *((rax + 0x38)), rdi*8);
    rax = *((rsp + 8));
    edi = 0x60f060;
    rdx = *((rax + 0x38));
    rsi = rdx - 0x10;
    *((rsp + 0x78)) = rdx;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    rax = *((rsp + 8));
    *((rax + 0x38)) = r15;
    rax = *((rax + 0x28));
    goto label_13;
label_22:
    if (r13 < rbx) {
        goto label_14;
    }
    rdi = *((rsp + 8));
    rbp = rdi + 0x60;
    goto label_38;
label_16:
    r14 = *((rcx + 0x38));
label_17:
    *((r14 + rax*8)) = r12;
    rax = *((rsp + 8));
    *((rax + 0x28))++;
label_15:
    rbx += 8;
    rax = rbx;
    if (rbx > r13) {
        goto label_14;
    }
label_38:
    rsi = *(rax);
    rsi -= 0x10;
    if (rsi <= 0x1000) {
        goto label_15;
    }
    rdi = rbp;
    rax = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA ();
    r12 = rax;
    if (rax == 0) {
        goto label_15;
    }
    rcx = *((rsp + 8));
    *(rax) += 8;
    rdx = *((rcx + 0x30));
    rax = *((rcx + 0x28));
    if (rdx > rax) {
        goto label_16;
    }
    rdx *= 3;
    edi = 0x60f060;
    r15 = rcx;
    rax = rdx;
    rax >>= 0x3f;
    rax += rdx;
    rax >>= 1;
    *((rcx + 0x30)) = rax;
    rsi = rax*8 + 0x10;
    rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg ();
    *((rax + 8)) = 1;
    r14 = rax + 0x10;
    rax = *((r15 + 0x28));
    *((rsp + 0xb0)) = rax;
    memcpy (r14, *((r15 + 0x38)), rax*8);
    rax = *((r15 + 0x38));
    edi = 0x60f060;
    rsi = rax - 0x10;
    *((rsp + 0xb8)) = rax;
    rawDealloc_DA62HrGC5sdfCED505KyyQ ();
    *((r15 + 0x38)) = r14;
    rax = *((r15 + 0x28));
    goto label_17;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x407e20 */
#include <stdint.h>
 
void newObjNoInit (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    edx = gch_IcYaEuuWivYAS86vFMTS3Q;
    return rawNewObj_BpNS5yt3b9cMOponsUKh8aw ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400970 */
#include <stdint.h>
 
void funlockfile (void) {
    funlockfile ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400990 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4009a0 */
#include <stdint.h>
 
void mmap (void) {
    mmap ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4009e0 */
#include <stdint.h>
 
void memchr (void) {
    memchr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x4009f0 */
#include <stdint.h>
 
void fgets (void) {
    fgets ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400a00 */
#include <stdint.h>
 
void setjmp (void) {
    setjmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400a50 */
#include <stdint.h>
 
void munmap (void) {
    munmap ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/nim/x64_elf/subject.exe @ 0x400a60 */
#include <stdint.h>
 
void longjmp (void) {
    longjmp ();
}

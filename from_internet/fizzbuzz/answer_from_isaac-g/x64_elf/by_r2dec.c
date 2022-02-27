/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x401050 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [14] -r-x section size 5541 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x401090 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = _edata;
    if (rax != loc._edata) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = _edata;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x4010c0 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = _edata;
    rsi -= loc._edata;
    rax = rsi;
    rsi >>= 0x3f;
    rax >>= 3;
    rsi += rax;
    rsi >>= 1;
    if (rsi != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = _edata;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x401100 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.0) == 0) {
        deregister_tm_clones ();
        *(obj.completed.0) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x401130 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x4025f0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x4025f8 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x402580 */
#include <stdint.h>
 
uint64_t libc_csu_init (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15 = obj___frame_dummy_init_array_entry;
    r14 = rdx;
    r13 = rsi;
    r12d = edi;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    rbp -= r15;
    rax = _init ();
    rbp >>= 3;
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r14;
        rsi = r13;
        edi = r12d;
        uint64_t (*r15 + rbx*8)() ();
        rbx++;
    } while (rbp != rbx);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x401080 */
#include <stdint.h>
 
void loc_annobin_lto_1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x401140 */
#include <stdint.h>
 
int32_t main (void) {
    r12 = 0x7a7a75427a7a6946;
    r15d = main.buf;
label_0:
    r14 = r15;
    eax = main.buf;
    r14 -= rax;
    if (r14 <= 0xffff) {
        goto label_42;
    }
    ebx = main.buf;
    do {
        __asm ("vzeroupper");
        rax = write (1, rbx, ebp);
        rdx = rax;
        rcx = rbx + rax;
        rdx >>= 0x3f;
        __asm ("andn edx, edx, eax");
        __asm ("cmovns rbx, rcx");
        ebp -= edx;
    } while (ebp != 0);
    rax = r14 + 0xffff;
    __asm ("cmovns rax, r14");
    rax &= 0xffffffffffff0000;
    r14 -= rax;
    memcpy (obj.main.buf, 0x417000, r14);
    r15 += 0xffffffffffff0000;
    goto label_0;
label_42:
    eax = *(obj.main.counter);
    r9d = 0x3e;
    r9d -= eax;
    r11 = rax + 0x405081;
    r13d = r9d;
    r13d &= 3;
    if (r13d == 1) {
        goto label_43;
    }
    rbx = r15;
    if (r13d != 2) {
        rbx = r15;
        if (r13d != 3) {
            goto label_44;
        }
        al = *(r11);
        rbp = r11 + 1;
        rbx = r15 + 1;
        *(r15) = al;
    }
    eax = *(rbp);
    rbp += 2;
    *(rbx) = ax;
    rbx += 2;
label_44:
    r10d = r9d;
    r10d &= 0xfffffffc;
    if (r10d == 0) {
        goto label_2;
    }
label_1:
    edx = r10 - 4;
    if (edx >= 0x3c) {
        rax = rbp + rdx + 4;
        if (rbx >= rax) {
            goto label_45;
        }
        rax = rbx + rdx + 4;
        if (rbp >= rax) {
            goto label_45;
        }
    }
    r8d = r10d;
    rax = rbx;
    rdi = rbp;
label_27:
    ecx = r8d;
    edx = 0;
    do {
        esi = *((rdi + rdx));
        *((rax + rdx)) = esi;
        rdx += 4;
    } while (ecx != edx);
label_2:
    r8d = r9d;
    rdi = r15 + r8 + 2;
    *((r15 + r8)) = 0xa31;
    if (r13d == 1) {
        goto label_46;
    }
    rcx = r11;
    rsi = rdi;
    if (r13d != 2) {
        rcx = r11;
        rsi = rdi;
        if (r13d != 3) {
            goto label_47;
        }
        al = *(r11);
        rcx = r11 + 1;
        rsi = rdi + 1;
        *(rdi) = al;
    }
    eax = *(rcx);
    rcx += 2;
    *(rsi) = ax;
    rsi += 2;
label_47:
    r9 = r8 + 2;
    if (r10d == 0) {
        goto label_4;
    }
label_3:
    r15d = r10 - 4;
    if (r15d >= 0x3c) {
        rax = rcx + r15 + 4;
        if (rsi >= rax) {
            goto label_48;
        }
        rax = rsi + r15 + 4;
        if (rcx >= rax) {
            goto label_48;
        }
    }
    r14d = r10d;
    rbx = rsi;
    rax = rcx;
label_28:
    ecx = r14d;
    edx = 0;
    do {
        esi = *((rax + rdx));
        *((rbx + rdx)) = esi;
        rdx += 4;
    } while (ecx != edx);
label_4:
    rbx = rdi + r9 + 5;
    *((rdi + r8)) = 0xa32;
    *((rdi + r9 + 4)) = 0xa;
    *((rdi + r9)) = 0x7a7a6946;
    if (r13d == 1) {
        goto label_49;
    }
    rax = r11;
    rsi = rbx;
    if (r13d != 2) {
        rax = r11;
        rsi = rbx;
        if (r13d != 3) {
            goto label_50;
        }
        cl = *(r11);
        rax = r11 + 1;
        rsi = rbx + 1;
        *(rbx) = cl;
    }
    ecx = *(rax);
    rax += 2;
    *(rsi) = cx;
    rsi += 2;
label_50:
    if (r10d == 0) {
        goto label_6;
    }
label_5:
    r15d = r10 - 4;
    if (r15d >= 0x3c) {
        rcx = rax + r15 + 4;
        if (rsi >= rcx) {
            goto label_51;
        }
        rcx = rsi + r15 + 4;
        if (rax >= rcx) {
            goto label_51;
        }
    }
    r14d = r10d;
    rdi = rsi;
    rcx = rax;
label_29:
    eax = r14d;
    edx = 0;
    do {
        esi = *((rcx + rdx));
        *((rdi + rdx)) = esi;
        rdx += 4;
    } while (eax != edx);
label_6:
    rax = 0x7a69460a7a7a7542;
    r15 = rbx + r9 + 0xa;
    *((rbx + r8)) = 0xa34;
    *((rbx + r9 + 8)) = 0xa7a;
    *((rbx + r9)) = rax;
    if (r13d == 1) {
        goto label_52;
    }
    rax = r11;
    rsi = r15;
    if (r13d != 2) {
        rax = r11;
        rsi = r15;
        if (r13d != 3) {
            goto label_53;
        }
        cl = *(r11);
        rax = r11 + 1;
        rsi = r15 + 1;
        *(r15) = cl;
    }
    ecx = *(rax);
    rax += 2;
    *(rsi) = cx;
    rsi += 2;
label_53:
    if (r10d == 0) {
        goto label_8;
    }
label_7:
    ebp = r10 - 4;
    if (ebp >= 0x3c) {
        rcx = rax + rbp + 4;
        if (rsi >= rcx) {
            goto label_54;
        }
        rcx = rsi + rbp + 4;
        if (rax >= rcx) {
            goto label_54;
        }
    }
    r14d = r10d;
    rdi = rsi;
    rcx = rax;
label_30:
    eax = r14d;
    edx = 0;
    do {
        esi = *((rcx + rdx));
        *((rdi + rdx)) = esi;
        rdx += 4;
    } while (eax != edx);
label_8:
    *((r15 + r8)) = 0xa37;
    r15 += r9;
    if (r13d == 1) {
        goto label_55;
    }
    if (r13d == 2) {
        goto label_56;
    }
    if (r13d != 3) {
        goto label_57;
    }
    cl = *(r11);
    r11++;
    rax = r15 + 1;
    *(r15) = cl;
    goto label_58;
label_43:
    al = *(r11);
    rbp = r11 + 1;
    rbx = r15 + 1;
    *(r15) = al;
    r10d = r9d;
    r10d &= 0xfffffffc;
    if (r10d != 0) {
        goto label_1;
    }
    goto label_2;
label_46:
    al = *(r11);
    rcx = r11 + 1;
    rsi = rdi + 1;
    *(rdi) = al;
    r9 = r8 + 2;
    if (r10d != 0) {
        goto label_3;
    }
    goto label_4;
label_49:
    cl = *(r11);
    rax = r11 + 1;
    rsi = rbx + 1;
    *(rbx) = cl;
    if (r10d != 0) {
        goto label_5;
    }
    goto label_6;
label_52:
    cl = *(r11);
    rax = r11 + 1;
    rsi = r15 + 1;
    *(r15) = cl;
    if (r10d != 0) {
        goto label_7;
    }
    goto label_8;
label_55:
    cl = *(r11);
    r11++;
    rax = r15 + 1;
    *(r15) = cl;
    if (r10d == 0) {
        goto label_32;
label_56:
        rax = r15;
label_58:
        ecx = *(r11);
        r11 += 2;
        *(rax) = cx;
        rax += 2;
        if (r10d != 0) {
            goto label_59;
        }
        goto label_32;
label_57:
        rax = r15;
        if (r10d == 0) {
            goto label_32;
        }
    }
label_59:
    esi = r10 - 4;
    if (esi >= 0x3c) {
        rcx = r11 + rsi + 4;
        if (rax >= rcx) {
            goto label_60;
        }
        rcx = rax + rsi + 4;
        if (r11 >= rcx) {
            goto label_60;
        }
    }
    rdx = rax;
    rcx = r11;
label_31:
    eax = r10d;
    esi = 0;
    do {
        edi = *((rcx + rsi));
        *((rdx + rsi)) = edi;
        rsi += 4;
    } while (eax != esi);
label_32:
    rax = 0x7a75420a7a7a6946;
    *((r15 + r8)) = 0xa38;
    *((r15 + r9 + 8)) = 0xa7a;
    *((r15 + r9)) = rax;
    eax = 0x4050be;
    cl = *(0x004050be);
    if (cl != 0x39) {
        goto label_61;
    }
    eax = 0x4050be;
    edx = 0x3c;
    do {
        ecx = edx;
        *(rax) = 0x30;
        edx--;
        rax = rcx + 0x405081;
        ecx = *((rcx + 0x405081));
    } while (cl == 0x39);
label_61:
    cl++;
    r15 = r15 + r9 + 0xa;
    *(rax) = cl;
    al = ">00000000000000000000000000000000000000000000000000000000000000";
    ecx = (int32_t) al;
    if (*((rcx + obj.main.counter)) != 0x30) {
        goto label_62;
    }
label_41:
    eax = (int32_t) al;
    r9d = 0x3e;
    r11 = rcx + 0x405081;
    r9d -= eax;
    r14d = r9d;
    r14d &= 3;
    if (r14d == 1) {
        goto label_63;
    }
    rcx = r11;
    rbx = r15;
    if (r14d != 2) {
        rcx = r11;
        rbx = r15;
        if (r14d != 3) {
            goto label_64;
        }
        al = *(r11);
        rcx = r11 + 1;
        rbx = r15 + 1;
        *(r15) = al;
    }
    eax = *(rcx);
    rcx += 2;
    *(rbx) = ax;
    rbx += 2;
label_64:
    r10d = r9d;
    r10d &= 0xfffffffc;
    if (r10d == 0) {
        goto label_10;
    }
label_9:
    ebp = r10 - 4;
    if (ebp >= 0x3c) {
        rax = rcx + rbp + 4;
        if (rbx >= rax) {
            goto label_65;
        }
        rax = rbx + rbp + 4;
        if (rcx >= rax) {
            goto label_65;
        }
    }
    r8d = r10d;
    rax = rbx;
    rdi = rcx;
label_33:
    ecx = r8d;
    edx = 0;
    do {
        esi = *((rdi + rdx));
        *((rax + rdx)) = esi;
        rdx += 4;
    } while (ecx != edx);
label_10:
    r8d = r9d;
    rbp = r15 + r8 + 7;
    *((r15 + r8)) = 0xa31;
    *((r15 + r8 + 2)) = 0x7a7a6946;
    *((r15 + r8 + 6)) = 0xa;
    if (r14d == 1) {
        goto label_66;
    }
    rax = r11;
    rbx = rbp;
    if (r14d != 2) {
        rax = r11;
        rbx = rbp;
        if (r14d != 3) {
            goto label_67;
        }
        cl = *(r11);
        rax = r11 + 1;
        rbx = rbp + 1;
        *(rbp) = cl;
    }
    ecx = *(rax);
    rax += 2;
    *(rbx) = cx;
    rbx += 2;
label_67:
    r9 = r8 + 2;
    if (r10d == 0) {
        goto label_12;
    }
label_11:
    r13d = r10 - 4;
    if (r13d >= 0x3c) {
        rcx = rax + r13 + 4;
        if (rbx >= rcx) {
            goto label_68;
        }
        rcx = rbx + r13 + 4;
        if (rax >= rcx) {
            goto label_68;
        }
    }
    r15d = r10d;
    rsi = rbx;
    rcx = rax;
label_34:
    eax = r15d;
    edx = 0;
    do {
        edi = *((rcx + rdx));
        *((rsi + rdx)) = edi;
        rdx += 4;
    } while (eax != edx);
label_12:
    *((rbp + r8)) = 0xa33;
    rbp += r9;
    if (r14d == 1) {
        goto label_69;
    }
    rax = r11;
    rdi = rbp;
    if (r14d != 2) {
        rax = r11;
        rdi = rbp;
        if (r14d != 3) {
            goto label_70;
        }
        cl = *(r11);
        rax = r11 + 1;
        rdi = rbp + 1;
        *(rbp) = cl;
    }
    ecx = *(rax);
    rax += 2;
    *(rdi) = cx;
    rdi += 2;
label_70:
    if (r10d == 0) {
        goto label_14;
    }
label_13:
    r13d = r10 - 4;
    if (r13d >= 0x3c) {
        rcx = rax + r13 + 4;
        if (rdi >= rcx) {
            goto label_71;
        }
        rcx = rdi + r13 + 4;
        if (rax >= rcx) {
            goto label_71;
        }
    }
    r15d = r10d;
    rsi = rdi;
    rcx = rax;
label_35:
    eax = r15d;
    edx = 0;
    do {
        edi = *((rcx + rdx));
        *((rsi + rdx)) = edi;
        rdx += 4;
    } while (eax != edx);
label_14:
    rbx = rbp + r9 + 9;
    *((rbp + r8)) = 0xa34;
    *((rbp + r9)) = r12;
    *((rbp + r9 + 8)) = 0xa;
    if (r14d == 1) {
        goto label_72;
    }
    rax = r11;
    rsi = rbx;
    if (r14d != 2) {
        rax = r11;
        rsi = rbx;
        if (r14d != 3) {
            goto label_73;
        }
        cl = *(r11);
        rax = r11 + 1;
        rsi = rbx + 1;
        *(rbx) = cl;
    }
    ecx = *(rax);
    rax += 2;
    *(rsi) = cx;
    rsi += 2;
label_73:
    if (r10d == 0) {
        goto label_16;
    }
label_15:
    r13d = r10 - 4;
    if (r13d >= 0x3c) {
        rcx = rax + r13 + 4;
        if (rsi >= rcx) {
            goto label_74;
        }
        rcx = rsi + r13 + 4;
        if (rax >= rcx) {
            goto label_74;
        }
    }
    r15d = r10d;
    rdi = rsi;
    rcx = rax;
label_36:
    eax = r15d;
    edx = 0;
    do {
        esi = *((rcx + rdx));
        *((rdi + rdx)) = esi;
        rdx += 4;
    } while (eax != edx);
label_16:
    *((rbx + r8)) = 0xa36;
    rbx += r9;
    if (r14d == 1) {
        goto label_75;
    }
    rax = r11;
    rsi = rbx;
    if (r14d != 2) {
        rax = r11;
        rsi = rbx;
        if (r14d != 3) {
            goto label_76;
        }
        cl = *(r11);
        rax = r11 + 1;
        rsi = rbx + 1;
        *(rbx) = cl;
    }
    ecx = *(rax);
    rax += 2;
    *(rsi) = cx;
    rsi += 2;
label_76:
    if (r10d == 0) {
        goto label_18;
    }
label_17:
    r13d = r10 - 4;
    if (r13d >= 0x3c) {
        rcx = rax + r13 + 4;
        if (rsi >= rcx) {
            goto label_77;
        }
        rcx = rsi + r13 + 4;
        if (rax >= rcx) {
            goto label_77;
        }
    }
    r15d = r10d;
    rdi = rsi;
    rcx = rax;
label_37:
    eax = r15d;
    edx = 0;
    do {
        esi = *((rcx + rdx));
        *((rdi + rdx)) = esi;
        rdx += 4;
    } while (eax != edx);
label_18:
    r13 = rbx + r9 + 5;
    *((rbx + r8)) = 0xa37;
    *((rbx + r9 + 4)) = 0xa;
    *((rbx + r9)) = 0x7a7a6946;
    if (r14d == 1) {
        goto label_78;
    }
    rax = r11;
    rsi = r13;
    if (r14d != 2) {
        rax = r11;
        rsi = r13;
        if (r14d != 3) {
            goto label_79;
        }
        cl = *(r11);
        rax = r11 + 1;
        rsi = r13 + 1;
        *(r13) = cl;
    }
    ecx = *(rax);
    rax += 2;
    *(rsi) = cx;
    rsi += 2;
label_79:
    if (r10d == 0) {
        goto label_20;
    }
label_19:
    ebp = r10 - 4;
    if (ebp >= 0x3c) {
        rcx = rax + rbp + 4;
        if (rsi >= rcx) {
            goto label_80;
        }
        rcx = rsi + rbp + 4;
        if (rax >= rcx) {
            goto label_80;
        }
    }
    r15d = r10d;
    rdi = rsi;
    rcx = rax;
label_38:
    eax = r15d;
    edx = 0;
    do {
        esi = *((rcx + rdx));
        *((rdi + rdx)) = esi;
        rdx += 4;
    } while (eax != edx);
label_20:
    rax = 0x7a69460a7a7a7542;
    *((r13 + r8)) = 0xa39;
    *((r13 + r9 + 8)) = 0xa7a;
    *((r13 + r9)) = rax;
    eax = 0x4050be;
    cl = *(0x004050be);
    if (cl != 0x39) {
        goto label_81;
    }
    eax = 0x4050be;
    edx = 0x3c;
    do {
        ecx = edx;
        *(rax) = 0x30;
        edx--;
        rax = rcx + 0x405081;
        ecx = *((rcx + 0x405081));
    } while (cl == 0x39);
label_81:
    cl++;
    rbx = r13 + r9 + 0xa;
    *(rax) = cl;
    if (r14d == 1) {
        goto label_82;
    }
    rax = r11;
    rsi = rbx;
    if (r14d != 2) {
        rax = r11;
        rsi = rbx;
        if (r14d != 3) {
            goto label_83;
        }
        cl = *(r11);
        rax = r11 + 1;
        rsi = rbx + 1;
        *(rbx) = cl;
    }
    ecx = *(rax);
    rax += 2;
    *(rsi) = cx;
    rsi += 2;
label_83:
    if (r10d == 0) {
        goto label_22;
    }
label_21:
    r13d = r10 - 4;
    if (r13d >= 0x3c) {
        rcx = rax + r13 + 4;
        if (rsi >= rcx) {
            goto label_84;
        }
        rcx = rsi + r13 + 4;
        if (rax >= rcx) {
            goto label_84;
        }
    }
    r15d = r10d;
    rdi = rsi;
    rcx = rax;
label_39:
    eax = r15d;
    edx = 0;
    do {
        esi = *((rcx + rdx));
        *((rdi + rdx)) = esi;
        rdx += 4;
    } while (eax != edx);
label_22:
    *((rbx + r8)) = 0xa32;
    rbx += r9;
    if (r14d == 1) {
        goto label_85;
    }
    rax = r11;
    rsi = rbx;
    if (r14d != 2) {
        rax = r11;
        rsi = rbx;
        if (r14d != 3) {
            goto label_86;
        }
        cl = *(r11);
        rax = r11 + 1;
        rsi = rbx + 1;
        *(rbx) = cl;
    }
    ecx = *(rax);
    rax += 2;
    *(rsi) = cx;
    rsi += 2;
label_86:
    if (r10d == 0) {
        goto label_24;
    }
label_23:
    r13d = r10 - 4;
    if (r13d >= 0x3c) {
        rcx = rax + r13 + 4;
        if (rsi >= rcx) {
            goto label_87;
        }
        rcx = rsi + r13 + 4;
        if (rax >= rcx) {
            goto label_87;
        }
    }
    r15d = r10d;
    rdi = rsi;
    rcx = rax;
label_40:
    eax = r15d;
    edx = 0;
    do {
        esi = *((rcx + rdx));
        *((rdi + rdx)) = esi;
        rdx += 4;
    } while (eax != edx);
label_24:
    rax = 0x7a75420a7a7a6946;
    *((rbx + r8)) = 0xa33;
    *((rbx + r9 + 8)) = 0xa7a;
    *((rbx + r9)) = rax;
    rbx = rbx + r9 + 0xa;
    if (r14d == 1) {
        goto label_88;
    }
    rax = r11;
    rsi = rbx;
    if (r14d != 2) {
        rax = r11;
        rsi = rbx;
        if (r14d != 3) {
            goto label_89;
        }
        cl = *(r11);
        rax = r11 + 1;
        rsi = rbx + 1;
        *(rbx) = cl;
    }
    ecx = *(rax);
    rax += 2;
    *(rsi) = cx;
    rsi += 2;
label_89:
    if (r10d == 0) {
        goto label_26;
    }
label_25:
    r13d = r10 - 4;
    if (r13d >= 0x3c) {
        rcx = rax + r13 + 4;
        if (rsi >= rcx) {
            goto label_90;
        }
        rcx = rsi + r13 + 4;
        if (rax >= rcx) {
            goto label_90;
        }
    }
    r15d = r10d;
    rdi = rsi;
    rcx = rax;
    eax = r15d;
    edx = 0;
    do {
        esi = *((rcx + rdx));
        *((rdi + rdx)) = esi;
        rdx += 4;
    } while (eax != edx);
label_26:
    r13 = rbx + r9 + 5;
    *((rbx + r8)) = 0xa36;
    *((rbx + r9 + 4)) = 0xa;
    *((rbx + r9)) = 0x7a7a6946;
    if (r14d == 1) {
        void (*0x401e70)() ();
    }
label_63:
    al = *(r11);
    rcx = r11 + 1;
    rbx = r15 + 1;
    *(r15) = al;
    r10d = r9d;
    r10d &= 0xfffffffc;
    if (r10d != 0) {
        goto label_9;
    }
    goto label_10;
label_66:
    cl = *(r11);
    rax = r11 + 1;
    rbx = rbp + 1;
    *(rbp) = cl;
    r9 = r8 + 2;
    if (r10d != 0) {
        goto label_11;
    }
    goto label_12;
label_69:
    cl = *(r11);
    rax = r11 + 1;
    rdi = rbp + 1;
    *(rbp) = cl;
    if (r10d != 0) {
        goto label_13;
    }
    goto label_14;
label_72:
    cl = *(r11);
    rax = r11 + 1;
    rsi = rbx + 1;
    *(rbx) = cl;
    if (r10d != 0) {
        goto label_15;
    }
    goto label_16;
label_75:
    cl = *(r11);
    rax = r11 + 1;
    rsi = rbx + 1;
    *(rbx) = cl;
    if (r10d != 0) {
        goto label_17;
    }
    goto label_18;
label_78:
    cl = *(r11);
    rax = r11 + 1;
    rsi = r13 + 1;
    *(r13) = cl;
    if (r10d != 0) {
        goto label_19;
    }
    goto label_20;
label_82:
    cl = *(r11);
    rax = r11 + 1;
    rsi = rbx + 1;
    *(rbx) = cl;
    if (r10d != 0) {
        goto label_21;
    }
    goto label_22;
label_85:
    cl = *(r11);
    rax = r11 + 1;
    rsi = rbx + 1;
    *(rbx) = cl;
    if (r10d != 0) {
        goto label_23;
    }
    goto label_24;
label_88:
    cl = *(r11);
    rax = r11 + 1;
    rsi = rbx + 1;
    *(rbx) = cl;
    if (r10d != 0) {
        goto label_25;
    }
    goto label_26;
label_45:
    edx >>= 2;
    r8d = r10d;
    esi = 0;
    edx++;
    ecx = edx;
    ecx &= 0xfffffff0;
    eax = rcx*4;
    rdi = rbp + rcx*4;
    r8d -= eax;
    rax = rbx + rcx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rbp + rsi*4]");
        __asm ("vmovups ymm1, ymmword [rbp + rsi*4 + 0x20]");
        __asm ("vmovups ymmword [rbx + rsi*4], ymm0");
        __asm ("vmovups ymmword [rbx + rsi*4 + 0x20], ymm1");
        rsi += 0x10;
    } while (rcx != rsi);
    if (rcx != rdx) {
        goto label_27;
    }
    goto label_2;
label_48:
    r15d >>= 2;
    r14d = r10d;
    ebp = 0;
    r15d++;
    edx = r15d;
    edx &= 0xfffffff0;
    eax = rdx*4;
    rbx = rsi + rdx*4;
    r14d -= eax;
    rax = rcx + rdx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rcx + rbp*4]");
        __asm ("vmovups ymm1, ymmword [rcx + rbp*4 + 0x20]");
        __asm ("vmovups ymmword [rsi + rbp*4], ymm0");
        __asm ("vmovups ymmword [rsi + rbp*4 + 0x20], ymm1");
        rbp += 0x10;
    } while (rdx != rbp);
    if (rdx != r15) {
        goto label_28;
    }
    goto label_4;
label_51:
    r15d >>= 2;
    r14d = r10d;
    ebp = 0;
    r15d++;
    edx = r15d;
    edx &= 0xfffffff0;
    ecx = rdx*4;
    rdi = rsi + rdx*4;
    r14d -= ecx;
    rcx = rax + rdx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rax + rbp*4]");
        __asm ("vmovups ymm1, ymmword [rax + rbp*4 + 0x20]");
        __asm ("vmovups ymmword [rsi + rbp*4], ymm0");
        __asm ("vmovups ymmword [rsi + rbp*4 + 0x20], ymm1");
        rbp += 0x10;
    } while (rdx != rbp);
    if (rdx != r15) {
        goto label_29;
    }
    goto label_6;
label_54:
    ebp >>= 2;
    r14d = r10d;
    ebx = 0;
    ebp++;
    edx = ebp;
    edx &= 0xfffffff0;
    ecx = rdx*4;
    rdi = rsi + rdx*4;
    r14d -= ecx;
    rcx = rax + rdx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rax + rbx*4]");
        __asm ("vmovups ymm1, ymmword [rax + rbx*4 + 0x20]");
        __asm ("vmovups ymmword [rsi + rbx*4], ymm0");
        __asm ("vmovups ymmword [rsi + rbx*4 + 0x20], ymm1");
        rbx += 0x10;
    } while (rdx != rbx);
    if (rdx != rbp) {
        goto label_30;
    }
    goto label_8;
label_60:
    esi >>= 2;
    ebx = 0;
    esi++;
    edi = esi;
    edi &= 0xfffffff0;
    ecx = rdi*4;
    rdx = rax + rdi*4;
    r10d -= ecx;
    rcx = r11 + rdi*4;
    do {
        __asm ("vmovups ymm0, ymmword [r11 + rbx*4]");
        __asm ("vmovups ymm1, ymmword [r11 + rbx*4 + 0x20]");
        __asm ("vmovups ymmword [rax + rbx*4], ymm0");
        __asm ("vmovups ymmword [rax + rbx*4 + 0x20], ymm1");
        rbx += 0x10;
    } while (rdi != rbx);
    if (rdi != rsi) {
        goto label_31;
    }
    goto label_32;
label_65:
    ebp >>= 2;
    r8d = r10d;
    esi = 0;
    ebp++;
    edx = ebp;
    edx &= 0xfffffff0;
    eax = rdx*4;
    rdi = rcx + rdx*4;
    r8d -= eax;
    rax = rbx + rdx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rcx + rsi*4]");
        __asm ("vmovups ymm1, ymmword [rcx + rsi*4 + 0x20]");
        __asm ("vmovups ymmword [rbx + rsi*4], ymm0");
        __asm ("vmovups ymmword [rbx + rsi*4 + 0x20], ymm1");
        rsi += 0x10;
    } while (rdx != rsi);
    if (rdx != rbp) {
        goto label_33;
    }
    goto label_10;
label_68:
    r13d >>= 2;
    r15d = r10d;
    edi = 0;
    r13d++;
    edx = r13d;
    edx &= 0xfffffff0;
    ecx = rdx*4;
    rsi = rbx + rdx*4;
    r15d -= ecx;
    rcx = rax + rdx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rax + rdi*4]");
        __asm ("vmovups ymm1, ymmword [rax + rdi*4 + 0x20]");
        __asm ("vmovups ymmword [rbx + rdi*4], ymm0");
        __asm ("vmovups ymmword [rbx + rdi*4 + 0x20], ymm1");
        rdi += 0x10;
    } while (rdx != rdi);
    if (rdx != r13) {
        goto label_34;
    }
    goto label_12;
label_71:
    r13d >>= 2;
    r15d = r10d;
    ebx = 0;
    r13d++;
    edx = r13d;
    edx &= 0xfffffff0;
    ecx = rdx*4;
    rsi = rdi + rdx*4;
    r15d -= ecx;
    rcx = rax + rdx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rax + rbx*4]");
        __asm ("vmovups ymm1, ymmword [rax + rbx*4 + 0x20]");
        __asm ("vmovups ymmword [rdi + rbx*4], ymm0");
        __asm ("vmovups ymmword [rdi + rbx*4 + 0x20], ymm1");
        rbx += 0x10;
    } while (rdx != rbx);
    if (rdx != r13) {
        goto label_35;
    }
    goto label_14;
label_74:
    r13d >>= 2;
    r15d = r10d;
    ebp = 0;
    r13d++;
    edx = r13d;
    edx &= 0xfffffff0;
    ecx = rdx*4;
    rdi = rsi + rdx*4;
    r15d -= ecx;
    rcx = rax + rdx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rax + rbp*4]");
        __asm ("vmovups ymm1, ymmword [rax + rbp*4 + 0x20]");
        __asm ("vmovups ymmword [rsi + rbp*4], ymm0");
        __asm ("vmovups ymmword [rsi + rbp*4 + 0x20], ymm1");
        rbp += 0x10;
    } while (rdx != rbp);
    if (rdx != r13) {
        goto label_36;
    }
    goto label_16;
label_77:
    r13d >>= 2;
    r15d = r10d;
    ebp = 0;
    r13d++;
    edx = r13d;
    edx &= 0xfffffff0;
    ecx = rdx*4;
    rdi = rsi + rdx*4;
    r15d -= ecx;
    rcx = rax + rdx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rax + rbp*4]");
        __asm ("vmovups ymm1, ymmword [rax + rbp*4 + 0x20]");
        __asm ("vmovups ymmword [rsi + rbp*4], ymm0");
        __asm ("vmovups ymmword [rsi + rbp*4 + 0x20], ymm1");
        rbp += 0x10;
    } while (rdx != rbp);
    if (rdx != r13) {
        goto label_37;
    }
    goto label_18;
label_80:
    ebp >>= 2;
    r15d = r10d;
    ebx = 0;
    ebp++;
    edx = ebp;
    edx &= 0xfffffff0;
    ecx = rdx*4;
    rdi = rsi + rdx*4;
    r15d -= ecx;
    rcx = rax + rdx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rax + rbx*4]");
        __asm ("vmovups ymm1, ymmword [rax + rbx*4 + 0x20]");
        __asm ("vmovups ymmword [rsi + rbx*4], ymm0");
        __asm ("vmovups ymmword [rsi + rbx*4 + 0x20], ymm1");
        rbx += 0x10;
    } while (rdx != rbx);
    if (rdx != rbp) {
        goto label_38;
    }
    goto label_20;
label_84:
    r13d >>= 2;
    r15d = r10d;
    ebp = 0;
    r13d++;
    edx = r13d;
    edx &= 0xfffffff0;
    ecx = rdx*4;
    rdi = rsi + rdx*4;
    r15d -= ecx;
    rcx = rax + rdx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rax + rbp*4]");
        __asm ("vmovups ymm1, ymmword [rax + rbp*4 + 0x20]");
        __asm ("vmovups ymmword [rsi + rbp*4], ymm0");
        __asm ("vmovups ymmword [rsi + rbp*4 + 0x20], ymm1");
        rbp += 0x10;
    } while (rdx != rbp);
    if (rdx != r13) {
        goto label_39;
    }
    goto label_22;
label_87:
    r13d >>= 2;
    r15d = r10d;
    ebp = 0;
    r13d++;
    edx = r13d;
    edx &= 0xfffffff0;
    ecx = rdx*4;
    rdi = rsi + rdx*4;
    r15d -= ecx;
    rcx = rax + rdx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rax + rbp*4]");
        __asm ("vmovups ymm1, ymmword [rax + rbp*4 + 0x20]");
        __asm ("vmovups ymmword [rsi + rbp*4], ymm0");
        __asm ("vmovups ymmword [rsi + rbp*4 + 0x20], ymm1");
        rbp += 0x10;
    } while (rdx != rbp);
    if (rdx != r13) {
        goto label_40;
    }
    goto label_24;
label_90:
    r13d >>= 2;
    r15d = r10d;
    ebp = 0;
    r13d++;
    edx = r13d;
    edx &= 0xfffffff0;
    ecx = rdx*4;
    rdi = rsi + rdx*4;
    r15d -= ecx;
    rcx = rax + rdx*4;
    do {
        __asm ("vmovups ymm0, ymmword [rax + rbp*4]");
        __asm ("vmovups ymm1, ymmword [rax + rbp*4 + 0x20]");
        __asm ("vmovups ymmword [rsi + rbp*4], ymm0");
        __asm ("vmovups ymmword [rsi + rbp*4 + 0x20], ymm1");
        rbp += 0x10;
    } while (rdx != rbp);
label_62:
    if (al != 1) {
        al--;
        ecx = (int32_t) al;
        *(obj.main.counter) = ">00000000000000000000000000000000000000000000000000000000000000";
        goto label_41;
    }
    ebx = main.buf;
    r15d -= ebx;
    if (r15d == 0) {
        goto label_91;
    }
    do {
        __asm ("vzeroupper");
        rax = write (1, rbx, r15d);
        rdx = rax;
        rcx = rbx + rax;
        rdx >>= 0x3f;
        __asm ("andn edx, edx, eax");
        __asm ("cmovns rbx, rcx");
        r15d -= edx;
    } while (r15d != 0);
label_91:
    eax = 0;
    __asm ("vzeroupper");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t init (void) {
    /* [12] -r-x section size 27 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x401030 */
#include <stdint.h>
 
void write (void) {
    write ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_isaac-g/x64_elf/subject.exe @ 0x401040 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}

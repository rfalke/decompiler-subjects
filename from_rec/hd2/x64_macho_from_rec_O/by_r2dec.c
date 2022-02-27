/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000ab0 */
#include <stdint.h>
 
uint32_t entry0 (int64_t arg_8h, int64_t arg_10h) {
    /* [00] -r-x section size 856 named 0.__TEXT.__text */
    rdi = *((rbp + 8));
    rsi = rbp + 0x10;
    edx = edi;
    edx++;
    edx <<= 3;
    rdx += rsi;
    rcx = rdx;
    while (*(rcx) != 0) {
        rcx += 8;
    }
    rcx += 8;
    eax = _main (rdi, rsi);
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000aec */
#include <stdint.h>
 
int64_t dumpline (int64_t arg_20h, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_98h;
    char * s;
    int64_t canary;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 0x98)) = rdi;
    ebx = edx;
    rax = *(reloc.__stack_chk_guard);
    rdx = *(rax);
    *((rbp - 0x38)) = rdx;
    edx = 0;
    rdi = rbp - 0x90;
    r8 = rsi;
    rcx = "%08lX:";
    dl = 0x50;
    esi = 0;
    eax = 0;
    sprintf_chk ();
    eax = 0x10;
    r14d = 0x10;
    if (ebx <= 0x10) {
        r14d = ebx;
    }
    ebx = 1;
    if (r14d <= 0) {
        goto label_2;
    }
    rbx = *((rbp - 0x98));
    r13d = 0;
    r12d = 0;
    r15 = rbp - 0x90;
    do {
        edx = *(rbx);
        rdi = (int64_t) r12d;
        eax = 0;
        sprintf (rdi + r15 + 9, " %02lX", rdx);
        r13d++;
        rbx++;
        r12d += 3;
    } while (r13d != r14d);
    if (r14d > 0xf) {
        goto label_3;
    }
    ebx = r14 + 1;
label_2:
    r12 = rbp - 0x90;
    do {
        edx = 0x50;
        rsi = 0x100000ed6;
        rdi = r12;
        strcat_chk ();
        ebx++;
        eax = rbx - 1;
    } while (eax <= 0xf);
    rdi = r12;
    rcx = 0xffffffffffffffff;
    eax = 0;
    __asm ("repne scasb al, byte [rdi]");
    rcx = ~rcx;
    rcx--;
    rax = (int64_t) ecx;
    *((r12 + rax)) = 0x7c2020;
    r8d = rcx + 3;
    edi = 0;
    esi = 0;
    if (r14d <= 0) {
        edx = 0;
label_0:
        ecx = r8 + rdx;
        goto label_4;
    }
label_1:
    ecx += 3;
    do {
        rax = *((rbp - 0x98));
        edx = *((rsi + rax));
        eax = rdx - 0x20;
        eax = 0x2e;
        if (al >= 0x5f) {
            edx = eax;
        }
        eax = rcx + rsi;
        rax = (int64_t) eax;
        *((rbp + rax - 0x90)) = dl;
        edi++;
        rsi++;
    } while (edi != r14d);
    edx = edi;
    if (edi > 0xf) {
        goto label_5;
    }
    edx = r14d;
    goto label_0;
    do {
label_4:
        rax = (int64_t) ecx;
        *((rbp + rax - 0x90)) = 0x20;
        edx++;
        ecx++;
        if (edx > 0xf) {
            goto label_5;
        }
    } while (1);
label_3:
    rsi = rbp - 0x90;
    rdi = rsi;
    rcx = 0xffffffffffffffff;
    eax = 0;
    __asm ("repne scasb al, byte [rdi]");
    rcx = ~rcx;
    rcx--;
    rax = (int64_t) ecx;
    *((rsi + rax)) = 0x7c2020;
    r8d = rcx + 3;
    edi = 0;
    esi = 0;
    goto label_1;
label_5:
    rax = (int64_t) r8d;
    rax = rdi + rax;
    rdx = (int64_t) edx;
    *((rax + rdx)) = 0x7c;
    puts (rbp - 0x90);
    rax = *(reloc.__stack_chk_guard);
    rdx = *((rbp - 0x38));
    rdx ^= *(rax);
    if (rcx != 0) {
        stack_chk_fail ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000cd9 */
#include <stdint.h>
 
int64_t hexdump (int64_t arg1) {
    int64_t var_d0h;
    uint32_t var_70h;
    int64_t var_40h;
    int64_t canary;
    rdi = arg1;
    rbx = rdi;
    rax = *(reloc.__stack_chk_guard);
    rdx = *(rax);
    *((rbp - 0x28)) = rdx;
    edx = 0;
    rsi = rbp - 0xd0;
    eax = stat_INODE64 ();
    if (eax != 0) {
        perror (rbx);
        eax = 1;
        goto label_0;
    }
    rax = fopen (rbx, 0x100000eda);
    r13 = rax;
    if (rax != 0) {
        r12d = 0;
        r14 = rbp - 0x40;
        if (*((rbp - 0x70)) != 0) {
            goto label_1;
        }
        goto label_2;
    }
    perror (rbx);
    eax = 1;
    goto label_0;
    do {
label_1:
        eax = fread (r14, 1, 0x10, r13);
        ebx = eax;
        if (eax == 0) {
            goto label_2;
        }
        edx = eax;
        rsi = r12;
        rdi = r14;
        _dumpline ();
        rax = (int64_t) ebx;
        r12 += rax;
    } while (*((rbp - 0x70)) > r12);
label_2:
    fclose (r13);
    eax = 0;
label_0:
    rdx = *(reloc.__stack_chk_guard);
    rcx = *((rbp - 0x28));
    rcx ^= *(rdx);
    if (*((rbp - 0x70)) != r12) {
        stack_chk_fail ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000dbc */
#include <stdint.h>
 
int32_t main (char ** argv, int32_t argc) {
    rsi = argv;
    rdi = argc;
    r14d = edi;
    r13d = 0;
    if (edi <= 1) {
        goto label_0;
    }
    rbx = rsi;
    r12d = 1;
    r13d = 0;
    do {
        rdi = *((rbx + 8));
        eax = _hexdump ();
        r13d += eax;
        r12d++;
        rbx += 8;
    } while (r12d != r14d);
label_0:
    eax = r13d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000e4a */
#include <stdint.h>
 
void stub_helpers (void) {
    /* [02] -r-x section size 126 named 2.__TEXT.__stub_helper */
    r11 = 0x100001008;
    dyld_stub_binder ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000e08 */
#include <stdint.h>
 
void sprintf_chk (void) {
    /* [01] -r-x section size 66 named 1.__TEXT.__symbol_stub1 */
    sprintf_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000e0e */
#include <stdint.h>
 
void stack_chk_fail (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000e14 */
#include <stdint.h>
 
void strcat_chk (void) {
    strcat_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000e1a */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000e20 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000e26 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000e2c */
#include <stdint.h>
 
void fread (void) {
    fread ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000e32 */
#include <stdint.h>
 
void perror (void) {
    perror ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000e38 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000e3e */
#include <stdint.h>
 
void sprintf (void) {
    sprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_O/subject.exe @ 0x100000e44 */
#include <stdint.h>
 
void stat_INODE64 (void) {
    stat_INODE64 ();
}

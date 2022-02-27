/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x1000009f0 */
#include <stdint.h>
 
uint32_t entry0 (int64_t arg_8h, int64_t arg_10h) {
    /* [00] -r-x section size 1012 named 0.__TEXT.__text */
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
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000a2c */
#include <stdint.h>
 
int64_t dumpline (size_t arg3, size_t arg2, void * arg1) {
    size_t var_84h;
    size_t var_80h;
    void * var_78h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 0x78)) = rdi;
    *((rbp - 0x80)) = rsi;
    *((rbp - 0x84)) = edx;
    rax = *(reloc.__stack_chk_guard);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000c96 */
#include <stdint.h>
 
int64_t hexdump (char * arg1) {
    int64_t var_dch;
    char * filename;
    int64_t var_d0h;
    int64_t var_70h;
    file* stream;
    size_t var_30h;
    size_t var_24h;
    void * ptr;
    int64_t canary;
    rdi = arg1;
    *((rbp - 0xd8)) = rdi;
    rax = *(reloc.__stack_chk_guard);
    rdx = *(rax);
    *((rbp - 8)) = rdx;
    edx = 0;
    rsi = rbp - 0xd0;
    rdi = *((rbp - 0xd8));
    eax = stat_INODE64 ();
    if (eax != 0) {
        perror (*((rbp - 0xd8)));
        *((rbp - 0xdc)) = 1;
        goto label_0;
    }
    rax = fopen (*((rbp - 0xd8)), 0x100000ecc);
    *((rbp - 0x38)) = rax;
    if (*((rbp - 0x38)) == 0) {
        perror (*((rbp - 0xd8)));
        *((rbp - 0xdc)) = 1;
        goto label_0;
    }
    *((rbp - 0x30)) = 0;
    while (rax > *((rbp - 0x30))) {
        eax = fread (rbp - 0x20, 1, 0x10, *((rbp - 0x38)));
        *((rbp - 0x24)) = eax;
        if (*((rbp - 0x24)) == 0) {
            goto label_1;
        }
        edx = *((rbp - 0x24));
        rsi = *((rbp - 0x30));
        rdi = rbp - 0x20;
        _dumpline ();
        eax = *((rbp - 0x24));
        rax = (int64_t) eax;
        *((rbp - 0x30)) += rax;
        rax = *((rbp - 0x70));
    }
label_1:
    fclose (*((rbp - 0x38)));
    *((rbp - 0xdc)) = 0;
label_0:
    eax = *((rbp - 0xdc));
    rdx = *(reloc.__stack_chk_guard);
    rcx = *((rbp - 8));
    rcx ^= *(rdx);
    if (rax != *((rbp - 0x30))) {
        stack_chk_fail ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000d9d */
#include <stdint.h>
 
int32_t main (char ** argv, signed int64_t argc) {
    char ** var_20h;
    signed int64_t var_14h;
    int64_t var_8h;
    int64_t var_4h;
    rsi = argv;
    rdi = argc;
    *((rbp - 0x14)) = edi;
    *((rbp - 0x20)) = rsi;
    *((rbp - 8)) = 0;
    *((rbp - 4)) = 1;
    while (eax < *((rbp - 0x14))) {
        eax = *((rbp - 4));
        rax = (int64_t) eax;
        rax <<= 3;
        rax += *((rbp - 0x20));
        rdi = *(rax);
        eax = _hexdump ();
        *((rbp - 8)) += eax;
        *((rbp - 4))++;
        eax = *((rbp - 4));
    }
    eax = *((rbp - 8));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000c70 */
#include <stdint.h>
 
void inline_strcpy_chk (int64_t arg2, char * arg1) {
    int64_t var_10h;
    char * var_8h;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 8)) = rdi;
    *((rbp - 0x10)) = rsi;
    rdx = 0xffffffffffffffff;
    rsi = *((rbp - 0x10));
    rdi = *((rbp - 8));
    strcpy_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000df6 */
#include <stdint.h>
 
void strcpy_chk (void) {
    strcpy_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000e2c */
#include <stdint.h>
 
void stub_helpers (void) {
    /* [02] -r-x section size 136 named 2.__TEXT.__stub_helper */
    r11 = 0x100001008;
    dyld_stub_binder ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000de4 */
#include <stdint.h>
 
void sprintf_chk (void) {
    /* [01] -r-x section size 72 named 1.__TEXT.__symbol_stub1 */
    sprintf_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000dea */
#include <stdint.h>
 
void stack_chk_fail (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000df0 */
#include <stdint.h>
 
void strcat_chk (void) {
    strcat_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000dfc */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000e02 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000e08 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000e0e */
#include <stdint.h>
 
void fread (void) {
    fread ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000e14 */
#include <stdint.h>
 
void perror (void) {
    perror ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000e1a */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000e20 */
#include <stdint.h>
 
void stat_INODE64 (void) {
    stat_INODE64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000e26 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_macho_from_rec_g/subject.exe @ 0x100000a4c */
#include <stdint.h>
 
int64_t fcn_100000a4c (int64_t arg_20h) {
    int64_t var_8ch;
    int64_t var_85h;
    signed int64_t var_84h;
    int64_t var_80h;
    int64_t var_78h;
    size_t var_68h;
    int32_t var_64h;
    char * s;
    int64_t canary;
    rdx = *(rax);
    *((rbp - 8)) = rdx;
    edx = 0;
    rax = *((rbp - 0x80));
    rdi = rbp - 0x60;
    r8 = rax;
    rcx = "%08lX:";
    edx = 0x50;
    esi = 0;
    eax = 0;
    sprintf_chk ();
    if (*((rbp - 0x84)) > 0x10) {
        *((rbp - 0x84)) = 0x10;
    }
    *((rbp - 0x64)) = 0;
    while (eax < *((rbp - 0x84))) {
        eax = *((rbp - 0x64));
        rax = (int64_t) eax;
        rax += *((rbp - 0x78));
        eax = *(rax);
        ecx = (int32_t) al;
        rsi = 0xffffffffffffffff;
        edx = *((rbp - 0x64));
        eax = *((rbp - 0x64));
        eax += eax;
        eax += edx;
        rax = (int64_t) eax;
        rdx = rax;
        rax = rbp - 0x60;
        rax += rdx;
        rdi = rax + 9;
        r8d = ecx;
        rcx = " %02lX";
        rdx = rsi;
        esi = 0;
        eax = 0;
        sprintf_chk ();
        *((rbp - 0x64))++;
        eax = *((rbp - 0x64));
    }
    while (al != 0) {
        rdi = rbp - 0x60;
        edx = 0x50;
        rsi = 0x100000ec2;
        strcat_chk ();
        al = (*((rbp - 0x64)) <= 0xf) ? 1 : 0;
        *((rbp - 0x64))++;
    }
    eax = strlen (rbp - 0x60);
    *((rbp - 0x68)) = eax;
    rax = 0xffffffffffffffff;
    if (rax != -1) {
        rdx = 0xffffffffffffffff;
        eax = *((rbp - 0x68));
        rax = (int64_t) eax;
        rdi = rbp - 0x60;
        rdi += rax;
        rsi = 0x100000ec6;
        strcpy_chk ();
    } else {
        eax = *((rbp - 0x68));
        rax = (int64_t) eax;
        rdi = rbp - 0x60;
        rdi += rax;
        rsi = 0x100000ec6;
        _inline_strcpy_chk ();
    }
    *((rbp - 0x68)) += 3;
    *((rbp - 0x64)) = 0;
    while (eax < *((rbp - 0x84))) {
        eax = *((rbp - 0x64));
        edx = *((rbp - 0x68));
        edx += eax;
        *((rbp - 0x8c)) = edx;
        eax = *((rbp - 0x64));
        rax = (int64_t) eax;
        rax += *((rbp - 0x78));
        eax = *(rax);
        if (al > 0x1f) {
            eax = *((rbp - 0x64));
            rax = (int64_t) eax;
            rax += *((rbp - 0x78));
            eax = *(rax);
            if (al <= 0x7e) {
                eax = *((rbp - 0x64));
                rax = (int64_t) eax;
                rax += *((rbp - 0x78));
                eax = *(rax);
                *((rbp - 0x85)) = al;
            }
        } else {
            *((rbp - 0x85)) = 0x2e;
        }
        rax = *((rbp - 0x8c));
        edx = *((rbp - 0x85));
        *((rbp + rax - 0x60)) = dl;
        *((rbp - 0x64))++;
        eax = *((rbp - 0x64));
    }
    while (*((rbp - 0x64)) <= 0xf) {
        eax = *((rbp - 0x68));
        eax += *((rbp - 0x64));
        rax = (int64_t) eax;
        *((rbp + rax - 0x60)) = 0x20;
        *((rbp - 0x64))++;
    }
    rax = 0xffffffffffffffff;
    if (rax != -1) {
        rcx = 0xffffffffffffffff;
        eax = *((rbp - 0x68));
        rax = (int64_t) eax;
        rdx = rbp - 0x60;
        rdx += rax;
        eax = *((rbp - 0x64));
        rax = (int64_t) eax;
        rdi = rdx + rax;
        rdx = rcx;
        rsi = 0x100000eca;
        strcpy_chk ();
    } else {
        eax = *((rbp - 0x68));
        rax = (int64_t) eax;
        rdx = rbp - 0x60;
        rdx += rax;
        eax = *((rbp - 0x64));
        rax = (int64_t) eax;
        rdi = rdx + rax;
        rsi = 0x100000eca;
        _inline_strcpy_chk ();
    }
    puts (rbp - 0x60);
    rax = *(reloc.__stack_chk_guard);
    rdx = *((rbp - 8));
    rdx ^= *(rax);
    if (rdx != 0) {
        stack_chk_fail ();
    }
    return rax;
}

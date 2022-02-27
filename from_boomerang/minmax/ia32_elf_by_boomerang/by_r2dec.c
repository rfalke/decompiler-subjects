/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/ia32_elf_by_boomerang/subject.exe @ 0x80487e4 */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    /* [09] -r-x section size 320 named .text */
    eax = .dynamic;
    if (eax != 0) {
        atexit ();
    }
    atexit (sym._fini);
    eax = *((ebp + 8));
    edx = ebp + eax*4 + 0x10;
    *(obj._environ) = edx;
    edx = ebp + 0xc;
    *(obj.___Argv) = edx;
    fpstart ();
    loc_fsr ();
    _init ();
    eax = main ();
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/ia32_elf_by_boomerang/subject.exe @ 0x80487a4 */
#include <stdint.h>
 
void atexit (void) {
    atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/ia32_elf_by_boomerang/subject.exe @ 0x80487b4 */
#include <stdint.h>
 
void fpstart (void) {
    fpstart ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/ia32_elf_by_boomerang/subject.exe @ 0x804884c */
#include <stdint.h>
 
int32_t loc_fsr (void) {
    edx = 0;
    if (edx == 0) {
        goto label_0;
    }
    __asm ("wait");
    edx >>= 1;
    edx ^= 0x39f;
    ecx = edx;
    edx &= 0x1f;
    eax = 0;
    al = *((edx + obj.trap_table));
    edx = ecx;
    edx &= 0x60;
    edx <<= 5;
    if (((edx >> 0xa) & 1) < 0) {
        goto label_1;
    }
    do {
        edx = ecx;
        edx &= 0x180;
        edx <<= 1;
        edx = ecx;
        edx &= 0x200;
        edx >>= 8;
        goto label_2;
label_1:
        __asm ("btc edx, 0xb");
    } while (1);
label_2:
    edx = 0;
    if (edx == 0x35) {
        *(loc.__fnonstd_used) = 1;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/ia32_elf_by_boomerang/subject.exe @ 0x8048924 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 39 named .init */
    void (*0x804892a)(uint32_t) (ebx);
    ebx += 0x1052;
    ecx = *((ebx + 0x1c));
    edx = *((ebx + 0x1c));
    edx -= 8;
    if (*(edx) != 0) {
        uint32_t (*edx)(uint32_t) (ecx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/ia32_elf_by_boomerang/subject.exe @ 0x80488f0 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    eax = *((ebp + 8));
    if (eax < 0xfffffffe) {
        eax = 0xfffffffe;
    } else {
        if (eax <= 3) {
            goto label_0;
        }
        eax = 3;
    }
label_0:
    eax = printf (0x8049ad4);
    eax -= eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/ia32_elf_by_boomerang/subject.exe @ 0x80487c4 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/ia32_elf_by_boomerang/subject.exe @ 0x8048848 */
#include <stdint.h>
 
void mcount (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/ia32_elf_by_boomerang/subject.exe @ 0x804894c */
#include <stdint.h>
 
void fini (void) {
    /* [11] -r-x section size 42 named .fini */
    void (*0x8048952)(uint32_t) (ebx);
    ebx += 0x102a;
    ecx = *((ebx + 0x20));
    ecx -= 0x10;
    edx = ecx;
    edx -= 4;
    if (*(edx) != 0) {
        uint32_t (*edx)(uint32_t) (ecx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/ia32_elf_by_boomerang/subject.exe @ 0x80487d4 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}

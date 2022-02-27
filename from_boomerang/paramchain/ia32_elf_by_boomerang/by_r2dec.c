/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe @ 0x8048818 */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    /* [09] -r-x section size 356 named .text */
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
/* SUBJECTS/from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe @ 0x80487d8 */
#include <stdint.h>
 
void atexit (void) {
    atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe @ 0x80487e8 */
#include <stdint.h>
 
void fpstart (void) {
    fpstart ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe @ 0x8048880 */
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
/* SUBJECTS/from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe @ 0x804897c */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 39 named .init */
    void (*0x8048982)(uint32_t) (ebx);
    ebx += 0x1052;
    ecx = *((ebx + 0x1c));
    edx = *((ebx + 0x1c));
    edx -= 8;
    if (*(edx) != 0) {
        uint32_t (*edx)(uint32_t) (ecx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe @ 0x8048950 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_4h;
    passem (5, 0xa, 0x28, ebp - 4);
    eax = printf (0x8049b2c);
    eax -= eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe @ 0x8048938 */
#include <stdint.h>
 
void passem (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    addem (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe @ 0x8048924 */
#include <stdint.h>
 
int32_t addem (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    eax = *((ebp + 8));
    eax += *((ebp + 0xc));
    eax += *((ebp + 0x10));
    ecx = *((ebp + 0x14));
    *(ecx) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe @ 0x8048808 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe @ 0x80487f8 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe @ 0x804887c */
#include <stdint.h>
 
void mcount (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe @ 0x80489a4 */
#include <stdint.h>
 
void fini (void) {
    /* [11] -r-x section size 42 named .fini */
    void (*0x80489aa)(uint32_t) (ebx);
    ebx += 0x102a;
    ecx = *((ebx + 0x20));
    ecx -= 0x10;
    edx = ecx;
    edx -= 4;
    if (*(edx) != 0) {
        uint32_t (*edx)(uint32_t) (ecx);
    }
}

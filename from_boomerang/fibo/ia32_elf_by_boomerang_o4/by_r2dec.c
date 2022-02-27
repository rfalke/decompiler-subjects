/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x80486dc */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    /* [09] -r-x section size 413 named .text */
    eax = sym.imp._cleanup;
    if (eax != 0) {
        atexit (sym.imp._cleanup);
    }
    eax = .dynamic;
    if (eax != 0) {
        atexit ();
    }
    atexit (sym._fini);
    eax = *((ebp + 8));
    edx = ebp + eax*4 + 0x10;
    *(obj._environ) = edx;
    _init (eax, ebp + 0xc, edx);
    fpstart ();
    eax = main ();
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x804874b */
#include <stdint.h>
 
void mcount (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048880 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 19 named .init */
    gcc2_compiled_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048830 */
#include <stdint.h>
 
uint32_t loc_gcc2_compiled_2 (void) {
    int32_t var_8h;
    void (*0x804883a)() ();
    ebx += 0x10a6;
    eax = ebx + 0xc0;
    esi = eax - 4;
    if (*((eax - 4)) == -1) {
        goto label_0;
    }
    do {
        eax = *(esi);
        void (*eax)() ();
        esi += 0xfffffffc;
    } while (*(esi) != -1);
label_0:
    esp = ebp - 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048798 */
#include <stdint.h>
 
uint32_t fib (int32_t arg_8h) {
    int32_t var_8h;
    do {
label_0:
        ebx = *((ebp + 8));
        if (ebx <= 1) {
            goto label_1;
        }
        eax = fib (ebx - 1);
    } while (1);
    esi = eax;
    eax = fib (ebx - 2);
    goto label_0;
    eax += esi;
    goto label_2;
label_1:
    eax = ebx;
label_2:
    esp = ebp - 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x80487cc */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_ch;
    int32_t var_4h;
    printf ("Input number: ");
    scanf (0x80488c7, ebp - 4);
    ebx = *((ebp - 4));
    if (ebx > 1) {
        eax = fib (ebx - 1);
        esi = eax;
        eax = fib (ebx - 2);
        eax += esi;
    } else {
        eax = ebx;
    }
    eax = printf ("fibonacci(%d) = %d\n");
    eax = 0;
    esp = ebp - 0xc;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x80488a0 */
#include <stdint.h>
 
void fini (void) {
    /* [11] -r-x section size 19 named .fini */
    gcc2_compiled_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x804874c */
#include <stdint.h>
 
uint32_t loc_gcc2_compiled_ (void) {
    int32_t var_8h;
    void (*0x8048756)() ();
    ebx += 0x118a;
    eax = ebx + 0xc4;
    esi = eax + 4;
    if (*((eax + 4)) == 0) {
        goto label_0;
    }
    do {
        eax = *(esi);
        void (*eax)() ();
        esi += 4;
    } while (*(esi) != 0);
label_0:
    esp = ebp - 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048780 */
#include <stdint.h>
 
void fini_dummy (void) {
    int32_t var_4h;
    void (*0x8048789)(uint32_t) (ebx);
    ebx += 0x1157;
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048864 */
#include <stdint.h>
 
void init_dummy (void) {
    int32_t var_4h;
    void (*0x804886d)(uint32_t) (ebx);
    ebx += 0x1073;
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x804868c */
#include <stdint.h>
 
void atexit (void) {
    atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x80486ac */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x80486bc */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x804869c */
#include <stdint.h>
 
void fpstart (void) {
    fpstart ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x80486cc */
#include <stdint.h>
 
void scanf (void) {
    scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe @ 0x804867c */
#include <stdint.h>
 
void cleanup (void) {
    cleanup ();
}

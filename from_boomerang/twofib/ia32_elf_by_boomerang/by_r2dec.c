/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x80482f4 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 556 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x80482d4 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x8048318 */
#include <stdint.h>
 
void call_gmon_start (void) {
    void (*0x8048321)(uint32_t) (ebx);
    ebx += 0x1333;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x804833c */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.1) == 0) {
        goto label_0;
    }
    goto label_1;
    do {
        eax += 4;
        *(obj.p.0) = eax;
        void (*edx)() ();
label_0:
        eax = *(obj.p.0);
        edx = *(eax);
    } while (edx != 0);
    *(obj.completed.1) = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x8048370 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.__JCR_LIST__);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x80484fc */
#include <stdint.h>
 
void do_global_ctors_aux (void) {
    ebx = .ctors;
    eax = .ctors;
    while (eax != -1) {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x80484b8 */
#include <stdint.h>
 
uint32_t libc_csu_fini (void) {
    void (*0x80484c3)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x1191;
    eax = ebx - 0xe0;
    edi = ebx - 0xe0;
    eax -= edi;
    eax >>= 2;
    esi = eax - 1;
    while (esi != -1) {
        uint32_t (*edi + esi*4)() ();
        esi--;
    }
    _fini ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x804829c */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x804839c */
#include <stdint.h>
 
int32_t twofib (int32_t arg_8h, uint32_t arg_ch) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    do {
        if (*((ebp + 0xc)) == 0) {
            *((ebp - 8)) = 0;
            *((ebp - 4)) = 1;
            goto label_0;
        }
        edx = ebp - 8;
        eax = *((ebp + 0xc));
        eax--;
        twofib (edx, eax);
    } while (1);
    eax = *((ebp - 8));
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 4));
    *((ebp - 8)) = eax;
    edx = *((ebp - 0xc));
    eax = ebp - 4;
    *(eax) += edx;
label_0:
    eax = *((ebp - 8));
    edx = *((ebp - 4));
    ecx = *((ebp + 8));
    *(ecx) = eax;
    *((ecx + 4)) = edx;
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x8048464 */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    int32_t var_10h;
    void (*0x8048472)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x11e2;
    init ();
    eax = ebx - 0xe0;
    edx = ebx - 0xe0;
    *((ebp - 0x10)) = eax;
    eax -= edx;
    esi = 0;
    eax >>= 2;
    if (esi >= eax) {
        goto label_0;
    }
    edi = edx;
    do {
        uint32_t (*edx + esi*4)() ();
        ecx = *((ebp - 0x10));
        ecx -= edi;
        esi++;
        ecx >>= 2;
        edx = edi;
    } while (esi < ecx);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x80483f5 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_10h;
    int32_t var_4h;
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    printf ("Enter number: ");
    scanf (0x8048553, ebp - 4);
    eax = ebp - 0x10;
    twofib (eax, *((ebp - 4)));
    printf ("Fibonacci of %d is %d\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x80482e4 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x80482c4 */
#include <stdint.h>
 
void scanf (void) {
    scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe @ 0x8048520 */
#include <stdint.h>
 
uint32_t fini (void) {
    /* [13] -r-x section size 26 named .fini */
    eax = void (*0x8048529)(uint32_t) (ebx);
    ebx += 0x112b;
    _do_global_dtors_aux (eax);
    return eax;
}

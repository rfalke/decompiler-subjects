/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe @ 0x80482c0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 456 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe @ 0x80482a0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe @ 0x80482e4 */
#include <stdint.h>
 
void call_gmon_start (void) {
    void (*0x80482ed)(uint32_t) (ebx);
    ebx += 0x12af;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe @ 0x8048308 */
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
/* SUBJECTS/from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe @ 0x804833c */
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
/* SUBJECTS/from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe @ 0x8048464 */
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
/* SUBJECTS/from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe @ 0x8048420 */
#include <stdint.h>
 
uint32_t libc_csu_fini (void) {
    void (*0x804842b)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x1171;
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
/* SUBJECTS/from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe @ 0x8048278 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe @ 0x80483cc */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    int32_t var_10h;
    void (*0x80483da)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x11c2;
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
/* SUBJECTS/from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe @ 0x8048368 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_8h;
    int32_t var_4h;
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    *((ebp - 8)) = 0;
    *((ebp - 4)) = 0;
    do {
        if (*((ebp - 4)) > 4) {
            goto label_0;
        }
        eax = *((ebp - 4));
        eax += obj.gca;
        edx = *(eax);
        eax = ebp - 8;
        *(eax) += edx;
        eax = ebp - 4;
        *(eax)++;
    } while (1);
label_0:
    printf ("Sum is %d\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe @ 0x8048488 */
#include <stdint.h>
 
uint32_t fini (void) {
    /* [13] -r-x section size 26 named .fini */
    eax = void (*0x8048491)(uint32_t) (ebx);
    ebx += 0x110b;
    _do_global_dtors_aux (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe @ 0x80482b0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}

/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe @ 0x80482c0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 404 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe @ 0x80482a0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe @ 0x80482e4 */
#include <stdint.h>
 
uint32_t call_gmon_start (void) {
    int32_t var_4h;
    eax = void (*0x80482ed)(uint32_t) (ebx);
    ebx += 0x1277;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe @ 0x8048308 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.1) != 0) {
        goto label_0;
    }
    eax = *(obj.p.0);
    edx = *(eax);
    if (edx == 0) {
        goto label_1;
    }
    do {
        eax += 4;
        *(obj.p.0) = eax;
        void (*edx)() ();
        eax = *(obj.p.0);
        edx = *(eax);
    } while (edx != 0);
label_1:
    *(obj.completed.1) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe @ 0x8048344 */
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
/* SUBJECTS/from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe @ 0x8048430 */
#include <stdint.h>
 
void do_global_ctors_aux (void) {
    eax = .ctors;
    ebx = .ctors;
    if (eax == -1) {
        goto label_0;
    }
    do {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    } while (eax != -1);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe @ 0x80483ec */
#include <stdint.h>
 
uint32_t libc_csu_fini (void) {
    void (*0x80483f6)(uint32_t, uint32_t) (ebx, esi);
    ebx += 0x116e;
    ecx = ebx - 0xe0;
    eax = ebx - 0xe0;
    ecx -= eax;
    ecx >>= 2;
    esi = ecx - 1;
    if (ecx != 0) {
        goto label_1;
    }
label_0:
    _fini ();
    return eax;
    do {
label_1:
        uint32_t (*ebx + esi*4 - 0xe0)() ();
        edx = esi;
        esi--;
    } while (edx != 0);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe @ 0x8048278 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe @ 0x80483a4 */
#include <stdint.h>
 
void libc_csu_init (void) {
    void (*0x80483b2)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x11b2;
    init ();
    edx = ebx - 0xe0;
    ecx = ebx - 0xe0;
    edx -= ecx;
    esi = 0;
    edx >>= 2;
    if (esi >= edx) {
        goto label_0;
    }
    edi = edx;
    do {
        uint32_t (*ebx + esi*4 - 0xe0)() ();
        esi++;
    } while (esi < edi);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe @ 0x8048370 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_4h;
    eax = 0;
    edx = 0x87654321;
    dl = 0x12;
    dh = 0x34;
    eax = edx;
    *((ebp - 4)) = eax;
    printf ("%08X\n");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe @ 0x80482b0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe @ 0x8048454 */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h;
    /* [13] -r-x section size 27 named .fini */
    void (*0x804845d)(uint32_t) (ebx);
    ebx += 0x1107;
    _do_global_dtors_aux (edx);
    ebx = *((ebp - 4));
}

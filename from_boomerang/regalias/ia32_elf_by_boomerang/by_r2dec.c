/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x80482a0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 496 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x8048278 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x80482c4 */
#include <stdint.h>
 
uint32_t call_gmon_start (void) {
    int32_t var_4h;
    eax = void (*0x80482cd)(uint32_t) (ebx);
    ebx += 0x12db;
    eax = *((ebx + 0x14));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x80482f0 */
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
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x8048330 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        _comment (obj.__JCR_LIST__);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x8048460 */
#include <stdint.h>
 
void do_global_ctors_aux (void) {
    ebx = .ctors;
    eax = .ctors;
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
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x8048400 */
#include <stdint.h>
 
uint32_t libc_csu_fini (void) {
    int32_t var_4h;
    _i686_get_pc_thunk_bx (ebx);
    ebx += 0x119a;
    *((esp + 4)) = esi;
    eax = ebx - 0xec;
    edx = ebx - 0xec;
    eax -= edx;
    eax >>= 2;
    esi = eax - 1;
    if (eax != 0) {
        goto label_1;
    }
label_0:
    _fini ();
    ebx = *(esp);
    esi = *((esp + 4));
    return eax;
    do {
label_1:
        uint32_t (*ebx + esi*4 - 0xec)() ();
        eax = esi;
        esi--;
    } while (eax != 0);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x8048250 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x80483a0 */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    esi = 0;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x11f8;
    init ();
    edx = ebx - 0xec;
    eax = ebx - 0xec;
    edx -= eax;
    edx >>= 2;
    if (esi >= edx) {
        goto label_0;
    }
    edi = edx;
    do {
        uint32_t (*ebx + esi*4 - 0xec)() ();
        esi++;
    } while (esi < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x8048364 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_4h;
    int32_t var_sp_4h;
    eax = 0;
    eax = 0x87654321;
    al = 0x12;
    ah = 0x34;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    *((esp + 4)) = eax;
    printf ("%08X\n");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x8048288 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x8048490 */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h;
    /* [13] -r-x section size 27 named .fini */
    void (*0x8048499)(uint32_t) (ebx);
    ebx += 0x110f;
    _do_global_dtors_aux (edx);
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe @ 0x8048450 */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}

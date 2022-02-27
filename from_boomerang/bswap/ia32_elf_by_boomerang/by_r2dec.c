/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x80482c0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 424 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x80482a0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x80482e4 */
#include <stdint.h>
 
uint32_t call_gmon_start (void) {
    int32_t var_4h;
    eax = void (*0x80482ed)(uint32_t) (ebx);
    ebx += 0x1293;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x8048308 */
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
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x8048344 */
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
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x8048444 */
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
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x8048370 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t bswap (int32_t arg_8h) {
    eax = *((ebp + 8));
    eax = SWAP32 (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x8048400 */
#include <stdint.h>
 
uint32_t libc_csu_fini (void) {
    void (*0x804840a)(uint32_t, uint32_t) (ebx, esi);
    ebx += 0x1176;
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
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x8048278 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x80483b8 */
#include <stdint.h>
 
void libc_csu_init (void) {
    void (*0x80483c6)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x11ba;
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
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x804837a */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_4h;
    eax = 0;
    eax = bswap (0x12345678);
    *((ebp - 4)) = eax;
    printf ("Output is %x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x80482b0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe @ 0x8048468 */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h;
    /* [13] -r-x section size 27 named .fini */
    void (*0x8048471)(uint32_t) (ebx);
    ebx += 0x110f;
    _do_global_dtors_aux (edx);
    ebx = *((ebp - 4));
}

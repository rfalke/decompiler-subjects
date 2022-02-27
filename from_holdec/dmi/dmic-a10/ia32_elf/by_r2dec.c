/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x80482e0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [14] -r-x section size 402 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x80482c0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x8048320 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804a017;
    eax -= obj.completed.6532;
    if (eax > 6) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6532);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x8048350 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6532;
    eax -= obj.completed.6532;
    eax >>= 2;
    edx = eax;
    edx >>= 0x1f;
    eax += edx;
    eax >>= 1;
    if (eax != 0) {
        edx = 0;
        if (edx == 0) {
            goto label_0;
        }
        void (*edx)(uint32_t, uint32_t) (obj.completed.6532, eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x8048390 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x80483b0 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x8048350)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x8048470 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x8048474 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1b83;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x80483db */
#include <stdint.h>
 
int32_t sum5 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    edx = *((ebp + 8));
    eax = *((ebp + 0xc));
    edx += eax;
    eax = *((ebp + 0x10));
    edx += eax;
    eax = *((ebp + 0x14));
    edx += eax;
    eax = *((ebp + 0x18));
    eax += edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x8048410 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1be7;
    ebp = *((esp + 0x20));
    esi = ebx - 0xf4;
    init ();
    eax = ebx - 0xf8;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf8)(uint32_t, uint32_t*) (ebp, *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x80483f7 */
#include <stdint.h>
 
int32_t main (void) {
    sum5 (1, 2, 3, 4, 5);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x804828c */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1d6b;
    eax = *((ebx - 4));
    if (eax != 0) {
        _plt_got ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/dmic-a10/ia32_elf/subject.exe @ 0x80482d0 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}

/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/loop/ia32_elf_by_boomerang/subject.exe @ 0x8048280 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 384 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym._init, loc.gcc2_compiled._1, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/loop/ia32_elf_by_boomerang/subject.exe @ 0x8048258 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/loop/ia32_elf_by_boomerang/subject.exe @ 0x80482a4 */
#include <stdint.h>
 
int32_t loc_gcc2_compiled_ (void) {
    int32_t var_4h;
    void (*0x80482ae)() ();
    ebx += 0x126a;
    eax = *((ebx + 0x14));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/loop/ia32_elf_by_boomerang/subject.exe @ 0x80482d0 */
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
    eax = 0;
    if (eax != 0) {
        _stab (obj.__EH_FRAME_BEGIN__);
    }
    *(obj.completed.1) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/loop/ia32_elf_by_boomerang/subject.exe @ 0x8048330 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    eax = 0;
    eax = void (*0x804833d)() ();
    edx += 0x11db;
    if (eax != 0) {
        _stab (edx, 0x8049534, 0);
    }
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        _stab (obj.__JCR_LIST__);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/loop/ia32_elf_by_boomerang/subject.exe @ 0x80483d0 */
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
/* SUBJECTS/from_boomerang/loop/ia32_elf_by_boomerang/subject.exe @ 0x8048230 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 24 named .init */
    gcc2_compiled_ ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/loop/ia32_elf_by_boomerang/subject.exe @ 0x8048390 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_4h;
    int32_t var_sp_4h;
    eax = 0;
    *((ebp - 4)) = 0;
    do {
        if (*((ebp - 4)) > 9) {
        } else {
            eax = ebp - 4;
            *(eax)++;
        }
    } while (1);
    eax = *((ebp - 4));
    *((esp + 4)) = eax;
    printf (0x8048428);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/loop/ia32_elf_by_boomerang/subject.exe @ 0x8048268 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/loop/ia32_elf_by_boomerang/subject.exe @ 0x8048400 */
#include <stdint.h>
 
void loc_gcc2_compiled_1 (void) {
    int32_t var_4h;
    /* [13] -r-x section size 30 named .fini */
    void (*0x804840a)() ();
    ebx += 0x110e;
    _do_global_dtors_aux ();
    ebx = *((ebp - 4));
}

/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_linux/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 912 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym._init, loc.gcc2_compiled._1, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_linux/subject.exe @ 0x80482d4 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_linux/subject.exe @ 0x8048324 */
#include <stdint.h>
 
int32_t loc_gcc2_compiled_ (void) {
    int32_t var_4h;
    void (*0x804832e)() ();
    ebx += 0x150a;
    eax = *((ebx + 0x18));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_linux/subject.exe @ 0x8048350 */
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
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_linux/subject.exe @ 0x80483b0 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    eax = 0;
    eax = void (*0x80483bd)() ();
    edx += 0x147b;
    if (eax != 0) {
        _stab (edx, 0x804985c, 0);
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
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_linux/subject.exe @ 0x8048660 */
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
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_linux/subject.exe @ 0x804829c */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 24 named .init */
    gcc2_compiled_ ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_linux/subject.exe @ 0x8048410 */
#include <stdint.h>
 
int32_t main (void) {
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_bp_4h;
    size_t size;
    size_t * nitems;
    FILE * stream;
    edx = ebp - 8;
    ebx = 5;
    scanf (ebx, edx);
    edx = ebp - 0xc;
    scanf (0x80486b8, edx);
    if (ebx == *((ebp - 8))) {
        goto label_2;
    }
label_0:
    eax = stdout;
    fwrite ("Not Equal\n", 1, 0xa);
    eax = *((ebp - 8));
label_1:
    if (ebx > eax) {
        eax = stdout;
        fwrite ("Greater\n", 1, 8);
        if (ebx > *((ebp - 8))) {
            goto label_3;
        }
    }
    eax = stdout;
    fwrite ("Less or Equal\n", 1, 0xe);
    if (ebx >= *((ebp - 8))) {
label_3:
        eax = stdout;
        fwrite ("Greater or Equal\n", 1, 0x11);
        if (ebx >= *((ebp - 8))) {
            goto label_4;
        }
    }
    eax = stdout;
    fwrite ("Less\n", 1, 5);
label_4:
    if (ebx > *((ebp - 0xc))) {
        eax = stdout;
        fwrite ("Greater Unsigned\n", 1, 0x11);
        if (ebx > *((ebp - 0xc))) {
            goto label_5;
        }
    }
    eax = stdout;
    fwrite ("Less or Equal Unsigned\n", 1, 0x17);
    if (ebx >= *((ebp - 0xc))) {
label_5:
        eax = stdout;
        fwrite ("Carry Clear\n", 1, 0xc);
        if (ebx >= *((ebp - 0xc))) {
            goto label_6;
        }
    }
    eax = stdout;
    fwrite ("Carry Set\n", 1, 0xa);
label_6:
    eax = *((ebp - 8));
    if (ebx >= eax) {
        eax = stdout;
        fwrite ("Minus\n", 1, 6);
        eax = *((ebp - 8));
    }
    while (1) {
        ebx = *((ebp - 4));
        return eax;
        eax = stdout;
        fwrite ("Plus\n", 1, 5);
    }
label_2:
    eax = stdout;
    fwrite ("Equal\n", 1, 6);
    eax = *((ebp - 8));
    if (ebx != eax) {
        goto label_0;
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_linux/subject.exe @ 0x8048690 */
#include <stdint.h>
 
void loc_gcc2_compiled_1 (void) {
    int32_t var_4h;
    /* [13] -r-x section size 30 named .fini */
    void (*0x804869a)() ();
    ebx += 0x119e;
    _do_global_dtors_aux ();
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_linux/subject.exe @ 0x80482c4 */
#include <stdint.h>
 
void scanf (void) {
    scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_linux/subject.exe @ 0x80482e4 */
#include <stdint.h>
 
void fwrite (void) {
    fwrite ();
}

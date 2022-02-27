/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x8048390 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 672 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x8048344 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x80483b4 */
#include <stdint.h>
 
uint32_t call_gmon_start (void) {
    int32_t var_4h;
    eax = void (*0x80483bd)(uint32_t) (ebx);
    ebx += 0x138b;
    eax = *((ebx + 0x24));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x80483e0 */
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
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x8048420 */
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
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x8048600 */
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
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x80485a0 */
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
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x80482fc */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x8048454 */
#include <stdint.h>
 
int32_t chomp (char * s, char ** arg_ch, file* arg_10h) {
    char * var_bp_8h;
    char * var_bp_4h;
    char ** size;
    file* stream;
    eax = *((ebp + 0x10));
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax = fgets (eax, eax, eax);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) != 0) {
        eax = *((ebp - 4));
        eax = strchr (eax, 0xa);
        *((ebp - 8)) = eax;
        if (*((ebp - 8)) == 0) {
            goto label_0;
        }
        eax = *((ebp - 8));
        *(eax) = 0;
    }
label_0:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x8048334 */
#include <stdint.h>
 
void fgets (void) {
    fgets ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x8048324 */
#include <stdint.h>
 
void strchr (void) {
    strchr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x8048540 */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    esi = 0;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x11f8;
    _init ();
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
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x80484a3 */
#include <stdint.h>
 
int32_t main (char ** argv, char ** filename) {
    int32_t var_41ch;
    int32_t var_418h;
    file* stream;
    char ** mode;
    file* var_8h;
    eax = 0;
    if (*((ebp + 8)) <= 1) {
        *((ebp - 0x41c)) = 1;
    } else {
        eax = *((ebp + 0xc));
        eax += 4;
        eax = *(eax);
        eax = fopen (eax, 0x8048654);
        *((ebp - 0xc)) = eax;
        if (*((ebp - 0xc)) == 0) {
            *((ebp - 0x41c)) = 1;
        } else {
            eax = *((ebp - 0xc));
            eax = ebp - 0x418;
            eax = chomp (eax, 0x400, eax);
            if (eax != 0) {
                eax = ebp - 0x418;
                *((esp + 4)) = eax;
                printf (0x8048656);
            }
            eax = *((ebp - 0xc));
            fclose (eax);
        }
    }
    eax = *((ebp - 0x41c));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x8048630 */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h;
    /* [13] -r-x section size 27 named .fini */
    void (*0x8048639)(uint32_t) (ebx);
    ebx += 0x110f;
    _do_global_dtors_aux (edx);
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x80485f0 */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x8048354 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x8048364 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang/subject.exe @ 0x8048374 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}

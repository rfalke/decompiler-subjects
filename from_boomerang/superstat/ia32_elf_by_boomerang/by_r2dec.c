/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x80482ac */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 560 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x804828c */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x80482d0 */
#include <stdint.h>
 
int32_t call_gmon_start (void) {
    int32_t var_4h;
    void (*0x80482da)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x1392;
    eax = *((ebx + 0x18));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x80482f4 */
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
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x8048330 */
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
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x80484b8 */
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
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x8048484 */
#include <stdint.h>
 
int32_t libc_csu_fini (void) {
    int32_t var_4h;
    eax = .data;
    eax -= loc.__fini_array_end;
    eax >>= 2;
    ebx = eax - 1;
    if (eax != 0) {
        goto label_1;
    }
label_0:
    ebx = *((ebp - 4));
    void (*0x80484dc)() ();
    do {
label_1:
        uint32_t (*.data)() ();
        edx = ebx;
        ebx--;
    } while (edx != 0);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x8048254 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x8048454 */
#include <stdint.h>
 
int32_t libc_csu_init (void) {
    init (ebx, esi);
    eax = .data;
    eax -= loc.__fini_array_end;
    eax >>= 2;
    ebx = 0;
    if (ebx >= eax) {
        goto label_0;
    }
    esi = eax;
    do {
        uint32_t (*.data)() ();
        ebx++;
    } while (ebx < esi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x804835c */
#include <stdint.h>
 
int32_t main (char ** envp) {
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_28h;
    int32_t var_20h;
    edx = ebp - 0x68;
    eax = *((ebp + 0xc));
    eax = xstat ();
    printf ("res: %i\n");
    printf (0x804853a);
    printf ("ino: %i\n");
    printf ("mode: %i\n");
    printf ("nlink: %i\n");
    printf ("uid: %i\n");
    printf ("gid: %i\n");
    printf ("rdev: %i\n");
    printf (0x8048546);
    printf ("blksize: %i\n");
    printf ("blocks: %i\n");
    printf ("atime: %i\n");
    printf ("mtime: %i\n");
    eax = printf ("ctime: %i\n");
    eax = 0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x804827c */
#include <stdint.h>
 
void xstat (void) {
    xstat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x804829c */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ia32_elf_by_boomerang/subject.exe @ 0x80484dc */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h_2;
    /* [13] -r-x section size 27 named .fini */
    void (*0x80484e6)(uint32_t, uint32_t) (edx, ebx);
    ebx += 0x1186;
    _do_global_dtors_aux ();
    ebx = *((ebp - 4));
}

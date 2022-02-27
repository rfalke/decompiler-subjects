/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048380 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 688 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048350 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x80483a4 */
#include <stdint.h>
 
uint32_t call_gmon_start (void) {
    int32_t var_4h;
    eax = void (*0x80483ad)(uint32_t) (ebx);
    ebx += 0x1397;
    eax = *((ebx + 0x24));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x80483d0 */
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
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048410 */
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
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048600 */
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
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x80485a0 */
#include <stdint.h>
 
uint32_t libc_csu_fini (void) {
    int32_t var_4h;
    _i686_get_pc_thunk_bx (ebx);
    ebx += 0x1196;
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
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x80482f8 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x80484f0 */
#include <stdint.h>
 
uint32_t chomp (char * s, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t size;
    FILE * stream;
    *((ebp - 4)) = ebx;
    edx = *((ebp + 0xc));
    ecx = *((ebp + 0x10));
    edx = *((ebp + 8));
    eax = fgets (edx, edx, ecx);
    ebx = eax;
    if (eax != 0) {
        edx = 0xa;
        eax = strchr (eax, edx);
        if (eax == 0) {
            goto label_0;
        }
        *(eax) = 0;
    }
label_0:
    eax = ebx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void fgets (void) {
    fgets ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048320 */
#include <stdint.h>
 
void strchr (void) {
    strchr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048540 */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    esi = 0;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x11f4;
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
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048450 */
#include <stdint.h>
 
int32_t main (char ** argv, char ** envp) {
    char * s;
    int32_t var_8h;
    int32_t var_4h;
    char ** size;
    file* stream;
    *((ebp - 8)) = ebx;
    *((ebp - 4)) = esi;
    if (*((ebp + 8)) <= 1) {
        goto label_0;
    }
    ecx = *((ebp + 0xc));
    eax = 0x8048654;
    edx = *((ecx + 4));
    eax = fopen (edx, eax);
    ebx = eax;
    eax = 1;
    if (ebx == 0) {
        goto label_1;
    }
    edx = 0x400;
    esi = ebp - 0x408;
    eax = fgets (esi, edx, ebx);
    if (eax != 0) {
        ecx = 0xa;
        eax = strchr (eax, ecx);
        if (eax != 0) {
            *(eax) = 0;
        }
        puts (esi);
    }
    fclose (ebx);
    do {
label_1:
        ebx = *((ebp - 8));
        esi = *((ebp - 4));
        return eax;
label_0:
        eax = 1;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048370 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048330 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048360 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x8048630 */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h;
    /* [13] -r-x section size 27 named .fini */
    void (*0x8048639)(uint32_t) (ebx);
    ebx += 0x110b;
    _do_global_dtors_aux (edx);
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe @ 0x80485f0 */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}

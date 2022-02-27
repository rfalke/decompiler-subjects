/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x8048624 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 820 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x80485c4 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x804853c */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x8048648 */
#include <stdint.h>
 
void call_gmon_start (void) {
    void (*0x8048651)(uint32_t) (ebx);
    ebx += 0x1463;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x80486a0 */
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
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x8048934 */
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
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x8048958 */
#include <stdint.h>
 
uint32_t fini (void) {
    /* [13] -r-x section size 26 named .fini */
    eax = void (*0x8048961)(uint32_t) (ebx);
    ebx += 0x1153;
    _do_global_dtors_aux (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x804866c */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(loc.__bss_start) == 0) {
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
    *(loc.__bss_start) = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x80488c0 */
#include <stdint.h>
 
uint32_t libc_csu_fini (void) {
    void (*0x80488cb)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x11e9;
    eax = ebx - 0xfc;
    edi = ebx - 0xfc;
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
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x804886c */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    int32_t var_10h;
    void (*0x804887a)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x123a;
    _init ();
    eax = ebx - 0xfc;
    edx = ebx - 0xfc;
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
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x8048824 */
#include <stdint.h>
 
int32_t main (char ** argv, char ** envp) {
    int32_t var_4h;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    f_setarg ();
    f_setsig ();
    f_init ();
    atexit (sym.imp.f_exit);
    MAIN_ ();
    return exit (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x8048604 */
#include <stdint.h>
 
void f_setarg (void) {
    f_setarg ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x80485e4 */
#include <stdint.h>
 
void f_setsig (void) {
    f_setsig ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x80485d4 */
#include <stdint.h>
 
void f_init (void) {
    f_init ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x8048904 */
#include <stdint.h>
 
uint32_t atexit (int32_t arg_8h) {
    int32_t var_4h;
    eax = void (*0x804890d)(uint32_t) (ebx);
    ebx += 0x11a7;
    edx = *((ebx - 8));
    eax = 0;
    if (edx != 0) {
        eax = *(edx);
    }
    cxa_atexit ();
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x80485a4 */
#include <stdint.h>
 
void cxa_atexit (void) {
    cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x80486cc */
#include <stdint.h>
 
uint32_t MAIN_ (void) {
    int32_t var_ch;
    uint32_t var_4h;
    s_wsle ();
    do_lio ();
    e_wsle ();
    s_rsle ();
    eax = ebp - 4;
    do_lio ();
    e_rsle ();
    *((ebp - 0xc)) = 0x8048760;
    if (*((ebp - 4)) == 2) {
        *((ebp - 0xc)) = 0x8048793;
    }
    if (*((ebp - 4)) == 3) {
        *((ebp - 0xc)) = 0x80487c3;
    }
    if (*((ebp - 4)) == 4) {
        *((ebp - 0xc)) = 0x80487f3;
    }
    eax = *((ebp - 0xc));
    return void (*eax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x80485f4 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x8048564 */
#include <stdint.h>
 
void do_lio (void) {
    do_lio ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x8048574 */
#include <stdint.h>
 
void e_wsle (void) {
    e_wsle ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x8048584 */
#include <stdint.h>
 
void f_exit (void) {
    f_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x8048594 */
#include <stdint.h>
 
void s_rsle (void) {
    s_rsle ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x80485b4 */
#include <stdint.h>
 
void e_rsle (void) {
    e_rsle ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe @ 0x8048614 */
#include <stdint.h>
 
void s_wsle (void) {
    s_wsle ();
}

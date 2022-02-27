/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x80482d8 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 388 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x80482a8 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x80482fc */
#include <stdint.h>
 
void call_gmon_start (void) {
    void (*0x8048306)(uint32_t, uint32_t) (ecx, ebx);
    ebx += 0x126e;
    edx = *((ebx - 4));
    if (edx != 0) {
        gmon_start_ ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x80482c8 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x8048320 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.4583) == 0) {
        goto label_0;
    }
    goto label_1;
    do {
        eax += 4;
        *(obj.p.4582) = eax;
        void (*edx)() ();
label_0:
        eax = *(obj.p.4582);
        edx = *(eax);
    } while (edx != 0);
    *(obj.completed.4583) = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x8048354 */
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
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x8048434 */
#include <stdint.h>
 
void do_global_ctors_aux (void) {
    eax = .ctors;
    if (eax == -1) {
        goto label_0;
    }
    ebx = .ctors;
    do {
        void (*eax)() ();
        eax = *((ebx - 4));
        ebx -= 4;
    } while (eax != -1);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x804842c */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x8048280 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x804837c */
#include <stdint.h>
 
int32_t cparam (char ** arg_8h, int32_t arg_ch) {
    if (*((ebp + 8)) < 0) {
        *((ebp + 0xc)) = 0;
    }
    eax = *((ebp + 0xc));
    eax += *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x80483dc */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    uint32_t var_10h;
    void (*0x80483ea)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x118a;
    init ();
    eax = ebx - 0xe0;
    edx = ebx - 0xe0;
    eax -= edx;
    eax >>= 2;
    *((ebp - 0x10)) = eax;
    if (eax == 0) {
        return eax;
    }
    edi = 0;
    esi = edx;
    do {
        uint32_t (*esi)() ();
        edi++;
        esi += 4;
    } while (edi < *((ebp - 0x10)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x8048394 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    eax = *((ebp + 8));
    eax -= 3;
    eax = cparam (eax, 2);
    printf ("Result is %d\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x80482b8 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/ia32_elf_by_boomerang/subject.exe @ 0x804845c */
#include <stdint.h>
 
void fini (void) {
    /* [13] -r-x section size 26 named .fini */
    void (*0x8048466)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x110e;
    _do_global_dtors_aux ();
}

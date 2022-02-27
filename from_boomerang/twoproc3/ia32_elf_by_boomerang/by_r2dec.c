/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x80483d0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 516 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x8048394 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x804835c */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x80483f4 */
#include <stdint.h>
 
void call_gmon_start (void) {
    void (*0x80483fe)(uint32_t, uint32_t) (ecx, ebx);
    ebx += 0x12ea;
    edx = *((ebx - 4));
    if (edx != 0) {
        gmon_start_ ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x80483b4 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x8048450 */
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
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x80485a0 */
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
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x80485d4 */
#include <stdint.h>
 
void fini (void) {
    /* [13] -r-x section size 26 named .fini */
    void (*0x80485de)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x110a;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x8048420 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(loc.__bss_start) == 0) {
        goto label_0;
    }
    goto label_1;
    do {
        eax += 4;
        *(obj.p.4462) = eax;
        void (*edx)() ();
label_0:
        eax = *(obj.p.4462);
        edx = *(eax);
    } while (edx != 0);
    *(loc.__bss_start) = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x8048540 */
#include <stdint.h>
 
uint32_t libc_csu_fini (void) {
    uint32_t var_10h;
    void (*0x804854e)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x119a;
    eax = ebx - 0xe8;
    edx = ebx - 0xe8;
    eax -= edx;
    eax >>= 2;
    *((ebp - 0x10)) = eax;
    eax--;
    if (eax == -1) {
        goto label_0;
    }
    esi = edx + eax*4;
    edi = 0;
    do {
        uint32_t (*esi)() ();
        edi++;
        esi -= 4;
    } while (*((ebp - 0x10)) != edi);
label_0:
    _fini ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x8048474 */
#include <stdint.h>
 
int32_t getDevice (int32_t arg_8h) {
    eax = *((ebp + 8));
    eax = *((eax + 0x18));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x80484d0 */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    uint32_t var_10h;
    void (*0x80484de)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x120a;
    _init ();
    eax = ebx - 0xe8;
    edx = ebx - 0xe8;
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
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x804847f */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_4h;
    int32_t var_sp_4h;
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    eax = xf86GetPciVideoInfo ();
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax = *(eax);
    eax = getDevice (eax);
    *((esp + 4)) = eax;
    printf (0x80485f8);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x8048384 */
#include <stdint.h>
 
void xf86GetPciVideoInfo (void) {
    xf86GetPciVideoInfo ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe @ 0x80483a4 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}

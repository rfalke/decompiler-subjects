/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x80490f0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049127 ();
    ebx += 0x2efc;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2df0, ebx - 0x2d90);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049127 */
#include <stdint.h>
 
void fcn_08049127 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049150 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = obj.completed.6844;
    if (eax != obj.completed.6844) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6844);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049190 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6844;
    eax -= obj.completed.6844;
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
        void (*edx)(uint32_t, uint32_t) (obj.completed.6844, eax);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x80491d0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    __asm ("endbr32");
    if (*(obj.completed.6844) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6844) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049200 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049270 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049140 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049278 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2d7b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049210 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2de3;
    ebp = *((esp + 0x28));
    _init ();
    esi = ebx - 0xf0;
    eax = ebx - 0xf4;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf4)(uint32_t*, uint32_t*) (*((esp + 0x2c)), *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049130 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049060 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_4h;
    /* [13] -r-x section size 533 named .text */
    ecx = esp + 4;
    eax = 0x11223344;
    ebx = 0x55667788;
    eax = ebx;
    printf ("lea1 should=0x55667788 is=0x%08x\n");
    eax = 0x11223344;
    ebx = 0x55667788;
    ax = ebx;
    printf ("lea2 should=0x11227788 is=0x%08x\n");
    eax = 0x11223344;
    ebx = 0x55667788;
    eax = bx;
    printf ("lea3 should=0x00007788 is=0x%08x\n");
    eax = 0x11223344;
    ebx = 0x55667788;
    ax = bx;
    eax = printf ("lea4 should=0x11227788 is=0x%08x\n");
    ecx = *((ebp - 4));
    eax = 0;
    esp = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_lea/ia32_elf/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2ff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x8049060 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    /* [13] -r-x section size 501 named .text */
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049097 ();
    ebx += 0x2f8c;
    eax = main;
    return libc_start_main (eax, esi, ecx, ebx - 0x2e10, ebx - 0x2db0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x8049097 */
#include <stdint.h>
 
void fcn_08049097 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x80490c0 */
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
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x8049100 */
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
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x8049140 */
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
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x8049170 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x8049250 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x80490b0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x8049258 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2d9b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x80491f0 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2e03;
    ebp = *((esp + 0x28));
    _init ();
    esi = ebx - 0xf4;
    eax = ebx - 0xf8;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf8)(uint32_t*, uint32_t*) (*((esp + 0x2c)), *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x80490a0 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x80491b0 */
#include <stdint.h>
 
uint32_t dbg_main (void) {
    /* int main(); */
    void (*0x80491b8)() ();
    ebx += 0x2e48;
    esi = *((ebx - 4));
    eax = ebx - 0x1fe7;
    printf (eax);
    *(esi)++;
    eax = dbg_a_func ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x8049180 */
#include <stdint.h>
 
int32_t dbg_a_func (void) {
    /* void a_func(); */
    void (*0x8049189)() ();
    ebx += 0x2e77;
    eax = *((ebx - 4));
    ecx = ebx - 0x1ff4;
    printf (ecx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/ia32_elf_clang_O2_unlimited-pic/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2ff3;
    eax = *((ebx - 8));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}

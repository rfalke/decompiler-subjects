/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x80490b0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_080490e7 ();
    ebx += 0x2f3c;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2e30, ebx - 0x2dd0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x80490e7 */
#include <stdint.h>
 
void fcn_080490e7 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x8049110 */
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
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x8049150 */
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
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x8049190 */
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
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x80491c0 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x8049230 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x8049100 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x8049238 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2dbb;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x80491d0 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2e23;
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
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x80490f0 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x8049060 */
#include <stdint.h>
 
int32_t main (char ** argv, char ** envp) {
    /* [13] -r-x section size 469 named .text */
    if (*((esp + 0x14)) == 2) {
        eax = *((esp + 0x18));
        ebx = *((esp + 0x18));
        eax = *((eax + 4));
        if (*(eax) != 0) {
            eax = *((ebx + 4));
            dl = *((eax + 1));
            dl -= 0x61;
            if (dl == 0) {
                goto label_0;
            }
            *(esp) = "no 'a';
        }
    } else {
    }
    do {
        eax = puts ("not enough args or too small");
        eax = 0;
        return eax;
label_0:
        *(esp) = "got an 'a';
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x8049000 */
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
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/ir_example/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}

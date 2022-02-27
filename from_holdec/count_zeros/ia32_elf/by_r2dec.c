/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x80490f0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049127 ();
    ebx += 0x2efc;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2db0, ebx - 0x2d50);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x8049127 */
#include <stdint.h>
 
void fcn_08049127 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x8049150 */
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
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x8049190 */
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
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x80491d0 */
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
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x8049200 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x80492b0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x8049140 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x80492b8 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2d3b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x8049210 */
#include <stdint.h>
 
int32_t count_zeros (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    if (eax <= 0) {
        goto label_0;
    }
    edx = *((esp + 8));
    ecx = edx + eax*4;
    eax = 0;
    do {
        ebx = *(edx);
        ebx = -ebx;
        eax += 0xffffffff;
        edx += 4;
    } while (edx != ecx);
    eax = -eax;
    return eax;
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x8049250 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2da3;
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
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x8049130 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x8049060 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    /* [13] -r-x section size 597 named .text */
    ecx = esp + 4;
    eax = ebp - 0x2c;
    *((ebp - 0x2c)) = 0;
    *((ebp - 0x28)) = 1;
    *((ebp - 0x24)) = 2;
    *((ebp - 0x20)) = 3;
    *((ebp - 0x1c)) = 0;
    *((ebp - 0x18)) = 1;
    *((ebp - 0x14)) = 2;
    *((ebp - 0x10)) = 0;
    *((ebp - 0xc)) = 3;
    eax = count_zeros (4, eax, ecx, ebp);
    printf ("count_zeros: %d\n");
    eax = ebp - 0x1c;
    eax = count_zeros (5, eax);
    eax = printf ("count_zeros: %d\n");
    ecx = *((ebp - 4));
    eax = 0;
    esp = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/count_zeros/ia32_elf/subject.exe @ 0x8049000 */
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

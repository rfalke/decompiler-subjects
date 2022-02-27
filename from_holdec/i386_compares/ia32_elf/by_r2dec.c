/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x80491d0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049207 ();
    ebx += 0x2e1c;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2cd0, ebx - 0x2c70);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049207 */
#include <stdint.h>
 
void fcn_08049207 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049230 */
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
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049270 */
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
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x80492b0 */
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
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x80492e0 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049390 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049220 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049398 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2c5b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x80492fb */
#include <stdint.h>
 
uint32_t do_signed (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = *((esp + 8));
    eax = 0;
    __asm ("sets al");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049330 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2cc3;
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
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049210 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049060 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_24h;
    uint32_t var_1dh;
    int32_t var_1ch;
    int32_t var_10h;
    /* [13] -r-x section size 821 named .text */
    ecx = esp + 4;
    esi = 0;
label_0:
    eax = do_cmp_const (esi, ecx, ebx, esi, edi, ebp);
    ebx = eax;
    eax = do_signed_const (esi);
    edx = eax;
    eax = esi;
    *((ebp - 0x1d)) = al;
    al = (al <= 9) ? 1 : 0;
    eax = (int32_t) al;
    edi = eax;
    if (ebx != eax) {
        *((ebp - 0x1c)) = edx;
        printf ("CONST C and setl differ: %3d = 0x%02x  ->  ");
        printf ("x<10 = %d %d\n");
        edx = *((ebp - 0x1c));
    }
    *((ebp - 0x1c)) = edx;
    if (ebx != edx) {
        printf ("CONST %3d = 0x%02x  ->  ");
        printf ("x<10 = %d %d ");
        edx = *((ebp - 0x1c));
        printf ("x-10<0 =%d\n");
    }
    ebx = 0;
    do {
        eax = do_cmp (esi, ebx);
        edi = eax;
        eax = do_signed (esi, ebx);
        ecx = 0;
        cl = (*((ebp - 0x1d)) < bl) ? 1 : 0;
        edx = eax;
        *((ebp - 0x1c)) = ecx;
        if (edi != ecx) {
            *((ebp - 0x24)) = eax;
            printf ("C and setl differ: %3d = 0x%02x %3d = 0x%02x  ->  ");
            ecx = *((ebp - 0x1c));
            printf ("x<y = %d %d\n");
            edx = *((ebp - 0x24));
        }
        *((ebp - 0x1c)) = edx;
        if (edi != edx) {
            printf ("%3d = 0x%02x %3d = 0x%02x  ->  ");
            printf ("x<y = %d ");
            edx = *((ebp - 0x1c));
            eax = printf ("x-y<0 =%d\n");
        }
        ebx++;
    } while (ebx != 0x100);
    esi++;
    if (esi != 0x100) {
        goto label_0;
    }
    esp = ebp - 0x10;
    eax = 0;
    esp = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049320 */
#include <stdint.h>
 
uint32_t do_signed_const (int32_t arg_4h) {
    eax = *((esp + 4));
    eax = 0;
    __asm ("sets al");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x80492e6 */
#include <stdint.h>
 
uint32_t do_cmp (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = *((esp + 8));
    eax = 0;
    al = (al < dl) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049310 */
#include <stdint.h>
 
uint32_t do_cmp_const (int32_t arg_4h) {
    eax = *((esp + 4));
    eax = 0;
    al = (al < 0xa) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049000 */
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
/* SUBJECTS/from_holdec/i386_compares/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}

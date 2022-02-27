/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049140 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049177 ();
    ebx += 0x2eac;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2cc0, ebx - 0x2c60);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049177 */
#include <stdint.h>
 
void fcn_08049177 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x80491a0 */
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
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x80491e0 */
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
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049220 */
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
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049250 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x80493a0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049320 */
#include <stdint.h>
 
uint32_t double_to_double (void) {
    *(fp_stack--) = *((esp + 0x1c));
    fp_stack[0] += fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("got 2*x=%f\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049190 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x80492b0 */
#include <stdint.h>
 
int32_t double_to_unknown (int32_t arg_1ch, int32_t arg_30h) {
    eax = *((esp + 0x1c));
    edx = (int32_t) al;
    edx = (int32_t) ah;
    edx = eax;
    eax >>= 0x18;
    edx >>= 0x10;
    edx = (int32_t) dl;
    eax = *((esp + 0x30));
    edx = (int32_t) al;
    edx = (int32_t) ah;
    edx = eax;
    eax >>= 0x18;
    edx >>= 0x10;
    edx = (int32_t) dl;
    eax = printf ("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x80493a8 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2c4b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049300 */
#include <stdint.h>
 
uint32_t unknown_to_double (void) {
    *(fp_stack--) = *((esp + 0x1c));
    fp_stack[0] += fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("got 2*x=%f\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049340 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2cb3;
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
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049260 */
#include <stdint.h>
 
int32_t unknown_to_unknown (int32_t arg_1ch, int32_t arg_30h) {
    eax = *((esp + 0x1c));
    edx = (int32_t) al;
    edx = (int32_t) ah;
    edx = eax;
    eax >>= 0x18;
    edx >>= 0x10;
    edx = (int32_t) dl;
    eax = *((esp + 0x30));
    edx = (int32_t) al;
    edx = (int32_t) ah;
    edx = eax;
    eax >>= 0x18;
    edx >>= 0x10;
    edx = (int32_t) dl;
    eax = printf ("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049180 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049060 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_10h;
    int32_t var_8h;
    /* [13] -r-x section size 837 named .text */
    ecx = esp + 4;
    ebx = *(ecx);
    unknown_to_unknown (0xf5c28f5c, 0x3ff35c28, ecx, ebx, ebp);
    *((ebp - 0x10)) = ebx;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = fp_stack[0];
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] += *(0x804a0e8);
    *(esp) = fp_stack[0];
    fp_stack--;
    double_to_unknown ();
    unknown_to_double (0x7ae147ae, 0x3ff3ae14);
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *(0x804a0f0);
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(esp) = fp_stack[0];
    fp_stack--;
    double_to_double ();
    *(esp) = 0x66;
    printf ("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *(0x804a0f8);
    fp_stack[0] += fp_stack[1];
    ? = fp_stack[0];
    fp_stack--;
    fp_stack[0] += *(0x804a100);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    esp = ebp - 8;
    eax = 0;
    esp = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_gcc/subject.exe @ 0x8049000 */
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

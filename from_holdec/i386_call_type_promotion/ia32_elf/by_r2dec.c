/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049100 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049137 ();
    ebx += 0x2eec;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2bf0, ebx - 0x2b90);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049137 */
#include <stdint.h>
 
void fcn_08049137 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049160 */
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
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x80491a0 */
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
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x80491e0 */
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
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049210 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049470 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049150 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049260 */
#include <stdint.h>
 
int32_t print_float_as_hex (int32_t arg_1ch) {
    eax = *((esp + 0x1c));
    edx = (int32_t) al;
    edx = (int32_t) ah;
    edx = eax;
    eax >>= 0x18;
    edx >>= 0x10;
    edx = (int32_t) dl;
    eax = printf ("got a float with       0x%02x 0x%02x 0x%02x 0x%02x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049478 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2b7b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049240 */
#include <stdint.h>
 
uint32_t print_short (int32_t arg_18h) {
    eax = *((esp + 0x18));
    eax = printf ("got a short %d\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049390 */
#include <stdint.h>
 
int32_t print_varargs (void) {
    int32_t var_18h;
    *(fp_stack--) = *((esp + 0x30));
    *((esp + 0x18)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x18));
    edx = (int32_t) al;
    edx = (int32_t) ah;
    edx = eax;
    eax >>= 0x18;
    edx >>= 0x10;
    edx = (int32_t) dl;
    eax = printf ("promo because of vargs: converted a float with 0x%02x 0x%02x 0x%02x 0x%02x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049410 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2be3;
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
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049140 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049060 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_4h;
    /* [13] -r-x section size 1045 named .text */
    ecx = esp + 4;
    eax = *(ecx);
    *((ebp - 0x10)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += *(0x804a1bc);
    *((ebp - 0x14)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x10));
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    print_char (0x61, ecx, ebp);
    print_short (0x2a);
    print_float_as_hex (*((ebp - 0x14)));
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += *(0x804a1c0);
    *(esp) = fp_stack[0];
    fp_stack--;
    print_double_as_hex ();
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += *(0x804a1c8);
    ? = fp_stack[0];
    fp_stack--;
    print_long_double_as_hex ();
    *(fp_stack--) = *((ebp - 0x14));
    *((esp + 4)) = fp_stack[0];
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    print_varargs ("dummy");
    *(fp_stack--) = *((ebp - 0x10));
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = print_without_prototype ();
    ecx = *((ebp - 4));
    eax = 0;
    esp = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049220 */
#include <stdint.h>
 
uint32_t print_char (int32_t arg_18h) {
    eax = *((esp + 0x18));
    eax = printf ("got a char '%c'\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049290 */
#include <stdint.h>
 
int32_t print_double_as_hex (int32_t arg_1ch, int32_t arg_30h) {
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
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x80492e0 */
#include <stdint.h>
 
uint32_t print_long_double_as_hex (void) {
    int32_t var_31h;
    int32_t var_3ch;
    int32_t var_47h;
    int32_t var_52h;
    int32_t var_5dh;
    int32_t var_68h;
    int32_t var_73h;
    int32_t var_7eh;
    int32_t var_89h;
    int32_t var_94h;
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x94));
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x89));
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x7e));
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x73));
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x68));
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x5d));
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x52));
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x47));
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x3c));
    ? = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x31));
    eax = printf ("got a long double with 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x80493d0 */
#include <stdint.h>
 
int32_t print_without_prototype (void) {
    int32_t var_18h;
    *(fp_stack--) = *((esp + 0x2c));
    *((esp + 0x18)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x18));
    edx = (int32_t) al;
    edx = (int32_t) ah;
    edx = eax;
    eax >>= 0x18;
    edx >>= 0x10;
    edx = (int32_t) dl;
    eax = printf ("promo because of no prototype: converted to a float with 0x%02x 0x%02x 0x%02x 0x%02x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_call_type_promotion/ia32_elf/subject.exe @ 0x8049000 */
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

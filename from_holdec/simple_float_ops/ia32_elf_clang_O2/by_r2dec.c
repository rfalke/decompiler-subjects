/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void entry0 (void) {
    /* [14] -r-x section size 1570 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048350 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804a057;
    eax -= obj.completed.6532;
    if (eax > 6) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6532);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048380 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = .bss;
    eax -= obj.completed.6532;
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
        void (*edx)(uint32_t, uint32_t) (obj.completed.6532, eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x80483c0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x80483e0 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x8048380)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048930 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x80485c0 */
#include <stdint.h>
 
void dbg_converting_between_floats_f2 (void) {
    /* void converting_between_floats_f2(); */
    *(fp_stack--) = fp_stack[?];
    *(obj.global_float) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048570 */
#include <stdint.h>
 
void dbg_write_floats (void) {
    double pi;
    /* void write_floats(double pi); */
    xmm0 = *((esp + 0x10));
    __asm ("cvtsd2ss xmm1, xmm0");
    *(obj.global_double) = xmm0;
    *(obj.global_float) = xmm1;
    *(esp) = xmm0;
    *(fp_stack--) = *(esp);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x80487e0 */
#include <stdint.h>
 
int32_t dbg_constants (int32_t arg_10h, double x) {
    int32_t var_4h;
    xmm0 = x;
    /* int constants(double x); */
    xmm0 = *((esp + 0x10));
    __asm ("addsd xmm0, xmm0");
    *((esp + 4)) = xmm0;
    printf (0x8048990);
    xmm0 = .comment;
    __asm ("mulsd xmm0, qword [esp + 0x10]");
    *((esp + 4)) = xmm0;
    printf (0x8048990);
    xmm0 = *(0x8048978);
    __asm ("mulsd xmm0, qword [esp + 0x10]");
    *((esp + 4)) = xmm0;
    printf (0x8048990);
    xmm0 = .comment;
    __asm ("mulsd xmm0, qword [esp + 0x10]");
    *((esp + 4)) = xmm0;
    printf (0x8048990);
    xmm0 = *((esp + 0x10));
    __asm ("mulsd xmm0, qword [0x8048988]");
    *((esp + 4)) = xmm0;
    printf (0x8048990);
    eax = 0x7d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x80482e0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x80484b0 */
#include <stdint.h>
 
uint32_t dbg_write_ints (void) {
    int32_t var_6h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    double pi;
    /* int write_ints(double pi); */
    xmm0 = *((esp + 0x20));
    __asm ("cvttsd2si eax, xmm0");
    *(obj.global_char) = al;
    *(obj.global_short) = ax;
    *(obj.global_int) = eax;
    *(obj.global_long) = eax;
    *((esp + 0x10)) = xmm0;
    *(fp_stack--) = *((esp + 0x10));
    eax = *((esp + 6));
    *((esp + 6)) = 0xc7f;
    *((esp + 6)) = ax;
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 8));
    ecx = *((esp + 0xc));
    *(0x804a034) = ecx;
    *(obj.global_long_long) = eax;
    eax = 0x79;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048520 */
#include <stdint.h>
 
int32_t dbg_read_floats (void) {
    int32_t var_10h;
    /* int read_floats(); */
    xmm0 = global_float;
    __asm ("xorpd xmm1, xmm1");
    __asm ("cvtss2sd xmm0, xmm0");
    __asm ("addsd xmm1, xmm0");
    __asm ("addsd xmm1, qword [obj.global_double]");
    *(fp_stack--) = fp_stack[?];
    *((esp + 0x10)) = xmm1;
    fp_stack[0] += *((esp + 0x10));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    printf (0x8048990);
    eax = 0x7a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048620 */
#include <stdint.h>
 
int32_t dbg_basic_operations (int32_t arg_10h, double x) {
    int32_t var_4h;
    double y;
    xmm1 = x;
    /* int basic_operations(double x,double y); */
    xmm0 = *((esp + 0x10));
    __asm ("addsd xmm0, qword [esp + 0x18]");
    *((esp + 4)) = xmm0;
    printf (0x8048990);
    xmm0 = *((esp + 0x10));
    __asm ("subsd xmm0, qword [esp + 0x18]");
    *((esp + 4)) = xmm0;
    printf (0x8048990);
    xmm0 = *((esp + 0x18));
    xmm1 = *((esp + 0x10));
    __asm ("subsd xmm0, xmm1");
    *((esp + 4)) = xmm0;
    printf (0x8048990);
    xmm0 = *((esp + 0x10));
    __asm ("mulsd xmm0, qword [esp + 0x18]");
    *((esp + 4)) = xmm0;
    printf (0x8048990);
    xmm0 = *((esp + 0x10));
    __asm ("divsd xmm0, qword [esp + 0x18]");
    *((esp + 4)) = xmm0;
    printf (0x8048990);
    xmm0 = *((esp + 0x10));
    xmm1 = *((esp + 0x18));
    __asm ("divsd xmm1, xmm0");
    *((esp + 4)) = xmm1;
    printf (0x8048990);
    xmm0 = *((esp + 0x10));
    __asm ("xorpd xmm0, xmmword [0x8048960]");
    __asm ("movlpd qword [esp + 4], xmm0");
    printf (0x8048990);
    eax = 0x7b;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048934 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x16c3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048410 */
#include <stdint.h>
 
void use (int32_t arg_10h) {
    int32_t var_4h;
    xmm0 = *((esp + 0x10));
    *((esp + 4)) = xmm0;
    printf (0x8048990);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048600 */
#include <stdint.h>
 
void dbg_converting_between_floats_l1 (void) {
    /* void converting_between_floats_l1(); */
    *(fp_stack--) = *(obj.global_float);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048710 */
#include <stdint.h>
 
int32_t dbg_compare_floats (int32_t arg_10h, int32_t x) {
    int32_t var_4h;
    double y;
    ebx = x;
    /* int compare_floats(double x,double y); */
    xmm0 = *((esp + 0x10));
    __asm ("cmpeqsd xmm0, qword [esp + 0x18]");
    eax = xmm0;
    eax &= 1;
    *((esp + 4)) = eax;
    printf (0x8048993);
    xmm0 = *((esp + 0x10));
    __asm ("cmpneqsd xmm0, qword [esp + 0x18]");
    eax = xmm0;
    eax &= 1;
    *((esp + 4)) = eax;
    eax = printf (0x8048993);
    xmm0 = *((esp + 0x10));
    eax = 0;
    ebx = 0;
    __asm ("ucomisd xmm0, qword [esp + 0x18]");
    al = (eax > 0) ? 1 : 0;
    bl = (eax >= 0) ? 1 : 0;
    *((esp + 4)) = eax;
    printf (0x8048993);
    *((esp + 4)) = ebx;
    eax = printf (0x8048993);
    xmm0 = *((esp + 0x18));
    eax = 0;
    ebx = 0;
    __asm ("ucomisd xmm0, qword [esp + 0x10]");
    al = (eax > 0) ? 1 : 0;
    bl = (eax >= 0) ? 1 : 0;
    *((esp + 4)) = eax;
    printf (0x8048993);
    *((esp + 4)) = ebx;
    printf (0x8048993);
    eax = 0x7c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048430 */
#include <stdint.h>
 
void use_int (int32_t arg_18h) {
    printf (0x8048993);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x80485d0 */
#include <stdint.h>
 
void dbg_converting_between_floats_d1 (void) {
    /* void converting_between_floats_d1(); */
    xmm0 = global_float;
    __asm ("cvtss2sd xmm0, xmm0");
    *(obj.global_double) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x80485a0 */
#include <stdint.h>
 
void dbg_converting_between_floats_f1 (void) {
    /* void converting_between_floats_f1(); */
    xmm0 = global_double;
    __asm ("cvtsd2ss xmm0, xmm0");
    *(obj.global_float) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x80488d0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1727;
    ebp = *((esp + 0x20));
    esi = ebx - 0xf4;
    init ();
    eax = ebx - 0xf8;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf8)(uint32_t, uint32_t*) (ebp, *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048890 */
#include <stdint.h>
 
uint32_t dbg_main (void) {
    /* int main(); */
    printf ("%zu %zu %zu %zu %zu\n");
    eax = printf (0x804899e);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048610 */
#include <stdint.h>
 
void dbg_converting_between_floats_l2 (void) {
    /* void converting_between_floats_l2(); */
    *(fp_stack--) = *(obj.global_double);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x80485f0 */
#include <stdint.h>
 
void dbg_converting_between_floats_d2 (void) {
    /* void converting_between_floats_d2(); */
    *(fp_stack--) = fp_stack[?];
    *(obj.global_double) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x80482ac */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1d4b;
    eax = *((ebx - 4));
    if (eax != 0) {
        _plt_got ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O2/subject.exe @ 0x8048450 */
#include <stdint.h>
 
int32_t dbg_read_ints (double x) {
    int32_t var_4h;
    int32_t var_10h;
    xmm2 = x;
    /* int read_ints(); */
    eax = *(obj.global_char);
    __asm ("cvtsi2sd xmm3, dword [obj.global_int]");
    __asm ("cvtsi2sd xmm2, dword [obj.global_long]");
    __asm ("cvtsi2sd xmm0, eax");
    eax = *(obj.global_short);
    *(fp_stack--) = *(obj.global_long_long);
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    __asm ("cvtsi2sd xmm1, eax");
    __asm ("addsd xmm1, xmm0");
    __asm ("addsd xmm3, xmm1");
    __asm ("addsd xmm2, xmm3");
    __asm ("addsd xmm2, qword [esp + 0x10]");
    *((esp + 4)) = xmm2;
    printf (0x8048990);
    eax = 0x78;
    return eax;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void entry0 (void) {
    /* [14] -r-x section size 1922 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048350 */
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
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048380 */
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
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x80483c0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x80483e0 */
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
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048a90 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048680 */
#include <stdint.h>
 
void dbg_converting_between_floats_f2 (void) {
    int32_t var_4h;
    /* void converting_between_floats_f2(); */
    *(fp_stack--) = fp_stack[?];
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    xmm0 = *((ebp - 4));
    *(obj.global_float) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048620 */
#include <stdint.h>
 
void dbg_write_floats (int32_t arg_8h) {
    double pi;
    /* void write_floats(double pi); */
    xmm0 = *((ebp + 8));
    *((ebp - 8)) = xmm0;
    __asm ("cvtsd2ss xmm0, xmm0");
    *(obj.global_float) = xmm0;
    xmm0 = *((ebp - 8));
    *(obj.global_double) = xmm0;
    *(fp_stack--) = *((ebp - 8));
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x80488e0 */
#include <stdint.h>
 
int32_t dbg_constants (int32_t arg_8h) {
    double x;
    /* int constants(double x); */
    xmm0 = *((ebp + 8));
    xmm1 = .comment;
    *((ebp - 8)) = xmm0;
    __asm ("mulsd xmm1, qword [ebp - 8]");
    *(esp) = xmm1;
    use (ebp);
    xmm0 = .comment;
    __asm ("mulsd xmm0, qword [ebp - 8]");
    *(esp) = xmm0;
    use ();
    xmm0 = *(0x8048ae0);
    __asm ("mulsd xmm0, qword [ebp - 8]");
    *(esp) = xmm0;
    use ();
    xmm0 = .comment;
    __asm ("mulsd xmm0, qword [ebp - 8]");
    *(esp) = xmm0;
    use ();
    xmm0 = "q=\n\xd7\xa3";
    __asm ("mulsd xmm0, qword [ebp - 8]");
    *(esp) = xmm0;
    use ();
    eax = 0x7d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048410 */
#include <stdint.h>
 
uint32_t dbg_use (int32_t arg_8h) {
    int32_t var_ch;
    double x;
    int32_t var_4h;
    /* void use(double x); */
    xmm0 = *((ebp + 8));
    eax = 0x8048af8;
    *((ebp - 8)) = xmm0;
    xmm0 = *((ebp - 8));
    *((esp + 4)) = xmm0;
    eax = printf (eax);
    *((ebp - 0xc)) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x80482e0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048520 */
#include <stdint.h>
 
int32_t dbg_write_ints (int32_t arg_8h) {
    int32_t var_22h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    double pi;
    /* int write_ints(double pi); */
    xmm0 = *((ebp + 8));
    eax = 0x79;
    *((ebp - 0x10)) = xmm0;
    __asm ("cvttsd2si ecx, xmm0");
    dl = cl;
    *(obj.global_char) = dl;
    __asm ("cvttsd2si ecx, qword [ebp - 0x10]");
    si = cx;
    *(obj.global_short) = si;
    __asm ("cvttsd2si ecx, qword [ebp - 0x10]");
    *(obj.global_int) = ecx;
    __asm ("cvttsd2si ecx, qword [ebp - 0x10]");
    *(obj.global_long) = ecx;
    xmm0 = *((ebp - 0x10));
    *((ebp - 0x18)) = xmm0;
    *(fp_stack--) = *((ebp - 0x18));
    si = *((ebp - 0x22));
    *((ebp - 0x22)) = 0xc7f;
    *((ebp - 0x22)) = si;
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    ecx = *((ebp - 0x20));
    edi = *((ebp - 0x1c));
    *(0x804a034) = edi;
    *(obj.global_long_long) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x80485b0 */
#include <stdint.h>
 
int32_t dbg_read_floats (void) {
    int32_t var_10h;
    double sum;
    int32_t var_4h;
    /* int read_floats(); */
    *((ebp - 4)) = 0;
    *((ebp - 8)) = 0;
    xmm0 = global_float;
    __asm ("cvtss2sd xmm0, xmm0");
    __asm ("xorps xmm1, xmm1");
    __asm ("addsd xmm0, xmm1");
    *((ebp - 8)) = xmm0;
    xmm1 = global_double;
    __asm ("addsd xmm0, xmm1");
    *((ebp - 8)) = xmm0;
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    xmm0 = *((ebp - 0x10));
    *((ebp - 8)) = xmm0;
    xmm0 = *((ebp - 8));
    *(esp) = xmm0;
    use (ebp);
    eax = 0x7a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048730 */
#include <stdint.h>
 
int32_t dbg_basic_operations (int32_t arg_8h, int32_t arg_10h) {
    double y;
    double x;
    /* int basic_operations(double x,double y); */
    xmm0 = *((ebp + 0x10));
    xmm1 = *((ebp + 8));
    *((ebp - 8)) = xmm1;
    *((ebp - 0x10)) = xmm0;
    xmm1 = *((ebp - 8));
    __asm ("addsd xmm1, xmm0");
    eax = esp;
    *(eax) = xmm1;
    use (ebp);
    xmm0 = *((ebp - 8));
    xmm1 = *((ebp - 0x10));
    __asm ("subsd xmm0, xmm1");
    eax = esp;
    *(eax) = xmm0;
    use ();
    xmm0 = *((ebp - 0x10));
    xmm1 = *((ebp - 8));
    __asm ("subsd xmm0, xmm1");
    eax = esp;
    *(eax) = xmm0;
    use ();
    xmm0 = *((ebp - 8));
    xmm1 = *((ebp - 0x10));
    __asm ("mulsd xmm0, xmm1");
    eax = esp;
    *(eax) = xmm0;
    use ();
    xmm0 = *((ebp - 8));
    xmm1 = *((ebp - 0x10));
    __asm ("divsd xmm0, xmm1");
    eax = esp;
    *(eax) = xmm0;
    use ();
    xmm0 = *((ebp - 0x10));
    xmm1 = *((ebp - 8));
    __asm ("divsd xmm0, xmm1");
    eax = esp;
    *(eax) = xmm0;
    use ();
    xmm0 = *((ebp - 8));
    __asm ("movapd xmm1, xmmword [0x8048ac0]");
    __asm ("xorpd xmm0, xmm1");
    *(esp) = xmm0;
    use ();
    eax = 0x7b;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048a94 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1563;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x80486f0 */
#include <stdint.h>
 
void dbg_converting_between_floats_l1 (void) {
    /* void converting_between_floats_l1(); */
    *(fp_stack--) = *(obj.global_float);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048800 */
#include <stdint.h>
 
int32_t dbg_compare_floats (int32_t arg_8h, int32_t arg_10h) {
    double y;
    double x;
    /* int compare_floats(double x,double y); */
    xmm0 = *((ebp + 0x10));
    xmm1 = *((ebp + 8));
    *((ebp - 8)) = xmm1;
    *((ebp - 0x10)) = xmm0;
    xmm0 = *((ebp - 8));
    __asm ("ucomisd xmm0, qword [ebp - 0x10]");
    al = (? == ?) ? 1 : 0;
    __asm ("setnp cl");
    al &= cl;
    al &= 1;
    edx = (int32_t) al;
    use_int (edx);
    xmm0 = *((ebp - 8));
    __asm ("ucomisd xmm0, qword [ebp - 0x10]");
    al = (al != 0) ? 1 : 0;
    __asm ("setp cl");
    al |= cl;
    al &= 1;
    edx = (int32_t) al;
    use_int (edx);
    xmm0 = *((ebp - 8));
    __asm ("ucomisd xmm0, qword [ebp - 0x10]");
    al = (al > 0) ? 1 : 0;
    al &= 1;
    edx = (int32_t) al;
    use_int (edx);
    xmm0 = *((ebp - 8));
    __asm ("ucomisd xmm0, qword [ebp - 0x10]");
    al = (al >= 0) ? 1 : 0;
    al &= 1;
    edx = (int32_t) al;
    use_int (edx);
    xmm0 = *((ebp - 8));
    xmm1 = *((ebp - 0x10));
    __asm ("ucomisd xmm1, xmm0");
    al = (al > 0) ? 1 : 0;
    al &= 1;
    edx = (int32_t) al;
    use_int (edx);
    xmm0 = *((ebp - 8));
    xmm1 = *((ebp - 0x10));
    __asm ("ucomisd xmm1, xmm0");
    al = (al >= 0) ? 1 : 0;
    al &= 1;
    edx = (int32_t) al;
    use_int (edx);
    eax = 0x7c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048450 */
#include <stdint.h>
 
int32_t dbg_use_int (int32_t arg_8h) {
    int32_t var_8h;
    int32_t x;
    int32_t var_sp_4h;
    /* void use_int(int x); */
    eax = *((ebp + 8));
    ecx = 0x8048afb;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    *(esp) = ecx;
    eax = printf (eax);
    *((ebp - 8)) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x80486a0 */
#include <stdint.h>
 
void dbg_converting_between_floats_d1 (void) {
    /* void converting_between_floats_d1(); */
    __asm ("cvtss2sd xmm0, dword [obj.global_float]");
    *(obj.global_double) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048660 */
#include <stdint.h>
 
void dbg_converting_between_floats_f1 (void) {
    /* void converting_between_floats_f1(); */
    __asm ("cvtsd2ss xmm0, qword [obj.global_double]");
    *(obj.global_float) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048a30 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x15c7;
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
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048970 */
#include <stdint.h>
 
uint32_t dbg_main (void) {
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_bp_14h;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    int32_t var_10h;
    int32_t var_14h;
    /* int main(); */
    eax = str__zu__zu__zu__zu__zu_n;
    ecx = 1;
    edx = 2;
    esi = 4;
    edi = 8;
    *((ebp - 0xc)) = 0;
    *(esp) = eax;
    *((esp + 4)) = 1;
    *((esp + 8)) = 2;
    *((esp + 0xc)) = 4;
    *((esp + 0x10)) = 4;
    *((ebp - 0x10)) = edi;
    *((ebp - 0x14)) = ecx;
    *((ebp - 0x18)) = edx;
    *((ebp - 0x1c)) = esi;
    eax = printf (8);
    ecx = 0x8048b06;
    edx = 4;
    esi = 8;
    edi = 0xc;
    *(esp) = ecx;
    *((esp + 4)) = 4;
    *((esp + 8)) = 8;
    *((ebp - 0x20)) = eax;
    *((ebp - 0x24)) = edi;
    *((ebp - 0x28)) = edx;
    *((ebp - 0x2c)) = esi;
    eax = printf (0xc);
    ecx = 0;
    *((ebp - 0x30)) = eax;
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048710 */
#include <stdint.h>
 
void dbg_converting_between_floats_l2 (void) {
    /* void converting_between_floats_l2(); */
    *(fp_stack--) = *(obj.global_double);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x80486c0 */
#include <stdint.h>
 
void dbg_converting_between_floats_d2 (void) {
    int32_t var_8h;
    /* void converting_between_floats_d2(); */
    *(fp_stack--) = fp_stack[?];
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    xmm0 = *((ebp - 8));
    *(obj.global_double) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x80482ac */
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
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_clang_O0/subject.exe @ 0x8048480 */
#include <stdint.h>
 
int32_t dbg_read_ints (void) {
    int32_t var_10h;
    double sum;
    int32_t var_4h;
    /* int read_ints(); */
    *((ebp - 4)) = 0;
    *((ebp - 8)) = 0;
    eax = *(obj.global_char);
    __asm ("cvtsi2sd xmm0, eax");
    __asm ("xorps xmm1, xmm1");
    __asm ("addsd xmm0, xmm1");
    *((ebp - 8)) = xmm0;
    eax = *(obj.global_short);
    __asm ("cvtsi2sd xmm1, eax");
    __asm ("addsd xmm0, xmm1");
    *((ebp - 8)) = xmm0;
    __asm ("cvtsi2sd xmm1, dword [obj.global_int]");
    __asm ("addsd xmm0, xmm1");
    *((ebp - 8)) = xmm0;
    __asm ("cvtsi2sd xmm1, dword [obj.global_long]");
    __asm ("addsd xmm0, xmm1");
    *((ebp - 8)) = xmm0;
    *(fp_stack--) = *(obj.global_long_long);
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    xmm0 = *((ebp - 0x10));
    __asm ("addsd xmm0, qword [ebp - 8]");
    *((ebp - 8)) = xmm0;
    xmm0 = *((ebp - 8));
    *(esp) = xmm0;
    use (ebp);
    eax = 0x78;
    return eax;
}

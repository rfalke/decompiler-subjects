/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400400 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [13] -r-x section size 1410 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400430 */
#include <stdint.h>
 
int64_t deregister_tm_clones (void) {
    eax = 0x601077;
    rax -= obj.completed.6917;
    if (rax > 0xe) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = .bss;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400470 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = .bss;
    rsi -= obj.completed.6917;
    rsi >>= 3;
    rax = rsi;
    rax >>= 0x3f;
    rsi += rax;
    rsi >>= 1;
    if (rsi != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = .bss;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x4004b0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6917) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6917) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x4004d0 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    edi = obj.__JCR_LIST__;
    while (rax == 0) {
        void (*0x400470)() ();
        eax = 0;
    }
    void (*rax)() ();
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400980 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400650 */
#include <stdint.h>
 
void dbg_converting_between_floats_f2 (void) {
    /* void converting_between_floats_f2(); */
    *(fp_stack--) = fp_stack[?];
    *(obj.global_float) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400600 */
#include <stdint.h>
 
void dbg_write_floats (double pi, int64_t arg8) {
    xmm0 = pi;
    xmm1 = arg8;
    /* void write_floats(double pi); */
    __asm ("cvtsd2ss xmm1, xmm0");
    *(obj.global_float) = xmm1;
    *(obj.global_double) = xmm0;
    *((rsp - 8)) = xmm0;
    *(fp_stack--) = *((rsp - 8));
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400830 */
#include <stdint.h>
 
int32_t dbg_constants (double x) {
    xmm0 = x;
    /* int constants(double x); */
    *(rsp) = xmm0;
    __asm ("addsd xmm0, xmm0");
    al = 1;
    printf (0x4009d0);
    xmm0 = *(0x004009b0);
    __asm ("mulsd xmm0, qword [rsp]");
    al = 1;
    printf (0x4009d0);
    xmm0 = *(0x004009b8);
    __asm ("mulsd xmm0, qword [rsp]");
    al = 1;
    printf (0x4009d0);
    xmm0 = *(0x004009c0);
    __asm ("mulsd xmm0, qword [rsp]");
    al = 1;
    printf (0x4009d0);
    xmm0 = *(rsp);
    __asm ("mulsd xmm0, qword [0x004009c8]");
    al = 1;
    printf (0x4009d0);
    eax = 0x7d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x4003f0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400580 */
#include <stdint.h>
 
int32_t dbg_write_ints (double pi) {
    xmm0 = pi;
    /* int write_ints(double pi); */
    __asm ("cvttsd2si eax, xmm0");
    *(obj.global_char) = al;
    *(obj.global_short) = ax;
    *(obj.global_int) = eax;
    __asm ("cvttsd2si rax, xmm0");
    *(obj.global_long) = rax;
    *(obj.global_long_long) = rax;
    eax = 0x79;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x4005b0 */
#include <stdint.h>
 
int32_t dbg_read_floats (double x, int64_t arg8) {
    int64_t var_8h;
    int64_t var_10h;
    xmm0 = x;
    xmm1 = arg8;
    /* int read_floats(); */
    xmm0 = global_float;
    __asm ("cvtss2sd xmm0, xmm0");
    __asm ("xorpd xmm1, xmm1");
    __asm ("addsd xmm1, xmm0");
    __asm ("addsd xmm1, qword [obj.global_double]");
    *(fp_stack--) = fp_stack[?];
    *((rsp + 0x10)) = xmm1;
    fp_stack[0] += *((rsp + 0x10));
    *((rsp + 8)) = fp_stack[0];
    fp_stack--;
    xmm0 = *((rsp + 8));
    al = 1;
    printf (0x4009d0);
    eax = 0x7a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x4006b0 */
#include <stdint.h>
 
int32_t dbg_basic_operations (double x, double y) {
    int64_t var_8h;
    int64_t var_10h;
    xmm0 = x;
    xmm1 = y;
    /* int basic_operations(double x,double y); */
    *((rsp + 8)) = xmm1;
    __asm ("movapd xmmword [rsp + 0x10], xmm0");
    __asm ("addsd xmm0, xmm1");
    al = 1;
    printf (0x4009d0);
    __asm ("movapd xmm0, xmmword [rsp + 0x10]");
    __asm ("subsd xmm0, qword [rsp + 8]");
    al = 1;
    printf (0x4009d0);
    xmm0 = *((rsp + 8));
    __asm ("subsd xmm0, qword [rsp + 0x10]");
    al = 1;
    printf (0x4009d0);
    __asm ("movapd xmm0, xmmword [rsp + 0x10]");
    __asm ("mulsd xmm0, qword [rsp + 8]");
    al = 1;
    printf (0x4009d0);
    __asm ("movapd xmm0, xmmword [rsp + 0x10]");
    __asm ("divsd xmm0, qword [rsp + 8]");
    al = 1;
    printf (0x4009d0);
    xmm0 = *((rsp + 8));
    __asm ("divsd xmm0, qword [rsp + 0x10]");
    al = 1;
    printf (0x4009d0);
    __asm ("movapd xmm0, xmmword [rsp + 0x10]");
    __asm ("xorpd xmm0, xmmword [0x004009a0]");
    al = 1;
    printf (0x4009d0);
    eax = 0x7b;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400984 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400500 */
#include <stdint.h>
 
int8_t use (void) {
    edi = 0x4009d0;
    al = 1;
    return printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400690 */
#include <stdint.h>
 
void dbg_converting_between_floats_l1 (void) {
    /* void converting_between_floats_l1(); */
    *(fp_stack--) = *(obj.global_float);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400770 */
#include <stdint.h>
 
int32_t dbg_compare_floats (int32_t x, int64_t arg7, double y) {
    int64_t var_8h;
    rbx = x;
    xmm0 = arg7;
    xmm1 = y;
    /* int compare_floats(double x,double y); */
    *(rsp) = xmm1;
    *((rsp + 8)) = xmm0;
    __asm ("movapd xmm2, xmm0");
    __asm ("cmpeqsd xmm2, xmm1");
    rsi = xmm2;
    esi &= 1;
    eax = 0;
    eax = printf (0x4009d3);
    xmm0 = *((rsp + 8));
    __asm ("cmpneqsd xmm0, qword [rsp]");
    rsi = xmm0;
    esi &= 1;
    eax = 0;
    eax = printf (0x4009d3);
    esi = 0;
    ebx = 0;
    xmm0 = *((rsp + 8));
    __asm ("ucomisd xmm0, qword [rsp]");
    sil = (esi > 0) ? 1 : 0;
    bl = (esi >= 0) ? 1 : 0;
    eax = 0;
    eax = printf (0x4009d3);
    eax = 0;
    esi = ebx;
    eax = printf (0x4009d3);
    esi = 0;
    ebx = 0;
    xmm0 = *(rsp);
    __asm ("ucomisd xmm0, qword [rsp + 8]");
    sil = (esi > 0) ? 1 : 0;
    bl = (esi >= 0) ? 1 : 0;
    eax = 0;
    eax = printf (0x4009d3);
    eax = 0;
    esi = ebx;
    printf (0x4009d3);
    eax = 0x7c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400510 */
#include <stdint.h>
 
int32_t use_int (int64_t arg1) {
    rdi = arg1;
    ecx = edi;
    edi = 0x4009d3;
    eax = 0;
    esi = ecx;
    return printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400660 */
#include <stdint.h>
 
void dbg_converting_between_floats_d1 (void) {
    /* void converting_between_floats_d1(); */
    xmm0 = global_float;
    __asm ("cvtss2sd xmm0, xmm0");
    *(obj.global_double) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400630 */
#include <stdint.h>
 
void dbg_converting_between_floats_f1 (void) {
    /* void converting_between_floats_f1(); */
    xmm0 = global_double;
    __asm ("cvtsd2ss xmm0, xmm0");
    *(obj.global_float) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400910 */
#include <stdint.h>
 
void libc_csu_init (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15d = edi;
    r12 = obj___frame_dummy_init_array_entry;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    r14 = rsi;
    r13 = rdx;
    rbp -= r12;
    rbp >>= 3;
    init ();
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r13;
        rsi = r14;
        edi = r15d;
        uint64_t (*r12 + rbx*8)() ();
        rbx++;
    } while (rbp != rbx);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x4008c0 */
#include <stdint.h>
 
int32_t dbg_main (void) {
    /* int main(); */
    esi = 1;
    edx = 2;
    ecx = 4;
    r8d = 8;
    r9d = 8;
    eax = 0;
    eax = printf ("%zu %zu %zu %zu %zu\n");
    esi = 4;
    edx = 8;
    ecx = 0x10;
    eax = 0;
    eax = printf (0x4009de);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x4006a0 */
#include <stdint.h>
 
void dbg_converting_between_floats_l2 (void) {
    /* void converting_between_floats_l2(); */
    *(fp_stack--) = *(obj.global_double);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400680 */
#include <stdint.h>
 
void dbg_converting_between_floats_d2 (void) {
    /* void converting_between_floats_d2(); */
    *(fp_stack--) = fp_stack[?];
    *(obj.global_double) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x4003c8 */
#include <stdint.h>
 
int64_t init (void) {
    /* [11] -r-x section size 23 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O2/subject.exe @ 0x400520 */
#include <stdint.h>
 
int32_t dbg_read_ints (double x, int64_t arg8) {
    xmm0 = x;
    xmm1 = arg8;
    /* int read_ints(); */
    eax = *(obj.global_char);
    __asm ("cvtsi2sd xmm0, eax");
    eax = *(obj.global_short);
    __asm ("cvtsi2sd xmm1, eax");
    __asm ("addsd xmm1, xmm0");
    __asm ("xorps xmm0, xmm0");
    __asm ("cvtsi2sd xmm0, dword [obj.global_int]");
    __asm ("addsd xmm0, xmm1");
    __asm ("xorps xmm1, xmm1");
    __asm ("cvtsi2sd xmm1, qword [obj.global_long]");
    __asm ("addsd xmm1, xmm0");
    __asm ("xorps xmm0, xmm0");
    __asm ("cvtsi2sd xmm0, qword [obj.global_long_long]");
    __asm ("addsd xmm0, xmm1");
    al = 1;
    printf (0x4009d0);
    eax = 0x78;
    return eax;
}

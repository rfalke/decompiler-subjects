/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400400 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [13] -r-x section size 1682 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400430 */
#include <stdint.h>
 
int64_t deregister_tm_clones (void) {
    eax = 0x602077;
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400470 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x4004b0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6917) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6917) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x4004d0 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400a90 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400710 */
#include <stdint.h>
 
void dbg_converting_between_floats_f2 (void) {
    int64_t var_4h;
    /* void converting_between_floats_f2(); */
    *(fp_stack--) = fp_stack[?];
    *((rbp - 4)) = fp_stack[0];
    fp_stack--;
    xmm0 = *((rbp - 4));
    *(obj.global_float) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x4006c0 */
#include <stdint.h>
 
void dbg_write_floats (int64_t arg7) {
    double pi;
    xmm0 = arg7;
    /* void write_floats(double pi); */
    *((rbp - 8)) = xmm0;
    __asm ("cvtsd2ss xmm0, xmm0");
    *(obj.global_float) = xmm0;
    xmm0 = *((rbp - 8));
    *(obj.global_double) = xmm0;
    *(fp_stack--) = *((rbp - 8));
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400910 */
#include <stdint.h>
 
int32_t dbg_constants (int64_t arg1, int64_t arg7) {
    double x;
    rdi = arg1;
    xmm0 = arg7;
    /* int constants(double x); */
    xmm1 = *(0x00400ad0);
    *((rbp - 8)) = xmm0;
    __asm ("mulsd xmm1, qword [rbp - 8]");
    xmm0 = xmm1;
    use (rdi);
    xmm0 = *(0x00400ac8);
    __asm ("mulsd xmm0, qword [rbp - 8]");
    use (rdi);
    xmm0 = *(0x00400ac0);
    __asm ("mulsd xmm0, qword [rbp - 8]");
    use (rdi);
    xmm0 = *(0x00400ab8);
    __asm ("mulsd xmm0, qword [rbp - 8]");
    use (rdi);
    xmm0 = "q=\n\xd7\xa3";
    __asm ("mulsd xmm0, qword [rbp - 8]");
    use (rdi);
    eax = 0x7d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400500 */
#include <stdint.h>
 
uint32_t dbg_use (int64_t arg7) {
    int64_t var_ch;
    double x;
    xmm0 = arg7;
    /* void use(double x); */
    rdi = 0x400ad8;
    *((rbp - 8)) = xmm0;
    xmm0 = *((rbp - 8));
    al = 1;
    eax = printf (rdi);
    *((rbp - 0xc)) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x4003f0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x4005f0 */
#include <stdint.h>
 
int32_t dbg_write_ints (int64_t arg4, int64_t arg1, int64_t arg7) {
    double pi;
    rcx = arg4;
    rdi = arg1;
    xmm0 = arg7;
    /* int write_ints(double pi); */
    eax = 0x79;
    *((rbp - 8)) = xmm0;
    __asm ("cvttsd2si ecx, xmm0");
    dl = cl;
    *(obj.global_char) = dl;
    xmm0 = *((rbp - 8));
    __asm ("cvttsd2si ecx, xmm0");
    si = cx;
    *(obj.global_short) = si;
    __asm ("cvttsd2si ecx, qword [rbp - 8]");
    *(obj.global_int) = ecx;
    __asm ("cvttsd2si rdi, qword [rbp - 8]");
    *(obj.global_long) = rdi;
    __asm ("cvttsd2si rdi, qword [rbp - 8]");
    *(obj.global_long_long) = rdi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400650 */
#include <stdint.h>
 
int32_t dbg_read_floats (int64_t arg1) {
    int64_t var_10h;
    double sum;
    rdi = arg1;
    /* int read_floats(); */
    *((rbp - 8)) = 0;
    xmm0 = global_float;
    __asm ("cvtss2sd xmm0, xmm0");
    __asm ("xorps xmm1, xmm1");
    __asm ("addsd xmm0, xmm1");
    *((rbp - 8)) = xmm0;
    xmm1 = global_double;
    __asm ("addsd xmm0, xmm1");
    *((rbp - 8)) = xmm0;
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = *((rbp - 8));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((rbp - 0x10)) = fp_stack[0];
    fp_stack--;
    xmm0 = *((rbp - 0x10));
    *((rbp - 8)) = xmm0;
    xmm0 = *((rbp - 8));
    use (rdi);
    eax = 0x7a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x4007b0 */
#include <stdint.h>
 
int64_t dbg_basic_operations (int64_t arg1, int64_t arg7, int64_t arg8) {
    double y;
    double x;
    rdi = arg1;
    xmm0 = arg7;
    xmm1 = arg8;
    /* int basic_operations(double x,double y); */
    *((rbp - 8)) = xmm0;
    *((rbp - 0x10)) = xmm1;
    xmm0 = *((rbp - 8));
    __asm ("addsd xmm0, qword [rbp - 0x10]");
    use (rdi);
    xmm0 = *((rbp - 8));
    __asm ("subsd xmm0, qword [rbp - 0x10]");
    use (rdi);
    xmm0 = *((rbp - 0x10));
    __asm ("subsd xmm0, qword [rbp - 8]");
    use (rdi);
    xmm0 = *((rbp - 8));
    __asm ("mulsd xmm0, qword [rbp - 0x10]");
    use (rdi);
    xmm0 = *((rbp - 8));
    __asm ("divsd xmm0, qword [rbp - 0x10]");
    use (rdi);
    xmm0 = *((rbp - 0x10));
    __asm ("divsd xmm0, qword [rbp - 8]");
    use (rdi);
    xmm0 = *((rbp - 8));
    rax = xmm0;
    rcx = 0x8000000000000000;
    rax ^= rcx;
    xmm0 = rax;
    use (rdi);
    eax = 0x7b;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400a94 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400770 */
#include <stdint.h>
 
void dbg_converting_between_floats_l1 (void) {
    /* void converting_between_floats_l1(); */
    *(fp_stack--) = *(obj.global_float);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400850 */
#include <stdint.h>
 
int32_t dbg_compare_floats (int64_t arg7, int64_t arg8) {
    double y;
    double x;
    xmm0 = arg7;
    xmm1 = arg8;
    /* int compare_floats(double x,double y); */
    *((rbp - 8)) = xmm0;
    *((rbp - 0x10)) = xmm1;
    xmm0 = *((rbp - 8));
    __asm ("ucomisd xmm0, qword [rbp - 0x10]");
    al = (? == ?) ? 1 : 0;
    __asm ("setnp cl");
    al &= cl;
    al &= 1;
    edi = (int32_t) al;
    use_int (rdi);
    xmm0 = *((rbp - 8));
    __asm ("ucomisd xmm0, qword [rbp - 0x10]");
    al = (al != 0) ? 1 : 0;
    __asm ("setp cl");
    al |= cl;
    al &= 1;
    edi = (int32_t) al;
    use_int (rdi);
    xmm0 = *((rbp - 8));
    __asm ("ucomisd xmm0, qword [rbp - 0x10]");
    al = (al > 0) ? 1 : 0;
    al &= 1;
    edi = (int32_t) al;
    use_int (rdi);
    xmm0 = *((rbp - 8));
    __asm ("ucomisd xmm0, qword [rbp - 0x10]");
    al = (al >= 0) ? 1 : 0;
    al &= 1;
    edi = (int32_t) al;
    use_int (rdi);
    xmm0 = *((rbp - 8));
    xmm1 = *((rbp - 0x10));
    __asm ("ucomisd xmm1, xmm0");
    al = (al > 0) ? 1 : 0;
    al &= 1;
    edi = (int32_t) al;
    use_int (rdi);
    xmm0 = *((rbp - 8));
    xmm1 = *((rbp - 0x10));
    __asm ("ucomisd xmm1, xmm0");
    al = (al >= 0) ? 1 : 0;
    al &= 1;
    edi = (int32_t) al;
    use_int (rdi);
    eax = 0x7c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400530 */
#include <stdint.h>
 
int64_t dbg_use_int (int64_t arg1) {
    int64_t var_8h;
    int32_t x;
    rdi = arg1;
    /* void use_int(int x); */
    rax = 0x400adb;
    *((rbp - 4)) = edi;
    esi = *((rbp - 4));
    al = 0;
    eax = printf (rax);
    *((rbp - 8)) = eax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400730 */
#include <stdint.h>
 
void dbg_converting_between_floats_d1 (int64_t arg7) {
    xmm0 = arg7;
    /* void converting_between_floats_d1(); */
    __asm ("cvtss2sd xmm0, dword [obj.global_float]");
    *(obj.global_double) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x4006f0 */
#include <stdint.h>
 
void dbg_converting_between_floats_f1 (int64_t arg7) {
    xmm0 = arg7;
    /* void converting_between_floats_f1(); */
    __asm ("cvtsd2ss xmm0, qword [obj.global_double]");
    *(obj.global_float) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400a20 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400990 */
#include <stdint.h>
 
int32_t dbg_main (void) {
    int64_t var_18h;
    int64_t var_14h;
    int64_t var_10h;
    int64_t var_4h;
    /* int main(); */
    rdi = "%zu %zu %zu %zu %zu\n";
    eax = 1;
    esi = 1;
    eax = 2;
    edx = 2;
    eax = 4;
    ecx = 4;
    eax = 8;
    r8d = 8;
    *((rbp - 4)) = 0;
    *((rbp - 0x10)) = r8;
    r9 = *((rbp - 0x10));
    al = 0;
    eax = printf (rdi);
    rdi = 0x400ae6;
    r10d = 4;
    esi = 4;
    r10d = 8;
    edx = 8;
    r10d = 0x10;
    ecx = 0x10;
    *((rbp - 0x14)) = eax;
    al = 0;
    eax = printf (rdi);
    r10d = 0;
    *((rbp - 0x18)) = eax;
    eax = r10d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400790 */
#include <stdint.h>
 
void dbg_converting_between_floats_l2 (void) {
    /* void converting_between_floats_l2(); */
    *(fp_stack--) = *(obj.global_double);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400750 */
#include <stdint.h>
 
void dbg_converting_between_floats_d2 (void) {
    int64_t var_8h;
    /* void converting_between_floats_d2(); */
    *(fp_stack--) = fp_stack[?];
    *((rbp - 8)) = fp_stack[0];
    fp_stack--;
    xmm0 = *((rbp - 8));
    *(obj.global_double) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x4003c8 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_clang_O0/subject.exe @ 0x400560 */
#include <stdint.h>
 
int32_t dbg_read_ints (int64_t arg1) {
    double sum;
    rdi = arg1;
    /* int read_ints(); */
    __asm ("xorps xmm0, xmm0");
    *((rbp - 8)) = xmm0;
    eax = *(obj.global_char);
    __asm ("cvtsi2sd xmm0, eax");
    __asm ("addsd xmm0, qword [rbp - 8]");
    *((rbp - 8)) = xmm0;
    eax = *(obj.global_short);
    __asm ("cvtsi2sd xmm0, eax");
    __asm ("addsd xmm0, qword [rbp - 8]");
    *((rbp - 8)) = xmm0;
    __asm ("cvtsi2sd xmm0, dword [obj.global_int]");
    __asm ("addsd xmm0, qword [rbp - 8]");
    *((rbp - 8)) = xmm0;
    __asm ("cvtsi2sd xmm0, qword [obj.global_long]");
    __asm ("addsd xmm0, qword [rbp - 8]");
    *((rbp - 8)) = xmm0;
    __asm ("cvtsi2sd xmm0, qword [obj.global_long_long]");
    __asm ("addsd xmm0, qword [rbp - 8]");
    *((rbp - 8)) = xmm0;
    xmm0 = *((rbp - 8));
    use (rdi);
    eax = 0x78;
    return eax;
}

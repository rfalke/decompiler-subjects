/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400450 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = .text;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400480 */
#include <stdint.h>
 
int64_t deregister_tm_clones (void) {
    eax = 0x60106f;
    rax -= loc._end;
    if (rax > 0xe) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = loc._end;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x4004c0 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = loc._end;
    rsi -= loc._end;
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
        edi = loc._end;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400500 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6917) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6917) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400520 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    edi = obj.__JCR_LIST__;
    while (rax == 0) {
        void (*0x4004c0)() ();
        eax = 0;
    }
    void (*rax)() ();
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400a00 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x4006d0 */
#include <stdint.h>
 
void dbg_converting_between_floats_f2 (void) {
    /* void converting_between_floats_f2(); */
    *(fp_stack--) = fp_stack[?];
    *(obj.global_float) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400680 */
#include <stdint.h>
 
void dbg_write_floats (double pi) {
    xmm0 = pi;
    /* void write_floats(double pi); */
    xmm1 = 0;
    *((rsp - 0x10)) = xmm0;
    *(obj.global_double) = xmm0;
    *(fp_stack--) = *((rsp - 0x10));
    __asm ("cvtsd2ss xmm1, xmm0");
    ? = fp_stack[0];
    fp_stack--;
    *(obj.global_float) = xmm1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x4008f0 */
#include <stdint.h>
 
int32_t dbg_constants (int64_t arg7) {
    double x;
    int64_t var_8h;
    xmm0 = arg7;
    /* int constants(double x); */
    eax = 1;
    *((rsp + 8)) = xmm0;
    __asm ("addsd xmm0, xmm0");
    printf (0x400a20);
    xmm0 = *((rsp + 8));
    eax = 1;
    __asm ("mulsd xmm0, qword [0x00400a48]");
    printf (0x400a20);
    xmm0 = *((rsp + 8));
    eax = 1;
    __asm ("mulsd xmm0, qword [0x00400a50]");
    printf (0x400a20);
    xmm0 = *((rsp + 8));
    eax = 1;
    __asm ("mulsd xmm0, qword [0x00400a58]");
    printf (0x400a20);
    xmm0 = *((rsp + 8));
    eax = 1;
    __asm ("mulsd xmm0, qword [0x00400a60]");
    printf (0x400a20);
    eax = 0x7d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x4003f0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x4005f0 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400620 */
#include <stdint.h>
 
int32_t dbg_read_floats (void) {
    int64_t var_8h;
    /* int read_floats(); */
    xmm0 = 0;
    *(fp_stack--) = fp_stack[?];
    eax = 1;
    __asm ("cvtss2sd xmm0, dword [obj.global_float]");
    __asm ("addsd xmm0, qword [0x00400a40]");
    __asm ("addsd xmm0, qword [obj.global_double]");
    *(rsp) = xmm0;
    fp_stack[0] += *(rsp);
    *((rsp + 8)) = fp_stack[0];
    fp_stack--;
    xmm0 = *((rsp + 8));
    printf (0x400a20);
    eax = 0x7a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400730 */
#include <stdint.h>
 
int32_t dbg_basic_operations (int64_t arg7, int64_t arg8) {
    double x;
    int64_t var_8h;
    xmm0 = arg7;
    xmm1 = arg8;
    /* int basic_operations(double x,double y); */
    eax = 1;
    *(rsp) = xmm0;
    __asm ("addsd xmm0, xmm1");
    *((rsp + 8)) = xmm1;
    printf (0x400a20);
    xmm0 = *(rsp);
    eax = 1;
    __asm ("subsd xmm0, qword [rsp + 8]");
    printf (0x400a20);
    xmm4 = *((rsp + 8));
    eax = 1;
    __asm ("subsd xmm4, qword [rsp]");
    __asm ("movapd xmm0, xmm4");
    printf (0x400a20);
    xmm0 = *(rsp);
    eax = 1;
    __asm ("mulsd xmm0, qword [rsp + 8]");
    printf (0x400a20);
    xmm0 = *(rsp);
    eax = 1;
    __asm ("divsd xmm0, qword [rsp + 8]");
    printf (0x400a20);
    xmm4 = *((rsp + 8));
    eax = 1;
    __asm ("divsd xmm4, qword [rsp]");
    __asm ("movapd xmm0, xmm4");
    printf (0x400a20);
    xmm0 = *(rsp);
    eax = 1;
    __asm ("xorpd xmm0, xmmword [0x00400a70]");
    printf (0x400a20);
    eax = 0x7b;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400a04 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400550 */
#include <stdint.h>
 
int32_t use (void) {
    edi = 0x400a20;
    eax = 1;
    return printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400710 */
#include <stdint.h>
 
void dbg_converting_between_floats_l1 (void) {
    /* void converting_between_floats_l1(); */
    *(fp_stack--) = *(obj.global_float);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400810 */
#include <stdint.h>
 
int32_t dbg_compare_floats (int64_t arg7, int64_t arg8) {
    double x;
    int64_t var_8h;
    xmm0 = arg7;
    xmm1 = arg8;
    /* int compare_floats(double x,double y); */
    esi = 0;
    eax = 0;
    __asm ("ucomisd xmm0, xmm1");
    edi = 0x400a23;
    *(rsp) = xmm0;
    *((rsp + 8)) = xmm1;
    __asm ("setnp sil");
    if (? != ?) {
        esi = eax;
    }
    printf (rdi);
    xmm3 = *((rsp + 8));
    esi = 0;
    xmm2 = *(rsp);
    eax = 1;
    edi = 0x400a23;
    __asm ("ucomisd xmm2, xmm3");
    __asm ("setp sil");
    if (? != ?) {
        esi = eax;
    }
    eax = 0;
    eax = printf (rdi);
    xmm2 = *(rsp);
    esi = 0;
    __asm ("ucomisd xmm2, qword [rsp + 8]");
    sil = (? > ?) ? 1 : 0;
    eax = 0;
    eax = printf (0x400a23);
    xmm2 = *(rsp);
    esi = 0;
    __asm ("ucomisd xmm2, qword [rsp + 8]");
    sil = (? >= ?) ? 1 : 0;
    eax = 0;
    eax = printf (0x400a23);
    xmm3 = *((rsp + 8));
    esi = 0;
    __asm ("ucomisd xmm3, qword [rsp]");
    sil = (? > ?) ? 1 : 0;
    eax = 0;
    eax = printf (0x400a23);
    xmm3 = *((rsp + 8));
    esi = 0;
    __asm ("ucomisd xmm3, qword [rsp]");
    sil = (? >= ?) ? 1 : 0;
    eax = 0;
    printf (0x400a23);
    eax = 0x7c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400560 */
#include <stdint.h>
 
int32_t use_int (int64_t arg1) {
    rdi = arg1;
    esi = edi;
    eax = 0;
    edi = 0x400a23;
    return printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x4006e0 */
#include <stdint.h>
 
void dbg_converting_between_floats_d1 (void) {
    /* void converting_between_floats_d1(); */
    xmm0 = 0;
    __asm ("cvtss2sd xmm0, dword [obj.global_float]");
    *(obj.global_double) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x4006b0 */
#include <stdint.h>
 
void dbg_converting_between_floats_f1 (void) {
    /* void converting_between_floats_f1(); */
    xmm0 = 0;
    __asm ("cvtsd2ss xmm0, qword [obj.global_double]");
    *(obj.global_float) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400990 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400400 */
#include <stdint.h>
 
int32_t dbg_main (void) {
    /* int main(); */
    r9d = 8;
    r8d = 8;
    ecx = 4;
    edx = 2;
    esi = 1;
    eax = 0;
    eax = printf ("%zu %zu %zu %zu %zu\n");
    ecx = 0x10;
    edx = 8;
    esi = 4;
    eax = 0;
    eax = printf (0x400a2e);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400720 */
#include <stdint.h>
 
void dbg_converting_between_floats_l2 (void) {
    /* void converting_between_floats_l2(); */
    *(fp_stack--) = *(obj.global_double);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400700 */
#include <stdint.h>
 
void dbg_converting_between_floats_d2 (void) {
    /* void converting_between_floats_d2(); */
    *(fp_stack--) = fp_stack[?];
    *(obj.global_double) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x4003c8 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400570 */
#include <stdint.h>
 
int32_t dbg_read_ints (void) {
    /* int read_ints(); */
    eax = *(obj.global_char);
    xmm0 = 0;
    xmm1 = 0;
    __asm ("cvtsi2sd xmm0, eax");
    eax = *(obj.global_short);
    __asm ("addsd xmm1, xmm0");
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, eax");
    eax = 1;
    __asm ("addsd xmm0, xmm1");
    xmm1 = 0;
    __asm ("cvtsi2sd xmm1, dword [obj.global_int]");
    __asm ("addsd xmm1, xmm0");
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, qword [obj.global_long]");
    __asm ("addsd xmm1, xmm0");
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, qword [obj.global_long_long]");
    __asm ("addsd xmm0, xmm1");
    printf (0x400a20);
    eax = 0x78;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O2/subject.exe @ 0x400b2f */
#include <stdint.h>
 
int64_t fcn_00400b2f (int64_t arg4, int64_t arg3, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rdi = arg1;
    *((rax + rax)) += dl;
    *(rax) += al;
    *(rax) += al;
    *(rax) += al;
    *((rdx + 0x52)) += edi;
    *(rcx) += al;
    if (*(rcx) >= 0) {
        *(rbx) += ebx;
        al |= 7;
        *((rax + 0x14100701)) |= dl;
        *(rax) += al;
        *((rax + rax)) += bl;
        *(rax) += al;
    }
    *(rax) += al;
    __asm ("stc");
}

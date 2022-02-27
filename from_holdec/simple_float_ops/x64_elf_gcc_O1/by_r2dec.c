/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400400 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [13] -r-x section size 1282 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400430 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400470 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x4004b0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6917) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6917) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x4004d0 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400900 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400644 */
#include <stdint.h>
 
void dbg_converting_between_floats_f2 (void) {
    /* void converting_between_floats_f2(); */
    *(fp_stack--) = fp_stack[?];
    *(obj.global_float) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x40060e */
#include <stdint.h>
 
void dbg_write_floats (double pi, int64_t arg8) {
    xmm0 = pi;
    xmm1 = arg8;
    /* void write_floats(double pi); */
    __asm ("cvtsd2ss xmm1, xmm0");
    *(obj.global_float) = xmm1;
    *(obj.global_double) = xmm0;
    *((rsp - 0x10)) = xmm0;
    *(fp_stack--) = *((rsp - 0x10));
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x4007cb */
#include <stdint.h>
 
int32_t dbg_constants (int64_t arg7) {
    double x;
    int64_t var_8h;
    xmm0 = arg7;
    /* int constants(double x); */
    *((rsp + 8)) = xmm0;
    __asm ("addsd xmm0, xmm0");
    use ();
    xmm0 = *((rsp + 8));
    __asm ("mulsd xmm0, qword [0x00400948]");
    use ();
    xmm0 = *((rsp + 8));
    __asm ("mulsd xmm0, qword [0x00400950]");
    use ();
    xmm0 = *((rsp + 8));
    __asm ("mulsd xmm0, qword [0x00400958]");
    use ();
    xmm0 = *((rsp + 8));
    __asm ("mulsd xmm0, qword [0x00400960]");
    use ();
    eax = 0x7d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x4004f6 */
#include <stdint.h>
 
int32_t dbg_use (double x) {
    xmm0 = x;
    /* void use(double x); */
    eax = 1;
    printf (0x400920);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x4003f0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x40059b */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x4005cb */
#include <stdint.h>
 
int32_t dbg_read_floats (int64_t arg7) {
    int64_t var_8h;
    xmm0 = arg7;
    /* int read_floats(); */
    __asm ("cvtss2sd xmm0, dword [obj.global_float]");
    __asm ("addsd xmm0, qword [0x00400940]");
    __asm ("addsd xmm0, qword [obj.global_double]");
    *(rsp) = xmm0;
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] += *(rsp);
    *((rsp + 8)) = fp_stack[0];
    fp_stack--;
    xmm0 = *((rsp + 8));
    use ();
    eax = 0x7a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400689 */
#include <stdint.h>
 
int32_t dbg_basic_operations (int64_t arg7, int64_t arg8) {
    double x;
    int64_t var_8h;
    xmm0 = arg7;
    xmm1 = arg8;
    /* int basic_operations(double x,double y); */
    *(rsp) = xmm0;
    *((rsp + 8)) = xmm1;
    __asm ("addsd xmm0, xmm1");
    use ();
    xmm0 = *(rsp);
    __asm ("subsd xmm0, qword [rsp + 8]");
    use ();
    xmm4 = *((rsp + 8));
    __asm ("subsd xmm4, qword [rsp]");
    __asm ("movapd xmm0, xmm4");
    use ();
    xmm0 = *(rsp);
    __asm ("mulsd xmm0, qword [rsp + 8]");
    use ();
    xmm0 = *(rsp);
    __asm ("divsd xmm0, qword [rsp + 8]");
    use ();
    xmm4 = *((rsp + 8));
    __asm ("divsd xmm4, qword [rsp]");
    __asm ("movapd xmm0, xmm4");
    use ();
    xmm0 = *(rsp);
    __asm ("xorpd xmm0, xmmword [0x00400970]");
    use ();
    eax = 0x7b;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400904 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x40066f */
#include <stdint.h>
 
void dbg_converting_between_floats_l1 (void) {
    /* void converting_between_floats_l1(); */
    *(fp_stack--) = *(obj.global_float);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400715 */
#include <stdint.h>
 
int32_t dbg_compare_floats (int64_t arg7, int64_t arg8) {
    double x;
    int64_t var_8h;
    xmm0 = arg7;
    xmm1 = arg8;
    /* int compare_floats(double x,double y); */
    __asm ("ucomisd xmm0, xmm1");
    __asm ("setnp dil");
    edi = (int32_t) dil;
    *(rsp) = xmm0;
    *((rsp + 8)) = xmm1;
    eax = 0;
    if (? != ?) {
        edi = eax;
    }
    use_int ();
    xmm2 = *(rsp);
    xmm3 = *((rsp + 8));
    __asm ("ucomisd xmm2, xmm3");
    __asm ("setp dil");
    edi = (int32_t) dil;
    eax = 1;
    if (? != ?) {
        edi = eax;
    }
    use_int ();
    xmm2 = *(rsp);
    __asm ("ucomisd xmm2, qword [rsp + 8]");
    dil = (? > ?) ? 1 : 0;
    edi = (int32_t) dil;
    use_int ();
    xmm2 = *(rsp);
    __asm ("ucomisd xmm2, qword [rsp + 8]");
    dil = (? >= ?) ? 1 : 0;
    edi = (int32_t) dil;
    use_int ();
    xmm3 = *((rsp + 8));
    __asm ("ucomisd xmm3, qword [rsp]");
    dil = (? > ?) ? 1 : 0;
    edi = (int32_t) dil;
    use_int ();
    xmm3 = *((rsp + 8));
    __asm ("ucomisd xmm3, qword [rsp]");
    dil = (? >= ?) ? 1 : 0;
    edi = (int32_t) dil;
    use_int ();
    eax = 0x7c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x40050e */
#include <stdint.h>
 
int32_t dbg_use_int (int32_t x) {
    rdi = x;
    /* void use_int(int x); */
    esi = edi;
    eax = 0;
    printf (0x400923);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400651 */
#include <stdint.h>
 
void dbg_converting_between_floats_d1 (int64_t arg7) {
    xmm0 = arg7;
    /* void converting_between_floats_d1(); */
    __asm ("cvtss2sd xmm0, dword [obj.global_float]");
    *(obj.global_double) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400633 */
#include <stdint.h>
 
void dbg_converting_between_floats_f1 (int64_t arg7) {
    xmm0 = arg7;
    /* void converting_between_floats_f1(); */
    __asm ("cvtsd2ss xmm0, qword [obj.global_double]");
    *(obj.global_float) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400890 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400834 */
#include <stdint.h>
 
int32_t dbg_main (void) {
    /* int main(); */
    r9d = 8;
    r8d = 8;
    ecx = 4;
    edx = 2;
    esi = 1;
    eax = 0;
    printf ("%zu %zu %zu %zu %zu\n");
    ecx = 0x10;
    edx = 8;
    esi = 4;
    eax = 0;
    printf (0x40092e);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x40067c */
#include <stdint.h>
 
void dbg_converting_between_floats_l2 (void) {
    /* void converting_between_floats_l2(); */
    *(fp_stack--) = *(obj.global_double);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400662 */
#include <stdint.h>
 
void dbg_converting_between_floats_d2 (void) {
    /* void converting_between_floats_d2(); */
    *(fp_stack--) = fp_stack[?];
    *(obj.global_double) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x4003c8 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400528 */
#include <stdint.h>
 
int32_t dbg_read_ints (void) {
    /* int read_ints(); */
    eax = *(obj.global_char);
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, eax");
    __asm ("movapd xmm1, xmm0");
    __asm ("addsd xmm1, qword [0x00400940]");
    eax = *(obj.global_short);
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, eax");
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
    use ();
    eax = 0x78;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O1/subject.exe @ 0x400a2f */
#include <stdint.h>
 
int64_t fcn_00400a2f (int64_t arg4, int64_t arg3, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rdi = arg1;
    *((rax + rax)) += dl;
    *(rax) += al;
    *(rax) += al;
    *(rax) += al;
    *((rdx + 0x52)) += edi;
    *(rcx) += al;
    if (*(rcx) < 0) {
        void (*0x400a4f)() ();
    }
    *(rbx) += ebx;
    al |= 7;
    *((rax + 0x14100701)) |= dl;
    *(rax) += al;
    *((rax + rax)) += bl;
    *(rax) += al;
    al = 0xf9;
    *((rax + 0x2bfffff9)) += dh;
    *(rax) += al;
    *(rax) += al;
    *(rax) += al;
    *(rax) += al;
    *(rax) += al;
    *((rax + rax)) += dl;
    *(rax) += al;
    *(rax) += al;
    *(rax) += al;
    *((rdx + 0x52)) += edi;
    *(rcx) += al;
    if (*(rcx) >= 0) {
        *(rbx) += ebx;
        al |= 7;
        *((rax + 0x24000001)) |= dl;
        *(rax) += al;
        *((rax + rax)) += bl;
        *(rax) += al;
    }
    *((rax - 7)) += ah;
}

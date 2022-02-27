/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x400400 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [13] -r-x section size 1570 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x400430 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x400470 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x4004b0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6917) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6917) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x4004d0 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x400a20 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x400716 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x4006cc */
#include <stdint.h>
 
void dbg_write_floats (int64_t arg7) {
    double pi;
    xmm0 = arg7;
    /* void write_floats(double pi); */
    *((rbp - 8)) = xmm0;
    __asm ("cvtsd2ss xmm0, qword [rbp - 8]");
    *(obj.global_float) = xmm0;
    xmm0 = *((rbp - 8));
    *(obj.global_double) = xmm0;
    *(fp_stack--) = *((rbp - 8));
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x4008e1 */
#include <stdint.h>
 
int32_t dbg_constants (int64_t arg1, int64_t arg7) {
    double x;
    rdi = arg1;
    xmm0 = arg7;
    /* int constants(double x); */
    *((rbp - 8)) = xmm0;
    xmm0 = *((rbp - 8));
    __asm ("addsd xmm0, xmm0");
    use (rdi);
    xmm1 = *((rbp - 8));
    xmm0 = *(0x00400a80);
    __asm ("mulsd xmm0, xmm1");
    use (rdi);
    xmm1 = *((rbp - 8));
    xmm0 = *(0x00400a88);
    __asm ("mulsd xmm0, xmm1");
    use (rdi);
    xmm1 = *((rbp - 8));
    xmm0 = *(0x00400a90);
    __asm ("mulsd xmm0, xmm1");
    use (rdi);
    xmm1 = *((rbp - 8));
    xmm0 = *(0x00400a98);
    __asm ("mulsd xmm0, xmm1");
    use (rdi);
    eax = 0x7d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x4004f6 */
#include <stdint.h>
 
int64_t dbg_use (int64_t arg7) {
    int64_t var_10h;
    double x;
    xmm0 = arg7;
    /* void use(double x); */
    *((rbp - 8)) = xmm0;
    rax = *((rbp - 8));
    *((rbp - 0x10)) = rax;
    xmm0 = *((rbp - 0x10));
    eax = 1;
    printf (0x400a40);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x4003f0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x400604 */
#include <stdint.h>
 
int32_t dbg_write_ints (int64_t arg7) {
    double pi;
    xmm0 = arg7;
    /* int write_ints(double pi); */
    *((rbp - 8)) = xmm0;
    xmm0 = *((rbp - 8));
    __asm ("cvttsd2si eax, xmm0");
    *(obj.global_char) = al;
    xmm0 = *((rbp - 8));
    __asm ("cvttsd2si eax, xmm0");
    *(obj.global_short) = ax;
    xmm0 = *((rbp - 8));
    __asm ("cvttsd2si eax, xmm0");
    *(obj.global_int) = eax;
    xmm0 = *((rbp - 8));
    __asm ("cvttsd2si rax, xmm0");
    *(obj.global_long) = rax;
    xmm0 = *((rbp - 8));
    __asm ("cvttsd2si rax, xmm0");
    *(obj.global_long_long) = rax;
    eax = 0x79;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x400664 */
#include <stdint.h>
 
int64_t dbg_read_floats (int64_t arg1) {
    int64_t var_20h;
    double sum;
    rdi = arg1;
    /* int read_floats(); */
    xmm0 = 0;
    *((rbp - 8)) = xmm0;
    xmm0 = global_float;
    __asm ("cvtss2sd xmm0, xmm0");
    xmm1 = *((rbp - 8));
    __asm ("addsd xmm0, xmm1");
    *((rbp - 8)) = xmm0;
    xmm0 = global_double;
    xmm1 = *((rbp - 8));
    __asm ("addsd xmm0, xmm1");
    *((rbp - 8)) = xmm0;
    *(fp_stack--) = *((rbp - 8));
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((rbp - 8)) = fp_stack[0];
    fp_stack--;
    rax = *((rbp - 8));
    *((rbp - 0x20)) = rax;
    xmm0 = *((rbp - 0x20));
    use (rdi);
    eax = 0x7a;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x400791 */
#include <stdint.h>
 
int32_t dbg_basic_operations (int64_t arg1, int64_t arg7, int64_t arg8) {
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
    xmm1 = *((rbp - 8));
    xmm0 = *(0x00400a70);
    __asm ("xorpd xmm0, xmm1");
    use (rdi);
    eax = 0x7b;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x400a24 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x40076b */
#include <stdint.h>
 
void dbg_converting_between_floats_l1 (void) {
    /* void converting_between_floats_l1(); */
    *(fp_stack--) = *(obj.global_float);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x40081a */
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
    __asm ("setnp al");
    edx = 0;
    xmm0 = *((rbp - 8));
    __asm ("ucomisd xmm0, qword [rbp - 0x10]");
    if (? != ?) {
        eax = edx;
    }
    eax = (int32_t) al;
    use_int (eax);
    xmm0 = *((rbp - 8));
    __asm ("ucomisd xmm0, qword [rbp - 0x10]");
    __asm ("setp al");
    edx = 1;
    xmm0 = *((rbp - 8));
    __asm ("ucomisd xmm0, qword [rbp - 0x10]");
    if (? != ?) {
        eax = edx;
    }
    eax = (int32_t) al;
    use_int (eax);
    xmm0 = *((rbp - 8));
    __asm ("ucomisd xmm0, qword [rbp - 0x10]");
    al = (? > ?) ? 1 : 0;
    eax = (int32_t) al;
    use_int (eax);
    xmm0 = *((rbp - 8));
    __asm ("ucomisd xmm0, qword [rbp - 0x10]");
    al = (? >= ?) ? 1 : 0;
    eax = (int32_t) al;
    use_int (eax);
    xmm0 = *((rbp - 0x10));
    __asm ("ucomisd xmm0, qword [rbp - 8]");
    al = (? > ?) ? 1 : 0;
    eax = (int32_t) al;
    use_int (eax);
    xmm0 = *((rbp - 0x10));
    __asm ("ucomisd xmm0, qword [rbp - 8]");
    al = (? >= ?) ? 1 : 0;
    eax = (int32_t) al;
    use_int (eax);
    eax = 0x7c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x400522 */
#include <stdint.h>
 
int32_t dbg_use_int (int64_t arg1) {
    int32_t x;
    rdi = arg1;
    /* void use_int(int x); */
    *((rbp - 4)) = edi;
    eax = *((rbp - 4));
    esi = *((rbp - 4));
    eax = 0;
    printf (0x400a43);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x400733 */
#include <stdint.h>
 
void dbg_converting_between_floats_d1 (void) {
    /* void converting_between_floats_d1(); */
    xmm0 = global_float;
    __asm ("cvtss2sd xmm0, xmm0");
    *(obj.global_double) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x4006fb */
#include <stdint.h>
 
void dbg_converting_between_floats_f1 (void) {
    /* void converting_between_floats_f1(); */
    xmm0 = global_double;
    __asm ("cvtsd2ss xmm0, xmm0");
    *(obj.global_float) = xmm0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x4009b0 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x40095b */
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
    printf ("%zu %zu %zu\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x40077e */
#include <stdint.h>
 
void dbg_converting_between_floats_l2 (void) {
    /* void converting_between_floats_l2(); */
    *(fp_stack--) = *(obj.global_double);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x40074e */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x4003c8 */
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
/* SUBJECTS/from_holdec/simple_float_ops/x64_elf_gcc_O0/subject.exe @ 0x400544 */
#include <stdint.h>
 
uint64_t dbg_read_ints (int64_t arg1) {
    int64_t var_18h;
    double sum;
    rdi = arg1;
    /* int read_ints(); */
    xmm0 = 0;
    *((rbp - 8)) = xmm0;
    eax = *(obj.global_char);
    eax = (int32_t) al;
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, eax");
    xmm1 = *((rbp - 8));
    __asm ("addsd xmm0, xmm1");
    *((rbp - 8)) = xmm0;
    eax = *(obj.global_short);
    eax = (int32_t) ax;
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, eax");
    xmm1 = *((rbp - 8));
    __asm ("addsd xmm0, xmm1");
    *((rbp - 8)) = xmm0;
    eax = *(obj.global_int);
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, eax");
    xmm1 = *((rbp - 8));
    __asm ("addsd xmm0, xmm1");
    *((rbp - 8)) = xmm0;
    rax = *(obj.global_long);
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, rax");
    xmm1 = *((rbp - 8));
    __asm ("addsd xmm0, xmm1");
    *((rbp - 8)) = xmm0;
    rax = global_long_long;
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, rax");
    xmm1 = *((rbp - 8));
    __asm ("addsd xmm0, xmm1");
    *((rbp - 8)) = xmm0;
    rax = *((rbp - 8));
    *((rbp - 0x18)) = rax;
    xmm0 = *((rbp - 0x18));
    use (rdi);
    eax = 0x78;
    return rax;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x4003d0 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x400400 */
#include <stdint.h>
 
int64_t deregister_tm_clones (void) {
    eax = 0x601027;
    rax -= obj.sum;
    if (rax > 0xe) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.sum;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x400440 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = obj.sum;
    rsi -= obj.sum;
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
        edi = obj.sum;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x400480 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6917) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6917) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x4004a0 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    edi = obj.__JCR_LIST__;
    while (rax == 0) {
        void (*0x400440)() ();
        eax = 0;
    }
    void (*rax)() ();
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x400600 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x4004db */
#include <stdint.h>
 
int64_t dbg_with_array (int32_t n) {
    int32_t fixed1;
    int32_t fixed2;
    int32_t dynamic;
    rdi = n;
    /* void with_array(int n); */
    rax = (int64_t) edi;
    rsi = rax;
    rax = rax*4 + 0x12;
    rax &= 0xfffffffffffffff0;
    *((rbp - 8)) = 7;
    *((rbp - 4)) = 8;
    rdi = rsp;
    fill ();
    rdi = rbp - 8;
    use ();
    rdi = rsp;
    use ();
    rdi = rbp - 4;
    use ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x4004cf */
#include <stdint.h>
 
int8_t dbg_fill (int32_t n, int * dest) {
    rsi = n;
    rdi = dest;
    /* void fill(int * dest,int n); */
    rcx = (int64_t) esi;
    al = 0x78;
    rcx <<= 2;
    do {
        *(rdi) = al;
        rcx--;
        rdi++;
    } while (rcx != 0);
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x4004c6 */
#include <stdint.h>
 
int32_t dbg_use (int * x) {
    rdi = x;
    /* void use(int * x); */
    eax = *(rdi);
    *(obj.sum) += eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x400604 */
#include <stdint.h>
 
void fini (void) {
    /* [12] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x40052a */
#include <stdint.h>
 
int64_t dbg_with_alloca (int * dynamic, int32_t n) {
    int32_t fixed1;
    int32_t fixed2;
    int64_t var_fh;
    rdx = dynamic;
    rdi = n;
    /* void with_alloca(int n); */
    rax = (int64_t) edi;
    rsi = rax;
    rax = rax*4 + 0x1e;
    rax &= 0xfffffffffffffff0;
    *((rbp - 8)) = 7;
    *((rbp - 4)) = 8;
    rdx = rsp + 0xf;
    rdx &= 0xfffffffffffffff0;
    rdi = rdx;
    fill ();
    rdi = rbp - 8;
    use ();
    rdi = rdx;
    use ();
    rdi = rbp - 4;
    use ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x400590 */
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
    _init ();
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x4003b0 */
#include <stdint.h>
 
uint32_t dbg_main (char ** argv, int32_t argc) {
    rsi = argv;
    rdi = argc;
    /* int main(int argc,char ** argv); */
    r8d = edi;
    with_alloca ();
    edi = r8d;
    eax = with_array ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_Os/subject.exe @ 0x400390 */
#include <stdint.h>
 
int64_t init (void) {
    /* [10] -r-x section size 23 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}

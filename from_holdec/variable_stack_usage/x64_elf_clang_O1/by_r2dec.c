/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x400400 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [13] -r-x section size 658 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x400430 */
#include <stdint.h>
 
int64_t deregister_tm_clones (void) {
    eax = 0x60102f;
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x400470 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x4004b0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6917) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6917) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x4004d0 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x400690 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x400530 */
#include <stdint.h>
 
int32_t dbg_with_array (int32_t dynamic, int32_t n, int64_t arg1) {
    int64_t var_18h;
    int64_t var_14h;
    int64_t var_10h;
    rbx = dynamic;
    rax = n;
    rdi = arg1;
    /* void with_array(int n); */
    eax = edi;
    r14 = rsp;
    *((rbp - 0x18)) = 7;
    ecx = eax;
    rcx = rcx*4 + 0xf;
    rdx = 0x7fffffff0;
    rdx &= rcx;
    rbx = rsp;
    rbx -= rdx;
    *((rbp - 0x14)) = 8;
    rdi = rbx;
    esi = eax;
    fill ();
    rdi = rbp - 0x18;
    use ();
    rdi = rbx;
    use ();
    rdi = rbp - 0x14;
    use ();
    rsp = rbp - 0x10;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x400510 */
#include <stdint.h>
 
void dbg_fill (int32_t n, int * dest) {
    rsi = n;
    rdi = dest;
    /* void fill(int * dest,int n); */
    rdx = (int64_t) esi;
    rdx <<= 2;
    esi = 0x78;
    return memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x400500 */
#include <stdint.h>
 
int32_t dbg_use (int * x) {
    rdi = x;
    /* void use(int * x); */
    eax = *(rdi);
    *(obj.sum) += eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x400694 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x4005a0 */
#include <stdint.h>
 
uint64_t dbg_with_alloca (int * dynamic, int32_t n) {
    int64_t var_10h;
    int64_t var_ch;
    int64_t var_8h;
    rbx = dynamic;
    rdi = n;
    /* void with_alloca(int n); */
    *((rbp - 0x10)) = 7;
    rsi = (int64_t) edi;
    rbx = rsp;
    rax = rsi*4 + 0xf;
    rax &= 0xfffffffffffffff0;
    rbx -= rax;
    *((rbp - 0xc)) = 8;
    rdi = rbx;
    fill ();
    rdi = rbp - 0x10;
    use ();
    rdi = rbx;
    use ();
    rdi = rbp - 0xc;
    use ();
    rsp = rbp - 8;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x400620 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x400600 */
#include <stdint.h>
 
uint32_t dbg_main (char ** argv, int32_t argc) {
    rsi = argv;
    rdi = argc;
    /* int main(int argc,char ** argv); */
    ebx = edi;
    with_alloca ();
    eax = with_array (ebx);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x4003c8 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O1/subject.exe @ 0x4003f0 */
#include <stdint.h>
 
void memset (void) {
    memset ();
}

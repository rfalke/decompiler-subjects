/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x400400 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [13] -r-x section size 738 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x400430 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x400470 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x4004b0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6917) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6917) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x4004d0 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x4006e0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x400550 */
#include <stdint.h>
 
uint64_t dbg_with_array (int64_t arg1) {
    int32_t dynamic;
    int32_t fixed2;
    int64_t var_10h;
    int32_t fixed1;
    int32_t n;
    rdi = arg1;
    /* void with_array(int n); */
    *((rbp - 4)) = edi;
    *((rbp - 8)) = 7;
    edi = *((rbp - 4));
    eax = *((rbp - 4));
    rcx = rsp;
    *((rbp - 0x10)) = rcx;
    rax = rax*4 + 0xf;
    rcx = 0x7fffffff0;
    rax &= rcx;
    rcx = rsp;
    rcx -= rax;
    *((rbp - 0x14)) = 8;
    rdi = rcx;
    *((rbp - 0x20)) = rcx;
    fill (rdi, *((rbp - 4)));
    use (rbp - 8);
    use (*((rbp - 0x20)));
    use (rbp - 0x14);
    rax = *((rbp - 0x10));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x400520 */
#include <stdint.h>
 
int32_t dbg_fill (size_t arg2, void * arg1) {
    int32_t n;
    int * dest;
    rsi = arg2;
    rdi = arg1;
    /* void fill(int * dest,int n); */
    eax = 0x78;
    *((rbp - 8)) = rdi;
    *((rbp - 0xc)) = esi;
    rcx = *((rbp - 0xc));
    rcx <<= 2;
    memset (*((rbp - 8)), eax, rcx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x4003f0 */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x400500 */
#include <stdint.h>
 
int32_t dbg_use (int64_t arg1) {
    int * x;
    rdi = arg1;
    /* void use(int * x); */
    *((rbp - 8)) = rdi;
    rdi = *((rbp - 8));
    eax = *(rdi);
    eax += *(obj.sum);
    *(obj.sum) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x4006e4 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x4005d0 */
#include <stdint.h>
 
int64_t dbg_with_alloca (int64_t arg1) {
    int32_t fixed2;
    int * dynamic;
    int32_t fixed1;
    int32_t n;
    rdi = arg1;
    /* void with_alloca(int n); */
    *((rbp - 4)) = edi;
    *((rbp - 8)) = 7;
    rax = *((rbp - 4));
    rax = rax*4 + 0xf;
    rax &= 0xfffffffffffffff0;
    rcx = rsp;
    rcx -= rax;
    *((rbp - 0x10)) = rcx;
    *((rbp - 0x14)) = 8;
    fill (*((rbp - 0x10)), *((rbp - 4)));
    use (rbp - 8);
    use (*((rbp - 0x10)));
    use (rbp - 0x14);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x400670 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x400640 */
#include <stdint.h>
 
uint32_t dbg_main (char ** argv, int32_t argc) {
    char ** var_10h;
    int64_t var_8h;
    int64_t var_4h;
    rsi = argv;
    rdi = argc;
    /* int main(int argc,char ** argv); */
    *((rbp - 4)) = 0;
    *((rbp - 8)) = edi;
    *((rbp - 0x10)) = rsi;
    with_alloca (*((rbp - 8)));
    eax = with_array (*((rbp - 8)));
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_clang_O0/subject.exe @ 0x4003c8 */
#include <stdint.h>
 
int64_t init (void) {
    /* [11] -r-x section size 23 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}

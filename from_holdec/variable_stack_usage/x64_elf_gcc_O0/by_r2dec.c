/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x400400 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [13] -r-x section size 834 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x400430 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x400470 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x4004b0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6917) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6917) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x4004d0 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x400740 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x400545 */
#include <stdint.h>
 
int64_t dbg_with_array (int64_t arg1) {
    int32_t n;
    int32_t fixed2;
    int32_t fixed1;
    int[4] dynamic;
    int64_t var_18h;
    int64_t var_8h;
    rdi = arg1;
    /* void with_array(int n); */
    *((rbp - 0x34)) = edi;
    rax = rsp;
    rbx = rsp;
    *((rbp - 0x24)) = 7;
    eax = *((rbp - 0x34));
    rdx = (int64_t) eax;
    rdx--;
    *((rbp - 0x18)) = rdx;
    rdx = (int64_t) eax;
    r10 = rdx;
    r11d = 0;
    rdx = (int64_t) eax;
    r8 = rdx;
    r9d = 0;
    rax = (int64_t) eax;
    rax <<= 2;
    rdx = rax + 3;
    eax = 0x10;
    rax--;
    rax += rdx;
    ecx = 0x10;
    edx = 0;
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    rax *= 0x10;
    rax = rsp;
    rax += 3;
    rax >>= 2;
    rax <<= 2;
    *((rbp - 0x20)) = rax;
    *((rbp - 0x28)) = 8;
    rax = *((rbp - 0x20));
    edx = *((rbp - 0x34));
    fill (rax, *((rbp - 0x34)));
    rax = rbp - 0x24;
    use (rax);
    rax = *((rbp - 0x20));
    use (*((rbp - 0x20)));
    rax = rbp - 0x28;
    use (rax);
    rbx = *((rbp - 8));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x400515 */
#include <stdint.h>
 
int64_t dbg_fill (size_t arg2, void * arg1) {
    int32_t n;
    int * dest;
    rsi = arg2;
    rdi = arg1;
    /* void fill(int * dest,int n); */
    *((rbp - 8)) = rdi;
    *((rbp - 0xc)) = esi;
    eax = *((rbp - 0xc));
    rax = (int64_t) eax;
    rax = *((rbp - 8));
    memset (rax, 0x78, rax*4);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x4003f0 */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x4004f6 */
#include <stdint.h>
 
int64_t dbg_use (int64_t arg1) {
    int * x;
    rdi = arg1;
    /* void use(int * x); */
    *((rbp - 8)) = rdi;
    rax = *((rbp - 8));
    edx = *(rax);
    eax = *(obj.sum);
    eax += edx;
    *(obj.sum) = eax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x400744 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x400607 */
#include <stdint.h>
 
int64_t dbg_with_alloca (int64_t arg1) {
    int32_t n;
    int32_t fixed2;
    int32_t fixed1;
    int * dynamic;
    rdi = arg1;
    /* void with_alloca(int n); */
    *((rbp - 0x14)) = edi;
    *((rbp - 0xc)) = 7;
    eax = *((rbp - 0x14));
    rax = (int64_t) eax;
    rax <<= 2;
    rdx = rax + 0xf;
    eax = 0x10;
    rax--;
    rax += rdx;
    ecx = 0x10;
    edx = 0;
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    rax *= 0x10;
    rax = rsp;
    rax += 0xf;
    rax >>= 4;
    rax <<= 4;
    *((rbp - 8)) = rax;
    *((rbp - 0x10)) = 8;
    edx = *((rbp - 0x14));
    rax = *((rbp - 8));
    fill (rax, edx);
    rax = rbp - 0xc;
    use (rax);
    rax = *((rbp - 8));
    use (*((rbp - 8)));
    rax = rbp - 0x10;
    use (rax);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x4006d0 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x400698 */
#include <stdint.h>
 
int32_t dbg_main (char ** argv, int32_t argc) {
    char ** var_10h;
    int64_t var_4h;
    rsi = argv;
    rdi = argc;
    /* int main(int argc,char ** argv); */
    *((rbp - 4)) = edi;
    *((rbp - 0x10)) = rsi;
    eax = *((rbp - 4));
    with_alloca (*((rbp - 4)));
    eax = *((rbp - 4));
    with_array (*((rbp - 4)));
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/x64_elf_gcc_O0/subject.exe @ 0x4003c8 */
#include <stdint.h>
 
int64_t init (void) {
    /* [11] -r-x section size 23 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}

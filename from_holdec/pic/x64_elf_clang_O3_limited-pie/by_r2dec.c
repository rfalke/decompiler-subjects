/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x401040 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [13] -r-x section size 453 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = .annobin_elf_init.c;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x401080 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = obj.completed.7287;
    if (rax != obj.completed.7287) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.completed.7287;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x4010b0 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = obj.completed.7287;
    rsi -= obj.completed.7287;
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
        edi = obj.completed.7287;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x4010f0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.7287) == 0) {
        deregister_tm_clones ();
        *(obj.completed.7287) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x401120 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x401200 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x401208 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x401190 */
#include <stdint.h>
 
uint64_t loc_annobin_elf_init_c (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15 = rdx;
    r14 = rsi;
    r13d = edi;
    r12 = obj___frame_dummy_init_array_entry;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    rbp -= r12;
    rax = _init ();
    rbp >>= 3;
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r15;
        rsi = r14;
        edi = r13d;
        uint64_t (*r12 + rbx*8)() ();
        rbx++;
    } while (rbp != rbx);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x401070 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x401150 */
#include <stdint.h>
 
int32_t dbg_main (void) {
    /* int main(); */
    esi = *(obj.a_global);
    eax = 0;
    eax = printf ("in main: %d\n");
    esi = *(obj.a_global);
    esi++;
    *(obj.a_global) = esi;
    eax = 0;
    eax = printf ("in func: %d\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x401030 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x401130 */
#include <stdint.h>
 
int32_t a_func (void) {
    esi = *(obj.a_global);
    rdi = "in func: %d\n";
    eax = 0;
    return printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/pic/x64_elf_clang_O3_limited-pie/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t init (void) {
    /* [11] -r-x section size 27 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}

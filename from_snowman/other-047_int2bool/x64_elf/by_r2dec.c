/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x400480 */
#include <stdint.h>
 
void entry0 (func rtld_fini, void * stack_end) {
    rdx = rtld_fini;
    xmm0 = stack_end;
    /* [13] -r-x section size 450 named .text */
    ebp = 0;
    return libc_start_main (main, rsi, rsp, sym.__libc_csu_init, sym.__libc_csu_fini, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x400470 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x4004b0 */
#include <stdint.h>
 
int64_t deregister_tm_clones (void) {
    eax = 0x600a0f;
    rax -= obj.completed.6392;
    while (rax == 0) {
        return rax;
        eax = 0;
    }
    edi = obj.completed.6392;
    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x4004e0 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    eax = obj.completed.6392;
    rax -= obj.completed.6392;
    rax >>= 3;
    rdx = rax;
    rdx >>= 0x3f;
    rax += rdx;
    rax >>= 1;
    while (rdx == 0) {
        return rax;
        edx = 0;
    }
    rsi = rax;
    edi = obj.completed.6392;
    return void (*rdx)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x400520 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6392) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6392) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x400540 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    if (*(obj.__JCR_LIST__) != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.__JCR_LIST__;
        void (*rax)() ();
        void (*0x4004e0)() ();
    }
label_0:
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x400640 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x400644 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x400578 */
#include <stdint.h>
 
int32_t g_bool_ (int64_t arg1) {
    int64_t var_4h;
    rdi = arg1;
    /* g(bool) */
    eax = edi;
    *((rbp - 4)) = al;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x40056d */
#include <stdint.h>
 
int32_t f_ (void) {
    /* f() */
    eax = 0xa;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x4005b0 */
#include <stdint.h>
 
uint64_t libc_csu_init (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rsp - 0x28)) = rbp;
    *((rsp - 0x20)) = r12;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    r12 = obj___frame_dummy_init_array_entry;
    *((rsp - 0x30)) = rbx;
    *((rsp - 0x18)) = r13;
    *((rsp - 0x10)) = r14;
    *((rsp - 8)) = r15;
    rbp -= r12;
    r15d = edi;
    r14 = rsi;
    rbp >>= 3;
    r13 = rdx;
    ebx = 0;
    rax = _init ();
    if (rbp == 0) {
        goto label_0;
    }
    do {
        rdx = r13;
        rsi = r14;
        edi = r15d;
        uint64_t (*r12 + rbx*8)() ();
        rbx++;
    } while (rbx != rbp);
label_0:
    rbx = *((rsp + 8));
    rbp = *((rsp + 0x10));
    r12 = *((rsp + 0x18));
    r13 = *((rsp + 0x20));
    r14 = *((rsp + 0x28));
    r15 = *((rsp + 0x30));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x400583 */
#include <stdint.h>
 
int32_t main (void) {
    eax = f() ();
    al = (eax != 0) ? 1 : 0;
    eax = (int32_t) al;
    edi = eax;
    g(bool) ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x400430 */
#include <stdint.h>
 
int64_t init (void) {
    /* [11] -r-x section size 26 named .init */
    rax = .got;
    if (rax != 0) {
        loc_imp_gmon_start_ ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-047_int2bool/x64_elf/subject.exe @ 0x400460 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}

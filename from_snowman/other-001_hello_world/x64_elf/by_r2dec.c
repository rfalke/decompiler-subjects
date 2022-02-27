/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-001_hello_world/x64_elf/subject.exe @ 0x400400 */
#include <stdint.h>
 
void entry0 (func rtld_fini, void * stack_end) {
    rdx = rtld_fini;
    xmm0 = stack_end;
    /* [14] -r-x section size 472 named .text */
    ebp = 0;
    return libc_start_main (main, rsi, rsp, sym.__libc_csu_init, sym.__libc_csu_fini, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-001_hello_world/x64_elf/subject.exe @ 0x4003f0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-001_hello_world/x64_elf/subject.exe @ 0x40042c */
#include <stdint.h>
 
int64_t call_gmon_start (void) {
    rax = .got;
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-001_hello_world/x64_elf/subject.exe @ 0x400450 */
#include <stdint.h>
 
int64_t do_global_dtors_aux (void) {
    if (*(obj.completed.6341) != 0) {
        goto label_0;
    }
    ebx = obj.__DTOR_END__;
    rax = *(obj.dtor_idx.6343);
    rbx -= obj.__DTOR_LIST__;
    rbx >>= 3;
    rbx--;
    if (rax >= rbx) {
        goto label_1;
    }
    do {
        rax++;
        *(obj.dtor_idx.6343) = rax;
        uint64_t (*rax*8 + obj.__DTOR_LIST__)() ();
        rax = *(obj.dtor_idx.6343);
    } while (rax < rbx);
label_1:
    *(obj.completed.6341) = 1;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-001_hello_world/x64_elf/subject.exe @ 0x4004c0 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    if (*(obj.__JCR_LIST__) != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.__JCR_LIST__;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-001_hello_world/x64_elf/subject.exe @ 0x4005a0 */
#include <stdint.h>
 
int64_t do_global_ctors_aux (void) {
    rax = .ctors;
    if (rax == -1) {
        goto label_0;
    }
    ebx = .ctors;
    do {
        rbx -= 8;
        void (*rax)() ();
        rax = *(rbx);
    } while (rax != -1);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-001_hello_world/x64_elf/subject.exe @ 0x400500 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-001_hello_world/x64_elf/subject.exe @ 0x4005d8 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 14 named .fini */
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-001_hello_world/x64_elf/subject.exe @ 0x400510 */
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
    rbp = loc___init_array_end;
    r12 = loc___init_array_end;
    *((rsp - 0x18)) = r13;
    *((rsp - 0x10)) = r14;
    *((rsp - 8)) = r15;
    *((rsp - 0x30)) = rbx;
    rbp -= r12;
    r13d = edi;
    r14 = rsi;
    rbp >>= 3;
    r15 = rdx;
    rax = _init ();
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
    } while (rbx < rbp);
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
/* SUBJECTS/from_snowman/other-001_hello_world/x64_elf/subject.exe @ 0x4004e4 */
#include <stdint.h>
 
int32_t main (void) {
    puts ("Hello, World!");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-001_hello_world/x64_elf/subject.exe @ 0x4003e0 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-001_hello_world/x64_elf/subject.exe @ 0x4003b8 */
#include <stdint.h>
 
void init (void) {
    /* [12] -r-x section size 24 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}

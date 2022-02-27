/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x400410 */
#include <stdint.h>
 
void entry0 (func rtld_fini, void * stack_end) {
    rdx = rtld_fini;
    xmm0 = stack_end;
    /* [13] -r-x section size 466 named .text */
    ebp = 0;
    return libc_start_main (main, rsi, rsp, sym.__libc_csu_init, sym.__libc_csu_fini, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x4003f0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x400440 */
#include <stdint.h>
 
int64_t deregister_tm_clones (void) {
    eax = 0x600987;
    rax -= obj.completed.6372;
    while (rax == 0) {
        return rax;
        eax = 0;
    }
    edi = obj.completed.6372;
    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x400470 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    eax = obj.completed.6372;
    rax -= obj.completed.6372;
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
    edi = obj.completed.6372;
    return void (*rdx)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x4004b0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6372) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6372) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x4004d0 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    if (*(obj.__JCR_LIST__) != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.__JCR_LIST__;
        void (*rax)() ();
        void (*0x400470)() ();
    }
label_0:
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x4005e4 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x400570 */
#include <stdint.h>
 
void libc_csu_init (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15d = edi;
    r14 = rsi;
    r13 = rdx;
    r12 = obj___frame_dummy_init_array_entry;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    rbp -= r12;
    ebx = 0;
    rbp >>= 3;
    _init ();
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
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x400543 */
#include <stdint.h>
 
int32_t main (void) {
    edi = 5;
    eax = 0;
    eax = fib ();
    esi = eax;
    eax = 0;
    printf (0x4005f4);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x4004fd */
#include <stdint.h>
 
int32_t fib (signed int64_t arg1) {
    signed int64_t var_14h;
    rdi = arg1;
    do {
label_0:
        *((rbp - 0x14)) = edi;
        if (*((rbp - 0x14)) <= 1) {
            eax = *((rbp - 0x14));
            goto label_1;
        }
        eax = *((rbp - 0x14));
        eax--;
        edi = eax;
        eax = 0;
        eax = fib ();
    } while (1);
    ebx = eax;
    eax = *((rbp - 0x14));
    eax -= 2;
    edi = eax;
    eax = 0;
    eax = fib ();
    goto label_0;
    eax += ebx;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x4003e0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x4003a8 */
#include <stdint.h>
 
int64_t init (void) {
    /* [11] -r-x section size 26 named .init */
    rax = .got;
    if (rax != 0) {
        gmon_start_ ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-057_fib/x64_elf/subject.exe @ 0x400400 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}

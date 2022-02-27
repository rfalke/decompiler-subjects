/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x4004a0 */
#include <stdint.h>
 
void entry0 (func rtld_fini, void * stack_end) {
    rdx = rtld_fini;
    xmm0 = stack_end;
    /* [13] -r-x section size 738 named .text */
    ebp = 0;
    return libc_start_main (main, rsi, rsp, sym.__libc_csu_init, sym.__libc_csu_fini, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400460 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x4004d0 */
#include <stdint.h>
 
int64_t deregister_tm_clones (void) {
    eax = 0x600b3f;
    rax -= obj.completed.6391;
    while (rax == 0) {
        return rax;
        eax = 0;
    }
    edi = obj.completed.6391;
    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400500 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    eax = obj.completed.6391;
    rax -= obj.completed.6391;
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
    edi = obj.completed.6391;
    return void (*rdx)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400540 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6391) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6391) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400560 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    if (*(obj.__JCR_LIST__) != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.__JCR_LIST__;
        void (*rax)() ();
        void (*0x400500)() ();
    }
label_0:
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400780 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400614 */
#include <stdint.h>
 
int64_t printout (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    do {
label_0:
        *((rbp - 8)) = rdi;
        rax = *((rbp - 8));
        rax = *((rax + 0x10));
        if (rax == 0) {
            goto label_1;
        }
        rax = *((rbp - 8));
        rax = *((rax + 0x10));
        rdi = *((rax + 0x10));
        printout ();
    } while (1);
label_1:
    rax = *((rbp - 8));
    eax = *(rax);
    esi = *(rax);
    eax = 0;
    printf (0x400794);
    rax = *((rbp - 8));
    rax = *((rax + 8));
    if (rax != 0) {
        rax = *((rbp - 8));
        rax = *((rax + 8));
        rdi = *((rax + 8));
        printout ();
        goto label_0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400784 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x4006f0 */
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
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400673 */
#include <stdint.h>
 
int32_t main (void) {
    int64_t var_18h;
    void * var_10h;
    signed int64_t var_4h;
    *((rbp - 0x18)) = 0;
    *((rbp - 4)) = 1;
    while (*((rbp - 4)) <= 0xa) {
        rax = malloc (0x18);
        *((rbp - 0x10)) = rax;
        rax = *((rbp - 0x10));
        *((rax + 8)) = 0;
        rax = *((rbp - 0x10));
        rdx = *((rax + 8));
        rax = *((rbp - 0x10));
        *((rax + 0x10)) = rdx;
        eax = rand ();
        rdx = *((rbp - 0x10));
        *(rdx) = eax;
        rdx = *((rbp - 0x10));
        rax = rbp - 0x18;
        rsi = rdx;
        rdi = rax;
        insert ();
        *((rbp - 4))++;
    }
    rax = *((rbp - 0x18));
    rdi = *((rbp - 0x18));
    printout ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x40058d */
#include <stdint.h>
 
int64_t insert (void * arg2, int64_t arg1) {
    void * var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    do {
label_0:
        *((rbp - 8)) = rdi;
        *((rbp - 0x10)) = rsi;
        rax = *((rbp - 8));
        rax = *(rax);
        if (rax == 0) {
            rax = *((rbp - 8));
            rdx = *((rbp - 0x10));
            *(rax) = rdx;
            goto label_1;
        }
        rax = *((rbp - 0x10));
        edx = *(rax);
        rax = *((rbp - 8));
        rax = *(rax);
        eax = *(rax);
        if (edx >= eax) {
            goto label_2;
        }
        rax = *((rbp - 8));
        rax = *(rax);
        rdx = rax + 0x10;
        rax = *((rbp - 0x10));
        rsi = *((rbp - 0x10));
        rdi = rdx;
        insert ();
    } while (1);
    goto label_1;
label_2:
    rax = *((rbp - 0x10));
    edx = *(rax);
    rax = *((rbp - 8));
    rax = *(rax);
    eax = *(rax);
    if (edx > eax) {
        rax = *((rbp - 8));
        rax = *(rax);
        rdx = rax + 8;
        rax = *((rbp - 0x10));
        rsi = *((rbp - 0x10));
        rdi = rdx;
        insert ();
        goto label_0;
    }
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400418 */
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
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400470 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400450 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400480 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/x64_elf/subject.exe @ 0x400490 */
#include <stdint.h>
 
void rand (void) {
    rand ();
}

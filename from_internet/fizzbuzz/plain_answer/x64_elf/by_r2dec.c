/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x4010f0 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = sym.__libc_csu_init;
    rdi = .text;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x401130 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = loc._end;
    if (rax != loc._end) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = loc._end;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x401160 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = loc._end;
    rsi -= loc._end;
    rax = rsi;
    rsi >>= 0x3f;
    rax >>= 3;
    rsi += rax;
    rsi >>= 1;
    if (rsi != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = loc._end;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x4011a0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.0) == 0) {
        deregister_tm_clones ();
        *(obj.completed.0) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x4011d0 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x401250 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x401258 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x4011e0 */
#include <stdint.h>
 
uint64_t libc_csu_init (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15 = obj___frame_dummy_init_array_entry;
    r14 = rdx;
    r13 = rsi;
    r12d = edi;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    rbp -= r15;
    rax = _init ();
    rbp >>= 3;
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r14;
        rsi = r13;
        edi = r12d;
        uint64_t (*r15 + rbx*8)() ();
        rbx++;
    } while (rbp != rbx);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x401120 */
#include <stdint.h>
 
void loc_annobin_lto_1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x401050 */
#include <stdint.h>
 
int32_t main (void) {
    /* [14] -r-x section size 517 named .text */
    ebx = 1;
    while (edx <= 0x55555555) {
        if (eax == 0) {
            goto label_2;
        }
        puts ("Fizz");
label_1:
        ebx++;
        if (ebx == 0x3b9aca00) {
            goto label_3;
        }
label_0:
        eax = ebx;
        rax *= rbp;
        rax >>= 0x22;
        edx = rax * 5;
        eax = ebx;
        eax -= edx;
        edx = ebx * 0xaaaaaaab;
    }
    if (eax != 0) {
        goto label_4;
    }
    ebx++;
    eax = puts (0x402014);
    if (ebx != 0x3b9aca00) {
        goto label_0;
    }
label_3:
    eax = 0;
    return rax;
label_4:
    esi = ebx;
    eax = 0;
    printf (0x40201e);
    goto label_1;
label_2:
    puts ("FizzBuzz");
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t init (void) {
    /* [12] -r-x section size 27 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x401030 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/plain_answer/x64_elf/subject.exe @ 0x401040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}

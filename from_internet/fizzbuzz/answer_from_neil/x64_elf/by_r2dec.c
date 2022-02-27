/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x401240 */
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
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x401280 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = .bss;
    if (rax != obj.completed.0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = .bss;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x4012b0 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = .bss;
    rsi -= obj.completed.0;
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
        edi = .bss;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x4012f0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.0) == 0) {
        deregister_tm_clones ();
        *(obj.completed.0) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x401320 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x4013a0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x4013a8 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x401330 */
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
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x401270 */
#include <stdint.h>
 
void loc_annobin_lto_1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x401060 */
#include <stdint.h>
 
int32_t main (void) {
    int64_t var_60h;
    uint64_t var_8h;
    int64_t var_10h;
    int64_t var_50h;
    /* [14] -r-x section size 837 named .text */
    r14d = 1;
    ebx = 0x40407e;
    __asm ("vmovdqa xmm0, xmmword [0x004020c0]");
    __asm ("vmovdqa xmm1, xmmword [0x004020e0]");
    *((rsp + 8)) = 1;
    r15 = rsp + 0x50;
    __asm ("vmovdqa xmmword [rsp + 0x10], xmm0");
    __asm ("vmovdqa xmm0, xmmword [0x004020d0]");
    __asm ("vmovdqa xmmword [rsp + 0x30], xmm1");
    __asm ("vmovdqa xmmword [rsp + 0x20], xmm0");
    __asm ("vmovdqa xmmword [rsp + 0x40], xmm0");
label_2:
    r13 = *((rsp + 8));
    rdx = r13 + 2;
    rax = r13 + 1;
    r9 = r13;
    r8 = r13;
    rcx = r13;
    eax = 0;
    eax = sprintf (obj.buf, "Buzz\n%llu1\nFizz\n%llu3\n%llu4\nFizzBuzz\n%llu6\n%llu7\nFizz\n%llu9\nBuzz\nFizz\n%llu2\n%llu3\nFizz\nBuzz\n%llu6\nFizz\n%llu8\n%llu9\nFizzBuzz\n%llu1\n%llu2\nFizz\n%llu4\nBuzz\nFizz\n%llu7\n%llu8\nFizz\n", r13);
    rdx = r13 * 5;
    rdi = rdx + rdx;
    *((rsp + 0x60)) = rdi;
    *((rsp + 0x68)) = rdi;
    if (rdi <= rbp) {
        goto label_6;
    }
    r13 = (int64_t) eax;
label_1:
    rbx += r13;
    memcpy (rbx, obj.buf, r13);
    if (rbx >= 0x414060) {
        goto label_7;
    }
label_3:
    rsi = rsp + 0x10;
    ecx = buf;
    while (dl <= 0x36) {
        edx += 3;
        rsi += 4;
        *(rcx) = dl;
        if (r15 == rsi) {
            goto label_8;
        }
label_0:
        eax = *(rsi);
        eax += r14d;
        rax = (int64_t) eax;
        rcx += rax;
        edx = *(rcx);
    }
    edx -= 7;
    rax = rcx - 1;
    *(rcx) = dl;
    edx = *((rcx - 1));
    if (dl != 0x39) {
        goto label_9;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_9:
    edx++;
    rsi += 4;
    *(rax) = dl;
    if (r15 != rsi) {
        goto label_0;
    }
label_8:
    rbp += 3;
    if (*(rsp) > rbp) {
        goto label_1;
    }
label_6:
    r14d++;
    if (r14d != 0x14) {
        goto label_2;
    }
    eax = 0;
    return rax;
label_7:
    r12d = "1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\n";
    do {
label_4:
        rdx -= r12;
        eax = write (1, r12, 0x414060);
        if (eax <= 0) {
            goto label_10;
        }
        rax = (int64_t) eax;
        r12 += rax;
    } while (r12 < 0x414060);
label_5:
    rbx -= 0x10000;
    rdx -= 0x414060;
    memcpy ("1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\n", 0x414060, rbx);
    goto label_3;
label_10:
    if (r12 < 0x414060) {
        goto label_4;
    }
    goto label_5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x401000 */
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
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x401030 */
#include <stdint.h>
 
void write (void) {
    write ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x401040 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_neil/x64_elf/subject.exe @ 0x401050 */
#include <stdint.h>
 
void sprintf (void) {
    sprintf ();
}

/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401260 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = .text;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401350 */
#include <stdint.h>
 
uint32_t main_omp_fn_0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = omp_get_num_threads ();
    eax = omp_get_thread_num ();
    esi = eax;
    eax = 0x1770;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ebp;
    edx = edx:eax % ebp;
    if (esi < edx) {
        goto label_3;
    }
label_2:
    esi *= eax;
    esi += edx;
    eax += esi;
    if (esi >= eax) {
        goto label_4;
    }
    rsi = (int64_t) esi;
label_0:
    rdi = *((rsi*8 + 0x404088));
    if (*((rdi - 2)) == 0x7a) {
        goto label_1;
    }
    edx = *((rdi - 5));
    rcx = rdi - 5;
    edx += 6;
    *((rdi - 5)) = dl;
    if (dl <= 0x39) {
        goto label_5;
    }
    do {
        edi = *((rcx - 1));
        edx -= 0xa;
        rcx--;
        *((rcx + 1)) = dl;
        edx = rdi + 1;
        *(rcx) = dl;
    } while (dl > 0x39);
label_5:
    if (*((rsi*8 + obj.nl)) > rcx) {
        goto label_6;
    }
label_1:
    rsi++;
    if (eax > esi) {
        goto label_0;
    }
label_4:
    return eax;
label_6:
    rdx = *(rbx);
    *(rdx)++;
    goto label_1;
label_3:
    eax++;
    edx = 0;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x4012a0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = obj.__TMC_END__;
    if (rax != obj.__TMC_END__) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.__TMC_END__;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x4012d0 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = obj.__TMC_END__;
    rsi -= obj.__TMC_END__;
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
        edi = obj.__TMC_END__;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401310 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.0) == 0) {
        deregister_tm_clones ();
        *(obj.completed.0) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401340 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401480 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401488 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401410 */
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
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401290 */
#include <stdint.h>
 
void loc_annobin_lto_1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401080 */
#include <stdint.h>
 
int32_t main (void) {
    int64_t var_4h;
    int64_t var_8h;
    /* [14] -r-x section size 1029 named .text */
    r13d = 1;
    r12 = 0x7a7a75427a7a6946;
label_1:
    *(obj.nl) = 0x40fc20;
    ebx = 0;
    while (eax > 0x11111111) {
        eax = edx * 0xcccccccd;
        if (eax <= 0x33333333) {
            goto label_4;
        }
        eax = edx * 0xaaaaaaab;
        if (eax > 0x55555555) {
            goto label_5;
        }
        *(rbp) = 0x7a7a6946;
        *((rbp + 4)) = 0xa;
        rbp += 5;
label_0:
        *((rbx*8 + obj.nl)) = rbp;
        rbx++;
        if (rbx == 0x1771) {
            goto label_6;
        }
        edx = r13 + rbx;
        eax = edx * 0xeeeeeeef;
    }
    *(rbp) = r12;
    *((rbp + 8)) = 0xa;
    rbp += 9;
    goto label_0;
label_5:
    eax = 0;
    rax = sprintf (rbp, 0x402010, rdx);
    rax = (int64_t) eax;
    rbp += rax;
    goto label_0;
label_4:
    *(rbp) = 0x7a7a7542;
    *((rbp + 4)) = 0xa;
    rbp += 5;
    goto label_0;
label_6:
    r13d += 0x1771;
    rdx -= obj.format;
    write (1, obj.format, *(0x0040fc00));
    if (r13d != 0x2ee3) {
        goto label_1;
    }
    *((rsp + 4)) = 0;
    rbx = rsp + 4;
    while (eax == 0) {
label_3:
        rdx -= obj.format;
        write (1, obj.format, *(0x0040fc00));
        ecx = 0;
        edx = 0;
        rsi = rsp + 8;
        edi = main._omp_fn.0;
        *((rsp + 8)) = rbx;
        GOMP_parallel ();
        eax = *((rsp + 4));
    }
    rax = .comment;
    edi = 0x40fc00;
    rdx = *((rsp + 4));
    rdx += rax;
    if (rax < rdx) {
        goto label_2;
    }
    goto label_7;
    do {
        rsi = rdx;
        if (cl == 0xb) {
            *(rax) = 0xa;
            *(rdx) = 0x31;
            rsi--;
            rdi -= 8;
            *((rdi + 8)) = rdx;
            ecx = *(rax);
        }
        rax--;
        rdx = rsi - 1;
        *(rsi) = cl;
        if (rax >= rdx) {
            goto label_7;
        }
label_2:
        ecx = *(rax);
    } while (cl != 0xa);
    rcx = rdx + 1;
    rsi = rdx;
    rax--;
    rdi -= 8;
    *((rdi + 8)) = rcx;
    ecx = *((rax + 1));
    rdx = rsi - 1;
    *(rsi) = cl;
    if (rax < rdx) {
        goto label_2;
    }
label_7:
    eax = 0;
    tmp_0 = rsp + 4;
    rsp + 4 = eax;
    eax = tmp_0;
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401000 */
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
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401030 */
#include <stdint.h>
 
void write (void) {
    write ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401040 */
#include <stdint.h>
 
void omp_get_thread_num (void) {
    omp_get_thread_num ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401050 */
#include <stdint.h>
 
void omp_get_num_threads (void) {
    omp_get_num_threads ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401060 */
#include <stdint.h>
 
void sprintf (void) {
    sprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight/x64_elf/subject.exe @ 0x401070 */
#include <stdint.h>
 
void GOMP_parallel (void) {
    GOMP_parallel ();
}

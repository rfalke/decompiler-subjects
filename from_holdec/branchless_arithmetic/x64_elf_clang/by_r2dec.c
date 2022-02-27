/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401050 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [14] -r-x section size 1589 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401090 */
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
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x4010c0 */
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
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401100 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.0) == 0) {
        deregister_tm_clones ();
        *(obj.completed.0) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401130 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401680 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401200 */
#include <stdint.h>
 
int32_t sat_adds32b_var2 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    ecx = rsi + rdi;
    eax = edi;
    eax >>= 0x1f;
    eax += 0x7fffffff;
    edx = ecx;
    edx ^= edi;
    __asm ("cmovns eax, ecx");
    esi ^= edi;
    __asm ("cmovs eax, ecx");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401310 */
#include <stdint.h>
 
int64_t sat_divs64b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rcx = rsi + 1;
    rdx = 0x8000000000000000;
    rdx ^= rdi;
    eax = 0;
    rdx |= rcx;
    al = (rdx == 0) ? 1 : 0;
    rax += rdi;
    rcx = rax;
    rcx |= rsi;
    rcx >>= 0x20;
    if (rcx != 0) {
        __asm ("cqo");
        rax = rdx:rax / rsi;
        rdx = rdx:rax % rsi;
        return rax;
    }
    edx = 0;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x4011a0 */
#include <stdint.h>
 
int64_t sat_divu64b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rax = rdi;
    rcx = rdi;
    rcx |= rsi;
    rcx >>= 0x20;
    if (rcx != 0) {
        edx = 0;
        rax = rdx:rax / rsi;
        rdx = rdx:rax % rsi;
        return rax;
    }
    edx = 0;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401280 */
#include <stdint.h>
 
int64_t sat_muls32b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rcx = (int64_t) edi;
    rax = (int64_t) esi;
    rdx = rax;
    rdx *= rcx;
    rsi = rdx;
    rsi >>= 0x20;
    edi = edx;
    edi >>= 0x1f;
    eax ^= ecx;
    eax >>= 0x1f;
    eax += 0x7fffffff;
    if (edi == esi) {
        eax = edx;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x4011c0 */
#include <stdint.h>
 
int64_t sat_mulu64b (int64_t arg1) {
    rdi = arg1;
    rax = rdi;
    rdx:rax = rax * rsi;
    rcx = 0xffffffffffffffff;
    __asm ("cmovo rax, rcx");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x4012e0 */
#include <stdint.h>
 
int64_t sat_subs64b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rcx = rdi;
    rcx -= rsi;
    rdi >>= 0x3f;
    rax = 0x7fffffffffffffff;
    rax += rdi;
    rsi ^= rax;
    rdx = rax;
    rdx ^= rcx;
    __asm ("cmovns rax, rcx");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401688 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401140 */
#include <stdint.h>
 
int32_t sat_addu32b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    edi += esi;
    eax = 0xffffffff;
    if (edi >= 0) {
        eax = edi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401160 */
#include <stdint.h>
 
int32_t sat_divu32b (int64_t arg1) {
    rdi = arg1;
    eax = edi;
    edx = 0;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401190 */
#include <stdint.h>
 
int64_t sat_subu64b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = 0;
    rdi -= rsi;
    if (rdi >= 0) {
        rax = rdi;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x4013b0 */
#include <stdint.h>
 
int64_t sgn64 (int64_t arg1) {
    rdi = arg1;
    eax = 0;
    al = (rdi > 0) ? 1 : 0;
    rdi >>= 0x3f;
    rax += rdi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401610 */
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
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401240 */
#include <stdint.h>
 
int32_t sat_subs32b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = edi;
    ecx = edi;
    ecx -= esi;
    eax >>= 0x1f;
    eax += 0x7fffffff;
    esi ^= eax;
    edx = eax;
    edx ^= ecx;
    __asm ("cmovns eax, ecx");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x4012b0 */
#include <stdint.h>
 
int64_t sat_adds64b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rcx = rsi + rdi;
    rdi >>= 0x3f;
    rax = 0x7fffffffffffffff;
    rax += rdi;
    rdx = rax;
    rdx ^= rsi;
    rsi ^= rcx;
    rsi = ~rsi;
    rsi |= rdx;
    __asm ("cmovs rax, rcx");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401180 */
#include <stdint.h>
 
int64_t sat_addu64b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdi += rsi;
    rax = 0xffffffffffffffff;
    if (rdi >= 0) {
        rax = rdi;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401220 */
#include <stdint.h>
 
uint32_t sat_adds32b_var3 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = rsi + rdi;
    edi >>= 0x1f;
    edi += 0x7fffffff;
    ecx = edi;
    ecx ^= esi;
    esi ^= eax;
    esi = ~esi;
    esi |= ecx;
    __asm ("cmovns eax, edi");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401080 */
#include <stdint.h>
 
void loc_annobin_lto_1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x4011e0 */
#include <stdint.h>
 
int32_t sat_adds32b_var1 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = 0;
    ecx = edi;
    ecx += esi;
    __asm ("setns al");
    eax += 0x7fffffff;
    edi += esi;
    __asm ("cmovno eax, edi");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x4013c0 */
#include <stdint.h>
 
int32_t main (void) {
    edi = 0xffffffff;
    esi = 3;
    eax = sat_addu32b ();
    esi = 0xffffffff;
    edx = 3;
    ecx = eax;
    eax = 0;
    printf ("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n");
    edi = 1;
    esi = 3;
    eax = sat_subu32b ();
    esi = 1;
    edx = 3;
    ecx = eax;
    eax = 0;
    printf ("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n");
    edi = 0xffffffff;
    esi = 3;
    eax = sat_mulu32b ();
    esi = 0xffffffff;
    edx = 3;
    ecx = eax;
    eax = 0;
    printf ("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n");
    edi = 0xffffffff;
    esi = 3;
    eax = sat_divu32b ();
    esi = 0xffffffff;
    edx = 3;
    ecx = eax;
    eax = 0;
    printf ("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n");
    edi = 0x7fffffff;
    esi = 2;
    eax = sat_adds32b_var1 ();
    ebx = eax;
    edi = 0x7fffffff;
    esi = 2;
    eax = sat_adds32b_var2 ();
    edi = 0x7fffffff;
    esi = 2;
    eax = sat_adds32b_var3 ();
    esi = 0x7fffffff;
    edx = 2;
    ecx = ebx;
    r8d = ebp;
    r9d = eax;
    eax = 0;
    printf ("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n");
    edi = 0x80000000;
    esi = 2;
    eax = sat_subs32b ();
    esi = 0x80000000;
    edx = 2;
    ecx = eax;
    eax = 0;
    printf ("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n");
    edi = 0x7fffffff;
    esi = 2;
    eax = sat_muls32b ();
    esi = 0x7fffffff;
    edx = 2;
    ecx = eax;
    eax = 0;
    printf ("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n");
    edi = 0x80000000;
    esi = 0xffffffff;
    eax = sat_divs32b ();
    esi = 0x80000000;
    edx = 0xffffffff;
    ecx = eax;
    eax = 0;
    printf ("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n");
    edi = 0xfffffff0;
    eax = abs32 ();
    esi = 0xfffffff0;
    edx = eax;
    eax = 0;
    printf ("abs32(0x%08x) = 0x%08x\n");
    edi = 3;
    eax = sgn32 ();
    esi = 3;
    edx = eax;
    eax = 0;
    printf ("sgn32(0x%08x) = 0x%08x\n");
    edi = 0;
    esi = 0;
    rax = sat_addu64b ();
    rbx = rax;
    edi = 0;
    esi = 0;
    rax = sat_subu64b ();
    rbp += rbx;
    esi = 1;
    edi = 0;
    rax = sat_divu64b ();
    rbx = rax;
    rbx += rbp;
    edi = 0;
    esi = 0;
    rax = sat_mulu64b ();
    rbp += rbx;
    edi = 0;
    esi = 0;
    rax = sat_muls64b ();
    rbx = rax;
    rbx += rbp;
    edi = 0;
    esi = 0;
    rax = sat_adds64b ();
    rbp += rbx;
    edi = 0;
    esi = 0;
    rax = sat_subs64b ();
    rbx = rax;
    rbx += rbp;
    esi = 1;
    edi = 0;
    rax = sat_divs64b ();
    rbp += rbx;
    edi = 0;
    rax = abs64 ();
    rbx = rax;
    rbx += rbp;
    edi = 0;
    rax = sgn64 ();
    rax += rbx;
    if (rax == 0x2a) {
        eax = puts ("not reached");
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401150 */
#include <stdint.h>
 
int32_t sat_subu32b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = 0;
    edi -= esi;
    if (edi >= 0) {
        eax = edi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401170 */
#include <stdint.h>
 
int32_t sat_mulu32b (int64_t arg1) {
    rdi = arg1;
    eax = edi;
    edx:eax = eax * esi;
    ecx = 0xffffffff;
    __asm ("cmovo eax, ecx");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401260 */
#include <stdint.h>
 
int32_t sat_divs32b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    ecx = rsi + 1;
    edx = edi;
    edx ^= 0x80000000;
    eax = 0;
    edx |= ecx;
    al = (edx == 0) ? 1 : 0;
    eax += edi;
    edx:eax = (int64_t) eax;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401380 */
#include <stdint.h>
 
int32_t abs32 (int64_t arg1) {
    rdi = arg1;
    eax = edi;
    eax = -eax;
    if (? < ?) {
        eax = edi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x4013a0 */
#include <stdint.h>
 
int32_t sgn32 (int64_t arg1) {
    rdi = arg1;
    eax = 0;
    al = (edi > 0) ? 1 : 0;
    edi >>= 0x1f;
    eax += edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401350 */
#include <stdint.h>
 
int64_t sat_muls64b (uint32_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = rsi;
    rdx:rax = rax * rdi;
    rcx = rax;
    rcx >>= 0x3f;
    rsi ^= rdi;
    rsi >>= 0x3f;
    rdi = 0x7fffffffffffffff;
    rdi += rsi;
    if (rcx != rdx) {
        rax = rdi;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401390 */
#include <stdint.h>
 
int64_t abs64 (int64_t arg1) {
    rdi = arg1;
    rax = rdi;
    rax = -rax;
    if (? < ?) {
        rax = rdi;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401030 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_clang/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t init (void) {
    /* [12] -r-x section size 27 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}

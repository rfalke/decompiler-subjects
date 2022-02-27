/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401270 */
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
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4012b0 */
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
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4012e0 */
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
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401320 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.0) == 0) {
        deregister_tm_clones ();
        *(obj.completed.0) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401350 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401660 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401430 */
#include <stdint.h>
 
uint32_t sat_adds32b_var2 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = rsi + rdi;
    esi ^= edi;
    if (? >= ?) {
        edx = edi;
        edx ^= eax;
        if (? < ?) {
            goto label_0;
        }
    }
    return eax;
label_0:
    eax = edi;
    eax >>= 0x1f;
    eax += 0x7fffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401540 */
#include <stdint.h>
 
int64_t sat_divs64b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rcx = 0x8000000000000000;
    rdx = rsi + 1;
    rax = rdi;
    rcx += rdi;
    rdx |= rcx;
    rax += 0;
    __asm ("cqo");
    rax = rdx:rax / rsi;
    rdx = rdx:rax % rsi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4013d0 */
#include <stdint.h>
 
int64_t sat_divu64b (int64_t arg1) {
    rdi = arg1;
    rax = rdi;
    edx = 0;
    rax = rdx:rax / rsi;
    rdx = rdx:rax % rsi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4014b0 */
#include <stdint.h>
 
int64_t sat_muls32b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdx = (int64_t) esi;
    rax = (int64_t) edi;
    rax *= rdx;
    r8d = eax;
    edx:eax = (int64_t) eax;
    rax >>= 0x20;
    if (edx != eax) {
        edi ^= esi;
        edi >>= 0x1f;
        r8d = rdi + 0x7fffffff;
    }
    eax = r8d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4013e0 */
#include <stdint.h>
 
int64_t sat_mulu64b (int64_t arg3, int64_t arg1) {
    rdx = arg3;
    rdi = arg1;
    rax = rdi;
    rdx:rax = rax * rsi;
    rdx = -rdx;
    rsi = rax;
    edx -= edx;
    rax = rsi;
    rdx = (int64_t) edx;
    rax |= rdx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401510 */
#include <stdint.h>
 
int64_t sat_subs64b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdx = 0x7fffffffffffffff;
    rax = rdi;
    rdi >>= 0x3f;
    rax -= rsi;
    rdi += rdx;
    rdx = rax;
    rsi ^= rdi;
    rdx ^= rdi;
    __asm ("cmovs rax, rdi");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401668 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401360 */
#include <stdint.h>
 
int32_t sat_addu32b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    edi += esi;
    eax -= eax;
    eax |= edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401380 */
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
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4013c0 */
#include <stdint.h>
 
int64_t sat_subu64b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = 0;
    rdi -= rsi;
    al = (rdi >= 0) ? 1 : 0;
    eax = -eax;
    rax = (int64_t) eax;
    rax &= rdi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4015d0 */
#include <stdint.h>
 
int64_t sgn64 (int64_t arg1) {
    rdi = arg1;
    eax = 0;
    al = (rdi > 0) ? 1 : 0;
    rdi >>= 0x3f;
    eax -= edi;
    rax = (int64_t) eax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4015f0 */
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
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401470 */
#include <stdint.h>
 
int32_t sat_subs32b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = edi;
    edi >>= 0x1f;
    eax -= esi;
    edi += 0x7fffffff;
    edx = eax;
    esi ^= edi;
    edx ^= edi;
    __asm ("cmovs eax, edi");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4014e0 */
#include <stdint.h>
 
uint64_t sat_adds64b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdx = 0x7fffffffffffffff;
    rax = rdi + rsi;
    rdi >>= 0x3f;
    rdi += rdx;
    rdx = rsi;
    rdx ^= rax;
    rsi ^= rdi;
    rdx = ~rdx;
    rdx |= rsi;
    __asm ("cmovns rax, rdi");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4013b0 */
#include <stdint.h>
 
int64_t sat_addu64b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdi += rsi;
    eax -= eax;
    rax = (int64_t) eax;
    rax |= rdi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401450 */
#include <stdint.h>
 
uint32_t sat_adds32b_var3 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = rdi + rsi;
    edx = esi;
    edi >>= 0x1f;
    edi += 0x7fffffff;
    edx ^= eax;
    edx = ~edx;
    esi ^= edi;
    edx |= esi;
    __asm ("cmovns eax, edi");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4012a0 */
#include <stdint.h>
 
void loc_annobin_lto_1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401400 */
#include <stdint.h>
 
int64_t sat_adds32b_var1 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rax = (int64_t) edi;
    rsi = (int64_t) esi;
    edx = 0x7fffffff;
    rax += rsi;
    if (rax > rdx) {
        rax = rdx;
    }
    rdx = 0xffffffff80000000;
    if (rax < rdx) {
        rax = rdx;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401050 */
#include <stdint.h>
 
int32_t main (void) {
    /* [14] -r-x section size 1557 named .text */
    esi = 3;
    edi = 0xffffffff;
    edx = 3;
    eax = sat_addu32b ();
    esi = 0xffffffff;
    ecx = eax;
    eax = 0;
    printf ("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n");
    esi = 3;
    edi = 1;
    edx = 3;
    eax = sat_subu32b ();
    esi = 1;
    ecx = eax;
    eax = 0;
    printf ("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n");
    esi = 3;
    edi = 0xffffffff;
    edx = 3;
    eax = sat_mulu32b ();
    esi = 0xffffffff;
    ecx = eax;
    eax = 0;
    printf ("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n");
    esi = 3;
    edi = 0xffffffff;
    eax = sat_divu32b ();
    edx = 3;
    esi = 0xffffffff;
    ecx = eax;
    eax = 0;
    printf ("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n");
    esi = 2;
    edi = 0x7fffffff;
    eax = sat_adds32b_var3 ();
    edi = 0x7fffffff;
    esi = 2;
    r9d = eax;
    eax = sat_adds32b_var2 ();
    esi = 2;
    r8d = eax;
    eax = sat_adds32b_var1 ();
    edx = 2;
    esi = 0x7fffffff;
    ecx = eax;
    eax = 0;
    printf ("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n");
    esi = 2;
    edi = 0x80000000;
    eax = sat_subs32b ();
    edx = 2;
    esi = 0x80000000;
    ecx = eax;
    eax = 0;
    printf ("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n");
    esi = 2;
    edi = 0x7fffffff;
    eax = sat_muls32b ();
    edx = 2;
    esi = 0x7fffffff;
    ecx = eax;
    eax = 0;
    printf ("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n");
    esi = 0xffffffff;
    edi = 0x80000000;
    eax = sat_divs32b ();
    edx = 0xffffffff;
    esi = 0x80000000;
    ecx = eax;
    eax = 0;
    printf ("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n");
    edi = 0xfffffff0;
    esi = 0xfffffff0;
    eax = abs32 ();
    edx = eax;
    eax = 0;
    printf ("abs32(0x%08x) = 0x%08x\n");
    edi = 3;
    esi = 3;
    eax = sgn32 ();
    edx = eax;
    eax = 0;
    printf ("sgn32(0x%08x) = 0x%08x\n");
    esi = 0;
    edi = 0;
    rax = sat_addu64b ();
    edi = 0;
    r9 = rax;
    rax = sat_subu64b ();
    edi = 0;
    esi = 1;
    r9 += rax;
    rax = sat_divu64b ();
    esi = 0;
    r9 += rax;
    rax = sat_mulu64b ();
    esi = 0;
    r9 += rax;
    sat_muls64b ();
    edi = 0;
    rcx = rax + r9;
    rax = sat_adds64b ();
    esi = 0;
    edi = 0;
    rcx += rax;
    sat_subs64b ();
    edi = 0;
    esi = 1;
    r8 = rax + rcx;
    sat_divs64b ();
    rdx = rax + r8;
    rax = abs64 ();
    rdx += rax;
    rax = sgn64 ();
    rax += rdx;
    while (1) {
        eax = 0;
        return rax;
        puts ("not reached");
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4015a0 */
#include <stdint.h>
 
int32_t abs32 (int64_t arg1) {
    rdi = arg1;
    eax = edi;
    eax = -eax;
    __asm ("cmovs eax, edi");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401390 */
#include <stdint.h>
 
int64_t sat_mulu32b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdi *= rsi;
    rax = rdi;
    rax >>= 0x20;
    al = (rax != 0) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    eax |= edi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4015b0 */
#include <stdint.h>
 
int64_t abs64 (int64_t arg1) {
    rdi = arg1;
    rax = rdi;
    rax = -rax;
    __asm ("cmovs rax, rdi");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x4015c0 */
#include <stdint.h>
 
int32_t sgn32 (int64_t arg1) {
    rdi = arg1;
    eax = 0;
    al = (edi > 0) ? 1 : 0;
    edi >>= 0x1f;
    eax -= edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401490 */
#include <stdint.h>
 
int32_t sat_divs32b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    edx = rsi + 1;
    ecx = rdi - 0x80000000;
    eax = edi;
    edx |= ecx;
    eax += 0;
    edx:eax = (int64_t) eax;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401570 */
#include <stdint.h>
 
int64_t sat_muls64b (uint32_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = rdi;
    rdx:rax = rax * rsi;
    rcx = rax;
    r8 = rax;
    rcx >>= 0x3f;
    if (rcx != rdx) {
        r8 = 0x7fffffffffffffff;
        rdi ^= rsi;
        rdi >>= 0x3f;
        r8 += rdi;
    }
    rax = r8;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401000 */
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
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401370 */
#include <stdint.h>
 
int32_t sat_subu32b (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = 0;
    edi -= esi;
    al = (edi >= 0) ? 1 : 0;
    eax = -eax;
    eax &= edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401030 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/x64_elf_gcc/subject.exe @ 0x401040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}

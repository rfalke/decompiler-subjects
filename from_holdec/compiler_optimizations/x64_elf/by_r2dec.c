/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401040 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [13] -r-x section size 853 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = .annobin_elf_init.c;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401080 */
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
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x4010b0 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = loc._end;
    rsi -= loc._end;
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
        edi = loc._end;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x4010f0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.7287) == 0) {
        deregister_tm_clones ();
        *(obj.completed.7287) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401120 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401390 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401398 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401172 */
#include <stdint.h>
 
int8_t isWhitespace2 (int64_t arg1) {
    rdi = arg1;
    al = (dil == 0x20) ? 1 : 0;
    dl = (dil == 0xa) ? 1 : 0;
    al |= dl;
    if (al == 0) {
        edi &= 0xfffffffb;
        al = (dil == 9) ? 1 : 0;
    }
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401157 */
#include <stdint.h>
 
int64_t isWhitespace (int64_t arg1) {
    rdi = arg1;
    eax = 0;
    if (dil <= 0x20) {
        rax = 0x100002600;
        __asm ("shrx rax, rax, rdi");
        eax &= 1;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401320 */
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
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401126 */
#include <stdint.h>
 
uint8_t divisibleBy3 (uint32_t arg1) {
    rdi = arg1;
    edi *= 0xaaaaaaab;
    al = (edi <= 0x55555555) ? 1 : 0;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401070 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x40118f */
#include <stdint.h>
 
int32_t main (void) {
    edi = 0x66;
    eax = divideByThree ();
    r14d = eax;
    edi = 0x65;
    eax = divideByThree ();
    r13d = eax;
    edi = 0x64;
    eax = divideByThree ();
    r12d = eax;
    edi = 0x63;
    eax = divideByThree ();
    ebx = eax;
    edi = 0;
    eax = divideByThree ();
    r9d = r14d;
    r8d = r13d;
    ecx = r12d;
    edx = ebx;
    esi = eax;
    eax = 0;
    printf ("divideByThree:  f(0)=%d f(99)=%d f(100)=%d f(101)=%d f(102)=%d\n");
    edi = 0x2c;
    al = divisibleBy3 ();
    r13d = (int32_t) al;
    edi = 0x2b;
    al = divisibleBy3 ();
    r12d = (int32_t) al;
    edi = 0x2a;
    al = divisibleBy3 ();
    ebx = (int32_t) al;
    edi = 0;
    al = divisibleBy3 ();
    eax = (int32_t) al;
    r8d = r13d;
    ecx = r12d;
    edx = ebx;
    esi = eax;
    eax = 0;
    printf ("divisibleBy3:   f(0)=%d f(42)=%d f(43)=%d f(44)=%d\n");
    edi = 0x10101;
    eax = countSetBits ();
    r13d = eax;
    edi = 0xffffffff;
    eax = countSetBits ();
    r12d = eax;
    edi = 0xff;
    eax = countSetBits ();
    ebx = eax;
    edi = 0;
    eax = countSetBits ();
    r8d = r13d;
    ecx = r12d;
    edx = ebx;
    esi = eax;
    eax = 0;
    printf ("countSetBits:   f(0)=%d f(0xff)=%d f(0xffffffff)=%d f(0x10101)=%d\n");
    edi = 0x61;
    al = isWhitespace ();
    r12d = (int32_t) al;
    edi = 9;
    al = isWhitespace ();
    ebx = (int32_t) al;
    edi = 0x20;
    al = isWhitespace ();
    eax = (int32_t) al;
    ecx = r12d;
    edx = ebx;
    esi = eax;
    eax = 0;
    printf ("isWhitespace:   f(' ')=%d f(tab)=%d f('a')=%d\n");
    edi = 0x61;
    al = isWhitespace2 ();
    r12d = (int32_t) al;
    edi = 9;
    al = isWhitespace2 ();
    ebx = (int32_t) al;
    edi = 0x20;
    al = isWhitespace2 ();
    eax = (int32_t) al;
    ecx = r12d;
    edx = ebx;
    esi = eax;
    eax = 0;
    printf ("isWhitespace2:  f(' ')=%d f(tab)=%d f('a')=%d\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401136 */
#include <stdint.h>
 
int64_t divideByThree (int64_t arg1) {
    rdi = arg1;
    eax = edi;
    edi = 0xaaaaaaab;
    rax *= rdi;
    rax >>= 0x21;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401030 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401146 */
#include <stdint.h>
 
int32_t countSetBits (int64_t arg1) {
    rdi = arg1;
    eax = 0;
    if (edi == 0) {
        goto label_0;
    }
    do {
        eax++;
        __asm ("blsr edi, edi");
    } while (eax != 0);
    return eax;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/compiler_optimizations/x64_elf/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t init (void) {
    /* [11] -r-x section size 27 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}

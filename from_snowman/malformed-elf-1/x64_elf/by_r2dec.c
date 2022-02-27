/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x400800 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [13] -r-x section size 49374 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = 0x400ba0;
    rcx = 0x400b10;
    rdi = main;
    fcn_00400790 ();
    return _hlt ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x400790 */
#include <stdint.h>
 
void fcn_00400790 (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x4008ed */
#include <stdint.h>
 
int32_t main (void) {
    int64_t var_8h;
    edi = 0xdead;
    rax = fcn_004007d0 ();
    *((rbp - 8)) = rax;
    rax = *((rbp - 8));
    rdx = 0x45206e61206d2749;
    *(rax) = rdx;
    *((rax + 8)) = 0x3a20464c;
    *((rax + 0xc)) = 0x292d;
    *((rax + 0xe)) = 0;
    rax = *((rbp - 8));
    rsi = *((rbp - 8));
    edi = 0x400bb8;
    eax = 0;
    fcn_00400750 ();
    edi = "...\n";
    fcn_00400720 ();
    edi = 0;
    eax = fcn_004007c0 ();
    edi = eax;
    fcn_004007a0 ();
    eax = fcn_004007f0 ();
    eax &= 1;
    if (eax != 0) {
        edi = "And I'm happy. I live free ! :-)";
        fcn_00400720 ();
        edi = 0;
        fcn_004007e0 ();
    }
    fcn_00400996 ();
    rax = *(section..bss);
    rsi = *(section..bss);
    edi = 0xa;
    fcn_00400780 ();
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x4007d0 */
#include <stdint.h>
 
void fcn_004007d0 (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x400750 */
#include <stdint.h>
 
void fcn_00400750 (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x400720 */
#include <stdint.h>
 
void fcn_00400720 (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x4007c0 */
#include <stdint.h>
 
void fcn_004007c0 (void) {
    time ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x4007a0 */
#include <stdint.h>
 
void fcn_004007a0 (void) {
    srand ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x4007f0 */
#include <stdint.h>
 
void fcn_004007f0 (void) {
    rand ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x4007e0 */
#include <stdint.h>
 
void fcn_004007e0 (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x400996 */
#include <stdint.h>
 
int64_t fcn_00400996 (void) {
    int64_t var_98h;
    int64_t var_90h;
    int64_t var_88h;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_70h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_28h;
    rax = *(fs:0x28);
    *((rbp - 0x38)) = rax;
    eax = 0;
    rax = rsp;
    *((rbp - 0x98)) = rax;
    rsi = 0x202c657361656c50;
    *((rbp - 0x60)) = rsi;
    rcx = 0x7420746f6e206f64;
    *((rbp - 0x58)) = rcx;
    rsi = 0x7420656d20656b61;
    *((rbp - 0x50)) = rsi;
    rdi = 0x726f6b6c654d206f;
    *((rbp - 0x48)) = rdi;
    *((rbp - 0x40)) = 0xa2120;
    rcx = 0x6f63206c6c276548;
    *((rbp - 0x80)) = rcx;
    rsi = 0x656d207470757272;
    *((rbp - 0x78)) = rsi;
    *((rbp - 0x70)) = 0xa2120;
    rax = rbp - 0x60;
    rdi = rax;
    rax = fcn_00400730 ();
    rbx = rax;
    rax = rbp - 0x80;
    rdi = rax;
    rax = fcn_00400730 ();
    rax += rbx;
    rbx = rax + 1;
    rax = rbx;
    rax--;
    *((rbp - 0x90)) = rax;
    r14 = rbx;
    r15d = 0;
    r12 = rbx;
    r13d = 0;
    eax = 0x10;
    rax--;
    rax += rbx;
    edi = 0x10;
    edx = 0;
    rax = rdx:rax / rdi;
    rdx = rdx:rax % rdi;
    rax *= 0x10;
    rax = rsp;
    rax += 0;
    *((rbp - 0x88)) = rax;
    rdx = rbx - 1;
    rax = *((rbp - 0x88));
    rcx = rbp - 0x60;
    rsi = rcx;
    rdi = rax;
    fcn_00400710 ();
    rdx = rbx - 1;
    rax = *((rbp - 0x88));
    rcx = rbp - 0x80;
    rsi = rcx;
    rdi = rax;
    fcn_00400770 ();
    rdx = *(section..bss);
    rax = *((rbp - 0x88));
    rsi = rdx;
    rdi = rax;
    fcn_00400760 ();
    rsp = *((rbp - 0x98));
    rax = *((rbp - 0x38));
    rax ^= *(fs:0x28);
    if (rax != 0) {
        fcn_00400740 ();
    }
    rsp = rbp - 0x28;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x400730 */
#include <stdint.h>
 
void fcn_00400730 (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x400710 */
#include <stdint.h>
 
void fcn_00400710 (void) {
    strncpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x400770 */
#include <stdint.h>
 
void fcn_00400770 (void) {
    strncat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x400760 */
#include <stdint.h>
 
void fcn_00400760 (void) {
    fputs ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x400740 */
#include <stdint.h>
 
void fcn_00400740 (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x400780 */
#include <stdint.h>
 
void fcn_00400780 (void) {
    fputc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x4007b0 */
#include <stdint.h>
 
void fcn_004007b0 (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x400830 */
#include <stdint.h>
 
int64_t fcn_00400830 (void) {
    eax = 0x6010a7;
    rax -= section..bss;
    while (rax == 0) {
        return rax;
        eax = 0;
    }
    edi = section..bss;
    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-1/x64_elf/subject.exe @ 0x4006e0 */
#include <stdint.h>
 
int64_t fcn_004006e0 (void) {
    /* [11] -r-x section size 26 named .init */
    rax = *(0x00600ff8);
    if (rax != 0) {
        fcn_004007b0 ();
    }
    return rax;
}

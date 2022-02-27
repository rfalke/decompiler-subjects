/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-056_call_struct/x64_relocelf/subject.exe @ 0x8000040 */
#include <stdint.h>
 
int64_t f_A_B_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* [01] -r-x section size 146 named .text */
    *((rbp - 0x10)) = rdi;
    rax = rsi;
    rcx = rdx;
    *((rbp - 0x20)) = rax;
    *((rbp - 0x18)) = rdx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-056_call_struct/x64_relocelf/subject.exe @ 0x800005b */
#include <stdint.h>
 
int64_t g_ (int64_t arg4, int64_t arg3) {
    rcx = arg4;
    rdx = arg3;
    /* g() */
    rdi = rax;
    rsi = 0xffffffff00000000;
    rsi &= rdi;
    rax = rsi;
    rax = rsi;
    rdi = rdx;
    rsi = 0xffffffff00000000;
    rsi &= rdi;
    rdx = rsi;
    rdx = rsi;
    rsi = 0xffffffff00000000;
    rcx &= rsi;
    rsi = 0xffff0000ffffffff;
    rcx &= rsi;
    rsi = 0xff00ffffffffffff;
    rcx &= rsi;
    rsi = rax;
    rdi = rdx;
    rax = rdx;
    rdi = rcx;
    _Z1f1A1B ();
    return rax;
}

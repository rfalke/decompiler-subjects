/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-055_call_many_args/x64_elf/subject.exe @ 0x400144 */
#include <stdint.h>
 
void entry0 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_18h;
    int64_t var_14h;
    int64_t var_10h;
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_4h;
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* [02] -r-x section size 85 named .text */
    *((rbp - 4)) = edi;
    *((rbp - 8)) = esi;
    *((rbp - 0xc)) = edx;
    *((rbp - 0x10)) = ecx;
    *((rbp - 0x14)) = r8d;
    *((rbp - 0x18)) = r9d;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-055_call_many_args/x64_elf/subject.exe @ 0x40015e */
#include <stdint.h>
 
void g (void) {
    _text (1, 2, 3, 4, 5, 6);
}

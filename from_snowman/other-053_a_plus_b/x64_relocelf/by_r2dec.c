/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-053_a_plus_b/x64_relocelf/subject.exe @ 0x8000040 */
#include <stdint.h>
 
int64_t f (int64_t arg7, int64_t arg8) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    xmm0 = arg7;
    xmm1 = arg8;
    /* [01] -r-x section size 44 named .text */
    *((rbp - 8)) = xmm0;
    *((rbp - 0x10)) = xmm1;
    xmm0 = *((rbp - 8));
    __asm ("addsd xmm0, qword [rbp - 0x10]");
    *((rbp - 0x18)) = xmm0;
    rax = *((rbp - 0x18));
    *((rbp - 0x18)) = rax;
    xmm0 = *((rbp - 0x18));
    return rax;
}

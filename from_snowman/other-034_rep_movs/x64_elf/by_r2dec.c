/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-034_rep_movs/x64_elf/subject.exe @ 0x4000d4 */
#include <stdint.h>
 
void entry0 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    do {
        /* [02] -r-x section size 5 named .text */
        *(rdi) = *(rsi);
        rcx--;
        rsi += 4;
        rdi += 4;
    } while (rcx != 0);
    __asm ("std");
    *(rdi) = *(rsi);
    rcx--;
    rsi += 4;
    rdi += 4;
}

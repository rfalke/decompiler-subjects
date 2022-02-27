/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-064_swap/x64_elf/subject.exe @ 0x400150 */
#include <stdint.h>
 
int32_t entry0 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    /* [02] -r-x section size 9 named .text */
    eax = *(rdi);
    edx = *(rsi);
    *(rdi) = edx;
    *(rsi) = eax;
    return eax;
}

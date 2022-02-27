/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-049_implicit_zero_extend/x64_elf/subject.exe @ 0x4000d4 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    /* [02] -r-x section size 16 named .text */
    ebx = 0x20002;
    eax = (int32_t) bx;
    *(0x64) = rax;
}

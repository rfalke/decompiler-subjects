/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-036_scas/x64_elf/subject.exe @ 0x4000d4 */
#include <stdint.h>
 
void entry0 (void) {
    /* [02] -r-x section size 9 named .text */
    __asm ("scasb al, byte [rdi]");
    if (? == ?) {
        __asm ("std");
        __asm ("scasb al, byte [rdi]");
        if (? != ?) {
            goto label_0;
        }
    }
label_0:
}

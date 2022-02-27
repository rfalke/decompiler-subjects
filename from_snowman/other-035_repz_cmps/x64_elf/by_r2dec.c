/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-035_repz_cmps/x64_elf/subject.exe @ 0x4000d4 */
#include <stdint.h>
 
void entry0 (int64_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    /* [02] -r-x section size 5 named .text */
    __asm ("repe cmpsd dword [rsi], dword ptr [rdi]");
    __asm ("std");
    __asm ("repe cmpsd dword [rsi], dword ptr [rdi]");
}

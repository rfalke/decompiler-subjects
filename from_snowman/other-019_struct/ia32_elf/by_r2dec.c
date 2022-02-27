/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-019_struct/ia32_elf/subject.exe @ 0x80480b8 */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_8h) {
    /* [02] -r-x section size 24 named .text */
    eax = *((ebp + 8));
    *(eax) = 0xa;
    eax = *((ebp + 8));
    *((eax + 4)) = 0x14;
    return eax;
}

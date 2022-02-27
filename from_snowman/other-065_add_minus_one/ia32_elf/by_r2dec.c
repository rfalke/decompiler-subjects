/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-065_add_minus_one/ia32_elf/subject.exe @ 0x8048098 */
#include <stdint.h>
 
int32_t entry0 (void) {
    /* [02] -r-x section size 6 named .text */
    *(eax) += 0xffffffff;
    *(eax) -= 0xffffffff;
}

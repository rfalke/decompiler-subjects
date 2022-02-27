/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_244/ia32_com/subject.exe @ 0x8 */
#include <stdint.h>
 
void fcn_00000008 (int64_t arg4, int64_t arg6) {
    x3 = arg4;
    x5 = arg6;
    __asm ("stlxr w3, w26, [x5]");
    x8 = 0x85dda000;
}

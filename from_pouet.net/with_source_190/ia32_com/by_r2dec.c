/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_190/ia32_com/subject.exe @ 0x34 */
#include <stdint.h>
 
void fcn_00000034 (int64_t arg1, int64_t arg7) {
    x0 = arg1;
    x6 = arg7;
    __asm ("stlxr w6, x0, [x0]");
}

/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_061/ia32_com/subject.exe @ 0x4 */
#include <stdint.h>
 
void fcn_00000004 (int64_t arg4, int64_t arg7) {
    x3 = arg4;
    x6 = arg7;
    x16 = 0xfffffffffff9a278;
    __asm ("stlxr w3, w26, [x13]");
    s8 = *(x6);
    s20 = *((x6 + 4));
}

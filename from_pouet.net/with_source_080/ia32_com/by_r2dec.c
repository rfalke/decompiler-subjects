/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_080/ia32_com/subject.exe @ 0x20 */
#include <stdint.h>
 
void fcn_00000020 (int64_t arg3, int64_t arg5) {
    x2 = arg3;
    x4 = arg5;
    __asm ("prfm pstl1strm, [x0]");
    x0 = x4 - (x2 << 29);
}

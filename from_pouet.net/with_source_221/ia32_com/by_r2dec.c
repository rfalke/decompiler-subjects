/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_221/ia32_com/subject.exe @ 0xc */
#include <stdint.h>
 
void fcn_0000000c (int64_t arg3) {
    x2 = arg3;
    __asm ("prfm pldl1strm, 0x31bec");
    w4 = *((x2 + 0x1fc));
}

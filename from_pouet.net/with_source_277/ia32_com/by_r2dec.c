/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_277/ia32_com/subject.exe @ 0xc */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
void fcn_0000000c (int64_t arg7) {
    x6 = arg7;
    x13 = BIT_MASK (x6, x12);
}

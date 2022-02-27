/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_213/ia32_com/subject.exe @ 0x1c */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
void fcn_0000001c () {
    x8 = BIT_MASK (x23, x14);
}

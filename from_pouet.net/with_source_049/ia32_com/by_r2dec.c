/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_049/ia32_com/subject.exe @ 0x0 */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
void fcn_00000000 () {
    x16 = 0xfffffffffff9a274;
    value_0 = BIT_MASK (0x29, 0x10);
    value_1 = x30 & value_0;
    value_0 = ~value_0;
    x4 &= value_0;
    x4 |= value_1;
}

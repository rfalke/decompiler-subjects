/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello/hppa_sharedexec_by_boomerang/subject.exe @ 0x0 */
#include <stdint.h>
 
void fcn_00000000 (int64_t arg1, int64_t arg2, int64_t arg3) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    __asm ("stxrb w1, w2, [x0]");
}

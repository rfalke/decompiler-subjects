/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-053_a_plus_b/ia32_relocelf/subject.exe @ 0x8000034 */
#include <stdint.h>
 
int32_t f (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    /* [01] -r-x section size 38 named .text */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] += *((ebp - 0x10));
    return eax;
}

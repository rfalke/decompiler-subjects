/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-003_gcd_m32/ia32_elf/subject.exe @ 0x8048094 */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    do {
        /* [03] -r-x section size 47 named .text */
        if (*((ebp + 0xc)) == 0) {
            eax = *((ebp + 8));
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 8));
            edx >>= 0x1f;
            eax = *(edx:eax) / ebp + 0xc;
            edx = *(edx:eax) % ebp + 0xc;
            eax = edx;
            eax = *((ebp + 0xc));
            _rel_plt (eax, eax);
        } while (1);
    }
    return eax;
}

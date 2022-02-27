/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-012_if_compound_condition/x64_elf/subject.exe @ 0x4000f4 */
#include <stdint.h>
 
int32_t f (uint32_t arg3, uint32_t arg2, uint32_t arg1) {
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 4)) = edi;
    *((rbp - 8)) = esi;
    *((rbp - 0xc)) = edx;
    if (*((rbp - 4)) != 0) {
        if (*((rbp - 8)) != 0) {
            if (*((rbp - 0xc)) == 0) {
                goto label_0;
            }
            eax = 0;
            _rela_plt ();
        }
    } else {
label_0:
        eax = 0;
        h ();
    }
    return eax;
}

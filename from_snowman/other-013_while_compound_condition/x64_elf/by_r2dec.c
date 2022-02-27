/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-013_while_compound_condition/x64_elf/subject.exe @ 0x40012d */
#include <stdint.h>
 
uint64_t f (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_4h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 4)) = edi;
    *((rbp - 8)) = esi;
    *((rbp - 0xc)) = edx;
    while (eax != 0) {
        rdx = rbp - 0xc;
        rcx = rbp - 8;
        rax = rbp - 4;
        rsi = rcx;
        rdi = rax;
        _rela_plt ();
        eax = *((rbp - 4));
        if (eax == 0) {
            goto label_0;
        }
        eax = *((rbp - 8));
        if (eax == 0) {
            goto label_0;
        }
        eax = *((rbp - 0xc));
    }
label_0:
    return rax;
}

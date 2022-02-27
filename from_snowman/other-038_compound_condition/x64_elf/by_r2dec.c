/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-038_compound_condition/x64_elf/subject.exe @ 0x400144 */
#include <stdint.h>
 
void entry0 (void) {
    /* [02] -r-x section size 148 named .text */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-038_compound_condition/x64_elf/subject.exe @ 0x400150 */
#include <stdint.h>
 
int32_t f (uint32_t arg4, uint32_t arg3, uint32_t arg2, uint32_t arg1) {
    uint32_t var_10h;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 4)) = edi;
    *((rbp - 8)) = esi;
    *((rbp - 0xc)) = edx;
    *((rbp - 0x10)) = ecx;
    if (*((rbp - 4)) != 0) {
        if (*((rbp - 8)) != 0) {
            goto label_0;
        }
    }
    if (*((rbp - 0xc)) != 0) {
        if (*((rbp - 0x10)) != 0) {
label_0:
            eax = 0;
            _text ();
        }
    } else {
        eax = 0;
        h ();
    }
    if (*((rbp - 4)) == 0) {
        if (*((rbp - 8)) == 0) {
            goto label_1;
        }
    }
    if (*((rbp - 0xc)) == 0) {
        if (*((rbp - 0x10)) == 0) {
            goto label_1;
        }
    }
    eax = 0;
    _text ();
label_1:
    if (*((rbp - 4)) == 0) {
        if (*((rbp - 8)) != 0) {
            if (*((rbp - 0xc)) != 0) {
                goto label_2;
            }
        }
        if (*((rbp - 0x10)) == 0) {
            goto label_3;
        }
    }
label_2:
    eax = 0;
    h ();
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-038_compound_condition/x64_elf/subject.exe @ 0x40014a */
#include <stdint.h>
 
void h (void) {
}

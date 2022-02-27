/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-037_switch/x64_elf/subject.exe @ 0x400144 */
#include <stdint.h>
 
int64_t entry0 (int64_t arg1) {
    int64_t var_18h;
    int64_t var_4h;
    rdi = arg1;
    /* [02] -r-x section size 120 named .text */
    *((rbp - 0x18)) = rdi;
    *((rbp - 4)) = 0;
    while (al != 0) {
        rax = *((rbp - 0x18));
        eax = *(rax);
        eax = (int32_t) al;
        if (eax != 0x6f) {
            if (eax <= 0x6f) {
                if (eax == 0x65) {
                    goto label_0;
                }
                if (eax <= 0x65) {
                    if (eax == 0) {
                        goto label_1;
                    }
                    if (eax == 0x61) {
                        goto label_0;
                    }
                    goto label_2;
                }
                if (eax == 0x69) {
                    goto label_0;
                }
                goto label_2;
            }
            if (eax == 0x75) {
                goto label_0;
            }
            if (eax == 0x79) {
                goto label_0;
            }
            if (eax != 0x72) {
                goto label_2;
            }
        }
label_0:
        *((rbp - 4))++;
        goto label_3;
label_1:
        eax = 0xffffffff;
        goto label_4;
label_2:
label_3:
        *((rbp - 0x18))++;
        rax = *((rbp - 0x18));
        eax = *(rax);
        al = (al != 0) ? 1 : 0;
    }
    eax = *((rbp - 4));
label_4:
    return rax;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-041_switch_no_jump_table/ia32_elf/subject.exe @ 0x80480d8 */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_8h) {
    /* [02] -r-x section size 184 named .text */
    eax = *((ebp + 8));
    if (eax != 5) {
        if (eax <= 5) {
            if (eax != 2) {
                if (eax <= 2) {
                    if (eax == 0) {
                        goto label_0;
                    }
                    if (eax == 1) {
                        goto label_1;
                    }
                    goto label_2;
                }
                if (eax == 3) {
                    goto label_3;
                }
                if (eax == 4) {
                    goto label_4;
                }
            } else {
                if (eax == 8) {
                    goto label_5;
                }
                if (eax <= 8) {
                    if (eax == 6) {
                        goto label_6;
                    }
                    if (eax == 7) {
                        goto label_7;
                    }
                    goto label_2;
                }
                if (eax == 0xa) {
                    goto label_8;
                }
                if (eax < 0xa) {
                    goto label_9;
                }
                if (eax == 0x18894) {
                    goto label_10;
                }
                goto label_2;
label_0:
                eax = "zero";
                goto label_11;
label_1:
                eax = 0x8048195;
                goto label_11;
            }
            eax = 0x8048199;
            goto label_11;
label_3:
            eax = "three";
            goto label_11;
label_4:
            eax = "four";
        } else {
            eax = "five";
            goto label_11;
label_6:
            eax = 0x80481ad;
            goto label_11;
label_7:
            eax = "seven";
            goto label_11;
label_5:
            eax = "eight";
            goto label_11;
label_9:
            eax = "nine";
            goto label_11;
label_8:
            eax = 0x80481c2;
            goto label_11;
label_10:
            eax = "stopyatsot";
            goto label_11;
        }
label_2:
        eax = "many";
    }
label_11:
    return eax;
}

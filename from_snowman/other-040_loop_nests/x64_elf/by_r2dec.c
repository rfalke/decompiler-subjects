/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-040_loop_nests/x64_elf/subject.exe @ 0x400144 */
#include <stdint.h>
 
void entry0 (void) {
    /* [02] -r-x section size 217 named .text */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-040_loop_nests/x64_elf/subject.exe @ 0x400150 */
#include <stdint.h>
 
int32_t f (uint32_t arg4, uint32_t arg3, int64_t arg2, uint32_t arg1) {
    uint32_t var_10h;
    uint32_t var_ch;
    int64_t var_8h;
    uint32_t var_4h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 4)) = edi;
    *((rbp - 8)) = esi;
    *((rbp - 0xc)) = edx;
    *((rbp - 0x10)) = ecx;
    goto label_3;
    do {
        *((rbp - 8))++;
        eax = *((rbp - 8));
        if (eax == *((rbp - 0xc))) {
            goto label_4;
        }
        goto label_5;
label_0:
label_5:
        eax = 0;
        eax = h ();
    } while (eax != 0);
    *((rbp - 8))++;
label_3:
    if (*((rbp - 4)) != 0) {
        goto label_0;
    }
    goto label_6;
    do {
label_1:
        if (*((rbp - 4)) != 0) {
            eax = *((rbp - 0xc));
            *((rbp - 0x10)) = eax;
        }
        eax = 0;
        eax = _text ();
        if (eax == 0) {
            goto label_7;
        }
        eax = 0;
        eax = h ();
    } while (eax != 0);
label_7:
    *((rbp - 4))--;
    goto label_8;
label_2:
label_8:
    eax = 0;
    eax = h ();
    if (eax != 0) {
        goto label_1;
    }
    while (eax != 0) {
        *((rbp - 4))++;
        if (*((rbp - 0x10)) == 0) {
            goto label_9;
        }
        if (*((rbp - 4)) == 0) {
            *((rbp - 0x10)) = 0x14;
        } else {
        }
        eax = 0;
        eax = _text ();
        if (eax == 0) {
            goto label_6;
        }
        eax = 0;
        eax = h ();
    }
    goto label_6;
label_9:
label_6:
    eax = *((rbp - 8));
    edx = *((rbp - 4));
    eax += edx;
    if (eax != *((rbp - 0xc))) {
        goto label_2;
    }
    goto label_10;
label_4:
label_10:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-040_loop_nests/x64_elf/subject.exe @ 0x40014a */
#include <stdint.h>
 
void h (void) {
}

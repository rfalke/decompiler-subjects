/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-039_cyclic/ia32_elf/subject.exe @ 0x80480d8 */
#include <stdint.h>
 
void entry0 (void) {
    /* [02] -r-x section size 242 named .text */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-039_cyclic/ia32_elf/subject.exe @ 0x80480e2 */
#include <stdint.h>
 
int32_t f (uint32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, uint32_t arg_14h) {
    uint32_t var_4h;
    uint32_t var_8h;
    uint32_t var_ch;
label_0:
    while (*((ebp + 8)) != 0) {
        *((ebp + 0xc))++;
    }
    while (*((ebp + 8)) != 0) {
        *((ebp + 0xc))++;
        eax = *((ebp + 0xc));
        if (eax == *((ebp + 0x10))) {
            goto label_1;
        }
    }
    while (eax != 0) {
        *((ebp + 8))++;
        eax = h ();
    }
    while (eax != 0) {
        *((ebp + 8))++;
        eax = _text ();
        if (eax == 0) {
            goto label_2;
        }
        eax = h ();
    }
    do {
label_2:
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        eax = *((ebp + 0x14));
        f (eax, eax, eax);
        goto label_0;
        eax = _text ();
    } while (eax != 0);
    do {
        if (*((ebp + 8)) != 0) {
            eax = *((ebp + 8));
            eax = *((ebp + 0xc));
            eax = *((ebp + 0x10));
            eax = *((ebp + 0x14));
            f (eax, eax, eax);
            goto label_0;
            goto label_3;
        }
        eax = _text ();
        *((ebp + 0x14)) = eax;
        if (*((ebp + 0x14)) != 0) {
            h ();
        } else {
        }
    } while (*((ebp + 8)) != 0);
    do {
        eax = _text ();
        eax -= *((ebp + 0xc));
        *((ebp + 8)) = eax;
        if (*((ebp + 8)) != 0) {
            goto label_4;
        }
        eax = _text ();
        if (eax == 0) {
            goto label_3;
        }
        eax = h ();
    } while (eax != 0);
    goto label_3;
label_1:
    goto label_3;
label_4:
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-039_cyclic/ia32_elf/subject.exe @ 0x80480dd */
#include <stdint.h>
 
void h (void) {
}

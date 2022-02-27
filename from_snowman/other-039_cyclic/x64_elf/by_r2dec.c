/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-039_cyclic/x64_elf/subject.exe @ 0x400144 */
#include <stdint.h>
 
void entry0 (void) {
    /* [02] -r-x section size 277 named .text */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-039_cyclic/x64_elf/subject.exe @ 0x400150 */
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
label_0:
    *((rbp - 4)) = edi;
    *((rbp - 8)) = esi;
    *((rbp - 0xc)) = edx;
    *((rbp - 0x10)) = ecx;
    while (*((rbp - 4)) != 0) {
        *((rbp - 8))++;
    }
    while (*((rbp - 4)) != 0) {
        *((rbp - 8))++;
        eax = *((rbp - 8));
        if (eax == *((rbp - 0xc))) {
            goto label_1;
        }
    }
    while (eax != 0) {
        *((rbp - 4))++;
        eax = 0;
        eax = h ();
    }
    while (eax != 0) {
        *((rbp - 4))++;
        eax = 0;
        eax = _text ();
        if (eax == 0) {
            goto label_2;
        }
        eax = 0;
        eax = h ();
    }
    do {
label_2:
        ecx = *((rbp - 0xc));
        edx = *((rbp - 8));
        esi = *((rbp - 4));
        eax = *((rbp - 0x10));
        edi = *((rbp - 0x10));
        f ();
        goto label_0;
        eax = 0;
        eax = _text ();
    } while (eax != 0);
    do {
        if (*((rbp - 4)) != 0) {
            ecx = *((rbp - 4));
            edx = *((rbp - 8));
            esi = *((rbp - 0xc));
            eax = *((rbp - 0x10));
            edi = *((rbp - 0x10));
            f ();
            goto label_0;
            goto label_3;
        }
        eax = 0;
        eax = _text ();
        *((rbp - 0x10)) = eax;
        if (*((rbp - 0x10)) != 0) {
            eax = 0;
            h ();
        } else {
        }
    } while (*((rbp - 4)) != 0);
    do {
        eax = 0;
        eax = _text ();
        eax -= *((rbp - 8));
        *((rbp - 4)) = eax;
        if (*((rbp - 4)) != 0) {
            goto label_4;
        }
        eax = 0;
        eax = _text ();
        if (eax == 0) {
            goto label_3;
        }
        eax = 0;
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
/* SUBJECTS/from_snowman/other-039_cyclic/x64_elf/subject.exe @ 0x40014a */
#include <stdint.h>
 
void h (void) {
}

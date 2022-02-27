/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/users/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    bl--;
    bl--;
    if (bl != 0) {
    } else {
    }
    ecx = 0;
    eax = 5;
    eax = sys_open (0xed, ecx, 0x80480d0);
    eax++;
    eax++;
    if (eax == 0) {
        goto label_1;
    }
    do {
label_0:
        eax = 3;
        eax = sys_read (0xe, 0x80480e0, 0x180);
        if (eax == 0) {
            goto label_2;
        }
        *(0x80480e0) ^= 7;
    } while (eax != 0);
    edx = 0x20;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804810c, 0x20);
    edx = 1;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80480de, 0x1);
    goto label_0;
label_2:
    edx = 1;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80480df, 0x1);
label_1:
    eax = 6;
    eax = sys_close (0xe);
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    __asm ("das");
    if (eax > 0) {
        if (eax >= 0) {
            if (eax < 0) {
                goto label_3;
            }
            __asm ("outsb dx, byte [esi]");
            __asm ("das");
            if (eax != 0) {
                goto label_4;
            }
            __asm ("insd dword es:[edi], dx");
            if (eax !overflow 0) {
            }
            *(edx) &= cl;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
            *(eax) += al;
        }
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
    }
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
label_3:
    *(eax) += al;
    *(eax) += al;
label_4:
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    bh += bh;
}

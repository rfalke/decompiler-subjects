/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/fromdos/ia32_elf/subject.exe @ 0x804804d */
#include <stdint.h>
 
void entry0 (void) {
    eax--;
    if (eax != 0) {
        goto label_2;
    }
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    do {
label_0:
        edx = 1;
        ebx = 0;
        eax = 3;
        eax = sys_read (ebx, 0x80480a4, 0x1);
        if (eax == 0) {
            goto label_2;
        }
        if (*((esi - 6)) == 0x6d6f) {
            goto label_3;
        }
        if (*(ecx) == 0xa) {
            edx = 1;
            ebx = 1;
            eax = 4;
            eax = sys_write (0x1, 0x804804c, 0x1);
            ecx = 4;
        }
label_1:
        edx = 1;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, ecx, 0x1);
    } while (1);
label_3:
    if (*(ecx) == 0xd) {
        goto label_0;
    }
    goto label_1;
label_2:
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    bh += bh;
}

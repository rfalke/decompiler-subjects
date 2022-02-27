/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mesg/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    edx = 0;
    dh = 1;
    ecx = 0x80480e1;
    ebx = 0x80480d2;
    eax = 0x55;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax < 0) {
        goto label_0;
    }
    eax = 0;
    eax = 0x6a;
    eax = sys_newstat (0x80480e1, 0x80481e1);
    eax = *((ecx + 8));
    if (ebx != 0) {
        goto label_1;
    }
    eax &= 0x10;
    if (eax == 0x10) {
        ecx = 0x80480c8;
    } else {
    }
    edx = 5;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80480cd, 0x5);
    do {
label_0:
        eax = 1;
        eax = sys_exit (0xea);
label_1:
        if (*(ebx) == 0x6e) {
            goto label_2;
        }
    } while (*(ebx) != 0x79);
    eax |= 0x10;
    goto label_3;
label_2:
    eax |= 0x10;
    eax ^= 0x10;
label_3:
    eax = 0xf;
    eax = sys_chmod (0x80480e1, 0xea);
    goto label_0;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/softdog/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    esi = 0xa;
    esi--;
    if (esi == 0) {
        goto label_0;
    }
    esi = 0xa;
    esi = 0xa;
    eax = 0;
    ebx = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_1;
        }
        if (al > 9) {
            goto label_1;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_1:
    ebx |= ebx;
    if (ebx != 0) {
        eax = 0x3c;
        if (ebx >= eax) {
            ebx = eax;
        }
    }
label_0:
    *(0x80480cb) = ebp;
    ecx = 1;
    eax = 5;
    eax = sys_open (0x80480bd, 0x1, edx);
    if (eax >= 0) {
        eax = 2;
        eax = sys_fork (ebx);
        eax |= eax;
        if (eax == 0) {
            goto label_2;
        }
    }
    eax = 1;
    eax = sys_exit (ebx);
    do {
label_2:
        edx = 1;
        eax = 4;
        eax = sys_write (0xeb, 0x80480bd, 0x1);
        ecx = 0;
        ebx = 0x80480cb;
        eax = 0;
        al = 0xa2;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    } while (1);
}

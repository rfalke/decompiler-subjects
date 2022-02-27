/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/touch/ia32_elf/subject.exe @ 0x8048053 */
#include <stdint.h>
 
int32_t entry0 (void) {
    do {
        ebx = 0;
        eax = 1;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        eax = 1;
        eax = 1;
        edi = 0;
        edi--;
label_0:
        edi++;
label_1:
        eax = 1;
        eax |= eax;
    } while (eax == 0);
    if (*(eax) == 0x632d) {
        goto label_0;
    }
    if (eax < 0) {
        edi |= edi;
        if (edi != 0) {
            goto label_2;
        }
        ecx = 0x42;
        eax = 5;
        eax = sys_open (0xeb, 0x42, 0x1b6);
    }
label_2:
    ecx = 0;
    eax = 0x1e;
    eax = sys_utime (0xeb, ecx);
    goto label_1;
}

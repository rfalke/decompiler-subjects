/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/update/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    esi = 0x1e;
    esi--;
    if (esi == 0) {
        goto label_0;
    }
    esi = 0x1e;
    esi = 0x1e;
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
    }
label_0:
    *(0x804809b) = ebp;
    eax = 2;
    eax = sys_fork (ebx);
    if (eax == 0) {
        goto label_2;
    }
    eax = 1;
    eax = sys_exit (ebx);
    do {
label_2:
        ecx = 0;
        ebx = 1;
        eax = 0;
        al = 0x86;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        ebx = 0x804809b;
        eax = 0;
        al = 0xa2;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    } while (1);
}

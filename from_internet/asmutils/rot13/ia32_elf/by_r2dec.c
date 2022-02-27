/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rot13/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
label_1:
    edx = 0x50;
    ecx = esp;
    ebx = 0;
    eax = 3;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax |= eax;
    if (eax == 0) {
        goto label_2;
    }
    ecx = eax;
    esi = esp;
    edi = esp;
    while (al < 0x41) {
label_0:
        *(es:edi) = al;
        es:edi++;
        ecx--;
        if (ecx == 0) {
            goto label_3;
        }
        al = *(esi);
        esi++;
    }
    if (al > 0x7a) {
        goto label_0;
    }
    if (al <= 0x5a) {
        goto label_4;
    }
    if (al < 0x61) {
        goto label_0;
    }
label_4:
    if (al > 0x4d) {
        if (al <= 0x5a) {
            goto label_5;
        }
        if (al <= 0x6d) {
            goto label_6;
        }
        if (al <= 0x7a) {
            goto label_5;
        }
        goto label_0;
    }
label_6:
    al += 0xd;
    goto label_0;
label_5:
    al -= 0xd;
    goto label_0;
label_3:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0xeb);
    goto label_1;
label_2:
    eax = 1;
    eax = sys_exit (0xea);
}

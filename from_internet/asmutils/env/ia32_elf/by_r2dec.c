/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/env/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
label_0:
    ebp++;
    esi = *((esp + ebp*4));
    if (esi == 0) {
        goto label_1;
    }
    ecx = esi;
    edx = 0;
    edx--;
    do {
        edx++;
        al = *(esi);
        esi++;
    } while (al != 0);
    *((esi - 1)) = 0xa;
    edx++;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, edx);
    goto label_0;
label_1:
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
}

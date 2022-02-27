/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/yes/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    edi = 0x8048087;
    edx = 0x8048087;
    ebp--;
    if (ebp != 0) {
        goto label_1;
    }
    al = 0x79;
    *(es:edi) = al;
    es:edi++;
    ebp++;
    do {
        ebp--;
        if (ebp == 0) {
            goto label_2;
        }
        al = 0x20;
        *(es:edi) = al;
        es:edi++;
label_1:
label_0:
        al = *(esi);
        esi++;
        al |= al;
    } while (al == 0);
    *(es:edi) = al;
    es:edi++;
    if (edi < 0x8049085) {
        goto label_0;
    }
label_2:
    al = 0xa;
    *(es:edi) = al;
    es:edi++;
    edi -= edx;
    do {
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x8048087, 0xed);
    } while (1);
}

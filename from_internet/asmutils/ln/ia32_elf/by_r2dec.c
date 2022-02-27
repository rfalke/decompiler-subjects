/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ln/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int8_t entry0 (void) {
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    if (ebx < 3) {
        goto label_0;
    }
    if (*((esi - 4)) == 0x73) {
        goto label_1;
    }
    if (*(edi) != 0x732d) {
        goto label_2;
    }
    do {
        eax = 0x53;
        eax = sys_symlink (0xeb, 0xed);
label_0:
        eax = 1;
        eax = sys_exit (0xea);
label_1:
        tmp_0 = edi;
        edi = ebp;
        ebp = tmp_0;
        eax = 0xa;
        eax = sys_unlink (0xed);
    } while (1);
label_2:
    eax = 9;
    eax = sys_link (0xed, 0xeb);
    goto label_0;
}

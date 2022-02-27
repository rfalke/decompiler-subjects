/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/basename/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    ebx = 1;
    eax = 1;
    edi = eax;
    edi--;
    if (edi == 0) {
        goto label_4;
    }
    if (edi > 2) {
        goto label_4;
    }
    eax = 1;
    eax = 1;
    ebx = eax;
    edx = 0;
    if (*(eax) == 0) {
        goto label_3;
    }
    do {
        eax++;
    } while (*(eax) != 0);
    edx = eax;
    do {
        eax--;
        if (eax < ebx) {
            edx = 0;
            goto label_3;
        }
    } while (*(eax) == 0x2f);
    eax++;
    edx = eax;
    do {
        eax--;
        if (*(eax) == 0x2f) {
            goto label_5;
        }
        if (eax == ebx) {
            goto label_6;
        }
    } while (1);
label_1:
    eax = 1;
label_0:
    edx = 1;
    ecx = 1;
    do {
label_3:
        *((ecx + edx)) = 0xa;
        edx++;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, ecx, edx);
        ebx = 0;
label_4:
        eax = 1;
        eax = sys_exit (ebx);
label_5:
        eax++;
label_6:
        ecx = eax;
        edx -= eax;
        edi--;
    } while (edi == 0);
    eax = 1;
    ecx += edx;
    ebx = eax;
    if (*(eax) == 0) {
        goto label_0;
    }
    do {
        eax++;
    } while (*(eax) != 0);
    eax -= ebx;
    if (eax >= edx) {
        goto label_0;
    }
    eax += ebx;
label_2:
    eax--;
    ecx--;
    dl = *(eax);
    if (*(ecx) != dl) {
        goto label_1;
    }
    if (eax != ebx) {
        goto label_2;
    }
    eax -= ebx;
    edx = eax;
    ecx = eax;
    edx -= eax;
    goto label_3;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tail/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    esi = 0x804804d;
    *(0x804818f) = 0xa;
    ebp = 0;
    ecx--;
    if (ecx == 0) {
        goto label_4;
    }
    if (*(ebx) != 0x2d) {
        goto label_5;
    }
    esi = ebx;
    esi++;
    if (*(esi) == 0x6e) {
    }
    ebx = 0;
    eax = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_6;
        }
        if (al > 9) {
            goto label_6;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_6:
    *(0x804818f) = ebx;
    ebx |= ebx;
    if (ebx != 0) {
label_5:
        ecx = 0;
        eax = 5;
        eax = sys_open (ebx, ecx, edx);
        if (eax < 0) {
            goto label_1;
        }
    }
label_4:
    eax = 0x6c;
    eax = sys_newfstat (0xeb, 0x8054193);
    if ((*(0x805419b) & 0x8000) != 0) {
        ebx = *(0x80541a7);
        ebx -= 0x4000;
        if (ebx <= 0) {
            goto label_7;
        }
        edx = 0;
        eax = 0x13;
        eax = sys_lseek (0xeb, 0xeb, edx);
    }
label_7:
    ecx = 0x8048193;
    esi--;
    if (*(esi) == 0x63) {
        goto label_8;
    }
    do {
        edx = 0;
        dh = 0x40;
        eax = 3;
        eax = sys_read (0xeb, ecx, edx);
        if (eax < 0) {
            goto label_1;
        }
        if (eax == 0) {
            goto label_9;
        }
        ecx += eax;
    } while (ecx <= 0x8050193);
label_3:
    edi = 0x8048193;
    esi = 0x804c193;
    ecx -= esi;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    ecx -= 0x4000;
    return eax;
    do {
label_1:
        eax = 1;
        eax = sys_exit (ebx);
label_9:
    } while (ecx == 0x8048193);
    edx = ecx;
    ebx = *(0x804818f);
    ebx++;
    ecx--;
    do {
        ebx--;
        if (ebx == 0) {
            goto label_10;
        }
label_0:
        ecx--;
        if (ecx == 0x8048193) {
            goto label_11;
        }
    } while (*(ecx) == 0xa);
    goto label_0;
label_10:
    ecx++;
label_11:
    edx -= ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, edx);
    goto label_1;
label_8:
    edx = 0;
    dh = 0x40;
label_2:
    eax = 3;
    eax = sys_read (0xeb, 0x8048193, edx);
    eax |= eax;
    if (eax < 0) {
        goto label_1;
    }
    if (eax == 0) {
        goto label_12;
    }
    ecx += eax;
    if (ecx < 0x8050193) {
        goto label_2;
    }
    void (*0x80480fa)() ();
    goto label_3;
    goto label_2;
label_12:
    edx = *(0x804818f);
    ecx -= edx;
    eax = 0x8048193;
    if (ecx < eax) {
        tmp_0 = eax;
        eax = ecx;
        ecx = tmp_0;
        eax -= ecx;
        edx += eax;
    }
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, edx);
    goto label_1;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/strings/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    eax--;
    if (eax == 0) {
        goto label_3;
    }
    do {
label_0:
        if (ebx == 0) {
            goto label_4;
        }
        if (*(ebx) != 0x6e2d) {
            goto label_5;
        }
        eax = void (*0x8048106)() ();
        *(0x804811b) = eax;
    } while (1);
label_5:
    ecx = 0;
    eax = 5;
    eax = sys_open (ebx, ecx, edx);
    if (eax < 0) {
        goto label_6;
    }
label_3:
label_1:
    eax = 3;
    eax = sys_read (0xeb, 0x8048123, 0x1000);
    if (eax < 0) {
        goto label_6;
    }
    if (eax == 0) {
        goto label_0;
    }
    esi = ecx;
    ecx = eax;
    edx = 0;
    eax = 0;
    do {
label_2:
        al = *(esi);
        esi++;
        if (al < 0x20) {
            goto label_7;
        }
        if (al > 0x7e) {
            goto label_7;
        }
        if (ah == 0) {
            ah++;
            *(0x804811f) = esi;
        }
        edx++;
        __asm ("loop 0x80480a2");
    } while (1);
    goto label_1;
label_7:
    if (ah != 0) {
        if (edx >= *(0x804811b)) {
            ecx--;
            ebx = 1;
            eax = 4;
            eax = sys_write (0x1, 0x804811f, edx);
            edx = 1;
            ebx = 1;
            eax = 4;
            eax = sys_write (0x1, 0x804811a, 0x1);
            ecx = 4;
        }
        eax = 0;
        edx = 0;
    }
    ecx--;
    if (ecx != 0) {
        goto label_2;
    }
    goto label_1;
label_6:
    ebx = 0;
    ebx--;
    goto label_8;
label_4:
    ebx = 0;
label_8:
    eax = 1;
    eax = sys_exit (ebx);
    eax = 0;
    ebx = 0;
    do {
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_9;
        }
        al -= 0x30;
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_9:
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
}

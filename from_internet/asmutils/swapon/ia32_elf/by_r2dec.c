/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/swapon/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    do {
label_0:
        ebx |= ebx;
        if (ebx == 0) {
            goto label_2;
        }
        if (*((esi - 7)) == 0x6b6d) {
            goto label_3;
        }
        if (*((esi - 3)) != 0x6666) {
            goto label_4;
        }
        eax = 0x73;
        eax = sys_swapoff (ebx);
    } while (1);
label_4:
    eax = 0x57;
    eax = sys_swapon (ebx, ecx);
    goto label_0;
label_3:
    ecx = 2;
    eax = 5;
    eax = sys_open (ebx, 0x2, edx);
    if (eax < 0) {
        goto label_2;
    }
    edx = 2;
    ecx = 0;
    eax = 0x13;
    eax = sys_lseek (0xeb, ecx, 0x2);
    while (eax < 0) {
label_1:
        ebx = 2;
        eax = 4;
        eax = sys_write (0x2, 0x8048117, 0xb);
label_2:
        eax = 1;
        eax = sys_exit (0xea);
        edi = eax;
        edi >>= 0xc;
        edi--;
        edx = 0;
        ecx = 0;
        ch = 4;
        eax = 0x13;
        eax = sys_lseek (0xeb, ecx, edx);
    }
    edx = 4;
    eax = 4;
    eax = sys_write (0xeb, 0xe, 0x4);
    edx = 4;
    eax = 4;
    eax = sys_write (0xeb, 0xe, 0x4);
    edx = 0;
    eax = 0x13;
    eax = sys_lseek (0xeb, 0xff6, edx);
    eax = 4;
    eax = sys_write (0xeb, 0x804810d, 0xa);
    if (eax < 0) {
        goto label_1;
    }
    eax = 6;
    eax = sys_close (0xeb);
    eax = 0;
    goto label_2;
}

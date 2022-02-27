/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/head/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
uint32_t entry0 (void) {
    *(0x804811e) = 0;
    *(0x804811a) = 0xa;
    edi = 0;
    ebp = 0;
    ebx--;
    if (ebx == 0) {
        goto label_4;
    }
    goto label_1;
label_0:
    eax = fcn_08048106 ();
    *(0x804811e) = eax;
    while (*(ebx) == 0x6e2d) {
        eax = fcn_08048106 ();
        *(0x804811a) = eax;
        goto label_1;
label_2:
        eax = 6;
        eax = sys_close (0xeb);
        ebp++;
label_1:
        ebx = 6;
        ebx |= ebx;
        if (ebx == 0) {
            ebp |= ebp;
            if (ebp == 0) {
                goto label_4;
            }
            eax = 1;
            eax = sys_exit (0xed);
        }
    }
    if (*(ebx) == 0x632d) {
        goto label_0;
    }
    ecx = 0;
    eax = 5;
    eax = sys_open (ebx, ecx, edx);
    tmp_0 = eax;
    eax = ebp;
    ebp = tmp_0;
    while (eax < 0) {
        edi++;
        goto label_1;
label_4:
        edx = 0;
        dh = 0x20;
        eax = 3;
        eax = sys_read (0xeb, 0x8048122, edx);
    }
    if (eax == 0) {
        goto label_2;
    }
    esi = *(0x804811e);
    if (esi > 0) {
        goto label_5;
    }
    esi = 0;
    esi--;
    ebx = eax;
    do {
label_3:
        esi++;
        if (esi > ebx) {
            goto label_6;
        }
    } while (*((ecx + esi)) != 0xa);
    *(0x804811a)--;
    eax = *(0x804811a);
    if (eax != 0) {
        goto label_3;
    }
label_6:
    esi++;
label_5:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, 0xe);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/head/ia32_elf/subject.exe @ 0x8048106 */
#include <stdint.h>
 
int32_t fcn_08048106 (void) {
    eax = 0;
    ebx = 0;
    do {
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_0;
        }
        al -= 0x30;
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_0:
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    return eax;
}

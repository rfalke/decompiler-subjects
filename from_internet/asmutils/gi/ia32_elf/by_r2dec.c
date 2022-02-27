/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/gi/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    esi |= esi;
    if (esi == 0) {
        goto label_1;
    }
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (0x1, 0xe);
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    edi = 0x80480d2;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
    } while (al != 0);
    eax = 0x36;
    eax = sys_ioctl (ebx, 0x8915, 0x80480d2);
    eax |= eax;
    if (eax < 0) {
        goto label_1;
    }
    edi = 0x80480d2;
    ebp = *(0x80480e6);
    ecx = 4;
label_0:
    eax = ebp;
    ebp >>= 8;
    eax &= 0xff;
    ecx = 0;
    ebx = 0xa;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl += 0x30;
        ecx++;
        eax |= eax;
    } while (eax != 0);
    do {
        eax = edx;
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x80480b0");
    } while (1);
    al = 0x2e;
    ecx = edx;
    *(es:edi) = al;
    es:edi++;
    __asm ("loop 0x8048093");
    goto label_0;
    *((edi - 1)) = 0xa;
    ecx = edx;
    edx -= ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, 0xed);
label_1:
    eax = 1;
    eax = sys_exit (0xea);
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
}

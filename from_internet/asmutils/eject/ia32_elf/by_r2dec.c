/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/eject/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    ebx = 0x804810d;
    edi = ecx;
    eax = 0;
    ecx = eax - 1;
    __asm ("repne scasb al, byte es:[edi]");
    eax = edx;
    ecx = *((edi - 4));
    edi = 0x804812f;
    edi = (ecx != 0x646363) ? 1 : 0;
    esi = ebx;
    ecx = ebx + 4;
    edx = ebx + 0xf;
    eax--;
    if (eax != 0) {
        if (*(ebx) != 0x6463632d) {
            if ((*(edi) & 0xff) == 0) {
                goto label_0;
            }
        }
        *(edi) = 0;
        eax--;
        ebx = esi;
        if (eax == 0) {
            goto label_1;
        }
label_0:
        eax--;
        if (eax == 0) {
            goto label_1;
        }
        eax--;
        if (eax == 0) {
            goto label_1;
        }
        eax--;
        if (eax == 0) {
            goto label_1;
        }
    }
label_1:
    if ((*(edi) & 0xff) == 0) {
        eax = 0x16;
        eax = sys_oldumount (ebx);
    }
    ecx = 0;
    ch = 8;
    eax = 5;
    eax = sys_open (ebx, ecx, edx);
    if (eax >= 0) {
        eax = 0x36;
        eax = sys_ioctl (0xea, 0x5309, edx);
        if ((*(edi) & 0xff) != 0) {
            goto label_2;
        }
        edx = 0;
        dl = 0xb;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x8048124, edx);
        dl = 1;
        ebx = 0;
        eax = 3;
        eax = sys_read (ebx, ecx, edx);
        edx = 3;
        ebx = 3;
        eax = 0x36;
        eax = sys_ioctl (ebx, 0x5319, edx);
    }
    ecx = 0x36;
    ebx = 0x36;
    tmp_0 = esp;
    esp = ecx;
    ecx = tmp_0;
    eax = 0x15;
    eax = sys_mount (ebx, ecx, edx, 0xc0ed0001);
    eax = 0x15;
label_2:
    if (eax >= 0) {
        eax = 0;
    }
    eax = 1;
    eax = sys_exit (0xea);
    __asm ("das");
    if (eax <= 0) {
        void (*0x8048141)() ();
    }
    __asm ("arpl word [edx + esi*2 + 0x6f], sp");
    __asm ("insd dword es:[edi], dx");
    *(eax) += al;
    *(eax) += al;
    *((ecx + 0x73)) += ch;
    __asm ("outsd dx, dword [esi]");
    *(ss:eax) ^= al;
    __asm ("outsb dx, byte [esi]");
    if (al == 0x65) {
        void (*0x804818e)() ();
    }
    if (al < 0x65) {
        void (*0x8048169)() ();
    }
    *(esi) &= ch;
    *(cs:eax) += al;
    *(eax) += al;
    bh += bh;
}

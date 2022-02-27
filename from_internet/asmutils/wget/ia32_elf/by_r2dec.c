/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/wget/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_4h, uint32_t arg_9h) {
    if (ecx != 3) {
        goto label_1;
    }
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (0x1, 0xe);
    if (eax < 0) {
        goto label_1;
    }
    *(0x804819e) = eax;
    edi = esp;
    void (*0x804817c)(uint32_t, uint32_t) (2, 0x5000);
    ebx = 3;
    eax = 0x66;
    eax = sys_socketcall (0x3, 0xe);
    if (eax != 0) {
        goto label_1;
    }
    esi = ebp;
    *(esp) = 0x20544547;
    edi = esp + 4;
    ecx = 0;
    al = 0x2f;
    do {
        ecx++;
        *(es:edi) = al;
        es:edi++;
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    al = 0x20;
    *(es:edi) = al;
    es:edi++;
    *(edi) = 0x50545448;
    *((edi + 4)) = 0x302e312f;
    *((edi + 8)) = 0xa0d0a0d;
    ecx += 0x11;
    eax = 4;
    eax = sys_write (0x804819e, 0xe, 0xec);
    edx = 0;
    dh = 0x20;
    eax = 3;
    eax = sys_read (0x804819e, 0xe, edx);
    if (*(esp) != 0x50545448) {
        goto label_1;
    }
    if (*((esp + 9)) != 0x20303032) {
        goto label_1;
    }
    edi = esp;
    ecx = eax;
    edx = eax;
    al = 0xd;
    do {
        __asm ("repne scasb al, byte es:[edi]");
        ecx |= ecx;
        if (ecx == 0) {
            goto label_1;
        }
        if (*((edi - 1)) == 0xa0a) {
            goto label_2;
        }
    } while (*((edi - 1)) != 0xa0d0a0d);
label_2:
    edi += 3;
    ecx = 0x42;
    eax = 5;
    eax = sys_open (0xeb, 0x42, 0x180);
    if (eax < 0) {
        goto label_1;
    }
    *(0x80481a2) = eax;
    eax = 5;
    eax -= 3;
    do {
        eax = 4;
        eax = sys_write (0x80481a2, 0xed, 0xea);
        edi = esp;
        edx = 0;
        dh = 0x20;
        eax = 3;
        eax = sys_read (0x804819e, 0xed, edx);
        eax |= eax;
    } while (eax != 0);
label_1:
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    eax = 0;
    edx = 0;
    ecx = 0;
label_0:
    ebx = 0;
    do {
        al = *((esi + edx));
        edx++;
        al -= 0x30;
        if (al < 0) {
            goto label_3;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_3:
    *((edi + ecx + 4)) = bl;
    ecx++;
    if (ecx != 4) {
        goto label_0;
    }
    return eax;
}

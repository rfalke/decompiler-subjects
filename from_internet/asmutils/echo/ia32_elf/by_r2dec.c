/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/echo/ia32_elf/subject.exe @ 0x804805c */
#include <stdint.h>
 
uint16_t entry0 (void) {
    edi = 0x804816b;
    ebx--;
    if (ebx == 0) {
        goto label_1;
    }
    do {
        esi = ebx;
        esi |= esi;
        if (esi == 0) {
label_1:
            edi--;
            edx = edi;
            edx -= ebp;
            edx |= edx;
            if (edx != 0) {
                edi--;
                edx--;
            }
            if ((*(0x804816a) & 1) == 0) {
                al = 0xa;
                *(es:edi) = al;
                es:edi++;
                edx++;
            }
            ebx = 1;
            eax = 4;
            eax = sys_write (0x1, 0xeb, edx);
            ebx = 0;
            eax = 1;
            eax = sys_exit (ebx);
        }
        al = *(esi);
        esi++;
        if (al != 0x2d) {
            goto label_6;
        }
        dh = 0;
label_0:
        al = *(esi);
        esi++;
        al |= al;
        if (al != 0) {
            goto label_7;
        }
        dh |= dh;
        if (dh == 0) {
            goto label_6;
        }
        *(0x804816a) |= dh;
    } while (1);
label_7:
    dl = 1;
    if (al != 0x6e) {
        dl = 2;
        if (al != 0x65) {
            dl = 4;
            if (al == 0x45) {
                goto label_8;
            }
            dh = 0;
        }
    } else {
label_8:
        dh |= dl;
        goto label_0;
label_3:
        ebx = 1;
    }
label_6:
    esi = ebx;
    esi |= esi;
    if (esi == 0) {
        goto label_1;
    }
    do {
label_2:
        al = *(esi);
        esi++;
        ebx = 0;
        dl = *(0x804816a);
        if ((dl & 4) != 0) {
            goto label_5;
        }
        if ((dl & 2) == 0) {
            goto label_5;
        }
        if (al != 0x5c) {
            goto label_5;
        }
        al = *(esi);
        esi++;
        if (al == 0x5c) {
            goto label_5;
        }
        if (al != 0x63) {
            goto label_9;
        }
        *(0x804816a) |= 1;
    } while (1);
label_9:
    ecx = 8;
    edx = 8;
    edi = 0x804804c;
    __asm ("repne scasb al, byte es:[edi]");
    if (*(0x804816a) == 0) {
        ecx++;
        edx -= ecx;
        al = *((edx + 0x8048054));
        goto label_5;
    }
    edx = 0;
    cx = 0x800;
    do {
        if (al < 0x30) {
            goto label_10;
        }
        if (al > 0x37) {
            goto label_10;
        }
        al -= 0x30;
        dh = al;
        al = dl;
        ax = al * ch;
        dl = al;
        dl += dh;
        if (cl == 2) {
            cl = 0xff;
            goto label_10;
        }
        al = *(esi);
        esi++;
        ecx++;
    } while (1);
label_4:
    al = 0x5c;
    *(es:edi) = al;
    es:edi++;
label_5:
    *(es:edi) = al;
    es:edi++;
    al |= al;
    if (al != 0) {
        goto label_2;
    }
    ebx |= ebx;
    if (ebx != 0) {
        goto label_2;
    }
    al = 0x20;
    *(es:edi) = al;
    es:edi++;
    goto label_3;
label_10:
    cl |= cl;
    if (cl == 0) {
        goto label_4;
    }
    if (cl != 0xff) {
        esi--;
    }
    al = dl;
    al |= al;
    if (al != 0) {
        goto label_5;
    }
    ebx++;
    goto label_5;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/which/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    edx = ebp;
    eax = 0;
    eax++;
    *(0x80487f5) = eax;
    do {
label_0:
        ebp++;
        esi = *((esp + ebp*4));
        esi |= esi;
        if (esi == 0) {
            goto label_4;
        }
    } while (*(esi) != 0x48544150);
    if (*((esi + 4)) != 0x3d) {
        goto label_0;
    }
    esi += 5;
    ebx = 0x80482ed;
    cl = 0x40;
    do {
label_1:
        al = *(esi);
        al |= al;
        if (al == 0) {
            goto label_4;
        }
        if (al != 0x3a) {
            goto label_5;
        }
        esi++;
    } while (1);
label_5:
    *(ebx) = esi;
    ebx += 4;
    do {
        esi++;
        al = *(esi);
        al |= al;
        if (al == 0) {
            goto label_4;
        }
    } while (al != 0x3a);
    *(esi) = 0;
    esi++;
    cl--;
    if (cl != 0) {
        goto label_1;
    }
label_4:
    eax = 0x18;
    eax = sys_getuid16 ();
    *(0x80481e1) = eax;
    eax = 0x2f;
    eax = sys_getgid16 ();
    *(0x80481e5) = eax;
    ebx = 0x40;
    eax = 0x50;
    eax = sys_getgroups16 (0x40, 0x80481ed);
    *(0x80481e9) = eax;
    do {
        ebp--;
        if (ebp == 0) {
            goto label_6;
        }
        edi = 0x50;
        *(0x80487f9) = edi;
        void (*0x80480e3)() ();
    } while (1);
label_6:
    eax = 1;
    eax = sys_exit (0x80487f5);
    esi = *(0x80487f9);
    do {
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_3;
        }
    } while (al != 0x2f);
    edi = 0x80483f5;
    goto label_7;
label_3:
    esi = *(ebp);
    esi |= esi;
    if (esi == 0) {
        goto label_8;
    }
    al = *(esi);
    al |= al;
    if (al == 0) {
        goto label_8;
    }
    edi = 0x80483f5;
    fcn_080481da ();
    edi--;
    al = 0x2f;
    if (*(edi) != al) {
        *(es:edi) = al;
        es:edi++;
    }
label_7:
    esi = *(0x80487f9);
    fcn_080481da ();
    eax = 0x6a;
    eax = sys_newstat (0x80483f5, 0x80487fd);
    eax = -eax;
    if (*(edi) < al) {
        goto label_9;
    }
    ecx = *(0x8048803);
    ecx >>= 0x1c;
    ecx &= 0xfffffffb;
    if (ecx == 0) {
        goto label_9;
    }
    eax = *(0x8048805);
    eax &= 0x49;
    if (eax == 0) {
        goto label_9;
    }
    ebx = *(0x80481e1);
    ebx |= ebx;
    while (eax != 0) {
label_2:
        eax = 0;
        *(0x80487f5) = eax;
        al = 0xa;
        *(es:edi) = al;
        es:edi++;
        edx -= 0x80483f5;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x80483f5, 0xed);
label_8:
        return;
        if (bx != *(0x8048809)) {
            goto label_10;
        }
        eax &= 0x40;
    }
    goto label_9;
label_10:
    cx = *(0x804880b);
    if (ecx == *(0x80481e5)) {
        goto label_11;
    }
    edx = *(0x80481e9);
    ebx = 0x80481ed;
    do {
        if (cx == *(ebx)) {
            goto label_11;
        }
        ebx++;
        ebx++;
        edx--;
    } while (edx != 0);
    eax &= 1;
    if (eax != 0) {
        goto label_2;
    }
    goto label_9;
label_11:
    eax &= 0xa;
    if (eax != 0) {
        goto label_2;
    }
label_9:
    ebp += 4;
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/which/ia32_elf/subject.exe @ 0x80481da */
#include <stdint.h>
 
int8_t fcn_080481da (void) {
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    return al;
}

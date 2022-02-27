/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cat/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    edi = 0;
    ebp = 0;
    ebx--;
    if (ebx == 0) {
        goto label_3;
    }
    do {
        ebx |= ebx;
        if (ebx == 0) {
            goto label_6;
        }
        esi = ebx;
        al = *(esi);
        esi++;
        if (al != 0x2d) {
            goto label_7;
        }
        if (*(esi) == 0) {
            goto label_7;
        }
label_0:
        al = *(esi);
        esi++;
    } while (al == 0);
    if (al == 0x41) {
        ah |= 7;
    }
    if (al == 0x62) {
        ah |= 0x30;
    }
    if (al == 0x65) {
        ah |= 6;
    }
    if (al == 0x45) {
        ah |= 2;
    }
    if (al == 0x6e) {
        ah |= 0x10;
    }
    if (al == 0x73) {
        ah |= 8;
    }
    if (al == 0x74) {
        ah |= 5;
    }
    if (al == 0x54) {
        ah |= 1;
    }
    if (al == 0x76) {
        ah |= 4;
    }
    if (al != 0x2d) {
        goto label_0;
    }
    *(0x804c2b8) = ah;
    goto label_2;
label_6:
    *(0x804c2b8) = ah;
    goto label_3;
label_7:
    *(0x804c2b8) = ah;
    do {
label_2:
        ebx |= ebx;
        if (ebx == 0) {
            goto label_8;
        }
        ebp = 0;
        if (*(ebx) == 0x2d) {
            goto label_3;
        }
        ecx = 0;
        eax = 5;
        eax = sys_open (ebx, ecx, edx);
        tmp_0 = eax;
        eax = ebp;
        ebp = tmp_0;
        if (ebp >= 0) {
            goto label_3;
        }
label_1:
        edi++;
    } while (1);
label_3:
    if ((*(0x804c2b8) & 0xff) != 0) {
        goto label_9;
    }
    edx = 0;
    dh = 0x20;
    eax = 3;
    eax = sys_read (0xeb, 0x80482ac, edx);
    if (eax < 0) {
        goto label_1;
    }
    if (eax == 0) {
        goto label_2;
    }
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, 0xea);
    goto label_3;
label_8:
    edx |= edx;
    if (edx != 0) {
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804a2ac, 0x804c2b0);
    }
    eax = 1;
    eax = sys_exit (0xed);
label_9:
    esi = 0x80482ac;
label_4:
    al = fcn_080481e2 ();
    if (edx < 0) {
        goto label_2;
    }
    ah = *(0x804c2b8);
    if (al == 0xa) {
        goto label_10;
    }
    if (al == 9) {
        goto label_11;
    }
    if ((ah & 4) == 0) {
        goto label_5;
    }
    if (al >= 0x80) {
        al = 0x4d;
        fcn_08048202 ();
        al = 0x2d;
        fcn_08048202 ();
        al &= 0x7f;
    }
    if (al < 0x20) {
        goto label_12;
    }
    do {
label_5:
        eax = fcn_08048202 ();
        goto label_4;
label_11:
    } while ((ah & 1) == 0);
label_12:
    al = 0x5e;
    fcn_08048202 ();
    al += 0x40;
    goto label_5;
label_10:
    if ((ah & 8) != 0) {
        if (*(0x804c2ba) != 0xa) {
            goto label_13;
        }
        if (*(0x804c2bb) != 0xa) {
            goto label_13;
        }
        goto label_4;
    }
label_13:
    if ((ah & 2) != 0) {
        bl = *(0x804c2ba);
        al = 0x24;
        fcn_08048202 ();
        *(0x804c2ba) = bl;
        al = 0xa;
    }
    if ((ah & 0x20) != 0) {
        if (*(0x804c2ba) != al) {
            goto label_14;
        }
        *(0x804c2b9)++;
    }
label_14:
    fcn_08048202 ();
    *(0x804c2b9)--;
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cat/ia32_elf/subject.exe @ 0x80481e2 */
#include <stdint.h>
 
int32_t fcn_080481e2 (void) {
    do {
        esi = ecx;
        *(0x804c2ac) = eax;
        *(0x804c2ac)--;
        if (*(0x804c2ac) >= 0) {
            al = *(esi);
            esi++;
            return;
        }
        edx = 0;
        dh = 0x20;
        eax = 3;
        eax = sys_read (0xeb, 0x80482ac, edx);
        eax |= eax;
    } while (eax > 0);
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cat/ia32_elf/subject.exe @ 0x8048202 */
#include <stdint.h>
 
void fcn_08048202 (void) {
label_0:
    if ((ah & 0x10) == 0) {
        goto label_1;
    }
    if ((*(0x804c2b9) & 0xff) != 0) {
        goto label_1;
    }
    ah = *(0x804c2ba);
    *(0x804c2b9)++;
    eax = *(0x804c2b4);
    eax++;
    *(0x804c2b4) = eax;
    ebx = 0xa;
    edi = 0;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl += 0x30;
        edi++;
        eax |= eax;
    } while (eax != 0);
    ebx = 6;
    ebx -= edi;
    if (ebx <= 0) {
        goto label_2;
    }
    do {
        al = 0x20;
        fcn_08048202 ();
        goto label_0;
        ebx--;
    } while (ebx != 0);
    do {
label_2:
        fcn_08048202 ();
        goto label_0;
        edi--;
    } while (edi != 0);
    al = 0x20;
    fcn_08048202 ();
    goto label_0;
    al = 0x20;
    fcn_08048202 ();
    goto label_0;
    *(0x804c2ba) = ah;
label_1:
    edi = *(0x804c2b0);
    edi += 0x804a2ac;
    *(es:edi) = al;
    es:edi++;
    *(0x804c2b0)++;
    tmp_0 = 0x804c2ba;
    0x804c2ba = al;
    al = tmp_0;
    *(0x804c2bb) = al;
    if (edi >= 0x804c2ac) {
        edx = 0;
        dh = 0x20;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804a2ac, edx);
        eax = 0;
        *(0x804c2b0) = eax;
    }
    edi = 4;
}

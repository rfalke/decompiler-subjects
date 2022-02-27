/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/du/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
uint32_t entry0 (void) {
    do {
        esi |= esi;
        if (esi == 0) {
            goto label_2;
        }
        al = *(esi);
        esi++;
        if (al != 0x2d) {
            goto label_3;
        }
label_0:
        al = *(esi);
        esi++;
        if (al == 0x61) {
            goto label_4;
        }
        if (al == 0x73) {
            goto label_5;
        }
        if (al == 0x74) {
            goto label_6;
        }
        if (al == 0x6b) {
            goto label_7;
        }
        if (al == 0x64) {
            goto label_8;
        }
        if (al == 0x2d) {
            goto label_1;
        }
    } while (al == 0);
    goto label_0;
label_4:
    *(0x80482e6)++;
    goto label_0;
label_5:
    *(0x80482e7)++;
    goto label_0;
label_6:
    *(0x80482e5)++;
    goto label_0;
label_7:
    *(0x80482e8)++;
    goto label_0;
label_8:
    *(0x80482e9)++;
    goto label_0;
    do {
label_2:
        if (*(0x80482e5) != 0) {
            eax = fcn_0804829f ();
            edx = 0x804833b;
            tmp_0 = eax;
            eax = ebp;
            ebp = tmp_0;
            fcn_0804829f ();
            edx -= ecx;
            edx++;
            ebx = 1;
            eax = 4;
            eax = sys_write (0x1, ecx, 0xa);
        }
        ebx = 0;
        eax = 1;
        eax = sys_exit (ebx);
label_3:
        esi--;
        ebp = 0;
label_1:
        esi |= esi;
    } while (esi == 0);
    edi = 0x804833c;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    edi--;
    eax = fcn_08048102 ();
    if (edi < 0) {
        goto label_1;
    }
    ebp += eax;
    if (*(0x80482e5) != 0) {
        goto label_1;
    }
    fcn_0804829f ();
    fcn_080482c1 ();
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/du/ia32_elf/subject.exe @ 0x804829f */
#include <stdint.h>
 
uint32_t fcn_0804829f (void) {
    edi = 0x804833b;
    __asm ("std");
    ebx = 0xa;
    al = 9;
    *(es:edi) = al;
    es:edi++;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        tmp_0 = eax;
        eax = edx;
        edx = tmp_0;
        al += 0x30;
        *(es:edi) = al;
        es:edi++;
        tmp_1 = eax;
        eax = edx;
        edx = tmp_1;
        eax |= eax;
    } while (eax != 0);
    edi++;
    ecx = edi;
    edi = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/du/ia32_elf/subject.exe @ 0x8048102 */
#include <stdint.h>
 
void fcn_08048102 (void) {
label_0:
    ecx = 0x80482ed;
    ebx = 0x804833c;
    eax = 0x6b;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax |= eax;
    if (eax < 0) {
        goto label_3;
    }
    if ((*(0x80482e9) & 1) != 0) {
        eax = *(0x8048301);
        eax += 0x1ff;
        edx = 0;
        ebx = 0x200;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        if (eax == 0) {
            goto label_4;
        }
    }
    eax = *(0x8048309);
    ebx = 0x200;
    edx:eax = eax * ebx;
    ebx = *(0x8048305);
    ebx >>= 2;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
label_4:
    if (*(0x80482e8) != 0) {
        eax |= eax;
        if (eax == 0) {
            goto label_5;
        }
        ebx = 0x800;
        if ((*(0x80482e9) & 1) == 0) {
            ebx = *(0x8048305);
        }
        edx:eax = eax * ebx;
        ebx = 0x1000;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        edx |= edx;
        if (edx == 0) {
            goto label_5;
        }
        eax++;
    }
label_5:
    if (*(0x80482e7) >= 2) {
        goto label_6;
    }
    ebx = *(0x80482f5);
    ebx &= 0xf000;
    if (ebx != 0x4000) {
        goto label_6;
    }
    ecx = 0;
    eax = 5;
    eax = sys_open (0x804833c, ecx, edx);
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    eax = ebp;
    ebx |= ebx;
    if (ebx < 0) {
        goto label_7;
    }
    *(edi) = 0x2f;
    edi++;
    edx = 0;
    dh = 0x20;
    eax = fcn_0804825f ();
label_2:
    edx = 0;
    dh = 0x20;
    eax = 0;
    al = 0x8d;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax |= eax;
    if (eax < 0) {
        goto label_8;
    }
    if (eax == 0) {
        goto label_8;
    }
label_1:
    esi = ecx + 0xa;
    if (*(esi) == 0) {
        goto label_9;
    }
    if (*(esi) == 0x2e) {
        goto label_9;
    }
    if (*(esi) != 0x2e2e) {
        goto label_10;
    }
    if (*((esi + 2)) == 0) {
        goto label_9;
    }
    do {
label_10:
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    edi--;
    eax = fcn_08048102 ();
    goto label_0;
    if (edi >= 0) {
        ebp += eax;
        if (*(0x80482e5) != 0) {
            goto label_9;
        }
        if (*(0x80482e6) == 0) {
            eax |= eax;
            if (eax < 0) {
                goto label_9;
            }
            if (ebx != 0x4000) {
                goto label_9;
            }
        }
        fcn_0804829f ();
        fcn_080482c1 ();
    }
label_9:
    edx = *((ecx + 8));
    edx |= edx;
    if (edx == 0) {
        goto label_11;
    }
    ecx += edx;
    eax -= edx;
    if (eax >= 0) {
        goto label_1;
    }
label_11:
    goto label_2;
label_8:
    eax = 6;
    eax = sys_close (ebx);
    ecx = 6;
    eax = fcn_08048298 ();
    *(edi) = 0;
    eax += ebp;
label_7:
label_6:
    ecx -= ecx;
label_3:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/du/ia32_elf/subject.exe @ 0x80482c1 */
#include <stdint.h>
 
int32_t fcn_080482c1 (void) {
    edi = ecx;
    edx = 0;
    eax = edx;
    do {
        edx++;
        __asm ("scasb al, byte es:[edi]");
    } while (edx != 0);
    edi--;
    *(edi) = 0xa;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, edx);
    *(edi) = 0;
    edi = 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/du/ia32_elf/subject.exe @ 0x804825f */
#include <stdint.h>
 
int32_t fcn_0804825f (void) {
    ecx = *(0x80482dd);
    ecx += edx;
    if (ecx > *(0x80482e1)) {
        eax = 0x2d;
        eax = sys_brk (0xec);
        eax |= eax;
        if (eax < 0) {
            goto label_0;
        }
        ebx = 0x2d;
        *(0x80482e1) = ecx;
    }
    *(0x80482dd) = ecx;
    *((ecx - 4)) = ecx;
    ecx -= edx;
    *(ecx) = ecx;
    return eax;
label_0:
    ebx = 1;
    eax = 1;
    eax = sys_exit (0x1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/du/ia32_elf/subject.exe @ 0x8048298 */
#include <stdint.h>
 
void fcn_08048298 (void) {
    *(0x80482dd) = ecx;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test/ia32_elf/subject.exe @ 0x8048082 */
#include <stdint.h>
 
int32_t entry0 (void) {
label_1:
    ebx = 2;
    eax = 1;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
label_0:
    ebx = 3;
    eax = 1;
    eax = sys_exit (0x3);
label_2:
    eax = 0;
    edx = 0;
    do {
        al = *(esi);
        esi++;
    } while (al <= 0x21);
    do {
        if (al <= 0x2f) {
            goto label_3;
        }
        if (al > 0x3a) {
            goto label_3;
        }
        al -= 0x30;
        edx += eax;
        al = *(esi);
        esi++;
        if (al <= 0x2f) {
            goto label_3;
        }
        if (al > 0x3a) {
            goto label_3;
        }
        edx *= 0xa;
    } while (1);
label_3:
    eax = edx;
    return eax;
    ecx = 1;
    if (ecx == 1) {
        goto label_4;
    }
    ebp = 0;
    edi = 1;
    edi = 1;
    if (*(edi) == 0x2d) {
        goto label_5;
    }
    if (*(edi) == 0x21) {
        goto label_0;
    }
    esi = 1;
    esi |= esi;
    if (esi == 0) {
        goto label_1;
    }
    if (*(esi) == 0x3d) {
        goto label_6;
    }
    if (*(esi) == 0x3d21) {
        goto label_7;
    }
    al = *(esi);
    esi++;
    if (al != 0x2d) {
        goto label_0;
    }
    ax = *(esi);
    esi += 2;
    if (*(esi) != 0) {
        goto label_1;
    }
    if (ax == 0x7165) {
        goto label_6;
    }
    if (ax == 0x656e) {
        goto label_7;
    }
    if (ax != 0x7467) {
        if (ax != 0x6567) {
            if (ax == 0x746c) {
                goto label_8;
            }
            if (ax == 0x656c) {
                goto label_9;
            }
            goto label_1;
        }
    }
    edx = 0;
    esi = 1;
    eax = void (*0x804805c)() ();
    goto label_2;
    esi = edi;
    eax = void (*0x804805c)() ();
    goto label_2;
    if (ebp != 2) {
        if (eax > ebx) {
            goto label_10;
        }
        goto label_4;
    }
    if (eax >= ebx) {
        goto label_10;
    }
    goto label_4;
label_9:
label_8:
    edx = 0;
    eax = void (*0x804805c)() ();
    goto label_2;
    esi = edi;
    eax = void (*0x804805c)() ();
    goto label_2;
    if (ebp != 2) {
        if (eax < ebx) {
            goto label_10;
        }
        goto label_4;
    }
    if (eax <= ebx) {
        goto label_10;
    }
    goto label_4;
label_5:
    bl = *((edi + 1));
    edx |= edx;
    if (edx == 0) {
        goto label_4;
    }
    if (bl == 0x7a) {
        goto label_11;
    }
    if (bl == 0x6e) {
        goto label_12;
    }
    if (bl == 0x74) {
        goto label_13;
    }
    eax = 0x6b;
    eax = sys_newlstat (0xed, 0x804829b);
    eax |= eax;
    if (eax < 0) {
        goto label_4;
    }
    bl = *((edi + 1));
    if (bl == 0x73) {
        goto label_14;
    }
    if (bl == 0x72) {
        goto label_15;
    }
    if (bl == 0x77) {
        goto label_16;
    }
    esi = 0x804826d;
    do {
        al = *(esi);
        esi++;
        if (al == bl) {
            goto label_17;
        }
        esi += 4;
        al |= al;
    } while (al != 0);
    goto label_1;
label_17:
    eax = *(esi);
    esi += 4;
    ebx = *(0x80482a3);
    ebx &= eax;
    if (eax != ebx) {
        goto label_4;
label_13:
        esi = edx;
        eax = void (*0x804805c)() ();
        goto label_2;
        eax = 0x36;
        eax = sys_ioctl (0xea, 0x5401, 0x80482db);
        eax |= eax;
        if (eax < 0) {
            goto label_4;
        }
        goto label_10;
label_14:
        if (*(0x80482af) == 0) {
            goto label_10;
        }
        goto label_4;
label_16:
        ecx = 1;
        goto label_18;
label_15:
label_18:
        eax = 5;
        eax = sys_open (0xed, 0x0, edx);
        eax |= eax;
        if (eax < 0) {
            goto label_4;
        }
        goto label_10;
label_12:
        ebp |= 1;
label_11:
        eax = 0;
        ebp |= eax;
        if (ebp == 0) {
            goto label_10;
        }
        goto label_4;
label_7:
        ebp |= 1;
label_6:
        eax = 0;
        ecx = 0;
        ecx--;
        esi = 5;
        __asm ("repne scasb al, byte es:[edi]");
        ecx = ~ecx;
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
        if (*((edi - 1)) == 0) {
            if (*((esi - 1)) != 0) {
                goto label_19;
            }
            eax++;
        }
label_19:
        eax ^= ebp;
        if (eax == 0) {
            goto label_4;
        }
    }
label_10:
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
label_4:
    ebx = 1;
    eax = 1;
    eax = sys_exit (0x1);
    *(edx) += ah;
    __asm ("pushal");
    *(eax) += al;
    __asm ("arpl word [eax], ax");
    *(eax) &= al;
    *((eax + eax + 0x40)) += ah;
    *(eax) += al;
    *(gs:eax) += al;
    *(eax) += al;
    *((eax + 0x670000)) += al;
    al += 0;
    *(eax) += dh;
    *(eax) += al;
    *(ebp) += dh;
    *(eax) |= al;
    *((eax + 0x40)) += bh;
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
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/finger/ia32_elf/subject.exe @ 0x80480b0 */
#include <stdint.h>
 
uint32_t entry0 (int32_t arg_3c10743ah) {
    eax = fcn_0804804c ();
    ecx--;
    if (ecx != 0) {
        goto label_6;
    }
    eax = 0;
    ecx--;
    __asm ("repne scasb al, byte es:[edi]");
    if (*((edi - 2)) == 0x64) {
        goto label_7;
    }
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80485bf, 0x3b);
    do {
label_0:
        eax = 3;
        eax = sys_read (0x804865e, 0x80486aa, 0x180);
        eax |= eax;
        if (eax == 0) {
            goto label_8;
        }
    } while (*(0x80486aa) != 7);
    edi = 0x804882a;
    esi = 0x80486d6;
    ecx = 0xb;
    al = *(esi);
    esi++;
    do {
        *(es:edi) = al;
        es:edi++;
        ecx--;
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    al = 0x20;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    ecx = -ecx;
    ecx += 0xb;
    fcn_0804851a ();
    ecx -= 0x16;
    ecx = -ecx;
    al = 0x20;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    esi = 0x80486b2;
    ecx = 8;
    al = *(esi);
    esi++;
    do {
        *(es:edi) = al;
        es:edi++;
        ecx--;
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    al = 0x20;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    eax = 0x6a;
    eax = sys_newstat (0x80486b2, 0x804866a);
    eax |= eax;
    if (eax < 0) {
        goto label_9;
    }
    eax = *(0x804865a);
    eax -= *(0x804868a);
    if (eax <= 0x3c) {
        goto label_10;
    }
    edx = 0;
    ebx = 0x15180;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    eax |= eax;
    if (eax == 0) {
        goto label_11;
    }
    eax = void (*0x80484fe)() ();
    do {
        goto label_12;
    } while (ecx != 0);
label_11:
    tmp_0 = eax;
    eax = edx;
    edx = tmp_0;
    *(edi) = 0x20202020;
label_12:
    edi += 3;
    ebx = 0xe10;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    eax |= eax;
    if (eax != 0) {
        eax = void (*0x80484fe)() ();
    } else {
        tmp_1 = eax;
        eax = edx;
        edx = tmp_1;
        *(edi) = 0x20202020;
    }
    edi += 3;
    ebx = 0x3c;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    al = void (*0x80484fe)() ();
    edi += 2;
label_1:
    esi = 0x80486f6;
    al = *(esi);
    esi++;
    al |= al;
    if (al == 0) {
        goto label_13;
    }
    *(edi) = 0x20202020;
    *((edi + 4)) = 0x20202020;
    edi += 4;
    do {
        *(es:edi) = al;
        es:edi++;
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
label_13:
    *(edi) = 0xa;
    *((edi + 1)) = 0;
label_9:
    edi = 0x804882a;
    eax = 0;
    ecx = 0x50;
    __asm ("repne scasb al, byte es:[edi]");
    ecx -= 0x50;
    ecx = ~ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804882a, 0xec);
    goto label_0;
label_10:
    *(edi) = 0x20202020;
    *((edi + 4)) = 0x20202020;
    *((edi + 6)) = 0x2020;
    *((edi + 7)) = 0x2d;
    edi += 8;
    goto label_1;
label_7:
    ebx = 0x11;
    eax = 0x30;
    eax = sys_signal (0x11, 0x804822f);
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (0x1, 0xe);
    *(0x8048656) = eax;
    edi = esp;
    ebx = 2;
    eax = 0x66;
    eax = sys_socketcall (0x2, 0xe);
    eax |= eax;
    if (eax < 0) {
        goto label_14;
    }
    ebx = 4;
    eax = 0x66;
    eax = sys_socketcall (0x4, 0xe);
    ebx = 1;
    eax = 6;
    eax = sys_close (0x1);
    do {
label_2:
        eax = 0;
        ebx = 5;
        eax = 0x66;
        eax = sys_socketcall (0x5, 0xe);
        eax |= eax;
    } while (eax < 0);
    eax = 2;
    eax = sys_fork (ebx);
    eax |= eax;
    if (eax != 0) {
        goto label_2;
    }
    eax = 2;
    ecx = 1;
    eax = 0x3f;
    eax = sys_dup2 (0xea, 0x1);
    edx = 0;
    dh = 1;
    ebx = 1;
    eax = 3;
    eax = sys_read (0x1, 0xe, edx);
    *((esp + eax)) = 0;
    esi = esp + eax;
    __asm ("std");
    do {
        al = *(esi);
        esi++;
    } while (al <= 0x20);
    *((esi + 2)) = 0;
    esi = esp;
    edx = 0;
    ecx = 0;
    eax = 0x13;
    eax = sys_lseek (0x804865e, ecx, edx);
    goto label_6;
label_14:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048346, 0x1e);
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    ebx++;
    __asm ("outsd dx, dword [esi]");
    if (ebx != 0) {
        goto label_15;
    }
    *((fs:esi + 0x6f)) &= ch;
    if (*((fs:esi + 0x6f)) == 0) {
        goto label_16;
    }
    __asm ("bound ebp, qword [ecx + 0x6e]");
    *((fs:ebx + 0x6f)) &= dh;
    __asm ("arpl word [ebx + 0x65], bp");
    if (*((fs:ebx + 0x6f)) == 0) {
        goto label_17;
    }
    if (*((fs:ebx + 0x6f)) == 0) {
        goto label_18;
    }
    *((eax + 0x6f)) &= dh;
    if (*((eax + 0x6f)) < 0) {
        goto label_19;
    }
    ch |= *((esp + edi + 0x3c10743a));
    do {
label_4:
        al = *(esi);
        esi++;
        if (al == 0x3a) {
            goto label_20;
        }
        if (al == 0x2c) {
            goto label_20;
        }
        if (al == 0xa) {
            goto label_20;
        }
label_16:
        *(eax) |= cl;
        al |= al;
        if (al == 0) {
            ecx--;
            *(es:edi) = al;
            es:edi++;
        } while (1);
    }
    goto label_20;
label_20:
    return eax;
label_6:
    esi = *(0x8048666);
label_17:
    eax ^= 0x8048666;
    ecx = 0;
    eax = 0;
    ecx--;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    ecx--;
    al = fcn_08048538 ();
    esi |= esi;
    if (esi == 0) {
        goto label_21;
    }
    edi = 0x804882a;
    ecx = 7;
    esi = 0x80485ff;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    ecx = 0x21;
label_15:
    al = *(esi);
    esi++;
    do {
        ecx--;
        *(es:edi) = al;
        es:edi++;
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    al = 0x20;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    ecx = 6;
    esi = 0x8048606;
label_18:
    dl |= dh;
    *(es:edi) = *(esi);
    esi++;
    es:edi++;
    ecx = 0x22;
    ecx = 4;
label_19:
    *(eax) += al;
    esi = ebp;
    *((ecx + 0x3a3cacee)) += cl;
    do {
label_3:
        al = *(esi);
        esi++;
    } while (al != 0x3a);
    ecx--;
    if (ecx != 0) {
        goto label_3;
    }
    void (*0x8048364)(uint32_t) (esi);
    goto label_4;
    *((edi + 1)) = 0xa;
    edx = 0x50;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804882a, 0x50);
    edi = 0x804882a;
    ecx = 0xb;
    esi = 0x804860c;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    ecx = 0x1d;
    esi = 4;
    do {
        al = *(esi);
        esi++;
    } while (al != 0x3a);
    void (*0x8048364)(uint32_t) (esi);
    goto label_4;
    al = 0x20;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    ecx = 7;
    esi = 0x8048617;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    ecx = 0x21;
    do {
        al = *(esi);
        esi++;
    } while (al != 0x3a);
    void (*0x8048364)() ();
    goto label_4;
    *(edi) = 0xa;
    edx = edi + 1;
    edx -= 0x804882a;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804882a, edx);
    do {
label_5:
        eax = 3;
        eax = sys_read (0x804865e, 0x80486aa, 0x180);
        eax |= eax;
        if (eax == 0) {
            goto label_8;
        }
    } while (*(0x80486aa) != 7);
    esi = 0x80486d6;
    edi = 3;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    if (*(esi) != 0) {
        goto label_5;
    }
    edi = 0x804882a;
    ecx = 0xd;
    esi = 0x8048632;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    ecx = 0x43;
    esi = 0x80486b2;
    al = *(esi);
    esi++;
    do {
        ecx--;
        *(es:edi) = al;
        es:edi++;
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    ecx -= 0x51;
    ecx = -ecx;
    *(edi) = 0xa;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804882a, 0xec);
    goto label_5;
label_21:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804863f, 0x17);
    if (*(0x8048656) != 0) {
        ebx = 0xd;
        eax = 0x66;
        eax = sys_socketcall (0xd, 0xe);
    }
    ebx = 1;
    eax = 1;
    eax = sys_exit (0x1);
    edx = 0;
    ebx = 0xa;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    dl += 0x30;
    al += 0x30;
    *(edi) = al;
    *((edi + 1)) = dl;
    *((edi + 2)) = 0x3a;
    edx = 0;
    eax = edx;
    return eax;
label_8:
    if (*(0x8048656) != 0) {
        ebx = 0xd;
        eax = 0x66;
        eax = sys_socketcall (0xd, 0xe);
    }
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    __asm ("das");
    if (*(0x8048656) <= 0) {
        goto label_22;
    }
    if (*(0x8048656) < 0) {
        goto label_23;
    }
    if (*(0x8048656) < 0) {
        void (*0x8048621)() ();
    }
    __asm ("outsb dx, byte [esi]");
    __asm ("das");
    if (*(0x8048656) != 0) {
        goto label_24;
    }
    __asm ("insd dword es:[edi], dx");
    if (*(0x8048656) !overflow 0) {
    }
    __asm ("das");
    if (*(0x8048656) != 0) {
        __asm ("das");
        if (*(0x8048656) overflow 0) {
            goto label_25;
        }
        if (*(0x8048656) >= 0) {
            goto label_26;
        }
        if (*(0x8048656) > 0) {
            goto label_27;
        }
        *((edi + ebp*2 + 0x67)) += cl;
        ebp = *((esi + 0x20)) * 0x20202020;
        *((esi + 0x61)) &= cl;
        __asm ("insd dword es:[edi], dx");
        *(gs:eax) &= ah;
        *(eax) &= ah;
        *(eax) &= ah;
        *(eax) &= ah;
        *(eax) &= ah;
        *(eax) &= ah;
label_23:
        *(eax) &= ah;
        *(eax) &= ah;
        *(eax) &= ah;
        *(eax) &= ah;
        *(eax) &= ah;
        *(eax) &= ah;
        *(eax) &= ah;
        *((ecx + 0x64)) &= cl;
        __asm ("insb byte es:[edi], dx");
        *(gs:eax) &= ah;
        *(eax) &= ah;
        __asm ("das");
        if (*(eax) > 0) {
        }
        __asm ("outsd dx, dword [esi]");
        ebp = *((bp + 0x3a)) * 0x6d614e20;
label_22:
        esi = *((edx + 0x65)) * 0x726f7463;
        if (ah >= *(gs:eax)) {
            goto label_28;
        }
        *((ebx + 0x68)) &= dl;
        __asm ("insb byte es:[edi], dx");
    }
    __asm ("insb byte es:[edi], dx");
label_25:
    __asm ("insb byte es:[edi], dx");
    edi--;
    sp = *((ebx + 0x65)) * 0x203a;
label_27:
    __asm ("arpl word [ebp + 0x3a], sp");
label_24:
    esp = *((ebx + 0x65)) * 0x6f48203a;
    eax--;
    __asm ("outsd dx, dword [esi]");
    __asm ("insd dword es:[edi], dx");
    *((gs:eax + 0x68)) &= dl;
    __asm ("outsd dx, dword [esi]");
    __asm ("outsb dx, byte [esi]");
label_26:
    __asm ("outsd dx, dword [esi]");
    *((fs:bx + di + 0x6e)) &= ch;
    *((ecx + 0x74)) &= ah;
    *((eax + ebp*2 + 0x69)) &= dl;
    if (*((eax + ebp*2 + 0x69)) < 0) {
        if (*((eax + ebp*2 + 0x69)) != 0) {
            goto label_29;
        }
        if (*((eax + ebp*2 + 0x69)) < 0) {
            goto label_30;
        }
        __asm ("outsd dx, dword fs:[esi]");
        if (*((eax + ebp*2 + 0x69)) >= 0) {
            goto label_31;
        }
        if (*((eax + ebp*2 + 0x69)) == 0) {
            goto label_32;
        }
        if (*((eax + ebp*2 + 0x69)) < 0) {
label_28:
            goto label_31;
        }
        if (*((eax + ebp*2 + 0x69)) >= 0) {
            goto label_33;
        }
        al |= *(eax);
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
    }
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
label_30:
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
label_32:
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
    do {
        *(eax) += al;
    } while (ecx != 0);
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
label_29:
    *(eax) += al;
    *(eax) += al;
label_31:
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
label_33:
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
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    bh += bh;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/finger/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t fcn_0804804c (void) {
    ecx = 0;
    ebx = 0x80485a5;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    *(0x804865e) = eax;
    eax = 0xc;
    eax = sys_chdir (0x80485fa);
    ecx = 0;
    eax = 5;
    eax = sys_open (0x80485b3, ecx, edx);
    *(0x8048662) = eax;
    eax = 0x6c;
    eax = sys_newfstat (0xea, 0x804866a);
    ebp = 0;
    edi = *(0x8048662);
    esi = 2;
    edx = 1;
    ecx = *(0x804867e);
    ebx = 0;
    eax = 0;
    al = 0xc0;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    *(0x8048666) = eax;
    eax = 0xd;
    eax = sys_time (0x804865a);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/finger/ia32_elf/subject.exe @ 0x804851a */
#include <stdint.h>
 
void fcn_0804851a (void) {
    edi = 0x80486d6;
    esi = *(0x8048666);
    eax = 0;
    fcn_08048538 ();
    esi |= esi;
    if (esi != 0) {
        fcn_08048560 ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/finger/ia32_elf/subject.exe @ 0x8048538 */
#include <stdint.h>
 
int8_t fcn_08048538 (void) {
    do {
        al = *(esi);
        esi++;
        if (al == *(edi)) {
            goto label_1;
        }
label_0:
        al = *(esi);
        esi++;
    } while (al == 0xa);
    al |= al;
    if (al != 0) {
        goto label_0;
    }
    esi = 0;
    ecx = 0;
    return al;
label_1:
    edx = ecx;
    esi--;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    ecx |= ecx;
    if (ecx == 0) {
        if (*(esi) == 0x3a) {
            goto label_2;
        }
    }
    ecx = edx;
    goto label_0;
label_2:
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/finger/ia32_elf/subject.exe @ 0x8048560 */
#include <stdint.h>
 
int8_t fcn_08048560 (int32_t arg_4h) {
    ecx = 4;
label_0:
    al = *(esi);
    esi++;
    al |= al;
    if (al == 0) {
        void (*0x8048584)() ();
    }
    if (al != 0x3a) {
        goto label_0;
    }
    ecx--;
    if (ecx != 0) {
        goto label_0;
    }
    ecx--;
    edi = *((esp + 4));
    do {
        ecx++;
        al = *(esi);
        esi++;
        if (al == 0x3a) {
            goto label_1;
        }
        if (al == 0x2c) {
            goto label_1;
        }
        *(es:edi) = al;
        es:edi++;
    } while (1);
label_1:
    return al;
}

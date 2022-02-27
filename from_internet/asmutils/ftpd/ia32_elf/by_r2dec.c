/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x804822f */
#include <stdint.h>
 
int32_t entry0 (void) {
    if (ebp < 3) {
        void (*0x80482be)() ();
    }
    ecx = 1;
    ebx = 0x11;
    eax = 0x30;
    eax = sys_signal (0x11, 0x1);
    eax = 0;
    ebx = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_0;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_0:
    tmp_0 = bl;
    bl = bh;
    bh = tmp_0;
    ebx <<= 0x10;
    bl = 2;
    edi = 0x8048f78;
    *(edi) = ebx;
    *((edi + 4)) = 0;
    ebx = 1;
    eax = 6;
    eax = sys_close (0x1);
    ebx = 0;
    eax = 6;
    eax = sys_close (ebx);
    ebx = 2;
    eax = 6;
    eax = sys_close (0x2);
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (0x1, 0xe);
    if (eax < 0) {
        void (*0x80482be)() ();
    }
    ebx = 0xe;
    eax = 0x66;
    eax = sys_socketcall (0xe, 0xe);
    eax |= eax;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x80482c6)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048ca2 */
#include <stdint.h>
 
int32_t fcn_08048ca2 (void) {
    ecx = 0;
    ebx = *(0x8048fa8);
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax < 0) {
        void (*0x80482be)() ();
    }
    eax = 0x6c;
    eax = sys_newfstat (0xea, 0x8048d20);
    ebp = 0;
    edi = ebx;
    esi = 2;
    edx = 3;
    ecx = *(0x8048d34);
    ebx = 0;
    eax = 0;
    al = 0xc0;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax < 0) {
        void (*0x80482be)() ();
    }
    *(0x8048d60) = eax;
    ebx = 3;
    eax = 6;
    eax = sys_close (ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048b8e */
#include <stdint.h>
 
int32_t fcn_08048b8e (void) {
    __asm ("pushal");
    eax = 0;
    esi = 0x804805f;
    edx = 0x804805f;
    do {
        al = *(esi);
        esi++;
        edx += eax;
        __asm ("loop 0x8048b98");
    } while (1);
    cl = *(esi);
    tmp_0 = edx;
    edx = ecx;
    ecx = tmp_0;
    eax = 4;
    eax = sys_write (0xeb, ecx, edx);
    __asm ("popal");
    *(0x8048d79)--;
    if (*(0x8048d79) != 0) {
        *(0x8048d79)++;
        return eax;
    }
    eax = 4;
    eax = 4;
    return void (*0x8048345)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048345 */
#include <stdint.h>
 
void fcn_08048345 (void) {
    do {
label_0:
        ebx = 0;
        ebx++;
label_1:
        eax = 1;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        ebx = 2;
        eax = 0x66;
        eax = sys_socketcall (0x2, 0xe);
        eax |= eax;
    } while (eax != 0);
    ebx = 4;
    eax = 0x66;
    eax = sys_socketcall (0x4, 0xe);
    eax |= eax;
    if (eax != 0) {
        goto label_0;
    }
    fcn_08048ca2 ();
    eax = 2;
    eax = sys_fork (ebx);
    eax |= eax;
    if (eax == 0) {
        goto label_2;
    }
label_4:
    ebx = 0;
    goto label_1;
    do {
label_2:
        *(0x8048e79) = 0x10;
        ebx = 5;
        eax = 0x66;
        eax = sys_socketcall (0x5, 0xe);
    } while (eax < 0);
    edi = eax;
    eax = 2;
    eax = sys_fork (ebx);
    eax |= eax;
    if (eax != 0) {
        goto label_2;
    }
    edi = 0;
    ecx = 4;
    fcn_08048b8e ();
    do {
label_13:
        edx = 0xea60;
        eax = fcn_08048358 ();
        eax |= eax;
    } while (eax == 0);
    if (*(0x8048d68) == 0) {
        if (eax == 0x52455355) {
            goto label_8;
        }
        if (eax == 0x53534150) {
            goto label_9;
        }
        if (eax == 0x54495551) {
            goto label_14;
        }
        if (eax == 0x54535953) {
            goto label_10;
        }
        if (eax == 0x504f4f4e) {
            goto label_11;
        }
        ecx = 0x14;
        eax = fcn_08048b88 ();
    }
    edi = 0x8048fac;
    *(edi) = 1;
    if (eax != 0x52544552) {
        *(edi)++;
        if (eax != 0x524f5453) {
            goto label_15;
        }
        if ((*(0x8048d69) & 1) == 0) {
            goto label_16;
        }
    }
    fcn_08048b5d ();
    eax = 2;
    if ((*(0x8048fac) & 2) != 0) {
        eax |= 0x240;
    }
    eax = 5;
    eax = sys_open (0xe, 0xea, 0x1b4);
    if (eax < 0) {
        goto label_16;
    }
    esi = eax;
    ecx = 1;
    fcn_08048b8e ();
    if ((*(0x8048fac) & 2) != 0) {
        tmp_0 = edi;
        edi = esi;
        esi = tmp_0;
    } else {
        eax = *(0x8048d75);
        eax |= eax;
        if (eax == 0) {
            goto label_3;
        }
        tmp_1 = eax;
        eax = ecx;
        ecx = tmp_1;
        edx = 0;
        eax = 0x13;
        eax = sys_lseek (0xe, ecx, edx);
    }
    do {
label_3:
        edx = 0;
        eax = fcn_08048358 ();
        if (eax != 0x524f4241) {
        }
        if (eax == 0x4f4241f2) {
            goto label_17;
        }
        edx = 0;
        dh = 0x20;
        eax = 3;
        eax = sys_read (0xe, 0x8048fad, edx);
        if (eax == 0) {
            goto label_18;
        }
        if (*(0x8048d18) != 0x41) {
            goto label_19;
        }
        eax = fcn_08048b0c ();
    } while (1);
label_19:
    eax = 4;
    eax = sys_write (0xed, 0x8048fad, 0xea);
    goto label_3;
    do {
label_18:
        eax = 6;
        eax = sys_close (0xe);
        eax = 6;
        eax = sys_close (0xed);
        edi = 0;
        ecx = 6;
        fcn_08048b88 ();
label_17:
        ecx = 0x10;
        fcn_08048b8e ();
    } while (1);
label_16:
    eax = 6;
    eax = sys_close (0xed);
    edi = 0;
    ecx = 0xc;
    eax = fcn_08048b88 ();
label_15:
    *(0x8048d75) = 0;
    if (eax == 0x54534552) {
        esi = 0x804afad;
        esi += 5;
        eax = fcn_08048af6 ();
        *(0x8048d75) = eax;
        ecx = 0xf;
        ax = fcn_08048b88 ();
    }
    *(0x8048fac) = 3;
    if (ax != 0x494c) {
        goto label_20;
    }
    edi |= edi;
    if (edi == 0) {
        edx = 0xe678;
        fcn_08048358 ();
    }
    ecx = 0x8048d20;
    eax = 0x6a;
    eax = sys_newstat (0x8048050, ecx);
    if (eax < 0) {
        goto label_21;
    }
    ecx = 1;
    fcn_08048b8e ();
    eax = 2;
    eax = sys_fork (ebx);
    eax |= eax;
    if (eax != 0) {
        goto label_22;
    }
    eax = 0x2a;
    eax = sys_pipe (0x8048fa0);
    eax = 2;
    eax = sys_fork (ebx);
    eax |= eax;
    if (eax == 0) {
        goto label_23;
    }
    eax = 6;
    eax = sys_close (0x8048fa4);
    do {
        edx = 0;
        dh = 0x20;
        eax = 3;
        eax = sys_read (0x8048fa0, 0x8048fad, edx);
        if (eax == 0) {
            goto label_24;
        }
        edx = 0;
        eax = fcn_08048358 ();
        if (eax != 0x524f4241) {
        }
        if (eax == 0x4f4241f2) {
            goto label_25;
        }
        fcn_08048b0c ();
    } while (1);
label_24:
    goto label_4;
label_25:
    ecx = 0x10;
    fcn_08048b8e ();
    goto label_0;
label_23:
    eax = 6;
    eax = sys_close (0xed);
    eax = 6;
    eax = sys_close (0x8048fa0);
    ecx = 1;
    eax = 0x3f;
    eax = sys_dup2 (0x8048fa4, 0x1);
    edi = 0x8048f88;
    esi = 0x8048050;
    *(edi) = esi;
    esi = 0x8048058;
    *((edi + 4)) = esi;
    ecx = 8;
    eax = 0;
    al = *(esi);
    ecx--;
    esi++;
    if (*(0x804afb1) != 0xd) {
        fcn_08048b5d ();
        if (*(esi) == 0x2d) {
            esi += 4;
        }
        *(0x8048f90) = esi;
    }
    edx = 0;
    eax = 0xb;
    eax = sys_execve (0x8048050, 0x8048f88, edx, esi);
    ebx = 0;
    bl = 0xff;
    eax = 1;
    eax = sys_exit (ebx);
    do {
label_22:
        esi = 0;
        edx = 2;
        eax = 0x72;
        eax = sys_wait4 (0xffffffff, 0x8048d6d, 0x2, esi);
    } while (eax < 0);
    eax = 6;
    eax = sys_close (0xed);
    edi = 0;
    ecx = 8;
    ax = fcn_08048b88 ();
label_20:
    if (ax != 0x4f50) {
        goto label_26;
    }
    esi = 0x804afad;
    esi += 5;
    ebx = 0;
    ecx = 4;
    do {
        ebx <<= 8;
        fcn_08048ab6 ();
        __asm ("loop 0x80486f2");
    } while (1);
    bx = ebx;
    tmp_2 = bl;
    bl = bh;
    bh = tmp_2;
    ebx <<= 0x10;
    bx = ebx;
    tmp_3 = bl;
    bl = bh;
    bh = tmp_3;
    edi = 0x8048f80;
    *((edi + 4)) = ebx;
    ebx = 0;
    fcn_08048ab6 ();
    ebx <<= 8;
    fcn_08048ab6 ();
    tmp_4 = bl;
    bl = bh;
    bh = tmp_4;
    ebx <<= 0x10;
    bl = 2;
    *(edi) = ebx;
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (0x1, 0xe);
    if (eax >= 0) {
        ebx = 3;
        eax = 0x66;
        eax = sys_socketcall (0x3, 0xe);
        if (eax < 0) {
            goto label_27;
        }
        ecx = 2;
        fcn_08048b88 ();
    }
label_27:
    ecx = 0xa;
    fcn_08048b8e ();
    ebx = 0xd;
    eax = 0x66;
    eax = sys_socketcall (0xd, 0xe);
    eax = 6;
    eax = sys_close (0xeb);
    goto label_0;
label_6:
    eax = 6;
    eax = 6;
    do {
label_5:
        ecx = 0x1f6;
        eax = fcn_08048b88 ();
label_26:
        if (eax != 0x56534150) {
            goto label_28;
        }
        ebx = 0;
        bl = 2;
        edi = 0x8048f78;
        *(edi) = ebx;
        *((edi + 4)) = 0;
        ebx = 1;
        eax = 0x66;
        eax = sys_socketcall (0x1, 0xe);
    } while (eax < 0);
    esi = eax;
    ebx = 0xe;
    eax = 0x66;
    eax = sys_socketcall (0xe, 0xe);
    if (eax < 0) {
        goto label_5;
    }
    ebx = 2;
    eax = 0x66;
    eax = sys_socketcall (0x2, 0xe);
    if (eax < 0) {
        goto label_5;
    }
    edx = esp;
    ebx = 6;
    eax = 0x66;
    eax = sys_socketcall (0x6, 0xe);
    if (eax < 0) {
        goto label_6;
    }
    ebx = 4;
    eax = 0x66;
    eax = sys_socketcall (0x4, 0xe);
    if (eax < 0) {
        goto label_6;
    }
    *(0x8048d71) = esi;
    ebx = 6;
    eax = 0x66;
    eax = sys_socketcall (0x6, 0xe);
    if (eax < 0) {
        goto label_6;
    }
    esi = 0x8048f7c;
    edi = 0x8048fad;
    ecx = 0x11;
    eax = fcn_08048b8e ();
    ecx = 0;
    cl = 4;
    do {
        eax = 0;
        al = *(esi);
        esi++;
        edx = 0;
        fcn_08048acc ();
        al = 0x2c;
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x8048879");
    } while (1);
    eax = 0;
    al = cl;
    edx = 0;
    fcn_08048acc ();
    al = 0x2c;
    *(es:edi) = al;
    es:edi++;
    eax = 0;
    al = ch;
    edx = 0;
    fcn_08048acc ();
    ax = 0xa0d;
    *(es:edi) = ax;
    es:edi += 2;
    ecx = 0x8048fad;
    edx = edi;
    edx -= 0x8048fad;
    ax = fcn_08048b7f ();
label_28:
    edi = 0x8048d18;
    if (ax == 0x5954) {
        goto label_29;
    }
    edi++;
    if (ax == 0x4f4d) {
        goto label_29;
    }
    edi++;
    do {
    } while (ecx != 0);
    if (eax != 0x55525453) {
        goto label_30;
    }
label_29:
    al = *(0x804afb2);
    esi = 0x8048d1b;
    ecx = 4;
    do {
        if (al == *(esi)) {
            goto label_31;
        }
        esi++;
        __asm ("loop 0x80488e5");
    } while (1);
    ecx = 0xb;
    goto label_32;
label_31:
    *(edi) = al;
    ecx = 2;
label_32:
    ax = fcn_08048b88 ();
label_30:
    if (ax != 0x4443) {
        fcn_08048b5d ();
        ebx = esi;
        if (ax == 0x4b4d) {
            goto label_33;
        }
        if (ax == 0x4d52) {
            goto label_34;
        }
        if (ax == 0x4544) {
            goto label_35;
        }
        if (ax == 0x5743) {
            goto label_36;
        }
        if (eax != 0x455a4953) {
            goto label_37;
        }
        ecx = 0x8048d20;
        eax = 0x6a;
        eax = sys_newstat (ebx, ecx);
        if (eax < 0) {
            goto label_21;
        }
        edi = 0x8048fad;
        ecx = 0x12;
        fcn_08048b8e ();
        eax = *(0x8048d34);
        edx = 0;
        fcn_08048acc ();
        ax = 0xa0d;
        *(es:edi) = ax;
        es:edi += 2;
        ecx = 0x8048fad;
        edx = edi;
        edx -= 0x8048fad;
        fcn_08048b7f ();
    }
label_36:
    eax = 0xc;
    eax = sys_chdir (0x804805c);
    goto label_21;
label_33:
    if ((*(0x8048d69) & 2) != 0) {
        eax = 0x27;
        eax = sys_mkdir (ebx, 0x1ff);
        goto label_21;
label_35:
        if ((*(0x8048d69) & 2) != 0) {
            eax = 0xa;
            eax = sys_unlink (ebx);
            goto label_21;
label_34:
            if ((*(0x8048d69) & 2) == 0) {
                goto label_38;
            }
            eax = 0x28;
            eax = sys_rmdir (ebx);
        }
    } else {
label_38:
        goto label_39;
    }
label_21:
    if (eax == 0) {
        ecx = 8;
    } else {
label_39:
        ecx = 0xc;
    }
    do {
label_7:
        fcn_08048b88 ();
label_8:
        fcn_08048b5d ();
        eax = fcn_08048bd4 ();
        tmp_5 = eax;
        eax = ecx;
        ecx = tmp_5;
    } while (1);
label_9:
    fcn_08048b5d ();
    eax = fcn_08048c29 ();
    tmp_6 = eax;
    eax = ecx;
    ecx = tmp_6;
    goto label_7;
label_10:
    ecx = 3;
    goto label_7;
label_11:
    ecx = 2;
    goto label_7;
label_12:
    ecx = 6;
    goto label_7;
label_37:
    if (ax == 0x5355) {
        goto label_8;
    }
    if (eax == 0x53534150) {
        goto label_9;
    }
    if (ax == 0x5953) {
        goto label_10;
    }
    if (ax == 0x4f4e) {
        goto label_11;
    }
    if (ax == 0x5551) {
        goto label_14;
    }
    if (ax == 0x5750) {
        goto label_40;
    }
    if (eax == 0x524f4241) {
        goto label_12;
    }
    if (eax == 0x4f4241f2) {
        goto label_12;
    }
    ecx = 0xb;
    fcn_08048b88 ();
label_14:
    ecx = 5;
    fcn_08048b8e ();
    goto label_4;
label_40:
    ecx = 9;
    eax = fcn_08048b8e ();
    ecx = 0;
    ch = 0x20;
    ebx = 0x8048fad;
    eax = 0;
    al = 0xb7;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    esi = 0x8048fad;
    ecx = 0;
    do {
        al = *(esi);
        esi++;
        ecx++;
    } while (al != 0);
    esi--;
    *(esi) = 0xa0d22;
    ecx++;
    ecx++;
    eax = 4;
    eax = sys_write (0xeb, 0x8048fad, 0xec);
    goto label_13;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048358 */
#include <stdint.h>
 
int32_t fcn_08048358 (void) {
    eax = *(0x8048d71);
    *(0x804b3ad) = ebp;
    *(0x804b3b5) = eax;
    ecx = 0;
    ecx++;
    eax |= eax;
    if (eax != 0) {
        ecx++;
    }
    ax = 3;
    *(0x804b3b1) = ax;
    *(0x804b3b9) = ax;
    ebx = 0x804b3ad;
    eax = 0;
    al = 0xa8;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax |= eax;
    if (eax != 0) {
        ecx--;
        if (ecx != 0) {
            if ((*(0x804b3bb) & 3) != 0) {
                goto label_0;
            }
        }
        if ((*(0x804b3b3) & 3) != 0) {
            goto label_1;
        }
        eax = 0;
    }
    return eax;
label_0:
    *(0x8048e79) = 0x10;
    esi = 0x8048d71;
    ebx = 5;
    eax = 0x66;
    eax = sys_socketcall (0x5, 0xe);
    edi = eax;
    eax = 6;
    eax = sys_close (0xe);
    eax = 0;
    *(esi) = eax;
    return eax;
label_1:
    edx = 0;
    dh = 4;
    eax = 3;
    eax = sys_read (0xeb, 0x804afad, edx);
    eax--;
    if (eax < 0) {
        void (*0x80482be)() ();
    }
    eax = *(0x804afad);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048b88 */
#include <stdint.h>
 
void fcn_08048b88 (void) {
    *(0x8048d79)++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048b5d */
#include <stdint.h>
 
int8_t fcn_08048b5d (void) {
    ecx = 0x400;
    edi = 0x804afad;
    al = 0x20;
    __asm ("repne scasb al, byte es:[edi]");
    al = 0xd;
    __asm ("repne scasb al, byte es:[edi]");
    edi--;
    *(edi) = 0;
    esi = edi;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048b0c */
#include <stdint.h>
 
uint32_t fcn_08048b0c (void) {
    __asm ("pushal");
    edi = 0x8048fad;
    ecx = eax;
label_0:
    al = 0xa;
    esi = edi;
    __asm ("repne scasb al, byte es:[edi]");
    edi -= esi;
    if (*((edi + esi - 1)) == 0xa) {
        goto label_1;
    }
    eax = fcn_08048b78 ();
    do {
        __asm ("popal");
        return eax;
label_1:
        eax = 0;
        eax++;
        ecx = 0xe;
        if (*(0x8048fac) == 2) {
            eax++;
            ecx = 0xd;
        }
        edi -= eax;
        fcn_08048b78 ();
        eax = fcn_08048b8e ();
    } while (ecx == 0);
    edi += eax;
    edi += esi;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048b78 */
#include <stdint.h>
 
void fcn_08048b78 (void) {
    __asm ("pushal");
    ecx = esi;
    edx = edi;
    return void (*0x8048ba1)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048af6 */
#include <stdint.h>
 
int32_t fcn_08048af6 (void) {
    eax = 0;
    ebx = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_0;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_0:
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    esi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048ab6 */
#include <stdint.h>
 
int32_t fcn_08048ab6 (void) {
    do {
        eax = 0;
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_0;
        }
        dh = bh;
        bh = 0;
        bx *= 0xa;
        bh |= dh;
        ebx += eax;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048acc */
#include <stdint.h>
 
void fcn_08048acc (void) {
    do {
        eax |= eax;
        if (eax == 0) {
            edx |= edx;
            if (edx == 0) {
                goto label_0;
            }
            goto label_1;
        }
        edx = 0;
        ebx = 0xa;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        fcn_08048acc ();
    } while (1);
label_0:
    eax = edx;
    eax += 0x30;
    *(es:edi) = al;
    es:edi++;
label_1:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048b7f */
#include <stdint.h>
 
void fcn_08048b7f (void) {
    *(0x8048d79)++;
    __asm ("pushal");
    return void (*0x8048ba1)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048bd4 */
#include <stdint.h>
 
void fcn_08048bd4 (void) {
    tmp_0 = esi;
    esi = edi;
    edi = tmp_0;
    esi = *(0x8048d60);
    do {
        al = fcn_08048bc5 ();
        if (al != 0x3b) {
            edi = 0x8048bd0;
            fcn_08048cf0 ();
            ecx |= ecx;
            if (ecx == 0) {
                goto label_0;
            }
            fcn_08048cf0 ();
            ecx |= ecx;
            if (ecx == 0) {
                goto label_1;
            }
        }
        eax = fcn_08048bbf ();
    } while (1);
label_0:
    eax = 0;
    *(0x8048d64) = eax;
    eax = 0x13;
    return eax;
label_1:
    *(0x8048d64) = esi;
    eax = 0x13;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048c29 */
#include <stdint.h>
 
void fcn_08048c29 (void) {
    *(0x8048d68) = 0;
    tmp_0 = edi;
    edi = esi;
    esi = tmp_0;
    esi = *(0x8048d64);
    esi |= esi;
    if (esi != 0) {
        fcn_08048bc5 ();
        if (*(esi) == 0x2a) {
            goto label_1;
        }
        fcn_08048cf0 ();
        ecx |= ecx;
        if (ecx == 0) {
            goto label_1;
        }
    }
label_0:
    eax = 0x14;
    return eax;
label_1:
    esi++;
    fcn_08048bc5 ();
    eax = fcn_08048af6 ();
    *(0x8048d69) = eax;
    esi++;
    al = fcn_08048bc5 ();
    do {
        al = *(esi);
        esi++;
    } while (al >= 0x21);
    esi--;
    *(esi) = 0;
    eax = 0xc;
    eax = sys_chdir (0xe);
    if (eax < 0) {
        goto label_0;
    }
    eax = 0x3d;
    eax = sys_chroot (0xe);
    if (eax < 0) {
        goto label_0;
    }
    *(0x8048d68) = 1;
    eax = 7;
    edi = 0x3d;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048bc5 */
#include <stdint.h>
 
void fcn_08048bc5 (void) {
    do {
label_0:
        al = *(esi);
        esi++;
    } while (al == 0x20);
    if (al == 9) {
        goto label_0;
    }
    esi--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048cf0 */
#include <stdint.h>
 
void fcn_08048cf0 (void) {
    fcn_08048d0c ();
    edx = ecx;
    edi = esi;
    fcn_08048d0c ();
    if (ecx < edx) {
        ecx = edx;
    }
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048d0c */
#include <stdint.h>
 
void fcn_08048d0c (void) {
    ecx = 0;
    do {
        ecx++;
        edi++;
    } while (edi >= 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ftpd/ia32_elf/subject.exe @ 0x8048bbf */
#include <stdint.h>
 
void fcn_08048bbf (void) {
    do {
        al = *(esi);
        esi++;
    } while (al != 0xa);
}

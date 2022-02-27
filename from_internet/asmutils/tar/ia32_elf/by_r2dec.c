/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    eax = 0x18;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    tmp_0 = eax;
    eax = ecx;
    ecx = tmp_0;
    ebx = 0;
    *(0x804886f) = ebx;
    eax = 0x46;
    eax = sys_setreuid16 (ebx, ecx);
    ebx = 0x46;
    ebx = 0x46;
    ebx = 0x46;
    ebx |= ebx;
    if (ebx != 0) {
        if (*(ebx) == 0x742d) {
            goto label_1;
        }
        if (*(ebx) == 0x782d) {
            goto label_2;
        }
        if (*(ebx) == 0x632d) {
            goto label_3;
        }
    }
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048802, 0x60);
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
label_1:
    ebx = 1;
    fcn_08048205 ();
    fcn_08048194 ();
    fcn_08048227 ();
    ebx = 0;
    goto label_0;
label_2:
    fcn_08048205 ();
    ebx = 0;
    eax = 0x17;
    eax = sys_setuid16 (ebx);
    eax = 0x3d;
    eax = sys_chroot (0x804848f);
    eax = 0x17;
    eax = sys_setuid16 (0x804886f);
    *(0x8048ab3) = esp;
    int_08048233 ();
    fcn_08048227 ();
    do {
label_0:
        eax = 1;
        eax = sys_exit (0xeb);
label_3:
        ebx = 1;
        ebx |= ebx;
    } while (ebx == 0);
    eax = 0;
    eax++;
    if (*(ebx) == 0x2d) {
        goto label_4;
    }
    eax = 5;
    eax = sys_open (ebx, 0x241, 0x1b6);
    eax |= eax;
    if (eax < 0) {
        goto label_0;
    }
label_4:
    *(0x8048867) = eax;
    do {
        esi = 5;
        esi |= esi;
        if (esi == 0) {
            goto label_5;
        }
        edi = 0x8048873;
        fcn_08048522 ();
        fcn_08048529 ();
    } while (1);
label_5:
    fcn_08048514 ();
    edx = 0;
    dh = 2;
    eax = 4;
    eax = sys_write (0x8048867, 0x8048ab7, edx);
    eax = 4;
    eax = sys_write (ebx, ecx, edx);
    fcn_08048227 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x8048205 */
#include <stdint.h>
 
int32_t fcn_08048205 (void) {
    eax = 0;
    if (*(ebx) != 0x2d) {
        ecx = 0;
        eax = 5;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        if (eax >= 0) {
            goto label_0;
        }
        ebx = 0;
        bl = 0xff;
        eax = 1;
        eax = sys_exit (ebx);
    }
label_0:
    *(0x8048867) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x8048194 */
#include <stdint.h>
 
int32_t fcn_08048194 (void) {
    do {
label_0:
        edx = 0;
        dh = 2;
        ecx = 0x8048ab7;
        ebx = *(0x8048867);
        eax = 3;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        eax |= eax;
        if (eax == 0) {
            goto label_2;
        }
    } while (*(0x8048bb8) != 0x61747375);
    fcn_0804816c ();
    edx = 0;
    do {
label_1:
        edx++;
    } while (edx >= 0);
    *((ecx + edx - 1)) = 0xa;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80489b3, edx);
    edi = 0x8048b53;
    if (*(edi) != 0x32) {
        if (*(edi) == 0x31) {
            goto label_3;
        }
        goto label_0;
    }
label_3:
    edx = 5;
    eax = 4;
    eax = sys_write (ebx, 0x8048862, 0x5);
    edx = 0;
    ecx = 0x8048b54;
    *(edi) = 0;
    goto label_1;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x8048227 */
#include <stdint.h>
 
void fcn_08048227 (void) {
    ebx = *(0x8048867);
    eax = 6;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x804816c */
#include <stdint.h>
 
int8_t fcn_0804816c (void) {
    __asm ("pushal");
    edi = 0x80489b3;
    esi = 0x8048c10;
    ecx = 0;
    cl = 0x9c;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
        __asm ("loopne 0x804817b");
    } while (1);
    edi--;
    esi = 0x8048ab7;
    cl = 0x64;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
        __asm ("loopne 0x8048189");
    } while (1);
    al = 0;
    *(es:edi) = al;
    es:edi++;
    __asm ("popal");
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x8048118 */
#include <stdint.h>
 
uint32_t fcn_08048118 (void) {
    esi = 0x8048b33;
    edi = esi + 0xc;
    eax = fcn_080480e5 ();
    *(esi) = eax;
    return void (*0x8048144)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x80480e5 */
#include <stdint.h>
 
int32_t fcn_080480e5 (void) {
    ecx = 0;
    eax = 0;
    ebx = 8;
    do {
        cl = *(esi);
        cl |= cl;
        if (cl == 0) {
            goto label_0;
        }
        if (cl != 0x20) {
            cl -= 0x30;
            if (cl < 0) {
                goto label_1;
            }
            if (cl > 7) {
                goto label_1;
            }
            edx:eax = eax * ebx;
            eax += ecx;
        }
        esi++;
    } while (esi < edi);
    goto label_0;
label_1:
    ebx = 0;
    bl = 0xfd;
    eax = 1;
    eax = sys_exit (ebx);
label_0:
    esi = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x8048144 */
#include <stdint.h>
 
uint32_t fcn_08048144 (void) {
    esi = 0x8048b1b;
    edi = esi + 8;
    eax = fcn_080480e5 ();
    *(esi) = eax;
    esi = edi;
    edi = esi + 8;
    eax = fcn_080480e5 ();
    *(esi) = eax;
    esi = edi;
    edi = esi + 8;
    eax = fcn_080480e5 ();
    *(esi) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x8048129 */
#include <stdint.h>
 
uint32_t fcn_08048129 (void) {
    esi = 0x8048c00;
    edi = esi + 8;
    eax = fcn_080480e5 ();
    *(esi) = eax;
    esi = edi;
    edi = esi + 8;
    eax = fcn_080480e5 ();
    *(esi) = eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x8048522 */
#include <stdint.h>
 
int8_t fcn_08048522 (void) {
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x8048529 */
#include <stdint.h>
 
void fcn_08048529 (void) {
label_1:
    ebx = 0x8048873;
    ecx = 0x8048973;
    eax = 0x6b;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax |= eax;
    if (eax != 0) {
        void (*0x8048528)() ();
    }
    fcn_08048514 ();
    edi = 0x8048b1b;
    ecx = 0;
    cl = 8;
    ax = *(0x804897b);
    fcn_080484fd ();
    ax = *(0x804897f);
    fcn_080484fd ();
    ax = *(0x8048981);
    fcn_080484fd ();
    eax = *(0x804899b);
    cl = 0xc;
    edi += ecx;
    fcn_080484fd ();
    *((edi + 0x6d)) = 0x61747375;
    *((edi + 0x71)) = 0x202072;
    esi = 0x8048873;
    edi = 0x8048ab7;
    fcn_08048522 ();
    esi = 0x8048b53;
    ax = *(0x804897b);
    eax >>= 0xc;
    if (al != 0xa) {
        if (al == 8) {
            goto label_3;
        }
        if (al != 6) {
            if (al == 4) {
                goto label_4;
            }
            if (al != 2) {
                eax--;
                if (eax != 0) {
                    goto label_5;
                }
                fcn_0804865e ();
                *(esi) = 0x36;
                fcn_0804865e ();
                *(esi) = 0x32;
                edx = 0x64;
                eax = 0x55;
                eax = sys_readlink (0x8048873, 0x8048b54, 0x64);
                *(esi) = 0x34;
            } else {
            } else {
            } else {
                *(esi) = 0x33;
            }
        }
        fcn_0804865e ();
        eax = *(0x8048983);
        ebx = 0;
        bl = al;
        eax ^= ebx;
        eax >>= 8;
        edi = 0x8048c00;
        ecx = 8;
        fcn_080484fd ();
        eax = fcn_080484fd ();
    }
label_0:
    eax = 0;
    edx:eax = (int64_t) eax;
    al = 0x20;
    edi = 0x8048b4b;
    ecx = 8;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    esi = 0x8048ab7;
    ecx = 0;
    ch = 2;
    do {
        al = *(esi);
        esi++;
        edx += eax;
        __asm ("loop 0x804863b");
    } while (1);
    do {
        tmp_0 = eax;
        eax = edx;
        edx = tmp_0;
    } while (ecx != 0);
    edi = 8;
    cl = 7;
    fcn_080484fd ();
    edx = 0;
    dh = 2;
    eax = 4;
    eax = sys_write (0x8048867, 0x8048ab7, edx);
    do {
label_5:
        return;
label_3:
        eax = *(0x8048987);
        fcn_08048660 ();
        *(esi) = 0x30;
        ecx = 0;
        eax = 5;
        eax = sys_open (0x8048873, ecx, edx);
        eax |= eax;
    } while (eax < 0);
    tmp_1 = eax;
    eax = ebp;
    ebp = tmp_1;
    void (*0x8048622)() ();
    goto label_0;
    esi = *(0x8048987);
    esi += 0x1ff;
    esi &= 0xfffffe00;
    if (esi == 0) {
        goto label_6;
    }
    edi = *(0x8048867);
    do {
        edx = 0;
        dh = 2;
        eax = 3;
        eax = sys_read (0xeb, 0x8048cab, edx);
        eax |= eax;
        if (eax <= 0) {
            goto label_7;
        }
        esi -= eax;
        if (esi < 0) {
            goto label_8;
        }
        tmp_2 = eax;
        eax = edx;
        edx = tmp_2;
        eax = 4;
        eax = sys_write (0xed, 0x8048cab, edx);
    } while (1);
label_8:
    esi += eax;
    if (esi != 0) {
label_7:
        fcn_08048514 ();
        tmp_3 = edx;
        edx = esi;
        esi = tmp_3;
        eax = 4;
        eax = sys_write (0x8048867, 0x8048ab7, edx);
    }
label_6:
    eax = 6;
    eax = sys_close (0xeb);
    do {
        return;
label_4:
        *(esi) = 0x35;
        void (*0x8048622)() ();
        goto label_0;
        ecx = 0;
        eax = 5;
        eax = sys_open (0x8048873, ecx, edx);
        tmp_4 = eax;
        eax = ebx;
        ebx = tmp_4;
        ebx |= ebx;
    } while (ebx < 0);
    edi = 0x8048873;
    ecx = 0;
    eax = ecx;
    ecx--;
    __asm ("repne scasb al, byte es:[edi]");
    edi--;
    al = 0x2f;
    *(es:edi) = al;
    es:edi++;
    *(edi) = 0;
    eax = fcn_08048788 ();
    do {
        edx = 0x400;
        eax = 0;
        al = 0x8d;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        eax |= eax;
        if (eax <= 0) {
            goto label_9;
        }
label_2:
        esi = ecx + 0xa;
        if (*(esi) != 0) {
            if (*(esi) == 0x2e) {
                goto label_10;
            }
            if (*(esi) == 0x2e2e) {
                if (*((esi + 2)) == 0) {
                    goto label_10;
                }
            }
            fcn_08048522 ();
            if (edi <= 0x80488d7) {
                fcn_08048529 ();
                goto label_1;
            }
        }
label_10:
        edx = *((ecx + 8));
        ecx += edx;
        eax -= edx;
    } while (eax <= 0);
    goto label_2;
label_9:
    eax = 6;
    eax = sys_close (ebx);
    fcn_080487b2 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x8048514 */
#include <stdint.h>
 
int32_t fcn_08048514 (void) {
    eax = 0;
    ecx = 0;
    cl = 0x80;
    edi = 0x8048ab7;
    memset (edi, eax, ecx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x80484fd */
#include <stdint.h>
 
uint32_t fcn_080484fd (void) {
    ebx = 8;
    ecx--;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl += 0x30;
        __asm ("loop 0x8048503");
    } while (1);
    do {
        eax = edx;
        *(es:edi) = al;
        es:edi++;
        eax |= eax;
    } while (eax != 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x804865e */
#include <stdint.h>
 
int32_t fcn_0804865e (void) {
    eax = 0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x8048660 */
#include <stdint.h>
 
void fcn_08048660 (void) {
    edi = 0x8048b33;
    ecx = 0xb;
    fcn_080484fd ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x8048788 */
#include <stdint.h>
 
int32_t fcn_08048788 (void) {
    ecx = *(0x8048eaf);
    ecx |= ecx;
    if (ecx == 0) {
        goto label_0;
    }
    eax = *(ecx);
    *(0x8048eaf) = eax;
    do {
        ebx = 0;
        *((ecx + 0x400)) = ebx;
        ecx += 4;
        return eax;
label_0:
        ecx = 0x404;
        eax = fcn_080487c3 ();
        tmp_0 = eax;
        eax = ecx;
        ecx = tmp_0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x80487c3 */
#include <stdint.h>
 
int32_t fcn_080487c3 (void) {
    ebx = *(0x80487fe);
    ebx += ecx;
    eax = 0x2d;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax |= eax;
    if (eax > 0) {
        eax = *(0x80487fe);
        *(0x80487fe) = ebx;
        return eax;
    }
    edx = 7;
    ebx = 2;
    eax = 4;
    eax = sys_write (0x2, 0x80487f7, 0x7);
    bl = 0xfa;
    eax = 1;
    eax = sys_exit (ebx);
    esi--;
    __asm ("outsd dx, dword [esi]");
    *((edx + 0x41)) &= dl;
    ebp--;
    dh |= *((ebx + 0x5508048e));
    if (dh >= 0) {
        void (*0x8048866)() ();
    }
    if (ah == *((gs:bx + si))) {
        void (*0x804886c)() ();
    }
    if (ah < *((gs:bx + si))) {
        goto label_0;
    }
    ebx = 1;
    edi--;
    *((esi + 0x49)) &= al;
    ebp++;
    esi--;
    ecx++;
    ebp--;
    ebp++;
    cl |= *(ecx);
    *(0x72632063) |= ebp;
    __asm ("popal");
    if (*(0x72632063) == 0) {
        void (*0x804888c)() ();
    }
    *((ecx + 0x72)) &= dh;
    *((ecx + 0x72)) &= ah;
    if (*((ecx + 0x72)) < 0) {
label_0:
        void (*0x8048892)() ();
    }
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x8048898)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tar/ia32_elf/subject.exe @ 0x80487b2 */
#include <stdint.h>
 
int32_t fcn_080487b2 (void) {
    ecx -= 4;
    eax = *(0x8048eaf);
    *(ecx) = eax;
    *(0x8048eaf) = ecx;
    return eax;
}

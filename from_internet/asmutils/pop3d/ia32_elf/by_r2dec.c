/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/pop3d/ia32_elf/subject.exe @ 0x8048b3f */
#include <stdint.h>
 
int32_t entry0 (void) {
    if (esi != 3) {
        goto label_0;
    }
    *(0x805a0ed) = 0;
    *(0x805a0ee) = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_3;
        }
        if (al > 9) {
            goto label_3;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_3:
    tmp_0 = bl;
    bl = bh;
    bh = tmp_0;
    ebx <<= 0x10;
    bl = 2;
    *(0x805a111) = ebx;
    eax = *(0x8048ec8);
    do {
        eax++;
    } while (*(eax) != 0);
    eax--;
    if (*(eax) != 0x2f) {
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x80481cf, 0x34);
        goto label_1;
    }
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (0x1, 0xe);
    if (eax >= 0) {
        ebx = 0xe;
        eax = 0x66;
        eax = sys_socketcall (0xe, 0xe);
        eax |= eax;
        if (eax == 0) {
            goto label_4;
        }
    }
label_0:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048100, 0x1b);
    ebx = 1;
    while (eax != 0) {
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x8048203, 0x50);
        ebx = 1;
label_1:
        eax = 1;
        eax = sys_exit (0x1);
label_4:
        ebx = 2;
        eax = 0x66;
        eax = sys_socketcall (0x2, 0xe);
        eax |= eax;
    }
    ebx = 4;
    eax = 0x66;
    eax = sys_socketcall (0x4, 0xe);
    eax |= eax;
    if (eax != 0) {
        goto label_0;
    }
    eax = 2;
    eax = sys_fork (ebx);
    eax |= eax;
    if (eax == 0) {
        goto label_2;
    }
    ebx = 0;
    goto label_1;
    do {
label_2:
        *(0x8048dc9) = 0x10;
        ebx = 5;
        eax = 0x66;
        eax = sys_socketcall (0x5, 0xe);
    } while (eax < 0);
    edi = eax;
    esi = 0;
    edx = 1;
    ecx = 0;
    eax = 0x72;
    eax = sys_wait4 (0xffffffff, ecx, 0x1, esi);
    eax = 0x72;
    eax = sys_wait4 (ebx, ecx, edx, esi);
    eax = 2;
    eax = sys_fork (ebx);
    eax |= eax;
    if (eax != 0) {
        eax = 6;
        eax = sys_close (0xed);
        goto label_2;
    }
    *(0x805a10d) = edi;
    fcn_080482d6 ();
    do {
        eax = 3;
        eax = sys_read (0x805a10d, 0x8049edc, 0xfff);
        fcn_080482ee ();
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/pop3d/ia32_elf/subject.exe @ 0x8048292 */
#include <stdint.h>
 
uint32_t fcn_08048292 (void) {
    __asm ("pushal");
    edi = 0x805a12f;
    do {
        edx = 0;
        eax = *(edx:eax) / 0x80480fb;
        edx = *(edx:eax) % 0x80480fb;
        dl += 0x30;
        *(edi) = dl;
        edi--;
        eax |= eax;
    } while (eax != 0);
    edx -= edi;
    edi++;
    eax = 4;
    eax = 4;
    eax = sys_write (0x805a10d, 0xed, 0x805a12f);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/pop3d/ia32_elf/subject.exe @ 0x80484bf */
#include <stdint.h>
 
int32_t fcn_080484bf (void) {
    edx = 0;
    ecx = 0;
    ebx = 0x8048ecc;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    *(0x805a105) = eax;
    if (eax < 0) {
        eax = 4;
        eax = sys_write (0x805a10d, 0x804812b, 0x17);
        goto label_1;
    }
    eax = 0;
    *(0x805a130) = eax;
    *(0x805a148) = eax;
    edi = 0x804806b;
    esi = 0x804806b;
    esi += 6;
    do {
        __asm ("pushal");
        edx = 0;
        dx--;
        eax = 3;
        eax = sys_read (0x805a105, 0x8049edc, edx);
        *(0x805a160) = eax;
        eax |= eax;
        if (eax == 0) {
            goto label_2;
        }
        __asm ("popal");
        edx = 0x8049edc;
        ecx = 0x8049edc;
        ebx = 0x8049edc;
        edx += *(0x805a160);
label_0:
        al = *(ecx);
        if (al == *(edi)) {
            edi++;
            if (edi != esi) {
                goto label_3;
            }
            *(0x805a130)++;
            if (*(0x8048cc7) == 0) {
                goto label_4;
            }
            __asm ("pushal");
            eax = *(0x805a130);
            fcn_08048292 ();
            edx = 1;
            eax = 4;
            eax = sys_write (0x805a10d, 0x80480ff, 0x1);
            eax = *(0x805a148);
            fcn_08048279 ();
            __asm ("popal");
            *(0x805a148) = 0;
        }
label_4:
        edi = 0x804806b;
        ecx = ebx;
        *(0x805a148)++;
        ebx++;
label_3:
        ecx++;
    } while (ecx == edx);
    goto label_0;
label_2:
    __asm ("popal");
    *(0x805a130)++;
    if (*(0x8048cc7) != 0) {
        eax = *(0x805a130);
        fcn_08048292 ();
        edx = 1;
        eax = 4;
        eax = sys_write (0x805a10d, 0x80480ff, 0x1);
        eax = *(0x805a148);
        fcn_08048279 ();
        eax = 4;
        eax = sys_write (0x805a10d, 0x80480f8, 0x2);
        *(0x8048cc7) = 0;
    } else {
        if (*(0x8048cc6) != 0) {
            *(0x8048cc6) = 0;
            return eax;
        }
        eax = 4;
        eax = sys_write (0x805a10d, 0x8048075, 0x4);
        eax = *(0x805a130);
        fcn_08048292 ();
        edx = 1;
        eax = 4;
        eax = sys_write (0x805a10d, 0x80480ff, 0x1);
        eax = *(0x805a148);
        fcn_08048279 ();
    }
    eax = 6;
    eax = sys_close (0x805a105);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/pop3d/ia32_elf/subject.exe @ 0x8048279 */
#include <stdint.h>
 
void fcn_08048279 (void) {
    fcn_08048292 ();
    edx = 1;
    ecx = 0x80480fa;
    ebx = *(0x805a10d);
    eax = 4;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/pop3d/ia32_elf/subject.exe @ 0x80482d6 */
#include <stdint.h>
 
void fcn_080482d6 (void) {
    __asm ("pushal");
    edx = 0x1f;
    ecx = 0x804804c;
    ebx = *(0x805a10d);
    eax = 4;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/pop3d/ia32_elf/subject.exe @ 0x80482ee */
#include <stdint.h>
 
void fcn_080482ee (void) {
    eax = 0;
    esi = 0x8049edc;
    edi = 0x8059edb;
    ecx = 0x100;
    do {
        al = *(esi);
        esi++;
        if (al == 0x20) {
            goto label_3;
        }
        if (al == 0xa) {
            goto label_4;
        }
        *(es:edi) = al;
        es:edi++;
        ecx--;
    } while (ecx != 0);
label_4:
    eax = esi;
    eax -= 0x8049edc;
    eax--;
    eax--;
    *(0x805a0f9) = eax;
    goto label_5;
label_3:
    eax = esi;
    eax -= 0x8049edc;
    eax--;
    *(0x805a0f9) = eax;
    ebx = esi;
    edi = 0x8059ee5;
    ecx = 0;
    ch = 1;
    do {
        al = *(esi);
        esi++;
        if (al == 0x20) {
            goto label_6;
        }
        if (al == 0xa) {
            goto label_7;
        }
        *(es:edi) = al;
        es:edi++;
        ecx--;
    } while (ecx != 0);
    goto label_5;
label_7:
    esi--;
label_6:
    esi -= ebx;
    esi--;
    *(0x805a109) = esi;
label_5:
    if (*(0x805a0f9) < 4) {
        eax = 4;
        eax = sys_write (0x805a10d, 0x8048142, 0x30);
        void (*0x8048b3a)() ();
    }
    if (*(0x805a0ed) == 1) {
        goto label_8;
    }
    ecx = *(0x805a0f9);
    edi = 0x8059edb;
    esi = 0x8048253;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    ecx |= ecx;
    if (ecx == 0) {
        *(0x805a0ee) = 1;
        esi = 0x8059ee5;
        edi = 0x8059eef;
        ecx = *(0x805a109);
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
        *(edi) = 0;
        eax = 4;
        eax = sys_write (0x805a10d, 0x8048071, 0x4);
        void (*0x8048b3a)() ();
    }
    if (*(0x805a0ee) == 0) {
        eax = 4;
        eax = sys_write (0x805a10d, 0x804811b, 0x10);
        void (*0x8048b3a)() ();
    }
    edi = 0x8059edb;
    esi = 0x8048257;
    ecx = *(0x805a0f9);
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    if (ecx != 0) {
        goto label_8;
    }
    esi = 0x8059ee5;
    edi = 0x8059fee;
    ecx = *(0x805a109);
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    edi++;
    *(edi) = 0;
    *(0x805a0ed) = 1;
    ebx = 0x8048ecc;
    ecx = *(0x8048ec8);
label_0:
    al = *(ecx);
    do {
        *(ebx) = al;
    } while (ecx != 0);
    ebx++;
    ecx++;
    if (*(ecx) != 0) {
        goto label_0;
    }
    ecx = 0x8059eef;
    do {
        al = *(ecx);
        *(ebx) = al;
        if (*(ebx) == 0) {
            goto label_9;
        }
        ebx++;
        ecx++;
    } while (1);
label_9:
    *(0x8048cc6) = 1;
    *(0x8048cc7) = 0;
    fcn_080484bf ();
    eax = 4;
    eax = sys_write (0x805a10d, 0x80480b7, 0x12);
    eax = *(0x805a130);
    fcn_08048292 ();
    *(0x8048cc6) = 0;
    eax = 4;
    eax = sys_write (0x805a10d, 0x80480c9, 0xa);
    void (*0x8048b3a)() ();
label_8:
    edi = 0x8059edb;
    esi = 0x804825b;
    ecx = *(0x805a0f9);
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    ecx |= ecx;
    if (ecx == 0) {
    }
    edi = 0x8059edb;
    esi = 0x8048267;
    ecx = *(0x805a0f9);
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    ecx |= ecx;
    if (ecx == 0) {
        *(0x8048cc7) = 1;
        fcn_080484bf ();
        void (*0x8048b3a)() ();
    }
    edi = 0x8059edb;
    esi = 0x804826b;
    ecx = *(0x805a0f9);
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    ecx |= ecx;
    if (ecx == 0) {
        eax = 4;
        eax = sys_write (0x805a10d, 0x80480a9, 0xe);
        eax = 6;
        eax = sys_close (0x805a10d);
        ebx = 0;
        eax = 1;
        eax = sys_exit (ebx);
    }
    edi = 0x8059edb;
    esi = 0x804825f;
    ecx = *(0x805a0f9);
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    ecx |= ecx;
    if (ecx != 0) {
        goto label_10;
    }
label_2:
    if (*(0x805a109) <= 0) {
        eax = 4;
        eax = sys_write (0x805a10d, 0x804818d, 0x17);
        void (*0x8048b3a)() ();
    }
    if (*(0x805a109) >= 0xa) {
        eax = 4;
        eax = sys_write (0x805a10d, 0x80480e9, 0xf);
    }
    edx = 1;
    ecx = 0;
    edi = 0x8059ee5;
    edi += *(0x805a109);
    do {
        edi--;
        eax = 0;
        al = *(edi);
        eax -= 0x30;
        if (eax > 9) {
            goto label_11;
        }
        if (eax < 0) {
            goto label_11;
        }
        eax *= edx;
        ecx += eax;
        edx *= 0xa;
    } while (edi != 0x8059ee5);
    *(0x805a134) = ecx;
    *(0x805a138) = 0;
    *(0x805a13c) = 0;
    goto label_12;
label_11:
    eax = 4;
    eax = sys_write (0x805a10d, 0x80481a4, 0x2b);
    void (*0x8048b3a)() ();
label_12:
    *(0x8048cc6) = 1;
    fcn_080484bf ();
    eax = *(0x805a130);
    eax++;
    if (*(0x805a134) >= 1) {
        if (*(0x805a134) < eax) {
            goto label_13;
        }
    }
    eax = 4;
    eax = sys_write (0x805a10d, 0x8048172, 0x1b);
    void (*0x8048b3a)() ();
label_13:
    edx = 0;
    eax = *(0x805a134);
    fcn_08048279 ();
    edx = 0;
    ecx = 0;
    eax = 5;
    eax = sys_open (0x8048ecc, ecx, edx);
    *(0x805a105) = eax;
    if (eax < 0) {
        eax = 4;
        eax = sys_write (0x805a10d, 0x804812b, 0x17);
        void (*0x8048b3a)() ();
    }
    *(0x805a130) = 1;
    edi = 0x804806b;
    esi = 0x804806b;
    esi += 6;
    *(0x805a144) = 0;
    eax = 0;
    *(0x8048cc9) = eax;
    *(0x805a138) = eax;
    *(0x805a13c) = eax;
    *(0x805a144) = eax;
label_1:
    __asm ("pushal");
    edx = 0;
    dx--;
    eax = 3;
    eax = sys_read (0x805a105, 0x8049edc, edx);
    *(0x805a158) = eax;
    eax |= eax;
    if (eax == 0) {
        goto label_14;
    }
    __asm ("popal");
    edx = 0x8049edc;
    ecx = 0x8049edc;
    ebx = 0x8049edc;
    edx += *(0x805a158);
    ebp = 0;
    if (*(0x805a134) != 1) {
        goto label_15;
    }
    *(0x805a138) = 1;
    *(0x805a134)++;
    do {
label_15:
        al = *(ecx);
        if (al == *(edi)) {
            edi++;
            if (edi != esi) {
                goto label_16;
            }
            *(0x805a130)++;
            eax = *(0x805a130);
            if (eax == *(0x805a134)) {
                ebp -= 6;
                ebp -= 0x8049edc;
                *(0x805a144) += ebp;
                if (*(0x805a138) == 0) {
                    eax = *(0x805a144);
                    *(0x805a138) = eax;
                    *(0x805a134)++;
                } else {
                    *(0x805a138) += 3;
                    eax = *(0x805a144);
                    *(0x805a13c) = eax;
                    *(0x805a13c) += 2;
                    goto label_17;
                }
            }
            *(0x805a144) -= ebp;
        }
        edi = 0x804806b;
        ecx = ebx;
        ebx++;
label_16:
        ecx++;
    } while (ecx != edx);
    eax = *(0x805a158);
    *(0x805a144) += eax;
    goto label_1;
label_14:
    __asm ("popal");
    eax = *(0x805a144);
    *(0x805a13c) = eax;
    *(0x805a138) += 3;
label_17:
    if (*(0x805a138) == 4) {
        *(0x805a138) = 0;
    }
    if (*(0x805a138) == 4) {
        *(0x805a138) = 0;
    }
    eax = *(0x805a13c);
    eax -= *(0x805a138);
    *(0x805a140) = eax;
    if (*(0x8048cc8) != 1) {
        goto label_18;
    }
    __asm ("pushal");
    eax = 4;
    eax = sys_write (0x805a10d, 0x8048071, 0x4);
    eax = 6;
    eax = sys_close (0x805a105);
    ecx = 2;
    eax = 5;
    eax = sys_open (0x8048ecc, 0x2, edx);
    *(0x805a105) = eax;
    do {
        edx = 0;
        eax = 0x13;
        eax = sys_lseek (0x805a105, 0x805a13c, edx);
        edx = 0;
        dx--;
        eax = 3;
        eax = sys_read (0x805a105, 0x8049edc, edx);
        if (eax == 0) {
            goto label_19;
        }
        *(0x805a160) = eax;
        edx = 0;
        eax = 0x13;
        eax = sys_lseek (0x805a105, 0x805a138, edx);
        eax = 4;
        eax = sys_write (0x805a105, 0x8049edc, 0x805a160);
        eax = *(0x805a160);
        *(0x805a13c) += eax;
        *(0x805a138) += eax;
    } while (1);
label_19:
    __asm ("popal");
    eax = 0x5d;
    eax = sys_ftruncate (0x805a105, 0x805a138);
    eax = 6;
    eax = sys_close (0x805a105);
    *(0x8048cc8) = 0;
    void (*0x8048b3a)() ();
label_18:
    eax = 4;
    eax = sys_write (0x805a10d, 0x8048075, 0x4);
    eax = *(0x805a140);
    fcn_08048292 ();
    eax = 4;
    eax = sys_write (0x805a10d, 0x8048079, 0x8);
    edx = 0;
    eax = 0x13;
    eax = sys_lseek (0x805a105, 0x805a138, edx);
    *(0x805a101) = 0;
    do {
        if (*(0x805a140) <= 0xffff) {
            edx = *(0x805a140);
        } else {
        }
        eax = 3;
        eax = sys_read (0x805a105, 0x8049edc, 0xffff);
        *(0x805a0fd) = eax;
        *(0x805a101) += eax;
        eax = 4;
        eax = sys_write (0x805a10d, 0x8049edc, 0x805a0fd);
        eax = *(0x805a101);
    } while (eax != *(0x805a140));
    eax = 6;
    eax = sys_close (0x805a105);
    eax = 4;
    eax = sys_write (0x805a10d, 0x80480f8, 0x2);
    void (*0x8048b3a)() ();
label_10:
    edi = 0x8059edb;
    esi = 0x8048263;
    ecx = *(0x805a0f9);
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    ecx |= ecx;
    if (ecx == 0) {
        *(0x8048cc8) = 1;
        goto label_2;
    }
    eax = 4;
    eax = sys_write (0x805a10d, 0x80480d3, 0x16);
}

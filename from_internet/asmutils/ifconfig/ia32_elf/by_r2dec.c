/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ifconfig/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
uint32_t entry0 (void) {
    ebp--;
    ebp--;
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (0x1, 0xe);
    *(0x8048548) = eax;
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    if (*((esi - 2)) == 0x65) {
        goto label_6;
    }
    esi |= esi;
    if (esi == 0) {
        goto label_7;
    }
    edi = 0x804854c;
    ecx = 0x10;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    if (ebp == 0) {
        goto label_8;
    }
label_0:
    ebp--;
    if (ebp < 0) {
        goto label_2;
    }
    esi = 0x10;
    if (*(esi) <= 0x39) {
        goto label_9;
    }
    if (*(esi) == 0x62) {
        esi = 0x10;
        ebp--;
        edi = 0x8048560;
        fcn_08048141 ();
        *(0x804855c) = 2;
        ecx = 0x891a;
        goto label_10;
    }
    if (*(esi) != 0x6e) {
        goto label_11;
    }
    ebp--;
    edi = 0x8048560;
    fcn_08048141 ();
    *(0x804855c) = 2;
    ecx = 0x891c;
    do {
label_10:
        eax = fcn_080480e8 ();
        goto label_0;
label_2:
        eax = 1;
        eax = sys_exit (0xea);
label_9:
        edi = 0x8048560;
        fcn_08048141 ();
        *(0x804855c) = 2;
        ecx = 0x8916;
        fcn_080480e8 ();
label_11:
        ecx = 0x8913;
        fcn_080480e8 ();
        *(0x804855c) &= 0xfe;
        if (*(esi) != 0x64) {
            *(0x804855c) |= 1;
        }
        ecx = 0x8914;
    } while (1);
label_6:
    *(0x80485a0) |= 4;
    ebx = 0x890b;
    esi |= esi;
    if (esi == 0) {
        goto label_12;
    }
    if (*(esi) == 0x61) {
        goto label_1;
    }
    ebx = 0x890c;
    do {
label_1:
        ebp--;
        if (ebp < 0) {
            goto label_13;
        }
        if (*(esi) == 0x6e2d) {
            *(0x80485a0) &= 0xfb;
        }
    } while (*(esi) == 0x682d);
    if (*(esi) == 0x67) {
        *(0x80485a0) |= 2;
        edi = 0x8048580;
        goto label_14;
    }
    if (*(esi) == 0x6e) {
        edi = 0x8048590;
        goto label_14;
    }
    if (*((esi + 1)) == 0x7665) {
        ebp--;
        *(0x80485b0) = esi;
        goto label_1;
    }
    edi = 0x8048570;
    *(edi) = 2;
    edi += 4;
    if (*(esi) != 0x64) {
        goto label_15;
    }
    *(0x80485a0) &= 0xfb;
    do {
label_15:
        fcn_08048141 ();
        goto label_1;
label_13:
        ecx = ebx;
        eax = 0x36;
        eax = sys_ioctl (0x8048548, 0xeb, 0x804856c);
        goto label_2;
label_14:
        esi = 0x36;
        ebp--;
        *(edi) = 2;
        edi += 4;
    } while (1);
label_7:
label_3:
    *(0x804855c) = ebp;
    ecx = 0x8910;
    eax = fcn_080480e8 ();
    eax |= eax;
    if (eax < 0) {
        goto label_2;
    }
    void (*0x8048237)() ();
    ebp++;
    goto label_3;
label_8:
    edi = 0x80485b4;
    esi = 0x804854c;
    fcn_08048352 ();
    al = 9;
    *(es:edi) = al;
    es:edi++;
    ecx = 0x8927;
    al = fcn_080480e8 ();
    esi = 0x804855e;
    al = *(esi);
    esi++;
    al = fcn_0804835a ();
    al = *(esi);
    esi++;
    al = fcn_0804835a ();
    al = *(esi);
    esi++;
    al = fcn_0804835a ();
    al = *(esi);
    esi++;
    al = fcn_0804835a ();
    al = *(esi);
    esi++;
    al = fcn_0804835a ();
    al = *(esi);
    esi++;
    fcn_0804835a ();
    *((edi - 1)) = 0x20;
    ecx = 0x8913;
    fcn_080480e8 ();
    ebx = *(0x804855c);
    if ((bl & 1) != 0) {
        esi = 0x80484fa;
        fcn_08048352 ();
    }
    if ((bl & 2) != 0) {
        esi = 0x80484fe;
        fcn_08048352 ();
    }
    if ((bl & 8) != 0) {
        esi = 0x8048509;
        fcn_08048352 ();
    }
    if ((bl & 0x40) != 0) {
        esi = 0x8048513;
        fcn_08048352 ();
    }
    if ((bh & 1) != 0) {
        esi = 0x804851c;
        fcn_08048352 ();
    }
    ecx = 0x8915;
    fcn_080480e8 ();
    esi = 0x8048525;
    fcn_08048352 ();
    ebp = *(0x8048560);
    fcn_08048455 ();
    edi--;
    ecx = 0x891b;
    fcn_080480e8 ();
    esi = 0x8048532;
    fcn_08048352 ();
    ebp = *(0x8048560);
    fcn_08048455 ();
    edi--;
    ecx = 0x8918;
    fcn_080480e8 ();
    esi = 0x804853c;
    fcn_08048352 ();
    ebp = *(0x8048560);
    fcn_08048455 ();
    al = 0xa;
    *((edi - 1)) = al;
    *(es:edi) = al;
    es:edi++;
    edx -= ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80485b4, 0xed);
    return eax;
label_12:
    ecx = 0;
    eax = 5;
    eax = sys_open (0x80484b4, ecx, edx);
    *(0x8048548) = eax;
    fcn_08048493 ();
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80484c4, 0x36);
label_4:
    al = fcn_08048493 ();
    edi = 0x804854c;
    do {
        al = *(esi);
        esi++;
        if (al <= 0x20) {
            goto label_16;
        }
        *(es:edi) = al;
        es:edi++;
    } while (1);
label_16:
    al = 0xa;
    *(es:edi) = al;
    es:edi++;
    fcn_08048437 ();
    *(0x8048570) = ebp;
    al = fcn_08048437 ();
    do {
        al = *(esi);
        esi++;
    } while (al <= 0x20);
    do {
        al = *(esi);
        esi++;
    } while (al > 0x20);
    esi--;
    esi--;
    al = *(esi);
    esi++;
    if (al >= 0x41) {
        al--;
    }
    if ((al & 1) == 0) {
        goto label_4;
    }
    ecx = 3;
    do {
label_5:
        al = *(esi);
        esi++;
    } while (al <= 0x20);
    do {
        al = *(esi);
        esi++;
    } while (al > 0x20);
    __asm ("loop 0x80483e1");
    goto label_5;
    fcn_08048437 ();
    edi = 0x80485b4;
    ebp = *(0x8048570);
    fcn_08048480 ();
    fcn_08048480 ();
    al = fcn_08048480 ();
    esi = 0x804854c;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
    } while (al != 0xa);
    edx -= ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80485b4, 0xed);
    goto label_4;
    do {
    } while (ecx != 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ifconfig/ia32_elf/subject.exe @ 0x8048141 */
#include <stdint.h>
 
int32_t fcn_08048141 (void) {
    eax = 0;
    ecx = 0;
label_0:
    edx = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_1;
        }
        if (al >= 0x31) {
            goto label_1;
        }
        edx *= 0xa;
        edx += eax;
    } while (1);
label_1:
    *((edi + ecx)) = dl;
    ecx++;
    if (ecx != 4) {
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ifconfig/ia32_elf/subject.exe @ 0x80480e8 */
#include <stdint.h>
 
void fcn_080480e8 (void) {
    ebx = *(0x8048548);
    edx = 0x804854c;
    eax = 0x36;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ifconfig/ia32_elf/subject.exe @ 0x8048352 */
#include <stdint.h>
 
void fcn_08048352 (void) {
    al = *(esi);
    esi++;
    do {
        *(es:edi) = al;
        es:edi++;
        al = *(esi);
        esi++;
    } while (al != 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ifconfig/ia32_elf/subject.exe @ 0x804835a */
#include <stdint.h>
 
void fcn_0804835a (void) {
    al >>= 4;
    fcn_0804836d ();
    fcn_0804836d ();
    al = 0x3a;
    *(es:edi) = al;
    es:edi++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ifconfig/ia32_elf/subject.exe @ 0x804836d */
#include <stdint.h>
 
int8_t fcn_0804836d (void) {
    al &= 0xf;
    if (al >= 0xa) {
        al += 7;
    }
    al += 0x30;
    *(es:edi) = al;
    es:edi++;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ifconfig/ia32_elf/subject.exe @ 0x8048455 */
#include <stdint.h>
 
int32_t fcn_08048455 (void) {
    ecx = 4;
label_0:
    eax = ebp;
    ebp >>= 8;
    eax &= 0xff;
    ecx = 0;
    ebx = 0xa;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        ecx++;
        edx += 0x30;
        eax |= eax;
    } while (eax != 0);
    do {
        eax = edx;
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x8048475");
    } while (1);
    ecx = edx;
    al = 0x2e;
    *(es:edi) = al;
    es:edi++;
    __asm ("loop 0x8048458");
    goto label_0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ifconfig/ia32_elf/subject.exe @ 0x8048493 */
#include <stdint.h>
 
int32_t fcn_08048493 (void) {
    do {
        ebx = 0;
        eax = 1;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        esi = 0x80485b4;
        edx = 1;
label_0:
        eax = 3;
        eax = sys_read (0x8048548, 0x80485b4, 0x1);
        eax |= eax;
    } while (eax <= 0);
    ecx++;
    if (*((ecx - 1)) != 0xa) {
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ifconfig/ia32_elf/subject.exe @ 0x8048437 */
#include <stdint.h>
 
int32_t fcn_08048437 (void) {
    do {
        al = *(esi);
        esi++;
    } while (al <= 0x20);
    esi--;
    eax = 0;
    ebp = 0;
    ecx = 8;
    do {
        al = *(esi);
        esi++;
        if (al >= 0x41) {
            al -= 7;
        }
        al -= 0x30;
        ebp <<= 4;
        ebp |= eax;
        __asm ("loop 0x8048444");
    } while (1);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ifconfig/ia32_elf/subject.exe @ 0x8048480 */
#include <stdint.h>
 
int8_t fcn_08048480 (void) {
    fcn_08048455 ();
    edi--;
    ecx -= edi;
    ecx += 0x10;
    al = 0x20;
    do {
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x804848f");
    } while (1);
    return al;
}

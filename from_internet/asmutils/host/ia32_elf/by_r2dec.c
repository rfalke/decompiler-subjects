/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/host/ia32_elf/subject.exe @ 0x804809f */
#include <stdint.h>
 
void entry0 (void) {
    ebx--;
    while (ebx <= 0) {
        edx = 0x2f;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804804c, 0x2f);
        eax = 0;
label_0:
        eax |= eax;
        if (eax != 0) {
            if (eax != 0xffffff91) {
                goto label_3;
            }
            edx = 0x24;
            ebx = 1;
            eax = 4;
            eax = sys_write (0x1, 0x804807b, 0x24);
        }
label_3:
        eax = 6;
        eax = sys_close (0xeb);
        ebx = 0;
        eax = 1;
        eax = sys_exit (ebx);
        *(0x80483d4) = 0xea60;
        eax = 1;
        eax = 1;
        if (*(eax) != 0x2d) {
            goto label_4;
        }
        ebx -= 2;
    }
    esi = 1;
    ebx = 0;
    eax = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_5;
        }
        if (al > 9) {
            goto label_5;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_5:
    *(0x80483d4) = ebx;
    eax = ebx;
label_4:
    *(0x80483cc) = eax;
    ebx--;
    if (ebx != 0) {
        0x80483d0 = ebx;
    }
    esi = *(0x80483d0);
    esi |= esi;
    if (esi == 0) {
        fcn_0804835a ();
        esi |= esi;
        if (esi != 0) {
            goto label_6;
        }
        goto label_0;
    }
label_6:
    fcn_080482ab ();
    edi = 0x804860c;
    fcn_08048289 ();
    bl = 0x35;
    *(edi) = 2;
    *((edi + 3)) = bl;
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (0x1, 0xe);
    if (eax < 0) {
label_1:
        goto label_0;
    }
    edi = esp;
    ebx = 0xe;
    eax = 0x66;
    eax = sys_socketcall (0xe, 0xe);
    if (eax < 0) {
        goto label_1;
    }
    ebx = 3;
    eax = 0x66;
    eax = sys_socketcall (0x3, 0xe);
    if (eax < 0) {
        goto label_1;
    }
    edi = esp;
    ebx = 0xe;
    eax = 0x66;
    eax = sys_socketcall (0xe, 0xe);
    if (eax < 0) {
        goto label_1;
    }
    eax = 0x36;
    eax = sys_ioctl (0xeb, 0x5421, 0xe);
    eax = 0x36;
    if (eax < 0) {
        goto label_0;
    }
    edx = 0;
    dx = *(0x80483f6);
    tmp_0 = dl;
    dl = dh;
    dh = tmp_0;
    eax = 4;
    eax = sys_write (0xeb, 0x80483f8, edx);
    *(0x8048604) = ebp;
    ax = 3;
    *(0x8048608) = ax;
    edx = *(0x80483d4);
    ecx = 1;
    ebx = 0x8048604;
    eax = 0;
    al = 0xa8;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if ((*(0x804860a) & 3) == 0) {
        goto label_0;
    }
    esi = 0x80483f6;
    edx = 0;
    dh = 2;
    eax = 3;
    eax = sys_read (0xeb, 0xe, edx);
    eax |= eax;
    if (eax == 0) {
        goto label_7;
    }
    ax = *(0x80483fc);
    tmp_1 = al;
    al = ah;
    ah = tmp_1;
    ax |= ax;
    if (ax == 0) {
        goto label_2;
    }
    esi = 0x8048404;
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    esi += 4;
    do {
label_2:
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al == 0);
    if (al != 1) {
        if (al != 5) {
            goto label_7;
        }
        esi += 6;
        eax = 0;
        ax = *(esi);
        tmp_2 = al;
        al = ah;
        ah = tmp_2;
        esi += eax;
        esi++;
        esi++;
        goto label_2;
    }
    esi += 7;
    al = *(esi);
    esi++;
    if (al == 4) {
        eax = *(esi);
        fcn_0804830a ();
    }
label_7:
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/host/ia32_elf/subject.exe @ 0x804835a */
#include <stdint.h>
 
int8_t fcn_0804835a (void) {
    ecx = 0;
    ebx = 0x80483bb;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax < 0) {
        goto label_1;
    }
    edx = 0;
    dh = 2;
    eax = 3;
    eax = sys_read (0xea, 0x804861c, edx);
    eax = 6;
    eax = sys_close (ebx);
    esi = ecx;
    do {
label_0:
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_1;
        }
    } while (al != 0x6e);
    if (*(esi) != 0x73656d61) {
        goto label_0;
    }
    esi += 4;
    if (*(esi) != 0x65767265) {
        goto label_0;
    }
    esi += 4;
    if (*(esi) != 0x72) {
        goto label_0;
    }
    esi++;
    do {
        al = *(esi);
        esi++;
    } while (al <= 0x20);
    esi--;
    do {
        al = *(esi);
        esi++;
    } while (al >= 0x2e);
    *((esi - 1)) = 0;
    return al;
label_1:
    esi = 0;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/host/ia32_elf/subject.exe @ 0x80482ab */
#include <stdint.h>
 
int32_t fcn_080482ab (void) {
    __asm ("pushal");
    esi = *(0x80483cc);
    edi = 0x8048404;
    edi++;
label_0:
    ecx = 0;
    do {
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_1;
        }
        if (al == 0x2e) {
            goto label_2;
        }
        ecx++;
        *(es:edi) = al;
        es:edi++;
    } while (1);
label_2:
    ebx = edi;
    *(ebx) = cl;
    edi++;
    goto label_0;
label_1:
    eax = 0;
    *(es:edi) = al;
    es:edi++;
    eax++;
    tmp_0 = ah;
    ah = al;
    al = tmp_0;
    *(es:edi) = ax;
    es:edi += 2;
    *(es:edi) = ax;
    es:edi += 2;
    ebx = edi;
    *(ebx) = cl;
    edi -= 0x80483f8;
    edx = edi;
    tmp_1 = dl;
    dl = dh;
    dh = tmp_1;
    *(0x80483f6) = dx;
    *(0x80483f8) = 0x4d52;
    *(0x80483fc) = 0x100;
    *(0x80483fa) = 1;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/host/ia32_elf/subject.exe @ 0x8048289 */
#include <stdint.h>
 
int32_t fcn_08048289 (void) {
    eax = 0;
    edx = 0;
    ecx = 0;
label_0:
    ebx = 0;
    do {
        al = *((esi + edx));
        edx++;
        al -= 0x30;
        if (al < 0) {
            goto label_1;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_1:
    *((edi + ecx + 4)) = bl;
    ecx++;
    if (ecx != 4) {
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/host/ia32_elf/subject.exe @ 0x804830a */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_0804830a (void) {
    edi = 0x80483ec;
    esi = 0x80483ec;
    tmp_0 = al;
    al = ah;
    ah = tmp_0;
    eax = rotate_right32 (eax, 0x10);
    tmp_1 = al;
    al = ah;
    ah = tmp_1;
    fcn_0804832d ();
    esi -= edi;
    edi++;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xed, 0xe);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/host/ia32_elf/subject.exe @ 0x804832d */
#include <stdint.h>
 
uint32_t fcn_0804832d (void) {
    __asm ("std");
    *(edi) = 0xa;
    edi--;
    do {
        ebx = eax;
        eax = fcn_08048348 ();
        tmp_0 = eax;
        eax = ebx;
        ebx = tmp_0;
        al = 0x2e;
        *(es:edi) = al;
        es:edi++;
        eax >>= 8;
    } while (eax != 0);
    edi++;
    *(edi) = 0x20;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/host/ia32_elf/subject.exe @ 0x8048348 */
#include <stdint.h>
 
uint8_t fcn_08048348 (void) {
    cl = 0xa;
    do {
        ah = 0;
        al = ax / cl;
        ah = ax % cl;
        tmp_0 = al;
        al = ah;
        ah = tmp_0;
        al += 0x30;
        *(es:edi) = al;
        es:edi++;
        tmp_1 = al;
        al = ah;
        ah = tmp_1;
        al |= al;
    } while (al != 0);
    return al;
}

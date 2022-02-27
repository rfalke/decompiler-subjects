/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/fdisk/ia32_elf/subject.exe @ 0x8048054 */
#include <stdint.h>
 
int32_t entry0 (void) {
    do {
label_0:
        ebx = 0;
        eax = 1;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        eax = 1;
    } while (eax != 2);
    ebx = 1;
    ebx = 1;
    ecx = 0;
    ch = 0x80;
    eax = 5;
    eax = sys_open (ebx, ecx, edx);
    if (eax < 0) {
        goto label_0;
    }
    tmp_0 = ebx;
    ebx = ecx;
    ecx = tmp_0;
    edx = ecx;
    do {
        edx++;
    } while (edx >= 0);
    edx -= ecx;
    edx--;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, edx);
    ebx = 4;
    eax = 0x36;
    eax = sys_ioctl (ebx, 0x301, 0x80484f8);
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048454, 0xb);
    fcn_080481a6 ();
    edx = 1;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804804c, 0x1);
    ebx = 4;
    edx = 0;
    dh = 2;
    eax = 3;
    eax = sys_read (ebx, 0x8048510, edx);
    *(0x80484ec) = ebx;
    edi = 0x80486ce;
    edx = 0;
    do {
        fcn_080481eb ();
        dl++;
        edi += 0x10;
    } while (edi != 0x804870e);
    eax = *(0x80484f0);
    eax |= eax;
    if (eax == 0) {
        goto label_3;
    }
    *(0x80484f4) = eax;
    edx = eax;
    ecx = 0;
    __asm ("shld ecx, edx, 9");
    edx <<= 9;
label_1:
    ecx = edx;
    edi = 0;
    esi = 0x80484e4;
    ebx = *(0x80484ec);
    eax = 0;
    al = 0x8c;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    edx = 0;
    dh = 2;
    eax = 3;
    eax = sys_read (0x80484ec, 0x8048510, edx);
    edx = ebp;
    edi = 0x80486ce;
    esi = 0;
    do {
        if (*((edi + 4)) == 5) {
            goto label_4;
        }
        if (*((edi + 4)) == 0xf) {
            goto label_4;
        }
        if (*((edi + 4)) == 0x85) {
            goto label_4;
        }
        if (*((edi + 4)) != 0) {
            fcn_080481eb ();
            dl++;
        }
label_2:
        edi += 0x10;
    } while (edi != 0x804870e);
    esi |= esi;
    if (esi != 0) {
        goto label_1;
    }
    goto label_3;
label_4:
    esi++;
    ecx = 0;
    edx = *((edi + 8));
    edx += *(0x80484f0);
    *(0x80484f4) = edx;
    ecx += 0;
    __asm ("shld ecx, edx, 9");
    edx <<= 9;
    goto label_2;
label_3:
    eax = 6;
    eax = sys_close (0x80484ec);
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/fdisk/ia32_elf/subject.exe @ 0x80481eb */
#include <stdint.h>
 
int32_t fcn_080481eb (void) {
    if (*(0x804870e) != 0x55aa) {
        if (*(0x804870e) == 0xaa55) {
            goto label_0;
        }
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x80484a8, 0x3c);
        ebx = 0;
        bl = 0xff;
        eax = 1;
        eax = sys_exit (ebx);
        return;
    }
label_0:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048427, 0xa);
    eax = ebp;
    eax++;
    fcn_080483df ();
    if (*((ebp + 4)) == 6) {
        ecx = 0x804845f;
        edx = 6;
        return eax;
    }
    while (*((ebp + 4)) == 0xc) {
        ecx = 0x8048465;
        edx = 6;
        return eax;
    }
    if (*((ebp + 4)) != 0xa5) {
        if (*((ebp + 4)) == 0xa6) {
            goto label_1;
        }
        if (*((ebp + 4)) != 0x82) {
            goto label_2;
        }
        ecx = 0x804847f;
        edx = 0xb;
        return eax;
    }
label_1:
    ecx = 0x804848a;
    edx = 0xa;
    return eax;
label_2:
    if (*((ebp + 4)) == 0x83) {
        ecx = 0x8048474;
        edx = 0xb;
        return eax;
    }
    if (*((ebp + 4)) == 0) {
        ecx = 0x80484a3;
        edx = 5;
        return eax;
    }
    if (*((ebp + 4)) != 5) {
        if (*((ebp + 4)) == 0xf) {
            goto label_3;
        }
        if (*((ebp + 4)) == 0x85) {
            goto label_3;
        }
        ecx = 0x8048494;
        edx = 0xf;
        return eax;
    }
label_3:
    eax = *((ebp + 8));
    *(0x80484f0) = eax;
    ecx = 0x804846b;
    edx = 9;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/fdisk/ia32_elf/subject.exe @ 0x80483df */
#include <stdint.h>
 
void fcn_080483df (void) {
    edi = 0x8048500;
    fcn_080483ff ();
    edi -= 0x8048501;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048500, 0xed);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/fdisk/ia32_elf/subject.exe @ 0x80483ff */
#include <stdint.h>
 
uint32_t fcn_080483ff (void) {
    ebx = 0xa;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl |= 0x30;
    } while (eax != 0);
    do {
        eax = edx;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/fdisk/ia32_elf/subject.exe @ 0x80481a6 */
#include <stdint.h>
 
uint32_t fcn_080481a6 (void) {
    eax = *(0x80484fa);
    fcn_080483df ();
    edx = 1;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804845c, edx);
    eax = *(0x80484f8);
    fcn_080483df ();
    edx = 1;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804845c, 0x1);
    eax = *(0x80484f9);
    fcn_080483df ();
    return eax;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/less/ia32_elf/subject.exe @ 0x80480d3 */
#include <stdint.h>
 
void entry0 (void) {
    do {
        ebx = 0;
        eax = 1;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        ebx = 1;
        ebx--;
        ebx = 1;
        if (ebx != 0) {
            ebx = 1;
            ecx = 0;
            eax = 5;
            eax = sys_open (ebx, ecx, edx);
            *(0x80483a9) = eax;
            if (eax >= 0) {
                goto label_2;
            }
            ebx = 1;
            eax = 1;
            eax = sys_exit (0x1);
        }
label_2:
        eax = 0x36;
        eax = sys_ioctl (0x80483a9, 0x5401, 0x8048405);
    } while (eax >= 0);
    ebx = 1;
    eax = 0x36;
    eax = sys_ioctl (0x1, 0x5413, 0x80483fd);
    *(edx)--;
    eax |= eax;
    if (eax != 0) {
        *(edx) = 0x500018;
    }
    ebx = 2;
    eax = 0x36;
    eax = sys_ioctl (0x2, 0x5401, 0x8048405);
    ebx = 2;
    eax = 0x36;
    eax = sys_ioctl (0x2, ecx, 0x8048429);
    *(0x8048435) &= 0xfffffff4;
    ebx = 2;
    eax = 0x36;
    eax = sys_ioctl (0x2, 0x5402, 0x8048429);
    fcn_08048289 ();
    fcn_080482d0 ();
label_1:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048395, 0x8);
    fcn_0804831e ();
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804839e, 0x5);
    eax = *(0x8048459);
    edi = 0x80483ad;
    fcn_0804836c (4);
    edx++;
    *(edi) = 0x2f;
    edi++;
    eax = *(0x8048455);
    fcn_0804836c (edx);
    edx += eax;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80483ad, edx);
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80483a3, 0x6);
    do {
        ecx = 0x804844d;
        eax = 0;
        edx = 4;
        ebx = 2;
        eax = 3;
        eax = sys_read (0x2, 0xea, 0x4);
        eax = *(ecx);
        ebx = 0x804804c;
label_0:
        if (eax == *(ebx)) {
            goto label_3;
        }
        ebx += 8;
    } while (ebx == fcn.080480a4);
    goto label_0;
label_3:
    ecx = *(0x8048459);
    edx = *(0x8048455);
    ebp = *(0x80483fd);
    uint32_t (*ebx + 4)() ();
    *(0x8048459) = ecx;
    *(0x8048455) = edx;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/less/ia32_elf/subject.exe @ 0x80480a4 */
#include <stdint.h>
 
void fcn_080480a4 (void) {
    edx = 1;
    ecx = 0x8048394;
    ebx = 1;
    eax = 4;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/less/ia32_elf/subject.exe @ 0x8048289 */
#include <stdint.h>
 
void fcn_08048289 (void) {
    __asm ("pushal");
label_0:
    edx = 0;
    dh = 0x20;
    eax = 3;
    eax = sys_read (0x80483a9, 0x804845d, edx);
    if (eax == 0) {
        goto label_1;
    }
    ebx += ebp;
    eax = 0x2d;
    eax = sys_brk (0xea);
    esi = 0x804845d;
    edi = ebp;
    ecx = 0x2d;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    eax = 0x2d;
    if (edx == eax) {
        goto label_0;
    }
label_1:
    *(0x8048451) = ebp;
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/less/ia32_elf/subject.exe @ 0x80482d0 */
#include <stdint.h>
 
void fcn_080482d0 (void) {
    __asm ("pushal");
    esi = 0x804a45d;
    ebp = *(0x8048451);
    ecx = *(0x8048451);
    ecx -= esi;
    edx = 0;
    edi = ebp;
    do {
        al = *(esi);
        esi++;
        if (al != 0xa) {
            if (al == 9) {
                edx |= 7;
            }
            edx++;
            if (dx < *(0x80483ff)) {
                goto label_0;
            }
        }
        ebp += 4;
        if (edi <= ebp) {
            edi += 0x400;
            eax = 0x2d;
            eax = sys_brk (0xed);
        }
        *(ebp) = esi;
        *(0x8048455)++;
        edx = 0;
label_0:
        __asm ("loop 0x80482e5");
    } while (1);
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/less/ia32_elf/subject.exe @ 0x804831e */
#include <stdint.h>
 
int32_t fcn_0804831e (void) {
    ebp = *(0x8048451);
    edx = *(0x8048459);
    eax = *(0x8048455);
    eax -= edx;
    ecx = eax;
    edx <<= 2;
    ebp += edx;
    ebx = *(0x80483fd);
    if (eax <= ebx) {
        goto label_0;
    }
    ecx = ebx;
    do {
label_0:
        ecx = *(ebp);
        edx = *((ebp + 4));
        edx -= ecx;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, ecx, edx);
        edx = 4;
        edx--;
        if (*(edx) != 0xa) {
            fcn_080480a4 ();
        }
        ebp += 4;
        __asm ("loop 0x8048345");
    } while (1);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/less/ia32_elf/subject.exe @ 0x804836c */
#include <stdint.h>
 
int32_t fcn_0804836c (int32_t arg_14h) {
    ebx = 0xa;
    ecx = 0;
    if (eax != 0) {
        goto label_0;
    }
    ecx++;
    goto label_1;
    do {
label_0:
        if (eax == 0) {
            goto label_1;
        }
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl |= 0x30;
        ecx++;
    } while (1);
label_1:
    edx = ecx;
    do {
        eax = edx;
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x804838b");
    } while (1);
    *((esp + 0x14)) = edx;
    return eax;
}

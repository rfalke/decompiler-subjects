/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/telnet/ia32_elf/subject.exe @ 0x804809d */
#include <stdint.h>
 
void entry0 (void) {
    fcn_080482c1 ();
    ebx--;
    if (ebx == 0) {
        edx = 0x18;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804806f, 0x18);
        eax = 0;
label_0:
        eax |= eax;
        if (eax != 0) {
            if (eax != 0xffffff91) {
                goto label_5;
            }
            edx = 0x16;
            ebx = 1;
            eax = 4;
            eax = sys_write (0x1, 0x8048087, 0x16);
        }
label_5:
        fcn_080482f3 ();
        eax = 6;
        eax = sys_close (0xeb);
        ebx = 0;
        eax = 1;
        eax = sys_exit (ebx);
    }
    ebx = 1;
    esi = 1;
    edi = 0x8048315;
    eax = fcn_0804829f ();
    bl = 0x17;
    esi |= esi;
    if (esi == 0) {
        goto label_6;
    }
    ebx = 0;
    eax = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_6;
        }
        if (al > 9) {
            goto label_6;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_6:
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
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804804c, 0x23);
    do {
label_2:
        *(0x8048305) = ebp;
        ax = 3;
        *(0x8048309) = ax;
        *(0x804830d) = 0;
        *(0x8048311) = ax;
        edx = 0xea60;
        ecx = 2;
        ebx = 0x8048305;
        eax = 0;
        al = 0xa8;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        if ((*(0x804830b) & 3) != 0) {
            goto label_7;
        }
        if ((*(0x8048313) & 3) != 0) {
            goto label_8;
        }
    } while (1);
label_8:
    edx = 0;
    dh = 4;
    ebx = 0;
    eax = 3;
    eax = sys_read (ebx, 0x8048349, edx);
    eax = 4;
    eax = sys_write (0xeb, 0x8048349, 0xea);
    goto label_2;
label_7:
    esi = 0x8048349;
    edx = 0;
    dh = 4;
    eax = 3;
    eax = sys_read (0xeb, 0xe, edx);
    eax |= eax;
    if (eax == 0) {
        goto label_0;
    }
    edx = eax;
    edi = esi;
    edi += eax;
    if (*(esi) == 0xff) {
        goto label_4;
    }
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0xea);
    goto label_2;
    do {
label_3:
        al = *(esi);
        esi++;
label_4:
        if (esi == edi) {
            goto label_9;
        }
        al = *(esi);
        esi++;
        if (al != 0xff) {
            goto label_10;
        }
        al = *(esi);
        esi++;
    } while (al == 0xfe);
    if (al == 0xfb) {
        goto label_3;
    }
    if (al == 0xfc) {
        goto label_3;
    }
    if (al != 0xfd) {
        goto label_4;
    }
    al = *(esi);
    esi++;
    al = 0xfc;
    if (al == 8) {
        al = 0xfb;
    }
    *((esi - 2)) = al;
    goto label_4;
label_9:
    eax = 4;
    eax = sys_write (0xeb, 0x8048349, edx);
    goto label_2;
label_10:
    esi -= 0x8048349;
    esi--;
    eax = 4;
    eax = sys_write (0xeb, 0x8048349, 0xe);
    ebx = 4;
    edx = 4;
    esi = 4;
    edx -= ebx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, edx);
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/telnet/ia32_elf/subject.exe @ 0x80482c1 */
#include <stdint.h>
 
int32_t fcn_080482c1 (void) {
    edx = 0x8048325;
    ecx = 0x5401;
    ebx = 0;
    eax = 0x36;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax = *(0x8048331);
    eax &= 0xfffffff5;
    *(0x8048331) = eax;
    ebx = 0;
    eax = 0x36;
    eax = sys_ioctl (ebx, 0x5402, edx);
    0x8048331 = 0x36;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/telnet/ia32_elf/subject.exe @ 0x80482f3 */
#include <stdint.h>
 
void fcn_080482f3 (void) {
    edx = 0x8048325;
    ecx = 0x5402;
    ebx = 0;
    eax = 0x36;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/telnet/ia32_elf/subject.exe @ 0x804829f */
#include <stdint.h>
 
int32_t fcn_0804829f (void) {
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

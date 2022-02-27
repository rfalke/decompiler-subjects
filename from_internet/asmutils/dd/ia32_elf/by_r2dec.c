/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/dd/ia32_elf/subject.exe @ 0x8048082 */
#include <stdint.h>
 
int32_t entry0 (void) {
    edi = 0;
    eax = 1;
    eax--;
    eax = 1;
    if (eax == 0) {
        edx = 0x2d;
        eax = 4;
        eax = sys_write (0xeb, 0x804804c, 0x2d);
        ebx = 0;
        eax = 1;
        eax = sys_exit (ebx);
    }
    *(0x804836c) = 2;
    esi = 1;
    esi |= esi;
    if (esi == 0) {
        goto label_5;
    }
    if (*(esi) != 0x666f) {
        if (*(esi) != 0x6669) {
            edx = 0x8048367;
            if (*(esi) == 0x6e756f63) {
                goto label_6;
            }
            edx += 4;
            if (*(esi) == 0x7362) {
                goto label_6;
            }
            edx += 4;
            if (*(esi) == 0x70696b73) {
                goto label_6;
            }
            edx += 4;
            if (*(esi) == 0x6b656573) {
                goto label_6;
            }
            if (*(esi) == 0x766e6f63) {
                goto label_7;
            }
            return eax;
        }
        ecx = 0x8000;
        tmp_0 = ebp;
        ebp = edx;
        edx = tmp_0;
        void (*0x8048116)() ();
        tmp_1 = ebp;
        ebp = edi;
        edi = tmp_1;
        tmp_2 = ebp;
        ebp = edx;
        edx = tmp_2;
        return eax;
    }
    fcn_08048149 ();
    tmp_3 = esi;
    esi = ebx;
    ebx = tmp_3;
    eax = 5;
    eax = sys_open (ebx, 0x8041, 0x1a4);
    if (eax < 0) {
        goto label_2;
    }
    tmp_4 = eax;
    eax = ebp;
    ebp = tmp_4;
    return eax;
label_6:
    fcn_08048149 ();
    eax = fcn_0804832f ();
    *(edx) = eax;
    return eax;
label_7:
    esi += 5;
    if (*(esi) == 0x636e7973) {
        goto label_8;
    }
    if (*(esi) == 0x62617773) {
        goto label_9;
    }
    return eax;
    do {
label_2:
        ebx = 2;
        eax = 4;
        eax = sys_write (0x2, 0x8048079, 0x9);
        fcn_080482c8 ();
        ebx = 1;
        eax = 1;
        eax = sys_exit (0x1);
label_8:
        *(0x8048381) = 1;
        return eax;
label_9:
        *(0x8048382) = 1;
        return eax;
label_5:
        eax = *(0x804836b);
        eax += 0x804838b;
        eax = 0x2d;
        eax = sys_brk (0xea);
        eax = 0x2d;
        edx:eax = eax * *(0x804836f);
        ebx = edi;
        ecx = edx;
        edx = eax;
        esi = 0x8048383;
        edi = 0;
        eax = 0;
        al = 0x8c;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        eax |= eax;
        if (eax >= 0) {
            goto label_10;
        }
label_1:
        *(0x804836f)--;
        if (*(0x804836f) < 0) {
            goto label_10;
        }
label_0:
        eax = 3;
        eax = sys_read (0xe, 0x804838b, 0x804836b);
        eax |= eax;
    } while (eax <= 0);
    edx -= eax;
    if (edx != 0) {
        goto label_0;
    }
    goto label_1;
label_10:
    eax = *(0x804836b);
    edx:eax = eax * *(0x8048373);
    ebx = ebp;
    ecx = edx;
    edx = eax;
    eax = 0;
    al = 0x8c;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    edi = 3;
    esi = *(0x8048367);
label_4:
label_3:
    eax = 3;
    eax = sys_read (0xed, 0x804838b, 0x804836b);
    if (eax == 0) {
        goto label_11;
    }
    if (eax < 0) {
        goto label_2;
    }
    ecx += eax;
    edx -= eax;
    if (edx > 0) {
        goto label_3;
    }
    *(0x8048377)++;
    void (*0x80482a7)() ();
    edx -= ecx;
    eax = 4;
    eax = sys_write (0xeb, 0x804838b, 0xec);
    if (eax != edx) {
        goto label_2;
    }
    *(0x804837b)++;
    esi--;
    if (esi != 0) {
        goto label_4;
    }
    eax = 0;
label_11:
    if (edx != *(0x804836b)) {
        *(0x804837f)++;
        *(0x8048380)++;
        if (*(0x8048381) == 1) {
            eax = 0;
            edi = ecx;
            ecx = edx;
            *(es:edi) = al;
            ecx--;
            es:edi++;
            ecx = edi;
            *(0x8048380)--;
            *(0x804837b)++;
        }
        void (*0x80482a7)() ();
        edx -= ecx;
        eax = 4;
        eax = sys_write (0xeb, 0x804838b, 0xec);
    }
    eax = 6;
    eax = sys_close (0xed);
    eax = 6;
    eax = sys_close (0xeb);
    fcn_080482c8 ();
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    if ((*(0x8048382) & 1) == 0) {
        goto label_12;
    }
    __asm ("pushal");
    esi = 0x804838b;
    edi = 0x804838b;
    ecx -= esi;
    ecx |= ecx;
    if (ecx == 0) {
        goto label_13;
    }
    do {
        ax = *(esi);
        esi += 2;
        tmp_5 = ah;
        ah = al;
        al = tmp_5;
        *(es:edi) = ax;
        es:edi += 2;
        __asm ("loop 0x80482be");
    } while (1);
label_13:
    __asm ("popal");
label_12:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/dd/ia32_elf/subject.exe @ 0x8048149 */
#include <stdint.h>
 
int8_t fcn_08048149 (void) {
label_0:
    al = *(esi);
    esi++;
    al |= al;
    if (al == 0) {
        void (*0x804816a)() ();
    }
    if (al != 0x3d) {
        goto label_0;
    }
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/dd/ia32_elf/subject.exe @ 0x804832f */
#include <stdint.h>
 
int32_t fcn_0804832f (void) {
    eax = 0;
    ebx = 0;
    do {
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_0;
        }
        if (al > 0x39) {
            goto label_1;
        }
        al -= 0x30;
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_0:
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    return eax;
label_1:
    if (al == 0x77) {
        goto label_2;
    }
    if (al == 0x62) {
        goto label_3;
    }
    if (al == 0x6b) {
        goto label_4;
    }
    if (al != 0x6d) {
        void (*0x804816a)() ();
    }
    ebx <<= 0xa;
label_4:
    ebx <<= 1;
label_3:
    ebx <<= 8;
label_2:
    ebx <<= 1;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/dd/ia32_elf/subject.exe @ 0x80482c8 */
#include <stdint.h>
 
int32_t fcn_080482c8 (void) {
    edi = 0x804838b;
    eax = *(0x8048377);
    eax = fcn_08048318 ();
    eax = 0;
    ah = *(0x804837f);
    eax += 0x20302b;
    memset (edi, eax, ecx);
    eax = 0xa2c6e69;
    memset (edi, eax, ecx);
    eax = *(0x804837b);
    eax = fcn_08048318 ();
    eax = 0;
    ah = *(0x8048380);
    eax += 0x20302b;
    memset (edi, eax, ecx);
    eax = 0xa74756f;
    memset (edi, eax, ecx);
    edx -= ecx;
    ebx = 2;
    eax = 4;
    eax = sys_write (0x2, ecx, 0xed);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/dd/ia32_elf/subject.exe @ 0x8048318 */
#include <stdint.h>
 
uint32_t fcn_08048318 (void) {
    ebx = 0xa;
    ecx = 0;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl += 0x30;
        ecx++;
        eax |= eax;
    } while (eax != 0);
    do {
        eax = edx;
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x804832a");
    } while (1);
    return eax;
}

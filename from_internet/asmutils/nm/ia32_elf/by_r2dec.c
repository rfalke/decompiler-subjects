/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/nm/ia32_elf/subject.exe @ 0x8048097 */
#include <stdint.h>
 
int32_t entry0 (void) {
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    *(0x80483bf) = 0x8048165;
    if (*((esi - 3)) != 0x6d6e) {
        *(0x80483bf) = 0x8048274;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x8048065, 0x32);
        ecx = 4;
    }
    ecx--;
    *(0x80483af) = ecx;
    if (ecx != 0) {
        goto label_2;
    }
    do {
        *(0x80483b3) = ebx;
        ecx = 0;
        eax = 5;
        eax = sys_open (0x804804c, ecx, edx);
        eax |= eax;
        if (eax >= 0) {
            *(0x80483b7) = eax;
            edx = 2;
            ecx = 0;
            eax = 0x13;
            eax = sys_lseek (0xea, ecx, 0x2);
            ebp = 0;
            edi = *(0x80483b7);
            esi = 2;
            edx = 1;
            ecx = eax;
            ebx = 0;
            eax = 0;
            al = 0xc0;
            eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
            *(0x80483bb) = eax;
            uint32_t (*0x80483bf)(uint32_t, uint32_t, uint32_t, uint32_t) (1, 2, 0x13, 2);
            eax = 6;
            eax = sys_close (0x80483b7);
        } else {
            ebx = 1;
            eax = 4;
            eax = sys_write (0x1, 0x8048052, 0x13);
            edx = 0;
            fcn_0804822f ();
            *(0x80483c3)++;
        }
label_2:
        ebx |= ebx;
    } while (ebx != 0);
    eax = 1;
    eax = sys_exit (0x80483c3);
    if (*(0x80483af) >= 2) {
        fcn_08048260 ();
        dl = 0x3a;
        eax = fcn_0804822f ();
    }
    esi = eax;
    ecx = *((eax + 0x30));
    eax += *((eax + 0x20));
    eax -= 0x28;
    do {
label_1:
        eax += 0x28;
        ecx--;
        if (ecx == 0) {
            return eax;
        }
    } while (*((eax + 4)) != 2);
    *(0x80483c7) = eax;
    ebx = *((eax + 0x10));
    ecx = *((eax + 0x14));
    ecx >>= 4;
    ecx++;
    ebx += *(0x80483bb);
    ebx -= 0x10;
    do {
label_0:
        ecx--;
        if (ecx == 0) {
            goto label_3;
        }
        ebx += 0x10;
    } while (*(ebx) == 0);
    __asm ("pushal");
    edx = *((eax + 0x18));
    edx *= 0x28;
    eax = *(0x80483bb);
    eax += *((eax + 0x20));
    eax += edx;
    edx = *((eax + 0x10));
    edx += *(0x80483bb);
    edx += *(ebx);
    esi = edx;
    ecx = edx;
    ecx = *((ebx + 4));
    edi = 0x80483db;
    fcn_08048211 ();
    edx += 8;
    edi += edx;
    edi++;
    al = 0x20;
    do {
        *(es:edi) = al;
        es:edi++;
        al = *(esi);
        esi++;
        edx++;
        al |= al;
    } while (al != 0);
    al = 0xa;
    *(es:edi) = al;
    es:edi++;
    ecx -= edx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xed, edx);
    __asm ("popal");
    goto label_0;
label_3:
    ecx = 4;
    eax = 4;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/nm/ia32_elf/subject.exe @ 0x804822f */
#include <stdint.h>
 
int8_t fcn_0804822f (void) {
    __asm ("pushal");
    esi = *(0x80483b3);
    edi = *(0x80483b3);
    al = 0;
    ecx = 0;
    ecx--;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    dl |= dl;
    if (dl != 0) {
        edi--;
        al = dl;
        *(es:edi) = al;
        es:edi++;
    }
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0xec);
    al = 0;
    edi--;
    *(es:edi) = al;
    es:edi++;
    fcn_08048260 ();
    __asm ("popal");
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/nm/ia32_elf/subject.exe @ 0x8048260 */
#include <stdint.h>
 
void fcn_08048260 (void) {
    __asm ("pushal");
    edx = 1;
    ecx = 0x8048273;
    ebx = 1;
    eax = 4;
    eax = sys_write (ebx, ecx, edx);
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/nm/ia32_elf/subject.exe @ 0x8048211 */
#include <stdint.h>
 
int8_t fcn_08048211 (void) {
    __asm ("std");
    edi += 7;
    edx = 8;
    do {
        al = cl;
        al &= 0xf;
        al += 0x30;
        if (al > 0x39) {
            al += 0x27;
        }
        *(es:edi) = al;
        es:edi++;
        ecx >>= 4;
        edx--;
    } while (edx != 0);
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/nm/ia32_elf/subject.exe @ 0x804831c */
#include <stdint.h>
 
int32_t fcn_0804831c (void) {
    do {
label_0:
        ecx--;
        if (ecx < 0) {
            goto label_1;
        }
        edi += 0x28;
        eax = *((edi + 0x14));
        eax |= eax;
    } while (eax == 0);
    if (*((edi + 4)) != 8) {
        edx = *((edi + 8));
        if (*((edi + 8)) == 6) {
            goto label_2;
        }
        if (*((edi + 8)) == 3) {
            goto label_3;
        }
        goto label_0;
    }
    *(0x80483d7) += eax;
    goto label_0;
label_2:
    *(0x80483cf) += eax;
    goto label_0;
label_3:
    *(0x80483d3) += eax;
    goto label_0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/nm/ia32_elf/subject.exe @ 0x804837f */
#include <stdint.h>
 
int32_t fcn_0804837f (void) {
    ebx = 0xa;
    ecx = 7;
    eax |= eax;
    if (eax != 0) {
        goto label_0;
    }
    *((edi + ecx)) = 0x30;
    ecx--;
    goto label_1;
    do {
label_0:
        eax |= eax;
        if (eax == 0) {
            goto label_1;
        }
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl += 0x30;
        *((edi + ecx)) = dl;
        ecx--;
    } while (ecx != 0);
label_1:
    edi += ecx;
    ecx++;
    __asm ("std");
    al = 0x20;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/nm/ia32_elf/subject.exe @ 0x8048359 */
#include <stdint.h>
 
int8_t fcn_08048359 (void) {
    __asm ("std");
    edi += 7;
    edx = 7;
    do {
        al = cl;
        al &= 0xf;
        al += 0x30;
        if (al > 0x39) {
            al += 0x27;
        }
        *(es:edi) = al;
        es:edi++;
        ecx >>= 4;
        __asm ("jecxz 0x8048377");
        edx--;
    } while (edx != 0);
    ecx = edx;
    al = 0x20;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    return al;
}

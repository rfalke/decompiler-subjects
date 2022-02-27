/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/df/ia32_elf/subject.exe @ 0x80481bb */
#include <stdint.h>
 
int32_t entry0 (void) {
    esi |= esi;
    if (esi != 0) {
        if (*(esi) != 0x2d2d) {
            goto label_1;
        }
        if (*((esi + 2)) == 0x706c6568) {
            ecx = 0x804805a;
            edx = 0xd6;
            goto label_2;
        }
        if (*((esi + 2)) != 0x73726576) {
            goto label_3;
        }
        ecx = 0x8048130;
        edx = 0x13;
        goto label_2;
    }
label_1:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048143, 0x43);
    ecx = 0;
    eax = 5;
    eax = sys_open (0x8048050, ecx, edx);
    if (eax < 0) {
        ecx = 0x8048186;
        edx = 0x1e;
        goto label_2;
    }
    esi = 0x8048559;
    edx = 0;
    dh = 0x40;
    eax = 3;
    eax = sys_read (0xea, 0xe, edx);
    ecx = eax;
    if (eax < 0) {
        ecx = 0x80481a4;
        edx = 0x17;
        goto label_2;
label_0:
        al = 0xa;
        __asm ("repne scasb al, byte es:[edi]");
        esi = edi;
        ecx |= ecx;
        if (ecx == 0) {
            goto label_3;
        }
    }
    al = 0x20;
    edi = 0x804851c;
    do {
        ecx |= ecx;
        if (ecx == 0) {
            goto label_3;
        }
        ecx--;
        *(es:edi) = *(esi);
        esi++;
        es:edi++;
    } while (al != *(esi));
    *(edi) = 0;
    esi++;
    ecx--;
    edi = 0x804853a;
    do {
        ecx |= ecx;
        if (ecx == 0) {
            eax = 1;
            eax = sys_exit (ebx);
        }
        ecx--;
        *(es:edi) = *(esi);
        esi++;
        es:edi++;
    } while (al != *(esi));
    *(edi) = 0;
    eax = 0x63;
    eax = sys_statfs (0x804853a, 0x80484d5);
    edi = 0x804851c;
    fcn_080484b9 ();
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xed, edx);
    edx = 0;
    eax = *(0x80484dd);
    edx:eax = eax * *(0x80484d9);
    eax = *(edx:eax) / 0x804804c;
    edx = *(edx:eax) % 0x804804c;
    edi = 0x8048511;
    fcn_08048491 ();
    ecx = 0x1e;
    cl -= *(0x804851b);
    cl -= dl;
    edi = 0x804851c;
    fcn_080484c9 ();
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804851c, 0xec);
    edx = 0;
    dl = *(0x804851b);
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048511, edx);
    eax = *(0x80484dd);
    eax -= *(0x80484e1);
    edx:eax = eax * *(0x80484d9);
    eax = *(edx:eax) / 0x804804c;
    edx = *(edx:eax) % 0x804804c;
    edi = 0x8048511;
    fcn_08048491 ();
    ecx = 0xa;
    cl -= *(0x804851b);
    edi = 0x804851c;
    fcn_080484c9 ();
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804851c, 0xec);
    edx = 0;
    dl = *(0x804851b);
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048511, edx);
    eax = *(0x80484e5);
    edx:eax = eax * *(0x80484d9);
    eax = *(edx:eax) / 0x804804c;
    edx = *(edx:eax) % 0x804804c;
    edi = 0x8048511;
    fcn_08048491 ();
    ecx = 0xa;
    cl -= *(0x804851b);
    edi = 0x804851c;
    fcn_080484c9 ();
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804851c, 0xec);
    edx = 0;
    dl = *(0x804851b);
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048511, edx);
    eax = *(0x80484dd);
    eax |= eax;
    if (eax == 0) {
        *(0x804851b) = 1;
        *(0x8048511) = 0x202d;
    } else {
        eax -= *(0x80484e5);
        ebx = 0x64;
        edx:eax = eax * ebx;
        eax = *(edx:eax) / 0x80484dd;
        edx = *(edx:eax) % 0x80484dd;
        ecx = *(0x80484dd);
        ecx >>= 1;
        if (edx >= ecx) {
            eax++;
        }
        edi = 0x8048511;
        fcn_08048491 ();
        edi += *(0x804851b);
        *(edi) = 0x25;
    }
    ecx = 4;
    cl -= *(0x804851b);
    edi = 0x804851c;
    fcn_080484c9 ();
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804851c, 0xec);
    edx = 0;
    dl = *(0x804851b);
    dl++;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048511, edx);
    edx = 1;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804851c, 0x1);
    edi = 0x804853a;
    fcn_080484b9 ();
    *((edi + edx)) = 0xa;
    edx++;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804853a, edx);
    edi = 4;
    ecx = 4;
    goto label_0;
label_2:
    ebx = 2;
    eax = 4;
    eax = sys_write (0x2, ecx, edx);
label_3:
    eax = 1;
    eax = sys_exit (ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/df/ia32_elf/subject.exe @ 0x80484b9 */
#include <stdint.h>
 
void fcn_080484b9 (void) {
    edx = edi;
    edi--;
    do {
        edi++;
    } while (*(edi) != 0);
    tmp_0 = edi;
    edi = edx;
    edx = tmp_0;
    edx -= edi;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/df/ia32_elf/subject.exe @ 0x8048491 */
#include <stdint.h>
 
uint32_t fcn_08048491 (void) {
    __asm ("pushal");
    ebx = 0xa;
    esi = 0;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        eax = fcn_08048484 ();
        esi++;
    } while (eax != 0);
    *(0x804851b) = esi;
    do {
        eax = edx;
        *(es:edi) = al;
        es:edi++;
        esi--;
    } while (esi != 0);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/df/ia32_elf/subject.exe @ 0x8048484 */
#include <stdint.h>
 
void fcn_08048484 (void) {
    if (dl >= 0xa) {
        dl += 0x37;
        return;
    }
    dl |= 0x30;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/df/ia32_elf/subject.exe @ 0x80484c9 */
#include <stdint.h>
 
int8_t fcn_080484c9 (void) {
    al = 0x20;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    ecx = edi;
    eax = edi;
    return al;
}

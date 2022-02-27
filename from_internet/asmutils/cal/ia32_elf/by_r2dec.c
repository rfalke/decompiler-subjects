/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cal/ia32_elf/subject.exe @ 0x8048158 */
#include <stdint.h>
 
int32_t entry0 (void) {
    if (esi == 3) {
        fcn_080482ec ();
        ebx = edx;
        ebx--;
        fcn_080482ec ();
        edx -= 0x7b2;
        eax = 0x1e13380;
        edx:eax = eax * edx;
        ecx = eax;
        dx = *((ebx + ebx + 0x804804c));
        edx += 0x14;
        eax = 0x15180;
        edx:eax = eax * edx;
        eax += ecx;
        *(0x8048301) = eax;
    } else {
        eax = 0x4e;
        eax = sys_gettimeofday (0x8048301, ecx);
    }
    eax = *(0x8048301);
    eax += 0xffffb9b0;
    ecx = 0x15180;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    edi = eax;
    esi = edx;
    eax += 4;
    ecx = 7;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    *(0x8048321) = edx;
    eax = edi;
    ecx = 0x16d;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    esi = eax;
    esi += 0x7b2;
    *(0x804831d) = esi;
    ebx = edx;
    eax += 2;
    ecx = 4;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    ebx -= eax;
    eax = esi;
    esi = 0x804804c;
    edx |= edx;
    if (edx == 0) {
        ebx++;
        esi += 0x1a;
        *(0x8048335) = 1;
    }
    ecx = 0xc;
    esi += 0x16;
    __asm ("std");
    do {
        ax = *(esi);
        esi += 2;
        if (bx > ax) {
            goto label_1;
        }
        __asm ("loop 0x8048210");
    } while (1);
label_1:
    ecx--;
    *(0x8048319) = ecx;
    bx -= ax;
    ebx++;
    *(0x8048315) = ebx;
    esi = 0x8048080;
    ecx = *(0x8048319);
    ecx++;
    eax = *(esi);
    ecx--;
    esi += 4;
    edi = 0x80480b0;
    edi += 6;
    memset (edi, eax, ecx);
    eax = *(0x804831d);
    edi += 3;
    ebx = 3;
    void (*0x80482d0)() ();
    eax = *(0x8048315);
    ecx = 7;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    edx--;
    ecx = *(0x8048321);
    ecx -= edx;
    ecx |= ecx;
    if (ecx < 0) {
        ecx += 7;
    }
    ecx++;
    edi = 0x80480da;
    edi--;
    edi--;
    do {
        edi += 3;
        __asm ("loop 0x8048276");
    } while (1);
    esi = 0x804804c;
    eax = *(0x8048335);
    if (eax == 1) {
        esi += 0x1a;
    }
    ecx = *(0x8048319);
    eax = 0;
    edx = 0;
    ax = *(esi);
    esi += 2;
    tmp_0 = eax;
    eax = edx;
    edx = tmp_0;
    ecx++;
    do {
        ax = *(esi);
        esi += 2;
        tmp_1 = eax;
        eax = edx;
        edx = tmp_1;
        __asm ("loop 0x804829b");
    } while (1);
    edx -= eax;
    edx++;
    ecx = edx;
    ecx--;
    ebx = 1;
    do {
        eax = edx;
        eax -= ecx;
        void (*0x80482d0)() ();
        edi += 3;
        __asm ("loop 0x80482a9");
    } while (1);
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80480b0, 0xa8);
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    __asm ("pushal");
    __asm ("std");
    ecx = ebx;
    ebx = 0xa;
    do {
label_0:
        edx = 0;
    } while (ecx != 0);
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    tmp_2 = eax;
    eax = edx;
    edx = tmp_2;
    al += 0x30;
    *(es:edi) = al;
    es:edi++;
    tmp_3 = eax;
    eax = edx;
    edx = tmp_3;
    __asm ("loop 0x80482d7");
    goto label_0;
    if (eax != 0) {
        al += 0x30;
        *(es:edi) = al;
        es:edi++;
    }
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cal/ia32_elf/subject.exe @ 0x80482ec */
#include <stdint.h>
 
int32_t fcn_080482ec (void) {
    eax = 0;
    edx = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_0;
        }
        edx += edx;
        edx *= 5;
        edx += eax;
    } while (1);
label_0:
    return eax;
}

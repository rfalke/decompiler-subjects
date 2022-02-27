/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/idea/ia32_elf/subject.exe @ 0x804824e */
#include <stdint.h>
 
void entry0 (void) {
    esi |= esi;
    if (esi == 0) {
        goto label_0;
    }
    al = *(esi);
    esi++;
    if (al != 0x65) {
        if (al != 0x64) {
            goto label_0;
        }
    }
    *(0x80483cf) = al;
    esi |= esi;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0x80482ef;
    ecx = 0x10;
    do {
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_1;
        }
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x8048271");
    } while (1);
label_1:
    esi = edi;
    edi = esi + 0x10;
    fcn_0804809c ();
    if (*(0x80483cf) != 0x65) {
        esi = edi;
        edi += 0x68;
        eax = fcn_080480e3 ();
    }
    eax = 0;
    __asm ("jecxz 0x80482b1");
    while (eax >= 0) {
        eax = ecx;
        eax |= eax;
        if (eax == 0) {
            goto label_2;
        }
        ecx = 0;
        eax = 5;
        eax = sys_open (0xea, ecx, edx);
        eax |= eax;
        if (eax < 0) {
            goto label_2;
        }
        tmp_0 = eax;
        eax = edi;
        edi = tmp_0;
        esi = ebp;
        eax = fcn_0804820a ();
        eax |= eax;
    }
    goto label_2;
label_0:
    edx = 0x19;
    ebx = 2;
    eax = 4;
    eax = sys_write (0x2, 0x80482d6, 0x19);
label_2:
    eax = 1;
    eax = sys_exit (0xea);
    al &= 0x20;
    esp = *((ebp + 0x61)) * 0x642f6520;
    *((ebx + 0x65)) &= ch;
    if (*((ebx + 0x65)) < 0) {
        bp = *((ebp + 0x28)) * 0x2973;
        al |= *(eax);
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
    }
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    bh += bh;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/idea/ia32_elf/subject.exe @ 0x8048077 */
#include <stdint.h>
 
int32_t fcn_08048077 (void) {
    eax &= 0xffff;
    eax |= eax;
    if (eax == 0) {
        goto label_0;
    }
    ecx = 0;
    cx--;
    ebx = ecx + 2;
    do {
        edx = 0;
        edx:eax = eax * ecx;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        edx--;
        if (edx == 0) {
            goto label_1;
        }
        __asm ("loop 0x804808a");
    } while (1);
label_1:
    tmp_0 = eax;
    eax = ecx;
    ecx = tmp_0;
    edx = eax;
    ecx = eax;
    ebx = eax;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/idea/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t fcn_0804804c (void) {
    eax |= eax;
    if (eax != 0) {
        bx |= bx;
        if (bx == 0) {
            goto label_0;
        }
        edx = 0;
        dx:ax = ax * bx;
        edx <<= 0x10;
        tmp_0 = ax;
        ax = dx;
        dx = tmp_0;
        tmp_1 = eax;
        eax = edx;
        edx = tmp_1;
        ebx = 0x10001;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        tmp_2 = ax;
        ax = dx;
        dx = tmp_2;
        edx = ebx;
        return eax;
    }
    ax = bx;
label_0:
    ax = -ax;
    ax++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/idea/ia32_elf/subject.exe @ 0x804816c */
#include <stdint.h>
 
void fcn_0804816c (void) {
    __asm ("pushal");
    cx = *(edi);
    dx = *((edi + 2));
    bp = *((edi + 4));
    di = *((edi + 6));
    eax = 8;
    do {
        ax = *(esi);
        esi += 2;
        bx = cx;
        ax = fcn_0804804c ();
        tmp_0 = ax;
        ax = cx;
        cx = tmp_0;
        ax = *(esi);
        esi += 2;
        dx += ax;
        ax = *(esi);
        esi += 2;
        bp += ax;
        ax = *(esi);
        esi += 2;
        bx = di;
        ax = fcn_0804804c ();
        tmp_1 = ax;
        ax = di;
        di = tmp_1;
        bx = bp;
        bx ^= cx;
        ax = *(esi);
        esi += 2;
        eax = fcn_0804804c ();
        bx = di;
        bx ^= dx;
        bx += ax;
        ax = *(esi);
        esi += 2;
        ax = fcn_0804804c ();
        bx += ax;
        cx ^= ax;
        bp ^= ax;
        dx ^= bx;
        di ^= bx;
        tmp_2 = dx;
        dx = bp;
        bp = tmp_2;
        eax--;
    } while (eax != 0);
    bx = cx;
    ax = *(esi);
    esi += 2;
    ax = fcn_0804804c ();
    tmp_3 = ax;
    ax = cx;
    cx = tmp_3;
    ax = *(esi);
    esi += 2;
    bp += ax;
    ax = *(esi);
    esi += 2;
    dx += ax;
    bx = di;
    ax = *(esi);
    esi += 2;
    ax = fcn_0804804c ();
    *(edi) = cx;
    *((edi + 2)) = bp;
    *((edi + 4)) = dx;
    *((edi + 6)) = ax;
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/idea/ia32_elf/subject.exe @ 0x804809c */
#include <stdint.h>
 
int32_t fcn_0804809c (void) {
    __asm ("pushal");
    ecx = 8;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 2;
        es:edi += 2;
    } while (ecx != 0);
    esi = 8;
    ecx++;
    ebx = 0;
    do {
        ecx &= 7;
        edx = ebx + ecx;
        ax = *((esi + edx*2));
        ecx++;
        ecx &= 7;
        edx = ebx + ecx;
        dx = *((esi + edx*2));
        ax <<= 9;
        dx >>= 7;
        ax |= dx;
        *(es:edi) = ax;
        es:edi += 2;
        eax = ecx;
        eax &= 7;
        al--;
        al = (al < 0) ? 1 : 0;
        eax <<= 3;
        ebx += eax;
        ecx++;
    } while (ecx <= 0x2c);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/idea/ia32_elf/subject.exe @ 0x80480e3 */
#include <stdint.h>
 
int32_t fcn_080480e3 (void) {
    __asm ("pushal");
    eax = 0;
    ax = *((esi + 0x60));
    ax = fcn_08048077 ();
    *(es:edi) = ax;
    es:edi += 2;
    ax = *((esi + 0x62));
    ax = -ax;
    *(es:edi) = ax;
    es:edi += 2;
    ax = *((esi + 0x64));
    ax = -ax;
    *(es:edi) = ax;
    es:edi += 2;
    ax = *((esi + 0x66));
    ax = fcn_08048077 ();
    *(es:edi) = ax;
    es:edi += 2;
    ecx = 0x2a;
    do {
        eax = *((esi + ecx*2 + 8));
        memset (edi, eax, ecx);
        ax = *((esi + ecx*2));
        ax = fcn_08048077 ();
        *(es:edi) = ax;
        es:edi += 2;
        ax = *((esi + ecx*2 + 4));
        ax = -ax;
        *(es:edi) = ax;
        es:edi += 2;
        ax = *((esi + ecx*2 + 2));
        ax = -ax;
        *(es:edi) = ax;
        es:edi += 2;
        ax = *((esi + ecx*2 + 6));
        ax = fcn_08048077 ();
        *(es:edi) = ax;
        es:edi += 2;
        ecx -= 6;
    } while (ecx != 0);
    eax = *((esi + 8));
    memset (edi, eax, ecx);
    ax = *(esi);
    esi += 2;
    ax = fcn_08048077 ();
    *(es:edi) = ax;
    es:edi += 2;
    ax = *(esi);
    esi += 2;
    ax = -ax;
    *(es:edi) = ax;
    es:edi += 2;
    ax = *(esi);
    esi += 2;
    ax = -ax;
    *(es:edi) = ax;
    es:edi += 2;
    ax = *(esi);
    esi += 2;
    ax = fcn_08048077 ();
    *(es:edi) = ax;
    es:edi += 2;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/idea/ia32_elf/subject.exe @ 0x804820a */
#include <stdint.h>
 
int32_t fcn_0804820a (void) {
    int32_t var_4h;
label_0:
    eax = 7;
    do {
        *((esp + eax)) = 0x2a;
        eax--;
    } while (eax >= 0);
    edx = 8;
    do {
        eax = 3;
        eax = sys_read (0xed, 0xe, 0x8);
        ecx += eax;
        edx -= eax;
        eax |= eax;
        if (eax < 0) {
            goto label_1;
        }
    } while (eax != 0);
    if (edx != 8) {
        edi = esp + 4;
        fcn_0804816c ();
        edx = 8;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0xed, 0x8);
        edi = 4;
        goto label_0;
    }
label_1:
    ecx = 4;
    ecx = 4;
    return eax;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x8048004 */
#include <stdint.h>
 
void entry0 (void) {
    ebx = 0;
    eax = sys_brk (ebx);
    eax += 0x4c4b40;
    eax = sys_brk (0xea);
    ecx = 0xf4240;
    edi = 0x8049b91;
    eax = 0;
    memset (edi, eax, ecx);
    fcn_080480b7 ();
    al = 5;
    fcn_080480c1 ();
    eax = fcn_080480cb ();
    *(0x8048c28) = eax;
    __asm ("wait");
    __asm ("fninit");
    fcn_08048588 ();
    esi = 0x804927b;
    edi = 0x827b765;
    fcn_0804875f ();
    esi = 0x8048d0b;
    edi = 0x828b765;
    fcn_0804875f ();
    fcn_080488fd ();
    eax = sys_open (0x8048c30, 0x1, edx);
    *(0x8048c39) = eax;
    esi = 0x80499eb;
    edi = *(0x8048c2c);
    ecx = 1;
label_0:
    ecx--;
    if (ecx == 0) {
        ax = *(esi);
        esi += 2;
        ecx = (int32_t) ax;
        eax = *(esi);
        esi += 4;
        *(0x80499e7) = eax;
        eax = *(esi);
        esi += 4;
        *(0x80499e3) = eax;
    }
    *(0x8088695) = ecx;
    __asm ("pushal");
    uint32_t (*0x80499e7)() ();
    fcn_08048297 ();
    fcn_0804827e ();
    uint32_t (*0x80499e3)() ();
    ecx = 0x3e80;
    edi = *(0x8048c28);
    esi = *(0x8048c2c);
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    __asm ("popal");
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x80480b7 */
#include <stdint.h>
 
void fcn_080480b7 (void) {
    uint32_t (*0x8048143)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x80480c1 */
#include <stdint.h>
 
void fcn_080480c1 (void) {
    uint32_t (*0x8048147)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x80480cb */
#include <stdint.h>
 
void fcn_080480cb (void) {
    uint32_t (*0x804814b)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x8048588 */
#include <stdint.h>
 
int32_t fcn_08048588 (void) {
    ebx = 0x10000;
    do {
        *(fp_stack--) = pi;
        fp_stack[0] *= *(0x8088699);
        fp_stack[0] /= *(0x8048c41);
        fp_stack[0] = sin(fp_stack[0]);
        fp_stack[0] *= *(0x8048c45);
        *(0x808869d) = fp_stack[0];
        fp_stack--;
        eax = *(0x808869d);
        *((ebx*4 + 0x823b765)) = eax;
        *(0x8088699)++;
        ebx--;
    } while (ebx >= 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x804875f */
#include <stdint.h>
 
int8_t fcn_0804875f (void) {
    dh = 0x2a;
label_1:
    dl = 0x20;
label_0:
    al = *(esi);
    esi++;
    bl = al;
    al &= 0xf;
    bl >>= 4;
    bh = 6;
    do {
        tmp_0 = al;
        al = bl;
        bl = tmp_0;
        *(es:edi) = al;
        es:edi++;
        *(es:edi) = al;
        es:edi++;
        *(es:edi) = al;
        es:edi++;
        *(es:edi) = al;
        es:edi++;
        tmp_1 = al;
        al = bl;
        bl = tmp_1;
        *(es:edi) = al;
        es:edi++;
        *(es:edi) = al;
        es:edi++;
        *(es:edi) = al;
        es:edi++;
        *(es:edi) = al;
        es:edi++;
        edi += 0xf8;
        bh--;
    } while (bh != 0);
    edi -= 0x5f8;
    dl--;
    if (dl != 0) {
        goto label_0;
    }
    edi += 0x500;
    dh--;
    if (dh != 0) {
        goto label_1;
    }
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x80488fd */
#include <stdint.h>
 
int16_t fcn_080488fd (void) {
    edi = 0x8088765;
    esi = edi + 0x7c0;
    ecx = 0x20;
label_0:
    edx = ecx;
    edx <<= 1;
    ebx = 0;
    ecx = 0x40;
    do {
        al = 0;
        if (ecx >= edx) {
            al = 1;
        }
        *((edi + ebx + 0x1000)) = al;
        *((esi + ebx + 0x1800)) = al;
        *((edi + ecx - 1)) = al;
        *((esi + ecx + 0x7ff)) = al;
        ebx++;
        ecx--;
    } while (ecx != 0);
    edi += 0x40;
    esi -= 0x40;
    __asm ("loop 0x804890d");
    goto label_0;
    edi += 0x1800;
    ecx++;
    ecx <<= 0xb;
    al = 1;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    al--;
    ecx++;
    ecx <<= 0xb;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    edi = 0x808b765;
    esi = 0x8048c69;
    cl = 0x1b;
label_3:
    __asm ("pushal");
    edx = 3;
label_2:
    ax = *(esi);
    esi += 2;
    cl = 5;
label_1:
    ebx = eax;
    bl &= 7;
    __asm ("pushal");
    esi = 0x8088765;
    ebx &= 7;
    ebx <<= 0xb;
    esi += ebx;
    do {
        ebx = 0x20;
    } while (ecx != 0);
    do {
        ecx = 0x40;
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
        edi += 0xc0;
        ebx--;
    } while (ebx != 0);
    __asm ("popal");
    edi += 0x2000;
    ax >>= 3;
    cl--;
    if (cl != 0) {
        goto label_1;
    }
    edi -= 0x9fc0;
    edx--;
    if (edx != 0) {
        goto label_2;
    }
    __asm ("popal");
    edi += 0x10000;
    esi += 6;
    __asm ("loop 0x804896a");
    goto label_3;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x8048297 */
#include <stdint.h>
 
int32_t fcn_08048297 (void) {
    do {
        eax = sys_ioctl (0x8048c39, 0x8010500c, 0x80886a1);
        edx = 0x80886a1;
        eax = *(edx);
        if (eax == 0) {
            goto label_0;
        }
        edx = *((edx + 8));
        edi = 0x8049e95;
        ecx = edx;
        fcn_080489ea ();
        eax = sys_write (0x8048c39, 0x8049e95, 0xed);
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x804827e */
#include <stdint.h>
 
void fcn_0804827e (void) {
    dx = 0x3da;
    do {
        __asm ("in al, dx");
    } while ((al & 8) != 0);
    do {
        __asm ("in al, dx");
    } while ((al & 8) == 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x80489ea */
#include <stdint.h>
 
void fcn_080489ea (void) {
label_0:
    *(0x8049b31)++;
    eax = *(0x8049b35);
    ebx = *(eax);
    if (*(0x8049b31) == ebx) {
        *(0x8049b35) += 8;
        eax = *((eax + 4));
        void (*eax)() ();
    }
    edi = 0;
    if (*(0x8049b90) != 1) {
        goto label_1;
    }
    ebx = 0x80497ef;
    eax = *(ebx);
    eax--;
    *(ebx) = eax;
    if (eax != 0) {
        goto label_2;
    }
    *(ebx) = 0x4e9;
    ebx = 0x80497eb;
    edx = *(ebx);
    edx++;
    if (dl != 0xc0) {
        *(ebx) = edx;
    }
    edi = 0x808874d;
    bl = 4;
    do {
        eax = 0;
        if (bl == 4) {
            al = *((edx + 0x80497f3));
            edx >>= 1;
        } else {
            al = *((edx + 0x80498b3));
            edx += 0x60;
        }
        cl = al;
        cl >>= 3;
        al &= 7;
        if (al == 7) {
            __asm ("cmpsd dword [esi], dword ptr es:[edi]");
            __asm ("cmpsw word [esi], word ptr es:[edi]");
        } else {
            ax = *((eax*2 + 0x80499d3));
            eax <<= cl;
            *(es:edi) = ax;
            es:edi += 2;
            ax = 0x1388;
            if (bl == 4) {
                eax += 0x2710;
            }
            *(es:edi) = ax;
            es:edi += 2;
            __asm ("cmpsw word [esi], word ptr es:[edi]");
        }
        bl--;
    } while (bl != 0);
label_2:
    esi = 0x808874d;
    edi = 0;
    cl = 4;
    do {
        ax = *(esi);
        esi += 2;
        edx = (int32_t) ax;
        ax = *(esi);
        esi += 2;
        if (ax > 3) {
            ax -= 2;
            *((esi - 2)) = ax;
        }
        ebx = *(esi);
        bx += dx;
        *(esi) = bx;
        esi += 2;
        bx = *((ebx*4 + 0x823b765));
        dx:ax = ax * bx;
        edx = (int32_t) dx;
        edi += edx;
        cl--;
    } while (cl != 0);
    edi >>= 8;
label_1:
    eax = 0;
    if (*(0x8049b8d) == 1) {
        ebx = 0x2710;
        fcn_080483fc ();
        *(0x8049b23) += dx;
        edx = *(0x8049b23);
        eax = *((edx*4 + 0x823b765));
        *(0x8049b25) += 2;
        edx = *(0x8049b25);
        ebx = *((edx*4 + 0x823b765));
        eax >>= 4;
        ebx += 0x10000;
        edx:eax = eax * ebx;
        eax >>= 0x17;
    }
    if (*(0x8049b8e) == 1) {
        ebx = 0;
        if (*(0x8049b27) < 0xa) {
            goto label_3;
        }
        *(0x8049b27) -= 6;
        bx = *(0x8049b27);
        ebx++;
        fcn_080483fc ();
        edx >>= 0xc;
        edi += edx;
    }
label_3:
    eax += edi;
    if (*(0x8049b8f) == 1) {
        ebx = 0;
        *(0x8049b29) -= 0x11f704;
        ebx = *(0x8049b29);
        ebx >>= 0x10;
        ebx++;
        fcn_080483fc ();
        edx >>= 0xc;
        edi += edx;
    }
    eax += edi;
    al += 0x7f;
    *(es:edi) = al;
    es:edi++;
    edx--;
    if (edx != 0) {
        goto label_0;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x8048c00 */
#include <stdint.h>
 
int8_t fcn_08048c00 (void) {
    __asm ("pushal");
    edi = *(0x8048c2c);
    ecx = 0xfa00;
    al = 0;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    __asm ("popal");
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x80483fc */
#include <stdint.h>
 
int32_t fcn_080483fc (void) {
    eax = *(0x8048c3d);
    edx = 0x16c4e8d;
    edx:eax = eax * edx;
    eax += 0x16c5094;
    eax &= 0xffffff;
    *(0x8048c3d) = eax;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    ebx = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x804828d */
#include <stdint.h>
 
void fcn_0804828d (void) {
    dx = 0x3c8;
    __asm ("out dx, al");
    dx++;
    __asm ("rep outsb dx, byte [esi]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x8048897 */
#include <stdint.h>
 
int32_t fcn_08048897 (void) {
    do {
        eax = 0;
        al = *(esi);
        esi++;
        eax <<= 0x10;
        __asm ("pushal");
        esi = 0x808b765;
        esi += eax;
        ebx = 0x8088701;
        *(ebx) = edx;
        edx += 0x28;
        *((ebx + 8)) = edx;
        edx >>= 2;
        edx += *(0x8088695);
        edx <<= 0xa;
        edx &= 0xffff;
        edx = *((edx*4 + 0x823b765));
        edx >>= 0xb;
        edx += 0x14;
        *((ebx + 4)) = edx;
        edx <<= 1;
        edx += 0x20;
        *((ebx + 0xc)) = edx;
        *(0x8048c51) = 0xc000;
        *(0x8048c55) = 0xa000;
        fcn_0804841f ();
        __asm ("popal");
        edx += 0x2c;
        __asm ("loop fcn.08048897");
    } while (1);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_376/ia32_elf/subject.exe @ 0x804841f */
#include <stdint.h>
 
int32_t fcn_0804841f (void) {
    if (*(ebx) >= 0x13f) {
        goto label_1;
    }
    if (*((ebx + 4)) >= 0xc7) {
        goto label_1;
    }
    if (*((ebx + 8)) <= 0) {
        goto label_1;
    }
    if (*((ebx + 0xc)) <= 0) {
        goto label_1;
    }
    *(0x8088739) = esi;
    eax = *(0x8048c49);
    *(0x8088729) = ax;
    eax = *(0x8048c4d);
    *(0x808872d) = ax;
    eax = *(0x8048c51);
    eax -= *(0x8048c49);
    edx:eax = (int64_t) eax;
    ecx = *((ebx + 8));
    ecx -= *(ebx);
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    *(0x8088735) = ax;
    eax = *(0x8048c55);
    eax -= *(0x8048c4d);
    edx:eax = (int64_t) eax;
    ecx = *((ebx + 0xc));
    ecx -= *((ebx + 4));
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    *(0x8088731) = ax;
    if (*(ebx) < 0) {
        eax = *(ebx);
        dx:ax = ax * *(0x8088735);
        eax = -eax;
        *(0x8088729) = ax;
        *(ebx) = 0;
    }
    if (*((ebx + 4)) < 0) {
        eax = *((ebx + 4));
        dx:ax = ax * *(0x8088731);
        eax = -eax;
        *(0x808872d) = ax;
        *((ebx + 4)) = 0;
    }
    if (*((ebx + 8)) > 0x13f) {
        *((ebx + 8)) = 0x13f;
    }
    if (*((ebx + 0xc)) > 0xc7) {
        *((ebx + 0xc)) = 0xc8;
    }
    edi += *(ebx);
    eax = *((ebx + 4));
    eax <<= 6;
    eax *= 5;
    edi += eax;
    ecx = *((ebx + 8));
    ecx -= *(ebx);
    *(0x8088721) = ecx;
    ecx = *((ebx + 0xc));
    ecx -= *((ebx + 4));
    *(0x8088725) = ecx;
label_0:
    eax = 0;
    esi = *(0x8088739);
    ax = *(0x808872d);
    al = 0;
    esi += eax;
    bx = *(0x8088729);
    dx = *(0x8088735);
    ecx = *(0x8088721);
    do {
        edi++;
        ax = bx;
        ax >>= 8;
        al = *((esi + eax));
        if (al != *(0x8049adb)) {
            *(edi) = al;
        }
        bx += dx;
        __asm ("loop 0x8048542");
    } while (1);
    edi += 0x140;
    edi -= *(0x8088721);
    ax = *(0x8088731);
    *(0x808872d) += ax;
    __asm ("loop 0x804851b");
    goto label_0;
label_1:
    eax = 0;
    edi = 0x8048c49;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    eax++;
    eax <<= 0x10;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    return eax;
}

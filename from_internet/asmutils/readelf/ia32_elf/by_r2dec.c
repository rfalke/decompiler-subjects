/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readelf/ia32_elf/subject.exe @ 0x8048283 */
#include <stdint.h>
 
void entry0 (void) {
    while (*(eax) != 0x2d) {
        edx = 0x159;
        ecx = 0x804804c;
        eax = 4;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        goto label_0;
        eax = 4;
        eax = 4;
    }
    if (*((eax + 1)) == 0x48) {
        *(0x8049615)++;
    }
    if (*((eax + 1)) == 0x53) {
        *(0x8049616)++;
    }
    if (*((eax + 1)) == 0x50) {
        *(0x8049617)++;
    }
    if (*((eax + 1)) == 0x41) {
        *(0x8049617)++;
        *(0x8049616)++;
        *(0x8049615)++;
    }
    eax = 4;
    ecx = eax;
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    ecx = 0;
    eax = 5;
    eax = sys_open (ebx, ecx, edx);
    tmp_1 = eax;
    eax = ebx;
    ebx = tmp_1;
    *(0x8049618) = ebx;
    eax = 3;
    eax = sys_read (ebx, 0x804984b, 0x34);
    if (*(ecx) != 0x464c457f) {
        ecx = 3;
        eax = 6;
        eax = sys_close (ebx);
        edx = 0x4f;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x80481a5, 0x4f);
label_0:
        eax = 1;
        eax = sys_exit (0xea);
    }
    edx = 0xa;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048226, 0xa);
    ecx = 4;
    do {
        ecx++;
    } while (*(ecx) != 0);
    tmp_2 = ecx;
    ecx = edx;
    edx = tmp_2;
    edx -= ecx;
    eax = 4;
    eax = sys_write (ebx, ecx, 0xec);
    edx = 1;
    eax = 4;
    eax = sys_write (ebx, 0x80481f4, 0x1);
    if (*(0x8049615) != 0) {
        fcn_080487fb ();
    }
    if (*(0x8049616) != 0) {
        fcn_08048580 ();
    }
    if (*(0x8049617) != 0) {
        fcn_0804838d ();
    }
    eax = 6;
    eax = sys_close (0x8049618);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readelf/ia32_elf/subject.exe @ 0x80487fb */
#include <stdint.h>
 
int32_t fcn_080487fb (void) {
    __asm ("pushal");
    edx = 0xd;
    ecx = 0x80481f4;
    eax = 4;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    edx = 0xb;
    eax = 4;
    eax = sys_write (ebx, 0x80490bc, 0xb);
    ebp = 0;
    do {
        eax = 0;
        edi = 0x8049d18;
        al = *((ebp + 0x804984b));
        if (al <= 9) {
            *(0x8049d18) = 0x30;
            edi++;
        }
        __asm ("pushal");
        ecx = 0x10;
        fcn_08048d11 ();
        *(0x8049d23) = esi;
        __asm ("popal");
        *(0x8049d1a) = 0x20;
        eax = 4;
        eax = sys_write (ebx, 0x8049d18, 0x8049d23);
        ebp++;
    } while (ebp != 0x10);
    edx = 1;
    eax = 4;
    eax = sys_write (ebx, 0x80493b2, 0x1);
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x80490c7, 0x25);
    eax = 0;
    al = *(0x804984f);
    if (al != 1) {
        if (al != 2) {
            __asm ("pushal");
            ecx = 0x10;
            edi = 0x804961b;
            fcn_08048d11 ();
            *(0x8049d23) = esi;
            __asm ("popal");
            ecx = 0x8049619;
            edx = 0x25;
        } else {
            ecx = 0x80490ec;
            edx = 0x1b;
        } else {
        }
    }
    eax = 4;
    eax = sys_write (ebx, 0x8049107, 0x1b);
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x8049122, 0x25);
    eax = 0;
    al = *(0x8049850);
    if (al != 1) {
        if (al != 2) {
            __asm ("pushal");
            ecx = 0x10;
            edi = 0x8049640;
            fcn_08048d11 ();
            *(0x8049d23) = esi;
            __asm ("popal");
            ecx = 0x804963e;
            edx = 0x28;
        } else {
            ecx = 0x8049147;
            edx = 0x2a;
        } else {
        }
    }
    eax = 4;
    eax = sys_write (ebx, 0x8049171, 0x27);
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x8049198, 0x25);
    eax = 0;
    ax = *(0x804985b);
    ebp = 0;
    do {
        if (ax == *((ebp + 0x8048d79))) {
            ecx = 0x8048d7b;
            ecx += ebp;
            edx = 0x1f;
            goto label_0;
        }
        ebp += 0x21;
    } while (ebp != 0xe7);
    if (ax >= 0xff00) {
        if (ax <= 0xffff) {
            __asm ("pushal");
            ecx = 0x10;
            edi = 0x804968a;
            fcn_08048d11 ();
            *(0x8049d23) = esi;
            __asm ("popal");
            ecx = 0x8049688;
            edx = 0x1c;
        }
    } else {
        __asm ("pushal");
        ecx = 0x10;
        edi = 0x8049668;
        fcn_08048d11 ();
        *(0x8049d23) = esi;
        __asm ("popal");
    }
label_0:
    eax = 4;
    eax = sys_write (ebx, 0x8049666, 0x22);
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x80491bd, 0x25);
    eax = 0;
    ax = *(0x804985d);
    ebp = 0;
    do {
        if (ax == *((ebp + 0x8048e60))) {
            ecx = 0x8048e62;
            ecx += ebp;
            edx = 0x1e;
            goto label_1;
        }
        ebp += 0x20;
    } while (ebp != 0x240);
    __asm ("pushal");
    ecx = 0x10;
    edi = 0x80496a6;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
label_1:
    eax = 4;
    eax = sys_write (ebx, 0x80496a4, 0x1e);
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x80491e2, 0x25);
    eax = *(0x804985f);
    if (eax != 0) {
        if (eax != 1) {
            __asm ("pushal");
            ecx = 0x10;
            edi = 0x80496c4;
            fcn_08048d11 ();
            *(0x8049d23) = esi;
            __asm ("popal");
            ecx = 0x80496c2;
            edx = 0x18;
        } else {
            ecx = 0x8049224;
            edx = 0x1a;
        } else {
        }
    }
    eax = 4;
    eax = sys_write (ebx, 0x8049207, 0x1d);
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x804923e, 0x25);
    __asm ("pushal");
    eax = *(0x8049863);
    ecx = 0x10;
    edi = 0x80496dd;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    edx = 0xd;
    eax = 4;
    eax = sys_write (ebx, 0x80496db, 0xd);
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x8049263, 0x25);
    fcn_08048d00 ();
    __asm ("pushal");
    eax = *(0x8049867);
    ecx = 0xa;
    edi = 0x8049d18;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    fcn_08048cc6 ();
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x8049288, 0x25);
    fcn_08048d00 ();
    __asm ("pushal");
    eax = *(0x804986b);
    ecx = 0xa;
    edi = 0x8049d18;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    fcn_08048cc6 ();
    edx = 0x27;
    eax = 4;
    eax = sys_write (ebx, 0x80492ad, 0x27);
    fcn_08048d00 ();
    __asm ("pushal");
    eax = *(0x804986f);
    ecx = 0x10;
    edi = 0x8049d18;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    *(0x8049d23) = 0xa;
    eax = 4;
    eax = sys_write (ebx, 0x8049d18, 0x8049d23);
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x80492d4, 0x25);
    eax = 0;
    ax = *(0x8049873);
    fcn_08048d00 ();
    __asm ("pushal");
    ecx = 0xa;
    edi = 0x8049d18;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    fcn_08048ce3 ();
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x80492f9, 0x25);
    eax = 0;
    ax = *(0x8049875);
    fcn_08048d00 ();
    __asm ("pushal");
    ecx = 0xa;
    edi = 0x8049d18;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    fcn_08048ce3 ();
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x804931e, 0x25);
    eax = 0;
    ax = *(0x8049877);
    fcn_08048d00 ();
    __asm ("pushal");
    ecx = 0xa;
    edi = 0x8049d18;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    *(0x8049d23) = 0xa;
    eax = 4;
    eax = sys_write (ebx, 0x8049d18, 0x8049d23);
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x8049343, 0x25);
    eax = 0;
    ax = *(0x8049879);
    fcn_08048d00 ();
    __asm ("pushal");
    ecx = 0xa;
    edi = 0x8049d18;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    fcn_08048ce3 ();
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x8049368, 0x25);
    eax = 0;
    ax = *(0x804987b);
    fcn_08048d00 ();
    __asm ("pushal");
    ecx = 0xa;
    edi = 0x8049d18;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    *(0x8049d23) = 0xa;
    eax = 4;
    eax = sys_write (ebx, 0x8049d18, 0x8049d23);
    edx = 0x25;
    eax = 4;
    eax = sys_write (ebx, 0x804938d, 0x25);
    eax = 0;
    ax = *(0x804987d);
    fcn_08048d00 ();
    __asm ("pushal");
    ecx = 0xa;
    edi = 0x8049d18;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    *(0x8049d23) = 0xa;
    eax = 4;
    eax = sys_write (ebx, 0x8049d18, 0x8049d23);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readelf/ia32_elf/subject.exe @ 0x8048580 */
#include <stdint.h>
 
int32_t fcn_08048580 (void) {
    eax = 0;
    ax = *(0x804987b);
    if (ax == 0) {
        edx = 0x26;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x8048230, 0x26);
        return eax;
    }
    __asm ("pushal");
    ecx = 0xa;
    edi = 0x80497e6;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    __asm ("pushal");
    eax = *(0x804986b);
    ecx = 0x10;
    edi = 0x804980f;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    edx = 0x39;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80497db, 0x39);
    edx = 0x13;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048201, 0x13);
    edx = 0x51;
    eax = 4;
    eax = sys_write (ebx, 0x80496e8, 0x51);
    eax = 0x28;
    ebx = *(0x804987d);
    edx:eax = eax * ebx;
    eax += *(0x804986b);
    edx = 0;
    eax = 0x13;
    eax = sys_lseek (0x8049618, 0xea, edx);
    eax = 3;
    eax = sys_read (ebx, 0x804987f, 0x28);
    edx = 0;
    eax = 0x13;
    eax = sys_lseek (ebx, 0x804988f, edx);
    eax = 3;
    eax = sys_read (ebx, 0x8049918, 0x8049893);
    edx = 0;
    eax = 0x13;
    eax = sys_lseek (0x8049618, 0x804986b, edx);
    ecx = 0;
    do {
        eax = 3;
        eax = sys_read (0x8049618, 0x804987f, 0x28);
        ecx = 3;
        fcn_08048689 ();
        ecx++;
    } while (cx != *(0x804987b));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readelf/ia32_elf/subject.exe @ 0x8048d11 */
#include <stdint.h>
 
uint32_t fcn_08048d11 (void) {
    ebx = 0;
    do {
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        if (dl >= 0xa) {
            dl += 0x37;
        } else {
            dl += 0x30;
        }
        ebx++;
    } while (eax != 0);
    esi = ebx;
    do {
        eax = edx;
        *(es:edi) = al;
        es:edi++;
        ebx--;
    } while (ebx != 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readelf/ia32_elf/subject.exe @ 0x8048689 */
#include <stdint.h>
 
int32_t fcn_08048689 (void) {
    __asm ("pushal");
    edi = 0x804973c;
    if (cl <= 9) {
        edi++;
    }
    __asm ("pushal");
    eax = ecx;
    ecx = 0xa;
    eax = fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    eax = 0;
    edi = 0x804973f;
    al = 0x20;
    ecx = 0x4a;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    eax = 0x8049918;
    eax += *(0x804987f);
    esi = eax;
    edi = 0x8049740;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
    } while (al != 0);
    al = 0x20;
    edi--;
    *(es:edi) = al;
    es:edi++;
    ebp = 0;
    eax = *(0x8049883);
    do {
        if (eax == *((ebp + 0x80493b3))) {
            esi = 0x80493b7;
            esi += ebp;
            ecx = 0x11;
            edi = 0x8049752;
            *(es:edi) = *(esi);
            ecx--;
            esi++;
            es:edi++;
        } else {
            ebp += 0x15;
        }
    } while (ebp != 0x1a4);
    eax = *(0x804988b);
    ebx = 8;
    edi = 0x8049762;
    fcn_08048d34 ();
    eax = *(0x804988f);
    ebx = 6;
    edi = 0x804976b;
    fcn_08048d34 ();
    eax = *(0x8049893);
    edi = 0x8049772;
    fcn_08048d34 ();
    edi = 0x8049779;
    eax = *(0x80498a3);
    if (al <= 0xf) {
        *(edi) = 0x30;
        edi++;
    }
    __asm ("pushal");
    do {
        ecx = 0x10;
    } while (ecx != 0);
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    edi = 0x804977c;
    eax = *(0x8049887);
    if ((eax & 1) != 0) {
        *(edi) = 0x57;
    }
    edi++;
    if ((eax & 2) != 0) {
        *(edi) = 0x41;
    }
    edi++;
    if ((eax & 4) != 0) {
        *(edi) = 0x58;
    }
    edi = 0x8049780;
    eax = *(0x8049897);
    if (al <= 9) {
        edi++;
    }
    __asm ("pushal");
    ecx = 0xa;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    edi = 0x8049784;
    eax = *(0x804989b);
    if (al <= 0xf) {
        edi++;
    }
    __asm ("pushal");
    ecx = 0x10;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    __asm ("pushal");
    eax = *(0x804989f);
    ecx = 0xa;
    edi = 0x8049787;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    edx = 0x51;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8049739, 0x51);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readelf/ia32_elf/subject.exe @ 0x804838d */
#include <stdint.h>
 
int32_t fcn_0804838d (void) {
    eax = 0;
    ax = *(0x8049877);
    if (ax == 0) {
        edx = 0x2d;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x8048256, 0x2d);
        return eax;
    }
    __asm ("pushal");
    ecx = 0xa;
    edi = 0x804981f;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    __asm ("pushal");
    eax = *(0x8049867);
    ecx = 0x10;
    edi = 0x8049846;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    edx = 0x37;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8049814, 0x37);
    edx = 0x12;
    eax = 4;
    eax = sys_write (ebx, 0x8048214, 0x12);
    edx = 0x51;
    eax = 4;
    eax = sys_write (ebx, 0x804978a, 0x51);
    edx = 0;
    eax = 0x13;
    eax = sys_lseek (0x8049618, 0x8049867, edx);
    ecx = 0;
    do {
        eax = 3;
        eax = sys_read (0x8049618, 0x80498a7, 0x20);
        ecx = 3;
        fcn_08048445 ();
        ecx++;
    } while (cx != *(0x8049877));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readelf/ia32_elf/subject.exe @ 0x8048445 */
#include <stdint.h>
 
int32_t fcn_08048445 (void) {
    __asm ("pushal");
    eax = 0;
    edi = 0x80498c7;
    al = 0x20;
    ecx = 0x50;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    ebp = 0;
    eax = *(0x80498a7);
    do {
        if (eax == *((ebp + 0x8049557))) {
            esi = 0x804955b;
            esi += ebp;
            ecx = 0xf;
            edi = 0x80498c9;
            *(es:edi) = *(esi);
            ecx--;
            esi++;
            es:edi++;
        } else {
            ebp += 0x13;
        }
    } while (ebp != 0xbe);
    do {
        *(0x80498d8) = 0x7830;
    } while (ecx != 0);
    eax = *(0x80498ab);
    ebx = 6;
    edi = 0x80498da;
    fcn_08048d34 ();
    *(0x80498e1) = 0x7830;
    eax = *(0x80498af);
    ebx = 8;
    edi = 0x80498e3;
    fcn_08048d34 ();
    *(0x80498ec) = 0x7830;
    eax = *(0x80498b3);
    ebx = 8;
    edi = 0x80498ee;
    fcn_08048d34 ();
    *(0x80498f7) = 0x7830;
    eax = *(0x80498b7);
    ebx = 5;
    edi = 0x80498f9;
    fcn_08048d34 ();
    *(0x80498ff) = 0x7830;
    eax = *(0x80498bb);
    ebx = 5;
    edi = 0x8049901;
    fcn_08048d34 ();
    edi = 0x8049907;
    eax = *(0x80498bf);
    if ((eax & 4) != 0) {
        *(edi) = 0x52;
    }
    edi++;
    if ((eax & 2) != 0) {
        *(edi) = 0x57;
    }
    edi++;
    if ((eax & 1) != 0) {
        *(edi) = 0x58;
    }
    *(0x804990b) = 0x7830;
    __asm ("pushal");
    eax = *(0x80498c3);
    ecx = 0x10;
    edi = 0x804990d;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    *(0x8049917) = 0xa;
    edx = 0x51;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80498c7, 0x51);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readelf/ia32_elf/subject.exe @ 0x8048d34 */
#include <stdint.h>
 
int8_t fcn_08048d34 (void) {
    __asm ("pushal");
    __asm ("pushal");
    ecx = 0x10;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
    if (*(0x8049d23) >= 8) {
        goto label_0;
    }
    tmp_0 = ecx;
    ecx = ebx;
    ebx = tmp_0;
    ecx -= *(0x8049d23);
    ecx |= ecx;
    if (ecx == 0) {
        goto label_1;
    }
    __asm ("pushal");
    al = 0x30;
    do {
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x8048d5f");
    } while (1);
    __asm ("popal");
label_1:
    edi += ecx;
    __asm ("pushal");
    ecx = 0x10;
    fcn_08048d11 ();
    *(0x8049d23) = esi;
    __asm ("popal");
label_0:
    __asm ("popal");
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readelf/ia32_elf/subject.exe @ 0x8048d00 */
#include <stdint.h>
 
int32_t fcn_08048d00 (void) {
    __asm ("pushal");
    edi = 0x8049d18;
    eax = 0;
    ecx = 0xb;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readelf/ia32_elf/subject.exe @ 0x8048cc6 */
#include <stdint.h>
 
void fcn_08048cc6 (void) {
    edx = 0x8049d23;
    ecx = 0x8049d18;
    eax = 4;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    edx = 0x13;
    eax = 4;
    eax = sys_write (ebx, 0x80490a0, 0x13);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readelf/ia32_elf/subject.exe @ 0x8048ce3 */
#include <stdint.h>
 
void fcn_08048ce3 (void) {
    edx = 0x8049d23;
    ecx = 0x8049d18;
    eax = 4;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    edx = 9;
    eax = 4;
    eax = sys_write (ebx, 0x80490b3, 0x9);
}

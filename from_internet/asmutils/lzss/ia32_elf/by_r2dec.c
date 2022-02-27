/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lzss/ia32_elf/subject.exe @ 0x8048077 */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    *(0x80483ef) = 1;
    eax--;
    eax--;
    if (eax < 0) {
        goto label_0;
    }
    eax--;
    if (eax < 0) {
        goto label_1;
    }
    ecx = 0;
    eax = 5;
    eax = sys_open (ebx, ecx, edx);
    if (eax >= 0) {
        goto label_1;
    }
    edx = 0x16;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048061, 0x16);
    goto label_2;
    do {
label_0:
        edx = 0x15;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804804c, 0x15);
        goto label_2;
label_1:
        *(0x80483eb) = ebp;
        eax = 0x8048203;
        if (*(edi) == 0x65) {
            goto label_3;
        }
        eax = fcn.08048312;
    } while (*(edi) != 0x64);
label_3:
    void (*eax)() ();
label_2:
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lzss/ia32_elf/subject.exe @ 0x8048104 */
#include <stdint.h>
 
void fcn_08048104 (void) {
    edx = 0x8000;
    ebx = *((edi + eax*4 + 0x48014));
    if (ebx != edx) {
        ecx = *((edi + eax*4 + 0x8010));
        *((edi + ebx*4 + 0x8010)) = ecx;
        *((edi + ecx*4 + 0x48014)) = ebx;
        *((edi + eax*4 + 0x8010)) = edx;
        *((edi + eax*4 + 0x48014)) = edx;
    }
    ecx = edx;
    ebx = edx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lzss/ia32_elf/subject.exe @ 0x80480df */
#include <stdint.h>
 
int32_t fcn_080480df (void) {
    __asm ("pushal");
    ecx = 0x2004;
    eax = 0;
    *((edi - 8)) = 0x1f;
    *((edi - 4)) = eax;
    *((edi - 0xc)) = eax;
    memset (edi, eax, ecx);
    ecx = 0x18002;
    eax = 0x8000;
    memset (edi, eax, ecx);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lzss/ia32_elf/subject.exe @ 0x80483bf */
#include <stdint.h>
 
void fcn_080483bf (void) {
    edx = 0;
    dh = 0x40;
    eax = 3;
    eax = sys_read (0x80483eb, 0x80483f3, edx);
    ecx = 0;
    if (eax != 0) {
        if (eax < 0) {
            goto label_0;
        }
        ecx = eax;
    }
label_0:
    esi = 0x80483f3;
    edi = 3;
    edx = 3;
    ebx = 3;
    eax = 3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lzss/ia32_elf/subject.exe @ 0x8048180 */
#include <stdint.h>
 
int32_t fcn_08048180 (void) {
    ecx = 0;
    *((edi + 0x68018)) = ecx;
    *((edi + 0x6801c)) = ecx;
    bx = *((edi + eax));
    ebx &= 0x7fff;
    ecx = *((edi + ebx*4 + 0x28014));
    edx = 0;
label_0:
    if (ecx == 0x8000) {
        goto label_1;
    }
    edx = 0;
    esi = edi + ecx;
    ebx = edi + eax;
    do {
        al = *((esi + edx));
        if (al != *((ebx + edx))) {
            goto label_2;
        }
        edx++;
    } while (edx <= 0x10);
label_2:
    ebx = eax;
    if (edx > *((edi + 0x6801c))) {
        *((edi + 0x6801c)) = edx;
        eax -= ecx;
        eax &= 0x7fff;
        *((edi + 0x68018)) = eax;
    }
    if (edx != 0x10) {
        ecx = *((edi + ecx*4 + 0x8010));
        goto label_0;
label_1:
        if (edx != 0x10) {
            goto label_3;
        }
    }
    eax = ecx;
    fcn_08048104 ();
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lzss/ia32_elf/subject.exe @ 0x804832b */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t fcn_0804832b (void) {
    ecx = 0;
    ecx++;
    eax &= ecx;
    edi = edi - 0x400c;
    ecx = *((edi + 0x4004));
    if (ecx != 0) {
        eax <<= cl;
        *((edi + 0x4008)) |= eax;
        *((edi + 0x4004))--;
        edi = ecx;
        return eax;
    }
    eax |= *((edi + 0x4008));
    ecx = *((edi + 0x4000));
    eax = SWAP32 (eax);
    *((edi + ecx*4)) = eax;
    ecx++;
    ecx &= 0xfff;
    while (1) {
        eax = 0;
        *((edi + 0x4000)) = ecx;
        *((edi + 0x4004)) = 0x1f;
        *((edi + 0x4008)) = eax;
        edi = ecx;
        return eax;
        __asm ("pushal");
        edx = 0;
        dh = 0x40;
        eax = 4;
        eax = sys_write (0x80483ef, 0x804c3f3, edx);
        __asm ("popal");
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lzss/ia32_elf/subject.exe @ 0x8048312 */
#include <stdint.h>
 
int32_t fcn_08048312 (void) {
    ebx = eax;
    ecx--;
    ecx &= 0x1f;
    eax = 0;
    do {
        al = (((ebx >> ecx) & 1) < 0) ? 1 : 0;
        fcn_0804832b ();
        ecx--;
    } while (ecx >= 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lzss/ia32_elf/subject.exe @ 0x804813e */
#include <stdint.h>
 
void fcn_0804813e (void) {
    bx = *((edi + eax));
    ebx &= 0x7fff;
    ecx = *((edi + ebx*4 + 0x28014));
    *((edi + ebx*4 + 0x28014)) = eax;
    edx = ebx + 0x8001;
    *((edi + eax*4 + 0x48014)) = edx;
    *((edi + eax*4 + 0x8010)) = ecx;
    if (ecx != 0x8000) {
        *((edi + ecx*4 + 0x48014)) = eax;
    }
    ecx = ebx;
    edx = ebx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lzss/ia32_elf/subject.exe @ 0x80483a0 */
#include <stdint.h>
 
int32_t fcn_080483a0 (void) {
    ecx = edi - 0x400c;
    eax = *((edi - 4));
    *((ecx + edx*4)) = eax;
    edx++;
    edx <<= 2;
    eax = 4;
    eax = sys_write (edi - 0x8010, ecx, edi - 0xc);
    return eax;
}

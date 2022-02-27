/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
uint32_t entry0 (void) {
    fcn_08048172 ();
    ebx--;
    do {
label_0:
        if (ebx == 0) {
            eax = 1;
            eax = sys_exit (ebx);
        }
        *(0x80482f3) = ebx;
        ecx = 0;
        eax = 5;
        eax = sys_open (ebx, ecx, edx);
        if (eax >= 0) {
            goto label_1;
        }
    } while (1);
label_1:
    fcn_08048283 ();
    edx = 0x40;
    eax = 3;
    eax = sys_read (0xeb, 0x8048367, 0x40);
    if (eax < 0) {
        goto label_0;
    }
    fcn_080482b3 ();
    if (ecx >= 0x40) {
        fcn_080482b3 ();
        goto label_1;
    }
    edi = 0x8048327;
    edx = *((edi - 0x18));
    ecx = *((edi - 0x1c));
    __asm ("shld ecx, edx, 3");
    *((edi + 0x38)) = ecx;
    edx <<= 3;
    *((edi + 0x3c)) = edx;
    eax = fcn_0804819a ();
    esi = 0x80482f7;
    ecx = 5;
    do {
        eax = *(esi);
        esi += 4;
        fcn_08048109 ();
        __asm ("loop 0x80480c1");
    } while (1);
    edx = 0x20;
    fcn_0804812a ();
    edx = 0x20;
    fcn_0804812a ();
    al = fcn_08048172 ();
    esi = *(0x80482f3);
    do {
        al = *(esi);
        esi++;
    } while (al != 0);
    edi = esi;
    esi -= edi;
    esi--;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xed, 0xe);
    edx = 0xa;
    fcn_0804812a ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x8048283 */
#include <stdint.h>
 
int32_t fcn_08048283 (void) {
    edi = 0x8048367;
    eax = 0;
    ecx = 0x10;
    memset (edi, eax, ecx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x80482b3 */
#include <stdint.h>
 
uint32_t fcn_080482b3 (void) {
    *(0x804830f) += eax;
    esi = 0x8048367;
    *((esi + eax)) = 0x80;
    ecx = eax;
    do {
        eax = fcn_0804829f ();
        if (eax < 0x40) {
            goto label_0;
        }
        eax = fcn_0804819a ();
        eax -= 0x40;
        if (eax == 0) {
            goto label_1;
        }
        fcn_0804829f ();
    } while (1);
label_0:
    if (eax >= 0x38) {
        fcn_0804819a ();
label_1:
        fcn_08048283 ();
        fcn_08048290 ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x804819a */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_0804819a (void) {
    __asm ("pushal");
    edi = 0x8048313;
    esi = 0x80482f7;
    ecx = 5;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    ebx = 0;
    edi = 0x8048327;
    do {
        ecx = ebx;
        ecx &= 0xf;
        esi = ecx;
        if (ebx >= 0x10) {
            ecx += 0xd;
            ecx &= 0xf;
            eax = *((edi + ecx*4));
            ecx = esi;
            ecx += 8;
            ecx &= 0xf;
            eax ^= *((edi + ecx*4));
            ecx = esi;
            ecx++;
            ecx++;
            ecx &= 0xf;
            eax ^= *((edi + ecx*4));
            ecx = esi;
            eax ^= *((edi + ecx*4));
            eax = rotate_left32 (eax, 1);
            ecx = esi;
            *((edi + ecx*4)) = eax;
        }
        eax = *((edi - 0x14));
        eax = rotate_left32 (eax, 5);
        eax += *((edi - 4));
        ecx = esi;
        eax += *((edi + ecx*4));
        if (ebx >= 0x3c) {
            eax += 0xca62c1d6;
            eax = fcn_08048157 ();
        } else {
            if (ebx >= 0x28) {
                eax += 0x8f1bbcdc;
                eax = fcn_08048161 ();
            } else {
                if (ebx >= 0x14) {
                    eax += 0x6ed9eba1;
                    eax = fcn_08048157 ();
                } else {
                    eax += 0x5a827999;
                    eax = fcn_0804814b ();
                }
            }
        }
        eax += edx;
        eax = *((edi - 8));
        *((edi - 4)) = eax;
        eax = *((edi - 0xc));
        *((edi - 8)) = eax;
        eax = *((edi - 0x10));
        eax = rotate_left32 (eax, 0x1e);
        *((edi - 0xc)) = eax;
        eax = *((edi - 0x14));
        *((edi - 0x10)) = eax;
        *((edi - 0x14)) = eax;
        ebx = eax;
        ebx++;
    } while (ebx < 0x50);
    eax = *((edi - 0x14));
    *((edi - 0x30)) += eax;
    eax = *((edi - 0x10));
    *((edi - 0x2c)) += eax;
    eax = *((edi - 0xc));
    *((edi - 0x28)) += eax;
    eax = *((edi - 8));
    *((edi - 0x24)) += eax;
    eax = *((edi - 4));
    *((edi - 0x20)) += eax;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x8048109 */
#include <stdint.h>
 
uint32_t fcn_08048109 (void) {
    ecx = 0x10;
    ebx = 8;
    do {
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        ebx--;
        if (ebx == 0) {
            goto label_0;
        }
        void (*0x804810f)() ();
    } while (1);
label_0:
    edx += 0x30;
    if (edx <= 0x39) {
        void (*0x804812a)() ();
    }
    edx += 0x27;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x804812a */
#include <stdint.h>
 
void fcn_0804812a (void) {
    *(0x8048363) = edx;
    edx = 1;
    ecx = 0x8048363;
    ebx = 1;
    eax = 4;
    eax = sys_write (ebx, ecx, edx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x8048172 */
#include <stdint.h>
 
int32_t fcn_08048172 (void) {
    edi = 0x80482f7;
    eax = 0x67452301;
    memset (edi, eax, ecx);
    eax = 0xefcdab89;
    memset (edi, eax, ecx);
    eax = 0x98badcfe;
    memset (edi, eax, ecx);
    eax = 0x10325476;
    memset (edi, eax, ecx);
    eax = 0xc3d2e1f0;
    memset (edi, eax, ecx);
    eax = 0;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x8048141 */
#include <stdint.h>
 
void fcn_08048141 (void) {
    ebx = *((edi - 0x10));
    ecx = *((edi - 0xc));
    edx = *((edi - 8));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x8048157 */
#include <stdint.h>
 
void fcn_08048157 (void) {
    fcn_08048141 ();
    edx ^= ecx;
    edx ^= ebx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x8048161 */
#include <stdint.h>
 
void fcn_08048161 (void) {
    fcn_08048141 ();
    ebx |= ecx;
    edx &= ebx;
    ebx = *((edi - 0x10));
    ecx &= ebx;
    edx |= ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x804814b */
#include <stdint.h>
 
void fcn_0804814b (void) {
    fcn_08048141 ();
    ecx ^= edx;
    ebx &= ecx;
    edx ^= ebx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x8048290 */
#include <stdint.h>
 
int32_t fcn_08048290 (void) {
    edi = 0x8048327;
    eax = 0;
    ecx = 0x10;
    memset (edi, eax, ecx);
    eax = 0x10;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sha1sum/ia32_elf/subject.exe @ 0x804829f */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
uint32_t fcn_0804829f (void) {
    eax = fcn_08048290 ();
    edi -= 0x40;
    ecx = 0x10;
    do {
        eax = *(esi);
        esi += 4;
        eax = SWAP32 (eax);
        memset (edi, eax, ecx);
        __asm ("loop 0x80482ab");
    } while (1);
    return eax;
}

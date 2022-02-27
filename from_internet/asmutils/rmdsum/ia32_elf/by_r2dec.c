/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rmdsum/ia32_elf/subject.exe @ 0x80483e9 */
#include <stdint.h>
 
int32_t fcn_080483e9 (void) {
    __asm ("pushal");
    edi = 0x80484e4;
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
    ecx = 0x10;
    memset (edi, eax, ecx);
    esi = 0x8048126;
    ecx = 0xa;
label_0:
    ebx = *(esi);
    edx = *((esi + 4));
    esi += 8;
    ecx = 0x10;
    do {
        ax = *(esi);
        esi += 2;
        *(edi) = ebx;
        *((edi + 4)) = edx;
        *((edi + 8)) = ax;
        edi += 0xa;
        __asm ("loop 0x804842b");
    } while (1);
    ecx = 0x10;
    __asm ("loop 0x804841f");
    goto label_0;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rmdsum/ia32_elf/subject.exe @ 0x8048440 */
#include <stdint.h>
 
int32_t fcn_08048440 (void) {
    __asm ("pushal");
    edi = esi;
    edx = ecx;
    ecx >>= 6;
    if (ecx == 0) {
        goto label_0;
    }
    do {
        fcn_080482f3 ();
        edi += 0x40;
        __asm ("loop 0x804844a");
    } while (1);
label_0:
    esi = 0x80484f8;
    eax = *(esi);
    ecx = *(esi);
    eax += edx;
    if (eax < ecx) {
        *((esi + 4))++;
    }
    *(esi) = eax;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rmdsum/ia32_elf/subject.exe @ 0x804846a */
#include <stdint.h>
 
int32_t fcn_0804846a (void) {
    __asm ("pushal");
    esi = 0x8048b80;
    eax = *(0x80484f8);
    ecx = eax;
    edx = eax;
    eax &= 0x1fc0;
    esi += eax;
    ecx &= 0x3f;
    edi = 0x8048500;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    ebx = edx;
    ecx = edx;
    edx >>= 2;
    edx &= 0xf;
    ecx &= 3;
    ecx = ecx*8 + 7;
    eax = 0;
    eax++;
    eax <<= cl;
    *((edi + edx*4)) ^= eax;
    ebx &= 0x3f;
    if (ebx > 0x37) {
        eax = fcn_080482f3 ();
        eax = 0;
        ecx = 0x10;
        memset (edi, eax, ecx);
        edi = 0x10;
    }
    eax = 0x10;
    eax <<= 3;
    *((edi + 0x38)) = eax;
    eax = *(0x80484fc);
    eax >>= 0x1d;
    *((edi + 0x3c)) = eax;
    fcn_080482f3 ();
    ecx = 5;
    esi = 0x80484e4;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rmdsum/ia32_elf/subject.exe @ 0x80482f3 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_080482f3 (void) {
    __asm ("pushal");
    esi = 0x80484e4;
    edi = ebp - 0x28;
    ecx = 5;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    esi = ecx;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    edi = ecx;
    esi += 0x48;
    ecx = 2;
label_1:
    ecx = 0x10;
label_0:
    eax = *((ebp - 0x28));
    ebx = *((ebp - 0x24));
    ecx = *((ebp - 0x20));
    do {
        edx = *((ebp - 0x1c));
    } while (ecx != 0);
    eax = uint32_t (*esi)(uint32_t, uint32_t, uint32_t, uint32_t) (ecx, 0x10, ecx, 2);
    eax += *((ebp - 0x18));
    *((ebp - 0x28)) = eax;
    *((ebp - 0x20)) = rotate_left32 (*((ebp - 0x20)), 0xa);
    eax = *((ebp - 0x18));
    ebx = *((ebp - 0x28));
    ecx = *((ebp - 0x24));
    edx = *((ebp - 0x20));
    eax = uint32_t (*esi)() ();
    eax += *((ebp - 0x1c));
    *((ebp - 0x18)) = eax;
    *((ebp - 0x24)) = rotate_left32 (*((ebp - 0x24)), 0xa);
    eax = *((ebp - 0x1c));
    ebx = *((ebp - 0x18));
    ecx = *((ebp - 0x28));
    edx = *((ebp - 0x24));
    eax = uint32_t (*esi)() ();
    eax += *((ebp - 0x20));
    *((ebp - 0x1c)) = eax;
    *((ebp - 0x28)) = rotate_left32 (*((ebp - 0x28)), 0xa);
    eax = *((ebp - 0x20));
    ebx = *((ebp - 0x1c));
    ecx = *((ebp - 0x18));
    edx = *((ebp - 0x28));
    eax = uint32_t (*esi)() ();
    eax += *((ebp - 0x24));
    *((ebp - 0x20)) = eax;
    *((ebp - 0x18)) = rotate_left32 (*((ebp - 0x18)), 0xa);
    eax = *((ebp - 0x24));
    ebx = *((ebp - 0x20));
    ecx = *((ebp - 0x1c));
    edx = *((ebp - 0x18));
    eax = uint32_t (*esi)() ();
    eax += *((ebp - 0x28));
    *((ebp - 0x24)) = eax;
    *((ebp - 0x1c)) = rotate_left32 (*((ebp - 0x1c)), 0xa);
    __asm ("loop 0x8048319");
    goto label_0;
    ebp += 0x14;
    ecx--;
    if (ecx != 0) {
        goto label_1;
    }
    ebp -= 0x28;
    edi = 0x80484e4;
    eax = *((ebp - 8));
    eax += *((ebp - 0x20));
    eax += *((edi + 4));
    eax = *((ebp - 4));
    eax += *((ebp - 0x1c));
    eax += *((edi + 8));
    *((edi + 4)) = eax;
    eax = *((ebp - 0x14));
    eax += *((ebp - 0x18));
    eax += *((edi + 0xc));
    *((edi + 8)) = eax;
    eax = *((ebp - 0x10));
    eax += *((ebp - 0x28));
    eax += *((edi + 0x10));
    *((edi + 0xc)) = eax;
    eax = *((ebp - 0xc));
    eax += *((ebp - 0x24));
    eax += *(edi);
    *((edi + 0x10)) = eax;
    *(edi) = eax;
    __asm ("popal");
    return eax;
}

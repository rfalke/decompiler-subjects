/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/md5sum/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
uint8_t entry0 (void) {
    fcn_080482b3 ();
    edi = 0;
    ebp = 0;
    ebx--;
    if (ebx == 0) {
        goto label_1;
    }
    do {
label_3:
        ebx |= ebx;
        if (ebx == 0) {
            ebx = 0;
            eax = 1;
            eax = sys_exit (ebx);
        }
        *(0x804a50f) = ebx;
        ecx = 0;
        eax = 5;
        eax = sys_open (ebx, ecx, edx);
        if (eax >= 0) {
            goto label_1;
        }
label_0:
        edi++;
    } while (1);
label_1:
    edx = 0;
    dh = 0x20;
    eax = 3;
    eax = sys_read (0xeb, 0x80484db, edx);
    if (eax < 0) {
        goto label_0;
    }
    if (eax != 0) {
        esi = 0x80484db;
        ecx = eax;
        fcn_080483b8 ();
        goto label_1;
    }
    __asm ("pushal");
    edi = 0x804a4db;
    al = fcn_0804841f ();
    ecx = 0x10;
    esi = edi;
    edi += 0x10;
label_2:
    al = *(esi);
    esi++;
    edx = 2;
    ah = al;
    do {
        ah = rotate_left8 (ah, 4);
        al = ah;
        al &= 0xf;
        al += 0x30;
        if (al > 0x39) {
            al += 0x27;
        }
        *(es:edi) = al;
        es:edi++;
        edx--;
    } while (edx != 0);
    __asm ("loop 0x80480b3");
    goto label_2;
    *(edi) = 0xa2d2020;
    edx = 0x22;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804a4eb, 0x22);
    al = fcn_080482b3 ();
    esi = *(0x804a50f);
    ecx = ecx + 0x22;
    edx = 2;
    if (esi == 0) {
        goto label_4;
    }
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
    ecx = 4;
    ecx++;
    edx = 0;
    edx++;
label_4:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, edx);
    __asm ("popal");
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/md5sum/ia32_elf/subject.exe @ 0x80482b3 */
#include <stdint.h>
 
int32_t fcn_080482b3 (void) {
    __asm ("pushal");
    edi = 0x8048483;
    eax = 0x67452301;
    memset (edi, eax, ecx);
    eax = 0xefcdab89;
    memset (edi, eax, ecx);
    eax = 0x98badcfe;
    memset (edi, eax, ecx);
    eax = 0x10325476;
    memset (edi, eax, ecx);
    eax = 0;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    edi = 0x804849b;
    ecx = 0x10;
    memset (edi, eax, ecx);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/md5sum/ia32_elf/subject.exe @ 0x80483b8 */
#include <stdint.h>
 
uint32_t fcn_080483b8 (void) {
    __asm ("pushal");
    edi = 0x8048493;
    edx = *(edi);
    eax = edx + ecx*8;
    *(edi) = eax;
    if (eax < edx) {
        *((edi + 4))++;
    }
    ebx = ecx;
    ebx >>= 0x1d;
    *((edi + 4)) += ebx;
    edx >>= 3;
    edx &= 0x3f;
    if (edx == 0) {
        goto label_0;
    }
    edi = edi + edx + 8;
    eax = 0x40;
    eax -= edx;
    edx = eax;
    if (ecx < edx) {
        goto label_1;
    }
    ecx = edx;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    edi = 0x804849b;
    fcn_0804831c ();
    ecx -= edx;
label_0:
    edi = 0x804849b;
    do {
        if (ecx < 0x40) {
            goto label_1;
        }
        ecx = 0x10;
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
        edi = 0x10;
        fcn_0804831c ();
        ecx -= 0x40;
    } while (1);
label_1:
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/md5sum/ia32_elf/subject.exe @ 0x804841f */
#include <stdint.h>
 
int32_t fcn_0804841f (void) {
    __asm ("pushal");
    edi = 0x8048493;
    edx = *(edi);
    edx >>= 3;
    edx &= 0x3f;
    edi = edi + edx + 8;
    *(edi) = 0x80;
    eax = 0x3f;
    eax -= edx;
    edx = eax;
    edi++;
    eax = 0;
    if (edx > 7) {
        goto label_0;
    }
    ecx = edx;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    edi = 0x804849b;
    eax = fcn_0804831c ();
    ecx = 0xe;
    memset (edi, eax, ecx);
    goto label_1;
label_0:
    edx -= 8;
    ecx = edx;
    *(es:edi) = al;
    ecx--;
    es:edi++;
label_1:
    esi = 0x8048493;
    edi = 0x804849b;
    eax = *(esi);
    esi += 4;
    *((edi + 0x38)) = eax;
    eax = *(esi);
    esi += 4;
    *((edi + 0x3c)) = eax;
    fcn_0804831c ();
    ecx = 4;
    esi = esi - 0x18;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/md5sum/ia32_elf/subject.exe @ 0x804831c */
#include <stdint.h>
 
int32_t fcn_0804831c (void) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    __asm ("pushal");
    esi = 0x8048483;
    eax = *(esi);
    esi += 4;
    *((ebp - 4)) = eax;
    eax = *(esi);
    esi += 4;
    *((ebp - 8)) = eax;
    eax = *(esi);
    esi += 4;
    *((ebp - 0xc)) = eax;
    eax = *(esi);
    esi += 4;
    *((ebp - 0x10)) = eax;
    esi = 0x8048123;
    ecx = 4;
label_0:
    eax = *(esi);
    esi += 4;
    *((ebp - 0x14)) = eax;
    ecx = 4;
    do {
        eax = *((ebp - 4));
        ebx = *((ebp - 8));
        ecx = *((ebp - 0xc));
        edx = *((ebp - 0x10));
        eax = uint32_t (*ebp - 0x14)(uint32_t, uint32_t, uint32_t, uint32_t) (ecx, 4, ecx, 4);
        *((ebp - 4)) = eax;
        eax = *((ebp - 0x10));
        ebx = *((ebp - 4));
        ecx = *((ebp - 8));
        edx = *((ebp - 0xc));
        eax = uint32_t (*ebp - 0x14)() ();
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0xc));
        ebx = *((ebp - 0x10));
        ecx = *((ebp - 4));
        edx = *((ebp - 8));
        eax = uint32_t (*ebp - 0x14)() ();
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 8));
        ebx = *((ebp - 0xc));
        ecx = *((ebp - 0x10));
        edx = *((ebp - 4));
        eax = uint32_t (*ebp - 0x14)() ();
        *((ebp - 8)) = eax;
        __asm ("loop 0x8048348");
    } while (1);
    __asm ("loop 0x8048340");
    goto label_0;
    edi = 0x8048483;
    eax = *((ebp - 4));
    *(edi) += eax;
    eax = *((ebp - 8));
    *((edi + 4)) += eax;
    eax = *((ebp - 0xc));
    *((edi + 8)) += eax;
    eax = *((ebp - 0x10));
    *((edi + 0xc)) += eax;
    __asm ("popal");
    return eax;
}

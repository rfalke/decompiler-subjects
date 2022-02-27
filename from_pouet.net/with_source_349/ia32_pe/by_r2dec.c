/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_349/ia32_pe/subject.exe @ 0x400002 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t entry0 (void) {
    /* [00] -rwx section size 157351936 named lz32.dll */
    ebp--;
    eax = 0;
    eax++;
    edi = 0;
    ebx = 2;
    esi = 0x400188;
    ecx = 0;
    goto label_4;
label_0:
    ebx--;
    __asm ("popal");
    if (ebx > 0) {
        goto label_5;
    }
    edx = 0;
    if (ebx >= 0) {
        edi ^= 7;
        __asm ("bts dword [edx], edi");
    }
    edi++;
    goto label_4;
    do {
label_2:
        *(es:edi) = ax;
        ecx--;
        es:edi += 2;
    } while (ecx != 0);
    al |= *(esi);
    __asm ("popal");
    esi = esi + 0x11;
    if (al != 0) {
        goto label_4;
    }
    return eax;
    do {
        ecx += ecx;
        ebp++;
        eax += eax;
label_5:
    } while (eax >= 0);
    ebx += edx;
    edx:eax = eax * edx;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    ebx = 0;
    edx = eax;
    if (ecx >= eax) {
        ecx -= eax;
        tmp_0 = eax;
        eax = edx;
        edx = tmp_0;
        eax -= edx;
        ebx++;
    }
label_4:
    __asm ("pushal");
    eax = *(esi);
    esi += 4;
    eax -= edi;
    if (eax == 0) {
        goto label_6;
    }
    ecx = edi;
    ecx &= 7;
    edi >>= 3;
    edi += *((ebp + 0x20));
    eax = 0xa;
    *((ebp + 0x14)) = eax;
    *((ebp + 0x10)) = eax;
    eax = *(esi);
    esi += 4;
    ebp = 0;
label_3:
    ebp--;
    do {
        ebp++;
        eax += eax;
    } while (eax < 0);
    if (eax == 0) {
        goto label_0;
    }
    __asm ("pushal");
    al = *(esi);
    esi++;
    edx = (int32_t) al;
    do {
        al ^= *(edi);
        eax = rotate_left32 (eax, 9);
        al += *(edi);
        eax--;
label_1:
        edi--;
        dl += dl;
    } while (dl < 0);
    if (dl != 0) {
        goto label_1;
    }
    eax = rotate_right32 (eax, cl);
    al += cl;
    __asm ("stc");
label_6:
    edi = 0x4204d6;
    ecx = 0x4aff8c7;
    if (al >= 0) {
        goto label_2;
    }
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    edi = edi + edx*2;
    ecx = ebp;
    eax = 0;
    __asm ("scasb al, byte es:[edi]");
    if (al != 0) {
        ch |= *(edi);
        if (ch != 0) {
            goto label_7;
        }
    }
    ecx++;
    ecx++;
label_7:
    eax--;
    do {
        edx = *((edi + eax));
        edx <<= cl;
        eax++;
    } while (eax <= 0);
    eax -= ebx;
    if (eax >= 0) {
        edi--;
        *((edi + eax))++;
        *((edi + ebx)) >>= 1;
        if (*((edi + ebx)) != 0) {
            goto label_8;
        }
        *((edi + ebx)) = rotate_left8 (*((edi + ebx)), 1);
    }
label_8:
    __asm ("popal");
    esi++;
    goto label_3;
}

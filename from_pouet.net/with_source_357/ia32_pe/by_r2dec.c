/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_357/ia32_pe/subject.exe @ 0x407000 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t entry0 (void) {
    /* [02] -r-x section size 4096 named UPX2 */
    __asm ("pushal");
    void (*0x407006)() ();
    ebp |= 0xffffffff;
    ebx = 0;
    edi = esi - 0x6006;
    *(edi) += 0;
    esi += 0x1b3;
    while (ebx < 0) {
        al = *(esi);
        esi++;
        *(edi) = al;
        edi++;
label_2:
        ebx += ebx;
        if (ebx == 0) {
            ebx = *(esi);
            esi -= 0xfffffffc;
            ebx += ebx;
        }
    }
    eax = 1;
    do {
label_0:
        ebx += ebx;
        if (ebx == 0) {
            ebx = *(esi);
            esi -= 0xfffffffc;
            ebx += ebx;
        }
        eax += eax;
        ebx += ebx;
    } while (ebx > 0);
    if (ebx != 0) {
        goto label_8;
    }
    ebx = *(esi);
    esi -= 0xfffffffc;
    ebx += ebx;
    if (ebx >= 0) {
        goto label_0;
    }
label_8:
    ecx = 0;
    eax -= 3;
    if (eax < 0) {
        goto label_9;
    }
    eax <<= 8;
    al = *(esi);
    esi++;
    eax ^= 0xffffffff;
    if (esi == 0) {
        goto label_10;
    }
label_3:
    ebx += ebx;
    if (ebx == 0) {
        ebx = *(esi);
        esi -= 0xfffffffc;
        ebx += ebx;
    }
    ecx += ecx;
    ebx += ebx;
    if (ebx == 0) {
        ebx = *(esi);
        esi -= 0xfffffffc;
        ebx += ebx;
    }
    ecx += ecx;
    if (ecx != 0) {
        goto label_11;
    }
    ecx++;
    do {
label_1:
        ebx += ebx;
        if (ebx == 0) {
            ebx = *(esi);
            esi -= 0xfffffffc;
            ebx += ebx;
        }
        ecx += ecx;
        ebx += ebx;
    } while (ebx > 0);
    if (ebx != 0) {
        goto label_12;
    }
    ebx = *(esi);
    esi -= 0xfffffffc;
    ebx += ebx;
    if (ebx >= 0) {
        goto label_1;
    }
label_12:
    ecx += 2;
label_11:
    ecx++;
    edx = edi + eax;
    if (eax <= 0xfffffffc) {
        goto label_13;
    }
    do {
        al = *(edx);
        edx++;
        *(edi) = al;
        edi++;
        ecx--;
    } while (ecx != 0);
    goto label_2;
label_9:
    eax = ebp;
    goto label_3;
    do {
label_13:
        eax = *(edx);
        edx += 4;
        *(edi) = eax;
        edi += 4;
        ecx -= 4;
    } while (ecx > 0);
    edi += ecx;
    goto label_2;
label_10:
    esi = edi;
    edi -= *((edi - 4));
    edi = esi;
    ecx = 0x29;
    do {
label_4:
        al = *(edi);
        edi++;
        al -= 0xe8;
label_5:
    } while (al > 1);
    if (*(edi) != 1) {
        goto label_4;
    }
    eax = *(edi);
    bl = *((edi + 4));
    ax >>= 8;
    eax = rotate_left32 (eax, 0x10);
    tmp_0 = ah;
    ah = al;
    al = tmp_0;
    eax -= edi;
    bl -= 0xe8;
    eax += esi;
    *(edi) = eax;
    edi += 5;
    eax = ebx;
    __asm ("loop 0x4070fb");
    goto label_5;
    do {
        eax = *(edi);
        eax |= eax;
        if (eax == 0) {
            goto label_14;
        }
        ebx = *((edi + 4));
        eax = eax + esi + 0x5000;
        ebx += esi;
        edi += 8;
        eax = uint32_t (*esi + 0x5064)(uint32_t) (eax);
        tmp_1 = eax;
        eax = edx;
        edx = tmp_1;
label_6:
        al = *(edi);
        edi++;
        al |= al;
    } while (al == 0);
    ecx = edi;
    if (al < 0) {
        eax = *(edi);
        edi++;
        edi++;
        ecx = 0xaef24857;
    }
    eax--;
    __asm ("repne scasb al, byte es:[edi]");
    eax = uint32_t (*esi + 0x5068)(uint32_t, uint32_t, uint32_t) (edx, edi, eax);
    *(ebx) = eax;
    ebx += 4;
    goto label_6;
label_14:
    ebx = esi - 4;
    edi += 4;
    do {
        eax = 0;
        al = *(edi);
        edi++;
        eax |= eax;
        if (eax == 0) {
            goto label_15;
        }
        if (al > 0xef) {
            goto label_16;
        }
label_7:
        ebx += eax;
        eax = *(ebx);
        tmp_2 = ah;
        ah = al;
        al = tmp_2;
        eax = rotate_left32 (eax, 0x10);
        tmp_3 = ah;
        ah = al;
        al = tmp_3;
        eax += esi;
        *(ebx) = eax;
    } while (1);
label_16:
    al &= 0xf;
    eax <<= 0x10;
    ax = *(edi);
    edi += 2;
    goto label_7;
label_15:
    __asm ("popal");
    return void (*0x4011cb)() ();
}

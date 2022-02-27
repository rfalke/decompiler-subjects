/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_372/ia32_pe/subject.exe @ 0x41d850 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t entry0 (void) {
    __asm ("pushal");
    esi = section.UPX1;
    edi = esi - 0x1c000;
    ebp |= 0xffffffff;
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
    } while (ebx >= 0);
    if (ebx != 0) {
        goto label_6;
    }
    ebx = *(esi);
    esi -= 0xfffffffc;
    ebx += ebx;
    if (ebx >= 0) {
        goto label_0;
    }
label_6:
    ecx = 0;
    eax -= 3;
    if (eax >= 0) {
        eax <<= 8;
        al = *(esi);
        esi++;
        eax ^= 0xffffffff;
        if (esi == 0) {
            goto label_7;
        }
    }
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
        goto label_8;
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
    } while (ebx >= 0);
    if (ebx != 0) {
        goto label_9;
    }
    ebx = *(esi);
    esi -= 0xfffffffc;
    ebx += ebx;
    if (ebx >= 0) {
        goto label_1;
    }
label_9:
    ecx += 2;
label_8:
    ecx++;
    edx = edi + ebp;
    if (ebp <= 0xfffffffc) {
        goto label_10;
    }
    do {
        al = *(edx);
        edx++;
        *(edi) = al;
        edi++;
        ecx--;
    } while (ecx != 0);
    goto label_2;
    do {
label_10:
        eax = *(edx);
        edx += 4;
        *(edi) = eax;
        edi += 4;
        ecx -= 4;
    } while (ecx > 0);
    edi += ecx;
    goto label_2;
label_7:
    esi = edi;
    edi = esi;
    ecx = 0x19;
    do {
label_3:
        al = *(edi);
        edi++;
        al -= 0xe8;
label_4:
    } while (al > 1);
    if (*(edi) != 0) {
        goto label_3;
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
    __asm ("loop 0x41d92f");
    goto label_4;
    edi = esi + 0x1b000;
    do {
        eax = *(edi);
        eax |= eax;
        if (eax == 0) {
            goto label_11;
        }
        ebx = *((edi + 4));
        eax = eax + esi + 0x1d000;
        ebx += esi;
        edi += 8;
        eax = uint32_t (*esi + 0x1d050)(uint32_t) (eax);
        tmp_1 = eax;
        eax = ebp;
        ebp = tmp_1;
label_5:
        al = *(edi);
        edi++;
        al |= al;
    } while (al == 0);
    ecx = edi;
    eax--;
    __asm ("repne scasb al, byte es:[edi]");
    eax = uint32_t (*esi + 0x1d054)(uint32_t) (ebp);
    eax |= eax;
    if (eax != 0) {
        *(ebx) = eax;
        ebx += 4;
        goto label_5;
    }
    uint32_t (*esi + 0x1d058)() ();
label_11:
    __asm ("popal");
    return void (*0x4017d0)() ();
}

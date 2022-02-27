/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/date/ia32_elf/subject.exe @ 0x804807e */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t entry0 (int32_t arg_25h, int32_t arg_34h, int32_t arg_5ah, int32_t arg_79h) {
    int32_t var_74h;
    int32_t var_4fh;
    int32_t var_35h;
    int32_t var_24h;
    edi = 0x80485e0;
    ecx = 0;
    ebx = edi;
    eax = 0x4e;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    ecx = ebp - 0x35;
    esi = 0x4e;
    esi = 0x4e;
    do {
label_0:
        esi = 0x4e;
        esi |= esi;
        if (esi == 0) {
            goto label_7;
        }
        al = *(esi);
        esi++;
        if (al != 0x2b) {
            goto label_8;
        }
        ecx = esi;
    } while (1);
label_8:
    if (al != 0x3d) {
        goto label_9;
    }
    eax = 0;
    edx:eax = (int64_t) eax;
    do {
        edx *= 5;
        edx = eax + edx*2;
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_10;
        }
    } while (al < 0xa);
label_10:
    *(edi) = edx;
    goto label_0;
label_9:
    if (al != 0x2d) {
        goto label_0;
    }
label_1:
    al = *(esi);
    esi++;
    al |= al;
    if (al == 0) {
        goto label_0;
    }
    if (al != 0x75) {
        goto label_1;
    }
    *((edi + 0x52)) = 0x435455;
    goto label_1;
label_7:
    *((edi + 0x5c)) = ecx;
    edx = ebp + 0x79;
    *((edi + 0x60)) = edx;
    edx = edi;
    edi += 0x74;
    esi = ebp + 0x25;
    ecx = 0x10;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    do {
label_2:
        esi = 0x10;
        esi |= esi;
        if (esi == 0) {
            goto label_11;
        }
        eax = *(esi);
        esi += 4;
    } while (eax != 0x474e414c);
    al = *(esi);
    esi++;
    if (al != 0x3d) {
        goto label_2;
    }
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    edi--;
    esi = ebp + 0x34;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(es:edi) = al;
    es:edi++;
    edi = edx;
    ebx = edi + 0x74;
    eax = fcn_0804804c ();
    if (edi >= 0) {
        *((edi + 0x60)) = eax;
    }
label_11:
    edi = edx;
    edx = 0;
    if (edx != *((edi + 0x52))) {
        goto label_12;
    }
    ebx = ebp + 0x5a;
    eax = fcn_0804804c ();
    if (edx < *((edi + 0x52))) {
        goto label_12;
    }
    ebx = *((eax + 0x20));
    ebx = SWAP32 (ebx);
    esi = *((eax + 0x24));
    esi = SWAP32 (esi);
    esi *= 3;
    ecx = ebx;
    eax += 0x2c;
    do {
label_3:
        ecx--;
    } while (ecx != 0);
    if (ecx == 0) {
        goto label_13;
    }
    edx = *((eax + ecx*4));
    edx = SWAP32 (edx);
    if (edx > *(edi)) {
        goto label_3;
    }
label_13:
    eax = eax + ebx*4;
    ecx = *((eax + ecx));
    eax += ebx;
    ecx *= 3;
    edx = *((eax + ecx*2));
    edx = SWAP32 (edx);
    *((edi + 0x48)) = edx;
    ecx = *((eax + ecx*2 + 5));
    eax = eax + esi*2;
    *(fp_stack--) = *((eax + ecx));
    *((edi + 0x52)) = fp_stack[0];
    fp_stack--;
label_12:
    al = 0x2b;
    edx |= edx;
    if (edx < 0) {
        al = 0x2d;
        edx = -edx;
    }
    *((edi + 0x4c)) = al;
    tmp_0 = eax;
    eax = edx;
    edx = tmp_0;
    edx:eax = (int64_t) eax;
    ebx = edx + 0x3c;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    __asm ("aam");
    tmp_1 = eax;
    eax = edx;
    edx = tmp_1;
    __asm ("aam");
    edx <<= 0x10;
    eax = edx + eax + 0x30303030;
    eax = SWAP32 (eax);
    *((edi + 0x4d)) = eax;
    ecx = 0x7b1;
    esi = 4;
    eax = *(edi);
    eax += *((edi + 0x48));
    if (eax < 0) {
        eax += 0x1e13380;
        ecx--;
        esi--;
    }
    edx:eax = (int64_t) eax;
    ebx = edx + 0x3c;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    *((edi + 4)) = edx;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    *((edi + 8)) = edx;
    bl = 0x18;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    *((edi + 0xc)) = edx;
    edx -= 0xc;
    edi + 0x18 = (edx >= 0) ? 1 : 0;
    if (edx > 0) {
        goto label_14;
    }
    do {
        edx += 0xc;
    } while (edx == 0);
label_14:
    *((edi + 0x14)) = edx;
    eax += esi;
    bl = 7;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    *((edi + 0x1c)) = edx;
    eax = 0;
    __asm ("cmpxchg edx, ebx");
    *((edi + 0x20)) = edx;
    eax = *(esp);
    bh = 1;
    do {
        bl = 0x6e;
        ecx++;
        if ((cl & 3) != 0) {
            ebx--;
        }
        eax -= ebx;
    } while (eax >= 0);
    eax += ebx;
    *((edi + 0x10)) = ecx;
    ch = 0x14;
    cl -= 0xd0;
    if (cl < 0) {
        ch--;
        cl += 0x64;
    }
    *((edi + 0x44)) = cl;
    *((edi + 0x40)) = ch;
    esi = eax;
    ebx += 0xc03bbd7f;
    ecx = 0;
    edx:eax = (int64_t) eax;
    do {
        dl = 7;
        __asm ("shld edx, ebx, 2");
        ebx = rotate_right32 (ebx, 2);
        ecx++;
        eax -= edx;
    } while (eax >= 0);
    eax += edx;
    eax++;
    edi += 0x24;
    memset (edi, eax, ecx);
    tmp_2 = eax;
    eax = ecx;
    ecx = tmp_2;
    memset (edi, eax, ecx);
    ebx = eax;
    eax -= esi;
    eax += ebx;
    bl = 7;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    ecx = edx;
    eax = 0;
    __asm ("cmpxchg ecx, ebx");
    eax = esi + ecx;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    memset (edi, eax, ecx);
    ecx--;
    if (ecx == 0) {
        cl = bl;
    }
    eax = esi + ecx;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    memset (edi, eax, ecx);
    ebx = *((edi - 0x24));
    dl = 3;
    dl &= bl;
    ecx -= 4;
    al += 0;
    if (al == 0) {
        ebx--;
        al = 0x34;
        ecx |= ecx;
        if (ecx != 0) {
            ecx--;
            if (ecx != 0) {
                goto label_15;
            }
            edx--;
            if (edx != 0) {
                goto label_15;
            }
        }
        eax++;
    }
    if (al == 0x35) {
        edx = esi;
        dl -= 0x68;
        if (dl <= *((edi - 0x18))) {
            goto label_15;
        }
        al = 1;
        ebx++;
    }
label_15:
    memset (edi, eax, ecx);
    tmp_3 = eax;
    eax = ebx;
    ebx = tmp_3;
    memset (edi, eax, ecx);
    esi++;
    tmp_4 = eax;
    eax = esi;
    esi = tmp_4;
    memset (edi, eax, ecx);
    ebx = edi - 0x40;
    esi = *((ebx + 0x5c));
    void (*0x80482c2)(uint32_t) (ebx + 0x74);
    al = 0xa;
    *(es:edi) = al;
    es:edi++;
    edx -= ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, 0xed);
    ebx = 0;
    eax = -eax;
    if (edx >= 0) {
        tmp_5 = eax;
        eax = ebx;
        ebx = tmp_5;
    }
    eax = 1;
    eax = sys_exit (ebx);
    esi += ebp;
    goto label_6;
label_5:
    *(edi) = 0x25;
    edi++;
    do {
label_4:
        *(es:edi) = al;
        es:edi++;
label_6:
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_16;
        }
    } while (al != 0x25);
    if (*(esi) == 0) {
        goto label_4;
    }
    al = *(esi);
    esi++;
    edi = ebp;
    ecx = 0x25;
    __asm ("repne scasb al, byte es:[edi]");
    edi = 0x25;
    if (*(esi) != 0) {
        goto label_5;
    }
    eax = *((ebp + ecx - 0x4f));
    eax = *((ebx + eax));
    esi = *((ebp + ecx - 0x24));
    edx = esi;
    cl = *((ebp + ecx - 0x74));
    uint32_t (*ebp + ecx + 0x69)(uint32_t) (esi);
    goto label_6;
label_16:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/date/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t fcn_0804804c (void) {
    int32_t var_1ch;
    ecx = 0;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax |= eax;
    if (eax >= 0) {
        tmp_0 = eax;
        eax = ebx;
        ebx = tmp_0;
        ecx = edi + 0x74;
        __asm ("pushal");
        eax = 0x6c;
        eax = sys_newfstat (ebx, ecx);
        ebp = 0;
        edi = ebx;
        esi = 1;
        edx = 1;
        ecx = *((ecx + 0x14));
        ebx = 0;
        eax = 0;
        al = 0xc0;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        *((esp + 0x1c)) = eax;
        __asm ("popal");
        eax |= eax;
    }
    return eax;
}

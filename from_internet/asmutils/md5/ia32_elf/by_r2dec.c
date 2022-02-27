/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/md5/ia32_elf/subject.exe @ 0x8048076 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void entry0 (int32_t arg_4h) {
    __asm ("wait");
    edi = 0x80482cd;
    do {
        edx++;
        *(fp_stack--) = *(esp);
        fp_stack[0] = sin(fp_stack[0]);
        fp_stack[0] = abs(fp_stack[0]);
        fp_stack[0] *= *(0x804825b);
        *(esp) = fp_stack[0];
        fp_stack--;
        memset (edi, eax, ecx);
    } while (edx < 0x40);
    ebp = 0;
    eax |= eax;
    if (eax != 0) {
label_2:
        ebx = eax;
        ebx |= ebx;
        if (ebx == 0) {
            goto label_3;
        }
        ecx = 0;
        eax = 5;
        eax = sys_open (ebx, ecx, edx);
        eax |= eax;
        if (eax < 0) {
            goto label_4;
        }
        tmp_0 = eax;
        eax = ebp;
        ebp = tmp_0;
    }
    edi = 0x80483cd;
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
    *(es:edi) = ax;
    es:edi += 2;
label_1:
    edi = 0x804828d;
    edx = 0x40;
    do {
        eax = 3;
        eax = sys_read (0xeb, 0xed, edx);
        edx -= eax;
        edi += eax;
        eax |= eax;
        if (eax < 0) {
            goto label_4;
        }
    } while (eax != 0);
    edi = 3;
    edx -= 0x40;
    edx = -edx;
    *(0x80483dd) += edx;
    if (edx < 0x40) {
        edx |= edx;
        if (edx == 0) {
            if (*(0x80483e1) != 0) {
                goto label_5;
            }
        }
        if (*(0x80483e2) == 0) {
            *(0x80483e2)++;
            *((edi + edx)) = 0x80;
            edx++;
        }
        if (edx <= 0x38) {
            ecx = 0x38;
            edi += edx;
            ecx -= edx;
            al = 0;
            *(es:edi) = al;
            ecx--;
            es:edi++;
            eax = *(0x80483dd);
            eax <<= 3;
            memset (edi, eax, ecx);
            eax >>= 0x1d;
            memset (edi, eax, ecx);
            *(0x80483e1)++;
        } else {
            ecx = 0x40;
            edi += edx;
            ecx -= edx;
            al = 0;
            *(es:edi) = al;
            ecx--;
            es:edi++;
        }
    }
    __asm ("std");
    esi = 0x80483d9;
    eax = *(esi);
    esi += 4;
    tmp_1 = eax;
    eax = edx;
    edx = tmp_1;
    eax = *(esi);
    esi += 4;
    tmp_2 = eax;
    eax = ecx;
    ecx = tmp_2;
    eax = *(esi);
    esi += 4;
    tmp_3 = eax;
    eax = ebx;
    ebx = tmp_3;
    eax = *(esi);
    esi += 4;
    esi = 0x80482cd;
label_0:
    eax = 0;
    al = *((ebp + 0x8048279));
    tmp_4 = eax;
    eax = edi;
    edi = tmp_4;
    do {
        eax = uint32_t (*ebp*4 + 0x804827d)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (eax, ecx, eax, 0xf, 3, ebp);
        eax += *(esi);
        eax += *((edi*4 + 0x804828d));
        ecx = *((esp + 4));
        ecx &= 3;
        cl = *((ecx + ebp*4 + 0x8048265));
        eax = rotate_left32 (eax, cl);
        eax += ebx;
        cl = *((ebp + 0x8048275));
        edi += ecx;
        edi &= 0xf;
        esi += 4;
        tmp_5 = ecx;
        ecx = edx;
        edx = tmp_5;
        tmp_6 = ebx;
        ebx = ecx;
        ecx = tmp_6;
        tmp_7 = eax;
        eax = ebx;
        ebx = tmp_7;
    } while (esi >= 0);
    ebp--;
    if (ebp >= 0) {
        goto label_0;
    }
    *(esi) += eax;
    *((esi + 4)) += ebx;
    *((esi + 8)) += ecx;
    *((esi + 0xc)) += edx;
    goto label_1;
label_5:
    esi = 0x80483cd;
    edi = esi + 0x16;
    ecx = 0x10;
    do {
        al = *(esi);
        esi++;
        dl = al;
        al >>= 4;
        __asm ("aam");
        __asm ("aad 0x31");
        al += 0x30;
        *(es:edi) = al;
        es:edi++;
        tmp_8 = eax;
        eax = edx;
        edx = tmp_8;
        al &= 0xf;
        __asm ("aam");
        __asm ("aad 0x31");
        al += 0x30;
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x80481f9");
    } while (1);
    ecx = 0x10;
    ebx = 1;
    edx = 0x20;
    eax = 4;
    eax = sys_write (0x1, ecx, 0x20);
    if (ebp == 0) {
        goto label_6;
    }
    edx = 1;
    eax = 4;
    eax = sys_write (ebx, 0x8048263, 0x1);
    esi = 4;
    do {
        edx++;
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    ecx = esi;
    eax = 4;
    eax = sys_write (ebx, 0xe, 0xffffffff);
label_6:
    edx = 1;
    eax = 4;
    eax = sys_write (ebx, 0x8048264, 0x1);
    goto label_2;
label_4:
    tmp_9 = eax;
    eax = ebx;
    ebx = tmp_9;
label_3:
    eax = 1;
    eax = sys_exit (ebx);
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    do {
    } while (ecx != 0);
}

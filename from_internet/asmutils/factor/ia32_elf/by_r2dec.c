/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/factor/ia32_elf/subject.exe @ 0x8048195 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    edi = 0x8048204;
    esi |= esi;
    if (esi == 0) {
        goto label_2;
    }
    do {
        eax = fcn_08048068 ();
        esi |= esi;
    } while (esi != 0);
    do {
        tmp_0 = eax;
        eax = ebx;
        ebx = tmp_0;
        eax = 1;
        eax = sys_exit (ebx);
label_2:
        ecx = edi + 0x18;
        esi = 0x5f;
label_0:
        edx = 0;
        edx++;
        ebx = 0;
        eax = 3;
        eax = sys_read (ebx, ecx, edx);
        eax = -eax;
    } while (edx >= 0);
    al = *(ecx);
    if (al == 0x20) {
        goto label_0;
    }
    if (al < 9) {
        goto label_1;
    }
    if (al < 0xe) {
        goto label_0;
    }
    do {
label_1:
        ecx++;
        esi--;
        if (esi == 0) {
            goto label_3;
        }
        ebx = 0;
        eax = 3;
        eax = sys_read (ebx, ecx, edx);
        eax = -eax;
        if (esi >= 0) {
            goto label_3;
        }
        al = *(ecx);
        if (al == 0x20) {
            goto label_3;
        }
    } while (al < 9);
    if (al >= 0xe) {
        goto label_1;
    }
label_3:
    *(ecx) = 0;
    esi = edi + 0x18;
    fcn_08048068 ();
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/factor/ia32_elf/subject.exe @ 0x804814f */
#include <stdint.h>
 
void fcn_0804814f (void) {
    bl = 0x20;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/factor/ia32_elf/subject.exe @ 0x8048151 */
#include <stdint.h>
 
int32_t fcn_08048151 (void) {
    *(fp_stack--) = fp_stack[0];
    *(fp_stack--) = *(0x80481fd);
    ecx = edi + 0x38;
    edx = ecx;
    ecx--;
    do {
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] %= fp_stack[1];
        *(edx) = fp_stack[0];
        fp_stack[2] -= fp_stack[0];
        __asm ("wait");
        ax = fp_status;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack[1] /= fp_stack[0];
        al = 0x30;
        al += *(edx);
        *(ecx) = al;
        ecx--;
        ah &= 0x40;
    } while (ah == 0);
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    *(ecx) = bl;
    if (bl != 0x20) {
        edx++;
        ecx++;
    }
    edx -= ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, 0xb);
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/factor/ia32_elf/subject.exe @ 0x8048068 */
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
 
int32_t fcn_08048068 (void) {
    eax = 0;
    *(fp_stack--) = *(0x80481fd);
    *(fp_stack--) = 0.0;
    do {
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_1;
        }
        fp_stack[0] *= fp_stack[1];
        al -= 0x30;
        if (al < 0) {
            goto label_2;
        }
        if (al >= 0xa) {
            goto label_2;
        }
        *((edi + 0xc)) = eax;
        fp_stack[0] += *((edi + 0xc));
    } while (1);
    do {
label_2:
        al = 1;
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        return eax;
label_1:
        *(fp_stack--) = fp_stack[0];
        ? = fp_stack[0];
        fp_stack--;
        eax = *((edi + 0x14));
    } while (ax >= 0x403f);
    bl = 0x3a;
    ax = fcn_08048151 ();
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *(fp_stack--) = 1.0;
    fp_status = fp_compare(fp_stack[0], fp_stack[2]);
    __asm ("wait");
    ax = fp_status;
    ah &= 0x45;
    if (ah != 1) {
        goto label_3;
    }
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    edx = 0;
    dl = 2;
    *(edi) = edx;
    void (*0x804804c)() ();
    *(edi)++;
    void (*0x804804c)() ();
    *(edi) = 5;
    ax = void (*0x804804c)() ();
    *(fp_stack--) = 1.0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    ah &= 0x40;
    if (ah != 0) {
        goto label_4;
    }
    *(edi) = 7;
    *(fp_stack--) = *(edi);
    fp_stack[2] /= fp_stack[0];
    do {
        esi = *(edi);
        ebp = rotate_left32 (ebp, 4);
        eax = ebp;
        eax &= 0xf;
        *(edi) += eax;
        if (*(edi) >= 0) {
label_0:
            fp_stack[1] = fp_stack[0];
            ? = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *(edi);
            fp_stack[2] /= fp_stack[0];
            edx = *((edi + 0x10));
            ecx = 0x401e;
            ecx -= *((edi + 0x14));
            if (ecx < 0) {
                goto label_5;
            }
            eax = edx;
            eax >>= cl;
            if (eax >= esi) {
                goto label_5;
            }
        }
label_3:
        fp_tmp_1 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fcn_0804814f ();
        fp_stack++;
label_4:
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        edx = 0;
        edx++;
        ecx = 0x80481fd;
        void (*0x804818b)() ();
label_5:
        eax = *((edi + 0xc));
        ecx = -ecx;
        if (edx >= 0) {
            tmp_2 = eax;
            eax = edx;
            edx = tmp_2;
            eax = 0;
        }
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        eax |= edx;
    } while (eax != 0);
    if (*(edi) != esi) {
        ebp = rotate_right32 (ebp, 4);
        *(edi) = esi;
    }
    *(fp_stack--) = *(edi);
    fcn_0804814f ();
    fp_stack[2] /= fp_stack[0];
    esi = *(edi);
    goto label_0;
}

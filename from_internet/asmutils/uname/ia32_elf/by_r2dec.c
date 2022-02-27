/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/uname/ia32_elf/subject.exe @ 0x8048053 */
#include <stdint.h>
 
int32_t entry0 (void) {
    ebx--;
    if (ebx != 0) {
        goto label_1;
    }
    dl = 1;
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    if (*((esi - 5)) != 0x68637261) {
        goto label_3;
    }
    dl = 0x10;
    goto label_3;
label_1:
    al = *(esi);
    esi++;
    if (al != 0x2d) {
        goto label_4;
    }
    do {
label_0:
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_5;
        }
        ecx = 5;
        edi = 0x804804c;
        __asm ("repne scasb al, byte es:[edi]");
        if (al != 0) {
            goto label_6;
        }
        edi--;
        edi -= ebp;
        ecx = edi;
        __asm ("bts edx, ecx");
    } while (1);
label_6:
    if (al != 0x61) {
        goto label_4;
    }
    dl = 0x3f;
    goto label_0;
label_5:
    dl |= dl;
    if (dl == 0) {
        goto label_4;
    }
    ebx--;
    if (ebx != 0) {
        goto label_1;
    }
label_3:
    ecx = 5;
    edi = edx;
    eax = 0x7a;
    eax = sys_newuname (0x804810f);
label_2:
    edi >>= 1;
    if (edi >= 0) {
        goto label_7;
    }
    ecx = 0x804810e;
    if (*(ecx) != 0) {
        edx = 1;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804810e, 0x1);
    }
    *(ecx) = 0x20;
    esi = ebp;
    edx = 0;
    do {
        al = *(esi);
        esi++;
        edx++;
        al |= al;
    } while (al != 0);
    esi -= edx;
    edx--;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, edx);
    ecx = 4;
label_7:
    ebp += 0x41;
    __asm ("loop 0x80480bb");
    goto label_2;
label_4:
    edx = 1;
    eax = 4;
    eax = sys_write (ebx, 0x8048052, 0x1);
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    bh += bh;
}

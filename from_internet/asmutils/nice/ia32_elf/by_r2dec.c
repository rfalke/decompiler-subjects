/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/nice/ia32_elf/subject.exe @ 0x8048072 */
#include <stdint.h>
 
uint32_t entry0 (int32_t arg_4h) {
    ebp = esp + ecx*4;
    ebp += 4;
    if (ecx == 1) {
        goto label_3;
    }
    al = *(esi);
    esi++;
    if (al != 0x2d) {
        goto label_4;
    }
    al = *(esi);
    esi++;
    esi--;
    if (al == 0x6e) {
    }
    eax = fcn_0804804c ();
label_2:
    ecx = 0;
    ebx = 0;
    eax = 0x61;
    eax = sys_setpriority (ebx, ecx, 0xea);
    ecx = 0;
    do {
label_0:
        esi = *((ebp + ecx*4));
        esi |= esi;
        if (esi == 0) {
            goto label_3;
        }
        eax = *(esi);
        esi += 4;
        ecx++;
    } while (eax != 0x48544150);
    al = *(esi);
    esi++;
    if (al != 0x3d) {
        goto label_0;
    }
    eax = 0;
    ecx = 0;
    ecx--;
    edi = esi;
    __asm ("repne scasb al, byte es:[edi]");
    edx = ecx;
    ecx = 0;
    ecx--;
    edi = *(esp);
    __asm ("repne scasb al, byte es:[edi]");
    ecx += edx;
label_1:
    edi = esp + ecx;
    do {
        al = *(esi);
        esi++;
        if (al == 0x3a) {
            goto label_5;
        }
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
label_5:
    esi = *((esp + 4));
    al = 0x2f;
    *(es:edi) = al;
    es:edi++;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    ebx = esp + ecx + 4;
    edi = ecx;
    eax = 0xb;
    eax = sys_execve (ebx, 0xe, 0xeb, esi);
    ecx = edi;
    goto label_1;
label_3:
    ebx = 0x7f;
    eax = 1;
    eax = sys_exit (0x7f);
label_4:
    eax = 0xa;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/nice/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t fcn_0804804c (void) {
    eax = 0;
    edx = 0;
    do {
        al = *(esi);
        esi++;
    } while (al <= 0x21);
    do {
        if (al <= 0x2f) {
            goto label_0;
        }
        if (al > 0x3a) {
            goto label_0;
        }
        al -= 0x30;
        edx += eax;
        al = *(esi);
        esi++;
        if (al <= 0x2f) {
            goto label_0;
        }
        if (al > 0x3a) {
            goto label_0;
        }
        edx *= 0xa;
    } while (1);
label_0:
    eax = edx;
    return eax;
}

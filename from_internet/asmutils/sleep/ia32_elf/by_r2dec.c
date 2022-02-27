/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sleep/ia32_elf/subject.exe @ 0x804804e */
#include <stdint.h>
 
int32_t entry0 (void) {
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    if (*((esi - 7)) == 0x75) {
        ch = 1;
        esi |= esi;
        if (esi == 0) {
            esi = 0x804804c;
        }
    }
label_0:
    esi |= esi;
    if (esi == 0) {
        goto label_1;
    }
    edi = esi;
    eax = 0;
    ebx = 0;
    edx = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_2;
        }
        if (al > 9) {
            goto label_2;
        }
        ebx *= 0xa;
        ebx += eax;
        edx += 0;
    } while (1);
label_2:
    eax = ebx;
    if (edx == 0) {
        if (eax == 0) {
label_1:
            goto label_3;
        }
    }
    ebx = 1;
    ch |= ch;
    if (ch != 0) {
        ebx = 0xf4240;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        tmp_0 = eax;
        eax = edx;
        edx = tmp_0;
        ecx = edx;
        ebx = 0x3e8;
        edx:eax = eax * ebx;
        edx = ecx;
        tmp_1 = eax;
        eax = edx;
        edx = tmp_1;
    } else {
        cl = *((esi - 1));
        if (cl != 0) {
            if (cl == 0x73) {
                goto label_4;
            }
            ebx = 0x3c;
            if (cl != 0x6d) {
                ebx = 0xe10;
                if (cl == 0x68) {
                    goto label_5;
                }
                ebx = 0x15180;
                if (cl == 0x64) {
                    goto label_5;
                }
                if (cl != 0x6e) {
                    goto label_3;
                }
                tmp_2 = eax;
                eax = edx;
                edx = tmp_2;
            }
        } else {
label_5:
            edx:eax = eax * ebx;
        }
    }
label_4:
    ebx = 0x8048102;
    *(ebx) = eax;
    *((ebx + 4)) = edx;
    ecx = 0;
    eax = 0;
    al = 0xa2;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    goto label_0;
label_3:
    eax = 1;
    eax = sys_exit (0xea);
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
}

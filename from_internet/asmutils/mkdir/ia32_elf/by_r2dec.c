/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mkdir/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    eax--;
    if (eax == 0) {
label_0:
        ebx = eax;
        eax = 1;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    }
    esi = 1;
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    edi = esi;
    ecx = 0x1ed;
    ebp = 0;
    do {
label_1:
        esi = 1;
        if (*(esi) != 0x702d) {
            goto label_4;
        }
        ebp++;
    } while (1);
label_4:
    if (*(esi) != 0x6d2d) {
        goto label_2;
    }
    esi |= esi;
    if (esi == 0) {
        goto label_0;
    }
    edx = esi;
    ecx = 0;
    eax = 0;
    ebx = 8;
    do {
        cl = *(esi);
        cl -= 0x30;
        if (cl < 0) {
            goto label_5;
        }
        if (cl > 7) {
            goto label_5;
        }
        ax = al * bl;
        eax += ecx;
        esi++;
    } while (1);
label_5:
    if (edx == esi) {
        goto label_0;
    }
    eax |= eax;
    if (eax == 0) {
        goto label_0;
    }
    ecx = eax;
    goto label_1;
label_2:
    ebx = 8;
    ebx |= ebx;
    if (ebx == 0) {
        goto label_0;
    }
    if (*((edi - 6)) == 0x6d72) {
        eax = 0x28;
        eax = sys_rmdir (ebx);
        goto label_2;
    }
    dl = 1;
    ebp |= ebp;
    if (ebp == 0) {
        goto label_6;
    }
    esi = ebx;
    while (esi < 0) {
label_3:
        edi = esi;
        *(edi) = 0;
label_6:
        eax = 0x27;
        eax = sys_mkdir (ebx, ecx);
        edx |= edx;
        if (edx != 0) {
            goto label_7;
        }
        *(edi) = 0x2f;
        esi++;
        edx = 0;
        edi = esi;
        al = 0x2f;
        fcn_080480ee ();
    }
    edx++;
    if (esi != edi) {
        goto label_3;
    }
label_7:
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mkdir/ia32_elf/subject.exe @ 0x80480ee */
#include <stdint.h>
 
int8_t fcn_080480ee (void) {
    ah = al;
    __asm ("clc");
    do {
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_0;
        }
    } while (al != ah);
    __asm ("stc");
label_0:
    esi--;
    return al;
}

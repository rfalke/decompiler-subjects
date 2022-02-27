/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/killall/ia32_elf/subject.exe @ 0x804807a */
#include <stdint.h>
 
int32_t entry0 (void) {
    *(0x80484ef) = 0xf;
    eax = 0;
    ecx = 0;
    ecx--;
    __asm ("repne scasb al, byte es:[edi]");
    if (*((edi - 5)) == 0x666f6469) {
        goto label_1;
    }
    if (*((edi - 2)) == 0x35) {
        goto label_2;
    }
    while (al == 0x65) {
label_0:
        esi |= esi;
        if (esi == 0) {
            goto label_3;
        }
        ecx = 0;
        al = *(esi);
        esi++;
        if (al != 0x2d) {
            goto label_4;
        }
        al = *(esi);
        esi++;
        if (al == 0x2d) {
            goto label_4;
        }
        if (al <= 0x39) {
            goto label_5;
        }
    }
    if (al == 0x67) {
        goto label_6;
    }
    if (al == 0x69) {
        goto label_7;
    }
    if (al == 0x6c) {
        goto label_5;
    }
    if (al == 0x71) {
        goto label_8;
    }
    if (al == 0x76) {
        goto label_9;
    }
    if (al == 0x56) {
        goto label_10;
    }
    if (al == 0x77) {
        goto label_0;
    }
    if (al == 0x73) {
        goto label_11;
    }
    if (al == 0x78) {
        goto label_12;
    }
    if (al == 0x6f) {
        goto label_13;
    }
    edi = esi - 1;
    esi = 0x8048430;
    do {
        eax = *(esi);
        esi += 4;
        eax |= eax;
        if (eax == 0) {
            goto label_14;
        }
        esi++;
    } while (eax != *(edi));
    esi--;
    al = *(esi);
    esi++;
    *(0x80484ef) = al;
    goto label_3;
label_14:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80483d6, 0x10);
    esi = edi + 1;
    *(esi) = 0xa;
    esi -= 3;
    edx = 4;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0x4);
    ebx = 1;
    eax = 1;
    eax = sys_exit (0x1);
label_6:
    ecx++;
label_7:
    ecx++;
label_8:
    ecx++;
label_9:
    ecx++;
label_10:
    ecx++;
label_11:
    ecx++;
label_12:
    ecx++;
label_13:
    ecx++;
    __asm ("bts dword [0x80484e3], ecx");
    goto label_0;
label_5:
    __asm ("int3");
label_4:
label_3:
    void (*ebp)() ();
label_2:
    goto label_0;
label_1:
    *(0x80484df) = 1;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/killall/ia32_elf/subject.exe @ 0x804804c */
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

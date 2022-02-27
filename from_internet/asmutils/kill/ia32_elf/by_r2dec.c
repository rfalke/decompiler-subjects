/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/kill/ia32_elf/subject.exe @ 0x8048147 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    edi--;
    if (edi == 0) {
        goto label_2;
    }
    bl = *(esi);
    if (bl != 0x2d) {
        ecx = 0xf;
        goto label_3;
    }
    esi++;
    bl = *(esi);
    if (bl != 0x6c) {
        goto label_4;
    }
    edi = 0x8048081;
    do {
        if (*(edi) == 0) {
            goto label_5;
        }
        esi = *(edi);
        esi &= 0xf;
        edi++;
        edi++;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0xed, 0xe);
        edx = 1;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x8048146, 0x1);
        edi += esi;
    } while (1);
label_5:
    edx = 1;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048145, 0x1);
    goto label_2;
label_4:
    edi--;
    if (edi == 0) {
        goto label_2;
    }
    eax = fcn_0804804c ();
    bl |= bl;
    if (bl != 0) {
        ecx = eax;
        goto label_6;
    }
    eax = 0;
    do {
        bl = *(esi);
        bl |= bl;
        if (bl == 0) {
            goto label_7;
        }
        *((eax + 0x804822c)) = bl;
        if (al == 5) {
            goto label_8;
        }
        al++;
        esi++;
    } while (1);
label_7:
    al |= al;
    if (al == 0) {
        goto label_2;
    }
label_8:
    ebx = 0;
    edx = 0;
    edx--;
    edx--;
label_0:
    cl = al;
    esi = 0;
    do {
        edx++;
        edx++;
        dl += bh;
        bh = *((edx + 0x8048081));
        bh |= bh;
        if (bh == 0) {
            goto label_2;
        }
    } while (bh != cl);
label_1:
    bl = *((esi + 0x804822c));
    if (bl != *((edx + esi + 0x8048083))) {
        goto label_0;
    }
    esi++;
    __asm ("loop 0x80481fb");
    goto label_1;
    cl = *((edx + 0x8048082));
    do {
label_6:
label_3:
        eax = fcn_0804804c ();
        bl |= bl;
        if (bl == 0) {
            goto label_2;
        }
        eax = 0x25;
        eax = sys_kill (0xea, ecx);
        edi--;
    } while (edi != 0);
label_2:
    eax = 1;
    eax = sys_exit (ebx);
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/kill/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t fcn_0804804c (void) {
    eax = 0;
    ebx = 0;
    ecx = 0;
    edi = 0xa;
    cl = *(esi);
    if (cl != 0x2d) {
        goto label_0;
    }
    bh++;
    esi++;
    do {
        cl = *(esi);
label_0:
        cl -= 0x30;
        if (cl < 0) {
            goto label_1;
        }
        if (cl > 9) {
            goto label_1;
        }
        edx:eax = eax * edi;
        eax += ecx;
        bl++;
        esi++;
    } while (1);
label_1:
    bh |= bh;
    if (bh != 0) {
        eax = -eax;
    }
    ecx = edi;
    return eax;
}

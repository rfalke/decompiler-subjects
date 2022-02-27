/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mknod/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
uint32_t entry0 (void) {
    ebx = 0;
    eax = 0x3c;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    esi = 0x1b6;
    esi ^= eax;
    ebx = 0x3c;
    ebx = 0x3c;
    do {
        ebx++;
    } while (*(ebx) != 0);
    ebx--;
    if (*(ebx) != 0x6f) {
        ebx = 0x3c;
        ebx |= ebx;
        if (ebx == 0) {
            goto label_0;
        }
        if (*(ebx) == 0x6d2d) {
            ebx++;
            ebx++;
            if (*(ebx) == 0) {
                ebx = 0x3c;
                ebx |= ebx;
                if (ebx == 0) {
                    goto label_0;
                }
            }
            void (*0x804814f)() ();
            ebx |= ebx;
            if (ebx == 0) {
                goto label_0;
            }
        }
        ebp |= ebp;
        if (ebp == 0) {
            goto label_0;
        }
        if (*(ebp) == 0x62) {
            goto label_1;
        }
        if (*(ebp) == 0x63) {
            goto label_2;
        }
        if (*(ebp) == 0x75) {
            goto label_2;
        }
        if (*(ebp) == 0x70) {
            goto label_3;
        }
    } else {
        ebx |= ebx;
        if (ebx == 0) {
            goto label_0;
        }
        if (*(ebx) != 0x6d2d) {
            goto label_3;
        }
        ebx++;
        ebx++;
        if (*(ebx) == 0) {
            ebx |= ebx;
            if (ebx == 0) {
                goto label_0;
            }
        }
        void (*0x804814f)() ();
        ebx |= ebx;
        if (ebx == 0) {
            goto label_0;
        }
    }
    while (ebp == 0) {
label_0:
        ebx = 2;
        eax = 4;
        eax = sys_write (0x2, 0x8048122, 0x2d);
        bl = 1;
        goto label_4;
label_1:
        ecx = 0;
        ch = 0x60;
        goto label_5;
label_2:
        ecx = 0;
        ch = 0x20;
        goto label_5;
label_3:
        ecx = 0;
        ch = 0x10;
        edx = 0;
        ecx |= esi;
        goto label_6;
label_5:
        ecx |= esi;
        ebp |= ebp;
    }
    eax = fcn_08048167 ();
    eax <<= 8;
    tmp_0 = eax;
    eax = edx;
    edx = tmp_0;
    ebp |= ebp;
    if (ebp == 0) {
        goto label_0;
    }
    eax = fcn_08048167 ();
    edx += eax;
label_6:
    eax = 0xe;
    eax = sys_mknod (ebx, ecx, 0xed);
    tmp_1 = eax;
    eax = ebx;
    ebx = tmp_1;
label_4:
    eax = 1;
    eax = sys_exit (ebx);
    if (edx >= 0) {
        goto label_7;
    }
    __asm ("insd dword es:[edi], dx");
    ebp = *((esi + 0x6f)) * 0x64;
    *((ebx + 0x2d)) &= bl;
    __asm ("insd dword es:[edi], dx");
    *((ebp + 0x6f)) &= ch;
    *((esi + 0x41)) &= cl;
    ebp--;
    ebp++;
    *((ecx + ebx*2 + 0x50)) &= dl;
    ebp++;
    *((ebp + 0x41)) &= cl;
    edx--;
    edi--;
    *((ebp + 0x49)) &= cl;
    esi--;
    edi--;
    dh |= *(ecx);
    *(ecx) <<= 0xf6;
    cl = 3;
    do {
        al = *(ebx);
        ebx++;
        al -= 0x30;
        if (al < 0) {
            goto label_8;
        }
        if (al >= 8) {
            goto label_8;
        }
        esi <<= cl;
        esi |= eax;
    } while (1);
label_8:
    return eax;
label_7:
    __asm ("out 0x5a, eax");
    ecx = edx;
    ebx = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mknod/ia32_elf/subject.exe @ 0x8048167 */
#include <stdint.h>
 
int32_t fcn_08048167 (void) {
    eax = 0;
    ebx = 0;
    do {
        bl = *(ebp);
        ebp++;
        bl -= 0x30;
        if (bl < 0) {
            goto label_0;
        }
        if (bl > 9) {
            goto label_0;
        }
        edx = 0;
        ecx = 0xa;
        edx:eax = eax * ecx;
        eax += ebx;
    } while (1);
label_0:
    edx = 0xa;
}

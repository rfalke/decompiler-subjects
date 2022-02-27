/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/report/ia32_elf/subject.exe @ 0x804922a */
#include <stdint.h>
 
uint32_t entry0 (int32_t arg_4h) {
    eax = void (*0x804922f)() ();
    ebp += 0xffffee1d;
    ebx--;
    if (ebx == 0) {
        goto label_0;
    }
    esi = esp + 4;
    do {
        eax = *(esi);
        esi += 4;
        if (eax == 0) {
            goto label_1;
        }
        eax = fcn_080492f1 ();
        ebx--;
    } while (ebx >= 0);
label_0:
    eax = 0;
    void (*0x80492a1)() ();
    ecx = ebp + 0x1187;
    while (ebx < 0) {
        ecx = ebp + 0x116a;
        fcn_080492d9 ();
        ebx = 0;
        eax = 1;
        eax = sys_exit (ebx);
label_1:
        esi = *((esi - 8));
        fcn_08049319 ();
        eax = ecx;
        ebx = ebp + 0x121e;
        tmp_0 = esp;
        esp = ebx;
        ebx = tmp_0;
        ebx >>= 1;
    }
    ebx >>= 1;
    if (ebx < 0) {
        goto label_0;
    }
    ebx >>= 1;
    if (ebx < 0) {
        ecx = ebp + 0x1106;
        edx = *((ebp + 0x1148));
        edx++;
    } else {
        ecx = ebp + 0xd46;
        edx = *((ebp + 0xe40));
    }
    if (eax < 0) {
        eax = -eax;
    }
    if (eax >= edx) {
        ecx = esi;
        fcn_080492d9 ();
        eax = edx;
    }
    eax = *((ecx + eax*2 - 2));
    ecx += eax;
    edx = *(ecx);
    ecx += 3;
    edx--;
    __asm ("pushal");
    if (edx > 0) {
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, ecx, edx);
    }
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/report/ia32_elf/subject.exe @ 0x80492f1 */
#include <stdint.h>
 
void fcn_080492f1 (int32_t arg_114ch) {
    ebx = *(eax);
    edx = 8;
    esi = ebp + 0x114c;
    do {
        ax = *(esi);
        esi += 2;
        ecx = eax;
        eax = *(esi);
        esi += 4;
        if (eax == 0) {
            goto label_0;
        }
        if (bx != cx) {
            if (ebx != eax) {
                goto label_1;
            }
        }
        dh |= dl;
label_1:
        dl >>= 1;
    } while (dl != 0);
label_0:
    ebx = 8;
    esi = 8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/report/ia32_elf/subject.exe @ 0x80492d9 */
#include <stdint.h>
 
void fcn_080492d9 (void) {
    __asm ("pushal");
    edx = ecx - 1;
    do {
        edx++;
    } while ((*(edx) & 0xff) != 0);
    edx -= ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/report/ia32_elf/subject.exe @ 0x8049319 */
#include <stdint.h>
 
int32_t fcn_08049319 (void) {
    eax = *(esi);
    ecx = 0;
    if (al == 0x2d) {
        esi++;
        eax >>= 8;
    }
    if (al == 0x30) {
        goto label_2;
    }
    if (al < 0x30) {
        goto label_3;
    }
    if (al > 0x39) {
        goto label_3;
    }
    eax = ecx;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al >= 0) {
            if (al < 0xa) {
                goto label_4;
            }
        }
        return eax;
label_3:
        void (*0x8049250)() ();
label_4:
        ecx *= 5;
        ecx = eax + ecx*2;
    } while (1);
label_2:
    ebx = ecx;
    cx = 0x803;
    if (ah == 0x78) {
        esi += 2;
        cx = 0x1004;
    }
label_1:
    al = *(esi);
    esi++;
    al -= 0x30;
    while (al < 0) {
label_0:
        ecx = ebx;
        return eax;
        if (al < 0xa) {
            goto label_5;
        }
        al -= 7;
    }
    if (al < ch) {
        goto label_6;
    }
    al -= 0x20;
label_5:
    if (al >= ch) {
        goto label_0;
    }
label_6:
    ebx <<= cl;
    bl |= al;
    goto label_1;
}

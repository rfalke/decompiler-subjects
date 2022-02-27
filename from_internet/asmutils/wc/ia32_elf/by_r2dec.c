/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/wc/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    eax--;
    if (eax == 0) {
        goto label_3;
    }
    do {
label_2:
        if (ebx == 0) {
            goto label_4;
        }
        esi = 0x80481b4;
        edi = 0x80481bd;
        ecx = 0;
        cl = 3;
        dl = 4;
label_0:
        ax = *(esi);
        esi += 2;
        if (*(ebx) != ax) {
            goto label_5;
        }
        *(0x80481ba) |= dl;
    } while (1);
label_5:
    dl >>= 1;
    eax = 0;
    memset (edi, eax, ecx);
    __asm ("loop 0x804806d");
    goto label_0;
    eax = 0;
    if (*(ebx) != 0x2d) {
        edi = ebx;
        *(0x80481ca) = 1;
        ecx = 0;
        eax = 5;
        eax = sys_open (ebx, ecx, edx);
        if (eax < 0) {
            goto label_6;
        }
    } else {
label_3:
        *(0x80481c9) = 1;
    }
label_1:
    eax = 3;
    eax = sys_read (0xeb, 0x80481db, 0x1000);
    if (eax < 0) {
        goto label_6;
    }
    if (eax == 0) {
        goto label_7;
    }
    esi = ecx;
    ecx = eax;
    eax = 0;
    do {
        ebx = 0x80481c5;
        al = *(esi);
        esi++;
        *(ebx)++;
        ebx -= 4;
        if (al != 0x20) {
            if (al != 9) {
                if (al == 0xa) {
                    goto label_8;
                }
                ah = 1;
            }
        } else {
label_8:
            if (ah == 0) {
                goto label_9;
            }
            *(ebx)++;
            ah = 0;
        }
label_9:
        ebx -= 4;
        if (al == 0xa) {
            *(ebx)++;
        }
        ecx--;
    } while (ecx != 0);
    goto label_1;
label_7:
    ecx = 0;
    bl = *(0x80481ba);
    cl = 3;
    dl = 4;
    esi = 0x80481bd;
    do {
        eax = *(esi);
        esi += 4;
        if (bl != 0) {
            if ((bl & dl) == 0) {
                goto label_10;
            }
        }
        edi = 0x80481cb;
        ecx = 0x80481cb;
        fcn_08048194 ();
        void (*0x8048172)() ();
label_10:
        dl >>= 1;
        __asm ("loop 0x8048111");
    } while (1);
    if (*(0x80481c9) != 1) {
        void (*0x8048172)() ();
    } else {
        ecx = 0x80481bb;
        eax = void (*0x8048172)() ();
        goto label_2;
label_4:
        if (*(0x80481ca) == 0) {
            *(0x80481ca) = 1;
            eax = 0;
            goto label_3;
        }
        ebx = 0;
        goto label_11;
label_6:
        ebx = 0;
        ebx--;
label_11:
        eax = 1;
        eax = sys_exit (ebx);
    }
    __asm ("pushal");
    esi = ecx;
    fcn_08048184 ();
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, edx);
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/wc/ia32_elf/subject.exe @ 0x8048194 */
#include <stdint.h>
 
uint32_t fcn_08048194 (void) {
    __asm ("pushal");
    ecx = 0;
    ebx = ecx;
    bl = 0xa;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl += 0x30;
        ecx++;
    } while (eax != 0);
    do {
        eax = edx;
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x80481a8");
    } while (1);
    ax = 9;
    *(es:edi) = ax;
    es:edi += 2;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/wc/ia32_elf/subject.exe @ 0x8048184 */
#include <stdint.h>
 
int32_t fcn_08048184 (void) {
    eax = 0;
    edx = eax;
    edx--;
    do {
        edx++;
        al = *(esi);
        esi++;
    } while (al != 0);
    eax = esi;
    return eax;
}

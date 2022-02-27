/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/hdragon/ia32_elf/subject.exe @ 0x8048098 */
#include <stdint.h>
 
void entry0 (void) {
    ecx = 2;
    ebx = 0x80480fb;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax |= eax;
    if (eax < 0) {
        goto label_0;
    }
    edi = eax;
    esi = 1;
    edx = 2;
    ecx = 0x4b000;
    eax = 0;
    al = 0xc0;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax |= eax;
    if (eax < 0) {
        goto label_1;
    }
    edi = eax;
    ecx = 0x4b000;
    al = 0;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    edi = eax;
    esi = esp;
    eax++;
    edx = 0x10;
    fcn_0804804c ();
    eax = 0x5b;
    eax = sys_munmap (0xed, 0x4b000);
label_1:
    eax = 0x5b;
    eax = 6;
    eax = sys_close (0xea);
label_0:
    eax = 1;
    eax = sys_exit (ebx);
    __asm ("das");
    if (eax <= 0) {
        void (*0x804812f)() ();
    }
    __asm ("bound si, dword [eax]");
    bh += bh;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/hdragon/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void fcn_0804804c (void) {
    do {
label_0:
        __asm ("pushal");
        edx |= edx;
        if (edx == 0) {
            goto label_1;
        }
        edx--;
        al = 1;
        fcn_0804804c ();
    } while (1);
    *(esi) += al;
    *(esi) &= 3;
    al = 0xff;
    eax = fcn_0804804c ();
    goto label_0;
    goto label_2;
label_1:
    eax = *(esi);
    esi += 4;
    if (al != 0) {
        if (al != 2) {
            if (al == 1) {
                goto label_3;
            }
            eax = 0xffffffffffffffff;
            eax = 0xfffffd80;
        } else {
        } else {
            ax = 0x280;
        }
    }
label_3:
    eax += *(esi);
    *((edi + eax)) = 0xe;
    *(esi) = eax;
    esi = 0xffffffffffffffff;
    ecx = 0;
    cx--;
    __asm ("loop 0x8048094");
label_2:
    __asm ("popal");
}

/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/scan/ia32_elf/subject.exe @ 0x804806e */
#include <stdint.h>
 
int32_t entry0 (void) {
    if (dl <= 3) {
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804804d, 0x21);
        ebx = 1;
        eax = 1;
        eax = sys_exit (0x1);
    }
    edx = 1;
    esi = 1;
    edi = 0x8048195;
    eax = 0;
    ecx = 0;
    edx = 0;
label_0:
    ebx = 0;
    do {
        al = *(esi);
        esi++;
        edx++;
        al -= 0x30;
        if (al < 0) {
            goto label_1;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_1:
    *((edi + ecx + 4)) = bl;
    ecx++;
    if (ecx != 4) {
        goto label_0;
    }
    *(edi) = 2;
    esi = 1;
    eax = 0;
    ebx = 0;
    do {
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_2;
        }
        al -= 0x30;
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_2:
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    *(0x80481ab) = eax;
    eax = 0;
    ebx = 0;
    do {
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_3;
        }
        al -= 0x30;
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_3:
    tmp_1 = eax;
    eax = ebx;
    ebx = tmp_1;
    *(0x80481ad) = eax;
    esi = 0;
    si = *(0x80481ab);
    do {
        fcn_08048105 ();
        si++;
    } while (si != *(0x80481ad));
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/scan/ia32_elf/subject.exe @ 0x8048105 */
#include <stdint.h>
 
int32_t fcn_08048105 (void) {
    ecx = esp;
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (ebx, ecx);
    dx = si;
    *((edi + 3)) = dl;
    *((edi + 2)) = dh;
    ebx = 3;
    eax = 0x66;
    eax = sys_socketcall (0x3, 0xe);
    if (eax == 0) {
        edi = 0x80481a5;
        eax = 0;
        eax = esi;
        fcn_0804817a ();
        edx = 6;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x80481a5, 0x6);
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804804c, 0x1);
        edi = 4;
    }
    eax = 4;
    eax = 6;
    eax = sys_close (0xea);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/scan/ia32_elf/subject.exe @ 0x804817a */
#include <stdint.h>
 
int32_t fcn_0804817a (void) {
    ecx = 6;
    al = 0x20;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    eax = 6;
    cl = 0xa;
    do {
        edx:eax = (int64_t) eax;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        dl += 0x30;
        edi--;
        *(edi) = dl;
        eax |= eax;
    } while (eax != 0);
    return eax;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mandelbrot/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    ecx = 2;
    ebx = 0x80480a7;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    edi = eax;
    esi = 1;
    edx = 3;
    ecx = 0x4b000;
    eax = 0;
    al = 0xc0;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    edi = eax;
    ecx = 0x1e0;
label_1:
    esi = 0x280;
label_0:
    ebx = 0;
    edx = 0;
    do {
        eax = ebx;
        eax -= edx;
        edx += ebx;
        edx:eax = eax * edx;
        eax >>= 8;
        tmp_0 = eax;
        eax = ebx;
        ebx = tmp_0;
        ebx -= esi;
        edx:eax = eax * edx;
        __asm ("shld edx, eax, 0x19");
        edx -= ecx;
        if (dh > 0) {
            goto label_2;
        }
        ebp--;
    } while (ebp != 0);
label_2:
    tmp_1 = eax;
    eax = ebp;
    ebp = tmp_1;
    *(es:edi) = al;
    es:edi++;
    esi--;
    if (esi != 0) {
        goto label_0;
    }
    __asm ("loop 0x8048073");
    goto label_1;
}

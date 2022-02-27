/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readkey/ia32_elf/subject.exe @ 0x8048064 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    edx = 0x80480fe;
    ecx = 0x5401;
    fcn_0804805c ();
    edx = 0x8048122;
    fcn_0804805c ();
    *(0x804812e) &= 0xfffffff4;
    ecx = 0x5402;
    eax = fcn_0804805c ();
    eax = 0;
    *(0x8048122) = eax;
    edx = 4;
    ebx = 0;
    eax = 3;
    eax = sys_read (ebx, 0x8048122, 0x4);
    ecx = 3;
    edx = 3;
    fcn_0804805c ();
    ecx = 8;
    esi = 0x8048105;
    edx = *(0x8048122);
    ebx = 0x804804c;
    do {
        eax = edx;
        al &= 0xf;
        __asm ("xlatb");
        *(esi) = al;
        esi--;
        edx >>= 4;
        __asm ("loop 0x80480c8");
    } while (1);
    *(0x8048106) = 0xa;
    *(0x80480fc) = 0x7830;
    edx = 0xb;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80480fc, 0xb);
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/readkey/ia32_elf/subject.exe @ 0x804805c */
#include <stdint.h>
 
void fcn_0804805c (void) {
    ebx = 0;
    eax = 0x36;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
}

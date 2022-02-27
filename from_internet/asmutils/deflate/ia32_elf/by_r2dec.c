/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/deflate/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    if (*((esi - 8)) != 0x69) {
        eax = 0x8048070;
    } else {
        eax = 0x80480ab;
    }
    void (*eax)() ();
    eax = 1;
    eax = sys_exit (ebx);
    *(eax) += al;
    esi = 0x8088569;
    edi = 0x8188569;
    ebx = 0;
    eax = 3;
    eax = sys_read (ebx, 0xe, 0x100000);
    al = 0;
    *(es:edi) = al;
    es:edi++;
    memset (edi, eax, ecx);
    uint32_t (*0x804806c)(uint32_t, uint32_t, uint32_t) (eax, 3, 1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/deflate/ia32_elf/subject.exe @ 0x8048478 */
#include <stdint.h>
 
int32_t fcn_08048478 (void) {
    __asm ("pushal");
    eax = 0x8088569;
    edi = 0x8048569;
    ecx = 0x10000;
    memset (edi, eax, ecx);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/deflate/ia32_elf/subject.exe @ 0x80484fb */
#include <stdint.h>
 
int32_t fcn_080484fb (void) {
    __asm ("pushal");
    eax = 0;
    al = *((esi - 1));
    ah = *((esi - 2));
    eax <<= 2;
    eax += 0x8048569;
    edx = *(eax);
    *(0x8048560) = edx;
    *(eax) = esi;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/deflate/ia32_elf/subject.exe @ 0x8048546 */
#include <stdint.h>
 
void fcn_08048546 (void) {
    edi = *(0x8048560);
    __asm ("cmpsb byte [esi], byte ptr es:[edi]");
    edi = esi;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/deflate/ia32_elf/subject.exe @ 0x804848c */
#include <stdint.h>
 
int32_t fcn_0804848c (void) {
    __asm ("pushal");
    cl = *(0x804855a);
    al <<= cl;
    bl = *(0x804855b);
    bl |= al;
    *(0x804855b) = bl;
    cl++;
    if (cl == 8) {
        *(0x804855a) = 0;
        eax = *(0x8048564);
        *(eax) = bl;
        *(0x8048564) = edi;
        __asm ("popal");
        edi++;
        return eax;
    }
    *(0x804855a) = cl;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/deflate/ia32_elf/subject.exe @ 0x8048552 */
#include <stdint.h>
 
void fcn_08048552 (void) {
    *(0x8048560)++;
    esi++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/deflate/ia32_elf/subject.exe @ 0x80484cb */
#include <stdint.h>
 
int8_t fcn_080484cb (void) {
    al = *(0x804855b);
    cl = *(0x804855a);
    al >>= cl;
    al &= 1;
    cl++;
    if (cl == 8) {
        *(0x804855a) = 0;
        al = *(esi);
        esi++;
        *(0x804855b) = al;
        ecx = eax;
        return al;
    }
    *(0x804855a) = cl;
    ecx = eax;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/deflate/ia32_elf/subject.exe @ 0x8048518 */
#include <stdint.h>
 
int32_t fcn_08048518 (void) {
    __asm ("pushal");
    eax = 0;
    al = *((edi - 1));
    ah = *((edi - 2));
    eax <<= 2;
    eax += 0x8048569;
    edx = *(eax);
    *(0x8048560) = edx;
    *(eax) = edi;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/deflate/ia32_elf/subject.exe @ 0x8048535 */
#include <stdint.h>
 
void fcn_08048535 (void) {
    esi = *(0x8048560);
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    *(0x8048560) = esi;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-024_for_gcd/x64_elf/subject.exe @ 0x40011a */
#include <stdint.h>
 
int32_t main (void) {
    signed int64_t var_4h;
    *((rbp - 4)) = 0;
    while (*((rbp - 4)) <= 9) {
        eax = *((rbp - 4));
        eax += eax;
        edx = rax + 1;
        eax = *((rbp - 4));
        esi = edx;
        edi = eax;
        _rela_plt ();
        *((rbp - 4))++;
    }
    eax = 0;
    return eax;
}

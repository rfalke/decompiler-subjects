/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/true/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int8_t entry0 (void) {
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    ebx = 0;
    *((esi - 5)) >>= 1;
    ebx = rotate_left32 (ebx, 1);
    eax = 1;
    eax = sys_exit (ebx);
}

/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_336/ia32_mz/subject.exe @ 0x25e */
#include <stdint.h>
 
int16_t entry0 (void) {
    ds = cs;
    cx = *(0xc);
    si = *(0xc);
    si--;
    di = si;
    bx = ds;
    bx += *(0xa);
    es = bx;
    __asm ("std");
    do {
        *(es:di) = *(si);
        cx--;
        si++;
        es:di++;
    } while (cx != 0);
    ax = 0x2b;
    __asm ("retf");
}

/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-014_calls/x64_elf/subject.exe @ 0x400144 */
#include <stdint.h>
 
int32_t entry0 (void) {
    /* [02] -r-x section size 129 named .text */
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-014_calls/x64_elf/subject.exe @ 0x400173 */
#include <stdint.h>
 
int32_t f (void) {
    int64_t var_4h;
    *((rbp - 4)) = 0x14;
    eax = 0;
    eax = _text ();
    if (eax != 0) {
        ecx = 4;
        edx = 3;
        esi = 2;
        edi = 1;
        eax = g ();
        *((rbp - 4)) += eax;
    }
    *((rbp - 4)) += 0xa;
    ecx = *((rbp - 4));
    edx = *((rbp - 4));
    esi = *((rbp - 4));
    eax = *((rbp - 4));
    edi = *((rbp - 4));
    g ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-014_calls/x64_elf/subject.exe @ 0x40014f */
#include <stdint.h>
 
int32_t g (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_10h;
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_4h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 4)) = edi;
    *((rbp - 8)) = esi;
    *((rbp - 0xc)) = edx;
    *((rbp - 0x10)) = ecx;
    eax = *((rbp - 8));
    edx = *((rbp - 4));
    edx += eax;
    eax = *((rbp - 0xc));
    edx += eax;
    eax = *((rbp - 0x10));
    eax += edx;
    return eax;
}

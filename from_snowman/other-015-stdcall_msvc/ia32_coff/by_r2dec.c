/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-015-stdcall_msvc/ia32_coff/subject.exe @ 0x670 */
#include <stdint.h>
 
int32_t h (void) {
    /* [02] -r-x section size 121 named .text-2 */
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-015-stdcall_msvc/ia32_coff/subject.exe @ 0x680 */
#include <stdint.h>
 
int32_t g_16 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    eax = *((ebp + 8));
    eax += *((ebp + 0xc));
    eax += *((ebp + 0x10));
    eax += *((ebp + 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-015-stdcall_msvc/ia32_coff/subject.exe @ 0x6a0 */
#include <stdint.h>
 
uint32_t f (void) {
    int32_t var_4h;
    *((ebp - 4)) = 0x14;
    eax = _h (ecx);
    if (eax != 0) {
        eax = _g@16 (1, 2, 3, 4);
        eax += *((ebp - 4));
        *((ebp - 4)) = eax;
    }
    eax = *((ebp - 4));
    eax += 0xa;
    *((ebp - 4)) = eax;
    ecx = *((ebp - 4));
    edx = *((ebp - 4));
    eax = *((ebp - 4));
    ecx = *((ebp - 4));
    _g@16 (ecx, eax, edx, ecx);
    return eax;
}

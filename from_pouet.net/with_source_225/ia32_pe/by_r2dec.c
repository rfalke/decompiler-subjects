/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_225/ia32_pe/subject.exe @ 0x4000b4 */
#include <stdint.h>
 
int32_t entry0 (void) {
    /* [00] -rwx section size 74 named blob */
    eax = 0;
    void (*eax)(uint32_t) (0x4000ee);
    edi = 0;
    eax = 0;
    eax = void (*eax)(uint32_t) (edi);
    tmp_0 = eax;
    eax = esi;
    esi = tmp_0;
label_0:
    ebx = 0;
    if (di == 0xbb8) {
        goto label_1;
    }
    do {
        eax = edi;
        eax ^= ebx;
        eax = 0;
        void (*eax)(uint32_t, uint32_t, uint32_t, uint32_t) (esi, ebx, edi, eax);
        ebx++;
    } while (bx != 0xfa0);
    edi++;
    goto label_0;
label_1:
    eax = 0;
    void (*eax)(uint32_t, uint32_t) (ebx, esi);
    return eax;
}

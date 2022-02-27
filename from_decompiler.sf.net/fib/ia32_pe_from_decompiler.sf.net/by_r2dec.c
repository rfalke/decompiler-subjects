/* r2dec pseudo code output */
/* SUBJECTS/from_decompiler.sf.net/fib/ia32_pe_from_decompiler.sf.net/subject.exe @ 0x4010a0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    int32_t var_4h;
    eax = esp + 4;
    eax = fcn_00401000 (9);
    ecx = eax;
    eax = fcn_00401000 (8);
    ecx += eax;
    fcn_00401050 (ecx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompiler.sf.net/fib/ia32_pe_from_decompiler.sf.net/subject.exe @ 0x401000 */
#include <stdint.h>
 
int32_t fcn_00401000 (int32_t arg_8h) {
    do {
        /* [00] -r-x section size 4096 named .text */
label_0:
        esi = *((esp + 8));
        if (esi < 1) {
            eax = 1;
            return eax;
        }
        eax = esi - 2;
        eax = fcn_00401000 (eax);
    } while (1);
    esi--;
    edi = eax;
    eax = fcn_00401000 (esi);
    goto label_0;
    eax += edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompiler.sf.net/fib/ia32_pe_from_decompiler.sf.net/subject.exe @ 0x401050 */
#include <stdint.h>
 
int32_t fcn_00401050 (int32_t arg_10h, int32_t arg_8h, int32_t arg_ch) {
    ecx = *((esp + 8));
    eax = *((esp + 0xc));
    edi = ecx + eax - 1;
    if (ecx >= edi) {
        goto label_0;
    }
    esi = *((esp + 0x10));
    while (ecx < edi) {
        eax = 0xcccccccd;
        edx:eax = eax * esi;
        edx >>= 3;
        eax = edx * 5;
        eax += eax;
        ebx = eax;
        eax = esi;
        eax -= ebx;
        al += 0x30;
        *(ecx) = al;
        ecx++;
        esi = edx;
    }
    ebx = esi;
label_0:
    *(ecx) = 0;
    edi = esi;
    return eax;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4124e9 */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_14h;
    int32_t var_4h;
label_0:
    fcn_004128cc (0x41af08);
    ebx = 0;
    *((ebp - 4)) = ebx;
    eax = *(fs:0x18);
    esi = *((eax + 4));
    *((ebp - 0x1c)) = ebx;
    edi = 0x41ced8;
    do {
        eax = InterlockedCompareExchange (edi, esi, ebx);
        if (eax == ebx) {
            goto label_1;
        }
        if (eax == esi) {
            esi = 0;
            esi++;
            *((ebp - 0x1c)) = esi;
            goto label_2;
        }
        Sleep (0x3e8);
    } while (1);
label_1:
    esi = 0;
    esi++;
label_2:
    eax = *(0x41ced4);
    if (eax == esi) {
        _amsg_exit (0x1f);
    } else {
        eax = *(0x41ced4);
        if (eax == 0) {
            *(0x41ced4) = esi;
            eax = _initterm_e (0x416160, 0x41616c);
            if (eax == 0) {
                goto label_3;
            }
            *((ebp - 4)) = 0xfffffffe;
            eax = 0xff;
            goto label_4;
        }
        *(0x41ca3c) = esi;
    }
label_3:
    eax = *(0x41ced4);
    if (eax == esi) {
        _initterm (0x416154, 0x41615c);
        *(0x41ced4) = 2;
    }
    if (*((ebp - 0x1c)) == ebx) {
        InterlockedExchange (edi, ebx);
    }
    if (*(0x41cee4) != ebx) {
        eax = fcn_00412852 (0x41cee4);
        if (eax == 0) {
            goto label_5;
        }
        uint32_t (*0x41cee4)(uint32_t, uint32_t, uint32_t) (ebx, 2, ebx);
    }
label_5:
    eax = *(0x41ca24);
    ecx = *(sym.imp.MSVCR80.dll___initenv);
    *(ecx) = eax;
    eax = fcn_004035b0 ();
    *(0x41ca38) = eax;
    if (*(0x41ca2c) == ebx) {
        exit (rdi);
        eax = *((ebp - 0x14));
        ecx = *(eax);
        ecx = *(ecx);
        *((ebp - 0x20)) = ecx;
        _XcptFilter (ecx, eax);
        return eax;
    }
    if (*(0x41ca3c) == ebx) {
        _cexit ();
    }
    *((ebp - 4)) = 0xfffffffe;
    eax = *(0x41ca38);
label_4:
    fcn_00412911 ();
    return eax;
    fcn_00412974 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4152a2 */
#include <stdint.h>
 
void _CIsin (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4152a8 */
#include <stdint.h>
 
void _CIcos (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412520 */
#include <stdint.h>
 
void fcn_00412520 (void) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    if (*(0x41cecc) == 0) {
        void (*0x412556)() ();
    }
    *(esp) = fp_stack[0];
    fp_stack--;
    __asm ("cvttsd2si eax, qword [esp]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4011e0 */
#include <stdint.h>
 
uint32_t fcn_004011e0 (int32_t arg_40h, int32_t arg_3ch) {
    int32_t var_10h;
    *(fp_stack--) = *((esp + 0x3c));
    *((esp + 0x20)) = fp_stack[0];
    *(fp_stack--) = *((esp + 0x40));
    ebp = *((esp + 0x3c));
    *((esp + 0x2c)) = fp_stack[0];
    fp_stack--;
    edi = eax;
    _CIsin (edi, esi, ebp);
    fp_stack[0] *= *((esp + 0x30));
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x28));
    _CIcos ();
    fp_stack[0] *= *((esp + 0x30));
    *((esp + 0x18)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x50));
    *((esp + 0x28)) = fp_stack[0];
    _CIsin ();
    fp_stack[0] *= *((esp + 0x30));
    *((esp + 0x24)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x28));
    _CIcos ();
    fp_stack[0] *= *((esp + 0x30));
    *((esp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x54));
    *((esp + 0x28)) = fp_stack[0];
    _CIsin ();
    fp_stack[0] *= *((esp + 0x30));
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x28));
    _CIcos ();
    fp_stack[0] *= *((esp + 0x30));
    esi = 0;
    *((esp + 0x54)) = fp_stack[0];
    fp_stack--;
    if (edi < 4) {
        goto label_0;
    }
    edx = *((esp + 0x40));
    *(fp_stack--) = *((esp + 0x54));
    *(fp_stack--) = *((esp + 0x14));
    ecx = edx + 8;
    *(fp_stack--) = *((esp + 0x18));
    ebx = ebp;
    *(fp_stack--) = *((esp + 0x1c));
    ebx -= edx;
    *(fp_stack--) = *((esp + 0x20));
    edx = edi - 4;
    *(fp_stack--) = *((esp + 0x24));
    edx >>= 2;
    edx++;
    *((esp + 0x30)) = fp_stack[0];
    fp_stack--;
    eax = ebp + 0x10;
    esi = edx*4;
    do {
        *(fp_stack--) = *((ecx - 8));
        *((esp + 0x48)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx - 4));
        *((esp + 0x4c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(ecx);
        *((esp + 0x50)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x48));
        *(fp_stack--) = *((esp + 0x4c));
        *((esp + 0x28)) = fp_stack[0];
        fp_stack[0] *= fp_stack[6];
        *(fp_stack--) = fp_stack[5];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((eax - 0xc)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[5];
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] *= *((esp + 0x28));
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *((esp + 0x48)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((eax - 0xc));
        *((esp + 0x4c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x4c));
        *((esp + 0x28)) = fp_stack[0];
        *(fp_stack--) = *((esp + 0x50));
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] -= fp_stack[2];
        fp_stack++;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        *((eax - 0xc)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[3];
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= *((esp + 0x28));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((esp + 0x50)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x48));
        *(fp_stack--) = *((esp + 0x50));
        *((esp + 0x28)) = fp_stack[0];
        fp_stack[0] *= *((esp + 0x30));
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((eax - 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= *((esp + 0x28));
        *(fp_stack--) = *((esp + 0x30));
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_stack[1] -= fp_stack[0];
        fp_stack++;
        *((ecx + ebx)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx + 4));
        *((esp + 0x48)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx + 8));
        *((esp + 0x4c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx + 0xc));
        *((esp + 0x50)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x48));
        *(fp_stack--) = *((esp + 0x4c));
        *((esp + 0x28)) = fp_stack[0];
        fp_stack[0] *= fp_stack[6];
        *(fp_stack--) = fp_stack[5];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(eax) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[5];
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] *= *((esp + 0x28));
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *((esp + 0x48)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(eax);
        *((esp + 0x4c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x4c));
        *((esp + 0x28)) = fp_stack[0];
        *(fp_stack--) = *((esp + 0x50));
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] -= fp_stack[2];
        fp_stack++;
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        *(eax) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[3];
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= *((esp + 0x28));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((esp + 0x50)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x48));
        *(fp_stack--) = *((esp + 0x50));
        *((esp + 0x28)) = fp_stack[0];
        fp_stack[0] *= *((esp + 0x30));
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((eax - 4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= *((esp + 0x28));
        *(fp_stack--) = *((esp + 0x30));
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_stack[1] -= fp_stack[0];
        fp_stack++;
        *((eax + 4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx + 0x10));
        *((esp + 0x48)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx + 0x14));
        *((esp + 0x4c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx + 0x18));
        *((esp + 0x50)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x48));
        *(fp_stack--) = *((esp + 0x4c));
        *((esp + 0x28)) = fp_stack[0];
        fp_stack[0] *= fp_stack[6];
        *(fp_stack--) = fp_stack[5];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((eax + 0xc)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[5];
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] *= *((esp + 0x28));
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *((esp + 0x48)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((eax + 0xc));
        *((esp + 0x4c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x4c));
        *((esp + 0x28)) = fp_stack[0];
        *(fp_stack--) = *((esp + 0x50));
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] -= fp_stack[2];
        fp_stack++;
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        *((eax + 0xc)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[3];
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= *((esp + 0x28));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((esp + 0x50)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x48));
        *(fp_stack--) = *((esp + 0x50));
        *((esp + 0x28)) = fp_stack[0];
        fp_stack[0] *= *((esp + 0x30));
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((eax + 8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= *((esp + 0x28));
        *(fp_stack--) = *((esp + 0x30));
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_stack[1] -= fp_stack[0];
        fp_stack++;
        *((eax + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx + 0x1c));
        *((esp + 0x48)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx + 0x20));
        *((esp + 0x4c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx + 0x24));
        *((esp + 0x50)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x48));
        *(fp_stack--) = *((esp + 0x4c));
        *((esp + 0x28)) = fp_stack[0];
        fp_stack[0] *= fp_stack[6];
        *(fp_stack--) = fp_stack[5];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        ecx += 0x30;
        eax += 0x30;
        edx--;
        *((eax - 0x18)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[5];
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] *= *((esp + 0x28));
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *((esp + 0x48)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((eax - 0x18));
        *((esp + 0x4c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x4c));
        *((esp + 0x28)) = fp_stack[0];
        *(fp_stack--) = *((esp + 0x50));
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] -= fp_stack[2];
        fp_stack++;
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
        *((eax - 0x18)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[3];
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= *((esp + 0x28));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((esp + 0x50)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x48));
        *(fp_stack--) = *((esp + 0x50));
        *((esp + 0x28)) = fp_stack[0];
        fp_stack[0] *= *((esp + 0x30));
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((eax - 0x1c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= *((esp + 0x28));
        *(fp_stack--) = *((esp + 0x30));
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_stack[1] -= fp_stack[0];
        fp_stack++;
        *((eax - 0x14)) = fp_stack[0];
        fp_stack--;
    } while (edx != 0);
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack++;
    fp_stack++;
label_0:
    if (esi >= edi) {
        goto label_1;
    }
    *(fp_stack--) = *((esp + 0x54));
    ebx = *((esp + 0x40));
    *(fp_stack--) = *((esp + 0x14));
    eax = esi * 3;
    *(fp_stack--) = *((esp + 0x18));
    eax += eax;
    *(fp_stack--) = *((esp + 0x1c));
    eax += eax;
    *(fp_stack--) = *((esp + 0x20));
    edx = ebp;
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    ecx = eax + ebp + 4;
    *(fp_stack--) = *((esp + 0x24));
    edx -= ebx;
    *((esp + 0x30)) = fp_stack[0];
    fp_stack--;
    eax = eax + ebx + 8;
    edi -= esi;
    do {
        *(fp_stack--) = *((eax - 8));
        eax += 0xc;
        *((esp + 0x48)) = fp_stack[0];
        fp_stack--;
        ecx += 0xc;
        edi--;
        *(fp_stack--) = *((eax - 0x10));
        *((esp + 0x4c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((eax - 0xc));
        *((esp + 0x50)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x48));
        *(fp_stack--) = *((esp + 0x4c));
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] *= fp_stack[6];
        *(fp_stack--) = fp_stack[5];
        fp_stack[0] *= fp_stack[3];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ecx - 0xc)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = fp_stack[5];
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_stack[0] *= fp_stack[4];
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *((esp + 0x48)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx - 0xc));
        *((esp + 0x4c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x4c));
        *(fp_stack--) = *((esp + 0x50));
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *((ecx - 0xc)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[3];
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((esp + 0x50)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x48));
        *(fp_stack--) = *((esp + 0x50));
        *(fp_stack--) = *((esp + 0x30));
        fp_stack[0] *= fp_stack[1];
        *(fp_stack--) = *((esp + 0x28));
        fp_stack[0] *= fp_stack[3];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ecx - 0x10)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= *((esp + 0x28));
        *(fp_stack--) = *((esp + 0x30));
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_stack[1] -= fp_stack[0];
        fp_stack++;
        *((eax + edx - 0xc)) = fp_stack[0];
        fp_stack--;
    } while (edi != 0);
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack++;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x401600 */
#include <stdint.h>
 
uint32_t fcn_00401600 (int32_t arg_8h) {
    ebp = *((esp + 8));
    esi = 0;
    if (ebp <= 0) {
        goto label_0;
    }
    *(fp_stack--) = *((esp + 0x18));
    *(fp_stack--) = *(0x41ad28);
    edi = eax;
    fp_stack[0] *= fp_stack[1];
    edi += 4;
    *(fp_stack--) = *((esp + 0x18));
    *(fp_stack--) = *((esp + 0x14));
    *(fp_stack--) = *(0x41ad20);
    do {
        *(fp_stack--) = *((edi + 4));
        fp_stack[0] += fp_stack[1];
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((edi - 4));
        fp_stack[0] *= fp_stack[4];
        *(fp_stack--) = *((esp + 0x10));
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] /= fp_stack[2];
        fp_stack++;
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] += fp_stack[2];
        fp_stack++;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        eax = fcn_00412520 ();
        *((ebx + esi*8)) = eax;
        *(fp_stack--) = *(edi);
        fp_stack[0] *= fp_stack[6];
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        fp_stack[0] += fp_stack[3];
        eax = fcn_00412520 ();
        *((ebx + esi*8 + 4)) = eax;
        esi++;
        edi += 0xc;
    } while (esi < ebp);
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack++;
    fp_stack++;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x401000 */
#include <stdint.h>
 
int32_t fcn_00401000 (int32_t arg_4h, int32_t arg_14h, int32_t arg_24h_2, int32_t arg_24h, int32_t arg_2ch, int32_t arg_30h) {
    int32_t var_10h;
    int32_t var_14h;
    /* [00] -r-x section size 86016 named .text */
    edx = *((esp + 4));
    ecx = *((eax + 4));
    ebx = *((esp + 0x14));
    ebp = *(eax);
    esi = *((esp + 0x24));
    edi = *((eax + 0xc));
    if (edx < 0) {
        goto label_0;
    }
    eax = *((esp + 0x24));
    if (eax < 0) {
        goto label_0;
    }
    if (ebx < 0) {
        goto label_0;
    }
    if (esi < 0) {
        goto label_0;
    }
    if (edx >= ebp) {
        goto label_0;
    }
    if (eax >= ebp) {
        goto label_0;
    }
    if (ebx >= ecx) {
        goto label_0;
    }
    if (esi >= ecx) {
        goto label_0;
    }
    ecx = eax;
    esi -= ebx;
    ecx -= edx;
    eax = esi;
    edx:eax = (int64_t) eax;
    ebx = eax;
    ebx ^= edx;
    ebx -= edx;
    eax = ecx;
    edx:eax = (int64_t) eax;
    eax ^= edx;
    eax -= edx;
    if (ebx <= eax) {
        goto label_1;
    }
    edx = *((esp + 0x28));
    eax = *((esp + 0x20));
    if (edx < eax) {
        ebx = *((esp + 0x24));
        eax = edx;
        edx = *((esp + 0x30));
        *((esp + 0x1c)) = edx;
        dl = *((esp + 0x2c));
        *((esp + 0x30)) = dl;
        edx = *((esp + 0x1c));
        esi = -esi;
        ecx = -ecx;
        *((esp + 0x2c)) = dl;
    } else {
        ebx = *((esp + 0x1c));
    }
    if (esi == 0) {
        goto label_0;
    }
    edx = ebp;
    edx *= eax;
    eax = *((esp + 0x30));
    edx += ebx;
    ebx = *((esp + 0x2c));
    eax -= ebx;
    eax <<= 0x10;
    edi += edx;
    edx:eax = (int64_t) eax;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    ebx <<= 0x10;
    *((esp + 0x14)) = eax;
    eax = ecx;
    eax <<= 0x10;
    edx:eax = (int64_t) eax;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    edx = 0;
    *((esp + 0x10)) = eax;
    if (esi <= 0) {
        goto label_0;
    }
    *((esp + 0x1c)) = esi;
    while (edi != 0) {
        edx += *((esp + 0x10));
        ebx += *((esp + 0x14));
        ecx = edx;
        ecx >>= 0x10;
        eax = *((ecx + edi));
        ecx += edi;
        esi = ebx;
        eax <<= 6;
        esi >>= 0x10;
        al = *((eax + esi + 0x478840));
        edi += ebp;
        *(ecx) = al;
    }
    return eax;
label_1:
    edx = *((esp + 0x24));
    eax = *((esp + 0x1c));
    if (edx < eax) {
        ebx = *((esp + 0x28));
        eax = edx;
        edx = *((esp + 0x30));
        *((esp + 0x1c)) = edx;
        dl = *((esp + 0x2c));
        ecx = -ecx;
        *((esp + 0x30)) = dl;
        dl = *((esp + 0x1c));
        esi = -esi;
    } else {
        dl = *((esp + 0x2c));
        ebx = *((esp + 0x20));
    }
    if (ecx == 0) {
        goto label_0;
    }
    ebp *= ebx;
    ebp += eax;
    eax = *((esp + 0x30));
    ebx = (int32_t) dl;
    eax -= ebx;
    eax <<= 0x10;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    edi += ebp;
    ebx <<= 0x10;
    eax = esi;
    eax <<= 0x10;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    esi = 0;
    *((esp + 0x14)) = eax;
    if (ecx <= 0) {
        goto label_0;
    }
    *((esp + 0x1c)) = ecx;
    do {
        esi += *((esp + 0x14));
        ebx += ebp;
        edx = esi;
        edx >>= 0x10;
        edx *= 5;
        edx <<= 6;
        eax = *((edx + edi));
        edx += edi;
        ecx = ebx;
        eax <<= 6;
        ecx >>= 0x10;
        al = *((eax + ecx + 0x478840));
        edi++;
        *(edx) = al;
    } while (edi != 0);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4152ae */
#include <stdint.h>
 
void _CIsqrt (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4019e0 */
#include <stdint.h>
 
int32_t fcn_004019e0 (void) {
    int32_t var_10h;
    *((esp + 0x10)) = 0;
    ebx = 0x478840;
label_0:
    edi = *((esp + 0x10));
    ecx = 0;
    edi += 0xffffffff;
    esi = ebp;
    do {
        eax = ebp;
        edx:eax = (int64_t) eax;
        edx &= 0x3f;
        eax += edx;
        eax >>= 6;
        al++;
        *((ebx + ecx)) = al;
        ecx++;
        esi += edi;
    } while (ecx < 0x40);
    ebp--;
    ebx += 0x40;
    if (ebp > 0xffffffc1) {
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4018c0 */
#include <stdint.h>
 
uint32_t fcn_004018c0 (void) {
    int32_t var_14h;
    ebx = *(sym.imp.MSVCR80.dll_rand);
    esi = eax;
    esi += 8;
    edi = 0x2ee;
    while ((ah & 0x41) == 0) {
        fp_stack++;
label_0:
        eax = void (*ebx)() ();
        *(fp_stack--) = *((esp + 0x14));
        fp_stack[0] /= *(0x41ad10);
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x14));
        fp_stack[0] += fp_stack[0];
        fp_stack[0] -= *(0x41acd0);
        *((esp + 0xc)) = fp_stack[0];
        fp_stack--;
        eax = void (*ebx)(uint32_t) (eax);
        *(fp_stack--) = *((esp + 0x14));
        fp_stack[0] /= *(0x41ad10);
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x14));
        fp_stack[0] += fp_stack[0];
        fp_stack[0] -= *(0x41acd0);
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        eax = void (*ebx)(uint32_t) (eax);
        *(fp_stack--) = *((esp + 0x14));
        fp_stack[0] /= *(0x41ad10);
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x14));
        fp_stack[0] += fp_stack[0];
        fp_stack[0] -= *(0x41acd0);
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x10));
        *(fp_stack--) = *((esp + 0xc));
        *(fp_stack--) = *((esp + 0x14));
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= fp_stack[3];
        fp_stack++;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] += fp_stack[2];
        fp_stack++;
        fp_stack[0] *= fp_stack[0];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        ax = _CIsqrt (eax);
        *((esp + 0x18)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 1.0;
        *(fp_stack--) = *((esp + 0x18));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = 1.0;
    esi += 0xc;
    edi--;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *(fp_stack--) = *((esp + 0xc));
    fp_stack[0] *= fp_stack[1];
    *(fp_stack--) = *((esp + 0x20));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= fp_stack[2];
    fp_stack++;
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x10));
    fp_stack[0] *= fp_stack[2];
    fp_stack[0] *= fp_stack[1];
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x14));
    fp_stack[0] *= fp_stack[2];
    fp_stack++;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0xc));
    *((esi - 0x14)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x10));
    *((esi - 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x14));
    *((esi - 0xc)) = fp_stack[0];
    fp_stack--;
    if (edi != 0) {
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4023d0 */
#include <stdint.h>
 
uint32_t fcn_004023d0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    file* stream;
    int32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    file* var_8h;
    uint32_t var_4h;
    esi = *((ebp + 0x10));
    *((ebp - 0x1c)) = 0;
    printf (rdi);
    eax = fopen (rdi, rsi);
    edi = eax;
    *((ebp - 0x18)) = edi;
    if (edi == 0) {
        void (*ebx)(char*, uint32_t) ("pngloader: could not open file %s\n", esi);
        eax = 1;
        return eax;
    }
    eax = fcn_00407b20 ("1.2.8", 0, 0x4023c0, 0x4023c0);
    *((ebp - 8)) = eax;
    if (eax == 0) {
        void (*ebx)(char*, uint32_t) ("pngloader: file %s doesn't seem to be a valid .png file\n", esi);
        fclose (rdi);
        eax = 1;
        return eax;
    }
    eax = fcn_004083b0 (eax);
    *((ebp - 0x10)) = eax;
    if (eax == 0) {
        void (*ebx)(char*, uint32_t) ("pngloader: file %s doesn't seem to be a valid .png file\n", esi);
        fclose (rdi);
        eax = ebp - 8;
        fcn_00407b50 (eax, 0, 0);
        eax = 1;
        return eax;
    }
    ecx = *((ebp - 8));
    eax = _setjmp3 (ecx, 0);
    if (eax != 0) {
        edx = *((ebp + 0x10));
        void (*ebx)(char*, uint32_t) ("pngloader: file %s doesn't seem to be a valid .png file\n", edx);
        fcn_00407b50 (ebp - 8, ebp - 0x10, 0);
        edx = *((ebp - 0x18));
        fclose (rdi);
        eax = 1;
        return eax;
    }
    eax = *((ebp - 0x18));
    ecx = *((ebp - 8));
    fcn_00408290 (ecx, eax);
    edx = *((ebp - 0x1c));
    eax = *((ebp - 8));
    fcn_00407c10 (eax, edx);
    ecx = *((ebp - 0x10));
    edx = *((ebp - 8));
    fcn_00405510 (edx, ecx);
    edx = *((ebp - 0x10));
    eax = *((ebp - 8));
    fcn_00405140 (eax, edx, ebp - 0x14, ebp - 0xc, ebp - 0x2c, ebp - 0x28, ebp - 0x24, 0, 0);
    ecx = *((ebp - 0xc));
    eax = malloc (ecx*4);
    esi = 0;
    edi = eax;
    if (*((ebp - 0xc)) <= esi) {
        goto label_1;
    }
    do {
        eax = *((ebp - 0x10));
        ecx = *((ebp - 8));
        eax = fcn_00405120 (ecx, eax);
        eax = void (*ebx)(uint32_t) (eax);
        *((edi + esi*4)) = eax;
        if (eax == 0) {
            goto label_2;
        }
        esi++;
    } while (esi < *((ebp - 0xc)));
label_1:
    edx = *((ebp - 8));
    fcn_004069c0 (edx, edi);
    eax = *((ebp - 0x14));
    esi = *((ebp + 8));
    ecx = *((ebp - 0xc));
    *(esi) = eax;
    *((esi + 8)) = eax;
    eax *= ecx;
    *((esi + 4)) = ecx;
    eax = void (*ebx)(uint32_t) (eax);
    *((esi + 0xc)) = eax;
    if (eax == 0) {
        printf (rdi);
        eax = 1;
        return eax;
label_2:
        eax = printf (rdi);
        eax |= 0xffffffff;
        return eax;
    }
    ebx = 0;
    esi = eax;
    if (*((ebp - 0xc)) <= ebx) {
        goto label_3;
    }
    edx = *((ebp - 0x14));
label_0:
    eax = *((edi + ebx*4));
    ecx = 0;
    if (edx <= 0) {
        goto label_4;
    }
    do {
        dl = *(eax);
        *(esi) = dl;
        edx = *((ebp - 0x14));
        ecx++;
        esi++;
        eax++;
    } while (ecx < edx);
label_4:
    ebx++;
    if (ebx < *((ebp - 0xc))) {
        goto label_0;
    }
label_3:
    ebx = *(sym.imp.MSVCR80.dll_free);
    esi = 0;
    if (*((ebp - 0xc)) <= esi) {
        goto label_5;
    }
    do {
        eax = *((edi + esi*4));
        void (*ebx)(uint32_t) (eax);
        esi++;
    } while (esi < *((ebp - 0xc)));
label_5:
    void (*ebx)(uint32_t) (edi);
    eax = malloc (0x300);
    *((ebp - 4)) = eax;
    eax = malloc (0xc00);
    esi = *((ebp + 0xc));
    ecx = *((ebp - 8));
    edx = ebp - 4;
    *(esi) = eax;
    eax = *((ebp - 0x10));
    *((ebp - 0x20)) = 0x100;
    eax = fcn_00405270 (ecx, eax, edx, ebp - 0x20);
    ecx = 0;
    eax = 0;
    do {
        edx = *((ebp - 4));
        edx = *((eax + edx));
        edi = *(esi);
        edx >>= 2;
        *((ecx + edi)) = edx;
        edx = *((ebp - 4));
        edx = *((eax + edx + 1));
        edi = *(esi);
        edx >>= 2;
        *((ecx + edi + 4)) = edx;
        edx = *((ebp - 4));
        edx = *((eax + edx + 2));
        edi = *(esi);
        edx >>= 2;
        *((ecx + edi + 8)) = edx;
        edx = *((ebp - 4));
        edx = *((eax + edx + 3));
        edi = *(esi);
        edx >>= 2;
        *((ecx + edi + 0xc)) = edx;
        edx = *((ebp - 4));
        edx = *((eax + edx + 4));
        edi = *(esi);
        edx >>= 2;
        *((ecx + edi + 0x10)) = edx;
        edx = *((ebp - 4));
        edx = *((eax + edx + 5));
        edi = *(esi);
        edx >>= 2;
        *((ecx + edi + 0x14)) = edx;
        edx = *((ebp - 4));
        edx = *((eax + edx + 6));
        edi = *(esi);
        edx >>= 2;
        *((ecx + edi + 0x18)) = edx;
        edx = *((ebp - 4));
        edx = *((eax + edx + 7));
        edi = *(esi);
        edx >>= 2;
        *((ecx + edi + 0x1c)) = edx;
        edx = *((ebp - 4));
        edx = *((eax + edx + 8));
        edi = *(esi);
        edx >>= 2;
        *((ecx + edi + 0x20)) = edx;
        edx = *((ebp - 4));
        edx = *((eax + edx + 9));
        edi = *(esi);
        edx >>= 2;
        *((ecx + edi + 0x24)) = edx;
        edx = *((ebp - 4));
        edx = *((eax + edx + 0xa));
        edi = *(esi);
        edx >>= 2;
        *((ecx + edi + 0x28)) = edx;
        edx = *((ebp - 4));
        edx = *((eax + edx + 0xb));
        edi = *(esi);
        edx >>= 2;
        *((ecx + edi + 0x2c)) = edx;
        eax += 0xc;
        ecx += 0x30;
    } while (eax < 0x300);
    eax = *((ebp - 0x10));
    ecx = *((ebp - 8));
    fcn_00406a20 (ecx, eax);
    fcn_00407b50 (ebp - 8, ebp - 0x10, 0);
    ecx = *((ebp - 0x18));
    eax = fclose (rdi);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x407b20 */
#include <stdint.h>
 
int32_t fcn_00407b20 (int32_t arg_14h, int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    eax = *((esp + 0x10));
    ecx = *((esp + 0xc));
    edx = *((esp + 8));
    eax = *((esp + 0x14));
    fcn_004052b0 (eax, edx, ecx, eax, 0, 0, 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4052b0 */
#include <stdint.h>
 
int32_t fcn_004052b0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h) {
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_4h;
    eax = *(0x41c340);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    eax = *((ebp + 8));
    ecx = *((ebp + 0xc));
    edx = *((ebp + 0x10));
    *((ebp - 0x6c)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x64)) = eax;
    eax = *((ebp + 0x18));
    *((ebp - 0x68)) = ecx;
    ecx = *((ebp + 0x1c));
    *((ebp - 0x70)) = edx;
    edx = *((ebp + 0x20));
    *((ebp - 0x60)) = eax;
    *((ebp - 0x74)) = ecx;
    *((ebp - 0x5c)) = edx;
    eax = fcn_00408980 (1, ecx, eax);
    esi = eax;
    *((ebp - 0x58)) = esi;
    if (esi != 0) {
        fcn_00408390 (esi);
        eax = 0xf4240;
        *((esi + 0x264)) = eax;
        *((esi + 0x268)) = eax;
        eax = _setjmp3 (esi, 0);
        esi = *((ebp - 0x58));
        if (eax == 0) {
            goto label_0;
        }
        eax = *((esi + 0xac));
        fcn_00408bf0 (esi, eax);
        ecx = *((ebp - 0x60));
        edx = *((ebp - 0x5c));
        *((esi + 0xac)) = 0;
        eax = fcn_00408a30 (esi, edx, ecx);
    }
    eax = 0;
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00412237 ();
    return eax;
label_0:
    eax = *((ebp - 0x5c));
    ecx = *((ebp - 0x74));
    edx = *((ebp - 0x60));
    fcn_00408b30 (esi, edx, ecx, eax);
    eax = *((ebp - 0x64));
    ecx = *((ebp - 0x70));
    edx = *((ebp - 0x68));
    fcn_00408720 (esi, edx, ecx, eax);
    edi = *((ebp - 0x6c));
    eax = "1.2.8";
    ecx = edi;
    ecx -= eax;
    edx = 0x20000;
    do {
        bl = *((ecx + eax));
        if (bl != *(eax)) {
            *((esi + 0x6c)) |= edx;
        }
        bl = *(eax);
        eax++;
    } while (bl != 0);
    if ((*((esi + 0x6c)) & edx) != 0) {
        if (edi != 0) {
            al = *(edi);
            if (al == *(0x4163f0)) {
                if (al == 0x31) {
                    cl = *((edi + 2));
                    if (cl != *(0x4163f2)) {
                        goto label_1;
                    }
                }
                if (al != 0x30) {
                    goto label_2;
                }
                if (*((edi + 2)) >= 0x39) {
                    goto label_2;
                }
            }
label_1:
        }
        ebx = *(sym.imp.MSVCR80.dll_sprintf);
        if (edi != 0) {
            edx = ebp - 0x54;
            void (*ebx)(uint32_t, char*, uint32_t) (edx, "Application was compiled with png.h from libpng-%.20s", edi);
            fcn_004087f0 (esi, ebp - 0x54);
        }
        ecx = ebp - 0x54;
        void (*ebx)(uint32_t, char*, char*) (ecx, "Application  is  running with png.c from libpng-%.20s", "1.2.8");
        fcn_004087f0 (esi, ebp - 0x54);
        *((esi + 0x6c)) = 0;
        fcn_00408740 (esi, "Incompatible libpng version in application and library");
    }
label_2:
    *((esi + 0xb0)) = 0x2000;
    eax = fcn_00408ba0 (esi, 0x2000);
    *((esi + 0xac)) = eax;
    *((esi + 0x94)) = 0x407d70;
    eax = esi + 0x74;
    *((esi + 0x98)) = 0x407dc0;
    *((esi + 0x9c)) = esi;
    eax = fcn_00412c20 (eax, "1.2.3", 0x38);
    eax += 6;
    if (eax <= 6) {
        /* switch table (7 cases) at 0x4054f0 */
        goto label_3;
    } else {
    }
label_3:
    fcn_00408740 (esi, "Unknown zlib error");
    ecx = *((esi + 0xac));
    *((esi + 0x80)) = ecx;
    edx = *((esi + 0xb0));
    *((esi + 0x84)) = edx;
    fcn_00408920 (esi, 0, 0);
    eax = _setjmp3 (esi, 0);
    if (eax != 0) {
        abort ();
    }
    ecx = *((ebp - 4));
    eax = *((ebp - 0x58));
    ecx ^= ebp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408980 */
#include <stdint.h>
 
int32_t fcn_00408980 (int32_t arg_274h, int32_t arg_278h, int32_t arg_288h) {
    int32_t var_ch;
    int32_t var_254h;
    int32_t var_26ch;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x26c)) = eax;
    ecx = *((esp + 0x274));
    eax = *((esp + 0x278));
    if (ecx == 2) {
        esi = 0x120;
    } else {
        if (ecx != 1) {
            goto label_0;
        }
        esi = 0x26c;
    }
    if (eax != 0) {
        ecx = *((esp + 0x288));
        void (*eax)(uint32_t) (esp + 0xc);
    } else {
        eax = malloc ();
    }
    edi = eax;
    if (edi != 0) {
        memset (edi, 0, esi);
    }
    eax = edi;
    ecx = *((esp + 0x26c));
    ecx ^= esp;
    eax = fcn_00412237 ();
    return eax;
label_0:
    ecx = *((esp + 0x270));
    ecx ^= esp;
    eax = 0;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408390 */
#include <stdint.h>
 
int32_t fcn_00408390 (int32_t arg_4h) {
    eax = *((esp + 4));
    ecx = 0;
    *((eax + 0x23c)) = ecx;
    *((eax + 0x239)) = cl;
    *((eax + 0x240)) = cl;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412500 */
#include <stdint.h>
 
void _setjmp3 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408bf0 */
#include <stdint.h>
 
int32_t fcn_00408bf0 (uint32_t arg_4h, int32_t arg_8h) {
    do {
        if (*((esp + 4)) != 0) {
            eax = *((esp + 8));
            if (eax == 0) {
                goto label_0;
            }
            free (eax);
        }
label_0:
        return eax;
        ecx = *((esp + 4));
        if (ecx == 0) {
            goto label_1;
        }
        edx = *((esp + 8));
        if (edx == 0) {
            goto label_1;
        }
        eax = *((ecx + 0x24c));
        *((esp + 8)) = edx;
        *((esp + 4)) = ecx;
        if (eax != 0) {
            void (*eax)() ();
        }
    } while (1);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408a30 */
#include <stdint.h>
 
int32_t fcn_00408a30 (int32_t arg_274h, int32_t arg_278h, int32_t arg_280h) {
    int32_t var_4h;
    int32_t var_24ch;
    int32_t var_26ch;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x26c)) = eax;
    eax = *((esp + 0x274));
    ecx = *((esp + 0x278));
    if (eax != 0) {
        if (ecx != 0) {
            edx = *((esp + 0x280));
            void (*ecx)(uint32_t) (esp + 4);
            ecx = *((esp + 0x26c));
            ecx ^= esp;
            fcn_00412237 ();
            return eax;
        }
        free ();
    }
    ecx = *((esp + 0x26c));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412237 */
#include <stdint.h>
 
void fcn_00412237 (int32_t arg_4h, int32_t arg_8h) {
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    if (ecx == *(0x41c340)) {
        return;
    }
    return void (*0x4125cb)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4125cb */
#include <stdint.h>
 
int32_t loc_004125cb (int32_t arg_4h, int32_t arg_8h) {
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    *(0x41cb48) = eax;
    *(0x41cb44) = ecx;
    *(0x41cb40) = edx;
    *(0x41cb3c) = ebx;
    *(0x41cb38) = esi;
    *(0x41cb34) = edi;
    *(0x41cb60) = ss;
    *(0x41cb54) = cs;
    *(0x41cb30) = ds;
    *(0x41cb2c) = es;
    *(0x41cb28) = fs;
    *(0x41cb24) = gs;
    __asm ("pushfd");
    eax = *(ebp);
    *(0x41cb4c) = eax;
    eax = *((ebp + 4));
    *(0x41cb50) = eax;
    eax = ebp + 8;
    *(0x41cb5c) = eax;
    eax = *((ebp - 0x320));
    *(0x41ca98) = 0x10001;
    eax = *(0x41cb50);
    *(0x41ca4c) = eax;
    *(0x41ca40) = 0xc0000409;
    *(0x41ca44) = 1;
    eax = *(0x41c340);
    *((ebp - 0x328)) = eax;
    eax = *(0x41c344);
    *((ebp - 0x324)) = eax;
    eax = IsDebuggerPresent ();
    *(0x41ca90) = eax;
    _crt_debugger_hook (1);
    SetUnhandledExceptionFilter (0);
    UnhandledExceptionFilter (0x417b68);
    if (*(0x41ca90) == 0) {
        _crt_debugger_hook (1);
    }
    eax = GetCurrentProcess (0xc0000409);
    TerminateProcess (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412ac6 */
#include <stdint.h>
 
void _crt_debugger_hook (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408b30 */
#include <stdint.h>
 
int32_t fcn_00408b30 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    eax = *((esp + 4));
    ecx = *((esp + 8));
    edx = *((esp + 0xc));
    *((eax + 0x244)) = ecx;
    ecx = *((esp + 0x10));
    *((eax + 0x248)) = edx;
    *((eax + 0x24c)) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408720 */
#include <stdint.h>
 
int32_t fcn_00408720 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    eax = *((esp + 4));
    ecx = *((esp + 8));
    edx = *((esp + 0xc));
    *((eax + 0x48)) = ecx;
    ecx = *((esp + 0x10));
    *((eax + 0x40)) = edx;
    *((eax + 0x44)) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4087f0 */
#include <stdint.h>
 
int32_t fcn_004087f0 (int32_t arg_8h_2, int32_t arg_8h) {
    ecx = *((esp + 8));
    esi = *((esp + 8));
    eax = 0;
    if ((*((esi + 0x6c)) & 0xc0000) == 0) {
        goto label_0;
    }
    if (*(ecx) != 0x23) {
        goto label_0;
    }
    eax = 1;
    dl = 0x20;
    do {
        if (*((eax + ecx)) == dl) {
            goto label_0;
        }
        if (*((eax + ecx + 1)) == dl) {
            goto label_1;
        }
        eax += 2;
    } while (eax < 0xf);
    goto label_0;
label_1:
    eax++;
label_0:
    edx = *((esi + 0x44));
    eax += ecx;
    if (edx != 0) {
        void (*edx)(uint32_t) (esi);
        return eax;
    }
    fcn_004085c0 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408740 */
#include <stdint.h>
 
int32_t fcn_00408740 (int32_t arg_40h, int32_t arg_6ch, int32_t arg_1ch, int32_t arg_24h) {
    void * s1;
    int32_t var_9h;
    int32_t var_10h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x10)) = eax;
    ebp = *((esp + 0x1c));
    edx = *((ebp + 0x6c));
    esi = *((esp + 0x24));
    if ((edx & 0xc0000) == 0) {
        goto label_0;
    }
    if (*(esi) != 0x23) {
        goto label_1;
    }
    eax = 1;
    cl = 0x20;
    do {
        if (*((esi + eax)) == cl) {
            goto label_2;
        }
        if (*((esi + eax + 1)) == cl) {
            goto label_3;
        }
        eax += 2;
    } while (eax < 0xf);
    goto label_2;
label_3:
    eax++;
label_2:
    if ((edx & 0x80000) != 0) {
        edi = eax - 1;
        ecx = 0;
        if (edi > 0) {
            eax = esi + 1;
            eax = memcpy (esp + 0x14, eax, edi);
            ecx = edi;
        }
        *((esp + ecx + 0xc)) = 0;
    } else {
        esi += eax;
        goto label_0;
label_1:
        if ((edx & 0x80000) == 0) {
            goto label_0;
        }
        *((esp + 8)) = 0x30;
        *((esp + 9)) = 0;
    }
    esi = esp + 8;
label_0:
    eax = *((ebp + 0x40));
    if (eax != 0) {
        void (*eax)(uint32_t, uint32_t) (ebp, esi);
    }
    fcn_00408490 (ebp, esi);
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408ba0 */
#include <stdint.h>
 
int32_t fcn_00408ba0 (int32_t arg_8h, int32_t arg_ch) {
    esi = *((esp + 8));
    if (esi != 0) {
        ecx = *((esp + 0xc));
        if (ecx == 0) {
            goto label_0;
        }
        eax = *((esi + 0x248));
        if (eax != 0) {
            void (*eax)() ();
        } else {
            eax = fcn_00408ab0 ();
        }
        edi = eax;
        if (edi == 0) {
            if ((*((esi + 0x6c)) & 0x100000) != 0) {
                goto label_1;
            }
            fcn_00408740 (esi, "Out of Memory!");
        }
label_1:
        eax = edi;
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412c20 */
#include <stdint.h>
 
int32_t fcn_00412c20 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    eax = *((esp + 0xc));
    ecx = *((esp + 8));
    edx = *((esp + 4));
    fcn_00412b50 (edx, 0xf, ecx, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412b50 */
#include <stdint.h>
 
int32_t fcn_00412b50 (int32_t arg_ch_2, int32_t arg_10h, int32_t arg_ch, uint32_t arg_14h) {
    eax = *((esp + 0xc));
    edi = 0;
    if (eax != edi) {
        if (*(eax) != 0x31) {
            goto label_0;
        }
        if (*((esp + 0x14)) != 0x38) {
            goto label_0;
        }
        esi = *((esp + 0xc));
        if (esi != edi) {
            *((esi + 0x18)) = edi;
            if (*((esi + 0x20)) == edi) {
                *((esi + 0x20)) = 0x414650;
                *((esi + 0x28)) = edi;
            }
            if (*((esi + 0x24)) == edi) {
                *((esi + 0x24)) = 0x414670;
            }
            eax = *((esi + 0x28));
            ecx = *((esi + 0x20));
            eax = void (*ecx)(uint32_t, uint32_t, uint32_t) (eax, 1, 0x2530);
            if (eax == edi) {
                eax = 0xfffffffc;
                return eax;
            }
            ecx = *((esp + 0x10));
            *((esi + 0x1c)) = eax;
            if (ecx < edi) {
                *((eax + 8)) = edi;
                ecx = -ecx;
            } else {
                edx = ecx;
                edx >>= 4;
                edx++;
                *((eax + 8)) = edx;
                if (ecx >= 0x30) {
                    goto label_1;
                }
                ecx &= 0xf;
            }
label_1:
            edx = ecx - 8;
            if (edx <= 7) {
                *((eax + 0x24)) = ecx;
                *((eax + 0x34)) = edi;
                eax = fcn_00412af0 (esi);
                return eax;
            }
            ecx = *((esi + 0x24));
            eax = *((esi + 0x28));
            void (*ecx)(uint32_t, uint32_t) (eax, eax);
            *((esi + 0x1c)) = edi;
        }
        eax = 0xfffffffe;
        return eax;
    }
label_0:
    eax = 0xfffffffa;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408920 */
#include <stdint.h>
 
int32_t fcn_00408920 (int32_t arg_8h_2, int32_t arg_8h, int32_t arg_10h) {
    eax = *((esp + 8));
    esi = *((esp + 8));
    *((esi + 0x54)) = eax;
    eax = *((esp + 0x10));
    if (eax != 0) {
        *((esi + 0x50)) = eax;
    } else {
        *((esi + 0x50)) = 0x4088e0;
    }
    if (*((esi + 0x4c)) != 0) {
        *((esi + 0x4c)) = 0;
        fcn_004087f0 (esi, "It's an error to set both read_data_fn and write_data_fn in the ");
        fcn_004087f0 (esi, "same structure.  Resetting write_data_fn to NULL.");
    }
    *((esi + 0x14c)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4083b0 */
#include <stdint.h>
 
int32_t fcn_004083b0 (int32_t arg_4h) {
    eax = *((esp + 4));
    if (eax == 0) {
        return eax;
    }
    ecx = *((eax + 0x244));
    edx = *((eax + 0x248));
    eax = fcn_00408980 (2, edx, ecx);
    *((esp + 4)) = eax;
    if (eax != 0) {
        eax = esp + 4;
        fcn_00407e40 (eax, 0x120);
        eax = *((esp + 0xc));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x407e40 */
#include <stdint.h>
 
int32_t fcn_00407e40 (int32_t arg_8h_2, uint32_t arg_8h) {
    esi = *((esp + 8));
    eax = *(esi);
    if (*((esp + 8)) < 0x120) {
        fcn_00408b80 (eax);
        eax = fcn_00408b60 (2);
        *(esi) = eax;
    }
    memset (eax, 0, 0x120);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408b80 */
#include <stdint.h>
 
int32_t fcn_00408b80 (int32_t arg_4h) {
    eax = *((esp + 4));
    fcn_00408a30 (eax, 0, 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408b60 */
#include <stdint.h>
 
int32_t fcn_00408b60 (int32_t arg_4h) {
    eax = *((esp + 4));
    fcn_00408980 (eax, 0, 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412506 */
#include <stdint.h>
 
void memset (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x407b50 */
#include <stdint.h>
 
int32_t fcn_00407b50 (int32_t arg_8h, int32_t arg_1ch, int32_t arg_20h) {
    int32_t var_10h;
    eax = *((esp + 8));
    esi = 0;
    edi = 0;
    *((esp + 0x10)) = esi;
    if (eax != 0) {
        esi = *(eax);
    }
    eax = *((esp + 0x1c));
    if (eax != 0) {
        edi = *(eax);
    }
    eax = *((esp + 0x20));
    if (eax != 0) {
        eax = *(eax);
        *((esp + 0x10)) = eax;
    }
    ecx = *((esp + 0x10));
    ebx = *((esi + 0x24c));
    ebp = *((esi + 0x244));
    fcn_00407890 (esi, edi, ecx);
    if (edi != 0) {
        fcn_00407e80 (esi, edi, 0x4000, 0xffffffffffffffff);
        fcn_00408a30 (edi, ebx, ebp);
        edx = *((esp + 0x38));
        *(edx) = 0;
    }
    edi = *((esp + 0x10));
    if (edi != 0) {
        fcn_00407e80 (esi, edi, 0x4000, 0xffffffffffffffff);
        fcn_00408a30 (edi, ebx, ebp);
        eax = *((esp + 0x3c));
        *(eax) = 0;
    }
    fcn_00408a30 (esi, ebx, ebp);
    ecx = *((esp + 0x24));
    *(ecx) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408290 */
#include <stdint.h>
 
int32_t fcn_00408290 (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 8));
    ecx = *((esp + 4));
    *((ecx + 0x54)) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x407c10 */
#include <stdint.h>
 
int32_t fcn_00407c10 (int32_t arg_ch_2, int32_t arg_ch) {
    esi = *((esp + 0xc));
    edi = *((esp + 0xc));
    if (esi > 8) {
        fcn_00408740 (edi, "Too many bytes for PNG signature.");
    }
    al = (esi < 0) ? 1 : 0;
    al--;
    eax &= esi;
    *((edi + 0x12c)) = al;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x405510 */
#include <stdint.h>
 
uint32_t fcn_00405510 (int32_t arg_ch, int32_t arg_14h) {
    int32_t var_14h;
    ebx = *((esp + 0xc));
    al = *((ebx + 0x12c));
    ebp = *((esp + 0x14));
    if (al < 8) {
        edi = (int32_t) al;
        esi = 8;
        esi -= edi;
        eax = edi + ebp + 0x20;
        fcn_004088c0 (ebx);
        ebp += 0x20;
        *((ebx + 0x12c)) = 8;
        eax = fcn_00407c40 (ebp, edi, esi);
        if (eax != 0) {
            if (edi < 4) {
                esi += 0xfffffffc;
                eax = fcn_00407c40 (ebp, edi, esi);
                if (eax != 0) {
                }
            } else {
            }
            fcn_00408740 (ebx, "PNG file corrupted by ASCII conversion");
        }
        if (edi >= 3) {
            goto label_1;
        }
        *((ebx + 0x68)) |= 0x1000;
    }
label_1:
    edi = ebx + 0x11c;
label_0:
    ecx = esp + 0x14;
    fcn_004088c0 (ebx);
    eax = fcn_00409d20 (ebx, esp + 0x1c);
    fcn_00407dd0 (ebx);
    fcn_00408ca0 (ebx, edi, 4);
    eax = 4;
    ecx = 0x41640c;
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_2;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_2:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_3;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_4;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_3;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_4;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_3;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_3;
            }
        }
label_4:
        eax = 1;
        if (esi > 0) {
            goto label_5;
        }
        eax |= 0xffffffff;
    } else {
label_3:
        eax = 0;
    }
label_5:
    if (eax == 0) {
        ecx = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_00409e10 (ebx, ecx, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "IEND";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_6;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_6:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_7;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_8;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_7;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_8;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_7;
            }
            esi = *(edx);
            edx = *(ecx);
            esi -= edx;
            if (esi == 0) {
                goto label_7;
            }
        }
label_8:
        eax = 1;
        if (esi > 0) {
            goto label_9;
        }
        eax |= 0xffffffff;
    } else {
label_7:
        eax = 0;
    }
label_9:
    if (eax == 0) {
        eax = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_0040a120 (ebx, eax);
        goto label_0;
    }
    ecx = *((esp + 0x18));
    eax = fcn_004082a0 (ecx, edi);
    edx = edi;
    eax = 4;
    if (eax == 0) {
        goto label_10;
    }
    ecx = "IDAT";
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_11;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_11:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_12;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_13;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_12;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_13;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_12;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_12;
            }
        }
label_13:
        eax = 1;
        if (esi > 0) {
            goto label_14;
        }
        eax |= 0xffffffff;
    } else {
label_12:
        eax = 0;
    }
label_14:
    ebx = *((esp + 0x18));
    if (eax == 0) {
        *((ebx + 0x68)) |= 4;
    }
    ecx = *((esp + 0x1c));
    fcn_0040bf40 (ebx, ecx, ebp);
    eax = 4;
    ecx = "PLTE";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_15;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_15:
        esi = *(edx);
        ebp = *(ecx);
        esi -= ebp;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_16;
            }
            esi = *(edx);
            ebp = *(ecx);
            esi -= ebp;
            if (esi != 0) {
                goto label_17;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_16;
            }
            esi = *(edx);
            ebp = *(ecx);
            esi -= ebp;
            if (esi != 0) {
                goto label_17;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_16;
            }
            esi = *(edx);
            edx = *(ecx);
            esi -= edx;
            if (esi == 0) {
                goto label_16;
            }
        }
label_17:
        eax = 1;
        if (esi > 0) {
            goto label_18;
        }
        eax |= 0xffffffff;
    } else {
label_16:
        eax = 0;
    }
label_18:
    if (eax == 0) {
        *((ebx + 0x68)) |= 2;
        goto label_0;
    }
    eax = 4;
    ecx = "IDAT";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_19;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_19:
        ebp = *(ecx);
        esi = *(edx);
        esi -= ebp;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_20;
            }
            ebp = *(ecx);
            esi = *(edx);
            esi -= ebp;
            if (esi != 0) {
                goto label_21;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_20;
            }
            ebp = *(ecx);
            esi = *(edx);
            esi -= ebp;
            if (esi != 0) {
                goto label_21;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_20;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_20;
            }
        }
label_21:
        eax = 1;
        if (esi > 0) {
            goto label_22;
        }
        eax |= 0xffffffff;
    } else {
label_20:
        eax = 0;
    }
label_22:
    if (eax != 0) {
        goto label_0;
    }
    eax = *((ebx + 0x68));
    if ((al & 1) != 0) {
        goto label_23;
    }
    eax = fcn_00408740 (ebx, "Missing IHDR before IDAT");
    return eax;
label_10:
    ecx = "PLTE";
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_24;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_24:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_25;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_26;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_25;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_26;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_25;
            }
            esi = *(edx);
            ecx = *(ecx);
            esi -= ecx;
            if (esi == 0) {
                goto label_25;
            }
        }
label_26:
        eax = 1;
        if (esi > 0) {
            goto label_27;
        }
        eax |= 0xffffffff;
    } else {
label_25:
        eax = 0;
    }
label_27:
    if (eax == 0) {
        edx = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_00409f90 (ebx, edx, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "IDAT";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_28;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_28:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_29;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_30;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_29;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_30;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_29;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_29;
            }
        }
label_30:
        eax = 1;
        if (esi > 0) {
            goto label_31;
        }
        eax |= 0xffffffff;
    } else {
label_29:
        eax = 0;
    }
label_31:
    if (eax == 0) {
        goto label_32;
    }
    eax = 4;
    ecx = "bKGD";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_33;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_33:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_34;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_35;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_34;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_35;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_34;
            }
            esi = *(edx);
            ecx = *(ecx);
            esi -= ecx;
            if (esi == 0) {
                goto label_34;
            }
        }
label_35:
        eax = 1;
        if (esi > 0) {
            goto label_36;
        }
        eax |= 0xffffffff;
    } else {
label_34:
        eax = 0;
    }
label_36:
    if (eax == 0) {
        edx = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_0040b150 (ebx, edx, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "cHRM";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_37;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_37:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_38;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_39;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_38;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_39;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_38;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_38;
            }
        }
label_39:
        eax = 1;
        if (esi > 0) {
            goto label_40;
        }
        eax |= 0xffffffff;
    } else {
label_38:
        eax = 0;
    }
label_40:
    if (eax == 0) {
        ecx = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_0040a450 (ebx, ecx, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "gAMA";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_41;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_41:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_42;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_43;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_42;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_43;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_42;
            }
            esi = *(edx);
            edx = *(ecx);
            esi -= edx;
            if (esi == 0) {
                goto label_42;
            }
        }
label_43:
        eax = 1;
        if (esi > 0) {
            goto label_44;
        }
        eax |= 0xffffffff;
    } else {
label_42:
        eax = 0;
    }
label_44:
    if (eax == 0) {
        eax = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_0040a170 (ebx, eax, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "hIST";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_45;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_45:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_46;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_47;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_46;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_47;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_46;
            }
            ecx = *(ecx);
            esi = *(edx);
            esi -= ecx;
            if (esi == 0) {
                goto label_46;
            }
        }
label_47:
        eax = 1;
        if (esi > 0) {
            goto label_48;
        }
        eax |= 0xffffffff;
    } else {
label_46:
        eax = 0;
    }
label_48:
    if (eax == 0) {
        edx = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_0040b390 (ebx, edx, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "oFFs";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_49;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_49:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_50;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_51;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_50;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_51;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_50;
            }
            esi = *(edx);
            eax = *(ecx);
            esi -= eax;
            if (esi == 0) {
                goto label_50;
            }
        }
label_51:
        eax = 1;
        if (esi > 0) {
            goto label_52;
        }
        eax |= 0xffffffff;
    } else {
label_50:
        eax = 0;
    }
label_52:
    if (eax == 0) {
        ecx = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_0040b650 (ebx, ecx, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "pCAL";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_53;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_53:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_54;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_55;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_54;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_55;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_54;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_54;
            }
        }
label_55:
        eax = 1;
        if (esi > 0) {
            goto label_56;
        }
        eax |= 0xffffffff;
    } else {
label_54:
        eax = 0;
    }
label_56:
    if (eax == 0) {
        ecx = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_0040b780 (ebx, ecx, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "sCAL";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_57;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_57:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_58;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_59;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_58;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_59;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_58;
            }
            esi = *(edx);
            edx = *(ecx);
            esi -= edx;
            if (esi == 0) {
                goto label_58;
            }
        }
label_59:
        eax = 1;
        if (esi > 0) {
            goto label_60;
        }
        eax |= 0xffffffff;
    } else {
label_58:
        eax = 0;
    }
label_60:
    if (eax == 0) {
        eax = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_0040b9e0 (ebx, eax, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "pHYs";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_61;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_61:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_62;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_63;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_62;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_63;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_62;
            }
            ecx = *(ecx);
            esi = *(edx);
            esi -= ecx;
            if (esi == 0) {
                goto label_62;
            }
        }
label_63:
        eax = 1;
        if (esi > 0) {
            goto label_64;
        }
        eax |= 0xffffffff;
    } else {
label_62:
        eax = 0;
    }
label_64:
    if (eax == 0) {
        edx = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_0040b530 (ebx, edx, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "sBIT";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_65;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_65:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_66;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_67;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_66;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_67;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_66;
            }
            esi = *(edx);
            eax = *(ecx);
            esi -= eax;
            if (esi == 0) {
                goto label_66;
            }
        }
label_67:
        eax = 1;
        if (esi > 0) {
            goto label_68;
        }
        eax |= 0xffffffff;
    } else {
label_66:
        eax = 0;
    }
label_68:
    if (eax == 0) {
        ecx = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_0040a2e0 (ebx, ecx, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "sRGB";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_69;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_69:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_70;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_71;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_70;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_71;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_70;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_70;
            }
        }
label_71:
        eax = 1;
        if (esi > 0) {
            goto label_72;
        }
        eax |= 0xffffffff;
    } else {
label_70:
        eax = 0;
    }
label_72:
    if (eax == 0) {
        ecx = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_0040a940 (ebx, ecx, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "iCCP";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_73;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_73:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_74;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_75;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_74;
            }
        }
label_75:
        eax = 1;
        if (esi > 0) {
            goto label_76;
        }
        eax |= 0xffffffff;
    } else {
label_74:
        eax = 0;
    }
label_76:
    if (eax == 0) {
        eax = *((esp + 0x1c));
        ebx = *((esp + 0x18));
        fcn_0040ab30 (ebx, eax, ebp);
        goto label_0;
    }
    eax = 4;
    ecx = "sPLT";
    edx = edi;
    esi = *(edx);
    if (esi != *(ecx)) {
        void (*0x40612c)() ();
    }
label_23:
    if (*((ebx + 0x126)) == 3) {
        if ((al & 2) != 0) {
            goto label_77;
        }
        fcn_00408740 (ebx, "Missing PLTE before IDAT");
        return eax;
label_32:
        esi = *((esp + 0x18));
        eax = *((esi + 0x68));
        if ((al & 1) == 0) {
        } else {
            if (*((esi + 0x126)) != 3) {
                goto label_78;
            }
            if ((al & 2) != 0) {
                goto label_78;
            }
        }
        fcn_00408740 (esi, "Missing PLTE before IDAT");
label_78:
        *((esi + 0x68)) |= 4;
        *((esi + 0x10c)) = ebp;
    }
label_77:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x405140 */
#include <stdint.h>
 
int32_t fcn_00405140 (int32_t arg_4h, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h, int32_t arg_24h, int32_t arg_28h, int32_t arg_2ch, int32_t arg_30h, int32_t arg_34h) {
    ecx = *((esp + 4));
    if (ecx != 0) {
        esi = *((esp + 0x18));
        if (esi == 0) {
            goto label_0;
        }
        ebx = *((esp + 0x1c));
        if (ebx == 0) {
            goto label_0;
        }
        ebp = *((esp + 0x20));
        if (ebp == 0) {
            goto label_0;
        }
        eax = *((esp + 0x24));
        if (eax == 0) {
            goto label_0;
        }
        edi = *((esp + 0x28));
        if (edi == 0) {
            goto label_0;
        }
        edx = *(esi);
        *(ebx) = edx;
        edx = *((esi + 4));
        *(ebp) = edx;
        edx = *((esi + 0x18));
        *(eax) = edx;
        if (*((esi + 0x18)) >= 1) {
            if (*((esi + 0x18)) <= 0x10) {
                goto label_1;
            }
        }
        fcn_00408740 (ecx, "Invalid bit depth");
        ecx = *((esp + 0x1c));
label_1:
        eax = *((esi + 0x19));
        *(edi) = eax;
        if (*((esi + 0x19)) > 6) {
            fcn_00408740 (ecx, "Invalid color type");
            ecx = *((esp + 0x1c));
        }
        eax = *((esp + 0x30));
        if (eax != 0) {
            edx = *((esi + 0x1a));
            *(eax) = edx;
        }
        eax = *((esp + 0x34));
        if (eax != 0) {
            edx = *((esi + 0x1b));
            *(eax) = edx;
        }
        eax = *((esp + 0x2c));
        if (eax != 0) {
            edx = *((esi + 0x1c));
            *(eax) = edx;
        }
        eax = *(ebx);
        if (eax != 0) {
            if (eax <= 0x7fffffff) {
                goto label_2;
            }
        }
        fcn_00408740 (ecx, "Invalid image width");
        ecx = *((esp + 0x1c));
label_2:
        eax = *(ebp);
        if (eax != 0) {
            if (eax <= 0x7fffffff) {
                goto label_3;
            }
        }
        fcn_00408740 (ecx, "Invalid image height");
        ecx = *((esp + 0x1c));
label_3:
        if (*(esi) > 0x1fffff7e) {
            fcn_004087f0 (ecx, "Width too large for libpng to process image data.");
        }
        eax = 1;
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x405120 */
#include <stdint.h>
 
int32_t fcn_00405120 (uint32_t arg_4h, int32_t arg_8h) {
    if (*((esp + 4)) != 0) {
        eax = *((esp + 8));
        if (eax == 0) {
            goto label_0;
        }
        eax = *((eax + 0xc));
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4069c0 */
#include <stdint.h>
 
uint32_t fcn_004069c0 (int32_t arg_8h, int32_t arg_18h) {
    ebx = *((esp + 8));
    eax = fcn_004109d0 (ebx);
    ebp = *((ebx + 0xcc));
    *((ebx + 0xd0)) = ebp;
    if (eax <= 0) {
        goto label_1;
    }
    *((esp + 0x10)) = eax;
label_0:
    esi = *((esp + 0x18));
    if (ebp <= 0) {
        goto label_2;
    }
    edi = ebp;
    do {
        eax = *(esi);
        fcn_004064b0 (ebx, eax, 0);
        esi += 4;
        edi--;
    } while (edi != 0);
label_2:
    if (edi != 0) {
        goto label_0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x405270 */
#include <stdint.h>
 
int32_t fcn_00405270 (uint32_t arg_4h, int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    if (*((esp + 4)) != 0) {
        eax = *((esp + 8));
        if (eax == 0) {
            goto label_0;
        }
        if ((*((eax + 8)) & 8) == 0) {
            goto label_0;
        }
        ecx = *((esp + 0xc));
        if (ecx == 0) {
            goto label_0;
        }
        edx = *((eax + 0x10));
        *(ecx) = edx;
        eax = *((eax + 0x14));
        ecx = *((esp + 0x10));
        *(ecx) = eax;
        eax = 8;
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x406a20 */
#include <stdint.h>
 
uint32_t fcn_00406a20 (int32_t arg_68h, int32_t arg_11ch, uint32_t arg_10h, uint32_t arg_1ch) {
    int32_t var_14h;
    ebp = *((esp + 0x10));
    fcn_00409d50 (ebp, 0);
    edi = ebp + 0x11c;
label_0:
    eax = esp + 0x14;
    fcn_004088c0 (ebp);
    eax = fcn_00409d20 (ebp, esp + 0x1c);
    fcn_00407dd0 (eax);
    fcn_00408ca0 (ebp, edi, 4);
    eax = 4;
    ecx = 0x41640c;
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_1;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_1:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_2;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_3;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_2;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_3;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_2;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_2;
            }
        }
label_3:
        eax = 1;
        if (esi > 0) {
            goto label_4;
        }
        eax |= 0xffffffff;
    } else {
label_2:
        eax = 0;
    }
label_4:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_00409e10 (ebp, edx, ecx);
        goto label_5;
    }
    eax = 4;
    ecx = "IEND";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_6;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_6:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_7;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_8;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_7;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_8;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_7;
            }
            esi = *(edx);
            eax = *(ecx);
            esi -= eax;
            if (esi == 0) {
                goto label_7;
            }
        }
label_8:
        eax = 1;
        if (esi > 0) {
            goto label_9;
        }
        eax |= 0xffffffff;
    } else {
label_7:
        eax = 0;
    }
label_9:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_0040a120 (ebp, edx);
        goto label_5;
    }
    eax = fcn_004082a0 (ebp, edi);
    ecx = "IDAT";
    edx = edi;
    eax = 4;
    if (eax == 0) {
        goto label_10;
    }
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_11;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_11:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_12;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_13;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_12;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_13;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_12;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_12;
            }
        }
label_13:
        eax = 1;
        if (esi > 0) {
            goto label_14;
        }
        eax |= 0xffffffff;
    } else {
label_12:
        eax = 0;
    }
label_14:
    if (eax == 0) {
        if (*((esp + 0x18)) <= eax) {
            if ((*((ebp + 0x68)) & 8) == 0) {
                goto label_15;
            }
        }
        fcn_00408740 (ebp, "Too many IDAT's found");
    } else {
        *((ebp + 0x68)) |= 8;
    }
label_15:
    ecx = *((esp + 0x18));
    edx = *((esp + 0x1c));
    fcn_0040bf40 (ebp, edx, ecx);
    eax = 4;
    ecx = "PLTE";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_16;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_16:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_17;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_18;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_17;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_18;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_17;
            }
            esi = *(edx);
            eax = *(ecx);
            esi -= eax;
            if (esi == 0) {
                goto label_17;
            }
        }
label_18:
        eax = 1;
        if (esi > 0) {
            goto label_19;
        }
        eax |= 0xffffffff;
    } else {
label_17:
        eax = 0;
    }
label_19:
    if (eax != 0) {
        goto label_20;
    }
    *((ebp + 0x68)) |= 2;
    goto label_20;
    do {
label_10:
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_21;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_21:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_22;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_23;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_22;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_23;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_22;
            }
            ecx = *(ecx);
            esi = *(edx);
            esi -= ecx;
            if (esi == 0) {
                goto label_22;
            }
        }
label_23:
        eax = 1;
        if (esi > 0) {
            goto label_24;
        }
        eax |= 0xffffffff;
    } else {
label_22:
        eax = 0;
    }
label_24:
    if (eax == 0) {
        esi = *((esp + 0x18));
        if (esi <= 0) {
            if ((*((ebp + 0x68)) & 8) == 0) {
                goto label_25;
            }
        }
        fcn_00408740 (ebp, "Too many IDAT's found");
label_25:
        fcn_00409d50 (ebp, esi);
        goto label_20;
    }
    eax = 4;
    ecx = "PLTE";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_26;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_26:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_27;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_28;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_27;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_28;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_27;
            }
            esi = *(edx);
            edx = *(ecx);
            esi -= edx;
            if (esi == 0) {
                goto label_27;
            }
        }
label_28:
        eax = 1;
        if (esi > 0) {
            goto label_29;
        }
        eax |= 0xffffffff;
    } else {
label_27:
        eax = 0;
    }
label_29:
    if (eax == 0) {
        eax = *((esp + 0x18));
        ecx = *((esp + 0x1c));
        fcn_00409f90 (ebp, ecx, eax);
        goto label_5;
    }
    eax = 4;
    ecx = "bKGD";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_30;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_30:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_31;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_32;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_31;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_32;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_31;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_31;
            }
        }
label_32:
        eax = 1;
        if (esi > 0) {
            goto label_33;
        }
        eax |= 0xffffffff;
    } else {
label_31:
        eax = 0;
    }
label_33:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_0040b150 (ebp, edx, ecx);
        goto label_5;
    }
    eax = 4;
    ecx = "cHRM";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_34;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_34:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_35;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_36;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_35;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_36;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_35;
            }
            esi = *(edx);
            eax = *(ecx);
            esi -= eax;
            if (esi == 0) {
                goto label_35;
            }
        }
label_36:
        eax = 1;
        if (esi > 0) {
            goto label_37;
        }
        eax |= 0xffffffff;
    } else {
label_35:
        eax = 0;
    }
label_37:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_0040a450 (ebp, edx, ecx);
        goto label_5;
    }
    eax = 4;
    ecx = "gAMA";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_38;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_38:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_39;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_40;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_39;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_40;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_39;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_39;
            }
        }
label_40:
        eax = 1;
        if (esi > 0) {
            goto label_41;
        }
        eax |= 0xffffffff;
    } else {
label_39:
        eax = 0;
    }
label_41:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_0040a170 (ebp, edx, ecx);
        goto label_5;
    }
    eax = 4;
    ecx = "hIST";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_42;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_42:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_43;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_44;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_43;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_44;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_43;
            }
            esi = *(edx);
            eax = *(ecx);
            esi -= eax;
            if (esi == 0) {
                goto label_43;
            }
        }
label_44:
        eax = 1;
        if (esi > 0) {
            goto label_45;
        }
        eax |= 0xffffffff;
    } else {
label_43:
        eax = 0;
    }
label_45:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_0040b390 (ebp, edx, ecx);
        goto label_5;
    }
    eax = 4;
    ecx = "oFFs";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_46;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_46:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_47;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_48;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_47;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_48;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_47;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_47;
            }
        }
label_48:
        eax = 1;
        if (esi > 0) {
            goto label_49;
        }
        eax |= 0xffffffff;
    } else {
label_47:
        eax = 0;
    }
label_49:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_0040b650 (ebp, edx, ecx);
        goto label_5;
    }
    eax = 4;
    ecx = "pCAL";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_50;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_50:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_51;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_52;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_51;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_52;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_51;
            }
            esi = *(edx);
            eax = *(ecx);
            esi -= eax;
            if (esi == 0) {
                goto label_51;
            }
        }
label_52:
        eax = 1;
        if (esi > 0) {
            goto label_53;
        }
        eax |= 0xffffffff;
    } else {
label_51:
        eax = 0;
    }
label_53:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_0040b780 (ebp, edx, ecx);
        goto label_5;
    }
    eax = 4;
    ecx = "sCAL";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_54;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_54:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_55;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_56;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_55;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_56;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_55;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_55;
            }
        }
label_56:
        eax = 1;
        if (esi > 0) {
            goto label_57;
        }
        eax |= 0xffffffff;
    } else {
label_55:
        eax = 0;
    }
label_57:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_0040b9e0 (ebp, edx, ecx);
        goto label_5;
    }
    eax = 4;
    ecx = "pHYs";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_58;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_58:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_59;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_60;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_59;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_60;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_59;
            }
            esi = *(edx);
            eax = *(ecx);
            esi -= eax;
            if (esi == 0) {
                goto label_59;
            }
        }
label_60:
        eax = 1;
        if (esi > 0) {
            goto label_61;
        }
        eax |= 0xffffffff;
    } else {
label_59:
        eax = 0;
    }
label_61:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_0040b530 (ebp, edx, ecx);
        goto label_5;
    }
    eax = 4;
    ecx = "sBIT";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_62;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_62:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_63;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_64;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_63;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_64;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_63;
            }
            eax = *(ecx);
            esi = *(edx);
            esi -= eax;
            if (esi == 0) {
                goto label_63;
            }
        }
label_64:
        eax = 1;
        if (esi > 0) {
            goto label_65;
        }
        eax |= 0xffffffff;
    } else {
label_63:
        eax = 0;
    }
label_65:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_0040a2e0 (ebp, edx, ecx);
        goto label_5;
    }
    eax = 4;
    ecx = "sRGB";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_66;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_66:
        esi = *(edx);
        ebx = *(ecx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_67;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_68;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_67;
            }
            esi = *(edx);
            ebx = *(ecx);
            esi -= ebx;
            if (esi != 0) {
                goto label_68;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_67;
            }
            esi = *(edx);
            eax = *(ecx);
            esi -= eax;
            if (esi == 0) {
                goto label_67;
            }
        }
label_68:
        eax = 1;
        if (esi > 0) {
            goto label_69;
        }
        eax |= 0xffffffff;
    } else {
label_67:
        eax = 0;
    }
label_69:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_0040a940 (ebp, edx, ecx);
        goto label_5;
    }
    eax = 4;
    ecx = "iCCP";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_70;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_70:
        ebx = *(ecx);
        esi = *(edx);
        esi -= ebx;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_71;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_72;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_71;
            }
            ebx = *(ecx);
            esi = *(edx);
            esi -= ebx;
            if (esi != 0) {
                goto label_72;
            }
        }
label_72:
        eax = 1;
        if (esi > 0) {
            goto label_73;
        }
        eax |= 0xffffffff;
    } else {
label_71:
        eax = 0;
    }
label_73:
    if (eax == 0) {
        ecx = *((esp + 0x18));
        edx = *((esp + 0x1c));
        fcn_0040ab30 (ebp, edx, ecx);
        goto label_5;
    }
    eax = 4;
    ecx = "sPLT";
    edx = edi;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_74;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
label_74:
    esi = *(edx);
    ebx = *(ecx);
    esi -= ebx;
    if (esi != 0) {
        void (*0x4075b7)() ();
    }
label_5:
label_20:
    if ((*((ebp + 0x68)) & 0x10) == 0) {
        goto label_0;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4020e0 */
#include <stdint.h>
 
int32_t fcn_004020e0 (int32_t arg_10h_2, int32_t arg_10h, size_t n) {
    ebx = eax;
    eax = *((edi + 4));
    esi = *((edi + 0xc));
    if (ecx > eax) {
        goto label_0;
    }
    edx = *(edi);
    if (*((esp + 0x10)) > edx) {
        goto label_0;
    }
    if (*((esp + 0x14)) <= 0) {
        goto label_0;
    }
    if (ebx <= 0) {
        goto label_0;
    }
    ebp = ecx + ebx;
    if (ebp > eax) {
        eax -= ecx;
        ebx = eax;
    }
    eax = *((esp + 0x14));
    ebp = *((esp + 0x18));
    ebp += eax;
    if (ebp > edx) {
        edx -= eax;
        *((esp + 0x18)) = edx;
    }
    edx = *((edi + 8));
    edx *= ecx;
    edx += eax;
    esi += edx;
    if (ebx <= 0) {
        goto label_1;
    }
    ebp = *((esp + 0x10));
    do {
        eax = *((esp + 0x18));
        memset (esi, ebp, eax);
        esi += *((edi + 8));
        ebx--;
    } while (ebx != 0);
label_1:
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x401af0 */
#include <stdint.h>
 
uint32_t fcn_00401af0 (void) {
    int32_t var_14h;
    *(fp_stack--) = *(0x41ce78);
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] += *(0x41ca14);
    edi = eax;
    *(0x41ca14) = fp_stack[0];
    fp_stack--;
    fp_stack[0] += *(0x41ad18);
    *(0x41ce78) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((edi + 4));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x41ca14);
    *(fp_stack--) = *((esp + 8));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    if ((ah & 5) != 0) {
        *(0x41ca14) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *(0x41ce78) = fp_stack[0];
        fp_stack--;
    } else {
        fp_stack++;
    }
    *(fp_stack--) = *(0x41ca14);
    eax = fcn_00412520 ();
    esi = eax;
    eax = *(edi);
    eax = esi;
    ecx = 0;
    fcn_004020e0 (0x3f, 0, eax);
    ecx = *((edi + 4));
    ecx++;
    *((esp + 0x14)) = ecx;
    *(fp_stack--) = *((esp + 0x14));
    fp_stack[0] -= *(0x41ca14);
    fcn_00412520 ();
    edx = *(edi);
    ecx = esi;
    fcn_004020e0 (0, 0, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x402230 */
#include <stdint.h>
 
int32_t fcn_00402230 (void) {
    int32_t var_4h;
    int32_t var_300h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x300)) = eax;
    esi = edx;
    eax = esp + 4;
    if (esi <= 0) {
        goto label_0;
    }
    ecx = *(ecx);
    edi = esi;
    do {
        edx = *(ecx);
        *(eax) = dl;
        edx = *((ecx + 4));
        eax++;
        *(eax) = dl;
        edx = *((ecx + 8));
        eax++;
        *(eax) = dl;
        eax++;
        ecx += 0xc;
        edi--;
    } while (edi != 0);
label_0:
    ecx = esp + 4;
    fcn_00402a40 ();
    ecx = *((esp + 0x304));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x402a40 */
#include <stdint.h>
 
uint32_t fcn_00402a40 (void) {
    int32_t var_6h;
    int32_t var_7h;
    edx = 0;
    if (esi <= 0) {
        goto label_0;
    }
    *(0x478508) = 1;
    do {
        bl = *(ecx);
        eax = *((ecx + 1));
        ecx++;
        ecx++;
        *((esp + 6)) = al;
        eax = *(ecx);
        *((esp + 7)) = al;
        eax = (int32_t) dl;
        *((eax + eax*2 + 0x478520)) = bl;
        ebx = *((esp + 6));
        *((eax + eax*2 + 0x478521)) = bl;
        ebx = *((esp + 7));
        edx++;
        ecx++;
        *((eax + eax*2 + 0x478522)) = bl;
    } while (edx < esi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x401680 */
#include <stdint.h>
 
int32_t fcn_00401680 (int32_t arg_3ch, int32_t arg_28h) {
    int32_t var_4h;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    *(fp_stack--) = *(0x41ca18);
    fp_stack[0] /= *(0x41ad88);
    ebp = *((esp + 0x28));
    edi = 0;
    _CIsin (edi, esi, ebp);
    fp_stack[0] *= *(0x41ad80);
    *((esp + 0x14)) = 4;
    *((esp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x3c));
    fp_stack[0] *= *(0x41aca0);
    fp_stack[0] += *(0x41ad78);
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    do {
        *(fp_stack--) = *((esp + 0x14));
        eax = *(ebp);
        esi = *((ebp + 4));
        fp_stack[0] *= *((esp + 0x30));
        edx:eax = (int64_t) eax;
        edx &= 3;
        eax += edx;
        fp_stack[0] += *(0x41ca18);
        eax >>= 2;
        ecx = eax;
        ecx *= edi;
        *((esp + 0x28)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x28));
        *(fp_stack--) = *(0x41ad40);
        fp_stack[1] /= fp_stack[0];
        edx = ecx * 3;
        esi = esi + edx*4;
        edx = *((ebp + 8));
        ebx = edx + ecx*8;
        ecx = *((ebp + 0xc));
        *((esp + 0x28)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x28));
        *((esp + 0xc)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x41ad70);
        fp_stack[1] /= fp_stack[0];
        *((esp + 0x28)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x28));
        *((esp + 8)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= *(0x41ad68);
        *((esp + 0x28)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x28));
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x20));
        fp_stack[0] *= *(0x41ad60);
        fp_stack[0] += *(0x41ad58);
        *((esp + 0x28)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x28));
        *(esp) = fp_stack[0];
        fp_stack--;
        fcn_004011e0 (ecx, esi);
        *(fp_stack--) = *((esp + 0x34));
        eax = *(ebp);
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x50));
        edx:eax = (int64_t) eax;
        edx &= 3;
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        eax += edx;
        *(fp_stack--) = *((esp + 0x40));
        eax >>= 2;
        *(esp) = fp_stack[0];
        fp_stack--;
        eax = esi;
        fcn_00401600 (eax);
        eax = *((esp + 0x24));
        eax--;
        edi++;
        *((esp + 0x10)) = edi;
        *((esp + 0x14)) = eax;
    } while (eax > 0);
    eax = *(ebp);
    *(fp_stack--) = 1.0;
    *(fp_stack--) = *(0x41ad50);
    edx:eax = (int64_t) eax;
    *(fp_stack--) = *(0x41ad00);
    edx &= 3;
    eax += edx;
    *((esp + 0x10)) = 0;
    eax >>= 2;
label_0:
    esi = 0;
    if (eax <= 0) {
        goto label_1;
    }
    *(fp_stack--) = *((esp + 0x10));
    fp_stack[0] += fp_stack[3];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x10));
    *((esp + 0x18)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *(fp_stack--) = *((esp + 0x18));
    do {
        edx = *((ebp + 8));
        edi = eax;
        edi *= *((esp + 0x10));
        ecx = edx + edi*8;
        ebx = *((ecx + esi*8));
        ecx = *((ecx + esi*8 + 4));
        *((esp + 0x1c)) = ecx;
        ecx = *((esp + 0x10));
        ecx++;
        ecx *= eax;
        eax = *((ebp + 4));
        *((esp + 0x18)) = ebx;
        ebx = edx + ecx*8;
        ecx += esi;
        edx = ecx * 3;
        *(fp_stack--) = *((eax + edx*4 + 8));
        fp_stack[4] -= fp_stack[0];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] *= fp_stack[3];
        eax = fcn_00412520 ();
        eax >>= 3;
        ecx = 0x3f;
        cl -= al;
        eax = *((ebp + 4));
        edi += esi;
        edx = edi * 3;
        *(fp_stack--) = *((eax + edx*4 + 8));
        fp_stack[4] -= fp_stack[0];
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] *= fp_stack[3];
        eax = fcn_00412520 ();
        edx = *((ebx + esi*8 + 4));
        eax >>= 3;
        ecx = 0x3f;
        cl -= al;
        eax = *((ebx + esi*8));
        ecx = *((esp + 0x24));
        edx = *((esp + 0x24));
        eax = *((esp + 0x3c));
        fcn_00401000 (edx, ecx, eax, edx, ecx);
        eax = *(ebp);
        edx:eax = (int64_t) eax;
        edx &= 3;
        eax += edx;
        esi++;
        eax >>= 2;
    } while (esi < eax);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack++;
label_1:
    ecx = *((esp + 0x10));
    ecx++;
    *((esp + 0x10)) = ecx;
    if (ecx < 3) {
        goto label_0;
    }
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x402150 */
#include <stdint.h>
 
int32_t fcn_00402150 (int32_t arg_28h) {
    size_t n;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    esi = *((ecx + 0xc));
    edi = eax;
    eax = *((edi + 8));
    ebx = *((edi + 0xc));
    *((esp + 0x1c)) = eax;
    eax = *((ecx + 8));
    *((esp + 0x20)) = eax;
    eax = *(ecx);
    ecx = *((ecx + 4));
    ebp = -ebp;
    *((esp + 0x10)) = eax;
    *((esp + 0x18)) = ecx;
    if (edx < ebp) {
        goto label_0;
    }
    ecx = *((esp + 0x28));
    ebp = -ebp;
    if (ecx < ebp) {
        goto label_0;
    }
    ebp = *(edi);
    if (edx > ebp) {
        goto label_0;
    }
    edi = *((edi + 4));
    *((esp + 0x14)) = edi;
    if (ecx > edi) {
        goto label_0;
    }
    if (edx < 0) {
        esi -= edx;
        edx = 0;
    } else {
        edi = eax + edx;
        edi = *((esp + 0x14));
        if (edi <= ebp) {
            goto label_1;
        }
        ebp -= eax;
        ebp -= edx;
    }
label_1:
    if (ecx < 0) {
        eax *= ecx;
        esi -= eax;
        eax = *((esp + 0x18));
        eax += ecx;
        ecx = 0;
    } else {
        eax = *((esp + 0x18));
        ebp = eax + ecx;
        if (ebp <= edi) {
            goto label_2;
        }
        edi -= eax;
        edi -= ecx;
        eax += edi;
    }
label_2:
    edi = *((esp + 0x1c));
    ebp *= ecx;
    ebp += edx;
    ebx += ebp;
    if (eax <= 0) {
        goto label_0;
    }
    do {
        ecx = *((esp + 0x10));
        memcpy (ebx, esi, ecx);
        esi += *((esp + 0x2c));
        ebx += edi;
        ebp--;
    } while (ebp != 0);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x41250c */
#include <stdint.h>
 
void memcpy (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x402010 */
#include <stdint.h>
 
uint32_t fcn_00402010 (int32_t arg_14h, int32_t arg_28h) {
    size_t n;
    int32_t var_10h;
    ecx = *((edi + 0x808));
    eax = (int32_t) al;
    ebp = *((esp + 0x14));
    esi = *((edi + eax*4 + 0x404));
    esi += *((ecx + 0xc));
    eax = *((edi + eax*4 + 4));
    ecx = *(ecx);
    ebx = 0;
    *((esp + 0xc)) = eax;
    *((esp + 0x10)) = ecx;
    if (*(edi) <= ebx) {
        goto label_0;
    }
    do {
        edx = *((esp + 0xc));
        memcpy (ebp, esi, edx);
        esi += *((esp + 0x1c));
        ebp += *((esp + 0x28));
        ebx++;
    } while (ebx < *(edi));
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4050e4 */
#include <stdint.h>
 
void SDL_Init (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4050f6 */
#include <stdint.h>
 
void SDL_ShowCursor (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4050ea */
#include <stdint.h>
 
void SDL_SetVideoMode (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x405114 */
#include <stdint.h>
 
void SDL_Quit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4050f0 */
#include <stdint.h>
 
void SDL_PollEvent (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x405108 */
#include <stdint.h>
 
void SDL_SetColors (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4050fc */
#include <stdint.h>
 
void SDL_LockSurface (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x405102 */
#include <stdint.h>
 
void SDL_UnlockSurface (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4050de */
#include <stdint.h>
 
void SDL_UpdateRect (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x402e00 */
#include <stdint.h>
 
int32_t fcn_00402e00 (void) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_2ch;
    int32_t var_34h;
    int32_t var_3ch;
    int32_t var_40h;
    esi = *(0x47848c);
    eax = *(esi);
    edi = *((esi + 0xc));
    ecx = eax + edi - 1;
    *((esp + 0x14)) = ecx;
    ecx = *((esi + 4));
    *((esp + 0x34)) = ecx;
    *(fp_stack--) = *((esp + 0x34));
    ebx = *((esi + 8));
    *(fp_stack--) = *(0x41acd8);
    *((esp + 0x10)) = eax;
    ecx += 0xffffffff;
    fp_stack[1] *= fp_stack[0];
    ecx *= ebx;
    *(fp_stack--) = 1.0;
    fp_stack[2] /= fp_stack[0];
    fp_stack++;
    ebp = ecx + edi;
    edx = eax + ebp - 1;
    *((esp + 0x18)) = edx;
    edx:eax = (int64_t) eax;
    eax -= edx;
    ecx = eax;
    eax = *((esi + 8));
    ecx >>= 1;
    eax += ecx;
    *((esp + 0x40)) = eax;
    eax = *((esi + 4));
    edx:eax = (int64_t) eax;
    eax -= edx;
    ebx -= ecx;
    eax >>= 1;
    *((esp + 0x3c)) = ebx;
    *((esp + 0x1c)) = 0;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *((esp + 0x34)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x10));
    fp_stack[0] *= fp_stack[1];
    *(0x41ad08) /= fp_stack[0];
    *((esp + 0x30)) = fp_stack[0];
    fp_stack--;
    if (eax <= 0) {
        goto label_1;
    }
    *(fp_stack--) = *((esp + 0x34));
    *(fp_stack--) = *((esp + 0x30));
label_0:
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 0x2c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esi + 4));
    fp_stack[0] *= fp_stack[3];
    *(fp_stack--) = *((esp + 0x2c));
    *((esp + 0x2c)) = 0;
    *(fp_stack--) = *(0x41ad00);
    fp_stack[0] += fp_stack[1];
    fp_stack[0] -= fp_stack[2];
    fp_stack[0] *= fp_stack[4];
    *((esp + 0x24)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x24));
    fp_stack[0] *= fp_stack[0];
    *((esp + 0x24)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] += fp_stack[5];
    fp_stack[0] -= fp_stack[2];
    fp_stack[0] *= fp_stack[4];
    *((esp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x20));
    fp_stack[0] *= fp_stack[0];
    *((esp + 0x20)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] += *(0x41acf8);
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] *= fp_stack[2];
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x28));
    fp_stack[0] *= fp_stack[0];
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    if (ecx <= 0) {
        goto label_2;
    }
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    while (ebx < ecx) {
        *(fp_stack--) = *(0x41acd8);
        *(fp_stack--) = *((esp + 0x30));
        *(fp_stack--) = *((esp + 0x2c));
        fp_stack[0] += fp_stack[2];
        *(fp_stack--) = *((esp + 0x10));
        fp_stack[0] *= fp_stack[3];
        fp_stack++;
        *(fp_stack--) = *(0x41acf0);
        fp_stack[1] -= fp_stack[0];
        fp_stack[0] -= fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x10));
        fp_stack[0] *= fp_stack[0];
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] += *(0x41ace8);
        fp_stack[2] -= fp_stack[0];
        fp_stack++;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((esp + 0x38)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x38));
        fp_stack[0] *= fp_stack[0];
        *((esp + 0x38)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x38));
        fp_stack[0] += *((esp + 0x20));
        _CIsqrt ();
        fp_stack[0] *= *(0x41ace0);
        eax = fcn_00412520 ();
        *(fp_stack--) = *((esp + 0x10));
        fp_stack[0] += *((esp + 0x24));
        ebx = eax;
        ebx &= 3;
        _CIsqrt ();
        fp_stack[0] *= *(0x41ace0);
        eax = fcn_00412520 ();
        *(fp_stack--) = *((esp + 0x10));
        fp_stack[0] += *((esp + 0x28));
        eax &= 3;
        eax += eax;
        eax += eax;
        ebx |= eax;
        ebx += ebx;
        ebx += ebx;
        _CIsqrt ();
        fp_stack[0] *= *(0x41ace0);
        eax = fcn_00412520 ();
        eax &= 3;
        ebx |= eax;
        eax = *((esp + 0x14));
        *(edi) = bl;
        *(eax) = bl;
        eax--;
        *((esp + 0x14)) = eax;
        eax = *((esp + 0x18));
        *(ebp) = bl;
        *(eax) = bl;
        ebx = *((esp + 0x2c));
        eax--;
        *((esp + 0x18)) = eax;
        eax = *(esi);
        *((esp + 0x10)) = eax;
        edx:eax = (int64_t) eax;
        eax -= edx;
        ecx = eax;
        ebx++;
        ecx >>= 1;
        edi++;
        ebp++;
        *((esp + 0x2c)) = ebx;
    }
    *(fp_stack--) = *((esp + 0x30));
    ebx = *((esp + 0x3c));
    *(fp_stack--) = *((esp + 0x34));
    *(fp_stack--) = *(0x41acd8);
    fp_tmp_1 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
label_2:
    eax = *((esp + 0x40));
    ebp -= eax;
    eax = *((esi + 4));
    edx:eax = (int64_t) eax;
    eax -= edx;
    eax >>= 1;
    edi += ebx;
    if (*((esp + 0x1c)) < eax) {
        goto label_0;
    }
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
label_1:
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x403040 */
#include <stdint.h>
 
uint32_t fcn_00403040 (int32_t arg_3ch, int32_t arg_40h_3, int32_t arg_40h_2, int32_t arg_40h) {
    int32_t var_8h;
    uint32_t var_14h;
    ecx = *((eax + 0xc));
    *((esp + 8)) = ecx;
    ecx = *(0x47848c);
    ebx = *((ecx + 8));
    ebx *= *((esp + 0x40));
    ebx += *((ecx + 0xc));
    ebx += *((esp + 0x40));
    edi = *((ecx + 8));
    edi *= *((esp + 0x40));
    edi += *((ecx + 0xc));
    ecx = *((eax + 4));
    edi += *((esp + 0x3c));
    *((esp + 0x40)) = 0;
    *((esp + 0x14)) = ecx;
    if (ecx <= 0) {
        goto label_1;
    }
    *(fp_stack--) = *(0x41ceb0);
    ebp = *(eax);
    edx = *((eax + 8));
    ebp >>= 2;
    fp_stack[0] *= *(0x41acd8);
    *((esp + 0x3c)) = ebp;
    *((esp + 0x44)) = edx;
    *((esp + 0x18)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x4c));
    *((esp + 0x20)) = fp_stack[0];
    fp_stack--;
    goto label_2;
label_0:
    ebp = *((esp + 0x3c));
label_2:
    *(fp_stack--) = *((esp + 0x40));
    *((esp + 0x28)) = fp_stack[0];
    fp_stack[0] /= *(0x41ac00);
    fp_stack[0] += *((esp + 0x18));
    _CIsin ();
    fp_stack[0] += *(0x41acd0);
    fp_stack[0] *= *(0x41acc8);
    *((esp + 0x30)) = fp_stack[0];
    fp_stack[0] *= *((esp + 0x20));
    eax = fcn_00412520 ();
    *(fp_stack--) = *((esp + 0x28));
    fp_stack[0] /= *(0x41acc0);
    esi = eax;
    esi += edi;
    fp_stack[0] += *((esp + 0x18));
    _CIsin ();
    if (ebp == 0) {
        goto label_3;
    }
    *(fp_stack--) = *((esp + 0x20));
    *(fp_stack--) = *((esp + 0x30));
    fp_stack[0] *= fp_stack[1];
    eax = fcn_00412520 ();
    *(fp_stack--) = 1.0;
    fp_stack[2] -= fp_stack[0];
    fp_stack++;
    eax += edi;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *((esp + 0x48)) = eax;
    fp_stack[0] *= *(0x41acc8);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = fcn_00412520 ();
    edx = *((esp + 0x48));
    eax -= edx;
    ecx = eax + ebx;
    eax = *((esp + 0x10));
    eax -= edx;
    do {
        edx = *((ecx + esi));
        edx ^= *(esi);
        ebp--;
        *((eax + esi)) = edx;
        esi += 4;
    } while (ebp != 0);
    goto label_4;
label_3:
    fp_stack++;
label_4:
    eax = *((esp + 0x44));
    eax = *(0x47848c);
    edi += *((eax + 8));
    ebx += *((eax + 8));
    eax = *((esp + 0x40));
    eax++;
    *((esp + 0x40)) = eax;
    if (eax < *((esp + 0x14))) {
        goto label_0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x402780 */
#include <stdint.h>
 
uint32_t fcn_00402780 (void) {
    eax = SDL_Init (0x20);
    if (eax < 0) {
        exit (rdi);
    }
    SDL_ShowCursor (0);
    eax = SDL_SetVideoMode (0x140, 0xc8, 8, 0xc0000001);
    *(0x41ce90) = eax;
    if (eax == 0) {
        printf (rdi);
        eax = SDL_Quit ();
        eax |= 0xffffffff;
        return eax;
    }
    ecx = *((eax + 0xc));
    edx = *((eax + 8));
    eax = *((eax + 0x10));
    *(0x47850c) = 0;
    *(0x478508) = 1;
    printf (rdi);
    memset (0x478520, 0, 0x300);
    ecx = *(0x41ce90);
    edx = *((ecx + 0x10));
    *(0x478518) = edx;
    *(0x478500) = 0x140;
    *(0x478504) = 0xc8;
    *(0x47882c) = 8;
    eax = malloc (0xfa00);
    edi = eax;
    *(0x47851c) = edi;
    eax = malloc (0x10);
    *(0x478824) = eax;
    *(eax) = 0x140;
    *((eax + 4)) = 0xc8;
    *((eax + 8)) = 0x140;
    *((eax + 0xc)) = edi;
    *(0x478828) = 0x37cd;
    eax = timeGetTime ();
    *(0x478510) = eax;
    eax = timeGetTime ();
    *(0x478820) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x401e50 */
#include <stdint.h>
 
uint32_t fcn_00401e50 (void) {
    int32_t var_13h;
    int32_t var_1ch;
    int32_t var_18h;
    char * var_20h;
    int32_t var_20h_2;
    int32_t var_24h;
    int32_t var_28h;
    edi = eax;
    eax = malloc (0x80c, edi, esi, ebp);
    eax = malloc (0x80);
    ecx = *((edi + 8));
    esi = eax;
    eax = *((edi + 0xc));
    *(esi) = 0x10;
    *((esi + 0xc)) = eax;
    *((esi + 8)) = ecx;
    edx = 0xc;
    *((esi + 4)) = edx;
    edi = eax + 0x11;
    *((esi + 0x1c)) = edi;
    *((esi + 0x10)) = 0x10;
    *((esi + 0x14)) = edx;
    *((esi + 0x18)) = ecx;
    edi = eax + 0x22;
    *((esi + 0x2c)) = edi;
    *((esi + 0x20)) = 0x10;
    *((esi + 0x24)) = edx;
    *((esi + 0x28)) = ecx;
    edi = eax + 0x33;
    *((esi + 0x3c)) = edi;
    *((esi + 0x30)) = 0x10;
    *((esi + 0x34)) = edx;
    *((esi + 0x38)) = ecx;
    edi = eax + 0x44;
    *((esi + 0x4c)) = edi;
    *((esi + 0x40)) = 0x10;
    *((esi + 0x44)) = edx;
    *((esi + 0x48)) = ecx;
    edi = eax + 0x55;
    *((esi + 0x5c)) = edi;
    *((esi + 0x50)) = 0x10;
    *((esi + 0x54)) = edx;
    *((esi + 0x58)) = ecx;
    edi = eax + 0x66;
    *((esi + 0x6c)) = edi;
    edi = 0x10;
    *((esi + 0x60)) = edi;
    *((esi + 0x64)) = edx;
    *((esi + 0x68)) = ecx;
    eax += 0x77;
    *((esi + 0x7c)) = eax;
    *((esi + 0x70)) = edi;
    *((esi + 0x74)) = edx;
    *((esi + 0x78)) = ecx;
    eax = malloc (edi);
    edi = eax;
    *(edi) = 0x510;
    *((edi + 4)) = 0x3c;
    *((edi + 8)) = 0x510;
    eax = malloc (0x12fc0);
    *((edi + 0xc)) = eax;
    eax = *((esp + 0x24));
    *((eax + 0x808)) = edi;
    eax = 0;
    *((esp + 0x18)) = eax;
    *((esp + 0x24)) = eax;
label_1:
    eax = *((esp + 0x1c));
    cl = *(eax);
    edx = *((esp + 0x14));
    eax++;
    *((esp + 0x1c)) = eax;
    eax = *((edx + 0x808));
    *((esp + 0x13)) = cl;
    *((esp + 0x28)) = eax;
    ebx = 0;
label_0:
    edi = *((esp + 0x18));
    *((esp + 0x20)) = 3;
    do {
        ecx = *(ebp);
        eax = *((esp + 0x28));
        ecx <<= 4;
        ecx += esi;
        edx = edi;
        ebp += 4;
        fcn_00402150 (ebx);
        edi += 0x10;
    } while (edi != 0);
    ebx += 0xc;
    if (ebx < 0x3c) {
        goto label_0;
    }
    eax = *((esp + 0x13));
    ecx = *((esp + 0x24));
    edx = *((esp + 0x14));
    edi = 0x30;
    *((edx + eax*4 + 0x404)) = ecx;
    ecx += edi;
    *((edx + eax*4 + 4)) = edi;
    *((esp + 0x24)) = ecx;
    if (ecx < 0x510) {
        goto label_1;
    }
    eax = edx;
    *((eax + 0x804)) = edi;
    *(eax) = 0x3c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x401d00 */
#include <stdint.h>
 
int32_t fcn_00401d00 (void) {
    eax = "/usr/local/share";
    ecx = *(0x41a7ec);
    edx = *(0x41a7f0);
    *(0x41cd78) = eax;
    eax = *(0x41a7f4);
    *(0x41cd7c) = ecx;
    cl = *(0x41a7f8);
    edi = 0x41cd78;
    *(0x41cd80) = edx;
    *(0x41cd84) = eax;
    *(0x41cd88) = cl;
    edi += 0xffffffff;
    do {
        al = *((edi + 1));
        edi++;
    } while (al != 0);
    dx = *(0x41a7fc);
    eax = 0x41cd78;
    *(edi) = dx;
    eax += 0xffffffff;
    do {
        cl = *((eax + 1));
        eax++;
    } while (cl != 0);
    ecx = "ecfh-awts";
    *(eax) = ecx;
    ecx = *(0x41a804);
    *((eax + 4)) = ecx;
    cx = *(0x41a808);
    edi = 0x41cd78;
    *((eax + 8)) = cx;
    edi += 0xffffffff;
    do {
        al = *((edi + 1));
        edi++;
    } while (al != 0);
    eax = 0x41cd78;
    *(edi) = dx;
    eax += 0xffffffff;
    edx = eax + 1;
    do {
        cl = *((eax + 1));
        eax++;
    } while (cl != 0);
    ecx = "chip.xm";
    *(eax) = ecx;
    ecx = *(0x41aa94);
    *((eax + 4)) = ecx;
    eax = fopen (rdi, *(sym.imp.MSVCR80.dll_fopen));
    if (eax != 0) {
label_0:
        fclose (rdi);
        eax = 0x41cd78;
        return eax;
    }
    eax = 0;
    while (cl != 0) {
        cl = *((eax + str.chip.xm));
        *((eax + 0x41cd78)) = cl;
        eax++;
    }
    eax = void (*esi)(char*, uint32_t) ("chip.xm", 0x41a80c);
    if (eax != 0) {
        goto label_0;
    }
    eax = _iob_func ("findfile: file %s could not be found\n", "chip.xm");
    eax += 0x40;
    eax = fprintf (rdi, rsi);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4022c0 */
#include <stdint.h>
 
int32_t fcn_004022c0 (int32_t arg_8h) {
    *(0x478830) = 0;
    MikMod_RegisterAllDrivers ();
    MikMod_RegisterAllLoaders ();
    eax = *(sym.imp.libmikmod.dll_md_mode);
    ecx = *(sym.imp.libmikmod.dll_md_reverb);
    *(eax) = 9;
    *(ecx) = 0;
    MikMod_Init (0x41a836);
    edx = *(sym.imp.libmikmod.dll_md_mode);
    ecx = *((esp + 8));
    eax = *(sym.imp.libmikmod.dll_md_reverb);
    *(edx) = 9;
    *(eax) = 0;
    eax = Player_Load (ecx, 6, 0);
    *(0x478834) = eax;
    if (eax == 0) {
        eax |= 0xffffffff;
        return eax;
    }
    *((eax + 0xf8)) = 1;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x402340 */
#include <stdint.h>
 
int32_t fcn_00402340 (void) {
    malloc (0x2c);
    ecx = *(0x41c374);
    edx = *(0x41c378);
    *(eax) = ecx;
    ecx = *(0x41c37c);
    *((eax + 4)) = edx;
    edx = *(0x41c380);
    *((eax + 8)) = ecx;
    ecx = *(0x41c384);
    *((eax + 0xc)) = edx;
    edx = *(0x41c388);
    *((eax + 0x10)) = ecx;
    ecx = *(0x41c38c);
    *((eax + 0x14)) = edx;
    edx = "@@@@";
    *((eax + 0x18)) = ecx;
    ecx = *(0x41c394);
    *((eax + 0x1c)) = edx;
    edx = *(0x41c398);
    *((eax + 0x20)) = ecx;
    ecx = *(0x41c39c);
    *((eax + 0x24)) = edx;
    *(0x478838) = eax;
    *(0x478830) = 0xb;
    *((eax + 0x28)) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x401a40 */
#include <stdint.h>
 
uint32_t fcn_00401a40 (int32_t arg_ch) {
    int32_t var_4h;
    ebp = *((esp + 0xc));
    eax = malloc (0x2c, edi, esi, ebp);
    esi = eax;
    *(esi) = 0x2ee;
    eax = malloc (0x2328);
    *((esi + 4)) = eax;
    eax = malloc (0x1770);
    *((esi + 8)) = eax;
    eax = malloc (0x2328);
    ebx = eax;
    *((esi + 0xc)) = ebx;
    fcn_004019e0 ();
    *(fp_stack--) = *(0x41ad48);
    eax = ebx;
    *(esp) = fp_stack[0];
    fp_stack--;
    fcn_004018c0 ();
    ebx = esi + 0x10;
    eax = malloc (0xc00);
    *(fp_stack--) = *(ebp);
    *(fp_stack--) = *(0x41acd8);
    *(ebx) = eax;
    eax = *((ebp + 4));
    fp_stack[1] *= fp_stack[0];
    eax = -eax;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *((esp + 0x18)) = eax;
    *((esi + 0x24)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x18));
    ecx = esi + 0x14;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((esi + 0x28)) = fp_stack[0];
    fp_stack--;
    fcn_004023d0 (ecx, ebx, "ball.png");
    eax = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x403ef0 */
#include <stdint.h>
 
uint32_t fcn_00403ef0 (void) {
    int32_t var_18h;
    eax = malloc (4, edi, esi, ebp);
    eax = esp + 0x18;
    fcn_004023d0 (eax, 0x478480, "rotozoom.png");
    eax = malloc (0x10);
    esi = eax;
    *(esi) = 0x100;
    *((esi + 4)) = 0x200;
    *((esi + 8)) = 0x100;
    eax = malloc (0x20000);
    ebx = 0;
    *((esi + 0xc)) = eax;
    *(0x478460) = esi;
    edi = eax;
    if (*((esi + 4)) <= ebx) {
        goto label_0;
    }
    do {
        ecx = *(esi);
        memset (edi, 0, ecx);
        edi += *((esi + 8));
        ebx++;
    } while (ebx < *((esi + 4)));
label_0:
    ecx = esp + 0x14;
    edx = 0;
    eax = esi;
    fcn_00402150 (0x80);
    edx = *((esi + 8));
    edx <<= 7;
    edx += *((esi + 0xc));
    eax = 0x100;
    *(0x478470) = eax;
    *(0x478474) = eax;
    *(0x47847c) = edx;
    eax = *((esi + 8));
    *(0x478478) = eax;
    eax = ebp;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x403190 */
#include <stdint.h>
 
uint32_t fcn_00403190 (void) {
    int32_t var_18h;
    int32_t var_18h_2;
    edi = eax;
    eax = malloc (4, edi, esi, ebp);
    esi = *(edi);
    ebx = *((edi + 4));
    esi += 0x180;
    ebx += 0xc8;
    *(0x478484) = esi;
    *(0x478488) = ebx;
    eax = malloc (0x10);
    edi = eax;
    *((edi + 4)) = ebx;
    ebx *= esi;
    *(edi) = esi;
    *((edi + 8)) = esi;
    if (ebx > 0) {
        eax = void (*ebp)(uint32_t) (ebx);
        *((edi + 0xc)) = eax;
    } else {
        *((edi + 0xc)) = 0;
    }
    *(0x47848c) = edi;
    fcn_00402e00 ();
    eax = void (*ebp)(uint32_t) (0xc00);
    *(fp_stack--) = *(0x41ad40);
    edi = *((esp + 0x18));
    *(fp_stack--) = *(0x41ad38);
    *(fp_stack--) = *(0x41ad30);
    *(edi) = eax;
    edx = 0;
    esi = eax;
    do {
        ecx = edx;
        ecx >>= 6;
        ecx &= 3;
        eax = edx;
        eax >>= 4;
        eax &= 3;
        ecx += eax;
        eax = edx;
        eax >>= 2;
        eax &= 3;
        ecx += eax;
        eax = edx;
        eax &= 3;
        ecx += eax;
        ecx += ecx;
        ecx += ecx;
        *((esp + 0x14)) = ecx;
        *(fp_stack--) = *((esp + 0x14));
        *((esi + 8)) = ecx;
        edx++;
        eax = *((esp + 0x14));
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] *= fp_stack[4];
        eax |= 0xc00;
        *((esp + 0x18)) = eax;
        esi += 0xc;
        fp_stack[0] /= fp_stack[3];
        *((esp + 0x18)) = fp_stack[0];
        fp_stack--;
        eax = *((esp + 0x18));
        *((esi - 0xc)) = eax;
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] /= fp_stack[2];
        eax = *((esp + 0x14));
        eax |= 0xc00;
        *((esp + 0x18)) = eax;
        *((esp + 0x18)) = fp_stack[0];
        fp_stack--;
        eax = *((esp + 0x18));
        *((esi - 8)) = eax;
    } while (edx < 0x40);
    eax = edi;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x404080 */
#include <stdint.h>
 
uint32_t fcn_00404080 (void) {
    eax = malloc (4, edi, esi);
    memset (0x468280, 0, 0xfa00);
    eax = malloc (0x10);
    esi = eax;
    *(esi) = 0x1000;
    *((esi + 4)) = 0x3c;
    *((esi + 8)) = 0x1000;
    eax = malloc (0x3c000);
    ecx = *(0x47883c);
    *((esi + 0xc)) = eax;
    eax = *(esi);
    eax = 0;
    *(0x458080) = esi;
    fcn_00402070 (esi, eax);
    eax = malloc (0xc00);
    *(ebp) = eax;
    ecx = 0xfffffffd;
    esi = eax;
    do {
        edi = ecx - 2;
        if (edi > 0x3f) {
            edx = 0x3f;
        } else {
            edx = 0;
            dl = (edi < 0) ? 1 : 0;
            edx--;
            edx &= edi;
        }
        *(esi) = edx;
        if (ecx > 0x3f) {
            edx = 0x3f;
        } else {
            edx = 0;
            dl = (ecx < 0) ? 1 : 0;
            edx--;
            edx &= ecx;
        }
        *((esi + 4)) = edx;
        edx = ecx + 3;
        ecx++;
        *((esi + 8)) = edx;
        edx = ecx + 3;
        esi += 0xc;
    } while (edx < 0x40);
    ecx = 0xe;
    *((eax + 0x300)) = ecx;
    *((eax + 0x304)) = ecx;
    *((eax + 0x308)) = ecx;
    edx = 0x1c;
    *((eax + 0x30c)) = edx;
    *((eax + 0x310)) = edx;
    *((eax + 0x314)) = edx;
    *((eax + 0x900)) = ecx;
    ecx = 6;
    *((eax + 0x904)) = ecx;
    *((eax + 0x908)) = ecx;
    *((eax + 0x90c)) = 0x1b;
    ecx = 0x12;
    *((eax + 0x910)) = ecx;
    *((eax + 0x914)) = ecx;
    eax = 0;
    *(0x458060) = eax;
    *(0x458064) = eax;
    *(0x458068) = eax;
    *(0x45806c) = eax;
    *(0x468270) = eax;
    *(0x468274) = eax;
    *(0x468278) = eax;
    *(0x46827c) = eax;
    *(0x458070) = eax;
    *(0x458074) = eax;
    *(0x458078) = eax;
    *(0x45807c) = eax;
    eax = ebp;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x404fd0 */
#include <stdint.h>
 
uint32_t fcn_00404fd0 (void) {
    memset (0x43cf00, 0, 0x140);
    eax = malloc (4);
    edi = eax;
    fcn_00404a70 ();
    eax = malloc (0xc00);
    *(edi) = eax;
    ecx = 3;
    edx = 0x40;
    do {
        esi = ecx - 2;
        *(eax) = esi;
        esi = ecx + 3;
        *((eax + 4)) = ecx;
        *((eax + 8)) = esi;
        ecx++;
        eax += 0xc;
        edx--;
    } while (edx != 0);
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x404a70 */
#include <stdint.h>
 
uint32_t fcn_00404a70 (void) {
    int32_t var_8h;
    int32_t var_10h;
    esi = 0;
    do {
        *(fp_stack--) = *((esp + 8));
        *((esp + 0x18)) = fp_stack[0];
        fp_stack[0] /= *(0x41ac90);
        fp_stack[0] += fp_stack[0];
        fp_stack[0] *= *(0x41ac88);
        _CIsin (esi, esi);
        fp_stack[0] *= *(0x41ac80);
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x18));
        fp_stack[0] /= *(0x41ac78);
        _CIcos ();
        fp_stack[0] *= *(0x41ac70);
        fp_stack[0] += *((esp + 0x10));
        *((esp + 8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x18));
        fp_stack[0] /= *(0x41ac68);
        fp_stack[0] += fp_stack[0];
        fp_stack[0] *= *(0x41ac88);
        _CIsin ();
        fp_stack[0] *= *(0x41ac60);
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x18));
        fp_stack[0] /= *(0x41ac58);
        _CIcos ();
        fp_stack[0] *= *((esp + 0x10));
        fp_stack[0] += *((esp + 8));
        eax = *((esp + 8));
        fp_stack[0] += *(0x41ac50);
        eax |= 0xc00;
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        al = *((esp + 0x10));
        *((esi + 0x42cf00)) = al;
        *(fp_stack--) = *((esp + 0x18));
        fp_stack[0] /= *(0x41ac48);
        fp_stack[0] += fp_stack[0];
        fp_stack[0] *= *(0x41ac88);
        _CIsin (eax);
        fp_stack[0] *= *(0x41ac80);
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x18));
        fp_stack[0] /= *(0x41ac40);
        _CIcos ();
        fp_stack[0] *= *(0x41ac70);
        fp_stack[0] += *((esp + 0x10));
        *((esp + 8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x18));
        fp_stack[0] /= *(0x41ac38);
        fp_stack[0] += fp_stack[0];
        fp_stack[0] *= *(0x41ac88);
        _CIsin ();
        fp_stack[0] *= *(0x41ac60);
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x18));
        fp_stack[0] /= *(0x41ac30);
        _CIcos ();
        fp_stack[0] *= *((esp + 0x10));
        fp_stack[0] += *((esp + 8));
        eax = *((esp + 8));
        fp_stack[0] += *(0x41ac50);
        eax |= 0xc00;
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        cl = *((esp + 0x10));
        *((esi + 0x41cf00)) = cl;
        *(fp_stack--) = *((esp + 0x18));
        fp_stack[0] /= *(0x41ac28);
        fp_stack[0] += fp_stack[0];
        fp_stack[0] *= *(0x41ac88);
        _CIsin (eax);
        fp_stack[0] *= *(0x41ac80);
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x18));
        fp_stack[0] /= *(0x41ac20);
        _CIcos ();
        fp_stack[0] *= *(0x41ac70);
        fp_stack[0] += *((esp + 0x10));
        *((esp + 8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x18));
        fp_stack[0] /= *(0x41ac18);
        fp_stack[0] += fp_stack[0];
        fp_stack[0] *= *(0x41ac88);
        _CIsin ();
        fp_stack[0] *= *(0x41ac60);
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x18));
        fp_stack[0] /= *(0x41ac10);
        _CIcos ();
        fp_stack[0] *= *((esp + 0x10));
        esi++;
        fp_stack[0] += *((esp + 8));
        eax = *((esp + 8));
        fp_stack[0] += *(0x41ac50);
        eax |= 0xc00;
        *((esp + 0x10)) = eax;
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        dl = *((esp + 0x10));
        *((esi + 0x44805f)) = dl;
        *((esp + 8)) = esi;
    } while (esi < 0x10000);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x402aa0 */
#include <stdint.h>
 
uint32_t fcn_00402aa0 (void) {
    eax = malloc (4, edi, esi, ebx);
    esi = eax;
    *(esi) = 1;
    fcn_004023d0 (0x4784f0, 0x4784c0, "credits.png");
    eax = *(0x4784f8);
    ecx = *(0x4784fc);
    edx = eax * 5;
    edx <<= 4;
    edx += ecx;
    edi = 0x50;
    *(0x4784dc) = edx;
    edx = ecx + 0x50;
    *(0x4784e0) = edi;
    ebx = ecx + 0xa0;
    *(0x4784b0) = edi;
    *(0x4784a0) = edi;
    *(0x478490) = edi;
    *(0x4784d8) = eax;
    *(0x4784e8) = eax;
    *(0x4784b8) = eax;
    *(0x4784a8) = eax;
    *(0x4784ec) = edx;
    edx = 0x3c;
    eax = esi;
    ecx += 0xf0;
    *(0x4784bc) = ebx;
    *(0x4784d0) = 0x6a;
    *(0x4784d4) = 0x18;
    *(0x4784e4) = edx;
    *(0x4784b4) = edx;
    *(0x4784ac) = ecx;
    *(0x4784a4) = edx;
    *(0x4784c4) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4042f0 */
#include <stdint.h>
 
int32_t fcn_004042f0 (int32_t arg_37ch, int32_t arg_394h, int32_t arg_38ch) {
    int32_t var_4h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_1ch;
    void * var_20h;
    void * s;
    int32_t var_59h;
    void * var_1ech;
    int32_t var_36ch;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x36c)) = eax;
    ebp = *((esp + 0x37c));
    ebx = 0;
    esi = edx;
    if (*(0x41c36c) != ebx) {
        edx = 0xc2;
        *(0x41c36c) = ebx;
        fcn_00402230 ();
    }
    if (*(0x41ceb8) != ebx) {
        *(0x478520) = bl;
        *(0x478521) = bl;
        *(0x478522) = 0x3f;
    }
    eax = esp + 0x5c;
    memset (eax, ebx, 0x190);
    ecx = esp + 0x1ec;
    memset (ecx, ebx, 0x190);
    *(fp_stack--) = 1.0;
    eax = *((esp + 0x394));
    *(fp_stack--) = 1.0;
    *(fp_stack--) = 0.0;
    eax -= ebx;
    *(fp_stack--) = 0.0;
    if (eax == 0) {
        goto label_7;
    }
    eax -= 2;
    if (eax != 0) {
        goto label_3;
    }
    *(fp_stack--) = *(0x458060);
    fp_stack[0] += fp_stack[4];
    *(0x458060) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x458064);
    fp_stack[0] += fp_stack[4];
    *(0x458064) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x458068);
    fp_stack[0] += fp_stack[4];
    *(0x458068) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x45806c);
    fp_stack[0] += fp_stack[4];
    *(0x45806c) = fp_stack[0];
    fp_stack--;
    if (esi > 4) {
        eax = 4;
    } else {
        eax = 0;
        al = (esi < ebx) ? 1 : 0;
        eax--;
        eax &= esi;
    }
    *(fp_stack--) = *(0x41ae28);
    edx = 3;
    edx -= eax;
    eax = edx + 1;
    if (eax < 4) {
        goto label_8;
    }
    eax >>= 2;
    esi = eax;
    eax = -eax;
    ecx = edx*4 + 0x458068;
    edx = edx + eax*4;
label_0:
    *(fp_stack--) = *((ecx + 8));
    fp_stack[0] -= fp_stack[1];
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x10));
    *(fp_stack--) = fp_stack[0];
    fp_status = fp_compare(fp_stack[0], fp_stack[6]);
    ax = fp_status;
    if ((ah & 0x41) == 0) {
        fp_stack++;
        fp_stack++;
        fp_tmp_0 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        *((esp + 0x10)) = fp_stack[0];
        goto label_9;
    }
    fp_status = fp_compare(fp_stack[0], fp_stack[4]);
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        goto label_10;
    }
    fp_stack++;
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    *((esp + 0x10)) = fp_stack[0];
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    do {
        fp_tmp_3 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
label_9:
        *(fp_stack--) = *((esp + 0x10));
        *((ecx + 8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx + 4));
        fp_stack[0] -= fp_stack[4];
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x10));
        *(fp_stack--) = fp_stack[0];
        fp_status = fp_compare(fp_stack[0], fp_stack[6]);
        ax = fp_status;
        if ((ah & 0x41) != 0) {
            goto label_11;
        }
        fp_stack++;
        fp_stack++;
        *((esp + 0x10)) = fp_stack[0];
        goto label_12;
label_10:
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
    } while (1);
label_11:
    fp_status = fp_compare(fp_stack[0], fp_stack[4]);
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        goto label_13;
    }
    fp_stack++;
    fp_tmp_4 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    *((esp + 0x10)) = fp_stack[0];
    fp_tmp_5 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_5;
    do {
label_12:
        *(fp_stack--) = *((esp + 0x10));
        *((ecx + 4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(ecx);
        fp_stack[0] -= fp_stack[4];
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x10));
        *(fp_stack--) = fp_stack[0];
        fp_status = fp_compare(fp_stack[0], fp_stack[6]);
        ax = fp_status;
        if ((ah & 0x41) != 0) {
            goto label_14;
        }
        fp_stack++;
        fp_stack++;
        *((esp + 0x10)) = fp_stack[0];
        goto label_15;
label_13:
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
    } while (1);
label_14:
    fp_status = fp_compare(fp_stack[0], fp_stack[4]);
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        goto label_16;
    }
    fp_stack++;
    fp_tmp_6 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_6;
    *((esp + 0x10)) = fp_stack[0];
    fp_tmp_7 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_7;
    do {
label_15:
        *(fp_stack--) = *((esp + 0x10));
        *(ecx) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ecx - 4));
        fp_stack[0] -= fp_stack[4];
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x10));
        *(fp_stack--) = fp_stack[0];
        fp_status = fp_compare(fp_stack[0], fp_stack[6]);
        ax = fp_status;
        if ((ah & 0x41) != 0) {
            goto label_17;
        }
        fp_stack++;
        fp_stack++;
        *((esp + 0x10)) = fp_stack[0];
        goto label_1;
label_16:
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
    } while (1);
label_17:
    fp_status = fp_compare(fp_stack[0], fp_stack[4]);
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        goto label_18;
    }
    fp_stack++;
    fp_tmp_8 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_8;
    *((esp + 0x10)) = fp_stack[0];
    fp_tmp_9 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_9;
label_1:
    *(fp_stack--) = *((esp + 0x10));
    ecx -= 0x10;
    esi--;
    *((ecx + 0xc)) = fp_stack[0];
    fp_stack--;
    fp_tmp_10 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_10;
    if (esi != 0) {
        goto label_0;
    }
label_8:
    if (edx >= ebx) {
        goto label_19;
    }
    fp_stack[4] = fp_stack[0];
    fp_stack--;
label_3:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack++;
    goto label_20;
label_18:
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    goto label_1;
    do {
        fp_tmp_11 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_11;
label_19:
        *(fp_stack--) = *((edx*4 + 0x458070));
        fp_stack[0] -= fp_stack[1];
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x10));
        *(fp_stack--) = fp_stack[0];
        fp_status = fp_compare(fp_stack[0], fp_stack[6]);
        ax = fp_status;
        if ((ah & 0x41) == 0) {
            fp_stack++;
            fp_stack++;
            fp_tmp_12 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_12;
            *((esp + 0x10)) = fp_stack[0];
        } else {
            fp_status = fp_compare(fp_stack[0], fp_stack[4]);
            fp_stack++;
            ax = fp_status;
            if ((ah & 5) == 0) {
                goto label_21;
            }
            fp_stack++;
            fp_tmp_13 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_13;
            *((esp + 0x10)) = fp_stack[0];
            fp_tmp_14 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_14;
label_2:
            fp_tmp_15 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_15;
        }
        edx--;
        *(fp_stack--) = *((esp + 0x10));
        *((edx*4 + 0x458074)) = fp_stack[0];
        fp_stack--;
    } while (edx >= 0);
label_4:
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
label_20:
    edi = 0;
    fp_stack++;
label_6:
    *(fp_stack--) = *((edi*4 + 0x458060));
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 0x20)) = fp_stack[0];
    *(fp_stack--) = *((esp + 0x10));
    *((esp + 0x28)) = fp_stack[0];
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] *= *(0x41ae20);
    fp_tmp_16 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_16;
    fp_stack[0] += *(0x41ad80);
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] /= *(0x41ae18);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] /= *(0x41ae10);
    fp_stack[0] -= fp_stack[2];
    fp_stack++;
    fp_tmp_17 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_17;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 0x30)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] /= *(0x41ae08);
    _CIsin (edi);
    *(fp_stack--) = *(0x41ae38);
    fp_stack[0] -= *((esp + 0x20));
    fp_stack[0] *= *(0x41ad18);
    fp_stack[0] /= *(0x41ae00);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((esp + 0x38)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x30));
    _CIsin ();
    fp_stack[0] *= *(0x41adf8);
    fp_stack[0] += *((esp + 0x38));
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x28));
    fp_stack[0] /= *(0x41adf0);
    _CIcos ();
    *(fp_stack--) = *(0x41ad80);
    fp_stack[0] -= *((esp + 0x20));
    fp_stack[0] *= *(0x41ad18);
    fp_stack[0] /= *(0x41ade8);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x30));
    ax = _CIcos ();
    fp_stack[0] *= *(0x41adf8);
    fp_stack[0] += *((esp + 0x28));
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    fp_stack[0] *= *(0x41ade0);
    fp_stack[0] += *(0x41add8);
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    if (*((edi*4 + 0x468270)) != ebx) {
        *((edi*4 + 0x478450)) = fp_stack[0];
    }
    *((esp + 0x38)) = fp_stack[0];
    *((edi*4 + 0x478450)) -= fp_stack[0];
    fp_stack[0] *= *(0x41acd8);
    *((esp + 0x30)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x10));
    *((esp + 0x28)) = fp_stack[0];
    fp_stack[0] += *(0x41ae38);
    *((esp + 0x40)) = fp_stack[0];
    fp_stack[0] *= *(0x41ade8);
    *((esp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((edi*4 + 0x458070));
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x10));
    *(fp_stack--) = fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    if ((ah & 5) == 0) {
        goto label_22;
    }
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 1.0;
    goto label_23;
label_21:
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    goto label_2;
label_7:
    eax = 4;
    ecx = esi;
    edx = 0;
    eax = fcn_004022a0 ();
    esi = eax;
    if (esi <= ebx) {
        goto label_3;
    }
    *(fp_stack--) = *(0x41ae28);
    ecx = esi;
    eax = 1;
    edi = 0x468270;
    memset (edi, eax, ecx);
    while (edx < esi) {
        fp_tmp_18 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_18;
        *(fp_stack--) = *((edx*4 + 0x458070));
        fp_stack[0] += fp_stack[1];
        *((esp + 0x1c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x1c));
        *(fp_stack--) = fp_stack[0];
        fp_status = fp_compare(fp_stack[0], fp_stack[6]);
        ax = fp_status;
        if ((ah & 0x41) == 0) {
            fp_stack++;
            fp_stack++;
            fp_tmp_19 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_19;
            *((esp + 0x10)) = fp_stack[0];
        } else {
            fp_status = fp_compare(fp_stack[0], fp_stack[4]);
            fp_stack++;
            ax = fp_status;
            if ((ah & 5) == 0) {
                goto label_24;
            }
            fp_stack++;
            fp_tmp_20 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_20;
            *((esp + 0x10)) = fp_stack[0];
            fp_tmp_21 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_21;
label_5:
            fp_tmp_22 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_22;
        }
        *(fp_stack--) = *((esp + 0x10));
        edx++;
        *((edx*4 + 0x45806c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((edx*4 + 0x45805c));
        fp_stack[0] += fp_stack[5];
        *((edx*4 + 0x45805c)) = fp_stack[0];
        fp_stack--;
    }
    goto label_4;
label_24:
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    goto label_5;
label_22:
    fp_tmp_23 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_23;
    fp_status = fp_compare(fp_stack[0], *(0x41ae30));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) != 0) {
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
    } else {
        fp_tmp_24 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_24;
    }
label_23:
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x30));
    fp_stack[0] *= fp_stack[0];
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    ax = _CIsqrt ();
    *(fp_stack--) = *((esp + 0x10));
    fp_stack[0] *= *((esp + 0x20));
    *((esp + 0x20)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] *= *((esp + 0x20));
    *((esp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x20));
    *(fp_stack--) = fp_stack[0];
    *((esp + 0x50)) = fp_stack[0];
    *(fp_stack--) = *(0x41add0);
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x41) == 0) {
        goto label_25;
    }
    *(fp_stack--) = *((esp + 0x1c));
    *((edi*4 + 0x478450)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x41adc8);
    fp_status = fp_compare(fp_stack[0], fp_stack[2]);
    fp_stack++;
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    if ((ah & 0x41) != 0) {
        goto label_26;
    }
    *(fp_stack--) = *((esp + 0x38));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] -= fp_stack[2];
    eax = fcn_00412520 ();
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] += fp_stack[1];
    esi = eax;
    *((esp + 0x10)) = esi;
    *((esp + 0x48)) = fp_stack[0];
    *(fp_stack--) = *((esp + 0x10));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    if ((ah & 5) == 0) {
        goto label_27;
    }
    fp_tmp_25 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_25;
    fp_stack[0] += *(0x41acd0);
    fp_stack[0] *= fp_stack[0];
    *((esp + 0x30)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x28));
    fp_stack[0] *= *(0x41ad78);
    fp_stack[0] += *(0x41adc0);
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    while ((ah & 0x41) == 0) {
        *(fp_stack--) = *((esp + 0x38));
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *((esp + 0x10)) = fp_stack[0];
        fp_stack[0] *= fp_stack[0];
        *((esp + 0x30)) -= fp_stack[0];
        ax = _CIsqrt ();
        fp_stack[0] *= *(0x41acd8);
        ecx = *((esp + esi + 0x1e8));
        *((esp + 0x20)) = ecx;
        fp_stack[0] += *((esp + 0x28));
        *((esp + 0x1c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x20));
        *(fp_stack--) = *((esp + 0x1c));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 0x41) == 0) {
            *(fp_stack--) = *((esp + 0x10));
            fp_stack[0] /= *((esp + 0x50));
            fp_stack[0] *= *(0x41adb8);
            fp_stack[0] *= *(0x41ac88);
            ax = _CIcos ();
            *(fp_stack--) = *(0x41ad38);
            fp_stack[1] *= fp_stack[0];
            fp_tmp_26 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_26;
            fp_stack[0] *= *((esp + 0x40));
            fp_stack[0] *= *(0x41ad00);
            *((esp + 0x20)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *((esp + 0x20));
            *(fp_stack--) = fp_stack[0];
            fp_status = fp_compare(fp_stack[0], fp_stack[2]);
            ax = fp_status;
            fp_stack[2] = fp_stack[0];
            fp_stack--;
            if ((ah & 0x41) == 0) {
                fp_stack[1] = fp_stack[0];
                fp_stack--;
                fp_stack++;
                *(fp_stack--) = *(0x41adb0);
            } else {
                fp_tmp_27 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_27;
                fp_status = fp_compare(fp_stack[0], *(0x41ae30));
                fp_stack++;
                ax = fp_status;
                if ((ah & 5) == 0) {
                    goto label_28;
                }
                fp_stack++;
                *(fp_stack--) = 0.0;
            }
label_28:
            *((esp + 0x10)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *((esp + 0x10));
            eax = *((esp + 0x10));
            eax |= 0xc00;
            *((esp + 0x20)) = eax;
            *((esp + 0x20)) = fp_stack[0];
            fp_stack--;
            dl = *((esp + 0x20));
            *((esp + esi + 0x58)) = dl;
            *(fp_stack--) = *((esp + 0x1c));
            eax = *((esp + 0x10));
            eax |= 0xc00;
            *((esp + 0x20)) = eax;
            *((esp + 0x20)) = fp_stack[0];
            fp_stack--;
            al = *((esp + 0x20));
            *((esp + esi + 0x1e8)) = al;
        }
        esi++;
        *((esp + 0x10)) = esi;
        *(fp_stack--) = *((esp + 0x10));
        *(fp_stack--) = *((esp + 0x48));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        fp_stack++;
        ax = fp_status;
    }
    goto label_26;
label_27:
    fp_stack++;
label_25:
    fp_stack[1] = fp_stack[0];
    fp_stack--;
label_26:
    edi++;
    fp_stack++;
    *((esp + 0x1c)) = edi;
    if (edi < 4) {
        goto label_6;
    }
    *(0x41c368) = ebx;
    if (*(0x41ceb8) != ebx) {
        *(0x478520) = bl;
        *(0x478521) = 0x3f;
        *(0x478522) = 0x3f;
    }
    edx = 0;
    if (*((ebp + 4)) <= ebx) {
        goto label_29;
    }
    eax = 0;
    do {
        edi = eax + 0x468280;
        esi = edi + 1;
        ecx = 0x52;
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi++;
        es:edi++;
        esi = eax + 0x4580a1;
        edi = eax + 0x4580a0;
        ecx = 0x52;
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
        ecx = *((esp + edx*2 + 0x59));
        *(es:edi) = *(esi);
        esi++;
        es:edi++;
        esi = *((esp + edx*2 + 0x58));
        ecx += esi;
        ecx >>= 1;
        *((eax + 0x4683c9)) = cl;
        cl = *((esp + edx*2 + 0x1e8));
        cl &= 0x80;
        *((eax + 0x4581e9)) = cl;
        edx++;
        eax += 0x14a;
    } while (edx < *((ebp + 4)));
label_29:
    if (*(0x41ceb8) != ebx) {
        *(0x478520) = bl;
        *(0x478521) = 0x3f;
        *(0x478522) = bl;
    }
    edx = *((esp + 0x38c));
    eax = *((ebp + 0xc));
    fcn_004041e0 (eax, edx);
    ecx = *((esp + 0x384));
    *(0x478520) = bl;
    *(0x478521) = bl;
    *(0x478522) = bl;
    ecx ^= esp;
    *(0x478508) = 1;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x401b90 */
#include <stdint.h>
 
int32_t fcn_00401b90 (int32_t arg_14h, uint32_t arg_18h, uint32_t arg_1ch) {
    eax = edi;
    fcn_00401af0 ();
    if (*(0x41ca1c) == 0) {
        goto label_0;
    }
    ebx = *((edi + 4));
    esi = *((edi + 0xc));
    *(0x41ca1c) = 0;
    if (ebx <= 0) {
        goto label_1;
    }
    ebp = *(edi);
    do {
        memset (esi, 0, ebp);
        esi += *((edi + 8));
        ebx--;
    } while (ebx != 0);
label_1:
    esi = *((esp + 0x14));
    ecx = esi + 0x10;
    edx = 0x80;
    ax = fcn_00402230 ();
    goto label_2;
label_0:
    esi = *((esp + 0x14));
label_2:
    *(fp_stack--) = *(0x41ca18);
    *(fp_stack--) = 1.0;
    fp_stack[1] += fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *(0x41ca18) = fp_stack[0];
    fp_stack--;
    if (*((esp + 0x18)) != 0) {
        *(fp_stack--) = *(0x41ae50);
        *(0x41ce8c) = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = *(0x41ce88);
    ebx = *((edi + 4));
    *(fp_stack--) = fp_stack[0];
    *((esp + 0x14)) = ebx;
    fp_stack[0] += *(0x41ce84);
    *(0x41ce84) = fp_stack[0];
    fp_stack--;
    fp_stack[0] += *(0x41ce8c);
    *(0x41ce88) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x14));
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x41ce84);
    *(fp_stack--) = *((esp + 0x14));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    if ((ah & 5) != 0) {
        *(fp_stack--) = 0.0;
        *(0x41ce88) = fp_stack[0];
        fp_stack--;
        *(0x41ce84) = fp_stack[0];
        fp_stack--;
    } else {
        fp_stack++;
    }
    *(0x41ce80)++;
    if (*((esp + 0x1c)) != 0) {
        *(fp_stack--) = 1.0;
        *(0x41ce80) = 0;
        *(0x41ce7c) = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = *(0x41ce7c);
    fp_stack[0] *= *(0x41ad58);
    *(0x41ce7c) = fp_stack[0];
    fp_stack--;
    fp_stack[0] -= *(0x41ce7c);
    fp_stack[0] *= *(0x41ada8);
    fp_stack[0] += *(0x41ada0);
    _CIsin ();
    fp_stack[0] += *(0x41ad98);
    *(fp_stack--) = 1.0;
    eax = ebx;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    edx:eax = (int64_t) eax;
    eax -= edx;
    eax >>= 1;
    fp_stack[0] -= *(0x41ad90);
    *((esp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x20));
    *((esp + 0x20)) = eax;
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x41ce84);
    fp_stack[0] -= *((esp + 0x20));
    *((esp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x20));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esi + 0x24));
    *(esp) = fp_stack[0];
    fp_stack--;
    fcn_00401680 (edi, esi);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x403fb0 */
#include <stdint.h>
 
int32_t fcn_00403fb0 (int32_t arg_20h) {
    if (*(0x41c370) == 0) {
        goto label_0;
    }
    eax = *((esp + 0x1c));
    edi = *((eax + 4));
    esi = *((eax + 0xc));
    *(0x41c370) = 0;
    if (edi <= 0) {
        goto label_1;
    }
    ebx = *(eax);
    ebp = *((eax + 8));
    do {
        memset (esi, 0, ebx);
        esi += ebp;
        edi--;
    } while (edi != 0);
label_1:
    edx = 0x80;
    ecx = 0x478480;
    fcn_00402230 ();
label_0:
    *(fp_stack--) = *(0x41ceb4);
    fp_stack[0] += *(0x41acd0);
    *(0x41ceb4) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x41ceb4);
    fp_stack[0] *= *(0x41ad68);
    _CIcos ();
    fp_stack[0] *= *(0x41ad50);
    fp_stack[0] += *(0x41ad20);
    *((esp + 0x18)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x18));
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x41ceb4);
    fp_stack[0] *= *(0x41ae48);
    _CIsin (ecx);
    fp_stack[0] *= *(0x41ae40);
    eax = *((esp + 0x20));
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *(esp) = fp_stack[0];
    fp_stack--;
    fcn_00403a50 (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x405030 */
#include <stdint.h>
 
int32_t fcn_00405030 (int32_t arg_8h, uint32_t arg_ch) {
    if (*(0x41c364) != 0) {
        edx = 0x80;
        *(0x41c364) = 0;
        fcn_00402230 ();
    }
    eax = 1;
    *(0x41cec8) += eax;
    if (*((esp + 0xc)) != 0) {
        *(fp_stack--) = 1.0;
        *(0x41cec8) = 0;
        *(0x41cec4) = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = *(0x41cec4);
    *(0x41cec0) += eax;
    fp_stack[0] *= *(0x41ad58);
    eax = *((esp + 8));
    ecx = *((eax + 0xc));
    *(0x43d040) = ecx;
    *(0x41cec4) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x41cec4);
    *(fp_stack--) = 1.0;
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] *= *(0x41ada8);
    fp_stack[0] += *(0x41ada0);
    _CIsin ();
    fp_stack[0] += *(0x41ad98);
    *(fp_stack--) = 1.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    fp_stack[0] -= *(0x41ad90);
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x10));
    *(esp) = fp_stack[0];
    fp_stack--;
    fcn_00404c90 ();
    fcn_00404e40 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4032d0 */
#include <stdint.h>
 
uint32_t fcn_004032d0 (uint32_t arg_34h, uint32_t arg_38h, uint32_t arg_3ch) {
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_2ch;
    ebp = 0;
    edi = eax;
    if (*(0x41c3bc) != ebp) {
        edx = 0x40;
        *(0x41c3bc) = ebp;
        ax = fcn_00402230 ();
    }
    ecx = 1;
    *(0x41ceb0) += ecx;
    if (*((esp + 0x34)) != ebp) {
        *(fp_stack--) = 1.0;
        *(0x41ceb0) = ebp;
        *(0x41ceac) = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = *(0x41ceac);
    fp_stack[0] *= *(0x41ad58);
    *(0x41ceac) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *(fp_stack--) = *(0x41ceac);
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    if ((ah & 0x41) == 0) {
        fp_stack[0] += *(0x41add0);
        *(0x41ceac) = fp_stack[0];
        fp_stack--;
    } else {
        fp_stack++;
    }
    if (*((esp + 0x38)) != ebp) {
        if (*(0x41cea8) == ebp) {
            goto label_0;
        }
        *(fp_stack--) = *(0x41c3ac);
        *(0x41cea8) = ebp;
        fp_stack[0] = -fp_stack[0];
        *(0x41c3ac) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x41c3b0);
        fp_stack[0] = -fp_stack[0];
        *(0x41c3b0) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x41c3b4);
        fp_stack[0] = -fp_stack[0];
        *(0x41c3b4) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x41c3b8);
        fp_stack[0] = -fp_stack[0];
        *(0x41c3b8) = fp_stack[0];
        fp_stack--;
    } else {
        *(0x41cea8) = ecx;
    }
label_0:
    *(fp_stack--) = *(0x41cea4);
    *(0x41ce9c) += ecx;
    fp_stack[0] += *(0x41c3ac);
    edx = *(0x41cea0);
    *(0x41cea4) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x41c3a0);
    fp_stack[0] += *(0x41c3b0);
    *(0x41c3a0) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x41c3a4);
    fp_stack[0] += *(0x41c3b4);
    *(0x41c3a4) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x41c3a8);
    fp_stack[0] += *(0x41c3b8);
    *(0x41c3a8) = fp_stack[0];
    fp_stack--;
    if (*((esp + 0x3c)) != ebp) {
        eax = *((edi + 4));
        if (edx < eax) {
            edx += 2;
            *(0x41cea0) = edx;
        }
        if (edx <= eax) {
            goto label_1;
        }
        edx = eax;
        *(0x41cea0) = edx;
    }
label_1:
    ecx = *((edi + 4));
    esi = *((edi + 0xc));
    ebx = *(edi);
    edi = *((edi + 8));
    eax = ecx;
    eax -= edx;
    *((esp + 0x2c)) = esi;
    *((esp + 0x20)) = ebx;
    *((esp + 0x24)) = eax;
    *((esp + 0x28)) = edi;
    edx = 2;
    if (eax > ecx) {
        goto label_2;
    }
    if (ebx <= ebp) {
        goto label_2;
    }
    ebp = eax + 2;
    if (ebp > ecx) {
        ecx -= eax;
        edx = ecx;
    }
    ecx = edi;
    ecx *= eax;
    esi += ecx;
    if (edx <= 0) {
        goto label_2;
    }
    do {
        memset (esi, 0, ebx);
        esi += edi;
        ebp--;
    } while (ebp != 0);
label_2:
    *(fp_stack--) = *(0x41ce9c);
    fp_stack[0] /= *(0x41ac50);
    *((esp + 0x10)) = fp_stack[0];
    _CIsin ();
    fp_stack[0] *= *(0x41acd8);
    *((esp + 0x18)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x10));
    _CIcos ();
    fp_stack[0] *= *(0x41acd8);
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x41ceac);
    *(fp_stack--) = 1.0;
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] *= *(0x41ada8);
    fp_stack[0] += *(0x41ada0);
    _CIsin ();
    fp_stack[0] += *(0x41ad98);
    *(fp_stack--) = 1.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    fp_stack[0] -= *(0x41ad90);
    *((esp + 0x38)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x38));
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x41c3a8);
    fp_stack[0] /= *(0x41aca0);
    _CIcos (ecx);
    fp_stack[0] *= *(0x41acd8);
    fp_stack[0] += *(0x41acd0);
    *(fp_stack--) = *(0x41ac00);
    fp_stack[1] *= fp_stack[0];
    fp_stack[0] *= *((esp + 0x1c));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = fcn_00412520 ();
    *(fp_stack--) = *(0x41c3a4);
    fp_stack[0] /= *(0x41aca0);
    _CIsin (eax);
    fp_stack[0] *= *(0x41acd8);
    fp_stack[0] += *(0x41acd0);
    *(fp_stack--) = *(0x41ade0);
    fp_stack[1] *= fp_stack[0];
    fp_stack[0] *= *((esp + 0x18));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = fcn_00412520 ();
    *(fp_stack--) = *(0x41c3a0);
    fp_stack[0] /= *(0x41aca0);
    _CIsin (eax);
    fp_stack[0] *= *(0x41acd8);
    fp_stack[0] += *(0x41acd0);
    *(fp_stack--) = *(0x41ac00);
    fp_stack[1] *= fp_stack[0];
    fp_stack[0] *= *((esp + 0x1c));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = fcn_00412520 ();
    *(fp_stack--) = *(0x41cea4);
    fp_stack[0] /= *(0x41aca0);
    _CIcos (eax);
    fp_stack[0] *= *(0x41acd8);
    fp_stack[0] += *(0x41acd0);
    *(fp_stack--) = *(0x41ade0);
    fp_stack[1] *= fp_stack[0];
    fp_stack[0] *= *((esp + 0x28));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = fcn_00412520 ();
    eax = esp + 0x34;
    fcn_00403040 (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x402b70 */
#include <stdint.h>
 
int32_t fcn_00402b70 (int32_t arg_18h) {
    int32_t var_10h;
    edi = eax;
    eax = *((esp + 0x18));
    if (*(eax) != 1) {
        goto label_0;
    }
    ebx = *((edi + 4));
    esi = *((edi + 0xc));
    if (ebx <= 0) {
        goto label_1;
    }
    do {
        eax = *(edi);
        memset (esi, 0, eax);
        esi += *((edi + 8));
        ebp--;
    } while (ebp != 0);
label_1:
    eax = *(0x4784d4);
    eax *= 3;
    edx:eax = (int64_t) eax;
    eax -= edx;
    eax >>= 1;
    ebx -= eax;
    ecx = 0x4784d0;
    edx = 0x1e;
    eax = edi;
    fcn_00402150 (ebx);
    ecx = *((esp + 0x1c));
    *(ecx) = 0;
label_0:
    edx = *(0x478834);
    eax = *((edx + 0x104));
    edx = 4;
    eax += edx;
    ecx = eax;
    eax >>= 4;
    ecx &= 0xf;
    *((esp + 0x10)) = eax;
    if (eax < 3) {
        if (*(0x41ce98) < 0x3f) {
            *(0x41ce98) += edx;
        }
    }
    if (eax > 3) {
        if (*(0x41ce98) <= 0) {
            goto label_2;
        }
        *(0x41ce98) -= edx;
    }
label_2:
    ebp = *(0x41ce94);
    if (ecx < 8) {
        if (ebp >= 0x3f) {
            goto label_3;
        }
        ebp += 3;
    } else {
        if (ebp <= 0) {
            goto label_3;
        }
        ebp -= 3;
    }
    *(0x41ce94) = ebp;
label_3:
    eax = *(0x4784c4);
    esi = *((edi + 4));
    ebx = *(0x478490);
    edx:eax = (int64_t) eax;
    eax -= edx;
    eax >>= 1;
    esi -= 0x1b;
    ecx = esi;
    ecx -= eax;
    eax = ebx;
    edx:eax = (int64_t) eax;
    eax -= edx;
    eax >>= 1;
    edx = 0xdc;
    edx -= eax;
    eax = *(0x4784c4);
    fcn_004020e0 (0, edx, ebx);
    eax = *((esp + 0x1c));
    eax--;
    if (eax != 0) {
        eax--;
        if (eax != 0) {
            eax--;
            if (eax != 0) {
                goto label_4;
            }
            ecx = 0x4784a0;
            ecx = 0x4784b0;
        } else {
        } else {
            ecx = 0x4784e0;
        }
    }
    eax = *(0x4784e4);
    edx:eax = (int64_t) eax;
    eax -= edx;
    eax >>= 1;
    esi -= eax;
    eax = *(0x4784e0);
    edx:eax = (int64_t) eax;
    eax -= edx;
    eax >>= 1;
    edx = 0xdc;
    edx -= eax;
    eax = edi;
    fcn_00402150 (esi);
label_4:
    esi = *(0x4784c0);
    eax = 0xe0;
    *((esp + 0x18)) = eax;
    esi += 0xa84;
    do {
        ecx = *((esi + 4));
        edx = *(esi);
        ecx *= ebp;
        ebx = *((esi - 4));
        edx *= ebp;
        ebx *= ebp;
        eax = (int32_t) al;
        ecx >>= 6;
        edx >>= 6;
        ebx >>= 6;
        *((eax + eax*2 + 0x478520)) = bl;
        *((eax + eax*2 + 0x478521)) = dl;
        *((eax + eax*2 + 0x478522)) = cl;
        eax = *((esp + 0x18));
        eax++;
        esi += 0xc;
        *((esp + 0x18)) = eax;
    } while (eax < 0xe5);
    esi = *((esp + 0x10));
    if (esi != 1) {
        if (esi != 2) {
            ecx = 0;
        }
    } else {
        ecx = ebp;
    }
    eax = *(0x41ce98);
    ecx >>= 1;
    edx = ecx;
    edx *= eax;
    edx >>= 6;
    *(0x4787d8) = dl;
    edx = ecx + 0xa;
    ecx += 0x14;
    edx *= eax;
    ecx *= eax;
    ecx >>= 6;
    edx >>= 6;
    *(0x4787da) = cl;
    ecx = 0;
    cl = (esi != 3) ? 1 : 0;
    *(0x4787d9) = dl;
    *(0x478508) = 1;
    ecx--;
    ecx &= ebp;
    ecx >>= 1;
    edx = ecx;
    edx *= eax;
    edx >>= 6;
    *(0x4787de) = dl;
    edx = ecx + 0xa;
    ecx += 0x14;
    edx *= eax;
    ecx *= eax;
    ecx >>= 6;
    edx >>= 6;
    *(0x4787e0) = cl;
    ecx = 0;
    cl = (esi != 2) ? 1 : 0;
    *(0x4787df) = dl;
    ecx--;
    ecx &= ebp;
    ecx >>= 1;
    edx = ecx;
    edx *= eax;
    edx >>= 6;
    *(0x4787e4) = dl;
    edx = ecx + 0xa;
    ecx += 0x14;
    edx *= eax;
    ecx *= eax;
    edx >>= 6;
    ecx >>= 6;
    *(0x4787e5) = dl;
    *(0x4787e6) = cl;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40510e */
#include <stdint.h>
 
void SDL_Flip (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x402900 */
#include <stdint.h>
 
int32_t fcn_00402900 (int32_t arg_404h_2, int32_t arg_404h) {
    int32_t var_8h;
    int32_t var_1h;
    if (*(0x478508) == 0) {
        goto label_1;
    }
    *(0x478508) = 0;
    ecx = esp + 1;
    eax = 0x478521;
    do {
        edx = *((eax - 1));
        dl += dl;
        dl += dl;
        *((ecx - 1)) = dl;
        edx = *(eax);
        dl += dl;
        dl += dl;
        *(ecx) = dl;
        edx = *((eax + 1));
        dl += dl;
        dl += dl;
        *((ecx + 1)) = dl;
        eax += 3;
        ecx += 4;
    } while (eax < 0x478821);
    ecx = *(0x41ce90);
    SDL_SetColors (ecx, esp + 8, 0, 0x100);
label_1:
    edx = *(0x41ce90);
    eax = SDL_LockSurface (edx);
    if (eax != 0) {
        printf (rdi);
        exit (rdi);
    }
    eax = *(0x41ce90);
    ecx = *((esp + 0x404));
    ebx = *(0x478504);
    esi = *((eax + 0x14));
    edi = *((ecx + 0xc));
    *(0x478514) = esi;
    if (ebx == 0) {
        goto label_2;
    }
    ecx = *(0x478500);
    eax = *(0x478500);
    edx:eax = (int64_t) eax;
    edx &= 3;
    eax += edx;
    eax = *(0x478518);
    eax -= ecx;
    edx:eax = (int64_t) eax;
    edx &= 3;
    eax += edx;
    eax >>= 2;
    eax += eax;
    ebp >>= 2;
    eax += eax;
label_0:
    ecx = ebp;
    ebx--;
    if (ecx == 0) {
        goto label_3;
    }
    do {
        edx = *(edi);
        ecx--;
        *(esi) = edx;
        esi += 4;
        edi += 4;
    } while (ecx != 0);
label_3:
    esi += eax;
    if (ebx != 0) {
        goto label_0;
    }
label_2:
    eax = *(0x41ce90);
    SDL_UnlockSurface (eax);
    ecx = *(0x41ce90);
    SDL_UpdateRect (ecx, 0, 0, 0, 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4028a0 */
#include <stdint.h>
 
uint32_t fcn_004028a0 (void) {
    int32_t var_8h;
    eax = esp - 0x14;
    eax = SDL_PollEvent (eax);
    if (eax == 0) {
        goto label_0;
    }
    do {
        al = *(esp);
        if (al == 3) {
            goto label_1;
        }
        if (al == 0xc) {
            goto label_2;
        }
        eax = SDL_PollEvent (esp);
    } while (eax != 0);
label_0:
    eax = 0;
    return eax;
label_2:
    *(0x47850c) = 0x1b;
    eax = 1;
    return eax;
label_1:
    edx = *((esp + 8));
    *(0x47850c) = edx;
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x403a50 */
#include <stdint.h>
 
int32_t fcn_00403a50 (int32_t arg_85ch) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    int32_t var_40h;
    int32_t var_44h;
    int32_t var_48h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_58h;
    int32_t var_5ch;
    int32_t var_60h;
    int32_t var_460h;
    *(fp_stack--) = *((esp + 0x858));
    eax = *(0x47847c);
    fp_stack[0] *= *(0x41acb8);
    eax = *((esp + 0x85c));
    fp_stack[0] += fp_stack[0];
    ecx = *((eax + 0xc));
    edx = *((eax + 8));
    fp_stack[0] *= *(0x41ac88);
    *((esp + 0x48)) = fp_stack[0];
    *(fp_stack--) = *((esp + 0x86c));
    *((esp + 0x38)) = fp_stack[0];
    fp_stack--;
    _CIcos (eax, esi, ebp);
    fp_stack[0] *= *((esp + 0x38));
    *((esp + 0x18)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x18));
    *((esp + 0x34)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x48));
    _CIsin ();
    fp_stack[0] *= *((esp + 0x38));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *((esp + 0x30)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x18));
    *((esp + 0x18)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x34));
    *(fp_stack--) = fp_stack[0];
    *(fp_stack--) = *(0x41acb0);
    fp_stack[1] *= fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    eax = fcn_00412520 ();
    *(fp_stack--) = *((esp + 0x30));
    *(fp_stack--) = fp_stack[0];
    esi = eax;
    fp_stack[0] *= fp_stack[2];
    *((esp + 0x40)) = esi;
    eax = fcn_00412520 ();
    *(fp_stack--) = *((esp + 0x14));
    *(fp_stack--) = fp_stack[0];
    ebx = eax;
    fp_stack[0] *= fp_stack[3];
    *((esp + 0x48)) = ebx;
    eax = fcn_00412520 ();
    *(fp_stack--) = *((esp + 0x18));
    *(fp_stack--) = fp_stack[0];
    edi = eax;
    fp_stack[0] *= fp_stack[4];
    fp_stack++;
    *((esp + 0x44)) = edi;
    fp_tmp_1 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    eax = fcn_00412520 ();
    *(fp_stack--) = *(0x41aca8);
    fp_stack[4] *= fp_stack[0];
    *(fp_stack--) = *(0x41ac00);
    *((esp + 0x38)) = eax;
    fp_stack[3] *= fp_stack[0];
    esi >>= 3;
    fp_tmp_2 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    edi >>= 3;
    ebx >>= 3;
    fp_stack[3] -= fp_stack[0];
    fp_stack++;
    ebp >>= 3;
    fp_tmp_3 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    eax = fcn_00412520 ();
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_tmp_4 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    *((esp + 0x30)) = eax;
    fp_stack[0] *= fp_stack[2];
    fp_stack++;
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    eax = fcn_00412520 ();
    ecx = 0;
    *((esp + 0x18)) = eax;
    *((esp + 0x24)) = ecx;
    *((esp + 0x10)) = ecx;
    eax = edi + edi;
    *((esp + 0x1c)) = eax;
    edx = esi + esi;
    *((esp + 0x20)) = edx;
    eax = edi*4;
    *((esp + 0x2c)) = eax;
    edx = esi*4;
    *((esp + 0x28)) = edx;
    eax = edi * 3;
    eax += eax;
    edx = esi * 3;
    *((esp + 0x14)) = eax;
    edx += edx;
    eax = 0;
    do {
        ecx = *((esp + 0x24));
        *((esp + eax + 0x60)) = ecx;
        ecx = *((esp + 0x10));
        *((esp + eax + 0x460)) = ecx;
        ecx = *((esp + 0x24));
        ecx += esi;
        *((esp + eax + 0x64)) = ecx;
        ecx = *((esp + 0x10));
        ecx += edi;
        *((esp + eax + 0x464)) = ecx;
        ecx = *((esp + 0x20));
        *((esp + eax + 0x68)) = ecx;
        ecx = *((esp + 0x1c));
        *((esp + eax + 0x468)) = ecx;
        ecx = *((esp + 0x20));
        ecx += esi;
        *((esp + eax + 0x6c)) = ecx;
        ecx = *((esp + 0x1c));
        ecx += edi;
        *((esp + eax + 0x46c)) = ecx;
        ecx = *((esp + 0x28));
        *((esp + eax + 0x70)) = ecx;
        ecx = *((esp + 0x2c));
        *((esp + eax + 0x470)) = ecx;
        ecx = *((esp + 0x28));
        ecx += esi;
        *((esp + eax + 0x74)) = ecx;
        ecx = *((esp + 0x2c));
        ecx += edi;
        *((esp + eax + 0x474)) = ecx;
        ecx = *((esp + 0x14));
        *((esp + eax + 0x478)) = ecx;
        ecx = edx + esi;
        *((esp + eax + 0x7c)) = ecx;
        ecx = *((esp + 0x14));
        ecx += edi;
        *((esp + eax + 0x78)) = edx;
        *((esp + eax + 0x47c)) = ecx;
        eax += 0x20;
        edx += ebx;
    } while (eax < 0x100);
    esi = *((esp + 0x864));
    eax = *((esi + 4));
    edx:eax = (int64_t) eax;
    edx &= 7;
    eax += edx;
    ecx = eax;
    ecx >>= 3;
    if (ecx <= 0) {
        goto label_2;
    }
    eax = *(esi);
    ebx = *((esp + 0x18));
    edx:eax = (int64_t) eax;
    edx &= 7;
    eax += edx;
    edx = *((esp + 0x5c));
    eax >>= 3;
    *((esp + 0x50)) = eax;
    *((esp + 0x14)) = edx;
    *((esp + 0x34)) = ecx;
label_1:
    esi = *((esp + 0x30));
    *((esp + 0x1c)) = esi;
    *((esp + 0x28)) = ebx;
    if (eax <= 0) {
        goto label_3;
    }
    ecx = *((esp + 0x14));
    *((esp + 0x20)) = ecx;
    *((esp + 0x24)) = eax;
label_0:
    edx = esi + 0x5000;
    if (edx > 0xc800) {
        goto label_4;
    }
    edx = ebx + 0x8200;
    if (edx > 0xaa00) {
        goto label_4;
    }
    edi = esi;
    eax = ebx;
    esi >>= 8;
    eax &= 0xff;
    ebx &= 0xffffff00;
    edi &= 0xff;
    ebx += *((esp + 0x54));
    *((esp + 0x10)) = eax;
    ebp = esi + ebx + 0x8080;
    esi = esp + 0x60;
    edx = esp + 0x460;
    *((esp + 0x2c)) = 8;
    while (ecx != 0) {
        eax = *((esp + 0x10));
        ebx = *(edx);
        ebx += eax;
        eax = *(esi);
        eax += edi;
        eax >>= 8;
        ebx &= 0xffffff00;
        ebx += ebp;
        eax = *((eax + ebx));
        *(ecx) = al;
        eax = *((edx + 4));
        eax += *((esp + 0x10));
        ebx = *((esi + 4));
        eax &= 0xffffff00;
        eax += ebp;
        ebx += edi;
        ebx >>= 8;
        eax = *((ebx + eax));
        *((ecx + 1)) = al;
        edx += 4;
        eax = *((edx + 4));
        eax += *((esp + 0x10));
        esi += 4;
        ebx = *((esi + 4));
        eax &= 0xffffff00;
        eax += ebp;
        ecx++;
        ebx += edi;
        edx += 4;
        ebx >>= 8;
        eax = *((ebx + eax));
        *((ecx + 1)) = al;
        eax = *((edx + 4));
        eax += *((esp + 0x10));
        esi += 4;
        ebx = *((esi + 4));
        eax &= 0xffffff00;
        ecx++;
        eax += ebp;
        edx += 4;
        ebx += edi;
        esi += 4;
        ebx >>= 8;
        eax = *((ebx + eax));
        ebx = *((esi + 4));
        *((ecx + 1)) = al;
        eax = *((edx + 4));
        eax += *((esp + 0x10));
        ecx++;
        eax &= 0xffffff00;
        edx += 4;
        eax += ebp;
        esi += 4;
        ebx += edi;
        ebx >>= 8;
        eax = *((ebx + eax));
        ebx = *((esi + 4));
        *((ecx + 1)) = al;
        eax = *((edx + 4));
        eax += *((esp + 0x10));
        ecx++;
        edx += 4;
        esi += 4;
        eax &= 0xffffff00;
        ebx += edi;
        eax += ebp;
        ebx >>= 8;
        eax = *((ebx + eax));
        ebx = *((esi + 4));
        *((ecx + 1)) = al;
        eax = *((edx + 4));
        eax += *((esp + 0x10));
        ecx++;
        edx += 4;
        esi += 4;
        ebx += edi;
        eax &= 0xffffff00;
        ecx++;
        ebx >>= 8;
        eax += ebp;
        eax = *((ebx + eax));
        *(ecx) = al;
        eax = *((edx + 4));
        eax += *((esp + 0x10));
        ebx = *((esi + 4));
        edx += 4;
        esi += 4;
        eax &= 0xffffff00;
        ebx += edi;
        eax += ebp;
        ebx >>= 8;
        eax = *((ebx + eax));
        ecx++;
        *(ecx) = al;
        eax = *((esp + 0x58));
        eax += 0xfffffff9;
        edx += 4;
        esi += 4;
        ecx += eax;
    }
    esi = *((esp + 0x1c));
    ebx = *((esp + 0x28));
    eax = *((esp + 0x50));
    goto label_5;
label_4:
    edi = 8;
    do {
        edx = 0;
        *(ecx) = edx;
        *((ecx + 4)) = edx;
        ecx += 0x140;
        edi--;
    } while (edi != 0);
label_5:
    ecx = *((esp + 0x20));
    esi += *((esp + 0x40));
    ebx += *((esp + 0x44));
    ecx += 8;
    *((esp + 0x1c)) = esi;
    *((esp + 0x28)) = ebx;
    *((esp + 0x20)) = ecx;
    if (ecx != 0) {
        goto label_0;
    }
    ebx = *((esp + 0x18));
label_3:
    ecx = *((esp + 0x48));
    ebx += *((esp + 0x38));
    *((esp + 0x18)) = ebx;
    if (ebx != 0) {
        goto label_1;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x402070 */
#include <stdint.h>
 
int8_t fcn_00402070 (int32_t arg_8h, int32_t arg_1ch) {
    int32_t var_10h;
    edx = *((esp + 8));
    edi = ecx;
    ecx = *((edx + 4));
    ecx -= *(edi);
    ebx = 0x140;
    if (eax > ecx) {
        goto label_0;
    }
    ecx = *(edx);
    ecx *= eax;
    ecx += *((edx + 0xc));
    *((esp + 0x10)) = ecx;
    al = 0x61;
    while (al != 0) {
        edx = *((esp + 0x18));
        esi = (int32_t) al;
        esi = *((edi + esi*4 + 4));
        ebp++;
        esi++;
        if (ebx >= 0) {
            edx = *(edx);
            edx -= esi;
            if (ebx > edx) {
                goto label_1;
            }
            edx = *((esp + 0x1c));
            ecx += ebx;
            fcn_00402010 (ecx, edx);
            ecx = *((esp + 0x18));
        }
label_1:
        al = *(ebp);
        ebx += esi;
    }
label_0:
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4022a0 */
#include <stdint.h>
 
int32_t fcn_004022a0 (void) {
    if (eax >= ecx) {
        eax = 0;
        al = (ecx < 0) ? 1 : 0;
        eax--;
        eax &= ecx;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4041e0 */
#include <stdint.h>
 
int32_t fcn_004041e0 (int32_t arg_20h, uint32_t arg_34h) {
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_20h;
    edx = *((esp + 0x20));
    ebx = *(0x458080);
    eax = *((ebx + 0xc));
    *((esp + 0x20)) = eax;
    eax = 0x468280;
label_0:
    esi = eax;
    edi = edx;
    eax += 0x14a;
    ecx = 0x50;
    edx += 0x140;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    if (eax < 0x478450) {
        goto label_0;
    }
    eax = 1;
    if (*((esp + 0x34)) != eax) {
        goto label_2;
    }
    *(0x41cebc) += eax;
    *(fp_stack--) = *(0x41cebc);
    *((esp + 0x18)) = fp_stack[0];
    fp_stack[0] /= *(0x41aca0);
    _CIsin ();
    fp_stack[0] *= *(0x41ac00);
    *(fp_stack--) = *((esp + 0x18));
    fp_stack[0] *= *(0x41ac98);
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = fcn_00412520 ();
    ebp = 0;
    *((esp + 0x18)) = eax;
    if (*((ebx + 4)) <= ebp) {
        goto label_2;
    }
    ecx = *((esp + 0x30));
    ecx += 0x6400;
    *((esp + 0x14)) = 0x45e7c0;
    *((esp + 0x34)) = ecx;
label_1:
    ecx = *((ebx + 8));
    edi = *((esp + 0x14));
    ecx *= ebp;
    ecx += *((esp + 0x18));
    esi = *((esp + 0x34));
    ecx += *((esp + 0x24));
    eax = 0x13f;
    do {
        dl = *(edi);
        edi++;
        if (dl == 0) {
            dl = *(ecx);
            if (dl == 0) {
                goto label_3;
            }
            bl = *((edi + 9));
            bl |= dl;
            *(esi) = bl;
            ebx = *(0x458080);
        }
label_3:
        esi++;
        ecx++;
        eax--;
    } while (eax != 0);
    ebp++;
    if (ebp < *((ebx + 4))) {
        goto label_1;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x404c90 */
#include <stdint.h>
 
int32_t fcn_00404c90 (void) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    *(fp_stack--) = *(0x41cec8);
    fp_stack[0] /= *(0x41ac08);
    _CIsin (edi, esi, ebp);
    *(fp_stack--) = *(0x41ac00);
    fp_stack[1] *= fp_stack[0];
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_stack[0] *= *((esp + 0x44));
    fcn_00412520 ();
    *(fp_stack--) = *(0x41cec0);
    *(fp_stack--) = *(0x41abf8);
    ecx = eax + 0x42cf00;
    edx = eax + 0x42cf02;
    fp_stack[1] /= fp_stack[0];
    edi = 0xffff7748;
    *((esp + 0x30)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] /= *(0x41abf0);
    *((esp + 0x38)) = fp_stack[0];
    fp_stack--;
label_0:
    *(fp_stack--) = *((esp + 0x10));
    *((esp + 0x28)) = fp_stack[0];
    fp_stack[0] /= *(0x41abe8);
    fp_stack[0] += *((esp + 0x30));
    _CIsin (ecx);
    fp_stack[0] *= *(0x41abe0);
    fp_stack[0] += *(0x41abd8);
    fcn_00412520 ();
    *(fp_stack--) = *((esp + 0x28));
    fp_stack[0] /= *(0x41abd0);
    ebx = eax + 0x41cf00;
    fp_stack[0] += *((esp + 0x38));
    _CIsin ();
    fp_stack[0] *= *(0x41abc8);
    fp_stack[0] += *(0x41abc0);
    fcn_00412520 ();
    esi = *((esp + 0x1c));
    ebp = eax + 0x448060;
    ebp -= ebx;
    *((esp + 0x28)) = ebp;
    ebp = *((esp + 0x20));
    ebp -= ebx;
    edx = eax + 0x448062;
    eax = *((esp + 0x14));
    ecx = ebx;
    *((esp + 0x24)) = ebp;
    *((esp + 0x18)) = 0x40;
    while (esi != 0) {
        ebp = *((esp + 0x24));
        ebx = *((ecx + ebp));
        ebp = *((esp + 0x28));
        ebp = *((ecx + ebp));
        ebx += ebp;
        ebp = *(ecx);
        ebx += ebp;
        ebp = *((esi - 1));
        ebx <<= 7;
        ebx += edi;
        *((eax - 4)) = ebx;
        ebx = *((edx - 1));
        ebx += ebp;
        ebp = *((ecx + 1));
        ebx += ebp;
        ebp = *(esi);
        ebx <<= 7;
        ebx += edi;
        *(eax) = ebx;
        ebx = *((ecx + 2));
        ebx += ebp;
        ebp = *(edx);
        ebx += ebp;
        ebp = *((esi + 1));
        ebx <<= 7;
        ebx += edi;
        *((eax + 4)) = ebx;
        ebx = *((edx + 1));
        ebx += ebp;
        ebp = *((ecx + 3));
        ebx += ebp;
        ebp = *((esi + 2));
        ebx <<= 7;
        ebx += edi;
        *((eax + 8)) = ebx;
        ebx = *((edx + 2));
        ebx += ebp;
        ebp = *((ecx + 4));
        ebx += ebp;
        ebx <<= 7;
        ebx += edi;
        *((eax + 0xc)) = ebx;
        ebx = 1;
        eax += 0x14;
        edx += 5;
        ecx += 5;
        esi += 5;
    }
    edi += 0xfa0;
    if (edi < 0x1388) {
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x404e40 */
#include <stdint.h>
 
int32_t fcn_00404e40 (void) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    *((esp + 0x14)) = 0;
    *((esp + 0x24)) = ebp;
label_1:
    ecx = *((ebp - 0x1000));
    esi = 0x200;
    *((esp + 0x1c)) = 0;
    *((esp + 0x20)) = esi;
    *((esp + 0x10)) = ebp;
label_0:
    eax = *((esp + 0x10));
    edi = *(eax);
    eax = *(eax);
    eax -= ecx;
    edx:eax = (int64_t) eax;
    edx &= 7;
    eax += edx;
    ebx = eax;
    ebx >>= 3;
    ebx -= esi;
    ebx += 0x1500;
    *((esp + 0x18)) = edi;
    if (ecx >= edi) {
        goto label_2;
    }
    eax = ecx;
    edx:eax = (int64_t) eax;
    edx &= 0xff;
    eax += edx;
    eax >>= 8;
    esi = 0xc8;
    esi -= eax;
    eax = edi;
    edx:eax = (int64_t) eax;
    edx &= 0xff;
    eax += edx;
    ecx = eax;
    ecx >>= 8;
    eax = 0xc8;
    eax -= ecx;
    ecx = eax * 5;
    ecx <<= 6;
    ecx += *(0x43d040);
    ecx += *((esp + 0x14));
    if (esi <= eax) {
        goto label_3;
    }
    if (eax > 0xb4) {
        goto label_3;
    }
    edi = 0xb4;
    if (esi <= 0xb4) {
        edi = esi;
    }
    esi -= eax;
    edi -= eax;
    eax = *((esp + 0x1c));
    eax -= ebx;
    edx:eax = (int64_t) eax;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    esi = eax;
    if (edi == 0) {
        goto label_4;
    }
    do {
        edx = ebp;
        edx >>= 8;
        edi--;
        *(ecx) = dl;
        ebp += esi;
        ecx += 0x140;
    } while (edi != 0);
label_4:
    edi = *((esp + 0x18));
label_3:
    ebp = *((esp + 0x24));
    esi = *((esp + 0x20));
    ecx = edi;
label_2:
    esi += 0x200;
    *((esp + 0x1c)) = ebx;
    *((esp + 0x20)) = esi;
    if (esi < 0x1400) {
        goto label_0;
    }
    edi = *((esp + 0x14));
    esi = *((edi + 0x43cf00));
    eax = ecx;
    edx:eax = (int64_t) eax;
    edx &= 0xff;
    eax += edx;
    eax >>= 8;
    ecx = 0xc8;
    ecx -= eax;
    eax = ecx * 5;
    eax <<= 6;
    eax += *(0x43d040);
    eax += edi;
    if (ecx <= esi) {
        goto label_5;
    }
    edx = ecx;
    edx -= esi;
    do {
        eax -= 0x140;
        edx--;
        *(eax) = 0;
    } while (edx != 0);
label_5:
    ebp += 4;
    *((edi + 0x43cf00)) = cl;
    edi++;
    *((esp + 0x14)) = edi;
    *((esp + 0x24)) = ebp;
    if (ebp < 0x43e560) {
        goto label_1;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4088c0 */
#include <stdint.h>
 
int32_t fcn_004088c0 (int32_t arg_4h) {
    ecx = *((esp + 4));
    eax = *((ecx + 0x50));
    if (eax != 0) {
        void (*eax)(uint32_t) (ecx);
    }
    fcn_00408740 (ecx, ecx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x407c40 */
#include <stdint.h>
 
int32_t fcn_00407c40 (int32_t arg_14h_2, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_4h_2;
    int32_t var_1h;
    int32_t var_2h;
    int32_t var_3h;
    int32_t var_4h;
    int32_t var_5h;
    int32_t var_6h;
    int32_t var_7h;
    int32_t var_8h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 8)) = eax;
    al = 0xa;
    *((esp + 5)) = al;
    *((esp + 7)) = al;
    eax = *((esp + 0x18));
    *(esp) = 0x89;
    *((esp + 1)) = 0x50;
    *((esp + 2)) = 0x4e;
    *((esp + 3)) = 0x47;
    *((esp + 4)) = 0xd;
    *((esp + 6)) = 0x1a;
    if (eax <= 8) {
        goto label_1;
    }
    eax = 8;
label_0:
    edx = *((esp + 0x14));
    if (edx > 7) {
        goto label_2;
    }
    ecx = edx + eax;
    if (ecx > 8) {
        eax = 8;
        eax -= edx;
    }
    esi = *((esp + 0x14));
    ecx = esp + edx + 4;
    edx += esi;
    if (eax < 4) {
        goto label_3;
    }
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_4;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
label_3:
    if (eax == 0) {
        goto label_5;
    }
label_4:
    esi = *(edx);
    edi = *(ecx);
    esi -= edi;
    if (esi == 0) {
        eax--;
        ecx++;
        edx++;
        if (eax == 0) {
            goto label_5;
        }
        esi = *(edx);
        edi = *(ecx);
        esi -= edi;
        if (esi != 0) {
            goto label_6;
        }
        eax--;
        ecx++;
        edx++;
        if (eax == 0) {
            goto label_5;
        }
        esi = *(edx);
        edi = *(ecx);
        esi -= edi;
        if (esi != 0) {
            goto label_6;
        }
        eax--;
        ecx++;
        edx++;
        if (eax == 0) {
            goto label_5;
        }
        esi = *(edx);
        edx = *(ecx);
        esi -= edx;
        if (esi == 0) {
            goto label_5;
        }
    }
label_6:
    eax = 1;
    if (esi > 0) {
        goto label_7;
    }
    eax |= 0xffffffff;
    esi = edi;
    ecx = *((esp + 8));
    ecx ^= esp;
    eax = fcn_00412237 ();
    return eax;
label_1:
    if (eax >= 1) {
        goto label_0;
    }
label_2:
    eax = 0;
    ecx = *((esp + 8));
    ecx ^= esp;
    eax = fcn_00412237 ();
    return eax;
label_5:
    eax = 0;
label_7:
    ecx = *((esp + 0x10));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x409d20 */
#include <stdint.h>
 
int32_t fcn_00409d20 (int32_t arg_8h_2, int32_t arg_8h) {
    eax = *((esp + 8));
    eax = fcn_00408c50 (eax);
    esi = eax;
    if (esi > 0x7fffffff) {
        ecx = *((esp + 8));
        fcn_00408740 (ecx, "PNG unsigned integer out of range.\n");
        eax = esi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408c50 */
#include <stdint.h>
 
uint32_t fcn_00408c50 (int32_t arg_4h) {
    ecx = *((esp + 4));
    eax = *(ecx);
    edx = *((ecx + 1));
    eax <<= 8;
    eax += edx;
    edx = *((ecx + 2));
    ecx = *((ecx + 3));
    eax <<= 8;
    eax += edx;
    eax <<= 8;
    eax += ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x407dd0 */
#include <stdint.h>
 
uint32_t fcn_00407dd0 (int32_t arg_10h) {
    eax = fcn_00414630 (0, 0, 0);
    ecx = *((esp + 0x10));
    *((ecx + 0x110)) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x414630 */
#include <stdint.h>
 
uint32_t fcn_00414630 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
label_0:
    esi = edx;
    eax = ~eax;
    if (esi == 0) {
        goto label_1;
    }
    do {
        if ((cl & 3) == 0) {
            goto label_1;
        }
        edx = *(ecx);
        edx ^= eax;
        edx &= 0xff;
        eax >>= 8;
        eax ^= *((edx*4 + 0x4185d8));
        ecx++;
        esi--;
    } while (esi != 0);
label_1:
    if (esi < 0x20) {
        goto label_2;
    }
    edi = esi;
    edi >>= 5;
    do {
        eax ^= *(ecx);
        ecx += 4;
        edx = eax;
        edx >>= 0x10;
        ebx = (int32_t) ah;
        edx &= 0xff;
        edx = *((edx*4 + 0x4189d8));
        edx ^= *((ebx*4 + 0x418dd8));
        ebx = eax;
        eax &= 0xff;
        ebx >>= 0x18;
        edx ^= *((ebx*4 + 0x4185d8));
        ecx += 4;
        edx ^= *((eax*4 + 0x4191d8));
        ecx += 4;
        edx ^= *((ecx - 8));
        ecx += 4;
        eax = edx;
        eax >>= 0x10;
        eax &= 0xff;
        eax = *((eax*4 + 0x4189d8));
        ebx = (int32_t) dh;
        eax ^= *((ebx*4 + 0x418dd8));
        ebx = edx;
        edx &= 0xff;
        ebx >>= 0x18;
        eax ^= *((ebx*4 + 0x4185d8));
        ecx += 4;
        eax ^= *((edx*4 + 0x4191d8));
        ecx += 4;
        eax ^= *((ecx - 0x10));
        edx = eax;
        edx >>= 0x10;
        ebx = (int32_t) ah;
        edx &= 0xff;
        edx = *((edx*4 + 0x4189d8));
        edx ^= *((ebx*4 + 0x418dd8));
        ebx = eax;
        eax &= 0xff;
        ebx >>= 0x18;
        edx ^= *((ebx*4 + 0x4185d8));
        edx ^= *((eax*4 + 0x4191d8));
        edx ^= *((ecx - 0xc));
        eax = edx;
        eax >>= 0x10;
        eax &= 0xff;
        eax = *((eax*4 + 0x4189d8));
        ebx = (int32_t) dh;
        eax ^= *((ebx*4 + 0x418dd8));
        ebx = edx;
        edx &= 0xff;
        ebx >>= 0x18;
        eax ^= *((ebx*4 + 0x4185d8));
        eax ^= *((edx*4 + 0x4191d8));
        eax ^= *((ecx - 8));
        edx = eax;
        edx >>= 0x10;
        ebx = (int32_t) ah;
        edx &= 0xff;
        edx = *((edx*4 + 0x4189d8));
        edx ^= *((ebx*4 + 0x418dd8));
        ebx = eax;
        eax &= 0xff;
        ebx >>= 0x18;
        edx ^= *((ebx*4 + 0x4185d8));
        edx ^= *((eax*4 + 0x4191d8));
        edx ^= *((ecx - 4));
        eax = edx;
        eax >>= 0x10;
        eax &= 0xff;
        eax = *((eax*4 + 0x4189d8));
        ebx = (int32_t) dh;
        eax ^= *((ebx*4 + 0x418dd8));
        ebx = edx;
        ebx >>= 0x18;
        eax ^= *((ebx*4 + 0x4185d8));
        edx &= 0xff;
        eax ^= *((edx*4 + 0x4191d8));
        eax ^= *(ecx);
        ecx += 4;
        edx = eax;
        edx >>= 0x10;
        ebx = (int32_t) ah;
        edx &= 0xff;
        edx = *((edx*4 + 0x4189d8));
        edx ^= *((ebx*4 + 0x418dd8));
        ebx = eax;
        eax &= 0xff;
        ebx >>= 0x18;
        edx ^= *((ebx*4 + 0x4185d8));
        ecx += 4;
        edx ^= *((eax*4 + 0x4191d8));
        esi -= 0x20;
        edx ^= *((ecx - 4));
        eax = edx;
        eax >>= 0x10;
        eax &= 0xff;
        eax = *((eax*4 + 0x4189d8));
        ebx = (int32_t) dh;
        eax ^= *((ebx*4 + 0x418dd8));
        ebx = edx;
        ebx >>= 0x18;
        eax ^= *((ebx*4 + 0x4185d8));
        edx &= 0xff;
        eax ^= *((edx*4 + 0x4191d8));
        edi--;
    } while (edi != 0);
label_2:
    if (esi < 4) {
        goto label_3;
    }
    edx = esi;
    edx >>= 2;
    do {
        eax ^= *(ecx);
        ecx += 4;
        edi = eax;
        edi >>= 0x10;
        edi &= 0xff;
        edi = *((edi*4 + 0x4189d8));
        ebx = (int32_t) ah;
        edi ^= *((ebx*4 + 0x418dd8));
        ebx = eax;
        ebx >>= 0x18;
        edi ^= *((ebx*4 + 0x4185d8));
        eax &= 0xff;
        edi ^= *((eax*4 + 0x4191d8));
        esi -= 4;
        edx--;
        eax = edi;
    } while (edx != 0);
label_3:
    ebx = edi;
    if (esi == 0) {
        goto label_4;
    }
    do {
        edx = *(ecx);
        edx ^= eax;
        edx &= 0xff;
        eax >>= 8;
        eax ^= *((edx*4 + 0x4185d8));
        ecx++;
        esi--;
    } while (esi != 0);
label_4:
    eax = ~eax;
    esi = edi;
    return eax;
    ecx = *((esp + 8));
    if (ecx == 0) {
        eax = 0;
        return eax;
    }
    edx = *((esp + 0xc));
    eax = *((esp + 4));
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408ca0 */
#include <stdint.h>
 
void fcn_00408ca0 (int32_t arg_8h, int32_t arg_14h_2, int32_t arg_14h) {
    ebx = *((esp + 8));
    esi = *((esp + 0x14));
    edi = *((esp + 0x14));
    fcn_004088c0 (ebx);
    fcn_00407df0 (ebx, edi, esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x407df0 */
#include <stdint.h>
 
int32_t fcn_00407df0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = *((esp + 8));
    if ((*((esi + 0x11c)) & 0x20) != 0) {
        eax = *((esi + 0x6c));
        eax &= 0x300;
        if (eax != 0x300) {
            goto label_0;
        }
        return eax;
    }
    if ((*((esi + 0x6c)) & 0x800) == 0) {
label_0:
        ecx = *((esp + 0x10));
        edx = *((esp + 0xc));
        eax = *((esi + 0x110));
        eax = fcn_00414630 (eax, edx, ecx);
        *((esi + 0x110)) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x409e10 */
#include <stdint.h>
 
int32_t fcn_00409e10 (int32_t arg_30h, int32_t arg_28h, uint32_t arg_3ch) {
    int32_t var_34h;
    int32_t var_38h;
    int32_t var_18h;
    int32_t var_20h;
    int32_t var_3ch;
    int32_t var_48h;
    int32_t var_49h;
    int32_t var_4ah;
    int32_t var_4bh;
    int32_t var_4ch;
    int32_t var_1ch;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x1c)) = eax;
    eax = *((esp + 0x28));
    esi = *((esp + 0x30));
    *((esp + 0x18)) = eax;
    if ((*((esi + 0x68)) & 1) != 0) {
        fcn_00408740 (esi, "Out of place IHDR");
    }
    if (*((esp + 0x3c)) != 0xd) {
        fcn_00408740 (esi, "Invalid IHDR chunk");
    }
    *((esi + 0x68)) |= 1;
    fcn_00408ca0 (esi, esp + 0x20, 0xd);
    fcn_00409d50 (esi, 0);
    eax = fcn_00409d20 (esi, esp + 0x30);
    edi = eax;
    eax = fcn_00409d20 (esi, esp + 0x3c);
    ecx = *((esp + 0x49));
    edx = *((esp + 0x48));
    ebx = *((esp + 0x4a));
    eax = *((esp + 0x4b));
    *((esp + 0x34)) = eax;
    eax = *((esp + 0x4c));
    *((esp + 0x38)) = eax;
    *((esi + 0x123)) = al;
    al = *((esp + 0x34));
    *((esi + 0x238)) = al;
    eax = (int32_t) cl;
    *((esi + 0xc8)) = edi;
    *((esi + 0xcc)) = ebp;
    *((esi + 0x127)) = dl;
    *((esi + 0x126)) = cl;
    *((esi + 0x260)) = bl;
    if (eax <= 6) {
        /* switch table (7 cases) at 0x409f6c */
        *((esi + 0x12a)) = 1;
        goto label_0;
        *((esi + 0x12a)) = 3;
        goto label_0;
        *((esi + 0x12a)) = 2;
        goto label_0;
        *((esi + 0x12a)) = 4;
    }
label_0:
    al = *((esi + 0x12a));
    ax = al * dl;
    *((esi + 0x129)) = al;
    eax = (int32_t) al;
    if (al >= 8) {
        eax >>= 3;
        eax *= edi;
    } else {
        eax *= edi;
        eax += 7;
        eax >>= 3;
    }
    *((esi + 0xd8)) = eax;
    eax = *((esp + 0x10));
    eax = *((esp + 0x18));
    ecx = *((esp + 0x28));
    fcn_004115e0 (esi, ecx, edi, ebp, edx, ecx, eax, ebx, eax);
    ecx = *((esp + 0x50));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40a120 */
#include <stdint.h>
 
int32_t fcn_0040a120 (int32_t arg_8h, int32_t arg_14h) {
    esi = *((esp + 8));
    eax = *((esi + 0x68));
    if ((al & 1) != 0) {
        if ((al & 4) != 0) {
            goto label_0;
        }
    }
    fcn_00408740 (esi, "No image in file");
label_0:
    edi = *((esp + 0x14));
    *((esi + 0x68)) |= 0x18;
    if (edi != 0) {
        fcn_004087f0 (esi, "Incorrect IEND chunk length");
    }
    fcn_00409d50 (esi, edi);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4082a0 */
#include <stdint.h>
 
int32_t fcn_004082a0 (int32_t arg_4h, uint32_t arg_18h) {
    ecx = *((esp + 4));
    if (ecx == 0) {
        if (*((esp + 8)) == ecx) {
            goto label_1;
        }
    }
    if (*((ecx + 0x220)) <= 0) {
label_1:
        eax = 0;
        return eax;
    }
    eax = *((ecx + 0x220));
    ecx = *((ecx + 0x224));
    ebx = eax;
    edx = eax * 5;
    edi = edx + ecx - 5;
    if (ebx == 0) {
        goto label_2;
    }
label_0:
    edx = *((esp + 0x18));
    eax = 4;
    ecx = edi;
    while (eax >= 4) {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_3;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    }
    if (eax != 0) {
label_3:
        esi = *(edx);
        ebp = *(ecx);
        esi -= ebp;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_4;
            }
            esi = *(edx);
            ebp = *(ecx);
            esi -= ebp;
            if (esi != 0) {
                goto label_5;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_4;
            }
            esi = *(edx);
            ebp = *(ecx);
            esi -= ebp;
            if (esi != 0) {
                goto label_5;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_4;
            }
            esi = *(edx);
            edx = *(ecx);
            esi -= edx;
            if (esi == 0) {
                goto label_4;
            }
        }
label_5:
        eax = 1;
        if (esi > 0) {
            goto label_6;
        }
        eax |= 0xffffffff;
    } else {
label_4:
        eax = 0;
    }
label_6:
    if (eax == 0) {
        goto label_7;
    }
    ebx--;
    edi -= 5;
    if (ebx != 0) {
        goto label_0;
    }
label_2:
    esi = edi;
    eax = 0;
    ebx = edi;
    return eax;
label_7:
    eax = *((edi + 4));
    esi = edi;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40bf40 */
#include <stdint.h>
 
int32_t fcn_0040bf40 (int32_t arg_30h, int32_t arg_28h, int32_t arg_38h) {
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_1ch;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x1c)) = eax;
    eax = *((esp + 0x28));
    edi = *((esp + 0x30));
    ebx = *((edi + 0x68));
    *((esp + 0xc)) = eax;
    *((esp + 0x10)) = 0;
    if ((bl & 4) == 0) {
        goto label_0;
    }
    eax = 4;
    ecx = "IDAT";
    edx = edi + 0x11c;
    do {
        esi = *(edx);
        if (esi != *(ecx)) {
            goto label_1;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_1:
        esi = *(edx);
        ebp = *(ecx);
        esi -= ebp;
        if (esi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_2;
            }
            esi = *(edx);
            ebp = *(ecx);
            esi -= ebp;
            if (esi != 0) {
                goto label_3;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_2;
            }
            esi = *(edx);
            ebp = *(ecx);
            esi -= ebp;
            if (esi != 0) {
                goto label_3;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_2;
            }
            esi = *(edx);
            ecx = *(ecx);
            esi -= ecx;
            if (esi == 0) {
                goto label_2;
            }
        }
label_3:
        eax = 1;
        if (esi > 0) {
            goto label_4;
        }
        eax |= 0xffffffff;
    } else {
label_2:
        eax = 0;
    }
label_4:
    if (eax != 0) {
        ebx |= 8;
        *((edi + 0x68)) = ebx;
    }
label_0:
    esi = edi + 0x11c;
    fcn_004090d0 (edi);
    if ((*(esi) & 0x20) == 0) {
        eax = fcn_004082a0 (edi, esi);
        if (eax == 3) {
            goto label_5;
        }
        if (*((edi + 0x21c)) != 0) {
            goto label_5;
        }
        fcn_00408850 (edi, "unknown critical chunk");
    }
label_5:
    if ((*((edi + 0x6c)) & 0x8000) == 0) {
        goto label_6;
    }
    edx = esp + 0x14;
    eax = esi;
    edx -= esi;
    do {
        cl = *(eax);
        *((edx + eax)) = cl;
        eax++;
    } while (cl != 0);
    ebx = *((esp + 0x38));
    eax = fcn_00408ba0 (edi, ebx);
    fcn_00408ca0 (edi);
    eax = *((edi + 0x21c));
    if (eax != 0) {
        eax = void (*eax)(uint32_t, uint32_t) (edi, esp + 0x14);
        if (eax > 0) {
            goto label_7;
        }
        if ((*(esi) & 0x20) == 0) {
            eax = fcn_004082a0 (edi, esi);
            if (eax == 3) {
                goto label_8;
            }
            eax = *((esp + 0x1c));
            fcn_00408bf0 (edi, eax);
            fcn_00408850 (edi, "unknown critical chunk");
        }
label_8:
        edx = *((esp + 0xc));
        ecx = esp + 0x18;
    } else {
        ecx = *((esp + 0xc));
    }
    fcn_00412100 (edi, ecx, esp + 0x18, 1);
label_7:
    edx = *((esp + 0x1c));
    fcn_00408bf0 (edi, edx);
    eax = *((esp + 0x18));
    goto label_9;
label_6:
    eax = *((esp + 0x38));
label_9:
    fcn_00409d50 (edi, eax);
    ecx = *((esp + 0x30));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x409f90 */
#include <stdint.h>
 
int32_t fcn_00409f90 (int32_t arg_30ch, int32_t arg_320h, int32_t arg_318h) {
    int32_t var_14h;
    int32_t var_1dh;
    int32_t var_1eh;
    int32_t var_1ch;
    int32_t var_16h;
    esi = *((esp + 0x30c));
    eax = *((esi + 0x68));
    if ((al & 1) == 0) {
    } else {
        if ((al & 4) != 0) {
            fcn_004087f0 (esi, "Invalid PLTE after IDAT");
            eax = *((esp + 0x31c));
            al = fcn_00409d50 (esi, eax);
            return eax;
        }
        if ((al & 2) == 0) {
            goto label_0;
        }
    }
    fcn_00408740 (esi, "Duplicate PLTE chunk");
label_0:
    cl = *((esi + 0x126));
    *((esi + 0x68)) |= 2;
    if ((cl & 2) == 0) {
        fcn_004087f0 (esi, "Ignoring PLTE chunk in grayscale PNG");
        ecx = *((esp + 0x31c));
        fcn_00409d50 (esi, ecx);
        return eax;
    }
    edi = *((esp + 0x318));
    if (edi <= 0x300) {
        eax = 0xaaaaaaab;
        edx:eax = eax * edi;
        edx >>= 1;
        edx *= 3;
        eax = edi;
        eax -= edx;
        if (eax == 0) {
            goto label_1;
        }
    }
    if (cl != 3) {
        fcn_004087f0 ();
        fcn_00409d50 (esi, edi);
        return eax;
    }
    fcn_00408740 ();
label_1:
    eax = 0x55555556;
    edx:eax = eax * edi;
    ebx = edx;
    ebx >>= 0x1f;
    ebx += edx;
    if (ebx <= 0) {
        goto label_2;
    }
    edi = esp + 0x16;
    do {
        fcn_00408ca0 (esi, esp + 0x14, 3);
        dl = *((esp + 0x1c));
        al = *((esp + 0x1d));
        cl = *((esp + 0x1e));
        *((edi - 2)) = dl;
        *((edi - 1)) = al;
        *(edi) = cl;
        edi += 3;
        ebp--;
    } while (ebp != 0);
label_2:
    fcn_00409d50 (esi, 0);
    edi = *((esp + 0x320));
    fcn_00411a50 (esi, edi, esp + 0x1c, ebx);
    if (*((esi + 0x126)) == 3) {
        if (edi == 0) {
            goto label_3;
        }
        if ((*((edi + 8)) & 0x10) == 0) {
            goto label_3;
        }
        if (*((esi + 0x11a)) > bx) {
            fcn_004087f0 (esi, "Truncating incorrect tRNS chunk length");
            *((esi + 0x11a)) = bx;
        }
        if (*((edi + 0x16)) <= bx) {
            goto label_3;
        }
        fcn_004087f0 (esi, "Truncating incorrect info tRNS chunk length");
        *((edi + 0x16)) = bx;
    }
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40b150 */
#include <stdint.h>
 
int32_t fcn_0040b150 (int32_t arg_18h_2, int32_t arg_18h, int32_t arg_24h) {
    int32_t var_10h;
    int32_t var_12h;
    int32_t var_18h;
    int32_t var_8h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 8)) = eax;
    ebx = *((esp + 0x18));
    esi = *((esp + 0x18));
    eax = *((esi + 0x68));
    if ((al & 1) != 0) {
        goto label_1;
    }
    fcn_00408740 (esi, "Missing IHDR before bKGD");
    do {
label_0:
        al = *((esi + 0x126));
        if (al != 3) {
            goto label_2;
        }
        eax = 1;
        goto label_3;
label_1:
        if ((al & 4) != 0) {
            fcn_004087f0 (esi, "Invalid bKGD after IDAT");
            eax = *((esp + 0x28));
            fcn_00409d50 (esi, eax);
            ecx = *((esp + 8));
            ecx ^= esp;
            al = fcn_00412237 ();
            return eax;
        }
        if (*((esi + 0x126)) == 3) {
            if ((al & 2) != 0) {
                goto label_4;
            }
            fcn_004087f0 (esi, "Missing PLTE before bKGD");
            ecx = *((esp + 0x28));
            fcn_00409d50 (esi, ecx);
            ecx = *((esp + 8));
            ecx ^= esp;
            fcn_00412237 ();
            return eax;
        }
label_4:
    } while (ebx == 0);
    if ((*((ebx + 8)) & 0x20) == 0) {
        goto label_0;
    }
    fcn_004087f0 (esi, "Duplicate bKGD chunk");
    edx = *((esp + 0x28));
    fcn_00409d50 (esi, edx);
    ecx = *((esp + 8));
    ecx ^= esp;
    al = fcn_00412237 ();
    return eax;
label_2:
    eax = (int32_t) al;
    eax &= 2;
    eax |= 1;
    eax += eax;
label_3:
    edi = *((esp + 0x24));
    if (edi != eax) {
        fcn_004087f0 (esi, "Incorrect bKGD chunk length");
        fcn_00409d50 (esi, edi);
        ecx = *((esp + 8));
        ecx ^= esp;
        eax = fcn_00412237 ();
        return eax;
    }
    fcn_00408ca0 (esi, esp + 0x10, eax);
    eax = fcn_00409d50 (esi, 0);
    if (eax == 0) {
        al = *((esi + 0x126));
        if (al == 3) {
            cl = *((esp + 0xc));
            *((esi + 0x138)) = cl;
            eax = *((ebx + 0x14));
            if (ax == 0) {
                goto label_5;
            }
            dx = (int16_t) cl;
            if (dx > ax) {
                fcn_004087f0 (esi, "Incorrect bKGD chunk index value");
                ecx = *((esp + 8));
                ecx ^= esp;
                fcn_00412237 ();
                return eax;
            }
            eax = (int32_t) cl;
            ecx = *((esi + 0x114));
            eax *= 3;
            edx = *((eax + ecx));
            eax += ecx;
            *((esi + 0x13a)) = dx;
            cx = *((eax + 1));
            *((esi + 0x13c)) = cx;
            edx = *((eax + 2));
            *((esi + 0x13e)) = dx;
        } else {
            if ((al & 2) == 0) {
                ax = fcn_00408c80 (esp + 0xc);
                *((esi + 0x140)) = ax;
                *((esi + 0x13c)) = ax;
                *((esi + 0x13a)) = ax;
            } else {
                ax = fcn_00408c80 (esp + 0xc);
                *((esi + 0x13a)) = ax;
                ax = fcn_00408c80 (esp + 0x12);
                *((esi + 0x13c)) = ax;
                ax = fcn_00408c80 (esp + 0x18);
            }
            *((esi + 0x13e)) = ax;
        }
label_5:
        fcn_00410ec0 (esi, ebx, esi + 0x138);
    }
    ecx = *((esp + 0x14));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40a450 */
#include <stdint.h>
 
int32_t fcn_0040a450 (int32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h) {
    int32_t var_48h;
    int32_t var_54h;
    int32_t var_58h;
    int32_t var_5ch;
    int32_t var_60h;
    int32_t var_64h;
    int32_t var_68h;
    int32_t var_60h_2;
    int32_t var_80h;
    esi = *((ebp + 8));
    eax = *((esi + 0x68));
    if ((al & 1) == 0) {
        al = fcn_00408740 (esi, "Missing IHDR before cHRM");
    } else {
        if ((al & 4) != 0) {
            fcn_004087f0 (esi, "Invalid cHRM after IDAT");
            eax = *((ebp + 0x10));
            al = fcn_00409d50 (esi, eax);
            return eax;
        }
        if ((al & 2) == 0) {
            goto label_0;
        }
        fcn_004087f0 (esi, "Missing PLTE before cHRM");
    }
label_0:
    eax = *((ebp + 0xc));
    if (eax != 0) {
        eax = *((eax + 8));
        if ((al & 4) == 0) {
            goto label_1;
        }
        if ((eax & 0x800) != 0) {
            goto label_1;
        }
        fcn_004087f0 (esi, "Duplicate cHRM chunk");
        ecx = *((ebp + 0x10));
        fcn_00409d50 (esi, ecx);
        return eax;
    }
label_1:
    edi = *((ebp + 0x10));
    if (edi != 0x20) {
        fcn_004087f0 (esi, "Incorrect cHRM chunk length");
        fcn_00409d50 (esi, edi);
        return eax;
    }
    fcn_00408ca0 (esi, esp + 0x48, 4);
    eax = fcn_00408c50 (esp + 0x50);
    edi = eax;
    fcn_00408ca0 (esi, esp + 0x58, 4);
    eax = fcn_00408c50 (esp + 0x60);
    if (edi <= 0x13880) {
        if (eax > 0x13880) {
            goto label_2;
        }
        ecx = eax + edi;
        if (ecx > 0x186a0) {
            goto label_2;
        }
        edx = esp + 0x48;
        fcn_00408ca0 (esi);
        eax = fcn_00408c50 (esp + 0x50);
        edi = eax;
        fcn_00408ca0 (esi, esp + 0x58, 4);
        eax = fcn_00408c50 (esp + 0x60);
        if (edi <= 0x13880) {
            if (eax > 0x13880) {
                goto label_3;
            }
            ecx = eax + edi;
            if (ecx > 0x186a0) {
                goto label_3;
            }
            edx = esp + 0x48;
            fcn_00408ca0 (esi);
            eax = fcn_00408c50 (esp + 0x50);
            edi = eax;
            fcn_00408ca0 (esi, esp + 0x58, 4);
            eax = fcn_00408c50 (esp + 0x60);
            if (edi <= 0x13880) {
                if (eax > 0x13880) {
                    goto label_4;
                }
                ecx = eax + edi;
                if (ecx > 0x186a0) {
                    goto label_4;
                }
                edx = esp + 0x48;
                fcn_00408ca0 (esi);
                eax = fcn_00408c50 (esp + 0x50);
                edi = eax;
                fcn_00408ca0 (esi, esp + 0x58);
                eax = fcn_00408c50 (esp + 0x60);
                ebx = eax;
                *((esp + 0x60)) = ebx;
                if (edi <= 0x13880) {
                    if (ebx > 0x13880) {
                        goto label_5;
                    }
                    eax = ebx + edi;
                    if (eax > 0x186a0) {
                        goto label_5;
                    }
                    *(fp_stack--) = *((esp + 0x5c));
                    eax = *((ebp + 0xc));
                    *(fp_stack--) = *(0x416a30);
                    fp_stack[1] /= fp_stack[0];
                    fp_tmp_0 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_0;
                    *((esp + 0x7c)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0x58));
                    fp_stack[0] /= fp_stack[1];
                    *((esp + 0x78)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0x54));
                    fp_stack[0] /= fp_stack[1];
                    *((esp + 0x74)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0x50));
                    fp_stack[0] /= fp_stack[1];
                    *((esp + 0x70)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0x4c));
                    fp_stack[0] /= fp_stack[1];
                    *((esp + 0x6c)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0x48));
                    fp_stack[0] /= fp_stack[1];
                    *((esp + 0x68)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0x64));
                    fp_stack[0] /= fp_stack[1];
                    *((esp + 0x64)) = fp_stack[0];
                    fp_stack--;
                    *((esp + 0x60)) /= fp_stack[0];
                    *((esp + 0x60)) = fp_stack[0];
                    fp_stack--;
                    if ((*((eax + 8)) & 0x800) != 0) {
                        ecx = *((esp + 0x5c));
                        ecx += 0xffff89c2;
                        if (ecx <= 0x7d0) {
                            edx = *((esp + 0x58));
                            edx += 0xffff8364;
                            if (edx > 0x7d0) {
                                goto label_6;
                            }
                            eax = *((esp + 0x54));
                            eax += 0xffff09e8;
                            if (eax > 0x7d0) {
                                goto label_6;
                            }
                            ecx = *((esp + 0x50));
                            ecx += 0xffff8300;
                            if (ecx > 0x7d0) {
                                goto label_6;
                            }
                            edx = *((esp + 0x4c));
                            edx += 0xffff8eb8;
                            if (edx > 0x7d0) {
                                goto label_6;
                            }
                            eax = *((esp + 0x48));
                            eax += 0xffff1988;
                            if (eax > 0x7d0) {
                                goto label_6;
                            }
                            if (edi < 0x36b0) {
                                goto label_6;
                            }
                            if (edi > 0x3e80) {
                                goto label_6;
                            }
                            if (ebx < 0x1388) {
                                goto label_6;
                            }
                            if (ebx <= 0x1b58) {
                                goto label_7;
                            }
                        }
label_6:
                        fcn_004087f0 (esi, "Ignoring incorrect cHRM value when sRGB is also present");
                        *(fp_stack--) = *((esp + 0x78));
                        *(esp) = fp_stack[0];
                        fp_stack--;
                        *(fp_stack--) = *((esp + 0x7c));
                        *((esp + 0x10)) = fp_stack[0];
                        fp_stack--;
                        *(fp_stack--) = *((esp + 0x98));
                        *((esp + 8)) = fp_stack[0];
                        fp_stack--;
                        *(fp_stack--) = *((esp + 0x9c));
                        *(esp) = fp_stack[0];
                        fp_stack--;
                        eax = _iob_func ("wx=%f, wy=%f, rx=%f, ry=%f\n");
                        eax += 0x40;
                        fprintf (rdi, rsi);
                        *(fp_stack--) = *((esp + 0x88));
                        *((esp + 0x20)) = fp_stack[0];
                        fp_stack--;
                        *(fp_stack--) = *((esp + 0x84));
                        *((esp + 0x10)) = fp_stack[0];
                        fp_stack--;
                        *(fp_stack--) = *((esp + 0x88));
                        *((esp + 8)) = fp_stack[0];
                        fp_stack--;
                        *(fp_stack--) = *((esp + 0x8c));
                        *(esp) = fp_stack[0];
                        fp_stack--;
                        eax = _iob_func ("gx=%f, gy=%f, bx=%f, by=%f\n");
                        eax += 0x40;
                        fprintf (rdi, rsi);
label_7:
                        eax = fcn_00409d50 (esi, 0);
                        return eax;
                    }
                    *(fp_stack--) = *((esp + 0x60));
                    *((esp + 0x38)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0xa4));
                    *((esp + 0x30)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0xa8));
                    *((esp + 0x28)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0xac));
                    *((esp + 0x20)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0xb0));
                    *((esp + 0x18)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0xb4));
                    *((esp + 0x10)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0xb8));
                    *((esp + 8)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0xbc));
                    *(esp) = fp_stack[0];
                    fp_stack--;
                    fcn_00410ef0 (esi, eax);
                    ecx = *((esp + 0x90));
                    edx = *((esp + 0x94));
                    eax = *((esp + 0x98));
                    ecx = *((esp + 0xa8));
                    edx = *((esp + 0xb0));
                    eax = *((esp + 0xb8));
                    ecx = *((ebp + 0xc));
                    fcn_00411230 (esi, ecx, eax, edx, ecx, eax, edx, ecx, edi, ebx);
                    fcn_00409d50 (esi, 0);
                    return eax;
                }
label_5:
                fcn_004087f0 (esi, "Invalid cHRM blue point");
                fcn_00409d50 (esi, 0);
                return eax;
            }
label_4:
            fcn_004087f0 (esi, "Invalid cHRM green point");
            fcn_00409d50 (esi, 8);
            return eax;
        }
label_3:
        fcn_004087f0 (esi, "Invalid cHRM red point");
        fcn_00409d50 (esi, 0x10);
        return eax;
    }
label_2:
    fcn_004087f0 (esi, "Invalid cHRM white point");
    fcn_00409d50 (esi, 0x18);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40a170 */
#include <stdint.h>
 
int32_t fcn_0040a170 (int32_t arg_ch, int32_t arg_14h, int32_t arg_1ch) {
    int32_t var_ch;
    esi = *((esp + 0xc));
    eax = *((esi + 0x68));
    if ((al & 1) == 0) {
        al = fcn_00408740 (esi, "Missing IHDR before gAMA");
    } else {
        if ((al & 4) != 0) {
            fcn_004087f0 (esi, "Invalid gAMA after IDAT");
            eax = *((esp + 0x1c));
            al = fcn_00409d50 (esi, eax);
            return eax;
        }
        if ((al & 2) == 0) {
            goto label_0;
        }
        fcn_004087f0 (esi, "Out of place gAMA chunk");
    }
label_0:
    ebx = *((esp + 0x14));
    if (ebx != 0) {
        eax = *((ebx + 8));
        if ((al & 1) == 0) {
            goto label_1;
        }
        if ((eax & 0x800) != 0) {
            goto label_1;
        }
        fcn_004087f0 (esi, "Duplicate gAMA chunk");
        ecx = *((esp + 0x20));
        fcn_00409d50 (esi, ecx);
        return eax;
    }
label_1:
    edi = *((esp + 0x1c));
    if (edi != 4) {
        fcn_004087f0 (esi, "Incorrect gAMA chunk length");
        fcn_00409d50 (esi, edi);
        return eax;
    }
    fcn_00408ca0 (esi, esp + 0x18, 4);
    eax = fcn_00409d50 (esi, 0);
    if (eax == 0) {
        eax = fcn_00408c50 (esp + 0x14);
        edi = eax;
        *((esp + 0xc)) = edi;
        if (edi == 0) {
            fcn_004087f0 (esi, "Ignoring gAMA chunk with gamma=0");
            return eax;
        }
        if ((*((ebx + 8)) & 0x800) != 0) {
            if (edi >= 0xafc8) {
                if (edi <= 0xb3b0) {
                    goto label_2;
                }
            }
            fcn_004087f0 (esi, "Ignoring incorrect gAMA value when sRGB is also present");
            eax = _iob_func (0x416a38, edi);
            eax += 0x40;
            fprintf (rdi, rsi);
            return eax;
        }
label_2:
        *(fp_stack--) = *((esp + 0xc));
        fp_stack[0] /= *(0x416a30);
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x14));
        *((esi + 0x15c)) = fp_stack[0];
        *(esp) = fp_stack[0];
        fp_stack--;
        fcn_00411420 (esi, ebx);
        fcn_004114a0 (esi, ebx, edi);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40b390 */
#include <stdint.h>
 
int32_t fcn_0040b390 (int32_t arg_214h_2, int32_t arg_214h, int32_t arg_224h) {
    int32_t var_14h_2;
    int32_t var_14h;
    int32_t var_204h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x204)) = eax;
    ebp = *((esp + 0x214));
    esi = *((esp + 0x214));
    eax = *((esi + 0x68));
    if ((al & 1) != 0) {
        goto label_1;
    }
    fcn_00408740 (esi, "Missing IHDR before hIST");
label_0:
    eax = *((esi + 0x118));
    edi = *((esp + 0x224));
    ebx = *((esp + 0x224));
    ebx >>= 1;
    if (ebx != eax) {
        goto label_2;
    }
    if (ebx > 0x100) {
        goto label_2;
    }
    edi = 0;
    if (ebx <= 0) {
        goto label_3;
    }
    while (edi < ebx) {
        fcn_00408ca0 (esi, esp + 0x14, 2);
        ax = fcn_00408c80 (esp + 0x1c);
        *((esp + edi*2 + 0x24)) = ax;
        edi++;
    }
label_3:
    eax = fcn_00409d50 (esi, 0);
    if (eax != 0) {
        goto label_4;
    }
    al = fcn_00411520 (esi, ebp, esp + 0x14);
    goto label_4;
label_1:
    if ((al & 4) != 0) {
        fcn_004087f0 (esi, "Invalid hIST after IDAT");
        eax = *((esp + 0x224));
        fcn_00409d50 (esi, eax);
        ecx = *((esp + 0x204));
        ecx ^= esp;
        al = fcn_00412237 ();
        return eax;
    }
    if ((al & 2) == 0) {
        fcn_004087f0 (esi, "Missing PLTE before hIST");
        ecx = *((esp + 0x224));
        fcn_00409d50 (esi, ecx);
        ecx = *((esp + 0x204));
        ecx ^= esp;
        fcn_00412237 ();
        return eax;
    }
    if (ebp == 0) {
        goto label_0;
    }
    if ((*((ebp + 8)) & 0x40) == 0) {
        goto label_0;
    }
    fcn_004087f0 (esi, "Duplicate hIST chunk");
    edx = *((esp + 0x224));
    fcn_00409d50 (esi, edx);
    ecx = *((esp + 0x204));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
label_2:
    fcn_004087f0 (esi, "Incorrect hIST chunk length");
    fcn_00409d50 (esi, edi);
label_4:
    ecx = *((esp + 0x214));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40b650 */
#include <stdint.h>
 
int32_t fcn_0040b650 (int32_t arg_18h, int32_t arg_20h, int32_t arg_28h) {
    int32_t var_10h;
    int32_t var_14h_2;
    int32_t var_14h;
    int32_t var_ch;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0xc)) = eax;
    esi = *((esp + 0x18));
    eax = *((esi + 0x68));
    edi = *((esp + 0x20));
    if ((al & 1) != 0) {
        goto label_1;
    }
    fcn_00408740 (esi, "Missing IHDR before oFFs");
    do {
label_0:
        ebx = *((esp + 0x28));
        if (ebx == 9) {
            goto label_2;
        }
        fcn_004087f0 (esi, "Incorrect oFFs chunk length");
        fcn_00409d50 (esi, ebx);
        ecx = *((esp + 0xc));
        ecx ^= esp;
        al = fcn_00412237 ();
        return eax;
label_1:
        if ((al & 4) != 0) {
            fcn_004087f0 (esi, "Invalid oFFs after IDAT");
            eax = *((esp + 0x2c));
            fcn_00409d50 (esi, eax);
            ecx = *((esp + 0xc));
            ecx ^= esp;
            fcn_00412237 ();
            return eax;
        }
    } while (edi == 0);
    if ((*((edi + 8)) & 0x100) == 0) {
        goto label_0;
    }
    fcn_004087f0 (esi, "Duplicate oFFs chunk");
    ecx = *((esp + 0x2c));
    fcn_00409d50 (esi, ecx);
    ecx = *((esp + 0xc));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
label_2:
    fcn_00408ca0 (esi, esp + 0x10, 9);
    eax = fcn_00409d50 (esi, 0);
    if (eax == 0) {
        eax = *((esp + 0x14));
        eax = fcn_00408c50 (esp + 0x14);
        eax = fcn_00408c50 (esp + 0x14);
        fcn_00411810 (esi, edi, eax);
    }
    ecx = *((esp + 0x18));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40b780 */
#include <stdint.h>
 
int32_t fcn_0040b780 (int32_t arg_1ch, int32_t arg_20h, int32_t arg_2ch) {
    int32_t var_fh;
    uint32_t var_10h;
    int32_t var_14h;
    int32_t var_20h_2;
    int32_t var_20h;
    edi = *((esp + 0x1c));
    eax = *((edi + 0x68));
    if ((al & 1) != 0) {
        goto label_2;
    }
    fcn_00408740 (edi, "Missing IHDR before pCAL");
    do {
label_0:
        esi = *((esp + 0x2c));
        eax = fcn_00408c20 (edi, esi + 1);
        ebx = eax;
        if (ebx != 0) {
            goto label_3;
        }
        al = fcn_004087f0 (edi, "No memory for pCAL purpose.");
        return eax;
label_2:
        if ((al & 4) != 0) {
            fcn_004087f0 (edi, "Invalid pCAL after IDAT");
            eax = *((esp + 0x2c));
            fcn_00409d50 (edi, eax);
            return eax;
        }
        eax = *((esp + 0x20));
    } while (eax == 0);
    if ((*((eax + 8)) & 0x400) == 0) {
        goto label_0;
    }
    fcn_004087f0 (edi, "Duplicate pCAL chunk");
    ecx = *((esp + 0x2c));
    fcn_00409d50 (edi, ecx);
    return eax;
label_3:
    fcn_00408ca0 (edi, ebx, esi);
    eax = fcn_00409d50 (edi, 0);
    if (eax != 0) {
        fcn_00408bf0 (edi, ebx);
        return eax;
    }
    eax = ebx + esi;
    *(eax) = 0;
    *((esp + 0x10)) = eax;
    esi = ebx;
    if (*(ebx) == 0) {
        goto label_4;
    }
    do {
        esi++;
    } while (*(esi) != 0);
label_4:
    ecx = esi + 0xc;
    if (eax <= ecx) {
    } else {
        eax = fcn_00408c50 (esi + 1);
        *((esp + 0x20)) = eax;
        eax = fcn_00408c50 (esi + 5);
        cl = *((esi + 0xa));
        *((esp + 0x20)) = eax;
        al = *((esi + 9));
        esi += 0xb;
        *((esp + 0xf)) = al;
        *((esp + 0x24)) = cl;
        *((esp + 0x14)) = esi;
        if (al == 0) {
            if (cl != 2) {
                goto label_5;
            }
            goto label_6;
        }
        if (al == 1) {
            if (cl != 3) {
                goto label_5;
            }
            goto label_6;
        }
        if (al == 2) {
            if (cl != 3) {
                goto label_5;
            }
            goto label_6;
        }
        if (al != 3) {
            goto label_7;
        }
        if (cl == 4) {
            goto label_6;
        }
label_5:
    }
    fcn_004087f0 (edi, "Invalid pCAL parameters for equation type");
    al = fcn_00408bf0 (edi, ebx);
    return eax;
label_7:
    if (al >= 4) {
        fcn_004087f0 (edi, "Unrecognized equation type for pCAL chunk");
        cl = *((esp + 0x2c));
    }
label_6:
    if (*(esi) == 0) {
        goto label_8;
    }
    do {
        esi++;
    } while (*(esi) != 0);
label_8:
    eax = (int32_t) cl;
    ecx = eax*4;
    eax = fcn_00408c20 (edi);
    if (ebp == 0) {
        fcn_00408bf0 (edi, ebx);
        eax = fcn_004087f0 (edi, "No memory for pCAL params.");
        return eax;
    }
    ecx = *((esp + 0x28));
    eax = 0;
    if (ecx <= 0) {
        goto label_9;
    }
label_1:
    esi++;
    *((ebp + eax*4)) = esi;
    if (*(esi) == 0) {
        goto label_10;
    }
    do {
        if (esi > *((esp + 0x14))) {
            goto label_11;
        }
        esi++;
    } while (*(esi) != 0);
label_10:
    if (esi > *((esp + 0x14))) {
        goto label_11;
    }
    eax++;
    if (eax < ecx) {
        goto label_1;
    }
label_9:
    edx = *((esp + 0x18));
    eax = *((esp + 0x13));
    edx = *((esp + 0x28));
    ecx = *((esp + 0x28));
    eax = *((esp + 0x3c));
    fcn_00411840 (edi, eax, ebx, edx, ecx, eax, ecx, edx, ebp);
    fcn_00408bf0 (edi, ebx);
    fcn_00408bf0 (edi, ebp);
    return eax;
label_11:
    fcn_004087f0 (edi, "Invalid pCAL data");
    fcn_00408bf0 (edi, ebx);
    fcn_00408bf0 (edi, ebp);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40b9e0 */
#include <stdint.h>
 
int32_t fcn_0040b9e0 (char * * endptr, int32_t arg_14h, int32_t arg_1ch) {
    edi = *((esp + 0x10));
    eax = *((edi + 0x68));
    if ((al & 1) != 0) {
        goto label_1;
    }
    fcn_00408740 (edi, "Missing IHDR before sCAL");
    do {
label_0:
        ebx = *((esp + 0x1c));
        eax = fcn_00408c20 (edi, ebx + 1);
        esi = eax;
        if (esi != 0) {
            goto label_2;
        }
        al = fcn_004087f0 (edi, "Out of memory while processing sCAL chunk");
        return eax;
label_1:
        if ((al & 4) != 0) {
            fcn_004087f0 (edi, "Invalid sCAL after IDAT");
            eax = *((esp + 0x20));
            fcn_00409d50 (edi, eax);
            return eax;
        }
        eax = *((esp + 0x14));
    } while (eax == 0);
    if ((*((eax + 8)) & 0x4000) == 0) {
        goto label_0;
    }
    fcn_004087f0 (edi, "Duplicate sCAL chunk");
    ecx = *((esp + 0x20));
    fcn_00409d50 (edi, ecx);
    return eax;
label_2:
    fcn_00408ca0 (edi, esi, ebx);
    eax = fcn_00409d50 (edi, 0);
    if (eax != 0) {
        fcn_00408bf0 (edi, esi);
        return eax;
    }
    ecx = esi + 1;
    ebp = esi + ebx;
    *(ebp) = 0;
    strtod (ecx, esp + 0x1c);
    *((esp + 0x18)) = fp_stack[0];
    fp_stack--;
    edx = *((esp + 0x24));
    if (*(edx) != 0) {
        fcn_004087f0 (edi, "malformed width string in sCAL chunk");
        return eax;
    }
    ebx = esi;
    if (*(esi) == 0) {
        goto label_3;
    }
    do {
        ebx++;
    } while (*(ebx) != 0);
label_3:
    ebx++;
    strtod (ebx, esp + 0x1c);
    ecx = *((esp + 0x24));
    if (*(ecx) != 0) {
        fp_stack++;
        ax = fcn_004087f0 (edi, "malformed height string in sCAL chunk");
        return eax;
    }
    if (ebp >= ebx) {
        *(fp_stack--) = 0.0;
        *(fp_stack--) = *((esp + 0x10));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 0x41) == 0) {
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_status = fp_compare(fp_stack[0], fp_stack[2]);
            fp_stack++;
            ax = fp_status;
            if ((ah & 1) == 0) {
                goto label_4;
            }
            edx = *(esi);
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            eax = *((esp + 0x20));
            *((esp + 8)) = fp_stack[0];
            fp_stack--;
            *(esp) = fp_stack[0];
            fp_stack--;
            fcn_004119e0 (edi, eax, edx);
            fcn_00408bf0 (edi, esi);
            return eax;
        }
        fp_stack[1] = fp_stack[0];
        fp_stack--;
label_4:
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    }
    fp_stack++;
    fcn_004087f0 (edi, "Invalid sCAL data");
    fcn_00408bf0 (edi, esi);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40b530 */
#include <stdint.h>
 
int32_t fcn_0040b530 (int32_t arg_18h, int32_t arg_20h, int32_t arg_28h) {
    int32_t var_10h;
    int32_t var_14h_2;
    int32_t var_14h;
    int32_t var_ch;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0xc)) = eax;
    esi = *((esp + 0x18));
    eax = *((esi + 0x68));
    edi = *((esp + 0x20));
    if ((al & 1) != 0) {
        goto label_1;
    }
    fcn_00408740 (esi, "Missing IHDR before pHYs");
    do {
label_0:
        ebx = *((esp + 0x28));
        if (ebx == 9) {
            goto label_2;
        }
        fcn_004087f0 (esi, "Incorrect pHYs chunk length");
        fcn_00409d50 (esi, ebx);
        ecx = *((esp + 0xc));
        ecx ^= esp;
        al = fcn_00412237 ();
        return eax;
label_1:
        if ((al & 4) != 0) {
            fcn_004087f0 (esi, "Invalid pHYs after IDAT");
            eax = *((esp + 0x2c));
            fcn_00409d50 (esi, eax);
            ecx = *((esp + 0xc));
            ecx ^= esp;
            fcn_00412237 ();
            return eax;
        }
    } while (edi == 0);
    if ((*((edi + 8)) & 0x80) == 0) {
        goto label_0;
    }
    fcn_004087f0 (esi, "Duplicate pHYs chunk");
    ecx = *((esp + 0x2c));
    fcn_00409d50 (esi, ecx);
    ecx = *((esp + 0xc));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
label_2:
    fcn_00408ca0 (esi, esp + 0x10, 9);
    eax = fcn_00409d50 (esi, 0);
    if (eax == 0) {
        eax = *((esp + 0x14));
        eax = fcn_00408c50 (esp + 0x14);
        eax = fcn_00408c50 (esp + 0x14);
        fcn_00411a20 (esi, edi, eax);
    }
    ecx = *((esp + 0x18));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40a2e0 */
#include <stdint.h>
 
int32_t fcn_0040a2e0 (int32_t arg_10h, int32_t arg_18h, int32_t arg_20h) {
    int32_t var_bp_8h;
    int32_t var_8h;
    int32_t var_9h;
    int32_t var_ah;
    int32_t var_bh;
    esi = *((esp + 0x10));
    eax = *((esi + 0x68));
    ebx = 0;
    *((esp + 0xb)) = bl;
    *((esp + 0xa)) = bl;
    *((esp + 9)) = bl;
    *((esp + 8)) = bl;
    if ((al & 1) == 0) {
        al = fcn_00408740 (esi, "Missing IHDR before sBIT");
    } else {
        if ((al & 4) != 0) {
            fcn_004087f0 (esi, "Invalid sBIT after IDAT");
            eax = *((esp + 0x20));
            al = fcn_00409d50 (esi, eax);
            return eax;
        }
        if ((al & 2) == 0) {
            goto label_0;
        }
        fcn_004087f0 (esi, "Out of place sBIT chunk");
    }
label_0:
    ebp = *((esp + 0x18));
    if (ebp != ebx) {
        if ((*((ebp + 8)) & 2) == 0) {
            goto label_1;
        }
        fcn_004087f0 (esi, "Duplicate sBIT chunk");
        ecx = *((esp + 0x24));
        fcn_00409d50 (esi, ecx);
        return eax;
    }
label_1:
    eax = 3;
    if (*((esi + 0x126)) != al) {
        eax = *((esi + 0x12a));
    }
    edi = *((esp + 0x20));
    if (edi == eax) {
        if (edi > 4) {
            goto label_2;
        }
        fcn_00408ca0 (esi, esp + 0x14, eax);
        eax = fcn_00409d50 (esi, ebx);
        if (eax != 0) {
            goto label_3;
        }
        eax = esi + 0x17c;
        if ((*((esi + 0x126)) & 2) != 0) {
            ecx = *((esp + 0x10));
            edx = *((esp + 0x11));
            *(eax) = cl;
            ecx = *((esp + 0x16));
            *((esi + 0x17d)) = dl;
            edx = *((esp + 0x17));
            *((esi + 0x17e)) = cl;
            *((esi + 0x180)) = dl;
            eax = fcn_00411ae0 (esi, ebp, eax);
            return eax;
        }
        cl = *((esp + 0x10));
        *((esi + 0x17f)) = cl;
        *(eax) = cl;
        *((esi + 0x17d)) = cl;
        *((esi + 0x17e)) = cl;
        ecx = *((esp + 0x15));
        *((esi + 0x180)) = cl;
        fcn_00411ae0 (esi, ebp, eax);
        return eax;
    }
label_2:
    fcn_004087f0 (esi, "Incorrect sBIT chunk length");
    fcn_00409d50 (esi, edi);
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40a940 */
#include <stdint.h>
 
int32_t fcn_0040a940 (int32_t arg_8h, int32_t arg_10h, int32_t arg_18h) {
    edi = *((esp + 8));
    eax = *((edi + 0x68));
    if ((al & 1) == 0) {
        al = fcn_00408740 (edi, "Missing IHDR before sRGB");
    } else {
        if ((al & 4) != 0) {
            fcn_004087f0 (edi, "Invalid sRGB after IDAT");
            eax = *((esp + 0x18));
            al = fcn_00409d50 (edi, eax);
            return eax;
        }
        if ((al & 2) == 0) {
            goto label_0;
        }
        fcn_004087f0 (edi, "Out of place sRGB chunk");
    }
label_0:
    esi = *((esp + 0x10));
    if (esi != 0) {
        if ((*((esi + 8)) & 0x800) == 0) {
            goto label_1;
        }
        fcn_004087f0 (edi, "Duplicate sRGB chunk");
        ecx = *((esp + 0x1c));
        fcn_00409d50 (edi, ecx);
        return eax;
    }
label_1:
    ebx = *((esp + 0x18));
    if (ebx != 1) {
        fcn_004087f0 (edi, "Incorrect sRGB chunk length");
        fcn_00409d50 (edi, ebx);
        return eax;
    }
    fcn_00408ca0 (edi, esp + 0x14, 1);
    eax = fcn_00409d50 (edi, 0);
    if (eax == 0) {
        ebx = *((esp + 0x10));
        if (ebx >= 4) {
            fcn_004087f0 (edi, "Unknown sRGB intent");
            return eax;
        }
        if ((*((esi + 8)) & 1) != 0) {
            eax = *((esi + 0xfc));
            if (eax >= 0xafc8) {
                if (eax <= 0xb3b0) {
                    goto label_2;
                }
            }
            fcn_004087f0 (edi, "Ignoring incorrect gAMA value when sRGB is also present");
            eax = *((edi + 0x234));
            eax = _iob_func ("incorrect gamma=(%d/100000)\n", eax);
            eax += 0x40;
            fprintf (rdi, rsi);
        }
label_2:
        if ((*((esi + 8)) & 4) != 0) {
            eax = *((esi + 0x100));
            if (eax >= 0x763e) {
                if (eax > 0x7e0e) {
                    goto label_3;
                }
                eax = *((esi + 0x104));
                if (eax < 0x7c9c) {
                    goto label_3;
                }
                if (eax > 0x846c) {
                    goto label_3;
                }
                eax = *((esi + 0x108));
                if (eax < 0xf618) {
                    goto label_3;
                }
                if (eax > 0xfde8) {
                    goto label_3;
                }
                eax = *((esi + 0x10c));
                if (eax < 0x7d00) {
                    goto label_3;
                }
                if (eax > 0x84d0) {
                    goto label_3;
                }
                eax = *((esi + 0x110));
                if (eax < 0x7148) {
                    goto label_3;
                }
                if (eax > 0x7918) {
                    goto label_3;
                }
                eax = *((esi + 0x114));
                if (eax < 0xe678) {
                    goto label_3;
                }
                if (eax > 0xee48) {
                    goto label_3;
                }
                eax = *((esi + 0x118));
                if (eax < 0x36b0) {
                    goto label_3;
                }
                if (eax > 0x3e80) {
                    goto label_3;
                }
                eax = *((esi + 0x11c));
                if (eax < 0x1388) {
                    goto label_3;
                }
                if (eax <= 0x1b58) {
                    goto label_4;
                }
            }
label_3:
            fcn_004087f0 (edi, "Ignoring incorrect cHRM value when sRGB is also present");
        }
label_4:
        fcn_00411b30 (edi, esi, ebx);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40ab30 */
#include <stdint.h>
 
int32_t fcn_0040ab30 (int32_t arg_ch, int32_t arg_10h, int32_t arg_1ch) {
    int32_t var_28h;
    edi = *((esp + 0xc));
    eax = *((edi + 0x68));
    if ((al & 1) == 0) {
        al = fcn_00408740 (edi, "Missing IHDR before iCCP");
    } else {
        if ((al & 4) != 0) {
            fcn_004087f0 (edi, "Invalid iCCP after IDAT");
            eax = *((esp + 0x1c));
            al = fcn_00409d50 (edi, eax);
            return eax;
        }
        if ((al & 2) == 0) {
            goto label_0;
        }
        fcn_004087f0 (edi, "Out of place iCCP chunk");
    }
label_0:
    eax = *((esp + 0x10));
    if (eax != 0) {
        if ((*((eax + 8)) & 0x1000) == 0) {
            goto label_1;
        }
        fcn_004087f0 (edi, "Duplicate iCCP chunk");
        ecx = *((esp + 0x1c));
        fcn_00409d50 (edi, ecx);
        return eax;
    }
label_1:
    ebp = *((esp + 0x1c));
    eax = fcn_00408ba0 (edi, ebp + 1);
    ebx = eax;
    fcn_00408ca0 (edi, ebx, ebp);
    eax = fcn_00409d50 (edi, 0);
    if (eax != 0) {
        fcn_00408bf0 (edi, ebx);
        return eax;
    }
    eax = ebx + ebp;
    *(eax) = 0;
    esi = ebx;
    if (*(ebx) == 0) {
        goto label_2;
    }
    do {
        esi++;
    } while (*(esi) != 0);
label_2:
    esi++;
    if (esi >= eax) {
        fcn_00408bf0 (edi, ebx);
        fcn_004087f0 (edi, "Malformed iCCP chunk");
        return eax;
    }
    al = *(esi);
    esi++;
    if (al != 0) {
        al = fcn_004087f0 (edi, "Ignoring nonzero compression type in iCCP chunk");
        al = 0;
    }
    ecx = esp + 0x18;
    esi -= ebx;
    eax = (int32_t) al;
    eax = fcn_00408d40 (edi, eax, ebx, ebp, esi);
    ecx = *((esp + 0x30));
    eax = ecx;
    eax -= esi;
    if (esi > ecx) {
        goto label_3;
    }
    if (eax < 4) {
        goto label_3;
    }
    edx = 0;
    dh = *((esi + ebp));
    ecx = esi + ebp;
    esi = *((ecx + 2));
    dl = *((ecx + 1));
    edx <<= 8;
    edx |= esi;
    esi = *((ecx + 3));
    edx <<= 8;
    edx |= esi;
    if (edx >= eax) {
        goto label_4;
    }
    eax = edx;
    do {
        edx = *((esp + 0x10));
        eax = *((esp + 0x20));
        fcn_00411c10 (edi, eax, ebp, edx, ecx, eax);
        fcn_00408bf0 (edi, ebp);
        return eax;
label_4:
    } while (edx <= eax);
    fcn_00408bf0 (edi, ebp);
    fcn_004087f0 (edi, "Ignoring truncated iCCP profile.\n");
    return eax;
label_3:
    fcn_00408bf0 (edi, ebp);
    fcn_004087f0 (edi, "Profile size field missing from iCCP chunk");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40ace0 */
#include <stdint.h>
 
int32_t fcn_0040ace0 (int32_t arg_18h, int32_t arg_28h_2, int32_t arg_28h) {
    int32_t var_14h_2;
    uint32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    ebx = *((esp + 0x18));
    eax = *((ebx + 0x68));
    if ((al & 1) != 0) {
        goto label_0;
    }
    fcn_00408740 (ebx, "Missing IHDR before sPLT");
    do {
        edi = *((esp + 0x28));
        eax = fcn_00408ba0 (ebx, edi + 1);
        fcn_00408ca0 (ebx, ebp, edi);
        eax = fcn_00409d50 (ebx, 0);
        if (eax == 0) {
            goto label_1;
        }
        al = fcn_00408bf0 (ebx, ebp);
        return eax;
label_0:
    } while ((al & 4) == 0);
    fcn_004087f0 (ebx, "Invalid sPLT after IDAT");
    eax = *((esp + 0x28));
    fcn_00409d50 (ebx, eax);
    return eax;
label_1:
    eax = edi + ebp;
    *(eax) = 0;
    esi = ebp;
    if (*(ebp) == 0) {
        goto label_2;
    }
    do {
        esi++;
    } while (*(esi) != 0);
label_2:
    esi++;
    if (esi > eax) {
        fcn_00408bf0 (ebx, ebp);
        fcn_004087f0 (ebx, "malformed sPLT chunk");
        return eax;
    }
    al = *(esi);
    ecx = 0;
    esi++;
    *((esp + 0x14)) = al;
    cl = (al != 8) ? 1 : 0;
    eax = ebp;
    eax -= esi;
    eax += edi;
    edx:eax = (int64_t) eax;
    ecx = ecx*4 + 6;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    if (edx != 0) {
        fcn_00408bf0 (ebx, ebp);
        eax = fcn_004087f0 (ebx, "sPLT chunk has bad length");
        return eax;
    }
    *((esp + 0x1c)) = eax;
    if (eax > 0x19999999) {
        fcn_004087f0 (ebx, "sPLT chunk too long");
        return eax;
    }
    edx = eax * 5;
    edx += edx;
    eax = fcn_00408c20 (ebx, edx);
    *((esp + 0x18)) = eax;
    if (eax == 0) {
        fcn_004087f0 (ebx, "sPLT chunk requires too much memory");
        return eax;
    }
    edi = 0;
    if (*((esp + 0x1c)) <= edi) {
        goto label_3;
    }
    ebx = 0;
    while (edi < *((esp + 0x1c))) {
        eax = *((esp + 0x18));
        edx = ebx + eax;
        if (*((esp + 0x14)) == 8) {
            eax = *(esi);
            esi++;
            *(edx) = ax;
            ecx = *(esi);
            esi++;
            *((edx + 2)) = cx;
            eax = *(esi);
            esi++;
            *((edx + 4)) = ax;
            ecx = *(esi);
            *((edx + 6)) = cx;
            esi++;
        } else {
            ax = fcn_00408c80 (esi);
            esi += 2;
            *(edx) = ax;
            ax = fcn_00408c80 (esi);
            esi += 2;
            *((edx + 2)) = ax;
            ax = fcn_00408c80 (esi);
            esi += 2;
            *((edx + 4)) = ax;
            ax = fcn_00408c80 (esi);
            *((edx + 6)) = ax;
            esi += 2;
        }
        ax = fcn_00408c80 (esi);
        edi++;
        *((edx + 8)) = ax;
        esi += 2;
        ebx += 0xa;
    }
    ebx = *((esp + 0x24));
label_3:
    eax = *((esp + 0x28));
    fcn_00411fc0 (ebx, eax, esp + 0x14);
    fcn_00408bf0 (ebx, ebp);
    ecx = *((esp + 0x30));
    fcn_00408bf0 (ebx, ecx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40bcc0 */
#include <stdint.h>
 
int32_t fcn_0040bcc0 (int32_t arg_10h, int32_t arg_18h_2, int32_t arg_18h) {
    edi = *((esp + 0x10));
    if ((*((edi + 0x68)) & 1) == 0) {
        fcn_00408740 (edi, "Missing IHDR before tEXt");
    }
    eax = *((edi + 0x68));
    if ((al & 4) != 0) {
        eax |= 8;
        *((edi + 0x68)) = eax;
    }
    esi = *((esp + 0x18));
    eax = fcn_00408c20 (edi, esi + 1);
    ebx = eax;
    if (ebx == 0) {
        fcn_004087f0 (edi, "No memory to process text chunk.");
        return eax;
    }
    fcn_00408ca0 (edi, ebx, esi);
    eax = fcn_00409d50 (edi, 0);
    if (eax != 0) {
        fcn_00408bf0 (edi, ebx);
        return eax;
    }
    eax = ebx + esi;
    *(eax) = 0;
    if (*(ebx) == 0) {
        goto label_0;
    }
    do {
        ebp++;
    } while (*(ebp) != 0);
label_0:
    if (ebp != eax) {
        ebp++;
    }
    eax = fcn_00408c20 (edi, 0x10);
    esi = eax;
    if (esi == 0) {
        fcn_004087f0 (edi, "Not enough memory to process text chunk.");
        fcn_00408bf0 (edi, ebx);
        return eax;
    }
    eax = ebp;
    *(esi) = 0xffffffff;
    *((esi + 4)) = ebx;
    *((esi + 8)) = ebp;
    edx = eax + 1;
    do {
        cl = *(eax);
        eax++;
    } while (cl != 0);
    ecx = *((esp + 0x18));
    eax -= edx;
    *((esi + 0xc)) = eax;
    eax = fcn_00411d10 (edi, ecx, esi, 1);
    fcn_00408bf0 (edi, ebx);
    fcn_00408bf0 (edi, esi);
    if (ebp != 0) {
        fcn_004087f0 (edi, "Insufficient memory to process text chunk.");
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40bba0 */
#include <stdint.h>
 
int32_t fcn_0040bba0 (int32_t arg_20h_2, int32_t arg_20h, int32_t arg_2ch) {
    int32_t var_10h_3;
    int32_t var_12h_2;
    int32_t var_13h;
    int32_t var_10h_2;
    int32_t var_11h;
    int32_t var_12h;
    int32_t var_18h;
    int32_t var_16h;
    int32_t var_17h;
    int32_t var_18h_2;
    int32_t var_19h;
    int32_t var_1ah;
    int32_t var_10h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x10)) = eax;
    ebx = *((esp + 0x20));
    esi = *((esp + 0x20));
    if ((*((esi + 0x68)) & 1) != 0) {
        goto label_1;
    }
    fcn_00408740 (esi, "Out of place tIME chunk");
    do {
label_0:
        eax = *((esi + 0x68));
        if ((al & 4) != 0) {
            eax |= 8;
            *((esi + 0x68)) = eax;
        }
        edi = *((esp + 0x2c));
        if (edi == 7) {
            goto label_2;
        }
        fcn_004087f0 (esi, "Incorrect tIME chunk length");
        fcn_00409d50 (esi, edi);
        ecx = *((esp + 0x10));
        ecx ^= esp;
        fcn_00412237 ();
        return eax;
label_1:
    } while (ebx == 0);
    if ((*((ebx + 8)) & 0x200) == 0) {
        goto label_0;
    }
    fcn_004087f0 (esi, "Duplicate tIME chunk");
    eax = *((esp + 0x30));
    fcn_00409d50 (esi, eax);
    ecx = *((esp + 0x10));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
label_2:
    fcn_00408ca0 (esi, esp + 0x18, 7);
    eax = fcn_00409d50 (esi, 0);
    if (eax == 0) {
        edx = *((esp + 0x1a));
        eax = *((esp + 0x19));
        cl = *((esp + 0x18));
        *((esp + 0x11)) = al;
        eax = *((esp + 0x16));
        *((esp + 0x12)) = dl;
        edx = *((esp + 0x17));
        *((esp + 0x10)) = cl;
        ecx = esp + 0x14;
        *((esp + 0x13)) = dl;
        ax = fcn_00408c80 (al);
        edx = esp + 0x10;
        fcn_00411f00 (esi, ebx);
    }
    ecx = *((esp + 0x1c));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40af00 */
#include <stdint.h>
 
int32_t fcn_0040af00 (int32_t arg_11ch_2, int32_t arg_11ch, int32_t arg_130h) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_22h;
    int32_t var_28h;
    int32_t var_1ch;
    int32_t var_10ch;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x10c)) = eax;
    ebp = *((esp + 0x11c));
    esi = *((esp + 0x11c));
    eax = *((esi + 0x68));
    if ((al & 1) != 0) {
        goto label_2;
    }
    fcn_00408740 (esi, "Missing IHDR before tRNS");
    do {
label_0:
        al = *((esi + 0x126));
        if (al != 0) {
            goto label_3;
        }
        edi = *((esp + 0x128));
        if (edi == 2) {
            goto label_4;
        }
label_1:
        al = fcn_004087f0 (esi, "Incorrect tRNS chunk length");
        goto label_5;
label_2:
        if ((al & 4) != 0) {
            fcn_004087f0 (esi, "Invalid tRNS after IDAT");
            eax = *((esp + 0x12c));
            fcn_00409d50 (esi, eax);
            ecx = *((esp + 0x10c));
            ecx ^= esp;
            fcn_00412237 ();
            return eax;
        }
    } while (ebp == 0);
    if ((*((ebp + 8)) & 0x10) == 0) {
        goto label_0;
    }
    fcn_004087f0 (esi, "Duplicate tRNS chunk");
    ecx = *((esp + 0x12c));
    fcn_00409d50 (esi, ecx);
    ecx = *((esp + 0x10c));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
label_4:
    fcn_00408ca0 (esi, esp + 0x10, 2);
    *((esi + 0x11a)) = 1;
    ax = fcn_00408c80 (esp + 0x18);
    *((esi + 0x194)) = ax;
    goto label_6;
label_3:
    if (al != 2) {
        goto label_7;
    }
    edi = *((esp + 0x128));
    if (edi != 6) {
        goto label_1;
    }
    fcn_00408ca0 (esi, esp + 0x14, edi);
    *((esi + 0x11a)) = 1;
    ax = fcn_00408c80 (esp + 0x1c);
    *((esi + 0x18e)) = ax;
    ax = fcn_00408c80 (esp + 0x22);
    *((esi + 0x190)) = ax;
    ax = fcn_00408c80 (esp + 0x28);
    *((esi + 0x192)) = ax;
    goto label_6;
label_7:
    if (al != 3) {
        goto label_8;
    }
    if ((*((esi + 0x68)) & 2) == 0) {
        fcn_004087f0 (esi, "Missing PLTE before tRNS");
    }
    edx = *((esi + 0x118));
    edi = *((esp + 0x128));
    if (edi > edx) {
        goto label_1;
    }
    if (edi > 0x100) {
        goto label_1;
    }
    if (edi == 0) {
        fcn_004087f0 (esi, "Zero length tRNS chunk");
    } else {
        fcn_00408ca0 (esi, esp + 0x1c, edi);
        *((esi + 0x11a)) = di;
label_6:
        eax = fcn_00409d50 (esi, 0);
        if (eax != 0) {
            goto label_9;
        }
        edx = *((esi + 0x11a));
        fcn_00411f30 (esi, ebp, esp + 0x20, edx, esi + 0x18c);
        ecx = *((esp + 0x10c));
        ecx ^= esp;
        fcn_00412237 ();
        return eax;
label_8:
        fcn_004087f0 (esi, "tRNS chunk not allowed with alpha channel");
        ecx = *((esp + 0x130));
    }
label_5:
    fcn_00409d50 (esi, ecx);
label_9:
    ecx = *((esp + 0x118));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40bde0 */
#include <stdint.h>
 
int32_t fcn_0040bde0 (int32_t arg_10h, int32_t arg_18h_2, int32_t arg_18h) {
    edi = *((esp + 0x10));
    if ((*((edi + 0x68)) & 1) == 0) {
        fcn_00408740 (edi, "Missing IHDR before zTXt");
    }
    eax = *((edi + 0x68));
    if ((al & 4) != 0) {
        eax |= 8;
        *((edi + 0x68)) = eax;
    }
    esi = *((esp + 0x18));
    eax = fcn_00408c20 (edi, esi + 1);
    ebx = eax;
    if (ebx == 0) {
        fcn_004087f0 (edi, "Out of memory processing zTXt chunk.");
        return eax;
    }
    fcn_00408ca0 (edi, ebx, esi);
    eax = fcn_00409d50 (edi, 0);
    if (eax != 0) {
        fcn_00408bf0 (edi, ebx);
        return eax;
    }
    eax = ebx + esi;
    *(eax) = 0;
    esi = ebx;
    if (*(ebx) == 0) {
        goto label_0;
    }
    do {
        esi++;
    } while (*(esi) != 0);
label_0:
    if (esi == eax) {
        ebp |= 0xffffffff;
        fcn_004087f0 (edi, "Zero length zTXt chunk");
    } else {
        ebp = *((esi + 1));
        esi++;
        if (ebp != 0) {
            fcn_004087f0 (edi, "Unknown compression type in zTXt chunk");
            ebp = 0;
        }
        esi++;
    }
    edx = *((esp + 0x1c));
    ecx = esp + 0x1c;
    esi -= ebx;
    eax = fcn_00408d40 (edi, ebp, ebx, edx, esi);
    ebx = eax;
    eax = fcn_00408c20 (edi, 0x10);
    esi = eax;
    if (esi == 0) {
        fcn_004087f0 (edi, "Not enough memory to process zTXt chunk.");
        fcn_00408bf0 (edi, ebx);
        return eax;
    }
    edx = *((esp + 0x18));
    eax = *((esp + 0x14));
    ecx = *((esp + 0x1c));
    eax += ebx;
    *(esi) = ebp;
    *((esi + 4)) = ebx;
    *((esi + 8)) = eax;
    *((esi + 0xc)) = ecx;
    eax = fcn_00411d10 (edi, edx, esi, 1);
    fcn_00408bf0 (edi, esi);
    fcn_00408bf0 (edi, ebx);
    if (ebp != 0) {
        fcn_00408740 (edi, "Insufficient memory to store zTXt chunk.");
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x409a60 */
#include <stdint.h>
 
int32_t fcn_00409a60 (int32_t arg_ch) {
    esi = *((esp + 0xc));
    *((esi + 0x78)) = 0;
    fcn_0040f950 (esi, esi);
    if (*((esi + 0x123)) != 0) {
        if ((*((esi + 0x70)) & 2) == 0) {
            eax = *((esi + 0xcc));
            eax -= *(0x4164ec);
            ecx = *(0x416508);
            eax = eax + ecx - 1;
            edx = 0;
            eax = edx:eax / ecx;
            edx = edx:eax % ecx;
            *((esi + 0xd0)) = eax;
        } else {
            ecx = *((esi + 0xcc));
            *((esi + 0xd0)) = ecx;
        }
        eax = *((esi + 0x124));
        ebp = *((esi + 0xc8));
        eax += eax;
        ecx = *((eax + eax + 0x4164d0));
        eax += eax;
        edx = ebp;
        edx -= *((eax + 0x4164b4));
        eax = edx + ecx - 1;
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        cl = *((esi + 0x129));
        ecx = (int32_t) cl;
        *((esi + 0xe0)) = eax;
        if (cl >= 8) {
            ecx >>= 3;
            ecx *= eax;
            eax = ecx + 1;
            *((esi + 0xdc)) = eax;
        } else {
            ecx *= eax;
        }
        ecx += 7;
        ecx >>= 3;
        eax = ecx + 1;
        *((esi + 0xdc)) = eax;
    } else {
        ecx = *((esi + 0xd8));
        eax = *((esi + 0xcc));
        ebp = *((esi + 0xc8));
        ecx++;
        *((esi + 0xd0)) = eax;
        *((esi + 0xe0)) = ebp;
        *((esi + 0xdc)) = ecx;
    }
    eax = *((esi + 0x129));
    ebx = *((esi + 0x70));
    if ((bl & 4) != 0) {
        if (*((esi + 0x127)) >= 8) {
            goto label_0;
        }
        eax = 8;
    }
label_0:
    edi = ebx;
    edi &= 0x1000;
    if (edi != 0) {
        cl = *((esi + 0x126));
        if (cl == 3) {
            eax = 0;
            al = (*((esi + 0x11a)) != ax) ? 1 : 0;
            eax = eax*8 + 0x18;
        } else {
            if (cl == 0) {
                if (eax < 8) {
                    eax = 8;
                }
                if (*((esi + 0x11a)) == 0) {
                    goto label_1;
                }
                eax += eax;
            } else {
                if (cl != 2) {
                    goto label_1;
                }
                if (*((esi + 0x11a)) == 0) {
                    goto label_1;
                }
                ecx = eax*4;
                eax = 0x55555556;
                edx:eax = eax * ecx;
                eax = edx;
                eax >>= 0x1f;
                eax += edx;
            }
        }
    }
label_1:
    edx = ebx;
    edx &= 0x8000;
    if (edx != 0) {
        cl = *((esi + 0x126));
        if (cl == 3) {
            eax = 0x20;
        } else {
            if (cl == 0) {
                ecx = 0;
                cl = (eax > 8) ? 1 : 0;
                ecx--;
                ecx &= 0xfffffff0;
                ecx += 0x20;
            } else {
                if (cl != 2) {
                    goto label_2;
                }
                ecx = 0;
                cl = (eax > 0x20) ? 1 : 0;
                ecx--;
                ecx &= 0xffffffe0;
                ecx += 0x40;
            }
            eax = ecx;
        }
    }
label_2:
    if ((ebx & 0x4000) != 0) {
        if (*((esi + 0x11a)) != 0) {
            if (edi != 0) {
                goto label_3;
            }
        }
        if (edx == 0) {
            cl = *((esi + 0x126));
            if (cl != 4) {
                if (eax <= 8) {
                    eax = 0;
                    al = (cl == 6) ? 1 : 0;
                    eax = eax*8 + 0x18;
                    goto label_4;
                }
                cl -= 6;
                cl = -cl;
                ecx -= ecx;
                ecx &= 0xfffffff0;
                ecx += 0x40;
                eax = ecx;
            }
        } else {
label_3:
            edx = 0;
            dl = (eax > 0x10) ? 1 : 0;
            edx--;
            edx &= 0xffffffe0;
            edx += 0x40;
            eax = edx;
        }
    }
label_4:
    ebx = edi;
    if ((ebx & 0x100000) != 0) {
        ecx = *((esi + 0x65));
        edx = *((esi + 0x64));
        ecx *= edx;
        if (ecx <= eax) {
            goto label_5;
        }
        eax = ecx;
    }
label_5:
    edx = ebp + 7;
    edx &= 0xfffffff8;
    ecx = eax;
    if (eax >= 8) {
        ecx >>= 3;
        ecx *= edx;
    } else {
        ecx *= edx;
        ecx += 7;
        ecx >>= 3;
    }
    eax += 7;
    eax >>= 3;
    eax = fcn_00408ba0 (esi, eax + ecx + 0x41);
    *((esi + 0x250)) = eax;
    eax += 0x20;
    *((esi + 0xec)) = eax;
    if (*((esi + 0xd8)) > 0xfffffffe) {
        fcn_00408740 (esi, "Row has too many bytes to allocate in memory.");
    }
    ecx = *((esi + 0xd8));
    ecx++;
    eax = fcn_00408ba0 (esi, ecx);
    edx = *((esi + 0xd8));
    edx++;
    *((esi + 0xe8)) = eax;
    fcn_00408b10 (esi, eax, 0);
    *((esi + 0x6c)) |= 0x40;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x409130 */
#include <stdint.h>
 
uint32_t fcn_00409130 (int32_t arg_14h, void * s1, uint32_t arg_1ch) {
    uint32_t var_10h;
    uint32_t var_14h;
    int32_t var_18h;
    uint32_t var_1ch;
    if (*((esp + 0x1c)) == 0xff) {
        ecx = *((esp + 0x14));
        al = *((ecx + 0x10b));
        eax = (int32_t) al;
        if (al >= 8) {
            eax >>= 3;
            eax *= *((ecx + 0xc8));
        } else {
            eax *= *((ecx + 0xc8));
            eax += 7;
            eax >>= 3;
        }
        eax = *((ecx + 0xec));
        ecx = *((esp + 0x1c));
        eax++;
        memcpy (ecx, eax, eax);
        return eax;
    }
    eax = *((esp + 0x14));
    ecx = *((eax + 0x10b));
    esi = *((eax + 0xec));
    edx = ecx;
    esi++;
    edx--;
    if (edx == 0) {
        goto label_0;
    }
    edx--;
    if (edx == 0) {
        goto label_1;
    }
    edx -= 2;
    if (edx == 0) {
        goto label_2;
    }
    eax = *((eax + 0xc8));
    ebp = *((esp + 0x28));
    ecx >>= 3;
    edi = ecx;
    bl = 0x80;
    if (eax <= 0) {
        goto label_3;
    }
    *((esp + 0x10)) = eax;
    do {
        dl = *((esp + 0x2c));
        if ((dl & bl) != 0) {
            memcpy (ebp, esi, edi);
        }
        esi += edi;
        ebp += edi;
        if (bl == 1) {
            bl = 0x80;
        } else {
            bl >>= 1;
        }
    } while (bl != 0);
    return eax;
label_2:
    edi = *((esp + 0x28));
    ecx = *((eax + 0xc8));
    *((esp + 0x10)) = 0x80;
    if ((*((eax + 0x70)) & 0x10000) != 0) {
        eax = 4;
        ebp = 0;
        *((esp + 0x14)) = eax;
        *((esp + 0x18)) = eax;
    } else {
        *((esp + 0x14)) = 0;
        *((esp + 0x18)) = 0xfffffffc;
    }
    edx = ebp;
    if (ecx <= 0) {
        goto label_3;
    }
    *((esp + 0x1c)) = ecx;
    do {
        eax = *((esp + 0x2c));
        if ((*((esp + 0x10)) & eax) != 0) {
            eax = *(esi);
            cl = dl;
            eax >>= cl;
            ecx = 4;
            ecx -= edx;
            ebx = 0xf0f;
            ebx >>= cl;
            eax &= 0xf;
            ecx = edx;
            al <<= cl;
            bl &= *(edi);
            bl |= al;
            *(edi) = bl;
        }
        if (edx == *((esp + 0x14))) {
            esi++;
            edx = ebp;
            edi++;
        } else {
            edx += *((esp + 0x18));
        }
        eax = 1;
        if (*((esp + 0x10)) == eax) {
            *((esp + 0x10)) = 0x80;
        } else {
        }
    } while (*((esp + 0x10)) != eax);
    return eax;
label_1:
    edi = *((esp + 0x28));
    ecx = *((eax + 0xc8));
    *((esp + 0x10)) = 0x80;
    if ((*((eax + 0x70)) & 0x10000) != 0) {
        ebp = 0;
        *((esp + 0x1c)) = 6;
        *((esp + 0x18)) = 2;
    } else {
        *((esp + 0x1c)) = 0;
        *((esp + 0x18)) = 0xfffffffe;
    }
    edx = ebp;
    if (ecx <= 0) {
        goto label_3;
    }
    *((esp + 0x14)) = ecx;
    do {
        ecx = *((esp + 0x2c));
        if ((*((esp + 0x10)) & ecx) != 0) {
            eax = *(esi);
            cl = dl;
            eax >>= cl;
            ecx = 6;
            ecx -= edx;
            ebx = 0x3f3f;
            ebx >>= cl;
            eax &= 3;
            ecx = edx;
            al <<= cl;
            bl &= *(edi);
            bl |= al;
            *(edi) = bl;
        }
        if (edx == *((esp + 0x1c))) {
            esi++;
            edx = ebp;
            edi++;
        } else {
            edx += *((esp + 0x18));
        }
        eax = 1;
        if (*((esp + 0x10)) == eax) {
            *((esp + 0x10)) = 0x80;
        } else {
        }
    } while (*((esp + 0x10)) != eax);
    return eax;
label_0:
    edi = *((esp + 0x28));
    ecx = *((eax + 0xc8));
    *((esp + 0x10)) = 0x80;
    if ((*((eax + 0x70)) & 0x10000) != 0) {
        ebp = 0;
        *((esp + 0x1c)) = 7;
        *((esp + 0x18)) = 1;
    } else {
        *((esp + 0x1c)) = 0;
        *((esp + 0x18)) = 0xffffffff;
    }
    edx = ebp;
    if (ecx <= 0) {
        goto label_3;
    }
    *((esp + 0x14)) = ecx;
    do {
        eax = *((esp + 0x2c));
        if ((*((esp + 0x10)) & eax) != 0) {
            eax = *(esi);
            cl = dl;
            eax >>= cl;
            ecx = 7;
            ecx -= edx;
            ebx = 0x7f7f;
            ebx >>= cl;
            eax &= 1;
            ecx = edx;
            al <<= cl;
            bl &= *(edi);
            bl |= al;
            *(edi) = bl;
        }
        if (edx == *((esp + 0x1c))) {
            esi++;
            edx = ebp;
            edi++;
        } else {
            edx += *((esp + 0x18));
        }
        eax = 1;
        if (*((esp + 0x10)) == eax) {
            *((esp + 0x10)) = 0x80;
        } else {
        }
    } while (*((esp + 0x10)) != eax);
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40c120 */
#include <stdint.h>
 
int32_t fcn_0040c120 (int32_t arg_10h) {
    int32_t var_1ch;
    esi = *((esp + 0x10));
    *((esi + 0xe4)) += ebp;
    eax = *((esi + 0xe4));
    if (eax < *((esi + 0xd0))) {
        goto label_3;
    }
    if (*((esi + 0x123)) == 0) {
        goto label_4;
    }
    eax = *((esi + 0xd8));
    ecx = *((esi + 0xe8));
    eax += ebp;
    *((esi + 0xe4)) = 0;
    fcn_00408b10 (esi, ecx, 0);
    while (*((esi + 0xe0)) == 0) {
        *((esi + 0x124))++;
        bl = *((esi + 0x124));
        if (bl >= 7) {
            goto label_4;
        }
        edx = *((esi + 0xc8));
        edi = (int32_t) bl;
        edi += edi;
        edx -= *((edi + edi + 0x4164b4));
        ecx = *((edi + edi + 0x4164d0));
        edi += edi;
        eax = edx + ecx - 1;
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        cl = *((esi + 0x129));
        ecx = (int32_t) cl;
        *((esi + 0xe0)) = eax;
        if (cl >= 8) {
            ecx >>= 3;
            ecx *= eax;
        } else {
            ecx *= eax;
            ecx += 7;
            ecx >>= 3;
        }
        ecx += ebp;
        *((esi + 0xdc)) = ecx;
        if ((*((esi + 0x70)) & 2) != 0) {
            goto label_5;
        }
        eax = *((esi + 0xcc));
        eax -= *((edi + 0x4164ec));
        ecx = *((edi + 0x416508));
        edx = 0;
        eax = eax + ecx - 1;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        *((esi + 0xd0)) = eax;
    }
label_5:
    if (bl < 7) {
        goto label_6;
    }
label_4:
    if ((*((esi + 0x6c)) & 0x20) != 0) {
        goto label_7;
    }
    ecx = esp + 0x18;
    *((esi + 0x80)) = ecx;
    *((esi + 0x84)) = ebp;
    edi = esi + 0x74;
label_1:
    if (*((esi + 0x78)) != 0) {
        goto label_8;
    }
    if (*((esi + 0x10c)) != 0) {
        goto label_9;
    }
    ebp = esi + 0x11c;
label_0:
    fcn_00409d50 (esi, 0);
    edx = esp + 0x1c;
    fcn_004088c0 (esi);
    eax = fcn_00409d20 (esi, esp + 0x24);
    *((esi + 0x10c)) = eax;
    fcn_00407dd0 (esi);
    fcn_00408ca0 (esi, ebp, 4);
    eax = 4;
    ecx = "IDAT";
    edx = ebp;
    do {
        edi = *(edx);
        if (edi != *(ecx)) {
            goto label_10;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_10:
        ebx = *(ecx);
        edi = *(edx);
        edi -= ebx;
        if (edi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_11;
            }
            ebx = *(ecx);
            edi = *(edx);
            edi -= ebx;
            if (edi != 0) {
                goto label_12;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_11;
            }
            ebx = *(ecx);
            edi = *(edx);
            edi -= ebx;
            if (edi != 0) {
                goto label_12;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_11;
            }
            ecx = *(ecx);
            edi = *(edx);
            edi -= ecx;
            if (edi == 0) {
                goto label_11;
            }
        }
label_12:
        eax = 1;
        if (edi > 0) {
            goto label_13;
        }
        eax |= 0xffffffff;
    } else {
label_11:
        eax = 0;
    }
label_13:
    if (eax != 0) {
        fcn_00408740 (esi, "Not enough image data");
    }
    if (*((esi + 0x10c)) == 0) {
        goto label_0;
    }
label_9:
    eax = *((esi + 0xb0));
    ecx = *((esi + 0x10c));
    edx = *((esi + 0xac));
    edi = esi + 0x74;
    *((esi + 0x78)) = eax;
    *(edi) = edx;
    if (eax > ecx) {
        *((esi + 0x78)) = ecx;
    }
    eax = *((esi + 0x78));
    fcn_00408ca0 (esi, edx, eax);
    ecx = *((esi + 0x78));
    *((esi + 0x10c)) -= ecx;
label_8:
    eax = fcn_00412d50 (edi, 1);
    if (eax == 1) {
        goto label_14;
    }
    if (eax != 0) {
        eax = *((esi + 0x8c));
        if (eax == 0) {
            eax = "Decompression Error";
        }
        fcn_00408740 (esi, eax);
    }
    if (*((esi + 0x84)) != 0) {
        goto label_1;
    }
label_2:
    fcn_004087f0 (esi, "Extra compressed data.");
    do {
        *((esi + 0x68)) |= 8;
        *((esi + 0x6c)) |= 0x20;
        *((esi + 0x84)) = 0;
label_7:
        if (*((esi + 0x10c)) == 0) {
            if (*((esi + 0x78)) == 0) {
                goto label_15;
            }
        }
        fcn_004087f0 (esi, "Extra compression data");
label_15:
        fcn_00412af0 (esi + 0x74);
        *((esi + 0x68)) |= 8;
label_6:
label_3:
        return eax;
label_14:
        if (*((esi + 0x84)) == 0) {
            goto label_16;
        }
        if (*((esi + 0x78)) != 0) {
            goto label_16;
        }
    } while (*((esi + 0x10c)) == 0);
label_16:
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x409d50 */
#include <stdint.h>
 
int32_t fcn_00409d50 (int32_t arg_ch, int32_t arg_14h) {
    esi = *((esp + 0xc));
    ebx = *((esi + 0xb0));
    edi = *((esp + 0x14));
    if (edi <= ebx) {
        goto label_0;
    }
    while (edi > ebx) {
        eax = *((esi + 0xb0));
        ecx = *((esi + 0xac));
        fcn_00408ca0 (esi, ecx, eax);
        edi -= ebx;
    }
label_0:
    if (edi != 0) {
        edx = *((esi + 0xac));
        fcn_00408ca0 (esi, edx, edi);
    }
    eax = fcn_00408cd0 (esi);
    if (eax != 0) {
        al = *((esi + 0x11c));
        al &= 0x20;
        if (al != 0) {
            if ((*((esi + 0x6c)) & 0x200) == 0) {
                goto label_1;
            }
        }
        if (al == 0) {
            if ((*((esi + 0x6c)) & 0x400) == 0) {
                goto label_2;
            }
label_1:
            fcn_00408880 (esi, "CRC error");
            eax = 1;
            return eax;
        }
label_2:
        fcn_00408850 (esi, "CRC error");
        eax = 1;
        return eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412d50 */
#include <stdint.h>
 
int32_t fcn_00412d50 (uint32_t arg_4h, uint32_t arg_44h) {
    int32_t var_10h;
    size_t n;
    int32_t var_16h;
    int32_t var_18h;
    int32_t var_19h;
    int32_t var_1ah;
    uint32_t var_1ch;
    int32_t var_30h_2;
    int32_t var_31h;
    int32_t var_26h;
    int32_t var_27h;
    size_t var_24h_2;
    uint32_t var_24h;
    uint32_t var_2ch;
    int32_t var_30h;
    void * s1;
    uint32_t var_38h;
    eax = *((esp + 4));
    if (eax == 0) {
        goto label_3;
    }
    edi = *((eax + 0x1c));
    if (edi == 0) {
        goto label_3;
    }
    if (*((eax + 0xc)) == 0) {
        goto label_3;
    }
    if (*(eax) == 0) {
        if (*((eax + 4)) != 0) {
            goto label_3;
        }
    }
    if (*(edi) == 0xb) {
        *(edi) = 0xc;
    }
    ecx = *((eax + 0xc));
    edx = *((eax + 4));
    ebx = *((edi + 0x38));
    ebp = *(eax);
    *((esp + 0x24)) = ecx;
    ecx = *((eax + 0x10));
    eax = *(edi);
    esi = *((edi + 0x3c));
    *((esp + 0x1c)) = ecx;
    *((esp + 0x10)) = edx;
    *((esp + 0x18)) = ebx;
    *((esp + 0x38)) = edx;
    *((esp + 0x2c)) = ecx;
    *((esp + 0x30)) = 0;
    if (eax > 0x1c) {
        goto label_4;
    }
    /* switch table (29 cases) at 0x4142b8 */
label_2:
    if (*((edi + 8)) == 0) {
        *(edi) = 0xc;
        goto label_5;
    }
    if (esi >= 0x10) {
        goto label_6;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
        *((esp + 0x18)) = ebx;
    } while (esi < 0x10);
label_6:
    if ((*((edi + 8)) & 2) != 0) {
        if (ebx != 0x8b1f) {
            goto label_8;
        }
        eax = fcn_00414630 (0, 0, 0);
        *((edi + 0x18)) = eax;
        ecx = esp + 0x30;
        *((esp + 0x30)) = 0x1f;
        edx = *((edi + 0x18));
        eax = fcn_00414630 (0x8b, ecx);
        edx = *((esp + 0x28));
        ebx = 0;
        *((edi + 0x18)) = eax;
        *((esp + 0x18)) = ebx;
        esi = 0;
        *(edi) = 1;
        goto label_5;
    }
label_8:
    eax = *((edi + 0x20));
    *((edi + 0x10)) = 0;
    if (eax != 0) {
        *((eax + 0x30)) = 0xffffffff;
    }
    if ((*((edi + 8)) & 1) != 0) {
        eax = (int32_t) bl;
        eax <<= 8;
        ecx = ebx;
        ecx >>= 8;
        eax += ecx;
        edx = 0;
        ecx = 0x1f;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        if (edx != 0) {
            goto label_9;
        }
        edx = ebx;
        dl &= 0xf;
        if (dl != 8) {
            eax = *((esp + 0x40));
            edx = *((esp + 0x10));
            *((eax + 0x18)) = "unknown compression method";
            goto label_10;
        }
        ebx >>= 4;
        ecx = ebx;
        ecx &= 0xf;
        ecx += 8;
        esi -= 4;
        *((esp + 0x18)) = ebx;
        if (ecx > *((edi + 0x24))) {
            ecx = *((esp + 0x40));
            edx = *((esp + 0x10));
            *((ecx + 0x18)) = "invalid window size";
            goto label_10;
        }
        edx = 1;
        edx <<= cl;
        *((edi + 0x14)) = edx;
        eax = fcn_00415030 (0, 0, 0);
        ecx = *((esp + 0x4c));
        edx = *((esp + 0x1c));
        ebx >>= 8;
        ebx = ~ebx;
        ebx &= 2;
        ebx |= 9;
        *((edi + 0x18)) = eax;
        *((ecx + 0x30)) = eax;
        *(edi) = ebx;
        ebx = 0;
        *((esp + 0x18)) = ebx;
        esi = 0;
        goto label_5;
    }
label_9:
    edx = *((esp + 0x40));
    *((edx + 0x18)) = "incorrect header check";
    edx = *((esp + 0x10));
    goto label_10;
    if (esi >= 0x10) {
        goto label_11;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
        *((esp + 0x18)) = ebx;
    } while (esi < 0x10);
label_11:
    *((edi + 0x10)) = ebx;
    if (bl != 8) {
        ecx = *((esp + 0x40));
        *((ecx + 0x18)) = "unknown compression method";
        goto label_10;
    }
    if ((ebx & 0xe000) != 0) {
        eax = *((esp + 0x40));
        *((eax + 0x18)) = "unknown header flags set";
        goto label_10;
    }
    eax = *((edi + 0x20));
    if (eax != 0) {
        ecx = ebx;
        ecx >>= 8;
        ecx &= 1;
        *(eax) = ecx;
    }
    if ((*((edi + 0x10)) & 0x200) != 0) {
        *((esp + 0x20)) = bl;
        ebx >>= 8;
        edx = esp + 0x24;
        eax = *((edi + 0x18));
        eax = fcn_00414630 (bl, edx);
        edx = *((esp + 0x1c));
        *((edi + 0x18)) = eax;
    }
    ebx = 0;
    esi = 0;
    *(edi) = 2;
    goto label_12;
    if (esi >= 0x20) {
        goto label_13;
    }
    do {
label_12:
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
    } while (esi < 0x20);
label_13:
    eax = *((edi + 0x20));
    if (eax != 0) {
        *((eax + 4)) = ebx;
    }
    if ((*((edi + 0x10)) & 0x200) != 0) {
        *((esp + 0x20)) = bl;
        ecx = ebx;
        edx = ebx;
        ecx >>= 8;
        edx >>= 0x10;
        ebx >>= 0x18;
        eax = esp + 0x24;
        *((esp + 0x25)) = cl;
        *((esp + 0x26)) = dl;
        ecx = *((edi + 0x18));
        eax = fcn_00414630 (bl, eax);
        edx = *((esp + 0x1c));
        *((edi + 0x18)) = eax;
    }
    ebx = 0;
    esi = 0;
    *(edi) = 3;
    goto label_14;
    if (esi >= 0x10) {
        goto label_15;
    }
    do {
label_14:
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
    } while (esi < 0x10);
label_15:
    eax = *((edi + 0x20));
    if (eax != 0) {
        ecx = ebx;
        ecx &= 0xff;
        *((eax + 8)) = ecx;
        ecx = *((edi + 0x20));
        eax = ebx;
        eax >>= 8;
        *((ecx + 0xc)) = eax;
    }
    if ((*((edi + 0x10)) & 0x200) != 0) {
        *((esp + 0x20)) = bl;
        ebx >>= 8;
        edx = esp + 0x24;
        eax = *((edi + 0x18));
        eax = fcn_00414630 (bl, edx);
        edx = *((esp + 0x1c));
        *((edi + 0x18)) = eax;
    }
    ebx = 0;
    *((esp + 0x18)) = ebx;
    esi = 0;
    *(edi) = 4;
    if ((*((edi + 0x10)) & 0x400) == 0) {
        goto label_16;
    }
    if (esi >= 0x10) {
        goto label_17;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
    } while (esi < 0x10);
label_17:
    eax = *((edi + 0x20));
    *((edi + 0x40)) = ebx;
    if (eax != 0) {
        *((eax + 0x14)) = ebx;
    }
    if ((*((edi + 0x10)) & 0x200) != 0) {
        *((esp + 0x20)) = bl;
        ebx >>= 8;
        ecx = esp + 0x24;
        edx = *((edi + 0x18));
        eax = fcn_00414630 (bl, ecx);
        edx = *((esp + 0x1c));
        *((edi + 0x18)) = eax;
    }
    ebx = 0;
    *((esp + 0x18)) = ebx;
    esi = 0;
    goto label_18;
label_16:
    eax = *((edi + 0x20));
    if (eax != 0) {
        *((eax + 0x10)) = 0;
    }
label_18:
    *(edi) = 5;
    if ((*((edi + 0x10)) & 0x400) != 0) {
        eax = *((edi + 0x40));
        *((esp + 0x14)) = eax;
        if (eax > edx) {
            eax = edx;
            *((esp + 0x14)) = edx;
        }
        if (eax != 0) {
            ecx = *((edi + 0x20));
            if (ecx != 0) {
                ecx = *((ecx + 0x10));
                *((esp + 0x34)) = ecx;
                if (ecx == 0) {
                    goto label_19;
                }
                ecx = *((edi + 0x20));
                ecx = *((ecx + 0x14));
                ecx -= *((edi + 0x40));
                edx = *((edi + 0x20));
                edx = *((edx + 0x18));
                *((esp + 0x24)) = ecx;
                ecx += eax;
                if (ecx > edx) {
                    edx -= *((esp + 0x24));
                    eax = edx;
                }
                edx = *((esp + 0x34));
                eax = *((esp + 0x28));
                edx += eax;
                memcpy (edx, ebp, eax);
                eax = *((esp + 0x20));
                edx = *((esp + 0x1c));
            }
label_19:
            if ((*((edi + 0x10)) & 0x200) != 0) {
                ecx = *((esp + 0x14));
                edx = *((edi + 0x18));
                eax = fcn_00414630 (edx, ebp, ecx);
                edx = *((esp + 0x1c));
                *((edi + 0x18)) = eax;
                eax = *((esp + 0x20));
            }
            edx -= eax;
            ebp += eax;
            *((edi + 0x40)) -= eax;
            *((esp + 0x10)) = edx;
        }
        if (*((edi + 0x40)) != 0) {
            goto label_7;
        }
    }
    *((edi + 0x40)) = 0;
    *(edi) = 6;
    if ((*((edi + 0x10)) & 0x800) == 0) {
        goto label_20;
    }
    if (edx == 0) {
        goto label_7;
    }
    eax = 0;
    do {
        ecx = *((eax + ebp));
        eax++;
        *((esp + 0x14)) = eax;
        eax = *((edi + 0x20));
        *((esp + 0x24)) = ecx;
        if (eax != 0) {
            ecx = *((eax + 0x1c));
            *((esp + 0x34)) = ecx;
            if (ecx == 0) {
                goto label_21;
            }
            ecx = *((edi + 0x40));
            if (ecx >= *((eax + 0x20))) {
                goto label_21;
            }
            edx = *((esp + 0x34));
            al = *((esp + 0x24));
            *((edx + ecx)) = al;
            *((edi + 0x40))++;
            edx = *((esp + 0x10));
        }
label_21:
        if (*((esp + 0x24)) == 0) {
            goto label_22;
        }
        eax = *((esp + 0x14));
    } while (eax < edx);
label_22:
    if ((*((edi + 0x10)) & 0x200) != 0) {
        ecx = *((esp + 0x14));
        edx = *((edi + 0x18));
        eax = fcn_00414630 (edx, ebp, ecx);
        edx = *((esp + 0x1c));
        *((edi + 0x18)) = eax;
    }
    eax = *((esp + 0x14));
    edx -= eax;
    ebp += eax;
    *((esp + 0x10)) = edx;
    if (*((esp + 0x24)) != 0) {
        goto label_7;
    }
    goto label_23;
label_20:
    eax = *((edi + 0x20));
    if (eax != 0) {
        *((eax + 0x1c)) = 0;
    }
label_23:
    *((edi + 0x40)) = 0;
    *(edi) = 7;
    if ((*((edi + 0x10)) & 0x1000) == 0) {
        goto label_24;
    }
    if (edx == 0) {
        goto label_7;
    }
    eax = 0;
    do {
        ecx = *((eax + ebp));
        eax++;
        *((esp + 0x14)) = eax;
        eax = *((edi + 0x20));
        *((esp + 0x24)) = ecx;
        if (eax != 0) {
            ecx = *((eax + 0x24));
            *((esp + 0x34)) = ecx;
            if (ecx == 0) {
                goto label_25;
            }
            ecx = *((edi + 0x40));
            if (ecx >= *((eax + 0x28))) {
                goto label_25;
            }
            edx = *((esp + 0x34));
            al = *((esp + 0x24));
            *((edx + ecx)) = al;
            *((edi + 0x40))++;
            edx = *((esp + 0x10));
        }
label_25:
        if (*((esp + 0x24)) == 0) {
            goto label_26;
        }
        eax = *((esp + 0x14));
    } while (eax < edx);
label_26:
    if ((*((edi + 0x10)) & 0x200) != 0) {
        ecx = *((esp + 0x14));
        edx = *((edi + 0x18));
        eax = fcn_00414630 (edx, ebp, ecx);
        edx = *((esp + 0x1c));
        *((edi + 0x18)) = eax;
    }
    eax = *((esp + 0x14));
    edx -= eax;
    ebp += eax;
    *((esp + 0x10)) = edx;
    if (*((esp + 0x24)) != 0) {
        goto label_7;
    }
    goto label_27;
label_24:
    eax = *((edi + 0x20));
    if (eax != 0) {
        *((eax + 0x24)) = 0;
    }
label_27:
    *(edi) = 8;
    if ((*((edi + 0x10)) & 0x200) == 0) {
        goto label_28;
    }
    if (esi >= 0x10) {
        goto label_29;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
        *((esp + 0x18)) = ebx;
    } while (esi < 0x10);
label_29:
    ecx = *((edi + 0x18));
    if (ebx != ecx) {
        eax = *((esp + 0x40));
        *((eax + 0x18)) = "header crc mismatch";
        goto label_10;
    }
    ebx = 0;
    *((esp + 0x18)) = ebx;
    esi = 0;
label_28:
    eax = *((edi + 0x20));
    if (eax != 0) {
        ecx = *((edi + 0x10));
        ecx >>= 9;
        ecx &= 1;
        *((eax + 0x2c)) = ecx;
        edx = *((edi + 0x20));
        *((edx + 0x30)) = 1;
    }
    eax = fcn_00414630 (0, 0, 0);
    ecx = *((esp + 0x4c));
    edx = *((esp + 0x1c));
    *((edi + 0x18)) = eax;
    *((ecx + 0x30)) = eax;
    *(edi) = 0xb;
    goto label_5;
    if (esi >= 0x20) {
        goto label_30;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
        *((esp + 0x18)) = ebx;
    } while (esi < 0x20);
label_30:
    ecx = ebx;
    ecx &= 0xff00;
    eax = ebx;
    eax <<= 0x10;
    ecx += eax;
    eax = 0;
    ah = *((esp + 0x1a));
    ecx <<= 8;
    ebx >>= 0x18;
    ecx += eax;
    eax = ecx + ebx;
    ecx = *((esp + 0x40));
    *((edi + 0x18)) = eax;
    *((ecx + 0x30)) = eax;
    ebx = 0;
    esi = 0;
    *(edi) = 0xa;
    if (*((edi + 0xc)) == 0) {
        goto label_31;
    }
    eax = fcn_00415030 (0, 0, 0);
    edx = *((esp + 0x4c));
    *((edi + 0x18)) = eax;
    *((edx + 0x30)) = eax;
    edx = *((esp + 0x1c));
    *(edi) = 0xb;
    if (*((esp + 0x44)) == 5) {
        goto label_7;
    }
    if (*((edi + 4)) != 0) {
        ecx = esi;
        ecx &= 7;
        ebx >>= cl;
        esi -= ecx;
        *(edi) = 0x18;
        *((esp + 0x18)) = ebx;
        goto label_5;
    }
    if (esi >= 3) {
        goto label_32;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
    } while (esi < 3);
label_32:
    ecx = ebx;
    ebx >>= 1;
    eax = ebx;
    ecx &= 1;
    eax &= 3;
    esi--;
    *((edi + 4)) = ecx;
    if (eax <= 3) {
        /* switch table (4 cases) at 0x41432c */
        ebx >>= 2;
        *(edi) = 0xd;
        *((esp + 0x18)) = ebx;
        esi -= 2;
        goto label_5;
        eax = edi;
        fcn_00412c40 ();
        ebx >>= 2;
        *(edi) = 0x12;
        *((esp + 0x18)) = ebx;
        esi -= 2;
        goto label_5;
        ebx >>= 2;
        *(edi) = 0xf;
        *((esp + 0x18)) = ebx;
        esi -= 2;
        goto label_5;
        eax = *((esp + 0x40));
        *((eax + 0x18)) = "invalid block type";
        *(edi) = 0x1b;
    }
    ebx >>= 2;
    *((esp + 0x18)) = ebx;
    esi -= 2;
    goto label_5;
    ecx = esi;
    ecx &= 7;
    ebx >>= cl;
    esi -= ecx;
    *((esp + 0x18)) = ebx;
    if (esi >= 0x20) {
        goto label_33;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
        *((esp + 0x18)) = ebx;
    } while (esi < 0x20);
label_33:
    ecx = ebx;
    eax = ebx;
    ecx = ~ecx;
    eax &= 0xffff;
    ecx >>= 0x10;
    if (eax != ecx) {
        eax = *((esp + 0x40));
        *((eax + 0x18)) = "invalid stored block lengths";
        goto label_10;
    }
    ebx = 0;
    *((edi + 0x40)) = eax;
    *((esp + 0x18)) = ebx;
    esi = 0;
    *(edi) = 0xe;
    eax = *((edi + 0x40));
    *((esp + 0x14)) = eax;
    if (eax == 0) {
        goto label_34;
    }
    if (eax > edx) {
        eax = edx;
        *((esp + 0x14)) = edx;
    }
    ecx = *((esp + 0x1c));
    if (eax > ecx) {
        eax = ecx;
        *((esp + 0x14)) = eax;
    }
    if (eax == 0) {
        goto label_7;
    }
    ecx = *((esp + 0x14));
    edx = *((esp + 0x28));
    memcpy (edx, ebp, ecx);
    eax = *((esp + 0x20));
    edx = *((esp + 0x1c));
    ebp += eax;
    *((edi + 0x40)) -= eax;
    goto label_5;
    if (esi >= 0xe) {
        goto label_35;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
    } while (esi < 0xe);
label_35:
    ecx = ebx;
    ecx &= 0x1f;
    ebx >>= 5;
    ecx += 0x101;
    eax = ebx;
    *((edi + 0x60)) = ecx;
    ebx >>= 5;
    ecx = ebx;
    eax &= 0x1f;
    ecx &= 0xf;
    eax++;
    ecx += 4;
    ebx >>= 4;
    esi -= 0xe;
    *((edi + 0x64)) = eax;
    *((edi + 0x5c)) = ecx;
    *((esp + 0x18)) = ebx;
    if (*((edi + 0x60)) > 0x11e) {
        goto label_36;
    }
    if (eax > 0x1e) {
        goto label_36;
    }
    *((edi + 0x68)) = 0;
    *(edi) = 0x10;
    ecx = *((edi + 0x68));
    if (ecx >= *((edi + 0x5c))) {
        goto label_37;
    }
label_0:
    if (esi >= 3) {
        goto label_38;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
    } while (esi < 3);
label_38:
    eax = *((edi + 0x68));
    eax = *((eax*2 + 0x4183f0));
    ecx = (int32_t) bl;
    ecx &= 7;
    *((edi + eax*2 + 0x70)) = cx;
    *((edi + 0x68))++;
    ecx = *((edi + 0x68));
    ebx >>= 3;
    esi -= 3;
    *((esp + 0x18)) = ebx;
    if (ecx < *((edi + 0x5c))) {
        goto label_0;
    }
label_37:
    if (*((edi + 0x68)) >= 0x13) {
        goto label_39;
    }
    ecx = 1;
    eax = 0;
    while (*((edi + 0x68)) < 0x13) {
        edx = *((edi + 0x68));
        edx = *((edx*2 + 0x4183f0));
        *((edi + edx*2 + 0x70)) = ax;
        *((edi + 0x68)) += ecx;
    }
label_39:
    eax = edi + 0x530;
    ecx = edi + 0x6c;
    *(ecx) = eax;
    *((edi + 0x4c)) = eax;
    *(eax) = 7;
    eax = fcn_00414b40 (0, edi + 0x70, 0x13, ecx, edi + 0x54, edi + 0x2f0);
    edx = *((esp + 0x28));
    *((esp + 0x30)) = eax;
    if (eax != 0) {
        ecx = *((esp + 0x40));
        *((ecx + 0x18)) = "invalid code lengths set";
        goto label_10;
label_36:
        eax = *((esp + 0x40));
        *((eax + 0x18)) = "too many length or distance symbols";
        goto label_10;
    }
    *((edi + 0x68)) = 0;
    *(edi) = 0x11;
    eax = *((edi + 0x64));
    eax += *((edi + 0x60));
    if (*((edi + 0x68)) >= eax) {
        goto label_40;
    }
label_1:
    ecx = *((edi + 0x54));
    eax = 1;
    eax <<= cl;
    ecx = *((edi + 0x4c));
    eax--;
    eax &= ebx;
    eax = *((ecx + eax*4));
    ecx = *((ecx + eax*4));
    ecx >>= 8;
    ecx = (int32_t) cl;
    *((esp + 0x14)) = eax;
    if (ecx <= esi) {
        goto label_41;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        ecx = *((edi + 0x54));
        edx--;
        esi += 8;
        ebx += eax;
        eax = 1;
        eax <<= cl;
        ecx = *((edi + 0x4c));
        ebp++;
        *((esp + 0x10)) = edx;
        eax--;
        eax &= ebx;
        eax = *((ecx + eax*4));
        ecx = *((ecx + eax*4));
        ecx >>= 8;
        ecx = (int32_t) cl;
        *((esp + 0x14)) = eax;
    } while (ecx > esi);
label_41:
    ecx = eax;
    ecx >>= 0x10;
    if (ecx >= 0x10) {
        goto label_42;
    }
    ecx = eax;
    ecx >>= 8;
    ecx = (int32_t) cl;
    if (esi >= ecx) {
        goto label_43;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        eax = *((esp + 0x14));
        ecx = (int32_t) ah;
        *((esp + 0x10)) = edx;
    } while (esi < ecx);
label_43:
    ecx = (int32_t) ah;
    eax = *((edi + 0x68));
    ebx >>= cl;
    esi -= ecx;
    cx = *((esp + 0x16));
    *((edi + eax*2 + 0x70)) = cx;
    *((edi + 0x68))++;
    *((esp + 0x18)) = ebx;
    goto label_44;
label_42:
    cx = *((esp + 0x16));
    if (cx != 0x10) {
        goto label_45;
    }
    ecx = (int32_t) ah;
    eax = ecx + 2;
    *((esp + 0x24)) = ecx;
    if (esi >= eax) {
        goto label_46;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        ecx = *((esp + 0x24));
        edx--;
        esi += 8;
        ebx += eax;
        eax = ecx + 2;
        ebp++;
        *((esp + 0x10)) = edx;
    } while (esi < eax);
label_46:
    eax = *((edi + 0x68));
    ebx >>= cl;
    esi -= ecx;
    *((esp + 0x18)) = ebx;
    if (eax == 0) {
        goto label_47;
    }
    ecx = *((edi + eax*2 + 0x6e));
    eax = ebx;
    eax &= 3;
    eax += 3;
    ebx >>= 2;
    *((esp + 0x24)) = ecx;
    *((esp + 0x14)) = eax;
    esi -= 2;
    goto label_48;
label_45:
    ecx = (int32_t) ah;
    *((esp + 0x24)) = ecx;
    if (cx != 0x11) {
        goto label_49;
    }
    eax = ecx + 3;
    if (esi >= eax) {
        goto label_50;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        ecx = *((esp + 0x24));
        edx--;
        esi += 8;
        ebx += eax;
        eax = ecx + 3;
        ebp++;
        *((esp + 0x10)) = edx;
    } while (esi < eax);
label_50:
    ebx >>= cl;
    eax = ebx;
    eax &= 7;
    eax += 3;
    *((esp + 0x14)) = eax;
    ebx >>= 3;
    eax = 0xfffffffd;
    goto label_51;
label_49:
    eax = ecx + 7;
    if (esi >= eax) {
        goto label_52;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        ecx = *((esp + 0x24));
        edx--;
        esi += 8;
        ebx += eax;
        eax = ecx + 7;
        ebp++;
        *((esp + 0x10)) = edx;
    } while (esi < eax);
label_52:
    ebx >>= cl;
    eax = ebx;
    eax &= 0x7f;
    eax += 0xb;
    *((esp + 0x14)) = eax;
    ebx >>= 7;
    eax = 0xfffffff9;
label_51:
    eax -= ecx;
    esi += eax;
    eax = *((esp + 0x14));
    *((esp + 0x24)) = 0;
label_48:
    ecx = *((edi + 0x68));
    ecx += eax;
    eax = *((edi + 0x64));
    eax += *((edi + 0x60));
    *((esp + 0x18)) = ebx;
    if (ecx > eax) {
        goto label_53;
    }
    if (*((esp + 0x14)) == 0) {
        goto label_44;
    }
    eax = *((esp + 0x24));
    do {
        ecx = *((edi + 0x68));
        *((edi + ecx*2 + 0x70)) = ax;
        *((edi + 0x68))++;
    } while (*((esp + 0x14)) != 0);
label_44:
    eax = *((edi + 0x64));
    eax += *((edi + 0x60));
    if (*((edi + 0x68)) < eax) {
        goto label_1;
    }
label_40:
    if (*(edi) == 0x1b) {
        goto label_5;
    }
    eax = edi + 0x530;
    ecx = edi + 0x6c;
    *(ecx) = eax;
    *((edi + 0x4c)) = eax;
    ecx = *((edi + 0x60));
    *(eax) = 9;
    eax = fcn_00414b40 (1, edi + 0x70, ecx, ecx, edi + 0x54, edi + 0x2f0);
    *((esp + 0x30)) = eax;
    if (eax != 0) {
        eax = *((esp + 0x40));
        edx = *((esp + 0x10));
        *((eax + 0x18)) = "invalid literal/lengths set";
        goto label_10;
label_47:
        ecx = *((esp + 0x40));
        *((ecx + 0x18)) = "invalid bit length repeat";
        goto label_10;
label_53:
        eax = *((esp + 0x40));
        *((eax + 0x18)) = "invalid bit length repeat";
        goto label_10;
    }
    edx = *((edi + 0x6c));
    ecx = edi + 0x6c;
    *((edi + 0x50)) = edx;
    ecx = *((edi + 0x60));
    *(eax) = 6;
    eax = *((edi + 0x64));
    eax = fcn_00414b40 (2, edi + ecx*2 + 0x70, eax, ecx, edi + 0x58, edi + 0x2f0);
    edx = *((esp + 0x28));
    *((esp + 0x30)) = eax;
    if (eax != 0) {
        eax = *((esp + 0x40));
        *((eax + 0x18)) = "invalid distances set";
        goto label_10;
    }
    *(edi) = 0x12;
    if (edx >= 6) {
        if (*((esp + 0x1c)) < 0x102) {
            goto label_54;
        }
        eax = *((esp + 0x40));
        edx = *((esp + 0x1c));
        ecx = *((esp + 0x28));
        *((eax + 0x10)) = edx;
        edx = *((esp + 0x2c));
        *((eax + 0xc)) = ecx;
        ecx = *((esp + 0x10));
        *(eax) = ebp;
        *((eax + 4)) = ecx;
        *((edi + 0x38)) = ebx;
        *((edi + 0x3c)) = esi;
        fcn_00414680 (eax, edx);
        eax = *((esp + 0x48));
        edx = *((eax + 0x10));
        ecx = *((eax + 0xc));
        ebp = *(eax);
        eax = *((eax + 4));
        ebx = *((edi + 0x38));
        esi = *((edi + 0x3c));
        *((esp + 0x24)) = edx;
        *((esp + 0x28)) = ecx;
        *((esp + 0x10)) = eax;
        *((esp + 0x18)) = ebx;
        edx = eax;
        goto label_5;
    }
label_54:
    ecx = *((edi + 0x54));
    eax = 1;
    eax <<= cl;
    eax--;
    eax &= ebx;
    ecx = eax;
    eax = *((edi + 0x4c));
    eax = *((eax + ecx*4));
    ecx = *((eax + ecx*4));
    ecx >>= 8;
    ecx = (int32_t) cl;
    *((esp + 0x14)) = eax;
    if (ecx <= esi) {
        goto label_55;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        ecx = *((edi + 0x54));
        edx--;
        esi += 8;
        ebx += eax;
        eax = 1;
        eax <<= cl;
        ecx = *((edi + 0x4c));
        ebp++;
        *((esp + 0x10)) = edx;
        eax--;
        eax &= ebx;
        eax = *((ecx + eax*4));
        ecx = *((ecx + eax*4));
        ecx >>= 8;
        ecx = (int32_t) cl;
        *((esp + 0x14)) = eax;
    } while (ecx > esi);
label_55:
    if (al == 0) {
        goto label_56;
    }
    if ((al & 0xf0) != 0) {
        goto label_56;
    }
    ecx = eax;
    ecx >>= 8;
    *((esp + 0x34)) = ecx;
    ecx = (int32_t) cl;
    *((esp + 0x24)) = ecx;
    ecx = (int32_t) al;
    ecx += *((esp + 0x24));
    *((esp + 0x18)) = eax;
    eax = 1;
    eax <<= cl;
    ecx = *((esp + 0x24));
    eax--;
    eax &= ebx;
    eax >>= cl;
    ecx = *((esp + 0x14));
    ecx >>= 0x10;
    eax += ecx;
    ecx = eax;
    eax = *((edi + 0x4c));
    eax = *((eax + ecx*4));
    ecx = *((esp + 0x34));
    *((esp + 0x14)) = eax;
    eax >>= 8;
    eax = (int32_t) al;
    eax += ecx;
    if (eax <= esi) {
        goto label_57;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        ecx = *((esp + 0x18));
        edx--;
        esi += 8;
        ebx += eax;
        eax = (int32_t) ch;
        ecx += eax;
        *((esp + 0x24)) = eax;
        eax = 1;
        eax <<= cl;
        ecx = *((esp + 0x24));
        ebp++;
        *((esp + 0x10)) = edx;
        eax--;
        eax &= ebx;
        eax >>= cl;
        ecx = *((esp + 0x1a));
        eax += ecx;
        ecx = *((edi + 0x4c));
        eax = *((ecx + eax*4));
        *((esp + 0x14)) = eax;
        eax >>= 8;
        eax = (int32_t) al;
        eax += *((esp + 0x24));
    } while (eax > esi);
label_57:
    ecx = *((esp + 0x19));
    eax = *((esp + 0x14));
    ebx >>= cl;
    esi -= ecx;
label_56:
    ecx = eax;
    ecx >>= 8;
    ecx = (int32_t) cl;
    ebx >>= cl;
    esi -= ecx;
    *((esp + 0x24)) = ecx;
    ecx = eax;
    ecx >>= 0x10;
    *((esp + 0x18)) = ebx;
    *((edi + 0x40)) = ecx;
    if (al == 0) {
        *(edi) = 0x17;
        goto label_5;
    }
    if ((al & 0x20) != 0) {
label_34:
        *(edi) = 0xb;
        goto label_5;
    }
    if ((al & 0x40) != 0) {
        eax = *((esp + 0x40));
        *((eax + 0x18)) = "invalid literal/length code";
        goto label_10;
    }
    eax &= 0xf;
    *((edi + 0x48)) = eax;
    *(edi) = 0x13;
    eax = *((edi + 0x48));
    if (eax == 0) {
        goto label_58;
    }
    if (esi >= eax) {
        goto label_59;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
    } while (esi < *((edi + 0x48)));
label_59:
    ecx = *((edi + 0x48));
    eax = 1;
    eax <<= cl;
    eax--;
    eax &= ebx;
    *((edi + 0x40)) += eax;
    ebx >>= cl;
    esi -= ecx;
label_58:
    *(edi) = 0x14;
    ecx = *((edi + 0x58));
    eax = 1;
    eax <<= cl;
    eax--;
    eax &= ebx;
    ecx = eax;
    eax = *((edi + 0x50));
    eax = *((eax + ecx*4));
    ecx = *((eax + ecx*4));
    ecx >>= 8;
    ecx = (int32_t) cl;
    *((esp + 0x14)) = eax;
    if (ecx <= esi) {
        goto label_60;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        ecx = *((edi + 0x58));
        edx--;
        esi += 8;
        ebx += eax;
        eax = 1;
        eax <<= cl;
        ecx = *((edi + 0x50));
        ebp++;
        *((esp + 0x10)) = edx;
        eax--;
        eax &= ebx;
        eax = *((ecx + eax*4));
        ecx = *((ecx + eax*4));
        ecx >>= 8;
        ecx = (int32_t) cl;
        *((esp + 0x14)) = eax;
    } while (ecx > esi);
label_60:
    if ((al & 0xf0) != 0) {
        goto label_61;
    }
    ecx = eax;
    ecx >>= 8;
    *((esp + 0x34)) = ecx;
    ecx = (int32_t) cl;
    *((esp + 0x24)) = ecx;
    ecx = (int32_t) al;
    ecx += *((esp + 0x24));
    *((esp + 0x18)) = eax;
    eax = 1;
    eax <<= cl;
    ecx = *((esp + 0x24));
    eax--;
    eax &= ebx;
    eax >>= cl;
    ecx = *((esp + 0x14));
    ecx >>= 0x10;
    eax += ecx;
    ecx = eax;
    eax = *((edi + 0x50));
    eax = *((eax + ecx*4));
    ecx = *((esp + 0x34));
    *((esp + 0x14)) = eax;
    eax >>= 8;
    eax = (int32_t) al;
    eax += ecx;
    if (eax <= esi) {
        goto label_62;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        ecx = *((esp + 0x18));
        edx--;
        esi += 8;
        ebx += eax;
        eax = (int32_t) ch;
        ecx += eax;
        *((esp + 0x24)) = eax;
        eax = 1;
        eax <<= cl;
        ecx = *((esp + 0x24));
        ebp++;
        *((esp + 0x10)) = edx;
        eax--;
        eax &= ebx;
        eax >>= cl;
        ecx = *((esp + 0x1a));
        eax += ecx;
        ecx = *((edi + 0x50));
        eax = *((ecx + eax*4));
        *((esp + 0x14)) = eax;
        eax >>= 8;
        eax = (int32_t) al;
        eax += *((esp + 0x24));
    } while (eax > esi);
label_62:
    ecx = *((esp + 0x19));
    eax = *((esp + 0x14));
    ebx >>= cl;
    esi -= ecx;
label_61:
    ecx = eax;
    ecx >>= 8;
    ecx = (int32_t) cl;
    ebx >>= cl;
    esi -= ecx;
    *((esp + 0x24)) = ecx;
    *((esp + 0x18)) = ebx;
    if ((al & 0x40) != 0) {
        eax = *((esp + 0x40));
        *((eax + 0x18)) = "invalid distance code";
        goto label_10;
    }
    ecx = eax;
    ecx >>= 0x10;
    eax &= 0xf;
    *((edi + 0x44)) = ecx;
    *((edi + 0x48)) = eax;
    *(edi) = 0x15;
    eax = *((edi + 0x48));
    if (eax == 0) {
        goto label_63;
    }
    if (esi >= eax) {
        goto label_64;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
    } while (esi < *((edi + 0x48)));
label_64:
    ecx = *((edi + 0x48));
    eax = 1;
    eax <<= cl;
    eax--;
    eax &= ebx;
    *((edi + 0x44)) += eax;
    ebx >>= cl;
    esi -= ecx;
    *((esp + 0x18)) = ebx;
label_63:
    ecx = *((edi + 0x2c));
    ecx -= *((esp + 0x1c));
    ecx += *((esp + 0x2c));
    if (*((edi + 0x44)) > ecx) {
        eax = *((esp + 0x40));
        *((eax + 0x18)) = "invalid distance too far back";
        goto label_10;
    }
    *(edi) = 0x16;
    if (*((esp + 0x1c)) == 0) {
        goto label_7;
    }
    ecx = *((esp + 0x2c));
    ecx -= *((esp + 0x1c));
    eax = *((edi + 0x44));
    if (eax > ecx) {
        eax -= ecx;
        ecx = *((edi + 0x30));
        *((esp + 0x14)) = eax;
        if (eax > ecx) {
            eax -= ecx;
            ecx = *((edi + 0x34));
            ecx += *((edi + 0x28));
            *((esp + 0x14)) = eax;
            ecx -= eax;
        } else {
            ecx = *((edi + 0x34));
            ecx -= eax;
            ecx += *((edi + 0x30));
            eax = *((esp + 0x14));
        }
        *((esp + 0x24)) = ecx;
        ecx = *((edi + 0x40));
        *((esp + 0x34)) = ecx;
        if (eax <= ecx) {
            goto label_65;
        }
        eax = ecx;
    } else {
        ecx = *((esp + 0x28));
        ecx -= eax;
        eax = *((edi + 0x40));
        *((esp + 0x24)) = ecx;
        *((esp + 0x34)) = eax;
    }
    *((esp + 0x14)) = eax;
label_65:
    ecx = *((esp + 0x1c));
    if (eax > ecx) {
        eax = ecx;
        *((esp + 0x14)) = eax;
    }
    ecx -= eax;
    *((esp + 0x1c)) = ecx;
    ecx = *((esp + 0x34));
    ecx -= eax;
    eax = *((esp + 0x28));
    *((edi + 0x40)) = ecx;
    do {
        ecx = *((esp + 0x24));
        cl = *(ecx);
        *(eax) = cl;
        eax++;
    } while (eax != 0);
    *((esp + 0x28)) = eax;
    if (*((edi + 0x40)) != 0) {
        goto label_5;
    }
    *(edi) = 0x12;
    goto label_5;
    if (*((esp + 0x1c)) == 0) {
        goto label_7;
    }
    eax = *((esp + 0x28));
    cl = *((edi + 0x40));
    *(eax) = cl;
    eax++;
    *((esp + 0x28)) = eax;
    *(edi) = 0x12;
    goto label_5;
    if (*((edi + 8)) == 0) {
        goto label_66;
    }
    if (esi >= 0x20) {
        goto label_67;
    }
    do {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
        *((esp + 0x18)) = ebx;
    } while (esi < 0x20);
label_67:
    eax = *((esp + 0x2c));
    eax -= *((esp + 0x1c));
    ecx = *((esp + 0x40));
    *((ecx + 0x14)) += eax;
    *((edi + 0x1c)) += eax;
    *((esp + 0x2c)) = eax;
    if (eax != 0) {
        ecx = *((esp + 0x28));
        edx = *((edi + 0x18));
        ecx -= eax;
        if (*((edi + 0x10)) != 0) {
            fcn_00414630 ();
        } else {
            eax = fcn_00415030 ();
        }
        ecx = *((esp + 0x4c));
        edx = *((esp + 0x1c));
        *((edi + 0x18)) = eax;
        *((ecx + 0x30)) = eax;
    }
    eax = *((esp + 0x1c));
    *((esp + 0x2c)) = eax;
    eax = ebx;
    if (*((edi + 0x10)) == 0) {
        eax &= 0xff00;
        ecx = ebx;
        ecx <<= 0x10;
        eax += ecx;
        ecx = 0;
        ch = *((esp + 0x1a));
        eax <<= 8;
        eax += ecx;
        ecx = ebx;
        ecx >>= 0x18;
        eax += ecx;
    }
    if (eax != *((edi + 0x18))) {
        eax = *((esp + 0x40));
        *((eax + 0x18)) = "incorrect data check";
        goto label_10;
    }
    ebx = 0;
    *((esp + 0x18)) = ebx;
    esi = 0;
label_66:
    *(edi) = 0x19;
    if (*((edi + 8)) == 0) {
        goto label_68;
    }
    if (*((edi + 0x10)) == 0) {
        goto label_68;
    }
    if (esi >= 0x20) {
        goto label_69;
    }
    while (esi < 0x20) {
        if (edx == 0) {
            goto label_7;
        }
        eax = *(ebp);
        ecx = esi;
        eax <<= cl;
        edx--;
        esi += 8;
        ebp++;
        ebx += eax;
        *((esp + 0x10)) = edx;
        *((esp + 0x18)) = ebx;
    }
label_69:
    if (ebx == *((edi + 0x1c))) {
        goto label_70;
    }
    ecx = *((esp + 0x40));
    *((ecx + 0x18)) = "incorrect length check";
label_10:
    *(edi) = 0x1b;
label_5:
    eax = *(edi);
    if (eax <= 0x1c) {
        goto label_2;
    }
label_4:
    eax = 0xfffffffe;
    do {
        return eax;
label_31:
        eax = *((esp + 0x40));
        ecx = *((esp + 0x28));
        *((eax + 0xc)) = ecx;
        ecx = *((esp + 0x1c));
        *(eax) = ebp;
        *((eax + 0x10)) = ecx;
        *((eax + 4)) = edx;
        *((edi + 0x3c)) = esi;
        *((edi + 0x38)) = ebx;
        eax = 2;
        return eax;
label_70:
        ebx = 0;
        esi = 0;
label_68:
        *(edi) = 0x1a;
        *((esp + 0x30)) = 1;
        goto label_7;
        *((esp + 0x30)) = 0xfffffffd;
label_7:
        eax = *((esp + 0x40));
        ecx = *((esp + 0x28));
        *((eax + 0xc)) = ecx;
        ecx = *((esp + 0x1c));
        *((eax + 0x10)) = ecx;
        *(eax) = ebp;
        *((eax + 4)) = edx;
        *((edi + 0x38)) = ebx;
        *((edi + 0x3c)) = esi;
        if (*((edi + 0x28)) == 0) {
            if (*(edi) >= 0x18) {
                goto label_71;
            }
            edx = *((esp + 0x2c));
            if (edx == *((eax + 0x10))) {
                goto label_71;
            }
        }
        eax = *((esp + 0x2c));
        ebx = *((esp + 0x40));
        eax = fcn_00412c60 ();
        if (eax != 0) {
            *(edi) = 0x1c;
            eax = 0xfffffffc;
            return eax;
        }
label_71:
        esi = *((esp + 0x40));
        ebp = *((esp + 0x38));
        ebp -= *((esi + 4));
        ebx = *((esp + 0x2c));
        ebx -= *((esi + 0x10));
        *((esi + 8)) += ebp;
        *((esi + 0x14)) += ebx;
        *((edi + 0x1c)) += ebx;
        if (*((edi + 8)) != 0) {
            if (ebx == 0) {
                goto label_72;
            }
            if (*((edi + 0x10)) != 0) {
                ecx = *((esi + 0xc));
                edx = *((edi + 0x18));
                ecx -= ebx;
                fcn_00414630 (edx, ecx);
            } else {
                eax = *((esi + 0xc));
                ecx = *((edi + 0x18));
                eax -= ebx;
                eax = fcn_00415030 (ecx, eax);
            }
            *((edi + 0x18)) = eax;
            *((esi + 0x30)) = eax;
        }
label_72:
        edx = *((edi + 4));
        edx = -edx;
        edx -= edx;
        edx &= 0x40;
        eax = 0;
        al = (*(edi) != 0xb) ? 1 : 0;
        eax--;
        eax &= 0x80;
        edx += eax;
        edx += *((edi + 0x3c));
        *((esi + 0x2c)) = edx;
        if (ebp == 0) {
            if (ebx == 0) {
                goto label_73;
            }
        }
        if (*((esp + 0x44)) != 4) {
            goto label_74;
        }
label_73:
        eax = *((esp + 0x30));
    } while (eax != 0);
    eax = 0xfffffffb;
    return eax;
label_74:
    eax = *((esp + 0x30));
    return eax;
label_3:
    eax = 0xfffffffe;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x409860 */
#include <stdint.h>
 
int32_t fcn_00409860 (int32_t arg_24h, int32_t arg_28h, int32_t arg_34h, int32_t arg_30h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    eax = *((esp + 0x14));
    if (eax > 4) {
        goto label_0;
    }
    /* switch table (5 cases) at 0x409a40 */
    eax = *((esp + 0x28));
    esi = *((eax + 4));
    eax = *((eax + 0xb));
    ecx = *((esp + 0x2c));
    eax += 7;
    eax >>= 3;
    ecx += eax;
    if (eax >= esi) {
        goto label_1;
    }
    edx = ecx;
    edx -= eax;
    esi -= eax;
    do {
        al = *(edx);
        *(ecx) += al;
        ecx++;
        edx++;
        esi--;
    } while (esi != 0);
    esi = edi;
    ebx = edi;
    return eax;
    ecx = *((esp + 0x28));
    esi = *((ecx + 4));
    eax = *((esp + 0x2c));
    ecx = 0;
    if (esi <= 0) {
        goto label_1;
    }
    edi = *((esp + 0x30));
    do {
        dl = *((ecx + edi));
        *(eax) += dl;
        ecx++;
        eax++;
    } while (ecx < esi);
    return eax;
    edx = *((esp + 0x28));
    eax = *((edx + 0xb));
    edx = *((edx + 4));
    ecx = *((esp + 0x2c));
    esi = *((esp + 0x30));
    eax += 7;
    eax >>= 3;
    edx -= eax;
    edi = ecx;
    if (eax <= 0) {
        goto label_2;
    }
    do {
        al = *(esi);
        al >>= 1;
        *(ecx) += al;
        esi++;
        ecx++;
        ebp--;
    } while (ebp != 0);
label_2:
    if (edx <= 0) {
        goto label_1;
    }
    ebx = edx;
    while (ebx != 0) {
        edx = *(esi);
        eax = *(edi);
        eax += edx;
        edx:eax = (int64_t) eax;
        eax -= edx;
        eax >>= 1;
        *(ecx) += al;
        edi++;
        esi++;
        ecx++;
        ebx--;
    }
    return eax;
    eax = *((esp + 0x2c));
    ecx = *((esp + 0x28));
    esi = *((esp + 0x30));
    edi = eax;
    *((esp + 0x34)) = eax;
    edx = eax;
    eax = *((ecx + 0xb));
    ecx = *((ecx + 4));
    eax += 7;
    eax >>= 3;
    ecx -= eax;
    if (eax <= 0) {
        goto label_3;
    }
    do {
        bl = *(esi);
        *(edi) += bl;
        esi++;
        edi++;
        eax--;
    } while (eax != 0);
    *((esp + 0x34)) = edi;
label_3:
    if (ecx <= 0) {
        goto label_1;
    }
    *((esp + 0x14)) = ecx;
    while (eax != 0) {
        edx = *((esp + 0x18));
        ebp = *((esp + 0x1c));
        edi = *(edx);
        ebx = *(esi);
        edx++;
        *((esp + 0x18)) = edx;
        edx = *(ebp);
        eax = ebx;
        ecx = edi;
        ebp++;
        eax -= edx;
        esi++;
        ecx -= edx;
        *((esp + 0x1c)) = ebp;
        if (eax < 0) {
            ebp = -ebp;
            *((esp + 0x10)) = ebp;
        } else {
            *((esp + 0x10)) = eax;
        }
        if (ecx < 0) {
            ebp = -ebp;
        }
        eax += ecx;
        if (eax < 0) {
            eax = -eax;
        }
        ecx = *((esp + 0x10));
        if (ecx <= ebp) {
            if (ecx <= eax) {
                edx = edi;
            }
        } else {
            if (ebp > eax) {
                goto label_4;
            }
            edx = ebx;
        }
label_4:
        eax = *((esp + 0x34));
        *(eax) += dl;
        eax++;
        *((esp + 0x34)) = eax;
    }
    return eax;
label_0:
    eax = *((esp + 0x24));
    fcn_004087f0 (eax, "Ignoring bad adaptive filter type");
    ecx = *((esp + 0x34));
    *(ecx) = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408af0 */
#include <stdint.h>
 
int32_t fcn_00408af0 (void * s1, void * s2, size_t n) {
    eax = *((esp + 0x10));
    ecx = *((esp + 0xc));
    edx = *((esp + 8));
    memcpy (edx, ecx, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40f880 */
#include <stdint.h>
 
int32_t fcn_0040f880 (int32_t arg_4h, int32_t arg_ch) {
    eax = *((esp + 4));
    cl = *((eax + 8));
    if ((cl & 2) == 0) {
        goto label_0;
    }
    edx = *(eax);
    al = *((eax + 9));
    if (al != 8) {
        goto label_1;
    }
    if (cl == 2) {
        edi = 3;
    } else {
        if (cl != 6) {
            goto label_2;
        }
        edi = 4;
    }
    if (edx <= 0) {
        goto label_2;
    }
    eax = *((esp + 0xc));
    eax += 2;
    do {
        cl = *((eax - 1));
        *((eax - 2)) += cl;
        *(eax) += cl;
        eax += edi;
        edx--;
    } while (edx != 0);
    return eax;
label_1:
    if (al != 0x10) {
        goto label_2;
    }
    if (cl == 2) {
        edi = 6;
    } else {
        if (cl != 6) {
            goto label_2;
        }
        edi = 8;
    }
    if (edx <= 0) {
        goto label_2;
    }
    eax = *((esp + 0xc));
    eax++;
    esi = edx;
    do {
        ebx = 0;
        bh = *((eax + 3));
        ecx = 0;
        ch = *((eax + 1));
        edx = 0;
        dh = *((eax - 1));
        bl = *((eax + 4));
        cl = *((eax + 2));
        dl = *(eax);
        ebx += ecx;
        ebx &= 0xffff;
        edx += ecx;
        edx &= 0xffff;
        ecx = ebx;
        ebx = edx;
        *(eax) = dl;
        edx = ecx;
        ebx >>= 8;
        edx >>= 8;
        *((eax - 1)) = bl;
        *((eax + 3)) = dl;
        *((eax + 4)) = cl;
        eax += edi;
        esi--;
    } while (esi != 0);
    ebx = esi;
label_2:
    edi = esi;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x410530 */
#include <stdint.h>
 
int32_t fcn_00410530 (int32_t arg_40h) {
    int32_t var_ch;
    int32_t var_34h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x34)) = eax;
    esi = *((esp + 0x40));
    if (*((esi + 0xec)) == 0) {
        eax = *((esi + 0x124));
        ecx = *((esi + 0xe4));
        edx = esp + 0xc;
        sprintf (edx, "NULL row buffer for row %ld, pass %d", ecx, eax);
        fcn_00408740 (esi, esp + 0x14);
    }
    if ((*((esi + 0x70)) & 0x1000) != 0) {
        if (*((esi + 0x108)) == 3) {
            ecx = *((esi + 0x11a));
            edx = *((esi + 0x188));
            eax = *((esi + 0x114));
            ecx = *((esi + 0xec));
            ecx++;
            fcn_0040e9a0 (esi + 0x100, ecx, eax, edx, ecx);
        } else {
            if (*((esi + 0x11a)) != 0) {
                ecx = *((esi + 0xec));
                eax = esi + 0x18c;
                ecx++;
                fcn_0040ebf0 (esi + 0x100);
            } else {
                eax = *((esi + 0xec));
                eax++;
            }
            fcn_0040ebf0 (esi + 0x100, eax, 0);
        }
    }
    eax = *((esi + 0x6c));
    eax &= 0x400000;
    if (eax != 0) {
        edx = *((esi + 0xec));
        eax |= 0x80;
        edx++;
        fcn_00410b20 (esi + 0x100, edx, eax);
    }
    if ((*((esi + 0x70)) & 0x600000) != 0) {
        ecx = *((esi + 0xec));
        ecx++;
        eax = fcn_0040cee0 (esi, esi + 0x100, ecx);
        if (eax == 0) {
            goto label_0;
        }
        *((esi + 0x228)) = 1;
        if (*((esi + 0x70)) == 0x400000) {
            fcn_004087f0 (esi, "png_do_rgb_to_gray found nongray pixel");
        }
        if (*((esi + 0x70)) != 0x200000) {
            goto label_0;
        }
        fcn_00408740 (esi, "png_do_rgb_to_gray found nongray pixel");
    }
label_0:
    if ((*((esi + 0x70)) & 0x4000) != 0) {
        if ((*((esi + 0x68)) & 0x800) != 0) {
            goto label_1;
        }
        eax = *((esi + 0xec));
        eax++;
        fcn_0040cd20 (esi + 0x100, eax);
    }
label_1:
    if ((*((esi + 0x70)) & 0x80) != 0) {
        if (*((esi + 0x11a)) == 0) {
            if ((*((esi + 0x126)) & 4) == 0) {
                goto label_2;
            }
        }
        edx = *((esi + 0x158));
        eax = *((esi + 0x178));
        ecx = *((esi + 0x174));
        edx = *((esi + 0x170));
        eax = *((esi + 0x16c));
        ecx = *((esi + 0x168));
        edx = *((esi + 0x164));
        eax = *((esi + 0xec));
        eax++;
        fcn_0040d5e0 (esi + 0x100, eax, esi + 0x18c, esi + 0x138, esi + 0x142, edx, ecx, eax, edx, ecx, eax, edx);
    }
label_2:
    eax = *((esi + 0x70));
    if ((eax & 0x2000) != 0) {
        if (al < 0) {
            if (*((esi + 0x11a)) != 0) {
                goto label_3;
            }
            if ((*((esi + 0x126)) & 4) != 0) {
                goto label_3;
            }
        }
        if (*((esi + 0x126)) == 3) {
            goto label_3;
        }
        edx = *((esi + 0x158));
        eax = *((esi + 0x170));
        ecx = *((esi + 0x164));
        edx = *((esi + 0xec));
        edx++;
        fcn_0040e5e0 (esi + 0x100, edx, ecx, eax, edx);
    }
label_3:
    if ((*((esi + 0x70)) & 0x400) != 0) {
        ecx = *((esi + 0xec));
        ecx++;
        fcn_0040c750 (esi + 0x100, ecx);
    }
    if ((*((esi + 0x70)) & 0x40) != 0) {
        eax = *((esi + 0x1f0));
        ecx = *((esi + 0x1ec));
        edx = *((esi + 0xec));
        edx++;
        fcn_0040eff0 (esi + 0x100, edx, ecx, eax);
        if (*((esi + 0x104)) != 0) {
            goto label_4;
        }
        fcn_00408740 (esi, 0x417630);
    }
label_4:
    if ((*((esi + 0x70)) & 0x20) != 0) {
        ecx = *((esi + 0xec));
        ecx++;
        fcn_004109f0 (esi + 0x100, ecx);
    }
    if ((*((esi + 0x70)) & 8) != 0) {
        ecx = *((esi + 0xec));
        ecx++;
        fcn_0040c570 (esi + 0x100, ecx, esi + 0x181);
    }
    if ((*((esi + 0x70)) & 4) != 0) {
        eax = *((esi + 0xec));
        eax++;
        fcn_0040c430 (esi + 0x100, eax);
    }
    if ((*((esi + 0x70)) & 1) != 0) {
        edx = *((esi + 0xec));
        edx++;
        fcn_00410dd0 (esi + 0x100, edx);
    }
    if ((*((esi + 0x70)) & 0x10000) != 0) {
        ecx = *((esi + 0xec));
        ecx++;
        fcn_00410ac0 (esi + 0x100, ecx);
    }
    if ((*((esi + 0x70)) & 0x4000) != 0) {
        if ((*((esi + 0x68)) & 0x800) == 0) {
            goto label_5;
        }
        eax = *((esi + 0xec));
        eax++;
        fcn_0040cd20 (esi + 0x100, eax);
    }
label_5:
    if ((*((esi + 0x70)) & 0x8000) != 0) {
        edx = *((esi + 0x6c));
        eax = *((esi + 0x12e));
        ecx = *((esi + 0xec));
        ecx++;
        fcn_0040ca00 (esi + 0x100, ecx, eax, edx);
    }
    if ((*((esi + 0x70)) & 0x80000) != 0) {
        eax = *((esi + 0xec));
        eax++;
        fcn_0040c920 (esi + 0x100, eax);
    }
    if ((*((esi + 0x70)) & 0x20000) != 0) {
        edx = *((esi + 0xec));
        edx++;
        fcn_0040c7a0 (esi + 0x100, edx);
    }
    if ((*((esi + 0x70)) & 0x10) != 0) {
        ecx = *((esi + 0xec));
        ecx++;
        fcn_00410a80 (esi + 0x100, ecx);
    }
    if ((*((esi + 0x70)) & 0x100000) != 0) {
        eax = *((esi + 0x58));
        if (eax != 0) {
            ecx = *((esi + 0xec));
            ecx++;
            void (*eax)(uint32_t, uint32_t, uint32_t) (esi, esi + 0x100, ecx);
        }
        al = *((esi + 0x64));
        if (al != 0) {
            *((esi + 0x109)) = al;
        }
        al = *((esi + 0x65));
        if (al != 0) {
            *((esi + 0x10a)) = al;
        }
        al = *((esi + 0x10a));
        ax = al * *((esi + 0x109));
        *((esi + 0x10b)) = al;
        eax = (int32_t) al;
        if (al >= 8) {
            eax >>= 3;
            eax *= *((esi + 0x100));
        } else {
            eax *= *((esi + 0x100));
            eax += 7;
            eax >>= 3;
        }
        *((esi + 0x104)) = eax;
    }
    ecx = *((esp + 0x38));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x409430 */
#include <stdint.h>
 
int32_t fcn_00409430 (int32_t arg_34h) {
    int32_t var_13h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    uint32_t var_20h;
    int32_t var_24h_2;
    int32_t var_28h;
    void * var_24h;
    int32_t var_2ch_2;
    void * s2;
    int32_t var_2ch;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x2c)) = eax;
    eax = *((esp + 0x34));
    ecx = *((eax + 0xec));
    ecx++;
    edx = *((eax + 0x124));
    ebx = *((eax + 0x70));
    esi = eax + 0x100;
    *((esp + 0x24)) = esi;
    if (ecx == 0) {
        goto label_4;
    }
    if (esi == 0) {
        goto label_4;
    }
    edx = *((edx*4 + 0x4164d0));
    eax = *(esi);
    esi = *((esi + 0xb));
    ebp *= edx;
    *((esp + 0x2c)) = edx;
    edx = esi;
    edx--;
    *((esp + 0x24)) = ebp;
    edi = ebp - 1;
    if (edx == 0) {
        goto label_5;
    }
    edx--;
    if (edx == 0) {
        goto label_6;
    }
    edx -= 2;
    if (edx == 0) {
        goto label_7;
    }
    esi >>= 3;
    ebx = eax - 1;
    edi *= esi;
    ebx *= esi;
    ebx += ecx;
    edi += ecx;
    *((esp + 0x18)) = 0;
    if (eax <= 0) {
        goto label_8;
    }
label_0:
    eax = esp + 0x38;
    memcpy (eax, ebx, esi);
    eax = *((esp + 0x3c));
    if (eax <= 0) {
        goto label_9;
    }
    do {
        memcpy (edi, esp + 0x38, esi);
        edi -= esi;
        ebp--;
    } while (ebp != 0);
    ebp = *((esp + 0x24));
label_9:
    eax = *((esp + 0x18));
    edx = *((esp + 0x2c));
    eax++;
    ebx -= esi;
    *((esp + 0x18)) = eax;
    if (eax < *(edx)) {
        goto label_0;
    }
    goto label_8;
label_7:
    edx = eax - 1;
    edx >>= 1;
    edi >>= 1;
    edx += ecx;
    edi += ecx;
    *((esp + 0x1c)) = edx;
    if ((ebx & 0x10000) != 0) {
        edx |= 0xffffffff;
        ecx = eax*4;
        edx -= ecx;
        esi |= 0xffffffff;
        ecx = ebp*4;
        esi -= ecx;
        edx &= 4;
        esi &= 4;
        *((esp + 0x14)) = 4;
        ebp = 0;
        *((esp + 0x20)) = 0xfffffffc;
    } else {
        edx = eax - 1;
        edx &= 1;
        ebp += 0xffffffff;
        edx += edx;
        edx += edx;
        ebp &= 1;
        ebp += ebp;
        ecx = edx;
        edx = 4;
        ebp += ebp;
        esi = 4;
        edx -= ecx;
        esi -= ebp;
        *((esp + 0x14)) = 0;
        *((esp + 0x20)) = ebp;
    }
    *((esp + 0x28)) = 0;
    if (eax <= 0) {
        goto label_10;
    }
label_1:
    eax = *((esp + 0x1c));
    al = *(eax);
    cl = dl;
    al >>= cl;
    ecx = *((esp + 0x30));
    al &= 0xf;
    *((esp + 0x13)) = al;
    if (ecx <= 0) {
        goto label_11;
    }
    *((esp + 0x18)) = ecx;
    while (esi != 0) {
        al = *((esp + 0x13));
        ecx = 4;
        ecx -= esi;
        ebx = 0xf0f;
        ebx >>= cl;
        ecx = esi;
        al <<= cl;
        bl &= *(edi);
        bl |= al;
        *(edi) = bl;
        if (esi == ebp) {
            esi = *((esp + 0x14));
            edi--;
        } else {
            esi += *((esp + 0x20));
        }
    }
label_11:
    if (edx == ebp) {
        edx = *((esp + 0x14));
    } else {
        edx += *((esp + 0x20));
    }
    eax = *((esp + 0x28));
    ecx = *((esp + 0x2c));
    eax++;
    *((esp + 0x28)) = eax;
    if (eax < *(ecx)) {
        goto label_1;
    }
    goto label_10;
label_6:
    edx = eax - 1;
    edx >>= 2;
    edi >>= 2;
    edx += ecx;
    edi += ecx;
    *((esp + 0x14)) = edx;
    if ((ebx & 0x10000) != 0) {
        edx = eax + eax - 1;
        esi = ebp + ebp - 1;
        edx &= 6;
        esi &= 6;
        *((esp + 0x1c)) = 6;
        *((esp + 0x20)) = 0;
        *((esp + 0x24)) = 0xfffffffe;
    } else {
        ecx = eax - 1;
        ecx &= 3;
        edx = 3;
        edx -= ecx;
        ecx = ebp - 1;
        ecx &= 3;
        esi = 3;
        esi -= ecx;
        edx += edx;
        esi += esi;
        *((esp + 0x1c)) = 0;
        *((esp + 0x20)) = 6;
        *((esp + 0x24)) = 2;
    }
    *((esp + 0x18)) = 0;
    if (eax <= 0) {
        goto label_8;
    }
label_2:
    eax = *((esp + 0x14));
    al = *(eax);
    cl = dl;
    al >>= cl;
    ecx = *((esp + 0x30));
    al &= 3;
    *((esp + 0x13)) = al;
    if (ecx <= 0) {
        goto label_12;
    }
    *((esp + 0x28)) = ecx;
    while (esi != 0) {
        al = *((esp + 0x13));
        ecx = 6;
        ecx -= esi;
        ebx = 0x3f3f;
        ebx >>= cl;
        ecx = esi;
        al <<= cl;
        bl &= *(edi);
        bl |= al;
        *(edi) = bl;
        if (esi == *((esp + 0x20))) {
            esi = *((esp + 0x1c));
            edi--;
        } else {
            esi += *((esp + 0x24));
        }
    }
label_12:
    if (edx == *((esp + 0x20))) {
        edx = *((esp + 0x1c));
    } else {
        edx += *((esp + 0x24));
    }
    eax = *((esp + 0x18));
    ecx = *((esp + 0x2c));
    eax++;
    *((esp + 0x18)) = eax;
    if (eax < *(ecx)) {
        goto label_2;
    }
    goto label_8;
label_5:
    edx = eax - 1;
    edx >>= 3;
    edi >>= 3;
    edx += ecx;
    edi += ecx;
    *((esp + 0x1c)) = edx;
    if ((ebx & 0x10000) != 0) {
        esi = ebp - 1;
        edx = eax - 1;
        edx &= 7;
        esi &= 7;
        *((esp + 0x20)) = 7;
        ebp = 0;
        *((esp + 0x18)) = 0xffffffff;
    } else {
        ebp += 0xffffffff;
        ecx = eax - 1;
        ecx &= 7;
        edx = 7;
        ebp &= 7;
        esi = 7;
        edx -= ecx;
        esi -= ebp;
        *((esp + 0x20)) = 0;
        *((esp + 0x18)) = 1;
    }
    *((esp + 0x14)) = edx;
    *((esp + 0x34)) = 0;
    if (eax <= 0) {
        goto label_10;
    }
label_3:
    eax = *((esp + 0x1c));
    al = *(eax);
    cl = dl;
    al >>= cl;
    ecx = *((esp + 0x30));
    al &= 1;
    if (ecx <= 0) {
        goto label_13;
    }
    *((esp + 0x28)) = ecx;
    while (esi != 0) {
        ecx = 7;
        ecx -= esi;
        edx = 0x7f7f;
        edx >>= cl;
        bl = al;
        ecx = esi;
        bl <<= cl;
        dl &= *(edi);
        dl |= bl;
        *(edi) = dl;
        if (esi == ebp) {
            esi = *((esp + 0x20));
            edi--;
        } else {
            esi += *((esp + 0x18));
        }
    }
    edx = *((esp + 0x14));
label_13:
    if (edx == ebp) {
        edx = *((esp + 0x20));
    } else {
        edx += *((esp + 0x18));
    }
    eax = *((esp + 0x34));
    ecx = *((esp + 0x2c));
    eax++;
    *((esp + 0x14)) = edx;
    *((esp + 0x34)) = eax;
    if (eax < *(ecx)) {
        goto label_3;
    }
label_10:
    ebp = *((esp + 0x24));
label_8:
    ecx = *((esp + 0x2c));
    al = *((ecx + 0xb));
    *(ecx) = ebp;
    eax = (int32_t) al;
    if (al >= 8) {
        eax >>= 3;
        eax *= ebp;
    } else {
        eax *= ebp;
        eax += 7;
        eax >>= 3;
    }
    *((ecx + 4)) = eax;
label_4:
    ecx = *((esp + 0x34));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4109d0 */
#include <stdint.h>
 
int32_t fcn_004109d0 (int32_t arg_4h) {
    eax = *((esp + 4));
    if (*((eax + 0x123)) != 0) {
        *((eax + 0x70)) |= 2;
        eax = 7;
        return eax;
    }
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4064b0 */
#include <stdint.h>
 
uint32_t fcn_004064b0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = *((esp + 8));
    if ((*((esi + 0x6c)) & 0x40) == 0) {
        fcn_00409a60 (esi);
    }
    cl = 7;
    edx = 2;
    if (*((esi + 0x123)) == 0) {
        goto label_5;
    }
    if ((*((esi + 0x70)) & dl) == 0) {
        goto label_5;
    }
    eax = *((esi + 0x124));
    if (eax > 6) {
        goto label_5;
    }
    /* switch table (7 cases) at 0x406998 */
    if ((*((esi + 0xe4)) & cl) == 0) {
        goto label_5;
    }
    eax = *((esp + 0x10));
    if (eax == 0) {
        goto label_1;
    }
    ecx = *(0x416540);
label_2:
label_0:
    fcn_00409130 (esi, eax, ecx);
    do {
label_1:
        fcn_0040c120 (esi);
        return eax;
        if ((*((esi + 0xe4)) & cl) == 0) {
            if (*((esi + 0xc8)) >= 5) {
                goto label_5;
            }
        }
        eax = *((esp + 0x10));
    } while (eax == 0);
    edx = *(0x416544);
    goto label_0;
    eax = *((esi + 0xe4));
    edx = *((esi + 0xe4));
    dl &= cl;
    if (dl == 4) {
        goto label_5;
    }
    ecx = *((esp + 0x10));
    if (ecx == 0) {
        goto label_1;
    }
    if ((al & 4) == 0) {
        goto label_1;
    }
    eax = *(0x416548);
    fcn_00409130 (esi, ecx, eax);
    fcn_0040c120 (esi);
    return eax;
    eax = 3;
    if ((*((esi + 0xe4)) & al) == 0) {
        if (*((esi + 0xc8)) >= eax) {
            goto label_5;
        }
    }
    eax = *((esp + 0x10));
    if (eax == 0) {
        goto label_1;
    }
    ecx = "3";
    goto label_2;
    eax = *((esi + 0xe4));
    ecx = *((esi + 0xe4));
    cl &= 3;
    if (cl == dl) {
        goto label_5;
    }
    ecx = *((esp + 0x10));
    if (ecx == 0) {
        goto label_1;
    }
    if ((dl & al) == 0) {
        goto label_1;
    }
    edx = *(0x416550);
    fcn_00409130 (esi, ecx, edx);
    fcn_0040c120 (esi);
    return eax;
    if ((*((esi + 0xe4)) & 1) == 0) {
        if (*((esi + 0xc8)) >= edx) {
            goto label_5;
        }
    }
    eax = *((esp + 0x10));
    if (eax == 0) {
        goto label_1;
    }
    ecx = *(0x416554);
    goto label_2;
    if ((*((esi + 0xe4)) & 1) == 0) {
        goto label_1;
    }
label_5:
    if ((*((esi + 0x68)) & 4) == 0) {
        fcn_00408740 (esi, "Invalid attempt to read row data");
    }
    edx = *((esi + 0xec));
    eax = *((esi + 0xdc));
    *((esi + 0x80)) = edx;
    *((esi + 0x84)) = eax;
    edi = esi + 0x74;
label_4:
    if (*((esi + 0x78)) != 0) {
        goto label_6;
    }
    if (*((esi + 0x10c)) != 0) {
        goto label_7;
    }
    ebp = esi + 0x11c;
label_3:
    fcn_00409d50 (esi, 0);
    ecx = esp + 0x20;
    fcn_004088c0 (esi);
    eax = fcn_00409d20 (esi, esp + 0x28);
    *((esi + 0x10c)) = eax;
    fcn_00407dd0 (esi);
    fcn_00408ca0 (esi, ebp, 4);
    eax = 4;
    ecx = "IDAT";
    edx = ebp;
    do {
        edi = *(edx);
        if (edi != *(ecx)) {
            goto label_8;
        }
        eax -= 4;
        ecx += 4;
        edx += 4;
    } while (eax >= 4);
    if (eax != 0) {
label_8:
        edi = *(edx);
        ebx = *(ecx);
        edi -= ebx;
        if (edi == 0) {
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_9;
            }
            edi = *(edx);
            ebx = *(ecx);
            edi -= ebx;
            if (edi != 0) {
                goto label_10;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_9;
            }
            edi = *(edx);
            ebx = *(ecx);
            edi -= ebx;
            if (edi != 0) {
                goto label_10;
            }
            eax--;
            ecx++;
            edx++;
            if (eax == 0) {
                goto label_9;
            }
            edi = *(edx);
            eax = *(ecx);
            edi -= eax;
            if (edi == 0) {
                goto label_9;
            }
        }
label_10:
        eax = 1;
        if (edi > 0) {
            goto label_11;
        }
        eax |= 0xffffffff;
    } else {
label_9:
        eax = 0;
    }
label_11:
    if (eax != 0) {
        fcn_00408740 (esi, "Not enough image data");
    }
    if (*((esi + 0x10c)) == 0) {
        goto label_3;
    }
label_7:
    eax = *((esi + 0xb0));
    ecx = *((esi + 0x10c));
    edx = *((esi + 0xac));
    edi = esi + 0x74;
    *((esi + 0x78)) = eax;
    *(edi) = edx;
    if (eax > ecx) {
        *((esi + 0x78)) = ecx;
    }
    ecx = *((esi + 0x78));
    fcn_00408ca0 (esi, edx, ecx);
    edx = *((esi + 0x78));
    *((esi + 0x10c)) -= edx;
label_6:
    eax = fcn_00412d50 (edi, 1);
    if (eax == 1) {
        goto label_12;
    }
    if (eax != 0) {
        eax = *((esi + 0x8c));
        if (eax == 0) {
            eax = "Decompression error";
        }
        fcn_00408740 (esi, eax);
    }
    if (*((esi + 0x84)) != 0) {
        goto label_4;
    }
    goto label_13;
label_12:
    if (*((esi + 0x84)) == 0) {
        if (*((esi + 0x78)) != 0) {
            goto label_14;
        }
        if (*((esi + 0x10c)) == 0) {
            goto label_15;
        }
    }
label_14:
    fcn_00408740 (esi, "Extra compressed data");
label_15:
    *((esi + 0x68)) |= 8;
    *((esi + 0x6c)) |= 0x20;
label_13:
    eax = *((esi + 0x126));
    ecx = *((esi + 0xe0));
    dl = *((esi + 0x12a));
    *((esi + 0x108)) = al;
    eax = *((esi + 0x127));
    *((esi + 0x109)) = al;
    al = *((esi + 0x129));
    edi = esi + 0x100;
    *((esi + 0x10b)) = al;
    *(edi) = ecx;
    *((esi + 0x10a)) = dl;
    eax = (int32_t) al;
    if (al >= 8) {
        eax >>= 3;
        eax *= ecx;
    } else {
        eax *= ecx;
        eax += 7;
        eax >>= 3;
    }
    *((esi + 0x104)) = eax;
    eax = *((esi + 0xec));
    cl = *(eax);
    if (cl != 0) {
        edx = *((esi + 0xe8));
        ecx = (int32_t) cl;
        edx++;
        eax++;
        fcn_00409860 (esi, edi, eax, edx, ecx);
    }
    eax = *((esi + 0xd8));
    ecx = *((esi + 0xec));
    edx = *((esi + 0xe8));
    eax++;
    fcn_00408af0 (esi, edx, ecx);
    if ((*((esi + 0x230)) & 4) != 0) {
        if (*((esi + 0x238)) != 0x40) {
            goto label_16;
        }
        eax = *((esi + 0xec));
        eax++;
        fcn_0040f880 (edi, eax);
    }
label_16:
    if (*((esi + 0x70)) == 0) {
        if ((*((esi + 0x6c)) & 0x400000) == 0) {
            goto label_17;
        }
    }
    fcn_00410530 (esi);
label_17:
    if (*((esi + 0x123)) != 0) {
        if ((*((esi + 0x70)) & 2) != 0) {
            if (*((esi + 0x124)) < 6) {
                fcn_00409430 (esi);
            }
            eax = *((esp + 0x10));
            if (eax != 0) {
                ecx = *((esi + 0x124));
                edx = *((ecx*4 + 0x416540));
                fcn_00409130 (esi, eax, edx);
            }
            eax = *((esp + 0xc));
            if (eax == 0) {
                goto label_18;
            }
            ecx = *((esi + 0x124));
            edx = *((ecx*4 + 0x416524));
        }
    } else {
        eax = *((esp + 0xc));
        if (eax != 0) {
            fcn_00409130 (esi, eax, 0xff);
        }
        eax = *((esp + 0x10));
        if (eax == 0) {
            goto label_18;
        }
    }
    fcn_00409130 (esi, eax, 0xff);
label_18:
    fcn_0040c120 (esi);
    eax = *((esi + 0x198));
    if (eax != 0) {
        ecx = *((esi + 0x124));
        edx = *((esi + 0xe4));
        void (*eax)(uint32_t, uint32_t, uint32_t) (esi, edx, ecx);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408230 */
#include <stdint.h>
 
int32_t fcn_00408230 (int32_t arg_8h_2, int32_t arg_8h) {
    eax = *((esp + 8));
    esi = *((esp + 8));
    fcn_00407e80 (esi, eax, 0x7fff, 0xffffffffffffffff);
    if (*((esi + 0x220)) != 0) {
        ecx = *((esi + 0x224));
        fcn_00408bf0 (esi, ecx);
        *((esi + 0x224)) = 0;
        *((esi + 0x220)) = 0;
    }
    edx = esp + 0xc;
    fcn_00407e40 (edx, 0x120);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x407e80 */
#include <stdint.h>
 
int32_t fcn_00407e80 (int32_t arg_ch, int32_t arg_14h, int32_t arg_1ch, uint32_t arg_20h) {
    do {
label_1:
        edi = *((esp + 0xc));
        ebx = 0;
        if (edi == ebx) {
            goto label_2;
        }
        esi = *((esp + 0x14));
        if (esi == ebx) {
            goto label_3;
        }
        eax = *((esi + 0xb8));
        ebp = *((esp + 0x1c));
        eax &= ebp;
        if ((eax & 0x4000) == 0) {
            goto label_4;
        }
        ecx = *((esp + 0x20));
        if (ecx != -1) {
            eax = *((esi + 0x38));
            if (eax == ebx) {
                goto label_4;
            }
            ebp <<= 4;
            eax = *((eax + ebp + 4));
            if (eax == ebx) {
                goto label_5;
            }
            fcn_00408bf0 (edi, eax);
            ecx = *((esi + 0x38));
            *((ecx + ebp + 4)) = ebx;
            goto label_6;
        }
        ebp = 0;
        if (*((esi + 0x30)) <= ebx) {
            goto label_7;
        }
label_0:
        fcn_00407e80 (edi, esi, 0x4000, ebp);
    } while (1);
    ebp++;
    if (ebp < *((esi + 0x30))) {
        goto label_0;
    }
label_7:
    edx = *((esi + 0x38));
    fcn_00408bf0 (edi, edx);
    *((esi + 0x38)) = ebx;
    *((esi + 0x30)) = ebx;
label_6:
label_5:
    ebp = *((esp + 0x1c));
label_4:
    eax = *((esi + 0xb8));
    eax &= ebp;
    if ((eax & 0x2000) != 0) {
        ecx = *((esi + 0x4c));
        fcn_00408bf0 (edi, ecx);
        *((esi + 8)) &= 0xffffffef;
        *((esi + 0x4c)) = ebx;
    }
    eax = *((esi + 0xb8));
    eax &= ebp;
    if ((eax & 0x100) != 0) {
        *((esi + 8)) &= 0xffffbfff;
    }
    if (al >= 0) {
        goto label_8;
    }
    edx = *((esi + 0xa0));
    fcn_00408bf0 (edi, edx);
    eax = *((esi + 0xac));
    fcn_00408bf0 (edi, eax);
    *((esi + 0xa0)) = ebx;
    *((esi + 0xac)) = ebx;
    if (*((esi + 0xb0)) == ebx) {
        goto label_9;
    }
    ebp = 0;
    if (*((esi + 0xb5)) <= bl) {
        goto label_10;
    }
    do {
        ecx = *((esi + 0xb0));
        edx = *((ecx + ebp*4));
        fcn_00408bf0 (edi, edx);
        eax = *((esi + 0xb0));
        *((eax + ebp*4)) = ebx;
        ecx = *((esi + 0xb5));
        ebp++;
    } while (ebp < ecx);
label_10:
    edx = *((esi + 0xb0));
    fcn_00408bf0 (edi, edx);
    ebp = *((esp + 0x24));
    *((esi + 0xb0)) = ebx;
label_9:
    *((esi + 8)) &= 0xfffffbff;
label_8:
    eax = *((esi + 0xb8));
    eax &= ebp;
    if ((al & 0x10) != 0) {
        ecx = *((esi + 0xc4));
        fcn_00408bf0 (edi, ecx);
        edx = *((esi + 0xc8));
        fcn_00408bf0 (edi, edx);
        *((esi + 8)) &= 0xffffefff;
        *((esi + 0xc4)) = ebx;
        *((esi + 0xc8)) = ebx;
    }
    eax = *((esi + 0xb8));
    eax &= ebp;
    if ((al & 0x20) == 0) {
        goto label_11;
    }
    ecx = *((esp + 0x20));
    if (ecx != -1) {
        eax = *((esi + 0xd4));
        if (eax == ebx) {
            goto label_11;
        }
        ebp <<= 4;
        ecx = *((eax + ebp));
        fcn_00408bf0 (edi, ecx);
        edx = *((esi + 0xd4));
        eax = *((edx + ebp + 8));
        fcn_00408bf0 (edi, eax);
        ecx = *((esi + 0xd4));
        *((ecx + ebp)) = ebx;
        edx = *((esi + 0xd4));
        *((edx + ebp + 8)) = ebx;
        ebp = *((esp + 0x2c));
        goto label_11;
    }
    eax = *((esi + 0xd8));
    if (eax == ebx) {
        goto label_12;
    }
    ebp = 0;
    if (eax <= ebx) {
        goto label_13;
    }
    do {
        fcn_00407e80 (edi, esi, 0x20, ebp);
        goto label_1;
        ebp++;
    } while (ebp < *((esi + 0xd8)));
label_13:
    eax = *((esi + 0xd4));
    fcn_00408bf0 (edi, eax);
    ebp = *((esp + 0x24));
    *((esi + 0xd4)) = ebx;
    *((esi + 0xd8)) = ebx;
label_12:
    *((esi + 8)) &= 0xffffdfff;
label_11:
    ecx = *((esi + 0xb8));
    ecx &= ebp;
    if ((ecx & 0x200) == 0) {
        goto label_14;
    }
    ecx = *((esp + 0x20));
    if (ecx != -1) {
        eax = *((esi + 0xbc));
        if (eax == ebx) {
            goto label_14;
        }
        ebp = ecx * 5;
        ebp += ebp;
        ebp += ebp;
        edx = *((eax + ebp + 8));
        fcn_00408bf0 (edi, edx);
        eax = *((esi + 0xbc));
        *((eax + ebp + 8)) = ebx;
        goto label_15;
    }
    eax = *((esi + 0xc0));
    if (eax == ebx) {
        goto label_14;
    }
    ebp = 0;
    if (eax <= ebx) {
        goto label_16;
    }
    do {
        fcn_00407e80 (edi, esi, 0x200, ebp);
        goto label_1;
        ebp++;
    } while (ebp < *((esi + 0xc0)));
label_16:
    ecx = *((esi + 0xbc));
    fcn_00408bf0 (edi, ecx);
    *((esi + 0xbc)) = ebx;
    *((esi + 0xc0)) = ebx;
label_15:
    ebp = *((esp + 0x24));
label_14:
    edx = *((esi + 0xb8));
    edx &= ebp;
    if ((dl & 8) != 0) {
        eax = *((esi + 0x7c));
        fcn_00408bf0 (edi, eax);
        *((esi + 8)) &= 0xffffffbf;
        *((esi + 0x7c)) = ebx;
    }
    ecx = *((esi + 0xb8));
    ecx &= ebp;
    if ((ecx & 0x1000) != 0) {
        edx = *((esi + 0x10));
        fcn_00407dc0 ();
        *((esi + 8)) &= 0xfffffff7;
        *((esi + 0x10)) = ebx;
        *((esi + 0x14)) = bx;
    }
    eax = *((esi + 0xb8));
    eax &= ebp;
    if ((al & 0x40) == 0) {
        goto label_17;
    }
    if (*((esi + 0xf8)) == ebx) {
        goto label_18;
    }
    ebp = 0;
    if (*((esi + 4)) <= ebx) {
        goto label_19;
    }
    do {
        ecx = *((esi + 0xf8));
        edx = *((ecx + ebp*4));
        fcn_00408bf0 (edi, edx);
        eax = *((esi + 0xf8));
        *((eax + ebp*4)) = ebx;
        ebp++;
    } while (ebp < *((esi + 4)));
label_19:
    ecx = *((esi + 0xf8));
    fcn_00408bf0 (edi, ecx);
    ebp = *((esp + 0x24));
    *((esi + 0xf8)) = ebx;
label_18:
    *((esi + 8)) &= 0xffff7fff;
label_17:
    if (*((esp + 0x20)) != -1) {
        ebp &= 0xffffbddf;
    }
    ebp = ~ebp;
    *((esi + 0xb8)) &= ebp;
label_3:
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x407dc0 */
#include <stdint.h>
 
void fcn_00407dc0 (void) {
    return void (*0x408bf0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x414340 */
#include <stdint.h>
 
int32_t fcn_00414340 (int32_t arg_8h) {
    esi = *((esp + 8));
    if (esi != 0) {
        eax = *((esi + 0x1c));
        if (eax == 0) {
            goto label_0;
        }
        ecx = *((esi + 0x24));
        if (ecx == 0) {
            goto label_0;
        }
        eax = *((eax + 0x34));
        if (eax != 0) {
            eax = *((esi + 0x28));
            void (*ecx)(uint32_t, uint32_t) (eax, eax);
        }
        ecx = *((esi + 0x1c));
        edx = *((esi + 0x28));
        eax = *((esi + 0x24));
        eax = void (*eax)(uint32_t, uint32_t) (edx, ecx);
        *((esi + 0x1c)) = 0;
        eax = 0;
        return eax;
    }
label_0:
    eax = 0xfffffffe;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x407890 */
#include <stdint.h>
 
int32_t fcn_00407890 (int32_t arg_48h, int32_t arg_8h, int32_t arg_5ch) {
    int32_t var_30h;
    eax = *((esp + 8));
    ebx = *((esp + 0x48));
    if (eax != 0) {
        fcn_00408230 (ebx, eax);
    }
    eax = *((esp + 0x5c));
    if (eax != 0) {
        fcn_00408230 (ebx, eax);
    }
    eax = *((ebx + 0xac));
    fcn_00408bf0 (ebx, eax);
    ecx = *((ebx + 0x250));
    fcn_00408bf0 (ebx, ecx);
    edx = *((ebx + 0xe8));
    fcn_00408bf0 (ebx, edx);
    eax = *((ebx + 0x1ec));
    fcn_00408bf0 (ebx, eax);
    ecx = *((ebx + 0x1f0));
    fcn_00408bf0 (ebx, ecx);
    edx = *((ebx + 0x164));
    fcn_00408bf0 (ebx, edx);
    eax = *((ebx + 0x168));
    fcn_00408bf0 (ebx, eax);
    ecx = *((ebx + 0x16c));
    fcn_00408bf0 (ebx, ecx);
    if ((*((ebx + 0x214)) & 0x1000) != 0) {
        edx = *((ebx + 0x114));
        fcn_00407dc0 ();
    }
    *((ebx + 0x214)) &= 0xffffefff;
    if ((*((ebx + 0x214)) & 0x2000) != 0) {
        eax = *((ebx + 0x188));
        fcn_00408bf0 (ebx, eax);
    }
    *((ebx + 0x214)) &= 0xffffdfff;
    eax = *((ebx + 0x214));
    if ((al & 8) != 0) {
        ecx = *((ebx + 0x1f4));
        fcn_00408bf0 (ebx, ecx);
    }
    *((ebx + 0x214)) &= 0xfffffff7;
    if (*((ebx + 0x170)) == 0) {
        goto label_0;
    }
    ecx = 8;
    ecx -= *((ebx + 0x158));
    esi = 1;
    esi <<= cl;
    edi = 0;
    if (esi <= 0) {
        goto label_1;
    }
    while (edi < esi) {
        edx = *((ebx + 0x170));
        eax = *((edx + edi*4));
        fcn_00408bf0 (ebx, eax);
        edi++;
    }
label_1:
    ecx = *((ebx + 0x170));
    fcn_00408bf0 (ebx, ecx);
label_0:
    if (*((ebx + 0x174)) == 0) {
        goto label_2;
    }
    ecx = 8;
    ecx -= *((ebx + 0x158));
    esi = 1;
    esi <<= cl;
    edi = 0;
    if (esi <= 0) {
        goto label_3;
    }
    while (edi < esi) {
        edx = *((ebx + 0x174));
        eax = *((edx + edi*4));
        fcn_00408bf0 (ebx, eax);
        edi++;
    }
label_3:
    ecx = *((ebx + 0x174));
    fcn_00408bf0 (ebx, ecx);
label_2:
    if (*((ebx + 0x178)) == 0) {
        goto label_4;
    }
    ecx = 8;
    ecx -= *((ebx + 0x158));
    esi = 1;
    esi <<= cl;
    edi = 0;
    if (esi <= 0) {
        goto label_5;
    }
    while (edi < esi) {
        edx = *((ebx + 0x178));
        eax = *((edx + edi*4));
        fcn_00408bf0 (ebx, eax);
        edi++;
    }
label_5:
    ecx = *((ebx + 0x178));
    fcn_00408bf0 (ebx, ecx);
label_4:
    edx = *((ebx + 0x210));
    fcn_00408bf0 (ebx, edx);
    fcn_00414340 (ebx + 0x74);
    ecx = *((ebx + 0x1b0));
    fcn_00408bf0 (ebx, ecx);
    edx = *((ebx + 0x1e4));
    fcn_00408bf0 (ebx, edx);
    eax = *((ebx + 0x24c));
    ebp = *((ebx + 0x48));
    ecx = 0x10;
    esi = ebx;
    edi = esp + 0x30;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    esi = *((ebx + 0x40));
    edi = *((ebx + 0x44));
    memset (ebx, 0);
    ecx = *((esp + 0x80));
    *((ebx + 0x40)) = esi;
    *((ebx + 0x44)) = edi;
    *((ebx + 0x24c)) = ecx;
    edi = ebx;
    ecx = 0x10;
    esi = esp + 0x10;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    *((ebx + 0x48)) = ebp;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408490 */
#include <stdint.h>
 
int32_t fcn_00408490 (int32_t arg_2ch, int32_t arg_30h) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    jmp_buf env;
    int32_t var_20h;
    int32_t var_24h_2;
    int32_t var_25h;
    int32_t var_26h;
    int32_t var_23h;
    int32_t var_28h;
    int32_t var_24h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x24)) = eax;
    eax = *((esp + 0x2c));
    *((esp + 0xc)) = eax;
    eax = *((esp + 0x30));
    if (*(eax) != 0x23) {
        goto label_0;
    }
    ecx = esp + 0x23;
    ecx -= eax;
    *((esp + 0x10)) = ecx;
    ebx = esp + 0x24;
    edi = esp + 0x25;
    ebp = esp + 0x26;
    ebx -= eax;
    ebp -= eax;
    ecx = esp + 0x28;
    esi = 0;
    edi -= eax;
    ecx -= eax;
    *((esp + 0x18)) = ebx;
    *((esp + 0x20)) = ebp;
    *((esp + 0x14)) = ecx;
    while (esi < 0xf) {
        ebp = *((esp + 0x20));
        ebx = *((esp + 0x18));
        dl = *((eax + esi + 1));
        ecx = eax + esi;
        *((ebx + ecx)) = dl;
        if (*((eax + esi)) == 0x20) {
            goto label_1;
        }
        bl = *((eax + esi + 2));
        *((edi + ecx)) = bl;
        if (dl == 0x20) {
            goto label_2;
        }
        dl = *((eax + esi + 3));
        *((ecx + ebp)) = dl;
        if (bl == 0x20) {
            goto label_3;
        }
        bl = *((eax + esi + 4));
        ebp = *((esp + 0x10));
        *((ecx + ebp)) = bl;
        if (dl == 0x20) {
            goto label_4;
        }
        dl = *((eax + esi + 5));
        ebp = *((esp + 0x14));
        *((ecx + ebp)) = dl;
        if (bl == 0x20) {
            goto label_5;
        }
        esi += 5;
    }
    goto label_1;
label_2:
    esi++;
    goto label_1;
label_3:
    esi += 2;
    goto label_1;
label_4:
    esi += 3;
    goto label_1;
label_5:
    esi += 4;
label_1:
    ecx = esi - 2;
    if (ecx <= 0xc) {
        eax += esi;
        edx = esp + 0x1c;
        _iob_func (0);
    } else {
    }
    eax = _iob_func ("libpng error: %s, offset=%d\n", eax, esi);
    eax += 0x40;
    eax = fprintf (rdi, rsi);
    goto label_6;
label_0:
    eax = _iob_func (0x4165e4, eax);
    eax += 0x40;
    fprintf (rdi, rsi);
label_6:
    eax = *((esp + 0x10));
    longjmp (eax, 1);
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4085c0 */
#include <stdint.h>
 
int32_t fcn_004085c0 (int32_t arg_28h) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h_2;
    int32_t var_21h;
    int32_t var_22h;
    int32_t var_1fh;
    int32_t var_24h;
    int32_t var_20h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x20)) = eax;
    eax = *((esp + 0x28));
    if (*(eax) != 0x23) {
        goto label_0;
    }
    ecx = esp + 0x1f;
    ecx -= eax;
    *((esp + 0x10)) = ecx;
    ebx = esp + 0x20;
    edi = esp + 0x21;
    ebp = esp + 0x22;
    ebx -= eax;
    ebp -= eax;
    ecx = esp + 0x24;
    esi = 0;
    edi -= eax;
    ecx -= eax;
    *((esp + 0x1c)) = ebx;
    *((esp + 0x14)) = ebp;
    *((esp + 0x18)) = ecx;
    while (esi < 0xf) {
        ebp = *((esp + 0x14));
        ebx = *((esp + 0x1c));
        dl = *((eax + esi + 1));
        ecx = eax + esi;
        *((ebx + ecx)) = dl;
        if (*((eax + esi)) == 0x20) {
            goto label_1;
        }
        bl = *((eax + esi + 2));
        *((edi + ecx)) = bl;
        if (dl == 0x20) {
            goto label_2;
        }
        dl = *((eax + esi + 3));
        *((ecx + ebp)) = dl;
        if (bl == 0x20) {
            goto label_3;
        }
        bl = *((eax + esi + 4));
        ebp = *((esp + 0x10));
        *((ecx + ebp)) = bl;
        if (dl == 0x20) {
            goto label_4;
        }
        dl = *((eax + esi + 5));
        ebp = *((esp + 0x18));
        *((ecx + ebp)) = dl;
        if (bl == 0x20) {
            goto label_5;
        }
        esi += 5;
    }
    goto label_1;
label_2:
    esi++;
    goto label_1;
label_3:
    esi += 2;
    goto label_1;
label_4:
    esi += 3;
    goto label_1;
label_5:
    esi += 4;
label_1:
    ecx = esi - 2;
    if (ecx <= 0xc) {
        eax += esi;
        eax = _iob_func ("libpng warning no. %s: %s\n", esp + 0x24, eax);
        eax += 0x40;
        fprintf (rdi, rsi);
        ecx = *((esp + 0x20));
        ecx ^= esp;
        eax = fcn_00412237 ();
        return eax;
    }
    eax = _iob_func ("libpng warning: %s\n", eax);
    eax += 0x40;
    fprintf (rdi, rsi);
    ecx = *((esp + 0x20));
    ecx ^= esp;
    eax = fcn_00412237 ();
    return eax;
label_0:
    eax = _iob_func ("libpng warning: %s\n", eax);
    eax += 0x40;
    fprintf (rdi, rsi);
    ecx = *((esp + 0x2c));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4083f0 */
#include <stdint.h>
 
int32_t fcn_004083f0 (int32_t arg_ch) {
    ebp = *((esp + 0xc));
    esi = eax;
    eax = 0;
    edi = 0;
    do {
        ecx = *((edi + ebp + 0x11c));
        ebx = ecx - 0x41;
        edi++;
        if (ebx <= 0x39) {
            if (ecx > 0x5a) {
                if (ecx < 0x61) {
                    goto label_0;
                }
            }
            *((eax + esi)) = cl;
        } else {
label_0:
            *((eax + esi)) = 0x5b;
            ebx = ecx;
            ebx >>= 4;
            ebx &= 0xf;
            bl = *((ebx + str.0123456789ABCDEFlibpng_error:__s_n));
            eax++;
            *((eax + esi)) = bl;
            ecx &= 0xf;
            cl = *((ecx + str.0123456789ABCDEFlibpng_error:__s_n));
            eax++;
            *((eax + esi)) = cl;
            eax++;
            *((eax + esi)) = 0x5d;
        }
        eax++;
    } while (edi < 4);
    if (edx == 0) {
        *((eax + esi)) = dl;
        esi = edi;
        ebx = edi;
        return eax;
    }
    *((eax + esi)) = 0x3a;
    eax++;
    *((eax + esi)) = 0x20;
    eax++;
    esi += eax;
    strncpy (esi, edx, 0x3f);
    *((esi + 0x3f)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408ab0 */
#include <stdint.h>
 
int32_t fcn_00408ab0 (uint32_t arg_4h, int32_t arg_8h) {
    if (*((esp + 4)) != 0) {
        eax = *((esp + 8));
        if (eax == 0) {
            goto label_0;
        }
        eax = malloc (eax);
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408c20 */
#include <stdint.h>
 
int32_t fcn_00408c20 (int32_t arg_8h_2, int32_t arg_8h) {
    ecx = *((esp + 8));
    esi = *((esp + 8));
    edi = *((esi + 0x6c));
    eax = *((esi + 0x6c));
    eax |= 0x100000;
    *((esi + 0x6c)) = eax;
    fcn_00408ba0 (esi, ecx);
    *((esi + 0x6c)) = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412af0 */
#include <stdint.h>
 
int32_t fcn_00412af0 (int32_t arg_4h) {
    edx = *((esp + 4));
    ecx = 0;
    if (edx != ecx) {
        eax = *((edx + 0x1c));
        if (eax == ecx) {
            goto label_0;
        }
        *((eax + 0x1c)) = ecx;
        *((edx + 0x14)) = ecx;
        *((edx + 8)) = ecx;
        *((edx + 0x18)) = ecx;
        *((edx + 0x30)) = 1;
        *(eax) = ecx;
        *((eax + 4)) = ecx;
        *((eax + 0xc)) = ecx;
        *((eax + 0x20)) = ecx;
        *((eax + 0x28)) = ecx;
        *((eax + 0x2c)) = ecx;
        *((eax + 0x30)) = ecx;
        *((eax + 0x38)) = ecx;
        *((eax + 0x3c)) = ecx;
        ecx = eax + 0x530;
        *((eax + 0x14)) = 0x8000;
        *((eax + 0x6c)) = ecx;
        *((eax + 0x50)) = ecx;
        *((eax + 0x4c)) = ecx;
        eax = 0;
        return eax;
    }
label_0:
    eax = 0xfffffffe;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40f950 */
#include <stdint.h>
 
uint32_t fcn_0040f950 (int32_t arg_48h, int32_t arg_51h) {
    int32_t var_10h;
    int32_t var_11h;
    int32_t var_12h;
    int32_t var_14h;
    int32_t var_15h;
    int32_t var_16h;
    uint32_t var_18h;
    int32_t var_20h;
    int32_t var_28h;
    esi = *((esp + 0x48));
    ebx = *((esi + 0x126));
    edi = *((esi + 0x70));
    *((esp + 0x18)) = ebx;
    *((esp + 0x4c)) = edi;
    if ((edi & 0x100) == 0) {
        goto label_1;
    }
    if ((edi & 0x1000) == 0) {
        goto label_1;
    }
    if ((bl & 2) != 0) {
        goto label_2;
    }
    eax = *((esi + 0x127));
    eax += 0xffffffff;
    if (eax > 0xf) {
        goto label_1;
    }
    eax = *((eax + 0x410514));
    /* switch table (16 cases) at 0x410500 */
    ax = *((esi + 0x140));
    ax *= 0xff;
    do {
label_0:
        *((esi + 0x140)) = ax;
        *((esi + 0x13c)) = ax;
        *((esi + 0x13a)) = ax;
        goto label_3;
        ax = *((esi + 0x140));
        ax *= 0x55;
    } while (1);
    ax = *((esi + 0x140));
    ax *= 0x11;
    goto label_0;
    eax = *((esi + 0x140));
    *((esi + 0x13c)) = ax;
    *((esi + 0x13a)) = ax;
    goto label_3;
label_2:
    if (ebx == 3) {
        eax = *((esi + 0x138));
        edx = *((esi + 0x114));
        ecx = eax * 3;
        eax = ecx + edx;
        cx = *(eax);
        *((esi + 0x13a)) = cx;
        dx = *((eax + 1));
        *((esi + 0x13c)) = dx;
        ax = *((eax + 2));
label_3:
        *((esi + 0x13e)) = ax;
    }
label_1:
    ecx = *((esi + 0x138));
    edx = *((esi + 0x13c));
    ax = *((esi + 0x140));
    *((esi + 0x142)) = ecx;
    *((esi + 0x146)) = edx;
    *((esi + 0x14a)) = ax;
    if (ebx != 3) {
        goto label_4;
    }
    edx = *((esi + 0x11a));
    if (dx == 0) {
        goto label_4;
    }
    *(fp_stack--) = *((esi + 0x160));
    fp_stack[0] *= *((esi + 0x15c));
    fp_stack[0] -= *(0x41acd0);
    fp_stack[0] = abs(fp_stack[0]);
    fp_status = fp_compare(fp_stack[0], *(0x417608));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        goto label_4;
    }
    ebp = 0;
    ecx = 0;
    if (dx <= 0) {
        goto label_5;
    }
    edi = *((esi + 0x11a));
    edx = *((esi + 0x188));
    do {
        al = *((edx + ecx));
        if (al != 0) {
            if (al == 0xff) {
                goto label_6;
            }
        }
label_6:
        ecx++;
    } while (ecx < edi);
    if (ebp == 0) {
        edi = *((esp + 0x50));
label_5:
        edi &= 0xffffdfff;
        *((esi + 0x70)) = edi;
    }
label_4:
    eax = *((esi + 0x70));
    if ((eax & 0x602000) == 0) {
        goto label_7;
    }
    fcn_0040f160 (esi);
    if ((*((esi + 0x70)) & 0x80) == 0) {
        goto label_8;
    }
    if (ebx != 3) {
        goto label_9;
    }
    ebp = *((esi + 0x118));
    al = *((esi + 0x130));
    *((esp + 0x28)) = ebp;
    if (al == 2) {
        ecx = *((esi + 0x13a));
        eax = *((esi + 0x164));
        edx = *((eax + ecx));
        edi = *((esi + 0x13c));
        *((esp + 0x10)) = dl;
        edx = *((edi + eax));
        *((esp + 0x11)) = dl;
        edx = *((esi + 0x13e));
        al = *((edx + eax));
        *((esp + 0x12)) = al;
        eax = *((esi + 0x16c));
        edx = *((eax + edx));
        bl = *((eax + ecx));
        cl = *((eax + edi));
        *((esp + 0x15)) = cl;
        *((esp + 0x16)) = dl;
        goto label_10;
    }
    eax = (int32_t) al;
    eax--;
    if (eax == 0) {
        goto label_11;
    }
    eax--;
    if (eax == 0) {
        goto label_12;
    }
    eax--;
    if (eax != 0) {
        *(fp_stack--) = 1.0;
        *((esp + 0x20)) = fp_stack[0];
        goto label_13;
    }
    *(fp_stack--) = *((esi + 0x134));
    do {
        *(fp_stack--) = 1.0;
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] /= fp_stack[2];
        *((esp + 0x20)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esi + 0x160));
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        *(fp_stack--) = fp_stack[0];
        fp_stack[2] /= fp_stack[0];
        fp_stack++;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        goto label_14;
label_12:
        *(fp_stack--) = *((esi + 0x15c));
    } while (1);
label_11:
    *(fp_stack--) = *((esi + 0x160));
    *((esp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 1.0;
label_13:
    *(fp_stack--) = fp_stack[0];
label_14:
    *((esp + 0x2c)) = fp_stack[0];
    *(fp_stack--) = fp_stack[0];
    fp_stack[2] -= fp_stack[0];
    fp_stack++;
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_stack[0] = abs(fp_stack[0]);
    fp_status = fp_compare(fp_stack[0], *(0x417608));
    fp_stack++;
    ax = fp_status;
    *(fp_stack--) = *(0x417620);
    if ((ah & 5) != 0) {
        al = *((esi + 0x13a));
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        cl = *((esi + 0x13c));
        dl = *((esi + 0x13e));
        *((esp + 0x10)) = al;
        *((esp + 0x11)) = cl;
    } else {
        eax = *((esi + 0x13a));
        *(fp_stack--) = *((esp + 0x50));
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        _CIpow (eax);
        *(fp_stack--) = *(0x417620);
        edx = *((esi + 0x13c));
        fp_stack[1] *= fp_stack[0];
        eax = *((esp + 0x50));
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
        fp_stack[0] += *(0x41acd8);
        eax |= 0xc00;
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
        cl = *((esp + 0x14));
        *(fp_stack--) = *((esp + 0x50));
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        *(fp_stack--) = *((esp + 0x2c));
        _CIpow (eax);
        *(fp_stack--) = *(0x417620);
        ecx = *((esi + 0x13e));
        fp_stack[1] *= fp_stack[0];
        eax = *((esp + 0x50));
        fp_tmp_4 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_4;
        fp_stack[0] += *(0x41acd8);
        eax |= 0xc00;
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
        al = *((esp + 0x14));
        *(fp_stack--) = *((esp + 0x50));
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        *(fp_stack--) = *((esp + 0x2c));
        _CIpow (eax);
        *(fp_stack--) = *(0x417620);
        eax = *((esp + 0x50));
        fp_stack[1] *= fp_stack[0];
        eax |= 0xc00;
        fp_tmp_5 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_5;
        fp_stack[0] += *(0x41acd8);
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
        dl = *((esp + 0x14));
    }
    eax = *((esi + 0x13a));
    *(fp_stack--) = *((esp + 0x50));
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *(fp_stack--) = *((esp + 0x20));
    _CIpow (eax);
    *(fp_stack--) = *(0x417620);
    ecx = *((esi + 0x13c));
    fp_stack[1] *= fp_stack[0];
    eax = *((esp + 0x50));
    fp_tmp_6 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_6;
    fp_stack[0] += *(0x41acd8);
    eax |= 0xc00;
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    bl = *((esp + 0x14));
    *(fp_stack--) = *((esp + 0x50));
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *(fp_stack--) = *((esp + 0x20));
    _CIpow (eax);
    *(fp_stack--) = *(0x417620);
    fp_stack[1] *= fp_stack[0];
    eax = *((esp + 0x50));
    fp_tmp_7 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_7;
    eax |= 0xc00;
    fp_stack[0] += *(0x41acd8);
    eax = *((esi + 0x13e));
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    dl = *((esp + 0x14));
    *(fp_stack--) = *((esp + 0x50));
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *(fp_stack--) = *((esp + 0x20));
    _CIpow (eax);
    fp_stack[0] *= *(0x417620);
    eax = *((esp + 0x50));
    fp_stack[0] += *(0x41acd8);
    eax |= 0xc00;
    *((esp + 0x20)) = eax;
    *((esp + 0x20)) = fp_stack[0];
    fp_stack--;
    cl = *((esp + 0x20));
    *((esp + 0x16)) = cl;
label_10:
    edi = 0;
    if (ebp <= 0) {
        goto label_15;
    }
    eax = *((esi + 0x114));
    eax += 2;
    do {
        edx = *((esi + 0x11a));
        if (edi < edx) {
            ecx = *((esi + 0x188));
            dl = *((ecx + edi));
            ecx += edi;
            if (dl != 0xff) {
                if (dl == 0) {
                    dx = *((esp + 0x10));
                    cl = *((esp + 0x12));
                    *((eax - 2)) = dx;
                    *(eax) = cl;
                    goto label_16;
                }
                cx = *(ecx);
                ebp = *((esi + 0x16c));
                edx = *((eax - 2));
                edx = *((edx + ebp));
                dx *= cx;
                ebp -= ecx;
                cx = (int16_t) bl;
                bp *= cx;
                dx += bp;
                dx += 0x80;
                ecx = (int32_t) dx;
                ecx = (int32_t) cx;
                edx = ecx;
                edx >>= 8;
                edx += ecx;
                edx >>= 8;
                ecx = (int32_t) dl;
                edx = *((esi + 0x168));
                ecx = *((ecx + edx));
                *((eax - 2)) = cl;
                edx = *((esi + 0x188));
                cx = *((edx + edi));
                edx = *((eax - 1));
                ebp = *((esi + 0x16c));
                edx = *((edx + ebp));
                dx *= cx;
                ebp -= ecx;
                ecx = *((esp + 0x15));
                bp *= cx;
                dx += bp;
                dx += 0x80;
                ecx = (int32_t) dx;
                ecx = (int32_t) cx;
                edx = ecx;
                edx >>= 8;
                edx += ecx;
                edx >>= 8;
                ecx = (int32_t) dl;
                edx = *((esi + 0x168));
                ecx = *((ecx + edx));
                *((eax - 1)) = cl;
                edx = *((esi + 0x188));
                cx = *((edx + edi));
                edx = *(eax);
                ebp = *((esi + 0x16c));
                edx = *((edx + ebp));
                dx *= cx;
                ebp -= ecx;
                ecx = *((esp + 0x16));
                bp *= cx;
                dx += bp;
                ebp = *((esp + 0x28));
                dx += 0x80;
                ecx = (int32_t) dx;
                ecx = (int32_t) cx;
                edx = ecx;
                edx >>= 8;
                edx += ecx;
                edx >>= 8;
                ecx = (int32_t) dl;
                edx = *((esi + 0x168));
                ecx = *((ecx + edx));
                *(eax) = cl;
            }
        } else {
            ecx = *((esi + 0x164));
            edx = *((eax - 2));
            edx = *((edx + ecx));
            ecx = *((eax - 1));
            *((eax - 2)) = dl;
            edx = *((esi + 0x164));
            cl = *((ecx + edx));
            edx = *(eax);
            *((eax - 1)) = cl;
            ecx = *((esi + 0x164));
            edx = *((edx + ecx));
            *(eax) = dl;
        }
label_16:
        edi++;
        eax += 3;
    } while (edi < ebp);
    goto label_15;
label_9:
    cl = *((esi + 0x127));
    eax = 1;
    eax <<= cl;
    eax--;
    *((esp + 0x50)) = eax;
    *(fp_stack--) = *((esp + 0x50));
    if (eax < 0) {
        fp_stack[0] += *(0x417618);
    }
    eax = *((esi + 0x130));
    *((esp + 0x20)) = fp_stack[0];
    eax--;
    *(fp_stack--) = 1.0;
    *(fp_stack--) = fp_stack[0];
    *((esp + 0x2c)) = fp_stack[0];
    fp_tmp_8 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_8;
    *((esp + 0x14)) = fp_stack[0];
    if (eax != 0) {
        eax--;
        if (eax != 0) {
            eax--;
            if (eax != 0) {
                goto label_17;
            }
            fp_stack[1] = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *((esi + 0x134));
        } else {
            fp_stack[1] = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *((esi + 0x15c));
        }
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] /= fp_stack[1];
        *((esp + 0x2c)) = fp_stack[0];
        *(fp_stack--) = *((esi + 0x160));
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_tmp_9 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_9;
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
    } else {
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esi + 0x160));
        *((esp + 0x2c)) = fp_stack[0];
        fp_tmp_10 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_10;
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
        goto label_18;
label_17:
        fp_stack++;
    }
label_18:
    ecx = *((esi + 0x140));
    *(fp_stack--) = *((esp + 0x50));
    fp_stack[2] /= fp_stack[0];
    fp_stack++;
    fp_tmp_11 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_11;
    *((esp + 0x34)) = fp_stack[0];
    fp_tmp_12 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_12;
    _CIpow (ecx);
    fp_stack[0] *= *((esp + 0x20));
    eax = *((esp + 0x50));
    fp_stack[0] += *(0x41acd8);
    eax |= 0xc00;
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    dx = *((esp + 0x28));
    *((esi + 0x14a)) = dx;
    *(fp_stack--) = *((esp + 0x34));
    *(fp_stack--) = *((esp + 0x14));
    _CIpow (eax);
    *(fp_stack--) = *((esp + 0x20));
    edi = *((esi + 0x13c));
    eax = *((esp + 0x50));
    fp_stack[1] *= fp_stack[0];
    fp_tmp_13 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_13;
    ecx = *((esi + 0x13a));
    fp_stack[0] += *(0x41acd8);
    eax |= 0xc00;
    *((esp + 0x28)) = eax;
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    ax = *((esp + 0x28));
    *((esi + 0x140)) = ax;
    if (cx == di) {
        if (cx != *((esi + 0x13e))) {
            goto label_19;
        }
        if (cx != ax) {
            goto label_19;
        }
        ecx = *((esi + 0x14a));
        fp_stack++;
        *((esi + 0x148)) = cx;
        *((esi + 0x146)) = cx;
        *((esi + 0x144)) = cx;
        *((esi + 0x13e)) = ax;
        *((esi + 0x13c)) = ax;
        *((esi + 0x13a)) = ax;
        goto label_15;
    }
label_19:
    eax = (int32_t) cx;
    *(fp_stack--) = *((esp + 0x50));
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 0x34)) = fp_stack[0];
    *(fp_stack--) = *((esp + 0x2c));
    _CIpow (eax);
    *(fp_stack--) = *((esp + 0x20));
    fp_stack[1] *= fp_stack[0];
    edx = (int32_t) di;
    eax = *((esp + 0x50));
    fp_tmp_14 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_14;
    fp_stack[0] += *(0x41acd8);
    eax |= 0xc00;
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    ecx = *((esp + 0x28));
    *((esi + 0x144)) = cx;
    *(fp_stack--) = *((esp + 0x50));
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 0x3c)) = fp_stack[0];
    *(fp_stack--) = *((esp + 0x2c));
    _CIpow (eax);
    *(fp_stack--) = *((esp + 0x20));
    ecx = *((esi + 0x13e));
    fp_stack[1] *= fp_stack[0];
    eax = *((esp + 0x50));
    fp_tmp_15 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_15;
    fp_stack[0] += *(0x41acd8);
    eax |= 0xc00;
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x28));
    *((esi + 0x146)) = ax;
    *(fp_stack--) = *((esp + 0x50));
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 0x44)) = fp_stack[0];
    *(fp_stack--) = *((esp + 0x2c));
    _CIpow (eax);
    fp_stack[0] *= *((esp + 0x20));
    eax = *((esp + 0x50));
    fp_stack[0] += *(0x41acd8);
    eax |= 0xc00;
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    edx = *((esp + 0x28));
    *((esi + 0x148)) = dx;
    *(fp_stack--) = *((esp + 0x34));
    *(fp_stack--) = *((esp + 0x14));
    _CIpow (eax);
    fp_stack[0] *= *((esp + 0x20));
    eax = *((esp + 0x50));
    fp_stack[0] += *(0x41acd8);
    eax |= 0xc00;
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x28));
    *((esi + 0x13a)) = ax;
    *(fp_stack--) = *((esp + 0x3c));
    *(fp_stack--) = *((esp + 0x14));
    _CIpow (eax);
    fp_stack[0] *= *((esp + 0x20));
    eax = *((esp + 0x50));
    fp_stack[0] += *(0x41acd8);
    eax |= 0xc00;
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    ecx = *((esp + 0x28));
    *((esi + 0x13c)) = cx;
    *(fp_stack--) = *((esp + 0x44));
    *(fp_stack--) = *((esp + 0x14));
    _CIpow (eax);
    fp_stack[0] *= *((esp + 0x20));
    eax = *((esp + 0x50));
    fp_stack[0] += *(0x41acd8);
    eax |= 0xc00;
    *((esp + 0x28)) = eax;
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    edx = *((esp + 0x28));
    *((esi + 0x13e)) = dx;
    goto label_15;
label_8:
    if (ebx != 3) {
        goto label_15;
    }
    ecx = *((esi + 0x118));
    eax = *((esi + 0x114));
    if (ecx <= 0) {
        goto label_15;
    }
    eax += 2;
    while (ecx != 0) {
        edx = *((eax - 2));
        edi = *((esi + 0x164));
        edx = *((edx + edi));
        *((eax - 2)) = dl;
        edx = *((eax - 1));
        edi = *((esi + 0x164));
        edx = *((edx + edi));
        *((eax - 1)) = dl;
        edx = *(eax);
        edi = *((esi + 0x164));
        edx = *((edx + edi));
        *(eax) = dl;
        eax += 3;
        ecx--;
    }
    goto label_15;
label_7:
    if (al >= 0) {
        goto label_15;
    }
    if (*((esp + 0x1c)) != 3) {
        goto label_15;
    }
    ebp = *((esi + 0x11a));
    edx = *((esi + 0x13c));
    cl = *((esi + 0x13a));
    eax = *((esi + 0x114));
    edi = 0;
    *((esp + 0x51)) = dl;
    dl = *((esi + 0x13e));
    *((esp + 0x28)) = ebp;
    *((esp + 0x50)) = cl;
    if (ebp <= 0) {
        goto label_15;
    }
    eax += 2;
    do {
        ecx = *((esi + 0x188));
        bl = *((ecx + edi));
        ecx += edi;
        if (bl == 0) {
            cx = *((esp + 0x50));
            *((eax - 2)) = cx;
            *(eax) = dl;
        } else {
            if (bl == 0xff) {
                goto label_20;
            }
            cx = *(ecx);
            bp = *((esp + 0x50));
            ebx = 0xff;
            ebx -= ecx;
            bx *= bp;
            bp = *((eax - 2));
            bp *= cx;
            bx += bp;
            bx += 0x80;
            ecx = (int32_t) bx;
            bp = *((esp + 0x51));
            ecx = (int32_t) cx;
            ebx = ecx;
            ebx >>= 8;
            ebx += ecx;
            ebx >>= 8;
            *((eax - 2)) = bl;
            ecx = *((esi + 0x188));
            cx = *((ecx + edi));
            ebx = 0xff;
            ebx -= ecx;
            bx *= bp;
            bp = *((eax - 1));
            bp *= cx;
            bx += bp;
            bx += 0x80;
            ecx = (int32_t) bx;
            ecx = (int32_t) cx;
            ebx = ecx;
            ebx >>= 8;
            ebx += ecx;
            ebx >>= 8;
            *((eax - 1)) = bl;
            ecx = *((esi + 0x188));
            cx = *((ecx + edi));
            bp = (int16_t) dl;
            ebx = 0xff;
            ebx -= ecx;
            bx *= bp;
            bp = *(eax);
            bp *= cx;
            bx += bp;
            ebp = *((esp + 0x28));
            bx += 0x80;
            ecx = (int32_t) bx;
            ecx = (int32_t) cx;
            ebx = ecx;
            ebx >>= 8;
            ebx += ecx;
            ebx >>= 8;
            *(eax) = bl;
        }
label_20:
        edi++;
        eax += 3;
    } while (edi < ebp);
label_15:
    if ((*((esi + 0x70)) & 8) == 0) {
        goto label_21;
    }
    if (*((esp + 0x18)) != 3) {
        goto label_21;
    }
    eax = *((esi + 0x17c));
    ecx = *((esi + 0x17d));
    edi = *((esi + 0x17e));
    edx = *((esi + 0x118));
    ebx = 8;
    ebx -= eax;
    eax = 8;
    eax -= ecx;
    ecx = 8;
    ecx -= edi;
    edi = 0;
    *((esp + 0x4c)) = eax;
    *((esp + 0x18)) = ecx;
    if (ebx >= edi) {
        if (ebx <= 8) {
            goto label_22;
        }
    }
    ebx = 0;
label_22:
    if (eax >= edi) {
        if (eax <= 8) {
            goto label_23;
        }
    }
    *((esp + 0x4c)) = edi;
label_23:
    if (ecx >= edi) {
        if (ecx <= 8) {
            goto label_24;
        }
    }
    *((esp + 0x18)) = edi;
label_24:
    if (dx <= di) {
        goto label_21;
    }
    eax = 0;
    edi = (int32_t) dx;
    do {
        edx = *((esi + 0x114));
        edx += eax;
        cl = bl;
        *(edx) >>= cl;
        ecx = *((esi + 0x114));
        edx = ecx + eax + 1;
        ecx = *((esp + 0x4c));
        *(edx) >>= cl;
        edx = *((esi + 0x114));
        ecx = *((esp + 0x18));
        *((edx + eax + 2)) >>= cl;
        edx = edx + eax + 2;
        eax += 3;
        edi--;
    } while (edi != 0);
label_21:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40f160 */
#include <stdint.h>
 
uint32_t fcn_0040f160 (int32_t arg_8h) {
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    uint32_t var_20h;
    int32_t var_24h;
    uint32_t var_28h;
    *(fp_stack--) = 0.0;
    esi = *((ebp + 8));
    fp_status = fp_compare(fp_stack[0], *((esi + 0x15c)));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x44) != 0) {
        goto label_4;
    }
    edx = 8;
    if (*((esi + 0x127)) > dl) {
        goto label_5;
    }
    *(fp_stack--) = *((esi + 0x160));
    *(fp_stack--) = *(0x417628);
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) != 0) {
        fp_stack[0] *= *((esi + 0x15c));
        *(fp_stack--) = 1.0;
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
    } else {
        fp_stack++;
        *(fp_stack--) = 1.0;
    }
    *((esp + 0x34)) = fp_stack[0];
    fp_stack--;
    eax = fcn_00408ba0 (esi, 0x100);
    *(fp_stack--) = *(0x417620);
    edi = 0;
    *((esi + 0x164)) = eax;
    do {
        *((esp + 0x18)) /= fp_stack[0];
        *(fp_stack--) = *((esp + 0x30));
        _CIpow (edi);
        *(fp_stack--) = *(0x417620);
        ecx = *((esi + 0x164));
        eax = *((esp + 0xc));
        fp_stack[1] *= fp_stack[0];
        eax |= 0xc00;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        *((esp + 0x20)) = eax;
        edi++;
        fp_stack[0] += *(0x41acd8);
        *((esp + 0x18)) = edi;
        *((esp + 0x20)) = fp_stack[0];
        fp_stack--;
        al = *((esp + 0x20));
        *((edi + ecx - 1)) = al;
    } while (edi < 0x100);
    fp_stack++;
    if ((*((esi + 0x70)) & 0x600080) == 0) {
        goto label_4;
    }
    *(fp_stack--) = *((esi + 0x15c));
    *(fp_stack--) = 1.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 0x38)) = fp_stack[0];
    fp_stack--;
    eax = fcn_00408ba0 (esi, 0x100);
    *(fp_stack--) = *(0x417620);
    edi = 0;
    *((esi + 0x16c)) = eax;
    do {
        *((esp + 0x18)) /= fp_stack[0];
        *(fp_stack--) = *((esp + 0x30));
        _CIpow (edi);
        *(fp_stack--) = *(0x417620);
        edi++;
        eax = *((esp + 0xc));
        fp_stack[1] *= fp_stack[0];
        eax |= 0xc00;
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        *((esp + 0x20)) = eax;
        fp_stack[0] += *(0x41acd8);
        eax = *((esi + 0x16c));
        *((esp + 0x18)) = edi;
        *((esp + 0x20)) = fp_stack[0];
        fp_stack--;
        dl = *((esp + 0x20));
        *((edi + eax - 1)) = dl;
    } while (edi < 0x100);
    fp_stack++;
    eax = fcn_00408ba0 (esi, 0x100);
    *(fp_stack--) = *((esi + 0x160));
    *(fp_stack--) = *(0x417628);
    *((esi + 0x168)) = eax;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) != 0) {
        *(fp_stack--) = 1.0;
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
    } else {
        fp_stack++;
        *(fp_stack--) = *((esi + 0x15c));
    }
    edi = 0;
    *((esp + 0x30)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x417620);
    do {
        *((esp + 0x18)) /= fp_stack[0];
        *(fp_stack--) = *((esp + 0x30));
        _CIpow (edi);
        *(fp_stack--) = *(0x417620);
        edx = *((esi + 0x168));
        eax = *((esp + 0xc));
        fp_stack[1] *= fp_stack[0];
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        eax |= 0xc00;
        *((esp + 0x20)) = eax;
        edi++;
        fp_stack[0] += *(0x41acd8);
        *((esp + 0x18)) = edi;
        *((esp + 0x20)) = fp_stack[0];
        fp_stack--;
        cl = *((esp + 0x20));
        *((edi + edx - 1)) = cl;
    } while (edi < 0x100);
    fp_stack++;
    return eax;
label_5:
    if ((*((esi + 0x126)) & 2) != 0) {
        ecx = *((esi + 0x17c));
        eax = *((esi + 0x17d));
        if (eax > ecx) {
            ecx = eax;
        }
        eax = *((esi + 0x17e));
        if (eax <= ecx) {
            goto label_6;
        }
        ecx = eax;
    } else {
        ecx = *((esi + 0x17f));
    }
label_6:
    edi = 0;
    if (ecx > edi) {
        eax = 0x10;
        eax -= ecx;
        *((esp + 0x10)) = eax;
    } else {
        *((esp + 0x10)) = edi;
        eax = edi;
    }
    if ((*((esi + 0x70)) & 0x400) != 0) {
        if (eax < 5) {
            *((esp + 0x10)) = 5;
        }
    } else {
        if (eax > edx) {
            *((esp + 0x10)) = edx;
        } else {
            if (eax >= edi) {
                goto label_7;
            }
            *((esp + 0x10)) = edi;
        }
    }
    eax = *((esp + 0x10));
label_7:
    *(fp_stack--) = *((esi + 0x160));
    ecx = (int32_t) al;
    *(fp_stack--) = *(0x417628);
    *((esi + 0x158)) = ecx;
    ecx = edx;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    fp_stack++;
    ecx -= eax;
    ebx = 1;
    ebx <<= cl;
    ax = fp_status;
    *((esp + 0x1c)) = ecx;
    *((esp + 0x18)) = ebx;
    if ((ah & 5) != 0) {
        fp_stack[0] *= *((esi + 0x15c));
        *(fp_stack--) = 1.0;
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
    } else {
        fp_stack++;
        *(fp_stack--) = 1.0;
    }
    eax = ebx*4;
    *((esp + 0x30)) = fp_stack[0];
    fp_stack--;
    eax = fcn_00408ba0 (esi, eax);
    *((esi + 0x170)) = eax;
    if ((*((esi + 0x70)) & 0x480) == 0) {
        goto label_8;
    }
    if (ebx <= 0) {
        goto label_9;
    }
    do {
        eax = fcn_00408ba0 (esi, 0x200);
        edx = *((esi + 0x170));
        *((edx + edi*4)) = eax;
        edi++;
    } while (edi < ebx);
label_9:
    *(fp_stack--) = 1.0;
    eax = ebx;
    fp_stack[0] /= *((esp + 0x30));
    eax <<= 8;
    edi = 0;
    *((esp + 0x28)) = eax;
    *((esp + 0x14)) = edi;
    *((esp + 0x20)) = eax;
    *((esp + 0x30)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x28));
    if (eax < 0) {
        fp_stack[0] += *(0x417618);
    }
    *((esp + 0x38)) = fp_stack[0];
    fp_stack--;
label_0:
    *(fp_stack--) = *((esp + 0x14));
    fp_stack[0] += *(0x41acd8);
    fp_stack[0] *= *(0x417610);
    *(fp_stack--) = *((esp + 0x30));
    _CIpow ();
    fp_stack[0] *= *((esp + 0x38));
    eax = *((esp + 0xc));
    eax |= 0xc00;
    *((esp + 0x24)) = eax;
    *((esp + 0x28)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x28));
    *((esp + 0x28)) = eax;
    if (edi > eax) {
        goto label_10;
    }
    eax = *((esp + 0x14));
    ecx = 0;
    ch = al;
    ecx |= eax;
    *((esp + 0x24)) = ecx;
    ecx = *((esp + 0x10));
    eax = 0xff;
    eax >>= cl;
    *((esp + 0xc)) = eax;
    while (edi <= *((esp + 0x28))) {
        eax = *((esp + 0xc));
        ecx = *((esp + 0x1c));
        edx = *((esi + 0x170));
        ebx = edi;
        ebx >>= cl;
        cx = *((esp + 0x24));
        eax &= edi;
        eax = *((edx + eax*4));
        edi++;
        *((eax + ebx*2)) = cx;
    }
    ebx = *((esp + 0x18));
label_10:
    eax = *((esp + 0x14));
    eax++;
    *((esp + 0x14)) = eax;
    if (eax < 0x100) {
        goto label_0;
    }
    if (edi >= *((esp + 0x20))) {
        goto label_11;
    }
    ecx = *((esp + 0x10));
    eax = 0xff;
    eax >>= cl;
    *((esp + 0xc)) = eax;
    while (edi < *((esp + 0x20))) {
        eax = *((esp + 0xc));
        ecx = *((esp + 0x1c));
        edx = *((esi + 0x170));
        ebx = edi;
        eax &= edi;
        eax = *((edx + eax*4));
        ebx >>= cl;
        edi++;
        *((eax + ebx*2)) = 0xffff;
    }
    goto label_12;
label_8:
    *((esp + 0x14)) = edi;
    if (ebx <= 0) {
        goto label_11;
    }
    goto label_13;
label_1:
    edi = *((esp + 0x14));
label_13:
    eax = fcn_00408ba0 (esi, 0x200);
    *(fp_stack--) = *(0x41ae40);
    ecx = *((esi + 0x170));
    edx = *((esp + 0x18));
    *((ecx + edi*4)) = eax;
    eax = *((edx*4 + 0x41c020));
    eax *= edi;
    eax >>= 4;
    edi = 0;
    ebx = eax;
    do {
        *((esp + 0x28)) = eax;
        *(fp_stack--) = *((esp + 0x28));
        if (eax < 0) {
            fp_stack[0] += *(0x417618);
        }
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        *(fp_stack--) = *((esp + 0x30));
        _CIpow ();
        *(fp_stack--) = *(0x41ae40);
        edx = *((esi + 0x170));
        eax = *((esp + 0xc));
        fp_stack[1] *= fp_stack[0];
        eax |= 0xc00;
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
        *((esp + 0x28)) = eax;
        eax = *((esp + 0x14));
        fp_stack[0] += *(0x41acd8);
        edx = *((edx + eax*4));
        edi += 2;
        ebx += 0x100;
        *((esp + 0x28)) = fp_stack[0];
        fp_stack--;
        cx = *((esp + 0x28));
        *((edi + edx - 2)) = cx;
    } while (edi < 0x200);
    eax++;
    fp_stack++;
    *((esp + 0x14)) = eax;
    if (eax < *((esp + 0x18))) {
        goto label_1;
    }
label_12:
    ebx = *((esp + 0x18));
label_11:
    if ((*((esi + 0x70)) & 0x600080) == 0) {
        goto label_4;
    }
    *(fp_stack--) = *((esi + 0x15c));
    ebx += ebx;
    *(fp_stack--) = 1.0;
    ebx += ebx;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 0x38)) = fp_stack[0];
    fp_stack--;
    eax = fcn_00408ba0 (esi, ebx);
    ebx = 0;
    *((esi + 0x178)) = eax;
    if (*((esp + 0x18)) <= ebx) {
        goto label_14;
    }
label_2:
    eax = fcn_00408ba0 (esi, 0x200);
    *(fp_stack--) = *(0x41ae40);
    ecx = *((esi + 0x178));
    edx = *((esp + 0x18));
    *((ecx + ebx*4)) = eax;
    eax = *((edx*4 + 0x41c020));
    eax *= ebx;
    eax >>= 4;
    edi = 0;
    *((esp + 0x14)) = eax;
    do {
        eax = *((esp + 0x14));
        *(fp_stack--) = *((esp + 0x14));
        if (eax < 0) {
            fp_stack[0] += *(0x417618);
        }
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        *(fp_stack--) = *((esp + 0x30));
        _CIpow ();
        *(fp_stack--) = *(0x41ae40);
        edx = *((esi + 0x178));
        eax = *((esp + 0xc));
        fp_stack[1] *= fp_stack[0];
        fp_tmp_4 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_4;
        eax |= 0xc00;
        *((esp + 0x28)) = eax;
        fp_stack[0] += *(0x41acd8);
        eax = *((edx + ebx*4));
        edi += 2;
        *((esp + 0x28)) = fp_stack[0];
        fp_stack--;
        cx = *((esp + 0x28));
        *((edi + eax - 2)) = cx;
    } while (edi < 0x200);
    ebx++;
    fp_stack++;
    if (ebx < *((esp + 0x18))) {
        goto label_2;
    }
label_14:
    *(fp_stack--) = *((esi + 0x160));
    *(fp_stack--) = *(0x417628);
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) != 0) {
        *(fp_stack--) = 1.0;
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
    } else {
        fp_stack++;
        *(fp_stack--) = *((esi + 0x15c));
    }
    eax = *((esp + 0x18));
    *((esp + 0x30)) = fp_stack[0];
    fp_stack--;
    eax += eax;
    eax += eax;
    eax = fcn_00408ba0 (esi, eax);
    ebx = 0;
    *((esi + 0x174)) = eax;
    if (*((esp + 0x18)) <= ebx) {
        goto label_4;
    }
label_3:
    eax = fcn_00408ba0 (esi, 0x200);
    *(fp_stack--) = *(0x41ae40);
    ecx = *((esi + 0x174));
    edx = *((esp + 0x18));
    *((ecx + ebx*4)) = eax;
    eax = *((edx*4 + 0x41c020));
    eax *= ebx;
    eax >>= 4;
    edi = 0;
    *((esp + 0x14)) = eax;
    do {
        eax = *((esp + 0x14));
        *(fp_stack--) = *((esp + 0x14));
        if (eax < 0) {
            fp_stack[0] += *(0x417618);
        }
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        *(fp_stack--) = *((esp + 0x30));
        _CIpow ();
        *(fp_stack--) = *(0x41ae40);
        edx = *((esi + 0x174));
        eax = *((esp + 0xc));
        fp_stack[1] *= fp_stack[0];
        fp_tmp_5 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_5;
        eax |= 0xc00;
        *((esp + 0x28)) = eax;
        fp_stack[0] += *(0x41acd8);
        eax = *((edx + ebx*4));
        edi += 2;
        *((esp + 0x28)) = fp_stack[0];
        fp_stack--;
        cx = *((esp + 0x28));
        *((edi + eax - 2)) = cx;
    } while (edi < 0x200);
    ebx++;
    fp_stack++;
    if (ebx < *((esp + 0x18))) {
        goto label_3;
    }
label_4:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412512 */
#include <stdint.h>
 
void _CIpow (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408b10 */
#include <stdint.h>
 
int32_t fcn_00408b10 (void * s, int32_t c, size_t n) {
    eax = *((esp + 0x10));
    ecx = *((esp + 0xc));
    edx = *((esp + 8));
    memset (edx, ecx, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408cd0 */
#include <stdint.h>
 
int32_t fcn_00408cd0 (int32_t arg_ch) {
    edi = *((esp + 0xc));
    esi = 1;
    if ((*((edi + 0x11c)) & 0x20) != 0) {
        eax = *((edi + 0x6c));
        eax &= 0x300;
        if (eax != 0x300) {
            goto label_0;
        }
    } else {
        if ((*((edi + 0x6c)) & 0x800) == 0) {
            goto label_0;
        }
    }
    esi = 0;
label_0:
    ecx = esp + 0x10;
    fcn_004088c0 (edi);
    if (esi != 0) {
        eax = fcn_00408c50 (esp + 0xc);
        ecx = 0;
        cl = (eax != *((edi + 0x110))) ? 1 : 0;
        eax = ecx;
        return eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408880 */
#include <stdint.h>
 
int32_t fcn_00408880 (int32_t arg_60h_2, int32_t arg_60h) {
    int32_t var_8h;
    int32_t var_54h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x54)) = eax;
    edx = *((esp + 0x60));
    esi = *((esp + 0x60));
    eax = esp + 8;
    fcn_004083f0 (esi);
    fcn_004087f0 (esi, esp + 8);
    ecx = *((esp + 0x64));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408850 */
#include <stdint.h>
 
int32_t fcn_00408850 (int32_t arg_60h_2, int32_t arg_60h) {
    int32_t var_8h_2;
    int32_t var_54h_2;
    int32_t var_60h;
    int32_t var_8h;
    int32_t var_54h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x54)) = eax;
    edx = *((esp + 0x60));
    esi = *((esp + 0x60));
    eax = esp + 8;
    fcn_004083f0 (esi);
    fcn_00408740 (esi, esp + 4);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4115e0 */
#include <stdint.h>
 
int32_t fcn_004115e0 (int32_t arg_8h, int32_t arg_10h, int32_t arg_1ch_2, int32_t arg_1ch, int32_t arg_24h, int32_t arg_28h, int32_t arg_2ch, uint32_t arg_30h, int32_t arg_34h) {
    edi = *((esp + 8));
    if (edi != 0) {
        esi = *((esp + 0x10));
        if (esi != 0) {
            ebx = *((esp + 0x1c));
            ebp = *((esp + 0x1c));
            if (ebp != 0) {
                if (ebx != 0) {
                    goto label_0;
                }
            }
            fcn_00408740 (edi, "Image width or height is zero in IHDR");
label_0:
            if (ebp <= *((edi + 0x264))) {
                if (ebx <= *((edi + 0x268))) {
                    goto label_1;
                }
            }
            fcn_00408740 (edi, "image size exceeds user limits in IHDR");
label_1:
            if (ebp <= 0x7fffffff) {
                if (ebx <= 0x7fffffff) {
                    goto label_2;
                }
            }
            fcn_00408740 (edi, "Invalid image size in IHDR");
label_2:
            if (ebp > 0x1fffff7e) {
                fcn_004087f0 (edi, "Width is too large for libpng to process pixels");
            }
            eax = *((esp + 0x24));
            if (eax != 1) {
                if (eax == 2) {
                    goto label_3;
                }
                if (eax == 4) {
                    goto label_3;
                }
                if (eax == 8) {
                    goto label_3;
                }
                if (eax == 0x10) {
                    goto label_3;
                }
                fcn_00408740 (edi, "Invalid bit depth in IHDR");
            }
label_3:
            ebx = *((esp + 0x28));
            if (ebx >= 0) {
                if (ebx == 1) {
                    goto label_4;
                }
                if (ebx == 5) {
                    goto label_4;
                }
                if (ebx <= 6) {
                    goto label_5;
                }
            }
label_4:
            fcn_00408740 (edi, "Invalid color type in IHDR");
label_5:
            if (ebx == 3) {
                if (*((esp + 0x24)) <= 8) {
                } else {
                    if (ebx != 2) {
                        if (ebx == 4) {
                            goto label_6;
                        }
                        if (ebx != 6) {
                            goto label_7;
                        }
                    }
label_6:
                    if (*((esp + 0x24)) >= 8) {
                        goto label_7;
                    }
                }
                fcn_00408740 (edi, "Invalid color type/bit depth combination in IHDR");
            }
label_7:
            if (*((esp + 0x2c)) >= 2) {
                fcn_00408740 (edi, "Unknown interlace method in IHDR");
            }
            if (*((esp + 0x30)) != 0) {
                fcn_00408740 (edi, "Unknown compression method in IHDR");
            }
            if ((*((edi + 0x68)) & ebp) != 0) {
                if (*((edi + 0x230)) == 0) {
                    goto label_8;
                }
                fcn_004087f0 (edi, "MNG features are not allowed in a PNG datastream\n");
            }
label_8:
            eax = *((esp + 0x34));
            if (eax != 0) {
                if ((*((edi + 0x230)) & 4) != 0) {
                    if (eax != 0x40) {
                        goto label_9;
                    }
                    if ((*((edi + 0x68)) & ebp) != 0) {
                        goto label_9;
                    }
                    if (ebx == 2) {
                        goto label_10;
                    }
                    if (ebx == 6) {
                        goto label_10;
                    }
                }
label_9:
                fcn_00408740 (edi, "Unknown filter method in IHDR");
label_10:
                if ((*((edi + 0x68)) & ebp) == 0) {
                    goto label_11;
                }
                fcn_004087f0 (edi, "Invalid filter method in IHDR");
            }
label_11:
            eax = *((esp + 0x20));
            ecx = *((esp + 0x1c));
            dl = *((esp + 0x24));
            *((esi + 4)) = eax;
            al = *((esp + 0x30));
            *((esi + 0x1a)) = al;
            al = *((esp + 0x34));
            *((esi + 0x1b)) = al;
            al = *((esp + 0x2c));
            *(esi) = ecx;
            *((esi + 0x18)) = dl;
            *((esi + 0x19)) = bl;
            *((esi + 0x1c)) = al;
            if (bl != 3) {
                if ((bl & 2) != 0) {
                    *((esi + 0x1d)) = 3;
                }
            } else {
                *((esi + 0x1d)) = 1;
            }
            if ((bl & 4) != 0) {
                *((esi + 0x1d))++;
            }
            al = *((esi + 0x1d));
            ax = al * dl;
            *((esi + 0x1e)) = al;
            if (ecx > 0x1fffff7e) {
                *((esi + 0xc)) = 0;
                return eax;
            }
            eax = (int32_t) al;
            if (al >= 8) {
                eax >>= 3;
                eax *= ecx;
                *((esi + 0xc)) = eax;
                return eax;
            }
            eax *= ecx;
            eax += 7;
            eax >>= 3;
            *((esi + 0xc)) = eax;
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411a50 */
#include <stdint.h>
 
uint32_t fcn_00411a50 (int32_t arg_8h, int32_t arg_10h, void ** s2, int32_t arg_40h) {
    edi = *((esp + 8));
    if (edi != 0) {
        esi = *((esp + 0x10));
        if (esi != 0) {
            fcn_00407e80 (edi, esi, 0x1000, 0);
            eax = fcn_00408ba0 (edi, 0x300);
            *((edi + 0x114)) = eax;
            memset (eax, 0, 0x300);
            ebx = *((esp + 0x40));
            ecx = *((esp + 0x3c));
            edx = *((edi + 0x114));
            memcpy (edx, ecx, ebx + ebx*2);
            eax = *((edi + 0x114));
            *((esi + 0x10)) = eax;
            *((edi + 0x118)) = bx;
            *((esi + 0xb8)) |= 0x1000;
            *((esi + 8)) |= 8;
            *((esi + 0x14)) = bx;
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411420 */
#include <stdint.h>
 
uint32_t fcn_00411420 (int32_t arg_8h, int32_t arg_10h) {
    edi = *((esp + 8));
    if (edi != 0) {
        esi = *((esp + 0x10));
        if (esi != 0) {
            *(fp_stack--) = *(0x417718);
            *(fp_stack--) = *((esp + 0x14));
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            fp_stack[1] = fp_stack[0];
            fp_stack--;
            if ((ah & 0x41) == 0) {
                fp_stack++;
                fcn_004087f0 (edi, "Limiting gamma to 21474.83");
                *(fp_stack--) = *(0x417718);
            }
            *((esi + 0x28)) = fp_stack[0];
            *(fp_stack--) = *(0x416a30);
            fp_stack[0] *= fp_stack[1];
            fp_stack[0] += *(0x41acd8);
            eax = fcn_00412520 ();
            *(fp_stack--) = 0.0;
            *((esi + 8)) |= 1;
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            *((esi + 0xfc)) = eax;
            ax = fp_status;
            if ((ah & 0x44) == 0) {
                goto label_0;
            }
            fcn_004087f0 (edi, 0x417728);
        }
label_0:
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4114a0 */
#include <stdint.h>
 
int32_t fcn_004114a0 (int32_t arg_8h, int32_t arg_10h, int32_t arg_14h) {
    edi = *((esp + 8));
    if (edi != 0) {
        esi = *((esp + 0x10));
        if (esi != 0) {
            eax = *((esp + 0x14));
            if (eax > 0x7fffffff) {
                fcn_004087f0 (edi, "Limiting gamma to 21474.83");
                eax = 0x7fffffff;
            } else {
                if (eax >= 0) {
                    goto label_0;
                }
                eax = fcn_004087f0 (edi, "Setting negative gamma to zero");
                eax = 0;
            }
label_0:
            *((esp + 0xc)) = eax;
            *(fp_stack--) = *((esp + 0xc));
            *((esi + 8)) |= 1;
            *((esi + 0xfc)) = eax;
            fp_stack[0] /= *(0x416a30);
            *((esi + 0x28)) = fp_stack[0];
            fp_stack--;
            if (eax != 0) {
                goto label_1;
            }
            fcn_004087f0 (edi, 0x417728);
        }
label_1:
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411ae0 */
#include <stdint.h>
 
int32_t fcn_00411ae0 (uint32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    if (*((esp + 4)) != 0) {
        eax = *((esp + 8));
        if (eax == 0) {
            goto label_0;
        }
        ecx = *((esp + 0xc));
        edx = *(ecx);
        *((eax + 0x44)) = edx;
        cl = *((ecx + 4));
        *((eax + 8)) |= 2;
        *((eax + 0x48)) = cl;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x410ef0 */
#include <stdint.h>
 
uint32_t fcn_00410ef0 (int32_t arg_4h, int32_t arg_ch) {
    ecx = *((esp + 4));
    if (ecx != 0) {
        esi = *((esp + 0xc));
        if (esi != 0) {
            *(fp_stack--) = 0.0;
            *(fp_stack--) = *((esp + 0x10));
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            if ((ah & 5) == 0) {
                *(fp_stack--) = *((esp + 0x18));
                fp_status = fp_compare(fp_stack[0], fp_stack[2]);
                ax = fp_status;
                if ((ah & 5) == 0) {
                    fp_tmp_0 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_0;
                    fp_status = fp_compare(fp_stack[0], *((esp + 0x20)));
                    ax = fp_status;
                    if ((ah & 0x41) == 0) {
                        goto label_0;
                    }
                    fp_status = fp_compare(fp_stack[0], *((esp + 0x28)));
                    ax = fp_status;
                    if ((ah & 0x41) == 0) {
                        goto label_0;
                    }
                    *(fp_stack--) = *((esp + 0x30));
                    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                    ax = fp_status;
                    if ((ah & 5) != 0) {
                        goto label_1;
                    }
                    *(fp_stack--) = *((esp + 0x38));
                    fp_status = fp_compare(fp_stack[0], fp_stack[2]);
                    ax = fp_status;
                    if ((ah & 5) != 0) {
                        goto label_2;
                    }
                    *(fp_stack--) = *((esp + 0x40));
                    fp_status = fp_compare(fp_stack[0], fp_stack[3]);
                    ax = fp_status;
                    if ((ah & 5) != 0) {
                        goto label_3;
                    }
                    *(fp_stack--) = *((esp + 0x48));
                    fp_status = fp_compare(fp_stack[0], fp_stack[4]);
                    ax = fp_status;
                    fp_stack[4] = fp_stack[0];
                    fp_stack--;
                    if ((ah & 5) != 0) {
                        goto label_4;
                    }
                    *(fp_stack--) = *(0x417718);
                    fp_status = fp_compare(fp_stack[0], fp_stack[5]);
                    ax = fp_status;
                    if ((ah & 5) == 0) {
                        fp_status = fp_compare(fp_stack[0], fp_stack[6]);
                        ax = fp_status;
                        fp_stack[6] = fp_stack[0];
                        fp_stack--;
                        if ((ah & 5) != 0) {
                            goto label_5;
                        }
                        fp_tmp_1 = fp_stack[5];
                        fp_stack[5] = fp_stack[0];
                        fp_stack[0] = fp_tmp_1;
                        fp_status = fp_compare(fp_stack[0], *((esp + 0x20)));
                        ax = fp_status;
                        if ((ah & 5) != 0) {
                            goto label_6;
                        }
                        *(fp_stack--) = *((esp + 0x28));
                        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                        ax = fp_status;
                        if ((ah & 0x41) == 0) {
                            goto label_7;
                        }
                        fp_tmp_2 = fp_stack[3];
                        fp_stack[3] = fp_stack[0];
                        fp_stack[0] = fp_tmp_2;
                        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                        ax = fp_status;
                        if ((ah & 0x41) == 0) {
                            goto label_8;
                        }
                        fp_tmp_3 = fp_stack[2];
                        fp_stack[2] = fp_stack[0];
                        fp_stack[0] = fp_tmp_3;
                        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                        ax = fp_status;
                        if ((ah & 0x41) == 0) {
                            goto label_9;
                        }
                        fp_tmp_4 = fp_stack[6];
                        fp_stack[6] = fp_stack[0];
                        fp_stack[0] = fp_tmp_4;
                        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                        ax = fp_status;
                        if ((ah & 0x41) == 0) {
                            goto label_10;
                        }
                        fp_tmp_5 = fp_stack[1];
                        fp_stack[1] = fp_stack[0];
                        fp_stack[0] = fp_tmp_5;
                        fp_status = fp_compare(fp_stack[0], fp_stack[4]);
                        fp_stack++;
                        ax = fp_status;
                        if ((ah & 5) != 0) {
                            goto label_11;
                        }
                        fp_tmp_6 = fp_stack[4];
                        fp_stack[4] = fp_stack[0];
                        fp_stack[0] = fp_tmp_6;
                        *((esi + 0x80)) = fp_stack[0];
                        *(fp_stack--) = *((esp + 0x18));
                        *((esi + 0x84)) = fp_stack[0];
                        fp_stack--;
                        *(fp_stack--) = *((esp + 0x20));
                        *((esi + 0x88)) = fp_stack[0];
                        fp_stack--;
                        fp_tmp_7 = fp_stack[2];
                        fp_stack[2] = fp_stack[0];
                        fp_stack[0] = fp_tmp_7;
                        *((esi + 0x8c)) = fp_stack[0];
                        fp_stack--;
                        *((esi + 0x90)) = fp_stack[0];
                        fp_tmp_8 = fp_stack[4];
                        fp_stack[4] = fp_stack[0];
                        fp_stack[0] = fp_tmp_8;
                        *((esi + 0x94)) = fp_stack[0];
                        fp_tmp_9 = fp_stack[3];
                        fp_stack[3] = fp_stack[0];
                        fp_stack[0] = fp_tmp_9;
                        *((esi + 0x98)) = fp_stack[0];
                        fp_tmp_10 = fp_stack[2];
                        fp_stack[2] = fp_stack[0];
                        fp_stack[0] = fp_tmp_10;
                        *((esi + 0x9c)) = fp_stack[0];
                        *(fp_stack--) = *(0x416a30);
                        fp_stack[2] *= fp_stack[0];
                        *(fp_stack--) = *(0x41acd8);
                        fp_stack[3] += fp_stack[0];
                        fp_tmp_11 = fp_stack[3];
                        fp_stack[3] = fp_stack[0];
                        fp_stack[0] = fp_tmp_11;
                        eax = fcn_00412520 ();
                        *(fp_stack--) = *((esp + 0x18));
                        fp_stack[0] *= fp_stack[1];
                        *((esi + 0x100)) = eax;
                        fp_stack[0] += fp_stack[3];
                        eax = fcn_00412520 ();
                        *(fp_stack--) = *((esp + 0x20));
                        fp_stack[0] *= fp_stack[1];
                        *((esi + 0x104)) = eax;
                        fp_stack[0] += fp_stack[3];
                        eax = fcn_00412520 ();
                        *(fp_stack--) = *((esp + 0x28));
                        fp_stack[0] *= fp_stack[1];
                        *((esi + 0x108)) = eax;
                        fp_stack[0] += fp_stack[3];
                        eax = fcn_00412520 ();
                        fp_stack[5] *= fp_stack[0];
                        fp_tmp_12 = fp_stack[5];
                        fp_stack[5] = fp_stack[0];
                        fp_stack[0] = fp_tmp_12;
                        *((esi + 0x10c)) = eax;
                        fp_stack[0] += fp_stack[2];
                        eax = fcn_00412520 ();
                        fp_tmp_13 = fp_stack[3];
                        fp_stack[3] = fp_stack[0];
                        fp_stack[0] = fp_tmp_13;
                        fp_stack[0] *= fp_stack[4];
                        *((esi + 0x110)) = eax;
                        fp_stack[0] += fp_stack[1];
                        eax = fcn_00412520 ();
                        fp_tmp_14 = fp_stack[1];
                        fp_stack[1] = fp_stack[0];
                        fp_stack[0] = fp_tmp_14;
                        fp_stack[0] *= fp_stack[3];
                        *((esi + 0x114)) = eax;
                        fp_stack[0] += fp_stack[1];
                        eax = fcn_00412520 ();
                        fp_tmp_15 = fp_stack[1];
                        fp_stack[1] = fp_stack[0];
                        fp_stack[0] = fp_tmp_15;
                        fp_stack[0] *= fp_stack[2];
                        fp_stack++;
                        *((esi + 0x118)) = eax;
                        fp_stack[0] += fp_stack[1];
                        fp_stack++;
                        eax = fcn_00412520 ();
                        *((esi + 8)) |= 4;
                        *((esi + 0x11c)) = eax;
                        return eax;
                    }
                    fp_stack++;
                    fp_stack[4] = fp_stack[0];
                    fp_stack--;
                    fp_stack[4] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack++;
                    fcn_004087f0 (ecx, "Ignoring attempt to set chromaticity value exceeding 21474.83");
                    return eax;
label_5:
                    fp_stack[5] = fp_stack[0];
                    fp_stack--;
                    fp_stack[3] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[2] = fp_stack[0];
                    fp_stack--;
                    fp_stack++;
                    fp_stack++;
                    fcn_004087f0 (ecx, "Ignoring attempt to set chromaticity value exceeding 21474.83");
                    return eax;
label_6:
                    fp_stack++;
                    fp_stack[3] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[2] = fp_stack[0];
                    fp_stack--;
                    fp_stack++;
                    fp_stack++;
                    fcn_004087f0 (ecx, "Ignoring attempt to set chromaticity value exceeding 21474.83");
                    return eax;
label_7:
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[4] = fp_stack[0];
                    fp_stack--;
                    fp_stack[3] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[2] = fp_stack[0];
                    fp_stack--;
                    fp_stack++;
                    fp_stack++;
                    fcn_004087f0 (ecx, "Ignoring attempt to set chromaticity value exceeding 21474.83");
                    return eax;
label_8:
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[4] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[2] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack++;
                    fcn_004087f0 (ecx, "Ignoring attempt to set chromaticity value exceeding 21474.83");
                    return eax;
label_9:
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[4] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[2] = fp_stack[0];
                    fp_stack--;
                    fp_stack++;
                    fp_stack++;
                    fcn_004087f0 (ecx, "Ignoring attempt to set chromaticity value exceeding 21474.83");
                    return eax;
label_10:
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
label_11:
                    fp_stack[4] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    fp_stack++;
                    fcn_004087f0 (ecx, "Ignoring attempt to set chromaticity value exceeding 21474.83");
                    return eax;
                }
                fp_stack[2] = fp_stack[0];
                fp_stack--;
                fp_stack++;
                fp_stack++;
                fcn_004087f0 (ecx, "Ignoring attempt to set negative chromaticity value");
                return eax;
label_2:
                fp_stack[2] = fp_stack[0];
                fp_stack--;
                fp_stack[2] = fp_stack[0];
                fp_stack--;
                fp_stack[2] = fp_stack[0];
                fp_stack--;
                fp_stack[1] = fp_stack[0];
                fp_stack--;
                fp_stack++;
                fcn_004087f0 (ecx, "Ignoring attempt to set negative chromaticity value");
                return eax;
label_3:
                fp_stack[3] = fp_stack[0];
                fp_stack--;
                fp_stack[3] = fp_stack[0];
                fp_stack--;
                fp_stack[3] = fp_stack[0];
                fp_stack--;
label_0:
                fp_stack++;
                fp_stack++;
                fp_stack++;
                fcn_004087f0 (ecx, "Ignoring attempt to set negative chromaticity value");
                return eax;
label_4:
                fp_stack[4] = fp_stack[0];
                fp_stack--;
                fp_stack[4] = fp_stack[0];
                fp_stack--;
label_1:
                fp_stack[1] = fp_stack[0];
                fp_stack--;
                fp_stack[1] = fp_stack[0];
                fp_stack--;
            }
            fp_stack[1] = fp_stack[0];
            fp_stack--;
            fp_stack++;
            fcn_004087f0 (ecx, "Ignoring attempt to set negative chromaticity value");
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411230 */
#include <stdint.h>
 
int32_t fcn_00411230 (uint32_t arg_ch, int32_t arg_10h, uint32_t arg_14h, int32_t arg_28h, int32_t arg_2ch, int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch, int32_t arg_40h) {
    if (*((esp + 0xc)) != 0) {
        ecx = *((esp + 0x10));
        if (ecx == 0) {
            goto label_0;
        }
        if (*((esp + 0x14)) >= 0) {
            if (*((esp + 0x28)) < 0) {
                goto label_1;
            }
            if (*((esp + 0x2c)) < 0) {
                goto label_1;
            }
            ebp = *((esp + 0x30));
            if (ebp < 0) {
                goto label_1;
            }
            ebx = *((esp + 0x34));
            if (ebx < 0) {
                goto label_1;
            }
            edi = *((esp + 0x38));
            if (edi < 0) {
                goto label_1;
            }
            esi = *((esp + 0x3c));
            if (esi < 0) {
                goto label_1;
            }
            edx = *((esp + 0x40));
            if (edx < 0) {
                goto label_1;
            }
            *(fp_stack--) = *((esp + 0x24));
            *(fp_stack--) = *(0x417720);
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            if ((ah & 5) == 0) {
                *(fp_stack--) = *((esp + 0x28));
                *((esp + 0x10)) = fp_stack[0];
                fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                fp_stack++;
                ax = fp_status;
                if ((ah & 0x41) == 0) {
                    goto label_2;
                }
                *(fp_stack--) = *((esp + 0x2c));
                fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                ax = fp_status;
                if ((ah & 0x41) != 0) {
                    *(fp_stack--) = *((esp + 0x30));
                    fp_status = fp_compare(fp_stack[0], fp_stack[2]);
                    ax = fp_status;
                    if ((ah & 0x41) != 0) {
                        *(fp_stack--) = *((esp + 0x34));
                        fp_status = fp_compare(fp_stack[0], fp_stack[3]);
                        ax = fp_status;
                        if ((ah & 0x41) != 0) {
                            *(fp_stack--) = *((esp + 0x38));
                            fp_status = fp_compare(fp_stack[0], fp_stack[4]);
                            ax = fp_status;
                            if ((ah & 0x41) != 0) {
                                *(fp_stack--) = *((esp + 0x3c));
                                fp_status = fp_compare(fp_stack[0], fp_stack[5]);
                                ax = fp_status;
                                if ((ah & 0x41) != 0) {
                                    *(fp_stack--) = *((esp + 0x40));
                                    fp_status = fp_compare(fp_stack[0], fp_stack[6]);
                                    ax = fp_status;
                                    fp_stack[6] = fp_stack[0];
                                    fp_stack--;
                                    if ((ah & 0x41) == 0) {
                                        goto label_3;
                                    }
                                    *(fp_stack--) = *(0x416a30);
                                    eax = *((esp + 0x24));
                                    fp_stack[7] /= fp_stack[0];
                                    *((ecx + 8)) |= 4;
                                    *((ecx + 0x100)) = eax;
                                    eax = *((esp + 0x28));
                                    *((ecx + 0x114)) = edi;
                                    *((ecx + 0x118)) = esi;
                                    *((ecx + 0x104)) = eax;
                                    eax = *((esp + 0x24));
                                    *((ecx + 0x10c)) = ebp;
                                    *((ecx + 0x110)) = ebx;
                                    *((ecx + 0x108)) = eax;
                                    *((ecx + 0x11c)) = edx;
                                    fp_tmp_0 = fp_stack[7];
                                    fp_stack[7] = fp_stack[0];
                                    fp_stack[0] = fp_tmp_0;
                                    *((ecx + 0x80)) = fp_stack[0];
                                    fp_stack--;
                                    *(fp_stack--) = *(esp);
                                    fp_stack[0] /= fp_stack[7];
                                    *((ecx + 0x84)) = fp_stack[0];
                                    fp_stack--;
                                    fp_tmp_1 = fp_stack[4];
                                    fp_stack[4] = fp_stack[0];
                                    fp_stack[0] = fp_tmp_1;
                                    fp_stack[0] /= fp_stack[6];
                                    *((ecx + 0x88)) = fp_stack[0];
                                    fp_stack--;
                                    fp_tmp_2 = fp_stack[2];
                                    fp_stack[2] = fp_stack[0];
                                    fp_stack[0] = fp_tmp_2;
                                    fp_stack[0] /= fp_stack[5];
                                    *((ecx + 0x8c)) = fp_stack[0];
                                    fp_stack--;
                                    fp_stack[0] /= fp_stack[4];
                                    *((ecx + 0x90)) = fp_stack[0];
                                    fp_stack--;
                                    fp_stack[0] /= fp_stack[3];
                                    *((ecx + 0x94)) = fp_stack[0];
                                    fp_stack--;
                                    fp_stack[0] /= fp_stack[2];
                                    *((ecx + 0x98)) = fp_stack[0];
                                    fp_stack--;
                                    fp_stack[1] /= fp_stack[0];
                                    fp_stack++;
                                    *((ecx + 0x9c)) = fp_stack[0];
                                    fp_stack--;
                                    return eax;
                                }
label_3:
                                fp_stack[5] = fp_stack[0];
                                fp_stack--;
                            }
                            fp_stack[4] = fp_stack[0];
                            fp_stack--;
                        }
                        fp_stack[3] = fp_stack[0];
                        fp_stack--;
                    }
                    fp_stack[2] = fp_stack[0];
                    fp_stack--;
                }
                fp_stack[1] = fp_stack[0];
                fp_stack--;
            }
label_2:
            ecx = *((esp + 0x1c));
            fp_stack++;
            fp_stack++;
            fcn_004087f0 (ecx, "Ignoring attempt to set chromaticity value exceeding 21474.83");
            return eax;
        }
label_1:
        edx = *((esp + 0x1c));
        fcn_004087f0 (edx, "Ignoring attempt to set negative chromaticity value");
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411b30 */
#include <stdint.h>
 
int32_t fcn_00411b30 (int32_t arg_8h, int32_t arg_10h, int32_t arg_14h) {
    edi = *((esp + 8));
    if (edi != 0) {
        esi = *((esp + 0x10));
        if (esi != 0) {
            eax = *((esp + 0x14));
            fcn_00411b10 (edi, esi, eax);
            *(fp_stack--) = *(0x417a70);
            *(esp) = fp_stack[0];
            fp_stack--;
            fcn_00411420 (edi, esi);
            fcn_004114a0 (edi, esi, 0xb18f);
            fcn_00411230 (edi, esi, 0x7a26, 0x8084, 0xfa00, 0x80e8, 0x7530, 0xea60, 0x3a98, 0x1770);
            *(fp_stack--) = *(0x417a68);
            *((esp + 0x3c)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *(0x417a60);
            *((esp + 0x30)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *(0x417a58);
            *((esp + 0x28)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *(0x417a50);
            *((esp + 0x20)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *(0x417a48);
            *((esp + 0x18)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *(0x417a40);
            *((esp + 0x10)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *(0x417a38);
            *((esp + 8)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *(0x417a30);
            *(esp) = fp_stack[0];
            fp_stack--;
            fcn_00410ef0 (edi, esi);
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411b10 */
#include <stdint.h>
 
int32_t fcn_00411b10 (uint32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    if (*((esp + 4)) != 0) {
        eax = *((esp + 8));
        if (eax == 0) {
            goto label_0;
        }
        cl = *((esp + 0xc));
        *((eax + 8)) |= 0x800;
        *((eax + 0x2c)) = cl;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408d40 */
#include <stdint.h>
 
int32_t fcn_00408d40 (int32_t arg_54h_3, int32_t arg_54h_2, int32_t arg_54h, void * arg_60h_3, int32_t arg_60h_2, int32_t arg_60h) {
    void * s2;
    uint32_t var_14h;
    void * var_20h;
    void * var_10h;
    int32_t var_1ch;
    void * var_44h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x44)) = eax;
    ecx = *((esp + 0x60));
    eax = *((esp + 0x54));
    ebx = *((esp + 0x60));
    *((esp + 0x10)) = ecx;
    ecx = *((esp + 0x54));
    esi = *((esp + 0x54));
    *((esp + 8)) = eax;
    if (ecx != 0) {
        goto label_0;
    }
    ecx = *((esi + 0xb0));
    edx = ebx + eax;
    eax = *((esp + 0x60));
    eax -= ebx;
    *((esi + 0x78)) = eax;
    eax = *((esi + 0xac));
    *((esi + 0x74)) = edx;
    *((esi + 0x80)) = eax;
    *((esi + 0x84)) = ecx;
    edi = ebp;
    if (eax == 0) {
        goto label_1;
    }
    do {
        eax = esi + 0x74;
        eax = fcn_00412d50 (eax, 1);
        *((esp + 0x14)) = eax;
        if (eax != 0) {
            if (eax != 1) {
                goto label_2;
            }
        }
        ecx = *((esi + 0x84));
        if (ecx != 0) {
            if (eax != 1) {
                goto label_3;
            }
        }
        if (edi == 0) {
            ebp -= ecx;
            ebp += *((esi + 0xb0));
            eax = fcn_00408c20 (esi, ebp + 1);
            edi = eax;
            if (edi == 0) {
                eax = *((esp + 0x10));
                fcn_00408bf0 (esi, eax);
                fcn_00408740 (esi, "Not enough memory to decompress chunk.");
            }
            edx = *((esi + 0xac));
            ecx = ebp;
            ecx -= ebx;
            memcpy (ebx + edi, edx, ecx);
            ecx = *((esp + 0x1c));
            memcpy (edi, ecx, ebx);
        } else {
            eax = *((esi + 0xb0));
            edx = ebp;
            edx -= ecx;
            ecx = edx + eax + 1;
            eax = fcn_00408c20 (esi);
            edi = eax;
            if (edi == 0) {
                edx = *((esp + 0x18));
                fcn_00408bf0 (esi, edx);
                eax = *((esp + 0x18));
                fcn_00408bf0 (esi, eax);
                fcn_00408740 (esi, "Not enough memory to decompress chunk..");
            }
            ecx = *((esp + 0x18));
            memcpy (edi, ecx, ebp);
            edx = *((esp + 0x24));
            fcn_00408bf0 (esi, edx);
            eax = *((esi + 0xb0));
            eax -= *((esi + 0x84));
            ecx = *((esi + 0xac));
            memcpy (edi + ebp, ecx, eax);
            eax = *((esi + 0xb0));
            eax -= *((esi + 0x84));
            ebp += eax;
        }
        *((edi + ebp)) = 0;
        if (*((esp + 0x14)) == 1) {
            goto label_4;
        }
        ecx = *((esi + 0xac));
        edx = *((esi + 0xb0));
        eax = *((esp + 0x14));
        *((esi + 0x80)) = ecx;
        *((esi + 0x84)) = edx;
label_3:
    } while (*((esi + 0x78)) != 0);
    goto label_5;
label_2:
    eax = *((esi + 0x8c));
    if (eax != 0) {
    } else {
    }
    fcn_004087f0 (esi, "Error decoding compressed text");
    eax = esi + 0x74;
    fcn_00412af0 (eax);
    *((esi + 0x78)) = 0;
    if (edi == 0) {
        eax = fcn_00408c20 (esi, ebx + 0x20);
        edi = eax;
        if (edi == 0) {
            eax = *((esp + 0x10));
            fcn_00408bf0 (esi, eax);
            fcn_00408740 (esi, "Not enough memory to decompress chunk");
        }
        ecx = *((esp + 0x10));
        memcpy (edi, ecx, ebx);
    }
    edx = *((esp + 0x10));
    eax = *((esp + 0x68));
    edx -= edi;
    *((edi + ebp - 1)) = 0;
    ebp = edx + eax - 1;
    if (ebp >= 0x1f) {
    }
    edx = ebx + edi;
    memcpy (edx, "Error decoding compressed text", ebp + 1);
    eax = *((esp + 0x20));
label_5:
    if (eax != 1) {
        if (eax == 0xfffffffb) {
            sprintf (esp + 0x28, "Buffer error in compressed datastream in %s chunk", esi + 0x11c);
        } else {
            if (eax == 0xfffffffd) {
                sprintf (esp + 0x28, "Data error in compressed datastream in %s chunk", esi + 0x11c);
            } else {
label_1:
            }
        }
        sprintf (esp + 0x28, "Incomplete compressed datastream in %s chunk", esi + 0x11c);
        fcn_004087f0 (esi, esp + 0x20);
        if (edi == 0) {
            eax = fcn_00408c20 (esi, ebx + 1);
            edi = eax;
            if (edi == 0) {
                edx = *((esp + 0x10));
                fcn_00408bf0 (esi, edx);
                fcn_00408740 (esi, "Not enough memory for text.");
            }
            eax = *((esp + 0x10));
            memcpy (edi, eax, ebx);
        }
        *((ebx + edi)) = 0;
    }
label_4:
    fcn_00412af0 (esi + 0x74);
    ecx = *((esp + 0x14));
    *((esi + 0x78)) = 0;
    fcn_00408bf0 (esi, ecx);
    edx = *((esp + 0x28));
    eax = edi;
    *(edx) = ebp;
    ecx = *((esp + 0x44));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
label_0:
    eax = esp + 0x1c;
    sprintf (eax, "Unknown zTXt compression type %d", ecx);
    fcn_004087f0 (esi, esp + 0x24);
    eax = *((esp + 0x1c));
    edx = *((esp + 0x28));
    ecx = *((esp + 0x60));
    *((ebx + eax)) = 0;
    *(edx) = ebx;
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411c10 */
#include <stdint.h>
 
int32_t fcn_00411c10 (int32_t arg_8h, int32_t arg_10h, int32_t arg_18h, int32_t arg_3ch, void * s2, int32_t arg_28h) {
    edi = *((esp + 8));
    if (edi == 0) {
        goto label_0;
    }
    esi = *((esp + 0x10));
    if (esi == 0) {
        goto label_1;
    }
    ebx = *((esp + 0x18));
    if (ebx == 0) {
        goto label_2;
    }
    if (*((esp + 0x20)) == 0) {
        goto label_2;
    }
    eax = ebx;
    edx = eax + 1;
    do {
        cl = *(eax);
        eax++;
    } while (cl != 0);
    eax -= edx;
    eax++;
    eax = fcn_00408c20 (edi, eax);
    if (ebp == 0) {
        fcn_004087f0 (edi, "Insufficient memory to process iCCP chunk.");
        return eax;
    }
    edx = ebp;
    eax = ebx;
    edx -= ebx;
    do {
        cl = *(eax);
        *((edx + eax)) = cl;
        eax++;
    } while (cl != 0);
    ebx = *((esp + 0x28));
    eax = fcn_00408c20 (edi, ebx);
    edi = eax;
    if (edi == 0) {
        esi = *((esp + 0x14));
        fcn_00408bf0 (esi, ebp);
        fcn_004087f0 (esi, 0x417a78);
        return eax;
    }
    eax = *((esp + 0x24));
    memcpy (edi, eax, ebx);
    ecx = *((esp + 0x20));
    fcn_00407e80 (ecx, esi, 0x10, 0);
    dl = *((esp + 0x3c));
    *((esi + 0xb8)) |= 0x10;
    *((esi + 8)) |= 0x1000;
    *((esi + 0xc4)) = ebp;
    *((esi + 0xcc)) = ebx;
    *((esi + 0xc8)) = edi;
    *((esi + 0xd0)) = dl;
label_2:
label_1:
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x408c80 */
#include <stdint.h>
 
uint16_t fcn_00408c80 (int32_t arg_4h) {
    ecx = *((esp + 4));
    ax = *(ecx);
    cx = *((ecx + 1));
    ax <<= 8;
    ax += cx;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411fc0 */
#include <stdint.h>
 
int32_t fcn_00411fc0 (int32_t arg_18h, int32_t arg_10h, int32_t arg_20h_2, uint32_t arg_20h) {
    int32_t var_10h;
    ebx = *((esp + 0x10));
    eax = *((ebx + 0xd8));
    esi = *((esp + 0x20));
    eax += esi;
    edi = *((esp + 0x18));
    eax <<= 4;
    eax = fcn_00408c20 (edi, eax);
    *((esp + 0x10)) = ebp;
    if (ebp == 0) {
        fcn_004087f0 (edi, "No memory for sPLT palettes.");
        return eax;
    }
    ecx = *((ebx + 0xd8));
    edx = *((ebx + 0xd4));
    ecx <<= 4;
    memcpy (ebp, edx, ecx);
    eax = *((ebx + 0xd4));
    eax = fcn_00408bf0 (edi, eax);
    eax = 0;
    *((ebx + 0xd4)) = eax;
    *((esp + 0x1c)) = eax;
    if (esi <= eax) {
        goto label_1;
    }
    edi = *((esp + 0x20));
label_0:
    esi = *((ebx + 0xd8));
    esi += *((esp + 0x1c));
    eax = *(edi);
    esi <<= 4;
    esi += ebp;
    ebp = eax + 1;
    do {
        cl = *(eax);
        eax++;
    } while (cl != 0);
    eax -= ebp;
    ebp = *((esp + 0x18));
    eax++;
    eax = fcn_00408ba0 (ebp, eax);
    *(esi) = eax;
    ecx = *(edi);
    edx = eax;
    do {
        al = *(ecx);
        *(edx) = al;
        ecx++;
        edx++;
    } while (al != 0);
    ecx = *((edi + 0xc));
    ecx <<= 4;
    eax = fcn_00408ba0 (ebp, ecx);
    *((esi + 8)) = eax;
    edx = *((edi + 0xc));
    ecx = *((edi + 8));
    edx <<= 4;
    memcpy (eax, ecx, edx);
    edx = *((edi + 0xc));
    ebp = *((esp + 0x24));
    *((esi + 0xc)) = edx;
    al = *((edi + 4));
    *((esi + 4)) = al;
    eax = *((esp + 0x30));
    eax++;
    edi += 0x10;
    *((esp + 0x1c)) = eax;
    if (eax < *((esp + 0x24))) {
        goto label_0;
    }
    esi = *((esp + 0x24));
label_1:
    *((ebx + 0xd8)) += esi;
    *((ebx + 8)) |= 0x2000;
    *((ebx + 0xb8)) |= 0x20;
    *((ebx + 0xd4)) = ebp;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411f30 */
#include <stdint.h>
 
uint32_t fcn_00411f30 (int32_t arg_8h, int32_t arg_10h, int32_t arg_1ch_2, int32_t arg_1ch, int32_t arg_24h) {
    edi = *((esp + 8));
    if (edi != 0) {
        esi = *((esp + 0x10));
        if (esi != 0) {
            ebx = *((esp + 0x1c));
            ebp = *((esp + 0x1c));
            if (ebp != 0) {
                fcn_00407e80 (edi, esi, 0x2000, 0);
                eax = fcn_00408ba0 (edi, 0x100);
                *((esi + 0x4c)) = eax;
                *((edi + 0x188)) = eax;
                eax = *((esi + 0x4c));
                memcpy (eax, ebp, ebx);
                *((esi + 0xb8)) |= 0x2000;
            }
            eax = *((esp + 0x24));
            if (eax != 0) {
                ecx = *(eax);
                *((esi + 0x50)) = ecx;
                edx = *((eax + 4));
                *((esi + 0x54)) = edx;
                ax = *((eax + 8));
                *((esi + 0x58)) = ax;
                if (ebx != 0) {
                    goto label_0;
                }
                ebx = 1;
            }
label_0:
            *((esi + 8)) |= 0x10;
            *((esi + 0x16)) = bx;
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x410ec0 */
#include <stdint.h>
 
int32_t fcn_00410ec0 (uint32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    if (*((esp + 4)) != 0) {
        eax = *((esp + 8));
        if (eax == 0) {
            goto label_0;
        }
        ecx = *((esp + 0xc));
        edx = *(ecx);
        *((eax + 0x5a)) = edx;
        edx = *((ecx + 4));
        *((eax + 0x5e)) = edx;
        cx = *((ecx + 8));
        *((eax + 8)) |= 0x20;
        *((eax + 0x62)) = cx;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411520 */
#include <stdint.h>
 
uint32_t fcn_00411520 (int32_t arg_8h, int32_t arg_10h, int32_t arg_14h) {
    edi = *((esp + 8));
    if (edi == 0) {
        goto label_0;
    }
    esi = *((esp + 0x10));
    if (esi == 0) {
        goto label_1;
    }
    if (*((esi + 0x14)) == 0) {
        fcn_004087f0 (edi, "Palette size 0, hIST allocation skipped.");
        return;
    }
    fcn_00407e80 (edi, esi, 8, 0);
    eax = fcn_00408c20 (edi, 0x200);
    *((edi + 0x1f4)) = eax;
    if (eax == 0) {
        eax = fcn_004087f0 (edi, "Insufficient memory for hIST chunk data.");
        return eax;
    }
    eax = 0;
    if (*((esi + 0x14)) <= ax) {
        goto label_2;
    }
    ecx = *((esp + 0x14));
    while (eax < edx) {
        edx = *((edi + 0x1f4));
        bx = *((ecx + eax*2));
        *((edx + eax*2)) = bx;
        edx = *((esi + 0x14));
        eax++;
    }
label_2:
    eax = *((edi + 0x1f4));
    *((esi + 8)) |= 0x40;
    *((esi + 0xb8)) |= 8;
    *((esi + 0x7c)) = eax;
label_1:
    esi = ebx;
label_0:
    edi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411a20 */
#include <stdint.h>
 
int32_t fcn_00411a20 (uint32_t arg_4h, int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    if (*((esp + 4)) != 0) {
        eax = *((esp + 8));
        if (eax == 0) {
            goto label_0;
        }
        ecx = *((esp + 0xc));
        edx = *((esp + 0x10));
        *((eax + 8)) |= 0x80;
        *((eax + 0x70)) = ecx;
        cl = *((esp + 0x14));
        *((eax + 0x74)) = edx;
        *((eax + 0x78)) = cl;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411810 */
#include <stdint.h>
 
int32_t fcn_00411810 (uint32_t arg_4h, int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    if (*((esp + 4)) != 0) {
        eax = *((esp + 8));
        if (eax == 0) {
            goto label_0;
        }
        ecx = *((esp + 0xc));
        edx = *((esp + 0x10));
        *((eax + 8)) |= 0x100;
        *((eax + 0x64)) = ecx;
        cl = *((esp + 0x14));
        *((eax + 0x68)) = edx;
        *((eax + 0x6c)) = cl;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411840 */
#include <stdint.h>
 
int32_t fcn_00411840 (int32_t arg_8h, int32_t arg_10h, int32_t arg_18h, int32_t arg_2ch, int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch, int32_t arg_34h_2) {
    ebx = *((esp + 8));
    if (ebx == 0) {
        goto label_1;
    }
    edi = *((esp + 0x10));
    if (edi == 0) {
        goto label_2;
    }
    ebp = *((esp + 0x18));
    eax = *((esp + 0x18));
    edx = eax + 1;
    do {
        cl = *(eax);
        eax++;
    } while (cl != 0);
    eax -= edx;
    eax = fcn_00408c20 (ebx, eax + 1);
    *((edi + 0xa0)) = eax;
    if (eax == 0) {
        eax = fcn_004087f0 (ebx, "Insufficient memory for pCAL purpose.");
        return eax;
    }
    memcpy (eax, ebp, esi);
    eax = *((esp + 0x2c));
    ebp = *((esp + 0x3c));
    ecx = *((esp + 0x30));
    dl = *((esp + 0x34));
    *((edi + 0xa4)) = eax;
    al = *((esp + 0x38));
    *((edi + 0xb5)) = al;
    eax = ebp;
    *((edi + 0xa8)) = ecx;
    *((edi + 0xb4)) = dl;
    esi = eax + 1;
    do {
        cl = *(eax);
        eax++;
    } while (cl != 0);
    eax -= esi;
    eax = fcn_00408c20 (ebx, eax + 1);
    *((edi + 0xac)) = eax;
    if (eax == 0) {
        eax = fcn_004087f0 (ebx, "Insufficient memory for pCAL units.");
        return eax;
    }
    memcpy (eax, ebp, esi);
    ecx = *((esp + 0x38));
    eax = fcn_00408c20 (ebx, ecx*4 + 4);
    *((edi + 0xb0)) = eax;
    if (eax == 0) {
        fcn_004087f0 (ebx, "Insufficient memory for pCAL params.");
        return eax;
    }
    ecx = *((esp + 0x2c));
    esi = 0;
    *((eax + ecx*4)) = 0;
    if (ecx <= 0) {
        goto label_3;
    }
label_0:
    eax = *((esp + 0x34));
    eax = *((eax + esi*4));
    edx = eax + 1;
    do {
        cl = *(eax);
        eax++;
    } while (cl != 0);
    eax -= edx;
    eax = fcn_00408c20 (ebx, eax + 1);
    ecx = *((edi + 0xb0));
    *((ecx + esi*4)) = eax;
    edx = *((edi + 0xb0));
    eax = edx + esi*4;
    if (*(eax) == 0) {
        goto label_4;
    }
    ecx = *((esp + 0x34));
    edx = *((ecx + esi*4));
    eax = *(eax);
    memcpy (eax, edx, ebp);
    esi++;
    if (esi < *((esp + 0x2c))) {
        goto label_0;
    }
label_3:
    *((edi + 8)) |= 0x400;
    *((edi + 0xb8)) |= 0x80;
label_2:
label_1:
    return eax;
label_4:
    fcn_004087f0 (ebx, "Insufficient memory for pCAL parameter.");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4119e0 */
#include <stdint.h>
 
int32_t fcn_004119e0 (uint32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    if (*((esp + 4)) != 0) {
        eax = *((esp + 8));
        if (eax == 0) {
            goto label_0;
        }
        *(fp_stack--) = *((esp + 0x10));
        cl = *((esp + 0xc));
        *((eax + 8)) |= 0x4000;
        *((eax + 0xe0)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x18));
        *((eax + 0xdc)) = cl;
        *((eax + 0xe8)) = fp_stack[0];
        fp_stack--;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411f00 */
#include <stdint.h>
 
int32_t fcn_00411f00 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    ecx = *((esp + 4));
    if (ecx != 0) {
        eax = *((esp + 8));
        if (eax == 0) {
            goto label_0;
        }
        edx = 0x200;
        if ((*((ecx + 0x68)) & edx) != 0) {
            goto label_0;
        }
        ecx = *((esp + 0xc));
        esi = *(ecx);
        *((eax + 0x3c)) = esi;
        ecx = *((ecx + 4));
        *((eax + 8)) |= edx;
        *((eax + 0x40)) = ecx;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x411d10 */
#include <stdint.h>
 
int32_t fcn_00411d10 (int32_t arg_14h, int32_t arg_18h, int32_t arg_24h, uint32_t arg_20h) {
    void ** s2;
    int32_t var_14h;
    edi = *((esp + 0x14));
    if (edi == 0) {
        goto label_2;
    }
    ebx = *((esp + 0x18));
    if (ebx == 0) {
        goto label_2;
    }
    ecx = *((esp + 0x20));
    if (ecx == 0) {
        goto label_2;
    }
    eax = *((ebx + 0x30));
    esi = *((ebx + 0x34));
    eax += ecx;
    if (eax <= esi) {
        goto label_3;
    }
    ebp = *((ebx + 0x38));
    if (ebp == 0) {
        goto label_4;
    }
    eax += 8;
    *((ebx + 0x34)) = eax;
    eax <<= 4;
    eax = fcn_00408c20 (edi, eax);
    *((ebx + 0x38)) = eax;
    if (eax != 0) {
        goto label_5;
    }
    fcn_00408bf0 (edi, ebp);
    do {
label_0:
        eax = 1;
        return eax;
label_5:
        esi <<= 4;
        memcpy (eax, ebp, esi);
        fcn_00408bf0 (edi, ebp);
        goto label_3;
label_4:
        ecx += 8;
        *((ebx + 0x34)) = ecx;
        ecx <<= 4;
        *((ebx + 0x30)) = 0;
        eax = fcn_00408c20 (edi, ecx);
        *((ebx + 0x38)) = eax;
    } while (eax == 0);
    *((ebx + 0xb8)) |= 0x4000;
label_3:
    *((esp + 0x14)) = 0;
    if (*((esp + 0x28)) <= 0) {
        goto label_6;
    }
    edi = *((esp + 0x24));
    edi += 8;
    *((esp + 0x10)) = edi;
label_1:
    esi = *((ebx + 0x30));
    eax = *((edi - 4));
    esi <<= 4;
    esi += *((ebx + 0x38));
    if (eax == 0) {
        goto label_7;
    }
    edx = eax + 1;
    do {
        cl = *(eax);
        eax++;
    } while (cl != 0);
    ecx = *((edi - 8));
    eax -= edx;
    if (ecx > 0) {
        goto label_8;
    }
    edi = *(edi);
    if (edi == 0) {
        goto label_9;
    }
    if (*(edi) == 0) {
        goto label_9;
    }
    edx = edi + 1;
    do {
        al = *(edi);
        edi++;
    } while (al != 0);
    edi -= edx;
    *(esi) = ecx;
    goto label_10;
label_9:
    edi = 0;
    *(esi) = 0xffffffff;
label_10:
    eax = *((esp + 0x1c));
    eax = fcn_00408c20 (eax, edi + ebp + 4);
    *((esi + 4)) = eax;
    if (eax == 0) {
        goto label_0;
    }
    ecx = *((esp + 0x10));
    edx = *((ecx - 4));
    memcpy (eax, edx, ebp);
    eax = *((esi + 4));
    *((eax + ebp)) = 0;
    ecx = *((esi + 4));
    eax = ecx + ebp + 1;
    *((esi + 8)) = eax;
    if (edi != 0) {
        edx = *((esp + 0x10));
        ecx = *(edx);
        memcpy (eax, ecx, edi);
    }
    edx = *((esi + 8));
    *((edi + edx)) = 0;
    *((esi + 0xc)) = edi;
    eax = *((ebx + 0x30));
    ecx = *(esi);
    edi = *((esp + 0x10));
    eax <<= 4;
    eax += *((ebx + 0x38));
    *(eax) = ecx;
    edx = *((esi + 4));
    *((eax + 4)) = edx;
    ecx = *((esi + 8));
    *((eax + 8)) = ecx;
    edx = *((esi + 0xc));
    *((eax + 0xc)) = edx;
    *((ebx + 0x30))++;
    goto label_7;
label_8:
    eax = *((esp + 0x1c));
    fcn_004087f0 (eax, "iTXt chunk not supported.");
label_7:
    eax = *((esp + 0x14));
    eax++;
    edi += 0x10;
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = edi;
    if (eax < *((esp + 0x28))) {
        goto label_1;
    }
label_6:
    eax = 0;
    return eax;
label_2:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4090d0 */
#include <stdint.h>
 
int8_t fcn_004090d0 (char * arg_8h) {
    ecx = *((esp + 8));
    al = *(ecx);
    if (al >= 0x41) {
        if (al > 0x7a) {
            goto label_0;
        }
        if (al > 0x5a) {
            if (al < 0x61) {
                goto label_0;
            }
        }
        al = *((ecx + 1));
        if (al < 0x41) {
            goto label_0;
        }
        if (al > 0x7a) {
            goto label_0;
        }
        if (al > 0x5a) {
            if (al < 0x61) {
                goto label_0;
            }
        }
        al = *((ecx + 2));
        if (al < 0x41) {
            goto label_0;
        }
        if (al > 0x7a) {
            goto label_0;
        }
        if (al > 0x5a) {
            if (al < 0x61) {
                goto label_0;
            }
        }
        al = *((ecx + 3));
        if (al < 0x41) {
            goto label_0;
        }
        if (al > 0x7a) {
            goto label_0;
        }
        if (al <= 0x5a) {
            goto label_1;
        }
        if (al >= 0x61) {
            goto label_1;
        }
    }
label_0:
    *((esp + 8)) = "invalid chunk type";
    void (*0x408850)() ();
label_1:
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412100 */
#include <stdint.h>
 
int32_t fcn_00412100 (int32_t arg_ch, int32_t arg_14h, int32_t arg_20h_2, int32_t arg_20h) {
    int32_t var_10h;
    ebp = *((esp + 0xc));
    if (ebp == 0) {
        goto label_0;
    }
    ebx = *((esp + 0x14));
    if (ebx == 0) {
        goto label_1;
    }
    edi = *((esp + 0x20));
    if (edi == 0) {
        goto label_2;
    }
    eax = *((ebx + 0xc0));
    eax += edi;
    eax *= 5;
    eax += eax;
    eax += eax;
    eax = fcn_00408c20 (ebp, eax);
    esi = eax;
    *((esp + 0x10)) = esi;
    if (esi == 0) {
        fcn_004087f0 (ebp, "Out of memory while processing unknown chunk.");
        return eax;
    }
    eax = *((ebx + 0xc0));
    edx = *((ebx + 0xbc));
    ecx = eax * 5;
    ecx += ecx;
    ecx += ecx;
    memcpy (esi, edx, ecx);
    eax = *((ebx + 0xbc));
    fcn_00408bf0 (ebp, eax);
    ebp = 0;
    *((ebx + 0xbc)) = ebp;
    if (edi <= ebp) {
        goto label_3;
    }
    edi = *((esp + 0x20));
    edi += 0xc;
    do {
        eax = *((ebx + 0xc0));
        eax += ebp;
        ecx = eax * 5;
        edx = edi - 0xc;
        esi = esi + ecx*4;
        strncpy (esi, edx, 5);
        eax = *(edi);
        ecx = *((esp + 0x24));
        eax = fcn_00408c20 (ecx, eax);
        *((esi + 8)) = eax;
        if (eax == 0) {
            edx = *((esp + 0x18));
            eax = fcn_004087f0 (edx, "Out of memory processing unknown chunk.");
        } else {
            ecx = *(edi);
            edx = *((edi - 4));
            memcpy (eax, edx, ecx);
            eax = *(edi);
            ecx = *((esp + 0x24));
            *((esi + 0xc)) = eax;
            dl = *((ecx + 0x68));
            *((esi + 0x10)) = dl;
        }
        esi = *((esp + 0x10));
        ebp++;
        edi += 0x14;
    } while (ebp < *((esp + 0x24)));
    edi = *((esp + 0x24));
label_3:
    *((ebx + 0xc0)) += edi;
    *((ebx + 0xb8)) |= 0x200;
    *((ebx + 0xbc)) = esi;
label_2:
label_1:
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40e9a0 */
#include <stdint.h>
 
uint32_t fcn_0040e9a0 (int32_t arg_ch, int32_t arg_14h, int32_t arg_20h, uint32_t arg_24h, int32_t arg_28h) {
    int32_t var_10h;
    ebx = *((esp + 0xc));
    edx = *(ebx);
    if (*((ebx + 8)) != 3) {
        goto label_0;
    }
    al = *((ebx + 9));
    ebp = *((esp + 0x14));
    if (al >= 8) {
        goto label_1;
    }
    eax = (int32_t) al;
    eax--;
    if (eax == 0) {
        goto label_2;
    }
    eax--;
    if (eax == 0) {
        goto label_3;
    }
    eax -= 2;
    if (eax != 0) {
        goto label_4;
    }
    eax = edx;
    eax &= 1;
    esi = edx - 1;
    esi >>= 1;
    eax += eax;
    esi += ebp;
    eax += eax;
    edi = edx + ebp - 1;
    if (edx <= 0) {
        goto label_4;
    }
    *((esp + 0x10)) = edx;
    do {
        bl = *(esi);
        cl = al;
        bl >>= cl;
        bl &= 0xf;
        *(edi) = bl;
        if (eax == 4) {
            eax = 0;
            esi--;
        } else {
            eax += 4;
        }
        edi--;
    } while (edi != 0);
    goto label_5;
label_3:
    ecx = edx - 1;
    ecx &= 3;
    esi = edx - 1;
    eax = 3;
    esi >>= 2;
    eax -= ecx;
    esi += ebp;
    eax += eax;
    edi = edx + ebp - 1;
    if (edx <= 0) {
        goto label_4;
    }
    *((esp + 0x10)) = edx;
    do {
        bl = *(esi);
        cl = al;
        bl >>= cl;
        bl &= 3;
        *(edi) = bl;
        if (eax == 6) {
            eax = 0;
            esi--;
        } else {
            eax += 2;
        }
        edi--;
    } while (edi != 0);
    goto label_5;
label_2:
    esi = edx - 1;
    ecx = edx - 1;
    esi >>= 3;
    ecx &= 7;
    eax = 7;
    esi += ebp;
    eax -= ecx;
    edi = edx + ebp - 1;
    if (edx <= 0) {
        goto label_4;
    }
    *((esp + 0x10)) = edx;
    do {
        bl = *(esi);
        cl = al;
        bl >>= cl;
        bl &= 1;
        *(edi) = bl;
        if (eax == 7) {
            eax = 0;
            esi--;
        } else {
            eax++;
        }
        edi--;
    } while (edi != 0);
label_5:
    ebx = *((esp + 0x18));
label_4:
    *((ebx + 9)) = 8;
    *((ebx + 0xb)) = 8;
    *((ebx + 4)) = edx;
label_1:
    if (*((ebx + 9)) != 8) {
        goto label_6;
    }
    ecx = edx + ebp - 1;
    if (*((esp + 0x24)) == 0) {
        goto label_7;
    }
    esi = edx*4;
    *((esp + 0x10)) = esi;
    eax = esi + ebp - 1;
    if (edx <= 0) {
        goto label_8;
    }
    edi = *((esp + 0x20));
    edx = *((esp + 0x28));
    do {
        esi = *(ecx);
        if (esi >= edx) {
            *(eax) = 0xff;
        } else {
            ebx = *((esp + 0x24));
            bl = *((esi + ebx));
            *(eax) = bl;
        }
        esi = *(ecx);
        ebx = edi + esi*2;
        ebx = *((esi + ebx + 2));
        *((eax - 1)) = bl;
        esi = *(ecx);
        eax--;
        ebx = edi + esi*2;
        ebx = *((esi + ebx + 1));
        eax--;
        *(eax) = bl;
        esi = *(ecx);
        ebx = edi + esi*2;
        ebx = *((esi + ebx));
        eax--;
        *(eax) = bl;
        eax--;
        ecx--;
        ebp--;
    } while (ebp != 0);
    ebx = *((esp + 0x18));
    esi = *((esp + 0x10));
label_8:
    *((ebx + 4)) = esi;
    *((ebx + 0xb)) = 0x20;
    *((ebx + 8)) = 6;
    *((ebx + 0xa)) = 4;
    *((ebx + 9)) = 8;
    return eax;
label_7:
    esi = edx * 3;
    *((esp + 0x10)) = esi;
    eax = esi + ebp - 1;
    if (edx <= 0) {
        goto label_9;
    }
    edi = *((esp + 0x20));
    while (ebp != 0) {
        esi = *(ecx);
        edx = edi + esi*2;
        edx = *((esi + edx + 2));
        *(eax) = dl;
        esi = *(ecx);
        edx = edi + esi*2;
        edx = *((esi + edx + 1));
        eax--;
        *(eax) = dl;
        esi = *(ecx);
        edx = edi + esi*2;
        edx = *((esi + edx));
        eax--;
        *(eax) = dl;
        eax--;
        ecx--;
        ebp--;
    }
    ebx = *((esp + 0x18));
    esi = *((esp + 0x10));
label_9:
    *((ebx + 0xb)) = 0x18;
    *((ebx + 8)) = 2;
    *((ebx + 0xa)) = 3;
    *((ebx + 4)) = esi;
    *((ebx + 9)) = 8;
label_6:
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40ebf0 */
#include <stdint.h>
 
uint32_t fcn_0040ebf0 (int32_t arg_4h, int32_t arg_20h, int32_t arg_24h) {
    int32_t var_10h;
    int32_t var_14h;
    edx = *((esp + 4));
    al = *((edx + 8));
    esi = *(edx);
    if (al != 0) {
        goto label_0;
    }
    ecx = *((esp + 0x24));
    if (ecx != 0) {
        edi = *((ecx + 8));
    } else {
        *((esp + 0x10)) = 0;
        edi = *((esp + 0x10));
    }
    al = *((edx + 9));
    ebx = *((esp + 0x20));
    if (al >= 8) {
        goto label_1;
    }
    eax = (int32_t) al;
    eax--;
    if (eax == 0) {
        goto label_2;
    }
    eax--;
    if (eax == 0) {
        goto label_3;
    }
    eax -= 2;
    if (eax != 0) {
        goto label_4;
    }
    eax = edi;
    edx = esi - 1;
    edx &= 1;
    eax <<= 4;
    eax += edi;
    edx += edx;
    edx += edx;
    ecx = (int32_t) ax;
    edi = esi - 1;
    eax = edx;
    edi >>= 1;
    edx = 4;
    edi += ebx;
    edx -= eax;
    *((esp + 0x10)) = ecx;
    ebp = esi + ebx - 1;
    if (esi <= 0) {
        goto label_5;
    }
    *((esp + 0x14)) = esi;
    do {
        eax = *(edi);
        cl = dl;
        eax >>= cl;
        eax &= 0xf;
        cl = al;
        cl <<= 4;
        cl |= al;
        *(ebp) = cl;
        if (edx == 4) {
            edx = 0;
            edi--;
        } else {
            edx = 4;
        }
        ebp--;
    } while (ebp != 0);
    goto label_5;
label_3:
    edi *= 0x55;
    edx = (int32_t) di;
    *((esp + 0x10)) = edx;
    eax = esi - 1;
    eax &= 3;
    edi = esi - 1;
    edx = 3;
    edi >>= 2;
    edx -= eax;
    edi += ebx;
    edx += edx;
    ebp = esi + ebx - 1;
    if (esi <= 0) {
        goto label_5;
    }
    *((esp + 0x14)) = esi;
    do {
        eax = *(edi);
        cl = dl;
        eax >>= cl;
        eax &= 3;
        cl = al;
        cl += cl;
        cl += cl;
        cl |= al;
        cl += cl;
        cl += cl;
        cl |= al;
        cl += cl;
        cl += cl;
        cl |= al;
        *(ebp) = cl;
        if (edx == 6) {
            edx = 0;
            edi--;
        } else {
            edx += 2;
        }
        ebp--;
    } while (ebp != 0);
    goto label_5;
label_2:
    edi *= 0xff;
    eax = (int32_t) di;
    *((esp + 0x10)) = eax;
    edi = esi - 1;
    ecx = esi - 1;
    edi >>= 3;
    ecx &= 7;
    eax = 7;
    edi += ebx;
    eax -= ecx;
    ebp = esi + ebx - 1;
    if (esi <= 0) {
        goto label_6;
    }
    *((esp + 0x14)) = esi;
    do {
        dl = *(edi);
        cl = al;
        dl >>= cl;
        dl &= 1;
        dl = -dl;
        dl -= dl;
        edx &= 0xff;
        *(ebp) = dl;
        if (eax == 7) {
            eax = 0;
            edi--;
        } else {
            eax++;
        }
        ebp--;
    } while (ebp != 0);
label_5:
    edx = *((esp + 0x1c));
label_6:
    edi = *((esp + 0x10));
label_4:
    ecx = *((esp + 0x24));
    *((edx + 9)) = 8;
    *((edx + 0xb)) = 8;
    *((edx + 4)) = esi;
label_1:
    if (ecx == 0) {
        goto label_7;
    }
    al = *((edx + 9));
    if (al != 8) {
        goto label_8;
    }
    ecx = esi + ebx - 1;
    eax = ebx + esi*2 - 1;
    if (esi <= 0) {
        goto label_9;
    }
    do {
        bx = *(ecx);
        if (bx == di) {
            *(eax) = 0;
        } else {
            *(eax) = 0xff;
        }
        bl = *(ecx);
        eax--;
        *(eax) = bl;
        eax--;
        ecx--;
        ebp--;
    } while (ebp != 0);
    al = *((edx + 9));
    *((edx + 8)) = 4;
    *((edx + 0xa)) = 2;
    goto label_10;
label_8:
    if (al != 0x10) {
        goto label_9;
    }
    eax = *((edx + 4));
    ecx = eax + ebx - 1;
    eax = ebx + eax*2 - 1;
    if (esi <= 0) {
        goto label_9;
    }
    ebp = (int32_t) di;
    edi = esi;
    while (edi != 0) {
        ebx = 0;
        bh = *((ecx - 1));
        bl = *(ecx);
        if (ebx == ebp) {
            *(eax) = 0;
            eax--;
            *(eax) = 0;
        } else {
            *(eax) = 0xff;
            eax--;
            *(eax) = 0xff;
        }
        ebx = *(ecx);
        eax--;
        *(eax) = bl;
        ebx = *((ecx - 1));
        ecx += 0xffffffff;
        eax--;
        *(eax) = bl;
        eax--;
        ecx--;
        edi--;
    }
label_9:
    al = *((edx + 9));
    *((edx + 8)) = 4;
    *((edx + 0xa)) = 2;
    goto label_10;
label_0:
    if (al != 2) {
        goto label_7;
    }
    ebp = *((esp + 0x24));
    if (ebp == 0) {
        goto label_7;
    }
    al = *((edx + 9));
    if (al != 8) {
        goto label_11;
    }
    eax = *((esp + 0x20));
    ecx = *((edx + 4));
    ecx = ecx + eax - 1;
    eax = eax + esi*4 - 1;
    if (esi <= 0) {
        goto label_12;
    }
    edi = esi;
    do {
        bx = *((ecx - 2));
        if (bx == *((ebp + 2))) {
            bx = *((ecx - 1));
            if (bx == *((ebp + 4))) {
                bx = *(ecx);
                if (bx != *((ebp + 6))) {
                    goto label_13;
                }
                *(eax) = 0;
            }
        } else {
label_13:
            *(eax) = 0xff;
        }
        ebx = *(ecx);
        eax--;
        *(eax) = bl;
        ebx = *((ecx - 1));
        ecx--;
        eax--;
        *(eax) = bl;
        ebx = *((ecx - 1));
        ecx--;
        eax--;
        *(eax) = bl;
        eax--;
        ecx--;
        edi--;
    } while (edi != 0);
    goto label_12;
label_11:
    if (al != 0x10) {
        goto label_12;
    }
    eax = *((esp + 0x20));
    ecx = *((edx + 4));
    ecx = ecx + eax - 1;
    eax = eax + esi*8 - 1;
    if (esi <= 0) {
        goto label_12;
    }
    edi = esi;
    while (edi != 0) {
        ebx = *((ebp + 2));
        edx = 0;
        dh = *((ecx - 5));
        dl = *((ecx - 4));
        if (edx == ebx) {
            ebx = *((ebp + 4));
            edx = 0;
            dh = *((ecx - 3));
            dl = *((ecx - 2));
            if (edx == ebx) {
                ebx = *((ebp + 6));
                edx = 0;
                dh = *((ecx - 1));
                dl = *(ecx);
                if (edx != ebx) {
                    goto label_14;
                }
                *(eax) = 0;
                eax--;
                *(eax) = 0;
            }
        } else {
label_14:
            *(eax) = 0xff;
            eax--;
            *(eax) = 0xff;
        }
        edx = *(ecx);
        *((eax - 1)) = dl;
        edx = *((ecx - 1));
        eax--;
        ecx--;
        *((eax - 1)) = dl;
        edx = *((ecx - 1));
        eax--;
        ecx--;
        *((eax - 1)) = dl;
        edx = *((ecx - 1));
        eax--;
        ecx--;
        eax--;
        *(eax) = dl;
        edx = *((ecx - 1));
        ecx--;
        eax--;
        *(eax) = dl;
        edx = *((ecx - 1));
        ecx--;
        eax--;
        *(eax) = dl;
        eax--;
        ecx--;
        edi--;
    }
    edx = *((esp + 0x1c));
label_12:
    al = *((edx + 9));
    *((edx + 8)) = 6;
    *((edx + 0xa)) = 4;
    al += al;
label_10:
    al += al;
    *((edx + 0xb)) = al;
    eax = (int32_t) al;
    if (al >= 8) {
        eax >>= 3;
        eax *= esi;
        *((edx + 4)) = eax;
        return eax;
    }
    eax *= esi;
    eax += 7;
    eax >>= 3;
    *((edx + 4)) = eax;
label_7:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x410b20 */
#include <stdint.h>
 
int32_t fcn_00410b20 (int32_t arg_8h, uint32_t arg_9h, uint32_t arg_ah, int32_t arg_bh, int32_t arg_ch, int32_t arg_14h, int32_t arg_10h) {
    int32_t var_4h;
    ebx = *((esp + 0x10));
    ebp = *((esp + 0xc));
    dl = *((ebp + 8));
    esi = *((esp + 0x14));
    edi = *(ebp);
    eax = esi;
    ecx = esi;
    if (dl != 2) {
        if (dl != 6) {
            goto label_0;
        }
        if ((ebx & 0x400000) == 0) {
            goto label_0;
        }
    }
    if (*((ebp + 0xa)) != 4) {
        goto label_0;
    }
    if (*((ebp + 9)) != 8) {
        goto label_1;
    }
    if (bl >= 0) {
        goto label_2;
    }
    edx = esi + 3;
    eax = esi + 4;
    if (edi <= 1) {
        goto label_3;
    }
    esi = edi - 1;
    do {
        ecx = *(eax);
        *(edx) = cl;
        ecx = *((eax + 1));
        eax++;
        edx++;
        *(edx) = cl;
        ecx = *((eax + 1));
        eax++;
        edx++;
        *(edx) = cl;
        edx++;
        eax += 2;
        esi--;
    } while (esi != 0);
    eax = edi * 3;
    *((ebp + 0xb)) = 0x18;
    *((ebp + 4)) = eax;
    *((ebp + 0xa)) = 3;
    goto label_4;
label_2:
    if (edi <= 0) {
        goto label_3;
    }
    esi = edi;
    do {
        edx = *((eax + 1));
        eax++;
        *(ecx) = dl;
        edx = *((eax + 1));
        eax++;
        ecx++;
        *(ecx) = dl;
        edx = *((eax + 1));
        eax++;
        ecx++;
        *(ecx) = dl;
        ecx++;
        eax++;
        esi--;
    } while (esi != 0);
label_3:
    eax = edi * 3;
    *((ebp + 0xb)) = 0x18;
    *((ebp + 4)) = eax;
    *((ebp + 0xa)) = 3;
    goto label_4;
label_1:
    if (bl >= 0) {
        goto label_5;
    }
    edx = esi + 8;
    eax = esi + 6;
    if (edi <= 1) {
        goto label_6;
    }
    esi = edi - 1;
    do {
        ecx = *(edx);
        *(eax) = cl;
        ecx = *((edx + 1));
        edx++;
        *((eax + 1)) = cl;
        ecx = *((edx + 1));
        eax++;
        edx++;
        *((eax + 1)) = cl;
        ecx = *((edx + 1));
        eax++;
        edx++;
        eax++;
        *(eax) = cl;
        ecx = *((edx + 1));
        edx++;
        eax++;
        *(eax) = cl;
        ecx = *((edx + 1));
        edx++;
        eax++;
        *(eax) = cl;
        eax++;
        edx += 3;
        esi--;
    } while (esi != 0);
    goto label_6;
label_5:
    if (edi <= 0) {
        goto label_6;
    }
    esi = edi;
    do {
        edx = *((eax + 2));
        *(ecx) = dl;
        eax += 2;
        edx = *((eax + 1));
        eax++;
        *((ecx + 1)) = dl;
        edx = *((eax + 1));
        ecx++;
        eax++;
        *((ecx + 1)) = dl;
        edx = *((eax + 1));
        ecx++;
        eax++;
        ecx++;
        *(ecx) = dl;
        edx = *((eax + 1));
        eax++;
        ecx++;
        *(ecx) = dl;
        edx = *((eax + 1));
        eax++;
        ecx++;
        *(ecx) = dl;
        ecx++;
        eax++;
        esi--;
    } while (esi != 0);
label_6:
    eax = edi * 3;
    eax += eax;
    *((ebp + 0xb)) = 0x30;
    *((ebp + 4)) = eax;
    *((ebp + 0xa)) = 3;
    goto label_4;
label_0:
    if (dl != 0) {
        if (dl != 4) {
            goto label_4;
        }
        if ((ebx & 0x400000) == 0) {
            goto label_7;
        }
    }
    if (*((ebp + 0xa)) != 2) {
        goto label_4;
    }
    dl = 8;
    if (*((ebp + 9)) != dl) {
        goto label_8;
    }
    if (bl >= 0) {
        goto label_9;
    }
    if (edi <= 0) {
        goto label_10;
    }
    esi = edi;
    while (esi != 0) {
        bl = *(eax);
        *(ecx) = bl;
        ecx++;
        eax += 2;
        esi--;
    }
    ebx = *((esp + 0x1c));
    *((ebp + 0xb)) = dl;
    *((ebp + 4)) = edi;
    goto label_11;
label_9:
    if (edi <= 0) {
        goto label_10;
    }
    esi = edi;
    do {
        bl = *((eax + 1));
        eax++;
        *(ecx) = bl;
        ecx++;
        eax++;
        esi--;
    } while (esi != 0);
    ebx = *((esp + 0x1c));
label_10:
    *((ebp + 0xb)) = dl;
    *((ebp + 4)) = edi;
    goto label_11;
label_8:
    if (bl >= 0) {
        goto label_12;
    }
    edx = esi + 4;
    eax = esi + 2;
    if (edi <= 1) {
        goto label_13;
    }
    esi = edi - 1;
    do {
        ecx = *(edx);
        *(eax) = cl;
        ecx = *((edx + 1));
        edx++;
        eax++;
        *(eax) = cl;
        eax++;
        edx += 3;
        esi--;
    } while (esi != 0);
    goto label_13;
label_12:
    if (edi <= 0) {
        goto label_13;
    }
    esi = edi;
    do {
        edx = *((eax + 2));
        eax += 2;
        *(ecx) = dl;
        edx = *((eax + 1));
        eax++;
        ecx++;
        *(ecx) = dl;
        ecx++;
        eax++;
        esi--;
    } while (esi != 0);
label_13:
    eax = edi + edi;
    *((ebp + 0xb)) = 0x10;
    *((ebp + 4)) = eax;
label_11:
    *((ebp + 0xa)) = 1;
label_4:
    if ((ebx & 0x400000) != 0) {
        *((ebp + 8)) &= 0xfb;
    }
label_7:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40cee0 */
#include <stdint.h>
 
int32_t fcn_0040cee0 (int32_t arg_2ch, uint32_t arg_30h, int32_t arg_44h) {
    uint32_t var_11h;
    uint32_t var_12h;
    int32_t var_13h;
    int32_t var_4h;
    uint32_t var_8h;
    int32_t var_1ch;
    uint32_t var_20h;
    uint32_t var_24h;
    uint32_t var_28h;
    int32_t var_2ch;
    uint32_t var_30h;
    int32_t var_34h;
    edx = *((esp + 0x30));
    ecx = *(edx);
    dl = *((edx + 8));
    eax = 0;
    *((esp + 8)) = ecx;
    *((esp + 4)) = eax;
    if ((dl & 2) == 0) {
        goto label_0;
    }
    eax = *((esp + 0x2c));
    ebx = *((eax + 0x22e));
    esi = *((eax + 0x22c));
    edi = *((eax + 0x22a));
    *((esp + 0x30)) = edi;
    *((esp + 0x1c)) = esi;
    *((esp + 0x2c)) = ebx;
    if (dl != 2) {
        goto label_1;
    }
    edx = *((esp + 0x40));
    if (*((edx + 9)) != 8) {
        goto label_2;
    }
    if (*((eax + 0x168)) == 0) {
        goto label_3;
    }
    if (*((eax + 0x16c)) == 0) {
        goto label_3;
    }
    esi = *((esp + 0x44));
    *((esp + 0x20)) = esi;
    if (ecx <= 0) {
        goto label_4;
    }
    *((esp + 0x24)) = ecx;
    do {
        ecx = *(esi);
        ebp = *((eax + 0x16c));
        edx = *((ecx + ebp));
        ecx = *((esi + 1));
        cl = *((ecx + ebp));
        esi++;
        esi++;
        *((esp + 0x12)) = dl;
        edx = *(esi);
        edx = *((edx + ebp));
        *((esp + 0x11)) = dl;
        dl = *((esp + 0x12));
        esi++;
        *((esp + 0x13)) = cl;
        if (dl == cl) {
            if (dl == *((esp + 0x11))) {
                cl = *((esi - 1));
                ebp = *((esp + 0x20));
                *(ebp) = cl;
                goto label_5;
            }
            cl = *((esp + 0x13));
        }
        edx = *((esp + 0x11));
        ecx = (int32_t) cl;
        edx *= ebx;
        ecx *= *((esp + 0x1c));
        ebp = *((esp + 0x20));
        edx += ecx;
        ecx = *((esp + 0x12));
        ecx *= edi;
        edx += ecx;
        ecx = *((eax + 0x168));
        edx >>= 0xf;
        dl = *((edx + ecx));
        *(ebp) = dl;
label_5:
        ebp++;
        *((esp + 0x20)) = ebp;
    } while (ebp != 0);
    goto label_6;
label_3:
    esi = *((esp + 0x44));
    if (ecx <= 0) {
        goto label_1;
    }
    *((esp + 0x24)) = ecx;
    while (ebp != 0) {
        ecx = *(esi);
        esi++;
        edx = *((esi + 1));
        *((esp + 0x11)) = cl;
        cl = *(esi);
        esi++;
        *((esp + 0x12)) = dl;
        dl = *((esp + 0x11));
        esi++;
        *((esp + 0x13)) = cl;
        if (dl == cl) {
            if (dl == *((esp + 0x12))) {
                cl = *((esi - 1));
                *(ebp) = cl;
                goto label_7;
            }
            cl = *((esp + 0x13));
        }
        edx = *((esp + 0x12));
        ecx = (int32_t) cl;
        edx *= ebx;
        ecx *= *((esp + 0x1c));
        edx += ecx;
        ecx = *((esp + 0x11));
        ecx *= edi;
        edx += ecx;
        edx >>= 0xf;
        *(ebp) = dl;
label_7:
        ebp++;
    }
    goto label_6;
label_2:
    if (*((eax + 0x178)) == 0) {
        goto label_8;
    }
    if (*((eax + 0x174)) == 0) {
        goto label_8;
    }
    edx = *((esp + 0x44));
    *((esp + 0x20)) = edx;
    if (ecx <= 0) {
        goto label_1;
    }
    *((esp + 0x28)) = ecx;
    do {
        ecx = 0;
        ch = *(edx);
        edx += 2;
        edx += 2;
        edx += 2;
        *((esp + 0x34)) = edx;
        cl = *((edx - 5));
        ebp = (int32_t) cx;
        ecx = 0;
        ch = *((edx - 4));
        cl = *((edx - 3));
        ecx = (int32_t) cx;
        *((esp + 0x24)) = ecx;
        ecx = 0;
        ch = *((edx - 2));
        cl = *((edx - 1));
        esi = (int32_t) cx;
        if (bp == *((esp + 0x24))) {
            if (bp == si) {
                ecx = (int32_t) bp;
            }
        } else {
            ebx = *((esp + 0x24));
            ecx = *((eax + 0x158));
            *((esp + 0x24)) = ebx;
            ebx = (int32_t) bp;
            ebp = (int32_t) bl;
            ebp >>= cl;
            edx = (int32_t) si;
            esi = *((eax + 0x178));
            ebp = *((esi + ebp*4));
            ebx >>= 8;
            ebp = *((ebp + ebx*2));
            ebx = *((esp + 0x24));
            ebp *= edi;
            edi = (int32_t) bl;
            edi >>= cl;
            ebx >>= 8;
            edi = *((esi + edi*4));
            edi = *((edi + ebx*2));
            edi *= *((esp + 0x1c));
            ebx = *((esp + 0x2c));
            ebp += edi;
            edi = (int32_t) dl;
            edi >>= cl;
            edx >>= 8;
            esi = *((esi + edi*4));
            edx = *((esi + edx*2));
            edx *= ebx;
            edi = *((esp + 0x30));
            ebp += edx;
            ebp >>= 0xf;
            edx = (int32_t) bp;
            edx = (int32_t) dx;
            esi = (int32_t) dl;
            esi >>= cl;
            ecx = *((eax + 0x174));
            edx >>= 8;
            ecx = *((ecx + esi*4));
            ecx = *((ecx + edx*2));
            edx = *((esp + 0x34));
        }
        esi = *((esp + 0x20));
        *(esi) = ch;
        esi = *((esp + 0x20));
        *(esi) = cl;
        ecx = 1;
    } while (edx != 0);
    goto label_6;
label_8:
    edx = *((esp + 0x44));
    esi = *((esp + 0x44));
    if (ecx <= 0) {
        goto label_1;
    }
    *((esp + 0x20)) = ecx;
    do {
        ecx = 0;
        ch = *(edx);
        edx += 2;
        edx += 2;
        edx += 2;
        cl = *((edx - 5));
        ebp = (int32_t) cx;
        ecx = 0;
        ch = *((edx - 4));
        *((esp + 0x34)) = ebp;
        cl = *((edx - 3));
        ecx = (int32_t) cx;
        *((esp + 0x24)) = ecx;
        ecx = 0;
        ch = *((edx - 2));
        cl = *((edx - 1));
        ecx = (int32_t) cx;
        *((esp + 0x28)) = ecx;
        if (bp == *((esp + 0x24))) {
            if (bp == cx) {
                goto label_9;
            }
        }
label_9:
        ecx = *((esp + 0x28));
        ebp = *((esp + 0x24));
        ecx *= ebx;
        ebp *= *((esp + 0x1c));
        ecx += ebp;
        ebp = *((esp + 0x34));
        ebp *= edi;
        ecx += ebp;
        ecx >>= 0xf;
        ecx = (int32_t) cx;
        *(esi) = ch;
        esi++;
        *(esi) = cl;
        esi++;
    } while (esi != 0);
label_6:
    ecx = *((esp + 0x18));
label_1:
    esi = *((esp + 0x44));
label_4:
    edx = *((esp + 0x40));
    if (*((edx + 8)) != 6) {
        goto label_10;
    }
    if (*((edx + 9)) != 8) {
        goto label_11;
    }
    if (*((eax + 0x168)) == 0) {
        goto label_12;
    }
    if (*((eax + 0x16c)) == 0) {
        goto label_12;
    }
    if (*((esp + 0x18)) <= 0) {
        goto label_13;
    }
    edx = *((esp + 0x18));
    *((esp + 0x28)) = edx;
    do {
        edx = *(esi);
        ecx = *((eax + 0x16c));
        edx = *((edx + ecx));
        esi++;
        *((esp + 0x13)) = dl;
        edx = *(esi);
        edx = *((edx + ecx));
        esi++;
        *((esp + 0x11)) = dl;
        edx = *(esi);
        ecx = *((edx + ecx));
        *((esp + 0x12)) = cl;
        cl = *((esp + 0x13));
        esi++;
        if (cl == *((esp + 0x11))) {
            if (cl == *((esp + 0x12))) {
                goto label_14;
            }
        }
label_14:
        edx = *((esp + 0x12));
        ecx = *((esp + 0x11));
        edx *= ebx;
        ecx *= *((esp + 0x1c));
        edx += ecx;
        ecx = *((esp + 0x13));
        ecx *= edi;
        edx += ecx;
        ecx = *((eax + 0x168));
        edx >>= 0xf;
        dl = *((edx + ecx));
        *(ebp) = dl;
        cl = *(esi);
        ebp++;
        *(ebp) = cl;
        ebp++;
        esi++;
    } while (esi != 0);
    goto label_13;
label_12:
    eax = esi;
    if (ecx <= 0) {
        goto label_10;
    }
    *((esp + 0x28)) = ecx;
    do {
        cl = *(eax);
        edx = *((eax + 1));
        eax++;
        eax++;
        *((esp + 0x12)) = dl;
        edx = *(eax);
        eax++;
        *((esp + 0x11)) = cl;
        *((esp + 0x13)) = dl;
        if (cl == *((esp + 0x12))) {
            if (cl == dl) {
                goto label_15;
            }
        }
label_15:
        ecx = *((esp + 0x13));
        edx = *((esp + 0x12));
        ecx *= ebx;
        edx *= *((esp + 0x1c));
        ecx += edx;
        edx = *((esp + 0x11));
        edx *= edi;
        ecx += edx;
        ecx >>= 0xf;
        *(esi) = cl;
        cl = *(eax);
        esi++;
        *(esi) = cl;
        esi++;
        eax++;
    } while (eax != 0);
    goto label_13;
label_11:
    if (*((eax + 0x178)) == 0) {
        goto label_16;
    }
    if (*((eax + 0x174)) == 0) {
        goto label_16;
    }
    ecx = esi;
    *((esp + 0x28)) = esi;
    if (*((esp + 0x18)) <= 0) {
        goto label_13;
    }
    edx = *((esp + 0x18));
    *((esp + 0x24)) = edx;
    do {
        edx = 0;
        dh = *(ecx);
        ecx += 2;
        ecx += 2;
        ecx += 2;
        *((esp + 0x20)) = ecx;
        dl = *((ecx - 5));
        ebp = (int32_t) dx;
        edx = 0;
        dh = *((ecx - 4));
        dl = *((ecx - 3));
        ebx = (int32_t) dx;
        edx = 0;
        dh = *((ecx - 2));
        *((esp + 0x34)) = ebx;
        dl = *((ecx - 1));
        edx = (int32_t) dx;
        if (bp == bx) {
            if (bp == dx) {
                edx = (int32_t) bp;
            }
        } else {
            ebx = *((esp + 0x34));
            ecx = *((eax + 0x158));
            esi = *((eax + 0x178));
            *((esp + 0x34)) = ebx;
            ebx = (int32_t) bp;
            ebp = (int32_t) bl;
            ebp >>= cl;
            ebx >>= 8;
            edx = (int32_t) dx;
            ebp = *((esi + ebp*4));
            ebp = *((ebp + ebx*2));
            ebx = *((esp + 0x34));
            ebp *= edi;
            edi = (int32_t) bl;
            edi >>= cl;
            ebx >>= 8;
            edi = *((esi + edi*4));
            edi = *((edi + ebx*2));
            edi *= *((esp + 0x1c));
            ebp += edi;
            edi = (int32_t) dl;
            edi >>= cl;
            edx >>= 8;
            esi = *((esi + edi*4));
            edx = *((esi + edx*2));
            edx *= *((esp + 0x2c));
            edi = *((esp + 0x30));
            ebp += edx;
            ebp >>= 0xf;
            edx = (int32_t) bp;
            edx = (int32_t) dx;
            esi = (int32_t) dl;
            esi >>= cl;
            ecx = *((eax + 0x174));
            edx >>= 8;
            ecx = *((ecx + esi*4));
            edx = *((ecx + edx*2));
            esi = *((esp + 0x28));
            ecx = *((esp + 0x20));
        }
        *(esi) = dh;
        esi++;
        *(esi) = dl;
        edx = *(ecx);
        esi++;
        *(esi) = dl;
        edx = *((ecx + 1));
        ecx++;
        esi++;
        *(esi) = dl;
        esi++;
        ecx++;
        *((esp + 0x28)) = esi;
    } while (ecx != 0);
    goto label_13;
label_16:
    eax = esi;
    ecx = esi;
    if (*((esp + 0x18)) <= 0) {
        goto label_13;
    }
    edx = *((esp + 0x18));
    *((esp + 0x30)) = edx;
    do {
        edx = *((eax + 1));
        dh = *(eax);
        eax += 2;
        eax += 2;
        eax += 2;
        ebp = (int32_t) dx;
        edx = *((eax - 3));
        dh = *((eax - 4));
        *((esp + 0x34)) = ebp;
        esi = (int32_t) dx;
        edx = *((eax - 1));
        dh = *((eax - 2));
        edx = (int32_t) dx;
        if (bp == si) {
            if (bp == dx) {
                goto label_17;
            }
        }
label_17:
        edx = (int32_t) dx;
        edx *= ebx;
        esi = (int32_t) si;
        esi *= *((esp + 0x1c));
        edx += esi;
        esi = *((esp + 0x34));
        esi *= edi;
        edx += esi;
        edx >>= 0xf;
        edx = (int32_t) dx;
        *(ecx) = dh;
        ecx++;
        *(ecx) = dl;
        edx = *(eax);
        ecx++;
        *(ecx) = dl;
        edx = *((eax + 1));
        eax++;
        ecx++;
        *(ecx) = dl;
        ecx++;
        eax++;
    } while (eax != 0);
label_13:
    ecx = *((esp + 0x18));
label_10:
    esi = *((esp + 0x40));
    *((esi + 0xa)) += 0xfe;
    al = *((esi + 9));
    dl = *((esi + 0xa));
    *((esi + 8)) &= 0xfd;
    ax = al * dl;
    *((esi + 0xb)) = al;
    eax = (int32_t) al;
    if (al >= 8) {
        eax >>= 3;
        eax *= ecx;
        *((esi + 4)) = eax;
        eax = *((esp + 0x10));
        return eax;
    }
    eax *= ecx;
    eax += 7;
    eax >>= 3;
    *((esi + 4)) = eax;
    eax = *((esp + 0x10));
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40cd20 */
#include <stdint.h>
 
int32_t fcn_0040cd20 (int32_t arg_4h, int32_t arg_9h, int32_t arg_ah, int32_t arg_bh, int32_t arg_8h, int32_t arg_18h) {
    ebp = *((esp + 8));
    cl = *((ebp + 9));
    esi = *(ebp);
    if (cl < 8) {
        goto label_0;
    }
    al = *((ebp + 8));
    dl = 2;
    if ((dl & al) != 0) {
        goto label_0;
    }
    if (al != 0) {
        goto label_1;
    }
    if (cl != 8) {
        goto label_2;
    }
    eax = *((esp + 0x18));
    ecx = esi + eax - 1;
    eax = ecx + esi*2;
    if (esi <= 0) {
        goto label_3;
    }
    edi = esi;
    do {
        ebx = *(ecx);
        *(eax) = bl;
        ebx = *(ecx);
        eax--;
        *(eax) = bl;
        ebx = *(ecx);
        eax--;
        *(eax) = bl;
        eax--;
        ecx--;
        edi--;
    } while (edi != 0);
    goto label_3;
label_2:
    ecx = *((esp + 0x18));
    ecx = ecx + esi*2 - 1;
    eax = ecx + esi*4;
    if (esi <= 0) {
        goto label_3;
    }
    edi = esi;
    do {
        ebx = *(ecx);
        *(eax) = bl;
        ebx = *((ecx - 1));
        *((eax - 1)) = bl;
        ebx = *(ecx);
        eax--;
        *((eax - 1)) = bl;
        ebx = *((ecx - 1));
        eax--;
        eax--;
        *(eax) = bl;
        ebx = *(ecx);
        eax--;
        *(eax) = bl;
        ebx = *((ecx - 1));
        ecx += 0xffffffff;
        eax--;
        *(eax) = bl;
        eax--;
        ecx--;
        edi--;
    } while (edi != 0);
    goto label_3;
label_1:
    if (al != 4) {
        goto label_3;
    }
    if (cl != 8) {
        goto label_4;
    }
    eax = *((esp + 0x18));
    ecx = eax + esi*2 - 1;
    eax = ecx + esi*2;
    if (esi <= 0) {
        goto label_3;
    }
    edi = esi;
    do {
        ebx = *(ecx);
        *(eax) = bl;
        ebx = *((ecx - 1));
        ecx--;
        eax--;
        *(eax) = bl;
        ebx = *(ecx);
        eax--;
        *(eax) = bl;
        ebx = *(ecx);
        eax--;
        *(eax) = bl;
        eax--;
        ecx--;
        edi--;
    } while (edi != 0);
    goto label_3;
label_4:
    ecx = *((esp + 0x18));
    ecx = ecx + esi*4 - 1;
    eax = ecx + esi*4;
    if (esi <= 0) {
        goto label_3;
    }
    edi = esi;
    do {
        ebx = *(ecx);
        *(eax) = bl;
        ebx = *((ecx - 1));
        *((eax - 1)) = bl;
        eax--;
        ecx--;
        ebx = *((ecx - 1));
        *((eax - 1)) = bl;
        ebx = *((ecx - 2));
        ecx--;
        eax--;
        *((eax - 1)) = bl;
        ebx = *(ecx);
        eax--;
        *((eax - 1)) = bl;
        ebx = *((ecx - 1));
        eax--;
        eax--;
        *(eax) = bl;
        ebx = *(ecx);
        eax--;
        *(eax) = bl;
        ebx = *((ecx - 1));
        ecx += 0xffffffff;
        eax--;
        *(eax) = bl;
        eax--;
        ecx--;
        edi--;
    } while (edi != 0);
label_3:
    *((ebp + 0xa)) += dl;
    al = *((ebp + 9));
    cl = *((ebp + 0xa));
    *((ebp + 8)) |= dl;
    ax = al * cl;
    *((ebp + 0xb)) = al;
    ebx = edi;
    eax = (int32_t) al;
    if (al >= 8) {
        eax >>= 3;
        eax *= esi;
        esi = edi;
        *((ebp + 4)) = eax;
        return eax;
    }
    eax *= esi;
    eax += 7;
    eax >>= 3;
    *((ebp + 4)) = eax;
label_0:
    esi = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40d5e0 */
#include <stdint.h>
 
int32_t fcn_0040d5e0 (int32_t arg_14h, int32_t arg_28h, int32_t arg_20h_2, uint32_t arg_20h, uint32_t arg_34h, uint32_t arg_38h, uint32_t arg_3ch, int32_t arg_40h, uint32_t arg_44h, uint32_t arg_48h, uint32_t arg_4ch, uint32_t arg_50h) {
    int32_t var_4h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    eax = *((esp + 0x14));
    ecx = *(eax);
    *(esp) = ecx;
    if (*((esp + 0x20)) == 0) {
        goto label_0;
    }
    al = *((eax + 8));
    if ((al & 4) != 0) {
        if (al == 3) {
            goto label_1;
        }
        ebp = *((esp + 0x20));
        if (ebp == 0) {
            goto label_1;
        }
    } else {
        ebp = *((esp + 0x20));
    }
    eax = (int32_t) al;
    if (eax > 6) {
        goto label_2;
    }
    /* switch table (7 cases) at 0x40e598 */
    edx = *((esp + 0x24));
    eax = *((edx + 9));
    eax += 0xffffffff;
    if (eax > 0xf) {
        goto label_3;
    }
    eax = *((eax + 0x40e5cc));
    /* switch table (16 cases) at 0x40e5b4 */
    esi = *((esp + 0x28));
    edx = 7;
    if (ecx <= 0) {
        goto label_3;
    }
    edi = *((esp + 0x30));
    do {
        bl = *(esi);
        al = *(esi);
        cl = dl;
        al >>= cl;
        al &= 1;
        cx = (int16_t) al;
        eax = *((esp + 0x2c));
        if (cx == *((eax + 8))) {
            ecx = 7;
            ecx -= edx;
            eax = 0x7f7f;
            eax >>= cl;
            ecx = edx;
            al &= bl;
            *(esi) = al;
            bl = *((edi + 8));
            bl <<= cl;
            bl |= al;
            *(esi) = bl;
        }
        if (edx == 0) {
            edx = 7;
            esi++;
        } else {
            edx--;
        }
        ebp--;
    } while (ebp != 0);
    goto label_3;
    edi = *((esp + 0x38));
    esi = *((esp + 0x28));
    edx = 6;
    if (edi == 0) {
        goto label_4;
    }
    if (ecx <= 0) {
        goto label_3;
    }
    *((esp + 0x14)) = ecx;
    do {
        bl = *(esi);
        ebp = *((esp + 0x2c));
        cl = dl;
        al = bl;
        al >>= cl;
        al &= 3;
        cx = (int16_t) al;
        if (cx == *((ebp + 8))) {
            ecx = 6;
            ecx -= edx;
            eax = 0x3f3f;
            eax >>= cl;
            ecx = *((esp + 0x30));
            al &= bl;
            *(esi) = al;
            bl = *((ecx + 8));
            ecx = edx;
            bl <<= cl;
        } else {
            eax = (int32_t) al;
            ecx = eax*4;
            ecx |= eax;
            ecx += ecx;
            ecx += ecx;
            ecx |= eax;
            ecx += ecx;
            ecx += ecx;
            ecx |= eax;
            al = *((ecx + edi));
            ecx = 6;
            ecx -= edx;
            ebx = 0x3f3f;
            ebx >>= cl;
            al >>= 6;
            ecx = edx;
            bl &= *(esi);
            al <<= cl;
        }
        bl |= al;
        *(esi) = bl;
        if (edx == 0) {
            edx = 6;
            esi++;
        } else {
            edx -= 2;
        }
    } while (edx != 0);
    goto label_3;
label_4:
    if (ecx <= 0) {
        goto label_3;
    }
    edi = *((esp + 0x30));
    do {
        bl = *(esi);
        al = *(esi);
        cl = dl;
        al >>= cl;
        al &= 3;
        cx = (int16_t) al;
        eax = *((esp + 0x2c));
        if (cx == *((eax + 8))) {
            ecx = 6;
            ecx -= edx;
            eax = 0x3f3f;
            eax >>= cl;
            ecx = edx;
            al &= bl;
            *(esi) = al;
            bl = *((edi + 8));
            bl <<= cl;
            bl |= al;
            *(esi) = bl;
        }
        if (edx == 0) {
            edx = 6;
            esi++;
        } else {
            edx -= 2;
        }
        ebp--;
    } while (ebp != 0);
    goto label_3;
    edi = *((esp + 0x38));
    esi = *((esp + 0x28));
    edx = 4;
    if (edi == 0) {
        goto label_5;
    }
    if (ecx <= 0) {
        goto label_3;
    }
    *((esp + 0x14)) = ecx;
    do {
        bl = *(esi);
        ebp = *((esp + 0x2c));
        cl = dl;
        al = bl;
        al >>= cl;
        al &= 0xf;
        cx = (int16_t) al;
        if (cx == *((ebp + 8))) {
            ecx = 4;
            ecx -= edx;
            eax = 0xf0f;
            eax >>= cl;
            ecx = *((esp + 0x30));
            al &= bl;
            *(esi) = al;
            bl = *((ecx + 8));
            ecx = edx;
            bl <<= cl;
        } else {
            eax = (int32_t) al;
            ecx = eax;
            ecx <<= 4;
            ecx |= eax;
            al = *((ecx + edi));
            ecx = 4;
            ecx -= edx;
            ebx = 0xf0f;
            ebx >>= cl;
            al >>= 4;
            ecx = edx;
            bl &= *(esi);
            al <<= cl;
        }
        bl |= al;
        *(esi) = bl;
        if (edx == 0) {
            edx = 4;
            esi++;
        } else {
            edx -= 4;
        }
    } while (edx != 0);
    goto label_3;
label_5:
    if (ecx <= 0) {
        goto label_3;
    }
    edi = *((esp + 0x30));
    while (ebp != 0) {
        bl = *(esi);
        al = *(esi);
        cl = dl;
        al >>= cl;
        al &= 0xf;
        cx = (int16_t) al;
        eax = *((esp + 0x2c));
        if (cx == *((eax + 8))) {
            ecx = 4;
            ecx -= edx;
            eax = 0xf0f;
            eax >>= cl;
            ecx = edx;
            al &= bl;
            *(esi) = al;
            bl = *((edi + 8));
            bl <<= cl;
            bl |= al;
            *(esi) = bl;
        }
        if (edx == 0) {
            edx = 4;
            esi++;
        } else {
            edx -= 4;
        }
        ebp--;
    }
    goto label_3;
    esi = *((esp + 0x38));
    eax = *((esp + 0x28));
    if (esi == 0) {
        goto label_6;
    }
    if (ecx <= 0) {
        goto label_3;
    }
    edi = *((esp + 0x30));
    edx = ecx;
    do {
        cl = *(eax);
        bx = (int16_t) cl;
        if (bx == *((ebp + 8))) {
            cl = *((edi + 8));
        } else {
            ecx = (int32_t) cl;
            cl = *((ecx + esi));
        }
        *(eax) = cl;
        eax++;
        edx--;
    } while (edx != 0);
    goto label_3;
label_6:
    if (ecx <= 0) {
        goto label_3;
    }
    esi = *((esp + 0x30));
    do {
        dx = *(eax);
        if (dx == *((ebp + 8))) {
            dl = *((esi + 8));
            *(eax) = dl;
        }
        eax++;
        ecx--;
    } while (ecx != 0);
    goto label_3;
    esi = *((esp + 0x44));
    eax = *((esp + 0x28));
    if (esi == 0) {
        goto label_7;
    }
    if (ecx <= 0) {
        goto label_3;
    }
    bl = *((esp + 0x50));
    *((esp + 0x14)) = ecx;
    do {
        dl = *(eax);
        cl = *((eax + 1));
        di = (int16_t) dl;
        bp = (int16_t) cl;
        di <<= 8;
        di += bp;
        ebp = *((esp + 0x2c));
        if (di == *((ebp + 8))) {
            edi = *((esp + 0x30));
            dl = *((edi + 9));
            *(eax) = dl;
            cl = *((edi + 8));
        } else {
            edi = (int32_t) cl;
            cl = bl;
            edi >>= cl;
            edx = (int32_t) dl;
            ecx = *((esi + edi*4));
            ecx = *((ecx + edx*2));
            *(eax) = ch;
        }
        *((eax + 1)) = cl;
        eax += 2;
    } while (eax != 0);
    goto label_3;
label_7:
    if (ecx <= 0) {
        goto label_3;
    }
    esi = *((esp + 0x30));
    do {
        dx = *(eax);
        di = *((eax + 1));
        dx <<= 8;
        dx += di;
        if (dx == *((ebp + 8))) {
            edx = *((esi + 9));
            *(eax) = dl;
            edx = *((esi + 8));
            *((eax + 1)) = dl;
        }
        eax += 2;
        ecx--;
    } while (ecx != 0);
    goto label_3;
    eax = *((esp + 0x24));
    if (*((eax + 9)) != 8) {
        goto label_8;
    }
    edx = *((esp + 0x38));
    if (edx == 0) {
        goto label_9;
    }
    if (ecx <= 0) {
        goto label_3;
    }
    eax = *((esp + 0x28));
    esi = *((esp + 0x30));
    eax += 2;
    edi = ecx;
    while (edi != 0) {
        cl = *((eax - 2));
        bx = (int16_t) cl;
        if (bx == *((ebp + 2))) {
            bx = *((eax - 1));
            if (bx == *((ebp + 4))) {
                bx = *(eax);
                if (bx != *((ebp + 6))) {
                    goto label_10;
                }
                ecx = *((esi + 2));
                *((eax - 2)) = cl;
                ecx = *((esi + 4));
                *((eax - 1)) = cl;
                ecx = *((esi + 6));
            }
        } else {
label_10:
            ecx = (int32_t) cl;
            ecx = *((ecx + edx));
            *((eax - 2)) = cl;
            ecx = *((eax - 1));
            ecx = *((ecx + edx));
            *((eax - 1)) = cl;
            ecx = *(eax);
            ecx = *((ecx + edx));
        }
        *(eax) = cl;
        eax += 3;
        edi--;
    }
    goto label_3;
label_9:
    if (ecx <= 0) {
        goto label_3;
    }
    eax = *((esp + 0x28));
    esi = *((esp + 0x30));
    eax += 2;
    do {
        dx = *((eax - 2));
        if (dx == *((ebp + 2))) {
            dx = *((eax - 1));
            if (dx != *((ebp + 4))) {
                goto label_11;
            }
            dx = *(eax);
            if (dx != *((ebp + 6))) {
                goto label_11;
            }
            edx = *((esi + 2));
            *((eax - 2)) = dl;
            edx = *((esi + 4));
            *((eax - 1)) = dl;
            edx = *((esi + 6));
            *(eax) = dl;
        }
label_11:
        eax += 3;
        ecx--;
    } while (ecx != 0);
    goto label_3;
label_8:
    esi = *((esp + 0x44));
    if (esi == 0) {
        goto label_12;
    }
    if (ecx <= 0) {
        goto label_3;
    }
    eax = *((esp + 0x28));
    edi = *((esp + 0x30));
    eax += 2;
    *((esp + 0x14)) = ecx;
    while (eax != 0) {
        bl = *((eax - 2));
        cl = *((eax - 1));
        dx = (int16_t) bl;
        bp = (int16_t) cl;
        dx <<= 8;
        dx += bp;
        ebp = *((esp + 0x2c));
        if (dx == *((ebp + 2))) {
            dx = *(eax);
            bp = *((eax + 1));
            dx <<= 8;
            dx += bp;
            ebp = *((esp + 0x2c));
            if (dx == *((ebp + 4))) {
                dx = *((eax + 2));
                bp = *((eax + 3));
                dx <<= 8;
                dx += bp;
                ebp = *((esp + 0x2c));
                if (dx != *((ebp + 6))) {
                    goto label_13;
                }
                ecx = *((edi + 3));
                *((eax - 2)) = cl;
                edx = *((edi + 2));
                *((eax - 1)) = dl;
                ecx = *((edi + 5));
                *(eax) = cl;
                edx = *((edi + 4));
                *((eax + 1)) = dl;
                ecx = *((edi + 7));
                *((eax + 2)) = cl;
                edx = *((edi + 6));
                *((eax + 3)) = dl;
            }
        } else {
label_13:
            edx = *((esp + 0x50));
            ebp = (int32_t) cl;
            cl = dl;
            ebp >>= cl;
            ecx = (int32_t) bl;
            ebx = *((esi + ebp*4));
            ecx = *((ebx + ecx*2));
            ebx = *((eax + 1));
            *((eax - 1)) = cl;
            cl = dl;
            ebx >>= cl;
            *((eax - 2)) = ch;
            ecx = *(eax);
            ebx = *((esi + ebx*4));
            ecx = *((ebx + ecx*2));
            ebx = *((eax + 3));
            *((eax + 1)) = cl;
            cl = dl;
            edx = *((eax + 2));
            ebx >>= cl;
            *(eax) = ch;
            ecx = *((esi + ebx*4));
            ecx = *((ecx + edx*2));
            *((eax + 2)) = ch;
            *((eax + 3)) = cl;
        }
        eax += 6;
    }
    goto label_3;
label_12:
    if (ecx <= 0) {
        goto label_3;
    }
    eax = *((esp + 0x28));
    esi = *((esp + 0x30));
    eax += 2;
    do {
        dx = *((eax - 2));
        di = *((eax - 1));
        dx <<= 8;
        dx += di;
        if (dx == *((ebp + 2))) {
            dx = *(eax);
            di = *((eax + 1));
            dx <<= 8;
            dx += di;
            if (dx != *((ebp + 4))) {
                goto label_14;
            }
            dx = *((eax + 2));
            di = *((eax + 3));
            dx <<= 8;
            dx += di;
            if (dx != *((ebp + 6))) {
                goto label_14;
            }
            edx = *((esi + 3));
            *((eax - 2)) = dl;
            edx = *((esi + 2));
            *((eax - 1)) = dl;
            edx = *((esi + 5));
            *(eax) = dl;
            edx = *((esi + 4));
            *((eax + 1)) = dl;
            edx = *((esi + 7));
            *((eax + 2)) = dl;
            edx = *((esi + 6));
            *((eax + 3)) = dl;
        }
label_14:
        eax += 6;
        ecx--;
    } while (ecx != 0);
    goto label_3;
    eax = *((esp + 0x24));
    if (*((eax + 9)) != 8) {
        goto label_15;
    }
    edi = *((esp + 0x40));
    if (edi == 0) {
        goto label_16;
    }
    if (*((esp + 0x3c)) == 0) {
        goto label_16;
    }
    if (*((esp + 0x38)) == 0) {
        goto label_16;
    }
    ecx = *((esp + 0x28));
    esi = *((esp + 0x28));
    if (*((esp + 0x10)) <= 0) {
        goto label_3;
    }
    edx = *((esp + 0x10));
    ebp = *((esp + 0x34));
    *((esp + 0x14)) = edx;
    while (esi != 0) {
        ax = *((ecx + 1));
        eax = (int32_t) ax;
        if (ax == 0xff) {
            edx = *(ecx);
            eax = *((esp + 0x38));
            dl = *((edx + eax));
            *(esi) = dl;
        } else {
            if (ax == 0) {
                eax = *((esp + 0x30));
                dl = *((eax + 8));
                *(esi) = dl;
            } else {
                ebx = *(ecx);
                bx = *((ebx + edi));
                bx *= ax;
                edx = 0xff;
                edx -= eax;
                dx *= *((ebp + 8));
                dx += bx;
                dx += 0x80;
                eax = (int32_t) dx;
                eax = (int32_t) ax;
                edx = eax;
                edx >>= 8;
                edx += eax;
                edx >>= 8;
                eax = (int32_t) dl;
                edx = *((esp + 0x3c));
                al = *((eax + edx));
                *(esi) = al;
            }
        }
        ecx += 2;
        esi++;
    }
    goto label_3;
label_16:
    ecx = *((esp + 0x28));
    esi = *((esp + 0x28));
    if (*((esp + 0x10)) <= 0) {
        goto label_3;
    }
    edi = *((esp + 0x10));
    ebp = *((esp + 0x34));
    do {
        al = *((ecx + 1));
        if (al == 0xff) {
            dl = *(ecx);
        } else {
            if (al == 0) {
                eax = *((esp + 0x30));
                dl = *((eax + 8));
            } else {
                bx = *(ecx);
                ax = (int16_t) al;
                edx = 0xff;
                bx *= ax;
                edx -= eax;
                dx *= *((ebp + 8));
                dx += bx;
                dx += 0x80;
                eax = (int32_t) dx;
                eax = (int32_t) ax;
                edx = eax;
                edx >>= 8;
                edx += eax;
                edx >>= 8;
            }
        }
        *(esi) = dl;
        ecx += 2;
        esi++;
        edi--;
    } while (edi != 0);
    goto label_3;
label_15:
    if (*((esp + 0x44)) == 0) {
        goto label_17;
    }
    if (*((esp + 0x48)) == 0) {
        goto label_17;
    }
    if (*((esp + 0x4c)) == 0) {
        goto label_17;
    }
    edx = *((esp + 0x28));
    esi = *((esp + 0x28));
    if (ecx <= 0) {
        goto label_3;
    }
    bl = *((esp + 0x50));
    edi = *((esp + 0x30));
    eax = ecx;
    edx++;
    *((esp + 0x14)) = eax;
    do {
        cx = *((edx + 1));
        ax = *((edx + 2));
        cx <<= 8;
        cx += ax;
        eax = (int32_t) cx;
        if (ax == 0xffff) {
            eax = *(edx);
            ebp = *((esp + 0x44));
            cl = bl;
            eax >>= cl;
            ecx = *((edx - 1));
            eax = *((ebp + eax*4));
            eax = *((eax + ecx*2));
        } else {
            if (ax == 0) {
                cl = *((edi + 9));
                *(esi) = cl;
                al = *((edi + 8));
                goto label_18;
            }
            edi = *(edx);
            ebp = *((esp + 0x4c));
            cl = bl;
            edi >>= cl;
            ecx = *((edx - 1));
            edi = *((ebp + edi*4));
            ecx = *((edi + ecx*2));
            edi = *((esp + 0x34));
            edi = *((edi + 8));
            eax = (int32_t) ax;
            ecx *= eax;
            ebp -= eax;
            edi *= ebp;
            ecx = ecx + edi + 0x8000;
            eax = ecx;
            eax >>= 0x10;
            eax += ecx;
            eax >>= 0x10;
            eax = (int32_t) ax;
            edi = (int32_t) al;
            cl = bl;
            edi >>= cl;
            ecx = *((esp + 0x48));
            eax >>= 8;
            ecx = *((ecx + edi*4));
            eax = *((ecx + eax*2));
            edi = *((esp + 0x30));
        }
        *(esi) = ah;
label_18:
        *((esi + 1)) = al;
        edx += 4;
        esi += 2;
    } while (esi != 0);
    goto label_3;
label_17:
    ecx = *((esp + 0x28));
    edx = *((esp + 0x28));
    if (*((esp + 0x10)) <= 0) {
        goto label_3;
    }
    eax = *((esp + 0x10));
    ebp = *((esp + 0x34));
    esi = *((esp + 0x30));
    ecx += 3;
    *((esp + 0x14)) = eax;
    do {
        ax = *((ecx - 1));
        di = *(ecx);
        ax <<= 8;
        ax += di;
        eax = (int32_t) ax;
        if (ax == 0xffff) {
            ax = *((ecx - 3));
            *(edx) = ax;
        } else {
            if (ax == 0) {
                eax = *((esi + 9));
                *(edx) = al;
                eax = *((esi + 8));
            } else {
                si = *((ecx - 3));
                di = *((ecx - 2));
                si <<= 8;
                si += di;
                edi = *((ebp + 8));
                eax = (int32_t) ax;
                esi = (int32_t) si;
                esi *= eax;
                ebx = 0xffff;
                ebx -= eax;
                edi *= ebx;
                esi = esi + edi + 0x8000;
                eax = esi;
                eax >>= 0x10;
                eax += esi;
                esi = *((esp + 0x30));
                eax >>= 0x10;
                *(edx) = ah;
            }
            *((edx + 1)) = al;
        }
        ecx += 4;
        edx += 2;
    } while (edx != 0);
    goto label_3;
    ecx = *((esp + 0x24));
    if (*((ecx + 9)) != 8) {
        goto label_19;
    }
    ebp = *((esp + 0x40));
    if (ebp == 0) {
        goto label_20;
    }
    if (*((esp + 0x3c)) == 0) {
        goto label_20;
    }
    ecx = *((esp + 0x38));
    if (ecx == 0) {
        goto label_20;
    }
    if (*((esp + 0x10)) <= 0) {
        goto label_3;
    }
    edi = *((esp + 0x28));
    edx = *((esp + 0x10));
    ebx = *((esp + 0x30));
    esi = edi + 2;
    *((esp + 0x14)) = edx;
    edx = *((esp + 0x34));
    edi++;
    do {
        al = *((edi + 2));
        if (al == 0xff) {
            eax = *((edi - 1));
            eax = *((eax + ecx));
            *((esi - 2)) = al;
            eax = *(edi);
            eax = *((eax + ecx));
            *((esi - 1)) = al;
            eax = *((edi + 1));
            eax = *((eax + ecx));
        } else {
            if (al == 0) {
                eax = *((ebx + 2));
                *((esi - 2)) = al;
                eax = *((ebx + 4));
                *((esi - 1)) = al;
                eax = *((ebx + 6));
            } else {
                ebx = *((edi - 1));
                ebx = *((ebx + ebp));
                bp = *((edx + 2));
                ax = (int16_t) al;
                bx *= ax;
                ecx = 0xff;
                ecx -= eax;
                bp *= cx;
                bx += bp;
                bx += 0x80;
                ebx = (int32_t) bx;
                ebp = (int32_t) bx;
                ebx = ebp;
                ebx >>= 8;
                ebx += ebp;
                ebp = *((esp + 0x3c));
                ebx >>= 8;
                ebx = (int32_t) bl;
                ebx = *((ebx + ebp));
                ebp = *((esp + 0x40));
                *((esi - 2)) = bl;
                ebx = *(edi);
                ebx = *((ebx + ebp));
                bp = *((edx + 4));
                bx *= ax;
                bp *= cx;
                bx += bp;
                bx += 0x80;
                ebx = (int32_t) bx;
                ebp = (int32_t) bx;
                ebx = ebp;
                ebx >>= 8;
                ebx += ebp;
                ebp = *((esp + 0x3c));
                ebx >>= 8;
                ebx = (int32_t) bl;
                ebx = *((ebx + ebp));
                ebp = *((esp + 0x40));
                *((esi - 1)) = bl;
                ebx = *((edi + 1));
                ebx = *((ebx + ebp));
                bx *= ax;
                ax = *((edx + 6));
                ax *= cx;
                bx += ax;
                bx += 0x80;
                eax = (int32_t) bx;
                ebx = *((esp + 0x30));
                eax = (int32_t) ax;
                ecx = eax;
                ecx >>= 8;
                ecx += eax;
                ecx >>= 8;
                eax = (int32_t) cl;
                ecx = *((esp + 0x3c));
                al = *((eax + ecx));
                ecx = *((esp + 0x38));
            }
        }
        *(esi) = al;
        edi += 4;
        esi += 3;
    } while (esi != 0);
    goto label_3;
label_20:
    if (*((esp + 0x10)) <= 0) {
        goto label_3;
    }
    edi = *((esp + 0x28));
    ecx = *((esp + 0x10));
    edx = *((esp + 0x30));
    esi = edi + 2;
    edi++;
    *((esp + 0x14)) = ecx;
    do {
        al = *((edi + 2));
        if (al == 0xff) {
            eax = *((edi - 1));
            *((esi - 2)) = al;
            cl = *(edi);
            *((esi - 1)) = cl;
            eax = *((edi + 1));
            *(esi) = al;
        } else {
            if (al == 0) {
                ecx = *((edx + 2));
                *((esi - 2)) = cl;
                al = *((edx + 4));
                *((esi - 1)) = al;
                ecx = *((edx + 6));
            } else {
                ebx = *((edi - 1));
                bp = *((edx + 2));
                ax = (int16_t) al;
                bx *= ax;
                ecx = 0xff;
                ecx -= eax;
                bp *= cx;
                bx += bp;
                bx += 0x80;
                ebx = (int32_t) bx;
                ebp = (int32_t) bx;
                ebx = ebp;
                ebx >>= 8;
                ebx += ebp;
                ebx >>= 8;
                *((esi - 2)) = bl;
                ebx = *((edx + 4));
                bp = *(edi);
                bx *= cx;
                bp *= ax;
                bx += bp;
                bx += 0x80;
                ebx = (int32_t) bx;
                ebp = (int32_t) bx;
                ebx = ebp;
                ebx >>= 8;
                ebx += ebp;
                ebx >>= 8;
                *((esi - 1)) = bl;
                ebx = *((edi + 1));
                bx *= ax;
                ax = *((edx + 6));
                ax *= cx;
                bx += ax;
                bx += 0x80;
                eax = (int32_t) bx;
                eax = (int32_t) ax;
                ecx = eax;
                ecx >>= 8;
                ecx += eax;
                ecx >>= 8;
            }
            *(esi) = cl;
        }
        edi += 4;
        esi += 3;
    } while (esi != 0);
    goto label_3;
label_19:
    ebp = *((esp + 0x44));
    if (ebp == 0) {
        goto label_21;
    }
    if (*((esp + 0x48)) == 0) {
        goto label_21;
    }
    if (*((esp + 0x4c)) == 0) {
        goto label_21;
    }
    ecx = *((esp + 0x10));
    if (ecx <= 0) {
        goto label_3;
    }
    edx = *((esp + 0x28));
    bl = *((esp + 0x50));
    eax = edx + 2;
    edx++;
    *((esp + 0x1c)) = ecx;
    while (eax != 0) {
        cx = *((edx + 5));
        si = *((edx + 6));
        cx <<= 8;
        cx += si;
        esi = (int32_t) cx;
        if (si == 0xffff) {
            esi = *(edx);
            ecx = (int32_t) bl;
            esi >>= cl;
            *((esp + 0x14)) = ecx;
            ecx = *((edx - 1));
            esi = *((ebp + esi*4));
            ecx = *((esi + ecx*2));
            *((eax - 2)) = ch;
            *((eax - 1)) = cl;
            esi = *((edx + 2));
            ecx = *((esp + 0x14));
            esi >>= cl;
            ecx = *((edx + 1));
            esi = *((ebp + esi*4));
            ecx = *((esi + ecx*2));
            *(eax) = ch;
            *((eax + 1)) = cl;
            ecx = *((esp + 0x14));
            esi = *((edx + 4));
            esi >>= cl;
            ecx = *((edx + 3));
            esi = *((ebp + esi*4));
            ecx = *((esi + ecx*2));
        } else {
            if (si == 0) {
                ecx = *((esp + 0x30));
                ecx = *((ecx + 3));
                *((eax - 2)) = cl;
                ecx = *((esp + 0x30));
                ecx = *((ecx + 2));
                *((eax - 1)) = cl;
                ecx = *((esp + 0x30));
                ecx = *((ecx + 5));
                *(eax) = cl;
                ecx = *((esp + 0x30));
                ecx = *((ecx + 4));
                *((eax + 1)) = cl;
                ecx = *((esp + 0x30));
                ecx = *((ecx + 7));
                *((eax + 2)) = cl;
                ecx = *((esp + 0x30));
                ecx = *((ecx + 6));
                goto label_22;
            }
            edi = (int32_t) si;
            esi = *(edx);
            ecx = (int32_t) bl;
            esi >>= cl;
            ebx = *((esp + 0x4c));
            *((esp + 0x14)) = ecx;
            ecx = *((edx - 1));
            esi = *((ebx + esi*4));
            ecx = *((esi + ecx*2));
            esi = *((esp + 0x34));
            ecx *= edi;
            esi = *((esi + 2));
            ebp -= edi;
            esi *= ebp;
            ecx = ecx + esi + 0x8000;
            esi = ecx;
            esi >>= 0x10;
            esi += ecx;
            ecx = *((esp + 0x50));
            esi >>= 0x10;
            ebx = (int32_t) si;
            *((esp + 0x18)) = ecx;
            esi = (int32_t) bl;
            esi >>= cl;
            ecx = *((esp + 0x48));
            ebx >>= 8;
            ecx = *((ecx + esi*4));
            ecx = *((ecx + ebx*2));
            ebx = *((esp + 0x4c));
            *((eax - 2)) = ch;
            *((eax - 1)) = cl;
            esi = *((edx + 2));
            ecx = *((esp + 0x14));
            esi >>= cl;
            ecx = *((edx + 1));
            esi = *((ebx + esi*4));
            ecx = *((esi + ecx*2));
            esi = *((esp + 0x34));
            ecx *= edi;
            esi = *((esi + 4));
            esi *= ebp;
            ecx = ecx + esi + 0x8000;
            esi = ecx;
            esi >>= 0x10;
            esi += ecx;
            ecx = *((esp + 0x18));
            esi >>= 0x10;
            ebx = (int32_t) si;
            esi = (int32_t) bl;
            esi >>= cl;
            ecx = *((esp + 0x48));
            ebx >>= 8;
            ecx = *((ecx + esi*4));
            ecx = *((ecx + ebx*2));
            ebx = *((esp + 0x4c));
            *(eax) = ch;
            *((eax + 1)) = cl;
            ecx = *((esp + 0x14));
            esi = *((edx + 4));
            esi >>= cl;
            ecx = *((edx + 3));
            esi = *((ebx + esi*4));
            ecx = *((esi + ecx*2));
            esi = *((esp + 0x34));
            ecx *= edi;
            esi = *((esi + 6));
            esi *= ebp;
            ecx = ecx + esi + 0x8000;
            esi = ecx;
            esi >>= 0x10;
            esi += ecx;
            ecx = *((esp + 0x18));
            esi >>= 0x10;
            ebx = (int32_t) si;
            esi = (int32_t) bl;
            esi >>= cl;
            ecx = *((esp + 0x48));
            ebx >>= 8;
            ecx = *((ecx + esi*4));
            ecx = *((ecx + ebx*2));
            ebp = *((esp + 0x44));
            bl = *((esp + 0x50));
        }
        *((eax + 2)) = ch;
label_22:
        *((eax + 3)) = cl;
        edx += 8;
        eax += 6;
    }
    goto label_3;
label_21:
    edx = *((esp + 0x10));
    if (edx <= 0) {
        goto label_3;
    }
    ecx = *((esp + 0x28));
    esi = *((esp + 0x30));
    eax = ecx + 2;
    ecx += 7;
    *((esp + 0x1c)) = edx;
    do {
        dx = *((ecx - 1));
        di = *(ecx);
        dx <<= 8;
        dx += di;
        edx = (int32_t) dx;
        if (dx == 0xffff) {
            edx = *((ecx - 7));
            *((eax - 2)) = edx;
            dx = *((ecx - 3));
            *((eax + 2)) = dx;
        } else {
            if (dx == 0) {
                edx = *((esi + 3));
                *((eax - 2)) = dl;
                edx = *((esi + 2));
                *((eax - 1)) = dl;
                edx = *((esi + 5));
                *(eax) = dl;
                edx = *((esi + 4));
                *((eax + 1)) = dl;
                edx = *((esi + 7));
                *((eax + 2)) = dl;
                edx = *((esi + 6));
            } else {
                esi = *((ecx - 5));
                edi = *((ecx - 4));
                bx = *((ecx - 6));
                si <<= 8;
                si += di;
                edi = *((ecx - 2));
                esi = (int32_t) si;
                *((esp + 0x18)) = esi;
                esi = *((ecx - 3));
                si <<= 8;
                si += di;
                esi = (int32_t) si;
                *((esp + 0x14)) = esi;
                esi = (int32_t) dx;
                dx = *((ecx - 7));
                dx <<= 8;
                dx += bx;
                ebx = *((esp + 0x30));
                ebp = *((ebx + 2));
                edx = (int32_t) dx;
                edx *= esi;
                edi = 0xffff;
                edi -= esi;
                ebp *= edi;
                ebp = edx + ebp + 0x8000;
                edx = ebp;
                edx >>= 0x10;
                edx += ebp;
                ebp = *((esp + 0x18));
                edx >>= 0x10;
                ebp *= esi;
                *((eax - 2)) = dh;
                *((eax - 1)) = dl;
                edx = *((ebx + 4));
                edx *= edi;
                ebp = edx + ebp + 0x8000;
                edx = ebp;
                edx >>= 0x10;
                edx += ebp;
                edx >>= 0x10;
                *(eax) = dh;
                *((eax + 1)) = dl;
                edx = *((ebx + 6));
                edx *= edi;
                edi = *((esp + 0x14));
                edi *= esi;
                esi = edx + edi + 0x8000;
                edx = esi;
                edx >>= 0x10;
                edx += esi;
                edx >>= 0x10;
                *((eax + 2)) = dh;
                esi = ebx;
            }
            *((eax + 3)) = dl;
        }
        ecx += 8;
        eax += 6;
    } while (eax != 0);
label_3:
label_2:
    edx = *((esp + 0x18));
    al = *((edx + 8));
    if ((al & 4) != 0) {
        *((edx + 0xa)) += 0xff;
        cl = *((edx + 0xa));
        al &= 0xfb;
        *((edx + 8)) = al;
        al = *((edx + 9));
        ax = al * cl;
        *((edx + 0xb)) = al;
        eax = (int32_t) al;
        if (al >= 8) {
            eax >>= 3;
            eax *= *((esp + 4));
            *((edx + 4)) = eax;
            return eax;
        }
        eax *= *((esp + 4));
        eax += 7;
        eax >>= 3;
        *((edx + 4)) = eax;
    }
label_1:
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40e5e0 */
#include <stdint.h>
 
int32_t fcn_0040e5e0 (int32_t arg_14h, int32_t arg_24h_2, int32_t arg_24h, int32_t arg_1ch, int32_t arg_30h) {
    int32_t var_10h;
    int32_t var_14h;
    edx = *((esp + 0x1c));
    ebp = *((esp + 0x14));
    al = *((ebp + 9));
    esi = *(ebp);
    edi = *((esp + 0x24));
    *((esp + 0x14)) = esi;
    if (al <= 8) {
        if (edi != 0) {
            goto label_0;
        }
    }
    if (al != 0x10) {
        goto label_1;
    }
    if (edx == 0) {
        goto label_1;
    }
label_0:
    ecx = *((ebp + 8));
    if (ecx > 6) {
        goto label_1;
    }
    /* switch table (7 cases) at 0x40e978 */
    eax = *((esp + 0x24));
    if (al != 8) {
        goto label_2;
    }
    if (esi <= 0) {
        goto label_3;
    }
    do {
        ecx = *(eax);
        edx = *((ecx + edi));
        *(eax) = dl;
        ecx = *((eax + 1));
        edx = *((ecx + edi));
        eax++;
        *(eax) = dl;
        ecx = *((eax + 1));
        edx = *((ecx + edi));
        eax++;
        *(eax) = dl;
        eax++;
        esi--;
    } while (esi != 0);
    return eax;
label_2:
    if (esi <= 0) {
        goto label_3;
    }
    ebx = *((esp + 0x30));
    do {
        edi = *((eax + 1));
        cl = bl;
        edi >>= cl;
        ecx = *(eax);
        edi = *((edx + edi*4));
        ecx = *((edi + ecx*2));
        *((eax + 1)) = cl;
        *(eax) = ch;
        edi = *((eax + 3));
        eax += 2;
        cl = bl;
        edi >>= cl;
        ecx = *(eax);
        edi = *((edx + edi*4));
        ecx = *((edi + ecx*2));
        *((eax + 1)) = cl;
        *(eax) = ch;
        edi = *((eax + 3));
        eax += 2;
        cl = bl;
        edi >>= cl;
        ecx = *(eax);
        edi = *((edx + edi*4));
        ecx = *((edi + ecx*2));
        *(eax) = ch;
        *((eax + 1)) = cl;
        eax += 2;
        esi--;
    } while (esi != 0);
    return eax;
    eax = *((esp + 0x24));
    if (al != 8) {
        goto label_4;
    }
    if (esi <= 0) {
        goto label_3;
    }
    while (esi != 0) {
        edx = *(eax);
        ecx = *((edx + edi));
        *(eax) = cl;
        edx = *((eax + 1));
        ecx = *((edx + edi));
        eax++;
        *(eax) = cl;
        edx = *((eax + 1));
        ecx = *((edx + edi));
        eax++;
        *(eax) = cl;
        eax += 2;
        esi--;
    }
    return eax;
label_4:
    if (esi <= 0) {
        goto label_3;
    }
    ebx = *((esp + 0x30));
    do {
        edi = *((eax + 1));
        cl = bl;
        edi >>= cl;
        ecx = *(eax);
        edi = *((edx + edi*4));
        ecx = *((edi + ecx*2));
        *((eax + 1)) = cl;
        *(eax) = ch;
        edi = *((eax + 3));
        eax += 2;
        cl = bl;
        edi >>= cl;
        ecx = *(eax);
        edi = *((edx + edi*4));
        ecx = *((edi + ecx*2));
        *((eax + 1)) = cl;
        *(eax) = ch;
        edi = *((eax + 3));
        eax += 2;
        cl = bl;
        edi >>= cl;
        ecx = *(eax);
        edi = *((edx + edi*4));
        ecx = *((edi + ecx*2));
        *(eax) = ch;
        *((eax + 1)) = cl;
        eax += 4;
        esi--;
    } while (esi != 0);
    return eax;
    eax = *((esp + 0x24));
    if (al != 8) {
        goto label_5;
    }
    if (esi <= 0) {
        goto label_3;
    }
    while (esi != 0) {
        edx = *(eax);
        cl = *((edx + edi));
        *(eax) = cl;
        eax += 2;
        esi--;
    }
    return eax;
label_5:
    if (esi <= 0) {
        goto label_3;
    }
    ebx = *((esp + 0x30));
    do {
        edi = *((eax + 1));
        cl = bl;
        edi >>= cl;
        ecx = *(eax);
        edi = *((edx + edi*4));
        ecx = *((edi + ecx*2));
        *(eax) = ch;
        *((eax + 1)) = cl;
        eax += 4;
        esi--;
    } while (esi != 0);
    return eax;
    eax = *((esp + 0x24));
    if (al != 2) {
        goto label_6;
    }
    *((esp + 0x10)) = eax;
    if (esi <= 0) {
        goto label_6;
    }
    ecx = esi - 1;
    ecx >>= 2;
    ecx++;
    *((esp + 0x14)) = ecx;
    do {
        eax = *(eax);
        edx = eax;
        edx &= 0xc;
        ecx = eax;
        esi = eax;
        eax &= 3;
        ebx = edx*4;
        ebx |= edx;
        ebx += ebx;
        ebx += ebx;
        ebp >>= 2;
        ebx |= ebp;
        ebx |= edx;
        dl = *((ebx + edi));
        ebx = eax*4;
        ebx |= eax;
        ebx += ebx;
        ebx += ebx;
        ebx |= eax;
        ebx += ebx;
        ebx += ebx;
        ebx |= eax;
        eax = *((ebx + edi));
        al >>= 2;
        dl &= 0xcf;
        dl |= al;
        esi &= 0x30;
        eax = esi;
        eax >>= 2;
        eax |= esi;
        eax >>= 2;
        ebx = esi*4;
        eax |= ebx;
        eax |= esi;
        eax = *((eax + edi));
        al &= 0xc3;
        ecx &= 0xc0;
        dl >>= 2;
        dl |= al;
        eax = ecx;
        eax >>= 2;
        eax |= ecx;
        eax >>= 2;
        eax |= ecx;
        eax >>= 2;
        eax |= ecx;
        cl = *((eax + edi));
        eax = *((esp + 0x10));
        dl >>= 2;
        cl &= 0xc0;
        dl |= cl;
        *(eax) = dl;
        eax++;
        *((esp + 0x10)) = eax;
    } while (eax != 0);
    edx = *((esp + 0x2c));
    eax = *((esp + 0x24));
    ebp = *((esp + 0x20));
    esi = *((esp + 0x18));
label_6:
    cl = *((ebp + 9));
    if (cl != 4) {
        goto label_7;
    }
    edx = eax;
    if (esi <= 0) {
        goto label_3;
    }
    esi += 0xffffffff;
    esi >>= 1;
    esi++;
    do {
        eax = *(edx);
        ecx = eax;
        ecx &= 0xf0;
        ebx = ecx;
        ebx >>= 4;
        ebx |= ecx;
        cl = *((ebx + edi));
        eax &= 0xf;
        ebx = eax;
        ebx <<= 4;
        ebx |= eax;
        al = *((ebx + edi));
        cl &= 0xf0;
        al >>= 4;
        cl |= al;
        *(edx) = cl;
        edx++;
        esi--;
    } while (esi != 0);
    return eax;
label_7:
    if (cl != 8) {
        goto label_8;
    }
    if (esi <= 0) {
        goto label_3;
    }
    do {
        ecx = *(eax);
        dl = *((ecx + edi));
        *(eax) = dl;
        eax++;
        esi--;
    } while (esi != 0);
    return eax;
label_8:
    if (cl != 0x10) {
        goto label_3;
    }
    if (esi <= 0) {
        goto label_3;
    }
    ebx = *((esp + 0x30));
    do {
        edi = *((eax + 1));
        cl = bl;
        edi >>= cl;
        ecx = *(eax);
        edi = *((edx + edi*4));
        ecx = *((edi + ecx*2));
        *(eax) = ch;
        *((eax + 1)) = cl;
        eax += 2;
        esi--;
    } while (esi != 0);
label_3:
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40c750 */
#include <stdint.h>
 
int32_t fcn_0040c750 (int32_t arg_8h, int32_t arg_ch) {
    esi = *((esp + 8));
    if (*((esi + 9)) != 0x10) {
        goto label_0;
    }
    edx = *((esi + 0xa));
    edx *= *(esi);
    eax = *((esp + 0xc));
    ecx = *((esp + 0xc));
    if (edx <= 0) {
        goto label_1;
    }
    edi = edx;
    do {
        dl = *(eax);
        *(ecx) = dl;
        eax += 2;
        ecx++;
        edi--;
    } while (edi != 0);
label_1:
    al = *((esi + 0xa));
    cl = *((esi + 0xa));
    cl += cl;
    cl += cl;
    edx = (int32_t) al;
    cl += cl;
    edx *= *(esi);
    *((esi + 9)) = 8;
    *((esi + 0xb)) = cl;
    *((esi + 4)) = edx;
label_0:
    esi = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40eff0 */
#include <stdint.h>
 
uint32_t fcn_0040eff0 (int32_t arg_8h, int32_t arg_1ch, int32_t arg_18h, int32_t arg_24h) {
    int32_t var_10h;
    edx = *((esp + 8));
    al = *((edx + 8));
    ebx = *(edx);
    ebp = *((esp + 0x18));
    *((esp + 0x10)) = ebx;
    if (al != 2) {
        goto label_0;
    }
    if (ebp == 0) {
        goto label_0;
    }
    if (*((edx + 9)) != 8) {
        goto label_0;
    }
    ecx = *((esp + 0x1c));
    edi = *((esp + 0x1c));
    if (ebx <= 0) {
        goto label_1;
    }
    do {
        eax = *(ecx);
        esi = *((ecx + 1));
        ecx++;
        edx = *((ecx + 1));
        eax &= 0xf8;
        eax <<= 5;
        ecx++;
        esi &= 0xf8;
        eax |= esi;
        eax += eax;
        edx >>= 3;
        eax += eax;
        edx &= 0x1f;
        eax |= edx;
        al = *((eax + ebp));
        *(edi) = al;
        ecx++;
        edi++;
        ebx--;
    } while (ebx != 0);
    ebx = *((esp + 0x10));
    edx = *((esp + 0x18));
label_1:
    al = *((edx + 9));
    *((edx + 0xb)) = al;
    *((edx + 8)) = 3;
    *((edx + 0xa)) = 1;
    eax = (int32_t) al;
    if (al < 8) {
        goto label_2;
    }
    eax >>= 3;
    eax *= ebx;
    *((edx + 4)) = eax;
    return eax;
label_0:
    if (al != 6) {
        goto label_3;
    }
    if (ebp == 0) {
        goto label_3;
    }
    if (*((edx + 9)) != 8) {
        goto label_3;
    }
    ecx = *((esp + 0x1c));
    edi = *((esp + 0x1c));
    if (ebx <= 0) {
        goto label_4;
    }
    do {
        eax = *(ecx);
        esi = *((ecx + 1));
        ecx++;
        edx = *((ecx + 1));
        eax &= 0xf8;
        ecx++;
        eax <<= 5;
        esi &= 0xf8;
        eax |= esi;
        eax += eax;
        edx >>= 3;
        edx &= 0x1f;
        eax += eax;
        eax |= edx;
        dl = *((eax + ebp));
        *(edi) = dl;
        ecx += 2;
        edi++;
        ebx--;
    } while (ebx != 0);
    ebx = *((esp + 0x10));
    edx = *((esp + 0x18));
label_4:
    al = *((edx + 9));
    *((edx + 0xb)) = al;
    *((edx + 8)) = 3;
    *((edx + 0xa)) = 1;
    eax = (int32_t) al;
    if (al >= 8) {
        eax >>= 3;
        eax *= ebx;
        *((edx + 4)) = eax;
        return eax;
    }
label_2:
    eax *= ebx;
    eax += 7;
    eax >>= 3;
    *((edx + 4)) = eax;
    return eax;
label_3:
    if (al != 3) {
        goto label_5;
    }
    esi = *((esp + 0x24));
    if (esi == 0) {
        goto label_5;
    }
    if (*((edx + 9)) != 8) {
        goto label_5;
    }
    eax = *((esp + 0x1c));
    if (ebx <= 0) {
        goto label_5;
    }
    do {
        ecx = *(eax);
        dl = *((ecx + esi));
        *(eax) = dl;
        eax++;
        ebx--;
    } while (ebx != 0);
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4109f0 */
#include <stdint.h>
 
int32_t fcn_004109f0 (int32_t arg_4h, int32_t arg_8h) {
    ecx = *((esp + 4));
    al = *((ecx + 8));
    if (al != 0) {
        goto label_0;
    }
    ecx = *((ecx + 4));
    eax = *((esp + 8));
    if (ecx <= 0) {
        goto label_1;
    }
    do {
        dl = *(eax);
        dl = ~dl;
        *(eax) = dl;
        eax++;
        ecx--;
    } while (ecx != 0);
    return eax;
label_0:
    if (al != 4) {
        goto label_1;
    }
    if (*((ecx + 9)) != 8) {
        goto label_2;
    }
    ecx = *((ecx + 4));
    eax = *((esp + 8));
    if (ecx <= 0) {
        goto label_1;
    }
    ecx += 0xffffffff;
    ecx >>= 1;
    ecx++;
    do {
        dl = *(eax);
        dl = ~dl;
        *(eax) = dl;
        eax += 2;
        ecx--;
    } while (ecx != 0);
    return eax;
label_2:
    if (al != 4) {
        goto label_1;
    }
    if (*((ecx + 9)) != 0x10) {
        goto label_1;
    }
    ecx = *((ecx + 4));
    if (ecx <= 0) {
        goto label_1;
    }
    eax = *((esp + 8));
    ecx += 0xffffffff;
    ecx >>= 2;
    eax++;
    ecx++;
    do {
        edx = *((eax - 1));
        dl = ~dl;
        *((eax - 1)) = dl;
        edx = *(eax);
        dl = ~dl;
        *(eax) = dl;
        eax += 4;
        ecx--;
    } while (ecx != 0);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40c570 */
#include <stdint.h>
 
uint32_t fcn_0040c570 (int32_t arg_4h, int32_t arg_28h, int32_t arg_20h) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    edx = *((esp + 4));
    bl = *((edx + 8));
    if (bl == 3) {
        goto label_0;
    }
    ecx = *((esp + 0x20));
    ebp = *(edx);
    esi = 0;
    *((esp + 0x24)) = esi;
    if ((bl & 2) != 0) {
        eax = *((edx + 9));
        esi = *(ecx);
        edi = eax;
        edi -= esi;
        esi = *((ecx + 1));
        *((esp + 0x10)) = edi;
        edi = eax;
        edi -= esi;
        esi = *((ecx + 2));
        eax -= esi;
        esi = *((esp + 0x24));
        *((esp + 0x14)) = edi;
        *((esp + 0x18)) = eax;
        edi = 3;
    } else {
        eax = *((ecx + 3));
        edi = *((edx + 9));
        edi -= eax;
        *((esp + 0x10)) = edi;
        edi = 1;
    }
    if ((bl & 4) != 0) {
        ecx = *((ecx + 4));
        eax = *((edx + 9));
        eax -= ecx;
        *((esp + edi*4 + 0x10)) = eax;
        edi++;
    }
    ecx = 0;
    eax = 0;
    if (edi <= ecx) {
        goto label_1;
    }
    do {
        if (*((esp + eax*4 + 0x10)) <= ecx) {
            *((esp + eax*4 + 0x10)) = ecx;
        } else {
            esi = 1;
        }
        eax++;
    } while (eax < edi);
    if (si == cx) {
        goto label_1;
    }
    eax = *((edx + 9));
    eax += 0xfffffffe;
    if (eax > 0xe) {
        goto label_1;
    }
    eax = *((eax + 0x40c734));
    /* switch table (15 cases) at 0x40c720 */
    edx = *((edx + 4));
    eax = *((esp + 0x28));
    if (edx <= ecx) {
        goto label_1;
    }
    do {
        cl = *(eax);
        cl >>= 1;
        cl &= 0x55;
        *(eax) = cl;
        eax++;
        edx--;
    } while (edx != 0);
    return eax;
    edi = *((edx + 4));
    edx = *((esp + 0x10));
    esi = *((esp + 0x28));
    ecx = edx;
    eax = 0xf0;
    eax >>= cl;
    ebx = 0xf;
    ebx >>= cl;
    al &= 0xf0;
    al |= bl;
    if (edi <= 0) {
        goto label_1;
    }
    do {
        bl = *(esi);
        cl = dl;
        bl >>= cl;
        esi++;
        bl &= al;
        edi--;
        *((esi - 1)) = bl;
    } while (edi != 0);
    return eax;
    esi = *((esp + 0x28));
    ebp *= edi;
    ebx = 0;
    if (ebp <= 0) {
        goto label_1;
    }
    do {
        eax = ebx;
        edx = 0;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        ebx++;
        esi++;
        cl = *((esp + edx*4 + 0x10));
        *((esi - 1)) >>= cl;
    } while (ebx < ebp);
    return eax;
    esi = *((esp + 0x28));
    ebp *= edi;
    ebx = 0;
    if (ebp <= 0) {
        goto label_1;
    }
    do {
        eax = ebx;
        edx = 0;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        ax = *(esi);
        ecx = *((esi + 1));
        ax <<= 8;
        ax += cx;
        esi++;
        ebx++;
        esi++;
        ecx = *((esp + edx*4 + 0x10));
        ax >>= cl;
        eax = (int32_t) ax;
        *((esi - 2)) = ah;
        *((esi - 1)) = al;
    } while (ebx < ebp);
label_1:
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40c430 */
#include <stdint.h>
 
uint32_t fcn_0040c430 (int32_t arg_4h, int32_t arg_18h) {
    edx = *((esp + 4));
    al = *((edx + 9));
    if (al >= 8) {
        goto label_0;
    }
    eax = (int32_t) al;
    eax--;
    edi = *(edx);
    if (eax == 0) {
        goto label_1;
    }
    eax--;
    if (eax == 0) {
        goto label_2;
    }
    eax -= 2;
    if (eax != 0) {
        goto label_3;
    }
    eax = *((esp + 0x18));
    ecx = edi - 1;
    esi = ecx;
    esi >>= 1;
    esi += eax;
    ebp = edi + eax - 1;
    ecx &= 1;
    eax = 1;
    eax -= ecx;
    eax += eax;
    eax += eax;
    if (edi <= 0) {
        goto label_3;
    }
    *((esp + 0x14)) = edi;
    do {
        bl = *(esi);
        cl = al;
        bl >>= cl;
        bl &= 0xf;
        *(ebp) = bl;
        if (eax == 4) {
            eax = 0;
            esi--;
        } else {
            eax = 4;
        }
        ebp--;
    } while (ebp != 0);
    goto label_3;
label_2:
    eax = *((esp + 0x18));
    ecx = edi - 1;
    esi = ecx;
    esi >>= 2;
    esi += eax;
    ebp = edi + eax - 1;
    ecx &= 3;
    eax = 3;
    eax -= ecx;
    eax += eax;
    if (edi <= 0) {
        goto label_3;
    }
    edx = edi;
    do {
        bl = *(esi);
        cl = al;
        bl >>= cl;
        bl &= 3;
        *(ebp) = bl;
        if (eax == 6) {
            eax = 0;
            esi--;
        } else {
            eax += 2;
        }
        ebp--;
        edx--;
    } while (edx != 0);
    goto label_4;
label_1:
    eax = *((esp + 0x18));
    ecx = edi - 1;
    esi = ecx;
    esi >>= 3;
    esi += eax;
    ebp = edi + eax - 1;
    ecx &= 7;
    eax = 7;
    eax -= ecx;
    if (edi <= 0) {
        goto label_3;
    }
    edx = edi;
    do {
        bl = *(esi);
        cl = al;
        bl >>= cl;
        bl &= 1;
        *(ebp) = bl;
        if (eax == 7) {
            eax = 0;
            esi--;
        } else {
            eax++;
        }
        ebp--;
        edx--;
    } while (edx != 0);
label_4:
    edx = *((esp + 0x14));
label_3:
    al = *((edx + 0xa));
    cl = *((edx + 0xa));
    cl += cl;
    cl += cl;
    eax = (int32_t) al;
    cl += cl;
    eax *= edi;
    *((edx + 9)) = 8;
    *((edx + 0xb)) = cl;
    *((edx + 4)) = eax;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x410dd0 */
#include <stdint.h>
 
int32_t fcn_00410dd0 (int32_t arg_4h, int32_t arg_ch) {
    eax = *((esp + 4));
    dl = *((eax + 8));
    if ((dl & 2) == 0) {
        goto label_0;
    }
    ecx = *(eax);
    al = *((eax + 9));
    if (al != 8) {
        goto label_1;
    }
    if (dl != 2) {
        goto label_2;
    }
    eax = *((esp + 0xc));
    if (ecx <= 0) {
        goto label_3;
    }
    esi = ecx;
    do {
        cl = *(eax);
        dl = *((eax + 2));
        *(eax) = dl;
        *((eax + 2)) = cl;
        eax += 3;
        esi--;
    } while (esi != 0);
    return eax;
label_2:
    if (dl != 6) {
        goto label_3;
    }
    eax = *((esp + 0xc));
    if (ecx <= 0) {
        goto label_3;
    }
    esi = ecx;
    while (esi != 0) {
        cl = *(eax);
        dl = *((eax + 2));
        *(eax) = dl;
        *((eax + 2)) = cl;
        eax += 4;
        esi--;
    }
    return eax;
label_1:
    if (al != 0x10) {
        goto label_3;
    }
    if (dl != 2) {
        goto label_4;
    }
    if (ecx <= 0) {
        goto label_3;
    }
    eax = *((esp + 0xc));
    eax++;
    esi = ecx;
    do {
        edx = *((eax + 3));
        cl = *((eax - 1));
        *((eax - 1)) = dl;
        edx = *((eax + 4));
        *((eax + 3)) = cl;
        cl = *(eax);
        *(eax) = dl;
        *((eax + 4)) = cl;
        eax += 6;
        esi--;
    } while (esi != 0);
    return eax;
label_4:
    if (dl != 6) {
        goto label_3;
    }
    if (ecx <= 0) {
        goto label_3;
    }
    eax = *((esp + 0xc));
    eax++;
    esi = ecx;
    do {
        edx = *((eax + 3));
        cl = *((eax - 1));
        *((eax - 1)) = dl;
        edx = *((eax + 4));
        *((eax + 3)) = cl;
        cl = *(eax);
        *(eax) = dl;
        *((eax + 4)) = cl;
        eax += 8;
        esi--;
    } while (esi != 0);
label_3:
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x410ac0 */
#include <stdint.h>
 
int32_t fcn_00410ac0 (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    dl = *((eax + 9));
    if (dl >= 8) {
        goto label_0;
    }
    ecx = *((eax + 4));
    eax = *((esp + 8));
    ecx += eax;
    if (dl == 1) {
        esi = 0x41c040;
    } else {
        if (dl == 2) {
            esi = 0x41c140;
        } else {
            if (dl != 4) {
                goto label_1;
            }
            esi = 0x41c240;
        }
    }
    if (eax >= ecx) {
        goto label_1;
    }
    do {
        edx = *(eax);
        dl = *((edx + esi));
        *(eax) = dl;
        eax++;
    } while (eax < ecx);
label_1:
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40ca00 */
#include <stdint.h>
 
int32_t fcn_0040ca00 (int32_t arg_8h, int32_t arg_9h, int32_t arg_ah, int32_t arg_bh, int32_t arg_ch_2, int32_t arg_18h, int32_t arg_ch, int32_t arg_20h) {
    int32_t var_4h;
    edx = *((esp + 0xc));
    ebp = *((esp + 0xc));
    al = *((ebp + 8));
    ebx = edx;
    esi = *(ebp);
    ebx >>= 8;
    *((esp + 0x14)) = bl;
    if (al != 0) {
        goto label_0;
    }
    al = *((ebp + 9));
    if (al != 8) {
        goto label_1;
    }
    eax = *((esp + 0x18));
    edi = esi + eax;
    eax = edi + esi;
    if ((*((esp + 0x20)) & 0x80) == 0) {
        goto label_2;
    }
    if (esi <= 1) {
        goto label_3;
    }
    ecx = esi - 1;
    do {
        eax--;
        *(eax) = dl;
        bl = *((edi - 1));
        edi--;
        eax--;
        ecx--;
        *(eax) = bl;
    } while (ecx != 0);
label_3:
    *((eax - 1)) = dl;
    ecx = esi + esi;
    *((ebp + 0xa)) = 2;
    *((ebp + 0xb)) = 0x10;
    *((ebp + 4)) = ecx;
    return eax;
label_2:
    if (esi <= 0) {
        goto label_4;
    }
    ecx = esi;
    do {
        bl = *((edi - 1));
        edi--;
        eax--;
        *(eax) = bl;
        eax--;
        ecx--;
        *(eax) = dl;
    } while (ecx != 0);
label_4:
    ecx = esi + esi;
    *((ebp + 0xa)) = 2;
    *((ebp + 0xb)) = 0x10;
    *((ebp + 4)) = ecx;
    return eax;
label_1:
    if (al != 0x10) {
        goto label_5;
    }
    eax = *((esp + 0x18));
    edi = eax + esi*2;
    eax = edi + esi*2;
    if ((*((esp + 0x20)) & 0x80) == 0) {
        goto label_6;
    }
    if (esi <= 1) {
        goto label_7;
    }
    ecx = esi - 1;
    *((esp + 0x14)) = ecx;
    do {
        *((eax - 1)) = bl;
        eax--;
        eax--;
        *(eax) = dl;
        ecx = *((edi - 1));
        edi--;
        eax--;
        *(eax) = cl;
        ecx = *((edi - 1));
        edi--;
        eax--;
        *(eax) = cl;
    } while (eax != 0);
label_7:
    *((eax - 1)) = bl;
    eax--;
    *((eax - 1)) = dl;
    edx = esi*4;
    *((ebp + 0xa)) = 2;
    *((ebp + 0xb)) = 0x20;
    *((ebp + 4)) = edx;
    return eax;
label_6:
    if (esi <= 0) {
        goto label_8;
    }
    *((esp + 0x14)) = esi;
    do {
        ecx = *((edi - 1));
        edi--;
        eax--;
        *(eax) = cl;
        ecx = *((edi - 1));
        edi--;
        eax--;
        *(eax) = cl;
        eax--;
        *(eax) = bl;
        eax--;
        *(eax) = dl;
    } while (eax != 0);
label_8:
    edx = esi*4;
    *((ebp + 0xa)) = 2;
    *((ebp + 0xb)) = 0x20;
    *((ebp + 4)) = edx;
    return eax;
label_0:
    if (al != 2) {
        goto label_5;
    }
    al = *((ebp + 9));
    if (al != 8) {
        goto label_9;
    }
    eax = *((esp + 0x18));
    edi = eax + esi*2;
    edi += esi;
    eax = edi + esi;
    if ((*((esp + 0x20)) & 0x80) == 0) {
        goto label_10;
    }
    if (esi <= 1) {
        goto label_11;
    }
    ecx = esi - 1;
    do {
        *((eax - 1)) = dl;
        ebx = *((edi - 1));
        eax--;
        edi--;
        eax--;
        *(eax) = bl;
        ebx = *((edi - 1));
        edi--;
        eax--;
        *(eax) = bl;
        ebx = *((edi - 1));
        edi--;
        eax--;
        ecx--;
        *(eax) = bl;
    } while (ecx != 0);
label_11:
    *((eax - 1)) = dl;
    goto label_12;
label_10:
    if (esi <= 0) {
        goto label_12;
    }
    ecx = esi;
    while (ecx != 0) {
        ebx = *((edi - 1));
        edi--;
        *((eax - 1)) = bl;
        ebx = *((edi - 1));
        eax--;
        edi--;
        eax--;
        *(eax) = bl;
        ebx = *((edi - 1));
        edi--;
        eax--;
        *(eax) = bl;
        eax--;
        ecx--;
        *(eax) = dl;
    }
label_12:
    ecx = esi*4;
    *((ebp + 0xa)) = 4;
    *((ebp + 0xb)) = 0x20;
    *((ebp + 4)) = ecx;
    return eax;
label_9:
    if (al != 0x10) {
        goto label_5;
    }
    ecx = *((esp + 0x18));
    eax = esi * 3;
    ecx = ecx + eax*2;
    eax = ecx + esi*2;
    if ((*((esp + 0x20)) & 0x80) == 0) {
        goto label_13;
    }
    if (esi <= 1) {
        goto label_14;
    }
    edi = esi - 1;
    do {
        *((eax - 1)) = bl;
        eax--;
        *((eax - 1)) = dl;
        ebx = *((ecx - 1));
        eax--;
        *((eax - 1)) = bl;
        ecx--;
        ebx = *((ecx - 1));
        eax--;
        *((eax - 1)) = bl;
        ecx--;
        ebx = *((ecx - 1));
        eax--;
        ecx--;
        *((eax - 1)) = bl;
        ebx = *((ecx - 1));
        eax--;
        ecx--;
        *((eax - 1)) = bl;
        ebx = *((ecx - 1));
        eax--;
        ecx--;
        eax--;
        *(eax) = bl;
        ebx = *((ecx - 1));
        ecx--;
        eax--;
        edi--;
        *(eax) = bl;
        bl = *((esp + 0x14));
    } while (edi != 0);
label_14:
    eax--;
    *(eax) = bl;
    *((eax - 1)) = dl;
    goto label_15;
label_13:
    if (esi <= 0) {
        goto label_15;
    }
    edi = esi;
    do {
        ebx = *((ecx - 1));
        *((eax - 1)) = bl;
        ecx--;
        ebx = *((ecx - 1));
        eax--;
        *((eax - 1)) = bl;
        ecx--;
        ebx = *((ecx - 1));
        eax--;
        *((eax - 1)) = bl;
        ecx--;
        ebx = *((ecx - 1));
        eax--;
        *((eax - 1)) = bl;
        ecx--;
        ebx = *((ecx - 1));
        eax--;
        ecx--;
        *((eax - 1)) = bl;
        ebx = *((ecx - 1));
        eax--;
        ecx--;
        eax--;
        *(eax) = bl;
        ebx = *((esp + 0x14));
        eax--;
        *(eax) = bl;
        eax--;
        edi--;
        *(eax) = dl;
    } while (edi != 0);
label_15:
    edx = esi*8;
    *((ebp + 0xb)) = 0x40;
    *((ebp + 0xa)) = 4;
    *((ebp + 4)) = edx;
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40c920 */
#include <stdint.h>
 
int32_t fcn_0040c920 (int32_t arg_4h, int32_t arg_ch) {
    eax = *((esp + 4));
    cl = *((eax + 8));
    edx = *(eax);
    if (cl != 6) {
        goto label_0;
    }
    eax = *((eax + 4));
    if (*((eax + 9)) != 8) {
        goto label_1;
    }
    eax += *((esp + 0xc));
    if (edx <= 0) {
        goto label_2;
    }
    do {
        eax--;
        cl |= 0xff;
        cl -= *(eax);
        eax -= 3;
        edx--;
        *((eax + 3)) = cl;
    } while (edx != 0);
    return eax;
label_1:
    eax += *((esp + 0xc));
    if (edx <= 0) {
        goto label_2;
    }
    esi = edx;
    do {
        eax--;
        dl |= 0xff;
        dl -= *(eax);
        ecx = eax;
        *(ecx) = dl;
        eax--;
        dl |= 0xff;
        dl -= *(eax);
        eax -= 6;
        esi--;
        *((ecx - 1)) = dl;
    } while (esi != 0);
    return eax;
label_0:
    if (cl != 4) {
        goto label_2;
    }
    eax = *((eax + 4));
    if (*((eax + 9)) != 8) {
        goto label_3;
    }
    eax += *((esp + 0xc));
    ecx = eax;
    if (edx <= 0) {
        goto label_2;
    }
    esi = edx;
    do {
        eax--;
        dl |= 0xff;
        dl -= *(eax);
        ecx--;
        *(ecx) = dl;
        dl = *((eax - 1));
        eax--;
        ecx--;
        esi--;
        *(ecx) = dl;
    } while (esi != 0);
    return eax;
label_3:
    eax += *((esp + 0xc));
    if (edx <= 0) {
        goto label_2;
    }
    esi = edx;
    while (esi != 0) {
        eax--;
        dl |= 0xff;
        dl -= *(eax);
        ecx = eax;
        *(ecx) = dl;
        eax--;
        dl |= 0xff;
        dl -= *(eax);
        eax -= 2;
        esi--;
        *((ecx - 1)) = dl;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x40c7a0 */
#include <stdint.h>
 
int32_t fcn_0040c7a0 (int32_t arg_4h, int32_t arg_dh, int32_t arg_10h) {
    eax = *((esp + 4));
    cl = *((eax + 8));
    edx = *(eax);
    if (cl != 6) {
        goto label_0;
    }
    eax = *((eax + 4));
    if (*((eax + 9)) != 8) {
        goto label_1;
    }
    eax += *((esp + 0x10));
    ecx = eax;
    if (edx <= 0) {
        goto label_2;
    }
    esi = edx;
    do {
        dl = *((eax - 1));
        eax--;
        ebx = *((eax - 1));
        eax--;
        *((ecx - 1)) = bl;
        ebx = *((eax - 1));
        ecx--;
        eax--;
        ecx--;
        *(ecx) = bl;
        ebx = *((eax - 1));
        eax--;
        ecx--;
        *(ecx) = bl;
        ecx--;
        esi--;
        *(ecx) = dl;
    } while (esi != 0);
    ebx = esi;
    return eax;
label_1:
    eax += *((esp + 0x10));
    ecx = eax;
    if (edx <= 0) {
        goto label_2;
    }
    esi = edx;
    while (esi != 0) {
        dl = *((eax - 1));
        eax--;
        ebx = *((eax - 1));
        eax--;
        eax--;
        *((esp + 0xd)) = bl;
        ebx = *(eax);
        *((ecx - 1)) = bl;
        ebx = *((eax - 1));
        ecx--;
        *((ecx - 1)) = bl;
        eax--;
        ebx = *((eax - 1));
        ecx--;
        *((ecx - 1)) = bl;
        eax--;
        ebx = *((eax - 1));
        ecx--;
        eax--;
        *((ecx - 1)) = bl;
        ebx = *((eax - 1));
        ecx--;
        eax--;
        ecx--;
        *(ecx) = bl;
        ebx = *((eax - 1));
        eax--;
        ecx--;
        *(ecx) = bl;
        ecx--;
        *(ecx) = dl;
        edx = *((esp + 0xd));
        ecx--;
        esi--;
        *(ecx) = dl;
    }
    return eax;
label_0:
    if (cl != 4) {
        goto label_2;
    }
    eax = *((eax + 4));
    if (*((eax + 9)) != 8) {
        goto label_3;
    }
    eax += *((esp + 0x10));
    ecx = eax;
    if (edx <= 0) {
        goto label_2;
    }
    esi = edx;
    do {
        dl = *((eax - 1));
        eax--;
        bl = *((eax - 1));
        eax--;
        ecx--;
        *(ecx) = bl;
        ecx--;
        esi--;
        *(ecx) = dl;
    } while (esi != 0);
    return eax;
label_3:
    eax += *((esp + 0x10));
    ecx = eax;
    if (edx <= 0) {
        goto label_2;
    }
    esi = edx;
    while (esi != 0) {
        dl = *((eax - 1));
        eax--;
        ebx = *((eax - 1));
        eax--;
        eax--;
        *((esp + 0xd)) = bl;
        ebx = *(eax);
        ecx--;
        *(ecx) = bl;
        ebx = *((eax - 1));
        eax--;
        ecx--;
        *(ecx) = bl;
        ecx--;
        *(ecx) = dl;
        edx = *((esp + 0xd));
        ecx--;
        esi--;
        *(ecx) = dl;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x410a80 */
#include <stdint.h>
 
int32_t fcn_00410a80 (int32_t arg_4h, int32_t arg_8h) {
    edx = *((esp + 4));
    if (*((edx + 9)) != 0x10) {
        goto label_0;
    }
    ecx = *((edx + 0xa));
    ecx *= *(edx);
    eax = *((esp + 8));
    if (ecx <= 0) {
        goto label_0;
    }
    esi = ecx;
    do {
        cl = *(eax);
        dl = *((eax + 1));
        *(eax) = dl;
        *((eax + 1)) = cl;
        eax += 2;
        esi--;
    } while (esi != 0);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412775 */
#include <stdint.h>
 
uint32_t fcn_00412775 (int32_t arg_4h) {
    eax = fcn_004126d6 (*((esp + 4)));
    eax = -eax;
    eax -= eax;
    eax = -eax;
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4126d6 */
#include <stdint.h>
 
uint32_t fcn_004126d6 (int32_t arg_8h) {
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    fcn_004128cc (0x41af28);
    eax = _decode_pointer (*(0x41cee0));
    *((ebp - 0x1c)) = eax;
    if (eax == -1) {
        _onexit (*((ebp + 8)));
    } else {
        _lock (8);
        *((ebp - 4)) = 0;
        eax = void (*esi)(uint32_t*) (*(0x41cee0));
        *((ebp - 0x1c)) = eax;
        eax = void (*esi)(uint32_t*) (*(0x41cedc));
        *((ebp - 0x20)) = eax;
        eax = _dllonexit (*((ebp + 8)), ebp - 0x1c, ebp - 0x20);
        *((ebp - 0x24)) = eax;
        eax = _encode_pointer (*((ebp - 0x1c)));
        *(0x41cee0) = eax;
        eax = _encode_pointer (*((ebp - 0x20)));
        *(0x41cedc) = eax;
        *((ebp - 4)) = 0xfffffffe;
        fcn_0041276c ();
        eax = *((ebp - 0x24));
    }
    fcn_00412911 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4126d0 */
#include <stdint.h>
 
void _amsg_exit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4128cc */
#include <stdint.h>
 
int32_t fcn_004128cc (int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    eax = *((esp + 0x10));
    *((esp + 0x10)) = ebp;
    ebp = esp + 0x10;
    eax = *(0x41c340);
    *((ebp - 4)) ^= eax;
    eax ^= ebp;
    *((ebp - 0x18)) = esp;
    eax = *((ebp - 4));
    *((ebp - 4)) = 0xfffffffe;
    *((ebp - 8)) = eax;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4128c4 */
#include <stdint.h>
 
void _initterm_e (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4128be */
#include <stdint.h>
 
void _initterm (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412852 */
#include <stdint.h>
 
uint32_t fcn_00412852 (int32_t arg_8h) {
    int32_t var_4h;
    fcn_004128cc (0x41af48);
    *((ebp - 4)) = 0;
    edx = 0x400000;
    eax = fcn_004127e0 (edx);
    if (eax != 0) {
        eax = *((ebp + 8));
        eax -= edx;
        eax = fcn_00412810 (edx, eax);
        if (eax != 0) {
            eax = *((eax + 0x24));
            eax >>= 0x1f;
            eax = ~eax;
            eax &= 1;
            *((ebp - 4)) = 0xfffffffe;
        }
    } else {
        *((ebp - 4)) = 0xfffffffe;
        eax = 0;
    }
    fcn_00412911 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4035b0 */
#include <stdint.h>
 
uint32_t fcn_004035b0 (void) {
    int32_t var_14h;
    int32_t var_18h;
    uint32_t var_1ch;
    int32_t var_20h;
    int32_t var_20h_2;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_2ch;
    int32_t var_3ch;
    int32_t var_40h_2;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_48h;
    int32_t var_48h_2;
    int32_t var_4ch;
    int32_t var_50h;
    int32_t var_58h;
    int32_t var_64h;
    int32_t var_68h;
    edi = 0;
    *((esp + 0x14)) = 0xc8;
    *((esp + 0x1c)) = edi;
    printf (edi);
    printf (rdi);
    printf (rdi);
    printf (rdi);
    printf (rdi);
    printf (rdi);
    printf (rdi);
    printf (rdi);
    fcn_00402780 ();
    fcn_004023d0 (esp + 0x48, esp + 0x18, "blockfont.png");
    edx = 0x100;
    ecx = esp + 0x14;
    fcn_00402230 ();
    eax = esp + 0x40;
    eax = fcn_00401e50 ();
    *(0x47883c) = eax;
    eax = fcn_00401d00 ();
    fcn_004022c0 (eax);
    fcn_00402340 ();
    ebx = *(0x478824);
    esi = *((ebx + 0xc));
    if (*((ebx + 4)) <= edi) {
        goto label_0;
    }
    do {
        edx = *(ebx);
        memset (esi, 0, edx);
        esi += *((ebx + 8));
        edi++;
    } while (edi < *((ebx + 4)));
label_0:
    eax = *((ebx + 0xc));
    ecx = *((ebx + 8));
    edx = esp + 0x20;
    *((esp + 0x40)) = eax;
    eax = esp + 0x58;
    esi = 0x140;
    fcn_004023d0 (esi);
    ecx = *((esp + 0x68));
    edx = *((esp + 0x64));
    eax = esp + 0x3c;
    *((esp + 0x50)) = ecx;
    *((esp + 0x44)) = esi;
    *((esp + 0x48)) = 0x14;
    eax = fcn_00401a40 (edx);
    edi = eax;
    *((esp + 0x20)) = edi;
    fcn_00403ef0 ();
    eax = esp + 0x30;
    eax = fcn_00403190 ();
    *((esp + 0x28)) = eax;
    eax = fcn_00404080 ();
    *((esp + 0x14)) = eax;
    eax = fcn_00404fd0 ();
    *((esp + 0x24)) = eax;
    eax = fcn_00402aa0 ();
    edx = 0x100;
    ecx = esp + 0x1c;
    *((esp + 0x2c)) = eax;
    fcn_00402230 ();
    ecx = *(0x478834);
    Player_Start (ecx);
    while (*((esp + 0x18)) == 0) {
        edi = *((esp + 0x20));
        eax = *(0x478834);
        esi = *((eax + 0x104));
        eax = *((eax + 0x106));
        if (eax <= 9) {
            /* switch table (10 cases) at 0x403a24 */
            ecx = *((esp + 0x14));
            eax = esi*4;
            edx:eax = (int64_t) eax;
            edx &= 0x3f;
            edx += eax;
            edx >>= 6;
            eax = esp + 0x34;
            edx++;
            fcn_004042f0 (eax, 0, 0);
            goto label_1;
            ecx = esi*4;
            eax = 0x92492493;
            edx:eax = eax * ecx;
            edx += ecx;
            edx >>= 4;
            ecx = edx;
            ecx >>= 0x1f;
            ecx += edx;
            eax = 4;
            eax -= ecx;
            if (eax > 4) {
                edx = 4;
            } else {
                edx = 0;
                dl = (eax < 0) ? 1 : 0;
                edx--;
                edx &= eax;
            }
            ecx = *((esp + 0x14));
            eax = esp + 0x34;
            fcn_004042f0 (eax, 2, 1);
            goto label_1;
            ecx = esp + 0x34;
            ecx = *((esp + 0x20));
            edx = 0;
            fcn_004042f0 (ecx, 2, 1);
            goto label_1;
            if (esi > 0x14) {
                edx = esi;
                edx &= 0xf;
                if (dl == 3) {
                    eax = 1;
                }
            } else {
                eax = 0;
            }
            eax = 0;
            al = (esi > 0xf) ? 1 : 0;
            edi = esp + 0x3c;
            fcn_00401b90 (edi, eax, eax);
            eax = *((esp + 0x1c));
            if (eax <= 0xb4) {
                goto label_1;
            }
            eax--;
            *((esp + 0x10)) = eax;
            ecx = esp + 0x44;
            edx = 0;
            eax = ebx;
            fcn_00402150 (eax);
            goto label_1;
            ecx = esi;
            edx = 0;
            ecx &= 0xf;
            dl = (cl == 3) ? 1 : 0;
            edi = esp + 0x3c;
            fcn_00401b90 (edi, 1, edx);
            goto label_1;
            fcn_00403fb0 (esp + 0x30);
            goto label_1;
            ecx = esi;
            ecx &= 0xf;
            edx = 0;
            ecx = *((esp + 0x24));
            dl = (cl == 0xb) ? 1 : 0;
            eax = esp + 0x30;
            eax = fcn_00405030 (eax, edx);
            goto label_1;
            ecx = 0;
            cl = (esi > 0x2d) ? 1 : 0;
            eax = 0;
            edx = esi;
            dl &= 7;
            al = (dl == 4) ? 1 : 0;
            edx = 0;
            ecx = esi;
            ecx &= 0xf;
            ecx = *((esp + 0x2c));
            dl = (cl == 0xa) ? 1 : 0;
            eax = esp + 0x38;
            fcn_004032d0 (edx, eax, ecx);
            if (esi <= 0x38) {
                goto label_1;
            }
            if (*((esp + 0x10)) >= 0xc8) {
                goto label_1;
            }
            esi = *((esp + 0x10));
            esi++;
            ecx = esp + 0x44;
            edx = 0;
            eax = ebx;
            fcn_00402150 (esi);
            eax = *(ebx);
            ecx = esi - 1;
            eax = 1;
            edi = ebx;
            fcn_004020e0 (0, 0, eax);
            goto label_1;
            ecx = esi + esi;
            edx = 0x7f;
            edx -= ecx;
            Player_SetVolume (edx);
            if (esi == 0x3f) {
                *((esp + 0x18)) = 1;
            }
            eax = *((esp + 0x2c));
            eax = esp + 0x34;
            fcn_00402b70 (eax);
        } else {
        }
label_1:
        MikMod_Update (1);
        ecx = *(0x41ce90);
        SDL_Flip (ecx);
        fcn_00402900 (ebx);
        eax = fcn_004028a0 ();
        if (eax != 0) {
            if (*(0x47850c) == 0x1b) {
                goto label_2;
            }
        }
    }
label_2:
    MikMod_Exit ();
    void (*ebp)(uint32_t) (0x41a970);
    void (*ebp)(char*) ("(defcredits :code '(avoozl smoke)\n");
    void (*ebp)(char*) ("            :gfx '(smoke)\n");
    void (*ebp)(char*) ("            :guest-music '(floppi))\n");
    void (*ebp)(uint32_t) (0x41a970);
    void (*ebp)(char*) ("(defemail (('smoke \"smoke@casema.net\")\n");
    void (*ebp)(char*) ("           ('avoozl \"jrk@panic.et.tudelft.nl\")\n");
    void (*ebp)(char*) ("           ('floppi \"tero.laihanen@sci.fi\"))\n");
    eax = void (*ebp)(uint32_t) (0x41a970);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4127d0 */
#include <stdint.h>
 
void _XcptFilter (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412911 */
#include <stdint.h>
 
void fcn_00412911 (void) {
    int32_t var_10h;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412787 */
#include <stdint.h>
 
int32_t fcn_00412787 (void) {
    eax = 0x41aef8;
    edi = 0x41aef8;
    esi = eax;
    if (eax >= edi) {
        goto label_0;
    }
    do {
        eax = *(esi);
        if (eax != 0) {
            void (*eax)() ();
        }
        esi += 4;
    } while (esi < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412971 */
#include <stdint.h>
 
int32_t fcn_00412971 (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412948 */
#include <stdint.h>
 
uint32_t fcn_00412948 (void) {
    esi = 0;
    eax = _controlfp_s (esi, 0x10000, 0x30000, esi);
    if (eax != 0) {
        _invoke_watson (esi, esi, esi, esi, esi);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412aea */
#include <stdint.h>
 
void _controlfp_s (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412ae4 */
#include <stdint.h>
 
void _invoke_watson (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412974 */
#include <stdint.h>
 
int32_t fcn_00412974 (void) {
    LARGE_INTEGER * lpPerformanceCount;
    int32_t var_ch;
    LPFILETIME lpSystemTimeAsFileTime;
    int32_t var_4h;
    eax = *(0x41c340);
    *((ebp - 8)) = 0;
    *((ebp - 4)) = 0;
    edi = 0xbb40e64e;
    ebx = 0xffff0000;
    if (eax != edi) {
        if ((ebx & eax) != 0) {
            eax = ~eax;
            *(0x41c344) = eax;
        }
    } else {
        GetSystemTimeAsFileTime (ebp - 8, esi);
        esi = *((ebp - 4));
        esi ^= *((ebp - 8));
        eax = GetCurrentProcessId ();
        esi ^= eax;
        eax = GetCurrentThreadId ();
        esi ^= eax;
        eax = GetTickCount ();
        esi ^= eax;
        QueryPerformanceCounter (ebp - 0x10);
        eax = *((ebp - 0xc));
        eax ^= *((ebp - 0x10));
        esi ^= eax;
        if (esi == edi) {
            esi = 0xbb40e64f;
        } else {
            if ((ebx & esi) != 0) {
                goto label_0;
            }
            eax = esi;
            eax <<= 0x10;
            esi |= eax;
        }
label_0:
        *(0x41c340) = esi;
        esi = ~esi;
        *(0x41c344) = esi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412ad8 */
#include <stdint.h>
 
void _lock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412ad2 */
#include <stdint.h>
 
void _dllonexit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x41276c */
#include <stdint.h>
 
void fcn_0041276c (void) {
    _unlock (8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412acc */
#include <stdint.h>
 
void _unlock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x4127e0 */
#include <stdint.h>
 
int32_t fcn_004127e0 (int32_t arg_4h) {
    ecx = *((esp + 4));
    while (*(eax) != 0x4550) {
        eax = 0;
        return eax;
        eax = *((ecx + 0x3c));
        eax += ecx;
    }
    ecx = 0;
    cl = (*((eax + 0x18)) == 0x10b) ? 1 : 0;
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412810 */
#include <stdint.h>
 
int32_t fcn_00412810 (int32_t arg_4h, int32_t arg_14h) {
    eax = *((esp + 4));
    ecx = *((eax + 0x3c));
    ecx += eax;
    eax = *((ecx + 0x14));
    esi = *((ecx + 6));
    edx = 0;
    eax = eax + ecx + 0x18;
    if (esi <= 0) {
        goto label_0;
    }
    edi = *((esp + 0x14));
    do {
        ecx = *((eax + 0xc));
        if (edi >= ecx) {
            ebx = *((eax + 8));
            ebx += ecx;
            if (edi < ebx) {
                goto label_1;
            }
        }
        edx++;
        eax += 0x28;
    } while (edx < esi);
label_0:
    eax = 0;
label_1:
    esi = edi;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412ade */
#include <stdint.h>
 
void _except_handler4_common (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412a08 */
#include <stdint.h>
 
void fcn_00412a08 (void) {
    int32_t var_1ch;
    int32_t var_4h;
    fcn_004128cc (0x41af68);
    *((ebp - 4)) = 0;
    __asm ("movapd xmm0, xmm1");
    *((ebp - 0x1c)) = 1;
    return void (*0x412a48)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412a48 */
#include <stdint.h>
 
int32_t loc_00412a48 (void) {
    int32_t var_1ch;
    int32_t var_4h;
    *((ebp - 4)) = 0xfffffffe;
    eax = *((ebp - 0x1c));
    fcn_00412911 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412a58 */
#include <stdint.h>
 
int32_t fcn_00412a58 (void) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = 0;
    *((ebp - 4)) = eax;
    *((ebp - 0xc)) = eax;
    *((ebp - 8)) = eax;
    __asm ("pushfd");
    eax = ebx;
    ecx = eax;
    eax ^= 0x200000;
    __asm ("popfd");
    __asm ("pushfd");
    edx = eax;
    edx -= ecx;
    if (edx != 0) {
        __asm ("popfd");
        eax = 0;
        __asm ("cpuid");
        *((ebp - 0xc)) = eax;
        *((ebp - 0x18)) = ebx;
        *((ebp - 0x14)) = edx;
        *((ebp - 0x10)) = ecx;
        eax = 1;
        __asm ("cpuid");
        *((ebp - 4)) = edx;
        *((ebp - 8)) = eax;
    }
    ebx = ecx;
    if ((*((ebp - 4)) & 0x4000000) != 0) {
        eax = fcn_00412a08 ();
        if (eax != 0) {
            eax = 0;
            eax++;
        }
    } else {
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x415030 */
#include <stdint.h>
 
int32_t fcn_00415030 (int32_t arg_4h, int32_t arg_14h, int32_t arg_10h) {
    ecx = *((esp + 4));
    ebx = *((esp + 0x10));
    edi = ecx;
    edi >>= 0x10;
    ecx &= 0xffff;
    if (ebx == 1) {
        eax = *((esp + 0x10));
        edx = *(eax);
        ecx += edx;
        if (ecx >= 0xfff1) {
            ecx -= 0xfff1;
        }
        edi += ecx;
        if (edi >= 0xfff1) {
            edi -= 0xfff1;
        }
        eax = edi;
        eax <<= 0x10;
        eax |= ecx;
        ebx = edi;
        return eax;
    }
    esi = *((esp + 0x14));
    if (esi == 0) {
        edi = esi;
        eax = 1;
        ebx = esi;
        return eax;
    }
    if (ebx >= 0x10) {
        goto label_1;
    }
    if (ebx == 0) {
        goto label_2;
    }
    do {
        eax = *(esi);
        ecx += eax;
        ebx--;
        esi++;
        edi += ecx;
    } while (ebx != 0);
label_2:
    if (ecx >= 0xfff1) {
        ecx -= 0xfff1;
    }
    eax = 0x80078071;
    edx:eax = eax * edi;
    edx >>= 0xf;
    eax = edx;
    eax <<= 4;
    eax -= edx;
    eax += edi;
    eax <<= 0x10;
    edi = esi;
    eax |= ecx;
    ebx = esi;
    return eax;
label_1:
    if (ebx < 0x15b0) {
        goto label_3;
    }
    eax = 0x5e6ea9af;
    edx:eax = eax * ebx;
    ebp >>= 0xb;
label_0:
    ebx -= 0x15b0;
    eax = 0x15b;
    while (eax != 0) {
        edx = *(esi);
        ecx += edx;
        edx = *((esi + 1));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 2));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 3));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 4));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 5));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 6));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 7));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 8));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 9));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 0xa));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 0xb));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 0xc));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 0xd));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 0xe));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 0xf));
        edi += ecx;
        ecx += edx;
        edi += ecx;
        esi += 0x10;
        eax--;
    }
    eax = 0x80078071;
    edx:eax = eax * ecx;
    edx >>= 0xf;
    edx *= 0xffff000f;
    ecx += edx;
    eax = 0x80078071;
    edx:eax = eax * edi;
    edx >>= 0xf;
    edx *= 0xffff000f;
    edi += edx;
    ebp--;
    if (ebp != 0) {
        goto label_0;
    }
label_3:
    if (ebx == 0) {
        goto label_4;
    }
    if (ebx < 0x10) {
        goto label_5;
    }
    eax = ebx;
    eax >>= 4;
    do {
        edx = *(esi);
        ecx += edx;
        edx = *((esi + 1));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 2));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 3));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 4));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 5));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 6));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 7));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 8));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 9));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 0xa));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 0xb));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 0xc));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 0xd));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 0xe));
        edi += ecx;
        ecx += edx;
        edx = *((esi + 0xf));
        edi += ecx;
        ecx += edx;
        ebx -= 0x10;
        edi += ecx;
        esi += 0x10;
        eax--;
    } while (eax != 0);
label_5:
    if (ebx == 0) {
        goto label_6;
    }
    do {
        eax = *(esi);
        ecx += eax;
        ebx--;
        esi++;
        edi += ecx;
    } while (ebx != 0);
label_6:
    eax = 0x80078071;
    edx:eax = eax * ecx;
    edx >>= 0xf;
    edx *= 0xffff000f;
    ecx += edx;
    eax = 0x80078071;
    edx:eax = eax * edi;
    edx >>= 0xf;
    edx *= 0xffff000f;
    edi += edx;
label_4:
    eax = edi;
    esi = ebp;
    eax <<= 0x10;
    edi = ebp;
    eax |= ecx;
    ebx = ebp;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412c40 */
#include <stdint.h>
 
void fcn_00412c40 (void) {
    *((eax + 0x4c)) = 0x417b70;
    *((eax + 0x54)) = 9;
    *((eax + 0x50)) = 0x418370;
    *((eax + 0x58)) = 5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x414b40 */
#include <stdint.h>
 
int32_t fcn_00414b40 (uint32_t arg_a0h_3, int32_t arg_9ch, uint32_t arg_a4h_2, int32_t arg_a0h_2, int32_t arg_a0h, int32_t arg_a4h) {
    int32_t var_10h_2;
    int32_t var_11h;
    int32_t var_12h;
    uint32_t var_10h;
    int32_t var_18h_2;
    int32_t var_18h;
    uint32_t var_1ch;
    uint32_t var_24h;
    uint32_t var_28h;
    int32_t var_2ch;
    int32_t var_30h;
    uint32_t var_34h;
    int32_t var_38h_2;
    int32_t var_38h;
    int32_t var_40h;
    int32_t var_44h;
    int32_t var_48h_2;
    uint32_t var_48h;
    uint32_t var_50h_2;
    int32_t var_50h;
    int32_t var_54h;
    int32_t var_58h;
    int32_t var_5ch;
    int32_t var_60h;
    int32_t var_64h;
    int32_t var_68h;
    int32_t var_6ch;
    int32_t var_70h;
    int32_t var_78h;
    int32_t var_7ah;
    int32_t var_88h;
    eax = *(0x41c340);
    eax ^= esp;
    *((esp + 0x88)) = eax;
    eax = *((esp + 0xa4));
    edx = *((esp + 0xa0));
    ebx = *((esp + 0xa0));
    ebp = *((esp + 0x9c));
    esi = *((esp + 0xa4));
    *((esp + 0x18)) = eax;
    eax = 0;
    *((esp + 0x50)) = ebp;
    *((esp + 0x38)) = ebx;
    *((esp + 0x48)) = edx;
    *((esp + 0x54)) = eax;
    *((esp + 0x58)) = eax;
    *((esp + 0x5c)) = eax;
    *((esp + 0x60)) = eax;
    *((esp + 0x64)) = eax;
    *((esp + 0x68)) = eax;
    *((esp + 0x6c)) = eax;
    *((esp + 0x70)) = eax;
    if (esi <= 0) {
        goto label_2;
    }
    do {
        ecx = *((ebp + eax*2));
        ecx = esp + ecx*2 + 0x54;
        eax++;
    } while (eax < esi);
label_2:
    eax = *(edx);
    *((esp + 0x10)) = eax;
    ecx = 0xf;
    do {
        if (*((esp + ecx*2 + 0x54)) != 0) {
            goto label_3;
        }
        ecx--;
    } while (ecx >= 1);
label_3:
    *((esp + 0x1c)) = ecx;
    if (eax > ecx) {
        *((esp + 0x10)) = ecx;
        eax = ecx;
    }
    if (ecx == 0) {
        *((esp + 0xe)) = cx;
        ecx = *(ebx);
        eax = *((esp + 0xc));
        *(ecx) = eax;
        *(ebx) += 4;
        ecx = *(ebx);
        *(ecx) = eax;
        *(ebx) += 4;
        *(edx) = 1;
        eax = 0;
        ecx = *((esp + 0x88));
        ecx ^= esp;
        eax = fcn_00412237 (0x40);
        return eax;
    }
    esi = 1;
    do {
        if (*((esp + esi*2 + 0x54)) != 0) {
            goto label_4;
        }
        if (*((esp + esi*2 + 0x56)) != 0) {
            goto label_5;
        }
        if (*((esp + esi*2 + 0x58)) != 0) {
            goto label_6;
        }
        if (*((esp + esi*2 + 0x5a)) != 0) {
            goto label_7;
        }
        if (*((esp + esi*2 + 0x5c)) != 0) {
            goto label_8;
        }
        esi += 5;
    } while (esi <= 0xf);
    goto label_4;
label_5:
    esi++;
    goto label_4;
label_6:
    esi += 2;
    goto label_4;
label_7:
    esi += 3;
    goto label_4;
label_8:
    esi += 4;
label_4:
    if (eax < esi) {
        *((esp + 0x10)) = esi;
    }
    edx = 1;
    eax = 1;
    do {
        edi = *((esp + eax*2 + 0x58));
        edx += edx;
        edx -= edi;
        if (edx < 0) {
            goto label_9;
        }
        eax++;
    } while (eax <= 0xf);
    edi = *((esp + 0xa0));
    if (edx > 0) {
        if (edi != 0) {
            if (ecx == 1) {
                goto label_10;
            }
        }
label_9:
        eax |= 0xffffffff;
        goto label_11;
    }
label_10:
    *((esp + 0x7a)) = 0;
    eax = 2;
    do {
        cx = *((esp + eax + 0x78));
        cx += *((esp + eax + 0x58));
        eax += 2;
        *((esp + eax + 0x78)) = cx;
    } while (eax < 0x1e);
    ecx = *((esp + 0x1c));
    eax = 0;
    if (*((esp + 0xa8)) <= eax) {
        goto label_12;
    }
    do {
        if (*((ebp + eax*2)) != 0) {
            edx = *((ebp + eax*2));
            edx = *((esp + edx*2 + 0x78));
            *((ecx + edx*2)) = ax;
            edx = *((ebp + eax*2));
            edx = esp + edx*2 + 0x78;
        }
        eax++;
    } while (eax < *((esp + 0xa8)));
label_12:
    eax = edi;
    edx = 0xffffffff;
    if (eax != 0) {
        eax--;
        if (eax != 0) {
            *((esp + 0x2c)) = 0x41a730;
            *((esp + 0x38)) = 0x41a770;
            *((esp + 0x30)) = edx;
        } else {
            eax = 0x41a6b0;
        }
        eax -= 0x202;
        *((esp + 0x2c)) = eax;
        eax = 0x41a6f0;
        eax -= 0x202;
        *((esp + 0x38)) = eax;
        *((esp + 0x30)) = 0x100;
    } else {
        *((esp + 0x38)) = ecx;
        *((esp + 0x2c)) = ecx;
        *((esp + 0x30)) = 0x13;
    }
    eax = *(ebx);
    ecx = *((esp + 0x14));
    *((esp + 0x24)) = eax;
    eax = 1;
    eax <<= cl;
    ebp = 0;
    ebx = 0;
    ecx = eax - 1;
    *((esp + 0x18)) = esi;
    *((esp + 0x34)) = edx;
    *((esp + 0x44)) = eax;
    *((esp + 0x28)) = eax;
    *((esp + 0x40)) = ecx;
    if (edi == 1) {
        if (eax >= 0x5b0) {
            goto label_13;
        }
    }
    edx = *((esp + 0x1c));
    *((esp + 0x1c)) = edx;
label_0:
    al = *((esp + 0x18));
    esi = *((esp + 0x1c));
    edx = *((esp + 0x30));
    al -= bl;
    *((esp + 0x11)) = al;
    eax = *(esi);
    ecx = (int32_t) ax;
    if (ecx < edx) {
        *((esp + 0x10)) = 0;
        *((esp + 0x12)) = ax;
        if (ecx > edx) {
        } else {
            eax = *(esi);
            ecx = *((esp + 0x38));
            eax += eax;
            dl = *((eax + ecx));
            ecx = *((esp + 0x2c));
            *((esp + 0x10)) = dl;
            dx = *((eax + ecx));
            *((esp + 0x12)) = dx;
        } else {
            *((esp + 0x10)) = 0x60;
        }
        *((esp + 0x12)) = 0;
    }
    ecx = *((esp + 0x18));
    eax = *((esp + 0x44));
    ecx -= ebx;
    edx = 1;
    edx <<= cl;
    ecx = ebx;
    edi = ebp;
    edi >>= cl;
    ecx = *((esp + 0x24));
    *((esp + 0x50)) = eax;
    esi = edx*4;
    edi += eax;
    ecx = ecx + edi*4;
    edi = *((esp + 0x10));
    do {
        eax -= edx;
        ecx -= esi;
        *(ecx) = edi;
    } while (eax != 0);
    edx = *((esp + 0x18));
    ecx = edx - 1;
    eax = 1;
    eax <<= cl;
    if ((ebp & eax) == 0) {
        goto label_14;
    }
    do {
        eax >>= 1;
    } while ((ebp & eax) != 0);
label_14:
    if (eax != 0) {
        ecx = eax - 1;
        ecx &= ebp;
        ecx += eax;
    } else {
        ebp = 0;
    }
    eax = *((esp + edx*2 + 0x58));
    if (ax == 0) {
        if (edx == *((esp + 0x20))) {
            goto label_15;
        }
        edx = *((esp + 0x1c));
        eax = *(edx);
        ecx = *((esp + 0x54));
        edx = *((ecx + eax*2));
        *((esp + 0x18)) = edx;
    }
    if (edx <= *((esp + 0x14))) {
        goto label_0;
    }
    esi = *((esp + 0x40));
    esi &= ebp;
    *((esp + 0x48)) = esi;
    if (esi == *((esp + 0x34))) {
        goto label_0;
    }
    if (ebx == 0) {
        ebx = *((esp + 0x14));
    }
    eax = *((esp + 0x24));
    ecx = *((esp + 0x50));
    edx = eax + ecx*4;
    ecx = *((esp + 0x18));
    ecx -= ebx;
    *((esp + 0x24)) = edx;
    eax = 1;
    edx = ebx + ecx;
    eax <<= cl;
    if (edx >= *((esp + 0x20))) {
        goto label_16;
    }
    esi = esp + edx*2 + 0x58;
    do {
        edi = *(esi);
        eax -= edi;
        if (eax <= 0) {
            goto label_17;
        }
        edx++;
        ecx++;
        esi += 2;
        eax += eax;
    } while (edx < *((esp + 0x20)));
label_17:
    esi = *((esp + 0x48));
label_16:
    eax = 1;
    eax <<= cl;
    *((esp + 0x44)) = eax;
    if (*((esp + 0xa0)) == 1) {
        if (*((esp + 0x28)) >= 0x5b0) {
            goto label_13;
        }
    }
    edx = esi;
    esi = *((esp + 0x3c));
    eax = *(esi);
    *((eax + edx*4)) = cl;
    ecx = *(esi);
    al = *((esp + 0x14));
    *((ecx + edx*4 + 1)) = al;
    eax = *(esi);
    ecx = *((esp + 0x24));
    ecx -= eax;
    ecx >>= 2;
    *((esp + 0x34)) = edx;
    *((eax + edx*4 + 2)) = cx;
    goto label_0;
label_15:
    edi = *((esp + 0x3c));
    al = dl;
    al -= bl;
    *((esp + 0x10)) = 0x40;
    *((esp + 0x11)) = al;
    *((esp + 0x12)) = 0;
    if (ebp == 0) {
        goto label_18;
    }
    esi = *((esp + 0x24));
label_1:
    if (ebx != 0) {
        ecx = *((esp + 0x40));
        ecx &= ebp;
        if (ecx == *((esp + 0x34))) {
            goto label_19;
        }
        eax = *((esp + 0x14));
        esi = *(edi);
        ebx = 0;
        *((esp + 0x18)) = eax;
        *((esp + 0x11)) = al;
        edx = eax;
    }
label_19:
    ecx = ebx;
    eax = ebp;
    eax >>= cl;
    ecx = *((esp + 0x10));
    *((esi + eax*4)) = ecx;
    ecx = edx - 1;
    eax = 1;
    eax <<= cl;
    if ((ebp & eax) == 0) {
        goto label_20;
    }
    do {
        eax >>= 1;
    } while ((ebp & eax) != 0);
label_20:
    if (eax == 0) {
        goto label_18;
    }
    ecx = eax - 1;
    ecx &= ebp;
    ecx += eax;
    if (ecx != 0) {
        goto label_1;
    }
label_18:
    edx = *((esp + 0x28));
    ecx = *((esp + 0x4c));
    eax = edx*4;
    *(edi) += eax;
    edx = *((esp + 0x14));
    *(ecx) = edx;
    eax = 0;
    goto label_11;
label_13:
    eax = 1;
label_11:
    ecx = *((esp + 0x98));
    ecx ^= esp;
    fcn_00412237 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x414680 */
#include <stdint.h>
 
int32_t fcn_00414680 (int32_t arg_50h, uint32_t arg_54h) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_1eh;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    uint32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    uint32_t var_3ch;
    int32_t var_40h;
    int32_t var_44h;
    int32_t var_48h;
    ecx = *((esp + 0x50));
    eax = *((ecx + 0x1c));
    edx = *((ecx + 4));
    ebx = *((eax + 0x38));
    ebp = *(ecx);
    ebp--;
    edx = edx + ebp - 5;
    *((esp + 0x14)) = edx;
    esi = *((ecx + 0xc));
    ecx = *((ecx + 0x10));
    edx = *((ecx + 0x10));
    edx -= *((esp + 0x54));
    esi--;
    edx += esi;
    ecx = ecx + esi - 0x101;
    *((esp + 0x38)) = edx;
    edx = *((eax + 0x28));
    *((esp + 0x2c)) = ecx;
    ecx = *((eax + 0x2c));
    *((esp + 0x28)) = edx;
    edx = *((eax + 0x30));
    *((esp + 0x3c)) = ecx;
    ecx = *((eax + 0x34));
    *((esp + 0x44)) = edx;
    edx = *((eax + 0x4c));
    *((esp + 0x40)) = ecx;
    ecx = *((eax + 0x50));
    *((esp + 0x20)) = edx;
    *((esp + 0x24)) = ecx;
    ecx = *((eax + 0x54));
    edx = 1;
    edx <<= cl;
    ecx = *((eax + 0x58));
    *((esp + 0x18)) = eax;
    edi = *((eax + 0x3c));
    *((esp + 0x54)) = 1;
    eax = *((esp + 0x54));
    eax <<= cl;
    edx--;
    *((esp + 0x10)) = ebp;
    *((esp + 0x48)) = edx;
    eax--;
    *((esp + 0x30)) = eax;
label_0:
    if (edi < 0xf) {
        eax = *((ebp + 1));
        ebp++;
        ecx = edi;
        eax <<= cl;
        ebp++;
        edi += 8;
        ecx = edi;
        ebx += eax;
        eax = *(ebp);
        eax <<= cl;
        *((esp + 0x10)) = ebp;
        ebx += eax;
        edi += 8;
    }
    ecx = *((esp + 0x20));
    edx &= ebx;
    eax = *((ecx + edx*4));
    edx = *((ecx + edx*4));
    edx >>= 8;
    ecx = (int32_t) dl;
    edx = (int32_t) al;
    ebx >>= cl;
    edi -= ecx;
    if (edx == 0) {
        goto label_2;
    }
    do {
        if ((dl & 0x10) != 0) {
            goto label_3;
        }
        if ((dl & 0x40) != 0) {
            goto label_4;
        }
        ecx = 1;
        *((esp + 0x54)) = ecx;
        ecx = edx;
        edx = *((esp + 0x54));
        edx <<= cl;
        eax >>= 0x10;
        edx--;
        edx &= ebx;
        edx += eax;
        eax = *((esp + 0x20));
        eax = *((eax + edx*4));
        ecx = *((eax + edx*4));
        ecx >>= 8;
        ecx = (int32_t) cl;
        edx = (int32_t) al;
        ebx >>= cl;
        edi -= ecx;
    } while (edx != 0);
label_2:
    esi++;
    eax >>= 0x10;
    *(esi) = al;
    goto label_1;
label_3:
    eax >>= 0x10;
    edx &= 0xf;
    *((esp + 0x54)) = eax;
    if (edx != 0) {
        if (edi < edx) {
            eax = *((ebp + 1));
            ebp++;
            ecx = edi;
            eax <<= cl;
            *((esp + 0x10)) = ebp;
            ebx += eax;
            edi += 8;
        }
        ecx = edx;
        eax = 1;
        eax <<= cl;
        eax--;
        eax &= ebx;
        ebx >>= cl;
        edi -= edx;
    }
    if (edi < 0xf) {
        edx = *((ebp + 1));
        ebp++;
        eax = *((ebp + 1));
        ecx = edi;
        ebp++;
        edx <<= cl;
        edi += 8;
        ecx = edi;
        eax <<= cl;
        ebx += edx;
        *((esp + 0x10)) = ebp;
        ebx += eax;
        edi += 8;
    }
    ecx = *((esp + 0x30));
    edx = *((esp + 0x24));
    ecx &= ebx;
    edx = *((edx + ecx*4));
    eax = *((edx + ecx*4));
    eax >>= 8;
    ecx = (int32_t) al;
    eax = (int32_t) dl;
    ebx >>= cl;
    edi -= ecx;
    *((esp + 0x1c)) = edx;
    if ((al & 0x10) != 0) {
        goto label_5;
    }
    do {
        if ((al & 0x40) != 0) {
            goto label_6;
        }
        ecx = eax;
        eax = *((esp + 0x1e));
        edx = 1;
        edx <<= cl;
        ecx = *((esp + 0x24));
        edx--;
        edx &= ebx;
        edx += eax;
        edx = *((ecx + edx*4));
        eax = *((ecx + edx*4));
        eax >>= 8;
        ecx = (int32_t) al;
        eax = (int32_t) dl;
        ebx >>= cl;
        edi -= ecx;
        *((esp + 0x1c)) = edx;
    } while ((al & 0x10) == 0);
label_5:
    edx >>= 0x10;
    eax &= 0xf;
    *((esp + 0x1c)) = edx;
    if (edi < eax) {
        edx = *((ebp + 1));
        ebp++;
        ecx = edi;
        edx <<= cl;
        edi += 8;
        *((esp + 0x10)) = ebp;
        ebx += edx;
        if (edi >= eax) {
            goto label_7;
        }
        edx = *((ebp + 1));
        ebp++;
        ecx = edi;
        edx <<= cl;
        *((esp + 0x10)) = ebp;
        ebx += edx;
        edi += 8;
    }
label_7:
    ecx = 1;
    edx = 1;
    ecx = eax;
    edx <<= cl;
    edi -= eax;
    edx--;
    edx &= ebx;
    ecx = edx;
    edx = *((esp + 0x1c));
    edx += ecx;
    ecx = eax;
    eax = esi;
    eax -= *((esp + 0x38));
    ebx >>= cl;
    *((esp + 0x1c)) = edx;
    if (edx <= eax) {
        goto label_8;
    }
    ebp -= eax;
    if (ebp > *((esp + 0x3c))) {
        goto label_9;
    }
    ecx = *((esp + 0x40));
    eax = *((esp + 0x44));
    ecx += 0xffffffff;
    *((esp + 0x34)) = ecx;
    if (eax != 0) {
        goto label_10;
    }
    eax = *((esp + 0x28));
    eax -= ebp;
    ecx += eax;
    if (ebp >= *((esp + 0x54))) {
        goto label_11;
    }
    do {
        al = *((ecx + 1));
        ecx++;
        esi++;
        ebp--;
        *(esi) = al;
    } while (ebp != 0);
    goto label_12;
label_10:
    if (eax >= ebp) {
        goto label_13;
    }
    edx = eax;
    edx -= ebp;
    edx += *((esp + 0x28));
    ebp -= eax;
    ecx += edx;
    if (ebp >= *((esp + 0x54))) {
        goto label_11;
    }
    do {
        dl = *((ecx + 1));
        ecx++;
        esi++;
        ebp--;
        *(esi) = dl;
    } while (ebp != 0);
    ecx = *((esp + 0x34));
    if (eax >= *((esp + 0x54))) {
        goto label_11;
    }
    do {
        al = *((ecx + 1));
        ecx++;
        esi++;
        ebp--;
        *(esi) = al;
    } while (ebp != 0);
    ecx = esi;
    ecx -= *((esp + 0x1c));
    goto label_11;
label_13:
    eax -= ebp;
    ecx += eax;
    if (ebp >= *((esp + 0x54))) {
        goto label_11;
    }
    do {
        al = *((ecx + 1));
        ecx++;
        esi++;
        ebp--;
        *(esi) = al;
    } while (ebp != 0);
label_12:
    ecx = esi;
    ecx -= edx;
label_11:
    eax = *((esp + 0x54));
    if (eax <= 2) {
        goto label_14;
    }
    edx = eax - 3;
    eax = 0xaaaaaaab;
    edx:eax = eax * edx;
    ebp >>= 1;
    ebp++;
    do {
        eax = *((ecx + 1));
        ecx++;
        esi++;
        *(esi) = al;
        dl = *((ecx + 1));
        ecx++;
        esi++;
        *(esi) = dl;
        eax = *((ecx + 1));
        ecx++;
        esi++;
        ebp--;
        *(esi) = al;
    } while (ebp != 0);
label_14:
    ebp = *((esp + 0x54));
    if (ebp != 0) {
        dl = *((ecx + 1));
        ecx++;
        esi++;
        *(esi) = dl;
        if (ebp <= 1) {
            goto label_15;
        }
        al = *((ecx + 1));
        esi++;
        *(esi) = al;
    }
label_15:
    ebp = *((esp + 0x10));
label_1:
    edx = *((esp + 0x14));
    if (ebp >= edx) {
        goto label_16;
    }
    if (esi >= *((esp + 0x2c))) {
        goto label_16;
    }
    edx = *((esp + 0x48));
    goto label_0;
label_8:
    eax = esi;
    eax -= edx;
    while (ecx > 2) {
        ecx = *((eax + 1));
        eax++;
        *((esi + 1)) = cl;
        dl = *((eax + 1));
        esi++;
        eax++;
        esi++;
        *(esi) = dl;
        ecx = *((eax + 1));
        eax++;
        esi++;
        *(esi) = cl;
        ecx = *((esp + 0x54));
        ecx -= 3;
        *((esp + 0x54)) = ecx;
    }
    if (ecx == 0) {
        goto label_1;
    }
    dl = *((eax + 1));
    eax++;
    esi++;
    *(esi) = dl;
    if (ecx <= 1) {
        goto label_1;
    }
    al = *((eax + 1));
    esi++;
    *(esi) = al;
    goto label_1;
label_9:
    ecx = *((esp + 0x50));
    edx = *((esp + 0x18));
    ebp = *((esp + 0x10));
    *((ecx + 0x18)) = "invalid distance too far back";
    *(edx) = 0x1b;
    goto label_17;
label_6:
    eax = *((esp + 0x50));
    *((eax + 0x18)) = "invalid distance code";
    goto label_18;
label_4:
    if ((dl & 0x20) != 0) {
        edx = *((esp + 0x18));
        *(edx) = 0xb;
    } else {
        eax = *((esp + 0x50));
        *((eax + 0x18)) = "invalid literal/length code";
label_18:
        ecx = *((esp + 0x18));
        *(ecx) = 0x1b;
    }
label_17:
    edx = *((esp + 0x14));
label_16:
    eax = edi;
    eax >>= 3;
    ebp -= eax;
    eax += eax;
    eax += eax;
    eax += eax;
    edi -= eax;
    ecx = edi;
    eax = 1;
    eax <<= cl;
    ecx = *((esp + 0x50));
    edx -= ebp;
    edx += 5;
    eax--;
    ebx &= eax;
    eax = ebp + 1;
    *(ecx) = eax;
    eax = esi + 1;
    *((ecx + 0xc)) = eax;
    eax = *((esp + 0x2c));
    eax -= esi;
    eax += 0x101;
    *((ecx + 0x10)) = eax;
    eax = *((esp + 0x18));
    *((ecx + 4)) = edx;
    *((eax + 0x3c)) = edi;
    *((eax + 0x38)) = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_399/ia32_pe/subject.exe @ 0x412c60 */
#include <stdint.h>
 
int32_t fcn_00412c60 (void) {
    esi = *((ebx + 0x1c));
    ebp = 0;
    edi = eax;
    if (*((esi + 0x34)) == ebp) {
        ecx = *((esi + 0x24));
        edx = *((ebx + 0x20));
        eax = 1;
        eax <<= cl;
        ecx = *((ebx + 0x28));
        eax = void (*edx)(uint32_t, uint32_t, uint32_t) (ecx, eax, 1);
        *((esi + 0x34)) = eax;
        if (eax != ebp) {
            goto label_0;
        }
        eax = 1;
        return eax;
    }
label_0:
    if (*((esi + 0x28)) == ebp) {
        ecx = *((esi + 0x24));
        eax = 1;
        eax <<= cl;
        *((esi + 0x30)) = ebp;
        *((esi + 0x2c)) = ebp;
        *((esi + 0x28)) = eax;
    }
    edi -= *((ebx + 0x10));
    eax = *((esi + 0x28));
    if (edi >= eax) {
        ecx = *((ebx + 0xc));
        edx = *((esi + 0x34));
        ecx -= eax;
        memcpy (edx, ecx, eax);
        eax = *((esi + 0x28));
        *((esi + 0x30)) = ebp;
        *((esi + 0x2c)) = eax;
        eax = 0;
        return eax;
    }
    eax -= *((esi + 0x30));
    if (ebp > edi) {
    }
    ecx = *((ebx + 0xc));
    edx = *((esi + 0x34));
    edx += *((esi + 0x30));
    ecx -= edi;
    memcpy (edx, ecx, ebp);
    edi -= ebp;
    if (edi != 0) {
        eax = *((ebx + 0xc));
        ecx = *((esi + 0x34));
        eax -= edi;
        eax = memcpy (ecx, eax, edi);
        edx = *((esi + 0x28));
        *((esi + 0x30)) = edi;
        *((esi + 0x2c)) = edx;
        eax = 0;
        return eax;
    }
    *((esi + 0x30)) += ebp;
    ecx = *((esi + 0x30));
    eax = *((esi + 0x28));
    if (ecx == eax) {
        *((esi + 0x30)) = 0;
    }
    ecx = *((esi + 0x2c));
    if (ecx < eax) {
        ecx += ebp;
        *((esi + 0x2c)) = ecx;
    }
    eax = 0;
    return eax;
}

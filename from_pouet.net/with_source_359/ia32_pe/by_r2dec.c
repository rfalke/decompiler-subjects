/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_359/ia32_pe/subject.exe @ 0x401172 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    eax = GlobalAlloc (0, 0x7a120);
    if (eax == 0) {
        goto label_0;
    }
    *(0x4020e2) = eax;
    *(0x4020da) = eax;
    eax += 0x7d0;
    *(0x4020d6) = eax;
    eax = GetModuleHandleW (0);
    *(0x40208a) = eax;
    eax = LoadIconW (0, 0x7f00);
    *(0x40208e) = eax;
    eax = LoadCursorW (0, 0x7f00);
    *(0x402092) = eax;
    eax = RegisterClassW (0x40207a);
    if (eax == 0) {
        goto label_0;
    }
    eax = CreateWindowExW (0, "DEMODEMO", " Takoz!", 0x10cf0000, 0x8000, 0x8000, 0x280, 0x1f4, 0, 0, *(0x40208a), 0);
    if (eax == 0) {
        goto label_0;
    }
    *(0x4020a2) = eax;
    eax = GetDC (eax);
    *(0x4020a6) = eax;
    fcn_00401000 ();
    fcn_0040101b ();
    do {
        PeekMessageW (0x4020aa, 0, 0, 0, 1);
        if (*(0x4020ae) == 0x12) {
            goto label_1;
        }
        TranslateMessage (0x4020aa);
        DispatchMessageW (0x4020aa);
        fcn_0040101b ();
        *(0x4020de)++;
    } while (1);
label_0:
    MessageBoxW (0, "Startup failed.", 0, 0x10);
label_1:
    ReleaseDC (*(0x4020a2), *(0x4020a6));
    GlobalFree (*(0x4020e2));
    ExitProcess (*(0x4020b2));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_359/ia32_pe/subject.exe @ 0x40114a */
#include <stdint.h>
 
void fcn_0040114a (void) {
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= fp_stack[3];
    fp_tmp_0 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= fp_stack[5];
    fp_stack[0] += fp_stack[3];
    fp_stack++;
    fp_stack[0] *= fp_stack[3];
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_stack[0] *= fp_stack[4];
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_359/ia32_pe/subject.exe @ 0x40115f */
#include <stdint.h>
 
void fcn_0040115f (void) {
    bx = bp;
    bh += ah;
    dx = di;
    dh += ah;
    dx &= bx;
    dx &= cx;
    dh &= ah;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_359/ia32_pe/subject.exe @ 0x401000 */
#include <stdint.h>
 
int8_t fcn_00401000 (void) {
    /* [00] -r-x section size 4096 named .text */
    edx = *(0x4020da);
    bl = 0;
    do {
        al = 0;
        al >>= 1;
        *(edx) = al;
        edx++;
        *(edx) = bl;
        edx++;
        *(edx) = bl;
        edx++;
        edx++;
        bl++;
    } while (bl != 0);
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_359/ia32_pe/subject.exe @ 0x40101b */
#include <stdint.h>
 
void fcn_0040101b (void) {
    __asm ("pushal");
    __asm ("wait");
    __asm ("fninit");
    edi = *(0x4020d6);
    edi += 0x3e300;
    ebx = 0x4020ee;
    *(ebx) += 2;
    *(fp_stack--) = *(ebx);
    fp_stack[0] /= *((ebx + 2));
    fp_stack[0] = sin(fp_stack[0]);
    *(fp_stack--) = cos(fp_stack[0]);
    ax = 0x140;
    dx = 0xff38;
label_1:
    ax = -ax;
label_0:
    esi = esp;
    *(fp_stack--) = *(esi);
    *(fp_stack--) = *((esi + 4));
    fcn_0040114a ();
    fp_tmp_0 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    *(fp_stack--) = *((esi + 2));
    fcn_0040114a ();
    fp_tmp_2 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    fcn_0040114a ();
    fp_stack[0] = abs(fp_stack[0]);
    fp_stack[0] = -fp_stack[0];
    esi = 0x4020f4;
    *(esi) = fp_stack[0];
    fp_stack--;
    *((esi + 2)) = fp_stack[0];
    fp_stack--;
    fp_tmp_3 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    *((esi + 4)) = fp_stack[0];
    fp_stack--;
    al = 0x7f;
    bx = *((esi - 7));
    cx = 0;
    di = bx;
    *(esi)--;
    do {
        cx += *(esi);
        bp += *((esi + 2));
        di += *((esi + 4));
        ah = 0xe4;
        fcn_0040115f ();
        ah = *((esi - 5));
        ah += 0x27;
        ah &= 0xf8;
        al = fcn_0040115f ();
        dh += bh;
        if (dh == 0) {
            goto label_2;
        }
        al--;
    } while (al != 0);
label_2:
    eax &= 0xff;
    eax <<= 3;
    esi = *(0x4020da);
    eax = *((esi + eax));
    memset (edi, eax, ecx);
    ax++;
    ax++;
    if (ax != 0x140) {
        goto label_0;
    }
    edi -= 0xa00;
    dx++;
    dx++;
    if (dx != 0xc8) {
        goto label_1;
    }
    __asm ("popal");
    GetClientRect (*(0x4020a2), 0x4020c6);
    StretchDIBits (*(0x4020a6), 0, 0, *(0x4020ce), *(0x4020d2), 0, 0, 0x140, 0xc8, *(0x4020d6), 0x402042, 0, 0xcc0020);
}

/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_377/ia32_pe/subject.exe @ 0x4011f5 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    eax = GlobalAlloc (0, 0xf4240);
    if (eax == 0) {
        goto label_0;
    }
    *(0x40210c) = eax;
    *(0x402104) = eax;
    eax += 0x7d0;
    *(0x402100) = eax;
    eax += 0x61a80;
    *(0x40211c) = eax;
    eax += 0x30d40;
    *(0x402118) = eax;
    eax = GetModuleHandleW (0);
    *(0x4020b4) = eax;
    eax = LoadIconW (0, 0x7f00);
    *(0x4020b8) = eax;
    eax = LoadCursorW (0, 0x7f00);
    *(0x4020bc) = eax;
    eax = RegisterClassW (0x4020a4);
    if (eax == 0) {
        goto label_0;
    }
    eax = CreateWindowExW (0, "DEMODEMO", "<< http://www.devreci.com >>", 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, *(0x4020b4), 0);
    if (eax == 0) {
        goto label_0;
    }
    *(0x4020cc) = eax;
    eax = GetDC (eax);
    *(0x4020d0) = eax;
    fcn_00401000 ();
    fcn_00401017 ();
    fcn_00401088 ();
    SetStretchBltMode (*(0x4020d0), 4);
    do {
        PeekMessageW (0x4020d4, 0, 0, 0, 1);
        if (*(0x4020d8) == 0x12) {
            goto label_1;
        }
        TranslateMessage (0x4020d4);
        DispatchMessageW (0x4020d4);
        fcn_00401088 ();
        *(0x402108)++;
    } while (1);
label_0:
    MessageBoxW (0, "Startup failed.", 0, 0x10);
label_1:
    ReleaseDC (*(0x4020cc), *(0x4020d0));
    GlobalFree (*(0x40210c));
    ExitProcess (*(0x4020dc));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_377/ia32_pe/subject.exe @ 0x401000 */
#include <stdint.h>
 
void fcn_00401000 (void) {
    /* [00] -r-x section size 4096 named .text */
    edx = *(0x402104);
    bl = 0;
    do {
        *(edx) = bl;
        edx++;
        *(edx) = bl;
        edx++;
        *(edx) = bl;
        edx++;
        edx++;
        bl++;
    } while (bl != 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_377/ia32_pe/subject.exe @ 0x401017 */
#include <stdint.h>
 
int32_t fcn_00401017 (void) {
    ecx = 0xf00;
    esi = 0x402136;
    edi = *(0x402118);
    do {
        al = *(esi);
        *(edi) = al;
        esi++;
        edi++;
        __asm ("loop 0x401027");
    } while (1);
    eax = 0;
    ebx = 0;
    ecx = 0;
    edx = 0;
    ebp = 0;
    edi = 0;
    esi = 0;
    do {
        esi = *(0x402118);
        cl = 2;
        dx = 0x4fb;
        if (bl <= dl) {
            if (bl < dh) {
                goto label_0;
            }
            bl >>= cl;
            bh >>= cl;
            di = (int16_t) bh;
            di <<= 6;
            di += bx;
            if ((*((esi + edi - 0x21c4)) & dl) > 0) {
                goto label_0;
            }
            dx = bx;
            dx &= 0xf0f;
            dl += dh;
            dx <<= cl;
        }
label_0:
        esi = *(0x40211c);
        *((esi + ebx)) = dl;
        bx--;
    } while (bx != 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_377/ia32_pe/subject.exe @ 0x401088 */
#include <stdint.h>
 
int32_t fcn_00401088 (void) {
    __asm ("pushal");
    eax = 0;
    ebx = 0;
    ecx = 0;
    edx = 0;
    ebp = 0;
    edi = 0;
    esi = 0;
    bx = 0x400;
    do {
        esi = 0x402136;
        cx++;
        *((esi + ebx)) += cx;
        *(fp_stack--) = *((esi + ebx));
        fp_stack[0] /= *(0x402130);
        fp_stack[0] = sin(fp_stack[0]);
        *(fp_stack--) = cos(fp_stack[0]);
        *((esi + ebx + 0x1f)) = fp_stack[0];
        fp_stack--;
        *((esi + ebx + 0x23)) = fp_stack[0];
        fp_stack--;
        bl += 8;
    } while (bl != 0);
    bh = 3;
    edx = 0;
label_2:
label_0:
    edi = 0;
    di = 0x41d;
    al = dl;
    bl = ch;
    do {
        al -= 0x80;
        ax = (int16_t) al;
        esi = 0x402136;
        *((esi + ebx)) = ax;
        al = dh;
        bx++;
        bx++;
        if (bx == 0) {
            bl = 0;
        }
        di++;
    } while (di == 0);
    *((esi + ebx)) = bp;
    bl = 0;
    do {
        *(fp_stack--) = *((esi + ebx));
        bx++;
        bx++;
    } while (bx != 0);
    do {
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= *((esi + edi));
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= *((esi + edi + 4));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_tmp_0 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] *= *((esi + edi + 4));
        fp_tmp_1 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fp_stack[0] *= *((esi + edi));
        fp_stack[0] -= fp_stack[3];
        fp_stack++;
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        di += 8;
    } while (di == 0);
    fp_stack[0] += *(0x402132);
    fp_stack[0] /= *(0x402134);
    fp_stack[2] /= fp_stack[0];
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esi + ebx)) = fp_stack[0];
    fp_stack--;
    edi = *((esi + ebx)) * 0x140;
    *((esi + ebx)) = fp_stack[0];
    fp_stack--;
    edi += *((esi + ebx));
    esi = edx;
    esi += *(0x40211c);
    al = *(esi);
    esi = *(0x402118);
    al >>= 5;
    *((esi + edi + 0x7da0)) += al;
label_1:
    dx++;
    if (dx != 0) {
        goto label_0;
    }
    bp = -bp;
    if (dx < 0) {
        goto label_1;
    }
    ch += 2;
    if (ch != 0) {
        goto label_2;
    }
    ecx = 0xfa00;
    esi = 0x500;
    esi += *(0x402118);
    edi = 0x500;
    edi += *(0x402100);
    do {
        al = *(esi);
        *(esi) = 0;
        eax &= 0xff;
        eax <<= 2;
        eax += *(0x402104);
        ebx = *(eax);
        *(edi) = ebx;
        esi++;
        edi += 4;
        __asm ("loop 0x401187");
    } while (1);
    ecx = 0;
    __asm ("popal");
    GetClientRect (*(0x4020cc), 0x4020f0);
    StretchDIBits (*(0x4020d0), 0, 0, *(0x4020f8), *(0x4020fc), 0, 0, 0x140, 0xc8, *(0x402100), 0x40206c, 0, 0xcc0020);
    return eax;
}

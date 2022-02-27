/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_379/ia32_pe/subject.exe @ 0x401230 */
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
    *(0x402120) = eax;
    eax += 0x186a0;
    *(0x402124) = eax;
    ebx = 0x7a11f;
    ax = 0;
    do {
        edi = *(0x40210c);
        *(edi) = ax;
        edi += 2;
        ebx--;
    } while (ebx != 0);
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
    fcn_00401020 ();
    fcn_00401052 ();
    SetStretchBltMode (*(0x4020d0), 4);
    do {
        PeekMessageW (0x4020d4, 0, 0, 0, 1);
        if (*(0x4020d8) == 0x12) {
            goto label_1;
        }
        TranslateMessage (0x4020d4);
        DispatchMessageW (0x4020d4);
        fcn_00401052 ();
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
/* SUBJECTS/from_pouet.net/with_source_379/ia32_pe/subject.exe @ 0x401000 */
#include <stdint.h>
 
int8_t fcn_00401000 (void) {
    /* [00] -r-x section size 4096 named .text */
    edx = *(0x402104);
    bl = 0;
    do {
        al = 0;
        al <<= 1;
        if (bl >= 0x80) {
            *(edx) = al;
        }
        edx++;
        *(edx) = al;
        edx++;
        *(edx) = al;
        edx++;
        edx++;
        bl++;
    } while (bl != 0);
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_379/ia32_pe/subject.exe @ 0x401020 */
#include <stdint.h>
 
int32_t fcn_00401020 (void) {
    __asm ("pushal");
    edi = 0;
    eax = 0;
    ecx = 0;
    edi = *(0x402124);
    ch = 2;
    do {
        esi = 0;
        si = (int16_t) ch;
        si <<= 6;
        si += cx;
        esi += 0x402146;
        al = *(esi);
        *(edi) = al;
        edi++;
        cx++;
    } while (cx != 0xb00);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_379/ia32_pe/subject.exe @ 0x401052 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00401052 (void) {
    __asm ("pushal");
    eax = 0;
    ebx = 0;
    ecx = 0;
    edx = 0;
    edi = 0;
    esi = 0;
    ebp = 0;
    *(0x402140)++;
    bx = 0;
label_0:
    di = 0x402;
    al = bl;
    dx = 0xf200;
    do {
        al -= 0x80;
        ax = (int16_t) al;
        *(0x402144) = ax;
        ax = al * al;
        dx -= ax;
        *(fp_stack--) = *(0x402144);
        al = bh;
        di++;
    } while (di == 0);
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
    fp_stack[0] *= *(0x40213e);
    *(0x402144) = fp_stack[0];
    fp_stack--;
    ax = *(0x402144);
    *(0x402144) = dx;
    ax += *(0x40213f);
    ch = ah;
    cl = 0;
    al = dh;
    ax &= 0x707;
    al += ah;
    tmp_0 = al;
    al = dh;
    dh = tmp_0;
    dh += al;
    if (al <= 0xec) {
        if (al < 0xeb) {
            goto label_3;
        }
        cl = ch;
        cl >>= 1;
        dx = *(0x402144);
        dx <<= 5;
        dh += 0x60;
    }
label_3:
    if (al <= 0xe6) {
        ch &= 0x1f;
        if (ch <= 3) {
            if (al >= 0xe5) {
                dh = al;
                dh = rotate_right8 (dh, 3);
                dh += 0x1e;
                cx--;
            }
            dh -= 0x14;
        }
        if (al > 0xb2) {
            goto label_4;
        }
        cx--;
    }
label_4:
    ebp = *(0x40211c);
    *((ebx + ebp)) = cl;
    dh += 0x80;
    ebp = *(0x402120);
    *((ebx + ebp)) = dh;
    bx++;
    if (bx != 0) {
        goto label_0;
    }
    edi = 0x3e800;
    si = 0x64;
label_2:
    *(0x402142) = 0xff60;
label_1:
    cx = 0x7f40;
    ax = *(0x402140);
    ax <<= 1;
    ax = (int16_t) al;
    __asm ("cwd");
    al &= ch;
    al -= cl;
    ax = al * al;
    ah -= 0x10;
    dx ^= ax;
    ax += ax;
    ah--;
    dh += 0x20;
    di = ax;
    do {
        cx += *(0x402142);
        dx += si;
        di -= 0xa0;
        bx = di;
        bl = ch;
        ebp = *(0x40211c);
        ah = *((ebp + ebx));
        ebp = *(0x402120);
        al = *((ebp + ebx));
        if (ah < 0) {
            goto label_5;
        }
        if (ah != 0) {
            bl = ah;
            bh = dh;
            bh >>= 1;
            ebp = *(0x402124);
            ah = *((ebp + ebx));
            if (ah != 0) {
                al += 0x80;
            }
        } else {
        } while (dh <= 0x46);
    }
label_5:
    ebp = *(0x402100);
    eax &= 0xff;
    eax <<= 2;
    eax += *(0x402104);
    eax = *(eax);
    *((edi + ebp)) = eax;
    edi -= 4;
    *(0x402142)++;
    if (*(0x402142) != 0xa0) {
        goto label_1;
    }
    si--;
    if (si != 0xff9c) {
        goto label_2;
    }
    __asm ("popal");
    GetClientRect (*(0x4020cc), 0x4020f0);
    StretchDIBits (*(0x4020d0), 0, 0, *(0x4020f8), *(0x4020fc), 0, 0, 0x140, 0xc8, *(0x402100), 0x40206c, 0, 0xcc0020);
    return eax;
}

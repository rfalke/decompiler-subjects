/* r2dec pseudo code output */
/* synth @ 0x10d94 */
#include <stdint.h>
 
int32_t entry0 (void) {
    __asm ("sti");
    ebx = esp;
    *(0x1b8) = ebx;
    *(0x1a4) = ebx;
    ax = 0x24;
    *(0x1b0) = ax;
    ebx = 0x50484152;
    eax -= eax;
    ah = 0x30;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x1db) = al;
    *(0x1dc) = ah;
    ecx = eax;
    esi -= esi;
    edi = 0x81;
    eax >>= 0x10;
    if (ax == 0x4458) {
        bl -= 0x30;
        al = bl;
        ah = 0;
        es = *(0x1b0);
        ebx = *(es:0x5c);
        ebx += 0xfff;
        ebx &= 0xfffff000;
        *(0x1a4) = ebx;
        ebx >>= 0xc;
        ax = ds;
        es = eax;
        ah = 0x4a;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        bx = ds;
        cx = 0x2c;
    } else {
        if (ax != 0x4243) {
            goto label_1;
        }
        *(0x190) = edx;
        esi = edx;
        edx = *((esi + 0x1c));
        ebx = esp;
        ebx -= edx;
        ah = 0x4a;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        bx = ds;
        *(0x1b0) = ds;
        eax = *((esi + 0x10));
        edi += eax;
        esi -= esi;
        si = *((eax + 0x2c));
        esi <<= 4;
        cx = ds;
        al = 9;
        ah = 0;
    }
    goto label_2;
label_1:
    dx = 0x78;
    ax = 0xff00;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (al != 0) {
        ax = gs;
        if (ax != 0) {
            *(0x194) = ax;
        }
        ax = 6;
        bx = ds;
        eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
        al = 1;
        ah = 0;
        dx |= cx;
        if (dx != 0) {
            ah = 1;
        }
        *(0x1b0) = es;
        cx = *(es:0x2c);
    } else {
        dx = ds;
        cx = 0x24;
        ds = ecx;
        cx = 0x2c;
        ds = edx;
        bx = 0x17;
        al = 0;
        ah = 0;
    }
label_2:
    *(0x1d2) = al;
    *(0x1d3) = ah;
    es = ebx;
    *(es:0x1069) = ds;
    *(0x1d5) = esi;
    *(0x1d9) = cx;
    es = *(0x1b0);
    edx = 0x129c;
    edx += 0xf;
    dl &= 0xf0;
    ecx -= ecx;
    cl = *((es:edi - 1));
    al = 0x20;
    __asm ("repe scasb al, byte es:[edi]");
    esi = edi - 1;
    edi = edx;
    bx = es;
    dx = ds;
    ds = ebx;
    es = edx;
    if (ecx == 0) {
        goto label_3;
    }
    ecx++;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
label_3:
    al -= al;
    *(es:edi) = al;
    es:edi++;
    *(es:edi) = al;
    es:edi++;
    edi--;
    ds = *(es:0x1d9);
    ebp -= ebp;
label_0:
    eax = *(esi);
    eax |= 0x20202020;
    if (eax != 0x37386f6e) {
        goto label_4;
    }
    if (*((esi + 4)) != 0x3d) {
        goto label_4;
    }
    ebp++;
    do {
label_4:
        al = *(esi);
        esi++;
    } while (*(esi) != 0);
    if (*(esi) != 0) {
        goto label_0;
    }
    al = *(esi);
    esi++;
    esi++;
    esi++;
    do {
        *(es:edi) = *(esi);
        esi++;
        es:edi++;
    } while (*(esi) != 0);
    ds = edx;
    esi = edx;
    ebx = esp;
    *(0x1d0) = bp;
    *(0x1b4) = edi;
    *(0x1a0) = ebx;
    ecx = 0x129c;
    edi = 0xba0;
    ecx -= edi;
    if (*(0x1d2) == 1) {
        if (ecx <= 0x1000) {
            goto label_5;
        }
        ecx = 0x1000;
    }
label_5:
    dl = cl;
    ecx >>= 2;
    eax -= eax;
    memset (edi, eax, ecx);
    cl = dl;
    cl &= 3;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    eax = 0x129c;
    /* [01] -r-x section size 4096 named obj.1.page.1 */
    *(eax) += al;
    eax += 0xf;
    al &= 0xf0;
    *(0x1a8) = eax;
    *(0x1ac) = esi;
    eax = 0xff;
    fcn_00011f2f ();
    ebp -= ebp;
    return fcn_00011ec6 ();
}
/* r2dec pseudo code output */
/* synth @ 0x197c5 */
#include <stdint.h>
 
int8_t fcn_000197c5 (void) {
    ah = 0x25;
    al = *(0xa34);
    edx = *(0x80e);
    ds = *(0x80c);
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    return al;
}
/* r2dec pseudo code output */
/* synth @ 0x1988e */
#include <stdint.h>
 
void fcn_0001988e (void) {
}
/* r2dec pseudo code output */
/* synth @ 0x1976b */
#include <stdint.h>
 
int16_t fcn_0001976b (void) {
    ax = 0x250c;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    cl = ah;
    cl += *(0xa35);
    cl -= 8;
    ebx = *(0x812);
    edx = *(0x80e);
    ds = *(0x80c);
    ax = 0x2507;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    return ax;
}
/* r2dec pseudo code output */
/* synth @ 0x11060 */
#include <stdint.h>
 
void fcn_00011060 (void) {
    ds = *(cs:);
}
/* r2dec pseudo code output */
/* synth @ 0x1914d */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
void fcn_0001914d (int32_t arg_8h) {
    cl = 0x81;
    if (bx == 0xd9fa) {
        cl = 0x88;
        return;
    }
    if (bx == 0xd9f1) {
        cl = 0x8e;
        return;
    }
    if (bx != 0xd9f8) {
    }
    if (bx == 0xd9f5) {
        cl = 0x8f;
    } else {
        dx = bx;
        dx &= 0x310;
        if (dx == 0x310) {
            cl = 0x8d;
        } else {
            dx &= 0x110;
            if (dx == 0x110) {
                fp_stack++;
                *(fp_stack--) = 0.0;
                dl = bl;
                dl &= 0xc0;
                if (dl != 0xc0) {
                    fcn_00019277 ();
                }
                if ((bl & 8) != 0) {
                    fp_stack++;
                }
                cl = 0x85;
            } else {
                dx = bx;
                dx &= 0x130;
                if (dx != 0x30) {
                    goto label_0;
                }
                dx = *((ebp + 8));
                cl = ah;
                cl &= 0x38;
                cl >>= 2;
                dx = rotate_right16 (dx, cl);
                dl &= 5;
                if (dl != 5) {
                    goto label_0;
                }
                cl = 0x83;
            }
        }
    }
label_0:
}
/* r2dec pseudo code output */
/* synth @ 0x19277 */
#include <stdint.h>
 
void fcn_00019277 (void) {
    if ((bl & 4) != 0) {
        *(es:edi) = fp_stack[0];
    } else {
        *(es:edi) = fp_stack[0];
    }
}
/* r2dec pseudo code output */
/* synth @ 0x191da */
#include <stdint.h>
 
void fcn_000191da (void) {
    if (bx == 0xd9fd) {
    } else {
        dx = bx;
        dx &= 0x110;
        if (dx == 0x110) {
            fcn_0001922c ();
            dl = bl;
            dl &= 0xc0;
            if (dl != 0xc0) {
                fcn_00019277 ();
            }
            if ((bl & 8) != 0) {
                fp_stack++;
            }
        } else {
            dl = bl;
            dl &= 0xc0;
            if (dl == 0xc0) {
                esi = 0x818;
                fcn_00019252 ();
            } else {
                fcn_0001922c ();
            }
        }
    }
}
/* r2dec pseudo code output */
/* synth @ 0x1922c */
#include <stdint.h>
 
void fcn_0001922c (int32_t arg_14h) {
    __asm ("wait");
    ebp + 0x14 = fp_status;
    fp_stack++;
    if ((bh & 4) != 0) {
        *(fp_stack--) = *(0x822);
    } else {
        *(fp_stack--) = *(0x82a);
    }
    if ((*((ebp + 0x14)) & 0x100) != 0) {
        fp_stack[0] = -fp_stack[0];
    }
}
/* r2dec pseudo code output */
/* synth @ 0x19252 */
#include <stdint.h>
 
void fcn_00019252 (void) {
    if ((bh & 4) == 0) {
        dl = 0;
    } else {
        dl = bl;
        dl &= 7;
    }
    do {
        dl--;
        if (dl < 0) {
            goto label_0;
        }
        fp_stack--;
    } while (1);
label_0:
    fp_stack++;
    *(fp_stack--) = fp_stack[?];
    do {
        dl--;
        if (dl < 0) {
            goto label_1;
        }
        fp_stack++;
    } while (1);
label_1:
}
/* r2dec pseudo code output */
/* synth @ 0x192be */
#include <stdint.h>
 
uint32_t fcn_000192be (void) {
    esi *= 3;
    eax = cs:;
    es = *(ebx);
    bp = *((ebx + 6));
    eax = *(edi);
    ebx = *((edi + 4));
    ecx = *((edi + 8));
    edx = *((edi + 0xc));
    esi = *((edi + 0x10));
    edi = *((edi + 0x14));
    ds = ebp;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x19330 */
#include <stdint.h>
 
int32_t fcn_00019330 (void) {
    eax &= 0xff;
    eax *= 3;
    eax = cs:;
    ebx = edx;
    eax = *(ebx);
    ecx = *((ebx + 8));
    edx = *((ebx + 0xc));
    esi = *((ebx + 0x14));
    edi = *((ebx + 0x18));
    ebp = *((ebx + 0x10));
    es = *((ebx + 0x1e));
    fs = *((ebx + 0x20));
    gs = *((ebx + 0x22));
    ebx = *((ebx + 4));
    ds = ebx + 0x1c;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1988f */
#include <stdint.h>
 
int32_t fcn_0001988f (void) {
    if (*(0x1190) != 0) {
        edx = eax;
        edx >>= 8;
        edx &= 0xff;
        dl = *((edx + 0x1195));
        dl &= 1;
        edx &= 0xff;
        if (edx == 0) {
            goto label_0;
        }
        eax &= 0xff;
        eax = fcn_0001992d ();
        if (eax == 0) {
            goto label_0;
        }
        eax = 1;
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1992d */
#include <stdint.h>
 
int32_t fcn_0001992d (void) {
    if (*(0x1190) != 0) {
        if (*(0x808) != 0x3a4) {
            if (eax == 0) {
                goto label_0;
            }
            eax = 1;
            return eax;
        }
        eax &= 0xff;
        al = *((eax + 0xa3d));
        al &= 8;
        eax &= 0xff;
        return eax;
    }
    eax = 0;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1877b */
#include <stdint.h>
 
int32_t fcn_0001877b (void) {
    dl = *(0x1d2);
    if (dl >= 2) {
        if (dl <= 8) {
            cl = al;
            eax = 0x2502;
        }
    } else {
        eax &= 0xff;
        cl = 0;
        ah |= 0x35;
    }
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    edx = es;
    eax = ebx;
    ecx = es;
    ebx = es;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x181ce */
#include <stdint.h>
 
int8_t fcn_000181ce (void) {
    edx = ebx;
    bl = *(0x1d2);
    if (bl >= 2) {
        if (bl > 8) {
            goto label_0;
        }
        ds = ecx;
        cl = al;
        al = 4;
        ah = 0x25;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        edx = ds;
        return al;
    }
label_0:
    ds = ecx;
    ah = 0x25;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    edx = ds;
    return al;
}
/* r2dec pseudo code output */
/* synth @ 0x18102 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00018102 (void) {
    esi -= esi;
    esi |= eax;
    esi |= edx;
    esi |= ebp;
    if (esi == 0) {
        goto label_0;
    }
    edx |= edx;
    if (edx == 0) {
        edx = eax;
        eax = ebp;
        ebp -= ebp;
        edi -= 0x20;
    }
    edx |= edx;
    if (edx != 0) {
        goto label_1;
    }
    edx = eax;
    eax = ebp;
    ebp -= ebp;
    edi -= 0x20;
    do {
label_1:
        edx |= edx;
        if (edx < 0) {
            goto label_2;
        }
        edi--;
        ebp += ebp;
        eax += eax;
        edx += edx;
    } while (1);
label_2:
    ebp += ebp;
    eax += 0;
    edx += 0;
    if (edx < 0) {
        edx = rotate_right32 (edx, 1);
        edi++;
    }
    esi = edi;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x121b3 */
#include <stdint.h>
 
void fcn_000121b3 (void) {
    int32_t var_98h;
    int32_t var_97h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_2bh;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    edi = eax;
    esi = edx;
    *((ebp - 0x20)) = ebx;
    __asm ("wait");
    *((ebp - 0x14)) = eax;
    ah |= 3;
    eax &= 0xffff;
    *((edx + 0x14)) = 0;
    ax = *((edi + 8));
    *((ebp - 0x2c)) = ax;
    eax = *((edi + 4));
    *((ebp - 0x30)) = eax;
    eax = *(edi);
    *((ebp - 0x34)) = eax;
    if ((*((ebp - 0x2b)) & 0x80) != 0) {
        *((edx + 0x14)) = 0xffffffff;
    }
    *((ebp - 0x2b)) &= 0x7f;
    *((esi + 0x1c)) = 0;
    *((esi + 0x20)) = 0;
    *((esi + 0x24)) = 0;
    eax = ebp - 0x34;
    *((esi + 0x28)) = 0;
    edi = 0;
    *((esi + 0x18)) = 0;
    eax = fcn_00013be9 ();
    if (eax <= 4) {
    }
    if ((*((esi + 8)) & 2) != 0) {
        eax = *(esi);
        eax += ecx;
        eax += 0xa;
        *((ebp - 0x18)) = eax;
        eax = *((esi + 4));
        if (eax <= 0) {
            goto label_0;
        }
        *((ebp - 0x18)) += eax;
    } else {
        eax = *(esi);
        eax += 7;
        *((ebp - 0x18)) = eax;
    }
label_0:
    bl = *((esi + 8));
    eax = 0xf;
    if ((bl & 0x20) != 0) {
        eax = 0x14;
    }
    if ((*((esi + 8)) & 0x40) != 0) {
        eax += eax;
    }
    ebx = *((ebp - 0x18));
    eax += 4;
    if (eax < ebx) {
        *((ebp - 0x18)) = eax;
    }
    *((ebp - 0x98)) = 0x30;
    ah = 0;
    *((ebp - 0x97)) = ah;
    eax = ebp - 0x97;
    *((ebp - 0x28)) = eax;
    eax = 0;
    *((ebp - 0x24)) = eax;
    do {
        edx = *((ebp - 0x18));
        if (edx <= 0) {
            goto label_1;
        }
        ebx = edx - 8;
        *((ebp - 0x18)) = ebx;
        if (edi == 0) {
            if ((*((ebp - 0x2c)) & 0x7fff) == 0) {
                goto label_1;
            }
            eax = ebp - 0x34;
            *(fp_stack--) = fp_stack[?];
            __asm ("wait");
            ah |= 0xc;
            *((esp + 4)) = fp_stack[0];
            fp_stack--;
            edi = eax;
            if (ebx <= 0) {
                goto label_2;
            }
            edx = ebp - 0x40;
            ebx = ebp - 0x34;
            *(fp_stack--) = *(esp);
            ? = fp_stack[0];
            fp_stack--;
            edx = ebp - 0x40;
            eax = ebp - 0x34;
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            ? = fp_stack[0];
            fp_stack--;
            eax = 0x4019;
            ebx = 0xbebc2000;
            edx = ebp - 0x40;
            *((ebp - 0x38)) = ax;
            *((ebp - 0x3c)) = ebx;
            eax = 0;
            ebx = ebp - 0x34;
            *((ebp - 0x40)) = eax;
            eax = ebp - 0x34;
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            ? = fp_stack[0];
            fp_stack--;
        }
label_2:
        ebx = *((ebp - 0x28));
        eax = edi;
        edx = *((ebp - 0x24));
        fcn_00012487 ();
        al = 0;
        *(ebx) = al;
        *((ebp - 0x28)) = ebx;
        edx += 8;
        edi = 0;
        *((ebp - 0x24)) = edx;
    } while (1);
label_1:
    eax = *((ebp - 0x24));
    edx = ebp - 0x97;
    ecx += 7;
    do {
        if (*(edx) != 0x30) {
            goto label_3;
        }
        eax--;
        ecx--;
        edx++;
    } while (1);
label_3:
    bh = *((esi + 8));
    edi = *(esi);
    if ((bh & 2) != 0) {
        ecx += *((esi + 4));
        ebx = ecx + 1;
        edi += ebx;
    } else {
        if ((bh & 1) == 0) {
            goto label_4;
        }
        ebx = *((esi + 4));
        if (ebx > 0) {
            edi++;
        } else {
            edi += ebx;
        }
        ecx++;
        ecx -= *((esi + 4));
    }
label_4:
    if (edi < 0) {
        goto label_5;
    }
    if (edi > eax) {
        edi = eax;
    }
    ebx = 0xf;
    if ((*((esi + 8)) & 0x20) != 0) {
        ebx = 0x14;
    }
    if ((*((esi + 8)) & 0x40) != 0) {
        ebx += ebx;
    }
    if (edi > ebx) {
        edi = ebx + 1;
    }
    *((ebp - 0x10)) = 0x30;
    if (eax > edi) {
        if (*((edx + edi)) < 0x35) {
            goto label_6;
        }
        *((ebp - 0x10)) = 0x39;
    }
label_6:
    *((ebp - 0x1c)) = edi;
    eax = edi + edx;
    do {
        ebx = *((ebp - 0x1c));
        ebx--;
        eax--;
        *((ebp - 0x1c)) = ebx;
        bl = *(eax);
        bh = *((ebp - 0x10));
        if (bl != bh) {
            goto label_7;
        }
        edi--;
    } while (1);
label_7:
    if (bh == 0x39) {
        bh = bl;
        bh++;
        *(eax) = bh;
    }
    if (*((ebp - 0x1c)) < 0) {
        edx--;
        edi++;
        ecx++;
    }
label_5:
    if (edi <= 0) {
        edi = 1;
        al = 0x30;
        ecx = 0;
        *((ebp - 0x98)) = al;
        edx = ebp - 0x98;
        *((esi + 0x14)) = ecx;
    }
    ah = *((esi + 8));
    if ((ah & 2) == 0) {
        if ((ah & 4) == 0) {
            goto label_8;
        }
        if (ecx >= 0xfffffffc) {
            if (ecx < *(esi)) {
                goto label_9;
            }
        }
        if ((*((esi + 8)) & 8) == 0) {
            goto label_8;
        }
    }
label_9:
    ebx = *((ebp - 0x20));
    eax = esi;
    ebx = edi;
    fcn_000125f5 (ebx);
    goto label_10;
label_8:
    eax = *((ebp - 0x20));
    ebx = edi;
    eax = esi;
    eax = fcn_00012813 (eax);
label_10:
    eax = 0;
    ax = *((ebp - 0x14));
    esp = ebp - 0xc;
}
/* r2dec pseudo code output */
/* synth @ 0x11df7 */
#include <stdint.h>
 
int32_t fcn_00011df7 (void) {
    eax = 0xcac;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x182c9 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_000182c9 (void) {
label_0:
    return;
    if (eax < *(0x1b8)) {
        goto label_1;
    }
    if (*(0x1d2) != 0) {
        goto label_2;
    }
    ebp = *(esp);
    ebp += 0xf;
    ebp >>= 4;
    if (ebp == 0) {
    }
    ebx = 0;
    ax = ds;
    bx = ds;
    ah = 0xed;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax <<= 0x1f;
    edi &= 0xffff;
    edi |= eax;
    eax = edi;
    if (edi < 0) {
        ebx = ebp;
        es = edi;
        ah = 0x4a;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        eax = rotate_left32 (eax, 1);
        eax = rotate_right32 (eax, 1);
        if (eax < 0) {
            goto label_1;
        }
    }
    ax = ds;
    ebx = ebp;
    do {
        es = eax;
        ah = 0x4a;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        eax = rotate_left32 (eax, 1);
        eax = rotate_right32 (eax, 1);
        if (eax >= 0) {
            goto label_3;
        }
label_1:
        fcn_00011df7 ();
        *(eax) = 5;
        eax = 0xffffffff;
        goto label_4;
label_2:
        ebx = *(esp);
        ebx += 0xfff;
        ebx >>= 0xc;
        if (ebx == 0) {
            ebx = 0xfffff;
        }
        dl = *(0x1d2);
        if (dl == 1) {
            if (dl != *(0x1d3)) {
                goto label_5;
            }
            ebx <<= 8;
        }
label_5:
        ax = ds;
    } while (1);
label_3:
    ebx = *(esp);
    eax = *(0x1a4);
    *(0x1a4) = ebx;
label_4:
    goto label_0;
}
/* r2dec pseudo code output */
/* synth @ 0x13077 */
#include <stdint.h>
 
int32_t fcn_00013077 (void) {
    edi = eax;
    if (eax != 0) {
        if (eax <= 0xffffffd4) {
            goto label_1;
        }
    }
    eax = 0;
    goto label_2;
label_1:
    ebp = eax + 0xb;
    ebp &= 0xfffffff8;
    if (ebp < 0x10) {
    }
    ah = 0;
    edx = 0;
    *(esp) = ah;
label_0:
    if (ebp > *(0x600)) {
        ecx = *(0x5fc);
        if (ecx != 0) {
            goto label_3;
        }
    } else {
        ecx = 0;
    }
    *(0x600) = ecx;
    ecx = *(0x5f8);
    do {
label_3:
        if (ecx == 0) {
            goto label_4;
        }
        esi = *((ecx + 0x14));
        *(0x5fc) = ecx;
        if (esi >= edi) {
            eax = 0x5f8;
            edx = ds;
            edx &= 0xffff;
            ebx = ecx;
            eax = edi;
            eax = fcn_00013610 ();
            edx = eax;
            if (eax != 0) {
                goto label_5;
            }
        }
        if (esi > *(0x600)) {
            *(0x600) = esi;
        }
        ecx = *((ecx + 8));
    } while (1);
label_4:
    if (*(esp) == 0) {
        eax = edi;
        eax = fcn_00017702 ();
        if (eax != 0) {
            goto label_6;
        }
    }
    eax = edi;
    eax = fcn_000178c3 ();
    if (eax != 0) {
        cl = 0;
        *(esp) = cl;
        goto label_0;
label_6:
        *(esp) = 1;
        goto label_0;
    }
label_5:
    ch = 0;
    eax = edx;
    *(0xce0) = ch;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x13158 */
#include <stdint.h>
 
void fcn_00013158 (void) {
    ecx = ebx;
    dh = dl;
    edx <<= 8;
    dl = dh;
    edx <<= 8;
    dl = dh;
    fcn_000178d0 ();
}
/* r2dec pseudo code output */
/* synth @ 0x178d0 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_000178d0 (void) {
    ecx |= ecx;
    if (ecx == 0) {
        goto label_0;
    }
    do {
        if ((al & 3) == 0) {
            goto label_1;
        }
        *(eax) = dl;
        eax++;
        edx = rotate_right32 (edx, 8);
        ecx--;
    } while (ecx != 0);
label_1:
    ecx >>= 2;
    fcn_00017907 ();
    ecx &= 3;
    if (ecx != 0) {
        *(eax) = dl;
        ecx--;
        if (ecx == 0) {
            goto label_0;
        }
        *((eax + 1)) = dh;
        ecx--;
        if (ecx == 0) {
            goto label_0;
        }
        *((eax + 2)) = dl;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11c83 */
#include <stdint.h>
 
int32_t fcn_00011c83 (void) {
    esi = eax;
    if (eax == 0) {
        goto label_0;
    }
    ecx = *(0xca8);
    if (ecx != 0) {
        if (ecx <= eax) {
            eax = *(ecx);
            eax += ecx;
            if (eax > esi) {
                goto label_1;
            }
        }
        eax = ecx;
        ecx = *((ecx + 4));
        if (ecx != 0) {
            if (ecx > esi) {
                goto label_2;
            }
            edx = *(ecx);
            edx += ecx;
            if (edx > esi) {
                goto label_1;
            }
        }
label_2:
        ecx = *((eax + 8));
        if (ecx == 0) {
            goto label_3;
        }
        if (ecx > esi) {
            goto label_3;
        }
        eax = *(ecx);
        eax += ecx;
        if (eax > esi) {
            goto label_1;
        }
    }
label_3:
    ecx = *(0x5fc);
    if (ecx != 0) {
        if (ecx <= esi) {
            eax = *(ecx);
            eax += ecx;
            if (eax > esi) {
                goto label_1;
            }
        }
        eax = ecx;
        ecx = *((ecx + 4));
        if (ecx != 0) {
            if (ecx > esi) {
                goto label_4;
            }
            edx = *(ecx);
            edx += ecx;
            if (edx > esi) {
                goto label_1;
            }
        }
label_4:
        ecx = *((eax + 8));
        if (ecx == 0) {
            goto label_5;
        }
        if (ecx > esi) {
            goto label_5;
        }
        eax = *(ecx);
        eax += ecx;
        if (eax > esi) {
            goto label_1;
        }
    }
label_5:
    ecx = *(0x5f8);
    while (ecx != 0) {
        if (ecx <= esi) {
            eax = *(ecx);
            eax += ecx;
            if (eax > esi) {
                goto label_1;
            }
        }
        ecx = *((ecx + 8));
    }
    edx = esi;
    ecx = esi;
    ebx = esi;
    return eax;
label_1:
    eax = 0x5f8;
    edx = ds;
    edx &= 0xffff;
    ebx = ecx;
    eax = esi;
    fcn_000136c0 ();
    edx = *(0x5fc);
    *(0xca8) = ecx;
    if (ecx < edx) {
        ebx = *(0x600);
        eax = *((ecx + 0x14));
        if (eax <= ebx) {
            goto label_6;
        }
        *(0x600) = eax;
    }
label_6:
    ah = 0;
    *(0xce0) = ah;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x187c0 */
#include <stdint.h>
 
int32_t fcn_000187c0 (void) {
    if (*(0x1190) != 0) {
        ebx = 0;
        bl = *(edx);
        bl = *((ebx + 0x1195));
        bl &= 1;
        ebx &= 0xff;
        if (ebx == 0) {
            goto label_0;
        }
        bl = *(edx);
        *(eax) = bl;
        dl = *((edx + 1));
        *((eax + 1)) = dl;
        return eax;
    }
label_0:
    dl = *(edx);
    *(eax) = dl;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x187f1 */
#include <stdint.h>
 
int32_t fcn_000187f1 (void) {
    if (*(0x1190) != 0) {
        al = *(eax);
        eax &= 0xff;
        al = *((eax + 0x1195));
        al &= 1;
        eax &= 0xff;
        if (eax == 0) {
            goto label_0;
        }
        eax = 2;
        return eax;
    }
label_0:
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1881c */
#include <stdint.h>
 
int32_t fcn_0001881c (void) {
    ecx = eax;
    do {
        ebx = eax;
        eax = fcn_00018467 ();
        if (eax != 0) {
            goto label_0;
        }
        eax = ebx;
        edx = esp;
        fcn_00018de1 ();
        fcn_00018e1c ();
        fcn_00018eb1 ();
        eax = esp;
        dl = 0;
        fcn_000187f1 ();
        *((esp + eax)) = dl;
        edx = esp;
        eax = ebx;
        fcn_000187c0 ();
        eax = ebx;
        fcn_000184fa ();
    } while (1);
label_0:
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1886b */
#include <stdint.h>
 
int32_t fcn_0001886b (void) {
    bl = *(eax);
    if (bl == *(edx)) {
        if (*(0x1190) != 0) {
            ebx = 0;
            bl = *(eax);
            bl = *((ebx + 0x1195));
            bl &= 1;
            ebx &= 0xff;
            if (ebx == 0) {
                goto label_0;
            }
            bl = *((eax + 1));
            cl = *((edx + 1));
            if (bl != cl) {
                goto label_1;
            }
        }
label_0:
        eax = 0;
        ebx = ecx;
        return eax;
label_1:
        al = bl;
        eax &= 0xff;
        dl = cl;
        edx &= 0xff;
        eax -= edx;
        ebx = ecx;
        return eax;
    }
    ebx = 0;
    bl = *(eax);
    eax = 0;
    al = *(edx);
    ebx -= eax;
    eax = ebx;
    ebx = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x13013 */
#include <stdint.h>
 
int32_t fcn_00013013 (void) {
    ebx = eax;
    dl = al;
    eax = 0;
    al = bl;
    eax = fcn_000110fe ();
    if (ebx < 0x100) {
        if (*(0x1db) >= 3) {
            if (bl == 0x50) {
                dl = 0xe;
            } else {
            }
            if (bl < 0x22) {
                if (bl >= 0x20) {
                    dl = 5;
                }
            } else {
                if (dl <= 0x13) {
                    goto label_0;
                }
            }
            dl = 0x13;
        }
label_0:
        eax = 0;
        al = dl;
        eax = *((eax + 0x5dd));
        eax >>= 0x18;
    } else {
        eax = ebx;
        eax >>= 8;
        eax &= 0xff;
    }
    fcn_000110d4 ();
    eax = 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x110d4 */
#include <stdint.h>
 
int32_t fcn_000110d4 (void) {
    edx = eax;
    fcn_00011df7 ();
    *(eax) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x17bd0 */
#include <stdint.h>
 
int32_t fcn_00017bd0 (void) {
    if (*(0x7ac) == 0) {
        if (*(0x7b0) == 0) {
            goto label_0;
        }
    }
    ebx = *(0x604);
    if (ebx == 0x7dc0) {
        *(0x604) = 0x7dc5;
    } else {
        if (ebx != 0x7bd0) {
            goto label_1;
        }
        *(0x604) = 0x3875;
    }
label_1:
    ah = *(0x1d2);
    if (ah >= 2) {
        if (ah <= 8) {
            cl = 0x23;
            dx = *(0x7b0);
            eax = *(0x7ac);
            ebx = *(0x7ac);
            ebx <<= 0x10;
            bx = dx;
            ax = 0x2505;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            cl = 0x23;
            dx = *(0x7bc);
            eax = *(0x7b8);
            ds = edx;
            edx = eax;
            ax = 0x2504;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        }
    } else {
        eax = fcn_00017b45 ();
        if (eax == 1) {
            bl = 0x23;
            cx = *(0x7b0);
            edx = *(0x7ac);
            ax = 0x201;
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
            bl = 0x23;
            cx = *(0x7bc);
            edx = *(0x7b8);
            ax = 0x205;
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
        } else {
            eax = 0x23;
            cx = *(0x7b0);
            ebx = *(0x7ac);
            fcn_000181ce ();
        }
    }
    ebx = 0;
    ebp = 0;
    *(0x7b0) = bx;
    *(0x7ac) = ebp;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x17de6 */
#include <stdint.h>
 
uint32_t fcn_00017de6 (void) {
    do {
label_0:
        return;
    } while (*(0x7ac) != 0);
    if (*(0x7b0) != 0) {
        goto label_0;
    }
    ah = *(0x1d2);
    if (ah >= 2) {
        if (ah <= 8) {
            cl = 0x23;
            ax = 0x2503;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            cx = bx;
            ebx >>= 0x10;
            edx = ebx;
            *(0x7b0) = cx;
            *(0x7ac) = edx;
            cl = 0x23;
            edx = 0x7a38;
            ax = 0x2502;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            cx = es;
            al = 0x23;
            *(0x7bc) = cx;
            ecx = cs;
            *(0x7b8) = ebx;
            ds = ecx;
            cl = al;
            al = 6;
            ah = 0x25;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        }
    } else {
        eax = fcn_00017b45 ();
        if (eax == 1) {
            edx = 0x7acd;
            eax = 0x7a38;
            edx -= 0x7a38;
            di = dx;
            edx >>= 0x10;
            si = dx;
            bx = ax;
            eax >>= 0x10;
            cx = ax;
            ax = 0x600;
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
            ax -= ax;
            bl = 0x23;
            ax = 0x200;
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
            bl = 0x23;
            *(0x7b0) = cx;
            *(0x7ac) = edx;
            ax = 0x204;
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
            bl = 0x23;
            *(0x7bc) = cx;
            *(0x7b8) = edx;
            edx = 0x7a38;
            ecx = cs;
            ax = 0x205;
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
        } else {
            eax = 0x23;
            ebx = 0x7a38;
            eax = fcn_0001877b ();
            ecx = cs;
            *(0x7ac) = eax;
            eax = 0x23;
            *(0x7b0) = dx;
            fcn_000181ce ();
        }
    }
    ebx = *(0x604);
    if (ebx == 0x3875) {
        *(0x604) = 0x7bd0;
        goto label_0;
    }
    if (ebx != 0x7dc5) {
        goto label_0;
    }
    *(0x604) = 0x7dc0;
    goto label_0;
}
/* r2dec pseudo code output */
/* synth @ 0x17dc5 */
#include <stdint.h>
 
int32_t fcn_00017dc5 (void) {
    do {
        *(esp) = 6;
label_0:
        esi = *(0x7b2);
        dx = *(0x7b6);
        if (esi == 0) {
            if (dx == 0) {
                goto label_1;
            }
        }
        edi = *(0x604);
        if (edi == 0x7dc0) {
            *(0x604) = 0x7bd0;
        } else {
            if (edi != 0x7dc5) {
                goto label_2;
            }
            *(0x604) = 0x3875;
        }
label_2:
        ah = *(0x1d2);
        if (ah >= 2) {
            if (ah <= 8) {
                cl = *(esp);
                dx = *(0x7b6);
                eax = *(0x7b2);
                ebx = *(0x7b2);
                ebx <<= 0x10;
                bx = dx;
                ax = 0x2505;
                eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
                cl = *(esp);
                dx = *(0x7c2);
                eax = *(0x7be);
                ds = edx;
                edx = eax;
                ax = 0x2504;
                eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            }
        } else {
            eax = fcn_00017b45 ();
            if (eax == 1) {
                bl = *(esp);
                cx = *(0x7b6);
                edx = *(0x7b2);
                ax = 0x201;
                eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
                bl = *(esp);
                cx = *(0x7c2);
                edx = *(0x7be);
                ax = 0x205;
                eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
            } else {
                eax = *(esp);
                cx = *(0x7b6);
                ebx = *(0x7b2);
                fcn_000181ce ();
            }
        }
        ebx = 0;
        *(0x7b6) = bx;
        ebx = 0;
        *(0x7b2) = ebx;
label_1:
    } while (*(0x800) != 0);
    *(esp) = 0x1b;
    goto label_0;
}
/* r2dec pseudo code output */
/* synth @ 0x17f2e */
#include <stdint.h>
 
uint32_t fcn_00017f2e (void) {
    if (*(0x800) == 0) {
        *(esp) = 0x1b;
    } else {
        *(esp) = 6;
    }
    esi = *(0x7b2);
    dx = *(0x7b6);
    if (esi != 0) {
        void (*0x17db7)() ();
    }
    if (dx != 0) {
        void (*0x17db7)() ();
    }
    ah = *(0x1d2);
    if (ah >= 2) {
        if (ah <= 8) {
            cl = *(esp);
            ax = 0x2503;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            cx = bx;
            ebx >>= 0x10;
            edx = ebx;
            *(0x7b6) = cx;
            *(0x7b2) = edx;
            cl = *(esp);
            edx = 0x7acd;
            ax = 0x2502;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            cx = es;
            al = *(esp);
            *(0x7c2) = cx;
            ecx = cs;
            *(0x7be) = ebx;
            ds = ecx;
            cl = al;
            al = 6;
            ah = 0x25;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        }
    } else {
        eax = fcn_00017b45 ();
        if (eax == 1) {
            edx = 0x7b45;
            eax = 0x7acd;
            edx -= 0x7acd;
            di = dx;
            edx >>= 0x10;
            si = dx;
            bx = ax;
            eax >>= 0x10;
            cx = ax;
            ax = 0x600;
            /* [08] -r-x section size 4096 named obj.1.page.8 */
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
            ax -= ax;
            bl = *(esp);
            ax = 0x200;
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
            bl = *(esp);
            *(0x7b6) = cx;
            *(0x7b2) = edx;
            ax = 0x204;
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
            bl = *(esp);
            *(0x7c2) = cx;
            *(0x7be) = edx;
            edx = 0x7acd;
            ecx = cs;
            ax = 0x205;
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
        } else {
            eax = *(esp);
            ebx = 0x7acd;
            eax = fcn_0001877b ();
            ecx = cs;
            *(0x7b2) = eax;
            eax = *(esp);
            *(0x7b6) = dx;
            fcn_000181ce ();
        }
    }
    edi = *(0x604);
    if (edi == 0x3875) {
        *(0x604) = 0x7dc5;
        void (*0x17db7)() ();
    }
    if (edi != 0x7bd0) {
        void (*0x17db7)() ();
    }
    *(0x604) = 0x7dc0;
    return void (*0x17db7)() ();
}
/* r2dec pseudo code output */
/* synth @ 0x188db */
#include <stdint.h>
 
int32_t fcn_000188db (void) {
    ebx = eax;
    ecx = 0;
    ah = *(0x19c);
    *(esp) = ecx;
    if (ah != 0) {
        edi = esp;
        __asm ("wait");
        if (edx == 0) {
            goto label_0;
        }
        eax = edx;
        esi = *(esp);
        eax = ~eax;
        edx &= ebx;
        eax &= esi;
        eax |= edx;
        edi = esp;
        *(esp) = eax;
        __asm ("wait");
        edi = esp;
        __asm ("wait");
    }
label_0:
    eax = 0;
    ax = *(esp);
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18927 */
#include <stdint.h>
 
uint32_t fcn_00018927 (void) {
    if (*(0x608) != 0x8fcb) {
        ah = *(0x1d2);
        if (ah >= 2) {
            if (ah <= 8) {
                goto label_0;
            }
        }
        eax = fcn_00017b45 ();
        if (eax == 1) {
            edx = 0x914d;
            eax = 0x903d;
            edx -= 0x903d;
            di = dx;
            edx >>= 0x10;
            si = dx;
            bx = ax;
            eax >>= 0x10;
            cx = ax;
            ax = 0x600;
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
            ax -= ax;
        }
label_0:
        ebx = 0x8545;
        ecx = 0x8fcb;
        *(0x1dd) = ebx;
        fcn_00018f6e ();
        *(0x608) = ecx;
    }
    fcn_00019028 ();
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18545 */
#include <stdint.h>
 
int32_t fcn_00018545 (void) {
    ebx = *(0x7d4);
    if (ebx != 1) {
        if (ebx == 2) {
            goto label_0;
        }
        if (ebx == 3) {
            goto label_0;
        }
        *(0x7d4) = 2;
        edx = eax;
        eax = 2;
        void (*ebx)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x188c9 */
#include <stdint.h>
 
int32_t fcn_000188c9 (void) {
    edx = 0xff;
    eax = 0x108;
    fcn_000110ab ();
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x110ab */
#include <stdint.h>
 
uint32_t fcn_000110ab (void) {
    ebx = eax;
    ecx = edx;
    edx = ds;
    eax = fcn_00012e53 ();
    if (eax == 0) {
        edx = ecx;
        eax = ebx;
        fcn_00011025 ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x12e53 */
#include <stdint.h>
 
void fcn_00012e53 (void) {
    if (*(0x584) == 0) {
        void (*0x12e76)() ();
    }
    edx &= 0xffff;
    __asm ("int3");
}
/* r2dec pseudo code output */
/* synth @ 0x11025 */
#include <stdint.h>
 
void fcn_00011025 (void) {
    edx = 0xe08;
    ax = 0x3d01;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    bx = ax;
    edx = eax;
    esi = edx;
    do {
        al = *(esi);
        esi++;
    } while (al != 0);
    ecx = esi;
    ecx -= edx;
    ecx--;
    ah = 0x40;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = 0;
    edx = 0xf;
    fcn_00011f7b ();
    ah = 0x4c;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* synth @ 0x11f7b */
#include <stdint.h>
 
int32_t fcn_00011f7b (void) {
    esi = 0xb98;
    cl = al;
    dh = dl;
label_0:
    eax = 0xb86;
    ebx = esi;
    dl = cl;
    do {
        if (eax >= 0xb98) {
            goto label_1;
        }
        if (*(eax) != 2) {
            ch = *((eax + 1));
            if (dl > ch) {
                goto label_2;
            }
            ebx = eax;
            dl = ch;
        }
label_2:
        eax += 6;
    } while (1);
label_1:
    if (ebx != 0xb98) {
        if (dh >= *((ebx + 1))) {
            eax = ebx + 2;
            fcn_00011f23 ();
        }
        *(ebx) = 2;
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18723 */
#include <stdint.h>
 
int32_t fcn_00018723 (void) {
    dx = *(0x1298);
    if (dx == 0) {
        eax = 0;
        edx = es;
        ecx = es;
        ebx = es;
        return eax;
    }
    eax = 0xffff5;
    es = edx;
    ebx = 0;
    edx = 0;
    do {
        cl = *(es:eax);
        if (cl >= 0x30) {
            if (cl <= 0x39) {
                goto label_0;
            }
        }
        if (*(es:eax) == 0x2f) {
label_0:
            ebx++;
        }
        edx++;
        eax++;
    } while (edx < 8);
    al = (ebx < 4) ? 1 : 0;
    eax &= 0xff;
    edx = es;
    ecx = es;
    ebx = es;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18467 */
#include <stdint.h>
 
int32_t fcn_00018467 (void) {
    if (*(eax) == 0) {
        eax = 1;
        return eax;
    }
    if (*(0x1190) != 0) {
        edx = 0;
        dl = *(eax);
        dl = *((edx + 0x1195));
        dl &= 1;
        edx &= 0xff;
        if (edx == 0) {
            goto label_0;
        }
        if (*((eax + 1)) != 0) {
            goto label_0;
        }
        eax = 2;
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18de1 */
#include <stdint.h>
 
int32_t fcn_00018de1 (void) {
    if (*(0x1190) != 0) {
        edx = 0;
        dl = *(eax);
        dl = *((edx + 0x1195));
        dl &= 1;
        edx &= 0xff;
        if (edx == 0) {
            goto label_0;
        }
        edx = 0;
        dl = *(eax);
        edx <<= 8;
        al = *((eax + 1));
        eax &= 0xff;
        eax |= edx;
        return eax;
    }
label_0:
    al = *(eax);
    eax &= 0xff;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18e1c */
#include <stdint.h>
 
uint32_t fcn_00018e1c (void) {
    int32_t var_1h;
    int32_t var_4h;
    ebx = eax;
    edx = esp + 4;
    fcn_00018eb1 ();
    eax = esp + 4;
    dl = 0;
    eax = fcn_000187f1 ();
    *((esp + eax + 4)) = dl;
    if (*(0x808) == 0x3a4) {
        if (*(0x1190) != 0) {
            eax = 0;
            al = *((esp + 4));
            al = *((eax + 0x1195));
            al &= 1;
            eax &= 0xff;
            if (eax == 0) {
                goto label_0;
            }
            eax = ebx;
            eax = fcn_00018f4c ();
        }
    } else {
label_0:
        if (*(0x1190) != 0) {
            eax = 0;
            al = *((esp + 4));
            al = *((eax + 0x1195));
            al &= 1;
            eax &= 0xff;
            if (eax != 0) {
                goto label_1;
            }
        }
        eax = 0;
        al = *((esp + 4));
        dh = 0;
        al = fcn_00018f5f ();
        *(esp) = al;
        eax = esp;
        *((esp + 1)) = dh;
        fcn_00018de1 ();
        goto label_2;
label_1:
        eax = ebx;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18eb1 */
#include <stdint.h>
 
int32_t fcn_00018eb1 (void) {
    ebx = eax;
    eax = edx;
    if ((bh & 0xff) != 0) {
        edx = ebx;
        *((eax + 1)) = bl;
        edx >>= 8;
        *(eax) = dl;
        return eax;
    }
    *(edx) = bl;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x184fa */
#include <stdint.h>
 
int32_t fcn_000184fa (void) {
    if (*(0x1190) != 0) {
        edx = 0;
        dl = *(eax);
        dl = *((edx + 0x1195));
        dl &= 1;
        edx &= 0xff;
        if (edx == 0) {
            goto label_0;
        }
        if (*((eax + 1)) == 0) {
            goto label_0;
        }
        eax += 2;
        return eax;
    }
label_0:
    eax++;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18b7a */
#include <stdint.h>
 
uint32_t fcn_00018b7a (void) {
    int32_t var_4h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_34h;
    int32_t var_40h;
    int32_t var_48h;
    int32_t var_50h;
    int32_t var_5ch;
    int32_t var_5eh;
    int32_t var_66h;
    ah = *(0x1d2);
    if (ah >= 2) {
        if (ah <= 8) {
            ebx = 0x12;
            eax = esp + 0x5c;
            edx = 0;
            ecx = 0x6300;
            fcn_00013158 ();
            ebx = 0x28;
            eax = esp + 0x34;
            edx = 0;
            esi = 0x2511;
            fcn_00013158 ();
            edx = 0x21;
            eax = esp + 0x5c;
            *((esp + 0x66)) = ecx;
            *((esp + 0x34)) = esi;
            *((esp + 0x5c)) = dx;
            edx = ds;
            *((esp + 0x40)) = eax;
            eax = 0x21;
            *((esp + 0x50)) = dx;
            edx = esp + 0x34;
            eax = fcn_00018f47 ();
            ebx = *((esp + 0x5e));
            if (bx == 0xffff) {
                goto label_0;
            }
            edx = 0;
            eax = 0;
            dx = bx;
            ax = *((esp + 0x48));
            edx <<= 4;
            eax += edx;
            dx = *(0x1298);
        }
    } else {
        if (*(0x1d2) == 1) {
            ebx = 0x32;
            eax = esp;
            edx = 0;
            edi = esp;
            fcn_00013158 ();
            ecx = 0;
            bh = 0;
            edx = 0x6300;
            bl = 0x21;
            *((esp + 0x1c)) = edx;
            edx = ds;
            es = edx;
            ax = 0x300;
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
            eax -= eax;
            if ((*((esp + 0x20)) & 1) == 0) {
                eax = 0;
                ax = *((esp + 0x24));
                ebx = *((esp + 4));
                eax <<= 4;
                dx = *(0x1298);
                eax += ebx;
            }
        } else {
label_0:
            edx = 0;
            eax = 0;
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18c7c */
#include <stdint.h>
 
int32_t fcn_00018c7c (void) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_22h;
    int32_t var_34h;
    int32_t var_38h;
    int32_t var_3ch;
    int32_t var_40h;
    int32_t var_4ch;
    int32_t var_50h;
    int32_t var_5ch;
    uint32_t var_5eh;
    int32_t var_60h;
    int32_t var_66h;
    int32_t var_6ah;
    int32_t var_70h;
    int32_t var_74h;
    do {
        return;
        ebx = 1;
        ax = 0x100;
        eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
        if (? < ?) {
            dx -= dx;
        }
        tmp_0 = ax;
        ax = dx;
        dx = tmp_0;
        eax <<= 0x10;
        ax = dx;
        edi = eax;
        *((esp + 0x74)) = eax;
        eax >>= 0x10;
        *((esp + 0x70)) = eax;
        ah = *(0x1d2);
        esi = 0;
        if (ah >= 2) {
            if (ah <= 8) {
                ebx = 0x12;
                eax = esp + 0x5c;
                edx = 0;
                ecx = 7;
                fcn_00013158 ();
                ebx = 0x28;
                eax = esp + 0x34;
                edx = 0;
                ebp = 0;
                fcn_00013158 ();
                eax = 0x6501;
                edx = 0xffff;
                *((esp + 0x60)) = di;
                *((esp + 0x3c)) = ecx;
                *((esp + 0x4c)) = ebp;
                *((esp + 0x66)) = eax;
                *((esp + 0x6a)) = edx;
                *((esp + 0x38)) = edx;
                edx = 0x21;
                eax = 0x2511;
                *((esp + 0x5c)) = dx;
                *((esp + 0x34)) = eax;
                eax = esp + 0x5c;
                edx = ds;
                *((esp + 0x40)) = eax;
                eax = 0x21;
                *((esp + 0x50)) = dx;
                edx = esp + 0x34;
                eax = fcn_00018f47 ();
                if (*((esp + 0x5e)) == 0xffff) {
                    goto label_0;
                }
                eax = 0;
                ax = di;
            }
        } else {
            if (*(0x1d2) != 1) {
                goto label_0;
            }
            ebx = 0x32;
            eax = esp;
            ecx = 7;
            edx = 0;
            edi = esp;
            fcn_00013158 ();
            ebp = 0;
            edx = 0x6501;
            ebx = 0xffff;
            eax = *((esp + 0x74));
            *((esp + 0x18)) = ecx;
            *(esp) = ebp;
            *((esp + 0x1c)) = edx;
            *((esp + 0x10)) = ebx;
            *((esp + 0x14)) = ebx;
            ecx = 0;
            bh = 0;
            edx = ds;
            bl = 0x21;
            *((esp + 0x22)) = ax;
            es = edx;
            ax = 0x300;
            eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
            eax -= eax;
            if ((*((esp + 0x20)) & 1) != 0) {
                goto label_0;
            }
            eax = 0;
            ax = *((esp + 0x74));
        }
        eax <<= 4;
        es = *(0x1298);
        esi = eax + 5;
        si = *(es:esi);
label_0:
        ebx = *((esp + 0x70));
        ax = 0x101;
        eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
        eax -= eax;
        eax = esi;
    } while (1);
}
/* r2dec pseudo code output */
/* synth @ 0x18f47 */
#include <stdint.h>
 
void fcn_00018f47 (void) {
    return void (*0x192e3)() ();
}
/* r2dec pseudo code output */
/* synth @ 0x192e3 */
#include <stdint.h>
 
uint32_t loc_000192e3 (void) {
    int32_t var_ch;
    int32_t var_10h;
    __asm ("pushal");
    eax = fcn_00019330 ();
    ebx = *((ebp + 0xc));
    ds = *((ebp + 0x10));
    *(ebx) = eax;
    __asm ("pushfd");
    eax = ebp;
    *((ebx + 0x24)) = ax;
    *((ebx + 8)) = ecx;
    *((ebx + 0xc)) = edx;
    *((ebx + 0x14)) = esi;
    *((ebx + 0x18)) = edi;
    ebx + 0x10 = ebp;
    eax = ebp;
    *((ebx + 0x1c)) = ax;
    ebx + 4 = ebp;
    *((ebx + 0x1e)) = es;
    *((ebx + 0x20)) = fs;
    *((ebx + 0x22)) = gs;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18f4c */
#include <stdint.h>
 
uint32_t fcn_00018f4c (void) {
    edx = eax;
    eax = fcn_00019664 ();
    if (eax != 0) {
        edx -= 0x21;
    }
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x19664 */
#include <stdint.h>
 
uint32_t fcn_00019664 (void) {
    edx = eax;
    eax = fcn_0001988f ();
    if (eax != 0) {
        if (edx >= 0x8281) {
            if (edx > 0x829a) {
                goto label_0;
            }
            edx = 1;
            eax = 1;
            return eax;
        }
label_0:
        edx = 0;
        eax = edx;
        return eax;
    }
    al = dl;
    al++;
    edx = 0;
    dl = al;
    al = *((edx + 0x6a4));
    al &= 0x80;
    edx = 0;
    dl = al;
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18f5f */
#include <stdint.h>
 
int32_t fcn_00018f5f (void) {
    if (eax >= 0x61) {
        if (eax > 0x7a) {
            goto label_0;
        }
        eax -= 0x20;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x17b45 */
#include <stdint.h>
 
int32_t fcn_00017b45 (void) {
    int32_t var_1h;
    int32_t var_2h;
    int32_t var_4h;
    if (*(0x7c4) == 0) {
        if (*(0x1d2) != 1) {
            ax = 0x1686;
            eax = syscall_2fh (eax, ebx, ecx, edx, esi, edi, edp);
            if (ax != 0) {
                goto label_0;
            }
        }
        dl = 0;
        *(esp) = dl;
        dh = 0;
        esi = esp;
        *((esp + 1)) = dl;
        *((esp + 2)) = dx;
        *((esp + 4)) = dl;
        edx = ds;
        ds = edx;
        ax = 0x400;
        eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
        *(esi) = ah;
        *((esi + 1)) = al;
        *((esi + 2)) = bx;
        *((esi + 4)) = cl;
        *((esi + 5)) = dh;
        *((esi + 6)) = dl;
        eax = 0;
        esi = *((esp + 1));
        al = *(esp);
        eax += esi;
        if (eax > 0) {
            *(0x7c4) = 1;
        } else {
label_0:
            *(0x7c4) = 0xffffffff;
        }
    }
    eax = *(0x7c4);
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18f6e */
#include <stdint.h>
 
void fcn_00018f6e (void) {
    if (*(0x80c) == 0) {
        if (*(0x19c) != 0) {
        }
    } else {
        return;
    }
    if (*(0x1d2) == 0) {
        fcn_000197de ();
    } else {
        if (*(0x1d2) == 1) {
            fcn_00019798 ();
        } else {
            if (*(0x1d2) == 9) {
                fcn_00019836 ();
            } else {
                fcn_000196a8 ();
            }
        }
    }
    fcn_00019028 ();
}
/* r2dec pseudo code output */
/* synth @ 0x19028 */
#include <stdint.h>
 
void fcn_00019028 (void) {
    __asm ("wait");
    __asm ("wait");
    __asm ("wait");
}
/* r2dec pseudo code output */
/* synth @ 0x197de */
#include <stdint.h>
 
int8_t fcn_000197de (void) {
    ah = 0x35;
    al = *(0xa36);
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x80e) = ebx;
    *(0x80c) = es;
    ah = 0x25;
    al = *(0xa36);
    if (*(0xa37) == 0x20) {
        edx = 0x903d;
    } else {
        edx = 0x904a;
    }
    bx = cs;
    ds = ebx;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    return al;
}
/* r2dec pseudo code output */
/* synth @ 0x19798 */
#include <stdint.h>
 
int8_t fcn_00019798 (void) {
    ah = 0x35;
    al = *(0xa34);
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x80e) = ebx;
    *(0x80c) = es;
    ah = 0x25;
    al = *(0xa34);
    dx = cs;
    ds = edx;
    edx = 0x904a;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    return al;
}
/* r2dec pseudo code output */
/* synth @ 0x19836 */
#include <stdint.h>
 
int16_t fcn_00019836 (void) {
    ax = 0x204;
    bl = *(0xa34);
    eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x80e) = edx;
    *(0x80c) = cx;
    ax = 0x200;
    bl = *(0xa34);
    eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
    ecx <<= 0x10;
    cx = dx;
    *(0x812) = ecx;
    cx = cs;
    if (*(0xa37) == 0x20) {
        edx = 0x903d;
    } else {
        edx = 0x904a;
    }
    ax = 0x205;
    bl = *(0xa34);
    eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
    return ax;
}
/* r2dec pseudo code output */
/* synth @ 0x196a8 */
#include <stdint.h>
 
int32_t fcn_000196a8 (void) {
    int32_t var_2h;
    if (*(0xa37) == 0x20) {
        edx = 0x903d;
    } else {
        edx = 0x904a;
    }
    if (*(0x1d2) < 3) {
        cl = 0x50;
        ax = 0x2503;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        ax = 0x2502;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        ax = cs;
        ds = eax;
        ax = 0x2506;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    }
    ax = 0x250c;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    cl = ah;
    cl += *(0xa35);
    cl -= 8;
    ax = 0x2502;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x80e) = ebx;
    *(0x80c) = es;
    ax = 0x2503;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x812) = ebx;
    if (*(0x1d2) < 3) {
        __asm ("sidt [esp]");
        ax = 0x60;
        es = eax;
        ebx = *((esp + 2));
        eax = *((es:ebx + 0x280));
        edx = *((es:ebx + 0x284));
        ecx = (int32_t) cl;
        ecx <<= 3;
        *((es:ebx + ecx)) = eax;
        *((es:ebx + ecx + 4)) = edx;
        cl = 0x50;
        ax = 0x2507;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    } else {
        ax = cs;
        ds = eax;
        ax = 0x2506;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1981c */
#include <stdint.h>
 
int8_t fcn_0001981c (void) {
    ah = 0x25;
    al = *(0xa36);
    edx = *(0x80e);
    ds = *(0x80c);
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    return al;
}
/* r2dec pseudo code output */
/* synth @ 0x158fe */
#include <stdint.h>
 
int32_t fcn_000158fe (int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    si = *((esp + 0x18));
    ecx = *((esp + 0x14));
    ebx = *((esp + 0x10));
    esi <<= 0x10;
    si = *((eax + 8));
    edx = *((eax + 4));
    eax = *(eax);
    eax = fcn_000159b3 ();
    *(ebx) = eax;
    *((ebx + 4)) = edx;
    *((ebx + 8)) = si;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x159b3 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_000159b3 (void) {
    do {
label_0:
        si--;
        esi += section.obj.1.page.0;
        if (esi >= 0) {
            if (esi overflow 0) {
                goto label_2;
            }
            return;
        }
label_2:
        esi -= section.obj.1.page.0;
        eax |= eax;
        if (eax == 0) {
            ebx |= ebx;
            if (ebx == 0) {
                if (edx != 0x80000000) {
                    goto label_3;
                }
                if (ecx != edx) {
                    goto label_3;
                }
                eax = esi;
                eax >>= 0x10;
                eax = ebx;
                if (si == ax) {
                    edi |= edi;
                    if (edi == 0) {
                    } else {
                        edi |= edi;
                        if (edi != 0) {
                            goto label_4;
                        }
                    }
                    edx >>= 1;
                    si = 0xffff;
                }
label_4:
            }
        } else {
label_3:
            if (edx == ecx) {
            }
            if (eax > ebx) {
                goto label_5;
            }
            if (eax == ebx) {
                edi |= edi;
            }
            if (edi == 0) {
                goto label_5;
            }
            edx = ecx;
            eax = ebx;
            esi >>= 0x10;
        }
label_5:
        return eax;
label_1:
        edx = ecx;
        eax = ebx;
        esi -= section.obj.1.page.0;
        eax |= eax;
        if (eax == 0) {
            if (edx != 0x80000000) {
                goto label_6;
            }
            esi ^= edi;
        }
label_6:
        esi >>= 0x10;
        return eax;
        edi -= edi;
        si++;
    } while (si < 0);
    if (si overflow 0) {
        goto label_0;
    }
    esi += 0xffff;
    if (esi < 0) {
        goto label_1;
    }
    if (esi overflow 0) {
        goto label_1;
    }
    esi -= section.obj.1.page.0;
    esi ^= edi;
    eax |= eax;
    if (eax == 0) {
        edx |= edx;
        if (edx != 0) {
            goto label_7;
        }
        si += si;
        if (si == 0) {
            esi >>= 0x10;
            eax = ebx;
            edx = ecx;
            esi += esi;
            bx |= si;
            ebx |= edx;
            if (ebx != 0) {
                esi >>= 1;
            }
            return eax;
        }
        si = rotate_right16 (si, 1);
    }
label_7:
    ecx |= ecx;
    if (ecx == 0) {
        ebx |= ebx;
        if (ebx != 0) {
            goto label_8;
        }
        if ((esi & 0x7fff0000) != 0) {
            goto label_8;
        }
        return eax;
    }
label_8:
    tmp_0 = esi;
    esi = ecx;
    ecx = tmp_0;
    edi = ecx;
    edi = rotate_left32 (edi, 0x10);
    edi >>= 0x10;
    ecx >>= 0x10;
    edi &= 0x80007fff;
    ecx &= 0x80007fff;
    edi = rotate_left32 (edi, 0x10);
    ecx = rotate_left32 (ecx, 0x10);
    cx += di;
    edi = rotate_left32 (edi, 0x10);
    ecx = rotate_left32 (ecx, 0x10);
    cx -= di;
    if (cx != 0) {
        if (cx < 0) {
            cx = -cx;
            tmp_1 = eax;
            eax = ebx;
            ebx = tmp_1;
            tmp_2 = esi;
            esi = edx;
            edx = tmp_2;
        }
        if (cx <= 0x40) {
            goto label_9;
        }
        ebp += ebp;
        bp = rotate_right16 (bp, 1);
        eax = ebx;
        edx = esi;
        esi = ebp;
        return eax;
    }
label_9:
    ch = 0;
    ecx |= ecx;
    if (ecx < 0) {
        ch = 0xff;
        esi = -esi;
        ebx = -ebx;
        ebp ^= 0x80000000;
    }
    edi -= edi;
    if (cl != 0) {
        ebx -= ebx;
        if (cl >= 0x20) {
            eax |= eax;
            bl = (eax != 0) ? 1 : 0;
            edi = ebx;
            ebx -= ebx;
            if (cl == 0x40) {
                edi |= edx;
                edx -= edx;
            }
            eax = edx;
            edx -= edx;
        }
        __asm ("shrd ebx, eax, cl");
        edi |= ebx;
        ebx -= ebx;
        __asm ("shrd eax, edx, cl");
        __asm ("shrd edx, ebx, cl");
    }
    eax += ebx;
    edx += esi;
    ch += 0;
    if (ch < 0) {
        if (cl == 0x40) {
            bl = ((edi & 0x7fffffff) != 0) ? 1 : 0;
            ebx >>= 1;
            eax += 0;
            edx += 0;
            ch += 0;
        }
        edx = -edx;
        eax = -eax;
        ch = 0;
        ebp ^= 0x80000000;
    }
    ebx = eax;
    bl |= ch;
    ebx |= edx;
    if (ebx == 0) {
        goto label_10;
    }
    bp |= bp;
    if (bp == 0) {
        goto label_11;
    }
    if (ch != 0) {
        goto label_12;
    }
    edi = rotate_left32 (edi, 1);
    edi = rotate_right32 (edi, 1);
    do {
        bp--;
        if (bp == 0) {
            goto label_11;
        }
        eax += eax;
        edx += edx;
    } while (edx >= 0);
label_12:
    bp++;
    if (bp == 0x7fff) {
        goto label_13;
    }
    __asm ("stc");
    edx = rotate_right32 (edx, 1);
    eax = rotate_right32 (eax, 1);
    if (bp < 0x7fff) {
        edi += edi;
        if (edi == 0) {
            eax = rotate_right32 (eax, 1);
            eax = rotate_left32 (eax, 1);
        }
        eax += 0;
        edx += 0;
        if (edx >= 0) {
            goto label_14;
        }
        edx = rotate_right32 (edx, 1);
        eax = rotate_right32 (eax, 1);
        bp++;
        if (bp == 0x7fff) {
            goto label_13;
        }
    }
label_14:
    goto label_11;
label_10:
    do {
label_11:
        ebp += ebp;
        bp = rotate_right16 (bp, 1);
        esi = ebp;
        edi = ebx;
        return eax;
label_13:
        eax -= eax;
        edx = 0x80000000;
    } while (1);
}
/* r2dec pseudo code output */
/* synth @ 0x1711e */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_0001711e (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    edi = ecx;
    eax = *(cs:);
    edx = *(cs:);
    si = *(cs:);
    do {
        esi = rotate_left32 (esi, 0x10);
        si = *((ebp + 8));
        esi = rotate_left32 (esi, 0x10);
        ebx = *(ebp);
        ecx = *((ebp + 4));
        fcn_00015eff ();
        edi = edi + 0xa;
        ebx = *(cs:);
        ecx = *(cs:);
        esi = rotate_left32 (esi, 0x10);
        si = *(cs:);
        esi = rotate_left32 (esi, 0x10);
        fcn_000159b3 ();
        *((ebp + 0xc))--;
    } while (*((ebp + 0xc)) != 0);
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x15eff */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00015eff (void) {
    do {
label_0:
        eax |= eax;
        if (eax == 0) {
            if (edx != 0x80000000) {
                goto label_2;
            }
            ebx |= ebx;
            if (ebx != 0) {
                goto label_2;
            }
            ecx |= ecx;
            if (ecx != 0) {
                goto label_2;
            }
            esi = 0xffffffff;
            edx >>= 1;
            return eax;
        }
label_2:
        si--;
        esi += section.obj.1.page.0;
        if (esi >= 0) {
            if (esi overflow 0) {
                goto label_3;
            }
            eax |= eax;
            if (eax == 0) {
            }
            if (edx == 0x80000000) {
                esi |= esi;
                if (esi >= 0) {
                    goto label_4;
                }
                si ^= 0x8000;
            }
label_4:
            return eax;
        }
label_3:
        esi -= section.obj.1.page.0;
        if (edx == ecx) {
        }
        if (eax <= ebx) {
            if (eax == ebx) {
                eax |= eax;
                if (eax == 0) {
                }
                if (edx != 0x80000000) {
                    return eax;
                }
                si |= si;
                if (si >= 0) {
                    goto label_5;
                }
                esi ^= edx;
            }
label_5:
            edx = ecx;
            eax = ebx;
            esi >>= 0x10;
        }
        return eax;
label_1:
        esi -= section.obj.1.page.0;
        ebx |= ebx;
        if (ebx == 0) {
            if (ecx != 0x80000000) {
                goto label_6;
            }
            eax |= eax;
            if (eax == 0) {
                edx |= edx;
            }
            if (edx == 0) {
                ecx >>= 1;
                esi = 0xffffffff;
            } else {
                si |= si;
                if (si >= 0) {
                    goto label_6;
                }
                esi ^= ecx;
            }
        }
label_6:
        edx = ecx;
        eax = ebx;
        esi >>= 0x10;
        return eax;
        si++;
    } while (si < 0);
    if (si overflow 0) {
        goto label_0;
    }
    esi += 0xffff;
    if (esi < 0) {
        goto label_1;
    }
    if (esi overflow 0) {
        goto label_1;
    }
    esi -= section.obj.1.page.0;
    eax |= eax;
    if (eax == 0) {
        edx |= edx;
        if (edx != 0) {
            goto label_7;
        }
        si += si;
        if (si == 0) {
            return eax;
        }
        si = rotate_right16 (si, 1);
    }
label_7:
    ecx |= ecx;
    if (ecx == 0) {
        ebx |= ebx;
        if (ebx != 0) {
            goto label_8;
        }
        if ((esi & 0x7fff0000) != 0) {
            goto label_8;
        }
        eax -= eax;
        edx -= edx;
        esi -= esi;
        return eax;
    }
label_8:
    tmp_0 = esi;
    esi = ecx;
    ecx = tmp_0;
    edi = ecx;
    edi = rotate_left32 (edi, 0x10);
    edi >>= 0x10;
    ecx >>= 0x10;
    edi &= 0x80007fff;
    ecx &= 0x80007fff;
    ecx += edi;
    cx -= 0x3ffe;
    if (cx >= 0) {
        if (cx < 0x7fff) {
            goto label_9;
        }
        goto label_10;
    }
label_9:
    if (cx < 0xffc0) {
        eax -= eax;
        edx -= edx;
        ecx -= ecx;
    } else {
        ebp -= ebp;
        edx:eax = eax * ebx;
        tmp_1 = eax;
        eax = esi;
        esi = tmp_1;
        ecx = edx;
        edx = eax;
        edx:eax = eax * edx;
        edi = edx;
        ecx += eax;
        edi += ebp;
        ebp += ebp;
        tmp_2 = eax;
        eax = ebx;
        ebx = tmp_2;
        edx:eax = eax * ebx;
        ecx += eax;
        edi += edx;
        ebp += 0;
        eax = ebx;
        edx = eax;
        edx:eax = eax * edx;
        eax += edi;
        edx += ebp;
        ebx = ecx;
        ecx = eax;
        if (edx >= 0) {
            ebx += ebx;
            eax += eax;
            edx += edx;
            cx--;
        }
        ebx += ebx;
        if (ebx < 0) {
            if (ebx == 0) {
                esi |= esi;
                bl = (esi != 0) ? 1 : 0;
                ebx >>= 1;
                if (ebx < 0) {
                    goto label_11;
                }
                esi = eax;
                esi >>= 1;
            }
label_11:
            eax += 0;
            edx += 0;
            if (edx >= 0) {
                goto label_12;
            }
            edx = rotate_right32 (edx, 1);
            eax = rotate_right32 (eax, 1);
            cx++;
            if (cx == 0x7fff) {
                goto label_10;
            }
        }
label_12:
        cx |= cx;
        if (cx > 0) {
            goto label_13;
        }
        if (cx == 0) {
            cl = 1;
        } else {
            cx = -cx;
        }
        ebx -= ebx;
        __asm ("shrd eax, edx, cl");
        __asm ("shrd edx, ebx, cl");
        /* [06] -r-x section size 4096 named obj.1.page.6 */
        fp_stack[0] -= *((esi + 0x2b));
    }
    do {
label_13:
        ecx += ecx;
        cx = rotate_right16 (cx, 1);
        esi = ecx;
        edi = eax;
        return eax;
label_10:
        cx = 0x7fff;
        edx = 0x80000000;
        eax -= eax;
    } while (1);
}
/* r2dec pseudo code output */
/* synth @ 0x17303 */
#include <stdint.h>
 
int32_t fcn_00017303 (void) {
    edx = *(0x5f8);
    if (eax == edx) {
        edx = *((edx + 8));
        *(0x5f8) = edx;
    }
    ebx = *(0x5fc);
    if (eax == ebx) {
        edx = *((ebx + 4));
        *(0x5fc) = edx;
        if (edx != 0) {
            goto label_0;
        }
        edx = *(0x5f8);
        esi = 0;
        *(0x5fc) = edx;
        *(0x600) = esi;
    }
label_0:
    if (eax == *(0xca8)) {
        ebp = 0;
        *(0xca8) = ebp;
    }
    edx = *((eax + 4));
    eax = *((eax + 8));
    if (edx != 0) {
        *((edx + 8)) = eax;
    }
    if (eax != 0) {
        *((eax + 4)) = edx;
    }
    esi = ebp;
    edx = ebp;
    ebx = ebp;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1736e */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_0001736e (void) {
    edx = *(0x5f8);
    do {
label_0:
        if (edx == 0) {
            goto label_1;
        }
        eax = *((edx + 0x24));
        eax = *(eax);
        ebx = *(edx);
        eax += 0x2c;
        if (eax != ebx) {
            goto label_2;
        }
        ebx = edx - 8;
        eax = edx;
        ecx = *((edx + 8));
        fcn_00017303 ();
        edx = ecx;
        ecx = *((ebx + 4));
        if (ecx != 0) {
            goto label_3;
        }
        esi = *(ebx);
        di = *(ebx);
        esi >>= 0x10;
        ah = 5;
        al = 2;
        eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
    } while (1);
label_3:
    eax = ecx;
    es = eax;
    ah = 0x49;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    goto label_0;
label_2:
    edx = *((edx + 8));
    goto label_0;
label_1:
    edi = es;
    esi = es;
    edx = es;
    ecx = es;
    ebx = es;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x174c1 */
#include <stdint.h>
 
int32_t fcn_000174c1 (void) {
    edx = eax;
    eax = *(0x5f8);
    ebx = 0;
    while (eax != 0) {
        if (edx < eax) {
            goto label_0;
        }
        ebx = eax;
        eax = *((eax + 8));
    }
label_0:
    *((edx + 4)) = ebx;
    *((edx + 8)) = eax;
    if (ebx != 0) {
        *((ebx + 8)) = edx;
    } else {
        *(0x5f8) = edx;
    }
    if (eax != 0) {
        *((eax + 4)) = edx;
    }
    ebx = edx + 0x20;
    eax = *(edx);
    edx += 0x2c;
    *((edx - 0xc)) = 0;
    *((edx - 0x1c)) = 0;
    *((edx - 0x14)) = 0;
    *((edx - 0x10)) = 0;
    *((edx - 8)) = ebx;
    *((edx - 4)) = ebx;
    eax -= 0x2c;
    *((edx - 0x20)) = ebx;
    *(edx) = eax;
    *((edx + eax)) = 0xffffffff;
    eax = edx;
    ebx = edx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1784c */
#include <stdint.h>
 
int32_t fcn_0001784c (void) {
    ebx = eax;
    edx = *(eax);
    edx += 7;
    dl &= 0xf8;
    while (edx < *(ebx)) {
label_0:
        eax = 0;
        edx = esi;
        ebx = esi;
        return eax;
        if (*(0x1d2) == 1) {
            if (*(0x1d3) == 0) {
                goto label_1;
            }
        }
        if (*(0x1d2) == 9) {
label_1:
            edx += 8;
        } else {
            eax = fcn_00017535 ();
            edx -= eax;
        }
        *(ebx) = edx;
        edx += 0x3c;
    }
    esi = *(0x7a8);
    if (edx < esi) {
        edx = esi;
        dl &= 0xfe;
    }
    *(ebx) = edx;
    edx += 0xfff;
    if (edx < *(ebx)) {
        goto label_0;
    }
    dl = 0;
    dh &= 0xf0;
    *(ebx) = edx;
    al = (edx != 0) ? 1 : 0;
    eax &= 0xff;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x17584 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00017584 (void) {
    ebx = *(esp);
    ecx = *(esp);
    ebx >>= 0x10;
    fcn_0001736e ();
    ah = 5;
    al = 1;
    eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
    eax -= eax;
    eax++;
    if (eax != 0) {
        ax = bx;
        eax <<= 0x10;
        ax = cx;
        *(eax) = di;
        *((eax + 2)) = si;
    }
    if (eax != 0) {
        ebx = *(esp);
        edx = eax + 8;
        ebx -= 8;
        *(edx) = ebx;
        *((eax + 4)) = 0;
        eax = edx;
    } else {
        if ((*(0x118e) & 0xfff0) != 0) {
            *(0x118c) = 0xfffff;
        }
        if (*(esp) <= section.obj.1.page.0) {
            ebx = *(0x118c);
            ebx >>= 4;
            bl |= 1;
            ah = 0x48;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            eax = rotate_left32 (eax, 1);
            eax = rotate_right32 (eax, 1);
            edx = eax;
            if (eax >= 0) {
                ebx = *(esp);
                ebx >>= 4;
                ah = 0x48;
                eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
                eax = rotate_left32 (eax, 1);
                eax = rotate_right32 (eax, 1);
                esi = eax;
                ebx = eax;
                eax = edx;
                es = eax;
                ah = 0x49;
                eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
                eax = rotate_left32 (eax, 1);
                eax = rotate_right32 (eax, 1);
                if (esi < 0) {
                    goto label_0;
                }
                ah = 0;
                al = 6;
                eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
                eax = ecx;
                eax <<= 0x10;
                ax = dx;
                eax += 8;
                edx = *(esp);
                *((eax - 4)) = esi;
                edx -= 8;
                *(eax) = edx;
            }
        } else {
label_0:
            eax = 0;
        }
    }
}
/* r2dec pseudo code output */
/* synth @ 0x17655 */
#include <stdint.h>
 
int32_t fcn_00017655 (void) {
    while (*(0x1a4) == 0xfffffffe) {
label_0:
        eax = 0;
        void (*0x1764c)() ();
    }
    eax = esp;
    eax = fcn_0001784c ();
    if (eax == 0) {
        void (*0x1764c)() ();
    }
    if (*(0x1d2) == 1) {
        eax = *(esp);
        eax = fcn_00017584 ();
        edx = eax;
        if (eax == 0) {
            goto label_1;
        }
        eax = *(eax);
        *(esp) = eax;
    } else {
        ebx = *(esp);
        eax = 0x80004800;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        ebx -= ebx;
        ebx = ~ebx;
        eax &= ebx;
        ecx = *(esp);
        ecx -= 4;
        edx = eax;
        *(esp) = ecx;
    }
label_1:
    if (edx == 0) {
        goto label_0;
    }
    eax = *(esp);
    esi = *(esp);
    eax -= 4;
    if (eax > esi) {
        goto label_0;
    }
    *(esp) = eax;
    if (eax < 0x38) {
        goto label_0;
    }
    *(edx) = eax;
    eax = edx;
    eax = fcn_000174c1 ();
    ebx = eax;
    eax = *(eax);
    *(esp) = eax;
    al |= 1;
    *(ebx) = eax;
    edi = *((edx + 0x18));
    *((edx + 0x14)) = 0;
    edi++;
    eax = ebx + 4;
    *((edx + 0x18)) = edi;
    fcn_00011c83 ();
    eax = 1;
    return void (*0x1764c)() ();
}
/* r2dec pseudo code output */
/* synth @ 0x17535 */
#include <stdint.h>
 
int32_t fcn_00017535 (void) {
    edx = *(0x5f8);
    if (edx != 0) {
        edx = *((edx + 0x24));
        eax = *(edx);
        eax += edx;
        ebx = eax + 4;
        ah = *(0x1d2);
        if (ah >= 2) {
            if (ah > 8) {
                goto label_0;
            }
            if (*(0x1d4) != 0) {
                goto label_0;
            }
            eax = 0;
            ax = ds;
            __asm ("lsl eax, eax");
            eax++;
            *(0x1a4) = eax;
        }
label_0:
        if (ebx != *(0x1a4)) {
            goto label_1;
        }
        eax = *(edx);
        ebx = edx;
        return eax;
    }
label_1:
    eax = 0;
    ebx = edx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x17907 */
#include <stdint.h>
 
int32_t fcn_00017907 (void) {
    ecx |= ecx;
    if (ecx == 0) {
        goto label_0;
    }
    do {
        if ((al & 0x1f) == 0) {
            goto label_1;
        }
        *(eax) = edx;
        eax = eax + 4;
        ecx--;
    } while (ecx != 0);
label_1:
    ecx >>= 2;
    if (ecx == 0) {
        goto label_2;
    }
    ecx--;
    if (ecx == 0) {
        goto label_3;
    }
    do {
        *(eax) = edx;
        *((eax + 4)) = edx;
        ecx--;
        *((eax + 8)) = edx;
        *((eax + 0xc)) = edx;
        if (ecx == 0) {
            goto label_4;
        }
        *((eax + 0x10)) = edx;
        *((eax + 0x14)) = edx;
        ecx--;
        *((eax + 0x18)) = edx;
        *((eax + 0x1c)) = edx;
        eax = eax + 0x20;
    } while (ecx != 0);
    eax = eax - 0x10;
label_4:
    eax = eax + 0x10;
label_3:
    *(eax) = edx;
    *((eax + 4)) = edx;
    *((eax + 8)) = edx;
    *((eax + 0xc)) = edx;
    eax = eax + 0x10;
label_2:
    ecx &= 3;
    if (ecx != 0) {
        *(eax) = edx;
        eax = eax + 4;
        ecx--;
        if (ecx == 0) {
            goto label_0;
        }
        *(eax) = edx;
        eax = eax + 4;
        ecx--;
        if (ecx == 0) {
            goto label_0;
        }
        *(eax) = edx;
        eax = eax + 4;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x184a3 */
#include <stdint.h>
 
int32_t fcn_000184a3 (void) {
    int32_t var_4h;
    ebx = eax;
    ecx = edx;
    edx = eax;
    eax = esp;
    fcn_000187c0 ();
    eax = ebx;
    dl = 0;
    fcn_000187f1 ();
    *((esp + eax)) = dl;
    eax = esp + 4;
    edx = ecx;
    fcn_000187c0 ();
    eax = ecx;
    dh = 0;
    fcn_000187f1 ();
    *((esp + eax + 4)) = dh;
    eax = esp;
    fcn_0001881c ();
    eax = esp + 4;
    edx = esp + 4;
    fcn_0001881c ();
    eax = esp;
    fcn_0001886b ();
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18528 */
#include <stdint.h>
 
void fcn_00018528 (void) {
    if (? < ?) {
        eax &= 0xffff;
        fcn_00013013 ();
    } else {
        eax -= eax;
    }
}
/* r2dec pseudo code output */
/* synth @ 0x18657 */
#include <stdint.h>
 
int32_t fcn_00018657 (void) {
    ebx = eax;
    eax <<= 2;
    ecx = ebx - 1;
    edx = *((eax + 0x7cc));
    if (ecx > 0xb) {
        void (*0x18703)() ();
    }
    fs = gs;
    es = gs;
    esi = gs;
    edx = gs;
    ecx = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1870a */
#include <stdint.h>
 
int32_t fcn_0001870a (int32_t arg_28h, int32_t arg_2ch) {
    ecx = eax;
    eax = edx;
    tmp_0 = ebp + 0x28;
    ebp + 0x28 = ecx;
    ecx = tmp_0;
    tmp_1 = ebp + 0x2c;
    ebp + 0x2c = eax;
    eax = tmp_1;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* synth @ 0x14332 */
#include <stdint.h>
 
int8_t fcn_00014332 (void) {
    al = 1;
    ah = 0x81;
    fcn_00014346 ();
    return al;
}
/* r2dec pseudo code output */
/* synth @ 0x14346 */
#include <stdint.h>
 
uint32_t fcn_00014346 (int32_t arg_4h) {
    *((ds:ebp + 4)) |= al;
    if ((*(ds:ebp) & al) != 0) {
        goto label_0;
    }
    cx = ss;
    es = ss;
    esi = ebp;
    edi = esp;
    ecx = 0x1b;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    eax = (int32_t) ah;
    uint32_t (*0x1dd)() ();
    cx = ds;
    es = ds;
    cx = ss;
    ds = ss;
    edi = ebp;
    esi = esp;
    ecx = 0x1b;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1433c */
#include <stdint.h>
 
int8_t fcn_0001433c (void) {
    al = 8;
    ah = 0x84;
    fcn_00014346 ();
    return al;
}
/* r2dec pseudo code output */
/* synth @ 0x15bde */
#include <stdint.h>
 
int32_t fcn_00015bde (void) {
    si = *((edx + 8));
    ecx = *((edx + 4));
    ebx = *(edx);
    esi <<= 0x10;
    si = *((eax + 8));
    edx = *((eax + 4));
    eax = *(eax);
    eax = fcn_00015c7e ();
    *(ebx) = eax;
    *((ebx + 4)) = edx;
    *((ebx + 8)) = si;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x15c7e */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00015c7e (void) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    do {
label_0:
        si--;
        esi += section.obj.1.page.0;
        if (esi >= 0) {
            if (esi overflow 0) {
                goto label_2;
            }
            if (esi < 0) {
                eax |= eax;
                if (eax == 0) {
                }
                if (edx != 0x80000000) {
                    goto label_3;
                }
                si ^= 0x8000;
            }
label_3:
            return eax;
        }
label_2:
        esi -= section.obj.1.page.0;
        eax |= eax;
        if (eax == 0) {
            ebx |= ebx;
            if (ebx != 0) {
                goto label_4;
            }
            if (edx != 0x80000000) {
                goto label_4;
            }
            if (ecx != edx) {
                goto label_4;
            }
            edx >>= 1;
            si = 0xffff;
            return eax;
        }
label_4:
        if (edx == ecx) {
        }
        if (eax <= ebx) {
            edx = ecx;
            eax = ebx;
            esi >>= 0x10;
        }
        return eax;
label_1:
        esi -= section.obj.1.page.0;
        ebx |= ebx;
        if (ebx == 0) {
            if (ecx != 0x80000000) {
                goto label_5;
            }
            eax = esi;
            eax <<= 0x10;
            esi ^= eax;
            esi &= ecx;
            ecx -= ecx;
        }
label_5:
        edx = ecx;
        eax = ebx;
        esi >>= 0x10;
        return eax;
        si++;
    } while (si < 0);
    if (si overflow 0) {
        goto label_0;
    }
    esi += 0xffff;
    if (esi < 0) {
        goto label_1;
    }
    if (esi overflow 0) {
        goto label_1;
    }
    esi -= section.obj.1.page.0;
    ecx |= ecx;
    if (ecx == 0) {
        ebx |= ebx;
        if (ebx != 0) {
            goto label_6;
        }
        if ((esi & 0x7fff0000) != 0) {
            goto label_6;
        }
        eax |= eax;
        if (eax == 0) {
            edx |= edx;
            if (edx == 0) {
                eax = esi;
                ax += ax;
                if (ax != 0) {
                    goto label_7;
                }
                eax = fcn_00014332 ();
                edx = 0xc0000000;
                eax -= eax;
                si = 0xffff;
            }
        } else {
label_7:
            eax = fcn_00014328 ();
            edx = 0x80000000;
            eax -= eax;
            si |= 0x7fff;
        }
        return eax;
    }
label_6:
    eax |= eax;
    if (eax == 0) {
        edx |= edx;
        if (edx != 0) {
            goto label_8;
        }
        si += si;
        if (si == 0) {
            return eax;
        }
        si = rotate_right16 (si, 1);
    }
label_8:
    tmp_0 = esi;
    esi = ecx;
    ecx = tmp_0;
    edi = ecx;
    edi = rotate_left32 (edi, 0x10);
    edi >>= 0x10;
    ecx >>= 0x10;
    edi &= 0x80007fff;
    ecx &= 0x80007fff;
    edi = rotate_left32 (edi, 0x10);
    ecx = rotate_left32 (ecx, 0x10);
    di += cx;
    edi = rotate_left32 (edi, 0x10);
    ecx = rotate_left32 (ecx, 0x10);
    di |= di;
    if (di != 0) {
        goto label_9;
    }
    do {
        eax += eax;
        edx += edx;
        di--;
        edx |= edx;
    } while (edx >= 0);
label_9:
    cx |= cx;
    if (cx != 0) {
        goto label_10;
    }
    do {
        ebx += ebx;
        esi += esi;
        cx--;
        esi |= esi;
    } while (esi >= 0);
label_10:
    di -= cx;
    di += 0x3fff;
    if (di >= 0) {
        if (di < 0x7fff) {
            goto label_11;
        }
        edi = ecx;
        di = 0x7fff;
        edx = 0x80000000;
        eax -= eax;
        goto label_12;
    }
label_11:
    if (di < 0xffc0) {
        eax -= eax;
        edx -= edx;
        edi -= edi;
        goto label_12;
    }
    ecx = esi;
    edi = edx;
    esi = eax;
    eax -= eax;
    if (ecx <= edi) {
        edx -= ecx;
        eax++;
    }
    eax = esi;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    tmp_1 = eax;
    eax = ebx;
    ebx = tmp_1;
    edx:eax = eax * ebx;
    tmp_2 = eax;
    eax = ecx;
    ecx = tmp_2;
    tmp_3 = edx;
    edx = ebx;
    ebx = tmp_3;
    edx:eax = eax * edx;
    eax += ebx;
    edx += 0;
    ebx = *((ebp - 0x10));
    if ((*((ebp - 0x14)) & 1) != 0) {
        eax += ebx;
        edx += *((ebp - 0xc));
    }
    ecx = -ecx;
    esi -= eax;
    edi -= edx;
    if (edi == 0) {
        goto label_13;
    }
    do {
        *((ebp - 0x18))--;
        ecx += ebx;
        esi += *((ebp - 0xc));
        edi += 0;
    } while (edi != 0);
label_13:
    edi = esi;
    esi = ecx;
    ecx = *((ebp - 0xc));
    if (ecx <= edi) {
        edi -= ecx;
        *((ebp - 0x18))++;
        *((ebp - 0x14)) += 0;
    }
    edx = edi;
    eax = esi;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    eax |= eax;
    if (eax == 0) {
        goto label_14;
    }
    tmp_4 = eax;
    eax = ebx;
    ebx = tmp_4;
    edx:eax = eax * ebx;
    tmp_5 = eax;
    eax = ecx;
    ecx = tmp_5;
    tmp_6 = edx;
    edx = ebx;
    ebx = tmp_6;
    edx:eax = eax * edx;
    eax += ebx;
    edx += 0;
    ecx = -ecx;
    esi -= eax;
    edi -= edx;
    if (edi == 0) {
        goto label_14;
    }
    do {
        *((ebp - 0x1c))--;
        ecx += *((ebp - 0x10));
        esi += *((ebp - 0xc));
        edi += 0;
    } while (edi != 0);
label_14:
    edx = eax;
    ebx = eax;
    di--;
    ebx >>= 1;
    if (ebx < 0) {
        edx = rotate_right32 (edx, 1);
        eax = rotate_right32 (eax, 1);
        edi++;
    }
    di |= di;
    if (di <= 0) {
        if (di == 0) {
            cl = 1;
        } else {
            di = -di;
            cx = di;
        }
        ebx -= ebx;
        __asm ("shrd eax, edx, cl");
        __asm ("shrd edx, ebx, cl");
        di -= di;
    }
label_12:
    edi += edi;
    di = rotate_right16 (di, 1);
    esi = edi;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x165f4 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_000165f4 (void) {
    edi = eax;
    ch = 0;
    cl = *((edi + 9));
    *((edi + 9)) &= 0x7f;
    if (*((edi + 8)) == 0x3fff) {
        if (*((edi + 4)) != 0x80000000) {
            goto label_0;
        }
        if (*(edi) != 0) {
            goto label_0;
        }
        *(edi) = 0x2168c235;
        *((edi + 4)) = 0xc90fdaa2;
        ax = 0x3ffe;
        cl &= 0x80;
        ah |= cl;
        *((edi + 8)) = ax;
        esi = ecx;
        edi = ecx;
        return ax;
    }
label_0:
    if (*((edi + 8)) >= 0x3fff) {
        si = *((edi + 8));
        ecx = *((edi + 4));
        ebx = *(edi);
        esi <<= 0x10;
        si = 0x3fff;
        edx = 0x80000000;
        eax = 0;
        eax = fcn_00015c7e ();
        *(edi) = eax;
        *((edi + 4)) = edx;
        *((edi + 8)) = si;
        ch = 2;
    }
    ax = *((edi + 8));
    if (ax == 0x3ffd) {
        eax = *((edi + 4));
        if (eax != 0x8930a2f4) {
            goto label_1;
        }
        eax = *(edi);
    }
    if (eax > 0xf66ab09b) {
label_1:
        ebx = 0xc265539e;
        ecx = 0xddb3d742;
        esi = 0x3fff0000;
        eax = *(edi);
        edx = *((edi + 4));
        si = *((edi + 8));
        eax = fcn_000159b3 ();
        ebx = 0xc265539e;
        ecx = 0xddb3d742;
        esi = 0x3fff0000;
        eax = *(edi);
        edx = *((edi + 4));
        si = *((edi + 8));
        fcn_00015eff ();
        ebx -= ebx;
        ecx = 0x80000000;
        esi = rotate_left32 (esi, 0x10);
        si = 0xbfff;
        esi = rotate_left32 (esi, 0x10);
        fcn_000159b3 ();
        ebx <<= 0x10;
        bx = si;
        esi = ebx;
        eax = fcn_00015c7e ();
        *(edi) = eax;
        *((edi + 4)) = edx;
        *((edi + 8)) = si;
        ch |= 1;
    }
    eax = edi;
    edx = 0x64e4;
    ebx = 8;
    fcn_00017170 ();
    ch >>= 1;
    if (ch < 0) {
        eax = edi;
        ebx = edi;
        fcn_000158fe (0x6b9b2c23, 0x860a91c1, 0x3ffe);
    }
    ch >>= 1;
    if (ch < 0) {
        eax = edi;
        ebx = edi;
        fcn_000158fe (0x2168c235, 0xc90fdaa2, 0xbfff);
        *((ebx + 9)) ^= 0x80;
    }
    if (cl < 0) {
        *((edi + 9)) ^= 0x80;
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x17170 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_00017170 (void) {
    edi = eax;
    eax = *(edi);
    edx = *((edi + 4));
    si = *((edi + 8));
    esi <<= 0x10;
    si = *((edi + 8));
    ebx = eax;
    ecx = edx;
    fcn_00015eff ();
    fcn_0001711e ();
    esi = rotate_left32 (esi, 0x10);
    ebx = *(edi);
    ecx = *((edi + 4));
    si = *((edi + 8));
    esi = rotate_left32 (esi, 0x10);
    eax = fcn_00015eff ();
    *(edi) = eax;
    *((edi + 4)) = edx;
    *((edi + 8)) = si;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x167bd */
#include <stdint.h>
 
int32_t fcn_000167bd (void) {
    esi &= 0x7fff;
    edi &= 0x7fff;
    esi -= edi;
    if (esi < 0) {
        goto label_2;
    }
    edi -= edi;
label_0:
    if (ecx == edx) {
        if (ebx == eax) {
            goto label_3;
        }
    }
    while (edx < 0) {
label_3:
        eax -= ebx;
        edx -= ecx;
        __asm ("stc");
label_1:
        edi += edi;
        esi--;
        if (esi < 0) {
            goto label_4;
        }
        eax += eax;
        edx += edx;
    }
    edx |= edx;
    if (edx < 0) {
        goto label_0;
    }
    goto label_1;
label_4:
    esi -= esi;
    eax |= eax;
    if (eax != 0) {
        goto label_5;
    }
    edx |= edx;
    if (edx != 0) {
        goto label_5;
    }
    goto label_6;
    do {
label_5:
        edx |= edx;
        if (edx < 0) {
            goto label_7;
        }
        eax += eax;
        edx += edx;
        esi--;
    } while (1);
label_7:
    ecx = edi;
    ecx &= 0x7fff;
    esi += ecx;
label_6:
    goto label_8;
label_2:
    esi += edi;
    edi -= edi;
label_8:
    ebx = ecx;
    ebx &= 0x8000;
    esi |= ebx;
    edx |= edx;
    if (edx == 0) {
        esi -= esi;
    }
    bx ^= cx;
    if (esi < 0) {
        edi = -edi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x16982 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void fcn_00016982 (void) {
    int32_t var_4h;
    int32_t var_8h;
    ecx -= ecx;
    cx = *((eax + 8));
    cx |= cx;
    if (cx >= 0) {
    }
    edi = eax;
    edx = 0x3ffe;
    ecx -= 0x3ffe;
    *((edi + 8)) = dx;
    eax = *(edi);
    edx = *((edi + 4));
    esi = 0xbffe3ffe;
    ecx = 0x80000000;
    ebx -= ebx;
    fcn_000159b3 ();
    if (*((edi + 8)) == 0x3ffe) {
        if (*((edi + 4)) != 0xb504f333) {
            goto label_0;
        }
    }
    if (*(edi) > 0xf9de6484) {
label_0:
        esi &= 0xffff;
        esi |= 0xbffe0000;
        ecx = 0x80000000;
        ebx -= ebx;
        eax = fcn_000159b3 ();
    } else {
        *(edi) = eax;
        *((edi + 4)) = edx;
        *((edi + 8)) = si;
    }
    eax = *(edi);
    edx = *((edi + 4));
    si = *((edi + 8));
    si--;
    esi &= 0xffff;
    esi |= 0x3ffe0000;
    ecx = 0x80000000;
    ebx -= ebx;
    eax = fcn_000159b3 ();
    esi <<= 0x10;
    ecx = edx;
    ebx = eax;
    si = ax;
    eax = fcn_00015c7e ();
    ecx = esi;
    esi <<= 0x10;
    si = cx;
    ecx = edx;
    ebx = eax;
    eax = fcn_00015eff ();
    *(edi) = eax;
    *((edi + 4)) = edx;
    *((edi + 8)) = si;
    ebx = 3;
    ecx = 0x68fe;
    eax = fcn_0001711e ();
    eax = *(edi);
    edx = *((edi + 4));
    si = *((edi + 8));
    ecx = 0x68e0;
    ebx = 2;
    fcn_0001711e ();
    esi = rotate_left32 (esi, 0x10);
    si = cx;
    esi = rotate_left32 (esi, 0x10);
    fcn_00015c7e ();
    ebx = *(edi);
    ecx = *((edi + 4));
    esi = rotate_left32 (esi, 0x10);
    si = *((edi + 8));
    esi = rotate_left32 (esi, 0x10);
    fcn_00015eff ();
    esi = rotate_left32 (esi, 0x10);
    si = *(esp);
    esi = rotate_left32 (esi, 0x10);
    ecx = *((esp + 4));
    ebx = *((esp + 8));
    fcn_00015eff ();
    esi = rotate_left32 (esi, 0x10);
    si = cx;
    esi = rotate_left32 (esi, 0x10);
    eax = fcn_000159b3 ();
    ecx |= ecx;
    if (ecx != 0) {
        edx = edi;
        eax = ecx;
        fcn_000160df ();
        eax = *(edi);
        edx = *((edi + 4));
        si = *((edi + 8));
        esi &= 0xffff;
        esi |= 0xbff20000;
        ecx = 0xde8082e3;
        ebx = 0x865435c;
        fcn_00015eff ();
        esi = rotate_left32 (esi, 0x10);
        si = cx;
        esi = rotate_left32 (esi, 0x10);
        eax = fcn_000159b3 ();
        eax = *(edi);
        edx = *((edi + 4));
        si = *((edi + 8));
        esi &= 0xffff;
        esi |= 0x3ffe0000;
        ecx = 0xb1800000;
        ebx -= ebx;
        fcn_00015eff ();
        esi = rotate_left32 (esi, 0x10);
        si = cx;
        esi = rotate_left32 (esi, 0x10);
        eax = fcn_000159b3 ();
    }
    *(edi) = eax;
    *((edi + 4)) = edx;
    *((edi + 8)) = si;
}
/* r2dec pseudo code output */
/* synth @ 0x15e39 */
#include <stdint.h>
 
int32_t fcn_00015e39 (void) {
    si = *((edx + 8));
    ecx = *((edx + 4));
    ebx = *(edx);
    esi <<= 0x10;
    si = *((eax + 8));
    edx = *((eax + 4));
    eax = *(eax);
    eax = fcn_00015eff ();
    *(ebx) = eax;
    *((ebx + 4)) = edx;
    *((ebx + 8)) = si;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x160df */
#include <stdint.h>
 
int32_t fcn_000160df (void) {
    ebx = edx;
    eax |= eax;
    if (eax < 0) {
        eax = -eax;
        edx = 0xbfff;
        void (*0x160f8)() ();
    }
}
/* r2dec pseudo code output */
/* synth @ 0x16c1a */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void fcn_00016c1a (void) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    edi = eax;
    ecx -= ecx;
    cx = *((eax + 8));
    cx &= 0x7fff;
    cx -= 0x3ffe;
    if (cx >= 0x20) {
    }
    si = *((eax + 8));
    di = 0x3ffe;
    ecx = 0xc90fdaa2;
    ebx = 0x2168c235;
    edx = *((eax + 4));
    eax = *(eax);
    eax = fcn_000167bd ();
    *(ecx) = eax;
    *((ecx + 4)) = edx;
    *((ecx + 8)) = si;
    eax = edi;
    edi = ecx;
    if ((*((edi + 9)) & 0x80) != 0) {
        ebx = edi;
        eax = edi;
        fcn_000158fe (0x2168c235, 0xc90fdaa2, 0x3ffe);
        eax--;
    }
    ebx = esi;
    ah = bl;
    bl &= 2;
    al += bl;
    al &= 7;
    if ((al & 1) != 0) {
        eax = edi;
        ebx = edi;
        fcn_000158fe (0x2168c235, 0xc90fdaa2, 0xbffe);
        *((ebx + 9)) ^= 0x80;
    }
    ecx -= ecx;
    cx = *((edi + 8));
    cx -= 0x3ffe;
    if (cx < 0xffe0) {
        *((ebp - 0xc)) = 0;
        *((ebp - 8)) = 0x80000000;
        *((ebp - 4)) = 0x3fff;
    } else {
        cx |= cx;
        if (cx >= 0) {
            cx = 0;
        }
        cx = -cx;
        if (cx > 8) {
            cx = 8;
        }
        cx = *(cs:);
        eax = *((ebp - 0x14));
        al++;
        al &= 2;
        if (al == 0) {
            if (ah != 1) {
            }
        } else {
            eax = *(edi);
            edx = *((edi + 4));
            si = *((edi + 8));
            esi <<= 0x10;
            si = *((edi + 8));
            ebx = eax;
            ecx = edx;
            fcn_00015eff ();
            ecx = *((ebp - 0x18));
            ebx = 8;
            ebx -= ecx;
            ecx *= 5;
            ecx = ecx*2 + 0x6bae;
            eax = fcn_0001711e ();
            *((ebp - 0xc)) = eax;
            *((ebp - 8)) = edx;
            *((ebp - 4)) = si;
        }
        if (al != 0) {
            if (ah != 1) {
            }
        } else {
            eax = edi;
            ecx = *((ebp - 0x18));
            ebx = 8;
            ebx -= ecx;
            ecx *= 5;
            ecx += ecx;
            edx = 0x6b54;
            edx += ecx;
            fcn_00017170 ();
        }
    }
    eax = *((ebp - 0x14));
    al++;
    al &= 2;
    if (al != 0) {
        eax = *((ebp - 0xc));
        edx = *((ebp - 8));
        si = *((ebp - 4));
    } else {
        eax = *(edi);
        edx = *((edi + 4));
        si = *((edi + 8));
    }
    ecx = *((ebp - 0x14));
    if ((cl & 4) != 0) {
        si ^= 0x8000;
    }
    if (ch == 1) {
        esi = rotate_left32 (esi, 0x10);
        cl += 2;
        bl = cl;
        bl++;
        bl &= 2;
        if (bl != 0) {
            cl &= 4;
            ebx = *((ebp - 0xc));
            ecx = *((ebp - 8));
            si = *((ebp - 4));
        } else {
            cl &= 4;
            ebx = *(edi);
            ecx = *((edi + 4));
            si = *((edi + 8));
        }
        if (cl != 0) {
            esi ^= 0x8000;
        }
        esi = rotate_left32 (esi, 0x10);
        ebx |= ebx;
        if (ebx == 0) {
            ecx |= ecx;
            if (ecx == 0) {
                if ((esi & 0x7fff0000) != 0) {
                    goto label_0;
                }
                eax -= eax;
                edx = 0x80000000;
                si |= 0x7fff;
            }
        } else {
label_0:
            eax = fcn_00015c7e ();
        }
    }
    *(edi) = eax;
    *((edi + 4)) = edx;
    *((edi + 8)) = si;
}
/* r2dec pseudo code output */
/* synth @ 0x16e5e */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_00016e5e (void) {
    int32_t var_ch;
    int32_t var_8h_2;
    int32_t var_4h_2;
    int32_t var_4h;
    int32_t var_8h;
    edi = eax;
    esi -= esi;
    cx = *((edi + 8));
    *((edi + 9)) &= 0x7f;
    if (*((edi + 8)) == 0) {
        if (*((edi + 4)) != 0) {
            goto label_0;
        }
    }
    if (*(edi) == 0) {
label_0:
        goto label_1;
    }
    cx |= cx;
    if (cx < 0) {
        esi--;
        eax = edi;
        ebx = edi;
        fcn_000158fe (0, 0x80000000, 0xbfff);
        *((ebx + 9)) ^= 0x80;
    }
    bx = *((edi + 8));
    bx += 4;
    ecx -= ecx;
    edx = *((edi + 4));
    eax = *(edi);
    do {
        if (bx < 0x3fff) {
            goto label_2;
        }
        eax += eax;
        edx += edx;
        ecx += ecx;
        bx--;
    } while (1);
label_2:
    edx |= edx;
    if (edx == 0) {
        eax |= eax;
    }
    if (eax != 0) {
        goto label_3;
    }
    ebx -= ebx;
    goto label_4;
    do {
label_3:
        edx |= edx;
        if (edx < 0) {
            goto label_5;
        }
        eax += eax;
        edx += edx;
        bx--;
    } while (1);
label_5:
    bx -= 4;
label_4:
    *(edi) = eax;
    *((edi + 4)) = edx;
    *((edi + 8)) = bx;
    goto label_6;
label_1:
    ecx -= ecx;
label_6:
    eax = *(edi);
    edx = *((edi + 4));
    si = *((edi + 8));
    esi <<= 0x10;
    si = *((edi + 8));
    ebx = eax;
    ecx = edx;
    eax = fcn_00015eff ();
    ecx = 0xa6829a79;
    ebx = 0x1bf21f8c;
    esi &= 0xffff;
    esi |= 0x40030000;
    eax = fcn_000159b3 ();
    tmp_0 = ebp + 8;
    ebp + 8 = eax;
    eax = tmp_0;
    tmp_1 = ebp + 4;
    ebp + 4 = edx;
    edx = tmp_1;
    tmp_2 = ebp;
    ebp = esi;
    esi = tmp_2;
    ecx = 0xec96f0d6;
    ebx = 0x9d7bfdb;
    esi &= 0xffff;
    esi |= 0x3ffa0000;
    fcn_00015eff ();
    ecx = 0xe6d5051a;
    ebx = 0xe536e187;
    esi &= 0xffff;
    esi |= 0x40010000;
    fcn_000159b3 ();
    ebx = *(edi);
    ecx = *((edi + 4));
    esi = rotate_left32 (esi, 0x10);
    si = *((edi + 8));
    esi = rotate_left32 (esi, 0x10);
    eax = fcn_00015eff ();
    esi ^= 0x8000;
    esi = rotate_left32 (esi, 0x10);
    si = *(ebp);
    esi = rotate_left32 (esi, 0x10);
    ebx = *((ebp + 8));
    ecx = *((ebp + 4));
    eax = fcn_000159b3 ();
    tmp_3 = ebp - 4;
    ebp - 4 = eax;
    eax = tmp_3;
    tmp_4 = ebp - 8;
    ebp - 8 = edx;
    edx = tmp_4;
    tmp_5 = ebp - 0xc;
    ebp - 0xc = esi;
    esi = tmp_5;
    esi = rotate_left32 (esi, 0x10);
    si = *(ebp);
    esi = rotate_left32 (esi, 0x10);
    ebx = *((ebp + 8));
    ecx = *((ebp + 4));
    fcn_000159b3 ();
    esi = rotate_left32 (esi, 0x10);
    si = *((ebp - 0xc));
    esi = rotate_left32 (esi, 0x10);
    eax = fcn_00015c7e ();
    *(edi) = eax;
    *((edi + 4)) = edx;
    *((edi + 8)) = si;
    esi = 0x6e36;
    do {
        ecx |= ecx;
        if (ecx == 0) {
            goto label_7;
        }
        ecx >>= 1;
        if (ecx < 0) {
            ax = *((edi + 8));
            ecx = *((edi + 4));
            ebx = *(edi);
            eax <<= 0x10;
            ax = *(cs:);
            edx = *(cs:);
            esi = *(cs:);
            tmp_6 = eax;
            eax = esi;
            esi = tmp_6;
            fcn_00015eff ();
            /* [07] -r-x section size 4096 named obj.1.page.7 */
            *((ecx + 0x4578907))--;
            *((edi + 8)) = si;
        }
        esi = esi + 0xa;
    } while (1);
label_7:
    *((edi + 8)) += si;
    eax = edi;
    ebx = edi;
    fcn_000158fe (0, 0x80000000, 0xbfff);
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1693f */
#include <stdint.h>
 
void fcn_0001693f (void) {
    fcn_00016982 ();
    ebx = edx;
    fcn_00015e39 ();
    si = *((edi + 8));
    ecx = *((edi + 4));
    ebx = *(edi);
    esi <<= 0x10;
    si = 0x3fff;
    edx = 0xb8aa3b29;
    eax = 0x5c17f0bd;
    eax = fcn_00015eff ();
    *(edi) = eax;
    *((edi + 4)) = edx;
    *((edi + 8)) = si;
}
/* r2dec pseudo code output */
/* synth @ 0x16e28 */
#include <stdint.h>
 
void fcn_00016e28 (void) {
    esi = 1;
    fcn_00016c1a ();
}
/* r2dec pseudo code output */
/* synth @ 0x16926 */
#include <stdint.h>
 
void fcn_00016926 (void) {
    ebx = eax;
    fcn_000158fe (0, 0x80000000, 0x3fff);
}
/* r2dec pseudo code output */
/* synth @ 0x17032 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00017032 (void) {
    cx = *((eax + 8));
    edx = *((eax + 4));
    ebx = *(eax);
    ebx |= ebx;
    if (ebx != 0) {
        goto label_2;
    }
    edx |= edx;
    if (edx != 0) {
        goto label_3;
    }
    cx += cx;
    if (cx == 0) {
        goto label_4;
    }
label_1:
    *((eax + 8)) = 0xffff;
    *((eax + 4)) = 0;
    *(eax) = 0;
    do {
label_0:
        *((eax + 7)) |= 0xc0;
        goto label_4;
label_3:
        if (cx == 0x7fff) {
            goto label_4;
        }
label_2:
        edx = ecx;
        dh &= 0x7f;
    } while (dx == 0x7fff);
    cx += cx;
    if (cx < 0) {
        goto label_0;
    }
    cx >>= 1;
    if (cx == 0) {
        goto label_5;
    }
    edx = *((eax + 4));
    edx += edx;
    if (edx >= 0) {
        goto label_1;
    }
label_5:
    edx = *((eax + 4));
    edi -= edi;
    cx -= 0x3fff;
    cx >>= 1;
    if (cx >= 0) {
        edx >>= 1;
        ebx = rotate_right32 (ebx, 1);
        edi = rotate_right32 (edi, 1);
    }
    cx += 0x3fff;
    *((eax + 8)) = cx;
    ecx = edx;
    eax = ebx;
    esi = edx;
    __asm ("stc");
    esi = rotate_right32 (esi, 1);
    edx++;
    if (edx == 0) {
        goto label_6;
    }
    edx--;
    do {
        eax = edx:eax / esi;
        edx = edx:eax % esi;
        esi--;
        if (esi <= eax) {
            goto label_7;
        }
        esi++;
        esi += eax;
        esi = rotate_right32 (esi, 1);
        edx = ecx;
        eax = ebx;
    } while (1);
label_7:
    esi++;
    ecx = eax;
    eax = edi;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    esi += ecx;
    goto label_8;
label_6:
    if (eax != esi) {
        tmp_0 = eax;
        eax = edx;
        edx = tmp_0;
        eax = edi;
        eax = edx:eax / esi;
        edx = edx:eax % esi;
label_8:
        edx -= edx;
        __asm ("stc");
        esi = rotate_right32 (esi, 1);
        eax = rotate_right32 (eax, 1);
        eax += edx;
    }
    edx += esi;
    esi = eax;
    *(esi) = eax;
    *((esi + 4)) = edx;
label_4:
    ebx = eax;
    ecx = eax;
    edx = eax;
    esi = eax;
    edi = eax;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x16e11 */
#include <stdint.h>
 
void fcn_00016e11 (void) {
    esi -= esi;
    fcn_00016c1a ();
}
/* r2dec pseudo code output */
/* synth @ 0x16e1b */
#include <stdint.h>
 
void fcn_00016e1b (void) {
    esi = 2;
    fcn_00016c1a ();
}
/* r2dec pseudo code output */
/* synth @ 0x15b45 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00015b45 (void) {
    si = *((eax + 8));
    si |= 0x8000;
    si++;
    if (si == 0) {
        esi = *((eax + 4));
        esi += esi;
        esi |= *(eax);
        if (esi != 0) {
            goto label_0;
        }
    }
    si = *((edx + 8));
    si |= 0x8000;
    si++;
    if (si == 0) {
        esi = *((edx + 4));
        esi += esi;
        esi |= *(edx);
        if (esi != 0) {
            goto label_0;
        }
    }
    esi = *((eax + 6));
    edi = *((edx + 6));
    edi ^= esi;
    edi = 0;
    if (esi < 0) {
        goto label_1;
    }
    si = *((eax + 8));
    if (si == *((edx + 8))) {
        edi = *((eax + 4));
        if (edi != *((edx + 4))) {
            goto label_2;
        }
        edi = *(eax);
    }
label_2:
    edi = 0;
    if (edi == *(edx)) {
        goto label_3;
    }
    eax = rotate_right32 (eax, 1);
    esi ^= eax;
    do {
        esi += esi;
        edi += edi;
        edi++;
label_3:
        eax = edi;
        edi = esi;
        return eax;
label_0:
        eax = 2;
        edi = esi;
        return eax;
label_1:
        edi |= *(eax);
        edi |= *(edx);
        edi |= *((eax + 4));
        edi |= *((edx + 4));
        ax = *((eax + 8));
        eax <<= 0x10;
        ax = *((edx + 8));
        eax &= 0x7fff7fff;
        eax |= edi;
        edi = 0;
    } while (eax != 0);
    edi = esi;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x158d4 */
#include <stdint.h>
 
int32_t fcn_000158d4 (void) {
    si = *((edx + 8));
    ecx = *((edx + 4));
    ebx = *(edx);
    esi <<= 0x10;
    si = *((eax + 8));
    edx = *((eax + 4));
    eax = *(eax);
    eax = fcn_000159b3 ();
    *(ebx) = eax;
    *((ebx + 4)) = edx;
    *((ebx + 8)) = si;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x158aa */
#include <stdint.h>
 
int32_t fcn_000158aa (void) {
    si = *((edx + 8));
    ecx = *((edx + 4));
    ebx = *(edx);
    esi <<= 0x10;
    si = *((eax + 8));
    edx = *((eax + 4));
    eax = *(eax);
    eax = fcn_0001592e ();
    *(ebx) = eax;
    *((ebx + 4)) = edx;
    *((ebx + 8)) = si;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1592e */
#include <stdint.h>
 
void fcn_0001592e (void) {
    edi = 0x80000000;
    return void (*0x159b6)() ();
}
/* r2dec pseudo code output */
/* synth @ 0x1653e */
#include <stdint.h>
 
int32_t fcn_0001653e (void) {
    edi = eax;
    cx = *((edi + 8));
    cx <<= 1;
    if (cx == 0) {
        if ((*((edx + 9)) & 0x80) != 0) {
            *((ebx + 8)) = 0x4000;
            *((ebx + 4)) = 0xc90fdaa2;
            *(ebx) = 0x2168c235;
        } else {
            *((ebx + 8)) = 0;
            *((ebx + 4)) = 0;
            *(ebx) = 0;
        }
    } else {
        cx = *((edx + 8));
        cx <<= 1;
        if (cx == 0) {
            ax = *((edi + 8));
            ax &= 0x8000;
            ax |= 0x3fff;
            *((ebx + 8)) = ax;
            *((ebx + 4)) = 0xc90fdaa2;
            *(ebx) = 0x2168c235;
        } else {
            ch = *((edi + 9));
            fcn_00015bde ();
            eax = ebx;
            fcn_000165f4 ();
            dl = *((ebx + 9));
            ch |= ch;
            if (ch >= 0) {
                dl |= dl;
                if (dl < 0) {
                    eax = ebx;
                    fcn_000158fe (0x2168c235, 0xc90fdaa2, 0x4000);
                }
            } else {
                dl |= dl;
                if (dl <= 0) {
                    goto label_0;
                }
                eax = ebx;
                fcn_000158fe (0x2168c235, 0xc90fdaa2, 0xc000);
            }
        }
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x16757 */
#include <stdint.h>
 
int32_t fcn_00016757 (void) {
    if (*((eax + 8)) == 0) {
        if (*((eax + 4)) != 0) {
            goto label_0;
        }
        if (*(eax) != 0) {
            goto label_0;
        }
        eax -= eax;
        return eax;
    }
label_0:
    if (*((edx + 8)) == 0) {
        if (*((edx + 4)) != 0) {
            goto label_1;
        }
        if (*(edx) != 0) {
            goto label_1;
        }
        edx -= edx;
        *(eax) = edx;
        *((eax + 4)) = edx;
        *((eax + 8)) = dx;
        eax -= eax;
        return eax;
    }
label_1:
    si = *((eax + 8));
    di = *((edx + 8));
    ecx = *((edx + 4));
    ebx = *(edx);
    edx = *((eax + 4));
    eax = *(eax);
    eax = fcn_000167bd ();
    *(ecx) = eax;
    *((ecx + 4)) = edx;
    *((ecx + 8)) = si;
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x163b1 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_000163b1 (void) {
    edi = eax;
    ebx -= ebx;
    bx = *((edi + 8));
    if (dx != 0x400) {
    }
    if (dx == 0x800) {
        bh |= bh;
        if (bh >= 0) {
            goto label_0;
        }
        dx ^= 0xc00;
    }
label_0:
    if (dx == 0xc00) {
        dx = 0x400;
    }
    bx &= 0x7fff;
    bx -= 0x403f;
    if (bx >= 0) {
        return;
    }
    ecx = *(edi);
    bx += 0x20;
    if (bx >= 0) {
        eax = *(cs:);
        ecx &= eax;
        *(edi) ^= ecx;
        eax++;
        if (dx != 0x400) {
            if (dx == 0) {
                ecx += ecx;
                if (eax > ecx) {
                    goto label_1;
                }
                if (eax != ecx) {
                    goto label_2;
                }
                eax = rotate_left32 (eax, 1);
                if (eax < ecx) {
                } else {
                }
                if ((*(edi) & eax) == 0) {
                    goto label_1;
                }
                eax = rotate_right32 (eax, 1);
            }
label_2:
            ecx |= ecx;
            if (ecx == 0) {
                goto label_1;
            }
            *(edi) += eax;
            *((edi + 4)) += 0;
            if (*((edi + 4)) >= 0) {
                goto label_1;
            }
            *((edi + 4)) = rotate_right32 (*((edi + 4)), 1);
            *((edi + 8))++;
        }
label_1:
        return eax;
    }
    *(edi) = 0;
    esi = *((edi + 4));
    bx += 0x20;
    if (bx >= 0) {
        eax = *(cs:);
        esi &= eax;
        *((edi + 4)) ^= esi;
        eax++;
        if (dx != 0x400) {
            if (dx == 0) {
                ecx = rotate_left32 (ecx, 1);
                esi += esi;
                if (eax > esi) {
                    goto label_3;
                }
                if (eax != esi) {
                    goto label_4;
                }
                ecx |= ecx;
                if (ecx != 0) {
                    goto label_5;
                }
                eax += eax;
                if (eax >= 0) {
                }
                if ((*((edi + 4)) & eax) == 0) {
                    goto label_3;
                }
                eax >>= 1;
            }
label_4:
            ecx |= esi;
            if (ecx == 0) {
                goto label_3;
            }
label_5:
            *((edi + 4)) += eax;
            if (*((edi + 4)) >= 0) {
                goto label_3;
            }
            *((edi + 4)) = rotate_right32 (*((edi + 4)), 1);
            *((edi + 8))++;
        }
label_3:
        edi = esi;
        return eax;
    }
    if (dx != 0x400) {
        if (dx == 0) {
            bx++;
            if (bx != 0) {
                goto label_6;
            }
            if (esi != 0x80000000) {
                goto label_7;
            }
            ecx |= ecx;
            if (ecx == 0) {
                goto label_6;
            }
        }
label_7:
        *((edi + 4)) = 0x80000000;
        *((edi + 8)) |= 0x3fff;
        edi = esi;
        return eax;
    }
label_6:
    eax -= eax;
    *((edi + 4)) = eax;
    *((edi + 8)) = ax;
    edi = esi;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x16070 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00016070 (void) {
    bl = 0x1f;
    bh = *((eax + 9));
    bh >>= 1;
    bh |= bl;
    cx = *((eax + 8));
    cx &= 0x7fff;
    cx -= 0x3ffe;
    if (cx >= 0) {
        if (cx <= 0x20) {
            bl &= 0x3f;
            if (cl > bl) {
                goto label_0;
            }
            ch = bh;
            ebx = *(eax);
            eax = *((eax + 4));
            ebx += ebx;
            ch = rotate_right8 (ch, 1);
            if (cl == 0x20) {
                ch += ch;
            } else {
                ebx -= ebx;
                __asm ("shld ebx, eax, cl");
                eax <<= cl;
                ch += ch;
                eax += eax;
                eax = ebx;
            }
            cl = 0xff;
            cl = rotate_right8 (cl, 1);
            ch &= cl;
            ch += ch;
            eax += 0;
            ch += ch;
            if (ch < 0) {
                eax = -eax;
            }
            ebx = ecx;
            return eax;
        }
label_0:
        eax = 0x80000000;
        ebx = ecx;
        return eax;
    }
    eax -= eax;
    ebx = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x14328 */
#include <stdint.h>
 
int8_t fcn_00014328 (void) {
    al = 4;
    ah = 0x83;
    fcn_00014346 ();
    return al;
}
/* r2dec pseudo code output */
/* synth @ 0x14134 */
#include <stdint.h>
 
int8_t fcn_00014134 (int32_t arg_4h, int32_t arg_6h, int32_t arg_8h, int32_t arg_38h, int32_t arg_3ch, int32_t arg_76h) {
    esi = *((ebp + 0x38));
    ds = *((ebp + 0x3c));
    cx = *((ebp + 4));
    dx = *((ebp + 6));
    al = *(esi);
    if (al <= 0x9b) {
        goto label_2;
    }
    do {
label_0:
        bl = al;
        bl &= 0xf8;
        if (bl != 0xd8) {
            goto label_3;
        }
        ah = *((esi + 1));
        esi += 2;
        al &= 7;
        if (ah >= 0xc0) {
            goto label_4;
        }
        bl = ah;
        bh = ah;
        bh >>= 3;
        ebx &= 0x1807;
        bl |= bh;
        bh = 0;
        al = uint32_t (*cs:ebx*4 + 0x3d98)() ();
        es = cx;
        *((ebp + 0x38)) = esi;
        esi = ebx;
        bl = ah;
        ebx &= 0x38;
        bl |= al;
        fcn_00011060 ();
        ebp = 0x614;
        edi = *((ds:ebp + 0x76));
label_1:
        al = *(esi);
    } while (al > 0x9b);
    if (al == 0x9b) {
label_2:
        goto label_5;
    }
    if (al == 0x26) {
        goto label_6;
    }
    if (al == 0x2e) {
        goto label_7;
    }
    if (al == 0x36) {
        goto label_8;
    }
    if (al == 0x3e) {
        goto label_9;
    }
    if (al == 0x64) {
        goto label_10;
    }
    if (al == 0x65) {
        goto label_11;
    }
    if (al == 0x66) {
        goto label_5;
    }
    if (al != 0x67) {
        goto label_0;
    }
label_5:
    esi++;
    goto label_1;
label_7:
    cx = *((ebp + 0x3c));
    edx = ecx;
    esi++;
    goto label_1;
label_9:
    cx = *((ebp + 4));
    edx = ecx;
    esi++;
    goto label_1;
label_8:
    cx = *((ebp + 6));
    edx = ecx;
    esi++;
    goto label_1;
label_6:
    cx = *((ebp + 8));
    edx = ecx;
    esi++;
    goto label_1;
label_10:
    cx = fs;
    edx = ecx;
    esi++;
    goto label_1;
label_11:
    cx = gs;
    edx = ecx;
    esi++;
    goto label_1;
label_4:
    *((ebp + 0x38)) = esi;
    al = fcn_00011060 ();
    ebp = 0x614;
    dl = ah;
    edx &= 0x38;
    dl |= al;
    edi = *((ds:ebp + 0x76));
    bl = ah;
    ebx &= 7;
    esi = *(cs:);
    esi += ebx;
    esi &= 7;
    esi *= 5;
    esi += esi;
label_3:
    return al;
}
/* r2dec pseudo code output */
/* synth @ 0x162ec */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_000162ec (void) {
    ebx = edx;
    edx -= edx;
    ecx = eax;
    ecx >>= 0x17;
    cx &= 0xff;
    if (cx != 0) {
        eax <<= 8;
        if (cl != 0xff) {
            cx += 0x3f80;
        } else {
            ch = 0xff;
            eax &= 0x7fffffff;
            if (eax == 0) {
                goto label_0;
            }
            eax |= 0x40000000;
        }
label_0:
        ecx += ecx;
        cx = rotate_right16 (cx, 1);
        eax |= 0x80000000;
    }
    *(ebx) = edx;
    *((ebx + 4)) = eax;
    *((ebx + 8)) = cx;
    ecx = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x161a3 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_000161a3 (void) {
    ebx = eax;
    edx = 0xffffff00;
    eax = *((ebx + 4));
    ecx = *((ebx + 4));
    ecx <<= 0x19;
    cx = *((ebx + 8));
    if (ecx < 0) {
        if (ecx == 0) {
            if (*(ebx) != 0) {
                goto label_0;
            }
            edx += edx;
        }
label_0:
        eax += 0x100;
        if (eax >= 0) {
            goto label_1;
        }
        eax = 0x80000000;
        cx++;
    }
label_1:
    eax &= edx;
    ebx = ecx;
    cx &= 0x7fff;
    if (cx != 0) {
        if (cx == 0x7fff) {
            eax += eax;
            eax >>= 8;
            eax |= 0xff000000;
            bx += bx;
            eax = rotate_right32 (eax, 1);
        } else {
            cx += 0xc080;
            if (cx < 0) {
                eax -= eax;
            } else {
                if (cx >= 0xff) {
                    eax = 0xff000000;
                    bx += bx;
                    eax = rotate_right32 (eax, 1);
                } else {
                    eax += eax;
                    __asm ("shrd eax, ecx, 8");
                    bx += bx;
                    eax = rotate_right32 (eax, 1);
                }
            }
        }
    }
    ecx = ebx;
    edx = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x16125 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
void fcn_00016125 (void) {
    ecx = edx;
    __asm ("shld edx, eax, 0xb");
    eax <<= 0xb;
    ecx >>= 0x14;
    cx &= 0x7ff;
    if (cx != 0) {
        if (cx != 0x7ff) {
            cx += 0x3c00;
        } else {
            cx = 0x7fff;
            if ((edx & 0x7fffffff) == 0) {
                eax |= eax;
            }
            if (eax == 0) {
                goto label_0;
            }
            fcn_00014332 ();
            edx |= 0x40000000;
        }
label_0:
        edx |= 0x80000000;
        goto label_1;
    }
    edx |= edx;
    if (edx == 0) {
        eax |= eax;
        if (eax != 0) {
            goto label_2;
        }
        ecx -= ecx;
        goto label_1;
    }
label_2:
    cx = 0x3c01;
    edx |= edx;
    if (edx != 0) {
        goto label_3;
    }
    tmp_0 = eax;
    eax = edx;
    edx = tmp_0;
    cx -= 0x20;
    do {
label_3:
        edx |= edx;
        if (edx < 0) {
            goto label_1;
        }
        eax += eax;
        edx += edx;
        cx--;
    } while (1);
label_1:
    *(ebx) = eax;
    *((ebx + 4)) = edx;
    ecx += ecx;
    cx = rotate_right16 (cx, 1);
    *((ebx + 8)) = cx;
}
/* r2dec pseudo code output */
/* synth @ 0x16222 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
void fcn_00016222 (void) {
    cx = *((eax + 8));
    edx = *((eax + 4));
    eax = *(eax);
    esi = 0xfffff800;
    ebx = eax;
    ebx <<= 0x16;
    if (ebx < 0) {
        if (ebx == 0) {
            esi += esi;
        }
        eax += 0x800;
        edx += 0;
        if (edx >= 0) {
            goto label_0;
        }
        edx = 0x80000000;
        cx++;
    }
label_0:
    eax &= esi;
    ebx = ecx;
    cx &= 0x7fff;
    cx += 0xc400;
    if (cx < 0x7ff) {
        cx |= cx;
        if (cx == 0) {
            __asm ("shrd eax, edx, 0xc");
            edx += edx;
            edx >>= 0xc;
        } else {
            __asm ("shrd eax, edx, 0xb");
            edx += edx;
            __asm ("shrd edx, ecx, 0xb");
        }
        bx += bx;
        edx = rotate_right32 (edx, 1);
    } else {
        if (cx >= 0xc400) {
            if (cx >= 0xffcc) {
                cx -= 0xc;
                cx = -cx;
                if (cl >= 0x20) {
                    cl -= 0x20;
                    esi = eax;
                    eax = edx;
                    edx -= edx;
                }
                __asm ("shrd esi, eax, cl");
                __asm ("shrd eax, edx, cl");
                edx >>= cl;
                esi += esi;
                eax += 0;
                edx += 0;
            } else {
                eax -= eax;
                edx -= edx;
                ebx <<= 0x11;
                edx = rotate_right32 (edx, 1);
            }
        } else {
            __asm ("shrd eax, edx, 0xb");
            edx += edx;
            edx >>= 0xb;
            bx += bx;
            edx = rotate_right32 (edx, 1);
            edx |= 0x7ff00000;
            if (cx == 0x43ff) {
                goto label_1;
            }
            fcn_0001433c ();
        }
    }
label_1:
}
/* r2dec pseudo code output */
/* synth @ 0x160f0 */
#include <stdint.h>
 
int32_t fcn_000160f0 (void) {
    ebx = edx;
    edx = 0x3fff;
    eax |= eax;
    if (eax != 0) {
        __asm ("bsr ecx, eax");
        ch = cl;
        cl = 0x1f;
        cl -= ch;
        eax <<= cl;
        cl = ch;
        ecx = (int32_t) ch;
        ecx += edx;
        edx = eax;
    } else {
        edx -= edx;
        ecx -= ecx;
    }
    eax -= eax;
    *(ebx) = eax;
    *((ebx + 4)) = edx;
    *((ebx + 8)) = cx;
    ebx = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x16075 */
#include <stdint.h>
 
void fcn_00016075 (void) {
    bl = 0x20;
}
/* r2dec pseudo code output */
/* synth @ 0x16838 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_00016838 (int32_t arg_4h, int32_t arg_8h) {
    ebx = eax;
    ax = *(cs:);
    edx = eax;
    ax &= *((ds:ebp + 8));
    if (ax == dx) {
        al = 0x41;
        dh = 0;
    } else {
        edx = ~edx;
        *((ds:ebp + 8)) &= dx;
        ax = *((ebx + 8));
        edx = eax;
        dh &= 0x80;
        dh = rotate_left8 (dh, 1);
        dh <<= 1;
        ax &= 0x7fff;
        if (ax == 0) {
            eax = *((ebx + 4));
            eax |= *(ebx);
            al = 0x44;
            if (eax == 0) {
                ax = *(cs:);
                *((ds:ebp + 8)) |= ax;
                al = 0x40;
            }
        } else {
            if (ax == 0x7fff) {
                ax = *(cs:);
                *((ds:ebp + 8)) |= ax;
                if (*(ebx) == 0) {
                    eax = *((ebx + 4));
                }
                al = 1;
                if (eax == 0x80000000) {
                    al = 5;
                }
            } else {
                al = 4;
                if ((*((ebx + 7)) & 0x80) != 0) {
                    goto label_0;
                }
                ax = *(cs:);
                *((ds:ebp + 8)) |= ax;
                al = 0x44;
            }
        }
    }
label_0:
    al |= dh;
    dx = *((ds:ebp + 4));
    dx &= 0xb8ff;
    dh |= al;
    *((ds:ebp + 4)) = dx;
    ebx = edx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x110fe */
#include <stdint.h>
 
int32_t fcn_000110fe (void) {
    edx = eax;
    fcn_00011dfd ();
    *(eax) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11dfd */
#include <stdint.h>
 
int32_t fcn_00011dfd (void) {
    eax = 0xcb0;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x13610 */
#include <stdint.h>
 
int32_t fcn_00013610 (void) {
    ebp = 0;
    if (eax == 0) {
        goto label_0;
    }
    ecx = eax + 0xb;
    if (ecx < eax) {
        goto label_0;
    }
    edi = ebx;
    cl &= 0xf8;
    eax = *((ebx + 0x14));
    if (ecx < 0x10) {
        ecx = 0x10;
    }
    if (ecx > eax) {
        goto label_0;
    }
    ebx = *((edi + 0x10));
    eax = *((edi + 0xc));
    if (ecx <= ebx) {
        eax = *((edi + 0x28));
        ebx = 0;
    }
    esi = edi + 0x20;
    do {
        edx = *(eax);
        if (ecx <= edx) {
            goto label_1;
        }
        if (edx > ebx) {
            ebx = edx;
        }
        eax = *((eax + 8));
    } while (eax != esi);
    *((edi + 0x14)) = ebx;
    goto label_0;
label_1:
    *((edi + 0x10)) = ebx;
    ebx = *((edi + 0x18));
    ebx++;
    edx -= ecx;
    *((edi + 0x18)) = ebx;
    if (edx >= 0x10) {
        ebx = eax + ecx;
        *((edi + 0xc)) = ebx;
        *(ebx) = edx;
        *(eax) = ecx;
        ecx = *((eax + 4));
        *((ebx + 4)) = ecx;
        edx = *((eax + 8));
        *((ebx + 8)) = edx;
        *((ecx + 8)) = ebx;
        *((edx + 4)) = ebx;
    } else {
        *((edi + 0x1c))--;
        edx = *((eax + 4));
        *((edi + 0xc)) = edx;
        ebx = *((eax + 8));
        *((edx + 8)) = ebx;
        *((ebx + 4)) = edx;
    }
    dl = *(eax);
    dl |= 1;
    ebp = eax + 4;
    *(eax) = dl;
label_0:
    eax = ebp;
    edi = ebp;
    esi = ebp;
    ecx = ebp;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x17702 */
#include <stdint.h>
 
int32_t fcn_00017702 (void) {
    if (*(0x1d2) == 1) {
        if (*(0x1d3) == 0) {
            goto label_1;
        }
    }
    if (*(0x1d2) == 9) {
label_1:
        eax = *(esp);
        eax = fcn_00017655 ();
        goto label_2;
    }
    while (*(0x1a4) == 0xfffffffe) {
label_0:
        eax = 0;
        goto label_2;
    }
    eax = esp;
    eax = fcn_0001784c ();
    if (eax == 0) {
        goto label_2;
    }
    bl = *(0x1d2);
    if (bl >= 2) {
        if (bl > 8) {
            goto label_3;
        }
        if (*(0x1d4) != 0) {
            goto label_3;
        }
        eax = 0;
        ax = ds;
        __asm ("lsl eax, eax");
        eax++;
        *(0x1a4) = eax;
    }
label_3:
    edx = *(esp);
    ecx = *(0x1a4);
    edx += ecx;
    if (edx < ecx) {
        edx = 0xfffffffe;
    }
    eax = 0xfffffffe;
    eax = fcn_000182c9 ();
    if (eax == -1) {
        goto label_0;
    }
    ebx = eax;
    if (eax > 0xfffffff8) {
        goto label_0;
    }
    if (edx <= eax) {
        goto label_0;
    }
    edx -= eax;
    *(esp) = edx;
    eax = edx - 4;
    if (eax > edx) {
        goto label_0;
    }
    edx = *(0x5f8);
    *(esp) = eax;
    while (edx != 0) {
        if (*((edx + 8)) == 0) {
            goto label_4;
        }
        if (edx <= ebx) {
            eax = *(edx);
            eax += edx;
            eax += 4;
            if (eax >= ebx) {
                goto label_4;
            }
        }
        edx = *((edx + 8));
    }
label_4:
    if (edx != 0) {
        eax = *(edx);
        ecx = ebx - 4;
        eax += edx;
        if (ecx != eax) {
            goto label_5;
        }
        esi = *(esp);
        esi += 4;
        *(esp) = esi;
        *(edx) += esi;
        ebp = *(esp);
        ebx = eax;
        ecx = eax + ebp;
        *(ecx) = 0xffffffff;
        goto label_6;
    }
label_5:
    eax = *(esp);
    if (eax < 0x38) {
        goto label_0;
    }
    *(ebx) = eax;
    eax = ebx;
    edx = ebx;
    eax = fcn_000174c1 ();
    ebx = eax;
    eax = *(eax);
    *(esp) = eax;
label_6:
    eax = *(esp);
    al |= 1;
    *(ebx) = eax;
    *((edx + 0x18))++;
    eax = ebx + 4;
    *((edx + 0x14)) = 0xffffffff;
    fcn_00011c83 ();
    eax = 1;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x178c3 */
#include <stdint.h>
 
int32_t fcn_000178c3 (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11be9 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
uint32_t fcn_00011be9 (void) {
    ecx = eax;
    esi = edx;
    al = fcn_00012f74 ();
    if (edx > 0) {
        if ((al & 0x80) != 0) {
            goto label_0;
        }
        ah |= 0x80;
        edx = eax;
        eax = ecx;
        fcn_00012fc9 ();
    }
label_0:
    edi = esp;
    al = bl;
    edx = esi;
    ebx = ecx;
    ah = 0x42;
    ecx = edx;
    ecx >>= 0x10;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(ss:edi) = ax;
    *((ss:edi + 2)) = dx;
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    edx = 0;
    dx = ax;
    if (edx < 0) {
        eax &= 0xffff;
        fcn_00013013 ();
        eax = 0xffffffff;
    } else {
        eax = *(esp);
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11aa8 */
#include <stdint.h>
 
int32_t fcn_00011aa8 (void) {
    ecx = eax;
    ah = *((eax + 0xd));
    ebp = 0;
    if ((ah & 0x10) == 0) {
        goto label_0;
    }
    bh = *((ecx + 0xd));
    bh &= 0xef;
    al = *((ecx + 0xc));
    *((ecx + 0xd)) = bh;
    if ((al & 2) == 0) {
        goto label_1;
    }
    edi = *((ecx + 8));
    ebx = *((edi + 8));
    if (ebx == 0) {
        goto label_1;
    }
    edi = ebx;
    esi = *((ecx + 4));
    do {
        if (esi == 0) {
            goto label_1;
        }
        if (ebp != 0) {
            goto label_1;
        }
        ebx = esi;
        edx = edi;
        eax = *((ecx + 0x10));
        eax = fcn_00011d83 ();
        edx = eax;
        if (eax == -1) {
            bl = *((ecx + 0xc));
            bl |= 0x20;
            *((ecx + 0xc)) = bl;
        } else {
            if (eax != 0) {
                goto label_2;
            }
            eax = 0xc;
            fcn_000110d4 ();
            ah = *((ecx + 0xc));
            ah |= 0x20;
            *((ecx + 0xc)) = ah;
        }
label_2:
        edi += edx;
        esi -= edx;
    } while (1);
label_0:
    eax = *((ecx + 8));
    if (*((eax + 8)) != 0) {
        *((ecx + 0xc)) &= 0xef;
        if ((*((ecx + 0xd)) & 0x20) != 0) {
            goto label_1;
        }
        eax = *((ecx + 4));
        if (eax != 0) {
            edx = eax;
            ebx = 1;
            edx = -edx;
            eax = *((ecx + 0x10));
            eax = fcn_00011be9 ();
        }
        if (eax != -1) {
            goto label_1;
        }
        bl = *((ecx + 0xc));
        bl |= 0x20;
        *((ecx + 0xc)) = bl;
    }
label_1:
    eax = *((ecx + 8));
    eax = *((eax + 8));
    *((ecx + 4)) = 0;
    *(ecx) = eax;
    if (ebp == 0) {
        eax = *((ecx + 8));
        if ((*((eax + 0x10)) & 1) == 0) {
            goto label_3;
        }
        eax = *((ecx + 0x10));
        eax = fcn_000135f4 ();
        if (eax != -1) {
            goto label_3;
        }
    }
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x13008 */
#include <stdint.h>
 
int32_t fcn_00013008 (void) {
    if (edx != 0) {
        goto label_0;
    }
    eax = 0;
    do {
        return eax;
label_0:
    } while (edx == 0);
}
/* r2dec pseudo code output */
/* synth @ 0x17973 */
#include <stdint.h>
 
int32_t fcn_00017973 (void) {
    ecx = eax;
    esi = edx;
    edx = 0;
    do {
        if (ebx <= 0) {
            goto label_0;
        }
        eax = ecx;
        eax = fcn_00018467 ();
        if (eax != 0) {
            goto label_0;
        }
        eax = esi;
        eax = fcn_00018467 ();
        if (eax != 0) {
            goto label_0;
        }
        edx = esi;
        eax = ecx;
        eax = fcn_000184a3 ();
        edx = eax;
        if (eax != 0) {
            goto label_1;
        }
        eax = ecx;
        eax = fcn_000184fa ();
        ecx = eax;
        eax = esi;
        ebx--;
        eax = fcn_000184fa ();
        esi = eax;
    } while (1);
label_0:
    if (ebx > 0) {
        eax = ecx;
        eax = fcn_00018467 ();
        if (eax == 0) {
            eax = esi;
            eax = fcn_00018467 ();
            if (eax == 0) {
                goto label_2;
            }
        }
        eax = 0;
        edx = 0;
        al = *(ecx);
        dl = *(esi);
        eax -= edx;
        return eax;
    }
label_2:
    eax = edx;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x104b6 */
#include <stdint.h>
 
int32_t fcn_000104b6 (int32_t arg_4h) {
    tmp_0 = esp + 4;
    esp + 4 = eax;
    eax = tmp_0;
    fcn_000104c9 ();
    eax = *((esp + 4));
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x104c9 */
#include <stdint.h>
 
int32_t fcn_000104c9 (void) {
    if (eax < esp) {
        eax -= esp;
        eax = -eax;
        if (eax <= *(0x1b4)) {
            goto label_0;
        }
        return eax;
    }
label_0:
    ax = ss;
    if (ax != *(0x17c)) {
        return eax;
    }
    eax = 0x17e;
    edx = 1;
    return fcn_000110ab ();
}
/* r2dec pseudo code output */
/* synth @ 0x13564 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00013564 (void) {
    int32_t var_1h;
    int32_t var_2h;
    int32_t var_3h;
    ebx = edx;
    esi = esp + 3;
    dl = 0;
    ah = 0x47;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    if (eax >= 0) {
        goto label_0;
    }
    eax = 1;
    do {
        eax = fcn_000110d4 ();
        eax = 0;
        goto label_1;
label_0:
        ah = 0x19;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        dl = 0x5c;
        al += 0x41;
        edi = esp;
        *(esp) = al;
        ah = 0x3a;
        *((esp + 2)) = dl;
        *((esp + 1)) = ah;
        eax = ds;
        es = ds;
        ecx -= ecx;
        ecx--;
        eax = 0;
        __asm ("repne scasb al, byte es:[edi]");
        ecx = ~ecx;
        ecx--;
        edx = ecx + 1;
        if (ebp != 0) {
            goto label_2;
        }
        if (ebx > edx) {
            eax = ebx;
        } else {
            eax = edx;
        }
        eax = fcn_00013077 ();
        if (eax != 0) {
            goto label_3;
        }
        eax = 5;
    } while (1);
label_3:
    ebx = edx;
label_2:
    edx = esp;
    eax = ebp;
    fcn_000179e5 ();
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1110a */
#include <stdint.h>
 
int32_t fcn_0001110a (void) {
    if (eax >= 0x41) {
        if (eax > 0x5a) {
            goto label_0;
        }
        eax += 0x20;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x179e5 */
#include <stdint.h>
 
int32_t fcn_000179e5 (void) {
    esi = eax;
    while (ebx != 0) {
        cl = *(edx);
        if (cl == 0) {
            goto label_0;
        }
        edx++;
        ebx--;
        *(eax) = cl;
        eax++;
    }
    do {
label_0:
        if (ebx == 0) {
            goto label_1;
        }
        ebx--;
        *(eax) = 0;
        eax++;
    } while (1);
label_1:
    eax = esi;
    ecx = esi;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x13181 */
#include <stdint.h>
 
int32_t fcn_00013181 (void) {
    eax = 0xffffffff;
}
/* r2dec pseudo code output */
/* synth @ 0x13899 */
#include <stdint.h>
 
int32_t fcn_00013899 (void) {
    edx = eax;
    uint32_t (*0x604)(uint32_t) (edx);
    uint32_t (*0x608)() ();
    eax = edx;
    return void (*0x11023)() ();
}
/* r2dec pseudo code output */
/* synth @ 0x11023 */
#include <stdint.h>
 
void fcn_00011023 (void) {
    return void (*0x11048)() ();
}
/* r2dec pseudo code output */
/* synth @ 0x180a0 */
#include <stdint.h>
 
int32_t fcn_000180a0 (void) {
    esi = eax;
    edx -= edx;
    ecx -= ecx;
    ebp -= ebp;
    eax -= eax;
    do {
        al = *(esi);
        if (al == 0) {
            goto label_0;
        }
        edi = edx;
        ebx = ecx;
        eax = ebp;
        ebp += ebp;
        ecx += ecx;
        edx += edx;
        ebp += ebp;
        ecx += ecx;
        edx += edx;
        ebp += eax;
        ecx += ebx;
        edx += edi;
        ebp += ebp;
        ecx += ecx;
        edx += edx;
        eax -= eax;
        al = *(esi);
        al &= 0xf;
        ebp += eax;
        ecx += 0;
        edx += 0;
        esi++;
    } while (1);
label_0:
    eax = ecx;
    edi = 0x405e;
    eax = fcn_00018102 ();
    *((ebp + 4)) = edx;
    *(ebp) = eax;
    *((ebp + 8)) = si;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x12159 */
#include <stdint.h>
 
int32_t fcn_00012159 (void) {
    ecx = eax;
    ebx = edx;
    if (edx > 0x1000) {
        edx = 0x1000;
        fcn_000120d8 ();
        ebx -= 0x1000;
    } else {
        if (edx >= 0xfffff000) {
            goto label_0;
        }
        edx = 0xfffff000;
        fcn_000120d8 ();
        ebx += 0x1000;
    }
label_0:
    edx = ebx;
    eax = ecx;
    fcn_000120d8 ();
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x139d6 */
#include <stdint.h>
 
int32_t fcn_000139d6 (void) {
    int32_t var_40h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_23h;
    uint32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    edi = edx;
    *((ebp - 0x18)) = ebx;
    *((ebp - 0x20)) = eax;
    do {
        dl = *(eax);
        if (dl != 0x20) {
            if (dl < 9) {
                goto label_1;
            }
            if (dl > 0xd) {
                goto label_1;
            }
        }
        eax++;
    } while (1);
label_1:
    ebx = eax + 1;
    cl = 0;
    if (dl != 0x2b) {
        if (dl != 0x2d) {
            goto label_2;
        }
        cl = 1;
    }
    eax = ebx;
label_2:
    ebx = 0;
    dh = 0x30;
    *((ebp - 0x1c)) = ebx;
    do {
label_0:
        dl = *(eax);
        eax++;
        if (dl != 0x2e) {
            goto label_3;
        }
        if ((cl & 8) != 0) {
            goto label_4;
        }
        cl |= 8;
    } while (1);
label_3:
    if (dl >= 0x30) {
        if (dl > 0x39) {
            goto label_4;
        }
        if ((cl & 8) != 0) {
            *((ebp - 0x1c))++;
        }
        dh |= dl;
        if (dh != 0x30) {
            if (ebx < 0x13) {
                *((ebx + ebp - 0x40)) = dl;
            }
            ebx++;
        }
        cl |= 4;
        goto label_0;
    }
label_4:
    esi = 0;
    if ((cl & 4) == 0) {
        goto label_5;
    }
    if (dl != 0x65) {
        if (dl != 0x45) {
            goto label_6;
        }
    }
    edx = eax - 1;
    ch = *(eax);
    *((ebp - 0x10)) = edx;
    edx = eax + 1;
    if (ch != 0x2b) {
        if (ch != 0x2d) {
            goto label_7;
        }
        cl |= 2;
    }
    eax = edx;
label_7:
    cl &= 0xfb;
    do {
        dl = *(eax);
        if (dl < 0x30) {
            goto label_8;
        }
        if (dl > 0x39) {
            goto label_8;
        }
        if (esi < 0x3e8) {
            esi *= 0xa;
            *((ebp - 0x14)) = esi;
            esi = (int32_t) dl;
            esi += *((ebp - 0x14));
            esi -= 0x30;
        }
        cl |= 4;
        eax++;
    } while (1);
label_8:
    if ((cl & 2) != 0) {
        esi = -esi;
    }
    if ((cl & 4) == 0) {
        eax = *((ebp - 0x10));
        goto label_9;
label_6:
        eax--;
    }
label_9:
    *((ebp - 0x20)) = eax;
label_5:
    if (*((ebp - 0x18)) != 0) {
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x20));
        *(edx) = eax;
    }
    esi -= *((ebp - 0x1c));
    if (ebx <= 0x13) {
        goto label_10;
    }
    ebx -= 0x13;
    esi += ebx;
    ebx = 0x13;
    do {
label_10:
        if (ebx <= 0) {
            goto label_11;
        }
        if (*((ebx + ebp - 0x41)) != 0x30) {
            goto label_11;
        }
        esi++;
        ebx--;
    } while (1);
label_11:
    if (ebx == 0) {
        *((edi + 8)) = 0;
        *((edi + 4)) = ebx;
        eax = edi;
        *(edi) = ebx;
        eax ^= edi;
    } else {
        dl = 0;
        eax = ebp - 0x40;
        *((ebx + ebp - 0x40)) = dl;
        edx = ebp - 0x2c;
        fcn_000180a0 ();
        if (esi != 0) {
            eax = ebp - 0x2c;
            edx = esi;
            fcn_00012159 ();
        }
        if ((cl & 1) != 0) {
            *((ebp - 0x23)) |= 0x80;
        }
        eax = *((ebp - 0x24));
        *((edi + 8)) = ax;
        eax = *((ebp - 0x28));
        *((edi + 4)) = eax;
        eax = *((ebp - 0x2c));
        *(edi) = eax;
        eax = esi + ebx - 1;
        if (eax > 0x134) {
            eax = 3;
        } else {
            if (eax < 0xfffffecc) {
                eax = 2;
            } else {
                eax = 1;
            }
        }
    }
    esp = ebp - 0xc;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x110e7 */
#include <stdint.h>
 
int32_t fcn_000110e7 (void) {
    eax = 0xe;
    return void (*0x110d4)() ();
}
/* r2dec pseudo code output */
/* synth @ 0x18143 */
#include <stdint.h>
 
int32_t fcn_00018143 (void) {
    eax = 0x1178;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x18149 */
#include <stdint.h>
 
int32_t fcn_00018149 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, uint32_t arg_1ch, int32_t arg_20h) {
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_28h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    ecx = *((ebp + 0x20));
    eax = *((ebp + 8));
    *((ebp - 0x1c)) = eax;
    eax = *((ebp + 0xc));
    edx = ebp - 0x28;
    *((ebp - 0x18)) = eax;
    eax = ebp - 0x1c;
    *(fp_stack--) = *(eax);
    ? = fp_stack[0];
    fp_stack--;
    if (*((ebp + 0x1c)) == 0x46) {
        edi = 0xa;
        eax = 0;
        *((ebp - 0x4c)) = edi;
        *((ebp - 0x50)) = eax;
    } else {
        ebx = 0xc;
        esi = 1;
        *((ebp - 0x4c)) = ebx;
        *((ebp - 0x50)) = esi;
    }
    eax = *((ebp + 0x10));
    ebx = ecx;
    edx = 0;
    *((ebp - 0x54)) = eax;
    *((ebp - 0x44)) = edx;
    eax = *((ebp + 0x1c));
    edx = ebp - 0x54;
    *((ebp - 0x48)) = eax;
    eax = ebp - 0x28;
    fcn_000121b3 ();
    edx = *((ebp + 0x14));
    eax = *((ebp - 0x3c));
    *(edx) = eax;
    edx = *((ebp + 0x18));
    eax = *((ebp - 0x40));
    *(edx) = eax;
    eax = ecx;
    esp = ebp - 0x14;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x13c39 */
#include <stdint.h>
 
int32_t fcn_00013c39 (void) {
    ecx = eax;
    if (edx >= 0x14) {
        goto label_0;
    }
    bl = *(eax);
    bl++;
    ebx &= 0xff;
    if ((*((ebx + 0x6a4)) & 0x20) == 0) {
        goto label_0;
    }
    do {
        if (*(eax) == 0) {
            goto label_1;
        }
        eax++;
        edx--;
    } while (1);
    do {
label_1:
        if (edx <= 0) {
            goto label_2;
        }
        edx--;
        *(eax) = 0x30;
        eax++;
    } while (1);
label_2:
    *(eax) = 0;
label_0:
    eax = ecx;
    ebx = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1207b */
#include <stdint.h>
 
int32_t fcn_0001207b (void) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    edi = eax;
    esi = edx;
    if (edx >= 0x2000) {
        esi = 0x2000;
    }
    ecx = 0x4ac;
    while (esi > 0) {
        if ((si & 1) != 0) {
            ax = *((ecx + 8));
            *((ebp - 0x14)) = ax;
            eax = *((ecx + 4));
            *((ebp - 0x18)) = eax;
            edx = ebp - 0x1c;
            eax = *(ecx);
            ebx = edi;
            *((ebp - 0x1c)) = eax;
            eax = edi;
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            ? = fp_stack[0];
            fp_stack--;
        }
        esi >>= 1;
        ecx += 0xa;
    }
    esp = ebp - 0x10;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x120d8 */
#include <stdint.h>
 
void fcn_000120d8 (void) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    ecx = eax;
    if (edx == 0) {
        void (*0x120cf)() ();
    }
    __asm ("wait");
    esi = eax;
    ah |= 3;
    eax &= 0xffff;
    ebx = 0x3fff;
    edi = 0;
    *((ebp - 0x14)) = bx;
    ebx = 0x80000000;
    *((ebp - 0x1c)) = edi;
    *((ebp - 0x18)) = ebx;
    if (edx < 0) {
        eax = ebp - 0x1c;
        edx = -edx;
        fcn_0001207b ();
        ebx = ecx;
        edx = ebp - 0x1c;
        eax = ecx;
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
    } else {
        eax = ebp - 0x1c;
        fcn_0001207b ();
        ebx = ecx;
        edx = ebp - 0x1c;
        eax = ecx;
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
    }
    eax = 0;
    ax = si;
    return void (*0x120cf)() ();
}
/* r2dec pseudo code output */
/* synth @ 0x13be9 */
#include <stdint.h>
 
int32_t fcn_00013be9 (void) {
    dx = *((eax + 8));
    dh &= 0x7f;
    if (dx == 0x7fff) {
        if (*((eax + 4)) == 0x80000000) {
            if (*(eax) != 0) {
                goto label_0;
            }
            eax = 3;
            return eax;
        }
label_0:
        eax = 2;
        return eax;
    }
    if ((*((eax + 8)) & 0x7fff) == 0) {
        if (*((eax + 4)) == 0) {
            if (*(eax) != 0) {
                goto label_1;
            }
            eax = 0;
            return eax;
        }
label_1:
        eax = 4;
        return eax;
    }
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x12487 */
#include <stdint.h>
 
void fcn_00012487 (void) {
    ecx = 0x2710;
    edx -= edx;
    tmp_0 = eax;
    eax = edx;
    edx = tmp_0;
    if (eax >= ecx) {
        tmp_1 = eax;
        eax = edx;
        edx = tmp_1;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
    }
    void (*0x1249d)() ();
    ecx = 0x64;
    edx -= edx;
    tmp_2 = eax;
    eax = edx;
    edx = tmp_2;
    if (eax >= ecx) {
        tmp_3 = eax;
        eax = edx;
        edx = tmp_3;
        ax = dx:ax / cx;
        dx = dx:ax % cx;
    }
    void (*0x124b4)() ();
    cl = 0xa;
    tmp_4 = ah;
    ah = al;
    al = tmp_4;
    if (al >= cl) {
        tmp_5 = ah;
        ah = al;
        al = tmp_5;
        al = ax / cl;
        ah = ax % cl;
    }
    ah += 0x30;
    al += 0x30;
    *(ebx) = al;
    ebx++;
    *(ebx) = ah;
    ebx++;
}
/* r2dec pseudo code output */
/* synth @ 0x125f5 */
#include <stdint.h>
 
int32_t fcn_000125f5 (int32_t arg_8h) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    edx = *(eax);
    ecx++;
    *((ebp - 0xc)) = edx;
    *((ebp - 0x18)) = ecx;
    ah = *((eax + 8));
    edx = 0;
    if ((ah & 4) != 0) {
        if (ebx < *((ebp - 0xc))) {
            esi = *((ebp - 0x10));
            if ((*((esi + 8)) & 0x10) != 0) {
                goto label_0;
            }
            *((ebp - 0xc)) = ebx;
        }
label_0:
        esi = *((ebp - 0x18));
        edi = *((ebp - 0xc));
        edi -= esi;
        *((ebp - 0xc)) = edi;
        if (edi >= 0) {
            goto label_1;
        }
        ecx = 0;
        *((ebp - 0xc)) = ecx;
    }
label_1:
    esi = *((ebp - 0x18));
    if (esi > 0) {
        goto label_2;
    }
    esi = *((ebp - 0x10));
    if ((*((esi + 8)) & 8) == 0) {
        edi = *((ebp + 8));
        esi = edx;
        esi += edi;
        eax = *((ebp - 0xc));
        edx++;
        *(esi) = 0x30;
        if (eax <= 0) {
            esi = *((ebp - 0x10));
            if ((*((esi + 8)) & 0x10) == 0) {
                goto label_3;
            }
        }
        ecx = *((ebp + 8));
        edi = edx;
        edi += ecx;
        edx++;
        *(edi) = 0x2e;
    }
label_3:
    esi = *((ebp - 0x10));
    *((esi + 0x1c)) = edx;
    esi = *((ebp - 0x18));
    edi = *((ebp - 0xc));
    esi = -esi;
    if (esi > edi) {
        eax = edi;
        *((ebp - 0x18)) = edi;
        eax = -eax;
        *((ebp - 0x18)) = eax;
    }
    edi = *((ebp - 0x10));
    esi = *((ebp - 0x18));
    *((edi + 0x18)) = esi;
    ecx = esi;
    *((edi + 0x20)) = esi;
    ecx = -ecx;
    *((edi + 0x20)) = ecx;
    edi = *((ebp - 0xc));
    edi += esi;
    *((ebp - 0xc)) = edi;
    if (ebx > edi) {
        ebx = edi;
    }
    edi = *((ebp + 8));
    esi = *((ebp - 0x14));
    ecx = ebx;
    edi += edx;
    eax = ds;
    es = ds;
    eax = ecx;
    ecx >>= 2;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    cl = al;
    cl &= 3;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    es = edi;
    esi = *((ebp - 0x10));
    *((esi + 0x24)) = ebx;
    esi = *((ebp - 0xc));
    edx += ebx;
    esi -= ebx;
    ebx = *((ebp - 0x10));
    *((ebx + 0x28)) = esi;
    goto label_4;
label_2:
    if (ebx < esi) {
        esi = *((ebp - 0x14));
        edi = *((ebp + 8));
        ecx = ebx;
        eax = ds;
        es = ds;
        eax = ecx;
        ecx >>= 2;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        cl = al;
        cl &= 3;
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
        es = edi;
        esi = *((ebp - 0x10));
        *((esi + 0x1c)) = ebx;
        esi = *((ebp - 0x18));
        edx += ebx;
        esi -= ebx;
        ebx = *((ebp - 0x10));
        *((ebx + 0x20)) = esi;
        esi = *((ebp - 0x10));
        ebx = *((ebp - 0x18));
        cl = *((esi + 8));
        *((esi + 0x18)) = ebx;
        if ((cl & 8) == 0) {
            if (*((ebp - 0xc)) <= 0) {
                if ((cl & 0x10) == 0) {
                    goto label_5;
                }
            }
            ecx = *((ebp + 8));
            ebx = edx;
            ebx += ecx;
            *(ebx) = 0x2e;
            ebx = *((ebp - 0x10));
            edx++;
            *((ebx + 0x24)) = 1;
        }
label_5:
        esi = *((ebp - 0x10));
        ebx = *((ebp - 0xc));
        *((esi + 0x28)) = ebx;
        goto label_4;
    }
    edi = *((ebp + 8));
    ecx = esi;
    esi = *((ebp - 0x14));
    eax = ds;
    es = ds;
    eax = ecx;
    ecx >>= 2;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    cl = al;
    cl &= 3;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    es = edi;
    edi = *((ebp - 0x10));
    esi = *((ebp - 0x18));
    ch = *((edi + 8));
    edx += esi;
    ebx -= esi;
    *((edi + 0x18)) = esi;
    if ((ch & 8) == 0) {
        if (*((ebp - 0xc)) <= 0) {
            if ((ch & 0x10) == 0) {
                goto label_6;
            }
        }
        eax = *((ebp + 8));
        edi = edx;
        edi += eax;
        edx++;
        *(edi) = 0x2e;
    } else {
        esi = *((ebp + 8));
        if (*(esi) != 0x30) {
            goto label_6;
        }
        *((edi + 0x18)) = 0;
    }
label_6:
    ecx = *((ebp - 0xc));
    if (ebx > ecx) {
        ebx = ecx;
    }
    esi = *((ebp - 0x14));
    esi += *((ebp - 0x18));
    edi = *((ebp + 8));
    ecx = ebx;
    edi += edx;
    eax = ds;
    es = ds;
    eax = ecx;
    ecx >>= 2;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    cl = al;
    cl &= 3;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    es = edi;
    esi = *((ebp - 0x10));
    do {
        edx += ebx;
    } while (ecx != 0);
    *((esi + 0x1c)) = edx;
    esi = *((ebp - 0xc));
    esi -= ebx;
    ebx = *((ebp - 0x10));
    *((ebx + 0x20)) = esi;
label_4:
    edx += *((ebp + 8));
    *(edx) = 0;
    esp = ebp - 8;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x12813 */
#include <stdint.h>
 
int32_t fcn_00012813 (int32_t arg_8h) {
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x18));
    edx = *((eax + 4));
    if (edx <= 0) {
        *((ebp - 0x14)) += edx;
    } else {
        ebx = *((ebp - 0x14));
        ebx -= edx;
        *((ebp - 0x14)) = ebx;
        ecx = ebx + 1;
        *((ebp - 0x14)) = ecx;
    }
    eax = *((ebp - 0x18));
    edi = 0;
    dl = *((eax + 8));
    *((ebp - 0xc)) = edi;
    if ((dl & 4) != 0) {
        eax = *((ebp - 0x20));
        if (eax < *((ebp - 0x14))) {
            *((ebp - 0x14)) = eax;
        }
        ebx = *((ebp - 0x14));
        ebx--;
        *((ebp - 0x14)) = ebx;
        if (ebx >= 0) {
            goto label_0;
        }
        esi = 0;
        *((ebp - 0x14)) = esi;
    }
label_0:
    eax = *((ebp - 0x18));
    edi = *((eax + 4));
    if (edi <= 0) {
        eax = *((ebp - 0xc));
        ebx = *((ebp + 8));
        edx = eax + 1;
        eax += ebx;
        *((ebp - 0xc)) = edx;
        *(eax) = 0x30;
        goto label_1;
    }
    edx = *((ebp - 0x20));
    *((ebp - 0x10)) = edi;
    if (edi > edx) {
        *((ebp - 0x10)) = edx;
    }
    edi = *((ebp + 8));
    ebx = *((ebp - 0xc));
    ecx = *((ebp - 0x10));
    esi = *((ebp - 0x1c));
    edi += ebx;
    edx = *((ebp - 0x18));
    eax = ds;
    es = ds;
    eax = ecx;
    ecx >>= 2;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    cl = al;
    cl &= 3;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    es = edi;
    eax = *((ebp - 0x10));
    esi = *((ebp - 0x1c));
    edi = *((ebp - 0x20));
    ecx = ebx + eax;
    esi += eax;
    edi -= eax;
    *((ebp - 0xc)) = ecx;
    *((ebp - 0x1c)) = esi;
    ebx = *((edx + 4));
    *((ebp - 0x20)) = edi;
    if (eax < ebx) {
        ecx = *((ebp - 0x10));
        eax = ebx;
        esi = *((ebp - 0xc));
        eax -= ecx;
        edx = 0x30;
        *((ebp - 0x10)) = eax;
        eax = *((ebp + 8));
        ebx = *((ebp - 0x10));
        eax += esi;
        fcn_00013158 ();
        eax = *((ebp - 0x10));
        edi = esi + eax;
        *((ebp - 0xc)) = edi;
    }
label_1:
    edx = *((ebp - 0x18));
    eax = *((ebp - 0xc));
    *((edx + 0x18)) = eax;
    if ((*((edx + 8)) & 8) == 0) {
        if (*((ebp - 0x14)) <= 0) {
            eax = *((ebp - 0x18));
            if ((*((eax + 8)) & 0x10) == 0) {
                goto label_2;
            }
        }
        eax = *((ebp - 0xc));
        edi = *((ebp + 8));
        esi = eax + 1;
        eax += edi;
        *((ebp - 0xc)) = esi;
        *(eax) = 0x2e;
    }
label_2:
    eax = *((ebp - 0x18));
    edx = *((eax + 4));
    if (edx < 0) {
        eax = *((ebp + 8));
        ecx = *((ebp - 0xc));
        ebx = edx;
        *((ebp - 0x10)) = edx;
        edx = 0x30;
        ebx = -ebx;
        eax += ecx;
        *((ebp - 0x10)) = ebx;
        fcn_00013158 ();
        eax = *((ebp - 0x10));
        esi = ecx + eax;
        *((ebp - 0xc)) = esi;
    }
    edi = *((ebp - 0x14));
    if (edi > 0) {
        if (edi < *((ebp - 0x20))) {
            *((ebp - 0x20)) = edi;
        }
        ebx = *((ebp - 0x20));
        if (ebx != 0) {
            edi = *((ebp + 8));
            ecx = *((ebp - 0xc));
            esi = *((ebp - 0x1c));
            edi += ecx;
            ecx = ebx;
            eax = ds;
            es = ds;
            eax = ecx;
            ecx >>= 2;
            *(es:edi) = *(esi);
            esi += 4;
            es:edi += 4;
            cl = al;
            cl &= 3;
            *(es:edi) = *(esi);
            ecx--;
            esi++;
            es:edi++;
            es = edi;
            *((ebp - 0xc)) += ebx;
        }
        edx = *((ebp - 0x18));
        eax = *((ebp - 0xc));
        edi = *((ebp - 0x20));
        *((edx + 0x1c)) = eax;
        eax = *((ebp - 0x14));
        eax -= edi;
        *((edx + 0x20)) = eax;
    }
    eax = *((ebp - 0x18));
    if (*((eax + 0xc)) != 0) {
        eax = *((ebp - 0xc));
        ecx = *((ebp + 8));
        ebx = eax + 1;
        edx = *((ebp - 0x18));
        eax += ecx;
        dl = *((edx + 0xc));
        *((ebp - 0xc)) = ebx;
        *(eax) = dl;
    }
    eax = *((ebp - 0xc));
    esi = *((ebp - 0x24));
    eax++;
    if (esi >= 0) {
        edx = *((ebp - 0xc));
        *((ebp - 0xc)) = eax;
        eax = *((ebp + 8));
        *((edx + eax)) = 0x2b;
    } else {
        edx = *((ebp - 0xc));
        edi = esi;
        *((ebp - 0xc)) = eax;
        edi = -edi;
        eax = *((ebp + 8));
        *((ebp - 0x24)) = edi;
        *((edx + eax)) = 0x2d;
    }
    ebx = *((ebp - 0x18));
    ebx = *((ebx + 0x10));
    if (ebx <= 3) {
        eax = ebx;
    }
    eax = *((ebp - 0x18));
    *((eax + 0x10)) = ebx;
    if (ebx < 4) {
        goto label_3;
    }
    edi = 0;
    eax = *((ebp - 0x24));
    *((ebp - 0x10)) = edi;
    if (eax >= 0x3e8) {
        edx = eax;
        edi = 0x3e8;
        edx >>= 0x1f;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        *((ebp - 0x10)) = eax;
        edx = eax;
        eax <<= 5;
        eax -= edx;
        eax <<= 2;
        eax += edx;
        edx = *((ebp - 0x24));
        eax <<= 3;
        edx -= eax;
        *((ebp - 0x24)) = edx;
    }
    eax = *((ebp - 0xc));
    esi = *((ebp + 8));
    ecx = eax + 1;
    do {
        dl = *((ebp - 0x10));
    } while (ecx != 0);
    eax += esi;
    dl += 0x30;
    *((ebp - 0xc)) = ecx;
    *(eax) = dl;
label_3:
    if (ebx >= 3) {
        edi = 0;
        eax = *((ebp - 0x24));
        *((ebp - 0x10)) = edi;
        if (eax >= 0x64) {
            edx = eax;
            edi = 0x64;
            edx >>= 0x1f;
            eax = edx:eax / edi;
            edx = edx:eax % edi;
            *((ebp - 0x10)) = eax;
            edx = eax;
            eax <<= 2;
            eax -= edx;
            eax <<= 3;
            eax += edx;
            edx = *((ebp - 0x24));
            eax <<= 2;
            edx -= eax;
            *((ebp - 0x24)) = edx;
        }
        eax = *((ebp - 0xc));
        esi = *((ebp + 8));
        ecx = eax + 1;
        dl = *((ebp - 0x10));
        eax += esi;
        dl += 0x30;
        *((ebp - 0xc)) = ecx;
        *(eax) = dl;
    }
    if (ebx >= 2) {
        edi = 0;
        eax = *((ebp - 0x24));
        *((ebp - 0x10)) = edi;
        if (eax >= 0xa) {
            edx = eax;
            ebx = 0xa;
            edx >>= 0x1f;
            eax = edx:eax / ebx;
            edx = edx:eax % ebx;
            *((ebp - 0x10)) = eax;
            edx = eax;
            eax <<= 2;
            eax += edx;
            edx = *((ebp - 0x24));
            eax += eax;
            edx -= eax;
            *((ebp - 0x24)) = edx;
        }
        eax = *((ebp - 0xc));
        ecx = *((ebp + 8));
        ebx = eax + 1;
        dl = *((ebp - 0x10));
        eax += ecx;
        dl += 0x30;
        *((ebp - 0xc)) = ebx;
        *(eax) = dl;
    }
    eax = *((ebp - 0xc));
    edi = *((ebp + 8));
    esi = eax + 1;
    dl = *((ebp - 0x24));
    eax += edi;
    dl += 0x30;
    *(eax) = dl;
    eax = *((ebp - 0x18));
    edx = esi;
    eax = *((eax + 0x1c));
    edx -= eax;
    eax = *((ebp - 0x18));
    *((eax + 0x24)) = edx;
    eax = edi + esi;
    *((ebp - 0xc)) = esi;
    *(eax) = 0;
    return void (*0x127fa)() ();
}
/* r2dec pseudo code output */
/* synth @ 0x12ba0 */
#include <stdint.h>
 
int32_t fcn_00012ba0 (void) {
    int32_t var_2h;
    *(0x19c) = 3;
    *(0x580) = 1;
    __asm ("smsw word [0x57e]");
    *(0x57e) &= 6;
    __asm ("sidt [esp]");
    ebx = *((esp + 2));
    ebx += 0x38;
    if (*(0x1d4) != 0) {
        fcn_00012c6b ();
        es = *(0x196);
        *(es:ebx) = edx;
        *((es:ebx + 4)) = ecx;
        fcn_00012cd5 ();
    } else {
        if (*(0x1d2) == 0) {
            ax = 0x2507;
            cx = cs;
            ds = ecx;
            edx = 0x4110;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            al = 4;
            ah = 0xf3;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        } else {
            if (*(0x1d2) == 9) {
                fcn_00012c6b ();
                *(ebx) = edx;
                *((ebx + 4)) = ecx;
                eax = 0xe02;
                ebx = 4;
                ecx = *(0x190);
                eax = uint32_t (*ecx + 0x30)() ();
            } else {
                if (*(0x1d2) == 1) {
                    dx = *(0x194);
                    eax -= eax;
                    eax = fcn_000171b8 ();
                } else {
                    dx -= dx;
                    eax -= eax;
                    al = fcn_000171b8 ();
                    if (al == 1) {
                        goto label_0;
                    }
                    fcn_00012c88 ();
                }
            }
        }
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x12c6b */
#include <stdint.h>
 
void fcn_00012c6b (void) {
    ecx = 0x4110;
    dx = cs;
    edx <<= 0x10;
    dx = cx;
    cx = cs;
    cl &= 3;
    cx <<= 0xd;
    ch |= 0x8e;
}
/* r2dec pseudo code output */
/* synth @ 0x12cd5 */
#include <stdint.h>
 
int16_t fcn_00012cd5 (void) {
    ebx = 0;
    edx = 0x538;
    ax = 0x2535;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x538) |= 4;
    *(0x538) &= 0xfffffffd;
    ebx++;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    return ax;
}
/* r2dec pseudo code output */
/* synth @ 0x171b8 */
#include <stdint.h>
 
int32_t fcn_000171b8 (void) {
    ax = 0x1600;
    eax = syscall_2fh (eax, ebx, ecx, edx, esi, edi, edp);
    if (al != 0) {
        if (al != 0x80) {
            ebx = 0;
            ecx = 0;
            edx = 0;
            al = 0;
            ah = 0xfa;
            eax = syscall_2fh (eax, ebx, ecx, edx, esi, edi, edp);
            if (ax != 0x666) {
                goto label_0;
            }
            al = 0x22;
            ebx = 0;
            ecx = 0;
            edx = 0;
            ah = 0xfa;
            eax = syscall_2fh (eax, ebx, ecx, edx, esi, edi, edp);
            if (ax != 0) {
                goto label_0;
            }
            dh = 1;
            al = 0x1e;
            ebx = 0;
            ecx = 0;
            *(0x695) = dh;
            edx = 0;
            ah = 0xfa;
            eax = syscall_2fh (eax, ebx, ecx, edx, esi, edi, edp);
            eax = cs;
            ebx = 0xcec;
            edx = eax;
            ecx = ebx;
            al = 0x20;
            ecx >>= 0x10;
            ah = 0xfa;
            eax = syscall_2fh (eax, ebx, ecx, edx, esi, edi, edp);
            al = 1;
        }
    } else {
label_0:
        edx = *(esp);
        if (ebp == 0) {
            if (dx == 0) {
                goto label_1;
            }
        }
        eax = 0xa00;
        esi = 0xf8;
        eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
        eax -= eax;
        if (eax == 0) {
            ebx = 0x4110;
            eax = 7;
            ecx = cs;
            fcn_000181ce ();
            es = *(esp);
            ah = *((es:ebp + 0x40));
            *((es:ebp + 0x3e)) = 1;
            ah |= 4;
            *((es:ebp + 0x40)) = ah;
            eax = cr0;
            al |= 4;
            dl = 1;
            cr0 = eax;
            ah = 0x30;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            *(0x694) = dl;
        }
label_1:
        al = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x12c88 */
#include <stdint.h>
 
int16_t fcn_00012c88 (void) {
    cl = 7;
    ax = 0x2502;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x578) = ebx;
    *(0x57c) = es;
    cl = 7;
    ax = 0x2504;
    ds = cs;
    if (*(0x1d2) >= 3) {
        edx = 0x40a0;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        ds = cs;
        fcn_00012cd5 ();
    } else {
        edx = 0x4110;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        ecx = cr0;
        ecx |= 4;
        ecx &= 0xfffffffd;
        cr0 = ecx;
    }
    return ax;
}
/* r2dec pseudo code output */
/* synth @ 0x12daa */
#include <stdint.h>
 
int16_t fcn_00012daa (void) {
    ebx = 0;
    edx = 0x538;
    ax = 0x2535;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ecx = 0;
    cx = *(0x57e);
    *(0x538) = ecx;
    ebx++;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    return ax;
}
/* r2dec pseudo code output */
/* synth @ 0x17282 */
#include <stdint.h>
 
int32_t fcn_00017282 (void) {
    es = edx;
    dl = *(0x695);
    if (dl != 0) {
        eax = cs;
        edx = cs;
        ebx = 0;
        ecx = 0;
        al = 0x21;
        ah = 0xfa;
        eax = syscall_2fh (eax, ebx, ecx, edx, esi, edi, edp);
        al = 0x1f;
        ebx = 0;
        ecx = 0;
        edx = 0;
        ah = 0xfa;
        eax = syscall_2fh (eax, ebx, ecx, edx, esi, edi, edp);
        al = 1;
        ecx = es;
        ebx = es;
        return eax;
    }
    if (*(0x694) != 0) {
        bl = *((es:eax + 0x40));
        *((es:eax + 0x3e)) = dl;
        bl &= 0xfb;
        *((es:eax + 0x40)) = bl;
        eax = cr0;
        al &= 0xfb;
        cr0 = eax;
        ah = 0x30;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    }
    al = 0;
    ecx = es;
    ebx = es;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x12d6f */
#include <stdint.h>
 
int16_t fcn_00012d6f (void) {
    cl = 7;
    ax = 0x2504;
    edx = *(0x578);
    ds = *(0x57c);
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (*(0x1d2) >= 3) {
        fcn_00012daa ();
    } else {
        ecx = cr0;
        ecx &= 0xfffffff9;
        dx = *(0x57e);
        cx |= dx;
        cr0 = ecx;
    }
    return ax;
}
/* r2dec pseudo code output */
/* synth @ 0x172dc */
#include <stdint.h>
 
void fcn_000172dc (void) {
    __asm ("wait");
    __asm ("fninit");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = 0.0;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = 2;
    __asm ("sahf");
    if (? != ?) {
        al = 3;
    }
    __asm ("wait");
    __asm ("fninit");
    tmp_0 = esp;
    esp = ax;
    ax = tmp_0;
}
/* r2dec pseudo code output */
/* synth @ 0x12dd4 */
#include <stdint.h>
 
int32_t fcn_00012dd4 (void) {
    if (*(0x19d) != 0) {
        edx = 0x2dcb;
        ebx = 0x2dd0;
        *(0x69c) = edx;
        *(0x6a0) = ebx;
    }
    eax = 0;
    ax = *(0x698);
    fcn_000172dc ();
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x12f1c */
#include <stdint.h>
 
int32_t fcn_00012f1c (void) {
    edx = eax;
    eax <<= 2;
    eax -= edx;
    eax <<= 2;
    eax += edx;
    esi = 0x1e8;
    eax += eax;
    ebx = 0;
    esi += eax;
    eax = *(0xca0);
    while (eax != 0) {
        ecx = *(eax);
        eax = *((eax + 4));
        edx = 1;
        if ((*((eax + 0xd)) & 0x40) == 0) {
            if ((*((eax + 0xd)) & 8) != 0) {
                goto label_0;
            }
            if (eax < esi) {
                goto label_1;
            }
            if (eax >= 0x26a) {
                goto label_0;
            }
            edx = 0;
        }
label_0:
        fcn_00010a07 ();
        ebx++;
label_1:
        eax = ecx;
    }
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x10a07 */
#include <stdint.h>
 
uint32_t fcn_00010a07 (void) {
    ebx = eax;
    eax = fcn_00010ad2 ();
    edx = eax;
    eax = ebx;
    fcn_00011488 ();
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x10ad2 */
#include <stdint.h>
 
int32_t fcn_00010ad2 (void) {
    do {
        return;
        ecx = eax;
        if (*((eax + 0xc)) == 0) {
            eax = 0xffffffff;
        } else {
            ah = *((eax + 0xd));
            esi = 0;
            if ((ah & 0x10) != 0) {
                eax = ecx;
                eax = fcn_00011aa8 ();
                esi = eax;
            }
            eax = ecx;
            eax = fcn_00011ba6 ();
            if (eax != -1) {
                edx = eax;
                edi = *((ecx + 0x10));
                ebx = 0;
                eax = edi;
                fcn_00011be9 ();
            }
            if (ebp != 0) {
                eax = *((ecx + 0x10));
                eax = fcn_00011c4e ();
                esi |= eax;
            }
            if ((*((ecx + 0xc)) & 8) != 0) {
                eax = *((ecx + 8));
                eax = *((eax + 8));
                fcn_00011c83 ();
                eax = *((ecx + 8));
                *((eax + 8)) = 0;
            }
            if ((*((ecx + 0xd)) & 8) != 0) {
                eax = *((ecx + 8));
                edx = 0;
                dl = *((eax + 0x14));
                eax = esp;
                fcn_00010a28 ();
                eax = esp;
                fcn_00011d7e ();
            }
            eax = esi;
        }
    } while (1);
}
/* r2dec pseudo code output */
/* synth @ 0x11488 */
#include <stdint.h>
 
int32_t fcn_00011488 (void) {
    ebx = eax;
    edx = 0xca0;
    do {
        eax = *(edx);
        if (eax == 0) {
            goto label_0;
        }
        ecx = *((eax + 4));
        if (ebx == ecx) {
            goto label_1;
        }
        edx = eax;
    } while (1);
label_1:
    cl = *((ecx + 0xc));
    cl |= 3;
    *((ebx + 0xc)) = cl;
    ebx = *(eax);
    *(edx) = ebx;
    edx = *(0xca4);
    *(0xca4) = eax;
    *(eax) = edx;
label_0:
    ecx = edx;
    ebx = edx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x12fea */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00012fea (void) {
    ebx = eax;
    al = 0;
    ah = 0x44;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    edx = rotate_left32 (edx, 1);
    edx = rotate_right32 (edx, 1);
    al = ((dl & 0x80) != 0) ? 1 : 0;
    eax &= 0xff;
    /* [03] -r-x section size 4096 named obj.1.page.3 */
    *(eax)++;
    *(eax) += al;
    ecx = edx;
    ebx = edx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11f2f */
#include <stdint.h>
 
int32_t fcn_00011f2f (void) {
    esi = 0xb86;
    dh = al;
label_0:
    eax = 0xb3e;
    ebx = esi;
    dl = dh;
    do {
        if (eax >= 0xb86) {
            goto label_1;
        }
        if (*(eax) != 2) {
            ch = *((eax + 1));
            if (dl < ch) {
                goto label_2;
            }
            ebx = eax;
            dl = ch;
        }
label_2:
        eax += 6;
    } while (1);
label_1:
    if (ebx != 0xb86) {
        eax = ebx + 2;
        fcn_00011f23 ();
        *(ebx) = 2;
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11ec6 */
#include <stdint.h>
 
uint32_t fcn_00011ec6 (void) {
    edx = *(0x1bc);
    edx += 3;
    dl &= 0xfc;
    eax = fcn_00013811 ();
    if (edx < eax) {
        fcn_000104c6 ();
        eax = *(0x1bc);
        eax += 3;
        al &= 0xfc;
        eax = esp;
    } else {
        eax = 0;
    }
    edx = *(0x1bc);
    eax += edx;
    *(0x1c0) = eax;
    fcn_0001381a ();
    edx = *(0xce8);
    eax = *(0xce4);
    fcn_00010010 ();
    fcn_00013876 ();
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1113c */
#include <stdint.h>
 
uint32_t fcn_0001113c (int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h) {
    eax = esp + 0x20;
    ecx = esp;
    ebx = *((esp + 0x1c));
    edx = *((esp + 0x18));
    *(esp) = eax;
    eax = *((esp + 0x14));
    fcn_00011163 ();
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11163 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00011163 (void) {
    int32_t var_1h;
    uint32_t var_4h;
    uint32_t var_8h;
    uint32_t var_ch;
    int32_t var_10h;
    esi = eax;
    *(esp) = edx;
    *((esp + 4)) = ebx;
    do {
        if (*(esi) != 0x20) {
            goto label_2;
        }
        esi++;
    } while (1);
label_2:
    eax = *(esp);
    eax &= 0x83;
    *((esp + 0xc)) = eax;
    dl = *((esp + 4));
    al = *((esp + 0xc));
    al |= dl;
    edx = esi;
    edi = 0xffffffff;
    ah = 0x3d;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    *((esp + 8)) = eax;
    if (eax < 0) {
        goto label_3;
    }
    edi = 0;
    edx = *(0x588);
    di = *((esp + 8));
    if (edi < edx) {
        goto label_3;
    }
label_1:
    ebx = edi;
    ah = 0x3e;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    eax = 0xb;
    do {
        fcn_000110d4 ();
        eax = 0xffffffff;
        goto label_4;
label_3:
        dh = *(esp);
        if ((dh & 3) == 0) {
            goto label_5;
        }
        if (edi == -1) {
            goto label_5;
        }
        eax = edi;
        eax = fcn_00012fea ();
        if (eax != 0) {
            goto label_5;
        }
        if ((*((esp + 1)) & 4) == 0) {
            goto label_6;
        }
        if ((dh & 0x20) == 0) {
            goto label_6;
        }
        ebx = edi;
        ah = 0x3e;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        eax = rotate_left32 (eax, 1);
        eax = rotate_right32 (eax, 1);
        eax = 7;
    } while (1);
label_6:
    if ((*(esp) & 0x40) == 0) {
        goto label_5;
    }
    edx = esp + 0x10;
    ebx = edi;
    ecx = 0;
    ah = 0x40;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    *((esp + 8)) = eax;
    if (eax >= 0) {
        goto label_5;
    }
    ebx = edi;
    ah = 0x3e;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    do {
label_0:
        eax = 0;
        ax = *((esp + 8));
        fcn_00013013 ();
        goto label_4;
label_5:
        if (edi != -1) {
            goto label_7;
        }
    } while ((*(esp) & 0x20) == 0);
    if (*((esp + 8)) != 2) {
        goto label_0;
    }
    ebx = *(ebp);
    ebx += 4;
    *(ebp) = ebx;
    eax = *((ebx - 4));
    *(ebp) = 0;
    if (eax == 0) {
        eax = 0x180;
    }
    edx = *(0x5f4);
    edx = ~edx;
    eax &= edx;
    ecx = 0;
    if ((al & 0x80) == 0) {
        ecx = 1;
    }
    ecx &= 0xff;
    edx = esi;
    ah = 0x3c;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    *((esp + 8)) = eax;
    if (eax < 0) {
        goto label_0;
    }
    edi = 0;
    ecx = *(0x588);
    di = *((esp + 8));
    if (edi >= ecx) {
        goto label_1;
    }
    if (*((esp + 4)) == 0) {
        goto label_7;
    }
    ebx = edi;
    ah = 0x3e;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    *((esp + 8)) = eax;
    if (eax < 0) {
        goto label_0;
    }
    al = *((esp + 0xc));
    ah = *((esp + 4));
    edx = esi;
    al |= ah;
    ah = 0x3d;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    *((esp + 8)) = eax;
    if (eax < 0) {
        goto label_0;
    }
    edi = 0;
    di = *((esp + 8));
label_7:
    eax = edi;
    al = fcn_00012f74 ();
    al &= 0x3c;
    edx = eax;
    eax = edi;
    eax = fcn_00012fea ();
    if (eax != 0) {
        dh |= 0x20;
    }
    if (*((esp + 0xc)) == 2) {
        dl |= 3;
    }
    if (*((esp + 0xc)) == 0) {
        dl |= 1;
    }
    if (*((esp + 0xc)) == 1) {
        dl |= 2;
    }
    if ((*(esp) & 0x10) != 0) {
        dl |= 0x80;
    }
    eax = edx;
    cl = *((esp + 1));
    al |= 0x40;
    if ((cl & 3) != 0) {
        if ((cl & 2) == 0) {
            goto label_8;
        }
    } else {
        if (*(0x3f1) != 0x200) {
            goto label_8;
        }
    }
    edx = eax;
label_8:
    eax = edi;
    fcn_00012fc9 ();
    eax = edi;
label_4:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x12f74 */
#include <stdint.h>
 
int32_t fcn_00012f74 (void) {
    edx = eax;
    if (eax >= *(0x588)) {
        eax = 0;
        ecx = edx;
        ebx = edx;
        return eax;
    }
    if (eax < 5) {
        ebx = eax;
        eax = *(0x5dc);
        ebx <<= 2;
        eax += ebx;
        cl = *((eax + 1));
        if ((cl & 0x40) != 0) {
            goto label_0;
        }
        ch = cl;
        ch |= 0x40;
        *((eax + 1)) = ch;
        eax = edx;
        eax = fcn_00012fea ();
        if (eax == 0) {
            goto label_0;
        }
        eax = *(0x5dc);
        *((ebx + eax + 1)) |= 0x20;
    }
label_0:
    eax = *(0x5dc);
    eax = *((eax + edx*4));
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x12fc9 */
#include <stdint.h>
 
int32_t fcn_00012fc9 (void) {
    eax <<= 2;
    if (edx != 0) {
        ebx = *(0x5dc);
        dh |= 0x40;
        *((ebx + eax)) = edx;
        return eax;
    }
    ebx = *(0x5dc);
    *((ebx + eax)) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x114df */
#include <stdint.h>
 
int32_t fcn_000114df (void) {
    if (eax <= *((edx + 4))) {
        ebx = *((edx + 8));
        ecx = *(edx);
        ebx = *((ebx + 8));
        ebx -= ecx;
        if (eax < ebx) {
            goto label_0;
        }
        bl = *((edx + 0xc));
        esi = *(edx);
        edi = *((edx + 4));
        bl &= 0xef;
        esi += eax;
        *((edx + 0xc)) = bl;
        edi -= eax;
        *(edx) = esi;
        eax = 0;
        *((edx + 4)) = edi;
        esi = edi;
        ecx = edi;
        ebx = edi;
        return eax;
    }
label_0:
    eax = 1;
    esi = edi;
    ecx = edi;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1151e */
#include <stdint.h>
 
int32_t fcn_0001151e (void) {
    *((eax + 0xc)) &= 0xef;
    edx = *((eax + 8));
    edx = *((edx + 8));
    *((eax + 4)) = 0;
    *(eax) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x13170 */
#include <stdint.h>
 
void fcn_00013170 (void) {
    ebx = 1;
    edx = 0;
    fcn_00011be9 ();
}
/* r2dec pseudo code output */
/* synth @ 0x11643 */
#include <stdint.h>
 
int32_t fcn_00011643 (void) {
    edx = eax;
    if ((*((eax + 0xd)) & 0x20) == 0) {
        eax = *((edx + 0x10));
        eax = fcn_00012fea ();
        if (eax == 0) {
            goto label_0;
        }
        bl = *((edx + 0xd));
        bl |= 0x20;
        *((edx + 0xd)) = bl;
        if ((bl & 7) != 0) {
            goto label_0;
        }
        cl = bl;
        cl |= 2;
        *((edx + 0xd)) = cl;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x117c2 */
#include <stdint.h>
 
uint32_t fcn_000117c2 (void) {
    edx = eax;
    eax = fcn_000117f1 ();
    if (eax == 0) {
        eax = 0xffffffff;
        return eax;
    }
    ebx = *((edx + 4));
    ecx = *(edx);
    ebx--;
    ecx++;
    *((edx + 4)) = ebx;
    *(edx) = ecx;
    al = *((ecx - 1));
    eax &= 0xff;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x117f1 */
#include <stdint.h>
 
int32_t fcn_000117f1 (void) {
    ecx = eax;
    eax = *((eax + 8));
    if (*((eax + 8)) == 0) {
        eax = ecx;
        fcn_00011674 ();
    }
    ah = *((ecx + 0xd));
    if ((ah & 0x20) != 0) {
        if ((ah & 6) == 0) {
            goto label_0;
        }
        eax = 0x2000;
        fcn_00013186 ();
    }
label_0:
    dh = *((ecx + 0xc));
    dh &= 0xfb;
    eax = *((ecx + 8));
    *((ecx + 0xc)) = dh;
    eax = *((eax + 8));
    *(ecx) = eax;
    eax = *((ecx + 0xc));
    eax &= 0x2400;
    if (eax == 0x2400) {
        ebx = *((ecx + 0x10));
        if (ebx == 0) {
            *((ecx + 4)) = ebx;
            eax = fcn_000131b5 ();
            edx = eax;
            if (eax == -1) {
                goto label_1;
            }
            eax = *(ecx);
            *(eax) = dl;
            *((ecx + 4)) = 1;
        }
    } else {
        if ((*((ecx + 0xd)) & 4) != 0) {
            ebx = 1;
        } else {
            ebx = *((ecx + 0x14));
        }
        edx = *(ecx);
        eax = *((ecx + 0x10));
        eax = fcn_000116fb ();
        *((ecx + 4)) = eax;
label_1:
        esi = *((ecx + 4));
        if (esi > 0) {
            goto label_2;
        }
        if (esi == 0) {
            *((ecx + 0xc)) |= 0x10;
        } else {
            bh = *((ecx + 0xc));
            *((ecx + 4)) = 0;
            bh |= 0x20;
            *((ecx + 0xc)) = bh;
        }
    }
label_2:
    eax = *((ecx + 4));
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11674 */
#include <stdint.h>
 
int32_t fcn_00011674 (void) {
    edx = eax;
    fcn_00011643 ();
    if (*((edx + 0x14)) == 0) {
        ah = *((edx + 0xd));
        if ((ah & 2) != 0) {
            *((edx + 0x14)) = 0x86;
        } else {
            if ((ah & 4) != 0) {
                *((edx + 0x14)) = 1;
            } else {
                *((edx + 0x14)) = 0x1000;
            }
        }
    }
    eax = *((edx + 0x14));
    eax = fcn_00013077 ();
    ebx = *((edx + 8));
    *((ebx + 8)) = eax;
    eax = *((edx + 8));
    if (*((eax + 8)) == 0) {
        cl = *((edx + 0xd));
        cl &= 0xf8;
        *((edx + 0xd)) = cl;
        ch = cl;
        eax = *((edx + 8));
        ch |= 4;
        ebx = edx + 0x18;
        *((edx + 0xd)) = ch;
        *((eax + 8)) = ebx;
        *((edx + 0x14)) = 1;
    } else {
        *((edx + 0xc)) |= 8;
    }
    eax = *((edx + 8));
    eax = *((eax + 8));
    *((edx + 4)) = 0;
    *(edx) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x13186 */
#include <stdint.h>
 
int32_t fcn_00013186 (void) {
    ecx = eax;
    edx = *(0xca0);
    ebx = 0;
    while (edx != 0) {
        eax = *((edx + 4));
        if ((*((eax + 0xc)) & ecx) != 0) {
            ebx++;
            if ((*((eax + 0xd)) & 0x10) == 0) {
                goto label_0;
            }
            fcn_00011aa8 ();
        }
label_0:
        edx = *(edx);
    }
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x131b5 */
#include <stdint.h>
 
int32_t fcn_000131b5 (void) {
    edx = 0;
    eax = *(0x1c4);
    *(0x1c4) = edx;
    if (eax == 0) {
        ah = 1;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        eax &= 0xff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x116fb */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_000116fb (void) {
    ecx = ebx;
    ebx = eax;
    ah = 0x3f;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    edx = eax;
    if (eax < 0) {
        eax = 0;
        ax = dx;
        fcn_00013013 ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x10a28 */
#include <stdint.h>
 
uint32_t fcn_00010a28 (void) {
    *(esp) = edx;
    eax = fcn_000118e7 ();
    ebx = eax;
    ebx >>= 0x10;
    edi = ebp;
    ebx |= eax;
    eax = fcn_000119e0 ();
    esi = eax;
    do {
        al = *(esi);
        *(edi) = al;
        if (al == 0) {
            goto label_0;
        }
        al = *((esi + 1));
        esi += 2;
        *((edi + 1)) = al;
        edi += 2;
    } while (al != 0);
label_0:
    eax = ds;
    es = ds;
    ecx -= ecx;
    ecx--;
    eax = 0;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    ecx--;
    ecx += ebp;
    edx = ecx + 4;
    *(ecx) = 0x74;
    esi = ecx;
    do {
        eax = ebx;
        eax &= 0xf;
        al = fcn_00010a1c ();
        *(edx) = al;
        edx--;
        ebx >>= 4;
    } while (edx != esi);
    eax = *(esp);
    eax >>= 4;
    eax &= 0xf;
    *((ecx + 5)) = 0x5f;
    al = fcn_00010a1c ();
    *((ecx + 6)) = al;
    eax = *(esp);
    eax &= 0xf;
    al = fcn_00010a1c ();
    *((ecx + 8)) = 0x2e;
    *((ecx + 9)) = 0x74;
    *((ecx + 0xa)) = 0x6d;
    *((ecx + 0xb)) = 0x70;
    *((ecx + 0xc)) = 0;
    *((ecx + 7)) = al;
}
/* r2dec pseudo code output */
/* synth @ 0x131d2 */
#include <stdint.h>
 
int32_t fcn_000131d2 (void) {
    ebx = edx;
    edx = eax;
    eax = 0;
    ah = 0x43;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (? >= ?) {
        if ((bl & 2) == 0) {
            goto label_0;
        }
        if ((cl & 1) == 0) {
            goto label_0;
        }
        al = 0;
        ah = 6;
        __asm ("stc");
    }
label_0:
    ecx -= ecx;
    cx = ax;
    eax = ecx;
    ebx = ecx;
    edx = eax;
    ebx &= 0xffff;
    edx >>= 0x10;
    eax = ebx;
    fcn_00013008 ();
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x10731 */
#include <stdint.h>
 
void fcn_00010731 (void) {
    ebx = 0;
    fcn_000106ed ();
}
/* r2dec pseudo code output */
/* synth @ 0x106ed */
#include <stdint.h>
 
int32_t fcn_000106ed (void) {
    int32_t var_8h;
    esi = eax;
    ecx = edx;
    edi = ebx;
    edx = esp;
    eax = ecx;
    eax = fcn_000104f6 ();
    ebx = eax;
    if (eax != 0) {
        eax = 0;
        eax = fcn_000113df ();
        edx = eax;
        if (eax != 0) {
            edx ^= eax;
            eax = esi;
            dl = *(ecx);
            ecx = *((esp + 8));
            eax = fcn_00010611 (edi, eax);
            edx = eax;
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x104f6 */
#include <stdint.h>
 
int32_t fcn_000104f6 (void) {
    ebx = eax;
    ecx = 1;
    ebp = 0;
    esi = 0;
    edi = 0;
    *(esp) = ebp;
    if (edx != 0) {
        if (ecx == *(0x1e4)) {
            *(edx) = ecx;
        } else {
            *(edx) = ebp;
        }
    }
    al = *(ebx);
    if (al >= 0x72) {
        if (al > 0x72) {
            if (al != 0x77) {
            } else {
                if (al == 0x61) {
                    goto label_2;
                }
            } else {
                goto label_0;
            }
        }
        goto label_0;
label_2:
        goto label_0;
    }
    eax = 9;
    fcn_000110d4 ();
    ecx = 0;
    goto label_3;
    do {
label_0:
        ebx++;
        al = *(ebx);
        if (al == 0) {
            goto label_4;
        }
        if (ecx == 0) {
            goto label_4;
        }
        if (al < 0x63) {
            goto label_5;
        }
        if (al <= 0x63) {
            goto label_6;
        }
    } while (al < 0x6e);
    if (al <= 0x6e) {
        goto label_7;
    }
    if (al == 0x74) {
        goto label_8;
    }
    goto label_0;
label_5:
    if (al < 0x2b) {
        goto label_0;
    }
    if (al > 0x2b) {
        if (al == 0x62) {
            goto label_9;
        }
        goto label_0;
    }
    while (esi != 0) {
label_1:
        ecx = 0;
        goto label_0;
        ah = *(esp);
        ah |= 3;
        *(esp) = ah;
        goto label_0;
label_8:
    }
    esi = 1;
    goto label_0;
label_9:
    if (esi != 0) {
        goto label_1;
    }
    al = *(esp);
    al |= 0x40;
    esi = 1;
    *(esp) = al;
    goto label_0;
label_6:
    if (edi != 0) {
        goto label_1;
    }
    ah = *(edx);
    ah |= 1;
    edi = 1;
    *(edx) = ah;
    goto label_0;
label_7:
    if (edi != 0) {
        goto label_1;
    }
    al = *(edx);
    al &= 0xfe;
    edi = 1;
    *(edx) = al;
    goto label_0;
label_4:
    if (esi == 0) {
        if (*(0x3f1) != 0x200) {
            goto label_10;
        }
    }
label_10:
    ecx = *(esp);
label_3:
    eax = *(esp);
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x113df */
#include <stdint.h>
 
int32_t fcn_000113df (void) {
    esi = *(0xca4);
    if (esi != 0) {
        ecx = *((esi + 4));
        edi = *((ecx + 0xc));
        eax = *(esi);
        edi &= 0x4003;
        *(0xca4) = eax;
        di |= 3;
        goto label_0;
    }
    ecx = 0x1e8;
    while (ecx < 0x3f0) {
        if ((*((ecx + 0xc)) & 3) == 0) {
            eax = 0x15;
            eax = fcn_00013077 ();
            esi = eax;
            if (eax == 0) {
                goto label_1;
            }
            edi = 3;
            goto label_0;
        }
        ecx += 0x1a;
    }
    eax = 0x2f;
    edi = 0x4003;
    eax = fcn_00013077 ();
    esi = eax;
    if (eax != 0) {
        ecx = eax + 0x15;
label_0:
        ebx = 0x1a;
        eax = ecx;
        edx = 0;
        fcn_00013158 ();
        *((ecx + 0xc)) = edi;
        *((esi + 4)) = ecx;
        eax = *(0xca0);
        *((ecx + 8)) = esi;
        *(0xca0) = esi;
        *(esi) = eax;
        eax = ecx;
    } else {
label_1:
        eax = 5;
        eax = fcn_000110d4 ();
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x10611 */
#include <stdint.h>
 
int32_t fcn_00010611 (int32_t arg_14h_2, int32_t arg_14h) {
    esi = eax;
    al = dl;
    edx = ecx;
    ecx = *((esp + 0x14));
    *((ecx + 0xc)) &= 0xfc;
    *((ecx + 0xc)) |= ebx;
    eax &= 0xff;
    al = fcn_0001110a ();
    if (al == 0x72) {
        eax = 0;
        if ((bl & 2) != 0) {
            eax = 2;
        }
        if ((bl & 0x40) != 0) {
            ah |= 2;
        } else {
            ah |= 1;
        }
        edi = *((esp + 0x14));
    } else {
        al = ((bl & 1) != 0) ? 1 : 0;
        eax &= 0xff;
        eax += 0x21;
        if ((bl & 0x80) != 0) {
            al |= 0x10;
        } else {
            al |= 0x40;
        }
        if ((bl & 0x40) != 0) {
            ah |= 2;
        } else {
            ah |= 1;
        }
        ebp = *((esp + 0x14));
    }
    eax = fcn_0001113c (esi, eax, ebp, 0x180);
    *((ecx + 0x10)) = eax;
    if (*((ecx + 0x10)) == -1) {
        eax = ecx;
        eax = fcn_00011488 ();
        eax = 0;
    } else {
        *((ecx + 4)) = 0;
        eax = *((ecx + 8));
        *((ecx + 0x14)) = 0;
        *((eax + 0xc)) = 0;
        eax = *((ecx + 8));
        *((eax + 0x10)) = edx;
        eax = *((ecx + 8));
        *((eax + 8)) = 0;
        if ((bl & 0x80) != 0) {
            ebx = 2;
            eax = ecx;
            edx = 0;
            fcn_00011534 ();
        }
        eax = ecx;
        fcn_00011643 ();
        eax = ecx;
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x109da */
#include <stdint.h>
 
int32_t fcn_000109da (void) {
    ebx = eax;
    eax = *(0xca0);
    do {
        if (eax == 0) {
            eax = 0xffffffff;
            ebx = edx;
            return eax;
        }
        if (ebx == *((eax + 4))) {
            goto label_0;
        }
        eax = *(eax);
    } while (1);
label_0:
    edx = 1;
    eax = ebx;
    fcn_00010a07 ();
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1320d */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_0001320d (void) {
    ecx = ds;
    edi = edx;
    edx = eax;
    es = ecx;
    ah = 0x56;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    ebx = es;
    edx = eax;
    if (eax < 0) {
        eax = 0;
        ax = dx;
        eax = fcn_00013013 ();
        return eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1323b */
#include <stdint.h>
 
int32_t fcn_0001323b (void) {
    esi = *(0xd70);
    if (esi == 0) {
        goto label_0;
    }
    if (eax == 0) {
        goto label_0;
    }
    edi = eax;
    eax = ds;
    es = ds;
    ecx -= ecx;
    ecx--;
    eax = 0;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    ecx--;
    edi = ecx;
    while (ecx != 0) {
        ebx = edi;
        edx = ebp;
        eax = ecx;
        eax = fcn_00017973 ();
        if (eax == 0) {
            if (*((ecx + edi)) != 0x3d) {
                goto label_1;
            }
            eax = edi + 1;
            eax += ecx;
            goto label_2;
        }
label_1:
        esi += 4;
        ecx = *(esi);
    }
label_0:
    eax = 0;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x13295 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
uint32_t fcn_00013295 (void) {
    int32_t var_4h;
    uint32_t var_8h;
    int32_t var_98h;
    eax = fcn_000104b6 (0xb0);
    if (eax == 0) {
        ecx = 0x90;
        eax = 0x90;
        *(esp) = ecx;
        eax = fcn_00013077 ();
        *((esp + 0x98)) = eax;
        if (eax == 0) {
            eax = 5;
            goto label_5;
        }
        *((esp + 4)) = eax;
    }
    if (edx != 0) {
        ah = *(edx);
        if (ah != 0) {
            goto label_6;
        }
    }
    edx = *(esp);
    eax = *((esp + 4));
    fcn_00013564 ();
    goto label_7;
label_6:
    ebx = *((esp + 4));
    esi = *(esp);
    if (esi >= 3) {
        goto label_8;
    }
label_0:
    eax = *((esp + 0x98));
    fcn_00011c83 ();
    eax = 0xe;
    do {
label_5:
        eax = fcn_000110d4 ();
label_2:
        eax = 0;
        goto label_7;
label_8:
        edi = esi - 2;
        al = ah;
        *(esp) = edi;
        al++;
        eax &= 0xff;
        if ((*((eax + 0x6a4)) & 0xc0) != 0) {
            if (*((edx + 1)) == 0x3a) {
                eax = 0;
                al = *(edx);
                fcn_0001110a ();
                ecx = eax - 0x60;
                al = *(edx);
                *(ebx) = al;
                al = *((edx + 1));
                ebp = edx + 2;
                *((ebx + 1)) = al;
            }
        } else {
            ecx = 0;
            ah = 0x19;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            cl = al;
            ecx++;
            al = cl;
            *((ebx + 1)) = 0x3a;
            al += 0x40;
            *(ebx) = al;
        }
        al = *(ebp);
        ebx += 2;
        if (al == 0x2f) {
            goto label_9;
        }
        if (al == 0x5c) {
            goto label_9;
        }
        esi = esp + 8;
        dl = cl;
        ah = 0x47;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        eax = rotate_left32 (eax, 1);
        eax = rotate_right32 (eax, 1);
        if (eax >= 0) {
            goto label_10;
        }
        eax = *((esp + 0x98));
        fcn_00011c83 ();
        eax = 1;
    } while (1);
label_10:
    edi = esp + 8;
    eax = ds;
    es = ds;
    ecx -= ecx;
    ecx--;
    eax = 0;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    ecx--;
    edx = ecx;
    if (*((esp + 8)) == 0x5c) {
        goto label_11;
    }
    eax = *(esp);
    if (eax < 2) {
        goto label_0;
    }
    ecx = eax - 1;
    *(ebx) = 0x5c;
    *(esp) = ecx;
    ebx++;
label_11:
    esi = *(esp);
    eax = edx + 1;
    if (eax > esi) {
        goto label_0;
    }
    edi = esi;
    edi -= edx;
    esi = esp + 8;
    *(esp) = edi;
    edi = ebx;
    ebx += edx;
    do {
        al = *(esi);
        *(edi) = al;
        if (al == 0) {
            goto label_12;
        }
        al = *((esi + 1));
        esi += 2;
        *((edi + 1)) = al;
        edi += 2;
    } while (al != 0);
label_12:
    if (*((ebx - 1)) == 0x5c) {
        goto label_1;
    }
    eax = *(esp);
    if (eax < 2) {
        goto label_0;
    }
    edx = eax - 1;
    *(ebx) = 0x5c;
    *(esp) = edx;
    ebx++;
label_1:
    if (*(ebp) == 0) {
        goto label_13;
    }
    edx = *(esp);
    esi = ebx + 1;
    eax = ebp + 1;
    cl = *(ebp);
    edx--;
    if (cl == 0x2e) {
        goto label_14;
    }
    if (*(esp) < 2) {
        goto label_0;
    }
    *(esp) = edx;
    cl = *(ebp);
label_4:
    *(ebx) = cl;
    ebx = esi;
    goto label_1;
label_14:
    ch = *(eax);
    if (ch != 0x2f) {
        if (ch != 0x5c) {
            goto label_15;
        }
    }
    dh = *((ebx - 1));
    if (dh != 0x2f) {
        if (dh == 0x5c) {
            goto label_16;
        }
        *(ebx) = 0x5c;
        ebx++;
    }
label_16:
    ebp++;
    goto label_1;
label_15:
    if (ch == 0) {
        goto label_13;
    }
    if (ch != cl) {
        goto label_17;
    }
    ebp = eax + 1;
    ch = *(ebp);
    if (ch != 0x2f) {
        if (ch != 0x5c) {
            goto label_18;
        }
    }
    ebp++;
label_18:
    ah = *((ebx - 1));
    if (ah == 0x2f) {
        goto label_19;
    }
    while (ebx < esi) {
        eax = *((esp + 0x98));
        fcn_00011c83 ();
        goto label_2;
label_19:
        esi = *((esp + 4));
        ebx -= 2;
label_3:
    }
    ch = *(ebx);
    if (ch != 0x2f) {
        if (ch == 0x5c) {
            goto label_20;
        }
        if (ch == 0x3a) {
            ebx++;
            *(ebx) = 0x5c;
        } else {
            ebx--;
            goto label_3;
        }
    }
label_20:
    ebx++;
    *(ebx) = 0;
    goto label_1;
label_17:
    if (*(esp) < 2) {
        goto label_0;
    }
    *(esp) = edx;
    goto label_4;
label_13:
    *(ebx) = 0;
    goto label_21;
label_9:
    edi = ebp;
    esi = *(esp);
    eax = ds;
    es = ds;
    ecx -= ecx;
    ecx--;
    eax = 0;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    ecx--;
    ecx++;
    if (ecx > esi) {
        goto label_0;
    }
    esi = ebp;
    edi = ebx;
    do {
        al = *(esi);
        *(edi) = al;
        if (al == 0) {
            goto label_22;
        }
        al = *((esi + 1));
        esi += 2;
        *((edi + 1)) = al;
        edi += 2;
    } while (al != 0);
label_22:
label_21:
    eax = *((esp + 4));
    while (dl != 0) {
        if (dl == 0x2f) {
            *(eax) = 0x5c;
        }
        eax++;
        dl = *(eax);
    }
    eax = *((esp + 4));
label_7:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11d83 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
uint32_t fcn_00011d83 (void) {
    esi = eax;
    edi = ebx;
    al = fcn_00012f74 ();
    if ((al & 0x80) == 0) {
        goto label_0;
    }
    al = 2;
    ebx = esi;
    edx = 0;
    ah = 0x42;
    ecx = edx;
    ecx >>= 0x10;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    dx = rotate_left16 (dx, 1);
    dx = rotate_right16 (dx, 1);
    edx <<= 0x10;
    dx = ax;
    *(esp) = edx;
    while (eax < 0) {
        eax = 0;
        ax = *(esp);
        eax = fcn_00013013 ();
        goto label_1;
label_0:
        ecx = edi;
        edx = ebp;
        ebx = esi;
        ah = 0x40;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        eax = rotate_left32 (eax, 1);
        eax = rotate_right32 (eax, 1);
        *(esp) = eax;
        edx = eax;
    }
    if (eax != edi) {
        eax = 0xc;
        fcn_000110d4 ();
    }
    eax = edx;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x135f4 */
#include <stdint.h>
 
void fcn_000135f4 (void) {
    return void (*0x17a19)() ();
}
/* r2dec pseudo code output */
/* synth @ 0x17a19 */
#include <stdint.h>
 
void loc_00017a19 (void) {
    bx = ax;
    ah = 0x68;
    __asm ("clc");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    fcn_00018528 ();
}
/* r2dec pseudo code output */
/* synth @ 0x135f9 */
#include <stdint.h>
 
uint32_t fcn_000135f9 (void) {
    if (eax != 0) {
        void (*0x11aa8)() ();
    }
    eax = fcn_00013181 ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x136c0 */
#include <stdint.h>
 
uint32_t fcn_000136c0 (void) {
    ecx = ebx;
    if (eax == 0) {
        goto label_0;
    }
    ebx = eax - 4;
    if ((*(ebx) & 1) == 0) {
        goto label_0;
    }
    edx = *(ebx);
    dl &= 0xfe;
    eax = ebx + edx;
    esi = ecx;
    if ((*(eax) & 1) == 0) {
        edi = *(eax);
        edx += edi;
        *(ebx) = edx;
        if (eax == *((ecx + 0xc))) {
            *((ecx + 0xc)) = ebx;
        }
        edx = *((eax + 4));
        eax = *((eax + 8));
        *((edx + 8)) = eax;
        *((eax + 4)) = edx;
        *((esi + 0x1c))--;
        goto label_1;
    }
    *(ebx) = edx;
    eax = *((ecx + 0xc));
    if (ebx < eax) {
        if (ebx > *((eax + 4))) {
            goto label_1;
        }
        eax = *((ecx + 0x28));
        if (ebx < eax) {
            goto label_1;
        }
    } else {
        eax = *((eax + 8));
        if (ebx < eax) {
            goto label_1;
        }
        eax = ecx + 0x20;
        edx = *((eax + 4));
        if (ebx > edx) {
            goto label_1;
        }
    }
    edi = *((esi + 0x1c));
    eax = *((esi + 0x18));
    edx = 0;
    ecx = edi + 1;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    ecx = eax;
    if (eax >= edi) {
        goto label_2;
    }
    eax = *((esi + 0x18));
    eax -= edi;
    ecx += ecx;
    if (eax <= edi) {
        ecx = 0xffffffff;
    }
    eax = *(ebx);
    eax += ebx;
    do {
        edx = *(eax);
        if ((dl & 1) == 0) {
            goto label_1;
        }
        if (edx == -1) {
            goto label_2;
        }
        dl &= 0xfe;
        eax += edx;
        ecx--;
    } while (ecx != 0);
label_2:
    eax = *((esi + 0xc));
    if (ebx >= eax) {
        goto label_3;
    }
    eax = *((esi + 0x28));
    do {
label_3:
        if (ebx < eax) {
            goto label_1;
        }
        eax = *((eax + 8));
        if (ebx < eax) {
            goto label_1;
        }
        eax = *((eax + 8));
        if (ebx < eax) {
            goto label_1;
        }
        eax = *((eax + 8));
    } while (1);
label_1:
    edx = *((eax + 4));
    edi = *(edx);
    edi += edx;
    ecx = *(ebx);
    if (edi == ebx) {
        ebp = *(edx);
        ecx += ebp;
        *(edx) = ecx;
        if (ebx == *((esi + 0xc))) {
            *((esi + 0xc)) = edx;
        }
        ebx = edx;
    } else {
        *((esi + 0x1c))++;
        *((ebx + 8)) = eax;
        *((ebx + 4)) = edx;
        *((edx + 8)) = ebx;
        *((eax + 4)) = ebx;
    }
    edx = *((esi + 0x18));
    edx--;
    edi = *((esi + 0xc));
    *((esi + 0x18)) = edx;
    if (ebx < edi) {
        if (ecx <= *((esi + 0x10))) {
            goto label_4;
        }
        *((esi + 0x10)) = ecx;
    }
label_4:
    if (ecx > *((esi + 0x14))) {
        *((esi + 0x14)) = ecx;
    }
label_0:
    edi = ebp;
    esi = ebp;
    ecx = ebp;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x13811 */
#include <stdint.h>
 
int32_t fcn_00013811 (void) {
    eax = esp;
    eax -= *(0x1b4);
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x104c6 */
#include <stdint.h>
 
void fcn_000104c6 (void) {
}
/* r2dec pseudo code output */
/* synth @ 0x1381a */
#include <stdint.h>
 
uint32_t fcn_0001381a (void) {
    edx = 0x8000;
    ah = *(0x1d2);
    *(0x7a8) = edx;
    if (ah >= 2) {
        if (ah <= 8) {
            goto label_0;
        }
    }
    eax = fcn_00017b45 ();
    if (eax == 1) {
        edx = 0x106b;
        eax = 0x1060;
        edx -= 0x1060;
        di = dx;
        edx >>= 0x10;
        si = dx;
        bx = ax;
        eax >>= 0x10;
        cx = ax;
        ax = 0x600;
        eax = syscall_31h (eax, ebx, ecx, edx, esi, edi, edp);
        ax -= ax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x10010 */
#include <stdint.h>
 
int32_t fcn_00010010 (void) {
    int32_t var_19ch;
    int32_t var_198h;
    int32_t var_194h;
    int32_t var_18ch;
    int32_t var_148h;
    int32_t var_144h;
    int32_t var_128h;
    int32_t var_108h;
    int32_t var_e8h;
    int32_t var_c8h;
    int32_t var_a8h;
    int32_t var_88h;
    int32_t var_68h;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    fcn_000104b6 (0x1b8);
    al = 0x13;
    ah = 0;
    ah = 0;
    /* BIOS: video service */
    eax = syscall_10h (ebx, ecx, edx, esi, edi, edp);
    edx = 4;
    eax = 7;
    eax = fcn_00010731 ();
    *((ebp - 0x44)) = eax;
    ecx = *((ebp - 0x44));
    ebx = 1;
    edx = 4;
    eax = ebp - 0x40;
    fcn_000107f4 ();
    ecx = *((ebp - 0x44));
    ebx = 1;
    edx = 4;
    eax = ebp - 0x3c;
    fcn_000107f4 ();
    ecx = *((ebp - 0x44));
    ebx = 1;
    edx = 4;
    eax = ebp - 0x38;
    fcn_000107f4 ();
    eax = *((ebp - 0x3c));
    eax <<= 3;
    eax = fcn_000109d5 ();
    *((ebp - 0x34)) = eax;
    ecx = *((ebp - 0x44));
    ebx = *((ebp - 0x3c));
    edx = 8;
    eax = *((ebp - 0x34));
    fcn_000107f4 ();
    eax = *((ebp - 0x44));
    fcn_000109da ();
    eax = *((ebp - 0x3c));
    eax--;
    eax *= *((ebp - 0x38));
    eax += eax;
    eax = fcn_000109d5 ();
    *((ebp - 0x30)) = eax;
    ecx = 0x40;
    edi = ebp - 0x144;
    esi = 0xba0;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    *((ebp - 0x128)) = 0x3c05bf37;
    *((ebp - 0x108)) = 0x3c8d2d65;
    *((ebp - 0xe8)) = 0x3d1852aa;
    *((ebp - 0xc8)) = 0x3da72f05;
    *((ebp - 0xa8)) = 0x3e351d9b;
    *((ebp - 0x88)) = 0x3ebe6754;
    *((ebp - 0x68)) = 0x3f0cf1f4;
    *((ebp - 0x48)) = 0x3f683315;
    *((ebp - 0x20)) = 0;
    *((ebp - 0x1c)) = 0x3b161802;
    *((ebp - 0x18)) = 0;
    *((ebp - 0x14)) = 0x3b131f23;
    *((ebp - 0x10)) = 0;
    *((ebp - 0xc)) = 0x3a949b93;
    *((ebp - 8)) = 0;
    goto label_2;
label_1:
    eax = *((ebp - 8));
    *((ebp - 8))++;
label_2:
    eax = *((ebp - 0x3c));
    eax--;
    if (eax <= *((ebp - 8))) {
        goto label_3;
    }
    *((ebp - 0x2c)) = 0;
    while (1) {
        eax = *((ebp - 0x2c));
        *((ebp - 0x2c))++;
        if (*((ebp - 0x2c)) >= 8) {
            goto label_4;
        }
        edx = *((ebp - 0x3c));
        edx *= *((ebp - 0x2c));
        edx += *((ebp - 8));
        edx += *((ebp - 0x34));
        eax = 0;
        al = *(edx);
        *((ebp - 0x148)) = eax;
        *(fp_stack--) = *((ebp - 0x148));
        eax = *((ebp - 0x2c));
        eax <<= 2;
        *((eax + ebp - 0x168)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 0x3c));
        edx *= *((ebp - 0x2c));
        edx += *((ebp - 8));
        edx += *((ebp - 0x34));
        eax = 0;
        al = *((edx + 1));
        *((ebp - 0x148)) = eax;
        *(fp_stack--) = *((ebp - 0x148));
        eax = *((ebp - 0x2c));
        eax <<= 2;
        fp_stack[0] -= *((eax + ebp - 0x168));
        *(fp_stack--) = *((ebp - 0x38));
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        eax = *((ebp - 0x2c));
        eax <<= 2;
        *((eax + ebp - 0x188)) = fp_stack[0];
        fp_stack--;
    }
label_4:
    *((ebp - 0x28)) = 0;
    goto label_5;
label_0:
    eax = *((ebp - 0x28));
    *((ebp - 0x28))++;
label_5:
    eax = *((ebp - 0x28));
    if (eax >= *((ebp - 0x38))) {
        goto label_6;
    }
    *((ebp - 0x18c)) = 0;
    *(fp_stack--) = *((ebp - 0x20));
    fp_stack[0] += *((ebp - 0x18));
    fp_stack[0] += *((ebp - 0x10));
    fp_stack[0] += *(0x10);
    *((ebp - 0x190)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x20));
    fp_stack[0] += *((ebp - 0x1c));
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    do {
        if (*((ebp - 0x20)) < 0x3f800000) {
            goto label_7;
        }
        *(fp_stack--) = *((ebp - 0x20));
        fp_stack[0] += *(0x14);
        *((ebp - 0x20)) = fp_stack[0];
        fp_stack--;
    } while (1);
label_7:
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack[0] += *((ebp - 0x14));
    *((ebp - 0x18)) = fp_stack[0];
    fp_stack--;
    do {
        if (*((ebp - 0x18)) < 0x3f800000) {
            goto label_8;
        }
        *(fp_stack--) = *((ebp - 0x18));
        fp_stack[0] += *(0x18);
        *((ebp - 0x18)) = fp_stack[0];
        fp_stack--;
    } while (1);
label_8:
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += *((ebp - 0xc));
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    do {
        if (*((ebp - 0x10)) < 0x3f800000) {
            goto label_9;
        }
        *(fp_stack--) = *((ebp - 0x10));
        fp_stack[0] += *(0x1c);
        *((ebp - 0x10)) = fp_stack[0];
        fp_stack--;
    } while (1);
label_9:
    *((ebp - 0x2c)) = 0;
    while (1) {
        eax = *((ebp - 0x2c));
        *((ebp - 0x2c))++;
        if (*((ebp - 0x2c)) >= 8) {
            goto label_10;
        }
        eax = *((ebp - 0x2c));
        eax <<= 5;
        edx = ebp - 0x144;
        edx += eax;
        *((ebp - 0x194)) = edx;
        eax = *((ebp - 0x194));
        *(fp_stack--) = *((ebp - 0x190));
        fp_stack[0] -= *((eax + 4));
        eax = *((ebp - 0x194));
        *(fp_stack--) = *(eax);
        eax = *((ebp - 0x194));
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *((eax + 8)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x194));
        *(fp_stack--) = *((eax + 0x1c));
        eax = *((ebp - 0x194));
        fp_stack[0] *= *((eax + 8));
        eax = *((ebp - 0x194));
        fp_stack[0] += *((eax + 4));
        *((eax + 4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x194));
        *(fp_stack--) = *((eax + 0x1c));
        eax = *((ebp - 0x194));
        fp_stack[0] *= *((eax + 4));
        eax = *((ebp - 0x194));
        fp_stack[0] += *(eax);
        *(eax) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x194));
        *(fp_stack--) = *((eax + 8));
        eax = *((ebp - 0x194));
        fp_stack[0] -= *((eax + 0x10));
        eax = *((ebp - 0x194));
        *(fp_stack--) = *((eax + 0xc));
        eax = *((ebp - 0x194));
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *((eax + 0x14)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x194));
        *(fp_stack--) = *((eax + 0x1c));
        eax = *((ebp - 0x194));
        fp_stack[0] *= *((eax + 0x14));
        eax = *((ebp - 0x194));
        fp_stack[0] += *((eax + 0x10));
        *((eax + 0x10)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x194));
        *(fp_stack--) = *((eax + 0x1c));
        eax = *((ebp - 0x194));
        fp_stack[0] *= *((eax + 0x10));
        eax = *((ebp - 0x194));
        fp_stack[0] += *((eax + 0xc));
        *((eax + 0xc)) = fp_stack[0];
        fp_stack--;
        if (*((ebp - 0x2c)) == 7) {
            eax = *((ebp - 0x194));
            *(fp_stack--) = *((eax + 0x14));
            fp_stack[0] *= *(0x20);
            *((ebp - 0x198)) = fp_stack[0];
            fp_stack--;
        } else {
            eax = *((ebp - 0x194));
            eax = *((eax + 0xc));
            *((ebp - 0x198)) = eax;
        }
        eax = *((ebp - 0x2c));
        eax <<= 2;
        *(fp_stack--) = *((eax + ebp - 0x168));
        fp_stack[0] *= *((ebp - 0x198));
        fp_stack[0] += *((ebp - 0x18c));
        *((ebp - 0x18c)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x2c));
        eax <<= 2;
        edx = *((ebp - 0x2c));
        edx <<= 2;
        *(fp_stack--) = *((edx + ebp - 0x188));
        fp_stack[0] += *((eax + ebp - 0x168));
        *((eax + ebp - 0x168)) = fp_stack[0];
        fp_stack--;
    }
label_10:
    *(fp_stack--) = *((ebp - 0x18c));
    fp_stack[0] *= *(0x24);
    *((ebp - 0x18c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x18c));
    fp_status = fp_compare(fp_stack[0], *(0x28));
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (edx < 0) {
        *((ebp - 0x18c)) = 0xc7000000;
    }
    if (*((ebp - 0x18c)) > 0x46fffe00) {
        *((ebp - 0x18c)) = 0x46fffe00;
    }
    *(fp_stack--) = *((ebp - 0x18c));
    fcn_00010b70 ();
    *((ebp - 0x19c)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x19c));
    *((ebp - 0x19c)) = eax;
    edx = *((ebp - 0x38));
    edx *= *((ebp - 8));
    edx += *((ebp - 0x28));
    edx += edx;
    edx += *((ebp - 0x30));
    eax = *((ebp - 0x19c));
    *(edx) = ax;
    goto label_0;
label_6:
    goto label_1;
label_3:
    edx = 0x2c;
    eax = 0x2f;
    eax = fcn_00010731 ();
    *((ebp - 4)) = eax;
    ecx = *((ebp - 4));
    ebx = 2;
    edx = *((ebp - 0x3c));
    edx--;
    edx *= *((ebp - 0x38));
    eax = *((ebp - 0x30));
    fcn_00010b8d ();
    eax = *((ebp - 4));
    fcn_000109da ();
    fcn_00010d6d ();
    eax = *((ebp - 0x30));
    fcn_00010d8a ();
    eax = *((ebp - 0x34));
    fcn_00010d8a ();
    al = 3;
    ah = 0;
    ah = 0;
    /* BIOS: video service */
    eax = syscall_10h (ebx, ecx, edx, esi, edi, edp);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x13876 */
#include <stdint.h>
 
int32_t fcn_00013876 (void) {
    ebx = eax;
    uint32_t (*0x604)(uint32_t, uint32_t) (edx, ebx);
    edx = 0xff;
    eax = 0x10;
    fcn_00011f7b ();
    eax = ebx;
    fcn_00013899 ();
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11f23 */
#include <stdint.h>
 
void fcn_00011f23 (void) {
    if (*(eax) != 0) {
        es = ds;
        uint32_t (*eax)(uint32_t) (ds);
    }
}
/* r2dec pseudo code output */
/* synth @ 0x13b6a */
#include <stdint.h>
 
uint32_t fcn_00013b6a (void) {
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_fh;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    ebx = edx;
    edx = ebp - 0x18;
    eax = fcn_000139d6 ();
    if (eax != 0) {
        goto label_0;
    }
    *((ebp - 0xc)) = eax;
    do {
        *((ebp - 8)) = eax;
        goto label_1;
label_0:
        eax = *((ebp - 0x10));
        ah &= 0x7f;
        eax &= 0xffff;
        if (eax < 0x43ff) {
            goto label_2;
        }
        fcn_000110e7 ();
        if ((*((ebp - 0xf)) & 0x80) != 0) {
            *(fp_stack--) = *(0x170);
            fp_stack[0] = -fp_stack[0];
            *((ebp - 0xc)) = fp_stack[0];
            fp_stack--;
            goto label_1;
        }
        eax = *(0x170);
        *((ebp - 0xc)) = eax;
        eax = *(0x174);
    } while (1);
label_2:
    if (eax < 0x3bcd) {
        edx = 0;
        fcn_000110e7 ();
        *((ebp - 0xc)) = edx;
        *((ebp - 8)) = edx;
    } else {
        edx = ebp - 0xc;
        eax = ebp - 0x18;
        *(fp_stack--) = fp_stack[?];
        *(edx) = fp_stack[0];
        fp_stack--;
    }
label_1:
    *(fp_stack--) = *((ebp - 0xc));
    esp = ebp - 4;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x107f4 */
#include <stdint.h>
 
int32_t fcn_000107f4 (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    if ((*((ecx + 0xc)) & 1) == 0) {
        eax = 4;
        eax = fcn_000110d4 ();
        dh = *((ecx + 0xc));
        dh |= 0x20;
        eax = 0;
        *((ecx + 0xc)) = dh;
        goto label_2;
    }
    ebx *= edx;
    if (ebx == 0) {
        eax = ebx;
        goto label_2;
    }
    eax = *((ecx + 8));
    if (*((eax + 8)) == 0) {
        eax = ebp;
        fcn_00011674 ();
    }
    esi = 0;
    dl = *((ebp + 0xc));
    *((esp + 8)) = esi;
    if ((dl & 0x40) == 0) {
        goto label_3;
    }
    *((esp + 0xc)) = ebx;
label_0:
    edx = *((ebp + 4));
    if (edx == 0) {
        goto label_4;
    }
    ebx = *((esp + 0xc));
    if (edx > ebx) {
        edx = ebx;
    }
    edi = *((esp + 4));
    ecx = edx;
    esi = *(ebp);
    ebx = *((esp + 8));
    eax = ds;
    es = ds;
    eax = ecx;
    ecx >>= 2;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    cl = al;
    cl &= 3;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    es = edi;
    eax = *((esp + 0xc));
    ecx = *(ebp);
    esi = edi + edx;
    ebx += edx;
    *((esp + 4)) = esi;
    *((esp + 8)) = ebx;
    edi = *((ebp + 4));
    ecx += edx;
    eax -= edx;
    edi -= edx;
    *(ebp) = ecx;
    *((esp + 0xc)) = eax;
    *((ebp + 4)) = edi;
label_4:
    ecx = *((esp + 0xc));
    if (ecx == 0) {
        goto label_5;
    }
    if (ecx < *((ebp + 0x14))) {
        if ((*((ebp + 0xd)) & 4) == 0) {
            goto label_6;
        }
    }
    eax = *((ebp + 8));
    eax = *((eax + 8));
    *((ebp + 4)) = 0;
    ebx = *((esp + 0xc));
    cl = *((ebp + 0xd));
    *(ebp) = eax;
    if ((cl & 4) == 0) {
        if (ebx <= 0x200) {
            goto label_7;
        }
        bl = 0;
        bh &= 0xfe;
    }
label_7:
    edx = *((esp + 4));
    eax = *((ebp + 0x10));
    eax = fcn_000116fb ();
    if (eax == -1) {
        *((ebp + 0xc)) |= 0x20;
        goto label_5;
    }
    while (eax == 0x1a) {
        *((ebp + 0xc)) |= 0x10;
        goto label_5;
        edx = *((esp + 4));
        ebx = *((esp + 0xc));
        ecx = *((esp + 8));
        edx += eax;
        ebx -= eax;
        ecx += eax;
        *((esp + 4)) = edx;
        *((esp + 0xc)) = ebx;
        *((esp + 8)) = ecx;
        goto label_0;
label_6:
        eax = ebp;
        eax = fcn_000117f1 ();
        if (eax == 0) {
            goto label_5;
        }
        goto label_0;
label_3:
        edx = *((esp + 4));
        ebx += edx;
label_1:
        if (*((ebp + 4)) == 0) {
            eax = ebp;
            eax = fcn_000117f1 ();
            if (eax == 0) {
                goto label_5;
            }
        }
        ecx = *((ebp + 4));
        eax = *(ebp);
        ecx--;
        esi = eax + 1;
        *((ebp + 4)) = ecx;
        *(ebp) = esi;
        al = *(eax);
        eax &= 0xff;
        if (eax == 0xd) {
            if (*((ebp + 4)) == 0) {
                eax = ebp;
                eax = fcn_000117f1 ();
                if (eax == 0) {
                    goto label_5;
                }
            }
            edi = *((ebp + 4));
            eax = *(ebp);
            edi--;
            esi = eax + 1;
            *((ebp + 4)) = edi;
            *(ebp) = esi;
            al = *(eax);
            eax &= 0xff;
        }
    }
    *(edx) = al;
    eax = *((esp + 8));
    eax++;
    edx++;
    *((esp + 8)) = eax;
    if (edx != ebx) {
        goto label_1;
    }
label_5:
    eax = *((esp + 8));
    esi = *(esp);
    edx = 0;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x109d5 */
#include <stdint.h>
 
void fcn_000109d5 (void) {
    return void (*0x118a5)() ();
}
/* r2dec pseudo code output */
/* synth @ 0x118a5 */
#include <stdint.h>
 
int32_t fcn_000118a5 (void) {
    edx = eax;
    while (1) {
label_0:
        eax = edx;
        eax = fcn_00013077 ();
        ebx = eax;
        if (eax == 0) {
            ecx = *(0xcd0);
            if (ecx != 0) {
                goto label_2;
            }
label_1:
            eax = *(0xccc);
            if (eax != 0) {
                goto label_3;
            }
        }
        eax = ebx;
        return eax;
        edx = eax + 1;
    }
label_2:
    eax = edx;
    eax = void (*ecx)() ();
    if (eax != 0) {
        goto label_0;
    }
    goto label_1;
label_3:
    void (*eax)() ();
    goto label_0;
}
/* r2dec pseudo code output */
/* synth @ 0x10b70 */
#include <stdint.h>
 
void fcn_00010b70 (int32_t arg_8h) {
    int32_t var_1h;
    __asm ("wait");
    __asm ("wait");
    *((esp + 1)) = 0x1f;
    fp_stack[0] = round(fp_stack[0]);
    __asm ("wait");
    esp = esp + 8;
}
/* r2dec pseudo code output */
/* synth @ 0x10b8d */
#include <stdint.h>
 
int32_t fcn_00010b8d (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    edi = ebx;
    if ((*((ecx + 0xc)) & 2) == 0) {
        eax = 4;
        eax = fcn_000110d4 ();
        *((ecx + 0xc)) |= 0x20;
        eax = 0;
        goto label_1;
    }
    edi *= edx;
    if (edi == 0) {
        eax = edi;
        goto label_1;
    }
    eax = *((ecx + 8));
    if (*((eax + 8)) == 0) {
        eax = ecx;
        fcn_00011674 ();
    }
    eax = *((ebp + 0xc));
    dl = *((ebp + 0xc));
    ecx = 0;
    eax &= 0x30;
    dl &= 0xcf;
    *((esp + 0xc)) = ecx;
    *((esp + 8)) = eax;
    *((ebp + 0xc)) = dl;
    if ((dl & 0x40) == 0) {
        goto label_2;
    }
    *((esp + 0x10)) = edi;
label_0:
    if (*((ebp + 4)) == 0) {
        eax = *((esp + 0x10));
        if (eax < *((ebp + 0x14))) {
            goto label_3;
        }
        ebx = eax;
        bl ^= al;
        bh &= 0xfe;
        if (ebx == 0) {
            ebx = eax;
        }
        edx = *((esp + 4));
        eax = *((ebp + 0x10));
        eax = fcn_00011d83 ();
        edx = eax;
        if (eax != -1) {
            if (eax != 0) {
                goto label_4;
            }
            fcn_00011df7 ();
            *(eax) = 0xc;
        }
        *((ebp + 0xc)) |= 0x20;
        goto label_4;
    }
label_3:
    edx = *((ebp + 0x14));
    esi = *((ebp + 4));
    edi = *((esp + 0x10));
    edx -= esi;
    if (edx > edi) {
        edx = edi;
    }
    esi = *((esp + 4));
    ecx = edx;
    edi = *(ebp);
    eax = ds;
    es = ds;
    eax = ecx;
    ecx >>= 2;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    cl = al;
    cl &= 3;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    es = edi;
    ebx = *((ebp + 4));
    eax = *(ebp);
    ebx += edx;
    ecx = *((ebp + 0x14));
    *((ebp + 4)) = ebx;
    eax += edx;
    bh = *((ebp + 0xd));
    *(ebp) = eax;
    bh |= 0x10;
    eax = *((ebp + 4));
    *((ebp + 0xd)) = bh;
    if (eax != ecx) {
        if ((bh & 4) == 0) {
            goto label_4;
        }
    }
    eax = ebp;
    fcn_00011aa8 ();
label_4:
    esi = *((esp + 4));
    edi = *((esp + 0xc));
    eax = *((esp + 0x10));
    esi += edx;
    edi += edx;
    *((esp + 4)) = esi;
    *((esp + 0xc)) = edi;
    eax -= edx;
    *((esp + 0x10)) = eax;
    if (eax == 0) {
        goto label_5;
    }
    if ((*((ebp + 0xc)) & 0x20) == 0) {
        goto label_0;
    }
    goto label_5;
label_2:
    bl = *((ebp + 0xd));
    if ((bl & 4) != 0) {
        bh = bl;
        bh &= 0xfa;
        al = bh;
        *((ebp + 0xd)) = bh;
        al |= 1;
        ecx = 1;
        *((ebp + 0xd)) = al;
    }
    eax = *((ebp + 8));
    ebx = *((esp + 4));
    esi = *((eax + 0xc));
    *((eax + 0xc)) = 1;
    do {
        eax = 0;
        edx = ebp;
        al = *(ebx);
        fcn_00011e03 ();
        dl = *((ebp + 0xc));
        ebx++;
        if ((dl & 0x30) != 0) {
            goto label_6;
        }
        eax = *((esp + 0xc));
        eax++;
        *((esp + 0xc)) = eax;
    } while (edi != eax);
label_6:
    eax = *((ebp + 8));
    *((eax + 0xc)) = esi;
    if (ecx != 0) {
        dh = *((ebp + 0xd));
        dh &= 0xfa;
        bl = dh;
        *((ebp + 0xd)) = dh;
        bl |= 4;
        eax = ebp;
        *((ebp + 0xd)) = bl;
        fcn_00011aa8 ();
    }
label_5:
    if ((*((ebp + 0xc)) & 0x20) != 0) {
        ebx = 0;
        *((esp + 0xc)) = ebx;
    }
    eax = *((esp + 8));
    esi = *(esp);
    ecx = *((ebp + 0xc));
    edx = 0;
    ecx |= eax;
    eax = *((esp + 0xc));
    *((ebp + 0xc)) = ecx;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x10d6d */
#include <stdint.h>
 
int32_t fcn_00010d6d (void) {
    edx = 0;
    eax = *(0x1c4);
    *(0x1c4) = edx;
    if (eax == 0) {
        ah = 8;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        eax &= 0xff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x10d8a */
#include <stdint.h>
 
void fcn_00010d8a (void) {
    if (eax != 0) {
        void (*0x11c83)() ();
    }
}
/* r2dec pseudo code output */
/* synth @ 0x11534 */
#include <stdint.h>
 
int32_t fcn_00011534 (void) {
    ecx = eax;
    esi = edx;
    if ((*((eax + 0xc)) & 6) == 0) {
        goto label_1;
    }
    if ((*((ecx + 0xd)) & 0x10) == 0) {
        goto label_2;
    }
    eax = ecx;
    eax = fcn_00011aa8 ();
    if (eax == 0) {
        goto label_3;
    }
    if (ebx != 0) {
        goto label_4;
    }
    while (1) {
label_0:
        eax = 9;
        fcn_000110d4 ();
label_4:
        eax = 0xffffffff;
        return eax;
label_2:
        if (ebx == 1) {
            esi -= *((ecx + 4));
        }
        eax = *((ecx + 8));
        eax = *((eax + 8));
        *((ecx + 4)) = 0;
        *(ecx) = eax;
label_3:
        *((ecx + 0xc)) &= 0xeb;
        edx = esi;
        eax = *((ecx + 0x10));
        eax = fcn_00011be9 ();
        if (eax != -1) {
            goto label_5;
        }
        return eax;
label_1:
        if (ebx < 1) {
            goto label_6;
        }
        if (ebx <= 1) {
            goto label_7;
        }
        if (ebx == 2) {
            goto label_8;
        }
    }
label_6:
    if (ebx == 0) {
        goto label_9;
    }
    goto label_0;
label_7:
    edx = ecx;
    eax = esi;
    edi = *((ecx + 4));
    eax = fcn_000114df ();
    if (eax == 0) {
        goto label_5;
    }
    edx = esi;
    eax = *((ecx + 0x10));
    edx -= edi;
    eax = fcn_00011be9 ();
    if (eax == -1) {
        goto label_10;
    }
    do {
        eax = ecx;
        fcn_0001151e ();
        goto label_5;
label_9:
        eax = *((ecx + 0x10));
        eax = fcn_00013170 ();
        edx = *((ecx + 4));
        edi = esi;
        eax -= edx;
        edi -= eax;
        edx = ecx;
        eax = edi;
        eax = fcn_000114df ();
        if (eax == 0) {
            goto label_5;
        }
        edx = esi;
        eax = *((ecx + 0x10));
        eax = fcn_00011be9 ();
    } while (eax != -1);
    return eax;
label_8:
    dl = *((ecx + 0xc));
    dl &= 0xef;
    eax = *((ecx + 8));
    *((ecx + 0xc)) = dl;
    eax = *((eax + 8));
    *(ecx) = eax;
    edx = esi;
    eax = *((ecx + 0x10));
    *((ecx + 4)) = 0;
    eax = fcn_00011be9 ();
    if (eax != -1) {
label_5:
        eax = 0;
    }
label_10:
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x1073b */
#include <stdint.h>
 
int32_t fcn_0001073b (void) {
    ebx = eax;
    eax = *(0xca0);
    do {
        if (eax == 0) {
            goto label_1;
        }
        edx = *((eax + 4));
        if (ebx == edx) {
            if ((*((edx + 0xc)) & 3) != 0) {
                edx = 1;
                eax = ebx;
                fcn_00010ad2 ();
            }
label_0:
            eax = ebx;
            return eax;
        }
        eax = *(eax);
    } while (1);
label_1:
    edx = 0xca4;
    do {
        eax = *(edx);
        if (eax == 0) {
            goto label_2;
        }
        if (ebx == *((eax + 4))) {
            ecx = *(eax);
            *(edx) = ecx;
            edx = *(0xca0);
            *(0xca0) = eax;
            *(eax) = edx;
            goto label_0;
        }
        edx = eax;
    } while (1);
label_2:
    eax = 4;
    eax = fcn_000110d4 ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x118e7 */
#include <stdint.h>
 
int32_t fcn_000118e7 (void) {
    eax = *(0x1b0);
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x119e0 */
#include <stdint.h>
 
uint32_t fcn_000119e0 (void) {
    if (*(0x40c) != 0) {
        goto label_0;
    }
    ebx = 0x3f8;
    while (*(eax) != 0) {
        eax = fcn_0001323b ();
        edx = eax;
        if (eax != 0) {
            edi = eax;
            eax = ds;
            es = ds;
            ecx -= ecx;
            ecx--;
            eax = 0;
            __asm ("repne scasb al, byte es:[edi]");
            ecx = ~ecx;
            ecx--;
            if (ecx <= 0x8f) {
                ebx = 0x8f;
                eax = 0x40c;
                fcn_00013295 ();
            }
        } else {
            ebx += 4;
            eax = *(ebx);
        }
    }
    if (*(0x40c) != 0) {
        goto label_1;
    }
    edx = 0;
    eax = 0;
    edi = 0x40c;
    eax = fcn_00013564 ();
    esi = eax;
    do {
        al = *(esi);
        *(edi) = al;
        if (al == 0) {
            goto label_2;
        }
        al = *((esi + 1));
        esi += 2;
        *((edi + 1)) = al;
        edi += 2;
    } while (al != 0);
label_2:
label_1:
    edi = 0x40c;
    eax = ds;
    es = ds;
    ecx -= ecx;
    ecx--;
    eax = 0;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    ecx--;
    eax = ecx - 1;
    eax += 0x40c;
    bl = *(eax);
    if (bl != 0x5c) {
        if (bl == 0x2f) {
            goto label_0;
        }
        eax++;
        *(eax) = 0x5c;
        eax++;
        *(eax) = 0;
    }
label_0:
    eax = 0x40c;
    edi = es;
    esi = es;
    edx = es;
    ecx = es;
    ebx = es;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x10a1c */
#include <stdint.h>
 
int32_t fcn_00010a1c (void) {
    eax += 0x30;
    if (eax > 0x39) {
        eax += 0x27;
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11ba6 */
#include <stdint.h>
 
int32_t fcn_00011ba6 (void) {
    edx = eax;
    if ((*((eax + 0xc)) & 0x80) != 0) {
        if ((*((edx + 0xd)) & 0x10) == 0) {
            goto label_0;
        }
        eax = edx;
        fcn_000135f9 ();
    }
label_0:
    eax = *((edx + 0x10));
    eax = fcn_00013170 ();
    ebx = eax;
    if (eax != -1) {
        ecx = *((edx + 4));
        if (ecx != 0) {
            if ((*((edx + 0xd)) & 0x10) != 0) {
                ebx = ecx + eax;
            } else {
                ebx = eax;
                ebx -= ecx;
            }
        }
        eax = ebx;
    }
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11c4e */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00011c4e (void) {
    ecx = eax;
    ebx = eax;
    ah = 0x3e;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    if (eax >= 0) {
        eax = ecx;
        edx = 0;
        eax = fcn_00012fc9 ();
        eax = 0;
        return eax;
    }
    eax = 4;
    fcn_000110d4 ();
    eax = 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11d7e */
#include <stdint.h>
 
void fcn_00011d7e (void) {
    return void (*0x137f0)() ();
}
/* r2dec pseudo code output */
/* synth @ 0x137f0 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t loc_000137f0 (void) {
    edx = eax;
    ah = 0x41;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = rotate_left32 (eax, 1);
    eax = rotate_right32 (eax, 1);
    edx = eax;
    if (eax < 0) {
        eax = 0;
        ax = dx;
        eax = fcn_00013013 ();
        return eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* synth @ 0x11e03 */
#include <stdint.h>
 
int32_t fcn_00011e03 (void) {
    ebx = eax;
    eax = *((edx + 8));
    ecx = *((eax + 0xc));
    if (ecx == 1) {
        goto label_1;
    }
    while (1) {
label_0:
        eax = 0xffffffff;
        goto label_2;
        *((eax + 0xc)) = 1;
label_1:
        if ((*((edx + 0xc)) & 2) != 0) {
            goto label_3;
        }
        eax = 4;
        fcn_000110d4 ();
        *((edx + 0xc)) |= 0x20;
    }
label_3:
    eax = *((edx + 8));
    if (*((eax + 8)) == 0) {
        eax = edx;
        fcn_00011674 ();
    }
    ecx = 0x400;
    if (ebx != 0xa) {
        goto label_4;
    }
    al = *((edx + 0xc));
    ecx = 0x600;
    if ((al & 0x40) != 0) {
        goto label_4;
    }
    *((edx + 0xd)) |= 0x10;
    eax = *(edx);
    *(eax) = 0xd;
    ebp = *(edx);
    ebp++;
    eax = *((edx + 4));
    *(edx) = ebp;
    eax++;
    esi = *((edx + 0x14));
    *((edx + 4)) = eax;
    if (eax != esi) {
        goto label_4;
    }
    eax = edx;
    eax = fcn_00011aa8 ();
    if (eax != 0) {
        goto label_0;
    }
label_4:
    *((edx + 0xd)) |= 0x10;
    eax = *(edx);
    *(eax) = bl;
    edi = *(edx);
    edi++;
    ebp = *((edx + 4));
    *(edx) = edi;
    ebp++;
    eax = *((edx + 0xc));
    *((edx + 4)) = ebp;
    if ((ecx & eax) == 0) {
        if (ebp != *((edx + 0x14))) {
            goto label_5;
        }
    }
    eax = edx;
    eax = fcn_00011aa8 ();
    if (eax != 0) {
        goto label_0;
    }
label_5:
    eax = 0;
    al = bl;
label_2:
    return eax;
}

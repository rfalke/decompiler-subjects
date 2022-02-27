/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x0 */
#include <stdint.h>
 
int16_t entry0 (int16_t arg1) {
    ax = arg1;
    /* [00] -rwx section size 960 named seg_000 */
    dx = 0x26b;
    *(cs:0x1c7) = dx;
    ah = 0x30;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    bp = *(2);
    bx = *(0x2c);
    ds = dx;
    *(0x7d) = ax;
    *(0x7b) = es;
    *(0x77) = bx;
    *(0x91) = bp;
    *(0x81) = 0xffff;
    fcn_0000012f ();
    __asm ("les di, [0x75]");
    ax = di;
    bx = di;
    cx = 0x7fff;
    do {
        if (*(es:di) == 0x3738) {
            dx = *((es:di + 2));
            if (dl != 0x3d) {
                goto label_0;
            }
            dh &= 0xdf;
            *(0x81)++;
            if (dh != 0x59) {
                goto label_0;
            }
            *(0x81)++;
        }
label_0:
        __asm ("repne scasb al, byte es:[di]");
        __asm ("jcxz 0x99");
        bx++;
    } while (*(es:di) != al);
    ch |= 0x80;
    cx = -cx;
    *(0x75) = cx;
    cx = 2;
    bx <<= cl;
    bx += 0x10;
    bx &= 0xfff0;
    *(0x79) = bx;
    dx = ss;
    bp -= dx;
    di = *(0x142);
    if (di < 0x200) {
        di = 0x200;
        *(0x142) = di;
    }
    cl = 4;
    di >>= cl;
    di++;
    if (bp < di) {
        void (*0x1af)() ();
    }
    bx = di;
    bx += dx;
    *(0x89) = bx;
    *(0x8d) = bx;
    ax = *(0x7b);
    bx -= ax;
    es = ax;
    ah = 0x4a;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    di <<= cl;
    __asm ("cli");
    ss = dx;
    __asm ("sti");
    ax = 0;
    es = *(cs:);
    di = 0x554;
    cx = 0x5d4;
    cx -= di;
    *(es:di) = al;
    cx--;
    es:di++;
    uint16_t (*0x53e)(uint16_t) (cs);
    __asm ("lcall fcn.000001d1");
    __asm ("lcall fcn.000002cf");
    ah = 0;
    eax = syscall_1ah (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x83) = dx;
    *(0x85) = cx;
    ax = uint16_t (*0x542)(uint16_t) (cs);
    __asm ("lcall fcn.000003c2");
    return __asm ("lcall fcn.000004aa");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x115d */
#include <stdint.h>
 
int32_t fcn_0000115d (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 6));
    bx <<= 1;
    *((bx + 0x3e6)) &= 0xfdff;
    ah = 0x42;
    al = *((bp + 0xc));
    bx = *((bp + 6));
    cx = *((bp + 0xa));
    dx = *((bp + 8));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (*((bx + 0x3e6)) >= 0) {
        void (*0x1188)() ();
    }
    /* [17] -rwx section size 256 named seg_017 */
    __asm ("lcall fcn.0000046e");
    edx:eax = (int64_t) eax;
    return void (*0x1188)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1188 */
#include <stdint.h>
 
void loc_00001188 (void) {
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x46e */
#include <stdint.h>
 
int32_t fcn_0000046e (int16_t arg_6h) {
    si = *((bp + 6));
    si |= si;
    if (si < 0) {
        goto label_0;
    }
    while (si > 0x23) {
        si = 0x57;
        *(0xda) = si;
        al = *((si + 0xdc));
        eax = (int32_t) ax;
        tmp_0 = ax;
        ax = si;
        si = tmp_0;
        goto label_1;
label_0:
        si = -si;
    }
    *(0xda) = 0xffff;
label_1:
    ax = si;
    *(0x7f) = ax;
    ax = 0xffff;
    return void (*0x4a4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x2453 */
#include <stdint.h>
 
void fcn_00002453 (int16_t arg3) {
    bx = arg3;
    bl -= 0x30;
    if (bl < 0) {
        goto label_0;
    }
    if (bl > 9) {
        if (bl <= 0x2a) {
            bl -= 7;
        } else {
            bl -= 0x27;
        }
        if (bl <= 9) {
            goto label_0;
        }
    }
    if (bl >= cl) {
        goto label_0;
    }
    __asm ("clc");
    bh = 0;
    do {
        goto label_1;
label_0:
        __asm ("stc");
    } while (1);
label_1:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x2481 */
#include <stdint.h>
 
int32_t fcn_00002481 (int16_t arg_6h, int16_t arg_ah, int16_t arg_eh, int16_t arg_10h, int16_t arg_12h, int16_t arg_14h, int16_t arg_16h, int16_t arg_1ah, int16_t arg3, int16_t arg1) {
    uint32_t var_5h;
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    ax = arg1;
    *((bp - 5)) = 0;
    *((bp - 4)) = 0;
    *((bp - 2)) = 1;
    di = 0x155;
    do {
        *((bp - 4))++;
        __asm ("lcall [bp + 6]");
        cx = bp + 0xe;
        cx = bp + 0xe;
        ax |= ax;
        if (ax < 0) {
            goto label_1;
        }
        eax = (int32_t) ax;
        tmp_0 = ax;
        ax = bx;
        bx = tmp_0;
        if ((bl & 0x80) != 0) {
            goto label_2;
        }
    } while ((*((bx + di)) & 1) != 0);
label_2:
    tmp_1 = ax;
    ax = bx;
    bx = tmp_1;
    *((bp + 0x14))--;
    if (*((bp + 0x14)) >= 0) {
        if (al != 0x2b) {
            if (al != 0x2d) {
                goto label_3;
            }
            *((bp - 5))++;
        }
        *((bp + 0x14))--;
        if (*((bp + 0x14)) >= 0) {
            *((bp - 4))++;
            __asm ("lcall [bp + 6]");
            cx = bp + 0xe;
            cx = bp + 0xe;
            ax |= ax;
            if (ax >= 0) {
label_3:
                si -= si;
                di = si;
                cx = *((bp + 0x12));
                __asm ("jcxz 0x2540");
                if (cx > 0x24) {
                    goto label_0;
                }
                if (cl < 2) {
                    goto label_0;
                }
                if (al != 0x30) {
                    goto label_4;
                }
                if (cl != 0x10) {
                    goto label_5;
                }
                *((bp + 0x14))--;
                if (*((bp + 0x14)) < 0) {
                    goto label_6;
                }
                *((bp - 4))++;
                __asm ("lcall [bp + 6]");
                cx = bp + 0xe;
                cx = bp + 0xe;
                if (al == 0x78) {
                    goto label_5;
                }
                if (al == 0x58) {
                    goto label_5;
                }
                goto label_7;
            }
label_1:
            *((bp - 2)) = 0xffff;
        }
    } else {
label_0:
        *((bp - 2)) = 0;
    }
    __asm ("lcall [bp + 0xa]");
    *((bp - 4))--;
    ax -= ax;
    edx:eax = (int64_t) eax;
    goto label_8;
    do {
label_6:
        goto label_9;
        *((bp + 0x12)) = 0xa;
        if (al != 0x30) {
            goto label_4;
        }
        *((bp + 0x14))--;
    } while (*((bp + 0x14)) < 0);
    *((bp - 4))++;
    __asm ("lcall [bp + 6]");
    cx = bp + 0xe;
    cx = bp + 0xe;
    *((bp + 0x12)) = 8;
    if (al != 0x78) {
        if (al != 0x58) {
            goto label_7;
        }
    }
    *((bp + 0x12)) = 0x10;
label_5:
    goto label_10;
label_4:
    cx = *((bp + 0x12));
    tmp_2 = ax;
    ax = bx;
    bx = tmp_2;
    ax = fcn_00002453 ();
    tmp_3 = ax;
    ax = bx;
    bx = tmp_3;
    if (al < 0x58) {
        goto label_0;
    }
    tmp_4 = ax;
    ax = si;
    si = tmp_4;
    while (*((bp - 4)) >= 0) {
        tmp_5 = ax;
        ax = si;
        si = tmp_5;
        dx:ax = ax * *((bp + 0x12));
        si += ax;
        di += dx;
        if (di != 0) {
            goto label_11;
        }
label_10:
        *((bp + 0x14))--;
        if (*((bp + 0x14)) < 0) {
            goto label_9;
        }
        *((bp - 4))++;
        __asm ("lcall [bp + 6]");
        cx = bp + 0xe;
        cx = bp + 0xe;
label_7:
        cx = *((bp + 0x12));
        tmp_6 = ax;
        ax = bx;
        bx = tmp_6;
        ax = fcn_00002453 (*((bp + 0xe)));
        tmp_7 = ax;
        ax = bx;
        bx = tmp_7;
    }
    goto label_12;
    do {
        tmp_8 = ax;
        ax = si;
        si = tmp_8;
        dx:ax = ax * cx;
        tmp_9 = ax;
        ax = di;
        di = tmp_9;
        tmp_10 = dx;
        dx = cx;
        cx = tmp_10;
        dx:ax = ax * dx;
        si += di;
        ax += cx;
        tmp_11 = ax;
        ax = di;
        di = tmp_11;
        dl += dh;
        if (dl != 0) {
            goto label_13;
        }
label_11:
        *((bp + 0x14))--;
        if (*((bp + 0x14)) < 0) {
            goto label_9;
        }
        *((bp - 4))++;
        __asm ("lcall [bp + 6]");
        cx = bp + 0xe;
        cx = bp + 0xe;
        cx = *((bp + 0x12));
        tmp_12 = ax;
        ax = bx;
        bx = tmp_12;
        ax = fcn_00002453 (*((bp + 0xe)));
        tmp_13 = ax;
        ax = bx;
        bx = tmp_13;
    } while (*((bp - 4)) >= 0);
label_12:
    __asm ("lcall [bp + 0xa]");
    *((bp - 4))--;
label_9:
    dx = di;
    tmp_14 = ax;
    ax = si;
    si = tmp_14;
    if (*((bp - 5)) == 0) {
        goto label_8;
    }
    dx = -dx;
    ax = -ax;
    do {
label_8:
        __asm ("les di, [bp + 0x16]");
        bx = *((bp - 4));
        *(es:di) += bx;
        __asm ("les di, [bp + 0x1a]");
        bx = *((bp - 2));
        *(es:di) = bx;
        goto label_14;
label_13:
        ax = 0xffff;
        dx = 0x7fff;
        al += *((bp - 5));
        ah += 0;
        dx += 0;
        *((bp - 2)) = 2;
    } while (1);
label_14:
    /* [27] -rwx section size 16 named seg_027 */
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1f5a */
#include <stdint.h>
 
void fcn_00001f5a (int16_t arg_16h) {
    int16_t var_29h;
    __asm ("les di, [bp + 0x16]");
    if ((*((bp - 0x29)) & 0x20) != 0) {
        __asm ("les di, es:[di]");
        *((bp + 0x16)) += 4;
        return;
    }
    di = *(es:di);
    es = ds;
    *((bp + 0x16)) += 2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x2111 */
#include <stdint.h>
 
int16_t fcn_00002111 (int16_t arg_6h, int16_t arg_ah, int16_t arg_eh, int16_t arg_10h, uint32_t arg3, int16_t arg1) {
    uint32_t var_28h;
    int16_t var_26h;
    bx = arg3;
    ax = arg1;
    goto label_1;
label_0:
    ax = 0xffff;
    __asm ("lcall [bp + 0xa]");
    ax = *((bp - 0x28));
    goto label_2;
    do {
label_1:
        *((bp - 0x26))++;
        __asm ("lcall [bp + 6]");
        cx = bp + 0xe;
        cx = bp + 0xe;
        ax |= ax;
        if (ax <= 0) {
            goto label_3;
        }
        al |= al;
        if (al < 0) {
            goto label_4;
        }
        tmp_0 = ax;
        ax = bx;
        bx = tmp_0;
        tmp_1 = ax;
        ax = bx;
        bx = tmp_1;
    } while (*((bx + 0x4be)) == 1);
    do {
label_4:
        cx = bp + 0xe;
        cx += 3;
        ax = void (*cx)() ();
label_3:
    } while (cx == 0);
    cx = bp + 0xe;
    goto label_0;
label_2:
    di = bp + 0xe;
    si = bp + 0xe;
    /* [26] -rwx section size 464 named seg_026 */
    __asm ("in ax, 0x5d");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x212c */
#include <stdint.h>
 
int16_t fcn_0000212c (int16_t arg_6h, int16_t arg_eh, int16_t arg_10h, int16_t arg2, int16_t arg1) {
    int16_t var_26h;
    int16_t var_22h;
    dx = arg2;
    ax = arg1;
    dx -= dx;
    cx = 4;
    do {
        *((bp - 0x22))--;
        if (*((bp - 0x22)) < 0) {
            goto label_0;
        }
        *((bp - 0x26))++;
        __asm ("lcall [bp + 6]");
        cx = bp + 0xe;
        cx = bp + 0xe;
        cx = bp + 0xe;
        dx = bp + 0xe;
        ax |= ax;
        if (ax <= 0) {
            goto label_1;
        }
        cl--;
        if (cl < 0) {
            goto label_1;
        }
        ch = al;
        ch -= 0x30;
        if (ch < 0) {
            goto label_1;
        }
        if (ch >= 0xa) {
            ch -= 0x11;
            if (ch < 0) {
                goto label_1;
            }
            if (ch >= 6) {
                ch -= 0x20;
                if (ch < 0) {
                    goto label_1;
                }
                if (ch >= 6) {
                    goto label_1;
                }
            }
            ch += 0xa;
        }
        dx <<= 1;
        dx <<= 1;
        dx <<= 1;
        dx <<= 1;
        dl += ch;
    } while (1);
label_0:
    ax -= ax;
label_1:
    if (cl != 4) {
        cx = bp + 0xe;
        cx += 3;
        void (*cx)() ();
    }
    cx = bp + 0xe;
    return void (*0x23a0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x2150 */
#include <stdint.h>
 
void fcn_00002150 (int16_t arg2, int16_t arg1) {
    dx = arg2;
    ax = arg1;
    return void (*0x23e9)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x3b6 */
#include <stdint.h>
 
void fcn_000003b6 (void) {
    __asm ("ljmp [0x548]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x3ba */
#include <stdint.h>
 
void fcn_000003ba (void) {
    __asm ("ljmp [0x54c]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x3be */
#include <stdint.h>
 
void fcn_000003be (void) {
    __asm ("ljmp [0x550]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x2208 */
#include <stdint.h>
 
void fcn_00002208 (int16_t arg3, int16_t arg1) {
    bx = arg3;
    ax = arg1;
    return void (*0x23bf)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1dfe */
#include <stdint.h>
 
int16_t fcn_00001dfe (int16_t arg_6h, int16_t arg_8h, int16_t arg3) {
    int16_t var_8h;
    int16_t var_6h;
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    __asm ("les bx, [bp + 6]");
    *(es:bx)--;
    __asm ("les bx, [bp + 6]");
    cx = *((es:bx + 2));
    bx = *(es:bx);
    dx = *((bp + 8));
    ax = *((bp + 6));
    __asm ("lcall fcn.00000313");
    *((bp - 6)) = dx;
    *((bp - 8)) = ax;
    __asm ("les bx, [bp + 6]");
    __asm ("les bx, es:[bx + 4]");
    *((bp - 2)) = es;
    *((bp - 4)) = bx;
    __asm ("les bx, [bp - 4]");
    dx = *((es:bx + 2));
    ax = *(es:bx);
    ax &= 1;
    dx = 0;
    dx |= ax;
    if (dx == 0) {
        cx = *(0x148);
        bx = *(0x146);
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("lcall fcn.0000036e");
        if (dx != 0) {
            __asm ("les bx, [bp + 6]");
            dx = *((es:bx + 2));
            ax = *(es:bx);
            __asm ("les bx, [bp - 4]");
            *(es:bx) += ax;
            *((es:bx + 2)) += dx;
            dx = *((bp - 2));
            ax = *((bp - 4));
            __asm ("les bx, [bp - 8]");
            *((es:bx + 6)) = dx;
            *((es:bx + 4)) = ax;
            __asm ("les bx, [bp - 4]");
            *((bp + 8)) = es;
            *((bp + 6)) = bx;
        }
    } else {
        fcn_00001c02 (cs, *((bp + 6)));
    }
    __asm ("les bx, [bp - 8]");
    dx = *((es:bx + 2));
    ax = *(es:bx);
    ax &= 1;
    dx = 0;
    dx |= ax;
    if (dx == 0) {
        fcn_00001ca1 (cs, *((bp + 6)), *((bp + 8)), *((bp - 8)), *((bp - 6)));
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1f45 */
#include <stdint.h>
 
int32_t fcn_00001f45 (int16_t arg_6h, int16_t arg_ah, int16_t arg_eh, int16_t arg_10h, int16_t arg_12h, int16_t arg_14h, uint32_t arg3, int16_t arg2) {
    int16_t var_29h;
    int16_t var_28h;
    int16_t var_26h;
    int16_t var_22h;
    bx = arg3;
    dx = arg2;
    ax &= 0xca8c;
    __asm ("retf 0xda8e");
    ds = dx;
    dx = 0x125;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    return ax;
    ax |= 0x1500;
    *((bp + di + 0x8c4)) += ax;
    bx = *((bp + 6));
    bx <<= 1;
    *((bx + 0x3e6)) |= 0x200;
    ax = di;
    ax -= bx;
    void (*0xf85)() ();
    *((bp - 0x28)) = 0;
    *((bp - 0x26)) = 0;
    si = *((bp + 0x12));
label_0:
    es = *((bp + 0x14));
    al = *(es:si);
    es:si++;
    al |= al;
    if (al == 0) {
        goto label_1;
    }
    if (al == 0x25) {
        goto label_2;
    }
    eax = (int32_t) ax;
    tmp_0 = ax;
    ax = di;
    di = tmp_0;
    *((bp - 0x26))++;
    __asm ("lcall [bp + 6]");
    cx = bp + 0xe;
    cx = bp + 0xe;
    ax |= ax;
    if (ax < 0) {
        goto label_3;
    }
    di |= di;
    if (di < 0) {
        goto label_4;
    }
    if (*((di + 0x4be)) != 1) {
        goto label_4;
    }
    do {
        tmp_1 = ax;
        ax = bx;
        bx = tmp_1;
        bl |= bl;
        if (bl < 0) {
            goto label_5;
        }
        if (*((bx + 0x4be)) != 1) {
            goto label_5;
        }
        *((bp - 0x26))++;
        __asm ("lcall [bp + 6]");
        cx = bp + 0xe;
        cx = bp + 0xe;
        ax |= ax;
    } while (ax > 0);
label_3:
    void (*0x23a0)() ();
label_5:
    __asm ("lcall [bp + 0xa]");
    *((bp - 0x26))--;
    goto label_0;
label_4:
    if (ax == di) {
        goto label_0;
    }
    __asm ("lcall [bp + 0xa]");
    *((bp - 0x26))--;
    void (*0x23b8)() ();
label_1:
    void (*0x23b8)() ();
label_2:
    *((bp - 0x22)) = 0xffff;
    es = *((bp + 0x14));
    *((bp - 0x29)) = 0x20;
    al = *(es:si);
    es:si++;
    eax = (int32_t) ax;
    *((bp + 0x12)) = si;
    tmp_2 = ax;
    ax = di;
    di = tmp_2;
    di |= di;
    if (di >= 0) {
        bl = *((di + 0x4be));
        bh = 0;
        ax = bx;
        if (ax > 0x15) {
            void (*0x23a0)() ();
        }
        bx = ax;
        bx <<= 1;
        /* switch table (3 cases) at 0xe3 */
    }
    return void (*0x23b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1eca */
#include <stdint.h>
 
int16_t fcn_00001eca (int16_t arg_6h, int16_t arg_8h) {
    ax = *((bp + 6));
    ax |= *((bp + 8));
    if (ax == 0) {
    } else {
        dx = *((bp + 8));
        ax = *((bp + 6));
        cx = 0xffff;
        bx = 0xfff8;
        __asm ("lcall fcn.00000313");
        *((bp + 8)) = dx;
        *((bp + 6)) = ax;
        cx = *(0x14c);
        bx = *(0x14a);
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("lcall fcn.0000036e");
        if (ax == 0) {
            fcn_00001d19 ();
        } else {
            /* [24] -rwx section size 48 named seg_024 */
            fcn_00001dfe (cs, *((bp + 6)), *((bp + 8)));
        }
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x313 */
#include <stdint.h>
 
int16_t fcn_00000313 (signed int16_t arg3, signed int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    cx |= cx;
    if (cx < 0) {
        bx = ~bx;
        cx = ~cx;
        bx++;
        cx += 0;
        void (*0x350)() ();
    }
    ax += bx;
    if (ax < 0) {
        dx += 0x1000;
    }
    ch = cl;
    cl = 4;
    ch <<= cl;
    dh += ch;
    ch = al;
    ax >>= cl;
    dx += ax;
    al = ch;
    ax &= 0xf;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x350 */
#include <stdint.h>
 
int16_t loc_00000350 (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    ax -= bx;
    if (ax < 0) {
        dx -= 0x1000;
    }
    bh = cl;
    cl = 4;
    bh <<= cl;
    bl = 0;
    dx -= bx;
    ch = al;
    ax >>= cl;
    dx += ax;
    al = ch;
    ax &= 0xf;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x36e */
#include <stdint.h>
 
int16_t fcn_0000036e (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    ch = al;
    cl = 4;
    ax >>= cl;
    dx += ax;
    al = ch;
    ah = bl;
    bx >>= cl;
    cx += bx;
    bl = ah;
    ax &= 0xf;
    bx &= 0xf;
    if (dx == cx) {
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1d19 */
#include <stdint.h>
 
int16_t fcn_00001d19 (void) {
    int16_t var_4h;
    int16_t var_2h;
    cx = *(0x14c);
    bx = *(0x14a);
    dx = *(0x148);
    ax = *(0x146);
    __asm ("lcall fcn.0000036e");
    if (? == ?) {
        __asm ("lcall fcn.000008ac");
        cx = 0x146;
        cx = 0x146;
        *(0x14c) = 0;
        *(0x14a) = 0;
        bx = 0;
        es = bx;
        bx = 0;
        *(0x148) = es;
        *(0x146) = bx;
    } else {
        __asm ("les bx, [0x14a]");
        __asm ("les bx, es:[bx + 4]");
        *((bp - 2)) = es;
        *((bp - 4)) = bx;
        __asm ("les bx, [bp - 4]");
        dx = *((es:bx + 2));
        ax = *(es:bx);
        ax &= 1;
        dx = 0;
        dx |= ax;
        if (dx == 0) {
            __asm ("lcall fcn.00000521");
            cx = bp - 4;
            cx = bp - 4;
            cx = *(0x148);
            bx = *(0x146);
            dx = *((bp - 2));
            ax = *((bp - 4));
            __asm ("lcall fcn.0000036e");
            if (dx == 0) {
                *(0x14c) = 0;
                *(0x14a) = 0;
                bx = 0;
                es = bx;
                bx = 0;
                *(0x148) = es;
                *(0x146) = bx;
            } else {
                __asm ("les bx, [bp - 4]");
                __asm ("les bx, es:[bx + 4]");
                *(0x14c) = es;
                *(0x14a) = bx;
            }
            __asm ("lcall fcn.000008ac");
            cx = bp - 4;
            cx = bp - 4;
        } else {
            __asm ("lcall fcn.000008ac");
            cx = 0x14a;
            cx = 0x14a;
            __asm ("les bx, [bp - 4]");
            *(0x14c) = es;
            *(0x14a) = bx;
        }
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x521 */
#include <stdint.h>
 
int16_t fcn_00000521 (int16_t arg_6h, int16_t arg_8h, int16_t arg3) {
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    __asm ("les bx, [bp + 6]");
    dx = *((es:bx + 0xe));
    ax = *((es:bx + 0xc));
    *(0x150) = dx;
    *(0x14e) = ax;
    cx = *((bp + 8));
    bx = *((bp + 6));
    __asm ("lcall fcn.0000036e");
    if (? == ?) {
        *(0x150) = 0;
        *(0x14e) = 0;
    } else {
        __asm ("les bx, [bp + 6]");
        __asm ("les bx, es:[bx + 8]");
        *((bp - 2)) = es;
        *((bp - 4)) = bx;
        dx = *((bp - 2));
        ax = *((bp - 4));
        __asm ("les bx, [0x14e]");
        *((es:bx + 0xa)) = dx;
        *((es:bx + 8)) = ax;
        dx = *(0x150);
        ax = *(0x14e);
        __asm ("les bx, [bp - 4]");
        *((es:bx + 0xe)) = dx;
        *((es:bx + 0xc)) = ax;
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x8ac */
#include <stdint.h>
 
int16_t fcn_000008ac (int16_t arg_6h, int16_t arg_8h) {
    cx = *(0x89);
    bx = *(0x87);
    dx = *((bp + 8));
    ax = *((bp + 6));
    __asm ("lcall fcn.0000036e");
    if (? >= ?) {
        cx = *(0x91);
        bx = *(0x8f);
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("lcall fcn.0000036e");
        if (? > ?) {
            goto label_0;
        }
        ax = fcn_0000081c (*((bp + 6)), *((bp + 8)));
        ax |= ax;
        if (ax != 0) {
            goto label_1;
        }
    }
label_0:
    ax = 0xffff;
    goto label_2;
label_1:
    ax = 0;
label_2:
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1c02 */
#include <stdint.h>
 
int16_t fcn_00001c02 (int16_t arg_6h, int16_t arg_8h) {
    int16_t var_4h;
    int16_t var_2h;
    cx = 0;
    bx = 0;
    dx = *(0x150);
    ax = *(0x14e);
    __asm ("lcall fcn.0000036e");
    if (? != ?) {
        __asm ("les bx, [0x14e]");
        __asm ("les bx, es:[bx + 0xc]");
        *((bp - 2)) = es;
        *((bp - 4)) = bx;
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("les bx, [0x14e]");
        *((es:bx + 0xe)) = dx;
        *((es:bx + 0xc)) = ax;
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("les bx, [bp - 4]");
        *((es:bx + 0xa)) = dx;
        *((es:bx + 8)) = ax;
        dx = *((bp - 2));
        ax = *((bp - 4));
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xe)) = dx;
        *((es:bx + 0xc)) = ax;
        dx = *(0x150);
        ax = *(0x14e);
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xa)) = dx;
        *((es:bx + 8)) = ax;
    } else {
        __asm ("les bx, [bp + 6]");
        *(0x150) = es;
        *(0x14e) = bx;
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xa)) = dx;
        *((es:bx + 8)) = ax;
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xe)) = dx;
        *((es:bx + 0xc)) = ax;
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1ca1 */
#include <stdint.h>
 
int16_t fcn_00001ca1 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg3) {
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    __asm ("les bx, [bp + 0xa]");
    dx = *((es:bx + 2));
    ax = *(es:bx);
    __asm ("les bx, [bp + 6]");
    *(es:bx) += ax;
    *((es:bx + 2)) += dx;
    cx = *((bp + 0xc));
    bx = *((bp + 0xa));
    dx = *(0x14c);
    ax = *(0x14a);
    __asm ("lcall fcn.0000036e");
    if (*((es:bx + 2)) == 0) {
        __asm ("les bx, [bp + 6]");
        *(0x14c) = es;
        *(0x14a) = bx;
    } else {
        __asm ("les bx, [bp + 0xa]");
        cx = *((es:bx + 2));
        bx = *(es:bx);
        dx = *((bp + 0xc));
        ax = *((bp + 0xa));
        __asm ("lcall fcn.00000313");
        *((bp - 2)) = dx;
        *((bp - 4)) = ax;
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("les bx, [bp - 4]");
        *((es:bx + 6)) = dx;
        *((es:bx + 4)) = ax;
    }
    __asm ("lcall fcn.00000521");
    cx = bp + 0xa;
    cx = bp + 0xa;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x16d6 */
#include <stdint.h>
 
uint16_t fcn_000016d6 (int16_t arg_eh, int16_t arg_10h, int16_t arg_12h, int16_t arg3, int16_t arg4, int16_t arg2) {
    int16_t var_58h;
    int16_t var_55h;
    int16_t var_54h;
    int16_t var_2h;
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = bp - 0x54;
    di -= ax;
    ax = bp - 0x54;
    __asm ("lcall [bp + 0x12]");
    ax |= ax;
    if (ax == 0) {
        *((bp - 2)) = 1;
    }
    *((bp - 0x55)) = 0x50;
    *((bp - 0x58)) += di;
    di = bp - 0x54;
    es = bp + 0xe;
    dx = bp + 0xe;
    cx = bp + 0xe;
    bx = bp + 0xe;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x12 */
#include <stdint.h>
 
int8_t fcn_00000012 (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x16cd */
#include <stdint.h>
 
void fcn_000016cd (int16_t arg3, int16_t arg4, int16_t arg2) {
    int16_t var_55h;
    bx = arg3;
    cx = arg4;
    dx = arg2;
    *(ss:di) = al;
    di++;
    *((bp - 0x55))--;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x1705)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x118a */
#include <stdint.h>
 
int16_t fcn_0000118a (int16_t arg_6h, uint32_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg_eh, int16_t arg_10h, int16_t arg_12h, int16_t arg2) {
    int16_t var_22h;
    dx = arg2;
    __asm ("les di, [bp + 0xc]");
    bx = *((bp + 0xa));
    if (bx > 0x24) {
        goto label_0;
    }
    if (bl < 2) {
        goto label_0;
    }
    ax = *((bp + 0x10));
    cx = *((bp + 0x12));
    cx |= cx;
    if (cx < 0) {
        if (*((bp + 8)) == 0) {
            goto label_1;
        }
        *(es:di) = 0x2d;
        di++;
        cx = -cx;
        ax = -ax;
    }
label_1:
    si = bp - 0x22;
    __asm ("jcxz 0x11d4");
    do {
        tmp_0 = ax;
        ax = cx;
        cx = tmp_0;
        dx -= dx;
        ax = dx:ax / bx;
        dx = dx:ax % bx;
        tmp_1 = ax;
        ax = cx;
        cx = tmp_1;
        ax = dx:ax / bx;
        dx = dx:ax % bx;
        *(ss:si) = dl;
        si++;
        __asm ("jcxz 0x11dc");
    } while (1);
    do {
        dx -= dx;
        ax = dx:ax / bx;
        dx = dx:ax % bx;
        *(ss:si) = dl;
        si++;
        ax |= ax;
    } while (ax != 0);
    cx = bp - 0x22;
    cx = -cx;
    cx += si;
    do {
        si--;
        al = *(ss:);
        al -= 0xa;
        if (al < 0) {
            al += 0x3a;
        } else {
            al += *((bp + 6));
        }
        *(es:di) = al;
        es:di++;
        __asm ("loop 0x11e8");
    } while (1);
label_0:
    al = 0;
    *(es:di) = al;
    es:di++;
    dx = *((bp + 0xe));
    ax = *((bp + 0xc));
    di = es;
    si = es;
    __asm ("retf 0xe");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x167c */
#include <stdint.h>
 
int8_t fcn_0000167c (int16_t arg_4h) {
    dx = *((bp + 4));
    cx = 0xf04;
    bx = 0x44d;
    al = dh;
    al >>= cl;
    __asm ("xlatb");
    *(es:di) = al;
    es:di++;
    al = dh;
    al &= ch;
    __asm ("xlatb");
    *(es:di) = al;
    es:di++;
    al = dl;
    al >>= cl;
    __asm ("xlatb");
    *(es:di) = al;
    es:di++;
    al = dl;
    al &= ch;
    __asm ("xlatb");
    *(es:di) = al;
    es:di++;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x16c0 */
#include <stdint.h>
 
int8_t fcn_000016c0 (void) {
    cx = 0xffff;
    al = 0;
    __asm ("repne scasb al, byte es:[di]");
    cx = ~cx;
    cx--;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x3b2 */
#include <stdint.h>
 
void fcn_000003b2 (void) {
    __asm ("ljmp [0x544]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1421 */
#include <stdint.h>
 
int32_t fcn_00001421 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, uint32_t arg3) {
    uint32_t var_1h;
    bx = arg3;
    al = *((bp + 6));
    *((bp - 1)) = al;
    do {
        __asm ("les bx, [bp + 8]");
        *(es:bx)++;
        if (*(es:bx) < 0) {
            al = *((bp - 1));
            __asm ("les bx, [bp + 8]");
            *((es:bx + 0xc))++;
            __asm ("les bx, es:[bx + 0xc]");
            bx--;
            *(es:bx) = al;
            __asm ("les bx, [bp + 8]");
            if ((*((es:bx + 2)) & 8) != 0) {
                if (*((bp - 1)) != 0xa) {
                    if (*((bp - 1)) != 0xd) {
                        goto label_0;
                    }
                }
                __asm ("lcall fcn.000012f6");
                cx = bp + 8;
                cx = bp + 8;
                ax |= ax;
                if (ax == 0) {
                    goto label_0;
                }
                ax = 0xffff;
                goto label_1;
            }
label_0:
            al = *((bp - 1));
            ah = 0;
            goto label_1;
        }
        __asm ("les bx, [bp + 8]");
        *(es:bx)--;
        __asm ("les bx, [bp + 8]");
        if ((*((es:bx + 2)) & 0x90) == 0) {
            __asm ("les bx, [bp + 8]");
            if ((*((es:bx + 2)) & 2) != 0) {
                goto label_2;
            }
        }
        __asm ("les bx, [bp + 8]");
        *((es:bx + 2)) |= 0x10;
        ax = 0xffff;
        goto label_1;
label_2:
        __asm ("les bx, [bp + 8]");
        *((es:bx + 2)) |= 0x100;
        __asm ("les bx, [bp + 8]");
        if (*((es:bx + 6)) == 0) {
            goto label_3;
        }
        __asm ("les bx, [bp + 8]");
        if (*(es:bx) != 0) {
            __asm ("lcall fcn.000012f6");
            cx = bp + 8;
            cx = bp + 8;
            ax |= ax;
            if (ax != 0) {
                ax = 0xffff;
                goto label_1;
            }
        } else {
            __asm ("les bx, [bp + 8]");
            ax = *((es:bx + 6));
            dx = 0xffff;
            dx -= ax;
            __asm ("les bx, [bp + 8]");
            *(es:bx) = dx;
        }
    } while (1);
label_3:
    if (*((bp - 1)) == 0xa) {
        __asm ("les bx, [bp + 8]");
        if ((*((es:bx + 2)) & 0x40) != 0) {
            goto label_4;
        }
        ax = 1;
        ax = 0x444;
        __asm ("les bx, [bp + 8]");
        al = *((es:bx + 4));
        eax = (int32_t) ax;
        __asm ("lcall fcn.00001111");
        if (ax != 1) {
            goto label_5;
        }
    }
label_4:
    ax = 1;
    ax = bp + 6;
    __asm ("les bx, [bp + 8]");
    al = *((es:bx + 4));
    eax = (int32_t) ax;
    __asm ("lcall fcn.00001111");
    if (ax != 1) {
label_5:
        __asm ("les bx, [bp + 8]");
        if ((*((es:bx + 2)) & 0x200) == 0) {
            __asm ("les bx, [bp + 8]");
            *((es:bx + 2)) |= 0x10;
            ax = 0xffff;
        }
    } else {
        al = *((bp - 1));
        ah = 0;
    }
label_1:
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x12f6 */
#include <stdint.h>
 
int32_t fcn_000012f6 (signed int16_t arg_6h, signed int16_t arg_8h, signed int16_t arg3) {
    bx = arg3;
    __asm ("les bx, [bp + 6]");
    ax = *((es:bx + 0x12));
    dx = *((bp + 6));
    if (ax != dx) {
        ax = 0xffff;
    } else {
        __asm ("les bx, [bp + 6]");
        if (*(es:bx) >= 0) {
            __asm ("les bx, [bp + 6]");
            if ((*((es:bx + 2)) & 8) == 0) {
                __asm ("les bx, [bp + 6]");
                dx = *((es:bx + 0xe));
                ax = *((es:bx + 0xc));
                cx = *((bp + 8));
                bx = *((bp + 6));
                bx += 5;
                if (dx != cx) {
                    goto label_0;
                }
                if (ax != bx) {
                    goto label_0;
                }
            }
            __asm ("les bx, [bp + 6]");
            *(es:bx) = 0;
            __asm ("les bx, [bp + 6]");
            dx = *((es:bx + 0xe));
            ax = *((es:bx + 0xc));
            cx = *((bp + 8));
            bx = *((bp + 6));
            bx += 5;
            if (dx == cx) {
                if (ax != bx) {
                    goto label_0;
                }
                __asm ("les bx, [bp + 6]");
                dx = *((es:bx + 0xa));
                ax = *((es:bx + 8));
                __asm ("les bx, [bp + 6]");
                *((es:bx + 0xe)) = dx;
                *((es:bx + 0xc)) = ax;
            }
label_0:
            ax = 0;
        } else {
            __asm ("les bx, [bp + 6]");
            si = *((es:bx + 6));
            __asm ("les bx, [bp + 6]");
            si += *(es:bx);
            si++;
            __asm ("les bx, [bp + 6]");
            *(es:bx) -= si;
            __asm ("les bx, [bp + 6]");
            dx = *((es:bx + 0xa));
            ax = *((es:bx + 8));
            __asm ("les bx, [bp + 6]");
            *((es:bx + 0xe)) = dx;
            *((es:bx + 0xc)) = ax;
            __asm ("les bx, [bp + 6]");
            al = *((es:bx + 4));
            eax = (int32_t) ax;
            __asm ("lcall fcn.00000fab");
            if (ax != si) {
                __asm ("les bx, [bp + 6]");
                if ((*((es:bx + 2)) & 0x200) == 0) {
                    __asm ("les bx, [bp + 6]");
                    *((es:bx + 2)) |= 0x10;
                    /* [20] -rwx section size 48 named seg_020 */
                    *((bx + si)) += al;
                    ax = 0xffff;
                }
            } else {
                ax = 0;
            }
        }
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0xfab */
#include <stdint.h>
 
int16_t fcn_00000fab (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch) {
    int16_t var_8eh;
    int16_t var_8ch;
    uint32_t var_8ah;
    int16_t var_87h;
    int16_t var_86h;
    int16_t var_84h;
    int16_t var_82h;
    ax = *((bp + 0xc));
    ax++;
    if (ax < 2) {
        ax = 0;
        goto label_0;
    }
    bx = *((bp + 6));
    bx <<= 1;
    if ((*((bx + 0x3e6)) & 0x8000) != 0) {
        __asm ("lcall fcn.00001111");
        goto label_0;
    }
    bx = *((bp + 6));
    bx <<= 1;
    *((bx + 0x3e6)) &= 0xfdff;
    __asm ("les bx, [bp + 8]");
    *((bp - 0x84)) = es;
    *((bp - 0x86)) = bx;
    ax = *((bp + 0xc));
    *((bp - 0x8a)) = ax;
    bx = ss;
    es = ss;
    bx = bp - 0x82;
    *((bp - 0x8c)) = es;
    *((bp - 0x8e)) = bx;
    while (1) {
        *((bp - 0x8a))--;
        __asm ("les bx, [bp - 0x86]");
        *((bp - 0x86))++;
        al = *(es:bx);
        *((bp - 0x87)) = al;
        if (al == 0xa) {
            __asm ("les bx, [bp - 0x8e]");
            *(es:bx) = 0xd;
            *((bp - 0x8e))++;
        }
        al = *((bp - 0x87));
        __asm ("les bx, [bp - 0x8e]");
        *(es:bx) = al;
        *((bp - 0x8e))++;
        ax = *((bp - 0x8e));
        cx = ss;
        bx = bp - 0x82;
        dx = 0;
        ax -= bx;
        dx |= dx;
        if (dx >= 0) {
            if (dx == 0) {
                if (ax < 0x80) {
                    goto label_1;
                }
            }
            ax = *((bp - 0x8e));
            cx = ss;
            bx = bp - 0x82;
            dx = 0;
            ax -= bx;
            si = ax;
            ax = bp - 0x82;
            __asm ("lcall fcn.00001111");
            di = ax;
            if (ax != si) {
                di |= di;
                if (di < 0) {
                    ax = 0xffff;
                } else {
                    ax = *((bp + 0xc));
                    ax -= *((bp - 0x8a));
                    ax += di;
                    ax -= si;
                }
                goto label_0;
            }
            bx = ss;
            es = ss;
            bx = bp - 0x82;
            *((bp - 0x8c)) = es;
            *((bp - 0x8e)) = bx;
        }
label_1:
        if (*((bp - 0x8a)) == 0) {
            goto label_2;
        }
    }
label_2:
    ax = *((bp - 0x8e));
    cx = ss;
    bx = bp - 0x82;
    dx = 0;
    ax -= bx;
    si = ax;
    ax |= ax;
    if (ax > 0) {
        ax = bp - 0x82;
        __asm ("lcall fcn.00001111");
        di = ax;
        if (ax != si) {
            di |= di;
            if (di < 0) {
                ax = 0xffff;
            } else {
                ax = *((bp + 0xc));
                ax += di;
                ax -= si;
            }
        }
    } else {
        ax = *((bp + 0xc));
    }
label_0:
    /* [15] -rwx section size 64 named seg_015 */
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1111 */
#include <stdint.h>
 
int16_t fcn_00001111 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ch, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 6));
    bx <<= 1;
    if ((*((bx + 0x3e6)) & 0x800) != 0) {
        ax = 2;
        ax = 0;
        __asm ("lcall fcn.0000115d");
    }
    ah = 0x40;
    bx = *((bp + 6));
    cx = *((bp + 0xc));
    __asm ("lds dx, [bp + 8]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if ((*((bx + 0x3e6)) & 0x800) >= 0) {
        bx = *((bp + 6));
        bx <<= 1;
        *((bx + 0x3e6)) |= 0x1000;
        /* [16] -rwx section size 48 named seg_016 */
    } else {
        __asm ("lcall fcn.0000046e");
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1402 */
#include <stdint.h>
 
int32_t fcn_00001402 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg3, int16_t arg1) {
    bx = arg3;
    ax = arg1;
    __asm ("les bx, [bp + 8]");
    *(es:bx)--;
    al = *((bp + 6));
    eax = (int32_t) ax;
    __asm ("lcall fcn.00001421");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x16a7 */
#include <stdint.h>
 
int16_t fcn_000016a7 (int16_t arg_ah_2, int16_t arg_ch_2, int16_t arg_ah, int16_t arg_ch, int16_t arg3, int16_t arg2, int16_t arg1) {
    int16_t var_92h_2;
    int16_t var_98h;
    int16_t var_96h;
    int16_t var_92h;
    int16_t var_90h;
    int16_t var_8dh;
    int16_t var_8ch;
    int16_t var_8ah;
    int16_t var_58h;
    signed int16_t var_55h;
    int16_t var_54h;
    int16_t var_4h;
    int16_t var_1h;
    uint32_t var_2h;
    int16_t var_8h;
    bx = arg3;
    dx = arg2;
    ax = arg1;
    *((bx + si)) += al;
label_1:
    __asm ("lcall fcn.00000f8b");
    *((bp - 4)) = ax;
    ax = *((bp - 4));
    ax++;
    if (ax >= 2) {
        bx = *((bp + 6));
        bx <<= 1;
        if ((*((bx + 0x3e6)) & 0x8000) == 0) {
            goto label_6;
        }
    }
    ax = *((bp - 4));
    void (*0xf85)() ();
label_6:
    cx = *((bp - 4));
    __asm ("les si, [bp + 8]");
    di = si;
    bx = si;
    do {
label_0:
        al = *(es:si);
        es:si++;
        if (al == 0x1a) {
            goto label_7;
        }
        if (al == 0xd) {
            goto label_8;
        }
        *(es:di) = al;
        es:di++;
        __asm ("loop 0xf27");
    } while (1);
    goto label_9;
label_8:
    __asm ("loop 0xf27");
    goto label_0;
    ax = 1;
    ax = bp - 1;
    __asm ("lcall fcn.00000f8b");
    al = *((bp - 1));
    *(es:di) = al;
    es:di++;
label_9:
    if (di == bx) {
        goto label_1;
    }
    void (*0xf7f)() ();
label_7:
    ax = 2;
    cx = -cx;
    ax -= ax;
    __asm ("lcall fcn.0000115d");
    ax |= 0x1500;
    *((bp + di + 0x8c4)) += ax;
    *((bp - 0x58)) = 0;
    *((bp - 0x55)) = 0x50;
    *((bp - 2)) = 0;
    di = bp - 0x54;
    *((bp - 0x96)) = di;
    di = *((bp - 0x96));
    __asm ("les si, [bp + 0xa]");
    do {
label_2:
        al = *(es:si);
        es:si++;
        al |= al;
        if (al == 0) {
            goto label_10;
        }
        if (al == 0x25) {
            goto label_11;
        }
label_3:
        *(ss:di) = al;
        di++;
        *((bp - 0x55))--;
    } while (*((bp - 0x55)) > 0);
    al = fcn_000016d6 ();
    goto label_2;
label_10:
    goto label_12;
label_11:
    *((bp - 0x8a)) = si;
    al = *(es:si);
    es:si++;
    if (al == 0x25) {
        goto label_3;
    }
    *((bp - 0x96)) = di;
    cx = 0;
    *((bp - 0x8c)) = cx;
    *((bp - 0x98)) = 0x20;
    *((bp - 0x8d)) = cl;
    *((bp - 0x92)) = 0xffff;
    *((bp - 0x90)) = 0xffff;
    while (1) {
label_5:
        al = *(es:si);
        es:si++;
        ah = 0;
        dx = ax;
        bx = ax;
        bl -= 0x20;
        if (bl < 0x60) {
            bl = *((bx + 0x45d));
            ax = bx;
            if (ax > 0x17) {
                goto label_13;
            }
            bx = ax;
            bx <<= 1;
            /* switch table (4 cases) at 0x114 */
        }
        goto label_13;
label_4:
        goto label_13;
        ax = *(es:di);
        *((bp + 6)) += 2;
        if (ch >= 2) {
            goto label_14;
        }
        *((bp - 0x92)) = ax;
        ch = 3;
    }
label_14:
    if (ch != 4) {
        goto label_4;
    }
    *((bp - 0x90)) = ax;
    ch++;
    goto label_5;
label_13:
    si = *((bp - 0x8a));
    es = *((bp + 0xc));
    di = *((bp - 0x96));
    al = 0x25;
    do {
        al = fcn_000016cd ();
        al = *(es:si);
        es:si++;
        al |= al;
    } while (al != 0);
label_12:
    if (*((bp - 0x55)) < 0x50) {
        fcn_000016d6 ();
    }
    if (*((bp - 2)) != 0) {
        ax = 0xffff;
    } else {
        ax = *((bp - 0x58));
    }
    __asm ("retf 0x10");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0xf8b */
#include <stdint.h>
 
void fcn_00000f8b (int16_t arg_6h, int16_t arg_8h, int16_t arg_ch, int16_t arg1) {
    ax = arg1;
    ah = 0x3f;
    bx = *((bp + 6));
    cx = *((bp + 0xc));
    __asm ("lds dx, [bp + 8]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (? >= ?) {
    } else {
        __asm ("lcall fcn.0000046e");
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x9f2 */
#include <stdint.h>
 
int32_t fcn_000009f2 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, uint32_t arg_eh, int16_t arg1) {
    ax = arg1;
    __asm ("lcall fcn.000012f6");
    ax |= ax;
    if (ax != 0) {
        ax = 0xffff;
    } else {
        if (*((bp + 0xe)) == 1) {
            __asm ("les bx, [bp + 6]");
            if (*(es:bx) <= 0) {
                goto label_0;
            }
            ax = fcn_000009a4 (*((bp + 6)), *((bp + 8)));
            edx:eax = (int64_t) eax;
            *((bp + 0xa)) -= ax;
            *((bp + 0xc)) -= dx;
        }
label_0:
        __asm ("les bx, [bp + 6]");
        *((es:bx + 2)) &= 0xfe5f;
        __asm ("les bx, [bp + 6]");
        *(es:bx) = 0;
        __asm ("les bx, [bp + 6]");
        dx = *((es:bx + 0xa));
        ax = *((es:bx + 8));
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xe)) = dx;
        *((es:bx + 0xc)) = ax;
        __asm ("les bx, [bp + 6]");
        al = *((es:bx + 4));
        eax = (int32_t) ax;
        __asm ("lcall fcn.0000115d");
        if (dx == -1) {
            if (ax == -1) {
                ax = 0xffff;
            }
        } else {
            ax = 0;
        }
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1bf0 */
#include <stdint.h>
 
void fcn_00001bf0 (int16_t arg_6h, int16_t arg_8h) {
    /* [23] -rwx section size 800 named seg_023 */
    __asm ("lcall fcn.00001eca");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x50c */
#include <stdint.h>
 
int16_t fcn_0000050c (int16_t arg_6h) {
    ax = *((bp + 6));
    dx = 0;
    __asm ("lcall fcn.0000070d");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x70d */
#include <stdint.h>
 
int16_t fcn_0000070d (uint32_t arg_6h, uint32_t arg_8h) {
    int16_t var_4h;
    int16_t var_2h;
    ax = *((bp + 6));
    ax |= *((bp + 8));
    if (ax == 0) {
        dx = 0;
        ax = 0;
        void (*0x818)() ();
    }
    dx = *((bp + 8));
    ax = *((bp + 6));
    ax += 0x17;
    dx += 0;
    ax &= 0xfff0;
    dx &= 0xffff;
    *((bp + 8)) = dx;
    *((bp + 6)) = ax;
    cx = 0;
    bx = 0;
    dx = *(0x148);
    ax = *(0x146);
    __asm ("lcall fcn.0000036e");
    if (dx == 0) {
        fcn_000006a7 (cs, *((bp + 6)));
        void (*0x818)() ();
    }
    dx = *(0x150);
    ax = *(0x14e);
    *((bp - 2)) = dx;
    *((bp - 4)) = ax;
    cx = 0;
    bx = 0;
    __asm ("lcall fcn.0000036e");
    if (dx != 0) {
        goto label_0;
    }
    goto label_1;
    do {
label_0:
        __asm ("les bx, [bp - 4]");
        dx = *((es:bx + 2));
        ax = *(es:bx);
        cx = *((bp + 8));
        bx = *((bp + 6));
        bx += 0x30;
        cx += 0;
        if (dx >= cx) {
            if (dx == cx) {
                if (ax < bx) {
                    goto label_2;
                }
            }
            fcn_00000589 (cs, *((bp - 4)), *((bp - 2)), *((bp + 6)), *((bp + 8)));
            void (*0x818)() ();
        }
label_2:
        __asm ("les bx, [bp - 4]");
        dx = *((es:bx + 2));
        ax = *(es:bx);
        if (dx >= *((bp + 8))) {
            if (dx == *((bp + 8))) {
                if (ax < *((bp + 6))) {
                    goto label_3;
                }
            }
            fcn_00000521 (cs, *((bp - 4)), *((bp - 2)));
            __asm ("les bx, [bp - 4]");
            *(es:bx)++;
            *((es:bx + 2)) += 0;
            dx = *((bp - 2));
            ax = *((bp - 4));
            ax += 8;
            void (*0x818)() ();
        }
label_3:
        __asm ("les bx, [bp - 4]");
        __asm ("les bx, es:[bx + 0xc]");
        *((bp - 2)) = es;
        *((bp - 4)) = bx;
        cx = *(0x150);
        bx = *(0x14e);
        dx = *((bp - 2));
        ax = *((bp - 4));
        __asm ("lcall fcn.0000036e");
        if (ax == 0) {
            goto label_1;
        }
    } while (1);
label_1:
    /* [05] -rwx section size 368 named seg_005 */
    fcn_00000639 (cs, *((bp + 6)));
    return void (*0x818)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x818 */
#include <stdint.h>
 
void loc_00000818 (void) {
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x6a7 */
#include <stdint.h>
 
int16_t fcn_000006a7 (int16_t arg_6h, int16_t arg_8h) {
    uint32_t var_4h;
    uint32_t var_2h;
    __asm ("lcall fcn.000008f3");
    cx = bp + 6;
    cx = bp + 6;
    *((bp - 2)) = dx;
    *((bp - 4)) = ax;
    if (*((bp - 2)) == -1) {
        if (*((bp - 4)) == -1) {
            dx = 0;
            ax = 0;
        }
    } else {
        __asm ("les bx, [bp - 4]");
        *(0x148) = es;
        *(0x146) = bx;
        __asm ("les bx, [bp - 4]");
        *(0x14c) = es;
        *(0x14a) = bx;
        dx = *((bp + 8));
        ax = *((bp + 6));
        ax++;
        dx += 0;
        __asm ("les bx, [bp - 4]");
        *((es:bx + 2)) = dx;
        *(es:bx) = ax;
        dx = *((bp - 2));
        ax = *((bp - 4));
        ax += 8;
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x589 */
#include <stdint.h>
 
int16_t fcn_00000589 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg3) {
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    dx = *((bp + 0xc));
    ax = *((bp + 0xa));
    __asm ("les bx, [bp + 6]");
    *(es:bx) -= ax;
    *((es:bx + 2)) -= dx;
    __asm ("les bx, [bp + 6]");
    cx = *((es:bx + 2));
    bx = *(es:bx);
    dx = *((bp + 8));
    ax = *((bp + 6));
    __asm ("lcall fcn.00000313");
    *((bp - 2)) = dx;
    *((bp - 4)) = ax;
    dx = *((bp + 0xc));
    ax = *((bp + 0xa));
    ax++;
    dx += 0;
    __asm ("les bx, [bp - 4]");
    *((es:bx + 2)) = dx;
    *(es:bx) = ax;
    dx = *((bp + 8));
    ax = *((bp + 6));
    __asm ("les bx, [bp - 4]");
    *((es:bx + 6)) = dx;
    *((es:bx + 4)) = ax;
    cx = *((bp + 8));
    bx = *((bp + 6));
    dx = *(0x14c);
    ax = *(0x14a);
    __asm ("lcall fcn.0000036e");
    if (dx == 0) {
        __asm ("les bx, [bp - 4]");
        *(0x14c) = es;
        *(0x14a) = bx;
    } else {
        dx = *((bp - 2));
        ax = *((bp - 4));
        cx = *((bp + 0xc));
        bx = *((bp + 0xa));
        __asm ("lcall fcn.00000313");
        *((bp + 8)) = dx;
        *((bp + 6)) = ax;
        dx = *((bp - 2));
        ax = *((bp - 4));
        __asm ("les bx, [bp + 6]");
        *((es:bx + 6)) = dx;
        *((es:bx + 4)) = ax;
    }
    dx = *((bp - 2));
    ax = *((bp - 4));
    ax += 8;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x639 */
#include <stdint.h>
 
int16_t fcn_00000639 (int16_t arg_6h, int16_t arg_8h) {
    uint32_t var_4h;
    uint32_t var_2h;
    __asm ("lcall fcn.000008f3");
    cx = bp + 6;
    cx = bp + 6;
    *((bp - 2)) = dx;
    *((bp - 4)) = ax;
    if (*((bp - 4)) == -1) {
        dx = 0;
        ax = 0;
    } else {
        dx = *(0x14c);
        ax = *(0x14a);
        __asm ("les bx, [bp - 4]");
        *((es:bx + 6)) = dx;
        *((es:bx + 4)) = ax;
        dx = *((bp + 8));
        ax = *((bp + 6));
        ax++;
        dx += 0;
        __asm ("les bx, [bp - 4]");
        *((es:bx + 2)) = dx;
        *(es:bx) = ax;
        __asm ("les bx, [bp - 4]");
        *(0x14c) = es;
        *(0x14a) = bx;
        dx = *(0x14c);
        ax = *(0x14a);
        ax += 8;
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0xbd3 */
#include <stdint.h>
 
int32_t fcn_00000bd3 (int16_t arg_6h, int16_t arg_8h, uint32_t arg3) {
    uint32_t var_1h;
    bx = arg3;
    do {
        __asm ("les bx, [bp + 6]");
        *(es:bx)--;
        if (*(es:bx) >= 0) {
            __asm ("les bx, [bp + 6]");
            *((es:bx + 0xc))++;
            __asm ("les bx, es:[bx + 0xc]");
            bx--;
            al = *(es:bx);
            ah = 0;
            goto label_1;
        }
        __asm ("les bx, [bp + 6]");
        *(es:bx)++;
        if (*(es:bx) >= 0) {
            __asm ("les bx, [bp + 6]");
            if ((*((es:bx + 2)) & 0x110) == 0) {
                goto label_0;
            }
        }
        __asm ("les bx, [bp + 6]");
        *((es:bx + 2)) |= 0x10;
        ax = 0xffff;
        goto label_1;
label_0:
        __asm ("les bx, [bp + 6]");
        *((es:bx + 2)) |= 0x80;
        __asm ("les bx, [bp + 6]");
        if (*((es:bx + 6)) == 0) {
            goto label_2;
        }
        ax = fcn_00000b27 (*((bp + 6)), *((bp + 8)));
        ax |= ax;
        if (ax != 0) {
            ax = 0xffff;
            goto label_1;
        }
    } while (1);
label_2:
    if (*(0x40e) != 0) {
        goto label_3;
    }
    ax = *((bp + 6));
    bx = 0x256;
    cx = ds;
    if (ax != bx) {
        goto label_3;
    }
    __asm ("les bx, [bp + 6]");
    al = *((es:bx + 4));
    eax = (int32_t) ax;
    __asm ("lcall fcn.00000d38");
    cx = ax;
    ax |= ax;
    if (ax == 0) {
        __asm ("les bx, [bp + 6]");
        *((es:bx + 2)) &= 0xfdff;
    }
    ax = 0x200;
    __asm ("les bx, [bp + 6]");
    if ((*((es:bx + 2)) & 0x200) != 0) {
        ax = 1;
    } else {
        ax = 0;
    }
    ax = 0;
    __asm ("lcall fcn.00000d4a");
    goto label_0;
    do {
label_3:
        __asm ("les bx, [bp + 6]");
        if ((*((es:bx + 2)) & 0x200) != 0) {
            fcn_00000ae7 ();
        }
        ax = 1;
        ax = bp - 1;
        __asm ("les bx, [bp + 6]");
        al = *((es:bx + 4));
        eax = (int32_t) ax;
        __asm ("lcall fcn.00000f8b");
        if (ax != 1) {
            __asm ("les bx, [bp + 6]");
            al = *((es:bx + 4));
            eax = (int32_t) ax;
            __asm ("lcall fcn.00001286");
            cx = ax;
            if (ax != 1) {
                __asm ("les bx, [bp + 6]");
                *((es:bx + 2)) |= 0x10;
            } else {
                __asm ("les bx, [bp + 6]");
                ax = *((es:bx + 2));
                ax &= 0xfe7f;
                ax |= 0x20;
                __asm ("les bx, [bp + 6]");
                *((es:bx + 2)) = ax;
            }
            ax = 0xffff;
            goto label_1;
        }
        if (*((bp - 1)) != 0xd) {
            goto label_4;
        }
        __asm ("les bx, [bp + 6]");
        if ((*((es:bx + 2)) & 0x40) != 0) {
            goto label_4;
        }
    } while (1);
label_4:
    __asm ("les bx, [bp + 6]");
    *((es:bx + 2)) &= 0xffdf;
    al = *((bp - 1));
    ah = 0;
label_1:
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0xae7 */
#include <stdint.h>
 
int16_t fcn_00000ae7 (int16_t arg3) {
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    si = 0x14;
    *((bp - 2)) = ds;
    *((bp - 4)) = 0x256;
    while (ax != 0) {
        __asm ("les bx, [bp - 4]");
        ax = *((es:bx + 2));
        ax &= 0x300;
        if (ax == 0x300) {
            __asm ("lcall fcn.000012f6");
            cx = bp - 4;
            cx = bp - 4;
        }
        *((bp - 4)) += 0x14;
        ax = si;
        si--;
        ax |= ax;
    }
    si = bp - 4;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0xec6 */
#include <stdint.h>
 
int16_t fcn_00000ec6 (int16_t arg_6h, int16_t arg_ch) {
    ax = *((bp + 0xc));
    ax++;
    if (ax < 2) {
        goto label_0;
    }
    bx = *((bp + 6));
    bx <<= 1;
    if ((*((bx + 0x3e6)) & 0x200) == 0) {
        void (*0xee9)() ();
    }
label_0:
    ax = 0;
    return void (*0xf85)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0xb27 */
#include <stdint.h>
 
int32_t fcn_00000b27 (int16_t arg_4h, int16_t arg3, int16_t arg1) {
    bx = arg3;
    ax = arg1;
    __asm ("les bx, [bp + 4]");
    if ((*((es:bx + 2)) & 0x200) != 0) {
        fcn_00000ae7 ();
    }
    __asm ("les bx, [bp + 4]");
    __asm ("les bx, [bp + 4]");
    dx = *((es:bx + 0xa));
    ax = *((es:bx + 8));
    __asm ("les bx, [bp + 4]");
    *((es:bx + 0xe)) = dx;
    *((es:bx + 0xc)) = ax;
    __asm ("les bx, [bp + 4]");
    al = *((es:bx + 4));
    eax = (int32_t) ax;
    __asm ("lcall fcn.00000ec6");
    __asm ("les bx, [bp + 4]");
    *(es:bx) = ax;
    ax |= ax;
    if (ax > 0) {
        __asm ("les bx, [bp + 4]");
        *((es:bx + 2)) &= 0xffdf;
        ax = 0;
    } else {
        __asm ("les bx, [bp + 4]");
        if (*(es:bx) == 0) {
            __asm ("les bx, [bp + 4]");
            ax = *((es:bx + 2));
            ax &= 0xfe7f;
            ax |= 0x20;
            __asm ("les bx, [bp + 4]");
            *((es:bx + 2)) = ax;
        } else {
            __asm ("les bx, [bp + 4]");
            *(es:bx) = 0;
            __asm ("les bx, [bp + 4]");
            *((es:bx + 2)) |= 0x10;
        }
        ax = 0xffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0xd38 */
#include <stdint.h>
 
int16_t fcn_00000d38 (int16_t arg_6h, int16_t arg2) {
    dx = arg2;
    ax = 0x4400;
    bx = *((bp + 6));
    /* [10] -rwx section size 320 named seg_010 */
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = dx;
    ax &= 0x80;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0xd4a */
#include <stdint.h>
 
int16_t fcn_00000d4a (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg_eh, int16_t arg_10h, uint32_t arg3) {
    bx = arg3;
    si = *((bp + 0x10));
    di = *((bp + 0xe));
    __asm ("les bx, [bp + 6]");
    ax = *((es:bx + 0x12));
    dx = *((bp + 6));
    if (ax == dx) {
        if (di > 2) {
            goto label_0;
        }
        if (si <= 0x7fff) {
            goto label_1;
        }
    }
label_0:
    ax = 0xffff;
    goto label_2;
label_1:
    if (*(0x410) == 0) {
        ax = *((bp + 6));
        bx = 0x26a;
        cx = ds;
        if (ax == bx) {
            *(0x410) = 1;
        }
    } else {
        if (*(0x40e) != 0) {
            goto label_3;
        }
        ax = *((bp + 6));
        bx = 0x256;
        cx = ds;
        if (ax != bx) {
            goto label_3;
        }
        *(0x40e) = 1;
    }
label_3:
    __asm ("les bx, [bp + 6]");
    if (*(es:bx) != 0) {
        ax = 1;
        ax = 0;
        __asm ("lcall fcn.000009f2");
    }
    __asm ("les bx, [bp + 6]");
    if ((*((es:bx + 2)) & 4) != 0) {
        __asm ("les bx, [bp + 6]");
        __asm ("lcall fcn.00001bf0");
        cx = es:bx + 8;
        cx = es:bx + 8;
    }
    __asm ("les bx, [bp + 6]");
    *((es:bx + 2)) &= 0xfff3;
    __asm ("les bx, [bp + 6]");
    *((es:bx + 6)) = 0;
    dx = *((bp + 8));
    ax = *((bp + 6));
    ax += 5;
    __asm ("les bx, [bp + 6]");
    *((es:bx + 0xa)) = dx;
    *((es:bx + 8)) = ax;
    __asm ("les bx, [bp + 6]");
    *((es:bx + 0xe)) = dx;
    *((es:bx + 0xc)) = ax;
    if (di != 2) {
        si |= si;
        if (si <= 0) {
            goto label_4;
        }
        *(0x138) = 0xe8;
        *(0x136) = 0xc;
        ax = *((bp + 0xa));
        ax |= *((bp + 0xc));
        if (ax == 0) {
            __asm ("lcall fcn.0000050c");
            cx = si;
            *((bp + 0xc)) = dx;
            *((bp + 0xa)) = ax;
            dx |= ax;
            if (dx != 0) {
                __asm ("les bx, [bp + 6]");
                *((es:bx + 2)) |= 4;
            } else {
                ax = 0xffff;
                goto label_2;
            }
        }
        dx = *((bp + 0xc));
        ax = *((bp + 0xa));
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xe)) = dx;
        *((es:bx + 0xc)) = ax;
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xa)) = dx;
        *((es:bx + 8)) = ax;
        __asm ("les bx, [bp + 6]");
        *((es:bx + 6)) = si;
        if (di != 1) {
            goto label_4;
        }
        __asm ("les bx, [bp + 6]");
        *((es:bx + 2)) |= 8;
        /* [11] -rwx section size 64 named seg_011 */
        di--;
        cl += *((bx + si));
    }
label_4:
    ax = 0;
label_2:
    di = si;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1286 */
#include <stdint.h>
 
int16_t fcn_00001286 (int16_t arg_6h) {
    uint32_t var_4h;
    uint32_t var_2h;
    bx = *((bp + 6));
    bx <<= 1;
    if ((*((bx + 0x3e6)) & 0x200) != 0) {
        ax = 1;
        void (*0x12f2)() ();
    }
    ax = 0x4400;
    bx = *((bp + 6));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if ((*((bx + 0x3e6)) & 0x200) >= 0) {
        if ((dl & 0x80) == 0) {
            ax = 0x4201;
            cx = 0;
            dx = 0;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            if ((dl & 0x80) < 0) {
                goto label_0;
            }
            ax = 0x4202;
            cx = 0;
            dx = 0;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            *((bp - 4)) = ax;
            *((bp - 2)) = dx;
            dx = ax;
            cx = ax;
            if ((dl & 0x80) < 0) {
                goto label_0;
            }
            ax = 0x4200;
            eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
            if ((dl & 0x80) < 0) {
                goto label_0;
            }
            if (dx < *((bp - 2))) {
                goto label_1;
            }
            if (dx <= *((bp - 2))) {
                if (ax < *((bp - 4))) {
                    goto label_1;
                }
            }
            ax = 1;
            void (*0x12f2)() ();
        }
label_1:
        ax = 0;
        void (*0x12f2)() ();
    }
label_0:
    __asm ("lcall fcn.0000046e");
    /* [19] -rwx section size 224 named seg_019 */
    return void (*0x12f2)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x12f2 */
#include <stdint.h>
 
void loc_000012f2 (void) {
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x9a4 */
#include <stdint.h>
 
int16_t fcn_000009a4 (int16_t arg_4h, uint32_t arg3) {
    uint32_t var_4h;
    int16_t var_2h;
    bx = arg3;
    __asm ("les bx, [bp + 4]");
    si = *(es:bx);
    di = *(es:bx);
    __asm ("les bx, [bp + 4]");
    if ((*((es:bx + 2)) & 0x40) != 0) {
        ax = si;
        goto label_0;
    }
    __asm ("les bx, [bp + 4]");
    __asm ("les bx, es:[bx + 0xc]");
    *((bp - 2)) = es;
    *((bp - 4)) = bx;
    while (ax != 0) {
        __asm ("les bx, [bp - 4]");
        *((bp - 4))++;
        if (*(es:bx) == 0xa) {
            di++;
        }
        ax = si;
        si--;
        ax |= ax;
    }
    ax = di;
label_0:
    si = di;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x2625 */
#include <stdint.h>
 
int16_t fcn_00002625 (int16_t arg_6h) {
    ax = 1;
    ax = 0;
    /* [28] -rwx section size 128 named seg_028 */
    __asm ("lcall fcn.0000115d");
    return void (*0x263c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x263c */
#include <stdint.h>
 
void loc_0000263c (void) {
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x984 */
#include <stdint.h>
 
int16_t fcn_00000984 (int16_t arg_6h, int16_t arg_8h, int16_t arg1) {
    ax = arg1;
    ah = 0x4a;
    bx = *((bp + 8));
    es = *((bp + 6));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (? >= ?) {
        ax = 0xffff;
        void (*0x9a2)() ();
    }
    __asm ("lcall fcn.0000046e");
    /* [07] -rwx section size 320 named seg_007 */
    return void (*0x9a2)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x9a2 */
#include <stdint.h>
 
void loc_000009a2 (void) {
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x81c */
#include <stdint.h>
 
int16_t fcn_0000081c (int16_t arg_4h, int16_t arg_6h, int16_t arg3) {
    bx = arg3;
    si = *((bp + 6));
    si++;
    si -= *(0x7b);
    ax = si;
    ax += 0x3f;
    cl = 6;
    ax >>= cl;
    si = ax;
    if (si == *(0x152)) {
        __asm ("les bx, [bp + 4]");
        *(0x8d) = es;
        *(0x8b) = bx;
        ax = 1;
    } else {
        cl = 6;
        si <<= cl;
        di = *(0x91);
        ax = si;
        ax += *(0x7b);
        if (ax > di) {
            si = di;
            si -= *(0x7b);
        }
        __asm ("lcall fcn.00000984");
        cx = 0x7b;
        cx = 0x7b;
        di = ax;
        if (di == -1) {
            ax = si;
            cl = 6;
            ax >>= cl;
            *(0x152) = ax;
            __asm ("les bx, [bp + 4]");
            *(0x8d) = es;
            *(0x8b) = bx;
            ax = 1;
        } else {
            ax = *(0x7b);
            ax += di;
            dx = 0;
            dx = ax;
            ax = 0;
            *(0x91) = dx;
            *(0x8f) = ax;
            ax = 0;
        }
    }
    di = 0x7b;
    si = 0x7b;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x8f3 */
#include <stdint.h>
 
int16_t fcn_000008f3 (signed int16_t arg_6h, signed int16_t arg_8h) {
    int16_t var_8h;
    int16_t var_6h;
    int16_t var_4h;
    int16_t var_2h;
    if (*((bp + 8)) >= 0x10) {
        if (*((bp + 8)) <= 0x10) {
            if (*((bp + 6)) <= 0) {
                goto label_0;
            }
        }
        dx = 0xffff;
        ax = 0xffff;
        void (*0x980)() ();
    }
label_0:
    dx = *(0x8d);
    ax = *(0x8b);
    cx = *((bp + 8));
    bx = *((bp + 6));
    __asm ("lcall fcn.00000313");
    *((bp - 6)) = dx;
    *((bp - 8)) = ax;
    cx = *(0x89);
    bx = *(0x87);
    dx = *((bp - 6));
    ax = *((bp - 8));
    __asm ("lcall fcn.0000036e");
    if (*((bp + 6)) >= 0) {
        cx = *(0x91);
        bx = *(0x8f);
        dx = *((bp - 6));
        ax = *((bp - 8));
        __asm ("lcall fcn.0000036e");
        if (*((bp + 6)) <= 0) {
            goto label_1;
        }
    }
    dx = 0xffff;
    ax = 0xffff;
    void (*0x980)() ();
label_1:
    __asm ("les bx, [0x8b]");
    *((bp - 2)) = es;
    *((bp - 4)) = bx;
    ax = fcn_0000081c (*((bp - 8)), *((bp - 6)));
    ax |= ax;
    if (ax == 0) {
        dx = 0xffff;
        ax = 0xffff;
        void (*0x980)() ();
    }
    dx = *((bp - 2));
    ax = *((bp - 4));
    return void (*0x980)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x10d */
#include <stdint.h>
 
int8_t fcn_0000010d (void) {
    ds = *(cs:);
    __asm ("lcall fcn.00000172");
    *((bx + si)) += al;
    uint16_t (*0x540)(uint16_t) (cs);
    ah = 0x4c;
    al = *((bp + 4));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    cx = 0xe;
    dx = 0x2f;
    return void (*0x1b6)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x13de */
#include <stdint.h>
 
int16_t fcn_000013de (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg3, int16_t arg2) {
    bx = arg3;
    dx = arg2;
    ax = 0x140;
    ax = 0x181;
    ax = 0x26a;
    ax = bp + 0xa;
    __asm ("lcall fcn.000016a7");
    return void (*0x1400)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1400 */
#include <stdint.h>
 
void loc_00001400 (void) {
    /* [21] -rwx section size 624 named seg_021 */
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1f17 */
#include <stdint.h>
 
uint16_t fcn_00001f17 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg2) {
    dx = arg2;
    ax = bp + 0xa;
    ax = 0x256;
    ax = 0x263;
    ax = 0xe;
    ax = 0xae;
    ax = 0xf3;
    __asm ("lcall fcn.00001f45");
    /* [25] -rwx section size 1296 named seg_025 */
    __asm ("in ax, 0xeb");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1f43 */
#include <stdint.h>
 
void loc_00001f43 (void) {
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x43c */
#include <stdint.h>
 
void fcn_0000043c (int16_t arg_6h) {
    do {
label_0:
        si = *((bp + 6));
        if (si <= 2) {
            goto label_1;
        }
        ax = si;
        ax--;
        ax = fcn_0000043c (cs);
    } while (1);
    ax = si;
    ax += 0xfffe;
    ax = fcn_0000043c (cs);
    goto label_0;
    dx = ax;
    /* [02] -rwx section size 64 named seg_002 */
    ax += dx;
    goto label_2;
label_1:
    ax = 1;
label_2:
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x4aa */
#include <stdint.h>
 
int16_t fcn_000004aa (int16_t arg_6h) {
    while (ax != 0) {
        bx = *(0x144);
        bx <<= 1;
        bx <<= 1;
        __asm ("lcall [bx + 0x554]");
        ax = *(0x144);
        *(0x144)--;
        ax |= ax;
    }
    __asm ("lcall [0x136]");
    __asm ("lcall [0x13a]");
    __asm ("lcall [0x13e]");
    __asm ("lcall fcn.0000010d");
    cx = bp + 6;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x12f */
#include <stdint.h>
 
int16_t fcn_0000012f (int16_t arg3) {
    bx = arg3;
    ax = 0x3500;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x5b) = bx;
    *(0x5d) = es;
    ax = 0x3504;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x5f) = bx;
    *(0x61) = es;
    ax = 0x3505;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x63) = bx;
    *(0x65) = es;
    ax = 0x3506;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x67) = bx;
    *(0x69) = es;
    ax = 0x2500;
    ax &= 0xca8c;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1d1 */
#include <stdint.h>
 
int16_t fcn_000001d1 (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
label_1:
    cx = 0x1e;
    dx = 0x3d;
    ds = *(cs:);
    fcn_000001a7 ();
    ax = 3;
    __asm ("lcall fcn.0000010d");
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    cs:0x1c9 = ax;
    cs:0x1cb = ax;
    *(cs:0x1cd) = ds;
    es = *(0x7b);
    si = 0x80;
    ah = 0;
    al = *(es:si);
    es:si++;
    ax++;
    tmp_0 = si;
    si = dx;
    dx = tmp_0;
    tmp_1 = ax;
    ax = bx;
    bx = tmp_1;
    si = *(0x75);
    si += 2;
    cx = 1;
    if (*(0x7d) >= 3) {
        es = *(0x77);
        di = si;
        cl = 0x7f;
        al = 0;
        __asm ("repne scasb al, byte es:[di]");
        __asm ("jcxz 0x287");
        cl ^= 0x7f;
    }
    ax = 1;
    ax += bx;
    ax += cx;
    ax &= 0xfffe;
    di = sp;
    di -= ax;
    if (di < 0) {
        goto label_3;
    }
    ax = es;
    ds = es;
    ax = ss;
    es = ss;
    cx--;
    do {
        *(es:di) = *(si);
        cx--;
        si++;
        es:di++;
    } while (cx != 0);
    al = 0;
    *(es:di) = al;
    es:di++;
    ds = bp;
    tmp_2 = dx;
    dx = si;
    si = tmp_2;
    tmp_3 = cx;
    cx = bx;
    bx = tmp_3;
    ax = bx;
    dx = bx;
    bx++;
label_0:
    fcn_0000025f ();
    if (bx > 0) {
        goto label_4;
    }
    if (bx < 0) {
        do {
            goto label_5;
        }
        al = fcn_0000025f ();
    } while (bx > 0);
label_4:
    if (al == 0x20) {
        goto label_6;
    }
    if (al == 0xd) {
        goto label_6;
    }
    if (al != 9) {
        goto label_0;
    }
label_6:
    al = 0;
    goto label_0;
    do {
label_3:
        __asm ("ljmp 0:0x1af");
        goto label_1;
label_5:
        cx += dx;
        ds = *(cs:);
        *(0x6b) = bx;
        bx++;
        bx += bx;
        bx += bx;
        si = sp;
        bp -= bx;
    } while (bp < 0);
    *(0x6d) = bp;
    *(0x6f) = ss;
label_2:
    __asm ("jcxz 0x2c2");
    *(bp) = si;
    *((bp + 2)) = ss;
    bp += 4;
    do {
        al = *(ss:);
        ss:++;
        al |= al;
        __asm ("loopne 0x2ba");
    } while (1);
    if (al == 0) {
        goto label_2;
    }
    ax = 0;
    *(bp) = ax;
    *((bp + 2)) = ax;
    __asm ("ljmp cs:[0x1c9]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x2cf */
#include <stdint.h>
 
int16_t fcn_000002cf (void) {
    es = *(0x77);
    di = 0;
    __asm ("lcall fcn.0000050c");
    bx = ax;
    *(0x71) = ax;
    *(0x73) = dx;
    ds = dx;
    ax |= dx;
    if (ax == 0) {
        __asm ("ljmp 0:0x1af");
    }
    ax = 0;
    cx = 0xffff;
    do {
        *(bx) = di;
        *((bx + 2)) = es;
        bx += 4;
        __asm ("repne scasb al, byte es:[di]");
    } while (*(es:di) != al);
    *(bx) = ax;
    *((bx + 2)) = ax;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x3c2 */
#include <stdint.h>
 
int16_t fcn_000003c2 (int16_t arg2) {
    signed int16_t var_4h;
    int16_t var_2h;
    dx = arg2;
    ax = 0x94;
    __asm ("lcall fcn.000013de");
    cx = ax;
    cx = ax;
    ax = bp - 4;
    ax = 0xb1;
    __asm ("lcall fcn.00001f17");
    si = 1;
    while (si <= *((bp - 4))) {
        ax = 0xb4;
        __asm ("lcall fcn.000013de");
        cx = ax;
        cx = ax;
        ax = bp - 2;
        ax = 0xc3;
        __asm ("lcall fcn.00001f17");
        __asm ("lcall fcn.0000043c");
        cx = bp - 2;
        di = ax;
        ax = 0xc6;
        __asm ("lcall fcn.000013de");
        si++;
    }
    ax = 0;
    __asm ("lcall fcn.000004aa");
    cx = ax;
    di = ax;
    si = ax;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x172 */
#include <stdint.h>
 
int16_t fcn_00000172 (void) {
    ax = 0x2500;
    __asm ("lds dx, [0x5b]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = 0x2504;
    __asm ("lds dx, [0x5f]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = 0x2505;
    __asm ("lds dx, [0x63]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = 0x2506;
    __asm ("lds dx, [0x67]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x1a7 */
#include <stdint.h>
 
void fcn_000001a7 (void) {
    ah = 0x40;
    bx = 2;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe @ 0x25f */
#include <stdint.h>
 
int16_t fcn_0000025f (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    ax |= ax;
    if (ax != 0) {
        dx++;
        *(es:di) = al;
        es:di++;
        al |= al;
        if (al != 0) {
            goto label_0;
        }
        bx++;
    }
label_0:
    tmp_0 = al;
    al = ah;
    ah = tmp_0;
    al = 0;
    __asm ("stc");
    __asm ("jcxz 0x286");
    al = *(si);
    si++;
    cx--;
    al -= 0x22;
    if (al != 0) {
        al += 0x22;
        if (al == 0x5c) {
            if (*(si) != 0x22) {
                goto label_1;
            }
            al = *(si);
            si++;
            cx--;
        }
label_1:
        si |= si;
    }
    return ax;
}

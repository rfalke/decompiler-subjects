

r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x24).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xdc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4640).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x45ce */
#include <stdint.h>
 
void fcn_000045a8 () {
    if ((a0 & (1 << 0x2)) == 0) {
        __asm ("bset.b 0x2, 0x10(a0)");
        d7 = *(a0);
        if (d7 != d5) {
            goto label_0;
        }
        __asm ("bmi.w 0x45e2");
        __asm ("bpl.w 0x45e2");
        d7 += *((0x4 + a0));
    }
label_0:
    d0 = 0x21;
    return __asm ("jmp fcn.0000041a");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x89c8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8906).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6308).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6468).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x67c8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x648c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x632a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6224 */
#include <stdint.h>
 
void fcn_00006224 () {
    __asm ("movep.l 0x4eb9(a0), d0");
    d0 |= 0xa0;
    return void (*0x62b8)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x588).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x84e0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x831a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8344 */
#include <stdint.h>
 
void fcn_00008344 () {
    *((0xc + a3)) = 0;
    fcn_0000849a ();
    a0 = *(0x4ba);
    *(a0) = *(d7);
    return void (*0x83dc)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x849a */
#include <stdint.h>
 
void fcn_0000849a () {
    a1 = *(0x4ba);
    *(a1) = *((0xa + a0));
    return void (*0x84ba)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x84ba).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8326 */
#include <stdint.h>
 
void fcn_00008326 () {
    *((a7 -= 4)) = d1;
    *((a7 -= 4)) = d2;
    *((a7 -= 4)) = d4;
    *((a7 -= 4)) = d7;
    *((a7 -= 4)) = a0;
    *((a7 -= 4)) = a2;
    *((a7 -= 4)) = a3;
    d4 = *(d0);
    0x83c2.l ();
    if (d7 == 0) {
        d0 = 0x0;
        void (*0x83e8)() ();
    }
    a3 = a0;
    if (d4 == 0xffff) {
    }
    *((0xc + a3)) = *(d4);
    a0 = *(0x4ba);
    d0 = *(a0);
    if (d4 == 0xffff) {
        *(a0) = *(d7);
        void (*0x83dc)() ();
    }
    a2 = *(0x4ff8);
    if (d4 == 0) {
    }
    fcn_00008236 ();
    __asm ("cmpa.l 0x0, a0");
    if (d4 == 0) {
        a0 = *(a7);
        d0 = *(d7);
        fcn_00008440 ();
        d0 = 0x0;
        void (*0x83e8)() ();
    }
    *((a7 -= 4)) = *(a0);
    do {
        if ((a0 & (1 << 0x2)) == 0) {
            goto label_0;
        }
        d2 = *((0xc + a0));
        if ((a0 & (1 << 0x2)) == 0) {
            goto label_0;
        }
        a0 = *((-0x4 + a2 + d2));
    } while (1);
label_0:
    *(a3) = *(a0);
    *((0x4 + a3)) = *((0x4 + a0));
    a0 = *(a7);
    d2 = *((0xe + a0));
    if ((a0 & (1 << 0x2)) != 0) {
        goto label_1;
    }
    *((0xe + a0)) = *(d7);
    void (*0x83dc)() ();
    do {
label_1:
        a0 = *((-0x4 + a2 + d2));
        d2 = *((0xa + a0));
    } while ((a0 & (1 << 0x2)) != 0);
    *((0xa + a0)) = *(d7);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8440).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x83dc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7d4e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x882e */
#include <stdint.h>
 
void fcn_0000882e () {
    do {
        *(a1) = *(a0);
        a1 += 4;
        a0 += 4;
        *(a1) = *(a0);
        a1 += 4;
        a0 += 4;
        *(a1) = *(a0);
        a1 += 4;
        a0 += 4;
        *(a1) = *(a0);
        a1 += 4;
        a0 += 4;
        *(a1) = *(a0);
        a1 += 4;
        a0 += 4;
        *(a1) = *(a0);
        a1 += 4;
        a0 += 4;
        *(a1) = *(a0);
        a1 += 4;
        a0 += 4;
        *(a1) = *(a0);
        a1 += 4;
        a0 += 4;
        d1 -= 0x1;
    } while (? != ?);
    d0 &= 0x1f;
    d0 >>= 0x1;
    while (1) {
        *(a1) = *(a0);
        a1 += 2;
        a0 += 2;
        __asm ("dbra d0, 0x8838");
    }
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x883e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7500 */
#include <stdint.h>
 
void fcn_00007500 () {
    *((0x4 + a0)) -= 0x1;
    d0 -= *((0x2 + a0));
    __asm ("neg.w d0");
    __asm ("mulu.w 0x6(a0), d0");
    a0 = *((0x2 + a1 + d0));
    d0 = *(d1);
    return void (*0x7552)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7552).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6fd4 */
#include <stdint.h>
 
void fcn_00006fd4 () {
    a6 = *(0x4);
    void (*a6)() ();
    a6 = *(a7);
    *((a7 -= 4)) = *(a6);
    a6 = *(0xae);
    void (*a6)() ();
    a6 = *(a7);
    a0 = *(0x4e6c);
    a1 = *(0x4e84);
    d0 = 0x0;
    *((a7 -= 4)) = *(a6);
    a6 = *(0xae);
    d0 |= 0xae;
    return void (*a6)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7006).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb028).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3144 */
#include <stdint.h>
 
void fcn_00003144 () {
    d0 |= 0x2;
    __asm ("adda.l d2, a0");
    d0 = *((0x4 + a5));
    d0 &= 0xf;
    if (d0 == 0xf) {
        *((0xa + a5)) += 0x10;
    }
    d6 = *((0xa + a5));
    d6 >>= 0x4;
    if (d0 == 0xf) {
        goto label_2;
    }
    d7 = *((0xc + a5));
    d7 -= 0x1;
    d0 = *(0xb0);
    d0 -= d6;
    d0 -= d6;
    d1 = *(0x180);
    d1 -= d6;
    d1 -= d6;
    if ((d6 & 1) != 0) {
        goto label_1;
    }
label_0:
    d5 = *(d6);
    do {
        fcn_000030fe ();
        d5 -= 0x2;
    } while ((d6 & 1) != 0);
    __asm ("adda.w d0, a0");
    __asm ("adda.w d1, a1");
    __asm ("dbra d7, 0x3186");
    goto label_0;
    goto label_2;
label_1:
    d5 = *(d6);
    fcn_000030c0 ();
    d5 -= 0x1;
    if ((d6 & 1) == 0) {
        goto label_3;
    }
    do {
        fcn_000030fe ();
        d5 -= 0x2;
    } while ((d6 & 1) != 0);
label_3:
    __asm ("adda.w d0, a0");
    __asm ("adda.w d1, a1");
    __asm ("dbra d7, 0x319c");
    goto label_1;
label_2:
    d0 = *((0x4 + a5));
    d0 &= 0xf;
    if (d0 == 0xf) {
        void (*0x3200)() ();
    }
    a0 = *(0x2d4c);
    a1 = *(0x4e68);
    d0 = *((0x4 + a5));
    d1 = *((0x2 + a5));
    fcn_000005a0 ();
    __asm ("adda.l d2, a1");
    fcn_00002e02 ();
    __asm ("adda.l d2, a0");
    a2 = *(0xce);
    d3 += d3;
    d0 = *((a2 + d3.w));
    return fcn_00003052 ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xaed0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xbf4 */
#include <stdint.h>
 
void fcn_00000bf4 () {
    d1 = *((0x2 + a5));
    fcn_000005a0 ();
    __asm ("adda.l d2, a0");
    a1 = *(0xce);
    d3 += d3;
    *((0x74 + a6)) = *((a1 + d3.w));
    return fcn_00000a74 ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5a0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa74).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7dfa).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7706 */
#include <stdint.h>
 
void fcn_00007706 () {
    __asm ("bchg.b d0, d6");
    d0 |= 0x98;
    *(0x4e9a) = *(0x148);
    d3 = 0x12;
    if (0x4e5e.l == 0) {
        d3 = 0x18;
    }
    a1 = *(0x4e9c);
    d2 = 0x3;
    do {
        d0 = *(a1);
        a1 += 4;
        if (0x4e5e.l != 0) {
            a2 = d0;
            a3 = *((a2 + d3.w));
            d0 = *((0x4 + a3));
            if (0x4e5e.l == 0) {
                d0 = *((0x4 + a2));
                d0 += 0x1;
                d0 += d0;
                __asm ("mulu.w 0x6(a2), d0");
                __asm ("mulu.w 0x8, d0");
                fcn_0000390c ();
                *((0x4 + a3)) = *(d0);
            }
            fcn_000044a2 ();
            a0 = d0;
            d0 = *(a2);
            d1 = *((0x2 + a2));
            if ((a2 & (1 << 0x3)) != 0) {
                d0 += 0x4e98.l;
                d1 += 0x4e9a.l;
            }
            d5 = 0x8;
            d6 = *((0x4 + a2));
            d6 += 0x1;
            d7 = *((0x6 + a2));
            fcn_00001dd2 ();
            *(a3) = *(d0);
            *((0x2 + a3)) = *(d1);
            d0 = *((0x4 + a3));
            fcn_000044c6 ();
        }
        __asm ("dbra d2, 0x772a");
    } while (1);
    if (0x4e96.l != 0) {
        void (*0x782e)() ();
    }
    a1 = *(0x4e9c);
    d2 = 0x3;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x70a0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x47ae */
#include <stdint.h>
 
void fcn_000047ae () {
label_0:
    a1 = a2;
    do {
        if (*((0xc + a1)) == 0) {
            goto label_1;
        }
        a0 = *((0xc + a1));
        fcn_0000486e ();
    } while (1);
label_1:
    fcn_000047e2 ();
    *(a0) = *(a1);
    *((0x4 + a0)) = *((0x4 + a1));
    a1 = a2;
    fcn_0000484c ();
    a2 = *((0x12 + a2));
    __asm ("dbra d7, 0x47a8");
    goto label_0;
    a0 = aav.0x000004d8;
    d7 = *(aav.0x0000aaaa);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x13c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x198 */
#include <stdint.h>
 
void fcn_00000198 () {
    __asm ("subi.b 0x94, d2");
    d0 = *((a4 -= 4));
    d2 += 0x5c;
    __asm ("chk.w -(a0), d0");
    d0 |= 0x1;
    d1 |= 0x84;
    d0 |= 0xe9;
    d0 |= 0x1c;
    return __asm ("jmp entry0");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20e */
#include <stdint.h>
 
void fcn_0000020e () {
    d0 |= 0x6;
    0x6306.l ();
    fcn_00006468 ();
    fcn_00006224 ();
    fcn_00000588 ();
    fcn_000084e0 ();
    __asm ("divu.w -(a0), d2");
    fcn_00007d4e ();
    fcn_0000882e ();
    fcn_0000883e ();
    fcn_00007500 ();
    a0 = aav.0x00004e64;
    usp = *(a4);
    fcn_00006fd4 ();
    fcn_00007006 ();
    d0 = 0x6;
    fcn_0000b028 ();
    do {
        fcn_00007dfa ();
        fcn_00007706 ();
        fcn_000070a0 ();
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6244 */
#include <stdint.h>
 
void fcn_00006244 () {
    *((a7 -= 4)) = d1;
    *((a7 -= 4)) = a0;
    *((a7 -= 4)) = a1;
    a1 = *(0x4b66);
    d0 |= 0x66;
    __asm ("suba.l a2, a2");
    d1 = 0x1;
    *((a7 -= 4)) = *(a6);
    a6 = *(0x4afe);
    void (*a6)() ();
    a6 = *(a7);
    d1 = *(a7);
    a7 += 4;
    a0 = *(a7);
    a7 += 4;
    a1 = *(a7);
    a7 += 4;
    if (d0 != 0x1) {
        0x4b66.l = 0;
    }
    d0 = *((0x8 + a0));
    d1 = 0x0;
    a1 = *(0x17c);
    d7 = 0x7;
    do {
        d2 = *(a1);
        a1++;
        if ((d0 & (1 << d7)) != 0) {
            __asm ("bset.b d2, d1");
        }
        __asm ("dbra d7, 0x6280");
    } while (1);
    d0 = 0x0;
    d0 = *((0x7 + a0));
    __asm ("swap d0");
    d0 |= 0x4b66.l;
    d0 |= d1;
    fcn_0000613c ();
    return void (*0x62b8)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6b46).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5d74).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4954 */
#include <stdint.h>
 
void fcn_00004954 () {
    *((0x11 + a2)) = *(d5);
    d4 += d2;
    a2 = *((0x12 + a2));
    d7 += 0x1;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x528).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x49f8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5e7a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6ebe */
#include <stdint.h>
 
void fcn_00006ebe () {
    d2 = 0x0;
    d3 = 0x0;
    *((a7 -= 4)) = *(a6);
    a6 = *(0xae);
    void (*a6)() ();
    __asm ("fbf.l 0x2c5fdeda");
    a6 = *(a7);
    d0 = 0xc;
    d1 = *(0x10001);
    d1 |= 0x1;
    *((a7 -= 4)) = *(a6);
    a6 = *(0x4);
    void (*a6)() ();
    a6 = *(a7);
    *(0x4e74) = *(d0);
    a6 = d0;
    a0 = d0;
    d0 = 0x5;
    *((a7 -= 4)) = *(a6);
    a6 = *(0xaa);
    void (*a6)() ();
    a6 = *(a7);
    a1 = a6;
    d0 = 0x0;
    d1 = 0x0;
    *((a7 -= 4)) = *(a6);
    a6 = *(0xaa);
    void (*a6)() ();
    a6 = *(a7);
    a1 = a6;
    *((a7 -= 4)) = *(a6);
    a6 = *(0xaa);
    void (*a6)() ();
    a6 = *(a7);
    a1 = a6;
    d0 = *(0x9c);
    d1 = *(0x8010);
    *((a7 -= 4)) = *(a6);
    a6 = *(0xaa);
    void (*a6)() ();
    a6 = *(a7);
    a1 = a6;
    *((a7 -= 4)) = *(a6);
    a6 = *(0xaa);
    void (*a6)() ();
    a6 = *(a7);
    a1 = a6;
    d0 = *(0xf0);
    d1 = 0x0;
    *((a7 -= 4)) = *(a6);
    a6 = *(0xaa);
    void (*a6)() ();
    a6 = *(a7);
    a1 = a6;
    *((a7 -= 4)) = *(a6);
    a6 = *(0xaa);
    void (*a6)() ();
    a6 = *(a7);
    a1 = a6;
    d0 = *(0x9c);
    d1 = *(0x8010);
    *((a7 -= 4)) = *(a6);
    a6 = *(0xaa);
    void (*a6)() ();
    a6 = *(a7);
    a1 = a6;
    *((a7 -= 4)) = *(a6);
    a6 = *(0xaa);
    void (*a6)() ();
    a6 = *(a7);
    a1 = a6;
    d0 = *(0x2710);
    d1 = *(0xff);
    *((a7 -= 4)) = *(a6);
    a6 = *(0xaa);
    void (*a6)() ();
    a6 = *(a7);
    *((a7 -= 4)) = *(a6);
    a6 = *(0x4);
    void (*a6)() ();
    a6 = *(a7);
    a0 = *(0x4e6c);
    a0 = *((0x2c + a0));
    *((0x14 + a0)) = *(0x4e74);
    *((a7 -= 4)) = *(a6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x62a6 */
#include <stdint.h>
 
void fcn_000062a6 () {
    if (d0 != 0x10) {
        void (*0x62b8)() ();
    }
    d0 = 0x0;
    __asm ("bset.b 0x1d, d0");
    return fcn_0000613c ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2ba).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x654e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x86bc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7ec4 */
#include <stdint.h>
 
void fcn_00007ec4 () {
    d0 |= 0x3e;
    a1 = *(0x4eca);
    __asm ("cmpa.l 0x4ece, a1");
    if (? == ?) {
        void (*0x7f00)() ();
    }
    a0 = a1;
    if ((a0 & 1) != 0) {
        0x4ec2.l -= 0x1;
    }
    a1 = *((-0x22 + a1));
    *(0x4eca) = *(a1);
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x7efa)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x36c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8a3e */
#include <stdint.h>
 
void fcn_00008a3e () {
    d0 |= 0xaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xe20).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x28a6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x251a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x44c6 */
#include <stdint.h>
 
void fcn_000044a4 () {
    d0 -= 0x1;
    if (? == ?) {
        fcn_00004380 ();
        d0 = *(0x2710);
    }
    *(0xf4) = *(d0);
    d0 = *(0xf2);
    d0 -= 0x1;
    if (? == ?) {
        *(0xf2) = *(0x14);
    }
    *(0xf2) = *(d0);
    a0 = *(0xad2);
    d7 = *(0x1f3);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x36b2 */
#include <stdint.h>
 
void fcn_000036b2 () {
    d1 = *((0x90 + a0));
    d1 <<= 0x8;
    d1 = *((0x60 + a0));
    *((a0 -= 2)) |= 0x4841;
    __asm ("swap d1");
    d1 = *((0x30 + a0));
    d1 <<= 0x8;
    d1 = *(a0);
    d4 = *(a5);
    d5 = *(a6);
    d4 &= d0;
    d5 &= d0;
    __asm ("eor.l d4, d0");
    __asm ("eor.l d5, d0");
    d4 >>= 0x7;
    d5 <<= 0x7;
    d0 |= d4;
    d0 |= d5;
    d4 = *(a5);
    d5 = *(a6);
    d4 &= d1;
    d5 &= d1;
    __asm ("eor.l d4, d1");
    __asm ("eor.l d5, d1");
    d4 >>= 0x7;
    d5 <<= 0x7;
    d1 |= d4;
    d1 |= d5;
    d4 = *(a4);
    d4 &= d0;
    __asm ("eor.l d4, d0");
    d4 >>= 0x2;
    __asm ("swap d4");
    d4 <<= 0x2;
    d0 |= d4;
    d4 = *(a4);
    d4 &= d1;
    __asm ("eor.l d4, d1");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x26f0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x390c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x85f6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x44a4 */
#include <stdint.h>
 
void fcn_000044a4 () {
    d0 -= 0x1;
    if (? == ?) {
        fcn_00004380 ();
        d0 = *(0x2710);
    }
    *(0xf4) = *(d0);
    d0 = *(0xf2);
    d0 -= 0x1;
    if (? == ?) {
        *(0xf2) = *(0x14);
    }
    *(0xf2) = *(d0);
    a0 = *(0xad2);
    d7 = *(0x1f3);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x44a2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x392c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x29d8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2e02 */
#include <stdint.h>
 
void fcn_00002e02 () {
    __asm ("addx.w d3, d3");
    __asm ("addx.w d5, d5");
    d6 += d6;
    __asm ("addx.w d2, d2");
    __asm ("addx.w d5, d5");
    d6 += d6;
    __asm ("addx.w d1, d1");
    __asm ("addx.w d5, d5");
    d6 += d6;
    __asm ("addx.w d0, d0");
    __asm ("addx.w d5, d5");
    d5 = *((a4 + d5.w));
    d5 <<= 0x4;
    d6 = 0x0;
    d5 += d5;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2c08).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2c26).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3052).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x30fe */
#include <stdint.h>
 
void fcn_000030fe () {
    __asm ("bclr.b d2, -(a0)");
    __asm ("adda.l d2, a1");
    fcn_00002e02 ();
    __asm ("adda.l d2, a0");
    a2 = *(0xac);
    d3 += d3;
    d0 = *((a2 + d3.w));
    fcn_00003052 ();
    d0 = *(a5);
    d0 &= 0xfff0;
    d0 += 0x10;
    *(a5) = *(d0);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x30c0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3070).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x32ec).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34b8 */
#include <stdint.h>
 
void fcn_000034b8 () {
    a4 = *(0x3333cccc);
    a5 = *(0x55005500);
    d0 -= 0x2;
    a6 = *(0xaa00aa);
    d6 = *(d0);
    __asm ("ror.w 0x8, d6");
    d2 = 0x0;
    d7 -= 0x1;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4544).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x45a8 */
#include <stdint.h>
 
void fcn_000045a8 () {
    if ((a0 & (1 << 0x2)) == 0) {
        __asm ("bset.b 0x2, 0x10(a0)");
        d7 = *(a0);
        if (d7 != d5) {
            goto label_0;
        }
        __asm ("bmi.w 0x45e2");
        __asm ("bpl.w 0x45e2");
        d7 += *((0x4 + a0));
    }
label_0:
    d0 = 0x21;
    return __asm ("jmp fcn.0000041a");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x41da).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x416e */
#include <stdint.h>
 
void fcn_0000416e () {
    d0 |= 0x0;
    *((-0x5556 + a0)) |= aav.0x0000aaaa;
    *(0xf1) = 1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3702 */
#include <stdint.h>
 
void fcn_00003702 () {
    d4 >>= 0x2;
    __asm ("swap d4");
    d4 <<= 0x2;
    d1 |= d4;
    d4 = *(a2);
    d5 = *(a3);
    d4 &= d0;
    d5 &= d1;
    __asm ("eor.l d4, d0");
    __asm ("eor.l d5, d1");
    d4 <<= 0x4;
    d5 >>= 0x4;
    d0 |= d5;
    d1 |= d4;
    d2 = *(d0);
    d0 = *((a1 + d2.w));
    __asm ("ror.l 0x8, d0");
    d2 = *(d0);
    d0 = *((a1 + d2.w));
    __asm ("ror.l 0x8, d0");
    d2 = *(d0);
    d0 = *((a1 + d2.w));
    __asm ("ror.l 0x8, d0");
    d2 = *(d0);
    d0 = *((a1 + d2.w));
    __asm ("ror.l 0x8, d0");
    d2 = *(d1);
    d1 = *((a1 + d2.w));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x451c */
#include <stdint.h>
 
void fcn_0000451c () {
    do {
        if ((a0 & 1) == 0) {
            fcn_000045a8 ();
            if ((a0 & 1) != 0) {
                goto label_0;
            }
            if (d1 != *(a1)) {
                goto label_0;
            }
            d0 = *((0x1 + a1));
            d0 -= 0x1;
            if (d1 == *(a1)) {
                goto label_0;
            }
            *((0x1 + a1)) = *(d0);
        }
label_0:
        a0 = *((0x14 + a0));
        __asm ("dbra d7, 0x450a");
    } while (1);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x38ae).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4212 */
#include <stdint.h>
 
void fcn_00004212 () {
    __asm ("divs.w -(a0), d0");
    d7 = 0xff;
    d0 = 0x0;
    d0 = *((0x13 + a3));
    if (? != ?) {
        a2 = aav.0x000004d8;
        d0 -= 0x1;
        __asm ("mulu.w 0x6, d0");
        __asm ("adda.w d0, a2");
        d0 = 0x0;
        d0 = *(a2);
    }
    fcn_0000ef58 ();
    __asm ("cmpa.l 0x0, a2");
    if (? == ?) {
        void (*0x4268)() ();
    }
    *(0xf1) = 1;
    *((a7 -= 4)) = *(a0);
    a1 = *(a0);
    a0 = *(a3);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3824).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x393c */
#include <stdint.h>
 
void fcn_0000393c () {
    __asm ("subi.b 0xaa, (a2)+");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8640).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x44de).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xef16 */
#include <stdint.h>
 
void fcn_0000ef16 () {
    d1 &= 0xfff;
    d1 = *((a0 + d1.w));
    __asm ("muls.w 0xd3ba.l, d0");
    __asm ("muls.w 0xd3ba.l, d1");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x863e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x39ac).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3764 */
#include <stdint.h>
 
void fcn_00003764 () {
    d5 &= d1;
    __asm ("eor.l d4, d0");
    __asm ("eor.l d5, d1");
    d4 <<= 0x4;
    d5 >>= 0x4;
    d0 |= d5;
    d1 |= d4;
    d4 = *(a4);
    d4 &= d0;
    __asm ("eor.l d4, d0");
    d4 >>= 0x2;
    __asm ("swap d4");
    d4 <<= 0x2;
    d0 |= d4;
    d4 = *(a4);
    d4 &= d1;
    __asm ("eor.l d4, d1");
    d4 >>= 0x2;
    __asm ("swap d4");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x42e2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x424a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xf064 */
#include <stdint.h>
 
void fcn_0000f064 () {
    d0 |= 0xaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x40b8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3f18 */
#include <stdint.h>
 
void fcn_00003f18 () {
    d6 += *((0x4 + a3));
    fcn_00004058 ();
    if (? == ?) {
        void (*0x3ec4)() ();
    }
    d6 -= *((0x4 + a0));
    *((0x10 + a0)) = 0;
    fcn_0000416e ();
    return void (*0x3ec4)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x63bc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x652e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x40e6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3f4c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3a6a */
#include <stdint.h>
 
void fcn_00003a6a () {
    a1 = aav.0x000004d8;
    d2 = 0x1;
    d7 = *(0xfe);
    do {
        if (d0 == *((0x4 + a1))) {
            if (d1 == *(a1)) {
                goto label_2;
            }
        }
        d2 += 0x1;
        a1 += 0x6;
        __asm ("dbra d7, 0x3a76");
    } while (1);
    goto label_3;
label_2:
    a2 = *(0x424);
    d7 = *(0x422);
    goto label_4;
label_1:
    a0 = a2;
    do {
label_0:
        d0 = *((0xc + a0));
        if (d1 == *(a1)) {
            goto label_5;
        }
        a0 = d0;
    } while (d2 != *((0x13 + a0)));
    if ((a0 & (1 << 0x1)) != 0) {
        goto label_0;
label_5:
        a2 = *((0x12 + a2));
label_4:
        __asm ("dbra d7, aav.0x00003a9a");
        goto label_1;
label_3:
        __asm ("suba.l a0, a0");
    }
    d0 = *(a7);
    a7 += 4;
    d1 = *(a7);
    a7 += 4;
    d2 = *(a7);
    a7 += 4;
    d7 = *(a7);
    a7 += 4;
    a2 = *(a7);
    a7 += 4;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x642e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x69be).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6624).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3ac2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4058).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4106).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4138 */
#include <stdint.h>
 
void fcn_00004138 () {
    *((a7 -= 4)) = d0;
    *((a7 -= 4)) = a0;
    *((a7 -= 4)) = a1;
    *((a7 -= 4)) = a2;
    d0 = 0x0;
    d0 = *((0x13 + a3));
    if (? != ?) {
        a2 = aav.0x000004d8;
        d0 -= 0x1;
        __asm ("mulu.w 0x6, d0");
        __asm ("adda.w d0, a2");
        d0 = 0x0;
        d0 = *(a2);
    }
    fcn_0000ef58 ();
    __asm ("cmpa.l 0x0, a2");
    if (? == ?) {
        void (*0x41da)() ();
    }
    fcn_00004028 ();
    __asm ("cmpa.l 0x0, a0");
    d0 |= 0xaa;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3ee6 */
#include <stdint.h>
 
void fcn_00003ee6 () {
label_1:
    if (*((0x11 + a1)) != 0x0) {
        goto label_2;
    }
    a3 = a1;
    d6 = 0x0;
    do {
label_0:
        d0 = *((0xc + a3));
        if (*((0x11 + a1)) == 0x0) {
            goto label_3;
        }
        a3 = d0;
    } while (*((0x10 + a3)) == 0);
    if (*((0x12 + a3)) != 0) {
        goto label_0;
    }
    d0 = 0x0;
    d0 = *((0x13 + a0));
    if (*((0x12 + a3)) == 0) {
        goto label_0;
    }
    a0 = aav.0x000004d8;
    d0 -= 0x1;
    __asm ("mulu.w 0x6, d0");
    __asm ("adda.w d0, a0");
    d1 = *(a0);
    fcn_0000ef16 ();
    if (d1 != 0x2) {
        goto label_0;
    }
    d0 = *((0x4 + a3));
    fcn_00003a6a ();
    if (d0 == 0) {
        goto label_0;
    }
    fcn_00004544 ();
    if (d0 != 0) {
        goto label_0;
    }
    fcn_0000451c ();
label_3:
    if (d6 != 0) {
        fcn_00003f4c ();
    }
label_2:
    a1 = *((0x12 + a1));
    __asm ("dbra d7, 0x3eb6");
    goto label_1;
    d1 = *(a7);
    a7 += 2;
    d0 = *(a7);
    a7 += 4;
    return 0xaaaaaaaa.l ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3f80 */
#include <stdint.h>
 
void fcn_00003f80 () {
    *((a7 -= 4)) = *(d0);
    *((a7 -= 2)) = *(d1);
    a1 = *(0x424);
    d7 = *(0x422);
    goto label_2;
label_1:
    if (*((0x11 + a1)) != 0x0) {
        goto label_3;
    }
    a3 = a1;
    d6 = 0x0;
    do {
label_0:
        d0 = *((0xc + a3));
        if (*((0x11 + a1)) == 0x0) {
            goto label_4;
        }
        a3 = d0;
    } while (*((0x10 + a3)) == 0);
    if (*((0x12 + a3)) != 0) {
        goto label_0;
    }
    d0 = 0x0;
    d0 = *((0x13 + a0));
    if (*((0x12 + a3)) == 0) {
        goto label_0;
    }
    a0 = aav.0x000004d8;
    d0 -= 0x1;
    __asm ("mulu.w 0x6, d0");
    __asm ("adda.w d0, a0");
    d1 = *(a0);
    fcn_0000ef16 ();
    if (d1 != 0x3) {
        goto label_0;
    }
    d0 = *((0x4 + a3));
    d1 = *(0x2);
    fcn_00003a6a ();
    if (d0 == 0) {
        goto label_0;
    }
    fcn_00004544 ();
    if (d0 != 0) {
        goto label_0;
    }
    fcn_0000451c ();
    d6 += *((0x4 + a0));
    fcn_00004058 ();
    d0 |= 0x58;
    if (d0 == 0) {
        goto label_0;
    }
    d6 -= *((0x4 + a0));
    *((0x10 + a0)) = 0;
    fcn_0000416e ();
    goto label_0;
label_4:
    if (d6 != 0) {
        fcn_00003f4c ();
    }
label_3:
    a1 = *((0x12 + a1));
label_2:
    __asm ("dbra d7, 0x3f94");
    goto label_1;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xef58).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4028).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x486e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x47e2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x484c */
#include <stdint.h>
 
void fcn_0000484c () {
    __asm ("bpl.b 0x4864");
    d0 = *(0x416);
    __asm ("bpl.b 0x4864");
    d0 = 0x1d;
    __asm ("jmp fcn.0000041a");
    *(0x422) = *(d7);
    d0 = *(a7);
    a7 += 4;
    d1 = *(a7);
    a7 += 4;
    d2 = *(a7);
    a7 += 4;
    d3 = *(a7);
    a7 += 4;
    d4 = *(a7);
    a7 += 4;
    d5 = *(a7);
    a7 += 4;
    d6 = *(a7);
    a7 += 4;
    d7 = *(a7);
    a7 += 4;
    a0 = *(a7);
    a7 += 4;
    a1 = *(a7);
    a7 += 4;
    a2 = *(a7);
    a7 += 4;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xef2a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4442).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4380).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x43be).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4440).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x46b8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x48f4 */
#include <stdint.h>
 
void fcn_000048f4 () {
label_0:
    a2 = *((-0x12 + a2));
    if (d5 != *((0x11 + a2))) {
        void (*0x4960)() ();
    }
    d0 = *((0x4 + a2));
    __asm ("bmi.b 0x4910");
    d3 -= d0;
    d4 -= d0;
    d0 = *((0x4 + a2));
    a1 = *(a2);
    *((a7 -= 4)) = *(a6);
    a6 = *(0x4);
    d4 |= 0xae;
    __asm ("fsave 0x2c5f(a6)");
    d7 -= 0x1;
    if (d3 == d0) {
        void (*0x4960)() ();
    }
    goto label_0;
    d4 -= d0;
    d0 = *((0x4 + a2));
    a1 = *(a2);
    *((a7 -= 4)) = *(a6);
    a6 = *(0x4);
    void (*d2)() ();
    a6 = *(a7);
    d7 -= 0x1;
    d0 -= d3;
    __asm ("bmi.b 0x4960");
    d2 = *(d0);
    d1 = *(d6);
    d1 |= 0x1;
    *((a7 -= 4)) = *(a6);
    a6 = *(0x4);
    void (*a6)() ();
    a6 = *(a7);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x502).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xeef8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5ae0 */
#include <stdint.h>
 
void fcn_00005ae0 () {
    d0 |= 0x13;
    d1 = *((0xa + a5));
    d2 = *(a0);
    d3 = *(d7);
    *((a7 -= 4)) = *(a6);
    a6 = *(0xa6);
    void (*a6)() ();
    a6 = *(a7);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4b6a */
#include <stdint.h>
 
void fcn_00004b6a () {
    a6 = *(a7);
    a0 = *(0xaaaaaaaa);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5afe).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x378a */
#include <stdint.h>
 
void fcn_0000378a () {
    d4 <<= 0x2;
    d1 |= d4;
    d4 = *(a5);
    d5 = *(a6);
    d4 &= d0;
    d5 &= d0;
    __asm ("eor.l d4, d0");
    __asm ("eor.l d5, d0");
    d4 >>= 0x7;
    d5 <<= 0x7;
    d0 |= d4;
    d0 |= d5;
    d4 = *(a5);
    d5 = *(a6);
    d4 &= d1;
    d5 &= d1;
    __asm ("eor.l d4, d1");
    __asm ("eor.l d5, d1");
    d4 >>= 0x7;
    d5 <<= 0x7;
    d1 |= d4;
    d1 |= d5;
    *((0xc0 + a0)) = *(d0);
    d0 >>= 0x8;
    *((0xf0 + a0)) = *(d0);
    __asm ("swap d0");
    *((0x120 + a0)) = *(d0);
    d0 >>= 0x8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4a5c */
#include <stdint.h>
 
void fcn_00004a5c () {
    return void (*0x4a82)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4aa0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4b68).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5b20).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4a7c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x37c8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4a5a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4b6e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4fa4 */
#include <stdint.h>
 
void fcn_00004fa4 () {
    d0 |= 0xce;
    d0 |= 0x28;
    return __asm ("jmp fcn.0000041a");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4a58).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4c1a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3744 */
#include <stdint.h>
 
void fcn_00003744 () {
    __asm ("ror.l 0x8, d1");
    d2 = *(d1);
    d1 = *((a1 + d2.w));
    __asm ("ror.l 0x8, d1");
    d2 = *(d1);
    d1 = *((a1 + d2.w));
    __asm ("ror.l 0x8, d1");
    d2 = *(d1);
    d1 = *((a1 + d2.w));
    __asm ("ror.l 0x8, d1");
    d4 = *(a2);
    d5 = *(a3);
    d4 &= d0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5c04 */
#include <stdint.h>
 
void fcn_00005c04 () {
    *((a7 -= 4)) = d0;
    *((a7 -= 4)) = d1;
    *((a7 -= 4)) = d2;
    *((a7 -= 4)) = d3;
    *((a7 -= 4)) = a0;
    *((a7 -= 4)) = a1;
    d1 = *((0x6 + a5));
    d2 = *((0xe + a5));
    d3 = 0x0;
    *((a7 -= 4)) = *(a6);
    a6 = *(0xa6);
    void (*a6)() ();
    a6 = *(a7);
    __asm ("bmi.w 0x5c66");
    d1 = *((-0x5556 + a5));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5c28 */
#include <stdint.h>
 
void fcn_00005c28 () {
    d6 |= 0x2d;
    *(a0) |= 0x2d;
    a0++;
    *(a2) |= 0xe;
    a6 = *(0xa6);
    return void (*a6)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3676 */
#include <stdint.h>
 
void fcn_00003676 () {
    __asm ("movep.w 0xf0f(a7), d7");
    a3 = *(0xf0f0f0f0);
    __asm ("fbf.l 0x287c69b3");
    *((a1 -= 2)) = *((-0x34 + a3 + a4));
    a5 = *(0x55005500);
    a6 = *(0xaa00aa);
    d2 = 0x0;
    d6 += d6;
    d7 -= 0x1;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x502c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8852 */
#include <stdint.h>
 
void fcn_00008852 () {
    do {
        *((a1 -= 4)) = *((a0 -= 4));
        *((a1 -= 4)) = *((a0 -= 4));
        *((a1 -= 4)) = *((a0 -= 4));
        *((a1 -= 4)) = *((a0 -= 4));
        *((a1 -= 4)) = *((a0 -= 4));
        *((a1 -= 4)) = *((a0 -= 4));
        *((a1 -= 4)) = *((a0 -= 4));
        *((a1 -= 4)) = *((a0 -= 4));
        d1 -= 0x1;
    } while (? != ?);
    d0 &= 0x1f;
    d0 >>= 0x1;
    while (1) {
        *((a1 -= 2)) = *((a0 -= 2));
        __asm ("dbra d0, 0x8868");
    }
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5b78).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5d24).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x63fe */
#include <stdint.h>
 
void fcn_000063fe () {
    __asm ("muls.w d0, d1");
    d5 = 0x4;
    d6 = 0x20;
    d7 = 0x20;
    a0 = *(0x4bc4);
    a1 = *(0x4bec);
    fcn_00006986 ();
    a1 = *(0xfd0);
    *(0x4dec) = *(a1);
    a1 += 2;
    d0 |= 0xec;
    *(0x4dee) = *(a1);
    a1 += 2;
    a1 += 0x2;
    d6 = *(a1);
    a1 += 2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6986 */
#include <stdint.h>
 
void fcn_00006986 () {
    d0 = *((0x6 + a6));
    if (d0 != 0xffff) {
        __asm ("ext.l d0");
        *((a7 -= 4)) = *(a6);
        a6 = *(0xaa);
        void (*a6)() ();
        a6 = *(a7);
        *((0x6 + a6)) = *(0xffff);
    }
    d0 = *((0x8 + a6));
    if (d0 == 0xffff) {
        void (*0x69c6)() ();
    }
    __asm ("ext.l d0");
    *((a7 -= 4)) = *(a6);
    a6 = *(0xaa);
    return void (*a6)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5a4c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xf066).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xef42 */
#include <stdint.h>
 
void fcn_0000ef42 () {
    do {
        *(a0) = *(d0);
        d0 += 0x1;
        if (d7 == d0) {
            fcn_0000ee6a ();
            d0 = 0x0;
        }
        a0 += 0x4;
        __asm ("dbra d6, fcn.0000ef42");
    } while (1);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5c3e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5e5c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x38e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3d2 */
#include <stdint.h>
 
void fcn_000003d2 () {
    *((a7 -= 4)) = *(a6);
    a6 = *(0x4);
    void (*a6)() ();
    a6 = *(a7);
    if (d0 == 0) {
        d0 = 0xc;
        __asm ("jmp fcn.0000041a");
    }
    *(0xa6) = *(d0);
    d0 = 0x27;
    a1 = *(0x7c);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3fa).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3b2 */
#include <stdint.h>
 
void fcn_000003b2 () {
    d0 = 0xb;
    return __asm ("jmp fcn.0000041a");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x61a0 */
#include <stdint.h>
 
void fcn_000061a0 () {
    d3 &= 0x11;
    d3 &= d0;
    d2 += d2;
    d3 <<= 0x2;
    d7 |= d2;
    d7 |= d3;
    if ((d7 & (1 << 0x1)) == 0) {
        void (*0x61da)() ();
    }
    d0 = *(0x4b12);
    d1 = *(0x32);
    *(0x4b12) = *(d1);
    d1 -= d0;
    __asm ("bpl.b fcn.000061da");
    __asm ("bset.b 0x3, d7");
    0x4b12.l = 0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x613c */
#include <stdint.h>
 
void fcn_0000613c () {
    __asm ("bpl.b 0x6142");
    d0 = *(a1);
    goto label_0;
    if (d0 > *((0x2 + a1))) {
        d0 = *((0x2 + a1));
    }
label_0:
    __asm ("bpl.b 0x6158");
    d1 = *((0x4 + a1));
    goto label_1;
    if (d1 > *((0x6 + a1))) {
        d1 = *((0x6 + a1));
    }
label_1:
    *(0x146) = *(d0);
    *(0x148) = *(d1);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6622).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6848 */
#include <stdint.h>
 
void fcn_00006848 () {
    return __asm ("jmp fcn.0000041a");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x458).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x494c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5764).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7546 */
#include <stdint.h>
 
void fcn_00007546 () {
    d0 |= 0xa2;
    a0 = d0;
    *(a0) = 0;
    a0 += 0x2;
    d0 = *(d1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x442 */
#include <stdint.h>
 
void fcn_00000442 () {
    d0 = 0x21;
    a1 = *(0x9f);
    *(a7) |= 0x2f0e2c79;
    a7 += 4;
    *((a7 -= 4)) = *(a6);
    a6 = *(0x4);
    void (*a6)() ();
    a6 = *(a7);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x767c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7134).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x65f6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7e9a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d2a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x74b6 */
#include <stdint.h>
 
void fcn_000074b6 () {
    do {
        d0 = *(d1);
        fcn_000044a2 ();
        a1 = d0;
        d2 = *(a1);
        d0 = *(d1);
        fcn_000044c6 ();
        d0 |= 0xc6;
        fcn_000036b2 ();
        d1 = *(d2);
    } while (? != ?);
    *(a0) = 0;
    *((0x4 + a0)) = 0;
    d4 |= 0xdf;
    d7 &= 0x75;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1dd2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x822).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xf5c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x15e4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x616e */
#include <stdint.h>
 
void fcn_0000616e () {
    d6 = *((0x8 + a0));
    d6 &= aav.0x00006000;
    void (*0xdf76)() ();
    if ((d6 & (1 << 0xe)) != 0) {
        __asm ("bset.b 0x0, d7");
    }
    if ((d6 & (1 << 0xd)) != 0) {
        __asm ("bset.b 0x4, d7");
    }
    d0 = *(0x4af5);
    d2 = *(d0);
    __asm ("not.b d2");
    d2 &= 0x11;
    d2 &= d7;
    d3 = *(d7);
    __asm ("not.b d3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7b7a */
#include <stdint.h>
 
void fcn_00007b7a () {
    __asm ("bclr.b d1, d0");
    d7 = 0x0;
label_0:
    if (*(a0) == 0xffff) {
        void (*0x7ba0)() ();
    }
    d6 = *(a0);
    a0++;
    d6 &= d2;
    if (d6 == *(a0)) {
        *((a7 -= 4)) = d0;
        *((a7 -= 4)) = d1;
        *((a7 -= 4)) = d2;
        *((a7 -= 4)) = d3;
        *((a7 -= 4)) = d4;
        *((a7 -= 4)) = d5;
        *((a7 -= 4)) = d6;
        *((a7 -= 4)) = d7;
        *((a7 -= 4)) = a0;
        *((a7 -= 4)) = a1;
        *((a7 -= 4)) = a2;
        *((a7 -= 4)) = a3;
        *((a7 -= 4)) = a4;
        *((a7 -= 4)) = a5;
        *((a7 -= 4)) = a6;
        a0 = *(a0);
        void (*a0)() ();
        d0 = *(a7);
        a7 += 4;
        d1 = *(a7);
        a7 += 4;
        d2 = *(a7);
        a7 += 4;
        d3 = *(a7);
        a7 += 4;
        d4 = *(a7);
        a7 += 4;
        d5 = *(a7);
        a7 += 4;
        d6 = *(a7);
        a7 += 4;
        d7 = *(a7);
        a7 += 4;
        a0 = *(a7);
        a7 += 4;
        a1 = *(a7);
        a7 += 4;
        a2 = *(a7);
        a7 += 4;
        a3 = *(a7);
        a7 += 4;
        a4 = *(a7);
        a7 += 4;
        a5 = *(a7);
        a7 += 4;
        a6 = *(a7);
        a7 += 4;
        d7 = 0xff;
        void (*0x7ba0)() ();
    }
    a0 += 0x4;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x61da */
#include <stdint.h>
 
void fcn_000061da () {
    if ((d7 & (1 << 0x5)) == 0) {
        void (*0x6206)() ();
    }
    d0 = *(0x4b0e);
    d1 = *(0x32);
    *(0x4b0e) = *(d1);
    d1 -= d0;
    __asm ("bpl.b aav.0x00006206");
    __asm ("bset.b 0x7, d7");
    0xaaaaaaaa.l = 0;
    d0 |= 0xaa;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x610e */
#include <stdint.h>
 
void fcn_0000610e () {
    d2 |= 0x0;
    if (fcn.00004e2a == 0) {
        void (*0x62b8)() ();
    }
    a1 = fcn.00004e2a;
    a1 = *(a1);
    d0 = *((0xa + a0));
    d1 = *((0xc + a0));
    d0 += 0x146.l;
    d1 += 0x148.l;
    if (d0 != 0x1) {
        void (*0x62a6)() ();
    }
    d0 = *((0x6 + a0));
    if ((d0 & (1 << 0x7)) != 0) {
        void (*0x62a6)() ();
    }
    *((a4 -= 2)) |= aav.0x0000aaaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x77dc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6204).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x79f0 */
#include <stdint.h>
 
void fcn_000079f0 () {
    do {
        fcn_0000831a ();
        *(a2) |= d1;
        a2++;
        d1 = 0xa;
        fcn_00007ba0 ();
        if (? != ?) {
            *((a7 -= 4)) = d0;
            *((a7 -= 4)) = a0;
            fcn_00008326 ();
            a0 = a1;
            d0 = *(d2);
            fcn_00007890 ();
            __asm ("sne.b d1");
            d0 = *(a7);
            a7 += 4;
            a0 = *(a7);
            a7 += 4;
            if (d1 == 0) {
                goto label_0;
            }
            0xaaaaaaaa.l ();
        }
label_0:
        d1 = *(d3);
        if (d1 != 0) {
            fcn_00007ba0 ();
            if (d1 == 0) {
                goto label_1;
            }
            fcn_00008326 ();
            fcn_0000882e ();
            void (*0x7a42)() ();
        }
label_1:
        d0 = *((0xc + a0));
    } while (d1 != 0);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x78be).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7890).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7ba0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x78fc */
#include <stdint.h>
 
void fcn_000078fc () {
    do {
label_0:
        fcn_0000882e ();
        fcn_00007b7a ();
        fcn_000061da ();
        *(0x4eac) = 1;
        goto label_1;
        __asm ("movep.l -0x4f87(a0), d0");
        d0 |= 0xb0;
    } while (? != ?);
    if (d1 != 0x4eb2.l) {
        goto label_0;
    }
    fcn_0000610e ();
    if (d0 == 0) {
        void (*0x798e)() ();
    }
label_1:
    *(0x4eb8.l) = d0;
    *(0x4eb8.l) = d1;
    *(0x4eb8.l) = d2;
    fcn_000078be ();
    return fcn_0000883e ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x796c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x79c0 */
#include <stdint.h>
 
void fcn_000079c0 () {
    a0 = *(0x42a);
    d3 = 0x0;
    do {
        if (*(a0) == 0) {
            goto label_0;
        }
        d1 = *(a0);
        a0 += 4;
        d1 &= d0;
        if (d1 == *(a0)) {
            d3 = *(a0);
            a0 += 2;
            *(0x4eae) = *(a0);
            void (*a6)() ();
        }
        a0 += 0x4;
    } while (1);
label_0:
    d0 = *(aav.0x00004ebe);
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x7a42)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7a1c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7a8c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7b1c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7bbe).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x445a */
#include <stdint.h>
 
void fcn_0000445a () {
    a0 = a2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7d82 */
#include <stdint.h>
 
void fcn_00007d82 () {
    d0 |= 0xbe;
    __asm ("sne.b d7");
    a6 = *(a7);
    if (d7 != 0) {
        goto label_0;
    }
    a6 += 0x6;
    do {
        if (*(a6) == 0xffff) {
            goto label_0;
        }
        if (d1 == *(a6)) {
            d7 = 0xff;
        } else {
            a6 += 0x6;
        } while (1);
    }
label_0:
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7da4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x638c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7ef4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x80b6 */
#include <stdint.h>
 
void fcn_000080b6 () {
    do {
        d2 = *(0x15f);
        d3 = 0xa;
        d4 = 0x0;
        fcn_00000822 ();
        a0 = *(0x7c9e);
        d0 = *(0x4ec8);
        d6 = 0x20;
        d7 = 0x2;
        fcn_000080b6 ();
    } while (1);
    a0 = *(0x7c9e);
    d0 = *(0x14e);
    d1 = 0x1;
    0xaaaaaaaa.l ();
    d0 |= 0xaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8a6a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8954).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x87ca).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x815a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x801a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8158).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x80ea).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8236 */
#include <stdint.h>
 
void fcn_00008236 () {
    if (? == ?) {
        void (*0x826a)() ();
    }
    __asm ("bhi.w 0x826a");
    __asm ("bpl.b 0x824e");
    __asm ("ext.w d0");
    __asm ("ext.l d0");
    goto label_0;
    __asm ("bpl.b 0x8256");
    __asm ("ext.l d0");
label_0:
    fcn_00008158 ();
    __asm ("bpl.b aav.0x00008264");
    __asm ("neg.l d0");
    return 0xaaaaaaaa.l ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8266).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7fe8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7fe6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc */
#include <stdint.h>
 
void fcn_0000000c () {
    d0 |= 0x0;
    d0 |= 0x7;
    d0 |= 0x1c;
    d6 = *(a4);
    a4 += 2;
    d0 |= d0;
    *((a0 -= 2)) |= aav.0x00004000;
    d0 |= 0x47;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x6b)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7c32 */
#include <stdint.h>
 
void fcn_00007c32 () {
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x7c3c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8804 */
#include <stdint.h>
 
void fcn_00008804 () {
    *((aav.0x00006700 + a2)) |= 0xb3c8;
    *((a4 -= 2)) |= 0x6b08;
    a2 = *((a0 + d0.l));
    __asm ("cmpa.l a1, a2");
    if (? > ?) {
        goto label_0;
    }
    d1 = *(d0);
    d1 >>= 0x5;
    if (? == ?) {
        void (*0x8830)() ();
    }
label_0:
    __asm ("adda.l d0, a0");
    __asm ("adda.l d0, a1");
    d1 = *(d0);
    d1 >>= 0x5;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x8860)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8a00).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x926a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8e8a */
#include <stdint.h>
 
void fcn_00008e8a () {
    do {
        a6 = aav.0x00007abc;
        a6 = *(a6);
        a6 = *(([0x796c] + a6.l));
        a1 = *((0x14 + a6));
        a2 = *((0x18 + a6));
        a3 = *((0x1c + a6));
        *(a4) |= 0xff;
        a4++;
        a1 = aav.0x000004c2;
        fcn_0000926a ();
        a1 = *(a7);
    } while (1);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x90e0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x91a0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8ed6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x89ec).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8c84).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8e1e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8d4e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1a86).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1924).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x959a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x987a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x95ea).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x965a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x9e3a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x878c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x9772).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x54e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8988).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8bb6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x89ac).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x56c */
#include <stdint.h>
 
void fcn_0000056c () {
    __asm ("mulu.w d0, d0");
    __asm ("cmpa.l 0x0, a0");
    if (? != ?) {
        *((a7 -= 4)) = *(a6);
        a6 = *(0x4);
        void (*a0)() ();
        a6 = *(a7);
    }
    d0 = *(a7);
    a7 += 4;
    d1 = *(a7);
    a7 += 4;
    a0 = *(a7);
    a7 += 4;
    a1 = *(a7);
    a7 += 4;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x97f4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x9bec).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x9a3c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x9ca8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8a4a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8a5c */
#include <stdint.h>
 
void fcn_00008a5c () {
    a1 = *(0x7a84);
    a1 += 0x4;
    __asm ("cmpa.l aav.0x00007ab8, a1");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x9462).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa8f0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa88a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8b84).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa934).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa912).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa3a4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8b60).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa798 */
#include <stdint.h>
 
void fcn_0000a798 () {
    d2 |= 0x29;
    d6 |= 0x40;
    d3 -= d1;
    d2 += 0x1;
    d3 += 0x1;
    fcn_0000a912 ();
    *(0x78a0) = *(0xdb);
    d1 += 0x3;
    a0 = *((0x18 + a1));
    a0 = *((0x2 + a0));
    fcn_00008b60 ();
    d0 = *((0x8 + a1));
    d1 = 0x12;
    fcn_00008376 ();
    d0 = *(a7);
    a7 += 4;
    d1 = *(a7);
    a7 += 4;
    d2 = *(a7);
    a7 += 4;
    d3 = *(a7);
    a7 += 4;
    a0 = *(a7);
    a7 += 4;
    a1 = *(a7);
    a7 += 4;
    return __asm ("jmp fcn.00007006");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2e22).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x29c6 */
#include <stdint.h>
 
void fcn_000029c6 () {
    aav.0x0000aaaa |= 0xaa;
    d6 >>= 0x1;
    d6 -= 0x1;
    d7 -= 0x1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa1f6 */
#include <stdint.h>
 
void fcn_0000a1f6 () {
    return void (*0xa226)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa226).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa282).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x88a2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x95c4 */
#include <stdint.h>
 
void fcn_000095c4 () {
    *((a7 -= 4)) = *(a0);
    fcn_00008e8a ();
    a0 = *(0x626);
    fcn_000089ec ();
    fcn.0000796c = *(0x0);
    a0 = *(0x7a84);
    a0 = *(a0);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x88c6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x6374 */
#include <stdint.h>
 
void fcn_00006374 () {
    d0 |= 0x68;
    __asm ("cmpa.l 0x18c.l, a1");
    if (? == ?) {
        void (*0x638c)() ();
    }
    *(a0) = *(d0);
    a0 += 2;
    *(a0) = *(d1);
    a0 += 2;
    *(a0) = *(d2);
    a0 += 2;
    *(0x190) = *(a1);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7bee).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x816e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8376 */
#include <stdint.h>
 
void fcn_00008376 () {
    do {
        a0 = *((-0x4 + a2 + d0));
        d0 = *((0xa + a0));
    } while (? != ?);
    *((0xa + a0)) = *(d7);
    return void (*0x83dc)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7b54).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x84b8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x850e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa772).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xaca).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa818).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x29b4 */
#include <stdint.h>
 
void fcn_000029b4 () {
    *((a7 -= 4)) = *(a2);
    d2 = *(d6);
    d2 += d2;
    d3 = *(d2);
    __asm ("mulu.w 0x7, d3");
    if ((d6 & 1) == 0) {
        aav.0x0000aaaa |= 0xaa;
    }
    d6 >>= 0x1;
    d7 -= 0x1;
label_0:
    a1 = a0;
    d0 = *(a0);
    a0 += 2;
    __asm ("adda.w d2, a1");
    d0 |= *(a1);
    __asm ("adda.w d2, a1");
    d0 |= *(a1);
    __asm ("adda.w d2, a1");
    d0 |= *(a1);
    __asm ("adda.w d2, a1");
    d0 |= *(a1);
    __asm ("adda.w d2, a1");
    d0 |= *(a1);
    __asm ("adda.w d2, a1");
    d0 |= *(a1);
    __asm ("adda.w d2, a1");
    d0 |= *(a1);
    *(a2) = *(d0);
    a2 += 2;
    d4 = *(d6);
    while (1) {
        a1 = a0;
        d0 = *(a0);
        a0 += 4;
        __asm ("adda.w d2, a1");
        d0 |= *(a1);
        __asm ("adda.w d2, a1");
        d0 |= *(a1);
        __asm ("adda.w d2, a1");
        d0 |= *(a1);
        __asm ("adda.w d2, a1");
        d0 |= *(a1);
        __asm ("adda.w d2, a1");
        d0 |= *(a1);
        __asm ("adda.w d2, a1");
        d0 |= *(a1);
        __asm ("adda.w d2, a1");
        d0 |= *(a1);
        *(a2) = *(d0);
        a2 += 4;
        __asm ("dbra d4, 0x2a28");
    }
    __asm ("adda.w d3, a0");
    __asm ("dbra d7, 0x2a02");
    goto label_0;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xac50).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xabf6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xab78 */
#include <stdint.h>
 
void fcn_0000ab78 () {
    d1 |= 0x20;
    return void (*0xabb8)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xabb8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xaba8 */
#include <stdint.h>
 
void fcn_0000aba8 () {
    *(--a0) |= 0x40;
    *((0x24 + a2)) |= 0x68;
    __asm ("neg.w d0");
    *((0x1c + a0)) = *(d0);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7494).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x62be).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x62e2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x74a6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xabdc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa280).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x9860 */
#include <stdint.h>
 
void fcn_00009860 () {
    d0 = *(a2);
    fcn_000044a2 ();
    a0 = d0;
    d0 = *(a7);
    a7 += 4;
    d1 = *((0x4 + a1));
    d2 = 0x0;
    d7 = *(aav.0x00007970);
    d0 |= 0x70;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xaf64).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xafc8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xaf62).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4cd2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x41a */
#include <stdint.h>
 
void fcn_0000041a () {
    do {
        d0 = 0x21;
        a1 = *(0x8d);
        *((a7 -= 4)) = *(a6);
        a6 = *(0x4);
        d0 |= 0x4;
        void (*a6)() ();
        a6 = *(a7);
        if (d0 != 0) {
            goto label_0;
        }
        d0 = 0xe;
        __asm ("jmp fcn.0000041a");
    } while (1);
    d0 |= 0x1a;
    __asm ("subi.b 0xaa, (a2)+");
label_0:
    *(0xae) = *(d0);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7206).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb5dc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4898).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7dbe */
#include <stdint.h>
 
void fcn_00007dbe () {
    d0 |= 0x48;
    if ((a0 & (1 << 0x1)) != 0) {
        void (*0x7de2)() ();
    }
    __asm ("bmi.b 0x7de2");
    if (d0 > *((0x2 + a0))) {
        void (*0x7de2)() ();
    }
    __asm ("bmi.b 0x7de2");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb470).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa7dc */
#include <stdint.h>
 
void fcn_0000a7dc () {
    d0 |= 0x54;
    fcn_00008804 ();
    fcn_000084b8 ();
    fcn_0000850e ();
    return __asm ("jmp fcn.00007006");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xba24).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x87aa).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb5cc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb5fe).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb682).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb68d).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb6c4 */
#include <stdint.h>
 
void fcn_0000b6c4 () {
    d0 |= 0x64;
    fcn_00006fd4 ();
    if (? <= ?) {
        void (*0xb6a2)() ();
    }
    d0 = 0x0;
    d1 = 0x0;
    d2 = *(0x2c);
    d3 = *(0x1e);
    d4 = 0x23;
    fcn_00007206 ();
    d0 |= 0x6;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb6e2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xa442).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc3b0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb69e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x7ddc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xbcb8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb788).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb564).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xbc32 */
#include <stdint.h>
 
void fcn_0000bc32 () {
    d3 += 0x85;
    d4 = 0x0;
    fcn_00000822 ();
    return void (*0xbd3e)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc23a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc12a */
#include <stdint.h>
 
void fcn_0000c12a () {
label_1:
    d6 = *((0xe + a2));
    if (? == ?) {
        a2 = *((0x10 + a2));
        goto label_2;
    }
    d5 = *((0x6 + a2));
    if (d5 != 0x1) {
        goto label_3;
    }
    d0 = 0x1;
    a4 = *((0x10 + a2));
    d1 = *(d6);
    d1 -= 0x1;
    do {
        __asm ("bpl.b aav.0x0000c0d6");
        d0 = *((0x2 + a4));
        a4 = *((0xc + a4));
        __asm ("dbra d1, 0xc0cc");
    } while (1);
    d5 = *(d0);
    if (d5 == 0x1) {
        goto label_3;
    }
    d2 = *((0xa + a2));
    __asm ("mulu.w 0xc(a2), d2");
    __asm ("mulu.w d2, d0");
    fcn_0000392c ();
    d1 = *(d0);
    fcn_000044a2 ();
    a1 = d0;
    *((a7 -= 4)) = *(a1);
    d0 = *(a3);
    fcn_000044a2 ();
    a0 = d0;
    d0 = *(d2);
    d3 = *(d5);
    d3 -= 0x1;
    do {
        fcn_0000863e ();
        __asm ("adda.l d2, a1");
        __asm ("dbra d3, 0xc114");
    } while (1);
    d0 = *(a3);
    fcn_000044c6 ();
    fcn_000036b2 ();
    d0 |= 0xb2;
    *(a3) = *(d1);
    a1 = *(a7);
    goto label_4;
label_3:
    d2 = *((0xa + a2));
    __asm ("mulu.w 0xc(a2), d2");
    d0 = *(a3);
    fcn_00003640 ();
    fcn_000044a2 ();
    a1 = d0;
label_4:
    a4 = *((0x10 + a2));
    goto label_5;
label_0:
    *((a7 -= 4)) = *(a1);
    d0 = *(a4);
    if (d5 == 0x1) {
        goto label_6;
    }
    d1 = 0x14;
    fcn_00004b6e ();
    *((a7 -= 4)) = *(d0);
    fcn_000044a2 ();
    a5 = d0;
    d3 = *((0x8 + a2));
    __asm ("mulu.w 0xa(a2), d3");
    d4 = 0x0;
    d5 = 0x0;
    d5 = *((0x6 + a2));
    d5 -= 0x1;
    do {
        a0 = a5;
        d0 = *(d4);
        __asm ("mulu.w d3, d0");
        __asm ("adda.l d0, a0");
        fcn_0000c032 ();
        d4 += 0x1;
        __asm ("bmi.b 0xc198");
        d4 = 0x0;
        __asm ("adda.l d2, a1");
        __asm ("dbra d5, 0xc180");
    } while (1);
    d0 = *(a7);
    a7 += 4;
    fcn_000044c6 ();
    fcn_000036b2 ();
label_6:
    a4 = *((0xc + a4));
    a1 = *(a7);
label_5:
    __asm ("dbra d6, 0xc154");
    goto label_0;
    d0 = *(a3);
    fcn_000044c6 ();
    a2 = a4;
label_2:
    a3 += 0x1;
    __asm ("dbra d7, 0xc0a8");
    goto label_1;
    d0 = *(0x82f9);
    return 0xaaaaaaaa.l ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb968).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb812).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x448a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc262).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x22cc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xedf0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x8566).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xb76a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4e2c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x4e2a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3640 */
#include <stdint.h>
 
void fcn_00003640 () {
    *((0x60 + a0 + a4)) |= 0x41;
    d1 &= d6;
    *((0x60 + a0)) |= d1;
    d1 >>= 0x8;
    *((0x90 + a0)) &= d4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc032 */
#include <stdint.h>
 
void fcn_0000c032 () {
    *(0xd3b8) = *(d7);
    *((a7 -= 4)) = *(a2);
    a0 = *(0x48cc);
    d0 |= 0xcc;
    d0 = 0x0;
    d1 = 0x12;
    a3 = *(0x8363);
    while (1) {
        d2 = *((0x4 + a2));
        d3 = *((0xe + a2));
        if (? != ?) {
            __asm ("bset.b 0xf, d2");
        }
        *(a0) = *(d2);
        a0 += 2;
        d0 += 0x1;
        __asm ("bmi.b 0xc078");
        a0 = *(0x48cc);
        a1 = a3;
        fcn_00004e2a ();
        d0 |= 0x2a;
        __asm ("adda.w d0, a3");
        d0 = 0x0;
        __asm ("mulu.w 0xc, d3");
        a2 = *((0x10 + a2 + d3));
        __asm ("dbra d7, aav.0x0000c04e");
    }
    if (d0 != 0) {
        a0 = *(0x48cc);
        a1 = a3;
        fcn_00004e2a ();
    }
    a2 = *(a7);
    a3 = *(0x8363);
    *((a3 -= 2)) |= d1;
    d7 = *(0xd3b8);
    return void (*0xc1c2)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc1ce).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc31e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc36a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc6ee).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc726).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc764).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc7f6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc902).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc5f6 */
#include <stdint.h>
 
void fcn_0000c5f6 () {
    *((0x3006 + a7)) = *(d0);
    d7 -= d0;
    d0 -= 0x11f30.l;
    *(--a7) = *((0x79 + a0 + a5));
    d0 |= 0x8e;
    d6 >>= 0x4;
    *(0xe898) = *(d0);
    *(0xe89a) = *(0x1);
    aav.0x0000e894 = *(d6);
    *(0xe896) = *(d7);
    __asm ("bsr.w fcn.0000c726");
    d6 = *(0xe890);
    d7 = *(0x191);
    d7 -= d6;
    __asm ("bsr.w fcn.0000c764");
    d6 = *(aav.0x0000e894);
    d7 = *(0xe896);
    __asm ("bsr.w fcn.0000c764");
    return void (*0xc724)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xceac).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xcf60).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc7d0 */
#include <stdint.h>
 
void fcn_0000c7d0 () {
    a5 = *((0xe246 + d6 * 4));
    d6 += d6;
    a0 = *((0xd9e6 + d6 * 8));
    d0 = *(0x11f26);
    d1 = *(aav.0x00000200);
    d1 += d0;
    d1 &= 0x7ff;
    a2 = *(0xd818);
    d4 += *(a0);
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xd4d0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xd66a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xee98).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xee96).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xd076).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xd2d0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xd142).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xe3d0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xe480).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xd4c0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xd78a */
#include <stdint.h>
 
void fcn_0000d78a () {
    if (? < ?) {
        void (*0xd802)() ();
    }
    d3 = *(0x11efe);
    d3 += aav.0x00000400;
    if (d0 > d3) {
        void (*0xd802)() ();
    }
    d3 = *(0x11f02);
    d3 += aav.0x00000400;
    if (d2 > d3) {
        void (*0xd802)() ();
    }
    d0 -= 0x11f1a.l;
    d1 += 0x11f38.l;
    d2 -= 0x11f20.l;
    d3 = *(0x11f26);
    fcn_0000d384 ();
    __asm ("bmi.b 0xd802");
    *(a3) = *(d2);
    a3 += 2;
    *(a3) = *(d7);
    a3 += 2;
    *(a3) = *(a6);
    a3 += 4;
    0xd9e0.l += 0x1;
    *(a6) = *(0xabed);
    a6 += 2;
    *(a6) = *(d0);
    a6 += 2;
    *(a6) = *(d1);
    a6 += 2;
    *(a6) = *(d2);
    a6 += 2;
    *(a6) = *(d4);
    a6 += 2;
    *(a6) = *(0x80);
    a6++;
    *(a6) = *(0xd668);
    a6++;
    __asm ("bmi.b 0xd802");
    d2 = *(a7);
    a7 += 4;
    d3 = *(a7);
    a7 += 4;
    return void (*0xd81a)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xd3d0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xd724).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xe564).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xd9ae).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xd678).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xd384 */
#include <stdint.h>
 
void fcn_0000d384 () {
    d5 = *(d2);
    d5 += aav.0x00000100;
    __asm ("asl.l 0x8, d0");
    __asm ("asl.l 0x8, d1");
    d4 = *(d1);
    __asm ("divs.w d5, d0");
    __asm ("divs.w d5, d1");
    __asm ("neg.w d1");
    d0 += 0x11f3c.l;
    d1 += 0x11f30.l;
    d6 = *(a0);
    if ((d6 & (1 << 0x2)) == 0) {
        goto label_0;
    }
    d6 = 0x0;
    d6 = *((0xc + a0));
    d7 = 0x0;
    d7 = *((0xe + a0));
    d6 += d6;
    d7 += d7;
    __asm ("asl.l 0x8, d6");
    __asm ("divs.w d5, d6");
    __asm ("asr.w 0x1, d7");
    d2 += d7;
    d2 += aav.0x00000100;
    if ((d6 & (1 << 0x2)) != 0) {
        void (*0xd3d0)() ();
    }
    d2 = 0xff;
    void (*0xd462)() ();
label_0:
    d6 = 0x0;
    d6 = *((0xc + a0));
    d7 = 0x0;
    d7 = *((0xe + a0));
    d6 += d6;
    d7 += d7;
    __asm ("asl.l 0x8, d6");
    __asm ("asl.l 0x8, d7");
    __asm ("divs.w d5, d6");
    __asm ("divs.w d5, d7");
    d1 -= d7;
    d2 = *(d6);
    d2 >>= 0x1;
    d0 -= d2;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xdaaa).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xe2d2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xe176).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xe32e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xe798).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x9).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xeb2e */
#include <stdint.h>
 
void fcn_0000eb2e () {
    __asm ("addx.w d6, d5");
    __asm ("jmp 0xeb82.l");
    while (1) {
        *(--a7) = *(--a2);
        d4 = *(0x11f1a);
        d5 = *(0x11f20);
        __asm ("neg.l d0");
        __asm ("smi.b d6");
        __asm ("ext.w d6");
        d3 += d0;
        __asm ("addx.w d6, d5");
        __asm ("neg.l d1");
        __asm ("smi.b d6");
        __asm ("ext.w d6");
        d2 += d1;
        __asm ("addx.w d6, d4");
        __asm ("jmp 0xeb82.l");
    }
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xeb44).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xc1f8 */
#include <stdint.h>
 
void fcn_0000c1f8 () {
    __asm ("adda.w 0x6(a4), a1");
    d0 = *((0xc + a2));
    d0 -= *((0xa + a4));
    d0 |= 0x3;
    if ((a4 & 1) != 0) {
        goto label_1;
    }
    d7 = *((0x8 + a4));
    d7 -= 0x1;
label_0:
    d6 = *((0xa + a4));
    d6 -= 0x1;
    do {
        *(a1) = *(a0);
        a1++;
        a0++;
        __asm ("dbra d6, 0xc218");
    } while (1);
    __asm ("adda.w d0, a1");
    __asm ("dbra d7, 0xc212");
    goto label_0;
    void (*0xc244)() ();
label_1:
    d7 = *((0x8 + a4));
    d7 -= 0x1;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xee6c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xee6a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xf034 */
#include <stdint.h>
 
void fcn_0000f034 () {
    do {
        fcn_000086bc ();
        d0 &= aav.0x0000aaaa;
        __asm ("bset.b d0, d1");
        __asm ("dbra d7, 0xf02a");
    } while (1);
    *((0x2 + a0)) = *(d1);
    fcn_000086bc ();
    d0 |= 0xbc;
    *((0x1 + a0)) = *(d0);
    d0 = *(a7);
    a7 += 4;
    d1 = *(a7);
    a7 += 4;
    d7 = *(a7);
    a7 += 4;
    d3 |= 0xaaaaaaaa;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5542 */
#include <stdint.h>
 
void fcn_00005542 () {
    return void (*0x56b0)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x56b0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3654).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0xf032).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x5852).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x15546).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1a356).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b300).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b4d4 */
#include <stdint.h>
 
void fcn_0001b4d4 () {
    d0 |= 0x24;
    d0 |= 0x3;
    __asm ("neg.w -(a5)");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b4de).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b580).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b630 */
#include <stdint.h>
 
void fcn_0001b630 () {
    d0 |= 0xe4;
    d0 |= 0x3;
    *((a1 -= 2)) -= 0x1;
    d3 = 0x65;
    *((a6 -= 2)) -= 0x7;
    __asm ("bvs.b 0x1b6ac");
    __asm ("bcs.w 0x160ec");
    d0 |= 0xaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b644).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b6da */
#include <stdint.h>
 
void fcn_0001b6da () {
    d4 |= 0x65;
    if (? >= ?) {
        void (*0x1b74f)() ();
    }
    __asm ("bsr.b fcn.0001b746");
    *((0x6170 + a5)) -= 0x7;
    *((a4 -= 2)) -= 0x7;
    __asm ("bsr.b fcn.0001b75e");
    __asm ("bsr.w 0x1b6ec");
    __asm ("fsf.b -(a4)");
    d5 |= 0xaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b746).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b75e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b6f4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b87e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b968).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b97c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1b9cc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1baf0 */
#include <stdint.h>
 
void fcn_0001baf0 () {
    d0 |= 0x1c;
    d0 |= 0x2;
    *((0x705f + a7)) += 0x8;
    *((0x6f74 + a7)) += 0x1;
    d0 |= 0xb8;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1bb04).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1bbee).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1bcdc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1bd84).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1bf5e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1bfd4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1bf98).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c07a */
#include <stdint.h>
 
void fcn_0001c07a () {
    __asm ("bcs.b 0x1c0ea");
    __asm ("bcc.b 0x1c0dd");
    __asm ("bcs.b 0x1c0e2");
    __asm ("bcs.w 0x16b2c");
    d0 |= 0xaa;
    d0 |= 0x2a;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c0f4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c088).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c146).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c0d4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c1b8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c226).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c340).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c372).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c300).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c398 */
#include <stdint.h>
 
void fcn_0001c398 () {
    d0 |= 0xaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c418).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c39b).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c3b6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c448).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c574).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c5e6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c5fe).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c6c4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c754 */
#include <stdint.h>
 
void fcn_0001c754 () {
    if (? != ?) {
        void (*0x1c7bc)() ();
    }
    __asm ("bcs.b 0x1c7ca");
    d0 |= 0x24;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c75c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c778).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c7dc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c856 */
#include <stdint.h>
 
void fcn_0001c856 () {
    __asm ("rol.w d6, d2");
    d0 |= 0x5;
    __asm ("neg.w -0x5556(a7)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c7d2 */
#include <stdint.h>
 
void fcn_0001c7d2 () {
    d2 = 0x69;
    if (? <= ?) {
        void (*0x1c844)() ();
    }
    d0 |= 0x0;
    *((0x0 + a2)) &= d0;
    d0 |= 0xaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c7fc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c85e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c95c */
#include <stdint.h>
 
void fcn_0001c95c () {
    *((a4 -= 2)) -= 0x7;
    d0 = 0x6f;
    if (? >= ?) {
        void (*0x1c9db)() ();
    }
    *((a3 -= 2)) -= 0x7;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x1c9cf)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c966).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c967).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1c9be).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ca3c */
#include <stdint.h>
 
void fcn_0001ca3c () {
    d5 = 0x6f;
    if (? <= ?) {
        void (*0x1caad)() ();
    }
    __asm ("bvs.b 0x1cab0");
    if (? == ?) {
        void (*0x174ee)() ();
    }
    d0 |= 0xaa;
    __asm ("adda.w (a2, d0.w), a4");
    d4 |= 0x61;
    __asm ("bmi.b 0x1cab5");
    *((aav.0x0000aaaa + a0)) -= 0x7;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ca54).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1caa6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1cb1e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1cb34 */
#include <stdint.h>
 
void fcn_0001cb34 () {
    d0 |= 0xac;
    d0 |= 0x4;
    *(([0x6b73 + a5] + 0x6f72745f)) -= 0x8;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1cb46).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1cad4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1cbd6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1cc44 */
#include <stdint.h>
 
void fcn_0001cc44 () {
    __asm ("bls.b 0x1ccb2");
    __asm ("bvs.b 0x1ccb8");
    *((0x5f6e + a1)) = *((a4 -= 2));
    __asm ("bcs.b fcn.0001ccc5");
    a5 += 0x2;
    d0 |= 0x18;
    d0 |= 0x3;
    __asm ("bls.b 0x1ccc2");
    return __asm ("bcs.b 0x1ccbf");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1cc40).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1cc5c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ccaa */
#include <stdint.h>
 
void fcn_0001ccaa () {
    __asm ("bvc.b 0x1cd11");
    __asm ("bls.b 0x1cd19");
    *((0x6f6f + a4)) -= 0x7;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ccc5).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1cdc6 */
#include <stdint.h>
 
void fcn_0001cdc6 () {
    a0 = *(a7);
    *((0x0 + a1)) = *(d4);
    d0 |= 0xf6;
    d0 |= 0x3;
    __asm ("stop 0x5f73");
    __asm ("bsr.b 0x1ce47");
    d0 = 0x6c;
    __asm ("bcs.b 0x1ce51");
    d0 |= 0x0;
    d0 |= 0x3;
    __asm ("chk.l 0x6f756368(a3, invalid.w), d6");
    __asm ("bcs.b 0x1ce56");
    d0 |= 0x0;
    __asm ("rol.b d3, d0");
    d0 |= 0x3;
    __asm ("chk.l -0x56(a3, a2.l), d6");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1cdff */
#include <stdint.h>
 
void fcn_0001cdff () {
    if (? >= ?) {
        void (*0x1ce6b)() ();
    }
    __asm ("bls.b 0x1ce6f");
    __asm ("bcs.b 0x1ce6a");
    d0 |= 0x0;
    __asm ("ror.b 0x4, d4");
    d0 |= 0x3;
    __asm ("chk.l ([a3]), d6");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ce14).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d0d2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d1ca).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d250).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d1fc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d20e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d26c */
#include <stdint.h>
 
void fcn_0001d26c () {
    __asm ("bhi.b 0x1d2dd");
    d1 = 0x64;
    __asm ("bcs.b 0x1d2e4");
    d0 |= 0x0;
    d0 |= 0xaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d300).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d40c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d454).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d524 */
#include <stdint.h>
 
void fcn_0001d524 () {
    if (? >= ?) {
        void (*0x1d592)() ();
    }
    *((a2 -= 2)) -= 0x7;
    __asm ("bsr.b fcn.0001d59c");
    d0 |= 0x0;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d59e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d52e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d548).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d59c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d654).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d68c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d97c */
#include <stdint.h>
 
void fcn_0001d97c () {
    *((a5 -= 2)) -= 0x1;
    d2 = 0x5f;
    if (? > ?) {
        void (*0x1d9f1)() ();
    }
    d1 = 0x6d;
    return __asm ("bsr.b fcn.0001d9f2");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d9f2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1da62).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d986).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1d9d2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1db2a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1db46).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1dcf4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1dd3a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1dd7e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ddd2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1dd60).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1de54).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1dee0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1def8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1df8c */
#include <stdint.h>
 
void fcn_0001df8c () {
    d0 |= 0x4;
    *((0x5f + a5 + d7)) += 0x8;
    d2 = 0x65;
    d4 = 0x74;
    *((aav.0x0000696e + a4)) -= 0x7;
    __asm ("bcs.w 0x18a48");
    d0 |= 0xaa;
    d0 |= 0x6a;
    d0 |= 0xaa;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1dfa6 */
#include <stdint.h>
 
void fcn_0001dfa6 () {
    d4 |= 0x4c;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1dfe0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e03e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e1d0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e3da).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e4b6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e66c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e694 */
#include <stdint.h>
 
void fcn_0001e694 () {
    d3 -= 0x7;
    *(a5) += 0x8;
    d0 |= 0x7c;
    d0 |= 0x7;
    __asm ("not.w aav.0x00006e64(a1)");
    *((a6 -= 2)) -= 0x7;
    d1 = 0x65;
    __asm ("bcs.b 0x1e709");
    if (? != ?) {
        void (*0x1e715)() ();
    }
    if (? >= ?) {
        void (*0x1e713)() ();
    }
    *((0x6e66 + a1)) -= 0x7;
    if (? <= ?) {
        void (*0x1e713)() ();
    }
    __asm ("bhi.b 0x1e722");
    if (? <= ?) {
        void (*0x1e71b)() ();
    }
    __asm ("bmi.w 0x19164");
    d0 |= 0xaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e6bc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e6d0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e6f8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e6f6 */
#include <stdint.h>
 
void fcn_0001e6f6 () {
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x1e757)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e764).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e762).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e7a0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e7b0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e7c4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e7e4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e850).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e920 */
#include <stdint.h>
 
void fcn_0001e920 () {
    d0 |= 0x98;
    d0 |= 0x5;
    __asm ("not.w aav.0x00006e64(a1)");
    a4 -= 0x7;
    __asm ("not.w d2");
    *((0x6e5f + a1)) -= 0x7;
    if (? == ?) {
        void (*0x1e997)() ();
    }
    d1 = 0x62;
    __asm ("bsr.b 0x1e9a1");
    return __asm ("bcs.w 0x193e6");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e9b6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e9bd).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1e93c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ea0e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1eaa0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1eabc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ead6 */
#include <stdint.h>
 
void fcn_0001ead6 () {
    *((a2 -= 2)) -= 0x7;
    if (? >= ?) {
        void (*0x1eb49)() ();
    }
    __asm ("bls.b 0x1eb47");
    d1 = *(d0);
    d0 |= 0x0;
    *(0x0) = *(a2);
    a2++;
    d5 |= 0x79;
    d3 -= 0x7;
    if (? <= ?) {
        void (*0x1eb5e)() ();
    }
    d0 = 0x65;
    d1 = 0x5f;
    return __asm ("bvc.b 0x1eb55");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1eaf4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1eb04).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ec04).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ecd6 */
#include <stdint.h>
 
void fcn_0001ecd6 () {
    d1 = 0x69;
    if (? > ?) {
        void (*0x1ed41)() ();
    }
    *((a0 -= 2)) = *(d0);
    d0 |= 0x6;
    d0 |= 0x4;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ece4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ed00).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ed10 */
#include <stdint.h>
 
void fcn_0001ed10 () {
    d0 |= 0xaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ed13).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1edc0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ee24).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1eeca).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ef5a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1efa0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f05e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f07c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f0aa).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f120).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f0c4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f108 */
#include <stdint.h>
 
void fcn_0001f108 () {
    __asm ("bcc.b 0x1f16b");
    d2 = 0x61;
    d0 |= 0x6c;
    d0 |= 0x3;
    *((a5 -= 2)) -= 0x1;
    d2 = 0x5f;
    d0 = 0x72;
    __asm ("bvs.b 0x1f18b");
    d1 = 0x69;
    d2 = 0x79;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f1cc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f3ae).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f3f4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f53c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f548).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f4c2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f53a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f910).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f988 */
#include <stdint.h>
 
void fcn_0001f988 () {
    d0 |= 0x22;
    d0 |= 0x2;
    __asm ("neg.w d4");
    *(a7) += 0x2;
    a7 += 2;
    if (? > ?) {
        void (*0x1f9f7)() ();
    }
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x1f9fd)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1f998).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1fa18).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1fc72).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1fe3c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
Error: no "good" data given (all invalid opcodes).


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ff8e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ffa8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ffc8 */
#include <stdint.h>
 
void fcn_0001ffc8 () {
    __asm ("bcs.w 0x1aa74");
    d0 |= 0xaa;
    d0 |= 0xf8;
    d0 |= 0xaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x1ffd2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x200fa).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2014c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x201bc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2041e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20498).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20438 */
#include <stdint.h>
 
void fcn_00020438 () {
    __asm ("bcs.b 0x20499");
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x204b1)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20425).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2043c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2049c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20526).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2053e */
#include <stdint.h>
 
void fcn_0002053e () {
    __asm ("bls.b 0x2059f");
    __asm ("bmi.b 0x205a3");
    if (? > ?) {
        void (*0x205b8)() ();
    }
    __asm ("bcs.b 0x205b4");
    d2 = 0x61;
    __asm ("bhi.w 0x1aff4");
    d0 |= 0xaa;
    d0 |= 0xe6;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20550).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20724).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20916).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2096a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20970 */
#include <stdint.h>
 
void fcn_00020970 () {
    d1 = 0x6f;
    d1 |= 0xa0;
    d0 |= 0x3;
    __asm ("stop 0x5f6d");
    __asm ("bcs.b 0x209eb");
    __asm ("bhi.b 0x209e5");
    d1 = 0x73;
    d0 |= 0x0;
    d6 = 0x4;
    d0 |= 0x3;
    d3 |= 0xaa;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2096c */
#include <stdint.h>
 
void fcn_0002096c () {
    d2 = 0x61;
    d0 |= 0xaa;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x209a2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x209b6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x209b7).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20b20).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20cdc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20cec).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20d72).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20dfc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20eda).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20f94).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x20f95).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x21076).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2141c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2158e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2161c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x21656).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x21786).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x217e8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x21844).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2184f).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x21914).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x2195c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x21bbc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x21be4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x21c62).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x21c42).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x24726 */
#include <stdint.h>
 
void fcn_00024726 () {
    d0 |= d0;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x24728).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x24f04).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x26456).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31b3a */
#include <stdint.h>
 
void fcn_00031b3a () {
    d0 |= 0xfe;
    d0 |= 0xc;
    d0 |= 0x17;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31b54 */
#include <stdint.h>
 
void fcn_00031b54 () {
    d3 += *(a6);
    d0 |= 0x6a;
    d0 |= 0x7f;
    d0 |= 0x8d;
    d0 |= 0xa2;
    d0 |= 0xb0;
    d0 |= 0xc0;
    d0 |= 0xd1;
    d0 |= 0xe0;
    d0 |= 0xf8;
    d0 |= 0x8;
    d0 |= 0x1c;
    d0 |= 0x32;
    d0 |= 0x42;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31b8a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31b46 */
#include <stdint.h>
 
void fcn_00031b46 () {
    d0 |= 0x25;
    d0 |= 0x34;
    d0 |= 0x43;
    d0 |= 0xaa;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31c5e */
#include <stdint.h>
 
void fcn_00031c5e () {
    __asm ("bsr.b fcn.00031cd0");
    *((0xaaaaaaaa + a4)) -= 0x7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31cd2 */
#include <stdint.h>
 
void fcn_00031cd2 () {
    __asm ("bcc.b 0x31d47");
    a7 = *((0x6d6e + a7));
    __asm ("bvs.w 0x3501e");
    *((-0x56 + a7 + a2)) -= 0x7;
    if (? >= ?) {
        void (*0x31d55)() ();
    }
    a7 = *((0x6d6e + a7));
    return __asm ("bvs.w 0x2c792");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31ce8 */
#include <stdint.h>
 
void fcn_00031ce8 () {
    *((-0x5556 + a1)) = *(d4);
    *((0x626a + a7)) -= 0x7;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31ca4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31c64).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31c20).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31c7e */
#include <stdint.h>
 
void fcn_00031c7e () {
    if (? > ?) {
        void (*0x31cdf)() ();
    }
    if (? == ?) {
        void (*0x31cf4)() ();
    }
    __asm ("bsr.b fcn.00031cf4");
    return __asm ("bvc.b 0x31cef");
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31cf4).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31d00).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31cc2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31cca */
#include <stdint.h>
 
void fcn_00031cca () {
    __asm ("bsr.b fcn.00031d2f");
    __asm ("bmi.b 0x31d35");
    d1 = 0x6f;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31c86).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31cd0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31d08 */
#include <stdint.h>
 
void fcn_00031d08 () {
    *((0x6c + a3 + d6)) |= 0x5f;
    if (? <= ?) {
        void (*0x31d7f)() ();
    }
    d1 = 0x73;
    a7 = *((0x6d6e + a7));
    __asm ("bvs.w 0x36087");
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x31d7e)() ();
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31d92).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31e04).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31d1c).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31d32).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31dac */
#include <stdint.h>
 
void fcn_00031dac () {
    *((0x6163 + a4)) += 0x8;
    __asm ("bcs.b 0x31e11");
    __asm ("bcc.b 0x31e15");
    d2 = 0x61;
}


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31cee).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31d2a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31d2f).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31daa).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31dd0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31dfc).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31db6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31e12).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x31eac).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x343a2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34618).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34636).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34692).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x346b2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x349ca).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34a68).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34a86).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34aa0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34aaa).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34c46).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34c66).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34c86).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34cf2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34cf5).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34e32).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34ea6).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x34e6e).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x350e2).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x35156).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x35154).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x3520a).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x35222).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x352b8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.


r2dec has crashed (info: SUBJECTS/from_aminet/albion_demo/demo/m68k_amiga/subject.exe @ 0x352ce).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.

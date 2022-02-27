/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11000 */
#include <stdint.h>
 
void entry0 (int32_t arg1, int32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    /* [00] -r-x section size 4096 named .text */
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r7 = r3;
    fcn_000118a4 ();
    fcn_00011360 ();
    fcn_0001153c ();
    fcn_00011624 ();
    r0 = r4;
    r1 = r5;
    r2 = r6;
    r3 = r7;
    r0 = fcn_0001164c ();
    r4 = r0;
    fcn_00011514 ();
    r0 = 0x42;
    r1 = r4;
    fcn_000118b0 ();
    while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x118a4 */
#include <stdint.h>
 
void fcn_000118a4 () {
    ip = *(0x118a4);
    pc = *(0x118a4);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11360 */
#include <stdint.h>
 
void fcn_00011360 () {
    r0 = *(0x11394);
    if (r0 < lr) {
    }
    ip = *(0x000113a0);
    do {
        r3 = *((r0 + 4));
        r2 = *((r3 + ip));
        r1 = *(r0);
        r0 += 8;
        r2 += r1;
        *((r3 + ip)) = r2;
    } while (r0 <= lr);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x1153c */
#include <stdint.h>
 
void fcn_0001153c () {
    r0 = 0x80;
    fcn_00011904 ();
    r3 = *(0x1156c);
    *(r3) = r0;
    r3 = 0;
    *(r0) = r3;
    r3 = *(0x11570);
    *(r3) = r0;
    r0 = 1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11904 */
#include <stdint.h>
 
void fcn_00011904 () {
    ip = *(0x11904);
    pc = *(0x11904);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11624 */
#include <stdint.h>
 
void fcn_00011624 () {
    r2 = *(0x11644);
    r3 = *(0x11644);
    r3++;
    *(r2) = r3;
    fcn_000115bc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x115bc */
#include <stdint.h>
 
void fcn_000115bc () {
    r3 = *(0x11618);
    r2 = *(0x11618);
    if (r2 != 1) {
        goto label_0;
    }
    r0 = r3;
    r2++;
    do {
        r1 = r2 + 1;
        r3 = *((r0 += 4));
        if (r3 == 0) {
            r2 = r1;
        }
    } while (r3 != 0);
label_0:
    if (r2 == 0) {
        goto label_1;
    }
    r3 = *(0x11618);
    r5 = r3 + (r2 << 2);
    r4 = r2;
    do {
        lr = pc;
        pc = *(r5);
        r5 += -4;
        r4--;
    } while (r4 != r4);
label_1:
    r0 = *(0x1161c);
    fcn_00011474 (r0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x1164c */
#include <stdint.h>
 
void fcn_0001164c () {
    int16_t var_0h;
    int32_t var_1h;
    int32_t var_400h;
    r7 = r2;
    r0 = 0;
    r3 = *(0x1188c);
    r2 = sp + 0x400;
    *((r2 + r3)) = r0;
    r1 = sp;
    r2 = 0x200;
    r0 = fcn_00011964 ();
    r4 = r0;
    if (r7 != 0) {
        r6 = r7;
    }
    if (r7 != 0) {
        r0 = r7;
        r0 = fcn_00011970 ();
        r6 = r0;
    }
    r0 = r6 + 2;
    r0 = r4 + r0;
    r0 = fcn_00011904 ();
    r5 = r0 - 0;
    if (r5 != r0) {
        goto label_1;
    }
    r0 += 0x42;
    r1 = ~0;
    fcn_000118b0 ();
    while (1);
label_1:
    r0 = 4;
    fcn_00011904 ();
    r3 = *(0x11890);
    *(r3) = r0;
    if (r0 == 0) {
        r0 += 0x42;
        r1 = ~0;
        fcn_000118b0 ();
    }
    *(r0) = r5;
    r4 = sp;
    r0 = sp;
    r0 = fcn_00011970 ();
    r2 = r0 + 1;
    r0 = r5;
    r1 = sp;
    fcn_0001197c ();
    r2 = *(0x11894);
    r3 = *(0x11894);
    r3++;
    *(r2) = r3;
    if (r6 <= 0) {
        goto label_2;
    }
    r3 = *(0x11890);
    r4 = *(0x11890);
    r0 = r4;
    r0 = fcn_000118c8 ();
    r4 += r0;
    r4++;
    r0 = r4;
    r1 = r7;
    r2 = r6 + 1;
    fcn_0001197c ();
    while (1);
    r0 = r4;
    r0 = fcn_000118c8 ();
    r8 = r4 + r0;
    if (r4 == 0) {
        goto label_3;
    }
    sl = 1;
label_0:
    r0 = r4;
    r1 = *(0x11898);
    r0 = fcn_00011940 ();
    r6 = r4 + r0;
    r0 = *((r4 + r0));
    if (r0 == 0) {
        goto label_4;
    }
    r2 = "_";
    r3 = *(r2);
    if (r3 == 0) {
        goto label_5;
    }
    if (r0 == r3) {
        r3 = r0 << 0x18;
    }
    __asm ("asrne ip, r3, 0x18");
    if (r0 != r3) {
        goto label_6;
    }
    goto label_7;
    do {
        r2++;
        r3 <<= 0x18;
        if (ip == r3) {
            goto label_7;
        }
label_6:
        r3 = *((r2 + 1));
    } while (r3 != 0);
    goto label_5;
label_7:
    r6++;
    r1 = r0 << 0x18;
    r0 = r6;
    r1 >>= 0x18;
    r0 = fcn_0001194c ();
    r4 = r0 - 0;
    if (r4 != r0) {
        r4 = r8;
    }
    goto label_8;
label_5:
    r0 = r6;
    r1 = *(0x11898);
    r0 = fcn_00011958 ();
    r4 = r6 + r0;
label_8:
    r3 = 0;
    *(r4) = r3;
    sl++;
    r7 = *(0x11890);
    r5 = sl << 2;
    r0 = *(0x11890);
    r1 = r5;
    r0 = fcn_00011928 ();
    if (r0 == 0) {
        goto label_9;
    }
    *(r7) = r0;
    r3 = r5 + r0;
    *((r3 - 4)) = r6;
    if (r4 != r8) {
        r4++;
        goto label_10;
    }
    if (r4 != r8) {
label_10:
        goto label_0;
    }
label_4:
    r3 = *(0x11894);
    *(r3) = sl;
    if (sl >= 0) {
        goto label_2;
    }
    do {
        r0 = 0x42;
        r1 = ~0;
        fcn_000118b0 ();
label_9:
        r2 = ~0;
        r3 = *(0x11894);
        *(r3) = r2;
    } while (1);
label_3:
    r2 = 1;
    r3 = *(0x11894);
    *(r3) = r2;
label_2:
    ip = *(0x11894);
    r2 = *(0x11890);
    r3 = 0;
    offset_0 = ip << 2;
    *((r2 + offset_0)) = r3;
    r0 = *(0x11894);
    r1 = *(0x11890);
    fcn_000112f4 (r0, r1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11514 */
#include <stdint.h>
 
void fcn_00011514 () {
    fcn_0001149c ();
    fcn_000113b4 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x1149c */
#include <stdint.h>
 
void fcn_0001149c () {
    r3 = *(0x11508);
    r0 = *(0x11508);
    if (r0 == 0) {
        goto label_0;
    }
    r3 = *(0x1150c);
    r2 = *(0x1150c);
    r3 = r2 - 4;
    if (r0 > r3) {
        goto label_1;
    }
    r4 = r2 - 8;
    r6 = *(0x11508);
    do {
        r5 = r4;
        r3 = *((r4 + 4));
        if (r3 == 0) {
            lr = pc;
        }
        if (r3 == 0) {
            pc = r3;
        }
        r0 = *(r6);
        r4 -= 4;
    } while (r0 < r5);
label_1:
    fcn_00011910 ();
    r2 = 0;
    r3 = *(0x11508);
    *(r3) = r2;
label_0:
    r0 = 0;
    fcn_0001191c ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x113b4 */
#include <stdint.h>
 
void fcn_000113b4 () {
    fcn_00011934 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11934 */
#include <stdint.h>
 
void fcn_00011934 () {
    ip = *(0x11934);
    pc = *(0x11934);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x118b0 */
#include <stdint.h>
 
void fcn_000118b0 () {
    ip = *(0x118b0);
    pc = *(0x118b0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x118f8 */
#include <stdint.h>
 
void fcn_000118f8 () {
    ip = *(0x118f8);
    pc = *(0x118f8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x118e0 */
#include <stdint.h>
 
void fcn_000118e0 () {
    ip = *(0x118e0);
    pc = *(0x118e0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11524 */
#include <stdint.h>
 
void fcn_00011524 (int32_t arg1) {
    r0 = arg1;
    r4 = r0;
    fcn_00011514 ();
    r0 = 0x42;
    r1 = r4;
    fcn_000118b0 ();
    while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x118d4 */
#include <stdint.h>
 
void fcn_000118d4 () {
    ip = *(0x118d4);
    pc = *(0x118d4);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11050 */
#include <stdint.h>
 
void fcn_00011050 (int32_t arg1, int32_t arg2) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_sp_1ch;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    *((fp - 0x14)) = r0;
    *((fp - 0x18)) = r1;
    r3 = 0;
    *((fp - 0x10)) = r3;
    while (r3 != 0) {
        r3 = *((fp - 0x10));
        r3 <<= 2;
        r2 = r3;
        r3 = *((fp - 0x18));
        r3 = r2 + r3;
        r2 = *(r3);
        r3 = *((fp - 0x10));
        r3++;
        *((fp - 0x10)) = r3;
        r0 = r2;
        r1 = *(0x11100);
        r2 = 3;
        r0 = fcn_000118f8 ();
        r3 = r0;
        if (r3 == 0) {
            r2 = "LOLO";
            r3 = 1;
            *(r2) = r3;
            r3 = 1;
            *((fp - 0x1c)) = r3;
            goto label_0;
        }
        r3 = *((fp - 0x10));
        r3 <<= 2;
        r2 = r3;
        r3 = *((fp - 0x18));
        r3 = r2 + r3;
        r3 = *(r3);
    }
    r3 = 0;
    *((fp - 0x1c)) = r3;
label_0:
    r3 = *((fp - 0x1c));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x1112c */
#include <stdint.h>
 
void fcn_0001112c (int32_t arg1, int32_t arg2) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_sp_1ch;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    *((fp - 0x18)) = r0;
    *((fp - 0x1c)) = r1;
    r3 = fp - 0x14;
    r0 = *((fp - 0x18));
    r1 = *(0x111cc);
    r2 = r3;
    fcn_000118d4 ();
    r3 = *((fp - 0x14));
    r0 = r3;
    r1 = *((fp - 0x1c));
    r0 = fcn_00011050 (r0, r1);
    r3 = r0;
    if (r3 == 0) {
        goto label_0;
    }
    r3 = 0;
    *((fp - 0x10)) = r3;
    while (r3 <= 9) {
        r3 = *((fp - 0x14));
        r3 &= 1;
        if (r3 == 0) {
            r3 = "_d";
            if (r3 == 1) {
                r0 = *(0x111d4);
                fcn_000118e0 ();
            }
            r0 = 0;
            fcn_00011524 (r0);
        }
        r3 = *((fp - 0x10));
        r3++;
        *((fp - 0x10)) = r3;
        r3 = *((fp - 0x10));
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x118c8 */
#include <stdint.h>
 
void fcn_000118c8 () {
    ip = *(0x118c8);
    pc = *(0x118c8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x1110c */
#include <stdint.h>
 
void fcn_0001110c () {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_4h;
    r0 = *(0x00011128);
    fcn_000118e0 ();
    r0 = 0;
    fcn_00011524 (r0);
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return r3 = r1 & r8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x118ec */
#include <stdint.h>
 
void fcn_000118ec () {
    ip = *(0x118ec);
    pc = *(0x118ec);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x118bc */
#include <stdint.h>
 
void fcn_000118bc () {
    ip = *(0x118bc);
    pc = *(0x118bc);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x111dc */
#include <stdint.h>
 
void fcn_000111dc (int32_t arg1, int32_t arg2) {
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1dh;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    *((fp - 0x24)) = r0;
    *((fp - 0x28)) = r1;
    r3 = 0;
    *((fp - 0x18)) = r3;
    r3 = 0;
    *((fp - 0x14)) = r3;
    while (r4 <= r3) {
        r3 = *((fp - 0x14));
        r2 = r3;
        r3 = *((fp - 0x24));
        r3 = r2 + r3;
        r3 = *(r3);
        *((fp - 0x1d)) = r3;
        r3 = fp - 0x1d;
        r2 = fp - 0x1c;
        r0 = r3;
        r1 = *(0x112e8);
        fcn_000118d4 ();
        r2 = *((fp - 0x1c));
        r3 = *((fp - 0x18));
        r3 += r2;
        *((fp - 0x18)) = r3;
        r3 = *((fp - 0x18));
        if (r3 == 0x10) {
            r0 = *((fp - 0x24));
            r1 = *((fp - 0x28));
            fcn_0001112c (r0, r1);
        }
        r3 = *((fp - 0x14));
        r3++;
        *((fp - 0x14)) = r3;
        r4 = *((fp - 0x14));
        r0 = *((fp - 0x24));
        r0 = fcn_000118c8 ();
        r3 = r0;
    }
    fcn_0001110c ();
    r3 = *((fp - 0x1c));
    r0 = r3;
    r1 = *((fp - 0x28));
    r0 = fcn_00011050 (r0, r1);
    r3 = r0;
    if (r3 == 0) {
        goto label_0;
    }
    r3 = 0;
    *((fp - 0x14)) = r3;
    while (r3 <= 9) {
        r3 = *((fp - 0x1c));
        r3 &= 1;
        if (r3 == 0) {
            r0 = "_d";
            fcn_000118e0 ();
            r0 = 0;
            fcn_00011524 (r0);
        }
        r3 = *((fp - 0x14));
        r3++;
        *((fp - 0x14)) = r3;
        r3 = *((fp - 0x14));
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11928 */
#include <stdint.h>
 
void fcn_00011928 () {
    ip = *(0x11928);
    pc = *(0x11928);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x113e4 */
#include <stdint.h>
 
void fcn_000113e4 (int32_t arg1, int32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    r4 = r0;
    r5 = r2;
    r6 = r1 - 0;
    if (r6 != r1) {
        r0 = *(r6);
        __asm ("cmpne r0, 0");
        if (r2 == 0) {
            goto label_0;
        }
        r3 = *(r2);
        if (r3 == 0) {
            goto label_0;
        }
        r3 -= r0;
        r3 >>= 2;
        r1 = r3 + 1;
        if (r1 <= 0) {
            goto label_0;
        }
        r7 = r1 << 2;
        r1 = r7;
        r0 = fcn_00011928 ();
        if (r0 == 0) {
            *(r6) = r0;
        }
        if (r0 == 0) {
            r3 = r0 + r7;
        }
        if (r0 == 0) {
            *(r5) = r3;
        }
        if (r0 == 0) {
            *((r3 - 4)) = r4;
        }
        if (r0 != 0) {
            goto label_1;
        }
    }
label_0:
    r4 = 0;
label_1:
    r0 = r4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11910 */
#include <stdint.h>
 
void fcn_00011910 () {
    ip = *(0x11910);
    pc = *(0x11910);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x1191c */
#include <stdint.h>
 
void fcn_0001191c () {
    ip = *(0x1191c);
    pc = *(0x1191c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11474 */
#include <stdint.h>
 
void fcn_00011474 (int32_t arg1) {
    r0 = arg1;
    r1 = *(0x11490);
    r2 = *(0x11494);
    r0 = fcn_000113e4 (r0, r1);
    if (r0 == 0) {
        r0 = 0;
    }
    if (r0 != 0) {
        r0 = ~0;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11964 */
#include <stdint.h>
 
void fcn_00011964 () {
    ip = *(0x11964);
    pc = *(0x11964);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11970 */
#include <stdint.h>
 
void fcn_00011970 () {
    ip = *(0x11970);
    pc = *(0x11970);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x1197c */
#include <stdint.h>
 
void fcn_0001197c () {
    ip = *(0x1197c);
    pc = *(0x1197c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11940 */
#include <stdint.h>
 
void fcn_00011940 () {
    ip = *(0x11940);
    pc = *(0x11940);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x1194c */
#include <stdint.h>
 
void fcn_0001194c () {
    ip = *(0x1194c);
    pc = *(0x1194c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x11958 */
#include <stdint.h>
 
void fcn_00011958 () {
    ip = *(0x11958);
    pc = *(0x11958);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/arm_pe/subject.exe @ 0x112f4 */
#include <stdint.h>
 
void fcn_000112f4 (int32_t arg1, int32_t arg2) {
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_sp_7ch;
    int32_t var_ch;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    *((fp - 0x74)) = r0;
    *((fp - 0x78)) = r1;
    *((fp - 0x7c)) = r2;
    fcn_00011624 ();
    r0 = *(0x11350);
    fcn_000118e0 ();
    r0 = "IOLI_Crackme_Level_0x07";
    fcn_000118ec ();
    r3 = fp - 0x70;
    r0 = "Password:_";
    r1 = r3;
    fcn_000118bc ();
    r3 = fp - 0x70;
    r0 = r3;
    r1 = *((fp - 0x7c));
    fcn_000111dc (r0, r1);
    r3 = 0;
    r0 = r3;
    return;
}

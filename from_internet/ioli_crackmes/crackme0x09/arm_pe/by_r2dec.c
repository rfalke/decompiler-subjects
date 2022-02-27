/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11000 */
#include <stdint.h>
 
void entry0 (int32_t arg1, int32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    /* [00] -r-x section size 4096 named .text */
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r7 = r3;
    fcn_000118a0 ();
    fcn_0001135c ();
    fcn_00011538 ();
    fcn_00011620 ();
    r0 = r4;
    r1 = r5;
    r2 = r6;
    r3 = r7;
    r0 = fcn_00011648 ();
    r4 = r0;
    fcn_00011510 ();
    r0 = 0x42;
    r1 = r4;
    fcn_000118ac ();
    while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x118a0 */
#include <stdint.h>
 
void fcn_000118a0 () {
    ip = *(0x118a0);
    pc = *(0x118a0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x1135c */
#include <stdint.h>
 
void fcn_0001135c () {
    r0 = *(0x11390);
    if (r0 < lr) {
    }
    ip = *(0x0001139c);
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11538 */
#include <stdint.h>
 
void fcn_00011538 () {
    r0 = 0x80;
    fcn_00011900 ();
    r3 = *(0x11568);
    *(r3) = r0;
    r3 = 0;
    *(r0) = r3;
    r3 = *(0x1156c);
    *(r3) = r0;
    r0 = 1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11900 */
#include <stdint.h>
 
void fcn_00011900 () {
    ip = *(0x11900);
    pc = *(0x11900);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11620 */
#include <stdint.h>
 
void fcn_00011620 () {
    r2 = *(0x11640);
    r3 = *(0x11640);
    r3++;
    *(r2) = r3;
    fcn_000115b8 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x115b8 */
#include <stdint.h>
 
void fcn_000115b8 () {
    r3 = *(0x11614);
    r2 = *(0x11614);
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
    r3 = *(0x11614);
    r5 = r3 + (r2 << 2);
    r4 = r2;
    do {
        lr = pc;
        pc = *(r5);
        r5 += -4;
        r4--;
    } while (r4 != r4);
label_1:
    r0 = *(0x11618);
    fcn_00011470 (r0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11648 */
#include <stdint.h>
 
void fcn_00011648 () {
    int16_t var_0h;
    int32_t var_1h;
    int32_t var_400h;
    r7 = r2;
    r0 = 0;
    r3 = *(0x11888);
    r2 = sp + 0x400;
    *((r2 + r3)) = r0;
    r1 = sp;
    r2 = 0x200;
    r0 = fcn_00011960 ();
    r4 = r0;
    if (r7 != 0) {
        r6 = r7;
    }
    if (r7 != 0) {
        r0 = r7;
        r0 = fcn_0001196c ();
        r6 = r0;
    }
    r0 = r6 + 2;
    r0 = r4 + r0;
    r0 = fcn_00011900 ();
    r5 = r0 - 0;
    if (r5 != r0) {
        goto label_1;
    }
    r0 += 0x42;
    r1 = ~0;
    fcn_000118ac ();
    while (1);
label_1:
    r0 = 4;
    fcn_00011900 ();
    r3 = *(0x1188c);
    *(r3) = r0;
    if (r0 == 0) {
        r0 += 0x42;
        r1 = ~0;
        fcn_000118ac ();
    }
    *(r0) = r5;
    r4 = sp;
    r0 = sp;
    r0 = fcn_0001196c ();
    r2 = r0 + 1;
    r0 = r5;
    r1 = sp;
    fcn_00011978 ();
    r2 = *(0x11890);
    r3 = *(0x11890);
    r3++;
    *(r2) = r3;
    if (r6 <= 0) {
        goto label_2;
    }
    r3 = *(0x1188c);
    r4 = *(0x1188c);
    r0 = r4;
    r0 = fcn_000118c4 ();
    r4 += r0;
    r4++;
    r0 = r4;
    r1 = r7;
    r2 = r6 + 1;
    fcn_00011978 ();
    while (1);
    r0 = r4;
    r0 = fcn_000118c4 ();
    r8 = r4 + r0;
    if (r4 == 0) {
        goto label_3;
    }
    sl = 1;
label_0:
    r0 = r4;
    r1 = *(0x11894);
    r0 = fcn_0001193c ();
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
    r0 = fcn_00011948 ();
    r4 = r0 - 0;
    if (r4 != r0) {
        r4 = r8;
    }
    goto label_8;
label_5:
    r0 = r6;
    r1 = *(0x11894);
    r0 = fcn_00011954 ();
    r4 = r6 + r0;
label_8:
    r3 = 0;
    *(r4) = r3;
    sl++;
    r7 = *(0x1188c);
    r5 = sl << 2;
    r0 = *(0x1188c);
    r1 = r5;
    r0 = fcn_00011924 ();
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
    r3 = *(0x11890);
    *(r3) = sl;
    if (sl >= 0) {
        goto label_2;
    }
    do {
        r0 = 0x42;
        r1 = ~0;
        fcn_000118ac ();
label_9:
        r2 = ~0;
        r3 = *(0x11890);
        *(r3) = r2;
    } while (1);
label_3:
    r2 = 1;
    r3 = *(0x11890);
    *(r3) = r2;
label_2:
    ip = *(0x11890);
    r2 = *(0x1188c);
    r3 = 0;
    offset_0 = ip << 2;
    *((r2 + offset_0)) = r3;
    r0 = *(0x11890);
    r1 = *(0x1188c);
    fcn_000112f0 (r0, r1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11510 */
#include <stdint.h>
 
void fcn_00011510 () {
    fcn_00011498 ();
    fcn_000113b0 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11498 */
#include <stdint.h>
 
void fcn_00011498 () {
    r3 = *(0x11504);
    r0 = *(0x11504);
    if (r0 == 0) {
        goto label_0;
    }
    r3 = *(0x11508);
    r2 = *(0x11508);
    r3 = r2 - 4;
    if (r0 > r3) {
        goto label_1;
    }
    r4 = r2 - 8;
    r6 = *(0x11504);
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
    fcn_0001190c ();
    r2 = 0;
    r3 = *(0x11504);
    *(r3) = r2;
label_0:
    r0 = 0;
    fcn_00011918 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x113b0 */
#include <stdint.h>
 
void fcn_000113b0 () {
    fcn_00011930 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11930 */
#include <stdint.h>
 
void fcn_00011930 () {
    ip = *(0x11930);
    pc = *(0x11930);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x118ac */
#include <stdint.h>
 
void fcn_000118ac () {
    ip = *(0x118ac);
    pc = *(0x118ac);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x118f4 */
#include <stdint.h>
 
void fcn_000118f4 () {
    ip = *(0x118f4);
    pc = *(0x118f4);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11520 */
#include <stdint.h>
 
void fcn_00011520 (int32_t arg1) {
    r0 = arg1;
    r4 = r0;
    fcn_00011510 ();
    r0 = 0x42;
    r1 = r4;
    fcn_000118ac ();
    while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x118dc */
#include <stdint.h>
 
void fcn_000118dc () {
    ip = *(0x118dc);
    pc = *(0x118dc);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x118d0 */
#include <stdint.h>
 
void fcn_000118d0 () {
    ip = *(0x118d0);
    pc = *(0x118d0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11050 */
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
        r1 = *(0x110fc);
        r2 = 3;
        r0 = fcn_000118f4 ();
        r3 = r0;
        if (r3 == 0) {
            r3 = "LOLO";
            r2 = 1;
            *(r3) = r2;
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
    r0 = ~0;
    fcn_00011520 (r0);
label_0:
    r0 = *((fp - 0x1c));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11128 */
#include <stdint.h>
 
void fcn_00011128 (int32_t arg1, int32_t arg2) {
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
    r1 = *(0x111c8);
    r2 = r3;
    fcn_000118d0 ();
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
                r0 = *(0x111d0);
                fcn_000118dc ();
            }
            r0 = 0;
            fcn_00011520 (r0);
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x118c4 */
#include <stdint.h>
 
void fcn_000118c4 () {
    ip = *(0x118c4);
    pc = *(0x118c4);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11108 */
#include <stdint.h>
 
void fcn_00011108 () {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_4h;
    r0 = *(0x00011124);
    fcn_000118dc ();
    r0 = 0;
    fcn_00011520 (r0);
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return r3 = r1 & r8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x118e8 */
#include <stdint.h>
 
void fcn_000118e8 () {
    ip = *(0x118e8);
    pc = *(0x118e8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x118b8 */
#include <stdint.h>
 
void fcn_000118b8 () {
    ip = *(0x118b8);
    pc = *(0x118b8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x111d8 */
#include <stdint.h>
 
void fcn_000111d8 (int32_t arg1, int32_t arg2) {
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
        r1 = *(0x112e4);
        fcn_000118d0 ();
        r2 = *((fp - 0x1c));
        r3 = *((fp - 0x18));
        r3 += r2;
        *((fp - 0x18)) = r3;
        r3 = *((fp - 0x18));
        if (r3 == 0x10) {
            r0 = *((fp - 0x24));
            r1 = *((fp - 0x28));
            fcn_00011128 (r0, r1);
        }
        r3 = *((fp - 0x14));
        r3++;
        *((fp - 0x14)) = r3;
        r4 = *((fp - 0x14));
        r0 = *((fp - 0x24));
        r0 = fcn_000118c4 ();
        r3 = r0;
    }
    fcn_00011108 ();
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
            fcn_000118dc ();
            r0 = 0;
            fcn_00011520 (r0);
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11924 */
#include <stdint.h>
 
void fcn_00011924 () {
    ip = *(0x11924);
    pc = *(0x11924);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x113e0 */
#include <stdint.h>
 
void fcn_000113e0 (int32_t arg1, int32_t arg2) {
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
        r0 = fcn_00011924 ();
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x1190c */
#include <stdint.h>
 
void fcn_0001190c () {
    ip = *(0x1190c);
    pc = *(0x1190c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11918 */
#include <stdint.h>
 
void fcn_00011918 () {
    ip = *(0x11918);
    pc = *(0x11918);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11470 */
#include <stdint.h>
 
void fcn_00011470 (int32_t arg1) {
    r0 = arg1;
    r1 = *(0x1148c);
    r2 = *(0x11490);
    r0 = fcn_000113e0 (r0, r1);
    if (r0 == 0) {
        r0 = 0;
    }
    if (r0 != 0) {
        r0 = ~0;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11960 */
#include <stdint.h>
 
void fcn_00011960 () {
    ip = *(0x11960);
    pc = *(0x11960);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x1196c */
#include <stdint.h>
 
void fcn_0001196c () {
    ip = *(0x1196c);
    pc = *(0x1196c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11978 */
#include <stdint.h>
 
void fcn_00011978 () {
    ip = *(0x11978);
    pc = *(0x11978);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x1193c */
#include <stdint.h>
 
void fcn_0001193c () {
    ip = *(0x1193c);
    pc = *(0x1193c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11948 */
#include <stdint.h>
 
void fcn_00011948 () {
    ip = *(0x11948);
    pc = *(0x11948);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x11954 */
#include <stdint.h>
 
void fcn_00011954 () {
    ip = *(0x11954);
    pc = *(0x11954);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/arm_pe/subject.exe @ 0x112f0 */
#include <stdint.h>
 
void fcn_000112f0 (int32_t arg1, int32_t arg2) {
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
    fcn_00011620 ();
    r0 = *(0x1134c);
    fcn_000118dc ();
    r0 = "IOLI_Crackme_Level_0x09";
    fcn_000118e8 ();
    r3 = fp - 0x70;
    r0 = "Password:_";
    r1 = r3;
    fcn_000118b8 ();
    r3 = fp - 0x70;
    r0 = r3;
    r1 = *((fp - 0x7c));
    fcn_000111d8 (r0, r1);
    r3 = 0;
    r0 = r3;
    return;
}

/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xfb4 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    x29 = 0x0;
    x30 = 0x0;
    x5 = x0;
    x1 = *(sp);
    x2 = sp + 8;
    x6 = sp;
    x0 = main;
    x3 = __libc_csu_init;
    x4 = __libc_csu_fini;
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xd90 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x15028);
    x16 = 0x15028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xe30 */
#include <stdint.h>
 
uint64_t dbg_main (uint32_t argc, char ** argv) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = argc;
    x1 = argv;
    /* int main(int d,int a); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    __asm ("b.le 0xfa4");
    w19 = w1;
    x1 = 0x1869f;
    x0 = 0x1;
    w0 = calloc (x0, x1);
    x3 = (int64_t) w0;
    x2 = " int if else while break return for define main ";
    x5 = x3;
    x8 = Q;
    x1 = 0x1869f;
    x6 = *(x2);
    x7 = *((x2 + 8));
    *(x3) = x6;
    *((x3 + 8)) = x7;
    *(x8) = w0;
    x0 = 0x1;
    x6 = *((x2 + 0x20));
    x7 = *((x2 + 0x20 + 8));
    x8 = *((x2 + 0x10));
    x9 = *((x2 + 0x10 + 8));
    *((x3 + 0x20)) = x6;
    *((x3 + 0x20 + 8)) = x7;
    w10 = *((x2 + 0x30));
    x4 = D;
    *((x3 + 0x10)) = x8;
    *((x3 + 0x10 + 8)) = x9;
    *((x5 += 0x30)) = w10;
    *(x4) = w5;
    calloc (x0, x1);
    x21 = i;
    x2 = x0;
    x22 = G;
    x1 = 0x1869f;
    x0 = 0x1;
    *(x21) = w2;
    *(x22) = w2;
    calloc (x0, x1);
    x20 = v;
    x3 = x0;
    x1 = 0x1869f;
    x0 = 0x1;
    x2 = K;
    *(x20) = w3;
    *(x2) = w3;
    calloc (x0, x1);
    w2 = w19 + 4;
    w19 += 8;
    x2 = (int64_t) w2;
    x1 = 0x3e50;
    x3 = T;
    x19 = (int64_t) w19;
    *(x3) = w0;
    x0 = *(x2);
    fopen (w0, x1);
    w6 = G;
    w2 = 0x8048000;
    w2 -= w6;
    x3 = ak;
    w4 = 0x14f71;
    x1 = y;
    w5 = ak;
    *(x20) = w4;
    *(x21) = w5;
    *(x3) = w0;
    *(x1) = w2;
    w ();
    dbg_av ();
    w0 = 0x0;
    dbg_ar (w0, x1);
    w0 = *(x19);
    dbg_au (w0);
    do {
        w0 = 0x0;
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x0;
        x0 = "usage: otccelf file.c outfile";
        puts ("usage: otccelf file.c outfile");
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xdb0 */
#include <stdint.h>
 
void calloc () {
    x17 = *(0x15038);
    x16 = 0x15038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xd70 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x15018);
    x16 = 0x15018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1120 */
#include <stdint.h>
 
uint32_t w () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = V;
    w1 = V;
    if (w1 != 0) {
        w3 = w1 + 1;
        x1 = (int64_t) w1;
        *(x0) = w3;
        x2 = m;
        w1 = *(x1);
        *(x2) = w1;
        if (w1 == 2) {
            goto label_0;
        }
        return;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = ak;
    x0 = *(x0);
    fgetc (x0);
    x1 = m;
    *(x1) = w0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x14f70;
label_0:
    x1 = 0x14000;
    *(x0) = 0;
    x0 = al;
    w0 = al;
    *(x2) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xda0 */
#include <stdint.h>
 
void fgetc () {
    x17 = *(0x15030);
    x16 = 0x15030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1228 */
#include <stdint.h>
 
void dbg_av () {
    int64_t var_60h;
    int64_t var_60h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_50h;
    int64_t var_50h_2;
    /* int av(); */
    *((sp + -0x60)) = x29;
    *((sp + -0x60 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x21 = 0x14000;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x23 = 0x14000;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    x22 = 0x14000;
    x26 = D;
    x25 = 0x14000;
    x24 = e;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
label_0:
    x20 = *((x22 + 0xfb8));
    x27 = x20;
    w19 = *(x20);
    w0 = w19;
    isspace (w0);
    w1 = (w19 == 0x23) ? 1 : 0;
    w0 = w1 | w0;
    if (w0 == 0) {
        goto label_7;
    }
    do {
        if (w0 == 0) {
            goto label_8;
        }
        w ();
label_1:
        w19 = *(x20);
        w0 = w19;
        isspace (w0);
        w1 = (w19 == 0x23) ? 1 : 0;
        w0 = w1 | w0;
    } while (w0 != 0);
label_7:
    x28 = *((x25 + 0xf28));
    w0 = w19;
    x27 = *((x23 + 0xfa8));
    *(x28) = 0;
    *(x27) = w19;
    isalnum (x0);
    w1 = (w19 == 0x5f) ? 1 : 0;
    w0 = w1 | w0;
    if (w0 == 0) {
        goto label_9;
    }
    x0 = *((x21 + 0xf20));
    x27 = 0x14000;
    w3 = 0x20;
    x20 = *((x22 + 0xfb8));
    x19 = x0;
    x2 = Z;
    w1 = *(x0);
    w4 = w1 + 1;
    x1 = (int64_t) w1;
    *(x0) = w4;
    *(x1) = w3;
    w0 = *(x0);
    *(x2) = w0;
    while (w0 != 0) {
        w0 = *(x19);
        w1 = w0 + 1;
        x0 = (int64_t) w0;
        *(x19) = w1;
        *(x0) = w28;
        w ();
        w28 = *(x20);
        w0 = w28;
        isalnum (w0);
        w1 = (w28 == 0x5f) ? 1 : 0;
        w0 = w1 | w0;
    }
    x19 = *((x23 + 0xfa8));
    w0 = *(x19);
    w0 -= 0x30;
    if (w0 < 9) {
        goto label_10;
    }
    x28 = *((x21 + 0xf20));
    w2 = 0x20;
    x27 = *((x27 + 0xf58));
    x0 = Q;
    x1 = *(x28);
    *(x1) = w2;
    w1 = *(x27);
    x27 = *(x0);
    w1--;
    x0 = x27;
    x1 = (int64_t) w1;
    x0 = strstr (x0, x1);
    x0 -= x27;
    x1 = *(x28);
    *(x19) = w0;
    *(x1) = 0;
    w0 = *(x19);
    w0 += 0x20;
    w0 <<= 3;
    *(x19) = w0;
    __asm ("b.le 0x1560");
    x1 = T;
    w1 = T;
    w0 += w1;
    *(x19) = w0;
    x1 = (int64_t) w0;
    w1 = T;
    if (w1 != 1) {
        goto label_11;
    }
    w0 += 4;
    w3 = *(x20);
    x0 = (int64_t) w0;
    x2 = V;
    x1 = al;
    w0 = *(x0);
    *(x2) = w0;
    *(x1) = w3;
    w ();
    goto label_0;
label_8:
    w ();
    dbg_av ();
    w0 = *(x24);
    if (w0 == 0x218) {
        goto label_12;
    }
label_3:
    w1 = *(x27);
    x28 = *((x21 + 0xf20));
    x19 = *((x22 + 0xfb8));
    if (w1 == 0xa) {
        goto label_13;
    }
    do {
        w0 = *(x28);
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x28) = w2;
        *(x0) = w1;
        w ();
        w1 = *(x19);
    } while (w1 != 0xa);
label_13:
    x1 = *((x21 + 0xf20));
    w3 = 0xa;
    w2 = 0x2;
    w0 = *(x1);
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w4;
    *(x0) = w3;
    w0 = *(x1);
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w3;
    *(x0) = w2;
    w ();
    goto label_1;
label_9:
    w ();
    w4 = *(x27);
    if (w4 == 0x27) {
        goto label_14;
    }
    w5 = *(x20);
    w0 = 0x2a;
    __asm ("ccmp w5, w0, 0, eq");
    if (w4 != 0x2f) {
        goto label_15;
    }
    w ();
    x19 = *((x22 + 0xfb8));
    w0 = *(x20);
    x20 = x19;
    if (w0 != 0) {
label_2:
        goto label_16;
    }
    goto label_17;
    do {
        w ();
        w0 = *(x19);
label_16:
    } while (w0 != 0x2a);
    w ();
    w0 = *(x20);
    if (w0 != 0x2f) {
        goto label_2;
    }
    *(x19) = 0;
label_17:
    w ();
    goto label_0;
label_12:
    dbg_av ();
    w0 = *(x26);
    w1 = 0x1;
    w2 = 0x20;
    w3 = w0 + w1;
    x0 = (int64_t) w0;
    *(x26) = w3;
    *(x0) = w2;
    x0 = *(x24);
    *(x0) = w1;
    w0 = *(x24);
    w1 = *(x26);
    w0 += 4;
    x0 = (int64_t) w0;
    *(x0) = w1;
    goto label_3;
label_4:
    w3 = w2;
    __asm ("ccmp w5, w9, 4, ne");
    __asm ("ccmp w4, w10, 0, eq");
    if (w9 != 0x40) {
        goto label_5;
    }
label_6:
    if (w5 != w9) {
        goto label_11;
    }
    w ();
    x23 = *((x23 + 0xfa8));
    w0 = 0x1;
    *(x23) = w0;
    do {
label_11:
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x23 = *((sp + 0x30));
        x24 = *((sp + 0x30 + 8));
        x25 = *((sp + 0x40));
        x26 = *((sp + 0x40 + 8));
        x27 = *((sp + 0x50));
        x28 = *((sp + 0x50 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_10:
        x27 = *((x27 + 0xf58));
        w2 = 0x0;
        w1 = 0x0;
        w0 = *(x27);
        strtol (w0, w1, w2);
        w2 = 0x2;
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        *(x19) = w2;
        x1 = C;
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x23 = *((sp + 0x30));
        x24 = *((sp + 0x30 + 8));
        *(x1) = w0;
        x25 = *((sp + 0x40));
        x26 = *((sp + 0x40 + 8));
        x27 = *((sp + 0x50));
        x28 = *((sp + 0x50 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_15:
        x3 = "++#m--%am*@R<^1c/@%[_[H3c%@%[_[H3c+@.B#d-@%:_^BKd<<Z/03e>>`/03e<=0f>=/f<@.f>@1f==&g!='g&&k||#l&@.BCh^@.BSi|@.B+j~@/%Yd!@&d*@b";
        x7 = x28;
        x8 = C;
        x6 = x8;
label_5:
        x0 = (int64_t) w3;
        w1 = w3 + 1;
        w10 = *(x0);
    } while (w10 == 0);
    x1 = (int64_t) w1;
    w0 = w3 + 2;
    w2 = w3 + 3;
    x0 = (int64_t) w0;
    w9 = *(x1);
    *(x8) = 0;
    w0 = *(x0);
    w0 -= 0x62;
    *(x28) = w0;
    if ((w0 & 0x1f) == 0) {
        goto label_4;
    }
    w2 = w3 + 4;
    w1 = 0x0;
    x2 = (int64_t) w2;
    do {
        w1 = w0 + (w1 << 6);
        w3 = w2;
        w1 += 0x40;
        x2++;
        *(x6) = w1;
        w0 = *((x2 - 2));
        w0 -= 0x62;
        *(x7) = w0;
    } while ((w0 & 0x1f) != 0);
    __asm ("ccmp w5, w9, 4, ne");
    __asm ("ccmp w4, w10, 0, eq");
    if (w9 != 0x40) {
        goto label_5;
    }
    goto label_6;
label_14:
    w1 = *(x20);
    w0 = 0x2;
    *(x27) = w0;
    while (1) {
        x0 = C;
        *(x0) = w1;
        w ();
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x23 = *((sp + 0x30));
        x24 = *((sp + 0x30 + 8));
        x25 = *((sp + 0x40));
        x26 = *((sp + 0x40 + 8));
        x27 = *((sp + 0x50));
        x28 = *((sp + 0x50 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        void (*0x1120)() ();
        an_part_1 ();
        w1 = *(x20);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x2278 */
#include <stdint.h>
 
void dbg_ar (uint32_t arg1, int64_t arg2) {
    int64_t var_60h;
    int64_t var_60h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_50h;
    x0 = arg1;
    x1 = arg2;
    /* int ar(int s); */
    *((sp + -0x60)) = x29;
    *((sp + -0x60 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x21 = 0x14000;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    w22 = w0;
    x23 = e;
    w24 = (w0 == 0) ? 1 : 0;
    x20 = i;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
label_4:
    w0 = *(x23);
    w1 = (w0 != 1) ? 1 : 0;
    w2 = w24 & w1;
    w1 = (w0 == 0x100) ? 1 : 0;
    w1 |= w2;
    if (w1 == 0) {
        goto label_5;
    }
    if (w1 == 0) {
label_1:
        goto label_6;
    }
    x25 = 0x14000;
    x0 = (int64_t) w0;
    w19 = 0x8;
    x1 = v;
    w1 = v;
    *(x0) = w1;
    dbg_av ();
    dbg_av ();
    x26 = *((x21 + 0xfa8));
    w0 = *(x23);
    do {
        x1 = (int64_t) w0;
        if (w0 == 0x29) {
            goto label_7;
        }
label_0:
        *(x1) = w19;
        w19 += 4;
        dbg_av ();
        w0 = *(x26);
    } while (w0 != 0x2c);
    dbg_av ();
    w0 = *(x26);
    x1 = (int64_t) w0;
    if (w0 != 0x29) {
        goto label_0;
    }
label_7:
    x19 = 0x14000;
    x26 = 0x14000;
    dbg_av ();
    x25 = *((x25 + 0xf60));
    w2 = 0x3;
    x3 = P;
    w1 = 0xe58955;
    x0 = U;
    *(x3) = 0;
    *(x0) = 0;
    do {
        w0 = *(x25);
        w2--;
        w3 = w0 + 1;
        x0 = (int64_t) w0;
        *(x25) = w3;
        *(x0) = w1;
        w1 >>= 8;
    } while (w2 != w2);
    w1 = 0x0;
    w0 = 0xec81;
    w0 = dbg_x (w0, w1);
    w27 = w0;
    w0 = 0x0;
    dbg_S (w0);
    x26 = *((x26 + 0xf98));
    w1 = *(x25);
    w0 = *(x26);
    dbg_ap (w0, w1);
    x19 = *((x19 + 0xf38));
    w0 = *(x25);
    w5 = 0x36;
    w4 = 0x3c;
    w2 = w27 + 1;
    w1 = w0 + 1;
    x3 = (int64_t) w27;
    x0 = (int64_t) w0;
    *(x25) = w1;
    w1 = w27 + 2;
    x2 = (int64_t) w2;
    w27 += 3;
    *(x0) = w5;
    x1 = (int64_t) w1;
    x27 = (int64_t) w27;
    w0 = *(x25);
    w5 = w0 + 1;
    x0 = (int64_t) w0;
    *(x25) = w5;
    *(x0) = w4;
    w0 = *(x19);
    *(x3) = w0;
    w4 = w0 >> 8;
    w3 = w0 >> 0x10;
    w0 >>= 0x18;
    *(x2) = w4;
    *(x1) = w3;
    *(x27) = w0;
    w0 = *(x23);
    w1 = (w0 != 1) ? 1 : 0;
    w2 = w24 & w1;
    w1 = (w0 == 0x100) ? 1 : 0;
    w1 |= w2;
    if (w1 != 0) {
        goto label_1;
    }
label_5:
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x27 = *((sp + 0x50));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
label_6:
    dbg_av ();
    x19 = P;
label_3:
    x0 = *((x21 + 0xfa8));
    w25 = 0x3;
    w0 = *(x0);
    while (w22 != 0) {
        w1 = *(x19);
        w2 = w1 + 4;
        w1 = w25 - w1;
        *(x19) = w2;
        *(x0) = w1;
        dbg_av ();
        x0 = *((x21 + 0xfa8));
        w0 = *(x0);
        if (w0 == 0x2c) {
            goto label_8;
        }
label_2:
        x1 = (int64_t) w0;
        x0 = x1;
        if (w0 == 0x3b) {
            goto label_9;
        }
    }
    w0 = *(x20);
    *(x1) = w0;
    w0 = *(x20);
    w0 += 4;
    *(x20) = w0;
    dbg_av ();
    x0 = *((x21 + 0xfa8));
    w0 = *(x0);
    if (w0 != 0x2c) {
        goto label_2;
    }
label_8:
    dbg_av ();
    goto label_3;
label_9:
    dbg_av ();
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x2d40 */
#include <stdint.h>
 
void dbg_au (int64_t arg1) {
    char * var_60h;
    int64_t var_6ch;
    int64_t var_70h;
    int64_t var_70h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_50h;
    int64_t var_50h_2;
    x0 = arg1;
    /* int au(int F); */
    *((sp + -0x70)) = x29;
    *((sp + -0x70 + 8)) = x30;
    w2 = 0x3;
    x29 = sp;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    x27 = 0x14000;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = 0x14000;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x23 = 0x14000;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    w26 = w0;
    x0 = K;
    w1 = 0x505458;
    x3 = v;
    w2--;
    x5 = i;
    x4 = R;
    x9 = x3;
    w0 = K;
    w28 = v;
    w3 = i;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w28 -= w0;
    *(x4) = w3;
    x3 = (int64_t) w0;
    w0++;
    *(x9) = w0;
    *(x3) = w1;
    w1 >>= 8;
    if (w2 == w2) {
        goto label_0;
    }
    do {
        w0 = *(x9);
        w2--;
        x3 = (int64_t) w0;
        w0++;
        *(x9) = w0;
        *(x3) = w1;
        w1 >>= 8;
    } while (w2 != w2);
label_0:
    w3 = *(x9);
    w0 = 0xe8;
    x2 = T;
    w1 = 0x15180;
    x1 = (int64_t) w1;
    w1 = *(x1);
    w1 -= w3;
    w1 -= 5;
    dbg_x (x0, w1);
    w0 = *(x9);
    w2 = 0x76;
    w1 = 0x1;
    w4 = w0 + 1;
    w3 = 0x3c;
    x0 = (int64_t) w0;
    *(x9) = w4;
    *(x0) = w2;
    w0 = *(x9);
    w4 = w0 + w1;
    x2 = (int64_t) w0;
    *(x9) = w4;
    w0 = 0xb8;
    *(x2) = w3;
    dbg_x (w0, x1);
    w0 = *(x9);
    w1 = 0x32;
    x20 = *((x19 + 0xfb0));
    w2 = w0 + 1;
    w3 = 0x7f;
    x0 = (int64_t) w0;
    *(x9) = w2;
    x2 = "libdl.so.2";
    *(x0) = w1;
    w0 = *(x9);
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x9) = w1;
    x1 = "libc.so.6";
    *(x0) = w3;
    w24 = *(x20);
    w3 = *((x1 + 8));
    w24 = w28 + w24;
    x4 = "libc.so.6";
    w0 = w24 + 1;
    x0 = (int64_t) w0;
    x1 = x0 + 0xa;
    x1 = (int64_t) w1;
    *(x0) = x4;
    x4 = "libdl.so.2";
    *((x0 + 8)) = w3;
    w0 = 0x0;
    w3 = *((x2 + 7));
    x2 = x1 + 0xb;
    *(x1) = x4;
    *((x1 + 7)) = w3;
    *(x20) = w2;
    dbg_ae (x0);
    w22 = *(x20);
    w21 = w22 + 3;
    w22 -= w24;
    w21 &= 0xfffffffc;
    w1 = w21 + 1;
    w0 = w21 + 2;
    x2 = (int64_t) w21;
    *(x20) = w21;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x2) = 0;
    *(x1) = 0;
    *(x0) = 0;
    w0 = w21 + 3;
    x0 = (int64_t) w0;
    *(x0) = 0;
    w0 = *(x20);
    w1 = w0 + 4;
    *(x20) = w1;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = w0 + 5;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = w0 + 6;
    w0 += 7;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x1) = 0;
    *(x0) = 0;
    w0 = *(x20);
    w1 = w0 + 4;
    *(x20) = w1;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = w0 + 5;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = w0 + 6;
    w0 += 7;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x1) = 0;
    *(x0) = 0;
    w0 = *(x20);
    w1 = w0 + 4;
    *(x20) = w1;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = w0 + 5;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = w0 + 6;
    w0 += 7;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x1) = 0;
    *(x0) = 0;
    w0 = 0x1;
    w1 = *(x20);
    w1 += 4;
    *(x20) = w1;
    dbg_ae (x0);
    w25 = *(x20);
    w5 = 0x1;
    w2 = w25 + 1;
    w1 = w25 + 2;
    x3 = (int64_t) w25;
    w0 = w25 - w21;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x3) = w5;
    *(x2) = 0;
    *(x1) = 0;
    w1 = w25 + 3;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = w0 + 0xf;
    w1 = (w0 < 0) ? w1 : w0;
    w0 = *(x20);
    w2 = w0 + 4;
    w4 = w0 + 5;
    *(x20) = w2;
    w6 = w1 >> 4;
    x2 = (int64_t) w2;
    w3 = w0 + 6;
    x4 = (int64_t) w4;
    w0 += 7;
    x3 = (int64_t) w3;
    *(x2) = w6;
    w2 = w1 >> 0xc;
    x0 = (int64_t) w0;
    *(x4) = w2;
    w2 = w1 >> 0x14;
    w1 >>= 0x1c;
    *(x3) = w2;
    *(x0) = w1;
    w0 = *(x20);
    w1 = w0 + 4;
    *(x20) = w1;
    x1 = (int64_t) w1;
    *(x1) = w5;
    w1 = w0 + 5;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = w0 + 6;
    w0 += 7;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x1) = 0;
    *(x0) = 0;
    w0 = *(x20);
    w1 = w0 + 4;
    *(x20) = w1;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = w0 + 5;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = w0 + 6;
    w0 += 7;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x1) = 0;
    *(x0) = 0;
    w0 = *(x20);
    w0 += 4;
    *(x20) = w0;
    __asm ("b.le 0x3134");
    w1 = 0x2;
    do {
        w3 = w0 + 1;
        x4 = (int64_t) w0;
        w2 = w0 + 2;
        w0 += 3;
        x3 = (int64_t) w3;
        w5 = w1 >> 8;
        x2 = (int64_t) w2;
        *(x4) = w1;
        x0 = (int64_t) w0;
        w4 = w1 >> 0x10;
        *(x3) = w5;
        w3 = w1 >> 0x18;
        *(x2) = w4;
        w1++;
        *(x0) = w3;
        w0 = *(x20);
        w0 += 4;
        *(x20) = w0;
    } while (w6 != w1);
    w1 = w0 + 1;
    x2 = (int64_t) w0;
    x19 = *((x19 + 0xfb0));
    x1 = (int64_t) w1;
    *(x2) = 0;
    *(x1) = 0;
    w1 = w0 + 2;
    w0 += 3;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x1) = 0;
    *(x0) = 0;
    w0 = 0x2;
    w20 = *(x19);
    w20 += 4;
    *(x19) = w20;
    dbg_ae (x0);
    x7 = *((x23 + 0xf48));
    x2 = (int64_t) w28;
    x27 = *((x27 + 0xf90));
    w28 = 0x4;
    *((x29 + 0x60)) = x7;
    x0 = *(x7);
    x1 = *(x27);
    memcpy (x0, x1, x2);
    x27 = G;
    w9 = 0x7f;
    w23 = *(x19);
    w6 = 0x45;
    w5 = 0x4c;
    w2 = 0x46;
    w14 = 0x1;
    w0 = G;
    w3 = 0x2;
    w4 = 0x3;
    w1 = w0 + 1;
    *(x19) = w0;
    x8 = (int64_t) w0;
    *((x29 + 0x6c)) = w3;
    x1 = (int64_t) w1;
    w18 = 0x10;
    *(x8) = w9;
    w8 = 0x30;
    *(x1) = w6;
    w1 = w0 + 2;
    w0 += 3;
    w6 = 0x34;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x1) = w5;
    w5 = 0x20;
    *(x0) = w2;
    w1 = 0x13;
    w0 = 0x90;
    w2 = *(x19);
    w9 = w2 + 4;
    *(x19) = w9;
    x9 = (int64_t) w9;
    *(x9) = w14;
    w9 = w2 + 5;
    x9 = (int64_t) w9;
    *(x9) = w14;
    w9 = w2 + 6;
    w2 += 7;
    x9 = (int64_t) w9;
    x2 = (int64_t) w2;
    *(x9) = w14;
    *(x2) = 0;
    w2 = *(x19);
    w9 = w2 + 4;
    *(x19) = w9;
    x9 = (int64_t) w9;
    *(x9) = 0;
    w9 = w2 + 5;
    x9 = (int64_t) w9;
    *(x9) = 0;
    w9 = w2 + 6;
    w2 += 7;
    x9 = (int64_t) w9;
    x2 = (int64_t) w2;
    *(x9) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w9 = w2 + 4;
    *(x19) = w9;
    x9 = (int64_t) w9;
    *(x9) = 0;
    w9 = w2 + 5;
    x9 = (int64_t) w9;
    *(x9) = 0;
    w9 = w2 + 6;
    w2 += 7;
    x9 = (int64_t) w9;
    x2 = (int64_t) w2;
    *(x9) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w9 = w2 + 4;
    *(x19) = w9;
    x9 = (int64_t) w9;
    *(x9) = w3;
    w9 = w2 + 5;
    x9 = (int64_t) w9;
    *(x9) = 0;
    w9 = w2 + 6;
    w2 += 7;
    x9 = (int64_t) w9;
    x2 = (int64_t) w2;
    *(x9) = w4;
    *(x2) = 0;
    w2 = *(x19);
    x15 = y;
    w9 = w2 + 4;
    x7 = *((x29 + 0x60));
    *(x19) = w9;
    x9 = (int64_t) w9;
    *(x9) = w14;
    w9 = w2 + 5;
    x9 = (int64_t) w9;
    *(x9) = 0;
    w9 = w2 + 6;
    w2 += 7;
    x9 = (int64_t) w9;
    x2 = (int64_t) w2;
    *(x9) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w9 = *(x7);
    w7 = y;
    w10 = w2 + 5;
    w7 = w9 + w7;
    w9 = w2 + 4;
    *(x19) = w9;
    x10 = (int64_t) w10;
    x9 = (int64_t) w9;
    w11 = w7 >> 8;
    *(x9) = w7;
    w9 = w2 + 6;
    w2 += 7;
    *(x10) = w11;
    x9 = (int64_t) w9;
    w10 = w7 >> w18;
    x2 = (int64_t) w2;
    w7 >>= 0x18;
    *(x9) = w10;
    *(x2) = w7;
    w2 = *(x19);
    w7 = w2 + 4;
    *(x19) = w7;
    x7 = (int64_t) w7;
    *(x7) = w8;
    w7 = w2 + 5;
    x7 = (int64_t) w7;
    *(x7) = 0;
    w7 = w2 + 6;
    w2 += 7;
    x7 = (int64_t) w7;
    x2 = (int64_t) w2;
    *(x7) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w7 = w2 + 4;
    *(x19) = w7;
    x7 = (int64_t) w7;
    *(x7) = 0;
    w7 = w2 + 5;
    x7 = (int64_t) w7;
    *(x7) = 0;
    w7 = w2 + 6;
    w2 += 7;
    x7 = (int64_t) w7;
    x2 = (int64_t) w2;
    *(x7) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w7 = w2 + 4;
    *(x19) = w7;
    x7 = (int64_t) w7;
    *(x7) = 0;
    w7 = w2 + 5;
    x7 = (int64_t) w7;
    *(x7) = 0;
    w7 = w2 + 6;
    w2 += 7;
    x7 = (int64_t) w7;
    x2 = (int64_t) w2;
    *(x7) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w7 = w2 + 4;
    *(x19) = w7;
    x7 = (int64_t) w7;
    *(x7) = w6;
    w6 = w2 + 5;
    x6 = (int64_t) w6;
    *(x6) = 0;
    w6 = w2 + 6;
    w2 += 7;
    x6 = (int64_t) w6;
    x2 = (int64_t) w2;
    *(x6) = w5;
    *(x2) = 0;
    w2 = *(x19);
    w5 = w2 + 4;
    *(x19) = w5;
    x5 = (int64_t) w5;
    *(x5) = w4;
    w5 = w2 + 5;
    x5 = (int64_t) w5;
    *(x5) = 0;
    w5 = w2 + 6;
    w2 += 7;
    x5 = (int64_t) w5;
    x2 = (int64_t) w2;
    *(x5) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w5 = w2 + 4;
    *(x19) = w5;
    x5 = (int64_t) w5;
    *(x5) = w4;
    w4 = w2 + 5;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w2 + 6;
    w2 += 7;
    x4 = (int64_t) w4;
    x2 = (int64_t) w2;
    *(x4) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w2 += 4;
    *(x19) = w2;
    dbg_ad (x0, x1);
    w1 = *(x19);
    w0 = 0x0;
    w2 = w1 + 1;
    x4 = (int64_t) w1;
    x2 = (int64_t) w2;
    *(x4) = w28;
    *(x2) = 0;
    w2 = w1 + 2;
    w1 += 3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x2) = 0;
    *(x1) = 0;
    w1 = *(x19);
    w2 = w1 + 4;
    *(x19) = w2;
    x2 = (int64_t) w2;
    *(x2) = w14;
    w2 = w1 + 5;
    x2 = (int64_t) w2;
    *(x2) = 0;
    w2 = w1 + 6;
    w1 += 7;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x2) = 0;
    *(x1) = 0;
    w1 = *(x19);
    w2 = w1 + 4;
    *(x19) = w2;
    x2 = (int64_t) w2;
    *(x2) = w14;
    w2 = w1 + 5;
    x2 = (int64_t) w2;
    *(x2) = 0;
    w2 = w1 + 6;
    w1 += 7;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x2) = 0;
    *(x1) = 0;
    w2 = *(x19);
    w1 = G;
    w2 += 4;
    w1 = w23 - w1;
    *(x19) = w2;
    dbg_ad (x0, w1);
    w2 = *(x19);
    w6 = 0x7;
    w3 = *((x29 + 0x6c));
    w1 = 0x58;
    w4 = w2 + 1;
    w0 = 0xa4;
    x5 = (int64_t) w2;
    x4 = (int64_t) w4;
    *(x5) = w6;
    *(x4) = 0;
    w4 = w2 + 2;
    w2 += 3;
    x4 = (int64_t) w4;
    x2 = (int64_t) w2;
    *(x4) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w4 = w2 + 4;
    *(x19) = w4;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w2 + 5;
    x4 = (int64_t) w4;
    *(x4) = w18;
    w4 = w2 + 6;
    w2 += 7;
    x4 = (int64_t) w4;
    x2 = (int64_t) w2;
    *(x4) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w4 = w2 + 4;
    *(x19) = w4;
    x4 = (int64_t) w4;
    *(x4) = w3;
    w3 = w2 + 5;
    x3 = (int64_t) w3;
    *(x3) = 0;
    w3 = w2 + 6;
    w2 += 7;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    *(x3) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w2 += 4;
    *(x19) = w2;
    dbg_ad (x0, x1);
    w1 = *(x19);
    w5 = 0x6;
    w16 = 0x5;
    w3 = w1 + 1;
    x2 = "/lib/ld-linux.so.2";
    x4 = (int64_t) w1;
    w13 = 0xa;
    x3 = (int64_t) w3;
    w12 = w22 >> 8;
    w6 = *((x2 + 0xf));
    w11 = w22 >> 0x10;
    *(x4) = w5;
    w4 = 0xb;
    *(x3) = 0;
    w3 = w1 + 2;
    w1 += 3;
    w10 = w22 >> 0x18;
    x3 = (int64_t) w3;
    w9 = 0x11;
    x1 = (int64_t) w1;
    x0 = (int64_t) w26;
    w26 = 0x12;
    *(x3) = 0;
    *(x1) = 0;
    x2 = *(x2);
    x3 = *((x2 + 8));
    w1 = *(x19);
    w7 = w1 + 4;
    *(x19) = w7;
    x7 = (int64_t) w7;
    *(x7) = w28;
    w7 = w1 + 5;
    x7 = (int64_t) w7;
    *(x7) = 0;
    w7 = w1 + 6;
    w1 += 7;
    x7 = (int64_t) w7;
    x1 = (int64_t) w1;
    *(x7) = 0;
    *(x1) = 0;
    w1 = *(x19);
    w1 += 4;
    x1 = (int64_t) w1;
    *(x1) = x2;
    *((x1 + 8)) = x3;
    x1 += 0x14;
    *((x1 - 5)) = w6;
    w2 = w1 + 1;
    x3 = (int64_t) w1;
    *(x19) = w1;
    x2 = (int64_t) w2;
    w6 = 0x13;
    *(x3) = w14;
    w3 = w23 - w20;
    *(x2) = 0;
    w2 = w1 + 2;
    w1 += 3;
    x2 = (int64_t) w2;
    w17 = w3 >> 8;
    x1 = (int64_t) w1;
    w8 = w3 >> 0x10;
    *(x2) = 0;
    *(x1) = 0;
    x1 = 0x3000;
    x1 += sym.imp.strtol;
    w2 = *(x19);
    w7 = w2 + 4;
    *(x19) = w7;
    x7 = (int64_t) w7;
    *(x7) = w14;
    w7 = w2 + 5;
    x7 = (int64_t) w7;
    *(x7) = 0;
    w7 = w2 + 6;
    w2 += 7;
    x7 = (int64_t) w7;
    x2 = (int64_t) w2;
    *(x7) = 0;
    w7 = w3 >> 0x18;
    *(x2) = 0;
    w2 = *(x19);
    w30 = w2 + 4;
    *(x19) = w30;
    x30 = (int64_t) w30;
    *(x30) = w14;
    w14 = w2 + 5;
    x14 = (int64_t) w14;
    *(x14) = 0;
    w14 = w2 + 6;
    w2 += 7;
    x14 = (int64_t) w14;
    x2 = (int64_t) w2;
    *(x14) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w14 = w2 + 4;
    *(x19) = w14;
    x14 = (int64_t) w14;
    *(x14) = w4;
    w14 = w2 + 5;
    x14 = (int64_t) w14;
    *(x14) = 0;
    w14 = w2 + 6;
    w2 += 7;
    x14 = (int64_t) w14;
    x2 = (int64_t) w2;
    *(x14) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w14 = w2 + 4;
    *(x19) = w14;
    x14 = (int64_t) w14;
    *(x14) = w28;
    w14 = w2 + 5;
    x14 = (int64_t) w14;
    *(x14) = 0;
    w14 = w2 + 6;
    w2 += 7;
    x14 = (int64_t) w14;
    x2 = (int64_t) w2;
    *(x14) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w14 = y;
    w28 = w2 + 6;
    w25 += w14;
    w14 = w2 + 4;
    *(x19) = w14;
    x28 = (int64_t) w28;
    x14 = (int64_t) w14;
    w30 = w25 >> 8;
    *(x14) = w25;
    w14 = w2 + 5;
    w2 += 7;
    x14 = (int64_t) w14;
    x2 = (int64_t) w2;
    *(x14) = w30;
    w14 = w25 >> 0x10;
    w25 >>= 0x18;
    *(x28) = w14;
    *(x2) = w25;
    w2 = *(x19);
    w14 = w2 + 4;
    *(x19) = w14;
    x14 = (int64_t) w14;
    *(x14) = w5;
    w5 = w2 + 5;
    x5 = (int64_t) w5;
    *(x5) = 0;
    w5 = w2 + 6;
    w2 += 7;
    x5 = (int64_t) w5;
    x2 = (int64_t) w2;
    *(x5) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w5 = y;
    w14 = w2 + 5;
    w21 += w5;
    w5 = w2 + 4;
    *(x19) = w5;
    x14 = (int64_t) w14;
    x5 = (int64_t) w5;
    w25 = w21 >> 8;
    *(x5) = w21;
    w5 = w2 + 6;
    w2 += 7;
    *(x14) = w25;
    x5 = (int64_t) w5;
    w14 = w21 >> 0x10;
    x2 = (int64_t) w2;
    w21 >>= 0x18;
    *(x5) = w14;
    *(x2) = w21;
    w2 = *(x19);
    w5 = w2 + 4;
    *(x19) = w5;
    x5 = (int64_t) w5;
    *(x5) = w16;
    w5 = w2 + 5;
    x5 = (int64_t) w5;
    *(x5) = 0;
    w5 = w2 + 6;
    w2 += 7;
    x5 = (int64_t) w5;
    x2 = (int64_t) w2;
    *(x5) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w5 = y;
    w14 = w2 + 5;
    w24 += w5;
    w5 = w2 + 4;
    *(x19) = w5;
    x14 = (int64_t) w14;
    x5 = (int64_t) w5;
    w16 = w24 >> 8;
    *(x5) = w24;
    w5 = w2 + 6;
    w2 += 7;
    *(x14) = w16;
    x5 = (int64_t) w5;
    w14 = w24 >> 0x10;
    x2 = (int64_t) w2;
    w24 >>= 0x18;
    *(x5) = w14;
    *(x2) = w24;
    w2 = *(x19);
    w5 = w2 + 4;
    *(x19) = w5;
    x5 = (int64_t) w5;
    *(x5) = w13;
    w5 = w2 + 5;
    x5 = (int64_t) w5;
    *(x5) = 0;
    w5 = w2 + 6;
    w2 += 7;
    x5 = (int64_t) w5;
    x2 = (int64_t) w2;
    *(x5) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w5 = w2 + 4;
    *(x19) = w5;
    x5 = (int64_t) w5;
    *(x5) = w22;
    w5 = w2 + 5;
    x5 = (int64_t) w5;
    *(x5) = w12;
    w5 = w2 + 6;
    w2 += 7;
    x5 = (int64_t) w5;
    x2 = (int64_t) w2;
    *(x5) = w11;
    *(x2) = w10;
    w2 = *(x19);
    w5 = w2 + 4;
    *(x19) = w5;
    x5 = (int64_t) w5;
    *(x5) = w4;
    w4 = w2 + 5;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w2 + 6;
    w2 += 7;
    x4 = (int64_t) w4;
    x2 = (int64_t) w2;
    *(x4) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w4 = w2 + 4;
    *(x19) = w4;
    x4 = (int64_t) w4;
    *(x4) = w18;
    w4 = w2 + 5;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w2 + 6;
    w2 += 7;
    x4 = (int64_t) w4;
    x2 = (int64_t) w2;
    *(x4) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w4 = w2 + 4;
    *(x19) = w4;
    x4 = (int64_t) w4;
    *(x4) = w9;
    w4 = w2 + 5;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w2 + 6;
    w2 += 7;
    x4 = (int64_t) w4;
    x2 = (int64_t) w2;
    *(x4) = 0;
    *(x2) = 0;
    w2 = y;
    w20 += w2;
    w2 = *(x19);
    w4 = w2 + 4;
    w5 = w2 + 5;
    *(x19) = w4;
    w9 = w20 >> 8;
    x4 = (int64_t) w4;
    x5 = (int64_t) w5;
    *(x4) = w20;
    w4 = w2 + 6;
    w2 += 7;
    *(x5) = w9;
    x4 = (int64_t) w4;
    w5 = w20 >> 0x10;
    x2 = (int64_t) w2;
    w20 >>= 0x18;
    *(x4) = w5;
    *(x2) = w20;
    w2 = *(x19);
    w4 = w2 + 4;
    *(x19) = w4;
    x4 = (int64_t) w4;
    *(x4) = w26;
    w4 = w2 + 5;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w2 + 6;
    w2 += 7;
    x4 = (int64_t) w4;
    x2 = (int64_t) w2;
    *(x4) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w4 = w2 + 4;
    *(x19) = w4;
    x4 = (int64_t) w4;
    *(x4) = w3;
    w3 = w2 + 5;
    x3 = (int64_t) w3;
    *(x3) = w17;
    w3 = w2 + 6;
    w2 += 7;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    *(x3) = w8;
    *(x2) = w7;
    w2 = *(x19);
    w3 = w2 + 4;
    w4 = w2 + 5;
    *(x19) = w3;
    x3 = (int64_t) w3;
    x4 = (int64_t) w4;
    *(x3) = w6;
    w3 = w2 + 6;
    w2 += 7;
    *(x4) = 0;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    *(x3) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w5 = w2 + 4;
    w4 = w2 + 5;
    w3 = w2 + 6;
    *(x19) = w5;
    x6 = (int64_t) w5;
    x4 = (int64_t) w4;
    w5 = 0x8;
    w2 += 7;
    x3 = (int64_t) w3;
    *(x6) = w5;
    x2 = (int64_t) w2;
    *(x4) = 0;
    *(x3) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w5 = w2 + 4;
    w4 = w2 + 5;
    w3 = w2 + 6;
    w2 += 7;
    x6 = (int64_t) w5;
    x4 = (int64_t) w4;
    *(x19) = w5;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    *(x6) = 0;
    *(x4) = 0;
    *(x3) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w5 = w2 + 4;
    w4 = w2 + 5;
    w3 = w2 + 6;
    w2 += 7;
    x6 = (int64_t) w5;
    x4 = (int64_t) w4;
    *(x19) = w5;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    *(x6) = 0;
    *(x4) = 0;
    *(x3) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w2 += 4;
    *(x19) = w2;
    w0 = fopen (x0, x1);
    x19 = (int64_t) w0;
    w4 = G;
    x3 = x19;
    x1 = 0x1;
    w2 = w23 - w4;
    x0 = (int64_t) w4;
    x2 = (int64_t) w2;
    fwrite (x0, x1, w2, x3);
    x0 = x19;
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x27 = *((sp + 0x50));
    x28 = *((sp + 0x50 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xd60)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xde0 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x15050);
    x16 = 0x15050;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x3d18).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x3ca0 */
#include <stdint.h>
 
void libc_csu_init (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x14000;
    x21 = .init_array;
    x20 += sym._init;
    x20 -= x21;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x22 = x2;
    w24 = w0;
    x23 = x1;
    init ();
    x20 >>= 3;
    if (x20 == 0) {
        goto label_0;
    }
    x19 = 0x0;
    do {
        offset_0 = x19 << 3;
        x3 = *((x21 + offset_0));
        x2 = x22;
        x1 = x23;
        w0 = w24;
        x19++;
        uint64_t (*x3)(uint32_t, uint64_t, uint64_t, uint64_t) (w0, x1, x2, x3);
    } while (x20 != x19);
label_0:
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xfec */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0xdc0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x11a0 */
#include <stdint.h>
 
void an_part_1 () {
    int64_t var_10h;
    int64_t var_10h_2;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w ();
    x0 = m;
    w1 = m;
    if (w1 == 0x6e) {
        w1 = 0xa;
        *(x0) = w1;
    }
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1000 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x15088;
    x0 = 0x15088;
    x1 += 7;
    x1 -= x0;
    if (x1 >= 0xe) {
        x1 = .comment;
        if (x1 == 0) {
            goto label_0;
        }
        uint64_t (*x1)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1038 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x15088;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x15088;
    x1 >>= 1;
    if (x1 != 0) {
        x2 = .comment;
        if (x2 == 0) {
            goto label_0;
        }
        uint64_t (*x2)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1078 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x15000;
    w0 = *((x19 + 0x88));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x15080);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x88)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xd50 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x15000;
    x17 = *(0x15008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x10c0 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x1038)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x1038)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x27a0 */
#include <stdint.h>
 
void ax (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w3 = w0;
    w0 = w1;
    x2 = i;
    w8 = w3 >> 8;
    w7 = w3 >> 0x10;
    w6 = w3 >> 0x18;
    w1 = i;
    w5 = w1 + 1;
    w4 = w1 + 2;
    x9 = (int64_t) w1;
    w1 += 3;
    x5 = (int64_t) w5;
    x4 = (int64_t) w4;
    x1 = (int64_t) w1;
    *(x9) = w3;
    *(x5) = w8;
    *(x4) = w7;
    *(x1) = w6;
    w1 = i;
    w1 += 4;
    *(x2) = w1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x2250 */
#include <stdint.h>
 
void B () {
    w0 = 0xb;
    return void (*0x1b08)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x18b8 */
#include <stdint.h>
 
void H (int64_t arg1) {
    x0 = arg1;
    x1 = v;
    w1 = v;
    return void (*0x1768)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1b08 */
#include <stdint.h>
 
void dbg_X (uint32_t arg1) {
    int64_t var_10h_2;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    x0 = arg1;
    /* int X(int s); */
    if (w0 == 1) {
        goto label_2;
    }
    *((sp + -0x60)) = x29;
    *((sp + -0x60 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0 - 1;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w22 = w0;
    w0 = w19;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    w22 -= 5;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    w26 = 0x0;
    dbg_X (x0);
    x24 = e;
    x23 = C;
    x25 = 0x14000;
label_0:
    x0 = *((x25 + 0xf28));
    w0 = *(x0);
    if (w19 != w0) {
        goto label_3;
    }
label_1:
    w20 = *(x23);
    w21 = *(x24);
    dbg_av ();
    if (w19 > 8) {
        goto label_4;
    }
    x28 = 0x14000;
    w2 = 0x50;
    w0 = w19;
    x27 = v;
    w1 = v;
    w3 = w1 + 1;
    x1 = (int64_t) w1;
    *(x27) = w3;
    *(x1) = w2;
    dbg_X (x0);
    w0 = v;
    w1 = 0x59;
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x27) = w2;
    *(x0) = w1;
    if (w22 < 1) {
        goto label_5;
    }
    w0 = w20 + 1;
    w1 = w20;
    x2 = x27;
    if (w0 < 1) {
        goto label_6;
    }
    do {
        w0 = *(x2);
        w3 = w0 + 1;
        x0 = (int64_t) w0;
        *(x2) = w3;
        *(x0) = w1;
        w1 >>= 8;
        w0 = w1 + 1;
    } while (w0 > 1);
label_6:
    if (w21 != 0x25) {
        goto label_0;
    }
    x28 = *((x28 + 0xf60));
    w1 = 0x6d;
    w0 = *(x28);
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x28) = w2;
    *(x0) = w1;
    x0 = *((x25 + 0xf28));
    w0 = *(x0);
    if (w19 == w0) {
        goto label_1;
    }
label_3:
    __asm ("ccmp w19, 8, 4, ne");
    if (w26 <= 0) {
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x23 = *((sp + 0x30));
        x24 = *((sp + 0x30 + 8));
        x25 = *((sp + 0x40));
        x26 = *((sp + 0x40 + 8));
        x27 = *((sp + 0x50));
        x28 = *((sp + 0x50 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_4:
        w1 = w26;
        w0 = w20;
        w0 = dbg_aa (w0, w1);
        w26 = w0;
        w0 = w19;
        dbg_X (w0);
        goto label_0;
label_5:
        w0 = w20;
        dbg_aq (w0);
        goto label_0;
    }
    w1 = w26;
    w0 = w20;
    w0 = dbg_aa (w0, w1);
    w9 = w0;
    w1 = w20 ^ 1;
    w0 = 0xb8;
    dbg_x (w0, w1);
    w1 = 0x5;
    w0 = 0xe9;
    dbg_x (w0, w1);
    w0 = w9;
    x1 = v;
    w1 = v;
    dbg_ap (x0, x1);
    w1 = w20;
    w0 = 0xb8;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x27 = *((sp + 0x50));
    x28 = *((sp + 0x50 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    void (*0x18c8)() ();
label_2:
    return void (*0x1ce8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x10f8 */
#include <stdint.h>
 
uint32_t L (int64_t arg1, int64_t arg4) {
    x0 = arg1;
    x3 = arg4;
    x2 = D;
    w1 = D;
    w4 = w1 + 1;
    x1 = (int64_t) w1;
    *(x2) = w4;
    *(x1) = w0;
    w0 = w3;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x18c8 */
#include <stdint.h>
 
void dbg_x (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    /* int x(int d,int a); */
    w2 = w0 + 1;
    x5 = 0x14000;
    x3 = v;
    if (w2 < 1) {
        goto label_0;
    }
    do {
        w2 = *(x3);
        w4 = w2 + 1;
        x2 = (int64_t) w2;
        *(x3) = w4;
        *(x2) = w0;
        w0 >>= 8;
        w2 = w0 + 1;
    } while (w2 > 1);
label_0:
    x2 = *((x5 + 0xf60));
    w7 = w1 >> 8;
    w6 = w1 >> 0x10;
    w5 = w1 >> 0x18;
    w0 = *(x2);
    w4 = w0 + 1;
    w3 = w0 + 2;
    x8 = (int64_t) w0;
    w0 += 3;
    x4 = (int64_t) w4;
    x3 = (int64_t) w3;
    x0 = (int64_t) w0;
    *(x8) = w1;
    *(x4) = w7;
    *(x3) = w6;
    *(x0) = w5;
    w0 = *(x2);
    w1 = w0 + 4;
    *(x2) = w1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x3d1c */
#include <stdint.h>
 
void fini () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [14] -r-x section size 16 named .fini */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x2968 */
#include <stdint.h>
 
void dbg_ae (int64_t arg1) {
    int64_t var_60h;
    int64_t var_60h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_50h;
    x0 = arg1;
    /* int ae(int s); */
    *((sp + -0x60)) = x29;
    *((sp + -0x60 + 8)) = x30;
    x1 = 0x14000;
    x29 = sp;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    x25 = 0x14000;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    w24 = w0;
    x0 = Q;
    w23 = 0x0;
    x1 = D;
    x21 = T;
    x22 = x0;
    x20 = e;
    w19 = Q;
    w3 = D;
    *((sp + 0x50)) = x27;
label_0:
    w26 = w19 + 1;
    x1 = (int64_t) w26;
    w0 = *(x1);
    if (w0 == 0x20) {
        goto label_4;
    }
label_1:
    if (w26 >= w3) {
        goto label_4;
    }
    x0 = x1 + 1;
    w19 = w26;
    while (w2 != 0x20) {
        if (w19 == w3) {
            goto label_5;
        }
        w2 = *(x0);
        w19++;
        x0++;
    }
label_2:
    if (w19 == w3) {
        goto label_5;
    }
    w0 = *(x22);
    w2 = *(x21);
    w0 = w26 - w0;
    w0 = w2 + (w0 << 3);
    w4 = w0 + 0xfc;
    w0 += 0xf8;
    *(x20) = w0;
    x4 = (int64_t) w4;
    x2 = (int64_t) w0;
    w0 = *(x4);
    w2 = *(x2);
    __asm ("ccmp w2, 1, 4, ne");
    if (w0 == 0) {
        goto label_0;
    }
    if (w2 != 0) {
        goto label_6;
    }
    x4 = 0x14000;
    if (w24 == 0) {
        goto label_7;
    }
    if (w24 == 1) {
        goto label_8;
    }
    w23++;
    x4 = *((x4 + 0xfb0));
    x8 = K;
    x7 = R;
    w9 = w23 << 8;
    x6 = y;
    do {
        w1 = w0 - 1;
        w5 = w0 + 2;
        w3 = w0 + 3;
        w10 = w0 + 1;
        x1 = (int64_t) w1;
        x5 = (int64_t) w5;
        x14 = (int64_t) w0;
        x3 = (int64_t) w3;
        x10 = (int64_t) w10;
        w1 = *(x1);
        w11 = *(x5);
        w15 = *(x3);
        w2 = (w1 != 5) ? 1 : 0;
        w12 = *(x14);
        w1 = -w2;
        w13 = *(x10);
        w11 <<= 0x10;
        w2 += w9;
        w12 |= (w15 << 24);
        w2++;
        w1 <<= 2;
        w13 = w11 | (w13 << 8);
        w15 = w1 >> 8;
        w11 = w1 >> 0x10;
        *(x14) = w1;
        w1 >>= 0x18;
        *(x10) = w15;
        w10 = w2 >> 8;
        *(x5) = w11;
        w5 = w2 >> 0x10;
        *(x3) = w1;
        w11 = w2 >> 0x18;
        w1 = *(x8);
        w15 = *(x7);
        w3 = *(x4);
        w1 = w0 - w1;
        w14 = *(x6);
        w1 += w15;
        w0 = w13 | w12;
        w13 = w3 + 1;
        w1 += w14;
        w12 = w3 + 2;
        x14 = (int64_t) w3;
        x13 = (int64_t) w13;
        w3 += 3;
        x12 = (int64_t) w12;
        w15 = w1 >> 8;
        *(x14) = w1;
        x3 = (int64_t) w3;
        w14 = w1 >> 0x10;
        *(x13) = w15;
        w1 >>= 0x18;
        *(x12) = w14;
        *(x3) = w1;
        w1 = *(x4);
        w13 = w1 + 4;
        w12 = w1 + 5;
        w3 = w1 + 6;
        w1 += 7;
        x14 = (int64_t) w13;
        x12 = (int64_t) w12;
        *(x4) = w13;
        x3 = (int64_t) w3;
        x1 = (int64_t) w1;
        *(x14) = w2;
        *(x12) = w10;
        *(x3) = w5;
        *(x1) = w11;
        w1 = *(x4);
        w1 += 4;
        *(x4) = w1;
    } while (w0 != 0);
    x0 = *((x25 + 0xf20));
    w3 = *(x0);
label_3:
    w26 = w19 + 1;
    x1 = (int64_t) w26;
    w0 = *(x1);
    if (w0 != 0x20) {
        goto label_1;
    }
label_4:
    w19 = w26;
    goto label_2;
    if (w24 != 0) {
label_6:
        goto label_0;
    }
    w1 = w2;
    dbg_ap (x0, w1);
    x0 = *((x25 + 0xf20));
    w3 = *(x0);
    goto label_3;
label_5:
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x27 = *((sp + 0x50));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
label_7:
    x27 = *((x4 + 0xfb0));
    w2 = w19 - w26;
    x2 = (int64_t) w2;
    x0 = *(x27);
    memcpy (x0, x1, w2);
    w0 = *(x27);
    x1 = *((x25 + 0xf20));
    w0 = w19 + w0;
    w0 -= w26;
    w0++;
    *(x27) = w0;
    w3 = *(x1);
    goto label_0;
label_8:
    x0 = *((x4 + 0xfb0));
    w2 = w23 + 0x16;
    w4 = 0x10;
    x3 = *((x25 + 0xf20));
    w23 += w19;
    w8 = w2 >> 8;
    w7 = w2 >> 0x10;
    w1 = *(x0);
    w6 = w2 >> 0x18;
    w23 -= w26;
    w5 = w1 + 1;
    w23++;
    x9 = (int64_t) w1;
    x5 = (int64_t) w5;
    *(x9) = w2;
    w2 = w1 + 2;
    w1 += 3;
    *(x5) = w8;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x2) = w7;
    *(x1) = w6;
    w1 = *(x0);
    w2 = w1 + 4;
    *(x0) = w2;
    x2 = (int64_t) w2;
    *(x2) = 0;
    w2 = w1 + 5;
    x2 = (int64_t) w2;
    *(x2) = 0;
    w2 = w1 + 6;
    w1 += 7;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x2) = 0;
    *(x1) = 0;
    w1 = *(x0);
    w2 = w1 + 4;
    *(x0) = w2;
    x2 = (int64_t) w2;
    *(x2) = 0;
    w2 = w1 + 5;
    x2 = (int64_t) w2;
    *(x2) = 0;
    w2 = w1 + 6;
    w1 += 7;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x2) = 0;
    *(x1) = 0;
    w1 = *(x0);
    w2 = w1 + 4;
    *(x0) = w2;
    x2 = (int64_t) w2;
    *(x2) = w4;
    w2 = w1 + 5;
    x2 = (int64_t) w2;
    *(x2) = 0;
    w2 = w1 + 6;
    w1 += 7;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x2) = 0;
    *(x1) = 0;
    w1 = *(x0);
    w3 = *(x3);
    w1 += 4;
    *(x0) = w1;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1970 */
#include <stdint.h>
 
void dbg_aa (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    /* int aa(int s,int a); */
    w4 = 0x3;
    w3 = 0xfc085;
    x5 = v;
    do {
        w2 = *(x5);
        w4--;
        w6 = w2 + 1;
        x2 = (int64_t) w2;
        *(x5) = w6;
        *(x2) = w3;
        w3 >>= 8;
    } while (w4 != w4);
    w0 += 0x84;
    return void (*0x18c8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x2258 */
#include <stdint.h>
 
void ac () {
    int64_t var_10h;
    int64_t var_10h_2;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w0 = 0xb;
    x29 = sp;
    dbg_X (x0);
    x29 = *(sp);
    x30 = *((sp + 8));
    w1 = 0x0;
    w0 = 0x0;
    return void (*0x1970)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x11d0 */
#include <stdint.h>
 
uint64_t am () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    x0 = m;
    *((sp + 0x10)) = x19;
    w19 = m;
    w0 = w19;
    isalnum (w0);
    x19 = *((sp + 0x10));
    w1 = (w19 == 0x5f) ? 1 : 0;
    w0 = w1 | w0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x14fb8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xe20 */
#include <stdint.h>
 
void isalnum () {
    x17 = *(0x15070);
    x16 = 0x15070;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1728 */
#include <stdint.h>
 
uint32_t ao (int64_t arg1) {
    x0 = arg1;
    w2 = w0 + 2;
    w4 = w0 + 1;
    w3 = w0 + 3;
    x0 = (int64_t) w0;
    x2 = (int64_t) w2;
    x4 = (int64_t) w4;
    x3 = (int64_t) w3;
    w5 = *(x0);
    w2 = *(x2);
    w0 = *(x4);
    w1 = *(x3);
    w2 <<= 0x10;
    w1 = w5 | (w1 << 24);
    w0 = w2 | (w0 << 8);
    w0 |= w1;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x19b0 */
#include <stdint.h>
 
uint64_t dbg_aq (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int aq(int a); */
    x11 = 0x14000;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w4 = 0x39;
    w3 = 0x3e;
    x29 = sp;
    x10 = v;
    w9 = w0;
    w1 = 0x0;
    w0 = 0xb8;
    w2 = v;
    w5 = w2 + 1;
    x2 = (int64_t) w2;
    *(x10) = w5;
    *(x2) = w4;
    w2 = v;
    w4 = w2 + 1;
    x2 = (int64_t) w2;
    *(x10) = w4;
    *(x2) = w3;
    dbg_x (x0, x1);
    w0 = v;
    w1 = w9 + 0x91;
    w3 = 0xf;
    w2 = w0 + 1;
    x1 = (int64_t) w0;
    *(x10) = w2;
    *(x1) = w3;
    if (w1 < 1) {
        goto label_0;
    }
    w0 = w9 + 0x90;
    x2 = x10;
    do {
        w1 = *(x2);
        w3 = w1 + 1;
        x1 = (int64_t) w1;
        *(x2) = w3;
        *(x1) = w0;
        w0 >>= 8;
        w1 = w0 + 1;
    } while (w1 > 1);
label_0:
    x11 = *((x11 + 0xf60));
    w1 = 0x3f;
    w0 = *(x11);
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x11) = w2;
    *(x0) = w1;
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x16a8 */
#include <stdint.h>
 
uint32_t aw (int64_t arg1) {
    x0 = arg1;
    w1 = w0 + 1;
    x2 = v;
    if (w1 < 1) {
        goto label_0;
    }
    do {
        w1 = *(x2);
        w3 = w1 + 1;
        x1 = (int64_t) w1;
        *(x2) = w3;
        *(x1) = w0;
        w0 >>= 8;
        w1 = w0 + 1;
    } while (w1 > 1);
label_0:
    w0 = 0x0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x16e8 */
#include <stdint.h>
 
void E (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w4 = w0 + 1;
    x2 = (int64_t) w0;
    w3 = w0 + 2;
    w0 += 3;
    x4 = (int64_t) w4;
    w6 = w1 >> 8;
    x3 = (int64_t) w3;
    *(x2) = w1;
    w5 = w1 >> 0x10;
    x2 = (int64_t) w0;
    *(x4) = w6;
    w1 >>= 0x18;
    *(x3) = w5;
    *(x2) = w1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1950 */
#include <stdint.h>
 
void M (int64_t arg1) {
    x0 = arg1;
    w1 = w0;
    w0 = 0xb8;
    return void (*0x18c8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1960 */
#include <stdint.h>
 
void I (int64_t arg1) {
    x0 = arg1;
    w1 = w0;
    w0 = 0xe9;
    return void (*0x18c8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1a78 */
#include <stdint.h>
 
void W (int64_t arg1, int64_t arg2) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    w2 = w0 + 0x84;
    w0 += 0x83;
    x3 = v;
    if (w2 < 1) {
        goto label_0;
    }
    do {
        w2 = *(x3);
        w4 = w2 + 1;
        x2 = (int64_t) w2;
        *(x3) = w4;
        *(x2) = w0;
        w0 >>= 8;
        w2 = w0 + 1;
    } while (w2 > 1);
label_0:
    x0 = (int64_t) w1;
    w0 = *(x0);
    __asm ("ccmp w0, 0, 4, le");
    if (w0 == 0x1ff) {
        w9 = w1 + 4;
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        w0 = 0x5;
        x9 = (int64_t) w9;
        x29 = sp;
        w1 = *(x9);
        dbg_x (x0, w1);
        *(x9) = w0;
        w0 = w1;
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
    }
    w1 = w0;
    w0 = 0x85;
    return void (*0x18c8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x24f0 */
#include <stdint.h>
 
uint64_t dbg_S (int64_t arg1) {
    int32_t h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    /* int S(int s); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x14000;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x22 = (int64_t) w0;
    x21 = e;
    w19 = e;
    if (w19 == 0x120) {
        goto label_3;
    }
    w0 = 0x1f8;
    __asm ("ccmp w19, w0, 4, ne");
    if (w19 == 0x160) {
        goto label_4;
    }
    if (w19 == 0x7b) {
        goto label_5;
    }
    if (w19 == 0x1c0) {
        goto label_6;
    }
    if (w19 == 0x190) {
        goto label_7;
    }
    if (w19 == 0x3b) {
        goto label_1;
    }
    w0 = 0xb;
    x0 = dbg_X (w0);
    do {
label_1:
        dbg_av ();
label_0:
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_4:
        dbg_av ();
        dbg_av ();
        if (w19 == 0x160) {
            goto label_8;
        }
        w0 = *(x21);
        if (w0 != 0x3b) {
            w0 = 0xb;
            x0 = dbg_X (w0);
        }
        dbg_av ();
        x19 = 0x14000;
        x0 = *((x20 + 0xfa8));
        *((x29 + 0x3c)) = 0;
        w1 = *(x0);
        x0 = v;
        w21 = v;
        if (w1 != 0x3b) {
            w0 = 0xb;
            dbg_X (w0);
            w1 = 0x0;
            w0 = 0x0;
            dbg_aa (w0, w1);
            *((x29 + 0x3c)) = w0;
        }
        dbg_av ();
        x20 = *((x20 + 0xfa8));
        w0 = *(x20);
        if (w0 != 0x29) {
            w1 = 0x0;
            w0 = 0xe9;
            w0 = dbg_x (w0, w1);
            w20 = w0;
            w0 = 0xb;
            dbg_X (w0);
            x9 = *((x19 + 0xf60));
            w0 = 0xe9;
            w1 = *(x9);
            w1 = w21 - w1;
            w21 = w20 + 4;
            w1 -= 5;
            dbg_x (x0, w1);
            w1 = *(x9);
            w0 = w20;
            x0 = dbg_ap (w0, w1);
        }
label_2:
        dbg_av ();
        x0 = x29 + 0x3c;
        dbg_S (x0);
        x19 = *((x19 + 0xf60));
        w0 = 0xe9;
        w1 = *(x19);
        w1 = w21 - w1;
        w1 -= 5;
        dbg_x (x0, w1);
        w1 = *(x19);
        w0 = *((x29 + 0x3c));
        dbg_ap (w0, w1);
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0xe9;
label_6:
        dbg_av ();
        w0 = *(x21);
        if (w0 != 0x3b) {
            w0 = 0xb;
            dbg_X (w0);
        }
        w0 = 0xe9;
        x9 = U;
        w1 = U;
        dbg_x (x0, w1);
        *(x9) = w0;
    } while (1);
label_3:
    dbg_av ();
    dbg_av ();
    w0 = 0xb;
    dbg_X (w0);
    w1 = 0x0;
    w0 = 0x0;
    dbg_aa (w0, w1);
    *((x29 + 0x3c)) = w0;
    dbg_av ();
    w0 = w22;
    dbg_S (w0);
    w0 = *(x21);
    if (w0 == 0x138) {
        goto label_9;
    }
    w0 = *((x29 + 0x3c));
    x1 = v;
    w1 = v;
    dbg_ap (x0, x1);
    goto label_0;
label_5:
    dbg_av ();
    x19 = x21;
    w0 = 0x1;
    dbg_ar (w0, x1);
    w0 = *(x21);
    if (w0 == 0x7d) {
        goto label_1;
    }
    do {
        w0 = w22;
        dbg_S (w0);
        w0 = *(x19);
    } while (w0 != 0x7d);
    goto label_1;
label_7:
    dbg_av ();
    w1 = *(x22);
    w0 = 0xe9;
    dbg_x (w0, w1);
    *(x22) = w0;
    goto label_1;
label_9:
    dbg_av ();
    w1 = 0x0;
    w0 = 0xe9;
    dbg_x (w0, w1);
    x19 = v;
    w20 = w0;
    w0 = *((x29 + 0x3c));
    w1 = v;
    dbg_ap (w0, w1);
    w0 = w22;
    dbg_S (w0);
    w1 = v;
    w0 = w20;
    dbg_ap (w0, w1);
    goto label_0;
label_8:
    x19 = 0x14000;
    w0 = 0xb;
    x1 = v;
    w21 = v;
    dbg_X (x0);
    w1 = 0x0;
    w0 = 0x0;
    dbg_aa (w0, w1);
    *((x29 + 0x3c)) = w0;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1768 */
#include <stdint.h>
 
uint32_t dbg_ap (signed int64_t arg2, int64_t arg1) {
    x1 = arg2;
    x4 = arg1;
    if (w0 == 0) {
        /* int ap(int a,int z); */
        goto label_2;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x10 = y;
    x11 = G;
    x13 = K;
    x15 = x10;
    x12 = R;
    x14 = i;
    do {
label_0:
        w8 = w0 + 2;
        w3 = w0 - 1;
        w9 = w0 + 1;
        w4 = w0 + 3;
        x8 = (int64_t) w8;
        x3 = (int64_t) w3;
        x16 = (int64_t) w0;
        x9 = (int64_t) w9;
        x4 = (int64_t) w4;
        w2 = w1 - w0;
        w5 = *(x8);
        w2 -= 4;
        w7 = *(x3);
        w0 = *(x9);
        w3 = *(x4);
        w6 = *(x16);
        w5 <<= 0x10;
        w30 = w2 >> 8;
        w18 = w2 >> 0x10;
        w0 = w5 | (w0 << 8);
        w17 = w2 >> 0x18;
        w3 = w6 | (w3 << 24);
        w0 |= w3;
        if (w7 == 5) {
            goto label_3;
        }
        *(x16) = w2;
        *(x9) = w30;
        *(x8) = w18;
        *(x4) = w17;
    } while (w0 != 0);
label_1:
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
label_3:
    w2 = *(x11);
    if (w2 > w1) {
        goto label_4;
    }
    w2 = *(x14);
    if (w1 >= w2) {
        goto label_4;
    }
    w2 = *(x15);
    w2 = w1 + w2;
    *(x16) = w2;
    w3 = w2 >> 8;
    *(x9) = w3;
    w3 = w2 >> 0x10;
    w2 >>= 0x18;
    *(x8) = w3;
    *(x4) = w2;
    if (w0 != 0) {
        goto label_0;
    }
    goto label_1;
label_4:
    w2 = *(x13);
    w5 = *(x12);
    w3 = *(x10);
    w2 = w1 - w2;
    w2 += w5;
    w2 += w3;
    *(x16) = w2;
    w5 = w2 >> 8;
    w3 = w2 >> 0x10;
    w2 >>= 0x18;
    *(x9) = w5;
    *(x8) = w3;
    *(x4) = w2;
    if (w0 != 0) {
        goto label_0;
    }
    goto label_1;
label_2:
    w0 = 0x0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1ce8 */
#include <stdint.h>
 
uint64_t dbg_ab (int64_t arg1) {
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    x0 = arg1;
    /* int ab(int s); */
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x21 = 0x14000;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x24 = e;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    w22 = e;
    if (w22 == 0x22) {
        goto label_9;
    }
    w25 = w0;
    x20 = J;
    x23 = C;
    w26 = J;
    w19 = C;
    dbg_av ();
    if (w22 == 2) {
        goto label_10;
    }
    if (w26 == 2) {
        goto label_11;
    }
    if (w22 == 0x28) {
        goto label_12;
    }
    if (w22 == 0x2a) {
        goto label_13;
    }
    if (w22 == 0x26) {
        goto label_14;
    }
    w0 = *(x24);
    w24 = (w0 == 0x3d) ? 1 : 0;
    w24 &= w25;
    if (w24 != w24) {
        goto label_15;
    }
    if (w0 != 0x28) {
        w1 = w22;
        w0 = 0x8;
        W ();
        w0 = *(x20);
        if (w0 == 0xb) {
            goto label_16;
        }
label_5:
        x0 = *((x21 + 0xfa8));
        w0 = *(x0);
        if (w0 != 0x28) {
            goto label_17;
        }
        w24 = 0x0;
    }
label_4:
    w1 = 0x0;
    w0 = 0xec81;
    w0 = dbg_x (w0, w1);
    w23 = w0;
    dbg_av ();
    x20 = *((x21 + 0xfa8));
    w0 = *(x20);
    if (w0 == 0x29) {
        goto label_18;
    }
    w19 = 0x0;
    w21 = 0x248489;
    while (w1 != 0x2c) {
        if (w1 == 0x29) {
            goto label_19;
        }
label_0:
        w0 = 0xb;
        dbg_X (w0);
        w1 = w19;
        w0 = w21;
        w19 += 4;
        dbg_x (w0, x1);
        w1 = *(x20);
    }
    dbg_av ();
    w1 = *(x20);
    if (w1 != 0x29) {
        goto label_0;
    }
label_19:
    w5 = (int8_t) w19;
    x4 = (x19 >> 8) & ((1 << 8) - 1);
    x3 = (x19 >> 0x10) & ((1 << 8) - 1);
    w2 = w19 >> 0x18;
label_7:
    x0 = (int64_t) w23;
    w1 = w23 + 1;
    x1 = (int64_t) w1;
    *(x0) = w5;
    w0 = w23 + 2;
    w23 += 3;
    x0 = (int64_t) w0;
    *(x1) = w4;
    x23 = (int64_t) w23;
    *(x0) = w3;
    *(x23) = w2;
    dbg_av ();
    if (w24 == 0) {
        goto label_20;
    }
    w1 = w19;
    w0 = 0x2494ff;
    w19 += 4;
    dbg_x (w0, x1);
label_2:
    w1 = w19;
    w0 = 0xc481;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    void (*0x18c8)() ();
label_9:
    x23 = 0x14000;
    w0 = 0xb8;
    x1 = i;
    x2 = y;
    x20 = x1;
    w3 = i;
    w1 = y;
    w1 = w3 + w1;
    dbg_x (x0, w1);
    x0 = m;
    x19 = x0;
    w0 = m;
    if (w0 != 0x22) {
        goto label_21;
    }
    goto label_22;
    do {
label_1:
        w0 = *(x20);
        w1 = *(x19);
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x20) = w2;
        *(x0) = w1;
        w ();
        w0 = *(x19);
        if (w0 == 0x22) {
            goto label_22;
        }
label_21:
    } while (w0 != 0x5c);
    an_part_1 ();
    goto label_1;
label_22:
    x23 = *((x23 + 0xfb0));
    x0 = *(x23);
    *(x0) = 0;
    w0 = *(x23);
    w0 += 4;
    w0 &= 0xfffffffc;
    *(x23) = w0;
    w ();
    dbg_av ();
    x0 = *((x21 + 0xfa8));
    w0 = *(x0);
label_3:
    if (w0 == 0x28) {
        goto label_23;
    }
label_17:
    w0 = 0x0;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
label_20:
    w22 += 4;
    w0 = 0xe8;
    x22 = (int64_t) w22;
    w1 = *(x22);
    dbg_x (x0, w1);
    *(x22) = w0;
    if (w19 != 0) {
        goto label_2;
    }
    w0 = 0x0;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
label_12:
    w0 = 0xb;
    x0 = dbg_X (w0);
    dbg_av ();
    w0 = *(x24);
    goto label_3;
label_23:
    w24 = 0x1;
    w2 = 0x50;
    x1 = v;
    w0 = v;
    w3 = w0 + w24;
    x0 = (int64_t) w0;
    *(x1) = w3;
    *(x0) = w2;
    goto label_4;
label_15:
    dbg_av ();
    w0 = 0xb;
    dbg_X (w0);
    w1 = w22;
    w0 = 0x6;
    W ();
    goto label_5;
label_10:
    w1 = w19;
    w0 = 0xb8;
    dbg_x (w0, w1);
    w0 = *(x24);
    goto label_3;
label_11:
    w0 = 0x0;
    dbg_ab (w0);
    w1 = 0x0;
    w0 = 0xb9;
    dbg_x (w0, w1);
    if (w22 == 0x21) {
        goto label_24;
    }
    w0 = w19 + 1;
    x1 = v;
    if (w0 < 1) {
        goto label_25;
    }
    do {
        w0 = *(x1);
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x1) = w2;
        *(x0) = w19;
        w19 >>= 8;
        w0 = w19 + 1;
    } while (w0 > 1);
label_6:
    x0 = *((x21 + 0xfa8));
    w0 = *(x0);
    goto label_3;
label_13:
    dbg_av ();
    w22 = *(x24);
    dbg_av ();
    dbg_av ();
    w0 = *(x24);
    if (w0 == 0x2a) {
        goto label_26;
    }
    dbg_av ();
    w0 = 0x0;
    dbg_ab (w0);
    w0 = *(x24);
    if (w0 == 0x3d) {
        goto label_27;
    }
    if (w22 == 0) {
        goto label_3;
    }
    x1 = 0x14000;
    if (w22 == 0x100) {
        goto label_28;
    }
    x2 = *((x1 + 0xf60));
    w4 = 0xf;
    w3 = 0x41;
    w0 = *(x2);
    w5 = w0 + 1;
    x0 = (int64_t) w0;
    *(x2) = w5;
    *(x0) = w4;
label_8:
    w0 = *(x2);
    x1 = *((x1 + 0xf60));
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x2) = w4;
    *(x0) = w3;
    x0 = *((x21 + 0xfa8));
    w2 = *(x1);
    w2++;
    w0 = *(x0);
    *(x1) = w2;
    goto label_3;
label_14:
    w1 = *(x24);
    w0 = 0xa;
    W ();
    dbg_av ();
    w0 = *(x24);
    goto label_3;
label_26:
    dbg_av ();
    w22 = 0x0;
    dbg_av ();
    dbg_av ();
    dbg_av ();
    dbg_av ();
    w0 = 0x0;
    dbg_ab (w0);
    w0 = *(x24);
    if (w0 != 0x3d) {
        goto label_3;
    }
label_27:
    dbg_av ();
    x1 = 0x14000;
    w0 = 0xb;
    x19 = v;
    w1 = v;
    w3 = w1 + 1;
    x1 = (int64_t) w1;
    *(x19) = w3;
    *(x1) = w2;
    dbg_X (x0);
    w0 = v;
    w3 = 0x59;
    w2 = (w22 == 0x100) ? 1 : 0;
    w4 = w0 + 1;
    w2 = 0x1d8;
    x1 = (int64_t) w0;
    *(x19) = w4;
    x0 = x19;
    *(x1) = w3;
    do {
        w1 = *(x0);
        w3 = w1 + 1;
        x1 = (int64_t) w1;
        *(x0) = w3;
        *(x1) = w2;
        w2 >>= 8;
    } while (w2 == 1);
    goto label_6;
label_18:
    w2 = 0x0;
    w3 = 0x0;
    w4 = 0x0;
    w5 = 0x0;
    w19 = 0x0;
    goto label_7;
label_16:
    w1 = w22;
    w0 = 0x0;
    W ();
    w2 = *(x23);
    x1 = 0x14000;
    w0 = w2 + 1;
    x0 = v;
    if (w0 < 1) {
        goto label_29;
    }
    do {
        w1 = *(x0);
        w3 = w1 + 1;
        x1 = (int64_t) w1;
        *(x0) = w3;
        *(x1) = w2;
        w2 >>= 8;
        w1 = w2 + 1;
    } while (w1 > 1);
label_29:
    dbg_av ();
    goto label_5;
label_24:
    w0 = w19;
    dbg_aq (w0);
    w0 = *(x24);
    goto label_3;
label_28:
    w3 = 0x74;
    x2 = *((x1 + 0xf60));
    goto label_8;
label_25:
    w0 = *(x24);
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x2800 */
#include <stdint.h>
 
void dbg_ad (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    /* int ad(int d,int a); */
    w5 = w0;
    w4 = 0x8048000;
    x2 = i;
    w12 = w5 >> 8;
    w11 = w5 >> 0x10;
    w10 = w5 >> 0x18;
    w4 = w0 + w4;
    x8 = (x4 >> 8) & ((1 << 8) - 1);
    x7 = (x4 >> 0x10) & ((1 << 8) - 1);
    w3 = i;
    w9 = (int8_t) w4;
    w4 >>= 0x18;
    w6 = w3 + 1;
    x13 = (int64_t) w3;
    x6 = (int64_t) w6;
    *(x13) = w5;
    w5 = w3 + 2;
    w3 += 3;
    *(x6) = w12;
    x5 = (int64_t) w5;
    x3 = (int64_t) w3;
    *(x5) = w11;
    *(x3) = w10;
    w3 = i;
    w5 = w3 + 4;
    w6 = w3 + 5;
    *(x2) = w5;
    x5 = (int64_t) w5;
    x6 = (int64_t) w6;
    *(x5) = w9;
    w5 = w3 + 6;
    w3 += 7;
    *(x6) = w8;
    x5 = (int64_t) w5;
    x3 = (int64_t) w3;
    *(x5) = w7;
    *(x3) = w4;
    w3 = i;
    w5 = w3 + 4;
    w6 = w3 + 5;
    *(x2) = w5;
    x5 = (int64_t) w5;
    x6 = (int64_t) w6;
    *(x5) = w9;
    w5 = w3 + 6;
    w3 += 7;
    *(x6) = w8;
    x5 = (int64_t) w5;
    w9 = (int8_t) w1;
    x3 = (int64_t) w3;
    x6 = (x1 >> 0x10) & ((1 << 8) - 1);
    *(x5) = w7;
    x7 = (x1 >> 8) & ((1 << 8) - 1);
    *(x3) = w4;
    w1 >>= 0x18;
    w3 = i;
    w8 = w3 + 4;
    w5 = w3 + 5;
    w4 = w3 + 6;
    w3 += 7;
    x10 = (int64_t) w8;
    x5 = (int64_t) w5;
    *(x2) = w8;
    x4 = (int64_t) w4;
    x3 = (int64_t) w3;
    *(x10) = w9;
    *(x5) = w7;
    *(x4) = w6;
    *(x3) = w1;
    w3 = i;
    w8 = w3 + 4;
    w5 = w3 + 5;
    w4 = w3 + 6;
    w3 += 7;
    x10 = (int64_t) w8;
    x5 = (int64_t) w5;
    *(x2) = w8;
    x4 = (int64_t) w4;
    x3 = (int64_t) w3;
    *(x10) = w9;
    *(x5) = w7;
    *(x4) = w6;
    *(x3) = w1;
    w1 = i;
    w1 += 4;
    *(x2) = w1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0x1208 */
#include <stdint.h>
 
void an () {
    x0 = m;
    w0 = m;
    if (w0 != 0x5c) {
        return;
    }
    return void (*0x11a0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xd08 */
#include <stdint.h>
 
void init () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [11] -r-x section size 20 named .init */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    call_weak_fn ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xd40 */
#include <stdint.h>
 
void memcpy () {
    x16 = 0x15000;
    x17 = *(0x15000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xd60 */
#include <stdint.h>
 
void fclose () {
    x17 = *(0x15010);
    x16 = 0x15010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xd80 */
#include <stdint.h>
 
void isspace () {
    x17 = *(0x15020);
    x16 = 0x15020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xdd0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x15048);
    x16 = 0x15048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xdf0 */
#include <stdint.h>
 
void strtol () {
    x17 = *(0x15058);
    x16 = 0x15058;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xe00 */
#include <stdint.h>
 
void fwrite () {
    x17 = *(0x15060);
    x16 = 0x15060;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xe10 */
#include <stdint.h>
 
void strstr () {
    x17 = *(0x15068);
    x16 = 0x15068;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O2/subject.exe @ 0xd20 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 272 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x14ff8;
    return uint64_t (*x17)() ();
}

/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xe30 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 7276 named .text */
    x29 = 0x0;
    x30 = 0x0;
    x5 = x0;
    x1 = *(sp);
    x2 = sp + 8;
    x6 = sp;
    x0 = main;
    x3 = *(0x120db);
    x4 = __libc_csu_fini;
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xd90 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x13028);
    x16 = 0x13028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x28a4 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc, char ** argv) {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    x0 = argc;
    x1 = argv;
    /* int main(int d,int a); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    __asm ("b.le 0x2a0c");
    w19 = w1;
    x23 = 0x1869f;
    x1 = x23;
    x0 = 0x1;
    calloc (x0, x1);
    x1 = Q;
    *(x1) = w0;
    x0 = (int64_t) w0;
    x1 = " int if else while break return for define main ";
    x2 = *(x1);
    x3 = *((x1 + 8));
    *(x0) = x2;
    *((x0 + 8)) = x3;
    x2 = *((x1 + 0x10));
    x3 = *((x1 + 0x10 + 8));
    *((x0 + 0x10)) = x2;
    *((x0 + 0x10 + 8)) = x3;
    x2 = *((x1 + 0x20));
    x3 = *((x1 + 0x20 + 8));
    *((x0 + 0x20)) = x2;
    *((x0 + 0x20 + 8)) = x3;
    w1 = *((x1 + 0x30));
    *((x0 += 0x30)) = w1;
    x1 = D;
    *(x1) = w0;
    x1 = x23;
    x0 = 0x1;
    calloc (x0, x1);
    x22 = G;
    *(x22) = w0;
    x21 = i;
    *(x21) = w0;
    x1 = x23;
    x0 = 0x1;
    calloc (x0, x1);
    x1 = K;
    *(x1) = w0;
    x20 = v;
    *(x20) = w0;
    x1 = x23;
    x0 = 0x1;
    calloc (x0, x1);
    x1 = T;
    *(x1) = w0;
    w0 = w19 + 4;
    x0 = (int64_t) w0;
    x1 = 0x2bd0;
    x0 = *(x0);
    fopen (x0, x1);
    x1 = ak;
    *(x1) = w0;
    w0 = G;
    w1 = 0x8048000;
    w1 -= w0;
    x0 = y;
    *(x0) = w1;
    w0 = ak;
    *(x21) = w0;
    w0 = 0x12f71;
    *(x20) = w0;
    dbg_w ();
    dbg_av ();
    w0 = 0x0;
    dbg_ar (w0);
    w19 += 8;
    x19 = (int64_t) w19;
    w0 = *(x19);
    dbg_au (w0);
    do {
        w0 = 0x0;
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x23 = *((sp + 0x30));
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x0;
        x0 = "usage: otccelf file.c outfile";
        puts ("usage: otccelf file.c outfile");
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xdb0 */
#include <stdint.h>
 
void calloc () {
    x17 = *(0x13038);
    x16 = 0x13038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xd70 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x13018);
    x16 = 0x13018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xf98 */
#include <stdint.h>
 
uint64_t dbg_w () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int w(); */
    x0 = *(0x20000);
    w0 = *(0x20000);
    if (w0 != 0) {
        w2 = w0 + 1;
        x1 = *(0x20000);
        *(x1) = w2;
        x0 = (int64_t) w0;
        w1 = *(x0);
        x0 = m;
        *(x0) = w1;
        if (w1 != 2) {
            return;
        }
        x0 = *(0x20000);
        *(x0) = 0;
        x0 = al;
        w1 = al;
        x0 = m;
        *(x0) = w1;
        return 0x12fb8;
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
    return 0x12f70;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xda0 */
#include <stdint.h>
 
void fgetc () {
    x17 = *(0x13030);
    x16 = 0x13030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x10b8 */
#include <stdint.h>
 
void dbg_av () {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    /* int av(); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x21 = 0x12000;
    x20 = m;
    x24 = 0x12000;
    x23 = e;
    x22 = D;
    goto label_7;
label_0:
    x0 = *((x21 + 0xfb8));
    w0 = *(x0);
    if (w0 == 0xa) {
        goto label_8;
    }
    x19 = *((x21 + 0xfb8));
    do {
        x0 = dbg_L (x0);
        dbg_w ();
        w0 = *(x19);
    } while (w0 != 0xa);
label_8:
    w0 = 0xa;
    dbg_L (w0);
    w0 = 0x2;
    x0 = dbg_L (w0);
    do {
        dbg_w ();
label_7:
        w19 = *(x20);
        w0 = w19;
        isspace (w0);
        w1 = (w19 == 0x23) ? 1 : 0;
        w0 = w1 | w0;
        if (w0 == 0) {
            goto label_9;
        }
    } while (w0 != 0);
    dbg_w ();
    dbg_av ();
    w0 = *(x23);
    if (w0 != 0x218) {
        goto label_0;
    }
    dbg_av ();
    w0 = 0x20;
    dbg_L (w0);
    x0 = *((x24 + 0xfa8));
    x1 = *(x0);
    w2 = 0x1;
    *(x1) = w2;
    w1 = *(x22);
    w0 = *(x0);
    w0 += 4;
    x0 = (int64_t) w0;
    *(x0) = w1;
    goto label_0;
label_9:
    x0 = J;
    *(x0) = 0;
    x0 = e;
    *(x0) = w19;
    w0 = dbg_am ();
    if (w0 == 0) {
        goto label_10;
    }
    w0 = 0x20;
    dbg_L (w0);
    x0 = D;
    w1 = D;
    x0 = Z;
    *(x0) = w1;
    x19 = m;
    while (w0 != 0) {
        w0 = *(x19);
        x0 = dbg_L (w0);
        dbg_w ();
        w0 = dbg_am ();
    }
    x0 = e;
    w0 = e;
    w0 -= 0x30;
    if (w0 < 9) {
        goto label_11;
    }
    x19 = D;
    x0 = *(x19);
    w1 = 0x20;
    *(x0) = w1;
    x0 = Z;
    w1 = Z;
    w1--;
    x0 = Q;
    x20 = *(x0);
    x1 = (int64_t) w1;
    x0 = x20;
    strstr (x0, x1);
    x1 = e;
    x0 -= x20;
    *(x1) = w0;
    x0 = *(x19);
    *(x0) = 0;
    w0 = 0x12fc8;
    w0 <<= 3;
    *(x1) = w0;
    __asm ("b.le 0x129c");
    x1 = T;
    w1 = T;
    w0 += w1;
    x1 = e;
    *(x1) = w0;
    x1 = (int64_t) w0;
    w1 = e;
    if (w1 == 1) {
        goto label_12;
    }
    do {
label_1:
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x23 = *((sp + 0x30));
        x24 = *((sp + 0x30 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_11:
        w2 = 0x0;
        w1 = 0x0;
        x0 = Z;
        w0 = Z;
        strtol (x0, x1, x2);
        x1 = C;
        *(x1) = w0;
        w1 = 0x2;
        x0 = e;
        *(x0) = w1;
    } while (1);
label_12:
    w0 += 4;
    x0 = (int64_t) w0;
    w1 = *(x0);
    x0 = *(0x20000);
    *(x0) = w1;
    x0 = m;
    w1 = m;
    x0 = al;
    *(x0) = w1;
    dbg_w ();
    dbg_av ();
    goto label_1;
label_10:
    dbg_w ();
    x0 = e;
    w7 = e;
    if (w7 != 0x27) {
        x0 = m;
        w8 = m;
        w0 = 0x2a;
        __asm ("ccmp w8, w0, 0, eq");
        if (w7 == 0x2f) {
            goto label_13;
        }
        x1 = "++#m--%am*@R<^1c/@%[_[H3c%@%[_[H3c+@.B#d-@%:_^BKd<<Z/03e>>`/03e<=0f>=/f<@.f>@1f==&g!='g&&k||#l&@.BCh^@.BSi|@.B+j~@/%Yd!@&d*@b";
        x3 = 0x12000;
        x10 = C;
        x4 = 0x12000;
        x9 = J;
        x3 = x10;
        x4 = x9;
        goto label_14;
    }
    w1 = 0x2;
    x0 = e;
    *(x0) = w1;
    dbg_an ();
    x0 = m;
    w1 = m;
    x0 = C;
    *(x0) = w1;
    dbg_w ();
    dbg_w ();
    goto label_1;
label_13:
    dbg_w ();
    x22 = 0x12000;
    x19 = m;
    x21 = x19;
label_4:
    x20 = *((x22 + 0xfb8));
    goto label_15;
    do {
label_2:
        dbg_w ();
        w0 = *(x19);
    } while (w0 != 0x2a);
label_3:
    dbg_w ();
    w0 = *(x21);
    if (w0 == 0x2f) {
        goto label_16;
    }
label_15:
    w0 = *(x20);
    if (w0 == 0) {
        goto label_17;
    }
    if (w0 != 0x2a) {
        goto label_2;
    }
    goto label_3;
label_16:
    x0 = *((x22 + 0xfb8));
    *(x0) = 0;
    goto label_4;
label_17:
    dbg_w ();
    dbg_av ();
    goto label_1;
label_5:
    w1 = w2;
label_6:
    __asm ("ccmp w8, w6, 4, ne");
    __asm ("ccmp w7, w5, 0, eq");
    if (w6 == 0x40) {
        goto label_18;
    }
label_14:
    w0 = w1 + 1;
    x2 = (int64_t) w1;
    w5 = *(x2);
    if (w5 == 0) {
        goto label_1;
    }
    x0 = (int64_t) w0;
    w6 = *(x0);
    *(x10) = 0;
    w2 = w1 + 3;
    w1 += 2;
    x1 = (int64_t) w1;
    w0 = *(x1);
    w0 -= 0x62;
    *(x9) = w0;
    if ((w0 & 0x1f) == 0) {
        goto label_5;
    }
    do {
        w1 = *(x3);
        w0 += (w1 << 6);
        w0 += 0x40;
        *(x3) = w0;
        w1 = w2 + 1;
        x2 = (int64_t) w2;
        w0 = *(x2);
        w0 -= 0x62;
        *(x4) = w0;
        w2 = w1;
    } while ((w0 & 0x1f) != 0);
    goto label_6;
label_18:
    if (w8 != w6) {
        goto label_1;
    }
    dbg_w ();
    w1 = 0x1;
    x0 = e;
    *(x0) = w1;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x1df0 */
#include <stdint.h>
 
void dbg_ar (int64_t arg1) {
    int64_t var_50h;
    int64_t var_50h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    x0 = arg1;
    /* int ar(int s); */
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    w22 = w0;
    x21 = 0x12000;
    x23 = e;
    x20 = i;
    goto label_5;
label_2:
    dbg_av ();
    x24 = *((x21 + 0xfa8));
label_1:
    x19 = P;
    while (w22 == 0) {
        w1 = *(x20);
        x0 = (int64_t) w0;
        *(x0) = w1;
        w0 = *(x20);
        w0 += 4;
        *(x20) = w0;
label_0:
        dbg_av ();
        x0 = *((x21 + 0xfa8));
        w0 = *(x0);
        if (w0 == 0x2c) {
            goto label_6;
        }
        w0 = *(x24);
        if (w0 == 0x3b) {
            goto label_7;
        }
    }
    w2 = *(x19);
    w1 = w2 + 4;
    *(x19) = w1;
    x0 = (int64_t) w0;
    w1 = 0x3;
    w1 -= w2;
    *(x0) = w1;
    goto label_0;
label_6:
    dbg_av ();
    goto label_1;
label_7:
    dbg_av ();
    goto label_5;
label_3:
    dbg_av ();
    x19 = P;
    *(x19) = 0;
    x24 = *(0x120db);
    *(x24) = 0;
    w0 = 0xe58955;
    dbg_aw (w0);
    w1 = 0x0;
    w0 = 0xec81;
    w0 = dbg_x (w0, w1);
    w25 = w0;
    w0 = 0x0;
    dbg_S (w0);
    w0 = *(0x120db);
    dbg_H (w0);
    w0 = 0xc3c9;
    dbg_aw (w0);
    w1 = P;
    w0 = w25;
    dbg_E (w0, w1);
label_5:
    w0 = *(x23);
    __asm ("ccmn w0, 1, 4, eq");
    w1 = 0x100;
    __asm ("ccmp w0, w1, 4, eq");
    if (w22 != 0) {
        goto label_8;
    }
    if (w0 == 0x100) {
        goto label_2;
    }
    x1 = v;
    w1 = v;
    x0 = (int64_t) w0;
    *(x0) = w1;
    dbg_av ();
    dbg_av ();
    w19 = 0x8;
    x24 = *((x21 + 0xfa8));
    x25 = x24;
label_4:
    w0 = *(x24);
    if (w0 == 0x29) {
        goto label_3;
    }
    x0 = (int64_t) w0;
    *(x0) = w19;
    w19 += 4;
    dbg_av ();
    w0 = *(x25);
    if (w0 != 0x2c) {
        goto label_4;
    }
    dbg_av ();
    goto label_4;
label_8:
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x2498 */
#include <stdint.h>
 
uint64_t dbg_au (char * arg1) {
    char * filename;
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
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    *((x29 + 0x6c)) = w0;
    x21 = i;
    w1 = i;
    x0 = R;
    *(x0) = w1;
    x0 = K;
    w0 = K;
    x19 = v;
    w20 = v;
    w20 -= w0;
    *(x19) = w0;
    w0 = 0x505458;
    dbg_aw (w0);
    w0 = 0x13180;
    x0 = (int64_t) w0;
    w1 = T;
    w0 = v;
    w1 -= w0;
    w1 -= 5;
    w0 = 0xe8;
    dbg_x (w0, w1);
    w0 = 0xc389;
    dbg_aw (w0);
    w0 = 0x1;
    dbg_M (w0);
    w0 = 0x80cd;
    dbg_aw (w0);
    w24 = i;
    w24 = w20 + w24;
    w0 = w24 + 1;
    x0 = (int64_t) w0;
    x1 = "libc.so.6";
    x2 = "libc.so.6";
    *(x0) = x2;
    w1 = *((x1 + 8));
    *((x0 + 8)) = w1;
    x0 = (int64_t) w0;
    x1 = "libdl.so.2";
    x2 = "libdl.so.2";
    *(x0) = x2;
    w1 = *((x1 + 7));
    *((x0 + 7)) = w1;
    x0 = 0x12f45;
    *(x21) = w0;
    w0 = 0x0;
    dbg_ae (w0);
    w19 = i;
    w28 = w19 - w24;
    w19 += 3;
    w19 &= 0xfffffffc;
    *(x21) = w19;
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x1;
    dbg_ae (w0);
    w27 = i;
    w0 = w27 - w19;
    w22 = w0 + 0xf;
    w22 = (w0 < 0) ? w22 : w0;
    w22 >>= 4;
    w0 = 0x1;
    dbg_ax (w0);
    w0 = w22;
    dbg_ax (w0);
    w0 = 0x1;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    __asm ("b.le 0x262c");
    w0 = 0x2;
    do {
        w21 = w0 + 1;
        dbg_ax (x0);
        w0 = w21;
    } while (w22 != w21);
    w0 = 0x0;
    dbg_ax (w0);
    x21 = i;
    w26 = i;
    w0 = 0x2;
    dbg_ae (w0);
    x25 = R;
    x2 = (int64_t) w20;
    x1 = *(x0);
    x0 = *(x25);
    memcpy (x0, x1, x2);
    w22 = i;
    x23 = G;
    w0 = G;
    *(x21) = w0;
    w0 = 0x464c457f;
    dbg_ax (w0);
    w0 = 0x10101;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x30002;
    dbg_ax (w0);
    w0 = 0x1;
    dbg_ax (w0);
    x20 = y;
    w1 = R;
    w0 = y;
    w0 = w1 + w0;
    dbg_ax (w0);
    w0 = 0x30;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x200034;
    dbg_ax (w0);
    w0 = 0x3;
    dbg_ax (w0);
    w0 = 0x3;
    dbg_ax (w0);
    w1 = 0x13;
    w0 = 0x90;
    dbg_ad (w0, w1);
    w0 = 0x4;
    dbg_ax (w0);
    w0 = 0x1;
    dbg_ax (w0);
    w0 = 0x1;
    dbg_ax (w0);
    w1 = G;
    w1 = w22 - w1;
    w0 = 0x0;
    dbg_ad (w0, w1);
    w0 = 0x7;
    dbg_ax (w0);
    w0 = 0x1000;
    dbg_ax (w0);
    w0 = 0x2;
    dbg_ax (w0);
    w1 = 0x58;
    w0 = 0xa4;
    dbg_ad (w0, w1);
    w0 = 0x6;
    dbg_ax (w0);
    w0 = 0x4;
    dbg_ax (w0);
    x0 = *(x21);
    x1 = "/lib/ld-linux.so.2";
    x2 = *(x1);
    x3 = *((x1 + 8));
    *(x0) = x2;
    *((x0 + 8)) = x3;
    w1 = *((x1 + 0xf));
    *((x0 + 0xf)) = w1;
    x0 = 0x12fa4;
    *(x21) = w0;
    w0 = 0x1;
    dbg_ax (w0);
    w0 = 0x1;
    dbg_ax (w0);
    w0 = 0x1;
    dbg_ax (w0);
    w0 = 0xb;
    dbg_ax (w0);
    w0 = 0x4;
    dbg_ax (w0);
    w0 = y;
    w0 = w27 + w0;
    dbg_ax (w0);
    w0 = 0x6;
    dbg_ax (w0);
    w0 = y;
    w0 = w19 + w0;
    dbg_ax (w0);
    w0 = 0x5;
    dbg_ax (w0);
    w0 = y;
    w0 = w24 + w0;
    dbg_ax (w0);
    w0 = 0xa;
    dbg_ax (w0);
    w0 = w28;
    dbg_ax (w0);
    w0 = 0xb;
    dbg_ax (w0);
    w0 = 0x10;
    dbg_ax (w0);
    w0 = 0x11;
    dbg_ax (w0);
    w0 = y;
    w0 = w26 + w0;
    dbg_ax (w0);
    w0 = 0x12;
    dbg_ax (w0);
    w0 = w22 - w26;
    dbg_ax (w0);
    w0 = 0x13;
    dbg_ax (w0);
    w0 = 0x8;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    x1 = 0x2b70;
    x0 = *((x29 + 0x6c));
    fopen (x0, x1);
    w4 = G;
    x19 = (int64_t) w0;
    w2 = w22 - w4;
    x3 = x19;
    x2 = (int64_t) w2;
    x1 = 0x1;
    x0 = (int64_t) w4;
    fwrite (x0, x1, x2, x3);
    x0 = x19;
    fclose (x0);
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
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xde0 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x13050);
    x16 = 0x13050;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x2a98).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x2a20 */
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
    x20 = 0x12000;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xe68 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0xdc0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xe80 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x13088;
    x0 = 0x13088;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xeb8 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x13088;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x13088;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xef8 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x13000;
    w0 = *((x19 + 0x88));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x13080);
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xd50 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x13000;
    x17 = *(0x13008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xf40 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0xeb8)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xeb8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x21d8 */
#include <stdint.h>
 
void dbg_ax (int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = arg1;
    /* int ax(int d); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = i;
    w1 = w0;
    w0 = i;
    dbg_E (w0, w1);
    w0 = i;
    w0 += 4;
    *(x19) = w0;
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x14f0 */
#include <stdint.h>
 
void dbg_E (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    /* int E(int a,int d); */
    x2 = (int64_t) w0;
    *(x2) = w1;
    w2 = w0 + 1;
    x2 = (int64_t) w2;
    w3 = w1 >> 8;
    *(x2) = w3;
    w2 = w0 + 2;
    x2 = (int64_t) w2;
    w3 = w1 >> 0x10;
    *(x2) = w3;
    w0 += 3;
    x0 = (int64_t) w0;
    w1 >>= 0x18;
    *(x0) = w1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x17d0 */
#include <stdint.h>
 
uint64_t dbg_B () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int B(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w0 = 0xb;
    dbg_X (w0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xb;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x1c9c */
#include <stdint.h>
 
void dbg_X (uint32_t arg1) {
    int64_t var_50h;
    int64_t var_50h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    x0 = arg1;
    /* int X(int s); */
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    if (w0 != 1) {
        w19 = w0 - 1;
        w0 = w19;
        dbg_X (w0);
        w25 = 0x0;
        x21 = J;
        x24 = e;
        x23 = C;
        goto label_0;
    }
    dbg_ab (x0);
    goto label_1;
    do {
        w0 = 0x50;
        dbg_aw (w0);
        w0 = w19;
        dbg_X (w0);
        w0 = 0x59;
        dbg_aw (w0);
        w0 = w19 - 4;
        if (w0 < 1) {
            goto label_2;
        }
        w0 = w20;
        dbg_aw (w0);
        if (w22 == 0x25) {
            goto label_3;
        }
label_0:
        w0 = *(x21);
        if (w19 != w0) {
            goto label_4;
        }
        w22 = *(x24);
        w20 = *(x23);
        dbg_av ();
        __asm ("b.le 0x1cf0");
    } while (1);
    w1 = w25;
    w0 = w20;
    w0 = dbg_aa (w0, w1);
    w25 = w0;
    w0 = w19;
    dbg_X (w0);
    goto label_0;
label_2:
    w0 = w20;
    dbg_aq (w0);
    goto label_0;
label_3:
    w0 = 0x92;
    dbg_aw (w0);
    goto label_0;
label_4:
    __asm ("ccmp w19, 8, 4, ne");
    while (1) {
label_1:
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x23 = *((sp + 0x30));
        x24 = *((sp + 0x30 + 8));
        x25 = *((sp + 0x40));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
        w1 = w25;
        w0 = w20;
        w0 = dbg_aa (w0, w1);
        w19 = w0;
        w0 = w20 ^ 1;
        dbg_M (w0);
        w0 = 0x5;
        dbg_I (w0);
        w0 = w19;
        dbg_H (w0);
        w0 = w20;
        dbg_M (w0);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x1660 */
#include <stdint.h>
 
void dbg_H (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int H(int a); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x1 = v;
    w1 = v;
    dbg_ap (x0, x1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x156c */
#include <stdint.h>
 
void dbg_ap (int64_t arg1, int64_t arg2) {
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
    if (w0 == 0) {
        /* int ap(int a,int z); */
        goto label_1;
    }
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    w19 = w0;
    w21 = w1;
    x22 = G;
    x23 = K;
    x24 = 0x12000;
    while (w0 == 5) {
        w0 = *(x22);
        if (w0 <= w21) {
            x0 = i;
            w0 = i;
            if (w21 < w0) {
                goto label_2;
            }
        }
        w0 = *(x23);
        w0 = w21 - w0;
        x1 = *((x24 + 0xf48));
        w1 = *(x1);
        w0 += w1;
        x1 = y;
        w1 = y;
        w1 = w0 + w1;
        w0 = w19;
        dbg_E (w0, w1);
label_0:
        w19 = w20;
        if (w20 == 0) {
            goto label_3;
        }
        w0 = w19;
        w0 = dbg_ao (w0);
        w20 = w0;
        w0 = w19 - 1;
        x0 = (int64_t) w0;
        w0 = *(x0);
    }
    w1 = w21 - w19;
    w1 -= 4;
    w0 = w19;
    dbg_E (w0, w1);
    goto label_0;
label_2:
    x0 = y;
    w1 = y;
    w1 = w21 + w1;
    w0 = w19;
    dbg_E (w0, w1);
    goto label_0;
label_3:
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xf78 */
#include <stdint.h>
 
uint32_t dbg_L (int64_t arg1) {
    x0 = arg1;
    /* int L(int a); */
    x2 = D;
    w1 = D;
    w3 = w1 + 1;
    *(x2) = w3;
    x1 = (int64_t) w1;
    *(x1) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x1680 */
#include <stdint.h>
 
uint64_t dbg_x (int64_t arg1, int64_t arg2) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* int x(int d,int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w20 = w1;
    dbg_aw (x0);
    x19 = v;
    w1 = w20;
    w0 = v;
    dbg_E (w0, w1);
    w0 = v;
    w1 = w0 + 4;
    *(x19) = w1;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12f60;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x14b4 */
#include <stdint.h>
 
void dbg_aw (int64_t arg1) {
    x0 = arg1;
    /* int aw(int d); */
    w1 = w0 + 1;
    if (w1 < 1) {
        goto label_0;
    }
    x2 = v;
    do {
        w1 = *(x2);
        w3 = w1 + 1;
        *(x2) = w3;
        x1 = (int64_t) w1;
        *(x1) = w0;
        w0 >>= 8;
        w1 = w0 + 1;
    } while (w1 > 1);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x2a9c */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x2260 */
#include <stdint.h>
 
void dbg_ae (int64_t arg1) {
    char * var_60h;
    int64_t var_64h;
    char * var_68h;
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
    /* int ae(int s); */
    *((sp + -0x70)) = x29;
    *((sp + -0x70 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    *((x29 + 0x64)) = w0;
    x0 = Q;
    w19 = Q;
    *((x29 + 0x60)) = 0;
    x27 = 0x12000;
    x0 = D;
    *((x29 + 0x68)) = x0;
    x27 = x0;
    x28 = Q;
    while (w0 == 0x20) {
        w19 = w21;
        goto label_5;
label_0:
        w19 = w21;
        goto label_5;
label_3:
        x20 = i;
        w2 = w19 - w21;
        x2 = (int64_t) w2;
        x1 = x4;
        x0 = *(x20);
        memcpy (x0, x1, x2);
        w0 = i;
        w0 = w19 + w0;
        w0 -= w21;
        w0++;
        *(x20) = w0;
        goto label_1;
label_4:
        w20 = *((x29 + 0x60));
        w0 = w20 + 0x16;
        dbg_ax (w0);
        w0 = 0x0;
        dbg_ax (w0);
        w0 = 0x0;
        dbg_ax (w0);
        w0 = 0x10;
        dbg_ax (w0);
        w0 = w20 + w19;
        w21 = w0 - w21;
        w0 = w21 + 1;
        *((x29 + 0x60)) = w0;
        goto label_1;
label_2:
        w0 = *((x29 + 0x64));
        if (w0 == 0) {
            goto label_6;
        }
label_1:
        w21 = w19 + 1;
        x4 = (int64_t) w21;
        w0 = *(x4);
    }
    x0 = *((x29 + 0x68));
    w2 = *(x0);
    if (w21 >= w2) {
        goto label_0;
    }
    w19 = w21;
    do {
        w19++;
        x0 = (int64_t) w19;
        w0 = *(x0);
        if (w0 == 0x20) {
            goto label_5;
        }
    } while (w19 < w2);
label_5:
    w0 = *(x27);
    if (w0 == w19) {
        goto label_7;
    }
    w0 = *(x28);
    w0 = w21 - w0;
    x2 = T;
    w1 = T;
    w0 = w1 + (w0 << 3);
    w2 = w0 + 0xf8;
    x3 = e;
    *(x3) = w2;
    x2 = (int64_t) w2;
    w1 = T;
    w0 += 0xfc;
    x0 = (int64_t) w0;
    w20 = *(x0);
    __asm ("ccmp w1, 1, 4, ne");
    if (w20 == 0) {
        goto label_1;
    }
    if (w1 != 0) {
        goto label_2;
    }
    w0 = *((x29 + 0x64));
    if (w0 == 0) {
        goto label_3;
    }
    w0 = *((x29 + 0x64));
    if (w0 == 1) {
        goto label_4;
    }
    w0 = *((x29 + 0x60));
    w0++;
    *((x29 + 0x60)) = w0;
    if (w20 == 0) {
        goto label_1;
    }
    w26 = w0 << 8;
    x25 = K;
    x24 = R;
    x23 = y;
    do {
        w0 = w20;
        w0 = dbg_ao (w0);
        w22 = w0;
        w0 = w20 - 1;
        x0 = (int64_t) w0;
        w0 = *(x0);
        w21 = (w0 != 5) ? 1 : 0;
        w1 = -w21;
        w1 <<= 2;
        w0 = w20;
        dbg_E (w0, w1);
        w0 = *(x25);
        w20 -= w0;
        w0 = *(x24);
        w20 += w0;
        w0 = *(x23);
        w0 = w20 + w0;
        dbg_ax (w0);
        w0 = w21 + w26;
        w0++;
        dbg_ax (w0);
        w20 = w22;
    } while (w22 != 0);
    goto label_1;
label_6:
    w0 = w20;
    dbg_ap (w0, x1);
    goto label_1;
label_7:
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
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x16f8 */
#include <stdint.h>
 
uint64_t dbg_aa (int64_t arg1, int64_t arg2) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* int aa(int s,int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    w20 = w1;
    w0 = 0xfc085;
    dbg_aw (w0);
    w1 = w20;
    w0 = w19 + 0x84;
    dbg_x (w0, w1);
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xfc085;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x1dd0 */
#include <stdint.h>
 
uint64_t dbg_ac () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int ac(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    dbg_B ();
    w1 = 0x0;
    w0 = 0x0;
    dbg_aa (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x102c */
#include <stdint.h>
 
uint64_t dbg_am () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    /* int am(); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x0 = m;
    w19 = m;
    w0 = w19;
    isalnum (w0);
    w1 = (w19 == 0x5f) ? 1 : 0;
    w0 = w1 | w0;
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12fb8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xe20 */
#include <stdint.h>
 
void isalnum () {
    x17 = *(0x13070);
    x16 = 0x13070;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x152c */
#include <stdint.h>
 
uint32_t dbg_ao (int64_t arg1) {
    x0 = arg1;
    /* int ao(int a); */
    w1 = w0 + 1;
    x1 = (int64_t) w1;
    w2 = *(x1);
    w1 = w0 + 2;
    x1 = (int64_t) w1;
    w1 = *(x1);
    w1 <<= 0x10;
    w2 = w1 | (w2 << 8);
    w1 = w0 + 3;
    x1 = (int64_t) w1;
    w1 = *(x1);
    x0 = (int64_t) w0;
    w0 = *(x0);
    w0 |= (w1 << 24);
    w0 = w2 | w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x1730 */
#include <stdint.h>
 
uint64_t dbg_aq (int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = arg1;
    /* int aq(int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    w19 = w0;
    w0 = 0xc139;
    dbg_aw (w0);
    w0 = 0x0;
    dbg_M (w0);
    w0 = 0xf;
    dbg_aw (w0);
    w0 = w19 + 0x90;
    dbg_aw (w0);
    w0 = 0xc0;
    dbg_aw (w0);
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xc0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x16c0 */
#include <stdint.h>
 
uint64_t dbg_M (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int M(int a); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w1 = w0;
    w0 = 0xb8;
    dbg_x (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xb8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x16dc */
#include <stdint.h>
 
uint64_t dbg_I (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int I(int a); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w1 = w0;
    w0 = 0xe9;
    dbg_x (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xe9;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x1774 */
#include <stdint.h>
 
void dbg_W (int64_t arg1, int64_t arg2) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = arg1;
    x1 = arg2;
    /* int W(int s,int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    w19 = w1;
    w0 += 0x83;
    dbg_aw (w0);
    x0 = (int64_t) w19;
    w1 = *(x0);
    __asm ("ccmp w1, 0, 4, le");
    if (w1 != 0x1ff) {
        goto label_0;
    }
    w19 += 4;
    x19 = (int64_t) w19;
    w1 = *(x19);
    w0 = 0x5;
    dbg_x (w0, w1);
    *(x19) = w0;
    do {
        x19 = *((sp + 0x10));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_0:
        w0 = 0x85;
        dbg_x (w0, x1);
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x1f8c */
#include <stdint.h>
 
void dbg_S (int64_t arg1) {
    int32_t h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int S(int s); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w20 = w0;
    x0 = e;
    w19 = e;
    if (w19 == 0x120) {
        goto label_2;
    }
    w0 = 0x1f8;
    __asm ("ccmp w19, w0, 4, ne");
    if (w19 == 0x160) {
        goto label_3;
    }
    if (w19 == 0x7b) {
        goto label_4;
    }
    if (w19 == 0x1c0) {
        goto label_5;
    }
    if (w19 == 0x190) {
        goto label_6;
    }
    if (w19 != 0x3b) {
        dbg_B ();
    }
label_1:
    dbg_av ();
    do {
label_0:
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_2:
        dbg_av ();
        dbg_av ();
        dbg_ac ();
        *((x29 + 0x2c)) = w0;
        dbg_av ();
        w0 = w20;
        dbg_S (w0);
        x0 = e;
        w0 = e;
        if (w0 == 0x138) {
            goto label_7;
        }
        w0 = *((x29 + 0x2c));
        dbg_H (w0);
    } while (1);
label_7:
    dbg_av ();
    w0 = 0x0;
    w0 = dbg_I (w0);
    w19 = w0;
    w0 = *((x29 + 0x2c));
    dbg_H (w0);
    w0 = w20;
    dbg_S (w0);
    w0 = w19;
    dbg_H (w0);
    goto label_0;
label_3:
    dbg_av ();
    dbg_av ();
    if (w19 == 0x160) {
        goto label_8;
    }
    x0 = e;
    w0 = e;
    if (w0 != 0x3b) {
        dbg_B ();
    }
    dbg_av ();
    x0 = v;
    w19 = v;
    *((x29 + 0x2c)) = 0;
    x0 = e;
    w0 = e;
    if (w0 != 0x3b) {
        dbg_ac ();
        *((x29 + 0x2c)) = w0;
    }
    dbg_av ();
    x0 = e;
    w0 = e;
    if (w0 == 0x29) {
        goto label_9;
    }
    w0 = 0x0;
    w0 = dbg_I (w0);
    w20 = w0;
    dbg_B ();
    x0 = v;
    w0 = v;
    w0 = w19 - w0;
    w0 -= 5;
    dbg_I (w0);
    w0 = w20;
    dbg_H (w0);
    w19 = w20 + 4;
    do {
label_9:
        dbg_av ();
        x0 = x29 + 0x2c;
        dbg_S (x0);
        x0 = v;
        w0 = v;
        w0 = w19 - w0;
        w0 -= 5;
        dbg_I (w0);
        w0 = *((x29 + 0x2c));
        dbg_H (w0);
        goto label_0;
label_8:
        x0 = v;
        w19 = v;
        dbg_ac ();
        *((x29 + 0x2c)) = w0;
    } while (1);
label_4:
    dbg_av ();
    w0 = 0x1;
    dbg_ar (w0);
    x0 = e;
    w0 = e;
    if (w0 == 0x7d) {
        goto label_10;
    }
    x19 = e;
    do {
        w0 = w20;
        dbg_S (w0);
        w0 = *(x19);
    } while (w0 != 0x7d);
label_10:
    dbg_av ();
    goto label_0;
label_5:
    dbg_av ();
    x0 = e;
    w0 = e;
    if (w0 != 0x3b) {
        dbg_B ();
    }
    x19 = *(0x120db);
    w0 = *(0x120db);
    dbg_I (w0);
    *(x19) = w0;
    goto label_1;
label_6:
    dbg_av ();
    x20 = (int64_t) w20;
    w0 = *(x20);
    dbg_I (w0);
    *(x20) = w0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x17e8 */
#include <stdint.h>
 
uint64_t dbg_ab (int64_t arg1) {
    int64_t var_50h;
    int64_t var_50h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    x0 = arg1;
    /* int ab(int s); */
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    w24 = w0;
    x0 = e;
    w21 = e;
    if (w21 != 0x22) {
        x0 = J;
        w20 = J;
        x0 = C;
        w22 = C;
        dbg_av ();
        if (w21 == 2) {
            goto label_7;
        }
        if (w20 == 2) {
            goto label_8;
        }
        if (w21 == 0x28) {
            goto label_9;
        }
        if (w21 == 0x2a) {
            goto label_10;
        }
        if (w21 == 0x26) {
            goto label_11;
        }
        x0 = e;
        w1 = e;
        w0 = (w1 == 0x3d) ? 1 : 0;
        w24 = w0 & w24;
        if (w24 != w0) {
            goto label_12;
        }
        if (w1 == 0x28) {
            goto label_13;
        }
        w1 = w21;
        w0 = 0x8;
        dbg_W (w0, w1);
        x0 = J;
        w0 = J;
        if (w0 == 0xb) {
            goto label_14;
        }
label_1:
        x0 = e;
        w0 = e;
        if (w0 != 0x28) {
            goto label_6;
        }
        w1 = 0x0;
        w0 = 0xec81;
        w0 = dbg_x (w0, w1);
        w25 = w0;
        dbg_av ();
        x0 = e;
        w0 = e;
        w24 = 0x0;
        if (w0 == 0x29) {
            goto label_15;
        }
label_2:
        w19 = 0x0;
        w23 = 0x248489;
        x20 = 0x12000;
        x22 = e;
        x20 = x22;
        goto label_16;
    }
    x0 = i;
    w2 = i;
    x1 = y;
    w0 = y;
    w0 = w2 + w0;
    dbg_M (w0);
    x0 = m;
    w0 = m;
    if (w0 == 0x22) {
        goto label_17;
    }
    x20 = i;
    x19 = m;
    do {
        dbg_an ();
        w0 = *(x20);
        w1 = w0 + 1;
        *(x20) = w1;
        x0 = (int64_t) w0;
        w1 = *(x19);
        *(x0) = w1;
        dbg_w ();
        w0 = *(x19);
    } while (w0 != 0x22);
label_17:
    x0 = i;
    x1 = *(x0);
    *(x1) = 0;
    w1 = i;
    w1 += 4;
    w1 &= 0xfffffffc;
    *(x0) = w1;
    dbg_w ();
    dbg_av ();
    do {
label_0:
        x0 = e;
        w0 = e;
        if (w0 == 0x28) {
            goto label_18;
        }
label_6:
        w0 = 0x0;
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x23 = *((sp + 0x30));
        x24 = *((sp + 0x30 + 8));
        x25 = *((sp + 0x40));
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x0;
label_7:
        w0 = w22;
        dbg_M (w0);
    } while (1);
label_8:
    w0 = 0x0;
    dbg_ab (w0);
    w1 = 0x0;
    w0 = 0xb9;
    dbg_x (w0, w1);
    if (w21 != 0x21) {
        w0 = w22;
        dbg_aw (w0);
        goto label_0;
    }
    w0 = w22;
    dbg_aq (w0);
    goto label_0;
label_9:
    dbg_B ();
    dbg_av ();
    goto label_0;
label_10:
    dbg_av ();
    x19 = e;
    w21 = e;
    dbg_av ();
    dbg_av ();
    w0 = e;
    if (w0 == 0x2a) {
        goto label_19;
    }
    dbg_av ();
    w0 = 0x0;
    dbg_ab (w0);
    x0 = e;
    w0 = e;
    if (w0 == 0x3d) {
        goto label_20;
    }
    if (w21 == 0) {
        goto label_0;
    }
    if (w21 == 0x100) {
        goto label_21;
    }
    w0 = 0xbe0f;
    dbg_aw (w0);
    do {
        x0 = v;
        w1 = v;
        w1++;
        *(x0) = w1;
        goto label_0;
label_19:
        dbg_av ();
        dbg_av ();
        dbg_av ();
        dbg_av ();
        dbg_av ();
        w0 = 0x0;
        dbg_ab (w0);
        x0 = e;
        w0 = e;
        if (w0 == 0x3d) {
            goto label_22;
        }
        w21 = 0x0;
        goto label_0;
label_20:
        dbg_av ();
        w0 = 0x50;
        x0 = dbg_aw (w0);
        dbg_B ();
        dbg_aw (w0);
        w0 = (w21 == 0x100) ? 1 : 0;
        w0 = 0x1e1;
label_4:
        dbg_aw (w0);
        goto label_0;
label_21:
        w0 = 0x8b;
        dbg_aw (w0);
    } while (1);
label_11:
    x0 = e;
    w1 = e;
    w0 = 0xa;
    x0 = dbg_W (w0, w1);
    dbg_av ();
    goto label_0;
label_12:
    dbg_av ();
    dbg_B ();
    w1 = w21;
    w0 = 0x6;
    dbg_W (w0, w1);
    goto label_1;
label_14:
    w1 = w21;
    w0 = 0x0;
    dbg_W (w0, w1);
    x0 = C;
    w0 = C;
    x0 = dbg_aw (w0);
    dbg_av ();
    goto label_1;
label_18:
    w0 = 0x50;
    dbg_aw (w0);
    w1 = 0x0;
    w0 = 0xec81;
    w0 = dbg_x (w0, w1);
    w25 = w0;
    dbg_av ();
    x0 = e;
    w0 = e;
    if (w0 == 0x29) {
        goto label_23;
    }
    w24 = 0x1;
    goto label_2;
    do {
label_3:
        w19 += 4;
        w1 = *(x20);
        if (w1 == 0x29) {
            goto label_24;
        }
label_16:
        dbg_B ();
        w1 = w19;
        w0 = w23;
        dbg_x (w0, w1);
        w1 = *(x22);
    } while (w1 != 0x2c);
    dbg_av ();
    goto label_3;
label_24:
    w1 = w19;
    w0 = w25;
    x0 = dbg_E (w0, w1);
    dbg_av ();
    if (w24 != 0) {
        goto label_25;
    }
label_5:
    w21 += 4;
    x21 = (int64_t) w21;
    w1 = *(x21);
    w0 = 0xe8;
    dbg_x (w0, w1);
    *(x21) = w0;
    goto label_26;
label_22:
    dbg_av ();
    w0 = 0x50;
    x0 = dbg_aw (w0);
    dbg_B ();
    w0 = 0x59;
    dbg_aw (w0);
    w21 = 0x0;
    w0 = 0x188;
    goto label_4;
label_13:
    w1 = 0x0;
    w0 = 0xec81;
    w0 = dbg_x (w0, w1);
    w25 = w0;
    dbg_av ();
    x0 = e;
    w0 = e;
    if (w0 != 0x29) {
        goto label_2;
    }
    w1 = 0x0;
    w0 = w25;
    x0 = dbg_E (w0, w1);
    dbg_av ();
    w19 = w24;
    goto label_5;
label_15:
    w1 = 0x0;
    w0 = w25;
    x0 = dbg_E (w0, w1);
    dbg_av ();
    w19 = 0x0;
    goto label_5;
label_23:
    w1 = 0x0;
    w0 = w25;
    x0 = dbg_E (w0, w1);
    dbg_av ();
    w19 = 0x0;
label_25:
    w1 = w19;
    w0 = 0x2494ff;
    dbg_x (w0, x1);
    w19 += 4;
    if (w19 == 0) {
label_26:
        goto label_6;
    }
    w1 = w19;
    w0 = 0xc481;
    dbg_x (w0, w1);
    goto label_6;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x2210 */
#include <stdint.h>
 
void dbg_ad (int64_t arg1, int64_t arg2) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* int ad(int d,int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    w20 = w1;
    dbg_ax (x0);
    w0 = 0x8048000;
    w19 += w0;
    w0 = w19;
    dbg_ax (w0);
    w0 = w19;
    dbg_ax (w0);
    w0 = w20;
    dbg_ax (w0);
    w0 = w20;
    dbg_ax (w0);
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0x1064 */
#include <stdint.h>
 
void dbg_an () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int an(); */
    x0 = m;
    w0 = m;
    if (w0 != 0x5c) {
        return;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    dbg_w ();
    x0 = m;
    w0 = m;
    while (1) {
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
        w1 = 0xa;
        x0 = m;
        *(x0) = w1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xd08 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xd40 */
#include <stdint.h>
 
void memcpy () {
    x16 = 0x13000;
    x17 = *(0x13000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xd60 */
#include <stdint.h>
 
void fclose () {
    x17 = *(0x13010);
    x16 = 0x13010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xd80 */
#include <stdint.h>
 
void isspace () {
    x17 = *(0x13020);
    x16 = 0x13020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xdd0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x13048);
    x16 = 0x13048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xdf0 */
#include <stdint.h>
 
void strtol () {
    x17 = *(0x13058);
    x16 = 0x13058;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xe00 */
#include <stdint.h>
 
void fwrite () {
    x17 = *(0x13060);
    x16 = 0x13060;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xe10 */
#include <stdint.h>
 
void strstr () {
    x17 = *(0x13068);
    x16 = 0x13068;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O1/subject.exe @ 0xd20 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 272 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x12ff8;
    return uint64_t (*x17)() ();
}

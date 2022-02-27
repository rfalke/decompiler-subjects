/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xfe0 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xdd0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x13028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xe80 */
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
    if (w0 > 2) {
        goto label_0;
    }
    x0 = "usage: otccelf file.c outfile";
    puts ("usage: otccelf file.c outfile");
    do {
        w0 = 0x0;
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x0;
label_0:
        w19 = w1;
        x1 = 0x1869f;
        calloc (x0, x1);
        x1 = Q;
        *(x1) = w0;
        x1 = " int if else while break return for define main ";
        x0 = (int64_t) w0;
        x0 = strcpy (x0, " int if else while break return for define main ");
        x0 = 0x31;
        x1 = D;
        *(x1) = w0;
        x1 = 0x1869f;
        x0 = 0x1;
        calloc (x0, x1);
        x21 = i;
        x22 = G;
        x1 = 0x1869f;
        *(x21) = w0;
        *(x22) = w0;
        x0 = 0x1;
        calloc (w0, x1);
        x20 = v;
        x1 = K;
        *(x20) = w0;
        *(x1) = w0;
        x1 = 0x1869f;
        x0 = 0x1;
        calloc (x0, x1);
        x1 = T;
        *(x1) = w0;
        w0 = w19 + 4;
        w19 += 8;
        x0 = (int64_t) w0;
        x1 = 0x27f7;
        x19 = (int64_t) w19;
        x0 = *(x0);
        fopen (x0, x1);
        x1 = ak;
        *(x1) = w0;
        w0 = G;
        w1 = 0x8048000;
        w1 -= w0;
        x0 = y;
        *(x0) = w1;
        w0 = Z;
        *(x21) = w0;
        w0 = 0x12f71;
        *(x20) = w0;
        w ();
        dbg_av ();
        w0 = 0x0;
        dbg_ar (w0);
        w0 = *(x19);
        dbg_au (w0);
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xe20 */
#include <stdint.h>
 
void puts () {
    x17 = .plt;
    x16 = 0x13050;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xdf0 */
#include <stdint.h>
 
void calloc () {
    x17 = .plt;
    x16 = 0x13038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xe50 */
#include <stdint.h>
 
void strcpy () {
    x17 = .plt;
    x16 = 0x13068;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xdb0 */
#include <stdint.h>
 
void fopen () {
    x17 = .plt;
    x16 = 0x13018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1148 */
#include <stdint.h>
 
void w () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    x0 = V;
    w1 = V;
    *((sp + 0x10)) = x19;
    x19 = 0x12000;
    if (w1 == 0) {
        goto label_0;
    }
    w2 = w1 + 1;
    x1 = (int64_t) w1;
    *(x0) = w2;
    x19 = *((x19 + 0xfb8));
    w1 = *(x1);
    *(x19) = w1;
    if (w1 != 2) {
        goto label_1;
    }
    *(x0) = 0;
    x0 = *(0x1200e);
    w0 = *(0x1200e);
    do {
        *(x19) = w0;
label_1:
        x19 = *((sp + 0x10));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_0:
        x0 = ak;
        x0 = *(x0);
        fgetc (x0);
        x19 = *((x19 + 0xfb8));
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xde0 */
#include <stdint.h>
 
void fgetc () {
    x17 = .plt;
    x16 = 0x13030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x123c */
#include <stdint.h>
 
void dbg_av () {
    int64_t var_50h;
    int64_t var_50h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    /* int av(); */
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x12000;
    x19 = 0x12000;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x21 = m;
    x22 = e;
    *((sp + 0x40)) = x25;
label_3:
    x23 = *((x20 + 0xfb8));
    do {
        w24 = *(x21);
        w0 = w24;
        isspace (w0);
        w1 = (w24 == 0x23) ? 1 : 0;
        w0 = w1 | w0;
        if (w0 == 0) {
            x4 = 0x12000;
            x25 = *((x19 + 0xfa8));
            x23 = J;
            *(x25) = w24;
            *(x23) = 0;
            w0 = dbg_am ();
            if (w0 == 0) {
                goto label_7;
            }
            w0 = 0x20;
            x24 = 0x12000;
            x23 = 0x12000;
            dbg_L (x0);
            x25 = *((x20 + 0xfb8));
            x1 = D;
            x0 = Z;
            w1 = D;
            *(x0) = w1;
label_1:
            w0 = dbg_am ();
            if (w0 != 0) {
                goto label_8;
            }
            x25 = *((x19 + 0xfa8));
            w0 = *(x25);
            w0 -= 0x30;
            if (w0 > 9) {
                goto label_9;
            }
            x23 = *((x23 + 0xf58));
            w1 = 0x0;
            w2 = 0x0;
            w0 = *(x23);
            strtol (w0, w1, w2);
            x1 = C;
            *(x1) = w0;
            w0 = 0x2;
            *(x25) = w0;
label_2:
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
        if (w0 == 9) {
            w ();
            dbg_av ();
            w0 = *(x22);
            if (w0 == 0x218) {
                dbg_av ();
                w0 = 0x20;
                dbg_L (w0);
                x0 = *(x22);
                w1 = 0x1;
                *(x0) = w1;
                x0 = D;
                w1 = D;
                w0 = *(x22);
                w0 += 4;
                x0 = (int64_t) w0;
                *(x0) = w1;
            }
label_0:
            w0 = *(x23);
            if (w0 != 0xa) {
                goto label_10;
            }
            dbg_L (x0);
            w0 = 0x2;
            x0 = dbg_L (w0);
        }
        w ();
    } while (1);
label_10:
    x0 = dbg_L (x0);
    w ();
    goto label_0;
label_8:
    w0 = *(x25);
    x0 = dbg_L (w0);
    w ();
    goto label_1;
label_9:
    x24 = *((x24 + 0xf20));
    w1 = 0x20;
    x23 = *((x23 + 0xf58));
    x0 = *(x24);
    *(x0) = w1;
    w1 = *(x23);
    x0 = Q;
    w1--;
    x1 = (int64_t) w1;
    x23 = *(x0);
    x0 = x23;
    x0 = strstr (x0, x1);
    x0 -= x23;
    *(x25) = w0;
    x0 = *(x24);
    *(x0) = 0;
    w0 = *(x25);
    w0 += 0x20;
    w0 <<= 3;
    *(x25) = w0;
    __asm ("b.le 0x1308");
    goto label_2;
    x1 = T;
    w1 = T;
    w0 += w1;
    *(x25) = w0;
    x1 = (int64_t) w0;
    w1 = T;
    if (w1 != 1) {
        goto label_2;
    }
    w0 += 4;
    x0 = (int64_t) w0;
    w1 = *(x0);
    x0 = V;
    *(x0) = w1;
    x0 = *((x20 + 0xfb8));
    w1 = V;
    x0 = *(0x1200e);
    *(x0) = w1;
    do {
        w ();
        goto label_3;
label_7:
        w ();
        w6 = *(x25);
        if (w6 == 0x27) {
            w0 = 0x2;
            *(x25) = w0;
            an ();
            w1 = *(x21);
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
            x29 = *(sp);
            x30 = *((sp + 8));
            void (*0x1148)() ();
        }
        w7 = *(x21);
        w0 = 0x2a;
        __asm ("ccmp w7, w0, 0, eq");
        if (w6 != 0x2f) {
            goto label_11;
        }
        w ();
        x24 = *((x20 + 0xfb8));
        x23 = x24;
label_4:
        w0 = *(x24);
        if (w0 != 0) {
            goto label_12;
        }
    } while (1);
    do {
        w ();
label_12:
        w0 = *(x23);
    } while (w0 != 0x2a);
    w ();
    w0 = *(x23);
    if (w0 != 0x2f) {
        goto label_4;
    }
    *(x23) = 0;
    goto label_4;
label_11:
    x0 = "++#m--%am*@R<^1c/@%[_[H3c%@%[_[H3c+@.B#d-@%:_^BKd<<Z/03e>>`/03e<=0f>=/f<@.f>@1f==&g!='g&&k||#l&@.BCh^@.BSi|@.B+j~@/%Yd!@&d*@b";
    x4 = x23;
    x3 = C;
    x10 = x3;
label_5:
    x2 = (int64_t) w0;
    w1 = w0 + 1;
    w9 = *(x2);
    if (w9 == 0) {
        goto label_2;
    }
    x1 = (int64_t) w1;
    w0 += 3;
    x5 = (int64_t) w0;
    w8 = *(x1);
    *(x3) = 0;
label_6:
    w1 = *((x5 - 1));
    w0 = w5;
    x5++;
    w1 -= 0x62;
    *(x4) = w1;
    if ((w1 & 0x1f) != 0) {
        goto label_13;
    }
    __asm ("ccmp w7, w8, 4, ne");
    __asm ("ccmp w6, w9, 0, eq");
    if (w8 != 0x40) {
        goto label_5;
    }
    if (w7 != w8) {
        goto label_2;
    }
    w ();
    x19 = *((x19 + 0xfa8));
    w0 = 0x1;
    *(x19) = w0;
    goto label_2;
label_13:
    w2 = *(x10);
    w1 += (w2 << 6);
    w1 += 0x40;
    *(x10) = w1;
    goto label_6;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xdc0 */
#include <stdint.h>
 
void isspace () {
    x17 = .plt;
    x16 = 0x13020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x11c0 */
#include <stdint.h>
 
uint64_t dbg_am () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    /* int am(); */
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
    return 0x12fb8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xe70 */
#include <stdint.h>
 
void isalnum () {
    x17 = .plt;
    x16 = 0x13078;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1128 */
#include <stdint.h>
 
uint32_t dbg_L (int64_t arg1) {
    x0 = arg1;
    /* int L(int a); */
    x2 = D;
    w1 = D;
    w3 = w1 + 1;
    x1 = (int64_t) w1;
    *(x2) = w3;
    *(x1) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xe30 */
#include <stdint.h>
 
void strtol () {
    x17 = .plt;
    x16 = 0x13058;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xe60 */
#include <stdint.h>
 
void strstr () {
    x17 = .plt;
    x16 = 0x13070;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x11f8 */
#include <stdint.h>
 
void an () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = m;
    w0 = m;
    if (w0 == 0x5c) {
        w ();
        w0 = *(x19);
        if (w0 != 0x6e) {
            goto label_0;
        }
        w0 = 0xa;
        *(x19) = w0;
    }
label_0:
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1cbc */
#include <stdint.h>
 
void dbg_ar (int64_t arg1) {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    /* int ar(int s); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    w22 = w0;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x21 = i;
    w23 = 0xe58955;
    do {
label_3:
        x19 = 0x12000;
        w1 = 0x100;
        x20 = e;
        w0 = e;
        __asm ("ccmn w0, 1, 4, eq");
        __asm ("ccmp w0, w1, 4, eq");
        if (w22 != 0) {
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
        if (w0 != 0x100) {
            goto label_5;
        }
        dbg_av ();
        x20 = P;
label_1:
        x24 = *((x19 + 0xfa8));
label_0:
        w0 = *(x24);
        if (w0 != 0x3b) {
            goto label_6;
        }
        dbg_av ();
    } while (1);
label_6:
    x0 = (int64_t) w0;
    if (w22 == 0) {
        goto label_7;
    }
    w2 = *(x20);
    w1 = w2 + 4;
    *(x20) = w1;
    w1 = 0x3;
    w1 -= w2;
    *(x0) = w1;
label_2:
    dbg_av ();
    x0 = *((x19 + 0xfa8));
    w0 = *(x0);
    if (w0 != 0x2c) {
        goto label_0;
    }
    dbg_av ();
    goto label_1;
label_7:
    w1 = *(x21);
    *(x0) = w1;
    w0 = *(x21);
    w0 += 4;
    *(x21) = w0;
    goto label_2;
label_5:
    x0 = (int64_t) w0;
    w19 = 0x8;
    x1 = v;
    w1 = v;
    *(x0) = w1;
    dbg_av ();
    dbg_av ();
    do {
label_4:
        w0 = *(x20);
        if (w0 == 0x29) {
            dbg_av ();
            w0 = w23;
            x19 = P;
            x20 = U;
            *(x19) = 0;
            *(x20) = 0;
            dbg_aw (x0);
            w1 = 0x0;
            w0 = 0xec81;
            w0 = dbg_x (w0, w1);
            w24 = w0;
            w0 = 0x0;
            dbg_S (w0);
            w0 = U;
            dbg_H (w0);
            w0 = 0xc3c9;
            dbg_aw (w0);
            w1 = P;
            w0 = w24;
            dbg_E (w0, w1);
            goto label_3;
        }
        x0 = (int64_t) w0;
        *(x0) = w19;
        w19 += 4;
        dbg_av ();
        w0 = *(x20);
    } while (w0 != 0x2c);
    dbg_av ();
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x158c */
#include <stdint.h>
 
void dbg_aw (int64_t arg1) {
    x0 = arg1;
    /* int aw(int d); */
    x1 = v;
    do {
        w2 = w0 + 1;
        if (w2 <= 1) {
            return;
        }
        w2 = *(x1);
        w3 = w2 + 1;
        x2 = (int64_t) w2;
        *(x1) = w3;
        *(x2) = w0;
        w0 >>= 8;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1710 */
#include <stdint.h>
 
uint64_t dbg_x (int64_t arg1, int64_t arg2) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* int x(int d,int a); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w5 = w1;
    x29 = sp;
    dbg_aw (x0);
    w1 = w5;
    x4 = v;
    w0 = v;
    dbg_E (w0, x1);
    w0 = v;
    w1 = w0 + 4;
    *(x4) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12f60;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x15c0 */
#include <stdint.h>
 
void dbg_E (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    /* int E(int a,int d); */
    x2 = (int64_t) w0;
    w3 = w1 >> 8;
    *(x2) = w1;
    w2 = w0 + 1;
    x2 = (int64_t) w2;
    *(x2) = w3;
    w2 = w0 + 2;
    w0 += 3;
    w3 = w1 >> 0x10;
    x2 = (int64_t) w2;
    w1 >>= 0x18;
    x0 = (int64_t) w0;
    *(x2) = w3;
    *(x0) = w1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1e44 */
#include <stdint.h>
 
void dbg_S (int64_t arg1) {
    int32_t h;
    int64_t var_4ch;
    int64_t var_50h;
    int64_t var_50h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    x0 = arg1;
    /* int S(int s); */
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x22 = 0x12000;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = (int64_t) w0;
    x21 = e;
    w19 = e;
    *((sp + 0x30)) = x23;
    if (w19 != 0x120) {
        goto label_3;
    }
    dbg_av ();
    dbg_av ();
    dbg_ac ();
    *((x29 + 0x4c)) = w0;
    dbg_av ();
    w0 = w20;
    dbg_S (w0);
    w0 = *(x21);
    if (w0 != 0x138) {
        goto label_4;
    }
    dbg_av ();
    w0 = 0x0;
    w0 = dbg_I (w0);
    w19 = w0;
    w0 = *((x29 + 0x4c));
    dbg_H (w0);
    w0 = w20;
    dbg_S (w0);
    w0 = w19;
    do {
        dbg_H (w0);
label_1:
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x23 = *((sp + 0x30));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_3:
        w0 = 0x1f8;
        __asm ("ccmp w19, w0, 4, ne");
        if (w19 != 0x160) {
            goto label_5;
        }
        dbg_av ();
        x23 = 0x12000;
        dbg_av ();
        if (w19 != 0x160) {
            goto label_6;
        }
        x0 = *((x23 + 0xf60));
        w20 = *(x0);
        dbg_ac ();
        *((x29 + 0x4c)) = w0;
label_0:
        dbg_av ();
        x0 = x29 + 0x4c;
        dbg_S (x0);
        x1 = *((x23 + 0xf60));
        w0 = *(x1);
        w0 = w20 - w0;
        w0 -= 5;
        dbg_I (w0);
label_4:
        w0 = *((x29 + 0x4c));
    } while (1);
label_6:
    w0 = *(x21);
    if (w0 != 0x3b) {
        dbg_B ();
    }
    dbg_av ();
    *((x29 + 0x4c)) = 0;
    x0 = *((x23 + 0xf60));
    w20 = *(x0);
    x0 = *((x22 + 0xfa8));
    w0 = *(x0);
    if (w0 != 0x3b) {
        dbg_ac ();
        *((x29 + 0x4c)) = w0;
    }
    dbg_av ();
    x22 = *((x22 + 0xfa8));
    w0 = *(x22);
    if (w0 == 0x29) {
        goto label_0;
    }
    w0 = 0x0;
    w0 = dbg_I (w0);
    w19 = w0;
    dbg_B ();
    x0 = *((x23 + 0xf60));
    w0 = *(x0);
    w0 = w20 - w0;
    w20 = w19 + 4;
    w0 -= 5;
    dbg_I (w0);
    w0 = w19;
    dbg_H (w0);
    goto label_0;
label_5:
    if (w19 != 0x7b) {
        goto label_7;
    }
    dbg_av ();
    w0 = 0x1;
    dbg_ar (w0);
    do {
        w0 = *(x21);
        if (w0 == 0x7d) {
label_2:
            dbg_av ();
            goto label_1;
        }
        w0 = w20;
        dbg_S (w0);
    } while (1);
label_7:
    if (w19 == 0x1c0) {
        dbg_av ();
        w0 = *(x21);
        if (w0 != 0x3b) {
            dbg_B ();
        }
        x6 = U;
        w0 = U;
        dbg_I (w0);
        *(x6) = w0;
        goto label_2;
    }
    if (w19 == 0x190) {
        dbg_av ();
        w0 = *(x20);
        dbg_I (w0);
        *(x20) = w0;
        goto label_2;
    }
    if (w19 == 0x3b) {
        goto label_2;
    }
    dbg_B ();
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1ca0 */
#include <stdint.h>
 
void dbg_ac () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int ac(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    dbg_B ();
    x29 = *(sp);
    x30 = *((sp + 8));
    w1 = 0x0;
    w0 = 0x0;
    return void (*0x1760)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1754 */
#include <stdint.h>
 
void dbg_I (int64_t arg1) {
    x0 = arg1;
    /* int I(int a); */
    w1 = w0;
    w0 = 0xe9;
    return void (*0x1710)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1700 */
#include <stdint.h>
 
void dbg_H (int64_t arg1) {
    x0 = arg1;
    /* int H(int a); */
    x1 = v;
    w1 = v;
    return void (*0x163c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x15fc */
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
    x0 = (int64_t) w0;
    x1 = (int64_t) w1;
    w0 = *(x0);
    w1 = *(x1);
    w0 |= (w1 << 24);
    w0 = w2 | w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1818 */
#include <stdint.h>
 
void dbg_B () {
    /* int B(); */
    w0 = 0xb;
    return void (*0x1b68)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x2298 */
#include <stdint.h>
 
void dbg_au (int64_t arg1) {
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
    /* int au(int F); */
    *((sp + -0x70)) = x29;
    *((sp + -0x70 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = 0x12000;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x21 = 0x12000;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x24 = i;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    w25 = w0;
    x0 = R;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    x27 = 0x12000;
    w1 = i;
    x4 = v;
    *(x0) = w1;
    x0 = K;
    w23 = v;
    w0 = K;
    *(x4) = w0;
    w23 -= w0;
    w0 = 0x505458;
    dbg_aw (w0);
    w0 = 0x13180;
    x0 = (int64_t) w0;
    w1 = T;
    w0 = v;
    w1 -= w0;
    w0 = 0xe8;
    w1 -= 5;
    dbg_x (w0, w1);
    w0 = 0xc389;
    dbg_aw (w0);
    w0 = 0x1;
    dbg_M (w0);
    w0 = 0x80cd;
    dbg_aw (w0);
    w22 = i;
    w22 = w23 + w22;
    x1 = "libc.so.6";
    w0 = w22 + 1;
    x0 = (int64_t) w0;
    x0 = strcpy (w0, x1);
    x1 = "libdl.so.2";
    x0 = (int64_t) w0;
    x0 = strcpy (x0, "libdl.so.2");
    x0 = 0x12f45;
    *(x24) = w0;
    w0 = 0x0;
    dbg_ae (w0);
    w20 = i;
    w0 = 0x0;
    w26 = w20 - w22;
    w20 += 3;
    w20 &= 0xfffffffc;
    *(x24) = w20;
    dbg_ax (x0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x1;
    dbg_ae (w0);
    w24 = i;
    w0 = 0x10;
    w5 = w24 - w20;
    w5 /= w0;
    w0 = 0x1;
    dbg_ax (w0);
    w0 = w5;
    dbg_ax (w0);
    w0 = 0x1;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x2;
    do {
        if (w0 >= w5) {
            w0 = 0x0;
            dbg_ax (w0);
            x19 = *((x19 + 0xfb0));
            w0 = 0x2;
            w28 = *(x19);
            dbg_ae (x0);
            x3 = *((x21 + 0xf48));
            x2 = (int64_t) w23;
            x27 = *((x27 + 0xf90));
            *((x29 + 0x68)) = x3;
            x0 = *(x3);
            x1 = *(x27);
            memcpy (x0, x1, x2);
            w27 = *(x19);
            x21 = G;
            w0 = G;
            *(x19) = w0;
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
            x23 = y;
            x3 = *((x29 + 0x68));
            w0 = y;
            w1 = *(x3);
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
            w0 = 0x0;
            w1 = w27 - w1;
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
            x0 = *(x19);
            x1 = "/lib/ld-linux.so.2";
            x0 = strcpy (x0, x1);
            x0 = 0x12014;
            *(x19) = w0;
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
            w0 = w24 + w0;
            dbg_ax (w0);
            w0 = 0x6;
            dbg_ax (w0);
            w0 = y;
            w0 = w20 + w0;
            dbg_ax (w0);
            w0 = 0x5;
            dbg_ax (w0);
            w0 = y;
            w0 = w22 + w0;
            dbg_ax (w0);
            w0 = 0xa;
            dbg_ax (w0);
            w0 = w26;
            dbg_ax (w0);
            w0 = 0xb;
            dbg_ax (w0);
            w0 = 0x10;
            dbg_ax (w0);
            w0 = 0x11;
            dbg_ax (w0);
            w0 = y;
            w0 = w28 + w0;
            dbg_ax (w0);
            w0 = 0x12;
            dbg_ax (w0);
            w0 = w27 - w28;
            dbg_ax (w0);
            w0 = 0x13;
            dbg_ax (w0);
            w0 = 0x8;
            dbg_ax (w0);
            w0 = 0x0;
            dbg_ax (w0);
            w0 = 0x0;
            dbg_ax (w0);
            x0 = (int64_t) w25;
            x1 = 0x27a6;
            w0 = fopen (x0, x1);
            x19 = (int64_t) w0;
            w4 = G;
            x3 = x19;
            x1 = 0x1;
            w2 = w27 - w4;
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
            void (*0xda0)() ();
        }
        w6 = w0 + 1;
        dbg_ax (x0);
        w0 = w6;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1748 */
#include <stdint.h>
 
void dbg_M (int64_t arg1) {
    x0 = arg1;
    /* int M(int a); */
    w1 = w0;
    w0 = 0xb8;
    return void (*0x1710)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x20b8 */
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
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x21 = 0x12000;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    w22 = w0;
    x0 = Q;
    x23 = D;
    x24 = T;
    x25 = e;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = 0x0;
    w20 = Q;
    *((sp + 0x50)) = x27;
label_1:
    w26 = w20 + 1;
    w2 = *(x23);
    x0 = (int64_t) w26;
    x3 = x0;
label_0:
    w1 = *(x0);
    w20 = w0;
    while (w0 >= w2) {
        if (w20 != w2) {
            goto label_2;
        }
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
    }
    x0++;
    goto label_0;
label_2:
    x0 = *((x21 + 0xfa0));
    w1 = *(x24);
    w0 = *(x0);
    w0 = w26 - w0;
    w0 = w1 + (w0 << 3);
    w2 = w0 + 0xf8;
    w0 += 0xfc;
    *(x25) = w2;
    x0 = (int64_t) w0;
    x2 = (int64_t) w2;
    w4 = *(x0);
    w1 = *(x2);
    __asm ("ccmp w1, 1, 4, ne");
    if (w4 == 0) {
        goto label_1;
    }
    if (w1 != 0) {
        goto label_3;
    }
    if (w22 == 0) {
        w2 = w20 - w26;
        x1 = x3;
        x2 = (int64_t) w2;
        x27 = i;
        x0 = *(x27);
        memcpy (x0, x1, x2);
        w0 = i;
        w0 = w20 + w0;
        w0 -= w26;
        w0++;
        *(x27) = w0;
        goto label_1;
    }
    if (w22 == 1) {
        w0 = w19 + 0x16;
        w19 = w20 + w19;
        dbg_ax (x0);
        w0 = 0x0;
        dbg_ax (w0);
        w0 = 0x0;
        dbg_ax (w0);
        w0 = 0x10;
        dbg_ax (w0);
        w0 = w19 - w26;
        w19 = w0 + 1;
        goto label_1;
    }
    w19++;
    w11 = 0x3;
    x8 = K;
    x7 = R;
    w10 = w19 << 8;
    x6 = y;
    do {
        w0 = w4;
        w0 = dbg_ao (w0);
        w9 = w0;
        w0 = w4 - 1;
        x0 = (int64_t) w0;
        w0 = *(x0);
        w0 = w4;
        w5 = (w0 != 5) ? 1 : 0;
        w1 = w5 * w11;
        dbg_E (x0, w1);
        w0 = *(x8);
        w4 -= w0;
        w0 = *(x7);
        w4 += w0;
        w0 = *(x6);
        w0 = w4 + w0;
        dbg_ax (w0);
        w0 = w5 + w10;
        w0++;
        dbg_ax (w0);
        w4 = w9;
    } while (w9 != 0);
    goto label_1;
    if (w22 != 0) {
label_3:
        goto label_1;
    }
    w0 = w4;
    dbg_ap (w0, x1);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x2044 */
#include <stdint.h>
 
void dbg_ax (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int ax(int d); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w1 = w0;
    x29 = sp;
    x4 = i;
    w0 = i;
    dbg_E (w0, x1);
    w0 = i;
    w0 += 4;
    *(x4) = w0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xd80 */
#include <stdint.h>
 
void memcpy () {
    x16 = 0x13000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x2074 */
#include <stdint.h>
 
void dbg_ad (int64_t arg1, int64_t arg2) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* int ad(int d,int a); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w6 = w1;
    w5 = w0;
    x29 = sp;
    dbg_ax (x0);
    w0 = 0x8048000;
    w5 += w0;
    w0 = w5;
    dbg_ax (w0);
    w0 = w5;
    dbg_ax (w0);
    w0 = w6;
    dbg_ax (w0);
    w0 = w6;
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x2044)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xe40 */
#include <stdint.h>
 
void fwrite () {
    x17 = .plt;
    x16 = 0x13060;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x26e8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x2670 */
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
    x21 = .init_array;
    x20 = 0x12d08;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1018 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0xe00)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1030 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x13090;
    x0 = 0x13090;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1068 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x13090;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x13090;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x10a8 */
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
    w0 = *((x19 + 0x90));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x13088);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x90)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xd90 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x13000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x10f0 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x1068)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x1068)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1b68 */
#include <stdint.h>
 
void dbg_X (uint32_t arg1) {
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    x0 = arg1;
    /* int X(int s); */
    if (w0 == 1) {
        void (*0x1820)() ();
    }
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0 - 1;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w0 = w19;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    dbg_X (x0);
    x22 = J;
    w21 = 0x0;
    x23 = e;
    x24 = C;
    do {
label_0:
        w0 = *(x22);
        if (w19 != w0) {
            __asm ("ccmp w19, 8, 4, ne");
            __asm ("b.le 0x1c88");
            w1 = w21;
            w0 = w20;
            w0 = dbg_aa (w0, w1);
            w6 = w0;
            w0 = w20 ^ 1;
            dbg_M (w0);
            w0 = 0x5;
            dbg_I (w0);
            w0 = w6;
            dbg_H (w0);
            x25 = *((sp + 0x40));
            w0 = w20;
            x21 = *((sp + 0x20));
            x22 = *((sp + 0x20 + 8));
            x19 = *((sp + 0x10));
            x20 = *((sp + 0x10 + 8));
            x23 = *((sp + 0x30));
            x24 = *((sp + 0x30 + 8));
            x29 = *(sp);
            x30 = *((sp + 8));
            void (*0x1748)() ();
        }
        w25 = *(x23);
        w20 = *(x24);
        dbg_av ();
        __asm ("b.le 0x1c40");
        w1 = w21;
        w0 = w20;
        w0 = dbg_aa (w0, w1);
        w21 = w0;
        w0 = w19;
        dbg_X (w0);
    } while (1);
    w0 = 0x50;
    dbg_aw (w0);
    w0 = w19;
    dbg_X (w0);
    w0 = 0x59;
    dbg_aw (w0);
    w0 = w19 - 4;
    w0 = w20;
    if (w0 <= 1) {
        dbg_aq (x0);
        goto label_0;
    }
    dbg_aw (x0);
    if (w25 != 0x25) {
        goto label_0;
    }
    w0 = 0x92;
    dbg_aw (w0);
    goto label_0;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x26ec */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1760 */
#include <stdint.h>
 
void dbg_aa (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    /* int aa(int s,int a); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w4 = w0;
    w5 = w1;
    x29 = sp;
    w0 = 0xfc085;
    dbg_aw (w0);
    w1 = w5;
    x29 = *(sp);
    x30 = *((sp + 8));
    w0 = w4 + 0x84;
    return void (*0x1710)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x178c */
#include <stdint.h>
 
void dbg_aq (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int aq(int a); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w6 = w0;
    w0 = 0xc139;
    x29 = sp;
    dbg_aw (x0);
    w0 = 0x0;
    dbg_M (w0);
    w0 = 0xf;
    dbg_aw (w0);
    w0 = w6 + 0x90;
    dbg_aw (w0);
    x29 = *(sp);
    x30 = *((sp + 8));
    w0 = 0xc0;
    return void (*0x158c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x17c4 */
#include <stdint.h>
 
uint64_t W (int64_t arg1, int64_t arg2) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w6 = w1;
    w0 += 0x83;
    x29 = sp;
    dbg_aw (x0);
    x0 = (int64_t) w6;
    w1 = *(x0);
    __asm ("ccmp w1, 0, 4, le");
    if (w1 != 0x1ff) {
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 = 0x85;
        void (*0x1710)() ();
    }
    w6 += 4;
    w0 = 0x5;
    x6 = (int64_t) w6;
    w1 = *(x6);
    dbg_x (x0, w1);
    *(x6) = w0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x1820 */
#include <stdint.h>
 
void dbg_ab (int64_t arg1) {
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
    x22 = 0x12000;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x21 = e;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    w19 = e;
    if (w19 != 0x22) {
        goto label_5;
    }
    x20 = 0x12000;
    x21 = i;
    x1 = y;
    w2 = i;
    w0 = y;
    w0 = w2 + w0;
    dbg_M (w0);
    x23 = m;
    do {
        w0 = *(x23);
        if (w0 == 0x22) {
            x0 = *((x20 + 0xfb0));
            x1 = *(x0);
            *(x1) = 0;
            w1 = *(x0);
            w1 += 4;
            w1 &= 0xfffffffc;
            *(x0) = w1;
            w ();
label_0:
            dbg_av ();
            goto label_1;
        }
        an ();
        w0 = *(x21);
        w1 = w0 + 1;
        x0 = (int64_t) w0;
        *(x21) = w1;
        w1 = *(x23);
        *(x0) = w1;
        w ();
    } while (1);
label_5:
    w20 = w0;
    x24 = J;
    x23 = C;
    w26 = J;
    w25 = C;
    dbg_av ();
    if (w19 != 2) {
        goto label_6;
    }
    w0 = w25;
    dbg_M (w0);
    do {
label_1:
        w20 = 0x1;
label_2:
        x0 = *((x22 + 0xfa8));
        w0 = *(x0);
        if (w0 != 0x28) {
            goto label_7;
        }
        if (w20 != 0) {
            w0 = 0x50;
            dbg_aw (w0);
        }
        w1 = 0x0;
        w0 = 0xec81;
        w21 = 0x0;
        w0 = dbg_x (x0, x1);
        w23 = w0;
        dbg_av ();
        x22 = *((x22 + 0xfa8));
        w24 = 0x248489;
label_3:
        w0 = *(x22);
        if (w0 != 0x29) {
            goto label_8;
        }
        w1 = w21;
        w0 = w23;
        x0 = dbg_E (w0, w1);
        dbg_av ();
        if (w20 == 0) {
            goto label_9;
        }
        w1 = w21;
        w21 += 4;
        w0 = 0x2494ff;
        dbg_x (w0, x1);
label_4:
        w1 = w21;
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
        void (*0x1710)() ();
label_6:
        if (w26 != 2) {
            goto label_10;
        }
        w0 = 0x0;
        dbg_ab (w0);
        w1 = 0x0;
        w0 = 0xb9;
        dbg_x (w0, w1);
        w0 = w25;
        if (w19 != 0x21) {
            goto label_11;
        }
        dbg_aq (x0);
    } while (1);
label_10:
    if (w19 == 0x28) {
        dbg_B ();
        goto label_0;
    }
    if (w19 != 0x2a) {
        goto label_12;
    }
    dbg_av ();
    w19 = *(x21);
    dbg_av ();
    dbg_av ();
    w0 = *(x21);
    if (w0 == 0x2a) {
        dbg_av ();
        w19 = 0x0;
        dbg_av ();
        dbg_av ();
        dbg_av ();
    }
    dbg_av ();
    w0 = 0x0;
    dbg_ab (w0);
    x0 = *((x22 + 0xfa8));
    w0 = *(x0);
    if (w0 == 0x3d) {
        dbg_av ();
        w0 = 0x50;
        x0 = dbg_aw (w0);
        dbg_B ();
        dbg_aw (w0);
        w0 = (w19 == 0x100) ? 1 : 0;
        w0 = 0x1e1;
label_11:
        dbg_aw (w0);
        goto label_1;
    }
    w20 = 0x1;
    if (w19 == 0) {
        goto label_2;
    }
    w0 = 0x8b;
    if (w19 != 0x100) {
        w0 = 0xbe0f;
    }
    dbg_aw (w0);
    x0 = v;
    w1 = v;
    w1++;
    *(x0) = w1;
    goto label_1;
label_12:
    if (w19 == 0x26) {
        w1 = *(x21);
        w0 = 0xa;
        W ();
        goto label_0;
    }
    w0 = *(x21);
    w1 = (w0 == 0x3d) ? 1 : 0;
    w20 = w1 & w20;
    if (w20 != w1) {
        dbg_av ();
        w20 = 0x0;
        dbg_B ();
        w1 = w19;
        w0 = 0x6;
        W ();
        goto label_2;
    }
    if (w0 == 0x28) {
        goto label_2;
    }
    w1 = w19;
    w0 = 0x8;
    W ();
    w0 = *(x24);
    if (w0 != 0xb) {
        goto label_2;
    }
    w1 = w19;
    w0 = 0x0;
    W ();
    w0 = *(x23);
    x0 = dbg_aw (w0);
    dbg_av ();
    goto label_2;
label_8:
    dbg_B ();
    w1 = w21;
    w0 = w24;
    dbg_x (w0, w1);
    w0 = *(x22);
    if (w0 == 0x2c) {
        dbg_av ();
    }
    w21 += 4;
    goto label_3;
label_9:
    w19 += 4;
    w0 = 0xe8;
    x19 = (int64_t) w19;
    w1 = *(x19);
    dbg_x (x0, w1);
    *(x19) = w0;
    if (w21 != 0) {
        goto label_4;
    }
label_7:
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
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xd40 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0x163c */
#include <stdint.h>
 
void dbg_ap (int64_t arg2, int64_t arg1) {
    x1 = arg2;
    x4 = arg1;
    /* int ap(int a,int z); */
    w3 = w0;
    w4 = w1;
    x7 = 0x12000;
    x5 = G;
    x6 = K;
    if (w0 != 0) {
        goto label_2;
    }
    return w0;
label_0:
    w0 = *(x6);
    w0 = w4 - w0;
    x1 = R;
    w1 = R;
    w0 += w1;
    x1 = *((x7 + 0xfc0));
    w1 = R;
    w1 = w0 + w1;
    goto label_3;
    do {
        w1 = w4 - w3;
        w1 -= 4;
        goto label_3;
label_2:
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
label_1:
        w0 = w3;
        w0 = dbg_ao (w0);
        w8 = w0;
        w0 = w3 - 1;
        x0 = (int64_t) w0;
        w0 = *(x0);
    } while (w0 != 5);
    w0 = *(x5);
    if (w0 > w4) {
        goto label_0;
    }
    x0 = i;
    w0 = i;
    if (w4 >= w0) {
        goto label_0;
    }
    x0 = *((x7 + 0xfc0));
    w1 = *(x0);
    w1 = w4 + w1;
label_3:
    w0 = w3;
    dbg_E (w0, w1);
    w3 = w8;
    if (w8 != 0) {
        goto label_1;
    }
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xda0 */
#include <stdint.h>
 
void fclose () {
    x17 = .plt;
    x16 = 0x13010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xe10 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x13048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_Os/subject.exe @ 0xd60 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 288 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x12ff8;
    return uint64_t (*x17)() ();
}

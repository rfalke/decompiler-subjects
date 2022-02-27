/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xe78 */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xcc0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x13020);
    x16 = 0x13020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xd50 */
#include <stdint.h>
 
void dbg_main (uint32_t argc, char ** argv) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    x0 = argc;
    x1 = argv;
    /* int main(int g,int e); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w1;
    x20 = *(0x120db);
    x1 = .comment;
    *((sp + 0x20)) = x21;
    w21 = w0 - 1;
    *(x20) = w1;
    __asm ("b.le 0xda4");
    w19 += 4;
    x1 = 0x1ef6;
    x0 = (int64_t) w19;
    x0 = *(x0);
    fopen (x0, x1);
    *(x20) = w0;
    x1 = 0x1869f;
    calloc (x0, x1);
    x1 = *(0x120d0);
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
    x1 = v;
    *(x1) = w0;
    x1 = 0x1869f;
    x0 = 0x1;
    calloc (x0, x1);
    x1 = ac;
    *(x1) = w0;
    x1 = q;
    *(x1) = w0;
    x1 = 0x1869f;
    x0 = 0x1;
    calloc (x0, x1);
    x20 = P;
    *(x20) = w0;
    o ();
    dbg_ad ();
    w0 = 0x0;
    dbg_ab (w0);
    w1 = w19;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    w0 = 0x13188;
    x0 = (int64_t) w0;
    x2 = *(x0);
    w0 = w21;
    x21 = *((sp + 0x20));
    x29 = *(sp);
    x30 = *((sp + 8));
    return uint64_t (*x2)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xc90 */
#include <stdint.h>
 
void fopen () {
    x16 = 0x13000;
    x17 = *(0x13008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xce0 */
#include <stdint.h>
 
void calloc () {
    x17 = *(0x13030);
    x16 = 0x13030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xd20 */
#include <stdint.h>
 
void strcpy () {
    x17 = *(0x13050);
    x16 = 0x13050;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xfe0 */
#include <stdint.h>
 
void o () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    x0 = L;
    w1 = L;
    *((sp + 0x10)) = x19;
    x19 = 0x12000;
    if (w1 == 0) {
        goto label_0;
    }
    w2 = w1 + 1;
    x1 = (int64_t) w1;
    *(x0) = w2;
    x19 = *((x19 + 0xf58));
    w1 = *(x1);
    *(x19) = w1;
    if (w1 != 2) {
        goto label_1;
    }
    *(x0) = 0;
    x0 = W;
    w0 = W;
    do {
        *(x19) = w0;
label_1:
        x19 = *((sp + 0x10));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_0:
        x0 = *(0x120db);
        x0 = *(x0);
        fgetc (x0);
        x19 = *((x19 + 0xf58));
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xcd0 */
#include <stdint.h>
 
void fgetc () {
    x17 = *(0x13028);
    x16 = 0x13028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x10d4 */
#include <stdint.h>
 
void dbg_ad () {
    int64_t var_50h;
    int64_t var_50h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    /* int ad(); */
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
    x21 = h;
    x22 = d;
    *((sp + 0x40)) = x25;
label_3:
    x23 = *((x20 + 0xf58));
    do {
        w24 = *(x21);
        w0 = w24;
        isspace (w0);
        w1 = (w24 == 0x23) ? 1 : 0;
        w0 = w1 | w0;
        if (w0 == 0) {
            x4 = 0x12000;
            x25 = *((x19 + 0xf50));
            x23 = C;
            *(x25) = w24;
            *(x23) = 0;
            w0 = dbg_X ();
            if (w0 == 0) {
                goto label_7;
            }
            w0 = 0x20;
            x24 = 0x12000;
            x23 = 0x12000;
            dbg_E (x0);
            x25 = *((x20 + 0xf58));
            x1 = D;
            x0 = M;
            w1 = D;
            *(x0) = w1;
label_1:
            w0 = dbg_X ();
            if (w0 != 0) {
                goto label_8;
            }
            x25 = *((x19 + 0xf50));
            w0 = *(x25);
            w0 -= 0x30;
            if (w0 > 9) {
                goto label_9;
            }
            x23 = *((x23 + 0xfa8));
            w1 = 0x0;
            w2 = 0x0;
            w0 = *(x23);
            strtol (w0, w1, w2);
            x1 = z;
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
            o ();
            dbg_ad ();
            w0 = *(x22);
            if (w0 == 0x218) {
                dbg_ad ();
                w0 = 0x20;
                dbg_E (w0);
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
            dbg_E (x0);
            w0 = 0x2;
            x0 = dbg_E (w0);
        }
        o ();
    } while (1);
label_10:
    x0 = dbg_E (x0);
    o ();
    goto label_0;
label_8:
    w0 = *(x25);
    x0 = dbg_E (w0);
    o ();
    goto label_1;
label_9:
    x24 = *((x24 + 0xf30));
    w1 = 0x20;
    x23 = *((x23 + 0xfa8));
    x0 = *(x24);
    *(x0) = w1;
    w1 = *(x23);
    x0 = *(0x120d0);
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
    __asm ("b.le 0x11a0");
    goto label_2;
    x1 = P;
    w1 = P;
    w0 += w1;
    *(x25) = w0;
    x1 = (int64_t) w0;
    w1 = P;
    if (w1 != 1) {
        goto label_2;
    }
    w0 += 4;
    x0 = (int64_t) w0;
    w1 = *(x0);
    x0 = L;
    *(x0) = w1;
    x0 = *((x20 + 0xf58));
    w1 = L;
    x0 = W;
    *(x0) = w1;
    do {
        o ();
        goto label_3;
label_7:
        o ();
        w6 = *(x25);
        if (w6 == 0x27) {
            w0 = 0x2;
            *(x25) = w0;
            Y ();
            w1 = *(x21);
            x0 = z;
            *(x0) = w1;
            o ();
            x19 = *((sp + 0x10));
            x20 = *((sp + 0x10 + 8));
            x21 = *((sp + 0x20));
            x22 = *((sp + 0x20 + 8));
            x23 = *((sp + 0x30));
            x24 = *((sp + 0x30 + 8));
            x25 = *((sp + 0x40));
            x29 = *(sp);
            x30 = *((sp + 8));
            void (*0xfe0)() ();
        }
        w7 = *(x21);
        w0 = 0x2a;
        __asm ("ccmp w7, w0, 0, eq");
        if (w6 != 0x2f) {
            goto label_11;
        }
        o ();
        x24 = *((x20 + 0xf58));
        x23 = x24;
label_4:
        w0 = *(x24);
        if (w0 != 0) {
            goto label_12;
        }
    } while (1);
    do {
        o ();
label_12:
        w0 = *(x23);
    } while (w0 != 0x2a);
    o ();
    w0 = *(x23);
    if (w0 != 0x2f) {
        goto label_4;
    }
    *(x23) = 0;
    goto label_4;
label_11:
    x0 = 0x1000;
    x0 += entry0;
    x4 = x23;
    x3 = z;
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
    o ();
    x19 = *((x19 + 0xf50));
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xca0 */
#include <stdint.h>
 
void isspace () {
    x17 = *(0x13010);
    x16 = 0x13010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1058 */
#include <stdint.h>
 
uint64_t dbg_X () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    /* int X(); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    x0 = h;
    *((sp + 0x10)) = x19;
    w19 = h;
    w0 = w19;
    isalnum (w0);
    x19 = *((sp + 0x10));
    w1 = (w19 == 0x5f) ? 1 : 0;
    w0 = w1 | w0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12f58;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xd40 */
#include <stdint.h>
 
void isalnum () {
    x17 = *(0x13060);
    x16 = 0x13060;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xfc0 */
#include <stdint.h>
 
uint32_t dbg_E (int64_t arg1) {
    x0 = arg1;
    /* int E(int e); */
    x2 = D;
    w1 = D;
    w3 = w1 + 1;
    x1 = (int64_t) w1;
    *(x2) = w3;
    *(x1) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xd10 */
#include <stdint.h>
 
void strtol () {
    x17 = *(0x13048);
    x16 = 0x13048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xd30 */
#include <stdint.h>
 
void strstr () {
    x17 = *(0x13058);
    x16 = 0x13058;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1090 */
#include <stdint.h>
 
void Y () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = h;
    w0 = h;
    if (w0 == 0x5c) {
        o ();
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1a50 */
#include <stdint.h>
 
void dbg_ab (int64_t arg1) {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    /* int ab(int j); */
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
    x21 = v;
    w23 = 0xe58955;
    do {
label_3:
        x20 = 0x12000;
        w1 = 0x100;
        x19 = d;
        w0 = d;
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
        dbg_ad ();
        x19 = G;
label_1:
        x24 = *((x20 + 0xf50));
label_0:
        w0 = *(x24);
        if (w0 != 0x3b) {
            goto label_6;
        }
        dbg_ad ();
    } while (1);
label_6:
    x0 = (int64_t) w0;
    if (w22 == 0) {
        goto label_7;
    }
    w2 = *(x19);
    w1 = w2 + 4;
    *(x19) = w1;
    w1 = 0x3;
    w1 -= w2;
    *(x0) = w1;
label_2:
    dbg_ad ();
    x0 = *((x20 + 0xf50));
    w0 = *(x0);
    if (w0 != 0x2c) {
        goto label_0;
    }
    dbg_ad ();
    goto label_1;
label_7:
    w1 = *(x21);
    *(x0) = w1;
    w0 = *(x21);
    w0 += 4;
    *(x21) = w0;
    goto label_2;
label_5:
    w0 += 4;
    w20 = 0x8;
    x0 = (int64_t) w0;
    w0 = *(x0);
    dbg_A (w0);
    x0 = q;
    w1 = q;
    x0 = *(x19);
    *(x0) = w1;
    dbg_ad ();
    dbg_ad ();
    do {
label_4:
        w0 = *(x19);
        if (w0 == 0x29) {
            dbg_ad ();
            w0 = w23;
            x19 = G;
            x20 = K;
            *(x19) = 0;
            *(x20) = 0;
            dbg_ae (x0);
            w1 = 0x0;
            w0 = 0xec81;
            w0 = dbg_s (w0, w1);
            x24 = (int64_t) w0;
            w0 = 0x0;
            dbg_I (w0);
            w0 = K;
            dbg_A (w0);
            w0 = 0xc3c9;
            dbg_ae (w0);
            w0 = G;
            *(x24) = w0;
            goto label_3;
        }
        x0 = (int64_t) w0;
        *(x0) = w20;
        w20 += 4;
        dbg_ad ();
        w0 = *(x19);
    } while (w0 != 0x2c);
    dbg_ad ();
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1458 */
#include <stdint.h>
 
uint32_t dbg_A (int64_t arg1) {
    x0 = arg1;
    /* int A(int e); */
    x2 = q;
    if (w0 == 0) {
        do {
            return w0;
        }
        x3 = (int64_t) w0;
        w1 = *(x2);
        w0 = w1 - w0;
        w4 = *(x3);
        w0 -= 4;
        *(x3) = w0;
        w0 = w4;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1424 */
#include <stdint.h>
 
void dbg_ae (int64_t arg1) {
    x0 = arg1;
    /* int ae(int g); */
    x1 = q;
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1488 */
#include <stdint.h>
 
uint64_t dbg_s (int64_t arg1, int64_t arg2) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* int s(int g,int e); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w4 = w1;
    x29 = sp;
    dbg_ae (x0);
    x2 = q;
    x0 = *(x2);
    *(x0) = w4;
    w0 = q;
    w1 = w0 + 4;
    *(x2) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12fc8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1be4 */
#include <stdint.h>
 
void dbg_I (int64_t arg1) {
    int32_t m;
    int64_t var_4ch;
    int64_t var_50h;
    int64_t var_50h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    x0 = arg1;
    /* int I(int j); */
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x22 = 0x12000;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = (int64_t) w0;
    x21 = d;
    w19 = d;
    *((sp + 0x30)) = x23;
    if (w19 != 0x120) {
        goto label_3;
    }
    dbg_ad ();
    dbg_ad ();
    dbg_U ();
    *((x29 + 0x4c)) = w0;
    dbg_ad ();
    w0 = w20;
    dbg_I (w0);
    w0 = *(x21);
    if (w0 != 0x138) {
        goto label_4;
    }
    dbg_ad ();
    w0 = 0x0;
    w0 = dbg_B (w0);
    w19 = w0;
    w0 = *((x29 + 0x4c));
    dbg_A (w0);
    w0 = w20;
    dbg_I (w0);
    w0 = w19;
    do {
        dbg_A (w0);
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
        dbg_ad ();
        x23 = 0x12000;
        dbg_ad ();
        if (w19 != 0x160) {
            goto label_6;
        }
        x0 = *((x23 + 0xfc8));
        w20 = *(x0);
        dbg_U ();
        *((x29 + 0x4c)) = w0;
label_0:
        dbg_ad ();
        x0 = x29 + 0x4c;
        dbg_I (x0);
        x1 = *((x23 + 0xfc8));
        w0 = *(x1);
        w0 = w20 - w0;
        w0 -= 5;
        dbg_B (w0);
label_4:
        w0 = *((x29 + 0x4c));
    } while (1);
label_6:
    w0 = *(x21);
    if (w0 != 0x3b) {
        dbg_w ();
    }
    dbg_ad ();
    *((x29 + 0x4c)) = 0;
    x0 = *((x23 + 0xfc8));
    w20 = *(x0);
    x0 = *((x22 + 0xf50));
    w0 = *(x0);
    if (w0 != 0x3b) {
        dbg_U ();
        *((x29 + 0x4c)) = w0;
    }
    dbg_ad ();
    x22 = *((x22 + 0xf50));
    w0 = *(x22);
    if (w0 == 0x29) {
        goto label_0;
    }
    w0 = 0x0;
    w0 = dbg_B (w0);
    w19 = w0;
    dbg_w ();
    x0 = *((x23 + 0xfc8));
    w0 = *(x0);
    w0 = w20 - w0;
    w20 = w19 + 4;
    w0 -= 5;
    dbg_B (w0);
    w0 = w19;
    dbg_A (w0);
    goto label_0;
label_5:
    if (w19 != 0x7b) {
        goto label_7;
    }
    dbg_ad ();
    w0 = 0x1;
    dbg_ab (w0);
    do {
        w0 = *(x21);
        if (w0 == 0x7d) {
label_2:
            dbg_ad ();
            goto label_1;
        }
        w0 = w20;
        dbg_I (w0);
    } while (1);
label_7:
    if (w19 == 0x1c0) {
        dbg_ad ();
        w0 = *(x21);
        if (w0 != 0x3b) {
            dbg_w ();
        }
        x5 = K;
        w0 = K;
        dbg_B (w0);
        *(x5) = w0;
        goto label_2;
    }
    if (w19 == 0x190) {
        dbg_ad ();
        w0 = *(x20);
        dbg_B (w0);
        *(x20) = w0;
        goto label_2;
    }
    if (w19 == 0x3b) {
        goto label_2;
    }
    dbg_w ();
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1a34 */
#include <stdint.h>
 
void dbg_U () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int U(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    dbg_w ();
    x29 = *(sp);
    x30 = *((sp + 8));
    w1 = 0x0;
    w0 = 0x0;
    return void (*0x14d4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x14c8 */
#include <stdint.h>
 
void dbg_B (int64_t arg1) {
    x0 = arg1;
    /* int B(int e); */
    w1 = w0;
    w0 = 0xe9;
    return void (*0x1488)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1568 */
#include <stdint.h>
 
void dbg_w () {
    /* int w(); */
    w0 = 0xb;
    return void (*0x18fc)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1e60).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1de8 */
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
    x21 = 0x12000;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x21 += sym.imp.strtol;
    x20 = 0x12d18;
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xeb0 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = *(0x20000);
    if (x0 != 0) {
        void (*0xcf0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xec8 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x13078;
    x0 = 0x13078;
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xf00 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x13078;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x13078;
    x1 >>= 1;
    if (x1 != 0) {
        x2 = *(0x12000);
        if (x2 == 0) {
            goto label_0;
        }
        uint64_t (*x2)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xf40 */
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
    w0 = *((x19 + 0x78));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x13070);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x78)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xc80 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x13000;
    x17 = *(0x13000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xf88 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x12000;
    x0 += sym.imp.strcpy;
    x1 = *(x0);
    while (x1 == 0) {
        void (*0xf00)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xf00)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1538 */
#include <stdint.h>
 
void dbg_N (int64_t arg1, int64_t arg2) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* int N(int j,int e); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w4 = w1;
    w0 += 0x83;
    x29 = sp;
    dbg_ae (x0);
    w2 = 0x85;
    w0 = 0x5;
    x29 = *(sp);
    x30 = *((sp + 8));
    w1 = w4;
    w0 = (w4 < 0x200) ? w2 : w0;
    return void (*0x1488)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x14bc */
#include <stdint.h>
 
void dbg_H (int64_t arg1) {
    x0 = arg1;
    /* int H(int e); */
    w1 = w0;
    w0 = 0xb8;
    return void (*0x1488)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1570 */
#include <stdint.h>
 
void dbg_T (int64_t arg1) {
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    x0 = arg1;
    /* int T(int j); */
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x21 = 0x12000;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x19 = d;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    w20 = d;
    if (w20 != 0x22) {
        goto label_5;
    }
    x19 = 0x12000;
    x22 = v;
    w0 = v;
    dbg_H (w0);
    x23 = h;
    do {
        w0 = *(x23);
        if (w0 == 0x22) {
            x0 = *((x19 + 0xf60));
            x1 = *(x0);
            *(x1) = 0;
            w1 = *(x0);
            w1 += 4;
            w1 &= 0xfffffffc;
            *(x0) = w1;
            o ();
label_0:
            dbg_ad ();
            goto label_1;
        }
        Y ();
        w0 = *(x22);
        w1 = w0 + 1;
        x0 = (int64_t) w0;
        *(x22) = w1;
        w1 = *(x23);
        *(x0) = w1;
        o ();
    } while (1);
label_5:
    x23 = 0x12000;
    w25 = w0;
    x22 = 0x12000;
    x0 = C;
    w26 = C;
    x0 = z;
    w24 = z;
    dbg_ad ();
    if (w20 != 2) {
        goto label_6;
    }
    w0 = w24;
    dbg_H (w0);
    do {
label_1:
        w19 = 0x1;
label_2:
        x0 = *((x21 + 0xf50));
        w0 = *(x0);
        if (w0 == 0x28) {
            if (w19 == 1) {
                w0 = 0x50;
                dbg_ae (w0);
            }
            w1 = 0x0;
            w0 = 0xec81;
            w22 = 0x0;
            w0 = dbg_s (x0, x1);
            x23 = (int64_t) w0;
            dbg_ad ();
            x21 = *((x21 + 0xf50));
            w24 = 0x248489;
label_3:
            w0 = *(x21);
            if (w0 != 0x29) {
                goto label_7;
            }
            *(x23) = w22;
            dbg_ad ();
            if (w19 != 0) {
                goto label_8;
            }
            w20 += 4;
            w0 = 0xe8;
            x20 = (int64_t) w20;
            w1 = *(x20);
            dbg_s (x0, w1);
            *(x20) = w0;
            if (w22 != 0) {
label_4:
                goto label_9;
            }
        }
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
label_6:
        if (w26 != 2) {
            goto label_10;
        }
        w0 = 0x0;
        dbg_T (w0);
        w1 = 0x0;
        w0 = 0xb9;
        dbg_s (w0, w1);
        w0 = w24;
        if (w20 != 0x21) {
            goto label_11;
        }
        dbg_Z (x0);
    } while (1);
label_10:
    if (w20 == 0x28) {
        dbg_w ();
        goto label_0;
    }
    if (w20 != 0x2a) {
        goto label_12;
    }
    dbg_ad ();
    w20 = *(x19);
    dbg_ad ();
    dbg_ad ();
    w0 = *(x19);
    if (w0 == 0x2a) {
        dbg_ad ();
        w20 = 0x0;
        dbg_ad ();
        dbg_ad ();
        dbg_ad ();
    }
    dbg_ad ();
    w0 = 0x0;
    dbg_T (w0);
    x0 = *((x21 + 0xf50));
    w0 = *(x0);
    if (w0 == 0x3d) {
        dbg_ad ();
        w0 = 0x50;
        x0 = dbg_ae (w0);
        dbg_w ();
        dbg_ae (w0);
        w0 = (w20 == 0x100) ? 1 : 0;
        w0 = 0x1e1;
label_11:
        dbg_ae (w0);
        goto label_1;
    }
    w19 = 0x1;
    if (w20 == 0) {
        goto label_2;
    }
    w0 = 0x8b;
    if (w20 != 0x100) {
        w0 = 0xbe0f;
    }
    dbg_ae (w0);
    x0 = q;
    w1 = q;
    w1++;
    *(x0) = w1;
    goto label_1;
label_12:
    if (w20 == 0x26) {
        x0 = *(x19);
        w1 = *(x0);
        w0 = 0xa;
        dbg_N (w0, w1);
        goto label_0;
    }
    x0 = (int64_t) w20;
    w19 = *(x0);
    if (w19 == 0) {
        x0 = M;
        w1 = M;
        w0 = 0x0;
        w0 = dlsym ();
        w19 = w0;
    }
    x0 = *((x21 + 0xf50));
    w0 = *(x0);
    w1 = (w0 == 0x3d) ? 1 : 0;
    if ((w1 & w25) != 0) {
        dbg_ad ();
        dbg_w ();
        w1 = w19;
        w0 = 0x6;
        dbg_N (w0, w1);
        goto label_2;
    }
    if (w0 == 0x28) {
        goto label_2;
    }
    w1 = w19;
    w0 = 0x8;
    dbg_N (w0, w1);
    x23 = *((x23 + 0xf98));
    w0 = *(x23);
    if (w0 != 0xb) {
        goto label_2;
    }
    w1 = w19;
    w0 = 0x0;
    dbg_N (w0, w1);
    x22 = *((x22 + 0xf70));
    w0 = *(x22);
    x0 = dbg_ae (w0);
    dbg_ad ();
    goto label_2;
label_7:
    dbg_w ();
    w1 = w22;
    w0 = w24;
    dbg_s (w0, w1);
    w0 = *(x21);
    if (w0 == 0x2c) {
        dbg_ad ();
    }
    w22 += 4;
    goto label_3;
label_8:
    if (w19 == 1) {
        w1 = w22;
        w22 += 4;
        w0 = 0x2494ff;
        dbg_s (w0, x1);
label_9:
        w1 = w22;
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
        void (*0x1488)() ();
    }
    x0 = q;
    w1 = q;
    w0 = 0xe8;
    w1 = w19 - w1;
    w1 -= 5;
    dbg_s (x0, w1);
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1500 */
#include <stdint.h>
 
void dbg_Z (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int Z(int e); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w5 = w0;
    w0 = 0xc139;
    x29 = sp;
    dbg_ae (x0);
    w0 = 0x0;
    dbg_H (w0);
    w0 = 0xf;
    dbg_ae (w0);
    w0 = w5 + 0x90;
    dbg_ae (w0);
    x29 = *(sp);
    x30 = *((sp + 8));
    w0 = 0xc0;
    return void (*0x1424)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x1e64 */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x18fc */
#include <stdint.h>
 
void dbg_O (uint32_t arg1) {
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    x0 = arg1;
    /* int O(int j); */
    if (w0 == 1) {
        void (*0x1570)() ();
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
    dbg_O (x0);
    x22 = C;
    w21 = 0x0;
    x23 = d;
    x24 = z;
    do {
label_0:
        w0 = *(x22);
        if (w19 != w0) {
            __asm ("ccmp w19, 8, 4, ne");
            __asm ("b.le 0x1a1c");
            w1 = w21;
            w0 = w20;
            w0 = dbg_S (w0, w1);
            w5 = w0;
            w0 = w20 ^ 1;
            dbg_H (w0);
            w0 = 0x5;
            dbg_B (w0);
            w0 = w5;
            dbg_A (w0);
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
            void (*0x14bc)() ();
        }
        w25 = *(x23);
        w20 = *(x24);
        dbg_ad ();
        __asm ("b.le 0x19d4");
        w1 = w21;
        w0 = w20;
        w0 = dbg_S (w0, w1);
        w21 = w0;
        w0 = w19;
        dbg_O (w0);
    } while (1);
    w0 = 0x50;
    dbg_ae (w0);
    w0 = w19;
    dbg_O (w0);
    w0 = 0x59;
    dbg_ae (w0);
    w0 = w19 - 4;
    w0 = w20;
    if (w0 <= 1) {
        dbg_Z (x0);
        goto label_0;
    }
    dbg_ae (x0);
    if (w25 != 0x25) {
        goto label_0;
    }
    w0 = 0x92;
    dbg_ae (w0);
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0x14d4 */
#include <stdint.h>
 
void dbg_S (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    /* int S(int j,int e); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w4 = w0;
    w5 = w1;
    x29 = sp;
    w0 = 0xfc085;
    dbg_ae (w0);
    w1 = w5;
    x29 = *(sp);
    x30 = *((sp + 8));
    w0 = w4 + 0x84;
    return void (*0x1488)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xc48 */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xcb0 */
#include <stdint.h>
 
void dlsym () {
    x17 = *(0x13018);
    x16 = 0x13018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xd00 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x13040);
    x16 = 0x13040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_Os/subject.exe @ 0xc60 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 240 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x12ff8;
    return uint64_t (*x17)() ();
}

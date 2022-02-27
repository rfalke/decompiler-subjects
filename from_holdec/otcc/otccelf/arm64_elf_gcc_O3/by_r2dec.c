/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xfb4 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xd90 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x16028);
    x16 = 0x16028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xe30 */
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
    x1 = 0x59f8;
    x3 = T;
    x19 = (int64_t) w19;
    *(x3) = w0;
    x0 = *(x2);
    fopen (w0, x1);
    w6 = G;
    w2 = 0x8048000;
    w2 -= w6;
    x3 = ak;
    w4 = 0x15f71;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xdb0 */
#include <stdint.h>
 
void calloc () {
    x17 = *(0x16038);
    x16 = 0x16038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xd70 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x16018);
    x16 = 0x16018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1120 */
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
    return 0x15f70;
label_0:
    x1 = 0x15000;
    *(x0) = 0;
    x0 = al;
    w0 = al;
    *(x2) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xda0 */
#include <stdint.h>
 
void fgetc () {
    x17 = *(0x16030);
    x16 = 0x16030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1280 */
#include <stdint.h>
 
uint64_t dbg_av () {
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
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = 0x15000;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x22 = 0x15000;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x23 = 0x15000;
    x0 = m;
    x20 = ak;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    w24 = m;
label_2:
    x21 = 0x15000;
    x27 = *((x22 + 0xf70));
    x28 = V;
    do {
label_3:
        w0 = w24;
        isspace (w0);
        w1 = (w24 == 0x23) ? 1 : 0;
        w0 = w1 | w0;
        if (w0 == 0) {
            goto label_22;
        }
        if (w0 == 0) {
label_0:
            goto label_23;
        }
label_5:
        x1 = *((x21 + 0xf40));
        w0 = *(x1);
        if (w0 == 0) {
            goto label_24;
        }
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x1) = w2;
        x2 = *((x19 + 0xfb8));
        w24 = *(x0);
        *(x2) = w24;
    } while (w24 != 2);
    *(x1) = 0;
    x0 = al;
    w24 = al;
    w0 = w24;
    *(x2) = w24;
    isspace (x0);
    w1 = (w24 == 0x23) ? 1 : 0;
    w0 = w1 | w0;
    if (w0 != 0) {
        goto label_0;
    }
label_22:
    x0 = 0x15000;
    x21 = *((x23 + 0xfa8));
    x1 = J;
    w0 = w24;
    *(x21) = w24;
    *(x1) = 0;
    isalnum (x0);
    w1 = (w24 == 0x5f) ? 1 : 0;
    w0 = w1 | w0;
    if (w0 == 0) {
        goto label_25;
    }
    x24 = 0x15000;
    x26 = 0x15000;
    w5 = 0x20;
    x3 = *((x19 + 0xfb8));
    x27 = *((x22 + 0xf70));
    x0 = D;
    x4 = Z;
    x28 = V;
    x25 = x0;
    w1 = D;
    w6 = w1 + 1;
    x1 = (int64_t) w1;
    *(x0) = w6;
    *(x1) = w5;
    w1 = D;
    w21 = *(x3);
    *(x4) = w1;
    do {
label_7:
        w0 = w21;
        isalnum (w0);
        w1 = (w21 == 0x5f) ? 1 : 0;
        w0 = w1 | w0;
        if (w0 == 0) {
            goto label_26;
        }
label_1:
        w0 = *(x25);
        w1 = w0 + 1;
        x0 = (int64_t) w0;
        *(x25) = w1;
        *(x0) = w21;
        w0 = *(x28);
        w3 = w0 + 1;
        x1 = (int64_t) w0;
        if (w0 == 0) {
            goto label_27;
        }
        *(x28) = w3;
        x0 = *((x19 + 0xfb8));
        w21 = *(x1);
        *(x0) = w21;
    } while (w21 != 2);
    *(x28) = 0;
    x1 = al;
    w21 = al;
    *(x0) = w21;
    w0 = w21;
    isalnum (w0);
    w1 = (w21 == 0x5f) ? 1 : 0;
    w0 = w1 | w0;
    if (w0 != 0) {
        goto label_1;
    }
label_26:
    x21 = *((x23 + 0xfa8));
    w0 = *(x21);
    w0 -= 0x30;
    if (w0 < 9) {
        goto label_28;
    }
    x24 = *((x24 + 0xf20));
    w2 = 0x20;
    x26 = *((x26 + 0xf58));
    x0 = Q;
    x1 = *(x24);
    *(x1) = w2;
    w1 = *(x26);
    x26 = *(x0);
    w1--;
    x0 = x26;
    x1 = (int64_t) w1;
    x0 = strstr (x0, x1);
    x0 -= x26;
    x1 = *(x24);
    *(x21) = w0;
    *(x1) = 0;
    w0 = *(x21);
    w0 += 0x20;
    w0 <<= 3;
    *(x21) = w0;
    __asm ("b.le 0x1930");
    x1 = T;
    w1 = T;
    w0 += w1;
    *(x21) = w0;
    x1 = (int64_t) w0;
    w1 = T;
    if (w1 != 1) {
        goto label_17;
    }
    w0 += 4;
    x21 = *((x19 + 0xfb8));
    x0 = (int64_t) w0;
    x27 = V;
    x1 = al;
    w0 = *(x0);
    w2 = *(x21);
    *(x27) = w0;
    *(x1) = w2;
    if (w0 == 0) {
        goto label_29;
    }
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x27) = w1;
    w24 = *(x0);
    *(x21) = w24;
    if (w24 != 2) {
        goto label_2;
    }
    w24 = w2;
    *(x21) = w2;
    *(x27) = 0;
    goto label_2;
label_24:
    x0 = *((x22 + 0xf70));
    x0 = *(x0);
    w0 = fgetc (x0);
    w24 = w0;
    x0 = *((x19 + 0xfb8));
    *(x0) = w24;
    goto label_3;
label_23:
    w0 = *(x28);
    if (w0 == 0) {
        goto label_30;
    }
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x28) = w1;
    x1 = *((x19 + 0xfb8));
    w0 = *(x0);
    *(x1) = w0;
    if (w0 == 2) {
        goto label_31;
    }
label_12:
    dbg_av ();
    x26 = *((x23 + 0xfa8));
    x24 = 0x15000;
    w0 = *(x26);
    if (w0 == 0x218) {
        goto label_32;
    }
label_8:
    x0 = *((x19 + 0xfb8));
    x25 = *((x24 + 0xf20));
    x26 = al;
    w0 = *(x0);
    do {
label_6:
        if (w0 == 0xa) {
            goto label_33;
        }
label_4:
        w1 = *(x25);
        x2 = *((x21 + 0xf40));
        w4 = w1 + 1;
        x1 = (int64_t) w1;
        *(x25) = w4;
        *(x1) = w0;
        w0 = *(x2);
        w4 = w0 + 1;
        x1 = (int64_t) w0;
        if (w0 == 0) {
            goto label_34;
        }
        *(x2) = w4;
        x4 = *((x19 + 0xfb8));
        w0 = *(x1);
        *(x4) = w0;
    } while (w0 != 2);
    w0 = *(x26);
    *(x2) = 0;
    *(x4) = w0;
    if (w0 != 0xa) {
        goto label_4;
    }
label_33:
    x24 = *((x24 + 0xf20));
    w2 = 0x2;
    w1 = *(x24);
    w3 = w1 + 1;
    x1 = (int64_t) w1;
    *(x24) = w3;
    *(x1) = w0;
    w0 = *(x24);
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x24) = w1;
    *(x0) = w2;
    goto label_5;
label_34:
    x0 = *(x27);
    fgetc (x0);
    x1 = *((x19 + 0xfb8));
    *(x1) = w0;
    goto label_6;
label_27:
    x0 = *(x27);
    w0 = fgetc (x0);
    w21 = w0;
    x0 = *((x19 + 0xfb8));
    *(x0) = w21;
    goto label_7;
label_30:
    x0 = *((x22 + 0xf70));
    x24 = 0x15000;
    x0 = *(x0);
    fgetc (x0);
    x1 = *((x19 + 0xfb8));
    *(x1) = w0;
    dbg_av ();
    x26 = *((x23 + 0xfa8));
    w0 = *(x26);
    if (w0 != 0x218) {
        goto label_8;
    }
label_32:
    dbg_av ();
    x1 = *((x24 + 0xf20));
    w2 = 0x1;
    w3 = 0x20;
    w0 = *(x1);
    w4 = w0 + w2;
    x0 = (int64_t) w0;
    *(x1) = w4;
    *(x0) = w3;
    x0 = *(x26);
    *(x0) = w2;
    w0 = *(x26);
    w1 = *(x1);
    w0 += 4;
    x0 = (int64_t) w0;
    *(x0) = w1;
    goto label_8;
label_25:
    x27 = 0x15000;
    x1 = V;
    w0 = V;
    if (w0 == 0) {
        goto label_35;
    }
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w2;
    x2 = *((x19 + 0xfb8));
    w0 = *(x0);
    *(x2) = w0;
    if (w0 == 2) {
        goto label_36;
    }
label_15:
    if (w24 == 0x27) {
        goto label_37;
    }
label_13:
    w1 = 0x2a;
    __asm ("ccmp w0, w1, 0, eq");
    if (w24 != 0x2f) {
        goto label_38;
    }
    x21 = *((x27 + 0xf40));
    w0 = *(x21);
    if (w0 == 0) {
        goto label_39;
    }
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x21) = w2;
    x1 = *((x19 + 0xfb8));
    w0 = *(x0);
    *(x1) = w0;
    if (w0 == 2) {
        goto label_40;
    }
label_14:
    x24 = 0x15000;
    x21 = al;
    if (w0 == 0) {
label_9:
        goto label_41;
    }
    x1 = (int64_t) w2;
    x26 = *((x19 + 0xfb8));
    w2 = w1 + 1;
    x4 = (int64_t) w1;
    if (w0 == 0x2a) {
        goto label_42;
    }
    do {
        if (w1 == 0) {
            goto label_43;
        }
        x3 = *((x27 + 0xf40));
        x1 = *((x19 + 0xfb8));
        *(x3) = w2;
        w0 = *(x4);
        *(x1) = w0;
        if (w0 == 2) {
            goto label_44;
        }
        x1 = (int64_t) w2;
label_10:
        w2 = w1 + 1;
        x4 = (int64_t) w1;
    } while (w0 != 0x2a);
    if (w1 == 0) {
label_42:
        goto label_45;
    }
    x4 = *((x27 + 0xf40));
    x3 = *((x19 + 0xfb8));
    *(x4) = w2;
    w0 = *(x1);
    *(x3) = w0;
    if (w0 == 2) {
        goto label_46;
    }
label_11:
    if (w0 != 0x2f) {
        goto label_9;
    }
    x0 = *((x19 + 0xfb8));
    *(x0) = 0;
    if (w2 == 0) {
label_41:
        goto label_47;
    }
    x27 = *((x27 + 0xf40));
    w1 = w2 + 1;
    x2 = (int64_t) w2;
    x0 = *((x19 + 0xfb8));
    *(x27) = w1;
    w24 = *(x2);
    *(x0) = w24;
    if (w24 != 2) {
        goto label_2;
    }
    *(x27) = 0;
    x1 = al;
    w24 = al;
    *(x0) = w24;
    goto label_2;
label_44:
    w0 = *(x21);
    *(x3) = 0;
    *(x1) = w0;
    if (w0 != 0x2a) {
label_43:
        x0 = *(x20);
        fgetc (x0);
        *(x26) = w0;
        x1 = *((x27 + 0xf40));
        w2 = *(x1);
        x1 = (int64_t) w2;
        goto label_10;
    }
label_45:
    x0 = *((x22 + 0xf70));
    x0 = *(x0);
    fgetc (x0);
    x2 = *((x27 + 0xf40));
    x1 = *((x19 + 0xfb8));
    w2 = *(x2);
    *(x1) = w0;
    goto label_11;
label_46:
    x0 = *((x24 + 0xfe0));
    w2 = 0x0;
    *(x4) = 0;
    w0 = *(x0);
    *(x3) = w0;
    goto label_11;
label_31:
    *(x28) = 0;
    x0 = al;
    w0 = al;
    *(x1) = w0;
    goto label_12;
label_29:
    x0 = *((x22 + 0xf70));
    x0 = *(x0);
    w0 = fgetc (x0);
    w24 = w0;
    *(x21) = w0;
    goto label_2;
label_35:
    x0 = *((x22 + 0xf70));
    x0 = *(x0);
    fgetc (x0);
    w24 = *(x21);
    x1 = *((x19 + 0xfb8));
    *(x1) = w0;
    if (w24 != 0x27) {
        goto label_13;
    }
label_37:
    x23 = *((x23 + 0xfa8));
    w1 = 0x2;
    *(x23) = w1;
    if (w0 == 0x5c) {
        goto label_48;
    }
    x1 = *((x27 + 0xf40));
    w1 = *(x1);
label_20:
    x2 = C;
    *(x2) = w0;
    if (w1 == 0) {
        goto label_49;
    }
    x4 = *((x27 + 0xf40));
    w2 = w1 + 1;
    x1 = (int64_t) w1;
    x3 = *((x19 + 0xfb8));
    *(x4) = w2;
    w0 = *(x1);
    *(x3) = w0;
    if (w0 == 2) {
        goto label_50;
    }
    if (w2 == 0) {
label_19:
        goto label_51;
    }
    x27 = *((x27 + 0xf40));
    w0 = w2 + 1;
    x2 = (int64_t) w2;
    x19 = *((x19 + 0xfb8));
    *(x27) = w0;
    w0 = *(x2);
    *(x19) = w0;
    if (w0 == 2) {
        goto label_52;
    }
    do {
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
        x27 = *((sp + 0x50));
        x28 = *((sp + 0x50 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x0;
label_47:
        x0 = *((x22 + 0xf70));
        x0 = *(x0);
        w0 = fgetc (x0);
        w24 = w0;
        x0 = *((x19 + 0xfb8));
        *(x0) = w24;
        goto label_2;
label_39:
        x0 = *((x22 + 0xf70));
        x0 = *(x0);
        fgetc (x0);
        x1 = *((x19 + 0xfb8));
        w2 = *(x21);
        *(x1) = w0;
        goto label_14;
label_36:
        *(x1) = 0;
        x0 = al;
        w0 = al;
        *(x2) = w0;
        goto label_15;
label_40:
        w2 = 0x0;
        *(x21) = 0;
        x0 = al;
        w0 = al;
        *(x1) = w0;
        goto label_14;
label_28:
        x26 = *((x26 + 0xf58));
        w2 = 0x0;
        w1 = 0x0;
        w0 = *(x26);
        strtol (w0, w1, w2);
        w2 = 0x2;
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        *(x21) = w2;
        x1 = C;
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x23 = *((sp + 0x30));
        x24 = *((sp + 0x30 + 8));
        *(x1) = w0;
        x25 = *((sp + 0x40));
        x26 = *((sp + 0x40 + 8));
        w0 = 0x0;
        x27 = *((sp + 0x50));
        x28 = *((sp + 0x50 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x0;
label_38:
        x1 = 0x15000;
        x4 = "++#m--%am*@R<^1c/@%[_[H3c%@%[_[H3c+@.B#d-@%:_^BKd<<Z/03e>>`/03e<=0f>=/f<@.f>@1f==&g!='g&&k||#l&@.BCh^@.BSi|@.B+j~@/%Yd!@&d*@b";
        x25 = J;
        x7 = C;
        x6 = x25;
        x5 = x7;
label_16:
        x1 = (int64_t) w4;
        w2 = w4 + 1;
        w9 = *(x1);
    } while (w9 == 0);
    x2 = (int64_t) w2;
    w1 = w4 + 2;
    w3 = w4 + 3;
    x1 = (int64_t) w1;
    w8 = *(x2);
    *(x7) = 0;
    w1 = *(x1);
    w1 -= 0x62;
    *(x25) = w1;
    if ((w1 & 0x1f) == 0) {
        goto label_53;
    }
    w3 = w4 + 4;
    w2 = 0x0;
    x3 = (int64_t) w3;
    do {
        w2 = w1 + (w2 << 6);
        w4 = w3;
        w2 += 0x40;
        x3++;
        *(x5) = w2;
        w1 = *((x3 - 2));
        w1 -= 0x62;
        *(x6) = w1;
    } while ((w1 & 0x1f) != 0);
    __asm ("ccmp w8, w0, 4, ne");
    __asm ("ccmp w9, w24, 0, eq");
    if (w8 != 0x40) {
        goto label_16;
    }
label_18:
    if (w8 != w0) {
        goto label_17;
    }
    w ();
    x23 = *((x23 + 0xfa8));
    w0 = 0x1;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    *(x23) = w0;
    w0 = 0x0;
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
label_53:
    w4 = w3;
    __asm ("ccmp w8, w0, 4, ne");
    __asm ("ccmp w9, w24, 0, eq");
    if (w8 != 0x40) {
        goto label_16;
    }
    goto label_18;
label_52:
    *(x27) = 0;
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x0 = al;
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    w0 = al;
    x27 = *((sp + 0x50));
    x28 = *((sp + 0x50 + 8));
    *(x19) = w0;
    w0 = 0x0;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
label_50:
    *(x4) = 0;
    x0 = al;
    w0 = al;
    *(x3) = w0;
label_51:
    x0 = ak;
    x0 = *(x0);
    fgetc (x0);
    x19 = *((x19 + 0xfb8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    *(x19) = w0;
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    w0 = 0x0;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x27 = *((sp + 0x50));
    x28 = *((sp + 0x50 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
    do {
        *(x20) = 0;
        x0 = al;
        w1 = al;
        *(x2) = w1;
        if (w1 == 0x6e) {
            goto label_54;
        }
        x0 = C;
        *(x0) = w1;
label_49:
        x0 = ak;
        x0 = *(x0);
        fgetc (x0);
        x2 = *((x27 + 0xf40));
        x1 = *((x19 + 0xfb8));
        w2 = *(x2);
        *(x1) = w0;
        goto label_19;
label_48:
        x20 = *((x27 + 0xf40));
        w0 = *(x20);
        if (w0 == 0) {
            goto label_55;
        }
        w1 = w0 + 1;
        x0 = (int64_t) w0;
        *(x20) = w1;
        x2 = *((x19 + 0xfb8));
        w0 = *(x0);
        *(x2) = w0;
    } while (w0 == 2);
label_21:
    if (w0 != 0x6e) {
        goto label_20;
    }
    do {
        x2 = *((x19 + 0xfb8));
        w3 = 0xa;
        w0 = w3;
        *(x2) = w3;
        goto label_20;
label_55:
        x0 = ak;
        x0 = *(x0);
        fgetc (x0);
        x2 = *((x19 + 0xfb8));
        w1 = *(x20);
        *(x2) = w0;
        goto label_21;
label_54:
        w1 = 0x0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x34a8 */
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
    int64_t var_50h_2;
    x0 = arg1;
    x1 = arg2;
    /* int ar(int s); */
    *((sp + -0x60)) = x29;
    *((sp + -0x60 + 8)) = x30;
    x29 = sp;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x23 = 0x15000;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    x25 = 0x15000;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w26 = w0;
    x22 = e;
    w24 = (w0 == 0) ? 1 : 0;
    x21 = P;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
label_2:
    w0 = *(x22);
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
    x20 = 0x15000;
    x0 = (int64_t) w0;
    w19 = 0x8;
    x1 = v;
    w1 = v;
    *(x0) = w1;
    dbg_av ();
    dbg_av ();
    x27 = *((x23 + 0xfa8));
    w0 = *(x22);
    do {
        x1 = (int64_t) w0;
        if (w0 == 0x29) {
            goto label_7;
        }
label_0:
        *(x1) = w19;
        w19 += 4;
        dbg_av ();
        w0 = *(x27);
    } while (w0 != 0x2c);
    dbg_av ();
    w0 = *(x27);
    x1 = (int64_t) w0;
    if (w0 != 0x29) {
        goto label_0;
    }
label_7:
    dbg_av ();
    x20 = *((x20 + 0xf60));
    x27 = *((x25 + 0xf38));
    w6 = 0x55;
    w5 = 0x76;
    w4 = 0x1a;
    w3 = 0x7e;
    w1 = *(x20);
    w2 = 0x13;
    x28 = U;
    w0 = 0x0;
    w7 = w1 + 1;
    *(x27) = 0;
    x1 = (int64_t) w1;
    *(x20) = w7;
    *(x28) = 0;
    *(x1) = w6;
    w1 = *(x20);
    w6 = w1 + 1;
    x1 = (int64_t) w1;
    *(x20) = w6;
    *(x1) = w5;
    w1 = *(x20);
    w5 = w1 + 1;
    x1 = (int64_t) w1;
    *(x20) = w5;
    *(x1) = w4;
    w1 = *(x20);
    w4 = w1 + 1;
    x1 = (int64_t) w1;
    *(x20) = w4;
    *(x1) = w3;
    w1 = *(x20);
    w3 = w1 + 1;
    x1 = (int64_t) w1;
    *(x20) = w3;
    *(x1) = w2;
    w1 = *(x20);
    w3 = w1 + 1;
    w2 = w1 + 2;
    x4 = (int64_t) w1;
    w1 += 3;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x4) = 0;
    *(x3) = 0;
    *(x2) = 0;
    *(x1) = 0;
    w19 = *(x20);
    w1 = w19 + 4;
    *(x20) = w1;
    dbg_S (x0);
    w1 = *(x20);
    w0 = U;
    dbg_ap (w0, w1);
    w0 = *(x20);
    w5 = 0x36;
    w4 = 0x3c;
    w2 = w19 + 1;
    w1 = w0 + 1;
    x3 = (int64_t) w19;
    x0 = (int64_t) w0;
    *(x20) = w1;
    w1 = w19 + 2;
    x2 = (int64_t) w2;
    w19 += 3;
    *(x0) = w5;
    x1 = (int64_t) w1;
    x19 = (int64_t) w19;
    w0 = *(x20);
    w5 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w5;
    *(x0) = w4;
    w0 = *(x27);
    *(x3) = w0;
    w4 = w0 >> 8;
    w3 = w0 >> 0x10;
    w0 >>= 0x18;
    *(x2) = w4;
    *(x1) = w3;
    *(x19) = w0;
    w0 = *(x22);
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
    x28 = *((sp + 0x50 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
label_6:
    w20 = 0x3;
    dbg_av ();
label_4:
    x19 = *((x23 + 0xfa8));
    w0 = *(x19);
    if (w26 != 0) {
        goto label_8;
    }
    x27 = i;
    while (w0 != 0x3b) {
        w0 = *(x27);
        *(x1) = w0;
        w0 = *(x27);
        w0 += 4;
        *(x27) = w0;
        dbg_av ();
        w0 = *(x19);
        if (w0 == 0x2c) {
            goto label_9;
        }
        x1 = (int64_t) w0;
    }
label_3:
    dbg_av ();
    goto label_2;
    do {
        w0 = *(x21);
        w2 = w0 + 4;
        w0 = w20 - w0;
        *(x21) = w2;
        *(x1) = w0;
        dbg_av ();
        w0 = *(x19);
        if (w0 == 0x2c) {
            goto label_9;
        }
label_8:
        x1 = (int64_t) w0;
    } while (w0 != 0x3b);
    goto label_3;
label_9:
    dbg_av ();
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x4360 */
#include <stdint.h>
 
void dbg_au (char * arg1) {
    int64_t var_6ch;
    char * filename;
    size_t n;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_80h_2;
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
    *((sp + -0x80)) = x29;
    *((sp + -0x80 + 8)) = x30;
    x2 = 0x15000;
    w5 = 0x58;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = 0x15000;
    x6 = K;
    *((x29 + 0x70)) = w0;
    w4 = 0x54;
    x3 = i;
    w9 = 0x17;
    x2 = R;
    w8 = 0x3c;
    w0 = K;
    w7 = 0x47;
    x1 = v;
    w14 = 0x1;
    w6 = i;
    w12 = 0x32;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    w13 = 0x7f;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    x25 = 0x15000;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    x27 = 0x15000;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *(x2) = w6;
    x2 = (int64_t) w0;
    w6 = w0 + 1;
    w23 = v;
    *(x1) = w6;
    w6 = 0x76;
    *(x2) = w5;
    w0 = w23 - w0;
    w17 = w0;
    w0 = v;
    *((x29 + 0x74)) = w17;
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w2;
    w2 = 0x50;
    *(x0) = w4;
    w0 = v;
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w4;
    *(x0) = w2;
    x0 = 0x15000;
    w2 = v;
    x5 = T;
    w10 = w2 + 1;
    x4 = (int64_t) w2;
    x26 = x5;
    w0 = 0x16180;
    x0 = (int64_t) w0;
    w0 = *(0x15000);
    *(x1) = w10;
    *(x4) = w9;
    w0 -= w2;
    w0 -= 5;
    w2 = v;
    w9 = w2 + 1;
    w10 = w0 >> 8;
    x4 = (int64_t) w2;
    x9 = (int64_t) w9;
    *(x4) = w0;
    w4 = w2 + 2;
    w2 += 3;
    *(x9) = w10;
    x4 = (int64_t) w4;
    w9 = w0 >> 0x10;
    x2 = (int64_t) w2;
    w0 >>= 0x18;
    *(x4) = w9;
    *(x2) = w0;
    x4 = "libc.so.6";
    w2 = v;
    w9 = w2 + 4;
    w2 += 5;
    *(x1) = w2;
    x2 = (int64_t) w9;
    w10 = *((x4 + 8));
    x11 = "libc.so.6";
    x4 = Q;
    *(x2) = w6;
    x6 = 0x15000;
    x23 = x4;
    w2 = v;
    x24 = e;
    w9 = w2 + 1;
    x2 = (int64_t) w2;
    *(x1) = w9;
    x9 = "libdl.so.2";
    *(x2) = w8;
    w2 = v;
    w8 = w2 + 1;
    x2 = (int64_t) w2;
    *(x1) = w8;
    w8 = *((x0 + 7));
    *(x2) = w7;
    x2 = D;
    w0 = v;
    *((x29 + 0x78)) = x2;
    w15 = w0 + 1;
    x16 = (int64_t) w0;
    x15 = (int64_t) w15;
    *(x16) = w14;
    w14 = w0 + 2;
    w0 += 3;
    *(x15) = 0;
    x14 = (int64_t) w14;
    x0 = (int64_t) w0;
    *(x14) = 0;
    *(x0) = 0;
    w0 = v;
    w14 = w0 + 4;
    w0 += 5;
    *(x1) = w0;
    x0 = (int64_t) w14;
    *(x0) = w12;
    w0 = v;
    w12 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w12;
    *(x0) = w13;
    w21 = i;
    w21 = w17 + w21;
    w0 = w21 + 1;
    x0 = (int64_t) w0;
    *((x0 - 0xa)) = x11;
    *((x0 - 2)) = w10;
    x0 = (int64_t) w0;
    x0 = 0x5985;
    *((x0 - 0xb)) = x9;
    *((x0 - 4)) = w8;
    w28 = Q;
    *(x3) = w0;
    w3 = D;
label_0:
    w20 = w28 + 1;
    x1 = (int64_t) w20;
    w0 = *(x1);
    if (w0 == 0x20) {
        goto label_9;
    }
label_1:
    if (w20 >= w3) {
        goto label_9;
    }
    x0 = x1 + 1;
    w28 = w20;
    while (w2 != 0x20) {
        if (w28 == w3) {
            goto label_10;
        }
        w2 = *(x0);
        w28++;
        x0++;
    }
label_2:
    if (w28 == w3) {
        goto label_10;
    }
    w0 = *(x23);
    w2 = *(x26);
    w0 = w20 - w0;
    w0 = w2 + (w0 << 3);
    w4 = w0 + 0xfc;
    w0 += 0xf8;
    *(x24) = w0;
    x4 = (int64_t) w4;
    x2 = (int64_t) w0;
    w0 = *(x4);
    w2 = *(x2);
    __asm ("ccmp w2, 1, 4, ne");
    if (w0 == 0) {
        goto label_0;
    }
    if (w2 != 0) {
        goto label_11;
    }
    x22 = *((x19 + 0xfb0));
    w2 = w28 - w20;
    x2 = (int64_t) w2;
    x0 = *(x22);
    memcpy (x0, x1, w2);
    w0 = *(x22);
    x1 = *((x27 + 0xf20));
    w0 = w28 + w0;
    w0 -= w20;
    w20 = w28 + 1;
    w0++;
    w3 = *(x1);
    x1 = (int64_t) w20;
    *(x22) = w0;
    w0 = *(x1);
    if (w0 != 0x20) {
        goto label_1;
    }
label_9:
    w28 = w20;
    goto label_2;
label_11:
    w1 = w2;
    dbg_ap (x0, w1);
    x0 = *((x29 + 0x78));
    w3 = *(x0);
    goto label_0;
label_10:
    x0 = *((x19 + 0xfb0));
    x1 = 0x15000;
    x3 = *((x25 + 0xfa0));
    x2 = *((x27 + 0xf20));
    x6 = x0;
    x9 = T;
    x8 = x3;
    w12 = *(x0);
    x11 = x2;
    w5 = 0x0;
    w10 = 0x10;
    w28 = w12 + 3;
    w12 -= w21;
    w28 &= 0xfffffffc;
    w1 = w28 + 1;
    *(x0) = w28;
    x4 = (int64_t) w28;
    x1 = (int64_t) w1;
    *(x4) = 0;
    *(x1) = 0;
    w1 = w28 + 2;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = w28 + 3;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = *(x0);
    w4 = w1 + 4;
    *(x0) = w4;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w1 + 5;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w1 + 6;
    w1 += 7;
    x4 = (int64_t) w4;
    x1 = (int64_t) w1;
    *(x4) = 0;
    *(x1) = 0;
    w1 = *(x0);
    w4 = w1 + 4;
    *(x0) = w4;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w1 + 5;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w1 + 6;
    w1 += 7;
    x4 = (int64_t) w4;
    x1 = (int64_t) w1;
    *(x4) = 0;
    *(x1) = 0;
    w1 = *(x0);
    w4 = w1 + 4;
    *(x0) = w4;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w1 + 5;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w1 + 6;
    w1 += 7;
    x4 = (int64_t) w4;
    x1 = (int64_t) w1;
    *(x4) = 0;
    *(x1) = 0;
    w24 = *(x0);
    w1 = *(x3);
    w24 += 4;
    w3 = *(x2);
    *(x0) = w24;
    x7 = e;
label_3:
    w4 = w1 + 1;
    x0 = (int64_t) w4;
    w1 = *(x0);
    if (w1 == 0x20) {
        goto label_12;
    }
label_4:
    if (w4 >= w3) {
        goto label_12;
    }
    x0++;
    w1 = w4;
    while (w2 != 0x20) {
        if (w1 == w3) {
            goto label_13;
        }
        w2 = *(x0);
        w1++;
        x0++;
    }
label_5:
    if (w1 == w3) {
        goto label_13;
    }
    w0 = *(x8);
    w2 = *(x9);
    w0 = w4 - w0;
    w0 = w2 + (w0 << 3);
    w2 = w0 + 0xfc;
    w0 += 0xf8;
    *(x7) = w0;
    x2 = (int64_t) w2;
    x0 = (int64_t) w0;
    w2 = *(x2);
    w0 = *(x0);
    __asm ("ccmp w0, 0, 0, ne");
    if (w2 != 0) {
        goto label_3;
    }
    x2 = (int64_t) w24;
    w0 = w5 + 0x16;
    w5 += w1;
    w4 = w5 - w4;
    *(x2) = w0;
    w2 = w24 + 1;
    w3 = w0 >> 8;
    w5 = w4 + 1;
    x2 = (int64_t) w2;
    w4 = w0 >> 0x10;
    w0 >>= 0x18;
    *(x2) = w3;
    w3 = w24 + 2;
    w2 = w24 + 3;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    *(x3) = w4;
    *(x2) = w0;
    w0 = *(x6);
    w4 = w0 + 4;
    w3 = w0 + 5;
    w2 = w0 + 6;
    w0 += 7;
    x13 = (int64_t) w4;
    x3 = (int64_t) w3;
    *(x6) = w4;
    x2 = (int64_t) w2;
    x0 = (int64_t) w0;
    *(x13) = 0;
    *(x3) = 0;
    *(x2) = 0;
    *(x0) = 0;
    w0 = *(x6);
    w4 = w0 + 4;
    w3 = w0 + 5;
    w2 = w0 + 6;
    w0 += 7;
    x13 = (int64_t) w4;
    x3 = (int64_t) w3;
    *(x6) = w4;
    x2 = (int64_t) w2;
    x0 = (int64_t) w0;
    *(x13) = 0;
    *(x3) = 0;
    *(x2) = 0;
    *(x0) = 0;
    w0 = *(x6);
    w4 = w0 + 4;
    w3 = w0 + 5;
    w2 = w0 + 6;
    w0 += 7;
    x13 = (int64_t) w4;
    x3 = (int64_t) w3;
    *(x6) = w4;
    x2 = (int64_t) w2;
    x0 = (int64_t) w0;
    w4 = w1 + 1;
    *(x13) = w10;
    *(x3) = 0;
    *(x2) = 0;
    *(x0) = 0;
    x0 = (int64_t) w4;
    w24 = *(x6);
    w3 = *(x11);
    w24 += 4;
    *(x6) = w24;
    w1 = *(x0);
    if (w1 != 0x20) {
        goto label_4;
    }
label_12:
    w1 = w4;
    goto label_5;
label_13:
    w1 = w24 + 1;
    x2 = (int64_t) w24;
    w0 = w24 + 2;
    w6 = 0x1;
    x1 = (int64_t) w1;
    x4 = *((x19 + 0xfb0));
    x0 = (int64_t) w0;
    *(x2) = w6;
    *(x1) = 0;
    *(x0) = 0;
    w0 = w24 + 3;
    x0 = (int64_t) w0;
    *(x0) = 0;
    w0 = w24 - w28;
    w1 = w0 + 0xf;
    w1 = (w0 < 0) ? w1 : w0;
    w0 = *(x4);
    w2 = w0 + 4;
    w5 = w0 + 5;
    *(x4) = w2;
    w7 = w1 >> 4;
    x2 = (int64_t) w2;
    w3 = w0 + 6;
    x5 = (int64_t) w5;
    w0 += 7;
    x3 = (int64_t) w3;
    *(x2) = w7;
    w2 = w1 >> 0xc;
    x0 = (int64_t) w0;
    *(x5) = w2;
    w2 = w1 >> 0x14;
    w1 >>= 0x1c;
    *(x3) = w2;
    *(x0) = w1;
    w0 = *(x4);
    w1 = w0 + 4;
    *(x4) = w1;
    x1 = (int64_t) w1;
    *(x1) = w6;
    w1 = w0 + 5;
    x1 = (int64_t) w1;
    *(x1) = 0;
    w1 = w0 + 6;
    w0 += 7;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x1) = 0;
    *(x0) = 0;
    w0 = *(x4);
    w1 = w0 + 4;
    *(x4) = w1;
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
    w0 = *(x4);
    w0 += 4;
    *(x4) = w0;
    __asm ("b.le 0x4acc");
    w1 = 0x2;
    do {
        w3 = w0 + 1;
        x5 = (int64_t) w0;
        w2 = w0 + 2;
        w0 += 3;
        x3 = (int64_t) w3;
        w6 = w1 >> 8;
        x2 = (int64_t) w2;
        *(x5) = w1;
        x0 = (int64_t) w0;
        w5 = w1 >> 0x10;
        *(x3) = w6;
        w3 = w1 >> 0x18;
        *(x2) = w5;
        w1++;
        *(x0) = w3;
        w0 = *(x4);
        w0 += 4;
        *(x4) = w0;
    } while (w1 != w7);
    x1 = 0x15000;
    x2 = (int64_t) w0;
    x7 = *((x19 + 0xfb0));
    x26 = 0x15000;
    x25 = *((x25 + 0xfa0));
    x17 = T;
    w1 = w0 + 1;
    *(x2) = 0;
    w30 = 0x0;
    x1 = (int64_t) w1;
    x27 = *((x27 + 0xf20));
    x18 = e;
    x14 = y;
    *(x1) = 0;
    w1 = w0 + 2;
    w0 += 3;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x1) = 0;
    x1 = 0x15000;
    *(x0) = 0;
    x16 = K;
    x1 = 0x15000;
    w0 = *(x7);
    w4 = *(x27);
    w0 += 4;
    x15 = R;
    *(x7) = w0;
    *((x29 + 0x78)) = w0;
    w0 = *(x25);
label_6:
    w3 = w0 + 1;
    x1 = (int64_t) w3;
    w0 = *(x1);
    if (w0 == 0x20) {
        goto label_14;
    }
label_7:
    if (w3 >= w4) {
        goto label_14;
    }
    x1++;
    w0 = w3;
    while (w2 != 0x20) {
        if (w0 == w4) {
            goto label_15;
        }
        w2 = *(x1);
        w0++;
        x1++;
    }
label_8:
    if (w0 == w4) {
        goto label_15;
    }
    w2 = *(x25);
    w1 = *(x17);
    w3 -= w2;
    w3 = w1 + (w3 << 3);
    w1 = w3 + 0xf8;
    w3 += 0xfc;
    *(x18) = w1;
    x1 = (int64_t) w1;
    x3 = (int64_t) w3;
    w1 = *(x1);
    w6 = *(x3);
    __asm ("ccmp w6, 0, 4, eq");
    if (w1 == 0) {
        goto label_6;
    }
    w30++;
    w8 = w30 << 8;
    do {
        w1 = w6 - 1;
        w4 = w6 + 2;
        w5 = w6 + 1;
        w3 = w6 + 3;
        x1 = (int64_t) w1;
        x4 = (int64_t) w4;
        x5 = (int64_t) w5;
        x11 = (int64_t) w6;
        x3 = (int64_t) w3;
        w1 = *(x1);
        w9 = *(x5);
        w1 = *(x4);
        w2 = (w1 != 5) ? 1 : 0;
        w10 = *(x3);
        w13 = *(x11);
        w1 <<= 0x10;
        w10 = w13 | (w10 << 24);
        w9 = w1 | (w9 << 8);
        w1 = -w2;
        w2 = w8 + w2;
        w2++;
        w1 <<= 2;
        *(x11) = w1;
        w11 = w1 >> 8;
        *(x5) = w11;
        w5 = w1 >> 0x10;
        w1 >>= 0x18;
        *(x4) = w5;
        *(x3) = w1;
        w1 = *(x16);
        w5 = *(x15);
        w3 = *(x7);
        w1 = w6 - w1;
        w4 = *(x14);
        w1 += w5;
        w5 = w3 + 1;
        w6 = w9 | w10;
        w1 += w4;
        x10 = (int64_t) w3;
        w4 = w3 + 2;
        x5 = (int64_t) w5;
        w3 += 3;
        w9 = w1 >> 8;
        *(x10) = w1;
        x4 = (int64_t) w4;
        x3 = (int64_t) w3;
        *(x5) = w9;
        w9 = w1 >> 0x10;
        w1 >>= 0x18;
        w5 = w2 >> 8;
        *(x4) = w9;
        w4 = w2 >> 0x10;
        *(x3) = w1;
        w9 = w2 >> 0x18;
        w1 = *(x7);
        w3 = w1 + 4;
        *(x7) = w3;
        x3 = (int64_t) w3;
        *(x3) = w2;
        w3 = w1 + 5;
        w2 = w1 + 6;
        w1 += 7;
        x3 = (int64_t) w3;
        x2 = (int64_t) w2;
        x1 = (int64_t) w1;
        *(x3) = w5;
        *(x2) = w4;
        *(x1) = w9;
        w1 = *(x7);
        w1 += 4;
        *(x7) = w1;
    } while (w6 != 0);
    w3 = w0 + 1;
    w4 = *(x27);
    x1 = (int64_t) w3;
    w0 = *(x1);
    if (w0 != 0x20) {
        goto label_7;
    }
label_14:
    w0 = w3;
    goto label_8;
label_15:
    x0 = 0x15000;
    x2 = *((x29 + 0x74));
    *((x29 + 0x6c)) = w12;
    w25 = 0x2;
    w27 = 0x12;
    x20 = R;
    x0 = 0x15000;
    x22 = K;
    x0 = *(x20);
    x1 = *(x22);
    memcpy (x0, x1, x2);
    x23 = G;
    x19 = *((x19 + 0xfb0));
    w7 = 0x7f;
    w5 = 0x45;
    w4 = 0x4c;
    w2 = 0x46;
    w14 = 0x1;
    w0 = G;
    w3 = 0x3;
    w22 = *(x19);
    w15 = 0x10;
    w1 = w0 + 1;
    *(x19) = w0;
    x6 = (int64_t) w0;
    w18 = 0x4;
    x1 = (int64_t) w1;
    *(x6) = w7;
    w7 = 0x30;
    *(x1) = w5;
    w1 = w0 + 2;
    w0 += 3;
    w5 = 0x34;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x1) = w4;
    w4 = 0x20;
    *(x0) = w2;
    w1 = 0x13;
    w0 = 0x90;
    w2 = *(x19);
    w6 = w2 + 4;
    *(x19) = w6;
    x6 = (int64_t) w6;
    *(x6) = w14;
    w6 = w2 + 5;
    x6 = (int64_t) w6;
    *(x6) = w14;
    w6 = w2 + 6;
    w2 += 7;
    x6 = (int64_t) w6;
    x2 = (int64_t) w2;
    *(x6) = w14;
    *(x2) = 0;
    w2 = *(x19);
    w6 = w2 + 4;
    *(x19) = w6;
    x6 = (int64_t) w6;
    *(x6) = 0;
    w6 = w2 + 5;
    x6 = (int64_t) w6;
    *(x6) = 0;
    w6 = w2 + 6;
    w2 += 7;
    x6 = (int64_t) w6;
    x2 = (int64_t) w2;
    *(x6) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w6 = w2 + 4;
    *(x19) = w6;
    x6 = (int64_t) w6;
    *(x6) = 0;
    w6 = w2 + 5;
    x6 = (int64_t) w6;
    *(x6) = 0;
    w6 = w2 + 6;
    w2 += 7;
    x6 = (int64_t) w6;
    x2 = (int64_t) w2;
    *(x6) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w6 = w2 + 4;
    *(x19) = w6;
    x6 = (int64_t) w6;
    *(x6) = w25;
    w6 = w2 + 5;
    x6 = (int64_t) w6;
    *(x6) = 0;
    w6 = w2 + 6;
    w2 += 7;
    x6 = (int64_t) w6;
    x2 = (int64_t) w2;
    *(x6) = w3;
    *(x2) = 0;
    w2 = *(x19);
    x26 = *((x26 + 0xfc0));
    w6 = w2 + 4;
    *(x19) = w6;
    x6 = (int64_t) w6;
    *(x6) = w14;
    w6 = w2 + 5;
    x6 = (int64_t) w6;
    *(x6) = 0;
    w6 = w2 + 6;
    w2 += 7;
    x6 = (int64_t) w6;
    x2 = (int64_t) w2;
    *(x6) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w8 = R;
    w20 = 0x5;
    w6 = *(x26);
    w9 = w2 + 5;
    w6 = w8 + w6;
    w8 = w2 + 4;
    *(x19) = w8;
    x9 = (int64_t) w9;
    x8 = (int64_t) w8;
    w10 = w6 >> 8;
    *(x8) = w6;
    w8 = w2 + 6;
    w2 += 7;
    *(x9) = w10;
    x8 = (int64_t) w8;
    w9 = w6 >> w15;
    x2 = (int64_t) w2;
    w6 >>= 0x18;
    *(x8) = w9;
    *(x2) = w6;
    w2 = *(x19);
    w6 = w2 + 4;
    *(x19) = w6;
    x6 = (int64_t) w6;
    *(x6) = w7;
    w6 = w2 + 5;
    x6 = (int64_t) w6;
    *(x6) = 0;
    w6 = w2 + 6;
    w2 += 7;
    x6 = (int64_t) w6;
    x2 = (int64_t) w2;
    *(x6) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w6 = w2 + 4;
    *(x19) = w6;
    x6 = (int64_t) w6;
    *(x6) = 0;
    w6 = w2 + 5;
    x6 = (int64_t) w6;
    *(x6) = 0;
    w6 = w2 + 6;
    w2 += 7;
    x6 = (int64_t) w6;
    x2 = (int64_t) w2;
    *(x6) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w6 = w2 + 4;
    *(x19) = w6;
    x6 = (int64_t) w6;
    *(x6) = 0;
    w6 = w2 + 5;
    x6 = (int64_t) w6;
    *(x6) = 0;
    w6 = w2 + 6;
    w2 += 7;
    x6 = (int64_t) w6;
    x2 = (int64_t) w2;
    *(x6) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w6 = w2 + 4;
    *(x19) = w6;
    x6 = (int64_t) w6;
    *(x6) = w5;
    w5 = w2 + 5;
    x5 = (int64_t) w5;
    *(x5) = 0;
    w5 = w2 + 6;
    w2 += 7;
    x5 = (int64_t) w5;
    x2 = (int64_t) w2;
    *(x5) = w4;
    *(x2) = 0;
    w2 = *(x19);
    w4 = w2 + 4;
    *(x19) = w4;
    x4 = (int64_t) w4;
    *(x4) = w3;
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
    w0 = 0x0;
    w2 = w1 + 1;
    x3 = (int64_t) w1;
    x2 = (int64_t) w2;
    *(x3) = w18;
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
    w1 = w22 - w1;
    *(x19) = w2;
    dbg_ad (x0, w1);
    w2 = *(x19);
    w5 = 0x7;
    w1 = 0x58;
    w0 = 0xa4;
    w3 = w2 + 1;
    x4 = (int64_t) w2;
    x3 = (int64_t) w3;
    *(x4) = w5;
    *(x3) = 0;
    w3 = w2 + 2;
    w2 += 3;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    *(x3) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w3 = w2 + 4;
    *(x19) = w3;
    x3 = (int64_t) w3;
    *(x3) = 0;
    w3 = w2 + 5;
    x3 = (int64_t) w3;
    *(x3) = w15;
    w3 = w2 + 6;
    w2 += 7;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    *(x3) = 0;
    *(x2) = 0;
    w2 = *(x19);
    w3 = w2 + 4;
    *(x19) = w3;
    x3 = (int64_t) w3;
    *(x3) = w25;
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
    w12 = *((x29 + 0x6c));
    w3 = w1 + 1;
    x2 = "/lib/ld-linux.so.2";
    x4 = (int64_t) w1;
    x0 = *((x29 + 0x70));
    x3 = (int64_t) w3;
    w17 = 0xa;
    w6 = *((x2 + 0xf));
    w16 = w12 >> 8;
    *(x4) = w5;
    w4 = 0xb;
    *(x3) = 0;
    w3 = w1 + 2;
    w1 += 3;
    w13 = w12 >> 0x10;
    x3 = (int64_t) w3;
    w11 = w12 >> 0x18;
    x1 = (int64_t) w1;
    w10 = 0x11;
    *(x3) = 0;
    *(x1) = 0;
    x2 = *(x2);
    x3 = *((x2 + 8));
    w1 = *(x19);
    w7 = w1 + 4;
    *(x19) = w7;
    x7 = (int64_t) w7;
    *(x7) = w18;
    w7 = w1 + 5;
    x7 = (int64_t) w7;
    *(x7) = 0;
    w7 = w1 + 6;
    w1 += 7;
    x7 = (int64_t) w7;
    x1 = (int64_t) w1;
    *(x7) = 0;
    w7 = 0x13;
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
    w6 = 0x8;
    *(x3) = w14;
    *(x2) = 0;
    w2 = w1 + 2;
    w1 += 3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x2) = 0;
    *(x1) = 0;
    w1 = *((x29 + 0x78));
    w2 = *(x19);
    w3 = w22 - w1;
    w8 = w2 + 4;
    x1 = 0x5998;
    *(x19) = w8;
    x8 = (int64_t) w8;
    w9 = w3 >> 0x10;
    w25 = w3 >> w6;
    *(x8) = w14;
    w8 = w2 + 5;
    x8 = (int64_t) w8;
    *(x8) = 0;
    w8 = w2 + 6;
    w2 += 7;
    x8 = (int64_t) w8;
    x2 = (int64_t) w2;
    *(x8) = 0;
    w8 = w3 >> 0x18;
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
    *(x14) = w18;
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
    w14 = *(x26);
    w18 = w2 + 6;
    w24 += w14;
    w14 = w2 + 4;
    *(x19) = w14;
    x18 = (int64_t) w18;
    x14 = (int64_t) w14;
    w30 = w24 >> w6;
    *(x14) = w24;
    w14 = w2 + 5;
    w2 += 7;
    x14 = (int64_t) w14;
    x2 = (int64_t) w2;
    *(x14) = w30;
    w14 = w24 >> 0x10;
    w24 >>= 0x18;
    *(x18) = w14;
    *(x2) = w24;
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
    w5 = *(x19);
    w2 = *(x26);
    w14 = w5 + 4;
    w18 = w5 + 5;
    *(x19) = w14;
    w2 = w28 + w2;
    x14 = (int64_t) w14;
    x18 = (int64_t) w18;
    w24 = w2 >> w6;
    *(x14) = w2;
    w14 = w5 + 6;
    w5 += 7;
    *(x18) = w24;
    x14 = (int64_t) w14;
    w18 = w2 >> 0x10;
    x5 = (int64_t) w5;
    w2 >>= 0x18;
    *(x14) = w18;
    *(x5) = w2;
    w2 = *(x19);
    w5 = w2 + 4;
    *(x19) = w5;
    x5 = (int64_t) w5;
    *(x5) = w20;
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
    w5 = *(x26);
    w14 = w2 + 5;
    w21 += w5;
    w5 = w2 + 4;
    *(x19) = w5;
    x14 = (int64_t) w14;
    x5 = (int64_t) w5;
    w18 = w21 >> w6;
    *(x5) = w21;
    w5 = w2 + 6;
    w2 += 7;
    *(x14) = w18;
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
    *(x5) = w17;
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
    *(x5) = w12;
    w5 = w2 + 5;
    x5 = (int64_t) w5;
    *(x5) = w16;
    w5 = w2 + 6;
    w2 += 7;
    x5 = (int64_t) w5;
    x2 = (int64_t) w2;
    *(x5) = w13;
    *(x2) = w11;
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
    *(x4) = w15;
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
    *(x4) = w10;
    w4 = w2 + 5;
    x4 = (int64_t) w4;
    *(x4) = 0;
    w4 = w2 + 6;
    w2 += 7;
    x4 = (int64_t) w4;
    x2 = (int64_t) w2;
    *(x4) = 0;
    *(x2) = 0;
    w4 = *((x29 + 0x78));
    w2 = *(x26);
    w2 = w4 + w2;
    w4 = *(x19);
    w5 = w4 + 4;
    w10 = w4 + 5;
    *(x19) = w5;
    w11 = w2 >> w6;
    x5 = (int64_t) w5;
    x10 = (int64_t) w10;
    *(x5) = w2;
    w5 = w4 + 6;
    w4 += 7;
    *(x10) = w11;
    x5 = (int64_t) w5;
    w10 = w2 >> 0x10;
    x4 = (int64_t) w4;
    w2 >>= 0x18;
    *(x5) = w10;
    *(x4) = w2;
    w2 = *(x19);
    w4 = w2 + 4;
    *(x19) = w4;
    x4 = (int64_t) w4;
    *(x4) = w27;
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
    *(x3) = w25;
    w3 = w2 + 6;
    w2 += 7;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    *(x3) = w9;
    *(x2) = w8;
    w2 = *(x19);
    w3 = w2 + 4;
    w4 = w2 + 5;
    *(x19) = w3;
    x3 = (int64_t) w3;
    x4 = (int64_t) w4;
    *(x3) = w7;
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
    w2 += 7;
    x7 = (int64_t) w5;
    x4 = (int64_t) w4;
    *(x19) = w5;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    *(x7) = w6;
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
    w2 = w22 - w4;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xde0 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x16050);
    x16 = 0x16050;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x58c0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x5848 */
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
    x20 = 0x15000;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xfec */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0xdc0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x2700 */
#include <stdint.h>
 
void X_constprop_6 () {
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
    *((sp + -0x60)) = x29;
    *((sp + -0x60 + 8)) = x30;
    w0 = 0xa;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x22 = 0x15000;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    X ();
    x0 = J;
    w0 = J;
    if (w0 != 0xa) {
        goto label_1;
    }
    x20 = 0x15000;
    w26 = 0x0;
    w25 = 0x7a;
    x21 = C;
    x27 = v;
label_0:
    w19 = *(x21);
    dbg_av ();
    w0 = *(x27);
    w24 = w19 + 0x85;
    w28 = w19 + 0x84;
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x27) = w1;
    x2 = *((x20 + 0xf60));
    w1 = w28;
    *(x0) = w25;
    w0 = *(x27);
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x27) = w3;
    w3 = 0x3f;
    *(x0) = w3;
    w0 = *(x27);
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x27) = w3;
    w3 = 0xf;
    *(x0) = w3;
    if (w24 < 1) {
        goto label_2;
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
label_2:
    x23 = *((x20 + 0xf60));
    w8 = w26 >> 8;
    w7 = w26 >> 0x10;
    w6 = w26 >> 0x18;
    w0 = 0xa;
    w1 = *(x23);
    w5 = w1 + 1;
    w3 = w1 + 2;
    x9 = (int64_t) w1;
    w1 += 3;
    x5 = (int64_t) w5;
    x3 = (int64_t) w3;
    x1 = (int64_t) w1;
    *(x9) = w26;
    *(x5) = w8;
    *(x3) = w7;
    *(x1) = w6;
    w26 = *(x23);
    w1 = w26 + 4;
    *(x23) = w1;
    X ();
    x0 = *((x22 + 0xf28));
    w0 = *(x0);
    if (w0 == 0xa) {
        goto label_0;
    }
    if (w26 == 0) {
label_1:
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
    w0 = *(x23);
    w1 = 0x7a;
    w4 = 0x3f;
    w3 = 0xf;
    w5 = w0 + 1;
    x0 = (int64_t) w0;
    *(x23) = w5;
    *(x0) = w1;
    w0 = *(x23);
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x23) = w1;
    x1 = x23;
    *(x0) = w4;
    w0 = *(x23);
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x23) = w4;
    *(x0) = w3;
    if (w24 < 1) {
        goto label_3;
    }
    do {
        w0 = *(x1);
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x1) = w2;
        *(x0) = w28;
        w28 >>= 8;
        w0 = w28 + 1;
    } while (w0 > 1);
label_3:
    x20 = *((x20 + 0xf60));
    w6 = w26 >> 8;
    w5 = w26 >> 0x10;
    w4 = w26 >> 0x18;
    w21 = 0x47;
    w2 = w19 ^ 1;
    w0 = *(x20);
    w8 = w2 >> 8;
    w7 = w2 >> 0x10;
    w3 = w0 + 1;
    x1 = (int64_t) w0;
    x3 = (int64_t) w3;
    *(x1) = w26;
    w1 = w0 + 2;
    w0 += 3;
    *(x3) = w6;
    x1 = (int64_t) w1;
    w6 = w2 >> 0x18;
    x0 = (int64_t) w0;
    *(x1) = w5;
    w5 = 0x5;
    *(x0) = w4;
    w4 = 0x16;
    w0 = *(x20);
    w1 = w0 + 4;
    w3 = w0 + 5;
    *(x20) = w3;
    x1 = (int64_t) w1;
    *(x1) = w21;
    w1 = *(x20);
    w3 = w1 + 1;
    x9 = (int64_t) w1;
    x3 = (int64_t) w3;
    *(x9) = w2;
    w2 = w1 + 2;
    w1 += 3;
    *(x3) = w8;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x2) = w7;
    *(x1) = w6;
    w1 = *(x20);
    w2 = w1 + 4;
    w1 += 5;
    *(x20) = w1;
    x1 = (int64_t) w2;
    *(x1) = w4;
    w1 = *(x20);
    w3 = w1 + 1;
    w2 = w1 + 2;
    x4 = (int64_t) w1;
    w1 += 3;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x4) = w5;
    *(x3) = 0;
    *(x2) = 0;
    *(x1) = 0;
    w2 = *(x20);
    w2 += 4;
    w1 = w2;
    *(x20) = w2;
    dbg_ap (x0, w1);
    w0 = *(x20);
    w5 = w19 >> 8;
    w4 = w19 >> 0x10;
    w3 = w19 >> 0x18;
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w1;
    *(x0) = w21;
    w0 = *(x20);
    w2 = w0 + 1;
    w1 = w0 + 2;
    x6 = (int64_t) w0;
    w0 += 3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x6) = w19;
    *(x2) = w5;
    *(x1) = w4;
    *(x0) = w3;
    w0 = *(x20);
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    w0 += 4;
    *(x20) = w0;
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
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1000 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x16088;
    x0 = 0x16088;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1038 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x16088;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x16088;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1078 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x16000;
    w0 = *((x19 + 0x88));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x16080);
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xd50 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x16000;
    x17 = *(0x16008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x10c0 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x3dc0 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x33e8 */
#include <stdint.h>
 
void B () {
    return void (*0x2700)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1e40 */
#include <stdint.h>
 
void H (int64_t arg1) {
    x0 = arg1;
    x1 = v;
    w1 = v;
    return void (*0x1cf0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x22c0 */
#include <stdint.h>
 
void X (uint32_t arg1) {
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
    x0 = arg1;
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
    w23 = w0;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    w0 = w19;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    X ();
    x24 = J;
    w23 -= 5;
    x26 = e;
    w21 = 0x0;
    x25 = C;
label_0:
    w0 = *(x24);
    if (w19 != w0) {
        goto label_3;
    }
label_1:
    w20 = *(x25);
    x28 = 0x15000;
    w22 = *(x26);
    dbg_av ();
    if (w19 > 8) {
        goto label_4;
    }
    x27 = *((x28 + 0xf60));
    w2 = 0x50;
    w0 = w19;
    w1 = *(x27);
    w3 = w1 + 1;
    x1 = (int64_t) w1;
    *(x27) = w3;
    *(x1) = w2;
    X ();
    w0 = *(x27);
    w1 = 0x59;
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x27) = w2;
    *(x0) = w1;
    if (w23 < 1) {
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
    if (w22 != 0x25) {
        goto label_0;
    }
    x28 = *((x28 + 0xf60));
    w1 = 0x6d;
    w0 = *(x28);
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x28) = w2;
    *(x0) = w1;
    w0 = *(x24);
    if (w19 == w0) {
        goto label_1;
    }
label_3:
    __asm ("ccmp w19, 8, 4, ne");
    if (w21 > 0) {
        goto label_7;
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
    x28 = *((sp + 0x50 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
label_4:
    x0 = *((x28 + 0xf60));
    w6 = 0x7a;
    w5 = 0x3f;
    w2 = w20 + 0x85;
    w4 = 0xf;
    w1 = w20 + 0x84;
    x2 = x0;
    w3 = *(x0);
    w7 = w3 + 1;
    x3 = (int64_t) w3;
    *(x0) = w7;
    *(x3) = w6;
    w3 = *(x0);
    w6 = w3 + 1;
    x3 = (int64_t) w3;
    *(x0) = w6;
    *(x3) = w5;
    w3 = *(x0);
    w5 = w3 + 1;
    x3 = (int64_t) w3;
    *(x0) = w5;
    *(x3) = w4;
    if (w2 < 1) {
        goto label_8;
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
label_8:
    x28 = *((x28 + 0xf60));
    w6 = w21 >> 8;
    w5 = w21 >> 0x10;
    w4 = w21 >> 0x18;
    w0 = w19;
    w1 = *(x28);
    w3 = w1 + 1;
    w2 = w1 + 2;
    x7 = (int64_t) w1;
    w1 += 3;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x7) = w21;
    *(x3) = w6;
    *(x2) = w5;
    *(x1) = w4;
    w21 = *(x28);
    w1 = w21 + 4;
    *(x28) = w1;
    X ();
    goto label_0;
label_5:
    w0 = w20;
    dbg_aq (w0);
    goto label_0;
label_7:
    x28 = 0x15000;
    w2 = w20 + 0x85;
    w6 = 0x7a;
    w5 = 0x3f;
    w4 = 0xf;
    x0 = v;
    w1 = w20 + 0x84;
    w2 = v;
    w7 = w2 + 1;
    x3 = (int64_t) w2;
    *(x0) = w7;
    x2 = x0;
    *(x3) = w6;
    w3 = v;
    w6 = w3 + 1;
    x3 = (int64_t) w3;
    *(x0) = w6;
    *(x3) = w5;
    w3 = v;
    w5 = w3 + 1;
    x3 = (int64_t) w3;
    *(x0) = w5;
    *(x3) = w4;
    if (w2 < 1) {
        goto label_9;
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
label_9:
    x28 = *((x28 + 0xf60));
    w6 = w21 >> 8;
    w5 = w21 >> 0x10;
    w4 = w21 >> 0x18;
    w19 = 0x47;
    w2 = w20 ^ 1;
    w0 = *(x28);
    w8 = w2 >> 8;
    w7 = w2 >> 0x10;
    w3 = w0 + 1;
    x1 = (int64_t) w0;
    x3 = (int64_t) w3;
    *(x1) = w21;
    w1 = w0 + 2;
    w0 += 3;
    *(x3) = w6;
    x1 = (int64_t) w1;
    w6 = w2 >> 0x18;
    x0 = (int64_t) w0;
    *(x1) = w5;
    w5 = 0x5;
    *(x0) = w4;
    w4 = 0x16;
    w0 = *(x28);
    w1 = w0 + 4;
    w3 = w0 + 5;
    *(x28) = w3;
    x1 = (int64_t) w1;
    *(x1) = w19;
    w1 = *(x28);
    w3 = w1 + 1;
    x9 = (int64_t) w1;
    x3 = (int64_t) w3;
    *(x9) = w2;
    w2 = w1 + 2;
    w1 += 3;
    *(x3) = w8;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x2) = w7;
    *(x1) = w6;
    w1 = *(x28);
    w2 = w1 + 4;
    w1 += 5;
    *(x28) = w1;
    x1 = (int64_t) w2;
    *(x1) = w4;
    w1 = *(x28);
    w3 = w1 + 1;
    w2 = w1 + 2;
    x4 = (int64_t) w1;
    w1 += 3;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x4) = w5;
    *(x3) = 0;
    *(x2) = 0;
    *(x1) = 0;
    w2 = *(x28);
    w2 += 4;
    w1 = w2;
    *(x28) = w2;
    dbg_ap (x0, w1);
    w0 = *(x28);
    w5 = w20 >> 8;
    w4 = w20 >> 0x10;
    w3 = w20 >> 0x18;
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x28) = w1;
    *(x0) = w19;
    w0 = *(x28);
    w2 = w0 + 1;
    w1 = w0 + 2;
    x6 = (int64_t) w0;
    w0 += 3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x6) = w20;
    *(x2) = w5;
    *(x1) = w4;
    *(x0) = w3;
    w0 = *(x28);
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    w0 += 4;
    *(x28) = w0;
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
label_2:
    return void (*0x2a50)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x10f8 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1e50 */
#include <stdint.h>
 
void x (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w2 = w0 + 1;
    x5 = 0x15000;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x58c4 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x3f88 */
#include <stdint.h>
 
void ae (int64_t arg1) {
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
    *((sp + -0x60)) = x29;
    *((sp + -0x60 + 8)) = x30;
    x1 = 0x15000;
    x29 = sp;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    x25 = 0x15000;
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
    x4 = 0x15000;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1fc0 */
#include <stdint.h>
 
void aa (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x5 = 0x15000;
    w8 = 0x7a;
    w7 = 0x3f;
    w3 = w0 + 0x85;
    w6 = 0xf;
    x2 = v;
    w0 += 0x84;
    x3 = x2;
    w4 = v;
    w9 = w4 + 1;
    x4 = (int64_t) w4;
    *(x2) = w9;
    *(x4) = w8;
    w4 = v;
    w8 = w4 + 1;
    x4 = (int64_t) w4;
    *(x2) = w8;
    *(x4) = w7;
    w4 = v;
    w7 = w4 + 1;
    x4 = (int64_t) w4;
    *(x2) = w7;
    *(x4) = w6;
    if (w3 < 1) {
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x33f0 */
#include <stdint.h>
 
uint64_t ac () {
    int64_t var_10h;
    int64_t var_10h_2;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    X_constprop_6 ();
    w5 = 0x7a;
    w4 = 0x3f;
    w3 = 0xf;
    w2 = 0x7b;
    x1 = v;
    w0 = v;
    w6 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w6;
    *(x0) = w5;
    w0 = v;
    w5 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w5;
    *(x0) = w4;
    w0 = v;
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w4;
    *(x0) = w3;
    w0 = v;
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w3;
    *(x0) = w2;
    w0 = v;
    w3 = w0 + 1;
    w2 = w0 + 2;
    x4 = (int64_t) w0;
    w0 += 3;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    x0 = (int64_t) w0;
    *(x4) = 0;
    *(x3) = 0;
    *(x2) = 0;
    *(x0) = 0;
    w0 = v;
    w2 = w0 + 4;
    *(x1) = w2;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x15f60;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x11a0 */
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
    return 0x15fb8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xe20 */
#include <stdint.h>
 
void isalnum () {
    x17 = *(0x16070);
    x16 = 0x16070;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1cb0 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x2098 */
#include <stdint.h>
 
uint32_t dbg_aq (int64_t arg1) {
    x0 = arg1;
    /* int aq(int a); */
    x6 = 0x15000;
    w8 = 0x39;
    w5 = 0x3e;
    w4 = 0x47;
    w7 = 0xf;
    x1 = v;
    w2 = v;
    w9 = w2 + 1;
    x3 = (int64_t) w2;
    *(x1) = w9;
    w2 = w0 + 0x91;
    w0 += 0x90;
    x2 = x1;
    *(x3) = w8;
    w3 = v;
    w8 = w3 + 1;
    x3 = (int64_t) w3;
    *(x1) = w8;
    *(x3) = w5;
    w3 = v;
    w5 = w3 + 1;
    x3 = (int64_t) w3;
    *(x1) = w5;
    *(x3) = w4;
    w3 = v;
    w5 = w3 + 1;
    w4 = w3 + 2;
    x8 = (int64_t) w3;
    w3 += 3;
    x5 = (int64_t) w5;
    x4 = (int64_t) w4;
    x3 = (int64_t) w3;
    *(x8) = 0;
    *(x5) = 0;
    *(x4) = 0;
    *(x3) = 0;
    w3 = v;
    w4 = w3 + 4;
    w3 += 5;
    *(x1) = w3;
    x1 = (int64_t) w4;
    *(x1) = w7;
    if (w2 < 1) {
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
    x1 = *((x6 + 0xf60));
    w2 = 0x3f;
    w0 = *(x1);
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w3;
    *(x0) = w2;
    w0 = 0x0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1c30 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1c70 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1ed8 */
#include <stdint.h>
 
void M (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w3 = w0;
    w0 = w1;
    w4 = 0x47;
    x2 = v;
    w8 = w3 >> 8;
    w7 = w3 >> 0x10;
    w6 = w3 >> 0x18;
    w1 = v;
    w5 = w1 + 1;
    x1 = (int64_t) w1;
    *(x2) = w5;
    *(x1) = w4;
    w1 = v;
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
    w1 = v;
    w1 += 4;
    *(x2) = w1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1f50 */
#include <stdint.h>
 
uint64_t I (int64_t arg1) {
    x0 = arg1;
    w3 = 0x16;
    w7 = w0 >> 8;
    w6 = w0 >> 0x10;
    w5 = w0 >> 0x18;
    x2 = v;
    w1 = v;
    w4 = w1 + 1;
    x1 = (int64_t) w1;
    *(x2) = w4;
    *(x1) = w3;
    w1 = v;
    w4 = w1 + 1;
    w3 = w1 + 2;
    x8 = (int64_t) w1;
    w1 += 3;
    x4 = (int64_t) w4;
    x3 = (int64_t) w3;
    x1 = (int64_t) w1;
    *(x8) = w0;
    *(x4) = w7;
    *(x3) = w6;
    *(x1) = w5;
    w0 = v;
    w1 = w0 + 4;
    *(x2) = w1;
    return 0x15f60;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x2190 */
#include <stdint.h>
 
void W (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w2 = w0 + 0x84;
    x5 = 0x15000;
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
    w2 = *(x0);
    __asm ("ccmp w2, 0, 4, le");
    if (w2 == 0x1ff) {
        x0 = *((x5 + 0xf60));
        w1 += 4;
        w4 = 0x5;
        x1 = (int64_t) w1;
        w2 = *(x0);
        w3 = *(x1);
        w5 = w2 + 1;
        x2 = (int64_t) w2;
        *(x0) = w5;
        w8 = w3 >> 8;
        w7 = w3 >> 0x10;
        *(x2) = w4;
        w6 = w3 >> 0x18;
        w2 = *(x0);
        w5 = w2 + 1;
        w4 = w2 + 2;
        x9 = (int64_t) w2;
        w2 += 3;
        x5 = (int64_t) w5;
        x4 = (int64_t) w4;
        x2 = (int64_t) w2;
        *(x9) = w3;
        *(x5) = w8;
        *(x4) = w7;
        *(x2) = w6;
        w2 = *(x0);
        w3 = w2 + 4;
        *(x0) = w3;
        *(x1) = w2;
        return;
    }
    x0 = *((x5 + 0xf60));
    w3 = 0x7a;
    w7 = w2 >> 8;
    w6 = w2 >> 0x10;
    w5 = w2 >> 0x18;
    w1 = *(x0);
    w4 = w1 + 1;
    x1 = (int64_t) w1;
    *(x0) = w4;
    *(x1) = w3;
    w1 = *(x0);
    w4 = w1 + 1;
    w3 = w1 + 2;
    x8 = (int64_t) w1;
    w1 += 3;
    x4 = (int64_t) w4;
    x3 = (int64_t) w3;
    x1 = (int64_t) w1;
    *(x8) = w2;
    *(x4) = w7;
    *(x3) = w6;
    *(x1) = w5;
    w1 = *(x0);
    w1 += 4;
    *(x0) = w1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x3788 */
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
    int64_t var_30h_2;
    x0 = arg1;
    /* int S(int s); */
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x15000;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x22 = (int64_t) w0;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
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
    X_constprop_6 ();
    do {
label_1:
        dbg_av ();
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
label_4:
        dbg_av ();
        dbg_av ();
        if (w19 == 0x160) {
            goto label_8;
        }
        w0 = *(x21);
        if (w0 != 0x3b) {
            X_constprop_6 ();
        }
        dbg_av ();
        x21 = 0x15000;
        x0 = *((x20 + 0xfa8));
        *((x29 + 0x4c)) = 0;
        x22 = v;
        w0 = *(x0);
        w19 = v;
        if (w0 != 0x3b) {
            X_constprop_6 ();
            w0 = *(x22);
            w4 = 0x7a;
            w3 = 0x3f;
            w2 = 0xf;
            w1 = w0 + 1;
            x0 = (int64_t) w0;
            *(x22) = w1;
            w1 = 0x7b;
            *(x0) = w4;
            w0 = *(x22);
            w4 = w0 + 1;
            x0 = (int64_t) w0;
            *(x22) = w4;
            *(x0) = w3;
            w0 = *(x22);
            w3 = w0 + 1;
            x0 = (int64_t) w0;
            *(x22) = w3;
            *(x0) = w2;
            w0 = *(x22);
            w2 = w0 + 1;
            x0 = (int64_t) w0;
            *(x22) = w2;
            *(x0) = w1;
            w0 = *(x22);
            w2 = w0 + 1;
            w1 = w0 + 2;
            x3 = (int64_t) w0;
            w0 += 3;
            x2 = (int64_t) w2;
            x1 = (int64_t) w1;
            x0 = (int64_t) w0;
            *(x3) = 0;
            *(x2) = 0;
            *(x1) = 0;
            *(x0) = 0;
            w0 = *(x22);
            w1 = w0 + 4;
            *((x29 + 0x4c)) = w0;
            *(x22) = w1;
        }
        dbg_av ();
        x20 = *((x20 + 0xfa8));
        w0 = *(x20);
        if (w0 != 0x29) {
            x20 = *((x21 + 0xf60));
            w22 = 0x16;
            w0 = *(x20);
            w1 = w0 + 1;
            x0 = (int64_t) w0;
            *(x20) = w1;
            *(x0) = w22;
            w0 = *(x20);
            w2 = w0 + 1;
            w1 = w0 + 2;
            x3 = (int64_t) w0;
            w0 += 3;
            x2 = (int64_t) w2;
            x1 = (int64_t) w1;
            x0 = (int64_t) w0;
            *(x3) = 0;
            *(x2) = 0;
            *(x1) = 0;
            *(x0) = 0;
            w24 = *(x20);
            w23 = w24 + 4;
            *(x20) = w23;
            X_constprop_6 ();
            w1 = *(x20);
            w0 = w24;
            w2 = w1 + 1;
            w19 -= w1;
            x1 = (int64_t) w1;
            *(x20) = w2;
            w2 = w19 - 5;
            w19 = w23;
            *(x1) = w22;
            w6 = w2 >> 8;
            w5 = w2 >> 0x10;
            w1 = *(x20);
            w4 = w2 >> 0x18;
            w3 = w1 + 1;
            x7 = (int64_t) w1;
            x3 = (int64_t) w3;
            *(x7) = w2;
            w2 = w1 + 2;
            w1 += 3;
            *(x3) = w6;
            x2 = (int64_t) w2;
            x1 = (int64_t) w1;
            *(x2) = w5;
            *(x1) = w4;
            w2 = *(x20);
            w2 += 4;
            w1 = w2;
            *(x20) = w2;
            x0 = dbg_ap (x0, w1);
        }
label_2:
        dbg_av ();
        x0 = x29 + 0x4c;
        dbg_S (x0);
        x2 = *((x21 + 0xf60));
        w3 = 0x16;
        w1 = *(x2);
        w4 = w1 + 1;
        w0 = w19 - w1;
        x1 = (int64_t) w1;
        *(x2) = w4;
        w0 -= 5;
        *(x1) = w3;
        w7 = w0 >> 8;
        w6 = w0 >> 0x10;
        w1 = *(x2);
        w5 = w0 >> 0x18;
        w4 = w1 + 1;
        w3 = w1 + 2;
        x8 = (int64_t) w1;
        w1 += 3;
        x4 = (int64_t) w4;
        x3 = (int64_t) w3;
        x1 = (int64_t) w1;
        *(x8) = w0;
        *(x4) = w7;
        *(x3) = w6;
        *(x1) = w5;
        w3 = *(x2);
        w0 = *((x29 + 0x4c));
        w3 += 4;
        w1 = w3;
        *(x2) = w3;
        dbg_ap (x0, w1);
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x23 = *((sp + 0x30));
        x24 = *((sp + 0x30 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_6:
        dbg_av ();
        w0 = *(x21);
        if (w0 != 0x3b) {
            X_constprop_6 ();
        }
        w4 = 0x16;
        x1 = v;
        x2 = U;
        w0 = v;
        w3 = U;
        w5 = w0 + 1;
        x0 = (int64_t) w0;
        *(x1) = w5;
        w8 = w3 >> 8;
        w7 = w3 >> 0x10;
        *(x0) = w4;
        w6 = w3 >> 0x18;
        w0 = v;
        w5 = w0 + 1;
        w4 = w0 + 2;
        x9 = (int64_t) w0;
        w0 += 3;
        x5 = (int64_t) w5;
        x4 = (int64_t) w4;
        x0 = (int64_t) w0;
        *(x9) = w3;
        *(x5) = w8;
        *(x4) = w7;
        *(x0) = w6;
        w0 = v;
        w3 = w0 + 4;
        *(x2) = w0;
        *(x1) = w3;
    } while (1);
label_3:
    dbg_av ();
    dbg_av ();
    X_constprop_6 ();
    x19 = v;
    w4 = 0x7a;
    w3 = 0x3f;
    w2 = 0xf;
    w1 = 0x7b;
    w0 = v;
    w5 = w0 + 1;
    x0 = (int64_t) w0;
    *(x19) = w5;
    *(x0) = w4;
    w0 = v;
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x19) = w4;
    *(x0) = w3;
    w0 = v;
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x19) = w3;
    *(x0) = w2;
    w0 = v;
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x19) = w2;
    *(x0) = w1;
    w0 = v;
    w2 = w0 + 1;
    w1 = w0 + 2;
    x3 = (int64_t) w0;
    w0 += 3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x3) = 0;
    *(x2) = 0;
    *(x1) = 0;
    *(x0) = 0;
    w0 = v;
    w1 = w0 + 4;
    *((x29 + 0x4c)) = w0;
    *(x19) = w1;
    dbg_av ();
    w0 = w22;
    dbg_S (w0);
    w0 = *(x21);
    if (w0 == 0x138) {
        goto label_9;
    }
    w1 = *(x19);
    w0 = *((x29 + 0x4c));
    dbg_ap (w0, w1);
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
    w3 = 0x16;
    w2 = *(x22);
    x1 = v;
    w7 = w2 >> 8;
    w6 = w2 >> 0x10;
    w5 = w2 >> 0x18;
    w0 = v;
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w4;
    *(x0) = w3;
    w0 = v;
    w4 = w0 + 1;
    w3 = w0 + 2;
    x8 = (int64_t) w0;
    w0 += 3;
    x4 = (int64_t) w4;
    x3 = (int64_t) w3;
    x0 = (int64_t) w0;
    *(x8) = w2;
    *(x4) = w7;
    *(x3) = w6;
    *(x0) = w5;
    w0 = v;
    w2 = w0 + 4;
    *(x1) = w2;
    *(x22) = w0;
    goto label_1;
label_9:
    dbg_av ();
    w0 = *(x19);
    w1 = 0x16;
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x19) = w2;
    *(x0) = w1;
    w0 = *(x19);
    w2 = w0 + 1;
    w1 = w0 + 2;
    x3 = (int64_t) w0;
    w0 += 3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x3) = 0;
    *(x2) = 0;
    *(x1) = 0;
    *(x0) = 0;
    w20 = *(x19);
    w0 = *((x29 + 0x4c));
    w2 = w20 + 4;
    w1 = w2;
    *(x19) = w2;
    dbg_ap (x0, w1);
    w0 = w22;
    dbg_S (w0);
    w1 = *(x19);
    w0 = w20;
    dbg_ap (w0, w1);
    goto label_0;
label_8:
    x21 = 0x15000;
    x20 = v;
    w19 = v;
    X_constprop_6 ();
    w0 = v;
    w4 = 0x7a;
    w3 = 0x3f;
    w2 = 0xf;
    w5 = w0 + 1;
    w1 = 0x7b;
    x0 = (int64_t) w0;
    *(x20) = w5;
    *(x0) = w4;
    w0 = v;
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w4;
    *(x0) = w3;
    w0 = v;
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w3;
    *(x0) = w2;
    w0 = v;
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w2;
    *(x0) = w1;
    w0 = v;
    w2 = w0 + 1;
    w1 = w0 + 2;
    x3 = (int64_t) w0;
    w0 += 3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x3) = 0;
    *(x2) = 0;
    *(x1) = 0;
    *(x0) = 0;
    w0 = v;
    w1 = w0 + 4;
    *((x29 + 0x4c)) = w0;
    *(x20) = w1;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x1cf0 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x2a50 */
#include <stdint.h>
 
uint64_t dbg_ab (int64_t arg1) {
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_50h;
    x24 = arg1;
    /* int ab(int s); */
    *((sp + -0x60)) = x29;
    *((sp + -0x60 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x15000;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x23 = e;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    w22 = e;
    if (w22 == 0x22) {
        goto label_15;
    }
    w25 = w0;
    x21 = J;
    x24 = C;
    w26 = J;
    w19 = C;
    dbg_av ();
    if (w22 == 2) {
        goto label_16;
    }
    if (w26 == 2) {
        goto label_17;
    }
    if (w22 == 0x28) {
        goto label_18;
    }
    if (w22 == 0x2a) {
        goto label_19;
    }
    if (w22 == 0x26) {
        goto label_20;
    }
    w0 = *(x23);
    w27 = (w0 == 0x3d) ? 1 : 0;
    w27 &= w25;
    if (w27 != w27) {
        goto label_21;
    }
    if (w0 != 0x28) {
        w1 = w22;
        w0 = 0x8;
        W ();
        w0 = *(x21);
        if (w0 == 0xb) {
            goto label_22;
        }
label_11:
        x0 = *((x20 + 0xfa8));
        w0 = *(x0);
        if (w0 != 0x28) {
            goto label_7;
        }
        w27 = 0x0;
    }
    x21 = 0x15000;
label_9:
    x19 = *((x21 + 0xf60));
    w2 = 0x7e;
    w1 = 0x13;
    w0 = *(x19);
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x19) = w3;
    *(x0) = w2;
    w0 = *(x19);
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x19) = w2;
    *(x0) = w1;
    w0 = *(x19);
    w2 = w0 + 1;
    w1 = w0 + 2;
    x3 = (int64_t) w0;
    w0 += 3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x3) = 0;
    *(x2) = 0;
    *(x1) = 0;
    *(x0) = 0;
    w26 = *(x19);
    w0 = w26 + 4;
    *(x19) = w0;
    dbg_av ();
    x20 = *((x20 + 0xfa8));
    w0 = *(x20);
    if (w0 == 0x29) {
        goto label_23;
    }
    w28 = 0x0;
    w25 = 0x76;
    w24 = 0x7b;
    w23 = 0x24;
    while (w1 != 0x2c) {
        if (w1 == 0x29) {
            goto label_24;
        }
label_0:
        X_constprop_6 ();
        w0 = *(x19);
        w5 = w28 >> 8;
        w3 = w28 >> 0x10;
        w1 = w28 >> 0x18;
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x19) = w2;
        *(x0) = w25;
        w0 = *(x19);
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x19) = w2;
        *(x0) = w24;
        w0 = *(x19);
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x19) = w2;
        *(x0) = w23;
        w0 = *(x19);
        w4 = w0 + 1;
        w2 = w0 + 2;
        x6 = (int64_t) w0;
        w0 += 3;
        x4 = (int64_t) w4;
        x2 = (int64_t) w2;
        x0 = (int64_t) w0;
        *(x6) = w28;
        w28 += 4;
        *(x4) = w5;
        *(x2) = w3;
        *(x0) = w1;
        w0 = *(x19);
        w1 = *(x20);
        w0 += 4;
        *(x19) = w0;
    }
    dbg_av ();
    w1 = *(x20);
    if (w1 != 0x29) {
        goto label_0;
    }
label_24:
    w24 = (int8_t) w28;
    x23 = (x28 >> 8) & ((1 << 8) - 1);
    x20 = (x28 >> 0x10) & ((1 << 8) - 1);
    w19 = w28 >> 0x18;
label_12:
    x0 = (int64_t) w26;
    w1 = w26 + 2;
    x1 = (int64_t) w1;
    *(x0) = w24;
    w0 = w26 + 1;
    x0 = (int64_t) w0;
    *(x0) = w23;
    w0 = w26 + 3;
    *(x1) = w20;
    x0 = (int64_t) w0;
    *(x0) = w19;
    dbg_av ();
    if (w27 == 0) {
        goto label_25;
    }
    x0 = *((x21 + 0xf60));
    w4 = 0x0;
    w3 = 0x6b;
    w2 = 0x24;
    w28 += 4;
    w1 = *(x0);
    w5 = w1 + 1;
    x1 = (int64_t) w1;
    *(x0) = w5;
    *(x1) = w4;
    w1 = *(x0);
    w4 = w1 + 1;
    x1 = (int64_t) w1;
    *(x0) = w4;
    *(x1) = w3;
    w1 = *(x0);
    w3 = w1 + 1;
    x1 = (int64_t) w1;
    *(x0) = w3;
    *(x1) = w2;
    w1 = *(x0);
    w3 = w1 + 1;
    w2 = w1 + 2;
    x4 = (int64_t) w1;
    w1 += 3;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    *(x4) = w24;
    w24 = (int8_t) w28;
    *(x3) = w23;
    x23 = (x28 >> 8) & ((1 << 8) - 1);
    *(x2) = w20;
    x20 = (x28 >> 0x10) & ((1 << 8) - 1);
    *(x1) = w19;
    w19 = w28 >> 0x18;
    w0 = *(x0);
    w0 += 4;
label_8:
    x21 = *((x21 + 0xf60));
    x2 = (int64_t) w0;
    w3 = 0x7e;
    w0++;
    w1 = 0x3b;
    *(x21) = w0;
    *(x2) = w3;
    w0 = *(x21);
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x21) = w2;
    *(x0) = w1;
    w0 = *(x21);
    w2 = w0 + 1;
    w1 = w0 + 2;
    x3 = (int64_t) w0;
    w0 += 3;
    x2 = (int64_t) w2;
    x1 = (int64_t) w1;
    x0 = (int64_t) w0;
    *(x3) = w24;
    *(x2) = w23;
    *(x1) = w20;
    *(x0) = w19;
    w0 = *(x21);
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    w0 += 4;
    *(x21) = w0;
    w0 = 0x0;
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
label_15:
    x25 = 0x15000;
    w4 = 0x47;
    x26 = 0x15000;
    x27 = 0x15000;
    x1 = v;
    x19 = 0x15000;
    x2 = i;
    w23 = 0xa;
    x3 = y;
    x21 = V;
    w0 = v;
    w3 = y;
    x24 = ak;
    w2 = 0x15fb0;
    x3 = (int64_t) w0;
    w0++;
    *(x1) = w0;
    *(x3) = w4;
    w7 = w2 >> 8;
    w6 = w2 >> 0x10;
    w5 = w2 >> 0x18;
    w0 = v;
    x4 = m;
    w3 = w0 + 1;
    x8 = (int64_t) w0;
    x3 = (int64_t) w3;
    *(x8) = w2;
    w2 = w0 + 2;
    w0 += 3;
    *(x3) = w7;
    x2 = (int64_t) w2;
    x0 = (int64_t) w0;
    *(x2) = w6;
    *(x0) = w5;
    w2 = v;
    w0 = m;
    w2 += 4;
    *(x1) = w2;
    do {
label_4:
        if (w0 == 0x22) {
            goto label_26;
        }
label_1:
        if (w0 == 0x5c) {
            goto label_27;
        }
label_2:
        w0 = (int8_t) w0;
label_3:
        x2 = *((x25 + 0xfb0));
        x3 = *((x27 + 0xf40));
        w1 = *(x2);
        w4 = w1 + 1;
        x1 = (int64_t) w1;
        *(x2) = w4;
        *(x1) = w0;
        w0 = *(x3);
        if (w0 == 0) {
            goto label_28;
        }
        w1 = w0 + 1;
        x0 = (int64_t) w0;
        *(x3) = w1;
        x1 = *((x26 + 0xfb8));
        w0 = *(x0);
        *(x1) = w0;
    } while (w0 != 2);
    *(x3) = 0;
    x0 = al;
    w0 = al;
    *(x1) = w0;
    if (w0 != 0x22) {
        goto label_1;
    }
label_26:
    x25 = *((x25 + 0xfb0));
    x27 = *((x27 + 0xf40));
    x0 = *(x25);
    *(x0) = 0;
    w0 = *(x25);
    w1 = *(x27);
    w0 += 4;
    w0 &= 0xfffffffc;
    *(x25) = w0;
    if (w1 == 0) {
        goto label_29;
    }
    w0 = w1 + 1;
    x1 = (int64_t) w1;
    *(x27) = w0;
    x26 = *((x26 + 0xfb8));
    w0 = *(x1);
    *(x26) = w0;
    if (w0 == 2) {
        goto label_30;
    }
label_6:
    dbg_av ();
    x0 = *((x20 + 0xfa8));
    w0 = *(x0);
label_5:
    if (w0 == 0x28) {
        goto label_31;
    }
label_7:
    w0 = 0x0;
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
label_27:
    w0 = *(x21);
    if (w0 == 0) {
        goto label_32;
    }
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x21) = w1;
    x1 = *((x26 + 0xfb8));
    w0 = *(x0);
    *(x1) = w0;
    if (w0 == 2) {
        goto label_33;
    }
label_10:
    if (w0 != 0x6e) {
        goto label_2;
    }
    x0 = *((x26 + 0xfb8));
    *(x0) = w23;
    w0 = 0xa;
    goto label_3;
label_28:
    x0 = *((x19 + 0xf70));
    x0 = *(x0);
    fgetc (x0);
    x1 = *((x26 + 0xfb8));
    *(x1) = w0;
    goto label_4;
label_18:
    X_constprop_6 ();
    dbg_av ();
    w0 = *(x23);
    goto label_5;
label_30:
    *(x27) = 0;
    x0 = al;
    w0 = al;
    *(x26) = w0;
    goto label_6;
label_25:
    x1 = *((x21 + 0xf60));
    w2 = w22 + 4;
    w4 = 0x17;
    x2 = (int64_t) w2;
    w0 = *(x1);
    w3 = *(x2);
    w5 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w5;
    w7 = w3 >> 8;
    w6 = w3 >> 0x10;
    *(x0) = w4;
    w5 = w3 >> 0x18;
    w0 = *(x1);
    w4 = w0 + 1;
    x8 = (int64_t) w0;
    x4 = (int64_t) w4;
    *(x8) = w3;
    w3 = w0 + 2;
    w0 += 3;
    *(x4) = w7;
    x3 = (int64_t) w3;
    x0 = (int64_t) w0;
    *(x3) = w6;
    *(x0) = w5;
    w0 = *(x1);
    w3 = w0 + 4;
    *(x1) = w3;
    *(x2) = w0;
    if (w28 == 0) {
        goto label_7;
    }
    w0 = *(x1);
    goto label_8;
label_31:
    x21 = 0x15000;
    w27 = 0x1;
    w2 = 0x50;
    x1 = v;
    w0 = v;
    w3 = w0 + w27;
    x0 = (int64_t) w0;
    *(x1) = w3;
    *(x0) = w2;
    goto label_9;
label_32:
    x0 = *(x24);
    fgetc (x0);
    x1 = *((x26 + 0xfb8));
    *(x1) = w0;
    goto label_10;
label_21:
    dbg_av ();
    X_constprop_6 ();
    w1 = w22;
    w0 = 0x6;
    W ();
    goto label_11;
label_16:
    w2 = 0x47;
    w6 = w19 >> 8;
    w5 = w19 >> 0x10;
    w4 = w19 >> 0x18;
    x1 = v;
    w0 = v;
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w3;
    *(x0) = w2;
    w0 = v;
    w3 = w0 + 1;
    x2 = (int64_t) w0;
    x3 = (int64_t) w3;
    *(x2) = w19;
    w2 = w0 + 2;
    w0 += 3;
    *(x3) = w6;
    x2 = (int64_t) w2;
    x0 = (int64_t) w0;
    *(x2) = w5;
    *(x0) = w4;
    w2 = v;
    w0 = *(x23);
    w2 += 4;
    *(x1) = w2;
    goto label_5;
label_17:
    x21 = 0x15000;
    w0 = 0x0;
    dbg_ab (w0);
    x1 = v;
    w2 = 0x46;
    w0 = v;
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w3;
    *(x0) = w2;
    w0 = v;
    w3 = w0 + 1;
    w2 = w0 + 2;
    x4 = (int64_t) w0;
    w0 += 3;
    x3 = (int64_t) w3;
    x2 = (int64_t) w2;
    x0 = (int64_t) w0;
    *(x4) = 0;
    *(x3) = 0;
    *(x2) = 0;
    *(x0) = 0;
    w0 = v;
    w0 += 4;
    *(x1) = w0;
    if (w22 == 0x21) {
        goto label_34;
    }
    w2 = w19 + 1;
    if (w2 > 1) {
        goto label_35;
    }
    goto label_36;
    do {
        w0 = *(x1);
label_35:
        x2 = (int64_t) w0;
        w0++;
        *(x1) = w0;
        *(x2) = w19;
        w19 >>= 8;
        w0 = w19 + 1;
    } while (w0 > 1);
label_13:
    x0 = *((x20 + 0xfa8));
    w0 = *(x0);
    goto label_5;
label_29:
    x0 = ak;
    x0 = *(x0);
    fgetc (x0);
    x26 = *((x26 + 0xfb8));
    *(x26) = w0;
    goto label_6;
label_33:
    *(x21) = 0;
    x0 = al;
    w0 = al;
    *(x1) = w0;
    goto label_10;
label_19:
    dbg_av ();
    w22 = *(x23);
    dbg_av ();
    dbg_av ();
    w0 = *(x23);
    if (w0 == 0x2a) {
        goto label_37;
    }
    dbg_av ();
    w0 = 0x0;
    dbg_ab (w0);
    w0 = *(x23);
    if (w0 == 0x3d) {
        goto label_38;
    }
    if (w22 == 0) {
        goto label_5;
    }
    x21 = 0x15000;
    if (w22 == 0x100) {
        goto label_39;
    }
    x1 = *((x21 + 0xf60));
    w3 = 0xf;
    w2 = 0x41;
    w0 = *(x1);
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w4;
    *(x0) = w3;
label_14:
    w0 = *(x1);
    x21 = *((x21 + 0xf60));
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w3;
    *(x0) = w2;
    x0 = *((x20 + 0xfa8));
    w1 = *(x21);
    w1++;
    w0 = *(x0);
    *(x21) = w1;
    goto label_5;
label_20:
    w1 = *(x23);
    w0 = 0xa;
    W ();
    dbg_av ();
    w0 = *(x23);
    goto label_5;
label_23:
    w19 = 0x0;
    w20 = 0x0;
    w23 = 0x0;
    w24 = 0x0;
    w28 = 0x0;
    goto label_12;
label_22:
    w1 = w22;
    w0 = 0x0;
    W ();
    w1 = *(x24);
    x21 = v;
    w0 = w1 + 1;
    if (w0 < 1) {
        goto label_40;
    }
    do {
        w0 = *(x21);
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x21) = w2;
        *(x0) = w1;
        w1 >>= 8;
        w0 = w1 + 1;
    } while (w0 > 1);
label_40:
    dbg_av ();
    goto label_11;
label_34:
    w0 = w19;
    dbg_aq (w0);
    w0 = *(x23);
    goto label_5;
label_37:
    dbg_av ();
    w22 = 0x0;
    dbg_av ();
    dbg_av ();
    dbg_av ();
    dbg_av ();
    w0 = 0x0;
    dbg_ab (w0);
    w0 = *(x23);
    if (w0 != 0x3d) {
        goto label_5;
    }
label_38:
    dbg_av ();
    w1 = 0x50;
    x21 = v;
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x21) = w2;
    *(x0) = w1;
    X_constprop_6 ();
    w1 = v;
    w2 = 0x59;
    w0 = (w22 == 0x100) ? 1 : 0;
    w3 = w1 + 1;
    w0 = 0x160e8;
    x1 = (int64_t) w1;
    *(x21) = w3;
    *(x1) = w2;
    do {
        w1 = *(x21);
        w2 = w1 + 1;
        x1 = (int64_t) w1;
        *(x21) = w2;
        *(x1) = w0;
        w0 >>= 8;
    } while (w0 == 1);
    goto label_13;
label_39:
    w2 = 0x74;
    x1 = *((x21 + 0xf60));
    goto label_14;
label_36:
    w0 = *(x23);
    goto label_5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x3e20 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0x11d8 */
#include <stdint.h>
 
void an () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x15000;
    x19 = m;
    w0 = m;
    while (w0 != 0x6e) {
label_0:
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
        x1 = V;
        w0 = V;
        if (w0 == 0) {
            goto label_2;
        }
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x1) = w2;
        w0 = *(x0);
        *(x19) = w0;
        if (w0 == 2) {
            goto label_3;
        }
label_1:
    }
    x20 = *((x20 + 0xfb8));
    w0 = 0xa;
    *(x20) = w0;
    goto label_0;
label_2:
    x0 = ak;
    x0 = *(x0);
    fgetc (x0);
    *(x19) = w0;
    goto label_1;
label_3:
    *(x1) = 0;
    x0 = al;
    w0 = al;
    *(x19) = w0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xd08 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xd40 */
#include <stdint.h>
 
void memcpy () {
    x16 = 0x16000;
    x17 = *(0x16000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xd60 */
#include <stdint.h>
 
void fclose () {
    x17 = *(0x16010);
    x16 = 0x16010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xd80 */
#include <stdint.h>
 
void isspace () {
    x17 = *(0x16020);
    x16 = 0x16020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xdd0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x16048);
    x16 = 0x16048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xdf0 */
#include <stdint.h>
 
void strtol () {
    x17 = *(0x16058);
    x16 = 0x16058;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xe00 */
#include <stdint.h>
 
void fwrite () {
    x17 = *(0x16060);
    x16 = 0x16060;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xe10 */
#include <stdint.h>
 
void strstr () {
    x17 = *(0x16068);
    x16 = 0x16068;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O3/subject.exe @ 0xd20 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 272 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x15ff8;
    return uint64_t (*x17)() ();
}

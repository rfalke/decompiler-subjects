/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xe58 */
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
    x4 = *(0x130d0);
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xc90 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x14020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xd10 */
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
    x2 = .comment;
    w19 = w0 - 1;
    x20 = Q;
    x0 = .comment;
    *((sp + 0x20)) = x21;
    w21 = w1;
    *(x20) = w0;
    __asm ("b.le 0xd64");
    w21 = w1 + 4;
    x1 = 0x3750;
    x0 = (int64_t) w21;
    x0 = *(x0);
    fopen (x0, x1);
    *(x20) = w0;
    x0 = 0x1;
    x1 = 0x1869f;
    w0 = calloc (x0, x1);
    x3 = (int64_t) w0;
    x2 = " int if else while break return for define main ";
    x5 = x3;
    x6 = R;
    x1 = 0x1869f;
    x8 = *(x2);
    x9 = *((x2 + 8));
    *(x3) = x8;
    *((x3 + 8)) = x9;
    *(x6) = w0;
    x8 = *((x2 + 0x20));
    x9 = *((x2 + 0x20 + 8));
    x6 = *((x2 + 0x10));
    x7 = *((x2 + 0x10 + 8));
    *((x3 + 0x20)) = x8;
    *((x3 + 0x20 + 8)) = x9;
    x4 = D;
    w0 = *((x2 + 0x30));
    *((x3 + 0x10)) = x6;
    *((x3 + 0x10 + 8)) = x7;
    *((x5 += 0x30)) = w0;
    x0 = 0x1;
    *(x4) = w5;
    calloc (x0, x1);
    x1 = 0x1869f;
    x2 = v;
    *(x2) = w0;
    x0 = 0x1;
    x0 = calloc (w0, x1);
    x4 = x0;
    x0 = 0x1;
    x1 = 0x1869f;
    x3 = ac;
    x2 = *(0x13000);
    *(x3) = w4;
    *(x2) = w4;
    calloc (x0, x1);
    x20 = P;
    *(x20) = w0;
    o ();
    dbg_ad ();
    w0 = 0x0;
    dbg_ab (w0);
    w1 = w21;
    w0 = w19;
    x21 = *((sp + 0x20));
    w2 = 0x14188;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x2 = (int64_t) w2;
    x29 = *(sp);
    x30 = *((sp + 8));
    x2 = *(x2);
    return uint64_t (*x2)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xc60 */
#include <stdint.h>
 
void fopen () {
    x16 = 0x14000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xcb0 */
#include <stdint.h>
 
void calloc () {
    x17 = .plt;
    x16 = 0x14030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xfc8 */
#include <stdint.h>
 
uint32_t o () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = *(0x21000);
    w1 = *(0x21000);
    if (w1 != 0) {
        w3 = w1 + 1;
        x1 = (int64_t) w1;
        *(x0) = w3;
        x2 = h;
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
    x0 = Q;
    x0 = *(x0);
    fgetc (x0);
    x1 = h;
    *(x1) = w0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x13fc0;
label_0:
    x1 = 0x13000;
    *(x0) = 0;
    x0 = W;
    w0 = W;
    *(x2) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xca0 */
#include <stdint.h>
 
void fgetc () {
    x17 = .plt;
    x16 = 0x14028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x1128 */
#include <stdint.h>
 
uint64_t dbg_ad () {
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
    /* int ad(); */
    *((sp + -0x60)) = x29;
    *((sp + -0x60 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = 0x13000;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x22 = 0x13000;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x23 = 0x13000;
    x0 = h;
    x20 = Q;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    w24 = h;
label_2:
    x21 = 0x13000;
    x27 = *((x22 + 0xfc0));
    x28 = *(0x21000);
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
        x1 = *((x21 + entry.init0));
        w0 = *(x1);
        if (w0 == 0) {
            goto label_24;
        }
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x1) = w2;
        x2 = *((x19 + 0xf58));
        w24 = *(x0);
        *(x2) = w24;
    } while (w24 != 2);
    *(x1) = 0;
    x0 = W;
    w24 = W;
    w0 = w24;
    *(x2) = w24;
    isspace (x0);
    w1 = (w24 == 0x23) ? 1 : 0;
    w0 = w1 | w0;
    if (w0 != 0) {
        goto label_0;
    }
label_22:
    x0 = 0x13000;
    x21 = *((x23 + 0xf50));
    x1 = C;
    w0 = w24;
    *(x21) = w24;
    *(x1) = 0;
    isalnum (x0);
    w1 = (w24 == 0x5f) ? 1 : 0;
    w0 = w1 | w0;
    if (w0 == 0) {
        goto label_25;
    }
    x24 = 0x13000;
    x26 = 0x13000;
    w5 = 0x20;
    x3 = *((x19 + 0xf58));
    x27 = *((x22 + 0xfc0));
    x0 = D;
    x4 = M;
    x28 = *(0x21000);
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
        x0 = *((x19 + 0xf58));
        w21 = *(x1);
        *(x0) = w21;
    } while (w21 != 2);
    *(x28) = 0;
    x1 = W;
    w21 = W;
    *(x0) = w21;
    w0 = w21;
    isalnum (w0);
    w1 = (w21 == 0x5f) ? 1 : 0;
    w0 = w1 | w0;
    if (w0 != 0) {
        goto label_1;
    }
label_26:
    x21 = *((x23 + 0xf50));
    w0 = *(x21);
    w0 -= 0x30;
    if (w0 < 9) {
        goto label_28;
    }
    x24 = *((x24 + 0xf30));
    w2 = 0x20;
    x26 = *((x26 + 0xfa8));
    x0 = R;
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
    __asm ("b.le 0x17d8");
    x1 = P;
    w1 = P;
    w0 += w1;
    *(x21) = w0;
    x1 = (int64_t) w0;
    w1 = P;
    if (w1 != 1) {
        goto label_17;
    }
    w0 += 4;
    x21 = *((x19 + 0xf58));
    x0 = (int64_t) w0;
    x27 = *(0x21000);
    x1 = W;
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
    x0 = *((x22 + 0xfc0));
    x0 = *(x0);
    w0 = fgetc (x0);
    w24 = w0;
    x0 = *((x19 + 0xf58));
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
    x1 = *((x19 + 0xf58));
    w0 = *(x0);
    *(x1) = w0;
    if (w0 == 2) {
        goto label_31;
    }
label_12:
    dbg_ad ();
    x26 = *((x23 + 0xf50));
    x24 = 0x13000;
    w0 = *(x26);
    if (w0 == 0x218) {
        goto label_32;
    }
label_8:
    x0 = *((x19 + 0xf58));
    x25 = *((x24 + 0xf30));
    x26 = W;
    w0 = *(x0);
    do {
label_6:
        if (w0 == 0xa) {
            goto label_33;
        }
label_4:
        w1 = *(x25);
        x2 = *((x21 + entry.init0));
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
        x4 = *((x19 + 0xf58));
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
    x24 = *((x24 + 0xf30));
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
    x1 = *((x19 + 0xf58));
    *(x1) = w0;
    goto label_6;
label_27:
    x0 = *(x27);
    w0 = fgetc (x0);
    w21 = w0;
    x0 = *((x19 + 0xf58));
    *(x0) = w21;
    goto label_7;
label_30:
    x0 = *((x22 + 0xfc0));
    x24 = 0x13000;
    x0 = *(x0);
    fgetc (x0);
    x1 = *((x19 + 0xf58));
    *(x1) = w0;
    dbg_ad ();
    x26 = *((x23 + 0xf50));
    w0 = *(x26);
    if (w0 != 0x218) {
        goto label_8;
    }
label_32:
    dbg_ad ();
    x1 = *((x24 + 0xf30));
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
    x27 = 0x13000;
    x1 = *(0x21000);
    w0 = *(0x21000);
    if (w0 == 0) {
        goto label_35;
    }
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w2;
    x2 = *((x19 + 0xf58));
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
    x21 = *((x27 + entry.init0));
    w0 = *(x21);
    if (w0 == 0) {
        goto label_39;
    }
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x21) = w2;
    x1 = *((x19 + 0xf58));
    w0 = *(x0);
    *(x1) = w0;
    if (w0 == 2) {
        goto label_40;
    }
label_14:
    x24 = 0x13000;
    x21 = W;
    if (w0 == 0) {
label_9:
        goto label_41;
    }
    x1 = (int64_t) w2;
    x26 = *((x19 + 0xf58));
    w2 = w1 + 1;
    x4 = (int64_t) w1;
    if (w0 == 0x2a) {
        goto label_42;
    }
    if (w1 == 0) {
        do {
            goto label_43;
        }
        x3 = *((x27 + entry.init0));
        x1 = *((x19 + 0xf58));
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
    x4 = *((x27 + entry.init0));
    x3 = *((x19 + 0xf58));
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
    x0 = *((x19 + 0xf58));
    *(x0) = 0;
    if (w2 == 0) {
label_41:
        goto label_47;
    }
    x27 = *((x27 + entry.init0));
    w1 = w2 + 1;
    x2 = (int64_t) w2;
    x0 = *((x19 + 0xf58));
    *(x27) = w1;
    w24 = *(x2);
    *(x0) = w24;
    if (w24 != 2) {
        goto label_2;
    }
    *(x27) = 0;
    x1 = W;
    w24 = W;
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
        x1 = *((x27 + entry.init0));
        w2 = *(x1);
        x1 = (int64_t) w2;
        goto label_10;
    }
label_45:
    x0 = *((x22 + 0xfc0));
    x0 = *(x0);
    fgetc (x0);
    x2 = *((x27 + entry.init0));
    x1 = *((x19 + 0xf58));
    w2 = *(x2);
    *(x1) = w0;
    goto label_11;
label_46:
    x0 = *((x24 + 0xfb8));
    w2 = 0x0;
    *(x4) = 0;
    w0 = *(x0);
    *(x3) = w0;
    goto label_11;
label_31:
    *(x28) = 0;
    x0 = W;
    w0 = W;
    *(x1) = w0;
    goto label_12;
label_29:
    x0 = *((x22 + 0xfc0));
    x0 = *(x0);
    w0 = fgetc (x0);
    w24 = w0;
    *(x21) = w0;
    goto label_2;
label_35:
    x0 = *((x22 + 0xfc0));
    x0 = *(x0);
    fgetc (x0);
    w24 = *(x21);
    x1 = *((x19 + 0xf58));
    *(x1) = w0;
    if (w24 != 0x27) {
        goto label_13;
    }
label_37:
    x23 = *((x23 + 0xf50));
    w1 = 0x2;
    *(x23) = w1;
    if (w0 == 0x5c) {
        goto label_48;
    }
    x1 = *((x27 + entry.init0));
    w1 = *(x1);
label_20:
    x2 = z;
    *(x2) = w0;
    if (w1 == 0) {
        goto label_49;
    }
    x4 = *((x27 + entry.init0));
    w2 = w1 + 1;
    x1 = (int64_t) w1;
    x3 = *((x19 + 0xf58));
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
    x27 = *((x27 + entry.init0));
    w0 = w2 + 1;
    x2 = (int64_t) w2;
    x19 = *((x19 + 0xf58));
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
        x0 = *((x22 + 0xfc0));
        x0 = *(x0);
        w0 = fgetc (x0);
        w24 = w0;
        x0 = *((x19 + 0xf58));
        *(x0) = w24;
        goto label_2;
label_39:
        x0 = *((x22 + 0xfc0));
        x0 = *(x0);
        fgetc (x0);
        x1 = *((x19 + 0xf58));
        w2 = *(x21);
        *(x1) = w0;
        goto label_14;
label_36:
        *(x1) = 0;
        x0 = W;
        w0 = W;
        *(x2) = w0;
        goto label_15;
label_40:
        w2 = 0x0;
        *(x21) = 0;
        x0 = W;
        w0 = W;
        *(x1) = w0;
        goto label_14;
label_28:
        x26 = *((x26 + 0xfa8));
        w2 = 0x0;
        w1 = 0x0;
        w0 = *(x26);
        strtol (w0, w1, w2);
        w2 = 0x2;
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        *(x21) = w2;
        x1 = z;
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
        x1 = 0x13000;
        x4 = "++#m--%am*@R<^1c/@%[_[H3c%@%[_[H3c+@.B#d-@%:_^BKd<<Z/03e>>`/03e<=0f>=/f<@.f>@1f==&g!='g&&k||#l&@.BCh^@.BSi|@.B+j~@/%Yd!@&d*@b";
        x25 = C;
        x7 = z;
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
    o ();
    x23 = *((x23 + 0xf50));
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
    x0 = W;
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    w0 = W;
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
    x0 = W;
    w0 = W;
    *(x3) = w0;
label_51:
    x0 = Q;
    x0 = *(x0);
    fgetc (x0);
    x19 = *((x19 + 0xf58));
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
        x0 = W;
        w1 = W;
        *(x2) = w1;
        if (w1 == 0x6e) {
            goto label_54;
        }
        x0 = z;
        *(x0) = w1;
label_49:
        x0 = Q;
        x0 = *(x0);
        fgetc (x0);
        x2 = *((x27 + entry.init0));
        x1 = *((x19 + 0xf58));
        w2 = *(x2);
        *(x1) = w0;
        goto label_19;
label_48:
        x20 = *((x27 + entry.init0));
        w0 = *(x20);
        if (w0 == 0) {
            goto label_55;
        }
        w1 = w0 + 1;
        x0 = (int64_t) w0;
        *(x20) = w1;
        x2 = *((x19 + 0xf58));
        w0 = *(x0);
        *(x2) = w0;
    } while (w0 == 2);
label_21:
    if (w0 != 0x6e) {
        goto label_20;
    }
    do {
        x2 = *((x19 + 0xf58));
        w3 = 0xa;
        w0 = w3;
        *(x2) = w3;
        goto label_20;
label_55:
        x0 = Q;
        x0 = *(x0);
        fgetc (x0);
        x2 = *((x19 + 0xf58));
        w1 = *(x20);
        *(x2) = w0;
        goto label_21;
label_54:
        w1 = 0x0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x2e08 */
#include <stdint.h>
 
void dbg_ab (uint32_t arg1) {
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
    /* int ab(int j); */
    *((sp + -0x60)) = x29;
    *((sp + -0x60 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x21 = 0x13000;
    x22 = 0x13000;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w24 = (w0 == 0) ? 1 : 0;
    x23 = d;
    x20 = *(0x13000);
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    w25 = w0;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
label_2:
    w1 = *(x23);
    w0 = (w1 != 1) ? 1 : 0;
    w2 = w24 & w0;
    w0 = (w1 == 0x100) ? 1 : 0;
    w0 |= w2;
    if (w0 == 0) {
        goto label_5;
    }
    if (w0 == 0) {
label_1:
        goto label_6;
    }
    w0 = w1 + 4;
    x19 = 0x13000;
    x0 = (int64_t) w0;
    w0 = *(x0);
    if (w0 == 0) {
        goto label_7;
    }
    x3 = *((x19 + sym.o));
    do {
        x2 = (int64_t) w0;
        w1 = *(x3);
        w1 -= w0;
        w0 = *(x2);
        w1 -= 4;
        *(x2) = w1;
    } while (w0 != 0);
    x0 = *((x21 + 0xf50));
    w1 = *(x0);
label_7:
    x0 = *((x19 + sym.o));
    x1 = (int64_t) w1;
    w26 = 0x8;
    w0 = *(x0);
    *(x1) = w0;
    dbg_ad ();
    dbg_ad ();
    x0 = *((x21 + 0xf50));
    x27 = x0;
    w0 = *(x0);
    do {
        x1 = (int64_t) w0;
        if (w0 == 0x29) {
            goto label_8;
        }
label_0:
        *(x1) = w26;
        w26 += 4;
        dbg_ad ();
        w0 = *(x27);
    } while (w0 != 0x2c);
    dbg_ad ();
    w0 = *(x27);
    x1 = (int64_t) w0;
    if (w0 != 0x29) {
        goto label_0;
    }
label_8:
    dbg_ad ();
    x26 = *((x19 + sym.o));
    x0 = *((x22 + sym.E));
    w6 = 0x55;
    w5 = 0x76;
    w4 = 0x1a;
    w3 = 0x7e;
    w1 = *(x26);
    w2 = 0x13;
    x28 = K;
    w7 = w1 + 1;
    *(x0) = 0;
    x1 = (int64_t) w1;
    *(x26) = w7;
    w0 = 0x0;
    *(x28) = 0;
    *(x1) = w6;
    w1 = *(x26);
    w6 = w1 + 1;
    x1 = (int64_t) w1;
    *(x26) = w6;
    *(x1) = w5;
    w1 = *(x26);
    w5 = w1 + 1;
    x1 = (int64_t) w1;
    *(x26) = w5;
    *(x1) = w4;
    w1 = *(x26);
    w4 = w1 + 1;
    x1 = (int64_t) w1;
    *(x26) = w4;
    *(x1) = w3;
    w1 = *(x26);
    w3 = w1 + 1;
    x1 = (int64_t) w1;
    *(x26) = w3;
    *(x1) = w2;
    x1 = *(x26);
    *(x1) = 0;
    w27 = *(x26);
    w1 = w27 + 4;
    *(x26) = w1;
    dbg_I (x0);
    w0 = K;
    if (w0 == 0) {
        goto label_9;
    }
    do {
        x2 = (int64_t) w0;
        w1 = *(x26);
        w1 -= w0;
        w0 = *(x2);
        w1 -= 4;
        *(x2) = w1;
    } while (w0 != 0);
label_9:
    x19 = *((x19 + sym.o));
    w3 = 0x36;
    w2 = 0x3c;
    x1 = *((x22 + sym.E));
    x27 = (int64_t) w27;
    w0 = *(x19);
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x19) = w4;
    *(x0) = w3;
    w0 = *(x19);
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x19) = w3;
    *(x0) = w2;
    w0 = *(x1);
    *(x27) = w0;
    w1 = *(x23);
    w0 = (w1 != 1) ? 1 : 0;
    w2 = w24 & w0;
    w0 = (w1 == 0x100) ? 1 : 0;
    w0 |= w2;
    if (w0 != 0) {
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
    w26 = 0x3;
    dbg_ad ();
label_4:
    x19 = *((x21 + 0xf50));
    w0 = *(x19);
    if (w25 != 0) {
        goto label_10;
    }
    x27 = v;
    while (w0 != 0x3b) {
        w0 = *(x27);
        *(x1) = w0;
        w0 = *(x27);
        w0 += 4;
        *(x27) = w0;
        dbg_ad ();
        w0 = *(x19);
        if (w0 == 0x2c) {
            goto label_11;
        }
        x1 = (int64_t) w0;
    }
label_3:
    dbg_ad ();
    goto label_2;
    do {
        w0 = *(x20);
        w2 = w0 + 4;
        w0 = w26 - w0;
        *(x20) = w2;
        *(x1) = w0;
        dbg_ad ();
        w0 = *(x19);
        if (w0 == 0x2c) {
            goto label_11;
        }
label_10:
        x1 = (int64_t) w0;
    } while (w0 != 0x3b);
    goto label_3;
label_11:
    dbg_ad ();
    goto label_4;
}


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x36b0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x3638 */
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
    x21 = 0x13000;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x21 += dbg.main;
    x20 = 0x13d18;
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xe90 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0xcc0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x2188 */
#include <stdint.h>
 
void O_constprop_2 () {
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
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x23 = 0x13000;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    O ();
    x0 = C;
    w0 = C;
    if (w0 != 0xa) {
        goto label_1;
    }
    x21 = 0x13000;
    w19 = 0x0;
    w26 = 0x7a;
    x22 = z;
    x27 = *(0x13000);
label_0:
    w20 = *(x22);
    dbg_ad ();
    w0 = *(x27);
    w24 = w20 + 0x85;
    w25 = w20 + 0x84;
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x27) = w1;
    x2 = *((x21 + sym.o));
    w1 = w25;
    *(x0) = w26;
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
    x28 = *((x21 + sym.o));
    w0 = 0xa;
    x1 = *(x28);
    *(x1) = w19;
    w19 = *(x28);
    w1 = w19 + 4;
    *(x28) = w1;
    O ();
    x0 = *((x23 + 0xf98));
    w0 = *(x0);
    if (w0 == 0xa) {
        goto label_0;
    }
    if (w19 == 0) {
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
    w0 = *(x28);
    w1 = 0x7a;
    w3 = 0x3f;
    w2 = 0xf;
    w5 = w0 + 1;
    x0 = (int64_t) w0;
    *(x28) = w5;
    *(x0) = w1;
    w0 = *(x28);
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x28) = w1;
    x1 = x28;
    *(x0) = w3;
    w0 = *(x28);
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x28) = w3;
    *(x0) = w2;
    if (w24 < 1) {
        goto label_3;
    }
    do {
        w0 = *(x1);
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x1) = w2;
        *(x0) = w25;
        w25 >>= 8;
        w0 = w25 + 1;
    } while (w0 > 1);
label_3:
    x4 = *((x21 + sym.o));
    w3 = 0x5;
    w6 = 0x47;
    w0 = w20 ^ 1;
    w5 = 0x16;
    x1 = *(x4);
    *(x1) = w19;
    w2 = *(x4);
    w1 = w2 + 4;
    w7 = w2 + w3;
    *(x4) = w7;
    x1 = (int64_t) w1;
    *(x1) = w6;
    x1 = *(x4);
    *(x1) = w0;
    w0 = *(x4);
    w1 = w0 + 4;
    w0 += w3;
    *(x4) = w0;
    x0 = (int64_t) w1;
    *(x0) = w5;
    x0 = *(x4);
    *(x0) = w3;
    w1 = *(x4);
    w0 = w1 + 4;
    *(x4) = w0;
    if (w2 != 0) {
        goto label_4;
    }
    goto label_5;
    do {
        w0 = *(x4);
label_4:
        x3 = (int64_t) w2;
        w0 -= w2;
        w0 -= 4;
        w1 = *(x3);
        *(x3) = w0;
        w2 = w1;
    } while (w1 != 0);
    x0 = *((x21 + sym.o));
    w0 = *(x0);
label_5:
    x21 = *((x21 + sym.o));
    x1 = (int64_t) w0;
    w2 = 0x47;
    w0++;
    *(x21) = w0;
    *(x1) = w2;
    x0 = *(x21);
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    *(x0) = w20;
    x27 = *((sp + 0x50));
    x28 = *((sp + 0x50 + 8));
    w0 = *(x21);
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    w0 += 4;
    *(x21) = w0;
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xea8 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x14070;
    x0 = 0x14070;
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xee0 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x14070;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x14070;
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xf20 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x14000;
    w0 = *((x19 + 0x70));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x14068);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x70)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xc50 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x14000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xf68 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0xee0)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xee0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x1be0 */
#include <stdint.h>
 
uint64_t B (int64_t arg1) {
    x0 = arg1;
    w3 = 0x16;
    x1 = *(0x13000);
    w2 = *(0x13000);
    w4 = w2 + 1;
    x2 = (int64_t) w2;
    *(x1) = w4;
    *(x2) = w3;
    x2 = *(x1);
    *(x2) = w0;
    w0 = *(0x13000);
    w2 = w0 + 4;
    *(x1) = w2;
    return 0x13000;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x1d90 */
#include <stdint.h>
 
uint64_t N (int64_t arg1, uint32_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w2 = w0 + 0x84;
    x5 = 0x13000;
    w0 += 0x83;
    x3 = *(0x13000);
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
    x2 = *((x5 + sym.o));
    w0 = 0x85;
    w4 = 0x5;
    w4 = (w1 > 0x1ff) ? w4 : w0;
    w3 = *(x2);
    w5 = w3 + 1;
    x3 = (int64_t) w3;
    *(x2) = w5;
    *(x3) = w4;
    x3 = *(x2);
    *(x3) = w1;
    w1 = *(x2);
    w1 += 4;
    *(x2) = w1;
    return 0x85;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x1ba0 */
#include <stdint.h>
 
void H (int64_t arg1, int64_t arg4) {
    x0 = arg1;
    x3 = arg4;
    w4 = 0x47;
    x1 = *(0x13000);
    w2 = *(0x13000);
    w5 = w2 + 1;
    x2 = (int64_t) w2;
    *(x1) = w5;
    *(x2) = w4;
    x2 = *(x1);
    *(x2) = w0;
    w0 = w3;
    w2 = *(0x13000);
    w2 += 4;
    *(x1) = w2;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x2408 */
#include <stdint.h>
 
uint64_t dbg_T (int64_t arg1) {
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
    /* int T(int j); */
    *((sp + -0x60)) = x29;
    *((sp + -0x60 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x13000;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x23 = d;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    w21 = d;
    if (w21 == 0x22) {
        goto label_16;
    }
    x25 = 0x13000;
    x26 = 0x13000;
    w22 = w0;
    x1 = C;
    x0 = z;
    w24 = C;
    w19 = z;
    dbg_ad ();
    if (w21 == 2) {
        goto label_17;
    }
    if (w24 == 2) {
        goto label_18;
    }
    if (w21 == 0x28) {
        goto label_19;
    }
    if (w21 == 0x2a) {
        goto label_20;
    }
    if (w21 == 0x26) {
        goto label_21;
    }
    x0 = (int64_t) w21;
    w24 = *(x0);
    if (w24 == 0) {
        goto label_22;
    }
label_8:
    x0 = *((x20 + 0xf50));
    w0 = *(x0);
    w1 = (w0 == 0x3d) ? 1 : 0;
    x22 = 0x13000;
    if ((w1 & w22) != 0) {
        goto label_23;
    }
    if (w0 != 0x28) {
        x0 = *((x22 + sym.o));
        w1 = 0x85;
        w2 = 0x5;
        w2 = (w24 > 0x1ff) ? w2 : w1;
        w3 = 0x74;
        x25 = *((x25 + 0xf98));
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
        x1 = *(x0);
        *(x1) = w24;
        w3 = *(x0);
        w4 = *(x25);
        w1 = w3 + 4;
        *(x0) = w1;
        if (w4 == 0xb) {
            goto label_24;
        }
label_7:
        x0 = *((x20 + 0xf50));
        w0 = *(x0);
        if (w0 != 0x28) {
            goto label_5;
        }
    }
    if (w24 == 1) {
        goto label_25;
    }
label_6:
    x19 = *((x22 + sym.o));
    w2 = 0x7e;
    w1 = 0x13;
    w28 = 0x0;
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
    x0 = *(x19);
    *(x0) = 0;
    w25 = *(x19);
    w0 = w25 + 4;
    *(x19) = w0;
    dbg_ad ();
    x20 = *((x20 + 0xf50));
    w0 = *(x20);
    if (w0 == 0x29) {
        goto label_26;
    }
    w27 = 0x76;
    w26 = 0x7b;
    w23 = 0x24;
    while (w1 != 0x2c) {
        if (w1 == 0x29) {
            goto label_26;
        }
label_0:
        O_constprop_2 ();
        w0 = *(x19);
        w1 = w0 + 1;
        x0 = (int64_t) w0;
        *(x19) = w1;
        *(x0) = w27;
        w0 = *(x19);
        w1 = w0 + 1;
        x0 = (int64_t) w0;
        *(x19) = w1;
        *(x0) = w26;
        w0 = *(x19);
        w1 = w0 + 1;
        x0 = (int64_t) w0;
        *(x19) = w1;
        *(x0) = w23;
        x0 = *(x19);
        *(x0) = w28;
        w28 += 4;
        w0 = *(x19);
        w1 = *(x20);
        w0 += 4;
        *(x19) = w0;
    }
    dbg_ad ();
    w1 = *(x20);
    if (w1 != 0x29) {
        goto label_0;
    }
label_26:
    x25 = (int64_t) w25;
    *(x25) = w28;
    dbg_ad ();
    if (w24 != 0) {
        goto label_27;
    }
    x0 = *((x22 + sym.o));
    w1 = w21 + 4;
    w4 = 0x17;
    x1 = (int64_t) w1;
    w2 = *(x0);
    w3 = *(x1);
    w5 = w2 + 1;
    x2 = (int64_t) w2;
    *(x0) = w5;
    *(x2) = w4;
    x2 = *(x0);
    *(x2) = w3;
    w2 = *(x0);
    w3 = w2 + 4;
    *(x0) = w3;
    *(x1) = w2;
    if (w28 == 0) {
label_10:
        goto label_5;
    }
    x0 = *((x22 + sym.o));
    w0 = *(x0);
label_12:
    x22 = *((x22 + sym.o));
    x2 = (int64_t) w0;
    w3 = 0x7e;
    w0++;
    w1 = 0x3b;
    *(x22) = w0;
    *(x2) = w3;
    w0 = *(x22);
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x22) = w2;
    *(x0) = w1;
    x0 = *(x22);
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    *(x0) = w28;
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    w0 = *(x22);
    x27 = *((sp + 0x50));
    x28 = *((sp + 0x50 + 8));
    w0 += 4;
    *(x22) = w0;
    w0 = 0x0;
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
label_16:
    x22 = 0x13000;
    x26 = 0x13000;
    w4 = 0x47;
    x25 = 0x13000;
    x27 = 0x13000;
    x19 = 0x13000;
    x1 = *(0x13000);
    w23 = 0xa;
    x0 = v;
    x2 = h;
    x22 = *(0x21000);
    x24 = Q;
    w3 = v;
    w0 = *(0x13000);
    w5 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w5;
    *(x0) = w4;
    x0 = *(x1);
    *(x0) = w3;
    w0 = h;
    w2 = *(0x13000);
    w2 += 4;
    *(x1) = w2;
    do {
label_4:
        if (w0 == 0x22) {
            goto label_28;
        }
label_1:
        if (w0 == 0x5c) {
            goto label_29;
        }
label_2:
        w0 = (int8_t) w0;
label_3:
        x2 = *((x26 + 0xf60));
        x3 = *((x27 + entry.init0));
        w1 = *(x2);
        w4 = w1 + 1;
        x1 = (int64_t) w1;
        *(x2) = w4;
        *(x1) = w0;
        w0 = *(x3);
        if (w0 == 0) {
            goto label_30;
        }
        w1 = w0 + 1;
        x0 = (int64_t) w0;
        *(x3) = w1;
        x1 = *((x25 + 0xf58));
        w0 = *(x0);
        *(x1) = w0;
    } while (w0 != 2);
    *(x3) = 0;
    x0 = W;
    w0 = W;
    *(x1) = w0;
    if (w0 != 0x22) {
        goto label_1;
    }
label_28:
    x26 = *((x26 + 0xf60));
    x27 = *((x27 + entry.init0));
    x0 = *(x26);
    *(x0) = 0;
    w0 = *(x26);
    w1 = *(x27);
    w0 += 4;
    w0 &= 0xfffffffc;
    *(x26) = w0;
    if (w1 == 0) {
        goto label_31;
    }
    w0 = w1 + 1;
    x1 = (int64_t) w1;
    *(x27) = w0;
    x25 = *((x25 + 0xf58));
    w0 = *(x1);
    *(x25) = w0;
    if (w0 == 2) {
        goto label_32;
    }
label_11:
    dbg_ad ();
    x0 = *((x20 + 0xf50));
    w0 = *(x0);
label_13:
    x22 = 0x13000;
    if (w0 == 0x28) {
        goto label_25;
    }
label_5:
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
label_29:
    w0 = *(x22);
    if (w0 == 0) {
        goto label_33;
    }
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x22) = w1;
    x1 = *((x25 + 0xf58));
    w0 = *(x0);
    *(x1) = w0;
    if (w0 == 2) {
        goto label_34;
    }
label_9:
    if (w0 != 0x6e) {
        goto label_2;
    }
    x0 = *((x25 + 0xf58));
    *(x0) = w23;
    w0 = 0xa;
    goto label_3;
label_30:
    x0 = *((x19 + 0xfc0));
    x0 = *(x0);
    fgetc (x0);
    x1 = *((x25 + 0xf58));
    *(x1) = w0;
    goto label_4;
label_17:
    w1 = 0x47;
    x22 = *(0x13000);
    w0 = *(0x13000);
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x22) = w2;
    *(x0) = w1;
    x0 = *(x22);
    *(x0) = w19;
    w1 = *(0x13000);
    w0 = *(x23);
    w1 += 4;
    *(x22) = w1;
    x22 = 0x13000;
    if (w0 != 0x28) {
        goto label_5;
    }
label_25:
    x1 = *((x22 + sym.o));
    w24 = 0x1;
    w2 = 0x50;
    w0 = *(x1);
    w3 = w0 + w24;
    x0 = (int64_t) w0;
    *(x1) = w3;
    *(x0) = w2;
    goto label_6;
label_23:
    dbg_ad ();
    O_constprop_2 ();
    x0 = *((x22 + sym.o));
    w1 = 0x85;
    w2 = 0x5;
    w2 = (w24 > 0x1ff) ? w2 : w1;
    w3 = 0x76;
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
    x1 = *(x0);
    *(x1) = w24;
    w1 = *(x0);
    w1 += 4;
    *(x0) = w1;
    goto label_7;
label_22:
    w0 = 0x0;
    x1 = M;
    w1 = M;
    w0 = dlsym ();
    w24 = w0;
    goto label_8;
label_33:
    x0 = *(x24);
    fgetc (x0);
    x1 = *((x25 + 0xf58));
    *(x1) = w0;
    goto label_9;
label_27:
    if (w24 != 1) {
        x1 = *((x22 + sym.o));
        w3 = 0x17;
        w2 = *(x1);
        w4 = w2 + 1;
        w0 = w24 - w2;
        x2 = (int64_t) w2;
        *(x1) = w4;
        w0 -= 5;
        *(x2) = w3;
        x2 = *(x1);
        *(x2) = w0;
        w0 = *(x1);
        w0 += 4;
        *(x1) = w0;
        goto label_10;
label_31:
        x0 = Q;
        x0 = *(x0);
        fgetc (x0);
        x25 = *((x25 + 0xf58));
        *(x25) = w0;
        goto label_11;
label_34:
        *(x22) = 0;
        x0 = W;
        w0 = W;
        *(x1) = w0;
        goto label_9;
label_32:
        *(x27) = 0;
        x0 = W;
        w0 = W;
        *(x25) = w0;
        goto label_11;
    }
    x0 = *((x22 + sym.o));
    w4 = 0x0;
    w3 = 0x6b;
    w2 = 0x24;
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
    x1 = *(x0);
    *(x1) = w28;
    w28 += 4;
    w0 = *(x0);
    w0 += 4;
    goto label_12;
label_18:
    x22 = 0x13000;
    w0 = 0x0;
    dbg_T (w0);
    x1 = *(0x13000);
    w2 = 0x46;
    w0 = *(0x13000);
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w3;
    *(x0) = w2;
    x0 = *(x1);
    *(x0) = 0;
    w0 = *(0x13000);
    w0 += 4;
    *(x1) = w0;
    if (w21 == 0x21) {
        goto label_35;
    }
    w2 = w19 + 1;
    if (w2 > 1) {
        goto label_36;
    }
    goto label_37;
    do {
        w0 = *(x1);
label_36:
        x2 = (int64_t) w0;
        w0++;
        *(x1) = w0;
        *(x2) = w19;
        w19 >>= 8;
        w0 = w19 + 1;
    } while (w0 > 1);
label_15:
    x0 = *((x20 + 0xf50));
    w0 = *(x0);
    goto label_13;
label_35:
    w0 = w19;
    dbg_Z (w0);
    w0 = *(x23);
    goto label_13;
label_19:
    O_constprop_2 ();
    dbg_ad ();
    w0 = *(x23);
    goto label_13;
label_20:
    dbg_ad ();
    w21 = *(x23);
    dbg_ad ();
    dbg_ad ();
    w0 = *(x23);
    if (w0 == 0x2a) {
        goto label_38;
    }
    dbg_ad ();
    w0 = 0x0;
    dbg_T (w0);
    w0 = *(x23);
    if (w0 == 0x3d) {
        goto label_39;
    }
    if (w21 == 0) {
        goto label_13;
    }
    x22 = 0x13000;
    if (w21 == 0x100) {
        goto label_40;
    }
    x1 = *((x22 + sym.o));
    w3 = 0xf;
    w2 = 0x41;
    w0 = *(x1);
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w4;
    *(x0) = w3;
label_14:
    w0 = *(x1);
    x22 = *((x22 + sym.o));
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w3;
    *(x0) = w2;
    x0 = *((x20 + 0xf50));
    w1 = *(x22);
    w1++;
    w0 = *(x0);
    *(x22) = w1;
    goto label_13;
label_21:
    x0 = *(x23);
    w4 = 0x85;
    w1 = 0x5;
    w3 = 0x72;
    x22 = *(0x13000);
    w2 = *(x0);
    w0 = *(0x13000);
    w1 = (w2 > 0x1ff) ? w1 : w4;
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x22) = w4;
    *(x0) = w3;
    w0 = *(0x13000);
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x22) = w3;
    *(x0) = w1;
    x0 = *(x22);
    *(x0) = w2;
    w0 = *(0x13000);
    w0 += 4;
    *(x22) = w0;
    dbg_ad ();
    w0 = *(x23);
    goto label_13;
label_24:
    x1 = (int64_t) w1;
    w3 += 5;
    w4 = 0x7c;
    *(x0) = w3;
    x26 = *((x26 + 0xf70));
    *(x1) = w4;
    w1 = *(x0);
    w3 = w1 + 1;
    x1 = (int64_t) w1;
    *(x0) = w3;
    *(x1) = w2;
    x1 = *(x0);
    *(x1) = w24;
    w2 = *(x26);
    w1 = *(x0);
    w3 = w2 + 1;
    w1 += 4;
    *(x0) = w1;
    if (w3 > 1) {
        goto label_41;
    }
    goto label_42;
    do {
        w1 = *(x0);
label_41:
        x3 = (int64_t) w1;
        w1++;
        *(x0) = w1;
        *(x3) = w2;
        w2 >>= 8;
        w1 = w2 + 1;
    } while (w1 > 1);
label_42:
    dbg_ad ();
    goto label_7;
label_37:
    w0 = *(x23);
    goto label_13;
label_40:
    w2 = 0x74;
    x1 = *((x22 + sym.o));
    goto label_14;
label_38:
    dbg_ad ();
    w21 = 0x0;
    dbg_ad ();
    dbg_ad ();
    dbg_ad ();
    dbg_ad ();
    w0 = 0x0;
    dbg_T (w0);
    w0 = *(x23);
    if (w0 != 0x3d) {
        goto label_13;
    }
label_39:
    dbg_ad ();
    w1 = 0x50;
    x22 = *(0x13000);
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x22) = w2;
    *(x0) = w1;
    O_constprop_2 ();
    w1 = *(0x13000);
    w3 = 0x59;
    w0 = (w21 == 0x100) ? 1 : 0;
    w2 = w1 + 1;
    w0 = 0x13188;
    x1 = (int64_t) w1;
    *(x22) = w2;
    x2 = x22;
    *(x1) = w3;
    do {
        w1 = *(x2);
        w3 = w1 + 1;
        x1 = (int64_t) w1;
        *(x2) = w3;
        *(x1) = w0;
        w0 >>= 8;
    } while (w0 == 1);
    goto label_15;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x1048 */
#include <stdint.h>
 
uint64_t X () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
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
    return 0x13f58;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xd00 */
#include <stdint.h>
 
void isalnum () {
    x17 = .plt;
    x16 = 0x14058;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x1cc0 */
#include <stdint.h>
 
uint32_t dbg_Z (int64_t arg1) {
    x0 = arg1;
    /* int Z(int e); */
    x4 = 0x13000;
    w8 = 0x39;
    w7 = 0x3e;
    w5 = 0x47;
    w2 = w0 + 0x91;
    w6 = 0xf;
    x1 = *(0x13000);
    w0 += 0x90;
    x2 = x1;
    w3 = *(0x13000);
    w9 = w3 + 1;
    x3 = (int64_t) w3;
    *(x1) = w9;
    *(x3) = w8;
    w3 = *(0x13000);
    w8 = w3 + 1;
    x3 = (int64_t) w3;
    *(x1) = w8;
    *(x3) = w7;
    w3 = *(0x13000);
    w7 = w3 + 1;
    x3 = (int64_t) w3;
    *(x1) = w7;
    *(x3) = w5;
    x3 = *(x1);
    *(x3) = 0;
    w3 = *(0x13000);
    w5 = w3 + 4;
    w3 += 5;
    *(x1) = w3;
    x1 = (int64_t) w5;
    *(x1) = w6;
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
    x4 = *((x4 + sym.o));
    w1 = 0x3f;
    w0 = *(x4);
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x4) = w2;
    *(x0) = w1;
    w0 = 0x0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x36b4 */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x1ad8 */
#include <stdint.h>
 
uint32_t ae (int64_t arg1) {
    x0 = arg1;
    w1 = w0 + 1;
    x2 = *(0x13000);
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xfa0 */
#include <stdint.h>
 
uint32_t E (int64_t arg1, int64_t arg4) {
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x1080 */
#include <stdint.h>
 
void Y () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x13000;
    x19 = h;
    w0 = h;
    while (w0 != 0x6e) {
label_0:
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
        x1 = *(0x21000);
        w0 = *(0x21000);
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
    x20 = *((x20 + 0xf58));
    w0 = 0xa;
    *(x20) = w0;
    goto label_0;
label_2:
    x0 = Q;
    x0 = *(x0);
    fgetc (x0);
    *(x19) = w0;
    goto label_1;
label_3:
    *(x1) = 0;
    x0 = W;
    w0 = W;
    *(x19) = w0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x1b18 */
#include <stdint.h>
 
uint32_t A (int64_t arg1) {
    x0 = arg1;
    x3 = *(0x13000);
    if (w0 == 0) {
        goto label_0;
    }
    do {
        x2 = (int64_t) w0;
        w1 = *(x3);
        w1 -= w0;
        w0 = *(x2);
        w1 -= 4;
        *(x2) = w1;
    } while (w0 != 0);
label_0:
    w0 = 0x0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x1e10 */
#include <stdint.h>
 
void O (uint32_t arg1) {
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
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w22 = w0;
    w0 = w19;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    w22 -= 5;
    w26 = 0x0;
    O ();
    x23 = C;
    x25 = d;
    x24 = z;
label_0:
    w0 = *(x23);
    if (w19 != w0) {
        goto label_3;
    }
label_1:
    w20 = *(x24);
    x28 = 0x13000;
    w21 = *(x25);
    dbg_ad ();
    if (w19 > 8) {
        goto label_4;
    }
    x27 = *((x28 + sym.o));
    w2 = 0x50;
    w0 = w19;
    w1 = *(x27);
    w3 = w1 + 1;
    x1 = (int64_t) w1;
    *(x27) = w3;
    *(x1) = w2;
    O ();
    w0 = *(x27);
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
    x28 = *((x28 + sym.o));
    w1 = 0x6d;
    w0 = *(x28);
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x28) = w2;
    *(x0) = w1;
    w0 = *(x23);
    if (w19 == w0) {
        goto label_1;
    }
label_3:
    __asm ("ccmp w19, 8, 4, ne");
    if (w26 > 0) {
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
    x0 = *((x28 + sym.o));
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
    x28 = *((x28 + sym.o));
    w0 = w19;
    x1 = *(x28);
    *(x1) = w26;
    w26 = *(x28);
    w1 = w26 + 4;
    *(x28) = w1;
    O ();
    goto label_0;
label_5:
    w0 = w20;
    dbg_Z (w0);
    goto label_0;
label_7:
    x28 = 0x13000;
    w2 = w20 + 0x85;
    w6 = 0x7a;
    w5 = 0x3f;
    w4 = 0xf;
    x0 = *(0x13000);
    w1 = w20 + 0x84;
    w2 = *(0x13000);
    w7 = w2 + 1;
    x3 = (int64_t) w2;
    *(x0) = w7;
    x2 = x0;
    *(x3) = w6;
    w3 = *(0x13000);
    w6 = w3 + 1;
    x3 = (int64_t) w3;
    *(x0) = w6;
    *(x3) = w5;
    w3 = *(0x13000);
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
    x4 = *((x28 + sym.o));
    w3 = 0x5;
    w6 = 0x47;
    w0 = w20 ^ 1;
    w5 = 0x16;
    x1 = *(x4);
    *(x1) = w26;
    w2 = *(x4);
    w1 = w2 + 4;
    w7 = w2 + w3;
    *(x4) = w7;
    x1 = (int64_t) w1;
    *(x1) = w6;
    x1 = *(x4);
    *(x1) = w0;
    w0 = *(x4);
    w1 = w0 + 4;
    w0 += w3;
    *(x4) = w0;
    x0 = (int64_t) w1;
    *(x0) = w5;
    x0 = *(x4);
    *(x0) = w3;
    w1 = *(x4);
    w0 = w1 + 4;
    *(x4) = w0;
    if (w2 != 0) {
        goto label_10;
    }
    goto label_11;
    do {
        w0 = *(x4);
label_10:
        x3 = (int64_t) w2;
        w0 -= w2;
        w0 -= 4;
        w1 = *(x3);
        *(x3) = w0;
        w2 = w1;
    } while (w1 != 0);
    x0 = *((x28 + sym.o));
    w0 = *(x0);
label_11:
    x28 = *((x28 + sym.o));
    x1 = (int64_t) w0;
    w2 = 0x47;
    w0++;
    *(x28) = w0;
    *(x1) = w2;
    x0 = *(x28);
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    *(x0) = w20;
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    w0 = *(x28);
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    w0 += 4;
    *(x28) = w0;
    x27 = *((sp + 0x50));
    x28 = *((sp + 0x50 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
label_2:
    return void (*0x2408)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x30f0 */
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
    int64_t var_30h_2;
    x0 = arg1;
    /* int I(int j); */
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x13000;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x22 = (int64_t) w0;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x21 = d;
    w19 = d;
    if (w19 == 0x120) {
        goto label_3;
    }
    w0 = 0x1f8;
    __asm ("ccmp w19, w0, 4, ne");
    if (w19 != 0x160) {
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
            O_constprop_2 ();
        }
label_1:
        dbg_ad ();
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
    dbg_ad ();
    dbg_ad ();
    if (w19 == 0x160) {
        goto label_7;
    }
    w0 = *(x21);
    if (w0 != 0x3b) {
        O_constprop_2 ();
    }
    dbg_ad ();
    x19 = 0x13000;
    x0 = *((x20 + 0xf50));
    *((x29 + 0x4c)) = 0;
    x21 = *(0x13000);
    w0 = *(x0);
    w23 = *(0x13000);
    if (w0 != 0x3b) {
        O_constprop_2 ();
        w0 = *(x21);
        w4 = 0x7a;
        w3 = 0x3f;
        w2 = 0xf;
        w1 = w0 + 1;
        x0 = (int64_t) w0;
        *(x21) = w1;
        w1 = 0x7b;
        *(x0) = w4;
        w0 = *(x21);
        w4 = w0 + 1;
        x0 = (int64_t) w0;
        *(x21) = w4;
        *(x0) = w3;
        w0 = *(x21);
        w3 = w0 + 1;
        x0 = (int64_t) w0;
        *(x21) = w3;
        *(x0) = w2;
        w0 = *(x21);
        w2 = w0 + 1;
        x0 = (int64_t) w0;
        *(x21) = w2;
        *(x0) = w1;
        x0 = *(x21);
        *(x0) = 0;
        w0 = *(x21);
        w1 = w0 + 4;
        *((x29 + 0x4c)) = w0;
        *(x21) = w1;
    }
    dbg_ad ();
    x20 = *((x20 + 0xf50));
    w0 = *(x20);
    if (w0 == 0x29) {
        goto label_8;
    }
    x22 = *((x19 + sym.o));
    w24 = 0x16;
    w0 = *(x22);
    w1 = w0 + 1;
    x0 = (int64_t) w0;
    *(x22) = w1;
    *(x0) = w24;
    x0 = *(x22);
    *(x0) = 0;
    w20 = *(x22);
    w21 = w20 + 4;
    *(x22) = w21;
    O_constprop_2 ();
    w0 = *(x22);
    w1 = w0 + 1;
    w23 -= w0;
    x0 = (int64_t) w0;
    *(x22) = w1;
    w23 -= 5;
    *(x0) = w24;
    x0 = *(x22);
    *(x0) = w23;
    w0 = *(x22);
    w0 += 4;
    *(x22) = w0;
    if (w20 != 0) {
        goto label_9;
    }
    goto label_10;
    do {
        w0 = *(x22);
label_9:
        x2 = (int64_t) w20;
        w0 -= w20;
        w0 -= 4;
        w1 = *(x2);
        *(x2) = w0;
        w20 = w1;
    } while (w1 != 0);
label_2:
    dbg_ad ();
    x0 = x29 + 0x4c;
    dbg_I (x0);
    x4 = *((x19 + sym.o));
    w1 = 0x16;
    w0 = *(x4);
    w2 = w0 + 1;
    w21 -= w0;
    x0 = (int64_t) w0;
    *(x4) = w2;
    w21 -= 5;
    *(x0) = w1;
    x0 = *(x4);
    *(x0) = w21;
    w1 = *(x4);
    w2 = *((x29 + 0x4c));
    w0 = w1 + 4;
    *(x4) = w0;
    if (w2 != 0) {
        goto label_11;
    }
    goto label_0;
    do {
        w0 = *(x4);
label_11:
        x3 = (int64_t) w2;
        w0 -= w2;
        w0 -= 4;
        w1 = *(x3);
        *(x3) = w0;
        w2 = w1;
    } while (w1 != 0);
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
label_5:
    dbg_ad ();
    w0 = *(x21);
    if (w0 != 0x3b) {
        O_constprop_2 ();
    }
    w4 = 0x16;
    x0 = *(0x13000);
    x1 = K;
    w2 = *(0x13000);
    w3 = K;
    w5 = w2 + 1;
    x2 = (int64_t) w2;
    *(x0) = w5;
    *(x2) = w4;
    x2 = *(x0);
    *(x2) = w3;
    w2 = *(0x13000);
    w3 = w2 + 4;
    *(x1) = w2;
    *(x0) = w3;
    goto label_1;
label_8:
    w21 = w23;
    goto label_2;
label_3:
    x19 = 0x13000;
    dbg_ad ();
    dbg_ad ();
    O_constprop_2 ();
    x20 = *(0x13000);
    w4 = 0x7a;
    w3 = 0x3f;
    w2 = 0xf;
    w1 = 0x7b;
    w0 = *(0x13000);
    w5 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w5;
    *(x0) = w4;
    w0 = *(0x13000);
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w4;
    *(x0) = w3;
    w0 = *(0x13000);
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w3;
    *(x0) = w2;
    w0 = *(0x13000);
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w2;
    *(x0) = w1;
    x0 = *(x20);
    *(x0) = 0;
    w0 = *(0x13000);
    w1 = w0 + 4;
    *((x29 + 0x4c)) = w0;
    *(x20) = w1;
    dbg_ad ();
    w0 = w22;
    dbg_I (w0);
    w0 = *(x21);
    if (w0 == 0x138) {
        goto label_12;
    }
    w0 = *((x29 + 0x4c));
    if (w0 == 0) {
        goto label_0;
    }
    do {
        x2 = (int64_t) w0;
        w1 = *(x20);
        w1 -= w0;
        w0 = *(x2);
        w1 -= 4;
        *(x2) = w1;
    } while (w0 != 0);
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
    dbg_ad ();
    x19 = x21;
    w0 = 0x1;
    dbg_ab (w0);
    w0 = *(x21);
    if (w0 == 0x7d) {
        goto label_1;
    }
    do {
        w0 = w22;
        dbg_I (w0);
        w0 = *(x19);
    } while (w0 != 0x7d);
    goto label_1;
label_6:
    dbg_ad ();
    w3 = 0x16;
    w2 = *(x22);
    x0 = *(0x13000);
    w1 = *(0x13000);
    w4 = w1 + 1;
    x1 = (int64_t) w1;
    *(x0) = w4;
    *(x1) = w3;
    x1 = *(x0);
    *(x1) = w2;
    w1 = *(0x13000);
    w2 = w1 + 4;
    *(x0) = w2;
    *(x22) = w1;
    goto label_1;
label_7:
    x19 = 0x13000;
    x20 = *(0x13000);
    w21 = *(0x13000);
    O_constprop_2 ();
    w0 = *(0x13000);
    w4 = 0x7a;
    w3 = 0x3f;
    w2 = 0xf;
    w5 = w0 + 1;
    w1 = 0x7b;
    x0 = (int64_t) w0;
    *(x20) = w5;
    *(x0) = w4;
    w0 = *(0x13000);
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w4;
    *(x0) = w3;
    w0 = *(0x13000);
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w3;
    *(x0) = w2;
    w0 = *(0x13000);
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w2;
    *(x0) = w1;
    x0 = *(x20);
    *(x0) = 0;
    w0 = *(0x13000);
    w1 = w0 + 4;
    *((x29 + 0x4c)) = w0;
    *(x20) = w1;
    goto label_2;
label_12:
    dbg_ad ();
    w0 = *(x20);
    w1 = 0x16;
    w2 = w0 + 1;
    x0 = (int64_t) w0;
    *(x20) = w2;
    *(x0) = w1;
    x0 = *(x20);
    *(x0) = 0;
    w21 = *(x20);
    w1 = *((x29 + 0x4c));
    w0 = w21 + 4;
    *(x20) = w0;
    if (w1 != 0) {
        goto label_13;
    }
    goto label_14;
    do {
        w0 = *(x20);
label_13:
        x3 = (int64_t) w1;
        w0 -= w1;
        w0 -= 4;
        w2 = *(x3);
        *(x3) = w0;
        w1 = w2;
    } while (w2 != 0);
label_14:
    w0 = w22;
    dbg_I (w0);
    x4 = *((x19 + sym.o));
    if (w21 == 0) {
        goto label_0;
    }
    do {
        x1 = (int64_t) w21;
        w0 = *(x4);
        w0 -= w21;
        w21 = *(x1);
        w0 -= 4;
        *(x1) = w0;
    } while (w21 != 0);
    goto label_0;
label_10:
    w21 = 0x4;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x2d78 */
#include <stdint.h>
 
uint64_t U () {
    int64_t var_10h;
    int64_t var_10h_2;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    O_constprop_2 ();
    w5 = 0x7a;
    w4 = 0x3f;
    w3 = 0xf;
    w2 = 0x7b;
    x1 = *(0x13000);
    w0 = *(0x13000);
    w6 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w6;
    *(x0) = w5;
    w0 = *(0x13000);
    w5 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w5;
    *(x0) = w4;
    w0 = *(0x13000);
    w4 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w4;
    *(x0) = w3;
    w0 = *(0x13000);
    w3 = w0 + 1;
    x0 = (int64_t) w0;
    *(x1) = w3;
    *(x0) = w2;
    x0 = *(x1);
    *(x0) = 0;
    w0 = *(0x13000);
    w2 = w0 + 4;
    *(x1) = w2;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x13000;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x1c18 */
#include <stdint.h>
 
void S (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x5 = 0x13000;
    w8 = 0x7a;
    w7 = 0x3f;
    w3 = w0 + 0x85;
    w6 = 0xf;
    x2 = *(0x13000);
    w0 += 0x84;
    x3 = x2;
    w4 = *(0x13000);
    w9 = w4 + 1;
    x4 = (int64_t) w4;
    *(x2) = w9;
    *(x4) = w8;
    w4 = *(0x13000);
    w8 = w4 + 1;
    x4 = (int64_t) w4;
    *(x2) = w8;
    *(x4) = w7;
    w4 = *(0x13000);
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
    x2 = *((x5 + sym.o));
    x0 = *(x2);
    *(x0) = w1;
    w0 = *(x2);
    w1 = w0 + 4;
    *(x2) = w1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x1b48 */
#include <stdint.h>
 
void s (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w2 = w0 + 1;
    x5 = 0x13000;
    x3 = *(0x13000);
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
    x2 = *((x5 + sym.o));
    x0 = *(x2);
    *(x0) = w1;
    w0 = *(x2);
    w1 = w0 + 4;
    *(x2) = w1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0x2d70 */
#include <stdint.h>
 
void w () {
    return void (*0x2188)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xc10 */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xc70 */
#include <stdint.h>
 
void isspace () {
    x17 = .plt;
    x16 = 0x14010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xc80 */
#include <stdint.h>
 
void dlsym () {
    x17 = .plt;
    x16 = 0x14018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xcd0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x14040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xce0 */
#include <stdint.h>
 
void strtol () {
    x17 = .plt;
    x16 = 0x14048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xcf0 */
#include <stdint.h>
 
void strstr () {
    x17 = .plt;
    x16 = 0x14050;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O3/subject.exe @ 0xc30 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 224 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x13ff8;
    return uint64_t (*x17)() ();
}

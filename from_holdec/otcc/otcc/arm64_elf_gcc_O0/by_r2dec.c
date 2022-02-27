/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xd10 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 6284 named .text */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xc90 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x13020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x2368 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc, char ** argv) {
    int32_t e;
    int32_t g;
    char * filename;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = argc;
    x1 = argv;
    /* int main(int g,int e); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    x0 = .comment;
    w1 = w0;
    x0 = Q;
    *(x0) = w1;
    w0 = *((x29 + 0x1c));
    w1 = w0 - 1;
    *((x29 + 0x1c)) = w1;
    __asm ("b.le 0x23e8");
    w0 = *((x29 + 0x18));
    w0 += 4;
    *((x29 + 0x18)) = w0;
    x0 = *((x29 + 0x18));
    w0 = *(x0);
    x0 = (int64_t) w0;
    x2 = x0;
    x0 = 0x2638;
    x1 = x0;
    x0 = x2;
    w0 = fopen (x0, x1);
    w1 = w0;
    x0 = Q;
    *(x0) = w1;
    x1 = 0x1869f;
    x0 = 0x1;
    w0 = calloc (x0, x1);
    w1 = w0;
    x0 = R;
    *(x0) = w1;
    x0 = R;
    w0 = R;
    x0 = (int64_t) w0;
    x4 = x0;
    x0 = 0x2000;
    x1 = x0 + 0x640;
    x0 = x4;
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
    *((x0 + 0x30)) = w1;
    x0 = x4;
    x0 += 0x30;
    w1 = w0;
    x0 = D;
    *(x0) = w1;
    x1 = 0x1869f;
    x0 = 0x1;
    w0 = calloc (x0, x1);
    w1 = w0;
    x0 = v;
    *(x0) = w1;
    x1 = 0x1869f;
    x0 = 0x1;
    w0 = calloc (x0, x1);
    w1 = w0;
    x0 = ac;
    *(x0) = w1;
    x0 = ac;
    w1 = ac;
    x0 = q;
    *(x0) = w1;
    x1 = 0x1869f;
    x0 = 0x1;
    w0 = calloc (x0, x1);
    w1 = w0;
    x0 = P;
    *(x0) = w1;
    dbg_o ();
    dbg_ad ();
    w0 = 0x0;
    dbg_ab (w0);
    x0 = P;
    w0 = 0x13188;
    x0 = (int64_t) w0;
    w0 = P;
    x0 = (int64_t) w0;
    x2 = x0;
    w1 = *((x29 + 0x18));
    w0 = *((x29 + 0x1c));
    uint64_t (*x2)(uint32_t, uint32_t, uint64_t) (w0, w1, x2);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12f38;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xc60 */
#include <stdint.h>
 
void fopen () {
    x16 = 0x13000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xcb0 */
#include <stdint.h>
 
void calloc () {
    x17 = .plt;
    x16 = 0x13030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xe98 */
#include <stdint.h>
 
void dbg_o () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int o(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = L;
    w0 = L;
    if (w0 != 0) {
        x0 = L;
        w0 = L;
        w2 = w0 + 1;
        x1 = L;
        *(x1) = w2;
        x0 = (int64_t) w0;
        w0 = *(x0);
        w1 = w0;
        x0 = h;
        *(x0) = w1;
        x0 = h;
        w0 = h;
        if (w0 != 2) {
            goto label_0;
        }
        x0 = L;
        *(x0) = 0;
        x0 = W;
        w1 = W;
        x0 = h;
        *(x0) = w1;
    } else {
        x0 = Q;
        w0 = Q;
        x0 = (int64_t) w0;
        w0 = fgetc (x0);
        w1 = w0;
        x0 = h;
        *(x0) = w1;
    }
label_0:
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xfe4 */
#include <stdint.h>
 
void dbg_ad () {
    int32_t m;
    int32_t j;
    int32_t e;
    int64_t var_14h;
    char * var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    /* int ad(); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    goto label_3;
label_0:
    x0 = h;
    w0 = h;
    if (w0 != 0x23) {
        goto label_4;
    }
    dbg_o ();
    dbg_ad ();
    x0 = d;
    w0 = d;
    if (w0 != 0x218) {
        goto label_5;
    }
    dbg_ad ();
    w0 = 0x20;
    dbg_E (w0, x1);
    x0 = d;
    w0 = d;
    x0 = (int64_t) w0;
    x1 = x0;
    w0 = 0x1;
    *(x1) = w0;
    x0 = d;
    w0 = d;
    w0 += 4;
    x0 = (int64_t) w0;
    x1 = x0;
    x0 = D;
    w0 = D;
    *(x1) = w0;
    while (w0 != 0xa) {
        x0 = h;
        w0 = h;
        x0 = dbg_E (x0, x1);
        dbg_o ();
label_5:
        x0 = h;
        w0 = h;
    }
    x0 = h;
    w0 = h;
    dbg_E (x0, x1);
    w0 = 0x2;
    x0 = dbg_E (w0, x1);
label_4:
    dbg_o ();
label_3:
    x0 = h;
    w0 = h;
    w0 = isspace (w0);
    w1 = w0;
    x0 = h;
    w0 = h;
    w0 = (w0 == 0x23) ? 1 : 0;
    w0 = (int8_t) w0;
    w0 = w1 | w0;
    if (w0 != 0) {
        goto label_0;
    }
    x0 = C;
    *(x0) = 0;
    x0 = h;
    w1 = h;
    x0 = d;
    *(x0) = w1;
    w0 = dbg_X ();
    if (w0 == 0) {
        goto label_6;
    }
    w0 = 0x20;
    dbg_E (w0, x1);
    x0 = D;
    w1 = D;
    x0 = M;
    *(x0) = w1;
    while (w0 != 0) {
        x0 = h;
        w0 = h;
        x0 = dbg_E (x0, x1);
        dbg_o ();
        w0 = dbg_X ();
    }
    x0 = d;
    w0 = d;
    w0 -= 0x30;
    if (w0 <= 9) {
        x0 = M;
        w0 = M;
        w2 = 0x0;
        w1 = 0x0;
        w0 = strtol (w0, w1, w2);
        w1 = w0;
        x0 = z;
        *(x0) = w1;
        x0 = d;
        w1 = 0x2;
        *(x0) = w1;
        goto label_7;
    }
    x0 = D;
    w0 = D;
    x0 = (int64_t) w0;
    x1 = x0;
    w0 = 0x20;
    *(x1) = w0;
    x0 = R;
    w0 = R;
    x0 = (int64_t) w0;
    x2 = x0;
    x0 = M;
    w0 = M;
    w0--;
    x0 = (int64_t) w0;
    x1 = x0;
    x0 = x2;
    x0 = strstr (x0, x1);
    x1 = x0;
    x0 = R;
    w0 = R;
    x0 = (int64_t) w0;
    x0 = -x0;
    x0 = x1 + x0;
    w1 = w0;
    x0 = d;
    *(x0) = w1;
    x0 = D;
    w0 = D;
    x0 = (int64_t) w0;
    *(x0) = 0;
    x0 = d;
    w0 = 0x12f70;
    w1 = w0 << 3;
    x0 = d;
    *(x0) = w1;
    x0 = d;
    w0 = d;
    __asm ("b.le 0x1558");
    x0 = P;
    x0 = d;
    w0 = d;
    w1 = 0x12f38;
    x0 = d;
    *(x0) = w1;
    x0 = d;
    w0 = d;
    x0 = (int64_t) w0;
    w0 = d;
    if (w0 != 1) {
        goto label_7;
    }
    x0 = d;
    w0 = d;
    w0 += 4;
    x0 = (int64_t) w0;
    w1 = d;
    x0 = L;
    *(x0) = w1;
    x0 = h;
    w1 = h;
    x0 = W;
    *(x0) = w1;
    dbg_o ();
    dbg_ad ();
    goto label_7;
label_6:
    dbg_o ();
    x0 = d;
    w0 = d;
    if (w0 == 0x27) {
        x0 = d;
        w1 = 0x2;
        *(x0) = w1;
        dbg_Y ();
        x0 = h;
        w1 = h;
        x0 = z;
        *(x0) = w1;
        dbg_o ();
        dbg_o ();
        goto label_7;
    }
    x0 = d;
    w0 = d;
    w0 = (w0 == 0x2f) ? 1 : 0;
    w1 = (int8_t) w0;
    x0 = h;
    w0 = h;
    w0 = (w0 == 0x2a) ? 1 : 0;
    w0 = (int8_t) w0;
    w0 = w1 & w0;
    w0 = (int8_t) w0;
    if (w0 == 0) {
        goto label_8;
    }
    dbg_o ();
    goto label_9;
    do {
        dbg_o ();
label_1:
        x0 = h;
        w0 = h;
    } while (w0 != 0x2a);
    dbg_o ();
    x0 = h;
    w0 = h;
    if (w0 == 0x2f) {
        x0 = h;
        *(x0) = 0;
    }
label_9:
    x0 = h;
    w0 = h;
    if (w0 != 0) {
        goto label_1;
    }
    dbg_o ();
    dbg_ad ();
    goto label_7;
label_8:
    x0 = "++#m--%am*@R<^1c/@%[_[H3c%@%[_[H3c+@.B#d-@%:_^BKd<<Z/03e>>`/03e<=0f>=/f<@.f>@1f==&g!='g&&k||#l&@.BCh^@.BSi|@.B+j~@/%Yd!@&d*@b";
    *((x29 + 0x1c)) = w0;
    goto label_10;
label_2:
    w0 = *((x29 + 0x1c));
    w1 = w0 + 1;
    *((x29 + 0x1c)) = w1;
    x0 = (int64_t) w0;
    w0 = *(x0);
    *((x29 + 0x14)) = w0;
    x0 = z;
    *(x0) = 0;
    while (w0 < 0) {
        x0 = z;
        w0 = z;
        w1 = w0 << 6;
        x0 = C;
        w0 = C;
        w0 = w1 + w0;
        w1 = w0 + 0x40;
        x0 = z;
        *(x0) = w1;
        w0 = *((x29 + 0x1c));
        w1 = w0 + 1;
        *((x29 + 0x1c)) = w1;
        x0 = (int64_t) w0;
        w0 = *(x0);
        w1 = w0 - 0x62;
        x0 = C;
        *(x0) = w1;
        x0 = C;
        w0 = C;
    }
    x0 = d;
    w0 = d;
    w1 = *((x29 + 0x18));
    w0 = (w1 == w0) ? 1 : 0;
    w0 = (int8_t) w0;
    w2 = w0;
    x0 = h;
    w0 = h;
    w1 = *((x29 + 0x14));
    w0 = (w1 == w0) ? 1 : 0;
    w1 = (int8_t) w0;
    w0 = *((x29 + 0x14));
    w0 = (w0 == 0x40) ? 1 : 0;
    w0 = (int8_t) w0;
    w0 = w1 | w0;
    w0 = (int8_t) w0;
    w0 = w2 & w0;
    if (w0 != 0) {
        x0 = h;
        w0 = h;
        w1 = *((x29 + 0x14));
        if (w1 != w0) {
            goto label_11;
        }
        dbg_o ();
        x0 = d;
        w1 = 0x1;
        *(x0) = w1;
        goto label_11;
    }
label_10:
    w0 = *((x29 + 0x1c));
    w1 = w0 + 1;
    *((x29 + 0x1c)) = w1;
    x0 = (int64_t) w0;
    w0 = *(x0);
    *((x29 + 0x18)) = w0;
    w0 = *((x29 + 0x18));
    if (w0 != 0) {
        goto label_2;
    }
    goto label_7;
label_11:
label_7:
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x20e4 */
#include <stdint.h>
 
void dbg_ab (int64_t arg1) {
    int32_t j;
    int32_t m;
    int64_t var_1ch;
    signed int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    /* int ab(int j); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    goto label_1;
label_0:
    x0 = d;
    w0 = d;
    if (w0 != 0x100) {
        goto label_2;
    }
    dbg_ad ();
    while (w0 != 0x3b) {
        w0 = *((x29 + 0x1c));
        if (w0 != 0) {
            x0 = G;
            w0 = G;
            w1 = w0 + 4;
            x0 = G;
            *(x0) = w1;
            x0 = d;
            w0 = d;
            x0 = (int64_t) w0;
            x1 = x0;
            x0 = G;
            w0 = G;
            w0 = -w0;
            *(x1) = w0;
        } else {
            x0 = d;
            w0 = d;
            x0 = (int64_t) w0;
            x1 = x0;
            x0 = v;
            w0 = v;
            *(x1) = w0;
            x0 = v;
            w0 = v;
            w1 = w0 + 4;
            x0 = v;
            *(x0) = w1;
        }
        dbg_ad ();
        x0 = d;
        w0 = d;
        if (w0 == 0x2c) {
            dbg_ad ();
        }
        x0 = d;
        w0 = d;
    }
    dbg_ad ();
    goto label_1;
label_2:
    x0 = d;
    w0 = d;
    w0 += 4;
    x0 = (int64_t) w0;
    w0 = d;
    dbg_A (x0, x1);
    x0 = d;
    w0 = d;
    x0 = (int64_t) w0;
    x1 = x0;
    x0 = q;
    w0 = q;
    *(x1) = w0;
    dbg_ad ();
    dbg_ad ();
    w0 = 0x8;
    *((x29 + 0x2c)) = w0;
    while (w0 != 0x29) {
        x0 = d;
        w0 = d;
        x0 = (int64_t) w0;
        x1 = x0;
        w0 = *((x29 + 0x2c));
        *(x1) = w0;
        w0 = *((x29 + 0x2c));
        w0 += 4;
        *((x29 + 0x2c)) = w0;
        dbg_ad ();
        x0 = d;
        w0 = d;
        if (w0 == 0x2c) {
            dbg_ad ();
        }
        x0 = d;
        w0 = d;
    }
    dbg_ad ();
    x0 = G;
    *(x0) = 0;
    x0 = G;
    w1 = G;
    x0 = K;
    *(x0) = w1;
    w0 = 0xe58955;
    dbg_ae (w0, x1);
    w1 = 0x0;
    w0 = 0xec81;
    dbg_s (w0, w1);
    *((x29 + 0x2c)) = w0;
    w0 = 0x0;
    dbg_I (w0);
    x0 = K;
    w0 = K;
    dbg_A (x0, x1);
    w0 = 0xc3c9;
    dbg_ae (w0, x1);
    x0 = *((x29 + 0x2c));
    x1 = x0;
    x0 = G;
    w0 = G;
    *(x1) = w0;
label_1:
    x0 = d;
    w0 = d;
    w0 = (w0 == 0x100) ? 1 : 0;
    w0 = (int8_t) w0;
    w2 = w0;
    x0 = d;
    w0 = d;
    w0 = (w0 != 1) ? 1 : 0;
    w1 = (int8_t) w0;
    w0 = *((x29 + 0x1c));
    w0 = (w0 == 0) ? 1 : 0;
    w0 = (int8_t) w0;
    w0 = w1 & w0;
    w0 = (int8_t) w0;
    w0 = w2 | w0;
    if (w0 != 0) {
        goto label_0;
    }
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x2598).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x2520 */
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
    x21 += entry0;
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xd48 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0xcc0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xd60 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x13070;
    x0 = 0x13070;
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xd98 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x13070;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x13070;
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xdd8 */
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
    w0 = *((x19 + 0x70));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x13068);
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xc50 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x13000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xe20 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0xd98)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xd98)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x16b8 */
#include <stdint.h>
 
uint64_t dbg_B (signed int64_t arg1) {
    int32_t e;
    signed int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    /* int B(int e); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    w1 = *((x29 + 0x1c));
    w0 = 0xe9;
    dbg_s (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xe9;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x1628 */
#include <stdint.h>
 
uint64_t dbg_s (signed int64_t arg1, char * arg2) {
    int32_t e;
    int32_t g;
    char * var_18h;
    signed int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    x1 = arg2;
    /* int s(int g,int e); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    w0 = *((x29 + 0x1c));
    dbg_ae (w0, w1);
    x0 = q;
    w0 = q;
    x0 = (int64_t) w0;
    x1 = x0;
    w0 = *((x29 + 0x18));
    *(x1) = w0;
    x0 = q;
    w0 = q;
    *((x29 + 0x18)) = w0;
    x0 = q;
    w0 = q;
    w1 = w0 + 4;
    x0 = q;
    *(x0) = w1;
    w0 = *((x29 + 0x18));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12fc8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x1564 */
#include <stdint.h>
 
void dbg_ae (int64_t arg_10h, int64_t arg1) {
    int32_t g;
    int64_t var_ch;
    x0 = arg1;
    /* int ae(int g); */
    *((sp + 0xc)) = w0;
    while (w0 != 1) {
        x0 = q;
        w0 = q;
        w2 = w0 + 1;
        x1 = q;
        *(x1) = w2;
        x0 = (int64_t) w0;
        w1 = *((sp + 0xc));
        w1 = (int8_t) w1;
        *(x0) = w1;
        w0 = *((sp + 0xc));
        w0 >>= 8;
        *((sp + 0xc)) = w0;
        w0 = *((sp + 0xc));
        if (w0 == 0) {
            goto label_0;
        }
        w0 = *((sp + 0xc));
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x1750 */
#include <stdint.h>
 
void dbg_N (int64_t arg1, char * arg2) {
    int32_t e;
    int32_t j;
    char * var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    x1 = arg2;
    /* int N(int j,int e); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    w0 = *((x29 + 0x1c));
    w0 += 0x83;
    dbg_ae (w0, x1);
    w0 = *((x29 + 0x18));
    if (w0 <= 0x1ff) {
        w0 = 0x85;
    } else {
        w0 = 0x5;
    }
    w1 = *((x29 + 0x18));
    dbg_s (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x1694 */
#include <stdint.h>
 
uint64_t dbg_H (int64_t arg1) {
    int32_t e;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    /* int H(int e); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    w1 = *((x29 + 0x1c));
    w0 = 0xb8;
    dbg_s (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xb8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x1798 */
#include <stdint.h>
 
void dbg_T (int64_t arg1) {
    int32_t j;
    int32_t m;
    int32_t aa;
    int32_t e;
    int32_t g;
    int64_t var_2ch;
    signed int64_t var_30h;
    int64_t var_34h;
    signed int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    x0 = arg1;
    /* int T(int j); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((x29 + 0x2c)) = w0;
    w0 = 0x1;
    *((x29 + 0x3c)) = w0;
    x0 = d;
    w0 = d;
    if (w0 != 0x22) {
        goto label_0;
    }
    x0 = v;
    w0 = v;
    dbg_H (w0);
    while (w0 != 0x22) {
        dbg_Y ();
        x0 = v;
        w0 = v;
        w2 = w0 + 1;
        x1 = v;
        *(x1) = w2;
        x0 = (int64_t) w0;
        x1 = x0;
        x0 = h;
        w0 = h;
        w0 = (int8_t) w0;
        *(x1) = w0;
        dbg_o ();
        x0 = h;
        w0 = h;
    }
    x0 = v;
    w0 = v;
    x0 = (int64_t) w0;
    *(x0) = 0;
    x0 = v;
    w0 = v;
    w0 += 4;
    w1 = w0 & 0xfffffffc;
    x0 = v;
    *(x0) = w1;
    dbg_o ();
    dbg_ad ();
    goto label_1;
label_0:
    x0 = C;
    w0 = C;
    *((x29 + 0x34)) = w0;
    x0 = z;
    w0 = z;
    *((x29 + 0x30)) = w0;
    x0 = d;
    w0 = d;
    *((x29 + 0x38)) = w0;
    dbg_ad ();
    w0 = *((x29 + 0x38));
    if (w0 == 2) {
        w0 = *((x29 + 0x30));
        dbg_H (w0);
    } else {
        w0 = *((x29 + 0x34));
        if (w0 == 2) {
            w0 = 0x0;
            dbg_T (w0);
            w1 = 0x0;
            w0 = 0xb9;
            dbg_s (w0, w1);
            w0 = *((x29 + 0x38));
            if (w0 == 0x21) {
                w0 = *((x29 + 0x30));
                dbg_Z (w0);
            } else {
                w0 = *((x29 + 0x30));
            }
            dbg_ae (w0, x1);
        } else {
            w0 = *((x29 + 0x38));
            if (w0 == 0x28) {
                dbg_w ();
                dbg_ad ();
            } else {
                w0 = *((x29 + 0x38));
                if (w0 == 0x2a) {
                    dbg_ad ();
                    x0 = d;
                    w0 = d;
                    *((x29 + 0x38)) = w0;
                    dbg_ad ();
                    dbg_ad ();
                    x0 = d;
                    w0 = d;
                    if (w0 == 0x2a) {
                        dbg_ad ();
                        dbg_ad ();
                        dbg_ad ();
                        dbg_ad ();
                        *((x29 + 0x38)) = 0;
                    }
                    dbg_ad ();
                    w0 = 0x0;
                    dbg_T (w0);
                    x0 = d;
                    w0 = d;
                    if (w0 == 0x3d) {
                        dbg_ad ();
                        w0 = 0x50;
                        x0 = dbg_ae (w0, x1);
                        dbg_w ();
                        w0 = 0x59;
                        dbg_ae (w0, x1);
                        w0 = *((x29 + 0x38));
                        if (w0 == 0x100) {
                            w0 = 0x189;
                        } else {
                            w0 = 0x188;
                        }
                        dbg_ae (w0, x1);
                        w0 = *((x29 + 0x38));
                    } else {
                    } else {
                    }
                }
            }
        }
    }
    if (w0 == 0) {
        goto label_1;
    }
    w0 = *((x29 + 0x38));
    if (w0 == 0x100) {
        w0 = 0x8b;
        dbg_ae (w0, x1);
    } else {
        w0 = 0xbe0f;
        dbg_ae (w0, x1);
    }
    x0 = q;
    w0 = q;
    w1 = w0 + 1;
    x0 = q;
    *(x0) = w1;
    w0 = *((x29 + 0x38));
    if (w0 == 0x26) {
        x0 = d;
        w0 = d;
        x0 = (int64_t) w0;
        w0 = d;
        w1 = w0;
        w0 = 0xa;
        x0 = dbg_N (w0, w1);
        dbg_ad ();
    } else {
        x0 = *((x29 + 0x38));
        w0 = *(x0);
        *((x29 + 0x3c)) = w0;
        w0 = *((x29 + 0x3c));
        if (w0 == 0) {
            x0 = M;
            w0 = M;
            w1 = w0;
            w0 = 0x0;
            dlsym ();
            *((x29 + 0x3c)) = w0;
        }
        x0 = d;
        w0 = d;
        w0 = (w0 == 0x3d) ? 1 : 0;
        w0 = (int8_t) w0;
        w1 = w0;
        w0 = *((x29 + 0x2c));
        w0 = w1 & w0;
        if (w0 != 0) {
            dbg_ad ();
            dbg_w ();
            w1 = *((x29 + 0x3c));
            w0 = 0x6;
            dbg_N (w0, w1);
        } else {
            x0 = d;
            w0 = d;
            if (w0 == 0x28) {
                goto label_1;
            }
            w1 = *((x29 + 0x3c));
            w0 = 0x8;
            dbg_N (w0, w1);
            x0 = C;
            w0 = C;
            if (w0 != 0xb) {
                goto label_1;
            }
            w1 = *((x29 + 0x3c));
            w0 = 0x0;
            dbg_N (w0, w1);
            x0 = z;
            w0 = z;
            x0 = dbg_ae (x0, x1);
            dbg_ad ();
        }
    }
label_1:
    x0 = d;
    w0 = d;
    if (w0 != 0x28) {
        goto label_2;
    }
    w0 = *((x29 + 0x3c));
    if (w0 == 1) {
        w0 = 0x50;
        dbg_ae (w0, x1);
    }
    w1 = 0x0;
    w0 = 0xec81;
    dbg_s (w0, w1);
    *((x29 + 0x30)) = w0;
    dbg_ad ();
    *((x29 + 0x2c)) = 0;
    while (w0 != 0x29) {
        dbg_w ();
        w1 = *((x29 + 0x2c));
        w0 = 0x248489;
        dbg_s (w0, x1);
        x0 = d;
        w0 = d;
        if (w0 == 0x2c) {
            dbg_ad ();
        }
        w0 = *((x29 + 0x2c));
        w0 += 4;
        *((x29 + 0x2c)) = w0;
        x0 = d;
        w0 = d;
    }
    x0 = *((x29 + 0x30));
    x1 = x0;
    w0 = *((x29 + 0x2c));
    *(x1) = w0;
    dbg_ad ();
    w0 = *((x29 + 0x3c));
    if (w0 == 0) {
        w0 = *((x29 + 0x38));
        w0 += 4;
        *((x29 + 0x38)) = w0;
        x0 = *((x29 + 0x38));
        x19 = x0;
        x0 = *((x29 + 0x38));
        w0 = *(x0);
        w1 = w0;
        w0 = 0xe8;
        dbg_s (w0, w1);
        *(x19) = w0;
    } else {
        w0 = *((x29 + 0x3c));
        if (w0 == 1) {
            w1 = *((x29 + 0x2c));
            w0 = 0x2494ff;
            dbg_s (w0, x1);
            w0 = *((x29 + 0x2c));
            w0 += 4;
            *((x29 + 0x2c)) = w0;
        } else {
            x0 = q;
            w0 = q;
            w1 = *((x29 + 0x3c));
            w0 = w1 - w0;
            w0 -= 5;
            w1 = w0;
            w0 = 0xe8;
            dbg_s (w0, w1);
        }
    }
    w0 = *((x29 + 0x2c));
    if (w0 != 0) {
        w1 = *((x29 + 0x2c));
        w0 = 0xc481;
        dbg_s (w0, w1);
    }
label_2:
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xf54 */
#include <stdint.h>
 
uint64_t dbg_X () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int X(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = h;
    w0 = h;
    w0 = isalnum (w0);
    w1 = w0;
    x0 = h;
    w0 = h;
    w0 = (w0 == 0x5f) ? 1 : 0;
    w0 = (int8_t) w0;
    w0 = w1 | w0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12f58;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xd00 */
#include <stdint.h>
 
void isalnum () {
    x17 = .plt;
    x16 = 0x13058;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x170c */
#include <stdint.h>
 
uint64_t dbg_Z (int64_t arg1) {
    int32_t e;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    /* int Z(int e); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    w0 = 0xc139;
    dbg_ae (w0, x1);
    w0 = 0x0;
    dbg_H (w0);
    dbg_ae (w0, x1);
    w0 = *((x29 + 0x1c));
    w0 = 0x9f;
    dbg_ae (w0, x1);
    w0 = 0xc0;
    dbg_ae (w0, x1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xc0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x259c */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xe58 */
#include <stdint.h>
 
uint64_t dbg_E (int64_t arg_10h, int64_t arg1) {
    int32_t e;
    int64_t var_ch;
    x0 = arg1;
    /* int E(int e); */
    *((sp + 0xc)) = w0;
    x0 = D;
    w0 = D;
    w2 = w0 + 1;
    x1 = D;
    *(x1) = w2;
    x0 = (int64_t) w0;
    w1 = *((sp + 0xc));
    w1 = (int8_t) w1;
    *(x0) = w1;
    return 0x12f30;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xf94 */
#include <stdint.h>
 
void dbg_Y () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int Y(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = h;
    w0 = h;
    if (w0 == 0x5c) {
        dbg_o ();
        x0 = h;
        w0 = h;
        if (w0 != 0x6e) {
            goto label_0;
        }
        x0 = h;
        w1 = 0xa;
        *(x0) = w1;
    }
label_0:
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x15cc */
#include <stdint.h>
 
void dbg_A (int64_t arg_20h, signed int64_t arg1) {
    int32_t e;
    int32_t g;
    signed int64_t var_ch;
    int64_t var_1ch;
    x0 = arg1;
    /* int A(int e); */
    *((sp + 0xc)) = w0;
    while (w0 != 0) {
        x0 = *((sp + 0xc));
        w0 = *(x0);
        *((sp + 0x1c)) = w0;
        x0 = *((sp + 0xc));
        x2 = x0;
        x0 = q;
        w1 = q;
        w0 = *((sp + 0xc));
        w0 = w1 - w0;
        w0 -= 4;
        *(x2) = w0;
        w0 = *((sp + 0x1c));
        *((sp + 0xc)) = w0;
        w0 = *((sp + 0xc));
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x1c60 */
#include <stdint.h>
 
void dbg_O (int64_t arg1) {
    int32_t j;
    int32_t g;
    int32_t m;
    int32_t e;
    int64_t var_1ch;
    int64_t var_24h;
    char * var_28h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    /* int O(int j); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    w0 = *((x29 + 0x1c));
    w1 = w0 - 1;
    *((x29 + 0x1c)) = w1;
    if (w0 == 1) {
        w0 = 0x1;
        dbg_T (w0);
        goto label_0;
    }
    w0 = *((x29 + 0x1c));
    dbg_O (w0);
    *((x29 + 0x28)) = 0;
    while (w1 == w0) {
        x0 = d;
        w0 = d;
        *((x29 + 0x24)) = w0;
        x0 = z;
        w0 = z;
        *((x29 + 0x2c)) = w0;
        dbg_ad ();
        w0 = *((x29 + 0x1c));
        __asm ("b.le 0x1ce8");
        w1 = *((x29 + 0x28));
        w0 = *((x29 + 0x2c));
        dbg_S (w0, w1);
        *((x29 + 0x28)) = w0;
        w0 = *((x29 + 0x1c));
        dbg_O (w0);
        goto label_1;
        w0 = 0x50;
        dbg_ae (w0, x1);
        w0 = *((x29 + 0x1c));
        dbg_O (w0);
        w0 = 0x59;
        dbg_ae (w0, x1);
        w0 = *((x29 + 0x1c));
        w0 = (w0 == 4) ? 1 : 0;
        w1 = (int8_t) w0;
        w0 = *((x29 + 0x1c));
        w0 = (w0 == 5) ? 1 : 0;
        w0 = (int8_t) w0;
        w0 = w1 | w0;
        w0 = (int8_t) w0;
        if (w0 != 0) {
            w0 = *((x29 + 0x2c));
            dbg_Z (w0);
        } else {
            w0 = *((x29 + 0x2c));
            dbg_ae (w0, x1);
            w0 = *((x29 + 0x24));
            if (w0 != 0x25) {
                goto label_1;
            }
            w0 = 0x92;
            dbg_ae (w0, x1);
        }
label_1:
        x0 = C;
        w0 = C;
        w1 = *((x29 + 0x1c));
    }
    w0 = *((x29 + 0x28));
    if (w0 != 0) {
        w0 = *((x29 + 0x1c));
        __asm ("b.le 0x1dbc");
        w1 = *((x29 + 0x28));
        w0 = *((x29 + 0x2c));
        dbg_S (w0, w1);
        *((x29 + 0x28)) = w0;
        w0 = *((x29 + 0x2c));
        w0 ^= 1;
        dbg_H (w0);
        w0 = 0x5;
        dbg_B (w0);
        w0 = *((x29 + 0x28));
        dbg_A (w0, x1);
        w0 = *((x29 + 0x2c));
        dbg_H (w0);
    }
label_0:
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x1e04 */
#include <stdint.h>
 
void dbg_I (signed int64_t arg1) {
    int32_t j;
    int32_t m;
    int32_t e;
    int32_t g;
    signed int64_t var_2ch;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    x0 = arg1;
    /* int I(int j); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((x29 + 0x2c)) = w0;
    x0 = d;
    w0 = d;
    if (w0 == 0x120) {
        dbg_ad ();
        dbg_ad ();
        dbg_U ();
        *((x29 + 0x34)) = w0;
        dbg_ad ();
        w0 = *((x29 + 0x2c));
        dbg_I (w0);
        x0 = d;
        w0 = d;
        if (w0 == 0x138) {
            dbg_ad ();
            w0 = 0x0;
            dbg_B (w0);
            *((x29 + 0x3c)) = w0;
            w0 = *((x29 + 0x34));
            dbg_A (w0, x1);
            w0 = *((x29 + 0x2c));
            dbg_I (w0);
            w0 = *((x29 + 0x3c));
            dbg_A (w0, x1);
            goto label_0;
        }
        w0 = *((x29 + 0x34));
        dbg_A (w0, x1);
        goto label_0;
    }
    x0 = d;
    w0 = d;
    w0 = (w0 == 0x160) ? 1 : 0;
    w1 = (int8_t) w0;
    x0 = d;
    w0 = d;
    w0 = (w0 == 0x1f8) ? 1 : 0;
    w0 = (int8_t) w0;
    w0 = w1 | w0;
    w0 = (int8_t) w0;
    if (w0 != 0) {
        x0 = d;
        w0 = d;
        *((x29 + 0x38)) = w0;
        dbg_ad ();
        dbg_ad ();
        w0 = *((x29 + 0x38));
        if (w0 == 0x160) {
            x0 = q;
            w0 = q;
            *((x29 + 0x3c)) = w0;
            dbg_U ();
            *((x29 + 0x34)) = w0;
        } else {
            x0 = d;
            w0 = d;
            if (w0 != 0x3b) {
                dbg_w ();
            }
            dbg_ad ();
            x0 = q;
            w0 = q;
            *((x29 + 0x3c)) = w0;
            *((x29 + 0x34)) = 0;
            x0 = d;
            w0 = d;
            if (w0 != 0x3b) {
                dbg_U ();
                *((x29 + 0x34)) = w0;
            }
            dbg_ad ();
            x0 = d;
            w0 = d;
            if (w0 == 0x29) {
                goto label_1;
            }
            w0 = 0x0;
            dbg_B (w0);
            *((x29 + 0x38)) = w0;
            dbg_w ();
            x0 = q;
            w0 = q;
            w1 = *((x29 + 0x3c));
            w0 = w1 - w0;
            w0 -= 5;
            dbg_B (w0);
            w0 = *((x29 + 0x38));
            dbg_A (w0, x1);
            w0 = *((x29 + 0x38));
            w0 += 4;
            *((x29 + 0x3c)) = w0;
        }
label_1:
        dbg_ad ();
        x0 = x29 + 0x34;
        dbg_I (x0);
        x0 = q;
        w0 = q;
        w1 = *((x29 + 0x3c));
        w0 = w1 - w0;
        w0 -= 5;
        dbg_B (w0);
        w0 = *((x29 + 0x34));
        dbg_A (w0, x1);
        goto label_0;
    }
    x0 = d;
    w0 = d;
    if (w0 != 0x7b) {
        goto label_2;
    }
    dbg_ad ();
    w0 = 0x1;
    dbg_ab (w0);
    while (w0 != 0x7d) {
        w0 = *((x29 + 0x2c));
        dbg_I (w0);
        x0 = d;
        w0 = d;
    }
    dbg_ad ();
    goto label_0;
label_2:
    x0 = d;
    w0 = d;
    if (w0 == 0x1c0) {
        dbg_ad ();
        x0 = d;
        w0 = d;
        if (w0 != 0x3b) {
            dbg_w ();
        }
        x0 = K;
        w0 = K;
        w0 = dbg_B (w0);
        w1 = w0;
        x0 = K;
        *(x0) = w1;
    } else {
        x0 = d;
        w0 = d;
        if (w0 == 0x190) {
            dbg_ad ();
            x0 = *((x29 + 0x2c));
            x19 = x0;
            x0 = *((x29 + 0x2c));
            w0 = *(x0);
            dbg_B (w0);
            *(x19) = w0;
        } else {
            x0 = d;
            w0 = d;
            if (w0 == 0x3b) {
                goto label_3;
            }
            dbg_w ();
        }
    }
label_3:
    dbg_ad ();
label_0:
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x1de4 */
#include <stdint.h>
 
uint64_t dbg_U () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int U(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    dbg_w ();
    w1 = 0x0;
    w0 = 0x0;
    dbg_S (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x1dc8 */
#include <stdint.h>
 
uint64_t dbg_w () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int w(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w0 = 0xb;
    dbg_O (w0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xb;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0x16d8 */
#include <stdint.h>
 
uint64_t dbg_S (int64_t arg1, char * arg2) {
    int32_t e;
    int32_t j;
    char * var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    x1 = arg2;
    /* int S(int j,int e); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    w0 &= 0xffff;
    w0 |= 0xf0000;
    dbg_ae (w0, x1);
    w0 = *((x29 + 0x1c));
    w0 = 0xfc109;
    w1 = *((x29 + 0x18));
    dbg_s (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xfc109;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xc10 */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xc70 */
#include <stdint.h>
 
void isspace () {
    x17 = .plt;
    x16 = 0x13010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xc80 */
#include <stdint.h>
 
void dlsym () {
    x17 = .plt;
    x16 = 0x13018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xca0 */
#include <stdint.h>
 
void fgetc () {
    x17 = .plt;
    x16 = 0x13028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xcd0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x13040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xce0 */
#include <stdint.h>
 
void strtol () {
    x17 = .plt;
    x16 = 0x13048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xcf0 */
#include <stdint.h>
 
void strstr () {
    x17 = .plt;
    x16 = 0x13050;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O0/subject.exe @ 0xc30 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 224 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x12ff8;
    return uint64_t (*x17)() ();
}

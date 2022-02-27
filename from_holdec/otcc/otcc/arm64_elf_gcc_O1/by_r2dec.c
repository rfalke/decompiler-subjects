/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xd10 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 5116 named .text */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xc90 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x13020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x1f48 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc, char ** argv) {
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
    *((sp + 0x20)) = x21;
    w19 = w1;
    x1 = .comment;
    x2 = .comment;
    x1 = Q;
    *(x1) = w2;
    w20 = w0 - 1;
    __asm ("b.le 0x1fa4");
    w19 += 4;
    x0 = (int64_t) w19;
    x1 = 0x21a8;
    x0 = *(x0);
    fopen (x0, x1);
    x1 = Q;
    *(x1) = w0;
    x21 = 0x1869f;
    x1 = x21;
    x0 = 0x1;
    calloc (x0, x1);
    x1 = R;
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
    x1 = x21;
    x0 = 0x1;
    calloc (x0, x1);
    x1 = v;
    *(x1) = w0;
    x1 = x21;
    x0 = 0x1;
    calloc (x0, x1);
    x1 = ac;
    *(x1) = w0;
    x1 = q;
    *(x1) = w0;
    x1 = x21;
    x0 = 0x1;
    calloc (x0, x1);
    x21 = P;
    *(x21) = w0;
    dbg_o ();
    dbg_ad ();
    w0 = 0x0;
    dbg_ab (w0);
    w0 = 0x13188;
    x0 = (int64_t) w0;
    x2 = *(x0);
    w1 = w19;
    w0 = w20;
    uint64_t (*x2)(uint32_t, uint32_t, uint64_t) (w0, w1, x2);
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xc60 */
#include <stdint.h>
 
void fopen () {
    x16 = 0x13000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xcb0 */
#include <stdint.h>
 
void calloc () {
    x17 = .plt;
    x16 = 0x13030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xe78 */
#include <stdint.h>
 
uint64_t dbg_o () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int o(); */
    x0 = L;
    w0 = L;
    if (w0 != 0) {
        w2 = w0 + 1;
        x1 = L;
        *(x1) = w2;
        x0 = (int64_t) w0;
        w1 = *(x0);
        x0 = h;
        *(x0) = w1;
        if (w1 != 2) {
            return;
        }
        x0 = L;
        *(x0) = 0;
        x0 = W;
        w1 = W;
        x0 = h;
        *(x0) = w1;
        return 0x12f58;
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
    return 0x12fc0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xca0 */
#include <stdint.h>
 
void fgetc () {
    x17 = .plt;
    x16 = 0x13028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xf98 */
#include <stdint.h>
 
void dbg_ad () {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    /* int ad(); */
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
    x20 = h;
    x24 = 0x12000;
    x23 = d;
    x22 = D;
    goto label_7;
label_0:
    x0 = *((x21 + 0xf58));
    w0 = *(x0);
    if (w0 == 0xa) {
        goto label_8;
    }
    x19 = *((x21 + 0xf58));
    do {
        x0 = dbg_E (x0);
        dbg_o ();
        w0 = *(x19);
    } while (w0 != 0xa);
label_8:
    w0 = 0xa;
    dbg_E (w0);
    w0 = 0x2;
    x0 = dbg_E (w0);
    do {
        dbg_o ();
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
    dbg_o ();
    dbg_ad ();
    w0 = *(x23);
    if (w0 != 0x218) {
        goto label_0;
    }
    dbg_ad ();
    w0 = 0x20;
    dbg_E (w0);
    x0 = *((x24 + 0xf50));
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
    x0 = *(0x120db);
    *(x0) = 0;
    x0 = d;
    *(x0) = w19;
    w0 = dbg_X ();
    if (w0 == 0) {
        goto label_10;
    }
    w0 = 0x20;
    dbg_E (w0);
    x0 = D;
    w1 = D;
    x0 = M;
    *(x0) = w1;
    x19 = h;
    while (w0 != 0) {
        w0 = *(x19);
        x0 = dbg_E (w0);
        dbg_o ();
        w0 = dbg_X ();
    }
    x0 = d;
    w0 = d;
    w0 -= 0x30;
    if (w0 < 9) {
        goto label_11;
    }
    x19 = D;
    x0 = *(x19);
    w1 = 0x20;
    *(x0) = w1;
    x0 = M;
    w1 = M;
    w1--;
    x0 = R;
    x20 = *(x0);
    x1 = (int64_t) w1;
    x0 = x20;
    strstr (x0, x1);
    x1 = d;
    x0 -= x20;
    *(x1) = w0;
    x0 = *(x19);
    *(x0) = 0;
    w0 = 0x12f70;
    w0 <<= 3;
    *(x1) = w0;
    __asm ("b.le 0x117c");
    x1 = P;
    w1 = P;
    w0 += w1;
    x1 = d;
    *(x1) = w0;
    x1 = (int64_t) w0;
    w1 = d;
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
        x0 = M;
        w0 = M;
        strtol (x0, x1, x2);
        x1 = z;
        *(x1) = w0;
        w1 = 0x2;
        x0 = d;
        *(x0) = w1;
    } while (1);
label_12:
    w0 += 4;
    x0 = (int64_t) w0;
    w1 = *(x0);
    x0 = L;
    *(x0) = w1;
    x0 = h;
    w1 = h;
    x0 = W;
    *(x0) = w1;
    dbg_o ();
    dbg_ad ();
    goto label_1;
label_10:
    dbg_o ();
    x0 = d;
    w7 = d;
    if (w7 != 0x27) {
        x0 = h;
        w8 = h;
        w0 = 0x2a;
        __asm ("ccmp w8, w0, 0, eq");
        if (w7 == 0x2f) {
            goto label_13;
        }
        x1 = "++#m--%am*@R<^1c/@%[_[H3c%@%[_[H3c+@.B#d-@%:_^BKd<<Z/03e>>`/03e<=0f>=/f<@.f>@1f==&g!='g&&k||#l&@.BCh^@.BSi|@.B+j~@/%Yd!@&d*@b";
        x3 = 0x12000;
        x10 = z;
        x4 = 0x12000;
        x9 = *(0x120db);
        x3 = x10;
        x4 = x9;
        goto label_14;
    }
    w1 = 0x2;
    x0 = d;
    *(x0) = w1;
    dbg_Y ();
    x0 = h;
    w1 = h;
    x0 = z;
    *(x0) = w1;
    dbg_o ();
    dbg_o ();
    goto label_1;
label_13:
    dbg_o ();
    x22 = 0x12000;
    x19 = h;
    x21 = x19;
label_4:
    x20 = *((x22 + 0xf58));
    goto label_15;
    do {
label_2:
        dbg_o ();
        w0 = *(x19);
    } while (w0 != 0x2a);
label_3:
    dbg_o ();
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
    x0 = *((x22 + 0xf58));
    *(x0) = 0;
    goto label_4;
label_17:
    dbg_o ();
    dbg_ad ();
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
    dbg_o ();
    w1 = 0x1;
    x0 = d;
    *(x0) = w1;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x1b4c */
#include <stdint.h>
 
void dbg_ab (int64_t arg1) {
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
    /* int ab(int j); */
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
    x23 = d;
    x20 = v;
    goto label_5;
label_2:
    dbg_ad ();
    x24 = *((x21 + 0xf50));
label_1:
    x19 = G;
    while (w22 == 0) {
        w1 = *(x20);
        x0 = (int64_t) w0;
        *(x0) = w1;
        w0 = *(x20);
        w0 += 4;
        *(x20) = w0;
label_0:
        dbg_ad ();
        x0 = *((x21 + 0xf50));
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
    dbg_ad ();
    goto label_1;
label_7:
    dbg_ad ();
    goto label_5;
label_3:
    dbg_ad ();
    x19 = G;
    *(x19) = 0;
    x24 = K;
    *(x24) = 0;
    w0 = 0xe58955;
    dbg_ae (w0);
    w1 = 0x0;
    w0 = 0xec81;
    w0 = dbg_s (w0, w1);
    w25 = w0;
    w0 = 0x0;
    dbg_I (w0);
    w0 = K;
    dbg_A (w0);
    w0 = 0xc3c9;
    dbg_ae (w0);
    w0 = G;
    x25 = (int64_t) w25;
    *(x25) = w0;
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
    w0 += 4;
    x0 = (int64_t) w0;
    w0 = *(x0);
    dbg_A (w0);
    x0 = q;
    w1 = q;
    x0 = *((x21 + 0xf50));
    x0 = *(x0);
    *(x0) = w1;
    dbg_ad ();
    dbg_ad ();
    w19 = 0x8;
    x24 = *((x21 + 0xf50));
    x25 = x24;
label_4:
    w0 = *(x24);
    if (w0 == 0x29) {
        goto label_3;
    }
    x0 = (int64_t) w0;
    *(x0) = w19;
    w19 += 4;
    dbg_ad ();
    w0 = *(x25);
    if (w0 != 0x2c) {
        goto label_4;
    }
    dbg_ad ();
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


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x2108).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x2090 */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xd48 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0xcc0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xd60 */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xd98 */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xdd8 */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xc50 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x13000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xe20 */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x1458 */
#include <stdint.h>
 
uint64_t dbg_B (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int B(int e); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w1 = w0;
    w0 = 0xe9;
    dbg_s (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xe9;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x1400 */
#include <stdint.h>
 
uint64_t dbg_s (int64_t arg1, int64_t arg2) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = arg1;
    x1 = arg2;
    /* int s(int g,int e); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    w19 = w1;
    dbg_ae (x0);
    x1 = q;
    x0 = *(x1);
    *(x0) = w19;
    w0 = q;
    w2 = w0 + 4;
    *(x1) = w2;
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12fc8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x1394 */
#include <stdint.h>
 
void dbg_ae (int64_t arg1) {
    x0 = arg1;
    /* int ae(int g); */
    w1 = w0 + 1;
    if (w1 < 1) {
        goto label_0;
    }
    x2 = q;
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x14f0 */
#include <stdint.h>
 
uint64_t dbg_N (int64_t arg1, int64_t arg2) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = arg1;
    x1 = arg2;
    /* int N(int j,int e); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    w19 = w1;
    w0 += 0x83;
    dbg_ae (w0);
    w1 = w19;
    w0 = 0x5;
    w2 = 0x85;
    w0 = (w19 < 0x200) ? w2 : w0;
    dbg_s (w0, x1);
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x143c */
#include <stdint.h>
 
uint64_t dbg_H (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int H(int e); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w1 = w0;
    w0 = 0xb8;
    dbg_s (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xb8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x1544 */
#include <stdint.h>
 
uint64_t dbg_T (int64_t arg1) {
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
    /* int T(int j); */
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
    w19 = w0;
    x0 = d;
    w21 = d;
    if (w21 != 0x22) {
        x0 = *(0x120db);
        w20 = *(0x120db);
        x0 = z;
        w22 = z;
        dbg_ad ();
        if (w21 == 2) {
            goto label_10;
        }
        if (w20 == 2) {
            goto label_11;
        }
        if (w21 == 0x28) {
            goto label_12;
        }
        if (w21 == 0x2a) {
            goto label_13;
        }
        if (w21 == 0x26) {
            goto label_14;
        }
        x0 = (int64_t) w21;
        w24 = *(x0);
        if (w24 == 0) {
            goto label_15;
        }
label_1:
        x0 = d;
        w0 = d;
        w1 = (w0 == 0x3d) ? 1 : 0;
        if ((w1 & w19) != 0) {
            goto label_16;
        }
        if (w0 != 0x28) {
            w1 = w24;
            w0 = 0x8;
            dbg_N (w0, w1);
            x0 = *(0x120db);
            w0 = *(0x120db);
            if (w0 == 0xb) {
                goto label_17;
            }
label_2:
            x0 = d;
            w0 = d;
            if (w0 != 0x28) {
                goto label_6;
            }
        }
        if (w24 == 1) {
            goto label_18;
        }
        w1 = 0x0;
        w0 = 0xec81;
        w0 = dbg_s (w0, w1);
        w25 = w0;
        dbg_ad ();
        x0 = d;
        w0 = d;
        if (w0 == 0x29) {
            goto label_19;
        }
label_3:
        w19 = 0x0;
        w23 = 0x248489;
        x20 = 0x12000;
        x22 = d;
        x20 = x22;
        goto label_20;
    }
    x0 = v;
    w0 = v;
    dbg_H (w0);
    x0 = h;
    w0 = h;
    if (w0 == 0x22) {
        goto label_21;
    }
    x20 = v;
    x19 = h;
    do {
        dbg_Y ();
        w0 = *(x20);
        w1 = w0 + 1;
        *(x20) = w1;
        x0 = (int64_t) w0;
        w1 = *(x19);
        *(x0) = w1;
        dbg_o ();
        w0 = *(x19);
    } while (w0 != 0x22);
label_21:
    x0 = v;
    x1 = *(x0);
    *(x1) = 0;
    w1 = v;
    w1 += 4;
    w1 &= 0xfffffffc;
    *(x0) = w1;
    dbg_o ();
    dbg_ad ();
    do {
label_0:
        x0 = d;
        w0 = d;
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
label_10:
        w0 = w22;
        dbg_H (w0);
    } while (1);
label_11:
    w0 = 0x0;
    dbg_T (w0);
    w1 = 0x0;
    w0 = 0xb9;
    dbg_s (w0, w1);
    if (w21 != 0x21) {
        w0 = w22;
        dbg_ae (w0);
        goto label_0;
    }
    w0 = w22;
    dbg_Z (w0);
    goto label_0;
label_12:
    dbg_w ();
    dbg_ad ();
    goto label_0;
label_13:
    dbg_ad ();
    x19 = d;
    w21 = d;
    dbg_ad ();
    dbg_ad ();
    w0 = d;
    if (w0 == 0x2a) {
        goto label_22;
    }
    dbg_ad ();
    w0 = 0x0;
    dbg_T (w0);
    x0 = d;
    w0 = d;
    if (w0 == 0x3d) {
        goto label_23;
    }
    if (w21 == 0) {
        goto label_0;
    }
    if (w21 == 0x100) {
        goto label_24;
    }
    w0 = 0xbe0f;
    dbg_ae (w0);
    do {
        x0 = q;
        w1 = q;
        w1++;
        *(x0) = w1;
        goto label_0;
label_22:
        dbg_ad ();
        dbg_ad ();
        dbg_ad ();
        dbg_ad ();
        dbg_ad ();
        w0 = 0x0;
        dbg_T (w0);
        x0 = d;
        w0 = d;
        if (w0 == 0x3d) {
            goto label_25;
        }
        w21 = 0x0;
        goto label_0;
label_23:
        dbg_ad ();
        w0 = 0x50;
        x0 = dbg_ae (w0);
        dbg_w ();
        dbg_ae (w0);
        w0 = (w21 == 0x100) ? 1 : 0;
        w0 = 0x1e1;
label_8:
        dbg_ae (w0);
        goto label_0;
label_24:
        w0 = 0x8b;
        dbg_ae (w0);
    } while (1);
label_14:
    x0 = d;
    x0 = *(x0);
    w1 = d;
    w0 = 0xa;
    x0 = dbg_N (w0, w1);
    dbg_ad ();
    goto label_0;
label_15:
    x0 = M;
    w1 = M;
    w0 = 0x0;
    w0 = dlsym ();
    w24 = w0;
    goto label_1;
label_16:
    dbg_ad ();
    dbg_w ();
    w1 = w24;
    w0 = 0x6;
    dbg_N (w0, w1);
    goto label_2;
label_17:
    w1 = w24;
    w0 = 0x0;
    dbg_N (w0, w1);
    x0 = z;
    w0 = z;
    x0 = dbg_ae (w0);
    dbg_ad ();
    goto label_2;
label_18:
    w0 = 0x50;
    dbg_ae (w0);
    w1 = 0x0;
    w0 = 0xec81;
    w0 = dbg_s (w0, w1);
    w25 = w0;
    dbg_ad ();
    x0 = d;
    w0 = d;
    w24 = 0x1;
    if (w0 != 0x29) {
        goto label_3;
    }
    x25 = (int64_t) w25;
    *(x25) = 0;
    dbg_ad ();
    w19 = 0x0;
label_5:
    w1 = w19;
    w0 = 0x2494ff;
    dbg_s (w0, x1);
    w19 += 4;
    goto label_7;
    do {
label_4:
        w19 += 4;
        w0 = *(x20);
        if (w0 == 0x29) {
            goto label_26;
        }
label_20:
        dbg_w ();
        w1 = w19;
        w0 = w23;
        dbg_s (w0, w1);
        w0 = *(x22);
    } while (w0 != 0x2c);
    dbg_ad ();
    goto label_4;
label_26:
    x25 = (int64_t) w25;
    *(x25) = w19;
    dbg_ad ();
    if (w24 == 0) {
        goto label_27;
    }
    if (w24 == 1) {
        goto label_5;
    }
label_9:
    x0 = q;
    w1 = q;
    w1 = w24 - w1;
    w1 -= 5;
    w0 = 0xe8;
    dbg_s (w0, w1);
    if (w19 == 0) {
label_7:
        goto label_6;
    }
    w1 = w19;
    w0 = 0xc481;
    dbg_s (w0, w1);
    goto label_6;
    do {
        w19 = w24;
label_27:
        w20 = w21 + 4;
        x20 = (int64_t) w20;
        w1 = *(x20);
        w0 = 0xe8;
        dbg_s (w0, w1);
        *(x20) = w0;
        goto label_7;
label_25:
        dbg_ad ();
        w0 = 0x50;
        x0 = dbg_ae (w0);
        dbg_w ();
        w0 = 0x59;
        dbg_ae (w0);
        w21 = 0x0;
        w0 = 0x188;
        goto label_8;
label_19:
        x25 = (int64_t) w25;
        *(x25) = 0;
        dbg_ad ();
    } while (w24 == 0);
    w19 = 0x0;
    goto label_9;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xf0c */
#include <stdint.h>
 
uint64_t dbg_X () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    /* int X(); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x0 = h;
    w19 = h;
    w0 = w19;
    isalnum (w0);
    w1 = (w19 == 0x5f) ? 1 : 0;
    w0 = w1 | w0;
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12f58;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xd00 */
#include <stdint.h>
 
void isalnum () {
    x17 = .plt;
    x16 = 0x13058;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x14ac */
#include <stdint.h>
 
uint64_t dbg_Z (int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = arg1;
    /* int Z(int e); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    w19 = w0;
    w0 = 0xc139;
    dbg_ae (w0);
    w0 = 0x0;
    dbg_H (w0);
    w0 = 0xf;
    dbg_ae (w0);
    w0 = w19 + 0x90;
    dbg_ae (w0);
    w0 = 0xc0;
    dbg_ae (w0);
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xc0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x210c */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xe58 */
#include <stdint.h>
 
uint32_t dbg_E (int64_t arg1) {
    x0 = arg1;
    /* int E(int e); */
    x2 = D;
    w1 = D;
    w3 = w1 + 1;
    *(x2) = w3;
    x1 = (int64_t) w1;
    *(x1) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xf44 */
#include <stdint.h>
 
void dbg_Y () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int Y(); */
    x0 = h;
    w0 = h;
    if (w0 != 0x5c) {
        return;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    dbg_o ();
    x0 = h;
    w0 = h;
    while (1) {
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
        w1 = 0xa;
        x0 = h;
        *(x0) = w1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x13d0 */
#include <stdint.h>
 
void dbg_A (int64_t arg1) {
    x0 = arg1;
    if (w0 == 0) {
        /* int A(int e); */
        goto label_0;
    }
    x4 = q;
    do {
        x3 = (int64_t) w0;
        w2 = *(x3);
        w1 = *(x4);
        w0 = w1 - w0;
        w0 -= 4;
        *(x3) = w0;
        w0 = w2;
    } while (w2 != 0);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x19f8 */
#include <stdint.h>
 
void dbg_O (uint32_t arg1) {
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
    /* int O(int j); */
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
        dbg_O (w0);
        w25 = 0x0;
        x21 = *(0x120db);
        x24 = d;
        x23 = z;
        goto label_0;
    }
    dbg_T (x0);
    goto label_1;
    do {
        w0 = 0x50;
        dbg_ae (w0);
        w0 = w19;
        dbg_O (w0);
        w0 = 0x59;
        dbg_ae (w0);
        w0 = w19 - 4;
        if (w0 < 1) {
            goto label_2;
        }
        w0 = w20;
        dbg_ae (w0);
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
        dbg_ad ();
        __asm ("b.le 0x1a4c");
    } while (1);
    w1 = w25;
    w0 = w20;
    w0 = dbg_S (w0, w1);
    w25 = w0;
    w0 = w19;
    dbg_O (w0);
    goto label_0;
label_2:
    w0 = w20;
    dbg_Z (w0);
    goto label_0;
label_3:
    w0 = 0x92;
    dbg_ae (w0);
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
        w0 = dbg_S (w0, w1);
        w19 = w0;
        w0 = w20 ^ 1;
        dbg_H (w0);
        w0 = 0x5;
        dbg_B (w0);
        w0 = w19;
        dbg_A (w0);
        w0 = w20;
        dbg_H (w0);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x1cfc */
#include <stdint.h>
 
void dbg_I (int64_t arg1) {
    int32_t m;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int I(int j); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w20 = w0;
    x0 = d;
    w19 = d;
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
        dbg_w ();
    }
label_1:
    dbg_ad ();
    do {
label_0:
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_2:
        dbg_ad ();
        dbg_ad ();
        dbg_U ();
        *((x29 + 0x2c)) = w0;
        dbg_ad ();
        w0 = w20;
        dbg_I (w0);
        x0 = d;
        w0 = d;
        if (w0 == 0x138) {
            goto label_7;
        }
        w0 = *((x29 + 0x2c));
        dbg_A (w0);
    } while (1);
label_7:
    dbg_ad ();
    w0 = 0x0;
    w0 = dbg_B (w0);
    w19 = w0;
    w0 = *((x29 + 0x2c));
    dbg_A (w0);
    w0 = w20;
    dbg_I (w0);
    w0 = w19;
    dbg_A (w0);
    goto label_0;
label_3:
    dbg_ad ();
    dbg_ad ();
    if (w19 == 0x160) {
        goto label_8;
    }
    x0 = d;
    w0 = d;
    if (w0 != 0x3b) {
        dbg_w ();
    }
    dbg_ad ();
    x0 = q;
    w19 = q;
    *((x29 + 0x2c)) = 0;
    x0 = d;
    w0 = d;
    if (w0 != 0x3b) {
        dbg_U ();
        *((x29 + 0x2c)) = w0;
    }
    dbg_ad ();
    x0 = d;
    w0 = d;
    if (w0 == 0x29) {
        goto label_9;
    }
    w0 = 0x0;
    w0 = dbg_B (w0);
    w20 = w0;
    dbg_w ();
    x0 = q;
    w0 = q;
    w0 = w19 - w0;
    w0 -= 5;
    dbg_B (w0);
    w0 = w20;
    dbg_A (w0);
    w19 = w20 + 4;
    do {
label_9:
        dbg_ad ();
        x0 = x29 + 0x2c;
        dbg_I (x0);
        x0 = q;
        w0 = q;
        w0 = w19 - w0;
        w0 -= 5;
        dbg_B (w0);
        w0 = *((x29 + 0x2c));
        dbg_A (w0);
        goto label_0;
label_8:
        x0 = q;
        w19 = q;
        dbg_U ();
        *((x29 + 0x2c)) = w0;
    } while (1);
label_4:
    dbg_ad ();
    w0 = 0x1;
    dbg_ab (w0);
    x0 = d;
    w0 = d;
    if (w0 == 0x7d) {
        goto label_10;
    }
    x19 = d;
    do {
        w0 = w20;
        dbg_I (w0);
        w0 = *(x19);
    } while (w0 != 0x7d);
label_10:
    dbg_ad ();
    goto label_0;
label_5:
    dbg_ad ();
    x0 = d;
    w0 = d;
    if (w0 != 0x3b) {
        dbg_w ();
    }
    x19 = K;
    w0 = K;
    dbg_B (w0);
    *(x19) = w0;
    goto label_1;
label_6:
    dbg_ad ();
    x20 = (int64_t) w20;
    w0 = *(x20);
    dbg_B (w0);
    *(x20) = w0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x152c */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x1b2c */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0x1474 */
#include <stdint.h>
 
uint64_t dbg_S (int64_t arg1, int64_t arg2) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* int S(int j,int e); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    w20 = w1;
    w0 = 0xfc085;
    dbg_ae (w0);
    w1 = w20;
    w0 = w19 + 0x84;
    dbg_s (w0, w1);
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xfc085;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xc10 */
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
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xc70 */
#include <stdint.h>
 
void isspace () {
    x17 = .plt;
    x16 = 0x13010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xc80 */
#include <stdint.h>
 
void dlsym () {
    x17 = .plt;
    x16 = 0x13018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xcd0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x13040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xce0 */
#include <stdint.h>
 
void strtol () {
    x17 = .plt;
    x16 = 0x13048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xcf0 */
#include <stdint.h>
 
void strstr () {
    x17 = .plt;
    x16 = 0x13050;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/arm64_elf_gcc_O1/subject.exe @ 0xc30 */
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

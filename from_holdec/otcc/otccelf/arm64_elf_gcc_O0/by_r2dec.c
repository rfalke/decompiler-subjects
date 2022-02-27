/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xe30 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 13268 named .text */
    x29 = 0x0;
    x30 = 0x0;
    x5 = x0;
    x1 = *(sp);
    x2 = sp + 8;
    x6 = sp;
    x0 = main;
    x3 = *(0x140db);
    x4 = __libc_csu_fini;
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xd90 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x15028);
    x16 = 0x15028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x2f7c */
#include <stdint.h>
 
void dbg_main (int32_t argc, char ** argv) {
    int32_t a;
    int32_t d;
    char * filename;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = argc;
    x1 = argv;
    /* int main(int d,int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    w0 = *((x29 + 0x1c));
    if (w0 <= 2) {
        x0 = "usage: otccelf file.c outfile";
        puts ("usage: otccelf file.c outfile");
        w0 = 0x0;
    } else {
        x1 = 0x1869f;
        x0 = 0x1;
        w0 = calloc (x0, x1);
        w1 = w0;
        x0 = Q;
        *(x0) = w1;
        x0 = Q;
        w0 = Q;
        x0 = (int64_t) w0;
        x4 = x0;
        x0 = 0x4000;
        x1 = x0 + 0x300;
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
        x0 = G;
        *(x0) = w1;
        x0 = G;
        w1 = G;
        x0 = i;
        *(x0) = w1;
        x1 = 0x1869f;
        x0 = 0x1;
        w0 = calloc (x0, x1);
        w1 = w0;
        x0 = K;
        *(x0) = w1;
        x0 = K;
        w1 = K;
        x0 = v;
        *(x0) = w1;
        x1 = 0x1869f;
        x0 = 0x1;
        w0 = calloc (x0, x1);
        w1 = w0;
        x0 = T;
        *(x0) = w1;
        w0 = *((x29 + 0x18));
        w0 += 4;
        *((x29 + 0x18)) = w0;
        x0 = *((x29 + 0x18));
        w0 = T;
        x0 = (int64_t) w0;
        x2 = x0;
        x0 = 0x4338;
        x1 = x0;
        x0 = x2;
        w0 = fopen (x0, x1);
        w1 = w0;
        x0 = ak;
        *(x0) = w1;
        x0 = G;
        w0 = G;
        w1 = 0x8048000;
        w1 -= w0;
        x0 = y;
        *(x0) = w1;
        x0 = i;
        w0 = i;
        w1 = w0 + 0xfc;
        x0 = i;
        *(x0) = w1;
        x0 = v;
        w0 = v;
        w1 = w0 + 0x11;
        x0 = v;
        *(x0) = w1;
        dbg_w ();
        dbg_av ();
        w0 = 0x0;
        dbg_ar (w0);
        w0 = *((x29 + 0x18));
        w0 += 4;
        *((x29 + 0x18)) = w0;
        x0 = *((x29 + 0x18));
        w0 = v;
        dbg_au (w0);
        w0 = 0x0;
    }
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x4200).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x4188 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xe68 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0xdc0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xe80 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xeb8 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xef8 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xd50 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x15000;
    x17 = *(0x15008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xf40 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x3188 */
#include <stdint.h>
 
void e843419_0008_00000059_8c (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    do {
        x0 = *(0x140db);
        w0 = *(0x140db);
        if (w0 == 2) {
            x0 = *(0x22000);
            *(x0) = 0;
            x0 = al;
            w1 = al;
            x0 = *(0x140db);
            *(x0) = w1;
        }
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
        *(x0) = w1;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x2630 */
#include <stdint.h>
 
uint64_t dbg_ax (int64_t arg1) {
    int32_t d;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    /* int ax(int d); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    x0 = i;
    w0 = i;
    w1 = *((x29 + 0x1c));
    dbg_E (x0, w1, x2);
    x0 = i;
    w0 = i;
    w1 = w0 + 4;
    x0 = i;
    *(x0) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x14fb0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x16ec */
#include <stdint.h>
 
void dbg_E (int64_t arg_10h, int64_t arg1, int64_t arg2) {
    int32_t d;
    int32_t a;
    int64_t var_8h;
    int64_t var_ch;
    x0 = arg1;
    x1 = arg2;
    /* int E(int a,int d); */
    *((sp + 0xc)) = w0;
    *((sp + 8)) = w1;
    w0 = *((sp + 0xc));
    w1 = w0 + 1;
    *((sp + 0xc)) = w1;
    x0 = (int64_t) w0;
    w1 = *((sp + 8));
    w1 = (int8_t) w1;
    *(x0) = w1;
    w0 = *((sp + 0xc));
    w1 = w0 + 1;
    *((sp + 0xc)) = w1;
    x0 = (int64_t) w0;
    x1 = x0;
    w0 = *((sp + 8));
    w0 >>= 8;
    w0 = (int8_t) w0;
    *(x1) = w0;
    w0 = *((sp + 0xc));
    w1 = w0 + 1;
    *((sp + 0xc)) = w1;
    x0 = (int64_t) w0;
    x1 = x0;
    w0 = *((sp + 8));
    w0 >>= 0x10;
    w0 = (int8_t) w0;
    *(x1) = w0;
    w0 = *((sp + 0xc));
    w1 = w0 + 1;
    *((sp + 0xc)) = w1;
    x0 = (int64_t) w0;
    x1 = x0;
    w0 = *((sp + 8));
    w0 >>= 0x18;
    w0 = (int8_t) w0;
    *(x1) = w0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x20ac */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x1f44 */
#include <stdint.h>
 
void dbg_X (int64_t arg1) {
    int32_t s;
    int32_t d;
    int32_t h;
    int32_t a;
    int64_t var_1ch;
    int64_t var_24h;
    char * var_28h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    /* int X(int s); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    w0 = *((x29 + 0x1c));
    w1 = w0 - 1;
    *((x29 + 0x1c)) = w1;
    if (w0 == 1) {
        w0 = 0x1;
        dbg_ab (w0);
        goto label_0;
    }
    w0 = *((x29 + 0x1c));
    dbg_X (w0);
    *((x29 + 0x28)) = 0;
    while (w1 == w0) {
        x0 = e;
        w0 = e;
        *((x29 + 0x24)) = w0;
        x0 = C;
        w0 = C;
        *((x29 + 0x2c)) = w0;
        dbg_av ();
        w0 = *((x29 + 0x1c));
        __asm ("b.le 0x1fcc");
        w1 = *((x29 + 0x28));
        w0 = *((x29 + 0x2c));
        dbg_aa (w0, w1);
        *((x29 + 0x28)) = w0;
        w0 = *((x29 + 0x1c));
        dbg_X (w0);
        goto label_1;
        w0 = 0x50;
        dbg_aw (w0, x1);
        w0 = *((x29 + 0x1c));
        dbg_X (w0);
        w0 = 0x59;
        dbg_aw (w0, x1);
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
            dbg_aq (w0);
        } else {
            w0 = *((x29 + 0x2c));
            dbg_aw (w0, x1);
            w0 = *((x29 + 0x24));
            if (w0 != 0x25) {
                goto label_1;
            }
            w0 = 0x92;
            dbg_aw (w0, x1);
        }
label_1:
        x0 = J;
        w0 = J;
        w1 = *((x29 + 0x1c));
    }
    w0 = *((x29 + 0x28));
    if (w0 != 0) {
        w0 = *((x29 + 0x1c));
        __asm ("b.le 0x20a0");
        w1 = *((x29 + 0x28));
        w0 = *((x29 + 0x2c));
        dbg_aa (w0, w1);
        *((x29 + 0x28)) = w0;
        w0 = *((x29 + 0x2c));
        w0 ^= 1;
        dbg_M (w0);
        w0 = 0x5;
        dbg_I (w0);
        w0 = *((x29 + 0x28));
        dbg_H (w0);
        w0 = *((x29 + 0x2c));
        dbg_M (w0);
    }
label_0:
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x18fc */
#include <stdint.h>
 
uint64_t dbg_H (int64_t arg1) {
    int32_t a;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    /* int H(int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    x0 = v;
    w0 = v;
    w1 = w0;
    w0 = *((x29 + 0x1c));
    dbg_ap (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x14f60;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x17f0 */
#include <stdint.h>
 
void dbg_ap (int64_t arg1, char * arg2) {
    int32_t z;
    int32_t a;
    int32_t d;
    char * var_18h;
    int64_t var_1ch;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    x1 = arg2;
    /* int ap(int a,int z); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    while (w0 != 0) {
        w0 = *((x29 + 0x1c));
        dbg_ao (w0, x1);
        *((x29 + 0x2c)) = w0;
        w0 = *((x29 + 0x1c));
        w0--;
        x0 = (int64_t) w0;
        w0 = *(x0);
        if (w0 == 5) {
            x0 = G;
            w0 = G;
            w1 = *((x29 + 0x18));
            if (w1 >= w0) {
                x0 = i;
                w0 = i;
                w1 = *((x29 + 0x18));
                if (w1 < w0) {
                    x0 = y;
                    w1 = y;
                    w0 = *((x29 + 0x18));
                    w0 = w1 + w0;
                    w1 = w0;
                    w0 = *((x29 + 0x1c));
                    dbg_E (w0, w1, x2);
                }
                x0 = K;
                w0 = K;
                w1 = *((x29 + 0x18));
                w1 -= w0;
                x0 = R;
                w0 = R;
                w1 += w0;
                x0 = y;
                w0 = y;
                w0 = w1 + w0;
                w1 = w0;
                w0 = *((x29 + 0x1c));
                dbg_E (w0, w1, x2);
            } else {
            } else {
                w1 = *((x29 + 0x18));
                w0 = *((x29 + 0x1c));
                w0 = w1 - w0;
                w0 -= 4;
                w1 = w0;
                w0 = *((x29 + 0x1c));
                dbg_E (w0, w1, x2);
            }
        }
        w0 = *((x29 + 0x2c));
        *((x29 + 0x1c)) = w0;
        w0 = *((x29 + 0x1c));
    }
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xf78 */
#include <stdint.h>
 
uint64_t dbg_L (int64_t arg_10h, int64_t arg1) {
    int32_t a;
    int64_t var_ch;
    x0 = arg1;
    /* int L(int a); */
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
    return 0x14f20;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x192c */
#include <stdint.h>
 
uint64_t dbg_x (char * arg1, char * arg2) {
    int32_t a;
    int32_t d;
    char * var_18h;
    char * var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    x1 = arg2;
    /* int x(int d,int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    w0 = *((x29 + 0x1c));
    dbg_aw (w0, w1);
    x0 = v;
    w0 = v;
    w1 = *((x29 + 0x18));
    dbg_E (x0, w1, x2);
    x0 = v;
    w0 = v;
    *((x29 + 0x18)) = w0;
    x0 = v;
    w0 = v;
    w1 = w0 + 4;
    x0 = v;
    *(x0) = w1;
    w0 = *((x29 + 0x18));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x14f60;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x1684 */
#include <stdint.h>
 
void dbg_aw (int64_t arg_10h, int64_t arg1) {
    int32_t d;
    int64_t var_ch;
    x0 = arg1;
    /* int aw(int d); */
    *((sp + 0xc)) = w0;
    while (w0 != 1) {
        x0 = v;
        w0 = v;
        w2 = w0 + 1;
        x1 = v;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x4204 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x26d0 */
#include <stdint.h>
 
void dbg_ae (int64_t arg1) {
    int32_t s;
    int32_t F;
    int32_t z;
    int32_t h;
    int32_t N;
    int32_t d;
    int32_t a;
    int64_t var_1ch;
    char * var_28h;
    int64_t var_2ch;
    void * s2;
    int64_t var_34h;
    int64_t var_38h;
    signed int64_t var_3ch;
    int64_t var_40h;
    int64_t var_40h_2;
    x0 = arg1;
    /* int ae(int s); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x34)) = 0;
    x0 = Q;
    w0 = Q;
    *((x29 + 0x3c)) = w0;
label_0:
    w0 = *((x29 + 0x3c));
    w0++;
    *((x29 + 0x3c)) = w0;
    w0 = *((x29 + 0x3c));
    *((x29 + 0x30)) = w0;
    while (w1 < w0) {
        w0 = *((x29 + 0x3c));
        w0++;
        *((x29 + 0x3c)) = w0;
        x0 = *((x29 + 0x3c));
        w0 = *(x0);
        if (w0 == 0x20) {
            goto label_1;
        }
        x0 = D;
        w0 = D;
        w1 = *((x29 + 0x3c));
    }
label_1:
    x0 = D;
    w0 = D;
    w1 = *((x29 + 0x3c));
    if (w1 == w0) {
        goto label_2;
    }
    x0 = Q;
    w0 = Q;
    w1 = *((x29 + 0x30));
    w0 = w1 - w0;
    w1 = w0 << 3;
    x0 = T;
    w0 = T;
    w0 = w1 + w0;
    w1 = w0 + 0xf8;
    x0 = e;
    *(x0) = w1;
    x0 = e;
    w0 = e;
    x0 = (int64_t) w0;
    w0 = e;
    *((x29 + 0x2c)) = w0;
    x0 = e;
    w0 = e;
    w0 += 4;
    x0 = (int64_t) w0;
    w0 = e;
    *((x29 + 0x38)) = w0;
    w0 = *((x29 + 0x38));
    if (w0 == 0) {
        goto label_0;
    }
    w0 = *((x29 + 0x2c));
    if (w0 == 1) {
        goto label_0;
    }
    w0 = *((x29 + 0x2c));
    if (w0 != 0) {
        goto label_3;
    }
    w0 = *((x29 + 0x1c));
    if (w0 == 0) {
        x0 = i;
        w0 = i;
        x0 = (int64_t) w0;
        x3 = x0;
        x0 = *((x29 + 0x30));
        x4 = x0;
        w1 = *((x29 + 0x3c));
        w0 = *((x29 + 0x30));
        w0 = w1 - w0;
        x0 = (int64_t) w0;
        x2 = x0;
        x1 = x4;
        x0 = x3;
        memcpy (x0, x1, x2);
        x0 = i;
        w0 = *((x29 + 0x3c));
        w1 = 0x14fb0;
        w0 = *((x29 + 0x30));
        w0 = w1 - w0;
        w1 = w0 + 1;
        x0 = i;
        *(x0) = w1;
        goto label_0;
    }
    w0 = *((x29 + 0x1c));
    if (w0 == 1) {
        w0 = *((x29 + 0x34));
        w0 += 0x16;
        dbg_ax (w0);
        w0 = 0x0;
        dbg_ax (w0);
        w0 = 0x0;
        dbg_ax (w0);
        w0 = 0x10;
        dbg_ax (w0);
        w1 = *((x29 + 0x34));
        w0 = *((x29 + 0x3c));
        w1 += w0;
        w0 = *((x29 + 0x30));
        w0 = w1 - w0;
        w0++;
        *((x29 + 0x34)) = w0;
        goto label_0;
    }
    w0 = *((x29 + 0x34));
    w0++;
    *((x29 + 0x34)) = w0;
    while (w0 != 0) {
        w0 = *((x29 + 0x38));
        dbg_ao (w0, x1);
        *((x29 + 0x30)) = w0;
        w0 = *((x29 + 0x38));
        w0--;
        x0 = (int64_t) w0;
        w0 = *(x0);
        w0 = (w0 != 5) ? 1 : 0;
        w0 = (int8_t) w0;
        *((x29 + 0x28)) = w0;
        w1 = *((x29 + 0x28));
        w0 = 0x0;
        w0 -= w1;
        w0 <<= 2;
        w1 = w0;
        w0 = *((x29 + 0x38));
        dbg_E (w0, w1, x2);
        x0 = K;
        w0 = K;
        w1 = *((x29 + 0x38));
        w1 -= w0;
        x0 = R;
        w0 = R;
        w1 += w0;
        x0 = y;
        w0 = y;
        w0 = w1 + w0;
        dbg_ax (w0);
        w0 = *((x29 + 0x34));
        w1 = w0 << 8;
        w0 = *((x29 + 0x28));
        w0 = w1 + w0;
        w0++;
        dbg_ax (w0);
        w0 = *((x29 + 0x30));
        *((x29 + 0x38)) = w0;
        w0 = *((x29 + 0x38));
    }
    goto label_0;
label_3:
    w0 = *((x29 + 0x1c));
    if (w0 != 0) {
        goto label_0;
    }
    w1 = *((x29 + 0x2c));
    w0 = *((x29 + 0x38));
    dbg_ap (w0, w1);
    goto label_0;
label_2:
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x19d4 */
#include <stdint.h>
 
uint64_t dbg_aa (int64_t arg1, char * arg2) {
    int32_t a;
    int32_t s;
    char * var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    x1 = arg2;
    /* int aa(int s,int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    w0 &= 0xffff;
    w0 |= 0xf0000;
    dbg_aw (w0, x1);
    w0 = *((x29 + 0x1c));
    w0 = 0xfc109;
    w1 = *((x29 + 0x18));
    dbg_x (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xfc109;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x20c8 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x1074 */
#include <stdint.h>
 
uint64_t dbg_am () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int am(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = *(0x140db);
    w0 = *(0x140db);
    w0 = isalnum (w0);
    w1 = w0;
    x0 = *(0x140db);
    w0 = *(0x140db);
    w0 = (w0 == 0x5f) ? 1 : 0;
    w0 = (int8_t) w0;
    w0 = w1 | w0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x140db;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xe20 */
#include <stdint.h>
 
void isalnum () {
    x17 = *(0x15070);
    x16 = 0x15070;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x178c */
#include <stdint.h>
 
void dbg_ao (int64_t arg_10h, signed int64_t arg1) {
    int32_t a;
    signed int64_t var_ch;
    x0 = arg1;
    /* int ao(int a); */
    *((sp + 0xc)) = w0;
    x0 = *((sp + 0xc));
    w0 = *(x0);
    w1 = w0;
    w0 = *((sp + 0xc));
    w0++;
    x0 = (int64_t) w0;
    w0 = *(x0);
    w0 <<= 8;
    w1 |= w0;
    w0 = *((sp + 0xc));
    w0 += 2;
    x0 = (int64_t) w0;
    w0 = *(x0);
    w0 <<= 0x10;
    w1 |= w0;
    w0 = *((sp + 0xc));
    w0 += 3;
    x0 = (int64_t) w0;
    w0 = *(x0);
    w0 <<= 0x18;
    w0 = w1 | w0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x2998 */
#include <stdint.h>
 
uint64_t dbg_au (char * arg1) {
    int32_t F;
    int32_t Y;
    int32_t ah;
    int32_t d;
    int32_t at;
    int32_t ag;
    int32_t as;
    int32_t af;
    int32_t ai;
    int32_t a;
    char * filename;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_44h;
    char * s1;
    size_t stream;
    int64_t var_50h;
    int64_t var_50h_2;
    x0 = arg1;
    /* int au(int F); */
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    x0 = i;
    w1 = i;
    x0 = R;
    *(x0) = w1;
    x0 = v;
    w1 = v;
    x0 = K;
    w0 = K;
    w0 = w1 - w0;
    *((x29 + 0x48)) = w0;
    x0 = K;
    w1 = K;
    x0 = v;
    *(x0) = w1;
    w0 = 0x505458;
    dbg_aw (w0, x1);
    x0 = T;
    w0 = 0x15180;
    x0 = (int64_t) w0;
    w0 = T;
    *((x29 + 0x4c)) = w0;
    x0 = v;
    w0 = v;
    w1 = *((x29 + 0x4c));
    w0 = w1 - w0;
    w0 -= 5;
    w1 = w0;
    w0 = 0xe8;
    dbg_x (w0, w1);
    w0 = 0xc389;
    dbg_aw (w0, x1);
    w0 = 0x1;
    dbg_M (w0);
    w0 = 0x80cd;
    dbg_aw (w0, x1);
    x0 = i;
    w0 = *((x29 + 0x48));
    w1 = 0x14fb0;
    x0 = i;
    *(x0) = w1;
    x0 = i;
    w0 = i;
    *((x29 + 0x44)) = w0;
    x0 = i;
    w0 = i;
    w1 = w0 + 1;
    x0 = i;
    *(x0) = w1;
    x0 = i;
    w0 = i;
    x0 = (int64_t) w0;
    x3 = x0;
    x0 = 0x4000;
    x1 = x0 + 0x2a0;
    x0 = x3;
    x2 = *(x1);
    *(x0) = x2;
    w1 = *((x1 + 8));
    *((x0 + 8)) = w1;
    x0 = x3;
    x0 += 0xa;
    w1 = w0;
    x0 = i;
    *(x0) = w1;
    x0 = i;
    w0 = i;
    x0 = (int64_t) w0;
    x3 = x0;
    x0 = 0x4000;
    x1 = x0 + 0x2b0;
    x0 = x3;
    x2 = *(x1);
    *(x0) = x2;
    w1 = *((x1 + 7));
    *((x0 + 7)) = w1;
    x0 = x3;
    x0 += 0xb;
    w1 = w0;
    x0 = i;
    *(x0) = w1;
    w0 = 0x0;
    dbg_ae (w0);
    x0 = i;
    w1 = i;
    w0 = *((x29 + 0x44));
    w0 = w1 - w0;
    *((x29 + 0x40)) = w0;
    x0 = i;
    w0 = i;
    w0 += 3;
    w1 = w0 & 0xfffffffc;
    x0 = i;
    *(x0) = w1;
    x0 = i;
    w0 = i;
    *((x29 + 0x3c)) = w0;
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
    x0 = i;
    w0 = i;
    *((x29 + 0x38)) = w0;
    x0 = i;
    w1 = i;
    w0 = *((x29 + 0x3c));
    w0 = w1 - w0;
    w1 = w0 + 0xf;
    w0 = (w0 < 0) ? w1 : w0;
    w0 >>= 4;
    *((x29 + 0x34)) = w0;
    w0 = 0x1;
    dbg_ax (w0);
    w0 = *((x29 + 0x34));
    dbg_ax (w0);
    w0 = 0x1;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x2;
    *((x29 + 0x4c)) = w0;
    while (w1 < w0) {
        w0 = *((x29 + 0x4c));
        w1 = w0 + 1;
        *((x29 + 0x4c)) = w1;
        dbg_ax (x0);
        w1 = *((x29 + 0x4c));
        w0 = *((x29 + 0x34));
    }
    w0 = 0x0;
    dbg_ax (w0);
    x0 = i;
    w0 = i;
    *((x29 + 0x30)) = w0;
    w0 = 0x2;
    dbg_ae (w0);
    x0 = R;
    w0 = R;
    x0 = (int64_t) w0;
    x3 = x0;
    x0 = K;
    w0 = K;
    x0 = (int64_t) w0;
    x1 = x0;
    x0 = *((x29 + 0x48));
    x2 = x0;
    x0 = x3;
    memcpy (x0, x1, x2);
    x0 = i;
    w0 = i;
    *((x29 + 0x2c)) = w0;
    x0 = G;
    w1 = G;
    x0 = i;
    *(x0) = w1;
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
    x0 = R;
    w1 = R;
    x0 = y;
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
    x0 = G;
    w0 = G;
    w1 = *((x29 + 0x2c));
    w0 = w1 - w0;
    w1 = w0;
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
    x0 = i;
    w0 = i;
    x0 = (int64_t) w0;
    x4 = x0;
    x0 = "/lib/ld-linux.so.2";
    x2 = x4;
    x3 = x0;
    x0 = *(x3);
    x1 = *((x3 + 8));
    *(x2) = x0;
    *((x2 + 8)) = x1;
    x1 = x3 + 0xf;
    x0 = x2 + 0xf;
    w1 = *(x1);
    *(x0) = w1;
    x0 = x4;
    x0 += 0x14;
    w1 = w0;
    x0 = i;
    *(x0) = w1;
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
    x0 = y;
    w1 = y;
    w0 = *((x29 + 0x38));
    w0 = w1 + w0;
    dbg_ax (w0);
    w0 = 0x6;
    dbg_ax (w0);
    x0 = y;
    w1 = y;
    w0 = *((x29 + 0x3c));
    w0 = w1 + w0;
    dbg_ax (w0);
    w0 = 0x5;
    dbg_ax (w0);
    x0 = y;
    w1 = y;
    w0 = *((x29 + 0x44));
    w0 = w1 + w0;
    dbg_ax (w0);
    w0 = 0xa;
    dbg_ax (w0);
    w0 = *((x29 + 0x40));
    dbg_ax (w0);
    w0 = 0xb;
    dbg_ax (w0);
    w0 = 0x10;
    dbg_ax (w0);
    w0 = 0x11;
    dbg_ax (w0);
    x0 = y;
    w1 = y;
    w0 = *((x29 + 0x30));
    w0 = w1 + w0;
    dbg_ax (w0);
    w0 = 0x12;
    dbg_ax (w0);
    w1 = *((x29 + 0x2c));
    w0 = *((x29 + 0x30));
    w0 = w1 - w0;
    dbg_ax (w0);
    w0 = 0x13;
    dbg_ax (w0);
    w0 = 0x8;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    w0 = 0x0;
    dbg_ax (w0);
    x0 = *((x29 + 0x1c));
    x2 = x0;
    x0 = 0x42d8;
    x1 = x0;
    x0 = x2;
    fopen (x0, x1);
    *((x29 + 0x4c)) = w0;
    x0 = G;
    w0 = G;
    x0 = (int64_t) w0;
    x4 = x0;
    x0 = G;
    w0 = G;
    w1 = *((x29 + 0x2c));
    w0 = w1 - w0;
    x0 = (int64_t) w0;
    x1 = *((x29 + 0x4c));
    x3 = x1;
    x2 = x0;
    x1 = 0x1;
    x0 = x4;
    fwrite (x0, x1, x2, x3);
    x0 = *((x29 + 0x4c));
    fclose (x0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x14f88;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x1a08 */
#include <stdint.h>
 
uint64_t dbg_aq (int64_t arg1) {
    int32_t a;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    /* int aq(int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    w0 = 0xc139;
    dbg_aw (w0, x1);
    w0 = 0x0;
    dbg_M (w0);
    dbg_aw (w0, x1);
    w0 = *((x29 + 0x1c));
    w0 = 0x9f;
    dbg_aw (w0, x1);
    w0 = 0xc0;
    dbg_aw (w0, x1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xc0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x1990 */
#include <stdint.h>
 
uint64_t dbg_M (int64_t arg1) {
    int32_t a;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    /* int M(int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    w1 = *((x29 + 0x1c));
    w0 = 0xb8;
    dbg_x (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xb8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x19b4 */
#include <stdint.h>
 
uint64_t dbg_I (signed int64_t arg1) {
    int32_t a;
    signed int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    /* int I(int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    w1 = *((x29 + 0x1c));
    w0 = 0xe9;
    dbg_x (w0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xe9;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x1a4c */
#include <stdint.h>
 
void dbg_W (int64_t arg1, char * arg2) {
    int32_t a;
    int32_t s;
    int32_t d;
    char * var_28h;
    int64_t var_2ch;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    x0 = arg1;
    x1 = arg2;
    /* int W(int s,int a); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((x29 + 0x2c)) = w0;
    *((x29 + 0x28)) = w1;
    w0 = *((x29 + 0x2c));
    w0 += 0x83;
    dbg_aw (w0, x1);
    x0 = *((x29 + 0x28));
    w0 = *(x0);
    *((x29 + 0x3c)) = w0;
    w0 = *((x29 + 0x3c));
    if (w0 != 0) {
        w0 = *((x29 + 0x3c));
        if (w0 <= 0x1ff) {
            w1 = *((x29 + 0x3c));
            w0 = 0x85;
            dbg_x (w0, w1);
        }
    } else {
        w0 = *((x29 + 0x28));
        w0 += 4;
        *((x29 + 0x28)) = w0;
        x0 = *((x29 + 0x28));
        x19 = x0;
        x0 = *((x29 + 0x28));
        w0 = *(x0);
        w1 = w0;
        w0 = 0x5;
        dbg_x (w0, w1);
        *(x19) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x20e8 */
#include <stdint.h>
 
void dbg_S (signed int64_t arg1) {
    int32_t s;
    int32_t h;
    int32_t a;
    int32_t d;
    signed int64_t var_2ch;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    x0 = arg1;
    /* int S(int s); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((x29 + 0x2c)) = w0;
    x0 = e;
    w0 = e;
    if (w0 == 0x120) {
        dbg_av ();
        dbg_av ();
        dbg_ac ();
        *((x29 + 0x34)) = w0;
        dbg_av ();
        w0 = *((x29 + 0x2c));
        dbg_S (w0);
        x0 = e;
        w0 = e;
        if (w0 == 0x138) {
            dbg_av ();
            w0 = 0x0;
            dbg_I (w0);
            *((x29 + 0x3c)) = w0;
            w0 = *((x29 + 0x34));
            dbg_H (w0);
            w0 = *((x29 + 0x2c));
            dbg_S (w0);
            w0 = *((x29 + 0x3c));
            dbg_H (w0);
            goto label_0;
        }
        w0 = *((x29 + 0x34));
        dbg_H (w0);
        goto label_0;
    }
    x0 = e;
    w0 = e;
    w0 = (w0 == 0x160) ? 1 : 0;
    w1 = (int8_t) w0;
    x0 = e;
    w0 = e;
    w0 = (w0 == 0x1f8) ? 1 : 0;
    w0 = (int8_t) w0;
    w0 = w1 | w0;
    w0 = (int8_t) w0;
    if (w0 != 0) {
        x0 = e;
        w0 = e;
        *((x29 + 0x38)) = w0;
        dbg_av ();
        dbg_av ();
        w0 = *((x29 + 0x38));
        if (w0 == 0x160) {
            x0 = v;
            w0 = v;
            *((x29 + 0x3c)) = w0;
            dbg_ac ();
            *((x29 + 0x34)) = w0;
        } else {
            x0 = e;
            w0 = e;
            if (w0 != 0x3b) {
                dbg_B ();
            }
            dbg_av ();
            x0 = v;
            w0 = v;
            *((x29 + 0x3c)) = w0;
            *((x29 + 0x34)) = 0;
            x0 = e;
            w0 = e;
            if (w0 != 0x3b) {
                dbg_ac ();
                *((x29 + 0x34)) = w0;
            }
            dbg_av ();
            x0 = e;
            w0 = e;
            if (w0 == 0x29) {
                goto label_1;
            }
            w0 = 0x0;
            dbg_I (w0);
            *((x29 + 0x38)) = w0;
            dbg_B ();
            x0 = v;
            w0 = v;
            w1 = *((x29 + 0x3c));
            w0 = w1 - w0;
            w0 -= 5;
            dbg_I (w0);
            w0 = *((x29 + 0x38));
            dbg_H (w0);
            w0 = *((x29 + 0x38));
            w0 += 4;
            *((x29 + 0x3c)) = w0;
        }
label_1:
        dbg_av ();
        x0 = x29 + 0x34;
        dbg_S (x0);
        x0 = v;
        w0 = v;
        w1 = *((x29 + 0x3c));
        w0 = w1 - w0;
        w0 -= 5;
        dbg_I (w0);
        w0 = *((x29 + 0x34));
        dbg_H (w0);
        goto label_0;
    }
    x0 = e;
    w0 = e;
    if (w0 != 0x7b) {
        goto label_2;
    }
    dbg_av ();
    w0 = 0x1;
    dbg_ar (w0);
    while (w0 != 0x7d) {
        w0 = *((x29 + 0x2c));
        dbg_S (w0);
        x0 = e;
        w0 = e;
    }
    dbg_av ();
    goto label_0;
label_2:
    x0 = e;
    w0 = e;
    if (w0 == 0x1c0) {
        dbg_av ();
        x0 = e;
        w0 = e;
        if (w0 != 0x3b) {
            dbg_B ();
        }
        x0 = U;
        w0 = U;
        w0 = dbg_I (w0);
        w1 = w0;
        x0 = U;
        *(x0) = w1;
    } else {
        x0 = e;
        w0 = e;
        if (w0 == 0x190) {
            dbg_av ();
            x0 = *((x29 + 0x2c));
            x19 = x0;
            x0 = *((x29 + 0x2c));
            w0 = *(x0);
            dbg_I (w0);
            *(x19) = w0;
        } else {
            x0 = e;
            w0 = e;
            if (w0 == 0x3b) {
                goto label_3;
            }
            dbg_B ();
        }
    }
label_3:
    dbg_av ();
label_0:
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xfb8 */
#include <stdint.h>
 
void dbg_w () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int w(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = *(0x22000);
    w0 = *(0x22000);
    if (w0 != 0) {
        w0 = *(0x22000);
        w2 = w0 + 1;
        x1 = *(0x22000);
        *(x1) = w2;
        x0 = (int64_t) w0;
        w0 = *(x0);
        w1 = w0;
        x0 = 0x14000;
        x0 = *(0x220db);
        *(x0) = w1;
    }
    x0 = ak;
    w0 = ak;
    x0 = (int64_t) w0;
    w0 = fgetc (x0);
    w1 = w0;
    x0 = *(0x140db);
    *(x0) = w1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x1adc */
#include <stdint.h>
 
void dbg_ab (int64_t arg1) {
    int32_t s;
    int32_t h;
    int32_t F;
    int32_t a;
    int32_t d;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_34h;
    signed int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    x0 = arg1;
    /* int ab(int s); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((x29 + 0x2c)) = w0;
    w0 = 0x1;
    *((x29 + 0x3c)) = w0;
    x0 = e;
    w0 = e;
    if (w0 != 0x22) {
        goto label_0;
    }
    x0 = i;
    w1 = i;
    x0 = y;
    w0 = y;
    w0 = w1 + w0;
    dbg_M (w0);
    while (w0 != 0x22) {
        dbg_an ();
        x0 = i;
        w0 = i;
        w2 = w0 + 1;
        x1 = i;
        *(x1) = w2;
        x0 = (int64_t) w0;
        x1 = x0;
        x0 = *(0x140db);
        w0 = *(0x140db);
        w0 = (int8_t) w0;
        *(x1) = w0;
        dbg_w ();
        x0 = *(0x140db);
        w0 = *(0x140db);
    }
    x0 = i;
    w0 = i;
    x0 = (int64_t) w0;
    *(x0) = 0;
    x0 = i;
    w0 = i;
    w0 += 4;
    w1 = w0 & 0xfffffffc;
    x0 = i;
    *(x0) = w1;
    dbg_w ();
    dbg_av ();
    goto label_1;
label_0:
    x0 = J;
    w0 = J;
    *((x29 + 0x34)) = w0;
    x0 = C;
    w0 = C;
    *((x29 + 0x30)) = w0;
    x0 = e;
    w0 = e;
    *((x29 + 0x38)) = w0;
    dbg_av ();
    w0 = *((x29 + 0x38));
    if (w0 == 2) {
        w0 = *((x29 + 0x30));
        dbg_M (w0);
    } else {
        w0 = *((x29 + 0x34));
        if (w0 == 2) {
            w0 = 0x0;
            dbg_ab (w0);
            w1 = 0x0;
            w0 = 0xb9;
            dbg_x (w0, w1);
            w0 = *((x29 + 0x38));
            if (w0 == 0x21) {
                w0 = *((x29 + 0x30));
                dbg_aq (w0);
            } else {
                w0 = *((x29 + 0x30));
            }
            dbg_aw (w0, x1);
        } else {
            w0 = *((x29 + 0x38));
            if (w0 == 0x28) {
                dbg_B ();
                dbg_av ();
            } else {
                w0 = *((x29 + 0x38));
                if (w0 == 0x2a) {
                    dbg_av ();
                    x0 = e;
                    w0 = e;
                    *((x29 + 0x38)) = w0;
                    dbg_av ();
                    dbg_av ();
                    x0 = e;
                    w0 = e;
                    if (w0 == 0x2a) {
                        dbg_av ();
                        dbg_av ();
                        dbg_av ();
                        dbg_av ();
                        *((x29 + 0x38)) = 0;
                    }
                    dbg_av ();
                    w0 = 0x0;
                    dbg_ab (w0);
                    x0 = e;
                    w0 = e;
                    if (w0 == 0x3d) {
                        dbg_av ();
                        w0 = 0x50;
                        x0 = dbg_aw (w0, x1);
                        dbg_B ();
                        w0 = 0x59;
                        dbg_aw (w0, x1);
                        w0 = *((x29 + 0x38));
                        if (w0 == 0x100) {
                            w0 = 0x189;
                        } else {
                            w0 = 0x188;
                        }
                        dbg_aw (w0, x1);
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
        dbg_aw (w0, x1);
    } else {
        w0 = 0xbe0f;
        dbg_aw (w0, x1);
    }
    x0 = v;
    w0 = v;
    w1 = w0 + 1;
    x0 = v;
    *(x0) = w1;
    w0 = *((x29 + 0x38));
    if (w0 == 0x26) {
        x0 = e;
        w0 = e;
        w1 = w0;
        w0 = 0xa;
        x0 = dbg_W (w0, w1);
        dbg_av ();
    } else {
        *((x29 + 0x3c)) = 0;
        x0 = e;
        w0 = e;
        w0 = (w0 == 0x3d) ? 1 : 0;
        w0 = (int8_t) w0;
        w1 = w0;
        w0 = *((x29 + 0x2c));
        w0 = w1 & w0;
        if (w0 != 0) {
            dbg_av ();
            dbg_B ();
            w1 = *((x29 + 0x38));
            w0 = 0x6;
            dbg_W (w0, w1);
        } else {
            x0 = e;
            w0 = e;
            if (w0 == 0x28) {
                goto label_1;
            }
            w1 = *((x29 + 0x38));
            w0 = 0x8;
            dbg_W (w0, w1);
            x0 = J;
            w0 = J;
            if (w0 != 0xb) {
                goto label_1;
            }
            w1 = *((x29 + 0x38));
            w0 = 0x0;
            dbg_W (w0, w1);
            x0 = C;
            w0 = C;
            x0 = dbg_aw (x0, x1);
            dbg_av ();
        }
    }
label_1:
    x0 = e;
    w0 = e;
    if (w0 != 0x28) {
        goto label_2;
    }
    w0 = *((x29 + 0x3c));
    if (w0 != 0) {
        w0 = 0x50;
        dbg_aw (w0, x1);
    }
    w1 = 0x0;
    w0 = 0xec81;
    dbg_x (w0, w1);
    *((x29 + 0x30)) = w0;
    dbg_av ();
    *((x29 + 0x2c)) = 0;
    while (w0 != 0x29) {
        dbg_B ();
        w1 = *((x29 + 0x2c));
        w0 = 0x248489;
        dbg_x (w0, x1);
        x0 = e;
        w0 = e;
        if (w0 == 0x2c) {
            dbg_av ();
        }
        w0 = *((x29 + 0x2c));
        w0 += 4;
        *((x29 + 0x2c)) = w0;
        x0 = e;
        w0 = e;
    }
    w1 = *((x29 + 0x2c));
    w0 = *((x29 + 0x30));
    x0 = dbg_E (w0, w1, x2);
    dbg_av ();
    w0 = *((x29 + 0x3c));
    if (w0 != 0) {
        w1 = *((x29 + 0x2c));
        w0 = 0x2494ff;
        dbg_x (w0, x1);
        w0 = *((x29 + 0x2c));
        w0 += 4;
        *((x29 + 0x2c)) = w0;
    } else {
        w0 = *((x29 + 0x38));
        w0 += 4;
        *((x29 + 0x38)) = w0;
        x0 = *((x29 + 0x38));
        x19 = x0;
        x0 = *((x29 + 0x38));
        w0 = *(x0);
        w1 = w0;
        w0 = 0xe8;
        dbg_x (w0, w1);
        *(x19) = w0;
    }
    w0 = *((x29 + 0x2c));
    if (w0 != 0) {
        w1 = *((x29 + 0x2c));
        w0 = 0xc481;
        dbg_x (w0, w1);
    }
label_2:
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x2678 */
#include <stdint.h>
 
uint64_t dbg_ad (int64_t arg1, char * arg2) {
    int32_t a;
    int32_t d;
    char * var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    x1 = arg2;
    /* int ad(int d,int a); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    w0 = *((x29 + 0x1c));
    dbg_ax (w0);
    w1 = *((x29 + 0x1c));
    w0 = 0x8048000;
    w0 = w1 + w0;
    *((x29 + 0x1c)) = w0;
    w0 = *((x29 + 0x1c));
    dbg_ax (w0);
    w0 = *((x29 + 0x1c));
    dbg_ax (w0);
    w0 = *((x29 + 0x18));
    dbg_ax (w0);
    w0 = *((x29 + 0x18));
    dbg_ax (w0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x8048000;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x10b4 */
#include <stdint.h>
 
void dbg_an () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int an(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = *(0x140db);
    w0 = *(0x140db);
    if (w0 == 0x5c) {
        dbg_w ();
        x0 = *(0x140db);
        w0 = *(0x140db);
        if (w0 != 0x6e) {
            goto label_0;
        }
        x0 = *(0x140db);
        w1 = 0xa;
        *(x0) = w1;
    }
label_0:
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xd08 */
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x1104 */
#include <stdint.h>
 
void dbg_av () {
    int32_t h;
    int32_t s;
    int32_t a;
    int64_t var_14h;
    char * var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    /* int av(); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    goto label_3;
label_0:
    x0 = *(0x140db);
    w0 = *(0x140db);
    if (w0 != 0x23) {
        goto label_4;
    }
    dbg_w ();
    dbg_av ();
    x0 = e;
    w0 = e;
    if (w0 != 0x218) {
        goto label_5;
    }
    dbg_av ();
    w0 = 0x20;
    dbg_L (w0, x1);
    x0 = e;
    w0 = e;
    x0 = (int64_t) w0;
    x1 = x0;
    w0 = 0x1;
    *(x1) = w0;
    x0 = e;
    w0 = e;
    w0 += 4;
    x0 = (int64_t) w0;
    x1 = x0;
    x0 = D;
    w0 = D;
    *(x1) = w0;
    while (w0 != 0xa) {
        x0 = *(0x140db);
        w0 = *(0x140db);
        x0 = dbg_L (x0, x1);
        dbg_w ();
label_5:
        x0 = *(0x140db);
        w0 = *(0x140db);
    }
    x0 = *(0x140db);
    w0 = *(0x140db);
    dbg_L (x0, x1);
    w0 = 0x2;
    x0 = dbg_L (w0, x1);
label_4:
    dbg_w ();
label_3:
    x0 = *(0x140db);
    w0 = *(0x140db);
    w0 = isspace (w0);
    w1 = w0;
    x0 = *(0x140db);
    w0 = *(0x140db);
    w0 = (w0 == 0x23) ? 1 : 0;
    w0 = (int8_t) w0;
    w0 = w1 | w0;
    if (w0 != 0) {
        goto label_0;
    }
    x0 = J;
    *(x0) = 0;
    x0 = *(0x140db);
    w1 = *(0x140db);
    x0 = e;
    *(x0) = w1;
    w0 = dbg_am ();
    if (w0 == 0) {
        goto label_6;
    }
    w0 = 0x20;
    dbg_L (w0, x1);
    x0 = D;
    w1 = D;
    x0 = Z;
    *(x0) = w1;
    while (w0 != 0) {
        x0 = *(0x140db);
        w0 = *(0x140db);
        x0 = dbg_L (x0, x1);
        dbg_w ();
        w0 = dbg_am ();
    }
    x0 = e;
    w0 = e;
    w0 -= 0x30;
    if (w0 <= 9) {
        x0 = Z;
        w0 = Z;
        w2 = 0x0;
        w1 = 0x0;
        w0 = strtol (w0, w1, w2);
        w1 = w0;
        x0 = C;
        *(x0) = w1;
        x0 = e;
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
    x0 = Q;
    w0 = Q;
    x0 = (int64_t) w0;
    x2 = x0;
    x0 = Z;
    w0 = Z;
    w0--;
    x0 = (int64_t) w0;
    x1 = x0;
    x0 = x2;
    x0 = strstr (x0, x1);
    x1 = x0;
    x0 = Q;
    w0 = Q;
    x0 = (int64_t) w0;
    x0 = -x0;
    x0 = x1 + x0;
    w1 = w0;
    x0 = e;
    *(x0) = w1;
    x0 = D;
    w0 = D;
    x0 = (int64_t) w0;
    *(x0) = 0;
    x0 = e;
    w0 = 0x14fc8;
    w1 = w0 << 3;
    x0 = e;
    *(x0) = w1;
    x0 = e;
    w0 = e;
    __asm ("b.le 0x1678");
    x0 = T;
    x0 = e;
    w0 = e;
    w1 = 0x14f30;
    x0 = e;
    *(x0) = w1;
    x0 = e;
    w0 = e;
    x0 = (int64_t) w0;
    w0 = e;
    if (w0 != 1) {
        goto label_7;
    }
    x0 = e;
    w0 = e;
    w0 += 4;
    x0 = (int64_t) w0;
    w1 = e;
    x0 = *(0x22000);
    *(x0) = w1;
    x0 = *(0x140db);
    w1 = *(0x140db);
    x0 = al;
    *(x0) = w1;
    dbg_w ();
    dbg_av ();
    goto label_7;
label_6:
    dbg_w ();
    x0 = e;
    w0 = e;
    if (w0 == 0x27) {
        x0 = e;
        w1 = 0x2;
        *(x0) = w1;
        dbg_an ();
        x0 = *(0x140db);
        w1 = *(0x140db);
        x0 = C;
        *(x0) = w1;
        dbg_w ();
        dbg_w ();
        goto label_7;
    }
    x0 = e;
    w0 = e;
    w0 = (w0 == 0x2f) ? 1 : 0;
    w1 = (int8_t) w0;
    x0 = *(0x140db);
    w0 = *(0x140db);
    w0 = (w0 == 0x2a) ? 1 : 0;
    w0 = (int8_t) w0;
    w0 = w1 & w0;
    w0 = (int8_t) w0;
    if (w0 == 0) {
        goto label_8;
    }
    dbg_w ();
    goto label_9;
    do {
        dbg_w ();
label_1:
        x0 = *(0x140db);
        w0 = *(0x140db);
    } while (w0 != 0x2a);
    dbg_w ();
    x0 = *(0x140db);
    w0 = *(0x140db);
    if (w0 == 0x2f) {
        x0 = *(0x140db);
        *(x0) = 0;
    }
label_9:
    x0 = *(0x140db);
    w0 = *(0x140db);
    if (w0 != 0) {
        goto label_1;
    }
    dbg_w ();
    dbg_av ();
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
    x0 = C;
    *(x0) = 0;
    while (w0 < 0) {
        x0 = C;
        w0 = C;
        w1 = w0 << 6;
        x0 = J;
        w0 = J;
        w0 = w1 + w0;
        w1 = w0 + 0x40;
        x0 = C;
        *(x0) = w1;
        w0 = *((x29 + 0x1c));
        w1 = w0 + 1;
        *((x29 + 0x1c)) = w1;
        x0 = (int64_t) w0;
        w0 = *(x0);
        w1 = w0 - 0x62;
        x0 = J;
        *(x0) = w1;
        x0 = J;
        w0 = J;
    }
    x0 = e;
    w0 = e;
    w1 = *((x29 + 0x18));
    w0 = (w1 == w0) ? 1 : 0;
    w0 = (int8_t) w0;
    w2 = w0;
    x0 = *(0x140db);
    w0 = *(0x140db);
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
        x0 = *(0x140db);
        w0 = *(0x140db);
        w1 = *((x29 + 0x14));
        if (w1 != w0) {
            goto label_11;
        }
        dbg_w ();
        x0 = e;
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
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0x23c8 */
#include <stdint.h>
 
void dbg_ar (int64_t arg1) {
    int32_t s;
    int32_t h;
    int64_t var_1ch;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    /* int ar(int s); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    goto label_1;
label_0:
    x0 = e;
    w0 = e;
    if (w0 != 0x100) {
        goto label_2;
    }
    dbg_av ();
    while (w0 != 0x3b) {
        w0 = *((x29 + 0x1c));
        if (w0 != 0) {
            x0 = P;
            w0 = P;
            w1 = w0 + 4;
            x0 = P;
            *(x0) = w1;
            x0 = e;
            w0 = e;
            x0 = (int64_t) w0;
            x1 = x0;
            x0 = P;
            w0 = P;
            w0 = -w0;
            *(x1) = w0;
        } else {
            x0 = e;
            w0 = e;
            x0 = (int64_t) w0;
            x1 = x0;
            x0 = i;
            w0 = i;
            *(x1) = w0;
            x0 = i;
            w0 = i;
            w1 = w0 + 4;
            x0 = i;
            *(x0) = w1;
        }
        dbg_av ();
        x0 = e;
        w0 = e;
        if (w0 == 0x2c) {
            dbg_av ();
        }
        x0 = e;
        w0 = e;
    }
    dbg_av ();
    goto label_1;
label_2:
    x0 = e;
    w0 = e;
    x0 = (int64_t) w0;
    x1 = x0;
    x0 = v;
    w0 = v;
    *(x1) = w0;
    dbg_av ();
    dbg_av ();
    w0 = 0x8;
    *((x29 + 0x2c)) = w0;
    while (w0 != 0x29) {
        x0 = e;
        w0 = e;
        x0 = (int64_t) w0;
        x1 = x0;
        w0 = *((x29 + 0x2c));
        *(x1) = w0;
        w0 = *((x29 + 0x2c));
        w0 += 4;
        *((x29 + 0x2c)) = w0;
        dbg_av ();
        x0 = e;
        w0 = e;
        if (w0 == 0x2c) {
            dbg_av ();
        }
        x0 = e;
        w0 = e;
    }
    dbg_av ();
    x0 = P;
    *(x0) = 0;
    x0 = P;
    w1 = P;
    x0 = U;
    *(x0) = w1;
    w0 = 0xe58955;
    dbg_aw (w0, x1);
    w1 = 0x0;
    w0 = 0xec81;
    dbg_x (w0, w1);
    *((x29 + 0x2c)) = w0;
    w0 = 0x0;
    dbg_S (w0);
    x0 = U;
    w0 = U;
    dbg_H (w0);
    w0 = 0xc3c9;
    dbg_aw (w0, x1);
    x0 = P;
    w0 = P;
    w1 = w0;
    w0 = *((x29 + 0x2c));
    dbg_E (w0, w1, x2);
label_1:
    x0 = e;
    w0 = e;
    w0 = (w0 == 0x100) ? 1 : 0;
    w0 = (int8_t) w0;
    w2 = w0;
    x0 = e;
    w0 = e;
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
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xd40 */
#include <stdint.h>
 
void memcpy () {
    x16 = 0x15000;
    x17 = *(0x15000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xd60 */
#include <stdint.h>
 
void fclose () {
    x17 = *(0x15010);
    x16 = 0x15010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xd70 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x15018);
    x16 = 0x15018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xd80 */
#include <stdint.h>
 
void isspace () {
    x17 = *(0x15020);
    x16 = 0x15020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xda0 */
#include <stdint.h>
 
void fgetc () {
    x17 = *(0x15030);
    x16 = 0x15030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xdb0 */
#include <stdint.h>
 
void calloc () {
    x17 = *(0x15038);
    x16 = 0x15038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xdd0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x15048);
    x16 = 0x15048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xde0 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x15050);
    x16 = 0x15050;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xdf0 */
#include <stdint.h>
 
void strtol () {
    x17 = *(0x15058);
    x16 = 0x15058;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xe00 */
#include <stdint.h>
 
void fwrite () {
    x17 = *(0x15060);
    x16 = 0x15060;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xe10 */
#include <stdint.h>
 
void strstr () {
    x17 = *(0x15068);
    x16 = 0x15068;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/arm64_elf_gcc_O0/subject.exe @ 0xd20 */
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

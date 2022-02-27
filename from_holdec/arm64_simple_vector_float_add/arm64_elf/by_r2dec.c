/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x6b0 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 744 named .text */
    x29 = 0x0;
    x30 = 0x0;
    x0 = sp;
    x1 = 0x10da8;
    return void (*0x6cc)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x620 */
#include <stdint.h>
 
void init () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [07] -r-x section size 16 named .init */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x998 */
#include <stdint.h>
 
void fini () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [10] -r-x section size 16 named .fini */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x6f4 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x0 = .data;
    x0 += 8;
    x1 = .data;
    x1 += 8;
    if (x1 != x0) {
        x1 = .comment;
        if (x1 == 0) {
            goto label_0;
        }
        x16 = x1;
        uint64_t (*x16)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x724 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = .data;
    x0 += 8;
    x1 = .data;
    x1 += 8;
    x1 -= x0;
    x2 = 0x2;
    x1 >>= 3;
    x1 /= x2;
    if (x1 != 0) {
        x2 = .comment;
        if (x2 == 0) {
            goto label_0;
        }
        x16 = x2;
        uint64_t (*x16)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x760 */
#include <stdint.h>
 
void entry_fini0 () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = .data;
    w1 = *((x0 + 8));
    if (w1 == 0) {
        *((sp + -0x20)) = x29;
        *((sp + -0x20 + 8)) = x30;
        x29 = sp;
        *((sp + 0x10)) = x19;
        x19 = x0;
        x0 = .comment;
        if (x0 != 0) {
            x0 = .comment;
            cxa_finalize ();
        }
        deregister_tm_clones ();
        x0 = .comment;
        if (x0 != 0) {
            x0 = .eh_frame;
            loc_imp_deregister_frame_info ();
        }
        w0 = 0x1;
        *((x19 + 8)) = w0;
        x19 = *((sp + 0x10));
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x1;
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x7c8 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .comment;
    if (x0 != 0) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        x1 = 0x10;
        x0 = .eh_frame;
        loc_imp_register_frame_info ();
        x29 = *(sp);
        x30 = *((sp + 8));
    }
    return void (*0x724)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x6cc */
#include <stdint.h>
 
void dbg_start_c (int64_t arg1) {
    x0 = arg1;
    /* void _start_c(long int * p); */
    x2 = x0;
    x4 = _fini;
    x5 = 0x0;
    x3 = .init;
    x0 = main;
    x1 = *(x2);
    x2 += 8;
    return void (*0x690)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x7f8 */
#include <stdint.h>
 
void add_float_neon3 (int64_t arg_20h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    x3 = arg4;
    *((sp + 0x18)) = x0;
    *((sp + 0x10)) = x1;
    *((sp + 8)) = x2;
    *((sp + 4)) = w3;
    x1 = *((sp + 0x10));
    x2 = *((sp + 8));
    w3 = *((sp + 4));
    x0 = *((sp + 0x18));
    do {
        __asm ("ld1 {v0.4s}, [x1], 0x10");
        __asm ("ld1 {v1.4s}, [x2], 0x10");
        v0.4s += v1.4s;
        w3 -= 4;
        __asm ("st1 {v0.4s}, [x0], 0x10");
    } while (w3 > w3);
    *((sp + 0x18)) = x0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x844 */
#include <stdint.h>
 
int32_t main () {
    int64_t var_50h;
    int64_t var_50h_2;
    char * format;
    int64_t var_18h;
    int64_t var_0h;
    int64_t var_0h_2;
    int64_t var_0h_3;
    int64_t var_28h;
    int64_t var_0h_4;
    int64_t var_0h_5;
    int64_t var_0h_6;
    int64_t var_38h;
    int64_t var_48h;
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    x0 = .comment;
    x1 = .comment;
    *((sp + 0x48)) = x1;
    x1 = 0x0;
    w0 = 0x3f99999a;
    s0 = w0;
    *((sp + 0x18)) = s0;
    w0 = 0x40133333;
    s0 = w0;
    *((sp + 0x1c)) = s0;
    w0 = 0x4059999a;
    s0 = w0;
    *((sp + 0x20)) = s0;
    w0 = 0x40b33333;
    s0 = w0;
    *((sp + 0x24)) = s0;
    w0 = 0x3dcccccd;
    s0 = w0;
    *((sp + 0x28)) = s0;
    w0 = 0x3e4ccccd;
    s0 = w0;
    *((sp + 0x2c)) = s0;
    w0 = 0x3e99999a;
    s0 = w0;
    *((sp + 0x30)) = s0;
    w0 = 0x3ecccccd;
    s0 = w0;
    *((sp + 0x34)) = s0;
    x2 = sp + 0x28;
    x1 = sp + 0x18;
    x0 = sp + 0x38;
    w3 = 0x4;
    add_float_neon3 ();
    *((sp + 0x14)) = 0;
    while (1) {
        x0 = *((sp + 0x14));
        x0 <<= 2;
        x1 = sp + 0x18;
        s0 = *((x1 + x0));
        d3 = (double) s0;
        x0 = *((sp + 0x14));
        x0 <<= 2;
        x1 = sp + 0x28;
        s0 = *((x1 + x0));
        d1 = (double) s0;
        x0 = *((sp + 0x14));
        x0 <<= 2;
        x1 = sp + 0x38;
        s0 = *((x1 + x0));
        d0 = (double) s0;
        d2 = d0;
        d0 = d3;
        x0 = "%f + %f = %f\n";
        printf (x0, x1);
        w0 = *((sp + 0x14));
        w0++;
        *((sp + 0x14)) = w0;
        w0 = *((sp + 0x14));
        __asm ("b.le 0x8fc");
    }
    w0 = 0x0;
    w1 = w0;
    x2 = *((sp + 0x48));
    x0 = .comment;
    x0 = x2 ^ x0;
    if (x0 != 0) {
        stack_chk_fail ();
    }
    w0 = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x650 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x10f80);
    x16 = 0x10f80;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x660 */
#include <stdint.h>
 
void cxa_finalize () {
    x17 = *(0x10f88);
    x16 = 0x10f88;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x670 */
#include <stdint.h>
 
void stack_chk_fail () {
    x17 = *(0x10f90);
    x16 = 0x10f90;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x690 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x10fa0);
    x16 = 0x10fa0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x680 */
#include <stdint.h>
 
void loc_imp_deregister_frame_info () {
    x17 = *(0x10f98);
    x16 = 0x10f98;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x6a0 */
#include <stdint.h>
 
void loc_imp_register_frame_info () {
    x17 = *(0x10fa8);
    x16 = 0x10fa8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_vector_float_add/arm64_elf/subject.exe @ 0x630 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [08] -r-x section size 128 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x10f78;
    return uint64_t (*x17)() ();
}

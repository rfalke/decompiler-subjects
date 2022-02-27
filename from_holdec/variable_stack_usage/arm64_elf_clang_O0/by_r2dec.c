/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x400490 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 860 named .text */
    x29 = 0x0;
    x30 = 0x0;
    x5 = x0;
    x1 = *(sp);
    x2 = sp + 8;
    x6 = sp;
    x0 = dbg.main;
    x3 = sym.__libc_csu_init;
    x4 = sym.__libc_csu_fini;
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x400450 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x411000;
    x17 = *(0x411000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x4004d8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x400470)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x4004f0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x411030;
    x0 = 0x411030;
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
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x400530 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x411030;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x411030;
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
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x400570 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x411000;
    w0 = *((x19 + 0x30));
    if (w0 == 0) {
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x30)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x4005a0 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x410df0;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x400530)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x400530)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x4007e8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x400644 */
#include <stdint.h>
 
void dbg_with_array (int64_t arg1) {
    int64_t var_20h;
    int64_t var_14h;
    int64_t var_10h;
    int64_t var_8h;
    int64_t var_4h;
    int64_t var_sp_10h;
    x0 = arg1;
    /* void with_array(int n); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w8 = 8;
    *((x29 - 4)) = w0;
    w0 = 7;
    *((x29 - 8)) = w0;
    w0 = *((x29 - 4));
    w9 = w0;
    x10 = sp;
    *((x29 - 0x10)) = x10;
    x9 <<= 2;
    x9 += 0xf;
    x9 &= 0x7fffffff0;
    x10 = sp;
    x9 = x10 - x9;
    *((x29 - 0x14)) = w8;
    w1 = *((x29 - 4));
    x0 = x9;
    *((x29 - 0x20)) = x9;
    dbg_fill (x0, x1);
    x0 = x29 - 8;
    dbg_use (x0, x1);
    x0 = *((x29 - 0x20));
    dbg_use (x0, x1);
    x0 = x29 - 0x14;
    dbg_use (x0, x1);
    x9 = *((x29 - 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x40060c */
#include <stdint.h>
 
void dbg_fill (void * arg1, signed int64_t arg2) {
    signed int64_t var_4h;
    void * s;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* void fill(int * dest,int n); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w8 = 0x78;
    *((sp + 8)) = x0;
    *((sp + 4)) = w1;
    x0 = *((sp + 8));
    x9 = *((sp + 4));
    x2 = x9 << 2;
    w1 = (int8_t) w8;
    memset (x0, w1, x2);
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x400460 */
#include <stdint.h>
 
void memset () {
    x16 = 0x411000;
    x17 = *(0x411008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
void dbg_use (int64_t arg_10h, int64_t arg1) {
    int64_t var_8h;
    x0 = arg1;
    /* void use(int * x); */
    x8 = 0x411034;
    *((sp + 8)) = x0;
    x0 = *((sp + 8));
    w9 = *(x0);
    w10 = *(0x411034);
    w9 = w10 + w9;
    *(x8) = w9;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x4007ec */
#include <stdint.h>
 
void fini () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [15] -r-x section size 16 named .fini */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x4006c8 */
#include <stdint.h>
 
void dbg_with_alloca (int64_t arg1) {
    int64_t var_14h;
    int64_t var_10h;
    int64_t var_8h;
    int64_t var_4h;
    int64_t var_0h;
    int64_t var_sp_10h;
    x0 = arg1;
    /* void with_alloca(int n); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w8 = 8;
    *((x29 - 4)) = w0;
    w0 = 7;
    *((x29 - 8)) = w0;
    __asm ("ldursw x9, [x29, -4]");
    x9 <<= 2;
    x9 += 0xf;
    x9 &= 0xfffffffffffffff0;
    x10 = sp;
    x9 = x10 - x9;
    *((x29 - 0x10)) = x9;
    *((x29 - 0x14)) = w8;
    x0 = *((x29 - 0x10));
    w1 = *((x29 - 4));
    dbg_fill (x0, w1);
    x0 = x29 - 8;
    dbg_use (x0, x1);
    x0 = *((x29 - 0x10));
    dbg_use (x0, x1);
    x0 = x29 - 0x14;
    dbg_use (x0, x1);
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x400770 */
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
    x20 = 0x410de8;
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
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x400738 */
#include <stdint.h>
 
void dbg_main (int32_t argc, char ** argv) {
    char ** var_0h_2;
    int64_t var_8h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = argc;
    x1 = argv;
    /* int main(int argc,char ** argv); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = 0;
    *((sp + 8)) = w0;
    *(sp) = x1;
    w0 = *((sp + 8));
    dbg_with_alloca (w0);
    w0 = *((sp + 8));
    dbg_with_array (w0);
    w0 = 0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x400418 */
#include <stdint.h>
 
void init () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 20 named .init */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    call_weak_fn ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x400480 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x411018);
    x16 = 0x411018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/arm64_elf_clang_O0/subject.exe @ 0x400430 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 96 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x410ff8;
    return uint64_t (*x17)() ();
}

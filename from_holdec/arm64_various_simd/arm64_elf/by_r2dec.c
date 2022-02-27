/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x6c0 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 1328 named .text */
    x29 = 0x0;
    x30 = 0x0;
    x0 = sp;
    x1 = 0x11d90;
    return void (*0x6dc)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x630 */
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
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0xbf0 */
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
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x704 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x0 = 0x18;
    x1 = 0x18;
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
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x734 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x18;
    x1 = 0x18;
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
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x770 */
#include <stdint.h>
 
void entry_fini0 () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = .data;
    w1 = *((x0 + 0x18));
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
        *((x19 + 0x18)) = w0;
        x19 = *((sp + 0x10));
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x1;
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x7d8 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .comment;
    if (x0 != 0) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        x1 = 0x20;
        x0 = .eh_frame;
        loc_imp_register_frame_info ();
        x29 = *(sp);
        x30 = *((sp + 8));
    }
    return void (*0x734)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x808 */
#include <stdint.h>
 
uint64_t dbg_dump (int64_t arg1) {
    char * msg;
    int32_t i;
    float * f;
    double * d;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_18h;
    char * format;
    char * var_28h;
    char * var_2ch;
    int64_t var_30h;
    int64_t var_38h;
    x0 = arg1;
    /* void dump(char * msg); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x18)) = x0;
    x1 = *((sp + 0x18));
    x0 = "===== %s\n";
    printf (x0, x1);
    x0 = high;
    x1 = high;
    x0 = low;
    x2 = x0;
    x0 = "x1/x0 (high/low):       0x%016lx 0x%016lx\n";
    printf (x0, x1, x2);
    x0 = "memory:                 0x";
    printf (x0);
    *((sp + 0x24)) = 0;
    while (1) {
        x0 = .data;
        x1 = x0 + 8;
        x0 = *((sp + 0x24));
        w0 = *((x1 + x0));
        w1 = w0;
        x0 = "%02x";
        printf (x0, x1);
        w0 = *((sp + 0x24));
        if (w0 == 7) {
            x0 = 0xc68;
            printf (x0);
        }
        w0 = *((sp + 0x24));
        w0++;
        *((sp + 0x24)) = w0;
        w0 = *((sp + 0x24));
        __asm ("b.le 0x860");
    }
    x0 = 0xc70;
    puts (x0);
    x0 = .data;
    x0 += 8;
    *((sp + 0x30)) = x0;
    x0 = "as float (s, 4 byte):   ";
    printf (x0);
    *((sp + 0x28)) = 0;
    while (1) {
        x0 = *((sp + 0x28));
        x0 <<= 2;
        x1 = *((sp + 0x30));
        x0 = x1 + x0;
        s0 = *(x0);
        d0 = (double) s0;
        w1 = *((sp + 0x28));
        x0 = "[%d]=%f ";
        printf (x0, x1);
        w0 = *((sp + 0x28));
        w0++;
        *((sp + 0x28)) = w0;
        w0 = *((sp + 0x28));
        __asm ("b.le 0x8dc");
    }
    x0 = 0xc70;
    puts (x0);
    x0 = .data;
    x0 += 8;
    *((sp + 0x38)) = x0;
    x0 = "as double (d, 8 byte):  ";
    printf (x0);
    *((sp + 0x2c)) = 0;
    while (1) {
        x0 = *((sp + 0x2c));
        x0 <<= 3;
        x1 = *((sp + 0x38));
        x0 = x1 + x0;
        d0 = *(x0);
        w1 = *((sp + 0x2c));
        x0 = "[%d]=%f ";
        printf (x0, x1);
        w0 = *((sp + 0x2c));
        w0++;
        *((sp + 0x2c)) = w0;
        w0 = *((sp + 0x2c));
        __asm ("b.le 0x948");
    }
    x0 = 0xc70;
    puts (x0);
    x0 = 0xc70;
    puts (x0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xc70;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x6dc */
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
    return void (*0x6a0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x9a8 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int main(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = .data;
    x2 = x0 + 8;
    x0 = 0x11000;
    x1 = low;
    x0 = high;
    loc_modify1 (x0, x1, x2);
    x0 = "2x double values of 0.75";
    dbg_dump ("2x double values of 0.75");
    x0 = .data;
    x2 = x0 + 8;
    x0 = 0x11000;
    x1 = low;
    x0 = high;
    loc_modify2 (x0, x1, x2);
    x0 = "4x float values of 0.75";
    dbg_dump ("4x float values of 0.75");
    x0 = .data;
    x2 = x0 + 8;
    x0 = 0x11000;
    x1 = low;
    x0 = high;
    loc_modify3 (x0, x1, x2);
    x0 = "4x float values of 123, 456, 789, 543 divided by 100";
    dbg_dump ("4x float values of 123, 456, 789, 543 divided by 100");
    x0 = .data;
    x2 = x0 + 8;
    x0 = 0x11000;
    x1 = low;
    x0 = high;
    loc_modify4 (x0, x1, x2);
    x0 = "4x float values of 123, 456, 789, 543 divided by 100 and than add 2 to every byte";
    dbg_dump ("4x float values of 123, 456, 789, 543 divided by 100 and than add 2 to every byte");
    x0 = 0x11000;
    x1 = "Lorem Ipsum is simply dummy text of the printing ";
    x0 = "first input:  '%s'\n";
    printf (x0, "Lorem Ipsum is simply dummy text of the printing ");
    x0 = 0x11000;
    x1 = "LoRem iPSUM is simply dummy text of the printing ";
    x0 = "second input: '%s'\n";
    printf (x0, "LoRem iPSUM is simply dummy text of the printing ");
    x0 = .data;
    x2 = x0 + 8;
    x0 = 0x11000;
    x1 = low;
    x0 = high;
    loc_cmp_bytes (x0, x1, x2);
    x0 = "compare first 16 bytes of two strings (ff=eq, 00=ne)";
    dbg_dump ("compare first 16 bytes of two strings (ff=eq, 00=ne)");
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0xab0 */
#include <stdint.h>
 
uint64_t loc_modify1 (int64_t arg1, int64_t arg2, int64_t arg3) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    d0 = 0.75000000;
    __asm ("ins v0.d[1], v0.d[0]");
    *(x2) = q0;
    x3 = v0.d;
    *(x0) = x3;
    x3 = d0;
    *(x1) = x3;
    x0 = 0;
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0xad4 */
#include <stdint.h>
 
uint64_t loc_modify2 (int64_t arg1, int64_t arg2, int64_t arg3) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    s0 = 0.75000000;
    __asm ("dup v0.4s, v0.s[0]");
    *(x2) = q0;
    x3 = v0.d;
    *(x0) = x3;
    x3 = d0;
    *(x1) = x3;
    x0 = 0;
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0xaf8 */
#include <stdint.h>
 
uint64_t loc_modify3 (int64_t arg1, int64_t arg2, int64_t arg3) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    w3 = 0x7b;
    __asm ("ucvtf s0, w3");
    w3 = 0x1c8;
    __asm ("ucvtf s1, w3");
    w3 = 0x315;
    __asm ("ucvtf s2, w3");
    w3 = 0x21f;
    __asm ("ucvtf s3, w3");
    __asm ("ins v0.s[1], v1.s[0]");
    __asm ("ins v0.s[2], v2.s[0]");
    __asm ("ins v0.s[3], v3.s[0]");
    w3 = 0x64;
    __asm ("ucvtf s1, w3");
    __asm ("dup v1.4s, v1.s[0]");
    v0.4s /= v1.4s;
    *(x2) = q0;
    x3 = v0.d;
    *(x0) = x3;
    x3 = d0;
    *(x1) = x3;
    x0 = 0;
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0xb50 */
#include <stdint.h>
 
uint64_t loc_modify4 (int64_t arg1, int64_t arg2, int64_t arg3) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    w3 = 0x7b;
    __asm ("ucvtf s0, w3");
    w3 = 0x1c8;
    __asm ("ucvtf s1, w3");
    w3 = 0x315;
    __asm ("ucvtf s2, w3");
    w3 = 0x21f;
    __asm ("ucvtf s3, w3");
    __asm ("ins v0.s[1], v1.s[0]");
    __asm ("ins v0.s[2], v2.s[0]");
    __asm ("ins v0.s[3], v3.s[0]");
    w3 = 0x64;
    __asm ("ucvtf s1, w3");
    __asm ("dup v1.4s, v1.s[0]");
    v0.4s /= v1.4s;
    w3 = 0x2;
    s1 = w3;
    __asm ("dup v1.16b, v1.b[0]");
    v0.16b += v1.16b;
    *(x2) = q0;
    x3 = v0.d;
    *(x0) = x3;
    x3 = d0;
    *(x1) = x3;
    x0 = 0;
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x660 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x11f68);
    x16 = 0x11f68;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0xbb8 */
#include <stdint.h>
 
uint64_t loc_cmp_bytes (int64_t arg1, int64_t arg2, int64_t arg3) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    x3 = "Lorem Ipsum is simply dummy text of the printing ";
    x4 = "LoRem iPSUM is simply dummy text of the printing ";
    q0 = "Lorem Ipsum is simply dummy text of the printing ";
    q1 = "LoRem iPSUM is simply dummy text of the printing ";
    __asm ("cmeq v0.16b, v1.16b, v0.16b");
    *(x2) = q0;
    x3 = v0.d;
    *(x0) = x3;
    x3 = d0;
    *(x1) = x3;
    x0 = 0;
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x670 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x11f70);
    x16 = 0x11f70;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x680 */
#include <stdint.h>
 
void cxa_finalize () {
    x17 = *(0x11f78);
    x16 = 0x11f78;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x6a0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x11f88);
    x16 = 0x11f88;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x690 */
#include <stdint.h>
 
void loc_imp_deregister_frame_info () {
    x17 = *(0x11f80);
    x16 = 0x11f80;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x6b0 */
#include <stdint.h>
 
void loc_imp_register_frame_info () {
    x17 = *(0x11f90);
    x16 = 0x11f90;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_various_simd/arm64_elf/subject.exe @ 0x640 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [08] -r-x section size 128 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x11f60;
    return uint64_t (*x17)() ();
}

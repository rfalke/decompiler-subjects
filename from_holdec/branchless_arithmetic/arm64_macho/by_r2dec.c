/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003bd4 */
#include <stdint.h>
 
int32_t main (int64_t argc) {
    int64_t var_0h;
    int64_t var_8h;
    int64_t var_8h_2;
    int64_t var_18h;
    int64_t var_18h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_50h;
    int64_t var_50h_2;
    int64_t var_60h;
    int64_t var_60h_2;
    *((sp + 0x30)) = x24;
    *((sp + 0x30 + 8)) = x23;
    *((sp + 0x40)) = x22;
    *((sp + 0x40 + 8)) = x21;
    *((sp + 0x50)) = x20;
    *((sp + 0x50 + 8)) = x19;
    *((sp + 0x60)) = x29;
    *((sp + 0x60 + 8)) = x30;
    x29 = sp + 0x60;
    w22 = 0x0;
    w21 = 0x3;
    w0 = 0x0;
    w1 = 0x3;
    x0 = sat_addu32b ();
    *((sp + 8)) = x21;
    *((sp + 8 + 8)) = x0;
    *(sp) = x22;
    x0 = 0x100003e3c;
    printf ("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n");
    w19 = 0x1;
    w0 = 0x1;
    w1 = 0x3;
    x0 = sat_subu32b ();
    *((sp + 8)) = x21;
    *((sp + 8 + 8)) = x0;
    *(sp) = x19;
    x0 = 0x100003e61;
    printf ("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n");
    w0 = 0x0;
    w1 = 0x3;
    x0 = sat_mulu32b ();
    *((sp + 8)) = x21;
    *((sp + 8 + 8)) = x0;
    *(sp) = x22;
    x0 = 0x100003e86;
    printf ("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n");
    w0 = 0x0;
    w1 = 0x3;
    x0 = sat_divu32b ();
    *((sp + 8)) = x21;
    *((sp + 8 + 8)) = x0;
    *(sp) = x22;
    x0 = 0x100003eab;
    printf ("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n");
    w23 = 0x80000000;
    w24 = 0x2;
    w0 = 0x80000000;
    w1 = 0x2;
    x0 = sat_adds32b_var1 ();
    x19 = x0;
    w0 = 0x80000000;
    w1 = 0x2;
    x0 = sat_adds32b_var2 ();
    x20 = x0;
    w0 = 0x80000000;
    w1 = 0x2;
    x0 = sat_adds32b_var3 ();
    *((sp + 0x18)) = x20;
    *((sp + 0x18 + 8)) = x0;
    *((sp + 8)) = x24;
    *((sp + 8 + 8)) = x19;
    *(sp) = x23;
    x0 = 0x100003ed0;
    printf ("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n");
    w19 = 0x8000;
    w0 = 0x8000;
    w1 = 0x2;
    x0 = sat_subs32b ();
    *((sp + 8)) = x24;
    *((sp + 8 + 8)) = x0;
    *(sp) = x19;
    x0 = 0x100003f03;
    printf ("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n");
    w0 = 0x80000000;
    w1 = 0x2;
    x0 = sat_muls32b ();
    *((sp + 8)) = x24;
    *((sp + 8 + 8)) = x0;
    *(sp) = x23;
    x0 = 0x100003f28;
    printf ("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n");
    w0 = 0x8000;
    w1 = 0x0;
    x0 = sat_divs32b ();
    *((sp + 8)) = x22;
    *((sp + 8 + 8)) = x0;
    *(sp) = x19;
    x0 = 0x100003f4d;
    printf ("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n");
    w19 = 0xf;
    w0 = 0xf;
    x0 = abs32 ();
    *(sp) = x19;
    *((sp + 8)) = x0;
    x0 = 0x100003f72;
    printf ("abs32(0x%08x) = 0x%08x\n");
    w0 = 0x3;
    x0 = sgn32 ();
    *(sp) = x21;
    *((sp + 8)) = x0;
    x0 = 0x100003f8a;
    printf ("sgn32(0x%08x) = 0x%08x\n");
    x0 = 0x0;
    x1 = 0x0;
    x0 = sat_addu64b ();
    x19 = x0;
    x0 = 0x0;
    x1 = 0x0;
    x0 = sat_subu64b ();
    x19 = x0 + x19;
    x0 = 0x0;
    w1 = 0x1;
    x0 = sat_divu64b ();
    x19 += x0;
    x0 = 0x0;
    x1 = 0x0;
    x0 = sat_mulu64b ();
    x19 += x0;
    x0 = 0x0;
    x1 = 0x0;
    x0 = sat_muls64b ();
    x19 += x0;
    x0 = 0x0;
    x1 = 0x0;
    x0 = sat_adds64b ();
    x19 += x0;
    x0 = 0x0;
    x1 = 0x0;
    x0 = sat_subs64b ();
    x19 += x0;
    x0 = 0x0;
    w1 = 0x1;
    x0 = sat_divs64b ();
    x19 += x0;
    x0 = 0x0;
    x0 = abs64 ();
    x19 += x0;
    x0 = 0x0;
    x0 = sgn64 ();
    x8 = x19 + x0;
    if (x8 == 0x2a) {
        x0 = 0x100003fa2;
        puts ("not reached");
    }
    w0 = 0x0;
    x29 = *((sp + 0x60));
    x30 = *((sp + 0x60 + 8));
    x20 = *((sp + 0x50));
    x19 = *((sp + 0x50 + 8));
    x22 = *((sp + 0x40));
    x21 = *((sp + 0x40 + 8));
    x24 = *((sp + 0x30));
    x23 = *((sp + 0x30 + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x1000039f4 */
#include <stdint.h>
 
uint32_t sat_addu32b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    /* [00] -r-x section size 1072 named 0.__TEXT.__text */
    w8 = w0 + w1;
    __asm ("csinv w0, w8, wzr, lo");
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003e24 */
#include <stdint.h>
 
void printf () {
    /* [01] -r-x section size 24 named 1.__TEXT.__stubs */
    x16 = *(0x0);
    return uint64_t (*x16)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003a00 */
#include <stdint.h>
 
uint32_t sat_subu32b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w8 = w0 - w1;
    w0 = (w8 < w0) ? 0 : w8;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003a14 */
#include <stdint.h>
 
uint32_t sat_mulu32b () {
    x8 = w0 * w1;
    __asm ("csinv w0, w8, wzr, eq");
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003a0c */
#include <stdint.h>
 
uint32_t sat_divu32b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w0 /= w1;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003a58 */
#include <stdint.h>
 
uint32_t sat_adds32b_var1 (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w8 = w0 + w1;
    w8 = 0x80000000;
    __asm ("cinv w8, w8, ge");
    w9 = w0 + w1;
    w0 = (w9 == w0) ? w8 : w9;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003a74 */
#include <stdint.h>
 
uint32_t sat_adds32b_var2 (uint32_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w8 = w1 ^ w0;
    w9 = w1 + w0;
    w10 = w9 ^ w0;
    w11 = 0x80000000;
    __asm ("cinv w11, w11, lt");
    __asm ("ccmp w8, 0, 8, le");
    w0 = (w10 < 1) ? w9 : w11;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003a9c */
#include <stdint.h>
 
uint32_t sat_adds32b_var3 (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w8 = 0x80000000;
    w8 += (w0 >> 31);
    w9 = w8 ^ w1;
    w10 = w1 + w0;
    w11 = w10 ^ w1;
    w9 |= w11;
    w9 = ~w9;
    w0 = (w9 >= 0) ? w8 : w10;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003ac0 */
#include <stdint.h>
 
uint32_t sat_subs32b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w8 = 0x80000000;
    w8 += (w0 >> 31);
    w9 = w8 ^ w1;
    w10 = w0 - w1;
    w11 = w8 ^ w10;
    w0 = ((w9 & w11) < 0) ? w8 : w10;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003afc */
#include <stdint.h>
 
uint32_t sat_muls32b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x8 = w1 * w0;
    x9 = x8 >> 0x20;
    w10 = w1 ^ w0;
    w11 = 0x80000000;
    w10 = w11 + (w10 >> 31);
    w0 = (w9 == w8) ? w8 : w10;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003ae0 */
#include <stdint.h>
 
uint32_t sat_divs32b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w8 = w1 + 1;
    w9 = w0 ^ 0x80000000;
    w8 |= w9;
    __asm ("cinc w8, w0, eq");
    w0 = w8 / w1;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003b9c */
#include <stdint.h>
 
uint32_t abs32 (uint32_t arg1) {
    x0 = arg1;
    __asm ("cneg w0, w0, mi");
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003bb4 */
#include <stdint.h>
 
uint32_t sgn32 (uint32_t arg1) {
    x0 = arg1;
    w8 = w0 >> 0x1f;
    __asm ("cinc w0, w8, gt");
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003a24 */
#include <stdint.h>
 
uint64_t sat_addu64b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x8 = x0 + x1;
    __asm ("csinv x0, x8, xzr, lo");
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003a30 */
#include <stdint.h>
 
uint64_t sat_subu64b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x8 = x0 - x1;
    x0 = (x8 < x0) ? 0 : x8;
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003a3c */
#include <stdint.h>
 
uint64_t sat_divu64b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x0 /= x1;
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003a44 */
#include <stdint.h>
 
uint64_t sat_mulu64b () {
    x8 = x0 * x1;
    x9 = x0 * x1;
    __asm ("csinv x0, x8, xzr, eq");
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003b7c */
#include <stdint.h>
 
uint64_t sat_muls64b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x8 = x1 * x0;
    __asm ("smulh x9, x1, x0");
    x10 = x1 ^ x0;
    x11 = 0x8000000000000000;
    x10 = x11 + (x10 >> 63);
    x0 = (x9 == x8) ? x8 : x10;
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003b1c */
#include <stdint.h>
 
uint64_t sat_adds64b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x8 = 0x8000000000000000;
    x8 += (x0 >> 63);
    x9 = x8 ^ x1;
    x10 = x1 + x0;
    x11 = x10 ^ x1;
    x9 |= x11;
    x9 = ~x9;
    x0 = (x9 >= 0) ? x8 : x10;
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003b40 */
#include <stdint.h>
 
uint64_t sat_subs64b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x8 = 0x8000000000000000;
    x8 += (x0 >> 63);
    x9 = x8 ^ x1;
    x10 = x0 - x1;
    x11 = x8 ^ x10;
    x0 = ((x9 & x11) < 0) ? x8 : x10;
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003b60 */
#include <stdint.h>
 
uint64_t sat_divs64b (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x8 = x1 + 1;
    x9 = x0 ^ 0x8000000000000000;
    x8 |= x9;
    __asm ("cinc x8, x0, eq");
    x0 = x8 / x1;
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003ba8 */
#include <stdint.h>
 
uint64_t abs64 (uint32_t arg1) {
    x0 = arg1;
    __asm ("cneg x0, x0, mi");
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003bc4 */
#include <stdint.h>
 
uint64_t sgn64 (uint32_t arg1) {
    x0 = arg1;
    x8 = x0 >> 0x3f;
    __asm ("cinc x0, x8, gt");
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/arm64_macho/subject.exe @ 0x100003e30 */
#include <stdint.h>
 
void puts () {
    x16 = *(0x8);
    return uint64_t (*x16)() ();
}

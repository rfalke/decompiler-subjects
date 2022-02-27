/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100002844 */
#include <stdint.h>
 
int32_t main () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    /* [00] -r-x section size 3996 named 0.__TEXT.__text */
    *((sp + -0x20)) = x20;
    *((sp + -0x20 + 8)) = x19;
    *((sp + 0x10)) = x29;
    *((sp + 0x10 + 8)) = x30;
    x29 = sp + 0x10;
    x19 = sym._buffer;
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    full_write_with_str ();
    x0 = 0x100003840;
    x1 = 0x10000384f;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    full_store_with_byte_wise_st1 ();
    x0 = 0x100003863;
    x1 = 0x10000387a;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    full_store_with_8byte_wise_st1 ();
    x0 = 0x100003898;
    x1 = 0x1000038ae;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    half_store_with_8byte_wise_st1 ();
    x0 = 0x1000038cd;
    x1 = 0x1000038e3;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    full_store_2_regs_with_byte_wise_st1 ();
    x0 = 0x100003902;
    x1 = 0x100003921;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    full_store_4_regs_with_byte_wise_st1 ();
    x0 = 0x100003946;
    x1 = 0x100003975;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st1_one_byte_from_index_0 ();
    x0 = 0x10000399a;
    x1 = 0x1000039b1;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st1_one_byte_from_index_3 ();
    x0 = 0x1000039d4;
    x1 = 0x1000039eb;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st1_8_bytes_from_low ();
    x0 = 0x100003a0e;
    x1 = 0x100003a25;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st1_8_bytes_from_high ();
    x0 = 0x100003a43;
    x1 = 0x100003a5a;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    write_interleaved_bytes_from_2_regs ();
    x0 = 0x100003a79;
    x1 = 0x100003a96;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    write_interleaved_bytes_from_2_regs_half_ ();
    x0 = 0x100003aba;
    x1 = 0x100003ad5;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    write_interleaved_8_bytes_from_2_regs ();
    x0 = 0x100003b00;
    x1 = 0x100003b1b;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st2_write_2_bytes_from_2_regs ();
    x0 = 0x100003b41;
    x1 = 0x100003b5d;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st2_8_bytes_from_lows ();
    x0 = 0x100003b84;
    x1 = 0x100003ba0;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st2_8_bytes_from_highs ();
    x0 = 0x100003bbf;
    x1 = 0x100003bdb;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    write_interleaved_bytes_from_3_regs ();
    x0 = 0x100003bfb;
    x1 = 0x100003c20;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    write_interleaved_bytes_from_3_regs_half_ ();
    x0 = 0x100003c44;
    x1 = 0x100003c66;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    write_interleaved_8_bytes_from_3_regs ();
    x0 = 0x100003c91;
    x1 = 0x100003cb3;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st3_write_3_bytes_from_3_regs ();
    x0 = 0x100003cd9;
    x1 = 0x100003cfb;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st3_8_bytes_from_lows ();
    x0 = 0x100003d22;
    x1 = 0x100003d44;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st3_8_bytes_from_highs ();
    x0 = 0x100003d63;
    x1 = 0x100003d85;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    write_interleaved_bytes_from_4_regs ();
    x0 = 0x100003da5;
    x1 = 0x100003dd2;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    write_interleaved_bytes_from_4_regs_half_ ();
    x0 = 0x100003df6;
    x1 = 0x100003e1f;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    write_interleaved_8_bytes_from_4_regs ();
    x0 = 0x100003e4a;
    x1 = 0x100003e73;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st4_write_4_bytes_from_4_regs ();
    x0 = 0x100003e99;
    x1 = 0x100003ec1;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st4_8_bytes_from_lows ();
    x0 = 0x100003ee8;
    x1 = 0x100003f10;
    dump ();
    v0.16b = 0xee;
    *((x19 + 0x20)) = q0;
    *((x19 + 0x20 + 16)) = q0;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x0 = x19;
    indexed_st4_8_bytes_from_highs ();
    x0 = 0x100003f2f;
    x1 = 0x100003f57;
    dump ();
    w0 = 0x0;
    x29 = *((sp + 0x10));
    x30 = *((sp + 0x10 + 8));
    x20 = *(sp);
    x19 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100002eb0 */
#include <stdint.h>
 
uint32_t full_write_with_str (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    *(x0) = q0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100002cc8 */
#include <stdint.h>
 
void dump (int64_t arg_30h, int64_t arg1, int64_t arg2) {
    int64_t var_0h;
    int64_t var_0h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    x1 = arg2;
    *((sp + 0x10)) = x20;
    *((sp + 0x10 + 8)) = x19;
    *((sp + 0x20)) = x29;
    *((sp + 0x20 + 8)) = x30;
    x29 = sp + 0x20;
    *(sp) = x0;
    *((sp + 8)) = x1;
    x0 = 0x100003f77;
    printf (x0);
    x0 = 0x100003f98;
    puts ("memory (rev):");
    *(sp) = 0;
    x19 = 0x100003f88;
    x0 = x19;
    printf (x0);
    w0 = 0x8;
    print_word ();
    w0 = 0x20;
    putchar (w0);
    w0 = 0x0;
    print_word ();
    w0 = 0xa;
    putchar (w0);
    w8 = 0x1;
    *(sp) = x8;
    x0 = x19;
    printf (x0);
    w0 = 0x18;
    print_word ();
    w0 = 0x20;
    putchar (w0);
    w0 = 0x10;
    print_word ();
    w0 = 0xa;
    putchar (w0);
    w8 = 0x2;
    *(sp) = x8;
    x0 = x19;
    printf (x0);
    w0 = 0x28;
    print_word ();
    w0 = 0x20;
    putchar (w0);
    w0 = 0x20;
    print_word ();
    w0 = 0xa;
    putchar (w0);
    w8 = 0x3;
    *(sp) = x8;
    x0 = x19;
    printf (x0);
    w0 = 0x38;
    print_word ();
    w0 = 0x20;
    putchar (w0);
    w0 = 0x30;
    print_word ();
    w0 = 0xa;
    putchar (w0);
    w0 = 0xa;
    x29 = *((sp + 0x20));
    x30 = *((sp + 0x20 + 8));
    x20 = *((sp + 0x10));
    x19 = *((sp + 0x10 + 8));
    return void (*0x1000037ec)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000037e4 */
#include <stdint.h>
 
void fcn_1000037e4 () {
    x16 = fcn.10000381c;
    return uint64_t (*x16)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000037fc */
#include <stdint.h>
 
void fcn_1000037fc () {
    x16 = fcn.100003834;
    return uint64_t (*x16)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000037e0 */
#include <stdint.h>
 
void printf () {
    /* [01] -r-x section size 36 named 1.__TEXT.__stubs */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100002dcc */
#include <stdint.h>
 
void print_word (int64_t arg_40h, int64_t arg1) {
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    *((sp + 0x10)) = x22;
    *((sp + 0x10 + 8)) = x21;
    *((sp + 0x20)) = x20;
    *((sp + 0x20 + 8)) = x19;
    *((sp + 0x30)) = x29;
    *((sp + 0x30 + 8)) = x30;
    x29 = sp + 0x30;
    x19 = x0;
    x0 = 0x100003f90;
    printf (x0);
    w8 = w19 + 7;
    x21 = sym._buffer;
    offset_0 = w8 << 32;
    w8 = *((x21 + offset_0));
    *(sp) = x8;
    x20 = 0x100003f93;
    x0 = x20;
    printf (x0);
    w8 = w19 + 6;
    offset_1 = w8 << 32;
    w8 = *((x21 + offset_1));
    *(sp) = x8;
    x0 = x20;
    printf (x0);
    w8 = w19 + 5;
    offset_2 = w8 << 32;
    w8 = *((x21 + offset_2));
    *(sp) = x8;
    x0 = x20;
    printf (x0);
    w8 = w19 + 4;
    offset_3 = w8 << 32;
    w8 = *((x21 + offset_3));
    *(sp) = x8;
    x0 = x20;
    printf (x0);
    w8 = w19 + 3;
    offset_4 = w8 << 32;
    w8 = *((x21 + offset_4));
    *(sp) = x8;
    x0 = x20;
    printf (x0);
    w8 = w19 + 2;
    offset_5 = w8 << 32;
    w8 = *((x21 + offset_5));
    *(sp) = x8;
    x0 = x20;
    printf (x0);
    w8 = w19 + 1;
    offset_6 = w8 << 32;
    w8 = *((x21 + offset_6));
    *(sp) = x8;
    x0 = x20;
    printf (x0);
    offset_7 = w19 << 32;
    w8 = *((x21 + offset_7));
    *(sp) = x8;
    x0 = x20;
    printf (x0);
    x29 = *((sp + 0x30));
    x30 = *((sp + 0x30 + 8));
    x20 = *((sp + 0x20));
    x19 = *((sp + 0x20 + 8));
    x22 = *((sp + 0x10));
    x21 = *((sp + 0x10 + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000037f0 */
#include <stdint.h>
 
void fcn_1000037f0 () {
    x16 = fcn.100003828;
    return uint64_t (*x16)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000037ec */
#include <stdint.h>
 
void putchar () {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100002f04 */
#include <stdint.h>
 
uint32_t full_store_with_byte_wise_st1 (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st1 {v0.16b}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100002f58 */
#include <stdint.h>
 
uint32_t full_store_with_8byte_wise_st1 (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st1 {v0.2d}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100002fac */
#include <stdint.h>
 
uint32_t half_store_with_8byte_wise_st1 (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st1 {v0.1d}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100003000 */
#include <stdint.h>
 
uint32_t full_store_2_regs_with_byte_wise_st1 (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st1 {v0.16b, v1.16b}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100003054 */
#include <stdint.h>
 
uint32_t full_store_4_regs_with_byte_wise_st1 (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st1 {v0.16b, v1.16b, v2.16b, v3.16b}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000030a8 */
#include <stdint.h>
 
uint32_t indexed_st1_one_byte_from_index_0 (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st1 {v0.b}[0], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000030fc */
#include <stdint.h>
 
uint32_t indexed_st1_one_byte_from_index_3 (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st1 {v0.b}[3], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100003150 */
#include <stdint.h>
 
uint32_t indexed_st1_8_bytes_from_low (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st1 {v0.d}[0], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000031a4 */
#include <stdint.h>
 
uint32_t indexed_st1_8_bytes_from_high (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st1 {v0.d}[1], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000031f8 */
#include <stdint.h>
 
uint32_t write_interleaved_bytes_from_2_regs (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st2 {v0.16b, v1.16b}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x10000324c */
#include <stdint.h>
 
uint32_t write_interleaved_bytes_from_2_regs_half_ (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st2 {v0.8b, v1.8b}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000032a0 */
#include <stdint.h>
 
uint32_t write_interleaved_8_bytes_from_2_regs (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st2 {v0.2d, v1.2d}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000032f4 */
#include <stdint.h>
 
uint32_t indexed_st2_write_2_bytes_from_2_regs (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st2 {v0.b, v1.b}[9], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100003348 */
#include <stdint.h>
 
uint32_t indexed_st2_8_bytes_from_lows (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st2 {v0.d, v1.d}[0], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x10000339c */
#include <stdint.h>
 
uint32_t indexed_st2_8_bytes_from_highs (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st2 {v0.d, v1.d}[1], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000033f0 */
#include <stdint.h>
 
uint32_t write_interleaved_bytes_from_3_regs (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st3 {v0.16b, v1.16b, v2.16b}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100003444 */
#include <stdint.h>
 
uint32_t write_interleaved_bytes_from_3_regs_half_ (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st3 {v0.8b, v1.8b, v2.8b}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100003498 */
#include <stdint.h>
 
uint32_t write_interleaved_8_bytes_from_3_regs (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st3 {v0.2d, v1.2d, v2.2d}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000034ec */
#include <stdint.h>
 
uint32_t indexed_st3_write_3_bytes_from_3_regs (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st3 {v0.b, v1.b, v2.b}[9], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100003540 */
#include <stdint.h>
 
uint32_t indexed_st3_8_bytes_from_lows (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st3 {v0.d, v1.d, v2.d}[0], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100003594 */
#include <stdint.h>
 
uint32_t indexed_st3_8_bytes_from_highs (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st3 {v0.d, v1.d, v2.d}[1], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000035e8 */
#include <stdint.h>
 
uint32_t write_interleaved_bytes_from_4_regs (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st4 {v0.16b, v1.16b, v2.16b, v3.16b}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x10000363c */
#include <stdint.h>
 
uint32_t write_interleaved_bytes_from_4_regs_half_ (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st4 {v0.8b, v1.8b, v2.8b, v3.8b}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100003690 */
#include <stdint.h>
 
uint32_t write_interleaved_8_bytes_from_4_regs (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st4 {v0.2d, v1.2d, v2.2d, v3.2d}, [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000036e4 */
#include <stdint.h>
 
uint32_t indexed_st4_write_4_bytes_from_4_regs (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st4 {v0.b, v1.b, v2.b, v3.b}[9], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100003738 */
#include <stdint.h>
 
uint32_t indexed_st4_8_bytes_from_lows (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st4 {v0.d, v1.d, v2.d, v3.d}[0], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x10000378c */
#include <stdint.h>
 
uint32_t indexed_st4_8_bytes_from_highs (int64_t arg1) {
    x0 = arg1;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x13120000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x151400000000;
    x3 = 0x1716151413121110;
    d0 = x3;
    x3 &= 0xffffffff0000ffff;
    x3 |= 0x1b1a0000;
    x3 &= 0xffff0000ffffffff;
    x3 |= 0x1d1c00000000;
    x3 = 0x1f1e1d1c1b1a1918;
    v0.d = 1;
    v4.16b = 0x10;
    v1.16b = v0.16b + v4.16b;
    v2.16b = v1.16b + v4.16b;
    v3.16b = v2.16b + v4.16b;
    __asm ("st4 {v0.d, v1.d, v2.d, v3.d}[1], [x0]");
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x1000037f8 */
#include <stdint.h>
 
void puts () {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x10000381c */
#include <stdint.h>
 
void fcn_10000381c () {
    do {
        /* [02] -r-x section size 60 named 2.__TEXT.__stub_helper */
        x17 = sym.__dyld_private;
        *((sp + -0x10)) = x16;
        *((sp + -0x10 + 8)) = x17;
        x16 = reloc.dyld_stub_binder;
        uint64_t (*x16)() ();
        w16 = *(0x100003824);
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100003834 */
#include <stdint.h>
 
void fcn_100003834 () {
    w16 = *(0x10000383c);
    return void (*0x100003804)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_stX/subject.exe @ 0x100003828 */
#include <stdint.h>
 
void fcn_100003828 () {
    w16 = *(0x100003830);
    return void (*0x100003804)() ();
}

/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100001fcc */
#include <stdint.h>
 
int32_t main () {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    /* [00] -r-x section size 5620 named 0.__TEXT.__text */
    *((sp + -0x30)) = x22;
    *((sp + -0x30 + 8)) = x21;
    *((sp + 0x10)) = x20;
    *((sp + 0x10 + 8)) = x19;
    *((sp + 0x20)) = x29;
    *((sp + 0x20 + 8)) = x30;
    x29 = sp + 0x20;
    x19 = sym._high;
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    x20 = sym._low;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x21 = 0x100008018;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    full_load_with_ldr ();
    x0 = 0x100003608;
    x1 = 0x100003617;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    full_load_with_byte_wise_ld1 ();
    x0 = 0x10000362a;
    x1 = 0x100003641;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    full_load_with_8byte_wise_ld1 ();
    x0 = 0x10000365e;
    x1 = 0x100003674;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    half_load_with_8byte_wise_ld1 ();
    x0 = 0x100003692;
    x1 = 0x1000036a8;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    full_load_2_regs_with_byte_wise_ld1 ();
    x0 = 0x1000036c6;
    x1 = 0x1000036e5;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    full_load_4_regs_with_byte_wise_ld1 ();
    x0 = 0x100003709;
    x1 = 0x100003738;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld1_one_byte_at_index_0 ();
    x0 = 0x10000375c;
    x1 = 0x100003773;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld1_one_byte_at_index_3 ();
    x0 = 0x100003794;
    x1 = 0x1000037ab;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld1_8_bytes_to_low ();
    x0 = 0x1000037cc;
    x1 = 0x1000037e3;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld1_8_bytes_to_high ();
    x0 = 0x1000037ff;
    x1 = 0x100003816;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    repeating_ld1_repeat_first_byte_half ();
    x0 = 0x100003833;
    x1 = 0x100003848;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    repeating_ld1_repeat_first_byte_full ();
    x0 = 0x10000386e;
    x1 = 0x100003884;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    repeating_ld1_load_first_8_bytes_into_low ();
    x0 = 0x1000038aa;
    x1 = 0x1000038bf;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    repeating_ld1_repeat_8_bytes_to_high ();
    x0 = 0x1000038ea;
    x1 = 0x1000038ff;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    ld2_spread_bytes_to_2_regs ();
    x0 = 0x100003925;
    x1 = 0x100003942;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    ld2_spread_bytes_to_2_regs_half_ ();
    x0 = 0x10000395d;
    x1 = 0x100003978;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    ld2_spread_8_bytes_items_to_2_regs ();
    x0 = 0x10000399a;
    x1 = 0x1000039b5;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld2_first_2_bytes_to_2_regs ();
    x0 = 0x1000039d8;
    x1 = 0x1000039f4;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld2_8_bytes_into_lows ();
    x0 = 0x100003a19;
    x1 = 0x100003a35;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld2_8_bytes_to_highs ();
    x0 = 0x100003a54;
    x1 = 0x100003a70;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    repeating_ld2_first_bytes_full ();
    x0 = 0x100003a8e;
    x1 = 0x100003aac;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    repeating_ld2_2_bytes_half ();
    x0 = 0x100003acc;
    x1 = 0x100003ae8;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    ld3_spread_bytes_to_3_regs ();
    x0 = 0x100003b04;
    x1 = 0x100003b29;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    ld3_spread_bytes_to_3_regs_half_ ();
    x0 = 0x100003b44;
    x1 = 0x100003b66;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    ld3_spread_8_bytes_items_to_3_regs ();
    x0 = 0x100003b88;
    x1 = 0x100003baa;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld3_first_2_bytes_to_3_regs ();
    x0 = 0x100003bcd;
    x1 = 0x100003bef;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld3_8_bytes_into_lows ();
    x0 = 0x100003c14;
    x1 = 0x100003c36;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld3_8_bytes_to_highs ();
    x0 = 0x100003c55;
    x1 = 0x100003c77;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    repeating_ld3_first_bytes_full ();
    x0 = 0x100003c95;
    x1 = 0x100003cbb;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    repeating_ld3_2_bytes_half ();
    x0 = 0x100003cdb;
    x1 = 0x100003cfe;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    ld4_spread_bytes_to_4_regs ();
    x0 = 0x100003d1a;
    x1 = 0x100003d47;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    ld4_spread_bytes_to_4_regs_half_ ();
    x0 = 0x100003d62;
    x1 = 0x100003d8b;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    ld4_spread_8_bytes_items_to_4_regs ();
    x0 = 0x100003dad;
    x1 = 0x100003dd6;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld4_first_2_bytes_to_4_regs ();
    x0 = 0x100003df9;
    x1 = 0x100003e21;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld4_8_bytes_into_lows ();
    x0 = 0x100003e46;
    x1 = 0x100003e6e;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    indexed_ld4_8_bytes_to_highs ();
    x0 = 0x100003e8d;
    x1 = 0x100003eb5;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    repeating_ld4_first_bytes_full ();
    x0 = 0x100003ed3;
    x1 = 0x100003f01;
    dump ();
    v0.16b = 0xee;
    *(x19) = q0;
    *((x19 + 16)) = q0;
    *(x20) = q0;
    *((x20 + 16)) = q0;
    x0 = x21;
    x1 = x19;
    x2 = x20;
    repeating_ld4_2_bytes_half ();
    x0 = 0x100003f21;
    x1 = 0x100003f4b;
    dump ();
    w0 = 0x0;
    x29 = *((sp + 0x20));
    x30 = *((sp + 0x20 + 8));
    x20 = *((sp + 0x10));
    x19 = *((sp + 0x10 + 8));
    x22 = *(sp);
    x21 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002818 */
#include <stdint.h>
 
uint32_t full_load_with_ldr (int64_t arg1, int64_t arg2, int64_t arg3) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    q0 = *(x0);
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002728 */
#include <stdint.h>
 
void dump (int64_t arg_40h, int64_t arg1, int64_t arg2) {
    int64_t var_0h;
    int64_t var_0h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    x1 = arg2;
    *((sp + 0x20)) = x20;
    *((sp + 0x20 + 8)) = x19;
    *((sp + 0x30)) = x29;
    *((sp + 0x30 + 8)) = x30;
    x29 = sp + 0x30;
    *(sp) = x0;
    *((sp + 8)) = x1;
    x0 = 0x100003f67;
    printf (x0);
    x19 = sym._high;
    x8 = *(x19);
    x20 = sym._low;
    x9 = *(x20);
    x10 = x8 & x9;
    if (x10 != 1) {
        *(sp) = 0;
        *((sp + 8)) = 0;
        *((sp + 0x10)) = x8;
        *((sp + 0x10 + 8)) = x9;
        x0 = 0x100003f78;
        printf ("V%d(=Q%d)   (high/low):   0x%016lx 0x%016lx\n");
    }
    x8 = *((x19 + 8));
    x9 = *((x20 + 8));
    x10 = x8 & x9;
    if (x10 != 1) {
        *((sp + 0x10)) = x8;
        *((sp + 0x10 + 8)) = x9;
        w8 = 0x1;
        *(sp) = x8;
        *((sp + 8)) = x8;
        x0 = 0x100003f78;
        printf ("V%d(=Q%d)   (high/low):   0x%016lx 0x%016lx\n");
    }
    x8 = *((x19 + 0x10));
    x9 = *((x20 + 0x10));
    x10 = x8 & x9;
    if (x10 != 1) {
        *((sp + 0x10)) = x8;
        *((sp + 0x10 + 8)) = x9;
        w8 = 0x2;
        *(sp) = x8;
        *((sp + 8)) = x8;
        x0 = 0x100003f78;
        printf ("V%d(=Q%d)   (high/low):   0x%016lx 0x%016lx\n");
    }
    x8 = *((x19 + 0x18));
    x9 = *((x20 + 0x18));
    x10 = x8 & x9;
    if (x10 != 1) {
        *((sp + 0x10)) = x8;
        *((sp + 0x10 + 8)) = x9;
        w8 = 0x3;
        *(sp) = x8;
        *((sp + 8)) = x8;
        x0 = 0x100003f78;
        printf ("V%d(=Q%d)   (high/low):   0x%016lx 0x%016lx\n");
    }
    w0 = 0xa;
    x29 = *((sp + 0x30));
    x30 = *((sp + 0x30 + 8));
    x20 = *((sp + 0x20));
    x19 = *((sp + 0x20 + 8));
    return void (*0x1000035cc)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002874 */
#include <stdint.h>
 
uint32_t full_load_with_byte_wise_ld1 (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1 {v0.16b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x1000028d0 */
#include <stdint.h>
 
uint32_t full_load_with_8byte_wise_ld1 (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1 {v0.2d}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x10000292c */
#include <stdint.h>
 
uint32_t half_load_with_8byte_wise_ld1 (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1 {v0.1d}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002988 */
#include <stdint.h>
 
uint32_t full_load_2_regs_with_byte_wise_ld1 (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1 {v0.16b, v1.16b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x1000029e4 */
#include <stdint.h>
 
uint32_t full_load_4_regs_with_byte_wise_ld1 (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1 {v0.16b, v1.16b, v2.16b, v3.16b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002a40 */
#include <stdint.h>
 
uint32_t indexed_ld1_one_byte_at_index_0 (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1 {v0.b}[0], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002a9c */
#include <stdint.h>
 
uint32_t indexed_ld1_one_byte_at_index_3 (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1 {v0.b}[3], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002af8 */
#include <stdint.h>
 
uint32_t indexed_ld1_8_bytes_to_low (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1 {v0.d}[0], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002b54 */
#include <stdint.h>
 
uint32_t indexed_ld1_8_bytes_to_high (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1 {v0.d}[1], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002bb0 */
#include <stdint.h>
 
uint32_t repeating_ld1_repeat_first_byte_half (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1r {v0.8b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002c0c */
#include <stdint.h>
 
uint32_t repeating_ld1_repeat_first_byte_full (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1r {v0.16b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002c68 */
#include <stdint.h>
 
uint32_t repeating_ld1_load_first_8_bytes_into_low (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1r {v0.1d}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002cc4 */
#include <stdint.h>
 
uint32_t repeating_ld1_repeat_8_bytes_to_high (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld1r {v0.2d}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002d20 */
#include <stdint.h>
 
uint32_t ld2_spread_bytes_to_2_regs (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld2 {v0.16b, v1.16b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002d7c */
#include <stdint.h>
 
uint32_t ld2_spread_bytes_to_2_regs_half_ (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld2 {v0.8b, v1.8b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002dd8 */
#include <stdint.h>
 
uint32_t ld2_spread_8_bytes_items_to_2_regs (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld2 {v0.2d, v1.2d}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002e34 */
#include <stdint.h>
 
uint32_t indexed_ld2_first_2_bytes_to_2_regs (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld2 {v0.b, v1.b}[9], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002e90 */
#include <stdint.h>
 
uint32_t indexed_ld2_8_bytes_into_lows (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld2 {v0.d, v1.d}[0], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002eec */
#include <stdint.h>
 
uint32_t indexed_ld2_8_bytes_to_highs (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld2 {v0.d, v1.d}[1], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002f48 */
#include <stdint.h>
 
uint32_t repeating_ld2_first_bytes_full (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld2r {v0.16b, v1.16b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100002fa4 */
#include <stdint.h>
 
uint32_t repeating_ld2_2_bytes_half (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld2r {v0.4h, v1.4h}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100003000 */
#include <stdint.h>
 
uint32_t ld3_spread_bytes_to_3_regs (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld3 {v0.16b, v1.16b, v2.16b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x10000305c */
#include <stdint.h>
 
uint32_t ld3_spread_bytes_to_3_regs_half_ (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld3 {v0.8b, v1.8b, v2.8b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x1000030b8 */
#include <stdint.h>
 
uint32_t ld3_spread_8_bytes_items_to_3_regs (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld3 {v0.2d, v1.2d, v2.2d}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100003114 */
#include <stdint.h>
 
uint32_t indexed_ld3_first_2_bytes_to_3_regs (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld3 {v0.b, v1.b, v2.b}[9], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100003170 */
#include <stdint.h>
 
uint32_t indexed_ld3_8_bytes_into_lows (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld3 {v0.d, v1.d, v2.d}[0], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x1000031cc */
#include <stdint.h>
 
uint32_t indexed_ld3_8_bytes_to_highs (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld3 {v0.d, v1.d, v2.d}[1], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100003228 */
#include <stdint.h>
 
uint32_t repeating_ld3_first_bytes_full (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld3r {v0.16b, v1.16b, v2.16b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100003284 */
#include <stdint.h>
 
uint32_t repeating_ld3_2_bytes_half (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld3r {v0.4h, v1.4h, v2.4h}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x1000032e0 */
#include <stdint.h>
 
uint32_t ld4_spread_bytes_to_4_regs (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld4 {v0.16b, v1.16b, v2.16b, v3.16b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x10000333c */
#include <stdint.h>
 
uint32_t ld4_spread_bytes_to_4_regs_half_ (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld4 {v0.8b, v1.8b, v2.8b, v3.8b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100003398 */
#include <stdint.h>
 
uint32_t ld4_spread_8_bytes_items_to_4_regs (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld4 {v0.2d, v1.2d, v2.2d, v3.2d}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x1000033f4 */
#include <stdint.h>
 
uint32_t indexed_ld4_first_2_bytes_to_4_regs (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld4 {v0.b, v1.b, v2.b, v3.b}[9], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100003450 */
#include <stdint.h>
 
uint32_t indexed_ld4_8_bytes_into_lows (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld4 {v0.d, v1.d, v2.d, v3.d}[0], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x1000034ac */
#include <stdint.h>
 
uint32_t indexed_ld4_8_bytes_to_highs (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld4 {v0.d, v1.d, v2.d, v3.d}[1], [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100003508 */
#include <stdint.h>
 
uint32_t repeating_ld4_first_bytes_full (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld4r {v0.16b, v1.16b, v2.16b, v3.16b}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x100003564 */
#include <stdint.h>
 
uint32_t repeating_ld4_2_bytes_half (int64_t arg2, int64_t arg3) {
    x1 = arg2;
    x2 = arg3;
    __asm ("cmeq v0.16b, v0.16b, v0.16b");
    __asm ("cmeq v1.16b, v1.16b, v1.16b");
    __asm ("cmeq v2.16b, v2.16b, v2.16b");
    __asm ("cmeq v3.16b, v3.16b, v3.16b");
    __asm ("ld4r {v0.4h, v1.4h, v2.4h, v3.4h}, [x0]");
    x0 = v0.d;
    *(x1) = x0;
    x0 = d0;
    *(x2) = x0;
    x0 = v1.d;
    *((x1 + 8)) = x0;
    x0 = d1;
    *((x2 + 8)) = x0;
    x0 = v2.d;
    *((x1 + 0x10)) = x0;
    x0 = d2;
    *((x2 + 0x10)) = x0;
    x0 = v3.d;
    *((x1 + 0x18)) = x0;
    x0 = d3;
    *((x2 + 0x18)) = x0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x1000035c4 */
#include <stdint.h>
 
void fcn_1000035c4 () {
    x16 = fcn.1000035f0;
    return uint64_t (*x16)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x1000035d0 */
#include <stdint.h>
 
void fcn_1000035d0 () {
    x16 = fcn.1000035fc;
    return uint64_t (*x16)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x1000035c0 */
#include <stdint.h>
 
void printf () {
    /* [01] -r-x section size 24 named 1.__TEXT.__stubs */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x1000035f0 */
#include <stdint.h>
 
void fcn_1000035f0 () {
    do {
        /* [02] -r-x section size 48 named 2.__TEXT.__stub_helper */
        x17 = sym.__dyld_private;
        *((sp + -0x10)) = x16;
        *((sp + -0x10 + 8)) = x17;
        x16 = reloc.dyld_stub_binder;
        uint64_t (*x16)() ();
        w16 = *(0x1000035f8);
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_ldX/subject.exe @ 0x1000035fc */
#include <stdint.h>
 
void fcn_1000035fc () {
    w16 = *(0x100003604);
    return void (*0x1000035d8)() ();
}

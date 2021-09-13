// Decompiled by holdec

// address: 0100002818.0
// full-signature: func(_full_load_with_ldr, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _full_load_with_ldr(d1* src, d8* highs, d8* lows)
{
  reg_a = NARROW(LOAD(src));
  (void) STORE(highs, NARROW(LOAD(src) / 18446744073709551616));
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002874.0
// full-signature: func(_full_load_with_byte_wise_ld1, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _full_load_with_byte_wise_ld1(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src + 1)) * 256 | WIDEN(LOAD(src + 2)) * 65536 | WIDEN(LOAD(src + 3)) * 16777216 | WIDEN(LOAD(src + 4)) * 4294967296 | WIDEN(LOAD(src + 5)) * 1099511627776 | WIDEN(LOAD(src + 6)) * 281474976710656 | WIDEN(LOAD(src + 7)) * 72057594037927936 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 9)) * 256 | WIDEN(LOAD(src + 10)) * 65536 | WIDEN(LOAD(src + 11)) * 16777216 | WIDEN(LOAD(src + 12)) * 4294967296 | WIDEN(LOAD(src + 13)) * 1099511627776 | WIDEN(LOAD(src + 14)) * 281474976710656 | WIDEN(LOAD(src + 15)) * 72057594037927936 | WIDEN(LOAD(src + 8));
  (void) STORE(highs, reg_b);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 01000028d0.0
// full-signature: func(_full_load_with_8byte_wise_ld1, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _full_load_with_8byte_wise_ld1(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src);
  (void) STORE(highs, LOAD(src + 8));
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 010000292c.0
// full-signature: func(_half_load_with_8byte_wise_ld1, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _half_load_with_8byte_wise_ld1(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src);
  (void) STORE(highs, 0);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002988.0
// full-signature: func(_full_load_2_regs_with_byte_wise_ld1, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _full_load_2_regs_with_byte_wise_ld1(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src + 1)) * 256 | WIDEN(LOAD(src + 2)) * 65536 | WIDEN(LOAD(src + 3)) * 16777216 | WIDEN(LOAD(src + 4)) * 4294967296 | WIDEN(LOAD(src + 5)) * 1099511627776 | WIDEN(LOAD(src + 6)) * 281474976710656 | WIDEN(LOAD(src + 7)) * 72057594037927936 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 9)) * 256 | WIDEN(LOAD(src + 10)) * 65536 | WIDEN(LOAD(src + 11)) * 16777216 | WIDEN(LOAD(src + 12)) * 4294967296 | WIDEN(LOAD(src + 13)) * 1099511627776 | WIDEN(LOAD(src + 14)) * 281474976710656 | WIDEN(LOAD(src + 15)) * 72057594037927936 | WIDEN(LOAD(src + 8));
  reg_c = WIDEN(LOAD(src + 17)) * 256 | WIDEN(LOAD(src + 18)) * 65536 | WIDEN(LOAD(src + 19)) * 16777216 | WIDEN(LOAD(src + 20)) * 4294967296 | WIDEN(LOAD(src + 21)) * 1099511627776 | WIDEN(LOAD(src + 22)) * 281474976710656 | WIDEN(LOAD(src + 23)) * 72057594037927936 | WIDEN(LOAD(src + 16));
  reg_d = WIDEN(LOAD(src + 25)) * 256 | WIDEN(LOAD(src + 26)) * 65536 | WIDEN(LOAD(src + 27)) * 16777216 | WIDEN(LOAD(src + 28)) * 4294967296 | WIDEN(LOAD(src + 29)) * 1099511627776 | WIDEN(LOAD(src + 30)) * 281474976710656 | WIDEN(LOAD(src + 31)) * 72057594037927936 | WIDEN(LOAD(src + 24));
  (void) STORE(highs, reg_b);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, reg_d);
  (void) STORE(lows + 8, reg_c);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 01000029e4.0
// full-signature: func(_full_load_4_regs_with_byte_wise_ld1, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _full_load_4_regs_with_byte_wise_ld1(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src + 1)) * 256 | WIDEN(LOAD(src + 2)) * 65536 | WIDEN(LOAD(src + 3)) * 16777216 | WIDEN(LOAD(src + 4)) * 4294967296 | WIDEN(LOAD(src + 5)) * 1099511627776 | WIDEN(LOAD(src + 6)) * 281474976710656 | WIDEN(LOAD(src + 7)) * 72057594037927936 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 9)) * 256 | WIDEN(LOAD(src + 10)) * 65536 | WIDEN(LOAD(src + 11)) * 16777216 | WIDEN(LOAD(src + 12)) * 4294967296 | WIDEN(LOAD(src + 13)) * 1099511627776 | WIDEN(LOAD(src + 14)) * 281474976710656 | WIDEN(LOAD(src + 15)) * 72057594037927936 | WIDEN(LOAD(src + 8));
  reg_c = WIDEN(LOAD(src + 17)) * 256 | WIDEN(LOAD(src + 18)) * 65536 | WIDEN(LOAD(src + 19)) * 16777216 | WIDEN(LOAD(src + 20)) * 4294967296 | WIDEN(LOAD(src + 21)) * 1099511627776 | WIDEN(LOAD(src + 22)) * 281474976710656 | WIDEN(LOAD(src + 23)) * 72057594037927936 | WIDEN(LOAD(src + 16));
  reg_d = WIDEN(LOAD(src + 25)) * 256 | WIDEN(LOAD(src + 26)) * 65536 | WIDEN(LOAD(src + 27)) * 16777216 | WIDEN(LOAD(src + 28)) * 4294967296 | WIDEN(LOAD(src + 29)) * 1099511627776 | WIDEN(LOAD(src + 30)) * 281474976710656 | WIDEN(LOAD(src + 31)) * 72057594037927936 | WIDEN(LOAD(src + 24));
  reg_e = WIDEN(LOAD(src + 33)) * 256 | WIDEN(LOAD(src + 34)) * 65536 | WIDEN(LOAD(src + 35)) * 16777216 | WIDEN(LOAD(src + 36)) * 4294967296 | WIDEN(LOAD(src + 37)) * 1099511627776 | WIDEN(LOAD(src + 38)) * 281474976710656 | WIDEN(LOAD(src + 39)) * 72057594037927936 | WIDEN(LOAD(src + 32));
  reg_f = WIDEN(LOAD(src + 41)) * 256 | WIDEN(LOAD(src + 42)) * 65536 | WIDEN(LOAD(src + 43)) * 16777216 | WIDEN(LOAD(src + 44)) * 4294967296 | WIDEN(LOAD(src + 45)) * 1099511627776 | WIDEN(LOAD(src + 46)) * 281474976710656 | WIDEN(LOAD(src + 47)) * 72057594037927936 | WIDEN(LOAD(src + 40));
  reg_g = WIDEN(LOAD(src + 49)) * 256 | WIDEN(LOAD(src + 50)) * 65536 | WIDEN(LOAD(src + 51)) * 16777216 | WIDEN(LOAD(src + 52)) * 4294967296 | WIDEN(LOAD(src + 53)) * 1099511627776 | WIDEN(LOAD(src + 54)) * 281474976710656 | WIDEN(LOAD(src + 55)) * 72057594037927936 | WIDEN(LOAD(src + 48));
  reg_h = WIDEN(LOAD(src + 57)) * 256 | WIDEN(LOAD(src + 58)) * 65536 | WIDEN(LOAD(src + 59)) * 16777216 | WIDEN(LOAD(src + 60)) * 4294967296 | WIDEN(LOAD(src + 61)) * 1099511627776 | WIDEN(LOAD(src + 62)) * 281474976710656 | WIDEN(LOAD(src + 63)) * 72057594037927936 | WIDEN(LOAD(src + 56));
  (void) STORE(highs, reg_b);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, reg_d);
  (void) STORE(lows + 8, reg_c);
  (void) STORE(highs + 16, reg_f);
  (void) STORE(lows + 16, reg_e);
  (void) STORE(highs + 24, reg_h);
  (void) STORE(lows + 24, reg_g);
}

// address: 0100002a40.0
// full-signature: func(_indexed_ld1__one_byte_at_index_0, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld1__one_byte_at_index_0(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src)) | 0xffffffffffffff00;
  (void) STORE(highs, -1);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002a9c.0
// full-signature: func(_indexed_ld1__one_byte_at_index_3, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld1__one_byte_at_index_3(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src)) * 16777216 | 0xffffffff00ffffff;
  (void) STORE(highs, -1);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002af8.0
// full-signature: func(_indexed_ld1__8_bytes_to_low, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld1__8_bytes_to_low(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src);
  (void) STORE(highs, -1);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002b54.0
// full-signature: func(_indexed_ld1__8_bytes_to_high, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld1__8_bytes_to_high(d1* src, d8* highs, d8* lows)
{
  (void) STORE(highs, LOAD(src));
  (void) STORE(lows, -1);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002bb0.0
// full-signature: func(_repeating_ld1__repeat_first_byte_half, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _repeating_ld1__repeat_first_byte_half(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src)) * 256 | WIDEN(LOAD(src)) * 65536 | WIDEN(LOAD(src)) * 16777216 | WIDEN(LOAD(src)) * 4294967296 | WIDEN(LOAD(src)) * 1099511627776 | WIDEN(LOAD(src)) * 281474976710656 | WIDEN(LOAD(src)) * 72057594037927936 | WIDEN(LOAD(src));
  (void) STORE(highs, 0);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002c0c.0
// full-signature: func(_repeating_ld1__repeat_first_byte_full, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _repeating_ld1__repeat_first_byte_full(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src)) * 256 | WIDEN(LOAD(src)) * 65536 | WIDEN(LOAD(src)) * 16777216 | WIDEN(LOAD(src)) * 4294967296 | WIDEN(LOAD(src)) * 1099511627776 | WIDEN(LOAD(src)) * 281474976710656 | WIDEN(LOAD(src)) * 72057594037927936 | WIDEN(LOAD(src));
  (void) STORE(highs, WIDEN(LOAD(src)) * 256 | WIDEN(LOAD(src)) * 65536 | WIDEN(LOAD(src)) * 16777216 | WIDEN(LOAD(src)) * 4294967296 | WIDEN(LOAD(src)) * 1099511627776 | WIDEN(LOAD(src)) * 281474976710656 | WIDEN(LOAD(src)) * 72057594037927936 | WIDEN(LOAD(src)));
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002c68.0
// full-signature: func(_repeating_ld1__load_first_8_bytes_into_low, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _repeating_ld1__load_first_8_bytes_into_low(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src);
  (void) STORE(highs, 0);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002cc4.0
// full-signature: func(_repeating_ld1__repeat_8_bytes_to_high, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _repeating_ld1__repeat_8_bytes_to_high(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src);
  (void) STORE(highs, LOAD(src));
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002d20.0
// full-signature: func(_ld2_spread_bytes_to_2_regs, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _ld2_spread_bytes_to_2_regs(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src + 2)) * 256 | WIDEN(LOAD(src + 4)) * 65536 | WIDEN(LOAD(src + 6)) * 16777216 | WIDEN(LOAD(src + 8)) * 4294967296 | WIDEN(LOAD(src + 10)) * 1099511627776 | WIDEN(LOAD(src + 12)) * 281474976710656 | WIDEN(LOAD(src + 14)) * 72057594037927936 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 18)) * 256 | WIDEN(LOAD(src + 20)) * 65536 | WIDEN(LOAD(src + 22)) * 16777216 | WIDEN(LOAD(src + 24)) * 4294967296 | WIDEN(LOAD(src + 26)) * 1099511627776 | WIDEN(LOAD(src + 28)) * 281474976710656 | WIDEN(LOAD(src + 30)) * 72057594037927936 | WIDEN(LOAD(src + 16));
  reg_c = WIDEN(LOAD(src + 3)) * 256 | WIDEN(LOAD(src + 5)) * 65536 | WIDEN(LOAD(src + 7)) * 16777216 | WIDEN(LOAD(src + 9)) * 4294967296 | WIDEN(LOAD(src + 11)) * 1099511627776 | WIDEN(LOAD(src + 13)) * 281474976710656 | WIDEN(LOAD(src + 15)) * 72057594037927936 | WIDEN(LOAD(src + 1));
  reg_d = WIDEN(LOAD(src + 19)) * 256 | WIDEN(LOAD(src + 21)) * 65536 | WIDEN(LOAD(src + 23)) * 16777216 | WIDEN(LOAD(src + 25)) * 4294967296 | WIDEN(LOAD(src + 27)) * 1099511627776 | WIDEN(LOAD(src + 29)) * 281474976710656 | WIDEN(LOAD(src + 31)) * 72057594037927936 | WIDEN(LOAD(src + 17));
  (void) STORE(highs, reg_b);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, reg_d);
  (void) STORE(lows + 8, reg_c);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002d7c.0
// full-signature: func(_ld2_spread_bytes_to_2_regs__half_, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _ld2_spread_bytes_to_2_regs__half_(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src + 2)) * 256 | WIDEN(LOAD(src + 4)) * 65536 | WIDEN(LOAD(src + 6)) * 16777216 | WIDEN(LOAD(src + 8)) * 4294967296 | WIDEN(LOAD(src + 10)) * 1099511627776 | WIDEN(LOAD(src + 12)) * 281474976710656 | WIDEN(LOAD(src + 14)) * 72057594037927936 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 3)) * 256 | WIDEN(LOAD(src + 5)) * 65536 | WIDEN(LOAD(src + 7)) * 16777216 | WIDEN(LOAD(src + 9)) * 4294967296 | WIDEN(LOAD(src + 11)) * 1099511627776 | WIDEN(LOAD(src + 13)) * 281474976710656 | WIDEN(LOAD(src + 15)) * 72057594037927936 | WIDEN(LOAD(src + 1));
  (void) STORE(highs, 0);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, 0);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002dd8.0
// full-signature: func(_ld2_spread_8_bytes_items_to_2_regs, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _ld2_spread_8_bytes_items_to_2_regs(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src);
  reg_b = LOAD(src + 8);
  reg_c = LOAD(src + 24);
  (void) STORE(highs, LOAD(src + 16));
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, reg_c);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002e34.0
// full-signature: func(_indexed_ld2__first_2_bytes_to_2_regs, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld2__first_2_bytes_to_2_regs(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src + 1)) * 256 | 0xffffffffffff00ff;
  (void) STORE(highs, WIDEN(LOAD(src)) * 256 | 0xffffffffffff00ff);
  (void) STORE(lows, -1);
  (void) STORE(highs + 8, reg_a);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002e90.0
// full-signature: func(_indexed_ld2__8_bytes_into_lows, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld2__8_bytes_into_lows(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src);
  reg_b = LOAD(src + 8);
  (void) STORE(highs, -1);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002eec.0
// full-signature: func(_indexed_ld2__8_bytes_to_highs, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld2__8_bytes_to_highs(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src + 8);
  (void) STORE(highs, LOAD(src));
  (void) STORE(lows, -1);
  (void) STORE(highs + 8, reg_a);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002f48.0
// full-signature: func(_repeating_ld2__first_bytes_full, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _repeating_ld2__first_bytes_full(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src)) * 256 | WIDEN(LOAD(src)) * 65536 | WIDEN(LOAD(src)) * 16777216 | WIDEN(LOAD(src)) * 4294967296 | WIDEN(LOAD(src)) * 1099511627776 | WIDEN(LOAD(src)) * 281474976710656 | WIDEN(LOAD(src)) * 72057594037927936 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 1)) * 256 | WIDEN(LOAD(src + 1)) * 65536 | WIDEN(LOAD(src + 1)) * 16777216 | WIDEN(LOAD(src + 1)) * 4294967296 | WIDEN(LOAD(src + 1)) * 1099511627776 | WIDEN(LOAD(src + 1)) * 281474976710656 | WIDEN(LOAD(src + 1)) * 72057594037927936 | WIDEN(LOAD(src + 1));
  (void) STORE(highs, WIDEN(LOAD(src)) * 256 | WIDEN(LOAD(src)) * 65536 | WIDEN(LOAD(src)) * 16777216 | WIDEN(LOAD(src)) * 4294967296 | WIDEN(LOAD(src)) * 1099511627776 | WIDEN(LOAD(src)) * 281474976710656 | WIDEN(LOAD(src)) * 72057594037927936 | WIDEN(LOAD(src)));
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, reg_b);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100002fa4.0
// full-signature: func(_repeating_ld2__2_bytes_half, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _repeating_ld2__2_bytes_half(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src)) * 65536 | WIDEN(LOAD(src)) * 4294967296 | WIDEN(LOAD(src)) * 281474976710656 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 2)) * 65536 | WIDEN(LOAD(src + 2)) * 4294967296 | WIDEN(LOAD(src + 2)) * 281474976710656 | WIDEN(LOAD(src + 2));
  (void) STORE(highs, 0);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, 0);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100003000.0
// full-signature: func(_ld3_spread_bytes_to_3_regs, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _ld3_spread_bytes_to_3_regs(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src + 3)) * 256 | WIDEN(LOAD(src + 6)) * 65536 | WIDEN(LOAD(src + 9)) * 16777216 | WIDEN(LOAD(src + 12)) * 4294967296 | WIDEN(LOAD(src + 15)) * 1099511627776 | WIDEN(LOAD(src + 18)) * 281474976710656 | WIDEN(LOAD(src + 21)) * 72057594037927936 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 27)) * 256 | WIDEN(LOAD(src + 30)) * 65536 | WIDEN(LOAD(src + 33)) * 16777216 | WIDEN(LOAD(src + 36)) * 4294967296 | WIDEN(LOAD(src + 39)) * 1099511627776 | WIDEN(LOAD(src + 42)) * 281474976710656 | WIDEN(LOAD(src + 45)) * 72057594037927936 | WIDEN(LOAD(src + 24));
  reg_c = WIDEN(LOAD(src + 4)) * 256 | WIDEN(LOAD(src + 7)) * 65536 | WIDEN(LOAD(src + 10)) * 16777216 | WIDEN(LOAD(src + 13)) * 4294967296 | WIDEN(LOAD(src + 16)) * 1099511627776 | WIDEN(LOAD(src + 19)) * 281474976710656 | WIDEN(LOAD(src + 22)) * 72057594037927936 | WIDEN(LOAD(src + 1));
  reg_d = WIDEN(LOAD(src + 28)) * 256 | WIDEN(LOAD(src + 31)) * 65536 | WIDEN(LOAD(src + 34)) * 16777216 | WIDEN(LOAD(src + 37)) * 4294967296 | WIDEN(LOAD(src + 40)) * 1099511627776 | WIDEN(LOAD(src + 43)) * 281474976710656 | WIDEN(LOAD(src + 46)) * 72057594037927936 | WIDEN(LOAD(src + 25));
  reg_e = WIDEN(LOAD(src + 5)) * 256 | WIDEN(LOAD(src + 8)) * 65536 | WIDEN(LOAD(src + 11)) * 16777216 | WIDEN(LOAD(src + 14)) * 4294967296 | WIDEN(LOAD(src + 17)) * 1099511627776 | WIDEN(LOAD(src + 20)) * 281474976710656 | WIDEN(LOAD(src + 23)) * 72057594037927936 | WIDEN(LOAD(src + 2));
  reg_f = WIDEN(LOAD(src + 29)) * 256 | WIDEN(LOAD(src + 32)) * 65536 | WIDEN(LOAD(src + 35)) * 16777216 | WIDEN(LOAD(src + 38)) * 4294967296 | WIDEN(LOAD(src + 41)) * 1099511627776 | WIDEN(LOAD(src + 44)) * 281474976710656 | WIDEN(LOAD(src + 47)) * 72057594037927936 | WIDEN(LOAD(src + 26));
  (void) STORE(highs, reg_b);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, reg_d);
  (void) STORE(lows + 8, reg_c);
  (void) STORE(highs + 16, reg_f);
  (void) STORE(lows + 16, reg_e);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 010000305c.0
// full-signature: func(_ld3_spread_bytes_to_3_regs__half_, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _ld3_spread_bytes_to_3_regs__half_(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src + 3)) * 256 | WIDEN(LOAD(src + 6)) * 65536 | WIDEN(LOAD(src + 9)) * 16777216 | WIDEN(LOAD(src + 12)) * 4294967296 | WIDEN(LOAD(src + 15)) * 1099511627776 | WIDEN(LOAD(src + 18)) * 281474976710656 | WIDEN(LOAD(src + 21)) * 72057594037927936 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 4)) * 256 | WIDEN(LOAD(src + 7)) * 65536 | WIDEN(LOAD(src + 10)) * 16777216 | WIDEN(LOAD(src + 13)) * 4294967296 | WIDEN(LOAD(src + 16)) * 1099511627776 | WIDEN(LOAD(src + 19)) * 281474976710656 | WIDEN(LOAD(src + 22)) * 72057594037927936 | WIDEN(LOAD(src + 1));
  reg_c = WIDEN(LOAD(src + 5)) * 256 | WIDEN(LOAD(src + 8)) * 65536 | WIDEN(LOAD(src + 11)) * 16777216 | WIDEN(LOAD(src + 14)) * 4294967296 | WIDEN(LOAD(src + 17)) * 1099511627776 | WIDEN(LOAD(src + 20)) * 281474976710656 | WIDEN(LOAD(src + 23)) * 72057594037927936 | WIDEN(LOAD(src + 2));
  (void) STORE(highs, 0);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, 0);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, 0);
  (void) STORE(lows + 16, reg_c);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 01000030b8.0
// full-signature: func(_ld3_spread_8_bytes_items_to_3_regs, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _ld3_spread_8_bytes_items_to_3_regs(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src);
  reg_b = LOAD(src + 8);
  reg_c = LOAD(src + 32);
  reg_d = LOAD(src + 16);
  reg_e = LOAD(src + 40);
  (void) STORE(highs, LOAD(src + 24));
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, reg_c);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, reg_e);
  (void) STORE(lows + 16, reg_d);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100003114.0
// full-signature: func(_indexed_ld3__first_2_bytes_to_3_regs, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld3__first_2_bytes_to_3_regs(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src + 1)) * 256 | 0xffffffffffff00ff;
  reg_b = WIDEN(LOAD(src + 2)) * 256 | 0xffffffffffff00ff;
  (void) STORE(highs, WIDEN(LOAD(src)) * 256 | 0xffffffffffff00ff);
  (void) STORE(lows, -1);
  (void) STORE(highs + 8, reg_a);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, reg_b);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100003170.0
// full-signature: func(_indexed_ld3__8_bytes_into_lows, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld3__8_bytes_into_lows(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src);
  reg_b = LOAD(src + 8);
  reg_c = LOAD(src + 16);
  (void) STORE(highs, -1);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, reg_c);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 01000031cc.0
// full-signature: func(_indexed_ld3__8_bytes_to_highs, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld3__8_bytes_to_highs(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src + 8);
  reg_b = LOAD(src + 16);
  (void) STORE(highs, LOAD(src));
  (void) STORE(lows, -1);
  (void) STORE(highs + 8, reg_a);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, reg_b);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100003228.0
// full-signature: func(_repeating_ld3__first_bytes_full, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _repeating_ld3__first_bytes_full(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src)) * 256 | WIDEN(LOAD(src)) * 65536 | WIDEN(LOAD(src)) * 16777216 | WIDEN(LOAD(src)) * 4294967296 | WIDEN(LOAD(src)) * 1099511627776 | WIDEN(LOAD(src)) * 281474976710656 | WIDEN(LOAD(src)) * 72057594037927936 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 1)) * 256 | WIDEN(LOAD(src + 1)) * 65536 | WIDEN(LOAD(src + 1)) * 16777216 | WIDEN(LOAD(src + 1)) * 4294967296 | WIDEN(LOAD(src + 1)) * 1099511627776 | WIDEN(LOAD(src + 1)) * 281474976710656 | WIDEN(LOAD(src + 1)) * 72057594037927936 | WIDEN(LOAD(src + 1));
  reg_c = WIDEN(LOAD(src + 2)) * 256 | WIDEN(LOAD(src + 2)) * 65536 | WIDEN(LOAD(src + 2)) * 16777216 | WIDEN(LOAD(src + 2)) * 4294967296 | WIDEN(LOAD(src + 2)) * 1099511627776 | WIDEN(LOAD(src + 2)) * 281474976710656 | WIDEN(LOAD(src + 2)) * 72057594037927936 | WIDEN(LOAD(src + 2));
  (void) STORE(highs, WIDEN(LOAD(src)) * 256 | WIDEN(LOAD(src)) * 65536 | WIDEN(LOAD(src)) * 16777216 | WIDEN(LOAD(src)) * 4294967296 | WIDEN(LOAD(src)) * 1099511627776 | WIDEN(LOAD(src)) * 281474976710656 | WIDEN(LOAD(src)) * 72057594037927936 | WIDEN(LOAD(src)));
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, reg_b);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, reg_c);
  (void) STORE(lows + 16, reg_c);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 0100003284.0
// full-signature: func(_repeating_ld3__2_bytes_half, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _repeating_ld3__2_bytes_half(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src)) * 65536 | WIDEN(LOAD(src)) * 4294967296 | WIDEN(LOAD(src)) * 281474976710656 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 2)) * 65536 | WIDEN(LOAD(src + 2)) * 4294967296 | WIDEN(LOAD(src + 2)) * 281474976710656 | WIDEN(LOAD(src + 2));
  reg_c = WIDEN(LOAD(src + 4)) * 65536 | WIDEN(LOAD(src + 4)) * 4294967296 | WIDEN(LOAD(src + 4)) * 281474976710656 | WIDEN(LOAD(src + 4));
  (void) STORE(highs, 0);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, 0);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, 0);
  (void) STORE(lows + 16, reg_c);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, -1);
}

// address: 01000032e0.0
// full-signature: func(_ld4_spread_bytes_to_4_regs, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _ld4_spread_bytes_to_4_regs(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src + 4)) * 256 | WIDEN(LOAD(src + 8)) * 65536 | WIDEN(LOAD(src + 12)) * 16777216 | WIDEN(LOAD(src + 16)) * 4294967296 | WIDEN(LOAD(src + 20)) * 1099511627776 | WIDEN(LOAD(src + 24)) * 281474976710656 | WIDEN(LOAD(src + 28)) * 72057594037927936 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 36)) * 256 | WIDEN(LOAD(src + 40)) * 65536 | WIDEN(LOAD(src + 44)) * 16777216 | WIDEN(LOAD(src + 48)) * 4294967296 | WIDEN(LOAD(src + 52)) * 1099511627776 | WIDEN(LOAD(src + 56)) * 281474976710656 | WIDEN(LOAD(src + 60)) * 72057594037927936 | WIDEN(LOAD(src + 32));
  reg_c = WIDEN(LOAD(src + 5)) * 256 | WIDEN(LOAD(src + 9)) * 65536 | WIDEN(LOAD(src + 13)) * 16777216 | WIDEN(LOAD(src + 17)) * 4294967296 | WIDEN(LOAD(src + 21)) * 1099511627776 | WIDEN(LOAD(src + 25)) * 281474976710656 | WIDEN(LOAD(src + 29)) * 72057594037927936 | WIDEN(LOAD(src + 1));
  reg_d = WIDEN(LOAD(src + 37)) * 256 | WIDEN(LOAD(src + 41)) * 65536 | WIDEN(LOAD(src + 45)) * 16777216 | WIDEN(LOAD(src + 49)) * 4294967296 | WIDEN(LOAD(src + 53)) * 1099511627776 | WIDEN(LOAD(src + 57)) * 281474976710656 | WIDEN(LOAD(src + 61)) * 72057594037927936 | WIDEN(LOAD(src + 33));
  reg_e = WIDEN(LOAD(src + 6)) * 256 | WIDEN(LOAD(src + 10)) * 65536 | WIDEN(LOAD(src + 14)) * 16777216 | WIDEN(LOAD(src + 18)) * 4294967296 | WIDEN(LOAD(src + 22)) * 1099511627776 | WIDEN(LOAD(src + 26)) * 281474976710656 | WIDEN(LOAD(src + 30)) * 72057594037927936 | WIDEN(LOAD(src + 2));
  reg_f = WIDEN(LOAD(src + 38)) * 256 | WIDEN(LOAD(src + 42)) * 65536 | WIDEN(LOAD(src + 46)) * 16777216 | WIDEN(LOAD(src + 50)) * 4294967296 | WIDEN(LOAD(src + 54)) * 1099511627776 | WIDEN(LOAD(src + 58)) * 281474976710656 | WIDEN(LOAD(src + 62)) * 72057594037927936 | WIDEN(LOAD(src + 34));
  reg_g = WIDEN(LOAD(src + 7)) * 256 | WIDEN(LOAD(src + 11)) * 65536 | WIDEN(LOAD(src + 15)) * 16777216 | WIDEN(LOAD(src + 19)) * 4294967296 | WIDEN(LOAD(src + 23)) * 1099511627776 | WIDEN(LOAD(src + 27)) * 281474976710656 | WIDEN(LOAD(src + 31)) * 72057594037927936 | WIDEN(LOAD(src + 3));
  reg_h = WIDEN(LOAD(src + 39)) * 256 | WIDEN(LOAD(src + 43)) * 65536 | WIDEN(LOAD(src + 47)) * 16777216 | WIDEN(LOAD(src + 51)) * 4294967296 | WIDEN(LOAD(src + 55)) * 1099511627776 | WIDEN(LOAD(src + 59)) * 281474976710656 | WIDEN(LOAD(src + 63)) * 72057594037927936 | WIDEN(LOAD(src + 35));
  (void) STORE(highs, reg_b);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, reg_d);
  (void) STORE(lows + 8, reg_c);
  (void) STORE(highs + 16, reg_f);
  (void) STORE(lows + 16, reg_e);
  (void) STORE(highs + 24, reg_h);
  (void) STORE(lows + 24, reg_g);
}

// address: 010000333c.0
// full-signature: func(_ld4_spread_bytes_to_4_regs__half_, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _ld4_spread_bytes_to_4_regs__half_(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src + 4)) * 256 | WIDEN(LOAD(src + 8)) * 65536 | WIDEN(LOAD(src + 12)) * 16777216 | WIDEN(LOAD(src + 16)) * 4294967296 | WIDEN(LOAD(src + 20)) * 1099511627776 | WIDEN(LOAD(src + 24)) * 281474976710656 | WIDEN(LOAD(src + 28)) * 72057594037927936 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 5)) * 256 | WIDEN(LOAD(src + 9)) * 65536 | WIDEN(LOAD(src + 13)) * 16777216 | WIDEN(LOAD(src + 17)) * 4294967296 | WIDEN(LOAD(src + 21)) * 1099511627776 | WIDEN(LOAD(src + 25)) * 281474976710656 | WIDEN(LOAD(src + 29)) * 72057594037927936 | WIDEN(LOAD(src + 1));
  reg_c = WIDEN(LOAD(src + 6)) * 256 | WIDEN(LOAD(src + 10)) * 65536 | WIDEN(LOAD(src + 14)) * 16777216 | WIDEN(LOAD(src + 18)) * 4294967296 | WIDEN(LOAD(src + 22)) * 1099511627776 | WIDEN(LOAD(src + 26)) * 281474976710656 | WIDEN(LOAD(src + 30)) * 72057594037927936 | WIDEN(LOAD(src + 2));
  reg_d = WIDEN(LOAD(src + 7)) * 256 | WIDEN(LOAD(src + 11)) * 65536 | WIDEN(LOAD(src + 15)) * 16777216 | WIDEN(LOAD(src + 19)) * 4294967296 | WIDEN(LOAD(src + 23)) * 1099511627776 | WIDEN(LOAD(src + 27)) * 281474976710656 | WIDEN(LOAD(src + 31)) * 72057594037927936 | WIDEN(LOAD(src + 3));
  (void) STORE(highs, 0);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, 0);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, 0);
  (void) STORE(lows + 16, reg_c);
  (void) STORE(highs + 24, 0);
  (void) STORE(lows + 24, reg_d);
}

// address: 0100003398.0
// full-signature: func(_ld4_spread_8_bytes_items_to_4_regs, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _ld4_spread_8_bytes_items_to_4_regs(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src);
  reg_b = LOAD(src + 8);
  reg_c = LOAD(src + 40);
  reg_d = LOAD(src + 16);
  reg_e = LOAD(src + 48);
  reg_f = LOAD(src + 24);
  reg_g = LOAD(src + 56);
  (void) STORE(highs, LOAD(src + 32));
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, reg_c);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, reg_e);
  (void) STORE(lows + 16, reg_d);
  (void) STORE(highs + 24, reg_g);
  (void) STORE(lows + 24, reg_f);
}

// address: 01000033f4.0
// full-signature: func(_indexed_ld4__first_2_bytes_to_4_regs, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld4__first_2_bytes_to_4_regs(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src + 1)) * 256 | 0xffffffffffff00ff;
  reg_b = WIDEN(LOAD(src + 2)) * 256 | 0xffffffffffff00ff;
  reg_c = WIDEN(LOAD(src + 3)) * 256 | 0xffffffffffff00ff;
  (void) STORE(highs, WIDEN(LOAD(src)) * 256 | 0xffffffffffff00ff);
  (void) STORE(lows, -1);
  (void) STORE(highs + 8, reg_a);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, reg_b);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, reg_c);
  (void) STORE(lows + 24, -1);
}

// address: 0100003450.0
// full-signature: func(_indexed_ld4__8_bytes_into_lows, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld4__8_bytes_into_lows(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src);
  reg_b = LOAD(src + 8);
  reg_c = LOAD(src + 16);
  reg_d = LOAD(src + 24);
  (void) STORE(highs, -1);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, -1);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, -1);
  (void) STORE(lows + 16, reg_c);
  (void) STORE(highs + 24, -1);
  (void) STORE(lows + 24, reg_d);
}

// address: 01000034ac.0
// full-signature: func(_indexed_ld4__8_bytes_to_highs, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _indexed_ld4__8_bytes_to_highs(d1* src, d8* highs, d8* lows)
{
  reg_a = LOAD(src + 8);
  reg_b = LOAD(src + 16);
  reg_c = LOAD(src + 24);
  (void) STORE(highs, LOAD(src));
  (void) STORE(lows, -1);
  (void) STORE(highs + 8, reg_a);
  (void) STORE(lows + 8, -1);
  (void) STORE(highs + 16, reg_b);
  (void) STORE(lows + 16, -1);
  (void) STORE(highs + 24, reg_c);
  (void) STORE(lows + 24, -1);
}

// address: 0100003508.0
// full-signature: func(_repeating_ld4__first_bytes_full, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _repeating_ld4__first_bytes_full(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src)) * 256 | WIDEN(LOAD(src)) * 65536 | WIDEN(LOAD(src)) * 16777216 | WIDEN(LOAD(src)) * 4294967296 | WIDEN(LOAD(src)) * 1099511627776 | WIDEN(LOAD(src)) * 281474976710656 | WIDEN(LOAD(src)) * 72057594037927936 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 1)) * 256 | WIDEN(LOAD(src + 1)) * 65536 | WIDEN(LOAD(src + 1)) * 16777216 | WIDEN(LOAD(src + 1)) * 4294967296 | WIDEN(LOAD(src + 1)) * 1099511627776 | WIDEN(LOAD(src + 1)) * 281474976710656 | WIDEN(LOAD(src + 1)) * 72057594037927936 | WIDEN(LOAD(src + 1));
  reg_c = WIDEN(LOAD(src + 2)) * 256 | WIDEN(LOAD(src + 2)) * 65536 | WIDEN(LOAD(src + 2)) * 16777216 | WIDEN(LOAD(src + 2)) * 4294967296 | WIDEN(LOAD(src + 2)) * 1099511627776 | WIDEN(LOAD(src + 2)) * 281474976710656 | WIDEN(LOAD(src + 2)) * 72057594037927936 | WIDEN(LOAD(src + 2));
  reg_d = WIDEN(LOAD(src + 3)) * 256 | WIDEN(LOAD(src + 3)) * 65536 | WIDEN(LOAD(src + 3)) * 16777216 | WIDEN(LOAD(src + 3)) * 4294967296 | WIDEN(LOAD(src + 3)) * 1099511627776 | WIDEN(LOAD(src + 3)) * 281474976710656 | WIDEN(LOAD(src + 3)) * 72057594037927936 | WIDEN(LOAD(src + 3));
  (void) STORE(highs, WIDEN(LOAD(src)) * 256 | WIDEN(LOAD(src)) * 65536 | WIDEN(LOAD(src)) * 16777216 | WIDEN(LOAD(src)) * 4294967296 | WIDEN(LOAD(src)) * 1099511627776 | WIDEN(LOAD(src)) * 281474976710656 | WIDEN(LOAD(src)) * 72057594037927936 | WIDEN(LOAD(src)));
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, reg_b);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, reg_c);
  (void) STORE(lows + 16, reg_c);
  (void) STORE(highs + 24, reg_d);
  (void) STORE(lows + 24, reg_d);
}

// address: 0100003564.0
// full-signature: func(_repeating_ld4__2_bytes_half, return=[], parameter=[<ptr(int(undef, 1)),src,reg[x0]>, <ptr(int(undef, 8)),highs,reg[x1]>, <ptr(int(undef, 8)),lows,reg[x2]>], varargs=false)
void _repeating_ld4__2_bytes_half(d1* src, d8* highs, d8* lows)
{
  reg_a = WIDEN(LOAD(src)) * 65536 | WIDEN(LOAD(src)) * 4294967296 | WIDEN(LOAD(src)) * 281474976710656 | WIDEN(LOAD(src));
  reg_b = WIDEN(LOAD(src + 2)) * 65536 | WIDEN(LOAD(src + 2)) * 4294967296 | WIDEN(LOAD(src + 2)) * 281474976710656 | WIDEN(LOAD(src + 2));
  reg_c = WIDEN(LOAD(src + 4)) * 65536 | WIDEN(LOAD(src + 4)) * 4294967296 | WIDEN(LOAD(src + 4)) * 281474976710656 | WIDEN(LOAD(src + 4));
  reg_d = WIDEN(LOAD(src + 6)) * 65536 | WIDEN(LOAD(src + 6)) * 4294967296 | WIDEN(LOAD(src + 6)) * 281474976710656 | WIDEN(LOAD(src + 6));
  (void) STORE(highs, 0);
  (void) STORE(lows, reg_a);
  (void) STORE(highs + 8, 0);
  (void) STORE(lows + 8, reg_b);
  (void) STORE(highs + 16, 0);
  (void) STORE(lows + 16, reg_c);
  (void) STORE(highs + 24, 0);
  (void) STORE(lows + 24, reg_d);
}


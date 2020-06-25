// Decompiled by holdec

// address: 0100005ca8.0
// full-signature: func(fib, return=[<int(undef, 8),null,unknown>], parameter=[<int(undef, 8),n,reg[x0]>], varargs=false)
d8 fib(d8 n)
{
  reg_result = n;
  if(n < 2) {
    reg_var1 = 0;
  } else {
    reg_aa = fib(n + -1);
    reg_ab = fib(n + -2);
    reg_result = reg_aa + reg_ab;
    reg_var1 = BIT_TO_INT(_holdec_aarch64_addWouldOverflow(reg_aa, reg_ab));
  }
  if(reg_var1 != 0) {
    (void) _holdec_aarch64_breakpoint(1);
    // not reached
  }
  return reg_result;
}

// address: 0100005e98.0
// full-signature: func(time_based_random, return=[<int(undef, 8),null,unknown>], parameter=[], varargs=false)
d8 time_based_random(void)
{
  reg_aa = _objc_allocWithZone(g_0x010000d8e0);
  reg_ab = _objc_msgSend(reg_aa, g_0x010000d868);
  reg_ac = _objc_msgSend(EXTRACT(reg_ab, int_result), g_0x010000d8a0);
  (void) _objc_release(EXTRACT(reg_ab, int_result));
  if(EXTRACT(reg_ac, float_result) <= -9.223372036854778E18 || EXTRACT(reg_ac, float_result) >= 9.223372036854776E18 || FLOAT_ISINFINITE(EXTRACT(reg_ac, float_result))) {
    (void) _holdec_aarch64_breakpoint(1);
    // not reached
  }
  return FLOAT_TO_INT(EXTRACT(reg_ac, float_result)) + (FLOAT_TO_INT(EXTRACT(reg_ac, float_result)) < 0 ? (FLOAT_TO_INT(EXTRACT(reg_ac, float_result)) + 0x3 & 0xfffffffffffffffc) * -1 : (FLOAT_TO_INT(EXTRACT(reg_ac, float_result)) & 0xfffffffffffffffc) * -1) + 6;
}


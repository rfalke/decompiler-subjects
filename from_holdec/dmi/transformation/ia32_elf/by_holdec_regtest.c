// Decompiled by holdec

// address: 08048340.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_aa = argv;
  reg_ab = basic_1_ternary_simple();
  reg_ac = basic_2_ternary_other();
  reg_ad = intermediate_1_ternary_blocks();
  reg_ae = intermediate_2_other_in_blocks();
  reg_af = intermediate_10_double_word_signed_math();
  reg_ag = intermediate_10_double_word_unsigned_math();
  reg_ah = advanced_1_unrolled_loop();
  return reg_ab + reg_ac + reg_ad + reg_ae + reg_af + reg_ag + reg_ah + SIGNED_EXTEND(LOAD(LOAD(reg_aa)));
}

// address: 080484c0.0
// full-signature: func(basic_1_ternary_simple, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_1_ternary_simple(d4 ARG_0)
{
  return BIT_TO_INT(ARG_0 != 42);
}

// address: 080484d0.0
// full-signature: func(basic_2_ternary_other, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_2_ternary_other(d4 ARG_0)
{
  return ARG_0 == 42 ? 100 : 201;
}

// address: 080484f0.0
// full-signature: func(intermediate_10_double_word_signed_math, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>, <int(undef, 4),ARG_3,unknown>, <int(undef, 4),ARG_4,unknown>, <int(undef, 4),ARG_5,unknown>], varargs=false)
d4 intermediate_10_double_word_signed_math(d4 ARG_0, d4 ARG_1, d4 ARG_2, d4 ARG_3, d4 ARG_4, d4 ARG_5)
{
  reg_aa = ARG_0;
  reg_ab = ARG_3;
  reg_ac = ARG_1;
  reg_ad = ARG_5;
  reg_ae = ARG_4;
  reg_af = ARG_2;
  if(BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295) + ARG_1 + ARG_3 > ARG_5 && BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295) + ARG_1 + ARG_3 >= ARG_5) {
    (void) puts("add");
  } else if(BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295) + ARG_1 + ARG_3 > ARG_5 && BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295) + ARG_1 + ARG_3 >= ARG_5 || ARG_0 + ARG_2 > ARG_4 && BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295) + ARG_1 + ARG_3 >= ARG_5) {
    (void) puts("add");
  }
  if(reg_ad < reg_ac + BIT_TO_INT(reg_aa < reg_af) * -1 + reg_ab * -1 && reg_ad <= reg_ac + BIT_TO_INT(reg_aa < reg_af) * -1 + reg_ab * -1) {
    (void) puts("sub");
  } else if(reg_ad <= reg_ac + BIT_TO_INT(reg_aa < reg_af) * -1 + reg_ab * -1 && reg_ae < reg_aa + reg_af * -1 || reg_ad < reg_ac + BIT_TO_INT(reg_aa < reg_af) * -1 + reg_ab * -1 && reg_ad <= reg_ac + BIT_TO_INT(reg_aa < reg_af) * -1 + reg_ab * -1) {
    (void) puts("sub");
  }
  if(reg_ad < NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af && reg_ad <= NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af) {
    (void) puts("mult");
  } else if(reg_ad <= NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af && reg_ae < reg_aa * reg_af || reg_ad < NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af && reg_ad <= NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af) {
    (void) puts("mult");
  }
  reg_ag = __divdi3();
  if(reg_ad <= NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af && reg_ae < reg_ag || reg_ad < NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af && reg_ad <= NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af) {
    (void) puts("diff");
  }
  reg_ah = __moddi3();
  if((NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af ^ reg_ad) == 0 && (reg_ae ^ reg_ah) == 0) {
    (void) puts("modulo");
  }
  return 0;
}

// address: 08048680.0
// full-signature: func(intermediate_10_double_word_unsigned_math, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>, <int(undef, 4),ARG_3,unknown>, <int(undef, 4),ARG_4,unknown>, <int(undef, 4),ARG_5,unknown>], varargs=false)
d4 intermediate_10_double_word_unsigned_math(d4 ARG_0, d4 ARG_1, d4 ARG_2, d4 ARG_3, d4 ARG_4, d4 ARG_5)
{
  reg_aa = ARG_0;
  reg_ab = ARG_3;
  reg_ac = ARG_1;
  reg_ad = ARG_5;
  reg_ae = ARG_4;
  reg_af = ARG_2;
  if(BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > -1 ? UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295 : UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) < 0) + ARG_1 + ARG_3 > ARG_5 && BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > -1 ? UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295 : UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) < 0) + ARG_1 + ARG_3 >= ARG_5) {
    (void) puts("add");
  } else if(BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > -1 ? UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295 : UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) < 0) + ARG_1 + ARG_3 > ARG_5 && BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > -1 ? UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295 : UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) < 0) + ARG_1 + ARG_3 >= ARG_5 || ARG_0 + ARG_2 > ARG_4 && BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > -1 ? UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295 : UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) < 0) + ARG_1 + ARG_3 >= ARG_5) {
    (void) puts("add");
  }
  if(reg_ad < reg_ac + BIT_TO_INT(reg_aa > -1 && reg_af > -1 || reg_aa < 0 && reg_af < 0 ? reg_aa < reg_af : reg_af < 0) * -1 + reg_ab * -1 && reg_ad <= reg_ac + BIT_TO_INT(reg_aa > -1 && reg_af > -1 || reg_aa < 0 && reg_af < 0 ? reg_aa < reg_af : reg_af < 0) * -1 + reg_ab * -1) {
    (void) puts("sub");
  } else if(reg_ad <= reg_ac + BIT_TO_INT(reg_aa > -1 && reg_af > -1 || reg_aa < 0 && reg_af < 0 ? reg_aa < reg_af : reg_af < 0) * -1 + reg_ab * -1 && reg_ae < reg_aa + reg_af * -1 || reg_ad < reg_ac + BIT_TO_INT(reg_aa > -1 && reg_af > -1 || reg_aa < 0 && reg_af < 0 ? reg_aa < reg_af : reg_af < 0) * -1 + reg_ab * -1 && reg_ad <= reg_ac + BIT_TO_INT(reg_aa > -1 && reg_af > -1 || reg_aa < 0 && reg_af < 0 ? reg_aa < reg_af : reg_af < 0) * -1 + reg_ab * -1) {
    (void) puts("sub");
  }
  if(reg_ad < NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af && reg_ad <= NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af) {
    (void) puts("mult");
  } else if(reg_ad <= NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af && reg_ae < reg_aa * reg_af || reg_ad < NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af && reg_ad <= NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af) {
    (void) puts("mult");
  }
  reg_ag = __udivdi3();
  if(reg_ad <= NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af && reg_ae < reg_ag || reg_ad < NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af && reg_ad <= NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af) {
    (void) puts("diff");
  }
  reg_ah = __umoddi3();
  if((NARROW(UNSIGNED_EXTEND(reg_aa) * UNSIGNED_EXTEND(reg_af) / 4294967296) + reg_aa * reg_ab + reg_ac * reg_af ^ reg_ad) == 0 && (reg_ae ^ reg_ah) == 0) {
    (void) puts("modulo");
  }
  return 0;
}

// address: 08048810.0
// full-signature: func(advanced_1_unrolled_loop, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 advanced_1_unrolled_loop(void)
{
  reg_var1 = 48;
  (void) puts("basic");
  do {
    reg_var1++;
    (void) putchar(reg_var1 + -1);
  } while(reg_var1 != 58);
  reg_var2 = 48;
  (void) puts("partial unrolled");
  do {
    (void) putchar(reg_var2);
    reg_af = reg_var2 + 1;
    reg_var2 += 2;
    (void) putchar(reg_af);
  } while(reg_var2 != 58);
  (void) puts("fully unrolled");
  (void) putchar(48);
  (void) putchar(49);
  (void) putchar(50);
  (void) putchar(51);
  (void) putchar(52);
  (void) putchar(53);
  (void) putchar(54);
  (void) putchar(55);
  (void) putchar(56);
  (void) putchar(57);
  return 0;
}

// address: 08048904.0
// full-signature: func(intermediate_1_ternary_blocks, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_1_ternary_blocks(d4 ARG_0)
{
  return BIT_TO_INT(ARG_0 != 42);
}

// address: 0804891b.0
// full-signature: func(intermediate_2_other_in_blocks, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_2_other_in_blocks(d4 ARG_0)
{
  return ARG_0 == 42 ? 100 : 201;
}


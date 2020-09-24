// Decompiled by holdec

// address: 08048340.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_a = argv;
  reg_b = basic_1_ternary_simple();
  reg_c = basic_2_ternary_other();
  reg_d = intermediate_1_ternary_blocks();
  reg_e = intermediate_2_other_in_blocks();
  reg_f = intermediate_10_double_word_signed_math();
  reg_g = intermediate_10_double_word_unsigned_math();
  reg_h = advanced_1_unrolled_loop();
  return reg_b + reg_c + reg_d + reg_e + reg_f + reg_g + reg_h + SIGNED_EXTEND(LOAD(LOAD(reg_a)));
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
  reg_a = ARG_0;
  reg_b = ARG_3;
  reg_c = ARG_1;
  reg_d = ARG_5;
  reg_e = ARG_4;
  reg_f = ARG_2;
  if(BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295) + ARG_1 + ARG_3 > ARG_5 && BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295) + ARG_1 + ARG_3 >= ARG_5) {
    (void) puts("add");
  } else if(BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295) + ARG_1 + ARG_3 > ARG_5 && BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295) + ARG_1 + ARG_3 >= ARG_5 || ARG_0 + ARG_2 > ARG_4 && BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295) + ARG_1 + ARG_3 >= ARG_5) {
    (void) puts("add");
  }
  if(reg_d < reg_c + BIT_TO_INT(reg_a < reg_f) * -1 + reg_b * -1 && reg_d <= reg_c + BIT_TO_INT(reg_a < reg_f) * -1 + reg_b * -1) {
    (void) puts("sub");
  } else if(reg_d <= reg_c + BIT_TO_INT(reg_a < reg_f) * -1 + reg_b * -1 && reg_e < reg_a + reg_f * -1 || reg_d < reg_c + BIT_TO_INT(reg_a < reg_f) * -1 + reg_b * -1 && reg_d <= reg_c + BIT_TO_INT(reg_a < reg_f) * -1 + reg_b * -1) {
    (void) puts("sub");
  }
  if(reg_d < NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f && reg_d <= NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f) {
    (void) puts("mult");
  } else if(reg_d <= NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f && reg_e < reg_a * reg_f || reg_d < NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f && reg_d <= NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f) {
    (void) puts("mult");
  }
  reg_g = __divdi3();
  if(reg_d <= NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f && reg_e < reg_g || reg_d < NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f && reg_d <= NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f) {
    (void) puts("diff");
  }
  reg_h = __moddi3();
  if((NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f ^ reg_d) == 0 && (reg_e ^ reg_h) == 0) {
    (void) puts("modulo");
  }
  return 0;
}

// address: 08048680.0
// full-signature: func(intermediate_10_double_word_unsigned_math, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>, <int(undef, 4),ARG_3,unknown>, <int(undef, 4),ARG_4,unknown>, <int(undef, 4),ARG_5,unknown>], varargs=false)
d4 intermediate_10_double_word_unsigned_math(d4 ARG_0, d4 ARG_1, d4 ARG_2, d4 ARG_3, d4 ARG_4, d4 ARG_5)
{
  reg_a = ARG_0;
  reg_b = ARG_3;
  reg_c = ARG_1;
  reg_d = ARG_5;
  reg_e = ARG_4;
  reg_f = ARG_2;
  if(BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > -1 ? UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295 : UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) < 0) + ARG_1 + ARG_3 > ARG_5 && BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > -1 ? UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295 : UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) < 0) + ARG_1 + ARG_3 >= ARG_5) {
    (void) puts("add");
  } else if(BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > -1 ? UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295 : UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) < 0) + ARG_1 + ARG_3 > ARG_5 && BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > -1 ? UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295 : UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) < 0) + ARG_1 + ARG_3 >= ARG_5 || ARG_0 + ARG_2 > ARG_4 && BIT_TO_INT(UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > -1 ? UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) > 4294967295 : UNSIGNED_EXTEND(ARG_0) + UNSIGNED_EXTEND(ARG_2) < 0) + ARG_1 + ARG_3 >= ARG_5) {
    (void) puts("add");
  }
  if(reg_d < reg_c + BIT_TO_INT(reg_a > -1 && reg_f > -1 || reg_a < 0 && reg_f < 0 ? reg_a < reg_f : reg_f < 0) * -1 + reg_b * -1 && reg_d <= reg_c + BIT_TO_INT(reg_a > -1 && reg_f > -1 || reg_a < 0 && reg_f < 0 ? reg_a < reg_f : reg_f < 0) * -1 + reg_b * -1) {
    (void) puts("sub");
  } else if(reg_d <= reg_c + BIT_TO_INT(reg_a > -1 && reg_f > -1 || reg_a < 0 && reg_f < 0 ? reg_a < reg_f : reg_f < 0) * -1 + reg_b * -1 && reg_e < reg_a + reg_f * -1 || reg_d < reg_c + BIT_TO_INT(reg_a > -1 && reg_f > -1 || reg_a < 0 && reg_f < 0 ? reg_a < reg_f : reg_f < 0) * -1 + reg_b * -1 && reg_d <= reg_c + BIT_TO_INT(reg_a > -1 && reg_f > -1 || reg_a < 0 && reg_f < 0 ? reg_a < reg_f : reg_f < 0) * -1 + reg_b * -1) {
    (void) puts("sub");
  }
  if(reg_d < NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f && reg_d <= NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f) {
    (void) puts("mult");
  } else if(reg_d <= NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f && reg_e < reg_a * reg_f || reg_d < NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f && reg_d <= NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f) {
    (void) puts("mult");
  }
  reg_g = __udivdi3();
  if(reg_d <= NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f && reg_e < reg_g || reg_d < NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f && reg_d <= NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f) {
    (void) puts("diff");
  }
  reg_h = __umoddi3();
  if((NARROW(UNSIGNED_EXTEND(reg_a) * UNSIGNED_EXTEND(reg_f) / 4294967296) + reg_a * reg_b + reg_c * reg_f ^ reg_d) == 0 && (reg_e ^ reg_h) == 0) {
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
    reg_f = reg_var2 + 1;
    reg_var2 += 2;
    (void) putchar(reg_f);
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


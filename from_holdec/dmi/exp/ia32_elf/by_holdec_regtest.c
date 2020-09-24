// Decompiled by holdec

// address: 08048370.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_a = argv;
  reg_b = intermediate_1_cmp_with_are_constant();
  reg_c = intermediate_2_cmp_with_extra();
  reg_d = intermediate_3_division_by_multiplication();
  reg_e = intermediate_4_swap_with_xor();
  reg_f = advanced_1_boolean_minization();
  (void) exit(reg_b + reg_c + reg_d + reg_e + reg_f + SIGNED_EXTEND(LOAD(LOAD(reg_a))));
  // not reached
}

// address: 080484eb.0
// full-signature: func(intermediate_1_cmp_with_are_constant, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_1_cmp_with_are_constant(d4 ARG_0)
{
  return 0;
}

// address: 08048551.0
// full-signature: func(intermediate_2_cmp_with_extra, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_2_cmp_with_extra(d4 ARG_0)
{
  if(ARG_0 > 10 && ARG_0 < 20) {
    (void) puts("!=30 is always true");
  }
  if(ARG_0 == 1) {
    (void) puts("!=2 is always true");
  }
  if(ARG_0 > 10) {
    (void) puts(">9 is always true");
  }
  return 0;
}

// address: 080485be.0
// full-signature: func(intermediate_3_division_by_multiplication, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_3_division_by_multiplication(d4 ARG_0)
{
  (void) putchar(ARG_0 / 7);
  return 0;
}

// address: 080485e4.0
// full-signature: func(intermediate_4_swap_with_xor, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>], varargs=false)
d4 intermediate_4_swap_with_xor(d4 ARG_0, d4 ARG_1)
{
  reg_a = ARG_0;
  (void) putchar(ARG_1);
  (void) putchar(reg_a);
  return 0;
}

// address: 0804861a.0
// full-signature: func(advanced_1_boolean_minization, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>], varargs=false)
d4 advanced_1_boolean_minization(d4 ARG_0, d4 ARG_1, d4 ARG_2)
{
  return BIT_TO_INT(ARG_0 != 0 && ARG_1 == 0 || ARG_0 == 0 && ARG_2 != 0);
}


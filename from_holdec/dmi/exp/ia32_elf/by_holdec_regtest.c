// Decompiled by holdec

// address: 08048370.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  (void) STORE(local + 52, &argc);
  (void) STORE(local + 56, InitValue(initial_value_of_ebx));
  (void) STORE(local + 60, InitValue(initial_value_of_esi));
  (void) STORE(local + 64, InitValue(initial_value_of_edi));
  (void) STORE(local + 68, InitValue(initial_value_of_ebp));
  (void) STORE(local + 72, LOAD(InitStackPointer));
  reg_aa = argc;
  reg_ab = argv;
  (void) STORE(local + 28, argc);
  reg_ac = intermediate_1_cmp_with_are_constant();
  (void) STORE(local + 28, reg_aa);
  reg_ad = intermediate_2_cmp_with_extra();
  (void) STORE(local + 28, reg_aa);
  reg_ae = intermediate_3_division_by_multiplication();
  (void) STORE(local + 28, 48);
  (void) STORE(local + 32, 97);
  reg_af = intermediate_4_swap_with_xor();
  (void) STORE(local + 28, BIT_TO_INT(reg_aa == 0));
  (void) STORE(local + 32, ~reg_aa & 0x1);
  (void) STORE(local + 36, BIT_TO_INT(reg_aa == BIT_TO_INT(reg_aa < 0) * 3 + NARROW(SIGNED_EXTEND(reg_aa) * 1431655766 / 4294967296) * 3));
  reg_ag = advanced_1_boolean_minization();
  reg_ah = SIGNED_EXTEND(LOAD(LOAD(reg_ab)));
  (void) STORE(local + 28, reg_ac + reg_ad + reg_ae + reg_af + reg_ag + SIGNED_EXTEND(LOAD(LOAD(reg_ab))));
  (void) exit(reg_ac + reg_ad + reg_ae + reg_af + reg_ag + reg_ah);
  reg_ai = LOAD(local + 28);
  (void) STORE(local + 12, 134514272);
  (void) STORE(local + 16, 134514368);
  (void) STORE(local + 20, reg_ah);
  (void) STORE(local + 24, local + 24);
  (void) STORE(local + 28, reg_ag);
  (void) STORE(local + 4, reg_ai);
  (void) STORE(local + 8, local + 32);
  (void) STORE(local, 134513520);
  reg_result = __libc_start_main();
  asm("l.hlt");
  return reg_result;
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
  if(ARG_0 >= 11) {
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
  reg_aa = ARG_0;
  (void) putchar(ARG_1);
  (void) putchar(reg_aa);
  return 0;
}

// address: 0804861a.0
// full-signature: func(advanced_1_boolean_minization, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>], varargs=false)
d4 advanced_1_boolean_minization(d4 ARG_0, d4 ARG_1, d4 ARG_2)
{
  return BIT_TO_INT(ARG_0 != 0 && ARG_1 == 0 || ARG_0 == 0 && ARG_2 != 0);
}


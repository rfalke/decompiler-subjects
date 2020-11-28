// Decompiled by holdec

// address: 080483d0.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_a = argv;
  reg_b = basic_1_reg_in_block();
  reg_c = basic_2_reg_in_prev_block();
  reg_d = basic_3_reg_cond_overwrite();
  reg_e = basic_4_reg_cond_change();
  reg_f = basic_5_reg_different_values();
  reg_g = basic_6_reg_overwrite_in_block();
  reg_h = intermediate_1_mem_in_block();
  reg_i = intermediate_2_mem_in_prev_block();
  reg_j = intermediate_3_mem_cond_overwrite();
  reg_k = intermediate_4_mem_cond_change();
  reg_l = intermediate_5_mem_different_values();
  reg_m = intermediate_6_mem_overwrite_in_block();
  reg_n = intermediate_10_subregs();
  reg_o = advanced_1_writes_can_be_omitted_for_non_mem_access_calls();
  reg_p = advanced_2_mem_values_can_be_propagated_for_non_write_calls();
  reg_q = advanced_3_value_range_analysis();
  (void) exit(reg_b + reg_c + reg_d + reg_e + reg_f + reg_g + reg_h + reg_i + reg_j + reg_k + reg_l + reg_m + reg_n + reg_o + reg_p + reg_q + SIGNED_EXTEND(LOAD(LOAD(reg_a))));
  // not reached
}

// address: 0804858b.0
// full-signature: func(advanced_3_value_range_analysis, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 advanced_3_value_range_analysis(d4 ARG_0)
{
  if(ARG_0 > 10) {
    (void) putchar(ARG_0 < 11 ? 97 : 98);
    (void) putchar(ARG_0 > 10 ? 65 : 66);
    (void) putchar(ARG_0 < 10 ? 48 : 49);
    if(ARG_0 > 8) {
      (void) puts(">10");
    }
  }
  if(ARG_0 == 42) {
    (void) putchar(ARG_0 == 42 ? 98 : 97);
    (void) putchar(ARG_0 == 42 ? 65 : 66);
    (void) putchar(ARG_0 == 100 ? 49 : 48);
    if(ARG_0 != 101) {
      (void) puts("= 42");
    }
  }
  return 0;
}

// address: 0804868d.0
// full-signature: func(basic_1_reg_in_block, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_1_reg_in_block(d4 ARG_0)
{
  (void) putchar(ARG_0 + 48);
  return 0;
}

// address: 080486a4.0
// full-signature: func(basic_2_reg_in_prev_block, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_2_reg_in_prev_block(d4 ARG_0)
{
  (void) putchar(ARG_0 + 49);
  return 0;
}

// address: 080486c2.0
// full-signature: func(basic_3_reg_cond_overwrite, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_3_reg_cond_overwrite(d4 ARG_0)
{
  (void) putchar(ARG_0 + (ARG_0 == 42 ? 65 : 97));
  return 0;
}

// address: 080486e3.0
// full-signature: func(basic_4_reg_cond_change, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_4_reg_cond_change(d4 ARG_0)
{
  (void) putchar(ARG_0 + (ARG_0 == 42 ? 65 : 97));
  return 0;
}

// address: 08048702.0
// full-signature: func(basic_5_reg_different_values, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_5_reg_different_values(d4 ARG_0)
{
  (void) putchar(ARG_0 + (ARG_0 == 42 ? 97 : 65));
  return 0;
}

// address: 08048725.0
// full-signature: func(basic_6_reg_overwrite_in_block, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_6_reg_overwrite_in_block(d4 ARG_0)
{
  (void) putchar(ARG_0 + 48);
  return 0;
}

// address: 08048741.0
// full-signature: func(intermediate_1_mem_in_block, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_1_mem_in_block(d4 ARG_0)
{
  reg_a = ARG_0;
  (void) STORE(&global_var, 48);
  (void) putchar(reg_a + 48);
  return 0;
}

// address: 08048761.0
// full-signature: func(intermediate_2_mem_in_prev_block, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_2_mem_in_prev_block(d4 ARG_0)
{
  reg_a = ARG_0;
  (void) STORE(&global_var, 48);
  (void) putchar(reg_a + 49);
  return 0;
}

// address: 0804878e.0
// full-signature: func(intermediate_3_mem_cond_overwrite, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_3_mem_cond_overwrite(d4 ARG_0)
{
  reg_a = ARG_0;
  (void) STORE(&global_var, 65);
  if(reg_a != 42) {
    (void) STORE(&global_var, 97);
  }
  (void) putchar(reg_a + global_var);
  return 0;
}

// address: 080487bd.0
// full-signature: func(intermediate_4_mem_cond_change, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_4_mem_cond_change(d4 ARG_0)
{
  reg_a = ARG_0;
  (void) STORE(&global_var, 65);
  if(reg_a != 42) {
    (void) STORE(&global_var, 97);
  }
  (void) putchar(reg_a + global_var);
  return 0;
}

// address: 080487e9.0
// full-signature: func(intermediate_5_mem_different_values, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_5_mem_different_values(d4 ARG_0)
{
  reg_a = ARG_0;
  if(ARG_0 == 42) {
    (void) STORE(&global_var, 97);
  } else {
    (void) STORE(&global_var, 65);
  }
  (void) putchar(reg_a + global_var);
  return 0;
}

// address: 0804881a.0
// full-signature: func(intermediate_6_mem_overwrite_in_block, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_6_mem_overwrite_in_block(d4 ARG_0)
{
  reg_a = ARG_0;
  (void) STORE(&global_var, 48);
  (void) putchar(reg_a + 48);
  return 0;
}

// address: 08048844.0
// full-signature: func(intermediate_10_subregs, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 intermediate_10_subregs(void)
{
  (void) putchar(UNSIGNED_EXTEND(global_char1 * 2) + UNSIGNED_EXTEND(global_char2 * 4));
  return 0;
}

// address: 08048877.0
// full-signature: func(advanced_1_writes_can_be_omitted_for_non_mem_access_calls, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 advanced_1_writes_can_be_omitted_for_non_mem_access_calls(d4 ARG_0)
{
  (void) STORE(&global_var, 2);
  return abs(ARG_0) + 2;
}

// address: 080488af.0
// full-signature: func(advanced_2_mem_values_can_be_propagated_for_non_write_calls, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 advanced_2_mem_values_can_be_propagated_for_non_write_calls(d4 ARG_0)
{
  (void) STORE(&global_var, 1);
  reg_a = strlen(ARG_0);
  return reg_a + global_var;
}


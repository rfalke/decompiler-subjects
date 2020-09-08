// Decompiled by holdec

// address: 080483d0.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_aa = argv;
  reg_ab = basic_1_reg_in_block();
  reg_ac = basic_2_reg_in_prev_block();
  reg_ad = basic_3_reg_cond_overwrite();
  reg_ae = basic_4_reg_cond_change();
  reg_af = basic_5_reg_different_values();
  reg_ag = basic_6_reg_overwrite_in_block();
  reg_ah = intermediate_1_mem_in_block();
  reg_ai = intermediate_2_mem_in_prev_block();
  reg_aj = intermediate_3_mem_cond_overwrite();
  reg_ak = intermediate_4_mem_cond_change();
  reg_al = intermediate_5_mem_different_values();
  reg_am = intermediate_6_mem_overwrite_in_block();
  reg_an = intermediate_10_subregs();
  reg_ao = advanced_1_writes_can_be_omitted_for_non_mem_access_calls();
  reg_ap = advanced_2_mem_values_can_be_propagated_for_non_write_calls();
  reg_aq = advanced_3_value_range_analysis();
  (void) exit(reg_ab + reg_ac + reg_ad + reg_ae + reg_af + reg_ag + reg_ah + reg_ai + reg_aj + reg_ak + reg_al + reg_am + reg_an + reg_ao + reg_ap + reg_aq + SIGNED_EXTEND(LOAD(LOAD(reg_aa))));
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
  reg_aa = ARG_0;
  (void) STORE(&global_var, 48);
  (void) putchar(reg_aa + 48);
  return 0;
}

// address: 08048761.0
// full-signature: func(intermediate_2_mem_in_prev_block, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_2_mem_in_prev_block(d4 ARG_0)
{
  reg_aa = ARG_0;
  (void) STORE(&global_var, 48);
  (void) putchar(reg_aa + 49);
  return 0;
}

// address: 0804878e.0
// full-signature: func(intermediate_3_mem_cond_overwrite, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_3_mem_cond_overwrite(d4 ARG_0)
{
  reg_aa = ARG_0;
  (void) STORE(&global_var, 65);
  if(reg_aa != 42) {
    (void) STORE(&global_var, 97);
  }
  (void) putchar(reg_aa + global_var);
  return 0;
}

// address: 080487bd.0
// full-signature: func(intermediate_4_mem_cond_change, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_4_mem_cond_change(d4 ARG_0)
{
  reg_aa = ARG_0;
  (void) STORE(&global_var, 65);
  if(reg_aa != 42) {
    (void) STORE(&global_var, 97);
  }
  (void) putchar(reg_aa + global_var);
  return 0;
}

// address: 080487e9.0
// full-signature: func(intermediate_5_mem_different_values, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_5_mem_different_values(d4 ARG_0)
{
  if(ARG_0 == 42) {
    (void) STORE(&global_var, 97);
  } else {
    (void) STORE(&global_var, 65);
  }
  (void) putchar(ARG_0 + global_var);
  return 0;
}

// address: 0804881a.0
// full-signature: func(intermediate_6_mem_overwrite_in_block, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_6_mem_overwrite_in_block(d4 ARG_0)
{
  reg_aa = ARG_0;
  (void) STORE(&global_var, 48);
  (void) putchar(reg_aa + 48);
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
  (void) STORE(&global_var, 1);
  reg_aa = abs(ARG_0);
  (void) STORE(&global_var, 2);
  return reg_aa + 2;
}

// address: 080488af.0
// full-signature: func(advanced_2_mem_values_can_be_propagated_for_non_write_calls, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 advanced_2_mem_values_can_be_propagated_for_non_write_calls(d4 ARG_0)
{
  (void) STORE(&global_var, 1);
  reg_aa = strlen(ARG_0);
  return reg_aa + global_var;
}


// Decompiled by holdec

// address: 080483a0.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_aa = argv;
  (void) basic_1_if();
  (void) basic_2_if_else();
  (void) basic_3_if_elseif();
  (void) basic_4_if_elseif_else();
  (void) basic_5_head_controlled_loop();
  (void) basic_6_tail_controlled_loop();
  (void) basic_7_for_loop();
  (void) basic_8_forever_loop();
  (void) basic_9_dead_block();
  (void) intermediate_1_short_circuit_and();
  (void) intermediate_2_short_circuit_or();
  (void) intermediate_10_loop_with_one_break();
  (void) intermediate_11_loop_with_two_breaks();
  (void) intermediate_12_loop_with_break_and_block();
  (void) intermediate_13_loop_with_one_continue();
  (void) intermediate_14_loop_with_two_continues();
  (void) intermediate_15_loop_with_continue_and_block();
  (void) intermediate_16_loop_with_breaks_and_continues();
  (void) intermediate_17_forever_loop_with_extra_statement();
  (void) intermediate_20_nested_loops();
  (void) intermediate_30_switch_case();
  (void) advanced_1_loop_with_multiple_entries();
  (void) advanced_2_loop_with_multiple_exits();
  (void) advanced_10_irreducible();
  (void) advanced_11_nested_loops_complex_condition();
  (void) advanced_12_nested_if_in_loop();
  (void) advanced_20_jump_table_on_stack();
  (void) advanced_21_computed_jumps();
  return SIGNED_EXTEND(LOAD(LOAD(reg_aa)));
}

// address: 080485b0.0
// full-signature: func(basic_1_if, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_1_if(d4 ARG_0)
{
  if(ARG_0 == 42) {
    (void) puts("if block");
  }
  return 0;
}

// address: 080485e0.0
// full-signature: func(basic_2_if_else, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_2_if_else(d4 ARG_0)
{
  if(ARG_0 == 42) {
    (void) puts("if block");
  } else {
    (void) puts("else block");
  }
  return 0;
}

// address: 08048620.0
// full-signature: func(basic_3_if_elseif, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_3_if_elseif(d4 ARG_0)
{
  if(ARG_0 == 42) {
    (void) puts("if block");
  } else if(ARG_0 == 43) {
    (void) puts("else-if block");
  }
  return 0;
}

// address: 08048680.0
// full-signature: func(basic_4_if_elseif_else, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_4_if_elseif_else(d4 ARG_0)
{
  if(ARG_0 == 42) {
    (void) puts("if block");
  } else if(ARG_0 == 43) {
    (void) puts("else-if block");
  } else {
    (void) puts("else block");
  }
  return 0;
}

// address: 080486f0.0
// full-signature: func(basic_7_for_loop, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 basic_7_for_loop(void)
{
  reg_var1 = 48;
  do {
    reg_var1++;
    (void) putchar(reg_var1 + -1);
  } while(reg_var1 != 58);
  return 0;
}

// address: 08048720.0
// full-signature: func(intermediate_1_short_circuit_and, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>], varargs=false)
d4 intermediate_1_short_circuit_and(d4 ARG_0, d4 ARG_1)
{
  reg_aa = rand();
  if(ARG_0 != 0 && reg_aa == ARG_1) {
    (void) puts("both true");
  }
  return 0;
}

// address: 08048750.0
// full-signature: func(intermediate_2_short_circuit_or, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>], varargs=false)
d4 intermediate_2_short_circuit_or(d4 ARG_0, d4 ARG_1)
{
  reg_aa = rand();
  if(ARG_0 != 0 || reg_aa == ARG_1) {
    (void) puts("at least one is true");
  }
  return 0;
}

// address: 08048790.0
// full-signature: func(intermediate_10_loop_with_one_break, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_10_loop_with_one_break(d4 ARG_0)
{
  reg_aa = ARG_0;
  while(1) {
    (void) puts("head");
    reg_ab = time(0);
    if(reg_aa == reg_ab) {
      break;
    }
    (void) puts("tail");
  }
  return 0;
}

// address: 080487e0.0
// full-signature: func(intermediate_11_loop_with_two_breaks, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_11_loop_with_two_breaks(d4 ARG_0)
{
  reg_var1 = ARG_0;
  if(ARG_0 > 0) {
    do {
      (void) puts("head");
      reg_ae = time(0);
      if(reg_ae == reg_var1) {
        break;
      }
      (void) puts("tail");
      reg_ab = reg_var1 == 1;
      reg_var1--;
    } while(!reg_ab);
  }
  return 0;
}

// address: 08048830.0
// full-signature: func(intermediate_12_loop_with_break_and_block, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_12_loop_with_break_and_block(d4 ARG_0)
{
  reg_aa = ARG_0;
  while(1) {
    (void) puts("head");
    reg_ac = time(0);
    if(reg_aa == reg_ac) {
      (void) puts("will break");
      break;
    }
    (void) puts("barrier");
    reg_ab = rand();
    if(reg_aa == reg_ab) {
      break;
    }
    (void) puts("tail");
  }
  return 0;
}

// address: 080488a0.0
// full-signature: func(intermediate_13_loop_with_one_continue, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_13_loop_with_one_continue(d4 ARG_0)
{
  reg_aa = ARG_0;
  if(ARG_0 > 123) {
    while(1) {
      do {
        (void) puts("head");
        reg_ab = time(0);
      } while(reg_aa == reg_ab);
      (void) puts("tail");
    }
  }
  return 0;
}

// address: 080488f0.0
// full-signature: func(intermediate_14_loop_with_two_continues, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_14_loop_with_two_continues(d4 ARG_0)
{
  reg_aa = ARG_0;
  if(ARG_0 > 123) {
    while(1) {
      do {
        (void) puts("head");
        reg_ab = time(0);
      } while(reg_aa == reg_ab);
      (void) puts("barrier");
      reg_ac = rand();
      if(reg_aa == reg_ac) {
        continue;
      }
      (void) puts("tail");
    }
  }
  return 0;
}

// address: 08048960.0
// full-signature: func(intermediate_15_loop_with_continue_and_block, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_15_loop_with_continue_and_block(d4 ARG_0)
{
  reg_aa = ARG_0;
  if(ARG_0 > 123) {
    while(1) {
      (void) puts("head");
      reg_ab = time(0);
      if(reg_aa == reg_ab) {
        (void) puts("will continue");
      } else {
        (void) puts("barrier");
        reg_ac = rand();
        if(reg_aa != reg_ac) {
          (void) puts("tail");
        }
      }
    }
  }
  return 0;
}

// address: 080489e0.0
// full-signature: func(intermediate_16_loop_with_breaks_and_continues, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_16_loop_with_breaks_and_continues(d4 ARG_0)
{
  reg_aa = ARG_0;
  while(1) {
    do {
      (void) puts("head");
      reg_ab = time(0);
    } while(reg_aa == reg_ab + 1);
    (void) puts("after first continue");
    reg_ac = time(0);
    if(reg_aa == reg_ac + 2) {
      break;
    }
    (void) puts("after first break");
    reg_ad = time(0);
    if(reg_aa == reg_ad + 3) {
      continue;
    }
    (void) puts("after second continue");
    reg_ae = time(0);
    if(reg_aa == reg_ae + 4) {
      break;
    }
    (void) puts("after second break; tail");
  }
  return 0;
}

// address: 08048aa0.0
// full-signature: func(intermediate_20_nested_loops, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_20_nested_loops(d4 ARG_0)
{
  reg_aa = ARG_0;
  (void) puts("before");
  do {
    (void) puts("outer loop");
    do {
      (void) puts("inner loop");
      reg_ab = time(0);
    } while(reg_aa != reg_ab);
    reg_ac = rand();
  } while(reg_aa != reg_ac);
  (void) puts("after");
  return 0;
}

// address: 08048b10.0
// full-signature: func(intermediate_30_switch_case, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 intermediate_30_switch_case(d4 ARG_0)
{
  if(ARG_0 < 0 || ARG_0 > 6 && ARG_0 < 9) {
    if(ARG_0 < 0 || ARG_0 == 7) {
      (void) puts("7 with fall through");
    }
    (void) puts("8");
  } else {
    if(ARG_0 > 9) {
      (void) puts("some other value");
    } else if(ARG_0 == 0) {
      (void) puts("0");
    } else if(ARG_0 == 1) {
      (void) puts("1");
    } else if(ARG_0 == 2 || ARG_0 == 3) {
      (void) puts("2 or 3");
    } else if(ARG_0 == 4) {
      (void) puts("4");
    } else if(ARG_0 == 5) {
      (void) puts("5");
    } else if(ARG_0 == 6) {
      (void) puts("6");
    } else {
      (void) puts("9");
    }
  }
  (void) puts("common exit");
  return 0;
}

// address: 08048c30.0
// full-signature: func(advanced_1_loop_with_multiple_entries, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 advanced_1_loop_with_multiple_entries(d4 ARG_0)
{
  reg_var1 = ARG_0;
  if(ARG_0 == 42) goto L5;
  if(ARG_0 < 1) goto L4;
  goto L2;

// calls     [3]
// called    [0, 3]
// deep-calls     {2, 3, 4}
// deep-called    {0, 2, 3, 5, 7}
// startStackOffset -12
// modifiedAddresses  [ALL]
L2:
  reg_var1--;
  (void) puts("body 1");
  goto L3;

// calls     [2, 4]
// called    [2, 5]
// deep-calls     {2, 3, 4}
// deep-called    {0, 2, 3, 5, 7}
// startStackOffset -12
// modifiedAddresses  [ALL]
L3:
  (void) puts("body 2");
  if(reg_var1 > 0) goto L2;
  goto L4;

// calls     [3]
// called    [0]
// deep-calls     {2, 3, 4}
// deep-called    {0, 7}
// startStackOffset -12
// modifiedAddresses  []
L5:
  reg_var1 = 41;
  goto L3;

// is exit block
// calls     []
// called    [0, 3]
// deep-calls     {}
// deep-called    {0, 2, 3, 5, 7}
// startStackOffset -12
// modifiedAddresses  []
L4:
  return 0;
}

// address: 08048c80.0
// full-signature: func(advanced_2_loop_with_multiple_exits, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 advanced_2_loop_with_multiple_exits(d4 ARG_0)
{
  reg_var1 = ARG_0;
  while(1) {
    (void) puts("body 1");
    reg_af = time(0);
    if(reg_af == 1) {
      (void) puts("took exit 1");
      break;
    }
    (void) puts("body 2");
    reg_ab = time(0);
    if(reg_ab == 2) {
      (void) puts("took exit 2");
      break;
    }
    reg_ac = reg_var1 == 1;
    reg_var1--;
    if(reg_ac) {
      (void) puts("normal exit");
      break;
    }
  }
  return 0;
}

// address: 08048d30.0
// full-signature: func(advanced_10_irreducible, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 advanced_10_irreducible(d4 ARG_0)
{
  reg_aa = ARG_0;
  (void) puts("b1");
  reg_ab = time(0);
  if(reg_aa == reg_ab) {
    reg_var1 = 0;
  } else {
    (void) puts("b2");
    reg_ac = time(0);
    reg_var1 = BIT_TO_INT(reg_ac == reg_aa + 1);
  }
  if(reg_var1 == 0) {
    (void) puts("b3");
  } else {
    (void) puts("b4");
  }
  (void) puts("b5");
  return 0;
}

// address: 08048dc0.0
// full-signature: func(advanced_11_nested_loops_complex_condition, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 advanced_11_nested_loops_complex_condition(d4 ARG_0)
{
  (void) puts("b0");
  reg_aa = time(0);
  if(reg_aa == ARG_0) {
    do {
      (void) puts("b2");
      while(1) {
        (void) puts("b3");
        reg_ac = time(0);
        if(reg_ac == reg_aa + 2) {
          reg_var1 = 1;
          break;
        }
        reg_ab = time(0);
        if(reg_ab != reg_aa + 3) {
          reg_var1 = 0;
          break;
        }
      }
      if(reg_var1 == 0) {
        break;
      }
      (void) puts("b1");
      reg_ad = time(0);
    } while(reg_ad == reg_aa + 1);
  }
  (void) puts("b9");
  return 0;
}

// address: 08048e80.0
// full-signature: func(advanced_12_nested_if_in_loop, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 advanced_12_nested_if_in_loop(d4 ARG_0)
{
  reg_aa = ARG_0;
  (void) puts("b0");
  do {
    (void) puts("b1");
    reg_ab = time(0);
    if(reg_aa == reg_ab) {
      (void) puts("b2");
      reg_ae = time(0);
      reg_var1 = BIT_TO_INT(reg_ae != reg_aa + 1);
    } else {
      (void) puts("b3");
      reg_ac = time(0);
      reg_var1 = BIT_TO_INT(reg_ac != reg_aa + 2);
    }
  } while(reg_var1 == 0);
  (void) puts("b4");
  return 0;
}

// address: 08048f30.0
// full-signature: func(advanced_20_jump_table_on_stack, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 advanced_20_jump_table_on_stack(d4 ARG_0)
{
  asm("l.jmp ss:[esp+eax*4+0x8]");
  (void) puts("is something else");
  return 0;
}

// address: 08049050.0
// full-signature: func(advanced_21_computed_jumps, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 advanced_21_computed_jumps(d4 ARG_0)
{
  reg_aa = ARG_0;
  (void) puts("start");
  if(reg_aa > 2) {
    (void) puts("is something else");
  } else {
    if(reg_aa != 0) {
      asm("jmp eax");
    }
    (void) puts("is 0");
  }
  return 0;
}

// address: 08049110.0
// full-signature: func(basic_5_head_controlled_loop, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_5_head_controlled_loop(d4 ARG_0)
{
  reg_var1 = ARG_0;
  (void) puts("before");
  while(reg_var1 != 42) {
    reg_var1++;
    (void) puts("body");
  }
  (void) puts("after");
  return 0;
}

// address: 08049160.0
// full-signature: func(basic_6_tail_controlled_loop, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_6_tail_controlled_loop(d4 ARG_0)
{
  reg_var1 = ARG_0;
  (void) puts("before");
  do {
    reg_var1++;
    (void) puts("body");
  } while(reg_var1 != 42);
  (void) puts("after");
  return 0;
}

// address: 080491b0.0
// full-signature: func(basic_8_forever_loop, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 basic_8_forever_loop(d4 ARG_0)
{
  if(ARG_0 == 42) {
    while(1) {
      (void) puts("loop body");
    }
  }
  return 0;
}

// address: 080491d2.0
// full-signature: func(basic_9_dead_block, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 basic_9_dead_block(void)
{
  (void) puts("entry");
  (void) puts("exit");
  return 0;
}

// address: 08049211.0
// full-signature: func(intermediate_17_forever_loop_with_extra_statement, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 intermediate_17_forever_loop_with_extra_statement(void)
{
  while(1) {
    // nothing
  }
}


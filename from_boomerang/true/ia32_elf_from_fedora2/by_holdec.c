// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048778.0
// signature= func(F_08048778, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048778(???)
{
  (void) F_080489a4();
  (void) F_08048a04();
  reg_result = F_08049ec0();
  return reg_result;
}

/* The decompilation of 0x080487a0 / F_080487a0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487b0 / F_080487b0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487c0 / F_080487c0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487d0 / F_080487d0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487e0 / F_080487e0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487f0 / F_080487f0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048800 / F_08048800 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048810 / F_08048810 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048820 / F_08048820 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048830 / F_08048830 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048840 / F_08048840 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048850 / F_08048850 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048860 / F_08048860 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048870 / F_08048870 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048880 / F_08048880 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048890 / F_08048890 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488a0 / F_080488a0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488b0 / F_080488b0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488c0 / F_080488c0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488d0 / F_080488d0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488e0 / F_080488e0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488f0 / F_080488f0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048900 / F_08048900 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048910 / F_08048910 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048920 / F_08048920 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048940 / F_08048940 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048950 / F_08048950 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048960 / F_08048960 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048970 / F_08048970 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 08048980.0
// signature= func(F_08048980, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048980(???)
{
  reg_ab = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, reg_ab);
  (void) STORE(local + 16, &ARG_0);
  (void) STORE(local + 20, 134520324);
  (void) STORE(local + 24, 134520396);
  (void) STORE(local + 28, InitValue(initial_value_of_edx));
  (void) STORE(local + 32, local + 32);
  (void) STORE(local + 8, 134515472);
  (void) F_08048890();
  asm("l.hlt");
  (void) STORE(local + 4, 0);
  (void) STORE(local, InitValue(initial_value_of_ebx));
  reg_ad = F_080489ad();
  reg_af = LOAD(local);
  (void) STORE(local, reg_ad);
  reg_result = LOAD(reg_af + 11643);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080489a4.0
// signature= func(F_080489a4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080489a4(???)
{
  (void) F_080489ad();
  reg_result = LOAD(InitValue(initial_value_of_ebx) + 11643);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080489ad.0
// signature= func(F_080489ad, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080489ad(???)
{
  reg_ac = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = LOAD(reg_ac + 11643);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080489c8.0
// signature= func(F_080489c8, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080489c8(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x0804b7e4)  ==  0) {
/* The decompilation of 0x080489c8 / F_080489c8 failed: java.lang.AssertionError */

// addr = 08048a04.0
// signature= func(F_08048a04, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048a04(???)
{
  reg_result = g_0x0804b658;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

/* The decompilation of 0x08048a30 / F_08048a30 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L1 in (void) STORE(ADD(reg_pp1, SEGMENT2ADDR(reg_pp2)), 0): The current setter is reg_zi1 while [reg_pp2] was found. Related expressions are [reg_zi5, reg_zi4, reg_pp9, reg_zi2, reg_pp4, reg_pp2, reg_zi1, reg_zi0] */

// addr = 08048db0.0
// signature= func(F_08048db0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048db0(???)
{
  reg_var1 = UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) / 32) * 4 + ARG_0 + 4;
  if(ARG_0  ==  0) {
    reg_var1 = UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) / 32) * 4 + 134527236;
  }
  reg_ab = UNSIGNED_EXTEND(LOAD(&ARG_1));
  reg_ae = LOAD(reg_var1);
  (void) STORE(reg_var1, LOAD(reg_var1) ^ (ARG_2 & 1 ^ LOAD(reg_var1) >> (NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) & 31) & 1) << (NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) & 31));
  return reg_ae >> (NARROW(reg_ab) & 31) & 1;
}

// addr = 08048e10.0
// signature= func(F_08048e10, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048e10(???)
{
  reg_ad = ARG_0;
  reg_result = F_080487f0();
  if(reg_ad  ==  reg_result && ARG_1  ==  6) {
    reg_result = 134521035;
  }
  return reg_result;
}

/* The decompilation of 0x08048e50 / F_08048e50 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L13 in reg_c3 = UNSIGNED_EXTEND(LOAD(ADD(reg_b3, reg_c2, SEGMENT2ADDR(reg_pp15)))): The current setter is reg_zj4 while [reg_pp15] was found. Related expressions are [reg_pp9, reg_pp63, reg_pp67, reg_zj24, reg_pp21, reg_pp26, reg_pp44, reg_pp41, reg_pp60, reg_zj8, reg_zj9, reg_zj4, reg_zj3, reg_zj6, reg_zj5, reg_zj0, reg_zj19, reg_zj18, reg_zj17, reg_zj1, reg_zj16, reg_pp50, reg_zj11, reg_zj12, reg_zj13, reg_zj14, reg_zj15, reg_pp32, reg_pp18, reg_pp52, reg_pp38, reg_pp15, reg_pp12] */

// addr = 08049490.0
// signature= func(F_08049490, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049490(???)
{
  reg_aa = F_08048820();
  reg_ac = LOAD(reg_aa);
  reg_result = F_08048e50();
  (void) STORE(reg_aa, reg_ac);
  return reg_result;
}

// addr = 080494f0.0
// signature= func(F_080494f0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080494f0(???)
{
  (void) STORE(local + 56, InitValue(initial_value_of_ebx));
  (void) STORE(local + 60, InitValue(initial_value_of_esi));
  (void) STORE(local + 64, InitValue(initial_value_of_edi));
  (void) STORE(local + 68, InitValue(initial_value_of_ebp));
  reg_ao = F_08048820();
  (void) STORE(local + 52, LOAD(reg_ao));
  if(ARG_0  <  0) {
    (void) F_08048840();
    reg_var3 = 1;
  } else {
    reg_bc = ARG_0;
    if(g_0x0804b7c0  <=  ARG_0 && ARG_0  >  536870910) {
      reg_var3 = 1;
    } else {
      reg_var3 = 0;
    }
  }
  if(reg_var3  ==  0) {
    if(g_0x0804b7c0  <=  ARG_0) {
      reg_var1 = g_0x0804b7cc;
      if(reg_var1  ==  134526916) {
        (void) STORE(local + 28, 8);
        reg_al = F_08049ba0();
        reg_var1 = reg_al;
        (void) STORE(&g_0x0804b7cc, reg_al);
        reg_ad = g_0x0804b7c4;
        (void) STORE(reg_var1 + 4, g_0x0804b7c8);
        (void) STORE(reg_var1, reg_ad);
      }
      (void) STORE(local + 28, reg_var1);
      (void) STORE(local + 32, reg_bc * 8 + 8);
      reg_am = F_08049c20();
      (void) STORE(&g_0x0804b7cc, reg_am);
      (void) STORE(local + 32, 0);
      reg_at = g_0x0804b7c0;
      (void) STORE(local + 28, g_0x0804b7c0 * 8 + reg_am);
      (void) STORE(local + 36, reg_at * -8 + reg_bc * 8 + 8);
      (void) F_08048940();
      (void) STORE(&g_0x0804b7c0, reg_bc + 1);
    }
    reg_aw = LOAD(g_0x0804b7cc + ARG_0 * 8);
    reg_var2 = LOAD(g_0x0804b7cc + ARG_0 * 8 + 4);
    reg_aj = ARG_2;
    (void) STORE(local + 44, ARG_3);
    reg_bd = ARG_1;
    (void) STORE(local + 28, reg_var2);
    (void) STORE(local + 32, reg_aw);
    (void) STORE(local + 36, reg_bd);
    (void) STORE(local + 40, reg_aj);
    reg_af = F_08049490();
    if(reg_aw  <=  reg_af) {
      (void) STORE(g_0x0804b7cc + ARG_0 * 8, reg_af + 1);
      if(reg_var2  !=  134526976) {
        (void) STORE(local + 28, reg_var2);
        (void) F_08049df0();
      }
      reg_ar = g_0x0804b7cc;
      (void) STORE(local + 28, reg_af + 1);
      reg_au = F_08049ba0();
      reg_var2 = reg_au;
      reg_an = ARG_3;
      reg_bb = ARG_2;
      (void) STORE(ARG_0 * 8 + reg_ar + 4, reg_var2);
      reg_ba = ARG_1;
      (void) STORE(local + 28, reg_var2);
      (void) STORE(local + 32, reg_af + 1);
      (void) STORE(local + 36, reg_ba);
      (void) STORE(local + 40, reg_bb);
      (void) STORE(local + 44, reg_an);
      (void) F_08049490();
    }
    reg_ab = F_08048820();
    reg_result = reg_var2;
    (void) STORE(reg_ab, LOAD(local + 52));
  } else {
    (void) F_08049b00();
    (void) STORE(local + 12, 134527232);
    (void) STORE(local + 24, local + 68);
    (void) STORE(local + 4, LOAD(local + 36));
    (void) STORE(local + 8, -1);
    (void) STORE(local, LOAD(local + 32));
    reg_result = F_080494f0();
  }
  return reg_result;
}

// addr = 08049660.0
// signature= func(F_08049660, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049660(???)
{
  reg_result = F_080494f0();
  return reg_result;
}

// addr = 080496b0.0
// signature= func(F_080496b0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080496b0(???)
{
  (void) STORE(local + 56, InitValue(initial_value_of_ebp));
  reg_ab = ARG_1;
  (void) STORE(local + 48, InitValue(initial_value_of_ebx));
  (void) STORE(local + 52, InitValue(initial_value_of_edi));
  (void) STORE(local, reg_ab);
  reg_result = ARG_0;
  ASSERT UNDEF  !=  0;
  (void) intern_memfillL(local + 4, 0, 8);
  (void) STORE(reg_result + 12, LOAD(local + 12));
  (void) STORE(reg_result + 16, LOAD(local + 16));
  (void) STORE(reg_result + 20, LOAD(local + 20));
  (void) STORE(reg_result + 24, LOAD(local + 24));
  (void) STORE(reg_result + 28, LOAD(local + 28));
  (void) STORE(reg_result + 32, LOAD(local + 32));
  (void) STORE(reg_result + 4, LOAD(local + 4));
  (void) STORE(reg_result + 8, LOAD(local + 8));
  (void) STORE(reg_result, LOAD(local));
  return reg_result;
}

// addr = 08049720.0
// signature= func(F_08049720, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049720(???)
{
  (void) STORE(local + 72, InitValue(initial_value_of_ebx));
  (void) STORE(local + 76, InitValue(initial_value_of_ebp));
  reg_ab = ARG_1;
  (void) STORE(local + 4, local + 20);
  (void) STORE(local + 8, reg_ab);
  (void) F_080496b0();
  (void) STORE(local + 8, -1);
  reg_ac = ARG_2;
  (void) STORE(local + 12, local + 20);
  (void) STORE(local + 4, reg_ac);
  (void) STORE(local, ARG_0);
  reg_result = F_080494f0();
  return reg_result;
}

// addr = 080497f0.0
// signature= func(F_080497f0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080497f0(???)
{
  (void) STORE(local + 72, InitValue(initial_value_of_ebp));
  reg_ab = SIGNED_EXTEND(LOAD(&ARG_1));
  (void) STORE(local + 68, InitValue(initial_value_of_ebx));
  (void) STORE(local + 16, g_0x0804b900);
  (void) STORE(local, local + 16);
  (void) STORE(local + 20, g_0x0804b904);
  (void) STORE(local + 24, g_0x0804b908);
  (void) STORE(local + 28, g_0x0804b90c);
  (void) STORE(local + 32, g_0x0804b910);
  (void) STORE(local + 36, g_0x0804b914);
  (void) STORE(local + 4, reg_ab);
  (void) STORE(local + 40, g_0x0804b918);
  (void) STORE(local + 44, g_0x0804b91c);
  (void) STORE(local + 48, g_0x0804b920);
  (void) STORE(local + 8, 1);
  (void) F_08048db0();
  (void) STORE(local + 12, local + 16);
  (void) STORE(local + 8, -1);
  (void) STORE(local + 4, ARG_0);
  (void) STORE(local, 0);
  reg_result = F_080494f0();
  return reg_result;
}

// addr = 08049890.0
// signature= func(F_08049890, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049890(???)
{
  reg_result = F_080497f0();
  return reg_result;
}

// addr = 08049ac0.0
// signature= func(F_08049ac0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049ac0(???)
{
  reg_result = F_080498b0();
  return reg_result;
}

/* The decompilation of 0x08049b00 / F_08049b00 failed: java.lang.RuntimeException: F_08049b00 has no exit blocks */

/* The decompilation of 0x08049ba0 / F_08049ba0 failed: java.lang.RuntimeException: The jump goto L18 in block 20 got converted to a default jump after simplification and is not the last jump. */

/* The decompilation of 0x08049c20 / F_08049c20 failed: java.lang.RuntimeException: The jump goto L12 in block 14 got converted to a default jump after simplification and is not the last jump. */

/* The decompilation of 0x08049e12 / F_08049e12 failed: java.lang.RuntimeException: java.lang.AssertionError */

/* The decompilation of 0x08049e56 / F_08049e56 failed: java.lang.RuntimeException: java.lang.RuntimeException: Block L2 is unused: called=[] isEntry=false isIncluded=false */

// addr = 08049e90.0
// signature= func(F_08049e90, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049e90(???)
{
  (void) F_08049e99();
  reg_result = F_08048810();
  return reg_result;
}

// addr = 08049e99.0
// signature= func(F_08049e99, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049e99(???)
{
  reg_var1 = 0;
  if(LOAD(LOAD(InitStackPointer) + 6283)  !=  0) {
    reg_var1 = LOAD(LOAD(LOAD(InitStackPointer) + 6283));
  }
  (void) STORE(InitStackPointer, reg_var1);
  reg_result = F_08048810();
  return reg_result;
}

// addr = 08049ec0.0
// signature= func(F_08049ec0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049ec0(???)
{
/* The decompilation of 0x08049ec0 / F_08049ec0 failed: java.lang.AssertionError */

// addr = 08049ee4.0
// signature= func(F_08049ee4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049ee4(???)
{
  (void) F_08049eed();
  reg_result = F_080489c8();
  return reg_result;
}

// addr = 08049eed.0
// signature= func(F_08049eed, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049eed(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  reg_result = F_080489c8();
  return reg_result;
}


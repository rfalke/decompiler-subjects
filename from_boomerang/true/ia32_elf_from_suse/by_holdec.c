// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080487d8 / F_080487d8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487e8 / F_080487e8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487f8 / F_080487f8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048808 / F_08048808 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048818 / F_08048818 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048828 / F_08048828 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048838 / F_08048838 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048848 / F_08048848 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048858 / F_08048858 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048868 / F_08048868 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048878 / F_08048878 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048888 / F_08048888 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048898 / F_08048898 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488a8 / F_080488a8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488b8 / F_080488b8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488c8 / F_080488c8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488d8 / F_080488d8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488e8 / F_080488e8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488f8 / F_080488f8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048908 / F_08048908 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048918 / F_08048918 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048928 / F_08048928 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048938 / F_08048938 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048948 / F_08048948 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048958 / F_08048958 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048968 / F_08048968 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048978 / F_08048978 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048988 / F_08048988 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048998 / F_08048998 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080489a8 / F_080489a8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080489ed.0
// signature= func(F_080489ed, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080489ed(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  if(LOAD(reg_aa + 11603)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_aa + 11603));
  }
  return LOAD(InitStackPointer);
}

/* The decompilation of 0x08048a80 / usage failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L1 in (void) STORE(ADD(reg_pp1, SEGMENT2ADDR(reg_pp2)), 0): The current setter is reg_zi1 while [reg_pp2] was found. Related expressions are [reg_zi5, reg_zi4, reg_pp9, reg_zi2, reg_pp4, reg_pp2, reg_zi1, reg_zi0] */

/* The decompilation of 0x08048b60 / main failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L1 in (void) STORE(ADD(reg_pp1, SEGMENT2ADDR(reg_pp2)), 0): The current setter is reg_zi1 while [reg_pp2] was found. Related expressions are [reg_zi5, reg_zi4, reg_pp9, reg_zi2, reg_pp4, reg_pp2, reg_zi1, reg_zi0] */

// addr = 08048c70.0
// signature= func(close_stdout_set_file_name, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? close_stdout_set_file_name(???)
{
  reg_result = ARG_0;
  (void) STORE(&g_0x0804b808, ARG_0);
  return reg_result;
}

// addr = 08048c80.0
// signature= func(close_stdout, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? close_stdout(???)
{
  reg_var1 = BIT_TO_INT(BIT_TEST(31, BIT_TO_INT(BIT_TEST(31, (LOAD(g_0x0804b800) / 32 & 1) + -1) || BIT_TEST(31, LOAD(g_0x0804b800) / 32 & 1)) * -1)) * -1;
  if(reg_var1  ==  0) {
    reg_var2 = 1;
  } else {
    reg_result = F_080487d8();
    if(reg_result  ==  0) {
      reg_var2 = 0;
    } else {
      reg_var2 = 1;
    }
  }
  if(reg_var2  !=  0) {
    reg_result = F_08048918();
    if(reg_result  !=  0) {
      reg_result = F_08048858();
      reg_var1 = LOAD(reg_result);
    }
    if(reg_var1  >=  0) {
      (void) F_08048828();
      if(g_0x0804b808  ==  0) {
        reg_result = F_08048998();
      } else {
        (void) quotearg_colon();
        reg_result = F_08048998();
      }
    }
  }
  return reg_result;
}

// addr = 08048d50.0
// signature= func(get_quoting_style, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? get_quoting_style(???)
{
  reg_var1 = ARG_0;
  if(reg_var1  ==  0) {
    reg_var1 = 134527264;
  }
  return LOAD(reg_var1);
}

// addr = 08048d70.0
// signature= func(set_quoting_style, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? set_quoting_style(???)
{
  reg_var1 = ARG_0;
  if(reg_var1  ==  0) {
    reg_var1 = 134527264;
  }
  reg_result = ARG_1;
  (void) STORE(reg_var1, ARG_1);
  return reg_result;
}

// addr = 08048d90.0
// signature= func(set_char_quoting, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? set_char_quoting(???)
{
  reg_var1 = UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) / 32) * 4 + ARG_0 + 4;
  if(ARG_0  ==  0) {
    reg_var1 = UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) / 32) * 4 + 134527268;
  }
  reg_ac = UNSIGNED_EXTEND(LOAD(&ARG_1));
  reg_ab = LOAD(reg_var1);
  (void) STORE(reg_var1, LOAD(reg_var1) ^ (ARG_2 & 1 ^ LOAD(reg_var1) >> (NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) & 31) & 1) << (NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) & 31));
  return reg_ab >> (NARROW(reg_ac) & 31) & 1;
}

// addr = 08048e00.0
// signature= func(clone_quoting_options, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? clone_quoting_options(???)
{
  reg_af = F_08048858();
  reg_ae = LOAD(reg_af);
  reg_result = xmalloc();
  reg_var1 = ARG_0;
  if(reg_var1  ==  0) {
    reg_var1 = 134527264;
  }
  (void) STORE(reg_result + 12, LOAD(reg_var1 + 12));
  (void) STORE(reg_result + 16, LOAD(reg_var1 + 16));
  (void) STORE(reg_result + 20, LOAD(reg_var1 + 20));
  (void) STORE(reg_result + 24, LOAD(reg_var1 + 24));
  (void) STORE(reg_result + 28, LOAD(reg_var1 + 28));
  (void) STORE(reg_result + 32, LOAD(reg_var1 + 32));
  (void) STORE(reg_result + 4, LOAD(reg_var1 + 4));
  (void) STORE(reg_result + 8, LOAD(reg_var1 + 8));
  (void) STORE(reg_result, LOAD(reg_var1));
  (void) STORE(reg_af, reg_ae);
  return reg_result;
}

// addr = 08048e70.0
// signature= func(quoting_options_from_style, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? quoting_options_from_style(???)
{
  ASSERT UNDEF  !=  0;
  (void) STORE(local + 48, InitValue(initial_value_of_ebx));
  (void) STORE(local + 52, InitValue(initial_value_of_edi));
  (void) STORE(local + 56, InitValue(initial_value_of_ebp));
  (void) STORE(local, InitValue(initial_value_of_edx));
  (void) intern_memfillL(local + 4, 0, 8);
  (void) STORE(InitValue(initial_value_of_eax) + 12, LOAD(local + 12));
  (void) STORE(InitValue(initial_value_of_eax) + 16, LOAD(local + 16));
  (void) STORE(InitValue(initial_value_of_eax) + 20, LOAD(local + 20));
  (void) STORE(InitValue(initial_value_of_eax) + 24, LOAD(local + 24));
  (void) STORE(InitValue(initial_value_of_eax) + 28, LOAD(local + 28));
  (void) STORE(InitValue(initial_value_of_eax) + 32, LOAD(local + 32));
  (void) STORE(InitValue(initial_value_of_eax) + 4, LOAD(local + 4));
  (void) STORE(InitValue(initial_value_of_eax) + 8, LOAD(local + 8));
  (void) STORE(InitValue(initial_value_of_eax), LOAD(local));
  return InitValue(initial_value_of_eax);
}

// addr = 08048ed0.0
// signature= func(gettext_quote, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? gettext_quote(???)
{
  reg_ad = F_08048828();
  reg_result = reg_ad;
  if((NARROW(InitValue(initial_value_of_edx) & 0xffffff00 & reg_ad) & 1 | NARROW(WIDEN(BIT_TO_INT(reg_ad  ==  InitValue(initial_value_of_eax))) & reg_ad & 0xffffff00) & 1 | NARROW(InitValue(initial_value_of_edx) & 0xffffff00 & WIDEN(BIT_TO_INT(InitValue(initial_value_of_edx)  ==  6))) & 1 | BIT_TO_INT(reg_ad  ==  InitValue(initial_value_of_eax)) & BIT_TO_INT(InitValue(initial_value_of_edx)  ==  6) & 1)  !=  0) {
    reg_result = 134521788;
  }
  return reg_result;
}

/* The decompilation of 0x08048f20 / quotearg_buffer_restyled failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L12 in reg_b2 = UNSIGNED_EXTEND(LOAD(ADD(reg_b1, reg_e4, SEGMENT2ADDR(reg_pp13)))): The current setter is reg_zj3 while [reg_pp13] was found. Related expressions are [reg_zj21, reg_zj22, reg_pp66, reg_zj20, reg_pp7, reg_pp64, reg_pp21, reg_pp46, reg_pp43, reg_pp23, reg_zj8, reg_zj7, reg_zj9, reg_zj4, reg_zj3, reg_zj6, reg_zj5, reg_zj19, reg_zj0, reg_zj18, reg_zj2, reg_zj16, reg_zj10, reg_zj11, reg_zj13, reg_pp79, reg_zj15, reg_pp31, reg_pp56, reg_pp71, reg_pp34, reg_pp37, reg_pp13, reg_pp10] */

// addr = 08049560.0
// signature= func(quotearg_buffer, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? quotearg_buffer(???)
{
  reg_ac = F_08048858();
  reg_ab = LOAD(reg_ac);
  reg_result = quotearg_buffer_restyled();
  (void) STORE(reg_ac, reg_ab);
  return reg_result;
}

// addr = 080495c0.0
// signature= func(quotearg_n_options, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? quotearg_n_options(???)
{
  (void) STORE(local + 108, InitValue(initial_value_of_ecx));
  (void) STORE(local + 112, InitValue(initial_value_of_edx));
  (void) STORE(local + 116, InitValue(initial_value_of_eax));
  (void) STORE(local + 120, InitValue(initial_value_of_ebx));
  (void) STORE(local + 124, InitValue(initial_value_of_esi));
  (void) STORE(local + 128, InitValue(initial_value_of_edi));
  (void) STORE(local + 132, InitValue(initial_value_of_ebp));
  reg_bi = F_08048858();
  (void) STORE(local + 104, LOAD(reg_bi));
  if(LOAD(local + 116)  <  0) {
    (void) F_08048878();
    reg_var5 = 1;
  } else {
    reg_ar = LOAD(local + 116);
    if(g_0x0804b7d8  >  LOAD(local + 116)) {
      reg_var5 = 0;
    } else {
      reg_as = LOAD(local + 116);
      if(LOAD(local + 116)  >  536870910) {
        reg_var5 = 1;
      } else {
        reg_var1 = g_0x0804b7e4;
        if(reg_var1  ==  134526940) {
          (void) STORE(local + 76, 8);
          reg_aq = xmalloc();
          reg_var1 = reg_aq;
          (void) STORE(&g_0x0804b7e4, reg_aq);
          reg_at = g_0x0804b7dc;
          (void) STORE(reg_var1 + 4, g_0x0804b7e0);
          (void) STORE(reg_var1, reg_at);
        }
        (void) STORE(local + 76, reg_var1);
        (void) STORE(local + 80, reg_ar * 8 + 8);
        reg_ac = xrealloc();
        (void) STORE(&g_0x0804b7e4, reg_ac);
        reg_var2 = g_0x0804b7d8 * 8 + reg_ac;
        reg_var2a = reg_var2;
        reg_var3 = g_0x0804b7d8 * -8 + reg_ar * 8 + 8;
        if(reg_var3  >  7 && (NARROW(reg_var2a) & 4)  !=  0) {
          reg_var3 += -4;
          (void) STORE(reg_var2, 0);
          reg_var2 += 4;
        }
        ASSERT 0;
        (void) intern_memfillL(reg_var2, 0, reg_var3 / 4);
        (void) STORE(&g_0x0804b7d8, reg_as + 1);
        reg_var5 = 0;
      }
    }
  }
  if(reg_var5  ==  0) {
    reg_bk = LOAD(g_0x0804b7e4 + LOAD(local + 116) * 8);
    reg_var4 = LOAD(g_0x0804b7e4 + LOAD(local + 116) * 8 + 4);
    reg_bh = LOAD(local + 112);
    (void) STORE(local + 76, reg_var4);
    (void) STORE(local + 80, reg_bk);
    (void) STORE(local + 84, reg_bh);
    (void) STORE(local + 88, LOAD(local + 108));
    (void) STORE(local + 92, ARG_0);
    reg_ao = quotearg_buffer();
    if(reg_bk  <=  reg_ao) {
      (void) STORE(g_0x0804b7e4 + LOAD(local + 116) * 8, reg_ao + 1);
      if(reg_var4  !=  134527008) {
        (void) STORE(local + 76, reg_var4);
        (void) F_08048968();
      }
      reg_ay = g_0x0804b7e4;
      (void) STORE(local + 76, reg_ao + 1);
      reg_au = xmalloc();
      reg_var4 = reg_au;
      reg_ai = ARG_0;
      (void) STORE(LOAD(local + 116) * 8 + reg_ay + 4, reg_var4);
      reg_ba = LOAD(local + 112);
      (void) STORE(local + 76, reg_var4);
      (void) STORE(local + 80, reg_ao + 1);
      (void) STORE(local + 84, reg_ba);
      (void) STORE(local + 88, LOAD(local + 108));
      (void) STORE(local + 92, reg_ai);
      (void) quotearg_buffer();
    }
    reg_bj = F_08048858();
    reg_result = reg_var4;
    (void) STORE(reg_bj, LOAD(local + 104));
  } else {
    (void) xalloc_die();
    reg_ap = SIGNED_EXTEND(LOAD(local + 84));
    (void) STORE(local + 16, g_0x0804b920);
    (void) STORE(local + 20, g_0x0804b924);
    (void) STORE(local + 24, g_0x0804b928);
    (void) STORE(local + 28, g_0x0804b92c);
    (void) STORE(local + 32, g_0x0804b930);
    (void) STORE(local + 36, g_0x0804b934);
    (void) STORE(local + 4, reg_ap);
    (void) STORE(local + 40, g_0x0804b938);
    (void) STORE(local + 44, g_0x0804b93c);
    (void) STORE(local + 48, g_0x0804b940);
    (void) STORE(local + 68, InitValue(initial_value_of_ebx));
    (void) STORE(local + 72, local + 132);
    (void) STORE(local + 8, 1);
    (void) STORE(local, local + 16);
    (void) set_char_quoting();
    (void) STORE(local, local + 16);
    reg_result = quotearg_n_options();
  }
  return reg_result;
}

// addr = 08049750.0
// signature= func(quotearg_char, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? quotearg_char(???)
{
  (void) STORE(local + 68, InitValue(initial_value_of_ebx));
  (void) STORE(local + 72, InitValue(initial_value_of_ebp));
  reg_aa = SIGNED_EXTEND(LOAD(&ARG_1));
  (void) STORE(local + 16, g_0x0804b920);
  (void) STORE(local + 20, g_0x0804b924);
  (void) STORE(local + 24, g_0x0804b928);
  (void) STORE(local + 28, g_0x0804b92c);
  (void) STORE(local + 32, g_0x0804b930);
  (void) STORE(local + 36, g_0x0804b934);
  (void) STORE(local + 4, reg_aa);
  (void) STORE(local + 40, g_0x0804b938);
  (void) STORE(local + 44, g_0x0804b93c);
  (void) STORE(local + 48, g_0x0804b940);
  (void) STORE(local + 8, 1);
  (void) STORE(local, local + 16);
  (void) set_char_quoting();
  (void) STORE(local, local + 16);
  reg_result = quotearg_n_options();
  return reg_result;
}

// addr = 080497e0.0
// signature= func(quotearg_colon, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? quotearg_colon(???)
{
  reg_result = quotearg_char();
  return reg_result;
}

// addr = 08049800.0
// signature= func(quotearg_n_style_mem, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? quotearg_n_style_mem(???)
{
  (void) STORE(local + 68, InitValue(initial_value_of_ebx));
  (void) STORE(local + 72, InitValue(initial_value_of_ebp));
  (void) quoting_options_from_style();
  (void) STORE(local, local + 16);
  reg_result = quotearg_n_options();
  return reg_result;
}

// addr = 08049830.0
// signature= func(quotearg_n_style, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? quotearg_n_style(???)
{
  (void) STORE(local + 68, InitValue(initial_value_of_ebx));
  (void) STORE(local + 72, InitValue(initial_value_of_ebp));
  (void) quoting_options_from_style();
  (void) STORE(local, local + 16);
  reg_result = quotearg_n_options();
  return reg_result;
}

// addr = 08049860.0
// signature= func(quotearg_style, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? quotearg_style(???)
{
  reg_result = quotearg_n_style();
  return reg_result;
}

// addr = 080498b0.0
// signature= func(quotearg, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? quotearg(???)
{
  reg_result = quotearg_n();
  return reg_result;
}

// addr = 08049af0.0
// signature= func(version_etc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? version_etc(???)
{
  reg_result = version_etc_va();
  return reg_result;
}

/* The decompilation of 0x08049b20 / xalloc_die failed: java.lang.RuntimeException: xalloc_die has no exit blocks */

// addr = 08049b80.0
// signature= func(xcalloc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? xcalloc(???)
{
  reg_var5 = InitValue(initial_value_of_edi);
  reg_var2 = local + 144;
  reg_var1 = local + 120;
  (void) STORE(local + 140, InitValue(initial_value_of_ebx));
  reg_var6 = LOAD(reg_var2 + 8);
  (void) STORE(reg_var2, InitValue(initial_value_of_ebp));
  if(reg_var6  >  -1 / LOAD(reg_var2 + 12)) {
    reg_var11 = 1;
  } else {
    (void) STORE(reg_var1 + 4, LOAD(reg_var2 + 12));
    (void) STORE(reg_var1, reg_var6);
    reg_result = F_08048948();
    if(reg_result  ==  0) {
      reg_var11 = 1;
    } else {
      reg_var11 = 0;
    }
  }
  if(reg_var11  ==  0) {
    reg_var10 = 0;
  } else {
    (void) xalloc_die();
    reg_var4 = InitValue(initial_value_of_esi);
    while(1) {
      while(1) {
        reg_bf = LOAD(reg_var1 + 8);
        (void) STORE(reg_var1 + -12, LOAD(reg_var1 + 4));
        (void) STORE(reg_var1 + -4, reg_var2);
        (void) STORE(reg_var1 + -8, reg_bf);
        reg_result = F_080488d8();
        if(reg_result  !=  0) {
          reg_var8 = 1;
          break;
        }
        (void) xalloc_die();
        reg_cd = LOAD(reg_var1 + -8);
        reg_ax = LOAD(reg_var1 + -4);
        (void) STORE(reg_var1 + -16, reg_var1 + -4);
        reg_ak = LOAD(reg_ax);
        if(reg_cd  !=  0 && LOAD(reg_ax)  <  0) {
          reg_var8 = 0;
          break;
        }
        if(reg_cd  ==  0) {
          reg_var3 = reg_ak;
          if(reg_ak  ==  0) {
            reg_var3 = 64;
          }
        } else {
          reg_var3 = reg_ak * 2;
        }
        (void) STORE(reg_ax, reg_var3);
        reg_var2 = LOAD(reg_var1 + -16);
        (void) STORE(reg_var1 + -8, reg_cd);
        (void) STORE(reg_var1 + -4, reg_var3);
        reg_var1 += -12;
      }
      if(reg_var8  !=  0) {
        reg_var9 = 1;
        break;
      }
      (void) xalloc_die();
      reg_bs = LOAD(reg_var1 + -20);
      reg_bd = LOAD(reg_var1 + -16);
      (void) STORE(reg_var1 + -28, reg_var1 + -16);
      (void) STORE(reg_var1 + -32, reg_var5);
      (void) STORE(reg_var1 + -36, reg_var4);
      (void) STORE(reg_var1 + -40, reg_var6);
      reg_ae = LOAD(reg_bd);
      reg_al = LOAD(reg_var1 + -12);
      if(reg_bs  !=  0 && LOAD(reg_bd)  >  0x7fffffff / LOAD(reg_var1 + -12)) {
        reg_var9 = 0;
        break;
      }
      if(reg_bs  ==  0) {
        reg_var7 = reg_ae;
        if(reg_ae  ==  0) {
          reg_var7 = 64 / reg_al + WIDEN(BIT_TO_INT(64 / reg_al  ==  0));
        }
      } else {
        reg_var7 = reg_ae * 2;
      }
      reg_cf = LOAD(reg_var1 + -12);
      (void) STORE(reg_bd, reg_var7);
      reg_var6 = LOAD(reg_var1 + -40);
      reg_var4 = LOAD(reg_var1 + -36);
      reg_var5 = LOAD(reg_var1 + -32);
      reg_var2 = LOAD(reg_var1 + -28);
      (void) STORE(reg_var1 + -16, reg_cf * reg_var7);
      (void) STORE(reg_var1 + -20, reg_bs);
      reg_var1 += -24;
    }
    if(reg_var9  ==  0) {
      (void) xalloc_die();
      reg_am = LOAD(reg_var1 + -40);
      reg_cb = LOAD(reg_var1 + -44);
      (void) STORE(reg_var1 + -56, reg_var1 + -28);
      (void) STORE(reg_var1 + -60, reg_bd);
      (void) STORE(reg_var1 + -64, reg_al);
      if(reg_cb  >  -1 / reg_am) {
        reg_var10 = 1;
      } else {
        (void) STORE(reg_var1 + -76, reg_am * reg_cb);
        (void) STORE(reg_var1 + -80, LOAD(reg_var1 + -48));
        reg_result = F_080488d8();
        if(reg_result  ==  0) {
          reg_var10 = 1;
        } else {
          reg_var10 = 0;
        }
      }
    } else {
      reg_var10 = 0;
    }
  }
  if(reg_var10  !=  0) {
    (void) xalloc_die();
    (void) STORE(reg_var1 + -84, reg_var1 + -56);
    (void) STORE(reg_var1 + -92, LOAD(reg_var1 + -76));
    reg_result = F_08048868();
    if(reg_result  ==  0) {
      reg_bo = LOAD(reg_var1 + -48);
      (void) xalloc_die();
      reg_cl = LOAD(reg_var1 + -84);
      (void) STORE(reg_var1 + -100, reg_bo);
      (void) STORE(reg_var1 + -120, reg_cl);
      (void) STORE(reg_var1 + -96, reg_var1 + -84);
      reg_cm = xmalloc();
      reg_cc = LOAD(reg_var1 + -88);
      (void) STORE(reg_var1 + -112, reg_cl);
      (void) STORE(reg_var1 + -116, reg_cc);
      (void) STORE(reg_var1 + -120, reg_cm);
      reg_result = F_08048908();
    }
  }
  return reg_result;
}

// addr = 08049bc0.0
// signature= func(xrealloc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? xrealloc(???)
{
  reg_var4 = InitValue(initial_value_of_esi);
  reg_var5 = InitValue(initial_value_of_edi);
  reg_var6 = InitValue(initial_value_of_ebx);
  reg_var2 = InitValue(initial_value_of_ebp);
  reg_var1 = InitStackPointer;
  while(1) {
    while(1) {
      reg_bv = LOAD(reg_var1 + 8);
      (void) STORE(reg_var1 + -12, LOAD(reg_var1 + 4));
      (void) STORE(reg_var1 + -4, reg_var2);
      (void) STORE(reg_var1 + -8, reg_bv);
      reg_result = F_080488d8();
      if(reg_result  !=  0) {
        reg_var8 = 1;
        break;
      }
      (void) xalloc_die();
      reg_ae = LOAD(reg_var1 + -8);
      reg_af = LOAD(reg_var1 + -4);
      (void) STORE(reg_var1 + -16, reg_var1 + -4);
      reg_bx = LOAD(reg_af);
      if(reg_ae  !=  0 && LOAD(reg_af)  <  0) {
        reg_var8 = 0;
        break;
      }
      if(reg_ae  ==  0) {
        reg_var3 = reg_bx;
        if(reg_bx  ==  0) {
          reg_var3 = 64;
        }
      } else {
        reg_var3 = reg_bx * 2;
      }
      (void) STORE(reg_af, reg_var3);
      reg_var2 = LOAD(reg_var1 + -16);
      (void) STORE(reg_var1 + -8, reg_ae);
      (void) STORE(reg_var1 + -4, reg_var3);
      reg_var1 += -12;
    }
    if(reg_var8  !=  0) {
      reg_var9 = 1;
      break;
    }
    (void) xalloc_die();
    reg_bn = LOAD(reg_var1 + -20);
    reg_bd = LOAD(reg_var1 + -16);
    (void) STORE(reg_var1 + -28, reg_var1 + -16);
    (void) STORE(reg_var1 + -32, reg_var5);
    (void) STORE(reg_var1 + -36, reg_var4);
    (void) STORE(reg_var1 + -40, reg_var6);
    reg_ar = LOAD(reg_bd);
    reg_cb = LOAD(reg_var1 + -12);
    if(reg_bn  !=  0 && LOAD(reg_bd)  >  0x7fffffff / LOAD(reg_var1 + -12)) {
      reg_var9 = 0;
      break;
    }
    if(reg_bn  ==  0) {
      reg_var7 = reg_ar;
      if(reg_ar  ==  0) {
        reg_var7 = 64 / reg_cb + WIDEN(BIT_TO_INT(64 / reg_cb  ==  0));
      }
    } else {
      reg_var7 = reg_ar * 2;
    }
    reg_ca = LOAD(reg_var1 + -12);
    (void) STORE(reg_bd, reg_var7);
    reg_var6 = LOAD(reg_var1 + -40);
    reg_var4 = LOAD(reg_var1 + -36);
    reg_var5 = LOAD(reg_var1 + -32);
    reg_var2 = LOAD(reg_var1 + -28);
    (void) STORE(reg_var1 + -16, reg_ca * reg_var7);
    (void) STORE(reg_var1 + -20, reg_bn);
    reg_var1 += -24;
  }
  if(reg_var9  ==  0) {
    (void) xalloc_die();
    reg_ak = LOAD(reg_var1 + -40);
    reg_at = LOAD(reg_var1 + -44);
    (void) STORE(reg_var1 + -56, reg_var1 + -28);
    (void) STORE(reg_var1 + -60, reg_bd);
    (void) STORE(reg_var1 + -64, reg_cb);
    if(reg_at  >  -1 / reg_ak) {
      reg_var10 = 0;
    } else {
      (void) STORE(reg_var1 + -76, reg_ak * reg_at);
      (void) STORE(reg_var1 + -80, LOAD(reg_var1 + -48));
      reg_result = F_080488d8();
      if(reg_result  ==  0) {
        reg_var10 = 0;
      } else {
        reg_var10 = 1;
      }
    }
  } else {
    reg_var10 = 1;
  }
  if(reg_var10  ==  0) {
    (void) xalloc_die();
    (void) STORE(reg_var1 + -84, reg_var1 + -56);
    (void) STORE(reg_var1 + -92, LOAD(reg_var1 + -76));
    reg_result = F_08048868();
    if(reg_result  ==  0) {
      reg_aj = LOAD(reg_var1 + -48);
      (void) xalloc_die();
      reg_ay = LOAD(reg_var1 + -84);
      (void) STORE(reg_var1 + -100, reg_aj);
      (void) STORE(reg_var1 + -120, reg_ay);
      (void) STORE(reg_var1 + -96, reg_var1 + -84);
      reg_bw = xmalloc();
      reg_an = LOAD(reg_var1 + -88);
      (void) STORE(reg_var1 + -112, reg_ay);
      (void) STORE(reg_var1 + -116, reg_an);
      (void) STORE(reg_var1 + -120, reg_bw);
      reg_result = F_08048908();
    }
  }
  return reg_result;
}

// addr = 08049ca0.0
// signature= func(xnrealloc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? xnrealloc(???)
{
  (void) STORE(local + 60, InitValue(initial_value_of_esi));
  (void) STORE(local + 64, InitValue(initial_value_of_ebp));
  reg_af = ARG_2;
  (void) STORE(local + 56, InitValue(initial_value_of_ebx));
  reg_ab = ARG_1;
  if(ARG_1  >  -1 / reg_af) {
    reg_var1 = 1;
  } else {
    (void) STORE(local + 40, ARG_0);
    (void) STORE(local + 44, reg_ab * reg_af);
    reg_result = F_080488d8();
    if(reg_result  ==  0) {
      reg_var1 = 1;
    } else {
      reg_var1 = 0;
    }
  }
  if(reg_var1  !=  0) {
    (void) xalloc_die();
    (void) STORE(local + 28, LOAD(local + 44));
    (void) STORE(local + 36, local + 64);
    reg_result = F_08048868();
    if(reg_result  ==  0) {
      reg_al = ARG_0;
      (void) xalloc_die();
      reg_am = LOAD(local + 36);
      (void) STORE(local + 20, reg_al);
      (void) STORE(local + 24, local + 36);
      (void) STORE(local, reg_am);
      reg_ak = xmalloc();
      (void) STORE(local + 4, LOAD(local + 32));
      (void) STORE(local + 8, reg_am);
      (void) STORE(local, reg_ak);
      reg_result = F_08048908();
    }
  }
  return reg_result;
}

// addr = 08049cf0.0
// signature= func(xmalloc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? xmalloc(???)
{
  (void) STORE(local + 28, ARG_0);
  (void) STORE(local + 36, InitValue(initial_value_of_ebp));
  reg_result = F_08048868();
  if(reg_result  ==  0) {
    (void) xalloc_die();
    reg_ad = LOAD(local + 36);
    (void) STORE(local + 20, InitValue(initial_value_of_ebx));
    (void) STORE(local + 24, local + 36);
    (void) STORE(local, reg_ad);
    reg_ac = xmalloc();
    (void) STORE(local + 4, LOAD(local + 32));
    (void) STORE(local + 8, reg_ad);
    (void) STORE(local, reg_ac);
    reg_result = F_08048908();
  }
  return reg_result;
}

// addr = 08049d20.0
// signature= func(xclone, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? xclone(???)
{
  (void) xmalloc();
  reg_result = F_08048908();
  return reg_result;
}

// addr = 08049d50.0
// signature= func(xzalloc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? xzalloc(???)
{
  (void) xmalloc();
  reg_result = F_08048978();
  return reg_result;
}

/* The decompilation of 0x08049d80 / xnmalloc failed: java.lang.RuntimeException: java.lang.RuntimeException: Block L5 is unused: called=[] isEntry=false isIncluded=false */

// addr = 08049e88.0
// signature= func(__i686.get_pc_thunk.bx, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __i686.get_pc_thunk.bx(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08049e90.0
// signature= func(atexit, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? atexit(???)
{
  (void) __i686.get_pc_thunk.bx();
  reg_result = F_08048848();
  return reg_result;
}

// addr = 08049efd.0
// signature= func(F_08049efd, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049efd(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


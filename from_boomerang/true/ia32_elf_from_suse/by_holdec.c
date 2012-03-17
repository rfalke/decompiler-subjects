// addr = 080487b0.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 080489c0.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, reg_aa);
  (void) STORE(local + 16, &ARG_0);
  (void) STORE(local + 20, 134520368);
  (void) STORE(local + 24, 134520256);
  (void) STORE(local + 28, InitValue(initial_value_of_edx));
  (void) STORE(local + 32, local + 32);
  (void) STORE(local + 8, 134515552);
  (void) F_080488c8();
  asm("l.hlt");
  (void) STORE(local + 4, 0);
  (void) STORE(local, InitValue(initial_value_of_ebx));
  (void) F_080489ed();
  reg_ab = LOAD(local);
  (void) STORE(local, InitValue(initial_value_of_edx));
  if(LOAD(reg_ab + 11603)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_ab + 11603));
  }
  return LOAD(local);
}

// addr = 080489e4.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_080489ed();
  if(LOAD(InitValue(initial_value_of_ebx) + 11603)  !=  0) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + 11603));
  }
  return InitValue(initial_value_of_edx);
}

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

// addr = 08048a10.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x0804b804)  ==  0) {
// addr = 08048a50.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(g_0x0804b670  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
  }
  return reg_result;
}

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
    if(reg_var1  notSigned  0) {
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
  reg_ad = UNSIGNED_EXTEND(LOAD(&ARG_1));
  reg_var1 = UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) / 32) * 4 + ARG_0 + 4;
  if(ARG_0  ==  0) {
    reg_var1 = UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) / 32) * 4 + 134527268;
  }
  reg_ab = LOAD(reg_var1);
  (void) STORE(reg_var1, LOAD(reg_var1) ^ (ARG_2 & 1 ^ LOAD(reg_var1) >> (NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) & 31) & 1) << (NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) & 31));
  return reg_ab >> (NARROW(reg_ad) & 31) & 1;
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

// addr = 08049ed0.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
// addr = 08049ef4.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08049efd();
  reg_result = __do_global_dtors_aux();
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


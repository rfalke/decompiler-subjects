// addr = 08048778.0
// signature= func(F_08048778, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048778(???)
{
  (void) F_080489a4();
  (void) F_08048a04();
  reg_result = F_08049ec0();
  return reg_result;
}

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

// addr = 08048db0.0
// signature= func(F_08048db0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048db0(???)
{
  reg_ac = UNSIGNED_EXTEND(LOAD(&ARG_1));
  reg_var1 = UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) / 32) * 4 + ARG_0 + 4;
  if(ARG_0  ==  0) {
    reg_var1 = UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) / 32) * 4 + 134527236;
  }
  reg_ad = LOAD(reg_var1);
  (void) STORE(reg_var1, LOAD(reg_var1) ^ (ARG_2 & 1 ^ LOAD(reg_var1) >> (NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) & 31) & 1) << (NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) & 31));
  return reg_ad >> (NARROW(reg_ac) & 31) & 1;
}

// addr = 08048e10.0
// signature= func(F_08048e10, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048e10(???)
{
  reg_ac = ARG_0;
  reg_result = F_080487f0();
  if(reg_ac  ==  reg_result && ARG_1  ==  6) {
    reg_result = 134521035;
  }
  return reg_result;
}

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
  (void) STORE(local + 8, 0xffff);
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
  (void) STORE(local + 8, 0xffff);
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


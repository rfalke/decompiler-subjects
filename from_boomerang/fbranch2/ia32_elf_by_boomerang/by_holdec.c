// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080482f0 / F_080482f0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048300 / F_08048300 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048310 / F_08048310 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048320 / F_08048320 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048330 / F_08048330 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 0804836e.0
// signature= func(F_0804836e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804836e(???)
{
  if(LOAD(LOAD(InitStackPointer) + 4998)  !=  0) {
    (void) F_08048330();
  }
  return ARG_0;
}

// addr = 080483e4.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 36, 1084227584);
  (void) STORE(local + 40, InitValue(initial_value_of_ebp));
  (void) STORE(InitStackPointer + -56, local + 32);
  (void) STORE(InitStackPointer + -60, 134514112);
  (void) F_08048300();
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fxch st,st(1)");
  asm("l.fstpq ss:[esp]");
  asm("l.fstpq ss:[esp]");
  (void) STORE(InitStackPointer + -76, 134514115);
  reg_ac = F_08048320();
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fucompp");
  asm("l.fstsw ax");
  reg_var1 = NARROW(reg_ac / 256) & 69;
  if(reg_var1  ==  64) {
    (void) STORE(InitStackPointer + -60, 134514133);
    reg_at = F_080482f0();
    reg_var1 = NARROW(reg_at / 256);
  }
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fucompp");
  asm("l.fstsw ax");
  reg_var2 = reg_var1 & 69 ^ 64;
  if(reg_var2  !=  0) {
    (void) STORE(InitStackPointer + -60, 134514139);
    reg_as = F_080482f0();
    reg_var2 = NARROW(reg_as / 256);
  }
  reg_var3 = reg_var2;
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fucompp");
  asm("l.fstsw ax");
  if((reg_var2 & 69)  ==  0) {
    (void) STORE(InitStackPointer + -60, 134514149);
    reg_aq = F_080482f0();
    reg_var3 = NARROW(reg_aq / 256);
  }
  reg_var4 = reg_var3;
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fxch st,st(1)");
  asm("l.fucompp");
  asm("l.fstsw ax");
  if((reg_var3 & 5)  ==  0) {
    (void) STORE(InitStackPointer + -60, 134514157);
    reg_ab = F_080482f0();
    reg_var4 = NARROW(reg_ab / 256);
  }
  reg_var5 = reg_var4;
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fucompp");
  asm("l.fstsw ax");
  if((reg_var4 & 5)  ==  0) {
    (void) STORE(InitStackPointer + -60, 134514171);
    reg_aa = F_080482f0();
    reg_var5 = NARROW(reg_aa / 256);
  }
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fxch st,st(1)");
  asm("l.fucompp");
  asm("l.fstsw ax");
  if((reg_var5 & 69)  ==  0) {
    (void) STORE(InitStackPointer + -60, 134514188);
    (void) F_080482f0();
  }
  return 0;
}

// addr = 0804852a.0
// signature= func(F_0804852a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804852a(???)
{
  reg_af = LOAD(InitStackPointer);
  (void) _init();
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_result);
  if(!UNDEF) {
    reg_var1 = 0;
    reg_var2 = reg_af + 4334;
    do {
      reg_result = intern_redirectCall(LOAD(reg_var2));
      reg_var1++;
      reg_var2 += 4;
    } while(reg_var1  <  LOAD(InitValue(initial_value_of_ebp) + -16));
  }
  return reg_result;
}

// addr = 080485a6.0
// signature= func(F_080485a6, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080485a6(???)
{
  (void) __do_global_dtors_aux();
  return ARG_0;
}


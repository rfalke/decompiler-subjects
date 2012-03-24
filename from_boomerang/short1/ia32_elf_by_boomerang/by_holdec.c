// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080482a8 / F_080482a8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482b8 / F_080482b8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482c8 / F_080482c8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 08048306.0
// signature= func(F_08048306, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048306(???)
{
  if(LOAD(LOAD(InitStackPointer) + 4902)  !=  0) {
    (void) F_080482c8();
  }
  return ARG_0;
}

// addr = 0804837c.0
// signature= func(test, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? test(???)
{
  return ARG_0  <  ARG_1 || ARG_1  <  ARG_2 ? 1 : 0;
}

// addr = 080483a7.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(InitStackPointer + -32, 6);
  (void) STORE(InitStackPointer + -36, 5);
  (void) STORE(InitStackPointer + -40, 4);
  reg_aa = test();
  (void) STORE(InitStackPointer + -40, reg_aa);
  (void) STORE(InitStackPointer + -44, 134513900);
  (void) F_080482b8();
  (void) STORE(InitStackPointer + -32, 4);
  (void) STORE(InitStackPointer + -36, 5);
  (void) STORE(InitStackPointer + -40, 6);
  reg_ab = test();
  (void) STORE(InitStackPointer + -40, reg_ab);
  (void) STORE(InitStackPointer + -44, 134513924);
  (void) F_080482b8();
  (void) STORE(InitStackPointer + -32, 5);
  (void) STORE(InitStackPointer + -36, 6);
  (void) STORE(InitStackPointer + -40, 4);
  reg_ad = test();
  (void) STORE(InitStackPointer + -40, reg_ad);
  (void) STORE(InitStackPointer + -44, 134513948);
  (void) F_080482b8();
  (void) STORE(InitStackPointer + -32, 5);
  (void) STORE(InitStackPointer + -36, 4);
  (void) STORE(InitStackPointer + -40, 6);
  reg_ac = test();
  (void) STORE(InitStackPointer + -40, reg_ac);
  (void) STORE(InitStackPointer + -44, 134513972);
  (void) F_080482b8();
  return 0;
}

// addr = 08048456.0
// signature= func(F_08048456, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048456(???)
{
  reg_af = LOAD(InitStackPointer);
  (void) _init();
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_result);
  if(!UNDEF) {
    reg_var1 = 0;
    reg_var2 = reg_af + 4346;
    do {
      reg_result = intern_redirectCall(LOAD(reg_var2));
      reg_var1++;
      reg_var2 += 4;
    } while(reg_var1  <  LOAD(InitValue(initial_value_of_ebp) + -16));
  }
  return reg_result;
}

// addr = 080484d2.0
// signature= func(F_080484d2, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484d2(???)
{
  (void) __do_global_dtors_aux();
  return ARG_0;
}


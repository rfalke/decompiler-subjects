// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080482a0 / F_080482a0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482b0 / F_080482b0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482ed.0
// signature= func(F_080482ed, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482ed(???)
{
  reg_ac = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = LOAD(reg_ac + 4723);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048370.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_result = F_080482b0();
  return reg_result;
}

/* The decompilation of 0x080483b2 / F_080483b2 failed: java.lang.RuntimeException: java.lang.AssertionError */

/* The decompilation of 0x080483f6 / F_080483f6 failed: java.lang.RuntimeException: java.lang.RuntimeException: Block L2 is unused: called=[] isEntry=false isIncluded=false */

// addr = 0804845d.0
// signature= func(F_0804845d, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804845d(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080482a0 / F_080482a0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482b0 / F_080482b0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482ed.0
// signature= func(F_080482ed, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482ed(???)
{
  reg_ac = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = LOAD(reg_ac + 4751);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048370.0
// signature= func(bswap, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? bswap(???)
{
  reg_aa = intern_bswap(ARG_0);
  return EXTRACT(reg_aa, result);
}

// addr = 0804837a.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) bswap();
  (void) F_080482b0();
  return 0;
}

/* The decompilation of 0x080483c6 / F_080483c6 failed: java.lang.RuntimeException: java.lang.AssertionError */

/* The decompilation of 0x0804840a / F_0804840a failed: java.lang.RuntimeException: java.lang.RuntimeException: Block L2 is unused: called=[] isEntry=false isIncluded=false */

// addr = 08048471.0
// signature= func(F_08048471, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048471(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


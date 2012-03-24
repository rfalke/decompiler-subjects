// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080482a0 / F_080482a0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482b0 / F_080482b0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482ed.0
// signature= func(F_080482ed, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482ed(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  if(LOAD(reg_aa + 4779)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_aa + 4779));
  }
  return LOAD(InitStackPointer);
}

// addr = 08048368.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_var1 = 0;
  for(reg_var2 = 0; reg_var2 < 5; reg_var2++) {
    reg_var1 += SIGNED_EXTEND(LOAD(reg_var2 + 134518204));
  }
  (void) STORE(InitStackPointer + -40, reg_var1);
  (void) STORE(InitStackPointer + -44, 134513836);
  (void) F_080482b0();
  return 0;
}

// addr = 080483da.0
// signature= func(F_080483da, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483da(???)
{
  reg_ag = LOAD(InitStackPointer);
  (void) _init();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_ag + 4322);
  if(reg_var1  <  reg_result) {
    do {
      reg_ac = LOAD(InitStackPointer);
      reg_result = intern_redirectCall(LOAD(LOAD(InitStackPointer) + reg_var1 * 4 + 4322));
      reg_var1++;
    } while(reg_var1  <  (LOAD(InitValue(initial_value_of_ebp) + -16) + reg_ac * -1 + -4322) / 4);
  }
  return reg_result;
}

// addr = 0804842b.0
// signature= func(F_0804842b, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804842b(???)
{
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(LOAD(InitStackPointer) + reg_var1 * 4 + 4241));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 08048491.0
// signature= func(F_08048491, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048491(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


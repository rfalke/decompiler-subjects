// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080482a8 / F_080482a8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482b8 / F_080482b8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482c8 / F_080482c8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 08048306.0
// signature= func(F_08048306, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048306(???)
{
  if(LOAD(LOAD(InitStackPointer) + 4894)  !=  0) {
    (void) F_080482c8();
  }
  return ARG_0;
}

/* The decompilation of 0x0804837c / main failed: java.lang.AssertionError: Block L9 calls block L10 which isn't available */

// addr = 0804844a.0
// signature= func(F_0804844a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804844a(???)
{
  reg_af = LOAD(InitStackPointer);
  (void) _init();
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_result);
  if(!UNDEF) {
    reg_var1 = 0;
    reg_var2 = reg_af + 4350;
    do {
      reg_result = intern_redirectCall(LOAD(reg_var2));
      reg_var1++;
      reg_var2 += 4;
    } while(reg_var1  <  LOAD(InitValue(initial_value_of_ebp) + -16));
  }
  return reg_result;
}

// addr = 080484c6.0
// signature= func(F_080484c6, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484c6(???)
{
  (void) __do_global_dtors_aux();
  return ARG_0;
}


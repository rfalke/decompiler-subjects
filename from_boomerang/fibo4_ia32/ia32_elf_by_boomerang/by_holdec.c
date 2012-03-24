// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080482cc / F_080482cc failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482dc / F_080482dc failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482ec / F_080482ec failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482fc / F_080482fc failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 0804833a.0
// signature= func(F_0804833a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804833a(???)
{
  if(LOAD(LOAD(InitStackPointer) + 4794)  !=  0) {
    (void) F_080482fc();
  }
  return ARG_0;
}

// addr = 080483b0.0
// signature= func(fib, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? fib(???)
{
  if(InitValue(initial_value_of_esi)  <=  1) {
    reg_result = InitValue(initial_value_of_esi);
  } else {
    reg_ab = fib();
    reg_aa = fib();
    reg_result = reg_aa + reg_ab;
  }
  return reg_result;
}

// addr = 080483df.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 40, InitValue(initial_value_of_ebp));
  (void) STORE(InitStackPointer + -60, 134513900);
  (void) F_080482ec();
  (void) STORE(InitStackPointer + -56, local + 32);
  (void) STORE(InitStackPointer + -60, 134513915);
  (void) F_080482cc();
  reg_ab = fib();
  reg_aa = LOAD(local + 32);
  (void) STORE(local + 36, reg_ab);
  (void) STORE(InitStackPointer + -52, reg_ab);
  (void) STORE(InitStackPointer + -56, reg_aa);
  (void) STORE(InitStackPointer + -60, 134513918);
  (void) F_080482ec();
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
    reg_var2 = reg_af + 4290;
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


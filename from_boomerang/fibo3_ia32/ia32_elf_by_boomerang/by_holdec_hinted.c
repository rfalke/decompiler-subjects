// Decompiled by holdec 1.1 (2012-03-24)

// addr = 080483b0.0
// signature= func(fib, ret=[<0, int(unsigned, 4),,unknown>], para=[<0, int(unsigned, 4),n,unknown>], varargs=false)
??? fib(???)
{
  if(n  <=  1) {
    reg_result = n;
  } else {
    reg_ae = fib(n + -1);
    reg_aa = fib(n + -2);
    reg_result = reg_aa + reg_ae;
  }
  return reg_result;
}

// addr = 080483f6.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 40, InitValue(initial_value_of_ebp));
  (void) STORE(InitStackPointer + -60, 134513928);
  (void) F_080482ec();
  (void) STORE(InitStackPointer + -56, local + 32);
  (void) STORE(InitStackPointer + -60, 134513943);
  (void) F_080482cc();
  (void) STORE(InitStackPointer + -48, LOAD(local + 32));
  reg_ab = fib(LOAD(local + 32));
  reg_aa = LOAD(local + 32);
  (void) STORE(local + 36, reg_ab);
  (void) STORE(InitStackPointer + -52, reg_ab);
  (void) STORE(InitStackPointer + -56, reg_aa);
  (void) STORE(InitStackPointer + -60, 134513946);
  (void) F_080482ec();
  return 0;
}


// Decompiled by holdec 1.1 (2012-03-24)

// addr = 0804835c.0
// signature= func(fib1, ret=[<0, int(unsigned, 4),,unknown>], para=[<0, int(unsigned, 4),n,unknown>], varargs=false)
??? fib1(???)
{
  reg_ad = n;
  if(n  >  1) {
    reg_af = fib1(n + -1);
    reg_ac = fib1(reg_ad + -2);
    reg_result = reg_ac + reg_af;
  } else {
    reg_result = n;
  }
  return reg_result;
}

// addr = 08048368.0
// signature= func(fib2, ret=[<0, int(unsigned, 4),,unknown>], para=[<0, int(unsigned, 4),n,unknown>], varargs=false)
??? fib2(???)
{
  reg_ae = n;
  if(n  >  1) {
    reg_af = fib1(n + -1);
    reg_ac = fib1(reg_ae + -2);
    reg_result = reg_ac + reg_af;
  } else {
    reg_result = n;
  }
  return reg_result;
}

// addr = 080483a0.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 24, InitValue(initial_value_of_ebp));
  (void) STORE(local, 134513808);
  (void) printf();
  (void) STORE(local + 4, local + 20);
  (void) STORE(local, 134513823);
  (void) scanf();
  (void) STORE(local, LOAD(local + 20));
  reg_aa = fib1(LOAD(local + 20));
  (void) STORE(local + 4, LOAD(local + 20));
  (void) STORE(local + 8, reg_aa);
  (void) STORE(local, 134513826);
  (void) printf();
  return 0;
}


// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048798.0
// signature= func(fib, ret=[<0, int(unsigned, 4),,unknown>], para=[<0, int(unsigned, 4),n,unknown>], varargs=false)
??? fib(???)
{
  reg_ae = n;
  if(n  <=  1) {
    reg_result = n;
  } else {
    reg_ac = fib(n + -1);
    reg_af = fib(reg_ae + -2);
    reg_result = reg_ac + reg_af;
  }
  return reg_result;
}

// addr = 080487cc.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 12, InitValue(initial_value_of_ebx));
  (void) STORE(local + 16, InitValue(initial_value_of_esi));
  (void) STORE(local + 24, InitValue(initial_value_of_ebp));
  (void) STORE(local + 8, 134514872);
  (void) printf();
  (void) STORE(local + 4, local + 20);
  (void) STORE(local, 134514887);
  (void) scanf();
  reg_af = LOAD(local + 20);
  if(LOAD(local + 20)  <=  1) {
    reg_var1 = LOAD(local + 20);
  } else {
    (void) STORE(local + 8, LOAD(local + 20) + -1);
    reg_aa = fib(LOAD(local + 20) + -1);
    (void) STORE(local + 4, reg_af + -2);
    reg_ac = fib(reg_af + -2);
    reg_var1 = reg_aa + reg_ac;
  }
  (void) STORE(local + 4, LOAD(local + 20));
  (void) STORE(local + 8, reg_var1);
  (void) STORE(local, 134514890);
  (void) printf();
  return 0;
}


// Decompiled by holdec 1.1 (2012-03-24)

// addr = 0804835c.0
// signature= func(fib, ret=[<0, int(unsigned, 4),,unknown>], para=[<0, int(unsigned, 4),n,unknown>], varargs=false)
??? fib(???)
{
  reg_result = n;
  if(reg_result  >  1) {
    reg_var2 = 1;
    reg_var3 = 1;
    if(n  >  2) {
      reg_var1 = n + -2;
      do {
        reg_ae = reg_var2;
        reg_var2 += reg_var3;
        reg_ao = reg_var1 + -1;
        reg_var1--;
        reg_var3 = reg_ae;
      } while(reg_ao  !=  0);
    }
    reg_result = reg_var2;
  }
  return reg_result;
}

// addr = 0804838c.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 24, InitValue(initial_value_of_ebp));
  (void) STORE(local, 134513788);
  (void) printf();
  (void) STORE(local + 4, local + 20);
  (void) STORE(local, 134513803);
  (void) scanf();
  (void) STORE(local, LOAD(local + 20));
  reg_aa = fib(LOAD(local + 20));
  (void) STORE(local + 4, LOAD(local + 20));
  (void) STORE(local + 8, reg_aa);
  (void) STORE(local, 134513806);
  (void) printf();
  return 0;
}


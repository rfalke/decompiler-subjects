// Decompiled by holdec 1.1 (2012-03-24)

// addr = 00401000.0
// signature= func(fib, ret=[<0, int(unsigned, 4),,unknown>], para=[<0, int(unsigned, 4),n,unknown>], varargs=false)
??? fib(???)
{
  reg_ae = n;
  if(n  >=  1) {
    reg_af = fib(n + -2);
    reg_ac = fib(reg_ae + -1);
    reg_result = reg_ac + reg_af;
  } else {
    reg_result = 1;
  }
  return reg_result;
}

// addr = 00401050.0
// signature= func(reverse_itoa, ret=[<0, void,,unknown>], para=[<0, int(unsigned, 4),i,unknown>, <1, ptr(int(undef, 1)),buf,unknown>, <2, int(signed, 4),size,unknown>], varargs=false)
??? reverse_itoa(???)
{
  reg_var2 = buf;
  reg_var2a = reg_var2;
  reg_ai = size;
  if(reg_var2  <  size + reg_var2 + -1) {
    reg_var1 = i;
    do {
      reg_ab = reg_ai + reg_var2a + -1;
      (void) STORE(reg_var2, NARROW(MULT64_HI(-858993459, reg_var1) / 8 * -10 + reg_var1) + 48);
      reg_var2++;
      reg_var1 = MULT64_HI(-858993459, reg_var1) / 8;
    } while(reg_var2  <  reg_ab);
  }
  (void) STORE(reg_var2, 0);
  return;
}

// addr = 004010a0.0
// signature= func(F_004010a0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004010a0(???)
{
  (void) STORE(local + 12, 100);
  (void) STORE(local + 4, 9);
  (void) STORE(local + 8, local + 16);
  reg_ab = fib(9);
  (void) STORE(local, 8);
  reg_result = fib(8);
  (void) STORE(local + 4, reg_ab + reg_result);
  (void) reverse_itoa(reg_ab + reg_result, LOAD(local + 8), LOAD(local + 12));
  return reg_result;
}


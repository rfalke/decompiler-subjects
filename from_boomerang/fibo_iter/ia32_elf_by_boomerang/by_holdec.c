// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x0804827c / scanf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0804829c / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482da.0
// signature= func(F_080482da, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482da(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4814);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 0804835c.0
// signature= func(fib, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? fib(???)
{
  reg_result = ARG_0;
  if(reg_result  >  1) {
    reg_var2 = 1;
    reg_var3 = 1;
    if(ARG_0  >  2) {
      reg_var1 = ARG_0 + -2;
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
  reg_aa = fib();
  (void) STORE(local + 4, LOAD(local + 20));
  (void) STORE(local + 8, reg_aa);
  (void) STORE(local, 134513806);
  (void) printf();
  return 0;
}

// addr = 08048462.0
// signature= func(F_08048462, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048462(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


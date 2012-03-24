// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x0804827c / scanf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0804829c / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482da.0
// signature= func(F_080482da, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482da(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4906);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 0804835c.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 16, InitValue(initial_value_of_eax));
  (void) STORE(local + 20, InitValue(initial_value_of_ebx));
  (void) STORE(local + 24, InitValue(initial_value_of_ebp));
  (void) STORE(local, 134513880);
  (void) printf();
  reg_var2 = local + 16;
  (void) STORE(local + 4, reg_var2);
  (void) STORE(local, 134513895);
  (void) scanf();
  if(LOAD(local + 16)  >  1) {
    (void) STORE(local, LOAD(local + 16) + -1);
    reg_ag = fib();
    reg_var1 = reg_ag;
    (void) STORE(local, reg_ag + -1);
    reg_am = fib();
    reg_var2 = reg_am + reg_var1;
    (void) STORE(local + 4, reg_var2);
    (void) STORE(local, 134513895);
    (void) printf();
    reg_var4 = 0;
  } else {
    reg_var1 = LOAD(local + 16);
    reg_var3 = 1;
    if(reg_var1  ==  1) {
      reg_var4 = 1;
    } else {
      reg_var4 = 0;
    }
  }
  if(reg_var4  ==  0) {
    reg_var3 = reg_var1;
  }
  (void) STORE(local + 12, reg_var2);
  (void) STORE(local + 4, LOAD(local + 16));
  (void) STORE(local + 8, reg_var3);
  (void) STORE(local, 134513898);
  (void) printf();
  return 0;
}

// addr = 080483e0.0
// signature= func(fib, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? fib(???)
{
  if(ARG_0  >  1) {
    reg_aj = fib();
    reg_var1 = reg_aj;
    (void) fib();
    (void) printf();
    reg_var2 = 0;
  } else {
    reg_var1 = ARG_0;
    reg_result = 1;
    if(reg_var1  ==  1) {
      reg_var2 = 1;
    } else {
      reg_var2 = 0;
    }
  }
  if(reg_var2  ==  0) {
    reg_result = reg_var1;
  }
  return reg_result;
}

// addr = 080484be.0
// signature= func(F_080484be, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484be(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x0804827c / scanf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0804829c / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482da.0
// signature= func(F_080482da, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482da(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4834);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 0804835c.0
// signature= func(fib1, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? fib1(???)
{
  if(ARG_0  >  1) {
    reg_ae = fib1();
    reg_ac = fib1();
    reg_result = reg_ac + reg_ae;
  } else {
    reg_result = ARG_0;
  }
  return reg_result;
}

// addr = 08048368.0
// signature= func(fib2, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? fib2(???)
{
  if(ARG_0  >  1) {
    reg_ae = fib1();
    reg_ac = fib1();
    reg_result = reg_ac + reg_ae;
  } else {
    reg_result = ARG_0;
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
  reg_aa = fib1();
  (void) STORE(local + 4, LOAD(local + 20));
  (void) STORE(local + 8, reg_aa);
  (void) STORE(local, 134513826);
  (void) printf();
  return 0;
}

// addr = 08048476.0
// signature= func(F_08048476, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048476(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


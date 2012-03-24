// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x0804827c / __xstat failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0804829c / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482da.0
// signature= func(F_080482da, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482da(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4786);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 0804835c.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 116, InitValue(initial_value_of_ebx));
  (void) STORE(local + 12, InitValue(initial_value_of_edx));
  (void) STORE(local + 120, InitValue(initial_value_of_ebp));
  (void) STORE(local + 4, 134513736);
  (void) STORE(local + 8, local + 16);
  (void) STORE(local, 3);
  reg_result = __xstat();
  (void) STORE(local + 4, reg_result);
  (void) STORE(local + 8, LOAD(local + 60));
  (void) STORE(local, 134513760);
  (void) printf();
  return reg_result;
}

// addr = 08048426.0
// signature= func(F_08048426, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048426(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x08048288 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482cd.0
// signature= func(F_080482cd, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482cd(???)
{
  reg_ac = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = LOAD(reg_ac + 4847);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048364.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_result = printf();
  return reg_result;
}

// addr = 08048450.0
// signature= func(__i686.get_pc_thunk.bx, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __i686.get_pc_thunk.bx(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048499.0
// signature= func(F_08048499, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048499(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


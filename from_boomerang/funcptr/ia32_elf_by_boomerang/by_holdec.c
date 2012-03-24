// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x08048268 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482a6.0
// signature= func(F_080482a6, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482a6(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4666);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048328.0
// signature= func(hello, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? hello(???)
{
  reg_result = printf();
  return reg_result;
}

// addr = 08048340.0
// signature= func(world, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? world(???)
{
  reg_result = printf();
  return reg_result;
}

// addr = 08048358.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) intern_redirectCall(134513448);
  (void) intern_redirectCall(134513472);
  return 0;
}

// addr = 080483b6.0
// signature= func(F_080483b6, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483b6(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


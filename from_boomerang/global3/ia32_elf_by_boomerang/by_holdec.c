// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x08048268 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482a6.0
// signature= func(F_080482a6, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482a6(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4806);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048328.0
// signature= func(foo2, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? foo2(???)
{
  (void) STORE(&g_0x08049478, 12);
  reg_result = printf();
  return reg_result;
}

// addr = 08048356.0
// signature= func(foo1, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? foo1(???)
{
  reg_result = foo2();
  return reg_result;
}

// addr = 08048363.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) foo1();
  (void) printf();
  return 0;
}

// addr = 0804842a.0
// signature= func(F_0804842a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804842a(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048328.0
// signature= func(foo2, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? foo2(???)
{
  (void) STORE(&g_0x08049460, 12);
  reg_result = printf();
  return reg_result;
}

// addr = 08048350.0
// signature= func(foo1, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? foo1(???)
{
  reg_result = foo2();
  return reg_result;
}

// addr = 0804835d.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) foo1();
  (void) printf();
  return 0;
}


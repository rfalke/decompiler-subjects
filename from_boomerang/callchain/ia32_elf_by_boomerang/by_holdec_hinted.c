// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048980.0
// signature= func(add5, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? add5(???)
{
  return ARG_0 + 5;
}

// addr = 08048990.0
// signature= func(add10, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? add10(???)
{
  return ARG_0 + 10;
}

// addr = 080489a0.0
// signature= func(add15, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? add15(???)
{
  return ARG_0 + 15;
}

// addr = 080489b0.0
// signature= func(printarg, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? printarg(???)
{
  reg_result = printf();
  return reg_result;
}

// addr = 080489c4.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) add15();
  (void) add10();
  (void) add5();
  (void) printarg();
  return 0;
}


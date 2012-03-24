// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048328.0
// signature= func(proc1, ret=[<0, int(unsigned, 4),,unknown>], para=[<0, int(undef, 4),x,unknown>, <1, int(undef, 4),y,unknown>], varargs=false)
??? proc1(???)
{
  return x + y;
}

// addr = 08048333.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_aa = proc1(3, 4);
  (void) printf("%i\n", reg_aa);
  reg_ac = proc1(5, 6);
  reg_result = printf("%i\n", reg_ac);
  return reg_result;
}


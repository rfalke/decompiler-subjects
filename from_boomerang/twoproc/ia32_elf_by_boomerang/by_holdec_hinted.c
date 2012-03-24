// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048368.0
// signature= func(proc1, ret=[<0, int(unsigned, 4),,unknown>], para=[<0, int(undef, 4),x,unknown>, <1, int(undef, 4),y,unknown>], varargs=false)
??? proc1(???)
{
  return y * -1 + x;
}

// addr = 08048375.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(InitStackPointer + -40, 4);
  (void) STORE(InitStackPointer + -44, 11);
  reg_ab = proc1(11, 4);
  (void) STORE(InitStackPointer + -40, reg_ab);
  (void) STORE(InitStackPointer + -44, 134513808);
  reg_result = printf(134513808, reg_ab);
  return reg_result;
}


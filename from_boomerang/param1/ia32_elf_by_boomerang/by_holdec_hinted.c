// Decompiled by holdec 1.1 (2012-03-24)

// addr = 0804837c.0
// signature= func(cparam, ret=[<0, int(undef, 4),,unknown>], para=[<0, int(undef, 4),x,unknown>, <1, int(undef, 4),y,unknown>], varargs=false)
??? cparam(???)
{
  if(x  <  0) {
    (void) STORE(&y, 0);
  }
  return x + y;
}

// addr = 08048394.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_aa = ARG_0;
  (void) STORE(InitStackPointer + -32, 2);
  (void) STORE(InitStackPointer + -36, reg_aa + -3);
  reg_ab = cparam(reg_aa + -3, 2);
  (void) STORE(InitStackPointer + -40, reg_ab);
  (void) STORE(InitStackPointer + -44, 134513792);
  (void) printf(134513792, reg_ab);
  return 0;
}


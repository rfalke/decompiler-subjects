// Decompiled by holdec 1.1 (2012-03-24)

// addr = 0804837c.0
// signature= func(test, ret=[<0, int(undef, 4),,unknown>], para=[<0, int(undef, 4),x,unknown>, <1, int(undef, 4),y,unknown>, <2, int(undef, 4),z,unknown>], varargs=false)
??? test(???)
{
  return x  <  y || y  <  z ? 1 : 0;
}

// addr = 080483a7.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(InitStackPointer + -32, 6);
  (void) STORE(InitStackPointer + -36, 5);
  (void) STORE(InitStackPointer + -40, 4);
  reg_aa = test(4, 5, 6);
  (void) STORE(InitStackPointer + -40, reg_aa);
  (void) STORE(InitStackPointer + -44, 134513900);
  (void) printf(134513900, reg_aa);
  (void) STORE(InitStackPointer + -32, 4);
  (void) STORE(InitStackPointer + -36, 5);
  (void) STORE(InitStackPointer + -40, 6);
  reg_ab = test(6, 5, 4);
  (void) STORE(InitStackPointer + -40, reg_ab);
  (void) STORE(InitStackPointer + -44, 134513924);
  (void) printf(134513924, reg_ab);
  (void) STORE(InitStackPointer + -32, 5);
  (void) STORE(InitStackPointer + -36, 6);
  (void) STORE(InitStackPointer + -40, 4);
  reg_ad = test(4, 6, 5);
  (void) STORE(InitStackPointer + -40, reg_ad);
  (void) STORE(InitStackPointer + -44, 134513948);
  (void) printf(134513948, reg_ad);
  (void) STORE(InitStackPointer + -32, 5);
  (void) STORE(InitStackPointer + -36, 4);
  (void) STORE(InitStackPointer + -40, 6);
  reg_ac = test(6, 4, 5);
  (void) STORE(InitStackPointer + -40, reg_ac);
  (void) STORE(InitStackPointer + -44, 134513972);
  (void) printf(134513972, reg_ac);
  return 0;
}


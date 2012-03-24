// Decompiled by holdec 1.1 (2012-03-24)

// addr = 0804837c.0
// signature= func(test, ret=[<0, int(undef, 4),,unknown>], para=[<0, int(undef, 4),x,unknown>, <1, int(undef, 4),y,unknown>, <2, int(undef, 4),z,unknown>], varargs=false)
??? test(???)
{
  return y  <=  x || z  <=  y ? 0 : 1;
}

// addr = 08048398.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_ac = test(4, 5, 6);
  (void) printf("Result for 4, 5, 6: %d\n", reg_ac);
  reg_ad = test(6, 5, 4);
  (void) printf("Result for 6, 5, 4: %d\n", reg_ad);
  reg_aa = test(4, 6, 5);
  (void) printf("Result for 4, 6, 5: %d\n", reg_aa);
  reg_ab = test(6, 4, 5);
  (void) printf("Result for 6, 4, 5: %d\n", reg_ab);
  return 0;
}


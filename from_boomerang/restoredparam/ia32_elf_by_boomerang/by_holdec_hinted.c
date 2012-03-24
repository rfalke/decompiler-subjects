// Decompiled by holdec 1.1 (2012-03-24)

// addr = 0804837c.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_aa = twice(ARG_0);
  (void) printf("Result is %d\n", reg_aa);
  return 0;
}

// addr = 08048396.0
// signature= func(twice, ret=[<0, int(undef, 4),,unknown>], para=[<0, int(undef, 4),n,reg[ebx]>], varargs=false)
??? twice(???)
{
  return n * 2;
}


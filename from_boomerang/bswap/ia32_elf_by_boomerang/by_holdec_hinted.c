// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048370.0
// signature= func(bswap, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? bswap(???)
{
  reg_aa = intern_bswap(ARG_0);
  return EXTRACT(reg_aa, result);
}

// addr = 0804837a.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) bswap();
  (void) F_080482b0();
  return 0;
}


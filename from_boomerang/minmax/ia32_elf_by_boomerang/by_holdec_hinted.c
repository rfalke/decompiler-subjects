// Decompiled by holdec 1.1 (2012-03-24)

// addr = 080488f0.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  if(ARG_0  >=  -2) {
    reg_var1 = ARG_0;
    if(reg_var1  >  3) {
      reg_var1 = 3;
    }
  } else {
    reg_var1 = -2;
  }
  (void) printf("MinMax adjusted number of arguments is %d\n", reg_var1);
  return 0;
}


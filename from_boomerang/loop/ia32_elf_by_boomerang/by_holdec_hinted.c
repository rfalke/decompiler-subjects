// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048390.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_var1 = 0;
  for(...) {
    // state = PASSIVE_USE_OUTSIDE_LOOP
    while(reg_var1  <=  9) {
      reg_var1++;
    }
  }
  (void) printf("%i\n", reg_var1);
  return 0;
}


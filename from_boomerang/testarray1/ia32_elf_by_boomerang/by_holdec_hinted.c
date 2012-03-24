// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048368.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_var1 = 0;
  for(reg_var2 = 0; reg_var2 < 5; reg_var2++) {
    reg_var1 += SIGNED_EXTEND(LOAD(reg_var2 + 134518204));
  }
  (void) STORE(InitStackPointer + -40, reg_var1);
  (void) STORE(InitStackPointer + -44, 134513836);
  (void) printf(134513836, reg_var1);
  return 0;
}


// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048328.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_var1 = 0;
  for(reg_var2 = 0; reg_var2 < 10; reg_var2++) {
    reg_var1 += LOAD(reg_var2 * 4 + 134517856);
  }
  (void) printf("Sum is %d\n", reg_var1);
  return 0;
}


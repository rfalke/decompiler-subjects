// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048368.0
// signature= func(mid, ret=[<0, void,,unknown>], para=[<0, ptr(int(signed, 4)),p,unknown>], varargs=false)
??? mid(???)
{
  (void) printf("Middle elment is %d\n", SIGNED_EXTEND(LOAD(p + 2)));
  return;
}

// addr = 0804838a.0
// signature= func(fst, ret=[<0, void,,unknown>], para=[<0, ptr(int(signed, 4)),p,unknown>], varargs=false)
??? fst(???)
{
  (void) printf("First element is %d\n", SIGNED_EXTEND(LOAD(p + 10)));
  return;
}

// addr = 080483ac.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_var1 = 0;
  (void) STORE(InitStackPointer + -60, 134518356);
  (void) mid(134518356);
  (void) STORE(InitStackPointer + -60, 134518346);
  (void) fst(134518346);
  reg_var2 = 134518356;
  for(reg_var3 = 0; reg_var3 < 5; reg_var3++) {
    reg_var1 += SIGNED_EXTEND(LOAD(reg_var2));
    reg_var2++;
  }
  (void) STORE(InitStackPointer + -56, reg_var1);
  (void) STORE(InitStackPointer + -60, 134513986);
  (void) printf(134513986, reg_var1);
  return 0;
}


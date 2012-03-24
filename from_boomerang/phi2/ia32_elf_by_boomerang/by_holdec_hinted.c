// Decompiled by holdec 1.1 (2012-03-24)

// addr = 0804835c.0
// signature= func(proc1, ret=[<0, int(signed, 4),,unknown>], para=[<0, int(signed, 4),x,unknown>, <1, ptr(int(undef, 1)),s,unknown>], varargs=false)
??? proc1(???)
{
  if(x  <=  2) {
    reg_ab = strlen(s);
    (void) STORE(&x, reg_ab);
  } else {
    reg_aa = strlen(s);
    (void) STORE(&x, reg_aa);
    reg_ac = strlen(s);
    (void) printf("%d", x + reg_ac);
  }
  (void) printf("%d, %d", x);
  return x;
}

// addr = 080483cf.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_aa = proc1(ARG_0, LOAD(ARG_1 + 4));
  (void) printf("%d\n", reg_aa);
  return 0;
}


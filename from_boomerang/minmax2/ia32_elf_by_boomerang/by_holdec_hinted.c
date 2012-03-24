// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048328.0
// signature= func(test, ret=[<0, void,,unknown>], para=[<0, int(signed, 4),n,unknown>], varargs=false)
??? test(???)
{
  if(n  <  -2) {
    (void) STORE(&n, -2);
  }
  if(n  >  3) {
    (void) STORE(&n, 3);
  }
  (void) printf("MinMax result %d\n", n);
  return;
}

// addr = 0804835d.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) test(-5);
  (void) test(-2);
  (void) test(0);
  (void) test(ARG_0);
  (void) test(5);
  return 0;
}


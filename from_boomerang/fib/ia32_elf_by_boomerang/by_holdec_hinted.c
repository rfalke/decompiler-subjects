// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048390.0
// signature= func(fib, ret=[<0, int(unsigned, 4),,unknown>], para=[<0, int(unsigned, 4),n,unknown>], varargs=false)
??? fib(???)
{
  if(n  <=  1) {
    reg_result = n;
  } else {
    reg_ad = fib(n + -1);
    reg_ab = fib(n + -2);
    reg_result = reg_ab + reg_ad;
  }
  return reg_result;
}

// addr = 080483cf.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_aa = fib(10);
  (void) printf("%i\n", reg_aa);
  return 0;
}


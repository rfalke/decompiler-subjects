// Decompiled by holdec

// address: 08048390.0
// full-signature: func(fib, return=[<int(unsigned, 4),null,unknown>], parameter=[<int(unsigned, 4),n,unknown>], varargs=false)
u4 fib(u4 n)
{
  if(n <= 1) {
    reg_result = n;
  } else {
    reg_aa = fib(n + -1);
    reg_ab = fib(n + -2);
    reg_result = reg_aa + reg_ab;
  }
  return reg_result;
}

// address: 080483cf.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_aa = fib(10);
  (void) printf("%i\n", reg_aa);
  return 0;
}


// Decompiled by holdec

// address: 00000838.0
// full-signature: func(fib, return=[<int(unsigned, 4),null,unknown>], parameter=[<int(unsigned, 4),n,unknown>], varargs=false)
u4 fib(u4 n)
{
  reg_result = n;
  if(n > 1) {
    reg_a = fib(n + -1);
    reg_b = fib(n + -2);
    reg_result = reg_a + reg_b;
  }
  return reg_result;
}

// address: 00000878.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_a = fib(10);
  (void) printf("%i\n", UNSIGNED_EXTEND(reg_a));
  return 0;
}


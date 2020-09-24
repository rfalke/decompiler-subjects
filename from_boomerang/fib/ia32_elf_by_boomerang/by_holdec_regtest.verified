// Decompiled by holdec

// address: 08048390.0
// full-signature: func(fib, return=[<int(unsigned, 4),null,unknown>], parameter=[<int(unsigned, 4),n,unknown>], varargs=false)
u4 fib(u4 n)
{
  if(n < 2) {
    reg_result = n;
  } else {
    reg_a = fib(n + -1);
    reg_b = fib(n + -2);
    reg_result = reg_a + reg_b;
  }
  return reg_result;
}

// address: 080483cf.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_a = fib(10);
  (void) printf("%i\n", reg_a);
  return 0;
}


// Decompiled by holdec

// address: 0804835c.0
// full-signature: func(fib1, return=[<int(unsigned, 4),null,unknown>], parameter=[<int(unsigned, 4),n,unknown>], varargs=false)
u4 fib1(u4 n)
{
  reg_result = fib2(n);
  return reg_result;
}

// address: 08048368.0
// full-signature: func(fib2, return=[<int(unsigned, 4),null,unknown>], parameter=[<int(unsigned, 4),n,unknown>], varargs=false)
u4 fib2(u4 n)
{
  reg_a = n;
  if(n > 1) {
    reg_d = fib1(n + -1);
    reg_e = fib1(reg_a + -2);
    reg_result = reg_d + reg_e;
  } else {
    reg_result = n;
  }
  return reg_result;
}

// address: 080483a0.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  (void) printf("Input number: ");
  (void) scanf("%d", &n);
  reg_a = fib1(n);
  (void) printf("fibonacci(%d) = %d\n", n, reg_a);
  return 0;
}


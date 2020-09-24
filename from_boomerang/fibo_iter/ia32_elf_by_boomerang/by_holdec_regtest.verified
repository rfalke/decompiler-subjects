// Decompiled by holdec

// address: 0804835c.0
// full-signature: func(fib, return=[<int(unsigned, 4),null,unknown>], parameter=[<int(unsigned, 4),n,unknown>], varargs=false)
u4 fib(u4 n)
{
  reg_result = n;
  if(n > 1) {
    reg_var2 = 1;
    reg_var3 = 1;
    if(n > 2) {
      reg_var1 = n + -2;
      do {
        reg_h = reg_var2;
        reg_var2 += reg_var3;
        reg_j = reg_var1 + -1;
        reg_var1--;
        reg_var3 = reg_h;
      } while(reg_j != 0);
    }
    reg_result = reg_var2;
  }
  return reg_result;
}

// address: 0804838c.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  (void) printf("Input number: ");
  (void) scanf("%d", &n);
  reg_a = fib(n);
  (void) printf("fibonacci(%d) = %d\n", n, reg_a);
  return 0;
}


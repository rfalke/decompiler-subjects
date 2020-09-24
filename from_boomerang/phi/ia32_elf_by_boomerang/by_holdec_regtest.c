// Decompiled by holdec

// address: 0804835c.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  (void) STORE(&n, InitValue(initial_value_of_eax));
  (void) printf("Input number: ");
  (void) scanf("%d", &n);
  reg_var1 = n;
  if(n > 1) {
    reg_g = fib(n + -1);
    reg_var1 = reg_g;
    reg_i = fib(reg_g + -1);
    (void) printf("%d", reg_i + reg_var1);
    reg_var3 = 0;
  } else {
    reg_var2 = 1;
    reg_var3 = BIT_TO_INT(n == 1);
  }
  if(reg_var3 == 0) {
    reg_var2 = reg_var1;
  }
  (void) printf("fibonacci(%d) = %d\n", n, reg_var2);
  return 0;
}

// address: 080483e0.0
// full-signature: func(fib, return=[<int(unsigned, 4),null,unknown>], parameter=[<int(unsigned, 4),n,unknown>], varargs=false)
u4 fib(u4 n)
{
  reg_var1 = n;
  if(n > 1) {
    reg_g = fib(n + -1);
    reg_var1 = reg_g;
    reg_i = fib(reg_g + -1);
    (void) printf("%d", reg_i + reg_var1);
    reg_var2 = 0;
  } else {
    reg_result = 1;
    reg_var2 = BIT_TO_INT(n == 1);
  }
  if(reg_var2 == 0) {
    reg_result = reg_var1;
  }
  return reg_result;
}


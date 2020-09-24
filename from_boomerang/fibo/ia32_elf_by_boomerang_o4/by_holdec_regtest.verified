// Decompiled by holdec

// address: 08048798.0
// full-signature: func(fib, return=[<int(unsigned, 4),null,unknown>], parameter=[<int(unsigned, 4),n,unknown>], varargs=false)
u4 fib(u4 n)
{
  reg_a = n;
  if(n < 2) {
    reg_result = n;
  } else {
    reg_b = fib(n + -1);
    reg_c = fib(reg_a + -2);
    reg_result = reg_b + reg_c;
  }
  return reg_result;
}

// address: 080487cc.0
// full-signature: func(main, return=[], parameter=[], varargs=false)
void main(void)
{
  (void) printf("Input number: ");
  (void) scanf("%d", &x);
  reg_a = x;
  if(x < 2) {
    reg_var1 = x;
  } else {
    reg_b = fib(x + -1);
    reg_c = fib(reg_a + -2);
    reg_var1 = reg_b + reg_c;
  }
  (void) printf("fibonacci(%d) = %d\n", x, reg_var1);
}


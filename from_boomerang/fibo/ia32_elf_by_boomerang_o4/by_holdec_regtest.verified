// Decompiled by holdec

// address: 08048798.0
// full-signature: func(fib, return=[<int(unsigned, 4),null,unknown>], parameter=[<int(unsigned, 4),n,unknown>], varargs=false)
u4 fib(u4 n)
{
  reg_aa = n;
  if(n <= 1) {
    reg_result = n;
  } else {
    reg_ab = fib(n + -1);
    reg_ac = fib(reg_aa + -2);
    reg_result = reg_ab + reg_ac;
  }
  return reg_result;
}

// address: 080487cc.0
// full-signature: func(main, return=[], parameter=[], varargs=false)
void main(void)
{
  (void) printf("Input number: ");
  (void) scanf("%d", &x);
  reg_aa = x;
  if(x <= 1) {
    reg_var1 = x;
  } else {
    reg_ab = fib(x + -1);
    reg_ac = fib(reg_aa + -2);
    reg_var1 = reg_ab + reg_ac;
  }
  (void) printf("fibonacci(%d) = %d\n", x, reg_var1);
}


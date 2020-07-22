// Decompiled by holdec

// address: 08049180.0
// full-signature: func(a_func, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 a_func(void)
{
  reg_result = printf("in func: %d\n", a_global);
  return reg_result;
}

// address: 080491a0.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  (void) printf("in main: %d\n", a_global);
  (void) STORE(&a_global, a_global + 1);
  (void) a_func();
  return 0;
}


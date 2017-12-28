// Decompiled by holdec

// address: 08048328.0
// full-signature: func(test, return=[], parameter=[<int(signed, 4),n,unknown>], varargs=false)
void test(s4 n)
{
  if(n < -2) {
    (void) STORE(&n, -2);
  }
  if(n > 3) {
    (void) STORE(&n, 3);
  }
  (void) printf("MinMax result %d\n", n);
  return;
}

// address: 0804835d.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  (void) test(-5);
  (void) test(-2);
  (void) test(0);
  (void) test(argc);
  (void) test(5);
  return 0;
}


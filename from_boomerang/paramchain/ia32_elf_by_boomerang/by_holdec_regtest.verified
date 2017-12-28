// Decompiled by holdec

// address: 08048924.0
// full-signature: func(addem, return=[], parameter=[<int(signed, 4),a,unknown>, <int(signed, 4),b,unknown>, <int(signed, 4),c,unknown>, <ptr(int(signed, 4)),res,unknown>], varargs=false)
void addem(s4 a, s4 b, s4 c, s4* res)
{
  (void) STORE(res, a + b + c);
  return;
}

// address: 08048938.0
// full-signature: func(passem, return=[], parameter=[<int(signed, 4),a,unknown>, <int(signed, 4),b,unknown>, <int(signed, 4),c,unknown>, <ptr(int(signed, 4)),res,unknown>], varargs=false)
void passem(s4 a, s4 b, s4 c, s4* res)
{
  (void) addem(a, b, c, res);
  return;
}

// address: 08048950.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  (void) passem(5, 10, 40, &n);
  (void) printf("Fifty five is %d\n", n);
  return 0;
}


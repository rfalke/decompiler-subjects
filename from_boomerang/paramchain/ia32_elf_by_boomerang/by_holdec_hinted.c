// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048924.0
// signature= func(addem, ret=[<0, void,,unknown>], para=[<0, int(signed, 4),a,unknown>, <1, int(signed, 4),b,unknown>, <2, int(signed, 4),c,unknown>, <3, ptr(int(signed, 4)),res,unknown>], varargs=false)
??? addem(???)
{
  (void) STORE(res, a + b + c);
  return;
}

// addr = 08048938.0
// signature= func(passem, ret=[<0, void,,unknown>], para=[<0, int(signed, 4),a,unknown>, <1, int(signed, 4),b,unknown>, <2, int(signed, 4),c,unknown>, <3, ptr(int(signed, 4)),res,unknown>], varargs=false)
??? passem(???)
{
  (void) addem(a, b, c, res);
  return;
}

// addr = 08048950.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 12, 10);
  (void) STORE(local + 16, 40);
  (void) STORE(local + 20, local + 24);
  (void) STORE(local + 28, InitValue(initial_value_of_ebp));
  (void) STORE(local + 8, 5);
  (void) passem(5, 10, 40, local + 24);
  (void) STORE(local + 4, LOAD(local + 24));
  (void) STORE(local, 134519596);
  (void) printf(134519596, LOAD(local + 24));
  return 0;
}


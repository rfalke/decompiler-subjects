// Decompiled by holdec

// address: 08049060.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_a = argc;
  (void) unknown_to_unknown(1.21);
  (void) double_to_unknown(1.22 + SIGNED_INT_TO_FLOAT(reg_a));
  (void) unknown_to_double(1.23);
  (void) double_to_double(1.24 + SIGNED_INT_TO_FLOAT(reg_a));
  (void) printf("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 100, 2.31, 101, 2.32, 102);
  (void) printf("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 200, 2.41 + SIGNED_INT_TO_FLOAT(reg_a), 201, WIDEN(2.42 + SIGNED_INT_TO_FLOAT(reg_a)), 202);
  return 0;
}


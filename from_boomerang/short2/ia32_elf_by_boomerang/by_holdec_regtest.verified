// Decompiled by holdec

// address: 0804837c.0
// full-signature: func(test, return=[<int(undef, 4),null,unknown>], parameter=[<int(undef, 4),x,unknown>, <int(undef, 4),y,unknown>, <int(undef, 4),z,unknown>], varargs=false)
d4 test(d4 x, d4 y, d4 z)
{
  return BIT_TO_INT(x < y && y < z);
}

// address: 08048398.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_a = test(4, 5, 6);
  (void) printf("Result for 4, 5, 6: %d\n", reg_a);
  reg_b = test(6, 5, 4);
  (void) printf("Result for 6, 5, 4: %d\n", reg_b);
  reg_c = test(4, 6, 5);
  (void) printf("Result for 4, 6, 5: %d\n", reg_c);
  reg_d = test(6, 4, 5);
  (void) printf("Result for 6, 4, 5: %d\n", reg_d);
  return 0;
}


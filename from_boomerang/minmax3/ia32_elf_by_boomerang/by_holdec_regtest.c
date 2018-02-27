// Decompiled by holdec

// address: 08048328.0
// full-signature: func(test, return=[], parameter=[<int(signed, 4),n,unknown>], varargs=false)
void test(s4 n)
{
  reg_aa = (n * -1 + 0xfffffffe & BIT_TO_INT(n < 0) + BIT_TO_INT(n > 4294967294) * -1 + 0xffffffff) * -1 + 0xfffffffb & BIT_TO_INT((n * -1 + 0xfffffffe & BIT_TO_INT(n < 0) + BIT_TO_INT(n > 4294967294) * -1 + 0xffffffff) + 5 > 0) * -1 + ((n * -1 + 0xfffffffe & BIT_TO_INT(n < 0) + BIT_TO_INT(n > 4294967294) * -1 + 0xffffffff) + 2 > 0 ? 0xffffffff : 0x0);
  (void) printf("MinMax result %d\n", reg_aa + 3);
}

// address: 0804836f.0
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


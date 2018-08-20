// Decompiled by holdec

// address: 08048328.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_result = BIT_TO_INT(argc > 1);
  (void) printf("Result is %d\n", BIT_TO_INT(argc > 1));
  return reg_result;
}


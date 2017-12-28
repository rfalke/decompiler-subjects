// Decompiled by holdec

// address: 0804835c.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_result = __xstat(3, "test/source/stattest.c", &st);
  (void) printf("Stat returns %d; size of file is %d\n", reg_result, LOAD(&st + 44));
  return reg_result;
}


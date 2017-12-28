// Decompiled by holdec

// address: 08048328.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  (void) printf("Figure 19.2\n");
  reg_aa = argc;
  (void) printf("1");
  reg_result = printf("C is %d\n", reg_aa + (reg_aa > 3 ? 0 : reg_aa));
  return reg_result;
}


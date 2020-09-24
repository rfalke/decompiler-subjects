// Decompiled by holdec

// address: 08048328.0
// full-signature: func(proc1, return=[<int(unsigned, 4),null,unknown>], parameter=[<int(undef, 4),x,unknown>, <int(undef, 4),y,unknown>], varargs=false)
u4 proc1(d4 x, d4 y)
{
  return x + y;
}

// address: 08048333.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_a = proc1(3, 4);
  (void) printf("%i\n", reg_a);
  reg_b = proc1(5, 6);
  reg_result = printf("%i\n", reg_b);
  return reg_result;
}


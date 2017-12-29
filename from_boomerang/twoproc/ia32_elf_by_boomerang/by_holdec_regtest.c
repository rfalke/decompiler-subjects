// Decompiled by holdec

// address: 08048368.0
// full-signature: func(proc1, return=[<int(unsigned, 4),null,unknown>], parameter=[<int(undef, 4),x,unknown>, <int(undef, 4),y,unknown>], varargs=false)
u4 proc1(d4 x, d4 y)
{
  return x + y * -1;
}

// address: 08048375.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_aa = proc1(11, 4);
  reg_result = printf("%i\n", reg_aa);
  return reg_result;
}


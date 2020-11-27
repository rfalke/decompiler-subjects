// Decompiled by holdec

// address: 0804837c.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_a = my_twice(argc);
  (void) printf("Result is %d\n", reg_a);
  return 0;
}

// address: 08048396.0
// full-signature: func(my_twice, return=[<int(undef, 4),null,unknown>], parameter=[<int(undef, 4),n,reg[ebx]>], varargs=false)
d4 my_twice(d4 n)
{
  return n * 2;
}


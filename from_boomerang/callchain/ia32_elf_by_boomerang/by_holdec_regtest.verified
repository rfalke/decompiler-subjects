// Decompiled by holdec

// address: 08048980.0
// full-signature: func(add5, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 add5(d4 ARG_0)
{
  return ARG_0 + 5;
}

// address: 08048990.0
// full-signature: func(add10, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 add10(d4 ARG_0)
{
  return ARG_0 + 10;
}

// address: 080489a0.0
// full-signature: func(add15, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 add15(d4 ARG_0)
{
  return ARG_0 + 15;
}

// address: 080489b0.0
// full-signature: func(printarg, return=[], parameter=[<int(undef, 4),value,unknown>], varargs=false)
void printarg(d4 value)
{
  (void) printf("Fifty five is %d\n", value);
}

// address: 080489c4.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_a = add15(25);
  reg_b = add10(reg_a);
  reg_c = add5(reg_b);
  (void) printarg(reg_c);
  return 0;
}


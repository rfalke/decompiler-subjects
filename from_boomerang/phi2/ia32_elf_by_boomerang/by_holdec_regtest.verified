// Decompiled by holdec

// address: 0804835c.0
// full-signature: func(proc1, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),x,unknown>, <ptr(int(undef, 1)),s,unknown>], varargs=false)
s4 proc1(s4 x, d1* s)
{
  reg_var1 = InitValue(initial_value_of_reg_20_local);
  if(x < 3) {
    reg_d = strlen(s);
    (void) STORE(&x, reg_d);
  } else {
    reg_a = strlen(s);
    (void) STORE(&x, reg_a);
    reg_b = strlen(s);
    reg_var1 = reg_b;
    (void) printf("%d", x + reg_var1);
  }
  (void) printf("%d, %d", x, reg_var1);
  return x;
}

// address: 080483cf.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_a = proc1(argc, LOAD(argv + 4));
  (void) printf("%d\n", reg_a);
  return 0;
}


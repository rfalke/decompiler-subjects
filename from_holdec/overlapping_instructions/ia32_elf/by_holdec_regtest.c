// Decompiled by holdec

// address: 08049060.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  if(argc == 2) {
    (void) exec_python();
  }
  (void) not_endless_loop();
  reg_a = add_one();
  (void) printf("42+1=%d\n", reg_a);
  reg_b = return_constant();
  (void) printf("constant: 0x%08x = %d equal=%d\n", reg_b, reg_b, BIT_TO_INT(reg_b == -1163082564));
  return 0;
}

// address: 080491e6.0
// full-signature: func(exec_python, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 exec_python(void)
{
  (void) STORE(&buffer + 16, 0);
  (void) STORE(&buffer + 12, 1852794996);
  (void) STORE(&buffer + 8, 2037395310);
  (void) STORE(&buffer + 4, 1768042354);
  (void) STORE(&buffer, 1937059631);
  (void) sys_execve(&buffer, 0, 0);
  // not reached
}

// address: 0804929a.0
// full-signature: func(return_constant, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 return_constant(void)
{
  return -1163082564;
}

// address: 080492ab.0
// full-signature: func(not_endless_loop, return=[], parameter=[], varargs=false)
void not_endless_loop(void)
{
}

// address: 080492b5.0
// full-signature: func(add_one, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 add_one(d4 ARG_0)
{
  return ARG_0 + 1;
}


// Decompiled by holdec

// address: 0804804c.0
// full-signature: func(start, return=[], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
void start(d4 ARG_0)
{
  reg_var1 = ARG_0;
  do {
    reg_var1a = reg_var1;
    reg_var1++;
  } while(LOAD(reg_var1a) != 0);
  reg_d = BIT_TEST(0, LOAD(reg_var1 + -5));
  (void) STORE(reg_var1 + -5, LOAD(reg_var1 + -5) / 2);
  (void) STORE(&ARG_0, 1);
  (void) sys_exit(BIT_TO_INT(reg_d));
  // not reached
}


// Decompiled by holdec

// address: 08048410.0
// full-signature: func(main, return=[<int(undef, 4),null,unknown>], parameter=[], varargs=false)
d4 main(void)
{
  (void) scanf("%d", &b);
  (void) scanf("%d", &v);
  if(b == 5) {
    (void) fwrite("Equal\n", 1, 6, stdout);
    reg_var7 = BIT_TO_INT(b != 5);
  } else {
    reg_var7 = 1;
  }
  if(reg_var7 != 0) {
    (void) fwrite("Not Equal\n", 1, 10, stdout);
  }
  if(b > 4) {
    reg_var3 = 1;
  } else {
    (void) fwrite("Greater\n", 1, 8, stdout);
    reg_var3 = BIT_TO_INT(b > 4);
  }
  if(reg_var3 == 0) {
    reg_var2 = 1;
  } else {
    (void) fwrite("Less or Equal\n", 1, 14, stdout);
    reg_var2 = BIT_TO_INT(b < 6);
  }
  if(reg_var2 == 0) {
    reg_var1 = 0;
  } else {
    (void) fwrite("Greater or Equal\n", 1, 17, stdout);
    reg_var1 = BIT_TO_INT(b < 6);
  }
  if(reg_var1 == 0) {
    (void) fwrite("Less\n", 1, 5, stdout);
  }
  if(v > 4) {
    reg_var6 = 1;
  } else {
    (void) fwrite("Greater Unsigned\n", 1, 17, stdout);
    reg_var6 = BIT_TO_INT(v > 4);
  }
  if(reg_var6 == 0) {
    reg_var5 = 1;
  } else {
    (void) fwrite("Less or Equal Unsigned\n", 1, 23, stdout);
    reg_var5 = BIT_TO_INT(v < 6);
  }
  if(reg_var5 == 0) {
    reg_var4 = 1;
  } else {
    (void) fwrite("Carry Clear\n", 1, 12, stdout);
    reg_var4 = BIT_TO_INT(v > 5);
  }
  if(reg_var4 != 0) {
    (void) fwrite("Carry Set\n", 1, 10, stdout);
  }
  if(b < 6) {
    (void) fwrite("Minus\n", 1, 6, stdout);
  }
  reg_result = b > 5 ? fwrite("Plus\n", 1, 5, stdout) : b;
  return reg_result;
}


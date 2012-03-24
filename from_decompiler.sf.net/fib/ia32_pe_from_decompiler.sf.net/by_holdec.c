// Decompiled by holdec 1.1 (2012-03-24)

// addr = 00401000.0
// signature= func(F_00401000, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401000(???)
{
  if(ARG_0  >=  1) {
    reg_ae = F_00401000();
    reg_ac = F_00401000();
    reg_result = reg_ac + reg_ae;
  } else {
    reg_result = 1;
  }
  return reg_result;
}

// addr = 00401050.0
// signature= func(F_00401050, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401050(???)
{
  reg_var2 = ARG_1;
  reg_var2a = reg_var2;
  reg_result = ARG_2;
  if(reg_var2  <  reg_result + reg_var2 + -1) {
    reg_var1 = ARG_0;
    do {
      reg_ah = reg_result + reg_var2a + -1;
      reg_result = MULT64_HI(-858993459, reg_var1) / 8 * -10 + reg_var1 & 0xffffff00 | WIDEN(NARROW(MULT64_HI(-858993459, reg_var1) / 8 * -10 + reg_var1) + 48);
      (void) STORE(reg_var2, NARROW(MULT64_HI(-858993459, reg_var1) / 8 * -10 + reg_var1) + 48);
      reg_var2++;
      reg_var1 = MULT64_HI(-858993459, reg_var1) / 8;
    } while(reg_var2  <  reg_ah);
  }
  (void) STORE(reg_var2, 0);
  return reg_result;
}

// addr = 004010a0.0
// signature= func(F_004010a0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004010a0(???)
{
  (void) STORE(local + 12, 100);
  (void) STORE(local + 4, 9);
  (void) STORE(local + 8, local + 16);
  reg_aa = F_00401000();
  (void) STORE(local, 8);
  reg_ac = F_00401000();
  (void) STORE(local + 4, reg_aa + reg_ac);
  reg_result = F_00401050();
  return reg_result;
}


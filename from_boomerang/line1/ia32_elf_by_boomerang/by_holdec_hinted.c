// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048454.0
// signature= func(chomp, ret=[<0, ptr(int(undef, 1)),null,unknown>], para=[<0, ptr(int(undef, 1)),s,unknown>, <1, int(signed, 4),size,unknown>, <2, ptr(int(undef, 1)),f,unknown>], varargs=false)
??? chomp(???)
{
  reg_ae = f;
  reg_af = size;
  reg_ac = s;
  reg_aa = fgets(s, size, f);
  if(reg_aa  !=  0) {
    reg_ad = strchr(reg_aa, 10);
    if(reg_ad  !=  0) {
      (void) STORE(reg_ad, 0);
    }
  }
  reg_result = fgets(reg_ac, reg_af, reg_ae);
  return reg_result;
}

// addr = 080484a3.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 1080, InitValue(initial_value_of_ebp));
  if(ARG_0  >  1) {
    (void) STORE(local + 4, 134514260);
    (void) STORE(local, LOAD(ARG_1 + 4));
    reg_ab = fopen(LOAD(ARG_1 + 4), 134514260);
    (void) STORE(local + 1068, reg_ab);
    if(LOAD(local + 1068)  ==  0) {
      (void) STORE(local + 28, 1);
    } else {
      (void) STORE(local + 4, 0x400);
      (void) STORE(local + 8, LOAD(local + 1068));
      (void) STORE(local, local + 32);
      reg_aa = chomp(local + 32, 0x400, LOAD(local + 1068));
      if(reg_aa  !=  0) {
        (void) STORE(local + 4, local + 32);
        (void) STORE(local, 134514262);
        (void) printf();
      }
      (void) STORE(local, LOAD(local + 1068));
      (void) fclose(LOAD(local + 1068));
    }
  } else {
    (void) STORE(local + 28, 1);
  }
  return LOAD(local + 28);
}


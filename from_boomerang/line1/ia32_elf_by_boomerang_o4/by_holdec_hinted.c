// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048450.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 1040, InitValue(initial_value_of_ebx));
  (void) STORE(local + 1048, InitValue(initial_value_of_ebp));
  reg_ae = BIT_TEST(31, ARG_0 + -1);
  reg_al = ARG_0  ==  1;
  reg_ag = !BIT_TEST(31, ARG_0 + -1) && BIT_TEST(31, ARG_0);
  reg_ai = ARG_0  <=  1;
  (void) STORE(local + 1044, InitValue(initial_value_of_esi));
  if(ISDEF(reg_ai) ? reg_ai : !reg_ag && reg_ae || !reg_ae && reg_ag || reg_al) {
    reg_result = 1;
  } else {
    reg_ak = ARG_1;
    (void) STORE(local + 4, 134514260);
    (void) STORE(local, LOAD(reg_ak + 4));
    reg_aj = fopen(LOAD(reg_ak + 4), 134514260);
    reg_result = 1;
    if(reg_aj  !=  0) {
      (void) STORE(local + 4, 0x400);
      (void) STORE(local + 8, reg_aj);
      (void) STORE(local, local + 16);
      reg_ah = fgets(local + 16, 0x400, reg_aj);
      if(reg_ah  !=  0) {
        (void) STORE(local + 4, 10);
        (void) STORE(local, reg_ah);
        reg_ab = strchr(reg_ah, 10);
        if(reg_ab  !=  0) {
          (void) STORE(reg_ab, 0);
        }
        (void) STORE(local, local + 16);
        (void) puts(local + 16);
      }
      (void) STORE(local, reg_aj);
      reg_result = fclose(reg_aj);
    }
  }
  return reg_result;
}

// addr = 080484f0.0
// signature= func(chomp, ret=[<0, ptr(int(undef, 1)),null,unknown>], para=[<0, ptr(int(undef, 1)),s,unknown>, <1, int(signed, 4),size,unknown>, <2, ptr(int(undef, 1)),f,unknown>], varargs=false)
??? chomp(???)
{
  reg_af = size;
  reg_ae = f;
  reg_ac = s;
  reg_ab = fgets(s, size, f);
  if(reg_ab  !=  0) {
    reg_aa = strchr(reg_ab, 10);
    if(reg_aa  !=  0) {
      (void) STORE(reg_aa, 0);
    }
  }
  reg_result = fgets(reg_ac, reg_af, reg_ae);
  return reg_result;
}


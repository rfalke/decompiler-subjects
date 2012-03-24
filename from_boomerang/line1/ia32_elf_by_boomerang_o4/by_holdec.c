// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x08048320 / strchr failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048330 / puts failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048340 / fgets failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048360 / fclose failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048370 / fopen failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080483ad.0
// signature= func(F_080483ad, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483ad(???)
{
  reg_ac = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = LOAD(reg_ac + 5051);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

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
    reg_aj = fopen();
    reg_result = 1;
    if(reg_aj  !=  0) {
      (void) STORE(local + 4, 0x400);
      (void) STORE(local + 8, reg_aj);
      (void) STORE(local, local + 16);
      reg_ah = fgets();
      if(reg_ah  !=  0) {
        (void) STORE(local + 4, 10);
        (void) STORE(local, reg_ah);
        reg_ab = strchr();
        if(reg_ab  !=  0) {
          (void) STORE(reg_ab, 0);
        }
        (void) STORE(local, local + 16);
        (void) puts();
      }
      (void) STORE(local, reg_aj);
      reg_result = fclose();
    }
  }
  return reg_result;
}

// addr = 080484f0.0
// signature= func(chomp, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? chomp(???)
{
  reg_ab = fgets();
  if(reg_ab  !=  0) {
    reg_aa = strchr();
    if(reg_aa  !=  0) {
      (void) STORE(reg_aa, 0);
    }
  }
  reg_result = fgets();
  return reg_result;
}

// addr = 080485f0.0
// signature= func(__i686.get_pc_thunk.bx, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __i686.get_pc_thunk.bx(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048639.0
// signature= func(F_08048639, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048639(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


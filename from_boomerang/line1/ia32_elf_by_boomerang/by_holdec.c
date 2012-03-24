// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x08048324 / strchr failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048334 / fgets failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048354 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048364 / fclose failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048374 / fopen failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080483bd.0
// signature= func(F_080483bd, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483bd(???)
{
  reg_ac = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = LOAD(reg_ac + 5039);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048454.0
// signature= func(chomp, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? chomp(???)
{
  reg_aa = fgets();
  if(reg_aa  !=  0) {
    reg_ac = strchr();
    if(reg_ac  !=  0) {
      (void) STORE(reg_ac, 0);
    }
  }
  reg_result = fgets();
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
    reg_ab = fopen();
    (void) STORE(local + 1068, reg_ab);
    if(LOAD(local + 1068)  ==  0) {
      (void) STORE(local + 28, 1);
    } else {
      (void) STORE(local + 4, 0x400);
      (void) STORE(local + 8, LOAD(local + 1068));
      (void) STORE(local, local + 32);
      reg_aa = chomp();
      if(reg_aa  !=  0) {
        (void) STORE(local + 4, local + 32);
        (void) STORE(local, 134514262);
        (void) printf();
      }
      (void) STORE(local, LOAD(local + 1068));
      (void) fclose();
    }
  } else {
    (void) STORE(local + 28, 1);
  }
  return LOAD(local + 28);
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


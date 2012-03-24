// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080482c4 / F_080482c4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482d4 / F_080482d4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482e4 / F_080482e4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 08048321.0
// signature= func(F_08048321, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048321(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  if(LOAD(reg_aa + 4911)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_aa + 4911));
  }
  return LOAD(InitStackPointer);
}

// addr = 0804839c.0
// signature= func(twofib, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? twofib(???)
{
  (void) STORE(local + 32, InitValue(initial_value_of_ebp));
  if(ARG_1  ==  0) {
    (void) STORE(local + 24, 0);
    (void) STORE(local + 28, 1);
  } else {
    (void) STORE(local + 4, ARG_1 + -1);
    (void) STORE(local, local + 24);
    (void) twofib();
    (void) STORE(local + 20, LOAD(local + 24));
    (void) STORE(local + 24, LOAD(local + 28));
    (void) STORE(local + 28, LOAD(local + 28) * 2);
  }
  reg_aa = LOAD(local + 28);
  reg_result = ARG_0;
  (void) STORE(ARG_0, LOAD(local + 24));
  (void) STORE(reg_result + 4, reg_aa);
  return reg_result;
}

// addr = 080483f5.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 44, InitValue(initial_value_of_ebp));
  (void) STORE(InitStackPointer + -60, 134513988);
  (void) F_080482e4();
  (void) STORE(InitStackPointer + -56, local + 40);
  (void) STORE(InitStackPointer + -60, 134514003);
  (void) F_080482c4();
  (void) STORE(InitStackPointer + -56, LOAD(local + 40));
  (void) STORE(InitStackPointer + -60, local + 28);
  (void) twofib();
  (void) STORE(InitStackPointer + -56, LOAD(local + 28));
  (void) STORE(InitStackPointer + -60, LOAD(local + 40));
  (void) STORE(InitStackPointer + -64, 134514006);
  (void) F_080482e4();
  return 0;
}

// addr = 08048472.0
// signature= func(F_08048472, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048472(???)
{
  reg_ag = LOAD(InitStackPointer);
  (void) _init();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_ag + 4354);
  if(reg_var1  <  reg_result) {
    do {
      reg_ac = LOAD(InitStackPointer);
      reg_result = intern_redirectCall(LOAD(LOAD(InitStackPointer) + reg_var1 * 4 + 4354));
      reg_var1++;
    } while(reg_var1  <  (LOAD(InitValue(initial_value_of_ebp) + -16) + reg_ac * -1 + -4354) / 4);
  }
  return reg_result;
}

// addr = 080484c3.0
// signature= func(F_080484c3, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484c3(???)
{
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(LOAD(InitStackPointer) + reg_var1 * 4 + 4273));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 08048529.0
// signature= func(F_08048529, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048529(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


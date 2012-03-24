// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080482a0 / F_080482a0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482b0 / F_080482b0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482ed.0
// signature= func(F_080482ed, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482ed(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  if(LOAD(reg_aa + 4743)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_aa + 4743));
  }
  return LOAD(InitStackPointer);
}

// addr = 08048368.0
// signature= func(proc1, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? proc1(???)
{
  return ARG_1 * -1 + ARG_0;
}

// addr = 08048375.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(InitStackPointer + -40, 4);
  (void) STORE(InitStackPointer + -44, 11);
  reg_ab = proc1();
  (void) STORE(InitStackPointer + -40, reg_ab);
  (void) STORE(InitStackPointer + -44, 134513808);
  reg_result = F_080482b0();
  return reg_result;
}

// addr = 080483be.0
// signature= func(F_080483be, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483be(???)
{
  reg_ag = LOAD(InitStackPointer);
  (void) _init();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_ag + 4314);
  if(reg_var1  <  reg_result) {
    do {
      reg_ac = LOAD(InitStackPointer);
      reg_result = intern_redirectCall(LOAD(LOAD(InitStackPointer) + reg_var1 * 4 + 4314));
      reg_var1++;
    } while(reg_var1  <  (LOAD(InitValue(initial_value_of_ebp) + -16) + reg_ac * -1 + -4314) / 4);
  }
  return reg_result;
}

// addr = 0804840f.0
// signature= func(F_0804840f, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804840f(???)
{
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(LOAD(InitStackPointer) + reg_var1 * 4 + 4233));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 08048475.0
// signature= func(F_08048475, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048475(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


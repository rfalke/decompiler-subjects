// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x08048384 / F_08048384 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048394 / F_08048394 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080483a4 / F_080483a4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080483b4 / F_080483b4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080483fe.0
// signature= func(F_080483fe, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483fe(???)
{
  if(LOAD(LOAD(InitStackPointer) + 4838)  !=  0) {
    (void) F_080483b4();
  }
  return ARG_0;
}

// addr = 08048474.0
// signature= func(getDevice, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? getDevice(???)
{
  return LOAD(ARG_0 + 24);
}

// addr = 0804847f.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_aa = F_08048384();
  (void) STORE(InitStackPointer + -44, LOAD(reg_aa));
  reg_ab = getDevice();
  (void) STORE(InitStackPointer + -40, reg_ab);
  (void) STORE(InitStackPointer + -44, 134514168);
  (void) F_080483a4();
  return 0;
}

// addr = 080484de.0
// signature= func(F_080484de, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484de(???)
{
  reg_ag = LOAD(InitStackPointer);
  (void) _init();
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_result);
  if(!UNDEF) {
    reg_var1 = 0;
    reg_var2 = reg_ag + 4386;
    do {
      reg_result = intern_redirectCall(LOAD(reg_var2));
      reg_var1++;
      reg_var2 += 4;
    } while(reg_var1  <  LOAD(InitValue(initial_value_of_ebp) + -16));
  }
  return reg_result;
}

/* The decompilation of 0x0804854e / F_0804854e failed: java.lang.RuntimeException: The jump goto L3 in block 0 got converted to a default jump after simplification and is not the last jump. */

// addr = 080485de.0
// signature= func(F_080485de, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080485de(???)
{
  (void) __do_global_dtors_aux();
  return ARG_0;
}


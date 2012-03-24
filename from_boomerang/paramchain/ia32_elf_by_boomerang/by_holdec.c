// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080487d8 / atexit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487f8 / exit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048808 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048880 / F_08048880 failed: java.lang.RuntimeException: Unknown line 080488c9.0+4 l.bt edx,0xa with code 'l.bt edx,0xa' and baseCommand 'bt' */

/* The decompilation of 0x08048924 / F_08048924 failed: java.lang.AssertionError: self=08048924[0,1].0 first=08048924[0,1].0 */

// addr = 08048938.0
// signature= func(passem, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? passem(???)
{
  reg_result = F_08048924();
  return reg_result;
}

// addr = 08048950.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 12, 10);
  (void) STORE(local + 16, 40);
  (void) STORE(local + 20, local + 24);
  (void) STORE(local + 28, InitValue(initial_value_of_ebp));
  (void) STORE(local + 8, 5);
  (void) passem();
  (void) STORE(local + 4, LOAD(local + 24));
  (void) STORE(local, 134519596);
  (void) printf();
  return 0;
}

// addr = 08048982.0
// signature= func(F_08048982, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048982(???)
{
  reg_result = InitValue(initial_value_of_eax);
  reg_ad = LOAD(LOAD(InitStackPointer) + 4206);
  if(LOAD(LOAD(LOAD(InitStackPointer) + 4206) + -8)  !=  0) {
    (void) STORE(InitStackPointer, LOAD(LOAD(InitStackPointer) + 4206));
    reg_result = intern_redirectCall(LOAD(reg_ad + -8));
  }
  return reg_result;
}

// addr = 080489aa.0
// signature= func(F_080489aa, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080489aa(???)
{
  reg_result = InitValue(initial_value_of_eax);
  reg_ad = LOAD(LOAD(InitStackPointer) + 4170);
  if(LOAD(LOAD(LOAD(InitStackPointer) + 4170) + -20)  !=  0) {
    (void) STORE(InitStackPointer, LOAD(LOAD(InitStackPointer) + 4170) + -16);
    reg_result = intern_redirectCall(LOAD(reg_ad + -20));
  }
  return reg_result;
}


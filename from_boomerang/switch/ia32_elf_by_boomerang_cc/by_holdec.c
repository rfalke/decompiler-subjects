// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080487a4 / atexit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487c4 / exit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487d4 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0804884c / F_0804884c failed: java.lang.RuntimeException: Unknown line 08048895.0+4 l.bt edx,0xa with code 'l.bt edx,0xa' and baseCommand 'bt' */

/* The decompilation of 0x080488f0 / F_080488f0 failed: java.lang.AssertionError: self=080488f0[0,1].0 first=080488f0[0,1].0 */

// addr = 08048996.0
// signature= func(F_08048996, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048996(???)
{
  reg_result = InitValue(initial_value_of_eax);
  reg_ad = LOAD(LOAD(InitStackPointer) + 4230);
  if(LOAD(LOAD(LOAD(InitStackPointer) + 4230) + -8)  !=  0) {
    (void) STORE(InitStackPointer, LOAD(LOAD(InitStackPointer) + 4230));
    reg_result = intern_redirectCall(LOAD(reg_ad + -8));
  }
  return reg_result;
}

// addr = 080489be.0
// signature= func(F_080489be, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080489be(???)
{
  reg_result = InitValue(initial_value_of_eax);
  reg_ad = LOAD(LOAD(InitStackPointer) + 4194);
  if(LOAD(LOAD(LOAD(InitStackPointer) + 4194) + -20)  !=  0) {
    (void) STORE(InitStackPointer, LOAD(LOAD(InitStackPointer) + 4194) + -16);
    reg_result = intern_redirectCall(LOAD(reg_ad + -20));
  }
  return reg_result;
}


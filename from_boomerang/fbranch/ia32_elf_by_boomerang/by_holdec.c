// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080482a0 / puts failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482b0 / scanf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482d0 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 0804830e.0
// signature= func(F_0804830e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804830e(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 5066);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048390.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 16, 134514048);
  (void) STORE(local + 20, local + 36);
  (void) STORE(local + 40, InitValue(initial_value_of_ebp));
  reg_am = scanf();
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fstpq ss:[esp]");
  (void) STORE(local + 12, reg_am);
  (void) STORE(local + 4, 0);
  (void) STORE(local + 8, 1075052544);
  (void) STORE(local, 134514051);
  reg_ba = printf();
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fld ds:[0x80485cc]");
  asm("l.fxch st,st(1)");
  asm("l.fucom st(1)");
  asm("l.fstsw ax");
  asm("l.fstp st(1)");
  reg_var2 = NARROW(reg_ba / 256) & 69 ^ 64;
  reg_var1 = reg_ba & 0xffff00ff | WIDEN(NARROW(reg_ba / 256) & 69) * 256 & 0xffff00ff | WIDEN(reg_var2) * 256;
  if(reg_var2  ==  0) {
    asm("l.fstp st(0)");
    (void) STORE(local + 16, 134514085);
    reg_var1 = puts();
    reg_var2 = NARROW(reg_var1 / 256);
    asm("l.fld ss:[ebp-0x4]");
  }
  asm("l.fld ds:[0x80485cc]");
  asm("l.fucomp st(1)");
  asm("l.fstsw ax");
  reg_var3 = reg_var2 & 69;
  reg_result = reg_var1 & 0xffff00ff | WIDEN(reg_var3) * 256;
  if(reg_var3  !=  64) {
    asm("l.fstp st(0)");
    (void) STORE(local + 16, 134514113);
    reg_result = puts();
    reg_var3 = NARROW(reg_result / 256);
    asm("l.fld ss:[ebp-0x4]");
  }
  reg_var4 = reg_var3;
  asm("l.fld ds:[0x80485cc]");
  asm("l.fucomp st(1)");
  asm("l.fstsw ax");
  if((reg_var3 & 69)  ==  0) {
    asm("l.fstp st(0)");
    (void) STORE(local + 16, 134514105);
    reg_result = puts();
    reg_var4 = NARROW(reg_result / 256);
    asm("l.fld ss:[ebp-0x4]");
  }
  reg_var5 = reg_var4;
  asm("l.fld ds:[0x80485cc]");
  asm("l.fxch st,st(1)");
  asm("l.fucom st(1)");
  asm("l.fstsw ax");
  asm("l.fstp st(1)");
  if((reg_var4 & 1)  ==  0) {
    asm("l.fstp st(0)");
    (void) STORE(local + 16, 134514091);
    reg_result = puts();
    reg_var5 = NARROW(reg_result / 256);
    asm("l.fld ss:[ebp-0x4]");
  }
  reg_var6 = reg_var5;
  asm("l.fld ds:[0x80485cc]");
  asm("l.fucomp st(1)");
  asm("l.fstsw ax");
  if((reg_var5 & 1)  ==  0) {
    asm("l.fstp st(0)");
    (void) STORE(local + 16, 134514074);
    reg_result = puts();
    reg_var6 = NARROW(reg_result / 256);
    asm("l.fld ss:[ebp-0x4]");
  }
  asm("l.fld ds:[0x80485cc]");
  asm("l.fxch st,st(1)");
  asm("l.fucompp");
  asm("l.fstsw ax");
  if((reg_var6 & 69)  ==  0) {
    (void) STORE(local + 16, 134514069);
    reg_result = puts();
  }
  return reg_result;
}

// addr = 08048566.0
// signature= func(F_08048566, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048566(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


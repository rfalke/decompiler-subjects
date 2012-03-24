// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x08048564 / F_08048564 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048574 / F_08048574 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048584 / f_exit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048594 / F_08048594 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080485a4 / F_080485a4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080485b4 / F_080485b4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080485c4 / F_080485c4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080485d4 / F_080485d4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080485e4 / F_080485e4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080485f4 / F_080485f4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048604 / F_08048604 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048614 / F_08048614 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 08048651.0
// signature= func(F_08048651, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048651(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  if(LOAD(reg_aa + 5215)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_aa + 5215));
  }
  return LOAD(InitStackPointer);
}

/* The decompilation of 0x080486cc / MAIN__ failed: java.lang.AssertionError: Block L6 calls block L7 which isn't available */

// addr = 08048824.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 28, ARG_0);
  (void) STORE(local + 32, ARG_1);
  (void) STORE(local + 52, InitValue(initial_value_of_ebp));
  (void) F_08048604();
  (void) F_080485e4();
  (void) F_080485d4();
  (void) STORE(local + 28, 134514052);
  (void) atexit();
  (void) MAIN__();
  (void) STORE(local + 28, 0);
  (void) F_080485f4();
  (void) STORE(local + 12, InitValue(initial_value_of_ebx));
  (void) STORE(local + 16, InitValue(initial_value_of_esi));
  (void) STORE(local + 20, InitValue(initial_value_of_edi));
  (void) STORE(local + 24, local + 52);
  (void) F_0804887a();
  reg_ab = LOAD(local);
  (void) _init();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(local + 8, reg_ab + 4414);
  if(reg_var1  <  reg_result) {
    do {
      reg_ad = LOAD(local);
      reg_result = intern_redirectCall(LOAD(LOAD(local) + reg_var1 * 4 + 4414));
      reg_var1++;
    } while(reg_var1  <  (LOAD(local + 8) + reg_ad * -1 + -4414) / 4);
  }
  return reg_result;
}

// addr = 0804887a.0
// signature= func(F_0804887a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804887a(???)
{
  reg_ag = LOAD(InitStackPointer);
  (void) _init();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_ag + 4414);
  if(reg_var1  <  reg_result) {
    do {
      reg_ac = LOAD(InitStackPointer);
      reg_result = intern_redirectCall(LOAD(LOAD(InitStackPointer) + reg_var1 * 4 + 4414));
      reg_var1++;
    } while(reg_var1  <  (LOAD(InitValue(initial_value_of_ebp) + -16) + reg_ac * -1 + -4414) / 4);
  }
  return reg_result;
}

// addr = 080488cb.0
// signature= func(F_080488cb, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080488cb(???)
{
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(LOAD(InitStackPointer) + reg_var1 * 4 + 4333));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 08048904.0
// signature= func(atexit, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? atexit(???)
{
  (void) F_0804890d();
  reg_result = F_080485a4();
  return reg_result;
}

// addr = 0804890d.0
// signature= func(F_0804890d, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804890d(???)
{
  reg_var1 = 0;
  if(LOAD(LOAD(InitStackPointer) + 4511)  !=  0) {
    reg_var1 = LOAD(LOAD(LOAD(InitStackPointer) + 4511));
  }
  (void) STORE(InitStackPointer, reg_var1);
  reg_result = F_080485a4();
  return reg_result;
}

// addr = 08048961.0
// signature= func(F_08048961, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048961(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


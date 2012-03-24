// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x0804868c / atexit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080486ac / exit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080486bc / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080486cc / scanf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 08048756.0
// signature= func(F_08048756, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048756(???)
{
/* The decompilation of 0x08048756 / F_08048756 failed: java.lang.AssertionError */

// addr = 08048789.0
// signature= func(F_08048789, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048789(???)
{
  return InitValue(initial_value_of_eax);
}

/* The decompilation of 0x08048798 / F_08048798 failed: java.lang.AssertionError: self=08048798[0,1].0 first=08048798[0,1].0 */

// addr = 080487cc.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 12, InitValue(initial_value_of_ebx));
  (void) STORE(local + 16, InitValue(initial_value_of_esi));
  (void) STORE(local + 24, InitValue(initial_value_of_ebp));
  (void) STORE(local + 8, 134514872);
  (void) printf();
  (void) STORE(local + 4, local + 20);
  (void) STORE(local, 134514887);
  (void) scanf();
  reg_af = LOAD(local + 20);
  if(LOAD(local + 20)  <=  1) {
    reg_var1 = LOAD(local + 20);
  } else {
    (void) STORE(local + 8, LOAD(local + 20) + -1);
    reg_aa = F_08048798();
    (void) STORE(local + 4, reg_af + -2);
    reg_ac = F_08048798();
    reg_var1 = reg_aa + reg_ac;
  }
  (void) STORE(local + 4, LOAD(local + 20));
  (void) STORE(local + 8, reg_var1);
  (void) STORE(local, 134514890);
  (void) printf();
  return 0;
}

/* The decompilation of 0x08048830 / F_08048830 failed: java.lang.AssertionError: self=08048830[1,1].0 first=08048830[1,1].0 */

// addr = 0804883a.0
// signature= func(F_0804883a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804883a(???)
{
/* The decompilation of 0x0804883a / F_0804883a failed: java.lang.AssertionError */

// addr = 0804886d.0
// signature= func(F_0804886d, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804886d(???)
{
  return InitValue(initial_value_of_eax);
}


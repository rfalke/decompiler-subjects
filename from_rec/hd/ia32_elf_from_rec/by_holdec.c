// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080484b8 / strcpy failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484c8 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484d8 / perror failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484e8 / _xstat failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048508 / strcat failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048518 / fread failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048528 / fopen failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048538 / fclose failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048548 / sprintf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048558 / atexit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048568 / exit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048588 / strlen failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 08048660.0
// signature= func(dumpline, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? dumpline(???)
{
  (void) STORE(local + 104, InitValue(initial_value_of_ebp));
  (void) STORE(local + 12, InitValue(initial_value_of_ebx));
  (void) STORE(local + 4, 134515144);
  (void) STORE(local + 8, ARG_1);
  (void) STORE(local, local + 24);
  (void) sprintf();
  if(ARG_2  >  16) {
    (void) STORE(&ARG_2, 16);
  }
  (void) STORE(local + 20, 0);
  while(LOAD(local + 20)  <  ARG_2) {
    (void) STORE(local + 4, 134515151);
    (void) STORE(local + 8, UNSIGNED_EXTEND(LOAD(LOAD(local + 20) + ARG_0)));
    (void) STORE(local, LOAD(local + 20) * 3 + local + 33);
    (void) sprintf();
    (void) STORE(local + 20, LOAD(local + 20) + 1);
  }
  while(1) {
    reg_ab = LOAD(local + 20);
    (void) STORE(local + 20, LOAD(local + 20) + 1);
    if(reg_ab  >  15) {
      break;
    }
    (void) STORE(local + 4, local + 24);
    (void) STORE(local + 8, 134515158);
    (void) strcat();
  }
  (void) STORE(local + 8, local + 24);
  reg_ac = strlen();
  (void) STORE(local + 16, reg_ac);
  (void) STORE(local + 4, reg_ac + local + 24);
  (void) STORE(local + 8, 134515162);
  (void) strcpy();
  (void) STORE(local + 20, 0);
  while(LOAD(local + 20)  <  ARG_2) {
    reg_ae = LOAD(local + 16) + LOAD(local + 20);
    reg_ad = LOAD(LOAD(local + 20) + ARG_0)  <=  31 || LOAD(LOAD(local + 20) + ARG_0)  >  126 ? 46 : LOAD(LOAD(local + 20) + ARG_0);
    (void) STORE(reg_ae + local + 24, reg_ad);
    (void) STORE(local + 20, LOAD(local + 20) + 1);
  }
  for(...) {
    // state = PRELIMINARY
    while(LOAD(local + 20)  <=  15) {
      (void) STORE(LOAD(local + 16) + LOAD(local + 20) + local + 24, 32);
      (void) STORE(local + 20, LOAD(local + 20) + 1);
    }
  }
  (void) STORE(local + 4, LOAD(local + 16) + LOAD(local + 20) + local + 24);
  (void) STORE(local + 8, 134515166);
  (void) strcpy();
  (void) STORE(local + 4, 134515168);
  (void) STORE(local + 8, local + 24);
  reg_result = printf();
  return reg_result;
}

// addr = 080487f0.0
// signature= func(hexdump, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? hexdump(???)
{
  (void) STORE(local + 108, InitValue(initial_value_of_ebp));
  (void) STORE(local + 12, local + 20);
  (void) STORE(local + 8, ARG_0);
  reg_ag = stat();
  if(reg_ag  ==  0) {
    (void) STORE(local + 12, ARG_0);
    (void) perror();
    reg_result = 1;
  } else {
    (void) STORE(local + 12, 134515172);
    (void) STORE(local + 8, ARG_0);
    reg_ae = fopen();
    (void) STORE(local + 84, reg_ae);
    if(LOAD(local + 84)  ==  0) {
      (void) STORE(local + 12, ARG_0);
      (void) perror();
      reg_result = 1;
    } else {
      (void) STORE(local + 88, 0);
      while(LOAD(local + 88)  <  LOAD(local + 40)) {
        (void) STORE(local + 12, LOAD(local + 84));
        (void) STORE(local + 4, 1);
        (void) STORE(local + 8, 16);
        (void) STORE(local, local + 92);
        reg_af = fread();
        (void) STORE(local + 16, reg_af);
        if(LOAD(local + 16)  ==  0) {
          break;
        }
        (void) STORE(local + 12, LOAD(local + 16));
        (void) STORE(local + 4, local + 92);
        (void) STORE(local + 8, LOAD(local + 88));
        (void) dumpline();
        (void) STORE(local + 88, LOAD(local + 16) + LOAD(local + 88));
      }
      (void) STORE(local + 12, LOAD(local + 84));
      (void) fclose();
      reg_result = 0;
    }
  }
  return reg_result;
}

// addr = 080488e0.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_result = 0;
  reg_var1 = 1;
  while(reg_var1  <  ARG_0) {
    reg_ac = hexdump();
    reg_result += reg_ac;
    reg_var1++;
  }
  return reg_result;
}

// addr = 08048950.0
// signature= func(stat, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? stat(???)
{
  reg_result = _xstat();
  return reg_result;
}


// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048474.0
// signature= func(F_08048474, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048474(???)
{
  if(LOAD(LOAD(InitStackPointer) + 7036)  !=  0) {
    (void) F_080484c8();
  }
  (void) frame_dummy();
  (void) __do_global_ctors_aux();
  return ARG_0;
}

/* The decompilation of 0x080484a8 / F_080484a8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484b8 / F_080484b8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484c8 / F_080484c8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484d8 / F_080484d8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484e8 / F_080484e8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484f8 / F_080484f8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048508 / F_08048508 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048518 / F_08048518 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048528 / F_08048528 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048538 / F_08048538 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048548 / F_08048548 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048558 / F_08048558 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048568 / F_08048568 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 08048634.0
// signature= func(dumpline, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? dumpline(???)
{
  (void) STORE(local + 124, g_0x00000014);
  (void) STORE(local + 132, InitValue(initial_value_of_ebx));
  (void) STORE(local + 136, InitValue(initial_value_of_ebp));
  (void) STORE(local + 28, ARG_0);
  (void) STORE(local + 4, 134515232);
  (void) STORE(local + 8, ARG_1);
  (void) STORE(local, local + 44);
  (void) F_080484a8();
  if(ARG_2  >  16) {
    (void) STORE(&ARG_2, 16);
  }
  (void) STORE(local + 40, 0);
  while(LOAD(local + 40)  <  ARG_2) {
    reg_ak = LOAD(local + 40);
    (void) STORE(local + 4, 134515239);
    (void) STORE(local + 8, UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(LOAD(local + 28) + reg_ak)))));
    (void) STORE(local, reg_ak * 3 + local + 53);
    (void) F_080484a8();
    (void) STORE(local + 40, LOAD(local + 40) + 1);
  }
  while(1) {
    reg_aj = BIT_TO_INT(LOAD(local + 40)  <=  15);
    (void) STORE(local + 40, LOAD(local + 40) + 1);
    if(reg_aj  ==  0) {
      break;
    }
    (void) STORE(local + 4, 134515246);
    (void) STORE(local, local + 44);
    (void) F_08048548();
  }
  (void) STORE(local, local + 44);
  reg_ab = F_08048518();
  (void) STORE(local + 36, reg_ab);
  (void) STORE(local + 4, 134515250);
  (void) STORE(local + 8, 4);
  (void) STORE(local, reg_ab + local + 44);
  (void) F_08048508();
  (void) STORE(local + 36, LOAD(local + 36) + 3);
  (void) STORE(local + 40, 0);
  while(LOAD(local + 40)  <  ARG_2) {
    reg_ae = LOAD(local + 40);
    reg_ad = LOAD(local + 36);
    reg_ai = NARROW(UNSIGNED_EXTEND(LOAD(LOAD(local + 28) + LOAD(local + 40))))  <=  31 || NARROW(UNSIGNED_EXTEND(LOAD(LOAD(local + 28) + LOAD(local + 40))))  >  126 ? 46 : NARROW(UNSIGNED_EXTEND(LOAD(LOAD(local + 28) + LOAD(local + 40))));
    (void) STORE(reg_ad + reg_ae + local + 44, reg_ai);
    (void) STORE(local + 40, LOAD(local + 40) + 1);
  }
  for(...) {
    // state = PRELIMINARY
    while(LOAD(local + 40)  <=  15) {
      (void) STORE(LOAD(local + 36) + LOAD(local + 40) + local + 44, 32);
      (void) STORE(local + 40, LOAD(local + 40) + 1);
    }
  }
  reg_af = LOAD(local + 36);
  reg_ag = LOAD(local + 40);
  (void) STORE(local + 4, 134515254);
  (void) STORE(local + 8, 2);
  (void) STORE(local, reg_af + reg_ag + local + 44);
  (void) F_08048508();
  (void) STORE(local, local + 44);
  (void) F_08048558();
  reg_result = LOAD(local + 124) ^ g_0x00000014;
  if(reg_result  !=  0) {
    reg_result = F_08048538();
  }
  return reg_result;
}

// addr = 080487c6.0
// signature= func(hexdump, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? hexdump(???)
{
  (void) STORE(local + 156, g_0x00000014);
  (void) STORE(local + 168, InitValue(initial_value_of_ebp));
  (void) STORE(local + 28, ARG_0);
  reg_aj = ARG_0;
  (void) STORE(local + 4, local + 40);
  (void) STORE(local, reg_aj);
  reg_ai = __stat();
  if(reg_ai  ==  0) {
    reg_ag = LOAD(local + 28);
    (void) STORE(local + 4, 134515256);
    (void) STORE(local, reg_ag);
    reg_ah = F_08048528();
    (void) STORE(local + 132, reg_ah);
    if(LOAD(local + 132)  ==  0) {
      (void) STORE(local, LOAD(local + 28));
      (void) F_080484e8();
      reg_result = 1;
    } else {
      (void) STORE(local + 136, 0);
      while(LOAD(local + 136)  <  LOAD(local + 84)) {
        (void) STORE(local + 12, LOAD(local + 132));
        (void) STORE(local + 4, 1);
        (void) STORE(local + 8, 16);
        (void) STORE(local, local + 140);
        reg_af = F_08048568();
        (void) STORE(local + 128, reg_af);
        if(LOAD(local + 128)  ==  0) {
          break;
        }
        (void) STORE(local + 4, LOAD(local + 136));
        (void) STORE(local + 8, LOAD(local + 128));
        (void) STORE(local, local + 140);
        (void) dumpline();
        (void) STORE(local + 136, LOAD(local + 128) + LOAD(local + 136));
      }
      (void) STORE(local, LOAD(local + 132));
      (void) F_080484f8();
      reg_result = 0;
    }
  } else {
    (void) STORE(local, LOAD(local + 28));
    (void) F_080484e8();
    reg_result = 1;
  }
  if((LOAD(local + 156) ^ g_0x00000014)  !=  0) {
    reg_result = F_08048538();
  }
  return reg_result;
}

// addr = 080488ca.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_result = 0;
  reg_var1 = 1;
  while(reg_var1  <  ARG_0) {
    reg_ag = hexdump();
    reg_result += reg_ag;
    reg_var1++;
  }
  return reg_result;
}

// addr = 0804898a.0
// signature= func(__i686.get_pc_thunk.bx, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __i686.get_pc_thunk.bx(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048990.0
// signature= func(__stat, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __stat(???)
{
  (void) __i686.get_pc_thunk.bx();
  reg_result = F_080484b8();
  return reg_result;
}

// addr = 08048a08.0
// signature= func(F_08048a08, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048a08(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


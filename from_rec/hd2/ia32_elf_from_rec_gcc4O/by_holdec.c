// Decompiled by holdec 1.1 (2012-03-24)

// addr = 0804845c.0
// signature= func(F_0804845c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804845c(???)
{
  if(LOAD(LOAD(InitStackPointer) + 7060)  !=  0) {
    (void) F_080484a0();
  }
  (void) frame_dummy();
  (void) __do_global_ctors_aux();
  return ARG_0;
}

/* The decompilation of 0x08048490 / F_08048490 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484a0 / F_080484a0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484b0 / F_080484b0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484c0 / F_080484c0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484d0 / F_080484d0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484e0 / F_080484e0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080484f0 / F_080484f0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048500 / F_08048500 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048510 / F_08048510 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048520 / F_08048520 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048530 / F_08048530 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048600 / dumpline failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L14 in if(CMP(reg_a18, !=, reg_pp25)) goto L12: The current setter is reg_e10 while [reg_pp25] was found. Related expressions are [reg_e7, reg_e10, reg_pp25, reg_e5] */

// addr = 080487af.0
// signature= func(hexdump, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? hexdump(???)
{
  (void) STORE(local + 156, InitValue(initial_value_of_ebx));
  (void) STORE(local + 160, InitValue(initial_value_of_esi));
  (void) STORE(local + 164, InitValue(initial_value_of_edi));
  (void) STORE(local + 168, InitValue(initial_value_of_ebp));
  reg_al = ARG_0;
  (void) STORE(local + 140, g_0x00000014);
  (void) STORE(local + 4, reg_al);
  (void) STORE(local + 8, local + 36);
  (void) STORE(local, 3);
  reg_ab = F_08048490();
  if(reg_ab  ==  0) {
    (void) STORE(local + 4, 134515126);
    (void) STORE(local, reg_al);
    reg_ag = F_08048500();
    (void) STORE(local + 28, reg_ag);
    if(reg_ag  ==  0) {
      (void) STORE(local, reg_al);
      (void) F_080484d0();
      reg_result = 1;
    } else {
      reg_var1 = 0;
      if(LOAD(local + 80)  !=  0) {
        do {
          (void) STORE(local + 12, LOAD(local + 28));
          (void) STORE(local + 4, 1);
          (void) STORE(local + 8, 16);
          (void) STORE(local, local + 124);
          reg_aj = F_08048530();
          if(reg_aj  ==  0) {
            break;
          }
          (void) STORE(local + 4, reg_var1);
          (void) STORE(local + 8, reg_aj);
          (void) STORE(local, local + 124);
          (void) dumpline();
          reg_var1 += reg_aj;
        } while(reg_var1  <  LOAD(local + 80));
      }
      (void) STORE(local, LOAD(local + 28));
      (void) F_080484f0();
      reg_result = 0;
    }
  } else {
    (void) STORE(local, reg_al);
    (void) F_080484d0();
    reg_result = 1;
  }
  if((LOAD(local + 140) ^ g_0x00000014)  !=  0) {
    reg_result = F_08048510();
  }
  return reg_result;
}

// addr = 080488a0.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_var1 = 1;
  reg_result = 0;
  if(ARG_0  >  1) {
    do {
      reg_af = hexdump();
      reg_result += reg_af;
      reg_var1++;
    } while(reg_var1  <  ARG_0);
  }
  return reg_result;
}

// addr = 0804894a.0
// signature= func(__i686.get_pc_thunk.bx, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __i686.get_pc_thunk.bx(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048988.0
// signature= func(F_08048988, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048988(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080487f8 / atexit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048818 / exit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048828 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048838 / malloc failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048848 / free failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048858 / abort failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048868 / memset failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080488f1.0
// signature= func(F_080488f1, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080488f1(???)
{
  while(1) {
    reg_ab = LOAD(InitStackPointer);
    reg_ac = LOAD(LOAD(InitStackPointer) + 7335);
    if(LOAD(LOAD(LOAD(InitStackPointer) + 7335))  ==  0) {
      break;
    }
    (void) STORE(reg_ab + 7335, reg_ac + 4);
    (void) intern_redirectCall(LOAD(reg_ac));
  }
  (void) STORE(InitStackPointer, reg_ab + 7355);
  reg_result = __deregister_frame_info();
  return reg_result;
}

// addr = 08048931.0
// signature= func(F_08048931, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048931(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048949.0
// signature= func(F_08048949, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048949(???)
{
  (void) STORE(InitStackPointer, LOAD(InitStackPointer) + 8547);
  reg_result = __register_frame_info();
  return reg_result;
}

// addr = 08048971.0
// signature= func(F_08048971, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048971(???)
{
  return InitValue(initial_value_of_eax);
}

/* The decompilation of 0x08048980 / F_08048980 failed: java.lang.AssertionError: self=08048980[0,1].0 first=08048980[0,1].0 */

// addr = 08048990.0
// signature= func(add10, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? add10(???)
{
  return ARG_0 + 10;
}

// addr = 080489a0.0
// signature= func(add15, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? add15(???)
{
  return ARG_0 + 15;
}

// addr = 080489b0.0
// signature= func(printarg, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? printarg(???)
{
  reg_result = printf();
  return reg_result;
}

// addr = 080489c4.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) add15();
  (void) add10();
  (void) F_08048980();
  (void) printarg();
  return 0;
}

// addr = 08048b12.0
// signature= func(F_08048b12, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048b12(???)
{
  reg_result = InitValue(initial_value_of_eax);
/* The decompilation of 0x08048b12 / F_08048b12 failed: java.lang.AssertionError */

// addr = 08048ba2.0
// signature= func(F_08048ba2, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048ba2(???)
{
  if(LOAD(LOAD(InitValue(initial_value_of_ebp) + 8) + 12)  ==  0) {
    (void) STORE(InitStackPointer, LOAD(LOAD(InitValue(initial_value_of_ebp) + 8) + 8));
    reg_ac = count_fdes();
    (void) STORE(InitValue(initial_value_of_ebp) + -12, reg_ac);
  } else {
    reg_var1 = LOAD(LOAD(InitValue(initial_value_of_ebp) + 8) + 12);
    (void) STORE(InitValue(initial_value_of_ebp) + -12, 0);
    if(LOAD(reg_var1)  !=  0) {
      do {
        (void) STORE(InitStackPointer, LOAD(reg_var1));
        reg_ad = count_fdes();
        reg_var1 += 4;
        (void) STORE(InitValue(initial_value_of_ebp) + -12, LOAD(InitValue(initial_value_of_ebp) + -12) + reg_ad);
      } while(LOAD(reg_var1)  !=  0);
    }
  }
  reg_aa = LOAD(InitValue(initial_value_of_ebp) + -12);
  (void) STORE(LOAD(InitValue(initial_value_of_ebp) + 8) + 16, LOAD(InitValue(initial_value_of_ebp) + -12));
  (void) STORE(InitStackPointer, reg_aa * 4);
  (void) malloc();
  (void) STORE(InitValue(initial_value_of_ebp) + -12, 0);
  (void) STORE(InitValue(initial_value_of_ebp) + -4, 0);
  (void) STORE(InitValue(initial_value_of_ebp) + -8, -1);
  if(LOAD(LOAD(InitValue(initial_value_of_ebp) + 8) + 12)  ==  0) {
    (void) STORE(InitStackPointer, InitValue(initial_value_of_ebp) + -4);
    (void) add_fdes();
  } else {
    reg_var2 = LOAD(LOAD(InitValue(initial_value_of_ebp) + 8) + 12);
    if(LOAD(reg_var2)  !=  0) {
      (void) STORE(InitValue(initial_value_of_ebp) + -16, InitValue(initial_value_of_ebp) + -4);
      do {
        (void) malloc();
        (void) STORE(InitStackPointer, LOAD(InitValue(initial_value_of_ebp) + -16));
        (void) add_fdes();
        reg_var2 += 4;
      } while(LOAD(reg_var2)  !=  0);
    }
  }
  reg_al = malloc();
  reg_ag = LOAD(InitValue(initial_value_of_ebp) + 8);
  (void) STORE(LOAD(InitValue(initial_value_of_ebp) + 8) + 12, reg_al);
  (void) STORE(reg_ag, LOAD(InitValue(initial_value_of_ebp) + -8));
  reg_result = LOAD(InitValue(initial_value_of_ebp) + -4);
  (void) STORE(reg_ag + 4, LOAD(InitValue(initial_value_of_ebp) + -4));
  return reg_result;
}

/* The decompilation of 0x08048c8e / F_08048c8e failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L4 in if(CMP(LOAD(ADD(InitValue(initial_value_of_ebp), 8)), <, LOAD(reg_pp24))) goto L6: The current setter is reg_var13 while [reg_pp24] was found. Related expressions are [reg_var14, reg_var13, reg_var10, reg_pp25, reg_pp24, reg_pp23] */

// addr = 08048d2e.0
// signature= func(F_08048d2e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048d2e(???)
{
  reg_am = LOAD(InitStackPointer);
  reg_ah = LOAD(InitValue(initial_value_of_ebp) + 8);
  reg_ao = LOAD(LOAD(InitValue(initial_value_of_ebp) + 8) + 4);
  (void) STORE(InitValue(initial_value_of_ebp) + -12, LOAD(InitValue(initial_value_of_ebp) + 8) + LOAD(LOAD(InitValue(initial_value_of_ebp) + 8) + 4) * -1 + 13);
  ASSERT 0;
  (void) STORE(LOAD(InitValue(initial_value_of_ebp) + 12), reg_ao * -1 + reg_ah + 13);
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_am + 1948);
  (void) STORE(InitValue(initial_value_of_ebp) + -8, reg_ao * -1 + reg_ah + 13);
  if(UNDEF) {
    reg_var2 = 1;
  } else {
    ASSERT 0;
    if(UNDEF || LOAD(reg_ao * -1 + reg_ah + 13)  ==  122) {
      reg_var2 = 1;
    } else {
      reg_var2 = 0;
    }
  }
  if(reg_var2  ==  0) {
    reg_result = 0;
  } else {
    reg_ac = LOAD(LOAD(InitValue(initial_value_of_ebp) + 12));
    ASSERT 0;
    (void) STORE(InitValue(initial_value_of_ebp) + -16, LOAD(LOAD(InitValue(initial_value_of_ebp) + 12)));
    reg_ad = intern_indexOf(reg_ac, 0, -1);
    ASSERT 0;
    (void) STORE(InitValue(initial_value_of_ebp) + -12, EXTRACT(reg_ad, pos) + reg_ac);
    (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_am + 1949);
    (void) STORE(InitValue(initial_value_of_ebp) + -8, reg_am + 1949);
    if(!UNDEF) {
      (void) STORE(LOAD(InitValue(initial_value_of_ebp) + 12) + 4, 0);
    } else {
      (void) STORE(LOAD(InitValue(initial_value_of_ebp) + 12) + 4, LOAD(EXTRACT(reg_ad, pos) + reg_ac + 1));
    }
    (void) STORE(InitStackPointer, LOAD(InitValue(initial_value_of_ebp) + 12) + 8);
    (void) decode_uleb128();
    reg_aq = decode_sleb128();
    reg_ap = LOAD(InitValue(initial_value_of_ebp) + 12);
    reg_var1 = reg_aq + 1;
    (void) STORE(LOAD(InitValue(initial_value_of_ebp) + 12) + 16, UNSIGNED_EXTEND(LOAD(reg_aq)));
    if(LOAD(LOAD(reg_ap))  ==  122) {
      (void) STORE(InitStackPointer, InitValue(initial_value_of_ebp) + -4);
      reg_ar = decode_uleb128();
      reg_var1 = LOAD(InitValue(initial_value_of_ebp) + -4) + reg_ar;
    }
    reg_result = reg_var1;
  }
  return reg_result;
}

// addr = 08048e46.0
// signature= func(F_08048e46, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048e46(???)
{
  reg_ac = LOAD(InitValue(initial_value_of_ebp) + 16);
  reg_aa = LOAD(InitValue(initial_value_of_ebp) + 20);
  reg_ad = UNSIGNED_EXTEND(LOAD(LOAD(InitValue(initial_value_of_ebp) + 8)));
  (void) STORE(InitValue(initial_value_of_ebp) + -16, UNSIGNED_EXTEND(LOAD(LOAD(InitValue(initial_value_of_ebp) + 8))) & 64);
  (void) STORE(InitValue(initial_value_of_ebp) + 8, LOAD(InitValue(initial_value_of_ebp) + 8) + 1);
  if((reg_ad & 64)  ==  0 && NARROW(reg_ad)  >=  0 && (NARROW(reg_ad) & 192)  ==  0) {
    if((reg_ad & 64)  ==  0 && NARROW(reg_ad)  >=  0 && (NARROW(reg_ad) & 192)  ==  0 && reg_ad  <=  46) {
      asm("l.jmp ecx");
    }
    (void) abort();
  } else {
    if((reg_ad & 64)  !=  0) {
      (void) STORE(reg_aa, LOAD(reg_aa) + LOAD(reg_ac + 8) * (reg_ad & 63));
    } else if(NARROW(reg_ad)  <  0) {
      (void) STORE(InitValue(initial_value_of_ebp) + -8, reg_ad & 63);
      (void) STORE(InitStackPointer, InitValue(initial_value_of_ebp) + -4);
      reg_ab = decode_uleb128();
      reg_ae = LOAD(InitValue(initial_value_of_ebp) + 12);
      (void) STORE(InitValue(initial_value_of_ebp) + -4, LOAD(InitValue(initial_value_of_ebp) + -4) * LOAD(reg_ac + 12));
      (void) STORE(InitValue(initial_value_of_ebp) + 8, reg_ab);
      (void) STORE(LOAD(InitValue(initial_value_of_ebp) + -8) + reg_ae + 92, 1);
      (void) STORE(LOAD(InitValue(initial_value_of_ebp) + -8) * 4 + reg_ae + 16, LOAD(InitValue(initial_value_of_ebp) + -4) * LOAD(reg_ac + 12) * LOAD(reg_ac + 12));
    } else {
      (void) STORE(InitValue(initial_value_of_ebp) + -8, reg_ad & 63);
      (void) STORE(LOAD(InitValue(initial_value_of_ebp) + 12) + (reg_ad & 63) + 92, LOAD(InitValue(initial_value_of_ebp) + -16));
    }
  }
  return LOAD(InitValue(initial_value_of_ebp) + 8);
}

// addr = 080491d1.0
// signature= func(F_080491d1, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080491d1(???)
{
  reg_ab = LOAD(InitStackPointer);
  reg_ac = LOAD(InitValue(initial_value_of_ebp) + 12);
  (void) STORE(LOAD(InitValue(initial_value_of_ebp) + 12) + 8, LOAD(InitValue(initial_value_of_ebp) + 8));
  (void) STORE(reg_ac + 12, 0);
  (void) STORE(reg_ac + 16, 0);
  (void) STORE(reg_ac + 4, 0);
  (void) STORE(reg_ac, 0);
  reg_result = LOAD(reg_ab + 6387);
  (void) STORE(reg_ac + 20, LOAD(reg_ab + 6387));
  (void) STORE(reg_ab + 6387, reg_ac);
  return reg_result;
}

// addr = 08049219.0
// signature= func(F_08049219, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049219(???)
{
  reg_ac = LOAD(InitStackPointer);
  reg_ab = LOAD(InitValue(initial_value_of_ebp) + 8);
  reg_ad = LOAD(InitValue(initial_value_of_ebp) + 12);
  (void) STORE(LOAD(InitValue(initial_value_of_ebp) + 12) + 8, LOAD(InitValue(initial_value_of_ebp) + 8));
  (void) STORE(reg_ad + 12, reg_ab);
  (void) STORE(reg_ad + 16, 0);
  (void) STORE(reg_ad + 4, 0);
  (void) STORE(reg_ad, 0);
  reg_result = LOAD(reg_ac + 6315);
  (void) STORE(reg_ad + 20, LOAD(reg_ac + 6315));
  (void) STORE(reg_ac + 6315, reg_ad);
  return reg_result;
}

// addr = 0804925d.0
// signature= func(F_0804925d, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804925d(???)
{
  reg_var1 = LOAD(InitStackPointer) + 6247;
  while(1) {
    reg_ag = LOAD(reg_var1);
    if(LOAD(InitValue(initial_value_of_ebp) + 8)  ==  LOAD(LOAD(reg_var1) + 8)) {
      reg_result = LOAD(LOAD(reg_var1) + 20);
      (void) STORE(reg_var1, reg_result);
      if(LOAD(reg_ag)  !=  0) {
        (void) STORE(InitStackPointer, LOAD(reg_ag + 12));
        reg_result = free();
      }
      break;
    }
    reg_var1 = LOAD(reg_var1) + 20;
    if(LOAD(reg_ag + 20)  ==  0) {
      reg_result = abort();
      break;
    }
  }
  return reg_result;
}

// addr = 080492bd.0
// signature= func(F_080492bd, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080492bd(???)
{
  (void) STORE(InitStackPointer, LOAD(InitValue(initial_value_of_ebp) + 8));
  reg_result = find_fde();
  (void) STORE(InitValue(initial_value_of_ebp) + -148, reg_result);
  if(reg_result  !=  0) {
    (void) STORE(InitValue(initial_value_of_ebp) + -152, InitValue(initial_value_of_ebp) + -20);
    (void) STORE(InitStackPointer, InitValue(initial_value_of_ebp) + -20);
    reg_result = extract_cie_info();
    if(reg_result  !=  0) {
      (void) STORE(InitStackPointer, 116);
      (void) STORE(InitValue(initial_value_of_ebp) + -156, InitValue(initial_value_of_ebp) + -136);
      (void) memset();
      reg_an = LOAD(InitValue(initial_value_of_ebp) + -148);
      (void) STORE(InitValue(initial_value_of_ebp) + -132, LOAD(InitValue(initial_value_of_ebp) + -16));
      (void) STORE(InitValue(initial_value_of_ebp) + -46, NARROW(LOAD(InitValue(initial_value_of_ebp) + -4)));
      reg_ao = LOAD(reg_an + 4);
      if(reg_result  <  LOAD(LOAD(reg_an + 4) * -1 + reg_an + 4) + LOAD(reg_an + 4) * -1 + reg_an + 8) {
        (void) STORE(InitValue(initial_value_of_ebp) + -160, LOAD(InitValue(initial_value_of_ebp) + -152));
        (void) STORE(InitValue(initial_value_of_ebp) + -164, LOAD(InitValue(initial_value_of_ebp) + -156));
        do {
          reg_ad = LOAD(reg_ao * -1 + reg_an + 4) + reg_ao * -1 + reg_an + 4;
          (void) STORE(InitStackPointer, 0);
          reg_am = execute_cfa_insn();
        } while(reg_am  <  reg_ad + 4);
      }
      reg_var1 = LOAD(InitValue(initial_value_of_ebp) + -148) + 16;
      if(LOAD(LOAD(InitValue(initial_value_of_ebp) + -20))  ==  122) {
        (void) STORE(InitStackPointer, InitValue(initial_value_of_ebp) + -140);
        reg_ap = decode_uleb128();
        reg_var1 = LOAD(InitValue(initial_value_of_ebp) + -140) + reg_ap;
      }
      reg_af = LOAD(InitValue(initial_value_of_ebp) + -148);
      reg_ae = LOAD(InitValue(initial_value_of_ebp) + -148) + LOAD(LOAD(InitValue(initial_value_of_ebp) + -148));
      (void) STORE(InitValue(initial_value_of_ebp) + -144, LOAD(LOAD(InitValue(initial_value_of_ebp) + -148) + 8));
      if(reg_var1  <  reg_ae + 4) {
        (void) STORE(InitValue(initial_value_of_ebp) + -168, InitValue(initial_value_of_ebp) + -144);
        while(LOAD(InitValue(initial_value_of_ebp) + -144)  <=  LOAD(InitValue(initial_value_of_ebp) + 8)) {
          reg_ag = LOAD(reg_af) + reg_af;
          (void) STORE(InitStackPointer, LOAD(InitValue(initial_value_of_ebp) + -168));
          reg_aj = execute_cfa_insn();
          if(reg_aj  >=  reg_ag + 4) {
            break;
          }
        }
      }
      ASSERT 0;
      (void) intern_memcpy(InitValue(initial_value_of_ebp) + -136, LOAD(InitValue(initial_value_of_ebp) + 12), 112);
      reg_result = LOAD(InitValue(initial_value_of_ebp) + 12);
    }
  }
  return reg_result;
}

// addr = 08049422.0
// signature= func(F_08049422, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049422(???)
{
/* The decompilation of 0x08049422 / F_08049422 failed: java.lang.AssertionError */

// addr = 0804944c.0
// signature= func(init_dummy0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? init_dummy0(???)
{
  reg_result = F_08049455();
  return reg_result;
}

// addr = 08049455.0
// signature= func(F_08049455, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049455(???)
{
  return InitValue(initial_value_of_eax);
}


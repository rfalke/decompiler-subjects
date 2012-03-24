// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080487b0 / atexit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487d0 / exit failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487e0 / scanf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080487f0 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048800 / malloc failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048810 / free failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048820 / abort failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048830 / memset failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080488b9.0
// signature= func(F_080488b9, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080488b9(???)
{
  while(1) {
    reg_ab = LOAD(InitStackPointer);
    reg_ac = LOAD(LOAD(InitStackPointer) + 7635);
    if(LOAD(LOAD(LOAD(InitStackPointer) + 7635))  ==  0) {
      break;
    }
    (void) STORE(reg_ab + 7635, reg_ac + 4);
    (void) intern_redirectCall(LOAD(reg_ac));
  }
  (void) STORE(InitStackPointer, reg_ab + 7655);
  reg_result = __deregister_frame_info();
  return reg_result;
}

// addr = 080488f9.0
// signature= func(F_080488f9, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080488f9(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048911.0
// signature= func(F_08048911, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048911(???)
{
  (void) STORE(InitStackPointer, LOAD(InitStackPointer) + 9119);
  reg_result = __register_frame_info();
  return reg_result;
}

// addr = 08048939.0
// signature= func(F_08048939, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048939(???)
{
  return InitValue(initial_value_of_eax);
}

/* The decompilation of 0x08048948 / F_08048948 failed: java.lang.AssertionError: self=08048948[0,1].0 first=08048948[0,1].0 */

// addr = 08048b86.0
// signature= func(F_08048b86, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048b86(???)
{
  reg_result = InitValue(initial_value_of_eax);
/* The decompilation of 0x08048b86 / F_08048b86 failed: java.lang.AssertionError */

// addr = 08048c16.0
// signature= func(F_08048c16, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048c16(???)
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

/* The decompilation of 0x08048d02 / F_08048d02 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L4 in if(CMP(LOAD(ADD(InitValue(initial_value_of_ebp), 8)), <, LOAD(reg_pp24))) goto L6: The current setter is reg_var13 while [reg_pp24] was found. Related expressions are [reg_var14, reg_var13, reg_var10, reg_pp25, reg_pp24, reg_pp23] */

// addr = 08048da2.0
// signature= func(F_08048da2, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048da2(???)
{
  reg_am = LOAD(InitStackPointer);
  reg_ah = LOAD(InitValue(initial_value_of_ebp) + 8);
  reg_ao = LOAD(LOAD(InitValue(initial_value_of_ebp) + 8) + 4);
  (void) STORE(InitValue(initial_value_of_ebp) + -12, LOAD(InitValue(initial_value_of_ebp) + 8) + LOAD(LOAD(InitValue(initial_value_of_ebp) + 8) + 4) * -1 + 13);
  ASSERT 0;
  (void) STORE(LOAD(InitValue(initial_value_of_ebp) + 12), reg_ao * -1 + reg_ah + 13);
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_am + 2074);
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
    (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_am + 2075);
    (void) STORE(InitValue(initial_value_of_ebp) + -8, reg_am + 2075);
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

// addr = 08048eba.0
// signature= func(F_08048eba, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048eba(???)
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

// addr = 08049245.0
// signature= func(F_08049245, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049245(???)
{
  reg_ab = LOAD(InitStackPointer);
  reg_ac = LOAD(InitValue(initial_value_of_ebp) + 12);
  (void) STORE(LOAD(InitValue(initial_value_of_ebp) + 12) + 8, LOAD(InitValue(initial_value_of_ebp) + 8));
  (void) STORE(reg_ac + 12, 0);
  (void) STORE(reg_ac + 16, 0);
  (void) STORE(reg_ac + 4, 0);
  (void) STORE(reg_ac, 0);
  reg_result = LOAD(reg_ab + 6787);
  (void) STORE(reg_ac + 20, LOAD(reg_ab + 6787));
  (void) STORE(reg_ab + 6787, reg_ac);
  return reg_result;
}

// addr = 0804928d.0
// signature= func(F_0804928d, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804928d(???)
{
  reg_ac = LOAD(InitStackPointer);
  reg_ab = LOAD(InitValue(initial_value_of_ebp) + 8);
  reg_ad = LOAD(InitValue(initial_value_of_ebp) + 12);
  (void) STORE(LOAD(InitValue(initial_value_of_ebp) + 12) + 8, LOAD(InitValue(initial_value_of_ebp) + 8));
  (void) STORE(reg_ad + 12, reg_ab);
  (void) STORE(reg_ad + 16, 0);
  (void) STORE(reg_ad + 4, 0);
  (void) STORE(reg_ad, 0);
  reg_result = LOAD(reg_ac + 6715);
  (void) STORE(reg_ad + 20, LOAD(reg_ac + 6715));
  (void) STORE(reg_ac + 6715, reg_ad);
  return reg_result;
}

// addr = 080492d1.0
// signature= func(F_080492d1, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080492d1(???)
{
  reg_var1 = LOAD(InitStackPointer) + 6647;
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

// addr = 08049331.0
// signature= func(F_08049331, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049331(???)
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

// addr = 08049496.0
// signature= func(F_08049496, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049496(???)
{
/* The decompilation of 0x08049496 / F_08049496 failed: java.lang.AssertionError */

// addr = 080494c0.0
// signature= func(init_dummy0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? init_dummy0(???)
{
  reg_result = F_080494c9();
  return reg_result;
}

// addr = 080494c9.0
// signature= func(F_080494c9, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080494c9(???)
{
  return InitValue(initial_value_of_eax);
}


// Decompiled by holdec 1.1 (2012-03-24)

// addr = 080488bc.0
// signature= func(F_080488bc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080488bc(???)
{
  (void) F_08048ae4();
  (void) F_08048b3c();
  reg_result = F_0804a0d0();
  return reg_result;
}

/* The decompilation of 0x080488e4 / F_080488e4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080488f4 / F_080488f4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048904 / F_08048904 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048914 / F_08048914 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048924 / F_08048924 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048934 / F_08048934 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048944 / F_08048944 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048954 / F_08048954 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048964 / F_08048964 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048974 / F_08048974 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048984 / F_08048984 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048994 / F_08048994 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080489a4 / F_080489a4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080489b4 / F_080489b4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080489c4 / F_080489c4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080489d4 / F_080489d4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080489e4 / F_080489e4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080489f4 / F_080489f4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048a04 / F_08048a04 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048a14 / F_08048a14 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048a24 / F_08048a24 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048a34 / F_08048a34 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048a44 / F_08048a44 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048a54 / F_08048a54 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048a64 / F_08048a64 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048a74 / F_08048a74 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048a84 / F_08048a84 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048a94 / F_08048a94 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x08048aa4 / F_08048aa4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 08048ac0.0
// signature= func(F_08048ac0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048ac0(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, reg_aa);
  (void) STORE(local + 16, &ARG_0);
  (void) STORE(local + 20, 134520840);
  (void) STORE(local + 24, 134520924);
  (void) STORE(local + 28, InitValue(initial_value_of_edx));
  (void) STORE(local + 32, local + 32);
  (void) STORE(local + 8, 134515786);
  (void) F_080489c4();
  asm("l.hlt");
  (void) STORE(local + 4, 0);
  (void) STORE(local, InitValue(initial_value_of_ebx));
  (void) F_08048aed();
  reg_ab = LOAD(local);
  (void) STORE(local, InitValue(initial_value_of_edx));
  if(LOAD(reg_ab + 11867)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_ab + 11867));
  }
  return LOAD(local);
}

// addr = 08048ae4.0
// signature= func(F_08048ae4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048ae4(???)
{
  (void) F_08048aed();
  if(LOAD(InitValue(initial_value_of_ebx) + 11867)  !=  0) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + 11867));
  }
  return InitValue(initial_value_of_edx);
}

// addr = 08048aed.0
// signature= func(F_08048aed, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048aed(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  if(LOAD(reg_aa + 11867)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_aa + 11867));
  }
  return LOAD(InitStackPointer);
}

// addr = 08048b08.0
// signature= func(F_08048b08, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048b08(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x0804ba00)  ==  0) {
    while(1) {
      reg_result = g_0x0804b9d4;
      reg_ac = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x0804b9d4, reg_result + 4);
      (void) intern_redirectCall(reg_ac);
    }
    (void) STORE(&g_0x0804ba00, 1);
  }
  return reg_result;
}

// addr = 08048b3c.0
// signature= func(F_08048b3c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048b3c(???)
{
  reg_result = g_0x0804b83c;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

/* The decompilation of 0x08048b68 / F_08048b68 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L1 in (void) STORE(ADD(reg_pp1, SEGMENT2ADDR(reg_pp2)), 0): The current setter is reg_zi1 while [reg_pp2] was found. Related expressions are [reg_zi5, reg_zi4, reg_pp9, reg_zi2, reg_pp4, reg_pp2, reg_zi1, reg_zi0] */

// addr = 08048d64.0
// signature= func(F_08048d64, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048d64(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048d81.0
// signature= func(close_stdout, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? close_stdout(???)
{
  (void) F_08048d64();
  reg_var1 = BIT_TO_INT(BIT_TEST(31, BIT_TO_INT(BIT_TEST(31, (LOAD(LOAD(LOAD(InitValue(initial_value_of_ebx) + 11188))) / 32 & 1) + -1) || BIT_TEST(31, LOAD(LOAD(LOAD(InitValue(initial_value_of_ebx) + 11188))) / 32 & 1)) * -1)) * -1;
  if(reg_var1  ==  0) {
    reg_var2 = 1;
  } else {
    reg_result = F_080488e4();
    if(reg_result  ==  0) {
      reg_var2 = 0;
    } else {
      reg_var2 = 1;
    }
  }
  if(reg_var2  !=  0) {
    reg_result = F_08048a14();
    if(reg_result  !=  0) {
      reg_result = F_08048964();
      reg_var1 = LOAD(reg_result);
    }
    if(reg_var1  >=  0) {
      (void) F_08048934();
      if(LOAD(InitValue(initial_value_of_ebx) + 11384)  ==  0) {
        reg_result = F_08048a94();
      } else {
        (void) F_08049a8b();
        reg_result = F_08048a94();
      }
    }
  }
  return reg_result;
}

// addr = 08048e5f.0
// signature= func(F_08048e5f, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048e5f(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048f36.0
// signature= func(F_08048f36, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048f36(???)
{
  (void) F_08048d64();
  if(ARG_0  ==  0) {
    reg_var2 = InitValue(initial_value_of_ebx) + UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) / 32) * 4 + 11235;
    reg_var1 = LOAD(reg_var2);
  } else {
    reg_var2 = UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) / 32) * 4 + ARG_0 + 4;
    reg_var1 = LOAD(reg_var2);
  }
  reg_ad = UNSIGNED_EXTEND(LOAD(&ARG_1));
  (void) STORE(reg_var2, reg_var1 ^ (ARG_2 & 1 ^ reg_var1 >> (NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) & 31) & 1) << (NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) & 31));
  return reg_var1 >> (NARROW(reg_ad) & 31) & 1;
}

// addr = 08048fa3.0
// signature= func(F_08048fa3, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048fa3(???)
{
  (void) F_08048d64();
  reg_ac = F_08048934();
  reg_result = reg_ac;
  if((InitValue(initial_value_of_edx) & 0xffffff00 & WIDEN(BIT_TO_INT(InitValue(initial_value_of_edx)  ==  6)) | WIDEN(BIT_TO_INT(reg_ac  ==  InitValue(initial_value_of_eax))) & WIDEN(BIT_TO_INT(InitValue(initial_value_of_edx)  ==  6)))  !=  0) {
    reg_result = InitValue(initial_value_of_ebx) + 5590;
  }
  return reg_result;
}

/* The decompilation of 0x08048ff6 / F_08048ff6 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L8 in (void) STORE(ADD(reg_c1, reg_d4, SEGMENT2ADDR(reg_zj1)), 92): The current setter is reg_zj2 while [reg_zj1] was found. Related expressions are [reg_zj21, reg_zj22, reg_zj20, reg_zj23, reg_zj24, reg_pp86, reg_pp68, reg_pp21, reg_pp81, reg_pp44, reg_pp60, reg_pp23, reg_zj8, reg_zj7, reg_zj9, reg_zj6, reg_pp49, reg_zj5, reg_zj0, reg_zj18, reg_zj2, reg_zj17, reg_zj1, reg_zj16, reg_zj10, reg_zj11, reg_pp78, reg_zj12, reg_zj13, reg_zj14, reg_pp56, reg_pp30, reg_pp33, reg_pp18, reg_pp36, reg_pp15, reg_pp10] */

// addr = 080496c3.0
// signature= func(F_080496c3, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080496c3(???)
{
  (void) F_08048d64();
  reg_ab = F_08048964();
  reg_ac = LOAD(reg_ab);
  reg_result = F_08048ff6();
  (void) STORE(reg_ab, reg_ac);
  return reg_result;
}

/* The decompilation of 0x08049721 / F_08049721 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L0 in (void) STORE(reg_h1, reg_pp6): The current setter is reg_f0 while [reg_pp6] was found. Related expressions are [reg_f0, reg_f2, reg_pp6, reg_f9] */

// addr = 08049905.0
// signature= func(F_08049905, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049905(???)
{
  ASSERT UNDEF  !=  0;
  (void) STORE(local + 48, InitValue(initial_value_of_esi));
  (void) STORE(local + 52, InitValue(initial_value_of_edi));
  (void) STORE(local + 56, InitValue(initial_value_of_ebp));
  (void) STORE(local, InitValue(initial_value_of_edx));
  (void) intern_memfillL(local + 4, 0, 8);
  (void) STORE(InitValue(initial_value_of_eax) + 12, LOAD(local + 12));
  (void) STORE(InitValue(initial_value_of_eax) + 16, LOAD(local + 16));
  (void) STORE(InitValue(initial_value_of_eax) + 20, LOAD(local + 20));
  (void) STORE(InitValue(initial_value_of_eax) + 24, LOAD(local + 24));
  (void) STORE(InitValue(initial_value_of_eax) + 28, LOAD(local + 28));
  (void) STORE(InitValue(initial_value_of_eax) + 32, LOAD(local + 32));
  (void) STORE(InitValue(initial_value_of_eax) + 4, LOAD(local + 4));
  (void) STORE(InitValue(initial_value_of_eax) + 8, LOAD(local + 8));
  (void) STORE(InitValue(initial_value_of_eax), LOAD(local));
  return InitValue(initial_value_of_eax);
}

// addr = 0804995f.0
// signature= func(F_0804995f, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804995f(???)
{
  (void) STORE(local + 68, InitValue(initial_value_of_esi));
  (void) STORE(local + 72, InitValue(initial_value_of_ebp));
  (void) F_08049905();
  (void) STORE(local + 4, local + 16);
  (void) STORE(local, -1);
  reg_result = F_08049721();
  return reg_result;
}

// addr = 080499f0.0
// signature= func(F_080499f0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080499f0(???)
{
  (void) STORE(local + 64, InitValue(initial_value_of_ebx));
  (void) STORE(local + 68, InitValue(initial_value_of_esi));
  (void) STORE(local + 72, InitValue(initial_value_of_ebp));
  (void) F_08048d64();
  reg_aa = SIGNED_EXTEND(LOAD(&ARG_1));
  (void) STORE(local + 16, LOAD(InitValue(initial_value_of_ebx) + 8486));
  (void) STORE(local + 20, LOAD(InitValue(initial_value_of_ebx) + 8490));
  (void) STORE(local + 24, LOAD(InitValue(initial_value_of_ebx) + 8494));
  (void) STORE(local + 28, LOAD(InitValue(initial_value_of_ebx) + 8498));
  (void) STORE(local + 32, LOAD(InitValue(initial_value_of_ebx) + 8502));
  (void) STORE(local + 36, LOAD(InitValue(initial_value_of_ebx) + 8506));
  (void) STORE(local + 40, LOAD(InitValue(initial_value_of_ebx) + 8510));
  (void) STORE(local + 44, LOAD(InitValue(initial_value_of_ebx) + 8514));
  reg_ac = LOAD(InitValue(initial_value_of_ebx) + 8518);
  (void) STORE(local + 4, reg_aa);
  (void) STORE(local + 48, reg_ac);
  (void) STORE(local + 8, 1);
  (void) STORE(local, local + 16);
  (void) F_08048f36();
  (void) STORE(local + 4, local + 16);
  (void) STORE(local, -1);
  reg_result = F_08049721();
  return reg_result;
}

// addr = 08049a8b.0
// signature= func(F_08049a8b, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049a8b(???)
{
  (void) F_08048d64();
  reg_result = F_080499f0();
  return reg_result;
}

// addr = 08049ac0.0
// signature= func(F_08049ac0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049ac0(???)
{
  reg_var2 = 0;
  (void) F_08048d64();
  reg_var1 = ARG_4 + 4;
  reg_var3 = ARG_4;
  while(1) {
    if(LOAD(reg_var3)  ==  0 && ARG_1  ==  0) {
      (void) F_08048914();
      break;
    }
    if(LOAD(reg_var3)  ==  0) {
      (void) F_08048914();
      break;
    }
    reg_var3 = reg_var1;
    reg_var2++;
    reg_var1 += 4;
  }
  if(reg_var2  <=  9) {
    asm("l.jmp eax");
  }
  reg_ab = ARG_0;
  (void) F_08048934();
  (void) F_08048994();
  if(LOAD(reg_ab + 24)  <=  LOAD(reg_ab + 20)) {
    (void) F_080488f4();
  } else {
    (void) STORE(LOAD(reg_ab + 20), 10);
    (void) STORE(reg_ab + 20, LOAD(reg_ab + 20) + 1);
  }
  reg_am = ARG_0;
  (void) F_08048904();
  if(LOAD(reg_am + 24)  <=  LOAD(reg_am + 20)) {
    (void) F_080488f4();
  } else {
    (void) STORE(LOAD(reg_am + 20), 10);
    (void) STORE(reg_am + 20, LOAD(reg_am + 20) + 1);
  }
  (void) F_08048934();
  reg_result = F_08048904();
  return reg_result;
}

// addr = 08049ccd.0
// signature= func(F_08049ccd, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049ccd(???)
{
  (void) F_08048d64();
  reg_result = F_08049ac0();
  return reg_result;
}

/* The decompilation of 0x08049d10 / F_08049d10 failed: java.lang.RuntimeException: F_08049d10 has no exit blocks */

// addr = 08049dc5.0
// signature= func(F_08049dc5, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049dc5(???)
{
  (void) STORE(local + 144, InitValue(initial_value_of_ebx));
  (void) STORE(local + 148, InitValue(initial_value_of_ebp));
  (void) F_08048d64();
  (void) STORE(local + 140, ARG_0);
  reg_result = F_08048974();
  if(reg_result  ==  0) {
    (void) F_08049d10();
    (void) STORE(local + 124, InitValue(initial_value_of_ebx) + 7038);
    (void) STORE(local + 128, InitValue(initial_value_of_esi));
    (void) STORE(local + 132, InitValue(initial_value_of_edi));
    (void) STORE(local + 136, local + 148);
    reg_ap = F_08048d64();
    reg_ah = LOAD(InitStackPointer);
    reg_ao = LOAD(local + 148);
    if(LOAD(local + 148)  >  reg_ap / LOAD(InitStackPointer)) {
      reg_var3 = 0;
    } else {
      (void) STORE(local + 112, LOAD(local + 144));
      (void) STORE(local + 116, reg_ah * reg_ao);
      reg_result = F_080489d4();
      if(reg_result  ==  0) {
        reg_var3 = 0;
      } else {
        reg_var3 = 1;
      }
    }
  } else {
    reg_var3 = 1;
  }
  if(reg_var3  ==  0) {
    (void) F_08049d10();
    (void) STORE(local + 104, InitValue(initial_value_of_ebx) + 14019);
    (void) STORE(local + 108, local + 136);
    (void) F_08048d64();
    (void) STORE(local + 84, LOAD(local + 116));
    (void) STORE(local + 88, LOAD(local + 120));
    reg_result = F_080489d4();
    if(reg_result  ==  0) {
      reg_aa = LOAD(local + 144);
      reg_an = LOAD(InitStackPointer);
      (void) F_08049d10();
      (void) STORE(local + 68, InitValue(initial_value_of_ebx) + 20935);
      (void) STORE(local + 72, reg_aa);
      (void) STORE(local + 76, reg_an);
      (void) STORE(local + 80, local + 108);
      (void) F_08048d64();
      reg_be = LOAD(local + 96);
      if(LOAD(local + 88)  !=  0 && LOAD(LOAD(local + 92))  >  0x7fffffff / LOAD(local + 96)) {
        (void) F_08049d10();
        (void) STORE(local + 48, InitValue(initial_value_of_ebx) + 27795);
        (void) STORE(local + 52, local + 80);
        (void) F_08048d64();
        reg_ak = LOAD(local + 60);
        if(LOAD(local + 60)  !=  0 && LOAD(LOAD(local + 64))  <  0) {
          (void) F_08049d10();
          (void) STORE(local + 16, InitValue(initial_value_of_ebx) + 34548);
          (void) STORE(local + 20, reg_be);
          (void) STORE(local + 24, local + 52);
          (void) F_08048d64();
          reg_bd = LOAD(local + 32);
          (void) STORE(local, LOAD(local + 32));
          reg_av = F_08049dc5();
          (void) STORE(local + 4, 0);
          (void) STORE(local + 8, reg_bd);
          (void) STORE(local, reg_av);
          reg_result = F_08048a74();
        } else {
          if(LOAD(local + 60)  ==  0) {
            reg_var2 = LOAD(LOAD(local + 64));
            if(reg_var2  ==  0) {
              reg_var2 = reg_var2 & 0xffffff00 | 64;
            }
          } else {
            reg_var2 = LOAD(LOAD(local + 64)) * 2;
          }
          (void) STORE(LOAD(local + 64), reg_var2);
          (void) STORE(local + 28, reg_ak);
          (void) STORE(local + 32, reg_var2);
          reg_result = F_08049e3f();
        }
      } else {
        if(LOAD(local + 88)  ==  0) {
          reg_var1 = LOAD(LOAD(local + 92));
          if(reg_var1  ==  0) {
            reg_var1 = 64 / LOAD(local + 96) + WIDEN(BIT_TO_INT(64 / LOAD(local + 96)  ==  0));
          }
        } else {
          reg_var1 = LOAD(LOAD(local + 92)) * 2;
        }
        reg_am = LOAD(local + 96);
        (void) STORE(LOAD(local + 92), reg_var1);
        (void) STORE(local + 56, LOAD(local + 88));
        (void) STORE(local + 60, reg_am * reg_var1);
        reg_result = F_08049e3f();
      }
    }
  }
  return reg_result;
}

// addr = 08049e3f.0
// signature= func(F_08049e3f, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049e3f(???)
{
  (void) STORE(local + 104, InitValue(initial_value_of_ebx));
  (void) STORE(local + 108, InitValue(initial_value_of_ebp));
  (void) F_08048d64();
  (void) STORE(local + 84, ARG_0);
  (void) STORE(local + 88, ARG_1);
  reg_result = F_080489d4();
  if(reg_result  ==  0) {
    (void) F_08049d10();
    (void) STORE(local + 68, InitValue(initial_value_of_ebx) + 6916);
    (void) STORE(local + 72, InitValue(initial_value_of_esi));
    (void) STORE(local + 76, InitValue(initial_value_of_edi));
    (void) STORE(local + 80, local + 108);
    (void) F_08048d64();
    reg_aq = LOAD(local + 96);
    if(LOAD(local + 88)  !=  0 && LOAD(LOAD(local + 92))  >  0x7fffffff / LOAD(local + 96)) {
      (void) F_08049d10();
      (void) STORE(local + 48, InitValue(initial_value_of_ebx) + 13776);
      (void) STORE(local + 52, local + 80);
      (void) F_08048d64();
      reg_ap = LOAD(local + 60);
      if(LOAD(local + 60)  !=  0 && LOAD(LOAD(local + 64))  <  0) {
        (void) F_08049d10();
        (void) STORE(local + 16, InitValue(initial_value_of_ebx) + 20529);
        (void) STORE(local + 20, reg_aq);
        (void) STORE(local + 24, local + 52);
        (void) F_08048d64();
        reg_ar = LOAD(local + 32);
        (void) STORE(local, LOAD(local + 32));
        reg_ah = F_08049dc5();
        (void) STORE(local + 4, 0);
        (void) STORE(local + 8, reg_ar);
        (void) STORE(local, reg_ah);
        reg_result = F_08048a74();
      } else {
        if(LOAD(local + 60)  ==  0) {
          reg_var2 = LOAD(LOAD(local + 64));
          if(reg_var2  ==  0) {
            reg_var2 = reg_var2 & 0xffffff00 | 64;
          }
        } else {
          reg_var2 = LOAD(LOAD(local + 64)) * 2;
        }
        (void) STORE(LOAD(local + 64), reg_var2);
        (void) STORE(local + 28, reg_ap);
        (void) STORE(local + 32, reg_var2);
        reg_result = F_08049e3f();
      }
    } else {
      if(LOAD(local + 88)  ==  0) {
        reg_var1 = LOAD(LOAD(local + 92));
        if(reg_var1  ==  0) {
          reg_var1 = 64 / LOAD(local + 96) + WIDEN(BIT_TO_INT(64 / LOAD(local + 96)  ==  0));
        }
      } else {
        reg_var1 = LOAD(LOAD(local + 92)) * 2;
      }
      reg_ao = LOAD(local + 96);
      (void) STORE(LOAD(local + 92), reg_var1);
      (void) STORE(local + 56, LOAD(local + 88));
      (void) STORE(local + 60, reg_ao * reg_var1);
      reg_result = F_08049e3f();
    }
  }
  return reg_result;
}

// addr = 08049fe0.0
// signature= func(F_08049fe0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049fe0(???)
{
  (void) F_08048d64();
  reg_result = ARG_0;
  if(reg_result  !=  0) {
    reg_result = F_08048a64();
  }
  return reg_result;
}

// addr = 0804a016.0
// signature= func(F_0804a016, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a016(???)
{
  reg_ag = LOAD(InitStackPointer);
  (void) F_080488bc();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_ag + 6166);
  if(reg_var1  <  reg_result) {
    do {
      reg_ac = LOAD(InitStackPointer);
      reg_result = intern_redirectCall(LOAD(LOAD(InitStackPointer) + reg_var1 * 4 + 6166));
      reg_var1++;
    } while(reg_var1  <  (LOAD(InitValue(initial_value_of_ebp) + -16) + reg_ac * -1 + -6166) / 4);
  }
  return reg_result;
}

// addr = 0804a067.0
// signature= func(F_0804a067, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a067(???)
{
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(LOAD(InitStackPointer) + reg_var1 * 4 + 6085));
    reg_var1--;
  }
  reg_result = F_0804a0f4();
  return reg_result;
}

// addr = 0804a0a0.0
// signature= func(F_0804a0a0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a0a0(???)
{
  (void) F_0804a0a9();
  reg_result = F_08048954();
  return reg_result;
}

// addr = 0804a0a9.0
// signature= func(F_0804a0a9, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a0a9(???)
{
  reg_var1 = 0;
  if(LOAD(LOAD(InitStackPointer) + 6283)  !=  0) {
    reg_var1 = LOAD(LOAD(LOAD(InitStackPointer) + 6283));
  }
  (void) STORE(InitStackPointer, reg_var1);
  reg_result = F_08048954();
  return reg_result;
}

// addr = 0804a0d0.0
// signature= func(F_0804a0d0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a0d0(???)
{
  reg_var1 = 134527020;
  reg_var2 = g_0x0804b82c;
  while(reg_var2  !=  -1) {
    reg_var1 += -4;
    (void) intern_redirectCall(reg_var2);
    reg_var2 = LOAD(reg_var1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 0804a0f4.0
// signature= func(F_0804a0f4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a0f4(???)
{
  (void) F_0804a0fd();
  reg_result = F_08048b08();
  return reg_result;
}

// addr = 0804a0fd.0
// signature= func(F_0804a0fd, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a0fd(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = F_08048b08();
  return reg_result;
}


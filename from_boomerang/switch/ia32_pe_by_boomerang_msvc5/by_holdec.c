// Decompiled by holdec 1.1 (2012-03-24)

// addr = 00401000.0
// signature= func(F_00401000, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401000(???)
{
  (void) F_004010a0();
  return 0;
}

// addr = 004010a0.0
// signature= func(F_004010a0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004010a0(???)
{
  (void) F_00401230();
  reg_result = F_00401330();
  (void) F_004012d0();
  return reg_result;
}

// addr = 004010e0.0
// signature= func(F_004010e0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004010e0(???)
{
  (void) STORE(local + 44, 4205752);
  (void) STORE(local + 48, 4214784);
  (void) STORE(local + 52, -1);
  (void) STORE(local + 56, InitValue(initial_value_of_ebp));
  reg_aa = g_0x00000000;
  (void) STORE(local + 40, g_0x00000000);
  (void) STORE(&g_0x00000000, local + 40);
  (void) STORE(local + 12, InitValue(initial_value_of_edi));
  (void) STORE(local + 16, InitValue(initial_value_of_esi));
  (void) STORE(local + 20, InitValue(initial_value_of_ebx));
  (void) STORE(local + 32, local + 12);
  reg_ac = intern_redirectCall(g_0x0040a0b8);
  (void) STORE(&g_0x0040892c, WIDEN(NARROW(reg_aa / 256)));
  (void) STORE(&g_0x00408928, reg_ac & 0xff);
  (void) STORE(&g_0x00408924, (reg_ac & 0xff) * 256 + WIDEN(NARROW(reg_aa / 256)));
  (void) STORE(&g_0x00408920, reg_ac / 0x10000);
  reg_ae = F_00402b80();
  if(reg_ae  ==  0) {
    (void) STORE(local + 8, 28);
    (void) F_00401200();
  }
  (void) STORE(local + 52, 0);
  (void) F_00402980();
  (void) F_00402970();
  reg_ah = intern_redirectCall(g_0x0040a0f8);
  (void) STORE(&g_0x00409d04, reg_ah);
  reg_ad = F_00402540();
  (void) STORE(&g_0x004088f8, reg_ad);
  if(reg_ad  ==  0 || g_0x00409d04  ==  0) {
    (void) STORE(local + 8, -1);
    (void) F_00401f00();
  }
  (void) F_00402290();
  (void) F_004021a0();
  (void) F_00401ed0();
  reg_ag = g_0x0040893c;
  (void) STORE(&g_0x00408940, g_0x0040893c);
  (void) STORE(local + 4, g_0x00408934);
  (void) STORE(local + 8, reg_ag);
  (void) STORE(local, g_0x00408930);
  reg_af = F_00401000();
  (void) STORE(local + 28, reg_af);
  (void) STORE(local + 8, reg_af);
  reg_result = F_00401f00();
  (void) STORE(local + 52, -1);
  (void) STORE(&g_0x00000000, LOAD(local + 40));
  return reg_result;
}

// addr = 00401200.0
// signature= func(F_00401200, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401200(???)
{
  if(g_0x00408900  !=  2) {
    (void) F_00402d90();
  }
  (void) F_00402dd0();
  reg_result = intern_redirectCall(g_0x00406068);
  return reg_result;
}

// addr = 00401230.0
// signature= func(F_00401230, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401230(???)
{
  reg_ap = ARG_0;
  reg_ar = F_00403060();
  if(reg_ar  ==  0 || reg_ap  !=  4219032 && reg_ap  !=  4219064) {
    reg_var2 = 1;
  } else {
    if(reg_ap  ==  4219032) {
      reg_var1 = 0;
    } else {
      reg_var1 = 1;
    }
    reg_ab = ARG_0;
    (void) STORE(&g_0x00408910, g_0x00408910 + 1);
    if((LOAD(reg_ab + 12) & 268)  ==  0 && LOAD(reg_var1 * 4 + 4229384)  ==  0) {
      reg_ao = F_00402fb0();
      (void) STORE(reg_var1 * 4 + 4229384, reg_ao);
      if(reg_ao  ==  0) {
        reg_var2 = 1;
      } else {
        reg_var2 = 0;
      }
    } else {
      if((LOAD(reg_ab + 12) & 268)  ==  0) {
        reg_var2 = 0;
      } else {
        reg_var2 = 1;
      }
    }
  }
  if(reg_var2  ==  0) {
    reg_aq = LOAD(reg_var1 * 4 + 4229384);
    reg_result = 1;
    (void) STORE(reg_ab + 12, LOAD(reg_ab + 12) | 4354);
    (void) STORE(reg_ab + 24, 0x1000);
    (void) STORE(reg_ab + 4, 0x1000);
    (void) STORE(reg_ab + 8, reg_aq);
    (void) STORE(reg_ab, reg_aq);
  } else {
    reg_result = 0;
  }
  return reg_result;
}

// addr = 004012d0.0
// signature= func(F_004012d0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004012d0(???)
{
  if(ARG_0  ==  0) {
    reg_result = ARG_1;
    if((NARROW(LOAD(reg_result + 12) / 256) & 16)  !=  0) {
      reg_result = F_004030e0();
    }
  } else {
    reg_af = ARG_1;
    reg_result = LOAD(ARG_1 + 12);
    if((NARROW(reg_result / 256) & 16)  !=  0) {
      (void) F_004030e0();
      reg_result = LOAD(reg_af + 12) & 0xffff00ff | WIDEN(NARROW(LOAD(reg_af + 12) / 256) & 238) * 256;
      (void) STORE(reg_af + 12, reg_result);
      (void) STORE(reg_af + 24, 0);
      (void) STORE(reg_af + 8, 0);
      (void) STORE(reg_af, 0);
    }
  }
  return reg_result;
}

/* The decompilation of 0x00401330 / F_00401330 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L6 in reg_zb2 = LOAD(ADD(reg_a1, SEGMENT2ADDR(reg_pp5), 4214768)): The current setter is reg_zj1 while [reg_pp5] was found. Related expressions are [reg_pp6, reg_zj3, reg_pp5, reg_zj0, reg_zj1] */

// addr = 00401cc0.0
// signature= func(F_00401cc0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401cc0(???)
{
  reg_ah = ARG_1;
  reg_ae = LOAD(ARG_1 + 4);
  (void) STORE(ARG_1 + 4, LOAD(ARG_1 + 4) + -1);
  if(BIT_TEST(31, reg_ae + -1)) {
    reg_var1 = F_00403350();
  } else {
    reg_var1 = ARG_0 & 0xff;
    (void) STORE(LOAD(reg_ah), NARROW(ARG_0));
    (void) STORE(reg_ah, LOAD(reg_ah) + 1);
  }
  if(reg_var1  ==  -1) {
    reg_result = reg_var1;
    (void) STORE(ARG_2, reg_var1);
  } else {
    reg_result = ARG_2;
    (void) STORE(reg_result, LOAD(reg_result) + 1);
  }
  return reg_result;
}

/* The decompilation of 0x00401d10 / F_00401d10 failed: java.lang.RuntimeException: java.lang.RuntimeException: Failed to remove reg_var1 from ADD(reg_result, -1) */

/* The decompilation of 0x00401d50 / F_00401d50 failed: java.lang.RuntimeException: java.lang.RuntimeException: Failed to remove reg_var1 from ADD(reg_result, -1) */

// addr = 00401d90.0
// signature= func(F_00401d90, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401d90(???)
{
  reg_aa = LOAD(ARG_0);
  (void) STORE(ARG_0, LOAD(ARG_0) + 4);
  return LOAD(reg_aa);
}

// addr = 00401db0.0
// signature= func(F_00401db0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401db0(???)
{
  reg_aa = LOAD(ARG_0);
  (void) STORE(ARG_0, LOAD(ARG_0) + 8);
  return LOAD(reg_aa);
}

// addr = 00401dd0.0
// signature= func(F_00401dd0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401dd0(???)
{
  reg_aa = LOAD(ARG_0);
  (void) STORE(ARG_0, LOAD(ARG_0) + 4);
  return reg_aa + 4 & 0xffff0000 | WIDEN(LOAD(reg_aa));
}

// addr = 00401ed0.0
// signature= func(F_00401ed0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401ed0(???)
{
  if(g_0x00408cec  !=  0) {
    (void) intern_redirectCall(g_0x00408cec);
  }
  (void) F_00401ff0();
  reg_result = F_00401ff0();
  return reg_result;
}

// addr = 00401f00.0
// signature= func(F_00401f00, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401f00(???)
{
  reg_result = F_00401f40();
  return reg_result;
}

// addr = 00401f20.0
// signature= func(F_00401f20, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401f20(???)
{
  reg_result = F_00401f40();
  return reg_result;
}

/* The decompilation of 0x00401f40 / F_00401f40 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L7 in if(CMP(MARKER_UNSIGNED(reg_pp5), <=, MARKER_UNSIGNED(reg_e4))) goto L5: The current setter is reg_c3 while [reg_pp5] was found. Related expressions are [reg_pp5, reg_c1, reg_c3, reg_c2] */

// addr = 00401ff0.0
// signature= func(F_00401ff0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401ff0(???)
{
  reg_result = InitValue(initial_value_of_eax);
/* The decompilation of 0x00401ff0 / F_00401ff0 failed: java.lang.AssertionError */

// addr = 00402010.0
// signature= func(F_00402010, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402010(???)
{
  reg_bb = F_00402150();
  if(reg_bb  ==  0 || LOAD(reg_bb + 8)  ==  0) {
    reg_result = intern_redirectCall(g_0x0040a0c8);
  } else {
    reg_aq = LOAD(reg_bb + 8);
    if(LOAD(reg_bb + 8)  !=  5 && LOAD(reg_bb + 8)  !=  1) {
      reg_af = g_0x00408960;
      (void) STORE(&g_0x00408960, ARG_1);
      if(LOAD(reg_bb + 4)  ==  8) {
        if(g_0x00406370 + g_0x00406374  >  g_0x00406370) {
          reg_var1 = g_0x00406374;
          reg_var2 = g_0x00406370 * 12 + 4219648;
          while(1) {
            (void) STORE(reg_var2, 0);
            reg_var2 += 12;
            reg_ag = reg_var1 + -1;
            reg_var1--;
            if(reg_ag  ==  0) {
              break;
            }
          }
        }
        reg_av = g_0x0040637c;
        if(LOAD(reg_bb)  ==  -1073741682 || LOAD(reg_bb)  ==  -1073741680 || LOAD(reg_bb)  ==  -1073741679 || LOAD(reg_bb)  ==  -1073741677 || LOAD(reg_bb)  ==  -1073741683 || LOAD(reg_bb)  ==  -1073741681 || LOAD(reg_bb)  ==  -1073741678) {
          if(LOAD(reg_bb)  ==  -1073741682) {
            reg_var3 = 131;
          } else if(LOAD(reg_bb)  ==  -1073741680) {
            reg_var3 = 129;
          } else if(LOAD(reg_bb)  ==  -1073741679) {
            reg_var3 = 132;
          } else if(LOAD(reg_bb)  ==  -1073741677) {
            reg_var3 = 133;
          } else if(LOAD(reg_bb)  ==  -1073741683) {
            reg_var3 = 130;
          } else if(LOAD(reg_bb)  ==  -1073741681) {
            reg_var3 = 134;
          } else {
            reg_var3 = 138;
          }
          (void) STORE(&g_0x0040637c, reg_var3);
        }
        reg_ar = intern_redirectCall(reg_aq);
        reg_result = reg_ar | -1;
        (void) STORE(&g_0x0040637c, reg_av);
        (void) STORE(&g_0x00408960, reg_af);
      } else {
        (void) STORE(reg_bb + 8, 0);
        reg_ba = intern_redirectCall(reg_aq);
        reg_result = reg_ba | -1;
        (void) STORE(&g_0x00408960, reg_af);
      }
    } else {
      if(LOAD(reg_bb + 8)  ==  5) {
        reg_result = 1;
        (void) STORE(reg_bb + 8, 0);
      } else {
        reg_result = reg_bb | -1;
      }
    }
  }
  return reg_result;
}

/* The decompilation of 0x00402150 / F_00402150 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L3 in if(CMP(reg_d0, !=, LOAD(ADD(reg_a1, SEGMENT2ADDR(reg_pp3))))) goto L2: The current setter is reg_a2 while [reg_a1] was found. Related expressions are [reg_a2, reg_pp7, reg_a0, reg_a1, reg_pp2] */

// addr = 004021a0.0
// signature= func(F_004021a0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004021a0(???)
{
  reg_var1 = InitValue(initial_value_of_ecx);
  reg_var2 = g_0x004088f8;
  reg_ao = LOAD(reg_var2);
  if(reg_ao  !=  0) {
    do {
      ASSERT UNDEF  !=  0;
      reg_bg = intern_indexOf(reg_var2, 0, reg_var1 | -1);
      reg_var1 = EXTRACT(reg_bg, pos);
      reg_ah = LOAD(reg_var1 + reg_var2 + 1);
      reg_var2 += reg_var1 + 1;
    } while(reg_ah  !=  0);
  }
  reg_aq = F_00402fb0();
  reg_var5 = reg_aq;
  reg_var6 = reg_var5;
  (void) STORE(&g_0x0040893c, reg_var5);
  if(reg_var5  ==  0) {
    (void) F_00401200();
  }
/* The decompilation of 0x004021a0 / F_004021a0 failed: java.lang.AssertionError */

// addr = 00402290.0
// signature= func(F_00402290, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402290(???)
{
  (void) STORE(local + 20, 0);
  (void) STORE(local + 24, 4229480);
  (void) STORE(local + 28, 260);
  (void) STORE(local + 32, InitValue(initial_value_of_edi));
  (void) STORE(local + 36, InitValue(initial_value_of_esi));
  (void) intern_redirectCall(g_0x0040a0cc);
  reg_var1 = g_0x00409d04;
  (void) STORE(&g_0x0040894c, 4229480);
  if(LOAD(reg_var1)  ==  0) {
    reg_var1 = 4229480;
  }
  (void) STORE(local + 12, local + 28);
  (void) STORE(local + 16, local + 32);
  (void) STORE(local + 4, 0);
  (void) STORE(local + 8, 0);
  (void) STORE(local, reg_var1);
  (void) F_00402330();
  (void) STORE(local + 16, LOAD(local + 32) + LOAD(local + 28) * 4);
  reg_ac = F_00402fb0();
  if(reg_ac  ==  0) {
    (void) STORE(local + 16, 8);
    (void) F_00401200();
  }
  reg_ab = LOAD(local + 28);
  (void) STORE(local + 12, local + 28);
  (void) STORE(local + 16, local + 32);
  (void) STORE(local + 4, reg_ac);
  (void) STORE(local + 8, reg_ab * 4 + reg_ac);
  (void) STORE(local, reg_var1);
  (void) F_00402330();
  reg_af = LOAD(local + 28);
  (void) STORE(&g_0x00408934, reg_ac);
  (void) STORE(&g_0x00408930, reg_af + -1);
  return reg_af + -1;
}

/* The decompilation of 0x00402330 / F_00402330 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L6 in if(CMP(reg_pp6, ==, 0)) goto L8: The current setter is reg_e2 while [reg_pp6] was found. Related expressions are [reg_pp6, reg_pp85, reg_e11, reg_e12, reg_e10, reg_e15, reg_e16, reg_e13, reg_pp23, reg_e14, reg_e1, reg_e0, reg_e7, reg_e6, reg_e9, reg_e8, reg_e3, reg_e2, reg_e5, reg_e4, reg_pp74, reg_pp98, reg_e20, reg_e21, reg_pp52, reg_pp18, reg_pp34, reg_pp91, reg_pp38, reg_e18, reg_e17, reg_e19, reg_pp10] */

/* The decompilation of 0x00402540 / F_00402540 failed: java.lang.RuntimeException: java.lang.AssertionError: Too many inner loops in RegionConstructor */

/* The decompilation of 0x004026a0 / F_004026a0 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L28 in reg_pp41 = AND(reg_c8, 0xff): The current setter is reg_c9 while [reg_c8] was found. Related expressions are [reg_c8, reg_c9, reg_pp33, reg_c10, reg_c7] */

// addr = 00402890.0
// signature= func(F_00402890, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402890(???)
{
  reg_ab = ARG_0;
  (void) STORE(&g_0x00408b94, 0);
  if(reg_ab  ==  -2) {
    asm("l.jmp ds:[0x40a0ec]");
    (void) STORE(&g_0x00408b94, 1);
  }
  if(reg_ab  ==  -3) {
    asm("l.jmp ds:[0x40a0e8]");
    (void) STORE(&g_0x00408b94, 1);
  }
  reg_result = reg_ab;
  if(reg_ab  ==  -4) {
    reg_result = g_0x00408bb8;
    (void) STORE(&g_0x00408b94, 1);
  }
  return reg_result;
}

// addr = 004028e0.0
// signature= func(F_004028e0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004028e0(???)
{
  if(ARG_0  <=  950) {
    asm("l.jmp ds:[0x402918+ecx*4]");
  }
  return 0;
}

// addr = 00402940.0
// signature= func(F_00402940, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402940(???)
{
  ASSERT UNDEF  !=  0;
  (void) intern_memfillL(4229752, 0, 64);
  ASSERT UNDEF  !=  0;
  (void) STORE(&g_0x00408b78, 0);
  (void) STORE(&g_0x00408b7c, 0);
  (void) STORE(&g_0x00408b80, 0);
  (void) STORE(&g_0x00408b88, 0);
  (void) STORE(&g_0x00408b8c, 0);
  (void) STORE(&g_0x00408b90, 0);
  return 0;
}

// addr = 00402970.0
// signature= func(F_00402970, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402970(???)
{
  reg_result = F_004026a0();
  return reg_result;
}

/* The decompilation of 0x00402980 / F_00402980 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L17 in reg_zb9 = LOAD(ADD(reg_pp27, SEGMENT2ADDR(reg_pp26))): The current setter is reg_f2 while [reg_pp27] was found. Related expressions are [reg_f2, reg_pp27, reg_f1, reg_f4, reg_pp35, reg_f3] */

// addr = 00402b80.0
// signature= func(F_00402b80, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402b80(???)
{
  reg_result = intern_redirectCall(g_0x0040a104);
  (void) STORE(&g_0x00408bd4, reg_result);
  if(reg_result  !=  0) {
    reg_ad = F_004035e0();
    if(reg_ad  ==  0) {
      (void) intern_redirectCall(g_0x0040a100);
      reg_result = 0;
    } else {
      reg_result = 1;
    }
  }
  return reg_result;
}

// addr = 00402bc0.0
// signature= func(F_00402bc0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402bc0(???)
{
  (void) STORE(local + 12, 0);
  (void) STORE(local + 16, local + 32);
  (void) STORE(local + 20, InitValue(initial_value_of_edi));
  (void) STORE(local + 24, InitValue(initial_value_of_esi));
  (void) STORE(local + 28, InitValue(initial_value_of_ebx));
  (void) STORE(local + 32, InitValue(initial_value_of_ebp));
  (void) STORE(local + 4, 4205528);
  (void) STORE(local + 8, 0);
  (void) STORE(local, ARG_0);
  reg_result = F_00404560();
  return reg_result;
}

/* The decompilation of 0x00402c02 / F_00402c02 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L3 in (void) STORE(ADD(reg_pp5, 8), LOAD(ADD(MULT(reg_ai0, 12), reg_am0))): The current setter is reg_var12 while [reg_pp5] was found. Related expressions are [reg_var12, reg_var13, reg_pp6, reg_pp5, reg_var10] */

// addr = 00402c96.0
// signature= func(F_00402c96, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402c96(???)
{
  (void) STORE(&g_0x0040648c, LOAD(InitValue(initial_value_of_ebp) + 8));
  (void) STORE(&g_0x00406488, InitValue(initial_value_of_eax));
  (void) STORE(&g_0x00406490, InitValue(initial_value_of_ebp));
  return InitValue(initial_value_of_eax);
}

// addr = 00402d90.0
// signature= func(F_00402d90, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402d90(???)
{
  if(g_0x00408900  ==  1) {
    reg_var1 = 1;
  } else {
    reg_result = g_0x00408900;
    if(reg_result  !=  0 || g_0x0040606c  !=  1) {
      reg_var1 = 0;
    } else {
      reg_var1 = 1;
    }
  }
  if(reg_var1  !=  0) {
    (void) F_00402dd0();
    if(g_0x00408b98  !=  0) {
      (void) intern_redirectCall(g_0x00408b98);
    }
    reg_result = F_00402dd0();
  }
  return reg_result;
}

/* The decompilation of 0x00402dd0 / F_00402dd0 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L1 in if(CMP(reg_c0, ==, LOAD(ADD(reg_pp3, SEGMENT2ADDR(reg_zj11))))) goto L3: The current setter is reg_a1 while [reg_pp3] was found. Related expressions are [reg_a2, reg_a4, reg_a0, reg_a16, reg_a1, reg_pp3, reg_a11, reg_pp26] */

// addr = 00402fb0.0
// signature= func(F_00402fb0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402fb0(???)
{
  reg_result = F_00402fd0();
  return reg_result;
}

/* The decompilation of 0x00402fd0 / F_00402fd0 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L9 in (void) STORE(reg_h5, reg_pp7): The current setter is reg_e5 while [reg_pp7] was found. Related expressions are [reg_e1, reg_pp7, reg_pp1, reg_e2, reg_e5] */

// addr = 00403020.0
// signature= func(F_00403020, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403020(???)
{
  if(g_0x00408774  <  (ARG_0 + 15 & -16)) {
    reg_var1 = 0;
  } else {
    reg_result = F_00403940();
    if(reg_result  ==  0) {
      reg_var1 = 0;
    } else {
      reg_var1 = 1;
    }
  }
  if(reg_var1  ==  0) {
    reg_result = intern_redirectCall(g_0x0040a114);
  }
  return reg_result;
}

// addr = 00403060.0
// signature= func(F_00403060, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403060(???)
{
  return g_0x00408ce0  >  ARG_0 ? WIDEN(LOAD(LOAD(ARG_0 / 32 * 4 + 4230112) + (ARG_0 & 31) * 8 + 4)) & 64 : 0;
}

// addr = 00403090.0
// signature= func(F_00403090, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403090(???)
{
  reg_ag = ARG_0;
  if(ARG_0  ==  0) {
    reg_result = F_00403160();
  } else {
    reg_ae = F_004030e0();
    if(reg_ae  !=  0) {
      reg_result = reg_ae | -1;
    } else if((NARROW(LOAD(reg_ag + 12) / 256) & 64)  ==  0) {
      reg_result = 0;
    } else {
      (void) F_00403eb0();
      reg_result = BIT_TO_INT(BIT_TEST(31, BIT_TO_INT(0) * -1)) * -1;
    }
  }
  return reg_result;
}

// addr = 004030e0.0
// signature= func(F_004030e0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004030e0(???)
{
  reg_as = ARG_0;
  reg_var1 = 0;
  if((NARROW(LOAD(ARG_0 + 12)) & 3)  !=  2 || (LOAD(ARG_0 + 12) & 264)  ==  0) {
    reg_var2 = 1;
  } else {
    reg_ar = ARG_0;
    reg_ae = LOAD(ARG_0 + 8);
    reg_ao = LOAD(ARG_0);
    if(LOAD(ARG_0) + LOAD(ARG_0 + 8) * -1  <=  0) {
      reg_var2 = 1;
    } else {
      reg_ap = F_00403f10();
      reg_aq = LOAD(reg_as + 12);
      if(reg_ap  ==  reg_ae * -1 + reg_ao && (NARROW(LOAD(reg_ar + 12)) & 128)  !=  0) {
        reg_var2 = 0;
      } else {
        if(reg_ap  !=  reg_ae * -1 + reg_ao) {
          reg_var1 = reg_var1 | -1;
          (void) STORE(reg_ar + 12, LOAD(reg_ar + 12) & 0xffffff00 | WIDEN(NARROW(LOAD(reg_ar + 12)) | 32));
        }
        reg_var2 = 1;
      }
    }
  }
  if(reg_var2  ==  0) {
    reg_result = reg_var1;
    (void) STORE(reg_ar + 12, reg_aq & 0xffffff00 | WIDEN(NARROW(reg_aq) & 253));
    (void) STORE(reg_ar + 4, reg_var1);
    (void) STORE(reg_ar, LOAD(reg_ar + 8));
  } else {
    reg_af = ARG_0;
    reg_aj = LOAD(ARG_0 + 8);
    reg_result = reg_var1;
    (void) STORE(ARG_0 + 4, 0);
    (void) STORE(reg_af, reg_aj);
  }
  return reg_result;
}

// addr = 00403150.0
// signature= func(F_00403150, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403150(???)
{
  reg_result = F_00403160();
  return reg_result;
}

// addr = 00403160.0
// signature= func(F_00403160, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403160(???)
{
  reg_at = g_0x00409d00;
  reg_var2 = 0;
  reg_var3 = 0;
  reg_var1 = 0;
  (void) STORE(local + 12, InitValue(initial_value_of_ebp));
  (void) STORE(local + 16, InitValue(initial_value_of_ebx));
  (void) STORE(local + 4, InitValue(initial_value_of_edi));
  (void) STORE(local + 8, InitValue(initial_value_of_esi));
  if(reg_at  >  0) {
    do {
      reg_ab = LOAD(g_0x00408cf0 + reg_var1 * 4);
      if(LOAD(g_0x00408cf0 + reg_var1 * 4)  !=  0) {
        reg_as = LOAD(reg_ab + 12);
        if((NARROW(LOAD(reg_ab + 12)) & 131)  !=  0) {
          reg_aq = ARG_0;
          if(ARG_0  !=  1 && ARG_0  ==  0 && (NARROW(reg_as) & 2)  !=  0) {
            (void) STORE(local, reg_ab);
            reg_ar = F_00403090();
            if(reg_ar  ==  -1) {
              reg_var3 = reg_var3 | reg_ar;
            }
          } else {
            if(reg_aq  ==  1) {
              (void) STORE(local, reg_ab);
              reg_ad = F_00403090();
              if(reg_ad  !=  -1) {
                reg_var2++;
              }
            }
          }
        }
      }
      reg_var1++;
    } while(reg_var1  <  g_0x00409d00);
  }
  reg_result = reg_var2;
  if(ARG_0  !=  1) {
    reg_result = reg_var3;
  }
  return reg_result;
}

// addr = 004031e0.0
// signature= func(F_004031e0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004031e0(???)
{
  reg_result = ARG_0;
  if(g_0x00408ba8  !=  0 && reg_result  !=  0 || LOAD(&ARG_1)  >  0xff && reg_result  !=  0) {
    if(g_0x00408ba8  !=  0 && reg_result  !=  0) {
      (void) STORE(&ARG_0, 0);
      reg_result = intern_redirectCall(g_0x0040a0e0);
    }
    reg_result = reg_result | -1;
    (void) STORE(&g_0x00408914, 42);
  } else {
    if(LOAD(&ARG_1)  <  256 && g_0x00408ba8  ==  0 && reg_result  !=  0) {
      (void) STORE(reg_result, NARROW(LOAD(&ARG_1)));
      reg_result = 1;
    }
  }
  return reg_result;
}

/* The decompilation of 0x00403260 / F_00403260 failed: java.lang.RuntimeException: addEqualTrait; different primitive sizes: 

exp1=UNDEF class holdec.dq
  with size Bit
exp2=DUMMY class holdec.cx
  with size Int1 */

/* The decompilation of 0x004032d0 / F_004032d0 failed: java.lang.RuntimeException: addEqualTrait; different primitive sizes: 

exp1=UNDEF class holdec.dq
  with size Bit
exp2=DUMMY class holdec.cx
  with size Int1 */

// addr = 00403350.0
// signature= func(F_00403350, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403350(???)
{
  reg_aq = ARG_1;
  if((NARROW(LOAD(ARG_1 + 12)) & 130)  ==  0) {
    reg_var4 = 0;
  } else {
    reg_ap = LOAD(ARG_1 + 12);
    if((NARROW(LOAD(ARG_1 + 12)) & 64)  ==  0 && (NARROW(LOAD(ARG_1 + 12)) & 1)  !=  0) {
      (void) STORE(ARG_1 + 4, 0);
      if((NARROW(reg_ap) & 16)  ==  0) {
        reg_var4 = 0;
      } else {
        (void) STORE(reg_aq + 12, reg_ap & 0xffffff00 | WIDEN(NARROW(reg_ap) & 254));
        (void) STORE(reg_aq, LOAD(reg_aq + 8));
        reg_var4 = 1;
      }
    } else {
      if((NARROW(LOAD(ARG_1 + 12)) & 64)  ==  0) {
        reg_var4 = 1;
      } else {
        reg_var4 = 0;
      }
    }
  }
  if(reg_var4  ==  0) {
    reg_result = LOAD(reg_aq + 12) & 0xffffff00 | WIDEN(NARROW(LOAD(reg_aq + 12)) | 32) | -1;
    (void) STORE(ARG_1 + 12, LOAD(reg_aq + 12) & 0xffffff00 | WIDEN(NARROW(LOAD(reg_aq + 12)) | 32));
  } else {
    reg_ar = ARG_1;
    reg_ao = LOAD(ARG_1 + 12);
    (void) STORE(ARG_1 + 4, 0);
    (void) STORE(reg_ar + 12, reg_ao & 0xffffff00 | WIDEN(NARROW(reg_ao) & 239 | 2));
    if((reg_ao & 256 | WIDEN(NARROW(reg_ao) & 239 | 2) & 268)  ==  0 && reg_ar  ==  4219064 || (reg_ao & 256 | WIDEN(NARROW(reg_ao) & 239 | 2) & 268)  ==  0 && reg_ar  ==  4219032) {
      reg_bf = F_00403060();
      if(reg_bf  ==  0) {
        reg_var3 = 0;
      } else {
        reg_var3 = 1;
      }
    } else {
      if((reg_ao & 256 | WIDEN(NARROW(reg_ao) & 239 | 2) & 268)  ==  0) {
        reg_var3 = 0;
      } else {
        reg_var3 = 1;
      }
    }
    if(reg_var3  ==  0) {
      (void) F_00404200();
    }
    reg_an = ARG_1;
    if((LOAD(ARG_1 + 12) & 264)  ==  0) {
      reg_var1 = 1;
      reg_be = F_00403f10();
      reg_var2 = reg_be;
    } else {
      reg_var2 = 0;
      reg_ae = LOAD(ARG_1 + 24);
      reg_var1 = LOAD(ARG_1) + LOAD(ARG_1 + 8) * -1;
      (void) STORE(ARG_1, LOAD(ARG_1 + 8) + 1);
      (void) STORE(reg_an + 4, reg_ae + -1);
      if(reg_var1  >  0) {
        reg_am = F_00403f10();
        reg_var2 = reg_am;
        (void) STORE(LOAD(reg_an + 8), LOAD(&ARG_0));
      } else {
        if((LOAD((LOAD(ARG_1 + 16)  ==  -1 ? 4220024 : LOAD(LOAD(ARG_1 + 16) / 32 * 4 + 4230112) + (LOAD(ARG_1 + 16) & 31) * 8) + 4) & 32)  !=  0) {
          (void) F_00404140();
        }
        (void) STORE(LOAD(reg_an + 8), LOAD(&ARG_0));
      }
    }
    if(reg_var1  ==  reg_var2) {
      reg_result = ARG_0 & 0xff;
    } else {
      reg_result = LOAD(ARG_1 + 12) & 0xffffff00 | WIDEN(NARROW(LOAD(ARG_1 + 12)) | 32) | -1;
      (void) STORE(ARG_1 + 12, LOAD(ARG_1 + 12) & 0xffffff00 | WIDEN(NARROW(LOAD(ARG_1 + 12)) | 32));
    }
  }
  return reg_result;
}

/* The decompilation of 0x00403480 / F_00403480 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L13 in (void) STORE(reg_h9, reg_pp13): The current setter is reg_e11 while [reg_pp13] was found. Related expressions are [reg_e1, reg_pp8, reg_pp13, reg_e11, reg_pp2, reg_e5, reg_e4] */

// addr = 00403590.0
// signature= func(F_00403590, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403590(???)
{
  reg_result = InitValue(initial_value_of_eax);
  (void) STORE(local + 12, InitValue(initial_value_of_esi));
  (void) STORE(local + 16, InitValue(initial_value_of_ecx));
  reg_ag = ARG_0;
  if(ARG_0  !=  0) {
    (void) STORE(local + 4, local + 16);
    (void) STORE(local + 8, &ARG_0);
    (void) STORE(local, reg_ag);
    reg_ae = F_00403880();
    if(reg_ae  ==  0) {
      reg_ab = g_0x00408bd4;
      (void) STORE(local + 4, 0);
      (void) STORE(local + 8, reg_ag);
      (void) STORE(local, reg_ab);
      reg_result = intern_redirectCall(g_0x0040a118);
    } else {
      reg_ah = LOAD(local + 16);
      (void) STORE(local + 4, ARG_0);
      (void) STORE(local + 8, reg_ae);
      (void) STORE(local, reg_ah);
      reg_result = F_004038e0();
    }
  }
  return reg_result;
}

/* The decompilation of 0x004035e0 / F_004035e0 failed: java.lang.RuntimeException: java.lang.AssertionError: Too many inner loops in RegionConstructor */

// addr = 00403750.0
// signature= func(F_00403750, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403750(???)
{
  reg_ae = ARG_0;
  reg_result = intern_redirectCall(g_0x0040a108);
  if(reg_ae  ==  g_0x00408770) {
    (void) STORE(&g_0x00408770, LOAD(reg_ae + 4));
  }
  reg_ad = ARG_0;
  if(ARG_0  ==  4220752) {
    (void) STORE(&g_0x00406760, -1);
  } else {
    (void) STORE(LOAD(ARG_0 + 4), LOAD(ARG_0));
    (void) STORE(LOAD(reg_ad) + 4, LOAD(reg_ad + 4));
    reg_result = intern_redirectCall(g_0x0040a118);
  }
  return reg_result;
}

/* The decompilation of 0x004037b0 / F_004037b0 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L4 in reg_a1 = ADD(reg_a0, reg_pp8): The current setter is reg_b2 while [reg_pp8] was found. Related expressions are [reg_pp8, reg_pp13, reg_b2, reg_b1, reg_b3] */

// addr = 00403880.0
// signature= func(F_00403880, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403880(???)
{
  reg_var1 = 4220752;

// calls     [3, 11]
// called    [1]
// deep-calls     {1, 2, 3, 6, 7, 8, 10, 11, 12}
// depp-called    {0, 1, 2, 3, 9}
// modifiedAddresses  []
L2:
  reg_ag = ARG_0;
  if(LOAD(reg_var1 + 20)  <=  ARG_0) goto L3;
  goto L11;

// calls     [1, 10]
// called    [1, 2]
// deep-calls     {1, 2, 3, 6, 7, 8, 10, 11, 12}
// depp-called    {0, 1, 2, 3, 9}
// modifiedAddresses  []
L3:
  reg_var1 = LOAD(reg_var1);
  if(reg_var1  ==  4220752) goto L10;
  goto L1;

// calls     [8]
// called    [3]
// deep-calls     {8}
// depp-called    {0, 1, 2, 3, 9}
// modifiedAddresses  null
L10:
  reg_result = 0;
  goto L8;
  if((NARROW(ARG_0) & 15)  !=  0 || (ARG_0 & 4095)  <  256) {
    reg_result = 0;
  } else {
    reg_result = (reg_ag & -4096) + ((reg_ag & -4096) * -1 + reg_ag + 0xffffff00) / 16 + 8;
    (void) STORE(ARG_1, reg_var1);
    (void) STORE(ARG_2, reg_ag & -4096);
  }
}

// addr = 004038e0.0
// signature= func(F_004038e0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004038e0(???)
{
  reg_result = (LOAD(ARG_0 + 16) * -1 + ARG_1) / 0x1000 * 8 + ARG_0 + 24;
  reg_ae = ARG_2;
  (void) STORE(reg_result, LOAD(reg_result) + WIDEN(LOAD(ARG_2)));
  (void) STORE(reg_ae, 0);
  reg_af = LOAD(reg_result) + WIDEN(LOAD(ARG_2));
  (void) STORE(reg_result + 4, 241);
  if(reg_af  ==  240) {
    reg_result = g_0x00408bbc + 1;
    (void) STORE(&g_0x00408bbc, reg_result);
    if(reg_result  ==  32) {
      reg_result = F_004037b0();
    }
  }
  return reg_result;
}

/* The decompilation of 0x00403940 / F_00403940 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L3 in if(CMP(MARKER_SIGNED(reg_a2), <, MARKER_SIGNED(reg_pp5))) goto L7: The current setter is reg_b1 while [reg_pp5] was found. Related expressions are [reg_b8, reg_pp5, reg_b2, reg_b1, reg_b0, reg_pp59, reg_b6, reg_pp61, reg_b5, reg_b4, reg_pp16] */

/* The decompilation of 0x00403b80 / F_00403b80 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L22 in reg_c13 = ADD(reg_pp30, reg_pp32, SEGMENT2ADDR(reg_pp29)): The current setter is reg_d11 while [reg_pp30] was found. Related expressions are [reg_d13, reg_pp11, reg_d11, reg_d8, reg_d7, reg_pp21, reg_pp30, reg_d6, reg_d5] */

// addr = 00403d00.0
// signature= func(F_00403d00, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403d00(???)
{
  reg_ak = g_0x00408bc0;
  reg_var1 = 0;
  reg_var2 = local + 48;
  (void) STORE(local + 52, InitValue(initial_value_of_esi));
  (void) STORE(local + 56, InitValue(initial_value_of_ebx));
  (void) STORE(reg_var2, InitValue(initial_value_of_edi));
  if(reg_ak  ==  0) {
    (void) STORE(reg_var2 + -4, 4215716);
    reg_bb = intern_redirectCall(g_0x0040a124);
    if(reg_bb  ==  0) {
      reg_var4 = 1;
    } else {
      reg_ag = g_0x0040a120;
      (void) STORE(reg_var2 + -12, reg_bb);
      (void) STORE(reg_var2 + -8, 4215704);
      reg_ab = intern_redirectCall(reg_ag);
      (void) STORE(&g_0x00408bc0, reg_ab);
      if(reg_ab  ==  0) {
        reg_var4 = 1;
      } else {
        (void) STORE(reg_var2 + -16, 4215688);
        (void) STORE(reg_var2 + -20, reg_bb);
        reg_al = intern_redirectCall(reg_ag);
        (void) STORE(reg_var2 + -24, 4215668);
        reg_var2 += -28;
        (void) STORE(reg_var2, reg_bb);
        (void) STORE(&g_0x00408bc4, reg_al);
        reg_ai = intern_redirectCall(reg_ag);
        (void) STORE(&g_0x00408bc8, reg_ai);
        reg_var4 = 0;
      }
    }
  } else {
    reg_var4 = 0;
  }
  if(reg_var4  ==  0) {
    if(g_0x00408bc4  !=  0) {
      reg_ba = intern_redirectCall(g_0x00408bc4);
      reg_var1 = reg_ba;
    }
    reg_var3 = reg_var1;
    if(reg_var1  !=  0) {
      reg_bd = g_0x00408bc8;
      if(g_0x00408bc8  !=  0) {
        reg_var2 += -4;
        (void) STORE(reg_var2, reg_var3);
        reg_bc = intern_redirectCall(reg_bd);
        reg_var3 = reg_bc;
      }
    }
    reg_aj = LOAD(reg_var2 + 20);
    (void) STORE(reg_var2 + -12, LOAD(reg_var2 + 16));
    (void) STORE(reg_var2 + -16, reg_var3);
    (void) STORE(reg_var2 + -4, LOAD(reg_var2 + 24));
    (void) STORE(reg_var2 + -8, reg_aj);
    reg_result = intern_redirectCall(g_0x00408bc0);
  } else {
    reg_result = 0;
  }
  return reg_result;
}

/* The decompilation of 0x00403d90 / F_00403d90 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L12 in reg_pp17 = LOAD(ADD(reg_pp5, SEGMENT2ADDR(reg_pp2))): The current setter is reg_e1 while [reg_pp5] was found. Related expressions are [reg_e1, reg_e0, reg_pp28, reg_pp5, reg_pp11, reg_e2, reg_e5] */

// addr = 00403e90.0
// signature= func(F_00403e90, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403e90(???)
{
  if(g_0x00408bd0  ==  0) {
    reg_var1 = 1;
  } else {
    reg_aa = intern_redirectCall(g_0x00408bd0);
    if(reg_aa  ==  0) {
      reg_var1 = 1;
    } else {
      reg_var1 = 0;
    }
  }
  return reg_var1  ==  0 ? 1 : 0;
}

// addr = 00403eb0.0
// signature= func(F_00403eb0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403eb0(???)
{
  reg_var1 = ARG_0;
  if(reg_var1  >=  g_0x00408ce0 || (LOAD(LOAD(reg_var1 / 32 * 4 + 4230112) + (reg_var1 & 31) * 8 + 4) & 1)  ==  0) {
    reg_var2 = 0;
  } else {
    (void) F_00404380();
    reg_af = intern_redirectCall(g_0x0040a12c);
    reg_ae = reg_af  ==  0 ? intern_redirectCall(g_0x0040a128) : 0;
    reg_result = reg_ae;
    if(reg_ae  ==  0) {
      reg_var2 = 1;
    } else {
      reg_var1 = reg_result;
      (void) STORE(&g_0x00408918, reg_result);
      reg_var2 = 0;
    }
  }
  if(reg_var2  ==  0) {
    reg_result = reg_var1 | -1;
    (void) STORE(&g_0x00408914, 9);
  }
  return reg_result;
}

/* The decompilation of 0x00403f10 / F_00403f10 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L9 in reg_c4 = reg_pp5: The current setter is reg_f5 while [reg_pp5] was found. Related expressions are [reg_pp5, reg_f7, reg_f4, reg_pp19, reg_f6, reg_f5] */

// addr = 00404140.0
// signature= func(F_00404140, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00404140(???)
{
  if(g_0x00408ce0  <=  ARG_0) {
    reg_var1 = 1;
  } else {
    reg_am = ARG_0;
    if((LOAD(LOAD(ARG_0 / 32 * 4 + 4230112) + (ARG_0 & 31) * 8 + 4) & 1)  ==  0) {
      reg_var1 = 1;
    } else {
      reg_var1 = 0;
    }
  }
  if(reg_var1  ==  0) {
    reg_ag = F_00404380();
    if(reg_ag  ==  -1) {
      reg_result = reg_ag;
      (void) STORE(&g_0x00408914, 9);
    } else {
      reg_ao = intern_redirectCall(g_0x0040a130);
      reg_af = reg_ao  ==  -1 ? intern_redirectCall(g_0x0040a128) : 0;
      if(reg_af  ==  0) {
        reg_result = reg_ao;
        (void) STORE(LOAD(reg_am / 32 * 4 + 4230112) + (reg_am & 31) * 8 + 4, LOAD(LOAD(reg_am / 32 * 4 + 4230112) + (reg_am & 31) * 8 + 4) & 253);
      } else {
        reg_ak = F_004043d0();
        reg_result = reg_ak | -1;
      }
    }
  } else {
    reg_an = ARG_0;
    reg_result = reg_an | -1;
    (void) STORE(&g_0x00408914, 9);
    (void) STORE(&g_0x00408918, 0);
  }
  return reg_result;
}

// addr = 00404200.0
// signature= func(F_00404200, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00404200(???)
{
  (void) STORE(&g_0x00408910, g_0x00408910 + 1);
  reg_ah = F_00402fb0();
  reg_ad = ARG_0;
  (void) STORE(ARG_0 + 8, reg_ah);
  if(reg_ah  ==  0) {
    reg_result = reg_ad + 20;
    reg_var1 = reg_result;
    (void) STORE(reg_ad + 12, LOAD(reg_ad + 12) & 0xffffff00 | WIDEN(NARROW(LOAD(reg_ad + 12)) | 4));
    (void) STORE(reg_ad + 24, 2);
    (void) STORE(reg_ad + 8, reg_result);
  } else {
    reg_var1 = LOAD(reg_ad + 8);
    reg_result = LOAD(reg_ad + 12) & 0xffffff00 | WIDEN(NARROW(LOAD(reg_ad + 12)) | 8);
    (void) STORE(reg_ad + 12, reg_result);
    (void) STORE(reg_ad + 24, 0x1000);
  }
  reg_af = ARG_0;
  (void) STORE(ARG_0, reg_var1);
  (void) STORE(reg_af + 4, 0);
  return reg_result;
}

// addr = 00404260.0
// signature= func(F_00404260, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00404260(???)
{
  reg_an = ARG_0;
  reg_var1 = InitValue(initial_value_of_edi) | -1;
  if((NARROW(LOAD(ARG_0 + 12)) & 64)  ==  0) {
    if((NARROW(LOAD(ARG_0 + 12)) & 131)  ==  0) {
      reg_var2 = 1;
    } else {
      reg_ao = ARG_0;
      reg_ab = F_004030e0();
      reg_var1 = reg_ab;
      (void) F_00404520();
      reg_am = F_00404440();
      if(reg_am  <  0) {
        reg_var2 = 0;
      } else {
        if(LOAD(reg_an + 28)  !=  0) {
          (void) F_00403590();
          (void) STORE(reg_ao + 28, 0);
        }
        reg_var2 = 1;
      }
    }
    if(reg_var2  ==  0) {
      reg_result = reg_var1 | -1;
      (void) STORE(reg_an + 12, 0);
    } else {
      reg_result = reg_var1;
      (void) STORE(ARG_0 + 12, 0);
    }
  } else {
    reg_result = LOAD(ARG_0 + 12) | -1;
    (void) STORE(ARG_0 + 12, 0);
  }
  return reg_result;
}

// addr = 004042e0.0
// signature= func(F_004042e0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004042e0(???)
{
  if(g_0x00408ce0  <=  ARG_0 || (1 & LOAD(LOAD(ARG_0 / 32 * 4 + 4230112) + (ARG_0 & 31) * 8 + 4))  ==  0 || LOAD(LOAD(ARG_0 / 32 * 4 + 4230112) + (ARG_0 & 31) * 8)  ==  -1) {
    reg_ad = ARG_0;
    reg_result = reg_ad | -1;
    (void) STORE(&g_0x00408914, 9);
    (void) STORE(&g_0x00408918, 0);
  } else {
    if(ARG_0  >=  0 && ARG_0  <=  2 && g_0x0040606c  ==  1) {
      (void) intern_redirectCall(g_0x0040a134);
    }
    reg_result = 0;
    (void) STORE(LOAD(ARG_0 / 32 * 4 + 4230112) + (ARG_0 & 31) * 8, -1);
  }
  return reg_result;
}

// addr = 00404380.0
// signature= func(F_00404380, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00404380(???)
{
  reg_var1 = ARG_0;
  if(reg_var1  >=  g_0x00408ce0) {
    reg_var2 = 1;
  } else {
    reg_ab = LOAD(LOAD(reg_var1 / 32 * 4 + 4230112) + (reg_var1 & 31) * 8 + 4);
    reg_var1 = LOAD(reg_var1 / 32 * 4 + 4230112) + (reg_var1 & 31) * 8;
    reg_var1a = reg_var1;
    if((reg_ab & 1)  ==  0) {
      reg_var2 = 1;
    } else {
      reg_var2 = 0;
    }
  }
  if(reg_var2  ==  0) {
    reg_result = LOAD(reg_var1a);
  } else {
    reg_result = reg_var1 | -1;
    (void) STORE(&g_0x00408914, 9);
    (void) STORE(&g_0x00408918, 0);
  }
  return reg_result;
}

// addr = 004043d0.0
// signature= func(F_004043d0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004043d0(???)
{
  reg_var1 = 0;
  reg_result = 4229008;
  (void) STORE(&g_0x00408918, ARG_0);

// calls     [1, 5, 6]
// called    [1]
// deep-calls     {1, 2, 5, 6, 7, 8, 10, 11}
// depp-called    {0, 1, 2, 12}
// modifiedAddresses  []
L2:
  reg_result += 8;
  reg_var1++;
  if(reg_result  <  4229368) goto L1;
  if(ARG_0  <  19 || ARG_0  >  36) goto L6;
  goto L5;

// calls     [11]
// called    [2]
// deep-calls     {11}
// depp-called    {0, 1, 2, 12}
// modifiedAddresses  [ADDR(g_0x00408914)]
L5:
  (void) STORE(&g_0x00408914, 13);
  goto L11;

// calls     [7, 8]
// called    [2]
// deep-calls     {7, 8, 11}
// depp-called    {0, 1, 2, 12}
// modifiedAddresses  []
L6:
  reg_aj = ARG_0;
  if(ARG_0  <  188) goto L8;
  goto L7;

// calls     [8, 11]
// called    [6]
// deep-calls     {8, 11}
// depp-called    {0, 1, 2, 6, 12}
// modifiedAddresses  [ADDR(g_0x00408914)]
L7:
  (void) STORE(&g_0x00408914, 8);
  if(reg_aj  >  202) goto L8;
  goto L11;

// calls     [11]
// called    [6, 7]
// deep-calls     {11}
// depp-called    {0, 1, 2, 6, 7, 12}
// modifiedAddresses  [ADDR(g_0x00408914)]
L8:
  (void) STORE(&g_0x00408914, 22);
  goto L11;

// calls     [11]
// called    [1]
// deep-calls     {11}
// depp-called    {0, 1, 2, 12}
// modifiedAddresses  [ADDR(g_0x00408914)]
L10:
  reg_result = LOAD(reg_var1 * 8 + 4229012);
  (void) STORE(&g_0x00408914, reg_result);
  goto L11;
}

// addr = 00404440.0
// signature= func(F_00404440, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00404440(???)
{

// calls     [2, 12]
// called    [0]
// deep-calls     {2, 5, 6, 7, 8, 9, 10, 11, 12, 13, 17, 18, 19, 20, 21, 35, 36, 37, 38, 48, 49, 50, 51, 89, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122}
// depp-called    {0, 14}
// startStackOffset -16
// modifiedAddresses  []
L1:
  reg_var3 = reg_as / 32;
  if((LOAD(LOAD(reg_var3 * 4 + 4230112) + (reg_as & 31) * 8 + 4) & 1)  ==  0) goto L12;
  goto L2;

// calls     [5, 100]
// called    [1]
// deep-calls     {5, 6, 7, 8, 9, 10, 11, 13, 17, 18, 19, 20, 21, 35, 36, 37, 38, 48, 49, 50, 51, 89, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122}
// depp-called    {0, 1, 14}
// startStackOffset -16
// modifiedAddresses  [ALL]
L2:
  (void) STORE(local + 4, reg_as);
  reg_at = F_00404380();
  reg_var1 = local + 8;
  reg_var1a = reg_var1;
  if(reg_as  ==  2 && reg_at  !=  -1 || reg_as  ==  1 && reg_at  !=  -1) goto L5;
  goto L100;

// calls     [13]
// called    [0, 1]
// deep-calls     {13}
// depp-called    {0, 1, 14}
// startStackOffset -16
// modifiedAddresses  [ADDR(g_0x00408914), ADDR(g_0x00408918)]
L12:
  reg_result = reg_var3 | -1;
  (void) STORE(&g_0x00408914, 9);
  (void) STORE(&g_0x00408918, 0);
  goto L13;

// calls     [35]
// called    [48]
// deep-calls     {6, 7, 8, 9, 10, 11, 13, 17, 19, 20, 21, 35, 37, 48, 51, 89, 94, 95, 96, 97, 98, 99, 101, 102, 103, 104, 105, 106, 107, 109, 110, 111, 112, 113, 114, 115, 117, 118, 119, 120, 121, 122}
// depp-called    {0, 1, 2, 5, 6, 7, 14, 17, 18, 19, 20, 35, 36, 37, 38, 48, 49, 50, 51, 100, 108, 109, 116}
// modifiedAddresses  null
L37:
  reg_var5 = 0;
  goto L35;

// calls     [37, 96]
// called    [51, 116]
// deep-calls     {6, 7, 8, 9, 10, 11, 13, 17, 19, 20, 21, 35, 37, 48, 51, 89, 94, 95, 96, 97, 98, 99, 101, 102, 103, 104, 105, 106, 107, 109, 110, 111, 112, 113, 114, 115, 117, 118, 119, 120, 121, 122}
// depp-called    {0, 1, 2, 5, 6, 7, 14, 17, 18, 19, 20, 35, 36, 37, 38, 48, 49, 50, 51, 100, 108, 109, 116}
// modifiedAddresses  null
L48:
  if(reg_var6  ==  0) goto L37;
  goto L96;
  if(reg_at  ==  -1) {
    reg_var5 = 1;
  } else {
    reg_var5 = 0;
  }
  if(reg_var5  ==  0) {
    (void) STORE(local + 4, ARG_0);
    reg_aq = F_00404380();
    reg_var1 = local + 4;
    (void) STORE(reg_var1, reg_aq);
    reg_bj = intern_redirectCall(g_0x0040a138);
    if(reg_bj  ==  0) {
      reg_bl = intern_redirectCall(g_0x0040a128);
      reg_var2 = reg_bl;
      reg_var4 = 1;
    } else {
      reg_var4 = 0;
    }
  } else {
    reg_var4 = 0;
  }
  reg_var6 = 1;
  (void) STORE(reg_var1a + -4, 2);
  reg_ap = F_00404380();
  (void) STORE(reg_var1a + -4, 1);
  reg_bk = F_00404380();
  if(reg_ap  ==  reg_bk) {
    reg_var4 = 0;
    reg_var6 = 1;
  } else {
    reg_var6 = 0;
  }
  while(reg_var4  ==  0) {
    reg_var2 = 0;
    reg_var4 = 1;
  }
  reg_be = ARG_0;
  (void) STORE(reg_var1 + -4, ARG_0);
  (void) F_004042e0();
  (void) STORE(LOAD(reg_var3 * 4 + 4230112) + (reg_be & 31) * 8 + 4, 0);
  if(reg_var2  ==  0) {
    reg_result = 0;
  } else {
    (void) STORE(reg_var1 + -4, reg_var2);
    reg_ar = F_004043d0();
    reg_result = reg_ar | -1;
  }
}

// addr = 00404520.0
// signature= func(F_00404520, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00404520(???)
{
  reg_ab = ARG_0;
  reg_result = LOAD(ARG_0 + 12);
  reg_resulta = reg_result;
  if((NARROW(reg_result) & 131)  !=  0 && (NARROW(reg_resulta) & 8)  !=  0) {
    (void) F_00403590();
    reg_result = 0;
    (void) STORE(reg_ab + 12, LOAD(reg_ab + 12) & -1033);
    (void) STORE(reg_ab + 4, reg_result);
    (void) STORE(reg_ab + 8, reg_result);
    (void) STORE(reg_ab, reg_result);
  }
  return reg_result;
}

/* The decompilation of 0x00404560 / F_00404560 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */


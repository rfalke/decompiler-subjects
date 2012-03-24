// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x00401000 / F_00401000 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L16 in if(CMP(reg_pp21, ==, reg_zb28)) goto L18: The current setter is reg_ze10 while [reg_pp21] was found. Related expressions are [reg_ze10, reg_ze9, reg_ze8, reg_pp21] */

// addr = 0040106c.0
// signature= func(F_0040106c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040106c(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 004010f3.0
// signature= func(F_004010f3, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004010f3(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(g_0x0040a10f  >=  0) {
    reg_ad = F_00407d54();
    reg_result = reg_ad;
    if(reg_ad  !=  0) {
      (void) F_0040998a();
      (void) F_004099ba();
      reg_result = F_00407d80();
    }
  }
  return reg_result;
}

// addr = 00401140.0
// signature= func(F_00401140, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401140(???)
{
  return LOAD(g_0x0000002c + g_0x0040a10f * 4);
}

// addr = 004011e0.0
// signature= func(F_004011e0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004011e0(???)
{
  reg_aa = F_004013e0();
  if(reg_aa  !=  0) {
    (void) F_004021ac();
  }
  reg_result = F_004013e0();
  return reg_result;
}

// addr = 0040120c.0
// signature= func(F_0040120c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040120c(???)
{
  reg_result = F_004013f0();
  return reg_result;
}

// addr = 0040121c.0
// signature= func(F_0040121c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040121c(???)
{
  reg_result = F_0040120c();
  return reg_result;
}

// addr = 0040122c.0
// signature= func(F_0040122c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040122c(???)
{
  if(g_0x0040a15c  ==  0 && g_0x0040cc78  ==  2 || g_0x0040a15c  ==  0 && g_0x0040cc78  ==  1) {
    (void) STORE(&g_0x0040a15c, 0x100000);
  } else if(g_0x0040a15c  ==  0) {
    (void) STORE(&g_0x0040a15c, 0x400000);
  }
  reg_ad = g_0x0040a15c;
  reg_ac = F_00409a08();
  (void) STORE(InitValue(initial_value_of_edx), reg_ac);
  if(reg_ac  ==  0) {
    reg_result = 0;
  } else {
    reg_result = 1;
    (void) STORE(InitValue(initial_value_of_ecx), InitValue(initial_value_of_eax) + reg_ad + -1 & reg_ad * -1);
  }
  return reg_result;
}

// addr = 00401298.0
// signature= func(F_00401298, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401298(???)
{
  reg_aa = F_00409a08();
  (void) STORE(InitValue(initial_value_of_eax), reg_aa);
  return WIDEN(BIT_TO_INT(reg_aa  !=  0)) & 1;
}

// addr = 004012c0.0
// signature= func(F_004012c0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004012c0(???)
{
  reg_var1 = local + 16;
  reg_var3 = InitValue(initial_value_of_edx);
  reg_var2 = InitValue(initial_value_of_eax);
  (void) STORE(local + 20, InitValue(initial_value_of_esi));
  (void) STORE(local + 24, InitValue(initial_value_of_ebx));
  (void) STORE(reg_var1, InitValue(initial_value_of_edi));
  while(1) {
    (void) STORE(reg_var1 + -12, 0x1000);
    (void) STORE(reg_var1 + -4, 4);
    (void) STORE(reg_var1 + -8, 0x1000);
    reg_var1 += -16;
    (void) STORE(reg_var1, reg_var2);
    reg_am = F_00409a08();
    if(reg_am  ==  0) {
      (void) F_0040130c();
      reg_result = 0;
      break;
    }
    reg_var2 += 0x1000;
    reg_var3 += -4096;
    if(reg_var3  ==  0) {
      reg_result = 1;
      break;
    }
  }
  return reg_result;
}

// addr = 0040130c.0
// signature= func(F_0040130c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040130c(???)
{
  reg_aa = F_00409a0e();
  return reg_aa  ==  1 ? 1 : 0;
}

// addr = 00401324.0
// signature= func(F_00401324, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401324(???)
{
  reg_aa = F_00409a0e();
  return reg_aa  ==  1 ? 1 : 0;
}

// addr = 004013dc.0
// signature= func(F_004013dc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004013dc(???)
{
  return 0;
}

// addr = 004013e0.0
// signature= func(F_004013e0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004013e0(???)
{
  reg_result = intern_redirectCall(g_0x0040a20c);
  return reg_result;
}

// addr = 004013f0.0
// signature= func(F_004013f0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004013f0(???)
{
  reg_result = intern_redirectCall(g_0x0040a208);
  return reg_result;
}

// addr = 00401400.0
// signature= func(F_00401400, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401400(???)
{
  reg_result = intern_redirectCall(g_0x0040a210);
  return reg_result;
}

// addr = 00401418.0
// signature= func(F_00401418, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401418(???)
{
  reg_ab = F_004013dc();
  if(reg_ab  ==  0) {
    (void) STORE(&g_0x0040a208, 4201144);
    (void) STORE(&g_0x0040a20c, 4201512);
    (void) STORE(&g_0x0040a210, 4202624);
    (void) STORE(&g_0x0040a214, 4202048);
    (void) STORE(&g_0x0040a204, 1);
  }
  reg_result = ARG_0;
  (void) STORE(&g_0x0040a200, ARG_0);
  return reg_result;
}

// addr = 004014d0.0
// signature= func(F_004014d0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004014d0(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 004014d4.0
// signature= func(F_004014d4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004014d4(???)
{
  reg_var1 = 12;
  while(reg_var1  <  g_0x0040a228) {
    reg_ae = g_0x0040a23c + reg_var1 * 2;
    (void) STORE(g_0x0040a23c + reg_var1 * 2 + -8, g_0x0040a23c + reg_var1 * 2 + -12);
    reg_var1 += 4;
    (void) STORE(reg_ae + -4, reg_ae + -12);
  }
  reg_aa = g_0x0040a23c + g_0x0040a228 * 2;
  (void) STORE(g_0x0040a23c + g_0x0040a228 * 2 + -8, 0);
  (void) STORE(reg_aa + -4, 0);
  return reg_aa + -12;
}

// addr = 00401514.0
// signature= func(F_00401514, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401514(???)
{
  reg_ad = ARG_1;
  reg_ao = ARG_0;
  reg_var1 = 0;
  if(ARG_1  >=  0x1000) {
    (void) STORE(ARG_0 + 8, 1);
    (void) STORE(reg_ao + 12, reg_ao);
    (void) STORE(reg_ao + 140, g_0x0040a234);
    (void) STORE(reg_ao + 144, 0);
    (void) STORE(reg_ao + 4, ARG_2);
    (void) STORE(reg_ao, reg_ad);
    if(g_0x0040a234  ==  0) {
      (void) STORE(&g_0x0040a238, reg_ao);
    } else {
      (void) STORE(g_0x0040a234 + 144, reg_ao);
    }
    reg_ac = ARG_0;
    reg_var2 = reg_ac + 152;
    (void) STORE(&g_0x0040a234, ARG_0);
    (void) STORE(reg_ac + 148, 0);
    if(g_0x0040a23c  ==  0) {
      reg_ap = g_0x0040a228;
      (void) STORE(&g_0x0040a23c, reg_var2 + 4);
      (void) STORE(reg_var2, reg_ap * 2 + 3 & -4);
      reg_var2 += (reg_ap * 2 + 3 & -4) + 4;
      (void) F_004014d4();
      reg_var1 = (reg_ap * 2 + 3 & -4) + 4;
    }
    (void) STORE(reg_var2, reg_var1 * -1 + reg_ad + -159);
    (void) STORE((reg_var1 * -1 + reg_ad + -159 & -4) + reg_var2 + 4, 2);
    reg_ae = reg_var1 * -1 + reg_ad + -160  >=  g_0x0040a228 ? g_0x0040a24c : g_0x0040a23c + reg_ad * 2 + reg_var1 * -2 + -332;
    reg_ah = ARG_1;
    (void) STORE(reg_var2 + 4, LOAD(reg_ae + 4));
    (void) STORE(reg_var2 + 8, reg_ae);
    (void) STORE(LOAD(reg_var2 + 4) + 8, reg_var2);
    reg_result = 0;
    (void) STORE(reg_ae + 4, reg_var2);
    (void) STORE(reg_var1 * -1 + reg_ah + reg_var2 + -160, reg_var1 * -1 + reg_ah + -156);
  } else {
    reg_result = ARG_0 | -1;
  }
  return reg_result;
}

// addr = 00401614.0
// signature= func(F_00401614, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401614(???)
{
  reg_al = ARG_0;
  reg_ad = LOAD(ARG_0);
  if(LOAD(ARG_0)  >  (ARG_1 & -4096) && (LOAD(LOAD(ARG_0) + ARG_0 + -4) & 2)  ==  0) {
    reg_result = LOAD(ARG_0) + ARG_0 + -4 | -1;
  } else {
    if(LOAD(ARG_0)  <=  (ARG_1 & -4096)) {
      reg_am = LOAD(ARG_0) * -1 + (ARG_1 & -4096);
      (void) STORE(LOAD(ARG_0) + ARG_0 + -4, LOAD(LOAD(ARG_0) + ARG_0 + -4) + LOAD(ARG_0) * -1 + (ARG_1 & -4096) + -4);
      (void) STORE((LOAD(reg_ad + reg_al + -4) & -4) + reg_ad + reg_al, 0);
      (void) F_00401ae4();
      (void) STORE(reg_al, LOAD(reg_al) + reg_am);
      reg_var1 = 1;
    } else {
      reg_af = LOAD(ARG_0) + LOAD(LOAD(ARG_0) + ARG_0 + -8) * -1 + ARG_0 + -4;
      if(LOAD(ARG_0) + (ARG_1 & -4096) * -1  <=  (LOAD(LOAD(ARG_0) + LOAD(LOAD(ARG_0) + ARG_0 + -8) * -1 + ARG_0 + -4) & -4) + -12) {
        (void) STORE(LOAD(ARG_0) + LOAD(LOAD(ARG_0) + ARG_0 + -8) * -1 + ARG_0 + -4, LOAD(LOAD(ARG_0) + LOAD(LOAD(ARG_0) + ARG_0 + -8) * -1 + ARG_0 + -4) + LOAD(ARG_0) * -1 + (ARG_1 & -4096));
        (void) STORE((LOAD(reg_af) & -4) + reg_af, (LOAD(reg_af) & -4) + 4);
        (void) STORE((LOAD(reg_af) & -4) + reg_af + 4, 2);
        if(g_0x0040a228  >  (LOAD(reg_af) & -4)) {
          reg_ak = LOAD(reg_af + 4);
          (void) STORE(LOAD(reg_af + 4) + 8, LOAD(reg_af + 8));
          (void) STORE(LOAD(reg_af + 8) + 4, reg_ak);
          (void) STORE(reg_af + 4, LOAD(g_0x0040a23c + (LOAD(reg_af) & -4) * 2 + -8));
          (void) STORE(reg_af + 8, g_0x0040a23c + (LOAD(reg_af) & -4) * 2 + -12);
          (void) STORE(reg_ak + 8, reg_af);
          (void) STORE(g_0x0040a23c + (LOAD(reg_af) & -4) * 2 + -8, reg_af);
        }
        reg_var1 = 1;
      } else {
        reg_var1 = 0;
      }
    }
    if(reg_var1  ==  0) {
      reg_result = LOAD(ARG_0) + LOAD(LOAD(ARG_0) + ARG_0 + -8) * -1 + ARG_0 + -4 | -1;
    } else {
      reg_result = 0;
    }
  }
  return reg_result;
}

/* The decompilation of 0x00401700 / F_00401700 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L5 in if(CMP(MARKER_UNSIGNED(reg_d1), <=, MARKER_UNSIGNED(reg_pp4))) goto L26: The current setter is reg_e4 while [reg_pp4] was found. Related expressions are [reg_pp4, reg_pp21, reg_e3, reg_pp26, reg_e2, reg_e4] */

/* The decompilation of 0x004019c4 / F_004019c4 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L9 in reg_pp18 = LOAD(reg_pp15): The current setter is reg_pp19 while [reg_pp15] was found. Related expressions are [reg_pp15, reg_var20, reg_var26, reg_pp19] */

// addr = 00401ab8.0
// signature= func(F_00401ab8, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401ab8(???)
{
  reg_result = ARG_0;
  if(reg_result  !=  0 && (LOAD(reg_result + -4) & -4)  <  0x100000) {
    reg_result = F_00401ae4();
  } else if(reg_result  !=  0) {
    reg_result = F_00401324();
  }
  return reg_result;
}

/* The decompilation of 0x00401ae4 / F_00401ae4 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L9 in reg_pp15 = LOAD(reg_pp14): The current setter is reg_pp16 while [reg_pp14] was found. Related expressions are [reg_pp14, reg_var11, reg_var10, reg_pp17, reg_pp16] */

// addr = 00401bec.0
// signature= func(F_00401bec, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401bec(???)
{
  reg_ab = ARG_0;
  reg_result = 0;
  reg_ac = F_00401298();
  if(reg_ac  !=  0) {
    reg_result += 4;
    (void) STORE(reg_result + -4, (reg_ab + 4099 & -4096) + -4);
  }
  return reg_result;
}

// addr = 00401c28.0
// signature= func(F_00401c28, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401c28(???)
{
  if(ARG_0  ==  0) {
    reg_result = 0;
  } else if(ARG_0  <  0x100000) {
    reg_result = F_00401c50();
  } else {
    reg_result = F_00401bec();
  }
  return reg_result;
}

// addr = 00401c50.0
// signature= func(F_00401c50, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401c50(???)
{
  if(ARG_0  ==  0) {
    reg_result = 0;
  } else {
    if(ARG_0  >=  12) {
      reg_var1 = ARG_0 + 3 & -4;
    } else {
      reg_var1 = 12;
    }
    if(g_0x0040a23c  ==  0) {
      (void) F_00401700();
    }
    if(reg_var1  >=  g_0x0040a228) {
      reg_var4 = g_0x0040a24c;
      reg_be = LOAD(reg_var4);
      if(reg_var1  >  LOAD(reg_var4)) {
        (void) STORE(g_0x0040a24c, -3);
        reg_var3 = LOAD(reg_var4 + 4);
        while(reg_var1  >  LOAD(reg_var3)) {
          reg_var3 = LOAD(reg_var3 + 4);
        }
        reg_var4 = reg_var3;
        (void) STORE(g_0x0040a24c, reg_be);
        if(reg_var3  ==  g_0x0040a24c) {
          reg_var4 = 4235840;
        }
      }
      reg_var5 = 0;
    } else {
      reg_bn = LOAD(g_0x0040a23c + reg_var1 * 2 + -8);
      if(g_0x0040a23c + reg_var1 * 2 + -12  ==  LOAD(g_0x0040a23c + reg_var1 * 2 + -8)) {
        reg_var4 = g_0x0040a244;
        if(reg_var4  ==  4235840) {
          reg_var2 = g_0x0040a23c + reg_var1 * 2 + -4;
          while(1) {
            if(reg_var2  !=  LOAD(reg_var2 + 4) && LOAD(reg_var2 + 4)  ==  0) {
              reg_var4 = g_0x0040a24c;
              break;
            }
            if(reg_var2  !=  LOAD(reg_var2 + 4)) {
              reg_var4 = LOAD(reg_var2 + 4);
              break;
            }
            reg_var2 += 8;
          }
        }
        reg_var5 = 0;
      } else {
        reg_var5 = 1;
      }
    }
    if(reg_var5  !=  0) {
      (void) STORE(LOAD(g_0x0040a23c + reg_var1 * 2 + -8), LOAD(LOAD(g_0x0040a23c + reg_var1 * 2 + -8)) & -2);
      (void) STORE((LOAD(reg_bn) & -4) + reg_bn + 4, LOAD((LOAD(reg_bn) & -4) + reg_bn + 4) & -3);
      reg_av = LOAD(reg_bn + 4);
      reg_result = reg_bn + 4;
      (void) STORE(LOAD(reg_bn + 4) + 8, LOAD(reg_bn + 8));
      (void) STORE(LOAD(reg_bn + 8) + 4, reg_av);
    } else if(reg_var4  ==  4235840) {
      reg_bc = F_00401700();
      if(reg_bc  ==  0) {
        reg_result = F_00401c50();
      } else {
        reg_result = 0;
      }
    } else {
      reg_bo = LOAD(reg_var4);
      if(reg_var1 * -1 + (LOAD(reg_var4) & -4)  >=  16) {
        (void) STORE(reg_var4, reg_var1);
        (void) STORE((reg_var1 & -4) + reg_var4 + 4, reg_var1 * -1 + (reg_bo & -4) + -3);
        (void) STORE(reg_var1 * -1 + (reg_bo & -4) + (reg_var1 & -4) + reg_var4, reg_var1 * -1 + (reg_bo & -4));
        if(reg_var1 * -1 + (reg_bo & -4) + -4  >=  g_0x0040a228) {
          reg_bp = LOAD(reg_var4 + 8);
          (void) STORE(LOAD(reg_var4 + 8) + 4, (reg_var1 & -4) + reg_var4 + 4);
          (void) STORE((reg_var1 & -4) + reg_var4 + 12, reg_bp);
          reg_aj = LOAD(reg_var4 + 4);
          (void) STORE(LOAD(reg_var4 + 4) + 8, (reg_var1 & -4) + reg_var4 + 4);
          (void) STORE((reg_var1 & -4) + reg_var4 + 8, reg_aj);
          (void) STORE(&g_0x0040a24c, (reg_var1 & -4) + reg_var4 + 4);
        } else {
          reg_aw = g_0x0040a23c + (reg_bo & -4) * 2 + reg_var1 * -2 + -8;
          (void) STORE((reg_var1 & -4) + reg_var4 + 8, LOAD(g_0x0040a23c + (reg_bo & -4) * 2 + reg_var1 * -2 + -16));
          (void) STORE((reg_var1 & -4) + reg_var4 + 12, reg_aw + -12);
          (void) STORE(LOAD((reg_var1 & -4) + reg_var4 + 8) + 8, (reg_var1 & -4) + reg_var4 + 4);
          (void) STORE(reg_aw + -8, (reg_var1 & -4) + reg_var4 + 4);
          if(reg_var4  ==  g_0x0040a24c) {
            (void) STORE(&g_0x0040a24c, LOAD(reg_var4 + 4));
          }
          reg_bq = LOAD(reg_var4 + 4);
          (void) STORE(LOAD(reg_var4 + 4) + 8, LOAD(reg_var4 + 8));
          (void) STORE(LOAD(reg_var4 + 8) + 4, reg_bq);
        }
        reg_result = reg_var4 + 4;
      } else {
        (void) STORE(reg_var4, LOAD(reg_var4) & -2);
        (void) STORE((LOAD(reg_var4) & -4) + reg_var4 + 4, LOAD((LOAD(reg_var4) & -4) + reg_var4 + 4) & -3);
        if(g_0x0040a228  <=  (reg_bo & -4)) {
          (void) STORE(&g_0x0040a24c, LOAD(reg_var4 + 4));
        }
        reg_ag = LOAD(reg_var4 + 4);
        reg_result = reg_var4 + 4;
        (void) STORE(LOAD(reg_var4 + 4) + 8, LOAD(reg_var4 + 8));
        (void) STORE(LOAD(reg_var4 + 8) + 4, reg_ag);
      }
    }
  }
  return reg_result;
}

/* The decompilation of 0x00401e28 / F_00401e28 failed: java.lang.RuntimeException: Can't find a setter for reg_12_local in block 0 */

/* The decompilation of 0x00401ea0 / F_00401ea0 failed: java.lang.AssertionError: Don't know about reg_var11 have information about [reg_bf0, reg_pp22, reg_var20, reg_result0, reg_var21, reg_pp23, reg_12_local1, reg_12_local2, reg_pp29, reg_pp28, reg_pp30, reg_pp31, reg_ba0, reg_var30, reg_pp32, reg_var31, reg_var32, reg_pp35, reg_pp34, reg_pp33, reg_result1, reg_result2, reg_pp36] */

// addr = 00401fc8.0
// signature= func(F_00401fc8, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401fc8(???)
{
  reg_ak = ARG_0;
  if((ARG_1 + 4099 & -4096) + -4  ==  (LOAD(ARG_0 + -4) & -4)) {
    reg_result = ARG_0;
  } else {
    reg_ae = ARG_1;
    if((ARG_1 + 4099 & -4096) + -4  <=  (LOAD(ARG_0 + -4) & -4) && (ARG_1 + 4099 & -4096)  <  1048580) {
      reg_ai = F_00401c28();
      if(reg_ai  !=  0) {
        (void) F_0040213c();
        (void) F_00401ab8();
      }
      reg_ah = F_00401c28();
      reg_result = reg_ah;
    } else {
      if((ARG_1 + 4099 & -4096) + -4  >  (LOAD(ARG_0 + -4) & -4)) {
        reg_aj = F_00401c28();
        if(reg_aj  !=  0) {
          (void) F_0040213c();
          (void) F_00401ab8();
        }
        reg_ag = F_00401c28();
        reg_result = reg_ag;
      } else {
        (void) F_0040130c();
        reg_result = reg_ak;
        (void) STORE(reg_ak + -4, (reg_ae + 4099 & -4096) + -4);
      }
    }
  }
  return reg_result;
}

// addr = 00402134.0
// signature= func(F_00402134, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402134(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 00402138.0
// signature= func(F_00402138, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402138(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 0040213c.0
// signature= func(F_0040213c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040213c(???)
{
  reg_result = ARG_0;
  reg_ac = ARG_1;
  reg_aa = ARG_2;
  ASSERT 0;
  (void) intern_memcpy(ARG_1, ARG_0, ARG_2 / 4 * 4);
  ASSERT UNDEF  !=  0;
  (void) intern_memcpy(reg_aa / 4 * 4 + reg_ac, reg_aa / 4 * 4 + reg_result, reg_aa & 3);
  return reg_result;
}

// addr = 00402160.0
// signature= func(F_00402160, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402160(???)
{
  reg_ac = ARG_0;
  reg_aa = ARG_1;
  reg_ab = ARG_2;
  if(ARG_0  <  ARG_1) {
    ASSERT 0;
    (void) intern_memcpy(ARG_1, ARG_0, ARG_2 / 4 * 4);
    ASSERT UNDEF  !=  0;
    (void) intern_memcpy(reg_ab / 4 * 4 + reg_aa, reg_ab / 4 * 4 + reg_ac, reg_ab & 3);
  } else if(ARG_0  !=  ARG_1) {
    ASSERT 1;
    (void) intern_memcpy(ARG_1 + ARG_2 + -1, ARG_0 + ARG_2 + -1, ARG_2 & 3);
    ASSERT UNDEF  !=  0;
    (void) intern_memcpy((reg_ab & 3) + reg_aa + reg_ab + -4, (reg_ab & 3) + reg_ab + reg_ac + -4, reg_ab / 4 * 4);
  }
  return ARG_0;
}

/* The decompilation of 0x004021ac / F_004021ac failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L16 in if(CMP(reg_pp9, ==, 6)) goto L58: The current setter is reg_var26 while [reg_pp9] was found. Related expressions are [reg_pp9, reg_var20, reg_var26] */

/* The decompilation of 0x00402238 / F_00402238 failed: java.lang.AssertionError: Unknown macro _memfillW */

/* The decompilation of 0x00402250 / F_00402250 failed: java.lang.RuntimeException: java.lang.AssertionError: Too many inner loops in RegionConstructor */

/* The decompilation of 0x004022ac / F_004022ac failed: java.lang.RuntimeException: java.lang.AssertionError */

/* The decompilation of 0x0040231c / F_0040231c failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L1 in if(CMP(MARKER_SIGNED(reg_pp1), <, MARKER_SIGNED(4))) goto L7: The current setter is reg_f1 while [reg_pp1] was found. Related expressions are [reg_f0, reg_pp9, reg_f2, reg_f1, reg_pp1] */

// addr = 00402388.0
// signature= func(F_00402388, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402388(???)
{
  (void) F_00402250();
  reg_aa = F_004013e0();
  if(reg_aa  !=  0) {
    (void) F_0040213c();
  }
  reg_result = F_004013e0();
  return reg_result;
}

// addr = 004023bc.0
// signature= func(F_004023bc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004023bc(???)
{
  reg_result = 0;
  reg_var1 = ARG_0;
  while(LOAD(reg_var1)  !=  0) {
    reg_result++;
    reg_var1 += 2;
  }
  return reg_result;
}

// addr = 004023d4.0
// signature= func(F_004023d4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004023d4(???)
{
  reg_ab = ARG_1;
  reg_am = F_004023bc();
  reg_var2 = 0;
  reg_var1 = ARG_0;
  reg_var3 = reg_ab;
  if(reg_var2  <  reg_am) {
    do {
      reg_aa = F_004023bc();
      reg_var2++;
      (void) STORE(reg_var1, LOAD(reg_var3));
      reg_var1 += 2;
      reg_var3 += 2;
    } while(reg_var2  <  reg_aa);
  }
  reg_af = F_004023bc();
  (void) STORE(reg_af * 2 + ARG_0, 0);
  return ARG_0;
}

// addr = 00402414.0
// signature= func(F_00402414, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402414(???)
{
  reg_ab = InitValue(initial_value_of_ebp) + LOAD(InitValue(initial_value_of_eax) + 4);
  (void) STORE(InitValue(initial_value_of_ebp) + LOAD(InitValue(initial_value_of_eax) + 4) + 8, InitValue(initial_value_of_eax));
  (void) STORE(reg_ab + 16, 0);
  (void) STORE(reg_ab + 12, &ARG_0);
  (void) STORE(reg_ab + 18, 0);
  (void) STORE(reg_ab + 28, 0);
  (void) STORE(reg_ab + 4, 4203611);
  reg_result = g_0x00000000;
  (void) STORE(reg_ab, g_0x00000000);
  (void) STORE(&g_0x00000000, reg_ab);
  return reg_result;
}

/* The decompilation of 0x00402484 / F_00402484 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L17 in if(CMP(AND(LOAD(ADD(reg_e2, SEGMENT2ADDR(reg_pp11), 12)), 4), ==, 0)) goto L20: The current setter is reg_zj7 while [reg_pp11] was found. Related expressions are [reg_zj7, reg_zj3, reg_pp11, reg_zj5, reg_pp3, reg_pp25, reg_pp17] */

/* The decompilation of 0x0040262e / F_0040262e failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L28 in reg_pp32 = LOAD(ADD(reg_pp22, SEGMENT2ADDR(reg_pp21))): The current setter is reg_pp28 while [reg_pp22] was found. Related expressions are [reg_b7, reg_b9, reg_pp28, reg_b2, reg_pp22, reg_pp44] */

// addr = 00402895.0
// signature= func(F_00402895, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402895(???)
{

// calls     [3, 4]
// called    [12, 17]
// deep-calls     {2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13}
// depp-called    {0, 1, 2, 4, 5, 6, 9, 10, 12, 14, 17}
// startStackOffset -20
// modifiedAddresses  []
L2:
  reg_al = LOAD(reg_var1);
  if(LOAD(reg_var1)  !=  0) goto L4;
  goto L3;

// calls     [13]
// called    [2]
// deep-calls     {13}
// depp-called    {0, 1, 2, 4, 5, 6, 9, 10, 12, 14, 17}
// startStackOffset -20
// modifiedAddresses  []
L3:
  reg_result = 0;
  goto L13;

// calls     [13]
// called    [6]
// deep-calls     {13}
// depp-called    {0, 1, 2, 4, 5, 6, 9, 10, 12, 14, 17}
// startStackOffset -20
// modifiedAddresses  [reg_ab1]
L7:
  reg_result = 1;
  (void) STORE(reg_ai, LOAD(local + 28));
  goto L13;

// calls     [10, 12]
// called    [6]
// deep-calls     {2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13}
// depp-called    {0, 1, 2, 4, 5, 6, 9, 10, 12, 14, 17}
// startStackOffset -20
// modifiedAddresses  []
L9:
  reg_ak = UNSIGNED_EXTEND(LOAD(reg_al + 16));
  if(reg_al + UNSIGNED_EXTEND(LOAD(reg_al + 16))  ==  0) goto L12;
  goto L10;

// calls     [11, 12]
// called    [9]
// deep-calls     {2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13}
// depp-called    {0, 1, 2, 4, 5, 6, 9, 10, 12, 14, 17}
// startStackOffset -20
// modifiedAddresses  [ALL]
L10:
  (void) STORE(local + 12, local + 28);
  (void) STORE(local + 4, 0);
  (void) STORE(local + 8, ARG_2);
  (void) STORE(local, reg_ak + reg_al);
  reg_af = F_00402895();
  if(reg_af  ==  0) goto L12;
  goto L11;

// calls     [13]
// called    [10]
// deep-calls     {13}
// depp-called    {0, 1, 2, 4, 5, 6, 9, 10, 12, 14, 17}
// startStackOffset -20
// modifiedAddresses  [reg_ab1]
L11:
  reg_result = 1;
  (void) STORE(reg_ai, LOAD(local + 28));
  goto L13;

// calls     [2]
// called    [6, 9, 10]
// deep-calls     {2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13}
// depp-called    {0, 1, 2, 4, 5, 6, 9, 10, 12, 14, 17}
// startStackOffset -20
// modifiedAddresses  []
L12:
  reg_var1 += 12;
  goto L2;
  reg_ai = ARG_3;
  (void) STORE(local + 28, LOAD(reg_var1 + 4) + LOAD(ARG_3));
  if(ARG_1  !=  0) {
    (void) STORE(local + 28, LOAD(LOAD(local + 28)));
  }
  (void) STORE(local + 12, ARG_2);
  (void) STORE(local + 8, reg_al);
  reg_ab = F_00402970();
}

// addr = 00402938.0
// signature= func(F_00402938, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402938(???)
{
  reg_ac = ARG_0;
  if(ARG_0  ==  0) {
    reg_result = 4235876;
  } else {
    if(LOAD(ARG_0 + 6)  ==  0) {
      (void) F_00406b6c();
    }
    reg_result = reg_ac + UNSIGNED_EXTEND(LOAD(reg_ac + 6));
  }
  return reg_result;
}

// addr = 00402970.0
// signature= func(F_00402970, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402970(???)
{
  reg_ao = ARG_1;
  reg_ap = ARG_0;
  if(ARG_0  ==  0) {
    (void) F_00406b6c();
  }
  if(reg_ao  ==  0) {
    (void) F_00406b6c();
  }
  if(reg_ao  !=  reg_ap && LOAD(reg_ao + 4)  ==  LOAD(reg_ap + 4) && LOAD(reg_ao)  ==  LOAD(reg_ap) && (NARROW(LOAD(reg_ap + 4)) & 128 | NARROW(LOAD(reg_ao + 4)) & 128)  ==  0) {
    reg_var1 = reg_ap + UNSIGNED_EXTEND(LOAD(reg_ap + 6));
    if(LOAD(reg_ap + 6)  ==  0) {
      (void) F_00406b6c();
    }
    reg_var2 = reg_ao + UNSIGNED_EXTEND(LOAD(reg_ao + 6));
    if(LOAD(reg_ao + 6)  ==  0) {
      (void) F_00406b6c();
    }
    while(1) {
      reg_am = SIGNED_EXTEND(LOAD(reg_var1));
      reg_an = SIGNED_EXTEND(LOAD(reg_var2));
      reg_var2++;
      reg_var1++;
      if(reg_am  !=  reg_an) {
        reg_result = 0;
        break;
      }
      if(reg_am  ==  0) {
        reg_result = 1;
        break;
      }
    }
  } else {
    if(reg_ao  ==  reg_ap) {
      reg_result = 1;
    } else if(LOAD(reg_ao + 4)  !=  LOAD(reg_ap + 4) || LOAD(reg_ao)  !=  LOAD(reg_ap)) {
      reg_result = 0;
    } else {
      reg_result = 0;
    }
  }
  return reg_result;
}

/* The decompilation of 0x00402a4c / F_00402a4c failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L17 in reg_b6 = LOAD(ADD(reg_pp12, SEGMENT2ADDR(reg_pp10), 8)): The current setter is reg_zj4 while [reg_pp10] was found. Related expressions are [reg_zj4, reg_pp10, reg_pp5, reg_zj6, reg_zj1] */

// addr = 00402b5c.0
// signature= func(F_00402b5c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402b5c(???)
{
  if(ARG_0  ==  0) {
    reg_result = ARG_0;
  } else {
    reg_ae = F_00402895();
    if(reg_ae  ==  0) {
      reg_ag = F_00402895();
      if(reg_ag  ==  0) {
        (void) F_00406b6c();
        reg_result = 0;
      } else {
        reg_result = ARG_0;
      }
    } else {
      reg_result = ARG_0;
    }
  }
  return reg_result;
}

// addr = 00402bd8.0
// signature= func(F_00402bd8, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402bd8(???)
{
  if(g_0x0040a57c  ==  0) {
    (void) STORE(&g_0x0040a57c, 4205568);
  }
  if(g_0x0040a580  ==  0) {
    (void) STORE(&g_0x0040a580, 4205648);
  }
  return InitValue(initial_value_of_eax);
}

/* The decompilation of 0x00402ca4 / F_00402ca4 failed: java.lang.RuntimeException: Can't find a setter for reg_24_local in block 3 */

// addr = 00402d18.0
// signature= func(F_00402d18, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402d18(???)
{
  reg_aa = F_00401140();
  (void) STORE(reg_aa + 4, LOAD(reg_aa + 4) & -3);
  if(LOAD(g_0x0040c8b4)  ==  2) {
    (void) F_00408021();
  }
  (void) intern_redirectCall(g_0x0040a580);
  reg_result = F_00406ec0();
  return reg_result;
}

// addr = 00402d50.0
// signature= func(F_00402d50, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402d50(???)
{
  (void) STORE(local + 12, InitValue(initial_value_of_ebx));
  (void) STORE(local + 24, InitValue(initial_value_of_ebp));
  reg_var1 = ARG_0;
  if(reg_var1  ==  0) {
    (void) STORE(local + 8, local + 16);
    (void) F_00402d9c();
    reg_var1 = LOAD(local + 20);
  }
  (void) STORE(local + 4, reg_var1);
  (void) STORE(local + 8, 156);
  reg_ae = F_00401140();
  (void) STORE(local, reg_ae);
  (void) F_0040213c();
  reg_result = F_00402bd8();
  return reg_result;
}

// addr = 00402d9c.0
// signature= func(F_00402d9c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402d9c(???)
{
  reg_aa = ARG_0;
  reg_ab = F_00401140();
  (void) STORE(&g_0x0040a5cc, reg_ab + 28);
  (void) STORE(reg_aa + 4, 4236728);
  (void) STORE(reg_aa, -2106428599);
  return reg_ab + 28;
}

// addr = 00402ec0.0
// signature= func(F_00402ec0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402ec0(???)
{
  reg_ab = ARG_0;
  (void) STORE(ARG_0, 0);
  (void) STORE(reg_ab + 4, 4206032);
  reg_result = F_00402f4c();
  return reg_result;
}

// addr = 00402edc.0
// signature= func(F_00402edc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402edc(???)
{
  reg_result = F_00402f61();
  return reg_result;
}

// addr = 00402f38.0
// signature= func(F_00402f38, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402f38(???)
{
  reg_result = g_0x0040ccc0;
  if(reg_result  !=  0) {
    reg_result = F_00402ec0();
  }
  return reg_result;
}

// addr = 00402f4c.0
// signature= func(F_00402f4c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402f4c(???)
{
  reg_result = ARG_0;
  (void) STORE(ARG_0, g_0x00000000);
  (void) STORE(&g_0x00000000, reg_result);
  return reg_result;
}

// addr = 00402f61.0
// signature= func(F_00402f61, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402f61(???)
{
  reg_result = ARG_0;
  reg_var1 = g_0x00000000;
  if(reg_result  ==  reg_var1) {
    reg_result = LOAD(reg_result);
    (void) STORE(&g_0x00000000, reg_result);
  } else {
    while(reg_var1  !=  -1) {
      reg_result = ARG_0;
      if(reg_result  ==  LOAD(reg_var1)) {
        reg_result = LOAD(reg_result);
        (void) STORE(reg_var1, reg_result);
        break;
      }
      reg_var1 = LOAD(reg_var1);
    }
  }
  return reg_result;
}

// addr = 00402f9a.0
// signature= func(F_00402f9a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402f9a(???)
{
  reg_result = F_004099d2();
  return reg_result;
}

// addr = 00402faf.0
// signature= func(F_00402faf, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402faf(???)
{
  reg_result = intern_redirectCall(LOAD(InitValue(initial_value_of_ebx)));
  return reg_result;
}

// addr = 00402fb8.0
// signature= func(F_00402fb8, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00402fb8(???)
{
  if(g_0x0040ab68  >  ARG_0) {
    reg_ad = F_00409960();
    reg_result = WIDEN(BIT_TO_INT(reg_ad  ==  2)) & 1;
  } else {
    reg_result = 0;
  }
  return reg_result;
}

// addr = 00403000.0
// signature= func(F_00403000, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403000(???)
{
  if(g_0x0040ab68  <=  ARG_0) {
    reg_result = F_0040375c();
  } else if(ARG_2  !=  1 && ARG_2  !=  2 && !BIT_TEST(31, ARG_2) && !BIT_TEST(31, ARG_2 + -1)) {
    reg_result = F_0040375c();
  } else {
    (void) STORE(ARG_0 * 4 + 4238188, LOAD(ARG_0 * 4 + 4238188) & -513);
    reg_ae = F_004099de();
    if(reg_ae  ==  -1) {
      (void) F_004037c0();
    }
    reg_result = reg_ae;
  }
  return reg_result;
}

/* The decompilation of 0x00403078 / F_00403078 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L21 in reg_a16 = reg_pp17: The current setter is reg_e4 while [reg_pp17] was found. Related expressions are [reg_pp9, reg_e1, reg_e3, reg_e2, reg_pp17, reg_e4] */

// addr = 004031a8.0
// signature= func(F_004031a8, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004031a8(???)
{
  reg_result = 0;
  reg_var2 = g_0x0040ab68;
  reg_var1 = 4236984;
  while(1) {
    reg_var2--;
    if(reg_var2  ==  -1) {
      break;
    }
    if(reg_var2  !=  -1 && (LOAD(reg_var1 + 18) & 3)  !=  0 && LOAD(reg_var1 + 8)  !=  0) {
      (void) F_004032c4();
      reg_result++;
    }
    reg_var1 += 24;
  }
  return reg_result;
}

// addr = 004031e0.0
// signature= func(F_004031e0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004031e0(???)
{
  (void) STORE(local + 20, InitValue(initial_value_of_ecx));
  (void) STORE(local + 24, InitValue(initial_value_of_ebp));
  reg_ae = ARG_0;
  if(g_0x0040ab68  >  ARG_0) {
    (void) STORE(local + 12, local + 20);
    (void) STORE(local + 16, 0);
    (void) STORE(local + 4, ARG_1);
    (void) STORE(local + 8, ARG_2);
    (void) STORE(local, LOAD(reg_ae * 4 + 4245896));
    reg_ad = F_00409a1a();
    if(reg_ad  ==  1) {
      reg_result = LOAD(local + 20);
    } else {
      reg_result = F_004037c0();
    }
  } else {
    (void) STORE(local + 16, 6);
    reg_result = F_0040375c();
  }
  return reg_result;
}

// addr = 00403244.0
// signature= func(F_00403244, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403244(???)
{
  reg_ai = ARG_3;
  reg_aa = ARG_1;
  if((LOAD(ARG_0 + 18) & 4)  !=  0) {
    (void) F_004013f0();
  }
  reg_ao = ARG_0;
  (void) STORE(ARG_0 + 18, LOAD(ARG_0 + 18) & 65523);
  (void) STORE(reg_ao + 12, 0);
  (void) STORE(reg_ao + 4, reg_ao + 20);
  (void) STORE(reg_ao, reg_ao + 20);
  if(ARG_2  ==  2 || reg_ai  <=  0) {
    reg_var3 = 1;
  } else {
    reg_var1 = reg_aa;
    (void) STORE(&g_0x0040ba5c, 4211724);
    if(reg_aa  ==  0) {
      reg_aq = F_004013e0();
      reg_var1 = reg_aq;
      if(reg_aq  ==  0) {
        reg_var2 = 0;
      } else {
        (void) STORE(reg_ao + 18, LOAD(reg_ao + 18) | 4);
        reg_var2 = 1;
      }
    } else {
      reg_var2 = 1;
    }
    if(reg_var2  ==  0) {
      reg_var3 = 0;
    } else {
      reg_al = ARG_0;
      reg_ap = ARG_3;
      (void) STORE(ARG_0, reg_var1);
      (void) STORE(reg_al + 12, reg_ap);
      (void) STORE(reg_al + 4, reg_var1);
      if(ARG_2  ==  1) {
        (void) STORE(reg_al + 18, LOAD(reg_al + 18) | 8);
      }
      reg_var3 = 1;
    }
  }
  return reg_var3  ==  0 ? reg_aq | -1 : 0;
}

// addr = 004032c4.0
// signature= func(F_004032c4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004032c4(???)
{
  reg_ai = ARG_0;
  if(ARG_0  ==  0) {
    (void) F_00403344();
    reg_result = 0;
  } else {
    reg_ak = ARG_0;
    if(LOAD(ARG_0 + 8)  >  -1 && ARG_0 + 20  ==  LOAD(ARG_0) && LOAD(ARG_0 + 23)  ==  NARROW(ARG_0) || (LOAD(ARG_0 + 18) & 8)  !=  0 && LOAD(ARG_0 + 8)  >  -1 && LOAD(ARG_0 + 23)  ==  NARROW(ARG_0) || LOAD(ARG_0 + 8)  >  -1 && !(LOAD(ARG_0 + 23)  !=  NARROW(ARG_0))) {
      if(LOAD(ARG_0 + 8)  >  -1 && ARG_0 + 20  ==  LOAD(ARG_0) && LOAD(ARG_0 + 23)  ==  NARROW(ARG_0) || (LOAD(ARG_0 + 18) & 8)  !=  0 && LOAD(ARG_0 + 8)  >  -1 && LOAD(ARG_0 + 23)  ==  NARROW(ARG_0)) {
        reg_ah = ARG_0;
        (void) STORE(ARG_0 + 8, 0);
        if(reg_ah + 20  ==  LOAD(reg_ah)) {
          (void) STORE(reg_ah, LOAD(reg_ah + 4));
        }
      }
      reg_result = 0;
    } else {
      if((LOAD(ARG_0 + 18) & 8)  ==  0 && !(ARG_0 + 20  ==  LOAD(ARG_0)) && ARG_0 + 20  !=  LOAD(ARG_0) && LOAD(ARG_0 + 23)  !=  NARROW(ARG_0) && LOAD(ARG_0 + 23)  ==  NARROW(ARG_0) || LOAD(ARG_0 + 8)  <  0 && LOAD(ARG_0 + 23)  ==  NARROW(ARG_0)) {
        reg_aj = LOAD(ARG_0 + 12) + LOAD(ARG_0 + 8);
        (void) STORE(ARG_0 + 8, LOAD(ARG_0 + 12) * -1 + -1);
        (void) STORE(reg_ak, LOAD(reg_ak + 4));
        reg_ag = F_00403078();
        if(reg_ag  ==  reg_aj + 1 || (LOAD(reg_ai + 19) & 2)  !=  0) {
          reg_result = 0;
        } else {
          reg_result = reg_ag | -1;
          (void) STORE(reg_ak + 18, LOAD(reg_ak + 18) | 16);
        }
      } else {
        reg_result = InitValue(initial_value_of_eax) | -1;
      }
    }
  }
  return reg_result;
}

// addr = 00403344.0
// signature= func(F_00403344, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403344(???)
{
  reg_result = 0;
  reg_var2 = g_0x0040ab68;
  reg_var1 = 4236984;
  while(1) {
    reg_var2--;
    if(reg_var2  ==  -1) {
      break;
    }
    reg_an = LOAD(reg_var1 + 8);
    if(LOAD(reg_var1 + 8)  <  0) {
      reg_am = LOAD(reg_var1 + 12);
      (void) STORE(reg_var1 + 8, LOAD(reg_var1 + 8) + LOAD(reg_var1 + 12) * -1 + reg_an * -1 + -1);
      (void) STORE(reg_var1, LOAD(reg_var1 + 4));
      reg_ad = F_00403078();
      if(reg_ad  !=  reg_am + reg_an + 1 && (LOAD(reg_var1 + 19) & 2)  ==  0) {
        (void) STORE(reg_var1 + 18, LOAD(reg_var1 + 18) | 16);
      }
      reg_result++;
    }
    reg_var1 += 24;
  }
  return reg_result;
}

// addr = 004033a0.0
// signature= func(F_004033a0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004033a0(???)
{
  reg_result = ARG_0;
  (void) STORE(&g_0x0040ac38, ARG_0);
  return reg_result;
}

// addr = 004033b0.0
// signature= func(F_004033b0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004033b0(???)
{
  reg_result = ARG_0;
  if(reg_result  !=  0) {
    reg_result = LOAD(reg_result);
    (void) STORE(&g_0x0040a6b4, reg_result);
  }
  return reg_result;
}

// addr = 0040375c.0
// signature= func(F_0040375c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040375c(???)
{
  if(ARG_0  <  0) {
    reg_var2 = -ARG_0;
    if(reg_var2  >=  g_0x0040ae2c) {
      reg_var3 = 0;
      reg_var4 = 1;
    } else {
      reg_var4 = 0;
    }
  } else {
    reg_var1 = ARG_0;
    if(reg_var1  <=  298) {
      reg_var3 = 1;
    } else {
      reg_var3 = 0;
    }
    reg_var4 = 1;
  }
  if(reg_var4  ==  0) {
    (void) STORE(&g_0x0040ca50, -1);
  } else {
    if(reg_var3  ==  0) {
      reg_var1 = 1;
    }
    (void) STORE(&g_0x0040ca50, reg_var1);
    reg_var2 = SIGNED_EXTEND(LOAD(reg_var1 + 4238396));
  }
  (void) STORE(&g_0x0040b9fc, reg_var2);
  return reg_var2 | -1;
}

// addr = 004037c0.0
// signature= func(F_004037c0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004037c0(???)
{
  (void) F_00409966();
  reg_result = F_0040375c();
  return reg_result;
}

// addr = 004037d4.0
// signature= func(F_004037d4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004037d4(???)
{
  (void) STORE(local + 12, InitValue(initial_value_of_edi));
  (void) STORE(local + 16, InitValue(initial_value_of_esi));
  (void) STORE(local + 20, InitValue(initial_value_of_ebx));
  (void) STORE(local + 24, InitValue(initial_value_of_ecx));
  (void) STORE(local + 28, InitValue(initial_value_of_ebp));
  reg_bd = ARG_1;
  reg_av = LOAD(&ARG_0);
  (void) STORE(local + 26, LOAD(&ARG_0));
  if(LOAD(reg_bd + 8)  >=  -1 && (NARROW(LOAD(reg_bd + 18)) & 144)  ==  0 && (NARROW(LOAD(reg_bd + 18)) & 2)  !=  0) {
    (void) STORE(reg_bd + 18, LOAD(reg_bd + 18) | 256);
    if(LOAD(reg_bd + 12)  !=  0 && LOAD(reg_bd + 8)  !=  0) {
      (void) STORE(local + 8, reg_bd);
      reg_bf = F_004032c4();
      if(reg_bf  ==  0) {
        reg_var3 = 1;
        reg_var4 = 0;
      } else {
        reg_var4 = 1;
      }
    } else {
      if(LOAD(reg_bd + 12)  ==  0) {
        reg_var3 = 0;
      } else {
        reg_var3 = 1;
      }
      reg_var4 = 0;
    }
    if(reg_var4  ==  0 && reg_var3  !=  0) {
      reg_au = ARG_1;
      (void) STORE(ARG_1 + 8, -LOAD(ARG_1 + 12));
      (void) STORE(local + 4, local + 26);
      (void) STORE(local + 8, 1);
      (void) STORE(local, LOAD(reg_au));
      (void) F_0040213c();
      (void) STORE(reg_au + 8, LOAD(reg_au + 8));
      (void) STORE(reg_au, LOAD(reg_au) + 1);
      if((LOAD(reg_au + 18) & 8)  ==  0 || reg_av  !=  10 && reg_av  !=  13) {
        reg_var2 = 1;
      } else {
        (void) STORE(local + 8, reg_au);
        reg_aa = F_004032c4();
        if(reg_aa  ==  0) {
          reg_var2 = 1;
        } else {
          reg_var2 = 0;
        }
      }
      if(reg_var2  ==  0) {
        reg_result = reg_aa | -1;
      } else {
        reg_result = WIDEN(LOAD(&ARG_0));
      }
    } else {
      if(reg_var4  ==  0) {
        (void) STORE(local + 4, local + 26);
        (void) STORE(local + 8, 1);
        (void) STORE(local, SIGNED_EXTEND(LOAD(reg_bd + 22)));
        reg_aq = F_00403078();
        if(reg_aq  ==  1 || (LOAD(reg_bd + 19) & 2)  !=  0) {
          reg_result = WIDEN(reg_av);
        } else {
          reg_result = reg_aq | -1;
          (void) STORE(reg_bd + 18, LOAD(reg_bd + 18) | 16);
        }
      } else {
        reg_result = reg_bf | -1;
      }
    }
  } else {
    if(LOAD(reg_bd + 8)  <  -1) {
      (void) STORE(local + 4, local + 26);
      (void) STORE(local + 8, 1);
      (void) STORE(local, LOAD(reg_bd));
      (void) F_0040213c();
      (void) STORE(reg_bd + 8, LOAD(reg_bd + 8) + 1);
      (void) STORE(reg_bd, LOAD(reg_bd) + 1);
      if((LOAD(reg_bd + 18) & 8)  ==  0 || reg_av  !=  10 && reg_av  !=  13) {
        reg_var1 = 1;
      } else {
        (void) STORE(local + 8, reg_bd);
        reg_bg = F_004032c4();
        if(reg_bg  ==  0) {
          reg_var1 = 1;
        } else {
          reg_var1 = 0;
        }
      }
      if(reg_var1  ==  0) {
        reg_result = reg_bg | -1;
      } else {
        reg_result = WIDEN(LOAD(&ARG_0));
      }
    } else {
      reg_result = 0xffff0000 | WIDEN(LOAD(reg_bd + 18)) | -1;
      (void) STORE(reg_bd + 18, LOAD(reg_bd + 18) | 16);
    }
  }
  return reg_result;
}

// addr = 004038e4.0
// signature= func(F_004038e4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004038e4(???)
{
  reg_result = F_00403ad0();
  return reg_result;
}

// addr = 00403a20.0
// signature= func(F_00403a20, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403a20(???)
{
  reg_result = 1;
  if(LOAD(ARG_0 + 80)  !=  0) {
    reg_ae = ARG_0;
    reg_ad = intern_redirectCall(LOAD(ARG_0 + 84));
    if(reg_ad  ==  0) {
      (void) STORE(reg_ae + 96, 1);
    }
    reg_result = 0;
    (void) STORE(ARG_0 + 80, reg_result);
  }
  return reg_result;
}

// addr = 00403a68.0
// signature= func(F_00403a68, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00403a68(???)
{
  if(LOAD(ARG_1 + 80)  >=  80) {
    (void) F_00403a20();
  }
  if(LOAD(ARG_1 + 100)  ==  0) {
    reg_var1 = 0;
  } else {
    reg_result = LOAD(ARG_1 + 100);
    if(LOAD(reg_result)  <=  LOAD(ARG_1 + 92)) {
      reg_var1 = 1;
    } else {
      reg_var1 = 0;
    }
  }
  if(reg_var1  ==  0) {
    reg_ad = ARG_1;
    reg_result = LOAD(ARG_1 + 100) & 0xffffff00 | WIDEN(LOAD(&ARG_0));
    (void) STORE(LOAD(ARG_1 + 80) + ARG_1, LOAD(&ARG_0));
    (void) STORE(reg_ad + 80, LOAD(reg_ad + 80) + 1);
  }
  (void) STORE(ARG_1 + 92, LOAD(ARG_1 + 92) + 1);
  return reg_result;
}

/* The decompilation of 0x00403a9c / F_00403a9c failed: java.lang.RuntimeException: java.lang.AssertionError: >= */

/* The decompilation of 0x00403ad0 / F_00403ad0 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L9 in if(CMP(LOAD(ADD(reg_pp11, SEGMENT2ADDR(reg_zj2))), ==, 0)) goto L11: The current setter is reg_e4 while [reg_pp11] was found. Related expressions are [reg_pp6, reg_e10, reg_e16, reg_e13, reg_e18, reg_e17, reg_pp27, reg_e1, reg_e0, reg_pp11, reg_e7, reg_e6, reg_e3, reg_e5, reg_e4] */

// addr = 00404434.0
// signature= func(F_00404434, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00404434(???)
{
  if(ARG_0  <=  16 && ARG_0  ==  16) {
    reg_result = LOAD(LOAD(g_0x0040b59c + 24) + 8);
  } else if(ARG_0  <=  16 && ARG_0  ==  14) {
    reg_result = LOAD(LOAD(g_0x0040b59c + 24) + 4);
  } else if(ARG_0  <=  16 && ARG_0  ==  15) {
    reg_result = LOAD(LOAD(g_0x0040b59c + 24));
  } else if(ARG_0  !=  80 && ARG_0  !=  81) {
    reg_result = 0;
  } else if(ARG_0  ==  80) {
    reg_result = LOAD(LOAD(g_0x0040b59c + 24) + 12);
  } else {
    reg_result = LOAD(LOAD(g_0x0040b59c + 24) + 16);
  }
  return reg_result;
}

// addr = 0040454c.0
// signature= func(F_0040454c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040454c(???)
{
  reg_result = F_00404690();
  return reg_result;
}

// addr = 00404650.0
// signature= func(F_00404650, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00404650(???)
{
  reg_result = F_004046d4();
  return reg_result;
}

// addr = 00404690.0
// signature= func(F_00404690, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00404690(???)
{
  if(ARG_0  >  0xff) {
    reg_result = 0;
  } else if(LOAD(g_0x0040b59c + 8)  !=  0 || LOAD(g_0x0040b59c + 16)  ==  0) {
    reg_result = UNSIGNED_EXTEND(LOAD(SIGNED_EXTEND(NARROW(ARG_0)) * 2 + 4239966)) & ARG_1;
  } else {
    reg_result = ARG_1 & UNSIGNED_EXTEND(LOAD(LOAD(g_0x0040b59c + 16) + ARG_0 * 2 + 2));
  }
  return reg_result;
}

// addr = 004046d4.0
// signature= func(F_004046d4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004046d4(???)
{
  (void) STORE(local + 16, InitValue(initial_value_of_ebx));
  (void) STORE(local + 20, InitValue(initial_value_of_ecx));
  (void) STORE(local + 24, InitValue(initial_value_of_ebp));
  reg_ab = ARG_1;
  if(ARG_0  ==  0xffff) {
    reg_result = 0;
  } else if(LOAD(g_0x0040b59c + 8)  ==  0 || ARG_0  >=  256) {
    (void) STORE(local + 12, local + 22);
    (void) STORE(local + 4, &ARG_0);
    (void) STORE(local + 8, 1);
    (void) STORE(local, 1);
    (void) F_0040999c();
    reg_result = UNSIGNED_EXTEND(LOAD(local + 22)) & reg_ab;
  } else {
    reg_result = UNSIGNED_EXTEND(LOAD(SIGNED_EXTEND(LOAD(&ARG_0)) * 2 + 4239966)) & ARG_1;
  }
  return reg_result;
}

// addr = 0040487c.0
// signature= func(F_0040487c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040487c(???)
{
  (void) STORE(local + 32, InitValue(initial_value_of_ecx));
  (void) STORE(local + 36, InitValue(initial_value_of_ebp));
  if(ARG_0  !=  0 && LOAD(g_0x0040b59c + 8)  ==  0) {
    (void) STORE(local + 16, ARG_0);
    (void) STORE(local + 20, 2);
    (void) STORE(local + 24, 0);
    (void) STORE(local + 28, local + 32);
    (void) STORE(local + 32, 0);
    reg_ag = g_0x0040b59c;
    (void) STORE(local + 12, 1);
    (void) STORE(local + 4, 544);
    (void) STORE(local + 8, &ARG_1);
    (void) STORE(local, LOAD(reg_ag));
    reg_result = F_00409a14();
    if(reg_result  ==  0 || LOAD(local + 32)  !=  0) {
      reg_result = reg_result | -1;
    }
  } else {
    if(ARG_0  ==  0) {
      reg_result = 0;
    } else if(LOAD(&ARG_1)  <=  0xff) {
      reg_result = 1;
      (void) STORE(ARG_0, LOAD(&ARG_1));
    } else {
      reg_result = ARG_0 | -1;
    }
  }
  return reg_result;
}

/* The decompilation of 0x00404c97 / F_00404c97 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L5 in if(CMP(MARKER_UNSIGNED(reg_e2), <, MARKER_UNSIGNED(reg_pp6))) goto L7: The current setter is reg_b2 while [reg_pp6] was found. Related expressions are [reg_pp8, reg_pp6, reg_b2, reg_b1, reg_b0, reg_b3] */

/* The decompilation of 0x00404d5a / F_00404d5a failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L5 in if(CMP(MARKER_UNSIGNED(reg_e2), <, MARKER_UNSIGNED(reg_pp6))) goto L7: The current setter is reg_b2 while [reg_pp6] was found. Related expressions are [reg_pp8, reg_pp6, reg_b2, reg_b1, reg_b0, reg_b3] */

// addr = 00404dfc.0
// signature= func(F_00404dfc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00404dfc(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(ARG_0  >=  -4932 && ARG_0  <=  4932 && ARG_0  !=  0) {
    reg_var1 = ARG_0;
    if(reg_var1  <  0) {
      reg_var1 = -ARG_0;
    }
    if((NARROW(reg_var1 / 8) & 1)  !=  0) {
      asm("l.fldt ds:[0x40b710]");
      asm("l.fldt ss:[ebp-0xc]");
      asm("l.fmulp st(1),st");
      asm("l.fstpt ss:[ebp-0xc]");
      asm("l.fwait");
    }
    reg_result = reg_var1 / 16;
    if(reg_result  !=  0) {
      if((NARROW(reg_result) & 1)  !=  0) {
        asm("l.fldt ds:[0x40b71c]");
        asm("l.fldt ss:[ebp-0xc]");
        asm("l.fmulp st(1),st");
        asm("l.fstpt ss:[ebp-0xc]");
        asm("l.fwait");
      }
      if((NARROW(reg_result / 2) & 1)  !=  0) {
        asm("l.fldt ds:[ecx]");
        asm("l.fldt ss:[ebp-0xc]");
        asm("l.fmulp st(1),st");
        asm("l.fstpt ss:[ebp-0xc]");
        asm("l.fwait");
      }
      if((NARROW(reg_result / 4) & 1)  !=  0) {
        asm("l.fldt ds:[ecx]");
        asm("l.fldt ss:[ebp-0xc]");
        asm("l.fmulp st(1),st");
        asm("l.fstpt ss:[ebp-0xc]");
        asm("l.fwait");
      }
      if((NARROW(reg_result / 8) & 1)  !=  0) {
        asm("l.fldt ds:[ecx]");
        asm("l.fldt ss:[ebp-0xc]");
        asm("l.fmulp st(1),st");
        asm("l.fstpt ss:[ebp-0xc]");
        asm("l.fwait");
      }
      if((NARROW(reg_result / 16) & 1)  !=  0) {
        asm("l.fldt ds:[ecx]");
        asm("l.fldt ss:[ebp-0xc]");
        asm("l.fmulp st(1),st");
        asm("l.fstpt ss:[ebp-0xc]");
        asm("l.fwait");
      }
      if((NARROW(reg_result / 32) & 1)  !=  0) {
        asm("l.fldt ds:[ecx]");
        asm("l.fldt ss:[ebp-0xc]");
        asm("l.fmulp st(1),st");
        asm("l.fstpt ss:[ebp-0xc]");
        asm("l.fwait");
      }
      if((NARROW(reg_result / 64) & 1)  !=  0) {
        asm("l.fldt ds:[ecx]");
        asm("l.fldt ss:[ebp-0xc]");
        asm("l.fmulp st(1),st");
        asm("l.fstpt ss:[ebp-0xc]");
        asm("l.fwait");
      }
      if((NARROW(reg_result / 128) & 1)  !=  0) {
        asm("l.fldt ds:[ecx]");
        asm("l.fldt ss:[ebp-0xc]");
        asm("l.fmulp st(1),st");
        asm("l.fstpt ss:[ebp-0xc]");
        asm("l.fwait");
      }
/* The decompilation of 0x00404dfc / F_00404dfc failed: Index: 1, Size: 1 */

/* The decompilation of 0x00404f84 / F_00404f84 failed: java.lang.AssertionError: self=00404f84[1,1].0 first=00404f84[1,1].0 */

// addr = 00404f98.0
// signature= func(F_00404f98, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00404f98(???)
{
  asm("l.fwait");
  asm("l.fstcw ss:[ebp-0x4]");
  reg_ab = ARG_1;
  if(ARG_1  !=  0) {
    (void) STORE(&g_0x0040b850, ARG_0);
  }
  reg_aa = ARG_0;
  asm("l.fwait");
  reg_ac = UNSIGNED_EXTEND(LOAD(InitStackPointer + -8));
  asm("l.fldcw ss:[ebp-0x4]");
  (void) STORE(InitStackPointer + -8, NARROW(ARG_0) & NARROW(reg_ab) | NARROW(UNSIGNED_EXTEND(LOAD(InitStackPointer + -8))) & NARROW(~reg_ab));
  return reg_aa & reg_ab | reg_ac & ~reg_ab;
}

/* The decompilation of 0x00404fc8 / F_00404fc8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00404fce / F_00404fce failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 00405010.0
// signature= func(F_00405010, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00405010(???)
{
  asm("l.finit");
  reg_result = F_00404f98();
  return reg_result;
}

// addr = 00405028.0
// signature= func(F_00405028, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00405028(???)
{
  if((LOAD(ARG_0 + 7) & 128)  ==  0) {
    asm("l.fildq ds:[eax]");
  } else {
    asm("l.fldt ss:[ebp-0xa]");
    (void) STORE(InitStackPointer + -10, LOAD(ARG_0 + 4));
    (void) STORE(InitStackPointer + -14, LOAD(ARG_0));
    (void) STORE(InitStackPointer + -6, 16446);
  }
  return ARG_0;
}

// addr = 00405058.0
// signature= func(F_00405058, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00405058(???)
{
  reg_aa = ARG_0;
  reg_ab = ARG_1;
  if(LOAD(ARG_1 + 8)  ==  16446) {
    (void) STORE(ARG_0, LOAD(ARG_1));
    (void) STORE(reg_aa + 4, LOAD(reg_ab + 4));
  } else {
    asm("l.fldt ds:[edx]");
    asm("l.fistpq ds:[eax]");
    asm("l.fwait");
  }
  return ARG_0;
}

// addr = 0040507c.0
// signature= func(F_0040507c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040507c(???)
{
  asm("l.fldt ds:[eax]");
  asm("l.fxam");
  asm("l.fwait");
  asm("l.fstsw ax");
  asm("l.fstp st(0)");
  asm("l.fwait");
  return 0;
}

// addr = 00405090.0
// signature= func(F_00405090, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00405090(???)
{
  reg_var2 = local + 16;
  (void) STORE(local + 20, InitValue(initial_value_of_esi));
  (void) STORE(local + 24, InitValue(initial_value_of_ebx));
  (void) STORE(local + 96, InitValue(initial_value_of_ebp));
  (void) STORE(reg_var2, InitValue(initial_value_of_edi));
  reg_var4 = ARG_2;
  if(ARG_3  >=  2 && ARG_3  <=  36) {
    if(ARG_1  <  0 || ARG_0  <  0 && ARG_1  <  1) {
      reg_bf = LOAD(&ARG_4)  <  0;
      if(LOAD(&ARG_4)  !=  0) {
        (void) STORE(reg_var4, 45);
        reg_var4++;
        reg_var1 = 0;
        if(ISDEF(reg_bf) ? reg_bf : 0) {
          reg_var1++;
        }
        (void) STORE(&ARG_0, -ARG_0);
        (void) STORE(&ARG_1, -reg_var1);
      }
    }
    reg_var3 = local + 28;
    while(1) {
      while(1) {
        reg_aa = ARG_3;
        reg_al = intern_repeatSignBitL(ARG_3);
        (void) STORE(reg_var2 + -4, EXTRACT(reg_al, result));
        (void) STORE(reg_var2 + -8, reg_aa);
        reg_bd = F_00404d5a();
        (void) STORE(reg_var3, NARROW(reg_bd));
        reg_bc = intern_repeatSignBitL(reg_aa);
        (void) STORE(reg_var2 + -12, EXTRACT(reg_bc, result));
        reg_var2 += -16;
        (void) STORE(reg_var2, reg_aa);
        reg_au = ARG_1;
        reg_var3++;
        reg_ak = F_00404c97();
        (void) STORE(&ARG_0, reg_ak);
        (void) STORE(&ARG_1, reg_au);
        if(reg_au  ==  0) {
          break;
        }
      }
      reg_var5 = reg_ak;
      if(reg_ak  ==  0) {
        break;
      }
    }
    while(reg_var3  !=  local + 28) {
      reg_var3--;
      reg_be = LOAD(reg_var3);
      if(LOAD(reg_var3)  >=  10) {
        reg_var5 = reg_var5 & 0xffffff00 | WIDEN(LOAD(&ARG_5) + reg_be + 246);
        (void) STORE(reg_var4, LOAD(&ARG_5) + reg_be + 246);
        reg_var4++;
      } else {
        reg_var5 = (reg_var5 & 0xffffff00 | WIDEN(reg_be)) + 48;
        (void) STORE(reg_var4, NARROW(reg_var5));
        reg_var4++;
      }
    }
  }
  (void) STORE(reg_var4, 0);
  return ARG_2;
}

// addr = 00405144.0
// signature= func(F_00405144, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00405144(???)
{
  reg_au = ARG_0;
  if(ARG_0  ==  0) {
    reg_var1 = 16510;
    reg_var2 = 16234;
  } else {
    reg_var1 = 17406;
    reg_var2 = 15309;
  }
  reg_result = &ARG_1;
  reg_resulta = reg_result;
  reg_ae = LOAD(reg_result + 8);
  if((LOAD(reg_result + 8) & 0x7fff)  ==  0x7fff) {
    asm("l.fldt ss:[ebp+0xc]");
    asm("l.fstpq ss:[ebp-0x1c]");
    asm("l.fwait");
    asm("l.fldq ss:[ebp-0x1c]");
  } else {
    if(reg_var1  >=  (LOAD(reg_result + 8) & 0x7fff) && reg_var1  !=  (LOAD(reg_result + 8) & 0x7fff) && (LOAD(reg_result) | LOAD(reg_result + 8) & 0x7fff | LOAD(reg_result + 2) | LOAD(reg_result + 4) | LOAD(reg_result + 6))  !=  0 && reg_var2  <=  (LOAD(reg_result + 8) & 0x7fff)) {
      reg_var4 = 1;
    } else if(reg_var1  >=  (LOAD(reg_result + 8) & 0x7fff) && reg_var1  !=  (LOAD(reg_result + 8) & 0x7fff) && (LOAD(reg_result) | LOAD(reg_result + 8) & 0x7fff | LOAD(reg_result + 2) | LOAD(reg_result + 4) | LOAD(reg_result + 6))  !=  0) {
      reg_result = 0;
      reg_var3 = 0;
      reg_var4 = 0;
    } else {
      if(reg_var1  <  (LOAD(reg_result + 8) & 0x7fff)) {
        reg_result = ARG_5;
        reg_var3 = 0;
      } else {
        reg_var3 = 1;
      }
      reg_var4 = 0;
    }
    if(reg_var4  !=  0) {
      asm("l.fldt ss:[ebp+0xc]");
      asm("l.fstpq ss:[ebp-0x1c]");
      asm("l.fwait");
      asm("l.fldq ss:[ebp-0x1c]");
    } else if(reg_var3  ==  0) {
      (void) STORE(&g_0x0040b9fc, 34);
      if((reg_ae & 0x8000)  ==  0) {
        asm("l.fldq ss:[ebp-0x10]");
      } else {
        asm("l.fldq ss:[ebp-0x10]");
        asm("l.fchs");
      }
    } else if(reg_var1  ==  (LOAD(reg_resulta + 8) & 0x7fff)) {
      (void) F_00404f98();
      (void) F_00404f98();
      if(reg_au  ==  0) {
        asm("l.fldt ss:[ebp+0xc]");
        asm("l.fstp ss:[ebp-0x14]");
        asm("l.fwait");
        asm("l.fld ss:[ebp-0x14]");
        asm("l.fstpq ss:[ebp-0x10]");
        asm("l.fwait");
      } else {
        asm("l.fldt ss:[ebp+0xc]");
        asm("l.fstpq ss:[ebp-0x10]");
        asm("l.fwait");
      }
      reg_result = F_00404f98();
      asm("l.fldq ss:[ebp-0x10]");
    } else {
      asm("l.fldt ss:[ebp+0xc]");
      asm("l.fstpq ss:[ebp-0x1c]");
      asm("l.fwait");
      asm("l.fldq ss:[ebp-0x1c]");
    }
  }
  return reg_result;
}

// addr = 0040525c.0
// signature= func(F_0040525c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040525c(???)
{
  (void) STORE(local + 4, InitValue(initial_value_of_esi));
  (void) STORE(local + 48, InitValue(initial_value_of_ebp));
  (void) STORE(local + 8, InitValue(initial_value_of_ebx));
  (void) STORE(local, InitValue(initial_value_of_edi));
  reg_var4 = ARG_1;
  if(ARG_2  >=  2 && ARG_2  <=  36) {
    reg_var2 = ARG_0;
    if(reg_var2  <  0 && LOAD(&ARG_3)  !=  0) {
      (void) STORE(reg_var4, 45);
      reg_var4++;
      reg_var2 = -reg_var2;
    }
    reg_var1 = local + 12;
    do {
      reg_ac = ARG_2;
      (void) STORE(reg_var1, NARROW(reg_var2 % ARG_2));
      reg_var1++;
      reg_var3 = reg_var2 / reg_ac;
      reg_var2 = reg_var3;
    } while(reg_var3  !=  0);
    while(reg_var1  !=  local + 12) {
      reg_var1--;
      reg_aw = LOAD(reg_var1);
      if(LOAD(reg_var1)  >=  10) {
        reg_var3 = reg_var3 & 0xffffff00 | WIDEN(LOAD(&ARG_4) + reg_aw + 246);
        (void) STORE(reg_var4, LOAD(&ARG_4) + reg_aw + 246);
        reg_var4++;
      } else {
        reg_var3 = (reg_var3 & 0xffffff00 | WIDEN(reg_aw)) + 48;
        (void) STORE(reg_var4, NARROW(reg_var3));
        reg_var4++;
      }
    }
  }
  (void) STORE(reg_var4, 0);
  return ARG_1;
}

// addr = 004052d0.0
// signature= func(F_004052d0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004052d0(???)
{
  reg_result = F_0040525c();
  return reg_result;
}

// addr = 00405348.0
// signature= func(F_00405348, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00405348(???)
{
  reg_result = ARG_0;
  reg_ab = ARG_1;
  (void) STORE(&g_0x0040b8d8, ARG_0);
  (void) STORE(&g_0x0040b8dc, reg_ab);
  return reg_result;
}

// addr = 00405360.0
// signature= func(F_00405360, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00405360(???)
{
  reg_var1 = 0;
  if(LOAD(ARG_0 + 4)  !=  0) {
    reg_ae = DIV64_QU(reg_var1, LOAD(ARG_0 + 4), 10);
    reg_var1 = DIV64_RE(reg_var1, LOAD(ARG_0 + 4), 10);
    (void) STORE(ARG_0 + 4, reg_ae);
  }
  reg_aa = LOAD(ARG_0);
  (void) STORE(ARG_0, DIV64_QU(reg_var1, LOAD(ARG_0), 10));
  return DIV64_RE(reg_var1, reg_aa, 10);
}

// addr = 00405388.0
// signature= func(F_00405388, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00405388(???)
{
  reg_ab = ARG_0;
  reg_var1 = 0;
  if(BIT_TEST(31, ARG_1) && BIT_TEST(31, MULT64_LO(LOAD(ARG_0), 10)) || !BIT_TEST(31, MULT64_LO(LOAD(ARG_0), 10) + ARG_1) && BIT_TEST(31, MULT64_LO(LOAD(ARG_0), 10)) || !BIT_TEST(31, MULT64_LO(LOAD(ARG_0), 10) + ARG_1) && BIT_TEST(31, ARG_1)) {
    reg_var1++;
  }
  (void) STORE(ARG_0, MULT64_LO(LOAD(ARG_0), 10) + ARG_1);
  reg_result = 0;
  if(BIT_TEST(31, MULT64_LO(LOAD(reg_ab + 4), 10)) && BIT_TEST(31, reg_var1) || !BIT_TEST(31, MULT64_LO(LOAD(reg_ab + 4), 10) + reg_var1) && BIT_TEST(31, reg_var1) || !BIT_TEST(31, MULT64_LO(LOAD(reg_ab + 4), 10) + reg_var1) && BIT_TEST(31, MULT64_LO(LOAD(reg_ab + 4), 10))) {
    reg_result++;
  }
  (void) STORE(reg_ab + 4, MULT64_LO(LOAD(reg_ab + 4), 10) + reg_var1);
  return reg_result;
}

/* The decompilation of 0x004053b8 / F_004053b8 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L4 in if(CMP(LOAD(ADD(reg_pp3, SEGMENT2ADDR(reg_zj2), -1)), ==, 48)) goto L2: The current setter is reg_f2 while [reg_pp3] was found. Related expressions are [reg_f0, reg_f2, reg_f1, reg_pp5, reg_pp3] */

/* The decompilation of 0x004056b4 / F_004056b4 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L4 in if(CMP(LOAD(ADD(reg_pp3, SEGMENT2ADDR(reg_zj2), -2)), ==, 48)) goto L2: The current setter is reg_b2 while [reg_pp3] was found. Related expressions are [reg_pp5, reg_pp3, reg_b2, reg_b1, reg_b0] */

// addr = 004063ac.0
// signature= func(F_004063ac, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004063ac(???)
{
  (void) STORE(local + 64, InitValue(initial_value_of_ebp));
  (void) STORE(local + 12, InitValue(initial_value_of_edi));
  (void) STORE(local + 16, InitValue(initial_value_of_esi));
  (void) STORE(local + 20, InitValue(initial_value_of_ebx));
  (void) STORE(local + 62, 10);
  if(ARG_4  ==  2) {
    asm("l.fld ds:[edx]");
    asm("l.fstpt ss:[ebp-0xc]");
    asm("l.fwait");
  } else if(ARG_4  ==  6) {
    asm("l.fldq ds:[ecx]");
    asm("l.fstpt ss:[ebp-0xc]");
    asm("l.fwait");
  } else if(ARG_4  ==  8) {
    reg_cw = ARG_0;
    (void) STORE(local + 52, LOAD(ARG_0));
    (void) STORE(local + 56, LOAD(reg_cw + 4));
    (void) STORE(local + 60, LOAD(reg_cw + 8));
  }
  reg_cj = LOAD(local + 60);
  (void) STORE(local + 48, local + 52);
  (void) STORE(local + 60, reg_cj & 0x7fff);
  (void) STORE(ARG_2, WIDEN(BIT_TO_INT((NARROW(reg_cj / 256) & 128)  !=  0)) & 1);
  (void) STORE(local + 8, local + 52);
  reg_ci = F_0040507c();
  if((NARROW(reg_ci) & 18176)  ==  256 || (NARROW(reg_ci) & 18176)  ==  1280) {
    if((NARROW(reg_ci) & 18176)  ==  1280) {
      reg_result = 0x7fff;
    } else {
      reg_result = 32766;
    }
  } else {
    if((NARROW(reg_ci) & 18176)  !=  1280 && (NARROW(reg_ci) & 18176)  !=  256 && (NARROW(reg_ci) & 18176)  ==  0x4000) {
      reg_var15 = 1;
    } else {
      reg_cg = LOAD(LOAD(local + 48) + 7);
      (void) STORE(local + 44, ((UNSIGNED_EXTEND(reg_cj) & 0x7fff) * 19728 + (SIGNED_EXTEND(NARROW((WIDEN(LOAD(LOAD(local + 48) + 7)) * 2 & 0xff) * 77)) & 0xffff) + -323203824) / 0x10000);
      if(((UNSIGNED_EXTEND(reg_cj) & 0x7fff) * 19728 + (SIGNED_EXTEND(NARROW((WIDEN(reg_cg) * 2 & 0xff) * 77)) & 0xffff) + -323203824 & 0xffff)  !=  0) {
        (void) STORE(local + 44, LOAD(local + 44) + 1);
      }
      reg_var3 = ARG_1;
      if(reg_var3  >  0) {
        reg_var16 = 1;
      } else {
        reg_var3 = LOAD(local + 44) + ARG_1 * -1;
        if(reg_var3  <  0) {
          reg_var16 = 0;
        } else {
          reg_var16 = 1;
        }
      }
      if(reg_var16  ==  0) {
        reg_var15 = 1;
      } else {
        reg_var4 = reg_var3;
        if(reg_var3  >  19) {
          reg_var4 = 19;
        }
        reg_var5 = LOAD(local + 44) * -1 + reg_var4;
        if(reg_var5  !=  0) {
          while(1) {
            reg_var6 = reg_var5;
            if(reg_var5  <  0) {
              reg_var6 = -reg_var5;
            }
            reg_var7 = reg_var6;
            if(reg_var6  >  4932) {
              reg_var7 = 4932;
            }
            (void) STORE(local + 8, reg_var7);
            (void) F_00404dfc();
            asm("l.fstpt ss:[ebp-0x20]");
            asm("l.fwait");
            if(reg_var5  >=  0) {
              asm("l.fldt ss:[ebp-0x20]");
              asm("l.fldt ss:[ebp-0xc]");
              asm("l.fmulp st(1),st");
              asm("l.fstpt ss:[ebp-0xc]");
              asm("l.fwait");
              reg_var8 = reg_var7 * -1 + reg_var5;
            } else {
              asm("l.fldt ss:[ebp-0x20]");
              asm("l.fldt ss:[ebp-0xc]");
              asm("l.fdivrp st(1),st");
              asm("l.fstpt ss:[ebp-0xc]");
              asm("l.fwait");
              reg_var8 = reg_var5 + reg_var7;
            }
            reg_var5 = reg_var8;
            if(reg_var8  ==  0) {
              break;
            }
          }
        }
        (void) STORE(local + 8, reg_var4);
        (void) F_00404dfc();
        asm("l.fstpt ss:[ebp-0x20]");
        asm("l.fwait");
        asm("l.fldt ss:[ebp-0xc]");
        asm("l.fldt ss:[ebp-0x20]");
        asm("l.fcompp");
        asm("l.fstsw ax");
        asm("l.sahf");
        if(!UNDEF) {
          reg_var9 = reg_var4;
          (void) STORE(local + 8, reg_var4 + -1);
          (void) F_00404dfc();
          asm("l.fstpt ss:[ebp-0x20]");
          asm("l.fwait");
          asm("l.fldt ss:[ebp-0xc]");
          asm("l.fldt ss:[ebp-0x20]");
          asm("l.fcompp");
          asm("l.fstsw ax");
          asm("l.sahf");
          if(!UNDEF) {
            reg_var9--;
            (void) STORE(local + 44, LOAD(local + 44) + -1);
            if(ARG_1  >  0) {
              asm("l.fild ss:[ebp-0x28]");
              asm("l.fldt ss:[ebp-0xc]");
              asm("l.fmulp st(1),st");
              asm("l.fstpt ss:[ebp-0xc]");
              asm("l.fwait");
              reg_var9++;
              (void) STORE(local + 24, SIGNED_EXTEND(LOAD(local + 62)));
            }
          }
        } else {
          reg_var9 = reg_var4 + 1;
          (void) STORE(local + 44, LOAD(local + 44) + 1);
          if(reg_var9  <=  19 && ARG_1  >  0) {
            asm("l.fild ss:[ebp-0x28]");
            asm("l.fldt ss:[ebp-0xc]");
            asm("l.fdivrp st(1),st");
            asm("l.fstpt ss:[ebp-0xc]");
            asm("l.fwait");
            reg_var9--;
            (void) STORE(local + 24, SIGNED_EXTEND(LOAD(local + 62)));
          }
        }
        if(reg_var9  <  0) {
          reg_var15 = 1;
        } else {
          reg_var12 = reg_var9;
          (void) STORE(local + 4, local + 52);
          (void) STORE(local + 8, local + 52);
          (void) F_00405058();
          reg_av = ARG_3;
          reg_var11 = 0;
          reg_var10 = reg_av + reg_var9 + -1;
          (void) STORE(local + 28, ARG_3 + reg_var9);
          (void) STORE(reg_av + reg_var9, 0);
          if(reg_var9  ==  0) {
            reg_var11 = UNSIGNED_EXTEND(LOAD(LOAD(local + 48))) & 0xff ^ 1;
            if(reg_var11  ==  0) {
              reg_var15 = 0;
            } else {
              reg_var15 = 1;
            }
          } else {
            while(1) {
              (void) STORE(local + 8, local + 52);
              reg_cu = F_00405360();
              reg_var11 = reg_var11 | SIGNED_EXTEND(NARROW(reg_cu));
              (void) STORE(reg_var10, NARROW(reg_cu + 48));
              reg_var10--;
              reg_aj = reg_var12 + -1;
              reg_var12--;
              if(reg_aj  ==  0) {
                break;
              }
            }
            reg_var15 = 0;
          }
        }
      }
    }
    if(reg_var15  ==  0) {
      if(reg_var11  ==  0) {
        (void) STORE(local + 44, LOAD(local + 44) + 1);
        if(ARG_1  <=  0) {
          (void) STORE(LOAD(local + 28), 48);
        }
        (void) STORE(local + 28, LOAD(local + 28) + 1);
        (void) STORE(reg_var10 + 1, 49);
      }
      reg_var13 = ARG_1;
      if(reg_var13  <=  0) {
        reg_var13 = LOAD(local + 44) + ARG_1 * -1;
      }
      reg_var14 = reg_var13;
      if(reg_var13  >  40) {
        reg_var14 = 40;
      }
      (void) STORE(LOAD(local + 28), 0);
      reg_cv = LOAD(local + 28) + ARG_3 * -1;
      if(LOAD(local + 28) * -1 + ARG_3 + reg_var14  >  0) {
        (void) STORE(local + 4, 48);
        (void) STORE(local + 8, LOAD(local + 28) * -1 + ARG_3 + reg_var14);
        (void) STORE(local, LOAD(local + 28));
        (void) F_004021ac();
        (void) STORE(LOAD(local + 28) + reg_cv * -1 + reg_var14, 0);
      }
      reg_result = LOAD(local + 44);
    } else {
      reg_var1 = ARG_1;
      if(reg_var1  <=  0) {
        reg_var1 = reg_var1 * -1 + 1;
      }
      reg_var2 = reg_var1;
      if(reg_var1  >  40) {
        reg_var2 = 40;
      }
      (void) STORE(local + 4, 48);
      (void) STORE(local + 8, reg_var2);
      (void) STORE(local, ARG_3);
      (void) F_004021ac();
      reg_result = 1;
      (void) STORE(ARG_3 + reg_var2, 0);
    }
  }
  return reg_result;
}

// addr = 00406680.0
// signature= func(F_00406680, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406680(???)
{
  (void) STORE(local + 64, InitValue(initial_value_of_ebp));
  (void) STORE(local + 12, InitValue(initial_value_of_edi));
  (void) STORE(local + 16, InitValue(initial_value_of_esi));
  (void) STORE(local + 20, InitValue(initial_value_of_ebx));
  (void) STORE(local + 62, 10);
  if(ARG_4  ==  2) {
    asm("l.fld ds:[edx]");
    asm("l.fstpt ss:[ebp-0xc]");
    asm("l.fwait");
  } else if(ARG_4  ==  6) {
    asm("l.fldq ds:[ecx]");
    asm("l.fstpt ss:[ebp-0xc]");
    asm("l.fwait");
  } else if(ARG_4  ==  8) {
    reg_ck = ARG_0;
    (void) STORE(local + 52, LOAD(ARG_0));
    (void) STORE(local + 56, LOAD(reg_ck + 4));
    (void) STORE(local + 60, LOAD(reg_ck + 8));
  }
  reg_cq = LOAD(local + 60);
  (void) STORE(local + 48, local + 52);
  (void) STORE(local + 60, reg_cq & 0x7fff);
  (void) STORE(ARG_2, WIDEN(BIT_TO_INT((NARROW(reg_cq / 256) & 128)  !=  0)) & 1);
  (void) STORE(local + 8, local + 52);
  reg_as = F_0040507c();
  if((NARROW(reg_as) & 18176)  ==  256 || (NARROW(reg_as) & 18176)  ==  1280) {
    if((NARROW(reg_as) & 18176)  ==  1280) {
      reg_result = 0x7fff;
    } else {
      reg_result = 32766;
    }
  } else {
    if((NARROW(reg_as) & 18176)  !=  1280 && (NARROW(reg_as) & 18176)  !=  256 && (NARROW(reg_as) & 18176)  ==  0x4000) {
      reg_var17 = 0;
    } else {
      reg_bk = LOAD(LOAD(local + 48) + 7);
      (void) STORE(local + 44, ((UNSIGNED_EXTEND(reg_cq) & 0x7fff) * 19728 + (SIGNED_EXTEND(NARROW((WIDEN(LOAD(LOAD(local + 48) + 7)) * 2 & 0xff) * 77)) & 0xffff) + -323203824) / 0x10000);
      if(((UNSIGNED_EXTEND(reg_cq) & 0x7fff) * 19728 + (SIGNED_EXTEND(NARROW((WIDEN(reg_bk) * 2 & 0xff) * 77)) & 0xffff) + -323203824 & 0xffff)  !=  0) {
        (void) STORE(local + 44, LOAD(local + 44) + 1);
      }
      reg_var3 = ARG_1;
      if(reg_var3  >  0) {
        reg_var18 = 0;
      } else {
        reg_var3 = LOAD(local + 44) + ARG_1 * -1;
        if(reg_var3  <  0) {
          reg_var18 = 1;
        } else {
          reg_var18 = 0;
        }
      }
      if(reg_var18  ==  0) {
        reg_var4 = reg_var3;
        if(reg_var3  >  19) {
          reg_var4 = 19;
        }
        reg_var5 = LOAD(local + 44) * -1 + reg_var4;
        if(reg_var5  !=  0) {
          while(1) {
            reg_var6 = reg_var5;
            if(reg_var5  <  0) {
              reg_var6 = -reg_var5;
            }
            reg_var7 = reg_var6;
            if(reg_var6  >  4932) {
              reg_var7 = 4932;
            }
            (void) STORE(local + 8, reg_var7);
            (void) F_00404dfc();
            asm("l.fstpt ss:[ebp-0x20]");
            asm("l.fwait");
            if(reg_var5  >=  0) {
              asm("l.fldt ss:[ebp-0x20]");
              asm("l.fldt ss:[ebp-0xc]");
              asm("l.fmulp st(1),st");
              asm("l.fstpt ss:[ebp-0xc]");
              asm("l.fwait");
              reg_var8 = reg_var7 * -1 + reg_var5;
            } else {
              asm("l.fldt ss:[ebp-0x20]");
              asm("l.fldt ss:[ebp-0xc]");
              asm("l.fdivrp st(1),st");
              asm("l.fstpt ss:[ebp-0xc]");
              asm("l.fwait");
              reg_var8 = reg_var5 + reg_var7;
            }
            reg_var5 = reg_var8;
            if(reg_var8  ==  0) {
              break;
            }
          }
        }
        (void) STORE(local + 8, reg_var4);
        (void) F_00404dfc();
        asm("l.fstpt ss:[ebp-0x20]");
        asm("l.fwait");
        asm("l.fldt ss:[ebp-0xc]");
        asm("l.fldt ss:[ebp-0x20]");
        asm("l.fcompp");
        asm("l.fstsw ax");
        asm("l.sahf");
        if(!UNDEF) {
          reg_var9 = reg_var4;
          (void) STORE(local + 8, reg_var4 + -1);
          (void) F_00404dfc();
          asm("l.fstpt ss:[ebp-0x20]");
          asm("l.fwait");
          asm("l.fldt ss:[ebp-0xc]");
          asm("l.fldt ss:[ebp-0x20]");
          asm("l.fcompp");
          asm("l.fstsw ax");
          asm("l.sahf");
          if(!UNDEF) {
            reg_var9--;
            (void) STORE(local + 44, LOAD(local + 44) + -1);
            if(ARG_1  >  0) {
              asm("l.fild ss:[ebp-0x28]");
              asm("l.fldt ss:[ebp-0xc]");
              asm("l.fmulp st(1),st");
              asm("l.fstpt ss:[ebp-0xc]");
              asm("l.fwait");
              reg_var9++;
              (void) STORE(local + 24, SIGNED_EXTEND(LOAD(local + 62)));
            }
          }
        } else {
          reg_var9 = reg_var4 + 1;
          (void) STORE(local + 44, LOAD(local + 44) + 1);
          if(reg_var9  <=  19 && ARG_1  >  0) {
            asm("l.fild ss:[ebp-0x28]");
            asm("l.fldt ss:[ebp-0xc]");
            asm("l.fdivrp st(1),st");
            asm("l.fstpt ss:[ebp-0xc]");
            asm("l.fwait");
            reg_var9--;
            (void) STORE(local + 24, SIGNED_EXTEND(LOAD(local + 62)));
          }
        }
        if(reg_var9  <  0) {
          reg_var17 = 0;
        } else {
          reg_var12 = reg_var9;
          (void) STORE(local + 4, local + 52);
          (void) STORE(local + 8, local + 52);
          (void) F_00405058();
          reg_var11 = 0;
          reg_bs = reg_var9 * 2 + ARG_3;
          reg_var10 = reg_bs + -2;
          (void) STORE(local + 28, reg_var9 * 2 + ARG_3);
          (void) STORE(reg_bs, 0);
          if(reg_var9  ==  0) {
            reg_var11 = UNSIGNED_EXTEND(LOAD(LOAD(local + 48))) & 0xff ^ 1;
            if(reg_var11  ==  0) {
              reg_var17 = 1;
            } else {
              reg_var17 = 0;
            }
          } else {
            while(1) {
              (void) STORE(local + 8, local + 52);
              reg_ah = F_00405360();
              reg_var11 = reg_var11 | SIGNED_EXTEND(NARROW(reg_ah));
              (void) STORE(reg_var10, SIGNED_EXTEND(NARROW(reg_ah)) + 48);
              reg_var10 += -2;
              reg_cl = reg_var12 + -1;
              reg_var12--;
              if(reg_cl  ==  0) {
                break;
              }
            }
            reg_var17 = 1;
          }
        }
      } else {
        reg_var17 = 0;
      }
    }
    if(reg_var17  ==  0) {
      reg_var1 = ARG_1;
      if(reg_var1  <=  0) {
        reg_var1 = reg_var1 * -1 + 1;
      }
      reg_var2 = reg_var1;
      if(reg_var1  >  40) {
        reg_var2 = 40;
      }
      (void) STORE(local + 4, 48);
      (void) STORE(local + 8, reg_var2);
      (void) STORE(local, ARG_3);
      (void) F_00402238();
      reg_result = 1;
      (void) STORE(reg_var2 * 2 + ARG_3, 0);
    } else {
      if(reg_var11  ==  0) {
        (void) STORE(local + 44, LOAD(local + 44) + 1);
        if(ARG_1  <=  0) {
          (void) STORE(LOAD(local + 28), 48);
        }
        (void) STORE(local + 28, LOAD(local + 28) + 2);
        (void) STORE(reg_var10 + 2, 49);
      }
      reg_var13 = ARG_1;
      if(reg_var13  <=  0) {
        reg_var13 = LOAD(local + 44) + ARG_1 * -1;
      }
      reg_var16 = reg_var13;
      if(reg_var13  >  40) {
        reg_var16 = 40;
      }
      (void) STORE(LOAD(local + 28), 0);
      reg_var15 = (LOAD(local + 28) + ARG_3 * -1) / 2;
      if(UNDEF) {
        reg_var14 = 0;
        if(UNDEF) {
          reg_var14++;
        }
        reg_var15 = reg_var14;
      }
      if(reg_var15 * -1 + reg_var16  >  0) {
        (void) STORE(local + 4, 48);
        (void) STORE(local + 8, reg_var15 * -1 + reg_var16);
        (void) STORE(local, LOAD(local + 28));
        (void) F_00402238();
        (void) STORE(LOAD(local + 28) + reg_var15 * -2 + reg_var16 * 2, 0);
      }
      reg_result = LOAD(local + 44);
    }
  }
  return reg_result;
}

// addr = 00406974.0
// signature= func(F_00406974, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406974(???)
{
  (void) STORE(local + 12, InitValue(initial_value_of_esi));
  (void) STORE(local + 16, InitValue(initial_value_of_ebx));
  (void) STORE(local + 40, InitValue(initial_value_of_ebp));
  if(ARG_0  !=  -2 && ARG_0  !=  -3) {
    reg_var1 = ARG_0;
    if(reg_var1  ==  -4) {
      reg_var1 = LOAD(g_0x0040b59c);
    }
  } else {
    if(ARG_0  ==  -2) {
      reg_bo = F_0040997e();
      reg_var1 = reg_bo;
    } else {
      reg_ce = F_00409942();
      reg_var1 = reg_ce;
    }
  }
  if(reg_var1  ==  0) {
    reg_var13 = 1;
  } else {
    (void) STORE(local + 4, reg_var1);
    (void) STORE(local + 8, local + 20);
    reg_bg = F_00409948();
    if(reg_bg  ==  0) {
      reg_var13 = 0;
    } else {
      reg_var13 = 1;
    }
  }
  if(reg_var13  ==  0) {
    (void) STORE(local, 4241776);
    reg_as = F_00406cdc();
    reg_result = reg_as | -1;
  } else {
    reg_var2 = 4246100;
    for(reg_var3 = 0; reg_var3 < 257; reg_var3++) {
      (void) STORE(reg_var2, 0);
      reg_var2++;
    }
    if(reg_var1  ==  0 || LOAD(local + 20)  <=  1) {
      (void) STORE(&g_0x0040cb58, 0);
    } else {
      reg_var5 = local + 26;
      while(1) {
        reg_bp = LOAD(reg_var5);
        if(LOAD(reg_var5)  ==  0 || LOAD(reg_var5 + 1)  ==  0) {
          break;
        }
        reg_var6 = WIDEN(reg_bp) & 0xff;
        reg_var4 = reg_var6 + 4246101;
        while(reg_var6  <=  WIDEN(LOAD(reg_var5 + 1))) {
          reg_var6++;
          (void) STORE(reg_var4, 4);
          reg_var4++;
        }
        reg_var5 += 2;
      }
      reg_var8 = 1;
      reg_var7 = 4246102;
      reg_var14 = 0;
      while(1) {
        reg_var8++;
        (void) STORE(reg_var7, LOAD(reg_var7) | 8);
        reg_var7++;
        if(reg_var14  >=  253 && reg_var1  ==  932) {
          reg_loop_0_exit_variant = 0;
          break;
        }
        if(reg_var14  >=  253) {
          reg_loop_0_exit_variant = 1;
          break;
        }
        reg_var14++;
      }
      if(reg_loop_0_exit_variant  ==  0) {
        reg_var10 = WIDEN(LOAD(&g_0x0040b96c));
        reg_var9 = reg_var10 + 4246101;
        while(reg_var10  <=  WIDEN(LOAD(&g_0x0040b96d))) {
          reg_var10++;
          (void) STORE(reg_var9, LOAD(reg_var9) | 1);
          reg_var9++;
        }
        reg_var12 = WIDEN(LOAD(&g_0x0040b96e));
        reg_var11 = reg_var12 + 4246101;
        while(reg_var12  <=  WIDEN(LOAD(&g_0x0040b96f))) {
          reg_var12++;
          (void) STORE(reg_var11, LOAD(reg_var11) | 2);
          reg_var11++;
        }
      }
      (void) STORE(&g_0x0040cb58, reg_var1);
    }
    reg_result = 0;
  }
  return reg_result;
}

// addr = 00406ab0.0
// signature= func(F_00406ab0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406ab0(???)
{
  reg_result = ARG_0  <=  0xff ? F_0040454c() : 0;
  return reg_result;
}

// addr = 00406acc.0
// signature= func(F_00406acc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406acc(???)
{
  reg_var1 = ARG_0;
  reg_result = 0;
  do {
    if((LOAD(WIDEN(LOAD(reg_var1)) + 4246101) & 4)  !=  0 && LOAD(reg_var1 + 1)  ==  0) {
      if((LOAD(WIDEN(LOAD(reg_var1)) + 4246101) & 4)  !=  0 && LOAD(reg_var1 + 1)  ==  0 && ARG_1  ==  0) {
        reg_result = reg_var1 + 1;
      }
      break;
    }
    if((LOAD(WIDEN(LOAD(reg_var1)) + 4246101) & 4)  ==  0) {
      reg_var2 = reg_var1;
      if(ARG_1  ==  WIDEN(LOAD(reg_var1))) {
        reg_result = reg_var2;
      }
    } else {
      if(LOAD(reg_var1 + 1)  !=  0 && (WIDEN(LOAD(reg_var1)) * 256 | UNSIGNED_EXTEND(LOAD(reg_var1 + 1)))  ==  ARG_1 || (LOAD(WIDEN(LOAD(reg_var1)) + 4246101) & 4)  ==  0 && (WIDEN(LOAD(reg_var1)) * 256 | UNSIGNED_EXTEND(LOAD(reg_var1 + 1)))  ==  ARG_1) {
        reg_result = reg_var1;
      }
      reg_var2 = reg_var1 + 1;
    }
    reg_var1 = reg_var2 + 1;
  } while(LOAD(reg_var2)  !=  0);
  return reg_result;
}

// addr = 00406b24.0
// signature= func(F_00406b24, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406b24(???)
{
  reg_var1 = &ARG_2;
  (void) STORE(ARG_0, 0);
  while(1) {
    reg_var1 += 4;
    reg_result = reg_var1;
    if(LOAD(reg_result + -4)  ==  0) {
      break;
    }
    reg_result = F_00402250();
    if(reg_result * -1 + ARG_1  <=  1) {
      break;
    }
    (void) F_004022ac();
  }
  return reg_result;
}

// addr = 00406b6c.0
// signature= func(F_00406b6c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406b6c(???)
{
  (void) F_00406b24();
  (void) F_00402250();
  (void) F_004052d0();
  (void) F_00406cdc();
  reg_result = F_00406ec0();
  return reg_result;
}

// addr = 00406bcc.0
// signature= func(F_00406bcc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406bcc(???)
{
  (void) STORE(local + 36, local + 36);
  (void) F_0040996c();
  (void) STORE(local + 12, UNSIGNED_EXTEND(LOAD(local + 42)));
  (void) STORE(local + 16, UNSIGNED_EXTEND(LOAD(local + 36)));
  (void) STORE(local + 20, UNSIGNED_EXTEND(LOAD(local + 44)));
  (void) STORE(local + 24, UNSIGNED_EXTEND(LOAD(local + 46)));
  (void) STORE(local + 28, UNSIGNED_EXTEND(LOAD(local + 48)));
  (void) STORE(local + 32, UNSIGNED_EXTEND(LOAD(local + 50)));
  (void) STORE(local + 4, 4241880);
  (void) STORE(local + 8, UNSIGNED_EXTEND(LOAD(local + 38)));
  (void) STORE(local, 4246620);
  (void) F_00409a2c();
  return 4246620;
}

// addr = 00406c1c.0
// signature= func(F_00406c1c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406c1c(???)
{
  (void) STORE(local + 72, InitValue(initial_value_of_edi));
  (void) STORE(local + 76, InitValue(initial_value_of_esi));
  (void) STORE(local + 80, InitValue(initial_value_of_ebx));
  (void) STORE(local + 84, InitValue(initial_value_of_ecx));
  (void) STORE(local + 88, InitValue(initial_value_of_ebp));
  reg_ab = ARG_1;
  (void) STORE(local + 44, ARG_0);
  (void) STORE(local + 48, -1073741824);
  (void) STORE(local + 52, 0);
  (void) STORE(local + 56, 0);
  (void) STORE(local + 60, 2);
  (void) STORE(local + 64, 128);
  (void) STORE(local + 68, 0);
  reg_result = F_00409936();
  if(reg_result  !=  0) {
    reg_ad = F_00406bcc();
    (void) STORE(local + 32, reg_ad);
    (void) STORE(local + 36, local + 84);
    (void) STORE(local + 40, 0);
    reg_ae = F_00402250();
    (void) STORE(local + 24, reg_result);
    (void) STORE(local + 28, reg_ad);
    (void) STORE(local + 32, reg_ae);
    (void) F_00409a1a();
    (void) STORE(local + 12, reg_ab);
    (void) STORE(local + 16, local + 84);
    (void) STORE(local + 20, 0);
    reg_ag = F_00402250();
    (void) STORE(local + 12, reg_ag);
    (void) STORE(local + 4, reg_result);
    (void) STORE(local + 8, reg_ab);
    (void) F_00409a1a();
    (void) STORE(local, reg_result);
    reg_result = F_00409930();
  }
  return reg_result;
}

// addr = 00406c98.0
// signature= func(F_00406c98, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406c98(???)
{
  (void) STORE(local + 12, 0);
  reg_ae = F_004099a2();
  if((NARROW(UNSIGNED_EXTEND(NARROW(reg_ae / 0x10000)) / 256) & 128)  ==  0) {
    reg_result = 0x2000;
  } else {
    (void) STORE(local + 4, 4222084);
    (void) STORE(local + 8, local + 12);
    reg_ab = F_00409954();
    (void) STORE(local, reg_ab);
    (void) F_00409a20();
    if(LOAD(local)  ==  0) {
      reg_result = 0x1000;
    } else {
      reg_result = 0x2000;
    }
  }
  return reg_result;
}

// addr = 00406cdc.0
// signature= func(F_00406cdc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406cdc(???)
{
  reg_result = InitValue(initial_value_of_eax);
  (void) STORE(local + 204, InitValue(initial_value_of_ebp));
  reg_ar = g_0x0040ba04  ==  0;
  (void) STORE(local + 64, InitValue(initial_value_of_esi));
  (void) STORE(local + 68, InitValue(initial_value_of_ebx));
  reg_au = ARG_0;
  if(g_0x0040ba00  ==  0 && g_0x0040bbf4  !=  0 && reg_ar) {
    (void) STORE(local + 52, 0);
    (void) STORE(local + 56, local + 72);
    (void) STORE(local + 60, 128);
    (void) F_00409972();
    (void) STORE(local + 44, local + 72);
    (void) STORE(local + 48, 92);
    reg_as = F_00406acc();
    if(reg_as  ==  0) {
      (void) STORE(local + 44, local + 72);
      (void) STORE(local + 48, 58);
      reg_av = F_00406acc();
      if(reg_av  ==  0) {
        reg_var1 = local + 72;
        reg_var2 = 1;
      } else {
        reg_var2 = 0;
      }
    } else {
      reg_var2 = 0;
    }
    while(reg_var2  ==  0) {
      reg_af = F_00406acc();
      reg_var1 = reg_af + 1;
      reg_var2 = 1;
    }
    reg_at = F_00406c98();
    (void) STORE(local + 36, 0);
    (void) STORE(local + 40, reg_au);
    (void) STORE(local + 44, reg_var1);
    (void) STORE(local + 48, reg_at | 65552);
    reg_result = F_00409a26();
  } else {
    if(g_0x0040ba00  ==  -1 || g_0x0040ba00  ==  0 && g_0x0040bbf4  ==  0 && reg_ar) {
      if(g_0x0040ba00  ==  0 && g_0x0040bbf4  ==  0 && reg_ar) {
        (void) STORE(local + 60, -12);
        reg_aq = F_00409996();
        (void) STORE(local + 40, reg_aq);
        (void) STORE(local + 44, 4241928);
        (void) STORE(local + 48, 2);
        (void) STORE(local + 52, local + 200);
        (void) STORE(local + 56, 0);
        (void) F_00409a1a();
        (void) STORE(local + 28, reg_au);
        (void) STORE(local + 32, local + 200);
        (void) STORE(local + 36, 0);
        reg_ab = F_00402250();
        (void) STORE(local + 20, reg_aq);
        (void) STORE(local + 24, reg_au);
        (void) STORE(local + 28, reg_ab);
        (void) F_00409a1a();
        (void) STORE(local + 12, local + 200);
        (void) STORE(local + 16, 0);
        (void) STORE(local + 4, 4241931);
        (void) STORE(local + 8, 2);
        (void) STORE(local, reg_aq);
        reg_result = F_00409a1a();
      }
    } else {
      if(g_0x0040ba00  !=  -1 && g_0x0040ba00  !=  0) {
        (void) STORE(local + 60, ARG_0);
        (void) intern_redirectCall(g_0x0040ba00);
      }
      reg_result = g_0x0040ba04;
      if(reg_result  !=  0 && g_0x0040ba04  !=  -1 && LOAD(reg_result)  !=  0) {
        (void) STORE(local + 56, reg_result);
        (void) STORE(local + 60, ARG_0);
        reg_result = F_00406c1c();
      }
    }
  }
  return reg_result;
}

// addr = 00406e08.0
// signature= func(F_00406e08, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406e08(???)
{
  (void) F_00406cdc();
  reg_result = F_00406f40();
  return reg_result;
}

// addr = 00406eac.0
// signature= func(F_00406eac, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406eac(???)
{
  (void) F_00406cdc();
  reg_result = F_00406f40();
  return reg_result;
}

// addr = 00406ec0.0
// signature= func(F_00406ec0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406ec0(???)
{
  (void) F_004079d0();
  reg_result = F_00406eac();
  return reg_result;
}

// addr = 00406ed4.0
// signature= func(F_00406ed4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406ed4(???)
{
  reg_ae = ARG_0;
  if(ARG_0  ==  0) {
    if(g_0x0040ba58  !=  0) {
      (void) intern_redirectCall(g_0x0040ba58);
    }
    (void) F_00407b2c();
    reg_result = intern_redirectCall(g_0x0040ba5c);
  } else {
    reg_result = 0;
    (void) STORE(&g_0x0040ba58, reg_result);
  }
  if(ARG_1  ==  0) {
    if(reg_ae  ==  0) {
      (void) intern_redirectCall(g_0x0040ba60);
      (void) intern_redirectCall(g_0x0040ba64);
    }
    reg_result = F_00407a40();
  }
  return reg_result;
}

// addr = 00406f28.0
// signature= func(F_00406f28, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406f28(???)
{
  reg_result = F_00406ed4();
  return reg_result;
}

// addr = 00406f40.0
// signature= func(F_00406f40, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406f40(???)
{
  reg_result = F_00406ed4();
  return reg_result;
}

// addr = 00406f78.0
// signature= func(F_00406f78, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406f78(???)
{
  reg_ab = ARG_1;
  (void) STORE(&g_0x0040bb18, LOAD(ARG_0));
  reg_result = LOAD(reg_ab);
  (void) STORE(&g_0x0040bb1c, LOAD(reg_ab));
  return reg_result;
}

// addr = 00406fbc.0
// signature= func(F_00406fbc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00406fbc(???)
{
  reg_ab = ARG_1;
  (void) STORE(&g_0x0040ba68, ARG_0);
  (void) STORE(&g_0x0040ba6c, reg_ab);
  reg_result = ARG_3;
  (void) STORE(&g_0x0040ba70, ARG_2);
  (void) STORE(&g_0x0040ba74, reg_result);
  return reg_result;
}

// addr = 004070a0.0
// signature= func(F_004070a0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004070a0(???)
{
  reg_ad = ARG_0;
  if(g_0x0040cc80  ==  g_0x0040ccb4) {
    (void) STORE(&g_0x0040cc80, g_0x0040cc80 + 16);
    reg_ab = F_00401400();
    (void) STORE(&g_0x0040cc7c, reg_ab);
    if(reg_ab  ==  0) {
      (void) F_00406e08();
    }
  }
  if(ARG_1  ==  0) {
    reg_var2 = reg_ad;
  } else {
    reg_ai = F_00402250();
    reg_var1 = reg_ai + 1;
    reg_aj = F_004013e0();
    if(reg_aj  ==  0) {
      reg_var1 = 4242086;
      (void) F_00406e08();
    }
    reg_var2 = reg_aj;
    ASSERT UNDEF  !=  0;
    reg_ac = intern_indexOf(reg_ad, 0, reg_var1 | -1);
    ASSERT UNDEF  !=  0;
    (void) intern_memcpy(reg_ad, reg_aj, (EXTRACT(reg_ac, pos) + 1) / 4 * 4);
    ASSERT UNDEF  !=  0;
    (void) intern_memcpy((EXTRACT(reg_ac, pos) + 1) / 4 * 4 + reg_ad, (EXTRACT(reg_ac, pos) + 1) / 4 * 4 + reg_aj, EXTRACT(reg_ac, pos) + 1 & 3);
  }
  reg_result = g_0x0040cc7c;
  (void) STORE(g_0x0040cc7c + g_0x0040ccb4 * 4, reg_var2);
  (void) STORE(&g_0x0040ccb4, g_0x0040ccb4 + 1);
  return reg_result;
}

// addr = 004072c4.0
// signature= func(F_004072c4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004072c4(???)
{
  reg_aa = ARG_1;
  reg_ad = ARG_0;
  if(LOAD(LOAD(ARG_1))  !=  92 || LOAD(LOAD(ARG_1) + 1)  ==  92 && g_0x0040bacc  ==  0 || LOAD(LOAD(ARG_1) + 1)  !=  34 && LOAD(LOAD(ARG_1) + 1)  !=  92) {
    reg_ae = ARG_1;
    if((LOAD(WIDEN(LOAD(LOAD(ARG_1))) + 4246101) & 4)  !=  0 && LOAD(LOAD(ARG_1) + 1)  !=  0) {
      (void) STORE(LOAD(ARG_0), LOAD(LOAD(ARG_1)));
      (void) STORE(reg_ae, LOAD(reg_ae) + 1);
      (void) STORE(reg_ad, LOAD(reg_ad) + 1);
    }
    reg_ac = ARG_1;
    (void) STORE(LOAD(ARG_0), LOAD(LOAD(ARG_1)));
    (void) STORE(reg_ac, LOAD(reg_ac) + 1);
  } else {
    if(LOAD(LOAD(ARG_1))  ==  92 && LOAD(LOAD(ARG_1) + 1)  ==  34) {
      (void) STORE(LOAD(ARG_0), 34);
      (void) STORE(reg_aa, LOAD(reg_aa) + 2);
    } else {
      (void) STORE(LOAD(ARG_0), 92);
      (void) STORE(reg_aa, LOAD(reg_aa) + 2);
    }
  }
  reg_result = ARG_1;
  (void) STORE(ARG_0, LOAD(ARG_0) + 1);
  return reg_result;
}

// addr = 004074e8.0
// signature= func(F_004074e8, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004074e8(???)
{
  reg_ac = ARG_1;
  if(LOAD(LOAD(ARG_1))  ==  92 && LOAD(LOAD(ARG_1) + 2)  ==  34) {
    (void) STORE(LOAD(ARG_0), 34);
    (void) STORE(reg_ac, LOAD(reg_ac) + 4);
  } else if(g_0x0040bacc  ==  0 || LOAD(LOAD(ARG_1))  !=  92 || LOAD(LOAD(ARG_1) + 2)  !=  92) {
    reg_aa = ARG_1;
    (void) STORE(LOAD(ARG_0), LOAD(LOAD(ARG_1)));
    (void) STORE(reg_aa, LOAD(reg_aa) + 2);
  } else {
    (void) STORE(LOAD(ARG_0), 92);
    (void) STORE(reg_ac, LOAD(reg_ac) + 4);
  }
  reg_result = ARG_1;
  (void) STORE(ARG_0, LOAD(ARG_0) + 2);
  return reg_result;
}

// addr = 004075dc.0
// signature= func(F_004075dc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004075dc(???)
{
  if(g_0x0040cc90  ==  0) {
    if(g_0x0040ccb0  ==  0) {
      reg_at = F_0040995a();
      (void) STORE(&g_0x0040ccb0, reg_at);
      if(reg_at  ==  0) {
        (void) F_00406e08();
      }
    }
    reg_var1 = 0;
    while(1) {
      reg_au = F_00402250();
      if(reg_au  ==  0) {
        break;
      }
      reg_var1++;
    }
    reg_bl = F_004013e0();
    (void) STORE(&g_0x0040cc94, reg_bl);
    if(reg_bl  ==  0) {
      reg_var10 = 0;
    } else {
      (void) F_0040213c();
      reg_var10 = 1;
    }
  } else {
    reg_var2 = 0;
    reg_var3 = g_0x0040cc90;
    while(LOAD(reg_var3)  !=  0) {
      reg_bs = F_00402250();
      if(reg_bs  ==  0) {
        reg_var2--;
      }
      reg_var2++;
      reg_var3 += 4;
    }
    reg_var10 = 1;
  }
  if(reg_var10  ==  0) {
    reg_result = 0;
  } else {
    (void) STORE(&g_0x0040cc98, reg_var1 + 4);
    reg_bk = F_004011e0();
    if(reg_bk  ==  0) {
      reg_result = 0;
    } else {
      if(g_0x0040cc90  ==  0) {
        reg_var5 = g_0x0040cc94;
        reg_var4 = reg_bk;
        while(1) {
          reg_ac = F_00402250();
          if(reg_ac  ==  0) {
            break;
          }
          (void) STORE(reg_var4, reg_var5);
          reg_var4 += 4;
          reg_var5 += reg_ac + 1;
        }
      } else {
        reg_var7 = 0;
        reg_var8 = g_0x0040cc90;
        reg_var6 = reg_bk;
        while(LOAD(reg_var8)  !=  0) {
          reg_aw = F_00402250();
          if(reg_aw  ==  0) {
            reg_var7--;
            reg_var9 = reg_var6 + -4;
          } else {
            reg_var9 = reg_var6;
            (void) STORE(reg_var6, LOAD(reg_var8));
          }
          reg_var6 = reg_var9 + 4;
          reg_var7++;
          reg_var8 += 4;
        }
      }
      if(g_0x0040cc90  !=  0) {
        (void) F_004013f0();
      }
      reg_bf = F_004011e0();
      reg_result = 1;
      (void) STORE(&g_0x0040cc90, reg_bf);
    }
  }
  return reg_result;
}

// addr = 00407748.0
// signature= func(F_00407748, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00407748(???)
{
  reg_result = 0;
  reg_var1 = 4242368;
  while(LOAD(reg_var1)  !=  ARG_0) {
    reg_result++;
    reg_var1 += 4;
    if(reg_result  >=  10) {
      reg_result = reg_result | -1;
      break;
    }
  }
  return reg_result;
}

// addr = 004079d0.0
// signature= func(F_004079d0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004079d0(???)
{
  reg_af = ARG_0;
  reg_ae = F_00407748();
  if(reg_ae  ==  -1) {
    reg_result = 1;
  } else {
    reg_ab = LOAD(reg_ae * 4 + 4242328);
    if(LOAD(reg_ae * 4 + 4242328)  !=  0 && LOAD(reg_ae * 4 + 4242328)  !=  1) {
      (void) STORE(reg_ae * 4 + 4242328, 0);
      (void) intern_redirectCall(reg_ab);
    } else if(LOAD(reg_ae * 4 + 4242328)  !=  1 && reg_af  ==  22 && !BIT_TEST(31, reg_af + -16) && !BIT_TEST(31, reg_af + -18) || LOAD(reg_ae * 4 + 4242328)  !=  0 && LOAD(reg_ae * 4 + 4242328)  !=  1 && reg_af  ==  22) {
      (void) F_00406eac();
    } else if(LOAD(reg_ae * 4 + 4242328)  !=  1 && reg_af  !=  20 && !BIT_TEST(31, reg_af + -18) && !BIT_TEST(31, reg_af + -16) || LOAD(reg_ae * 4 + 4242328)  !=  0 && LOAD(reg_ae * 4 + 4242328)  !=  1) {
      (void) F_00406f40();
    }
    reg_result = 0;
  }
  return reg_result;
}

// addr = 00407a40.0
// signature= func(F_00407a40, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00407a40(???)
{
  reg_result = F_0040993c();
  return reg_result;
}

// addr = 00407a50.0
// signature= func(F_00407a50, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00407a50(???)
{
  return 0;
}

// addr = 00407a54.0
// signature= func(F_00407a54, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00407a54(???)
{
  return 0;
}

/* The decompilation of 0x00407a58 / F_00407a58 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L9 in reg_d1 = LOAD(ADD(reg_pp9, SEGMENT2ADDR(reg_pp8), 12)): The current setter is reg_zj4 while [reg_pp8] was found. Related expressions are [reg_zj8, reg_pp14, reg_pp29, reg_zj7, reg_pp8, reg_zj9, reg_zj4, reg_pp10, reg_zj6, reg_zj5, reg_zj0, reg_pp21] */

// addr = 00407b2c.0
// signature= func(F_00407b2c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00407b2c(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(g_0x0040bbf8  ==  0) {
    (void) STORE(&g_0x0040bbf8, 1);
    (void) F_00407a58();
    (void) F_00407a58();
    reg_result = F_00407a54();
    reg_ag = reg_result;
    if(reg_result  !=  0) {
      reg_result = F_00407a58();
      reg_var2 = 0;
      reg_var1 = reg_ag + 4;
      while(1) {
        reg_ab = F_00407a54();
        if(reg_var2  >=  LOAD(reg_ab)) {
          break;
        }
        reg_result = intern_redirectCall(LOAD(LOAD(reg_var1) + 24));
        reg_var2++;
        reg_var1 += 4;
      }
    }
  }
  return reg_result;
}

/* The decompilation of 0x00407d1c / F_00407d1c failed: java.lang.RuntimeException: Can't find a setter for reg_44_local in block 0 */

// addr = 00407d3c.0
// signature= func(F_00407d3c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00407d3c(???)
{
  reg_result = F_004099ea();
  return reg_result;
}

/* The decompilation of 0x00407d44 / F_00407d44 failed: java.lang.AssertionError */

/* The decompilation of 0x00407d54 / F_00407d54 failed: java.lang.AssertionError */

/* The decompilation of 0x00407d64 / F_00407d64 failed: java.lang.AssertionError */

/* The decompilation of 0x00407d78 / F_00407d78 failed: java.lang.AssertionError */

/* The decompilation of 0x00407d80 / F_00407d80 failed: java.lang.AssertionError */

/* The decompilation of 0x00407db7 / F_00407db7 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 00407dbe.0
// signature= func(F_00407dbe, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00407dbe(???)
{
  reg_ae = ARG_0;
  reg_result = F_004013e0();
  if(reg_result  ==  0) {
    if(reg_result  ==  0 && reg_ae  >  128) {
      reg_var1 = 0;
    } else {
      reg_ad = F_00401140();
      if((LOAD(reg_ad + 4) & 1)  ==  0) {
        reg_var1 = 1;
      } else {
        reg_var1 = 0;
      }
    }
    if(reg_var1  ==  0) {
      (void) F_00406ec0();
    }
    reg_aj = F_00401140();
    (void) STORE(reg_aj + 4, LOAD(reg_aj + 4) | 1);
    reg_ac = F_00401140();
    reg_result = LOAD(reg_ac + 20);
  }
  return reg_result;
}

// addr = 00407e35.0
// signature= func(F_00407e35, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00407e35(???)
{
  (void) STORE(&var_28_local, InitValue(initial_value_of_ecx));
  reg_bp = ARG_2;
  reg_ap = ARG_0;
  reg_bb = F_00402a4c();
  if(reg_bb  ==  0) {
    (void) STORE(&var_28_local, UNSIGNED_EXTEND(LOAD(reg_ap + 4)));
    reg_var1 = NARROW(UNSIGNED_EXTEND(LOAD(reg_bp + 4)));
    reg_var2 = NARROW(UNSIGNED_EXTEND(LOAD(reg_bp + 4)) / 256);
    if((reg_var1 & 32)  ==  0) {
      reg_var5 = 0;
      reg_var6 = 1;
      reg_var7 = 1;
    } else {
      reg_be = F_00402a4c();
      if(reg_be  ==  0) {
        reg_var1 = NARROW(UNSIGNED_EXTEND(LOAD(LOAD(reg_bp + 8) + 4)));
        reg_var2 = NARROW(UNSIGNED_EXTEND(LOAD(LOAD(reg_bp + 8) + 4)) / 256);
        if((reg_var1 & 16)  ==  0) {
          reg_var6 = 0;
        } else {
          reg_bd = F_00402a4c();
          if(reg_bd  ==  0) {
            reg_var5 = 0;
          } else {
            reg_var5 = 1;
          }
          reg_var6 = 1;
        }
        reg_var7 = 1;
      } else {
        reg_var7 = 0;
      }
    }
    if(reg_var7  !=  0 && reg_var6  !=  0 && reg_var5  ==  0) {
      if((LOAD(&var_28_local + 1) & 1)  !=  0 && (LOAD(&ARG_3) & 1)  ==  0 && (reg_var1 & 16)  !=  0 && (reg_var1 & 64)  !=  0 && (reg_var2 & 1)  ==  0 && (var_28_local & 16)  !=  0 || (LOAD(&var_28_local + 1) & 2)  !=  0 && (LOAD(&ARG_3) & 1)  ==  0 && (reg_var1 & 16)  !=  0 && (reg_var1 & 64)  !=  0 && (reg_var2 & 2)  ==  0 && (var_28_local & 16)  !=  0) {
        reg_var3 = 2;
        reg_var4 = 0;
      } else if((LOAD(&ARG_3) & 1)  ==  0 && (var_28_local & 16)  !=  0 && (reg_var1 & 16)  !=  0 && (reg_var1 & 64)  !=  0) {
        reg_var4 = 1;
      } else {
        if((reg_var1 & 16)  ==  0 || (LOAD(&ARG_3) & 1)  ==  0 && (reg_var1 & 64)  ==  0 && (var_28_local & 16)  !=  0) {
          reg_var3 = 2;
        } else if((LOAD(&ARG_3) & 1)  ==  0) {
          reg_var3 = 1;
        } else {
          reg_var3 = 0;
        }
        reg_var4 = 0;
      }
      if(reg_var4  !=  0) {
        reg_result = 1;
      } else if(reg_var3  ==  0) {
        reg_result = 1;
      } else if(reg_var3  ==  1) {
        reg_result = 0;
      } else {
        reg_result = 0;
      }
    } else {
      if(reg_var7  ==  0) {
        reg_result = 1;
      } else if(reg_var6  ==  0) {
        reg_result = 0;
      } else {
        reg_result = 1;
      }
    }
  } else {
    reg_result = 1;
  }
  return reg_result;
}

// addr = 00407efb.0
// signature= func(F_00407efb, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00407efb(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if((NARROW(ARG_3 / 256) & 1)  ==  0 && (NARROW(ARG_3) & 32)  !=  0) {
    reg_result = F_00406b6c();
  }
  reg_aj = ARG_3;
  if((NARROW(ARG_3) & 128)  !=  0) {
    reg_result = F_00406b6c();
  }
  if((NARROW(reg_aj / 256) & 16)  !=  0 && (reg_aj & 7)  ==  1) {
    reg_result = intern_redirectCall(ARG_2);
  } else if((NARROW(reg_aj / 256) & 16)  !=  0 && (reg_aj & 7)  ==  2) {
    reg_result = intern_redirectCall(ARG_2);
  } else if((NARROW(reg_aj / 256) & 16)  !=  0 && (reg_aj & 7)  ==  3) {
    reg_result = intern_redirectCall(ARG_2);
  } else if((NARROW(reg_aj / 256) & 16)  !=  0 && (reg_aj & 7)  ==  5) {
    reg_result = intern_redirectCall(ARG_2);
  } else if((NARROW(reg_aj / 256) & 16)  !=  0) {
    reg_result = 4242740;
    if(reg_result  !=  0) {
      reg_result = F_00406b6c();
    }
  } else if((reg_aj & 7)  ==  1) {
    reg_result = intern_redirectCall(ARG_2);
  } else if((reg_aj & 7)  ==  2) {
    reg_result = intern_redirectCall(ARG_2);
  } else if((reg_aj & 7)  ==  3) {
    reg_result = intern_redirectCall(ARG_2);
  } else if((reg_aj & 7)  ==  5) {
    reg_result = intern_redirectCall(ARG_2);
  } else {
    reg_result = F_00406b6c();
  }
  return reg_result;
}

// addr = 00408009.0
// signature= func(F_00408009, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00408009(???)
{
  reg_var1 = ARG_0;
  reg_result = 0;
  if(reg_var1  !=  0) {
    while(1) {
      reg_ag = LOAD(reg_var1);
      reg_var1++;
      if(reg_ag  ==  0) {
        break;
      }
      reg_result++;
    }
  }
  return reg_result;
}

// addr = 00408021.0
// signature= func(F_00408021, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00408021(???)
{
  reg_result = F_004099cc();
  return reg_result;
}

// addr = 0040803e.0
// signature= func(F_0040803e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040803e(???)
{
  reg_aj = ARG_4;
  reg_result = g_0x0040cce4;
  if(LOAD(reg_result)  ==  2) {
    (void) F_00402938();
    (void) F_00408009();
    reg_result = F_00408021();
  }
  if((NARROW(reg_aj) & 128)  !=  0) {
    reg_result = F_00406b6c();
  }
  if((reg_aj & 7)  ==  1) {
    reg_result = intern_redirectCall(ARG_3);
  } else if((reg_aj & 7)  ==  2) {
    reg_result = intern_redirectCall(ARG_3);
  } else if((reg_aj & 7)  ==  3) {
    reg_result = intern_redirectCall(ARG_3);
  } else if((reg_aj & 7)  ==  5) {
    reg_result = intern_redirectCall(ARG_3);
  } else {
    reg_result = F_00406b6c();
  }
  return reg_result;
}

// addr = 0040810e.0
// signature= func(F_0040810e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040810e(???)
{
  reg_result = InitValue(initial_value_of_eax);
  reg_ai = ARG_2;
  if((NARROW(ARG_2) & 128)  !=  0) {
    reg_result = F_00406b6c();
  }
  if((reg_ai & 7)  ==  1) {
    reg_result = intern_redirectCall(ARG_1);
  } else if((reg_ai & 7)  ==  2) {
    reg_result = intern_redirectCall(ARG_1);
  } else if((reg_ai & 7)  ==  3) {
    reg_result = intern_redirectCall(ARG_1);
  } else if((reg_ai & 7)  ==  5) {
    reg_result = intern_redirectCall(ARG_1);
  } else {
    reg_result = F_00406b6c();
  }
  return reg_result;
}

// addr = 0040818c.0
// signature= func(F_0040818c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040818c(???)
{
  (void) STORE(local + 128, InitValue(initial_value_of_ebp));
  (void) STORE(local + 52, InitValue(initial_value_of_edi));
  (void) STORE(local + 56, InitValue(initial_value_of_esi));
  (void) STORE(local + 60, InitValue(initial_value_of_ebx));
  (void) F_00402414();
  reg_ae = ARG_0;
  reg_ag = F_00401140();
  (void) STORE(reg_ag + 4, LOAD(reg_ag + 4) | 2);
  reg_ac = F_00401140();
  reg_ao = ARG_0;
  (void) STORE(reg_ac + 16, reg_ae  ==  0 ? 0 : reg_ae + UNSIGNED_EXTEND(LOAD(reg_ae + 6)));
  reg_am = F_00401140();
  (void) STORE(reg_am + 12, ARG_6);
  reg_ad = F_00401140();
  (void) STORE(reg_ad + 8, ARG_7);
  (void) STORE(local + 88, reg_ao);
  reg_an = UNSIGNED_EXTEND(LOAD(reg_ao + 4));
  reg_ak = LOAD(reg_ao);
  (void) STORE(local + 84, (NARROW(UNSIGNED_EXTEND(LOAD(reg_ao + 4))) & 2)  ==  0 ? 0 : LOAD(reg_ao + 12));
  if((NARROW(reg_an) & 48)  !=  0) {
    (void) STORE(local + 88, LOAD(LOAD(local + 88) + 8));
  }
  reg_aj = ARG_0;
  (void) STORE(local + 48, reg_ak + 82);
  reg_ai = F_00407dbe();
  (void) STORE(local + 80, reg_ai);
  (void) STORE(LOAD(local + 80) + 24, NARROW(reg_an));
  (void) STORE(LOAD(local + 80) + 26, LOAD(local + 84));
  (void) STORE(LOAD(local + 80) + 69, 0);
  (void) STORE(LOAD(local + 80) + 12, ARG_5);
  (void) STORE(LOAD(local + 80) + 16, reg_ak);
  (void) STORE(LOAD(local + 80) + 20, LOAD(local + 88));
  (void) STORE(LOAD(local + 80) + 28, 4226568);
  (void) STORE(LOAD(local + 80) + 32, ARG_3);
  (void) STORE(LOAD(local + 80) + 36, ARG_4);
  (void) STORE(LOAD(local + 80) + 4, reg_aj);
  (void) STORE(LOAD(local + 80) + 40, 0);
  (void) STORE(LOAD(local + 80) + 44, 0);
  (void) STORE(LOAD(local + 80) + 52, ARG_6);
  (void) STORE(LOAD(local + 80) + 56, ARG_7);
  (void) STORE(LOAD(local + 80) + 68, 1);
  (void) STORE(LOAD(local + 80) + 8, ARG_2);
  (void) STORE(LOAD(local + 80), 0);
  (void) STORE(local + 40, reg_ai + 82);
  (void) STORE(local + 44, ARG_1);
  (void) STORE(local + 48, reg_ak);
  (void) F_0040213c();
  if(LOAD(g_0x0040cce4)  ==  1 || LOAD(g_0x0040cce4)  ==  2) {
    (void) STORE(local + 48, reg_aj);
    reg_af = F_00402938();
    (void) STORE(local + 24, LOAD(ARG_11));
    (void) STORE(local + 28, LOAD(ARG_11 + 4));
    (void) STORE(local + 32, LOAD(ARG_11 + 8));
    (void) STORE(local + 36, LOAD(ARG_11 + 12));
    (void) STORE(local + 40, LOAD(ARG_11 + 16));
    (void) STORE(local + 44, LOAD(ARG_11 + 20));
    (void) STORE(local + 48, LOAD(ARG_11 + 24));
    reg_ah = LOAD(LOAD(local + 80) + 68)  ==  0 ? LOAD(LOAD(local + 80) + 64) : LOAD(local + 80) + 82;
    (void) STORE(local + 16, reg_af);
    (void) STORE(local + 20, reg_ah);
    reg_al = F_00408009();
    (void) STORE(local + 12, reg_af);
    (void) STORE(local + 16, reg_al);
    (void) STORE(local + 4, 11);
    (void) STORE(local + 8, ARG_8 + -5);
    (void) STORE(local, 1);
    (void) F_00408021();
  }
  if((LOAD(local + 84) & 1)  !=  0) {
    if(ARG_3  ==  0) {
      (void) STORE(local + 40, 4242891);
      (void) STORE(local + 44, 4242900);
      (void) STORE(local + 48, 1093);
      (void) F_00406b6c();
    }
    (void) STORE(local + 108, 8);
    (void) STORE(local + 36, LOAD(local + 80) + 82);
    (void) STORE(local + 40, ARG_1);
    (void) STORE(local + 44, ARG_3);
    (void) STORE(local + 48, ARG_4);
    (void) STORE(local + 76, g_0x0040cce0);
    (void) F_00407efb();
    (void) STORE(local + 108, 0);
    (void) STORE(&g_0x0040cce0, LOAD(local + 76));
  }
  reg_ab = F_00401140();
  (void) STORE(local + 36, 250608334);
  (void) STORE(local + 40, 1);
  (void) STORE(local + 44, 3);
  (void) STORE(local + 48, local + 64);
  (void) STORE(local + 64, LOAD(reg_ab + 16));
  (void) STORE(local + 68, ARG_8);
  (void) STORE(local + 72, LOAD(local + 80));
  (void) F_004099cc();
  reg_result = LOAD(local + 92);
  (void) STORE(&g_0x00000000, LOAD(local + 92));
  return reg_result;
}

// addr = 0040847c.0
// signature= func(F_0040847c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040847c(???)
{
  (void) STORE(local + 80, InitValue(initial_value_of_ebp));
  reg_var1 = ARG_1;
  if(reg_var1  ==  0) {
    reg_var1 = local;
    (void) STORE(local + 16, 0);
    (void) STORE(local + 4, 2);
    (void) STORE(local, 38);
  }
  (void) STORE(reg_var1 + 4, LOAD(reg_var1 + 4) | 2);
  reg_result = F_00402f9a();
  return reg_result;
}

/* The decompilation of 0x004084bb / F_004084bb failed: java.lang.RuntimeException: Can't find a setter for reg_36_local in block 3 */

// addr = 00408530.0
// signature= func(F_00408530, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00408530(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(ARG_0 + 68)  !=  0) {
    if((LOAD(ARG_0 + 26) & 2)  !=  0) {
      reg_af = g_0x0040cce0;
      reg_result = F_004084bb();
      (void) STORE(&g_0x0040cce0, reg_af);
    }
    (void) STORE(ARG_0 + 68, 0);
  }
  if(LOAD(ARG_0 + 69)  !=  0) {
    reg_ag = LOAD(ARG_0 + 60);
    if(LOAD(ARG_0 + 60)  ==  0) {
      reg_result = F_00406b6c();
    }
    if((LOAD(reg_ag + 4) & 2)  !=  0 && (LOAD(reg_ag + 12) & 2)  !=  0) {
      reg_result = F_004084bb();
    }
    (void) STORE(ARG_0 + 69, 0);
  }
  return reg_result;
}

// addr = 004085b8.0
// signature= func(F_004085b8, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004085b8(???)
{
  reg_af = F_00401140();
  if(LOAD(reg_af)  ==  0) {
    (void) F_00406b6c();
  }
  reg_ad = F_00401140();
  reg_ag = LOAD(reg_ad);
  reg_aa = F_00401140();
  (void) STORE(reg_aa, LOAD(reg_ag));
  reg_ae = LOAD(reg_ag + 40);
  reg_ac = g_0x00000000;
  if(g_0x00000000  ==  0) {
    (void) F_00406b6c();
  }
  if(reg_ac  !=  LOAD(reg_ag + 40)) {
    (void) F_00406b6c();
  }
  (void) STORE(reg_ae + 16, LOAD(LOAD(reg_ae + 8) + UNSIGNED_EXTEND(LOAD(reg_ae + 16))));
  (void) F_00408530();
  (void) intern_redirectCall(LOAD(reg_ag + 28));
  if(LOAD(g_0x0040cce4)  ==  2) {
    (void) F_00408021();
  }
  reg_result = LOAD(InitStackPointer);
  (void) STORE(LOAD(reg_ae + 12) + -4, LOAD(InitStackPointer));
  return reg_result;
}

/* The decompilation of 0x004086a9 / F_004086a9 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L33 in if(CMP(AND(LOAD(ADD(reg_pp33, SEGMENT2ADDR(reg_pp32), 12)), 1), ==, 0)) goto L37: The current setter is reg_e7 while [reg_pp33] was found. Related expressions are [reg_e1, reg_pp50, reg_e7, reg_pp31, reg_pp33, reg_e3, reg_e2, reg_pp18, reg_e4] */

/* The decompilation of 0x0040897d / F_0040897d failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L1 in reg_f1 = UNSIGNED_EXTEND(LOAD(ADD(reg_a2, reg_d3, SEGMENT2ADDR(reg_pp1)))): The current setter is reg_zj1 while [reg_pp1] was found. Related expressions are [reg_zj8, reg_zj7, reg_pp7, reg_pp11, reg_zj0, reg_pp1, reg_zj2, reg_zj1, reg_pp17] */

// addr = 00408b17.0
// signature= func(F_00408b17, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00408b17(???)
{
  reg_var1 = ARG_0 + 8;
  while(1) {
    if(LOAD(reg_var1)  ==  0) {
      reg_result = 0;
      break;
    }
    if(LOAD(reg_var1 + 4)  ==  0) {
      reg_result = reg_var1;
      break;
    }
    reg_ah = F_00407e35();
    if(reg_ah  !=  0) {
      reg_result = reg_var1;
      break;
    }
    reg_var1 += 20;
  }
  return reg_result;
}

/* The decompilation of 0x00408b5c / F_00408b5c failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L11 in reg_a12 = UNSIGNED_EXTEND(LOAD(ADD(reg_e1, reg_pp11, SEGMENT2ADDR(reg_pp10)))): The current setter is reg_f2 while [reg_pp11] was found. Related expressions are [reg_f0, reg_f2, reg_pp11, reg_f4, reg_pp44, reg_f3, reg_f6, reg_f5] */

/* The decompilation of 0x00408eb9 / F_00408eb9 failed: java.lang.RuntimeException: Can't find a setter for reg_36_local in block 14 */

// addr = 00408fb0.0
// signature= func(F_00408fb0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00408fb0(???)
{
  reg_result = InitValue(initial_value_of_eax);
  reg_var1 = ARG_2;
  while(1) {
    reg_ah = reg_var1 + -12;
    if(reg_var1 + -12  <  ARG_3) {
      break;
    }
    reg_result = LOAD(reg_var1 + -8) + ARG_0;
    if(ARG_5  !=  0) {
      reg_result = LOAD(reg_result);
    }
    reg_var1 += -12;
    if((LOAD(LOAD(reg_ah) + 12) & 2)  ==  0) {
      continue;
    }
    reg_result = F_00408ffb();
  }
  return reg_result;
}

/* The decompilation of 0x00408ffb / F_00408ffb failed: java.lang.RuntimeException: Unknown line 004091f3.0+3 signedMult448 eax,ds:[esi+0x20],etp,eup with code 'signedMult448 eax,ds:[esi+0x20],etp,eup' and baseCommand 'signedmult' */

/* The decompilation of 0x004092ab / F_004092ab failed: java.lang.RuntimeException: Unknown line 00409326.0+3 signedMult448 eax,ss:[ebp-0x4],etp,eup with code 'signedMult448 eax,ss:[ebp-0x4],etp,eup' and baseCommand 'signedmult' */

// addr = 004093cf.0
// signature= func(F_004093cf, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004093cf(???)
{
  reg_ag = ARG_1;
  reg_ae = ARG_0;
  reg_af = LOAD(ARG_1);
  if((LOAD(LOAD(ARG_1) + 4) & 2)  ==  0) {
    (void) F_00406b6c();
  }
  if((LOAD(reg_af + 12) & 80)  !=  80) {
    reg_result = reg_ae;
  } else if(LOAD(reg_af + 8)  ==  -1) {
    reg_result = reg_ae;
  } else {
    reg_ai = LOAD((ARG_2  ==  0 ? LOAD(LOAD(reg_af + 8) + reg_ae) : ARG_2) + -8) * -1 + ARG_0;
    reg_ah = LOAD((ARG_2  ==  0 ? LOAD(LOAD(reg_af + 8) + reg_ae) : ARG_2) + -4) * -1 + (ARG_2  ==  0 ? LOAD(LOAD(reg_af + 8) + reg_ae) : ARG_2);
    if(LOAD(LOAD((ARG_2  ==  0 ? LOAD(LOAD(reg_af + 8) + reg_ae) : ARG_2) + -4) * -1 + (ARG_2  ==  0 ? LOAD(LOAD(reg_af + 8) + reg_ae) : ARG_2) + -4)  !=  0) {
      (void) F_00406b6c();
    }
    reg_result = reg_ai;
    (void) STORE(reg_ag, LOAD(reg_ah + -12));
  }
  return reg_result;
}

/* The decompilation of 0x00409456 / F_00409456 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L84 in reg_pp77 = LOAD(ADD(reg_pp45, SEGMENT2ADDR(reg_pp44), 4)): The current setter is reg_zj33 while [reg_pp44] was found. Related expressions are [reg_zj47, reg_zj35, reg_pp63, reg_pp51, reg_zj10, reg_zj45, reg_zj46, reg_zj11, reg_zj30, reg_zj44, reg_zj32, reg_zj51, reg_zj50, reg_zj33, reg_zj40, reg_zj52, reg_pp56, reg_pp47, reg_pp81, reg_pp44, reg_pp70, reg_zj49, reg_zj39] */

/* The decompilation of 0x00409930 / F_00409930 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409936 / F_00409936 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0040993c / F_0040993c failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409942 / F_00409942 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409948 / F_00409948 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0040994e / F_0040994e failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409954 / F_00409954 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0040995a / F_0040995a failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409960 / F_00409960 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409966 / F_00409966 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0040996c / F_0040996c failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409972 / F_00409972 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409978 / F_00409978 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0040997e / F_0040997e failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409984 / F_00409984 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0040998a / F_0040998a failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409990 / F_00409990 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409996 / F_00409996 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0040999c / F_0040999c failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099a2 / F_004099a2 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099a8 / F_004099a8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099ae / F_004099ae failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099b4 / F_004099b4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099ba / F_004099ba failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099c0 / F_004099c0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099c6 / F_004099c6 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099cc / F_004099cc failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099d2 / F_004099d2 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099d8 / F_004099d8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099de / F_004099de failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099e4 / F_004099e4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099ea / F_004099ea failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099f0 / F_004099f0 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099f6 / F_004099f6 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004099fc / F_004099fc failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409a02 / F_00409a02 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409a08 / F_00409a08 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409a0e / F_00409a0e failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409a14 / F_00409a14 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409a1a / F_00409a1a failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409a20 / F_00409a20 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409a26 / F_00409a26 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00409a2c / F_00409a2c failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */


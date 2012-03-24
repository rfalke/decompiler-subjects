// Decompiled by holdec 1.1 (2012-03-24)

// addr = 00411005.0
// signature= func(F_00411005, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00411005(???)
{
  (void) F_0041117c();
  reg_result = F_0041112c();
  return reg_result;
}

// addr = 0041100a.0
// signature= func(F_0041100a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0041100a(???)
{
  return 0;
}

/* The decompilation of 0x00411023 / F_00411023 failed: java.lang.RuntimeException: Unknown line 00411978.0+2 l.repe ret with code 'l.repe ret' and baseCommand 'repe' */

// addr = 0041103c.0
// signature= func(F_0041103c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0041103c(???)
{
  return g_0x0041753c;
}

// addr = 00411055.0
// signature= func(F_00411055, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00411055(???)
{
  (void) STORE(local + 24, 0);
  (void) STORE(local + 28, 0);
  (void) STORE(local + 32, InitValue(initial_value_of_ebp));
  if(g_0x00417000  ==  -1153374642) {
    reg_var1 = 1;
  } else {
    reg_result = g_0x00417000 & 0xffff0000;
    if(reg_result  ==  0) {
      reg_var1 = 1;
    } else {
      reg_var1 = 0;
    }
  }
  if(reg_var1  ==  0) {
    (void) STORE(&g_0x00417004, ~g_0x00417000);
  } else {
    (void) STORE(local + 4, local + 24);
    (void) intern_redirectCall(g_0x004181dc);
    (void) STORE(local + 20, LOAD(local + 24) ^ LOAD(local + 28));
    reg_ah = intern_redirectCall(g_0x004181e0);
    (void) STORE(local + 20, reg_ah ^ LOAD(local + 20));
    reg_ab = intern_redirectCall(g_0x004181e4);
    (void) STORE(local + 20, reg_ab ^ LOAD(local + 20));
    reg_aj = intern_redirectCall(g_0x004181e8);
    (void) STORE(local + 20, reg_aj ^ LOAD(local + 20));
    (void) STORE(local, local + 8);
    (void) intern_redirectCall(g_0x004181ec);
    reg_result = LOAD(local + 20) ^ LOAD(local + 8);
    (void) STORE(local + 20, reg_result ^ LOAD(local + 12));
    if(LOAD(local + 20)  ==  -1153374642) {
      (void) STORE(local + 20, -1153374641);
    } else if((LOAD(local + 20) & 0xffff0000)  ==  0) {
      reg_result = LOAD(local + 20) * 0x10000 | LOAD(local + 20);
      (void) STORE(local + 20, reg_result);
    }
    (void) STORE(&g_0x00417000, LOAD(local + 20));
    (void) STORE(&g_0x00417004, ~LOAD(local + 20));
  }
  return reg_result;
}

// addr = 00411073.0
// signature= func(F_00411073, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00411073(???)
{
  (void) F_00411118();
  return BIT_TO_INT(BIT_TEST(31, BIT_TO_INT(0) * -1)) + -1;
}

/* The decompilation of 0x0041108c / F_0041108c failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

// addr = 00411096.0
// signature= func(F_00411096, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00411096(???)
{
  reg_result = InitValue(initial_value_of_eax);
  reg_var1 = 0;
  reg_var2 = reg_var1;
  if(reg_var1  <  LOAD(InitValue(initial_value_of_edx))) {
    do {
      if(LOAD(InitValue(initial_value_of_ecx) + LOAD(LOAD(InitValue(initial_value_of_edx) + 4) + reg_var1) + -4)  !=  -858993460 || LOAD(InitValue(initial_value_of_ecx) + LOAD(LOAD(InitValue(initial_value_of_edx) + 4) + reg_var1) + LOAD(LOAD(InitValue(initial_value_of_edx) + 4) + reg_var1 + 4))  !=  -858993460) {
        (void) F_004110f0();
      }
      reg_result = reg_var2 + 1;
      reg_var1 += 12;
      reg_var2 = reg_result;
    } while(reg_result  <  LOAD(InitValue(initial_value_of_edx)));
  }
  return reg_result;
}

/* The decompilation of 0x004110a5 / F_004110a5 failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

/* The decompilation of 0x004110aa / F_004110aa failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

/* The decompilation of 0x004110b9 / F_004110b9 failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

/* The decompilation of 0x004110be / F_004110be failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

// addr = 004110c3.0
// signature= func(F_004110c3, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004110c3(???)
{

// calls     [16, 18, 62]
// called    [12, 13]
// deep-calls     {13, 14, 16, 17, 18, 19, 21, 22, 43, 60, 61, 62, 63, 64, 65}
// depp-called    {1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 23, 49, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77}
// startStackOffset -328
// modifiedAddresses  []
L14:
  if(LOAD(local + 236)  <  ARG_2 && UNSIGNED_EXTEND(LOAD(LOAD(local + 236) + ARG_0))  <  32) goto L18;
  if(LOAD(local + 236)  <  ARG_2) goto L16;
  goto L62;

// calls     [17, 18]
// called    [14]
// deep-calls     {13, 14, 16, 17, 18, 19, 21, 22, 43, 60, 61, 62, 63, 64, 65}
// depp-called    {1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 23, 49, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77}
// startStackOffset -328
// modifiedAddresses  []
L16:
  reg_var1 = LOAD(local + 236) + ARG_0;
  if(UNSIGNED_EXTEND(LOAD(reg_var1))  >  126) goto L18;
  goto L17;

// calls     [19]
// called    [16]
// deep-calls     {13, 14, 16, 17, 18, 19, 21, 22, 43, 60, 61, 62, 63, 64, 65}
// depp-called    {1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 23, 49, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77}
// startStackOffset -328
// modifiedAddresses  [ADD(local, 24)]
L17:
  reg_var1 = UNSIGNED_EXTEND(LOAD(LOAD(local + 236) + ARG_0));
  (void) STORE(local + 24, reg_var1);
  goto L19;

// calls     [19]
// called    [14, 16]
// deep-calls     {13, 14, 16, 17, 18, 19, 21, 22, 43, 60, 61, 62, 63, 64, 65}
// depp-called    {1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 23, 49, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77}
// startStackOffset -328
// modifiedAddresses  [ADD(local, 24)]
L18:
  (void) STORE(local + 24, 46);
  goto L19;
  (void) STORE(LOAD(local + 224) + LOAD(local + 236) + local + 248, LOAD(local + 24));
  (void) STORE(local + 236, LOAD(local + 236) + 1);
}

/* The decompilation of 0x004110c8 / F_004110c8 failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

// addr = 004110e1.0
// signature= func(F_004110e1, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004110e1(???)
{
  reg_var2 = 0;
  reg_var1 = LOAD(ARG_0 + 60) + ARG_0 + UNSIGNED_EXTEND(LOAD(LOAD(ARG_0 + 60) + ARG_0 + 20)) + 24;
  while(1) {
    if(reg_var2  >=  UNSIGNED_EXTEND(LOAD(LOAD(ARG_0 + 60) + ARG_0 + 6))) {
      reg_result = 0;
      break;
    }
    if(LOAD(reg_var1 + 12)  <=  ARG_1 && LOAD(reg_var1 + 12) + LOAD(reg_var1 + 8)  >  ARG_1) {
      reg_result = reg_var1;
      break;
    }
    reg_var2++;
    reg_var1 += 40;
  }
  return reg_result;
}

// addr = 004110f0.0
// signature= func(F_004110f0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004110f0(???)
{
  (void) STORE(local + 1052, g_0x00417000 ^ local + 1056);
  (void) STORE(local + 1056, InitValue(initial_value_of_ebp));
  reg_bm = g_0x00417010  ==  -1;
  (void) STORE(local + 24, ARG_0);
  reg_aq = ARG_1;
  if(!reg_bm) {
    reg_ap = ARG_1;
    reg_bl = LOAD(ARG_1)  ==  0;
    reg_ao = LOAD(ARG_1)  ==  0;
    (void) STORE(local + 16, InitValue(initial_value_of_esi));
    (void) STORE(local + 20, InitValue(initial_value_of_ebx));
    if(ISDEF(reg_ao) ? reg_ao : reg_bl) {
      reg_var8 = 1;
    } else {
      reg_var1 = reg_aq;
      reg_var1a = reg_var1;
      while(1) {
        reg_ba = LOAD(reg_var1);
        reg_var1++;
        if(reg_ba  ==  0 && reg_var1a * -1 + reg_var1  >  980) {
          reg_var8 = 1;
          break;
        }
        if(reg_ba  ==  0) {
          reg_var8 = 0;
          break;
        }
      }
    }
    if(reg_var8  ==  0) {
      reg_var7 = local + 28;
      reg_var2 = 0;
      do {
        reg_bf = LOAD(reg_var2 + 4283284);
        (void) STORE(reg_var2 + local + 28, LOAD(reg_var2 + 4283284));
        reg_var2++;
      } while(reg_bf  !=  0);
      reg_var3 = reg_ap;
      do {
        reg_bk = LOAD(reg_var3);
        reg_var3++;
      } while(reg_bk  !=  0);
      reg_var4 = local + 27;
      (void) STORE(local + 12, InitValue(initial_value_of_edi));
      do {
        reg_bn = LOAD(reg_var4 + 1);
        reg_var4++;
      } while(reg_bn  !=  0);
      ASSERT UNDEF  !=  0;
      (void) intern_memcpy(reg_aq, reg_var4, (reg_aq * -1 + reg_var3) / 4 * 4);
      reg_var5 = 4283312;
      reg_var5a = reg_var5;
      ASSERT UNDEF  !=  0;
      (void) intern_memcpy((reg_aq * -1 + reg_var3) / 4 * 4 + reg_aq, (reg_aq * -1 + reg_var3) / 4 * 4 + reg_var4, reg_aq * -1 + reg_var3 & 3);
      do {
        reg_al = LOAD(reg_var5);
        reg_var5++;
      } while(reg_al  !=  0);
      reg_var6 = local + 27;
      do {
        reg_am = LOAD(reg_var6 + 1);
        reg_var6++;
      } while(reg_am  !=  0);
      ASSERT UNDEF  !=  0;
      (void) intern_memcpy(reg_var5a, reg_var6, (reg_var5a * -1 + reg_var5) / 4 * 4);
      ASSERT UNDEF  !=  0;
      (void) intern_memcpy((reg_var5a * -1 + reg_var5) / 4 * 4 + reg_var5a, (reg_var5a * -1 + reg_var5) / 4 * 4 + reg_var6, reg_var5a * -1 + reg_var5 & 3);
    } else {
      reg_var7 = 4283724;
    }
    reg_ac = g_0x00417010;
    reg_af = LOAD(local + 24);
    (void) STORE(local + 12, reg_var7);
    (void) STORE(local + 4, reg_ac);
    (void) STORE(local + 8, 2);
    (void) STORE(local, reg_af);
    (void) F_004123f0();
  }
  reg_result = F_00411023();
  return reg_result;
}

/* The decompilation of 0x004110ff / F_004110ff failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

// addr = 00411104.0
// signature= func(F_00411104, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00411104(???)
{
  if(UNSIGNED_EXTEND(LOAD(ARG_0))  !=  23117) {
    reg_result = 0;
  } else if(LOAD(LOAD(ARG_0 + 60) + ARG_0)  !=  17744) {
    reg_result = 0;
  } else if(UNSIGNED_EXTEND(LOAD(LOAD(ARG_0 + 60) + ARG_0 + 24))  ==  267) {
    reg_result = 1;
  } else {
    reg_result = 0;
  }
  return reg_result;
}

// addr = 00411113.0
// signature= func(F_00411113, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00411113(???)
{
  reg_result = g_0x0041753c;
  (void) STORE(&g_0x0041753c, ARG_0);
  (void) STORE(&g_0x00417538, 0);
  return reg_result;
}

// addr = 00411118.0
// signature= func(F_00411118, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00411118(???)
{
  (void) STORE(local + 16, InitValue(initial_value_of_edi));
  (void) STORE(local + 20, InitValue(initial_value_of_esi));
  (void) STORE(local + 24, InitValue(initial_value_of_ebx));
  (void) STORE(local + 48, g_0x00000000);
  (void) STORE(local + 52, 4264071);
  (void) STORE(local + 56, 4287256);
  (void) STORE(local + 60, -2);
  (void) STORE(local + 64, InitValue(initial_value_of_ebp));
  reg_ak = g_0x00417000;
  (void) STORE(local + 12, g_0x00417000 ^ local + 64);
  (void) STORE(local + 56, 4287256 ^ reg_ak);
  (void) STORE(&g_0x00000000, local + 48);
  (void) STORE(local + 8, g_0x00417584);
  reg_aj = intern_redirectCall(g_0x00418298);
  (void) STORE(local + 36, reg_aj);
  if(LOAD(local + 36)  ==  -1) {
    (void) STORE(local + 8, ARG_0);
    reg_result = intern_redirectCall(g_0x00418294);
  } else {
    (void) STORE(local + 8, 8);
    (void) F_0041108c();
    (void) STORE(local + 60, 0);
    (void) STORE(local + 8, g_0x00417584);
    reg_af = intern_redirectCall(g_0x00418298);
    (void) STORE(local + 36, reg_af);
    (void) STORE(local + 8, g_0x00417574);
    reg_ab = intern_redirectCall(g_0x00418298);
    (void) STORE(local + 28, reg_ab);
    (void) STORE(local + 4, local + 36);
    (void) STORE(local + 8, local + 28);
    (void) STORE(local, ARG_0);
    reg_ai = intern_redirectCall(g_0x004182c4);
    (void) STORE(local, reg_ai);
    reg_ag = F_004111f4();
    (void) STORE(local + 32, reg_ag);
    (void) STORE(local + 8, LOAD(local + 36));
    reg_ah = intern_redirectCall(g_0x004182c4);
    (void) STORE(&g_0x00417584, reg_ah);
    (void) STORE(local + 8, LOAD(local + 28));
    reg_ae = intern_redirectCall(g_0x004182c4);
    (void) STORE(&g_0x00417574, reg_ae);
    (void) STORE(local + 60, -2);
    (void) F_00412f55();
    reg_result = LOAD(local + 32);
  }
  (void) STORE(&g_0x00000000, LOAD(local + 48));
  return reg_result;
}

// addr = 0041111d.0
// signature= func(F_0041111d, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0041111d(???)
{
  return g_0x00000018;
}

// addr = 0041112c.0
// signature= func(F_0041112c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0041112c(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(ARG_0  !=  0) {
    reg_result = F_0041118b();
  }
  return reg_result;
}

// addr = 00411136.0
// signature= func(F_00411136, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00411136(???)
{
  (void) F_00411055();
  reg_result = F_00411d70();
  return reg_result;
}

/* The decompilation of 0x0041114f / F_0041114f failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

// addr = 00411163.0
// signature= func(F_00411163, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00411163(???)
{
  reg_var1 = InitValue(initial_value_of_edx);
  ASSERT UNDEF  !=  0;
  (void) STORE(local + 16, InitValue(initial_value_of_edi));
  (void) STORE(local + 20, InitValue(initial_value_of_esi));
  (void) STORE(local + 24, InitValue(initial_value_of_ebx));
  (void) STORE(local + 340, InitValue(initial_value_of_ebp));
  (void) intern_memfillL(local + 28, -858993460, 78);
  (void) STORE(local + 12, local + 236);
  (void) STORE(local + 336, g_0x00417000 ^ local + 340);
  (void) STORE(local + 8, ARG_0);
  reg_aj = F_00411860();
  if(reg_aj  ==  0) {
    (void) STORE(local + 12, 4282204);
    (void) STORE(local + 8, ARG_0);
    (void) intern_redirectCall(g_0x004182e8);
    reg_ai = F_00411168();
    (void) STORE(local + 292, reg_ai);
    if(LOAD(local + 292)  ==  0) {
      (void) STORE(local + 12, ARG_0);
      (void) intern_redirectCall(g_0x004182e4);
      (void) F_00411168();
      reg_var2 = 1;
    } else {
      (void) STORE(local + 304, 0);
      while(LOAD(local + 304)  <  LOAD(local + 256)) {
        (void) STORE(local + 12, LOAD(local + 292));
        (void) STORE(local + 4, 1);
        (void) STORE(local + 8, 16);
        (void) STORE(local, local + 316);
        (void) intern_redirectCall(g_0x004182ec);
        reg_ah = F_00411168();
        (void) STORE(local + 224, reg_ah);
        if(LOAD(local + 224)  ==  0) {
          break;
        }
        reg_var1 = local + 316;
        (void) STORE(local + 12, LOAD(local + 224));
        (void) STORE(local + 4, reg_var1);
        (void) STORE(local + 8, LOAD(local + 304));
        (void) F_004110c3();
        (void) STORE(local + 304, LOAD(local + 224) + LOAD(local + 304));
      }
      (void) STORE(local + 12, LOAD(local + 292));
      (void) intern_redirectCall(g_0x004182f0);
      (void) F_00411168();
      reg_var2 = 0;
    }
  } else {
    (void) STORE(local + 12, ARG_0);
    (void) intern_redirectCall(g_0x004182e4);
    (void) F_00411168();
    reg_var2 = 1;
  }
  (void) STORE(local + 12, reg_var1);
  (void) STORE(local + 8, reg_var2);
  (void) F_00411096();
  (void) F_00411023();
  reg_result = F_00411168();
  return reg_result;
}

// addr = 00411168.0
// signature= func(F_00411168, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00411168(???)
{
  if(!UNDEF) {
    (void) F_004111e0();
  }
  return InitValue(initial_value_of_eax);
}

// addr = 0041116d.0
// signature= func(F_0041116d, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0041116d(???)
{
  ASSERT UNDEF  !=  0;
  (void) STORE(local + 12, InitValue(initial_value_of_ebx));
  (void) STORE(local + 232, InitValue(initial_value_of_ebp));
  (void) STORE(local + 4, InitValue(initial_value_of_edi));
  (void) STORE(local + 8, InitValue(initial_value_of_esi));
  (void) intern_memfillL(local + 16, -858993460, 54);
  (void) STORE(local + 212, 0);
  (void) STORE(local + 224, 1);
  while(LOAD(local + 224)  <  ARG_0) {
    (void) STORE(local, LOAD(LOAD(local + 224) * 4 + ARG_1));
    reg_ab = F_00411163();
    (void) STORE(local + 212, LOAD(local + 212) + reg_ab);
    (void) STORE(local + 224, LOAD(local + 224) + 1);
  }
  reg_result = F_00411168();
  return reg_result;
}

/* The decompilation of 0x00411172 / F_00411172 failed: java.lang.RuntimeException: java.lang.AssertionError */

/* The decompilation of 0x0041117c / F_0041117c failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

/* The decompilation of 0x0041118b / F_0041118b failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

/* The decompilation of 0x00411190 / F_00411190 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L39 in if(CMP(MARKER_UNSIGNED(reg_f8), <, MARKER_UNSIGNED(LOAD(ADD(MULT(reg_pp28, 8), reg_pp27, SEGMENT2ADDR(reg_pp25)))))) goto L41: The current setter is reg_a48 while [reg_pp28] was found. Related expressions are [reg_a48, reg_a49, reg_a47, reg_pp28, reg_pp32] */

/* The decompilation of 0x00411195 / F_00411195 failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

// addr = 0041119f.0
// signature= func(F_0041119f, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0041119f(???)
{
  (void) STORE(local + 12, InitValue(initial_value_of_edi));
  (void) STORE(local + 16, InitValue(initial_value_of_esi));
  (void) STORE(local + 20, InitValue(initial_value_of_ebx));
  (void) STORE(local + 64, g_0x00000000);
  (void) STORE(local + 68, 4264071);
  (void) STORE(local + 72, 4287288);
  (void) STORE(local + 76, -2);
  (void) STORE(local + 80, InitValue(initial_value_of_ebp));
  reg_af = g_0x00417000;
  (void) STORE(local + 72, 4287288 ^ g_0x00417000);
  (void) STORE(local + 8, reg_af ^ local + 80);
  (void) STORE(&g_0x00000000, local + 64);
  (void) STORE(local + 4, 0x400000);
  (void) STORE(local + 52, 0x400000);
  (void) STORE(local + 56, local + 8);
  (void) STORE(local + 76, 0);
  reg_ab = F_00411104();
  if(reg_ab  ==  0) {
    reg_result = 0;
    (void) STORE(local + 36, 0);
    (void) STORE(local + 76, -2);
  } else {
    (void) STORE(local + 4, LOAD(local + 52) * -1 + ARG_0);
    (void) STORE(local + 44, LOAD(local + 52) * -1 + ARG_0);
    (void) STORE(local, LOAD(local + 52));
    reg_ag = F_004110e1();
    (void) STORE(local + 48, reg_ag);
    if(LOAD(local + 48)  ==  0) {
      reg_result = 0;
      (void) STORE(local + 32, 0);
      (void) STORE(local + 76, -2);
    } else {
      reg_result = BIT_TO_INT(BIT_TEST(31, BIT_TO_INT(0) * -1)) * -1 + 1;
      (void) STORE(local + 28, reg_result);
      (void) STORE(local + 76, -2);
    }
  }
  (void) STORE(&g_0x00000000, LOAD(local + 64));
  return reg_result;
}

/* The decompilation of 0x004111a9 / F_004111a9 failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

/* The decompilation of 0x004111ae / F_004111ae failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

/* The decompilation of 0x004111c7 / F_004111c7 failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

// addr = 004111e0.0
// signature= func(F_004111e0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004111e0(???)
{
  if(ARG_1  >  4) {
    reg_result = F_004123f0();
  } else {
    reg_result = ARG_1;
    if(LOAD(reg_result * 4 + 4288520)  !=  -1) {
      reg_result = F_004123f0();
    }
  }
  return reg_result;
}

// addr = 004111e5.0
// signature= func(F_004111e5, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004111e5(???)
{
  (void) STORE(local + 400, g_0x00417000 ^ local + 404);
  (void) STORE(local + 404, InitValue(initial_value_of_ebp));
  (void) STORE(local + 76, InitValue(initial_value_of_ebx));
  reg_aq = g_0x00417018;
  (void) STORE(local + 72, InitValue(initial_value_of_esi));
  reg_ac = ARG_1;
  (void) STORE(local + 68, InitValue(initial_value_of_edi));
  reg_aj = ARG_0;
  (void) STORE(local + 80, ARG_0);
  if(reg_aq  !=  -1) {
    reg_var1 = local + 64;
    (void) STORE(reg_var1, 4284104);
    reg_ad = intern_redirectCall(g_0x004181f0);
    if(reg_ad  ==  0) {
      reg_var2 = 1;
    } else {
      (void) STORE(reg_var1 + -4, 4284092);
      reg_var1 += -8;
      (void) STORE(reg_var1, reg_ad);
      reg_aa = intern_redirectCall(g_0x004181f4);
      (void) STORE(&g_0x00417534, reg_aa);
      if(reg_ac  ==  0 || reg_aa  ==  0) {
        reg_var2 = 1;
      } else {
        reg_var2 = 0;
      }
    }
    if(reg_var2  ==  0) {
      reg_ao = ARG_2;
      reg_af = LOAD(reg_ac + 12);
      (void) STORE(reg_var1 + -12, 4284028);
      (void) STORE(reg_var1 + -16, reg_af + -36);
      (void) STORE(reg_var1 + -20, 4284016);
      (void) STORE(reg_var1 + -24, reg_ac + 32);
      (void) STORE(reg_var1 + -28, 4284000);
      (void) STORE(reg_var1 + -32, 4283912);
      (void) STORE(reg_var1 + -36, 4283884);
      (void) STORE(reg_var1 + -4, 4284080);
      (void) STORE(reg_var1 + -40, local + 84);
      (void) STORE(reg_var1 + -8, reg_ao);
      (void) intern_redirectCall(reg_aa);
      (void) STORE(reg_var1 + -44, LOAD(reg_ac + 12) + -36);
      (void) STORE(reg_var1 + -48, reg_ac + 32);
      (void) STORE(reg_var1 + -52, local + 328);
      (void) STORE(reg_var1 + -56, local + 380);
      (void) F_00412a10();
      (void) STORE(reg_var1 + -12, 4283876);
      (void) STORE(reg_var1 + -16, local + 380);
      (void) STORE(reg_var1 + -20, 4283864);
      (void) STORE(reg_var1 + -24, local + 84);
      (void) STORE(reg_var1 + -4, 4283880);
      (void) STORE(reg_var1 + -8, local + 328);
      reg_am = intern_redirectCall(g_0x004181f8);
      (void) STORE(reg_var1 + -28, reg_am + local + 84);
      (void) intern_redirectCall(g_0x00417534);
      reg_ap = LOAD(local + 80);
      (void) STORE(reg_var1 + -32, local + 84);
      (void) STORE(reg_var1 + -36, 4);
      (void) STORE(reg_var1 + -40, reg_aq);
      (void) STORE(reg_var1 + -44, reg_ap);
      (void) F_004123f0();
    } else {
      (void) STORE(reg_var1 + -12, reg_aq);
      (void) STORE(reg_var1 + -16, reg_aj);
      (void) STORE(reg_var1 + -4, 4283776);
      (void) STORE(reg_var1 + -8, 4);
      (void) F_004123f0();
    }
  }
  reg_result = F_00411023();
  return reg_result;
}

/* The decompilation of 0x004111f4 / F_004111f4 failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

/* The decompilation of 0x004111fe / F_004111fe failed: java.lang.AssertionError: Block L1 calls block L2 which isn't available */

// addr = 00411203.0
// signature= func(F_00411203, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00411203(???)
{
  return g_0x00417538;
}

// addr = 00411860.0
// signature= func(F_00411860, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00411860(???)
{
  ASSERT UNDEF  !=  0;
  (void) STORE(local + 12, InitValue(initial_value_of_esi));
  (void) STORE(local + 16, InitValue(initial_value_of_ebx));
  (void) STORE(local + 212, InitValue(initial_value_of_ebp));
  (void) STORE(local + 8, InitValue(initial_value_of_edi));
  (void) intern_memfillL(local + 20, -858993460, 48);
  (void) STORE(local + 4, ARG_1);
  (void) STORE(local, ARG_0);
  (void) intern_redirectCall(g_0x004182e0);
  (void) F_00411168();
  reg_result = F_00411168();
  return reg_result;
}

/* The decompilation of 0x00411d70 / F_00411d70 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L20 in (void) STORE(ADD(reg_pp34, -4), 4289940): The current setter is reg_var57 while [reg_pp34] was found. Related expressions are [reg_var50, reg_var55, reg_var56, reg_var57, reg_var58, reg_pp35, reg_var52, reg_pp34, reg_var53, reg_var54] */

// addr = 00412060.0
// signature= func(F_00412060, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00412060(???)
{
  if(UNSIGNED_EXTEND(LOAD(&g_0x00400000))  !=  23117) {
    reg_result = 0;
  } else if(LOAD(g_0x0040003c + 0x400000)  !=  17744) {
    reg_result = 0;
  } else if(UNSIGNED_EXTEND(LOAD(g_0x0040003c + 4194328))  !=  267 && UNSIGNED_EXTEND(LOAD(g_0x0040003c + 4194328))  !=  523) {
    reg_result = 0;
  } else if(LOAD(g_0x0040003c + 4194420)  >  14 && UNSIGNED_EXTEND(LOAD(g_0x0040003c + 4194328))  !=  523) {
    reg_result = WIDEN(BIT_TO_INT(LOAD(g_0x0040003c + 4194536)  !=  0));
  } else if(UNSIGNED_EXTEND(LOAD(g_0x0040003c + 4194328))  ==  267 || UNSIGNED_EXTEND(LOAD(g_0x0040003c + 4194328))  !=  523) {
    reg_result = 0;
  } else if(LOAD(g_0x0040003c + 4194436)  >  14) {
    reg_result = WIDEN(BIT_TO_INT(LOAD(g_0x0040003c + 4194552)  !=  0));
  } else {
    reg_result = 0;
  }
  return reg_result;
}

// addr = 004122d0.0
// signature= func(F_004122d0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004122d0(???)
{
  (void) STORE(local + 20, InitValue(initial_value_of_edi));
  (void) STORE(local + 24, InitValue(initial_value_of_esi));
  (void) STORE(local + 28, InitValue(initial_value_of_ebx));
  (void) STORE(local + 68, g_0x00000000);
  (void) STORE(local + 72, 4264071);
  (void) STORE(local + 76, 4287192);
  (void) STORE(local + 80, -2);
  (void) STORE(local + 84, InitValue(initial_value_of_ebp));
  reg_aa = g_0x00417000;
  (void) STORE(local + 16, g_0x00417000 ^ local + 84);
  (void) STORE(local + 76, 4287192 ^ reg_aa);
  (void) STORE(&g_0x00000000, local + 68);
  (void) STORE(local + 60, local + 16);
  (void) STORE(local + 12, local + 32);
  (void) STORE(local + 32, 4097);
  (void) STORE(local + 36, ARG_0);
  (void) STORE(local + 4, 0);
  (void) STORE(local + 40, local + 59);
  (void) STORE(local + 59, 0);
  (void) STORE(local + 8, 6);
  (void) STORE(local + 80, 0);
  (void) STORE(local, 1080890248);
  (void) intern_redirectCall(g_0x00418208);
  reg_result = UNSIGNED_EXTEND(LOAD(local + 59));
  (void) STORE(local + 80, -2);
  (void) STORE(&g_0x00000000, LOAD(local + 68));
  return reg_result;
}

// addr = 004123f0.0
// signature= func(F_004123f0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004123f0(???)
{
  (void) STORE(local + 148, InitValue(initial_value_of_ebx));
  (void) STORE(local + 3792, g_0x00417000 ^ local + 3796);
  (void) STORE(local + 3796, InitValue(initial_value_of_ebp));
  reg_aq = ARG_0;
  (void) STORE(local + 140, InitValue(initial_value_of_edi));
  (void) STORE(local + 144, InitValue(initial_value_of_esi));
  reg_bj = ARG_3;
  (void) STORE(local + 136, reg_aq);
  (void) STORE(local + 152, reg_bj);
  (void) STORE(local + 156, 0);
  reg_bu = F_0041103c();
  (void) STORE(local + 164, reg_bu);
  if(reg_bu  ==  0) {
    (void) STORE(local + 136, reg_aq);
    reg_cg = F_00411203();
    (void) STORE(local + 156, reg_cg);
  }
  reg_ax = g_0x004181fc;
  reg_var1 = local + 116;
  (void) STORE(local + 120, 0);
  (void) STORE(local + 124, reg_bj);
  (void) STORE(local + 128, -1);
  (void) STORE(local + 132, 0);
  (void) STORE(local + 136, 0);
  (void) STORE(reg_var1, 65001);
  reg_am = intern_redirectCall(reg_ax);
  if(reg_am  >=  0x200) {
    reg_var6 = 1;
  } else {
    (void) STORE(reg_var1 + -8, local + 168);
    (void) STORE(reg_var1 + -20, 0);
    (void) STORE(reg_var1 + -4, reg_am);
    (void) STORE(reg_var1 + -16, reg_bj);
    (void) STORE(reg_var1 + -12, -1);
    reg_var1 += -24;
    (void) STORE(reg_var1, 65001);
    reg_bg = intern_redirectCall(reg_ax);
    if(reg_bg  ==  0) {
      reg_var6 = 1;
    } else {
      reg_var6 = 0;
    }
  }
  if(reg_var6  ==  0) {
    (void) STORE(local + 160, local + 168);
  } else {
    (void) STORE(local + 160, 4283592);
  }
  (void) STORE(reg_var1 + -4, 4098);
  reg_bx = F_004122d0();
  reg_ay = ARG_2;
  if(reg_bx  ==  0) {
    reg_var2 = 1;
    reg_var9 = 1;
  } else {
    reg_ag = ARG_0;
    (void) STORE(reg_var1 + -12, LOAD(ARG_2 * 4 + 4283260));
    (void) STORE(reg_var1 + -16, reg_ay);
    (void) STORE(reg_var1 + -4, LOAD(local + 160));
    (void) STORE(reg_var1 + -8, reg_ag);
    reg_af = F_00412680();
    if(reg_af  ==  0) {
      reg_var2 = 0;
      reg_var9 = 1;
    } else {
      reg_var9 = 0;
    }
  }
  if(LOAD(local + 164)  !=  0 && reg_var9  !=  0 || LOAD(local + 156)  !=  0 && reg_var9  !=  0) {
    if(LOAD(local + 164)  !=  0 && reg_var2  ==  0 && reg_var9  !=  0 || LOAD(local + 156)  !=  0 && reg_var2  ==  0 && reg_var9  !=  0) {
      reg_var8 = 0;
    } else {
      reg_bt = intern_redirectCall(g_0x0041820c);
      if(reg_bt  ==  0) {
        reg_var8 = 0;
      } else {
        reg_var8 = 1;
      }
    }
    if(reg_var8  ==  0) {
      reg_ak = ARG_0;
      reg_bv = LOAD(local + 164);
      (void) STORE(reg_var1 + -12, local + 164);
      (void) STORE(reg_var1 + -16, 260);
      (void) STORE(reg_var1 + -20, local + 3272);
      (void) STORE(reg_var1 + -24, reg_ak + -5);
      (void) STORE(reg_var1 + -4, 260);
      (void) STORE(reg_var1 + -8, local + 2752);
      (void) F_00411190();
      if(reg_bv  ==  0) {
        reg_aj = g_0x00418200;
        reg_var3 = 4283488;
        (void) STORE(reg_var1 + -12, 778);
        (void) STORE(reg_var1 + -16, local + 1192);
        (void) STORE(reg_var1 + -20, -1);
        (void) STORE(reg_var1 + -24, local + 3272);
        (void) STORE(reg_var1 + -28, 0);
        (void) STORE(reg_var1 + -32, 65001);
        (void) STORE(reg_var1 + -4, 0);
        (void) STORE(reg_var1 + -8, 0);
        reg_aw = intern_redirectCall(reg_aj);
        if(reg_aw  !=  0) {
          reg_var3 = local + 1192;
        }
        reg_var4 = 4283464;
        (void) STORE(reg_var1 + -36, 0);
        (void) STORE(reg_var1 + -40, 0);
        (void) STORE(reg_var1 + -44, 778);
        (void) STORE(reg_var1 + -48, local + 1972);
        (void) STORE(reg_var1 + -52, -1);
        (void) STORE(reg_var1 + -56, local + 2752);
        (void) STORE(reg_var1 + -60, 0);
        (void) STORE(reg_var1 + -64, 65001);
        reg_ai = intern_redirectCall(reg_aj);
        if(reg_ai  !=  0) {
          reg_var4 = local + 1972;
        }
        reg_bc = ARG_2;
        reg_ac = LOAD(local + 164);
        (void) STORE(reg_var1 + -68, LOAD(local + 152));
        reg_ar = ARG_1;
        (void) STORE(reg_var1 + -72, reg_bc);
        (void) STORE(reg_var1 + -76, 4283424);
        (void) STORE(reg_var1 + -80, reg_var4);
        (void) STORE(reg_var1 + -84, reg_ac);
        (void) STORE(reg_var1 + -88, reg_var3);
        (void) STORE(reg_var1 + -92, reg_ar);
        reg_var5 = intern_redirectCall(LOAD(local + 156));
      } else {
        reg_ch = ARG_2;
        reg_at = LOAD(local + 164);
        (void) STORE(reg_var1 + -12, 4283512);
        (void) STORE(reg_var1 + -16, local + 2752);
        (void) STORE(reg_var1 + -4, LOAD(local + 160));
        (void) STORE(reg_var1 + -8, reg_ch);
        reg_ab = ARG_1;
        (void) STORE(reg_var1 + -20, reg_at);
        (void) STORE(reg_var1 + -24, local + 3272);
        (void) STORE(reg_var1 + -28, reg_ab);
        reg_var5 = intern_redirectCall(reg_bv);
      }
      if(reg_var5  ==  1) {
        reg_var7 = 0;
      } else {
        reg_var7 = 1;
      }
    } else {
      reg_var7 = 0;
    }
  } else {
    if(reg_var9  ==  0) {
      reg_var7 = 1;
    } else {
      reg_var7 = 0;
    }
  }
  if(reg_var7  ==  0) {
    (void) intern_redirectCall(g_0x00418204);
  }
  reg_result = F_00411023();
  return reg_result;
}

// addr = 00412680.0
// signature= func(F_00412680, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00412680(???)
{
  (void) STORE(local + 20, InitValue(initial_value_of_edi));
  (void) STORE(local + 24, InitValue(initial_value_of_esi));
  (void) STORE(local + 28, InitValue(initial_value_of_ebx));
  (void) STORE(local + 68, g_0x00000000);
  (void) STORE(local + 72, 4264071);
  (void) STORE(local + 76, 4287224);
  (void) STORE(local + 80, -2);
  (void) STORE(local + 84, InitValue(initial_value_of_ebp));
  reg_ab = g_0x00417000;
  (void) STORE(local + 16, g_0x00417000 ^ local + 84);
  (void) STORE(local + 76, 4287224 ^ reg_ab);
  (void) STORE(&g_0x00000000, local + 68);
  (void) STORE(local + 60, local + 16);
  (void) STORE(local + 12, local + 32);
  (void) STORE(local + 32, 4098);
  (void) STORE(local + 36, ARG_0);
  (void) STORE(local + 4, 0);
  (void) STORE(local + 40, ARG_1);
  (void) STORE(local + 44, ARG_2);
  (void) STORE(local + 48, local + 59);
  (void) STORE(local + 52, ARG_3);
  (void) STORE(local + 59, 0);
  (void) STORE(local + 8, 6);
  (void) STORE(local + 80, 0);
  (void) STORE(local, 1080890248);
  (void) intern_redirectCall(g_0x00418208);
  reg_result = UNSIGNED_EXTEND(LOAD(local + 59));
  (void) STORE(local + 80, -2);
  (void) STORE(&g_0x00000000, LOAD(local + 68));
  return reg_result;
}

// addr = 00412a10.0
// signature= func(F_00412a10, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00412a10(???)
{
  reg_var3 = ARG_0;
  reg_var3a = reg_var3;
  reg_am = ARG_2;
  reg_var2 = 0;
  while(1) {
    reg_var1 = ARG_3;
    if(reg_var1  >=  16) {
      reg_var1 = 16;
    }
    if(reg_var1  <=  reg_var2) {
      break;
    }
    reg_ak = LOAD(reg_var3a * -1 + reg_am + reg_var3);
    (void) intern_redirectCall(g_0x00417534);
    reg_var2++;
    (void) STORE(reg_var3, reg_ak);
    reg_var3++;
  }
  reg_al = ARG_1;
  reg_result = ARG_0;
  (void) STORE(ARG_0 + reg_var2, 0);
  (void) STORE(reg_var2 * 3 + reg_al, 0);
  return reg_result;
}

// addr = 00412f55.0
// signature= func(F_00412f55, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00412f55(???)
{
  reg_result = F_0041114f();
  return reg_result;
}

/* The decompilation of 0x00413770 / F_00413770 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L18 in (void) STORE(ADD(reg_pp18, reg_pp19, local, 140), LOAD(ADD(LOAD(ADDR(g_0x00417034)), reg_pp19))): The current setter is reg_var12 while [reg_pp18] was found. Related expressions are [reg_var12, reg_var11, reg_var10, reg_pp18] */


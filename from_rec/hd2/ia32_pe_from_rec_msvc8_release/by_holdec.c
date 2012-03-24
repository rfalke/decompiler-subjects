// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x00401000 / F_00401000 failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L5 in if(CMP(MARKER_SIGNED(16), <=, MARKER_SIGNED(reg_e2))) goto L10: The current setter is reg_e3 while [reg_e2] was found. Related expressions are [reg_e1, reg_pp7, reg_pp10, reg_e3, reg_e2] */

// addr = 00401140.0
// signature= func(F_00401140, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401140(???)
{
  (void) STORE(local + 100, g_0x00403000 ^ local + 32);
  (void) STORE(local + 12, local + 32);
  (void) STORE(local + 16, InitValue(initial_value_of_edi));
  (void) STORE(local + 20, InitValue(initial_value_of_esi));
  (void) STORE(local + 24, InitValue(initial_value_of_ebp));
  (void) STORE(local + 28, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, InitValue(initial_value_of_ecx));
  reg_ai = intern_redirectCall(g_0x0040209c);
  if(reg_ai  ==  0) {
    (void) STORE(local + 12, 4202780);
    (void) STORE(local + 8, InitValue(initial_value_of_ecx));
    reg_am = intern_redirectCall(g_0x004020a8);
    if(reg_am  ==  0) {
      reg_var2 = 1;
    } else {
      reg_var2 = 0;
    }
  } else {
    reg_var2 = 1;
  }
  if(reg_var2  ==  0) {
    reg_var1 = 0;
    if(reg_var1  <  LOAD(local + 52)) {
      do {
        reg_ak = intern_redirectCall(g_0x004020a8);
        reg_ah = g_0x004020a4;
        (void) STORE(local + 12, reg_ak);
        (void) STORE(local + 4, 1);
        (void) STORE(local + 8, 16);
        (void) STORE(local, local + 84);
        reg_an = intern_redirectCall(reg_ah);
        if(reg_an  ==  0) {
          break;
        }
        (void) STORE(local + 12, reg_an);
        (void) STORE(local + 8, local + 84);
        (void) F_00401000();
        reg_var1 += reg_an;
      } while(reg_var1  <  LOAD(local + 52));
    }
    reg_ae = intern_redirectCall(g_0x004020a8);
    (void) STORE(local + 12, reg_ae);
    (void) intern_redirectCall(g_0x004020a0);
  } else {
    (void) STORE(local + 12, InitValue(initial_value_of_ecx));
    (void) intern_redirectCall(g_0x004020b0);
  }
  reg_result = F_0040123b();
  return reg_result;
}

// addr = 00401200.0
// signature= func(F_00401200, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401200(???)
{
  (void) STORE(local + 16, InitValue(initial_value_of_ebp));
  (void) STORE((local + 16 & -8) + -4, InitValue(initial_value_of_ecx));
  (void) STORE((local + 16 & -8) + -8, InitValue(initial_value_of_ebx));
  reg_ab = ARG_0;
  reg_result = 0;
  reg_var1 = reg_result + 1;
  (void) STORE((local + 16 & -8) + -12, InitValue(initial_value_of_esi));
  (void) STORE((local + 16 & -8) + -16, InitValue(initial_value_of_edi));
  if(reg_var1  <  reg_ab) {
    do {
      reg_ag = ARG_0;
      reg_ah = F_00401140();
      reg_var1++;
      reg_result += reg_ah;
    } while(reg_var1  <  reg_ag);
  }
  return reg_result;
}

/* The decompilation of 0x0040123b / F_0040123b failed: java.lang.RuntimeException: Unknown line 00401243.0+2 l.repe ret with code 'l.repe ret' and baseCommand 'repe' */

/* The decompilation of 0x0040164c / F_0040164c failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 00401652.0
// signature= func(F_00401652, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401652(???)
{
  (void) F_004018bc();
  reg_ai = g_0x00402074;
  reg_ae = intern_redirectCall(g_0x00402074);
  (void) STORE(InitValue(initial_value_of_ebp) + -28, reg_ae);
  if(reg_ae  ==  -1) {
    (void) intern_redirectCall(g_0x00402070);
  } else {
    (void) F_00401a16();
    (void) STORE(InitValue(initial_value_of_ebp) + -4, 0);
    reg_ag = intern_redirectCall(reg_ai);
    (void) STORE(InitValue(initial_value_of_ebp) + -28, reg_ag);
    reg_af = intern_redirectCall(reg_ai);
    (void) STORE(InitValue(initial_value_of_ebp) + -32, reg_af);
    reg_ah = g_0x00402054;
    (void) intern_redirectCall(g_0x00402054);
    reg_ad = F_00401a10();
    (void) STORE(InitValue(initial_value_of_ebp) + -36, reg_ad);
    reg_ac = intern_redirectCall(reg_ah);
    (void) STORE(&g_0x0040337c, reg_ac);
    reg_aa = intern_redirectCall(reg_ah);
    (void) STORE(&g_0x00403378, reg_aa);
    (void) STORE(InitValue(initial_value_of_ebp) + -4, -2);
    (void) F_004016ee();
  }
  reg_result = F_00401901();
  return reg_result;
}

// addr = 004016ee.0
// signature= func(F_004016ee, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004016ee(???)
{
  reg_result = F_00401a0a();
  return reg_result;
}

// addr = 004016f7.0
// signature= func(F_004016f7, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004016f7(???)
{
  (void) F_00401652();
  return BIT_TO_INT(BIT_TEST(31, BIT_TO_INT(0) * -1)) + -1;
}

/* The decompilation of 0x0040170e / F_0040170e failed: java.lang.RuntimeException: java.lang.ClassCastException: holdec.db cannot be cast to holdec.bX */

/* The decompilation of 0x0040175a / F_0040175a failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 00401760.0
// signature= func(F_00401760, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401760(???)
{
  return LOAD(ARG_0)  !=  23117 || LOAD(LOAD(ARG_0 + 60) + ARG_0)  !=  17744 ? 0 : WIDEN(BIT_TO_INT(LOAD(LOAD(ARG_0 + 60) + ARG_0 + 24)  ==  267));
}

// addr = 004017a0.0
// signature= func(F_004017a0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004017a0(???)
{

// calls     [3, 4]
// called    [0, 4]
// deep-calls     {2, 3, 4, 5, 6}
// depp-called    {0, 2, 3, 4, 7}
// startStackOffset -16
// modifiedAddresses  []
L2:
  if(LOAD(reg_var1 + 12)  >  ARG_1) goto L4;
  goto L3;

// calls     [4, 6]
// called    [2]
// deep-calls     {2, 3, 4, 5, 6}
// depp-called    {0, 2, 3, 4, 7}
// startStackOffset -16
// modifiedAddresses  []
L3:
  reg_result = reg_var1;
  if(LOAD(reg_var1 + 12) + LOAD(reg_var1 + 8)  >  ARG_1) goto L6;
  goto L4;

// calls     [2, 5]
// called    [2, 3]
// deep-calls     {2, 3, 4, 5, 6}
// depp-called    {0, 2, 3, 4, 7}
// startStackOffset -16
// modifiedAddresses  []
L4:
  reg_var2++;
  reg_var1 += 40;
  if(reg_var2  <  UNSIGNED_EXTEND(LOAD(LOAD(ARG_0 + 60) + ARG_0 + 6))) goto L2;
  goto L5;

// calls     [6]
// called    [0, 4]
// deep-calls     {6}
// depp-called    {0, 2, 3, 4, 7}
// startStackOffset -16
// modifiedAddresses  []
L5:
  reg_result = 0;
  goto L6;
}

// addr = 004017f0.0
// signature= func(F_004017f0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004017f0(???)
{
  (void) STORE(local + 12, InitValue(initial_value_of_edi));
  (void) STORE(local + 16, InitValue(initial_value_of_esi));
  (void) STORE(local + 20, InitValue(initial_value_of_ebx));
  (void) STORE(local + 32, g_0x00000000);
  (void) STORE(local + 36, 4200725);
  (void) STORE(local + 40, 4203032);
  (void) STORE(local + 44, -2);
  (void) STORE(local + 48, InitValue(initial_value_of_ebp));
  reg_ae = g_0x00403000;
  (void) STORE(local + 40, 4203032 ^ g_0x00403000);
  (void) STORE(local + 8, reg_ae ^ local + 48);
  (void) STORE(&g_0x00000000, local + 32);
  (void) STORE(local + 24, local + 8);
  (void) STORE(local + 4, 0x400000);
  (void) STORE(local + 44, 0);
  reg_ad = F_00401760();
  if(reg_ad  ==  0) {
    reg_var1 = 1;
  } else {
    (void) STORE(local + 4, ARG_0 + -4194304);
    (void) STORE(local, 0x400000);
    reg_af = F_004017a0();
    if(reg_af  ==  0) {
      reg_var1 = 1;
    } else {
      reg_var1 = 0;
    }
  }
  if(reg_var1  ==  0) {
    reg_result = ~BIT_TO_INT(LOAD(reg_af + 36)  <  0) & 1;
    (void) STORE(local + 44, -2);
  } else {
    reg_result = 0;
    (void) STORE(local + 44, -2);
  }
  (void) STORE(&g_0x00000000, LOAD(local + 32));
  return reg_result;
}

/* The decompilation of 0x004018ae / F_004018ae failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x004018b4 / F_004018b4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 004018bc.0
// signature= func(F_004018bc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_004018bc(???)
{
  (void) STORE(local + 20, g_0x00000000);
  (void) STORE(local + 24, 4200725);
  reg_ab = ARG_1;
  (void) STORE(&ARG_1, InitValue(initial_value_of_ebp));
  (void) STORE(reg_ab * -1 + local + 16, InitValue(initial_value_of_ebx));
  (void) STORE(reg_ab * -1 + local + 12, InitValue(initial_value_of_esi));
  (void) STORE(reg_ab * -1 + local + 8, InitValue(initial_value_of_edi));
  reg_aa = g_0x00403000;
  (void) STORE(&ARG_0, ARG_0 ^ g_0x00403000);
  (void) STORE(reg_ab * -1 + local + 4, reg_aa ^ &ARG_1);
  (void) STORE(local + 12, reg_ab * -1 + local + 4);
  (void) STORE(reg_ab * -1 + local, LOAD(InitStackPointer));
  reg_ac = ARG_0 ^ g_0x00403000 ^ reg_aa;
  (void) STORE(&ARG_0, -2);
  (void) STORE(InitStackPointer, reg_ac);
  (void) STORE(&g_0x00000000, local + 20);
  return local + 20;
}

// addr = 00401901.0
// signature= func(F_00401901, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401901(???)
{
  (void) STORE(&g_0x00000000, LOAD(InitValue(initial_value_of_ebp) + -16));
  (void) STORE(InitValue(initial_value_of_ebp), LOAD(InitStackPointer));
  return InitValue(initial_value_of_eax);
}

// addr = 0040193a.0
// signature= func(F_0040193a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0040193a(???)
{
  reg_result = F_00401a28();
  if(reg_result  !=  0) {
    reg_result = F_00401a22();
  }
  return reg_result;
}

// addr = 00401965.0
// signature= func(F_00401965, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401965(???)
{
  return 0;
}

// addr = 00401968.0
// signature= func(F_00401968, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_00401968(???)
{
  (void) STORE(local + 36, InitValue(initial_value_of_ebp));
  reg_an = g_0x00403000;
  (void) STORE(local + 12, InitValue(initial_value_of_edi));
  (void) STORE(local + 16, InitValue(initial_value_of_ebx));
  (void) STORE(local + 28, 0);
  (void) STORE(local + 32, 0);
  if(reg_an  ==  -1153374642 || (0xffff0000 & reg_an)  ==  0) {
    (void) STORE(local + 4, local + 28);
    (void) STORE(local + 8, InitValue(initial_value_of_esi));
    (void) intern_redirectCall(g_0x00402030);
    reg_ab = LOAD(local + 32) ^ LOAD(local + 28);
    reg_ag = intern_redirectCall(g_0x00402000);
    reg_ai = intern_redirectCall(g_0x00402004);
    reg_al = intern_redirectCall(g_0x00402008);
    (void) STORE(local, local + 20);
    (void) intern_redirectCall(g_0x0040200c);
    reg_result = LOAD(local + 24) ^ LOAD(local + 20);
    reg_resulta = reg_result;
    if((reg_ab ^ reg_ag ^ reg_ai ^ reg_al ^ reg_result)  ==  -1153374642) {
      reg_var1 = -1153374641;
    } else {
      reg_var1 = reg_ab ^ reg_ag ^ reg_ai ^ reg_al ^ reg_resulta;
      if((0xffff0000 & reg_var1)  ==  0) {
        reg_result = reg_var1 * 0x10000;
        reg_var1 = reg_var1 | reg_result;
      }
    }
    (void) STORE(&g_0x00403000, reg_var1);
    (void) STORE(&g_0x00403004, ~reg_var1);
  } else {
    reg_result = ~reg_an;
    (void) STORE(&g_0x00403004, reg_result);
  }
  return reg_result;
}

/* The decompilation of 0x004019fe / F_004019fe failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00401a04 / F_00401a04 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00401a0a / F_00401a0a failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00401a10 / F_00401a10 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00401a16 / F_00401a16 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00401a1c / F_00401a1c failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00401a22 / F_00401a22 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00401a28 / F_00401a28 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x00401a2e / F_00401a2e failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */


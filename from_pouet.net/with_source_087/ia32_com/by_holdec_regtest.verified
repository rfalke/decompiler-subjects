// Decompiled by holdec

// address: 00000100.0
// full-signature: func(main, return=[<int(undef, 2),null,unknown>], parameter=[], varargs=false)
d2 main(void)
{
  reg_var1 = -1536;
  reg_var2 = 0.0;
  do {
    reg_var1a = reg_var1;
    (void) STORE(UNSIGNED_EXTEND(reg_var1), FLOAT_TO_SIGNED_INT(34.0 * SIN(reg_var2) + 68.0));
    reg_var2 += 0.01227184630308513;
    reg_af = reg_var1 + 1;
    reg_var1++;
  } while(reg_af != 0);
  reg_ah = setVideoMode(19);
  reg_var3 = WIDEN(reg_ah);
  while(1) {
    reg_var4 = 255;
    reg_var5 = reg_var1a + 1;
    reg_var7 = reg_var3 + 1;
    reg_var7a = reg_var7;
    reg_var6 = NARROW(reg_var7);
    do {
      reg_as = WIDEN(LOAD(UNSIGNED_EXTEND(reg_var6) + 0xfa00)) | 0xfa00;
      reg_var7++;
      reg_var6 = NARROW(reg_var7);
      reg_av = UNSIGNED_EXTEND(reg_var4 & 0xff00 | 0xa0);
      reg_aw = reg_var4 & 0xff00 | 0xa0;
      reg_var4 = 0;
      (void) _holdec_memcpy(UNSIGNED_EXTEND(reg_as), SEGMENT2ADDR(reg_var7a) + UNSIGNED_EXTEND(reg_var5), reg_av * 2);
      reg_var5 += reg_aw;
    } while(reg_var5 < -1536 || reg_var5 > -1);
    reg_var3 = reg_var7a;
  }
}


// Decompiled by holdec

// address: 08048390.0
// full-signature: func(main, return=[], parameter=[], varargs=false)
void main(void)
{
  reg_a = malloc(12);
  reg_var2 = reg_a + 4;
  reg_var1 = 2;
  (void) STORE(reg_a + 4, 134519545);
  while(1) {
    reg_var1--;
    if(reg_var1 == 0) {
      break;
    }
    reg_var5 = LOAD(reg_var2);
    reg_var4 = NARROW(reg_var5);
    reg_i = strlen(reg_var5);
    reg_var3 = reg_i;
    if(reg_var3 > 10) {
      reg_var3 = 10;
    }
    for(reg_var12 = 0; reg_var12 < 7; reg_var12++) {
      reg_var6 = 0;
      while(reg_var6 < reg_var3) {
        reg_var7 = SIGNED_EXTEND(LOAD(LOAD(reg_var2) + reg_var6)) + -32;
        if(reg_var7 < 0) {
          reg_var7 = 0;
        }
        for(reg_var11 = 0; reg_var11 < 7; reg_var11++) {
          reg_var8 = reg_var7;
          if(reg_var8 < 0) {
            reg_var8 = reg_var7 + 7;
          }
          reg_var9 = reg_var7;
          if(reg_var9 < 0) {
            reg_var9 = reg_var7 + 7;
          }
          reg_var5 = reg_var5 & 0xffffff00 | 0x3;
          reg_var4 = reg_var4 & 0xff00 | 0x3;
          (void) STORE(reg_var11 + reg_var6 * 8 + local + 48, LOAD(LOAD(reg_var12 * 4 + (reg_var8 >> 3) * 28 + 134523712) + reg_var11 + reg_var7 * 7 + (reg_var9 >> 3) * -56));
        }
        (void) STORE(reg_var6 * 8 + local + 55, 32);
        reg_var6++;
      }
      reg_var5 = reg_var5 & 0xffffff00 | 0x3;
      reg_var4 = reg_var4 & 0xff00 | 0x3;
      reg_var10 = reg_var3 * 8 + -1;
      while(LOAD(reg_var10 + local + 48) == 32 && reg_var10 > -1) {
        (void) STORE(reg_var10 + local + 48, 0);
        reg_var10--;
      }
      (void) puts(&line);
    }
    (void) puts("");
    reg_var2 += 4;
  }
}


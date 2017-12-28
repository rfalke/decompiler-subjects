// Decompiled by holdec

// address: 08048390.0
// full-signature: func(main, return=[], parameter=[], varargs=false)
void main(void)
{
  reg_aa = malloc(12);
  reg_var1 = 2;
  reg_var2 = reg_aa + 4;
  (void) STORE(reg_aa + 4, 134519545);
  while(1) {
    reg_var1--;
    if(reg_var1 == 0) {
      break;
    }
    reg_ag = strlen(LOAD(reg_var2));
    reg_var3 = reg_ag;
    if(reg_var3 > 10) {
      reg_var3 = 10;
    }
    for(reg_var9 = 0; reg_var9 < 7; reg_var9++) {
      reg_var4 = 0;
      while(reg_var4 < reg_var3) {
        reg_am = SIGNED_EXTEND(LOAD(LOAD(reg_var2) + reg_var4)) >= 32 ? SIGNED_EXTEND(LOAD(LOAD(reg_var2) + reg_var4)) + -32 : 0;
        for(reg_var8 = 0; reg_var8 < 7; reg_var8++) {
          reg_var5 = reg_am;
          if(reg_var5 < 0) {
            reg_var5 += 7;
          }
          reg_var6 = reg_am;
          if(reg_var6 < 0) {
            reg_var6 += 7;
          }
          (void) STORE(reg_var8 + reg_var4 * 8 + local + 48, LOAD(LOAD(reg_var9 * 4 + (reg_var5 >> 3) * 28 + 134523712) + reg_var8 + reg_am * 7 + (reg_var6 >> 3) * -56));
        }
        (void) STORE(reg_var4 * 8 + local + 55, 32);
        reg_var4++;
      }
      reg_var7 = reg_var3 * 8 + -1;
      while(LOAD(reg_var7 + local + 48) == 32 && reg_var7 > -1) {
        (void) STORE(reg_var7 + local + 48, 0);
        reg_var7--;
      }
      (void) puts(&line);
    }
    (void) puts("");
    reg_var2 += 4;
  }
  return;
}


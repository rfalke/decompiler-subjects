// Decompiled by holdec

// address: 0804804c.0
// full-signature: func(start, return=[<int(undef, 4),null,unknown>], parameter=[], varargs=false)
d4 start(void)
{
  while(1) {
    reg_a = sys_read(0, &buffer, 80);
    reg_var2 = reg_a;
    reg_var2a = reg_var2;
    reg_var1 = NARROW(reg_var2);
    if(reg_a == 0) {
      break;
    }
    reg_var4 = reg_var2;
    reg_var6 = &buffer;
    reg_var5 = reg_var6;
    do {
      reg_var3 = LOAD(reg_var6);
      reg_var2 = reg_var2 & 0xffffff00 | WIDEN(reg_var3);
      reg_var1 = reg_var1 & 0xff00 | WIDEN(reg_var3);
      reg_var6++;
      if(reg_var3 > 96 && reg_var3 < 110 || reg_var3 > 64 && reg_var3 < 78) {
        reg_var3 += 13;
        reg_var2 = reg_var2 & 0xffffff00 | WIDEN(reg_var3);
        reg_var1 = reg_var1 & 0xff00 | WIDEN(reg_var3);
      } else if(reg_var3 > 96 && reg_var3 < 123 || reg_var3 > 64 && reg_var3 < 91) {
        reg_var3 -= 13;
        reg_var2 = reg_var2 & 0xffffff00 | WIDEN(reg_var3);
        reg_var1 = reg_var1 & 0xff00 | WIDEN(reg_var3);
      }
      (void) STORE(reg_var5, reg_var3);
      reg_var5++;
      reg_k = reg_var4 + -1;
      reg_var4--;
    } while(reg_k != 0);
    (void) sys_write(1, &buffer, reg_var2a);
  }
  (void) sys_exit(reg_var2);
  // not reached
}


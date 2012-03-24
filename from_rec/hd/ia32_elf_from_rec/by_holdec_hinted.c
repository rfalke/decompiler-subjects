// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x08048660 / dumpline failed: java.lang.RuntimeException: java.lang.ClassCastException: holdec.db cannot be cast to holdec.bX */

// addr = 080487f0.0
// signature= func(hexdump, ret=[<0, int(undef, 4),,unknown>], para=[<0, ptr(int(undef, 1)),fname,unknown>], varargs=false)
??? hexdump(???)
{
  reg_am = stat(fname, &stat_buffer);
  if(reg_am  ==  0) {
    (void) perror(fname);
    reg_result = 1;
  } else {
    reg_ae = fname;
    reg_ai = fopen(fname, "rb");
    if(reg_ai  ==  0) {
      (void) perror(fname);
      reg_result = 1;
    } else {
      reg_var1 = 0;
      while(reg_var1  <  LOAD(&stat_buffer + 20)) {
        reg_ag = fopen(reg_ae, "rb");
        reg_ak = fread(&read_buffer, 1, 16, reg_ag);
        if(reg_ak  ==  0) {
          break;
        }
        (void) dumpline(&read_buffer, reg_var1, reg_ak);
        reg_var1 += reg_ak;
      }
      reg_ah = fopen(reg_ae, "rb");
      (void) fclose(reg_ah);
      reg_result = 0;
    }
  }
  return reg_result;
}

// addr = 080488e0.0
// signature= func(main, ret=[<0, int(undef, 4),,unknown>], para=[<0, int(undef, 4),argc,unknown>, <1, ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
??? main(???)
{
  reg_result = 0;
  reg_var1 = 1;
  while(reg_var1  <  argc) {
    reg_ac = hexdump(LOAD(reg_var1 * 4 + argv));
    reg_result += reg_ac;
    reg_var1++;
  }
  return reg_result;
}


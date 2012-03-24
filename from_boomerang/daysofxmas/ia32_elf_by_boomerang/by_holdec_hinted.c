// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048350.0
// signature= func(main, ret=[<0, int(undef, 4),,unknown>], para=[<0, int(undef, 4),argc,unknown>, <1, ptr(int(undef, 1)),argc,unknown>, <2, ptr(int(undef, 1)),envp,unknown>], varargs=false)
??? main(???)
{
  reg_bc = argc;
  reg_al = argc;
  reg_bg = envp;
  if(argc  <  -72 || argc  !=  0 && argc  !=  SIGNED_EXTEND(LOAD(envp)) || argc  >  -51 && argc  !=  0) {
    if(argc  <=  1 && argc  <=  0) {
      if(argc  >  -51 && argc  <  0) {
        reg_var2 = envp + 1;
        reg_var3 = argc;
        reg_var5 = argc;
        if(LOAD(envp)  ==  47) {
          reg_var5 = argc + 1;
        }
        reg_var1 = reg_var5;
      } else {
        if(argc  <  -72) {
          reg_var2 = 134514048;
          reg_var3 = argc;
          reg_var1 = argc;
        } else {
          reg_var2 = envp + 1;
          reg_var3 = argc;
          reg_var1 = -65;
        }
      }
      reg_var8 = 2;
    } else {
      if(argc  >  1) {
        reg_ba = argc;
        if(argc  <=  2) {
          reg_bf = main(-86, 0, envp + 1);
          reg_bl = main(-87, reg_al * -1 + 1, reg_bf + reg_bg);
          (void) main(-79, -13, reg_bg + reg_bl);
        }
        if(reg_bc  <  argc) {
          (void) main(reg_ba + 1, argc, envp);
        }
        reg_bh = argc;
        reg_ch = main(-94, argc + -27, envp);
        if(reg_ch  ==  0 || reg_bh  !=  2) {
          reg_var7 = 0;
        } else if(argc  <=  12) {
          reg_var2 = 134513960;
          reg_var3 = argc + 1;
          reg_var7 = 1;
        } else {
          reg_var7 = 2;
        }
      } else {
        reg_var2 = 134513970;
        reg_var3 = 2;
        reg_var7 = 1;
      }
      if(reg_var7  ==  0) {
        reg_var8 = 1;
      } else if(reg_var7  ==  1) {
        reg_var1 = 2;
        reg_var8 = 2;
      } else {
        reg_var8 = 0;
      }
    }
    if(reg_var8  !=  0 && reg_var8  !=  1) {
      reg_var4 = main(reg_var1, reg_var3, reg_var2);
      reg_var9 = 0;
      reg_var10 = 1;
    } else {
      reg_var10 = 0;
    }
  } else {
    if(argc  <=  1 && argc  <=  0 && argc  ==  0) {
      reg_var9 = 1;
    } else {
      reg_var4 = SIGNED_EXTEND(LOAD(envp + 31));
      (void) _IO_putc(reg_var4);
      reg_var9 = 0;
    }
    reg_var10 = 1;
  }
  if(reg_var10  !=  0 && reg_var9  ==  0) {
    reg_result = reg_var4;
    reg_var6 = 1;
  } else if(reg_var10  !=  0) {
    reg_result = 0;
    if(LOAD(envp)  ==  47) {
      reg_var6 = 0;
    } else {
      reg_cj = main(-61, SIGNED_EXTEND(LOAD(envp)), "!ek;dc i@bK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry");
      reg_ao = main(0, reg_cj, reg_bg + 1);
      if(reg_ao  ==  0) {
        reg_var6 = 1;
      } else {
        reg_var6 = 0;
      }
    }
  } else if(reg_var8  ==  0) {
    reg_result = 9;
    reg_var6 = 1;
  } else {
    reg_result = 16;
    reg_var6 = 1;
  }
  if(reg_var6  ==  0) {
    reg_result = 1;
  }
  return reg_result;
}


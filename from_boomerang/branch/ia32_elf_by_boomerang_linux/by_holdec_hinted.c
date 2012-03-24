// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048410.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 36, InitValue(initial_value_of_ebx));
  (void) STORE(local + 4, local + 32);
  (void) STORE(local + 40, InitValue(initial_value_of_ebp));
  (void) STORE(local, 134514360);
  (void) scanf();
  (void) STORE(local + 4, local + 28);
  (void) STORE(local, 134514360);
  (void) scanf();
  if(LOAD(local + 32)  ==  5) {
    (void) STORE(local + 8, 6);
    (void) STORE(local + 12, g_0x08049854);
    (void) STORE(local + 4, 1);
    (void) STORE(local, 134514501);
    (void) fwrite();
    if(LOAD(local + 32)  ==  5) {
      reg_var7 = 1;
    } else {
      reg_var7 = 0;
    }
  } else {
    reg_var7 = 0;
  }
  if(reg_var7  ==  0) {
    (void) STORE(local + 8, 10);
    (void) STORE(local + 12, g_0x08049854);
    (void) STORE(local + 4, 1);
    (void) STORE(local, 134514363);
    (void) fwrite();
  }
  if(LOAD(local + 32)  >=  5) {
    reg_var3 = 1;
  } else {
    (void) STORE(local + 8, 8);
    (void) STORE(local + 12, g_0x08049854);
    (void) STORE(local + 4, 1);
    (void) STORE(local, 134514374);
    (void) fwrite();
    if(LOAD(local + 32)  <  5) {
      reg_var3 = 0;
    } else {
      reg_var3 = 1;
    }
  }
  if(reg_var3  ==  0) {
    reg_var2 = 1;
  } else {
    (void) STORE(local + 8, 14);
    (void) STORE(local + 12, g_0x08049854);
    (void) STORE(local + 4, 1);
    (void) STORE(local, 134514383);
    (void) fwrite();
    if(LOAD(local + 32)  >  5) {
      reg_var2 = 0;
    } else {
      reg_var2 = 1;
    }
  }
  if(reg_var2  ==  0) {
    reg_var1 = 0;
  } else {
    (void) STORE(local + 8, 17);
    (void) STORE(local + 12, g_0x08049854);
    (void) STORE(local + 4, 1);
    (void) STORE(local, 134514398);
    (void) fwrite();
    if(LOAD(local + 32)  <=  5) {
      reg_var1 = 1;
    } else {
      reg_var1 = 0;
    }
  }
  if(reg_var1  ==  0) {
    (void) STORE(local + 8, 5);
    (void) STORE(local + 12, g_0x08049854);
    (void) STORE(local + 4, 1);
    (void) STORE(local, 134514416);
    (void) fwrite();
  }
  if(LOAD(local + 28)  >=  5) {
    reg_var6 = 0;
  } else {
    (void) STORE(local + 8, 17);
    (void) STORE(local + 12, g_0x08049854);
    (void) STORE(local + 4, 1);
    (void) STORE(local, 134514422);
    (void) fwrite();
    if(LOAD(local + 28)  <  5) {
      reg_var6 = 1;
    } else {
      reg_var6 = 0;
    }
  }
  if(reg_var6  ==  0) {
    (void) STORE(local + 8, 23);
    (void) STORE(local + 12, g_0x08049854);
    (void) STORE(local + 4, 1);
    (void) STORE(local, 134514440);
    (void) fwrite();
    if(LOAD(local + 28)  >  5) {
      reg_var5 = 0;
    } else {
      reg_var5 = 1;
    }
  } else {
    reg_var5 = 1;
  }
  if(reg_var5  ==  0) {
    reg_var4 = 1;
  } else {
    (void) STORE(local + 8, 12);
    (void) STORE(local + 12, g_0x08049854);
    (void) STORE(local + 4, 1);
    (void) STORE(local, 134514464);
    (void) fwrite();
    if(LOAD(local + 28)  <=  5) {
      reg_var4 = 0;
    } else {
      reg_var4 = 1;
    }
  }
  if(reg_var4  !=  0) {
    (void) STORE(local + 8, 10);
    (void) STORE(local + 12, g_0x08049854);
    (void) STORE(local + 4, 1);
    (void) STORE(local, 134514477);
    (void) fwrite();
  }
  if(!BIT_TEST(31, LOAD(local + 32) * -1 + 5)) {
    (void) STORE(local + 8, 6);
    (void) STORE(local + 12, g_0x08049854);
    (void) STORE(local + 4, 1);
    (void) STORE(local, 134514488);
    (void) fwrite();
  }
  reg_result = LOAD(local + 32);
  if(BIT_TEST(31, reg_result * -1 + 5)) {
    (void) STORE(local + 8, 5);
    (void) STORE(local + 12, g_0x08049854);
    (void) STORE(local + 4, 1);
    (void) STORE(local, 134514495);
    reg_result = fwrite();
  }
  return reg_result;
}


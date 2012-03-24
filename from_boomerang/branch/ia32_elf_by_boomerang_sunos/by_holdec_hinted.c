// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048948.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 32, InitValue(initial_value_of_ebp));
  (void) STORE(local + 12, local + 28);
  (void) STORE(local + 16, InitValue(initial_value_of_ebx));
  (void) STORE(local + 20, InitValue(initial_value_of_esi));
  (void) STORE(local + 8, 134518056);
  (void) scanf();
  (void) STORE(local + 4, local + 24);
  (void) STORE(local, 134518056);
  (void) scanf();
  if(LOAD(local + 28)  ==  5) {
    (void) STORE(local + 12, 134518059);
    (void) printf();
  }
  if(LOAD(local + 28)  ==  5) {
    reg_var3 = 1;
  } else {
    (void) STORE(local + 12, 134518066);
    (void) printf();
    if(LOAD(local + 28)  >=  5) {
      reg_var3 = 1;
    } else {
      (void) STORE(local + 12, 134518077);
      (void) printf();
      if(LOAD(local + 28)  <  5) {
        reg_var3 = 0;
      } else {
        reg_var3 = 1;
      }
    }
  }
  if(reg_var3  ==  0) {
    reg_var2 = 1;
  } else {
    (void) STORE(local + 12, 134518086);
    (void) printf();
    if(LOAD(local + 28)  >  5) {
      reg_var2 = 0;
    } else {
      reg_var2 = 1;
    }
  }
  if(reg_var2  ==  0) {
    reg_var1 = 0;
  } else {
    (void) STORE(local + 12, 134518101);
    (void) printf();
    if(LOAD(local + 28)  <=  5) {
      reg_var1 = 1;
    } else {
      reg_var1 = 0;
    }
  }
  if(reg_var1  ==  0) {
    (void) STORE(local + 12, 134518119);
    (void) printf();
  }
  if(LOAD(local + 24)  >=  5) {
    reg_var6 = 0;
  } else {
    (void) STORE(local + 12, 134518125);
    (void) printf();
    if(LOAD(local + 24)  <  5) {
      reg_var6 = 1;
    } else {
      reg_var6 = 0;
    }
  }
  if(reg_var6  ==  0) {
    (void) STORE(local + 12, 134518143);
    (void) printf();
    if(LOAD(local + 24)  >  5) {
      reg_var5 = 0;
    } else {
      reg_var5 = 1;
    }
  } else {
    reg_var5 = 1;
  }
  if(reg_var5  ==  0) {
    reg_var4 = 0;
  } else {
    (void) STORE(local + 12, 134518167);
    (void) printf();
    if(LOAD(local + 24)  <=  5) {
      reg_var4 = 1;
    } else {
      reg_var4 = 0;
    }
  }
  if(reg_var4  ==  0) {
    (void) STORE(local + 12, 134518180);
    (void) printf();
  }
  if(BIT_TEST(31, LOAD(local + 28) * -1 + 5)) {
    reg_var7 = 1;
  } else {
    (void) STORE(local + 12, 134518191);
    (void) printf();
    if(!BIT_TEST(31, LOAD(local + 28) * -1 + 5)) {
      reg_var7 = 0;
    } else {
      reg_var7 = 1;
    }
  }
  if(reg_var7  !=  0) {
    (void) STORE(local + 12, 134518198);
    (void) printf();
  }
  return 0;
}


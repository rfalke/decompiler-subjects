// Decompiled by holdec 1.1 (2012-03-24)

// addr = 0804835c.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 16, InitValue(initial_value_of_eax));
  (void) STORE(local + 20, InitValue(initial_value_of_ebx));
  (void) STORE(local + 24, InitValue(initial_value_of_ebp));
  (void) STORE(local, 134513880);
  (void) printf(134513880, LOAD(local + 4));
  reg_var2 = local + 16;
  (void) STORE(local + 4, reg_var2);
  (void) STORE(local, 134513895);
  (void) scanf();
  if(LOAD(local + 16)  >  1) {
    (void) STORE(local, LOAD(local + 16) + -1);
    reg_ag = fib(LOAD(local + 16) + -1);
    reg_var1 = reg_ag;
    (void) STORE(local, reg_ag + -1);
    reg_am = fib(reg_ag + -1);
    reg_var2 = reg_am + reg_var1;
    (void) STORE(local + 4, reg_var2);
    (void) STORE(local, 134513895);
    (void) printf(134513895, reg_var2);
    reg_var4 = 0;
  } else {
    reg_var1 = LOAD(local + 16);
    reg_var3 = 1;
    if(reg_var1  ==  1) {
      reg_var4 = 1;
    } else {
      reg_var4 = 0;
    }
  }
  if(reg_var4  ==  0) {
    reg_var3 = reg_var1;
  }
  (void) STORE(local + 12, reg_var2);
  (void) STORE(local + 4, LOAD(local + 16));
  (void) STORE(local + 8, reg_var3);
  (void) STORE(local, 134513898);
  (void) printf(134513898, LOAD(local + 16));
  return 0;
}

// addr = 080483e0.0
// signature= func(fib, ret=[<0, int(unsigned, 4),,unknown>], para=[<0, int(unsigned, 4),n,unknown>], varargs=false)
??? fib(???)
{
  if(n  >  1) {
    reg_ah = fib(n + -1);
    reg_var1 = reg_ah;
    reg_ak = fib(reg_ah + -1);
    (void) printf("%d", reg_ak + reg_var1);
    reg_var2 = 0;
  } else {
    reg_var1 = n;
    reg_result = 1;
    if(reg_var1  ==  1) {
      reg_var2 = 1;
    } else {
      reg_var2 = 0;
    }
  }
  if(reg_var2  ==  0) {
    reg_result = reg_var1;
  }
  return reg_result;
}


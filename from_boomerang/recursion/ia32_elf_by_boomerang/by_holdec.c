// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080482a8 / F_080482a8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482b8 / F_080482b8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482c8 / F_080482c8 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 08048306.0
// signature= func(F_08048306, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048306(???)
{
  if(LOAD(LOAD(InitStackPointer) + 5370)  !=  0) {
    (void) F_080482c8();
  }
  return ARG_0;
}

// addr = 0804837c.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(InitStackPointer + -40, ARG_0);
  (void) STORE(InitStackPointer + -44, 134514348);
  (void) F_080482b8();
  (void) STORE(InitStackPointer + -44, ARG_0 * 3);
  (void) b();
  return 0;
}

// addr = 080483c7.0
// signature= func(b, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? b(???)
{
  (void) F_080482b8();
  reg_result = c();
  return reg_result;
}

// addr = 080483f2.0
// signature= func(c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? c(???)
{
  reg_result = F_080482b8();
  if(ARG_0  <=  6) {
    reg_result = LOAD(ARG_0 * 4 + 134514372);
    if(ARG_0  >  6 || ARG_0  !=  0 && ARG_0  !=  1 && ARG_0  <  3) {
      reg_result = d();
    } else if(ARG_0  !=  0 && ARG_0  !=  1 && ARG_0  ==  3) {
      reg_result = f();
    } else if(ARG_0  !=  0 && ARG_0  !=  1 && ARG_0  ==  4) {
      reg_result = h();
    } else if(ARG_0  !=  0 && ARG_0  !=  1 && ARG_0  ==  5) {
      reg_result = j();
    } else if(ARG_0  !=  0 && ARG_0  !=  1) {
      reg_result = l();
    }
  }
  return reg_result;
}

// addr = 0804846a.0
// signature= func(d, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? d(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  1) {
    reg_result = e();
  }
  return reg_result;
}

// addr = 0804849b.0
// signature= func(e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? e(???)
{
  (void) F_080482b8();
  reg_result = c();
  return reg_result;
}

// addr = 080484c7.0
// signature= func(f, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? f(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  1) {
    reg_result = g();
  }
  return reg_result;
}

// addr = 080484f8.0
// signature= func(g, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? g(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  1) {
    reg_result = f();
  }
  return reg_result;
}

// addr = 08048529.0
// signature= func(h, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? h(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  0) {
    reg_result = i();
  }
  return reg_result;
}

// addr = 0804855a.0
// signature= func(i, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? i(???)
{
  reg_result = F_080482b8();
  return reg_result;
}

// addr = 08048575.0
// signature= func(j, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? j(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  1) {
    reg_result = k();
  }
  return reg_result;
}

// addr = 080485a4.0
// signature= func(k, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? k(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  1) {
    reg_result = e();
  }
  return reg_result;
}

// addr = 080485d5.0
// signature= func(l, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? l(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  1) {
    reg_result = b();
  }
  return reg_result;
}

// addr = 08048616.0
// signature= func(F_08048616, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048616(???)
{
  reg_af = LOAD(InitStackPointer);
  (void) _init();
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_result);
  if(!UNDEF) {
    reg_var1 = 0;
    reg_var2 = reg_af + 4366;
    do {
      reg_result = intern_redirectCall(LOAD(reg_var2));
      reg_var1++;
      reg_var2 += 4;
    } while(reg_var1  <  LOAD(InitValue(initial_value_of_ebp) + -16));
  }
  return reg_result;
}

// addr = 08048692.0
// signature= func(F_08048692, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048692(???)
{
  (void) __do_global_dtors_aux();
  return ARG_0;
}


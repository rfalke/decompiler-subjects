// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x0804827c / strlen failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0804829c / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482da.0
// signature= func(F_080482da, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482da(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4850);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 0804835c.0
// signature= func(proc1, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? proc1(???)
{
  if(ARG_0  <=  2) {
    reg_ab = strlen();
    (void) STORE(&ARG_0, reg_ab);
  } else {
    reg_aa = strlen();
    (void) STORE(&ARG_0, reg_aa);
    (void) strlen();
    (void) printf();
  }
  (void) printf();
  return ARG_0;
}

// addr = 080483cf.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) proc1();
  (void) printf();
  return 0;
}

// addr = 0804849e.0
// signature= func(F_0804849e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804849e(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


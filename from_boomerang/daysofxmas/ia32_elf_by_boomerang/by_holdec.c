// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x08048290 / _IO_putc failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482ce.0
// signature= func(F_080482ce, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482ce(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 5454);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048350.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_bb = ARG_0;
  if(ARG_0  ==  0 && ARG_0  <  2) {
    reg_result = 0;
    if(LOAD(ARG_2)  ==  47) {
      reg_var2 = 1;
    } else {
      (void) main();
      reg_at = main();
      if(reg_at  ==  0) {
        reg_var2 = 0;
      } else {
        reg_var2 = 1;
      }
    }
  } else {
    if(ARG_0  >  -73 && ARG_0  <  -50 && ARG_1  ==  SIGNED_EXTEND(LOAD(ARG_2))) {
      reg_var1 = _IO_putc();
      reg_var4 = 2;
    } else {
      if(ARG_0  <  -72 || ARG_0  <  2 && ARG_1  !=  SIGNED_EXTEND(LOAD(ARG_2)) || ARG_0  >  -51 && ARG_0  <  2) {
        reg_var3 = 0;
      } else {
        if(ARG_0  >  1 && ARG_0  <=  2) {
          (void) main();
          (void) main();
          (void) main();
        }
        if(reg_bb  <  ARG_1) {
          (void) main();
        }
        reg_aa = ARG_0;
        reg_be = main();
        if(reg_be  ==  0 || reg_aa  !=  2) {
          reg_var3 = 2;
        } else if(ARG_1  >  12) {
          reg_var3 = 1;
        } else {
          reg_var3 = 0;
        }
      }
      if(reg_var3  ==  0) {
        reg_var1 = main();
        reg_var4 = 2;
      } else if(reg_var3  ==  1) {
        reg_var4 = 1;
      } else {
        reg_var4 = 0;
      }
    }
    if(reg_var4  ==  0) {
      reg_result = 16;
      reg_var2 = 0;
    } else if(reg_var4  ==  1) {
      reg_result = 9;
      reg_var2 = 0;
    } else {
      reg_result = reg_var1;
      reg_var2 = 0;
    }
  }
  if(reg_var2  !=  0) {
    reg_result = 1;
  }
  return reg_result;
}

// addr = 080484fa.0
// signature= func(F_080484fa, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484fa(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x080482a0 / puts failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482b0 / malloc failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482c0 / strlen failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 0804830e.0
// signature= func(F_0804830e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804830e(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 10874);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

/* The decompilation of 0x08048390 / main failed: java.lang.RuntimeException: A non-current expression of a variable is used in block L20 in if(CMP(LOAD(ADD(reg_a40, SEGMENT2ADDR(reg_pp24))), ==, 32)) goto L21: The current setter is reg_zj6 while [reg_pp24] was found. Related expressions are [reg_zj8, reg_zj7, reg_pp27, reg_pp11, reg_zj6, reg_zj5, reg_pp30, reg_zj2, reg_pp24] */

// addr = 080485fe.0
// signature= func(F_080485fe, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080485fe(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


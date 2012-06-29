// Decompiled by holdec 1.2 (2012-06-07)

// addr = 080482a0.0
// signature= func(F_080482a0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482a0(???)
{
  if(LOAD(LOAD(InitStackPointer) + 5032)  !=  0) {
    (void) F_080482d4();
  }
  (void) frame_dummy();
  (void) __do_global_ctors_aux();
  return ARG_0;
}

/* The decompilation of 0x080482d4 / F_080482d4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482e4 / F_080482e4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080482f4 / F_080482f4 failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x080483c4 / forever failed: java.lang.RuntimeException: forever has no exit blocks */

// addr = 080483eb.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) forever();
  return 0;
}

// addr = 0804846a.0
// signature= func(__i686.get_pc_thunk.bx, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __i686.get_pc_thunk.bx(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 080484a8.0
// signature= func(F_080484a8, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484a8(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048474.0
// signature= func(proc1, ret=[<0, int(unsigned, 4),,unknown>], para=[<0, int(undef, 4),ptr,unknown>], varargs=false)
??? proc1(???)
{
  return LOAD(ptr + 24);
}

// addr = 0804847f.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_aa = F_08048384();
  (void) STORE(InitStackPointer + -44, LOAD(reg_aa));
  reg_ab = proc1(LOAD(reg_aa));
  (void) STORE(InitStackPointer + -40, reg_ab);
  (void) STORE(InitStackPointer + -44, 134514168);
  (void) printf(134514168, reg_ab);
  return 0;
}


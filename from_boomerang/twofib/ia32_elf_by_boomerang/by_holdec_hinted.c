// Decompiled by holdec 1.1 (2012-03-24)

// addr = 0804839c.0
// signature= func(fib, ret=[<0, ptr(int(signed, 4)),null,unknown>], para=[<0, int(unsigned, 4),n,unknown>], varargs=false)
??? fib(???)
{
  (void) STORE(local + 32, InitValue(initial_value_of_ebp));
  if(ARG_1  ==  0) {
    (void) STORE(local + 24, 0);
    (void) STORE(local + 28, 1);
  } else {
    (void) STORE(local + 4, ARG_1 + -1);
    (void) STORE(local, local + 24);
    (void) fib(local + 24);
    (void) STORE(local + 20, LOAD(local + 24));
    (void) STORE(local + 24, LOAD(local + 28));
    (void) STORE(local + 28, LOAD(local + 28) * 2);
  }
  reg_aa = LOAD(local + 28);
  reg_result = n;
  (void) STORE(n, LOAD(local + 24));
  (void) STORE(reg_result + 4, reg_aa);
  return reg_result;
}

// addr = 080483f5.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 44, InitValue(initial_value_of_ebp));
  (void) STORE(InitStackPointer + -60, 134513988);
  (void) printf(134513988, LOAD(InitStackPointer + -56));
  (void) STORE(InitStackPointer + -56, local + 40);
  (void) STORE(InitStackPointer + -60, 134514003);
  (void) F_080482c4();
  (void) STORE(InitStackPointer + -56, LOAD(local + 40));
  (void) STORE(InitStackPointer + -60, local + 28);
  (void) fib(local + 28);
  (void) STORE(InitStackPointer + -56, LOAD(local + 28));
  (void) STORE(InitStackPointer + -60, LOAD(local + 40));
  (void) STORE(InitStackPointer + -64, 134514006);
  (void) printf(134514006, LOAD(local + 40));
  return 0;
}


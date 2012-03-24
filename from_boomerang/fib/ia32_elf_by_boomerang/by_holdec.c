// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x08048268 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 08048280.0
// signature= func(F_08048280, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048280(???)
{
  reg_ab = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, 134513615);
  (void) STORE(local + 16, reg_ab);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513200);
  (void) STORE(local + 28, 134513728);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  reg_ad = __libc_start_main();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, reg_ad);
  (void) F_080482ae();
  reg_result = LOAD(LOAD(local) + 4798);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080482ae.0
// signature= func(F_080482ae, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482ae(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4798);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 0804833d.0
// signature= func(F_0804833d, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804833d(???)
{
  if(InitValue(initial_value_of_eax)  !=  0) {
    (void) F_00000000();
  }
  reg_result = g_0x08049554;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
  }
  return reg_result;
}

// addr = 08048390.0
// signature= func(fib, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? fib(???)
{
  if(ARG_0  <=  1) {
    reg_result = ARG_0;
  } else {
    reg_ad = fib();
    reg_ab = fib();
    reg_result = reg_ab + reg_ad;
  }
  return reg_result;
}

// addr = 080483cf.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) fib();
  (void) printf();
  return 0;
}

// addr = 0804844a.0
// signature= func(F_0804844a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804844a(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

